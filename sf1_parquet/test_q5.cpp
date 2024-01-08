// number of overlays (w/o fusion): 8 
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
    Table tbl_Sort_TD_0511_output("tbl_Sort_TD_0511_output", 6100000, 2, "");
    tbl_Sort_TD_0511_output.allocateHost();
    Table tbl_Aggregate_TD_1764_output("tbl_Aggregate_TD_1764_output", 6100000, 2, "");
    tbl_Aggregate_TD_1764_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2699_output("tbl_JOIN_INNER_TD_2699_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_2699_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3205_output("tbl_JOIN_INNER_TD_3205_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3205_output.allocateHost();
    Table tbl_Project_TD_3699_output("tbl_Project_TD_3699_output", -1, 1, "");
    tbl_Project_TD_3699_output.allocateHost();
    Table tbl_Project_TD_3699_emptyBufferB("tbl_Project_TD_3699_emptyBufferB", 1, 8, "");
    tbl_Project_TD_3699_emptyBufferB.allocateHost();
    Table tbl_JOIN_INNER_TD_4944_output("tbl_JOIN_INNER_TD_4944_output", 37000, 3, "");
    tbl_JOIN_INNER_TD_4944_output.allocateHost();
    Table tbl_Project_TD_4615_output("tbl_Project_TD_4615_output", 6100000, 3, "");
    tbl_Project_TD_4615_output.allocateHost();
    Table tbl_Filter_TD_4526_output("tbl_Filter_TD_4526_output", 6100000, 1, "");
    tbl_Filter_TD_4526_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5446_output("tbl_JOIN_INNER_TD_5446_output", 909000, 4, "");
    tbl_JOIN_INNER_TD_5446_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7459_input;
    tbl_SerializeFromObject_TD_7459_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7459_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7459_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7459_input.allocateHost();
    tbl_SerializeFromObject_TD_7459_input.loadHost();
    Table tbl_SerializeFromObject_TD_6680_input;
    tbl_SerializeFromObject_TD_6680_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_6680_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6680_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6680_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_6680_input.allocateHost();
    tbl_SerializeFromObject_TD_6680_input.loadHost();
    Table tbl_SerializeFromObject_TD_5564_input;
    tbl_SerializeFromObject_TD_5564_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5564_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_5564_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_5564_input.allocateHost();
    tbl_SerializeFromObject_TD_5564_input.loadHost();
    Table tbl_JOIN_INNER_TD_6959_output("tbl_JOIN_INNER_TD_6959_output", 227000, 2, "");
    tbl_JOIN_INNER_TD_6959_output.allocateHost();
    Table tbl_SerializeFromObject_TD_862_input;
    tbl_SerializeFromObject_TD_862_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_862_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_862_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_862_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_862_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_862_input.allocateHost();
    tbl_SerializeFromObject_TD_862_input.loadHost();
    Table tbl_SerializeFromObject_TD_9103_input;
    tbl_SerializeFromObject_TD_9103_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9103_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_9103_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_9103_input.allocateHost();
    tbl_SerializeFromObject_TD_9103_input.loadHost();
    Table tbl_Filter_TD_8441_output("tbl_Filter_TD_8441_output", 6100000, 2, "");
    tbl_Filter_TD_8441_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9762_input;
    tbl_SerializeFromObject_TD_9762_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_9762_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_9762_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_9762_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_9762_input.allocateHost();
    tbl_SerializeFromObject_TD_9762_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_3699_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3699_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4944_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4526_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5446_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_7459_input.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6959_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_862_input.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_9103_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8441_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_3699_cmds;
    cfg_Project_TD_3699_cmds.allocateHost();
    get_cfg_dat_Project_TD_3699_gqe_join (cfg_Project_TD_3699_cmds.cmd);
    cfg_Project_TD_3699_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4944_cmds;
    cfg_JOIN_INNER_TD_4944_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4944_gqe_join (cfg_JOIN_INNER_TD_4944_cmds.cmd);
    cfg_JOIN_INNER_TD_4944_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5446_cmds;
    cfg_JOIN_INNER_TD_5446_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5446_gqe_join (cfg_JOIN_INNER_TD_5446_cmds.cmd);
    cfg_JOIN_INNER_TD_5446_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6959_cmds;
    cfg_JOIN_INNER_TD_6959_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6959_gqe_join (cfg_JOIN_INNER_TD_6959_cmds.cmd);
    cfg_JOIN_INNER_TD_6959_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_3699;
    krnl_Project_TD_3699 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_3699.setup(tbl_Filter_TD_4526_output, tbl_Project_TD_3699_emptyBufferB, tbl_Project_TD_3699_output, cfg_Project_TD_3699_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4944;
    krnl_JOIN_INNER_TD_4944 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4944.setup(tbl_SerializeFromObject_TD_7459_input, tbl_JOIN_INNER_TD_5446_output, tbl_JOIN_INNER_TD_4944_output, cfg_JOIN_INNER_TD_4944_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5446;
    krnl_JOIN_INNER_TD_5446 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5446.setup(tbl_JOIN_INNER_TD_6959_output, tbl_SerializeFromObject_TD_862_input, tbl_JOIN_INNER_TD_5446_output, cfg_JOIN_INNER_TD_5446_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6959;
    krnl_JOIN_INNER_TD_6959 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6959.setup(tbl_SerializeFromObject_TD_9103_input, tbl_Filter_TD_8441_output, tbl_JOIN_INNER_TD_6959_output, cfg_JOIN_INNER_TD_6959_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_3699;
    trans_Project_TD_3699.setq(q_h);
    trans_Project_TD_3699.add(&(cfg_Project_TD_3699_cmds));
    transEngine trans_Project_TD_3699_out;
    trans_Project_TD_3699_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4944;
    trans_JOIN_INNER_TD_4944.setq(q_h);
    trans_JOIN_INNER_TD_4944.add(&(cfg_JOIN_INNER_TD_4944_cmds));
    trans_JOIN_INNER_TD_4944.add(&(tbl_SerializeFromObject_TD_7459_input));
    transEngine trans_JOIN_INNER_TD_4944_out;
    trans_JOIN_INNER_TD_4944_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5446;
    trans_JOIN_INNER_TD_5446.setq(q_h);
    trans_JOIN_INNER_TD_5446.add(&(cfg_JOIN_INNER_TD_5446_cmds));
    trans_JOIN_INNER_TD_5446.add(&(tbl_SerializeFromObject_TD_862_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6959;
    trans_JOIN_INNER_TD_6959.setq(q_h);
    trans_JOIN_INNER_TD_6959.add(&(cfg_JOIN_INNER_TD_6959_cmds));
    trans_JOIN_INNER_TD_6959.add(&(tbl_SerializeFromObject_TD_9103_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_3699;
    std::vector<cl::Event> events_d2h_rd_Project_TD_3699;
    std::vector<cl::Event> events_Project_TD_3699;
    events_h2d_wr_Project_TD_3699.resize(1);
    events_d2h_rd_Project_TD_3699.resize(1);
    events_Project_TD_3699.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_3699;
    std::vector<cl::Event> prev_events_grp_Project_TD_3699;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4944;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4944;
    std::vector<cl::Event> events_JOIN_INNER_TD_4944;
    events_h2d_wr_JOIN_INNER_TD_4944.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4944.resize(1);
    events_JOIN_INNER_TD_4944.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4944;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4944;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5446;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5446;
    std::vector<cl::Event> events_JOIN_INNER_TD_5446;
    events_h2d_wr_JOIN_INNER_TD_5446.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5446.resize(1);
    events_JOIN_INNER_TD_5446.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5446;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5446;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6959;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6959;
    std::vector<cl::Event> events_JOIN_INNER_TD_6959;
    events_h2d_wr_JOIN_INNER_TD_6959.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6959.resize(1);
    events_JOIN_INNER_TD_6959.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6959;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6959;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_517_s, tv_r_Filter_8_517_e;
    gettimeofday(&tv_r_Filter_8_517_s, 0);
    SW_Filter_TD_8441(tbl_SerializeFromObject_TD_9762_input, tbl_Filter_TD_8441_output);
    gettimeofday(&tv_r_Filter_8_517_e, 0);

    struct timeval tv_r_JOIN_INNER_6_930_s, tv_r_JOIN_INNER_6_930_e;
    gettimeofday(&tv_r_JOIN_INNER_6_930_s, 0);
    trans_JOIN_INNER_TD_6959.add(&(tbl_Filter_TD_8441_output));
    trans_JOIN_INNER_TD_6959.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6959), &(events_h2d_wr_JOIN_INNER_TD_6959[0]));
    events_grp_JOIN_INNER_TD_6959.push_back(events_h2d_wr_JOIN_INNER_TD_6959[0]);
    krnl_JOIN_INNER_TD_6959.run(0, &(events_grp_JOIN_INNER_TD_6959), &(events_JOIN_INNER_TD_6959[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_930_e, 0);

    struct timeval tv_r_JOIN_INNER_5_701_s, tv_r_JOIN_INNER_5_701_e;
    gettimeofday(&tv_r_JOIN_INNER_5_701_s, 0);
    prev_events_grp_JOIN_INNER_TD_5446.push_back(events_h2d_wr_JOIN_INNER_TD_6959[0]);
    trans_JOIN_INNER_TD_5446.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5446), &(events_h2d_wr_JOIN_INNER_TD_5446[0]));
    events_grp_JOIN_INNER_TD_5446.push_back(events_h2d_wr_JOIN_INNER_TD_5446[0]);
    events_grp_JOIN_INNER_TD_5446.push_back(events_JOIN_INNER_TD_6959[0]);
    krnl_JOIN_INNER_TD_5446.run(0, &(events_grp_JOIN_INNER_TD_5446), &(events_JOIN_INNER_TD_5446[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_701_e, 0);

    struct timeval tv_r_Filter_4_338_s, tv_r_Filter_4_338_e;
    gettimeofday(&tv_r_Filter_4_338_s, 0);
    SW_Filter_TD_4526(tbl_SerializeFromObject_TD_5564_input, tbl_Filter_TD_4526_output);
    gettimeofday(&tv_r_Filter_4_338_e, 0);

    struct timeval tv_r_Project_4_854_s, tv_r_Project_4_854_e;
    gettimeofday(&tv_r_Project_4_854_s, 0);
    SW_Project_TD_4615(tbl_SerializeFromObject_TD_6680_input, tbl_Project_TD_4615_output);
    gettimeofday(&tv_r_Project_4_854_e, 0);

    struct timeval tv_r_JOIN_INNER_4_305_s, tv_r_JOIN_INNER_4_305_e;
    gettimeofday(&tv_r_JOIN_INNER_4_305_s, 0);
    prev_events_grp_JOIN_INNER_TD_4944.push_back(events_h2d_wr_JOIN_INNER_TD_5446[0]);
    trans_JOIN_INNER_TD_4944.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4944), &(events_h2d_wr_JOIN_INNER_TD_4944[0]));
    events_grp_JOIN_INNER_TD_4944.push_back(events_h2d_wr_JOIN_INNER_TD_4944[0]);
    events_grp_JOIN_INNER_TD_4944.push_back(events_JOIN_INNER_TD_5446[0]);
    krnl_JOIN_INNER_TD_4944.run(0, &(events_grp_JOIN_INNER_TD_4944), &(events_JOIN_INNER_TD_4944[0]));
    
    trans_JOIN_INNER_TD_4944_out.add(&(tbl_JOIN_INNER_TD_4944_output));
    trans_JOIN_INNER_TD_4944_out.dev2host(0, &(events_JOIN_INNER_TD_4944), &(events_d2h_rd_JOIN_INNER_TD_4944[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_305_e, 0);

    struct timeval tv_r_Project_3_917_s, tv_r_Project_3_917_e;
    gettimeofday(&tv_r_Project_3_917_s, 0);
    trans_Project_TD_3699.add(&(tbl_Filter_TD_4526_output));
    trans_Project_TD_3699.host2dev(0, &(prev_events_grp_Project_TD_3699), &(events_h2d_wr_Project_TD_3699[0]));
    events_grp_Project_TD_3699.push_back(events_h2d_wr_Project_TD_3699[0]);
    krnl_Project_TD_3699.run(0, &(events_grp_Project_TD_3699), &(events_Project_TD_3699[0]));
    
    trans_Project_TD_3699_out.add(&(tbl_Project_TD_3699_output));
    trans_Project_TD_3699_out.dev2host(0, &(events_Project_TD_3699), &(events_d2h_rd_Project_TD_3699[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_3_917_e, 0);

    struct timeval tv_r_JOIN_INNER_3_136_s, tv_r_JOIN_INNER_3_136_e;
    gettimeofday(&tv_r_JOIN_INNER_3_136_s, 0);
    SW_JOIN_INNER_TD_3205(tbl_JOIN_INNER_TD_4944_output, tbl_Project_TD_4615_output, tbl_JOIN_INNER_TD_3205_output);
    gettimeofday(&tv_r_JOIN_INNER_3_136_e, 0);

    struct timeval tv_r_JOIN_INNER_2_690_s, tv_r_JOIN_INNER_2_690_e;
    gettimeofday(&tv_r_JOIN_INNER_2_690_s, 0);
    SW_JOIN_INNER_TD_2699(tbl_JOIN_INNER_TD_3205_output, tbl_Project_TD_3699_output, tbl_JOIN_INNER_TD_2699_output);
    gettimeofday(&tv_r_JOIN_INNER_2_690_e, 0);

    struct timeval tv_r_Aggregate_1_937_s, tv_r_Aggregate_1_937_e;
    gettimeofday(&tv_r_Aggregate_1_937_s, 0);
    SW_Aggregate_TD_1764(tbl_JOIN_INNER_TD_2699_output, tbl_Aggregate_TD_1764_output);
    gettimeofday(&tv_r_Aggregate_1_937_e, 0);

    struct timeval tv_r_Sort_0_727_s, tv_r_Sort_0_727_e;
    gettimeofday(&tv_r_Sort_0_727_s, 0);
    SW_Sort_TD_0511(tbl_Aggregate_TD_1764_output, tbl_Sort_TD_0511_output);
    gettimeofday(&tv_r_Sort_0_727_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_517_s, &tv_r_Filter_8_517_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9762_input: " << tbl_SerializeFromObject_TD_9762_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_930_s, &tv_r_JOIN_INNER_6_930_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9103_input: " << tbl_SerializeFromObject_TD_9103_input.getNumRow() << " " << "tbl_Filter_TD_8441_output: " << tbl_Filter_TD_8441_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_701_s, &tv_r_JOIN_INNER_5_701_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6959_output: " << tbl_JOIN_INNER_TD_6959_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_862_input: " << tbl_SerializeFromObject_TD_862_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_338_s, &tv_r_Filter_4_338_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5564_input: " << tbl_SerializeFromObject_TD_5564_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_854_s, &tv_r_Project_4_854_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6680_input: " << tbl_SerializeFromObject_TD_6680_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_305_s, &tv_r_JOIN_INNER_4_305_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5446_output: " << tbl_JOIN_INNER_TD_5446_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_7459_input: " << tbl_SerializeFromObject_TD_7459_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_917_s, &tv_r_Project_3_917_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4526_output: " << tbl_Filter_TD_4526_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_136_s, &tv_r_JOIN_INNER_3_136_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4944_output: " << tbl_JOIN_INNER_TD_4944_output.getNumRow() << " " << "tbl_Project_TD_4615_output: " << tbl_Project_TD_4615_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_690_s, &tv_r_JOIN_INNER_2_690_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3205_output: " << tbl_JOIN_INNER_TD_3205_output.getNumRow() << " " << "tbl_Project_TD_3699_output: " << tbl_Project_TD_3699_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_937_s, &tv_r_Aggregate_1_937_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2699_output: " << tbl_JOIN_INNER_TD_2699_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_727_s, &tv_r_Sort_0_727_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1764_output: " << tbl_Aggregate_TD_1764_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 11.834864 * 1000 << "ms" << std::endl; 
    return 0; 
}
