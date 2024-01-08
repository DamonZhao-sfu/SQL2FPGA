// number of overlays (w/o fusion): 5 
// number of overlays (w/ fusion): 5 
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
    Table tbl_Sort_TD_0599_output("tbl_Sort_TD_0599_output", 6100000, 2, "");
    tbl_Sort_TD_0599_output.allocateHost();
    Table tbl_Aggregate_TD_1249_output("tbl_Aggregate_TD_1249_output", 6100000, 2, "");
    tbl_Aggregate_TD_1249_output.allocateHost();
    Table tbl_Project_TD_2270_output("tbl_Project_TD_2270_output", 6100000, 3, "");
    tbl_Project_TD_2270_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3643_output("tbl_JOIN_INNER_TD_3643_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3643_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4100_output("tbl_JOIN_INNER_TD_4100_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4100_output.allocateHost();
    Table tbl_Project_TD_4926_output("tbl_Project_TD_4926_output", 6100000, 1, "");
    tbl_Project_TD_4926_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5605_output("tbl_JOIN_INNER_TD_5605_output", 12215, 5, "");
    tbl_JOIN_INNER_TD_5605_output.allocateHost();
    Table tbl_Project_TD_5914_output("tbl_Project_TD_5914_output", 6100000, 2, "");
    tbl_Project_TD_5914_output.allocateHost();
    Table tbl_Filter_TD_5570_output("tbl_Filter_TD_5570_output", 6100000, 1, "");
    tbl_Filter_TD_5570_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6622_output("tbl_JOIN_INNER_TD_6622_output", 12215, 5, "");
    tbl_JOIN_INNER_TD_6622_output.allocateHost();
    Table tbl_Project_TD_6597_output("tbl_Project_TD_6597_output", 6100000, 2, "");
    tbl_Project_TD_6597_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7878_input;
    tbl_SerializeFromObject_TD_7878_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7878_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_7878_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_7878_input.allocateHost();
    tbl_SerializeFromObject_TD_7878_input.loadHost();
    Table tbl_SerializeFromObject_TD_6168_input;
    tbl_SerializeFromObject_TD_6168_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6168_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_6168_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_6168_input.allocateHost();
    tbl_SerializeFromObject_TD_6168_input.loadHost();
    Table tbl_JOIN_INNER_TD_7754_output("tbl_JOIN_INNER_TD_7754_output", 12215, 5, "");
    tbl_JOIN_INNER_TD_7754_output.allocateHost();
    Table tbl_Project_TD_7232_output("tbl_Project_TD_7232_output", 6100000, 2, "");
    tbl_Project_TD_7232_output.allocateHost();
    Table tbl_SerializeFromObject_TD_859_input;
    tbl_SerializeFromObject_TD_859_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_859_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_859_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_859_input.allocateHost();
    tbl_SerializeFromObject_TD_859_input.loadHost();
    Table tbl_JOIN_INNER_TD_8761_output("tbl_JOIN_INNER_TD_8761_output", 39720, 4, "");
    tbl_JOIN_INNER_TD_8761_output.allocateHost();
    Table tbl_Project_TD_8484_output("tbl_Project_TD_8484_output", 6100000, 3, "");
    tbl_Project_TD_8484_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9310_input;
    tbl_SerializeFromObject_TD_9310_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9310_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_9310_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_9310_input.allocateHost();
    tbl_SerializeFromObject_TD_9310_input.loadHost();
    Table tbl_JOIN_INNER_TD_9344_output("tbl_JOIN_INNER_TD_9344_output", 39720, 4, "");
    tbl_JOIN_INNER_TD_9344_output.allocateHost();
    Table tbl_Project_TD_9985_output("tbl_Project_TD_9985_output", 6100000, 2, "");
    tbl_Project_TD_9985_output.allocateHost();
    Table tbl_Filter_TD_9846_output("tbl_Filter_TD_9846_output", 6100000, 3, "");
    tbl_Filter_TD_9846_output.allocateHost();
    Table tbl_Project_TD_10420_output("tbl_Project_TD_10420_output", 6100000, 1, "");
    tbl_Project_TD_10420_output.allocateHost();
    Table tbl_Project_TD_10221_output("tbl_Project_TD_10221_output", 6100000, 5, "");
    tbl_Project_TD_10221_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11146_input;
    tbl_SerializeFromObject_TD_11146_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_11146_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_11146_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_11146_input.allocateHost();
    tbl_SerializeFromObject_TD_11146_input.loadHost();
    Table tbl_SerializeFromObject_TD_10979_input;
    tbl_SerializeFromObject_TD_10979_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_10979_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_10979_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_10979_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_10979_input.allocateHost();
    tbl_SerializeFromObject_TD_10979_input.loadHost();
    Table tbl_Filter_TD_1124_output("tbl_Filter_TD_1124_output", 6100000, 1, "");
    tbl_Filter_TD_1124_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12208_input;
    tbl_SerializeFromObject_TD_12208_input = Table("lineitem", lineitem_n, 5, in_dir);
    tbl_SerializeFromObject_TD_12208_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_12208_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_12208_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_12208_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_12208_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_12208_input.allocateHost();
    tbl_SerializeFromObject_TD_12208_input.loadHost();
    Table tbl_SerializeFromObject_TD_12699_input;
    tbl_SerializeFromObject_TD_12699_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_12699_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_12699_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_12699_input.allocateHost();
    tbl_SerializeFromObject_TD_12699_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5605_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6622_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6597_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7754_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7232_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8761_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8484_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9344_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_9985_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10420_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10221_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5605_cmds;
    cfg_JOIN_INNER_TD_5605_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5605_gqe_join (cfg_JOIN_INNER_TD_5605_cmds.cmd);
    cfg_JOIN_INNER_TD_5605_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6622_cmds;
    cfg_JOIN_INNER_TD_6622_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6622_gqe_join (cfg_JOIN_INNER_TD_6622_cmds.cmd);
    cfg_JOIN_INNER_TD_6622_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7754_cmds;
    cfg_JOIN_INNER_TD_7754_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7754_gqe_join (cfg_JOIN_INNER_TD_7754_cmds.cmd);
    cfg_JOIN_INNER_TD_7754_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8761_cmds;
    cfg_JOIN_INNER_TD_8761_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8761_gqe_join (cfg_JOIN_INNER_TD_8761_cmds.cmd);
    cfg_JOIN_INNER_TD_8761_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9344_cmds;
    cfg_JOIN_INNER_TD_9344_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9344_gqe_join (cfg_JOIN_INNER_TD_9344_cmds.cmd);
    cfg_JOIN_INNER_TD_9344_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5605;
    krnl_JOIN_INNER_TD_5605 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5605.setup(tbl_Project_TD_6597_output, tbl_JOIN_INNER_TD_6622_output, tbl_JOIN_INNER_TD_5605_output, cfg_JOIN_INNER_TD_5605_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6622;
    krnl_JOIN_INNER_TD_6622 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6622.setup(tbl_JOIN_INNER_TD_7754_output, tbl_Project_TD_7232_output, tbl_JOIN_INNER_TD_6622_output, cfg_JOIN_INNER_TD_6622_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7754;
    krnl_JOIN_INNER_TD_7754 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7754.setup(tbl_JOIN_INNER_TD_8761_output, tbl_Project_TD_8484_output, tbl_JOIN_INNER_TD_7754_output, cfg_JOIN_INNER_TD_7754_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8761;
    krnl_JOIN_INNER_TD_8761 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8761.setup(tbl_Project_TD_9985_output, tbl_JOIN_INNER_TD_9344_output, tbl_JOIN_INNER_TD_8761_output, cfg_JOIN_INNER_TD_8761_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9344;
    krnl_JOIN_INNER_TD_9344 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9344.setup(tbl_Project_TD_10420_output, tbl_Project_TD_10221_output, tbl_JOIN_INNER_TD_9344_output, cfg_JOIN_INNER_TD_9344_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5605;
    trans_JOIN_INNER_TD_5605.setq(q_h);
    trans_JOIN_INNER_TD_5605.add(&(cfg_JOIN_INNER_TD_5605_cmds));
    transEngine trans_JOIN_INNER_TD_5605_out;
    trans_JOIN_INNER_TD_5605_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6622;
    trans_JOIN_INNER_TD_6622.setq(q_h);
    trans_JOIN_INNER_TD_6622.add(&(cfg_JOIN_INNER_TD_6622_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7754;
    trans_JOIN_INNER_TD_7754.setq(q_h);
    trans_JOIN_INNER_TD_7754.add(&(cfg_JOIN_INNER_TD_7754_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8761;
    trans_JOIN_INNER_TD_8761.setq(q_h);
    trans_JOIN_INNER_TD_8761.add(&(cfg_JOIN_INNER_TD_8761_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9344;
    trans_JOIN_INNER_TD_9344.setq(q_h);
    trans_JOIN_INNER_TD_9344.add(&(cfg_JOIN_INNER_TD_9344_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5605;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5605;
    std::vector<cl::Event> events_JOIN_INNER_TD_5605;
    events_h2d_wr_JOIN_INNER_TD_5605.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5605.resize(1);
    events_JOIN_INNER_TD_5605.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5605;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5605;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6622;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6622;
    std::vector<cl::Event> events_JOIN_INNER_TD_6622;
    events_h2d_wr_JOIN_INNER_TD_6622.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6622.resize(1);
    events_JOIN_INNER_TD_6622.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6622;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6622;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7754;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7754;
    std::vector<cl::Event> events_JOIN_INNER_TD_7754;
    events_h2d_wr_JOIN_INNER_TD_7754.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7754.resize(1);
    events_JOIN_INNER_TD_7754.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7754;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7754;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8761;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8761;
    std::vector<cl::Event> events_JOIN_INNER_TD_8761;
    events_h2d_wr_JOIN_INNER_TD_8761.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8761.resize(1);
    events_JOIN_INNER_TD_8761.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8761;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8761;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9344;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9344;
    std::vector<cl::Event> events_JOIN_INNER_TD_9344;
    events_h2d_wr_JOIN_INNER_TD_9344.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9344.resize(1);
    events_JOIN_INNER_TD_9344.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9344;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9344;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_240_s, tv_r_Filter_11_240_e;
    gettimeofday(&tv_r_Filter_11_240_s, 0);
    SW_Filter_TD_1124(tbl_SerializeFromObject_TD_12699_input, tbl_Filter_TD_1124_output);
    gettimeofday(&tv_r_Filter_11_240_e, 0);

    struct timeval tv_r_Project_10_372_s, tv_r_Project_10_372_e;
    gettimeofday(&tv_r_Project_10_372_s, 0);
    SW_Project_TD_10221(tbl_SerializeFromObject_TD_12208_input, tbl_Project_TD_10221_output);
    gettimeofday(&tv_r_Project_10_372_e, 0);

    struct timeval tv_r_Project_10_692_s, tv_r_Project_10_692_e;
    gettimeofday(&tv_r_Project_10_692_s, 0);
    SW_Project_TD_10420(tbl_Filter_TD_1124_output, tbl_Project_TD_10420_output);
    gettimeofday(&tv_r_Project_10_692_e, 0);

    struct timeval tv_r_Filter_9_185_s, tv_r_Filter_9_185_e;
    gettimeofday(&tv_r_Filter_9_185_s, 0);
    SW_Filter_TD_9846(tbl_SerializeFromObject_TD_10979_input, tbl_Filter_TD_9846_output);
    gettimeofday(&tv_r_Filter_9_185_e, 0);

    struct timeval tv_r_Project_9_486_s, tv_r_Project_9_486_e;
    gettimeofday(&tv_r_Project_9_486_s, 0);
    SW_Project_TD_9985(tbl_SerializeFromObject_TD_11146_input, tbl_Project_TD_9985_output);
    gettimeofday(&tv_r_Project_9_486_e, 0);

    struct timeval tv_r_JOIN_INNER_9_959_s, tv_r_JOIN_INNER_9_959_e;
    gettimeofday(&tv_r_JOIN_INNER_9_959_s, 0);
    trans_JOIN_INNER_TD_9344.add(&(tbl_Project_TD_10420_output));
    trans_JOIN_INNER_TD_9344.add(&(tbl_Project_TD_10221_output));
    trans_JOIN_INNER_TD_9344.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9344), &(events_h2d_wr_JOIN_INNER_TD_9344[0]));
    events_grp_JOIN_INNER_TD_9344.push_back(events_h2d_wr_JOIN_INNER_TD_9344[0]);
    krnl_JOIN_INNER_TD_9344.run(0, &(events_grp_JOIN_INNER_TD_9344), &(events_JOIN_INNER_TD_9344[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_959_e, 0);

    struct timeval tv_r_Project_8_238_s, tv_r_Project_8_238_e;
    gettimeofday(&tv_r_Project_8_238_s, 0);
    SW_Project_TD_8484(tbl_Filter_TD_9846_output, tbl_Project_TD_8484_output);
    gettimeofday(&tv_r_Project_8_238_e, 0);

    struct timeval tv_r_JOIN_INNER_8_700_s, tv_r_JOIN_INNER_8_700_e;
    gettimeofday(&tv_r_JOIN_INNER_8_700_s, 0);
    prev_events_grp_JOIN_INNER_TD_8761.push_back(events_h2d_wr_JOIN_INNER_TD_9344[0]);
    trans_JOIN_INNER_TD_8761.add(&(tbl_Project_TD_9985_output));
    trans_JOIN_INNER_TD_8761.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8761), &(events_h2d_wr_JOIN_INNER_TD_8761[0]));
    events_grp_JOIN_INNER_TD_8761.push_back(events_h2d_wr_JOIN_INNER_TD_8761[0]);
    events_grp_JOIN_INNER_TD_8761.push_back(events_JOIN_INNER_TD_9344[0]);
    krnl_JOIN_INNER_TD_8761.run(0, &(events_grp_JOIN_INNER_TD_8761), &(events_JOIN_INNER_TD_8761[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_700_e, 0);

    struct timeval tv_r_Project_7_899_s, tv_r_Project_7_899_e;
    gettimeofday(&tv_r_Project_7_899_s, 0);
    SW_Project_TD_7232(tbl_SerializeFromObject_TD_9310_input, tbl_Project_TD_7232_output);
    gettimeofday(&tv_r_Project_7_899_e, 0);

    struct timeval tv_r_JOIN_INNER_7_480_s, tv_r_JOIN_INNER_7_480_e;
    gettimeofday(&tv_r_JOIN_INNER_7_480_s, 0);
    prev_events_grp_JOIN_INNER_TD_7754.push_back(events_h2d_wr_JOIN_INNER_TD_8761[0]);
    trans_JOIN_INNER_TD_7754.add(&(tbl_Project_TD_8484_output));
    trans_JOIN_INNER_TD_7754.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7754), &(events_h2d_wr_JOIN_INNER_TD_7754[0]));
    events_grp_JOIN_INNER_TD_7754.push_back(events_h2d_wr_JOIN_INNER_TD_7754[0]);
    events_grp_JOIN_INNER_TD_7754.push_back(events_JOIN_INNER_TD_8761[0]);
    krnl_JOIN_INNER_TD_7754.run(0, &(events_grp_JOIN_INNER_TD_7754), &(events_JOIN_INNER_TD_7754[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_480_e, 0);

    struct timeval tv_r_Project_6_563_s, tv_r_Project_6_563_e;
    gettimeofday(&tv_r_Project_6_563_s, 0);
    SW_Project_TD_6597(tbl_SerializeFromObject_TD_859_input, tbl_Project_TD_6597_output);
    gettimeofday(&tv_r_Project_6_563_e, 0);

    struct timeval tv_r_JOIN_INNER_6_627_s, tv_r_JOIN_INNER_6_627_e;
    gettimeofday(&tv_r_JOIN_INNER_6_627_s, 0);
    prev_events_grp_JOIN_INNER_TD_6622.push_back(events_h2d_wr_JOIN_INNER_TD_7754[0]);
    trans_JOIN_INNER_TD_6622.add(&(tbl_Project_TD_7232_output));
    trans_JOIN_INNER_TD_6622.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6622), &(events_h2d_wr_JOIN_INNER_TD_6622[0]));
    events_grp_JOIN_INNER_TD_6622.push_back(events_h2d_wr_JOIN_INNER_TD_6622[0]);
    events_grp_JOIN_INNER_TD_6622.push_back(events_JOIN_INNER_TD_7754[0]);
    krnl_JOIN_INNER_TD_6622.run(0, &(events_grp_JOIN_INNER_TD_6622), &(events_JOIN_INNER_TD_6622[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_627_e, 0);

    struct timeval tv_r_Filter_5_439_s, tv_r_Filter_5_439_e;
    gettimeofday(&tv_r_Filter_5_439_s, 0);
    SW_Filter_TD_5570(tbl_SerializeFromObject_TD_6168_input, tbl_Filter_TD_5570_output);
    gettimeofday(&tv_r_Filter_5_439_e, 0);

    struct timeval tv_r_Project_5_178_s, tv_r_Project_5_178_e;
    gettimeofday(&tv_r_Project_5_178_s, 0);
    SW_Project_TD_5914(tbl_SerializeFromObject_TD_7878_input, tbl_Project_TD_5914_output);
    gettimeofday(&tv_r_Project_5_178_e, 0);

    struct timeval tv_r_JOIN_INNER_5_244_s, tv_r_JOIN_INNER_5_244_e;
    gettimeofday(&tv_r_JOIN_INNER_5_244_s, 0);
    prev_events_grp_JOIN_INNER_TD_5605.push_back(events_h2d_wr_JOIN_INNER_TD_6622[0]);
    trans_JOIN_INNER_TD_5605.add(&(tbl_Project_TD_6597_output));
    trans_JOIN_INNER_TD_5605.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5605), &(events_h2d_wr_JOIN_INNER_TD_5605[0]));
    events_grp_JOIN_INNER_TD_5605.push_back(events_h2d_wr_JOIN_INNER_TD_5605[0]);
    events_grp_JOIN_INNER_TD_5605.push_back(events_JOIN_INNER_TD_6622[0]);
    krnl_JOIN_INNER_TD_5605.run(0, &(events_grp_JOIN_INNER_TD_5605), &(events_JOIN_INNER_TD_5605[0]));
    
    trans_JOIN_INNER_TD_5605_out.add(&(tbl_JOIN_INNER_TD_5605_output));
    trans_JOIN_INNER_TD_5605_out.dev2host(0, &(events_JOIN_INNER_TD_5605), &(events_d2h_rd_JOIN_INNER_TD_5605[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_244_e, 0);

    struct timeval tv_r_Project_4_919_s, tv_r_Project_4_919_e;
    gettimeofday(&tv_r_Project_4_919_s, 0);
    SW_Project_TD_4926(tbl_Filter_TD_5570_output, tbl_Project_TD_4926_output);
    gettimeofday(&tv_r_Project_4_919_e, 0);

    struct timeval tv_r_JOIN_INNER_4_40_s, tv_r_JOIN_INNER_4_40_e;
    gettimeofday(&tv_r_JOIN_INNER_4_40_s, 0);
    SW_JOIN_INNER_TD_4100(tbl_JOIN_INNER_TD_5605_output, tbl_Project_TD_5914_output, tbl_JOIN_INNER_TD_4100_output);
    gettimeofday(&tv_r_JOIN_INNER_4_40_e, 0);

    struct timeval tv_r_JOIN_INNER_3_177_s, tv_r_JOIN_INNER_3_177_e;
    gettimeofday(&tv_r_JOIN_INNER_3_177_s, 0);
    SW_JOIN_INNER_TD_3643(tbl_JOIN_INNER_TD_4100_output, tbl_Project_TD_4926_output, tbl_JOIN_INNER_TD_3643_output);
    gettimeofday(&tv_r_JOIN_INNER_3_177_e, 0);

    struct timeval tv_r_Project_2_56_s, tv_r_Project_2_56_e;
    gettimeofday(&tv_r_Project_2_56_s, 0);
    SW_Project_TD_2270(tbl_JOIN_INNER_TD_3643_output, tbl_Project_TD_2270_output);
    gettimeofday(&tv_r_Project_2_56_e, 0);

    struct timeval tv_r_Aggregate_1_336_s, tv_r_Aggregate_1_336_e;
    gettimeofday(&tv_r_Aggregate_1_336_s, 0);
    SW_Aggregate_TD_1249(tbl_Project_TD_2270_output, tbl_Aggregate_TD_1249_output);
    gettimeofday(&tv_r_Aggregate_1_336_e, 0);

    struct timeval tv_r_Sort_0_90_s, tv_r_Sort_0_90_e;
    gettimeofday(&tv_r_Sort_0_90_s, 0);
    SW_Sort_TD_0599(tbl_Aggregate_TD_1249_output, tbl_Sort_TD_0599_output);
    gettimeofday(&tv_r_Sort_0_90_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_240_s, &tv_r_Filter_11_240_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12699_input: " << tbl_SerializeFromObject_TD_12699_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_372_s, &tv_r_Project_10_372_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12208_input: " << tbl_SerializeFromObject_TD_12208_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_692_s, &tv_r_Project_10_692_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1124_output: " << tbl_Filter_TD_1124_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_185_s, &tv_r_Filter_9_185_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10979_input: " << tbl_SerializeFromObject_TD_10979_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_9: " << tvdiff(&tv_r_Project_9_486_s, &tv_r_Project_9_486_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11146_input: " << tbl_SerializeFromObject_TD_11146_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_959_s, &tv_r_JOIN_INNER_9_959_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10420_output: " << tbl_Project_TD_10420_output.getNumRow() << " " << "tbl_Project_TD_10221_output: " << tbl_Project_TD_10221_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_238_s, &tv_r_Project_8_238_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9846_output: " << tbl_Filter_TD_9846_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_700_s, &tv_r_JOIN_INNER_8_700_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9344_output: " << tbl_JOIN_INNER_TD_9344_output.getNumRow() << " " << "tbl_Project_TD_9985_output: " << tbl_Project_TD_9985_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_899_s, &tv_r_Project_7_899_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9310_input: " << tbl_SerializeFromObject_TD_9310_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_480_s, &tv_r_JOIN_INNER_7_480_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8761_output: " << tbl_JOIN_INNER_TD_8761_output.getNumRow() << " " << "tbl_Project_TD_8484_output: " << tbl_Project_TD_8484_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_563_s, &tv_r_Project_6_563_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_859_input: " << tbl_SerializeFromObject_TD_859_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_627_s, &tv_r_JOIN_INNER_6_627_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7754_output: " << tbl_JOIN_INNER_TD_7754_output.getNumRow() << " " << "tbl_Project_TD_7232_output: " << tbl_Project_TD_7232_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_439_s, &tv_r_Filter_5_439_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6168_input: " << tbl_SerializeFromObject_TD_6168_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_178_s, &tv_r_Project_5_178_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7878_input: " << tbl_SerializeFromObject_TD_7878_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_244_s, &tv_r_JOIN_INNER_5_244_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6622_output: " << tbl_JOIN_INNER_TD_6622_output.getNumRow() << " " << "tbl_Project_TD_6597_output: " << tbl_Project_TD_6597_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_919_s, &tv_r_Project_4_919_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5570_output: " << tbl_Filter_TD_5570_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_40_s, &tv_r_JOIN_INNER_4_40_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5605_output: " << tbl_JOIN_INNER_TD_5605_output.getNumRow() << " " << "tbl_Project_TD_5914_output: " << tbl_Project_TD_5914_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_177_s, &tv_r_JOIN_INNER_3_177_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4100_output: " << tbl_JOIN_INNER_TD_4100_output.getNumRow() << " " << "tbl_Project_TD_4926_output: " << tbl_Project_TD_4926_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_56_s, &tv_r_Project_2_56_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3643_output: " << tbl_JOIN_INNER_TD_3643_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_336_s, &tv_r_Aggregate_1_336_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2270_output: " << tbl_Project_TD_2270_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_90_s, &tv_r_Sort_0_90_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1249_output: " << tbl_Aggregate_TD_1249_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 9.531869 * 1000 << "ms" << std::endl; 
    return 0; 
}
