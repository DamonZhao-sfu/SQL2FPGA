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
    Table tbl_Sort_TD_2251_output("tbl_Sort_TD_2251_output", 6100000, 9, "");
    tbl_Sort_TD_2251_output.allocateHost();
    Table tbl_Project_TD_3663_output("tbl_Project_TD_3663_output", 6100000, 9, "");
    tbl_Project_TD_3663_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4531_output("tbl_JOIN_INNER_TD_4531_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_4531_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5846_output("tbl_JOIN_INNER_TD_5846_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_5846_output.allocateHost();
    Table tbl_Project_TD_5927_output("tbl_Project_TD_5927_output", 6100000, 5, "");
    tbl_Project_TD_5927_output.allocateHost();
    Table tbl_Filter_TD_6216_output("tbl_Filter_TD_6216_output", 6100000, 8, "");
    tbl_Filter_TD_6216_output.allocateHost();
    Table tbl_Project_TD_6367_output("tbl_Project_TD_6367_output", 6100000, 5, "");
    tbl_Project_TD_6367_output.allocateHost();
    Table tbl_Window_TD_6404_output("tbl_Window_TD_6404_output", 6100000, 7, "");
    tbl_Window_TD_6404_output.allocateHost();
    Table tbl_Window_TD_7505_output("tbl_Window_TD_7505_output", 6100000, 9, "");
    tbl_Window_TD_7505_output.allocateHost();
    Table tbl_Window_TD_7766_output("tbl_Window_TD_7766_output", 6100000, 7, "");
    tbl_Window_TD_7766_output.allocateHost();
    Table tbl_Aggregate_TD_7310_output("tbl_Aggregate_TD_7310_output", 6100000, 6, "");
    tbl_Aggregate_TD_7310_output.allocateHost();
    Table tbl_Filter_TD_825_output("tbl_Filter_TD_825_output", 6100000, 8, "");
    tbl_Filter_TD_825_output.allocateHost();
    Table tbl_Aggregate_TD_8324_output("tbl_Aggregate_TD_8324_output", 6100000, 6, "");
    tbl_Aggregate_TD_8324_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8285_output("tbl_JOIN_INNER_TD_8285_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8285_output.allocateHost();
    Table tbl_Window_TD_9391_output("tbl_Window_TD_9391_output", 6100000, 8, "");
    tbl_Window_TD_9391_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9874_output("tbl_JOIN_INNER_TD_9874_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_9874_output.allocateHost();
    Table tbl_JOIN_INNER_TD_961_output("tbl_JOIN_INNER_TD_961_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_961_output.allocateHost();
    Table tbl_Filter_TD_9205_output("tbl_Filter_TD_9205_output", 6100000, 2, "");
    tbl_Filter_TD_9205_output.allocateHost();
    Table tbl_Aggregate_TD_10672_output("tbl_Aggregate_TD_10672_output", 6100000, 7, "");
    tbl_Aggregate_TD_10672_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10123_output("tbl_JOIN_INNER_TD_10123_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10123_output.allocateHost();
    Table tbl_Filter_TD_10729_output("tbl_Filter_TD_10729_output", 6100000, 2, "");
    tbl_Filter_TD_10729_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10153_output("tbl_JOIN_INNER_TD_10153_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10153_output.allocateHost();
    Table tbl_Filter_TD_10758_output("tbl_Filter_TD_10758_output", 6100000, 3, "");
    tbl_Filter_TD_10758_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10920_input;
    tbl_SerializeFromObject_TD_10920_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10920_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_10920_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10920_input.allocateHost();
    tbl_SerializeFromObject_TD_10920_input.loadHost();
    Table tbl_JOIN_INNER_TD_11498_output("tbl_JOIN_INNER_TD_11498_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11498_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11934_output("tbl_JOIN_INNER_TD_11934_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_11934_output.allocateHost();
    Table tbl_Filter_TD_11892_output("tbl_Filter_TD_11892_output", 6100000, 3, "");
    tbl_Filter_TD_11892_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11506_input;
    tbl_SerializeFromObject_TD_11506_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11506_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_11506_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11506_input.allocateHost();
    tbl_SerializeFromObject_TD_11506_input.loadHost();
    Table tbl_Filter_TD_11946_output("tbl_Filter_TD_11946_output", 6100000, 3, "");
    tbl_Filter_TD_11946_output.allocateHost();
    Table tbl_Filter_TD_11614_output("tbl_Filter_TD_11614_output", 6100000, 4, "");
    tbl_Filter_TD_11614_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1148_input;
    tbl_SerializeFromObject_TD_1148_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1148_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1148_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1148_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_1148_input.allocateHost();
    tbl_SerializeFromObject_TD_1148_input.loadHost();
    Table tbl_JOIN_INNER_TD_12539_output("tbl_JOIN_INNER_TD_12539_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_12539_output.allocateHost();
    Table tbl_Filter_TD_12441_output("tbl_Filter_TD_12441_output", 6100000, 2, "");
    tbl_Filter_TD_12441_output.allocateHost();
    Table tbl_Filter_TD_12179_output("tbl_Filter_TD_12179_output", 6100000, 3, "");
    tbl_Filter_TD_12179_output.allocateHost();
    Table tbl_Filter_TD_12642_output("tbl_Filter_TD_12642_output", 6100000, 4, "");
    tbl_Filter_TD_12642_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12387_input;
    tbl_SerializeFromObject_TD_12387_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12387_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12387_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12387_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12387_input.allocateHost();
    tbl_SerializeFromObject_TD_12387_input.loadHost();
    Table tbl_SerializeFromObject_TD_12156_input;
    tbl_SerializeFromObject_TD_12156_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12156_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_12156_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12156_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12156_input.allocateHost();
    tbl_SerializeFromObject_TD_12156_input.loadHost();
    Table tbl_SerializeFromObject_TD_12457_input;
    tbl_SerializeFromObject_TD_12457_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12457_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12457_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_12457_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_12457_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_12457_input.allocateHost();
    tbl_SerializeFromObject_TD_12457_input.loadHost();
    Table tbl_JOIN_INNER_TD_13475_output("tbl_JOIN_INNER_TD_13475_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_13475_output.allocateHost();
    Table tbl_Filter_TD_13842_output("tbl_Filter_TD_13842_output", 6100000, 3, "");
    tbl_Filter_TD_13842_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13196_input;
    tbl_SerializeFromObject_TD_13196_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13196_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_13196_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13196_input.allocateHost();
    tbl_SerializeFromObject_TD_13196_input.loadHost();
    Table tbl_SerializeFromObject_TD_13831_input;
    tbl_SerializeFromObject_TD_13831_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13831_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13831_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13831_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13831_input.allocateHost();
    tbl_SerializeFromObject_TD_13831_input.loadHost();
    Table tbl_SerializeFromObject_TD_13313_input;
    tbl_SerializeFromObject_TD_13313_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13313_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13313_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_13313_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13313_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_13313_input.allocateHost();
    tbl_SerializeFromObject_TD_13313_input.loadHost();
    Table tbl_Filter_TD_14476_output("tbl_Filter_TD_14476_output", 6100000, 3, "");
    tbl_Filter_TD_14476_output.allocateHost();
    Table tbl_Filter_TD_1494_output("tbl_Filter_TD_1494_output", 6100000, 4, "");
    tbl_Filter_TD_1494_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14908_input;
    tbl_SerializeFromObject_TD_14908_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_14908_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_14908_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_14908_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_14908_input.allocateHost();
    tbl_SerializeFromObject_TD_14908_input.loadHost();
    Table tbl_SerializeFromObject_TD_15504_input;
    tbl_SerializeFromObject_TD_15504_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_15504_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15504_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15504_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15504_input.allocateHost();
    tbl_SerializeFromObject_TD_15504_input.loadHost();
    Table tbl_SerializeFromObject_TD_15503_input;
    tbl_SerializeFromObject_TD_15503_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15503_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15503_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_15503_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_15503_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_15503_input.allocateHost();
    tbl_SerializeFromObject_TD_15503_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_817360_s, tv_r_Filter_14_817360_e;
    gettimeofday(&tv_r_Filter_14_817360_s, 0);
    SW_Filter_TD_1494(tbl_SerializeFromObject_TD_15503_input, tbl_Filter_TD_1494_output);
    gettimeofday(&tv_r_Filter_14_817360_e, 0);

    struct timeval tv_r_Filter_14_193107_s, tv_r_Filter_14_193107_e;
    gettimeofday(&tv_r_Filter_14_193107_s, 0);
    SW_Filter_TD_14476(tbl_SerializeFromObject_TD_15504_input, tbl_Filter_TD_14476_output);
    gettimeofday(&tv_r_Filter_14_193107_e, 0);

    struct timeval tv_r_Filter_13_844016_s, tv_r_Filter_13_844016_e;
    gettimeofday(&tv_r_Filter_13_844016_s, 0);
    SW_Filter_TD_13842(tbl_SerializeFromObject_TD_14908_input, tbl_Filter_TD_13842_output);
    gettimeofday(&tv_r_Filter_13_844016_e, 0);

    struct timeval tv_r_JOIN_INNER_13_669122_s, tv_r_JOIN_INNER_13_669122_e;
    gettimeofday(&tv_r_JOIN_INNER_13_669122_s, 0);
    SW_JOIN_INNER_TD_13475(tbl_Filter_TD_14476_output, tbl_Filter_TD_1494_output, tbl_JOIN_INNER_TD_13475_output);
    gettimeofday(&tv_r_JOIN_INNER_13_669122_e, 0);

    struct timeval tv_r_Filter_12_443558_s, tv_r_Filter_12_443558_e;
    gettimeofday(&tv_r_Filter_12_443558_s, 0);
    SW_Filter_TD_12642(tbl_SerializeFromObject_TD_13313_input, tbl_Filter_TD_12642_output);
    gettimeofday(&tv_r_Filter_12_443558_e, 0);

    struct timeval tv_r_Filter_12_103532_s, tv_r_Filter_12_103532_e;
    gettimeofday(&tv_r_Filter_12_103532_s, 0);
    SW_Filter_TD_12179(tbl_SerializeFromObject_TD_13831_input, tbl_Filter_TD_12179_output);
    gettimeofday(&tv_r_Filter_12_103532_e, 0);

    struct timeval tv_r_Filter_12_634577_s, tv_r_Filter_12_634577_e;
    gettimeofday(&tv_r_Filter_12_634577_s, 0);
    SW_Filter_TD_12441(tbl_SerializeFromObject_TD_13196_input, tbl_Filter_TD_12441_output);
    gettimeofday(&tv_r_Filter_12_634577_e, 0);

    struct timeval tv_r_JOIN_INNER_12_484322_s, tv_r_JOIN_INNER_12_484322_e;
    gettimeofday(&tv_r_JOIN_INNER_12_484322_s, 0);
    SW_JOIN_INNER_TD_12539(tbl_JOIN_INNER_TD_13475_output, tbl_Filter_TD_13842_output, tbl_JOIN_INNER_TD_12539_output);
    gettimeofday(&tv_r_JOIN_INNER_12_484322_e, 0);

    struct timeval tv_r_Filter_11_233777_s, tv_r_Filter_11_233777_e;
    gettimeofday(&tv_r_Filter_11_233777_s, 0);
    SW_Filter_TD_11614(tbl_SerializeFromObject_TD_12457_input, tbl_Filter_TD_11614_output);
    gettimeofday(&tv_r_Filter_11_233777_e, 0);

    struct timeval tv_r_Filter_11_799247_s, tv_r_Filter_11_799247_e;
    gettimeofday(&tv_r_Filter_11_799247_s, 0);
    SW_Filter_TD_11946(tbl_SerializeFromObject_TD_12156_input, tbl_Filter_TD_11946_output);
    gettimeofday(&tv_r_Filter_11_799247_e, 0);

    struct timeval tv_r_Filter_11_60866_s, tv_r_Filter_11_60866_e;
    gettimeofday(&tv_r_Filter_11_60866_s, 0);
    SW_Filter_TD_11892(tbl_SerializeFromObject_TD_12387_input, tbl_Filter_TD_11892_output);
    gettimeofday(&tv_r_Filter_11_60866_e, 0);

    struct timeval tv_r_JOIN_INNER_11_493634_s, tv_r_JOIN_INNER_11_493634_e;
    gettimeofday(&tv_r_JOIN_INNER_11_493634_s, 0);
    SW_JOIN_INNER_TD_11934(tbl_Filter_TD_12179_output, tbl_Filter_TD_12642_output, tbl_JOIN_INNER_TD_11934_output);
    gettimeofday(&tv_r_JOIN_INNER_11_493634_e, 0);

    struct timeval tv_r_JOIN_INNER_11_129942_s, tv_r_JOIN_INNER_11_129942_e;
    gettimeofday(&tv_r_JOIN_INNER_11_129942_s, 0);
    SW_JOIN_INNER_TD_11498(tbl_JOIN_INNER_TD_12539_output, tbl_Filter_TD_12441_output, tbl_JOIN_INNER_TD_11498_output);
    gettimeofday(&tv_r_JOIN_INNER_11_129942_e, 0);

    struct timeval tv_r_Filter_10_804124_s, tv_r_Filter_10_804124_e;
    gettimeofday(&tv_r_Filter_10_804124_s, 0);
    SW_Filter_TD_10758(tbl_SerializeFromObject_TD_1148_input, tbl_Filter_TD_10758_output);
    gettimeofday(&tv_r_Filter_10_804124_e, 0);

    struct timeval tv_r_JOIN_INNER_10_854377_s, tv_r_JOIN_INNER_10_854377_e;
    gettimeofday(&tv_r_JOIN_INNER_10_854377_s, 0);
    SW_JOIN_INNER_TD_10153(tbl_Filter_TD_11946_output, tbl_Filter_TD_11614_output, tbl_JOIN_INNER_TD_10153_output);
    gettimeofday(&tv_r_JOIN_INNER_10_854377_e, 0);

    struct timeval tv_r_Filter_10_369183_s, tv_r_Filter_10_369183_e;
    gettimeofday(&tv_r_Filter_10_369183_s, 0);
    SW_Filter_TD_10729(tbl_SerializeFromObject_TD_11506_input, tbl_Filter_TD_10729_output);
    gettimeofday(&tv_r_Filter_10_369183_e, 0);

    struct timeval tv_r_JOIN_INNER_10_761689_s, tv_r_JOIN_INNER_10_761689_e;
    gettimeofday(&tv_r_JOIN_INNER_10_761689_s, 0);
    SW_JOIN_INNER_TD_10123(tbl_JOIN_INNER_TD_11934_output, tbl_Filter_TD_11892_output, tbl_JOIN_INNER_TD_10123_output);
    gettimeofday(&tv_r_JOIN_INNER_10_761689_e, 0);

    struct timeval tv_r_Aggregate_10_273074_s, tv_r_Aggregate_10_273074_e;
    gettimeofday(&tv_r_Aggregate_10_273074_s, 0);
    SW_Aggregate_TD_10672(tbl_JOIN_INNER_TD_11498_output, tbl_Aggregate_TD_10672_output);
    gettimeofday(&tv_r_Aggregate_10_273074_e, 0);

    struct timeval tv_r_Filter_9_519877_s, tv_r_Filter_9_519877_e;
    gettimeofday(&tv_r_Filter_9_519877_s, 0);
    SW_Filter_TD_9205(tbl_SerializeFromObject_TD_10920_input, tbl_Filter_TD_9205_output);
    gettimeofday(&tv_r_Filter_9_519877_e, 0);

    struct timeval tv_r_JOIN_INNER_9_378108_s, tv_r_JOIN_INNER_9_378108_e;
    gettimeofday(&tv_r_JOIN_INNER_9_378108_s, 0);
    SW_JOIN_INNER_TD_961(tbl_JOIN_INNER_TD_10153_output, tbl_Filter_TD_10758_output, tbl_JOIN_INNER_TD_961_output);
    gettimeofday(&tv_r_JOIN_INNER_9_378108_e, 0);

    struct timeval tv_r_JOIN_INNER_9_392372_s, tv_r_JOIN_INNER_9_392372_e;
    gettimeofday(&tv_r_JOIN_INNER_9_392372_s, 0);
    SW_JOIN_INNER_TD_9874(tbl_JOIN_INNER_TD_10123_output, tbl_Filter_TD_10729_output, tbl_JOIN_INNER_TD_9874_output);
    gettimeofday(&tv_r_JOIN_INNER_9_392372_e, 0);

    struct timeval tv_r_Window_9_673286_s, tv_r_Window_9_673286_e;
    gettimeofday(&tv_r_Window_9_673286_s, 0);
    SW_Window_TD_9391(tbl_Aggregate_TD_10672_output, tbl_Window_TD_9391_output);
    gettimeofday(&tv_r_Window_9_673286_e, 0);

    struct timeval tv_r_JOIN_INNER_8_41039_s, tv_r_JOIN_INNER_8_41039_e;
    gettimeofday(&tv_r_JOIN_INNER_8_41039_s, 0);
    SW_JOIN_INNER_TD_8285(tbl_JOIN_INNER_TD_961_output, tbl_Filter_TD_9205_output, tbl_JOIN_INNER_TD_8285_output);
    gettimeofday(&tv_r_JOIN_INNER_8_41039_e, 0);

    struct timeval tv_r_Aggregate_8_512964_s, tv_r_Aggregate_8_512964_e;
    gettimeofday(&tv_r_Aggregate_8_512964_s, 0);
    SW_Aggregate_TD_8324(tbl_JOIN_INNER_TD_9874_output, tbl_Aggregate_TD_8324_output);
    gettimeofday(&tv_r_Aggregate_8_512964_e, 0);

    struct timeval tv_r_Filter_8_548812_s, tv_r_Filter_8_548812_e;
    gettimeofday(&tv_r_Filter_8_548812_s, 0);
    SW_Filter_TD_825(tbl_Window_TD_9391_output, tbl_Filter_TD_825_output);
    gettimeofday(&tv_r_Filter_8_548812_e, 0);

    struct timeval tv_r_Aggregate_7_217303_s, tv_r_Aggregate_7_217303_e;
    gettimeofday(&tv_r_Aggregate_7_217303_s, 0);
    SW_Aggregate_TD_7310(tbl_JOIN_INNER_TD_8285_output, tbl_Aggregate_TD_7310_output);
    gettimeofday(&tv_r_Aggregate_7_217303_e, 0);

    struct timeval tv_r_Window_7_580556_s, tv_r_Window_7_580556_e;
    gettimeofday(&tv_r_Window_7_580556_s, 0);
    SW_Window_TD_7766(tbl_Aggregate_TD_8324_output, tbl_Window_TD_7766_output);
    gettimeofday(&tv_r_Window_7_580556_e, 0);

    struct timeval tv_r_Window_7_918993_s, tv_r_Window_7_918993_e;
    gettimeofday(&tv_r_Window_7_918993_s, 0);
    SW_Window_TD_7505(tbl_Filter_TD_825_output, tbl_Window_TD_7505_output);
    gettimeofday(&tv_r_Window_7_918993_e, 0);

    struct timeval tv_r_Window_6_604694_s, tv_r_Window_6_604694_e;
    gettimeofday(&tv_r_Window_6_604694_s, 0);
    SW_Window_TD_6404(tbl_Aggregate_TD_7310_output, tbl_Window_TD_6404_output);
    gettimeofday(&tv_r_Window_6_604694_e, 0);

    struct timeval tv_r_Project_6_237688_s, tv_r_Project_6_237688_e;
    gettimeofday(&tv_r_Project_6_237688_s, 0);
    SW_Project_TD_6367(tbl_Window_TD_7766_output, tbl_Project_TD_6367_output);
    gettimeofday(&tv_r_Project_6_237688_e, 0);

    struct timeval tv_r_Filter_6_747122_s, tv_r_Filter_6_747122_e;
    gettimeofday(&tv_r_Filter_6_747122_s, 0);
    SW_Filter_TD_6216(tbl_Window_TD_7505_output, tbl_Filter_TD_6216_output);
    gettimeofday(&tv_r_Filter_6_747122_e, 0);

    struct timeval tv_r_Project_5_344074_s, tv_r_Project_5_344074_e;
    gettimeofday(&tv_r_Project_5_344074_s, 0);
    SW_Project_TD_5927(tbl_Window_TD_6404_output, tbl_Project_TD_5927_output);
    gettimeofday(&tv_r_Project_5_344074_e, 0);

    struct timeval tv_r_JOIN_INNER_5_990854_s, tv_r_JOIN_INNER_5_990854_e;
    gettimeofday(&tv_r_JOIN_INNER_5_990854_s, 0);
    SW_JOIN_INNER_TD_5846(tbl_Filter_TD_6216_output, tbl_Project_TD_6367_output, tbl_JOIN_INNER_TD_5846_output);
    gettimeofday(&tv_r_JOIN_INNER_5_990854_e, 0);

    struct timeval tv_r_JOIN_INNER_4_179276_s, tv_r_JOIN_INNER_4_179276_e;
    gettimeofday(&tv_r_JOIN_INNER_4_179276_s, 0);
    SW_JOIN_INNER_TD_4531(tbl_JOIN_INNER_TD_5846_output, tbl_Project_TD_5927_output, tbl_JOIN_INNER_TD_4531_output);
    gettimeofday(&tv_r_JOIN_INNER_4_179276_e, 0);

    struct timeval tv_r_Project_3_991412_s, tv_r_Project_3_991412_e;
    gettimeofday(&tv_r_Project_3_991412_s, 0);
    SW_Project_TD_3663(tbl_JOIN_INNER_TD_4531_output, tbl_Project_TD_3663_output);
    gettimeofday(&tv_r_Project_3_991412_e, 0);

    struct timeval tv_r_Sort_2_250662_s, tv_r_Sort_2_250662_e;
    gettimeofday(&tv_r_Sort_2_250662_s, 0);
    SW_Sort_TD_2251(tbl_Project_TD_3663_output, tbl_Sort_TD_2251_output);
    gettimeofday(&tv_r_Sort_2_250662_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_817360_s, &tv_r_Filter_14_817360_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15503_input: " << tbl_SerializeFromObject_TD_15503_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_193107_s, &tv_r_Filter_14_193107_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15504_input: " << tbl_SerializeFromObject_TD_15504_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_844016_s, &tv_r_Filter_13_844016_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14908_input: " << tbl_SerializeFromObject_TD_14908_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_669122_s, &tv_r_JOIN_INNER_13_669122_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14476_output: " << tbl_Filter_TD_14476_output.getNumRow() << " " << "tbl_Filter_TD_1494_output: " << tbl_Filter_TD_1494_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_443558_s, &tv_r_Filter_12_443558_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13313_input: " << tbl_SerializeFromObject_TD_13313_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_103532_s, &tv_r_Filter_12_103532_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13831_input: " << tbl_SerializeFromObject_TD_13831_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_634577_s, &tv_r_Filter_12_634577_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13196_input: " << tbl_SerializeFromObject_TD_13196_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_484322_s, &tv_r_JOIN_INNER_12_484322_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13475_output: " << tbl_JOIN_INNER_TD_13475_output.getNumRow() << " " << "tbl_Filter_TD_13842_output: " << tbl_Filter_TD_13842_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_233777_s, &tv_r_Filter_11_233777_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12457_input: " << tbl_SerializeFromObject_TD_12457_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_799247_s, &tv_r_Filter_11_799247_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12156_input: " << tbl_SerializeFromObject_TD_12156_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_60866_s, &tv_r_Filter_11_60866_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12387_input: " << tbl_SerializeFromObject_TD_12387_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_493634_s, &tv_r_JOIN_INNER_11_493634_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12179_output: " << tbl_Filter_TD_12179_output.getNumRow() << " " << "tbl_Filter_TD_12642_output: " << tbl_Filter_TD_12642_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_129942_s, &tv_r_JOIN_INNER_11_129942_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12539_output: " << tbl_JOIN_INNER_TD_12539_output.getNumRow() << " " << "tbl_Filter_TD_12441_output: " << tbl_Filter_TD_12441_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_804124_s, &tv_r_Filter_10_804124_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1148_input: " << tbl_SerializeFromObject_TD_1148_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_854377_s, &tv_r_JOIN_INNER_10_854377_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11946_output: " << tbl_Filter_TD_11946_output.getNumRow() << " " << "tbl_Filter_TD_11614_output: " << tbl_Filter_TD_11614_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_369183_s, &tv_r_Filter_10_369183_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11506_input: " << tbl_SerializeFromObject_TD_11506_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_761689_s, &tv_r_JOIN_INNER_10_761689_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11934_output: " << tbl_JOIN_INNER_TD_11934_output.getNumRow() << " " << "tbl_Filter_TD_11892_output: " << tbl_Filter_TD_11892_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_273074_s, &tv_r_Aggregate_10_273074_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11498_output: " << tbl_JOIN_INNER_TD_11498_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_519877_s, &tv_r_Filter_9_519877_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10920_input: " << tbl_SerializeFromObject_TD_10920_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_378108_s, &tv_r_JOIN_INNER_9_378108_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10153_output: " << tbl_JOIN_INNER_TD_10153_output.getNumRow() << " " << "tbl_Filter_TD_10758_output: " << tbl_Filter_TD_10758_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_392372_s, &tv_r_JOIN_INNER_9_392372_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10123_output: " << tbl_JOIN_INNER_TD_10123_output.getNumRow() << " " << "tbl_Filter_TD_10729_output: " << tbl_Filter_TD_10729_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_9: " << tvdiff(&tv_r_Window_9_673286_s, &tv_r_Window_9_673286_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10672_output: " << tbl_Aggregate_TD_10672_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_41039_s, &tv_r_JOIN_INNER_8_41039_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_961_output: " << tbl_JOIN_INNER_TD_961_output.getNumRow() << " " << "tbl_Filter_TD_9205_output: " << tbl_Filter_TD_9205_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_512964_s, &tv_r_Aggregate_8_512964_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9874_output: " << tbl_JOIN_INNER_TD_9874_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_548812_s, &tv_r_Filter_8_548812_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_9391_output: " << tbl_Window_TD_9391_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_217303_s, &tv_r_Aggregate_7_217303_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8285_output: " << tbl_JOIN_INNER_TD_8285_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_580556_s, &tv_r_Window_7_580556_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8324_output: " << tbl_Aggregate_TD_8324_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_918993_s, &tv_r_Window_7_918993_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_825_output: " << tbl_Filter_TD_825_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_6: " << tvdiff(&tv_r_Window_6_604694_s, &tv_r_Window_6_604694_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7310_output: " << tbl_Aggregate_TD_7310_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_237688_s, &tv_r_Project_6_237688_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7766_output: " << tbl_Window_TD_7766_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_747122_s, &tv_r_Filter_6_747122_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7505_output: " << tbl_Window_TD_7505_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_344074_s, &tv_r_Project_5_344074_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_6404_output: " << tbl_Window_TD_6404_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_990854_s, &tv_r_JOIN_INNER_5_990854_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6216_output: " << tbl_Filter_TD_6216_output.getNumRow() << " " << "tbl_Project_TD_6367_output: " << tbl_Project_TD_6367_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_179276_s, &tv_r_JOIN_INNER_4_179276_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5846_output: " << tbl_JOIN_INNER_TD_5846_output.getNumRow() << " " << "tbl_Project_TD_5927_output: " << tbl_Project_TD_5927_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_991412_s, &tv_r_Project_3_991412_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4531_output: " << tbl_JOIN_INNER_TD_4531_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_250662_s, &tv_r_Sort_2_250662_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3663_output: " << tbl_Project_TD_3663_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.1207929 * 1000 << "ms" << std::endl; 
    return 0; 
}
