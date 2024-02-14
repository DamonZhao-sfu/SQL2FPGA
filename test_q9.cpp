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
    Table tbl_Project_TD_082_output("tbl_Project_TD_082_output", 6100000, 5, "");
    tbl_Project_TD_082_output.allocateHost();
    Table tbl_Filter_TD_1821_output("tbl_Filter_TD_1821_output", 6100000, 3, "");
    tbl_Filter_TD_1821_output.allocateHost();
    Table tbl_Aggregate_TD_1434_output("tbl_Aggregate_TD_1434_output", 6100000, 1, "");
    tbl_Aggregate_TD_1434_output.allocateHost();
    Table tbl_Aggregate_TD_1362_output("tbl_Aggregate_TD_1362_output", 6100000, 1, "");
    tbl_Aggregate_TD_1362_output.allocateHost();
    Table tbl_Aggregate_TD_1899_output("tbl_Aggregate_TD_1899_output", 6100000, 1, "");
    tbl_Aggregate_TD_1899_output.allocateHost();
    Table tbl_Aggregate_TD_1227_output("tbl_Aggregate_TD_1227_output", 6100000, 1, "");
    tbl_Aggregate_TD_1227_output.allocateHost();
    Table tbl_Aggregate_TD_1569_output("tbl_Aggregate_TD_1569_output", 6100000, 1, "");
    tbl_Aggregate_TD_1569_output.allocateHost();
    Table tbl_Aggregate_TD_1737_output("tbl_Aggregate_TD_1737_output", 6100000, 1, "");
    tbl_Aggregate_TD_1737_output.allocateHost();
    Table tbl_Aggregate_TD_1694_output("tbl_Aggregate_TD_1694_output", 6100000, 1, "");
    tbl_Aggregate_TD_1694_output.allocateHost();
    Table tbl_Aggregate_TD_1525_output("tbl_Aggregate_TD_1525_output", 6100000, 1, "");
    tbl_Aggregate_TD_1525_output.allocateHost();
    Table tbl_Aggregate_TD_1655_output("tbl_Aggregate_TD_1655_output", 6100000, 1, "");
    tbl_Aggregate_TD_1655_output.allocateHost();
    Table tbl_Aggregate_TD_143_output("tbl_Aggregate_TD_143_output", 6100000, 1, "");
    tbl_Aggregate_TD_143_output.allocateHost();
    Table tbl_Aggregate_TD_1593_output("tbl_Aggregate_TD_1593_output", 6100000, 1, "");
    tbl_Aggregate_TD_1593_output.allocateHost();
    Table tbl_Aggregate_TD_1163_output("tbl_Aggregate_TD_1163_output", 6100000, 1, "");
    tbl_Aggregate_TD_1163_output.allocateHost();
    Table tbl_Aggregate_TD_1143_output("tbl_Aggregate_TD_1143_output", 6100000, 1, "");
    tbl_Aggregate_TD_1143_output.allocateHost();
    Table tbl_Aggregate_TD_145_output("tbl_Aggregate_TD_145_output", 6100000, 1, "");
    tbl_Aggregate_TD_145_output.allocateHost();
    Table tbl_Aggregate_TD_1222_output("tbl_Aggregate_TD_1222_output", 6100000, 1, "");
    tbl_Aggregate_TD_1222_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2543_input;
    tbl_SerializeFromObject_TD_2543_input = Table("reason", reason_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_2543_input.addCol("r_reason_sk", 4);
    tbl_SerializeFromObject_TD_2543_input.addCol("r_reason_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_2543_input.addCol("r_reason_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_2543_input.allocateHost();
    tbl_SerializeFromObject_TD_2543_input.loadHost();
    Table tbl_Filter_TD_2496_output("tbl_Filter_TD_2496_output", 6100000, 23, "");
    tbl_Filter_TD_2496_output.allocateHost();
    Table tbl_Filter_TD_2783_output("tbl_Filter_TD_2783_output", 6100000, 1, "");
    tbl_Filter_TD_2783_output.allocateHost();
    Table tbl_Filter_TD_2390_output("tbl_Filter_TD_2390_output", 6100000, 1, "");
    tbl_Filter_TD_2390_output.allocateHost();
    Table tbl_Filter_TD_2396_output("tbl_Filter_TD_2396_output", 6100000, 23, "");
    tbl_Filter_TD_2396_output.allocateHost();
    Table tbl_Filter_TD_2280_output("tbl_Filter_TD_2280_output", 6100000, 1, "");
    tbl_Filter_TD_2280_output.allocateHost();
    Table tbl_Filter_TD_289_output("tbl_Filter_TD_289_output", 6100000, 1, "");
    tbl_Filter_TD_289_output.allocateHost();
    Table tbl_Filter_TD_234_output("tbl_Filter_TD_234_output", 6100000, 23, "");
    tbl_Filter_TD_234_output.allocateHost();
    Table tbl_Filter_TD_2677_output("tbl_Filter_TD_2677_output", 6100000, 1, "");
    tbl_Filter_TD_2677_output.allocateHost();
    Table tbl_Filter_TD_2785_output("tbl_Filter_TD_2785_output", 6100000, 1, "");
    tbl_Filter_TD_2785_output.allocateHost();
    Table tbl_Filter_TD_2396_output("tbl_Filter_TD_2396_output", 6100000, 23, "");
    tbl_Filter_TD_2396_output.allocateHost();
    Table tbl_Filter_TD_225_output("tbl_Filter_TD_225_output", 6100000, 1, "");
    tbl_Filter_TD_225_output.allocateHost();
    Table tbl_Filter_TD_2613_output("tbl_Filter_TD_2613_output", 6100000, 1, "");
    tbl_Filter_TD_2613_output.allocateHost();
    Table tbl_Filter_TD_2642_output("tbl_Filter_TD_2642_output", 6100000, 23, "");
    tbl_Filter_TD_2642_output.allocateHost();
    Table tbl_Filter_TD_2962_output("tbl_Filter_TD_2962_output", 6100000, 1, "");
    tbl_Filter_TD_2962_output.allocateHost();
    Table tbl_Filter_TD_2651_output("tbl_Filter_TD_2651_output", 6100000, 1, "");
    tbl_Filter_TD_2651_output.allocateHost();
    Table tbl_SerializeFromObject_TD_343_input;
    tbl_SerializeFromObject_TD_343_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_343_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_343_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_343_input.allocateHost();
    tbl_SerializeFromObject_TD_343_input.loadHost();
    Table tbl_SerializeFromObject_TD_3927_input;
    tbl_SerializeFromObject_TD_3927_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3927_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3927_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3927_input.allocateHost();
    tbl_SerializeFromObject_TD_3927_input.loadHost();
    Table tbl_SerializeFromObject_TD_3110_input;
    tbl_SerializeFromObject_TD_3110_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3110_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3110_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3110_input.allocateHost();
    tbl_SerializeFromObject_TD_3110_input.loadHost();
    Table tbl_SerializeFromObject_TD_3305_input;
    tbl_SerializeFromObject_TD_3305_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3305_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3305_input.allocateHost();
    tbl_SerializeFromObject_TD_3305_input.loadHost();
    Table tbl_SerializeFromObject_TD_3284_input;
    tbl_SerializeFromObject_TD_3284_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3284_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3284_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3284_input.allocateHost();
    tbl_SerializeFromObject_TD_3284_input.loadHost();
    Table tbl_SerializeFromObject_TD_3418_input;
    tbl_SerializeFromObject_TD_3418_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3418_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3418_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3418_input.allocateHost();
    tbl_SerializeFromObject_TD_3418_input.loadHost();
    Table tbl_SerializeFromObject_TD_3785_input;
    tbl_SerializeFromObject_TD_3785_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3785_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3785_input.allocateHost();
    tbl_SerializeFromObject_TD_3785_input.loadHost();
    Table tbl_SerializeFromObject_TD_3724_input;
    tbl_SerializeFromObject_TD_3724_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3724_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3724_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3724_input.allocateHost();
    tbl_SerializeFromObject_TD_3724_input.loadHost();
    Table tbl_SerializeFromObject_TD_3517_input;
    tbl_SerializeFromObject_TD_3517_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3517_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3517_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3517_input.allocateHost();
    tbl_SerializeFromObject_TD_3517_input.loadHost();
    Table tbl_SerializeFromObject_TD_361_input;
    tbl_SerializeFromObject_TD_361_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_361_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_361_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_361_input.allocateHost();
    tbl_SerializeFromObject_TD_361_input.loadHost();
    Table tbl_SerializeFromObject_TD_389_input;
    tbl_SerializeFromObject_TD_389_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_389_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_389_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_389_input.allocateHost();
    tbl_SerializeFromObject_TD_389_input.loadHost();
    Table tbl_SerializeFromObject_TD_3257_input;
    tbl_SerializeFromObject_TD_3257_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3257_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3257_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3257_input.allocateHost();
    tbl_SerializeFromObject_TD_3257_input.loadHost();
    Table tbl_SerializeFromObject_TD_3170_input;
    tbl_SerializeFromObject_TD_3170_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3170_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3170_input.allocateHost();
    tbl_SerializeFromObject_TD_3170_input.loadHost();
    Table tbl_SerializeFromObject_TD_3208_input;
    tbl_SerializeFromObject_TD_3208_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3208_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3208_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3208_input.allocateHost();
    tbl_SerializeFromObject_TD_3208_input.loadHost();
    Table tbl_SerializeFromObject_TD_3511_input;
    tbl_SerializeFromObject_TD_3511_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3511_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3511_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3511_input.allocateHost();
    tbl_SerializeFromObject_TD_3511_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_2_235867_s, tv_r_Filter_2_235867_e;
    gettimeofday(&tv_r_Filter_2_235867_s, 0);
    SW_Filter_TD_2651(tbl_SerializeFromObject_TD_3511_input, tbl_Filter_TD_2651_output);
    gettimeofday(&tv_r_Filter_2_235867_e, 0);

    struct timeval tv_r_Filter_2_855286_s, tv_r_Filter_2_855286_e;
    gettimeofday(&tv_r_Filter_2_855286_s, 0);
    SW_Filter_TD_2962(tbl_SerializeFromObject_TD_3208_input, tbl_Filter_TD_2962_output);
    gettimeofday(&tv_r_Filter_2_855286_e, 0);

    struct timeval tv_r_Filter_2_101237_s, tv_r_Filter_2_101237_e;
    gettimeofday(&tv_r_Filter_2_101237_s, 0);
    SW_Filter_TD_2642(tbl_SerializeFromObject_TD_3170_input, tbl_Filter_TD_2642_output);
    gettimeofday(&tv_r_Filter_2_101237_e, 0);

    struct timeval tv_r_Filter_2_284775_s, tv_r_Filter_2_284775_e;
    gettimeofday(&tv_r_Filter_2_284775_s, 0);
    SW_Filter_TD_2613(tbl_SerializeFromObject_TD_3257_input, tbl_Filter_TD_2613_output);
    gettimeofday(&tv_r_Filter_2_284775_e, 0);

    struct timeval tv_r_Filter_2_751753_s, tv_r_Filter_2_751753_e;
    gettimeofday(&tv_r_Filter_2_751753_s, 0);
    SW_Filter_TD_225(tbl_SerializeFromObject_TD_389_input, tbl_Filter_TD_225_output);
    gettimeofday(&tv_r_Filter_2_751753_e, 0);

    struct timeval tv_r_Filter_2_132974_s, tv_r_Filter_2_132974_e;
    gettimeofday(&tv_r_Filter_2_132974_s, 0);
    SW_Filter_TD_2396(tbl_SerializeFromObject_TD_361_input, tbl_Filter_TD_2396_output);
    gettimeofday(&tv_r_Filter_2_132974_e, 0);

    struct timeval tv_r_Filter_2_786205_s, tv_r_Filter_2_786205_e;
    gettimeofday(&tv_r_Filter_2_786205_s, 0);
    SW_Filter_TD_2785(tbl_SerializeFromObject_TD_3517_input, tbl_Filter_TD_2785_output);
    gettimeofday(&tv_r_Filter_2_786205_e, 0);

    struct timeval tv_r_Filter_2_16243_s, tv_r_Filter_2_16243_e;
    gettimeofday(&tv_r_Filter_2_16243_s, 0);
    SW_Filter_TD_2677(tbl_SerializeFromObject_TD_3724_input, tbl_Filter_TD_2677_output);
    gettimeofday(&tv_r_Filter_2_16243_e, 0);

    struct timeval tv_r_Filter_2_516658_s, tv_r_Filter_2_516658_e;
    gettimeofday(&tv_r_Filter_2_516658_s, 0);
    SW_Filter_TD_234(tbl_SerializeFromObject_TD_3785_input, tbl_Filter_TD_234_output);
    gettimeofday(&tv_r_Filter_2_516658_e, 0);

    struct timeval tv_r_Filter_2_577145_s, tv_r_Filter_2_577145_e;
    gettimeofday(&tv_r_Filter_2_577145_s, 0);
    SW_Filter_TD_289(tbl_SerializeFromObject_TD_3418_input, tbl_Filter_TD_289_output);
    gettimeofday(&tv_r_Filter_2_577145_e, 0);

    struct timeval tv_r_Filter_2_450555_s, tv_r_Filter_2_450555_e;
    gettimeofday(&tv_r_Filter_2_450555_s, 0);
    SW_Filter_TD_2280(tbl_SerializeFromObject_TD_3284_input, tbl_Filter_TD_2280_output);
    gettimeofday(&tv_r_Filter_2_450555_e, 0);

    struct timeval tv_r_Filter_2_260217_s, tv_r_Filter_2_260217_e;
    gettimeofday(&tv_r_Filter_2_260217_s, 0);
    SW_Filter_TD_2396(tbl_SerializeFromObject_TD_3305_input, tbl_Filter_TD_2396_output);
    gettimeofday(&tv_r_Filter_2_260217_e, 0);

    struct timeval tv_r_Filter_2_192354_s, tv_r_Filter_2_192354_e;
    gettimeofday(&tv_r_Filter_2_192354_s, 0);
    SW_Filter_TD_2390(tbl_SerializeFromObject_TD_3110_input, tbl_Filter_TD_2390_output);
    gettimeofday(&tv_r_Filter_2_192354_e, 0);

    struct timeval tv_r_Filter_2_684343_s, tv_r_Filter_2_684343_e;
    gettimeofday(&tv_r_Filter_2_684343_s, 0);
    SW_Filter_TD_2783(tbl_SerializeFromObject_TD_3927_input, tbl_Filter_TD_2783_output);
    gettimeofday(&tv_r_Filter_2_684343_e, 0);

    struct timeval tv_r_Filter_2_630274_s, tv_r_Filter_2_630274_e;
    gettimeofday(&tv_r_Filter_2_630274_s, 0);
    SW_Filter_TD_2496(tbl_SerializeFromObject_TD_343_input, tbl_Filter_TD_2496_output);
    gettimeofday(&tv_r_Filter_2_630274_e, 0);

    struct timeval tv_r_Aggregate_1_879578_s, tv_r_Aggregate_1_879578_e;
    gettimeofday(&tv_r_Aggregate_1_879578_s, 0);
    SW_Aggregate_TD_1222(tbl_Filter_TD_2651_output, tbl_Aggregate_TD_1222_output);
    gettimeofday(&tv_r_Aggregate_1_879578_e, 0);

    struct timeval tv_r_Aggregate_1_183468_s, tv_r_Aggregate_1_183468_e;
    gettimeofday(&tv_r_Aggregate_1_183468_s, 0);
    SW_Aggregate_TD_145(tbl_Filter_TD_2962_output, tbl_Aggregate_TD_145_output);
    gettimeofday(&tv_r_Aggregate_1_183468_e, 0);

    struct timeval tv_r_Aggregate_1_211618_s, tv_r_Aggregate_1_211618_e;
    gettimeofday(&tv_r_Aggregate_1_211618_s, 0);
    SW_Aggregate_TD_1143(tbl_Filter_TD_2642_output, tbl_Aggregate_TD_1143_output);
    gettimeofday(&tv_r_Aggregate_1_211618_e, 0);

    struct timeval tv_r_Aggregate_1_56237_s, tv_r_Aggregate_1_56237_e;
    gettimeofday(&tv_r_Aggregate_1_56237_s, 0);
    SW_Aggregate_TD_1163(tbl_Filter_TD_2613_output, tbl_Aggregate_TD_1163_output);
    gettimeofday(&tv_r_Aggregate_1_56237_e, 0);

    struct timeval tv_r_Aggregate_1_563786_s, tv_r_Aggregate_1_563786_e;
    gettimeofday(&tv_r_Aggregate_1_563786_s, 0);
    SW_Aggregate_TD_1593(tbl_Filter_TD_225_output, tbl_Aggregate_TD_1593_output);
    gettimeofday(&tv_r_Aggregate_1_563786_e, 0);

    struct timeval tv_r_Aggregate_1_398123_s, tv_r_Aggregate_1_398123_e;
    gettimeofday(&tv_r_Aggregate_1_398123_s, 0);
    SW_Aggregate_TD_143(tbl_Filter_TD_2396_output, tbl_Aggregate_TD_143_output);
    gettimeofday(&tv_r_Aggregate_1_398123_e, 0);

    struct timeval tv_r_Aggregate_1_550316_s, tv_r_Aggregate_1_550316_e;
    gettimeofday(&tv_r_Aggregate_1_550316_s, 0);
    SW_Aggregate_TD_1655(tbl_Filter_TD_2785_output, tbl_Aggregate_TD_1655_output);
    gettimeofday(&tv_r_Aggregate_1_550316_e, 0);

    struct timeval tv_r_Aggregate_1_687367_s, tv_r_Aggregate_1_687367_e;
    gettimeofday(&tv_r_Aggregate_1_687367_s, 0);
    SW_Aggregate_TD_1525(tbl_Filter_TD_2677_output, tbl_Aggregate_TD_1525_output);
    gettimeofday(&tv_r_Aggregate_1_687367_e, 0);

    struct timeval tv_r_Aggregate_1_325757_s, tv_r_Aggregate_1_325757_e;
    gettimeofday(&tv_r_Aggregate_1_325757_s, 0);
    SW_Aggregate_TD_1694(tbl_Filter_TD_234_output, tbl_Aggregate_TD_1694_output);
    gettimeofday(&tv_r_Aggregate_1_325757_e, 0);

    struct timeval tv_r_Aggregate_1_204195_s, tv_r_Aggregate_1_204195_e;
    gettimeofday(&tv_r_Aggregate_1_204195_s, 0);
    SW_Aggregate_TD_1737(tbl_Filter_TD_289_output, tbl_Aggregate_TD_1737_output);
    gettimeofday(&tv_r_Aggregate_1_204195_e, 0);

    struct timeval tv_r_Aggregate_1_41780_s, tv_r_Aggregate_1_41780_e;
    gettimeofday(&tv_r_Aggregate_1_41780_s, 0);
    SW_Aggregate_TD_1569(tbl_Filter_TD_2280_output, tbl_Aggregate_TD_1569_output);
    gettimeofday(&tv_r_Aggregate_1_41780_e, 0);

    struct timeval tv_r_Aggregate_1_272359_s, tv_r_Aggregate_1_272359_e;
    gettimeofday(&tv_r_Aggregate_1_272359_s, 0);
    SW_Aggregate_TD_1227(tbl_Filter_TD_2396_output, tbl_Aggregate_TD_1227_output);
    gettimeofday(&tv_r_Aggregate_1_272359_e, 0);

    struct timeval tv_r_Aggregate_1_86317_s, tv_r_Aggregate_1_86317_e;
    gettimeofday(&tv_r_Aggregate_1_86317_s, 0);
    SW_Aggregate_TD_1899(tbl_Filter_TD_2390_output, tbl_Aggregate_TD_1899_output);
    gettimeofday(&tv_r_Aggregate_1_86317_e, 0);

    struct timeval tv_r_Aggregate_1_548933_s, tv_r_Aggregate_1_548933_e;
    gettimeofday(&tv_r_Aggregate_1_548933_s, 0);
    SW_Aggregate_TD_1362(tbl_Filter_TD_2783_output, tbl_Aggregate_TD_1362_output);
    gettimeofday(&tv_r_Aggregate_1_548933_e, 0);

    struct timeval tv_r_Aggregate_1_398052_s, tv_r_Aggregate_1_398052_e;
    gettimeofday(&tv_r_Aggregate_1_398052_s, 0);
    SW_Aggregate_TD_1434(tbl_Filter_TD_2496_output, tbl_Aggregate_TD_1434_output);
    gettimeofday(&tv_r_Aggregate_1_398052_e, 0);

    struct timeval tv_r_Filter_1_595706_s, tv_r_Filter_1_595706_e;
    gettimeofday(&tv_r_Filter_1_595706_s, 0);
    SW_Filter_TD_1821(tbl_SerializeFromObject_TD_2543_input, tbl_Filter_TD_1821_output);
    gettimeofday(&tv_r_Filter_1_595706_e, 0);

    struct timeval tv_r_Project_0_606411_s, tv_r_Project_0_606411_e;
    gettimeofday(&tv_r_Project_0_606411_s, 0);
    SW_Project_TD_082(tbl_Filter_TD_1821_output, tbl_Aggregate_TD_1434_output, tbl_Aggregate_TD_1362_output, tbl_Aggregate_TD_1899_output, tbl_Aggregate_TD_1227_output, tbl_Aggregate_TD_1569_output, tbl_Aggregate_TD_1737_output, tbl_Aggregate_TD_1694_output, tbl_Aggregate_TD_1525_output, tbl_Aggregate_TD_1655_output, tbl_Aggregate_TD_143_output, tbl_Aggregate_TD_1593_output, tbl_Aggregate_TD_1163_output, tbl_Aggregate_TD_1143_output, tbl_Aggregate_TD_145_output, tbl_Aggregate_TD_1222_output, tbl_Project_TD_082_output);
    gettimeofday(&tv_r_Project_0_606411_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_235867_s, &tv_r_Filter_2_235867_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3511_input: " << tbl_SerializeFromObject_TD_3511_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_855286_s, &tv_r_Filter_2_855286_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3208_input: " << tbl_SerializeFromObject_TD_3208_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_101237_s, &tv_r_Filter_2_101237_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3170_input: " << tbl_SerializeFromObject_TD_3170_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_284775_s, &tv_r_Filter_2_284775_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3257_input: " << tbl_SerializeFromObject_TD_3257_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_751753_s, &tv_r_Filter_2_751753_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_389_input: " << tbl_SerializeFromObject_TD_389_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_132974_s, &tv_r_Filter_2_132974_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_361_input: " << tbl_SerializeFromObject_TD_361_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_786205_s, &tv_r_Filter_2_786205_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3517_input: " << tbl_SerializeFromObject_TD_3517_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_16243_s, &tv_r_Filter_2_16243_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3724_input: " << tbl_SerializeFromObject_TD_3724_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_516658_s, &tv_r_Filter_2_516658_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3785_input: " << tbl_SerializeFromObject_TD_3785_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_577145_s, &tv_r_Filter_2_577145_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3418_input: " << tbl_SerializeFromObject_TD_3418_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_450555_s, &tv_r_Filter_2_450555_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3284_input: " << tbl_SerializeFromObject_TD_3284_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_260217_s, &tv_r_Filter_2_260217_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3305_input: " << tbl_SerializeFromObject_TD_3305_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_192354_s, &tv_r_Filter_2_192354_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3110_input: " << tbl_SerializeFromObject_TD_3110_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_684343_s, &tv_r_Filter_2_684343_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3927_input: " << tbl_SerializeFromObject_TD_3927_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_630274_s, &tv_r_Filter_2_630274_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_343_input: " << tbl_SerializeFromObject_TD_343_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_879578_s, &tv_r_Aggregate_1_879578_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2651_output: " << tbl_Filter_TD_2651_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_183468_s, &tv_r_Aggregate_1_183468_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2962_output: " << tbl_Filter_TD_2962_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_211618_s, &tv_r_Aggregate_1_211618_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2642_output: " << tbl_Filter_TD_2642_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_56237_s, &tv_r_Aggregate_1_56237_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2613_output: " << tbl_Filter_TD_2613_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_563786_s, &tv_r_Aggregate_1_563786_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_225_output: " << tbl_Filter_TD_225_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_398123_s, &tv_r_Aggregate_1_398123_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2396_output: " << tbl_Filter_TD_2396_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_550316_s, &tv_r_Aggregate_1_550316_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2785_output: " << tbl_Filter_TD_2785_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_687367_s, &tv_r_Aggregate_1_687367_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2677_output: " << tbl_Filter_TD_2677_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_325757_s, &tv_r_Aggregate_1_325757_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_234_output: " << tbl_Filter_TD_234_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_204195_s, &tv_r_Aggregate_1_204195_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_289_output: " << tbl_Filter_TD_289_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_41780_s, &tv_r_Aggregate_1_41780_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2280_output: " << tbl_Filter_TD_2280_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_272359_s, &tv_r_Aggregate_1_272359_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2396_output: " << tbl_Filter_TD_2396_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_86317_s, &tv_r_Aggregate_1_86317_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2390_output: " << tbl_Filter_TD_2390_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_548933_s, &tv_r_Aggregate_1_548933_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2783_output: " << tbl_Filter_TD_2783_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_398052_s, &tv_r_Aggregate_1_398052_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2496_output: " << tbl_Filter_TD_2496_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_1: " << tvdiff(&tv_r_Filter_1_595706_s, &tv_r_Filter_1_595706_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2543_input: " << tbl_SerializeFromObject_TD_2543_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_0: " << tvdiff(&tv_r_Project_0_606411_s, &tv_r_Project_0_606411_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1821_output: " << tbl_Filter_TD_1821_output.getNumRow() << " " << "tbl_Aggregate_TD_1434_output: " << tbl_Aggregate_TD_1434_output.getNumRow() << " " << "tbl_Aggregate_TD_1362_output: " << tbl_Aggregate_TD_1362_output.getNumRow() << " " << "tbl_Aggregate_TD_1899_output: " << tbl_Aggregate_TD_1899_output.getNumRow() << " " << "tbl_Aggregate_TD_1227_output: " << tbl_Aggregate_TD_1227_output.getNumRow() << " " << "tbl_Aggregate_TD_1569_output: " << tbl_Aggregate_TD_1569_output.getNumRow() << " " << "tbl_Aggregate_TD_1737_output: " << tbl_Aggregate_TD_1737_output.getNumRow() << " " << "tbl_Aggregate_TD_1694_output: " << tbl_Aggregate_TD_1694_output.getNumRow() << " " << "tbl_Aggregate_TD_1525_output: " << tbl_Aggregate_TD_1525_output.getNumRow() << " " << "tbl_Aggregate_TD_1655_output: " << tbl_Aggregate_TD_1655_output.getNumRow() << " " << "tbl_Aggregate_TD_143_output: " << tbl_Aggregate_TD_143_output.getNumRow() << " " << "tbl_Aggregate_TD_1593_output: " << tbl_Aggregate_TD_1593_output.getNumRow() << " " << "tbl_Aggregate_TD_1163_output: " << tbl_Aggregate_TD_1163_output.getNumRow() << " " << "tbl_Aggregate_TD_1143_output: " << tbl_Aggregate_TD_1143_output.getNumRow() << " " << "tbl_Aggregate_TD_145_output: " << tbl_Aggregate_TD_145_output.getNumRow() << " " << "tbl_Aggregate_TD_1222_output: " << tbl_Aggregate_TD_1222_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.9817944 * 1000 << "ms" << std::endl; 
    return 0; 
}
