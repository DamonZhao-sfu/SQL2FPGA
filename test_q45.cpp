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

#include "cfgFunc_q45.hpp" 
#include "q45.hpp" 

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
    std::cout << "NOTE:running query #45\n."; 
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
    Table tbl_GlobalLimit_TD_0964_output("tbl_GlobalLimit_TD_0964_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0964_output.allocateHost();
    Table tbl_LocalLimit_TD_1554_output("tbl_LocalLimit_TD_1554_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1554_output.allocateHost();
    Table tbl_Sort_TD_2813_output("tbl_Sort_TD_2813_output", 6100000, 3, "");
    tbl_Sort_TD_2813_output.allocateHost();
    Table tbl_Aggregate_TD_3384_output("tbl_Aggregate_TD_3384_output", 6100000, 3, "");
    tbl_Aggregate_TD_3384_output.allocateHost();
    Table tbl_Filter_TD_4716_output("tbl_Filter_TD_4716_output", 6100000, 3, "");
    tbl_Filter_TD_4716_output.allocateHost();
    Table tbl_JOIN_EXISTENCEJOIN(EXISTS#5157)_TD_5499_output("tbl_JOIN_EXISTENCEJOIN(EXISTS#5157)_TD_5499_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOIN(EXISTS#5157)_TD_5499_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6244_output("tbl_JOIN_INNER_TD_6244_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6244_output.allocateHost();
    Table tbl_Filter_TD_6764_output("tbl_Filter_TD_6764_output", 6100000, 1, "");
    tbl_Filter_TD_6764_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7939_output("tbl_JOIN_INNER_TD_7939_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7939_output.allocateHost();
    Table tbl_Filter_TD_7807_output("tbl_Filter_TD_7807_output", 6100000, 2, "");
    tbl_Filter_TD_7807_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7319_input;
    tbl_SerializeFromObject_TD_7319_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7319_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7319_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7319_input.allocateHost();
    tbl_SerializeFromObject_TD_7319_input.loadHost();
    Table tbl_JOIN_INNER_TD_840_output("tbl_JOIN_INNER_TD_840_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_840_output.allocateHost();
    Table tbl_Filter_TD_867_output("tbl_Filter_TD_867_output", 6100000, 1, "");
    tbl_Filter_TD_867_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8630_input;
    tbl_SerializeFromObject_TD_8630_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8630_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8630_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8630_input.allocateHost();
    tbl_SerializeFromObject_TD_8630_input.loadHost();
    Table tbl_JOIN_INNER_TD_9199_output("tbl_JOIN_INNER_TD_9199_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_9199_output.allocateHost();
    Table tbl_Filter_TD_9787_output("tbl_Filter_TD_9787_output", 6100000, 3, "");
    tbl_Filter_TD_9787_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9759_input;
    tbl_SerializeFromObject_TD_9759_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9759_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9759_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_9759_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9759_input.allocateHost();
    tbl_SerializeFromObject_TD_9759_input.loadHost();
    Table tbl_Filter_TD_10400_output("tbl_Filter_TD_10400_output", 6100000, 4, "");
    tbl_Filter_TD_10400_output.allocateHost();
    Table tbl_Filter_TD_10945_output("tbl_Filter_TD_10945_output", 6100000, 2, "");
    tbl_Filter_TD_10945_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10699_input;
    tbl_SerializeFromObject_TD_10699_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10699_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10699_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10699_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10699_input.allocateHost();
    tbl_SerializeFromObject_TD_10699_input.loadHost();
    Table tbl_SerializeFromObject_TD_11800_input;
    tbl_SerializeFromObject_TD_11800_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11800_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11800_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_11800_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11800_input.addCol("ws_sales_price", 4);
    tbl_SerializeFromObject_TD_11800_input.allocateHost();
    tbl_SerializeFromObject_TD_11800_input.loadHost();
    Table tbl_SerializeFromObject_TD_11939_input;
    tbl_SerializeFromObject_TD_11939_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11939_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11939_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_11939_input.allocateHost();
    tbl_SerializeFromObject_TD_11939_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_1715_s, tv_r_Filter_10_1715_e;
    gettimeofday(&tv_r_Filter_10_1715_s, 0);
    SW_Filter_TD_10945(tbl_SerializeFromObject_TD_11939_input, tbl_Filter_TD_10945_output);
    gettimeofday(&tv_r_Filter_10_1715_e, 0);

    struct timeval tv_r_Filter_10_281026_s, tv_r_Filter_10_281026_e;
    gettimeofday(&tv_r_Filter_10_281026_s, 0);
    SW_Filter_TD_10400(tbl_SerializeFromObject_TD_11800_input, tbl_Filter_TD_10400_output);
    gettimeofday(&tv_r_Filter_10_281026_e, 0);

    struct timeval tv_r_Filter_9_26646_s, tv_r_Filter_9_26646_e;
    gettimeofday(&tv_r_Filter_9_26646_s, 0);
    SW_Filter_TD_9787(tbl_SerializeFromObject_TD_10699_input, tbl_Filter_TD_9787_output);
    gettimeofday(&tv_r_Filter_9_26646_e, 0);

    struct timeval tv_r_JOIN_INNER_9_556628_s, tv_r_JOIN_INNER_9_556628_e;
    gettimeofday(&tv_r_JOIN_INNER_9_556628_s, 0);
    SW_JOIN_INNER_TD_9199(tbl_Filter_TD_10400_output, tbl_Filter_TD_10945_output, tbl_JOIN_INNER_TD_9199_output);
    gettimeofday(&tv_r_JOIN_INNER_9_556628_e, 0);

    struct timeval tv_r_Filter_8_502895_s, tv_r_Filter_8_502895_e;
    gettimeofday(&tv_r_Filter_8_502895_s, 0);
    SW_Filter_TD_867(tbl_SerializeFromObject_TD_9759_input, tbl_Filter_TD_867_output);
    gettimeofday(&tv_r_Filter_8_502895_e, 0);

    struct timeval tv_r_JOIN_INNER_8_404776_s, tv_r_JOIN_INNER_8_404776_e;
    gettimeofday(&tv_r_JOIN_INNER_8_404776_s, 0);
    SW_JOIN_INNER_TD_840(tbl_JOIN_INNER_TD_9199_output, tbl_Filter_TD_9787_output, tbl_JOIN_INNER_TD_840_output);
    gettimeofday(&tv_r_JOIN_INNER_8_404776_e, 0);

    struct timeval tv_r_Filter_7_851499_s, tv_r_Filter_7_851499_e;
    gettimeofday(&tv_r_Filter_7_851499_s, 0);
    SW_Filter_TD_7807(tbl_SerializeFromObject_TD_8630_input, tbl_Filter_TD_7807_output);
    gettimeofday(&tv_r_Filter_7_851499_e, 0);

    struct timeval tv_r_JOIN_INNER_7_556322_s, tv_r_JOIN_INNER_7_556322_e;
    gettimeofday(&tv_r_JOIN_INNER_7_556322_s, 0);
    SW_JOIN_INNER_TD_7939(tbl_JOIN_INNER_TD_840_output, tbl_Filter_TD_867_output, tbl_JOIN_INNER_TD_7939_output);
    gettimeofday(&tv_r_JOIN_INNER_7_556322_e, 0);

    struct timeval tv_r_Filter_6_597027_s, tv_r_Filter_6_597027_e;
    gettimeofday(&tv_r_Filter_6_597027_s, 0);
    SW_Filter_TD_6764(tbl_SerializeFromObject_TD_7319_input, tbl_Filter_TD_6764_output);
    gettimeofday(&tv_r_Filter_6_597027_e, 0);

    struct timeval tv_r_JOIN_INNER_6_771643_s, tv_r_JOIN_INNER_6_771643_e;
    gettimeofday(&tv_r_JOIN_INNER_6_771643_s, 0);
    SW_JOIN_INNER_TD_6244(tbl_JOIN_INNER_TD_7939_output, tbl_Filter_TD_7807_output, tbl_JOIN_INNER_TD_6244_output);
    gettimeofday(&tv_r_JOIN_INNER_6_771643_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOIN(EXISTS#5157)_5_987069_s, tv_r_JOIN_EXISTENCEJOIN(EXISTS#5157)_5_987069_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#5157)_5_987069_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499(tbl_JOIN_INNER_TD_6244_output, tbl_Filter_TD_6764_output, tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#5157)_5_987069_e, 0);

    struct timeval tv_r_Filter_4_448247_s, tv_r_Filter_4_448247_e;
    gettimeofday(&tv_r_Filter_4_448247_s, 0);
    SW_Filter_TD_4716(tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output, tbl_Filter_TD_4716_output);
    gettimeofday(&tv_r_Filter_4_448247_e, 0);

    struct timeval tv_r_Aggregate_3_444579_s, tv_r_Aggregate_3_444579_e;
    gettimeofday(&tv_r_Aggregate_3_444579_s, 0);
    SW_Aggregate_TD_3384(tbl_Filter_TD_4716_output, tbl_Aggregate_TD_3384_output);
    gettimeofday(&tv_r_Aggregate_3_444579_e, 0);

    struct timeval tv_r_Sort_2_740530_s, tv_r_Sort_2_740530_e;
    gettimeofday(&tv_r_Sort_2_740530_s, 0);
    SW_Sort_TD_2813(tbl_Aggregate_TD_3384_output, tbl_Sort_TD_2813_output);
    gettimeofday(&tv_r_Sort_2_740530_e, 0);

    struct timeval tv_r_LocalLimit_1_708001_s, tv_r_LocalLimit_1_708001_e;
    gettimeofday(&tv_r_LocalLimit_1_708001_s, 0);
    SW_LocalLimit_TD_1554(tbl_Sort_TD_2813_output, tbl_LocalLimit_TD_1554_output);
    gettimeofday(&tv_r_LocalLimit_1_708001_e, 0);

    struct timeval tv_r_GlobalLimit_0_166107_s, tv_r_GlobalLimit_0_166107_e;
    gettimeofday(&tv_r_GlobalLimit_0_166107_s, 0);
    SW_GlobalLimit_TD_0964(tbl_LocalLimit_TD_1554_output, tbl_GlobalLimit_TD_0964_output);
    gettimeofday(&tv_r_GlobalLimit_0_166107_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_1715_s, &tv_r_Filter_10_1715_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11939_input: " << tbl_SerializeFromObject_TD_11939_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_281026_s, &tv_r_Filter_10_281026_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11800_input: " << tbl_SerializeFromObject_TD_11800_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_26646_s, &tv_r_Filter_9_26646_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10699_input: " << tbl_SerializeFromObject_TD_10699_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_556628_s, &tv_r_JOIN_INNER_9_556628_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10400_output: " << tbl_Filter_TD_10400_output.getNumRow() << " " << "tbl_Filter_TD_10945_output: " << tbl_Filter_TD_10945_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_502895_s, &tv_r_Filter_8_502895_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9759_input: " << tbl_SerializeFromObject_TD_9759_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_404776_s, &tv_r_JOIN_INNER_8_404776_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9199_output: " << tbl_JOIN_INNER_TD_9199_output.getNumRow() << " " << "tbl_Filter_TD_9787_output: " << tbl_Filter_TD_9787_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_851499_s, &tv_r_Filter_7_851499_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8630_input: " << tbl_SerializeFromObject_TD_8630_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_556322_s, &tv_r_JOIN_INNER_7_556322_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_840_output: " << tbl_JOIN_INNER_TD_840_output.getNumRow() << " " << "tbl_Filter_TD_867_output: " << tbl_Filter_TD_867_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_597027_s, &tv_r_Filter_6_597027_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7319_input: " << tbl_SerializeFromObject_TD_7319_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_771643_s, &tv_r_JOIN_INNER_6_771643_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7939_output: " << tbl_JOIN_INNER_TD_7939_output.getNumRow() << " " << "tbl_Filter_TD_7807_output: " << tbl_Filter_TD_7807_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOIN(EXISTS#5157)_5: " << tvdiff(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#5157)_5_987069_s, &tv_r_JOIN_EXISTENCEJOIN(EXISTS#5157)_5_987069_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6244_output: " << tbl_JOIN_INNER_TD_6244_output.getNumRow() << " " << "tbl_Filter_TD_6764_output: " << tbl_Filter_TD_6764_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_448247_s, &tv_r_Filter_4_448247_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output: " << tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_444579_s, &tv_r_Aggregate_3_444579_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4716_output: " << tbl_Filter_TD_4716_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_740530_s, &tv_r_Sort_2_740530_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3384_output: " << tbl_Aggregate_TD_3384_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_708001_s, &tv_r_LocalLimit_1_708001_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2813_output: " << tbl_Sort_TD_2813_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_166107_s, &tv_r_GlobalLimit_0_166107_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1554_output: " << tbl_LocalLimit_TD_1554_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.9685559 * 1000 << "ms" << std::endl; 
    return 0; 
}
