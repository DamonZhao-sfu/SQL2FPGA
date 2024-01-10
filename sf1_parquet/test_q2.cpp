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

#include "cfgFunc_q2.hpp" 
#include "q2.hpp" 

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
    std::cout << "NOTE:running query #2\n."; 
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
    Table tbl_Sort_TD_0458_output("tbl_Sort_TD_0458_output", 6100000, 8, "");
    tbl_Sort_TD_0458_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1327_output("tbl_JOIN_INNER_TD_1327_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_1327_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2536_output("tbl_JOIN_INNER_TD_2536_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_2536_output.allocateHost();
    Table tbl_Project_TD_2528_output("tbl_Project_TD_2528_output", 6100000, 1, "");
    tbl_Project_TD_2528_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3641_output("tbl_JOIN_INNER_TD_3641_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_3641_output.allocateHost();
    Table tbl_Project_TD_3826_output("tbl_Project_TD_3826_output", 6100000, 3, "");
    tbl_Project_TD_3826_output.allocateHost();
    Table tbl_Filter_TD_3771_output("tbl_Filter_TD_3771_output", 6100000, 1, "");
    tbl_Filter_TD_3771_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4202_output("tbl_JOIN_INNER_TD_4202_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4202_output.allocateHost();
    Table tbl_Project_TD_4974_output("tbl_Project_TD_4974_output", 6100000, 7, "");
    tbl_Project_TD_4974_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5822_input;
    tbl_SerializeFromObject_TD_5822_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5822_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5822_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5822_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5822_input.allocateHost();
    tbl_SerializeFromObject_TD_5822_input.loadHost();
    Table tbl_SerializeFromObject_TD_4355_input;
    tbl_SerializeFromObject_TD_4355_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4355_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_4355_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_4355_input.allocateHost();
    tbl_SerializeFromObject_TD_4355_input.loadHost();
    Table tbl_JOIN_INNER_TD_522_output("tbl_JOIN_INNER_TD_522_output", 628, 4, "");
    tbl_JOIN_INNER_TD_522_output.allocateHost();
    Table tbl_Aggregate_TD_6304_output("tbl_Aggregate_TD_6304_output", 6100000, 2, "");
    tbl_Aggregate_TD_6304_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.addCol("s_phone", 4, 1, 0);
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.addCol("s_comment", 4, 1, 0);
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_6406_input;
    tbl_SerializeFromObject_TD_6406_input = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6406_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6406_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_6406_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_6406_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6406_input.addCol("s_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_6406_input.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6406_input.addCol("s_comment", TPCH_READ_S_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_6406_input.allocateHost();
    tbl_SerializeFromObject_TD_6406_input.loadHost();
    Table tbl_Project_TD_6732_output("tbl_Project_TD_6732_output", 6100000, 2, "");
    tbl_Project_TD_6732_output.allocateHost();
    Table tbl_Project_TD_6765_output("tbl_Project_TD_6765_output", 6100000, 3, "");
    tbl_Project_TD_6765_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7488_output("tbl_JOIN_INNER_TD_7488_output", 5, 2, "");
    tbl_JOIN_INNER_TD_7488_output.allocateHost();
    Table tbl_Filter_TD_747_output("tbl_Filter_TD_747_output", 6100000, 2, "");
    tbl_Filter_TD_747_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8423_input;
    tbl_SerializeFromObject_TD_8423_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8423_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8423_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8423_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8423_input.allocateHost();
    tbl_SerializeFromObject_TD_8423_input.loadHost();
    Table tbl_JOIN_INNER_TD_8366_output("tbl_JOIN_INNER_TD_8366_output", 2036, 3, "");
    tbl_JOIN_INNER_TD_8366_output.allocateHost();
    Table tbl_Project_TD_8624_output("tbl_Project_TD_8624_output", 6100000, 1, "");
    tbl_Project_TD_8624_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8634_input;
    tbl_SerializeFromObject_TD_8634_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_8634_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_8634_input.addCol("p_mfgr", TPCH_READ_P_MFG_LEN+1);
    tbl_SerializeFromObject_TD_8634_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_8634_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_8634_input.allocateHost();
    tbl_SerializeFromObject_TD_8634_input.loadHost();
    Table tbl_JOIN_INNER_TD_9685_output("tbl_JOIN_INNER_TD_9685_output", 162880, 3, "");
    tbl_JOIN_INNER_TD_9685_output.allocateHost();
    Table tbl_Project_TD_9300_output("tbl_Project_TD_9300_output", 6100000, 2, "");
    tbl_Project_TD_9300_output.allocateHost();
    Table tbl_Filter_TD_9144_output("tbl_Filter_TD_9144_output", 6100000, 1, "");
    tbl_Filter_TD_9144_output.allocateHost();
    Table tbl_Project_TD_10234_output("tbl_Project_TD_10234_output", 6100000, 3, "");
    tbl_Project_TD_10234_output.allocateHost();
    Table tbl_Project_TD_10913_output("tbl_Project_TD_10913_output", 6100000, 2, "");
    tbl_Project_TD_10913_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11949_input;
    tbl_SerializeFromObject_TD_11949_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_11949_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_11949_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_11949_input.allocateHost();
    tbl_SerializeFromObject_TD_11949_input.loadHost();
    Table tbl_SerializeFromObject_TD_10853_input;
    tbl_SerializeFromObject_TD_10853_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10853_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_10853_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_10853_input.allocateHost();
    tbl_SerializeFromObject_TD_10853_input.loadHost();
    Table tbl_SerializeFromObject_TD_12480_input;
    tbl_SerializeFromObject_TD_12480_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_12480_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_12480_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_12480_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_12480_input.allocateHost();
    tbl_SerializeFromObject_TD_12480_input.loadHost();
    Table tbl_SerializeFromObject_TD_1294_input;
    tbl_SerializeFromObject_TD_1294_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_1294_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_1294_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_1294_input.allocateHost();
    tbl_SerializeFromObject_TD_1294_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_522_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6732_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6765_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7488_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8366_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8624_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9685_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_9300_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10234_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10913_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_522_cmds;
    cfg_JOIN_INNER_TD_522_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_522_gqe_join (cfg_JOIN_INNER_TD_522_cmds.cmd);
    cfg_JOIN_INNER_TD_522_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7488_cmds;
    cfg_JOIN_INNER_TD_7488_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7488_gqe_join (cfg_JOIN_INNER_TD_7488_cmds.cmd);
    cfg_JOIN_INNER_TD_7488_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8366_cmds;
    cfg_JOIN_INNER_TD_8366_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8366_gqe_join (cfg_JOIN_INNER_TD_8366_cmds.cmd);
    cfg_JOIN_INNER_TD_8366_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9685_cmds;
    cfg_JOIN_INNER_TD_9685_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9685_gqe_join (cfg_JOIN_INNER_TD_9685_cmds.cmd);
    cfg_JOIN_INNER_TD_9685_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_522;
    krnl_JOIN_INNER_TD_522 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_522.setup(tbl_Project_TD_6765_output, tbl_Project_TD_6732_output, tbl_JOIN_INNER_TD_522_output, cfg_JOIN_INNER_TD_522_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7488;
    krnl_JOIN_INNER_TD_7488 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7488.setup(tbl_JOIN_INNER_TD_8366_output, tbl_Project_TD_8624_output, tbl_JOIN_INNER_TD_7488_output, cfg_JOIN_INNER_TD_7488_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8366;
    krnl_JOIN_INNER_TD_8366 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8366.setup(tbl_JOIN_INNER_TD_9685_output, tbl_Project_TD_9300_output, tbl_JOIN_INNER_TD_8366_output, cfg_JOIN_INNER_TD_8366_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9685;
    krnl_JOIN_INNER_TD_9685 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9685.setup(tbl_Project_TD_10234_output, tbl_Project_TD_10913_output, tbl_JOIN_INNER_TD_9685_output, cfg_JOIN_INNER_TD_9685_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_522;
    trans_JOIN_INNER_TD_522.setq(q_h);
    trans_JOIN_INNER_TD_522.add(&(cfg_JOIN_INNER_TD_522_cmds));
    transEngine trans_JOIN_INNER_TD_522_out;
    trans_JOIN_INNER_TD_522_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7488;
    trans_JOIN_INNER_TD_7488.setq(q_h);
    trans_JOIN_INNER_TD_7488.add(&(cfg_JOIN_INNER_TD_7488_cmds));
    transEngine trans_JOIN_INNER_TD_7488_out;
    trans_JOIN_INNER_TD_7488_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8366;
    trans_JOIN_INNER_TD_8366.setq(q_h);
    trans_JOIN_INNER_TD_8366.add(&(cfg_JOIN_INNER_TD_8366_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9685;
    trans_JOIN_INNER_TD_9685.setq(q_h);
    trans_JOIN_INNER_TD_9685.add(&(cfg_JOIN_INNER_TD_9685_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_522;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_522;
    std::vector<cl::Event> events_JOIN_INNER_TD_522;
    events_h2d_wr_JOIN_INNER_TD_522.resize(1);
    events_d2h_rd_JOIN_INNER_TD_522.resize(1);
    events_JOIN_INNER_TD_522.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_522;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_522;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7488;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7488;
    std::vector<cl::Event> events_JOIN_INNER_TD_7488;
    events_h2d_wr_JOIN_INNER_TD_7488.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7488.resize(1);
    events_JOIN_INNER_TD_7488.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7488;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7488;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8366;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8366;
    std::vector<cl::Event> events_JOIN_INNER_TD_8366;
    events_h2d_wr_JOIN_INNER_TD_8366.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8366.resize(1);
    events_JOIN_INNER_TD_8366.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8366;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8366;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9685;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9685;
    std::vector<cl::Event> events_JOIN_INNER_TD_9685;
    events_h2d_wr_JOIN_INNER_TD_9685.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9685.resize(1);
    events_JOIN_INNER_TD_9685.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9685;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9685;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Project_10_735_s, tv_r_Project_10_735_e;
    gettimeofday(&tv_r_Project_10_735_s, 0);
    SW_Project_TD_10913(tbl_SerializeFromObject_TD_1294_input, tbl_Project_TD_10913_output);
    gettimeofday(&tv_r_Project_10_735_e, 0);

    struct timeval tv_r_Project_10_172_s, tv_r_Project_10_172_e;
    gettimeofday(&tv_r_Project_10_172_s, 0);
    SW_Project_TD_10234(tbl_SerializeFromObject_TD_12480_input, tbl_Project_TD_10234_output);
    gettimeofday(&tv_r_Project_10_172_e, 0);

    struct timeval tv_r_Filter_9_104_s, tv_r_Filter_9_104_e;
    gettimeofday(&tv_r_Filter_9_104_s, 0);
    SW_Filter_TD_9144(tbl_SerializeFromObject_TD_10853_input, tbl_Filter_TD_9144_output);
    gettimeofday(&tv_r_Filter_9_104_e, 0);

    struct timeval tv_r_Project_9_790_s, tv_r_Project_9_790_e;
    gettimeofday(&tv_r_Project_9_790_s, 0);
    SW_Project_TD_9300(tbl_SerializeFromObject_TD_11949_input, tbl_Project_TD_9300_output);
    gettimeofday(&tv_r_Project_9_790_e, 0);

    struct timeval tv_r_JOIN_INNER_9_191_s, tv_r_JOIN_INNER_9_191_e;
    gettimeofday(&tv_r_JOIN_INNER_9_191_s, 0);
    trans_JOIN_INNER_TD_9685.add(&(tbl_Project_TD_10234_output));
    trans_JOIN_INNER_TD_9685.add(&(tbl_Project_TD_10913_output));
    trans_JOIN_INNER_TD_9685.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9685), &(events_h2d_wr_JOIN_INNER_TD_9685[0]));
    events_grp_JOIN_INNER_TD_9685.push_back(events_h2d_wr_JOIN_INNER_TD_9685[0]);
    krnl_JOIN_INNER_TD_9685.run(0, &(events_grp_JOIN_INNER_TD_9685), &(events_JOIN_INNER_TD_9685[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_191_e, 0);

    struct timeval tv_r_Project_8_287_s, tv_r_Project_8_287_e;
    gettimeofday(&tv_r_Project_8_287_s, 0);
    SW_Project_TD_8624(tbl_Filter_TD_9144_output, tbl_Project_TD_8624_output);
    gettimeofday(&tv_r_Project_8_287_e, 0);

    struct timeval tv_r_JOIN_INNER_8_989_s, tv_r_JOIN_INNER_8_989_e;
    gettimeofday(&tv_r_JOIN_INNER_8_989_s, 0);
    prev_events_grp_JOIN_INNER_TD_8366.push_back(events_h2d_wr_JOIN_INNER_TD_9685[0]);
    trans_JOIN_INNER_TD_8366.add(&(tbl_Project_TD_9300_output));
    trans_JOIN_INNER_TD_8366.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8366), &(events_h2d_wr_JOIN_INNER_TD_8366[0]));
    events_grp_JOIN_INNER_TD_8366.push_back(events_h2d_wr_JOIN_INNER_TD_8366[0]);
    events_grp_JOIN_INNER_TD_8366.push_back(events_JOIN_INNER_TD_9685[0]);
    krnl_JOIN_INNER_TD_8366.run(0, &(events_grp_JOIN_INNER_TD_8366), &(events_JOIN_INNER_TD_8366[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_989_e, 0);

    struct timeval tv_r_Filter_7_737_s, tv_r_Filter_7_737_e;
    gettimeofday(&tv_r_Filter_7_737_s, 0);
    SW_Filter_TD_747(tbl_SerializeFromObject_TD_8634_input, tbl_Filter_TD_747_output);
    gettimeofday(&tv_r_Filter_7_737_e, 0);

    struct timeval tv_r_JOIN_INNER_7_678_s, tv_r_JOIN_INNER_7_678_e;
    gettimeofday(&tv_r_JOIN_INNER_7_678_s, 0);
    prev_events_grp_JOIN_INNER_TD_7488.push_back(events_h2d_wr_JOIN_INNER_TD_8366[0]);
    trans_JOIN_INNER_TD_7488.add(&(tbl_Project_TD_8624_output));
    trans_JOIN_INNER_TD_7488.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7488), &(events_h2d_wr_JOIN_INNER_TD_7488[0]));
    events_grp_JOIN_INNER_TD_7488.push_back(events_h2d_wr_JOIN_INNER_TD_7488[0]);
    events_grp_JOIN_INNER_TD_7488.push_back(events_JOIN_INNER_TD_8366[0]);
    krnl_JOIN_INNER_TD_7488.run(0, &(events_grp_JOIN_INNER_TD_7488), &(events_JOIN_INNER_TD_7488[0]));
    
    trans_JOIN_INNER_TD_7488_out.add(&(tbl_JOIN_INNER_TD_7488_output));
    trans_JOIN_INNER_TD_7488_out.dev2host(0, &(events_JOIN_INNER_TD_7488), &(events_d2h_rd_JOIN_INNER_TD_7488[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_678_e, 0);

    struct timeval tv_r_Project_6_643_s, tv_r_Project_6_643_e;
    gettimeofday(&tv_r_Project_6_643_s, 0);
    SW_Project_TD_6765(tbl_SerializeFromObject_TD_8423_input, tbl_Project_TD_6765_output);
    gettimeofday(&tv_r_Project_6_643_e, 0);

    struct timeval tv_r_Project_6_761_s, tv_r_Project_6_761_e;
    gettimeofday(&tv_r_Project_6_761_s, 0);
    SW_Project_TD_6732(tbl_Filter_TD_747_output, tbl_Project_TD_6732_output);
    gettimeofday(&tv_r_Project_6_761_e, 0);

    struct timeval tv_r_Aggregate_6_530_s, tv_r_Aggregate_6_530_e;
    gettimeofday(&tv_r_Aggregate_6_530_s, 0);
    SW_Aggregate_TD_6304(tbl_JOIN_INNER_TD_7488_output, tbl_Aggregate_TD_6304_output);
    gettimeofday(&tv_r_Aggregate_6_530_e, 0);

    struct timeval tv_r_JOIN_INNER_5_279_s, tv_r_JOIN_INNER_5_279_e;
    gettimeofday(&tv_r_JOIN_INNER_5_279_s, 0);
    trans_JOIN_INNER_TD_522.add(&(tbl_Project_TD_6732_output));
    trans_JOIN_INNER_TD_522.add(&(tbl_Project_TD_6765_output));
    trans_JOIN_INNER_TD_522.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_522), &(events_h2d_wr_JOIN_INNER_TD_522[0]));
    events_grp_JOIN_INNER_TD_522.push_back(events_h2d_wr_JOIN_INNER_TD_522[0]);
    krnl_JOIN_INNER_TD_522.run(0, &(events_grp_JOIN_INNER_TD_522), &(events_JOIN_INNER_TD_522[0]));
    
    trans_JOIN_INNER_TD_522_out.add(&(tbl_JOIN_INNER_TD_522_output));
    trans_JOIN_INNER_TD_522_out.dev2host(0, &(events_JOIN_INNER_TD_522), &(events_d2h_rd_JOIN_INNER_TD_522[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_279_e, 0);

    struct timeval tv_r_Project_4_118_s, tv_r_Project_4_118_e;
    gettimeofday(&tv_r_Project_4_118_s, 0);
    SW_Project_TD_4974(tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute, tbl_Project_TD_4974_output);
    gettimeofday(&tv_r_Project_4_118_e, 0);

    struct timeval tv_r_JOIN_INNER_4_629_s, tv_r_JOIN_INNER_4_629_e;
    gettimeofday(&tv_r_JOIN_INNER_4_629_s, 0);
    SW_JOIN_INNER_TD_4202(tbl_JOIN_INNER_TD_522_output, tbl_Aggregate_TD_6304_output, tbl_JOIN_INNER_TD_4202_output);
    gettimeofday(&tv_r_JOIN_INNER_4_629_e, 0);

    struct timeval tv_r_Filter_3_306_s, tv_r_Filter_3_306_e;
    gettimeofday(&tv_r_Filter_3_306_s, 0);
    SW_Filter_TD_3771(tbl_SerializeFromObject_TD_4355_input, tbl_Filter_TD_3771_output);
    gettimeofday(&tv_r_Filter_3_306_e, 0);

    struct timeval tv_r_Project_3_600_s, tv_r_Project_3_600_e;
    gettimeofday(&tv_r_Project_3_600_s, 0);
    SW_Project_TD_3826(tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute, tbl_Project_TD_3826_output);
    gettimeofday(&tv_r_Project_3_600_e, 0);

    struct timeval tv_r_JOIN_INNER_3_810_s, tv_r_JOIN_INNER_3_810_e;
    gettimeofday(&tv_r_JOIN_INNER_3_810_s, 0);
    SW_JOIN_INNER_TD_3641(tbl_JOIN_INNER_TD_4202_output, tbl_Project_TD_4974_output, tbl_JOIN_INNER_TD_3641_output);
    gettimeofday(&tv_r_JOIN_INNER_3_810_e, 0);

    struct timeval tv_r_Project_2_867_s, tv_r_Project_2_867_e;
    gettimeofday(&tv_r_Project_2_867_s, 0);
    SW_Project_TD_2528(tbl_Filter_TD_3771_output, tbl_Project_TD_2528_output);
    gettimeofday(&tv_r_Project_2_867_e, 0);

    struct timeval tv_r_JOIN_INNER_2_60_s, tv_r_JOIN_INNER_2_60_e;
    gettimeofday(&tv_r_JOIN_INNER_2_60_s, 0);
    SW_JOIN_INNER_TD_2536(tbl_JOIN_INNER_TD_3641_output, tbl_Project_TD_3826_output, tbl_JOIN_INNER_TD_2536_output);
    gettimeofday(&tv_r_JOIN_INNER_2_60_e, 0);

    struct timeval tv_r_JOIN_INNER_1_613_s, tv_r_JOIN_INNER_1_613_e;
    gettimeofday(&tv_r_JOIN_INNER_1_613_s, 0);
    SW_JOIN_INNER_TD_1327(tbl_JOIN_INNER_TD_2536_output, tbl_Project_TD_2528_output, tbl_JOIN_INNER_TD_1327_output);
    gettimeofday(&tv_r_JOIN_INNER_1_613_e, 0);

    struct timeval tv_r_Sort_0_317_s, tv_r_Sort_0_317_e;
    gettimeofday(&tv_r_Sort_0_317_s, 0);
    SW_Sort_TD_0458(tbl_JOIN_INNER_TD_1327_output, tbl_SerializeFromObject_TD_8634_input, tbl_SerializeFromObject_TD_6406_input, tbl_SerializeFromObject_TD_5822_input, tbl_Sort_TD_0458_output);
    gettimeofday(&tv_r_Sort_0_317_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_735_s, &tv_r_Project_10_735_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1294_input: " << tbl_SerializeFromObject_TD_1294_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_172_s, &tv_r_Project_10_172_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12480_input: " << tbl_SerializeFromObject_TD_12480_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_104_s, &tv_r_Filter_9_104_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10853_input: " << tbl_SerializeFromObject_TD_10853_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_9: " << tvdiff(&tv_r_Project_9_790_s, &tv_r_Project_9_790_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11949_input: " << tbl_SerializeFromObject_TD_11949_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_191_s, &tv_r_JOIN_INNER_9_191_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10234_output: " << tbl_Project_TD_10234_output.getNumRow() << " " << "tbl_Project_TD_10913_output: " << tbl_Project_TD_10913_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_287_s, &tv_r_Project_8_287_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9144_output: " << tbl_Filter_TD_9144_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_989_s, &tv_r_JOIN_INNER_8_989_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9685_output: " << tbl_JOIN_INNER_TD_9685_output.getNumRow() << " " << "tbl_Project_TD_9300_output: " << tbl_Project_TD_9300_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_737_s, &tv_r_Filter_7_737_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8634_input: " << tbl_SerializeFromObject_TD_8634_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_678_s, &tv_r_JOIN_INNER_7_678_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8366_output: " << tbl_JOIN_INNER_TD_8366_output.getNumRow() << " " << "tbl_Project_TD_8624_output: " << tbl_Project_TD_8624_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_643_s, &tv_r_Project_6_643_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8423_input: " << tbl_SerializeFromObject_TD_8423_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_761_s, &tv_r_Project_6_761_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_747_output: " << tbl_Filter_TD_747_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_530_s, &tv_r_Aggregate_6_530_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7488_output: " << tbl_JOIN_INNER_TD_7488_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_279_s, &tv_r_JOIN_INNER_5_279_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6732_output: " << tbl_Project_TD_6732_output.getNumRow() << " " << "tbl_Project_TD_6765_output: " << tbl_Project_TD_6765_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_118_s, &tv_r_Project_4_118_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_629_s, &tv_r_JOIN_INNER_4_629_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_522_output: " << tbl_JOIN_INNER_TD_522_output.getNumRow() << " " << "tbl_Aggregate_TD_6304_output: " << tbl_Aggregate_TD_6304_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_306_s, &tv_r_Filter_3_306_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4355_input: " << tbl_SerializeFromObject_TD_4355_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_600_s, &tv_r_Project_3_600_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_810_s, &tv_r_JOIN_INNER_3_810_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4202_output: " << tbl_JOIN_INNER_TD_4202_output.getNumRow() << " " << "tbl_Project_TD_4974_output: " << tbl_Project_TD_4974_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_867_s, &tv_r_Project_2_867_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3771_output: " << tbl_Filter_TD_3771_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_60_s, &tv_r_JOIN_INNER_2_60_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3641_output: " << tbl_JOIN_INNER_TD_3641_output.getNumRow() << " " << "tbl_Project_TD_3826_output: " << tbl_Project_TD_3826_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_613_s, &tv_r_JOIN_INNER_1_613_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2536_output: " << tbl_JOIN_INNER_TD_2536_output.getNumRow() << " " << "tbl_Project_TD_2528_output: " << tbl_Project_TD_2528_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_317_s, &tv_r_Sort_0_317_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1327_output: " << tbl_JOIN_INNER_TD_1327_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.6424046 * 1000 << "ms" << std::endl; 
    return 0; 
}
