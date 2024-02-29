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
    Table tbl_GlobalLimit_TD_042503_output("tbl_GlobalLimit_TD_042503_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_042503_output.allocateHost();
    Table tbl_LocalLimit_TD_1340039_output("tbl_LocalLimit_TD_1340039_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1340039_output.allocateHost();
    Table tbl_Sort_TD_2698032_output("tbl_Sort_TD_2698032_output", 6100000, 5, "");
    tbl_Sort_TD_2698032_output.allocateHost();
    Table tbl_Aggregate_TD_3469911_output("tbl_Aggregate_TD_3469911_output", 6100000, 5, "");
    tbl_Aggregate_TD_3469911_output.allocateHost();
    Table tbl_Expand_TD_4641929_output("tbl_Expand_TD_4641929_output", 6100000, 6, "");
    tbl_Expand_TD_4641929_output.allocateHost();
    Table tbl_Union_TD_5500647_output("tbl_Union_TD_5500647_output", 6100000, 5, "");
    tbl_Union_TD_5500647_output.allocateHost();
    Table tbl_Aggregate_TD_6377967_output("tbl_Aggregate_TD_6377967_output", 6100000, 5, "");
    tbl_Aggregate_TD_6377967_output.allocateHost();
    Table tbl_Aggregate_TD_6853031_output("tbl_Aggregate_TD_6853031_output", 6100000, 5, "");
    tbl_Aggregate_TD_6853031_output.allocateHost();
    Table tbl_Aggregate_TD_68174_output("tbl_Aggregate_TD_68174_output", 6100000, 5, "");
    tbl_Aggregate_TD_68174_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7305513_output("tbl_JOIN_INNER_TD_7305513_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7305513_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7734937_output("tbl_JOIN_INNER_TD_7734937_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7734937_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7506229_output("tbl_JOIN_INNER_TD_7506229_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7506229_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8935998_output("tbl_JOIN_INNER_TD_8935998_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8935998_output.allocateHost();
    Table tbl_Filter_TD_8416531_output("tbl_Filter_TD_8416531_output", 6100000, 2, "");
    tbl_Filter_TD_8416531_output.allocateHost();
    Table tbl_JOIN_INNER_TD_864901_output("tbl_JOIN_INNER_TD_864901_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_864901_output.allocateHost();
    Table tbl_Filter_TD_8568976_output("tbl_Filter_TD_8568976_output", 6100000, 2, "");
    tbl_Filter_TD_8568976_output.allocateHost();
    Table tbl_JOIN_INNER_TD_898670_output("tbl_JOIN_INNER_TD_898670_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_898670_output.allocateHost();
    Table tbl_Filter_TD_8908160_output("tbl_Filter_TD_8908160_output", 6100000, 2, "");
    tbl_Filter_TD_8908160_output.allocateHost();
    Table tbl_Union_TD_9154141_output("tbl_Union_TD_9154141_output", 6100000, 6, "");
    tbl_Union_TD_9154141_output.allocateHost();
    Table tbl_Filter_TD_9118376_output("tbl_Filter_TD_9118376_output", 6100000, 1, "");
    tbl_Filter_TD_9118376_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9746654_input;
    tbl_SerializeFromObject_TD_9746654_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9746654_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9746654_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9746654_input.allocateHost();
    tbl_SerializeFromObject_TD_9746654_input.loadHost();
    Table tbl_Union_TD_9782858_output("tbl_Union_TD_9782858_output", 6100000, 6, "");
    tbl_Union_TD_9782858_output.allocateHost();
    Table tbl_Filter_TD_9164580_output("tbl_Filter_TD_9164580_output", 6100000, 1, "");
    tbl_Filter_TD_9164580_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9111814_input;
    tbl_SerializeFromObject_TD_9111814_input = Table("catalog_page", catalog_page_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9111814_input.addCol("cp_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_9111814_input.addCol("cp_catalog_page_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9111814_input.allocateHost();
    tbl_SerializeFromObject_TD_9111814_input.loadHost();
    Table tbl_Union_TD_9149122_output("tbl_Union_TD_9149122_output", 6100000, 6, "");
    tbl_Union_TD_9149122_output.allocateHost();
    Table tbl_Filter_TD_9518619_output("tbl_Filter_TD_9518619_output", 6100000, 1, "");
    tbl_Filter_TD_9518619_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9413481_input;
    tbl_SerializeFromObject_TD_9413481_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9413481_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_9413481_input.addCol("web_site_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9413481_input.allocateHost();
    tbl_SerializeFromObject_TD_9413481_input.loadHost();
    Table tbl_Project_TD_10598873_output("tbl_Project_TD_10598873_output", 6100000, 6, "");
    tbl_Project_TD_10598873_output.allocateHost();
    Table tbl_Project_TD_10300903_output("tbl_Project_TD_10300903_output", 6100000, 6, "");
    tbl_Project_TD_10300903_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10330_input;
    tbl_SerializeFromObject_TD_10330_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10330_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10330_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10330_input.allocateHost();
    tbl_SerializeFromObject_TD_10330_input.loadHost();
    Table tbl_Project_TD_1021780_output("tbl_Project_TD_1021780_output", 6100000, 6, "");
    tbl_Project_TD_1021780_output.allocateHost();
    Table tbl_Project_TD_10646817_output("tbl_Project_TD_10646817_output", 6100000, 6, "");
    tbl_Project_TD_10646817_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10281500_input;
    tbl_SerializeFromObject_TD_10281500_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10281500_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10281500_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10281500_input.allocateHost();
    tbl_SerializeFromObject_TD_10281500_input.loadHost();
    Table tbl_Project_TD_10165731_output("tbl_Project_TD_10165731_output", 6100000, 6, "");
    tbl_Project_TD_10165731_output.allocateHost();
    Table tbl_Project_TD_1073998_output("tbl_Project_TD_1073998_output", 6100000, 6, "");
    tbl_Project_TD_1073998_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10543457_input;
    tbl_SerializeFromObject_TD_10543457_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10543457_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10543457_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10543457_input.allocateHost();
    tbl_SerializeFromObject_TD_10543457_input.loadHost();
    Table tbl_Filter_TD_11576817_output("tbl_Filter_TD_11576817_output", 6100000, 4, "");
    tbl_Filter_TD_11576817_output.allocateHost();
    Table tbl_Filter_TD_11770214_output("tbl_Filter_TD_11770214_output", 6100000, 4, "");
    tbl_Filter_TD_11770214_output.allocateHost();
    Table tbl_Filter_TD_11323485_output("tbl_Filter_TD_11323485_output", 6100000, 4, "");
    tbl_Filter_TD_11323485_output.allocateHost();
    Table tbl_Filter_TD_11913431_output("tbl_Filter_TD_11913431_output", 6100000, 4, "");
    tbl_Filter_TD_11913431_output.allocateHost();
    Table tbl_Filter_TD_11207840_output("tbl_Filter_TD_11207840_output", 6100000, 4, "");
    tbl_Filter_TD_11207840_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11304473_output("tbl_JOIN_INNER_TD_11304473_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_11304473_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12550896_input;
    tbl_SerializeFromObject_TD_12550896_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12550896_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12550896_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12550896_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12550896_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12550896_input.allocateHost();
    tbl_SerializeFromObject_TD_12550896_input.loadHost();
    Table tbl_SerializeFromObject_TD_1245072_input;
    tbl_SerializeFromObject_TD_1245072_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1245072_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_1245072_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_1245072_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_1245072_input.addCol("sr_net_loss", 4);
    tbl_SerializeFromObject_TD_1245072_input.allocateHost();
    tbl_SerializeFromObject_TD_1245072_input.loadHost();
    Table tbl_SerializeFromObject_TD_12847759_input;
    tbl_SerializeFromObject_TD_12847759_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12847759_input.addCol("cs_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_12847759_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12847759_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12847759_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_12847759_input.allocateHost();
    tbl_SerializeFromObject_TD_12847759_input.loadHost();
    Table tbl_SerializeFromObject_TD_1220287_input;
    tbl_SerializeFromObject_TD_1220287_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1220287_input.addCol("cr_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_1220287_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_1220287_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_1220287_input.addCol("cr_net_loss", 4);
    tbl_SerializeFromObject_TD_1220287_input.allocateHost();
    tbl_SerializeFromObject_TD_1220287_input.loadHost();
    Table tbl_SerializeFromObject_TD_12862818_input;
    tbl_SerializeFromObject_TD_12862818_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12862818_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_12862818_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12862818_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12862818_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_12862818_input.allocateHost();
    tbl_SerializeFromObject_TD_12862818_input.loadHost();
    Table tbl_Filter_TD_12479154_output("tbl_Filter_TD_12479154_output", 6100000, 5, "");
    tbl_Filter_TD_12479154_output.allocateHost();
    Table tbl_Filter_TD_12681513_output("tbl_Filter_TD_12681513_output", 6100000, 3, "");
    tbl_Filter_TD_12681513_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13357257_input;
    tbl_SerializeFromObject_TD_13357257_input = Table("web_returns", web_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13357257_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_13357257_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_13357257_input.addCol("wr_order_number", 8);
    tbl_SerializeFromObject_TD_13357257_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_13357257_input.addCol("wr_net_loss", 4);
    tbl_SerializeFromObject_TD_13357257_input.allocateHost();
    tbl_SerializeFromObject_TD_13357257_input.loadHost();
    Table tbl_SerializeFromObject_TD_13656707_input;
    tbl_SerializeFromObject_TD_13656707_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13656707_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13656707_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_13656707_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_13656707_input.allocateHost();
    tbl_SerializeFromObject_TD_13656707_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_8935998_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_864901_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_898670_output.allocateDevBuffer(context_h, 32);
    tbl_Union_TD_9154141_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9118376_output.allocateDevBuffer(context_h, 32);
    tbl_Union_TD_9782858_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9164580_output.allocateDevBuffer(context_h, 32);
    tbl_Union_TD_9149122_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9518619_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_11304473_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12479154_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12681513_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_8935998_cmds;
    cfg_JOIN_INNER_TD_8935998_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8935998_gqe_join (cfg_JOIN_INNER_TD_8935998_cmds.cmd);
    cfg_JOIN_INNER_TD_8935998_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_864901_cmds;
    cfg_JOIN_INNER_TD_864901_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_864901_gqe_join (cfg_JOIN_INNER_TD_864901_cmds.cmd);
    cfg_JOIN_INNER_TD_864901_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_898670_cmds;
    cfg_JOIN_INNER_TD_898670_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_898670_gqe_join (cfg_JOIN_INNER_TD_898670_cmds.cmd);
    cfg_JOIN_INNER_TD_898670_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_11304473_cmds;
    cfg_JOIN_INNER_TD_11304473_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_11304473_gqe_join (cfg_JOIN_INNER_TD_11304473_cmds.cmd);
    cfg_JOIN_INNER_TD_11304473_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_8935998;
    krnl_JOIN_INNER_TD_8935998 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8935998.setup(tbl_Union_TD_9154141_output, tbl_Filter_TD_9118376_output, tbl_JOIN_INNER_TD_8935998_output, cfg_JOIN_INNER_TD_8935998_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_864901;
    krnl_JOIN_INNER_TD_864901 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_864901.setup(tbl_Union_TD_9782858_output, tbl_Filter_TD_9164580_output, tbl_JOIN_INNER_TD_864901_output, cfg_JOIN_INNER_TD_864901_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_898670;
    krnl_JOIN_INNER_TD_898670 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_898670.setup(tbl_Union_TD_9149122_output, tbl_Filter_TD_9518619_output, tbl_JOIN_INNER_TD_898670_output, cfg_JOIN_INNER_TD_898670_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_11304473;
    krnl_JOIN_INNER_TD_11304473 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_11304473.setup(tbl_Filter_TD_12479154_output, tbl_Filter_TD_12681513_output, tbl_JOIN_INNER_TD_11304473_output, cfg_JOIN_INNER_TD_11304473_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_8935998;
    trans_JOIN_INNER_TD_8935998.setq(q_h);
    trans_JOIN_INNER_TD_8935998.add(&(cfg_JOIN_INNER_TD_8935998_cmds));
    transEngine trans_JOIN_INNER_TD_8935998_out;
    trans_JOIN_INNER_TD_8935998_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_864901;
    trans_JOIN_INNER_TD_864901.setq(q_h);
    trans_JOIN_INNER_TD_864901.add(&(cfg_JOIN_INNER_TD_864901_cmds));
    transEngine trans_JOIN_INNER_TD_864901_out;
    trans_JOIN_INNER_TD_864901_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_898670;
    trans_JOIN_INNER_TD_898670.setq(q_h);
    trans_JOIN_INNER_TD_898670.add(&(cfg_JOIN_INNER_TD_898670_cmds));
    transEngine trans_JOIN_INNER_TD_898670_out;
    trans_JOIN_INNER_TD_898670_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_11304473;
    trans_JOIN_INNER_TD_11304473.setq(q_h);
    trans_JOIN_INNER_TD_11304473.add(&(cfg_JOIN_INNER_TD_11304473_cmds));
    transEngine trans_JOIN_INNER_TD_11304473_out;
    trans_JOIN_INNER_TD_11304473_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8935998;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8935998;
    std::vector<cl::Event> events_JOIN_INNER_TD_8935998;
    events_h2d_wr_JOIN_INNER_TD_8935998.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8935998.resize(1);
    events_JOIN_INNER_TD_8935998.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8935998;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8935998;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_864901;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_864901;
    std::vector<cl::Event> events_JOIN_INNER_TD_864901;
    events_h2d_wr_JOIN_INNER_TD_864901.resize(1);
    events_d2h_rd_JOIN_INNER_TD_864901.resize(1);
    events_JOIN_INNER_TD_864901.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_864901;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_864901;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_898670;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_898670;
    std::vector<cl::Event> events_JOIN_INNER_TD_898670;
    events_h2d_wr_JOIN_INNER_TD_898670.resize(1);
    events_d2h_rd_JOIN_INNER_TD_898670.resize(1);
    events_JOIN_INNER_TD_898670.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_898670;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_898670;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_11304473;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_11304473;
    std::vector<cl::Event> events_JOIN_INNER_TD_11304473;
    events_h2d_wr_JOIN_INNER_TD_11304473.resize(1);
    events_d2h_rd_JOIN_INNER_TD_11304473.resize(1);
    events_JOIN_INNER_TD_11304473.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_11304473;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_11304473;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_879301_s, tv_r_Filter_12_879301_e;
    gettimeofday(&tv_r_Filter_12_879301_s, 0);
    SW_Filter_TD_12681513(tbl_SerializeFromObject_TD_13656707_input, tbl_Filter_TD_12681513_output);
    gettimeofday(&tv_r_Filter_12_879301_e, 0);

    struct timeval tv_r_Filter_12_97504_s, tv_r_Filter_12_97504_e;
    gettimeofday(&tv_r_Filter_12_97504_s, 0);
    SW_Filter_TD_12479154(tbl_SerializeFromObject_TD_13357257_input, tbl_Filter_TD_12479154_output);
    gettimeofday(&tv_r_Filter_12_97504_e, 0);

    struct timeval tv_r_JOIN_INNER_11_851915_s, tv_r_JOIN_INNER_11_851915_e;
    gettimeofday(&tv_r_JOIN_INNER_11_851915_s, 0);
    trans_JOIN_INNER_TD_11304473.add(&(tbl_Filter_TD_12479154_output));
    trans_JOIN_INNER_TD_11304473.add(&(tbl_Filter_TD_12681513_output));
    trans_JOIN_INNER_TD_11304473.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_11304473), &(events_h2d_wr_JOIN_INNER_TD_11304473[0]));
    events_grp_JOIN_INNER_TD_11304473.push_back(events_h2d_wr_JOIN_INNER_TD_11304473[0]);
    krnl_JOIN_INNER_TD_11304473.run(0, &(events_grp_JOIN_INNER_TD_11304473), &(events_JOIN_INNER_TD_11304473[0]));
    
    trans_JOIN_INNER_TD_11304473_out.add(&(tbl_JOIN_INNER_TD_11304473_output));
    trans_JOIN_INNER_TD_11304473_out.dev2host(0, &(events_JOIN_INNER_TD_11304473), &(events_d2h_rd_JOIN_INNER_TD_11304473[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_11_851915_e, 0);

    struct timeval tv_r_Filter_11_732054_s, tv_r_Filter_11_732054_e;
    gettimeofday(&tv_r_Filter_11_732054_s, 0);
    SW_Filter_TD_11207840(tbl_SerializeFromObject_TD_12862818_input, tbl_Filter_TD_11207840_output);
    gettimeofday(&tv_r_Filter_11_732054_e, 0);

    struct timeval tv_r_Filter_11_294722_s, tv_r_Filter_11_294722_e;
    gettimeofday(&tv_r_Filter_11_294722_s, 0);
    SW_Filter_TD_11913431(tbl_SerializeFromObject_TD_1220287_input, tbl_Filter_TD_11913431_output);
    gettimeofday(&tv_r_Filter_11_294722_e, 0);

    struct timeval tv_r_Filter_11_433235_s, tv_r_Filter_11_433235_e;
    gettimeofday(&tv_r_Filter_11_433235_s, 0);
    SW_Filter_TD_11323485(tbl_SerializeFromObject_TD_12847759_input, tbl_Filter_TD_11323485_output);
    gettimeofday(&tv_r_Filter_11_433235_e, 0);

    struct timeval tv_r_Filter_11_70050_s, tv_r_Filter_11_70050_e;
    gettimeofday(&tv_r_Filter_11_70050_s, 0);
    SW_Filter_TD_11770214(tbl_SerializeFromObject_TD_1245072_input, tbl_Filter_TD_11770214_output);
    gettimeofday(&tv_r_Filter_11_70050_e, 0);

    struct timeval tv_r_Filter_11_568475_s, tv_r_Filter_11_568475_e;
    gettimeofday(&tv_r_Filter_11_568475_s, 0);
    SW_Filter_TD_11576817(tbl_SerializeFromObject_TD_12550896_input, tbl_Filter_TD_11576817_output);
    gettimeofday(&tv_r_Filter_11_568475_e, 0);

    struct timeval tv_r_Project_10_344986_s, tv_r_Project_10_344986_e;
    gettimeofday(&tv_r_Project_10_344986_s, 0);
    SW_Project_TD_1073998(tbl_JOIN_INNER_TD_11304473_output, tbl_Project_TD_1073998_output);
    gettimeofday(&tv_r_Project_10_344986_e, 0);

    struct timeval tv_r_Project_10_950281_s, tv_r_Project_10_950281_e;
    gettimeofday(&tv_r_Project_10_950281_s, 0);
    SW_Project_TD_10165731(tbl_Filter_TD_11207840_output, tbl_Project_TD_10165731_output);
    gettimeofday(&tv_r_Project_10_950281_e, 0);

    struct timeval tv_r_Project_10_647175_s, tv_r_Project_10_647175_e;
    gettimeofday(&tv_r_Project_10_647175_s, 0);
    SW_Project_TD_10646817(tbl_Filter_TD_11913431_output, tbl_Project_TD_10646817_output);
    gettimeofday(&tv_r_Project_10_647175_e, 0);

    struct timeval tv_r_Project_10_14419_s, tv_r_Project_10_14419_e;
    gettimeofday(&tv_r_Project_10_14419_s, 0);
    SW_Project_TD_1021780(tbl_Filter_TD_11323485_output, tbl_Project_TD_1021780_output);
    gettimeofday(&tv_r_Project_10_14419_e, 0);

    struct timeval tv_r_Project_10_953228_s, tv_r_Project_10_953228_e;
    gettimeofday(&tv_r_Project_10_953228_s, 0);
    SW_Project_TD_10300903(tbl_Filter_TD_11770214_output, tbl_Project_TD_10300903_output);
    gettimeofday(&tv_r_Project_10_953228_e, 0);

    struct timeval tv_r_Project_10_717393_s, tv_r_Project_10_717393_e;
    gettimeofday(&tv_r_Project_10_717393_s, 0);
    SW_Project_TD_10598873(tbl_Filter_TD_11576817_output, tbl_Project_TD_10598873_output);
    gettimeofday(&tv_r_Project_10_717393_e, 0);

    struct timeval tv_r_Filter_9_81782_s, tv_r_Filter_9_81782_e;
    gettimeofday(&tv_r_Filter_9_81782_s, 0);
    SW_Filter_TD_9518619(tbl_SerializeFromObject_TD_10543457_input, tbl_Filter_TD_9518619_output);
    gettimeofday(&tv_r_Filter_9_81782_e, 0);

    struct timeval tv_r_Union_9_716745_s, tv_r_Union_9_716745_e;
    gettimeofday(&tv_r_Union_9_716745_s, 0);
    SW_Union_TD_9149122(tbl_Project_TD_10165731_output, tbl_Project_TD_1073998_output, tbl_Union_TD_9149122_output);
    gettimeofday(&tv_r_Union_9_716745_e, 0);

    struct timeval tv_r_Filter_9_521363_s, tv_r_Filter_9_521363_e;
    gettimeofday(&tv_r_Filter_9_521363_s, 0);
    SW_Filter_TD_9164580(tbl_SerializeFromObject_TD_10281500_input, tbl_Filter_TD_9164580_output);
    gettimeofday(&tv_r_Filter_9_521363_e, 0);

    struct timeval tv_r_Union_9_648395_s, tv_r_Union_9_648395_e;
    gettimeofday(&tv_r_Union_9_648395_s, 0);
    SW_Union_TD_9782858(tbl_Project_TD_1021780_output, tbl_Project_TD_10646817_output, tbl_Union_TD_9782858_output);
    gettimeofday(&tv_r_Union_9_648395_e, 0);

    struct timeval tv_r_Filter_9_449546_s, tv_r_Filter_9_449546_e;
    gettimeofday(&tv_r_Filter_9_449546_s, 0);
    SW_Filter_TD_9118376(tbl_SerializeFromObject_TD_10330_input, tbl_Filter_TD_9118376_output);
    gettimeofday(&tv_r_Filter_9_449546_e, 0);

    struct timeval tv_r_Union_9_812898_s, tv_r_Union_9_812898_e;
    gettimeofday(&tv_r_Union_9_812898_s, 0);
    SW_Union_TD_9154141(tbl_Project_TD_10598873_output, tbl_Project_TD_10300903_output, tbl_Union_TD_9154141_output);
    gettimeofday(&tv_r_Union_9_812898_e, 0);

    struct timeval tv_r_Filter_8_800784_s, tv_r_Filter_8_800784_e;
    gettimeofday(&tv_r_Filter_8_800784_s, 0);
    SW_Filter_TD_8908160(tbl_SerializeFromObject_TD_9413481_input, tbl_Filter_TD_8908160_output);
    gettimeofday(&tv_r_Filter_8_800784_e, 0);

    struct timeval tv_r_JOIN_INNER_8_575177_s, tv_r_JOIN_INNER_8_575177_e;
    gettimeofday(&tv_r_JOIN_INNER_8_575177_s, 0);
    trans_JOIN_INNER_TD_898670.add(&(tbl_Union_TD_9149122_output));
    trans_JOIN_INNER_TD_898670.add(&(tbl_Filter_TD_9518619_output));
    trans_JOIN_INNER_TD_898670.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_898670), &(events_h2d_wr_JOIN_INNER_TD_898670[0]));
    events_grp_JOIN_INNER_TD_898670.push_back(events_h2d_wr_JOIN_INNER_TD_898670[0]);
    krnl_JOIN_INNER_TD_898670.run(0, &(events_grp_JOIN_INNER_TD_898670), &(events_JOIN_INNER_TD_898670[0]));
    
    trans_JOIN_INNER_TD_898670_out.add(&(tbl_JOIN_INNER_TD_898670_output));
    trans_JOIN_INNER_TD_898670_out.dev2host(0, &(events_JOIN_INNER_TD_898670), &(events_d2h_rd_JOIN_INNER_TD_898670[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_575177_e, 0);

    struct timeval tv_r_Filter_8_152312_s, tv_r_Filter_8_152312_e;
    gettimeofday(&tv_r_Filter_8_152312_s, 0);
    SW_Filter_TD_8568976(tbl_SerializeFromObject_TD_9111814_input, tbl_Filter_TD_8568976_output);
    gettimeofday(&tv_r_Filter_8_152312_e, 0);

    struct timeval tv_r_JOIN_INNER_8_386322_s, tv_r_JOIN_INNER_8_386322_e;
    gettimeofday(&tv_r_JOIN_INNER_8_386322_s, 0);
    trans_JOIN_INNER_TD_864901.add(&(tbl_Union_TD_9782858_output));
    trans_JOIN_INNER_TD_864901.add(&(tbl_Filter_TD_9164580_output));
    trans_JOIN_INNER_TD_864901.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_864901), &(events_h2d_wr_JOIN_INNER_TD_864901[0]));
    events_grp_JOIN_INNER_TD_864901.push_back(events_h2d_wr_JOIN_INNER_TD_864901[0]);
    krnl_JOIN_INNER_TD_864901.run(0, &(events_grp_JOIN_INNER_TD_864901), &(events_JOIN_INNER_TD_864901[0]));
    
    trans_JOIN_INNER_TD_864901_out.add(&(tbl_JOIN_INNER_TD_864901_output));
    trans_JOIN_INNER_TD_864901_out.dev2host(0, &(events_JOIN_INNER_TD_864901), &(events_d2h_rd_JOIN_INNER_TD_864901[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_386322_e, 0);

    struct timeval tv_r_Filter_8_339030_s, tv_r_Filter_8_339030_e;
    gettimeofday(&tv_r_Filter_8_339030_s, 0);
    SW_Filter_TD_8416531(tbl_SerializeFromObject_TD_9746654_input, tbl_Filter_TD_8416531_output);
    gettimeofday(&tv_r_Filter_8_339030_e, 0);

    struct timeval tv_r_JOIN_INNER_8_74447_s, tv_r_JOIN_INNER_8_74447_e;
    gettimeofday(&tv_r_JOIN_INNER_8_74447_s, 0);
    trans_JOIN_INNER_TD_8935998.add(&(tbl_Union_TD_9154141_output));
    trans_JOIN_INNER_TD_8935998.add(&(tbl_Filter_TD_9118376_output));
    trans_JOIN_INNER_TD_8935998.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8935998), &(events_h2d_wr_JOIN_INNER_TD_8935998[0]));
    events_grp_JOIN_INNER_TD_8935998.push_back(events_h2d_wr_JOIN_INNER_TD_8935998[0]);
    krnl_JOIN_INNER_TD_8935998.run(0, &(events_grp_JOIN_INNER_TD_8935998), &(events_JOIN_INNER_TD_8935998[0]));
    
    trans_JOIN_INNER_TD_8935998_out.add(&(tbl_JOIN_INNER_TD_8935998_output));
    trans_JOIN_INNER_TD_8935998_out.dev2host(0, &(events_JOIN_INNER_TD_8935998), &(events_d2h_rd_JOIN_INNER_TD_8935998[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_74447_e, 0);

    struct timeval tv_r_JOIN_INNER_7_946082_s, tv_r_JOIN_INNER_7_946082_e;
    gettimeofday(&tv_r_JOIN_INNER_7_946082_s, 0);
    SW_JOIN_INNER_TD_7506229(tbl_JOIN_INNER_TD_898670_output, tbl_Filter_TD_8908160_output, tbl_JOIN_INNER_TD_7506229_output);
    gettimeofday(&tv_r_JOIN_INNER_7_946082_e, 0);

    struct timeval tv_r_JOIN_INNER_7_86641_s, tv_r_JOIN_INNER_7_86641_e;
    gettimeofday(&tv_r_JOIN_INNER_7_86641_s, 0);
    SW_JOIN_INNER_TD_7734937(tbl_JOIN_INNER_TD_864901_output, tbl_Filter_TD_8568976_output, tbl_JOIN_INNER_TD_7734937_output);
    gettimeofday(&tv_r_JOIN_INNER_7_86641_e, 0);

    struct timeval tv_r_JOIN_INNER_7_71761_s, tv_r_JOIN_INNER_7_71761_e;
    gettimeofday(&tv_r_JOIN_INNER_7_71761_s, 0);
    SW_JOIN_INNER_TD_7305513(tbl_JOIN_INNER_TD_8935998_output, tbl_Filter_TD_8416531_output, tbl_JOIN_INNER_TD_7305513_output);
    gettimeofday(&tv_r_JOIN_INNER_7_71761_e, 0);

    struct timeval tv_r_Aggregate_6_396602_s, tv_r_Aggregate_6_396602_e;
    gettimeofday(&tv_r_Aggregate_6_396602_s, 0);
    SW_Aggregate_TD_68174(tbl_JOIN_INNER_TD_7506229_output, tbl_Aggregate_TD_68174_output);
    gettimeofday(&tv_r_Aggregate_6_396602_e, 0);

    struct timeval tv_r_Aggregate_6_302361_s, tv_r_Aggregate_6_302361_e;
    gettimeofday(&tv_r_Aggregate_6_302361_s, 0);
    SW_Aggregate_TD_6853031(tbl_JOIN_INNER_TD_7734937_output, tbl_Aggregate_TD_6853031_output);
    gettimeofday(&tv_r_Aggregate_6_302361_e, 0);

    struct timeval tv_r_Aggregate_6_99624_s, tv_r_Aggregate_6_99624_e;
    gettimeofday(&tv_r_Aggregate_6_99624_s, 0);
    SW_Aggregate_TD_6377967(tbl_JOIN_INNER_TD_7305513_output, tbl_Aggregate_TD_6377967_output);
    gettimeofday(&tv_r_Aggregate_6_99624_e, 0);

    struct timeval tv_r_Union_5_676755_s, tv_r_Union_5_676755_e;
    gettimeofday(&tv_r_Union_5_676755_s, 0);
    SW_Union_TD_5500647(tbl_Aggregate_TD_6377967_output, tbl_Aggregate_TD_6853031_output, tbl_Aggregate_TD_68174_output, tbl_Union_TD_5500647_output);
    gettimeofday(&tv_r_Union_5_676755_e, 0);

    struct timeval tv_r_Expand_4_820797_s, tv_r_Expand_4_820797_e;
    gettimeofday(&tv_r_Expand_4_820797_s, 0);
    SW_Expand_TD_4641929(tbl_Union_TD_5500647_output, tbl_Expand_TD_4641929_output);
    gettimeofday(&tv_r_Expand_4_820797_e, 0);

    struct timeval tv_r_Aggregate_3_222706_s, tv_r_Aggregate_3_222706_e;
    gettimeofday(&tv_r_Aggregate_3_222706_s, 0);
    SW_Aggregate_TD_3469911(tbl_Expand_TD_4641929_output, tbl_Aggregate_TD_3469911_output);
    gettimeofday(&tv_r_Aggregate_3_222706_e, 0);

    struct timeval tv_r_Sort_2_659781_s, tv_r_Sort_2_659781_e;
    gettimeofday(&tv_r_Sort_2_659781_s, 0);
    SW_Sort_TD_2698032(tbl_Aggregate_TD_3469911_output, tbl_Sort_TD_2698032_output);
    gettimeofday(&tv_r_Sort_2_659781_e, 0);

    struct timeval tv_r_LocalLimit_1_696829_s, tv_r_LocalLimit_1_696829_e;
    gettimeofday(&tv_r_LocalLimit_1_696829_s, 0);
    SW_LocalLimit_TD_1340039(tbl_Sort_TD_2698032_output, tbl_LocalLimit_TD_1340039_output);
    gettimeofday(&tv_r_LocalLimit_1_696829_e, 0);

    struct timeval tv_r_GlobalLimit_0_491590_s, tv_r_GlobalLimit_0_491590_e;
    gettimeofday(&tv_r_GlobalLimit_0_491590_s, 0);
    SW_GlobalLimit_TD_042503(tbl_LocalLimit_TD_1340039_output, tbl_GlobalLimit_TD_042503_output);
    gettimeofday(&tv_r_GlobalLimit_0_491590_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_879301_s, &tv_r_Filter_12_879301_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13656707_input: " << tbl_SerializeFromObject_TD_13656707_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_97504_s, &tv_r_Filter_12_97504_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13357257_input: " << tbl_SerializeFromObject_TD_13357257_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_851915_s, &tv_r_JOIN_INNER_11_851915_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12479154_output: " << tbl_Filter_TD_12479154_output.getNumRow() << " " << "tbl_Filter_TD_12681513_output: " << tbl_Filter_TD_12681513_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_732054_s, &tv_r_Filter_11_732054_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12862818_input: " << tbl_SerializeFromObject_TD_12862818_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_294722_s, &tv_r_Filter_11_294722_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1220287_input: " << tbl_SerializeFromObject_TD_1220287_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_433235_s, &tv_r_Filter_11_433235_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12847759_input: " << tbl_SerializeFromObject_TD_12847759_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_70050_s, &tv_r_Filter_11_70050_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1245072_input: " << tbl_SerializeFromObject_TD_1245072_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_568475_s, &tv_r_Filter_11_568475_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12550896_input: " << tbl_SerializeFromObject_TD_12550896_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_344986_s, &tv_r_Project_10_344986_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11304473_output: " << tbl_JOIN_INNER_TD_11304473_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_950281_s, &tv_r_Project_10_950281_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11207840_output: " << tbl_Filter_TD_11207840_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_647175_s, &tv_r_Project_10_647175_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11913431_output: " << tbl_Filter_TD_11913431_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_14419_s, &tv_r_Project_10_14419_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11323485_output: " << tbl_Filter_TD_11323485_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_953228_s, &tv_r_Project_10_953228_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11770214_output: " << tbl_Filter_TD_11770214_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_717393_s, &tv_r_Project_10_717393_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11576817_output: " << tbl_Filter_TD_11576817_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_81782_s, &tv_r_Filter_9_81782_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10543457_input: " << tbl_SerializeFromObject_TD_10543457_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_716745_s, &tv_r_Union_9_716745_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10165731_output: " << tbl_Project_TD_10165731_output.getNumRow() << " " << "tbl_Project_TD_1073998_output: " << tbl_Project_TD_1073998_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_521363_s, &tv_r_Filter_9_521363_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10281500_input: " << tbl_SerializeFromObject_TD_10281500_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_648395_s, &tv_r_Union_9_648395_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1021780_output: " << tbl_Project_TD_1021780_output.getNumRow() << " " << "tbl_Project_TD_10646817_output: " << tbl_Project_TD_10646817_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_449546_s, &tv_r_Filter_9_449546_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10330_input: " << tbl_SerializeFromObject_TD_10330_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_812898_s, &tv_r_Union_9_812898_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10598873_output: " << tbl_Project_TD_10598873_output.getNumRow() << " " << "tbl_Project_TD_10300903_output: " << tbl_Project_TD_10300903_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_800784_s, &tv_r_Filter_8_800784_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9413481_input: " << tbl_SerializeFromObject_TD_9413481_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_575177_s, &tv_r_JOIN_INNER_8_575177_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9149122_output: " << tbl_Union_TD_9149122_output.getNumRow() << " " << "tbl_Filter_TD_9518619_output: " << tbl_Filter_TD_9518619_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_152312_s, &tv_r_Filter_8_152312_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9111814_input: " << tbl_SerializeFromObject_TD_9111814_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_386322_s, &tv_r_JOIN_INNER_8_386322_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9782858_output: " << tbl_Union_TD_9782858_output.getNumRow() << " " << "tbl_Filter_TD_9164580_output: " << tbl_Filter_TD_9164580_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_339030_s, &tv_r_Filter_8_339030_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9746654_input: " << tbl_SerializeFromObject_TD_9746654_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_74447_s, &tv_r_JOIN_INNER_8_74447_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9154141_output: " << tbl_Union_TD_9154141_output.getNumRow() << " " << "tbl_Filter_TD_9118376_output: " << tbl_Filter_TD_9118376_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_946082_s, &tv_r_JOIN_INNER_7_946082_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_898670_output: " << tbl_JOIN_INNER_TD_898670_output.getNumRow() << " " << "tbl_Filter_TD_8908160_output: " << tbl_Filter_TD_8908160_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_86641_s, &tv_r_JOIN_INNER_7_86641_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_864901_output: " << tbl_JOIN_INNER_TD_864901_output.getNumRow() << " " << "tbl_Filter_TD_8568976_output: " << tbl_Filter_TD_8568976_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_71761_s, &tv_r_JOIN_INNER_7_71761_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8935998_output: " << tbl_JOIN_INNER_TD_8935998_output.getNumRow() << " " << "tbl_Filter_TD_8416531_output: " << tbl_Filter_TD_8416531_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_396602_s, &tv_r_Aggregate_6_396602_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7506229_output: " << tbl_JOIN_INNER_TD_7506229_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_302361_s, &tv_r_Aggregate_6_302361_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7734937_output: " << tbl_JOIN_INNER_TD_7734937_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_99624_s, &tv_r_Aggregate_6_99624_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7305513_output: " << tbl_JOIN_INNER_TD_7305513_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_5: " << tvdiff(&tv_r_Union_5_676755_s, &tv_r_Union_5_676755_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6377967_output: " << tbl_Aggregate_TD_6377967_output.getNumRow() << " " << "tbl_Aggregate_TD_6853031_output: " << tbl_Aggregate_TD_6853031_output.getNumRow() << " " << "tbl_Aggregate_TD_68174_output: " << tbl_Aggregate_TD_68174_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_820797_s, &tv_r_Expand_4_820797_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_5500647_output: " << tbl_Union_TD_5500647_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_222706_s, &tv_r_Aggregate_3_222706_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4641929_output: " << tbl_Expand_TD_4641929_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_659781_s, &tv_r_Sort_2_659781_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3469911_output: " << tbl_Aggregate_TD_3469911_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_696829_s, &tv_r_LocalLimit_1_696829_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2698032_output: " << tbl_Sort_TD_2698032_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_491590_s, &tv_r_GlobalLimit_0_491590_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1340039_output: " << tbl_LocalLimit_TD_1340039_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.2529185 * 1000 << "ms" << std::endl; 
    return 0; 
}
