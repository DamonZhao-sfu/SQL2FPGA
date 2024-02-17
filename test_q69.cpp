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

#include "cfgFunc_q69.hpp" 
#include "q69.hpp" 

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
    std::cout << "NOTE:running query #69\n."; 
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
    Table tbl_GlobalLimit_TD_0215_output("tbl_GlobalLimit_TD_0215_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0215_output.allocateHost();
    Table tbl_LocalLimit_TD_1983_output("tbl_LocalLimit_TD_1983_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1983_output.allocateHost();
    Table tbl_Sort_TD_2317_output("tbl_Sort_TD_2317_output", 6100000, 8, "");
    tbl_Sort_TD_2317_output.allocateHost();
    Table tbl_Aggregate_TD_3506_output("tbl_Aggregate_TD_3506_output", 6100000, 8, "");
    tbl_Aggregate_TD_3506_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4915_output("tbl_JOIN_INNER_TD_4915_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4915_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5660_output("tbl_JOIN_INNER_TD_5660_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5660_output.allocateHost();
    Table tbl_Filter_TD_5966_output("tbl_Filter_TD_5966_output", 6100000, 6, "");
    tbl_Filter_TD_5966_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_6713_output("tbl_JOIN_LEFTANTI_TD_6713_output", 6100000, 2, "");
    tbl_JOIN_LEFTANTI_TD_6713_output.allocateHost();
    Table tbl_Filter_TD_6262_output("tbl_Filter_TD_6262_output", 6100000, 1, "");
    tbl_Filter_TD_6262_output.allocateHost();
    Table tbl_SerializeFromObject_TD_675_input;
    tbl_SerializeFromObject_TD_675_input = Table("customer_demographics", customer_demographics_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_675_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_675_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_675_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_675_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_675_input.addCol("cd_purchase_estimate", 4);
    tbl_SerializeFromObject_TD_675_input.addCol("cd_credit_rating", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_675_input.allocateHost();
    tbl_SerializeFromObject_TD_675_input.loadHost();
    Table tbl_JOIN_LEFTANTI_TD_7468_output("tbl_JOIN_LEFTANTI_TD_7468_output", 6100000, 3, "");
    tbl_JOIN_LEFTANTI_TD_7468_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7123_output("tbl_JOIN_INNER_TD_7123_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_7123_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7447_input;
    tbl_SerializeFromObject_TD_7447_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7447_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_7447_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7447_input.allocateHost();
    tbl_SerializeFromObject_TD_7447_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_8579_output("tbl_JOIN_LEFTSEMI_TD_8579_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_8579_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8423_output("tbl_JOIN_INNER_TD_8423_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_8423_output.allocateHost();
    Table tbl_Filter_TD_8702_output("tbl_Filter_TD_8702_output", 6100000, 2, "");
    tbl_Filter_TD_8702_output.allocateHost();
    Table tbl_Filter_TD_8414_output("tbl_Filter_TD_8414_output", 6100000, 1, "");
    tbl_Filter_TD_8414_output.allocateHost();
    Table tbl_Filter_TD_9289_output("tbl_Filter_TD_9289_output", 6100000, 3, "");
    tbl_Filter_TD_9289_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9689_output("tbl_JOIN_INNER_TD_9689_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9689_output.allocateHost();
    Table tbl_Filter_TD_9247_output("tbl_Filter_TD_9247_output", 6100000, 2, "");
    tbl_Filter_TD_9247_output.allocateHost();
    Table tbl_Filter_TD_9713_output("tbl_Filter_TD_9713_output", 6100000, 1, "");
    tbl_Filter_TD_9713_output.allocateHost();
    Table tbl_SerializeFromObject_TD_924_input;
    tbl_SerializeFromObject_TD_924_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_924_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_924_input.addCol("cs_ship_customer_sk", 4);
    tbl_SerializeFromObject_TD_924_input.allocateHost();
    tbl_SerializeFromObject_TD_924_input.loadHost();
    Table tbl_SerializeFromObject_TD_9302_input;
    tbl_SerializeFromObject_TD_9302_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9302_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9302_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9302_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9302_input.allocateHost();
    tbl_SerializeFromObject_TD_9302_input.loadHost();
    Table tbl_SerializeFromObject_TD_10131_input;
    tbl_SerializeFromObject_TD_10131_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10131_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_10131_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_10131_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_10131_input.allocateHost();
    tbl_SerializeFromObject_TD_10131_input.loadHost();
    Table tbl_Filter_TD_10680_output("tbl_Filter_TD_10680_output", 6100000, 2, "");
    tbl_Filter_TD_10680_output.allocateHost();
    Table tbl_Filter_TD_10927_output("tbl_Filter_TD_10927_output", 6100000, 1, "");
    tbl_Filter_TD_10927_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10736_input;
    tbl_SerializeFromObject_TD_10736_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10736_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10736_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_10736_input.allocateHost();
    tbl_SerializeFromObject_TD_10736_input.loadHost();
    Table tbl_SerializeFromObject_TD_10810_input;
    tbl_SerializeFromObject_TD_10810_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10810_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10810_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10810_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10810_input.allocateHost();
    tbl_SerializeFromObject_TD_10810_input.loadHost();
    Table tbl_SerializeFromObject_TD_11463_input;
    tbl_SerializeFromObject_TD_11463_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11463_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11463_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_11463_input.allocateHost();
    tbl_SerializeFromObject_TD_11463_input.loadHost();
    Table tbl_SerializeFromObject_TD_11106_input;
    tbl_SerializeFromObject_TD_11106_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11106_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11106_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11106_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11106_input.allocateHost();
    tbl_SerializeFromObject_TD_11106_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_381504_s, tv_r_Filter_10_381504_e;
    gettimeofday(&tv_r_Filter_10_381504_s, 0);
    SW_Filter_TD_10927(tbl_SerializeFromObject_TD_11106_input, tbl_Filter_TD_10927_output);
    gettimeofday(&tv_r_Filter_10_381504_e, 0);

    struct timeval tv_r_Filter_10_490376_s, tv_r_Filter_10_490376_e;
    gettimeofday(&tv_r_Filter_10_490376_s, 0);
    SW_Filter_TD_10680(tbl_SerializeFromObject_TD_11463_input, tbl_Filter_TD_10680_output);
    gettimeofday(&tv_r_Filter_10_490376_e, 0);

    struct timeval tv_r_Filter_9_28052_s, tv_r_Filter_9_28052_e;
    gettimeofday(&tv_r_Filter_9_28052_s, 0);
    SW_Filter_TD_9713(tbl_SerializeFromObject_TD_10810_input, tbl_Filter_TD_9713_output);
    gettimeofday(&tv_r_Filter_9_28052_e, 0);

    struct timeval tv_r_Filter_9_436872_s, tv_r_Filter_9_436872_e;
    gettimeofday(&tv_r_Filter_9_436872_s, 0);
    SW_Filter_TD_9247(tbl_SerializeFromObject_TD_10736_input, tbl_Filter_TD_9247_output);
    gettimeofday(&tv_r_Filter_9_436872_e, 0);

    struct timeval tv_r_JOIN_INNER_9_326372_s, tv_r_JOIN_INNER_9_326372_e;
    gettimeofday(&tv_r_JOIN_INNER_9_326372_s, 0);
    SW_JOIN_INNER_TD_9689(tbl_Filter_TD_10680_output, tbl_Filter_TD_10927_output, tbl_JOIN_INNER_TD_9689_output);
    gettimeofday(&tv_r_JOIN_INNER_9_326372_e, 0);

    struct timeval tv_r_Filter_9_52813_s, tv_r_Filter_9_52813_e;
    gettimeofday(&tv_r_Filter_9_52813_s, 0);
    SW_Filter_TD_9289(tbl_SerializeFromObject_TD_10131_input, tbl_Filter_TD_9289_output);
    gettimeofday(&tv_r_Filter_9_52813_e, 0);

    struct timeval tv_r_Filter_8_320236_s, tv_r_Filter_8_320236_e;
    gettimeofday(&tv_r_Filter_8_320236_s, 0);
    SW_Filter_TD_8414(tbl_SerializeFromObject_TD_9302_input, tbl_Filter_TD_8414_output);
    gettimeofday(&tv_r_Filter_8_320236_e, 0);

    struct timeval tv_r_Filter_8_914359_s, tv_r_Filter_8_914359_e;
    gettimeofday(&tv_r_Filter_8_914359_s, 0);
    SW_Filter_TD_8702(tbl_SerializeFromObject_TD_924_input, tbl_Filter_TD_8702_output);
    gettimeofday(&tv_r_Filter_8_914359_e, 0);

    struct timeval tv_r_JOIN_INNER_8_420026_s, tv_r_JOIN_INNER_8_420026_e;
    gettimeofday(&tv_r_JOIN_INNER_8_420026_s, 0);
    SW_JOIN_INNER_TD_8423(tbl_Filter_TD_9247_output, tbl_Filter_TD_9713_output, tbl_JOIN_INNER_TD_8423_output);
    gettimeofday(&tv_r_JOIN_INNER_8_420026_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_94293_s, tv_r_JOIN_LEFTSEMI_8_94293_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_94293_s, 0);
    SW_JOIN_LEFTSEMI_TD_8579(tbl_Filter_TD_9289_output, tbl_JOIN_INNER_TD_9689_output, tbl_JOIN_LEFTSEMI_TD_8579_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_94293_e, 0);

    struct timeval tv_r_JOIN_INNER_7_946197_s, tv_r_JOIN_INNER_7_946197_e;
    gettimeofday(&tv_r_JOIN_INNER_7_946197_s, 0);
    SW_JOIN_INNER_TD_7123(tbl_Filter_TD_8702_output, tbl_Filter_TD_8414_output, tbl_JOIN_INNER_TD_7123_output);
    gettimeofday(&tv_r_JOIN_INNER_7_946197_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_7_938206_s, tv_r_JOIN_LEFTANTI_7_938206_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_7_938206_s, 0);
    SW_JOIN_LEFTANTI_TD_7468(tbl_JOIN_LEFTSEMI_TD_8579_output, tbl_JOIN_INNER_TD_8423_output, tbl_JOIN_LEFTANTI_TD_7468_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_7_938206_e, 0);

    struct timeval tv_r_Filter_6_889614_s, tv_r_Filter_6_889614_e;
    gettimeofday(&tv_r_Filter_6_889614_s, 0);
    SW_Filter_TD_6262(tbl_SerializeFromObject_TD_7447_input, tbl_Filter_TD_6262_output);
    gettimeofday(&tv_r_Filter_6_889614_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_6_718799_s, tv_r_JOIN_LEFTANTI_6_718799_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_6_718799_s, 0);
    SW_JOIN_LEFTANTI_TD_6713(tbl_JOIN_LEFTANTI_TD_7468_output, tbl_JOIN_INNER_TD_7123_output, tbl_JOIN_LEFTANTI_TD_6713_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_6_718799_e, 0);

    struct timeval tv_r_Filter_5_948316_s, tv_r_Filter_5_948316_e;
    gettimeofday(&tv_r_Filter_5_948316_s, 0);
    SW_Filter_TD_5966(tbl_SerializeFromObject_TD_675_input, tbl_Filter_TD_5966_output);
    gettimeofday(&tv_r_Filter_5_948316_e, 0);

    struct timeval tv_r_JOIN_INNER_5_317807_s, tv_r_JOIN_INNER_5_317807_e;
    gettimeofday(&tv_r_JOIN_INNER_5_317807_s, 0);
    SW_JOIN_INNER_TD_5660(tbl_JOIN_LEFTANTI_TD_6713_output, tbl_Filter_TD_6262_output, tbl_JOIN_INNER_TD_5660_output);
    gettimeofday(&tv_r_JOIN_INNER_5_317807_e, 0);

    struct timeval tv_r_JOIN_INNER_4_547947_s, tv_r_JOIN_INNER_4_547947_e;
    gettimeofday(&tv_r_JOIN_INNER_4_547947_s, 0);
    SW_JOIN_INNER_TD_4915(tbl_JOIN_INNER_TD_5660_output, tbl_Filter_TD_5966_output, tbl_JOIN_INNER_TD_4915_output);
    gettimeofday(&tv_r_JOIN_INNER_4_547947_e, 0);

    struct timeval tv_r_Aggregate_3_913574_s, tv_r_Aggregate_3_913574_e;
    gettimeofday(&tv_r_Aggregate_3_913574_s, 0);
    SW_Aggregate_TD_3506(tbl_JOIN_INNER_TD_4915_output, tbl_Aggregate_TD_3506_output);
    gettimeofday(&tv_r_Aggregate_3_913574_e, 0);

    struct timeval tv_r_Sort_2_607297_s, tv_r_Sort_2_607297_e;
    gettimeofday(&tv_r_Sort_2_607297_s, 0);
    SW_Sort_TD_2317(tbl_Aggregate_TD_3506_output, tbl_Sort_TD_2317_output);
    gettimeofday(&tv_r_Sort_2_607297_e, 0);

    struct timeval tv_r_LocalLimit_1_882983_s, tv_r_LocalLimit_1_882983_e;
    gettimeofday(&tv_r_LocalLimit_1_882983_s, 0);
    SW_LocalLimit_TD_1983(tbl_Sort_TD_2317_output, tbl_LocalLimit_TD_1983_output);
    gettimeofday(&tv_r_LocalLimit_1_882983_e, 0);

    struct timeval tv_r_GlobalLimit_0_674194_s, tv_r_GlobalLimit_0_674194_e;
    gettimeofday(&tv_r_GlobalLimit_0_674194_s, 0);
    SW_GlobalLimit_TD_0215(tbl_LocalLimit_TD_1983_output, tbl_GlobalLimit_TD_0215_output);
    gettimeofday(&tv_r_GlobalLimit_0_674194_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_381504_s, &tv_r_Filter_10_381504_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11106_input: " << tbl_SerializeFromObject_TD_11106_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_490376_s, &tv_r_Filter_10_490376_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11463_input: " << tbl_SerializeFromObject_TD_11463_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_28052_s, &tv_r_Filter_9_28052_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10810_input: " << tbl_SerializeFromObject_TD_10810_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_436872_s, &tv_r_Filter_9_436872_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10736_input: " << tbl_SerializeFromObject_TD_10736_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_326372_s, &tv_r_JOIN_INNER_9_326372_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10680_output: " << tbl_Filter_TD_10680_output.getNumRow() << " " << "tbl_Filter_TD_10927_output: " << tbl_Filter_TD_10927_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_52813_s, &tv_r_Filter_9_52813_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10131_input: " << tbl_SerializeFromObject_TD_10131_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_320236_s, &tv_r_Filter_8_320236_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9302_input: " << tbl_SerializeFromObject_TD_9302_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_914359_s, &tv_r_Filter_8_914359_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_924_input: " << tbl_SerializeFromObject_TD_924_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_420026_s, &tv_r_JOIN_INNER_8_420026_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9247_output: " << tbl_Filter_TD_9247_output.getNumRow() << " " << "tbl_Filter_TD_9713_output: " << tbl_Filter_TD_9713_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_94293_s, &tv_r_JOIN_LEFTSEMI_8_94293_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9289_output: " << tbl_Filter_TD_9289_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_9689_output: " << tbl_JOIN_INNER_TD_9689_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_946197_s, &tv_r_JOIN_INNER_7_946197_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8702_output: " << tbl_Filter_TD_8702_output.getNumRow() << " " << "tbl_Filter_TD_8414_output: " << tbl_Filter_TD_8414_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_7: " << tvdiff(&tv_r_JOIN_LEFTANTI_7_938206_s, &tv_r_JOIN_LEFTANTI_7_938206_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_8579_output: " << tbl_JOIN_LEFTSEMI_TD_8579_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_8423_output: " << tbl_JOIN_INNER_TD_8423_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_889614_s, &tv_r_Filter_6_889614_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7447_input: " << tbl_SerializeFromObject_TD_7447_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_6: " << tvdiff(&tv_r_JOIN_LEFTANTI_6_718799_s, &tv_r_JOIN_LEFTANTI_6_718799_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_7468_output: " << tbl_JOIN_LEFTANTI_TD_7468_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_7123_output: " << tbl_JOIN_INNER_TD_7123_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_948316_s, &tv_r_Filter_5_948316_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_675_input: " << tbl_SerializeFromObject_TD_675_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_317807_s, &tv_r_JOIN_INNER_5_317807_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_6713_output: " << tbl_JOIN_LEFTANTI_TD_6713_output.getNumRow() << " " << "tbl_Filter_TD_6262_output: " << tbl_Filter_TD_6262_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_547947_s, &tv_r_JOIN_INNER_4_547947_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5660_output: " << tbl_JOIN_INNER_TD_5660_output.getNumRow() << " " << "tbl_Filter_TD_5966_output: " << tbl_Filter_TD_5966_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_913574_s, &tv_r_Aggregate_3_913574_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4915_output: " << tbl_JOIN_INNER_TD_4915_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_607297_s, &tv_r_Sort_2_607297_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3506_output: " << tbl_Aggregate_TD_3506_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_882983_s, &tv_r_LocalLimit_1_882983_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2317_output: " << tbl_Sort_TD_2317_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_674194_s, &tv_r_GlobalLimit_0_674194_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1983_output: " << tbl_LocalLimit_TD_1983_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.9840031 * 1000 << "ms" << std::endl; 
    return 0; 
}
