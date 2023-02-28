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

#include "cfgFunc_q95.hpp" 
#include "q95.hpp" 

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
    std::cout << "NOTE:running query #95\n."; 
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
    Table tbl_Aggregate_TD_0170197_output("tbl_Aggregate_TD_0170197_output", 6100000, 3, "");
    tbl_Aggregate_TD_0170197_output.allocateHost();
    Table tbl_JOIN_INNER_TD_18045_output("tbl_JOIN_INNER_TD_18045_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18045_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2928666_output("tbl_JOIN_INNER_TD_2928666_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_2928666_output.allocateHost();
    Table tbl_Filter_TD_2871122_output("tbl_Filter_TD_2871122_output", 6100000, 1, "");
    tbl_Filter_TD_2871122_output.allocateHost();
    Table tbl_JOIN_INNER_TD_380467_output("tbl_JOIN_INNER_TD_380467_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_380467_output.allocateHost();
    Table tbl_Filter_TD_3765369_output("tbl_Filter_TD_3765369_output", 6100000, 1, "");
    tbl_Filter_TD_3765369_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3347701_input;
    tbl_SerializeFromObject_TD_3347701_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3347701_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_3347701_input.addCol("web_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3347701_input.allocateHost();
    tbl_SerializeFromObject_TD_3347701_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_465642_output("tbl_JOIN_LEFTSEMI_TD_465642_output", 6100000, 6, "");
    tbl_JOIN_LEFTSEMI_TD_465642_output.allocateHost();
    Table tbl_Filter_TD_4332910_output("tbl_Filter_TD_4332910_output", 6100000, 1, "");
    tbl_Filter_TD_4332910_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4818348_input;
    tbl_SerializeFromObject_TD_4818348_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4818348_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_4818348_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4818348_input.allocateHost();
    tbl_SerializeFromObject_TD_4818348_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_5787187_output("tbl_JOIN_LEFTSEMI_TD_5787187_output", 6100000, 6, "");
    tbl_JOIN_LEFTSEMI_TD_5787187_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5719439_output("tbl_JOIN_INNER_TD_5719439_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5719439_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5780866_input;
    tbl_SerializeFromObject_TD_5780866_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5780866_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5780866_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_5780866_input.allocateHost();
    tbl_SerializeFromObject_TD_5780866_input.loadHost();
    Table tbl_Filter_TD_6390710_output("tbl_Filter_TD_6390710_output", 6100000, 6, "");
    tbl_Filter_TD_6390710_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6411475_output("tbl_JOIN_INNER_TD_6411475_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_6411475_output.allocateHost();
    Table tbl_Filter_TD_6454426_output("tbl_Filter_TD_6454426_output", 6100000, 1, "");
    tbl_Filter_TD_6454426_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6257939_output("tbl_JOIN_INNER_TD_6257939_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_6257939_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7558492_input;
    tbl_SerializeFromObject_TD_7558492_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_7558492_input.addCol("ws_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_7558492_input.addCol("ws_ship_addr_sk", 4);
    tbl_SerializeFromObject_TD_7558492_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_7558492_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_7558492_input.addCol("ws_ext_ship_cost", 4);
    tbl_SerializeFromObject_TD_7558492_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_7558492_input.allocateHost();
    tbl_SerializeFromObject_TD_7558492_input.loadHost();
    Table tbl_Filter_TD_7427868_output("tbl_Filter_TD_7427868_output", 6100000, 2, "");
    tbl_Filter_TD_7427868_output.allocateHost();
    Table tbl_Filter_TD_7946934_output("tbl_Filter_TD_7946934_output", 6100000, 2, "");
    tbl_Filter_TD_7946934_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7989440_input;
    tbl_SerializeFromObject_TD_7989440_input = Table("web_returns", web_returns_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7989440_input.addCol("wr_order_number", 8);
    tbl_SerializeFromObject_TD_7989440_input.allocateHost();
    tbl_SerializeFromObject_TD_7989440_input.loadHost();
    Table tbl_Filter_TD_7375676_output("tbl_Filter_TD_7375676_output", 6100000, 2, "");
    tbl_Filter_TD_7375676_output.allocateHost();
    Table tbl_Filter_TD_7194884_output("tbl_Filter_TD_7194884_output", 6100000, 2, "");
    tbl_Filter_TD_7194884_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8590402_input;
    tbl_SerializeFromObject_TD_8590402_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8590402_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8590402_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_8590402_input.allocateHost();
    tbl_SerializeFromObject_TD_8590402_input.loadHost();
    Table tbl_SerializeFromObject_TD_8272379_input;
    tbl_SerializeFromObject_TD_8272379_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8272379_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8272379_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_8272379_input.allocateHost();
    tbl_SerializeFromObject_TD_8272379_input.loadHost();
    Table tbl_SerializeFromObject_TD_8568946_input;
    tbl_SerializeFromObject_TD_8568946_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8568946_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8568946_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_8568946_input.allocateHost();
    tbl_SerializeFromObject_TD_8568946_input.loadHost();
    Table tbl_SerializeFromObject_TD_8682935_input;
    tbl_SerializeFromObject_TD_8682935_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8682935_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8682935_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_8682935_input.allocateHost();
    tbl_SerializeFromObject_TD_8682935_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_18045_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_2928666_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_2871122_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_380467_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3765369_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_465642_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4332910_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_5787187_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5719439_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6390710_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6411475_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6454426_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6257939_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7427868_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7946934_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7375676_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7194884_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_18045_cmds;
    cfg_JOIN_INNER_TD_18045_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_18045_gqe_join (cfg_JOIN_INNER_TD_18045_cmds.cmd);
    cfg_JOIN_INNER_TD_18045_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_2928666_cmds;
    cfg_JOIN_INNER_TD_2928666_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2928666_gqe_join (cfg_JOIN_INNER_TD_2928666_cmds.cmd);
    cfg_JOIN_INNER_TD_2928666_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_380467_cmds;
    cfg_JOIN_INNER_TD_380467_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_380467_gqe_join (cfg_JOIN_INNER_TD_380467_cmds.cmd);
    cfg_JOIN_INNER_TD_380467_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_465642_cmds;
    cfg_JOIN_LEFTSEMI_TD_465642_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_465642_gqe_join (cfg_JOIN_LEFTSEMI_TD_465642_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_465642_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_5787187_cmds;
    cfg_JOIN_LEFTSEMI_TD_5787187_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_5787187_gqe_join (cfg_JOIN_LEFTSEMI_TD_5787187_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_5787187_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5719439_cmds;
    cfg_JOIN_INNER_TD_5719439_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5719439_gqe_join (cfg_JOIN_INNER_TD_5719439_cmds.cmd);
    cfg_JOIN_INNER_TD_5719439_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6411475_cmds;
    cfg_JOIN_INNER_TD_6411475_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6411475_gqe_join (cfg_JOIN_INNER_TD_6411475_cmds.cmd);
    cfg_JOIN_INNER_TD_6411475_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6257939_cmds;
    cfg_JOIN_INNER_TD_6257939_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6257939_gqe_join (cfg_JOIN_INNER_TD_6257939_cmds.cmd);
    cfg_JOIN_INNER_TD_6257939_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_18045;
    krnl_JOIN_INNER_TD_18045 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_18045.setup(tbl_JOIN_INNER_TD_2928666_output, tbl_Filter_TD_2871122_output, tbl_JOIN_INNER_TD_18045_output, cfg_JOIN_INNER_TD_18045_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_2928666;
    krnl_JOIN_INNER_TD_2928666 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2928666.setup(tbl_JOIN_INNER_TD_380467_output, tbl_Filter_TD_3765369_output, tbl_JOIN_INNER_TD_2928666_output, cfg_JOIN_INNER_TD_2928666_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_380467;
    krnl_JOIN_INNER_TD_380467 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_380467.setup(tbl_JOIN_LEFTSEMI_TD_465642_output, tbl_Filter_TD_4332910_output, tbl_JOIN_INNER_TD_380467_output, cfg_JOIN_INNER_TD_380467_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_465642;
    krnl_JOIN_LEFTSEMI_TD_465642 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_465642.setup(tbl_JOIN_INNER_TD_5719439_output, tbl_JOIN_LEFTSEMI_TD_5787187_output, tbl_JOIN_LEFTSEMI_TD_465642_output, cfg_JOIN_LEFTSEMI_TD_465642_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_5787187;
    krnl_JOIN_LEFTSEMI_TD_5787187 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_5787187.setup(tbl_JOIN_INNER_TD_6411475_output, tbl_Filter_TD_6390710_output, tbl_JOIN_LEFTSEMI_TD_5787187_output, cfg_JOIN_LEFTSEMI_TD_5787187_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5719439;
    krnl_JOIN_INNER_TD_5719439 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5719439.setup(tbl_Filter_TD_6454426_output, tbl_JOIN_INNER_TD_6257939_output, tbl_JOIN_INNER_TD_5719439_output, cfg_JOIN_INNER_TD_5719439_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6411475;
    krnl_JOIN_INNER_TD_6411475 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6411475.setup(tbl_Filter_TD_7427868_output, tbl_Filter_TD_7946934_output, tbl_JOIN_INNER_TD_6411475_output, cfg_JOIN_INNER_TD_6411475_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6257939;
    krnl_JOIN_INNER_TD_6257939 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6257939.setup(tbl_Filter_TD_7375676_output, tbl_Filter_TD_7194884_output, tbl_JOIN_INNER_TD_6257939_output, cfg_JOIN_INNER_TD_6257939_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_18045;
    trans_JOIN_INNER_TD_18045.setq(q_h);
    trans_JOIN_INNER_TD_18045.add(&(cfg_JOIN_INNER_TD_18045_cmds));
    transEngine trans_JOIN_INNER_TD_18045_out;
    trans_JOIN_INNER_TD_18045_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_2928666;
    trans_JOIN_INNER_TD_2928666.setq(q_h);
    trans_JOIN_INNER_TD_2928666.add(&(cfg_JOIN_INNER_TD_2928666_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_380467;
    trans_JOIN_INNER_TD_380467.setq(q_h);
    trans_JOIN_INNER_TD_380467.add(&(cfg_JOIN_INNER_TD_380467_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_465642;
    trans_JOIN_LEFTSEMI_TD_465642.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_465642.add(&(cfg_JOIN_LEFTSEMI_TD_465642_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_5787187;
    trans_JOIN_LEFTSEMI_TD_5787187.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_5787187.add(&(cfg_JOIN_LEFTSEMI_TD_5787187_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5719439;
    trans_JOIN_INNER_TD_5719439.setq(q_h);
    trans_JOIN_INNER_TD_5719439.add(&(cfg_JOIN_INNER_TD_5719439_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6411475;
    trans_JOIN_INNER_TD_6411475.setq(q_h);
    trans_JOIN_INNER_TD_6411475.add(&(cfg_JOIN_INNER_TD_6411475_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6257939;
    trans_JOIN_INNER_TD_6257939.setq(q_h);
    trans_JOIN_INNER_TD_6257939.add(&(cfg_JOIN_INNER_TD_6257939_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_18045;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_18045;
    std::vector<cl::Event> events_JOIN_INNER_TD_18045;
    events_h2d_wr_JOIN_INNER_TD_18045.resize(1);
    events_d2h_rd_JOIN_INNER_TD_18045.resize(1);
    events_JOIN_INNER_TD_18045.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_18045;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_18045;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2928666;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2928666;
    std::vector<cl::Event> events_JOIN_INNER_TD_2928666;
    events_h2d_wr_JOIN_INNER_TD_2928666.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2928666.resize(1);
    events_JOIN_INNER_TD_2928666.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2928666;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2928666;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_380467;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_380467;
    std::vector<cl::Event> events_JOIN_INNER_TD_380467;
    events_h2d_wr_JOIN_INNER_TD_380467.resize(1);
    events_d2h_rd_JOIN_INNER_TD_380467.resize(1);
    events_JOIN_INNER_TD_380467.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_380467;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_380467;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_465642;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_465642;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_465642;
    events_h2d_wr_JOIN_LEFTSEMI_TD_465642.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_465642.resize(1);
    events_JOIN_LEFTSEMI_TD_465642.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_465642;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_465642;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_5787187;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_5787187;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_5787187;
    events_h2d_wr_JOIN_LEFTSEMI_TD_5787187.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_5787187.resize(1);
    events_JOIN_LEFTSEMI_TD_5787187.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_5787187;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_5787187;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5719439;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5719439;
    std::vector<cl::Event> events_JOIN_INNER_TD_5719439;
    events_h2d_wr_JOIN_INNER_TD_5719439.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5719439.resize(1);
    events_JOIN_INNER_TD_5719439.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5719439;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5719439;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6411475;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6411475;
    std::vector<cl::Event> events_JOIN_INNER_TD_6411475;
    events_h2d_wr_JOIN_INNER_TD_6411475.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6411475.resize(1);
    events_JOIN_INNER_TD_6411475.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6411475;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6411475;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6257939;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6257939;
    std::vector<cl::Event> events_JOIN_INNER_TD_6257939;
    events_h2d_wr_JOIN_INNER_TD_6257939.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6257939.resize(1);
    events_JOIN_INNER_TD_6257939.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6257939;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6257939;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_928453_s, tv_r_Filter_7_928453_e;
    gettimeofday(&tv_r_Filter_7_928453_s, 0);
    SW_Filter_TD_7194884(tbl_SerializeFromObject_TD_8682935_input, tbl_Filter_TD_7194884_output);
    gettimeofday(&tv_r_Filter_7_928453_e, 0);

    struct timeval tv_r_Filter_7_855874_s, tv_r_Filter_7_855874_e;
    gettimeofday(&tv_r_Filter_7_855874_s, 0);
    SW_Filter_TD_7375676(tbl_SerializeFromObject_TD_8568946_input, tbl_Filter_TD_7375676_output);
    gettimeofday(&tv_r_Filter_7_855874_e, 0);

    struct timeval tv_r_Filter_7_585263_s, tv_r_Filter_7_585263_e;
    gettimeofday(&tv_r_Filter_7_585263_s, 0);
    SW_Filter_TD_7946934(tbl_SerializeFromObject_TD_8272379_input, tbl_Filter_TD_7946934_output);
    gettimeofday(&tv_r_Filter_7_585263_e, 0);

    struct timeval tv_r_Filter_7_208544_s, tv_r_Filter_7_208544_e;
    gettimeofday(&tv_r_Filter_7_208544_s, 0);
    SW_Filter_TD_7427868(tbl_SerializeFromObject_TD_8590402_input, tbl_Filter_TD_7427868_output);
    gettimeofday(&tv_r_Filter_7_208544_e, 0);

    struct timeval tv_r_JOIN_INNER_6_88429_s, tv_r_JOIN_INNER_6_88429_e;
    gettimeofday(&tv_r_JOIN_INNER_6_88429_s, 0);
    trans_JOIN_INNER_TD_6257939.add(&(tbl_Filter_TD_7375676_output));
    trans_JOIN_INNER_TD_6257939.add(&(tbl_Filter_TD_7194884_output));
    trans_JOIN_INNER_TD_6257939.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6257939), &(events_h2d_wr_JOIN_INNER_TD_6257939[0]));
    events_grp_JOIN_INNER_TD_6257939.push_back(events_h2d_wr_JOIN_INNER_TD_6257939[0]);
    krnl_JOIN_INNER_TD_6257939.run(0, &(events_grp_JOIN_INNER_TD_6257939), &(events_JOIN_INNER_TD_6257939[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_88429_e, 0);

    struct timeval tv_r_Filter_6_894371_s, tv_r_Filter_6_894371_e;
    gettimeofday(&tv_r_Filter_6_894371_s, 0);
    SW_Filter_TD_6454426(tbl_SerializeFromObject_TD_7989440_input, tbl_Filter_TD_6454426_output);
    gettimeofday(&tv_r_Filter_6_894371_e, 0);

    struct timeval tv_r_JOIN_INNER_6_117476_s, tv_r_JOIN_INNER_6_117476_e;
    gettimeofday(&tv_r_JOIN_INNER_6_117476_s, 0);
    trans_JOIN_INNER_TD_6411475.add(&(tbl_Filter_TD_7427868_output));
    trans_JOIN_INNER_TD_6411475.add(&(tbl_Filter_TD_7946934_output));
    trans_JOIN_INNER_TD_6411475.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6411475), &(events_h2d_wr_JOIN_INNER_TD_6411475[0]));
    events_grp_JOIN_INNER_TD_6411475.push_back(events_h2d_wr_JOIN_INNER_TD_6411475[0]);
    krnl_JOIN_INNER_TD_6411475.run(0, &(events_grp_JOIN_INNER_TD_6411475), &(events_JOIN_INNER_TD_6411475[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_117476_e, 0);

    struct timeval tv_r_Filter_6_849031_s, tv_r_Filter_6_849031_e;
    gettimeofday(&tv_r_Filter_6_849031_s, 0);
    SW_Filter_TD_6390710(tbl_SerializeFromObject_TD_7558492_input, tbl_Filter_TD_6390710_output);
    gettimeofday(&tv_r_Filter_6_849031_e, 0);

    struct timeval tv_r_JOIN_INNER_5_449614_s, tv_r_JOIN_INNER_5_449614_e;
    gettimeofday(&tv_r_JOIN_INNER_5_449614_s, 0);
    prev_events_grp_JOIN_INNER_TD_5719439.push_back(events_h2d_wr_JOIN_INNER_TD_6257939[0]);
    trans_JOIN_INNER_TD_5719439.add(&(tbl_Filter_TD_6454426_output));
    trans_JOIN_INNER_TD_5719439.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5719439), &(events_h2d_wr_JOIN_INNER_TD_5719439[0]));
    events_grp_JOIN_INNER_TD_5719439.push_back(events_h2d_wr_JOIN_INNER_TD_5719439[0]);
    events_grp_JOIN_INNER_TD_5719439.push_back(events_JOIN_INNER_TD_6257939[0]);
    krnl_JOIN_INNER_TD_5719439.run(0, &(events_grp_JOIN_INNER_TD_5719439), &(events_JOIN_INNER_TD_5719439[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_449614_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_5_295732_s, tv_r_JOIN_LEFTSEMI_5_295732_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_295732_s, 0);
    prev_events_grp_JOIN_LEFTSEMI_TD_5787187.push_back(events_h2d_wr_JOIN_INNER_TD_6411475[0]);
    trans_JOIN_LEFTSEMI_TD_5787187.add(&(tbl_Filter_TD_6390710_output));
    trans_JOIN_LEFTSEMI_TD_5787187.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_5787187), &(events_h2d_wr_JOIN_LEFTSEMI_TD_5787187[0]));
    events_grp_JOIN_LEFTSEMI_TD_5787187.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_5787187[0]);
    events_grp_JOIN_LEFTSEMI_TD_5787187.push_back(events_JOIN_INNER_TD_6411475[0]);
    krnl_JOIN_LEFTSEMI_TD_5787187.run(0, &(events_grp_JOIN_LEFTSEMI_TD_5787187), &(events_JOIN_LEFTSEMI_TD_5787187[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_295732_e, 0);

    struct timeval tv_r_Filter_4_347821_s, tv_r_Filter_4_347821_e;
    gettimeofday(&tv_r_Filter_4_347821_s, 0);
    SW_Filter_TD_4332910(tbl_SerializeFromObject_TD_5780866_input, tbl_Filter_TD_4332910_output);
    gettimeofday(&tv_r_Filter_4_347821_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_4_146239_s, tv_r_JOIN_LEFTSEMI_4_146239_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_146239_s, 0);
    prev_events_grp_JOIN_LEFTSEMI_TD_465642.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_5787187[0]);
    prev_events_grp_JOIN_LEFTSEMI_TD_465642.push_back(events_h2d_wr_JOIN_INNER_TD_5719439[0]);
    trans_JOIN_LEFTSEMI_TD_465642.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_465642), &(events_h2d_wr_JOIN_LEFTSEMI_TD_465642[0]));
    events_grp_JOIN_LEFTSEMI_TD_465642.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_465642[0]);
    events_grp_JOIN_LEFTSEMI_TD_465642.push_back(events_JOIN_LEFTSEMI_TD_5787187[0]);
    events_grp_JOIN_LEFTSEMI_TD_465642.push_back(events_JOIN_INNER_TD_5719439[0]);
    krnl_JOIN_LEFTSEMI_TD_465642.run(0, &(events_grp_JOIN_LEFTSEMI_TD_465642), &(events_JOIN_LEFTSEMI_TD_465642[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_146239_e, 0);

    struct timeval tv_r_Filter_3_999544_s, tv_r_Filter_3_999544_e;
    gettimeofday(&tv_r_Filter_3_999544_s, 0);
    SW_Filter_TD_3765369(tbl_SerializeFromObject_TD_4818348_input, tbl_Filter_TD_3765369_output);
    gettimeofday(&tv_r_Filter_3_999544_e, 0);

    struct timeval tv_r_JOIN_INNER_3_945016_s, tv_r_JOIN_INNER_3_945016_e;
    gettimeofday(&tv_r_JOIN_INNER_3_945016_s, 0);
    prev_events_grp_JOIN_INNER_TD_380467.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_465642[0]);
    trans_JOIN_INNER_TD_380467.add(&(tbl_Filter_TD_4332910_output));
    trans_JOIN_INNER_TD_380467.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_380467), &(events_h2d_wr_JOIN_INNER_TD_380467[0]));
    events_grp_JOIN_INNER_TD_380467.push_back(events_h2d_wr_JOIN_INNER_TD_380467[0]);
    events_grp_JOIN_INNER_TD_380467.push_back(events_JOIN_LEFTSEMI_TD_465642[0]);
    krnl_JOIN_INNER_TD_380467.run(0, &(events_grp_JOIN_INNER_TD_380467), &(events_JOIN_INNER_TD_380467[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_945016_e, 0);

    struct timeval tv_r_Filter_2_517048_s, tv_r_Filter_2_517048_e;
    gettimeofday(&tv_r_Filter_2_517048_s, 0);
    SW_Filter_TD_2871122(tbl_SerializeFromObject_TD_3347701_input, tbl_Filter_TD_2871122_output);
    gettimeofday(&tv_r_Filter_2_517048_e, 0);

    struct timeval tv_r_JOIN_INNER_2_655847_s, tv_r_JOIN_INNER_2_655847_e;
    gettimeofday(&tv_r_JOIN_INNER_2_655847_s, 0);
    prev_events_grp_JOIN_INNER_TD_2928666.push_back(events_h2d_wr_JOIN_INNER_TD_380467[0]);
    trans_JOIN_INNER_TD_2928666.add(&(tbl_Filter_TD_3765369_output));
    trans_JOIN_INNER_TD_2928666.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2928666), &(events_h2d_wr_JOIN_INNER_TD_2928666[0]));
    events_grp_JOIN_INNER_TD_2928666.push_back(events_h2d_wr_JOIN_INNER_TD_2928666[0]);
    events_grp_JOIN_INNER_TD_2928666.push_back(events_JOIN_INNER_TD_380467[0]);
    krnl_JOIN_INNER_TD_2928666.run(0, &(events_grp_JOIN_INNER_TD_2928666), &(events_JOIN_INNER_TD_2928666[0]));
    gettimeofday(&tv_r_JOIN_INNER_2_655847_e, 0);

    struct timeval tv_r_JOIN_INNER_1_182086_s, tv_r_JOIN_INNER_1_182086_e;
    gettimeofday(&tv_r_JOIN_INNER_1_182086_s, 0);
    prev_events_grp_JOIN_INNER_TD_18045.push_back(events_h2d_wr_JOIN_INNER_TD_2928666[0]);
    trans_JOIN_INNER_TD_18045.add(&(tbl_Filter_TD_2871122_output));
    trans_JOIN_INNER_TD_18045.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_18045), &(events_h2d_wr_JOIN_INNER_TD_18045[0]));
    events_grp_JOIN_INNER_TD_18045.push_back(events_h2d_wr_JOIN_INNER_TD_18045[0]);
    events_grp_JOIN_INNER_TD_18045.push_back(events_JOIN_INNER_TD_2928666[0]);
    krnl_JOIN_INNER_TD_18045.run(0, &(events_grp_JOIN_INNER_TD_18045), &(events_JOIN_INNER_TD_18045[0]));
    
    trans_JOIN_INNER_TD_18045_out.add(&(tbl_JOIN_INNER_TD_18045_output));
    trans_JOIN_INNER_TD_18045_out.dev2host(0, &(events_JOIN_INNER_TD_18045), &(events_d2h_rd_JOIN_INNER_TD_18045[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_182086_e, 0);

    struct timeval tv_r_Aggregate_0_669135_s, tv_r_Aggregate_0_669135_e;
    gettimeofday(&tv_r_Aggregate_0_669135_s, 0);
    SW_Aggregate_TD_0170197(tbl_JOIN_INNER_TD_18045_output, tbl_Aggregate_TD_0170197_output);
    gettimeofday(&tv_r_Aggregate_0_669135_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_928453_s, &tv_r_Filter_7_928453_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8682935_input: " << tbl_SerializeFromObject_TD_8682935_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_855874_s, &tv_r_Filter_7_855874_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8568946_input: " << tbl_SerializeFromObject_TD_8568946_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_585263_s, &tv_r_Filter_7_585263_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8272379_input: " << tbl_SerializeFromObject_TD_8272379_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_208544_s, &tv_r_Filter_7_208544_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8590402_input: " << tbl_SerializeFromObject_TD_8590402_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_88429_s, &tv_r_JOIN_INNER_6_88429_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7375676_output: " << tbl_Filter_TD_7375676_output.getNumRow() << " " << "tbl_Filter_TD_7194884_output: " << tbl_Filter_TD_7194884_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_894371_s, &tv_r_Filter_6_894371_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7989440_input: " << tbl_SerializeFromObject_TD_7989440_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_117476_s, &tv_r_JOIN_INNER_6_117476_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7427868_output: " << tbl_Filter_TD_7427868_output.getNumRow() << " " << "tbl_Filter_TD_7946934_output: " << tbl_Filter_TD_7946934_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_849031_s, &tv_r_Filter_6_849031_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7558492_input: " << tbl_SerializeFromObject_TD_7558492_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_449614_s, &tv_r_JOIN_INNER_5_449614_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6454426_output: " << tbl_Filter_TD_6454426_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_6257939_output: " << tbl_JOIN_INNER_TD_6257939_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_5: " << tvdiff(&tv_r_JOIN_LEFTSEMI_5_295732_s, &tv_r_JOIN_LEFTSEMI_5_295732_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6390710_output: " << tbl_Filter_TD_6390710_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_6411475_output: " << tbl_JOIN_INNER_TD_6411475_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_347821_s, &tv_r_Filter_4_347821_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5780866_input: " << tbl_SerializeFromObject_TD_5780866_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_4: " << tvdiff(&tv_r_JOIN_LEFTSEMI_4_146239_s, &tv_r_JOIN_LEFTSEMI_4_146239_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_5787187_output: " << tbl_JOIN_LEFTSEMI_TD_5787187_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_5719439_output: " << tbl_JOIN_INNER_TD_5719439_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_999544_s, &tv_r_Filter_3_999544_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4818348_input: " << tbl_SerializeFromObject_TD_4818348_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_945016_s, &tv_r_JOIN_INNER_3_945016_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_465642_output: " << tbl_JOIN_LEFTSEMI_TD_465642_output.getNumRow() << " " << "tbl_Filter_TD_4332910_output: " << tbl_Filter_TD_4332910_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_517048_s, &tv_r_Filter_2_517048_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3347701_input: " << tbl_SerializeFromObject_TD_3347701_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_655847_s, &tv_r_JOIN_INNER_2_655847_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_380467_output: " << tbl_JOIN_INNER_TD_380467_output.getNumRow() << " " << "tbl_Filter_TD_3765369_output: " << tbl_Filter_TD_3765369_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_182086_s, &tv_r_JOIN_INNER_1_182086_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2928666_output: " << tbl_JOIN_INNER_TD_2928666_output.getNumRow() << " " << "tbl_Filter_TD_2871122_output: " << tbl_Filter_TD_2871122_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_669135_s, &tv_r_Aggregate_0_669135_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18045_output: " << tbl_JOIN_INNER_TD_18045_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 8.581382 * 1000 << "ms" << std::endl; 
    return 0; 
}
