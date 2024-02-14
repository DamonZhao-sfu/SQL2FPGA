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

#include "cfgFunc_q41.hpp" 
#include "q41.hpp" 

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
    std::cout << "NOTE:running query #41\n."; 
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
    Table tbl_GlobalLimit_TD_0882_output("tbl_GlobalLimit_TD_0882_output", 6100000, 1, "");
    tbl_GlobalLimit_TD_0882_output.allocateHost();
    Table tbl_LocalLimit_TD_1628_output("tbl_LocalLimit_TD_1628_output", 6100000, 1, "");
    tbl_LocalLimit_TD_1628_output.allocateHost();
    Table tbl_Sort_TD_2976_output("tbl_Sort_TD_2976_output", 6100000, 1, "");
    tbl_Sort_TD_2976_output.allocateHost();
    Table tbl_Aggregate_TD_3801_output("tbl_Aggregate_TD_3801_output", 6100000, 1, "");
    tbl_Aggregate_TD_3801_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4174_output("tbl_JOIN_INNER_TD_4174_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4174_output.allocateHost();
    Table tbl_Filter_TD_5961_output("tbl_Filter_TD_5961_output", 6100000, 2, "");
    tbl_Filter_TD_5961_output.allocateHost();
    Table tbl_Filter_TD_5606_output("tbl_Filter_TD_5606_output", 6100000, 1, "");
    tbl_Filter_TD_5606_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6742_input;
    tbl_SerializeFromObject_TD_6742_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6742_input.addCol("i_manufact", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6742_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6742_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_6742_input.allocateHost();
    tbl_SerializeFromObject_TD_6742_input.loadHost();
    Table tbl_Aggregate_TD_6116_output("tbl_Aggregate_TD_6116_output", 6100000, 2, "");
    tbl_Aggregate_TD_6116_output.allocateHost();
    Table tbl_Filter_TD_7441_output("tbl_Filter_TD_7441_output", 6100000, 1, "");
    tbl_Filter_TD_7441_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8703_input;
    tbl_SerializeFromObject_TD_8703_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8703_input.addCol("i_manufact", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8703_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8703_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8703_input.addCol("i_units", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8703_input.addCol("i_size", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8703_input.allocateHost();
    tbl_SerializeFromObject_TD_8703_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_730673_s, tv_r_Filter_7_730673_e;
    gettimeofday(&tv_r_Filter_7_730673_s, 0);
    SW_Filter_TD_7441(tbl_SerializeFromObject_TD_8703_input, tbl_Filter_TD_7441_output);
    gettimeofday(&tv_r_Filter_7_730673_e, 0);

    struct timeval tv_r_Aggregate_6_97316_s, tv_r_Aggregate_6_97316_e;
    gettimeofday(&tv_r_Aggregate_6_97316_s, 0);
    SW_Aggregate_TD_6116(tbl_Filter_TD_7441_output, tbl_Aggregate_TD_6116_output);
    gettimeofday(&tv_r_Aggregate_6_97316_e, 0);

    struct timeval tv_r_Filter_5_12463_s, tv_r_Filter_5_12463_e;
    gettimeofday(&tv_r_Filter_5_12463_s, 0);
    SW_Filter_TD_5606(tbl_Aggregate_TD_6116_output, tbl_Filter_TD_5606_output);
    gettimeofday(&tv_r_Filter_5_12463_e, 0);

    struct timeval tv_r_Filter_5_543933_s, tv_r_Filter_5_543933_e;
    gettimeofday(&tv_r_Filter_5_543933_s, 0);
    SW_Filter_TD_5961(tbl_SerializeFromObject_TD_6742_input, tbl_Filter_TD_5961_output);
    gettimeofday(&tv_r_Filter_5_543933_e, 0);

    struct timeval tv_r_JOIN_INNER_4_388683_s, tv_r_JOIN_INNER_4_388683_e;
    gettimeofday(&tv_r_JOIN_INNER_4_388683_s, 0);
    SW_JOIN_INNER_TD_4174(tbl_Filter_TD_5961_output, tbl_Filter_TD_5606_output, tbl_JOIN_INNER_TD_4174_output);
    gettimeofday(&tv_r_JOIN_INNER_4_388683_e, 0);

    struct timeval tv_r_Aggregate_3_727852_s, tv_r_Aggregate_3_727852_e;
    gettimeofday(&tv_r_Aggregate_3_727852_s, 0);
    SW_Aggregate_TD_3801(tbl_JOIN_INNER_TD_4174_output, tbl_Aggregate_TD_3801_output);
    gettimeofday(&tv_r_Aggregate_3_727852_e, 0);

    struct timeval tv_r_Sort_2_649445_s, tv_r_Sort_2_649445_e;
    gettimeofday(&tv_r_Sort_2_649445_s, 0);
    SW_Sort_TD_2976(tbl_Aggregate_TD_3801_output, tbl_Sort_TD_2976_output);
    gettimeofday(&tv_r_Sort_2_649445_e, 0);

    struct timeval tv_r_LocalLimit_1_307101_s, tv_r_LocalLimit_1_307101_e;
    gettimeofday(&tv_r_LocalLimit_1_307101_s, 0);
    SW_LocalLimit_TD_1628(tbl_Sort_TD_2976_output, tbl_LocalLimit_TD_1628_output);
    gettimeofday(&tv_r_LocalLimit_1_307101_e, 0);

    struct timeval tv_r_GlobalLimit_0_349090_s, tv_r_GlobalLimit_0_349090_e;
    gettimeofday(&tv_r_GlobalLimit_0_349090_s, 0);
    SW_GlobalLimit_TD_0882(tbl_LocalLimit_TD_1628_output, tbl_GlobalLimit_TD_0882_output);
    gettimeofday(&tv_r_GlobalLimit_0_349090_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_730673_s, &tv_r_Filter_7_730673_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8703_input: " << tbl_SerializeFromObject_TD_8703_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_97316_s, &tv_r_Aggregate_6_97316_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7441_output: " << tbl_Filter_TD_7441_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_12463_s, &tv_r_Filter_5_12463_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6116_output: " << tbl_Aggregate_TD_6116_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_543933_s, &tv_r_Filter_5_543933_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6742_input: " << tbl_SerializeFromObject_TD_6742_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_388683_s, &tv_r_JOIN_INNER_4_388683_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5961_output: " << tbl_Filter_TD_5961_output.getNumRow() << " " << "tbl_Filter_TD_5606_output: " << tbl_Filter_TD_5606_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_727852_s, &tv_r_Aggregate_3_727852_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4174_output: " << tbl_JOIN_INNER_TD_4174_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_649445_s, &tv_r_Sort_2_649445_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3801_output: " << tbl_Aggregate_TD_3801_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_307101_s, &tv_r_LocalLimit_1_307101_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2976_output: " << tbl_Sort_TD_2976_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_349090_s, &tv_r_GlobalLimit_0_349090_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1628_output: " << tbl_LocalLimit_TD_1628_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.88160676 * 1000 << "ms" << std::endl; 
    return 0; 
}
