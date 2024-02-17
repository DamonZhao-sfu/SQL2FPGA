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

#include "cfgFunc_q4.hpp" 
#include "q4.hpp" 

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
    std::cout << "NOTE:running query #4\n."; 
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
    Table tbl_GlobalLimit_TD_0704_output("tbl_GlobalLimit_TD_0704_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0704_output.allocateHost();
    Table tbl_LocalLimit_TD_1310_output("tbl_LocalLimit_TD_1310_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1310_output.allocateHost();
    Table tbl_Sort_TD_2521_output("tbl_Sort_TD_2521_output", 6100000, 4, "");
    tbl_Sort_TD_2521_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3948_output("tbl_JOIN_INNER_TD_3948_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3948_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4787_output("tbl_JOIN_INNER_TD_4787_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4787_output.allocateHost();
    Table tbl_Aggregate_TD_4632_output("tbl_Aggregate_TD_4632_output", 6100000, 2, "");
    tbl_Aggregate_TD_4632_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5806_output("tbl_JOIN_INNER_TD_5806_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5806_output.allocateHost();
    Table tbl_Project_TD_5601_output("tbl_Project_TD_5601_output", 6100000, 2, "");
    tbl_Project_TD_5601_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5694_output("tbl_JOIN_INNER_TD_5694_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_5694_output.allocateHost();
    Table tbl_JOIN_INNER_TD_662_output("tbl_JOIN_INNER_TD_662_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_662_output.allocateHost();
    Table tbl_Aggregate_TD_6162_output("tbl_Aggregate_TD_6162_output", 6100000, 2, "");
    tbl_Aggregate_TD_6162_output.allocateHost();
    Table tbl_Filter_TD_6666_output("tbl_Filter_TD_6666_output", 6100000, 2, "");
    tbl_Filter_TD_6666_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6822_output("tbl_JOIN_INNER_TD_6822_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_6822_output.allocateHost();
    Table tbl_Filter_TD_6305_output("tbl_Filter_TD_6305_output", 6100000, 2, "");
    tbl_Filter_TD_6305_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7541_output("tbl_JOIN_INNER_TD_7541_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7541_output.allocateHost();
    Table tbl_Project_TD_7503_output("tbl_Project_TD_7503_output", 6100000, 2, "");
    tbl_Project_TD_7503_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7724_output("tbl_JOIN_INNER_TD_7724_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_7724_output.allocateHost();
    Table tbl_Aggregate_TD_7656_output("tbl_Aggregate_TD_7656_output", 6100000, 2, "");
    tbl_Aggregate_TD_7656_output.allocateHost();
    Table tbl_Filter_TD_7795_output("tbl_Filter_TD_7795_output", 6100000, 8, "");
    tbl_Filter_TD_7795_output.allocateHost();
    Table tbl_Filter_TD_7886_output("tbl_Filter_TD_7886_output", 6100000, 6, "");
    tbl_Filter_TD_7886_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7841_input;
    tbl_SerializeFromObject_TD_7841_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7841_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7841_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7841_input.allocateHost();
    tbl_SerializeFromObject_TD_7841_input.loadHost();
    Table tbl_Filter_TD_8368_output("tbl_Filter_TD_8368_output", 6100000, 2, "");
    tbl_Filter_TD_8368_output.allocateHost();
    Table tbl_Aggregate_TD_8805_output("tbl_Aggregate_TD_8805_output", 6100000, 5, "");
    tbl_Aggregate_TD_8805_output.allocateHost();
    Table tbl_Filter_TD_8375_output("tbl_Filter_TD_8375_output", 6100000, 2, "");
    tbl_Filter_TD_8375_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8132_output("tbl_JOIN_INNER_TD_8132_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_8132_output.allocateHost();
    Table tbl_Filter_TD_8401_output("tbl_Filter_TD_8401_output", 6100000, 2, "");
    tbl_Filter_TD_8401_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8421_output("tbl_JOIN_INNER_TD_8421_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_8421_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8186_input;
    tbl_SerializeFromObject_TD_8186_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_8186_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8186_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8186_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8186_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8186_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8186_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8186_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8186_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8186_input.allocateHost();
    tbl_SerializeFromObject_TD_8186_input.loadHost();
    Table tbl_SerializeFromObject_TD_8497_input;
    tbl_SerializeFromObject_TD_8497_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_8497_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8497_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_8497_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_8497_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8497_input.addCol("ws_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_8497_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_8497_input.allocateHost();
    tbl_SerializeFromObject_TD_8497_input.loadHost();
    Table tbl_Aggregate_TD_9438_output("tbl_Aggregate_TD_9438_output", 6100000, 2, "");
    tbl_Aggregate_TD_9438_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9154_output("tbl_JOIN_INNER_TD_9154_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_9154_output.allocateHost();
    Table tbl_Aggregate_TD_9401_output("tbl_Aggregate_TD_9401_output", 6100000, 2, "");
    tbl_Aggregate_TD_9401_output.allocateHost();
    Table tbl_Filter_TD_9729_output("tbl_Filter_TD_9729_output", 6100000, 8, "");
    tbl_Filter_TD_9729_output.allocateHost();
    Table tbl_Filter_TD_988_output("tbl_Filter_TD_988_output", 6100000, 6, "");
    tbl_Filter_TD_988_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9336_input;
    tbl_SerializeFromObject_TD_9336_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9336_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9336_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9336_input.allocateHost();
    tbl_SerializeFromObject_TD_9336_input.loadHost();
    Table tbl_JOIN_INNER_TD_910_output("tbl_JOIN_INNER_TD_910_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_910_output.allocateHost();
    Table tbl_Filter_TD_9465_output("tbl_Filter_TD_9465_output", 6100000, 2, "");
    tbl_Filter_TD_9465_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10100_output("tbl_JOIN_INNER_TD_10100_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_10100_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10943_output("tbl_JOIN_INNER_TD_10943_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_10943_output.allocateHost();
    Table tbl_Filter_TD_10587_output("tbl_Filter_TD_10587_output", 6100000, 2, "");
    tbl_Filter_TD_10587_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10633_output("tbl_JOIN_INNER_TD_10633_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_10633_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10338_input;
    tbl_SerializeFromObject_TD_10338_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_10338_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_10338_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10338_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10338_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10338_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10338_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10338_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10338_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10338_input.allocateHost();
    tbl_SerializeFromObject_TD_10338_input.loadHost();
    Table tbl_SerializeFromObject_TD_10846_input;
    tbl_SerializeFromObject_TD_10846_input = Table("catalog_sales", catalog_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_10846_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10846_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_10846_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_10846_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10846_input.addCol("cs_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_10846_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_10846_input.allocateHost();
    tbl_SerializeFromObject_TD_10846_input.loadHost();
    Table tbl_Filter_TD_10886_output("tbl_Filter_TD_10886_output", 6100000, 8, "");
    tbl_Filter_TD_10886_output.allocateHost();
    Table tbl_Filter_TD_10898_output("tbl_Filter_TD_10898_output", 6100000, 6, "");
    tbl_Filter_TD_10898_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10963_input;
    tbl_SerializeFromObject_TD_10963_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10963_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10963_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10963_input.allocateHost();
    tbl_SerializeFromObject_TD_10963_input.loadHost();
    Table tbl_JOIN_INNER_TD_11806_output("tbl_JOIN_INNER_TD_11806_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_11806_output.allocateHost();
    Table tbl_Filter_TD_11142_output("tbl_Filter_TD_11142_output", 6100000, 2, "");
    tbl_Filter_TD_11142_output.allocateHost();
    Table tbl_Filter_TD_11116_output("tbl_Filter_TD_11116_output", 6100000, 8, "");
    tbl_Filter_TD_11116_output.allocateHost();
    Table tbl_Filter_TD_11725_output("tbl_Filter_TD_11725_output", 6100000, 6, "");
    tbl_Filter_TD_11725_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11240_input;
    tbl_SerializeFromObject_TD_11240_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11240_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11240_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11240_input.allocateHost();
    tbl_SerializeFromObject_TD_11240_input.loadHost();
    Table tbl_JOIN_INNER_TD_11967_output("tbl_JOIN_INNER_TD_11967_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_11967_output.allocateHost();
    Table tbl_Filter_TD_11454_output("tbl_Filter_TD_11454_output", 6100000, 2, "");
    tbl_Filter_TD_11454_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1194_input;
    tbl_SerializeFromObject_TD_1194_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_1194_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_1194_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1194_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1194_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1194_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1194_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1194_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1194_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1194_input.allocateHost();
    tbl_SerializeFromObject_TD_1194_input.loadHost();
    Table tbl_SerializeFromObject_TD_11274_input;
    tbl_SerializeFromObject_TD_11274_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_11274_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11274_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11274_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_11274_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11274_input.addCol("ws_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_11274_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_11274_input.allocateHost();
    tbl_SerializeFromObject_TD_11274_input.loadHost();
    Table tbl_Filter_TD_12903_output("tbl_Filter_TD_12903_output", 6100000, 8, "");
    tbl_Filter_TD_12903_output.allocateHost();
    Table tbl_Filter_TD_12213_output("tbl_Filter_TD_12213_output", 6100000, 6, "");
    tbl_Filter_TD_12213_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12807_input;
    tbl_SerializeFromObject_TD_12807_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12807_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12807_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12807_input.allocateHost();
    tbl_SerializeFromObject_TD_12807_input.loadHost();
    Table tbl_SerializeFromObject_TD_12543_input;
    tbl_SerializeFromObject_TD_12543_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_12543_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12543_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12543_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12543_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12543_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12543_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12543_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12543_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12543_input.allocateHost();
    tbl_SerializeFromObject_TD_12543_input.loadHost();
    Table tbl_SerializeFromObject_TD_12491_input;
    tbl_SerializeFromObject_TD_12491_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_12491_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12491_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12491_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_12491_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12491_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_12491_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_12491_input.allocateHost();
    tbl_SerializeFromObject_TD_12491_input.loadHost();
    Table tbl_Filter_TD_12183_output("tbl_Filter_TD_12183_output", 6100000, 8, "");
    tbl_Filter_TD_12183_output.allocateHost();
    Table tbl_Filter_TD_12662_output("tbl_Filter_TD_12662_output", 6100000, 6, "");
    tbl_Filter_TD_12662_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12999_input;
    tbl_SerializeFromObject_TD_12999_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12999_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12999_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12999_input.allocateHost();
    tbl_SerializeFromObject_TD_12999_input.loadHost();
    Table tbl_SerializeFromObject_TD_13479_input;
    tbl_SerializeFromObject_TD_13479_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_13479_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_13479_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13479_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13479_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13479_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13479_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13479_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13479_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13479_input.allocateHost();
    tbl_SerializeFromObject_TD_13479_input.loadHost();
    Table tbl_SerializeFromObject_TD_13911_input;
    tbl_SerializeFromObject_TD_13911_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13911_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13911_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_13911_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_13911_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13911_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_13911_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_13911_input.allocateHost();
    tbl_SerializeFromObject_TD_13911_input.loadHost();
    Table tbl_SerializeFromObject_TD_13732_input;
    tbl_SerializeFromObject_TD_13732_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_13732_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_13732_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13732_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13732_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13732_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13732_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13732_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13732_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13732_input.allocateHost();
    tbl_SerializeFromObject_TD_13732_input.loadHost();
    Table tbl_SerializeFromObject_TD_1331_input;
    tbl_SerializeFromObject_TD_1331_input = Table("catalog_sales", catalog_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_1331_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1331_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_1331_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_1331_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1331_input.addCol("cs_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_1331_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_1331_input.allocateHost();
    tbl_SerializeFromObject_TD_1331_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_855142_s, tv_r_Filter_12_855142_e;
    gettimeofday(&tv_r_Filter_12_855142_s, 0);
    SW_Filter_TD_12662(tbl_SerializeFromObject_TD_1331_input, tbl_Filter_TD_12662_output);
    gettimeofday(&tv_r_Filter_12_855142_e, 0);

    struct timeval tv_r_Filter_12_786965_s, tv_r_Filter_12_786965_e;
    gettimeofday(&tv_r_Filter_12_786965_s, 0);
    SW_Filter_TD_12183(tbl_SerializeFromObject_TD_13732_input, tbl_Filter_TD_12183_output);
    gettimeofday(&tv_r_Filter_12_786965_e, 0);

    struct timeval tv_r_Filter_12_880832_s, tv_r_Filter_12_880832_e;
    gettimeofday(&tv_r_Filter_12_880832_s, 0);
    SW_Filter_TD_12213(tbl_SerializeFromObject_TD_13911_input, tbl_Filter_TD_12213_output);
    gettimeofday(&tv_r_Filter_12_880832_e, 0);

    struct timeval tv_r_Filter_12_570008_s, tv_r_Filter_12_570008_e;
    gettimeofday(&tv_r_Filter_12_570008_s, 0);
    SW_Filter_TD_12903(tbl_SerializeFromObject_TD_13479_input, tbl_Filter_TD_12903_output);
    gettimeofday(&tv_r_Filter_12_570008_e, 0);

    struct timeval tv_r_Filter_11_640976_s, tv_r_Filter_11_640976_e;
    gettimeofday(&tv_r_Filter_11_640976_s, 0);
    SW_Filter_TD_11454(tbl_SerializeFromObject_TD_12999_input, tbl_Filter_TD_11454_output);
    gettimeofday(&tv_r_Filter_11_640976_e, 0);

    struct timeval tv_r_JOIN_INNER_11_751847_s, tv_r_JOIN_INNER_11_751847_e;
    gettimeofday(&tv_r_JOIN_INNER_11_751847_s, 0);
    SW_JOIN_INNER_TD_11967(tbl_Filter_TD_12183_output, tbl_Filter_TD_12662_output, tbl_JOIN_INNER_TD_11967_output);
    gettimeofday(&tv_r_JOIN_INNER_11_751847_e, 0);

    struct timeval tv_r_Filter_11_261552_s, tv_r_Filter_11_261552_e;
    gettimeofday(&tv_r_Filter_11_261552_s, 0);
    SW_Filter_TD_11725(tbl_SerializeFromObject_TD_12491_input, tbl_Filter_TD_11725_output);
    gettimeofday(&tv_r_Filter_11_261552_e, 0);

    struct timeval tv_r_Filter_11_788677_s, tv_r_Filter_11_788677_e;
    gettimeofday(&tv_r_Filter_11_788677_s, 0);
    SW_Filter_TD_11116(tbl_SerializeFromObject_TD_12543_input, tbl_Filter_TD_11116_output);
    gettimeofday(&tv_r_Filter_11_788677_e, 0);

    struct timeval tv_r_Filter_11_939661_s, tv_r_Filter_11_939661_e;
    gettimeofday(&tv_r_Filter_11_939661_s, 0);
    SW_Filter_TD_11142(tbl_SerializeFromObject_TD_12807_input, tbl_Filter_TD_11142_output);
    gettimeofday(&tv_r_Filter_11_939661_e, 0);

    struct timeval tv_r_JOIN_INNER_11_299417_s, tv_r_JOIN_INNER_11_299417_e;
    gettimeofday(&tv_r_JOIN_INNER_11_299417_s, 0);
    SW_JOIN_INNER_TD_11806(tbl_Filter_TD_12903_output, tbl_Filter_TD_12213_output, tbl_JOIN_INNER_TD_11806_output);
    gettimeofday(&tv_r_JOIN_INNER_11_299417_e, 0);

    struct timeval tv_r_Filter_10_113517_s, tv_r_Filter_10_113517_e;
    gettimeofday(&tv_r_Filter_10_113517_s, 0);
    SW_Filter_TD_10898(tbl_SerializeFromObject_TD_11274_input, tbl_Filter_TD_10898_output);
    gettimeofday(&tv_r_Filter_10_113517_e, 0);

    struct timeval tv_r_Filter_10_93631_s, tv_r_Filter_10_93631_e;
    gettimeofday(&tv_r_Filter_10_93631_s, 0);
    SW_Filter_TD_10886(tbl_SerializeFromObject_TD_1194_input, tbl_Filter_TD_10886_output);
    gettimeofday(&tv_r_Filter_10_93631_e, 0);

    struct timeval tv_r_JOIN_INNER_10_471924_s, tv_r_JOIN_INNER_10_471924_e;
    gettimeofday(&tv_r_JOIN_INNER_10_471924_s, 0);
    SW_JOIN_INNER_TD_10633(tbl_JOIN_INNER_TD_11967_output, tbl_Filter_TD_11454_output, tbl_JOIN_INNER_TD_10633_output);
    gettimeofday(&tv_r_JOIN_INNER_10_471924_e, 0);

    struct timeval tv_r_Filter_10_86852_s, tv_r_Filter_10_86852_e;
    gettimeofday(&tv_r_Filter_10_86852_s, 0);
    SW_Filter_TD_10587(tbl_SerializeFromObject_TD_11240_input, tbl_Filter_TD_10587_output);
    gettimeofday(&tv_r_Filter_10_86852_e, 0);

    struct timeval tv_r_JOIN_INNER_10_833668_s, tv_r_JOIN_INNER_10_833668_e;
    gettimeofday(&tv_r_JOIN_INNER_10_833668_s, 0);
    SW_JOIN_INNER_TD_10943(tbl_Filter_TD_11116_output, tbl_Filter_TD_11725_output, tbl_JOIN_INNER_TD_10943_output);
    gettimeofday(&tv_r_JOIN_INNER_10_833668_e, 0);

    struct timeval tv_r_JOIN_INNER_10_449942_s, tv_r_JOIN_INNER_10_449942_e;
    gettimeofday(&tv_r_JOIN_INNER_10_449942_s, 0);
    SW_JOIN_INNER_TD_10100(tbl_JOIN_INNER_TD_11806_output, tbl_Filter_TD_11142_output, tbl_JOIN_INNER_TD_10100_output);
    gettimeofday(&tv_r_JOIN_INNER_10_449942_e, 0);

    struct timeval tv_r_Filter_9_375403_s, tv_r_Filter_9_375403_e;
    gettimeofday(&tv_r_Filter_9_375403_s, 0);
    SW_Filter_TD_9465(tbl_SerializeFromObject_TD_10963_input, tbl_Filter_TD_9465_output);
    gettimeofday(&tv_r_Filter_9_375403_e, 0);

    struct timeval tv_r_JOIN_INNER_9_233531_s, tv_r_JOIN_INNER_9_233531_e;
    gettimeofday(&tv_r_JOIN_INNER_9_233531_s, 0);
    SW_JOIN_INNER_TD_910(tbl_Filter_TD_10886_output, tbl_Filter_TD_10898_output, tbl_JOIN_INNER_TD_910_output);
    gettimeofday(&tv_r_JOIN_INNER_9_233531_e, 0);

    struct timeval tv_r_Filter_9_498159_s, tv_r_Filter_9_498159_e;
    gettimeofday(&tv_r_Filter_9_498159_s, 0);
    SW_Filter_TD_988(tbl_SerializeFromObject_TD_10846_input, tbl_Filter_TD_988_output);
    gettimeofday(&tv_r_Filter_9_498159_e, 0);

    struct timeval tv_r_Filter_9_448939_s, tv_r_Filter_9_448939_e;
    gettimeofday(&tv_r_Filter_9_448939_s, 0);
    SW_Filter_TD_9729(tbl_SerializeFromObject_TD_10338_input, tbl_Filter_TD_9729_output);
    gettimeofday(&tv_r_Filter_9_448939_e, 0);

    struct timeval tv_r_Aggregate_9_396590_s, tv_r_Aggregate_9_396590_e;
    gettimeofday(&tv_r_Aggregate_9_396590_s, 0);
    SW_Aggregate_TD_9401(tbl_JOIN_INNER_TD_10633_output, tbl_Aggregate_TD_9401_output);
    gettimeofday(&tv_r_Aggregate_9_396590_e, 0);

    struct timeval tv_r_JOIN_INNER_9_107357_s, tv_r_JOIN_INNER_9_107357_e;
    gettimeofday(&tv_r_JOIN_INNER_9_107357_s, 0);
    SW_JOIN_INNER_TD_9154(tbl_JOIN_INNER_TD_10943_output, tbl_Filter_TD_10587_output, tbl_JOIN_INNER_TD_9154_output);
    gettimeofday(&tv_r_JOIN_INNER_9_107357_e, 0);

    struct timeval tv_r_Aggregate_9_663275_s, tv_r_Aggregate_9_663275_e;
    gettimeofday(&tv_r_Aggregate_9_663275_s, 0);
    SW_Aggregate_TD_9438(tbl_JOIN_INNER_TD_10100_output, tbl_Aggregate_TD_9438_output);
    gettimeofday(&tv_r_Aggregate_9_663275_e, 0);

    struct timeval tv_r_JOIN_INNER_8_890200_s, tv_r_JOIN_INNER_8_890200_e;
    gettimeofday(&tv_r_JOIN_INNER_8_890200_s, 0);
    SW_JOIN_INNER_TD_8421(tbl_JOIN_INNER_TD_910_output, tbl_Filter_TD_9465_output, tbl_JOIN_INNER_TD_8421_output);
    gettimeofday(&tv_r_JOIN_INNER_8_890200_e, 0);

    struct timeval tv_r_Filter_8_949231_s, tv_r_Filter_8_949231_e;
    gettimeofday(&tv_r_Filter_8_949231_s, 0);
    SW_Filter_TD_8401(tbl_SerializeFromObject_TD_9336_input, tbl_Filter_TD_8401_output);
    gettimeofday(&tv_r_Filter_8_949231_e, 0);

    struct timeval tv_r_JOIN_INNER_8_177243_s, tv_r_JOIN_INNER_8_177243_e;
    gettimeofday(&tv_r_JOIN_INNER_8_177243_s, 0);
    SW_JOIN_INNER_TD_8132(tbl_Filter_TD_9729_output, tbl_Filter_TD_988_output, tbl_JOIN_INNER_TD_8132_output);
    gettimeofday(&tv_r_JOIN_INNER_8_177243_e, 0);

    struct timeval tv_r_Filter_8_961511_s, tv_r_Filter_8_961511_e;
    gettimeofday(&tv_r_Filter_8_961511_s, 0);
    SW_Filter_TD_8375(tbl_Aggregate_TD_9401_output, tbl_Filter_TD_8375_output);
    gettimeofday(&tv_r_Filter_8_961511_e, 0);

    struct timeval tv_r_Aggregate_8_700797_s, tv_r_Aggregate_8_700797_e;
    gettimeofday(&tv_r_Aggregate_8_700797_s, 0);
    SW_Aggregate_TD_8805(tbl_JOIN_INNER_TD_9154_output, tbl_Aggregate_TD_8805_output);
    gettimeofday(&tv_r_Aggregate_8_700797_e, 0);

    struct timeval tv_r_Filter_8_571864_s, tv_r_Filter_8_571864_e;
    gettimeofday(&tv_r_Filter_8_571864_s, 0);
    SW_Filter_TD_8368(tbl_Aggregate_TD_9438_output, tbl_Filter_TD_8368_output);
    gettimeofday(&tv_r_Filter_8_571864_e, 0);

    struct timeval tv_r_Filter_7_865415_s, tv_r_Filter_7_865415_e;
    gettimeofday(&tv_r_Filter_7_865415_s, 0);
    SW_Filter_TD_7886(tbl_SerializeFromObject_TD_8497_input, tbl_Filter_TD_7886_output);
    gettimeofday(&tv_r_Filter_7_865415_e, 0);

    struct timeval tv_r_Filter_7_344152_s, tv_r_Filter_7_344152_e;
    gettimeofday(&tv_r_Filter_7_344152_s, 0);
    SW_Filter_TD_7795(tbl_SerializeFromObject_TD_8186_input, tbl_Filter_TD_7795_output);
    gettimeofday(&tv_r_Filter_7_344152_e, 0);

    struct timeval tv_r_Aggregate_7_144872_s, tv_r_Aggregate_7_144872_e;
    gettimeofday(&tv_r_Aggregate_7_144872_s, 0);
    SW_Aggregate_TD_7656(tbl_JOIN_INNER_TD_8421_output, tbl_Aggregate_TD_7656_output);
    gettimeofday(&tv_r_Aggregate_7_144872_e, 0);

    struct timeval tv_r_JOIN_INNER_7_140780_s, tv_r_JOIN_INNER_7_140780_e;
    gettimeofday(&tv_r_JOIN_INNER_7_140780_s, 0);
    SW_JOIN_INNER_TD_7724(tbl_JOIN_INNER_TD_8132_output, tbl_Filter_TD_8401_output, tbl_JOIN_INNER_TD_7724_output);
    gettimeofday(&tv_r_JOIN_INNER_7_140780_e, 0);

    struct timeval tv_r_Project_7_998100_s, tv_r_Project_7_998100_e;
    gettimeofday(&tv_r_Project_7_998100_s, 0);
    SW_Project_TD_7503(tbl_Filter_TD_8375_output, tbl_Project_TD_7503_output);
    gettimeofday(&tv_r_Project_7_998100_e, 0);

    struct timeval tv_r_JOIN_INNER_7_962281_s, tv_r_JOIN_INNER_7_962281_e;
    gettimeofday(&tv_r_JOIN_INNER_7_962281_s, 0);
    SW_JOIN_INNER_TD_7541(tbl_Filter_TD_8368_output, tbl_Aggregate_TD_8805_output, tbl_JOIN_INNER_TD_7541_output);
    gettimeofday(&tv_r_JOIN_INNER_7_962281_e, 0);

    struct timeval tv_r_Filter_6_888608_s, tv_r_Filter_6_888608_e;
    gettimeofday(&tv_r_Filter_6_888608_s, 0);
    SW_Filter_TD_6305(tbl_SerializeFromObject_TD_7841_input, tbl_Filter_TD_6305_output);
    gettimeofday(&tv_r_Filter_6_888608_e, 0);

    struct timeval tv_r_JOIN_INNER_6_219787_s, tv_r_JOIN_INNER_6_219787_e;
    gettimeofday(&tv_r_JOIN_INNER_6_219787_s, 0);
    SW_JOIN_INNER_TD_6822(tbl_Filter_TD_7795_output, tbl_Filter_TD_7886_output, tbl_JOIN_INNER_TD_6822_output);
    gettimeofday(&tv_r_JOIN_INNER_6_219787_e, 0);

    struct timeval tv_r_Filter_6_188784_s, tv_r_Filter_6_188784_e;
    gettimeofday(&tv_r_Filter_6_188784_s, 0);
    SW_Filter_TD_6666(tbl_Aggregate_TD_7656_output, tbl_Filter_TD_6666_output);
    gettimeofday(&tv_r_Filter_6_188784_e, 0);

    struct timeval tv_r_Aggregate_6_697360_s, tv_r_Aggregate_6_697360_e;
    gettimeofday(&tv_r_Aggregate_6_697360_s, 0);
    SW_Aggregate_TD_6162(tbl_JOIN_INNER_TD_7724_output, tbl_Aggregate_TD_6162_output);
    gettimeofday(&tv_r_Aggregate_6_697360_e, 0);

    struct timeval tv_r_JOIN_INNER_6_197838_s, tv_r_JOIN_INNER_6_197838_e;
    gettimeofday(&tv_r_JOIN_INNER_6_197838_s, 0);
    SW_JOIN_INNER_TD_662(tbl_JOIN_INNER_TD_7541_output, tbl_Project_TD_7503_output, tbl_JOIN_INNER_TD_662_output);
    gettimeofday(&tv_r_JOIN_INNER_6_197838_e, 0);

    struct timeval tv_r_JOIN_INNER_5_894548_s, tv_r_JOIN_INNER_5_894548_e;
    gettimeofday(&tv_r_JOIN_INNER_5_894548_s, 0);
    SW_JOIN_INNER_TD_5694(tbl_JOIN_INNER_TD_6822_output, tbl_Filter_TD_6305_output, tbl_JOIN_INNER_TD_5694_output);
    gettimeofday(&tv_r_JOIN_INNER_5_894548_e, 0);

    struct timeval tv_r_Project_5_689723_s, tv_r_Project_5_689723_e;
    gettimeofday(&tv_r_Project_5_689723_s, 0);
    SW_Project_TD_5601(tbl_Filter_TD_6666_output, tbl_Project_TD_5601_output);
    gettimeofday(&tv_r_Project_5_689723_e, 0);

    struct timeval tv_r_JOIN_INNER_5_601596_s, tv_r_JOIN_INNER_5_601596_e;
    gettimeofday(&tv_r_JOIN_INNER_5_601596_s, 0);
    SW_JOIN_INNER_TD_5806(tbl_JOIN_INNER_TD_662_output, tbl_Aggregate_TD_6162_output, tbl_JOIN_INNER_TD_5806_output);
    gettimeofday(&tv_r_JOIN_INNER_5_601596_e, 0);

    struct timeval tv_r_Aggregate_4_616841_s, tv_r_Aggregate_4_616841_e;
    gettimeofday(&tv_r_Aggregate_4_616841_s, 0);
    SW_Aggregate_TD_4632(tbl_JOIN_INNER_TD_5694_output, tbl_Aggregate_TD_4632_output);
    gettimeofday(&tv_r_Aggregate_4_616841_e, 0);

    struct timeval tv_r_JOIN_INNER_4_446629_s, tv_r_JOIN_INNER_4_446629_e;
    gettimeofday(&tv_r_JOIN_INNER_4_446629_s, 0);
    SW_JOIN_INNER_TD_4787(tbl_JOIN_INNER_TD_5806_output, tbl_Project_TD_5601_output, tbl_JOIN_INNER_TD_4787_output);
    gettimeofday(&tv_r_JOIN_INNER_4_446629_e, 0);

    struct timeval tv_r_JOIN_INNER_3_554978_s, tv_r_JOIN_INNER_3_554978_e;
    gettimeofday(&tv_r_JOIN_INNER_3_554978_s, 0);
    SW_JOIN_INNER_TD_3948(tbl_JOIN_INNER_TD_4787_output, tbl_Aggregate_TD_4632_output, tbl_JOIN_INNER_TD_3948_output);
    gettimeofday(&tv_r_JOIN_INNER_3_554978_e, 0);

    struct timeval tv_r_Sort_2_264938_s, tv_r_Sort_2_264938_e;
    gettimeofday(&tv_r_Sort_2_264938_s, 0);
    SW_Sort_TD_2521(tbl_JOIN_INNER_TD_3948_output, tbl_Sort_TD_2521_output);
    gettimeofday(&tv_r_Sort_2_264938_e, 0);

    struct timeval tv_r_LocalLimit_1_446268_s, tv_r_LocalLimit_1_446268_e;
    gettimeofday(&tv_r_LocalLimit_1_446268_s, 0);
    SW_LocalLimit_TD_1310(tbl_Sort_TD_2521_output, tbl_LocalLimit_TD_1310_output);
    gettimeofday(&tv_r_LocalLimit_1_446268_e, 0);

    struct timeval tv_r_GlobalLimit_0_539389_s, tv_r_GlobalLimit_0_539389_e;
    gettimeofday(&tv_r_GlobalLimit_0_539389_s, 0);
    SW_GlobalLimit_TD_0704(tbl_LocalLimit_TD_1310_output, tbl_GlobalLimit_TD_0704_output);
    gettimeofday(&tv_r_GlobalLimit_0_539389_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_855142_s, &tv_r_Filter_12_855142_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1331_input: " << tbl_SerializeFromObject_TD_1331_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_786965_s, &tv_r_Filter_12_786965_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13732_input: " << tbl_SerializeFromObject_TD_13732_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_880832_s, &tv_r_Filter_12_880832_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13911_input: " << tbl_SerializeFromObject_TD_13911_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_570008_s, &tv_r_Filter_12_570008_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13479_input: " << tbl_SerializeFromObject_TD_13479_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_640976_s, &tv_r_Filter_11_640976_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12999_input: " << tbl_SerializeFromObject_TD_12999_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_751847_s, &tv_r_JOIN_INNER_11_751847_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12183_output: " << tbl_Filter_TD_12183_output.getNumRow() << " " << "tbl_Filter_TD_12662_output: " << tbl_Filter_TD_12662_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_261552_s, &tv_r_Filter_11_261552_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12491_input: " << tbl_SerializeFromObject_TD_12491_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_788677_s, &tv_r_Filter_11_788677_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12543_input: " << tbl_SerializeFromObject_TD_12543_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_939661_s, &tv_r_Filter_11_939661_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12807_input: " << tbl_SerializeFromObject_TD_12807_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_299417_s, &tv_r_JOIN_INNER_11_299417_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12903_output: " << tbl_Filter_TD_12903_output.getNumRow() << " " << "tbl_Filter_TD_12213_output: " << tbl_Filter_TD_12213_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_113517_s, &tv_r_Filter_10_113517_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11274_input: " << tbl_SerializeFromObject_TD_11274_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_93631_s, &tv_r_Filter_10_93631_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1194_input: " << tbl_SerializeFromObject_TD_1194_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_471924_s, &tv_r_JOIN_INNER_10_471924_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11967_output: " << tbl_JOIN_INNER_TD_11967_output.getNumRow() << " " << "tbl_Filter_TD_11454_output: " << tbl_Filter_TD_11454_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_86852_s, &tv_r_Filter_10_86852_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11240_input: " << tbl_SerializeFromObject_TD_11240_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_833668_s, &tv_r_JOIN_INNER_10_833668_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11116_output: " << tbl_Filter_TD_11116_output.getNumRow() << " " << "tbl_Filter_TD_11725_output: " << tbl_Filter_TD_11725_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_449942_s, &tv_r_JOIN_INNER_10_449942_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11806_output: " << tbl_JOIN_INNER_TD_11806_output.getNumRow() << " " << "tbl_Filter_TD_11142_output: " << tbl_Filter_TD_11142_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_375403_s, &tv_r_Filter_9_375403_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10963_input: " << tbl_SerializeFromObject_TD_10963_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_233531_s, &tv_r_JOIN_INNER_9_233531_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10886_output: " << tbl_Filter_TD_10886_output.getNumRow() << " " << "tbl_Filter_TD_10898_output: " << tbl_Filter_TD_10898_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_498159_s, &tv_r_Filter_9_498159_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10846_input: " << tbl_SerializeFromObject_TD_10846_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_448939_s, &tv_r_Filter_9_448939_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10338_input: " << tbl_SerializeFromObject_TD_10338_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_396590_s, &tv_r_Aggregate_9_396590_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10633_output: " << tbl_JOIN_INNER_TD_10633_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_107357_s, &tv_r_JOIN_INNER_9_107357_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10943_output: " << tbl_JOIN_INNER_TD_10943_output.getNumRow() << " " << "tbl_Filter_TD_10587_output: " << tbl_Filter_TD_10587_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_663275_s, &tv_r_Aggregate_9_663275_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10100_output: " << tbl_JOIN_INNER_TD_10100_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_890200_s, &tv_r_JOIN_INNER_8_890200_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_910_output: " << tbl_JOIN_INNER_TD_910_output.getNumRow() << " " << "tbl_Filter_TD_9465_output: " << tbl_Filter_TD_9465_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_949231_s, &tv_r_Filter_8_949231_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9336_input: " << tbl_SerializeFromObject_TD_9336_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_177243_s, &tv_r_JOIN_INNER_8_177243_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9729_output: " << tbl_Filter_TD_9729_output.getNumRow() << " " << "tbl_Filter_TD_988_output: " << tbl_Filter_TD_988_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_961511_s, &tv_r_Filter_8_961511_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9401_output: " << tbl_Aggregate_TD_9401_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_700797_s, &tv_r_Aggregate_8_700797_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9154_output: " << tbl_JOIN_INNER_TD_9154_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_571864_s, &tv_r_Filter_8_571864_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9438_output: " << tbl_Aggregate_TD_9438_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_865415_s, &tv_r_Filter_7_865415_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8497_input: " << tbl_SerializeFromObject_TD_8497_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_344152_s, &tv_r_Filter_7_344152_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8186_input: " << tbl_SerializeFromObject_TD_8186_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_144872_s, &tv_r_Aggregate_7_144872_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8421_output: " << tbl_JOIN_INNER_TD_8421_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_140780_s, &tv_r_JOIN_INNER_7_140780_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8132_output: " << tbl_JOIN_INNER_TD_8132_output.getNumRow() << " " << "tbl_Filter_TD_8401_output: " << tbl_Filter_TD_8401_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_998100_s, &tv_r_Project_7_998100_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8375_output: " << tbl_Filter_TD_8375_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_962281_s, &tv_r_JOIN_INNER_7_962281_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8368_output: " << tbl_Filter_TD_8368_output.getNumRow() << " " << "tbl_Aggregate_TD_8805_output: " << tbl_Aggregate_TD_8805_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_888608_s, &tv_r_Filter_6_888608_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7841_input: " << tbl_SerializeFromObject_TD_7841_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_219787_s, &tv_r_JOIN_INNER_6_219787_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7795_output: " << tbl_Filter_TD_7795_output.getNumRow() << " " << "tbl_Filter_TD_7886_output: " << tbl_Filter_TD_7886_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_188784_s, &tv_r_Filter_6_188784_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7656_output: " << tbl_Aggregate_TD_7656_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_697360_s, &tv_r_Aggregate_6_697360_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7724_output: " << tbl_JOIN_INNER_TD_7724_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_197838_s, &tv_r_JOIN_INNER_6_197838_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7541_output: " << tbl_JOIN_INNER_TD_7541_output.getNumRow() << " " << "tbl_Project_TD_7503_output: " << tbl_Project_TD_7503_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_894548_s, &tv_r_JOIN_INNER_5_894548_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6822_output: " << tbl_JOIN_INNER_TD_6822_output.getNumRow() << " " << "tbl_Filter_TD_6305_output: " << tbl_Filter_TD_6305_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_689723_s, &tv_r_Project_5_689723_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6666_output: " << tbl_Filter_TD_6666_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_601596_s, &tv_r_JOIN_INNER_5_601596_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_662_output: " << tbl_JOIN_INNER_TD_662_output.getNumRow() << " " << "tbl_Aggregate_TD_6162_output: " << tbl_Aggregate_TD_6162_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_616841_s, &tv_r_Aggregate_4_616841_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5694_output: " << tbl_JOIN_INNER_TD_5694_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_446629_s, &tv_r_JOIN_INNER_4_446629_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5806_output: " << tbl_JOIN_INNER_TD_5806_output.getNumRow() << " " << "tbl_Project_TD_5601_output: " << tbl_Project_TD_5601_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_554978_s, &tv_r_JOIN_INNER_3_554978_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4787_output: " << tbl_JOIN_INNER_TD_4787_output.getNumRow() << " " << "tbl_Aggregate_TD_4632_output: " << tbl_Aggregate_TD_4632_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_264938_s, &tv_r_Sort_2_264938_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3948_output: " << tbl_JOIN_INNER_TD_3948_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_446268_s, &tv_r_LocalLimit_1_446268_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2521_output: " << tbl_Sort_TD_2521_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_539389_s, &tv_r_GlobalLimit_0_539389_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1310_output: " << tbl_LocalLimit_TD_1310_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 21.022074 * 1000 << "ms" << std::endl; 
    return 0; 
}
