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

#include "cfgFunc_q43.hpp" 
#include "q43.hpp" 

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
    std::cout << "NOTE:running query #43\n."; 
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
    Table tbl_GlobalLimit_TD_0193_output("tbl_GlobalLimit_TD_0193_output", 6100000, 9, "");
    tbl_GlobalLimit_TD_0193_output.allocateHost();
    Table tbl_LocalLimit_TD_1223_output("tbl_LocalLimit_TD_1223_output", 6100000, 9, "");
    tbl_LocalLimit_TD_1223_output.allocateHost();
    Table tbl_Sort_TD_2877_output("tbl_Sort_TD_2877_output", 6100000, 9, "");
    tbl_Sort_TD_2877_output.allocateHost();
    Table tbl_Aggregate_TD_3439_output("tbl_Aggregate_TD_3439_output", 6100000, 9, "");
    tbl_Aggregate_TD_3439_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4711_output("tbl_JOIN_INNER_TD_4711_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_4711_output.allocateHost();
    Table tbl_JOIN_INNER_TD_521_output("tbl_JOIN_INNER_TD_521_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_521_output.allocateHost();
    Table tbl_Filter_TD_591_output("tbl_Filter_TD_591_output", 6100000, 3, "");
    tbl_Filter_TD_591_output.allocateHost();
    Table tbl_Filter_TD_661_output("tbl_Filter_TD_661_output", 6100000, 2, "");
    tbl_Filter_TD_661_output.allocateHost();
    Table tbl_Filter_TD_6219_output("tbl_Filter_TD_6219_output", 6100000, 3, "");
    tbl_Filter_TD_6219_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6659_input;
    tbl_SerializeFromObject_TD_6659_input = Table("store", store_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6659_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_6659_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6659_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6659_input.addCol("s_gmt_offset", 4);
    tbl_SerializeFromObject_TD_6659_input.allocateHost();
    tbl_SerializeFromObject_TD_6659_input.loadHost();
    Table tbl_SerializeFromObject_TD_7830_input;
    tbl_SerializeFromObject_TD_7830_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7830_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7830_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7830_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7830_input.allocateHost();
    tbl_SerializeFromObject_TD_7830_input.loadHost();
    Table tbl_SerializeFromObject_TD_7417_input;
    tbl_SerializeFromObject_TD_7417_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7417_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7417_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_7417_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_7417_input.allocateHost();
    tbl_SerializeFromObject_TD_7417_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_286587_s, tv_r_Filter_6_286587_e;
    gettimeofday(&tv_r_Filter_6_286587_s, 0);
    SW_Filter_TD_6219(tbl_SerializeFromObject_TD_7417_input, tbl_Filter_TD_6219_output);
    gettimeofday(&tv_r_Filter_6_286587_e, 0);

    struct timeval tv_r_Filter_6_368718_s, tv_r_Filter_6_368718_e;
    gettimeofday(&tv_r_Filter_6_368718_s, 0);
    SW_Filter_TD_661(tbl_SerializeFromObject_TD_7830_input, tbl_Filter_TD_661_output);
    gettimeofday(&tv_r_Filter_6_368718_e, 0);

    struct timeval tv_r_Filter_5_423811_s, tv_r_Filter_5_423811_e;
    gettimeofday(&tv_r_Filter_5_423811_s, 0);
    SW_Filter_TD_591(tbl_SerializeFromObject_TD_6659_input, tbl_Filter_TD_591_output);
    gettimeofday(&tv_r_Filter_5_423811_e, 0);

    struct timeval tv_r_JOIN_INNER_5_878808_s, tv_r_JOIN_INNER_5_878808_e;
    gettimeofday(&tv_r_JOIN_INNER_5_878808_s, 0);
    SW_JOIN_INNER_TD_521(tbl_Filter_TD_661_output, tbl_Filter_TD_6219_output, tbl_JOIN_INNER_TD_521_output);
    gettimeofday(&tv_r_JOIN_INNER_5_878808_e, 0);

    struct timeval tv_r_JOIN_INNER_4_297172_s, tv_r_JOIN_INNER_4_297172_e;
    gettimeofday(&tv_r_JOIN_INNER_4_297172_s, 0);
    SW_JOIN_INNER_TD_4711(tbl_JOIN_INNER_TD_521_output, tbl_Filter_TD_591_output, tbl_JOIN_INNER_TD_4711_output);
    gettimeofday(&tv_r_JOIN_INNER_4_297172_e, 0);

    struct timeval tv_r_Aggregate_3_565531_s, tv_r_Aggregate_3_565531_e;
    gettimeofday(&tv_r_Aggregate_3_565531_s, 0);
    SW_Aggregate_TD_3439(tbl_JOIN_INNER_TD_4711_output, tbl_Aggregate_TD_3439_output);
    gettimeofday(&tv_r_Aggregate_3_565531_e, 0);

    struct timeval tv_r_Sort_2_627434_s, tv_r_Sort_2_627434_e;
    gettimeofday(&tv_r_Sort_2_627434_s, 0);
    SW_Sort_TD_2877(tbl_Aggregate_TD_3439_output, tbl_Sort_TD_2877_output);
    gettimeofday(&tv_r_Sort_2_627434_e, 0);

    struct timeval tv_r_LocalLimit_1_284057_s, tv_r_LocalLimit_1_284057_e;
    gettimeofday(&tv_r_LocalLimit_1_284057_s, 0);
    SW_LocalLimit_TD_1223(tbl_Sort_TD_2877_output, tbl_LocalLimit_TD_1223_output);
    gettimeofday(&tv_r_LocalLimit_1_284057_e, 0);

    struct timeval tv_r_GlobalLimit_0_55094_s, tv_r_GlobalLimit_0_55094_e;
    gettimeofday(&tv_r_GlobalLimit_0_55094_s, 0);
    SW_GlobalLimit_TD_0193(tbl_LocalLimit_TD_1223_output, tbl_GlobalLimit_TD_0193_output);
    gettimeofday(&tv_r_GlobalLimit_0_55094_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_286587_s, &tv_r_Filter_6_286587_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7417_input: " << tbl_SerializeFromObject_TD_7417_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_368718_s, &tv_r_Filter_6_368718_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7830_input: " << tbl_SerializeFromObject_TD_7830_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_423811_s, &tv_r_Filter_5_423811_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6659_input: " << tbl_SerializeFromObject_TD_6659_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_878808_s, &tv_r_JOIN_INNER_5_878808_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_661_output: " << tbl_Filter_TD_661_output.getNumRow() << " " << "tbl_Filter_TD_6219_output: " << tbl_Filter_TD_6219_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_297172_s, &tv_r_JOIN_INNER_4_297172_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_521_output: " << tbl_JOIN_INNER_TD_521_output.getNumRow() << " " << "tbl_Filter_TD_591_output: " << tbl_Filter_TD_591_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_565531_s, &tv_r_Aggregate_3_565531_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4711_output: " << tbl_JOIN_INNER_TD_4711_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_627434_s, &tv_r_Sort_2_627434_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3439_output: " << tbl_Aggregate_TD_3439_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_284057_s, &tv_r_LocalLimit_1_284057_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2877_output: " << tbl_Sort_TD_2877_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_55094_s, &tv_r_GlobalLimit_0_55094_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1223_output: " << tbl_LocalLimit_TD_1223_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.71609 * 1000 << "ms" << std::endl; 
    return 0; 
}
