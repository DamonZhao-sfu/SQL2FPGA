// number of overlays (w/o fusion): 1 
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

#include "cfgFunc_q14.hpp" 
#include "q14.hpp" 

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
    std::cout << "NOTE:running query #14\n."; 
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
    Table tbl_Aggregate_TD_0694_output("tbl_Aggregate_TD_0694_output", 6100000, 1, "");
    tbl_Aggregate_TD_0694_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1195_output("tbl_JOIN_INNER_TD_1195_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1195_output.allocateHost();
    Table tbl_Project_TD_2255_output("tbl_Project_TD_2255_output", -1, 3, "");
    tbl_Project_TD_2255_output.allocateHost();
    Table tbl_Project_TD_2255_emptyBufferB("tbl_Project_TD_2255_emptyBufferB", 1, 8, "");
    tbl_Project_TD_2255_emptyBufferB.allocateHost();
    Table tbl_Project_TD_2292_output("tbl_Project_TD_2292_output", 6100000, 2, "");
    tbl_Project_TD_2292_output.allocateHost();
    Table tbl_Filter_TD_3690_output("tbl_Filter_TD_3690_output", 6100000, 3, "");
    tbl_Filter_TD_3690_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4576_input;
    tbl_SerializeFromObject_TD_4576_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4576_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_4576_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_4576_input.allocateHost();
    tbl_SerializeFromObject_TD_4576_input.loadHost();
    Table tbl_SerializeFromObject_TD_448_input;
    tbl_SerializeFromObject_TD_448_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_448_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_448_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_448_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_448_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_448_input.allocateHost();
    tbl_SerializeFromObject_TD_448_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_2255_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2255_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3690_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_2255_cmds;
    cfg_Project_TD_2255_cmds.allocateHost();
    get_cfg_dat_Project_TD_2255_gqe_join (cfg_Project_TD_2255_cmds.cmd);
    cfg_Project_TD_2255_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_2255;
    krnl_Project_TD_2255 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_2255.setup(tbl_Filter_TD_3690_output, tbl_Project_TD_2255_emptyBufferB, tbl_Project_TD_2255_output, cfg_Project_TD_2255_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_2255;
    trans_Project_TD_2255.setq(q_h);
    trans_Project_TD_2255.add(&(cfg_Project_TD_2255_cmds));
    transEngine trans_Project_TD_2255_out;
    trans_Project_TD_2255_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_2255;
    std::vector<cl::Event> events_d2h_rd_Project_TD_2255;
    std::vector<cl::Event> events_Project_TD_2255;
    events_h2d_wr_Project_TD_2255.resize(1);
    events_d2h_rd_Project_TD_2255.resize(1);
    events_Project_TD_2255.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_2255;
    std::vector<cl::Event> prev_events_grp_Project_TD_2255;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_3_365_s, tv_r_Filter_3_365_e;
    gettimeofday(&tv_r_Filter_3_365_s, 0);
    SW_Filter_TD_3690(tbl_SerializeFromObject_TD_448_input, tbl_Filter_TD_3690_output);
    gettimeofday(&tv_r_Filter_3_365_e, 0);

    struct timeval tv_r_Project_2_992_s, tv_r_Project_2_992_e;
    gettimeofday(&tv_r_Project_2_992_s, 0);
    SW_Project_TD_2292(tbl_SerializeFromObject_TD_4576_input, tbl_Project_TD_2292_output);
    gettimeofday(&tv_r_Project_2_992_e, 0);

    struct timeval tv_r_Project_2_914_s, tv_r_Project_2_914_e;
    gettimeofday(&tv_r_Project_2_914_s, 0);
    trans_Project_TD_2255.add(&(tbl_Filter_TD_3690_output));
    trans_Project_TD_2255.host2dev(0, &(prev_events_grp_Project_TD_2255), &(events_h2d_wr_Project_TD_2255[0]));
    events_grp_Project_TD_2255.push_back(events_h2d_wr_Project_TD_2255[0]);
    krnl_Project_TD_2255.run(0, &(events_grp_Project_TD_2255), &(events_Project_TD_2255[0]));
    
    trans_Project_TD_2255_out.add(&(tbl_Project_TD_2255_output));
    trans_Project_TD_2255_out.dev2host(0, &(events_Project_TD_2255), &(events_d2h_rd_Project_TD_2255[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_2_914_e, 0);

    struct timeval tv_r_JOIN_INNER_1_322_s, tv_r_JOIN_INNER_1_322_e;
    gettimeofday(&tv_r_JOIN_INNER_1_322_s, 0);
    SW_JOIN_INNER_TD_1195(tbl_Project_TD_2255_output, tbl_Project_TD_2292_output, tbl_JOIN_INNER_TD_1195_output);
    gettimeofday(&tv_r_JOIN_INNER_1_322_e, 0);

    struct timeval tv_r_Aggregate_0_46_s, tv_r_Aggregate_0_46_e;
    gettimeofday(&tv_r_Aggregate_0_46_s, 0);
    SW_Aggregate_TD_0694(tbl_JOIN_INNER_TD_1195_output, tbl_Aggregate_TD_0694_output);
    gettimeofday(&tv_r_Aggregate_0_46_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_365_s, &tv_r_Filter_3_365_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_448_input: " << tbl_SerializeFromObject_TD_448_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_992_s, &tv_r_Project_2_992_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4576_input: " << tbl_SerializeFromObject_TD_4576_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_914_s, &tv_r_Project_2_914_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3690_output: " << tbl_Filter_TD_3690_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_322_s, &tv_r_JOIN_INNER_1_322_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2255_output: " << tbl_Project_TD_2255_output.getNumRow() << " " << "tbl_Project_TD_2292_output: " << tbl_Project_TD_2292_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_46_s, &tv_r_Aggregate_0_46_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1195_output: " << tbl_JOIN_INNER_TD_1195_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.5110341 * 1000 << "ms" << std::endl; 
    return 0; 
}
