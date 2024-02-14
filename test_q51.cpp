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

#include "cfgFunc_q51.hpp" 
#include "q51.hpp" 

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
    std::cout << "NOTE:running query #51\n."; 
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
    Table tbl_Sort_TD_2267_output("tbl_Sort_TD_2267_output", 6100000, 6, "");
    tbl_Sort_TD_2267_output.allocateHost();
    Table tbl_Filter_TD_3147_output("tbl_Filter_TD_3147_output", 6100000, 6, "");
    tbl_Filter_TD_3147_output.allocateHost();
    Table tbl_Window_TD_4933_output("tbl_Window_TD_4933_output", 6100000, 6, "");
    tbl_Window_TD_4933_output.allocateHost();
    Table tbl_Project_TD_5323_output("tbl_Project_TD_5323_output", 6100000, 4, "");
    tbl_Project_TD_5323_output.allocateHost();
    Table tbl_JOIN_FULLOUTER_TD_6958_output("tbl_JOIN_FULLOUTER_TD_6958_output", 6100000, 6, "");
    tbl_JOIN_FULLOUTER_TD_6958_output.allocateHost();
    Table tbl_Window_TD_7497_output("tbl_Window_TD_7497_output", 6100000, 5, "");
    tbl_Window_TD_7497_output.allocateHost();
    Table tbl_Window_TD_7154_output("tbl_Window_TD_7154_output", 6100000, 5, "");
    tbl_Window_TD_7154_output.allocateHost();
    Table tbl_Aggregate_TD_8711_output("tbl_Aggregate_TD_8711_output", 6100000, 4, "");
    tbl_Aggregate_TD_8711_output.allocateHost();
    Table tbl_Aggregate_TD_8224_output("tbl_Aggregate_TD_8224_output", 6100000, 4, "");
    tbl_Aggregate_TD_8224_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9307_output("tbl_JOIN_INNER_TD_9307_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9307_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9387_output("tbl_JOIN_INNER_TD_9387_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9387_output.allocateHost();
    Table tbl_Filter_TD_10549_output("tbl_Filter_TD_10549_output", 6100000, 3, "");
    tbl_Filter_TD_10549_output.allocateHost();
    Table tbl_Filter_TD_10925_output("tbl_Filter_TD_10925_output", 6100000, 2, "");
    tbl_Filter_TD_10925_output.allocateHost();
    Table tbl_Filter_TD_10375_output("tbl_Filter_TD_10375_output", 6100000, 3, "");
    tbl_Filter_TD_10375_output.allocateHost();
    Table tbl_Filter_TD_10930_output("tbl_Filter_TD_10930_output", 6100000, 2, "");
    tbl_Filter_TD_10930_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11231_input;
    tbl_SerializeFromObject_TD_11231_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11231_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11231_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_11231_input.addCol("ws_sales_price", 4);
    tbl_SerializeFromObject_TD_11231_input.allocateHost();
    tbl_SerializeFromObject_TD_11231_input.loadHost();
    Table tbl_SerializeFromObject_TD_11536_input;
    tbl_SerializeFromObject_TD_11536_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11536_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11536_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11536_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_11536_input.allocateHost();
    tbl_SerializeFromObject_TD_11536_input.loadHost();
    Table tbl_SerializeFromObject_TD_11756_input;
    tbl_SerializeFromObject_TD_11756_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11756_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11756_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_11756_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_11756_input.allocateHost();
    tbl_SerializeFromObject_TD_11756_input.loadHost();
    Table tbl_SerializeFromObject_TD_11342_input;
    tbl_SerializeFromObject_TD_11342_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11342_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11342_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11342_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_11342_input.allocateHost();
    tbl_SerializeFromObject_TD_11342_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_196748_s, tv_r_Filter_10_196748_e;
    gettimeofday(&tv_r_Filter_10_196748_s, 0);
    SW_Filter_TD_10930(tbl_SerializeFromObject_TD_11342_input, tbl_Filter_TD_10930_output);
    gettimeofday(&tv_r_Filter_10_196748_e, 0);

    struct timeval tv_r_Filter_10_409394_s, tv_r_Filter_10_409394_e;
    gettimeofday(&tv_r_Filter_10_409394_s, 0);
    SW_Filter_TD_10375(tbl_SerializeFromObject_TD_11756_input, tbl_Filter_TD_10375_output);
    gettimeofday(&tv_r_Filter_10_409394_e, 0);

    struct timeval tv_r_Filter_10_614437_s, tv_r_Filter_10_614437_e;
    gettimeofday(&tv_r_Filter_10_614437_s, 0);
    SW_Filter_TD_10925(tbl_SerializeFromObject_TD_11536_input, tbl_Filter_TD_10925_output);
    gettimeofday(&tv_r_Filter_10_614437_e, 0);

    struct timeval tv_r_Filter_10_708977_s, tv_r_Filter_10_708977_e;
    gettimeofday(&tv_r_Filter_10_708977_s, 0);
    SW_Filter_TD_10549(tbl_SerializeFromObject_TD_11231_input, tbl_Filter_TD_10549_output);
    gettimeofday(&tv_r_Filter_10_708977_e, 0);

    struct timeval tv_r_JOIN_INNER_9_688635_s, tv_r_JOIN_INNER_9_688635_e;
    gettimeofday(&tv_r_JOIN_INNER_9_688635_s, 0);
    SW_JOIN_INNER_TD_9387(tbl_Filter_TD_10375_output, tbl_Filter_TD_10930_output, tbl_JOIN_INNER_TD_9387_output);
    gettimeofday(&tv_r_JOIN_INNER_9_688635_e, 0);

    struct timeval tv_r_JOIN_INNER_9_1284_s, tv_r_JOIN_INNER_9_1284_e;
    gettimeofday(&tv_r_JOIN_INNER_9_1284_s, 0);
    SW_JOIN_INNER_TD_9307(tbl_Filter_TD_10549_output, tbl_Filter_TD_10925_output, tbl_JOIN_INNER_TD_9307_output);
    gettimeofday(&tv_r_JOIN_INNER_9_1284_e, 0);

    struct timeval tv_r_Aggregate_8_329101_s, tv_r_Aggregate_8_329101_e;
    gettimeofday(&tv_r_Aggregate_8_329101_s, 0);
    SW_Aggregate_TD_8224(tbl_JOIN_INNER_TD_9387_output, tbl_Aggregate_TD_8224_output);
    gettimeofday(&tv_r_Aggregate_8_329101_e, 0);

    struct timeval tv_r_Aggregate_8_650312_s, tv_r_Aggregate_8_650312_e;
    gettimeofday(&tv_r_Aggregate_8_650312_s, 0);
    SW_Aggregate_TD_8711(tbl_JOIN_INNER_TD_9307_output, tbl_Aggregate_TD_8711_output);
    gettimeofday(&tv_r_Aggregate_8_650312_e, 0);

    struct timeval tv_r_Window_7_491909_s, tv_r_Window_7_491909_e;
    gettimeofday(&tv_r_Window_7_491909_s, 0);
    SW_Window_TD_7154(tbl_Aggregate_TD_8224_output, tbl_Window_TD_7154_output);
    gettimeofday(&tv_r_Window_7_491909_e, 0);

    struct timeval tv_r_Window_7_341246_s, tv_r_Window_7_341246_e;
    gettimeofday(&tv_r_Window_7_341246_s, 0);
    SW_Window_TD_7497(tbl_Aggregate_TD_8711_output, tbl_Window_TD_7497_output);
    gettimeofday(&tv_r_Window_7_341246_e, 0);

    struct timeval tv_r_JOIN_FULLOUTER_6_974029_s, tv_r_JOIN_FULLOUTER_6_974029_e;
    gettimeofday(&tv_r_JOIN_FULLOUTER_6_974029_s, 0);
    SW_JOIN_FULLOUTER_TD_6958(tbl_Window_TD_7497_output, tbl_Window_TD_7154_output, tbl_JOIN_FULLOUTER_TD_6958_output);
    gettimeofday(&tv_r_JOIN_FULLOUTER_6_974029_e, 0);

    struct timeval tv_r_Project_5_95354_s, tv_r_Project_5_95354_e;
    gettimeofday(&tv_r_Project_5_95354_s, 0);
    SW_Project_TD_5323(tbl_JOIN_FULLOUTER_TD_6958_output, tbl_Project_TD_5323_output);
    gettimeofday(&tv_r_Project_5_95354_e, 0);

    struct timeval tv_r_Window_4_434039_s, tv_r_Window_4_434039_e;
    gettimeofday(&tv_r_Window_4_434039_s, 0);
    SW_Window_TD_4933(tbl_Project_TD_5323_output, tbl_Window_TD_4933_output);
    gettimeofday(&tv_r_Window_4_434039_e, 0);

    struct timeval tv_r_Filter_3_677595_s, tv_r_Filter_3_677595_e;
    gettimeofday(&tv_r_Filter_3_677595_s, 0);
    SW_Filter_TD_3147(tbl_Window_TD_4933_output, tbl_Filter_TD_3147_output);
    gettimeofday(&tv_r_Filter_3_677595_e, 0);

    struct timeval tv_r_Sort_2_805813_s, tv_r_Sort_2_805813_e;
    gettimeofday(&tv_r_Sort_2_805813_s, 0);
    SW_Sort_TD_2267(tbl_Filter_TD_3147_output, tbl_Sort_TD_2267_output);
    gettimeofday(&tv_r_Sort_2_805813_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_196748_s, &tv_r_Filter_10_196748_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11342_input: " << tbl_SerializeFromObject_TD_11342_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_409394_s, &tv_r_Filter_10_409394_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11756_input: " << tbl_SerializeFromObject_TD_11756_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_614437_s, &tv_r_Filter_10_614437_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11536_input: " << tbl_SerializeFromObject_TD_11536_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_708977_s, &tv_r_Filter_10_708977_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11231_input: " << tbl_SerializeFromObject_TD_11231_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_688635_s, &tv_r_JOIN_INNER_9_688635_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10375_output: " << tbl_Filter_TD_10375_output.getNumRow() << " " << "tbl_Filter_TD_10930_output: " << tbl_Filter_TD_10930_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_1284_s, &tv_r_JOIN_INNER_9_1284_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10549_output: " << tbl_Filter_TD_10549_output.getNumRow() << " " << "tbl_Filter_TD_10925_output: " << tbl_Filter_TD_10925_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_329101_s, &tv_r_Aggregate_8_329101_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9387_output: " << tbl_JOIN_INNER_TD_9387_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_650312_s, &tv_r_Aggregate_8_650312_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9307_output: " << tbl_JOIN_INNER_TD_9307_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_491909_s, &tv_r_Window_7_491909_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8224_output: " << tbl_Aggregate_TD_8224_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_341246_s, &tv_r_Window_7_341246_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8711_output: " << tbl_Aggregate_TD_8711_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_FULLOUTER_6: " << tvdiff(&tv_r_JOIN_FULLOUTER_6_974029_s, &tv_r_JOIN_FULLOUTER_6_974029_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7497_output: " << tbl_Window_TD_7497_output.getNumRow() << " " << "tbl_Window_TD_7154_output: " << tbl_Window_TD_7154_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_95354_s, &tv_r_Project_5_95354_e) / 1000.0 << " ms " 
     << "tbl_JOIN_FULLOUTER_TD_6958_output: " << tbl_JOIN_FULLOUTER_TD_6958_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_434039_s, &tv_r_Window_4_434039_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5323_output: " << tbl_Project_TD_5323_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_677595_s, &tv_r_Filter_3_677595_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4933_output: " << tbl_Window_TD_4933_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_805813_s, &tv_r_Sort_2_805813_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3147_output: " << tbl_Filter_TD_3147_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 14.704676 * 1000 << "ms" << std::endl; 
    return 0; 
}
