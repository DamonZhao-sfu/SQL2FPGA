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

#include "cfgFunc_q54.hpp" 
#include "q54.hpp" 

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
    std::cout << "NOTE:running query #54\n."; 
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
    Table tbl_GlobalLimit_TD_0740_output("tbl_GlobalLimit_TD_0740_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0740_output.allocateHost();
    Table tbl_LocalLimit_TD_1962_output("tbl_LocalLimit_TD_1962_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1962_output.allocateHost();
    Table tbl_Sort_TD_2405_output("tbl_Sort_TD_2405_output", 6100000, 3, "");
    tbl_Sort_TD_2405_output.allocateHost();
    Table tbl_Aggregate_TD_3246_output("tbl_Aggregate_TD_3246_output", 6100000, 3, "");
    tbl_Aggregate_TD_3246_output.allocateHost();
    Table tbl_Aggregate_TD_4680_output("tbl_Aggregate_TD_4680_output", 6100000, 1, "");
    tbl_Aggregate_TD_4680_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5630_output("tbl_JOIN_INNER_TD_5630_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5630_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6499_output("tbl_JOIN_INNER_TD_6499_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6499_output.allocateHost();
    Table tbl_Filter_TD_6724_output("tbl_Filter_TD_6724_output", 6100000, 1, "");
    tbl_Filter_TD_6724_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7783_output("tbl_JOIN_INNER_TD_7783_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7783_output.allocateHost();
    Table tbl_Filter_TD_7335_output("tbl_Filter_TD_7335_output", 6100000, 2, "");
    tbl_Filter_TD_7335_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7798_input;
    tbl_SerializeFromObject_TD_7798_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7798_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7798_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7798_input.allocateHost();
    tbl_SerializeFromObject_TD_7798_input.loadHost();
    Table tbl_Aggregate_TD_7536_output("tbl_Aggregate_TD_7536_output", 6100000, 1, "");
    tbl_Aggregate_TD_7536_output.allocateHost();
    Table tbl_Aggregate_TD_7514_output("tbl_Aggregate_TD_7514_output", 6100000, 1, "");
    tbl_Aggregate_TD_7514_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8356_output("tbl_JOIN_INNER_TD_8356_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8356_output.allocateHost();
    Table tbl_Filter_TD_8888_output("tbl_Filter_TD_8888_output", 6100000, 3, "");
    tbl_Filter_TD_8888_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8188_input;
    tbl_SerializeFromObject_TD_8188_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8188_input.addCol("s_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8188_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8188_input.allocateHost();
    tbl_SerializeFromObject_TD_8188_input.loadHost();
    Table tbl_Project_TD_8689_output("tbl_Project_TD_8689_output", 6100000, 1, "");
    tbl_Project_TD_8689_output.allocateHost();
    Table tbl_Project_TD_8588_output("tbl_Project_TD_8588_output", 6100000, 1, "");
    tbl_Project_TD_8588_output.allocateHost();
    Table tbl_Aggregate_TD_9618_output("tbl_Aggregate_TD_9618_output", 6100000, 2, "");
    tbl_Aggregate_TD_9618_output.allocateHost();
    Table tbl_Filter_TD_9344_output("tbl_Filter_TD_9344_output", 6100000, 3, "");
    tbl_Filter_TD_9344_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9712_input;
    tbl_SerializeFromObject_TD_9712_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9712_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9712_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9712_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9712_input.allocateHost();
    tbl_SerializeFromObject_TD_9712_input.loadHost();
    Table tbl_Filter_TD_9242_output("tbl_Filter_TD_9242_output", 6100000, 1, "");
    tbl_Filter_TD_9242_output.allocateHost();
    Table tbl_Filter_TD_9863_output("tbl_Filter_TD_9863_output", 6100000, 1, "");
    tbl_Filter_TD_9863_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10770_output("tbl_JOIN_INNER_TD_10770_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_10770_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10471_input;
    tbl_SerializeFromObject_TD_10471_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10471_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10471_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10471_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10471_input.allocateHost();
    tbl_SerializeFromObject_TD_10471_input.loadHost();
    Table tbl_SerializeFromObject_TD_1064_input;
    tbl_SerializeFromObject_TD_1064_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1064_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_1064_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1064_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_1064_input.allocateHost();
    tbl_SerializeFromObject_TD_1064_input.loadHost();
    Table tbl_SerializeFromObject_TD_10449_input;
    tbl_SerializeFromObject_TD_10449_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10449_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_10449_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10449_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10449_input.allocateHost();
    tbl_SerializeFromObject_TD_10449_input.loadHost();
    Table tbl_JOIN_INNER_TD_11840_output("tbl_JOIN_INNER_TD_11840_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_11840_output.allocateHost();
    Table tbl_Filter_TD_11585_output("tbl_Filter_TD_11585_output", 6100000, 2, "");
    tbl_Filter_TD_11585_output.allocateHost();
    Table tbl_JOIN_INNER_TD_12309_output("tbl_JOIN_INNER_TD_12309_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_12309_output.allocateHost();
    Table tbl_Filter_TD_12887_output("tbl_Filter_TD_12887_output", 6100000, 1, "");
    tbl_Filter_TD_12887_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12568_input;
    tbl_SerializeFromObject_TD_12568_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12568_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12568_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_12568_input.allocateHost();
    tbl_SerializeFromObject_TD_12568_input.loadHost();
    Table tbl_Union_TD_13516_output("tbl_Union_TD_13516_output", 6100000, 3, "");
    tbl_Union_TD_13516_output.allocateHost();
    Table tbl_Filter_TD_13727_output("tbl_Filter_TD_13727_output", 6100000, 1, "");
    tbl_Filter_TD_13727_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13214_input;
    tbl_SerializeFromObject_TD_13214_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13214_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13214_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_13214_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13214_input.allocateHost();
    tbl_SerializeFromObject_TD_13214_input.loadHost();
    Table tbl_Project_TD_14824_output("tbl_Project_TD_14824_output", 6100000, 3, "");
    tbl_Project_TD_14824_output.allocateHost();
    Table tbl_Project_TD_14709_output("tbl_Project_TD_14709_output", 6100000, 3, "");
    tbl_Project_TD_14709_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14101_input;
    tbl_SerializeFromObject_TD_14101_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_14101_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_14101_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14101_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14101_input.allocateHost();
    tbl_SerializeFromObject_TD_14101_input.loadHost();
    Table tbl_Filter_TD_15377_output("tbl_Filter_TD_15377_output", 6100000, 3, "");
    tbl_Filter_TD_15377_output.allocateHost();
    Table tbl_Filter_TD_15195_output("tbl_Filter_TD_15195_output", 6100000, 3, "");
    tbl_Filter_TD_15195_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1633_input;
    tbl_SerializeFromObject_TD_1633_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1633_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1633_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_1633_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_1633_input.allocateHost();
    tbl_SerializeFromObject_TD_1633_input.loadHost();
    Table tbl_SerializeFromObject_TD_16442_input;
    tbl_SerializeFromObject_TD_16442_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_16442_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_16442_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_16442_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_16442_input.allocateHost();
    tbl_SerializeFromObject_TD_16442_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_15_80663_s, tv_r_Filter_15_80663_e;
    gettimeofday(&tv_r_Filter_15_80663_s, 0);
    SW_Filter_TD_15195(tbl_SerializeFromObject_TD_16442_input, tbl_Filter_TD_15195_output);
    gettimeofday(&tv_r_Filter_15_80663_e, 0);

    struct timeval tv_r_Filter_15_657690_s, tv_r_Filter_15_657690_e;
    gettimeofday(&tv_r_Filter_15_657690_s, 0);
    SW_Filter_TD_15377(tbl_SerializeFromObject_TD_1633_input, tbl_Filter_TD_15377_output);
    gettimeofday(&tv_r_Filter_15_657690_e, 0);

    struct timeval tv_r_Project_14_789688_s, tv_r_Project_14_789688_e;
    gettimeofday(&tv_r_Project_14_789688_s, 0);
    SW_Project_TD_14709(tbl_Filter_TD_15195_output, tbl_Project_TD_14709_output);
    gettimeofday(&tv_r_Project_14_789688_e, 0);

    struct timeval tv_r_Project_14_494908_s, tv_r_Project_14_494908_e;
    gettimeofday(&tv_r_Project_14_494908_s, 0);
    SW_Project_TD_14824(tbl_Filter_TD_15377_output, tbl_Project_TD_14824_output);
    gettimeofday(&tv_r_Project_14_494908_e, 0);

    struct timeval tv_r_Filter_13_236095_s, tv_r_Filter_13_236095_e;
    gettimeofday(&tv_r_Filter_13_236095_s, 0);
    SW_Filter_TD_13727(tbl_SerializeFromObject_TD_14101_input, tbl_Filter_TD_13727_output);
    gettimeofday(&tv_r_Filter_13_236095_e, 0);

    struct timeval tv_r_Union_13_978385_s, tv_r_Union_13_978385_e;
    gettimeofday(&tv_r_Union_13_978385_s, 0);
    SW_Union_TD_13516(tbl_Project_TD_14824_output, tbl_Project_TD_14709_output, tbl_Union_TD_13516_output);
    gettimeofday(&tv_r_Union_13_978385_e, 0);

    struct timeval tv_r_Filter_12_775549_s, tv_r_Filter_12_775549_e;
    gettimeofday(&tv_r_Filter_12_775549_s, 0);
    SW_Filter_TD_12887(tbl_SerializeFromObject_TD_13214_input, tbl_Filter_TD_12887_output);
    gettimeofday(&tv_r_Filter_12_775549_e, 0);

    struct timeval tv_r_JOIN_INNER_12_445942_s, tv_r_JOIN_INNER_12_445942_e;
    gettimeofday(&tv_r_JOIN_INNER_12_445942_s, 0);
    SW_JOIN_INNER_TD_12309(tbl_Union_TD_13516_output, tbl_Filter_TD_13727_output, tbl_JOIN_INNER_TD_12309_output);
    gettimeofday(&tv_r_JOIN_INNER_12_445942_e, 0);

    struct timeval tv_r_Filter_11_432677_s, tv_r_Filter_11_432677_e;
    gettimeofday(&tv_r_Filter_11_432677_s, 0);
    SW_Filter_TD_11585(tbl_SerializeFromObject_TD_12568_input, tbl_Filter_TD_11585_output);
    gettimeofday(&tv_r_Filter_11_432677_e, 0);

    struct timeval tv_r_JOIN_INNER_11_332703_s, tv_r_JOIN_INNER_11_332703_e;
    gettimeofday(&tv_r_JOIN_INNER_11_332703_s, 0);
    SW_JOIN_INNER_TD_11840(tbl_JOIN_INNER_TD_12309_output, tbl_Filter_TD_12887_output, tbl_JOIN_INNER_TD_11840_output);
    gettimeofday(&tv_r_JOIN_INNER_11_332703_e, 0);

    struct timeval tv_r_JOIN_INNER_10_555700_s, tv_r_JOIN_INNER_10_555700_e;
    gettimeofday(&tv_r_JOIN_INNER_10_555700_s, 0);
    SW_JOIN_INNER_TD_10770(tbl_JOIN_INNER_TD_11840_output, tbl_Filter_TD_11585_output, tbl_JOIN_INNER_TD_10770_output);
    gettimeofday(&tv_r_JOIN_INNER_10_555700_e, 0);

    struct timeval tv_r_Filter_9_210382_s, tv_r_Filter_9_210382_e;
    gettimeofday(&tv_r_Filter_9_210382_s, 0);
    SW_Filter_TD_9863(tbl_SerializeFromObject_TD_10449_input, tbl_Filter_TD_9863_output);
    gettimeofday(&tv_r_Filter_9_210382_e, 0);

    struct timeval tv_r_Filter_9_436834_s, tv_r_Filter_9_436834_e;
    gettimeofday(&tv_r_Filter_9_436834_s, 0);
    SW_Filter_TD_9242(tbl_SerializeFromObject_TD_1064_input, tbl_Filter_TD_9242_output);
    gettimeofday(&tv_r_Filter_9_436834_e, 0);

    struct timeval tv_r_Filter_9_47222_s, tv_r_Filter_9_47222_e;
    gettimeofday(&tv_r_Filter_9_47222_s, 0);
    SW_Filter_TD_9344(tbl_SerializeFromObject_TD_10471_input, tbl_Filter_TD_9344_output);
    gettimeofday(&tv_r_Filter_9_47222_e, 0);

    struct timeval tv_r_Aggregate_9_718316_s, tv_r_Aggregate_9_718316_e;
    gettimeofday(&tv_r_Aggregate_9_718316_s, 0);
    SW_Aggregate_TD_9618(tbl_JOIN_INNER_TD_10770_output, tbl_Aggregate_TD_9618_output);
    gettimeofday(&tv_r_Aggregate_9_718316_e, 0);

    struct timeval tv_r_Project_8_592497_s, tv_r_Project_8_592497_e;
    gettimeofday(&tv_r_Project_8_592497_s, 0);
    SW_Project_TD_8588(tbl_Filter_TD_9863_output, tbl_Project_TD_8588_output);
    gettimeofday(&tv_r_Project_8_592497_e, 0);

    struct timeval tv_r_Project_8_323954_s, tv_r_Project_8_323954_e;
    gettimeofday(&tv_r_Project_8_323954_s, 0);
    SW_Project_TD_8689(tbl_Filter_TD_9242_output, tbl_Project_TD_8689_output);
    gettimeofday(&tv_r_Project_8_323954_e, 0);

    struct timeval tv_r_Filter_8_297290_s, tv_r_Filter_8_297290_e;
    gettimeofday(&tv_r_Filter_8_297290_s, 0);
    SW_Filter_TD_8888(tbl_SerializeFromObject_TD_9712_input, tbl_Filter_TD_8888_output);
    gettimeofday(&tv_r_Filter_8_297290_e, 0);

    struct timeval tv_r_JOIN_INNER_8_813175_s, tv_r_JOIN_INNER_8_813175_e;
    gettimeofday(&tv_r_JOIN_INNER_8_813175_s, 0);
    SW_JOIN_INNER_TD_8356(tbl_Aggregate_TD_9618_output, tbl_Filter_TD_9344_output, tbl_JOIN_INNER_TD_8356_output);
    gettimeofday(&tv_r_JOIN_INNER_8_813175_e, 0);

    struct timeval tv_r_Aggregate_7_461451_s, tv_r_Aggregate_7_461451_e;
    gettimeofday(&tv_r_Aggregate_7_461451_s, 0);
    SW_Aggregate_TD_7514(tbl_Project_TD_8588_output, tbl_Aggregate_TD_7514_output);
    gettimeofday(&tv_r_Aggregate_7_461451_e, 0);

    struct timeval tv_r_Aggregate_7_793536_s, tv_r_Aggregate_7_793536_e;
    gettimeofday(&tv_r_Aggregate_7_793536_s, 0);
    SW_Aggregate_TD_7536(tbl_Project_TD_8689_output, tbl_Aggregate_TD_7536_output);
    gettimeofday(&tv_r_Aggregate_7_793536_e, 0);

    struct timeval tv_r_Filter_7_682233_s, tv_r_Filter_7_682233_e;
    gettimeofday(&tv_r_Filter_7_682233_s, 0);
    SW_Filter_TD_7335(tbl_SerializeFromObject_TD_8188_input, tbl_Filter_TD_7335_output);
    gettimeofday(&tv_r_Filter_7_682233_e, 0);

    struct timeval tv_r_JOIN_INNER_7_649423_s, tv_r_JOIN_INNER_7_649423_e;
    gettimeofday(&tv_r_JOIN_INNER_7_649423_s, 0);
    SW_JOIN_INNER_TD_7783(tbl_JOIN_INNER_TD_8356_output, tbl_Filter_TD_8888_output, tbl_JOIN_INNER_TD_7783_output);
    gettimeofday(&tv_r_JOIN_INNER_7_649423_e, 0);

    struct timeval tv_r_Filter_6_3333_s, tv_r_Filter_6_3333_e;
    gettimeofday(&tv_r_Filter_6_3333_s, 0);
    SW_Filter_TD_6724(tbl_SerializeFromObject_TD_7798_input, tbl_Aggregate_TD_7536_output, tbl_Aggregate_TD_7514_output, tbl_Filter_TD_6724_output);
    gettimeofday(&tv_r_Filter_6_3333_e, 0);

    struct timeval tv_r_JOIN_INNER_6_78105_s, tv_r_JOIN_INNER_6_78105_e;
    gettimeofday(&tv_r_JOIN_INNER_6_78105_s, 0);
    SW_JOIN_INNER_TD_6499(tbl_JOIN_INNER_TD_7783_output, tbl_Filter_TD_7335_output, tbl_JOIN_INNER_TD_6499_output);
    gettimeofday(&tv_r_JOIN_INNER_6_78105_e, 0);

    struct timeval tv_r_JOIN_INNER_5_770773_s, tv_r_JOIN_INNER_5_770773_e;
    gettimeofday(&tv_r_JOIN_INNER_5_770773_s, 0);
    SW_JOIN_INNER_TD_5630(tbl_JOIN_INNER_TD_6499_output, tbl_Filter_TD_6724_output, tbl_JOIN_INNER_TD_5630_output);
    gettimeofday(&tv_r_JOIN_INNER_5_770773_e, 0);

    struct timeval tv_r_Aggregate_4_592852_s, tv_r_Aggregate_4_592852_e;
    gettimeofday(&tv_r_Aggregate_4_592852_s, 0);
    SW_Aggregate_TD_4680(tbl_JOIN_INNER_TD_5630_output, tbl_Aggregate_TD_4680_output);
    gettimeofday(&tv_r_Aggregate_4_592852_e, 0);

    struct timeval tv_r_Aggregate_3_503390_s, tv_r_Aggregate_3_503390_e;
    gettimeofday(&tv_r_Aggregate_3_503390_s, 0);
    SW_Aggregate_TD_3246(tbl_Aggregate_TD_4680_output, tbl_Aggregate_TD_3246_output);
    gettimeofday(&tv_r_Aggregate_3_503390_e, 0);

    struct timeval tv_r_Sort_2_808771_s, tv_r_Sort_2_808771_e;
    gettimeofday(&tv_r_Sort_2_808771_s, 0);
    SW_Sort_TD_2405(tbl_Aggregate_TD_3246_output, tbl_Sort_TD_2405_output);
    gettimeofday(&tv_r_Sort_2_808771_e, 0);

    struct timeval tv_r_LocalLimit_1_5327_s, tv_r_LocalLimit_1_5327_e;
    gettimeofday(&tv_r_LocalLimit_1_5327_s, 0);
    SW_LocalLimit_TD_1962(tbl_Sort_TD_2405_output, tbl_LocalLimit_TD_1962_output);
    gettimeofday(&tv_r_LocalLimit_1_5327_e, 0);

    struct timeval tv_r_GlobalLimit_0_382385_s, tv_r_GlobalLimit_0_382385_e;
    gettimeofday(&tv_r_GlobalLimit_0_382385_s, 0);
    SW_GlobalLimit_TD_0740(tbl_LocalLimit_TD_1962_output, tbl_GlobalLimit_TD_0740_output);
    gettimeofday(&tv_r_GlobalLimit_0_382385_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_80663_s, &tv_r_Filter_15_80663_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_16442_input: " << tbl_SerializeFromObject_TD_16442_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_657690_s, &tv_r_Filter_15_657690_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1633_input: " << tbl_SerializeFromObject_TD_1633_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_14: " << tvdiff(&tv_r_Project_14_789688_s, &tv_r_Project_14_789688_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_15195_output: " << tbl_Filter_TD_15195_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_14: " << tvdiff(&tv_r_Project_14_494908_s, &tv_r_Project_14_494908_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_15377_output: " << tbl_Filter_TD_15377_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_236095_s, &tv_r_Filter_13_236095_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14101_input: " << tbl_SerializeFromObject_TD_14101_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_13: " << tvdiff(&tv_r_Union_13_978385_s, &tv_r_Union_13_978385_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_14824_output: " << tbl_Project_TD_14824_output.getNumRow() << " " << "tbl_Project_TD_14709_output: " << tbl_Project_TD_14709_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_775549_s, &tv_r_Filter_12_775549_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13214_input: " << tbl_SerializeFromObject_TD_13214_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_445942_s, &tv_r_JOIN_INNER_12_445942_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_13516_output: " << tbl_Union_TD_13516_output.getNumRow() << " " << "tbl_Filter_TD_13727_output: " << tbl_Filter_TD_13727_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_432677_s, &tv_r_Filter_11_432677_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12568_input: " << tbl_SerializeFromObject_TD_12568_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_332703_s, &tv_r_JOIN_INNER_11_332703_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12309_output: " << tbl_JOIN_INNER_TD_12309_output.getNumRow() << " " << "tbl_Filter_TD_12887_output: " << tbl_Filter_TD_12887_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_555700_s, &tv_r_JOIN_INNER_10_555700_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11840_output: " << tbl_JOIN_INNER_TD_11840_output.getNumRow() << " " << "tbl_Filter_TD_11585_output: " << tbl_Filter_TD_11585_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_210382_s, &tv_r_Filter_9_210382_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10449_input: " << tbl_SerializeFromObject_TD_10449_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_436834_s, &tv_r_Filter_9_436834_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1064_input: " << tbl_SerializeFromObject_TD_1064_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_47222_s, &tv_r_Filter_9_47222_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10471_input: " << tbl_SerializeFromObject_TD_10471_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_718316_s, &tv_r_Aggregate_9_718316_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10770_output: " << tbl_JOIN_INNER_TD_10770_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_592497_s, &tv_r_Project_8_592497_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9863_output: " << tbl_Filter_TD_9863_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_323954_s, &tv_r_Project_8_323954_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9242_output: " << tbl_Filter_TD_9242_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_297290_s, &tv_r_Filter_8_297290_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9712_input: " << tbl_SerializeFromObject_TD_9712_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_813175_s, &tv_r_JOIN_INNER_8_813175_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9618_output: " << tbl_Aggregate_TD_9618_output.getNumRow() << " " << "tbl_Filter_TD_9344_output: " << tbl_Filter_TD_9344_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_461451_s, &tv_r_Aggregate_7_461451_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8588_output: " << tbl_Project_TD_8588_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_793536_s, &tv_r_Aggregate_7_793536_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8689_output: " << tbl_Project_TD_8689_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_682233_s, &tv_r_Filter_7_682233_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8188_input: " << tbl_SerializeFromObject_TD_8188_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_649423_s, &tv_r_JOIN_INNER_7_649423_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8356_output: " << tbl_JOIN_INNER_TD_8356_output.getNumRow() << " " << "tbl_Filter_TD_8888_output: " << tbl_Filter_TD_8888_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_3333_s, &tv_r_Filter_6_3333_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7798_input: " << tbl_SerializeFromObject_TD_7798_input.getNumRow() << " " << "tbl_Aggregate_TD_7536_output: " << tbl_Aggregate_TD_7536_output.getNumRow() << " " << "tbl_Aggregate_TD_7514_output: " << tbl_Aggregate_TD_7514_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_78105_s, &tv_r_JOIN_INNER_6_78105_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7783_output: " << tbl_JOIN_INNER_TD_7783_output.getNumRow() << " " << "tbl_Filter_TD_7335_output: " << tbl_Filter_TD_7335_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_770773_s, &tv_r_JOIN_INNER_5_770773_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6499_output: " << tbl_JOIN_INNER_TD_6499_output.getNumRow() << " " << "tbl_Filter_TD_6724_output: " << tbl_Filter_TD_6724_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_592852_s, &tv_r_Aggregate_4_592852_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5630_output: " << tbl_JOIN_INNER_TD_5630_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_503390_s, &tv_r_Aggregate_3_503390_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4680_output: " << tbl_Aggregate_TD_4680_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_808771_s, &tv_r_Sort_2_808771_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3246_output: " << tbl_Aggregate_TD_3246_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_5327_s, &tv_r_LocalLimit_1_5327_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2405_output: " << tbl_Sort_TD_2405_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_382385_s, &tv_r_GlobalLimit_0_382385_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1962_output: " << tbl_LocalLimit_TD_1962_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.2125523 * 1000 << "ms" << std::endl; 
    return 0; 
}
