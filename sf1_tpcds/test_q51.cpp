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
    Table tbl_GlobalLimit_TD_0296551_output("tbl_GlobalLimit_TD_0296551_output", 6100000, 6, "");
    tbl_GlobalLimit_TD_0296551_output.allocateHost();
    Table tbl_LocalLimit_TD_1314603_output("tbl_LocalLimit_TD_1314603_output", 6100000, 6, "");
    tbl_LocalLimit_TD_1314603_output.allocateHost();
    Table tbl_Sort_TD_221880_output("tbl_Sort_TD_221880_output", 6100000, 6, "");
    tbl_Sort_TD_221880_output.allocateHost();
    Table tbl_Filter_TD_3997762_output("tbl_Filter_TD_3997762_output", 6100000, 6, "");
    tbl_Filter_TD_3997762_output.allocateHost();
    Table tbl_Window_TD_47841_output("tbl_Window_TD_47841_output", 6100000, 6, "");
    tbl_Window_TD_47841_output.allocateHost();
    Table tbl_Project_TD_5818297_output("tbl_Project_TD_5818297_output", 6100000, 4, "");
    tbl_Project_TD_5818297_output.allocateHost();
    Table tbl_JOIN_FULLOUTER_TD_6436062_output("tbl_JOIN_FULLOUTER_TD_6436062_output", 6100000, 6, "");
    tbl_JOIN_FULLOUTER_TD_6436062_output.allocateHost();
    Table tbl_Window_TD_7896976_output("tbl_Window_TD_7896976_output", 6100000, 5, "");
    tbl_Window_TD_7896976_output.allocateHost();
    Table tbl_Window_TD_7745839_output("tbl_Window_TD_7745839_output", 6100000, 5, "");
    tbl_Window_TD_7745839_output.allocateHost();
    Table tbl_Aggregate_TD_8349580_output("tbl_Aggregate_TD_8349580_output", 6100000, 4, "");
    tbl_Aggregate_TD_8349580_output.allocateHost();
    Table tbl_Aggregate_TD_8578922_output("tbl_Aggregate_TD_8578922_output", 6100000, 4, "");
    tbl_Aggregate_TD_8578922_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9438372_output("tbl_JOIN_INNER_TD_9438372_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9438372_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9315666_output("tbl_JOIN_INNER_TD_9315666_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9315666_output.allocateHost();
    Table tbl_Filter_TD_10366591_output("tbl_Filter_TD_10366591_output", 6100000, 3, "");
    tbl_Filter_TD_10366591_output.allocateHost();
    Table tbl_Filter_TD_10101875_output("tbl_Filter_TD_10101875_output", 6100000, 2, "");
    tbl_Filter_TD_10101875_output.allocateHost();
    Table tbl_Filter_TD_10766621_output("tbl_Filter_TD_10766621_output", 6100000, 3, "");
    tbl_Filter_TD_10766621_output.allocateHost();
    Table tbl_Filter_TD_10807143_output("tbl_Filter_TD_10807143_output", 6100000, 2, "");
    tbl_Filter_TD_10807143_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11289542_input;
    tbl_SerializeFromObject_TD_11289542_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11289542_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11289542_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_11289542_input.addCol("ws_sales_price", 4);
    tbl_SerializeFromObject_TD_11289542_input.allocateHost();
    tbl_SerializeFromObject_TD_11289542_input.loadHost();
    Table tbl_SerializeFromObject_TD_11700491_input;
    tbl_SerializeFromObject_TD_11700491_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11700491_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11700491_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11700491_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_11700491_input.allocateHost();
    tbl_SerializeFromObject_TD_11700491_input.loadHost();
    Table tbl_SerializeFromObject_TD_11641044_input;
    tbl_SerializeFromObject_TD_11641044_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11641044_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11641044_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_11641044_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_11641044_input.allocateHost();
    tbl_SerializeFromObject_TD_11641044_input.loadHost();
    Table tbl_SerializeFromObject_TD_11681294_input;
    tbl_SerializeFromObject_TD_11681294_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11681294_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11681294_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11681294_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_11681294_input.allocateHost();
    tbl_SerializeFromObject_TD_11681294_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_560392_s, tv_r_Filter_10_560392_e;
    gettimeofday(&tv_r_Filter_10_560392_s, 0);
    SW_Filter_TD_10807143(tbl_SerializeFromObject_TD_11681294_input, tbl_Filter_TD_10807143_output);
    gettimeofday(&tv_r_Filter_10_560392_e, 0);

    struct timeval tv_r_Filter_10_667945_s, tv_r_Filter_10_667945_e;
    gettimeofday(&tv_r_Filter_10_667945_s, 0);
    SW_Filter_TD_10766621(tbl_SerializeFromObject_TD_11641044_input, tbl_Filter_TD_10766621_output);
    gettimeofday(&tv_r_Filter_10_667945_e, 0);

    struct timeval tv_r_Filter_10_826942_s, tv_r_Filter_10_826942_e;
    gettimeofday(&tv_r_Filter_10_826942_s, 0);
    SW_Filter_TD_10101875(tbl_SerializeFromObject_TD_11700491_input, tbl_Filter_TD_10101875_output);
    gettimeofday(&tv_r_Filter_10_826942_e, 0);

    struct timeval tv_r_Filter_10_309955_s, tv_r_Filter_10_309955_e;
    gettimeofday(&tv_r_Filter_10_309955_s, 0);
    SW_Filter_TD_10366591(tbl_SerializeFromObject_TD_11289542_input, tbl_Filter_TD_10366591_output);
    gettimeofday(&tv_r_Filter_10_309955_e, 0);

    struct timeval tv_r_JOIN_INNER_9_899231_s, tv_r_JOIN_INNER_9_899231_e;
    gettimeofday(&tv_r_JOIN_INNER_9_899231_s, 0);
    SW_JOIN_INNER_TD_9315666(tbl_Filter_TD_10766621_output, tbl_Filter_TD_10807143_output, tbl_JOIN_INNER_TD_9315666_output);
    gettimeofday(&tv_r_JOIN_INNER_9_899231_e, 0);

    struct timeval tv_r_JOIN_INNER_9_453886_s, tv_r_JOIN_INNER_9_453886_e;
    gettimeofday(&tv_r_JOIN_INNER_9_453886_s, 0);
    SW_JOIN_INNER_TD_9438372(tbl_Filter_TD_10366591_output, tbl_Filter_TD_10101875_output, tbl_JOIN_INNER_TD_9438372_output);
    gettimeofday(&tv_r_JOIN_INNER_9_453886_e, 0);

    struct timeval tv_r_Aggregate_8_259376_s, tv_r_Aggregate_8_259376_e;
    gettimeofday(&tv_r_Aggregate_8_259376_s, 0);
    SW_Aggregate_TD_8578922(tbl_JOIN_INNER_TD_9315666_output, tbl_Aggregate_TD_8578922_output);
    gettimeofday(&tv_r_Aggregate_8_259376_e, 0);

    struct timeval tv_r_Aggregate_8_373197_s, tv_r_Aggregate_8_373197_e;
    gettimeofday(&tv_r_Aggregate_8_373197_s, 0);
    SW_Aggregate_TD_8349580(tbl_JOIN_INNER_TD_9438372_output, tbl_Aggregate_TD_8349580_output);
    gettimeofday(&tv_r_Aggregate_8_373197_e, 0);

    struct timeval tv_r_Window_7_435912_s, tv_r_Window_7_435912_e;
    gettimeofday(&tv_r_Window_7_435912_s, 0);
    SW_Window_TD_7745839(tbl_Aggregate_TD_8578922_output, tbl_Window_TD_7745839_output);
    gettimeofday(&tv_r_Window_7_435912_e, 0);

    struct timeval tv_r_Window_7_252633_s, tv_r_Window_7_252633_e;
    gettimeofday(&tv_r_Window_7_252633_s, 0);
    SW_Window_TD_7896976(tbl_Aggregate_TD_8349580_output, tbl_Window_TD_7896976_output);
    gettimeofday(&tv_r_Window_7_252633_e, 0);

    struct timeval tv_r_JOIN_FULLOUTER_6_146631_s, tv_r_JOIN_FULLOUTER_6_146631_e;
    gettimeofday(&tv_r_JOIN_FULLOUTER_6_146631_s, 0);
    SW_JOIN_FULLOUTER_TD_6436062(tbl_Window_TD_7896976_output, tbl_Window_TD_7745839_output, tbl_JOIN_FULLOUTER_TD_6436062_output);
    gettimeofday(&tv_r_JOIN_FULLOUTER_6_146631_e, 0);

    struct timeval tv_r_Project_5_220677_s, tv_r_Project_5_220677_e;
    gettimeofday(&tv_r_Project_5_220677_s, 0);
    SW_Project_TD_5818297(tbl_JOIN_FULLOUTER_TD_6436062_output, tbl_Project_TD_5818297_output);
    gettimeofday(&tv_r_Project_5_220677_e, 0);

    struct timeval tv_r_Window_4_446611_s, tv_r_Window_4_446611_e;
    gettimeofday(&tv_r_Window_4_446611_s, 0);
    SW_Window_TD_47841(tbl_Project_TD_5818297_output, tbl_Window_TD_47841_output);
    gettimeofday(&tv_r_Window_4_446611_e, 0);

    struct timeval tv_r_Filter_3_752858_s, tv_r_Filter_3_752858_e;
    gettimeofday(&tv_r_Filter_3_752858_s, 0);
    SW_Filter_TD_3997762(tbl_Window_TD_47841_output, tbl_Filter_TD_3997762_output);
    gettimeofday(&tv_r_Filter_3_752858_e, 0);

    struct timeval tv_r_Sort_2_237450_s, tv_r_Sort_2_237450_e;
    gettimeofday(&tv_r_Sort_2_237450_s, 0);
    SW_Sort_TD_221880(tbl_Filter_TD_3997762_output, tbl_Sort_TD_221880_output);
    gettimeofday(&tv_r_Sort_2_237450_e, 0);

    struct timeval tv_r_LocalLimit_1_832640_s, tv_r_LocalLimit_1_832640_e;
    gettimeofday(&tv_r_LocalLimit_1_832640_s, 0);
    SW_LocalLimit_TD_1314603(tbl_Sort_TD_221880_output, tbl_LocalLimit_TD_1314603_output);
    gettimeofday(&tv_r_LocalLimit_1_832640_e, 0);

    struct timeval tv_r_GlobalLimit_0_548137_s, tv_r_GlobalLimit_0_548137_e;
    gettimeofday(&tv_r_GlobalLimit_0_548137_s, 0);
    SW_GlobalLimit_TD_0296551(tbl_LocalLimit_TD_1314603_output, tbl_GlobalLimit_TD_0296551_output);
    gettimeofday(&tv_r_GlobalLimit_0_548137_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_560392_s, &tv_r_Filter_10_560392_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11681294_input: " << tbl_SerializeFromObject_TD_11681294_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_667945_s, &tv_r_Filter_10_667945_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11641044_input: " << tbl_SerializeFromObject_TD_11641044_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_826942_s, &tv_r_Filter_10_826942_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11700491_input: " << tbl_SerializeFromObject_TD_11700491_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_309955_s, &tv_r_Filter_10_309955_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11289542_input: " << tbl_SerializeFromObject_TD_11289542_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_899231_s, &tv_r_JOIN_INNER_9_899231_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10766621_output: " << tbl_Filter_TD_10766621_output.getNumRow() << " " << "tbl_Filter_TD_10807143_output: " << tbl_Filter_TD_10807143_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_453886_s, &tv_r_JOIN_INNER_9_453886_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10366591_output: " << tbl_Filter_TD_10366591_output.getNumRow() << " " << "tbl_Filter_TD_10101875_output: " << tbl_Filter_TD_10101875_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_259376_s, &tv_r_Aggregate_8_259376_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9315666_output: " << tbl_JOIN_INNER_TD_9315666_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_373197_s, &tv_r_Aggregate_8_373197_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9438372_output: " << tbl_JOIN_INNER_TD_9438372_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_435912_s, &tv_r_Window_7_435912_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8578922_output: " << tbl_Aggregate_TD_8578922_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_252633_s, &tv_r_Window_7_252633_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8349580_output: " << tbl_Aggregate_TD_8349580_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_FULLOUTER_6: " << tvdiff(&tv_r_JOIN_FULLOUTER_6_146631_s, &tv_r_JOIN_FULLOUTER_6_146631_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7896976_output: " << tbl_Window_TD_7896976_output.getNumRow() << " " << "tbl_Window_TD_7745839_output: " << tbl_Window_TD_7745839_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_220677_s, &tv_r_Project_5_220677_e) / 1000.0 << " ms " 
     << "tbl_JOIN_FULLOUTER_TD_6436062_output: " << tbl_JOIN_FULLOUTER_TD_6436062_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_446611_s, &tv_r_Window_4_446611_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5818297_output: " << tbl_Project_TD_5818297_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_752858_s, &tv_r_Filter_3_752858_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_47841_output: " << tbl_Window_TD_47841_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_237450_s, &tv_r_Sort_2_237450_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3997762_output: " << tbl_Filter_TD_3997762_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_832640_s, &tv_r_LocalLimit_1_832640_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_221880_output: " << tbl_Sort_TD_221880_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_548137_s, &tv_r_GlobalLimit_0_548137_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1314603_output: " << tbl_LocalLimit_TD_1314603_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 9.605065 * 1000 << "ms" << std::endl; 
    return 0; 
}
