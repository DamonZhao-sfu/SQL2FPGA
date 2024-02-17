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

#include "cfgFunc_q44.hpp" 
#include "q44.hpp" 

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
    std::cout << "NOTE:running query #44\n."; 
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
    Table tbl_GlobalLimit_TD_0739_output("tbl_GlobalLimit_TD_0739_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0739_output.allocateHost();
    Table tbl_LocalLimit_TD_1914_output("tbl_LocalLimit_TD_1914_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1914_output.allocateHost();
    Table tbl_Sort_TD_2196_output("tbl_Sort_TD_2196_output", 6100000, 3, "");
    tbl_Sort_TD_2196_output.allocateHost();
    Table tbl_Project_TD_3135_output("tbl_Project_TD_3135_output", 6100000, 3, "");
    tbl_Project_TD_3135_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4116_output("tbl_JOIN_INNER_TD_4116_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4116_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5138_output("tbl_JOIN_INNER_TD_5138_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5138_output.allocateHost();
    Table tbl_Filter_TD_5662_output("tbl_Filter_TD_5662_output", 6100000, 2, "");
    tbl_Filter_TD_5662_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6110_output("tbl_JOIN_INNER_TD_6110_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6110_output.allocateHost();
    Table tbl_Filter_TD_6343_output("tbl_Filter_TD_6343_output", 6100000, 2, "");
    tbl_Filter_TD_6343_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6797_input;
    tbl_SerializeFromObject_TD_6797_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6797_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6797_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6797_input.allocateHost();
    tbl_SerializeFromObject_TD_6797_input.loadHost();
    Table tbl_Filter_TD_777_output("tbl_Filter_TD_777_output", 6100000, 2, "");
    tbl_Filter_TD_777_output.allocateHost();
    Table tbl_Filter_TD_7251_output("tbl_Filter_TD_7251_output", 6100000, 2, "");
    tbl_Filter_TD_7251_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7341_input;
    tbl_SerializeFromObject_TD_7341_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7341_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7341_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7341_input.allocateHost();
    tbl_SerializeFromObject_TD_7341_input.loadHost();
    Table tbl_Window_TD_8430_output("tbl_Window_TD_8430_output", 6100000, 3, "");
    tbl_Window_TD_8430_output.allocateHost();
    Table tbl_Window_TD_8899_output("tbl_Window_TD_8899_output", 6100000, 3, "");
    tbl_Window_TD_8899_output.allocateHost();
    Table tbl_Filter_TD_9596_output("tbl_Filter_TD_9596_output", 6100000, 2, "");
    tbl_Filter_TD_9596_output.allocateHost();
    Table tbl_Filter_TD_9490_output("tbl_Filter_TD_9490_output", 6100000, 2, "");
    tbl_Filter_TD_9490_output.allocateHost();
    Table tbl_Aggregate_TD_10759_output("tbl_Aggregate_TD_10759_output", 6100000, 2, "");
    tbl_Aggregate_TD_10759_output.allocateHost();
    Table tbl_Aggregate_TD_10568_output("tbl_Aggregate_TD_10568_output", 6100000, 1, "");
    tbl_Aggregate_TD_10568_output.allocateHost();
    Table tbl_Aggregate_TD_10766_output("tbl_Aggregate_TD_10766_output", 6100000, 2, "");
    tbl_Aggregate_TD_10766_output.allocateHost();
    Table tbl_Aggregate_TD_10866_output("tbl_Aggregate_TD_10866_output", 6100000, 1, "");
    tbl_Aggregate_TD_10866_output.allocateHost();
    Table tbl_Filter_TD_11976_output("tbl_Filter_TD_11976_output", 6100000, 2, "");
    tbl_Filter_TD_11976_output.allocateHost();
    Table tbl_Filter_TD_11943_output("tbl_Filter_TD_11943_output", 6100000, 2, "");
    tbl_Filter_TD_11943_output.allocateHost();
    Table tbl_Filter_TD_11999_output("tbl_Filter_TD_11999_output", 6100000, 2, "");
    tbl_Filter_TD_11999_output.allocateHost();
    Table tbl_Filter_TD_1128_output("tbl_Filter_TD_1128_output", 6100000, 2, "");
    tbl_Filter_TD_1128_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12754_input;
    tbl_SerializeFromObject_TD_12754_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12754_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12754_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12754_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12754_input.allocateHost();
    tbl_SerializeFromObject_TD_12754_input.loadHost();
    Table tbl_SerializeFromObject_TD_12449_input;
    tbl_SerializeFromObject_TD_12449_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12449_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12449_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12449_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_12449_input.allocateHost();
    tbl_SerializeFromObject_TD_12449_input.loadHost();
    Table tbl_SerializeFromObject_TD_1292_input;
    tbl_SerializeFromObject_TD_1292_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1292_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_1292_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_1292_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_1292_input.allocateHost();
    tbl_SerializeFromObject_TD_1292_input.loadHost();
    Table tbl_SerializeFromObject_TD_12503_input;
    tbl_SerializeFromObject_TD_12503_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12503_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12503_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12503_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_12503_input.allocateHost();
    tbl_SerializeFromObject_TD_12503_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_823433_s, tv_r_Filter_11_823433_e;
    gettimeofday(&tv_r_Filter_11_823433_s, 0);
    SW_Filter_TD_1128(tbl_SerializeFromObject_TD_12503_input, tbl_Filter_TD_1128_output);
    gettimeofday(&tv_r_Filter_11_823433_e, 0);

    struct timeval tv_r_Filter_11_301979_s, tv_r_Filter_11_301979_e;
    gettimeofday(&tv_r_Filter_11_301979_s, 0);
    SW_Filter_TD_11999(tbl_SerializeFromObject_TD_1292_input, tbl_Filter_TD_11999_output);
    gettimeofday(&tv_r_Filter_11_301979_e, 0);

    struct timeval tv_r_Filter_11_217726_s, tv_r_Filter_11_217726_e;
    gettimeofday(&tv_r_Filter_11_217726_s, 0);
    SW_Filter_TD_11943(tbl_SerializeFromObject_TD_12449_input, tbl_Filter_TD_11943_output);
    gettimeofday(&tv_r_Filter_11_217726_e, 0);

    struct timeval tv_r_Filter_11_195848_s, tv_r_Filter_11_195848_e;
    gettimeofday(&tv_r_Filter_11_195848_s, 0);
    SW_Filter_TD_11976(tbl_SerializeFromObject_TD_12754_input, tbl_Filter_TD_11976_output);
    gettimeofday(&tv_r_Filter_11_195848_e, 0);

    struct timeval tv_r_Aggregate_10_629466_s, tv_r_Aggregate_10_629466_e;
    gettimeofday(&tv_r_Aggregate_10_629466_s, 0);
    SW_Aggregate_TD_10866(tbl_Filter_TD_1128_output, tbl_Aggregate_TD_10866_output);
    gettimeofday(&tv_r_Aggregate_10_629466_e, 0);

    struct timeval tv_r_Aggregate_10_55723_s, tv_r_Aggregate_10_55723_e;
    gettimeofday(&tv_r_Aggregate_10_55723_s, 0);
    SW_Aggregate_TD_10766(tbl_Filter_TD_11999_output, tbl_Aggregate_TD_10766_output);
    gettimeofday(&tv_r_Aggregate_10_55723_e, 0);

    struct timeval tv_r_Aggregate_10_404866_s, tv_r_Aggregate_10_404866_e;
    gettimeofday(&tv_r_Aggregate_10_404866_s, 0);
    SW_Aggregate_TD_10568(tbl_Filter_TD_11943_output, tbl_Aggregate_TD_10568_output);
    gettimeofday(&tv_r_Aggregate_10_404866_e, 0);

    struct timeval tv_r_Aggregate_10_45226_s, tv_r_Aggregate_10_45226_e;
    gettimeofday(&tv_r_Aggregate_10_45226_s, 0);
    SW_Aggregate_TD_10759(tbl_Filter_TD_11976_output, tbl_Aggregate_TD_10759_output);
    gettimeofday(&tv_r_Aggregate_10_45226_e, 0);

    struct timeval tv_r_Filter_9_83071_s, tv_r_Filter_9_83071_e;
    gettimeofday(&tv_r_Filter_9_83071_s, 0);
    SW_Filter_TD_9490(tbl_Aggregate_TD_10766_output, tbl_Aggregate_TD_10866_output, tbl_Filter_TD_9490_output);
    gettimeofday(&tv_r_Filter_9_83071_e, 0);

    struct timeval tv_r_Filter_9_291851_s, tv_r_Filter_9_291851_e;
    gettimeofday(&tv_r_Filter_9_291851_s, 0);
    SW_Filter_TD_9596(tbl_Aggregate_TD_10759_output, tbl_Aggregate_TD_10568_output, tbl_Filter_TD_9596_output);
    gettimeofday(&tv_r_Filter_9_291851_e, 0);

    struct timeval tv_r_Window_8_437096_s, tv_r_Window_8_437096_e;
    gettimeofday(&tv_r_Window_8_437096_s, 0);
    SW_Window_TD_8899(tbl_Filter_TD_9490_output, tbl_Window_TD_8899_output);
    gettimeofday(&tv_r_Window_8_437096_e, 0);

    struct timeval tv_r_Window_8_462531_s, tv_r_Window_8_462531_e;
    gettimeofday(&tv_r_Window_8_462531_s, 0);
    SW_Window_TD_8430(tbl_Filter_TD_9596_output, tbl_Window_TD_8430_output);
    gettimeofday(&tv_r_Window_8_462531_e, 0);

    struct timeval tv_r_Filter_7_888228_s, tv_r_Filter_7_888228_e;
    gettimeofday(&tv_r_Filter_7_888228_s, 0);
    SW_Filter_TD_7251(tbl_Window_TD_8899_output, tbl_Filter_TD_7251_output);
    gettimeofday(&tv_r_Filter_7_888228_e, 0);

    struct timeval tv_r_Filter_7_722054_s, tv_r_Filter_7_722054_e;
    gettimeofday(&tv_r_Filter_7_722054_s, 0);
    SW_Filter_TD_777(tbl_Window_TD_8430_output, tbl_Filter_TD_777_output);
    gettimeofday(&tv_r_Filter_7_722054_e, 0);

    struct timeval tv_r_Filter_6_143380_s, tv_r_Filter_6_143380_e;
    gettimeofday(&tv_r_Filter_6_143380_s, 0);
    SW_Filter_TD_6343(tbl_SerializeFromObject_TD_7341_input, tbl_Filter_TD_6343_output);
    gettimeofday(&tv_r_Filter_6_143380_e, 0);

    struct timeval tv_r_JOIN_INNER_6_47667_s, tv_r_JOIN_INNER_6_47667_e;
    gettimeofday(&tv_r_JOIN_INNER_6_47667_s, 0);
    SW_JOIN_INNER_TD_6110(tbl_Filter_TD_777_output, tbl_Filter_TD_7251_output, tbl_JOIN_INNER_TD_6110_output);
    gettimeofday(&tv_r_JOIN_INNER_6_47667_e, 0);

    struct timeval tv_r_Filter_5_71592_s, tv_r_Filter_5_71592_e;
    gettimeofday(&tv_r_Filter_5_71592_s, 0);
    SW_Filter_TD_5662(tbl_SerializeFromObject_TD_6797_input, tbl_Filter_TD_5662_output);
    gettimeofday(&tv_r_Filter_5_71592_e, 0);

    struct timeval tv_r_JOIN_INNER_5_116204_s, tv_r_JOIN_INNER_5_116204_e;
    gettimeofday(&tv_r_JOIN_INNER_5_116204_s, 0);
    SW_JOIN_INNER_TD_5138(tbl_JOIN_INNER_TD_6110_output, tbl_Filter_TD_6343_output, tbl_JOIN_INNER_TD_5138_output);
    gettimeofday(&tv_r_JOIN_INNER_5_116204_e, 0);

    struct timeval tv_r_JOIN_INNER_4_807902_s, tv_r_JOIN_INNER_4_807902_e;
    gettimeofday(&tv_r_JOIN_INNER_4_807902_s, 0);
    SW_JOIN_INNER_TD_4116(tbl_JOIN_INNER_TD_5138_output, tbl_Filter_TD_5662_output, tbl_JOIN_INNER_TD_4116_output);
    gettimeofday(&tv_r_JOIN_INNER_4_807902_e, 0);

    struct timeval tv_r_Project_3_85115_s, tv_r_Project_3_85115_e;
    gettimeofday(&tv_r_Project_3_85115_s, 0);
    SW_Project_TD_3135(tbl_JOIN_INNER_TD_4116_output, tbl_Project_TD_3135_output);
    gettimeofday(&tv_r_Project_3_85115_e, 0);

    struct timeval tv_r_Sort_2_860912_s, tv_r_Sort_2_860912_e;
    gettimeofday(&tv_r_Sort_2_860912_s, 0);
    SW_Sort_TD_2196(tbl_Project_TD_3135_output, tbl_Sort_TD_2196_output);
    gettimeofday(&tv_r_Sort_2_860912_e, 0);

    struct timeval tv_r_LocalLimit_1_248443_s, tv_r_LocalLimit_1_248443_e;
    gettimeofday(&tv_r_LocalLimit_1_248443_s, 0);
    SW_LocalLimit_TD_1914(tbl_Sort_TD_2196_output, tbl_LocalLimit_TD_1914_output);
    gettimeofday(&tv_r_LocalLimit_1_248443_e, 0);

    struct timeval tv_r_GlobalLimit_0_599802_s, tv_r_GlobalLimit_0_599802_e;
    gettimeofday(&tv_r_GlobalLimit_0_599802_s, 0);
    SW_GlobalLimit_TD_0739(tbl_LocalLimit_TD_1914_output, tbl_GlobalLimit_TD_0739_output);
    gettimeofday(&tv_r_GlobalLimit_0_599802_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_823433_s, &tv_r_Filter_11_823433_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12503_input: " << tbl_SerializeFromObject_TD_12503_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_301979_s, &tv_r_Filter_11_301979_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1292_input: " << tbl_SerializeFromObject_TD_1292_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_217726_s, &tv_r_Filter_11_217726_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12449_input: " << tbl_SerializeFromObject_TD_12449_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_195848_s, &tv_r_Filter_11_195848_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12754_input: " << tbl_SerializeFromObject_TD_12754_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_629466_s, &tv_r_Aggregate_10_629466_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1128_output: " << tbl_Filter_TD_1128_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_55723_s, &tv_r_Aggregate_10_55723_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11999_output: " << tbl_Filter_TD_11999_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_404866_s, &tv_r_Aggregate_10_404866_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11943_output: " << tbl_Filter_TD_11943_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_45226_s, &tv_r_Aggregate_10_45226_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11976_output: " << tbl_Filter_TD_11976_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_83071_s, &tv_r_Filter_9_83071_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10766_output: " << tbl_Aggregate_TD_10766_output.getNumRow() << " " << "tbl_Aggregate_TD_10866_output: " << tbl_Aggregate_TD_10866_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_291851_s, &tv_r_Filter_9_291851_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10759_output: " << tbl_Aggregate_TD_10759_output.getNumRow() << " " << "tbl_Aggregate_TD_10568_output: " << tbl_Aggregate_TD_10568_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_437096_s, &tv_r_Window_8_437096_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9490_output: " << tbl_Filter_TD_9490_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_462531_s, &tv_r_Window_8_462531_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9596_output: " << tbl_Filter_TD_9596_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_888228_s, &tv_r_Filter_7_888228_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8899_output: " << tbl_Window_TD_8899_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_722054_s, &tv_r_Filter_7_722054_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8430_output: " << tbl_Window_TD_8430_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_143380_s, &tv_r_Filter_6_143380_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7341_input: " << tbl_SerializeFromObject_TD_7341_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_47667_s, &tv_r_JOIN_INNER_6_47667_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_777_output: " << tbl_Filter_TD_777_output.getNumRow() << " " << "tbl_Filter_TD_7251_output: " << tbl_Filter_TD_7251_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_71592_s, &tv_r_Filter_5_71592_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6797_input: " << tbl_SerializeFromObject_TD_6797_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_116204_s, &tv_r_JOIN_INNER_5_116204_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6110_output: " << tbl_JOIN_INNER_TD_6110_output.getNumRow() << " " << "tbl_Filter_TD_6343_output: " << tbl_Filter_TD_6343_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_807902_s, &tv_r_JOIN_INNER_4_807902_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5138_output: " << tbl_JOIN_INNER_TD_5138_output.getNumRow() << " " << "tbl_Filter_TD_5662_output: " << tbl_Filter_TD_5662_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_85115_s, &tv_r_Project_3_85115_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4116_output: " << tbl_JOIN_INNER_TD_4116_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_860912_s, &tv_r_Sort_2_860912_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3135_output: " << tbl_Project_TD_3135_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_248443_s, &tv_r_LocalLimit_1_248443_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2196_output: " << tbl_Sort_TD_2196_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_599802_s, &tv_r_GlobalLimit_0_599802_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1914_output: " << tbl_LocalLimit_TD_1914_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.5259022 * 1000 << "ms" << std::endl; 
    return 0; 
}
