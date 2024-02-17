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

#include "cfgFunc_q18.hpp" 
#include "q18.hpp" 

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
    std::cout << "NOTE:running query #18\n."; 
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
    Table tbl_GlobalLimit_TD_0247_output("tbl_GlobalLimit_TD_0247_output", 6100000, 11, "");
    tbl_GlobalLimit_TD_0247_output.allocateHost();
    Table tbl_LocalLimit_TD_1816_output("tbl_LocalLimit_TD_1816_output", 6100000, 11, "");
    tbl_LocalLimit_TD_1816_output.allocateHost();
    Table tbl_Sort_TD_2746_output("tbl_Sort_TD_2746_output", 6100000, 11, "");
    tbl_Sort_TD_2746_output.allocateHost();
    Table tbl_Aggregate_TD_386_output("tbl_Aggregate_TD_386_output", 6100000, 11, "");
    tbl_Aggregate_TD_386_output.allocateHost();
    Table tbl_Expand_TD_4243_output("tbl_Expand_TD_4243_output", 6100000, 12, "");
    tbl_Expand_TD_4243_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5770_output("tbl_JOIN_INNER_TD_5770_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_5770_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6142_output("tbl_JOIN_INNER_TD_6142_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_6142_output.allocateHost();
    Table tbl_Filter_TD_6566_output("tbl_Filter_TD_6566_output", 6100000, 2, "");
    tbl_Filter_TD_6566_output.allocateHost();
    Table tbl_JOIN_INNER_TD_721_output("tbl_JOIN_INNER_TD_721_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_721_output.allocateHost();
    Table tbl_Filter_TD_7184_output("tbl_Filter_TD_7184_output", 6100000, 1, "");
    tbl_Filter_TD_7184_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7208_input;
    tbl_SerializeFromObject_TD_7208_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7208_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7208_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7208_input.allocateHost();
    tbl_SerializeFromObject_TD_7208_input.loadHost();
    Table tbl_JOIN_INNER_TD_8896_output("tbl_JOIN_INNER_TD_8896_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8896_output.allocateHost();
    Table tbl_Filter_TD_8579_output("tbl_Filter_TD_8579_output", 6100000, 4, "");
    tbl_Filter_TD_8579_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8170_input;
    tbl_SerializeFromObject_TD_8170_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8170_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8170_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8170_input.allocateHost();
    tbl_SerializeFromObject_TD_8170_input.loadHost();
    Table tbl_JOIN_INNER_TD_9978_output("tbl_JOIN_INNER_TD_9978_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_9978_output.allocateHost();
    Table tbl_Filter_TD_9928_output("tbl_Filter_TD_9928_output", 6100000, 1, "");
    tbl_Filter_TD_9928_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9695_input;
    tbl_SerializeFromObject_TD_9695_input = Table("customer_address", customer_address_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9695_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9695_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9695_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9695_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9695_input.allocateHost();
    tbl_SerializeFromObject_TD_9695_input.loadHost();
    Table tbl_JOIN_INNER_TD_1065_output("tbl_JOIN_INNER_TD_1065_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_1065_output.allocateHost();
    Table tbl_Filter_TD_10745_output("tbl_Filter_TD_10745_output", 6100000, 4, "");
    tbl_Filter_TD_10745_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10719_input;
    tbl_SerializeFromObject_TD_10719_input = Table("customer_demographics", customer_demographics_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_10719_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_10719_input.allocateHost();
    tbl_SerializeFromObject_TD_10719_input.loadHost();
    Table tbl_Filter_TD_11259_output("tbl_Filter_TD_11259_output", 6100000, 9, "");
    tbl_Filter_TD_11259_output.allocateHost();
    Table tbl_Filter_TD_11937_output("tbl_Filter_TD_11937_output", 6100000, 2, "");
    tbl_Filter_TD_11937_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11327_input;
    tbl_SerializeFromObject_TD_11327_input = Table("customer", customer_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_11327_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11327_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_11327_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_11327_input.addCol("c_birth_year", 4);
    tbl_SerializeFromObject_TD_11327_input.addCol("c_birth_month", 4);
    tbl_SerializeFromObject_TD_11327_input.allocateHost();
    tbl_SerializeFromObject_TD_11327_input.loadHost();
    Table tbl_SerializeFromObject_TD_12243_input;
    tbl_SerializeFromObject_TD_12243_input = Table("catalog_sales", catalog_sales_n, 9, in_dir, "orc");
    tbl_SerializeFromObject_TD_12243_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12243_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_12243_input.addCol("cs_bill_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_12243_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_12243_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_12243_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_12243_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_12243_input.addCol("cs_coupon_amt", 4);
    tbl_SerializeFromObject_TD_12243_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_12243_input.allocateHost();
    tbl_SerializeFromObject_TD_12243_input.loadHost();
    Table tbl_SerializeFromObject_TD_12590_input;
    tbl_SerializeFromObject_TD_12590_input = Table("customer_demographics", customer_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12590_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12590_input.addCol("cd_dep_count", 4);
    tbl_SerializeFromObject_TD_12590_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12590_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12590_input.allocateHost();
    tbl_SerializeFromObject_TD_12590_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_999982_s, tv_r_Filter_11_999982_e;
    gettimeofday(&tv_r_Filter_11_999982_s, 0);
    SW_Filter_TD_11937(tbl_SerializeFromObject_TD_12590_input, tbl_Filter_TD_11937_output);
    gettimeofday(&tv_r_Filter_11_999982_e, 0);

    struct timeval tv_r_Filter_11_951892_s, tv_r_Filter_11_951892_e;
    gettimeofday(&tv_r_Filter_11_951892_s, 0);
    SW_Filter_TD_11259(tbl_SerializeFromObject_TD_12243_input, tbl_Filter_TD_11259_output);
    gettimeofday(&tv_r_Filter_11_951892_e, 0);

    struct timeval tv_r_Filter_10_54869_s, tv_r_Filter_10_54869_e;
    gettimeofday(&tv_r_Filter_10_54869_s, 0);
    SW_Filter_TD_10745(tbl_SerializeFromObject_TD_11327_input, tbl_Filter_TD_10745_output);
    gettimeofday(&tv_r_Filter_10_54869_e, 0);

    struct timeval tv_r_JOIN_INNER_10_514038_s, tv_r_JOIN_INNER_10_514038_e;
    gettimeofday(&tv_r_JOIN_INNER_10_514038_s, 0);
    SW_JOIN_INNER_TD_1065(tbl_Filter_TD_11259_output, tbl_Filter_TD_11937_output, tbl_JOIN_INNER_TD_1065_output);
    gettimeofday(&tv_r_JOIN_INNER_10_514038_e, 0);

    struct timeval tv_r_Filter_9_430363_s, tv_r_Filter_9_430363_e;
    gettimeofday(&tv_r_Filter_9_430363_s, 0);
    SW_Filter_TD_9928(tbl_SerializeFromObject_TD_10719_input, tbl_Filter_TD_9928_output);
    gettimeofday(&tv_r_Filter_9_430363_e, 0);

    struct timeval tv_r_JOIN_INNER_9_403466_s, tv_r_JOIN_INNER_9_403466_e;
    gettimeofday(&tv_r_JOIN_INNER_9_403466_s, 0);
    SW_JOIN_INNER_TD_9978(tbl_JOIN_INNER_TD_1065_output, tbl_Filter_TD_10745_output, tbl_JOIN_INNER_TD_9978_output);
    gettimeofday(&tv_r_JOIN_INNER_9_403466_e, 0);

    struct timeval tv_r_Filter_8_634558_s, tv_r_Filter_8_634558_e;
    gettimeofday(&tv_r_Filter_8_634558_s, 0);
    SW_Filter_TD_8579(tbl_SerializeFromObject_TD_9695_input, tbl_Filter_TD_8579_output);
    gettimeofday(&tv_r_Filter_8_634558_e, 0);

    struct timeval tv_r_JOIN_INNER_8_821376_s, tv_r_JOIN_INNER_8_821376_e;
    gettimeofday(&tv_r_JOIN_INNER_8_821376_s, 0);
    SW_JOIN_INNER_TD_8896(tbl_JOIN_INNER_TD_9978_output, tbl_Filter_TD_9928_output, tbl_JOIN_INNER_TD_8896_output);
    gettimeofday(&tv_r_JOIN_INNER_8_821376_e, 0);

    struct timeval tv_r_Filter_7_540599_s, tv_r_Filter_7_540599_e;
    gettimeofday(&tv_r_Filter_7_540599_s, 0);
    SW_Filter_TD_7184(tbl_SerializeFromObject_TD_8170_input, tbl_Filter_TD_7184_output);
    gettimeofday(&tv_r_Filter_7_540599_e, 0);

    struct timeval tv_r_JOIN_INNER_7_827067_s, tv_r_JOIN_INNER_7_827067_e;
    gettimeofday(&tv_r_JOIN_INNER_7_827067_s, 0);
    SW_JOIN_INNER_TD_721(tbl_JOIN_INNER_TD_8896_output, tbl_Filter_TD_8579_output, tbl_JOIN_INNER_TD_721_output);
    gettimeofday(&tv_r_JOIN_INNER_7_827067_e, 0);

    struct timeval tv_r_Filter_6_484661_s, tv_r_Filter_6_484661_e;
    gettimeofday(&tv_r_Filter_6_484661_s, 0);
    SW_Filter_TD_6566(tbl_SerializeFromObject_TD_7208_input, tbl_Filter_TD_6566_output);
    gettimeofday(&tv_r_Filter_6_484661_e, 0);

    struct timeval tv_r_JOIN_INNER_6_18389_s, tv_r_JOIN_INNER_6_18389_e;
    gettimeofday(&tv_r_JOIN_INNER_6_18389_s, 0);
    SW_JOIN_INNER_TD_6142(tbl_JOIN_INNER_TD_721_output, tbl_Filter_TD_7184_output, tbl_JOIN_INNER_TD_6142_output);
    gettimeofday(&tv_r_JOIN_INNER_6_18389_e, 0);

    struct timeval tv_r_JOIN_INNER_5_628893_s, tv_r_JOIN_INNER_5_628893_e;
    gettimeofday(&tv_r_JOIN_INNER_5_628893_s, 0);
    SW_JOIN_INNER_TD_5770(tbl_JOIN_INNER_TD_6142_output, tbl_Filter_TD_6566_output, tbl_JOIN_INNER_TD_5770_output);
    gettimeofday(&tv_r_JOIN_INNER_5_628893_e, 0);

    struct timeval tv_r_Expand_4_140621_s, tv_r_Expand_4_140621_e;
    gettimeofday(&tv_r_Expand_4_140621_s, 0);
    SW_Expand_TD_4243(tbl_JOIN_INNER_TD_5770_output, tbl_Expand_TD_4243_output);
    gettimeofday(&tv_r_Expand_4_140621_e, 0);

    struct timeval tv_r_Aggregate_3_968601_s, tv_r_Aggregate_3_968601_e;
    gettimeofday(&tv_r_Aggregate_3_968601_s, 0);
    SW_Aggregate_TD_386(tbl_Expand_TD_4243_output, tbl_Aggregate_TD_386_output);
    gettimeofday(&tv_r_Aggregate_3_968601_e, 0);

    struct timeval tv_r_Sort_2_48909_s, tv_r_Sort_2_48909_e;
    gettimeofday(&tv_r_Sort_2_48909_s, 0);
    SW_Sort_TD_2746(tbl_Aggregate_TD_386_output, tbl_Sort_TD_2746_output);
    gettimeofday(&tv_r_Sort_2_48909_e, 0);

    struct timeval tv_r_LocalLimit_1_230731_s, tv_r_LocalLimit_1_230731_e;
    gettimeofday(&tv_r_LocalLimit_1_230731_s, 0);
    SW_LocalLimit_TD_1816(tbl_Sort_TD_2746_output, tbl_LocalLimit_TD_1816_output);
    gettimeofday(&tv_r_LocalLimit_1_230731_e, 0);

    struct timeval tv_r_GlobalLimit_0_429727_s, tv_r_GlobalLimit_0_429727_e;
    gettimeofday(&tv_r_GlobalLimit_0_429727_s, 0);
    SW_GlobalLimit_TD_0247(tbl_LocalLimit_TD_1816_output, tbl_GlobalLimit_TD_0247_output);
    gettimeofday(&tv_r_GlobalLimit_0_429727_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_999982_s, &tv_r_Filter_11_999982_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12590_input: " << tbl_SerializeFromObject_TD_12590_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_951892_s, &tv_r_Filter_11_951892_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12243_input: " << tbl_SerializeFromObject_TD_12243_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_54869_s, &tv_r_Filter_10_54869_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11327_input: " << tbl_SerializeFromObject_TD_11327_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_514038_s, &tv_r_JOIN_INNER_10_514038_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11259_output: " << tbl_Filter_TD_11259_output.getNumRow() << " " << "tbl_Filter_TD_11937_output: " << tbl_Filter_TD_11937_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_430363_s, &tv_r_Filter_9_430363_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10719_input: " << tbl_SerializeFromObject_TD_10719_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_403466_s, &tv_r_JOIN_INNER_9_403466_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1065_output: " << tbl_JOIN_INNER_TD_1065_output.getNumRow() << " " << "tbl_Filter_TD_10745_output: " << tbl_Filter_TD_10745_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_634558_s, &tv_r_Filter_8_634558_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9695_input: " << tbl_SerializeFromObject_TD_9695_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_821376_s, &tv_r_JOIN_INNER_8_821376_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9978_output: " << tbl_JOIN_INNER_TD_9978_output.getNumRow() << " " << "tbl_Filter_TD_9928_output: " << tbl_Filter_TD_9928_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_540599_s, &tv_r_Filter_7_540599_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8170_input: " << tbl_SerializeFromObject_TD_8170_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_827067_s, &tv_r_JOIN_INNER_7_827067_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8896_output: " << tbl_JOIN_INNER_TD_8896_output.getNumRow() << " " << "tbl_Filter_TD_8579_output: " << tbl_Filter_TD_8579_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_484661_s, &tv_r_Filter_6_484661_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7208_input: " << tbl_SerializeFromObject_TD_7208_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_18389_s, &tv_r_JOIN_INNER_6_18389_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_721_output: " << tbl_JOIN_INNER_TD_721_output.getNumRow() << " " << "tbl_Filter_TD_7184_output: " << tbl_Filter_TD_7184_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_628893_s, &tv_r_JOIN_INNER_5_628893_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6142_output: " << tbl_JOIN_INNER_TD_6142_output.getNumRow() << " " << "tbl_Filter_TD_6566_output: " << tbl_Filter_TD_6566_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_140621_s, &tv_r_Expand_4_140621_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5770_output: " << tbl_JOIN_INNER_TD_5770_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_968601_s, &tv_r_Aggregate_3_968601_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4243_output: " << tbl_Expand_TD_4243_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_48909_s, &tv_r_Sort_2_48909_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_386_output: " << tbl_Aggregate_TD_386_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_230731_s, &tv_r_LocalLimit_1_230731_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2746_output: " << tbl_Sort_TD_2746_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_429727_s, &tv_r_GlobalLimit_0_429727_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1816_output: " << tbl_LocalLimit_TD_1816_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.5959804 * 1000 << "ms" << std::endl; 
    return 0; 
}
