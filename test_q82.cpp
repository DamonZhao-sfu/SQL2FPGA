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

#include "cfgFunc_q82.hpp" 
#include "q82.hpp" 

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
    std::cout << "NOTE:running query #82\n."; 
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
    Table tbl_GlobalLimit_TD_036_output("tbl_GlobalLimit_TD_036_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_036_output.allocateHost();
    Table tbl_LocalLimit_TD_1304_output("tbl_LocalLimit_TD_1304_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1304_output.allocateHost();
    Table tbl_Sort_TD_2665_output("tbl_Sort_TD_2665_output", 6100000, 3, "");
    tbl_Sort_TD_2665_output.allocateHost();
    Table tbl_Aggregate_TD_3944_output("tbl_Aggregate_TD_3944_output", 6100000, 3, "");
    tbl_Aggregate_TD_3944_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4764_output("tbl_JOIN_INNER_TD_4764_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4764_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5816_output("tbl_JOIN_INNER_TD_5816_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5816_output.allocateHost();
    Table tbl_Filter_TD_5648_output("tbl_Filter_TD_5648_output", 6100000, 1, "");
    tbl_Filter_TD_5648_output.allocateHost();
    Table tbl_JOIN_INNER_TD_652_output("tbl_JOIN_INNER_TD_652_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_652_output.allocateHost();
    Table tbl_Filter_TD_6751_output("tbl_Filter_TD_6751_output", 6100000, 1, "");
    tbl_Filter_TD_6751_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6402_input;
    tbl_SerializeFromObject_TD_6402_input = Table("store_sales", store_sales_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_6402_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_6402_input.allocateHost();
    tbl_SerializeFromObject_TD_6402_input.loadHost();
    Table tbl_Filter_TD_7819_output("tbl_Filter_TD_7819_output", 6100000, 4, "");
    tbl_Filter_TD_7819_output.allocateHost();
    Table tbl_Filter_TD_7130_output("tbl_Filter_TD_7130_output", 6100000, 2, "");
    tbl_Filter_TD_7130_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7683_input;
    tbl_SerializeFromObject_TD_7683_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7683_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7683_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7683_input.allocateHost();
    tbl_SerializeFromObject_TD_7683_input.loadHost();
    Table tbl_SerializeFromObject_TD_8910_input;
    tbl_SerializeFromObject_TD_8910_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8910_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8910_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8910_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8910_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_8910_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_8910_input.allocateHost();
    tbl_SerializeFromObject_TD_8910_input.loadHost();
    Table tbl_SerializeFromObject_TD_8381_input;
    tbl_SerializeFromObject_TD_8381_input = Table("inventory", inventory_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8381_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_8381_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_8381_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_8381_input.allocateHost();
    tbl_SerializeFromObject_TD_8381_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_802989_s, tv_r_Filter_7_802989_e;
    gettimeofday(&tv_r_Filter_7_802989_s, 0);
    SW_Filter_TD_7130(tbl_SerializeFromObject_TD_8381_input, tbl_Filter_TD_7130_output);
    gettimeofday(&tv_r_Filter_7_802989_e, 0);

    struct timeval tv_r_Filter_7_838887_s, tv_r_Filter_7_838887_e;
    gettimeofday(&tv_r_Filter_7_838887_s, 0);
    SW_Filter_TD_7819(tbl_SerializeFromObject_TD_8910_input, tbl_Filter_TD_7819_output);
    gettimeofday(&tv_r_Filter_7_838887_e, 0);

    struct timeval tv_r_Filter_6_512620_s, tv_r_Filter_6_512620_e;
    gettimeofday(&tv_r_Filter_6_512620_s, 0);
    SW_Filter_TD_6751(tbl_SerializeFromObject_TD_7683_input, tbl_Filter_TD_6751_output);
    gettimeofday(&tv_r_Filter_6_512620_e, 0);

    struct timeval tv_r_JOIN_INNER_6_350114_s, tv_r_JOIN_INNER_6_350114_e;
    gettimeofday(&tv_r_JOIN_INNER_6_350114_s, 0);
    SW_JOIN_INNER_TD_652(tbl_Filter_TD_7819_output, tbl_Filter_TD_7130_output, tbl_JOIN_INNER_TD_652_output);
    gettimeofday(&tv_r_JOIN_INNER_6_350114_e, 0);

    struct timeval tv_r_Filter_5_103304_s, tv_r_Filter_5_103304_e;
    gettimeofday(&tv_r_Filter_5_103304_s, 0);
    SW_Filter_TD_5648(tbl_SerializeFromObject_TD_6402_input, tbl_Filter_TD_5648_output);
    gettimeofday(&tv_r_Filter_5_103304_e, 0);

    struct timeval tv_r_JOIN_INNER_5_248029_s, tv_r_JOIN_INNER_5_248029_e;
    gettimeofday(&tv_r_JOIN_INNER_5_248029_s, 0);
    SW_JOIN_INNER_TD_5816(tbl_JOIN_INNER_TD_652_output, tbl_Filter_TD_6751_output, tbl_JOIN_INNER_TD_5816_output);
    gettimeofday(&tv_r_JOIN_INNER_5_248029_e, 0);

    struct timeval tv_r_JOIN_INNER_4_265986_s, tv_r_JOIN_INNER_4_265986_e;
    gettimeofday(&tv_r_JOIN_INNER_4_265986_s, 0);
    SW_JOIN_INNER_TD_4764(tbl_JOIN_INNER_TD_5816_output, tbl_Filter_TD_5648_output, tbl_JOIN_INNER_TD_4764_output);
    gettimeofday(&tv_r_JOIN_INNER_4_265986_e, 0);

    struct timeval tv_r_Aggregate_3_313088_s, tv_r_Aggregate_3_313088_e;
    gettimeofday(&tv_r_Aggregate_3_313088_s, 0);
    SW_Aggregate_TD_3944(tbl_JOIN_INNER_TD_4764_output, tbl_Aggregate_TD_3944_output);
    gettimeofday(&tv_r_Aggregate_3_313088_e, 0);

    struct timeval tv_r_Sort_2_358688_s, tv_r_Sort_2_358688_e;
    gettimeofday(&tv_r_Sort_2_358688_s, 0);
    SW_Sort_TD_2665(tbl_Aggregate_TD_3944_output, tbl_Sort_TD_2665_output);
    gettimeofday(&tv_r_Sort_2_358688_e, 0);

    struct timeval tv_r_LocalLimit_1_350779_s, tv_r_LocalLimit_1_350779_e;
    gettimeofday(&tv_r_LocalLimit_1_350779_s, 0);
    SW_LocalLimit_TD_1304(tbl_Sort_TD_2665_output, tbl_LocalLimit_TD_1304_output);
    gettimeofday(&tv_r_LocalLimit_1_350779_e, 0);

    struct timeval tv_r_GlobalLimit_0_517192_s, tv_r_GlobalLimit_0_517192_e;
    gettimeofday(&tv_r_GlobalLimit_0_517192_s, 0);
    SW_GlobalLimit_TD_036(tbl_LocalLimit_TD_1304_output, tbl_GlobalLimit_TD_036_output);
    gettimeofday(&tv_r_GlobalLimit_0_517192_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_802989_s, &tv_r_Filter_7_802989_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8381_input: " << tbl_SerializeFromObject_TD_8381_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_838887_s, &tv_r_Filter_7_838887_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8910_input: " << tbl_SerializeFromObject_TD_8910_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_512620_s, &tv_r_Filter_6_512620_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7683_input: " << tbl_SerializeFromObject_TD_7683_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_350114_s, &tv_r_JOIN_INNER_6_350114_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7819_output: " << tbl_Filter_TD_7819_output.getNumRow() << " " << "tbl_Filter_TD_7130_output: " << tbl_Filter_TD_7130_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_103304_s, &tv_r_Filter_5_103304_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6402_input: " << tbl_SerializeFromObject_TD_6402_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_248029_s, &tv_r_JOIN_INNER_5_248029_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_652_output: " << tbl_JOIN_INNER_TD_652_output.getNumRow() << " " << "tbl_Filter_TD_6751_output: " << tbl_Filter_TD_6751_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_265986_s, &tv_r_JOIN_INNER_4_265986_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5816_output: " << tbl_JOIN_INNER_TD_5816_output.getNumRow() << " " << "tbl_Filter_TD_5648_output: " << tbl_Filter_TD_5648_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_313088_s, &tv_r_Aggregate_3_313088_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4764_output: " << tbl_JOIN_INNER_TD_4764_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_358688_s, &tv_r_Sort_2_358688_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3944_output: " << tbl_Aggregate_TD_3944_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_350779_s, &tv_r_LocalLimit_1_350779_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2665_output: " << tbl_Sort_TD_2665_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_517192_s, &tv_r_GlobalLimit_0_517192_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1304_output: " << tbl_LocalLimit_TD_1304_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.7544734 * 1000 << "ms" << std::endl; 
    return 0; 
}
