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

#include "cfgFunc_q67.hpp" 
#include "q67.hpp" 

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
    std::cout << "NOTE:running query #67\n."; 
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
    Table tbl_GlobalLimit_TD_032_output("tbl_GlobalLimit_TD_032_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_032_output.allocateHost();
    Table tbl_LocalLimit_TD_1639_output("tbl_LocalLimit_TD_1639_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1639_output.allocateHost();
    Table tbl_Sort_TD_2807_output("tbl_Sort_TD_2807_output", 6100000, 10, "");
    tbl_Sort_TD_2807_output.allocateHost();
    Table tbl_Filter_TD_3131_output("tbl_Filter_TD_3131_output", 6100000, 10, "");
    tbl_Filter_TD_3131_output.allocateHost();
    Table tbl_Window_TD_4264_output("tbl_Window_TD_4264_output", 6100000, 10, "");
    tbl_Window_TD_4264_output.allocateHost();
    Table tbl_Aggregate_TD_5114_output("tbl_Aggregate_TD_5114_output", 6100000, 9, "");
    tbl_Aggregate_TD_5114_output.allocateHost();
    Table tbl_Expand_TD_638_output("tbl_Expand_TD_638_output", 6100000, 11, "");
    tbl_Expand_TD_638_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7339_output("tbl_JOIN_INNER_TD_7339_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_7339_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8829_output("tbl_JOIN_INNER_TD_8829_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8829_output.allocateHost();
    Table tbl_Filter_TD_8847_output("tbl_Filter_TD_8847_output", 6100000, 5, "");
    tbl_Filter_TD_8847_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9958_output("tbl_JOIN_INNER_TD_9958_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9958_output.allocateHost();
    Table tbl_Filter_TD_9952_output("tbl_Filter_TD_9952_output", 6100000, 2, "");
    tbl_Filter_TD_9952_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9240_input;
    tbl_SerializeFromObject_TD_9240_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9240_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9240_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9240_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9240_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9240_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9240_input.allocateHost();
    tbl_SerializeFromObject_TD_9240_input.loadHost();
    Table tbl_Filter_TD_10840_output("tbl_Filter_TD_10840_output", 6100000, 5, "");
    tbl_Filter_TD_10840_output.allocateHost();
    Table tbl_Filter_TD_10432_output("tbl_Filter_TD_10432_output", 6100000, 4, "");
    tbl_Filter_TD_10432_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10310_input;
    tbl_SerializeFromObject_TD_10310_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10310_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10310_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10310_input.allocateHost();
    tbl_SerializeFromObject_TD_10310_input.loadHost();
    Table tbl_SerializeFromObject_TD_11318_input;
    tbl_SerializeFromObject_TD_11318_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_11318_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11318_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_11318_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11318_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_11318_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_11318_input.allocateHost();
    tbl_SerializeFromObject_TD_11318_input.loadHost();
    Table tbl_SerializeFromObject_TD_11213_input;
    tbl_SerializeFromObject_TD_11213_input = Table("date_dim", date_dim_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_11213_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11213_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11213_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11213_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_11213_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_11213_input.allocateHost();
    tbl_SerializeFromObject_TD_11213_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_797777_s, tv_r_Filter_10_797777_e;
    gettimeofday(&tv_r_Filter_10_797777_s, 0);
    SW_Filter_TD_10432(tbl_SerializeFromObject_TD_11213_input, tbl_Filter_TD_10432_output);
    gettimeofday(&tv_r_Filter_10_797777_e, 0);

    struct timeval tv_r_Filter_10_653451_s, tv_r_Filter_10_653451_e;
    gettimeofday(&tv_r_Filter_10_653451_s, 0);
    SW_Filter_TD_10840(tbl_SerializeFromObject_TD_11318_input, tbl_Filter_TD_10840_output);
    gettimeofday(&tv_r_Filter_10_653451_e, 0);

    struct timeval tv_r_Filter_9_886251_s, tv_r_Filter_9_886251_e;
    gettimeofday(&tv_r_Filter_9_886251_s, 0);
    SW_Filter_TD_9952(tbl_SerializeFromObject_TD_10310_input, tbl_Filter_TD_9952_output);
    gettimeofday(&tv_r_Filter_9_886251_e, 0);

    struct timeval tv_r_JOIN_INNER_9_9198_s, tv_r_JOIN_INNER_9_9198_e;
    gettimeofday(&tv_r_JOIN_INNER_9_9198_s, 0);
    SW_JOIN_INNER_TD_9958(tbl_Filter_TD_10840_output, tbl_Filter_TD_10432_output, tbl_JOIN_INNER_TD_9958_output);
    gettimeofday(&tv_r_JOIN_INNER_9_9198_e, 0);

    struct timeval tv_r_Filter_8_360966_s, tv_r_Filter_8_360966_e;
    gettimeofday(&tv_r_Filter_8_360966_s, 0);
    SW_Filter_TD_8847(tbl_SerializeFromObject_TD_9240_input, tbl_Filter_TD_8847_output);
    gettimeofday(&tv_r_Filter_8_360966_e, 0);

    struct timeval tv_r_JOIN_INNER_8_876504_s, tv_r_JOIN_INNER_8_876504_e;
    gettimeofday(&tv_r_JOIN_INNER_8_876504_s, 0);
    SW_JOIN_INNER_TD_8829(tbl_JOIN_INNER_TD_9958_output, tbl_Filter_TD_9952_output, tbl_JOIN_INNER_TD_8829_output);
    gettimeofday(&tv_r_JOIN_INNER_8_876504_e, 0);

    struct timeval tv_r_JOIN_INNER_7_508156_s, tv_r_JOIN_INNER_7_508156_e;
    gettimeofday(&tv_r_JOIN_INNER_7_508156_s, 0);
    SW_JOIN_INNER_TD_7339(tbl_JOIN_INNER_TD_8829_output, tbl_Filter_TD_8847_output, tbl_JOIN_INNER_TD_7339_output);
    gettimeofday(&tv_r_JOIN_INNER_7_508156_e, 0);

    struct timeval tv_r_Expand_6_186807_s, tv_r_Expand_6_186807_e;
    gettimeofday(&tv_r_Expand_6_186807_s, 0);
    SW_Expand_TD_638(tbl_JOIN_INNER_TD_7339_output, tbl_Expand_TD_638_output);
    gettimeofday(&tv_r_Expand_6_186807_e, 0);

    struct timeval tv_r_Aggregate_5_78789_s, tv_r_Aggregate_5_78789_e;
    gettimeofday(&tv_r_Aggregate_5_78789_s, 0);
    SW_Aggregate_TD_5114(tbl_Expand_TD_638_output, tbl_Aggregate_TD_5114_output);
    gettimeofday(&tv_r_Aggregate_5_78789_e, 0);

    struct timeval tv_r_Window_4_555545_s, tv_r_Window_4_555545_e;
    gettimeofday(&tv_r_Window_4_555545_s, 0);
    SW_Window_TD_4264(tbl_Aggregate_TD_5114_output, tbl_Window_TD_4264_output);
    gettimeofday(&tv_r_Window_4_555545_e, 0);

    struct timeval tv_r_Filter_3_5461_s, tv_r_Filter_3_5461_e;
    gettimeofday(&tv_r_Filter_3_5461_s, 0);
    SW_Filter_TD_3131(tbl_Window_TD_4264_output, tbl_Filter_TD_3131_output);
    gettimeofday(&tv_r_Filter_3_5461_e, 0);

    struct timeval tv_r_Sort_2_328817_s, tv_r_Sort_2_328817_e;
    gettimeofday(&tv_r_Sort_2_328817_s, 0);
    SW_Sort_TD_2807(tbl_Filter_TD_3131_output, tbl_Sort_TD_2807_output);
    gettimeofday(&tv_r_Sort_2_328817_e, 0);

    struct timeval tv_r_LocalLimit_1_719182_s, tv_r_LocalLimit_1_719182_e;
    gettimeofday(&tv_r_LocalLimit_1_719182_s, 0);
    SW_LocalLimit_TD_1639(tbl_Sort_TD_2807_output, tbl_LocalLimit_TD_1639_output);
    gettimeofday(&tv_r_LocalLimit_1_719182_e, 0);

    struct timeval tv_r_GlobalLimit_0_195000_s, tv_r_GlobalLimit_0_195000_e;
    gettimeofday(&tv_r_GlobalLimit_0_195000_s, 0);
    SW_GlobalLimit_TD_032(tbl_LocalLimit_TD_1639_output, tbl_GlobalLimit_TD_032_output);
    gettimeofday(&tv_r_GlobalLimit_0_195000_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_797777_s, &tv_r_Filter_10_797777_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11213_input: " << tbl_SerializeFromObject_TD_11213_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_653451_s, &tv_r_Filter_10_653451_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11318_input: " << tbl_SerializeFromObject_TD_11318_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_886251_s, &tv_r_Filter_9_886251_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10310_input: " << tbl_SerializeFromObject_TD_10310_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_9198_s, &tv_r_JOIN_INNER_9_9198_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10840_output: " << tbl_Filter_TD_10840_output.getNumRow() << " " << "tbl_Filter_TD_10432_output: " << tbl_Filter_TD_10432_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_360966_s, &tv_r_Filter_8_360966_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9240_input: " << tbl_SerializeFromObject_TD_9240_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_876504_s, &tv_r_JOIN_INNER_8_876504_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9958_output: " << tbl_JOIN_INNER_TD_9958_output.getNumRow() << " " << "tbl_Filter_TD_9952_output: " << tbl_Filter_TD_9952_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_508156_s, &tv_r_JOIN_INNER_7_508156_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8829_output: " << tbl_JOIN_INNER_TD_8829_output.getNumRow() << " " << "tbl_Filter_TD_8847_output: " << tbl_Filter_TD_8847_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_6: " << tvdiff(&tv_r_Expand_6_186807_s, &tv_r_Expand_6_186807_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7339_output: " << tbl_JOIN_INNER_TD_7339_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_78789_s, &tv_r_Aggregate_5_78789_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_638_output: " << tbl_Expand_TD_638_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_555545_s, &tv_r_Window_4_555545_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5114_output: " << tbl_Aggregate_TD_5114_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_5461_s, &tv_r_Filter_3_5461_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4264_output: " << tbl_Window_TD_4264_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_328817_s, &tv_r_Sort_2_328817_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3131_output: " << tbl_Filter_TD_3131_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_719182_s, &tv_r_LocalLimit_1_719182_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2807_output: " << tbl_Sort_TD_2807_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_195000_s, &tv_r_GlobalLimit_0_195000_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1639_output: " << tbl_LocalLimit_TD_1639_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 10.241775 * 1000 << "ms" << std::endl; 
    return 0; 
}
