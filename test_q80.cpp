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

#include "cfgFunc_q80.hpp" 
#include "q80.hpp" 

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
    std::cout << "NOTE:running query #80\n."; 
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
    Table tbl_GlobalLimit_TD_0915_output("tbl_GlobalLimit_TD_0915_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0915_output.allocateHost();
    Table tbl_LocalLimit_TD_1441_output("tbl_LocalLimit_TD_1441_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1441_output.allocateHost();
    Table tbl_Sort_TD_2696_output("tbl_Sort_TD_2696_output", 6100000, 5, "");
    tbl_Sort_TD_2696_output.allocateHost();
    Table tbl_Aggregate_TD_3337_output("tbl_Aggregate_TD_3337_output", 6100000, 5, "");
    tbl_Aggregate_TD_3337_output.allocateHost();
    Table tbl_Expand_TD_4280_output("tbl_Expand_TD_4280_output", 6100000, 6, "");
    tbl_Expand_TD_4280_output.allocateHost();
    Table tbl_Union_TD_518_output("tbl_Union_TD_518_output", 6100000, 5, "");
    tbl_Union_TD_518_output.allocateHost();
    Table tbl_Aggregate_TD_6976_output("tbl_Aggregate_TD_6976_output", 6100000, 5, "");
    tbl_Aggregate_TD_6976_output.allocateHost();
    Table tbl_Aggregate_TD_6839_output("tbl_Aggregate_TD_6839_output", 6100000, 5, "");
    tbl_Aggregate_TD_6839_output.allocateHost();
    Table tbl_Aggregate_TD_6804_output("tbl_Aggregate_TD_6804_output", 6100000, 5, "");
    tbl_Aggregate_TD_6804_output.allocateHost();
    Table tbl_JOIN_INNER_TD_789_output("tbl_JOIN_INNER_TD_789_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_789_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7595_output("tbl_JOIN_INNER_TD_7595_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7595_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7808_output("tbl_JOIN_INNER_TD_7808_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7808_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8600_output("tbl_JOIN_INNER_TD_8600_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8600_output.allocateHost();
    Table tbl_Filter_TD_83_output("tbl_Filter_TD_83_output", 6100000, 1, "");
    tbl_Filter_TD_83_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8749_output("tbl_JOIN_INNER_TD_8749_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8749_output.allocateHost();
    Table tbl_Filter_TD_8916_output("tbl_Filter_TD_8916_output", 6100000, 1, "");
    tbl_Filter_TD_8916_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8156_output("tbl_JOIN_INNER_TD_8156_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8156_output.allocateHost();
    Table tbl_Filter_TD_8383_output("tbl_Filter_TD_8383_output", 6100000, 1, "");
    tbl_Filter_TD_8383_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9288_output("tbl_JOIN_INNER_TD_9288_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9288_output.allocateHost();
    Table tbl_Filter_TD_9146_output("tbl_Filter_TD_9146_output", 6100000, 1, "");
    tbl_Filter_TD_9146_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9793_input;
    tbl_SerializeFromObject_TD_9793_input = Table("promotion", promotion_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9793_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_9793_input.addCol("p_channel_tv", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9793_input.allocateHost();
    tbl_SerializeFromObject_TD_9793_input.loadHost();
    Table tbl_JOIN_INNER_TD_9107_output("tbl_JOIN_INNER_TD_9107_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9107_output.allocateHost();
    Table tbl_Filter_TD_9631_output("tbl_Filter_TD_9631_output", 6100000, 1, "");
    tbl_Filter_TD_9631_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9381_input;
    tbl_SerializeFromObject_TD_9381_input = Table("promotion", promotion_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9381_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_9381_input.addCol("p_channel_tv", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9381_input.allocateHost();
    tbl_SerializeFromObject_TD_9381_input.loadHost();
    Table tbl_JOIN_INNER_TD_957_output("tbl_JOIN_INNER_TD_957_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_957_output.allocateHost();
    Table tbl_Filter_TD_9279_output("tbl_Filter_TD_9279_output", 6100000, 1, "");
    tbl_Filter_TD_9279_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9383_input;
    tbl_SerializeFromObject_TD_9383_input = Table("promotion", promotion_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9383_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_9383_input.addCol("p_channel_tv", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9383_input.allocateHost();
    tbl_SerializeFromObject_TD_9383_input.loadHost();
    Table tbl_JOIN_INNER_TD_10283_output("tbl_JOIN_INNER_TD_10283_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_10283_output.allocateHost();
    Table tbl_Filter_TD_10422_output("tbl_Filter_TD_10422_output", 6100000, 2, "");
    tbl_Filter_TD_10422_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10526_input;
    tbl_SerializeFromObject_TD_10526_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10526_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10526_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_10526_input.allocateHost();
    tbl_SerializeFromObject_TD_10526_input.loadHost();
    Table tbl_JOIN_INNER_TD_10225_output("tbl_JOIN_INNER_TD_10225_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_10225_output.allocateHost();
    Table tbl_Filter_TD_10893_output("tbl_Filter_TD_10893_output", 6100000, 2, "");
    tbl_Filter_TD_10893_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10210_input;
    tbl_SerializeFromObject_TD_10210_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10210_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10210_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_10210_input.allocateHost();
    tbl_SerializeFromObject_TD_10210_input.loadHost();
    Table tbl_JOIN_INNER_TD_10500_output("tbl_JOIN_INNER_TD_10500_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_10500_output.allocateHost();
    Table tbl_Filter_TD_10990_output("tbl_Filter_TD_10990_output", 6100000, 2, "");
    tbl_Filter_TD_10990_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10532_input;
    tbl_SerializeFromObject_TD_10532_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10532_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10532_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_10532_input.allocateHost();
    tbl_SerializeFromObject_TD_10532_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_1165_output("tbl_JOIN_LEFTOUTER_TD_1165_output", 6100000, 8, "");
    tbl_JOIN_LEFTOUTER_TD_1165_output.allocateHost();
    Table tbl_Filter_TD_11984_output("tbl_Filter_TD_11984_output", 6100000, 1, "");
    tbl_Filter_TD_11984_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11212_input;
    tbl_SerializeFromObject_TD_11212_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11212_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_11212_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11212_input.allocateHost();
    tbl_SerializeFromObject_TD_11212_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_11480_output("tbl_JOIN_LEFTOUTER_TD_11480_output", 6100000, 8, "");
    tbl_JOIN_LEFTOUTER_TD_11480_output.allocateHost();
    Table tbl_Filter_TD_11718_output("tbl_Filter_TD_11718_output", 6100000, 1, "");
    tbl_Filter_TD_11718_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11362_input;
    tbl_SerializeFromObject_TD_11362_input = Table("catalog_page", catalog_page_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11362_input.addCol("cp_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_11362_input.addCol("cp_catalog_page_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11362_input.allocateHost();
    tbl_SerializeFromObject_TD_11362_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_11115_output("tbl_JOIN_LEFTOUTER_TD_11115_output", 6100000, 8, "");
    tbl_JOIN_LEFTOUTER_TD_11115_output.allocateHost();
    Table tbl_Filter_TD_11409_output("tbl_Filter_TD_11409_output", 6100000, 1, "");
    tbl_Filter_TD_11409_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11788_input;
    tbl_SerializeFromObject_TD_11788_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11788_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_11788_input.addCol("web_site_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11788_input.allocateHost();
    tbl_SerializeFromObject_TD_11788_input.loadHost();
    Table tbl_Filter_TD_12619_output("tbl_Filter_TD_12619_output", 6100000, 7, "");
    tbl_Filter_TD_12619_output.allocateHost();
    Table tbl_Filter_TD_12343_output("tbl_Filter_TD_12343_output", 6100000, 4, "");
    tbl_Filter_TD_12343_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12284_input;
    tbl_SerializeFromObject_TD_12284_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12284_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12284_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12284_input.allocateHost();
    tbl_SerializeFromObject_TD_12284_input.loadHost();
    Table tbl_Filter_TD_121_output("tbl_Filter_TD_121_output", 6100000, 7, "");
    tbl_Filter_TD_121_output.allocateHost();
    Table tbl_Filter_TD_127_output("tbl_Filter_TD_127_output", 6100000, 4, "");
    tbl_Filter_TD_127_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12216_input;
    tbl_SerializeFromObject_TD_12216_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12216_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12216_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12216_input.allocateHost();
    tbl_SerializeFromObject_TD_12216_input.loadHost();
    Table tbl_Filter_TD_12549_output("tbl_Filter_TD_12549_output", 6100000, 7, "");
    tbl_Filter_TD_12549_output.allocateHost();
    Table tbl_Filter_TD_12145_output("tbl_Filter_TD_12145_output", 6100000, 4, "");
    tbl_Filter_TD_12145_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12949_input;
    tbl_SerializeFromObject_TD_12949_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12949_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12949_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12949_input.allocateHost();
    tbl_SerializeFromObject_TD_12949_input.loadHost();
    Table tbl_SerializeFromObject_TD_13317_input;
    tbl_SerializeFromObject_TD_13317_input = Table("store_sales", store_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_13317_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13317_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13317_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_13317_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_13317_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_13317_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13317_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_13317_input.allocateHost();
    tbl_SerializeFromObject_TD_13317_input.loadHost();
    Table tbl_SerializeFromObject_TD_13452_input;
    tbl_SerializeFromObject_TD_13452_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13452_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_13452_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_13452_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_13452_input.addCol("sr_net_loss", 4);
    tbl_SerializeFromObject_TD_13452_input.allocateHost();
    tbl_SerializeFromObject_TD_13452_input.loadHost();
    Table tbl_SerializeFromObject_TD_13827_input;
    tbl_SerializeFromObject_TD_13827_input = Table("catalog_sales", catalog_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_13827_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13827_input.addCol("cs_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_13827_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13827_input.addCol("cs_promo_sk", 4);
    tbl_SerializeFromObject_TD_13827_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_13827_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13827_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_13827_input.allocateHost();
    tbl_SerializeFromObject_TD_13827_input.loadHost();
    Table tbl_SerializeFromObject_TD_13409_input;
    tbl_SerializeFromObject_TD_13409_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13409_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_13409_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_13409_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_13409_input.addCol("cr_net_loss", 4);
    tbl_SerializeFromObject_TD_13409_input.allocateHost();
    tbl_SerializeFromObject_TD_13409_input.loadHost();
    Table tbl_SerializeFromObject_TD_13273_input;
    tbl_SerializeFromObject_TD_13273_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_13273_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13273_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13273_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_13273_input.addCol("ws_promo_sk", 4);
    tbl_SerializeFromObject_TD_13273_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_13273_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13273_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_13273_input.allocateHost();
    tbl_SerializeFromObject_TD_13273_input.loadHost();
    Table tbl_SerializeFromObject_TD_13963_input;
    tbl_SerializeFromObject_TD_13963_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13963_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_13963_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_13963_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_13963_input.addCol("wr_net_loss", 4);
    tbl_SerializeFromObject_TD_13963_input.allocateHost();
    tbl_SerializeFromObject_TD_13963_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_345907_s, tv_r_Filter_12_345907_e;
    gettimeofday(&tv_r_Filter_12_345907_s, 0);
    SW_Filter_TD_12145(tbl_SerializeFromObject_TD_13963_input, tbl_Filter_TD_12145_output);
    gettimeofday(&tv_r_Filter_12_345907_e, 0);

    struct timeval tv_r_Filter_12_571320_s, tv_r_Filter_12_571320_e;
    gettimeofday(&tv_r_Filter_12_571320_s, 0);
    SW_Filter_TD_12549(tbl_SerializeFromObject_TD_13273_input, tbl_Filter_TD_12549_output);
    gettimeofday(&tv_r_Filter_12_571320_e, 0);

    struct timeval tv_r_Filter_12_979137_s, tv_r_Filter_12_979137_e;
    gettimeofday(&tv_r_Filter_12_979137_s, 0);
    SW_Filter_TD_127(tbl_SerializeFromObject_TD_13409_input, tbl_Filter_TD_127_output);
    gettimeofday(&tv_r_Filter_12_979137_e, 0);

    struct timeval tv_r_Filter_12_963128_s, tv_r_Filter_12_963128_e;
    gettimeofday(&tv_r_Filter_12_963128_s, 0);
    SW_Filter_TD_121(tbl_SerializeFromObject_TD_13827_input, tbl_Filter_TD_121_output);
    gettimeofday(&tv_r_Filter_12_963128_e, 0);

    struct timeval tv_r_Filter_12_129757_s, tv_r_Filter_12_129757_e;
    gettimeofday(&tv_r_Filter_12_129757_s, 0);
    SW_Filter_TD_12343(tbl_SerializeFromObject_TD_13452_input, tbl_Filter_TD_12343_output);
    gettimeofday(&tv_r_Filter_12_129757_e, 0);

    struct timeval tv_r_Filter_12_469413_s, tv_r_Filter_12_469413_e;
    gettimeofday(&tv_r_Filter_12_469413_s, 0);
    SW_Filter_TD_12619(tbl_SerializeFromObject_TD_13317_input, tbl_Filter_TD_12619_output);
    gettimeofday(&tv_r_Filter_12_469413_e, 0);

    struct timeval tv_r_Filter_11_574184_s, tv_r_Filter_11_574184_e;
    gettimeofday(&tv_r_Filter_11_574184_s, 0);
    SW_Filter_TD_11409(tbl_SerializeFromObject_TD_12949_input, tbl_Filter_TD_11409_output);
    gettimeofday(&tv_r_Filter_11_574184_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_11_236573_s, tv_r_JOIN_LEFTOUTER_11_236573_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_236573_s, 0);
    SW_JOIN_LEFTOUTER_TD_11115(tbl_Filter_TD_12549_output, tbl_Filter_TD_12145_output, tbl_JOIN_LEFTOUTER_TD_11115_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_236573_e, 0);

    struct timeval tv_r_Filter_11_602916_s, tv_r_Filter_11_602916_e;
    gettimeofday(&tv_r_Filter_11_602916_s, 0);
    SW_Filter_TD_11718(tbl_SerializeFromObject_TD_12216_input, tbl_Filter_TD_11718_output);
    gettimeofday(&tv_r_Filter_11_602916_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_11_834358_s, tv_r_JOIN_LEFTOUTER_11_834358_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_834358_s, 0);
    SW_JOIN_LEFTOUTER_TD_11480(tbl_Filter_TD_121_output, tbl_Filter_TD_127_output, tbl_JOIN_LEFTOUTER_TD_11480_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_834358_e, 0);

    struct timeval tv_r_Filter_11_826529_s, tv_r_Filter_11_826529_e;
    gettimeofday(&tv_r_Filter_11_826529_s, 0);
    SW_Filter_TD_11984(tbl_SerializeFromObject_TD_12284_input, tbl_Filter_TD_11984_output);
    gettimeofday(&tv_r_Filter_11_826529_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_11_988155_s, tv_r_JOIN_LEFTOUTER_11_988155_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_988155_s, 0);
    SW_JOIN_LEFTOUTER_TD_1165(tbl_Filter_TD_12619_output, tbl_Filter_TD_12343_output, tbl_JOIN_LEFTOUTER_TD_1165_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_988155_e, 0);

    struct timeval tv_r_Filter_10_234720_s, tv_r_Filter_10_234720_e;
    gettimeofday(&tv_r_Filter_10_234720_s, 0);
    SW_Filter_TD_10990(tbl_SerializeFromObject_TD_11788_input, tbl_Filter_TD_10990_output);
    gettimeofday(&tv_r_Filter_10_234720_e, 0);

    struct timeval tv_r_JOIN_INNER_10_764838_s, tv_r_JOIN_INNER_10_764838_e;
    gettimeofday(&tv_r_JOIN_INNER_10_764838_s, 0);
    SW_JOIN_INNER_TD_10500(tbl_JOIN_LEFTOUTER_TD_11115_output, tbl_Filter_TD_11409_output, tbl_JOIN_INNER_TD_10500_output);
    gettimeofday(&tv_r_JOIN_INNER_10_764838_e, 0);

    struct timeval tv_r_Filter_10_597228_s, tv_r_Filter_10_597228_e;
    gettimeofday(&tv_r_Filter_10_597228_s, 0);
    SW_Filter_TD_10893(tbl_SerializeFromObject_TD_11362_input, tbl_Filter_TD_10893_output);
    gettimeofday(&tv_r_Filter_10_597228_e, 0);

    struct timeval tv_r_JOIN_INNER_10_721467_s, tv_r_JOIN_INNER_10_721467_e;
    gettimeofday(&tv_r_JOIN_INNER_10_721467_s, 0);
    SW_JOIN_INNER_TD_10225(tbl_JOIN_LEFTOUTER_TD_11480_output, tbl_Filter_TD_11718_output, tbl_JOIN_INNER_TD_10225_output);
    gettimeofday(&tv_r_JOIN_INNER_10_721467_e, 0);

    struct timeval tv_r_Filter_10_205022_s, tv_r_Filter_10_205022_e;
    gettimeofday(&tv_r_Filter_10_205022_s, 0);
    SW_Filter_TD_10422(tbl_SerializeFromObject_TD_11212_input, tbl_Filter_TD_10422_output);
    gettimeofday(&tv_r_Filter_10_205022_e, 0);

    struct timeval tv_r_JOIN_INNER_10_155053_s, tv_r_JOIN_INNER_10_155053_e;
    gettimeofday(&tv_r_JOIN_INNER_10_155053_s, 0);
    SW_JOIN_INNER_TD_10283(tbl_JOIN_LEFTOUTER_TD_1165_output, tbl_Filter_TD_11984_output, tbl_JOIN_INNER_TD_10283_output);
    gettimeofday(&tv_r_JOIN_INNER_10_155053_e, 0);

    struct timeval tv_r_Filter_9_587121_s, tv_r_Filter_9_587121_e;
    gettimeofday(&tv_r_Filter_9_587121_s, 0);
    SW_Filter_TD_9279(tbl_SerializeFromObject_TD_10532_input, tbl_Filter_TD_9279_output);
    gettimeofday(&tv_r_Filter_9_587121_e, 0);

    struct timeval tv_r_JOIN_INNER_9_142497_s, tv_r_JOIN_INNER_9_142497_e;
    gettimeofday(&tv_r_JOIN_INNER_9_142497_s, 0);
    SW_JOIN_INNER_TD_957(tbl_JOIN_INNER_TD_10500_output, tbl_Filter_TD_10990_output, tbl_JOIN_INNER_TD_957_output);
    gettimeofday(&tv_r_JOIN_INNER_9_142497_e, 0);

    struct timeval tv_r_Filter_9_849135_s, tv_r_Filter_9_849135_e;
    gettimeofday(&tv_r_Filter_9_849135_s, 0);
    SW_Filter_TD_9631(tbl_SerializeFromObject_TD_10210_input, tbl_Filter_TD_9631_output);
    gettimeofday(&tv_r_Filter_9_849135_e, 0);

    struct timeval tv_r_JOIN_INNER_9_944074_s, tv_r_JOIN_INNER_9_944074_e;
    gettimeofday(&tv_r_JOIN_INNER_9_944074_s, 0);
    SW_JOIN_INNER_TD_9107(tbl_JOIN_INNER_TD_10225_output, tbl_Filter_TD_10893_output, tbl_JOIN_INNER_TD_9107_output);
    gettimeofday(&tv_r_JOIN_INNER_9_944074_e, 0);

    struct timeval tv_r_Filter_9_425753_s, tv_r_Filter_9_425753_e;
    gettimeofday(&tv_r_Filter_9_425753_s, 0);
    SW_Filter_TD_9146(tbl_SerializeFromObject_TD_10526_input, tbl_Filter_TD_9146_output);
    gettimeofday(&tv_r_Filter_9_425753_e, 0);

    struct timeval tv_r_JOIN_INNER_9_645286_s, tv_r_JOIN_INNER_9_645286_e;
    gettimeofday(&tv_r_JOIN_INNER_9_645286_s, 0);
    SW_JOIN_INNER_TD_9288(tbl_JOIN_INNER_TD_10283_output, tbl_Filter_TD_10422_output, tbl_JOIN_INNER_TD_9288_output);
    gettimeofday(&tv_r_JOIN_INNER_9_645286_e, 0);

    struct timeval tv_r_Filter_8_252044_s, tv_r_Filter_8_252044_e;
    gettimeofday(&tv_r_Filter_8_252044_s, 0);
    SW_Filter_TD_8383(tbl_SerializeFromObject_TD_9383_input, tbl_Filter_TD_8383_output);
    gettimeofday(&tv_r_Filter_8_252044_e, 0);

    struct timeval tv_r_JOIN_INNER_8_145890_s, tv_r_JOIN_INNER_8_145890_e;
    gettimeofday(&tv_r_JOIN_INNER_8_145890_s, 0);
    SW_JOIN_INNER_TD_8156(tbl_JOIN_INNER_TD_957_output, tbl_Filter_TD_9279_output, tbl_JOIN_INNER_TD_8156_output);
    gettimeofday(&tv_r_JOIN_INNER_8_145890_e, 0);

    struct timeval tv_r_Filter_8_14089_s, tv_r_Filter_8_14089_e;
    gettimeofday(&tv_r_Filter_8_14089_s, 0);
    SW_Filter_TD_8916(tbl_SerializeFromObject_TD_9381_input, tbl_Filter_TD_8916_output);
    gettimeofday(&tv_r_Filter_8_14089_e, 0);

    struct timeval tv_r_JOIN_INNER_8_129124_s, tv_r_JOIN_INNER_8_129124_e;
    gettimeofday(&tv_r_JOIN_INNER_8_129124_s, 0);
    SW_JOIN_INNER_TD_8749(tbl_JOIN_INNER_TD_9107_output, tbl_Filter_TD_9631_output, tbl_JOIN_INNER_TD_8749_output);
    gettimeofday(&tv_r_JOIN_INNER_8_129124_e, 0);

    struct timeval tv_r_Filter_8_933604_s, tv_r_Filter_8_933604_e;
    gettimeofday(&tv_r_Filter_8_933604_s, 0);
    SW_Filter_TD_83(tbl_SerializeFromObject_TD_9793_input, tbl_Filter_TD_83_output);
    gettimeofday(&tv_r_Filter_8_933604_e, 0);

    struct timeval tv_r_JOIN_INNER_8_394818_s, tv_r_JOIN_INNER_8_394818_e;
    gettimeofday(&tv_r_JOIN_INNER_8_394818_s, 0);
    SW_JOIN_INNER_TD_8600(tbl_JOIN_INNER_TD_9288_output, tbl_Filter_TD_9146_output, tbl_JOIN_INNER_TD_8600_output);
    gettimeofday(&tv_r_JOIN_INNER_8_394818_e, 0);

    struct timeval tv_r_JOIN_INNER_7_279484_s, tv_r_JOIN_INNER_7_279484_e;
    gettimeofday(&tv_r_JOIN_INNER_7_279484_s, 0);
    SW_JOIN_INNER_TD_7808(tbl_JOIN_INNER_TD_8156_output, tbl_Filter_TD_8383_output, tbl_JOIN_INNER_TD_7808_output);
    gettimeofday(&tv_r_JOIN_INNER_7_279484_e, 0);

    struct timeval tv_r_JOIN_INNER_7_530283_s, tv_r_JOIN_INNER_7_530283_e;
    gettimeofday(&tv_r_JOIN_INNER_7_530283_s, 0);
    SW_JOIN_INNER_TD_7595(tbl_JOIN_INNER_TD_8749_output, tbl_Filter_TD_8916_output, tbl_JOIN_INNER_TD_7595_output);
    gettimeofday(&tv_r_JOIN_INNER_7_530283_e, 0);

    struct timeval tv_r_JOIN_INNER_7_134212_s, tv_r_JOIN_INNER_7_134212_e;
    gettimeofday(&tv_r_JOIN_INNER_7_134212_s, 0);
    SW_JOIN_INNER_TD_789(tbl_JOIN_INNER_TD_8600_output, tbl_Filter_TD_83_output, tbl_JOIN_INNER_TD_789_output);
    gettimeofday(&tv_r_JOIN_INNER_7_134212_e, 0);

    struct timeval tv_r_Aggregate_6_279041_s, tv_r_Aggregate_6_279041_e;
    gettimeofday(&tv_r_Aggregate_6_279041_s, 0);
    SW_Aggregate_TD_6804(tbl_JOIN_INNER_TD_7808_output, tbl_Aggregate_TD_6804_output);
    gettimeofday(&tv_r_Aggregate_6_279041_e, 0);

    struct timeval tv_r_Aggregate_6_475132_s, tv_r_Aggregate_6_475132_e;
    gettimeofday(&tv_r_Aggregate_6_475132_s, 0);
    SW_Aggregate_TD_6839(tbl_JOIN_INNER_TD_7595_output, tbl_Aggregate_TD_6839_output);
    gettimeofday(&tv_r_Aggregate_6_475132_e, 0);

    struct timeval tv_r_Aggregate_6_564465_s, tv_r_Aggregate_6_564465_e;
    gettimeofday(&tv_r_Aggregate_6_564465_s, 0);
    SW_Aggregate_TD_6976(tbl_JOIN_INNER_TD_789_output, tbl_Aggregate_TD_6976_output);
    gettimeofday(&tv_r_Aggregate_6_564465_e, 0);

    struct timeval tv_r_Union_5_770978_s, tv_r_Union_5_770978_e;
    gettimeofday(&tv_r_Union_5_770978_s, 0);
    SW_Union_TD_518(tbl_Aggregate_TD_6976_output, tbl_Aggregate_TD_6839_output, tbl_Aggregate_TD_6804_output, tbl_Union_TD_518_output);
    gettimeofday(&tv_r_Union_5_770978_e, 0);

    struct timeval tv_r_Expand_4_377665_s, tv_r_Expand_4_377665_e;
    gettimeofday(&tv_r_Expand_4_377665_s, 0);
    SW_Expand_TD_4280(tbl_Union_TD_518_output, tbl_Expand_TD_4280_output);
    gettimeofday(&tv_r_Expand_4_377665_e, 0);

    struct timeval tv_r_Aggregate_3_909885_s, tv_r_Aggregate_3_909885_e;
    gettimeofday(&tv_r_Aggregate_3_909885_s, 0);
    SW_Aggregate_TD_3337(tbl_Expand_TD_4280_output, tbl_Aggregate_TD_3337_output);
    gettimeofday(&tv_r_Aggregate_3_909885_e, 0);

    struct timeval tv_r_Sort_2_915237_s, tv_r_Sort_2_915237_e;
    gettimeofday(&tv_r_Sort_2_915237_s, 0);
    SW_Sort_TD_2696(tbl_Aggregate_TD_3337_output, tbl_Sort_TD_2696_output);
    gettimeofday(&tv_r_Sort_2_915237_e, 0);

    struct timeval tv_r_LocalLimit_1_2375_s, tv_r_LocalLimit_1_2375_e;
    gettimeofday(&tv_r_LocalLimit_1_2375_s, 0);
    SW_LocalLimit_TD_1441(tbl_Sort_TD_2696_output, tbl_LocalLimit_TD_1441_output);
    gettimeofday(&tv_r_LocalLimit_1_2375_e, 0);

    struct timeval tv_r_GlobalLimit_0_684244_s, tv_r_GlobalLimit_0_684244_e;
    gettimeofday(&tv_r_GlobalLimit_0_684244_s, 0);
    SW_GlobalLimit_TD_0915(tbl_LocalLimit_TD_1441_output, tbl_GlobalLimit_TD_0915_output);
    gettimeofday(&tv_r_GlobalLimit_0_684244_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_345907_s, &tv_r_Filter_12_345907_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13963_input: " << tbl_SerializeFromObject_TD_13963_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_571320_s, &tv_r_Filter_12_571320_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13273_input: " << tbl_SerializeFromObject_TD_13273_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_979137_s, &tv_r_Filter_12_979137_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13409_input: " << tbl_SerializeFromObject_TD_13409_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_963128_s, &tv_r_Filter_12_963128_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13827_input: " << tbl_SerializeFromObject_TD_13827_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_129757_s, &tv_r_Filter_12_129757_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13452_input: " << tbl_SerializeFromObject_TD_13452_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_469413_s, &tv_r_Filter_12_469413_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13317_input: " << tbl_SerializeFromObject_TD_13317_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_574184_s, &tv_r_Filter_11_574184_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12949_input: " << tbl_SerializeFromObject_TD_12949_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_11: " << tvdiff(&tv_r_JOIN_LEFTOUTER_11_236573_s, &tv_r_JOIN_LEFTOUTER_11_236573_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12549_output: " << tbl_Filter_TD_12549_output.getNumRow() << " " << "tbl_Filter_TD_12145_output: " << tbl_Filter_TD_12145_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_602916_s, &tv_r_Filter_11_602916_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12216_input: " << tbl_SerializeFromObject_TD_12216_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_11: " << tvdiff(&tv_r_JOIN_LEFTOUTER_11_834358_s, &tv_r_JOIN_LEFTOUTER_11_834358_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_121_output: " << tbl_Filter_TD_121_output.getNumRow() << " " << "tbl_Filter_TD_127_output: " << tbl_Filter_TD_127_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_826529_s, &tv_r_Filter_11_826529_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12284_input: " << tbl_SerializeFromObject_TD_12284_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_11: " << tvdiff(&tv_r_JOIN_LEFTOUTER_11_988155_s, &tv_r_JOIN_LEFTOUTER_11_988155_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12619_output: " << tbl_Filter_TD_12619_output.getNumRow() << " " << "tbl_Filter_TD_12343_output: " << tbl_Filter_TD_12343_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_234720_s, &tv_r_Filter_10_234720_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11788_input: " << tbl_SerializeFromObject_TD_11788_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_764838_s, &tv_r_JOIN_INNER_10_764838_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_11115_output: " << tbl_JOIN_LEFTOUTER_TD_11115_output.getNumRow() << " " << "tbl_Filter_TD_11409_output: " << tbl_Filter_TD_11409_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_597228_s, &tv_r_Filter_10_597228_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11362_input: " << tbl_SerializeFromObject_TD_11362_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_721467_s, &tv_r_JOIN_INNER_10_721467_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_11480_output: " << tbl_JOIN_LEFTOUTER_TD_11480_output.getNumRow() << " " << "tbl_Filter_TD_11718_output: " << tbl_Filter_TD_11718_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_205022_s, &tv_r_Filter_10_205022_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11212_input: " << tbl_SerializeFromObject_TD_11212_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_155053_s, &tv_r_JOIN_INNER_10_155053_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_1165_output: " << tbl_JOIN_LEFTOUTER_TD_1165_output.getNumRow() << " " << "tbl_Filter_TD_11984_output: " << tbl_Filter_TD_11984_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_587121_s, &tv_r_Filter_9_587121_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10532_input: " << tbl_SerializeFromObject_TD_10532_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_142497_s, &tv_r_JOIN_INNER_9_142497_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10500_output: " << tbl_JOIN_INNER_TD_10500_output.getNumRow() << " " << "tbl_Filter_TD_10990_output: " << tbl_Filter_TD_10990_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_849135_s, &tv_r_Filter_9_849135_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10210_input: " << tbl_SerializeFromObject_TD_10210_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_944074_s, &tv_r_JOIN_INNER_9_944074_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10225_output: " << tbl_JOIN_INNER_TD_10225_output.getNumRow() << " " << "tbl_Filter_TD_10893_output: " << tbl_Filter_TD_10893_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_425753_s, &tv_r_Filter_9_425753_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10526_input: " << tbl_SerializeFromObject_TD_10526_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_645286_s, &tv_r_JOIN_INNER_9_645286_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10283_output: " << tbl_JOIN_INNER_TD_10283_output.getNumRow() << " " << "tbl_Filter_TD_10422_output: " << tbl_Filter_TD_10422_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_252044_s, &tv_r_Filter_8_252044_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9383_input: " << tbl_SerializeFromObject_TD_9383_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_145890_s, &tv_r_JOIN_INNER_8_145890_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_957_output: " << tbl_JOIN_INNER_TD_957_output.getNumRow() << " " << "tbl_Filter_TD_9279_output: " << tbl_Filter_TD_9279_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_14089_s, &tv_r_Filter_8_14089_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9381_input: " << tbl_SerializeFromObject_TD_9381_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_129124_s, &tv_r_JOIN_INNER_8_129124_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9107_output: " << tbl_JOIN_INNER_TD_9107_output.getNumRow() << " " << "tbl_Filter_TD_9631_output: " << tbl_Filter_TD_9631_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_933604_s, &tv_r_Filter_8_933604_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9793_input: " << tbl_SerializeFromObject_TD_9793_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_394818_s, &tv_r_JOIN_INNER_8_394818_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9288_output: " << tbl_JOIN_INNER_TD_9288_output.getNumRow() << " " << "tbl_Filter_TD_9146_output: " << tbl_Filter_TD_9146_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_279484_s, &tv_r_JOIN_INNER_7_279484_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8156_output: " << tbl_JOIN_INNER_TD_8156_output.getNumRow() << " " << "tbl_Filter_TD_8383_output: " << tbl_Filter_TD_8383_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_530283_s, &tv_r_JOIN_INNER_7_530283_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8749_output: " << tbl_JOIN_INNER_TD_8749_output.getNumRow() << " " << "tbl_Filter_TD_8916_output: " << tbl_Filter_TD_8916_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_134212_s, &tv_r_JOIN_INNER_7_134212_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8600_output: " << tbl_JOIN_INNER_TD_8600_output.getNumRow() << " " << "tbl_Filter_TD_83_output: " << tbl_Filter_TD_83_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_279041_s, &tv_r_Aggregate_6_279041_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7808_output: " << tbl_JOIN_INNER_TD_7808_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_475132_s, &tv_r_Aggregate_6_475132_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7595_output: " << tbl_JOIN_INNER_TD_7595_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_564465_s, &tv_r_Aggregate_6_564465_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_789_output: " << tbl_JOIN_INNER_TD_789_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_5: " << tvdiff(&tv_r_Union_5_770978_s, &tv_r_Union_5_770978_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6976_output: " << tbl_Aggregate_TD_6976_output.getNumRow() << " " << "tbl_Aggregate_TD_6839_output: " << tbl_Aggregate_TD_6839_output.getNumRow() << " " << "tbl_Aggregate_TD_6804_output: " << tbl_Aggregate_TD_6804_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_377665_s, &tv_r_Expand_4_377665_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_518_output: " << tbl_Union_TD_518_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_909885_s, &tv_r_Aggregate_3_909885_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4280_output: " << tbl_Expand_TD_4280_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_915237_s, &tv_r_Sort_2_915237_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3337_output: " << tbl_Aggregate_TD_3337_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_2375_s, &tv_r_LocalLimit_1_2375_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2696_output: " << tbl_Sort_TD_2696_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_684244_s, &tv_r_GlobalLimit_0_684244_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1441_output: " << tbl_LocalLimit_TD_1441_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.1701448 * 1000 << "ms" << std::endl; 
    return 0; 
}
