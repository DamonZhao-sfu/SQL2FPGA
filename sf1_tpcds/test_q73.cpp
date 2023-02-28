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

#include "cfgFunc_q73.hpp" 
#include "q73.hpp" 

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
    std::cout << "NOTE:running query #73\n."; 
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
    Table tbl_Sort_TD_0550489_output("tbl_Sort_TD_0550489_output", 6100000, 6, "");
    tbl_Sort_TD_0550489_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1280015_output("tbl_JOIN_INNER_TD_1280015_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_1280015_output.allocateHost();
    Table tbl_Filter_TD_2583626_output("tbl_Filter_TD_2583626_output", 6100000, 3, "");
    tbl_Filter_TD_2583626_output.allocateHost();
    Table tbl_Filter_TD_2844958_output("tbl_Filter_TD_2844958_output", 6100000, 5, "");
    tbl_Filter_TD_2844958_output.allocateHost();
    Table tbl_Aggregate_TD_3120515_output_preprocess("tbl_Aggregate_TD_3120515_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_3120515_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_3120515_output("tbl_Aggregate_TD_3120515_output", 6100000, 3, "");
    tbl_Aggregate_TD_3120515_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3232916_input;
    tbl_SerializeFromObject_TD_3232916_input = Table("customer", customer_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_3232916_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_3232916_input.addCol("c_salutation", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3232916_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3232916_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3232916_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3232916_input.allocateHost();
    tbl_SerializeFromObject_TD_3232916_input.loadHost();
    Table tbl_JOIN_INNER_TD_4819396_output_preprocess("tbl_JOIN_INNER_TD_4819396_output_preprocess", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4819396_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_4819396_output("tbl_JOIN_INNER_TD_4819396_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4819396_output.allocateHost();
    Table tbl_JOIN_INNER_TD_587454_output("tbl_JOIN_INNER_TD_587454_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_587454_output.allocateHost();
    Table tbl_Filter_TD_5303682_output("tbl_Filter_TD_5303682_output", 6100000, 1, "");
    tbl_Filter_TD_5303682_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6703783_output("tbl_JOIN_INNER_TD_6703783_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6703783_output.allocateHost();
    Table tbl_Filter_TD_6840525_output("tbl_Filter_TD_6840525_output", 6100000, 1, "");
    tbl_Filter_TD_6840525_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6431309_input;
    tbl_SerializeFromObject_TD_6431309_input = Table("household_demographics", household_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6431309_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_6431309_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_6431309_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_6431309_input.addCol("hd_buy_potential", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6431309_input.allocateHost();
    tbl_SerializeFromObject_TD_6431309_input.loadHost();
    Table tbl_Filter_TD_723289_output("tbl_Filter_TD_723289_output", 6100000, 5, "");
    tbl_Filter_TD_723289_output.allocateHost();
    Table tbl_Filter_TD_7226318_output("tbl_Filter_TD_7226318_output", 6100000, 1, "");
    tbl_Filter_TD_7226318_output.allocateHost();
    Table tbl_SerializeFromObject_TD_794515_input;
    tbl_SerializeFromObject_TD_794515_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_794515_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_794515_input.addCol("s_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_794515_input.allocateHost();
    tbl_SerializeFromObject_TD_794515_input.loadHost();
    Table tbl_SerializeFromObject_TD_8756295_input;
    tbl_SerializeFromObject_TD_8756295_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8756295_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8756295_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_8756295_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_8756295_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8756295_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_8756295_input.allocateHost();
    tbl_SerializeFromObject_TD_8756295_input.loadHost();
    Table tbl_SerializeFromObject_TD_8929291_input;
    tbl_SerializeFromObject_TD_8929291_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8929291_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8929291_input.addCol("d_dom", 4);
    tbl_SerializeFromObject_TD_8929291_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8929291_input.allocateHost();
    tbl_SerializeFromObject_TD_8929291_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4819396_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_3120515_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_4819396_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_587454_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5303682_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6703783_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6840525_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_723289_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7226318_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_3120515_cmds;
    cfg_Aggregate_TD_3120515_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_3120515_gqe_aggr(cfg_Aggregate_TD_3120515_cmds.cmd);
    cfg_Aggregate_TD_3120515_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_3120515_cmds_out;
    cfg_Aggregate_TD_3120515_cmds_out.allocateHost();
    cfg_Aggregate_TD_3120515_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_4819396_cmds;
    cfg_JOIN_INNER_TD_4819396_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4819396_gqe_join (cfg_JOIN_INNER_TD_4819396_cmds.cmd);
    cfg_JOIN_INNER_TD_4819396_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_587454_cmds;
    cfg_JOIN_INNER_TD_587454_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_587454_gqe_join (cfg_JOIN_INNER_TD_587454_cmds.cmd);
    cfg_JOIN_INNER_TD_587454_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6703783_cmds;
    cfg_JOIN_INNER_TD_6703783_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6703783_gqe_join (cfg_JOIN_INNER_TD_6703783_cmds.cmd);
    cfg_JOIN_INNER_TD_6703783_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_3120515;
    krnl_Aggregate_TD_3120515 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_3120515.setup(tbl_JOIN_INNER_TD_4819396_output, tbl_Aggregate_TD_3120515_output_preprocess, cfg_Aggregate_TD_3120515_cmds, cfg_Aggregate_TD_3120515_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_4819396;
    krnl_JOIN_INNER_TD_4819396 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4819396.setup(tbl_JOIN_INNER_TD_587454_output, tbl_Filter_TD_5303682_output, tbl_JOIN_INNER_TD_4819396_output_preprocess, cfg_JOIN_INNER_TD_4819396_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_587454;
    krnl_JOIN_INNER_TD_587454 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_587454.setup(tbl_JOIN_INNER_TD_6703783_output, tbl_Filter_TD_6840525_output, tbl_JOIN_INNER_TD_587454_output, cfg_JOIN_INNER_TD_587454_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6703783;
    krnl_JOIN_INNER_TD_6703783 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6703783.setup(tbl_Filter_TD_723289_output, tbl_Filter_TD_7226318_output, tbl_JOIN_INNER_TD_6703783_output, cfg_JOIN_INNER_TD_6703783_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_3120515;
    trans_Aggregate_TD_3120515.setq(q_a);
    trans_Aggregate_TD_3120515.add(&(cfg_Aggregate_TD_3120515_cmds));
    transEngine trans_Aggregate_TD_3120515_out;
    trans_Aggregate_TD_3120515_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_4819396;
    trans_JOIN_INNER_TD_4819396.setq(q_h);
    trans_JOIN_INNER_TD_4819396.add(&(cfg_JOIN_INNER_TD_4819396_cmds));
    transEngine trans_JOIN_INNER_TD_4819396_out;
    trans_JOIN_INNER_TD_4819396_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_587454;
    trans_JOIN_INNER_TD_587454.setq(q_h);
    trans_JOIN_INNER_TD_587454.add(&(cfg_JOIN_INNER_TD_587454_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6703783;
    trans_JOIN_INNER_TD_6703783.setq(q_h);
    trans_JOIN_INNER_TD_6703783.add(&(cfg_JOIN_INNER_TD_6703783_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_3120515;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_3120515;
    std::vector<cl::Event> events_Aggregate_TD_3120515;
    events_h2d_wr_Aggregate_TD_3120515.resize(1);
    events_d2h_rd_Aggregate_TD_3120515.resize(1);
    events_Aggregate_TD_3120515.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_3120515;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_3120515;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4819396;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4819396;
    std::vector<cl::Event> events_JOIN_INNER_TD_4819396;
    events_h2d_wr_JOIN_INNER_TD_4819396.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4819396.resize(1);
    events_JOIN_INNER_TD_4819396.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4819396;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4819396;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_587454;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_587454;
    std::vector<cl::Event> events_JOIN_INNER_TD_587454;
    events_h2d_wr_JOIN_INNER_TD_587454.resize(1);
    events_d2h_rd_JOIN_INNER_TD_587454.resize(1);
    events_JOIN_INNER_TD_587454.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_587454;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_587454;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6703783;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6703783;
    std::vector<cl::Event> events_JOIN_INNER_TD_6703783;
    events_h2d_wr_JOIN_INNER_TD_6703783.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6703783.resize(1);
    events_JOIN_INNER_TD_6703783.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6703783;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6703783;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_231509_s, tv_r_Filter_7_231509_e;
    gettimeofday(&tv_r_Filter_7_231509_s, 0);
    SW_Filter_TD_7226318(tbl_SerializeFromObject_TD_8929291_input, tbl_Filter_TD_7226318_output);
    gettimeofday(&tv_r_Filter_7_231509_e, 0);

    struct timeval tv_r_Filter_7_386861_s, tv_r_Filter_7_386861_e;
    gettimeofday(&tv_r_Filter_7_386861_s, 0);
    SW_Filter_TD_723289(tbl_SerializeFromObject_TD_8756295_input, tbl_Filter_TD_723289_output);
    gettimeofday(&tv_r_Filter_7_386861_e, 0);

    struct timeval tv_r_Filter_6_377538_s, tv_r_Filter_6_377538_e;
    gettimeofday(&tv_r_Filter_6_377538_s, 0);
    SW_Filter_TD_6840525(tbl_SerializeFromObject_TD_794515_input, tbl_Filter_TD_6840525_output);
    gettimeofday(&tv_r_Filter_6_377538_e, 0);

    struct timeval tv_r_JOIN_INNER_6_611889_s, tv_r_JOIN_INNER_6_611889_e;
    gettimeofday(&tv_r_JOIN_INNER_6_611889_s, 0);
    trans_JOIN_INNER_TD_6703783.add(&(tbl_Filter_TD_723289_output));
    trans_JOIN_INNER_TD_6703783.add(&(tbl_Filter_TD_7226318_output));
    trans_JOIN_INNER_TD_6703783.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6703783), &(events_h2d_wr_JOIN_INNER_TD_6703783[0]));
    events_grp_JOIN_INNER_TD_6703783.push_back(events_h2d_wr_JOIN_INNER_TD_6703783[0]);
    krnl_JOIN_INNER_TD_6703783.run(0, &(events_grp_JOIN_INNER_TD_6703783), &(events_JOIN_INNER_TD_6703783[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_611889_e, 0);

    struct timeval tv_r_Filter_5_193857_s, tv_r_Filter_5_193857_e;
    gettimeofday(&tv_r_Filter_5_193857_s, 0);
    SW_Filter_TD_5303682(tbl_SerializeFromObject_TD_6431309_input, tbl_Filter_TD_5303682_output);
    gettimeofday(&tv_r_Filter_5_193857_e, 0);

    struct timeval tv_r_JOIN_INNER_5_779574_s, tv_r_JOIN_INNER_5_779574_e;
    gettimeofday(&tv_r_JOIN_INNER_5_779574_s, 0);
    prev_events_grp_JOIN_INNER_TD_587454.push_back(events_h2d_wr_JOIN_INNER_TD_6703783[0]);
    trans_JOIN_INNER_TD_587454.add(&(tbl_Filter_TD_6840525_output));
    trans_JOIN_INNER_TD_587454.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_587454), &(events_h2d_wr_JOIN_INNER_TD_587454[0]));
    events_grp_JOIN_INNER_TD_587454.push_back(events_h2d_wr_JOIN_INNER_TD_587454[0]);
    events_grp_JOIN_INNER_TD_587454.push_back(events_JOIN_INNER_TD_6703783[0]);
    krnl_JOIN_INNER_TD_587454.run(0, &(events_grp_JOIN_INNER_TD_587454), &(events_JOIN_INNER_TD_587454[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_779574_e, 0);

    struct timeval tv_r_JOIN_INNER_4_423799_s, tv_r_JOIN_INNER_4_423799_e;
    gettimeofday(&tv_r_JOIN_INNER_4_423799_s, 0);
    prev_events_grp_JOIN_INNER_TD_4819396.push_back(events_h2d_wr_JOIN_INNER_TD_587454[0]);
    trans_JOIN_INNER_TD_4819396.add(&(tbl_Filter_TD_5303682_output));
    trans_JOIN_INNER_TD_4819396.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4819396), &(events_h2d_wr_JOIN_INNER_TD_4819396[0]));
    events_grp_JOIN_INNER_TD_4819396.push_back(events_h2d_wr_JOIN_INNER_TD_4819396[0]);
    events_grp_JOIN_INNER_TD_4819396.push_back(events_JOIN_INNER_TD_587454[0]);
    krnl_JOIN_INNER_TD_4819396.run(0, &(events_grp_JOIN_INNER_TD_4819396), &(events_JOIN_INNER_TD_4819396[0]));
    
    trans_JOIN_INNER_TD_4819396_out.add(&(tbl_JOIN_INNER_TD_4819396_output_preprocess));
    trans_JOIN_INNER_TD_4819396_out.dev2host(0, &(events_JOIN_INNER_TD_4819396), &(events_d2h_rd_JOIN_INNER_TD_4819396[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_4819396);
    tbl_JOIN_INNER_TD_4819396_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_4819396_output));
    gettimeofday(&tv_r_JOIN_INNER_4_423799_e, 0);

    struct timeval tv_r_Aggregate_3_163583_s, tv_r_Aggregate_3_163583_e;
    gettimeofday(&tv_r_Aggregate_3_163583_s, 0);
    trans_Aggregate_TD_3120515.add(&(tbl_JOIN_INNER_TD_4819396_output));
    trans_Aggregate_TD_3120515.host2dev(0, &(prev_events_grp_Aggregate_TD_3120515), &(events_h2d_wr_Aggregate_TD_3120515[0]));
    events_grp_Aggregate_TD_3120515.push_back(events_h2d_wr_Aggregate_TD_3120515[0]);
    krnl_Aggregate_TD_3120515.run(0, &(events_grp_Aggregate_TD_3120515), &(events_Aggregate_TD_3120515[0]));
    
    trans_Aggregate_TD_3120515_out.add(&(tbl_Aggregate_TD_3120515_output_preprocess));
    trans_Aggregate_TD_3120515_out.dev2host(0, &(events_Aggregate_TD_3120515), &(events_d2h_rd_Aggregate_TD_3120515[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_3120515_consolidate(tbl_Aggregate_TD_3120515_output_preprocess, tbl_Aggregate_TD_3120515_output);
    gettimeofday(&tv_r_Aggregate_3_163583_e, 0);

    struct timeval tv_r_Filter_2_348259_s, tv_r_Filter_2_348259_e;
    gettimeofday(&tv_r_Filter_2_348259_s, 0);
    SW_Filter_TD_2844958(tbl_SerializeFromObject_TD_3232916_input, tbl_Filter_TD_2844958_output);
    gettimeofday(&tv_r_Filter_2_348259_e, 0);

    struct timeval tv_r_Filter_2_665602_s, tv_r_Filter_2_665602_e;
    gettimeofday(&tv_r_Filter_2_665602_s, 0);
    SW_Filter_TD_2583626(tbl_Aggregate_TD_3120515_output, tbl_Filter_TD_2583626_output);
    gettimeofday(&tv_r_Filter_2_665602_e, 0);

    struct timeval tv_r_JOIN_INNER_1_424147_s, tv_r_JOIN_INNER_1_424147_e;
    gettimeofday(&tv_r_JOIN_INNER_1_424147_s, 0);
    SW_JOIN_INNER_TD_1280015(tbl_Filter_TD_2583626_output, tbl_Filter_TD_2844958_output, tbl_JOIN_INNER_TD_1280015_output);
    gettimeofday(&tv_r_JOIN_INNER_1_424147_e, 0);

    struct timeval tv_r_Sort_0_339239_s, tv_r_Sort_0_339239_e;
    gettimeofday(&tv_r_Sort_0_339239_s, 0);
    SW_Sort_TD_0550489(tbl_JOIN_INNER_TD_1280015_output, tbl_Sort_TD_0550489_output);
    gettimeofday(&tv_r_Sort_0_339239_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_231509_s, &tv_r_Filter_7_231509_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8929291_input: " << tbl_SerializeFromObject_TD_8929291_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_386861_s, &tv_r_Filter_7_386861_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8756295_input: " << tbl_SerializeFromObject_TD_8756295_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_377538_s, &tv_r_Filter_6_377538_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_794515_input: " << tbl_SerializeFromObject_TD_794515_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_611889_s, &tv_r_JOIN_INNER_6_611889_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_723289_output: " << tbl_Filter_TD_723289_output.getNumRow() << " " << "tbl_Filter_TD_7226318_output: " << tbl_Filter_TD_7226318_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_193857_s, &tv_r_Filter_5_193857_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6431309_input: " << tbl_SerializeFromObject_TD_6431309_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_779574_s, &tv_r_JOIN_INNER_5_779574_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6703783_output: " << tbl_JOIN_INNER_TD_6703783_output.getNumRow() << " " << "tbl_Filter_TD_6840525_output: " << tbl_Filter_TD_6840525_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_423799_s, &tv_r_JOIN_INNER_4_423799_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_587454_output: " << tbl_JOIN_INNER_TD_587454_output.getNumRow() << " " << "tbl_Filter_TD_5303682_output: " << tbl_Filter_TD_5303682_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_163583_s, &tv_r_Aggregate_3_163583_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4819396_output: " << tbl_JOIN_INNER_TD_4819396_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_348259_s, &tv_r_Filter_2_348259_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3232916_input: " << tbl_SerializeFromObject_TD_3232916_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_665602_s, &tv_r_Filter_2_665602_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3120515_output: " << tbl_Aggregate_TD_3120515_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_424147_s, &tv_r_JOIN_INNER_1_424147_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2583626_output: " << tbl_Filter_TD_2583626_output.getNumRow() << " " << "tbl_Filter_TD_2844958_output: " << tbl_Filter_TD_2844958_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_339239_s, &tv_r_Sort_0_339239_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1280015_output: " << tbl_JOIN_INNER_TD_1280015_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.2356733 * 1000 << "ms" << std::endl; 
    return 0; 
}
