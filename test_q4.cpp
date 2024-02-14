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
    Table tbl_GlobalLimit_TD_0329_output("tbl_GlobalLimit_TD_0329_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0329_output.allocateHost();
    Table tbl_LocalLimit_TD_1727_output("tbl_LocalLimit_TD_1727_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1727_output.allocateHost();
    Table tbl_Sort_TD_2679_output("tbl_Sort_TD_2679_output", 6100000, 4, "");
    tbl_Sort_TD_2679_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3285_output("tbl_JOIN_INNER_TD_3285_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3285_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4872_output("tbl_JOIN_INNER_TD_4872_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4872_output.allocateHost();
    Table tbl_Aggregate_TD_4939_output("tbl_Aggregate_TD_4939_output", 6100000, 2, "");
    tbl_Aggregate_TD_4939_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5640_output("tbl_JOIN_INNER_TD_5640_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5640_output.allocateHost();
    Table tbl_Project_TD_5514_output("tbl_Project_TD_5514_output", 6100000, 2, "");
    tbl_Project_TD_5514_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5376_output("tbl_JOIN_INNER_TD_5376_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_5376_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6415_output("tbl_JOIN_INNER_TD_6415_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_6415_output.allocateHost();
    Table tbl_Aggregate_TD_6190_output("tbl_Aggregate_TD_6190_output", 6100000, 2, "");
    tbl_Aggregate_TD_6190_output.allocateHost();
    Table tbl_Filter_TD_6844_output("tbl_Filter_TD_6844_output", 6100000, 2, "");
    tbl_Filter_TD_6844_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6668_output("tbl_JOIN_INNER_TD_6668_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_6668_output.allocateHost();
    Table tbl_Filter_TD_6367_output("tbl_Filter_TD_6367_output", 6100000, 2, "");
    tbl_Filter_TD_6367_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7647_output("tbl_JOIN_INNER_TD_7647_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7647_output.allocateHost();
    Table tbl_Project_TD_7694_output("tbl_Project_TD_7694_output", 6100000, 2, "");
    tbl_Project_TD_7694_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7499_output("tbl_JOIN_INNER_TD_7499_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_7499_output.allocateHost();
    Table tbl_Aggregate_TD_7545_output("tbl_Aggregate_TD_7545_output", 6100000, 2, "");
    tbl_Aggregate_TD_7545_output.allocateHost();
    Table tbl_Filter_TD_7928_output("tbl_Filter_TD_7928_output", 6100000, 8, "");
    tbl_Filter_TD_7928_output.allocateHost();
    Table tbl_Filter_TD_7647_output("tbl_Filter_TD_7647_output", 6100000, 6, "");
    tbl_Filter_TD_7647_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7408_input;
    tbl_SerializeFromObject_TD_7408_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7408_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7408_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7408_input.allocateHost();
    tbl_SerializeFromObject_TD_7408_input.loadHost();
    Table tbl_Filter_TD_8807_output("tbl_Filter_TD_8807_output", 6100000, 2, "");
    tbl_Filter_TD_8807_output.allocateHost();
    Table tbl_Aggregate_TD_8715_output("tbl_Aggregate_TD_8715_output", 6100000, 5, "");
    tbl_Aggregate_TD_8715_output.allocateHost();
    Table tbl_Filter_TD_8753_output("tbl_Filter_TD_8753_output", 6100000, 2, "");
    tbl_Filter_TD_8753_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8905_output("tbl_JOIN_INNER_TD_8905_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_8905_output.allocateHost();
    Table tbl_Filter_TD_8316_output("tbl_Filter_TD_8316_output", 6100000, 2, "");
    tbl_Filter_TD_8316_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8612_output("tbl_JOIN_INNER_TD_8612_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_8612_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8482_input;
    tbl_SerializeFromObject_TD_8482_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_8482_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8482_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8482_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8482_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8482_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8482_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8482_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8482_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8482_input.allocateHost();
    tbl_SerializeFromObject_TD_8482_input.loadHost();
    Table tbl_SerializeFromObject_TD_8926_input;
    tbl_SerializeFromObject_TD_8926_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_8926_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8926_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_8926_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_8926_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8926_input.addCol("ws_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_8926_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_8926_input.allocateHost();
    tbl_SerializeFromObject_TD_8926_input.loadHost();
    Table tbl_Aggregate_TD_9828_output("tbl_Aggregate_TD_9828_output", 6100000, 2, "");
    tbl_Aggregate_TD_9828_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9550_output("tbl_JOIN_INNER_TD_9550_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_9550_output.allocateHost();
    Table tbl_Aggregate_TD_913_output("tbl_Aggregate_TD_913_output", 6100000, 2, "");
    tbl_Aggregate_TD_913_output.allocateHost();
    Table tbl_Filter_TD_9512_output("tbl_Filter_TD_9512_output", 6100000, 8, "");
    tbl_Filter_TD_9512_output.allocateHost();
    Table tbl_Filter_TD_9533_output("tbl_Filter_TD_9533_output", 6100000, 6, "");
    tbl_Filter_TD_9533_output.allocateHost();
    Table tbl_SerializeFromObject_TD_940_input;
    tbl_SerializeFromObject_TD_940_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_940_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_940_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_940_input.allocateHost();
    tbl_SerializeFromObject_TD_940_input.loadHost();
    Table tbl_JOIN_INNER_TD_9193_output("tbl_JOIN_INNER_TD_9193_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_9193_output.allocateHost();
    Table tbl_Filter_TD_9950_output("tbl_Filter_TD_9950_output", 6100000, 2, "");
    tbl_Filter_TD_9950_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10209_output("tbl_JOIN_INNER_TD_10209_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_10209_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10431_output("tbl_JOIN_INNER_TD_10431_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_10431_output.allocateHost();
    Table tbl_Filter_TD_10696_output("tbl_Filter_TD_10696_output", 6100000, 2, "");
    tbl_Filter_TD_10696_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10944_output("tbl_JOIN_INNER_TD_10944_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_10944_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10918_input;
    tbl_SerializeFromObject_TD_10918_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_10918_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_10918_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10918_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10918_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10918_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10918_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10918_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10918_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10918_input.allocateHost();
    tbl_SerializeFromObject_TD_10918_input.loadHost();
    Table tbl_SerializeFromObject_TD_10301_input;
    tbl_SerializeFromObject_TD_10301_input = Table("catalog_sales", catalog_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_10301_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10301_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_10301_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_10301_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10301_input.addCol("cs_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_10301_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_10301_input.allocateHost();
    tbl_SerializeFromObject_TD_10301_input.loadHost();
    Table tbl_Filter_TD_10535_output("tbl_Filter_TD_10535_output", 6100000, 8, "");
    tbl_Filter_TD_10535_output.allocateHost();
    Table tbl_Filter_TD_10745_output("tbl_Filter_TD_10745_output", 6100000, 6, "");
    tbl_Filter_TD_10745_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10108_input;
    tbl_SerializeFromObject_TD_10108_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10108_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10108_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10108_input.allocateHost();
    tbl_SerializeFromObject_TD_10108_input.loadHost();
    Table tbl_JOIN_INNER_TD_11514_output("tbl_JOIN_INNER_TD_11514_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_11514_output.allocateHost();
    Table tbl_Filter_TD_11531_output("tbl_Filter_TD_11531_output", 6100000, 2, "");
    tbl_Filter_TD_11531_output.allocateHost();
    Table tbl_Filter_TD_11530_output("tbl_Filter_TD_11530_output", 6100000, 8, "");
    tbl_Filter_TD_11530_output.allocateHost();
    Table tbl_Filter_TD_11371_output("tbl_Filter_TD_11371_output", 6100000, 6, "");
    tbl_Filter_TD_11371_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11607_input;
    tbl_SerializeFromObject_TD_11607_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11607_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11607_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11607_input.allocateHost();
    tbl_SerializeFromObject_TD_11607_input.loadHost();
    Table tbl_JOIN_INNER_TD_11672_output("tbl_JOIN_INNER_TD_11672_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_11672_output.allocateHost();
    Table tbl_Filter_TD_11182_output("tbl_Filter_TD_11182_output", 6100000, 2, "");
    tbl_Filter_TD_11182_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11560_input;
    tbl_SerializeFromObject_TD_11560_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_11560_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11560_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11560_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11560_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11560_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11560_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11560_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11560_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11560_input.allocateHost();
    tbl_SerializeFromObject_TD_11560_input.loadHost();
    Table tbl_SerializeFromObject_TD_1168_input;
    tbl_SerializeFromObject_TD_1168_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_1168_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1168_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_1168_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_1168_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1168_input.addCol("ws_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_1168_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_1168_input.allocateHost();
    tbl_SerializeFromObject_TD_1168_input.loadHost();
    Table tbl_Filter_TD_12338_output("tbl_Filter_TD_12338_output", 6100000, 8, "");
    tbl_Filter_TD_12338_output.allocateHost();
    Table tbl_Filter_TD_12522_output("tbl_Filter_TD_12522_output", 6100000, 6, "");
    tbl_Filter_TD_12522_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12537_input;
    tbl_SerializeFromObject_TD_12537_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12537_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12537_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12537_input.allocateHost();
    tbl_SerializeFromObject_TD_12537_input.loadHost();
    Table tbl_SerializeFromObject_TD_12502_input;
    tbl_SerializeFromObject_TD_12502_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_12502_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12502_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12502_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12502_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12502_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12502_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12502_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12502_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12502_input.allocateHost();
    tbl_SerializeFromObject_TD_12502_input.loadHost();
    Table tbl_SerializeFromObject_TD_12636_input;
    tbl_SerializeFromObject_TD_12636_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_12636_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12636_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12636_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_12636_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12636_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_12636_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_12636_input.allocateHost();
    tbl_SerializeFromObject_TD_12636_input.loadHost();
    Table tbl_Filter_TD_12980_output("tbl_Filter_TD_12980_output", 6100000, 8, "");
    tbl_Filter_TD_12980_output.allocateHost();
    Table tbl_Filter_TD_12470_output("tbl_Filter_TD_12470_output", 6100000, 6, "");
    tbl_Filter_TD_12470_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12506_input;
    tbl_SerializeFromObject_TD_12506_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12506_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12506_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12506_input.allocateHost();
    tbl_SerializeFromObject_TD_12506_input.loadHost();
    Table tbl_SerializeFromObject_TD_13917_input;
    tbl_SerializeFromObject_TD_13917_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_13917_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_13917_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13917_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13917_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13917_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13917_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13917_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13917_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13917_input.allocateHost();
    tbl_SerializeFromObject_TD_13917_input.loadHost();
    Table tbl_SerializeFromObject_TD_13801_input;
    tbl_SerializeFromObject_TD_13801_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13801_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13801_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_13801_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_13801_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13801_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_13801_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_13801_input.allocateHost();
    tbl_SerializeFromObject_TD_13801_input.loadHost();
    Table tbl_SerializeFromObject_TD_13104_input;
    tbl_SerializeFromObject_TD_13104_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_13104_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_13104_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13104_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13104_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13104_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13104_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13104_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13104_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13104_input.allocateHost();
    tbl_SerializeFromObject_TD_13104_input.loadHost();
    Table tbl_SerializeFromObject_TD_13728_input;
    tbl_SerializeFromObject_TD_13728_input = Table("catalog_sales", catalog_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13728_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13728_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_13728_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_13728_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13728_input.addCol("cs_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_13728_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_13728_input.allocateHost();
    tbl_SerializeFromObject_TD_13728_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_749580_s, tv_r_Filter_12_749580_e;
    gettimeofday(&tv_r_Filter_12_749580_s, 0);
    SW_Filter_TD_12470(tbl_SerializeFromObject_TD_13728_input, tbl_Filter_TD_12470_output);
    gettimeofday(&tv_r_Filter_12_749580_e, 0);

    struct timeval tv_r_Filter_12_70234_s, tv_r_Filter_12_70234_e;
    gettimeofday(&tv_r_Filter_12_70234_s, 0);
    SW_Filter_TD_12980(tbl_SerializeFromObject_TD_13104_input, tbl_Filter_TD_12980_output);
    gettimeofday(&tv_r_Filter_12_70234_e, 0);

    struct timeval tv_r_Filter_12_6584_s, tv_r_Filter_12_6584_e;
    gettimeofday(&tv_r_Filter_12_6584_s, 0);
    SW_Filter_TD_12522(tbl_SerializeFromObject_TD_13801_input, tbl_Filter_TD_12522_output);
    gettimeofday(&tv_r_Filter_12_6584_e, 0);

    struct timeval tv_r_Filter_12_580677_s, tv_r_Filter_12_580677_e;
    gettimeofday(&tv_r_Filter_12_580677_s, 0);
    SW_Filter_TD_12338(tbl_SerializeFromObject_TD_13917_input, tbl_Filter_TD_12338_output);
    gettimeofday(&tv_r_Filter_12_580677_e, 0);

    struct timeval tv_r_Filter_11_713486_s, tv_r_Filter_11_713486_e;
    gettimeofday(&tv_r_Filter_11_713486_s, 0);
    SW_Filter_TD_11182(tbl_SerializeFromObject_TD_12506_input, tbl_Filter_TD_11182_output);
    gettimeofday(&tv_r_Filter_11_713486_e, 0);

    struct timeval tv_r_JOIN_INNER_11_177109_s, tv_r_JOIN_INNER_11_177109_e;
    gettimeofday(&tv_r_JOIN_INNER_11_177109_s, 0);
    SW_JOIN_INNER_TD_11672(tbl_Filter_TD_12980_output, tbl_Filter_TD_12470_output, tbl_JOIN_INNER_TD_11672_output);
    gettimeofday(&tv_r_JOIN_INNER_11_177109_e, 0);

    struct timeval tv_r_Filter_11_846028_s, tv_r_Filter_11_846028_e;
    gettimeofday(&tv_r_Filter_11_846028_s, 0);
    SW_Filter_TD_11371(tbl_SerializeFromObject_TD_12636_input, tbl_Filter_TD_11371_output);
    gettimeofday(&tv_r_Filter_11_846028_e, 0);

    struct timeval tv_r_Filter_11_918535_s, tv_r_Filter_11_918535_e;
    gettimeofday(&tv_r_Filter_11_918535_s, 0);
    SW_Filter_TD_11530(tbl_SerializeFromObject_TD_12502_input, tbl_Filter_TD_11530_output);
    gettimeofday(&tv_r_Filter_11_918535_e, 0);

    struct timeval tv_r_Filter_11_337218_s, tv_r_Filter_11_337218_e;
    gettimeofday(&tv_r_Filter_11_337218_s, 0);
    SW_Filter_TD_11531(tbl_SerializeFromObject_TD_12537_input, tbl_Filter_TD_11531_output);
    gettimeofday(&tv_r_Filter_11_337218_e, 0);

    struct timeval tv_r_JOIN_INNER_11_915564_s, tv_r_JOIN_INNER_11_915564_e;
    gettimeofday(&tv_r_JOIN_INNER_11_915564_s, 0);
    SW_JOIN_INNER_TD_11514(tbl_Filter_TD_12338_output, tbl_Filter_TD_12522_output, tbl_JOIN_INNER_TD_11514_output);
    gettimeofday(&tv_r_JOIN_INNER_11_915564_e, 0);

    struct timeval tv_r_Filter_10_39010_s, tv_r_Filter_10_39010_e;
    gettimeofday(&tv_r_Filter_10_39010_s, 0);
    SW_Filter_TD_10745(tbl_SerializeFromObject_TD_1168_input, tbl_Filter_TD_10745_output);
    gettimeofday(&tv_r_Filter_10_39010_e, 0);

    struct timeval tv_r_Filter_10_511238_s, tv_r_Filter_10_511238_e;
    gettimeofday(&tv_r_Filter_10_511238_s, 0);
    SW_Filter_TD_10535(tbl_SerializeFromObject_TD_11560_input, tbl_Filter_TD_10535_output);
    gettimeofday(&tv_r_Filter_10_511238_e, 0);

    struct timeval tv_r_JOIN_INNER_10_483212_s, tv_r_JOIN_INNER_10_483212_e;
    gettimeofday(&tv_r_JOIN_INNER_10_483212_s, 0);
    SW_JOIN_INNER_TD_10944(tbl_JOIN_INNER_TD_11672_output, tbl_Filter_TD_11182_output, tbl_JOIN_INNER_TD_10944_output);
    gettimeofday(&tv_r_JOIN_INNER_10_483212_e, 0);

    struct timeval tv_r_Filter_10_504239_s, tv_r_Filter_10_504239_e;
    gettimeofday(&tv_r_Filter_10_504239_s, 0);
    SW_Filter_TD_10696(tbl_SerializeFromObject_TD_11607_input, tbl_Filter_TD_10696_output);
    gettimeofday(&tv_r_Filter_10_504239_e, 0);

    struct timeval tv_r_JOIN_INNER_10_659526_s, tv_r_JOIN_INNER_10_659526_e;
    gettimeofday(&tv_r_JOIN_INNER_10_659526_s, 0);
    SW_JOIN_INNER_TD_10431(tbl_Filter_TD_11530_output, tbl_Filter_TD_11371_output, tbl_JOIN_INNER_TD_10431_output);
    gettimeofday(&tv_r_JOIN_INNER_10_659526_e, 0);

    struct timeval tv_r_JOIN_INNER_10_208433_s, tv_r_JOIN_INNER_10_208433_e;
    gettimeofday(&tv_r_JOIN_INNER_10_208433_s, 0);
    SW_JOIN_INNER_TD_10209(tbl_JOIN_INNER_TD_11514_output, tbl_Filter_TD_11531_output, tbl_JOIN_INNER_TD_10209_output);
    gettimeofday(&tv_r_JOIN_INNER_10_208433_e, 0);

    struct timeval tv_r_Filter_9_457462_s, tv_r_Filter_9_457462_e;
    gettimeofday(&tv_r_Filter_9_457462_s, 0);
    SW_Filter_TD_9950(tbl_SerializeFromObject_TD_10108_input, tbl_Filter_TD_9950_output);
    gettimeofday(&tv_r_Filter_9_457462_e, 0);

    struct timeval tv_r_JOIN_INNER_9_409752_s, tv_r_JOIN_INNER_9_409752_e;
    gettimeofday(&tv_r_JOIN_INNER_9_409752_s, 0);
    SW_JOIN_INNER_TD_9193(tbl_Filter_TD_10535_output, tbl_Filter_TD_10745_output, tbl_JOIN_INNER_TD_9193_output);
    gettimeofday(&tv_r_JOIN_INNER_9_409752_e, 0);

    struct timeval tv_r_Filter_9_202639_s, tv_r_Filter_9_202639_e;
    gettimeofday(&tv_r_Filter_9_202639_s, 0);
    SW_Filter_TD_9533(tbl_SerializeFromObject_TD_10301_input, tbl_Filter_TD_9533_output);
    gettimeofday(&tv_r_Filter_9_202639_e, 0);

    struct timeval tv_r_Filter_9_636574_s, tv_r_Filter_9_636574_e;
    gettimeofday(&tv_r_Filter_9_636574_s, 0);
    SW_Filter_TD_9512(tbl_SerializeFromObject_TD_10918_input, tbl_Filter_TD_9512_output);
    gettimeofday(&tv_r_Filter_9_636574_e, 0);

    struct timeval tv_r_Aggregate_9_440068_s, tv_r_Aggregate_9_440068_e;
    gettimeofday(&tv_r_Aggregate_9_440068_s, 0);
    SW_Aggregate_TD_913(tbl_JOIN_INNER_TD_10944_output, tbl_Aggregate_TD_913_output);
    gettimeofday(&tv_r_Aggregate_9_440068_e, 0);

    struct timeval tv_r_JOIN_INNER_9_617587_s, tv_r_JOIN_INNER_9_617587_e;
    gettimeofday(&tv_r_JOIN_INNER_9_617587_s, 0);
    SW_JOIN_INNER_TD_9550(tbl_JOIN_INNER_TD_10431_output, tbl_Filter_TD_10696_output, tbl_JOIN_INNER_TD_9550_output);
    gettimeofday(&tv_r_JOIN_INNER_9_617587_e, 0);

    struct timeval tv_r_Aggregate_9_118785_s, tv_r_Aggregate_9_118785_e;
    gettimeofday(&tv_r_Aggregate_9_118785_s, 0);
    SW_Aggregate_TD_9828(tbl_JOIN_INNER_TD_10209_output, tbl_Aggregate_TD_9828_output);
    gettimeofday(&tv_r_Aggregate_9_118785_e, 0);

    struct timeval tv_r_JOIN_INNER_8_856970_s, tv_r_JOIN_INNER_8_856970_e;
    gettimeofday(&tv_r_JOIN_INNER_8_856970_s, 0);
    SW_JOIN_INNER_TD_8612(tbl_JOIN_INNER_TD_9193_output, tbl_Filter_TD_9950_output, tbl_JOIN_INNER_TD_8612_output);
    gettimeofday(&tv_r_JOIN_INNER_8_856970_e, 0);

    struct timeval tv_r_Filter_8_139942_s, tv_r_Filter_8_139942_e;
    gettimeofday(&tv_r_Filter_8_139942_s, 0);
    SW_Filter_TD_8316(tbl_SerializeFromObject_TD_940_input, tbl_Filter_TD_8316_output);
    gettimeofday(&tv_r_Filter_8_139942_e, 0);

    struct timeval tv_r_JOIN_INNER_8_396842_s, tv_r_JOIN_INNER_8_396842_e;
    gettimeofday(&tv_r_JOIN_INNER_8_396842_s, 0);
    SW_JOIN_INNER_TD_8905(tbl_Filter_TD_9512_output, tbl_Filter_TD_9533_output, tbl_JOIN_INNER_TD_8905_output);
    gettimeofday(&tv_r_JOIN_INNER_8_396842_e, 0);

    struct timeval tv_r_Filter_8_90131_s, tv_r_Filter_8_90131_e;
    gettimeofday(&tv_r_Filter_8_90131_s, 0);
    SW_Filter_TD_8753(tbl_Aggregate_TD_913_output, tbl_Filter_TD_8753_output);
    gettimeofday(&tv_r_Filter_8_90131_e, 0);

    struct timeval tv_r_Aggregate_8_737454_s, tv_r_Aggregate_8_737454_e;
    gettimeofday(&tv_r_Aggregate_8_737454_s, 0);
    SW_Aggregate_TD_8715(tbl_JOIN_INNER_TD_9550_output, tbl_Aggregate_TD_8715_output);
    gettimeofday(&tv_r_Aggregate_8_737454_e, 0);

    struct timeval tv_r_Filter_8_84295_s, tv_r_Filter_8_84295_e;
    gettimeofday(&tv_r_Filter_8_84295_s, 0);
    SW_Filter_TD_8807(tbl_Aggregate_TD_9828_output, tbl_Filter_TD_8807_output);
    gettimeofday(&tv_r_Filter_8_84295_e, 0);

    struct timeval tv_r_Filter_7_365996_s, tv_r_Filter_7_365996_e;
    gettimeofday(&tv_r_Filter_7_365996_s, 0);
    SW_Filter_TD_7647(tbl_SerializeFromObject_TD_8926_input, tbl_Filter_TD_7647_output);
    gettimeofday(&tv_r_Filter_7_365996_e, 0);

    struct timeval tv_r_Filter_7_534924_s, tv_r_Filter_7_534924_e;
    gettimeofday(&tv_r_Filter_7_534924_s, 0);
    SW_Filter_TD_7928(tbl_SerializeFromObject_TD_8482_input, tbl_Filter_TD_7928_output);
    gettimeofday(&tv_r_Filter_7_534924_e, 0);

    struct timeval tv_r_Aggregate_7_997242_s, tv_r_Aggregate_7_997242_e;
    gettimeofday(&tv_r_Aggregate_7_997242_s, 0);
    SW_Aggregate_TD_7545(tbl_JOIN_INNER_TD_8612_output, tbl_Aggregate_TD_7545_output);
    gettimeofday(&tv_r_Aggregate_7_997242_e, 0);

    struct timeval tv_r_JOIN_INNER_7_451075_s, tv_r_JOIN_INNER_7_451075_e;
    gettimeofday(&tv_r_JOIN_INNER_7_451075_s, 0);
    SW_JOIN_INNER_TD_7499(tbl_JOIN_INNER_TD_8905_output, tbl_Filter_TD_8316_output, tbl_JOIN_INNER_TD_7499_output);
    gettimeofday(&tv_r_JOIN_INNER_7_451075_e, 0);

    struct timeval tv_r_Project_7_461946_s, tv_r_Project_7_461946_e;
    gettimeofday(&tv_r_Project_7_461946_s, 0);
    SW_Project_TD_7694(tbl_Filter_TD_8753_output, tbl_Project_TD_7694_output);
    gettimeofday(&tv_r_Project_7_461946_e, 0);

    struct timeval tv_r_JOIN_INNER_7_798919_s, tv_r_JOIN_INNER_7_798919_e;
    gettimeofday(&tv_r_JOIN_INNER_7_798919_s, 0);
    SW_JOIN_INNER_TD_7647(tbl_Filter_TD_8807_output, tbl_Aggregate_TD_8715_output, tbl_JOIN_INNER_TD_7647_output);
    gettimeofday(&tv_r_JOIN_INNER_7_798919_e, 0);

    struct timeval tv_r_Filter_6_889392_s, tv_r_Filter_6_889392_e;
    gettimeofday(&tv_r_Filter_6_889392_s, 0);
    SW_Filter_TD_6367(tbl_SerializeFromObject_TD_7408_input, tbl_Filter_TD_6367_output);
    gettimeofday(&tv_r_Filter_6_889392_e, 0);

    struct timeval tv_r_JOIN_INNER_6_891701_s, tv_r_JOIN_INNER_6_891701_e;
    gettimeofday(&tv_r_JOIN_INNER_6_891701_s, 0);
    SW_JOIN_INNER_TD_6668(tbl_Filter_TD_7928_output, tbl_Filter_TD_7647_output, tbl_JOIN_INNER_TD_6668_output);
    gettimeofday(&tv_r_JOIN_INNER_6_891701_e, 0);

    struct timeval tv_r_Filter_6_899022_s, tv_r_Filter_6_899022_e;
    gettimeofday(&tv_r_Filter_6_899022_s, 0);
    SW_Filter_TD_6844(tbl_Aggregate_TD_7545_output, tbl_Filter_TD_6844_output);
    gettimeofday(&tv_r_Filter_6_899022_e, 0);

    struct timeval tv_r_Aggregate_6_79445_s, tv_r_Aggregate_6_79445_e;
    gettimeofday(&tv_r_Aggregate_6_79445_s, 0);
    SW_Aggregate_TD_6190(tbl_JOIN_INNER_TD_7499_output, tbl_Aggregate_TD_6190_output);
    gettimeofday(&tv_r_Aggregate_6_79445_e, 0);

    struct timeval tv_r_JOIN_INNER_6_410336_s, tv_r_JOIN_INNER_6_410336_e;
    gettimeofday(&tv_r_JOIN_INNER_6_410336_s, 0);
    SW_JOIN_INNER_TD_6415(tbl_JOIN_INNER_TD_7647_output, tbl_Project_TD_7694_output, tbl_JOIN_INNER_TD_6415_output);
    gettimeofday(&tv_r_JOIN_INNER_6_410336_e, 0);

    struct timeval tv_r_JOIN_INNER_5_870701_s, tv_r_JOIN_INNER_5_870701_e;
    gettimeofday(&tv_r_JOIN_INNER_5_870701_s, 0);
    SW_JOIN_INNER_TD_5376(tbl_JOIN_INNER_TD_6668_output, tbl_Filter_TD_6367_output, tbl_JOIN_INNER_TD_5376_output);
    gettimeofday(&tv_r_JOIN_INNER_5_870701_e, 0);

    struct timeval tv_r_Project_5_180584_s, tv_r_Project_5_180584_e;
    gettimeofday(&tv_r_Project_5_180584_s, 0);
    SW_Project_TD_5514(tbl_Filter_TD_6844_output, tbl_Project_TD_5514_output);
    gettimeofday(&tv_r_Project_5_180584_e, 0);

    struct timeval tv_r_JOIN_INNER_5_467649_s, tv_r_JOIN_INNER_5_467649_e;
    gettimeofday(&tv_r_JOIN_INNER_5_467649_s, 0);
    SW_JOIN_INNER_TD_5640(tbl_JOIN_INNER_TD_6415_output, tbl_Aggregate_TD_6190_output, tbl_JOIN_INNER_TD_5640_output);
    gettimeofday(&tv_r_JOIN_INNER_5_467649_e, 0);

    struct timeval tv_r_Aggregate_4_810236_s, tv_r_Aggregate_4_810236_e;
    gettimeofday(&tv_r_Aggregate_4_810236_s, 0);
    SW_Aggregate_TD_4939(tbl_JOIN_INNER_TD_5376_output, tbl_Aggregate_TD_4939_output);
    gettimeofday(&tv_r_Aggregate_4_810236_e, 0);

    struct timeval tv_r_JOIN_INNER_4_395905_s, tv_r_JOIN_INNER_4_395905_e;
    gettimeofday(&tv_r_JOIN_INNER_4_395905_s, 0);
    SW_JOIN_INNER_TD_4872(tbl_JOIN_INNER_TD_5640_output, tbl_Project_TD_5514_output, tbl_JOIN_INNER_TD_4872_output);
    gettimeofday(&tv_r_JOIN_INNER_4_395905_e, 0);

    struct timeval tv_r_JOIN_INNER_3_806006_s, tv_r_JOIN_INNER_3_806006_e;
    gettimeofday(&tv_r_JOIN_INNER_3_806006_s, 0);
    SW_JOIN_INNER_TD_3285(tbl_JOIN_INNER_TD_4872_output, tbl_Aggregate_TD_4939_output, tbl_JOIN_INNER_TD_3285_output);
    gettimeofday(&tv_r_JOIN_INNER_3_806006_e, 0);

    struct timeval tv_r_Sort_2_649198_s, tv_r_Sort_2_649198_e;
    gettimeofday(&tv_r_Sort_2_649198_s, 0);
    SW_Sort_TD_2679(tbl_JOIN_INNER_TD_3285_output, tbl_Sort_TD_2679_output);
    gettimeofday(&tv_r_Sort_2_649198_e, 0);

    struct timeval tv_r_LocalLimit_1_654871_s, tv_r_LocalLimit_1_654871_e;
    gettimeofday(&tv_r_LocalLimit_1_654871_s, 0);
    SW_LocalLimit_TD_1727(tbl_Sort_TD_2679_output, tbl_LocalLimit_TD_1727_output);
    gettimeofday(&tv_r_LocalLimit_1_654871_e, 0);

    struct timeval tv_r_GlobalLimit_0_257339_s, tv_r_GlobalLimit_0_257339_e;
    gettimeofday(&tv_r_GlobalLimit_0_257339_s, 0);
    SW_GlobalLimit_TD_0329(tbl_LocalLimit_TD_1727_output, tbl_GlobalLimit_TD_0329_output);
    gettimeofday(&tv_r_GlobalLimit_0_257339_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_749580_s, &tv_r_Filter_12_749580_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13728_input: " << tbl_SerializeFromObject_TD_13728_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_70234_s, &tv_r_Filter_12_70234_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13104_input: " << tbl_SerializeFromObject_TD_13104_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_6584_s, &tv_r_Filter_12_6584_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13801_input: " << tbl_SerializeFromObject_TD_13801_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_580677_s, &tv_r_Filter_12_580677_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13917_input: " << tbl_SerializeFromObject_TD_13917_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_713486_s, &tv_r_Filter_11_713486_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12506_input: " << tbl_SerializeFromObject_TD_12506_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_177109_s, &tv_r_JOIN_INNER_11_177109_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12980_output: " << tbl_Filter_TD_12980_output.getNumRow() << " " << "tbl_Filter_TD_12470_output: " << tbl_Filter_TD_12470_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_846028_s, &tv_r_Filter_11_846028_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12636_input: " << tbl_SerializeFromObject_TD_12636_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_918535_s, &tv_r_Filter_11_918535_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12502_input: " << tbl_SerializeFromObject_TD_12502_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_337218_s, &tv_r_Filter_11_337218_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12537_input: " << tbl_SerializeFromObject_TD_12537_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_915564_s, &tv_r_JOIN_INNER_11_915564_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12338_output: " << tbl_Filter_TD_12338_output.getNumRow() << " " << "tbl_Filter_TD_12522_output: " << tbl_Filter_TD_12522_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_39010_s, &tv_r_Filter_10_39010_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1168_input: " << tbl_SerializeFromObject_TD_1168_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_511238_s, &tv_r_Filter_10_511238_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11560_input: " << tbl_SerializeFromObject_TD_11560_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_483212_s, &tv_r_JOIN_INNER_10_483212_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11672_output: " << tbl_JOIN_INNER_TD_11672_output.getNumRow() << " " << "tbl_Filter_TD_11182_output: " << tbl_Filter_TD_11182_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_504239_s, &tv_r_Filter_10_504239_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11607_input: " << tbl_SerializeFromObject_TD_11607_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_659526_s, &tv_r_JOIN_INNER_10_659526_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11530_output: " << tbl_Filter_TD_11530_output.getNumRow() << " " << "tbl_Filter_TD_11371_output: " << tbl_Filter_TD_11371_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_208433_s, &tv_r_JOIN_INNER_10_208433_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11514_output: " << tbl_JOIN_INNER_TD_11514_output.getNumRow() << " " << "tbl_Filter_TD_11531_output: " << tbl_Filter_TD_11531_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_457462_s, &tv_r_Filter_9_457462_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10108_input: " << tbl_SerializeFromObject_TD_10108_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_409752_s, &tv_r_JOIN_INNER_9_409752_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10535_output: " << tbl_Filter_TD_10535_output.getNumRow() << " " << "tbl_Filter_TD_10745_output: " << tbl_Filter_TD_10745_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_202639_s, &tv_r_Filter_9_202639_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10301_input: " << tbl_SerializeFromObject_TD_10301_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_636574_s, &tv_r_Filter_9_636574_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10918_input: " << tbl_SerializeFromObject_TD_10918_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_440068_s, &tv_r_Aggregate_9_440068_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10944_output: " << tbl_JOIN_INNER_TD_10944_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_617587_s, &tv_r_JOIN_INNER_9_617587_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10431_output: " << tbl_JOIN_INNER_TD_10431_output.getNumRow() << " " << "tbl_Filter_TD_10696_output: " << tbl_Filter_TD_10696_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_118785_s, &tv_r_Aggregate_9_118785_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10209_output: " << tbl_JOIN_INNER_TD_10209_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_856970_s, &tv_r_JOIN_INNER_8_856970_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9193_output: " << tbl_JOIN_INNER_TD_9193_output.getNumRow() << " " << "tbl_Filter_TD_9950_output: " << tbl_Filter_TD_9950_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_139942_s, &tv_r_Filter_8_139942_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_940_input: " << tbl_SerializeFromObject_TD_940_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_396842_s, &tv_r_JOIN_INNER_8_396842_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9512_output: " << tbl_Filter_TD_9512_output.getNumRow() << " " << "tbl_Filter_TD_9533_output: " << tbl_Filter_TD_9533_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_90131_s, &tv_r_Filter_8_90131_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_913_output: " << tbl_Aggregate_TD_913_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_737454_s, &tv_r_Aggregate_8_737454_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9550_output: " << tbl_JOIN_INNER_TD_9550_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_84295_s, &tv_r_Filter_8_84295_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9828_output: " << tbl_Aggregate_TD_9828_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_365996_s, &tv_r_Filter_7_365996_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8926_input: " << tbl_SerializeFromObject_TD_8926_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_534924_s, &tv_r_Filter_7_534924_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8482_input: " << tbl_SerializeFromObject_TD_8482_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_997242_s, &tv_r_Aggregate_7_997242_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8612_output: " << tbl_JOIN_INNER_TD_8612_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_451075_s, &tv_r_JOIN_INNER_7_451075_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8905_output: " << tbl_JOIN_INNER_TD_8905_output.getNumRow() << " " << "tbl_Filter_TD_8316_output: " << tbl_Filter_TD_8316_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_461946_s, &tv_r_Project_7_461946_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8753_output: " << tbl_Filter_TD_8753_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_798919_s, &tv_r_JOIN_INNER_7_798919_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8807_output: " << tbl_Filter_TD_8807_output.getNumRow() << " " << "tbl_Aggregate_TD_8715_output: " << tbl_Aggregate_TD_8715_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_889392_s, &tv_r_Filter_6_889392_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7408_input: " << tbl_SerializeFromObject_TD_7408_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_891701_s, &tv_r_JOIN_INNER_6_891701_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7928_output: " << tbl_Filter_TD_7928_output.getNumRow() << " " << "tbl_Filter_TD_7647_output: " << tbl_Filter_TD_7647_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_899022_s, &tv_r_Filter_6_899022_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7545_output: " << tbl_Aggregate_TD_7545_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_79445_s, &tv_r_Aggregate_6_79445_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7499_output: " << tbl_JOIN_INNER_TD_7499_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_410336_s, &tv_r_JOIN_INNER_6_410336_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7647_output: " << tbl_JOIN_INNER_TD_7647_output.getNumRow() << " " << "tbl_Project_TD_7694_output: " << tbl_Project_TD_7694_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_870701_s, &tv_r_JOIN_INNER_5_870701_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6668_output: " << tbl_JOIN_INNER_TD_6668_output.getNumRow() << " " << "tbl_Filter_TD_6367_output: " << tbl_Filter_TD_6367_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_180584_s, &tv_r_Project_5_180584_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6844_output: " << tbl_Filter_TD_6844_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_467649_s, &tv_r_JOIN_INNER_5_467649_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6415_output: " << tbl_JOIN_INNER_TD_6415_output.getNumRow() << " " << "tbl_Aggregate_TD_6190_output: " << tbl_Aggregate_TD_6190_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_810236_s, &tv_r_Aggregate_4_810236_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5376_output: " << tbl_JOIN_INNER_TD_5376_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_395905_s, &tv_r_JOIN_INNER_4_395905_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5640_output: " << tbl_JOIN_INNER_TD_5640_output.getNumRow() << " " << "tbl_Project_TD_5514_output: " << tbl_Project_TD_5514_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_806006_s, &tv_r_JOIN_INNER_3_806006_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4872_output: " << tbl_JOIN_INNER_TD_4872_output.getNumRow() << " " << "tbl_Aggregate_TD_4939_output: " << tbl_Aggregate_TD_4939_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_649198_s, &tv_r_Sort_2_649198_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3285_output: " << tbl_JOIN_INNER_TD_3285_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_654871_s, &tv_r_LocalLimit_1_654871_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2679_output: " << tbl_Sort_TD_2679_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_257339_s, &tv_r_GlobalLimit_0_257339_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1727_output: " << tbl_LocalLimit_TD_1727_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 22.880266 * 1000 << "ms" << std::endl; 
    return 0; 
}
