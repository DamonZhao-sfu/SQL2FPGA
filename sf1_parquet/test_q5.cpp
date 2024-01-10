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
    Table tbl_Sort_TD_0494_output("tbl_Sort_TD_0494_output", 6100000, 2, "");
    tbl_Sort_TD_0494_output.allocateHost();
    Table tbl_Aggregate_TD_1579_output("tbl_Aggregate_TD_1579_output", 6100000, 2, "");
    tbl_Aggregate_TD_1579_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2972_output("tbl_JOIN_INNER_TD_2972_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_2972_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3215_output("tbl_JOIN_INNER_TD_3215_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3215_output.allocateHost();
    Table tbl_Project_TD_3334_output("tbl_Project_TD_3334_output", 6100000, 1, "");
    tbl_Project_TD_3334_output.allocateHost();
    Table tbl_JOIN_INNER_TD_452_output("tbl_JOIN_INNER_TD_452_output", 37000, 3, "");
    tbl_JOIN_INNER_TD_452_output.allocateHost();
    Table tbl_Project_TD_4264_output("tbl_Project_TD_4264_output", 6100000, 3, "");
    tbl_Project_TD_4264_output.allocateHost();
    Table tbl_Filter_TD_4359_output("tbl_Filter_TD_4359_output", 6100000, 1, "");
    tbl_Filter_TD_4359_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5690_output("tbl_JOIN_INNER_TD_5690_output", 909000, 4, "");
    tbl_JOIN_INNER_TD_5690_output.allocateHost();
    Table tbl_Project_TD_5325_output("tbl_Project_TD_5325_output", 6100000, 2, "");
    tbl_Project_TD_5325_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6786_input;
    tbl_SerializeFromObject_TD_6786_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_6786_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6786_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6786_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_6786_input.allocateHost();
    tbl_SerializeFromObject_TD_6786_input.loadHost();
    Table tbl_SerializeFromObject_TD_5244_input;
    tbl_SerializeFromObject_TD_5244_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5244_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_5244_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_5244_input.allocateHost();
    tbl_SerializeFromObject_TD_5244_input.loadHost();
    Table tbl_JOIN_INNER_TD_6104_output("tbl_JOIN_INNER_TD_6104_output", 227000, 2, "");
    tbl_JOIN_INNER_TD_6104_output.allocateHost();
    Table tbl_Project_TD_6432_output("tbl_Project_TD_6432_output", 6100000, 4, "");
    tbl_Project_TD_6432_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7348_input;
    tbl_SerializeFromObject_TD_7348_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7348_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7348_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7348_input.allocateHost();
    tbl_SerializeFromObject_TD_7348_input.loadHost();
    Table tbl_Project_TD_7644_output("tbl_Project_TD_7644_output", 6100000, 2, "");
    tbl_Project_TD_7644_output.allocateHost();
    Table tbl_Project_TD_7801_output("tbl_Project_TD_7801_output", 6100000, 2, "");
    tbl_Project_TD_7801_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8167_input;
    tbl_SerializeFromObject_TD_8167_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_8167_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_8167_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_8167_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_8167_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_8167_input.allocateHost();
    tbl_SerializeFromObject_TD_8167_input.loadHost();
    Table tbl_SerializeFromObject_TD_9904_input;
    tbl_SerializeFromObject_TD_9904_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9904_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_9904_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_9904_input.allocateHost();
    tbl_SerializeFromObject_TD_9904_input.loadHost();
    Table tbl_Filter_TD_8402_output("tbl_Filter_TD_8402_output", 6100000, 2, "");
    tbl_Filter_TD_8402_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9481_input;
    tbl_SerializeFromObject_TD_9481_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_9481_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_9481_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_9481_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_9481_input.allocateHost();
    tbl_SerializeFromObject_TD_9481_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_452_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5690_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5325_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6104_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6432_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7644_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7801_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_452_cmds;
    cfg_JOIN_INNER_TD_452_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_452_gqe_join (cfg_JOIN_INNER_TD_452_cmds.cmd);
    cfg_JOIN_INNER_TD_452_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5690_cmds;
    cfg_JOIN_INNER_TD_5690_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5690_gqe_join (cfg_JOIN_INNER_TD_5690_cmds.cmd);
    cfg_JOIN_INNER_TD_5690_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6104_cmds;
    cfg_JOIN_INNER_TD_6104_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6104_gqe_join (cfg_JOIN_INNER_TD_6104_cmds.cmd);
    cfg_JOIN_INNER_TD_6104_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_452;
    krnl_JOIN_INNER_TD_452 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_452.setup(tbl_Project_TD_5325_output, tbl_JOIN_INNER_TD_5690_output, tbl_JOIN_INNER_TD_452_output, cfg_JOIN_INNER_TD_452_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5690;
    krnl_JOIN_INNER_TD_5690 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5690.setup(tbl_JOIN_INNER_TD_6104_output, tbl_Project_TD_6432_output, tbl_JOIN_INNER_TD_5690_output, cfg_JOIN_INNER_TD_5690_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6104;
    krnl_JOIN_INNER_TD_6104 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6104.setup(tbl_Project_TD_7644_output, tbl_Project_TD_7801_output, tbl_JOIN_INNER_TD_6104_output, cfg_JOIN_INNER_TD_6104_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_452;
    trans_JOIN_INNER_TD_452.setq(q_h);
    trans_JOIN_INNER_TD_452.add(&(cfg_JOIN_INNER_TD_452_cmds));
    transEngine trans_JOIN_INNER_TD_452_out;
    trans_JOIN_INNER_TD_452_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5690;
    trans_JOIN_INNER_TD_5690.setq(q_h);
    trans_JOIN_INNER_TD_5690.add(&(cfg_JOIN_INNER_TD_5690_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6104;
    trans_JOIN_INNER_TD_6104.setq(q_h);
    trans_JOIN_INNER_TD_6104.add(&(cfg_JOIN_INNER_TD_6104_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_452;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_452;
    std::vector<cl::Event> events_JOIN_INNER_TD_452;
    events_h2d_wr_JOIN_INNER_TD_452.resize(1);
    events_d2h_rd_JOIN_INNER_TD_452.resize(1);
    events_JOIN_INNER_TD_452.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_452;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_452;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5690;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5690;
    std::vector<cl::Event> events_JOIN_INNER_TD_5690;
    events_h2d_wr_JOIN_INNER_TD_5690.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5690.resize(1);
    events_JOIN_INNER_TD_5690.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5690;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5690;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6104;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6104;
    std::vector<cl::Event> events_JOIN_INNER_TD_6104;
    events_h2d_wr_JOIN_INNER_TD_6104.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6104.resize(1);
    events_JOIN_INNER_TD_6104.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6104;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6104;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_691_s, tv_r_Filter_8_691_e;
    gettimeofday(&tv_r_Filter_8_691_s, 0);
    SW_Filter_TD_8402(tbl_SerializeFromObject_TD_9481_input, tbl_Filter_TD_8402_output);
    gettimeofday(&tv_r_Filter_8_691_e, 0);

    struct timeval tv_r_Project_7_731_s, tv_r_Project_7_731_e;
    gettimeofday(&tv_r_Project_7_731_s, 0);
    SW_Project_TD_7801(tbl_Filter_TD_8402_output, tbl_Project_TD_7801_output);
    gettimeofday(&tv_r_Project_7_731_e, 0);

    struct timeval tv_r_Project_7_940_s, tv_r_Project_7_940_e;
    gettimeofday(&tv_r_Project_7_940_s, 0);
    SW_Project_TD_7644(tbl_SerializeFromObject_TD_9904_input, tbl_Project_TD_7644_output);
    gettimeofday(&tv_r_Project_7_940_e, 0);

    struct timeval tv_r_Project_6_250_s, tv_r_Project_6_250_e;
    gettimeofday(&tv_r_Project_6_250_s, 0);
    SW_Project_TD_6432(tbl_SerializeFromObject_TD_8167_input, tbl_Project_TD_6432_output);
    gettimeofday(&tv_r_Project_6_250_e, 0);

    struct timeval tv_r_JOIN_INNER_6_789_s, tv_r_JOIN_INNER_6_789_e;
    gettimeofday(&tv_r_JOIN_INNER_6_789_s, 0);
    trans_JOIN_INNER_TD_6104.add(&(tbl_Project_TD_7644_output));
    trans_JOIN_INNER_TD_6104.add(&(tbl_Project_TD_7801_output));
    trans_JOIN_INNER_TD_6104.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6104), &(events_h2d_wr_JOIN_INNER_TD_6104[0]));
    events_grp_JOIN_INNER_TD_6104.push_back(events_h2d_wr_JOIN_INNER_TD_6104[0]);
    krnl_JOIN_INNER_TD_6104.run(0, &(events_grp_JOIN_INNER_TD_6104), &(events_JOIN_INNER_TD_6104[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_789_e, 0);

    struct timeval tv_r_Project_5_457_s, tv_r_Project_5_457_e;
    gettimeofday(&tv_r_Project_5_457_s, 0);
    SW_Project_TD_5325(tbl_SerializeFromObject_TD_7348_input, tbl_Project_TD_5325_output);
    gettimeofday(&tv_r_Project_5_457_e, 0);

    struct timeval tv_r_JOIN_INNER_5_869_s, tv_r_JOIN_INNER_5_869_e;
    gettimeofday(&tv_r_JOIN_INNER_5_869_s, 0);
    prev_events_grp_JOIN_INNER_TD_5690.push_back(events_h2d_wr_JOIN_INNER_TD_6104[0]);
    trans_JOIN_INNER_TD_5690.add(&(tbl_Project_TD_6432_output));
    trans_JOIN_INNER_TD_5690.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5690), &(events_h2d_wr_JOIN_INNER_TD_5690[0]));
    events_grp_JOIN_INNER_TD_5690.push_back(events_h2d_wr_JOIN_INNER_TD_5690[0]);
    events_grp_JOIN_INNER_TD_5690.push_back(events_JOIN_INNER_TD_6104[0]);
    krnl_JOIN_INNER_TD_5690.run(0, &(events_grp_JOIN_INNER_TD_5690), &(events_JOIN_INNER_TD_5690[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_869_e, 0);

    struct timeval tv_r_Filter_4_817_s, tv_r_Filter_4_817_e;
    gettimeofday(&tv_r_Filter_4_817_s, 0);
    SW_Filter_TD_4359(tbl_SerializeFromObject_TD_5244_input, tbl_Filter_TD_4359_output);
    gettimeofday(&tv_r_Filter_4_817_e, 0);

    struct timeval tv_r_Project_4_767_s, tv_r_Project_4_767_e;
    gettimeofday(&tv_r_Project_4_767_s, 0);
    SW_Project_TD_4264(tbl_SerializeFromObject_TD_6786_input, tbl_Project_TD_4264_output);
    gettimeofday(&tv_r_Project_4_767_e, 0);

    struct timeval tv_r_JOIN_INNER_4_262_s, tv_r_JOIN_INNER_4_262_e;
    gettimeofday(&tv_r_JOIN_INNER_4_262_s, 0);
    prev_events_grp_JOIN_INNER_TD_452.push_back(events_h2d_wr_JOIN_INNER_TD_5690[0]);
    trans_JOIN_INNER_TD_452.add(&(tbl_Project_TD_5325_output));
    trans_JOIN_INNER_TD_452.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_452), &(events_h2d_wr_JOIN_INNER_TD_452[0]));
    events_grp_JOIN_INNER_TD_452.push_back(events_h2d_wr_JOIN_INNER_TD_452[0]);
    events_grp_JOIN_INNER_TD_452.push_back(events_JOIN_INNER_TD_5690[0]);
    krnl_JOIN_INNER_TD_452.run(0, &(events_grp_JOIN_INNER_TD_452), &(events_JOIN_INNER_TD_452[0]));
    
    trans_JOIN_INNER_TD_452_out.add(&(tbl_JOIN_INNER_TD_452_output));
    trans_JOIN_INNER_TD_452_out.dev2host(0, &(events_JOIN_INNER_TD_452), &(events_d2h_rd_JOIN_INNER_TD_452[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_262_e, 0);

    struct timeval tv_r_Project_3_206_s, tv_r_Project_3_206_e;
    gettimeofday(&tv_r_Project_3_206_s, 0);
    SW_Project_TD_3334(tbl_Filter_TD_4359_output, tbl_Project_TD_3334_output);
    gettimeofday(&tv_r_Project_3_206_e, 0);

    struct timeval tv_r_JOIN_INNER_3_721_s, tv_r_JOIN_INNER_3_721_e;
    gettimeofday(&tv_r_JOIN_INNER_3_721_s, 0);
    SW_JOIN_INNER_TD_3215(tbl_JOIN_INNER_TD_452_output, tbl_Project_TD_4264_output, tbl_JOIN_INNER_TD_3215_output);
    gettimeofday(&tv_r_JOIN_INNER_3_721_e, 0);

    struct timeval tv_r_JOIN_INNER_2_510_s, tv_r_JOIN_INNER_2_510_e;
    gettimeofday(&tv_r_JOIN_INNER_2_510_s, 0);
    SW_JOIN_INNER_TD_2972(tbl_JOIN_INNER_TD_3215_output, tbl_Project_TD_3334_output, tbl_JOIN_INNER_TD_2972_output);
    gettimeofday(&tv_r_JOIN_INNER_2_510_e, 0);

    struct timeval tv_r_Aggregate_1_256_s, tv_r_Aggregate_1_256_e;
    gettimeofday(&tv_r_Aggregate_1_256_s, 0);
    SW_Aggregate_TD_1579(tbl_JOIN_INNER_TD_2972_output, tbl_Aggregate_TD_1579_output);
    gettimeofday(&tv_r_Aggregate_1_256_e, 0);

    struct timeval tv_r_Sort_0_692_s, tv_r_Sort_0_692_e;
    gettimeofday(&tv_r_Sort_0_692_s, 0);
    SW_Sort_TD_0494(tbl_Aggregate_TD_1579_output, tbl_Sort_TD_0494_output);
    gettimeofday(&tv_r_Sort_0_692_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_691_s, &tv_r_Filter_8_691_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9481_input: " << tbl_SerializeFromObject_TD_9481_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_731_s, &tv_r_Project_7_731_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8402_output: " << tbl_Filter_TD_8402_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_940_s, &tv_r_Project_7_940_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9904_input: " << tbl_SerializeFromObject_TD_9904_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_250_s, &tv_r_Project_6_250_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8167_input: " << tbl_SerializeFromObject_TD_8167_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_789_s, &tv_r_JOIN_INNER_6_789_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_7644_output: " << tbl_Project_TD_7644_output.getNumRow() << " " << "tbl_Project_TD_7801_output: " << tbl_Project_TD_7801_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_457_s, &tv_r_Project_5_457_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7348_input: " << tbl_SerializeFromObject_TD_7348_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_869_s, &tv_r_JOIN_INNER_5_869_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6104_output: " << tbl_JOIN_INNER_TD_6104_output.getNumRow() << " " << "tbl_Project_TD_6432_output: " << tbl_Project_TD_6432_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_817_s, &tv_r_Filter_4_817_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5244_input: " << tbl_SerializeFromObject_TD_5244_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_767_s, &tv_r_Project_4_767_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6786_input: " << tbl_SerializeFromObject_TD_6786_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_262_s, &tv_r_JOIN_INNER_4_262_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5690_output: " << tbl_JOIN_INNER_TD_5690_output.getNumRow() << " " << "tbl_Project_TD_5325_output: " << tbl_Project_TD_5325_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_206_s, &tv_r_Project_3_206_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4359_output: " << tbl_Filter_TD_4359_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_721_s, &tv_r_JOIN_INNER_3_721_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_452_output: " << tbl_JOIN_INNER_TD_452_output.getNumRow() << " " << "tbl_Project_TD_4264_output: " << tbl_Project_TD_4264_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_510_s, &tv_r_JOIN_INNER_2_510_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3215_output: " << tbl_JOIN_INNER_TD_3215_output.getNumRow() << " " << "tbl_Project_TD_3334_output: " << tbl_Project_TD_3334_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_256_s, &tv_r_Aggregate_1_256_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2972_output: " << tbl_JOIN_INNER_TD_2972_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_692_s, &tv_r_Sort_0_692_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1579_output: " << tbl_Aggregate_TD_1579_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 13.401461 * 1000 << "ms" << std::endl; 
    return 0; 
}
