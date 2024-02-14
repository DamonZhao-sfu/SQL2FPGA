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
    Table tbl_GlobalLimit_TD_0727_output("tbl_GlobalLimit_TD_0727_output", 6100000, 14, "");
    tbl_GlobalLimit_TD_0727_output.allocateHost();
    Table tbl_LocalLimit_TD_1461_output("tbl_LocalLimit_TD_1461_output", 6100000, 14, "");
    tbl_LocalLimit_TD_1461_output.allocateHost();
    Table tbl_Sort_TD_2737_output("tbl_Sort_TD_2737_output", 6100000, 14, "");
    tbl_Sort_TD_2737_output.allocateHost();
    Table tbl_Aggregate_TD_3659_output("tbl_Aggregate_TD_3659_output", 6100000, 14, "");
    tbl_Aggregate_TD_3659_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4511_output("tbl_JOIN_INNER_TD_4511_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4511_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5478_output("tbl_JOIN_INNER_TD_5478_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5478_output.allocateHost();
    Table tbl_Filter_TD_5479_output("tbl_Filter_TD_5479_output", 6100000, 9, "");
    tbl_Filter_TD_5479_output.allocateHost();
    Table tbl_Filter_TD_6567_output("tbl_Filter_TD_6567_output", 6100000, 2, "");
    tbl_Filter_TD_6567_output.allocateHost();
    Table tbl_Filter_TD_6410_output("tbl_Filter_TD_6410_output", 6100000, 1, "");
    tbl_Filter_TD_6410_output.allocateHost();
    Table tbl_SerializeFromObject_TD_694_input;
    tbl_SerializeFromObject_TD_694_input = Table("customer_demographics", customer_demographics_n, 9, in_dir, "orc");
    tbl_SerializeFromObject_TD_694_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_694_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_694_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_694_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_694_input.addCol("cd_purchase_estimate", 4);
    tbl_SerializeFromObject_TD_694_input.addCol("cd_credit_rating", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_694_input.addCol("cd_dep_count", 4);
    tbl_SerializeFromObject_TD_694_input.addCol("cd_dep_employed_count", 4);
    tbl_SerializeFromObject_TD_694_input.addCol("cd_dep_college_count", 4);
    tbl_SerializeFromObject_TD_694_input.allocateHost();
    tbl_SerializeFromObject_TD_694_input.loadHost();
    Table tbl_JOIN_EXISTENCEJOIN(EXISTS#10320)_TD_7478_output("tbl_JOIN_EXISTENCEJOIN(EXISTS#10320)_TD_7478_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOIN(EXISTS#10320)_TD_7478_output.allocateHost();
    Table tbl_SerializeFromObject_TD_720_input;
    tbl_SerializeFromObject_TD_720_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_720_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_720_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_720_input.allocateHost();
    tbl_SerializeFromObject_TD_720_input.loadHost();
    Table tbl_JOIN_EXISTENCEJOIN(EXISTS#10319)_TD_8300_output("tbl_JOIN_EXISTENCEJOIN(EXISTS#10319)_TD_8300_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOIN(EXISTS#10319)_TD_8300_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8465_output("tbl_JOIN_INNER_TD_8465_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_8465_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_9166_output("tbl_JOIN_LEFTSEMI_TD_9166_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_9166_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9924_output("tbl_JOIN_INNER_TD_9924_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9924_output.allocateHost();
    Table tbl_Filter_TD_9274_output("tbl_Filter_TD_9274_output", 6100000, 2, "");
    tbl_Filter_TD_9274_output.allocateHost();
    Table tbl_Filter_TD_9325_output("tbl_Filter_TD_9325_output", 6100000, 1, "");
    tbl_Filter_TD_9325_output.allocateHost();
    Table tbl_Filter_TD_10777_output("tbl_Filter_TD_10777_output", 6100000, 3, "");
    tbl_Filter_TD_10777_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10601_output("tbl_JOIN_INNER_TD_10601_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_10601_output.allocateHost();
    Table tbl_Filter_TD_10522_output("tbl_Filter_TD_10522_output", 6100000, 2, "");
    tbl_Filter_TD_10522_output.allocateHost();
    Table tbl_Filter_TD_10600_output("tbl_Filter_TD_10600_output", 6100000, 1, "");
    tbl_Filter_TD_10600_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10453_input;
    tbl_SerializeFromObject_TD_10453_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10453_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10453_input.addCol("cs_ship_customer_sk", 4);
    tbl_SerializeFromObject_TD_10453_input.allocateHost();
    tbl_SerializeFromObject_TD_10453_input.loadHost();
    Table tbl_SerializeFromObject_TD_10278_input;
    tbl_SerializeFromObject_TD_10278_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10278_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10278_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10278_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10278_input.allocateHost();
    tbl_SerializeFromObject_TD_10278_input.loadHost();
    Table tbl_SerializeFromObject_TD_11185_input;
    tbl_SerializeFromObject_TD_11185_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11185_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11185_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_11185_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_11185_input.allocateHost();
    tbl_SerializeFromObject_TD_11185_input.loadHost();
    Table tbl_Filter_TD_11287_output("tbl_Filter_TD_11287_output", 6100000, 2, "");
    tbl_Filter_TD_11287_output.allocateHost();
    Table tbl_Filter_TD_11208_output("tbl_Filter_TD_11208_output", 6100000, 1, "");
    tbl_Filter_TD_11208_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11453_input;
    tbl_SerializeFromObject_TD_11453_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11453_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11453_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11453_input.allocateHost();
    tbl_SerializeFromObject_TD_11453_input.loadHost();
    Table tbl_SerializeFromObject_TD_11680_input;
    tbl_SerializeFromObject_TD_11680_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11680_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11680_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11680_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11680_input.allocateHost();
    tbl_SerializeFromObject_TD_11680_input.loadHost();
    Table tbl_SerializeFromObject_TD_12992_input;
    tbl_SerializeFromObject_TD_12992_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12992_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12992_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12992_input.allocateHost();
    tbl_SerializeFromObject_TD_12992_input.loadHost();
    Table tbl_SerializeFromObject_TD_12222_input;
    tbl_SerializeFromObject_TD_12222_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12222_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12222_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12222_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12222_input.allocateHost();
    tbl_SerializeFromObject_TD_12222_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_508743_s, tv_r_Filter_11_508743_e;
    gettimeofday(&tv_r_Filter_11_508743_s, 0);
    SW_Filter_TD_11208(tbl_SerializeFromObject_TD_12222_input, tbl_Filter_TD_11208_output);
    gettimeofday(&tv_r_Filter_11_508743_e, 0);

    struct timeval tv_r_Filter_11_441105_s, tv_r_Filter_11_441105_e;
    gettimeofday(&tv_r_Filter_11_441105_s, 0);
    SW_Filter_TD_11287(tbl_SerializeFromObject_TD_12992_input, tbl_Filter_TD_11287_output);
    gettimeofday(&tv_r_Filter_11_441105_e, 0);

    struct timeval tv_r_Filter_10_73103_s, tv_r_Filter_10_73103_e;
    gettimeofday(&tv_r_Filter_10_73103_s, 0);
    SW_Filter_TD_10600(tbl_SerializeFromObject_TD_11680_input, tbl_Filter_TD_10600_output);
    gettimeofday(&tv_r_Filter_10_73103_e, 0);

    struct timeval tv_r_Filter_10_94141_s, tv_r_Filter_10_94141_e;
    gettimeofday(&tv_r_Filter_10_94141_s, 0);
    SW_Filter_TD_10522(tbl_SerializeFromObject_TD_11453_input, tbl_Filter_TD_10522_output);
    gettimeofday(&tv_r_Filter_10_94141_e, 0);

    struct timeval tv_r_JOIN_INNER_10_863707_s, tv_r_JOIN_INNER_10_863707_e;
    gettimeofday(&tv_r_JOIN_INNER_10_863707_s, 0);
    SW_JOIN_INNER_TD_10601(tbl_Filter_TD_11287_output, tbl_Filter_TD_11208_output, tbl_JOIN_INNER_TD_10601_output);
    gettimeofday(&tv_r_JOIN_INNER_10_863707_e, 0);

    struct timeval tv_r_Filter_10_577524_s, tv_r_Filter_10_577524_e;
    gettimeofday(&tv_r_Filter_10_577524_s, 0);
    SW_Filter_TD_10777(tbl_SerializeFromObject_TD_11185_input, tbl_Filter_TD_10777_output);
    gettimeofday(&tv_r_Filter_10_577524_e, 0);

    struct timeval tv_r_Filter_9_43220_s, tv_r_Filter_9_43220_e;
    gettimeofday(&tv_r_Filter_9_43220_s, 0);
    SW_Filter_TD_9325(tbl_SerializeFromObject_TD_10278_input, tbl_Filter_TD_9325_output);
    gettimeofday(&tv_r_Filter_9_43220_e, 0);

    struct timeval tv_r_Filter_9_600673_s, tv_r_Filter_9_600673_e;
    gettimeofday(&tv_r_Filter_9_600673_s, 0);
    SW_Filter_TD_9274(tbl_SerializeFromObject_TD_10453_input, tbl_Filter_TD_9274_output);
    gettimeofday(&tv_r_Filter_9_600673_e, 0);

    struct timeval tv_r_JOIN_INNER_9_408049_s, tv_r_JOIN_INNER_9_408049_e;
    gettimeofday(&tv_r_JOIN_INNER_9_408049_s, 0);
    SW_JOIN_INNER_TD_9924(tbl_Filter_TD_10522_output, tbl_Filter_TD_10600_output, tbl_JOIN_INNER_TD_9924_output);
    gettimeofday(&tv_r_JOIN_INNER_9_408049_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_110451_s, tv_r_JOIN_LEFTSEMI_9_110451_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_110451_s, 0);
    SW_JOIN_LEFTSEMI_TD_9166(tbl_Filter_TD_10777_output, tbl_JOIN_INNER_TD_10601_output, tbl_JOIN_LEFTSEMI_TD_9166_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_110451_e, 0);

    struct timeval tv_r_JOIN_INNER_8_804411_s, tv_r_JOIN_INNER_8_804411_e;
    gettimeofday(&tv_r_JOIN_INNER_8_804411_s, 0);
    SW_JOIN_INNER_TD_8465(tbl_Filter_TD_9274_output, tbl_Filter_TD_9325_output, tbl_JOIN_INNER_TD_8465_output);
    gettimeofday(&tv_r_JOIN_INNER_8_804411_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOIN(EXISTS#10319)_8_628105_s, tv_r_JOIN_EXISTENCEJOIN(EXISTS#10319)_8_628105_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10319)_8_628105_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS10319_TD_8300(tbl_JOIN_LEFTSEMI_TD_9166_output, tbl_JOIN_INNER_TD_9924_output, tbl_JOIN_EXISTENCEJOINEXISTS10319_TD_8300_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10319)_8_628105_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOIN(EXISTS#10320)_7_525479_s, tv_r_JOIN_EXISTENCEJOIN(EXISTS#10320)_7_525479_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10320)_7_525479_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS10320_TD_7478(tbl_JOIN_EXISTENCEJOINEXISTS10319_TD_8300_output, tbl_JOIN_INNER_TD_8465_output, tbl_JOIN_EXISTENCEJOINEXISTS10320_TD_7478_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10320)_7_525479_e, 0);

    struct timeval tv_r_Filter_6_802967_s, tv_r_Filter_6_802967_e;
    gettimeofday(&tv_r_Filter_6_802967_s, 0);
    SW_Filter_TD_6410(tbl_SerializeFromObject_TD_720_input, tbl_Filter_TD_6410_output);
    gettimeofday(&tv_r_Filter_6_802967_e, 0);

    struct timeval tv_r_Filter_6_624857_s, tv_r_Filter_6_624857_e;
    gettimeofday(&tv_r_Filter_6_624857_s, 0);
    SW_Filter_TD_6567(tbl_JOIN_EXISTENCEJOINEXISTS10320_TD_7478_output, tbl_Filter_TD_6567_output);
    gettimeofday(&tv_r_Filter_6_624857_e, 0);

    struct timeval tv_r_Filter_5_592783_s, tv_r_Filter_5_592783_e;
    gettimeofday(&tv_r_Filter_5_592783_s, 0);
    SW_Filter_TD_5479(tbl_SerializeFromObject_TD_694_input, tbl_Filter_TD_5479_output);
    gettimeofday(&tv_r_Filter_5_592783_e, 0);

    struct timeval tv_r_JOIN_INNER_5_47682_s, tv_r_JOIN_INNER_5_47682_e;
    gettimeofday(&tv_r_JOIN_INNER_5_47682_s, 0);
    SW_JOIN_INNER_TD_5478(tbl_Filter_TD_6567_output, tbl_Filter_TD_6410_output, tbl_JOIN_INNER_TD_5478_output);
    gettimeofday(&tv_r_JOIN_INNER_5_47682_e, 0);

    struct timeval tv_r_JOIN_INNER_4_749286_s, tv_r_JOIN_INNER_4_749286_e;
    gettimeofday(&tv_r_JOIN_INNER_4_749286_s, 0);
    SW_JOIN_INNER_TD_4511(tbl_JOIN_INNER_TD_5478_output, tbl_Filter_TD_5479_output, tbl_JOIN_INNER_TD_4511_output);
    gettimeofday(&tv_r_JOIN_INNER_4_749286_e, 0);

    struct timeval tv_r_Aggregate_3_43371_s, tv_r_Aggregate_3_43371_e;
    gettimeofday(&tv_r_Aggregate_3_43371_s, 0);
    SW_Aggregate_TD_3659(tbl_JOIN_INNER_TD_4511_output, tbl_Aggregate_TD_3659_output);
    gettimeofday(&tv_r_Aggregate_3_43371_e, 0);

    struct timeval tv_r_Sort_2_465666_s, tv_r_Sort_2_465666_e;
    gettimeofday(&tv_r_Sort_2_465666_s, 0);
    SW_Sort_TD_2737(tbl_Aggregate_TD_3659_output, tbl_Sort_TD_2737_output);
    gettimeofday(&tv_r_Sort_2_465666_e, 0);

    struct timeval tv_r_LocalLimit_1_503406_s, tv_r_LocalLimit_1_503406_e;
    gettimeofday(&tv_r_LocalLimit_1_503406_s, 0);
    SW_LocalLimit_TD_1461(tbl_Sort_TD_2737_output, tbl_LocalLimit_TD_1461_output);
    gettimeofday(&tv_r_LocalLimit_1_503406_e, 0);

    struct timeval tv_r_GlobalLimit_0_151609_s, tv_r_GlobalLimit_0_151609_e;
    gettimeofday(&tv_r_GlobalLimit_0_151609_s, 0);
    SW_GlobalLimit_TD_0727(tbl_LocalLimit_TD_1461_output, tbl_GlobalLimit_TD_0727_output);
    gettimeofday(&tv_r_GlobalLimit_0_151609_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_508743_s, &tv_r_Filter_11_508743_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12222_input: " << tbl_SerializeFromObject_TD_12222_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_441105_s, &tv_r_Filter_11_441105_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12992_input: " << tbl_SerializeFromObject_TD_12992_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_73103_s, &tv_r_Filter_10_73103_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11680_input: " << tbl_SerializeFromObject_TD_11680_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_94141_s, &tv_r_Filter_10_94141_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11453_input: " << tbl_SerializeFromObject_TD_11453_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_863707_s, &tv_r_JOIN_INNER_10_863707_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11287_output: " << tbl_Filter_TD_11287_output.getNumRow() << " " << "tbl_Filter_TD_11208_output: " << tbl_Filter_TD_11208_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_577524_s, &tv_r_Filter_10_577524_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11185_input: " << tbl_SerializeFromObject_TD_11185_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_43220_s, &tv_r_Filter_9_43220_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10278_input: " << tbl_SerializeFromObject_TD_10278_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_600673_s, &tv_r_Filter_9_600673_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10453_input: " << tbl_SerializeFromObject_TD_10453_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_408049_s, &tv_r_JOIN_INNER_9_408049_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10522_output: " << tbl_Filter_TD_10522_output.getNumRow() << " " << "tbl_Filter_TD_10600_output: " << tbl_Filter_TD_10600_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_110451_s, &tv_r_JOIN_LEFTSEMI_9_110451_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10777_output: " << tbl_Filter_TD_10777_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_10601_output: " << tbl_JOIN_INNER_TD_10601_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_804411_s, &tv_r_JOIN_INNER_8_804411_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9274_output: " << tbl_Filter_TD_9274_output.getNumRow() << " " << "tbl_Filter_TD_9325_output: " << tbl_Filter_TD_9325_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOIN(EXISTS#10319)_8: " << tvdiff(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10319)_8_628105_s, &tv_r_JOIN_EXISTENCEJOIN(EXISTS#10319)_8_628105_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_9166_output: " << tbl_JOIN_LEFTSEMI_TD_9166_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_9924_output: " << tbl_JOIN_INNER_TD_9924_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOIN(EXISTS#10320)_7: " << tvdiff(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#10320)_7_525479_s, &tv_r_JOIN_EXISTENCEJOIN(EXISTS#10320)_7_525479_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS10319_TD_8300_output: " << tbl_JOIN_EXISTENCEJOINEXISTS10319_TD_8300_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_8465_output: " << tbl_JOIN_INNER_TD_8465_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_802967_s, &tv_r_Filter_6_802967_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_720_input: " << tbl_SerializeFromObject_TD_720_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_624857_s, &tv_r_Filter_6_624857_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS10320_TD_7478_output: " << tbl_JOIN_EXISTENCEJOINEXISTS10320_TD_7478_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_592783_s, &tv_r_Filter_5_592783_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_694_input: " << tbl_SerializeFromObject_TD_694_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_47682_s, &tv_r_JOIN_INNER_5_47682_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6567_output: " << tbl_Filter_TD_6567_output.getNumRow() << " " << "tbl_Filter_TD_6410_output: " << tbl_Filter_TD_6410_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_749286_s, &tv_r_JOIN_INNER_4_749286_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5478_output: " << tbl_JOIN_INNER_TD_5478_output.getNumRow() << " " << "tbl_Filter_TD_5479_output: " << tbl_Filter_TD_5479_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_43371_s, &tv_r_Aggregate_3_43371_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4511_output: " << tbl_JOIN_INNER_TD_4511_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_465666_s, &tv_r_Sort_2_465666_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3659_output: " << tbl_Aggregate_TD_3659_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_503406_s, &tv_r_LocalLimit_1_503406_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2737_output: " << tbl_Sort_TD_2737_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_151609_s, &tv_r_GlobalLimit_0_151609_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1461_output: " << tbl_LocalLimit_TD_1461_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.6378047 * 1000 << "ms" << std::endl; 
    return 0; 
}
