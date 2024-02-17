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

#include "cfgFunc_q57.hpp" 
#include "q57.hpp" 

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
    std::cout << "NOTE:running query #57\n."; 
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
    Table tbl_GlobalLimit_TD_0515_output("tbl_GlobalLimit_TD_0515_output", 6100000, 9, "");
    tbl_GlobalLimit_TD_0515_output.allocateHost();
    Table tbl_LocalLimit_TD_1839_output("tbl_LocalLimit_TD_1839_output", 6100000, 9, "");
    tbl_LocalLimit_TD_1839_output.allocateHost();
    Table tbl_Sort_TD_2845_output("tbl_Sort_TD_2845_output", 6100000, 9, "");
    tbl_Sort_TD_2845_output.allocateHost();
    Table tbl_Project_TD_3450_output("tbl_Project_TD_3450_output", 6100000, 9, "");
    tbl_Project_TD_3450_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4697_output("tbl_JOIN_INNER_TD_4697_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_4697_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5275_output("tbl_JOIN_INNER_TD_5275_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_5275_output.allocateHost();
    Table tbl_Project_TD_5418_output("tbl_Project_TD_5418_output", 6100000, 5, "");
    tbl_Project_TD_5418_output.allocateHost();
    Table tbl_Filter_TD_6127_output("tbl_Filter_TD_6127_output", 6100000, 8, "");
    tbl_Filter_TD_6127_output.allocateHost();
    Table tbl_Project_TD_614_output("tbl_Project_TD_614_output", 6100000, 5, "");
    tbl_Project_TD_614_output.allocateHost();
    Table tbl_Window_TD_652_output("tbl_Window_TD_652_output", 6100000, 7, "");
    tbl_Window_TD_652_output.allocateHost();
    Table tbl_Window_TD_7220_output("tbl_Window_TD_7220_output", 6100000, 9, "");
    tbl_Window_TD_7220_output.allocateHost();
    Table tbl_Window_TD_7335_output("tbl_Window_TD_7335_output", 6100000, 7, "");
    tbl_Window_TD_7335_output.allocateHost();
    Table tbl_Aggregate_TD_7299_output("tbl_Aggregate_TD_7299_output", 6100000, 6, "");
    tbl_Aggregate_TD_7299_output.allocateHost();
    Table tbl_Filter_TD_8814_output("tbl_Filter_TD_8814_output", 6100000, 8, "");
    tbl_Filter_TD_8814_output.allocateHost();
    Table tbl_Aggregate_TD_8665_output("tbl_Aggregate_TD_8665_output", 6100000, 6, "");
    tbl_Aggregate_TD_8665_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8636_output("tbl_JOIN_INNER_TD_8636_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8636_output.allocateHost();
    Table tbl_Window_TD_984_output("tbl_Window_TD_984_output", 6100000, 8, "");
    tbl_Window_TD_984_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9247_output("tbl_JOIN_INNER_TD_9247_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_9247_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9254_output("tbl_JOIN_INNER_TD_9254_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_9254_output.allocateHost();
    Table tbl_Filter_TD_9245_output("tbl_Filter_TD_9245_output", 6100000, 2, "");
    tbl_Filter_TD_9245_output.allocateHost();
    Table tbl_Aggregate_TD_1045_output("tbl_Aggregate_TD_1045_output", 6100000, 7, "");
    tbl_Aggregate_TD_1045_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10116_output("tbl_JOIN_INNER_TD_10116_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10116_output.allocateHost();
    Table tbl_Filter_TD_10160_output("tbl_Filter_TD_10160_output", 6100000, 2, "");
    tbl_Filter_TD_10160_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10605_output("tbl_JOIN_INNER_TD_10605_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10605_output.allocateHost();
    Table tbl_Filter_TD_10354_output("tbl_Filter_TD_10354_output", 6100000, 3, "");
    tbl_Filter_TD_10354_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10270_input;
    tbl_SerializeFromObject_TD_10270_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10270_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_10270_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10270_input.allocateHost();
    tbl_SerializeFromObject_TD_10270_input.loadHost();
    Table tbl_JOIN_INNER_TD_11869_output("tbl_JOIN_INNER_TD_11869_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11869_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11291_output("tbl_JOIN_INNER_TD_11291_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_11291_output.allocateHost();
    Table tbl_Filter_TD_11655_output("tbl_Filter_TD_11655_output", 6100000, 3, "");
    tbl_Filter_TD_11655_output.allocateHost();
    Table tbl_SerializeFromObject_TD_113_input;
    tbl_SerializeFromObject_TD_113_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_113_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_113_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_113_input.allocateHost();
    tbl_SerializeFromObject_TD_113_input.loadHost();
    Table tbl_Filter_TD_11850_output("tbl_Filter_TD_11850_output", 6100000, 3, "");
    tbl_Filter_TD_11850_output.allocateHost();
    Table tbl_Filter_TD_11165_output("tbl_Filter_TD_11165_output", 6100000, 4, "");
    tbl_Filter_TD_11165_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11457_input;
    tbl_SerializeFromObject_TD_11457_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11457_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11457_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11457_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11457_input.allocateHost();
    tbl_SerializeFromObject_TD_11457_input.loadHost();
    Table tbl_JOIN_INNER_TD_12598_output("tbl_JOIN_INNER_TD_12598_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_12598_output.allocateHost();
    Table tbl_Filter_TD_12694_output("tbl_Filter_TD_12694_output", 6100000, 2, "");
    tbl_Filter_TD_12694_output.allocateHost();
    Table tbl_Filter_TD_12243_output("tbl_Filter_TD_12243_output", 6100000, 3, "");
    tbl_Filter_TD_12243_output.allocateHost();
    Table tbl_Filter_TD_12664_output("tbl_Filter_TD_12664_output", 6100000, 4, "");
    tbl_Filter_TD_12664_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12636_input;
    tbl_SerializeFromObject_TD_12636_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12636_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12636_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12636_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12636_input.allocateHost();
    tbl_SerializeFromObject_TD_12636_input.loadHost();
    Table tbl_SerializeFromObject_TD_12997_input;
    tbl_SerializeFromObject_TD_12997_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12997_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_12997_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12997_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12997_input.allocateHost();
    tbl_SerializeFromObject_TD_12997_input.loadHost();
    Table tbl_SerializeFromObject_TD_12767_input;
    tbl_SerializeFromObject_TD_12767_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12767_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12767_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_12767_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_12767_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_12767_input.allocateHost();
    tbl_SerializeFromObject_TD_12767_input.loadHost();
    Table tbl_JOIN_INNER_TD_13748_output("tbl_JOIN_INNER_TD_13748_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_13748_output.allocateHost();
    Table tbl_Filter_TD_13885_output("tbl_Filter_TD_13885_output", 6100000, 3, "");
    tbl_Filter_TD_13885_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13190_input;
    tbl_SerializeFromObject_TD_13190_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13190_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_13190_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13190_input.allocateHost();
    tbl_SerializeFromObject_TD_13190_input.loadHost();
    Table tbl_SerializeFromObject_TD_13326_input;
    tbl_SerializeFromObject_TD_13326_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13326_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13326_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13326_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13326_input.allocateHost();
    tbl_SerializeFromObject_TD_13326_input.loadHost();
    Table tbl_SerializeFromObject_TD_13361_input;
    tbl_SerializeFromObject_TD_13361_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13361_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13361_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_13361_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13361_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_13361_input.allocateHost();
    tbl_SerializeFromObject_TD_13361_input.loadHost();
    Table tbl_Filter_TD_14392_output("tbl_Filter_TD_14392_output", 6100000, 3, "");
    tbl_Filter_TD_14392_output.allocateHost();
    Table tbl_Filter_TD_14577_output("tbl_Filter_TD_14577_output", 6100000, 4, "");
    tbl_Filter_TD_14577_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14766_input;
    tbl_SerializeFromObject_TD_14766_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_14766_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_14766_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_14766_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_14766_input.allocateHost();
    tbl_SerializeFromObject_TD_14766_input.loadHost();
    Table tbl_SerializeFromObject_TD_1528_input;
    tbl_SerializeFromObject_TD_1528_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1528_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1528_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1528_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1528_input.allocateHost();
    tbl_SerializeFromObject_TD_1528_input.loadHost();
    Table tbl_SerializeFromObject_TD_15424_input;
    tbl_SerializeFromObject_TD_15424_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15424_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15424_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_15424_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_15424_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_15424_input.allocateHost();
    tbl_SerializeFromObject_TD_15424_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_471778_s, tv_r_Filter_14_471778_e;
    gettimeofday(&tv_r_Filter_14_471778_s, 0);
    SW_Filter_TD_14577(tbl_SerializeFromObject_TD_15424_input, tbl_Filter_TD_14577_output);
    gettimeofday(&tv_r_Filter_14_471778_e, 0);

    struct timeval tv_r_Filter_14_446785_s, tv_r_Filter_14_446785_e;
    gettimeofday(&tv_r_Filter_14_446785_s, 0);
    SW_Filter_TD_14392(tbl_SerializeFromObject_TD_1528_input, tbl_Filter_TD_14392_output);
    gettimeofday(&tv_r_Filter_14_446785_e, 0);

    struct timeval tv_r_Filter_13_142334_s, tv_r_Filter_13_142334_e;
    gettimeofday(&tv_r_Filter_13_142334_s, 0);
    SW_Filter_TD_13885(tbl_SerializeFromObject_TD_14766_input, tbl_Filter_TD_13885_output);
    gettimeofday(&tv_r_Filter_13_142334_e, 0);

    struct timeval tv_r_JOIN_INNER_13_346606_s, tv_r_JOIN_INNER_13_346606_e;
    gettimeofday(&tv_r_JOIN_INNER_13_346606_s, 0);
    SW_JOIN_INNER_TD_13748(tbl_Filter_TD_14392_output, tbl_Filter_TD_14577_output, tbl_JOIN_INNER_TD_13748_output);
    gettimeofday(&tv_r_JOIN_INNER_13_346606_e, 0);

    struct timeval tv_r_Filter_12_963696_s, tv_r_Filter_12_963696_e;
    gettimeofday(&tv_r_Filter_12_963696_s, 0);
    SW_Filter_TD_12664(tbl_SerializeFromObject_TD_13361_input, tbl_Filter_TD_12664_output);
    gettimeofday(&tv_r_Filter_12_963696_e, 0);

    struct timeval tv_r_Filter_12_460305_s, tv_r_Filter_12_460305_e;
    gettimeofday(&tv_r_Filter_12_460305_s, 0);
    SW_Filter_TD_12243(tbl_SerializeFromObject_TD_13326_input, tbl_Filter_TD_12243_output);
    gettimeofday(&tv_r_Filter_12_460305_e, 0);

    struct timeval tv_r_Filter_12_807982_s, tv_r_Filter_12_807982_e;
    gettimeofday(&tv_r_Filter_12_807982_s, 0);
    SW_Filter_TD_12694(tbl_SerializeFromObject_TD_13190_input, tbl_Filter_TD_12694_output);
    gettimeofday(&tv_r_Filter_12_807982_e, 0);

    struct timeval tv_r_JOIN_INNER_12_396582_s, tv_r_JOIN_INNER_12_396582_e;
    gettimeofday(&tv_r_JOIN_INNER_12_396582_s, 0);
    SW_JOIN_INNER_TD_12598(tbl_JOIN_INNER_TD_13748_output, tbl_Filter_TD_13885_output, tbl_JOIN_INNER_TD_12598_output);
    gettimeofday(&tv_r_JOIN_INNER_12_396582_e, 0);

    struct timeval tv_r_Filter_11_447086_s, tv_r_Filter_11_447086_e;
    gettimeofday(&tv_r_Filter_11_447086_s, 0);
    SW_Filter_TD_11165(tbl_SerializeFromObject_TD_12767_input, tbl_Filter_TD_11165_output);
    gettimeofday(&tv_r_Filter_11_447086_e, 0);

    struct timeval tv_r_Filter_11_302712_s, tv_r_Filter_11_302712_e;
    gettimeofday(&tv_r_Filter_11_302712_s, 0);
    SW_Filter_TD_11850(tbl_SerializeFromObject_TD_12997_input, tbl_Filter_TD_11850_output);
    gettimeofday(&tv_r_Filter_11_302712_e, 0);

    struct timeval tv_r_Filter_11_321139_s, tv_r_Filter_11_321139_e;
    gettimeofday(&tv_r_Filter_11_321139_s, 0);
    SW_Filter_TD_11655(tbl_SerializeFromObject_TD_12636_input, tbl_Filter_TD_11655_output);
    gettimeofday(&tv_r_Filter_11_321139_e, 0);

    struct timeval tv_r_JOIN_INNER_11_621206_s, tv_r_JOIN_INNER_11_621206_e;
    gettimeofday(&tv_r_JOIN_INNER_11_621206_s, 0);
    SW_JOIN_INNER_TD_11291(tbl_Filter_TD_12243_output, tbl_Filter_TD_12664_output, tbl_JOIN_INNER_TD_11291_output);
    gettimeofday(&tv_r_JOIN_INNER_11_621206_e, 0);

    struct timeval tv_r_JOIN_INNER_11_52894_s, tv_r_JOIN_INNER_11_52894_e;
    gettimeofday(&tv_r_JOIN_INNER_11_52894_s, 0);
    SW_JOIN_INNER_TD_11869(tbl_JOIN_INNER_TD_12598_output, tbl_Filter_TD_12694_output, tbl_JOIN_INNER_TD_11869_output);
    gettimeofday(&tv_r_JOIN_INNER_11_52894_e, 0);

    struct timeval tv_r_Filter_10_81146_s, tv_r_Filter_10_81146_e;
    gettimeofday(&tv_r_Filter_10_81146_s, 0);
    SW_Filter_TD_10354(tbl_SerializeFromObject_TD_11457_input, tbl_Filter_TD_10354_output);
    gettimeofday(&tv_r_Filter_10_81146_e, 0);

    struct timeval tv_r_JOIN_INNER_10_355408_s, tv_r_JOIN_INNER_10_355408_e;
    gettimeofday(&tv_r_JOIN_INNER_10_355408_s, 0);
    SW_JOIN_INNER_TD_10605(tbl_Filter_TD_11850_output, tbl_Filter_TD_11165_output, tbl_JOIN_INNER_TD_10605_output);
    gettimeofday(&tv_r_JOIN_INNER_10_355408_e, 0);

    struct timeval tv_r_Filter_10_368606_s, tv_r_Filter_10_368606_e;
    gettimeofday(&tv_r_Filter_10_368606_s, 0);
    SW_Filter_TD_10160(tbl_SerializeFromObject_TD_113_input, tbl_Filter_TD_10160_output);
    gettimeofday(&tv_r_Filter_10_368606_e, 0);

    struct timeval tv_r_JOIN_INNER_10_382244_s, tv_r_JOIN_INNER_10_382244_e;
    gettimeofday(&tv_r_JOIN_INNER_10_382244_s, 0);
    SW_JOIN_INNER_TD_10116(tbl_JOIN_INNER_TD_11291_output, tbl_Filter_TD_11655_output, tbl_JOIN_INNER_TD_10116_output);
    gettimeofday(&tv_r_JOIN_INNER_10_382244_e, 0);

    struct timeval tv_r_Aggregate_10_566176_s, tv_r_Aggregate_10_566176_e;
    gettimeofday(&tv_r_Aggregate_10_566176_s, 0);
    SW_Aggregate_TD_1045(tbl_JOIN_INNER_TD_11869_output, tbl_Aggregate_TD_1045_output);
    gettimeofday(&tv_r_Aggregate_10_566176_e, 0);

    struct timeval tv_r_Filter_9_265922_s, tv_r_Filter_9_265922_e;
    gettimeofday(&tv_r_Filter_9_265922_s, 0);
    SW_Filter_TD_9245(tbl_SerializeFromObject_TD_10270_input, tbl_Filter_TD_9245_output);
    gettimeofday(&tv_r_Filter_9_265922_e, 0);

    struct timeval tv_r_JOIN_INNER_9_108032_s, tv_r_JOIN_INNER_9_108032_e;
    gettimeofday(&tv_r_JOIN_INNER_9_108032_s, 0);
    SW_JOIN_INNER_TD_9254(tbl_JOIN_INNER_TD_10605_output, tbl_Filter_TD_10354_output, tbl_JOIN_INNER_TD_9254_output);
    gettimeofday(&tv_r_JOIN_INNER_9_108032_e, 0);

    struct timeval tv_r_JOIN_INNER_9_477129_s, tv_r_JOIN_INNER_9_477129_e;
    gettimeofday(&tv_r_JOIN_INNER_9_477129_s, 0);
    SW_JOIN_INNER_TD_9247(tbl_JOIN_INNER_TD_10116_output, tbl_Filter_TD_10160_output, tbl_JOIN_INNER_TD_9247_output);
    gettimeofday(&tv_r_JOIN_INNER_9_477129_e, 0);

    struct timeval tv_r_Window_9_848085_s, tv_r_Window_9_848085_e;
    gettimeofday(&tv_r_Window_9_848085_s, 0);
    SW_Window_TD_984(tbl_Aggregate_TD_1045_output, tbl_Window_TD_984_output);
    gettimeofday(&tv_r_Window_9_848085_e, 0);

    struct timeval tv_r_JOIN_INNER_8_398237_s, tv_r_JOIN_INNER_8_398237_e;
    gettimeofday(&tv_r_JOIN_INNER_8_398237_s, 0);
    SW_JOIN_INNER_TD_8636(tbl_JOIN_INNER_TD_9254_output, tbl_Filter_TD_9245_output, tbl_JOIN_INNER_TD_8636_output);
    gettimeofday(&tv_r_JOIN_INNER_8_398237_e, 0);

    struct timeval tv_r_Aggregate_8_818631_s, tv_r_Aggregate_8_818631_e;
    gettimeofday(&tv_r_Aggregate_8_818631_s, 0);
    SW_Aggregate_TD_8665(tbl_JOIN_INNER_TD_9247_output, tbl_Aggregate_TD_8665_output);
    gettimeofday(&tv_r_Aggregate_8_818631_e, 0);

    struct timeval tv_r_Filter_8_943452_s, tv_r_Filter_8_943452_e;
    gettimeofday(&tv_r_Filter_8_943452_s, 0);
    SW_Filter_TD_8814(tbl_Window_TD_984_output, tbl_Filter_TD_8814_output);
    gettimeofday(&tv_r_Filter_8_943452_e, 0);

    struct timeval tv_r_Aggregate_7_597921_s, tv_r_Aggregate_7_597921_e;
    gettimeofday(&tv_r_Aggregate_7_597921_s, 0);
    SW_Aggregate_TD_7299(tbl_JOIN_INNER_TD_8636_output, tbl_Aggregate_TD_7299_output);
    gettimeofday(&tv_r_Aggregate_7_597921_e, 0);

    struct timeval tv_r_Window_7_332661_s, tv_r_Window_7_332661_e;
    gettimeofday(&tv_r_Window_7_332661_s, 0);
    SW_Window_TD_7335(tbl_Aggregate_TD_8665_output, tbl_Window_TD_7335_output);
    gettimeofday(&tv_r_Window_7_332661_e, 0);

    struct timeval tv_r_Window_7_492820_s, tv_r_Window_7_492820_e;
    gettimeofday(&tv_r_Window_7_492820_s, 0);
    SW_Window_TD_7220(tbl_Filter_TD_8814_output, tbl_Window_TD_7220_output);
    gettimeofday(&tv_r_Window_7_492820_e, 0);

    struct timeval tv_r_Window_6_789363_s, tv_r_Window_6_789363_e;
    gettimeofday(&tv_r_Window_6_789363_s, 0);
    SW_Window_TD_652(tbl_Aggregate_TD_7299_output, tbl_Window_TD_652_output);
    gettimeofday(&tv_r_Window_6_789363_e, 0);

    struct timeval tv_r_Project_6_926783_s, tv_r_Project_6_926783_e;
    gettimeofday(&tv_r_Project_6_926783_s, 0);
    SW_Project_TD_614(tbl_Window_TD_7335_output, tbl_Project_TD_614_output);
    gettimeofday(&tv_r_Project_6_926783_e, 0);

    struct timeval tv_r_Filter_6_511923_s, tv_r_Filter_6_511923_e;
    gettimeofday(&tv_r_Filter_6_511923_s, 0);
    SW_Filter_TD_6127(tbl_Window_TD_7220_output, tbl_Filter_TD_6127_output);
    gettimeofday(&tv_r_Filter_6_511923_e, 0);

    struct timeval tv_r_Project_5_791558_s, tv_r_Project_5_791558_e;
    gettimeofday(&tv_r_Project_5_791558_s, 0);
    SW_Project_TD_5418(tbl_Window_TD_652_output, tbl_Project_TD_5418_output);
    gettimeofday(&tv_r_Project_5_791558_e, 0);

    struct timeval tv_r_JOIN_INNER_5_765135_s, tv_r_JOIN_INNER_5_765135_e;
    gettimeofday(&tv_r_JOIN_INNER_5_765135_s, 0);
    SW_JOIN_INNER_TD_5275(tbl_Filter_TD_6127_output, tbl_Project_TD_614_output, tbl_JOIN_INNER_TD_5275_output);
    gettimeofday(&tv_r_JOIN_INNER_5_765135_e, 0);

    struct timeval tv_r_JOIN_INNER_4_275420_s, tv_r_JOIN_INNER_4_275420_e;
    gettimeofday(&tv_r_JOIN_INNER_4_275420_s, 0);
    SW_JOIN_INNER_TD_4697(tbl_JOIN_INNER_TD_5275_output, tbl_Project_TD_5418_output, tbl_JOIN_INNER_TD_4697_output);
    gettimeofday(&tv_r_JOIN_INNER_4_275420_e, 0);

    struct timeval tv_r_Project_3_425415_s, tv_r_Project_3_425415_e;
    gettimeofday(&tv_r_Project_3_425415_s, 0);
    SW_Project_TD_3450(tbl_JOIN_INNER_TD_4697_output, tbl_Project_TD_3450_output);
    gettimeofday(&tv_r_Project_3_425415_e, 0);

    struct timeval tv_r_Sort_2_842437_s, tv_r_Sort_2_842437_e;
    gettimeofday(&tv_r_Sort_2_842437_s, 0);
    SW_Sort_TD_2845(tbl_Project_TD_3450_output, tbl_Sort_TD_2845_output);
    gettimeofday(&tv_r_Sort_2_842437_e, 0);

    struct timeval tv_r_LocalLimit_1_617501_s, tv_r_LocalLimit_1_617501_e;
    gettimeofday(&tv_r_LocalLimit_1_617501_s, 0);
    SW_LocalLimit_TD_1839(tbl_Sort_TD_2845_output, tbl_LocalLimit_TD_1839_output);
    gettimeofday(&tv_r_LocalLimit_1_617501_e, 0);

    struct timeval tv_r_GlobalLimit_0_702639_s, tv_r_GlobalLimit_0_702639_e;
    gettimeofday(&tv_r_GlobalLimit_0_702639_s, 0);
    SW_GlobalLimit_TD_0515(tbl_LocalLimit_TD_1839_output, tbl_GlobalLimit_TD_0515_output);
    gettimeofday(&tv_r_GlobalLimit_0_702639_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_471778_s, &tv_r_Filter_14_471778_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15424_input: " << tbl_SerializeFromObject_TD_15424_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_446785_s, &tv_r_Filter_14_446785_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1528_input: " << tbl_SerializeFromObject_TD_1528_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_142334_s, &tv_r_Filter_13_142334_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14766_input: " << tbl_SerializeFromObject_TD_14766_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_346606_s, &tv_r_JOIN_INNER_13_346606_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14392_output: " << tbl_Filter_TD_14392_output.getNumRow() << " " << "tbl_Filter_TD_14577_output: " << tbl_Filter_TD_14577_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_963696_s, &tv_r_Filter_12_963696_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13361_input: " << tbl_SerializeFromObject_TD_13361_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_460305_s, &tv_r_Filter_12_460305_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13326_input: " << tbl_SerializeFromObject_TD_13326_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_807982_s, &tv_r_Filter_12_807982_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13190_input: " << tbl_SerializeFromObject_TD_13190_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_396582_s, &tv_r_JOIN_INNER_12_396582_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13748_output: " << tbl_JOIN_INNER_TD_13748_output.getNumRow() << " " << "tbl_Filter_TD_13885_output: " << tbl_Filter_TD_13885_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_447086_s, &tv_r_Filter_11_447086_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12767_input: " << tbl_SerializeFromObject_TD_12767_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_302712_s, &tv_r_Filter_11_302712_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12997_input: " << tbl_SerializeFromObject_TD_12997_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_321139_s, &tv_r_Filter_11_321139_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12636_input: " << tbl_SerializeFromObject_TD_12636_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_621206_s, &tv_r_JOIN_INNER_11_621206_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12243_output: " << tbl_Filter_TD_12243_output.getNumRow() << " " << "tbl_Filter_TD_12664_output: " << tbl_Filter_TD_12664_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_52894_s, &tv_r_JOIN_INNER_11_52894_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12598_output: " << tbl_JOIN_INNER_TD_12598_output.getNumRow() << " " << "tbl_Filter_TD_12694_output: " << tbl_Filter_TD_12694_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_81146_s, &tv_r_Filter_10_81146_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11457_input: " << tbl_SerializeFromObject_TD_11457_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_355408_s, &tv_r_JOIN_INNER_10_355408_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11850_output: " << tbl_Filter_TD_11850_output.getNumRow() << " " << "tbl_Filter_TD_11165_output: " << tbl_Filter_TD_11165_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_368606_s, &tv_r_Filter_10_368606_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_113_input: " << tbl_SerializeFromObject_TD_113_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_382244_s, &tv_r_JOIN_INNER_10_382244_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11291_output: " << tbl_JOIN_INNER_TD_11291_output.getNumRow() << " " << "tbl_Filter_TD_11655_output: " << tbl_Filter_TD_11655_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_566176_s, &tv_r_Aggregate_10_566176_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11869_output: " << tbl_JOIN_INNER_TD_11869_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_265922_s, &tv_r_Filter_9_265922_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10270_input: " << tbl_SerializeFromObject_TD_10270_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_108032_s, &tv_r_JOIN_INNER_9_108032_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10605_output: " << tbl_JOIN_INNER_TD_10605_output.getNumRow() << " " << "tbl_Filter_TD_10354_output: " << tbl_Filter_TD_10354_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_477129_s, &tv_r_JOIN_INNER_9_477129_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10116_output: " << tbl_JOIN_INNER_TD_10116_output.getNumRow() << " " << "tbl_Filter_TD_10160_output: " << tbl_Filter_TD_10160_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_9: " << tvdiff(&tv_r_Window_9_848085_s, &tv_r_Window_9_848085_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1045_output: " << tbl_Aggregate_TD_1045_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_398237_s, &tv_r_JOIN_INNER_8_398237_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9254_output: " << tbl_JOIN_INNER_TD_9254_output.getNumRow() << " " << "tbl_Filter_TD_9245_output: " << tbl_Filter_TD_9245_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_818631_s, &tv_r_Aggregate_8_818631_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9247_output: " << tbl_JOIN_INNER_TD_9247_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_943452_s, &tv_r_Filter_8_943452_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_984_output: " << tbl_Window_TD_984_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_597921_s, &tv_r_Aggregate_7_597921_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8636_output: " << tbl_JOIN_INNER_TD_8636_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_332661_s, &tv_r_Window_7_332661_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8665_output: " << tbl_Aggregate_TD_8665_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_492820_s, &tv_r_Window_7_492820_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8814_output: " << tbl_Filter_TD_8814_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_6: " << tvdiff(&tv_r_Window_6_789363_s, &tv_r_Window_6_789363_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7299_output: " << tbl_Aggregate_TD_7299_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_926783_s, &tv_r_Project_6_926783_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7335_output: " << tbl_Window_TD_7335_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_511923_s, &tv_r_Filter_6_511923_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7220_output: " << tbl_Window_TD_7220_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_791558_s, &tv_r_Project_5_791558_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_652_output: " << tbl_Window_TD_652_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_765135_s, &tv_r_JOIN_INNER_5_765135_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6127_output: " << tbl_Filter_TD_6127_output.getNumRow() << " " << "tbl_Project_TD_614_output: " << tbl_Project_TD_614_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_275420_s, &tv_r_JOIN_INNER_4_275420_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5275_output: " << tbl_JOIN_INNER_TD_5275_output.getNumRow() << " " << "tbl_Project_TD_5418_output: " << tbl_Project_TD_5418_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_425415_s, &tv_r_Project_3_425415_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4697_output: " << tbl_JOIN_INNER_TD_4697_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_842437_s, &tv_r_Sort_2_842437_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3450_output: " << tbl_Project_TD_3450_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_617501_s, &tv_r_LocalLimit_1_617501_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2845_output: " << tbl_Sort_TD_2845_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_702639_s, &tv_r_GlobalLimit_0_702639_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1839_output: " << tbl_LocalLimit_TD_1839_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.4083705 * 1000 << "ms" << std::endl; 
    return 0; 
}
