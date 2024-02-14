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

#include "cfgFunc_q3.hpp" 
#include "q3.hpp" 

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
    std::cout << "NOTE:running query #3\n."; 
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
    Table tbl_GlobalLimit_TD_0850_output("tbl_GlobalLimit_TD_0850_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0850_output.allocateHost();
    Table tbl_LocalLimit_TD_1657_output("tbl_LocalLimit_TD_1657_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1657_output.allocateHost();
    Table tbl_Sort_TD_2215_output("tbl_Sort_TD_2215_output", 6100000, 4, "");
    tbl_Sort_TD_2215_output.allocateHost();
    Table tbl_Aggregate_TD_3862_output("tbl_Aggregate_TD_3862_output", 6100000, 4, "");
    tbl_Aggregate_TD_3862_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4596_output("tbl_JOIN_INNER_TD_4596_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_4596_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5431_output("tbl_JOIN_INNER_TD_5431_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5431_output.allocateHost();
    Table tbl_Filter_TD_5775_output("tbl_Filter_TD_5775_output", 6100000, 3, "");
    tbl_Filter_TD_5775_output.allocateHost();
    Table tbl_Filter_TD_6175_output("tbl_Filter_TD_6175_output", 6100000, 2, "");
    tbl_Filter_TD_6175_output.allocateHost();
    Table tbl_Filter_TD_6582_output("tbl_Filter_TD_6582_output", 6100000, 3, "");
    tbl_Filter_TD_6582_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6527_input;
    tbl_SerializeFromObject_TD_6527_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6527_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6527_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_6527_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6527_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_6527_input.allocateHost();
    tbl_SerializeFromObject_TD_6527_input.loadHost();
    Table tbl_SerializeFromObject_TD_7150_input;
    tbl_SerializeFromObject_TD_7150_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7150_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7150_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7150_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_7150_input.allocateHost();
    tbl_SerializeFromObject_TD_7150_input.loadHost();
    Table tbl_SerializeFromObject_TD_7100_input;
    tbl_SerializeFromObject_TD_7100_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7100_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7100_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_7100_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_7100_input.allocateHost();
    tbl_SerializeFromObject_TD_7100_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_50075_s, tv_r_Filter_6_50075_e;
    gettimeofday(&tv_r_Filter_6_50075_s, 0);
    SW_Filter_TD_6582(tbl_SerializeFromObject_TD_7100_input, tbl_Filter_TD_6582_output);
    gettimeofday(&tv_r_Filter_6_50075_e, 0);

    struct timeval tv_r_Filter_6_55661_s, tv_r_Filter_6_55661_e;
    gettimeofday(&tv_r_Filter_6_55661_s, 0);
    SW_Filter_TD_6175(tbl_SerializeFromObject_TD_7150_input, tbl_Filter_TD_6175_output);
    gettimeofday(&tv_r_Filter_6_55661_e, 0);

    struct timeval tv_r_Filter_5_917284_s, tv_r_Filter_5_917284_e;
    gettimeofday(&tv_r_Filter_5_917284_s, 0);
    SW_Filter_TD_5775(tbl_SerializeFromObject_TD_6527_input, tbl_Filter_TD_5775_output);
    gettimeofday(&tv_r_Filter_5_917284_e, 0);

    struct timeval tv_r_JOIN_INNER_5_141315_s, tv_r_JOIN_INNER_5_141315_e;
    gettimeofday(&tv_r_JOIN_INNER_5_141315_s, 0);
    SW_JOIN_INNER_TD_5431(tbl_Filter_TD_6175_output, tbl_Filter_TD_6582_output, tbl_JOIN_INNER_TD_5431_output);
    gettimeofday(&tv_r_JOIN_INNER_5_141315_e, 0);

    struct timeval tv_r_JOIN_INNER_4_111932_s, tv_r_JOIN_INNER_4_111932_e;
    gettimeofday(&tv_r_JOIN_INNER_4_111932_s, 0);
    SW_JOIN_INNER_TD_4596(tbl_JOIN_INNER_TD_5431_output, tbl_Filter_TD_5775_output, tbl_JOIN_INNER_TD_4596_output);
    gettimeofday(&tv_r_JOIN_INNER_4_111932_e, 0);

    struct timeval tv_r_Aggregate_3_652369_s, tv_r_Aggregate_3_652369_e;
    gettimeofday(&tv_r_Aggregate_3_652369_s, 0);
    SW_Aggregate_TD_3862(tbl_JOIN_INNER_TD_4596_output, tbl_Aggregate_TD_3862_output);
    gettimeofday(&tv_r_Aggregate_3_652369_e, 0);

    struct timeval tv_r_Sort_2_54843_s, tv_r_Sort_2_54843_e;
    gettimeofday(&tv_r_Sort_2_54843_s, 0);
    SW_Sort_TD_2215(tbl_Aggregate_TD_3862_output, tbl_Sort_TD_2215_output);
    gettimeofday(&tv_r_Sort_2_54843_e, 0);

    struct timeval tv_r_LocalLimit_1_408123_s, tv_r_LocalLimit_1_408123_e;
    gettimeofday(&tv_r_LocalLimit_1_408123_s, 0);
    SW_LocalLimit_TD_1657(tbl_Sort_TD_2215_output, tbl_LocalLimit_TD_1657_output);
    gettimeofday(&tv_r_LocalLimit_1_408123_e, 0);

    struct timeval tv_r_GlobalLimit_0_35537_s, tv_r_GlobalLimit_0_35537_e;
    gettimeofday(&tv_r_GlobalLimit_0_35537_s, 0);
    SW_GlobalLimit_TD_0850(tbl_LocalLimit_TD_1657_output, tbl_GlobalLimit_TD_0850_output);
    gettimeofday(&tv_r_GlobalLimit_0_35537_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_50075_s, &tv_r_Filter_6_50075_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7100_input: " << tbl_SerializeFromObject_TD_7100_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_55661_s, &tv_r_Filter_6_55661_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7150_input: " << tbl_SerializeFromObject_TD_7150_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_917284_s, &tv_r_Filter_5_917284_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6527_input: " << tbl_SerializeFromObject_TD_6527_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_141315_s, &tv_r_JOIN_INNER_5_141315_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6175_output: " << tbl_Filter_TD_6175_output.getNumRow() << " " << "tbl_Filter_TD_6582_output: " << tbl_Filter_TD_6582_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_111932_s, &tv_r_JOIN_INNER_4_111932_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5431_output: " << tbl_JOIN_INNER_TD_5431_output.getNumRow() << " " << "tbl_Filter_TD_5775_output: " << tbl_Filter_TD_5775_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_652369_s, &tv_r_Aggregate_3_652369_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4596_output: " << tbl_JOIN_INNER_TD_4596_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_54843_s, &tv_r_Sort_2_54843_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3862_output: " << tbl_Aggregate_TD_3862_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_408123_s, &tv_r_LocalLimit_1_408123_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2215_output: " << tbl_Sort_TD_2215_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_35537_s, &tv_r_GlobalLimit_0_35537_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1657_output: " << tbl_LocalLimit_TD_1657_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.7712874 * 1000 << "ms" << std::endl; 
    return 0; 
}
