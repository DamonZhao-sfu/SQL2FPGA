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
    Table tbl_GlobalLimit_TD_0842_output("tbl_GlobalLimit_TD_0842_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_0842_output.allocateHost();
    Table tbl_LocalLimit_TD_1783_output("tbl_LocalLimit_TD_1783_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1783_output.allocateHost();
    Table tbl_Sort_TD_2909_output("tbl_Sort_TD_2909_output", 6100000, 10, "");
    tbl_Sort_TD_2909_output.allocateHost();
    Table tbl_Filter_TD_3129_output("tbl_Filter_TD_3129_output", 6100000, 10, "");
    tbl_Filter_TD_3129_output.allocateHost();
    Table tbl_Window_TD_4295_output("tbl_Window_TD_4295_output", 6100000, 10, "");
    tbl_Window_TD_4295_output.allocateHost();
    Table tbl_Aggregate_TD_574_output("tbl_Aggregate_TD_574_output", 6100000, 9, "");
    tbl_Aggregate_TD_574_output.allocateHost();
    Table tbl_Expand_TD_6650_output("tbl_Expand_TD_6650_output", 6100000, 11, "");
    tbl_Expand_TD_6650_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7222_output("tbl_JOIN_INNER_TD_7222_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_7222_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8206_output("tbl_JOIN_INNER_TD_8206_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8206_output.allocateHost();
    Table tbl_Filter_TD_8344_output("tbl_Filter_TD_8344_output", 6100000, 5, "");
    tbl_Filter_TD_8344_output.allocateHost();
    Table tbl_JOIN_INNER_TD_911_output("tbl_JOIN_INNER_TD_911_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_911_output.allocateHost();
    Table tbl_Filter_TD_941_output("tbl_Filter_TD_941_output", 6100000, 2, "");
    tbl_Filter_TD_941_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9516_input;
    tbl_SerializeFromObject_TD_9516_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9516_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9516_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9516_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9516_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9516_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9516_input.allocateHost();
    tbl_SerializeFromObject_TD_9516_input.loadHost();
    Table tbl_Filter_TD_10327_output("tbl_Filter_TD_10327_output", 6100000, 5, "");
    tbl_Filter_TD_10327_output.allocateHost();
    Table tbl_Filter_TD_10965_output("tbl_Filter_TD_10965_output", 6100000, 4, "");
    tbl_Filter_TD_10965_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10885_input;
    tbl_SerializeFromObject_TD_10885_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10885_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10885_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10885_input.allocateHost();
    tbl_SerializeFromObject_TD_10885_input.loadHost();
    Table tbl_SerializeFromObject_TD_11507_input;
    tbl_SerializeFromObject_TD_11507_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_11507_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11507_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_11507_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11507_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_11507_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_11507_input.allocateHost();
    tbl_SerializeFromObject_TD_11507_input.loadHost();
    Table tbl_SerializeFromObject_TD_11998_input;
    tbl_SerializeFromObject_TD_11998_input = Table("date_dim", date_dim_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_11998_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11998_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11998_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11998_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_11998_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_11998_input.allocateHost();
    tbl_SerializeFromObject_TD_11998_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_433027_s, tv_r_Filter_10_433027_e;
    gettimeofday(&tv_r_Filter_10_433027_s, 0);
    SW_Filter_TD_10965(tbl_SerializeFromObject_TD_11998_input, tbl_Filter_TD_10965_output);
    gettimeofday(&tv_r_Filter_10_433027_e, 0);

    struct timeval tv_r_Filter_10_709839_s, tv_r_Filter_10_709839_e;
    gettimeofday(&tv_r_Filter_10_709839_s, 0);
    SW_Filter_TD_10327(tbl_SerializeFromObject_TD_11507_input, tbl_Filter_TD_10327_output);
    gettimeofday(&tv_r_Filter_10_709839_e, 0);

    struct timeval tv_r_Filter_9_612886_s, tv_r_Filter_9_612886_e;
    gettimeofday(&tv_r_Filter_9_612886_s, 0);
    SW_Filter_TD_941(tbl_SerializeFromObject_TD_10885_input, tbl_Filter_TD_941_output);
    gettimeofday(&tv_r_Filter_9_612886_e, 0);

    struct timeval tv_r_JOIN_INNER_9_820667_s, tv_r_JOIN_INNER_9_820667_e;
    gettimeofday(&tv_r_JOIN_INNER_9_820667_s, 0);
    SW_JOIN_INNER_TD_911(tbl_Filter_TD_10327_output, tbl_Filter_TD_10965_output, tbl_JOIN_INNER_TD_911_output);
    gettimeofday(&tv_r_JOIN_INNER_9_820667_e, 0);

    struct timeval tv_r_Filter_8_28405_s, tv_r_Filter_8_28405_e;
    gettimeofday(&tv_r_Filter_8_28405_s, 0);
    SW_Filter_TD_8344(tbl_SerializeFromObject_TD_9516_input, tbl_Filter_TD_8344_output);
    gettimeofday(&tv_r_Filter_8_28405_e, 0);

    struct timeval tv_r_JOIN_INNER_8_7616_s, tv_r_JOIN_INNER_8_7616_e;
    gettimeofday(&tv_r_JOIN_INNER_8_7616_s, 0);
    SW_JOIN_INNER_TD_8206(tbl_JOIN_INNER_TD_911_output, tbl_Filter_TD_941_output, tbl_JOIN_INNER_TD_8206_output);
    gettimeofday(&tv_r_JOIN_INNER_8_7616_e, 0);

    struct timeval tv_r_JOIN_INNER_7_833713_s, tv_r_JOIN_INNER_7_833713_e;
    gettimeofday(&tv_r_JOIN_INNER_7_833713_s, 0);
    SW_JOIN_INNER_TD_7222(tbl_JOIN_INNER_TD_8206_output, tbl_Filter_TD_8344_output, tbl_JOIN_INNER_TD_7222_output);
    gettimeofday(&tv_r_JOIN_INNER_7_833713_e, 0);

    struct timeval tv_r_Expand_6_66951_s, tv_r_Expand_6_66951_e;
    gettimeofday(&tv_r_Expand_6_66951_s, 0);
    SW_Expand_TD_6650(tbl_JOIN_INNER_TD_7222_output, tbl_Expand_TD_6650_output);
    gettimeofday(&tv_r_Expand_6_66951_e, 0);

    struct timeval tv_r_Aggregate_5_454831_s, tv_r_Aggregate_5_454831_e;
    gettimeofday(&tv_r_Aggregate_5_454831_s, 0);
    SW_Aggregate_TD_574(tbl_Expand_TD_6650_output, tbl_Aggregate_TD_574_output);
    gettimeofday(&tv_r_Aggregate_5_454831_e, 0);

    struct timeval tv_r_Window_4_646574_s, tv_r_Window_4_646574_e;
    gettimeofday(&tv_r_Window_4_646574_s, 0);
    SW_Window_TD_4295(tbl_Aggregate_TD_574_output, tbl_Window_TD_4295_output);
    gettimeofday(&tv_r_Window_4_646574_e, 0);

    struct timeval tv_r_Filter_3_986190_s, tv_r_Filter_3_986190_e;
    gettimeofday(&tv_r_Filter_3_986190_s, 0);
    SW_Filter_TD_3129(tbl_Window_TD_4295_output, tbl_Filter_TD_3129_output);
    gettimeofday(&tv_r_Filter_3_986190_e, 0);

    struct timeval tv_r_Sort_2_567843_s, tv_r_Sort_2_567843_e;
    gettimeofday(&tv_r_Sort_2_567843_s, 0);
    SW_Sort_TD_2909(tbl_Filter_TD_3129_output, tbl_Sort_TD_2909_output);
    gettimeofday(&tv_r_Sort_2_567843_e, 0);

    struct timeval tv_r_LocalLimit_1_240398_s, tv_r_LocalLimit_1_240398_e;
    gettimeofday(&tv_r_LocalLimit_1_240398_s, 0);
    SW_LocalLimit_TD_1783(tbl_Sort_TD_2909_output, tbl_LocalLimit_TD_1783_output);
    gettimeofday(&tv_r_LocalLimit_1_240398_e, 0);

    struct timeval tv_r_GlobalLimit_0_180320_s, tv_r_GlobalLimit_0_180320_e;
    gettimeofday(&tv_r_GlobalLimit_0_180320_s, 0);
    SW_GlobalLimit_TD_0842(tbl_LocalLimit_TD_1783_output, tbl_GlobalLimit_TD_0842_output);
    gettimeofday(&tv_r_GlobalLimit_0_180320_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_433027_s, &tv_r_Filter_10_433027_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11998_input: " << tbl_SerializeFromObject_TD_11998_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_709839_s, &tv_r_Filter_10_709839_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11507_input: " << tbl_SerializeFromObject_TD_11507_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_612886_s, &tv_r_Filter_9_612886_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10885_input: " << tbl_SerializeFromObject_TD_10885_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_820667_s, &tv_r_JOIN_INNER_9_820667_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10327_output: " << tbl_Filter_TD_10327_output.getNumRow() << " " << "tbl_Filter_TD_10965_output: " << tbl_Filter_TD_10965_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_28405_s, &tv_r_Filter_8_28405_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9516_input: " << tbl_SerializeFromObject_TD_9516_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_7616_s, &tv_r_JOIN_INNER_8_7616_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_911_output: " << tbl_JOIN_INNER_TD_911_output.getNumRow() << " " << "tbl_Filter_TD_941_output: " << tbl_Filter_TD_941_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_833713_s, &tv_r_JOIN_INNER_7_833713_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8206_output: " << tbl_JOIN_INNER_TD_8206_output.getNumRow() << " " << "tbl_Filter_TD_8344_output: " << tbl_Filter_TD_8344_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_6: " << tvdiff(&tv_r_Expand_6_66951_s, &tv_r_Expand_6_66951_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7222_output: " << tbl_JOIN_INNER_TD_7222_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_454831_s, &tv_r_Aggregate_5_454831_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_6650_output: " << tbl_Expand_TD_6650_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_646574_s, &tv_r_Window_4_646574_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_574_output: " << tbl_Aggregate_TD_574_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_986190_s, &tv_r_Filter_3_986190_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4295_output: " << tbl_Window_TD_4295_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_567843_s, &tv_r_Sort_2_567843_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3129_output: " << tbl_Filter_TD_3129_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_240398_s, &tv_r_LocalLimit_1_240398_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2909_output: " << tbl_Sort_TD_2909_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_180320_s, &tv_r_GlobalLimit_0_180320_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1783_output: " << tbl_LocalLimit_TD_1783_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 9.481886 * 1000 << "ms" << std::endl; 
    return 0; 
}
