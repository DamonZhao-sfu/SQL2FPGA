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
    // ****************************** Tables **************************** // 
    Table tbl_Project_TD_0675_output("tbl_Project_TD_0675_output", 6100000, 5, "");
    tbl_Project_TD_0675_output.allocateHost();
    Table tbl_Filter_TD_1201_output("tbl_Filter_TD_1201_output", 6100000, 3, "");
    tbl_Filter_TD_1201_output.allocateHost();
    Table tbl_Aggregate_TD_1152_output("tbl_Aggregate_TD_1152_output", 6100000, 1, "");
    tbl_Aggregate_TD_1152_output.allocateHost();
    Table tbl_Aggregate_TD_1280_output("tbl_Aggregate_TD_1280_output", 6100000, 1, "");
    tbl_Aggregate_TD_1280_output.allocateHost();
    Table tbl_Aggregate_TD_1450_output("tbl_Aggregate_TD_1450_output", 6100000, 1, "");
    tbl_Aggregate_TD_1450_output.allocateHost();
    Table tbl_Aggregate_TD_1278_output("tbl_Aggregate_TD_1278_output", 6100000, 1, "");
    tbl_Aggregate_TD_1278_output.allocateHost();
    Table tbl_Aggregate_TD_1433_output("tbl_Aggregate_TD_1433_output", 6100000, 1, "");
    tbl_Aggregate_TD_1433_output.allocateHost();
    Table tbl_Aggregate_TD_1874_output("tbl_Aggregate_TD_1874_output", 6100000, 1, "");
    tbl_Aggregate_TD_1874_output.allocateHost();
    Table tbl_Aggregate_TD_1723_output("tbl_Aggregate_TD_1723_output", 6100000, 1, "");
    tbl_Aggregate_TD_1723_output.allocateHost();
    Table tbl_Aggregate_TD_1278_output("tbl_Aggregate_TD_1278_output", 6100000, 1, "");
    tbl_Aggregate_TD_1278_output.allocateHost();
    Table tbl_Aggregate_TD_1945_output("tbl_Aggregate_TD_1945_output", 6100000, 1, "");
    tbl_Aggregate_TD_1945_output.allocateHost();
    Table tbl_Aggregate_TD_1237_output("tbl_Aggregate_TD_1237_output", 6100000, 1, "");
    tbl_Aggregate_TD_1237_output.allocateHost();
    Table tbl_Aggregate_TD_113_output("tbl_Aggregate_TD_113_output", 6100000, 1, "");
    tbl_Aggregate_TD_113_output.allocateHost();
    Table tbl_Aggregate_TD_1164_output("tbl_Aggregate_TD_1164_output", 6100000, 1, "");
    tbl_Aggregate_TD_1164_output.allocateHost();
    Table tbl_Aggregate_TD_1841_output("tbl_Aggregate_TD_1841_output", 6100000, 1, "");
    tbl_Aggregate_TD_1841_output.allocateHost();
    Table tbl_Aggregate_TD_1286_output("tbl_Aggregate_TD_1286_output", 6100000, 1, "");
    tbl_Aggregate_TD_1286_output.allocateHost();
    Table tbl_Aggregate_TD_1958_output("tbl_Aggregate_TD_1958_output", 6100000, 1, "");
    tbl_Aggregate_TD_1958_output.allocateHost();
    Table tbl_SerializeFromObject_TD_229_input;
    tbl_SerializeFromObject_TD_229_input = Table("reason", reason_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_229_input.addCol("r_reason_sk", 4);
    tbl_SerializeFromObject_TD_229_input.addCol("r_reason_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_229_input.addCol("r_reason_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_229_input.allocateHost();
    tbl_SerializeFromObject_TD_229_input.loadHost();
    Table tbl_Filter_TD_2316_output("tbl_Filter_TD_2316_output", 6100000, 23, "");
    tbl_Filter_TD_2316_output.allocateHost();
    Table tbl_Filter_TD_2821_output("tbl_Filter_TD_2821_output", 6100000, 1, "");
    tbl_Filter_TD_2821_output.allocateHost();
    Table tbl_Filter_TD_2958_output("tbl_Filter_TD_2958_output", 6100000, 1, "");
    tbl_Filter_TD_2958_output.allocateHost();
    Table tbl_Filter_TD_242_output("tbl_Filter_TD_242_output", 6100000, 23, "");
    tbl_Filter_TD_242_output.allocateHost();
    Table tbl_Filter_TD_2222_output("tbl_Filter_TD_2222_output", 6100000, 1, "");
    tbl_Filter_TD_2222_output.allocateHost();
    Table tbl_Filter_TD_2382_output("tbl_Filter_TD_2382_output", 6100000, 1, "");
    tbl_Filter_TD_2382_output.allocateHost();
    Table tbl_Filter_TD_2957_output("tbl_Filter_TD_2957_output", 6100000, 23, "");
    tbl_Filter_TD_2957_output.allocateHost();
    Table tbl_Filter_TD_2627_output("tbl_Filter_TD_2627_output", 6100000, 1, "");
    tbl_Filter_TD_2627_output.allocateHost();
    Table tbl_Filter_TD_2927_output("tbl_Filter_TD_2927_output", 6100000, 1, "");
    tbl_Filter_TD_2927_output.allocateHost();
    Table tbl_Filter_TD_2269_output("tbl_Filter_TD_2269_output", 6100000, 23, "");
    tbl_Filter_TD_2269_output.allocateHost();
    Table tbl_Filter_TD_2662_output("tbl_Filter_TD_2662_output", 6100000, 1, "");
    tbl_Filter_TD_2662_output.allocateHost();
    Table tbl_Filter_TD_2430_output("tbl_Filter_TD_2430_output", 6100000, 1, "");
    tbl_Filter_TD_2430_output.allocateHost();
    Table tbl_Filter_TD_2501_output("tbl_Filter_TD_2501_output", 6100000, 23, "");
    tbl_Filter_TD_2501_output.allocateHost();
    Table tbl_Filter_TD_2983_output("tbl_Filter_TD_2983_output", 6100000, 1, "");
    tbl_Filter_TD_2983_output.allocateHost();
    Table tbl_Filter_TD_2501_output("tbl_Filter_TD_2501_output", 6100000, 1, "");
    tbl_Filter_TD_2501_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3782_input;
    tbl_SerializeFromObject_TD_3782_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3782_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3782_input.allocateHost();
    tbl_SerializeFromObject_TD_3782_input.loadHost();
    Table tbl_SerializeFromObject_TD_3393_input;
    tbl_SerializeFromObject_TD_3393_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3393_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3393_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3393_input.allocateHost();
    tbl_SerializeFromObject_TD_3393_input.loadHost();
    Table tbl_SerializeFromObject_TD_3616_input;
    tbl_SerializeFromObject_TD_3616_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3616_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3616_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3616_input.allocateHost();
    tbl_SerializeFromObject_TD_3616_input.loadHost();
    Table tbl_SerializeFromObject_TD_3481_input;
    tbl_SerializeFromObject_TD_3481_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3481_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3481_input.allocateHost();
    tbl_SerializeFromObject_TD_3481_input.loadHost();
    Table tbl_SerializeFromObject_TD_3916_input;
    tbl_SerializeFromObject_TD_3916_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3916_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3916_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3916_input.allocateHost();
    tbl_SerializeFromObject_TD_3916_input.loadHost();
    Table tbl_SerializeFromObject_TD_3762_input;
    tbl_SerializeFromObject_TD_3762_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3762_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3762_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3762_input.allocateHost();
    tbl_SerializeFromObject_TD_3762_input.loadHost();
    Table tbl_SerializeFromObject_TD_326_input;
    tbl_SerializeFromObject_TD_326_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_326_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_326_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_326_input.allocateHost();
    tbl_SerializeFromObject_TD_326_input.loadHost();
    Table tbl_SerializeFromObject_TD_368_input;
    tbl_SerializeFromObject_TD_368_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_368_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_368_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_368_input.allocateHost();
    tbl_SerializeFromObject_TD_368_input.loadHost();
    Table tbl_SerializeFromObject_TD_3924_input;
    tbl_SerializeFromObject_TD_3924_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3924_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3924_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3924_input.allocateHost();
    tbl_SerializeFromObject_TD_3924_input.loadHost();
    Table tbl_SerializeFromObject_TD_3396_input;
    tbl_SerializeFromObject_TD_3396_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3396_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3396_input.allocateHost();
    tbl_SerializeFromObject_TD_3396_input.loadHost();
    Table tbl_SerializeFromObject_TD_3545_input;
    tbl_SerializeFromObject_TD_3545_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3545_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3545_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3545_input.allocateHost();
    tbl_SerializeFromObject_TD_3545_input.loadHost();
    Table tbl_SerializeFromObject_TD_3333_input;
    tbl_SerializeFromObject_TD_3333_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3333_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3333_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3333_input.allocateHost();
    tbl_SerializeFromObject_TD_3333_input.loadHost();
    Table tbl_SerializeFromObject_TD_328_input;
    tbl_SerializeFromObject_TD_328_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_328_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_328_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_328_input.allocateHost();
    tbl_SerializeFromObject_TD_328_input.loadHost();
    Table tbl_SerializeFromObject_TD_3117_input;
    tbl_SerializeFromObject_TD_3117_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3117_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3117_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3117_input.allocateHost();
    tbl_SerializeFromObject_TD_3117_input.loadHost();
    Table tbl_SerializeFromObject_TD_3423_input;
    tbl_SerializeFromObject_TD_3423_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3423_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3423_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3423_input.allocateHost();
    tbl_SerializeFromObject_TD_3423_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_2_534516_s, tv_r_Filter_2_534516_e;
    gettimeofday(&tv_r_Filter_2_534516_s, 0);
    SW_Filter_TD_2501(tbl_SerializeFromObject_TD_3423_input, tbl_Filter_TD_2501_output);
    gettimeofday(&tv_r_Filter_2_534516_e, 0);

    struct timeval tv_r_Filter_2_383539_s, tv_r_Filter_2_383539_e;
    gettimeofday(&tv_r_Filter_2_383539_s, 0);
    SW_Filter_TD_2983(tbl_SerializeFromObject_TD_3117_input, tbl_Filter_TD_2983_output);
    gettimeofday(&tv_r_Filter_2_383539_e, 0);

    struct timeval tv_r_Filter_2_411167_s, tv_r_Filter_2_411167_e;
    gettimeofday(&tv_r_Filter_2_411167_s, 0);
    SW_Filter_TD_2501(tbl_SerializeFromObject_TD_328_input, tbl_Filter_TD_2501_output);
    gettimeofday(&tv_r_Filter_2_411167_e, 0);

    struct timeval tv_r_Filter_2_253205_s, tv_r_Filter_2_253205_e;
    gettimeofday(&tv_r_Filter_2_253205_s, 0);
    SW_Filter_TD_2430(tbl_SerializeFromObject_TD_3333_input, tbl_Filter_TD_2430_output);
    gettimeofday(&tv_r_Filter_2_253205_e, 0);

    struct timeval tv_r_Filter_2_386965_s, tv_r_Filter_2_386965_e;
    gettimeofday(&tv_r_Filter_2_386965_s, 0);
    SW_Filter_TD_2662(tbl_SerializeFromObject_TD_3545_input, tbl_Filter_TD_2662_output);
    gettimeofday(&tv_r_Filter_2_386965_e, 0);

    struct timeval tv_r_Filter_2_226493_s, tv_r_Filter_2_226493_e;
    gettimeofday(&tv_r_Filter_2_226493_s, 0);
    SW_Filter_TD_2269(tbl_SerializeFromObject_TD_3396_input, tbl_Filter_TD_2269_output);
    gettimeofday(&tv_r_Filter_2_226493_e, 0);

    struct timeval tv_r_Filter_2_420332_s, tv_r_Filter_2_420332_e;
    gettimeofday(&tv_r_Filter_2_420332_s, 0);
    SW_Filter_TD_2927(tbl_SerializeFromObject_TD_3924_input, tbl_Filter_TD_2927_output);
    gettimeofday(&tv_r_Filter_2_420332_e, 0);

    struct timeval tv_r_Filter_2_894623_s, tv_r_Filter_2_894623_e;
    gettimeofday(&tv_r_Filter_2_894623_s, 0);
    SW_Filter_TD_2627(tbl_SerializeFromObject_TD_368_input, tbl_Filter_TD_2627_output);
    gettimeofday(&tv_r_Filter_2_894623_e, 0);

    struct timeval tv_r_Filter_2_916243_s, tv_r_Filter_2_916243_e;
    gettimeofday(&tv_r_Filter_2_916243_s, 0);
    SW_Filter_TD_2957(tbl_SerializeFromObject_TD_326_input, tbl_Filter_TD_2957_output);
    gettimeofday(&tv_r_Filter_2_916243_e, 0);

    struct timeval tv_r_Filter_2_274888_s, tv_r_Filter_2_274888_e;
    gettimeofday(&tv_r_Filter_2_274888_s, 0);
    SW_Filter_TD_2382(tbl_SerializeFromObject_TD_3762_input, tbl_Filter_TD_2382_output);
    gettimeofday(&tv_r_Filter_2_274888_e, 0);

    struct timeval tv_r_Filter_2_354999_s, tv_r_Filter_2_354999_e;
    gettimeofday(&tv_r_Filter_2_354999_s, 0);
    SW_Filter_TD_2222(tbl_SerializeFromObject_TD_3916_input, tbl_Filter_TD_2222_output);
    gettimeofday(&tv_r_Filter_2_354999_e, 0);

    struct timeval tv_r_Filter_2_773064_s, tv_r_Filter_2_773064_e;
    gettimeofday(&tv_r_Filter_2_773064_s, 0);
    SW_Filter_TD_242(tbl_SerializeFromObject_TD_3481_input, tbl_Filter_TD_242_output);
    gettimeofday(&tv_r_Filter_2_773064_e, 0);

    struct timeval tv_r_Filter_2_732507_s, tv_r_Filter_2_732507_e;
    gettimeofday(&tv_r_Filter_2_732507_s, 0);
    SW_Filter_TD_2958(tbl_SerializeFromObject_TD_3616_input, tbl_Filter_TD_2958_output);
    gettimeofday(&tv_r_Filter_2_732507_e, 0);

    struct timeval tv_r_Filter_2_291496_s, tv_r_Filter_2_291496_e;
    gettimeofday(&tv_r_Filter_2_291496_s, 0);
    SW_Filter_TD_2821(tbl_SerializeFromObject_TD_3393_input, tbl_Filter_TD_2821_output);
    gettimeofday(&tv_r_Filter_2_291496_e, 0);

    struct timeval tv_r_Filter_2_91941_s, tv_r_Filter_2_91941_e;
    gettimeofday(&tv_r_Filter_2_91941_s, 0);
    SW_Filter_TD_2316(tbl_SerializeFromObject_TD_3782_input, tbl_Filter_TD_2316_output);
    gettimeofday(&tv_r_Filter_2_91941_e, 0);

    struct timeval tv_r_Aggregate_1_185618_s, tv_r_Aggregate_1_185618_e;
    gettimeofday(&tv_r_Aggregate_1_185618_s, 0);
    SW_Aggregate_TD_1958(tbl_Filter_TD_2501_output, tbl_Aggregate_TD_1958_output);
    gettimeofday(&tv_r_Aggregate_1_185618_e, 0);

    struct timeval tv_r_Aggregate_1_726691_s, tv_r_Aggregate_1_726691_e;
    gettimeofday(&tv_r_Aggregate_1_726691_s, 0);
    SW_Aggregate_TD_1286(tbl_Filter_TD_2983_output, tbl_Aggregate_TD_1286_output);
    gettimeofday(&tv_r_Aggregate_1_726691_e, 0);

    struct timeval tv_r_Aggregate_1_249719_s, tv_r_Aggregate_1_249719_e;
    gettimeofday(&tv_r_Aggregate_1_249719_s, 0);
    SW_Aggregate_TD_1841(tbl_Filter_TD_2501_output, tbl_Aggregate_TD_1841_output);
    gettimeofday(&tv_r_Aggregate_1_249719_e, 0);

    struct timeval tv_r_Aggregate_1_952776_s, tv_r_Aggregate_1_952776_e;
    gettimeofday(&tv_r_Aggregate_1_952776_s, 0);
    SW_Aggregate_TD_1164(tbl_Filter_TD_2430_output, tbl_Aggregate_TD_1164_output);
    gettimeofday(&tv_r_Aggregate_1_952776_e, 0);

    struct timeval tv_r_Aggregate_1_556486_s, tv_r_Aggregate_1_556486_e;
    gettimeofday(&tv_r_Aggregate_1_556486_s, 0);
    SW_Aggregate_TD_113(tbl_Filter_TD_2662_output, tbl_Aggregate_TD_113_output);
    gettimeofday(&tv_r_Aggregate_1_556486_e, 0);

    struct timeval tv_r_Aggregate_1_39095_s, tv_r_Aggregate_1_39095_e;
    gettimeofday(&tv_r_Aggregate_1_39095_s, 0);
    SW_Aggregate_TD_1237(tbl_Filter_TD_2269_output, tbl_Aggregate_TD_1237_output);
    gettimeofday(&tv_r_Aggregate_1_39095_e, 0);

    struct timeval tv_r_Aggregate_1_531782_s, tv_r_Aggregate_1_531782_e;
    gettimeofday(&tv_r_Aggregate_1_531782_s, 0);
    SW_Aggregate_TD_1945(tbl_Filter_TD_2927_output, tbl_Aggregate_TD_1945_output);
    gettimeofday(&tv_r_Aggregate_1_531782_e, 0);

    struct timeval tv_r_Aggregate_1_842239_s, tv_r_Aggregate_1_842239_e;
    gettimeofday(&tv_r_Aggregate_1_842239_s, 0);
    SW_Aggregate_TD_1278(tbl_Filter_TD_2627_output, tbl_Aggregate_TD_1278_output);
    gettimeofday(&tv_r_Aggregate_1_842239_e, 0);

    struct timeval tv_r_Aggregate_1_789106_s, tv_r_Aggregate_1_789106_e;
    gettimeofday(&tv_r_Aggregate_1_789106_s, 0);
    SW_Aggregate_TD_1723(tbl_Filter_TD_2957_output, tbl_Aggregate_TD_1723_output);
    gettimeofday(&tv_r_Aggregate_1_789106_e, 0);

    struct timeval tv_r_Aggregate_1_653361_s, tv_r_Aggregate_1_653361_e;
    gettimeofday(&tv_r_Aggregate_1_653361_s, 0);
    SW_Aggregate_TD_1874(tbl_Filter_TD_2382_output, tbl_Aggregate_TD_1874_output);
    gettimeofday(&tv_r_Aggregate_1_653361_e, 0);

    struct timeval tv_r_Aggregate_1_225758_s, tv_r_Aggregate_1_225758_e;
    gettimeofday(&tv_r_Aggregate_1_225758_s, 0);
    SW_Aggregate_TD_1433(tbl_Filter_TD_2222_output, tbl_Aggregate_TD_1433_output);
    gettimeofday(&tv_r_Aggregate_1_225758_e, 0);

    struct timeval tv_r_Aggregate_1_966265_s, tv_r_Aggregate_1_966265_e;
    gettimeofday(&tv_r_Aggregate_1_966265_s, 0);
    SW_Aggregate_TD_1278(tbl_Filter_TD_242_output, tbl_Aggregate_TD_1278_output);
    gettimeofday(&tv_r_Aggregate_1_966265_e, 0);

    struct timeval tv_r_Aggregate_1_17345_s, tv_r_Aggregate_1_17345_e;
    gettimeofday(&tv_r_Aggregate_1_17345_s, 0);
    SW_Aggregate_TD_1450(tbl_Filter_TD_2958_output, tbl_Aggregate_TD_1450_output);
    gettimeofday(&tv_r_Aggregate_1_17345_e, 0);

    struct timeval tv_r_Aggregate_1_460359_s, tv_r_Aggregate_1_460359_e;
    gettimeofday(&tv_r_Aggregate_1_460359_s, 0);
    SW_Aggregate_TD_1280(tbl_Filter_TD_2821_output, tbl_Aggregate_TD_1280_output);
    gettimeofday(&tv_r_Aggregate_1_460359_e, 0);

    struct timeval tv_r_Aggregate_1_701297_s, tv_r_Aggregate_1_701297_e;
    gettimeofday(&tv_r_Aggregate_1_701297_s, 0);
    SW_Aggregate_TD_1152(tbl_Filter_TD_2316_output, tbl_Aggregate_TD_1152_output);
    gettimeofday(&tv_r_Aggregate_1_701297_e, 0);

    struct timeval tv_r_Filter_1_76374_s, tv_r_Filter_1_76374_e;
    gettimeofday(&tv_r_Filter_1_76374_s, 0);
    SW_Filter_TD_1201(tbl_SerializeFromObject_TD_229_input, tbl_Filter_TD_1201_output);
    gettimeofday(&tv_r_Filter_1_76374_e, 0);

    struct timeval tv_r_Project_0_345333_s, tv_r_Project_0_345333_e;
    gettimeofday(&tv_r_Project_0_345333_s, 0);
    SW_Project_TD_0675(tbl_Filter_TD_1201_output, tbl_Aggregate_TD_1152_output, tbl_Aggregate_TD_1280_output, tbl_Aggregate_TD_1450_output, tbl_Aggregate_TD_1278_output, tbl_Aggregate_TD_1433_output, tbl_Aggregate_TD_1874_output, tbl_Aggregate_TD_1723_output, tbl_Aggregate_TD_1278_output, tbl_Aggregate_TD_1945_output, tbl_Aggregate_TD_1237_output, tbl_Aggregate_TD_113_output, tbl_Aggregate_TD_1164_output, tbl_Aggregate_TD_1841_output, tbl_Aggregate_TD_1286_output, tbl_Aggregate_TD_1958_output, tbl_Project_TD_0675_output);
    gettimeofday(&tv_r_Project_0_345333_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_534516_s, &tv_r_Filter_2_534516_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3423_input: " << tbl_SerializeFromObject_TD_3423_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_383539_s, &tv_r_Filter_2_383539_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3117_input: " << tbl_SerializeFromObject_TD_3117_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_411167_s, &tv_r_Filter_2_411167_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_328_input: " << tbl_SerializeFromObject_TD_328_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_253205_s, &tv_r_Filter_2_253205_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3333_input: " << tbl_SerializeFromObject_TD_3333_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_386965_s, &tv_r_Filter_2_386965_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3545_input: " << tbl_SerializeFromObject_TD_3545_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_226493_s, &tv_r_Filter_2_226493_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3396_input: " << tbl_SerializeFromObject_TD_3396_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_420332_s, &tv_r_Filter_2_420332_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3924_input: " << tbl_SerializeFromObject_TD_3924_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_894623_s, &tv_r_Filter_2_894623_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_368_input: " << tbl_SerializeFromObject_TD_368_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_916243_s, &tv_r_Filter_2_916243_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_326_input: " << tbl_SerializeFromObject_TD_326_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_274888_s, &tv_r_Filter_2_274888_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3762_input: " << tbl_SerializeFromObject_TD_3762_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_354999_s, &tv_r_Filter_2_354999_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3916_input: " << tbl_SerializeFromObject_TD_3916_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_773064_s, &tv_r_Filter_2_773064_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3481_input: " << tbl_SerializeFromObject_TD_3481_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_732507_s, &tv_r_Filter_2_732507_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3616_input: " << tbl_SerializeFromObject_TD_3616_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_291496_s, &tv_r_Filter_2_291496_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3393_input: " << tbl_SerializeFromObject_TD_3393_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_91941_s, &tv_r_Filter_2_91941_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3782_input: " << tbl_SerializeFromObject_TD_3782_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_185618_s, &tv_r_Aggregate_1_185618_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2501_output: " << tbl_Filter_TD_2501_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_726691_s, &tv_r_Aggregate_1_726691_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2983_output: " << tbl_Filter_TD_2983_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_249719_s, &tv_r_Aggregate_1_249719_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2501_output: " << tbl_Filter_TD_2501_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_952776_s, &tv_r_Aggregate_1_952776_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2430_output: " << tbl_Filter_TD_2430_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_556486_s, &tv_r_Aggregate_1_556486_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2662_output: " << tbl_Filter_TD_2662_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_39095_s, &tv_r_Aggregate_1_39095_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2269_output: " << tbl_Filter_TD_2269_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_531782_s, &tv_r_Aggregate_1_531782_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2927_output: " << tbl_Filter_TD_2927_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_842239_s, &tv_r_Aggregate_1_842239_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2627_output: " << tbl_Filter_TD_2627_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_789106_s, &tv_r_Aggregate_1_789106_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2957_output: " << tbl_Filter_TD_2957_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_653361_s, &tv_r_Aggregate_1_653361_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2382_output: " << tbl_Filter_TD_2382_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_225758_s, &tv_r_Aggregate_1_225758_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2222_output: " << tbl_Filter_TD_2222_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_966265_s, &tv_r_Aggregate_1_966265_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_242_output: " << tbl_Filter_TD_242_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_17345_s, &tv_r_Aggregate_1_17345_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2958_output: " << tbl_Filter_TD_2958_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_460359_s, &tv_r_Aggregate_1_460359_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2821_output: " << tbl_Filter_TD_2821_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_701297_s, &tv_r_Aggregate_1_701297_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2316_output: " << tbl_Filter_TD_2316_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_1: " << tvdiff(&tv_r_Filter_1_76374_s, &tv_r_Filter_1_76374_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_229_input: " << tbl_SerializeFromObject_TD_229_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_0: " << tvdiff(&tv_r_Project_0_345333_s, &tv_r_Project_0_345333_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1201_output: " << tbl_Filter_TD_1201_output.getNumRow() << " " << "tbl_Aggregate_TD_1152_output: " << tbl_Aggregate_TD_1152_output.getNumRow() << " " << "tbl_Aggregate_TD_1280_output: " << tbl_Aggregate_TD_1280_output.getNumRow() << " " << "tbl_Aggregate_TD_1450_output: " << tbl_Aggregate_TD_1450_output.getNumRow() << " " << "tbl_Aggregate_TD_1278_output: " << tbl_Aggregate_TD_1278_output.getNumRow() << " " << "tbl_Aggregate_TD_1433_output: " << tbl_Aggregate_TD_1433_output.getNumRow() << " " << "tbl_Aggregate_TD_1874_output: " << tbl_Aggregate_TD_1874_output.getNumRow() << " " << "tbl_Aggregate_TD_1723_output: " << tbl_Aggregate_TD_1723_output.getNumRow() << " " << "tbl_Aggregate_TD_1278_output: " << tbl_Aggregate_TD_1278_output.getNumRow() << " " << "tbl_Aggregate_TD_1945_output: " << tbl_Aggregate_TD_1945_output.getNumRow() << " " << "tbl_Aggregate_TD_1237_output: " << tbl_Aggregate_TD_1237_output.getNumRow() << " " << "tbl_Aggregate_TD_113_output: " << tbl_Aggregate_TD_113_output.getNumRow() << " " << "tbl_Aggregate_TD_1164_output: " << tbl_Aggregate_TD_1164_output.getNumRow() << " " << "tbl_Aggregate_TD_1841_output: " << tbl_Aggregate_TD_1841_output.getNumRow() << " " << "tbl_Aggregate_TD_1286_output: " << tbl_Aggregate_TD_1286_output.getNumRow() << " " << "tbl_Aggregate_TD_1958_output: " << tbl_Aggregate_TD_1958_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.945892 * 1000 << "ms" << std::endl; 
    return 0; 
}
