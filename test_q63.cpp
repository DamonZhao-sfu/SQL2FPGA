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

#include "cfgFunc_q63.hpp" 
#include "q63.hpp" 

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
    std::cout << "NOTE:running query #63\n."; 
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
    Table tbl_GlobalLimit_TD_030_output("tbl_GlobalLimit_TD_030_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_030_output.allocateHost();
    Table tbl_LocalLimit_TD_1840_output("tbl_LocalLimit_TD_1840_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1840_output.allocateHost();
    Table tbl_Sort_TD_2698_output("tbl_Sort_TD_2698_output", 6100000, 3, "");
    tbl_Sort_TD_2698_output.allocateHost();
    Table tbl_Filter_TD_3541_output("tbl_Filter_TD_3541_output", 6100000, 3, "");
    tbl_Filter_TD_3541_output.allocateHost();
    Table tbl_Window_TD_4352_output("tbl_Window_TD_4352_output", 6100000, 4, "");
    tbl_Window_TD_4352_output.allocateHost();
    Table tbl_Aggregate_TD_528_output("tbl_Aggregate_TD_528_output", 6100000, 3, "");
    tbl_Aggregate_TD_528_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6760_output("tbl_JOIN_INNER_TD_6760_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6760_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7604_output("tbl_JOIN_INNER_TD_7604_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7604_output.allocateHost();
    Table tbl_Filter_TD_722_output("tbl_Filter_TD_722_output", 6100000, 1, "");
    tbl_Filter_TD_722_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8601_output("tbl_JOIN_INNER_TD_8601_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8601_output.allocateHost();
    Table tbl_Filter_TD_8964_output("tbl_Filter_TD_8964_output", 6100000, 2, "");
    tbl_Filter_TD_8964_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8820_input;
    tbl_SerializeFromObject_TD_8820_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8820_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8820_input.allocateHost();
    tbl_SerializeFromObject_TD_8820_input.loadHost();
    Table tbl_Filter_TD_9895_output("tbl_Filter_TD_9895_output", 6100000, 2, "");
    tbl_Filter_TD_9895_output.allocateHost();
    Table tbl_Filter_TD_9690_output("tbl_Filter_TD_9690_output", 6100000, 4, "");
    tbl_Filter_TD_9690_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9123_input;
    tbl_SerializeFromObject_TD_9123_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9123_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9123_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9123_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9123_input.allocateHost();
    tbl_SerializeFromObject_TD_9123_input.loadHost();
    Table tbl_SerializeFromObject_TD_10953_input;
    tbl_SerializeFromObject_TD_10953_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10953_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10953_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_10953_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10953_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10953_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10953_input.allocateHost();
    tbl_SerializeFromObject_TD_10953_input.loadHost();
    Table tbl_SerializeFromObject_TD_10421_input;
    tbl_SerializeFromObject_TD_10421_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10421_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10421_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10421_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10421_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10421_input.allocateHost();
    tbl_SerializeFromObject_TD_10421_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_569643_s, tv_r_Filter_9_569643_e;
    gettimeofday(&tv_r_Filter_9_569643_s, 0);
    SW_Filter_TD_9690(tbl_SerializeFromObject_TD_10421_input, tbl_Filter_TD_9690_output);
    gettimeofday(&tv_r_Filter_9_569643_e, 0);

    struct timeval tv_r_Filter_9_342765_s, tv_r_Filter_9_342765_e;
    gettimeofday(&tv_r_Filter_9_342765_s, 0);
    SW_Filter_TD_9895(tbl_SerializeFromObject_TD_10953_input, tbl_Filter_TD_9895_output);
    gettimeofday(&tv_r_Filter_9_342765_e, 0);

    struct timeval tv_r_Filter_8_162730_s, tv_r_Filter_8_162730_e;
    gettimeofday(&tv_r_Filter_8_162730_s, 0);
    SW_Filter_TD_8964(tbl_SerializeFromObject_TD_9123_input, tbl_Filter_TD_8964_output);
    gettimeofday(&tv_r_Filter_8_162730_e, 0);

    struct timeval tv_r_JOIN_INNER_8_89360_s, tv_r_JOIN_INNER_8_89360_e;
    gettimeofday(&tv_r_JOIN_INNER_8_89360_s, 0);
    SW_JOIN_INNER_TD_8601(tbl_Filter_TD_9895_output, tbl_Filter_TD_9690_output, tbl_JOIN_INNER_TD_8601_output);
    gettimeofday(&tv_r_JOIN_INNER_8_89360_e, 0);

    struct timeval tv_r_Filter_7_836758_s, tv_r_Filter_7_836758_e;
    gettimeofday(&tv_r_Filter_7_836758_s, 0);
    SW_Filter_TD_722(tbl_SerializeFromObject_TD_8820_input, tbl_Filter_TD_722_output);
    gettimeofday(&tv_r_Filter_7_836758_e, 0);

    struct timeval tv_r_JOIN_INNER_7_11583_s, tv_r_JOIN_INNER_7_11583_e;
    gettimeofday(&tv_r_JOIN_INNER_7_11583_s, 0);
    SW_JOIN_INNER_TD_7604(tbl_JOIN_INNER_TD_8601_output, tbl_Filter_TD_8964_output, tbl_JOIN_INNER_TD_7604_output);
    gettimeofday(&tv_r_JOIN_INNER_7_11583_e, 0);

    struct timeval tv_r_JOIN_INNER_6_46753_s, tv_r_JOIN_INNER_6_46753_e;
    gettimeofday(&tv_r_JOIN_INNER_6_46753_s, 0);
    SW_JOIN_INNER_TD_6760(tbl_JOIN_INNER_TD_7604_output, tbl_Filter_TD_722_output, tbl_JOIN_INNER_TD_6760_output);
    gettimeofday(&tv_r_JOIN_INNER_6_46753_e, 0);

    struct timeval tv_r_Aggregate_5_47925_s, tv_r_Aggregate_5_47925_e;
    gettimeofday(&tv_r_Aggregate_5_47925_s, 0);
    SW_Aggregate_TD_528(tbl_JOIN_INNER_TD_6760_output, tbl_Aggregate_TD_528_output);
    gettimeofday(&tv_r_Aggregate_5_47925_e, 0);

    struct timeval tv_r_Window_4_407211_s, tv_r_Window_4_407211_e;
    gettimeofday(&tv_r_Window_4_407211_s, 0);
    SW_Window_TD_4352(tbl_Aggregate_TD_528_output, tbl_Window_TD_4352_output);
    gettimeofday(&tv_r_Window_4_407211_e, 0);

    struct timeval tv_r_Filter_3_995421_s, tv_r_Filter_3_995421_e;
    gettimeofday(&tv_r_Filter_3_995421_s, 0);
    SW_Filter_TD_3541(tbl_Window_TD_4352_output, tbl_Filter_TD_3541_output);
    gettimeofday(&tv_r_Filter_3_995421_e, 0);

    struct timeval tv_r_Sort_2_201775_s, tv_r_Sort_2_201775_e;
    gettimeofday(&tv_r_Sort_2_201775_s, 0);
    SW_Sort_TD_2698(tbl_Filter_TD_3541_output, tbl_Sort_TD_2698_output);
    gettimeofday(&tv_r_Sort_2_201775_e, 0);

    struct timeval tv_r_LocalLimit_1_111806_s, tv_r_LocalLimit_1_111806_e;
    gettimeofday(&tv_r_LocalLimit_1_111806_s, 0);
    SW_LocalLimit_TD_1840(tbl_Sort_TD_2698_output, tbl_LocalLimit_TD_1840_output);
    gettimeofday(&tv_r_LocalLimit_1_111806_e, 0);

    struct timeval tv_r_GlobalLimit_0_684865_s, tv_r_GlobalLimit_0_684865_e;
    gettimeofday(&tv_r_GlobalLimit_0_684865_s, 0);
    SW_GlobalLimit_TD_030(tbl_LocalLimit_TD_1840_output, tbl_GlobalLimit_TD_030_output);
    gettimeofday(&tv_r_GlobalLimit_0_684865_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_569643_s, &tv_r_Filter_9_569643_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10421_input: " << tbl_SerializeFromObject_TD_10421_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_342765_s, &tv_r_Filter_9_342765_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10953_input: " << tbl_SerializeFromObject_TD_10953_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_162730_s, &tv_r_Filter_8_162730_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9123_input: " << tbl_SerializeFromObject_TD_9123_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_89360_s, &tv_r_JOIN_INNER_8_89360_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9895_output: " << tbl_Filter_TD_9895_output.getNumRow() << " " << "tbl_Filter_TD_9690_output: " << tbl_Filter_TD_9690_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_836758_s, &tv_r_Filter_7_836758_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8820_input: " << tbl_SerializeFromObject_TD_8820_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_11583_s, &tv_r_JOIN_INNER_7_11583_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8601_output: " << tbl_JOIN_INNER_TD_8601_output.getNumRow() << " " << "tbl_Filter_TD_8964_output: " << tbl_Filter_TD_8964_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_46753_s, &tv_r_JOIN_INNER_6_46753_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7604_output: " << tbl_JOIN_INNER_TD_7604_output.getNumRow() << " " << "tbl_Filter_TD_722_output: " << tbl_Filter_TD_722_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_47925_s, &tv_r_Aggregate_5_47925_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6760_output: " << tbl_JOIN_INNER_TD_6760_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_407211_s, &tv_r_Window_4_407211_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_528_output: " << tbl_Aggregate_TD_528_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_995421_s, &tv_r_Filter_3_995421_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4352_output: " << tbl_Window_TD_4352_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_201775_s, &tv_r_Sort_2_201775_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3541_output: " << tbl_Filter_TD_3541_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_111806_s, &tv_r_LocalLimit_1_111806_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2698_output: " << tbl_Sort_TD_2698_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_684865_s, &tv_r_GlobalLimit_0_684865_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1840_output: " << tbl_LocalLimit_TD_1840_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.4168751 * 1000 << "ms" << std::endl; 
    return 0; 
}
