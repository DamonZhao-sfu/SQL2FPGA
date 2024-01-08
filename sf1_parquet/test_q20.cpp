// number of overlays (w/o fusion): 7 
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
    Table tbl_Sort_TD_0168_output("tbl_Sort_TD_0168_output", 6100000, 2, "");
    tbl_Sort_TD_0168_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1270_output("tbl_JOIN_INNER_TD_1270_output", 210, 2, "");
    tbl_JOIN_INNER_TD_1270_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_3387_output("tbl_JOIN_LEFTSEMI_TD_3387_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_3387_output.allocateHost();
    Table tbl_Filter_TD_3283_output("tbl_Filter_TD_3283_output", 6100000, 1, "");
    tbl_Filter_TD_3283_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute = Table("supplier", supplier_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5541_input;
    tbl_SerializeFromObject_TD_5541_input = Table("supplier", supplier_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5541_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_5541_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_5541_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_5541_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_5541_input.allocateHost();
    tbl_SerializeFromObject_TD_5541_input.loadHost();
    Table tbl_Project_TD_476_output("tbl_Project_TD_476_output", -1, 1, "");
    tbl_Project_TD_476_output.allocateHost();
    Table tbl_Project_TD_476_emptyBufferB("tbl_Project_TD_476_emptyBufferB", 1, 8, "");
    tbl_Project_TD_476_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_4857_input;
    tbl_SerializeFromObject_TD_4857_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4857_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_4857_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_4857_input.allocateHost();
    tbl_SerializeFromObject_TD_4857_input.loadHost();
    Table tbl_JOIN_INNER_TD_5882_output("tbl_JOIN_INNER_TD_5882_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5882_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_6766_output("tbl_JOIN_LEFTSEMI_TD_6766_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_6766_output.allocateHost();
    Table tbl_Aggregate_TD_7618_output_preprocess("tbl_Aggregate_TD_7618_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_7618_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_7618_output("tbl_Aggregate_TD_7618_output", -1, 3, "");
    tbl_Aggregate_TD_7618_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8734_input;
    tbl_SerializeFromObject_TD_8734_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8734_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8734_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8734_input.addCol("ps_availqty", 4);
    tbl_SerializeFromObject_TD_8734_input.allocateHost();
    tbl_SerializeFromObject_TD_8734_input.loadHost();
    Table tbl_Project_TD_7165_output("tbl_Project_TD_7165_output", -1, 1, "");
    tbl_Project_TD_7165_output.allocateHost();
    Table tbl_Project_TD_7165_emptyBufferB("tbl_Project_TD_7165_emptyBufferB", 1, 8, "");
    tbl_Project_TD_7165_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_992_output("tbl_Filter_TD_992_output", 6100000, 3, "");
    tbl_Filter_TD_992_output.allocateHost();
    Table tbl_Filter_TD_8519_output("tbl_Filter_TD_8519_output", 6100000, 1, "");
    tbl_Filter_TD_8519_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1073_input;
    tbl_SerializeFromObject_TD_1073_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_1073_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_1073_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_1073_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_1073_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_1073_input.allocateHost();
    tbl_SerializeFromObject_TD_1073_input.loadHost();
    Table tbl_SerializeFromObject_TD_9919_input;
    tbl_SerializeFromObject_TD_9919_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9919_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_9919_input.addCol("p_name", TPCH_READ_P_NAME_LEN+1);
    tbl_SerializeFromObject_TD_9919_input.allocateHost();
    tbl_SerializeFromObject_TD_9919_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_1270_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_3387_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3283_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_476_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_476_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5882_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_7618_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Project_TD_7165_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7165_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_992_output.allocateDevBuffer(context_a, 32);
    tbl_Filter_TD_8519_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_1270_cmds;
    cfg_JOIN_INNER_TD_1270_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1270_gqe_join (cfg_JOIN_INNER_TD_1270_cmds.cmd);
    cfg_JOIN_INNER_TD_1270_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_476_cmds;
    cfg_Project_TD_476_cmds.allocateHost();
    get_cfg_dat_Project_TD_476_gqe_join (cfg_Project_TD_476_cmds.cmd);
    cfg_Project_TD_476_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_7618_cmds;
    cfg_Aggregate_TD_7618_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_7618_gqe_aggr(cfg_Aggregate_TD_7618_cmds.cmd);
    cfg_Aggregate_TD_7618_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_7618_cmds_out;
    cfg_Aggregate_TD_7618_cmds_out.allocateHost();
    cfg_Aggregate_TD_7618_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_Project_TD_7165_cmds;
    cfg_Project_TD_7165_cmds.allocateHost();
    get_cfg_dat_Project_TD_7165_gqe_join (cfg_Project_TD_7165_cmds.cmd);
    cfg_Project_TD_7165_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_1270;
    krnl_JOIN_INNER_TD_1270 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1270.setup(tbl_JOIN_LEFTSEMI_TD_3387_output, tbl_Filter_TD_3283_output, tbl_JOIN_INNER_TD_1270_output, cfg_JOIN_INNER_TD_1270_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_476;
    krnl_Project_TD_476 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_476.setup(tbl_JOIN_INNER_TD_5882_output, tbl_Project_TD_476_emptyBufferB, tbl_Project_TD_476_output, cfg_Project_TD_476_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_7618;
    krnl_Aggregate_TD_7618 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_7618.setup(tbl_Filter_TD_992_output, tbl_Aggregate_TD_7618_output_preprocess, cfg_Aggregate_TD_7618_cmds, cfg_Aggregate_TD_7618_cmds_out, buftmp_a);
    krnlEngine krnl_Project_TD_7165;
    krnl_Project_TD_7165 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_7165.setup(tbl_Filter_TD_8519_output, tbl_Project_TD_7165_emptyBufferB, tbl_Project_TD_7165_output, cfg_Project_TD_7165_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_1270;
    trans_JOIN_INNER_TD_1270.setq(q_h);
    trans_JOIN_INNER_TD_1270.add(&(cfg_JOIN_INNER_TD_1270_cmds));
    transEngine trans_JOIN_INNER_TD_1270_out;
    trans_JOIN_INNER_TD_1270_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_476;
    trans_Project_TD_476.setq(q_h);
    trans_Project_TD_476.add(&(cfg_Project_TD_476_cmds));
    transEngine trans_Project_TD_476_out;
    trans_Project_TD_476_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_7618;
    trans_Aggregate_TD_7618.setq(q_a);
    trans_Aggregate_TD_7618.add(&(cfg_Aggregate_TD_7618_cmds));
    transEngine trans_Aggregate_TD_7618_out;
    trans_Aggregate_TD_7618_out.setq(q_a);
    q_a.finish();
    transEngine trans_Project_TD_7165;
    trans_Project_TD_7165.setq(q_h);
    trans_Project_TD_7165.add(&(cfg_Project_TD_7165_cmds));
    transEngine trans_Project_TD_7165_out;
    trans_Project_TD_7165_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1270;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1270;
    std::vector<cl::Event> events_JOIN_INNER_TD_1270;
    events_h2d_wr_JOIN_INNER_TD_1270.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1270.resize(1);
    events_JOIN_INNER_TD_1270.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1270;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1270;
    std::vector<cl::Event> events_h2d_wr_Project_TD_476;
    std::vector<cl::Event> events_d2h_rd_Project_TD_476;
    std::vector<cl::Event> events_Project_TD_476;
    events_h2d_wr_Project_TD_476.resize(1);
    events_d2h_rd_Project_TD_476.resize(1);
    events_Project_TD_476.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_476;
    std::vector<cl::Event> prev_events_grp_Project_TD_476;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_7618;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_7618;
    std::vector<cl::Event> events_Aggregate_TD_7618;
    events_h2d_wr_Aggregate_TD_7618.resize(1);
    events_d2h_rd_Aggregate_TD_7618.resize(1);
    events_Aggregate_TD_7618.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_7618;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_7618;
    std::vector<cl::Event> events_h2d_wr_Project_TD_7165;
    std::vector<cl::Event> events_d2h_rd_Project_TD_7165;
    std::vector<cl::Event> events_Project_TD_7165;
    events_h2d_wr_Project_TD_7165.resize(1);
    events_d2h_rd_Project_TD_7165.resize(1);
    events_Project_TD_7165.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_7165;
    std::vector<cl::Event> prev_events_grp_Project_TD_7165;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_683_s, tv_r_Filter_8_683_e;
    gettimeofday(&tv_r_Filter_8_683_s, 0);
    SW_Filter_TD_8519(tbl_SerializeFromObject_TD_9919_input, tbl_Filter_TD_8519_output);
    gettimeofday(&tv_r_Filter_8_683_e, 0);

    struct timeval tv_r_Filter_9_877_s, tv_r_Filter_9_877_e;
    gettimeofday(&tv_r_Filter_9_877_s, 0);
    SW_Filter_TD_992(tbl_SerializeFromObject_TD_1073_input, tbl_Filter_TD_992_output);
    gettimeofday(&tv_r_Filter_9_877_e, 0);

    struct timeval tv_r_Project_7_576_s, tv_r_Project_7_576_e;
    gettimeofday(&tv_r_Project_7_576_s, 0);
    trans_Project_TD_7165.add(&(tbl_Filter_TD_8519_output));
    trans_Project_TD_7165.host2dev(0, &(prev_events_grp_Project_TD_7165), &(events_h2d_wr_Project_TD_7165[0]));
    events_grp_Project_TD_7165.push_back(events_h2d_wr_Project_TD_7165[0]);
    krnl_Project_TD_7165.run(0, &(events_grp_Project_TD_7165), &(events_Project_TD_7165[0]));
    
    trans_Project_TD_7165_out.add(&(tbl_Project_TD_7165_output));
    trans_Project_TD_7165_out.dev2host(0, &(events_Project_TD_7165), &(events_d2h_rd_Project_TD_7165[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_7_576_e, 0);

    struct timeval tv_r_Aggregate_7_399_s, tv_r_Aggregate_7_399_e;
    gettimeofday(&tv_r_Aggregate_7_399_s, 0);
    trans_Aggregate_TD_7618.add(&(tbl_Filter_TD_992_output));
    trans_Aggregate_TD_7618.host2dev(0, &(prev_events_grp_Aggregate_TD_7618), &(events_h2d_wr_Aggregate_TD_7618[0]));
    events_grp_Aggregate_TD_7618.push_back(events_h2d_wr_Aggregate_TD_7618[0]);
    krnl_Aggregate_TD_7618.run(0, &(events_grp_Aggregate_TD_7618), &(events_Aggregate_TD_7618[0]));
    
    trans_Aggregate_TD_7618_out.add(&(tbl_Aggregate_TD_7618_output_preprocess));
    trans_Aggregate_TD_7618_out.dev2host(0, &(events_Aggregate_TD_7618), &(events_d2h_rd_Aggregate_TD_7618[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_7618_consolidate(tbl_Aggregate_TD_7618_output_preprocess, tbl_Aggregate_TD_7618_output);
    gettimeofday(&tv_r_Aggregate_7_399_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_6_508_s, tv_r_JOIN_LEFTSEMI_6_508_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_6_508_s, 0);
    SW_JOIN_LEFTSEMI_TD_6766(tbl_SerializeFromObject_TD_8734_input, tbl_Project_TD_7165_output, tbl_JOIN_LEFTSEMI_TD_6766_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_6_508_e, 0);

    struct timeval tv_r_JOIN_INNER_5_544_s, tv_r_JOIN_INNER_5_544_e;
    gettimeofday(&tv_r_JOIN_INNER_5_544_s, 0);
    SW_JOIN_INNER_TD_5882(tbl_JOIN_LEFTSEMI_TD_6766_output, tbl_Aggregate_TD_7618_output, tbl_JOIN_INNER_TD_5882_output);
    gettimeofday(&tv_r_JOIN_INNER_5_544_e, 0);

    struct timeval tv_r_Project_4_520_s, tv_r_Project_4_520_e;
    gettimeofday(&tv_r_Project_4_520_s, 0);
    trans_Project_TD_476.add(&(tbl_JOIN_INNER_TD_5882_output));
    trans_Project_TD_476.host2dev(0, &(prev_events_grp_Project_TD_476), &(events_h2d_wr_Project_TD_476[0]));
    events_grp_Project_TD_476.push_back(events_h2d_wr_Project_TD_476[0]);
    krnl_Project_TD_476.run(0, &(events_grp_Project_TD_476), &(events_Project_TD_476[0]));
    
    trans_Project_TD_476_out.add(&(tbl_Project_TD_476_output));
    trans_Project_TD_476_out.dev2host(0, &(events_Project_TD_476), &(events_d2h_rd_Project_TD_476[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_4_520_e, 0);

    struct timeval tv_r_Filter_3_21_s, tv_r_Filter_3_21_e;
    gettimeofday(&tv_r_Filter_3_21_s, 0);
    SW_Filter_TD_3283(tbl_SerializeFromObject_TD_4857_input, tbl_Filter_TD_3283_output);
    gettimeofday(&tv_r_Filter_3_21_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_3_760_s, tv_r_JOIN_LEFTSEMI_3_760_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_3_760_s, 0);
    SW_JOIN_LEFTSEMI_TD_3387(tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute, tbl_Project_TD_476_output, tbl_JOIN_LEFTSEMI_TD_3387_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_3_760_e, 0);

    struct timeval tv_r_JOIN_INNER_1_41_s, tv_r_JOIN_INNER_1_41_e;
    gettimeofday(&tv_r_JOIN_INNER_1_41_s, 0);
    trans_JOIN_INNER_TD_1270.add(&(tbl_JOIN_LEFTSEMI_TD_3387_output));
    trans_JOIN_INNER_TD_1270.add(&(tbl_Filter_TD_3283_output));
    trans_JOIN_INNER_TD_1270.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1270), &(events_h2d_wr_JOIN_INNER_TD_1270[0]));
    events_grp_JOIN_INNER_TD_1270.push_back(events_h2d_wr_JOIN_INNER_TD_1270[0]);
    krnl_JOIN_INNER_TD_1270.run(0, &(events_grp_JOIN_INNER_TD_1270), &(events_JOIN_INNER_TD_1270[0]));
    
    trans_JOIN_INNER_TD_1270_out.add(&(tbl_JOIN_INNER_TD_1270_output));
    trans_JOIN_INNER_TD_1270_out.dev2host(0, &(events_JOIN_INNER_TD_1270), &(events_d2h_rd_JOIN_INNER_TD_1270[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_41_e, 0);

    struct timeval tv_r_Sort_0_607_s, tv_r_Sort_0_607_e;
    gettimeofday(&tv_r_Sort_0_607_s, 0);
    SW_Sort_TD_0168(tbl_JOIN_INNER_TD_1270_output, tbl_SerializeFromObject_TD_5541_input, tbl_Sort_TD_0168_output);
    gettimeofday(&tv_r_Sort_0_607_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_683_s, &tv_r_Filter_8_683_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9919_input: " << tbl_SerializeFromObject_TD_9919_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_877_s, &tv_r_Filter_9_877_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1073_input: " << tbl_SerializeFromObject_TD_1073_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_576_s, &tv_r_Project_7_576_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8519_output: " << tbl_Filter_TD_8519_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_399_s, &tv_r_Aggregate_7_399_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_992_output: " << tbl_Filter_TD_992_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_6: " << tvdiff(&tv_r_JOIN_LEFTSEMI_6_508_s, &tv_r_JOIN_LEFTSEMI_6_508_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8734_input: " << tbl_SerializeFromObject_TD_8734_input.getNumRow() << " " << "tbl_Project_TD_7165_output: " << tbl_Project_TD_7165_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_544_s, &tv_r_JOIN_INNER_5_544_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_6766_output: " << tbl_JOIN_LEFTSEMI_TD_6766_output.getNumRow() << " " << "tbl_Aggregate_TD_7618_output: " << tbl_Aggregate_TD_7618_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_520_s, &tv_r_Project_4_520_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5882_output: " << tbl_JOIN_INNER_TD_5882_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_21_s, &tv_r_Filter_3_21_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4857_input: " << tbl_SerializeFromObject_TD_4857_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_3: " << tvdiff(&tv_r_JOIN_LEFTSEMI_3_760_s, &tv_r_JOIN_LEFTSEMI_3_760_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.getNumRow() << " " << "tbl_Project_TD_476_output: " << tbl_Project_TD_476_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_41_s, &tv_r_JOIN_INNER_1_41_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_3387_output: " << tbl_JOIN_LEFTSEMI_TD_3387_output.getNumRow() << " " << "tbl_Filter_TD_3283_output: " << tbl_Filter_TD_3283_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_607_s, &tv_r_Sort_0_607_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1270_output: " << tbl_JOIN_INNER_TD_1270_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.7704415 * 1000 << "ms" << std::endl; 
    return 0; 
}
