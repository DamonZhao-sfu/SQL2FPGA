// number of overlays (w/o fusion): 6 
// number of overlays (w/ fusion): 6 
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

#include "cfgFunc_q18.hpp" 
#include "q18.hpp" 

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
    std::cout << "NOTE:running query #18\n."; 
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
    cl::Device device_a = devices[1]; 
    // Create context_a and command queue for selected device 
    cl::Context context_a(device_a); 
    cl::CommandQueue q_a(context_a, device_a, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE); 
    std::string devName_a = device_a.getInfo<CL_DEVICE_NAME>(); 
    std::cout << "Selected Device " << devName_a << "\n"; 
    cl::Program::Binaries xclBins_a = xcl::import_binary_file(xclbin_path_a); 
    std::vector<cl::Device> devices_a; 
    devices_a.push_back(device_a); 
    cl::Program program_a(context_a, devices_a, xclBins_a); 
    // ****************************** Tables **************************** // 
    Table tbl_Sort_TD_0695_output("tbl_Sort_TD_0695_output", 6100000, 6, "");
    tbl_Sort_TD_0695_output.allocateHost();
    Table tbl_Aggregate_TD_1719_output("tbl_Aggregate_TD_1719_output", 6100000, 6, "");
    tbl_Aggregate_TD_1719_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2716_output("tbl_JOIN_INNER_TD_2716_output", 100, 6, "");
    tbl_JOIN_INNER_TD_2716_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3273_output("tbl_JOIN_INNER_TD_3273_output", 100, 5, "");
    tbl_JOIN_INNER_TD_3273_output.allocateHost();
    Table tbl_Project_TD_3706_output("tbl_Project_TD_3706_output", 6100000, 2, "");
    tbl_Project_TD_3706_output.allocateHost();
    Table tbl_Project_TD_4362_output("tbl_Project_TD_4362_output", 6100000, 2, "");
    tbl_Project_TD_4362_output.allocateHost();
    Table tbl_Project_TD_4847_output("tbl_Project_TD_4847_output", 6100000, 4, "");
    tbl_Project_TD_4847_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_4262_output("tbl_JOIN_LEFTSEMI_TD_4262_output", 100, 2, "");
    tbl_JOIN_LEFTSEMI_TD_4262_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute.addCol("c_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_6954_input;
    tbl_SerializeFromObject_TD_6954_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6954_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_6954_input.addCol("c_name", TPCH_READ_C_NAME_LEN+1);
    tbl_SerializeFromObject_TD_6954_input.allocateHost();
    tbl_SerializeFromObject_TD_6954_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_5602_output("tbl_JOIN_LEFTSEMI_TD_5602_output", -1, 4, "");
    tbl_JOIN_LEFTSEMI_TD_5602_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6641_input;
    tbl_SerializeFromObject_TD_6641_input = Table("lineitem", lineitem_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6641_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_6641_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_6641_input.allocateHost();
    tbl_SerializeFromObject_TD_6641_input.loadHost();
    Table tbl_SerializeFromObject_TD_7585_input;
    tbl_SerializeFromObject_TD_7585_input = Table("orders", orders_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7585_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_7585_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_7585_input.addCol("o_totalprice", 4);
    tbl_SerializeFromObject_TD_7585_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_7585_input.allocateHost();
    tbl_SerializeFromObject_TD_7585_input.loadHost();
    Table tbl_Filter_TD_6964_output("tbl_Filter_TD_6964_output", 6100000, 1, "");
    tbl_Filter_TD_6964_output.allocateHost();
    Table tbl_Aggregate_TD_7737_output_preprocess("tbl_Aggregate_TD_7737_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_7737_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_7737_output("tbl_Aggregate_TD_7737_output", -1, 2, "");
    tbl_Aggregate_TD_7737_output.allocateHost();
    Table tbl_Project_TD_8834_output("tbl_Project_TD_8834_output", 6100000, 2, "");
    tbl_Project_TD_8834_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9717_input;
    tbl_SerializeFromObject_TD_9717_input = Table("lineitem", lineitem_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9717_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_9717_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_9717_input.allocateHost();
    tbl_SerializeFromObject_TD_9717_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2716_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3273_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3706_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4362_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4847_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_4262_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_5602_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_6641_input.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_7585_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6964_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_7737_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Project_TD_8834_output.allocateDevBuffer(context_a, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2716_cmds;
    cfg_JOIN_INNER_TD_2716_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2716_gqe_join (cfg_JOIN_INNER_TD_2716_cmds.cmd);
    cfg_JOIN_INNER_TD_2716_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3273_cmds;
    cfg_JOIN_INNER_TD_3273_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3273_gqe_join (cfg_JOIN_INNER_TD_3273_cmds.cmd);
    cfg_JOIN_INNER_TD_3273_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_4262_cmds;
    cfg_JOIN_LEFTSEMI_TD_4262_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_4262_gqe_join (cfg_JOIN_LEFTSEMI_TD_4262_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_4262_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_5602_cmds;
    cfg_JOIN_LEFTSEMI_TD_5602_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_5602_gqe_join (cfg_JOIN_LEFTSEMI_TD_5602_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_5602_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_7737_cmds;
    cfg_Aggregate_TD_7737_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_7737_gqe_aggr(cfg_Aggregate_TD_7737_cmds.cmd);
    cfg_Aggregate_TD_7737_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_7737_cmds_out;
    cfg_Aggregate_TD_7737_cmds_out.allocateHost();
    cfg_Aggregate_TD_7737_cmds_out.allocateDevBuffer(context_a, 33);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2716;
    krnl_JOIN_INNER_TD_2716 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2716.setup(tbl_JOIN_INNER_TD_3273_output, tbl_Project_TD_3706_output, tbl_JOIN_INNER_TD_2716_output, cfg_JOIN_INNER_TD_2716_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3273;
    krnl_JOIN_INNER_TD_3273 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3273.setup(tbl_Project_TD_4362_output, tbl_Project_TD_4847_output, tbl_JOIN_INNER_TD_3273_output, cfg_JOIN_INNER_TD_3273_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_4262;
    krnl_JOIN_LEFTSEMI_TD_4262 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_4262.setup(tbl_Filter_TD_6964_output, tbl_SerializeFromObject_TD_6641_input, tbl_JOIN_LEFTSEMI_TD_4262_output, cfg_JOIN_LEFTSEMI_TD_4262_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_5602;
    krnl_JOIN_LEFTSEMI_TD_5602 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_5602.setup(tbl_Filter_TD_6964_output, tbl_SerializeFromObject_TD_7585_input, tbl_JOIN_LEFTSEMI_TD_5602_output, cfg_JOIN_LEFTSEMI_TD_5602_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_7737;
    krnl_Aggregate_TD_7737 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_7737.setup(tbl_Project_TD_8834_output, tbl_Aggregate_TD_7737_output_preprocess, cfg_Aggregate_TD_7737_cmds, cfg_Aggregate_TD_7737_cmds_out, buftmp_a);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2716;
    trans_JOIN_INNER_TD_2716.setq(q_h);
    trans_JOIN_INNER_TD_2716.add(&(cfg_JOIN_INNER_TD_2716_cmds));
    transEngine trans_JOIN_INNER_TD_2716_out;
    trans_JOIN_INNER_TD_2716_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3273;
    trans_JOIN_INNER_TD_3273.setq(q_h);
    trans_JOIN_INNER_TD_3273.add(&(cfg_JOIN_INNER_TD_3273_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_4262;
    trans_JOIN_LEFTSEMI_TD_4262.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_4262.add(&(cfg_JOIN_LEFTSEMI_TD_4262_cmds));
    trans_JOIN_LEFTSEMI_TD_4262.add(&(tbl_SerializeFromObject_TD_6641_input));
    transEngine trans_JOIN_LEFTSEMI_TD_4262_out;
    trans_JOIN_LEFTSEMI_TD_4262_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_5602;
    trans_JOIN_LEFTSEMI_TD_5602.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_5602.add(&(cfg_JOIN_LEFTSEMI_TD_5602_cmds));
    trans_JOIN_LEFTSEMI_TD_5602.add(&(tbl_SerializeFromObject_TD_7585_input));
    transEngine trans_JOIN_LEFTSEMI_TD_5602_out;
    trans_JOIN_LEFTSEMI_TD_5602_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_7737;
    trans_Aggregate_TD_7737.setq(q_a);
    trans_Aggregate_TD_7737.add(&(cfg_Aggregate_TD_7737_cmds));
    transEngine trans_Aggregate_TD_7737_out;
    trans_Aggregate_TD_7737_out.setq(q_a);
    q_a.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2716;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2716;
    std::vector<cl::Event> events_JOIN_INNER_TD_2716;
    events_h2d_wr_JOIN_INNER_TD_2716.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2716.resize(1);
    events_JOIN_INNER_TD_2716.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2716;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2716;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3273;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3273;
    std::vector<cl::Event> events_JOIN_INNER_TD_3273;
    events_h2d_wr_JOIN_INNER_TD_3273.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3273.resize(1);
    events_JOIN_INNER_TD_3273.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3273;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3273;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_4262;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_4262;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_4262;
    events_h2d_wr_JOIN_LEFTSEMI_TD_4262.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_4262.resize(1);
    events_JOIN_LEFTSEMI_TD_4262.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_4262;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_4262;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_5602;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_5602;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_5602;
    events_h2d_wr_JOIN_LEFTSEMI_TD_5602.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_5602.resize(1);
    events_JOIN_LEFTSEMI_TD_5602.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_5602;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_5602;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_7737;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_7737;
    std::vector<cl::Event> events_Aggregate_TD_7737;
    events_h2d_wr_Aggregate_TD_7737.resize(1);
    events_d2h_rd_Aggregate_TD_7737.resize(1);
    events_Aggregate_TD_7737.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_7737;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_7737;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Project_8_661_s, tv_r_Project_8_661_e;
    gettimeofday(&tv_r_Project_8_661_s, 0);
    SW_Project_TD_8834(tbl_SerializeFromObject_TD_9717_input, tbl_Project_TD_8834_output);
    gettimeofday(&tv_r_Project_8_661_e, 0);

    struct timeval tv_r_Aggregate_7_864_s, tv_r_Aggregate_7_864_e;
    gettimeofday(&tv_r_Aggregate_7_864_s, 0);
    trans_Aggregate_TD_7737.add(&(tbl_Project_TD_8834_output));
    trans_Aggregate_TD_7737.host2dev(0, &(prev_events_grp_Aggregate_TD_7737), &(events_h2d_wr_Aggregate_TD_7737[0]));
    events_grp_Aggregate_TD_7737.push_back(events_h2d_wr_Aggregate_TD_7737[0]);
    krnl_Aggregate_TD_7737.run(0, &(events_grp_Aggregate_TD_7737), &(events_Aggregate_TD_7737[0]));
    
    trans_Aggregate_TD_7737_out.add(&(tbl_Aggregate_TD_7737_output_preprocess));
    trans_Aggregate_TD_7737_out.dev2host(0, &(events_Aggregate_TD_7737), &(events_d2h_rd_Aggregate_TD_7737[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_7737_consolidate(tbl_Aggregate_TD_7737_output_preprocess, tbl_Aggregate_TD_7737_output);
    gettimeofday(&tv_r_Aggregate_7_864_e, 0);

    struct timeval tv_r_Filter_6_797_s, tv_r_Filter_6_797_e;
    gettimeofday(&tv_r_Filter_6_797_s, 0);
    SW_Filter_TD_6964(tbl_Aggregate_TD_7737_output, tbl_Filter_TD_6964_output);
    gettimeofday(&tv_r_Filter_6_797_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_5_482_s, tv_r_JOIN_LEFTSEMI_5_482_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_482_s, 0);
    trans_JOIN_LEFTSEMI_TD_5602.add(&(tbl_Filter_TD_6964_output));
    trans_JOIN_LEFTSEMI_TD_5602.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_5602), &(events_h2d_wr_JOIN_LEFTSEMI_TD_5602[0]));
    events_grp_JOIN_LEFTSEMI_TD_5602.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_5602[0]);
    krnl_JOIN_LEFTSEMI_TD_5602.run(0, &(events_grp_JOIN_LEFTSEMI_TD_5602), &(events_JOIN_LEFTSEMI_TD_5602[0]));
    
    trans_JOIN_LEFTSEMI_TD_5602_out.add(&(tbl_JOIN_LEFTSEMI_TD_5602_output));
    trans_JOIN_LEFTSEMI_TD_5602_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_5602), &(events_d2h_rd_JOIN_LEFTSEMI_TD_5602[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_482_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_4_878_s, tv_r_JOIN_LEFTSEMI_4_878_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_878_s, 0);
    trans_JOIN_LEFTSEMI_TD_4262.add(&(tbl_Filter_TD_6964_output));
    trans_JOIN_LEFTSEMI_TD_4262.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_4262), &(events_h2d_wr_JOIN_LEFTSEMI_TD_4262[0]));
    events_grp_JOIN_LEFTSEMI_TD_4262.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_4262[0]);
    krnl_JOIN_LEFTSEMI_TD_4262.run(0, &(events_grp_JOIN_LEFTSEMI_TD_4262), &(events_JOIN_LEFTSEMI_TD_4262[0]));
    
    trans_JOIN_LEFTSEMI_TD_4262_out.add(&(tbl_JOIN_LEFTSEMI_TD_4262_output));
    trans_JOIN_LEFTSEMI_TD_4262_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_4262), &(events_d2h_rd_JOIN_LEFTSEMI_TD_4262[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_878_e, 0);

    struct timeval tv_r_Project_4_485_s, tv_r_Project_4_485_e;
    gettimeofday(&tv_r_Project_4_485_s, 0);
    SW_Project_TD_4847(tbl_JOIN_LEFTSEMI_TD_5602_output, tbl_Project_TD_4847_output);
    gettimeofday(&tv_r_Project_4_485_e, 0);

    struct timeval tv_r_Project_4_75_s, tv_r_Project_4_75_e;
    gettimeofday(&tv_r_Project_4_75_s, 0);
    SW_Project_TD_4362(tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute, tbl_Project_TD_4362_output);
    gettimeofday(&tv_r_Project_4_75_e, 0);

    struct timeval tv_r_Project_3_988_s, tv_r_Project_3_988_e;
    gettimeofday(&tv_r_Project_3_988_s, 0);
    SW_Project_TD_3706(tbl_JOIN_LEFTSEMI_TD_4262_output, tbl_Project_TD_3706_output);
    gettimeofday(&tv_r_Project_3_988_e, 0);

    struct timeval tv_r_JOIN_INNER_3_655_s, tv_r_JOIN_INNER_3_655_e;
    gettimeofday(&tv_r_JOIN_INNER_3_655_s, 0);
    trans_JOIN_INNER_TD_3273.add(&(tbl_Project_TD_4362_output));
    trans_JOIN_INNER_TD_3273.add(&(tbl_Project_TD_4847_output));
    trans_JOIN_INNER_TD_3273.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3273), &(events_h2d_wr_JOIN_INNER_TD_3273[0]));
    events_grp_JOIN_INNER_TD_3273.push_back(events_h2d_wr_JOIN_INNER_TD_3273[0]);
    krnl_JOIN_INNER_TD_3273.run(0, &(events_grp_JOIN_INNER_TD_3273), &(events_JOIN_INNER_TD_3273[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_655_e, 0);

    struct timeval tv_r_JOIN_INNER_2_193_s, tv_r_JOIN_INNER_2_193_e;
    gettimeofday(&tv_r_JOIN_INNER_2_193_s, 0);
    prev_events_grp_JOIN_INNER_TD_2716.push_back(events_h2d_wr_JOIN_INNER_TD_3273[0]);
    trans_JOIN_INNER_TD_2716.add(&(tbl_Project_TD_3706_output));
    trans_JOIN_INNER_TD_2716.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2716), &(events_h2d_wr_JOIN_INNER_TD_2716[0]));
    events_grp_JOIN_INNER_TD_2716.push_back(events_h2d_wr_JOIN_INNER_TD_2716[0]);
    events_grp_JOIN_INNER_TD_2716.push_back(events_JOIN_INNER_TD_3273[0]);
    krnl_JOIN_INNER_TD_2716.run(0, &(events_grp_JOIN_INNER_TD_2716), &(events_JOIN_INNER_TD_2716[0]));
    
    trans_JOIN_INNER_TD_2716_out.add(&(tbl_JOIN_INNER_TD_2716_output));
    trans_JOIN_INNER_TD_2716_out.dev2host(0, &(events_JOIN_INNER_TD_2716), &(events_d2h_rd_JOIN_INNER_TD_2716[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_193_e, 0);

    struct timeval tv_r_Aggregate_1_202_s, tv_r_Aggregate_1_202_e;
    gettimeofday(&tv_r_Aggregate_1_202_s, 0);
    SW_Aggregate_TD_1719(tbl_JOIN_INNER_TD_2716_output, tbl_SerializeFromObject_TD_6954_input, tbl_Aggregate_TD_1719_output);
    gettimeofday(&tv_r_Aggregate_1_202_e, 0);

    struct timeval tv_r_Sort_0_2_s, tv_r_Sort_0_2_e;
    gettimeofday(&tv_r_Sort_0_2_s, 0);
    SW_Sort_TD_0695(tbl_Aggregate_TD_1719_output, tbl_Sort_TD_0695_output);
    gettimeofday(&tv_r_Sort_0_2_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_661_s, &tv_r_Project_8_661_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9717_input: " << tbl_SerializeFromObject_TD_9717_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_864_s, &tv_r_Aggregate_7_864_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8834_output: " << tbl_Project_TD_8834_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_797_s, &tv_r_Filter_6_797_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7737_output: " << tbl_Aggregate_TD_7737_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_5: " << tvdiff(&tv_r_JOIN_LEFTSEMI_5_482_s, &tv_r_JOIN_LEFTSEMI_5_482_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7585_input: " << tbl_SerializeFromObject_TD_7585_input.getNumRow() << " " << "tbl_Filter_TD_6964_output: " << tbl_Filter_TD_6964_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_4: " << tvdiff(&tv_r_JOIN_LEFTSEMI_4_878_s, &tv_r_JOIN_LEFTSEMI_4_878_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6641_input: " << tbl_SerializeFromObject_TD_6641_input.getNumRow() << " " << "tbl_Filter_TD_6964_output: " << tbl_Filter_TD_6964_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_485_s, &tv_r_Project_4_485_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_5602_output: " << tbl_JOIN_LEFTSEMI_TD_5602_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_75_s, &tv_r_Project_4_75_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_988_s, &tv_r_Project_3_988_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_4262_output: " << tbl_JOIN_LEFTSEMI_TD_4262_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_655_s, &tv_r_JOIN_INNER_3_655_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4362_output: " << tbl_Project_TD_4362_output.getNumRow() << " " << "tbl_Project_TD_4847_output: " << tbl_Project_TD_4847_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_193_s, &tv_r_JOIN_INNER_2_193_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3273_output: " << tbl_JOIN_INNER_TD_3273_output.getNumRow() << " " << "tbl_Project_TD_3706_output: " << tbl_Project_TD_3706_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_202_s, &tv_r_Aggregate_1_202_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2716_output: " << tbl_JOIN_INNER_TD_2716_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_2_s, &tv_r_Sort_0_2_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1719_output: " << tbl_Aggregate_TD_1719_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 39.566006 * 1000 << "ms" << std::endl; 
    return 0; 
}
