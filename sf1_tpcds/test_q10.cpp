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
    Table tbl_GlobalLimit_TD_0925461_output("tbl_GlobalLimit_TD_0925461_output", 6100000, 14, "");
    tbl_GlobalLimit_TD_0925461_output.allocateHost();
    Table tbl_LocalLimit_TD_1642505_output("tbl_LocalLimit_TD_1642505_output", 6100000, 14, "");
    tbl_LocalLimit_TD_1642505_output.allocateHost();
    Table tbl_Sort_TD_2614205_output("tbl_Sort_TD_2614205_output", 6100000, 14, "");
    tbl_Sort_TD_2614205_output.allocateHost();
    Table tbl_Aggregate_TD_3565576_output("tbl_Aggregate_TD_3565576_output", 6100000, 14, "");
    tbl_Aggregate_TD_3565576_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4463414_output("tbl_JOIN_INNER_TD_4463414_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4463414_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5148695_output("tbl_JOIN_INNER_TD_5148695_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5148695_output.allocateHost();
    Table tbl_Filter_TD_560259_output("tbl_Filter_TD_560259_output", 6100000, 9, "");
    tbl_Filter_TD_560259_output.allocateHost();
    Table tbl_Filter_TD_6428178_output("tbl_Filter_TD_6428178_output", 6100000, 2, "");
    tbl_Filter_TD_6428178_output.allocateHost();
    Table tbl_Filter_TD_6320906_output("tbl_Filter_TD_6320906_output", 6100000, 1, "");
    tbl_Filter_TD_6320906_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6781528_input;
    tbl_SerializeFromObject_TD_6781528_input = Table("customer_demographics", customer_demographics_n, 9, in_dir, "orc");
    tbl_SerializeFromObject_TD_6781528_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_6781528_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6781528_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6781528_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6781528_input.addCol("cd_purchase_estimate", 4);
    tbl_SerializeFromObject_TD_6781528_input.addCol("cd_credit_rating", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6781528_input.addCol("cd_dep_count", 4);
    tbl_SerializeFromObject_TD_6781528_input.addCol("cd_dep_employed_count", 4);
    tbl_SerializeFromObject_TD_6781528_input.addCol("cd_dep_college_count", 4);
    tbl_SerializeFromObject_TD_6781528_input.allocateHost();
    tbl_SerializeFromObject_TD_6781528_input.loadHost();
    Table tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output("tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7310343_input;
    tbl_SerializeFromObject_TD_7310343_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7310343_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_7310343_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7310343_input.allocateHost();
    tbl_SerializeFromObject_TD_7310343_input.loadHost();
    Table tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output("tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8261332_output("tbl_JOIN_INNER_TD_8261332_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_8261332_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_9978870_output("tbl_JOIN_LEFTSEMI_TD_9978870_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_9978870_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9977278_output("tbl_JOIN_INNER_TD_9977278_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9977278_output.allocateHost();
    Table tbl_Filter_TD_9201270_output("tbl_Filter_TD_9201270_output", 6100000, 2, "");
    tbl_Filter_TD_9201270_output.allocateHost();
    Table tbl_Filter_TD_9255422_output("tbl_Filter_TD_9255422_output", 6100000, 1, "");
    tbl_Filter_TD_9255422_output.allocateHost();
    Table tbl_Filter_TD_10164186_output("tbl_Filter_TD_10164186_output", 6100000, 3, "");
    tbl_Filter_TD_10164186_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10439456_output("tbl_JOIN_INNER_TD_10439456_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_10439456_output.allocateHost();
    Table tbl_Filter_TD_10767661_output("tbl_Filter_TD_10767661_output", 6100000, 2, "");
    tbl_Filter_TD_10767661_output.allocateHost();
    Table tbl_Filter_TD_10689630_output("tbl_Filter_TD_10689630_output", 6100000, 1, "");
    tbl_Filter_TD_10689630_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10963132_input;
    tbl_SerializeFromObject_TD_10963132_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10963132_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10963132_input.addCol("cs_ship_customer_sk", 4);
    tbl_SerializeFromObject_TD_10963132_input.allocateHost();
    tbl_SerializeFromObject_TD_10963132_input.loadHost();
    Table tbl_SerializeFromObject_TD_10910729_input;
    tbl_SerializeFromObject_TD_10910729_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10910729_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10910729_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10910729_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10910729_input.allocateHost();
    tbl_SerializeFromObject_TD_10910729_input.loadHost();
    Table tbl_SerializeFromObject_TD_1187070_input;
    tbl_SerializeFromObject_TD_1187070_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1187070_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_1187070_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_1187070_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_1187070_input.allocateHost();
    tbl_SerializeFromObject_TD_1187070_input.loadHost();
    Table tbl_Filter_TD_11773973_output("tbl_Filter_TD_11773973_output", 6100000, 2, "");
    tbl_Filter_TD_11773973_output.allocateHost();
    Table tbl_Filter_TD_1122637_output("tbl_Filter_TD_1122637_output", 6100000, 1, "");
    tbl_Filter_TD_1122637_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1127202_input;
    tbl_SerializeFromObject_TD_1127202_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1127202_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1127202_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_1127202_input.allocateHost();
    tbl_SerializeFromObject_TD_1127202_input.loadHost();
    Table tbl_SerializeFromObject_TD_11650475_input;
    tbl_SerializeFromObject_TD_11650475_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11650475_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11650475_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11650475_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11650475_input.allocateHost();
    tbl_SerializeFromObject_TD_11650475_input.loadHost();
    Table tbl_SerializeFromObject_TD_12761392_input;
    tbl_SerializeFromObject_TD_12761392_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12761392_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12761392_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12761392_input.allocateHost();
    tbl_SerializeFromObject_TD_12761392_input.loadHost();
    Table tbl_SerializeFromObject_TD_12993833_input;
    tbl_SerializeFromObject_TD_12993833_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12993833_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12993833_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12993833_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12993833_input.allocateHost();
    tbl_SerializeFromObject_TD_12993833_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_760411_s, tv_r_Filter_11_760411_e;
    gettimeofday(&tv_r_Filter_11_760411_s, 0);
    SW_Filter_TD_1122637(tbl_SerializeFromObject_TD_12993833_input, tbl_Filter_TD_1122637_output);
    gettimeofday(&tv_r_Filter_11_760411_e, 0);

    struct timeval tv_r_Filter_11_197130_s, tv_r_Filter_11_197130_e;
    gettimeofday(&tv_r_Filter_11_197130_s, 0);
    SW_Filter_TD_11773973(tbl_SerializeFromObject_TD_12761392_input, tbl_Filter_TD_11773973_output);
    gettimeofday(&tv_r_Filter_11_197130_e, 0);

    struct timeval tv_r_Filter_10_823532_s, tv_r_Filter_10_823532_e;
    gettimeofday(&tv_r_Filter_10_823532_s, 0);
    SW_Filter_TD_10689630(tbl_SerializeFromObject_TD_11650475_input, tbl_Filter_TD_10689630_output);
    gettimeofday(&tv_r_Filter_10_823532_e, 0);

    struct timeval tv_r_Filter_10_353638_s, tv_r_Filter_10_353638_e;
    gettimeofday(&tv_r_Filter_10_353638_s, 0);
    SW_Filter_TD_10767661(tbl_SerializeFromObject_TD_1127202_input, tbl_Filter_TD_10767661_output);
    gettimeofday(&tv_r_Filter_10_353638_e, 0);

    struct timeval tv_r_JOIN_INNER_10_642092_s, tv_r_JOIN_INNER_10_642092_e;
    gettimeofday(&tv_r_JOIN_INNER_10_642092_s, 0);
    SW_JOIN_INNER_TD_10439456(tbl_Filter_TD_11773973_output, tbl_Filter_TD_1122637_output, tbl_JOIN_INNER_TD_10439456_output);
    gettimeofday(&tv_r_JOIN_INNER_10_642092_e, 0);

    struct timeval tv_r_Filter_10_7735_s, tv_r_Filter_10_7735_e;
    gettimeofday(&tv_r_Filter_10_7735_s, 0);
    SW_Filter_TD_10164186(tbl_SerializeFromObject_TD_1187070_input, tbl_Filter_TD_10164186_output);
    gettimeofday(&tv_r_Filter_10_7735_e, 0);

    struct timeval tv_r_Filter_9_756018_s, tv_r_Filter_9_756018_e;
    gettimeofday(&tv_r_Filter_9_756018_s, 0);
    SW_Filter_TD_9255422(tbl_SerializeFromObject_TD_10910729_input, tbl_Filter_TD_9255422_output);
    gettimeofday(&tv_r_Filter_9_756018_e, 0);

    struct timeval tv_r_Filter_9_431159_s, tv_r_Filter_9_431159_e;
    gettimeofday(&tv_r_Filter_9_431159_s, 0);
    SW_Filter_TD_9201270(tbl_SerializeFromObject_TD_10963132_input, tbl_Filter_TD_9201270_output);
    gettimeofday(&tv_r_Filter_9_431159_e, 0);

    struct timeval tv_r_JOIN_INNER_9_227022_s, tv_r_JOIN_INNER_9_227022_e;
    gettimeofday(&tv_r_JOIN_INNER_9_227022_s, 0);
    SW_JOIN_INNER_TD_9977278(tbl_Filter_TD_10767661_output, tbl_Filter_TD_10689630_output, tbl_JOIN_INNER_TD_9977278_output);
    gettimeofday(&tv_r_JOIN_INNER_9_227022_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_985125_s, tv_r_JOIN_LEFTSEMI_9_985125_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_985125_s, 0);
    SW_JOIN_LEFTSEMI_TD_9978870(tbl_Filter_TD_10164186_output, tbl_JOIN_INNER_TD_10439456_output, tbl_JOIN_LEFTSEMI_TD_9978870_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_985125_e, 0);

    struct timeval tv_r_JOIN_INNER_8_203548_s, tv_r_JOIN_INNER_8_203548_e;
    gettimeofday(&tv_r_JOIN_INNER_8_203548_s, 0);
    SW_JOIN_INNER_TD_8261332(tbl_Filter_TD_9201270_output, tbl_Filter_TD_9255422_output, tbl_JOIN_INNER_TD_8261332_output);
    gettimeofday(&tv_r_JOIN_INNER_8_203548_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOINEXISTS10345_8_586764_s, tv_r_JOIN_EXISTENCEJOINEXISTS10345_8_586764_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOINEXISTS10345_8_586764_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670(tbl_JOIN_LEFTSEMI_TD_9978870_output, tbl_JOIN_INNER_TD_9977278_output, tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOINEXISTS10345_8_586764_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOINEXISTS10346_7_651250_s, tv_r_JOIN_EXISTENCEJOINEXISTS10346_7_651250_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOINEXISTS10346_7_651250_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529(tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output, tbl_JOIN_INNER_TD_8261332_output, tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOINEXISTS10346_7_651250_e, 0);

    struct timeval tv_r_Filter_6_383295_s, tv_r_Filter_6_383295_e;
    gettimeofday(&tv_r_Filter_6_383295_s, 0);
    SW_Filter_TD_6320906(tbl_SerializeFromObject_TD_7310343_input, tbl_Filter_TD_6320906_output);
    gettimeofday(&tv_r_Filter_6_383295_e, 0);

    struct timeval tv_r_Filter_6_963830_s, tv_r_Filter_6_963830_e;
    gettimeofday(&tv_r_Filter_6_963830_s, 0);
    SW_Filter_TD_6428178(tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output, tbl_Filter_TD_6428178_output);
    gettimeofday(&tv_r_Filter_6_963830_e, 0);

    struct timeval tv_r_Filter_5_503503_s, tv_r_Filter_5_503503_e;
    gettimeofday(&tv_r_Filter_5_503503_s, 0);
    SW_Filter_TD_560259(tbl_SerializeFromObject_TD_6781528_input, tbl_Filter_TD_560259_output);
    gettimeofday(&tv_r_Filter_5_503503_e, 0);

    struct timeval tv_r_JOIN_INNER_5_795378_s, tv_r_JOIN_INNER_5_795378_e;
    gettimeofday(&tv_r_JOIN_INNER_5_795378_s, 0);
    SW_JOIN_INNER_TD_5148695(tbl_Filter_TD_6428178_output, tbl_Filter_TD_6320906_output, tbl_JOIN_INNER_TD_5148695_output);
    gettimeofday(&tv_r_JOIN_INNER_5_795378_e, 0);

    struct timeval tv_r_JOIN_INNER_4_787836_s, tv_r_JOIN_INNER_4_787836_e;
    gettimeofday(&tv_r_JOIN_INNER_4_787836_s, 0);
    SW_JOIN_INNER_TD_4463414(tbl_JOIN_INNER_TD_5148695_output, tbl_Filter_TD_560259_output, tbl_JOIN_INNER_TD_4463414_output);
    gettimeofday(&tv_r_JOIN_INNER_4_787836_e, 0);

    struct timeval tv_r_Aggregate_3_347002_s, tv_r_Aggregate_3_347002_e;
    gettimeofday(&tv_r_Aggregate_3_347002_s, 0);
    SW_Aggregate_TD_3565576(tbl_JOIN_INNER_TD_4463414_output, tbl_Aggregate_TD_3565576_output);
    gettimeofday(&tv_r_Aggregate_3_347002_e, 0);

    struct timeval tv_r_Sort_2_137765_s, tv_r_Sort_2_137765_e;
    gettimeofday(&tv_r_Sort_2_137765_s, 0);
    SW_Sort_TD_2614205(tbl_Aggregate_TD_3565576_output, tbl_Sort_TD_2614205_output);
    gettimeofday(&tv_r_Sort_2_137765_e, 0);

    struct timeval tv_r_LocalLimit_1_487931_s, tv_r_LocalLimit_1_487931_e;
    gettimeofday(&tv_r_LocalLimit_1_487931_s, 0);
    SW_LocalLimit_TD_1642505(tbl_Sort_TD_2614205_output, tbl_LocalLimit_TD_1642505_output);
    gettimeofday(&tv_r_LocalLimit_1_487931_e, 0);

    struct timeval tv_r_GlobalLimit_0_13184_s, tv_r_GlobalLimit_0_13184_e;
    gettimeofday(&tv_r_GlobalLimit_0_13184_s, 0);
    SW_GlobalLimit_TD_0925461(tbl_LocalLimit_TD_1642505_output, tbl_GlobalLimit_TD_0925461_output);
    gettimeofday(&tv_r_GlobalLimit_0_13184_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_760411_s, &tv_r_Filter_11_760411_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12993833_input: " << tbl_SerializeFromObject_TD_12993833_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_197130_s, &tv_r_Filter_11_197130_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12761392_input: " << tbl_SerializeFromObject_TD_12761392_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_823532_s, &tv_r_Filter_10_823532_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11650475_input: " << tbl_SerializeFromObject_TD_11650475_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_353638_s, &tv_r_Filter_10_353638_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1127202_input: " << tbl_SerializeFromObject_TD_1127202_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_642092_s, &tv_r_JOIN_INNER_10_642092_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11773973_output: " << tbl_Filter_TD_11773973_output.getNumRow() << " " << "tbl_Filter_TD_1122637_output: " << tbl_Filter_TD_1122637_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_7735_s, &tv_r_Filter_10_7735_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1187070_input: " << tbl_SerializeFromObject_TD_1187070_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_756018_s, &tv_r_Filter_9_756018_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10910729_input: " << tbl_SerializeFromObject_TD_10910729_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_431159_s, &tv_r_Filter_9_431159_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10963132_input: " << tbl_SerializeFromObject_TD_10963132_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_227022_s, &tv_r_JOIN_INNER_9_227022_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10767661_output: " << tbl_Filter_TD_10767661_output.getNumRow() << " " << "tbl_Filter_TD_10689630_output: " << tbl_Filter_TD_10689630_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_985125_s, &tv_r_JOIN_LEFTSEMI_9_985125_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10164186_output: " << tbl_Filter_TD_10164186_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_10439456_output: " << tbl_JOIN_INNER_TD_10439456_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_203548_s, &tv_r_JOIN_INNER_8_203548_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9201270_output: " << tbl_Filter_TD_9201270_output.getNumRow() << " " << "tbl_Filter_TD_9255422_output: " << tbl_Filter_TD_9255422_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOINEXISTS10345_8: " << tvdiff(&tv_r_JOIN_EXISTENCEJOINEXISTS10345_8_586764_s, &tv_r_JOIN_EXISTENCEJOINEXISTS10345_8_586764_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_9978870_output: " << tbl_JOIN_LEFTSEMI_TD_9978870_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_9977278_output: " << tbl_JOIN_INNER_TD_9977278_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOINEXISTS10346_7: " << tvdiff(&tv_r_JOIN_EXISTENCEJOINEXISTS10346_7_651250_s, &tv_r_JOIN_EXISTENCEJOINEXISTS10346_7_651250_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output: " << tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_8261332_output: " << tbl_JOIN_INNER_TD_8261332_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_383295_s, &tv_r_Filter_6_383295_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7310343_input: " << tbl_SerializeFromObject_TD_7310343_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_963830_s, &tv_r_Filter_6_963830_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output: " << tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_503503_s, &tv_r_Filter_5_503503_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6781528_input: " << tbl_SerializeFromObject_TD_6781528_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_795378_s, &tv_r_JOIN_INNER_5_795378_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6428178_output: " << tbl_Filter_TD_6428178_output.getNumRow() << " " << "tbl_Filter_TD_6320906_output: " << tbl_Filter_TD_6320906_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_787836_s, &tv_r_JOIN_INNER_4_787836_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5148695_output: " << tbl_JOIN_INNER_TD_5148695_output.getNumRow() << " " << "tbl_Filter_TD_560259_output: " << tbl_Filter_TD_560259_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_347002_s, &tv_r_Aggregate_3_347002_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4463414_output: " << tbl_JOIN_INNER_TD_4463414_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_137765_s, &tv_r_Sort_2_137765_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3565576_output: " << tbl_Aggregate_TD_3565576_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_487931_s, &tv_r_LocalLimit_1_487931_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2614205_output: " << tbl_Sort_TD_2614205_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_13184_s, &tv_r_GlobalLimit_0_13184_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1642505_output: " << tbl_LocalLimit_TD_1642505_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.7666354 * 1000 << "ms" << std::endl; 
    return 0; 
}
