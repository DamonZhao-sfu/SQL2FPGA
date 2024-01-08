// number of overlays (w/o fusion): 3 
// number of overlays (w/ fusion): 1 
#include <sys/time.h> 
#include <algorithm> 
#include <cstring> 
#include <fstream> 
#include <iomanip> 
#include <iostream> 
#include <sstream> 
#include <climits> 
#include <unordered_map> 
const int PU_NM = 8; 

#include "table_dt.hpp" 
#include "utils.hpp" 
#include "tpch_read_2.hpp" 
#include "gqe_api.hpp" 

#include "cfgFunc_q8.hpp" 
#include "q8.hpp" 

int main(int argc, const char* argv[]) { 
    std::cout << "\n------------ TPC-H Query Test -------------\n"; 
    ArgParser parser(argc, argv); 
    std::string xclbin_path; 
    if (!parser.getCmdOption("-xclbin", xclbin_path)) { 
        std::cout << "ERROR: xclbin path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_h; 
    if (!parser.getCmdOption("-xclbin_h", xclbin_path_h)) { 
        std::cout << "ERROR: xclbin_h path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_a; 
    if (!parser.getCmdOption("-xclbin_a", xclbin_path_a)) { 
        std::cout << "ERROR: xclbin_a path is not set!\n"; 
        return 1; 
    } 
    std::string in_dir; 
    if (!parser.getCmdOption("-in", in_dir) || !is_dir(in_dir)) { 
        std::cout << "ERROR: input dir is not specified or not valid.\n"; 
        return 1; 
    } 
    int num_rep = 1; 
    std::string num_str; 
    if (parser.getCmdOption("-rep", num_str)) { 
        try { 
            num_rep = std::stoi(num_str); 
        } catch (...) { 
            num_rep = 1; 
        } 
    } 
    if (num_rep > 20) { 
        num_rep = 20; 
        std::cout << "WARNING: limited repeat to " << num_rep << " times\n."; 
    } 
    int scale = 1; 
    std::string scale_str; 
    if (parser.getCmdOption("-c", scale_str)) { 
        try { 
            scale = std::stoi(scale_str); 
        } catch (...) { 
            scale = 1; 
        } 
    } 
    std::cout << "NOTE:running query #8\n."; 
    std::cout << "NOTE:running in sf" << scale << " data\n"; 

    int32_t lineitem_n = SF1_LINEITEM; 
    int32_t supplier_n = SF1_SUPPLIER; 
    int32_t nation_n = SF1_NATION; 
    int32_t orders_n = SF1_ORDERS; 
    int32_t customer_n = SF1_CUSTOMER; 
    int32_t region_n = SF1_REGION; 
    int32_t part_n = SF1_PART; 
    int32_t partsupp_n = SF1_PARTSUPP; 
    if (scale == 30) { 
        lineitem_n = SF30_LINEITEM; 
        supplier_n = SF30_SUPPLIER; 
        nation_n = SF30_NATION; 
        orders_n = SF30_ORDERS; 
        customer_n = SF30_CUSTOMER; 
        region_n = SF30_REGION; 
        part_n = SF30_PART; 
        partsupp_n = SF30_PARTSUPP; 
    } 
    // ********************************************************** // 
    // Get CL devices. 
    std::vector<cl::Device> devices = xcl::get_xil_devices(); 
    cl::Device device_h = devices[0]; 
    // Create context_h and command queue for selected device 
    cl::Context context_h(device_h); 
    cl::CommandQueue q_h(context_h, device_h, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE); 
    std::string devName_h = device_h.getInfo<CL_DEVICE_NAME>(); 
    std::cout << "Selected Device " << devName_h << "\n"; 
    cl::Program::Binaries xclBins_h = xcl::import_binary_file(xclbin_path_h); 
    std::vector<cl::Device> devices_h; 
    devices_h.push_back(device_h); 
    cl::Program program_h(context_h, devices_h, xclBins_h); 
    // ****************************** Tables **************************** // 
    Table tbl_Sort_TD_0804_output("tbl_Sort_TD_0804_output", 6100000, 2, "");
    tbl_Sort_TD_0804_output.allocateHost();
    Table tbl_Aggregate_TD_1443_output("tbl_Aggregate_TD_1443_output", 6100000, 2, "");
    tbl_Aggregate_TD_1443_output.allocateHost();
    Table tbl_Project_TD_2192_output("tbl_Project_TD_2192_output", 6100000, 3, "");
    tbl_Project_TD_2192_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3438_output("tbl_JOIN_INNER_TD_3438_output", 2539, 4, "");
    tbl_JOIN_INNER_TD_3438_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8628_input;
    tbl_SerializeFromObject_TD_8628_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_8628_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_8628_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_8628_input.allocateHost();
    tbl_SerializeFromObject_TD_8628_input.loadHost();
    Table tbl_Filter_TD_5382_output("tbl_Filter_TD_5382_output", 6100000, 1, "");
    tbl_Filter_TD_5382_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6783_input;
    tbl_SerializeFromObject_TD_6783_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6783_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_6783_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_6783_input.allocateHost();
    tbl_SerializeFromObject_TD_6783_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_3438_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_8628_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5382_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_3438_cmds;
    cfg_JOIN_INNER_TD_3438_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3438_gqe_join (cfg_JOIN_INNER_TD_3438_cmds.cmd);
    cfg_JOIN_INNER_TD_3438_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_3438;
    krnl_JOIN_INNER_TD_3438 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3438.setup(tbl_Filter_TD_5382_output, tbl_SerializeFromObject_TD_8628_input, tbl_JOIN_INNER_TD_3438_output, cfg_JOIN_INNER_TD_3438_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_3438;
    trans_JOIN_INNER_TD_3438.setq(q_h);
    trans_JOIN_INNER_TD_3438.add(&(cfg_JOIN_INNER_TD_3438_cmds));
    trans_JOIN_INNER_TD_3438.add(&(tbl_SerializeFromObject_TD_8628_input));
    transEngine trans_JOIN_INNER_TD_3438_out;
    trans_JOIN_INNER_TD_3438_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3438;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3438;
    std::vector<cl::Event> events_JOIN_INNER_TD_3438;
    events_h2d_wr_JOIN_INNER_TD_3438.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3438.resize(1);
    events_JOIN_INNER_TD_3438.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3438;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3438;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_383_s, tv_r_Filter_5_383_e;
    gettimeofday(&tv_r_Filter_5_383_s, 0);
    SW_Filter_TD_5382(tbl_SerializeFromObject_TD_6783_input, tbl_Filter_TD_5382_output);
    gettimeofday(&tv_r_Filter_5_383_e, 0);

    struct timeval tv_r_JOIN_INNER_3_21_s, tv_r_JOIN_INNER_3_21_e;
    gettimeofday(&tv_r_JOIN_INNER_3_21_s, 0);
    trans_JOIN_INNER_TD_3438.add(&(tbl_Filter_TD_5382_output));
    trans_JOIN_INNER_TD_3438.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3438), &(events_h2d_wr_JOIN_INNER_TD_3438[0]));
    events_grp_JOIN_INNER_TD_3438.push_back(events_h2d_wr_JOIN_INNER_TD_3438[0]);
    krnl_JOIN_INNER_TD_3438.run(0, &(events_grp_JOIN_INNER_TD_3438), &(events_JOIN_INNER_TD_3438[0]));
    
    trans_JOIN_INNER_TD_3438_out.add(&(tbl_JOIN_INNER_TD_3438_output));
    trans_JOIN_INNER_TD_3438_out.dev2host(0, &(events_JOIN_INNER_TD_3438), &(events_d2h_rd_JOIN_INNER_TD_3438[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_21_e, 0);

    struct timeval tv_r_Project_2_779_s, tv_r_Project_2_779_e;
    gettimeofday(&tv_r_Project_2_779_s, 0);
    SW_Project_TD_2192(tbl_JOIN_INNER_TD_3438_output, tbl_Project_TD_2192_output);
    gettimeofday(&tv_r_Project_2_779_e, 0);

    struct timeval tv_r_Aggregate_1_854_s, tv_r_Aggregate_1_854_e;
    gettimeofday(&tv_r_Aggregate_1_854_s, 0);
    SW_Aggregate_TD_1443(tbl_Project_TD_2192_output, tbl_Aggregate_TD_1443_output);
    gettimeofday(&tv_r_Aggregate_1_854_e, 0);

    struct timeval tv_r_Sort_0_640_s, tv_r_Sort_0_640_e;
    gettimeofday(&tv_r_Sort_0_640_s, 0);
    SW_Sort_TD_0804(tbl_Aggregate_TD_1443_output, tbl_Sort_TD_0804_output);
    gettimeofday(&tv_r_Sort_0_640_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_383_s, &tv_r_Filter_5_383_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6783_input: " << tbl_SerializeFromObject_TD_6783_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_21_s, &tv_r_JOIN_INNER_3_21_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8628_input: " << tbl_SerializeFromObject_TD_8628_input.getNumRow() << " " << "tbl_Filter_TD_5382_output: " << tbl_Filter_TD_5382_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_779_s, &tv_r_Project_2_779_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3438_output: " << tbl_JOIN_INNER_TD_3438_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_854_s, &tv_r_Aggregate_1_854_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2192_output: " << tbl_Project_TD_2192_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_640_s, &tv_r_Sort_0_640_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1443_output: " << tbl_Aggregate_TD_1443_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 10.0935335 * 1000 << "ms" << std::endl; 
    return 0; 
}
