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

#include "cfgFunc_q38.hpp" 
#include "q38.hpp" 

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
    std::cout << "NOTE:running query #38\n."; 
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
    Table tbl_Aggregate_TD_0424_output("tbl_Aggregate_TD_0424_output", 6100000, 1, "");
    tbl_Aggregate_TD_0424_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_2519_output("tbl_JOIN_LEFTSEMI_TD_2519_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_2519_output.allocateHost();
    Table tbl_Aggregate_TD_3340_output("tbl_Aggregate_TD_3340_output", 6100000, 3, "");
    tbl_Aggregate_TD_3340_output.allocateHost();
    Table tbl_Aggregate_TD_3941_output("tbl_Aggregate_TD_3941_output", 6100000, 3, "");
    tbl_Aggregate_TD_3941_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_4180_output("tbl_JOIN_LEFTSEMI_TD_4180_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_4180_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4672_output("tbl_JOIN_INNER_TD_4672_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4672_output.allocateHost();
    Table tbl_Aggregate_TD_5730_output("tbl_Aggregate_TD_5730_output", 6100000, 3, "");
    tbl_Aggregate_TD_5730_output.allocateHost();
    Table tbl_Aggregate_TD_545_output("tbl_Aggregate_TD_545_output", 6100000, 3, "");
    tbl_Aggregate_TD_545_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5358_output("tbl_JOIN_INNER_TD_5358_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5358_output.allocateHost();
    Table tbl_Filter_TD_5591_output("tbl_Filter_TD_5591_output", 6100000, 3, "");
    tbl_Filter_TD_5591_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6116_output("tbl_JOIN_INNER_TD_6116_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6116_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6291_output("tbl_JOIN_INNER_TD_6291_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6291_output.allocateHost();
    Table tbl_Filter_TD_654_output("tbl_Filter_TD_654_output", 6100000, 2, "");
    tbl_Filter_TD_654_output.allocateHost();
    Table tbl_Filter_TD_6425_output("tbl_Filter_TD_6425_output", 6100000, 2, "");
    tbl_Filter_TD_6425_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6985_input;
    tbl_SerializeFromObject_TD_6985_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6985_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6985_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6985_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6985_input.allocateHost();
    tbl_SerializeFromObject_TD_6985_input.loadHost();
    Table tbl_JOIN_INNER_TD_7498_output("tbl_JOIN_INNER_TD_7498_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7498_output.allocateHost();
    Table tbl_Filter_TD_7287_output("tbl_Filter_TD_7287_output", 6100000, 3, "");
    tbl_Filter_TD_7287_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7602_output("tbl_JOIN_INNER_TD_7602_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7602_output.allocateHost();
    Table tbl_Filter_TD_7573_output("tbl_Filter_TD_7573_output", 6100000, 3, "");
    tbl_Filter_TD_7573_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7188_input;
    tbl_SerializeFromObject_TD_7188_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7188_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7188_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_7188_input.allocateHost();
    tbl_SerializeFromObject_TD_7188_input.loadHost();
    Table tbl_SerializeFromObject_TD_7940_input;
    tbl_SerializeFromObject_TD_7940_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7940_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7940_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7940_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7940_input.allocateHost();
    tbl_SerializeFromObject_TD_7940_input.loadHost();
    Table tbl_Filter_TD_8301_output("tbl_Filter_TD_8301_output", 6100000, 2, "");
    tbl_Filter_TD_8301_output.allocateHost();
    Table tbl_Filter_TD_8975_output("tbl_Filter_TD_8975_output", 6100000, 2, "");
    tbl_Filter_TD_8975_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8707_input;
    tbl_SerializeFromObject_TD_8707_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8707_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8707_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8707_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8707_input.allocateHost();
    tbl_SerializeFromObject_TD_8707_input.loadHost();
    Table tbl_Filter_TD_8435_output("tbl_Filter_TD_8435_output", 6100000, 2, "");
    tbl_Filter_TD_8435_output.allocateHost();
    Table tbl_Filter_TD_8826_output("tbl_Filter_TD_8826_output", 6100000, 2, "");
    tbl_Filter_TD_8826_output.allocateHost();
    Table tbl_SerializeFromObject_TD_855_input;
    tbl_SerializeFromObject_TD_855_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_855_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_855_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_855_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_855_input.allocateHost();
    tbl_SerializeFromObject_TD_855_input.loadHost();
    Table tbl_SerializeFromObject_TD_9366_input;
    tbl_SerializeFromObject_TD_9366_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9366_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9366_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9366_input.allocateHost();
    tbl_SerializeFromObject_TD_9366_input.loadHost();
    Table tbl_SerializeFromObject_TD_9520_input;
    tbl_SerializeFromObject_TD_9520_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9520_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9520_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9520_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9520_input.allocateHost();
    tbl_SerializeFromObject_TD_9520_input.loadHost();
    Table tbl_SerializeFromObject_TD_9318_input;
    tbl_SerializeFromObject_TD_9318_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9318_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9318_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_9318_input.allocateHost();
    tbl_SerializeFromObject_TD_9318_input.loadHost();
    Table tbl_SerializeFromObject_TD_9937_input;
    tbl_SerializeFromObject_TD_9937_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9937_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9937_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9937_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9937_input.allocateHost();
    tbl_SerializeFromObject_TD_9937_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_508910_s, tv_r_Filter_8_508910_e;
    gettimeofday(&tv_r_Filter_8_508910_s, 0);
    SW_Filter_TD_8826(tbl_SerializeFromObject_TD_9937_input, tbl_Filter_TD_8826_output);
    gettimeofday(&tv_r_Filter_8_508910_e, 0);

    struct timeval tv_r_Filter_8_542970_s, tv_r_Filter_8_542970_e;
    gettimeofday(&tv_r_Filter_8_542970_s, 0);
    SW_Filter_TD_8435(tbl_SerializeFromObject_TD_9318_input, tbl_Filter_TD_8435_output);
    gettimeofday(&tv_r_Filter_8_542970_e, 0);

    struct timeval tv_r_Filter_8_965184_s, tv_r_Filter_8_965184_e;
    gettimeofday(&tv_r_Filter_8_965184_s, 0);
    SW_Filter_TD_8975(tbl_SerializeFromObject_TD_9520_input, tbl_Filter_TD_8975_output);
    gettimeofday(&tv_r_Filter_8_965184_e, 0);

    struct timeval tv_r_Filter_8_121295_s, tv_r_Filter_8_121295_e;
    gettimeofday(&tv_r_Filter_8_121295_s, 0);
    SW_Filter_TD_8301(tbl_SerializeFromObject_TD_9366_input, tbl_Filter_TD_8301_output);
    gettimeofday(&tv_r_Filter_8_121295_e, 0);

    struct timeval tv_r_Filter_7_660746_s, tv_r_Filter_7_660746_e;
    gettimeofday(&tv_r_Filter_7_660746_s, 0);
    SW_Filter_TD_7573(tbl_SerializeFromObject_TD_855_input, tbl_Filter_TD_7573_output);
    gettimeofday(&tv_r_Filter_7_660746_e, 0);

    struct timeval tv_r_JOIN_INNER_7_104998_s, tv_r_JOIN_INNER_7_104998_e;
    gettimeofday(&tv_r_JOIN_INNER_7_104998_s, 0);
    SW_JOIN_INNER_TD_7602(tbl_Filter_TD_8435_output, tbl_Filter_TD_8826_output, tbl_JOIN_INNER_TD_7602_output);
    gettimeofday(&tv_r_JOIN_INNER_7_104998_e, 0);

    struct timeval tv_r_Filter_7_374916_s, tv_r_Filter_7_374916_e;
    gettimeofday(&tv_r_Filter_7_374916_s, 0);
    SW_Filter_TD_7287(tbl_SerializeFromObject_TD_8707_input, tbl_Filter_TD_7287_output);
    gettimeofday(&tv_r_Filter_7_374916_e, 0);

    struct timeval tv_r_JOIN_INNER_7_812504_s, tv_r_JOIN_INNER_7_812504_e;
    gettimeofday(&tv_r_JOIN_INNER_7_812504_s, 0);
    SW_JOIN_INNER_TD_7498(tbl_Filter_TD_8301_output, tbl_Filter_TD_8975_output, tbl_JOIN_INNER_TD_7498_output);
    gettimeofday(&tv_r_JOIN_INNER_7_812504_e, 0);

    struct timeval tv_r_Filter_6_939454_s, tv_r_Filter_6_939454_e;
    gettimeofday(&tv_r_Filter_6_939454_s, 0);
    SW_Filter_TD_6425(tbl_SerializeFromObject_TD_7940_input, tbl_Filter_TD_6425_output);
    gettimeofday(&tv_r_Filter_6_939454_e, 0);

    struct timeval tv_r_Filter_6_157122_s, tv_r_Filter_6_157122_e;
    gettimeofday(&tv_r_Filter_6_157122_s, 0);
    SW_Filter_TD_654(tbl_SerializeFromObject_TD_7188_input, tbl_Filter_TD_654_output);
    gettimeofday(&tv_r_Filter_6_157122_e, 0);

    struct timeval tv_r_JOIN_INNER_6_880462_s, tv_r_JOIN_INNER_6_880462_e;
    gettimeofday(&tv_r_JOIN_INNER_6_880462_s, 0);
    SW_JOIN_INNER_TD_6291(tbl_JOIN_INNER_TD_7602_output, tbl_Filter_TD_7573_output, tbl_JOIN_INNER_TD_6291_output);
    gettimeofday(&tv_r_JOIN_INNER_6_880462_e, 0);

    struct timeval tv_r_JOIN_INNER_6_18776_s, tv_r_JOIN_INNER_6_18776_e;
    gettimeofday(&tv_r_JOIN_INNER_6_18776_s, 0);
    SW_JOIN_INNER_TD_6116(tbl_JOIN_INNER_TD_7498_output, tbl_Filter_TD_7287_output, tbl_JOIN_INNER_TD_6116_output);
    gettimeofday(&tv_r_JOIN_INNER_6_18776_e, 0);

    struct timeval tv_r_Filter_5_448171_s, tv_r_Filter_5_448171_e;
    gettimeofday(&tv_r_Filter_5_448171_s, 0);
    SW_Filter_TD_5591(tbl_SerializeFromObject_TD_6985_input, tbl_Filter_TD_5591_output);
    gettimeofday(&tv_r_Filter_5_448171_e, 0);

    struct timeval tv_r_JOIN_INNER_5_193350_s, tv_r_JOIN_INNER_5_193350_e;
    gettimeofday(&tv_r_JOIN_INNER_5_193350_s, 0);
    SW_JOIN_INNER_TD_5358(tbl_Filter_TD_654_output, tbl_Filter_TD_6425_output, tbl_JOIN_INNER_TD_5358_output);
    gettimeofday(&tv_r_JOIN_INNER_5_193350_e, 0);

    struct timeval tv_r_Aggregate_5_485175_s, tv_r_Aggregate_5_485175_e;
    gettimeofday(&tv_r_Aggregate_5_485175_s, 0);
    SW_Aggregate_TD_545(tbl_JOIN_INNER_TD_6291_output, tbl_Aggregate_TD_545_output);
    gettimeofday(&tv_r_Aggregate_5_485175_e, 0);

    struct timeval tv_r_Aggregate_5_918359_s, tv_r_Aggregate_5_918359_e;
    gettimeofday(&tv_r_Aggregate_5_918359_s, 0);
    SW_Aggregate_TD_5730(tbl_JOIN_INNER_TD_6116_output, tbl_Aggregate_TD_5730_output);
    gettimeofday(&tv_r_Aggregate_5_918359_e, 0);

    struct timeval tv_r_JOIN_INNER_4_316960_s, tv_r_JOIN_INNER_4_316960_e;
    gettimeofday(&tv_r_JOIN_INNER_4_316960_s, 0);
    SW_JOIN_INNER_TD_4672(tbl_JOIN_INNER_TD_5358_output, tbl_Filter_TD_5591_output, tbl_JOIN_INNER_TD_4672_output);
    gettimeofday(&tv_r_JOIN_INNER_4_316960_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_4_260071_s, tv_r_JOIN_LEFTSEMI_4_260071_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_260071_s, 0);
    SW_JOIN_LEFTSEMI_TD_4180(tbl_Aggregate_TD_5730_output, tbl_Aggregate_TD_545_output, tbl_JOIN_LEFTSEMI_TD_4180_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_260071_e, 0);

    struct timeval tv_r_Aggregate_3_17700_s, tv_r_Aggregate_3_17700_e;
    gettimeofday(&tv_r_Aggregate_3_17700_s, 0);
    SW_Aggregate_TD_3941(tbl_JOIN_INNER_TD_4672_output, tbl_Aggregate_TD_3941_output);
    gettimeofday(&tv_r_Aggregate_3_17700_e, 0);

    struct timeval tv_r_Aggregate_3_588585_s, tv_r_Aggregate_3_588585_e;
    gettimeofday(&tv_r_Aggregate_3_588585_s, 0);
    SW_Aggregate_TD_3340(tbl_JOIN_LEFTSEMI_TD_4180_output, tbl_Aggregate_TD_3340_output);
    gettimeofday(&tv_r_Aggregate_3_588585_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_2_292226_s, tv_r_JOIN_LEFTSEMI_2_292226_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_292226_s, 0);
    SW_JOIN_LEFTSEMI_TD_2519(tbl_Aggregate_TD_3340_output, tbl_Aggregate_TD_3941_output, tbl_JOIN_LEFTSEMI_TD_2519_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_292226_e, 0);

    struct timeval tv_r_Aggregate_1_203006_s, tv_r_Aggregate_1_203006_e;
    gettimeofday(&tv_r_Aggregate_1_203006_s, 0);
    SW_Aggregate_TD_1660(tbl_JOIN_LEFTSEMI_TD_2519_output, NULL);
    gettimeofday(&tv_r_Aggregate_1_203006_e, 0);

    struct timeval tv_r_Aggregate_0_381635_s, tv_r_Aggregate_0_381635_e;
    gettimeofday(&tv_r_Aggregate_0_381635_s, 0);
    SW_Aggregate_TD_0424(NULL, tbl_Aggregate_TD_0424_output);
    gettimeofday(&tv_r_Aggregate_0_381635_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_508910_s, &tv_r_Filter_8_508910_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9937_input: " << tbl_SerializeFromObject_TD_9937_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_542970_s, &tv_r_Filter_8_542970_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9318_input: " << tbl_SerializeFromObject_TD_9318_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_965184_s, &tv_r_Filter_8_965184_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9520_input: " << tbl_SerializeFromObject_TD_9520_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_121295_s, &tv_r_Filter_8_121295_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9366_input: " << tbl_SerializeFromObject_TD_9366_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_660746_s, &tv_r_Filter_7_660746_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_855_input: " << tbl_SerializeFromObject_TD_855_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_104998_s, &tv_r_JOIN_INNER_7_104998_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8435_output: " << tbl_Filter_TD_8435_output.getNumRow() << " " << "tbl_Filter_TD_8826_output: " << tbl_Filter_TD_8826_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_374916_s, &tv_r_Filter_7_374916_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8707_input: " << tbl_SerializeFromObject_TD_8707_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_812504_s, &tv_r_JOIN_INNER_7_812504_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8301_output: " << tbl_Filter_TD_8301_output.getNumRow() << " " << "tbl_Filter_TD_8975_output: " << tbl_Filter_TD_8975_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_939454_s, &tv_r_Filter_6_939454_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7940_input: " << tbl_SerializeFromObject_TD_7940_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_157122_s, &tv_r_Filter_6_157122_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7188_input: " << tbl_SerializeFromObject_TD_7188_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_880462_s, &tv_r_JOIN_INNER_6_880462_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7602_output: " << tbl_JOIN_INNER_TD_7602_output.getNumRow() << " " << "tbl_Filter_TD_7573_output: " << tbl_Filter_TD_7573_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_18776_s, &tv_r_JOIN_INNER_6_18776_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7498_output: " << tbl_JOIN_INNER_TD_7498_output.getNumRow() << " " << "tbl_Filter_TD_7287_output: " << tbl_Filter_TD_7287_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_448171_s, &tv_r_Filter_5_448171_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6985_input: " << tbl_SerializeFromObject_TD_6985_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_193350_s, &tv_r_JOIN_INNER_5_193350_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_654_output: " << tbl_Filter_TD_654_output.getNumRow() << " " << "tbl_Filter_TD_6425_output: " << tbl_Filter_TD_6425_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_485175_s, &tv_r_Aggregate_5_485175_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6291_output: " << tbl_JOIN_INNER_TD_6291_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_918359_s, &tv_r_Aggregate_5_918359_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6116_output: " << tbl_JOIN_INNER_TD_6116_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_316960_s, &tv_r_JOIN_INNER_4_316960_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5358_output: " << tbl_JOIN_INNER_TD_5358_output.getNumRow() << " " << "tbl_Filter_TD_5591_output: " << tbl_Filter_TD_5591_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_4: " << tvdiff(&tv_r_JOIN_LEFTSEMI_4_260071_s, &tv_r_JOIN_LEFTSEMI_4_260071_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5730_output: " << tbl_Aggregate_TD_5730_output.getNumRow() << " " << "tbl_Aggregate_TD_545_output: " << tbl_Aggregate_TD_545_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_17700_s, &tv_r_Aggregate_3_17700_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4672_output: " << tbl_JOIN_INNER_TD_4672_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_588585_s, &tv_r_Aggregate_3_588585_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_4180_output: " << tbl_JOIN_LEFTSEMI_TD_4180_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_2: " << tvdiff(&tv_r_JOIN_LEFTSEMI_2_292226_s, &tv_r_JOIN_LEFTSEMI_2_292226_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3340_output: " << tbl_Aggregate_TD_3340_output.getNumRow() << " " << "tbl_Aggregate_TD_3941_output: " << tbl_Aggregate_TD_3941_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_203006_s, &tv_r_Aggregate_1_203006_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_2519_output: " << tbl_JOIN_LEFTSEMI_TD_2519_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_381635_s, &tv_r_Aggregate_0_381635_e) / 1000.0 << " ms " 
     << "NULL: " << NULL.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.6609008 * 1000 << "ms" << std::endl; 
    return 0; 
}
