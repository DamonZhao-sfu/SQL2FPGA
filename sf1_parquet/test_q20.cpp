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
    Table tbl_Sort_TD_0610_output("tbl_Sort_TD_0610_output", 6100000, 2, "");
    tbl_Sort_TD_0610_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1536_output("tbl_JOIN_INNER_TD_1536_output", 210, 2, "");
    tbl_JOIN_INNER_TD_1536_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_31_output("tbl_JOIN_LEFTSEMI_TD_31_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_31_output.allocateHost();
    Table tbl_Filter_TD_3313_output("tbl_Filter_TD_3313_output", 6100000, 1, "");
    tbl_Filter_TD_3313_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute = Table("supplier", supplier_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5734_input;
    tbl_SerializeFromObject_TD_5734_input = Table("supplier", supplier_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5734_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_5734_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_5734_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_5734_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_5734_input.allocateHost();
    tbl_SerializeFromObject_TD_5734_input.loadHost();
    Table tbl_Project_TD_4124_output("tbl_Project_TD_4124_output", -1, 1, "");
    tbl_Project_TD_4124_output.allocateHost();
    Table tbl_Project_TD_4124_emptyBufferB("tbl_Project_TD_4124_emptyBufferB", 1, 8, "");
    tbl_Project_TD_4124_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_4242_input;
    tbl_SerializeFromObject_TD_4242_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4242_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_4242_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_4242_input.allocateHost();
    tbl_SerializeFromObject_TD_4242_input.loadHost();
    Table tbl_JOIN_INNER_TD_5137_output("tbl_JOIN_INNER_TD_5137_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5137_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_6108_output("tbl_JOIN_LEFTSEMI_TD_6108_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_6108_output.allocateHost();
    Table tbl_Aggregate_TD_7239_output_preprocess("tbl_Aggregate_TD_7239_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_7239_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_7239_output("tbl_Aggregate_TD_7239_output", -1, 3, "");
    tbl_Aggregate_TD_7239_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8124_input;
    tbl_SerializeFromObject_TD_8124_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8124_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8124_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8124_input.addCol("ps_availqty", 4);
    tbl_SerializeFromObject_TD_8124_input.allocateHost();
    tbl_SerializeFromObject_TD_8124_input.loadHost();
    Table tbl_Project_TD_7238_output("tbl_Project_TD_7238_output", -1, 1, "");
    tbl_Project_TD_7238_output.allocateHost();
    Table tbl_Project_TD_7238_emptyBufferB("tbl_Project_TD_7238_emptyBufferB", 1, 8, "");
    tbl_Project_TD_7238_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_9610_output("tbl_Filter_TD_9610_output", 6100000, 3, "");
    tbl_Filter_TD_9610_output.allocateHost();
    Table tbl_Filter_TD_850_output("tbl_Filter_TD_850_output", 6100000, 1, "");
    tbl_Filter_TD_850_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10323_input;
    tbl_SerializeFromObject_TD_10323_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_10323_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_10323_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10323_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_10323_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_10323_input.allocateHost();
    tbl_SerializeFromObject_TD_10323_input.loadHost();
    Table tbl_SerializeFromObject_TD_9587_input;
    tbl_SerializeFromObject_TD_9587_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9587_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_9587_input.addCol("p_name", TPCH_READ_P_NAME_LEN+1);
    tbl_SerializeFromObject_TD_9587_input.allocateHost();
    tbl_SerializeFromObject_TD_9587_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_1536_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_31_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3313_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4124_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4124_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5137_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_7239_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Project_TD_7238_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7238_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9610_output.allocateDevBuffer(context_a, 32);
    tbl_Filter_TD_850_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_1536_cmds;
    cfg_JOIN_INNER_TD_1536_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1536_gqe_join (cfg_JOIN_INNER_TD_1536_cmds.cmd);
    cfg_JOIN_INNER_TD_1536_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_4124_cmds;
    cfg_Project_TD_4124_cmds.allocateHost();
    get_cfg_dat_Project_TD_4124_gqe_join (cfg_Project_TD_4124_cmds.cmd);
    cfg_Project_TD_4124_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_7239_cmds;
    cfg_Aggregate_TD_7239_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_7239_gqe_aggr(cfg_Aggregate_TD_7239_cmds.cmd);
    cfg_Aggregate_TD_7239_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_7239_cmds_out;
    cfg_Aggregate_TD_7239_cmds_out.allocateHost();
    cfg_Aggregate_TD_7239_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_Project_TD_7238_cmds;
    cfg_Project_TD_7238_cmds.allocateHost();
    get_cfg_dat_Project_TD_7238_gqe_join (cfg_Project_TD_7238_cmds.cmd);
    cfg_Project_TD_7238_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_1536;
    krnl_JOIN_INNER_TD_1536 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1536.setup(tbl_JOIN_LEFTSEMI_TD_31_output, tbl_Filter_TD_3313_output, tbl_JOIN_INNER_TD_1536_output, cfg_JOIN_INNER_TD_1536_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_4124;
    krnl_Project_TD_4124 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_4124.setup(tbl_JOIN_INNER_TD_5137_output, tbl_Project_TD_4124_emptyBufferB, tbl_Project_TD_4124_output, cfg_Project_TD_4124_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_7239;
    krnl_Aggregate_TD_7239 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_7239.setup(tbl_Filter_TD_9610_output, tbl_Aggregate_TD_7239_output_preprocess, cfg_Aggregate_TD_7239_cmds, cfg_Aggregate_TD_7239_cmds_out, buftmp_a);
    krnlEngine krnl_Project_TD_7238;
    krnl_Project_TD_7238 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_7238.setup(tbl_Filter_TD_850_output, tbl_Project_TD_7238_emptyBufferB, tbl_Project_TD_7238_output, cfg_Project_TD_7238_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_1536;
    trans_JOIN_INNER_TD_1536.setq(q_h);
    trans_JOIN_INNER_TD_1536.add(&(cfg_JOIN_INNER_TD_1536_cmds));
    transEngine trans_JOIN_INNER_TD_1536_out;
    trans_JOIN_INNER_TD_1536_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_4124;
    trans_Project_TD_4124.setq(q_h);
    trans_Project_TD_4124.add(&(cfg_Project_TD_4124_cmds));
    transEngine trans_Project_TD_4124_out;
    trans_Project_TD_4124_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_7239;
    trans_Aggregate_TD_7239.setq(q_a);
    trans_Aggregate_TD_7239.add(&(cfg_Aggregate_TD_7239_cmds));
    transEngine trans_Aggregate_TD_7239_out;
    trans_Aggregate_TD_7239_out.setq(q_a);
    q_a.finish();
    transEngine trans_Project_TD_7238;
    trans_Project_TD_7238.setq(q_h);
    trans_Project_TD_7238.add(&(cfg_Project_TD_7238_cmds));
    transEngine trans_Project_TD_7238_out;
    trans_Project_TD_7238_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1536;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1536;
    std::vector<cl::Event> events_JOIN_INNER_TD_1536;
    events_h2d_wr_JOIN_INNER_TD_1536.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1536.resize(1);
    events_JOIN_INNER_TD_1536.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1536;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1536;
    std::vector<cl::Event> events_h2d_wr_Project_TD_4124;
    std::vector<cl::Event> events_d2h_rd_Project_TD_4124;
    std::vector<cl::Event> events_Project_TD_4124;
    events_h2d_wr_Project_TD_4124.resize(1);
    events_d2h_rd_Project_TD_4124.resize(1);
    events_Project_TD_4124.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_4124;
    std::vector<cl::Event> prev_events_grp_Project_TD_4124;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_7239;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_7239;
    std::vector<cl::Event> events_Aggregate_TD_7239;
    events_h2d_wr_Aggregate_TD_7239.resize(1);
    events_d2h_rd_Aggregate_TD_7239.resize(1);
    events_Aggregate_TD_7239.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_7239;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_7239;
    std::vector<cl::Event> events_h2d_wr_Project_TD_7238;
    std::vector<cl::Event> events_d2h_rd_Project_TD_7238;
    std::vector<cl::Event> events_Project_TD_7238;
    events_h2d_wr_Project_TD_7238.resize(1);
    events_d2h_rd_Project_TD_7238.resize(1);
    events_Project_TD_7238.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_7238;
    std::vector<cl::Event> prev_events_grp_Project_TD_7238;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_652_s, tv_r_Filter_8_652_e;
    gettimeofday(&tv_r_Filter_8_652_s, 0);
    SW_Filter_TD_850(tbl_SerializeFromObject_TD_9587_input, tbl_Filter_TD_850_output);
    gettimeofday(&tv_r_Filter_8_652_e, 0);

    struct timeval tv_r_Filter_9_422_s, tv_r_Filter_9_422_e;
    gettimeofday(&tv_r_Filter_9_422_s, 0);
    SW_Filter_TD_9610(tbl_SerializeFromObject_TD_10323_input, tbl_Filter_TD_9610_output);
    gettimeofday(&tv_r_Filter_9_422_e, 0);

    struct timeval tv_r_Project_7_317_s, tv_r_Project_7_317_e;
    gettimeofday(&tv_r_Project_7_317_s, 0);
    trans_Project_TD_7238.add(&(tbl_Filter_TD_850_output));
    trans_Project_TD_7238.host2dev(0, &(prev_events_grp_Project_TD_7238), &(events_h2d_wr_Project_TD_7238[0]));
    events_grp_Project_TD_7238.push_back(events_h2d_wr_Project_TD_7238[0]);
    krnl_Project_TD_7238.run(0, &(events_grp_Project_TD_7238), &(events_Project_TD_7238[0]));
    
    trans_Project_TD_7238_out.add(&(tbl_Project_TD_7238_output));
    trans_Project_TD_7238_out.dev2host(0, &(events_Project_TD_7238), &(events_d2h_rd_Project_TD_7238[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_7_317_e, 0);

    struct timeval tv_r_Aggregate_7_212_s, tv_r_Aggregate_7_212_e;
    gettimeofday(&tv_r_Aggregate_7_212_s, 0);
    trans_Aggregate_TD_7239.add(&(tbl_Filter_TD_9610_output));
    trans_Aggregate_TD_7239.host2dev(0, &(prev_events_grp_Aggregate_TD_7239), &(events_h2d_wr_Aggregate_TD_7239[0]));
    events_grp_Aggregate_TD_7239.push_back(events_h2d_wr_Aggregate_TD_7239[0]);
    krnl_Aggregate_TD_7239.run(0, &(events_grp_Aggregate_TD_7239), &(events_Aggregate_TD_7239[0]));
    
    trans_Aggregate_TD_7239_out.add(&(tbl_Aggregate_TD_7239_output_preprocess));
    trans_Aggregate_TD_7239_out.dev2host(0, &(events_Aggregate_TD_7239), &(events_d2h_rd_Aggregate_TD_7239[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_7239_consolidate(tbl_Aggregate_TD_7239_output_preprocess, tbl_Aggregate_TD_7239_output);
    gettimeofday(&tv_r_Aggregate_7_212_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_6_794_s, tv_r_JOIN_LEFTSEMI_6_794_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_6_794_s, 0);
    SW_JOIN_LEFTSEMI_TD_6108(tbl_SerializeFromObject_TD_8124_input, tbl_Project_TD_7238_output, tbl_JOIN_LEFTSEMI_TD_6108_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_6_794_e, 0);

    struct timeval tv_r_JOIN_INNER_5_916_s, tv_r_JOIN_INNER_5_916_e;
    gettimeofday(&tv_r_JOIN_INNER_5_916_s, 0);
    SW_JOIN_INNER_TD_5137(tbl_JOIN_LEFTSEMI_TD_6108_output, tbl_Aggregate_TD_7239_output, tbl_JOIN_INNER_TD_5137_output);
    gettimeofday(&tv_r_JOIN_INNER_5_916_e, 0);

    struct timeval tv_r_Project_4_163_s, tv_r_Project_4_163_e;
    gettimeofday(&tv_r_Project_4_163_s, 0);
    trans_Project_TD_4124.add(&(tbl_JOIN_INNER_TD_5137_output));
    trans_Project_TD_4124.host2dev(0, &(prev_events_grp_Project_TD_4124), &(events_h2d_wr_Project_TD_4124[0]));
    events_grp_Project_TD_4124.push_back(events_h2d_wr_Project_TD_4124[0]);
    krnl_Project_TD_4124.run(0, &(events_grp_Project_TD_4124), &(events_Project_TD_4124[0]));
    
    trans_Project_TD_4124_out.add(&(tbl_Project_TD_4124_output));
    trans_Project_TD_4124_out.dev2host(0, &(events_Project_TD_4124), &(events_d2h_rd_Project_TD_4124[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_4_163_e, 0);

    struct timeval tv_r_Filter_3_625_s, tv_r_Filter_3_625_e;
    gettimeofday(&tv_r_Filter_3_625_s, 0);
    SW_Filter_TD_3313(tbl_SerializeFromObject_TD_4242_input, tbl_Filter_TD_3313_output);
    gettimeofday(&tv_r_Filter_3_625_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_3_931_s, tv_r_JOIN_LEFTSEMI_3_931_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_3_931_s, 0);
    SW_JOIN_LEFTSEMI_TD_31(tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute, tbl_Project_TD_4124_output, tbl_JOIN_LEFTSEMI_TD_31_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_3_931_e, 0);

    struct timeval tv_r_JOIN_INNER_1_946_s, tv_r_JOIN_INNER_1_946_e;
    gettimeofday(&tv_r_JOIN_INNER_1_946_s, 0);
    trans_JOIN_INNER_TD_1536.add(&(tbl_JOIN_LEFTSEMI_TD_31_output));
    trans_JOIN_INNER_TD_1536.add(&(tbl_Filter_TD_3313_output));
    trans_JOIN_INNER_TD_1536.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1536), &(events_h2d_wr_JOIN_INNER_TD_1536[0]));
    events_grp_JOIN_INNER_TD_1536.push_back(events_h2d_wr_JOIN_INNER_TD_1536[0]);
    krnl_JOIN_INNER_TD_1536.run(0, &(events_grp_JOIN_INNER_TD_1536), &(events_JOIN_INNER_TD_1536[0]));
    
    trans_JOIN_INNER_TD_1536_out.add(&(tbl_JOIN_INNER_TD_1536_output));
    trans_JOIN_INNER_TD_1536_out.dev2host(0, &(events_JOIN_INNER_TD_1536), &(events_d2h_rd_JOIN_INNER_TD_1536[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_946_e, 0);

    struct timeval tv_r_Sort_0_618_s, tv_r_Sort_0_618_e;
    gettimeofday(&tv_r_Sort_0_618_s, 0);
    SW_Sort_TD_0610(tbl_JOIN_INNER_TD_1536_output, tbl_SerializeFromObject_TD_5734_input, tbl_Sort_TD_0610_output);
    gettimeofday(&tv_r_Sort_0_618_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_652_s, &tv_r_Filter_8_652_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9587_input: " << tbl_SerializeFromObject_TD_9587_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_422_s, &tv_r_Filter_9_422_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10323_input: " << tbl_SerializeFromObject_TD_10323_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_317_s, &tv_r_Project_7_317_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_850_output: " << tbl_Filter_TD_850_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_212_s, &tv_r_Aggregate_7_212_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9610_output: " << tbl_Filter_TD_9610_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_6: " << tvdiff(&tv_r_JOIN_LEFTSEMI_6_794_s, &tv_r_JOIN_LEFTSEMI_6_794_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8124_input: " << tbl_SerializeFromObject_TD_8124_input.getNumRow() << " " << "tbl_Project_TD_7238_output: " << tbl_Project_TD_7238_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_916_s, &tv_r_JOIN_INNER_5_916_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_6108_output: " << tbl_JOIN_LEFTSEMI_TD_6108_output.getNumRow() << " " << "tbl_Aggregate_TD_7239_output: " << tbl_Aggregate_TD_7239_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_163_s, &tv_r_Project_4_163_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5137_output: " << tbl_JOIN_INNER_TD_5137_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_625_s, &tv_r_Filter_3_625_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4242_input: " << tbl_SerializeFromObject_TD_4242_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_3: " << tvdiff(&tv_r_JOIN_LEFTSEMI_3_931_s, &tv_r_JOIN_LEFTSEMI_3_931_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5734_input_stringRowIDSubstitute.getNumRow() << " " << "tbl_Project_TD_4124_output: " << tbl_Project_TD_4124_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_946_s, &tv_r_JOIN_INNER_1_946_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_31_output: " << tbl_JOIN_LEFTSEMI_TD_31_output.getNumRow() << " " << "tbl_Filter_TD_3313_output: " << tbl_Filter_TD_3313_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_618_s, &tv_r_Sort_0_618_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1536_output: " << tbl_JOIN_INNER_TD_1536_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.9400585 * 1000 << "ms" << std::endl; 
    return 0; 
}
