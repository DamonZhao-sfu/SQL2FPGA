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
    Table tbl_Sort_TD_0998_output("tbl_Sort_TD_0998_output", 6100000, 3, "");
    tbl_Sort_TD_0998_output.allocateHost();
    Table tbl_Aggregate_TD_1944_output("tbl_Aggregate_TD_1944_output", 6100000, 3, "");
    tbl_Aggregate_TD_1944_output.allocateHost();
    Table tbl_Project_TD_2730_output("tbl_Project_TD_2730_output", 6100000, 3, "");
    tbl_Project_TD_2730_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3609_output("tbl_JOIN_INNER_TD_3609_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_3609_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4349_output("tbl_JOIN_INNER_TD_4349_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_4349_output.allocateHost();
    Table tbl_Project_TD_4577_output("tbl_Project_TD_4577_output", 6100000, 2, "");
    tbl_Project_TD_4577_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5184_output("tbl_JOIN_INNER_TD_5184_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_5184_output.allocateHost();
    Table tbl_Project_TD_5876_output("tbl_Project_TD_5876_output", 6100000, 2, "");
    tbl_Project_TD_5876_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6559_input;
    tbl_SerializeFromObject_TD_6559_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6559_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6559_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6559_input.allocateHost();
    tbl_SerializeFromObject_TD_6559_input.loadHost();
    Table tbl_JOIN_INNER_TD_6128_output("tbl_JOIN_INNER_TD_6128_output", 319287, 7, "");
    tbl_JOIN_INNER_TD_6128_output.allocateHost();
    Table tbl_Project_TD_6575_output("tbl_Project_TD_6575_output", 6100000, 3, "");
    tbl_Project_TD_6575_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7324_input;
    tbl_SerializeFromObject_TD_7324_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7324_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_7324_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_7324_input.allocateHost();
    tbl_SerializeFromObject_TD_7324_input.loadHost();
    Table tbl_JOIN_INNER_TD_7181_output("tbl_JOIN_INNER_TD_7181_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_7181_output.allocateHost();
    Table tbl_Project_TD_7178_output("tbl_Project_TD_7178_output", 6100000, 2, "");
    tbl_Project_TD_7178_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8277_input;
    tbl_SerializeFromObject_TD_8277_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8277_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8277_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8277_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8277_input.allocateHost();
    tbl_SerializeFromObject_TD_8277_input.loadHost();
    Table tbl_Project_TD_8596_output("tbl_Project_TD_8596_output", 6100000, 1, "");
    tbl_Project_TD_8596_output.allocateHost();
    Table tbl_Project_TD_8961_output("tbl_Project_TD_8961_output", 6100000, 6, "");
    tbl_Project_TD_8961_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9612_input;
    tbl_SerializeFromObject_TD_9612_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9612_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_9612_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_9612_input.allocateHost();
    tbl_SerializeFromObject_TD_9612_input.loadHost();
    Table tbl_Filter_TD_9121_output("tbl_Filter_TD_9121_output", 6100000, 1, "");
    tbl_Filter_TD_9121_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10223_input;
    tbl_SerializeFromObject_TD_10223_input = Table("lineitem", lineitem_n, 6, in_dir);
    tbl_SerializeFromObject_TD_10223_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10223_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_10223_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10223_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_10223_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_10223_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_10223_input.allocateHost();
    tbl_SerializeFromObject_TD_10223_input.loadHost();
    Table tbl_SerializeFromObject_TD_10954_input;
    tbl_SerializeFromObject_TD_10954_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10954_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_10954_input.addCol("p_name", TPCH_READ_P_NAME_LEN+1);
    tbl_SerializeFromObject_TD_10954_input.allocateHost();
    tbl_SerializeFromObject_TD_10954_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4349_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5184_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5876_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6128_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6575_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7181_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7178_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8596_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8961_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4349_cmds;
    cfg_JOIN_INNER_TD_4349_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4349_gqe_join (cfg_JOIN_INNER_TD_4349_cmds.cmd);
    cfg_JOIN_INNER_TD_4349_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5184_cmds;
    cfg_JOIN_INNER_TD_5184_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5184_gqe_join (cfg_JOIN_INNER_TD_5184_cmds.cmd);
    cfg_JOIN_INNER_TD_5184_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6128_cmds;
    cfg_JOIN_INNER_TD_6128_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6128_gqe_join (cfg_JOIN_INNER_TD_6128_cmds.cmd);
    cfg_JOIN_INNER_TD_6128_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7181_cmds;
    cfg_JOIN_INNER_TD_7181_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7181_gqe_join (cfg_JOIN_INNER_TD_7181_cmds.cmd);
    cfg_JOIN_INNER_TD_7181_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4349;
    krnl_JOIN_INNER_TD_4349 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4349.setup(tbl_JOIN_INNER_TD_5184_output, tbl_Project_TD_5876_output, tbl_JOIN_INNER_TD_4349_output, cfg_JOIN_INNER_TD_4349_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5184;
    krnl_JOIN_INNER_TD_5184 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5184.setup(tbl_JOIN_INNER_TD_6128_output, tbl_Project_TD_6575_output, tbl_JOIN_INNER_TD_5184_output, cfg_JOIN_INNER_TD_5184_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6128;
    krnl_JOIN_INNER_TD_6128 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6128.setup(tbl_Project_TD_7178_output, tbl_JOIN_INNER_TD_7181_output, tbl_JOIN_INNER_TD_6128_output, cfg_JOIN_INNER_TD_6128_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7181;
    krnl_JOIN_INNER_TD_7181 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7181.setup(tbl_Project_TD_8596_output, tbl_Project_TD_8961_output, tbl_JOIN_INNER_TD_7181_output, cfg_JOIN_INNER_TD_7181_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4349;
    trans_JOIN_INNER_TD_4349.setq(q_h);
    trans_JOIN_INNER_TD_4349.add(&(cfg_JOIN_INNER_TD_4349_cmds));
    transEngine trans_JOIN_INNER_TD_4349_out;
    trans_JOIN_INNER_TD_4349_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5184;
    trans_JOIN_INNER_TD_5184.setq(q_h);
    trans_JOIN_INNER_TD_5184.add(&(cfg_JOIN_INNER_TD_5184_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6128;
    trans_JOIN_INNER_TD_6128.setq(q_h);
    trans_JOIN_INNER_TD_6128.add(&(cfg_JOIN_INNER_TD_6128_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7181;
    trans_JOIN_INNER_TD_7181.setq(q_h);
    trans_JOIN_INNER_TD_7181.add(&(cfg_JOIN_INNER_TD_7181_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4349;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4349;
    std::vector<cl::Event> events_JOIN_INNER_TD_4349;
    events_h2d_wr_JOIN_INNER_TD_4349.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4349.resize(1);
    events_JOIN_INNER_TD_4349.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4349;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4349;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5184;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5184;
    std::vector<cl::Event> events_JOIN_INNER_TD_5184;
    events_h2d_wr_JOIN_INNER_TD_5184.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5184.resize(1);
    events_JOIN_INNER_TD_5184.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5184;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5184;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6128;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6128;
    std::vector<cl::Event> events_JOIN_INNER_TD_6128;
    events_h2d_wr_JOIN_INNER_TD_6128.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6128.resize(1);
    events_JOIN_INNER_TD_6128.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6128;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6128;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7181;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7181;
    std::vector<cl::Event> events_JOIN_INNER_TD_7181;
    events_h2d_wr_JOIN_INNER_TD_7181.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7181.resize(1);
    events_JOIN_INNER_TD_7181.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7181;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7181;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_627_s, tv_r_Filter_9_627_e;
    gettimeofday(&tv_r_Filter_9_627_s, 0);
    SW_Filter_TD_9121(tbl_SerializeFromObject_TD_10954_input, tbl_Filter_TD_9121_output);
    gettimeofday(&tv_r_Filter_9_627_e, 0);

    struct timeval tv_r_Project_8_410_s, tv_r_Project_8_410_e;
    gettimeofday(&tv_r_Project_8_410_s, 0);
    SW_Project_TD_8961(tbl_SerializeFromObject_TD_10223_input, tbl_Project_TD_8961_output);
    gettimeofday(&tv_r_Project_8_410_e, 0);

    struct timeval tv_r_Project_8_693_s, tv_r_Project_8_693_e;
    gettimeofday(&tv_r_Project_8_693_s, 0);
    SW_Project_TD_8596(tbl_Filter_TD_9121_output, tbl_Project_TD_8596_output);
    gettimeofday(&tv_r_Project_8_693_e, 0);

    struct timeval tv_r_Project_7_513_s, tv_r_Project_7_513_e;
    gettimeofday(&tv_r_Project_7_513_s, 0);
    SW_Project_TD_7178(tbl_SerializeFromObject_TD_9612_input, tbl_Project_TD_7178_output);
    gettimeofday(&tv_r_Project_7_513_e, 0);

    struct timeval tv_r_JOIN_INNER_7_279_s, tv_r_JOIN_INNER_7_279_e;
    gettimeofday(&tv_r_JOIN_INNER_7_279_s, 0);
    trans_JOIN_INNER_TD_7181.add(&(tbl_Project_TD_8596_output));
    trans_JOIN_INNER_TD_7181.add(&(tbl_Project_TD_8961_output));
    trans_JOIN_INNER_TD_7181.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7181), &(events_h2d_wr_JOIN_INNER_TD_7181[0]));
    events_grp_JOIN_INNER_TD_7181.push_back(events_h2d_wr_JOIN_INNER_TD_7181[0]);
    krnl_JOIN_INNER_TD_7181.run(0, &(events_grp_JOIN_INNER_TD_7181), &(events_JOIN_INNER_TD_7181[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_279_e, 0);

    struct timeval tv_r_Project_6_447_s, tv_r_Project_6_447_e;
    gettimeofday(&tv_r_Project_6_447_s, 0);
    SW_Project_TD_6575(tbl_SerializeFromObject_TD_8277_input, tbl_Project_TD_6575_output);
    gettimeofday(&tv_r_Project_6_447_e, 0);

    struct timeval tv_r_JOIN_INNER_6_990_s, tv_r_JOIN_INNER_6_990_e;
    gettimeofday(&tv_r_JOIN_INNER_6_990_s, 0);
    prev_events_grp_JOIN_INNER_TD_6128.push_back(events_h2d_wr_JOIN_INNER_TD_7181[0]);
    trans_JOIN_INNER_TD_6128.add(&(tbl_Project_TD_7178_output));
    trans_JOIN_INNER_TD_6128.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6128), &(events_h2d_wr_JOIN_INNER_TD_6128[0]));
    events_grp_JOIN_INNER_TD_6128.push_back(events_h2d_wr_JOIN_INNER_TD_6128[0]);
    events_grp_JOIN_INNER_TD_6128.push_back(events_JOIN_INNER_TD_7181[0]);
    krnl_JOIN_INNER_TD_6128.run(0, &(events_grp_JOIN_INNER_TD_6128), &(events_JOIN_INNER_TD_6128[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_990_e, 0);

    struct timeval tv_r_Project_5_186_s, tv_r_Project_5_186_e;
    gettimeofday(&tv_r_Project_5_186_s, 0);
    SW_Project_TD_5876(tbl_SerializeFromObject_TD_7324_input, tbl_Project_TD_5876_output);
    gettimeofday(&tv_r_Project_5_186_e, 0);

    struct timeval tv_r_JOIN_INNER_5_200_s, tv_r_JOIN_INNER_5_200_e;
    gettimeofday(&tv_r_JOIN_INNER_5_200_s, 0);
    prev_events_grp_JOIN_INNER_TD_5184.push_back(events_h2d_wr_JOIN_INNER_TD_6128[0]);
    trans_JOIN_INNER_TD_5184.add(&(tbl_Project_TD_6575_output));
    trans_JOIN_INNER_TD_5184.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5184), &(events_h2d_wr_JOIN_INNER_TD_5184[0]));
    events_grp_JOIN_INNER_TD_5184.push_back(events_h2d_wr_JOIN_INNER_TD_5184[0]);
    events_grp_JOIN_INNER_TD_5184.push_back(events_JOIN_INNER_TD_6128[0]);
    krnl_JOIN_INNER_TD_5184.run(0, &(events_grp_JOIN_INNER_TD_5184), &(events_JOIN_INNER_TD_5184[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_200_e, 0);

    struct timeval tv_r_Project_4_14_s, tv_r_Project_4_14_e;
    gettimeofday(&tv_r_Project_4_14_s, 0);
    SW_Project_TD_4577(tbl_SerializeFromObject_TD_6559_input, tbl_Project_TD_4577_output);
    gettimeofday(&tv_r_Project_4_14_e, 0);

    struct timeval tv_r_JOIN_INNER_4_844_s, tv_r_JOIN_INNER_4_844_e;
    gettimeofday(&tv_r_JOIN_INNER_4_844_s, 0);
    prev_events_grp_JOIN_INNER_TD_4349.push_back(events_h2d_wr_JOIN_INNER_TD_5184[0]);
    trans_JOIN_INNER_TD_4349.add(&(tbl_Project_TD_5876_output));
    trans_JOIN_INNER_TD_4349.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4349), &(events_h2d_wr_JOIN_INNER_TD_4349[0]));
    events_grp_JOIN_INNER_TD_4349.push_back(events_h2d_wr_JOIN_INNER_TD_4349[0]);
    events_grp_JOIN_INNER_TD_4349.push_back(events_JOIN_INNER_TD_5184[0]);
    krnl_JOIN_INNER_TD_4349.run(0, &(events_grp_JOIN_INNER_TD_4349), &(events_JOIN_INNER_TD_4349[0]));
    
    trans_JOIN_INNER_TD_4349_out.add(&(tbl_JOIN_INNER_TD_4349_output));
    trans_JOIN_INNER_TD_4349_out.dev2host(0, &(events_JOIN_INNER_TD_4349), &(events_d2h_rd_JOIN_INNER_TD_4349[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_844_e, 0);

    struct timeval tv_r_JOIN_INNER_3_388_s, tv_r_JOIN_INNER_3_388_e;
    gettimeofday(&tv_r_JOIN_INNER_3_388_s, 0);
    SW_JOIN_INNER_TD_3609(tbl_JOIN_INNER_TD_4349_output, tbl_Project_TD_4577_output, tbl_JOIN_INNER_TD_3609_output);
    gettimeofday(&tv_r_JOIN_INNER_3_388_e, 0);

    struct timeval tv_r_Project_2_841_s, tv_r_Project_2_841_e;
    gettimeofday(&tv_r_Project_2_841_s, 0);
    SW_Project_TD_2730(tbl_JOIN_INNER_TD_3609_output, tbl_Project_TD_2730_output);
    gettimeofday(&tv_r_Project_2_841_e, 0);

    struct timeval tv_r_Aggregate_1_928_s, tv_r_Aggregate_1_928_e;
    gettimeofday(&tv_r_Aggregate_1_928_s, 0);
    SW_Aggregate_TD_1944(tbl_Project_TD_2730_output, tbl_Aggregate_TD_1944_output);
    gettimeofday(&tv_r_Aggregate_1_928_e, 0);

    struct timeval tv_r_Sort_0_81_s, tv_r_Sort_0_81_e;
    gettimeofday(&tv_r_Sort_0_81_s, 0);
    SW_Sort_TD_0998(tbl_Aggregate_TD_1944_output, tbl_Sort_TD_0998_output);
    gettimeofday(&tv_r_Sort_0_81_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_627_s, &tv_r_Filter_9_627_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10954_input: " << tbl_SerializeFromObject_TD_10954_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_410_s, &tv_r_Project_8_410_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10223_input: " << tbl_SerializeFromObject_TD_10223_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_693_s, &tv_r_Project_8_693_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9121_output: " << tbl_Filter_TD_9121_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_513_s, &tv_r_Project_7_513_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9612_input: " << tbl_SerializeFromObject_TD_9612_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_279_s, &tv_r_JOIN_INNER_7_279_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8596_output: " << tbl_Project_TD_8596_output.getNumRow() << " " << "tbl_Project_TD_8961_output: " << tbl_Project_TD_8961_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_447_s, &tv_r_Project_6_447_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8277_input: " << tbl_SerializeFromObject_TD_8277_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_990_s, &tv_r_JOIN_INNER_6_990_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7181_output: " << tbl_JOIN_INNER_TD_7181_output.getNumRow() << " " << "tbl_Project_TD_7178_output: " << tbl_Project_TD_7178_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_186_s, &tv_r_Project_5_186_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7324_input: " << tbl_SerializeFromObject_TD_7324_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_200_s, &tv_r_JOIN_INNER_5_200_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6128_output: " << tbl_JOIN_INNER_TD_6128_output.getNumRow() << " " << "tbl_Project_TD_6575_output: " << tbl_Project_TD_6575_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_14_s, &tv_r_Project_4_14_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6559_input: " << tbl_SerializeFromObject_TD_6559_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_844_s, &tv_r_JOIN_INNER_4_844_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5184_output: " << tbl_JOIN_INNER_TD_5184_output.getNumRow() << " " << "tbl_Project_TD_5876_output: " << tbl_Project_TD_5876_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_388_s, &tv_r_JOIN_INNER_3_388_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4349_output: " << tbl_JOIN_INNER_TD_4349_output.getNumRow() << " " << "tbl_Project_TD_4577_output: " << tbl_Project_TD_4577_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_841_s, &tv_r_Project_2_841_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3609_output: " << tbl_JOIN_INNER_TD_3609_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_928_s, &tv_r_Aggregate_1_928_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2730_output: " << tbl_Project_TD_2730_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_81_s, &tv_r_Sort_0_81_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1944_output: " << tbl_Aggregate_TD_1944_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 17.897781 * 1000 << "ms" << std::endl; 
    return 0; 
}
