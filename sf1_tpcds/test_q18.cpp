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
    // Get CL devices. 
    std::vector<cl::Device> devices = xcl::get_xil_devices(); 
    // ****************************** Tables **************************** // 
    Table tbl_GlobalLimit_TD_0107586_output("tbl_GlobalLimit_TD_0107586_output", 6100000, 11, "");
    tbl_GlobalLimit_TD_0107586_output.allocateHost();
    Table tbl_LocalLimit_TD_1333161_output("tbl_LocalLimit_TD_1333161_output", 6100000, 11, "");
    tbl_LocalLimit_TD_1333161_output.allocateHost();
    Table tbl_Sort_TD_2316759_output("tbl_Sort_TD_2316759_output", 6100000, 11, "");
    tbl_Sort_TD_2316759_output.allocateHost();
    Table tbl_Aggregate_TD_3880369_output("tbl_Aggregate_TD_3880369_output", 6100000, 11, "");
    tbl_Aggregate_TD_3880369_output.allocateHost();
    Table tbl_Expand_TD_4554391_output("tbl_Expand_TD_4554391_output", 6100000, 12, "");
    tbl_Expand_TD_4554391_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5377019_output("tbl_JOIN_INNER_TD_5377019_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_5377019_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6154765_output("tbl_JOIN_INNER_TD_6154765_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_6154765_output.allocateHost();
    Table tbl_Filter_TD_6658751_output("tbl_Filter_TD_6658751_output", 6100000, 2, "");
    tbl_Filter_TD_6658751_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7216305_output("tbl_JOIN_INNER_TD_7216305_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_7216305_output.allocateHost();
    Table tbl_Filter_TD_798654_output("tbl_Filter_TD_798654_output", 6100000, 1, "");
    tbl_Filter_TD_798654_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7631876_input;
    tbl_SerializeFromObject_TD_7631876_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7631876_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7631876_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7631876_input.allocateHost();
    tbl_SerializeFromObject_TD_7631876_input.loadHost();
    Table tbl_JOIN_INNER_TD_8284305_output("tbl_JOIN_INNER_TD_8284305_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8284305_output.allocateHost();
    Table tbl_Filter_TD_8116600_output("tbl_Filter_TD_8116600_output", 6100000, 4, "");
    tbl_Filter_TD_8116600_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8126024_input;
    tbl_SerializeFromObject_TD_8126024_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8126024_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8126024_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8126024_input.allocateHost();
    tbl_SerializeFromObject_TD_8126024_input.loadHost();
    Table tbl_JOIN_INNER_TD_9673418_output("tbl_JOIN_INNER_TD_9673418_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_9673418_output.allocateHost();
    Table tbl_Filter_TD_953843_output("tbl_Filter_TD_953843_output", 6100000, 1, "");
    tbl_Filter_TD_953843_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9857128_input;
    tbl_SerializeFromObject_TD_9857128_input = Table("customer_address", customer_address_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9857128_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9857128_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9857128_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9857128_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9857128_input.allocateHost();
    tbl_SerializeFromObject_TD_9857128_input.loadHost();
    Table tbl_JOIN_INNER_TD_10229451_output("tbl_JOIN_INNER_TD_10229451_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10229451_output.allocateHost();
    Table tbl_Filter_TD_10518720_output("tbl_Filter_TD_10518720_output", 6100000, 4, "");
    tbl_Filter_TD_10518720_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1037731_input;
    tbl_SerializeFromObject_TD_1037731_input = Table("customer_demographics", customer_demographics_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_1037731_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_1037731_input.allocateHost();
    tbl_SerializeFromObject_TD_1037731_input.loadHost();
    Table tbl_Filter_TD_11251725_output("tbl_Filter_TD_11251725_output", 6100000, 9, "");
    tbl_Filter_TD_11251725_output.allocateHost();
    Table tbl_Filter_TD_11934588_output("tbl_Filter_TD_11934588_output", 6100000, 2, "");
    tbl_Filter_TD_11934588_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11874896_input;
    tbl_SerializeFromObject_TD_11874896_input = Table("customer", customer_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_11874896_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11874896_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_11874896_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_11874896_input.addCol("c_birth_year", 4);
    tbl_SerializeFromObject_TD_11874896_input.addCol("c_birth_month", 4);
    tbl_SerializeFromObject_TD_11874896_input.allocateHost();
    tbl_SerializeFromObject_TD_11874896_input.loadHost();
    Table tbl_SerializeFromObject_TD_12945816_input;
    tbl_SerializeFromObject_TD_12945816_input = Table("catalog_sales", catalog_sales_n, 9, in_dir, "orc");
    tbl_SerializeFromObject_TD_12945816_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12945816_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_12945816_input.addCol("cs_bill_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_12945816_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_12945816_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_12945816_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_12945816_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_12945816_input.addCol("cs_coupon_amt", 4);
    tbl_SerializeFromObject_TD_12945816_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_12945816_input.allocateHost();
    tbl_SerializeFromObject_TD_12945816_input.loadHost();
    Table tbl_SerializeFromObject_TD_12265154_input;
    tbl_SerializeFromObject_TD_12265154_input = Table("customer_demographics", customer_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12265154_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12265154_input.addCol("cd_dep_count", 4);
    tbl_SerializeFromObject_TD_12265154_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12265154_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12265154_input.allocateHost();
    tbl_SerializeFromObject_TD_12265154_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_841529_s, tv_r_Filter_11_841529_e;
    gettimeofday(&tv_r_Filter_11_841529_s, 0);
    SW_Filter_TD_11934588(tbl_SerializeFromObject_TD_12265154_input, tbl_Filter_TD_11934588_output);
    gettimeofday(&tv_r_Filter_11_841529_e, 0);

    struct timeval tv_r_Filter_11_70320_s, tv_r_Filter_11_70320_e;
    gettimeofday(&tv_r_Filter_11_70320_s, 0);
    SW_Filter_TD_11251725(tbl_SerializeFromObject_TD_12945816_input, tbl_Filter_TD_11251725_output);
    gettimeofday(&tv_r_Filter_11_70320_e, 0);

    struct timeval tv_r_Filter_10_319851_s, tv_r_Filter_10_319851_e;
    gettimeofday(&tv_r_Filter_10_319851_s, 0);
    SW_Filter_TD_10518720(tbl_SerializeFromObject_TD_11874896_input, tbl_Filter_TD_10518720_output);
    gettimeofday(&tv_r_Filter_10_319851_e, 0);

    struct timeval tv_r_JOIN_INNER_10_228187_s, tv_r_JOIN_INNER_10_228187_e;
    gettimeofday(&tv_r_JOIN_INNER_10_228187_s, 0);
    SW_JOIN_INNER_TD_10229451(tbl_Filter_TD_11251725_output, tbl_Filter_TD_11934588_output, tbl_JOIN_INNER_TD_10229451_output);
    gettimeofday(&tv_r_JOIN_INNER_10_228187_e, 0);

    struct timeval tv_r_Filter_9_931714_s, tv_r_Filter_9_931714_e;
    gettimeofday(&tv_r_Filter_9_931714_s, 0);
    SW_Filter_TD_953843(tbl_SerializeFromObject_TD_1037731_input, tbl_Filter_TD_953843_output);
    gettimeofday(&tv_r_Filter_9_931714_e, 0);

    struct timeval tv_r_JOIN_INNER_9_959746_s, tv_r_JOIN_INNER_9_959746_e;
    gettimeofday(&tv_r_JOIN_INNER_9_959746_s, 0);
    SW_JOIN_INNER_TD_9673418(tbl_JOIN_INNER_TD_10229451_output, tbl_Filter_TD_10518720_output, tbl_JOIN_INNER_TD_9673418_output);
    gettimeofday(&tv_r_JOIN_INNER_9_959746_e, 0);

    struct timeval tv_r_Filter_8_784075_s, tv_r_Filter_8_784075_e;
    gettimeofday(&tv_r_Filter_8_784075_s, 0);
    SW_Filter_TD_8116600(tbl_SerializeFromObject_TD_9857128_input, tbl_Filter_TD_8116600_output);
    gettimeofday(&tv_r_Filter_8_784075_e, 0);

    struct timeval tv_r_JOIN_INNER_8_375060_s, tv_r_JOIN_INNER_8_375060_e;
    gettimeofday(&tv_r_JOIN_INNER_8_375060_s, 0);
    SW_JOIN_INNER_TD_8284305(tbl_JOIN_INNER_TD_9673418_output, tbl_Filter_TD_953843_output, tbl_JOIN_INNER_TD_8284305_output);
    gettimeofday(&tv_r_JOIN_INNER_8_375060_e, 0);

    struct timeval tv_r_Filter_7_878334_s, tv_r_Filter_7_878334_e;
    gettimeofday(&tv_r_Filter_7_878334_s, 0);
    SW_Filter_TD_798654(tbl_SerializeFromObject_TD_8126024_input, tbl_Filter_TD_798654_output);
    gettimeofday(&tv_r_Filter_7_878334_e, 0);

    struct timeval tv_r_JOIN_INNER_7_774397_s, tv_r_JOIN_INNER_7_774397_e;
    gettimeofday(&tv_r_JOIN_INNER_7_774397_s, 0);
    SW_JOIN_INNER_TD_7216305(tbl_JOIN_INNER_TD_8284305_output, tbl_Filter_TD_8116600_output, tbl_JOIN_INNER_TD_7216305_output);
    gettimeofday(&tv_r_JOIN_INNER_7_774397_e, 0);

    struct timeval tv_r_Filter_6_788817_s, tv_r_Filter_6_788817_e;
    gettimeofday(&tv_r_Filter_6_788817_s, 0);
    SW_Filter_TD_6658751(tbl_SerializeFromObject_TD_7631876_input, tbl_Filter_TD_6658751_output);
    gettimeofday(&tv_r_Filter_6_788817_e, 0);

    struct timeval tv_r_JOIN_INNER_6_298872_s, tv_r_JOIN_INNER_6_298872_e;
    gettimeofday(&tv_r_JOIN_INNER_6_298872_s, 0);
    SW_JOIN_INNER_TD_6154765(tbl_JOIN_INNER_TD_7216305_output, tbl_Filter_TD_798654_output, tbl_JOIN_INNER_TD_6154765_output);
    gettimeofday(&tv_r_JOIN_INNER_6_298872_e, 0);

    struct timeval tv_r_JOIN_INNER_5_329404_s, tv_r_JOIN_INNER_5_329404_e;
    gettimeofday(&tv_r_JOIN_INNER_5_329404_s, 0);
    SW_JOIN_INNER_TD_5377019(tbl_JOIN_INNER_TD_6154765_output, tbl_Filter_TD_6658751_output, tbl_JOIN_INNER_TD_5377019_output);
    gettimeofday(&tv_r_JOIN_INNER_5_329404_e, 0);

    struct timeval tv_r_Expand_4_931473_s, tv_r_Expand_4_931473_e;
    gettimeofday(&tv_r_Expand_4_931473_s, 0);
    SW_Expand_TD_4554391(tbl_JOIN_INNER_TD_5377019_output, tbl_Expand_TD_4554391_output);
    gettimeofday(&tv_r_Expand_4_931473_e, 0);

    struct timeval tv_r_Aggregate_3_90209_s, tv_r_Aggregate_3_90209_e;
    gettimeofday(&tv_r_Aggregate_3_90209_s, 0);
    SW_Aggregate_TD_3880369(tbl_Expand_TD_4554391_output, tbl_Aggregate_TD_3880369_output);
    gettimeofday(&tv_r_Aggregate_3_90209_e, 0);

    struct timeval tv_r_Sort_2_913849_s, tv_r_Sort_2_913849_e;
    gettimeofday(&tv_r_Sort_2_913849_s, 0);
    SW_Sort_TD_2316759(tbl_Aggregate_TD_3880369_output, tbl_Sort_TD_2316759_output);
    gettimeofday(&tv_r_Sort_2_913849_e, 0);

    struct timeval tv_r_LocalLimit_1_417099_s, tv_r_LocalLimit_1_417099_e;
    gettimeofday(&tv_r_LocalLimit_1_417099_s, 0);
    SW_LocalLimit_TD_1333161(tbl_Sort_TD_2316759_output, tbl_LocalLimit_TD_1333161_output);
    gettimeofday(&tv_r_LocalLimit_1_417099_e, 0);

    struct timeval tv_r_GlobalLimit_0_953417_s, tv_r_GlobalLimit_0_953417_e;
    gettimeofday(&tv_r_GlobalLimit_0_953417_s, 0);
    SW_GlobalLimit_TD_0107586(tbl_LocalLimit_TD_1333161_output, tbl_GlobalLimit_TD_0107586_output);
    gettimeofday(&tv_r_GlobalLimit_0_953417_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_841529_s, &tv_r_Filter_11_841529_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12265154_input: " << tbl_SerializeFromObject_TD_12265154_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_70320_s, &tv_r_Filter_11_70320_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12945816_input: " << tbl_SerializeFromObject_TD_12945816_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_319851_s, &tv_r_Filter_10_319851_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11874896_input: " << tbl_SerializeFromObject_TD_11874896_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_228187_s, &tv_r_JOIN_INNER_10_228187_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11251725_output: " << tbl_Filter_TD_11251725_output.getNumRow() << " " << "tbl_Filter_TD_11934588_output: " << tbl_Filter_TD_11934588_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_931714_s, &tv_r_Filter_9_931714_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1037731_input: " << tbl_SerializeFromObject_TD_1037731_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_959746_s, &tv_r_JOIN_INNER_9_959746_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10229451_output: " << tbl_JOIN_INNER_TD_10229451_output.getNumRow() << " " << "tbl_Filter_TD_10518720_output: " << tbl_Filter_TD_10518720_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_784075_s, &tv_r_Filter_8_784075_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9857128_input: " << tbl_SerializeFromObject_TD_9857128_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_375060_s, &tv_r_JOIN_INNER_8_375060_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9673418_output: " << tbl_JOIN_INNER_TD_9673418_output.getNumRow() << " " << "tbl_Filter_TD_953843_output: " << tbl_Filter_TD_953843_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_878334_s, &tv_r_Filter_7_878334_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8126024_input: " << tbl_SerializeFromObject_TD_8126024_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_774397_s, &tv_r_JOIN_INNER_7_774397_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8284305_output: " << tbl_JOIN_INNER_TD_8284305_output.getNumRow() << " " << "tbl_Filter_TD_8116600_output: " << tbl_Filter_TD_8116600_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_788817_s, &tv_r_Filter_6_788817_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7631876_input: " << tbl_SerializeFromObject_TD_7631876_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_298872_s, &tv_r_JOIN_INNER_6_298872_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7216305_output: " << tbl_JOIN_INNER_TD_7216305_output.getNumRow() << " " << "tbl_Filter_TD_798654_output: " << tbl_Filter_TD_798654_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_329404_s, &tv_r_JOIN_INNER_5_329404_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6154765_output: " << tbl_JOIN_INNER_TD_6154765_output.getNumRow() << " " << "tbl_Filter_TD_6658751_output: " << tbl_Filter_TD_6658751_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_931473_s, &tv_r_Expand_4_931473_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5377019_output: " << tbl_JOIN_INNER_TD_5377019_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_90209_s, &tv_r_Aggregate_3_90209_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4554391_output: " << tbl_Expand_TD_4554391_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_913849_s, &tv_r_Sort_2_913849_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3880369_output: " << tbl_Aggregate_TD_3880369_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_417099_s, &tv_r_LocalLimit_1_417099_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2316759_output: " << tbl_Sort_TD_2316759_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_953417_s, &tv_r_GlobalLimit_0_953417_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1333161_output: " << tbl_LocalLimit_TD_1333161_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.9826267 * 1000 << "ms" << std::endl; 
    return 0; 
}
