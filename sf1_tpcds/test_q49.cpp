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

#include "cfgFunc_q49.hpp" 
#include "q49.hpp" 

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
    std::cout << "NOTE:running query #49\n."; 
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
    Table tbl_GlobalLimit_TD_0528965_output("tbl_GlobalLimit_TD_0528965_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0528965_output.allocateHost();
    Table tbl_LocalLimit_TD_1162753_output("tbl_LocalLimit_TD_1162753_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1162753_output.allocateHost();
    Table tbl_Sort_TD_2216964_output("tbl_Sort_TD_2216964_output", 6100000, 5, "");
    tbl_Sort_TD_2216964_output.allocateHost();
    Table tbl_Aggregate_TD_3462906_output("tbl_Aggregate_TD_3462906_output", 6100000, 5, "");
    tbl_Aggregate_TD_3462906_output.allocateHost();
    Table tbl_Union_TD_4521042_output("tbl_Union_TD_4521042_output", 6100000, 5, "");
    tbl_Union_TD_4521042_output.allocateHost();
    Table tbl_Project_TD_5846592_output("tbl_Project_TD_5846592_output", 6100000, 5, "");
    tbl_Project_TD_5846592_output.allocateHost();
    Table tbl_Project_TD_5124165_output("tbl_Project_TD_5124165_output", 6100000, 5, "");
    tbl_Project_TD_5124165_output.allocateHost();
    Table tbl_Project_TD_5793817_output("tbl_Project_TD_5793817_output", 6100000, 5, "");
    tbl_Project_TD_5793817_output.allocateHost();
    Table tbl_Filter_TD_6674727_output("tbl_Filter_TD_6674727_output", 6100000, 4, "");
    tbl_Filter_TD_6674727_output.allocateHost();
    Table tbl_Filter_TD_6706004_output("tbl_Filter_TD_6706004_output", 6100000, 4, "");
    tbl_Filter_TD_6706004_output.allocateHost();
    Table tbl_Filter_TD_6513108_output("tbl_Filter_TD_6513108_output", 6100000, 4, "");
    tbl_Filter_TD_6513108_output.allocateHost();
    Table tbl_Window_TD_7805944_output("tbl_Window_TD_7805944_output", 6100000, 5, "");
    tbl_Window_TD_7805944_output.allocateHost();
    Table tbl_Window_TD_7556800_output("tbl_Window_TD_7556800_output", 6100000, 5, "");
    tbl_Window_TD_7556800_output.allocateHost();
    Table tbl_Window_TD_7649254_output("tbl_Window_TD_7649254_output", 6100000, 5, "");
    tbl_Window_TD_7649254_output.allocateHost();
    Table tbl_Window_TD_8243948_output("tbl_Window_TD_8243948_output", 6100000, 4, "");
    tbl_Window_TD_8243948_output.allocateHost();
    Table tbl_Window_TD_8965768_output("tbl_Window_TD_8965768_output", 6100000, 4, "");
    tbl_Window_TD_8965768_output.allocateHost();
    Table tbl_Window_TD_845991_output("tbl_Window_TD_845991_output", 6100000, 4, "");
    tbl_Window_TD_845991_output.allocateHost();
    Table tbl_Aggregate_TD_9487517_output("tbl_Aggregate_TD_9487517_output", 6100000, 3, "");
    tbl_Aggregate_TD_9487517_output.allocateHost();
    Table tbl_Aggregate_TD_982465_output("tbl_Aggregate_TD_982465_output", 6100000, 3, "");
    tbl_Aggregate_TD_982465_output.allocateHost();
    Table tbl_Aggregate_TD_993878_output("tbl_Aggregate_TD_993878_output", 6100000, 3, "");
    tbl_Aggregate_TD_993878_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10867346_output("tbl_JOIN_INNER_TD_10867346_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10867346_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10980218_output("tbl_JOIN_INNER_TD_10980218_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10980218_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10120449_output("tbl_JOIN_INNER_TD_10120449_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10120449_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11956457_output("tbl_JOIN_INNER_TD_11956457_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11956457_output.allocateHost();
    Table tbl_Filter_TD_11465919_output("tbl_Filter_TD_11465919_output", 6100000, 1, "");
    tbl_Filter_TD_11465919_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11239903_output("tbl_JOIN_INNER_TD_11239903_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11239903_output.allocateHost();
    Table tbl_Filter_TD_11681337_output("tbl_Filter_TD_11681337_output", 6100000, 1, "");
    tbl_Filter_TD_11681337_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11364961_output("tbl_JOIN_INNER_TD_11364961_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11364961_output.allocateHost();
    Table tbl_Filter_TD_11255930_output("tbl_Filter_TD_11255930_output", 6100000, 1, "");
    tbl_Filter_TD_11255930_output.allocateHost();
    Table tbl_Filter_TD_1280414_output("tbl_Filter_TD_1280414_output", 6100000, 5, "");
    tbl_Filter_TD_1280414_output.allocateHost();
    Table tbl_Filter_TD_12354449_output("tbl_Filter_TD_12354449_output", 6100000, 4, "");
    tbl_Filter_TD_12354449_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12266937_input;
    tbl_SerializeFromObject_TD_12266937_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12266937_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12266937_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12266937_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12266937_input.allocateHost();
    tbl_SerializeFromObject_TD_12266937_input.loadHost();
    Table tbl_Filter_TD_12320111_output("tbl_Filter_TD_12320111_output", 6100000, 5, "");
    tbl_Filter_TD_12320111_output.allocateHost();
    Table tbl_Filter_TD_12744627_output("tbl_Filter_TD_12744627_output", 6100000, 4, "");
    tbl_Filter_TD_12744627_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12577914_input;
    tbl_SerializeFromObject_TD_12577914_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12577914_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12577914_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12577914_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12577914_input.allocateHost();
    tbl_SerializeFromObject_TD_12577914_input.loadHost();
    Table tbl_Filter_TD_12977556_output("tbl_Filter_TD_12977556_output", 6100000, 5, "");
    tbl_Filter_TD_12977556_output.allocateHost();
    Table tbl_Filter_TD_12599822_output("tbl_Filter_TD_12599822_output", 6100000, 4, "");
    tbl_Filter_TD_12599822_output.allocateHost();
    Table tbl_SerializeFromObject_TD_129848_input;
    tbl_SerializeFromObject_TD_129848_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_129848_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_129848_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_129848_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_129848_input.allocateHost();
    tbl_SerializeFromObject_TD_129848_input.loadHost();
    Table tbl_SerializeFromObject_TD_13490094_input;
    tbl_SerializeFromObject_TD_13490094_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13490094_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13490094_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13490094_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_13490094_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13490094_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_13490094_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_13490094_input.allocateHost();
    tbl_SerializeFromObject_TD_13490094_input.loadHost();
    Table tbl_SerializeFromObject_TD_13378243_input;
    tbl_SerializeFromObject_TD_13378243_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13378243_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_13378243_input.addCol("wr_order_number", 8);
    tbl_SerializeFromObject_TD_13378243_input.addCol("wr_return_quantity", 4);
    tbl_SerializeFromObject_TD_13378243_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_13378243_input.allocateHost();
    tbl_SerializeFromObject_TD_13378243_input.loadHost();
    Table tbl_SerializeFromObject_TD_1349578_input;
    tbl_SerializeFromObject_TD_1349578_input = Table("catalog_sales", catalog_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_1349578_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1349578_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_1349578_input.addCol("cs_order_number", 8);
    tbl_SerializeFromObject_TD_1349578_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_1349578_input.addCol("cs_net_paid", 4);
    tbl_SerializeFromObject_TD_1349578_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_1349578_input.allocateHost();
    tbl_SerializeFromObject_TD_1349578_input.loadHost();
    Table tbl_SerializeFromObject_TD_13487824_input;
    tbl_SerializeFromObject_TD_13487824_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13487824_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_13487824_input.addCol("cr_order_number", 8);
    tbl_SerializeFromObject_TD_13487824_input.addCol("cr_return_quantity", 4);
    tbl_SerializeFromObject_TD_13487824_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_13487824_input.allocateHost();
    tbl_SerializeFromObject_TD_13487824_input.loadHost();
    Table tbl_SerializeFromObject_TD_13728018_input;
    tbl_SerializeFromObject_TD_13728018_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13728018_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13728018_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13728018_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_13728018_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13728018_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_13728018_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_13728018_input.allocateHost();
    tbl_SerializeFromObject_TD_13728018_input.loadHost();
    Table tbl_SerializeFromObject_TD_13371899_input;
    tbl_SerializeFromObject_TD_13371899_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13371899_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_13371899_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_13371899_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_13371899_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_13371899_input.allocateHost();
    tbl_SerializeFromObject_TD_13371899_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_10867346_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10980218_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10120449_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_11956457_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11465919_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_11239903_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11681337_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_11364961_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11255930_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_1280414_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12354449_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12320111_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12744627_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12977556_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12599822_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_10867346_cmds;
    cfg_JOIN_INNER_TD_10867346_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10867346_gqe_join (cfg_JOIN_INNER_TD_10867346_cmds.cmd);
    cfg_JOIN_INNER_TD_10867346_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_10980218_cmds;
    cfg_JOIN_INNER_TD_10980218_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10980218_gqe_join (cfg_JOIN_INNER_TD_10980218_cmds.cmd);
    cfg_JOIN_INNER_TD_10980218_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_10120449_cmds;
    cfg_JOIN_INNER_TD_10120449_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10120449_gqe_join (cfg_JOIN_INNER_TD_10120449_cmds.cmd);
    cfg_JOIN_INNER_TD_10120449_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_11956457_cmds;
    cfg_JOIN_INNER_TD_11956457_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_11956457_gqe_join (cfg_JOIN_INNER_TD_11956457_cmds.cmd);
    cfg_JOIN_INNER_TD_11956457_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_11239903_cmds;
    cfg_JOIN_INNER_TD_11239903_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_11239903_gqe_join (cfg_JOIN_INNER_TD_11239903_cmds.cmd);
    cfg_JOIN_INNER_TD_11239903_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_11364961_cmds;
    cfg_JOIN_INNER_TD_11364961_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_11364961_gqe_join (cfg_JOIN_INNER_TD_11364961_cmds.cmd);
    cfg_JOIN_INNER_TD_11364961_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_10867346;
    krnl_JOIN_INNER_TD_10867346 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10867346.setup(tbl_JOIN_INNER_TD_11956457_output, tbl_Filter_TD_11465919_output, tbl_JOIN_INNER_TD_10867346_output, cfg_JOIN_INNER_TD_10867346_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_10980218;
    krnl_JOIN_INNER_TD_10980218 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10980218.setup(tbl_JOIN_INNER_TD_11239903_output, tbl_Filter_TD_11681337_output, tbl_JOIN_INNER_TD_10980218_output, cfg_JOIN_INNER_TD_10980218_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_10120449;
    krnl_JOIN_INNER_TD_10120449 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10120449.setup(tbl_JOIN_INNER_TD_11364961_output, tbl_Filter_TD_11255930_output, tbl_JOIN_INNER_TD_10120449_output, cfg_JOIN_INNER_TD_10120449_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_11956457;
    krnl_JOIN_INNER_TD_11956457 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_11956457.setup(tbl_Filter_TD_1280414_output, tbl_Filter_TD_12354449_output, tbl_JOIN_INNER_TD_11956457_output, cfg_JOIN_INNER_TD_11956457_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_11239903;
    krnl_JOIN_INNER_TD_11239903 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_11239903.setup(tbl_Filter_TD_12320111_output, tbl_Filter_TD_12744627_output, tbl_JOIN_INNER_TD_11239903_output, cfg_JOIN_INNER_TD_11239903_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_11364961;
    krnl_JOIN_INNER_TD_11364961 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_11364961.setup(tbl_Filter_TD_12977556_output, tbl_Filter_TD_12599822_output, tbl_JOIN_INNER_TD_11364961_output, cfg_JOIN_INNER_TD_11364961_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_10867346;
    trans_JOIN_INNER_TD_10867346.setq(q_h);
    trans_JOIN_INNER_TD_10867346.add(&(cfg_JOIN_INNER_TD_10867346_cmds));
    transEngine trans_JOIN_INNER_TD_10867346_out;
    trans_JOIN_INNER_TD_10867346_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_10980218;
    trans_JOIN_INNER_TD_10980218.setq(q_h);
    trans_JOIN_INNER_TD_10980218.add(&(cfg_JOIN_INNER_TD_10980218_cmds));
    transEngine trans_JOIN_INNER_TD_10980218_out;
    trans_JOIN_INNER_TD_10980218_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_10120449;
    trans_JOIN_INNER_TD_10120449.setq(q_h);
    trans_JOIN_INNER_TD_10120449.add(&(cfg_JOIN_INNER_TD_10120449_cmds));
    transEngine trans_JOIN_INNER_TD_10120449_out;
    trans_JOIN_INNER_TD_10120449_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_11956457;
    trans_JOIN_INNER_TD_11956457.setq(q_h);
    trans_JOIN_INNER_TD_11956457.add(&(cfg_JOIN_INNER_TD_11956457_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_11239903;
    trans_JOIN_INNER_TD_11239903.setq(q_h);
    trans_JOIN_INNER_TD_11239903.add(&(cfg_JOIN_INNER_TD_11239903_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_11364961;
    trans_JOIN_INNER_TD_11364961.setq(q_h);
    trans_JOIN_INNER_TD_11364961.add(&(cfg_JOIN_INNER_TD_11364961_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10867346;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10867346;
    std::vector<cl::Event> events_JOIN_INNER_TD_10867346;
    events_h2d_wr_JOIN_INNER_TD_10867346.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10867346.resize(1);
    events_JOIN_INNER_TD_10867346.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10867346;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10867346;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10980218;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10980218;
    std::vector<cl::Event> events_JOIN_INNER_TD_10980218;
    events_h2d_wr_JOIN_INNER_TD_10980218.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10980218.resize(1);
    events_JOIN_INNER_TD_10980218.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10980218;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10980218;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10120449;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10120449;
    std::vector<cl::Event> events_JOIN_INNER_TD_10120449;
    events_h2d_wr_JOIN_INNER_TD_10120449.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10120449.resize(1);
    events_JOIN_INNER_TD_10120449.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10120449;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10120449;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_11956457;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_11956457;
    std::vector<cl::Event> events_JOIN_INNER_TD_11956457;
    events_h2d_wr_JOIN_INNER_TD_11956457.resize(1);
    events_d2h_rd_JOIN_INNER_TD_11956457.resize(1);
    events_JOIN_INNER_TD_11956457.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_11956457;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_11956457;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_11239903;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_11239903;
    std::vector<cl::Event> events_JOIN_INNER_TD_11239903;
    events_h2d_wr_JOIN_INNER_TD_11239903.resize(1);
    events_d2h_rd_JOIN_INNER_TD_11239903.resize(1);
    events_JOIN_INNER_TD_11239903.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_11239903;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_11239903;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_11364961;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_11364961;
    std::vector<cl::Event> events_JOIN_INNER_TD_11364961;
    events_h2d_wr_JOIN_INNER_TD_11364961.resize(1);
    events_d2h_rd_JOIN_INNER_TD_11364961.resize(1);
    events_JOIN_INNER_TD_11364961.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_11364961;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_11364961;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_428563_s, tv_r_Filter_12_428563_e;
    gettimeofday(&tv_r_Filter_12_428563_s, 0);
    SW_Filter_TD_12599822(tbl_SerializeFromObject_TD_13371899_input, tbl_Filter_TD_12599822_output);
    gettimeofday(&tv_r_Filter_12_428563_e, 0);

    struct timeval tv_r_Filter_12_23046_s, tv_r_Filter_12_23046_e;
    gettimeofday(&tv_r_Filter_12_23046_s, 0);
    SW_Filter_TD_12977556(tbl_SerializeFromObject_TD_13728018_input, tbl_Filter_TD_12977556_output);
    gettimeofday(&tv_r_Filter_12_23046_e, 0);

    struct timeval tv_r_Filter_12_388444_s, tv_r_Filter_12_388444_e;
    gettimeofday(&tv_r_Filter_12_388444_s, 0);
    SW_Filter_TD_12744627(tbl_SerializeFromObject_TD_13487824_input, tbl_Filter_TD_12744627_output);
    gettimeofday(&tv_r_Filter_12_388444_e, 0);

    struct timeval tv_r_Filter_12_889767_s, tv_r_Filter_12_889767_e;
    gettimeofday(&tv_r_Filter_12_889767_s, 0);
    SW_Filter_TD_12320111(tbl_SerializeFromObject_TD_1349578_input, tbl_Filter_TD_12320111_output);
    gettimeofday(&tv_r_Filter_12_889767_e, 0);

    struct timeval tv_r_Filter_12_748676_s, tv_r_Filter_12_748676_e;
    gettimeofday(&tv_r_Filter_12_748676_s, 0);
    SW_Filter_TD_12354449(tbl_SerializeFromObject_TD_13378243_input, tbl_Filter_TD_12354449_output);
    gettimeofday(&tv_r_Filter_12_748676_e, 0);

    struct timeval tv_r_Filter_12_522581_s, tv_r_Filter_12_522581_e;
    gettimeofday(&tv_r_Filter_12_522581_s, 0);
    SW_Filter_TD_1280414(tbl_SerializeFromObject_TD_13490094_input, tbl_Filter_TD_1280414_output);
    gettimeofday(&tv_r_Filter_12_522581_e, 0);

    struct timeval tv_r_Filter_11_65341_s, tv_r_Filter_11_65341_e;
    gettimeofday(&tv_r_Filter_11_65341_s, 0);
    SW_Filter_TD_11255930(tbl_SerializeFromObject_TD_129848_input, tbl_Filter_TD_11255930_output);
    gettimeofday(&tv_r_Filter_11_65341_e, 0);

    struct timeval tv_r_JOIN_INNER_11_76192_s, tv_r_JOIN_INNER_11_76192_e;
    gettimeofday(&tv_r_JOIN_INNER_11_76192_s, 0);
    trans_JOIN_INNER_TD_11364961.add(&(tbl_Filter_TD_12977556_output));
    trans_JOIN_INNER_TD_11364961.add(&(tbl_Filter_TD_12599822_output));
    trans_JOIN_INNER_TD_11364961.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_11364961), &(events_h2d_wr_JOIN_INNER_TD_11364961[0]));
    events_grp_JOIN_INNER_TD_11364961.push_back(events_h2d_wr_JOIN_INNER_TD_11364961[0]);
    krnl_JOIN_INNER_TD_11364961.run(0, &(events_grp_JOIN_INNER_TD_11364961), &(events_JOIN_INNER_TD_11364961[0]));
    gettimeofday(&tv_r_JOIN_INNER_11_76192_e, 0);

    struct timeval tv_r_Filter_11_817175_s, tv_r_Filter_11_817175_e;
    gettimeofday(&tv_r_Filter_11_817175_s, 0);
    SW_Filter_TD_11681337(tbl_SerializeFromObject_TD_12577914_input, tbl_Filter_TD_11681337_output);
    gettimeofday(&tv_r_Filter_11_817175_e, 0);

    struct timeval tv_r_JOIN_INNER_11_529834_s, tv_r_JOIN_INNER_11_529834_e;
    gettimeofday(&tv_r_JOIN_INNER_11_529834_s, 0);
    trans_JOIN_INNER_TD_11239903.add(&(tbl_Filter_TD_12320111_output));
    trans_JOIN_INNER_TD_11239903.add(&(tbl_Filter_TD_12744627_output));
    trans_JOIN_INNER_TD_11239903.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_11239903), &(events_h2d_wr_JOIN_INNER_TD_11239903[0]));
    events_grp_JOIN_INNER_TD_11239903.push_back(events_h2d_wr_JOIN_INNER_TD_11239903[0]);
    krnl_JOIN_INNER_TD_11239903.run(0, &(events_grp_JOIN_INNER_TD_11239903), &(events_JOIN_INNER_TD_11239903[0]));
    gettimeofday(&tv_r_JOIN_INNER_11_529834_e, 0);

    struct timeval tv_r_Filter_11_423072_s, tv_r_Filter_11_423072_e;
    gettimeofday(&tv_r_Filter_11_423072_s, 0);
    SW_Filter_TD_11465919(tbl_SerializeFromObject_TD_12266937_input, tbl_Filter_TD_11465919_output);
    gettimeofday(&tv_r_Filter_11_423072_e, 0);

    struct timeval tv_r_JOIN_INNER_11_973653_s, tv_r_JOIN_INNER_11_973653_e;
    gettimeofday(&tv_r_JOIN_INNER_11_973653_s, 0);
    trans_JOIN_INNER_TD_11956457.add(&(tbl_Filter_TD_1280414_output));
    trans_JOIN_INNER_TD_11956457.add(&(tbl_Filter_TD_12354449_output));
    trans_JOIN_INNER_TD_11956457.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_11956457), &(events_h2d_wr_JOIN_INNER_TD_11956457[0]));
    events_grp_JOIN_INNER_TD_11956457.push_back(events_h2d_wr_JOIN_INNER_TD_11956457[0]);
    krnl_JOIN_INNER_TD_11956457.run(0, &(events_grp_JOIN_INNER_TD_11956457), &(events_JOIN_INNER_TD_11956457[0]));
    gettimeofday(&tv_r_JOIN_INNER_11_973653_e, 0);

    struct timeval tv_r_JOIN_INNER_10_17633_s, tv_r_JOIN_INNER_10_17633_e;
    gettimeofday(&tv_r_JOIN_INNER_10_17633_s, 0);
    prev_events_grp_JOIN_INNER_TD_10120449.push_back(events_h2d_wr_JOIN_INNER_TD_11364961[0]);
    trans_JOIN_INNER_TD_10120449.add(&(tbl_Filter_TD_11255930_output));
    trans_JOIN_INNER_TD_10120449.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10120449), &(events_h2d_wr_JOIN_INNER_TD_10120449[0]));
    events_grp_JOIN_INNER_TD_10120449.push_back(events_h2d_wr_JOIN_INNER_TD_10120449[0]);
    events_grp_JOIN_INNER_TD_10120449.push_back(events_JOIN_INNER_TD_11364961[0]);
    krnl_JOIN_INNER_TD_10120449.run(0, &(events_grp_JOIN_INNER_TD_10120449), &(events_JOIN_INNER_TD_10120449[0]));
    
    trans_JOIN_INNER_TD_10120449_out.add(&(tbl_JOIN_INNER_TD_10120449_output));
    trans_JOIN_INNER_TD_10120449_out.dev2host(0, &(events_JOIN_INNER_TD_10120449), &(events_d2h_rd_JOIN_INNER_TD_10120449[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_10_17633_e, 0);

    struct timeval tv_r_JOIN_INNER_10_63498_s, tv_r_JOIN_INNER_10_63498_e;
    gettimeofday(&tv_r_JOIN_INNER_10_63498_s, 0);
    prev_events_grp_JOIN_INNER_TD_10980218.push_back(events_h2d_wr_JOIN_INNER_TD_11239903[0]);
    trans_JOIN_INNER_TD_10980218.add(&(tbl_Filter_TD_11681337_output));
    trans_JOIN_INNER_TD_10980218.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10980218), &(events_h2d_wr_JOIN_INNER_TD_10980218[0]));
    events_grp_JOIN_INNER_TD_10980218.push_back(events_h2d_wr_JOIN_INNER_TD_10980218[0]);
    events_grp_JOIN_INNER_TD_10980218.push_back(events_JOIN_INNER_TD_11239903[0]);
    krnl_JOIN_INNER_TD_10980218.run(0, &(events_grp_JOIN_INNER_TD_10980218), &(events_JOIN_INNER_TD_10980218[0]));
    
    trans_JOIN_INNER_TD_10980218_out.add(&(tbl_JOIN_INNER_TD_10980218_output));
    trans_JOIN_INNER_TD_10980218_out.dev2host(0, &(events_JOIN_INNER_TD_10980218), &(events_d2h_rd_JOIN_INNER_TD_10980218[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_10_63498_e, 0);

    struct timeval tv_r_JOIN_INNER_10_281242_s, tv_r_JOIN_INNER_10_281242_e;
    gettimeofday(&tv_r_JOIN_INNER_10_281242_s, 0);
    prev_events_grp_JOIN_INNER_TD_10867346.push_back(events_h2d_wr_JOIN_INNER_TD_11956457[0]);
    trans_JOIN_INNER_TD_10867346.add(&(tbl_Filter_TD_11465919_output));
    trans_JOIN_INNER_TD_10867346.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10867346), &(events_h2d_wr_JOIN_INNER_TD_10867346[0]));
    events_grp_JOIN_INNER_TD_10867346.push_back(events_h2d_wr_JOIN_INNER_TD_10867346[0]);
    events_grp_JOIN_INNER_TD_10867346.push_back(events_JOIN_INNER_TD_11956457[0]);
    krnl_JOIN_INNER_TD_10867346.run(0, &(events_grp_JOIN_INNER_TD_10867346), &(events_JOIN_INNER_TD_10867346[0]));
    
    trans_JOIN_INNER_TD_10867346_out.add(&(tbl_JOIN_INNER_TD_10867346_output));
    trans_JOIN_INNER_TD_10867346_out.dev2host(0, &(events_JOIN_INNER_TD_10867346), &(events_d2h_rd_JOIN_INNER_TD_10867346[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_10_281242_e, 0);

    struct timeval tv_r_Aggregate_9_496527_s, tv_r_Aggregate_9_496527_e;
    gettimeofday(&tv_r_Aggregate_9_496527_s, 0);
    SW_Aggregate_TD_993878(tbl_JOIN_INNER_TD_10120449_output, tbl_Aggregate_TD_993878_output);
    gettimeofday(&tv_r_Aggregate_9_496527_e, 0);

    struct timeval tv_r_Aggregate_9_388801_s, tv_r_Aggregate_9_388801_e;
    gettimeofday(&tv_r_Aggregate_9_388801_s, 0);
    SW_Aggregate_TD_982465(tbl_JOIN_INNER_TD_10980218_output, tbl_Aggregate_TD_982465_output);
    gettimeofday(&tv_r_Aggregate_9_388801_e, 0);

    struct timeval tv_r_Aggregate_9_736825_s, tv_r_Aggregate_9_736825_e;
    gettimeofday(&tv_r_Aggregate_9_736825_s, 0);
    SW_Aggregate_TD_9487517(tbl_JOIN_INNER_TD_10867346_output, tbl_Aggregate_TD_9487517_output);
    gettimeofday(&tv_r_Aggregate_9_736825_e, 0);

    struct timeval tv_r_Window_8_358433_s, tv_r_Window_8_358433_e;
    gettimeofday(&tv_r_Window_8_358433_s, 0);
    SW_Window_TD_845991(tbl_Aggregate_TD_993878_output, tbl_Window_TD_845991_output);
    gettimeofday(&tv_r_Window_8_358433_e, 0);

    struct timeval tv_r_Window_8_735033_s, tv_r_Window_8_735033_e;
    gettimeofday(&tv_r_Window_8_735033_s, 0);
    SW_Window_TD_8965768(tbl_Aggregate_TD_982465_output, tbl_Window_TD_8965768_output);
    gettimeofday(&tv_r_Window_8_735033_e, 0);

    struct timeval tv_r_Window_8_410357_s, tv_r_Window_8_410357_e;
    gettimeofday(&tv_r_Window_8_410357_s, 0);
    SW_Window_TD_8243948(tbl_Aggregate_TD_9487517_output, tbl_Window_TD_8243948_output);
    gettimeofday(&tv_r_Window_8_410357_e, 0);

    struct timeval tv_r_Window_7_821132_s, tv_r_Window_7_821132_e;
    gettimeofday(&tv_r_Window_7_821132_s, 0);
    SW_Window_TD_7649254(tbl_Window_TD_845991_output, tbl_Window_TD_7649254_output);
    gettimeofday(&tv_r_Window_7_821132_e, 0);

    struct timeval tv_r_Window_7_351989_s, tv_r_Window_7_351989_e;
    gettimeofday(&tv_r_Window_7_351989_s, 0);
    SW_Window_TD_7556800(tbl_Window_TD_8965768_output, tbl_Window_TD_7556800_output);
    gettimeofday(&tv_r_Window_7_351989_e, 0);

    struct timeval tv_r_Window_7_944136_s, tv_r_Window_7_944136_e;
    gettimeofday(&tv_r_Window_7_944136_s, 0);
    SW_Window_TD_7805944(tbl_Window_TD_8243948_output, tbl_Window_TD_7805944_output);
    gettimeofday(&tv_r_Window_7_944136_e, 0);

    struct timeval tv_r_Filter_6_468184_s, tv_r_Filter_6_468184_e;
    gettimeofday(&tv_r_Filter_6_468184_s, 0);
    SW_Filter_TD_6513108(tbl_Window_TD_7649254_output, tbl_Filter_TD_6513108_output);
    gettimeofday(&tv_r_Filter_6_468184_e, 0);

    struct timeval tv_r_Filter_6_675356_s, tv_r_Filter_6_675356_e;
    gettimeofday(&tv_r_Filter_6_675356_s, 0);
    SW_Filter_TD_6706004(tbl_Window_TD_7556800_output, tbl_Filter_TD_6706004_output);
    gettimeofday(&tv_r_Filter_6_675356_e, 0);

    struct timeval tv_r_Filter_6_483179_s, tv_r_Filter_6_483179_e;
    gettimeofday(&tv_r_Filter_6_483179_s, 0);
    SW_Filter_TD_6674727(tbl_Window_TD_7805944_output, tbl_Filter_TD_6674727_output);
    gettimeofday(&tv_r_Filter_6_483179_e, 0);

    struct timeval tv_r_Project_5_599093_s, tv_r_Project_5_599093_e;
    gettimeofday(&tv_r_Project_5_599093_s, 0);
    SW_Project_TD_5793817(tbl_Filter_TD_6513108_output, tbl_Project_TD_5793817_output);
    gettimeofday(&tv_r_Project_5_599093_e, 0);

    struct timeval tv_r_Project_5_984508_s, tv_r_Project_5_984508_e;
    gettimeofday(&tv_r_Project_5_984508_s, 0);
    SW_Project_TD_5124165(tbl_Filter_TD_6706004_output, tbl_Project_TD_5124165_output);
    gettimeofday(&tv_r_Project_5_984508_e, 0);

    struct timeval tv_r_Project_5_699607_s, tv_r_Project_5_699607_e;
    gettimeofday(&tv_r_Project_5_699607_s, 0);
    SW_Project_TD_5846592(tbl_Filter_TD_6674727_output, tbl_Project_TD_5846592_output);
    gettimeofday(&tv_r_Project_5_699607_e, 0);

    struct timeval tv_r_Union_4_790100_s, tv_r_Union_4_790100_e;
    gettimeofday(&tv_r_Union_4_790100_s, 0);
    SW_Union_TD_4521042(tbl_Project_TD_5846592_output, tbl_Project_TD_5124165_output, tbl_Project_TD_5793817_output, tbl_Union_TD_4521042_output);
    gettimeofday(&tv_r_Union_4_790100_e, 0);

    struct timeval tv_r_Aggregate_3_844710_s, tv_r_Aggregate_3_844710_e;
    gettimeofday(&tv_r_Aggregate_3_844710_s, 0);
    SW_Aggregate_TD_3462906(tbl_Union_TD_4521042_output, tbl_Aggregate_TD_3462906_output);
    gettimeofday(&tv_r_Aggregate_3_844710_e, 0);

    struct timeval tv_r_Sort_2_959520_s, tv_r_Sort_2_959520_e;
    gettimeofday(&tv_r_Sort_2_959520_s, 0);
    SW_Sort_TD_2216964(tbl_Aggregate_TD_3462906_output, tbl_Sort_TD_2216964_output);
    gettimeofday(&tv_r_Sort_2_959520_e, 0);

    struct timeval tv_r_LocalLimit_1_435056_s, tv_r_LocalLimit_1_435056_e;
    gettimeofday(&tv_r_LocalLimit_1_435056_s, 0);
    SW_LocalLimit_TD_1162753(tbl_Sort_TD_2216964_output, tbl_LocalLimit_TD_1162753_output);
    gettimeofday(&tv_r_LocalLimit_1_435056_e, 0);

    struct timeval tv_r_GlobalLimit_0_704718_s, tv_r_GlobalLimit_0_704718_e;
    gettimeofday(&tv_r_GlobalLimit_0_704718_s, 0);
    SW_GlobalLimit_TD_0528965(tbl_LocalLimit_TD_1162753_output, tbl_GlobalLimit_TD_0528965_output);
    gettimeofday(&tv_r_GlobalLimit_0_704718_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_428563_s, &tv_r_Filter_12_428563_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13371899_input: " << tbl_SerializeFromObject_TD_13371899_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_23046_s, &tv_r_Filter_12_23046_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13728018_input: " << tbl_SerializeFromObject_TD_13728018_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_388444_s, &tv_r_Filter_12_388444_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13487824_input: " << tbl_SerializeFromObject_TD_13487824_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_889767_s, &tv_r_Filter_12_889767_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1349578_input: " << tbl_SerializeFromObject_TD_1349578_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_748676_s, &tv_r_Filter_12_748676_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13378243_input: " << tbl_SerializeFromObject_TD_13378243_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_522581_s, &tv_r_Filter_12_522581_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13490094_input: " << tbl_SerializeFromObject_TD_13490094_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_65341_s, &tv_r_Filter_11_65341_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_129848_input: " << tbl_SerializeFromObject_TD_129848_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_76192_s, &tv_r_JOIN_INNER_11_76192_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12977556_output: " << tbl_Filter_TD_12977556_output.getNumRow() << " " << "tbl_Filter_TD_12599822_output: " << tbl_Filter_TD_12599822_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_817175_s, &tv_r_Filter_11_817175_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12577914_input: " << tbl_SerializeFromObject_TD_12577914_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_529834_s, &tv_r_JOIN_INNER_11_529834_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12320111_output: " << tbl_Filter_TD_12320111_output.getNumRow() << " " << "tbl_Filter_TD_12744627_output: " << tbl_Filter_TD_12744627_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_423072_s, &tv_r_Filter_11_423072_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12266937_input: " << tbl_SerializeFromObject_TD_12266937_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_973653_s, &tv_r_JOIN_INNER_11_973653_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1280414_output: " << tbl_Filter_TD_1280414_output.getNumRow() << " " << "tbl_Filter_TD_12354449_output: " << tbl_Filter_TD_12354449_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_17633_s, &tv_r_JOIN_INNER_10_17633_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11364961_output: " << tbl_JOIN_INNER_TD_11364961_output.getNumRow() << " " << "tbl_Filter_TD_11255930_output: " << tbl_Filter_TD_11255930_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_63498_s, &tv_r_JOIN_INNER_10_63498_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11239903_output: " << tbl_JOIN_INNER_TD_11239903_output.getNumRow() << " " << "tbl_Filter_TD_11681337_output: " << tbl_Filter_TD_11681337_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_281242_s, &tv_r_JOIN_INNER_10_281242_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11956457_output: " << tbl_JOIN_INNER_TD_11956457_output.getNumRow() << " " << "tbl_Filter_TD_11465919_output: " << tbl_Filter_TD_11465919_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_496527_s, &tv_r_Aggregate_9_496527_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10120449_output: " << tbl_JOIN_INNER_TD_10120449_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_388801_s, &tv_r_Aggregate_9_388801_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10980218_output: " << tbl_JOIN_INNER_TD_10980218_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_736825_s, &tv_r_Aggregate_9_736825_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10867346_output: " << tbl_JOIN_INNER_TD_10867346_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_358433_s, &tv_r_Window_8_358433_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_993878_output: " << tbl_Aggregate_TD_993878_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_735033_s, &tv_r_Window_8_735033_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_982465_output: " << tbl_Aggregate_TD_982465_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_410357_s, &tv_r_Window_8_410357_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9487517_output: " << tbl_Aggregate_TD_9487517_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_821132_s, &tv_r_Window_7_821132_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_845991_output: " << tbl_Window_TD_845991_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_351989_s, &tv_r_Window_7_351989_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8965768_output: " << tbl_Window_TD_8965768_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_944136_s, &tv_r_Window_7_944136_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8243948_output: " << tbl_Window_TD_8243948_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_468184_s, &tv_r_Filter_6_468184_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7649254_output: " << tbl_Window_TD_7649254_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_675356_s, &tv_r_Filter_6_675356_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7556800_output: " << tbl_Window_TD_7556800_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_483179_s, &tv_r_Filter_6_483179_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7805944_output: " << tbl_Window_TD_7805944_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_599093_s, &tv_r_Project_5_599093_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6513108_output: " << tbl_Filter_TD_6513108_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_984508_s, &tv_r_Project_5_984508_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6706004_output: " << tbl_Filter_TD_6706004_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_699607_s, &tv_r_Project_5_699607_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6674727_output: " << tbl_Filter_TD_6674727_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_790100_s, &tv_r_Union_4_790100_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5846592_output: " << tbl_Project_TD_5846592_output.getNumRow() << " " << "tbl_Project_TD_5124165_output: " << tbl_Project_TD_5124165_output.getNumRow() << " " << "tbl_Project_TD_5793817_output: " << tbl_Project_TD_5793817_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_844710_s, &tv_r_Aggregate_3_844710_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4521042_output: " << tbl_Union_TD_4521042_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_959520_s, &tv_r_Sort_2_959520_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3462906_output: " << tbl_Aggregate_TD_3462906_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_435056_s, &tv_r_LocalLimit_1_435056_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2216964_output: " << tbl_Sort_TD_2216964_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_704718_s, &tv_r_GlobalLimit_0_704718_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1162753_output: " << tbl_LocalLimit_TD_1162753_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 8.439938 * 1000 << "ms" << std::endl; 
    return 0; 
}
