// number of overlays (w/o fusion): 0 
// number of overlays (w/ fusion): 0 
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
#include "tpcds_read.hpp" 
#include "gqe_api.hpp" 

#include "cfgFunc_q63.hpp" 
#include "q63.hpp" 

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
    std::cout << "NOTE:running query #63\n."; 
    std::cout << "NOTE:running in sf" << scale << " data\n"; 

    int32_t customer_n = 	100000; 
    int32_t customer_address_n = 	50000; 
    int32_t customer_demographics_n = 	1920800; 
    int32_t date_dim_n = 	73049; 
    int32_t household_demographics_n = 	7200; 
    int32_t income_band_n = 	20; 
    int32_t item_n = 	18000; 
    int32_t promotion_n = 	300; 
    int32_t reason_n = 	35; 
    int32_t ship_mode_n = 	20; 
    int32_t store_n = 	12; 
    int32_t time_dim_n = 	86400; 
    int32_t warehouse_n = 	5; 
    int32_t web_site_n = 	30; 
    int32_t web_page_n = 	60; 
    int32_t inventory_n = 	11745000; 
    int32_t store_returns_n = 	300000; 
    int32_t web_sales_n = 	719384; 
    int32_t web_returns_n = 	71763; 
    int32_t call_center_n = 	6; 
    int32_t catalog_page_n = 	11718; 
    int32_t catalog_returns_n = 	144067; 
    int32_t catalog_sales_n = 	1441548; 
    int32_t store_sales_n = 	2880404    ; 
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
    Table tbl_GlobalLimit_TD_0927380_output("tbl_GlobalLimit_TD_0927380_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0927380_output.allocateHost();
    Table tbl_LocalLimit_TD_1229295_output("tbl_LocalLimit_TD_1229295_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1229295_output.allocateHost();
    Table tbl_Sort_TD_2111396_output("tbl_Sort_TD_2111396_output", 6100000, 3, "");
    tbl_Sort_TD_2111396_output.allocateHost();
    Table tbl_Filter_TD_3795578_output("tbl_Filter_TD_3795578_output", 6100000, 3, "");
    tbl_Filter_TD_3795578_output.allocateHost();
    Table tbl_Window_TD_4580910_output("tbl_Window_TD_4580910_output", 6100000, 4, "");
    tbl_Window_TD_4580910_output.allocateHost();
    Table tbl_Aggregate_TD_549036_output_preprocess("tbl_Aggregate_TD_549036_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_549036_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_549036_output("tbl_Aggregate_TD_549036_output", 6100000, 3, "");
    tbl_Aggregate_TD_549036_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6602153_output_preprocess("tbl_JOIN_INNER_TD_6602153_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6602153_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_6602153_output("tbl_JOIN_INNER_TD_6602153_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6602153_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7786548_output("tbl_JOIN_INNER_TD_7786548_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7786548_output.allocateHost();
    Table tbl_Filter_TD_7570431_output("tbl_Filter_TD_7570431_output", 6100000, 1, "");
    tbl_Filter_TD_7570431_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8112617_output("tbl_JOIN_INNER_TD_8112617_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8112617_output.allocateHost();
    Table tbl_Filter_TD_8353447_output("tbl_Filter_TD_8353447_output", 6100000, 2, "");
    tbl_Filter_TD_8353447_output.allocateHost();
    Table tbl_SerializeFromObject_TD_889634_input;
    tbl_SerializeFromObject_TD_889634_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_889634_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_889634_input.allocateHost();
    tbl_SerializeFromObject_TD_889634_input.loadHost();
    Table tbl_Filter_TD_9435581_output("tbl_Filter_TD_9435581_output", 6100000, 2, "");
    tbl_Filter_TD_9435581_output.allocateHost();
    Table tbl_Filter_TD_9683427_output("tbl_Filter_TD_9683427_output", 6100000, 4, "");
    tbl_Filter_TD_9683427_output.allocateHost();
    Table tbl_SerializeFromObject_TD_92441_input;
    tbl_SerializeFromObject_TD_92441_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_92441_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_92441_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_92441_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_92441_input.allocateHost();
    tbl_SerializeFromObject_TD_92441_input.loadHost();
    Table tbl_SerializeFromObject_TD_10937322_input;
    tbl_SerializeFromObject_TD_10937322_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10937322_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10937322_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_10937322_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10937322_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10937322_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10937322_input.allocateHost();
    tbl_SerializeFromObject_TD_10937322_input.loadHost();
    Table tbl_SerializeFromObject_TD_10349140_input;
    tbl_SerializeFromObject_TD_10349140_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10349140_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10349140_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10349140_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10349140_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10349140_input.allocateHost();
    tbl_SerializeFromObject_TD_10349140_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6602153_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_549036_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_6602153_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7786548_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7570431_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8112617_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8353447_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9435581_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9683427_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_549036_cmds;
    cfg_Aggregate_TD_549036_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_549036_gqe_aggr(cfg_Aggregate_TD_549036_cmds.cmd);
    cfg_Aggregate_TD_549036_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_549036_cmds_out;
    cfg_Aggregate_TD_549036_cmds_out.allocateHost();
    cfg_Aggregate_TD_549036_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_6602153_cmds;
    cfg_JOIN_INNER_TD_6602153_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6602153_gqe_join (cfg_JOIN_INNER_TD_6602153_cmds.cmd);
    cfg_JOIN_INNER_TD_6602153_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7786548_cmds;
    cfg_JOIN_INNER_TD_7786548_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7786548_gqe_join (cfg_JOIN_INNER_TD_7786548_cmds.cmd);
    cfg_JOIN_INNER_TD_7786548_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8112617_cmds;
    cfg_JOIN_INNER_TD_8112617_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8112617_gqe_join (cfg_JOIN_INNER_TD_8112617_cmds.cmd);
    cfg_JOIN_INNER_TD_8112617_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_549036;
    krnl_Aggregate_TD_549036 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_549036.setup(tbl_JOIN_INNER_TD_6602153_output, tbl_Aggregate_TD_549036_output_preprocess, cfg_Aggregate_TD_549036_cmds, cfg_Aggregate_TD_549036_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_6602153;
    krnl_JOIN_INNER_TD_6602153 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6602153.setup(tbl_JOIN_INNER_TD_7786548_output, tbl_Filter_TD_7570431_output, tbl_JOIN_INNER_TD_6602153_output_preprocess, cfg_JOIN_INNER_TD_6602153_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7786548;
    krnl_JOIN_INNER_TD_7786548 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7786548.setup(tbl_JOIN_INNER_TD_8112617_output, tbl_Filter_TD_8353447_output, tbl_JOIN_INNER_TD_7786548_output, cfg_JOIN_INNER_TD_7786548_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8112617;
    krnl_JOIN_INNER_TD_8112617 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8112617.setup(tbl_Filter_TD_9435581_output, tbl_Filter_TD_9683427_output, tbl_JOIN_INNER_TD_8112617_output, cfg_JOIN_INNER_TD_8112617_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_549036;
    trans_Aggregate_TD_549036.setq(q_a);
    trans_Aggregate_TD_549036.add(&(cfg_Aggregate_TD_549036_cmds));
    transEngine trans_Aggregate_TD_549036_out;
    trans_Aggregate_TD_549036_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_6602153;
    trans_JOIN_INNER_TD_6602153.setq(q_h);
    trans_JOIN_INNER_TD_6602153.add(&(cfg_JOIN_INNER_TD_6602153_cmds));
    transEngine trans_JOIN_INNER_TD_6602153_out;
    trans_JOIN_INNER_TD_6602153_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7786548;
    trans_JOIN_INNER_TD_7786548.setq(q_h);
    trans_JOIN_INNER_TD_7786548.add(&(cfg_JOIN_INNER_TD_7786548_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8112617;
    trans_JOIN_INNER_TD_8112617.setq(q_h);
    trans_JOIN_INNER_TD_8112617.add(&(cfg_JOIN_INNER_TD_8112617_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_549036;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_549036;
    std::vector<cl::Event> events_Aggregate_TD_549036;
    events_h2d_wr_Aggregate_TD_549036.resize(1);
    events_d2h_rd_Aggregate_TD_549036.resize(1);
    events_Aggregate_TD_549036.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_549036;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_549036;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6602153;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6602153;
    std::vector<cl::Event> events_JOIN_INNER_TD_6602153;
    events_h2d_wr_JOIN_INNER_TD_6602153.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6602153.resize(1);
    events_JOIN_INNER_TD_6602153.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6602153;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6602153;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7786548;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7786548;
    std::vector<cl::Event> events_JOIN_INNER_TD_7786548;
    events_h2d_wr_JOIN_INNER_TD_7786548.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7786548.resize(1);
    events_JOIN_INNER_TD_7786548.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7786548;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7786548;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8112617;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8112617;
    std::vector<cl::Event> events_JOIN_INNER_TD_8112617;
    events_h2d_wr_JOIN_INNER_TD_8112617.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8112617.resize(1);
    events_JOIN_INNER_TD_8112617.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8112617;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8112617;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_733966_s, tv_r_Filter_9_733966_e;
    gettimeofday(&tv_r_Filter_9_733966_s, 0);
    SW_Filter_TD_9683427(tbl_SerializeFromObject_TD_10349140_input, tbl_Filter_TD_9683427_output);
    gettimeofday(&tv_r_Filter_9_733966_e, 0);

    struct timeval tv_r_Filter_9_770952_s, tv_r_Filter_9_770952_e;
    gettimeofday(&tv_r_Filter_9_770952_s, 0);
    SW_Filter_TD_9435581(tbl_SerializeFromObject_TD_10937322_input, tbl_Filter_TD_9435581_output);
    gettimeofday(&tv_r_Filter_9_770952_e, 0);

    struct timeval tv_r_Filter_8_743383_s, tv_r_Filter_8_743383_e;
    gettimeofday(&tv_r_Filter_8_743383_s, 0);
    SW_Filter_TD_8353447(tbl_SerializeFromObject_TD_92441_input, tbl_Filter_TD_8353447_output);
    gettimeofday(&tv_r_Filter_8_743383_e, 0);

    struct timeval tv_r_JOIN_INNER_8_815568_s, tv_r_JOIN_INNER_8_815568_e;
    gettimeofday(&tv_r_JOIN_INNER_8_815568_s, 0);
    trans_JOIN_INNER_TD_8112617.add(&(tbl_Filter_TD_9435581_output));
    trans_JOIN_INNER_TD_8112617.add(&(tbl_Filter_TD_9683427_output));
    trans_JOIN_INNER_TD_8112617.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8112617), &(events_h2d_wr_JOIN_INNER_TD_8112617[0]));
    events_grp_JOIN_INNER_TD_8112617.push_back(events_h2d_wr_JOIN_INNER_TD_8112617[0]);
    krnl_JOIN_INNER_TD_8112617.run(0, &(events_grp_JOIN_INNER_TD_8112617), &(events_JOIN_INNER_TD_8112617[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_815568_e, 0);

    struct timeval tv_r_Filter_7_581402_s, tv_r_Filter_7_581402_e;
    gettimeofday(&tv_r_Filter_7_581402_s, 0);
    SW_Filter_TD_7570431(tbl_SerializeFromObject_TD_889634_input, tbl_Filter_TD_7570431_output);
    gettimeofday(&tv_r_Filter_7_581402_e, 0);

    struct timeval tv_r_JOIN_INNER_7_686880_s, tv_r_JOIN_INNER_7_686880_e;
    gettimeofday(&tv_r_JOIN_INNER_7_686880_s, 0);
    prev_events_grp_JOIN_INNER_TD_7786548.push_back(events_h2d_wr_JOIN_INNER_TD_8112617[0]);
    trans_JOIN_INNER_TD_7786548.add(&(tbl_Filter_TD_8353447_output));
    trans_JOIN_INNER_TD_7786548.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7786548), &(events_h2d_wr_JOIN_INNER_TD_7786548[0]));
    events_grp_JOIN_INNER_TD_7786548.push_back(events_h2d_wr_JOIN_INNER_TD_7786548[0]);
    events_grp_JOIN_INNER_TD_7786548.push_back(events_JOIN_INNER_TD_8112617[0]);
    krnl_JOIN_INNER_TD_7786548.run(0, &(events_grp_JOIN_INNER_TD_7786548), &(events_JOIN_INNER_TD_7786548[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_686880_e, 0);

    struct timeval tv_r_JOIN_INNER_6_263517_s, tv_r_JOIN_INNER_6_263517_e;
    gettimeofday(&tv_r_JOIN_INNER_6_263517_s, 0);
    prev_events_grp_JOIN_INNER_TD_6602153.push_back(events_h2d_wr_JOIN_INNER_TD_7786548[0]);
    trans_JOIN_INNER_TD_6602153.add(&(tbl_Filter_TD_7570431_output));
    trans_JOIN_INNER_TD_6602153.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6602153), &(events_h2d_wr_JOIN_INNER_TD_6602153[0]));
    events_grp_JOIN_INNER_TD_6602153.push_back(events_h2d_wr_JOIN_INNER_TD_6602153[0]);
    events_grp_JOIN_INNER_TD_6602153.push_back(events_JOIN_INNER_TD_7786548[0]);
    krnl_JOIN_INNER_TD_6602153.run(0, &(events_grp_JOIN_INNER_TD_6602153), &(events_JOIN_INNER_TD_6602153[0]));
    
    trans_JOIN_INNER_TD_6602153_out.add(&(tbl_JOIN_INNER_TD_6602153_output_preprocess));
    trans_JOIN_INNER_TD_6602153_out.dev2host(0, &(events_JOIN_INNER_TD_6602153), &(events_d2h_rd_JOIN_INNER_TD_6602153[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_6602153);
    tbl_JOIN_INNER_TD_6602153_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_6602153_output));
    gettimeofday(&tv_r_JOIN_INNER_6_263517_e, 0);

    struct timeval tv_r_Aggregate_5_657783_s, tv_r_Aggregate_5_657783_e;
    gettimeofday(&tv_r_Aggregate_5_657783_s, 0);
    trans_Aggregate_TD_549036.add(&(tbl_JOIN_INNER_TD_6602153_output));
    trans_Aggregate_TD_549036.host2dev(0, &(prev_events_grp_Aggregate_TD_549036), &(events_h2d_wr_Aggregate_TD_549036[0]));
    events_grp_Aggregate_TD_549036.push_back(events_h2d_wr_Aggregate_TD_549036[0]);
    krnl_Aggregate_TD_549036.run(0, &(events_grp_Aggregate_TD_549036), &(events_Aggregate_TD_549036[0]));
    
    trans_Aggregate_TD_549036_out.add(&(tbl_Aggregate_TD_549036_output_preprocess));
    trans_Aggregate_TD_549036_out.dev2host(0, &(events_Aggregate_TD_549036), &(events_d2h_rd_Aggregate_TD_549036[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_549036_consolidate(tbl_Aggregate_TD_549036_output_preprocess, tbl_Aggregate_TD_549036_output);
    gettimeofday(&tv_r_Aggregate_5_657783_e, 0);

    struct timeval tv_r_Window_4_690136_s, tv_r_Window_4_690136_e;
    gettimeofday(&tv_r_Window_4_690136_s, 0);
    SW_Window_TD_4580910(tbl_Aggregate_TD_549036_output, tbl_Window_TD_4580910_output);
    gettimeofday(&tv_r_Window_4_690136_e, 0);

    struct timeval tv_r_Filter_3_716741_s, tv_r_Filter_3_716741_e;
    gettimeofday(&tv_r_Filter_3_716741_s, 0);
    SW_Filter_TD_3795578(tbl_Window_TD_4580910_output, tbl_Filter_TD_3795578_output);
    gettimeofday(&tv_r_Filter_3_716741_e, 0);

    struct timeval tv_r_Sort_2_884023_s, tv_r_Sort_2_884023_e;
    gettimeofday(&tv_r_Sort_2_884023_s, 0);
    SW_Sort_TD_2111396(tbl_Filter_TD_3795578_output, tbl_Sort_TD_2111396_output);
    gettimeofday(&tv_r_Sort_2_884023_e, 0);

    struct timeval tv_r_LocalLimit_1_134727_s, tv_r_LocalLimit_1_134727_e;
    gettimeofday(&tv_r_LocalLimit_1_134727_s, 0);
    SW_LocalLimit_TD_1229295(tbl_Sort_TD_2111396_output, tbl_LocalLimit_TD_1229295_output);
    gettimeofday(&tv_r_LocalLimit_1_134727_e, 0);

    struct timeval tv_r_GlobalLimit_0_755119_s, tv_r_GlobalLimit_0_755119_e;
    gettimeofday(&tv_r_GlobalLimit_0_755119_s, 0);
    SW_GlobalLimit_TD_0927380(tbl_LocalLimit_TD_1229295_output, tbl_GlobalLimit_TD_0927380_output);
    gettimeofday(&tv_r_GlobalLimit_0_755119_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_733966_s, &tv_r_Filter_9_733966_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10349140_input: " << tbl_SerializeFromObject_TD_10349140_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_770952_s, &tv_r_Filter_9_770952_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10937322_input: " << tbl_SerializeFromObject_TD_10937322_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_743383_s, &tv_r_Filter_8_743383_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_92441_input: " << tbl_SerializeFromObject_TD_92441_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_815568_s, &tv_r_JOIN_INNER_8_815568_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9435581_output: " << tbl_Filter_TD_9435581_output.getNumRow() << " " << "tbl_Filter_TD_9683427_output: " << tbl_Filter_TD_9683427_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_581402_s, &tv_r_Filter_7_581402_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_889634_input: " << tbl_SerializeFromObject_TD_889634_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_686880_s, &tv_r_JOIN_INNER_7_686880_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8112617_output: " << tbl_JOIN_INNER_TD_8112617_output.getNumRow() << " " << "tbl_Filter_TD_8353447_output: " << tbl_Filter_TD_8353447_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_263517_s, &tv_r_JOIN_INNER_6_263517_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7786548_output: " << tbl_JOIN_INNER_TD_7786548_output.getNumRow() << " " << "tbl_Filter_TD_7570431_output: " << tbl_Filter_TD_7570431_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_657783_s, &tv_r_Aggregate_5_657783_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6602153_output: " << tbl_JOIN_INNER_TD_6602153_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_690136_s, &tv_r_Window_4_690136_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_549036_output: " << tbl_Aggregate_TD_549036_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_716741_s, &tv_r_Filter_3_716741_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4580910_output: " << tbl_Window_TD_4580910_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_884023_s, &tv_r_Sort_2_884023_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3795578_output: " << tbl_Filter_TD_3795578_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_134727_s, &tv_r_LocalLimit_1_134727_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2111396_output: " << tbl_Sort_TD_2111396_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_755119_s, &tv_r_GlobalLimit_0_755119_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1229295_output: " << tbl_LocalLimit_TD_1229295_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.7216864 * 1000 << "ms" << std::endl; 
    return 0; 
}
