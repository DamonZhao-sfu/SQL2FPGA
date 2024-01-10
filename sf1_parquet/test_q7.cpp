// number of overlays (w/o fusion): 4 
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

#include "cfgFunc_q7.hpp" 
#include "q7.hpp" 

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
    std::cout << "NOTE:running query #7\n."; 
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
    Table tbl_Sort_TD_0122_output("tbl_Sort_TD_0122_output", 6100000, 4, "");
    tbl_Sort_TD_0122_output.allocateHost();
    Table tbl_Aggregate_TD_174_output("tbl_Aggregate_TD_174_output", 6100000, 4, "");
    tbl_Aggregate_TD_174_output.allocateHost();
    Table tbl_Project_TD_2940_output("tbl_Project_TD_2940_output", 6100000, 4, "");
    tbl_Project_TD_2940_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3152_output("tbl_JOIN_INNER_TD_3152_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_3152_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4311_output("tbl_JOIN_INNER_TD_4311_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_4311_output.allocateHost();
    Table tbl_Project_TD_448_output("tbl_Project_TD_448_output", 6100000, 2, "");
    tbl_Project_TD_448_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5770_output("tbl_JOIN_INNER_TD_5770_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_5770_output.allocateHost();
    Table tbl_Project_TD_5490_output("tbl_Project_TD_5490_output", 6100000, 2, "");
    tbl_Project_TD_5490_output.allocateHost();
    Table tbl_Filter_TD_5806_output("tbl_Filter_TD_5806_output", 6100000, 2, "");
    tbl_Filter_TD_5806_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6802_output("tbl_JOIN_INNER_TD_6802_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_6802_output.allocateHost();
    Table tbl_Project_TD_6397_output("tbl_Project_TD_6397_output", 6100000, 2, "");
    tbl_Project_TD_6397_output.allocateHost();
    Table tbl_Filter_TD_6357_output("tbl_Filter_TD_6357_output", 6100000, 2, "");
    tbl_Filter_TD_6357_output.allocateHost();
    Table tbl_SerializeFromObject_TD_644_input;
    tbl_SerializeFromObject_TD_644_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_644_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_644_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_644_input.allocateHost();
    tbl_SerializeFromObject_TD_644_input.loadHost();
    Table tbl_JOIN_INNER_TD_7520_output("tbl_JOIN_INNER_TD_7520_output", 1829000, 5, "");
    tbl_JOIN_INNER_TD_7520_output.allocateHost();
    Table tbl_Project_TD_7770_output("tbl_Project_TD_7770_output", 6100000, 2, "");
    tbl_Project_TD_7770_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8148_input;
    tbl_SerializeFromObject_TD_8148_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_8148_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_8148_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_8148_input.allocateHost();
    tbl_SerializeFromObject_TD_8148_input.loadHost();
    Table tbl_SerializeFromObject_TD_7322_input;
    tbl_SerializeFromObject_TD_7322_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7322_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_7322_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_7322_input.allocateHost();
    tbl_SerializeFromObject_TD_7322_input.loadHost();
    Table tbl_Project_TD_8866_output("tbl_Project_TD_8866_output", 6100000, 2, "");
    tbl_Project_TD_8866_output.allocateHost();
    Table tbl_Project_TD_8679_output("tbl_Project_TD_8679_output", 6100000, 5, "");
    tbl_Project_TD_8679_output.allocateHost();
    Table tbl_SerializeFromObject_TD_951_input;
    tbl_SerializeFromObject_TD_951_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_951_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_951_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_951_input.allocateHost();
    tbl_SerializeFromObject_TD_951_input.loadHost();
    Table tbl_SerializeFromObject_TD_10132_input;
    tbl_SerializeFromObject_TD_10132_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10132_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_10132_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_10132_input.allocateHost();
    tbl_SerializeFromObject_TD_10132_input.loadHost();
    Table tbl_Filter_TD_9837_output("tbl_Filter_TD_9837_output", 6100000, 5, "");
    tbl_Filter_TD_9837_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10167_input;
    tbl_SerializeFromObject_TD_10167_input = Table("lineitem", lineitem_n, 5, in_dir);
    tbl_SerializeFromObject_TD_10167_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10167_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10167_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_10167_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_10167_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_10167_input.allocateHost();
    tbl_SerializeFromObject_TD_10167_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4311_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5770_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5490_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6802_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6397_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7520_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7770_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8866_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8679_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4311_cmds;
    cfg_JOIN_INNER_TD_4311_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4311_gqe_join (cfg_JOIN_INNER_TD_4311_cmds.cmd);
    cfg_JOIN_INNER_TD_4311_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5770_cmds;
    cfg_JOIN_INNER_TD_5770_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5770_gqe_join (cfg_JOIN_INNER_TD_5770_cmds.cmd);
    cfg_JOIN_INNER_TD_5770_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6802_cmds;
    cfg_JOIN_INNER_TD_6802_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6802_gqe_join (cfg_JOIN_INNER_TD_6802_cmds.cmd);
    cfg_JOIN_INNER_TD_6802_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7520_cmds;
    cfg_JOIN_INNER_TD_7520_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7520_gqe_join (cfg_JOIN_INNER_TD_7520_cmds.cmd);
    cfg_JOIN_INNER_TD_7520_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4311;
    krnl_JOIN_INNER_TD_4311 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4311.setup(tbl_Project_TD_5490_output, tbl_JOIN_INNER_TD_5770_output, tbl_JOIN_INNER_TD_4311_output, cfg_JOIN_INNER_TD_4311_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5770;
    krnl_JOIN_INNER_TD_5770 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5770.setup(tbl_JOIN_INNER_TD_6802_output, tbl_Project_TD_6397_output, tbl_JOIN_INNER_TD_5770_output, cfg_JOIN_INNER_TD_5770_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6802;
    krnl_JOIN_INNER_TD_6802 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6802.setup(tbl_Project_TD_7770_output, tbl_JOIN_INNER_TD_7520_output, tbl_JOIN_INNER_TD_6802_output, cfg_JOIN_INNER_TD_6802_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7520;
    krnl_JOIN_INNER_TD_7520 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7520.setup(tbl_Project_TD_8866_output, tbl_Project_TD_8679_output, tbl_JOIN_INNER_TD_7520_output, cfg_JOIN_INNER_TD_7520_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4311;
    trans_JOIN_INNER_TD_4311.setq(q_h);
    trans_JOIN_INNER_TD_4311.add(&(cfg_JOIN_INNER_TD_4311_cmds));
    transEngine trans_JOIN_INNER_TD_4311_out;
    trans_JOIN_INNER_TD_4311_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5770;
    trans_JOIN_INNER_TD_5770.setq(q_h);
    trans_JOIN_INNER_TD_5770.add(&(cfg_JOIN_INNER_TD_5770_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6802;
    trans_JOIN_INNER_TD_6802.setq(q_h);
    trans_JOIN_INNER_TD_6802.add(&(cfg_JOIN_INNER_TD_6802_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7520;
    trans_JOIN_INNER_TD_7520.setq(q_h);
    trans_JOIN_INNER_TD_7520.add(&(cfg_JOIN_INNER_TD_7520_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4311;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4311;
    std::vector<cl::Event> events_JOIN_INNER_TD_4311;
    events_h2d_wr_JOIN_INNER_TD_4311.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4311.resize(1);
    events_JOIN_INNER_TD_4311.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4311;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4311;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5770;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5770;
    std::vector<cl::Event> events_JOIN_INNER_TD_5770;
    events_h2d_wr_JOIN_INNER_TD_5770.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5770.resize(1);
    events_JOIN_INNER_TD_5770.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5770;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5770;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6802;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6802;
    std::vector<cl::Event> events_JOIN_INNER_TD_6802;
    events_h2d_wr_JOIN_INNER_TD_6802.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6802.resize(1);
    events_JOIN_INNER_TD_6802.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6802;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6802;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7520;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7520;
    std::vector<cl::Event> events_JOIN_INNER_TD_7520;
    events_h2d_wr_JOIN_INNER_TD_7520.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7520.resize(1);
    events_JOIN_INNER_TD_7520.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7520;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7520;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_956_s, tv_r_Filter_9_956_e;
    gettimeofday(&tv_r_Filter_9_956_s, 0);
    SW_Filter_TD_9837(tbl_SerializeFromObject_TD_10167_input, tbl_Filter_TD_9837_output);
    gettimeofday(&tv_r_Filter_9_956_e, 0);

    struct timeval tv_r_Project_8_333_s, tv_r_Project_8_333_e;
    gettimeofday(&tv_r_Project_8_333_s, 0);
    SW_Project_TD_8679(tbl_Filter_TD_9837_output, tbl_Project_TD_8679_output);
    gettimeofday(&tv_r_Project_8_333_e, 0);

    struct timeval tv_r_Project_8_326_s, tv_r_Project_8_326_e;
    gettimeofday(&tv_r_Project_8_326_s, 0);
    SW_Project_TD_8866(tbl_SerializeFromObject_TD_10132_input, tbl_Project_TD_8866_output);
    gettimeofday(&tv_r_Project_8_326_e, 0);

    struct timeval tv_r_Project_7_66_s, tv_r_Project_7_66_e;
    gettimeofday(&tv_r_Project_7_66_s, 0);
    SW_Project_TD_7770(tbl_SerializeFromObject_TD_951_input, tbl_Project_TD_7770_output);
    gettimeofday(&tv_r_Project_7_66_e, 0);

    struct timeval tv_r_JOIN_INNER_7_558_s, tv_r_JOIN_INNER_7_558_e;
    gettimeofday(&tv_r_JOIN_INNER_7_558_s, 0);
    trans_JOIN_INNER_TD_7520.add(&(tbl_Project_TD_8866_output));
    trans_JOIN_INNER_TD_7520.add(&(tbl_Project_TD_8679_output));
    trans_JOIN_INNER_TD_7520.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7520), &(events_h2d_wr_JOIN_INNER_TD_7520[0]));
    events_grp_JOIN_INNER_TD_7520.push_back(events_h2d_wr_JOIN_INNER_TD_7520[0]);
    krnl_JOIN_INNER_TD_7520.run(0, &(events_grp_JOIN_INNER_TD_7520), &(events_JOIN_INNER_TD_7520[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_558_e, 0);

    struct timeval tv_r_Filter_6_978_s, tv_r_Filter_6_978_e;
    gettimeofday(&tv_r_Filter_6_978_s, 0);
    SW_Filter_TD_6357(tbl_SerializeFromObject_TD_7322_input, tbl_Filter_TD_6357_output);
    gettimeofday(&tv_r_Filter_6_978_e, 0);

    struct timeval tv_r_Project_6_360_s, tv_r_Project_6_360_e;
    gettimeofday(&tv_r_Project_6_360_s, 0);
    SW_Project_TD_6397(tbl_SerializeFromObject_TD_8148_input, tbl_Project_TD_6397_output);
    gettimeofday(&tv_r_Project_6_360_e, 0);

    struct timeval tv_r_JOIN_INNER_6_387_s, tv_r_JOIN_INNER_6_387_e;
    gettimeofday(&tv_r_JOIN_INNER_6_387_s, 0);
    prev_events_grp_JOIN_INNER_TD_6802.push_back(events_h2d_wr_JOIN_INNER_TD_7520[0]);
    trans_JOIN_INNER_TD_6802.add(&(tbl_Project_TD_7770_output));
    trans_JOIN_INNER_TD_6802.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6802), &(events_h2d_wr_JOIN_INNER_TD_6802[0]));
    events_grp_JOIN_INNER_TD_6802.push_back(events_h2d_wr_JOIN_INNER_TD_6802[0]);
    events_grp_JOIN_INNER_TD_6802.push_back(events_JOIN_INNER_TD_7520[0]);
    krnl_JOIN_INNER_TD_6802.run(0, &(events_grp_JOIN_INNER_TD_6802), &(events_JOIN_INNER_TD_6802[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_387_e, 0);

    struct timeval tv_r_Filter_5_169_s, tv_r_Filter_5_169_e;
    gettimeofday(&tv_r_Filter_5_169_s, 0);
    SW_Filter_TD_5806(tbl_SerializeFromObject_TD_644_input, tbl_Filter_TD_5806_output);
    gettimeofday(&tv_r_Filter_5_169_e, 0);

    struct timeval tv_r_Project_5_759_s, tv_r_Project_5_759_e;
    gettimeofday(&tv_r_Project_5_759_s, 0);
    SW_Project_TD_5490(tbl_Filter_TD_6357_output, tbl_Project_TD_5490_output);
    gettimeofday(&tv_r_Project_5_759_e, 0);

    struct timeval tv_r_JOIN_INNER_5_126_s, tv_r_JOIN_INNER_5_126_e;
    gettimeofday(&tv_r_JOIN_INNER_5_126_s, 0);
    prev_events_grp_JOIN_INNER_TD_5770.push_back(events_h2d_wr_JOIN_INNER_TD_6802[0]);
    trans_JOIN_INNER_TD_5770.add(&(tbl_Project_TD_6397_output));
    trans_JOIN_INNER_TD_5770.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5770), &(events_h2d_wr_JOIN_INNER_TD_5770[0]));
    events_grp_JOIN_INNER_TD_5770.push_back(events_h2d_wr_JOIN_INNER_TD_5770[0]);
    events_grp_JOIN_INNER_TD_5770.push_back(events_JOIN_INNER_TD_6802[0]);
    krnl_JOIN_INNER_TD_5770.run(0, &(events_grp_JOIN_INNER_TD_5770), &(events_JOIN_INNER_TD_5770[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_126_e, 0);

    struct timeval tv_r_Project_4_448_s, tv_r_Project_4_448_e;
    gettimeofday(&tv_r_Project_4_448_s, 0);
    SW_Project_TD_448(tbl_Filter_TD_5806_output, tbl_Project_TD_448_output);
    gettimeofday(&tv_r_Project_4_448_e, 0);

    struct timeval tv_r_JOIN_INNER_4_634_s, tv_r_JOIN_INNER_4_634_e;
    gettimeofday(&tv_r_JOIN_INNER_4_634_s, 0);
    prev_events_grp_JOIN_INNER_TD_4311.push_back(events_h2d_wr_JOIN_INNER_TD_5770[0]);
    trans_JOIN_INNER_TD_4311.add(&(tbl_Project_TD_5490_output));
    trans_JOIN_INNER_TD_4311.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4311), &(events_h2d_wr_JOIN_INNER_TD_4311[0]));
    events_grp_JOIN_INNER_TD_4311.push_back(events_h2d_wr_JOIN_INNER_TD_4311[0]);
    events_grp_JOIN_INNER_TD_4311.push_back(events_JOIN_INNER_TD_5770[0]);
    krnl_JOIN_INNER_TD_4311.run(0, &(events_grp_JOIN_INNER_TD_4311), &(events_JOIN_INNER_TD_4311[0]));
    
    trans_JOIN_INNER_TD_4311_out.add(&(tbl_JOIN_INNER_TD_4311_output));
    trans_JOIN_INNER_TD_4311_out.dev2host(0, &(events_JOIN_INNER_TD_4311), &(events_d2h_rd_JOIN_INNER_TD_4311[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_634_e, 0);

    struct timeval tv_r_JOIN_INNER_3_717_s, tv_r_JOIN_INNER_3_717_e;
    gettimeofday(&tv_r_JOIN_INNER_3_717_s, 0);
    SW_JOIN_INNER_TD_3152(tbl_JOIN_INNER_TD_4311_output, tbl_Project_TD_448_output, tbl_SerializeFromObject_TD_7322_input, tbl_SerializeFromObject_TD_644_input, tbl_JOIN_INNER_TD_3152_output);
    gettimeofday(&tv_r_JOIN_INNER_3_717_e, 0);

    struct timeval tv_r_Project_2_721_s, tv_r_Project_2_721_e;
    gettimeofday(&tv_r_Project_2_721_s, 0);
    SW_Project_TD_2940(tbl_JOIN_INNER_TD_3152_output, tbl_Project_TD_2940_output);
    gettimeofday(&tv_r_Project_2_721_e, 0);

    struct timeval tv_r_Aggregate_1_435_s, tv_r_Aggregate_1_435_e;
    gettimeofday(&tv_r_Aggregate_1_435_s, 0);
    SW_Aggregate_TD_174(tbl_Project_TD_2940_output, tbl_Aggregate_TD_174_output);
    gettimeofday(&tv_r_Aggregate_1_435_e, 0);

    struct timeval tv_r_Sort_0_445_s, tv_r_Sort_0_445_e;
    gettimeofday(&tv_r_Sort_0_445_s, 0);
    SW_Sort_TD_0122(tbl_Aggregate_TD_174_output, tbl_Sort_TD_0122_output);
    gettimeofday(&tv_r_Sort_0_445_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_956_s, &tv_r_Filter_9_956_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10167_input: " << tbl_SerializeFromObject_TD_10167_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_333_s, &tv_r_Project_8_333_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9837_output: " << tbl_Filter_TD_9837_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_326_s, &tv_r_Project_8_326_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10132_input: " << tbl_SerializeFromObject_TD_10132_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_66_s, &tv_r_Project_7_66_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_951_input: " << tbl_SerializeFromObject_TD_951_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_558_s, &tv_r_JOIN_INNER_7_558_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8866_output: " << tbl_Project_TD_8866_output.getNumRow() << " " << "tbl_Project_TD_8679_output: " << tbl_Project_TD_8679_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_978_s, &tv_r_Filter_6_978_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7322_input: " << tbl_SerializeFromObject_TD_7322_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_360_s, &tv_r_Project_6_360_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8148_input: " << tbl_SerializeFromObject_TD_8148_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_387_s, &tv_r_JOIN_INNER_6_387_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7520_output: " << tbl_JOIN_INNER_TD_7520_output.getNumRow() << " " << "tbl_Project_TD_7770_output: " << tbl_Project_TD_7770_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_169_s, &tv_r_Filter_5_169_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_644_input: " << tbl_SerializeFromObject_TD_644_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_759_s, &tv_r_Project_5_759_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6357_output: " << tbl_Filter_TD_6357_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_126_s, &tv_r_JOIN_INNER_5_126_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6802_output: " << tbl_JOIN_INNER_TD_6802_output.getNumRow() << " " << "tbl_Project_TD_6397_output: " << tbl_Project_TD_6397_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_448_s, &tv_r_Project_4_448_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5806_output: " << tbl_Filter_TD_5806_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_634_s, &tv_r_JOIN_INNER_4_634_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5770_output: " << tbl_JOIN_INNER_TD_5770_output.getNumRow() << " " << "tbl_Project_TD_5490_output: " << tbl_Project_TD_5490_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_717_s, &tv_r_JOIN_INNER_3_717_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4311_output: " << tbl_JOIN_INNER_TD_4311_output.getNumRow() << " " << "tbl_Project_TD_448_output: " << tbl_Project_TD_448_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_721_s, &tv_r_Project_2_721_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3152_output: " << tbl_JOIN_INNER_TD_3152_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_435_s, &tv_r_Aggregate_1_435_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2940_output: " << tbl_Project_TD_2940_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_445_s, &tv_r_Sort_0_445_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_174_output: " << tbl_Aggregate_TD_174_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 6.9478426 * 1000 << "ms" << std::endl; 
    return 0; 
}
