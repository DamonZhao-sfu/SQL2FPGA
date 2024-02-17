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

#include "cfgFunc_q61.hpp" 
#include "q61.hpp" 

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
    std::cout << "NOTE:running query #61\n."; 
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
    Table tbl_Project_TD_0854_output("tbl_Project_TD_0854_output", 6100000, 3, "");
    tbl_Project_TD_0854_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_1998_output("tbl_JOIN_CROSS_TD_1998_output", 6100000, 2, "");
    tbl_JOIN_CROSS_TD_1998_output.allocateHost();
    Table tbl_Aggregate_TD_2441_output("tbl_Aggregate_TD_2441_output", 6100000, 1, "");
    tbl_Aggregate_TD_2441_output.allocateHost();
    Table tbl_Aggregate_TD_2707_output("tbl_Aggregate_TD_2707_output", 6100000, 1, "");
    tbl_Aggregate_TD_2707_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3885_output("tbl_JOIN_INNER_TD_3885_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_3885_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3875_output("tbl_JOIN_INNER_TD_3875_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_3875_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4605_output("tbl_JOIN_INNER_TD_4605_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4605_output.allocateHost();
    Table tbl_Filter_TD_4618_output("tbl_Filter_TD_4618_output", 6100000, 1, "");
    tbl_Filter_TD_4618_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4836_output("tbl_JOIN_INNER_TD_4836_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4836_output.allocateHost();
    Table tbl_Filter_TD_4283_output("tbl_Filter_TD_4283_output", 6100000, 1, "");
    tbl_Filter_TD_4283_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5226_output("tbl_JOIN_INNER_TD_5226_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5226_output.allocateHost();
    Table tbl_Filter_TD_5996_output("tbl_Filter_TD_5996_output", 6100000, 1, "");
    tbl_Filter_TD_5996_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5565_input;
    tbl_SerializeFromObject_TD_5565_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5565_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_5565_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5565_input.allocateHost();
    tbl_SerializeFromObject_TD_5565_input.loadHost();
    Table tbl_JOIN_INNER_TD_5829_output("tbl_JOIN_INNER_TD_5829_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5829_output.allocateHost();
    Table tbl_Filter_TD_5452_output("tbl_Filter_TD_5452_output", 6100000, 1, "");
    tbl_Filter_TD_5452_output.allocateHost();
    Table tbl_SerializeFromObject_TD_587_input;
    tbl_SerializeFromObject_TD_587_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_587_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_587_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_587_input.allocateHost();
    tbl_SerializeFromObject_TD_587_input.loadHost();
    Table tbl_JOIN_INNER_TD_6409_output("tbl_JOIN_INNER_TD_6409_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6409_output.allocateHost();
    Table tbl_Filter_TD_6425_output("tbl_Filter_TD_6425_output", 6100000, 2, "");
    tbl_Filter_TD_6425_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6128_input;
    tbl_SerializeFromObject_TD_6128_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6128_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_6128_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_6128_input.allocateHost();
    tbl_SerializeFromObject_TD_6128_input.loadHost();
    Table tbl_JOIN_INNER_TD_6539_output("tbl_JOIN_INNER_TD_6539_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6539_output.allocateHost();
    Table tbl_Filter_TD_6677_output("tbl_Filter_TD_6677_output", 6100000, 2, "");
    tbl_Filter_TD_6677_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6395_input;
    tbl_SerializeFromObject_TD_6395_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6395_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_6395_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_6395_input.allocateHost();
    tbl_SerializeFromObject_TD_6395_input.loadHost();
    Table tbl_JOIN_INNER_TD_7281_output("tbl_JOIN_INNER_TD_7281_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7281_output.allocateHost();
    Table tbl_Filter_TD_7790_output("tbl_Filter_TD_7790_output", 6100000, 1, "");
    tbl_Filter_TD_7790_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7338_input;
    tbl_SerializeFromObject_TD_7338_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7338_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_7338_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_7338_input.allocateHost();
    tbl_SerializeFromObject_TD_7338_input.loadHost();
    Table tbl_JOIN_INNER_TD_7129_output("tbl_JOIN_INNER_TD_7129_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7129_output.allocateHost();
    Table tbl_Filter_TD_7643_output("tbl_Filter_TD_7643_output", 6100000, 1, "");
    tbl_Filter_TD_7643_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7148_input;
    tbl_SerializeFromObject_TD_7148_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7148_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_7148_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_7148_input.allocateHost();
    tbl_SerializeFromObject_TD_7148_input.loadHost();
    Table tbl_JOIN_INNER_TD_8387_output("tbl_JOIN_INNER_TD_8387_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8387_output.allocateHost();
    Table tbl_Filter_TD_8121_output("tbl_Filter_TD_8121_output", 6100000, 1, "");
    tbl_Filter_TD_8121_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8522_input;
    tbl_SerializeFromObject_TD_8522_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8522_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8522_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8522_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8522_input.allocateHost();
    tbl_SerializeFromObject_TD_8522_input.loadHost();
    Table tbl_Filter_TD_8492_output("tbl_Filter_TD_8492_output", 6100000, 5, "");
    tbl_Filter_TD_8492_output.allocateHost();
    Table tbl_Filter_TD_8599_output("tbl_Filter_TD_8599_output", 6100000, 1, "");
    tbl_Filter_TD_8599_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8642_input;
    tbl_SerializeFromObject_TD_8642_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8642_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8642_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8642_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8642_input.allocateHost();
    tbl_SerializeFromObject_TD_8642_input.loadHost();
    Table tbl_Filter_TD_9583_output("tbl_Filter_TD_9583_output", 6100000, 6, "");
    tbl_Filter_TD_9583_output.allocateHost();
    Table tbl_Filter_TD_9421_output("tbl_Filter_TD_9421_output", 6100000, 1, "");
    tbl_Filter_TD_9421_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9645_input;
    tbl_SerializeFromObject_TD_9645_input = Table("promotion", promotion_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9645_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_9645_input.addCol("p_channel_dmail", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9645_input.addCol("p_channel_email", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9645_input.addCol("p_channel_tv", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9645_input.allocateHost();
    tbl_SerializeFromObject_TD_9645_input.loadHost();
    Table tbl_SerializeFromObject_TD_9545_input;
    tbl_SerializeFromObject_TD_9545_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9545_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9545_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9545_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9545_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9545_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9545_input.allocateHost();
    tbl_SerializeFromObject_TD_9545_input.loadHost();
    Table tbl_SerializeFromObject_TD_98_input;
    tbl_SerializeFromObject_TD_98_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_98_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_98_input.addCol("s_gmt_offset", 4);
    tbl_SerializeFromObject_TD_98_input.allocateHost();
    tbl_SerializeFromObject_TD_98_input.loadHost();
    Table tbl_SerializeFromObject_TD_10168_input;
    tbl_SerializeFromObject_TD_10168_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_10168_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10168_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10168_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10168_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10168_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_10168_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10168_input.allocateHost();
    tbl_SerializeFromObject_TD_10168_input.loadHost();
    Table tbl_SerializeFromObject_TD_10666_input;
    tbl_SerializeFromObject_TD_10666_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10666_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10666_input.addCol("s_gmt_offset", 4);
    tbl_SerializeFromObject_TD_10666_input.allocateHost();
    tbl_SerializeFromObject_TD_10666_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_756729_s, tv_r_Filter_9_756729_e;
    gettimeofday(&tv_r_Filter_9_756729_s, 0);
    SW_Filter_TD_9421(tbl_SerializeFromObject_TD_10666_input, tbl_Filter_TD_9421_output);
    gettimeofday(&tv_r_Filter_9_756729_e, 0);

    struct timeval tv_r_Filter_9_59257_s, tv_r_Filter_9_59257_e;
    gettimeofday(&tv_r_Filter_9_59257_s, 0);
    SW_Filter_TD_9583(tbl_SerializeFromObject_TD_10168_input, tbl_Filter_TD_9583_output);
    gettimeofday(&tv_r_Filter_9_59257_e, 0);

    struct timeval tv_r_Filter_8_470378_s, tv_r_Filter_8_470378_e;
    gettimeofday(&tv_r_Filter_8_470378_s, 0);
    SW_Filter_TD_8599(tbl_SerializeFromObject_TD_98_input, tbl_Filter_TD_8599_output);
    gettimeofday(&tv_r_Filter_8_470378_e, 0);

    struct timeval tv_r_Filter_8_259758_s, tv_r_Filter_8_259758_e;
    gettimeofday(&tv_r_Filter_8_259758_s, 0);
    SW_Filter_TD_8492(tbl_SerializeFromObject_TD_9545_input, tbl_Filter_TD_8492_output);
    gettimeofday(&tv_r_Filter_8_259758_e, 0);

    struct timeval tv_r_Filter_8_873237_s, tv_r_Filter_8_873237_e;
    gettimeofday(&tv_r_Filter_8_873237_s, 0);
    SW_Filter_TD_8121(tbl_SerializeFromObject_TD_9645_input, tbl_Filter_TD_8121_output);
    gettimeofday(&tv_r_Filter_8_873237_e, 0);

    struct timeval tv_r_JOIN_INNER_8_129411_s, tv_r_JOIN_INNER_8_129411_e;
    gettimeofday(&tv_r_JOIN_INNER_8_129411_s, 0);
    SW_JOIN_INNER_TD_8387(tbl_Filter_TD_9583_output, tbl_Filter_TD_9421_output, tbl_JOIN_INNER_TD_8387_output);
    gettimeofday(&tv_r_JOIN_INNER_8_129411_e, 0);

    struct timeval tv_r_Filter_7_157167_s, tv_r_Filter_7_157167_e;
    gettimeofday(&tv_r_Filter_7_157167_s, 0);
    SW_Filter_TD_7643(tbl_SerializeFromObject_TD_8642_input, tbl_Filter_TD_7643_output);
    gettimeofday(&tv_r_Filter_7_157167_e, 0);

    struct timeval tv_r_JOIN_INNER_7_910924_s, tv_r_JOIN_INNER_7_910924_e;
    gettimeofday(&tv_r_JOIN_INNER_7_910924_s, 0);
    SW_JOIN_INNER_TD_7129(tbl_Filter_TD_8492_output, tbl_Filter_TD_8599_output, tbl_JOIN_INNER_TD_7129_output);
    gettimeofday(&tv_r_JOIN_INNER_7_910924_e, 0);

    struct timeval tv_r_Filter_7_755749_s, tv_r_Filter_7_755749_e;
    gettimeofday(&tv_r_Filter_7_755749_s, 0);
    SW_Filter_TD_7790(tbl_SerializeFromObject_TD_8522_input, tbl_Filter_TD_7790_output);
    gettimeofday(&tv_r_Filter_7_755749_e, 0);

    struct timeval tv_r_JOIN_INNER_7_61950_s, tv_r_JOIN_INNER_7_61950_e;
    gettimeofday(&tv_r_JOIN_INNER_7_61950_s, 0);
    SW_JOIN_INNER_TD_7281(tbl_JOIN_INNER_TD_8387_output, tbl_Filter_TD_8121_output, tbl_JOIN_INNER_TD_7281_output);
    gettimeofday(&tv_r_JOIN_INNER_7_61950_e, 0);

    struct timeval tv_r_Filter_6_581397_s, tv_r_Filter_6_581397_e;
    gettimeofday(&tv_r_Filter_6_581397_s, 0);
    SW_Filter_TD_6677(tbl_SerializeFromObject_TD_7148_input, tbl_Filter_TD_6677_output);
    gettimeofday(&tv_r_Filter_6_581397_e, 0);

    struct timeval tv_r_JOIN_INNER_6_367179_s, tv_r_JOIN_INNER_6_367179_e;
    gettimeofday(&tv_r_JOIN_INNER_6_367179_s, 0);
    SW_JOIN_INNER_TD_6539(tbl_JOIN_INNER_TD_7129_output, tbl_Filter_TD_7643_output, tbl_JOIN_INNER_TD_6539_output);
    gettimeofday(&tv_r_JOIN_INNER_6_367179_e, 0);

    struct timeval tv_r_Filter_6_379003_s, tv_r_Filter_6_379003_e;
    gettimeofday(&tv_r_Filter_6_379003_s, 0);
    SW_Filter_TD_6425(tbl_SerializeFromObject_TD_7338_input, tbl_Filter_TD_6425_output);
    gettimeofday(&tv_r_Filter_6_379003_e, 0);

    struct timeval tv_r_JOIN_INNER_6_883538_s, tv_r_JOIN_INNER_6_883538_e;
    gettimeofday(&tv_r_JOIN_INNER_6_883538_s, 0);
    SW_JOIN_INNER_TD_6409(tbl_JOIN_INNER_TD_7281_output, tbl_Filter_TD_7790_output, tbl_JOIN_INNER_TD_6409_output);
    gettimeofday(&tv_r_JOIN_INNER_6_883538_e, 0);

    struct timeval tv_r_Filter_5_426990_s, tv_r_Filter_5_426990_e;
    gettimeofday(&tv_r_Filter_5_426990_s, 0);
    SW_Filter_TD_5452(tbl_SerializeFromObject_TD_6395_input, tbl_Filter_TD_5452_output);
    gettimeofday(&tv_r_Filter_5_426990_e, 0);

    struct timeval tv_r_JOIN_INNER_5_729959_s, tv_r_JOIN_INNER_5_729959_e;
    gettimeofday(&tv_r_JOIN_INNER_5_729959_s, 0);
    SW_JOIN_INNER_TD_5829(tbl_JOIN_INNER_TD_6539_output, tbl_Filter_TD_6677_output, tbl_JOIN_INNER_TD_5829_output);
    gettimeofday(&tv_r_JOIN_INNER_5_729959_e, 0);

    struct timeval tv_r_Filter_5_157430_s, tv_r_Filter_5_157430_e;
    gettimeofday(&tv_r_Filter_5_157430_s, 0);
    SW_Filter_TD_5996(tbl_SerializeFromObject_TD_6128_input, tbl_Filter_TD_5996_output);
    gettimeofday(&tv_r_Filter_5_157430_e, 0);

    struct timeval tv_r_JOIN_INNER_5_494522_s, tv_r_JOIN_INNER_5_494522_e;
    gettimeofday(&tv_r_JOIN_INNER_5_494522_s, 0);
    SW_JOIN_INNER_TD_5226(tbl_JOIN_INNER_TD_6409_output, tbl_Filter_TD_6425_output, tbl_JOIN_INNER_TD_5226_output);
    gettimeofday(&tv_r_JOIN_INNER_5_494522_e, 0);

    struct timeval tv_r_Filter_4_194011_s, tv_r_Filter_4_194011_e;
    gettimeofday(&tv_r_Filter_4_194011_s, 0);
    SW_Filter_TD_4283(tbl_SerializeFromObject_TD_587_input, tbl_Filter_TD_4283_output);
    gettimeofday(&tv_r_Filter_4_194011_e, 0);

    struct timeval tv_r_JOIN_INNER_4_113755_s, tv_r_JOIN_INNER_4_113755_e;
    gettimeofday(&tv_r_JOIN_INNER_4_113755_s, 0);
    SW_JOIN_INNER_TD_4836(tbl_JOIN_INNER_TD_5829_output, tbl_Filter_TD_5452_output, tbl_JOIN_INNER_TD_4836_output);
    gettimeofday(&tv_r_JOIN_INNER_4_113755_e, 0);

    struct timeval tv_r_Filter_4_970866_s, tv_r_Filter_4_970866_e;
    gettimeofday(&tv_r_Filter_4_970866_s, 0);
    SW_Filter_TD_4618(tbl_SerializeFromObject_TD_5565_input, tbl_Filter_TD_4618_output);
    gettimeofday(&tv_r_Filter_4_970866_e, 0);

    struct timeval tv_r_JOIN_INNER_4_640679_s, tv_r_JOIN_INNER_4_640679_e;
    gettimeofday(&tv_r_JOIN_INNER_4_640679_s, 0);
    SW_JOIN_INNER_TD_4605(tbl_JOIN_INNER_TD_5226_output, tbl_Filter_TD_5996_output, tbl_JOIN_INNER_TD_4605_output);
    gettimeofday(&tv_r_JOIN_INNER_4_640679_e, 0);

    struct timeval tv_r_JOIN_INNER_3_478155_s, tv_r_JOIN_INNER_3_478155_e;
    gettimeofday(&tv_r_JOIN_INNER_3_478155_s, 0);
    SW_JOIN_INNER_TD_3875(tbl_JOIN_INNER_TD_4836_output, tbl_Filter_TD_4283_output, tbl_JOIN_INNER_TD_3875_output);
    gettimeofday(&tv_r_JOIN_INNER_3_478155_e, 0);

    struct timeval tv_r_JOIN_INNER_3_606424_s, tv_r_JOIN_INNER_3_606424_e;
    gettimeofday(&tv_r_JOIN_INNER_3_606424_s, 0);
    SW_JOIN_INNER_TD_3885(tbl_JOIN_INNER_TD_4605_output, tbl_Filter_TD_4618_output, tbl_JOIN_INNER_TD_3885_output);
    gettimeofday(&tv_r_JOIN_INNER_3_606424_e, 0);

    struct timeval tv_r_Aggregate_2_235021_s, tv_r_Aggregate_2_235021_e;
    gettimeofday(&tv_r_Aggregate_2_235021_s, 0);
    SW_Aggregate_TD_2707(tbl_JOIN_INNER_TD_3875_output, tbl_Aggregate_TD_2707_output);
    gettimeofday(&tv_r_Aggregate_2_235021_e, 0);

    struct timeval tv_r_Aggregate_2_858756_s, tv_r_Aggregate_2_858756_e;
    gettimeofday(&tv_r_Aggregate_2_858756_s, 0);
    SW_Aggregate_TD_2441(tbl_JOIN_INNER_TD_3885_output, tbl_Aggregate_TD_2441_output);
    gettimeofday(&tv_r_Aggregate_2_858756_e, 0);

    struct timeval tv_r_JOIN_CROSS_1_702034_s, tv_r_JOIN_CROSS_1_702034_e;
    gettimeofday(&tv_r_JOIN_CROSS_1_702034_s, 0);
    SW_JOIN_CROSS_TD_1998(tbl_Aggregate_TD_2441_output, tbl_Aggregate_TD_2707_output, tbl_JOIN_CROSS_TD_1998_output);
    gettimeofday(&tv_r_JOIN_CROSS_1_702034_e, 0);

    struct timeval tv_r_Project_0_540497_s, tv_r_Project_0_540497_e;
    gettimeofday(&tv_r_Project_0_540497_s, 0);
    SW_Project_TD_0854(tbl_JOIN_CROSS_TD_1998_output, tbl_Project_TD_0854_output);
    gettimeofday(&tv_r_Project_0_540497_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_756729_s, &tv_r_Filter_9_756729_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10666_input: " << tbl_SerializeFromObject_TD_10666_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_59257_s, &tv_r_Filter_9_59257_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10168_input: " << tbl_SerializeFromObject_TD_10168_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_470378_s, &tv_r_Filter_8_470378_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_98_input: " << tbl_SerializeFromObject_TD_98_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_259758_s, &tv_r_Filter_8_259758_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9545_input: " << tbl_SerializeFromObject_TD_9545_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_873237_s, &tv_r_Filter_8_873237_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9645_input: " << tbl_SerializeFromObject_TD_9645_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_129411_s, &tv_r_JOIN_INNER_8_129411_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9583_output: " << tbl_Filter_TD_9583_output.getNumRow() << " " << "tbl_Filter_TD_9421_output: " << tbl_Filter_TD_9421_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_157167_s, &tv_r_Filter_7_157167_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8642_input: " << tbl_SerializeFromObject_TD_8642_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_910924_s, &tv_r_JOIN_INNER_7_910924_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8492_output: " << tbl_Filter_TD_8492_output.getNumRow() << " " << "tbl_Filter_TD_8599_output: " << tbl_Filter_TD_8599_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_755749_s, &tv_r_Filter_7_755749_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8522_input: " << tbl_SerializeFromObject_TD_8522_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_61950_s, &tv_r_JOIN_INNER_7_61950_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8387_output: " << tbl_JOIN_INNER_TD_8387_output.getNumRow() << " " << "tbl_Filter_TD_8121_output: " << tbl_Filter_TD_8121_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_581397_s, &tv_r_Filter_6_581397_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7148_input: " << tbl_SerializeFromObject_TD_7148_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_367179_s, &tv_r_JOIN_INNER_6_367179_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7129_output: " << tbl_JOIN_INNER_TD_7129_output.getNumRow() << " " << "tbl_Filter_TD_7643_output: " << tbl_Filter_TD_7643_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_379003_s, &tv_r_Filter_6_379003_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7338_input: " << tbl_SerializeFromObject_TD_7338_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_883538_s, &tv_r_JOIN_INNER_6_883538_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7281_output: " << tbl_JOIN_INNER_TD_7281_output.getNumRow() << " " << "tbl_Filter_TD_7790_output: " << tbl_Filter_TD_7790_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_426990_s, &tv_r_Filter_5_426990_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6395_input: " << tbl_SerializeFromObject_TD_6395_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_729959_s, &tv_r_JOIN_INNER_5_729959_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6539_output: " << tbl_JOIN_INNER_TD_6539_output.getNumRow() << " " << "tbl_Filter_TD_6677_output: " << tbl_Filter_TD_6677_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_157430_s, &tv_r_Filter_5_157430_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6128_input: " << tbl_SerializeFromObject_TD_6128_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_494522_s, &tv_r_JOIN_INNER_5_494522_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6409_output: " << tbl_JOIN_INNER_TD_6409_output.getNumRow() << " " << "tbl_Filter_TD_6425_output: " << tbl_Filter_TD_6425_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_194011_s, &tv_r_Filter_4_194011_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_587_input: " << tbl_SerializeFromObject_TD_587_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_113755_s, &tv_r_JOIN_INNER_4_113755_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5829_output: " << tbl_JOIN_INNER_TD_5829_output.getNumRow() << " " << "tbl_Filter_TD_5452_output: " << tbl_Filter_TD_5452_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_970866_s, &tv_r_Filter_4_970866_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5565_input: " << tbl_SerializeFromObject_TD_5565_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_640679_s, &tv_r_JOIN_INNER_4_640679_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5226_output: " << tbl_JOIN_INNER_TD_5226_output.getNumRow() << " " << "tbl_Filter_TD_5996_output: " << tbl_Filter_TD_5996_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_478155_s, &tv_r_JOIN_INNER_3_478155_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4836_output: " << tbl_JOIN_INNER_TD_4836_output.getNumRow() << " " << "tbl_Filter_TD_4283_output: " << tbl_Filter_TD_4283_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_606424_s, &tv_r_JOIN_INNER_3_606424_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4605_output: " << tbl_JOIN_INNER_TD_4605_output.getNumRow() << " " << "tbl_Filter_TD_4618_output: " << tbl_Filter_TD_4618_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_235021_s, &tv_r_Aggregate_2_235021_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3875_output: " << tbl_JOIN_INNER_TD_3875_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_858756_s, &tv_r_Aggregate_2_858756_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3885_output: " << tbl_JOIN_INNER_TD_3885_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_1: " << tvdiff(&tv_r_JOIN_CROSS_1_702034_s, &tv_r_JOIN_CROSS_1_702034_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2441_output: " << tbl_Aggregate_TD_2441_output.getNumRow() << " " << "tbl_Aggregate_TD_2707_output: " << tbl_Aggregate_TD_2707_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_0: " << tvdiff(&tv_r_Project_0_540497_s, &tv_r_Project_0_540497_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_1998_output: " << tbl_JOIN_CROSS_TD_1998_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.5798248 * 1000 << "ms" << std::endl; 
    return 0; 
}
