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

#include "cfgFunc_q10.hpp" 
#include "q10.hpp" 

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
    std::cout << "NOTE:running query #10\n."; 
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
    Table tbl_GlobalLimit_TD_0759_output("tbl_GlobalLimit_TD_0759_output", 6100000, 14, "");
    tbl_GlobalLimit_TD_0759_output.allocateHost();
    Table tbl_LocalLimit_TD_1271_output("tbl_LocalLimit_TD_1271_output", 6100000, 14, "");
    tbl_LocalLimit_TD_1271_output.allocateHost();
    Table tbl_Sort_TD_2965_output("tbl_Sort_TD_2965_output", 6100000, 14, "");
    tbl_Sort_TD_2965_output.allocateHost();
    Table tbl_Aggregate_TD_3288_output("tbl_Aggregate_TD_3288_output", 6100000, 14, "");
    tbl_Aggregate_TD_3288_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4518_output("tbl_JOIN_INNER_TD_4518_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4518_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5821_output("tbl_JOIN_INNER_TD_5821_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5821_output.allocateHost();
    Table tbl_Filter_TD_5307_output("tbl_Filter_TD_5307_output", 6100000, 9, "");
    tbl_Filter_TD_5307_output.allocateHost();
    Table tbl_Filter_TD_6351_output("tbl_Filter_TD_6351_output", 6100000, 2, "");
    tbl_Filter_TD_6351_output.allocateHost();
    Table tbl_Filter_TD_6250_output("tbl_Filter_TD_6250_output", 6100000, 1, "");
    tbl_Filter_TD_6250_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6653_input;
    tbl_SerializeFromObject_TD_6653_input = Table("customer_demographics", customer_demographics_n, 9, in_dir, "orc");
    tbl_SerializeFromObject_TD_6653_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_6653_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6653_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6653_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6653_input.addCol("cd_purchase_estimate", 4);
    tbl_SerializeFromObject_TD_6653_input.addCol("cd_credit_rating", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6653_input.addCol("cd_dep_count", 4);
    tbl_SerializeFromObject_TD_6653_input.addCol("cd_dep_employed_count", 4);
    tbl_SerializeFromObject_TD_6653_input.addCol("cd_dep_college_count", 4);
    tbl_SerializeFromObject_TD_6653_input.allocateHost();
    tbl_SerializeFromObject_TD_6653_input.loadHost();
    Table tbl_JOIN_EXISTENCEJOIN(EXISTS#10341)_TD_7197_output("tbl_JOIN_EXISTENCEJOIN(EXISTS#10341)_TD_7197_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOIN(EXISTS#10341)_TD_7197_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7323_input;
    tbl_SerializeFromObject_TD_7323_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7323_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_7323_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7323_input.allocateHost();
    tbl_SerializeFromObject_TD_7323_input.loadHost();
    Table tbl_JOIN_EXISTENCEJOIN(EXISTS#10340)_TD_873_output("tbl_JOIN_EXISTENCEJOIN(EXISTS#10340)_TD_873_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOIN(EXISTS#10340)_TD_873_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8235_output("tbl_JOIN_INNER_TD_8235_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_8235_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_92_output("tbl_JOIN_LEFTSEMI_TD_92_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_92_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9899_output("tbl_JOIN_INNER_TD_9899_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9899_output.allocateHost();
    Table tbl_Filter_TD_9285_output("tbl_Filter_TD_9285_output", 6100000, 2, "");
    tbl_Filter_TD_9285_output.allocateHost();
    Table tbl_Filter_TD_9434_output("tbl_Filter_TD_9434_output", 6100000, 1, "");
    tbl_Filter_TD_9434_output.allocateHost();
    Table tbl_Filter_TD_10546_output("tbl_Filter_TD_10546_output", 6100000, 3, "");
    tbl_Filter_TD_10546_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10866_output("tbl_JOIN_INNER_TD_10866_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_10866_output.allocateHost();
    Table tbl_Filter_TD_1061_output("tbl_Filter_TD_1061_output", 6100000, 2, "");
    tbl_Filter_TD_1061_output.allocateHost();
    Table tbl_Filter_TD_10738_output("tbl_Filter_TD_10738_output", 6100000, 1, "");
    tbl_Filter_TD_10738_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10773_input;
    tbl_SerializeFromObject_TD_10773_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10773_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10773_input.addCol("cs_ship_customer_sk", 4);
    tbl_SerializeFromObject_TD_10773_input.allocateHost();
    tbl_SerializeFromObject_TD_10773_input.loadHost();
    Table tbl_SerializeFromObject_TD_1047_input;
    tbl_SerializeFromObject_TD_1047_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1047_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1047_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1047_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_1047_input.allocateHost();
    tbl_SerializeFromObject_TD_1047_input.loadHost();
    Table tbl_SerializeFromObject_TD_11447_input;
    tbl_SerializeFromObject_TD_11447_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11447_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11447_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_11447_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_11447_input.allocateHost();
    tbl_SerializeFromObject_TD_11447_input.loadHost();
    Table tbl_Filter_TD_11411_output("tbl_Filter_TD_11411_output", 6100000, 2, "");
    tbl_Filter_TD_11411_output.allocateHost();
    Table tbl_Filter_TD_11158_output("tbl_Filter_TD_11158_output", 6100000, 1, "");
    tbl_Filter_TD_11158_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11269_input;
    tbl_SerializeFromObject_TD_11269_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11269_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11269_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11269_input.allocateHost();
    tbl_SerializeFromObject_TD_11269_input.loadHost();
    Table tbl_SerializeFromObject_TD_11152_input;
    tbl_SerializeFromObject_TD_11152_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11152_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11152_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11152_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11152_input.allocateHost();
    tbl_SerializeFromObject_TD_11152_input.loadHost();
    Table tbl_SerializeFromObject_TD_12174_input;
    tbl_SerializeFromObject_TD_12174_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12174_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12174_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12174_input.allocateHost();
    tbl_SerializeFromObject_TD_12174_input.loadHost();
    Table tbl_SerializeFromObject_TD_12517_input;
    tbl_SerializeFromObject_TD_12517_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12517_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12517_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12517_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12517_input.allocateHost();
    tbl_SerializeFromObject_TD_12517_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_975742_s, tv_r_Filter_11_975742_e;
    gettimeofday(&tv_r_Filter_11_975742_s, 0);
    SW_Filter_TD_11158(tbl_SerializeFromObject_TD_12517_input, tbl_Filter_TD_11158_output);
    gettimeofday(&tv_r_Filter_11_975742_e, 0);

    struct timeval tv_r_Filter_11_416836_s, tv_r_Filter_11_416836_e;
    gettimeofday(&tv_r_Filter_11_416836_s, 0);
    SW_Filter_TD_11411(tbl_SerializeFromObject_TD_12174_input, tbl_Filter_TD_11411_output);
    gettimeofday(&tv_r_Filter_11_416836_e, 0);

    struct timeval tv_r_Filter_10_246654_s, tv_r_Filter_10_246654_e;
    gettimeofday(&tv_r_Filter_10_246654_s, 0);
    SW_Filter_TD_10738(tbl_SerializeFromObject_TD_11152_input, tbl_Filter_TD_10738_output);
    gettimeofday(&tv_r_Filter_10_246654_e, 0);

    struct timeval tv_r_Filter_10_705415_s, tv_r_Filter_10_705415_e;
    gettimeofday(&tv_r_Filter_10_705415_s, 0);
    SW_Filter_TD_1061(tbl_SerializeFromObject_TD_11269_input, tbl_Filter_TD_1061_output);
    gettimeofday(&tv_r_Filter_10_705415_e, 0);

    struct timeval tv_r_JOIN_INNER_10_461590_s, tv_r_JOIN_INNER_10_461590_e;
    gettimeofday(&tv_r_JOIN_INNER_10_461590_s, 0);
    SW_JOIN_INNER_TD_10866(tbl_Filter_TD_11411_output, tbl_Filter_TD_11158_output, tbl_JOIN_INNER_TD_10866_output);
    gettimeofday(&tv_r_JOIN_INNER_10_461590_e, 0);

    struct timeval tv_r_Filter_10_356372_s, tv_r_Filter_10_356372_e;
    gettimeofday(&tv_r_Filter_10_356372_s, 0);
    SW_Filter_TD_10546(tbl_SerializeFromObject_TD_11447_input, tbl_Filter_TD_10546_output);
    gettimeofday(&tv_r_Filter_10_356372_e, 0);

    struct timeval tv_r_Filter_9_898747_s, tv_r_Filter_9_898747_e;
    gettimeofday(&tv_r_Filter_9_898747_s, 0);
    SW_Filter_TD_9434(tbl_SerializeFromObject_TD_1047_input, tbl_Filter_TD_9434_output);
    gettimeofday(&tv_r_Filter_9_898747_e, 0);

    struct timeval tv_r_Filter_9_217684_s, tv_r_Filter_9_217684_e;
    gettimeofday(&tv_r_Filter_9_217684_s, 0);
    SW_Filter_TD_9285(tbl_SerializeFromObject_TD_10773_input, tbl_Filter_TD_9285_output);
    gettimeofday(&tv_r_Filter_9_217684_e, 0);

    struct timeval tv_r_JOIN_INNER_9_201691_s, tv_r_JOIN_INNER_9_201691_e;
    gettimeofday(&tv_r_JOIN_INNER_9_201691_s, 0);
    SW_JOIN_INNER_TD_9899(tbl_Filter_TD_1061_output, tbl_Filter_TD_10738_output, tbl_JOIN_INNER_TD_9899_output);
    gettimeofday(&tv_r_JOIN_INNER_9_201691_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_810882_s, tv_r_JOIN_LEFTSEMI_9_810882_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_810882_s, 0);
    SW_JOIN_LEFTSEMI_TD_92(tbl_Filter_TD_10546_output, tbl_JOIN_INNER_TD_10866_output, tbl_JOIN_LEFTSEMI_TD_92_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_810882_e, 0);

    struct timeval tv_r_JOIN_INNER_8_548308_s, tv_r_JOIN_INNER_8_548308_e;
    gettimeofday(&tv_r_JOIN_INNER_8_548308_s, 0);
    SW_JOIN_INNER_TD_8235(tbl_Filter_TD_9285_output, tbl_Filter_TD_9434_output, tbl_JOIN_INNER_TD_8235_output);
    gettimeofday(&tv_r_JOIN_INNER_8_548308_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOIN(EXISTS#10340)_8_366695_s, tv_r_JOIN_EXISTENCEJOIN(EXISTS#10340)_8_366695_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10340)_8_366695_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873(tbl_JOIN_LEFTSEMI_TD_92_output, tbl_JOIN_INNER_TD_9899_output, tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10340)_8_366695_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOIN(EXISTS#10341)_7_45085_s, tv_r_JOIN_EXISTENCEJOIN(EXISTS#10341)_7_45085_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10341)_7_45085_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197(tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output, tbl_JOIN_INNER_TD_8235_output, tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10341)_7_45085_e, 0);

    struct timeval tv_r_Filter_6_25949_s, tv_r_Filter_6_25949_e;
    gettimeofday(&tv_r_Filter_6_25949_s, 0);
    SW_Filter_TD_6250(tbl_SerializeFromObject_TD_7323_input, tbl_Filter_TD_6250_output);
    gettimeofday(&tv_r_Filter_6_25949_e, 0);

    struct timeval tv_r_Filter_6_401120_s, tv_r_Filter_6_401120_e;
    gettimeofday(&tv_r_Filter_6_401120_s, 0);
    SW_Filter_TD_6351(tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output, tbl_Filter_TD_6351_output);
    gettimeofday(&tv_r_Filter_6_401120_e, 0);

    struct timeval tv_r_Filter_5_872715_s, tv_r_Filter_5_872715_e;
    gettimeofday(&tv_r_Filter_5_872715_s, 0);
    SW_Filter_TD_5307(tbl_SerializeFromObject_TD_6653_input, tbl_Filter_TD_5307_output);
    gettimeofday(&tv_r_Filter_5_872715_e, 0);

    struct timeval tv_r_JOIN_INNER_5_285010_s, tv_r_JOIN_INNER_5_285010_e;
    gettimeofday(&tv_r_JOIN_INNER_5_285010_s, 0);
    SW_JOIN_INNER_TD_5821(tbl_Filter_TD_6351_output, tbl_Filter_TD_6250_output, tbl_JOIN_INNER_TD_5821_output);
    gettimeofday(&tv_r_JOIN_INNER_5_285010_e, 0);

    struct timeval tv_r_JOIN_INNER_4_260249_s, tv_r_JOIN_INNER_4_260249_e;
    gettimeofday(&tv_r_JOIN_INNER_4_260249_s, 0);
    SW_JOIN_INNER_TD_4518(tbl_JOIN_INNER_TD_5821_output, tbl_Filter_TD_5307_output, tbl_JOIN_INNER_TD_4518_output);
    gettimeofday(&tv_r_JOIN_INNER_4_260249_e, 0);

    struct timeval tv_r_Aggregate_3_51713_s, tv_r_Aggregate_3_51713_e;
    gettimeofday(&tv_r_Aggregate_3_51713_s, 0);
    SW_Aggregate_TD_3288(tbl_JOIN_INNER_TD_4518_output, tbl_Aggregate_TD_3288_output);
    gettimeofday(&tv_r_Aggregate_3_51713_e, 0);

    struct timeval tv_r_Sort_2_381236_s, tv_r_Sort_2_381236_e;
    gettimeofday(&tv_r_Sort_2_381236_s, 0);
    SW_Sort_TD_2965(tbl_Aggregate_TD_3288_output, tbl_Sort_TD_2965_output);
    gettimeofday(&tv_r_Sort_2_381236_e, 0);

    struct timeval tv_r_LocalLimit_1_988202_s, tv_r_LocalLimit_1_988202_e;
    gettimeofday(&tv_r_LocalLimit_1_988202_s, 0);
    SW_LocalLimit_TD_1271(tbl_Sort_TD_2965_output, tbl_LocalLimit_TD_1271_output);
    gettimeofday(&tv_r_LocalLimit_1_988202_e, 0);

    struct timeval tv_r_GlobalLimit_0_294719_s, tv_r_GlobalLimit_0_294719_e;
    gettimeofday(&tv_r_GlobalLimit_0_294719_s, 0);
    SW_GlobalLimit_TD_0759(tbl_LocalLimit_TD_1271_output, tbl_GlobalLimit_TD_0759_output);
    gettimeofday(&tv_r_GlobalLimit_0_294719_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_975742_s, &tv_r_Filter_11_975742_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12517_input: " << tbl_SerializeFromObject_TD_12517_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_416836_s, &tv_r_Filter_11_416836_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12174_input: " << tbl_SerializeFromObject_TD_12174_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_246654_s, &tv_r_Filter_10_246654_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11152_input: " << tbl_SerializeFromObject_TD_11152_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_705415_s, &tv_r_Filter_10_705415_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11269_input: " << tbl_SerializeFromObject_TD_11269_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_461590_s, &tv_r_JOIN_INNER_10_461590_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11411_output: " << tbl_Filter_TD_11411_output.getNumRow() << " " << "tbl_Filter_TD_11158_output: " << tbl_Filter_TD_11158_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_356372_s, &tv_r_Filter_10_356372_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11447_input: " << tbl_SerializeFromObject_TD_11447_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_898747_s, &tv_r_Filter_9_898747_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1047_input: " << tbl_SerializeFromObject_TD_1047_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_217684_s, &tv_r_Filter_9_217684_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10773_input: " << tbl_SerializeFromObject_TD_10773_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_201691_s, &tv_r_JOIN_INNER_9_201691_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1061_output: " << tbl_Filter_TD_1061_output.getNumRow() << " " << "tbl_Filter_TD_10738_output: " << tbl_Filter_TD_10738_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_810882_s, &tv_r_JOIN_LEFTSEMI_9_810882_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10546_output: " << tbl_Filter_TD_10546_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_10866_output: " << tbl_JOIN_INNER_TD_10866_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_548308_s, &tv_r_JOIN_INNER_8_548308_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9285_output: " << tbl_Filter_TD_9285_output.getNumRow() << " " << "tbl_Filter_TD_9434_output: " << tbl_Filter_TD_9434_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOIN(EXISTS#10340)_8: " << tvdiff(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10340)_8_366695_s, &tv_r_JOIN_EXISTENCEJOIN(EXISTS#10340)_8_366695_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_92_output: " << tbl_JOIN_LEFTSEMI_TD_92_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_9899_output: " << tbl_JOIN_INNER_TD_9899_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOIN(EXISTS#10341)_7: " << tvdiff(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10341)_7_45085_s, &tv_r_JOIN_EXISTENCEJOIN(EXISTS#10341)_7_45085_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output: " << tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_8235_output: " << tbl_JOIN_INNER_TD_8235_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_25949_s, &tv_r_Filter_6_25949_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7323_input: " << tbl_SerializeFromObject_TD_7323_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_401120_s, &tv_r_Filter_6_401120_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output: " << tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_872715_s, &tv_r_Filter_5_872715_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6653_input: " << tbl_SerializeFromObject_TD_6653_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_285010_s, &tv_r_JOIN_INNER_5_285010_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6351_output: " << tbl_Filter_TD_6351_output.getNumRow() << " " << "tbl_Filter_TD_6250_output: " << tbl_Filter_TD_6250_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_260249_s, &tv_r_JOIN_INNER_4_260249_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5821_output: " << tbl_JOIN_INNER_TD_5821_output.getNumRow() << " " << "tbl_Filter_TD_5307_output: " << tbl_Filter_TD_5307_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_51713_s, &tv_r_Aggregate_3_51713_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4518_output: " << tbl_JOIN_INNER_TD_4518_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_381236_s, &tv_r_Sort_2_381236_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3288_output: " << tbl_Aggregate_TD_3288_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_988202_s, &tv_r_LocalLimit_1_988202_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2965_output: " << tbl_Sort_TD_2965_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_294719_s, &tv_r_GlobalLimit_0_294719_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1271_output: " << tbl_LocalLimit_TD_1271_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.837693 * 1000 << "ms" << std::endl; 
    return 0; 
}
