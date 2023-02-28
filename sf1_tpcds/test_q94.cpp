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

#include "cfgFunc_q94.hpp" 
#include "q94.hpp" 

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
    std::cout << "NOTE:running query #94\n."; 
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
    // ****************************** Tables **************************** // 
    Table tbl_Aggregate_TD_01668_output("tbl_Aggregate_TD_01668_output", 6100000, 3, "");
    tbl_Aggregate_TD_01668_output.allocateHost();
    Table tbl_JOIN_INNER_TD_189453_output("tbl_JOIN_INNER_TD_189453_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_189453_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2367280_output("tbl_JOIN_INNER_TD_2367280_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_2367280_output.allocateHost();
    Table tbl_Filter_TD_2298125_output("tbl_Filter_TD_2298125_output", 6100000, 1, "");
    tbl_Filter_TD_2298125_output.allocateHost();
    Table tbl_JOIN_INNER_TD_38046_output("tbl_JOIN_INNER_TD_38046_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_38046_output.allocateHost();
    Table tbl_Filter_TD_3350165_output("tbl_Filter_TD_3350165_output", 6100000, 1, "");
    tbl_Filter_TD_3350165_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3478486_input;
    tbl_SerializeFromObject_TD_3478486_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3478486_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_3478486_input.addCol("web_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3478486_input.allocateHost();
    tbl_SerializeFromObject_TD_3478486_input.loadHost();
    Table tbl_JOIN_LEFTANTI_TD_4454608_output("tbl_JOIN_LEFTANTI_TD_4454608_output", 6100000, 6, "");
    tbl_JOIN_LEFTANTI_TD_4454608_output.allocateHost();
    Table tbl_Filter_TD_4358886_output("tbl_Filter_TD_4358886_output", 6100000, 1, "");
    tbl_Filter_TD_4358886_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4567071_input;
    tbl_SerializeFromObject_TD_4567071_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4567071_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_4567071_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4567071_input.allocateHost();
    tbl_SerializeFromObject_TD_4567071_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_5455919_output("tbl_JOIN_LEFTSEMI_TD_5455919_output", 6100000, 6, "");
    tbl_JOIN_LEFTSEMI_TD_5455919_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5966560_input;
    tbl_SerializeFromObject_TD_5966560_input = Table("web_returns", web_returns_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_5966560_input.addCol("wr_order_number", 8);
    tbl_SerializeFromObject_TD_5966560_input.allocateHost();
    tbl_SerializeFromObject_TD_5966560_input.loadHost();
    Table tbl_SerializeFromObject_TD_5830397_input;
    tbl_SerializeFromObject_TD_5830397_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5830397_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5830397_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_5830397_input.allocateHost();
    tbl_SerializeFromObject_TD_5830397_input.loadHost();
    Table tbl_Filter_TD_6527000_output("tbl_Filter_TD_6527000_output", 6100000, 7, "");
    tbl_Filter_TD_6527000_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6948051_input;
    tbl_SerializeFromObject_TD_6948051_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6948051_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_6948051_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_6948051_input.allocateHost();
    tbl_SerializeFromObject_TD_6948051_input.loadHost();
    Table tbl_SerializeFromObject_TD_7970883_input;
    tbl_SerializeFromObject_TD_7970883_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_7970883_input.addCol("ws_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_7970883_input.addCol("ws_ship_addr_sk", 4);
    tbl_SerializeFromObject_TD_7970883_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_7970883_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_7970883_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_7970883_input.addCol("ws_ext_ship_cost", 4);
    tbl_SerializeFromObject_TD_7970883_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_7970883_input.allocateHost();
    tbl_SerializeFromObject_TD_7970883_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_189453_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_2367280_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_2298125_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_38046_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3350165_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTANTI_TD_4454608_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4358886_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_5455919_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5966560_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6527000_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_6948051_input.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_189453_cmds;
    cfg_JOIN_INNER_TD_189453_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_189453_gqe_join (cfg_JOIN_INNER_TD_189453_cmds.cmd);
    cfg_JOIN_INNER_TD_189453_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_2367280_cmds;
    cfg_JOIN_INNER_TD_2367280_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2367280_gqe_join (cfg_JOIN_INNER_TD_2367280_cmds.cmd);
    cfg_JOIN_INNER_TD_2367280_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_38046_cmds;
    cfg_JOIN_INNER_TD_38046_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_38046_gqe_join (cfg_JOIN_INNER_TD_38046_cmds.cmd);
    cfg_JOIN_INNER_TD_38046_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTANTI_TD_4454608_cmds;
    cfg_JOIN_LEFTANTI_TD_4454608_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTANTI_TD_4454608_gqe_join (cfg_JOIN_LEFTANTI_TD_4454608_cmds.cmd);
    cfg_JOIN_LEFTANTI_TD_4454608_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_5455919_cmds;
    cfg_JOIN_LEFTSEMI_TD_5455919_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_5455919_gqe_join (cfg_JOIN_LEFTSEMI_TD_5455919_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_5455919_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_189453;
    krnl_JOIN_INNER_TD_189453 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_189453.setup(tbl_JOIN_INNER_TD_2367280_output, tbl_Filter_TD_2298125_output, tbl_JOIN_INNER_TD_189453_output, cfg_JOIN_INNER_TD_189453_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_2367280;
    krnl_JOIN_INNER_TD_2367280 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2367280.setup(tbl_JOIN_INNER_TD_38046_output, tbl_Filter_TD_3350165_output, tbl_JOIN_INNER_TD_2367280_output, cfg_JOIN_INNER_TD_2367280_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_38046;
    krnl_JOIN_INNER_TD_38046 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_38046.setup(tbl_JOIN_LEFTANTI_TD_4454608_output, tbl_Filter_TD_4358886_output, tbl_JOIN_INNER_TD_38046_output, cfg_JOIN_INNER_TD_38046_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTANTI_TD_4454608;
    krnl_JOIN_LEFTANTI_TD_4454608 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTANTI_TD_4454608.setup(tbl_SerializeFromObject_TD_5966560_input, tbl_JOIN_LEFTSEMI_TD_5455919_output, tbl_JOIN_LEFTANTI_TD_4454608_output, cfg_JOIN_LEFTANTI_TD_4454608_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_5455919;
    krnl_JOIN_LEFTSEMI_TD_5455919 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_5455919.setup(tbl_SerializeFromObject_TD_6948051_input, tbl_Filter_TD_6527000_output, tbl_JOIN_LEFTSEMI_TD_5455919_output, cfg_JOIN_LEFTSEMI_TD_5455919_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_189453;
    trans_JOIN_INNER_TD_189453.setq(q_h);
    trans_JOIN_INNER_TD_189453.add(&(cfg_JOIN_INNER_TD_189453_cmds));
    transEngine trans_JOIN_INNER_TD_189453_out;
    trans_JOIN_INNER_TD_189453_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_2367280;
    trans_JOIN_INNER_TD_2367280.setq(q_h);
    trans_JOIN_INNER_TD_2367280.add(&(cfg_JOIN_INNER_TD_2367280_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_38046;
    trans_JOIN_INNER_TD_38046.setq(q_h);
    trans_JOIN_INNER_TD_38046.add(&(cfg_JOIN_INNER_TD_38046_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTANTI_TD_4454608;
    trans_JOIN_LEFTANTI_TD_4454608.setq(q_h);
    trans_JOIN_LEFTANTI_TD_4454608.add(&(cfg_JOIN_LEFTANTI_TD_4454608_cmds));
    trans_JOIN_LEFTANTI_TD_4454608.add(&(tbl_SerializeFromObject_TD_5966560_input));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_5455919;
    trans_JOIN_LEFTSEMI_TD_5455919.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_5455919.add(&(cfg_JOIN_LEFTSEMI_TD_5455919_cmds));
    trans_JOIN_LEFTSEMI_TD_5455919.add(&(tbl_SerializeFromObject_TD_6948051_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_189453;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_189453;
    std::vector<cl::Event> events_JOIN_INNER_TD_189453;
    events_h2d_wr_JOIN_INNER_TD_189453.resize(1);
    events_d2h_rd_JOIN_INNER_TD_189453.resize(1);
    events_JOIN_INNER_TD_189453.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_189453;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_189453;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2367280;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2367280;
    std::vector<cl::Event> events_JOIN_INNER_TD_2367280;
    events_h2d_wr_JOIN_INNER_TD_2367280.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2367280.resize(1);
    events_JOIN_INNER_TD_2367280.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2367280;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2367280;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_38046;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_38046;
    std::vector<cl::Event> events_JOIN_INNER_TD_38046;
    events_h2d_wr_JOIN_INNER_TD_38046.resize(1);
    events_d2h_rd_JOIN_INNER_TD_38046.resize(1);
    events_JOIN_INNER_TD_38046.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_38046;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_38046;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTANTI_TD_4454608;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTANTI_TD_4454608;
    std::vector<cl::Event> events_JOIN_LEFTANTI_TD_4454608;
    events_h2d_wr_JOIN_LEFTANTI_TD_4454608.resize(1);
    events_d2h_rd_JOIN_LEFTANTI_TD_4454608.resize(1);
    events_JOIN_LEFTANTI_TD_4454608.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTANTI_TD_4454608;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTANTI_TD_4454608;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_5455919;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_5455919;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_5455919;
    events_h2d_wr_JOIN_LEFTSEMI_TD_5455919.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_5455919.resize(1);
    events_JOIN_LEFTSEMI_TD_5455919.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_5455919;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_5455919;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_817334_s, tv_r_Filter_6_817334_e;
    gettimeofday(&tv_r_Filter_6_817334_s, 0);
    SW_Filter_TD_6527000(tbl_SerializeFromObject_TD_7970883_input, tbl_Filter_TD_6527000_output);
    gettimeofday(&tv_r_Filter_6_817334_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_5_741859_s, tv_r_JOIN_LEFTSEMI_5_741859_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_741859_s, 0);
    trans_JOIN_LEFTSEMI_TD_5455919.add(&(tbl_Filter_TD_6527000_output));
    trans_JOIN_LEFTSEMI_TD_5455919.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_5455919), &(events_h2d_wr_JOIN_LEFTSEMI_TD_5455919[0]));
    events_grp_JOIN_LEFTSEMI_TD_5455919.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_5455919[0]);
    krnl_JOIN_LEFTSEMI_TD_5455919.run(0, &(events_grp_JOIN_LEFTSEMI_TD_5455919), &(events_JOIN_LEFTSEMI_TD_5455919[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_741859_e, 0);

    struct timeval tv_r_Filter_4_467260_s, tv_r_Filter_4_467260_e;
    gettimeofday(&tv_r_Filter_4_467260_s, 0);
    SW_Filter_TD_4358886(tbl_SerializeFromObject_TD_5830397_input, tbl_Filter_TD_4358886_output);
    gettimeofday(&tv_r_Filter_4_467260_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_4_1016_s, tv_r_JOIN_LEFTANTI_4_1016_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_1016_s, 0);
    prev_events_grp_JOIN_LEFTANTI_TD_4454608.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_5455919[0]);
    trans_JOIN_LEFTANTI_TD_4454608.host2dev(0, &(prev_events_grp_JOIN_LEFTANTI_TD_4454608), &(events_h2d_wr_JOIN_LEFTANTI_TD_4454608[0]));
    events_grp_JOIN_LEFTANTI_TD_4454608.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_4454608[0]);
    events_grp_JOIN_LEFTANTI_TD_4454608.push_back(events_JOIN_LEFTSEMI_TD_5455919[0]);
    krnl_JOIN_LEFTANTI_TD_4454608.run(0, &(events_grp_JOIN_LEFTANTI_TD_4454608), &(events_JOIN_LEFTANTI_TD_4454608[0]));
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_1016_e, 0);

    struct timeval tv_r_Filter_3_121837_s, tv_r_Filter_3_121837_e;
    gettimeofday(&tv_r_Filter_3_121837_s, 0);
    SW_Filter_TD_3350165(tbl_SerializeFromObject_TD_4567071_input, tbl_Filter_TD_3350165_output);
    gettimeofday(&tv_r_Filter_3_121837_e, 0);

    struct timeval tv_r_JOIN_INNER_3_362928_s, tv_r_JOIN_INNER_3_362928_e;
    gettimeofday(&tv_r_JOIN_INNER_3_362928_s, 0);
    prev_events_grp_JOIN_INNER_TD_38046.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_4454608[0]);
    trans_JOIN_INNER_TD_38046.add(&(tbl_Filter_TD_4358886_output));
    trans_JOIN_INNER_TD_38046.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_38046), &(events_h2d_wr_JOIN_INNER_TD_38046[0]));
    events_grp_JOIN_INNER_TD_38046.push_back(events_h2d_wr_JOIN_INNER_TD_38046[0]);
    events_grp_JOIN_INNER_TD_38046.push_back(events_JOIN_LEFTANTI_TD_4454608[0]);
    krnl_JOIN_INNER_TD_38046.run(0, &(events_grp_JOIN_INNER_TD_38046), &(events_JOIN_INNER_TD_38046[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_362928_e, 0);

    struct timeval tv_r_Filter_2_567739_s, tv_r_Filter_2_567739_e;
    gettimeofday(&tv_r_Filter_2_567739_s, 0);
    SW_Filter_TD_2298125(tbl_SerializeFromObject_TD_3478486_input, tbl_Filter_TD_2298125_output);
    gettimeofday(&tv_r_Filter_2_567739_e, 0);

    struct timeval tv_r_JOIN_INNER_2_237780_s, tv_r_JOIN_INNER_2_237780_e;
    gettimeofday(&tv_r_JOIN_INNER_2_237780_s, 0);
    prev_events_grp_JOIN_INNER_TD_2367280.push_back(events_h2d_wr_JOIN_INNER_TD_38046[0]);
    trans_JOIN_INNER_TD_2367280.add(&(tbl_Filter_TD_3350165_output));
    trans_JOIN_INNER_TD_2367280.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2367280), &(events_h2d_wr_JOIN_INNER_TD_2367280[0]));
    events_grp_JOIN_INNER_TD_2367280.push_back(events_h2d_wr_JOIN_INNER_TD_2367280[0]);
    events_grp_JOIN_INNER_TD_2367280.push_back(events_JOIN_INNER_TD_38046[0]);
    krnl_JOIN_INNER_TD_2367280.run(0, &(events_grp_JOIN_INNER_TD_2367280), &(events_JOIN_INNER_TD_2367280[0]));
    gettimeofday(&tv_r_JOIN_INNER_2_237780_e, 0);

    struct timeval tv_r_JOIN_INNER_1_620806_s, tv_r_JOIN_INNER_1_620806_e;
    gettimeofday(&tv_r_JOIN_INNER_1_620806_s, 0);
    prev_events_grp_JOIN_INNER_TD_189453.push_back(events_h2d_wr_JOIN_INNER_TD_2367280[0]);
    trans_JOIN_INNER_TD_189453.add(&(tbl_Filter_TD_2298125_output));
    trans_JOIN_INNER_TD_189453.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_189453), &(events_h2d_wr_JOIN_INNER_TD_189453[0]));
    events_grp_JOIN_INNER_TD_189453.push_back(events_h2d_wr_JOIN_INNER_TD_189453[0]);
    events_grp_JOIN_INNER_TD_189453.push_back(events_JOIN_INNER_TD_2367280[0]);
    krnl_JOIN_INNER_TD_189453.run(0, &(events_grp_JOIN_INNER_TD_189453), &(events_JOIN_INNER_TD_189453[0]));
    
    trans_JOIN_INNER_TD_189453_out.add(&(tbl_JOIN_INNER_TD_189453_output));
    trans_JOIN_INNER_TD_189453_out.dev2host(0, &(events_JOIN_INNER_TD_189453), &(events_d2h_rd_JOIN_INNER_TD_189453[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_620806_e, 0);

    struct timeval tv_r_Aggregate_0_277289_s, tv_r_Aggregate_0_277289_e;
    gettimeofday(&tv_r_Aggregate_0_277289_s, 0);
    SW_Aggregate_TD_01668(tbl_JOIN_INNER_TD_189453_output, tbl_Aggregate_TD_01668_output);
    gettimeofday(&tv_r_Aggregate_0_277289_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_817334_s, &tv_r_Filter_6_817334_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7970883_input: " << tbl_SerializeFromObject_TD_7970883_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_5: " << tvdiff(&tv_r_JOIN_LEFTSEMI_5_741859_s, &tv_r_JOIN_LEFTSEMI_5_741859_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6527000_output: " << tbl_Filter_TD_6527000_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_6948051_input: " << tbl_SerializeFromObject_TD_6948051_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_467260_s, &tv_r_Filter_4_467260_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5830397_input: " << tbl_SerializeFromObject_TD_5830397_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_4: " << tvdiff(&tv_r_JOIN_LEFTANTI_4_1016_s, &tv_r_JOIN_LEFTANTI_4_1016_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_5455919_output: " << tbl_JOIN_LEFTSEMI_TD_5455919_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_5966560_input: " << tbl_SerializeFromObject_TD_5966560_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_121837_s, &tv_r_Filter_3_121837_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4567071_input: " << tbl_SerializeFromObject_TD_4567071_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_362928_s, &tv_r_JOIN_INNER_3_362928_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_4454608_output: " << tbl_JOIN_LEFTANTI_TD_4454608_output.getNumRow() << " " << "tbl_Filter_TD_4358886_output: " << tbl_Filter_TD_4358886_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_567739_s, &tv_r_Filter_2_567739_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3478486_input: " << tbl_SerializeFromObject_TD_3478486_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_237780_s, &tv_r_JOIN_INNER_2_237780_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_38046_output: " << tbl_JOIN_INNER_TD_38046_output.getNumRow() << " " << "tbl_Filter_TD_3350165_output: " << tbl_Filter_TD_3350165_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_620806_s, &tv_r_JOIN_INNER_1_620806_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2367280_output: " << tbl_JOIN_INNER_TD_2367280_output.getNumRow() << " " << "tbl_Filter_TD_2298125_output: " << tbl_Filter_TD_2298125_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_277289_s, &tv_r_Aggregate_0_277289_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_189453_output: " << tbl_JOIN_INNER_TD_189453_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.2489551 * 1000 << "ms" << std::endl; 
    return 0; 
}
