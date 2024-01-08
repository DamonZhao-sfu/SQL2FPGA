// number of overlays (w/o fusion): 9 
// number of overlays (w/ fusion): 4 
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

#include "cfgFunc_q9.hpp" 
#include "q9.hpp" 

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
    std::cout << "NOTE:running query #9\n."; 
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
    Table tbl_Sort_TD_0701_output("tbl_Sort_TD_0701_output", 6100000, 3, "");
    tbl_Sort_TD_0701_output.allocateHost();
    Table tbl_Aggregate_TD_1215_output("tbl_Aggregate_TD_1215_output", 6100000, 3, "");
    tbl_Aggregate_TD_1215_output.allocateHost();
    Table tbl_Project_TD_2575_output("tbl_Project_TD_2575_output", 6100000, 3, "");
    tbl_Project_TD_2575_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3504_output("tbl_JOIN_INNER_TD_3504_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_3504_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4934_output("tbl_JOIN_INNER_TD_4934_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_4934_output.allocateHost();
    Table tbl_Project_TD_4563_output("tbl_Project_TD_4563_output", 6100000, 2, "");
    tbl_Project_TD_4563_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5841_output("tbl_JOIN_INNER_TD_5841_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_5841_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7871_input;
    tbl_SerializeFromObject_TD_7871_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7871_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_7871_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_7871_input.allocateHost();
    tbl_SerializeFromObject_TD_7871_input.loadHost();
    Table tbl_SerializeFromObject_TD_6304_input;
    tbl_SerializeFromObject_TD_6304_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6304_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6304_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6304_input.allocateHost();
    tbl_SerializeFromObject_TD_6304_input.loadHost();
    Table tbl_JOIN_INNER_TD_6399_output("tbl_JOIN_INNER_TD_6399_output", 319287, 7, "");
    tbl_JOIN_INNER_TD_6399_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8696_input;
    tbl_SerializeFromObject_TD_8696_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8696_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8696_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8696_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8696_input.allocateHost();
    tbl_SerializeFromObject_TD_8696_input.loadHost();
    Table tbl_JOIN_INNER_TD_7128_output("tbl_JOIN_INNER_TD_7128_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_7128_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9556_input;
    tbl_SerializeFromObject_TD_9556_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9556_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_9556_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_9556_input.allocateHost();
    tbl_SerializeFromObject_TD_9556_input.loadHost();
    Table tbl_Filter_TD_9229_output("tbl_Filter_TD_9229_output", 6100000, 1, "");
    tbl_Filter_TD_9229_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10862_input;
    tbl_SerializeFromObject_TD_10862_input = Table("lineitem", lineitem_n, 6, in_dir);
    tbl_SerializeFromObject_TD_10862_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10862_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_10862_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10862_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_10862_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_10862_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_10862_input.allocateHost();
    tbl_SerializeFromObject_TD_10862_input.loadHost();
    Table tbl_SerializeFromObject_TD_10891_input;
    tbl_SerializeFromObject_TD_10891_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10891_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_10891_input.addCol("p_name", TPCH_READ_P_NAME_LEN+1);
    tbl_SerializeFromObject_TD_10891_input.allocateHost();
    tbl_SerializeFromObject_TD_10891_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4934_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5841_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_7871_input.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6399_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_8696_input.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7128_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_9556_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9229_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_10862_input.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4934_cmds;
    cfg_JOIN_INNER_TD_4934_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4934_gqe_join (cfg_JOIN_INNER_TD_4934_cmds.cmd);
    cfg_JOIN_INNER_TD_4934_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5841_cmds;
    cfg_JOIN_INNER_TD_5841_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5841_gqe_join (cfg_JOIN_INNER_TD_5841_cmds.cmd);
    cfg_JOIN_INNER_TD_5841_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6399_cmds;
    cfg_JOIN_INNER_TD_6399_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6399_gqe_join (cfg_JOIN_INNER_TD_6399_cmds.cmd);
    cfg_JOIN_INNER_TD_6399_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7128_cmds;
    cfg_JOIN_INNER_TD_7128_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7128_gqe_join (cfg_JOIN_INNER_TD_7128_cmds.cmd);
    cfg_JOIN_INNER_TD_7128_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4934;
    krnl_JOIN_INNER_TD_4934 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4934.setup(tbl_JOIN_INNER_TD_5841_output, tbl_SerializeFromObject_TD_7871_input, tbl_JOIN_INNER_TD_4934_output, cfg_JOIN_INNER_TD_4934_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5841;
    krnl_JOIN_INNER_TD_5841 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5841.setup(tbl_JOIN_INNER_TD_6399_output, tbl_SerializeFromObject_TD_8696_input, tbl_JOIN_INNER_TD_5841_output, cfg_JOIN_INNER_TD_5841_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6399;
    krnl_JOIN_INNER_TD_6399 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6399.setup(tbl_SerializeFromObject_TD_9556_input, tbl_JOIN_INNER_TD_7128_output, tbl_JOIN_INNER_TD_6399_output, cfg_JOIN_INNER_TD_6399_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7128;
    krnl_JOIN_INNER_TD_7128 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7128.setup(tbl_Filter_TD_9229_output, tbl_SerializeFromObject_TD_10862_input, tbl_JOIN_INNER_TD_7128_output, cfg_JOIN_INNER_TD_7128_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4934;
    trans_JOIN_INNER_TD_4934.setq(q_h);
    trans_JOIN_INNER_TD_4934.add(&(cfg_JOIN_INNER_TD_4934_cmds));
    trans_JOIN_INNER_TD_4934.add(&(tbl_SerializeFromObject_TD_7871_input));
    transEngine trans_JOIN_INNER_TD_4934_out;
    trans_JOIN_INNER_TD_4934_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5841;
    trans_JOIN_INNER_TD_5841.setq(q_h);
    trans_JOIN_INNER_TD_5841.add(&(cfg_JOIN_INNER_TD_5841_cmds));
    trans_JOIN_INNER_TD_5841.add(&(tbl_SerializeFromObject_TD_8696_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6399;
    trans_JOIN_INNER_TD_6399.setq(q_h);
    trans_JOIN_INNER_TD_6399.add(&(cfg_JOIN_INNER_TD_6399_cmds));
    trans_JOIN_INNER_TD_6399.add(&(tbl_SerializeFromObject_TD_9556_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7128;
    trans_JOIN_INNER_TD_7128.setq(q_h);
    trans_JOIN_INNER_TD_7128.add(&(cfg_JOIN_INNER_TD_7128_cmds));
    trans_JOIN_INNER_TD_7128.add(&(tbl_SerializeFromObject_TD_10862_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4934;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4934;
    std::vector<cl::Event> events_JOIN_INNER_TD_4934;
    events_h2d_wr_JOIN_INNER_TD_4934.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4934.resize(1);
    events_JOIN_INNER_TD_4934.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4934;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4934;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5841;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5841;
    std::vector<cl::Event> events_JOIN_INNER_TD_5841;
    events_h2d_wr_JOIN_INNER_TD_5841.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5841.resize(1);
    events_JOIN_INNER_TD_5841.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5841;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5841;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6399;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6399;
    std::vector<cl::Event> events_JOIN_INNER_TD_6399;
    events_h2d_wr_JOIN_INNER_TD_6399.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6399.resize(1);
    events_JOIN_INNER_TD_6399.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6399;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6399;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7128;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7128;
    std::vector<cl::Event> events_JOIN_INNER_TD_7128;
    events_h2d_wr_JOIN_INNER_TD_7128.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7128.resize(1);
    events_JOIN_INNER_TD_7128.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7128;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7128;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_797_s, tv_r_Filter_9_797_e;
    gettimeofday(&tv_r_Filter_9_797_s, 0);
    SW_Filter_TD_9229(tbl_SerializeFromObject_TD_10891_input, tbl_Filter_TD_9229_output);
    gettimeofday(&tv_r_Filter_9_797_e, 0);

    struct timeval tv_r_JOIN_INNER_7_926_s, tv_r_JOIN_INNER_7_926_e;
    gettimeofday(&tv_r_JOIN_INNER_7_926_s, 0);
    trans_JOIN_INNER_TD_7128.add(&(tbl_Filter_TD_9229_output));
    trans_JOIN_INNER_TD_7128.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7128), &(events_h2d_wr_JOIN_INNER_TD_7128[0]));
    events_grp_JOIN_INNER_TD_7128.push_back(events_h2d_wr_JOIN_INNER_TD_7128[0]);
    krnl_JOIN_INNER_TD_7128.run(0, &(events_grp_JOIN_INNER_TD_7128), &(events_JOIN_INNER_TD_7128[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_926_e, 0);

    struct timeval tv_r_JOIN_INNER_6_602_s, tv_r_JOIN_INNER_6_602_e;
    gettimeofday(&tv_r_JOIN_INNER_6_602_s, 0);
    prev_events_grp_JOIN_INNER_TD_6399.push_back(events_h2d_wr_JOIN_INNER_TD_7128[0]);
    trans_JOIN_INNER_TD_6399.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6399), &(events_h2d_wr_JOIN_INNER_TD_6399[0]));
    events_grp_JOIN_INNER_TD_6399.push_back(events_h2d_wr_JOIN_INNER_TD_6399[0]);
    events_grp_JOIN_INNER_TD_6399.push_back(events_JOIN_INNER_TD_7128[0]);
    krnl_JOIN_INNER_TD_6399.run(0, &(events_grp_JOIN_INNER_TD_6399), &(events_JOIN_INNER_TD_6399[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_602_e, 0);

    struct timeval tv_r_JOIN_INNER_5_630_s, tv_r_JOIN_INNER_5_630_e;
    gettimeofday(&tv_r_JOIN_INNER_5_630_s, 0);
    prev_events_grp_JOIN_INNER_TD_5841.push_back(events_h2d_wr_JOIN_INNER_TD_6399[0]);
    trans_JOIN_INNER_TD_5841.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5841), &(events_h2d_wr_JOIN_INNER_TD_5841[0]));
    events_grp_JOIN_INNER_TD_5841.push_back(events_h2d_wr_JOIN_INNER_TD_5841[0]);
    events_grp_JOIN_INNER_TD_5841.push_back(events_JOIN_INNER_TD_6399[0]);
    krnl_JOIN_INNER_TD_5841.run(0, &(events_grp_JOIN_INNER_TD_5841), &(events_JOIN_INNER_TD_5841[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_630_e, 0);

    struct timeval tv_r_Project_4_79_s, tv_r_Project_4_79_e;
    gettimeofday(&tv_r_Project_4_79_s, 0);
    SW_Project_TD_4563(tbl_SerializeFromObject_TD_6304_input, tbl_Project_TD_4563_output);
    gettimeofday(&tv_r_Project_4_79_e, 0);

    struct timeval tv_r_JOIN_INNER_4_573_s, tv_r_JOIN_INNER_4_573_e;
    gettimeofday(&tv_r_JOIN_INNER_4_573_s, 0);
    prev_events_grp_JOIN_INNER_TD_4934.push_back(events_h2d_wr_JOIN_INNER_TD_5841[0]);
    trans_JOIN_INNER_TD_4934.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4934), &(events_h2d_wr_JOIN_INNER_TD_4934[0]));
    events_grp_JOIN_INNER_TD_4934.push_back(events_h2d_wr_JOIN_INNER_TD_4934[0]);
    events_grp_JOIN_INNER_TD_4934.push_back(events_JOIN_INNER_TD_5841[0]);
    krnl_JOIN_INNER_TD_4934.run(0, &(events_grp_JOIN_INNER_TD_4934), &(events_JOIN_INNER_TD_4934[0]));
    
    trans_JOIN_INNER_TD_4934_out.add(&(tbl_JOIN_INNER_TD_4934_output));
    trans_JOIN_INNER_TD_4934_out.dev2host(0, &(events_JOIN_INNER_TD_4934), &(events_d2h_rd_JOIN_INNER_TD_4934[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_573_e, 0);

    struct timeval tv_r_JOIN_INNER_3_791_s, tv_r_JOIN_INNER_3_791_e;
    gettimeofday(&tv_r_JOIN_INNER_3_791_s, 0);
    SW_JOIN_INNER_TD_3504(tbl_JOIN_INNER_TD_4934_output, tbl_Project_TD_4563_output, tbl_JOIN_INNER_TD_3504_output);
    gettimeofday(&tv_r_JOIN_INNER_3_791_e, 0);

    struct timeval tv_r_Project_2_713_s, tv_r_Project_2_713_e;
    gettimeofday(&tv_r_Project_2_713_s, 0);
    SW_Project_TD_2575(tbl_JOIN_INNER_TD_3504_output, tbl_Project_TD_2575_output);
    gettimeofday(&tv_r_Project_2_713_e, 0);

    struct timeval tv_r_Aggregate_1_715_s, tv_r_Aggregate_1_715_e;
    gettimeofday(&tv_r_Aggregate_1_715_s, 0);
    SW_Aggregate_TD_1215(tbl_Project_TD_2575_output, tbl_Aggregate_TD_1215_output);
    gettimeofday(&tv_r_Aggregate_1_715_e, 0);

    struct timeval tv_r_Sort_0_148_s, tv_r_Sort_0_148_e;
    gettimeofday(&tv_r_Sort_0_148_s, 0);
    SW_Sort_TD_0701(tbl_Aggregate_TD_1215_output, tbl_Sort_TD_0701_output);
    gettimeofday(&tv_r_Sort_0_148_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_797_s, &tv_r_Filter_9_797_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10891_input: " << tbl_SerializeFromObject_TD_10891_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_926_s, &tv_r_JOIN_INNER_7_926_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9229_output: " << tbl_Filter_TD_9229_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_10862_input: " << tbl_SerializeFromObject_TD_10862_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_602_s, &tv_r_JOIN_INNER_6_602_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7128_output: " << tbl_JOIN_INNER_TD_7128_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_9556_input: " << tbl_SerializeFromObject_TD_9556_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_630_s, &tv_r_JOIN_INNER_5_630_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6399_output: " << tbl_JOIN_INNER_TD_6399_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_8696_input: " << tbl_SerializeFromObject_TD_8696_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_79_s, &tv_r_Project_4_79_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6304_input: " << tbl_SerializeFromObject_TD_6304_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_573_s, &tv_r_JOIN_INNER_4_573_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5841_output: " << tbl_JOIN_INNER_TD_5841_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_7871_input: " << tbl_SerializeFromObject_TD_7871_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_791_s, &tv_r_JOIN_INNER_3_791_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4934_output: " << tbl_JOIN_INNER_TD_4934_output.getNumRow() << " " << "tbl_Project_TD_4563_output: " << tbl_Project_TD_4563_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_713_s, &tv_r_Project_2_713_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3504_output: " << tbl_JOIN_INNER_TD_3504_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_715_s, &tv_r_Aggregate_1_715_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2575_output: " << tbl_Project_TD_2575_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_148_s, &tv_r_Sort_0_148_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1215_output: " << tbl_Aggregate_TD_1215_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 11.651779 * 1000 << "ms" << std::endl; 
    return 0; 
}
