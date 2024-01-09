// number of overlays (w/o fusion): 3 
// number of overlays (w/ fusion): 3 
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

#include "cfgFunc_q10.hpp" 
#include "q10.hpp" 

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
    std::cout << "NOTE:running query #10\n."; 
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
    Table tbl_Sort_TD_0662_output("tbl_Sort_TD_0662_output", 6100000, 5, "");
    tbl_Sort_TD_0662_output.allocateHost();
    Table tbl_Aggregate_TD_1420_output("tbl_Aggregate_TD_1420_output", 6100000, 5, "");
    tbl_Aggregate_TD_1420_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2301_output("tbl_JOIN_INNER_TD_2301_output", 114347, 6, "");
    tbl_JOIN_INNER_TD_2301_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3791_output("tbl_JOIN_INNER_TD_3791_output", 114347, 6, "");
    tbl_JOIN_INNER_TD_3791_output.allocateHost();
    Table tbl_Project_TD_3438_output("tbl_Project_TD_3438_output", 6100000, 2, "");
    tbl_Project_TD_3438_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4347_output("tbl_JOIN_INNER_TD_4347_output", 57111, 4, "");
    tbl_JOIN_INNER_TD_4347_output.allocateHost();
    Table tbl_Project_TD_4185_output("tbl_Project_TD_4185_output", 6100000, 4, "");
    tbl_Project_TD_4185_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5583_input;
    tbl_SerializeFromObject_TD_5583_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5583_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5583_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5583_input.allocateHost();
    tbl_SerializeFromObject_TD_5583_input.loadHost();
    Table tbl_Project_TD_5937_output("tbl_Project_TD_5937_output", 6100000, 4, "");
    tbl_Project_TD_5937_output.allocateHost();
    Table tbl_Project_TD_5475_output("tbl_Project_TD_5475_output", 6100000, 2, "");
    tbl_Project_TD_5475_output.allocateHost();
    Table tbl_Filter_TD_556_output("tbl_Filter_TD_556_output", 6100000, 4, "");
    tbl_Filter_TD_556_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute = Table("customer", customer_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute.addCol("c_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_7347_input;
    tbl_SerializeFromObject_TD_7347_input = Table("customer", customer_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7347_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_7347_input.addCol("c_name", TPCH_READ_C_NAME_LEN+1);
    tbl_SerializeFromObject_TD_7347_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_7347_input.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_7347_input.allocateHost();
    tbl_SerializeFromObject_TD_7347_input.loadHost();
    Table tbl_Filter_TD_6517_output("tbl_Filter_TD_6517_output", 6100000, 2, "");
    tbl_Filter_TD_6517_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6882_input;
    tbl_SerializeFromObject_TD_6882_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_6882_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_6882_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_6882_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_6882_input.addCol("l_returnflag", 4);
    tbl_SerializeFromObject_TD_6882_input.allocateHost();
    tbl_SerializeFromObject_TD_6882_input.loadHost();
    Table tbl_SerializeFromObject_TD_7282_input;
    tbl_SerializeFromObject_TD_7282_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7282_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_7282_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_7282_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_7282_input.allocateHost();
    tbl_SerializeFromObject_TD_7282_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2301_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3791_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3438_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4347_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4185_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5937_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5475_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2301_cmds;
    cfg_JOIN_INNER_TD_2301_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2301_gqe_join (cfg_JOIN_INNER_TD_2301_cmds.cmd);
    cfg_JOIN_INNER_TD_2301_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3791_cmds;
    cfg_JOIN_INNER_TD_3791_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3791_gqe_join (cfg_JOIN_INNER_TD_3791_cmds.cmd);
    cfg_JOIN_INNER_TD_3791_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4347_cmds;
    cfg_JOIN_INNER_TD_4347_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4347_gqe_join (cfg_JOIN_INNER_TD_4347_cmds.cmd);
    cfg_JOIN_INNER_TD_4347_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2301;
    krnl_JOIN_INNER_TD_2301 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2301.setup(tbl_Project_TD_3438_output, tbl_JOIN_INNER_TD_3791_output, tbl_JOIN_INNER_TD_2301_output, cfg_JOIN_INNER_TD_2301_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3791;
    krnl_JOIN_INNER_TD_3791 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3791.setup(tbl_Project_TD_4185_output, tbl_JOIN_INNER_TD_4347_output, tbl_JOIN_INNER_TD_3791_output, cfg_JOIN_INNER_TD_3791_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4347;
    krnl_JOIN_INNER_TD_4347 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4347.setup(tbl_Project_TD_5475_output, tbl_Project_TD_5937_output, tbl_JOIN_INNER_TD_4347_output, cfg_JOIN_INNER_TD_4347_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2301;
    trans_JOIN_INNER_TD_2301.setq(q_h);
    trans_JOIN_INNER_TD_2301.add(&(cfg_JOIN_INNER_TD_2301_cmds));
    transEngine trans_JOIN_INNER_TD_2301_out;
    trans_JOIN_INNER_TD_2301_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3791;
    trans_JOIN_INNER_TD_3791.setq(q_h);
    trans_JOIN_INNER_TD_3791.add(&(cfg_JOIN_INNER_TD_3791_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4347;
    trans_JOIN_INNER_TD_4347.setq(q_h);
    trans_JOIN_INNER_TD_4347.add(&(cfg_JOIN_INNER_TD_4347_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2301;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2301;
    std::vector<cl::Event> events_JOIN_INNER_TD_2301;
    events_h2d_wr_JOIN_INNER_TD_2301.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2301.resize(1);
    events_JOIN_INNER_TD_2301.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2301;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2301;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3791;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3791;
    std::vector<cl::Event> events_JOIN_INNER_TD_3791;
    events_h2d_wr_JOIN_INNER_TD_3791.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3791.resize(1);
    events_JOIN_INNER_TD_3791.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3791;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3791;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4347;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4347;
    std::vector<cl::Event> events_JOIN_INNER_TD_4347;
    events_h2d_wr_JOIN_INNER_TD_4347.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4347.resize(1);
    events_JOIN_INNER_TD_4347.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4347;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4347;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_751_s, tv_r_Filter_6_751_e;
    gettimeofday(&tv_r_Filter_6_751_s, 0);
    SW_Filter_TD_6517(tbl_SerializeFromObject_TD_7282_input, tbl_Filter_TD_6517_output);
    gettimeofday(&tv_r_Filter_6_751_e, 0);

    struct timeval tv_r_Filter_5_204_s, tv_r_Filter_5_204_e;
    gettimeofday(&tv_r_Filter_5_204_s, 0);
    SW_Filter_TD_556(tbl_SerializeFromObject_TD_6882_input, tbl_Filter_TD_556_output);
    gettimeofday(&tv_r_Filter_5_204_e, 0);

    struct timeval tv_r_Project_5_531_s, tv_r_Project_5_531_e;
    gettimeofday(&tv_r_Project_5_531_s, 0);
    SW_Project_TD_5475(tbl_Filter_TD_6517_output, tbl_Project_TD_5475_output);
    gettimeofday(&tv_r_Project_5_531_e, 0);

    struct timeval tv_r_Project_5_48_s, tv_r_Project_5_48_e;
    gettimeofday(&tv_r_Project_5_48_s, 0);
    SW_Project_TD_5937(tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute, tbl_Project_TD_5937_output);
    gettimeofday(&tv_r_Project_5_48_e, 0);

    struct timeval tv_r_Project_4_342_s, tv_r_Project_4_342_e;
    gettimeofday(&tv_r_Project_4_342_s, 0);
    SW_Project_TD_4185(tbl_Filter_TD_556_output, tbl_Project_TD_4185_output);
    gettimeofday(&tv_r_Project_4_342_e, 0);

    struct timeval tv_r_JOIN_INNER_4_606_s, tv_r_JOIN_INNER_4_606_e;
    gettimeofday(&tv_r_JOIN_INNER_4_606_s, 0);
    trans_JOIN_INNER_TD_4347.add(&(tbl_Project_TD_5937_output));
    trans_JOIN_INNER_TD_4347.add(&(tbl_Project_TD_5475_output));
    trans_JOIN_INNER_TD_4347.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4347), &(events_h2d_wr_JOIN_INNER_TD_4347[0]));
    events_grp_JOIN_INNER_TD_4347.push_back(events_h2d_wr_JOIN_INNER_TD_4347[0]);
    krnl_JOIN_INNER_TD_4347.run(0, &(events_grp_JOIN_INNER_TD_4347), &(events_JOIN_INNER_TD_4347[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_606_e, 0);

    struct timeval tv_r_Project_3_258_s, tv_r_Project_3_258_e;
    gettimeofday(&tv_r_Project_3_258_s, 0);
    SW_Project_TD_3438(tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute, tbl_Project_TD_3438_output);
    gettimeofday(&tv_r_Project_3_258_e, 0);

    struct timeval tv_r_JOIN_INNER_3_810_s, tv_r_JOIN_INNER_3_810_e;
    gettimeofday(&tv_r_JOIN_INNER_3_810_s, 0);
    prev_events_grp_JOIN_INNER_TD_3791.push_back(events_h2d_wr_JOIN_INNER_TD_4347[0]);
    trans_JOIN_INNER_TD_3791.add(&(tbl_Project_TD_4185_output));
    trans_JOIN_INNER_TD_3791.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3791), &(events_h2d_wr_JOIN_INNER_TD_3791[0]));
    events_grp_JOIN_INNER_TD_3791.push_back(events_h2d_wr_JOIN_INNER_TD_3791[0]);
    events_grp_JOIN_INNER_TD_3791.push_back(events_JOIN_INNER_TD_4347[0]);
    krnl_JOIN_INNER_TD_3791.run(0, &(events_grp_JOIN_INNER_TD_3791), &(events_JOIN_INNER_TD_3791[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_810_e, 0);

    struct timeval tv_r_JOIN_INNER_2_835_s, tv_r_JOIN_INNER_2_835_e;
    gettimeofday(&tv_r_JOIN_INNER_2_835_s, 0);
    prev_events_grp_JOIN_INNER_TD_2301.push_back(events_h2d_wr_JOIN_INNER_TD_3791[0]);
    trans_JOIN_INNER_TD_2301.add(&(tbl_Project_TD_3438_output));
    trans_JOIN_INNER_TD_2301.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2301), &(events_h2d_wr_JOIN_INNER_TD_2301[0]));
    events_grp_JOIN_INNER_TD_2301.push_back(events_h2d_wr_JOIN_INNER_TD_2301[0]);
    events_grp_JOIN_INNER_TD_2301.push_back(events_JOIN_INNER_TD_3791[0]);
    krnl_JOIN_INNER_TD_2301.run(0, &(events_grp_JOIN_INNER_TD_2301), &(events_JOIN_INNER_TD_2301[0]));
    
    trans_JOIN_INNER_TD_2301_out.add(&(tbl_JOIN_INNER_TD_2301_output));
    trans_JOIN_INNER_TD_2301_out.dev2host(0, &(events_JOIN_INNER_TD_2301), &(events_d2h_rd_JOIN_INNER_TD_2301[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_835_e, 0);

    struct timeval tv_r_Aggregate_1_80_s, tv_r_Aggregate_1_80_e;
    gettimeofday(&tv_r_Aggregate_1_80_s, 0);
    SW_Aggregate_TD_1420(tbl_JOIN_INNER_TD_2301_output, tbl_SerializeFromObject_TD_7347_input, tbl_SerializeFromObject_TD_5583_input, tbl_Aggregate_TD_1420_output);
    gettimeofday(&tv_r_Aggregate_1_80_e, 0);

    struct timeval tv_r_Sort_0_772_s, tv_r_Sort_0_772_e;
    gettimeofday(&tv_r_Sort_0_772_s, 0);
    SW_Sort_TD_0662(tbl_Aggregate_TD_1420_output, tbl_Sort_TD_0662_output);
    gettimeofday(&tv_r_Sort_0_772_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_751_s, &tv_r_Filter_6_751_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7282_input: " << tbl_SerializeFromObject_TD_7282_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_204_s, &tv_r_Filter_5_204_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6882_input: " << tbl_SerializeFromObject_TD_6882_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_531_s, &tv_r_Project_5_531_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6517_output: " << tbl_Filter_TD_6517_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_48_s, &tv_r_Project_5_48_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_7347_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_342_s, &tv_r_Project_4_342_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_556_output: " << tbl_Filter_TD_556_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_606_s, &tv_r_JOIN_INNER_4_606_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5937_output: " << tbl_Project_TD_5937_output.getNumRow() << " " << "tbl_Project_TD_5475_output: " << tbl_Project_TD_5475_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_258_s, &tv_r_Project_3_258_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_810_s, &tv_r_JOIN_INNER_3_810_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4347_output: " << tbl_JOIN_INNER_TD_4347_output.getNumRow() << " " << "tbl_Project_TD_4185_output: " << tbl_Project_TD_4185_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_835_s, &tv_r_JOIN_INNER_2_835_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3791_output: " << tbl_JOIN_INNER_TD_3791_output.getNumRow() << " " << "tbl_Project_TD_3438_output: " << tbl_Project_TD_3438_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_80_s, &tv_r_Aggregate_1_80_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2301_output: " << tbl_JOIN_INNER_TD_2301_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_772_s, &tv_r_Sort_0_772_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1420_output: " << tbl_Aggregate_TD_1420_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 13.015862 * 1000 << "ms" << std::endl; 
    return 0; 
}
