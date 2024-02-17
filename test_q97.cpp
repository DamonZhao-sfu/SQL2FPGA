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

#include "cfgFunc_q97.hpp" 
#include "q97.hpp" 

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
    std::cout << "NOTE:running query #97\n."; 
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
    Table tbl_Aggregate_TD_0754_output("tbl_Aggregate_TD_0754_output", 6100000, 3, "");
    tbl_Aggregate_TD_0754_output.allocateHost();
    Table tbl_JOIN_FULLOUTER_TD_1616_output("tbl_JOIN_FULLOUTER_TD_1616_output", 6100000, 2, "");
    tbl_JOIN_FULLOUTER_TD_1616_output.allocateHost();
    Table tbl_Aggregate_TD_2857_output("tbl_Aggregate_TD_2857_output", 6100000, 2, "");
    tbl_Aggregate_TD_2857_output.allocateHost();
    Table tbl_Aggregate_TD_2467_output("tbl_Aggregate_TD_2467_output", 6100000, 2, "");
    tbl_Aggregate_TD_2467_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3314_output("tbl_JOIN_INNER_TD_3314_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3314_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3485_output("tbl_JOIN_INNER_TD_3485_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3485_output.allocateHost();
    Table tbl_Filter_TD_4373_output("tbl_Filter_TD_4373_output", 6100000, 3, "");
    tbl_Filter_TD_4373_output.allocateHost();
    Table tbl_Filter_TD_4229_output("tbl_Filter_TD_4229_output", 6100000, 1, "");
    tbl_Filter_TD_4229_output.allocateHost();
    Table tbl_Filter_TD_4479_output("tbl_Filter_TD_4479_output", 6100000, 3, "");
    tbl_Filter_TD_4479_output.allocateHost();
    Table tbl_Filter_TD_4889_output("tbl_Filter_TD_4889_output", 6100000, 1, "");
    tbl_Filter_TD_4889_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5170_input;
    tbl_SerializeFromObject_TD_5170_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5170_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5170_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_5170_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_5170_input.allocateHost();
    tbl_SerializeFromObject_TD_5170_input.loadHost();
    Table tbl_SerializeFromObject_TD_5650_input;
    tbl_SerializeFromObject_TD_5650_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5650_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5650_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_5650_input.allocateHost();
    tbl_SerializeFromObject_TD_5650_input.loadHost();
    Table tbl_SerializeFromObject_TD_527_input;
    tbl_SerializeFromObject_TD_527_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_527_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_527_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_527_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_527_input.allocateHost();
    tbl_SerializeFromObject_TD_527_input.loadHost();
    Table tbl_SerializeFromObject_TD_5195_input;
    tbl_SerializeFromObject_TD_5195_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5195_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5195_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_5195_input.allocateHost();
    tbl_SerializeFromObject_TD_5195_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_969910_s, tv_r_Filter_4_969910_e;
    gettimeofday(&tv_r_Filter_4_969910_s, 0);
    SW_Filter_TD_4889(tbl_SerializeFromObject_TD_5195_input, tbl_Filter_TD_4889_output);
    gettimeofday(&tv_r_Filter_4_969910_e, 0);

    struct timeval tv_r_Filter_4_468440_s, tv_r_Filter_4_468440_e;
    gettimeofday(&tv_r_Filter_4_468440_s, 0);
    SW_Filter_TD_4479(tbl_SerializeFromObject_TD_527_input, tbl_Filter_TD_4479_output);
    gettimeofday(&tv_r_Filter_4_468440_e, 0);

    struct timeval tv_r_Filter_4_630317_s, tv_r_Filter_4_630317_e;
    gettimeofday(&tv_r_Filter_4_630317_s, 0);
    SW_Filter_TD_4229(tbl_SerializeFromObject_TD_5650_input, tbl_Filter_TD_4229_output);
    gettimeofday(&tv_r_Filter_4_630317_e, 0);

    struct timeval tv_r_Filter_4_109663_s, tv_r_Filter_4_109663_e;
    gettimeofday(&tv_r_Filter_4_109663_s, 0);
    SW_Filter_TD_4373(tbl_SerializeFromObject_TD_5170_input, tbl_Filter_TD_4373_output);
    gettimeofday(&tv_r_Filter_4_109663_e, 0);

    struct timeval tv_r_JOIN_INNER_3_587490_s, tv_r_JOIN_INNER_3_587490_e;
    gettimeofday(&tv_r_JOIN_INNER_3_587490_s, 0);
    SW_JOIN_INNER_TD_3485(tbl_Filter_TD_4479_output, tbl_Filter_TD_4889_output, tbl_JOIN_INNER_TD_3485_output);
    gettimeofday(&tv_r_JOIN_INNER_3_587490_e, 0);

    struct timeval tv_r_JOIN_INNER_3_123900_s, tv_r_JOIN_INNER_3_123900_e;
    gettimeofday(&tv_r_JOIN_INNER_3_123900_s, 0);
    SW_JOIN_INNER_TD_3314(tbl_Filter_TD_4373_output, tbl_Filter_TD_4229_output, tbl_JOIN_INNER_TD_3314_output);
    gettimeofday(&tv_r_JOIN_INNER_3_123900_e, 0);

    struct timeval tv_r_Aggregate_2_602582_s, tv_r_Aggregate_2_602582_e;
    gettimeofday(&tv_r_Aggregate_2_602582_s, 0);
    SW_Aggregate_TD_2467(tbl_JOIN_INNER_TD_3485_output, tbl_Aggregate_TD_2467_output);
    gettimeofday(&tv_r_Aggregate_2_602582_e, 0);

    struct timeval tv_r_Aggregate_2_341668_s, tv_r_Aggregate_2_341668_e;
    gettimeofday(&tv_r_Aggregate_2_341668_s, 0);
    SW_Aggregate_TD_2857(tbl_JOIN_INNER_TD_3314_output, tbl_Aggregate_TD_2857_output);
    gettimeofday(&tv_r_Aggregate_2_341668_e, 0);

    struct timeval tv_r_JOIN_FULLOUTER_1_712123_s, tv_r_JOIN_FULLOUTER_1_712123_e;
    gettimeofday(&tv_r_JOIN_FULLOUTER_1_712123_s, 0);
    SW_JOIN_FULLOUTER_TD_1616(tbl_Aggregate_TD_2857_output, tbl_Aggregate_TD_2467_output, tbl_JOIN_FULLOUTER_TD_1616_output);
    gettimeofday(&tv_r_JOIN_FULLOUTER_1_712123_e, 0);

    struct timeval tv_r_Aggregate_0_272417_s, tv_r_Aggregate_0_272417_e;
    gettimeofday(&tv_r_Aggregate_0_272417_s, 0);
    SW_Aggregate_TD_0754(tbl_JOIN_FULLOUTER_TD_1616_output, tbl_Aggregate_TD_0754_output);
    gettimeofday(&tv_r_Aggregate_0_272417_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_969910_s, &tv_r_Filter_4_969910_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5195_input: " << tbl_SerializeFromObject_TD_5195_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_468440_s, &tv_r_Filter_4_468440_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_527_input: " << tbl_SerializeFromObject_TD_527_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_630317_s, &tv_r_Filter_4_630317_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5650_input: " << tbl_SerializeFromObject_TD_5650_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_109663_s, &tv_r_Filter_4_109663_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5170_input: " << tbl_SerializeFromObject_TD_5170_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_587490_s, &tv_r_JOIN_INNER_3_587490_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4479_output: " << tbl_Filter_TD_4479_output.getNumRow() << " " << "tbl_Filter_TD_4889_output: " << tbl_Filter_TD_4889_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_123900_s, &tv_r_JOIN_INNER_3_123900_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4373_output: " << tbl_Filter_TD_4373_output.getNumRow() << " " << "tbl_Filter_TD_4229_output: " << tbl_Filter_TD_4229_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_602582_s, &tv_r_Aggregate_2_602582_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3485_output: " << tbl_JOIN_INNER_TD_3485_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_341668_s, &tv_r_Aggregate_2_341668_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3314_output: " << tbl_JOIN_INNER_TD_3314_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_FULLOUTER_1: " << tvdiff(&tv_r_JOIN_FULLOUTER_1_712123_s, &tv_r_JOIN_FULLOUTER_1_712123_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2857_output: " << tbl_Aggregate_TD_2857_output.getNumRow() << " " << "tbl_Aggregate_TD_2467_output: " << tbl_Aggregate_TD_2467_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_272417_s, &tv_r_Aggregate_0_272417_e) / 1000.0 << " ms " 
     << "tbl_JOIN_FULLOUTER_TD_1616_output: " << tbl_JOIN_FULLOUTER_TD_1616_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.1938345 * 1000 << "ms" << std::endl; 
    return 0; 
}
