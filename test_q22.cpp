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

#include "cfgFunc_q22.hpp" 
#include "q22.hpp" 

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
    std::cout << "NOTE:running query #22\n."; 
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
    Table tbl_GlobalLimit_TD_0646_output("tbl_GlobalLimit_TD_0646_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0646_output.allocateHost();
    Table tbl_LocalLimit_TD_187_output("tbl_LocalLimit_TD_187_output", 6100000, 5, "");
    tbl_LocalLimit_TD_187_output.allocateHost();
    Table tbl_Sort_TD_2763_output("tbl_Sort_TD_2763_output", 6100000, 5, "");
    tbl_Sort_TD_2763_output.allocateHost();
    Table tbl_Aggregate_TD_3617_output("tbl_Aggregate_TD_3617_output", 6100000, 5, "");
    tbl_Aggregate_TD_3617_output.allocateHost();
    Table tbl_Expand_TD_4167_output("tbl_Expand_TD_4167_output", 6100000, 6, "");
    tbl_Expand_TD_4167_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5589_output("tbl_JOIN_INNER_TD_5589_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5589_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6815_output("tbl_JOIN_INNER_TD_6815_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6815_output.allocateHost();
    Table tbl_Filter_TD_6278_output("tbl_Filter_TD_6278_output", 6100000, 1, "");
    tbl_Filter_TD_6278_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7831_output("tbl_JOIN_INNER_TD_7831_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_7831_output.allocateHost();
    Table tbl_Filter_TD_7330_output("tbl_Filter_TD_7330_output", 6100000, 5, "");
    tbl_Filter_TD_7330_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7725_input;
    tbl_SerializeFromObject_TD_7725_input = Table("warehouse", warehouse_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7725_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_7725_input.allocateHost();
    tbl_SerializeFromObject_TD_7725_input.loadHost();
    Table tbl_Filter_TD_8585_output("tbl_Filter_TD_8585_output", 6100000, 4, "");
    tbl_Filter_TD_8585_output.allocateHost();
    Table tbl_Filter_TD_8354_output("tbl_Filter_TD_8354_output", 6100000, 1, "");
    tbl_Filter_TD_8354_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8328_input;
    tbl_SerializeFromObject_TD_8328_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8328_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8328_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8328_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8328_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8328_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8328_input.allocateHost();
    tbl_SerializeFromObject_TD_8328_input.loadHost();
    Table tbl_SerializeFromObject_TD_9359_input;
    tbl_SerializeFromObject_TD_9359_input = Table("inventory", inventory_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9359_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_9359_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_9359_input.addCol("inv_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_9359_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_9359_input.allocateHost();
    tbl_SerializeFromObject_TD_9359_input.loadHost();
    Table tbl_SerializeFromObject_TD_945_input;
    tbl_SerializeFromObject_TD_945_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_945_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_945_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_945_input.allocateHost();
    tbl_SerializeFromObject_TD_945_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_971139_s, tv_r_Filter_8_971139_e;
    gettimeofday(&tv_r_Filter_8_971139_s, 0);
    SW_Filter_TD_8354(tbl_SerializeFromObject_TD_945_input, tbl_Filter_TD_8354_output);
    gettimeofday(&tv_r_Filter_8_971139_e, 0);

    struct timeval tv_r_Filter_8_943490_s, tv_r_Filter_8_943490_e;
    gettimeofday(&tv_r_Filter_8_943490_s, 0);
    SW_Filter_TD_8585(tbl_SerializeFromObject_TD_9359_input, tbl_Filter_TD_8585_output);
    gettimeofday(&tv_r_Filter_8_943490_e, 0);

    struct timeval tv_r_Filter_7_231842_s, tv_r_Filter_7_231842_e;
    gettimeofday(&tv_r_Filter_7_231842_s, 0);
    SW_Filter_TD_7330(tbl_SerializeFromObject_TD_8328_input, tbl_Filter_TD_7330_output);
    gettimeofday(&tv_r_Filter_7_231842_e, 0);

    struct timeval tv_r_JOIN_INNER_7_428425_s, tv_r_JOIN_INNER_7_428425_e;
    gettimeofday(&tv_r_JOIN_INNER_7_428425_s, 0);
    SW_JOIN_INNER_TD_7831(tbl_Filter_TD_8585_output, tbl_Filter_TD_8354_output, tbl_JOIN_INNER_TD_7831_output);
    gettimeofday(&tv_r_JOIN_INNER_7_428425_e, 0);

    struct timeval tv_r_Filter_6_954502_s, tv_r_Filter_6_954502_e;
    gettimeofday(&tv_r_Filter_6_954502_s, 0);
    SW_Filter_TD_6278(tbl_SerializeFromObject_TD_7725_input, tbl_Filter_TD_6278_output);
    gettimeofday(&tv_r_Filter_6_954502_e, 0);

    struct timeval tv_r_JOIN_INNER_6_319582_s, tv_r_JOIN_INNER_6_319582_e;
    gettimeofday(&tv_r_JOIN_INNER_6_319582_s, 0);
    SW_JOIN_INNER_TD_6815(tbl_JOIN_INNER_TD_7831_output, tbl_Filter_TD_7330_output, tbl_JOIN_INNER_TD_6815_output);
    gettimeofday(&tv_r_JOIN_INNER_6_319582_e, 0);

    struct timeval tv_r_JOIN_INNER_5_894084_s, tv_r_JOIN_INNER_5_894084_e;
    gettimeofday(&tv_r_JOIN_INNER_5_894084_s, 0);
    SW_JOIN_INNER_TD_5589(tbl_JOIN_INNER_TD_6815_output, tbl_Filter_TD_6278_output, tbl_JOIN_INNER_TD_5589_output);
    gettimeofday(&tv_r_JOIN_INNER_5_894084_e, 0);

    struct timeval tv_r_Expand_4_363166_s, tv_r_Expand_4_363166_e;
    gettimeofday(&tv_r_Expand_4_363166_s, 0);
    SW_Expand_TD_4167(tbl_JOIN_INNER_TD_5589_output, tbl_Expand_TD_4167_output);
    gettimeofday(&tv_r_Expand_4_363166_e, 0);

    struct timeval tv_r_Aggregate_3_767441_s, tv_r_Aggregate_3_767441_e;
    gettimeofday(&tv_r_Aggregate_3_767441_s, 0);
    SW_Aggregate_TD_3617(tbl_Expand_TD_4167_output, tbl_Aggregate_TD_3617_output);
    gettimeofday(&tv_r_Aggregate_3_767441_e, 0);

    struct timeval tv_r_Sort_2_891752_s, tv_r_Sort_2_891752_e;
    gettimeofday(&tv_r_Sort_2_891752_s, 0);
    SW_Sort_TD_2763(tbl_Aggregate_TD_3617_output, tbl_Sort_TD_2763_output);
    gettimeofday(&tv_r_Sort_2_891752_e, 0);

    struct timeval tv_r_LocalLimit_1_725722_s, tv_r_LocalLimit_1_725722_e;
    gettimeofday(&tv_r_LocalLimit_1_725722_s, 0);
    SW_LocalLimit_TD_187(tbl_Sort_TD_2763_output, tbl_LocalLimit_TD_187_output);
    gettimeofday(&tv_r_LocalLimit_1_725722_e, 0);

    struct timeval tv_r_GlobalLimit_0_751571_s, tv_r_GlobalLimit_0_751571_e;
    gettimeofday(&tv_r_GlobalLimit_0_751571_s, 0);
    SW_GlobalLimit_TD_0646(tbl_LocalLimit_TD_187_output, tbl_GlobalLimit_TD_0646_output);
    gettimeofday(&tv_r_GlobalLimit_0_751571_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_971139_s, &tv_r_Filter_8_971139_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_945_input: " << tbl_SerializeFromObject_TD_945_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_943490_s, &tv_r_Filter_8_943490_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9359_input: " << tbl_SerializeFromObject_TD_9359_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_231842_s, &tv_r_Filter_7_231842_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8328_input: " << tbl_SerializeFromObject_TD_8328_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_428425_s, &tv_r_JOIN_INNER_7_428425_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8585_output: " << tbl_Filter_TD_8585_output.getNumRow() << " " << "tbl_Filter_TD_8354_output: " << tbl_Filter_TD_8354_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_954502_s, &tv_r_Filter_6_954502_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7725_input: " << tbl_SerializeFromObject_TD_7725_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_319582_s, &tv_r_JOIN_INNER_6_319582_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7831_output: " << tbl_JOIN_INNER_TD_7831_output.getNumRow() << " " << "tbl_Filter_TD_7330_output: " << tbl_Filter_TD_7330_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_894084_s, &tv_r_JOIN_INNER_5_894084_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6815_output: " << tbl_JOIN_INNER_TD_6815_output.getNumRow() << " " << "tbl_Filter_TD_6278_output: " << tbl_Filter_TD_6278_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_363166_s, &tv_r_Expand_4_363166_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5589_output: " << tbl_JOIN_INNER_TD_5589_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_767441_s, &tv_r_Aggregate_3_767441_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4167_output: " << tbl_Expand_TD_4167_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_891752_s, &tv_r_Sort_2_891752_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3617_output: " << tbl_Aggregate_TD_3617_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_725722_s, &tv_r_LocalLimit_1_725722_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2763_output: " << tbl_Sort_TD_2763_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_751571_s, &tv_r_GlobalLimit_0_751571_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_187_output: " << tbl_LocalLimit_TD_187_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.642218 * 1000 << "ms" << std::endl; 
    return 0; 
}
