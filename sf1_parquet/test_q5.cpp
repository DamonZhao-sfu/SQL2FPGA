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
    Table tbl_Sort_TD_0318_output("tbl_Sort_TD_0318_output", 6100000, 2, "");
    tbl_Sort_TD_0318_output.allocateHost();
    Table tbl_Aggregate_TD_1820_output("tbl_Aggregate_TD_1820_output", 6100000, 2, "");
    tbl_Aggregate_TD_1820_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2833_output("tbl_JOIN_INNER_TD_2833_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_2833_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3336_output("tbl_JOIN_INNER_TD_3336_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3336_output.allocateHost();
    Table tbl_Project_TD_3329_output("tbl_Project_TD_3329_output", -1, 1, "");
    tbl_Project_TD_3329_output.allocateHost();
    Table tbl_Project_TD_3329_emptyBufferB("tbl_Project_TD_3329_emptyBufferB", 1, 8, "");
    tbl_Project_TD_3329_emptyBufferB.allocateHost();
    Table tbl_JOIN_INNER_TD_460_output("tbl_JOIN_INNER_TD_460_output", 37000, 3, "");
    tbl_JOIN_INNER_TD_460_output.allocateHost();
    Table tbl_Project_TD_4712_output("tbl_Project_TD_4712_output", 6100000, 3, "");
    tbl_Project_TD_4712_output.allocateHost();
    Table tbl_Filter_TD_4573_output("tbl_Filter_TD_4573_output", 6100000, 1, "");
    tbl_Filter_TD_4573_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5483_output("tbl_JOIN_INNER_TD_5483_output", 909000, 4, "");
    tbl_JOIN_INNER_TD_5483_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7922_input;
    tbl_SerializeFromObject_TD_7922_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7922_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7922_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7922_input.allocateHost();
    tbl_SerializeFromObject_TD_7922_input.loadHost();
    Table tbl_SerializeFromObject_TD_6945_input;
    tbl_SerializeFromObject_TD_6945_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_6945_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6945_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6945_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_6945_input.allocateHost();
    tbl_SerializeFromObject_TD_6945_input.loadHost();
    Table tbl_SerializeFromObject_TD_5707_input;
    tbl_SerializeFromObject_TD_5707_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5707_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_5707_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_5707_input.allocateHost();
    tbl_SerializeFromObject_TD_5707_input.loadHost();
    Table tbl_JOIN_INNER_TD_6756_output("tbl_JOIN_INNER_TD_6756_output", 227000, 2, "");
    tbl_JOIN_INNER_TD_6756_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8346_input;
    tbl_SerializeFromObject_TD_8346_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_8346_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_8346_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_8346_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_8346_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_8346_input.allocateHost();
    tbl_SerializeFromObject_TD_8346_input.loadHost();
    Table tbl_SerializeFromObject_TD_9236_input;
    tbl_SerializeFromObject_TD_9236_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9236_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_9236_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_9236_input.allocateHost();
    tbl_SerializeFromObject_TD_9236_input.loadHost();
    Table tbl_Filter_TD_8286_output("tbl_Filter_TD_8286_output", 6100000, 2, "");
    tbl_Filter_TD_8286_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9296_input;
    tbl_SerializeFromObject_TD_9296_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_9296_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_9296_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_9296_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_9296_input.allocateHost();
    tbl_SerializeFromObject_TD_9296_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_3329_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3329_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_460_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4573_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5483_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_7922_input.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6756_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_8346_input.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_9236_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8286_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_3329_cmds;
    cfg_Project_TD_3329_cmds.allocateHost();
    get_cfg_dat_Project_TD_3329_gqe_join (cfg_Project_TD_3329_cmds.cmd);
    cfg_Project_TD_3329_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_460_cmds;
    cfg_JOIN_INNER_TD_460_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_460_gqe_join (cfg_JOIN_INNER_TD_460_cmds.cmd);
    cfg_JOIN_INNER_TD_460_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5483_cmds;
    cfg_JOIN_INNER_TD_5483_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5483_gqe_join (cfg_JOIN_INNER_TD_5483_cmds.cmd);
    cfg_JOIN_INNER_TD_5483_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6756_cmds;
    cfg_JOIN_INNER_TD_6756_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6756_gqe_join (cfg_JOIN_INNER_TD_6756_cmds.cmd);
    cfg_JOIN_INNER_TD_6756_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_3329;
    krnl_Project_TD_3329 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_3329.setup(tbl_Filter_TD_4573_output, tbl_Project_TD_3329_emptyBufferB, tbl_Project_TD_3329_output, cfg_Project_TD_3329_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_460;
    krnl_JOIN_INNER_TD_460 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_460.setup(tbl_SerializeFromObject_TD_7922_input, tbl_JOIN_INNER_TD_5483_output, tbl_JOIN_INNER_TD_460_output, cfg_JOIN_INNER_TD_460_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5483;
    krnl_JOIN_INNER_TD_5483 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5483.setup(tbl_JOIN_INNER_TD_6756_output, tbl_SerializeFromObject_TD_8346_input, tbl_JOIN_INNER_TD_5483_output, cfg_JOIN_INNER_TD_5483_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6756;
    krnl_JOIN_INNER_TD_6756 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6756.setup(tbl_SerializeFromObject_TD_9236_input, tbl_Filter_TD_8286_output, tbl_JOIN_INNER_TD_6756_output, cfg_JOIN_INNER_TD_6756_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_3329;
    trans_Project_TD_3329.setq(q_h);
    trans_Project_TD_3329.add(&(cfg_Project_TD_3329_cmds));
    transEngine trans_Project_TD_3329_out;
    trans_Project_TD_3329_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_460;
    trans_JOIN_INNER_TD_460.setq(q_h);
    trans_JOIN_INNER_TD_460.add(&(cfg_JOIN_INNER_TD_460_cmds));
    trans_JOIN_INNER_TD_460.add(&(tbl_SerializeFromObject_TD_7922_input));
    transEngine trans_JOIN_INNER_TD_460_out;
    trans_JOIN_INNER_TD_460_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5483;
    trans_JOIN_INNER_TD_5483.setq(q_h);
    trans_JOIN_INNER_TD_5483.add(&(cfg_JOIN_INNER_TD_5483_cmds));
    trans_JOIN_INNER_TD_5483.add(&(tbl_SerializeFromObject_TD_8346_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6756;
    trans_JOIN_INNER_TD_6756.setq(q_h);
    trans_JOIN_INNER_TD_6756.add(&(cfg_JOIN_INNER_TD_6756_cmds));
    trans_JOIN_INNER_TD_6756.add(&(tbl_SerializeFromObject_TD_9236_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_3329;
    std::vector<cl::Event> events_d2h_rd_Project_TD_3329;
    std::vector<cl::Event> events_Project_TD_3329;
    events_h2d_wr_Project_TD_3329.resize(1);
    events_d2h_rd_Project_TD_3329.resize(1);
    events_Project_TD_3329.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_3329;
    std::vector<cl::Event> prev_events_grp_Project_TD_3329;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_460;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_460;
    std::vector<cl::Event> events_JOIN_INNER_TD_460;
    events_h2d_wr_JOIN_INNER_TD_460.resize(1);
    events_d2h_rd_JOIN_INNER_TD_460.resize(1);
    events_JOIN_INNER_TD_460.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_460;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_460;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5483;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5483;
    std::vector<cl::Event> events_JOIN_INNER_TD_5483;
    events_h2d_wr_JOIN_INNER_TD_5483.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5483.resize(1);
    events_JOIN_INNER_TD_5483.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5483;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5483;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6756;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6756;
    std::vector<cl::Event> events_JOIN_INNER_TD_6756;
    events_h2d_wr_JOIN_INNER_TD_6756.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6756.resize(1);
    events_JOIN_INNER_TD_6756.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6756;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6756;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_688_s, tv_r_Filter_8_688_e;
    gettimeofday(&tv_r_Filter_8_688_s, 0);
    SW_Filter_TD_8286(tbl_SerializeFromObject_TD_9296_input, tbl_Filter_TD_8286_output);
    gettimeofday(&tv_r_Filter_8_688_e, 0);

    struct timeval tv_r_JOIN_INNER_6_58_s, tv_r_JOIN_INNER_6_58_e;
    gettimeofday(&tv_r_JOIN_INNER_6_58_s, 0);
    trans_JOIN_INNER_TD_6756.add(&(tbl_Filter_TD_8286_output));
    trans_JOIN_INNER_TD_6756.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6756), &(events_h2d_wr_JOIN_INNER_TD_6756[0]));
    events_grp_JOIN_INNER_TD_6756.push_back(events_h2d_wr_JOIN_INNER_TD_6756[0]);
    krnl_JOIN_INNER_TD_6756.run(0, &(events_grp_JOIN_INNER_TD_6756), &(events_JOIN_INNER_TD_6756[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_58_e, 0);

    struct timeval tv_r_JOIN_INNER_5_3_s, tv_r_JOIN_INNER_5_3_e;
    gettimeofday(&tv_r_JOIN_INNER_5_3_s, 0);
    prev_events_grp_JOIN_INNER_TD_5483.push_back(events_h2d_wr_JOIN_INNER_TD_6756[0]);
    trans_JOIN_INNER_TD_5483.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5483), &(events_h2d_wr_JOIN_INNER_TD_5483[0]));
    events_grp_JOIN_INNER_TD_5483.push_back(events_h2d_wr_JOIN_INNER_TD_5483[0]);
    events_grp_JOIN_INNER_TD_5483.push_back(events_JOIN_INNER_TD_6756[0]);
    krnl_JOIN_INNER_TD_5483.run(0, &(events_grp_JOIN_INNER_TD_5483), &(events_JOIN_INNER_TD_5483[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_3_e, 0);

    struct timeval tv_r_Filter_4_32_s, tv_r_Filter_4_32_e;
    gettimeofday(&tv_r_Filter_4_32_s, 0);
    SW_Filter_TD_4573(tbl_SerializeFromObject_TD_5707_input, tbl_Filter_TD_4573_output);
    gettimeofday(&tv_r_Filter_4_32_e, 0);

    struct timeval tv_r_Project_4_706_s, tv_r_Project_4_706_e;
    gettimeofday(&tv_r_Project_4_706_s, 0);
    SW_Project_TD_4712(tbl_SerializeFromObject_TD_6945_input, tbl_Project_TD_4712_output);
    gettimeofday(&tv_r_Project_4_706_e, 0);

    struct timeval tv_r_JOIN_INNER_4_782_s, tv_r_JOIN_INNER_4_782_e;
    gettimeofday(&tv_r_JOIN_INNER_4_782_s, 0);
    prev_events_grp_JOIN_INNER_TD_460.push_back(events_h2d_wr_JOIN_INNER_TD_5483[0]);
    trans_JOIN_INNER_TD_460.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_460), &(events_h2d_wr_JOIN_INNER_TD_460[0]));
    events_grp_JOIN_INNER_TD_460.push_back(events_h2d_wr_JOIN_INNER_TD_460[0]);
    events_grp_JOIN_INNER_TD_460.push_back(events_JOIN_INNER_TD_5483[0]);
    krnl_JOIN_INNER_TD_460.run(0, &(events_grp_JOIN_INNER_TD_460), &(events_JOIN_INNER_TD_460[0]));
    
    trans_JOIN_INNER_TD_460_out.add(&(tbl_JOIN_INNER_TD_460_output));
    trans_JOIN_INNER_TD_460_out.dev2host(0, &(events_JOIN_INNER_TD_460), &(events_d2h_rd_JOIN_INNER_TD_460[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_782_e, 0);

    struct timeval tv_r_Project_3_536_s, tv_r_Project_3_536_e;
    gettimeofday(&tv_r_Project_3_536_s, 0);
    trans_Project_TD_3329.add(&(tbl_Filter_TD_4573_output));
    trans_Project_TD_3329.host2dev(0, &(prev_events_grp_Project_TD_3329), &(events_h2d_wr_Project_TD_3329[0]));
    events_grp_Project_TD_3329.push_back(events_h2d_wr_Project_TD_3329[0]);
    krnl_Project_TD_3329.run(0, &(events_grp_Project_TD_3329), &(events_Project_TD_3329[0]));
    
    trans_Project_TD_3329_out.add(&(tbl_Project_TD_3329_output));
    trans_Project_TD_3329_out.dev2host(0, &(events_Project_TD_3329), &(events_d2h_rd_Project_TD_3329[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_3_536_e, 0);

    struct timeval tv_r_JOIN_INNER_3_141_s, tv_r_JOIN_INNER_3_141_e;
    gettimeofday(&tv_r_JOIN_INNER_3_141_s, 0);
    SW_JOIN_INNER_TD_3336(tbl_JOIN_INNER_TD_460_output, tbl_Project_TD_4712_output, tbl_JOIN_INNER_TD_3336_output);
    gettimeofday(&tv_r_JOIN_INNER_3_141_e, 0);

    struct timeval tv_r_JOIN_INNER_2_856_s, tv_r_JOIN_INNER_2_856_e;
    gettimeofday(&tv_r_JOIN_INNER_2_856_s, 0);
    SW_JOIN_INNER_TD_2833(tbl_JOIN_INNER_TD_3336_output, tbl_Project_TD_3329_output, tbl_JOIN_INNER_TD_2833_output);
    gettimeofday(&tv_r_JOIN_INNER_2_856_e, 0);

    struct timeval tv_r_Aggregate_1_267_s, tv_r_Aggregate_1_267_e;
    gettimeofday(&tv_r_Aggregate_1_267_s, 0);
    SW_Aggregate_TD_1820(tbl_JOIN_INNER_TD_2833_output, tbl_Aggregate_TD_1820_output);
    gettimeofday(&tv_r_Aggregate_1_267_e, 0);

    struct timeval tv_r_Sort_0_50_s, tv_r_Sort_0_50_e;
    gettimeofday(&tv_r_Sort_0_50_s, 0);
    SW_Sort_TD_0318(tbl_Aggregate_TD_1820_output, tbl_Sort_TD_0318_output);
    gettimeofday(&tv_r_Sort_0_50_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_688_s, &tv_r_Filter_8_688_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9296_input: " << tbl_SerializeFromObject_TD_9296_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_58_s, &tv_r_JOIN_INNER_6_58_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9236_input: " << tbl_SerializeFromObject_TD_9236_input.getNumRow() << " " << "tbl_Filter_TD_8286_output: " << tbl_Filter_TD_8286_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_3_s, &tv_r_JOIN_INNER_5_3_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6756_output: " << tbl_JOIN_INNER_TD_6756_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_8346_input: " << tbl_SerializeFromObject_TD_8346_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_32_s, &tv_r_Filter_4_32_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5707_input: " << tbl_SerializeFromObject_TD_5707_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_706_s, &tv_r_Project_4_706_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6945_input: " << tbl_SerializeFromObject_TD_6945_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_782_s, &tv_r_JOIN_INNER_4_782_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5483_output: " << tbl_JOIN_INNER_TD_5483_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_7922_input: " << tbl_SerializeFromObject_TD_7922_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_536_s, &tv_r_Project_3_536_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4573_output: " << tbl_Filter_TD_4573_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_141_s, &tv_r_JOIN_INNER_3_141_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_460_output: " << tbl_JOIN_INNER_TD_460_output.getNumRow() << " " << "tbl_Project_TD_4712_output: " << tbl_Project_TD_4712_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_856_s, &tv_r_JOIN_INNER_2_856_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3336_output: " << tbl_JOIN_INNER_TD_3336_output.getNumRow() << " " << "tbl_Project_TD_3329_output: " << tbl_Project_TD_3329_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_267_s, &tv_r_Aggregate_1_267_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2833_output: " << tbl_JOIN_INNER_TD_2833_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_50_s, &tv_r_Sort_0_50_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1820_output: " << tbl_Aggregate_TD_1820_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 26.330034 * 1000 << "ms" << std::endl; 
    return 0; 
}
