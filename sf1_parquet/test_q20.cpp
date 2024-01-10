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

#include "cfgFunc_q20.hpp" 
#include "q20.hpp" 

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
    std::cout << "NOTE:running query #20\n."; 
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
    Table tbl_Sort_TD_0950_output("tbl_Sort_TD_0950_output", 6100000, 2, "");
    tbl_Sort_TD_0950_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1993_output("tbl_JOIN_INNER_TD_1993_output", 210, 2, "");
    tbl_JOIN_INNER_TD_1993_output.allocateHost();
    Table tbl_Project_TD_2607_output("tbl_Project_TD_2607_output", 6100000, 3, "");
    tbl_Project_TD_2607_output.allocateHost();
    Table tbl_Project_TD_2162_output("tbl_Project_TD_2162_output", 6100000, 1, "");
    tbl_Project_TD_2162_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_3114_output("tbl_JOIN_LEFTSEMI_TD_3114_output", -1, 3, "");
    tbl_JOIN_LEFTSEMI_TD_3114_output.allocateHost();
    Table tbl_Filter_TD_3898_output("tbl_Filter_TD_3898_output", 6100000, 1, "");
    tbl_Filter_TD_3898_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute = Table("supplier", supplier_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5360_input;
    tbl_SerializeFromObject_TD_5360_input = Table("supplier", supplier_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5360_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_5360_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_5360_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_5360_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_5360_input.allocateHost();
    tbl_SerializeFromObject_TD_5360_input.loadHost();
    Table tbl_Project_TD_4625_output("tbl_Project_TD_4625_output", 6100000, 1, "");
    tbl_Project_TD_4625_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4765_input;
    tbl_SerializeFromObject_TD_4765_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4765_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_4765_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_4765_input.allocateHost();
    tbl_SerializeFromObject_TD_4765_input.loadHost();
    Table tbl_JOIN_INNER_TD_511_output("tbl_JOIN_INNER_TD_511_output", -1, 1, "");
    tbl_JOIN_INNER_TD_511_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_6942_output("tbl_JOIN_LEFTSEMI_TD_6942_output", 12816, 3, "");
    tbl_JOIN_LEFTSEMI_TD_6942_output.allocateHost();
    Table tbl_Aggregate_TD_7176_output_preprocess("tbl_Aggregate_TD_7176_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_7176_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_7176_output("tbl_Aggregate_TD_7176_output", -1, 3, "");
    tbl_Aggregate_TD_7176_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8557_input;
    tbl_SerializeFromObject_TD_8557_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8557_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8557_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8557_input.addCol("ps_availqty", 4);
    tbl_SerializeFromObject_TD_8557_input.allocateHost();
    tbl_SerializeFromObject_TD_8557_input.loadHost();
    Table tbl_Project_TD_7526_output("tbl_Project_TD_7526_output", 6100000, 1, "");
    tbl_Project_TD_7526_output.allocateHost();
    Table tbl_Project_TD_828_output("tbl_Project_TD_828_output", 6100000, 3, "");
    tbl_Project_TD_828_output.allocateHost();
    Table tbl_Filter_TD_863_output("tbl_Filter_TD_863_output", 6100000, 1, "");
    tbl_Filter_TD_863_output.allocateHost();
    Table tbl_Filter_TD_9199_output("tbl_Filter_TD_9199_output", 6100000, 3, "");
    tbl_Filter_TD_9199_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9596_input;
    tbl_SerializeFromObject_TD_9596_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9596_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_9596_input.addCol("p_name", TPCH_READ_P_NAME_LEN+1);
    tbl_SerializeFromObject_TD_9596_input.allocateHost();
    tbl_SerializeFromObject_TD_9596_input.loadHost();
    Table tbl_SerializeFromObject_TD_10345_input;
    tbl_SerializeFromObject_TD_10345_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_10345_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_10345_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10345_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_10345_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_10345_input.allocateHost();
    tbl_SerializeFromObject_TD_10345_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_1993_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2607_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2162_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_3114_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4625_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_511_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_6942_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_7176_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_7176_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_8557_input.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7526_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_828_output.allocateDevBuffer(context_a, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_1993_cmds;
    cfg_JOIN_INNER_TD_1993_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1993_gqe_join (cfg_JOIN_INNER_TD_1993_cmds.cmd);
    cfg_JOIN_INNER_TD_1993_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_3114_cmds;
    cfg_JOIN_LEFTSEMI_TD_3114_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_3114_gqe_join (cfg_JOIN_LEFTSEMI_TD_3114_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_3114_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_511_cmds;
    cfg_JOIN_INNER_TD_511_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_511_gqe_join (cfg_JOIN_INNER_TD_511_cmds.cmd);
    cfg_JOIN_INNER_TD_511_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_6942_cmds;
    cfg_JOIN_LEFTSEMI_TD_6942_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_6942_gqe_join (cfg_JOIN_LEFTSEMI_TD_6942_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_6942_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_7176_cmds;
    cfg_Aggregate_TD_7176_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_7176_gqe_aggr(cfg_Aggregate_TD_7176_cmds.cmd);
    cfg_Aggregate_TD_7176_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_7176_cmds_out;
    cfg_Aggregate_TD_7176_cmds_out.allocateHost();
    cfg_Aggregate_TD_7176_cmds_out.allocateDevBuffer(context_a, 33);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_1993;
    krnl_JOIN_INNER_TD_1993 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1993.setup(tbl_Project_TD_2607_output, tbl_Project_TD_2162_output, tbl_JOIN_INNER_TD_1993_output, cfg_JOIN_INNER_TD_1993_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_3114;
    krnl_JOIN_LEFTSEMI_TD_3114 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_3114.setup(tbl_Project_TD_4625_output, tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute, tbl_JOIN_LEFTSEMI_TD_3114_output, cfg_JOIN_LEFTSEMI_TD_3114_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_511;
    krnl_JOIN_INNER_TD_511 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_511.setup(tbl_JOIN_LEFTSEMI_TD_6942_output, tbl_Aggregate_TD_7176_output, tbl_JOIN_INNER_TD_511_output, cfg_JOIN_INNER_TD_511_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_6942;
    krnl_JOIN_LEFTSEMI_TD_6942 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_6942.setup(tbl_Project_TD_7526_output, tbl_SerializeFromObject_TD_8557_input, tbl_JOIN_LEFTSEMI_TD_6942_output, cfg_JOIN_LEFTSEMI_TD_6942_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_7176;
    krnl_Aggregate_TD_7176 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_7176.setup(tbl_Project_TD_828_output, tbl_Aggregate_TD_7176_output_preprocess, cfg_Aggregate_TD_7176_cmds, cfg_Aggregate_TD_7176_cmds_out, buftmp_a);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_1993;
    trans_JOIN_INNER_TD_1993.setq(q_h);
    trans_JOIN_INNER_TD_1993.add(&(cfg_JOIN_INNER_TD_1993_cmds));
    transEngine trans_JOIN_INNER_TD_1993_out;
    trans_JOIN_INNER_TD_1993_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_3114;
    trans_JOIN_LEFTSEMI_TD_3114.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_3114.add(&(cfg_JOIN_LEFTSEMI_TD_3114_cmds));
    trans_JOIN_LEFTSEMI_TD_3114.add(&(tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute));
    transEngine trans_JOIN_LEFTSEMI_TD_3114_out;
    trans_JOIN_LEFTSEMI_TD_3114_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_511;
    trans_JOIN_INNER_TD_511.setq(q_h);
    trans_JOIN_INNER_TD_511.add(&(cfg_JOIN_INNER_TD_511_cmds));
    transEngine trans_JOIN_INNER_TD_511_out;
    trans_JOIN_INNER_TD_511_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_6942;
    trans_JOIN_LEFTSEMI_TD_6942.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_6942.add(&(cfg_JOIN_LEFTSEMI_TD_6942_cmds));
    trans_JOIN_LEFTSEMI_TD_6942.add(&(tbl_SerializeFromObject_TD_8557_input));
    q_h.finish();
    transEngine trans_Aggregate_TD_7176;
    trans_Aggregate_TD_7176.setq(q_a);
    trans_Aggregate_TD_7176.add(&(cfg_Aggregate_TD_7176_cmds));
    transEngine trans_Aggregate_TD_7176_out;
    trans_Aggregate_TD_7176_out.setq(q_a);
    q_a.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1993;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1993;
    std::vector<cl::Event> events_JOIN_INNER_TD_1993;
    events_h2d_wr_JOIN_INNER_TD_1993.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1993.resize(1);
    events_JOIN_INNER_TD_1993.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1993;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1993;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_3114;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_3114;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_3114;
    events_h2d_wr_JOIN_LEFTSEMI_TD_3114.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_3114.resize(1);
    events_JOIN_LEFTSEMI_TD_3114.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_3114;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_3114;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_511;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_511;
    std::vector<cl::Event> events_JOIN_INNER_TD_511;
    events_h2d_wr_JOIN_INNER_TD_511.resize(1);
    events_d2h_rd_JOIN_INNER_TD_511.resize(1);
    events_JOIN_INNER_TD_511.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_511;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_511;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_6942;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_6942;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_6942;
    events_h2d_wr_JOIN_LEFTSEMI_TD_6942.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_6942.resize(1);
    events_JOIN_LEFTSEMI_TD_6942.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_6942;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_6942;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_7176;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_7176;
    std::vector<cl::Event> events_Aggregate_TD_7176;
    events_h2d_wr_Aggregate_TD_7176.resize(1);
    events_d2h_rd_Aggregate_TD_7176.resize(1);
    events_Aggregate_TD_7176.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_7176;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_7176;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_393_s, tv_r_Filter_9_393_e;
    gettimeofday(&tv_r_Filter_9_393_s, 0);
    SW_Filter_TD_9199(tbl_SerializeFromObject_TD_10345_input, tbl_Filter_TD_9199_output);
    gettimeofday(&tv_r_Filter_9_393_e, 0);

    struct timeval tv_r_Filter_8_791_s, tv_r_Filter_8_791_e;
    gettimeofday(&tv_r_Filter_8_791_s, 0);
    SW_Filter_TD_863(tbl_SerializeFromObject_TD_9596_input, tbl_Filter_TD_863_output);
    gettimeofday(&tv_r_Filter_8_791_e, 0);

    struct timeval tv_r_Project_8_903_s, tv_r_Project_8_903_e;
    gettimeofday(&tv_r_Project_8_903_s, 0);
    SW_Project_TD_828(tbl_Filter_TD_9199_output, tbl_Project_TD_828_output);
    gettimeofday(&tv_r_Project_8_903_e, 0);

    struct timeval tv_r_Project_7_197_s, tv_r_Project_7_197_e;
    gettimeofday(&tv_r_Project_7_197_s, 0);
    SW_Project_TD_7526(tbl_Filter_TD_863_output, tbl_Project_TD_7526_output);
    gettimeofday(&tv_r_Project_7_197_e, 0);

    struct timeval tv_r_Aggregate_7_990_s, tv_r_Aggregate_7_990_e;
    gettimeofday(&tv_r_Aggregate_7_990_s, 0);
    trans_Aggregate_TD_7176.add(&(tbl_Project_TD_828_output));
    trans_Aggregate_TD_7176.host2dev(0, &(prev_events_grp_Aggregate_TD_7176), &(events_h2d_wr_Aggregate_TD_7176[0]));
    events_grp_Aggregate_TD_7176.push_back(events_h2d_wr_Aggregate_TD_7176[0]);
    krnl_Aggregate_TD_7176.run(0, &(events_grp_Aggregate_TD_7176), &(events_Aggregate_TD_7176[0]));
    
    trans_Aggregate_TD_7176_out.add(&(tbl_Aggregate_TD_7176_output_preprocess));
    trans_Aggregate_TD_7176_out.dev2host(0, &(events_Aggregate_TD_7176), &(events_d2h_rd_Aggregate_TD_7176[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_7176_consolidate(tbl_Aggregate_TD_7176_output_preprocess, tbl_Aggregate_TD_7176_output);
    gettimeofday(&tv_r_Aggregate_7_990_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_6_660_s, tv_r_JOIN_LEFTSEMI_6_660_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_6_660_s, 0);
    trans_JOIN_LEFTSEMI_TD_6942.add(&(tbl_Project_TD_7526_output));
    trans_JOIN_LEFTSEMI_TD_6942.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_6942), &(events_h2d_wr_JOIN_LEFTSEMI_TD_6942[0]));
    events_grp_JOIN_LEFTSEMI_TD_6942.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_6942[0]);
    krnl_JOIN_LEFTSEMI_TD_6942.run(0, &(events_grp_JOIN_LEFTSEMI_TD_6942), &(events_JOIN_LEFTSEMI_TD_6942[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_6_660_e, 0);

    struct timeval tv_r_JOIN_INNER_5_963_s, tv_r_JOIN_INNER_5_963_e;
    gettimeofday(&tv_r_JOIN_INNER_5_963_s, 0);
    prev_events_grp_JOIN_INNER_TD_511.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_6942[0]);
    trans_JOIN_INNER_TD_511.add(&(tbl_Aggregate_TD_7176_output));
    trans_JOIN_INNER_TD_511.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_511), &(events_h2d_wr_JOIN_INNER_TD_511[0]));
    events_grp_JOIN_INNER_TD_511.push_back(events_h2d_wr_JOIN_INNER_TD_511[0]);
    events_grp_JOIN_INNER_TD_511.push_back(events_JOIN_LEFTSEMI_TD_6942[0]);
    krnl_JOIN_INNER_TD_511.run(0, &(events_grp_JOIN_INNER_TD_511), &(events_JOIN_INNER_TD_511[0]));
    
    trans_JOIN_INNER_TD_511_out.add(&(tbl_JOIN_INNER_TD_511_output));
    trans_JOIN_INNER_TD_511_out.dev2host(0, &(events_JOIN_INNER_TD_511), &(events_d2h_rd_JOIN_INNER_TD_511[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_963_e, 0);

    struct timeval tv_r_Project_4_340_s, tv_r_Project_4_340_e;
    gettimeofday(&tv_r_Project_4_340_s, 0);
    SW_Project_TD_4625(tbl_JOIN_INNER_TD_511_output, tbl_Project_TD_4625_output);
    gettimeofday(&tv_r_Project_4_340_e, 0);

    struct timeval tv_r_Filter_3_98_s, tv_r_Filter_3_98_e;
    gettimeofday(&tv_r_Filter_3_98_s, 0);
    SW_Filter_TD_3898(tbl_SerializeFromObject_TD_4765_input, tbl_Filter_TD_3898_output);
    gettimeofday(&tv_r_Filter_3_98_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_3_733_s, tv_r_JOIN_LEFTSEMI_3_733_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_3_733_s, 0);
    trans_JOIN_LEFTSEMI_TD_3114.add(&(tbl_Project_TD_4625_output));
    trans_JOIN_LEFTSEMI_TD_3114.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_3114), &(events_h2d_wr_JOIN_LEFTSEMI_TD_3114[0]));
    events_grp_JOIN_LEFTSEMI_TD_3114.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_3114[0]);
    krnl_JOIN_LEFTSEMI_TD_3114.run(0, &(events_grp_JOIN_LEFTSEMI_TD_3114), &(events_JOIN_LEFTSEMI_TD_3114[0]));
    
    trans_JOIN_LEFTSEMI_TD_3114_out.add(&(tbl_JOIN_LEFTSEMI_TD_3114_output));
    trans_JOIN_LEFTSEMI_TD_3114_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_3114), &(events_d2h_rd_JOIN_LEFTSEMI_TD_3114[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_3_733_e, 0);

    struct timeval tv_r_Project_2_857_s, tv_r_Project_2_857_e;
    gettimeofday(&tv_r_Project_2_857_s, 0);
    SW_Project_TD_2162(tbl_Filter_TD_3898_output, tbl_Project_TD_2162_output);
    gettimeofday(&tv_r_Project_2_857_e, 0);

    struct timeval tv_r_Project_2_310_s, tv_r_Project_2_310_e;
    gettimeofday(&tv_r_Project_2_310_s, 0);
    SW_Project_TD_2607(tbl_JOIN_LEFTSEMI_TD_3114_output, tbl_Project_TD_2607_output);
    gettimeofday(&tv_r_Project_2_310_e, 0);

    struct timeval tv_r_JOIN_INNER_1_10_s, tv_r_JOIN_INNER_1_10_e;
    gettimeofday(&tv_r_JOIN_INNER_1_10_s, 0);
    trans_JOIN_INNER_TD_1993.add(&(tbl_Project_TD_2607_output));
    trans_JOIN_INNER_TD_1993.add(&(tbl_Project_TD_2162_output));
    trans_JOIN_INNER_TD_1993.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1993), &(events_h2d_wr_JOIN_INNER_TD_1993[0]));
    events_grp_JOIN_INNER_TD_1993.push_back(events_h2d_wr_JOIN_INNER_TD_1993[0]);
    krnl_JOIN_INNER_TD_1993.run(0, &(events_grp_JOIN_INNER_TD_1993), &(events_JOIN_INNER_TD_1993[0]));
    
    trans_JOIN_INNER_TD_1993_out.add(&(tbl_JOIN_INNER_TD_1993_output));
    trans_JOIN_INNER_TD_1993_out.dev2host(0, &(events_JOIN_INNER_TD_1993), &(events_d2h_rd_JOIN_INNER_TD_1993[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_10_e, 0);

    struct timeval tv_r_Sort_0_454_s, tv_r_Sort_0_454_e;
    gettimeofday(&tv_r_Sort_0_454_s, 0);
    SW_Sort_TD_0950(tbl_JOIN_INNER_TD_1993_output, tbl_SerializeFromObject_TD_5360_input, tbl_Sort_TD_0950_output);
    gettimeofday(&tv_r_Sort_0_454_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_393_s, &tv_r_Filter_9_393_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10345_input: " << tbl_SerializeFromObject_TD_10345_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_791_s, &tv_r_Filter_8_791_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9596_input: " << tbl_SerializeFromObject_TD_9596_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_903_s, &tv_r_Project_8_903_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9199_output: " << tbl_Filter_TD_9199_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_197_s, &tv_r_Project_7_197_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_863_output: " << tbl_Filter_TD_863_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_990_s, &tv_r_Aggregate_7_990_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_828_output: " << tbl_Project_TD_828_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_6: " << tvdiff(&tv_r_JOIN_LEFTSEMI_6_660_s, &tv_r_JOIN_LEFTSEMI_6_660_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8557_input: " << tbl_SerializeFromObject_TD_8557_input.getNumRow() << " " << "tbl_Project_TD_7526_output: " << tbl_Project_TD_7526_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_963_s, &tv_r_JOIN_INNER_5_963_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_6942_output: " << tbl_JOIN_LEFTSEMI_TD_6942_output.getNumRow() << " " << "tbl_Aggregate_TD_7176_output: " << tbl_Aggregate_TD_7176_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_340_s, &tv_r_Project_4_340_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_511_output: " << tbl_JOIN_INNER_TD_511_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_98_s, &tv_r_Filter_3_98_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4765_input: " << tbl_SerializeFromObject_TD_4765_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_3: " << tvdiff(&tv_r_JOIN_LEFTSEMI_3_733_s, &tv_r_JOIN_LEFTSEMI_3_733_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5360_input_stringRowIDSubstitute.getNumRow() << " " << "tbl_Project_TD_4625_output: " << tbl_Project_TD_4625_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_857_s, &tv_r_Project_2_857_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3898_output: " << tbl_Filter_TD_3898_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_310_s, &tv_r_Project_2_310_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_3114_output: " << tbl_JOIN_LEFTSEMI_TD_3114_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_10_s, &tv_r_JOIN_INNER_1_10_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2607_output: " << tbl_Project_TD_2607_output.getNumRow() << " " << "tbl_Project_TD_2162_output: " << tbl_Project_TD_2162_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_454_s, &tv_r_Sort_0_454_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1993_output: " << tbl_JOIN_INNER_TD_1993_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.2373674 * 1000 << "ms" << std::endl; 
    return 0; 
}
