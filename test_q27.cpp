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

#include "cfgFunc_q27.hpp" 
#include "q27.hpp" 

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
    std::cout << "NOTE:running query #27\n."; 
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
    Table tbl_GlobalLimit_TD_0740_output("tbl_GlobalLimit_TD_0740_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0740_output.allocateHost();
    Table tbl_LocalLimit_TD_1661_output("tbl_LocalLimit_TD_1661_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1661_output.allocateHost();
    Table tbl_Sort_TD_2924_output("tbl_Sort_TD_2924_output", 6100000, 7, "");
    tbl_Sort_TD_2924_output.allocateHost();
    Table tbl_Aggregate_TD_3788_output("tbl_Aggregate_TD_3788_output", 6100000, 7, "");
    tbl_Aggregate_TD_3788_output.allocateHost();
    Table tbl_Expand_TD_4782_output("tbl_Expand_TD_4782_output", 6100000, 7, "");
    tbl_Expand_TD_4782_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5516_output("tbl_JOIN_INNER_TD_5516_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5516_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6993_output("tbl_JOIN_INNER_TD_6993_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6993_output.allocateHost();
    Table tbl_Filter_TD_6386_output("tbl_Filter_TD_6386_output", 6100000, 2, "");
    tbl_Filter_TD_6386_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7173_output("tbl_JOIN_INNER_TD_7173_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7173_output.allocateHost();
    Table tbl_Filter_TD_7158_output("tbl_Filter_TD_7158_output", 6100000, 2, "");
    tbl_Filter_TD_7158_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7471_input;
    tbl_SerializeFromObject_TD_7471_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7471_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7471_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7471_input.allocateHost();
    tbl_SerializeFromObject_TD_7471_input.loadHost();
    Table tbl_JOIN_INNER_TD_8826_output("tbl_JOIN_INNER_TD_8826_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8826_output.allocateHost();
    Table tbl_Filter_TD_8228_output("tbl_Filter_TD_8228_output", 6100000, 1, "");
    tbl_Filter_TD_8228_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8979_input;
    tbl_SerializeFromObject_TD_8979_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8979_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8979_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8979_input.allocateHost();
    tbl_SerializeFromObject_TD_8979_input.loadHost();
    Table tbl_Filter_TD_9126_output("tbl_Filter_TD_9126_output", 6100000, 8, "");
    tbl_Filter_TD_9126_output.allocateHost();
    Table tbl_Filter_TD_9547_output("tbl_Filter_TD_9547_output", 6100000, 1, "");
    tbl_Filter_TD_9547_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9742_input;
    tbl_SerializeFromObject_TD_9742_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9742_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9742_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9742_input.allocateHost();
    tbl_SerializeFromObject_TD_9742_input.loadHost();
    Table tbl_SerializeFromObject_TD_10926_input;
    tbl_SerializeFromObject_TD_10926_input = Table("store_sales", store_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_10926_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10926_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10926_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_10926_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10926_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_10926_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_10926_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10926_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_10926_input.allocateHost();
    tbl_SerializeFromObject_TD_10926_input.loadHost();
    Table tbl_SerializeFromObject_TD_10751_input;
    tbl_SerializeFromObject_TD_10751_input = Table("customer_demographics", customer_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10751_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_10751_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10751_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10751_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10751_input.allocateHost();
    tbl_SerializeFromObject_TD_10751_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_764193_s, tv_r_Filter_9_764193_e;
    gettimeofday(&tv_r_Filter_9_764193_s, 0);
    SW_Filter_TD_9547(tbl_SerializeFromObject_TD_10751_input, tbl_Filter_TD_9547_output);
    gettimeofday(&tv_r_Filter_9_764193_e, 0);

    struct timeval tv_r_Filter_9_55526_s, tv_r_Filter_9_55526_e;
    gettimeofday(&tv_r_Filter_9_55526_s, 0);
    SW_Filter_TD_9126(tbl_SerializeFromObject_TD_10926_input, tbl_Filter_TD_9126_output);
    gettimeofday(&tv_r_Filter_9_55526_e, 0);

    struct timeval tv_r_Filter_8_384622_s, tv_r_Filter_8_384622_e;
    gettimeofday(&tv_r_Filter_8_384622_s, 0);
    SW_Filter_TD_8228(tbl_SerializeFromObject_TD_9742_input, tbl_Filter_TD_8228_output);
    gettimeofday(&tv_r_Filter_8_384622_e, 0);

    struct timeval tv_r_JOIN_INNER_8_659321_s, tv_r_JOIN_INNER_8_659321_e;
    gettimeofday(&tv_r_JOIN_INNER_8_659321_s, 0);
    SW_JOIN_INNER_TD_8826(tbl_Filter_TD_9126_output, tbl_Filter_TD_9547_output, tbl_JOIN_INNER_TD_8826_output);
    gettimeofday(&tv_r_JOIN_INNER_8_659321_e, 0);

    struct timeval tv_r_Filter_7_411068_s, tv_r_Filter_7_411068_e;
    gettimeofday(&tv_r_Filter_7_411068_s, 0);
    SW_Filter_TD_7158(tbl_SerializeFromObject_TD_8979_input, tbl_Filter_TD_7158_output);
    gettimeofday(&tv_r_Filter_7_411068_e, 0);

    struct timeval tv_r_JOIN_INNER_7_210752_s, tv_r_JOIN_INNER_7_210752_e;
    gettimeofday(&tv_r_JOIN_INNER_7_210752_s, 0);
    SW_JOIN_INNER_TD_7173(tbl_JOIN_INNER_TD_8826_output, tbl_Filter_TD_8228_output, tbl_JOIN_INNER_TD_7173_output);
    gettimeofday(&tv_r_JOIN_INNER_7_210752_e, 0);

    struct timeval tv_r_Filter_6_651995_s, tv_r_Filter_6_651995_e;
    gettimeofday(&tv_r_Filter_6_651995_s, 0);
    SW_Filter_TD_6386(tbl_SerializeFromObject_TD_7471_input, tbl_Filter_TD_6386_output);
    gettimeofday(&tv_r_Filter_6_651995_e, 0);

    struct timeval tv_r_JOIN_INNER_6_995090_s, tv_r_JOIN_INNER_6_995090_e;
    gettimeofday(&tv_r_JOIN_INNER_6_995090_s, 0);
    SW_JOIN_INNER_TD_6993(tbl_JOIN_INNER_TD_7173_output, tbl_Filter_TD_7158_output, tbl_JOIN_INNER_TD_6993_output);
    gettimeofday(&tv_r_JOIN_INNER_6_995090_e, 0);

    struct timeval tv_r_JOIN_INNER_5_223186_s, tv_r_JOIN_INNER_5_223186_e;
    gettimeofday(&tv_r_JOIN_INNER_5_223186_s, 0);
    SW_JOIN_INNER_TD_5516(tbl_JOIN_INNER_TD_6993_output, tbl_Filter_TD_6386_output, tbl_JOIN_INNER_TD_5516_output);
    gettimeofday(&tv_r_JOIN_INNER_5_223186_e, 0);

    struct timeval tv_r_Expand_4_582774_s, tv_r_Expand_4_582774_e;
    gettimeofday(&tv_r_Expand_4_582774_s, 0);
    SW_Expand_TD_4782(tbl_JOIN_INNER_TD_5516_output, tbl_Expand_TD_4782_output);
    gettimeofday(&tv_r_Expand_4_582774_e, 0);

    struct timeval tv_r_Aggregate_3_583778_s, tv_r_Aggregate_3_583778_e;
    gettimeofday(&tv_r_Aggregate_3_583778_s, 0);
    SW_Aggregate_TD_3788(tbl_Expand_TD_4782_output, tbl_Aggregate_TD_3788_output);
    gettimeofday(&tv_r_Aggregate_3_583778_e, 0);

    struct timeval tv_r_Sort_2_186231_s, tv_r_Sort_2_186231_e;
    gettimeofday(&tv_r_Sort_2_186231_s, 0);
    SW_Sort_TD_2924(tbl_Aggregate_TD_3788_output, tbl_Sort_TD_2924_output);
    gettimeofday(&tv_r_Sort_2_186231_e, 0);

    struct timeval tv_r_LocalLimit_1_36244_s, tv_r_LocalLimit_1_36244_e;
    gettimeofday(&tv_r_LocalLimit_1_36244_s, 0);
    SW_LocalLimit_TD_1661(tbl_Sort_TD_2924_output, tbl_LocalLimit_TD_1661_output);
    gettimeofday(&tv_r_LocalLimit_1_36244_e, 0);

    struct timeval tv_r_GlobalLimit_0_415777_s, tv_r_GlobalLimit_0_415777_e;
    gettimeofday(&tv_r_GlobalLimit_0_415777_s, 0);
    SW_GlobalLimit_TD_0740(tbl_LocalLimit_TD_1661_output, tbl_GlobalLimit_TD_0740_output);
    gettimeofday(&tv_r_GlobalLimit_0_415777_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_764193_s, &tv_r_Filter_9_764193_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10751_input: " << tbl_SerializeFromObject_TD_10751_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_55526_s, &tv_r_Filter_9_55526_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10926_input: " << tbl_SerializeFromObject_TD_10926_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_384622_s, &tv_r_Filter_8_384622_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9742_input: " << tbl_SerializeFromObject_TD_9742_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_659321_s, &tv_r_JOIN_INNER_8_659321_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9126_output: " << tbl_Filter_TD_9126_output.getNumRow() << " " << "tbl_Filter_TD_9547_output: " << tbl_Filter_TD_9547_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_411068_s, &tv_r_Filter_7_411068_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8979_input: " << tbl_SerializeFromObject_TD_8979_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_210752_s, &tv_r_JOIN_INNER_7_210752_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8826_output: " << tbl_JOIN_INNER_TD_8826_output.getNumRow() << " " << "tbl_Filter_TD_8228_output: " << tbl_Filter_TD_8228_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_651995_s, &tv_r_Filter_6_651995_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7471_input: " << tbl_SerializeFromObject_TD_7471_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_995090_s, &tv_r_JOIN_INNER_6_995090_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7173_output: " << tbl_JOIN_INNER_TD_7173_output.getNumRow() << " " << "tbl_Filter_TD_7158_output: " << tbl_Filter_TD_7158_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_223186_s, &tv_r_JOIN_INNER_5_223186_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6993_output: " << tbl_JOIN_INNER_TD_6993_output.getNumRow() << " " << "tbl_Filter_TD_6386_output: " << tbl_Filter_TD_6386_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_582774_s, &tv_r_Expand_4_582774_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5516_output: " << tbl_JOIN_INNER_TD_5516_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_583778_s, &tv_r_Aggregate_3_583778_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4782_output: " << tbl_Expand_TD_4782_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_186231_s, &tv_r_Sort_2_186231_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3788_output: " << tbl_Aggregate_TD_3788_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_36244_s, &tv_r_LocalLimit_1_36244_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2924_output: " << tbl_Sort_TD_2924_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_415777_s, &tv_r_GlobalLimit_0_415777_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1661_output: " << tbl_LocalLimit_TD_1661_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.0003226 * 1000 << "ms" << std::endl; 
    return 0; 
}
