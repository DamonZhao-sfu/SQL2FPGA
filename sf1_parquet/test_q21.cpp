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

#include "cfgFunc_q21.hpp" 
#include "q21.hpp" 

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
    std::cout << "NOTE:running query #21\n."; 
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
    Table tbl_Sort_TD_0865_output("tbl_Sort_TD_0865_output", 6100000, 2, "");
    tbl_Sort_TD_0865_output.allocateHost();
    Table tbl_Aggregate_TD_1760_output("tbl_Aggregate_TD_1760_output", 6100000, 2, "");
    tbl_Aggregate_TD_1760_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21_output("tbl_JOIN_INNER_TD_21_output", 25255, 1, "");
    tbl_JOIN_INNER_TD_21_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute = Table("supplier", supplier_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_7543_input;
    tbl_SerializeFromObject_TD_7543_input = Table("supplier", supplier_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7543_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7543_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_7543_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7543_input.allocateHost();
    tbl_SerializeFromObject_TD_7543_input.loadHost();
    Table tbl_Filter_TD_4131_output("tbl_Filter_TD_4131_output", 6100000, 1, "");
    tbl_Filter_TD_4131_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5838_input;
    tbl_SerializeFromObject_TD_5838_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5838_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5838_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5838_input.allocateHost();
    tbl_SerializeFromObject_TD_5838_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_21_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4131_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_21_cmds;
    cfg_JOIN_INNER_TD_21_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_21_gqe_join (cfg_JOIN_INNER_TD_21_cmds.cmd);
    cfg_JOIN_INNER_TD_21_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_21;
    krnl_JOIN_INNER_TD_21 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_21.setup(tbl_Filter_TD_4131_output, tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute, tbl_JOIN_INNER_TD_21_output, cfg_JOIN_INNER_TD_21_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_21;
    trans_JOIN_INNER_TD_21.setq(q_h);
    trans_JOIN_INNER_TD_21.add(&(cfg_JOIN_INNER_TD_21_cmds));
    trans_JOIN_INNER_TD_21.add(&(tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute));
    transEngine trans_JOIN_INNER_TD_21_out;
    trans_JOIN_INNER_TD_21_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_21;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_21;
    std::vector<cl::Event> events_JOIN_INNER_TD_21;
    events_h2d_wr_JOIN_INNER_TD_21.resize(1);
    events_d2h_rd_JOIN_INNER_TD_21.resize(1);
    events_JOIN_INNER_TD_21.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_21;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_21;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_680_s, tv_r_Filter_4_680_e;
    gettimeofday(&tv_r_Filter_4_680_s, 0);
    SW_Filter_TD_4131(tbl_SerializeFromObject_TD_5838_input, tbl_Filter_TD_4131_output);
    gettimeofday(&tv_r_Filter_4_680_e, 0);

    struct timeval tv_r_JOIN_INNER_2_185_s, tv_r_JOIN_INNER_2_185_e;
    gettimeofday(&tv_r_JOIN_INNER_2_185_s, 0);
    trans_JOIN_INNER_TD_21.add(&(tbl_Filter_TD_4131_output));
    trans_JOIN_INNER_TD_21.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_21), &(events_h2d_wr_JOIN_INNER_TD_21[0]));
    events_grp_JOIN_INNER_TD_21.push_back(events_h2d_wr_JOIN_INNER_TD_21[0]);
    krnl_JOIN_INNER_TD_21.run(0, &(events_grp_JOIN_INNER_TD_21), &(events_JOIN_INNER_TD_21[0]));
    
    trans_JOIN_INNER_TD_21_out.add(&(tbl_JOIN_INNER_TD_21_output));
    trans_JOIN_INNER_TD_21_out.dev2host(0, &(events_JOIN_INNER_TD_21), &(events_d2h_rd_JOIN_INNER_TD_21[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_185_e, 0);

    struct timeval tv_r_Aggregate_1_513_s, tv_r_Aggregate_1_513_e;
    gettimeofday(&tv_r_Aggregate_1_513_s, 0);
    SW_Aggregate_TD_1760(tbl_JOIN_INNER_TD_21_output, tbl_SerializeFromObject_TD_7543_input, tbl_Aggregate_TD_1760_output);
    gettimeofday(&tv_r_Aggregate_1_513_e, 0);

    struct timeval tv_r_Sort_0_595_s, tv_r_Sort_0_595_e;
    gettimeofday(&tv_r_Sort_0_595_s, 0);
    SW_Sort_TD_0865(tbl_Aggregate_TD_1760_output, tbl_Sort_TD_0865_output);
    gettimeofday(&tv_r_Sort_0_595_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_680_s, &tv_r_Filter_4_680_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5838_input: " << tbl_SerializeFromObject_TD_5838_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_185_s, &tv_r_JOIN_INNER_2_185_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_7543_input_stringRowIDSubstitute.getNumRow() << " " << "tbl_Filter_TD_4131_output: " << tbl_Filter_TD_4131_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_513_s, &tv_r_Aggregate_1_513_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_21_output: " << tbl_JOIN_INNER_TD_21_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_595_s, &tv_r_Sort_0_595_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1760_output: " << tbl_Aggregate_TD_1760_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 82.150375 * 1000 << "ms" << std::endl; 
    return 0; 
}
