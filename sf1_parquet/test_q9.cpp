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
    Table tbl_Sort_TD_0108_output("tbl_Sort_TD_0108_output", 6100000, 3, "");
    tbl_Sort_TD_0108_output.allocateHost();
    Table tbl_Aggregate_TD_1744_output("tbl_Aggregate_TD_1744_output", 6100000, 3, "");
    tbl_Aggregate_TD_1744_output.allocateHost();
    Table tbl_Project_TD_2185_output("tbl_Project_TD_2185_output", 6100000, 3, "");
    tbl_Project_TD_2185_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3711_output("tbl_JOIN_INNER_TD_3711_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_3711_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4230_output("tbl_JOIN_INNER_TD_4230_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_4230_output.allocateHost();
    Table tbl_Project_TD_492_output("tbl_Project_TD_492_output", 6100000, 2, "");
    tbl_Project_TD_492_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5431_output("tbl_JOIN_INNER_TD_5431_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_5431_output.allocateHost();
    Table tbl_SerializeFromObject_TD_71_input;
    tbl_SerializeFromObject_TD_71_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_71_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_71_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_71_input.allocateHost();
    tbl_SerializeFromObject_TD_71_input.loadHost();
    Table tbl_SerializeFromObject_TD_6391_input;
    tbl_SerializeFromObject_TD_6391_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6391_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6391_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6391_input.allocateHost();
    tbl_SerializeFromObject_TD_6391_input.loadHost();
    Table tbl_JOIN_INNER_TD_6460_output("tbl_JOIN_INNER_TD_6460_output", 319287, 7, "");
    tbl_JOIN_INNER_TD_6460_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8510_input;
    tbl_SerializeFromObject_TD_8510_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8510_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8510_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8510_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8510_input.allocateHost();
    tbl_SerializeFromObject_TD_8510_input.loadHost();
    Table tbl_JOIN_INNER_TD_7164_output("tbl_JOIN_INNER_TD_7164_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_7164_output.allocateHost();
    Table tbl_SerializeFromObject_TD_992_input;
    tbl_SerializeFromObject_TD_992_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_992_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_992_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_992_input.allocateHost();
    tbl_SerializeFromObject_TD_992_input.loadHost();
    Table tbl_Filter_TD_9532_output("tbl_Filter_TD_9532_output", 6100000, 1, "");
    tbl_Filter_TD_9532_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10508_input;
    tbl_SerializeFromObject_TD_10508_input = Table("lineitem", lineitem_n, 6, in_dir);
    tbl_SerializeFromObject_TD_10508_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10508_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_10508_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10508_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_10508_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_10508_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_10508_input.allocateHost();
    tbl_SerializeFromObject_TD_10508_input.loadHost();
    Table tbl_SerializeFromObject_TD_10677_input;
    tbl_SerializeFromObject_TD_10677_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10677_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_10677_input.addCol("p_name", TPCH_READ_P_NAME_LEN+1);
    tbl_SerializeFromObject_TD_10677_input.allocateHost();
    tbl_SerializeFromObject_TD_10677_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4230_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5431_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_71_input.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6460_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_8510_input.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7164_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_992_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9532_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_10508_input.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4230_cmds;
    cfg_JOIN_INNER_TD_4230_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4230_gqe_join (cfg_JOIN_INNER_TD_4230_cmds.cmd);
    cfg_JOIN_INNER_TD_4230_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5431_cmds;
    cfg_JOIN_INNER_TD_5431_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5431_gqe_join (cfg_JOIN_INNER_TD_5431_cmds.cmd);
    cfg_JOIN_INNER_TD_5431_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6460_cmds;
    cfg_JOIN_INNER_TD_6460_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6460_gqe_join (cfg_JOIN_INNER_TD_6460_cmds.cmd);
    cfg_JOIN_INNER_TD_6460_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7164_cmds;
    cfg_JOIN_INNER_TD_7164_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7164_gqe_join (cfg_JOIN_INNER_TD_7164_cmds.cmd);
    cfg_JOIN_INNER_TD_7164_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4230;
    krnl_JOIN_INNER_TD_4230 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4230.setup(tbl_JOIN_INNER_TD_5431_output, tbl_SerializeFromObject_TD_71_input, tbl_JOIN_INNER_TD_4230_output, cfg_JOIN_INNER_TD_4230_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5431;
    krnl_JOIN_INNER_TD_5431 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5431.setup(tbl_JOIN_INNER_TD_6460_output, tbl_SerializeFromObject_TD_8510_input, tbl_JOIN_INNER_TD_5431_output, cfg_JOIN_INNER_TD_5431_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6460;
    krnl_JOIN_INNER_TD_6460 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6460.setup(tbl_SerializeFromObject_TD_992_input, tbl_JOIN_INNER_TD_7164_output, tbl_JOIN_INNER_TD_6460_output, cfg_JOIN_INNER_TD_6460_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7164;
    krnl_JOIN_INNER_TD_7164 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7164.setup(tbl_Filter_TD_9532_output, tbl_SerializeFromObject_TD_10508_input, tbl_JOIN_INNER_TD_7164_output, cfg_JOIN_INNER_TD_7164_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4230;
    trans_JOIN_INNER_TD_4230.setq(q_h);
    trans_JOIN_INNER_TD_4230.add(&(cfg_JOIN_INNER_TD_4230_cmds));
    trans_JOIN_INNER_TD_4230.add(&(tbl_SerializeFromObject_TD_71_input));
    transEngine trans_JOIN_INNER_TD_4230_out;
    trans_JOIN_INNER_TD_4230_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5431;
    trans_JOIN_INNER_TD_5431.setq(q_h);
    trans_JOIN_INNER_TD_5431.add(&(cfg_JOIN_INNER_TD_5431_cmds));
    trans_JOIN_INNER_TD_5431.add(&(tbl_SerializeFromObject_TD_8510_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6460;
    trans_JOIN_INNER_TD_6460.setq(q_h);
    trans_JOIN_INNER_TD_6460.add(&(cfg_JOIN_INNER_TD_6460_cmds));
    trans_JOIN_INNER_TD_6460.add(&(tbl_SerializeFromObject_TD_992_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7164;
    trans_JOIN_INNER_TD_7164.setq(q_h);
    trans_JOIN_INNER_TD_7164.add(&(cfg_JOIN_INNER_TD_7164_cmds));
    trans_JOIN_INNER_TD_7164.add(&(tbl_SerializeFromObject_TD_10508_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4230;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4230;
    std::vector<cl::Event> events_JOIN_INNER_TD_4230;
    events_h2d_wr_JOIN_INNER_TD_4230.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4230.resize(1);
    events_JOIN_INNER_TD_4230.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4230;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4230;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5431;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5431;
    std::vector<cl::Event> events_JOIN_INNER_TD_5431;
    events_h2d_wr_JOIN_INNER_TD_5431.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5431.resize(1);
    events_JOIN_INNER_TD_5431.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5431;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5431;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6460;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6460;
    std::vector<cl::Event> events_JOIN_INNER_TD_6460;
    events_h2d_wr_JOIN_INNER_TD_6460.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6460.resize(1);
    events_JOIN_INNER_TD_6460.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6460;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6460;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7164;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7164;
    std::vector<cl::Event> events_JOIN_INNER_TD_7164;
    events_h2d_wr_JOIN_INNER_TD_7164.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7164.resize(1);
    events_JOIN_INNER_TD_7164.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7164;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7164;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_141_s, tv_r_Filter_9_141_e;
    gettimeofday(&tv_r_Filter_9_141_s, 0);
    SW_Filter_TD_9532(tbl_SerializeFromObject_TD_10677_input, tbl_Filter_TD_9532_output);
    gettimeofday(&tv_r_Filter_9_141_e, 0);

    struct timeval tv_r_JOIN_INNER_7_179_s, tv_r_JOIN_INNER_7_179_e;
    gettimeofday(&tv_r_JOIN_INNER_7_179_s, 0);
    trans_JOIN_INNER_TD_7164.add(&(tbl_Filter_TD_9532_output));
    trans_JOIN_INNER_TD_7164.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7164), &(events_h2d_wr_JOIN_INNER_TD_7164[0]));
    events_grp_JOIN_INNER_TD_7164.push_back(events_h2d_wr_JOIN_INNER_TD_7164[0]);
    krnl_JOIN_INNER_TD_7164.run(0, &(events_grp_JOIN_INNER_TD_7164), &(events_JOIN_INNER_TD_7164[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_179_e, 0);

    struct timeval tv_r_JOIN_INNER_6_251_s, tv_r_JOIN_INNER_6_251_e;
    gettimeofday(&tv_r_JOIN_INNER_6_251_s, 0);
    prev_events_grp_JOIN_INNER_TD_6460.push_back(events_h2d_wr_JOIN_INNER_TD_7164[0]);
    trans_JOIN_INNER_TD_6460.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6460), &(events_h2d_wr_JOIN_INNER_TD_6460[0]));
    events_grp_JOIN_INNER_TD_6460.push_back(events_h2d_wr_JOIN_INNER_TD_6460[0]);
    events_grp_JOIN_INNER_TD_6460.push_back(events_JOIN_INNER_TD_7164[0]);
    krnl_JOIN_INNER_TD_6460.run(0, &(events_grp_JOIN_INNER_TD_6460), &(events_JOIN_INNER_TD_6460[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_251_e, 0);

    struct timeval tv_r_JOIN_INNER_5_558_s, tv_r_JOIN_INNER_5_558_e;
    gettimeofday(&tv_r_JOIN_INNER_5_558_s, 0);
    prev_events_grp_JOIN_INNER_TD_5431.push_back(events_h2d_wr_JOIN_INNER_TD_6460[0]);
    trans_JOIN_INNER_TD_5431.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5431), &(events_h2d_wr_JOIN_INNER_TD_5431[0]));
    events_grp_JOIN_INNER_TD_5431.push_back(events_h2d_wr_JOIN_INNER_TD_5431[0]);
    events_grp_JOIN_INNER_TD_5431.push_back(events_JOIN_INNER_TD_6460[0]);
    krnl_JOIN_INNER_TD_5431.run(0, &(events_grp_JOIN_INNER_TD_5431), &(events_JOIN_INNER_TD_5431[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_558_e, 0);

    struct timeval tv_r_Project_4_656_s, tv_r_Project_4_656_e;
    gettimeofday(&tv_r_Project_4_656_s, 0);
    SW_Project_TD_492(tbl_SerializeFromObject_TD_6391_input, tbl_Project_TD_492_output);
    gettimeofday(&tv_r_Project_4_656_e, 0);

    struct timeval tv_r_JOIN_INNER_4_300_s, tv_r_JOIN_INNER_4_300_e;
    gettimeofday(&tv_r_JOIN_INNER_4_300_s, 0);
    prev_events_grp_JOIN_INNER_TD_4230.push_back(events_h2d_wr_JOIN_INNER_TD_5431[0]);
    trans_JOIN_INNER_TD_4230.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4230), &(events_h2d_wr_JOIN_INNER_TD_4230[0]));
    events_grp_JOIN_INNER_TD_4230.push_back(events_h2d_wr_JOIN_INNER_TD_4230[0]);
    events_grp_JOIN_INNER_TD_4230.push_back(events_JOIN_INNER_TD_5431[0]);
    krnl_JOIN_INNER_TD_4230.run(0, &(events_grp_JOIN_INNER_TD_4230), &(events_JOIN_INNER_TD_4230[0]));
    
    trans_JOIN_INNER_TD_4230_out.add(&(tbl_JOIN_INNER_TD_4230_output));
    trans_JOIN_INNER_TD_4230_out.dev2host(0, &(events_JOIN_INNER_TD_4230), &(events_d2h_rd_JOIN_INNER_TD_4230[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_300_e, 0);

    struct timeval tv_r_JOIN_INNER_3_815_s, tv_r_JOIN_INNER_3_815_e;
    gettimeofday(&tv_r_JOIN_INNER_3_815_s, 0);
    SW_JOIN_INNER_TD_3711(tbl_JOIN_INNER_TD_4230_output, tbl_Project_TD_492_output, tbl_JOIN_INNER_TD_3711_output);
    gettimeofday(&tv_r_JOIN_INNER_3_815_e, 0);

    struct timeval tv_r_Project_2_684_s, tv_r_Project_2_684_e;
    gettimeofday(&tv_r_Project_2_684_s, 0);
    SW_Project_TD_2185(tbl_JOIN_INNER_TD_3711_output, tbl_Project_TD_2185_output);
    gettimeofday(&tv_r_Project_2_684_e, 0);

    struct timeval tv_r_Aggregate_1_480_s, tv_r_Aggregate_1_480_e;
    gettimeofday(&tv_r_Aggregate_1_480_s, 0);
    SW_Aggregate_TD_1744(tbl_Project_TD_2185_output, tbl_Aggregate_TD_1744_output);
    gettimeofday(&tv_r_Aggregate_1_480_e, 0);

    struct timeval tv_r_Sort_0_486_s, tv_r_Sort_0_486_e;
    gettimeofday(&tv_r_Sort_0_486_s, 0);
    SW_Sort_TD_0108(tbl_Aggregate_TD_1744_output, tbl_Sort_TD_0108_output);
    gettimeofday(&tv_r_Sort_0_486_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_141_s, &tv_r_Filter_9_141_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10677_input: " << tbl_SerializeFromObject_TD_10677_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_179_s, &tv_r_JOIN_INNER_7_179_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9532_output: " << tbl_Filter_TD_9532_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_10508_input: " << tbl_SerializeFromObject_TD_10508_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_251_s, &tv_r_JOIN_INNER_6_251_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7164_output: " << tbl_JOIN_INNER_TD_7164_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_992_input: " << tbl_SerializeFromObject_TD_992_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_558_s, &tv_r_JOIN_INNER_5_558_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6460_output: " << tbl_JOIN_INNER_TD_6460_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_8510_input: " << tbl_SerializeFromObject_TD_8510_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_656_s, &tv_r_Project_4_656_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6391_input: " << tbl_SerializeFromObject_TD_6391_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_300_s, &tv_r_JOIN_INNER_4_300_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5431_output: " << tbl_JOIN_INNER_TD_5431_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_71_input: " << tbl_SerializeFromObject_TD_71_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_815_s, &tv_r_JOIN_INNER_3_815_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4230_output: " << tbl_JOIN_INNER_TD_4230_output.getNumRow() << " " << "tbl_Project_TD_492_output: " << tbl_Project_TD_492_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_684_s, &tv_r_Project_2_684_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3711_output: " << tbl_JOIN_INNER_TD_3711_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_480_s, &tv_r_Aggregate_1_480_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2185_output: " << tbl_Project_TD_2185_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_486_s, &tv_r_Sort_0_486_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1744_output: " << tbl_Aggregate_TD_1744_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 21.098513 * 1000 << "ms" << std::endl; 
    return 0; 
}
