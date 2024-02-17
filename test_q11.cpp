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

#include "cfgFunc_q11.hpp" 
#include "q11.hpp" 

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
    std::cout << "NOTE:running query #11\n."; 
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
    Table tbl_GlobalLimit_TD_0138_output("tbl_GlobalLimit_TD_0138_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0138_output.allocateHost();
    Table tbl_LocalLimit_TD_1105_output("tbl_LocalLimit_TD_1105_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1105_output.allocateHost();
    Table tbl_Sort_TD_2729_output("tbl_Sort_TD_2729_output", 6100000, 4, "");
    tbl_Sort_TD_2729_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3532_output("tbl_JOIN_INNER_TD_3532_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3532_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4599_output("tbl_JOIN_INNER_TD_4599_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4599_output.allocateHost();
    Table tbl_Aggregate_TD_4636_output("tbl_Aggregate_TD_4636_output", 6100000, 2, "");
    tbl_Aggregate_TD_4636_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5299_output("tbl_JOIN_INNER_TD_5299_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5299_output.allocateHost();
    Table tbl_Project_TD_5468_output("tbl_Project_TD_5468_output", 6100000, 2, "");
    tbl_Project_TD_5468_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5406_output("tbl_JOIN_INNER_TD_5406_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_5406_output.allocateHost();
    Table tbl_Filter_TD_6829_output("tbl_Filter_TD_6829_output", 6100000, 2, "");
    tbl_Filter_TD_6829_output.allocateHost();
    Table tbl_Aggregate_TD_6948_output("tbl_Aggregate_TD_6948_output", 6100000, 5, "");
    tbl_Aggregate_TD_6948_output.allocateHost();
    Table tbl_Filter_TD_6665_output("tbl_Filter_TD_6665_output", 6100000, 2, "");
    tbl_Filter_TD_6665_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6785_output("tbl_JOIN_INNER_TD_6785_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_6785_output.allocateHost();
    Table tbl_Filter_TD_6200_output("tbl_Filter_TD_6200_output", 6100000, 2, "");
    tbl_Filter_TD_6200_output.allocateHost();
    Table tbl_Aggregate_TD_737_output("tbl_Aggregate_TD_737_output", 6100000, 2, "");
    tbl_Aggregate_TD_737_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7934_output("tbl_JOIN_INNER_TD_7934_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_7934_output.allocateHost();
    Table tbl_Aggregate_TD_7959_output("tbl_Aggregate_TD_7959_output", 6100000, 2, "");
    tbl_Aggregate_TD_7959_output.allocateHost();
    Table tbl_Filter_TD_7677_output("tbl_Filter_TD_7677_output", 6100000, 8, "");
    tbl_Filter_TD_7677_output.allocateHost();
    Table tbl_Filter_TD_7675_output("tbl_Filter_TD_7675_output", 6100000, 4, "");
    tbl_Filter_TD_7675_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7853_input;
    tbl_SerializeFromObject_TD_7853_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7853_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7853_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7853_input.allocateHost();
    tbl_SerializeFromObject_TD_7853_input.loadHost();
    Table tbl_JOIN_INNER_TD_8957_output("tbl_JOIN_INNER_TD_8957_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8957_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8980_output("tbl_JOIN_INNER_TD_8980_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8980_output.allocateHost();
    Table tbl_Filter_TD_8722_output("tbl_Filter_TD_8722_output", 6100000, 2, "");
    tbl_Filter_TD_8722_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8712_output("tbl_JOIN_INNER_TD_8712_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8712_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8577_input;
    tbl_SerializeFromObject_TD_8577_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_8577_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8577_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8577_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8577_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8577_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8577_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8577_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8577_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8577_input.allocateHost();
    tbl_SerializeFromObject_TD_8577_input.loadHost();
    Table tbl_SerializeFromObject_TD_8862_input;
    tbl_SerializeFromObject_TD_8862_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8862_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8862_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_8862_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_8862_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_8862_input.allocateHost();
    tbl_SerializeFromObject_TD_8862_input.loadHost();
    Table tbl_JOIN_INNER_TD_9841_output("tbl_JOIN_INNER_TD_9841_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_9841_output.allocateHost();
    Table tbl_Filter_TD_976_output("tbl_Filter_TD_976_output", 6100000, 2, "");
    tbl_Filter_TD_976_output.allocateHost();
    Table tbl_Filter_TD_9397_output("tbl_Filter_TD_9397_output", 6100000, 8, "");
    tbl_Filter_TD_9397_output.allocateHost();
    Table tbl_Filter_TD_9743_output("tbl_Filter_TD_9743_output", 6100000, 4, "");
    tbl_Filter_TD_9743_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9763_input;
    tbl_SerializeFromObject_TD_9763_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9763_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9763_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9763_input.allocateHost();
    tbl_SerializeFromObject_TD_9763_input.loadHost();
    Table tbl_JOIN_INNER_TD_950_output("tbl_JOIN_INNER_TD_950_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_950_output.allocateHost();
    Table tbl_Filter_TD_971_output("tbl_Filter_TD_971_output", 6100000, 2, "");
    tbl_Filter_TD_971_output.allocateHost();
    Table tbl_Filter_TD_10354_output("tbl_Filter_TD_10354_output", 6100000, 8, "");
    tbl_Filter_TD_10354_output.allocateHost();
    Table tbl_Filter_TD_10781_output("tbl_Filter_TD_10781_output", 6100000, 4, "");
    tbl_Filter_TD_10781_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10152_input;
    tbl_SerializeFromObject_TD_10152_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10152_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10152_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10152_input.allocateHost();
    tbl_SerializeFromObject_TD_10152_input.loadHost();
    Table tbl_SerializeFromObject_TD_10677_input;
    tbl_SerializeFromObject_TD_10677_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_10677_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_10677_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10677_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10677_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10677_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10677_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10677_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10677_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10677_input.allocateHost();
    tbl_SerializeFromObject_TD_10677_input.loadHost();
    Table tbl_SerializeFromObject_TD_10507_input;
    tbl_SerializeFromObject_TD_10507_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10507_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10507_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10507_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_10507_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_10507_input.allocateHost();
    tbl_SerializeFromObject_TD_10507_input.loadHost();
    Table tbl_Filter_TD_10292_output("tbl_Filter_TD_10292_output", 6100000, 8, "");
    tbl_Filter_TD_10292_output.allocateHost();
    Table tbl_Filter_TD_10854_output("tbl_Filter_TD_10854_output", 6100000, 4, "");
    tbl_Filter_TD_10854_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10143_input;
    tbl_SerializeFromObject_TD_10143_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10143_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10143_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10143_input.allocateHost();
    tbl_SerializeFromObject_TD_10143_input.loadHost();
    Table tbl_SerializeFromObject_TD_11521_input;
    tbl_SerializeFromObject_TD_11521_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_11521_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11521_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11521_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11521_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11521_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11521_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11521_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11521_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11521_input.allocateHost();
    tbl_SerializeFromObject_TD_11521_input.loadHost();
    Table tbl_SerializeFromObject_TD_11760_input;
    tbl_SerializeFromObject_TD_11760_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11760_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11760_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_11760_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_11760_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_11760_input.allocateHost();
    tbl_SerializeFromObject_TD_11760_input.loadHost();
    Table tbl_SerializeFromObject_TD_11783_input;
    tbl_SerializeFromObject_TD_11783_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_11783_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11783_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11783_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11783_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11783_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11783_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11783_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11783_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11783_input.allocateHost();
    tbl_SerializeFromObject_TD_11783_input.loadHost();
    Table tbl_SerializeFromObject_TD_11341_input;
    tbl_SerializeFromObject_TD_11341_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11341_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11341_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11341_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_11341_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_11341_input.allocateHost();
    tbl_SerializeFromObject_TD_11341_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_837029_s, tv_r_Filter_10_837029_e;
    gettimeofday(&tv_r_Filter_10_837029_s, 0);
    SW_Filter_TD_10854(tbl_SerializeFromObject_TD_11341_input, tbl_Filter_TD_10854_output);
    gettimeofday(&tv_r_Filter_10_837029_e, 0);

    struct timeval tv_r_Filter_10_802218_s, tv_r_Filter_10_802218_e;
    gettimeofday(&tv_r_Filter_10_802218_s, 0);
    SW_Filter_TD_10292(tbl_SerializeFromObject_TD_11783_input, tbl_Filter_TD_10292_output);
    gettimeofday(&tv_r_Filter_10_802218_e, 0);

    struct timeval tv_r_Filter_10_955856_s, tv_r_Filter_10_955856_e;
    gettimeofday(&tv_r_Filter_10_955856_s, 0);
    SW_Filter_TD_10781(tbl_SerializeFromObject_TD_11760_input, tbl_Filter_TD_10781_output);
    gettimeofday(&tv_r_Filter_10_955856_e, 0);

    struct timeval tv_r_Filter_10_777891_s, tv_r_Filter_10_777891_e;
    gettimeofday(&tv_r_Filter_10_777891_s, 0);
    SW_Filter_TD_10354(tbl_SerializeFromObject_TD_11521_input, tbl_Filter_TD_10354_output);
    gettimeofday(&tv_r_Filter_10_777891_e, 0);

    struct timeval tv_r_Filter_9_785294_s, tv_r_Filter_9_785294_e;
    gettimeofday(&tv_r_Filter_9_785294_s, 0);
    SW_Filter_TD_971(tbl_SerializeFromObject_TD_10143_input, tbl_Filter_TD_971_output);
    gettimeofday(&tv_r_Filter_9_785294_e, 0);

    struct timeval tv_r_JOIN_INNER_9_678537_s, tv_r_JOIN_INNER_9_678537_e;
    gettimeofday(&tv_r_JOIN_INNER_9_678537_s, 0);
    SW_JOIN_INNER_TD_950(tbl_Filter_TD_10292_output, tbl_Filter_TD_10854_output, tbl_JOIN_INNER_TD_950_output);
    gettimeofday(&tv_r_JOIN_INNER_9_678537_e, 0);

    struct timeval tv_r_Filter_9_130699_s, tv_r_Filter_9_130699_e;
    gettimeofday(&tv_r_Filter_9_130699_s, 0);
    SW_Filter_TD_9743(tbl_SerializeFromObject_TD_10507_input, tbl_Filter_TD_9743_output);
    gettimeofday(&tv_r_Filter_9_130699_e, 0);

    struct timeval tv_r_Filter_9_856300_s, tv_r_Filter_9_856300_e;
    gettimeofday(&tv_r_Filter_9_856300_s, 0);
    SW_Filter_TD_9397(tbl_SerializeFromObject_TD_10677_input, tbl_Filter_TD_9397_output);
    gettimeofday(&tv_r_Filter_9_856300_e, 0);

    struct timeval tv_r_Filter_9_533829_s, tv_r_Filter_9_533829_e;
    gettimeofday(&tv_r_Filter_9_533829_s, 0);
    SW_Filter_TD_976(tbl_SerializeFromObject_TD_10152_input, tbl_Filter_TD_976_output);
    gettimeofday(&tv_r_Filter_9_533829_e, 0);

    struct timeval tv_r_JOIN_INNER_9_970102_s, tv_r_JOIN_INNER_9_970102_e;
    gettimeofday(&tv_r_JOIN_INNER_9_970102_s, 0);
    SW_JOIN_INNER_TD_9841(tbl_Filter_TD_10354_output, tbl_Filter_TD_10781_output, tbl_JOIN_INNER_TD_9841_output);
    gettimeofday(&tv_r_JOIN_INNER_9_970102_e, 0);

    struct timeval tv_r_JOIN_INNER_8_935978_s, tv_r_JOIN_INNER_8_935978_e;
    gettimeofday(&tv_r_JOIN_INNER_8_935978_s, 0);
    SW_JOIN_INNER_TD_8712(tbl_JOIN_INNER_TD_950_output, tbl_Filter_TD_971_output, tbl_JOIN_INNER_TD_8712_output);
    gettimeofday(&tv_r_JOIN_INNER_8_935978_e, 0);

    struct timeval tv_r_Filter_8_143575_s, tv_r_Filter_8_143575_e;
    gettimeofday(&tv_r_Filter_8_143575_s, 0);
    SW_Filter_TD_8722(tbl_SerializeFromObject_TD_9763_input, tbl_Filter_TD_8722_output);
    gettimeofday(&tv_r_Filter_8_143575_e, 0);

    struct timeval tv_r_JOIN_INNER_8_238814_s, tv_r_JOIN_INNER_8_238814_e;
    gettimeofday(&tv_r_JOIN_INNER_8_238814_s, 0);
    SW_JOIN_INNER_TD_8980(tbl_Filter_TD_9397_output, tbl_Filter_TD_9743_output, tbl_JOIN_INNER_TD_8980_output);
    gettimeofday(&tv_r_JOIN_INNER_8_238814_e, 0);

    struct timeval tv_r_JOIN_INNER_8_380523_s, tv_r_JOIN_INNER_8_380523_e;
    gettimeofday(&tv_r_JOIN_INNER_8_380523_s, 0);
    SW_JOIN_INNER_TD_8957(tbl_JOIN_INNER_TD_9841_output, tbl_Filter_TD_976_output, tbl_JOIN_INNER_TD_8957_output);
    gettimeofday(&tv_r_JOIN_INNER_8_380523_e, 0);

    struct timeval tv_r_Filter_7_645309_s, tv_r_Filter_7_645309_e;
    gettimeofday(&tv_r_Filter_7_645309_s, 0);
    SW_Filter_TD_7675(tbl_SerializeFromObject_TD_8862_input, tbl_Filter_TD_7675_output);
    gettimeofday(&tv_r_Filter_7_645309_e, 0);

    struct timeval tv_r_Filter_7_8920_s, tv_r_Filter_7_8920_e;
    gettimeofday(&tv_r_Filter_7_8920_s, 0);
    SW_Filter_TD_7677(tbl_SerializeFromObject_TD_8577_input, tbl_Filter_TD_7677_output);
    gettimeofday(&tv_r_Filter_7_8920_e, 0);

    struct timeval tv_r_Aggregate_7_439606_s, tv_r_Aggregate_7_439606_e;
    gettimeofday(&tv_r_Aggregate_7_439606_s, 0);
    SW_Aggregate_TD_7959(tbl_JOIN_INNER_TD_8712_output, tbl_Aggregate_TD_7959_output);
    gettimeofday(&tv_r_Aggregate_7_439606_e, 0);

    struct timeval tv_r_JOIN_INNER_7_402680_s, tv_r_JOIN_INNER_7_402680_e;
    gettimeofday(&tv_r_JOIN_INNER_7_402680_s, 0);
    SW_JOIN_INNER_TD_7934(tbl_JOIN_INNER_TD_8980_output, tbl_Filter_TD_8722_output, tbl_JOIN_INNER_TD_7934_output);
    gettimeofday(&tv_r_JOIN_INNER_7_402680_e, 0);

    struct timeval tv_r_Aggregate_7_20101_s, tv_r_Aggregate_7_20101_e;
    gettimeofday(&tv_r_Aggregate_7_20101_s, 0);
    SW_Aggregate_TD_737(tbl_JOIN_INNER_TD_8957_output, tbl_Aggregate_TD_737_output);
    gettimeofday(&tv_r_Aggregate_7_20101_e, 0);

    struct timeval tv_r_Filter_6_234164_s, tv_r_Filter_6_234164_e;
    gettimeofday(&tv_r_Filter_6_234164_s, 0);
    SW_Filter_TD_6200(tbl_SerializeFromObject_TD_7853_input, tbl_Filter_TD_6200_output);
    gettimeofday(&tv_r_Filter_6_234164_e, 0);

    struct timeval tv_r_JOIN_INNER_6_12335_s, tv_r_JOIN_INNER_6_12335_e;
    gettimeofday(&tv_r_JOIN_INNER_6_12335_s, 0);
    SW_JOIN_INNER_TD_6785(tbl_Filter_TD_7677_output, tbl_Filter_TD_7675_output, tbl_JOIN_INNER_TD_6785_output);
    gettimeofday(&tv_r_JOIN_INNER_6_12335_e, 0);

    struct timeval tv_r_Filter_6_345916_s, tv_r_Filter_6_345916_e;
    gettimeofday(&tv_r_Filter_6_345916_s, 0);
    SW_Filter_TD_6665(tbl_Aggregate_TD_7959_output, tbl_Filter_TD_6665_output);
    gettimeofday(&tv_r_Filter_6_345916_e, 0);

    struct timeval tv_r_Aggregate_6_144322_s, tv_r_Aggregate_6_144322_e;
    gettimeofday(&tv_r_Aggregate_6_144322_s, 0);
    SW_Aggregate_TD_6948(tbl_JOIN_INNER_TD_7934_output, tbl_Aggregate_TD_6948_output);
    gettimeofday(&tv_r_Aggregate_6_144322_e, 0);

    struct timeval tv_r_Filter_6_795965_s, tv_r_Filter_6_795965_e;
    gettimeofday(&tv_r_Filter_6_795965_s, 0);
    SW_Filter_TD_6829(tbl_Aggregate_TD_737_output, tbl_Filter_TD_6829_output);
    gettimeofday(&tv_r_Filter_6_795965_e, 0);

    struct timeval tv_r_JOIN_INNER_5_195016_s, tv_r_JOIN_INNER_5_195016_e;
    gettimeofday(&tv_r_JOIN_INNER_5_195016_s, 0);
    SW_JOIN_INNER_TD_5406(tbl_JOIN_INNER_TD_6785_output, tbl_Filter_TD_6200_output, tbl_JOIN_INNER_TD_5406_output);
    gettimeofday(&tv_r_JOIN_INNER_5_195016_e, 0);

    struct timeval tv_r_Project_5_475888_s, tv_r_Project_5_475888_e;
    gettimeofday(&tv_r_Project_5_475888_s, 0);
    SW_Project_TD_5468(tbl_Filter_TD_6665_output, tbl_Project_TD_5468_output);
    gettimeofday(&tv_r_Project_5_475888_e, 0);

    struct timeval tv_r_JOIN_INNER_5_653146_s, tv_r_JOIN_INNER_5_653146_e;
    gettimeofday(&tv_r_JOIN_INNER_5_653146_s, 0);
    SW_JOIN_INNER_TD_5299(tbl_Filter_TD_6829_output, tbl_Aggregate_TD_6948_output, tbl_JOIN_INNER_TD_5299_output);
    gettimeofday(&tv_r_JOIN_INNER_5_653146_e, 0);

    struct timeval tv_r_Aggregate_4_240120_s, tv_r_Aggregate_4_240120_e;
    gettimeofday(&tv_r_Aggregate_4_240120_s, 0);
    SW_Aggregate_TD_4636(tbl_JOIN_INNER_TD_5406_output, tbl_Aggregate_TD_4636_output);
    gettimeofday(&tv_r_Aggregate_4_240120_e, 0);

    struct timeval tv_r_JOIN_INNER_4_720535_s, tv_r_JOIN_INNER_4_720535_e;
    gettimeofday(&tv_r_JOIN_INNER_4_720535_s, 0);
    SW_JOIN_INNER_TD_4599(tbl_JOIN_INNER_TD_5299_output, tbl_Project_TD_5468_output, tbl_JOIN_INNER_TD_4599_output);
    gettimeofday(&tv_r_JOIN_INNER_4_720535_e, 0);

    struct timeval tv_r_JOIN_INNER_3_358941_s, tv_r_JOIN_INNER_3_358941_e;
    gettimeofday(&tv_r_JOIN_INNER_3_358941_s, 0);
    SW_JOIN_INNER_TD_3532(tbl_JOIN_INNER_TD_4599_output, tbl_Aggregate_TD_4636_output, tbl_JOIN_INNER_TD_3532_output);
    gettimeofday(&tv_r_JOIN_INNER_3_358941_e, 0);

    struct timeval tv_r_Sort_2_957475_s, tv_r_Sort_2_957475_e;
    gettimeofday(&tv_r_Sort_2_957475_s, 0);
    SW_Sort_TD_2729(tbl_JOIN_INNER_TD_3532_output, tbl_Sort_TD_2729_output);
    gettimeofday(&tv_r_Sort_2_957475_e, 0);

    struct timeval tv_r_LocalLimit_1_527903_s, tv_r_LocalLimit_1_527903_e;
    gettimeofday(&tv_r_LocalLimit_1_527903_s, 0);
    SW_LocalLimit_TD_1105(tbl_Sort_TD_2729_output, tbl_LocalLimit_TD_1105_output);
    gettimeofday(&tv_r_LocalLimit_1_527903_e, 0);

    struct timeval tv_r_GlobalLimit_0_176230_s, tv_r_GlobalLimit_0_176230_e;
    gettimeofday(&tv_r_GlobalLimit_0_176230_s, 0);
    SW_GlobalLimit_TD_0138(tbl_LocalLimit_TD_1105_output, tbl_GlobalLimit_TD_0138_output);
    gettimeofday(&tv_r_GlobalLimit_0_176230_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_837029_s, &tv_r_Filter_10_837029_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11341_input: " << tbl_SerializeFromObject_TD_11341_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_802218_s, &tv_r_Filter_10_802218_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11783_input: " << tbl_SerializeFromObject_TD_11783_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_955856_s, &tv_r_Filter_10_955856_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11760_input: " << tbl_SerializeFromObject_TD_11760_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_777891_s, &tv_r_Filter_10_777891_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11521_input: " << tbl_SerializeFromObject_TD_11521_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_785294_s, &tv_r_Filter_9_785294_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10143_input: " << tbl_SerializeFromObject_TD_10143_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_678537_s, &tv_r_JOIN_INNER_9_678537_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10292_output: " << tbl_Filter_TD_10292_output.getNumRow() << " " << "tbl_Filter_TD_10854_output: " << tbl_Filter_TD_10854_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_130699_s, &tv_r_Filter_9_130699_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10507_input: " << tbl_SerializeFromObject_TD_10507_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_856300_s, &tv_r_Filter_9_856300_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10677_input: " << tbl_SerializeFromObject_TD_10677_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_533829_s, &tv_r_Filter_9_533829_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10152_input: " << tbl_SerializeFromObject_TD_10152_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_970102_s, &tv_r_JOIN_INNER_9_970102_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10354_output: " << tbl_Filter_TD_10354_output.getNumRow() << " " << "tbl_Filter_TD_10781_output: " << tbl_Filter_TD_10781_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_935978_s, &tv_r_JOIN_INNER_8_935978_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_950_output: " << tbl_JOIN_INNER_TD_950_output.getNumRow() << " " << "tbl_Filter_TD_971_output: " << tbl_Filter_TD_971_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_143575_s, &tv_r_Filter_8_143575_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9763_input: " << tbl_SerializeFromObject_TD_9763_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_238814_s, &tv_r_JOIN_INNER_8_238814_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9397_output: " << tbl_Filter_TD_9397_output.getNumRow() << " " << "tbl_Filter_TD_9743_output: " << tbl_Filter_TD_9743_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_380523_s, &tv_r_JOIN_INNER_8_380523_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9841_output: " << tbl_JOIN_INNER_TD_9841_output.getNumRow() << " " << "tbl_Filter_TD_976_output: " << tbl_Filter_TD_976_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_645309_s, &tv_r_Filter_7_645309_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8862_input: " << tbl_SerializeFromObject_TD_8862_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_8920_s, &tv_r_Filter_7_8920_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8577_input: " << tbl_SerializeFromObject_TD_8577_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_439606_s, &tv_r_Aggregate_7_439606_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8712_output: " << tbl_JOIN_INNER_TD_8712_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_402680_s, &tv_r_JOIN_INNER_7_402680_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8980_output: " << tbl_JOIN_INNER_TD_8980_output.getNumRow() << " " << "tbl_Filter_TD_8722_output: " << tbl_Filter_TD_8722_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_20101_s, &tv_r_Aggregate_7_20101_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8957_output: " << tbl_JOIN_INNER_TD_8957_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_234164_s, &tv_r_Filter_6_234164_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7853_input: " << tbl_SerializeFromObject_TD_7853_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_12335_s, &tv_r_JOIN_INNER_6_12335_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7677_output: " << tbl_Filter_TD_7677_output.getNumRow() << " " << "tbl_Filter_TD_7675_output: " << tbl_Filter_TD_7675_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_345916_s, &tv_r_Filter_6_345916_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7959_output: " << tbl_Aggregate_TD_7959_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_144322_s, &tv_r_Aggregate_6_144322_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7934_output: " << tbl_JOIN_INNER_TD_7934_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_795965_s, &tv_r_Filter_6_795965_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_737_output: " << tbl_Aggregate_TD_737_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_195016_s, &tv_r_JOIN_INNER_5_195016_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6785_output: " << tbl_JOIN_INNER_TD_6785_output.getNumRow() << " " << "tbl_Filter_TD_6200_output: " << tbl_Filter_TD_6200_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_475888_s, &tv_r_Project_5_475888_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6665_output: " << tbl_Filter_TD_6665_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_653146_s, &tv_r_JOIN_INNER_5_653146_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6829_output: " << tbl_Filter_TD_6829_output.getNumRow() << " " << "tbl_Aggregate_TD_6948_output: " << tbl_Aggregate_TD_6948_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_240120_s, &tv_r_Aggregate_4_240120_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5406_output: " << tbl_JOIN_INNER_TD_5406_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_720535_s, &tv_r_JOIN_INNER_4_720535_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5299_output: " << tbl_JOIN_INNER_TD_5299_output.getNumRow() << " " << "tbl_Project_TD_5468_output: " << tbl_Project_TD_5468_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_358941_s, &tv_r_JOIN_INNER_3_358941_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4599_output: " << tbl_JOIN_INNER_TD_4599_output.getNumRow() << " " << "tbl_Aggregate_TD_4636_output: " << tbl_Aggregate_TD_4636_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_957475_s, &tv_r_Sort_2_957475_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3532_output: " << tbl_JOIN_INNER_TD_3532_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_527903_s, &tv_r_LocalLimit_1_527903_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2729_output: " << tbl_Sort_TD_2729_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_176230_s, &tv_r_GlobalLimit_0_176230_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1105_output: " << tbl_LocalLimit_TD_1105_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.726411 * 1000 << "ms" << std::endl; 
    return 0; 
}
