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

#include "cfgFunc_q13.hpp" 
#include "q13.hpp" 

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
    std::cout << "NOTE:running query #13\n."; 
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
    Table tbl_Sort_TD_0908_output("tbl_Sort_TD_0908_output", 6100000, 2, "");
    tbl_Sort_TD_0908_output.allocateHost();
    Table tbl_Aggregate_TD_1766_output_preprocess("tbl_Aggregate_TD_1766_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_1766_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_1766_output("tbl_Aggregate_TD_1766_output", -1, 2, "");
    tbl_Aggregate_TD_1766_output.allocateHost();
    Table tbl_Aggregate_TD_2834_output_preprocess("tbl_Aggregate_TD_2834_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_2834_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_2834_output("tbl_Aggregate_TD_2834_output", -1, 1, "");
    tbl_Aggregate_TD_2834_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3760_output_preprocess("tbl_JOIN_LEFTANTI_TD_3760_output_preprocess", 1531000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3760_output_preprocess.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3760_output("tbl_JOIN_LEFTANTI_TD_3760_output", 1531000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3760_output.allocateHost();
    Table tbl_JOIN_INNER_TD_0925_output("tbl_JOIN_INNER_TD_0925_output", 1480133, 3, "");
    tbl_JOIN_INNER_TD_0925_output.allocateHost();
    Table tbl_Project_TD_4244_output("tbl_Project_TD_4244_output", -1, 1, "");
    tbl_Project_TD_4244_output.allocateHost();
    Table tbl_Project_TD_4244_emptyBufferB("tbl_Project_TD_4244_emptyBufferB", 1, 8, "");
    tbl_Project_TD_4244_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_5876_output("tbl_Filter_TD_5876_output", 6100000, 2, "");
    tbl_Filter_TD_5876_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5220_input;
    tbl_SerializeFromObject_TD_5220_input = Table("customer", customer_n, 1, in_dir);
    tbl_SerializeFromObject_TD_5220_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_5220_input.allocateHost();
    tbl_SerializeFromObject_TD_5220_input.loadHost();
    Table tbl_SerializeFromObject_TD_6562_input;
    tbl_SerializeFromObject_TD_6562_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_6562_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_6562_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_6562_input.addCol("o_comment", TPCH_READ_O_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_6562_input.allocateHost();
    tbl_SerializeFromObject_TD_6562_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_1766_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_LEFTANTI_TD_3760_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_2834_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_2834_output.allocateDevBuffer(context_a, 32);
    tbl_JOIN_LEFTANTI_TD_3760_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_0925_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4244_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4244_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5876_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5220_input.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_1766_cmds;
    cfg_Aggregate_TD_1766_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_1766_gqe_aggr(cfg_Aggregate_TD_1766_cmds.cmd);
    cfg_Aggregate_TD_1766_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_1766_cmds_out;
    cfg_Aggregate_TD_1766_cmds_out.allocateHost();
    cfg_Aggregate_TD_1766_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_2834_cmds;
    cfg_Aggregate_TD_2834_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_2834_gqe_aggr(cfg_Aggregate_TD_2834_cmds.cmd);
    cfg_Aggregate_TD_2834_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_2834_cmds_out;
    cfg_Aggregate_TD_2834_cmds_out.allocateHost();
    cfg_Aggregate_TD_2834_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_LEFTANTI_TD_3760_cmds;
    cfg_JOIN_LEFTANTI_TD_3760_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTANTI_TD_3760_gqe_join (cfg_JOIN_LEFTANTI_TD_3760_cmds.cmd);
    cfg_JOIN_LEFTANTI_TD_3760_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_0925_cmds;
    cfg_JOIN_INNER_TD_0925_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_0925_gqe_join (cfg_JOIN_INNER_TD_0925_cmds.cmd);
    cfg_JOIN_INNER_TD_0925_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_4244_cmds;
    cfg_Project_TD_4244_cmds.allocateHost();
    get_cfg_dat_Project_TD_4244_gqe_join (cfg_Project_TD_4244_cmds.cmd);
    cfg_Project_TD_4244_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_1766;
    krnl_Aggregate_TD_1766 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_1766.setup(tbl_Aggregate_TD_2834_output, tbl_Aggregate_TD_1766_output_preprocess, cfg_Aggregate_TD_1766_cmds, cfg_Aggregate_TD_1766_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_2834;
    krnl_Aggregate_TD_2834 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_2834.setup(tbl_JOIN_LEFTANTI_TD_3760_output, tbl_Aggregate_TD_2834_output_preprocess, cfg_Aggregate_TD_2834_cmds, cfg_Aggregate_TD_2834_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_LEFTANTI_TD_3760;
    krnl_JOIN_LEFTANTI_TD_3760 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTANTI_TD_3760.setup(tbl_SerializeFromObject_TD_5220_input, tbl_JOIN_INNER_TD_0925_output, tbl_JOIN_LEFTANTI_TD_3760_output_preprocess, cfg_JOIN_LEFTANTI_TD_3760_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_0925;
    krnl_JOIN_INNER_TD_0925 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_0925.setup(tbl_Project_TD_4244_output, tbl_Filter_TD_5876_output, tbl_JOIN_INNER_TD_0925_output, cfg_JOIN_INNER_TD_0925_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_4244;
    krnl_Project_TD_4244 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_4244.setup(tbl_SerializeFromObject_TD_5220_input, tbl_Project_TD_4244_emptyBufferB, tbl_Project_TD_4244_output, cfg_Project_TD_4244_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_1766;
    trans_Aggregate_TD_1766.setq(q_a);
    trans_Aggregate_TD_1766.add(&(cfg_Aggregate_TD_1766_cmds));
    transEngine trans_Aggregate_TD_1766_out;
    trans_Aggregate_TD_1766_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_2834;
    trans_Aggregate_TD_2834.setq(q_a);
    trans_Aggregate_TD_2834.add(&(cfg_Aggregate_TD_2834_cmds));
    transEngine trans_Aggregate_TD_2834_out;
    trans_Aggregate_TD_2834_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_LEFTANTI_TD_3760;
    trans_JOIN_LEFTANTI_TD_3760.setq(q_h);
    trans_JOIN_LEFTANTI_TD_3760.add(&(cfg_JOIN_LEFTANTI_TD_3760_cmds));
    trans_JOIN_LEFTANTI_TD_3760.add(&(tbl_SerializeFromObject_TD_5220_input));
    transEngine trans_JOIN_LEFTANTI_TD_3760_out;
    trans_JOIN_LEFTANTI_TD_3760_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_0925;
    trans_JOIN_INNER_TD_0925.setq(q_h);
    trans_JOIN_INNER_TD_0925.add(&(cfg_JOIN_INNER_TD_0925_cmds));
    q_h.finish();
    transEngine trans_Project_TD_4244;
    trans_Project_TD_4244.setq(q_h);
    trans_Project_TD_4244.add(&(cfg_Project_TD_4244_cmds));
    trans_Project_TD_4244.add(&(tbl_SerializeFromObject_TD_5220_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_1766;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_1766;
    std::vector<cl::Event> events_Aggregate_TD_1766;
    events_h2d_wr_Aggregate_TD_1766.resize(1);
    events_d2h_rd_Aggregate_TD_1766.resize(1);
    events_Aggregate_TD_1766.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_1766;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_1766;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_2834;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_2834;
    std::vector<cl::Event> events_Aggregate_TD_2834;
    events_h2d_wr_Aggregate_TD_2834.resize(1);
    events_d2h_rd_Aggregate_TD_2834.resize(1);
    events_Aggregate_TD_2834.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_2834;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_2834;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTANTI_TD_3760;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTANTI_TD_3760;
    std::vector<cl::Event> events_JOIN_LEFTANTI_TD_3760;
    events_h2d_wr_JOIN_LEFTANTI_TD_3760.resize(1);
    events_d2h_rd_JOIN_LEFTANTI_TD_3760.resize(1);
    events_JOIN_LEFTANTI_TD_3760.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTANTI_TD_3760;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTANTI_TD_3760;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_0925;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_0925;
    std::vector<cl::Event> events_JOIN_INNER_TD_0925;
    events_h2d_wr_JOIN_INNER_TD_0925.resize(1);
    events_d2h_rd_JOIN_INNER_TD_0925.resize(1);
    events_JOIN_INNER_TD_0925.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_0925;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_0925;
    std::vector<cl::Event> events_h2d_wr_Project_TD_4244;
    std::vector<cl::Event> events_d2h_rd_Project_TD_4244;
    std::vector<cl::Event> events_Project_TD_4244;
    events_h2d_wr_Project_TD_4244.resize(1);
    events_d2h_rd_Project_TD_4244.resize(1);
    events_Project_TD_4244.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_4244;
    std::vector<cl::Event> prev_events_grp_Project_TD_4244;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_468_s, tv_r_Filter_5_468_e;
    gettimeofday(&tv_r_Filter_5_468_s, 0);
    SW_Filter_TD_5876(tbl_SerializeFromObject_TD_6562_input, tbl_Filter_TD_5876_output);
    gettimeofday(&tv_r_Filter_5_468_e, 0);

    struct timeval tv_r_Project_4_828_s, tv_r_Project_4_828_e;
    gettimeofday(&tv_r_Project_4_828_s, 0);
    trans_Project_TD_4244.host2dev(0, &(prev_events_grp_Project_TD_4244), &(events_h2d_wr_Project_TD_4244[0]));
    events_grp_Project_TD_4244.push_back(events_h2d_wr_Project_TD_4244[0]);
    krnl_Project_TD_4244.run(0, &(events_grp_Project_TD_4244), &(events_Project_TD_4244[0]));
    gettimeofday(&tv_r_Project_4_828_e, 0);

    struct timeval tv_r_JOIN_INNER_0_647_s, tv_r_JOIN_INNER_0_647_e;
    gettimeofday(&tv_r_JOIN_INNER_0_647_s, 0);
    prev_events_grp_JOIN_INNER_TD_0925.push_back(events_h2d_wr_Project_TD_4244[0]);
    trans_JOIN_INNER_TD_0925.add(&(tbl_Filter_TD_5876_output));
    trans_JOIN_INNER_TD_0925.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_0925), &(events_h2d_wr_JOIN_INNER_TD_0925[0]));
    events_grp_JOIN_INNER_TD_0925.push_back(events_h2d_wr_JOIN_INNER_TD_0925[0]);
    events_grp_JOIN_INNER_TD_0925.push_back(events_Project_TD_4244[0]);
    krnl_JOIN_INNER_TD_0925.run(0, &(events_grp_JOIN_INNER_TD_0925), &(events_JOIN_INNER_TD_0925[0]));
    gettimeofday(&tv_r_JOIN_INNER_0_647_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_3_6_s, tv_r_JOIN_LEFTANTI_3_6_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_6_s, 0);
    prev_events_grp_JOIN_LEFTANTI_TD_3760.push_back(events_h2d_wr_JOIN_INNER_TD_0925[0]);
    trans_JOIN_LEFTANTI_TD_3760.host2dev(0, &(prev_events_grp_JOIN_LEFTANTI_TD_3760), &(events_h2d_wr_JOIN_LEFTANTI_TD_3760[0]));
    events_grp_JOIN_LEFTANTI_TD_3760.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_3760[0]);
    events_grp_JOIN_LEFTANTI_TD_3760.push_back(events_JOIN_INNER_TD_0925[0]);
    krnl_JOIN_LEFTANTI_TD_3760.run(0, &(events_grp_JOIN_LEFTANTI_TD_3760), &(events_JOIN_LEFTANTI_TD_3760[0]));
    
    trans_JOIN_LEFTANTI_TD_3760_out.add(&(tbl_JOIN_LEFTANTI_TD_3760_output_preprocess));
    trans_JOIN_LEFTANTI_TD_3760_out.add(&(tbl_JOIN_INNER_TD_0925_output));
    trans_JOIN_LEFTANTI_TD_3760_out.dev2host(0, &(events_JOIN_LEFTANTI_TD_3760), &(events_d2h_rd_JOIN_LEFTANTI_TD_3760[0]));
    q_h.flush();
    q_h.finish();
    SW_JOIN_LEFTANTI_TD_3760_concatenate(tbl_JOIN_LEFTANTI_TD_3760_output_preprocess, tbl_JOIN_INNER_TD_0925_output);
    tbl_JOIN_LEFTANTI_TD_3760_output_preprocess.copyTableData(&(tbl_JOIN_LEFTANTI_TD_3760_output));
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_6_e, 0);

    struct timeval tv_r_Aggregate_2_167_s, tv_r_Aggregate_2_167_e;
    gettimeofday(&tv_r_Aggregate_2_167_s, 0);
    trans_Aggregate_TD_2834.add(&(tbl_JOIN_LEFTANTI_TD_3760_output));
    trans_Aggregate_TD_2834.host2dev(0, &(prev_events_grp_Aggregate_TD_2834), &(events_h2d_wr_Aggregate_TD_2834[0]));
    events_grp_Aggregate_TD_2834.push_back(events_h2d_wr_Aggregate_TD_2834[0]);
    krnl_Aggregate_TD_2834.run(0, &(events_grp_Aggregate_TD_2834), &(events_Aggregate_TD_2834[0]));
    
    trans_Aggregate_TD_2834_out.add(&(tbl_Aggregate_TD_2834_output_preprocess));
    trans_Aggregate_TD_2834_out.dev2host(0, &(events_Aggregate_TD_2834), &(events_d2h_rd_Aggregate_TD_2834[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_2834_consolidate(tbl_Aggregate_TD_2834_output_preprocess, tbl_Aggregate_TD_2834_output);
    gettimeofday(&tv_r_Aggregate_2_167_e, 0);

    struct timeval tv_r_Aggregate_1_484_s, tv_r_Aggregate_1_484_e;
    gettimeofday(&tv_r_Aggregate_1_484_s, 0);
    prev_events_grp_Aggregate_TD_1766.push_back(events_h2d_wr_Aggregate_TD_2834[0]);
    trans_Aggregate_TD_1766.add(&(tbl_Aggregate_TD_2834_output));
    trans_Aggregate_TD_1766.host2dev(0, &(prev_events_grp_Aggregate_TD_1766), &(events_h2d_wr_Aggregate_TD_1766[0]));
    events_grp_Aggregate_TD_1766.push_back(events_h2d_wr_Aggregate_TD_1766[0]);
    events_grp_Aggregate_TD_1766.push_back(events_Aggregate_TD_2834[0]);
    krnl_Aggregate_TD_1766.run(0, &(events_grp_Aggregate_TD_1766), &(events_Aggregate_TD_1766[0]));
    
    trans_Aggregate_TD_1766_out.add(&(tbl_Aggregate_TD_1766_output_preprocess));
    trans_Aggregate_TD_1766_out.dev2host(0, &(events_Aggregate_TD_1766), &(events_d2h_rd_Aggregate_TD_1766[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_1766_consolidate(tbl_Aggregate_TD_1766_output_preprocess, tbl_Aggregate_TD_1766_output);
    gettimeofday(&tv_r_Aggregate_1_484_e, 0);

    struct timeval tv_r_Sort_0_350_s, tv_r_Sort_0_350_e;
    gettimeofday(&tv_r_Sort_0_350_s, 0);
    SW_Sort_TD_0908(tbl_Aggregate_TD_1766_output, tbl_Sort_TD_0908_output);
    gettimeofday(&tv_r_Sort_0_350_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_468_s, &tv_r_Filter_5_468_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6562_input: " << tbl_SerializeFromObject_TD_6562_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_828_s, &tv_r_Project_4_828_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5220_input: " << tbl_SerializeFromObject_TD_5220_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_0: " << tvdiff(&tv_r_JOIN_INNER_0_647_s, &tv_r_JOIN_INNER_0_647_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4244_output: " << tbl_Project_TD_4244_output.getNumRow() << " " << "tbl_Filter_TD_5876_output: " << tbl_Filter_TD_5876_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_3: " << tvdiff(&tv_r_JOIN_LEFTANTI_3_6_s, &tv_r_JOIN_LEFTANTI_3_6_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_0925_output: " << tbl_JOIN_INNER_TD_0925_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_5220_input: " << tbl_SerializeFromObject_TD_5220_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_167_s, &tv_r_Aggregate_2_167_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_3760_output: " << tbl_JOIN_LEFTANTI_TD_3760_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_484_s, &tv_r_Aggregate_1_484_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2834_output: " << tbl_Aggregate_TD_2834_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_350_s, &tv_r_Sort_0_350_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1766_output: " << tbl_Aggregate_TD_1766_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 9.10897 * 1000 << "ms" << std::endl; 
    return 0; 
}
