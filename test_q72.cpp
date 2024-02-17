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

#include "cfgFunc_q72.hpp" 
#include "q72.hpp" 

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
    std::cout << "NOTE:running query #72\n."; 
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
    Table tbl_GlobalLimit_TD_0890_output("tbl_GlobalLimit_TD_0890_output", 6100000, 6, "");
    tbl_GlobalLimit_TD_0890_output.allocateHost();
    Table tbl_LocalLimit_TD_1337_output("tbl_LocalLimit_TD_1337_output", 6100000, 6, "");
    tbl_LocalLimit_TD_1337_output.allocateHost();
    Table tbl_Sort_TD_2669_output("tbl_Sort_TD_2669_output", 6100000, 6, "");
    tbl_Sort_TD_2669_output.allocateHost();
    Table tbl_Aggregate_TD_3300_output("tbl_Aggregate_TD_3300_output", 6100000, 6, "");
    tbl_Aggregate_TD_3300_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_4899_output("tbl_JOIN_LEFTOUTER_TD_4899_output", 6100000, 4, "");
    tbl_JOIN_LEFTOUTER_TD_4899_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_5291_output("tbl_JOIN_LEFTOUTER_TD_5291_output", 6100000, 6, "");
    tbl_JOIN_LEFTOUTER_TD_5291_output.allocateHost();
    Table tbl_Filter_TD_5163_output("tbl_Filter_TD_5163_output", 6100000, 2, "");
    tbl_Filter_TD_5163_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6914_output("tbl_JOIN_INNER_TD_6914_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6914_output.allocateHost();
    Table tbl_Filter_TD_6112_output("tbl_Filter_TD_6112_output", 6100000, 1, "");
    tbl_Filter_TD_6112_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6819_input;
    tbl_SerializeFromObject_TD_6819_input = Table("catalog_returns", catalog_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6819_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_6819_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_6819_input.allocateHost();
    tbl_SerializeFromObject_TD_6819_input.loadHost();
    Table tbl_JOIN_INNER_TD_7736_output("tbl_JOIN_INNER_TD_7736_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_7736_output.allocateHost();
    Table tbl_Filter_TD_7432_output("tbl_Filter_TD_7432_output", 6100000, 2, "");
    tbl_Filter_TD_7432_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7463_input;
    tbl_SerializeFromObject_TD_7463_input = Table("promotion", promotion_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7463_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_7463_input.allocateHost();
    tbl_SerializeFromObject_TD_7463_input.loadHost();
    Table tbl_JOIN_INNER_TD_831_output("tbl_JOIN_INNER_TD_831_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_831_output.allocateHost();
    Table tbl_Filter_TD_8712_output("tbl_Filter_TD_8712_output", 6100000, 2, "");
    tbl_Filter_TD_8712_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8716_input;
    tbl_SerializeFromObject_TD_8716_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8716_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8716_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_8716_input.allocateHost();
    tbl_SerializeFromObject_TD_8716_input.loadHost();
    Table tbl_JOIN_INNER_TD_9999_output("tbl_JOIN_INNER_TD_9999_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_9999_output.allocateHost();
    Table tbl_Filter_TD_9757_output("tbl_Filter_TD_9757_output", 6100000, 3, "");
    tbl_Filter_TD_9757_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9187_input;
    tbl_SerializeFromObject_TD_9187_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9187_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9187_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_9187_input.allocateHost();
    tbl_SerializeFromObject_TD_9187_input.loadHost();
    Table tbl_JOIN_INNER_TD_10128_output("tbl_JOIN_INNER_TD_10128_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10128_output.allocateHost();
    Table tbl_Filter_TD_10598_output("tbl_Filter_TD_10598_output", 6100000, 1, "");
    tbl_Filter_TD_10598_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10832_input;
    tbl_SerializeFromObject_TD_10832_input = Table("date_dim", date_dim_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10832_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10832_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10832_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_10832_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10832_input.allocateHost();
    tbl_SerializeFromObject_TD_10832_input.loadHost();
    Table tbl_JOIN_INNER_TD_11196_output("tbl_JOIN_INNER_TD_11196_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_11196_output.allocateHost();
    Table tbl_Filter_TD_11405_output("tbl_Filter_TD_11405_output", 6100000, 1, "");
    tbl_Filter_TD_11405_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11948_input;
    tbl_SerializeFromObject_TD_11948_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11948_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_11948_input.addCol("hd_buy_potential", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11948_input.allocateHost();
    tbl_SerializeFromObject_TD_11948_input.loadHost();
    Table tbl_JOIN_INNER_TD_12935_output("tbl_JOIN_INNER_TD_12935_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_12935_output.allocateHost();
    Table tbl_Filter_TD_12898_output("tbl_Filter_TD_12898_output", 6100000, 2, "");
    tbl_Filter_TD_12898_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1273_input;
    tbl_SerializeFromObject_TD_1273_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1273_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_1273_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1273_input.allocateHost();
    tbl_SerializeFromObject_TD_1273_input.loadHost();
    Table tbl_JOIN_INNER_TD_13575_output("tbl_JOIN_INNER_TD_13575_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_13575_output.allocateHost();
    Table tbl_Filter_TD_13686_output("tbl_Filter_TD_13686_output", 6100000, 2, "");
    tbl_Filter_TD_13686_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13860_input;
    tbl_SerializeFromObject_TD_13860_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13860_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13860_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13860_input.allocateHost();
    tbl_SerializeFromObject_TD_13860_input.loadHost();
    Table tbl_Filter_TD_14916_output("tbl_Filter_TD_14916_output", 6100000, 8, "");
    tbl_Filter_TD_14916_output.allocateHost();
    Table tbl_Filter_TD_14437_output("tbl_Filter_TD_14437_output", 6100000, 4, "");
    tbl_Filter_TD_14437_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14993_input;
    tbl_SerializeFromObject_TD_14993_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14993_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_14993_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14993_input.allocateHost();
    tbl_SerializeFromObject_TD_14993_input.loadHost();
    Table tbl_SerializeFromObject_TD_15297_input;
    tbl_SerializeFromObject_TD_15297_input = Table("catalog_sales", catalog_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_15297_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15297_input.addCol("cs_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_15297_input.addCol("cs_bill_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_15297_input.addCol("cs_bill_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_15297_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_15297_input.addCol("cs_promo_sk", 4);
    tbl_SerializeFromObject_TD_15297_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_15297_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_15297_input.allocateHost();
    tbl_SerializeFromObject_TD_15297_input.loadHost();
    Table tbl_SerializeFromObject_TD_15742_input;
    tbl_SerializeFromObject_TD_15742_input = Table("inventory", inventory_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15742_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_15742_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_15742_input.addCol("inv_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_15742_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_15742_input.allocateHost();
    tbl_SerializeFromObject_TD_15742_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_941464_s, tv_r_Filter_14_941464_e;
    gettimeofday(&tv_r_Filter_14_941464_s, 0);
    SW_Filter_TD_14437(tbl_SerializeFromObject_TD_15742_input, tbl_Filter_TD_14437_output);
    gettimeofday(&tv_r_Filter_14_941464_e, 0);

    struct timeval tv_r_Filter_14_888232_s, tv_r_Filter_14_888232_e;
    gettimeofday(&tv_r_Filter_14_888232_s, 0);
    SW_Filter_TD_14916(tbl_SerializeFromObject_TD_15297_input, tbl_Filter_TD_14916_output);
    gettimeofday(&tv_r_Filter_14_888232_e, 0);

    struct timeval tv_r_Filter_13_832403_s, tv_r_Filter_13_832403_e;
    gettimeofday(&tv_r_Filter_13_832403_s, 0);
    SW_Filter_TD_13686(tbl_SerializeFromObject_TD_14993_input, tbl_Filter_TD_13686_output);
    gettimeofday(&tv_r_Filter_13_832403_e, 0);

    struct timeval tv_r_JOIN_INNER_13_497017_s, tv_r_JOIN_INNER_13_497017_e;
    gettimeofday(&tv_r_JOIN_INNER_13_497017_s, 0);
    SW_JOIN_INNER_TD_13575(tbl_Filter_TD_14916_output, tbl_Filter_TD_14437_output, tbl_JOIN_INNER_TD_13575_output);
    gettimeofday(&tv_r_JOIN_INNER_13_497017_e, 0);

    struct timeval tv_r_Filter_12_490623_s, tv_r_Filter_12_490623_e;
    gettimeofday(&tv_r_Filter_12_490623_s, 0);
    SW_Filter_TD_12898(tbl_SerializeFromObject_TD_13860_input, tbl_Filter_TD_12898_output);
    gettimeofday(&tv_r_Filter_12_490623_e, 0);

    struct timeval tv_r_JOIN_INNER_12_878072_s, tv_r_JOIN_INNER_12_878072_e;
    gettimeofday(&tv_r_JOIN_INNER_12_878072_s, 0);
    SW_JOIN_INNER_TD_12935(tbl_JOIN_INNER_TD_13575_output, tbl_Filter_TD_13686_output, tbl_JOIN_INNER_TD_12935_output);
    gettimeofday(&tv_r_JOIN_INNER_12_878072_e, 0);

    struct timeval tv_r_Filter_11_834327_s, tv_r_Filter_11_834327_e;
    gettimeofday(&tv_r_Filter_11_834327_s, 0);
    SW_Filter_TD_11405(tbl_SerializeFromObject_TD_1273_input, tbl_Filter_TD_11405_output);
    gettimeofday(&tv_r_Filter_11_834327_e, 0);

    struct timeval tv_r_JOIN_INNER_11_15576_s, tv_r_JOIN_INNER_11_15576_e;
    gettimeofday(&tv_r_JOIN_INNER_11_15576_s, 0);
    SW_JOIN_INNER_TD_11196(tbl_JOIN_INNER_TD_12935_output, tbl_Filter_TD_12898_output, tbl_JOIN_INNER_TD_11196_output);
    gettimeofday(&tv_r_JOIN_INNER_11_15576_e, 0);

    struct timeval tv_r_Filter_10_59146_s, tv_r_Filter_10_59146_e;
    gettimeofday(&tv_r_Filter_10_59146_s, 0);
    SW_Filter_TD_10598(tbl_SerializeFromObject_TD_11948_input, tbl_Filter_TD_10598_output);
    gettimeofday(&tv_r_Filter_10_59146_e, 0);

    struct timeval tv_r_JOIN_INNER_10_916856_s, tv_r_JOIN_INNER_10_916856_e;
    gettimeofday(&tv_r_JOIN_INNER_10_916856_s, 0);
    SW_JOIN_INNER_TD_10128(tbl_JOIN_INNER_TD_11196_output, tbl_Filter_TD_11405_output, tbl_JOIN_INNER_TD_10128_output);
    gettimeofday(&tv_r_JOIN_INNER_10_916856_e, 0);

    struct timeval tv_r_Filter_9_152590_s, tv_r_Filter_9_152590_e;
    gettimeofday(&tv_r_Filter_9_152590_s, 0);
    SW_Filter_TD_9757(tbl_SerializeFromObject_TD_10832_input, tbl_Filter_TD_9757_output);
    gettimeofday(&tv_r_Filter_9_152590_e, 0);

    struct timeval tv_r_JOIN_INNER_9_186123_s, tv_r_JOIN_INNER_9_186123_e;
    gettimeofday(&tv_r_JOIN_INNER_9_186123_s, 0);
    SW_JOIN_INNER_TD_9999(tbl_JOIN_INNER_TD_10128_output, tbl_Filter_TD_10598_output, tbl_JOIN_INNER_TD_9999_output);
    gettimeofday(&tv_r_JOIN_INNER_9_186123_e, 0);

    struct timeval tv_r_Filter_8_103795_s, tv_r_Filter_8_103795_e;
    gettimeofday(&tv_r_Filter_8_103795_s, 0);
    SW_Filter_TD_8712(tbl_SerializeFromObject_TD_9187_input, tbl_Filter_TD_8712_output);
    gettimeofday(&tv_r_Filter_8_103795_e, 0);

    struct timeval tv_r_JOIN_INNER_8_809564_s, tv_r_JOIN_INNER_8_809564_e;
    gettimeofday(&tv_r_JOIN_INNER_8_809564_s, 0);
    SW_JOIN_INNER_TD_831(tbl_JOIN_INNER_TD_9999_output, tbl_Filter_TD_9757_output, tbl_JOIN_INNER_TD_831_output);
    gettimeofday(&tv_r_JOIN_INNER_8_809564_e, 0);

    struct timeval tv_r_Filter_7_657643_s, tv_r_Filter_7_657643_e;
    gettimeofday(&tv_r_Filter_7_657643_s, 0);
    SW_Filter_TD_7432(tbl_SerializeFromObject_TD_8716_input, tbl_Filter_TD_7432_output);
    gettimeofday(&tv_r_Filter_7_657643_e, 0);

    struct timeval tv_r_JOIN_INNER_7_133947_s, tv_r_JOIN_INNER_7_133947_e;
    gettimeofday(&tv_r_JOIN_INNER_7_133947_s, 0);
    SW_JOIN_INNER_TD_7736(tbl_JOIN_INNER_TD_831_output, tbl_Filter_TD_8712_output, tbl_JOIN_INNER_TD_7736_output);
    gettimeofday(&tv_r_JOIN_INNER_7_133947_e, 0);

    struct timeval tv_r_Filter_6_143424_s, tv_r_Filter_6_143424_e;
    gettimeofday(&tv_r_Filter_6_143424_s, 0);
    SW_Filter_TD_6112(tbl_SerializeFromObject_TD_7463_input, tbl_Filter_TD_6112_output);
    gettimeofday(&tv_r_Filter_6_143424_e, 0);

    struct timeval tv_r_JOIN_INNER_6_589516_s, tv_r_JOIN_INNER_6_589516_e;
    gettimeofday(&tv_r_JOIN_INNER_6_589516_s, 0);
    SW_JOIN_INNER_TD_6914(tbl_JOIN_INNER_TD_7736_output, tbl_Filter_TD_7432_output, tbl_JOIN_INNER_TD_6914_output);
    gettimeofday(&tv_r_JOIN_INNER_6_589516_e, 0);

    struct timeval tv_r_Filter_5_217381_s, tv_r_Filter_5_217381_e;
    gettimeofday(&tv_r_Filter_5_217381_s, 0);
    SW_Filter_TD_5163(tbl_SerializeFromObject_TD_6819_input, tbl_Filter_TD_5163_output);
    gettimeofday(&tv_r_Filter_5_217381_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_5_8074_s, tv_r_JOIN_LEFTOUTER_5_8074_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_8074_s, 0);
    SW_JOIN_LEFTOUTER_TD_5291(tbl_JOIN_INNER_TD_6914_output, tbl_Filter_TD_6112_output, tbl_JOIN_LEFTOUTER_TD_5291_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_8074_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_4_574237_s, tv_r_JOIN_LEFTOUTER_4_574237_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_4_574237_s, 0);
    SW_JOIN_LEFTOUTER_TD_4899(tbl_JOIN_LEFTOUTER_TD_5291_output, tbl_Filter_TD_5163_output, tbl_JOIN_LEFTOUTER_TD_4899_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_4_574237_e, 0);

    struct timeval tv_r_Aggregate_3_972020_s, tv_r_Aggregate_3_972020_e;
    gettimeofday(&tv_r_Aggregate_3_972020_s, 0);
    SW_Aggregate_TD_3300(tbl_JOIN_LEFTOUTER_TD_4899_output, tbl_Aggregate_TD_3300_output);
    gettimeofday(&tv_r_Aggregate_3_972020_e, 0);

    struct timeval tv_r_Sort_2_819875_s, tv_r_Sort_2_819875_e;
    gettimeofday(&tv_r_Sort_2_819875_s, 0);
    SW_Sort_TD_2669(tbl_Aggregate_TD_3300_output, tbl_Sort_TD_2669_output);
    gettimeofday(&tv_r_Sort_2_819875_e, 0);

    struct timeval tv_r_LocalLimit_1_213684_s, tv_r_LocalLimit_1_213684_e;
    gettimeofday(&tv_r_LocalLimit_1_213684_s, 0);
    SW_LocalLimit_TD_1337(tbl_Sort_TD_2669_output, tbl_LocalLimit_TD_1337_output);
    gettimeofday(&tv_r_LocalLimit_1_213684_e, 0);

    struct timeval tv_r_GlobalLimit_0_100437_s, tv_r_GlobalLimit_0_100437_e;
    gettimeofday(&tv_r_GlobalLimit_0_100437_s, 0);
    SW_GlobalLimit_TD_0890(tbl_LocalLimit_TD_1337_output, tbl_GlobalLimit_TD_0890_output);
    gettimeofday(&tv_r_GlobalLimit_0_100437_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_941464_s, &tv_r_Filter_14_941464_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15742_input: " << tbl_SerializeFromObject_TD_15742_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_888232_s, &tv_r_Filter_14_888232_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15297_input: " << tbl_SerializeFromObject_TD_15297_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_832403_s, &tv_r_Filter_13_832403_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14993_input: " << tbl_SerializeFromObject_TD_14993_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_497017_s, &tv_r_JOIN_INNER_13_497017_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14916_output: " << tbl_Filter_TD_14916_output.getNumRow() << " " << "tbl_Filter_TD_14437_output: " << tbl_Filter_TD_14437_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_490623_s, &tv_r_Filter_12_490623_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13860_input: " << tbl_SerializeFromObject_TD_13860_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_878072_s, &tv_r_JOIN_INNER_12_878072_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13575_output: " << tbl_JOIN_INNER_TD_13575_output.getNumRow() << " " << "tbl_Filter_TD_13686_output: " << tbl_Filter_TD_13686_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_834327_s, &tv_r_Filter_11_834327_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1273_input: " << tbl_SerializeFromObject_TD_1273_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_15576_s, &tv_r_JOIN_INNER_11_15576_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12935_output: " << tbl_JOIN_INNER_TD_12935_output.getNumRow() << " " << "tbl_Filter_TD_12898_output: " << tbl_Filter_TD_12898_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_59146_s, &tv_r_Filter_10_59146_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11948_input: " << tbl_SerializeFromObject_TD_11948_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_916856_s, &tv_r_JOIN_INNER_10_916856_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11196_output: " << tbl_JOIN_INNER_TD_11196_output.getNumRow() << " " << "tbl_Filter_TD_11405_output: " << tbl_Filter_TD_11405_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_152590_s, &tv_r_Filter_9_152590_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10832_input: " << tbl_SerializeFromObject_TD_10832_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_186123_s, &tv_r_JOIN_INNER_9_186123_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10128_output: " << tbl_JOIN_INNER_TD_10128_output.getNumRow() << " " << "tbl_Filter_TD_10598_output: " << tbl_Filter_TD_10598_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_103795_s, &tv_r_Filter_8_103795_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9187_input: " << tbl_SerializeFromObject_TD_9187_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_809564_s, &tv_r_JOIN_INNER_8_809564_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9999_output: " << tbl_JOIN_INNER_TD_9999_output.getNumRow() << " " << "tbl_Filter_TD_9757_output: " << tbl_Filter_TD_9757_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_657643_s, &tv_r_Filter_7_657643_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8716_input: " << tbl_SerializeFromObject_TD_8716_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_133947_s, &tv_r_JOIN_INNER_7_133947_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_831_output: " << tbl_JOIN_INNER_TD_831_output.getNumRow() << " " << "tbl_Filter_TD_8712_output: " << tbl_Filter_TD_8712_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_143424_s, &tv_r_Filter_6_143424_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7463_input: " << tbl_SerializeFromObject_TD_7463_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_589516_s, &tv_r_JOIN_INNER_6_589516_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7736_output: " << tbl_JOIN_INNER_TD_7736_output.getNumRow() << " " << "tbl_Filter_TD_7432_output: " << tbl_Filter_TD_7432_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_217381_s, &tv_r_Filter_5_217381_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6819_input: " << tbl_SerializeFromObject_TD_6819_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_5: " << tvdiff(&tv_r_JOIN_LEFTOUTER_5_8074_s, &tv_r_JOIN_LEFTOUTER_5_8074_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6914_output: " << tbl_JOIN_INNER_TD_6914_output.getNumRow() << " " << "tbl_Filter_TD_6112_output: " << tbl_Filter_TD_6112_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_4: " << tvdiff(&tv_r_JOIN_LEFTOUTER_4_574237_s, &tv_r_JOIN_LEFTOUTER_4_574237_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_5291_output: " << tbl_JOIN_LEFTOUTER_TD_5291_output.getNumRow() << " " << "tbl_Filter_TD_5163_output: " << tbl_Filter_TD_5163_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_972020_s, &tv_r_Aggregate_3_972020_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_4899_output: " << tbl_JOIN_LEFTOUTER_TD_4899_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_819875_s, &tv_r_Sort_2_819875_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3300_output: " << tbl_Aggregate_TD_3300_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_213684_s, &tv_r_LocalLimit_1_213684_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2669_output: " << tbl_Sort_TD_2669_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_100437_s, &tv_r_GlobalLimit_0_100437_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1337_output: " << tbl_LocalLimit_TD_1337_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 19.342772 * 1000 << "ms" << std::endl; 
    return 0; 
}
