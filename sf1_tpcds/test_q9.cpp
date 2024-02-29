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

#include "cfgFunc_q9.hpp" 
#include "q9.hpp" 

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
    std::cout << "NOTE:running query #9\n."; 
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
    // ****************************** Tables **************************** // 
    Table tbl_Project_TD_0611895_output("tbl_Project_TD_0611895_output", 6100000, 5, "");
    tbl_Project_TD_0611895_output.allocateHost();
    Table tbl_Filter_TD_1926732_output("tbl_Filter_TD_1926732_output", 6100000, 3, "");
    tbl_Filter_TD_1926732_output.allocateHost();
    Table tbl_Aggregate_TD_1805058_output("tbl_Aggregate_TD_1805058_output", 6100000, 1, "");
    tbl_Aggregate_TD_1805058_output.allocateHost();
    Table tbl_Aggregate_TD_1542246_output("tbl_Aggregate_TD_1542246_output", 6100000, 1, "");
    tbl_Aggregate_TD_1542246_output.allocateHost();
    Table tbl_Aggregate_TD_1975173_output("tbl_Aggregate_TD_1975173_output", 6100000, 1, "");
    tbl_Aggregate_TD_1975173_output.allocateHost();
    Table tbl_Aggregate_TD_1593948_output("tbl_Aggregate_TD_1593948_output", 6100000, 1, "");
    tbl_Aggregate_TD_1593948_output.allocateHost();
    Table tbl_Aggregate_TD_197147_output("tbl_Aggregate_TD_197147_output", 6100000, 1, "");
    tbl_Aggregate_TD_197147_output.allocateHost();
    Table tbl_Aggregate_TD_1486460_output("tbl_Aggregate_TD_1486460_output", 6100000, 1, "");
    tbl_Aggregate_TD_1486460_output.allocateHost();
    Table tbl_Aggregate_TD_1904943_output("tbl_Aggregate_TD_1904943_output", 6100000, 1, "");
    tbl_Aggregate_TD_1904943_output.allocateHost();
    Table tbl_Aggregate_TD_1971809_output("tbl_Aggregate_TD_1971809_output", 6100000, 1, "");
    tbl_Aggregate_TD_1971809_output.allocateHost();
    Table tbl_Aggregate_TD_1915040_output("tbl_Aggregate_TD_1915040_output", 6100000, 1, "");
    tbl_Aggregate_TD_1915040_output.allocateHost();
    Table tbl_Aggregate_TD_1508579_output("tbl_Aggregate_TD_1508579_output", 6100000, 1, "");
    tbl_Aggregate_TD_1508579_output.allocateHost();
    Table tbl_Aggregate_TD_1393724_output("tbl_Aggregate_TD_1393724_output", 6100000, 1, "");
    tbl_Aggregate_TD_1393724_output.allocateHost();
    Table tbl_Aggregate_TD_1578423_output("tbl_Aggregate_TD_1578423_output", 6100000, 1, "");
    tbl_Aggregate_TD_1578423_output.allocateHost();
    Table tbl_Aggregate_TD_1716604_output("tbl_Aggregate_TD_1716604_output", 6100000, 1, "");
    tbl_Aggregate_TD_1716604_output.allocateHost();
    Table tbl_Aggregate_TD_1261647_output("tbl_Aggregate_TD_1261647_output", 6100000, 1, "");
    tbl_Aggregate_TD_1261647_output.allocateHost();
    Table tbl_Aggregate_TD_1865306_output("tbl_Aggregate_TD_1865306_output", 6100000, 1, "");
    tbl_Aggregate_TD_1865306_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2326271_input;
    tbl_SerializeFromObject_TD_2326271_input = Table("reason", reason_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_2326271_input.addCol("r_reason_sk", 4);
    tbl_SerializeFromObject_TD_2326271_input.addCol("r_reason_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_2326271_input.addCol("r_reason_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_2326271_input.allocateHost();
    tbl_SerializeFromObject_TD_2326271_input.loadHost();
    Table tbl_Filter_TD_2558355_output("tbl_Filter_TD_2558355_output", 6100000, 23, "");
    tbl_Filter_TD_2558355_output.allocateHost();
    Table tbl_Filter_TD_2586365_output("tbl_Filter_TD_2586365_output", 6100000, 1, "");
    tbl_Filter_TD_2586365_output.allocateHost();
    Table tbl_Filter_TD_2370151_output("tbl_Filter_TD_2370151_output", 6100000, 1, "");
    tbl_Filter_TD_2370151_output.allocateHost();
    Table tbl_Filter_TD_2939587_output("tbl_Filter_TD_2939587_output", 6100000, 23, "");
    tbl_Filter_TD_2939587_output.allocateHost();
    Table tbl_Filter_TD_2990405_output("tbl_Filter_TD_2990405_output", 6100000, 1, "");
    tbl_Filter_TD_2990405_output.allocateHost();
    Table tbl_Filter_TD_2749466_output("tbl_Filter_TD_2749466_output", 6100000, 1, "");
    tbl_Filter_TD_2749466_output.allocateHost();
    Table tbl_Filter_TD_2946209_output("tbl_Filter_TD_2946209_output", 6100000, 23, "");
    tbl_Filter_TD_2946209_output.allocateHost();
    Table tbl_Filter_TD_2741049_output("tbl_Filter_TD_2741049_output", 6100000, 1, "");
    tbl_Filter_TD_2741049_output.allocateHost();
    Table tbl_Filter_TD_2517699_output("tbl_Filter_TD_2517699_output", 6100000, 1, "");
    tbl_Filter_TD_2517699_output.allocateHost();
    Table tbl_Filter_TD_2222883_output("tbl_Filter_TD_2222883_output", 6100000, 23, "");
    tbl_Filter_TD_2222883_output.allocateHost();
    Table tbl_Filter_TD_2773689_output("tbl_Filter_TD_2773689_output", 6100000, 1, "");
    tbl_Filter_TD_2773689_output.allocateHost();
    Table tbl_Filter_TD_2772444_output("tbl_Filter_TD_2772444_output", 6100000, 1, "");
    tbl_Filter_TD_2772444_output.allocateHost();
    Table tbl_Filter_TD_2648228_output("tbl_Filter_TD_2648228_output", 6100000, 23, "");
    tbl_Filter_TD_2648228_output.allocateHost();
    Table tbl_Filter_TD_2744369_output("tbl_Filter_TD_2744369_output", 6100000, 1, "");
    tbl_Filter_TD_2744369_output.allocateHost();
    Table tbl_Filter_TD_2189309_output("tbl_Filter_TD_2189309_output", 6100000, 1, "");
    tbl_Filter_TD_2189309_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3620393_input;
    tbl_SerializeFromObject_TD_3620393_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3620393_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3620393_input.allocateHost();
    tbl_SerializeFromObject_TD_3620393_input.loadHost();
    Table tbl_SerializeFromObject_TD_366445_input;
    tbl_SerializeFromObject_TD_366445_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_366445_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_366445_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_366445_input.allocateHost();
    tbl_SerializeFromObject_TD_366445_input.loadHost();
    Table tbl_SerializeFromObject_TD_350025_input;
    tbl_SerializeFromObject_TD_350025_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_350025_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_350025_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_350025_input.allocateHost();
    tbl_SerializeFromObject_TD_350025_input.loadHost();
    Table tbl_SerializeFromObject_TD_3709820_input;
    tbl_SerializeFromObject_TD_3709820_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3709820_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3709820_input.allocateHost();
    tbl_SerializeFromObject_TD_3709820_input.loadHost();
    Table tbl_SerializeFromObject_TD_3288469_input;
    tbl_SerializeFromObject_TD_3288469_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3288469_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3288469_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3288469_input.allocateHost();
    tbl_SerializeFromObject_TD_3288469_input.loadHost();
    Table tbl_SerializeFromObject_TD_3647812_input;
    tbl_SerializeFromObject_TD_3647812_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3647812_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3647812_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3647812_input.allocateHost();
    tbl_SerializeFromObject_TD_3647812_input.loadHost();
    Table tbl_SerializeFromObject_TD_3443933_input;
    tbl_SerializeFromObject_TD_3443933_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3443933_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3443933_input.allocateHost();
    tbl_SerializeFromObject_TD_3443933_input.loadHost();
    Table tbl_SerializeFromObject_TD_3572949_input;
    tbl_SerializeFromObject_TD_3572949_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3572949_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3572949_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3572949_input.allocateHost();
    tbl_SerializeFromObject_TD_3572949_input.loadHost();
    Table tbl_SerializeFromObject_TD_3543374_input;
    tbl_SerializeFromObject_TD_3543374_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3543374_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3543374_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3543374_input.allocateHost();
    tbl_SerializeFromObject_TD_3543374_input.loadHost();
    Table tbl_SerializeFromObject_TD_3891121_input;
    tbl_SerializeFromObject_TD_3891121_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3891121_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3891121_input.allocateHost();
    tbl_SerializeFromObject_TD_3891121_input.loadHost();
    Table tbl_SerializeFromObject_TD_3131787_input;
    tbl_SerializeFromObject_TD_3131787_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3131787_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3131787_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3131787_input.allocateHost();
    tbl_SerializeFromObject_TD_3131787_input.loadHost();
    Table tbl_SerializeFromObject_TD_3245000_input;
    tbl_SerializeFromObject_TD_3245000_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3245000_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3245000_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3245000_input.allocateHost();
    tbl_SerializeFromObject_TD_3245000_input.loadHost();
    Table tbl_SerializeFromObject_TD_3167901_input;
    tbl_SerializeFromObject_TD_3167901_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3167901_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3167901_input.allocateHost();
    tbl_SerializeFromObject_TD_3167901_input.loadHost();
    Table tbl_SerializeFromObject_TD_3525307_input;
    tbl_SerializeFromObject_TD_3525307_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3525307_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3525307_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3525307_input.allocateHost();
    tbl_SerializeFromObject_TD_3525307_input.loadHost();
    Table tbl_SerializeFromObject_TD_3365539_input;
    tbl_SerializeFromObject_TD_3365539_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3365539_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3365539_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3365539_input.allocateHost();
    tbl_SerializeFromObject_TD_3365539_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_2_320118_s, tv_r_Filter_2_320118_e;
    gettimeofday(&tv_r_Filter_2_320118_s, 0);
    SW_Filter_TD_2189309(tbl_SerializeFromObject_TD_3365539_input, tbl_Filter_TD_2189309_output);
    gettimeofday(&tv_r_Filter_2_320118_e, 0);

    struct timeval tv_r_Filter_2_638422_s, tv_r_Filter_2_638422_e;
    gettimeofday(&tv_r_Filter_2_638422_s, 0);
    SW_Filter_TD_2744369(tbl_SerializeFromObject_TD_3525307_input, tbl_Filter_TD_2744369_output);
    gettimeofday(&tv_r_Filter_2_638422_e, 0);

    struct timeval tv_r_Filter_2_137193_s, tv_r_Filter_2_137193_e;
    gettimeofday(&tv_r_Filter_2_137193_s, 0);
    SW_Filter_TD_2648228(tbl_SerializeFromObject_TD_3167901_input, tbl_Filter_TD_2648228_output);
    gettimeofday(&tv_r_Filter_2_137193_e, 0);

    struct timeval tv_r_Filter_2_378213_s, tv_r_Filter_2_378213_e;
    gettimeofday(&tv_r_Filter_2_378213_s, 0);
    SW_Filter_TD_2772444(tbl_SerializeFromObject_TD_3245000_input, tbl_Filter_TD_2772444_output);
    gettimeofday(&tv_r_Filter_2_378213_e, 0);

    struct timeval tv_r_Filter_2_978506_s, tv_r_Filter_2_978506_e;
    gettimeofday(&tv_r_Filter_2_978506_s, 0);
    SW_Filter_TD_2773689(tbl_SerializeFromObject_TD_3131787_input, tbl_Filter_TD_2773689_output);
    gettimeofday(&tv_r_Filter_2_978506_e, 0);

    struct timeval tv_r_Filter_2_36065_s, tv_r_Filter_2_36065_e;
    gettimeofday(&tv_r_Filter_2_36065_s, 0);
    SW_Filter_TD_2222883(tbl_SerializeFromObject_TD_3891121_input, tbl_Filter_TD_2222883_output);
    gettimeofday(&tv_r_Filter_2_36065_e, 0);

    struct timeval tv_r_Filter_2_299241_s, tv_r_Filter_2_299241_e;
    gettimeofday(&tv_r_Filter_2_299241_s, 0);
    SW_Filter_TD_2517699(tbl_SerializeFromObject_TD_3543374_input, tbl_Filter_TD_2517699_output);
    gettimeofday(&tv_r_Filter_2_299241_e, 0);

    struct timeval tv_r_Filter_2_298920_s, tv_r_Filter_2_298920_e;
    gettimeofday(&tv_r_Filter_2_298920_s, 0);
    SW_Filter_TD_2741049(tbl_SerializeFromObject_TD_3572949_input, tbl_Filter_TD_2741049_output);
    gettimeofday(&tv_r_Filter_2_298920_e, 0);

    struct timeval tv_r_Filter_2_132038_s, tv_r_Filter_2_132038_e;
    gettimeofday(&tv_r_Filter_2_132038_s, 0);
    SW_Filter_TD_2946209(tbl_SerializeFromObject_TD_3443933_input, tbl_Filter_TD_2946209_output);
    gettimeofday(&tv_r_Filter_2_132038_e, 0);

    struct timeval tv_r_Filter_2_772911_s, tv_r_Filter_2_772911_e;
    gettimeofday(&tv_r_Filter_2_772911_s, 0);
    SW_Filter_TD_2749466(tbl_SerializeFromObject_TD_3647812_input, tbl_Filter_TD_2749466_output);
    gettimeofday(&tv_r_Filter_2_772911_e, 0);

    struct timeval tv_r_Filter_2_260438_s, tv_r_Filter_2_260438_e;
    gettimeofday(&tv_r_Filter_2_260438_s, 0);
    SW_Filter_TD_2990405(tbl_SerializeFromObject_TD_3288469_input, tbl_Filter_TD_2990405_output);
    gettimeofday(&tv_r_Filter_2_260438_e, 0);

    struct timeval tv_r_Filter_2_669152_s, tv_r_Filter_2_669152_e;
    gettimeofday(&tv_r_Filter_2_669152_s, 0);
    SW_Filter_TD_2939587(tbl_SerializeFromObject_TD_3709820_input, tbl_Filter_TD_2939587_output);
    gettimeofday(&tv_r_Filter_2_669152_e, 0);

    struct timeval tv_r_Filter_2_218535_s, tv_r_Filter_2_218535_e;
    gettimeofday(&tv_r_Filter_2_218535_s, 0);
    SW_Filter_TD_2370151(tbl_SerializeFromObject_TD_350025_input, tbl_Filter_TD_2370151_output);
    gettimeofday(&tv_r_Filter_2_218535_e, 0);

    struct timeval tv_r_Filter_2_801505_s, tv_r_Filter_2_801505_e;
    gettimeofday(&tv_r_Filter_2_801505_s, 0);
    SW_Filter_TD_2586365(tbl_SerializeFromObject_TD_366445_input, tbl_Filter_TD_2586365_output);
    gettimeofday(&tv_r_Filter_2_801505_e, 0);

    struct timeval tv_r_Filter_2_253803_s, tv_r_Filter_2_253803_e;
    gettimeofday(&tv_r_Filter_2_253803_s, 0);
    SW_Filter_TD_2558355(tbl_SerializeFromObject_TD_3620393_input, tbl_Filter_TD_2558355_output);
    gettimeofday(&tv_r_Filter_2_253803_e, 0);

    struct timeval tv_r_Aggregate_1_180904_s, tv_r_Aggregate_1_180904_e;
    gettimeofday(&tv_r_Aggregate_1_180904_s, 0);
    SW_Aggregate_TD_1865306(tbl_Filter_TD_2189309_output, tbl_Aggregate_TD_1865306_output);
    gettimeofday(&tv_r_Aggregate_1_180904_e, 0);

    struct timeval tv_r_Aggregate_1_520350_s, tv_r_Aggregate_1_520350_e;
    gettimeofday(&tv_r_Aggregate_1_520350_s, 0);
    SW_Aggregate_TD_1261647(tbl_Filter_TD_2744369_output, tbl_Aggregate_TD_1261647_output);
    gettimeofday(&tv_r_Aggregate_1_520350_e, 0);

    struct timeval tv_r_Aggregate_1_196646_s, tv_r_Aggregate_1_196646_e;
    gettimeofday(&tv_r_Aggregate_1_196646_s, 0);
    SW_Aggregate_TD_1716604(tbl_Filter_TD_2648228_output, tbl_Aggregate_TD_1716604_output);
    gettimeofday(&tv_r_Aggregate_1_196646_e, 0);

    struct timeval tv_r_Aggregate_1_245081_s, tv_r_Aggregate_1_245081_e;
    gettimeofday(&tv_r_Aggregate_1_245081_s, 0);
    SW_Aggregate_TD_1578423(tbl_Filter_TD_2772444_output, tbl_Aggregate_TD_1578423_output);
    gettimeofday(&tv_r_Aggregate_1_245081_e, 0);

    struct timeval tv_r_Aggregate_1_900513_s, tv_r_Aggregate_1_900513_e;
    gettimeofday(&tv_r_Aggregate_1_900513_s, 0);
    SW_Aggregate_TD_1393724(tbl_Filter_TD_2773689_output, tbl_Aggregate_TD_1393724_output);
    gettimeofday(&tv_r_Aggregate_1_900513_e, 0);

    struct timeval tv_r_Aggregate_1_395924_s, tv_r_Aggregate_1_395924_e;
    gettimeofday(&tv_r_Aggregate_1_395924_s, 0);
    SW_Aggregate_TD_1508579(tbl_Filter_TD_2222883_output, tbl_Aggregate_TD_1508579_output);
    gettimeofday(&tv_r_Aggregate_1_395924_e, 0);

    struct timeval tv_r_Aggregate_1_808466_s, tv_r_Aggregate_1_808466_e;
    gettimeofday(&tv_r_Aggregate_1_808466_s, 0);
    SW_Aggregate_TD_1915040(tbl_Filter_TD_2517699_output, tbl_Aggregate_TD_1915040_output);
    gettimeofday(&tv_r_Aggregate_1_808466_e, 0);

    struct timeval tv_r_Aggregate_1_123347_s, tv_r_Aggregate_1_123347_e;
    gettimeofday(&tv_r_Aggregate_1_123347_s, 0);
    SW_Aggregate_TD_1971809(tbl_Filter_TD_2741049_output, tbl_Aggregate_TD_1971809_output);
    gettimeofday(&tv_r_Aggregate_1_123347_e, 0);

    struct timeval tv_r_Aggregate_1_945880_s, tv_r_Aggregate_1_945880_e;
    gettimeofday(&tv_r_Aggregate_1_945880_s, 0);
    SW_Aggregate_TD_1904943(tbl_Filter_TD_2946209_output, tbl_Aggregate_TD_1904943_output);
    gettimeofday(&tv_r_Aggregate_1_945880_e, 0);

    struct timeval tv_r_Aggregate_1_917645_s, tv_r_Aggregate_1_917645_e;
    gettimeofday(&tv_r_Aggregate_1_917645_s, 0);
    SW_Aggregate_TD_1486460(tbl_Filter_TD_2749466_output, tbl_Aggregate_TD_1486460_output);
    gettimeofday(&tv_r_Aggregate_1_917645_e, 0);

    struct timeval tv_r_Aggregate_1_609687_s, tv_r_Aggregate_1_609687_e;
    gettimeofday(&tv_r_Aggregate_1_609687_s, 0);
    SW_Aggregate_TD_197147(tbl_Filter_TD_2990405_output, tbl_Aggregate_TD_197147_output);
    gettimeofday(&tv_r_Aggregate_1_609687_e, 0);

    struct timeval tv_r_Aggregate_1_20614_s, tv_r_Aggregate_1_20614_e;
    gettimeofday(&tv_r_Aggregate_1_20614_s, 0);
    SW_Aggregate_TD_1593948(tbl_Filter_TD_2939587_output, tbl_Aggregate_TD_1593948_output);
    gettimeofday(&tv_r_Aggregate_1_20614_e, 0);

    struct timeval tv_r_Aggregate_1_993875_s, tv_r_Aggregate_1_993875_e;
    gettimeofday(&tv_r_Aggregate_1_993875_s, 0);
    SW_Aggregate_TD_1975173(tbl_Filter_TD_2370151_output, tbl_Aggregate_TD_1975173_output);
    gettimeofday(&tv_r_Aggregate_1_993875_e, 0);

    struct timeval tv_r_Aggregate_1_839722_s, tv_r_Aggregate_1_839722_e;
    gettimeofday(&tv_r_Aggregate_1_839722_s, 0);
    SW_Aggregate_TD_1542246(tbl_Filter_TD_2586365_output, tbl_Aggregate_TD_1542246_output);
    gettimeofday(&tv_r_Aggregate_1_839722_e, 0);

    struct timeval tv_r_Aggregate_1_797986_s, tv_r_Aggregate_1_797986_e;
    gettimeofday(&tv_r_Aggregate_1_797986_s, 0);
    SW_Aggregate_TD_1805058(tbl_Filter_TD_2558355_output, tbl_Aggregate_TD_1805058_output);
    gettimeofday(&tv_r_Aggregate_1_797986_e, 0);

    struct timeval tv_r_Filter_1_532071_s, tv_r_Filter_1_532071_e;
    gettimeofday(&tv_r_Filter_1_532071_s, 0);
    SW_Filter_TD_1926732(tbl_SerializeFromObject_TD_2326271_input, tbl_Filter_TD_1926732_output);
    gettimeofday(&tv_r_Filter_1_532071_e, 0);

    struct timeval tv_r_Project_0_487165_s, tv_r_Project_0_487165_e;
    gettimeofday(&tv_r_Project_0_487165_s, 0);
    SW_Project_TD_0611895(tbl_Filter_TD_1926732_output, tbl_Aggregate_TD_1805058_output, tbl_Aggregate_TD_1542246_output, tbl_Aggregate_TD_1975173_output, tbl_Aggregate_TD_1593948_output, tbl_Aggregate_TD_197147_output, tbl_Aggregate_TD_1486460_output, tbl_Aggregate_TD_1904943_output, tbl_Aggregate_TD_1971809_output, tbl_Aggregate_TD_1915040_output, tbl_Aggregate_TD_1508579_output, tbl_Aggregate_TD_1393724_output, tbl_Aggregate_TD_1578423_output, tbl_Aggregate_TD_1716604_output, tbl_Aggregate_TD_1261647_output, tbl_Aggregate_TD_1865306_output, tbl_Project_TD_0611895_output);
    gettimeofday(&tv_r_Project_0_487165_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_320118_s, &tv_r_Filter_2_320118_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3365539_input: " << tbl_SerializeFromObject_TD_3365539_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_638422_s, &tv_r_Filter_2_638422_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3525307_input: " << tbl_SerializeFromObject_TD_3525307_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_137193_s, &tv_r_Filter_2_137193_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3167901_input: " << tbl_SerializeFromObject_TD_3167901_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_378213_s, &tv_r_Filter_2_378213_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3245000_input: " << tbl_SerializeFromObject_TD_3245000_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_978506_s, &tv_r_Filter_2_978506_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3131787_input: " << tbl_SerializeFromObject_TD_3131787_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_36065_s, &tv_r_Filter_2_36065_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3891121_input: " << tbl_SerializeFromObject_TD_3891121_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_299241_s, &tv_r_Filter_2_299241_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3543374_input: " << tbl_SerializeFromObject_TD_3543374_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_298920_s, &tv_r_Filter_2_298920_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3572949_input: " << tbl_SerializeFromObject_TD_3572949_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_132038_s, &tv_r_Filter_2_132038_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3443933_input: " << tbl_SerializeFromObject_TD_3443933_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_772911_s, &tv_r_Filter_2_772911_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3647812_input: " << tbl_SerializeFromObject_TD_3647812_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_260438_s, &tv_r_Filter_2_260438_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3288469_input: " << tbl_SerializeFromObject_TD_3288469_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_669152_s, &tv_r_Filter_2_669152_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3709820_input: " << tbl_SerializeFromObject_TD_3709820_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_218535_s, &tv_r_Filter_2_218535_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_350025_input: " << tbl_SerializeFromObject_TD_350025_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_801505_s, &tv_r_Filter_2_801505_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_366445_input: " << tbl_SerializeFromObject_TD_366445_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_253803_s, &tv_r_Filter_2_253803_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3620393_input: " << tbl_SerializeFromObject_TD_3620393_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_180904_s, &tv_r_Aggregate_1_180904_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2189309_output: " << tbl_Filter_TD_2189309_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_520350_s, &tv_r_Aggregate_1_520350_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2744369_output: " << tbl_Filter_TD_2744369_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_196646_s, &tv_r_Aggregate_1_196646_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2648228_output: " << tbl_Filter_TD_2648228_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_245081_s, &tv_r_Aggregate_1_245081_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2772444_output: " << tbl_Filter_TD_2772444_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_900513_s, &tv_r_Aggregate_1_900513_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2773689_output: " << tbl_Filter_TD_2773689_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_395924_s, &tv_r_Aggregate_1_395924_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2222883_output: " << tbl_Filter_TD_2222883_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_808466_s, &tv_r_Aggregate_1_808466_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2517699_output: " << tbl_Filter_TD_2517699_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_123347_s, &tv_r_Aggregate_1_123347_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2741049_output: " << tbl_Filter_TD_2741049_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_945880_s, &tv_r_Aggregate_1_945880_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2946209_output: " << tbl_Filter_TD_2946209_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_917645_s, &tv_r_Aggregate_1_917645_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2749466_output: " << tbl_Filter_TD_2749466_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_609687_s, &tv_r_Aggregate_1_609687_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2990405_output: " << tbl_Filter_TD_2990405_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_20614_s, &tv_r_Aggregate_1_20614_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2939587_output: " << tbl_Filter_TD_2939587_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_993875_s, &tv_r_Aggregate_1_993875_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2370151_output: " << tbl_Filter_TD_2370151_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_839722_s, &tv_r_Aggregate_1_839722_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2586365_output: " << tbl_Filter_TD_2586365_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_797986_s, &tv_r_Aggregate_1_797986_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2558355_output: " << tbl_Filter_TD_2558355_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_1: " << tvdiff(&tv_r_Filter_1_532071_s, &tv_r_Filter_1_532071_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2326271_input: " << tbl_SerializeFromObject_TD_2326271_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_0: " << tvdiff(&tv_r_Project_0_487165_s, &tv_r_Project_0_487165_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1926732_output: " << tbl_Filter_TD_1926732_output.getNumRow() << " " << "tbl_Aggregate_TD_1805058_output: " << tbl_Aggregate_TD_1805058_output.getNumRow() << " " << "tbl_Aggregate_TD_1542246_output: " << tbl_Aggregate_TD_1542246_output.getNumRow() << " " << "tbl_Aggregate_TD_1975173_output: " << tbl_Aggregate_TD_1975173_output.getNumRow() << " " << "tbl_Aggregate_TD_1593948_output: " << tbl_Aggregate_TD_1593948_output.getNumRow() << " " << "tbl_Aggregate_TD_197147_output: " << tbl_Aggregate_TD_197147_output.getNumRow() << " " << "tbl_Aggregate_TD_1486460_output: " << tbl_Aggregate_TD_1486460_output.getNumRow() << " " << "tbl_Aggregate_TD_1904943_output: " << tbl_Aggregate_TD_1904943_output.getNumRow() << " " << "tbl_Aggregate_TD_1971809_output: " << tbl_Aggregate_TD_1971809_output.getNumRow() << " " << "tbl_Aggregate_TD_1915040_output: " << tbl_Aggregate_TD_1915040_output.getNumRow() << " " << "tbl_Aggregate_TD_1508579_output: " << tbl_Aggregate_TD_1508579_output.getNumRow() << " " << "tbl_Aggregate_TD_1393724_output: " << tbl_Aggregate_TD_1393724_output.getNumRow() << " " << "tbl_Aggregate_TD_1578423_output: " << tbl_Aggregate_TD_1578423_output.getNumRow() << " " << "tbl_Aggregate_TD_1716604_output: " << tbl_Aggregate_TD_1716604_output.getNumRow() << " " << "tbl_Aggregate_TD_1261647_output: " << tbl_Aggregate_TD_1261647_output.getNumRow() << " " << "tbl_Aggregate_TD_1865306_output: " << tbl_Aggregate_TD_1865306_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.6877403 * 1000 << "ms" << std::endl; 
    return 0; 
}
