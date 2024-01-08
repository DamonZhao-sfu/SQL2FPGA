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

#include "cfgFunc_q5.hpp" 
#include "q5.hpp" 

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
    std::cout << "NOTE:running query #5\n."; 
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
    Table tbl_Sort_TD_0796_output("tbl_Sort_TD_0796_output", 6100000, 2, "");
    tbl_Sort_TD_0796_output.allocateHost();
    Table tbl_Aggregate_TD_167_output("tbl_Aggregate_TD_167_output", 6100000, 2, "");
    tbl_Aggregate_TD_167_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2862_output("tbl_JOIN_INNER_TD_2862_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_2862_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3769_output("tbl_JOIN_INNER_TD_3769_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3769_output.allocateHost();
    Table tbl_Project_TD_3306_output("tbl_Project_TD_3306_output", 6100000, 1, "");
    tbl_Project_TD_3306_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4971_output("tbl_JOIN_INNER_TD_4971_output", 37000, 3, "");
    tbl_JOIN_INNER_TD_4971_output.allocateHost();
    Table tbl_Project_TD_4106_output("tbl_Project_TD_4106_output", 6100000, 3, "");
    tbl_Project_TD_4106_output.allocateHost();
    Table tbl_Filter_TD_4998_output("tbl_Filter_TD_4998_output", 6100000, 1, "");
    tbl_Filter_TD_4998_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5777_output("tbl_JOIN_INNER_TD_5777_output", 909000, 4, "");
    tbl_JOIN_INNER_TD_5777_output.allocateHost();
    Table tbl_Project_TD_5516_output("tbl_Project_TD_5516_output", 6100000, 2, "");
    tbl_Project_TD_5516_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6136_input;
    tbl_SerializeFromObject_TD_6136_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_6136_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6136_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6136_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_6136_input.allocateHost();
    tbl_SerializeFromObject_TD_6136_input.loadHost();
    Table tbl_SerializeFromObject_TD_5776_input;
    tbl_SerializeFromObject_TD_5776_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5776_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_5776_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_5776_input.allocateHost();
    tbl_SerializeFromObject_TD_5776_input.loadHost();
    Table tbl_JOIN_INNER_TD_6827_output("tbl_JOIN_INNER_TD_6827_output", 227000, 2, "");
    tbl_JOIN_INNER_TD_6827_output.allocateHost();
    Table tbl_Project_TD_6318_output("tbl_Project_TD_6318_output", 6100000, 4, "");
    tbl_Project_TD_6318_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7667_input;
    tbl_SerializeFromObject_TD_7667_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7667_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7667_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7667_input.allocateHost();
    tbl_SerializeFromObject_TD_7667_input.loadHost();
    Table tbl_Project_TD_7928_output("tbl_Project_TD_7928_output", 6100000, 2, "");
    tbl_Project_TD_7928_output.allocateHost();
    Table tbl_Project_TD_7727_output("tbl_Project_TD_7727_output", 6100000, 2, "");
    tbl_Project_TD_7727_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8200_input;
    tbl_SerializeFromObject_TD_8200_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_8200_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_8200_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_8200_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_8200_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_8200_input.allocateHost();
    tbl_SerializeFromObject_TD_8200_input.loadHost();
    Table tbl_SerializeFromObject_TD_9644_input;
    tbl_SerializeFromObject_TD_9644_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9644_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_9644_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_9644_input.allocateHost();
    tbl_SerializeFromObject_TD_9644_input.loadHost();
    Table tbl_Filter_TD_8279_output("tbl_Filter_TD_8279_output", 6100000, 2, "");
    tbl_Filter_TD_8279_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9402_input;
    tbl_SerializeFromObject_TD_9402_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_9402_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_9402_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_9402_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_9402_input.allocateHost();
    tbl_SerializeFromObject_TD_9402_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4971_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5777_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5516_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6827_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6318_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7928_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7727_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4971_cmds;
    cfg_JOIN_INNER_TD_4971_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4971_gqe_join (cfg_JOIN_INNER_TD_4971_cmds.cmd);
    cfg_JOIN_INNER_TD_4971_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5777_cmds;
    cfg_JOIN_INNER_TD_5777_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5777_gqe_join (cfg_JOIN_INNER_TD_5777_cmds.cmd);
    cfg_JOIN_INNER_TD_5777_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6827_cmds;
    cfg_JOIN_INNER_TD_6827_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6827_gqe_join (cfg_JOIN_INNER_TD_6827_cmds.cmd);
    cfg_JOIN_INNER_TD_6827_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4971;
    krnl_JOIN_INNER_TD_4971 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4971.setup(tbl_Project_TD_5516_output, tbl_JOIN_INNER_TD_5777_output, tbl_JOIN_INNER_TD_4971_output, cfg_JOIN_INNER_TD_4971_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5777;
    krnl_JOIN_INNER_TD_5777 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5777.setup(tbl_JOIN_INNER_TD_6827_output, tbl_Project_TD_6318_output, tbl_JOIN_INNER_TD_5777_output, cfg_JOIN_INNER_TD_5777_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6827;
    krnl_JOIN_INNER_TD_6827 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6827.setup(tbl_Project_TD_7928_output, tbl_Project_TD_7727_output, tbl_JOIN_INNER_TD_6827_output, cfg_JOIN_INNER_TD_6827_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4971;
    trans_JOIN_INNER_TD_4971.setq(q_h);
    trans_JOIN_INNER_TD_4971.add(&(cfg_JOIN_INNER_TD_4971_cmds));
    transEngine trans_JOIN_INNER_TD_4971_out;
    trans_JOIN_INNER_TD_4971_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5777;
    trans_JOIN_INNER_TD_5777.setq(q_h);
    trans_JOIN_INNER_TD_5777.add(&(cfg_JOIN_INNER_TD_5777_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6827;
    trans_JOIN_INNER_TD_6827.setq(q_h);
    trans_JOIN_INNER_TD_6827.add(&(cfg_JOIN_INNER_TD_6827_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4971;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4971;
    std::vector<cl::Event> events_JOIN_INNER_TD_4971;
    events_h2d_wr_JOIN_INNER_TD_4971.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4971.resize(1);
    events_JOIN_INNER_TD_4971.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4971;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4971;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5777;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5777;
    std::vector<cl::Event> events_JOIN_INNER_TD_5777;
    events_h2d_wr_JOIN_INNER_TD_5777.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5777.resize(1);
    events_JOIN_INNER_TD_5777.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5777;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5777;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6827;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6827;
    std::vector<cl::Event> events_JOIN_INNER_TD_6827;
    events_h2d_wr_JOIN_INNER_TD_6827.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6827.resize(1);
    events_JOIN_INNER_TD_6827.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6827;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6827;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_580_s, tv_r_Filter_8_580_e;
    gettimeofday(&tv_r_Filter_8_580_s, 0);
    SW_Filter_TD_8279(tbl_SerializeFromObject_TD_9402_input, tbl_Filter_TD_8279_output);
    gettimeofday(&tv_r_Filter_8_580_e, 0);

    struct timeval tv_r_Project_7_933_s, tv_r_Project_7_933_e;
    gettimeofday(&tv_r_Project_7_933_s, 0);
    SW_Project_TD_7727(tbl_Filter_TD_8279_output, tbl_Project_TD_7727_output);
    gettimeofday(&tv_r_Project_7_933_e, 0);

    struct timeval tv_r_Project_7_771_s, tv_r_Project_7_771_e;
    gettimeofday(&tv_r_Project_7_771_s, 0);
    SW_Project_TD_7928(tbl_SerializeFromObject_TD_9644_input, tbl_Project_TD_7928_output);
    gettimeofday(&tv_r_Project_7_771_e, 0);

    struct timeval tv_r_Project_6_574_s, tv_r_Project_6_574_e;
    gettimeofday(&tv_r_Project_6_574_s, 0);
    SW_Project_TD_6318(tbl_SerializeFromObject_TD_8200_input, tbl_Project_TD_6318_output);
    gettimeofday(&tv_r_Project_6_574_e, 0);

    struct timeval tv_r_JOIN_INNER_6_496_s, tv_r_JOIN_INNER_6_496_e;
    gettimeofday(&tv_r_JOIN_INNER_6_496_s, 0);
    trans_JOIN_INNER_TD_6827.add(&(tbl_Project_TD_7928_output));
    trans_JOIN_INNER_TD_6827.add(&(tbl_Project_TD_7727_output));
    trans_JOIN_INNER_TD_6827.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6827), &(events_h2d_wr_JOIN_INNER_TD_6827[0]));
    events_grp_JOIN_INNER_TD_6827.push_back(events_h2d_wr_JOIN_INNER_TD_6827[0]);
    krnl_JOIN_INNER_TD_6827.run(0, &(events_grp_JOIN_INNER_TD_6827), &(events_JOIN_INNER_TD_6827[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_496_e, 0);

    struct timeval tv_r_Project_5_162_s, tv_r_Project_5_162_e;
    gettimeofday(&tv_r_Project_5_162_s, 0);
    SW_Project_TD_5516(tbl_SerializeFromObject_TD_7667_input, tbl_Project_TD_5516_output);
    gettimeofday(&tv_r_Project_5_162_e, 0);

    struct timeval tv_r_JOIN_INNER_5_391_s, tv_r_JOIN_INNER_5_391_e;
    gettimeofday(&tv_r_JOIN_INNER_5_391_s, 0);
    prev_events_grp_JOIN_INNER_TD_5777.push_back(events_h2d_wr_JOIN_INNER_TD_6827[0]);
    trans_JOIN_INNER_TD_5777.add(&(tbl_Project_TD_6318_output));
    trans_JOIN_INNER_TD_5777.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5777), &(events_h2d_wr_JOIN_INNER_TD_5777[0]));
    events_grp_JOIN_INNER_TD_5777.push_back(events_h2d_wr_JOIN_INNER_TD_5777[0]);
    events_grp_JOIN_INNER_TD_5777.push_back(events_JOIN_INNER_TD_6827[0]);
    krnl_JOIN_INNER_TD_5777.run(0, &(events_grp_JOIN_INNER_TD_5777), &(events_JOIN_INNER_TD_5777[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_391_e, 0);

    struct timeval tv_r_Filter_4_618_s, tv_r_Filter_4_618_e;
    gettimeofday(&tv_r_Filter_4_618_s, 0);
    SW_Filter_TD_4998(tbl_SerializeFromObject_TD_5776_input, tbl_Filter_TD_4998_output);
    gettimeofday(&tv_r_Filter_4_618_e, 0);

    struct timeval tv_r_Project_4_499_s, tv_r_Project_4_499_e;
    gettimeofday(&tv_r_Project_4_499_s, 0);
    SW_Project_TD_4106(tbl_SerializeFromObject_TD_6136_input, tbl_Project_TD_4106_output);
    gettimeofday(&tv_r_Project_4_499_e, 0);

    struct timeval tv_r_JOIN_INNER_4_501_s, tv_r_JOIN_INNER_4_501_e;
    gettimeofday(&tv_r_JOIN_INNER_4_501_s, 0);
    prev_events_grp_JOIN_INNER_TD_4971.push_back(events_h2d_wr_JOIN_INNER_TD_5777[0]);
    trans_JOIN_INNER_TD_4971.add(&(tbl_Project_TD_5516_output));
    trans_JOIN_INNER_TD_4971.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4971), &(events_h2d_wr_JOIN_INNER_TD_4971[0]));
    events_grp_JOIN_INNER_TD_4971.push_back(events_h2d_wr_JOIN_INNER_TD_4971[0]);
    events_grp_JOIN_INNER_TD_4971.push_back(events_JOIN_INNER_TD_5777[0]);
    krnl_JOIN_INNER_TD_4971.run(0, &(events_grp_JOIN_INNER_TD_4971), &(events_JOIN_INNER_TD_4971[0]));
    
    trans_JOIN_INNER_TD_4971_out.add(&(tbl_JOIN_INNER_TD_4971_output));
    trans_JOIN_INNER_TD_4971_out.dev2host(0, &(events_JOIN_INNER_TD_4971), &(events_d2h_rd_JOIN_INNER_TD_4971[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_501_e, 0);

    struct timeval tv_r_Project_3_878_s, tv_r_Project_3_878_e;
    gettimeofday(&tv_r_Project_3_878_s, 0);
    SW_Project_TD_3306(tbl_Filter_TD_4998_output, tbl_Project_TD_3306_output);
    gettimeofday(&tv_r_Project_3_878_e, 0);

    struct timeval tv_r_JOIN_INNER_3_622_s, tv_r_JOIN_INNER_3_622_e;
    gettimeofday(&tv_r_JOIN_INNER_3_622_s, 0);
    SW_JOIN_INNER_TD_3769(tbl_JOIN_INNER_TD_4971_output, tbl_Project_TD_4106_output, tbl_JOIN_INNER_TD_3769_output);
    gettimeofday(&tv_r_JOIN_INNER_3_622_e, 0);

    struct timeval tv_r_JOIN_INNER_2_383_s, tv_r_JOIN_INNER_2_383_e;
    gettimeofday(&tv_r_JOIN_INNER_2_383_s, 0);
    SW_JOIN_INNER_TD_2862(tbl_JOIN_INNER_TD_3769_output, tbl_Project_TD_3306_output, tbl_JOIN_INNER_TD_2862_output);
    gettimeofday(&tv_r_JOIN_INNER_2_383_e, 0);

    struct timeval tv_r_Aggregate_1_399_s, tv_r_Aggregate_1_399_e;
    gettimeofday(&tv_r_Aggregate_1_399_s, 0);
    SW_Aggregate_TD_167(tbl_JOIN_INNER_TD_2862_output, tbl_Aggregate_TD_167_output);
    gettimeofday(&tv_r_Aggregate_1_399_e, 0);

    struct timeval tv_r_Sort_0_729_s, tv_r_Sort_0_729_e;
    gettimeofday(&tv_r_Sort_0_729_s, 0);
    SW_Sort_TD_0796(tbl_Aggregate_TD_167_output, tbl_Sort_TD_0796_output);
    gettimeofday(&tv_r_Sort_0_729_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_580_s, &tv_r_Filter_8_580_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9402_input: " << tbl_SerializeFromObject_TD_9402_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_933_s, &tv_r_Project_7_933_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8279_output: " << tbl_Filter_TD_8279_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_771_s, &tv_r_Project_7_771_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9644_input: " << tbl_SerializeFromObject_TD_9644_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_574_s, &tv_r_Project_6_574_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8200_input: " << tbl_SerializeFromObject_TD_8200_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_496_s, &tv_r_JOIN_INNER_6_496_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_7928_output: " << tbl_Project_TD_7928_output.getNumRow() << " " << "tbl_Project_TD_7727_output: " << tbl_Project_TD_7727_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_162_s, &tv_r_Project_5_162_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7667_input: " << tbl_SerializeFromObject_TD_7667_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_391_s, &tv_r_JOIN_INNER_5_391_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6827_output: " << tbl_JOIN_INNER_TD_6827_output.getNumRow() << " " << "tbl_Project_TD_6318_output: " << tbl_Project_TD_6318_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_618_s, &tv_r_Filter_4_618_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5776_input: " << tbl_SerializeFromObject_TD_5776_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_499_s, &tv_r_Project_4_499_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6136_input: " << tbl_SerializeFromObject_TD_6136_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_501_s, &tv_r_JOIN_INNER_4_501_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5777_output: " << tbl_JOIN_INNER_TD_5777_output.getNumRow() << " " << "tbl_Project_TD_5516_output: " << tbl_Project_TD_5516_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_878_s, &tv_r_Project_3_878_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4998_output: " << tbl_Filter_TD_4998_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_622_s, &tv_r_JOIN_INNER_3_622_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4971_output: " << tbl_JOIN_INNER_TD_4971_output.getNumRow() << " " << "tbl_Project_TD_4106_output: " << tbl_Project_TD_4106_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_383_s, &tv_r_JOIN_INNER_2_383_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3769_output: " << tbl_JOIN_INNER_TD_3769_output.getNumRow() << " " << "tbl_Project_TD_3306_output: " << tbl_Project_TD_3306_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_399_s, &tv_r_Aggregate_1_399_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2862_output: " << tbl_JOIN_INNER_TD_2862_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_729_s, &tv_r_Sort_0_729_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_167_output: " << tbl_Aggregate_TD_167_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 14.941817 * 1000 << "ms" << std::endl; 
    return 0; 
}
