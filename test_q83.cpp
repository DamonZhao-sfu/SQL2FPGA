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

#include "cfgFunc_q83.hpp" 
#include "q83.hpp" 

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
    std::cout << "NOTE:running query #83\n."; 
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
    Table tbl_GlobalLimit_TD_0347_output("tbl_GlobalLimit_TD_0347_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0347_output.allocateHost();
    Table tbl_LocalLimit_TD_196_output("tbl_LocalLimit_TD_196_output", 6100000, 8, "");
    tbl_LocalLimit_TD_196_output.allocateHost();
    Table tbl_Sort_TD_2913_output("tbl_Sort_TD_2913_output", 6100000, 8, "");
    tbl_Sort_TD_2913_output.allocateHost();
    Table tbl_Project_TD_3182_output("tbl_Project_TD_3182_output", 6100000, 8, "");
    tbl_Project_TD_3182_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4817_output("tbl_JOIN_INNER_TD_4817_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_4817_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5233_output("tbl_JOIN_INNER_TD_5233_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5233_output.allocateHost();
    Table tbl_Aggregate_TD_5247_output("tbl_Aggregate_TD_5247_output", 6100000, 2, "");
    tbl_Aggregate_TD_5247_output.allocateHost();
    Table tbl_Aggregate_TD_6875_output("tbl_Aggregate_TD_6875_output", 6100000, 2, "");
    tbl_Aggregate_TD_6875_output.allocateHost();
    Table tbl_Aggregate_TD_6720_output("tbl_Aggregate_TD_6720_output", 6100000, 2, "");
    tbl_Aggregate_TD_6720_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6573_output("tbl_JOIN_INNER_TD_6573_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6573_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7760_output("tbl_JOIN_INNER_TD_7760_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7760_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7874_output("tbl_JOIN_INNER_TD_7874_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7874_output.allocateHost();
    Table tbl_JOIN_INNER_TD_749_output("tbl_JOIN_INNER_TD_749_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_749_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_760_output("tbl_JOIN_LEFTSEMI_TD_760_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_760_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8117_output("tbl_JOIN_INNER_TD_8117_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8117_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_8457_output("tbl_JOIN_LEFTSEMI_TD_8457_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_8457_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8195_output("tbl_JOIN_INNER_TD_8195_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8195_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_8296_output("tbl_JOIN_LEFTSEMI_TD_8296_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_8296_output.allocateHost();
    Table tbl_Filter_TD_8965_output("tbl_Filter_TD_8965_output", 6100000, 3, "");
    tbl_Filter_TD_8965_output.allocateHost();
    Table tbl_Filter_TD_891_output("tbl_Filter_TD_891_output", 6100000, 2, "");
    tbl_Filter_TD_891_output.allocateHost();
    Table tbl_Filter_TD_8520_output("tbl_Filter_TD_8520_output", 6100000, 2, "");
    tbl_Filter_TD_8520_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_861_output("tbl_JOIN_LEFTSEMI_TD_861_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_861_output.allocateHost();
    Table tbl_Filter_TD_9403_output("tbl_Filter_TD_9403_output", 6100000, 3, "");
    tbl_Filter_TD_9403_output.allocateHost();
    Table tbl_Filter_TD_9830_output("tbl_Filter_TD_9830_output", 6100000, 2, "");
    tbl_Filter_TD_9830_output.allocateHost();
    Table tbl_Filter_TD_9861_output("tbl_Filter_TD_9861_output", 6100000, 2, "");
    tbl_Filter_TD_9861_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_9899_output("tbl_JOIN_LEFTSEMI_TD_9899_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_9899_output.allocateHost();
    Table tbl_Filter_TD_9659_output("tbl_Filter_TD_9659_output", 6100000, 3, "");
    tbl_Filter_TD_9659_output.allocateHost();
    Table tbl_Filter_TD_9484_output("tbl_Filter_TD_9484_output", 6100000, 2, "");
    tbl_Filter_TD_9484_output.allocateHost();
    Table tbl_Filter_TD_9896_output("tbl_Filter_TD_9896_output", 6100000, 2, "");
    tbl_Filter_TD_9896_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_9201_output("tbl_JOIN_LEFTSEMI_TD_9201_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_9201_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9341_input;
    tbl_SerializeFromObject_TD_9341_input = Table("web_returns", web_returns_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9341_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_9341_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_9341_input.addCol("wr_return_quantity", 4);
    tbl_SerializeFromObject_TD_9341_input.allocateHost();
    tbl_SerializeFromObject_TD_9341_input.loadHost();
    Table tbl_SerializeFromObject_TD_9957_input;
    tbl_SerializeFromObject_TD_9957_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9957_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9957_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9957_input.allocateHost();
    tbl_SerializeFromObject_TD_9957_input.loadHost();
    Table tbl_SerializeFromObject_TD_9924_input;
    tbl_SerializeFromObject_TD_9924_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9924_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9924_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9924_input.allocateHost();
    tbl_SerializeFromObject_TD_9924_input.loadHost();
    Table tbl_SerializeFromObject_TD_9474_input;
    tbl_SerializeFromObject_TD_9474_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9474_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9474_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_9474_input.allocateHost();
    tbl_SerializeFromObject_TD_9474_input.loadHost();
    Table tbl_Filter_TD_9531_output("tbl_Filter_TD_9531_output", 6100000, 1, "");
    tbl_Filter_TD_9531_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10187_input;
    tbl_SerializeFromObject_TD_10187_input = Table("store_returns", store_returns_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10187_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_10187_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_10187_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_10187_input.allocateHost();
    tbl_SerializeFromObject_TD_10187_input.loadHost();
    Table tbl_SerializeFromObject_TD_10535_input;
    tbl_SerializeFromObject_TD_10535_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10535_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10535_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10535_input.allocateHost();
    tbl_SerializeFromObject_TD_10535_input.loadHost();
    Table tbl_SerializeFromObject_TD_10494_input;
    tbl_SerializeFromObject_TD_10494_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10494_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10494_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10494_input.allocateHost();
    tbl_SerializeFromObject_TD_10494_input.loadHost();
    Table tbl_SerializeFromObject_TD_10310_input;
    tbl_SerializeFromObject_TD_10310_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10310_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10310_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_10310_input.allocateHost();
    tbl_SerializeFromObject_TD_10310_input.loadHost();
    Table tbl_Filter_TD_10909_output("tbl_Filter_TD_10909_output", 6100000, 1, "");
    tbl_Filter_TD_10909_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10835_input;
    tbl_SerializeFromObject_TD_10835_input = Table("catalog_returns", catalog_returns_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10835_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_10835_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_10835_input.addCol("cr_return_quantity", 4);
    tbl_SerializeFromObject_TD_10835_input.allocateHost();
    tbl_SerializeFromObject_TD_10835_input.loadHost();
    Table tbl_SerializeFromObject_TD_10859_input;
    tbl_SerializeFromObject_TD_10859_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10859_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10859_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10859_input.allocateHost();
    tbl_SerializeFromObject_TD_10859_input.loadHost();
    Table tbl_SerializeFromObject_TD_10922_input;
    tbl_SerializeFromObject_TD_10922_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10922_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10922_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10922_input.allocateHost();
    tbl_SerializeFromObject_TD_10922_input.loadHost();
    Table tbl_SerializeFromObject_TD_10138_input;
    tbl_SerializeFromObject_TD_10138_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10138_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10138_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_10138_input.allocateHost();
    tbl_SerializeFromObject_TD_10138_input.loadHost();
    Table tbl_Filter_TD_10585_output("tbl_Filter_TD_10585_output", 6100000, 1, "");
    tbl_Filter_TD_10585_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10700_input;
    tbl_SerializeFromObject_TD_10700_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10700_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_10700_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10700_input.allocateHost();
    tbl_SerializeFromObject_TD_10700_input.loadHost();
    Table tbl_SerializeFromObject_TD_11617_input;
    tbl_SerializeFromObject_TD_11617_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11617_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11617_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11617_input.allocateHost();
    tbl_SerializeFromObject_TD_11617_input.loadHost();
    Table tbl_SerializeFromObject_TD_11469_input;
    tbl_SerializeFromObject_TD_11469_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11469_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11469_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11469_input.allocateHost();
    tbl_SerializeFromObject_TD_11469_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_4683_s, tv_r_Filter_10_4683_e;
    gettimeofday(&tv_r_Filter_10_4683_s, 0);
    SW_Filter_TD_10585(tbl_SerializeFromObject_TD_11469_input, tbl_Filter_TD_10585_output);
    gettimeofday(&tv_r_Filter_10_4683_e, 0);

    struct timeval tv_r_Filter_10_27491_s, tv_r_Filter_10_27491_e;
    gettimeofday(&tv_r_Filter_10_27491_s, 0);
    SW_Filter_TD_10909(tbl_SerializeFromObject_TD_11617_input, tbl_Filter_TD_10909_output);
    gettimeofday(&tv_r_Filter_10_27491_e, 0);

    struct timeval tv_r_Filter_9_604734_s, tv_r_Filter_9_604734_e;
    gettimeofday(&tv_r_Filter_9_604734_s, 0);
    SW_Filter_TD_9531(tbl_SerializeFromObject_TD_10700_input, tbl_Filter_TD_9531_output);
    gettimeofday(&tv_r_Filter_9_604734_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_552042_s, tv_r_JOIN_LEFTSEMI_9_552042_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_552042_s, 0);
    SW_JOIN_LEFTSEMI_TD_9201(tbl_SerializeFromObject_TD_10138_input, tbl_Filter_TD_10585_output, tbl_JOIN_LEFTSEMI_TD_9201_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_552042_e, 0);

    struct timeval tv_r_Filter_9_986459_s, tv_r_Filter_9_986459_e;
    gettimeofday(&tv_r_Filter_9_986459_s, 0);
    SW_Filter_TD_9896(tbl_SerializeFromObject_TD_10922_input, tbl_Filter_TD_9896_output);
    gettimeofday(&tv_r_Filter_9_986459_e, 0);

    struct timeval tv_r_Filter_9_928199_s, tv_r_Filter_9_928199_e;
    gettimeofday(&tv_r_Filter_9_928199_s, 0);
    SW_Filter_TD_9484(tbl_SerializeFromObject_TD_10859_input, tbl_Filter_TD_9484_output);
    gettimeofday(&tv_r_Filter_9_928199_e, 0);

    struct timeval tv_r_Filter_9_364772_s, tv_r_Filter_9_364772_e;
    gettimeofday(&tv_r_Filter_9_364772_s, 0);
    SW_Filter_TD_9659(tbl_SerializeFromObject_TD_10835_input, tbl_Filter_TD_9659_output);
    gettimeofday(&tv_r_Filter_9_364772_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_950171_s, tv_r_JOIN_LEFTSEMI_9_950171_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_950171_s, 0);
    SW_JOIN_LEFTSEMI_TD_9899(tbl_SerializeFromObject_TD_10310_input, tbl_Filter_TD_10909_output, tbl_JOIN_LEFTSEMI_TD_9899_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_950171_e, 0);

    struct timeval tv_r_Filter_9_791593_s, tv_r_Filter_9_791593_e;
    gettimeofday(&tv_r_Filter_9_791593_s, 0);
    SW_Filter_TD_9861(tbl_SerializeFromObject_TD_10494_input, tbl_Filter_TD_9861_output);
    gettimeofday(&tv_r_Filter_9_791593_e, 0);

    struct timeval tv_r_Filter_9_158713_s, tv_r_Filter_9_158713_e;
    gettimeofday(&tv_r_Filter_9_158713_s, 0);
    SW_Filter_TD_9830(tbl_SerializeFromObject_TD_10535_input, tbl_Filter_TD_9830_output);
    gettimeofday(&tv_r_Filter_9_158713_e, 0);

    struct timeval tv_r_Filter_9_290458_s, tv_r_Filter_9_290458_e;
    gettimeofday(&tv_r_Filter_9_290458_s, 0);
    SW_Filter_TD_9403(tbl_SerializeFromObject_TD_10187_input, tbl_Filter_TD_9403_output);
    gettimeofday(&tv_r_Filter_9_290458_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_707790_s, tv_r_JOIN_LEFTSEMI_8_707790_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_707790_s, 0);
    SW_JOIN_LEFTSEMI_TD_861(tbl_SerializeFromObject_TD_9474_input, tbl_Filter_TD_9531_output, tbl_JOIN_LEFTSEMI_TD_861_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_707790_e, 0);

    struct timeval tv_r_Filter_8_907891_s, tv_r_Filter_8_907891_e;
    gettimeofday(&tv_r_Filter_8_907891_s, 0);
    SW_Filter_TD_8520(tbl_SerializeFromObject_TD_9924_input, tbl_Filter_TD_8520_output);
    gettimeofday(&tv_r_Filter_8_907891_e, 0);

    struct timeval tv_r_Filter_8_707064_s, tv_r_Filter_8_707064_e;
    gettimeofday(&tv_r_Filter_8_707064_s, 0);
    SW_Filter_TD_891(tbl_SerializeFromObject_TD_9957_input, tbl_Filter_TD_891_output);
    gettimeofday(&tv_r_Filter_8_707064_e, 0);

    struct timeval tv_r_Filter_8_677778_s, tv_r_Filter_8_677778_e;
    gettimeofday(&tv_r_Filter_8_677778_s, 0);
    SW_Filter_TD_8965(tbl_SerializeFromObject_TD_9341_input, tbl_Filter_TD_8965_output);
    gettimeofday(&tv_r_Filter_8_677778_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_843710_s, tv_r_JOIN_LEFTSEMI_8_843710_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_843710_s, 0);
    SW_JOIN_LEFTSEMI_TD_8296(tbl_Filter_TD_9896_output, tbl_JOIN_LEFTSEMI_TD_9201_output, tbl_JOIN_LEFTSEMI_TD_8296_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_843710_e, 0);

    struct timeval tv_r_JOIN_INNER_8_723932_s, tv_r_JOIN_INNER_8_723932_e;
    gettimeofday(&tv_r_JOIN_INNER_8_723932_s, 0);
    SW_JOIN_INNER_TD_8195(tbl_Filter_TD_9659_output, tbl_Filter_TD_9484_output, tbl_JOIN_INNER_TD_8195_output);
    gettimeofday(&tv_r_JOIN_INNER_8_723932_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_294792_s, tv_r_JOIN_LEFTSEMI_8_294792_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_294792_s, 0);
    SW_JOIN_LEFTSEMI_TD_8457(tbl_Filter_TD_9861_output, tbl_JOIN_LEFTSEMI_TD_9899_output, tbl_JOIN_LEFTSEMI_TD_8457_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_294792_e, 0);

    struct timeval tv_r_JOIN_INNER_8_431081_s, tv_r_JOIN_INNER_8_431081_e;
    gettimeofday(&tv_r_JOIN_INNER_8_431081_s, 0);
    SW_JOIN_INNER_TD_8117(tbl_Filter_TD_9403_output, tbl_Filter_TD_9830_output, tbl_JOIN_INNER_TD_8117_output);
    gettimeofday(&tv_r_JOIN_INNER_8_431081_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_773054_s, tv_r_JOIN_LEFTSEMI_7_773054_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_773054_s, 0);
    SW_JOIN_LEFTSEMI_TD_760(tbl_Filter_TD_8520_output, tbl_JOIN_LEFTSEMI_TD_861_output, tbl_JOIN_LEFTSEMI_TD_760_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_773054_e, 0);

    struct timeval tv_r_JOIN_INNER_7_256999_s, tv_r_JOIN_INNER_7_256999_e;
    gettimeofday(&tv_r_JOIN_INNER_7_256999_s, 0);
    SW_JOIN_INNER_TD_749(tbl_Filter_TD_8965_output, tbl_Filter_TD_891_output, tbl_JOIN_INNER_TD_749_output);
    gettimeofday(&tv_r_JOIN_INNER_7_256999_e, 0);

    struct timeval tv_r_JOIN_INNER_7_496615_s, tv_r_JOIN_INNER_7_496615_e;
    gettimeofday(&tv_r_JOIN_INNER_7_496615_s, 0);
    SW_JOIN_INNER_TD_7874(tbl_JOIN_INNER_TD_8195_output, tbl_JOIN_LEFTSEMI_TD_8296_output, tbl_JOIN_INNER_TD_7874_output);
    gettimeofday(&tv_r_JOIN_INNER_7_496615_e, 0);

    struct timeval tv_r_JOIN_INNER_7_508149_s, tv_r_JOIN_INNER_7_508149_e;
    gettimeofday(&tv_r_JOIN_INNER_7_508149_s, 0);
    SW_JOIN_INNER_TD_7760(tbl_JOIN_INNER_TD_8117_output, tbl_JOIN_LEFTSEMI_TD_8457_output, tbl_JOIN_INNER_TD_7760_output);
    gettimeofday(&tv_r_JOIN_INNER_7_508149_e, 0);

    struct timeval tv_r_JOIN_INNER_6_241215_s, tv_r_JOIN_INNER_6_241215_e;
    gettimeofday(&tv_r_JOIN_INNER_6_241215_s, 0);
    SW_JOIN_INNER_TD_6573(tbl_JOIN_INNER_TD_749_output, tbl_JOIN_LEFTSEMI_TD_760_output, tbl_JOIN_INNER_TD_6573_output);
    gettimeofday(&tv_r_JOIN_INNER_6_241215_e, 0);

    struct timeval tv_r_Aggregate_6_402450_s, tv_r_Aggregate_6_402450_e;
    gettimeofday(&tv_r_Aggregate_6_402450_s, 0);
    SW_Aggregate_TD_6720(tbl_JOIN_INNER_TD_7874_output, tbl_Aggregate_TD_6720_output);
    gettimeofday(&tv_r_Aggregate_6_402450_e, 0);

    struct timeval tv_r_Aggregate_6_289751_s, tv_r_Aggregate_6_289751_e;
    gettimeofday(&tv_r_Aggregate_6_289751_s, 0);
    SW_Aggregate_TD_6875(tbl_JOIN_INNER_TD_7760_output, tbl_Aggregate_TD_6875_output);
    gettimeofday(&tv_r_Aggregate_6_289751_e, 0);

    struct timeval tv_r_Aggregate_5_167409_s, tv_r_Aggregate_5_167409_e;
    gettimeofday(&tv_r_Aggregate_5_167409_s, 0);
    SW_Aggregate_TD_5247(tbl_JOIN_INNER_TD_6573_output, tbl_Aggregate_TD_5247_output);
    gettimeofday(&tv_r_Aggregate_5_167409_e, 0);

    struct timeval tv_r_JOIN_INNER_5_149038_s, tv_r_JOIN_INNER_5_149038_e;
    gettimeofday(&tv_r_JOIN_INNER_5_149038_s, 0);
    SW_JOIN_INNER_TD_5233(tbl_Aggregate_TD_6875_output, tbl_Aggregate_TD_6720_output, tbl_JOIN_INNER_TD_5233_output);
    gettimeofday(&tv_r_JOIN_INNER_5_149038_e, 0);

    struct timeval tv_r_JOIN_INNER_4_364941_s, tv_r_JOIN_INNER_4_364941_e;
    gettimeofday(&tv_r_JOIN_INNER_4_364941_s, 0);
    SW_JOIN_INNER_TD_4817(tbl_JOIN_INNER_TD_5233_output, tbl_Aggregate_TD_5247_output, tbl_JOIN_INNER_TD_4817_output);
    gettimeofday(&tv_r_JOIN_INNER_4_364941_e, 0);

    struct timeval tv_r_Project_3_263066_s, tv_r_Project_3_263066_e;
    gettimeofday(&tv_r_Project_3_263066_s, 0);
    SW_Project_TD_3182(tbl_JOIN_INNER_TD_4817_output, tbl_Project_TD_3182_output);
    gettimeofday(&tv_r_Project_3_263066_e, 0);

    struct timeval tv_r_Sort_2_186178_s, tv_r_Sort_2_186178_e;
    gettimeofday(&tv_r_Sort_2_186178_s, 0);
    SW_Sort_TD_2913(tbl_Project_TD_3182_output, tbl_Sort_TD_2913_output);
    gettimeofday(&tv_r_Sort_2_186178_e, 0);

    struct timeval tv_r_LocalLimit_1_59066_s, tv_r_LocalLimit_1_59066_e;
    gettimeofday(&tv_r_LocalLimit_1_59066_s, 0);
    SW_LocalLimit_TD_196(tbl_Sort_TD_2913_output, tbl_LocalLimit_TD_196_output);
    gettimeofday(&tv_r_LocalLimit_1_59066_e, 0);

    struct timeval tv_r_GlobalLimit_0_290389_s, tv_r_GlobalLimit_0_290389_e;
    gettimeofday(&tv_r_GlobalLimit_0_290389_s, 0);
    SW_GlobalLimit_TD_0347(tbl_LocalLimit_TD_196_output, tbl_GlobalLimit_TD_0347_output);
    gettimeofday(&tv_r_GlobalLimit_0_290389_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_4683_s, &tv_r_Filter_10_4683_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11469_input: " << tbl_SerializeFromObject_TD_11469_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_27491_s, &tv_r_Filter_10_27491_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11617_input: " << tbl_SerializeFromObject_TD_11617_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_604734_s, &tv_r_Filter_9_604734_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10700_input: " << tbl_SerializeFromObject_TD_10700_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_552042_s, &tv_r_JOIN_LEFTSEMI_9_552042_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10138_input: " << tbl_SerializeFromObject_TD_10138_input.getNumRow() << " " << "tbl_Filter_TD_10585_output: " << tbl_Filter_TD_10585_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_986459_s, &tv_r_Filter_9_986459_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10922_input: " << tbl_SerializeFromObject_TD_10922_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_928199_s, &tv_r_Filter_9_928199_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10859_input: " << tbl_SerializeFromObject_TD_10859_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_364772_s, &tv_r_Filter_9_364772_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10835_input: " << tbl_SerializeFromObject_TD_10835_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_950171_s, &tv_r_JOIN_LEFTSEMI_9_950171_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10310_input: " << tbl_SerializeFromObject_TD_10310_input.getNumRow() << " " << "tbl_Filter_TD_10909_output: " << tbl_Filter_TD_10909_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_791593_s, &tv_r_Filter_9_791593_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10494_input: " << tbl_SerializeFromObject_TD_10494_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_158713_s, &tv_r_Filter_9_158713_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10535_input: " << tbl_SerializeFromObject_TD_10535_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_290458_s, &tv_r_Filter_9_290458_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10187_input: " << tbl_SerializeFromObject_TD_10187_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_707790_s, &tv_r_JOIN_LEFTSEMI_8_707790_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9474_input: " << tbl_SerializeFromObject_TD_9474_input.getNumRow() << " " << "tbl_Filter_TD_9531_output: " << tbl_Filter_TD_9531_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_907891_s, &tv_r_Filter_8_907891_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9924_input: " << tbl_SerializeFromObject_TD_9924_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_707064_s, &tv_r_Filter_8_707064_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9957_input: " << tbl_SerializeFromObject_TD_9957_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_677778_s, &tv_r_Filter_8_677778_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9341_input: " << tbl_SerializeFromObject_TD_9341_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_843710_s, &tv_r_JOIN_LEFTSEMI_8_843710_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9896_output: " << tbl_Filter_TD_9896_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_9201_output: " << tbl_JOIN_LEFTSEMI_TD_9201_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_723932_s, &tv_r_JOIN_INNER_8_723932_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9659_output: " << tbl_Filter_TD_9659_output.getNumRow() << " " << "tbl_Filter_TD_9484_output: " << tbl_Filter_TD_9484_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_294792_s, &tv_r_JOIN_LEFTSEMI_8_294792_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9861_output: " << tbl_Filter_TD_9861_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_9899_output: " << tbl_JOIN_LEFTSEMI_TD_9899_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_431081_s, &tv_r_JOIN_INNER_8_431081_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9403_output: " << tbl_Filter_TD_9403_output.getNumRow() << " " << "tbl_Filter_TD_9830_output: " << tbl_Filter_TD_9830_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_773054_s, &tv_r_JOIN_LEFTSEMI_7_773054_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8520_output: " << tbl_Filter_TD_8520_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_861_output: " << tbl_JOIN_LEFTSEMI_TD_861_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_256999_s, &tv_r_JOIN_INNER_7_256999_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8965_output: " << tbl_Filter_TD_8965_output.getNumRow() << " " << "tbl_Filter_TD_891_output: " << tbl_Filter_TD_891_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_496615_s, &tv_r_JOIN_INNER_7_496615_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8195_output: " << tbl_JOIN_INNER_TD_8195_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_8296_output: " << tbl_JOIN_LEFTSEMI_TD_8296_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_508149_s, &tv_r_JOIN_INNER_7_508149_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8117_output: " << tbl_JOIN_INNER_TD_8117_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_8457_output: " << tbl_JOIN_LEFTSEMI_TD_8457_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_241215_s, &tv_r_JOIN_INNER_6_241215_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_749_output: " << tbl_JOIN_INNER_TD_749_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_760_output: " << tbl_JOIN_LEFTSEMI_TD_760_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_402450_s, &tv_r_Aggregate_6_402450_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7874_output: " << tbl_JOIN_INNER_TD_7874_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_289751_s, &tv_r_Aggregate_6_289751_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7760_output: " << tbl_JOIN_INNER_TD_7760_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_167409_s, &tv_r_Aggregate_5_167409_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6573_output: " << tbl_JOIN_INNER_TD_6573_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_149038_s, &tv_r_JOIN_INNER_5_149038_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6875_output: " << tbl_Aggregate_TD_6875_output.getNumRow() << " " << "tbl_Aggregate_TD_6720_output: " << tbl_Aggregate_TD_6720_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_364941_s, &tv_r_JOIN_INNER_4_364941_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5233_output: " << tbl_JOIN_INNER_TD_5233_output.getNumRow() << " " << "tbl_Aggregate_TD_5247_output: " << tbl_Aggregate_TD_5247_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_263066_s, &tv_r_Project_3_263066_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4817_output: " << tbl_JOIN_INNER_TD_4817_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_186178_s, &tv_r_Sort_2_186178_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3182_output: " << tbl_Project_TD_3182_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_59066_s, &tv_r_LocalLimit_1_59066_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2913_output: " << tbl_Sort_TD_2913_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_290389_s, &tv_r_GlobalLimit_0_290389_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_196_output: " << tbl_LocalLimit_TD_196_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.4061294 * 1000 << "ms" << std::endl; 
    return 0; 
}
