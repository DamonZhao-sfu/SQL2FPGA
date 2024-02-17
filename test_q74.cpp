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

#include "cfgFunc_q74.hpp" 
#include "q74.hpp" 

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
    std::cout << "NOTE:running query #74\n."; 
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
    Table tbl_GlobalLimit_TD_0585_output("tbl_GlobalLimit_TD_0585_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0585_output.allocateHost();
    Table tbl_LocalLimit_TD_1212_output("tbl_LocalLimit_TD_1212_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1212_output.allocateHost();
    Table tbl_Sort_TD_2881_output("tbl_Sort_TD_2881_output", 6100000, 3, "");
    tbl_Sort_TD_2881_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3395_output("tbl_JOIN_INNER_TD_3395_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_3395_output.allocateHost();
    Table tbl_JOIN_INNER_TD_471_output("tbl_JOIN_INNER_TD_471_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_471_output.allocateHost();
    Table tbl_Aggregate_TD_4794_output("tbl_Aggregate_TD_4794_output", 6100000, 2, "");
    tbl_Aggregate_TD_4794_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5683_output("tbl_JOIN_INNER_TD_5683_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5683_output.allocateHost();
    Table tbl_Project_TD_5450_output("tbl_Project_TD_5450_output", 6100000, 2, "");
    tbl_Project_TD_5450_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5874_output("tbl_JOIN_INNER_TD_5874_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5874_output.allocateHost();
    Table tbl_Filter_TD_6250_output("tbl_Filter_TD_6250_output", 6100000, 2, "");
    tbl_Filter_TD_6250_output.allocateHost();
    Table tbl_Aggregate_TD_6794_output("tbl_Aggregate_TD_6794_output", 6100000, 4, "");
    tbl_Aggregate_TD_6794_output.allocateHost();
    Table tbl_Filter_TD_6452_output("tbl_Filter_TD_6452_output", 6100000, 2, "");
    tbl_Filter_TD_6452_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6224_output("tbl_JOIN_INNER_TD_6224_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6224_output.allocateHost();
    Table tbl_Filter_TD_6498_output("tbl_Filter_TD_6498_output", 6100000, 2, "");
    tbl_Filter_TD_6498_output.allocateHost();
    Table tbl_Aggregate_TD_7573_output("tbl_Aggregate_TD_7573_output", 6100000, 2, "");
    tbl_Aggregate_TD_7573_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7845_output("tbl_JOIN_INNER_TD_7845_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7845_output.allocateHost();
    Table tbl_Aggregate_TD_7535_output("tbl_Aggregate_TD_7535_output", 6100000, 2, "");
    tbl_Aggregate_TD_7535_output.allocateHost();
    Table tbl_Filter_TD_7212_output("tbl_Filter_TD_7212_output", 6100000, 4, "");
    tbl_Filter_TD_7212_output.allocateHost();
    Table tbl_Filter_TD_7526_output("tbl_Filter_TD_7526_output", 6100000, 3, "");
    tbl_Filter_TD_7526_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7904_input;
    tbl_SerializeFromObject_TD_7904_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7904_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7904_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7904_input.allocateHost();
    tbl_SerializeFromObject_TD_7904_input.loadHost();
    Table tbl_JOIN_INNER_TD_8521_output("tbl_JOIN_INNER_TD_8521_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8521_output.allocateHost();
    Table tbl_JOIN_INNER_TD_829_output("tbl_JOIN_INNER_TD_829_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_829_output.allocateHost();
    Table tbl_Filter_TD_8521_output("tbl_Filter_TD_8521_output", 6100000, 2, "");
    tbl_Filter_TD_8521_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8711_output("tbl_JOIN_INNER_TD_8711_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8711_output.allocateHost();
    Table tbl_SerializeFromObject_TD_89_input;
    tbl_SerializeFromObject_TD_89_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_89_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_89_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_89_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_89_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_89_input.allocateHost();
    tbl_SerializeFromObject_TD_89_input.loadHost();
    Table tbl_SerializeFromObject_TD_8922_input;
    tbl_SerializeFromObject_TD_8922_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8922_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8922_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_8922_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_8922_input.allocateHost();
    tbl_SerializeFromObject_TD_8922_input.loadHost();
    Table tbl_JOIN_INNER_TD_9886_output("tbl_JOIN_INNER_TD_9886_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_9886_output.allocateHost();
    Table tbl_Filter_TD_9925_output("tbl_Filter_TD_9925_output", 6100000, 2, "");
    tbl_Filter_TD_9925_output.allocateHost();
    Table tbl_Filter_TD_9238_output("tbl_Filter_TD_9238_output", 6100000, 4, "");
    tbl_Filter_TD_9238_output.allocateHost();
    Table tbl_Filter_TD_9465_output("tbl_Filter_TD_9465_output", 6100000, 3, "");
    tbl_Filter_TD_9465_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9951_input;
    tbl_SerializeFromObject_TD_9951_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9951_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9951_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9951_input.allocateHost();
    tbl_SerializeFromObject_TD_9951_input.loadHost();
    Table tbl_JOIN_INNER_TD_9651_output("tbl_JOIN_INNER_TD_9651_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_9651_output.allocateHost();
    Table tbl_Filter_TD_9455_output("tbl_Filter_TD_9455_output", 6100000, 2, "");
    tbl_Filter_TD_9455_output.allocateHost();
    Table tbl_Filter_TD_10580_output("tbl_Filter_TD_10580_output", 6100000, 4, "");
    tbl_Filter_TD_10580_output.allocateHost();
    Table tbl_Filter_TD_1049_output("tbl_Filter_TD_1049_output", 6100000, 3, "");
    tbl_Filter_TD_1049_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10568_input;
    tbl_SerializeFromObject_TD_10568_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10568_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10568_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10568_input.allocateHost();
    tbl_SerializeFromObject_TD_10568_input.loadHost();
    Table tbl_SerializeFromObject_TD_1099_input;
    tbl_SerializeFromObject_TD_1099_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1099_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_1099_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1099_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1099_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1099_input.allocateHost();
    tbl_SerializeFromObject_TD_1099_input.loadHost();
    Table tbl_SerializeFromObject_TD_10929_input;
    tbl_SerializeFromObject_TD_10929_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10929_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10929_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10929_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_10929_input.allocateHost();
    tbl_SerializeFromObject_TD_10929_input.loadHost();
    Table tbl_Filter_TD_10757_output("tbl_Filter_TD_10757_output", 6100000, 4, "");
    tbl_Filter_TD_10757_output.allocateHost();
    Table tbl_Filter_TD_10937_output("tbl_Filter_TD_10937_output", 6100000, 3, "");
    tbl_Filter_TD_10937_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10361_input;
    tbl_SerializeFromObject_TD_10361_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10361_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10361_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10361_input.allocateHost();
    tbl_SerializeFromObject_TD_10361_input.loadHost();
    Table tbl_SerializeFromObject_TD_11217_input;
    tbl_SerializeFromObject_TD_11217_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11217_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11217_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11217_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11217_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11217_input.allocateHost();
    tbl_SerializeFromObject_TD_11217_input.loadHost();
    Table tbl_SerializeFromObject_TD_11697_input;
    tbl_SerializeFromObject_TD_11697_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11697_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11697_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_11697_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_11697_input.allocateHost();
    tbl_SerializeFromObject_TD_11697_input.loadHost();
    Table tbl_SerializeFromObject_TD_11435_input;
    tbl_SerializeFromObject_TD_11435_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11435_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11435_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11435_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11435_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11435_input.allocateHost();
    tbl_SerializeFromObject_TD_11435_input.loadHost();
    Table tbl_SerializeFromObject_TD_11693_input;
    tbl_SerializeFromObject_TD_11693_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11693_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11693_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11693_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_11693_input.allocateHost();
    tbl_SerializeFromObject_TD_11693_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_832401_s, tv_r_Filter_10_832401_e;
    gettimeofday(&tv_r_Filter_10_832401_s, 0);
    SW_Filter_TD_10937(tbl_SerializeFromObject_TD_11693_input, tbl_Filter_TD_10937_output);
    gettimeofday(&tv_r_Filter_10_832401_e, 0);

    struct timeval tv_r_Filter_10_149547_s, tv_r_Filter_10_149547_e;
    gettimeofday(&tv_r_Filter_10_149547_s, 0);
    SW_Filter_TD_10757(tbl_SerializeFromObject_TD_11435_input, tbl_Filter_TD_10757_output);
    gettimeofday(&tv_r_Filter_10_149547_e, 0);

    struct timeval tv_r_Filter_10_382434_s, tv_r_Filter_10_382434_e;
    gettimeofday(&tv_r_Filter_10_382434_s, 0);
    SW_Filter_TD_1049(tbl_SerializeFromObject_TD_11697_input, tbl_Filter_TD_1049_output);
    gettimeofday(&tv_r_Filter_10_382434_e, 0);

    struct timeval tv_r_Filter_10_334446_s, tv_r_Filter_10_334446_e;
    gettimeofday(&tv_r_Filter_10_334446_s, 0);
    SW_Filter_TD_10580(tbl_SerializeFromObject_TD_11217_input, tbl_Filter_TD_10580_output);
    gettimeofday(&tv_r_Filter_10_334446_e, 0);

    struct timeval tv_r_Filter_9_313109_s, tv_r_Filter_9_313109_e;
    gettimeofday(&tv_r_Filter_9_313109_s, 0);
    SW_Filter_TD_9455(tbl_SerializeFromObject_TD_10361_input, tbl_Filter_TD_9455_output);
    gettimeofday(&tv_r_Filter_9_313109_e, 0);

    struct timeval tv_r_JOIN_INNER_9_123892_s, tv_r_JOIN_INNER_9_123892_e;
    gettimeofday(&tv_r_JOIN_INNER_9_123892_s, 0);
    SW_JOIN_INNER_TD_9651(tbl_Filter_TD_10757_output, tbl_Filter_TD_10937_output, tbl_JOIN_INNER_TD_9651_output);
    gettimeofday(&tv_r_JOIN_INNER_9_123892_e, 0);

    struct timeval tv_r_Filter_9_291883_s, tv_r_Filter_9_291883_e;
    gettimeofday(&tv_r_Filter_9_291883_s, 0);
    SW_Filter_TD_9465(tbl_SerializeFromObject_TD_10929_input, tbl_Filter_TD_9465_output);
    gettimeofday(&tv_r_Filter_9_291883_e, 0);

    struct timeval tv_r_Filter_9_426142_s, tv_r_Filter_9_426142_e;
    gettimeofday(&tv_r_Filter_9_426142_s, 0);
    SW_Filter_TD_9238(tbl_SerializeFromObject_TD_1099_input, tbl_Filter_TD_9238_output);
    gettimeofday(&tv_r_Filter_9_426142_e, 0);

    struct timeval tv_r_Filter_9_888913_s, tv_r_Filter_9_888913_e;
    gettimeofday(&tv_r_Filter_9_888913_s, 0);
    SW_Filter_TD_9925(tbl_SerializeFromObject_TD_10568_input, tbl_Filter_TD_9925_output);
    gettimeofday(&tv_r_Filter_9_888913_e, 0);

    struct timeval tv_r_JOIN_INNER_9_716_s, tv_r_JOIN_INNER_9_716_e;
    gettimeofday(&tv_r_JOIN_INNER_9_716_s, 0);
    SW_JOIN_INNER_TD_9886(tbl_Filter_TD_10580_output, tbl_Filter_TD_1049_output, tbl_JOIN_INNER_TD_9886_output);
    gettimeofday(&tv_r_JOIN_INNER_9_716_e, 0);

    struct timeval tv_r_JOIN_INNER_8_585811_s, tv_r_JOIN_INNER_8_585811_e;
    gettimeofday(&tv_r_JOIN_INNER_8_585811_s, 0);
    SW_JOIN_INNER_TD_8711(tbl_JOIN_INNER_TD_9651_output, tbl_Filter_TD_9455_output, tbl_JOIN_INNER_TD_8711_output);
    gettimeofday(&tv_r_JOIN_INNER_8_585811_e, 0);

    struct timeval tv_r_Filter_8_521692_s, tv_r_Filter_8_521692_e;
    gettimeofday(&tv_r_Filter_8_521692_s, 0);
    SW_Filter_TD_8521(tbl_SerializeFromObject_TD_9951_input, tbl_Filter_TD_8521_output);
    gettimeofday(&tv_r_Filter_8_521692_e, 0);

    struct timeval tv_r_JOIN_INNER_8_458565_s, tv_r_JOIN_INNER_8_458565_e;
    gettimeofday(&tv_r_JOIN_INNER_8_458565_s, 0);
    SW_JOIN_INNER_TD_829(tbl_Filter_TD_9238_output, tbl_Filter_TD_9465_output, tbl_JOIN_INNER_TD_829_output);
    gettimeofday(&tv_r_JOIN_INNER_8_458565_e, 0);

    struct timeval tv_r_JOIN_INNER_8_974510_s, tv_r_JOIN_INNER_8_974510_e;
    gettimeofday(&tv_r_JOIN_INNER_8_974510_s, 0);
    SW_JOIN_INNER_TD_8521(tbl_JOIN_INNER_TD_9886_output, tbl_Filter_TD_9925_output, tbl_JOIN_INNER_TD_8521_output);
    gettimeofday(&tv_r_JOIN_INNER_8_974510_e, 0);

    struct timeval tv_r_Filter_7_289504_s, tv_r_Filter_7_289504_e;
    gettimeofday(&tv_r_Filter_7_289504_s, 0);
    SW_Filter_TD_7526(tbl_SerializeFromObject_TD_8922_input, tbl_Filter_TD_7526_output);
    gettimeofday(&tv_r_Filter_7_289504_e, 0);

    struct timeval tv_r_Filter_7_433761_s, tv_r_Filter_7_433761_e;
    gettimeofday(&tv_r_Filter_7_433761_s, 0);
    SW_Filter_TD_7212(tbl_SerializeFromObject_TD_89_input, tbl_Filter_TD_7212_output);
    gettimeofday(&tv_r_Filter_7_433761_e, 0);

    struct timeval tv_r_Aggregate_7_389014_s, tv_r_Aggregate_7_389014_e;
    gettimeofday(&tv_r_Aggregate_7_389014_s, 0);
    SW_Aggregate_TD_7535(tbl_JOIN_INNER_TD_8711_output, tbl_Aggregate_TD_7535_output);
    gettimeofday(&tv_r_Aggregate_7_389014_e, 0);

    struct timeval tv_r_JOIN_INNER_7_708225_s, tv_r_JOIN_INNER_7_708225_e;
    gettimeofday(&tv_r_JOIN_INNER_7_708225_s, 0);
    SW_JOIN_INNER_TD_7845(tbl_JOIN_INNER_TD_829_output, tbl_Filter_TD_8521_output, tbl_JOIN_INNER_TD_7845_output);
    gettimeofday(&tv_r_JOIN_INNER_7_708225_e, 0);

    struct timeval tv_r_Aggregate_7_653925_s, tv_r_Aggregate_7_653925_e;
    gettimeofday(&tv_r_Aggregate_7_653925_s, 0);
    SW_Aggregate_TD_7573(tbl_JOIN_INNER_TD_8521_output, tbl_Aggregate_TD_7573_output);
    gettimeofday(&tv_r_Aggregate_7_653925_e, 0);

    struct timeval tv_r_Filter_6_139091_s, tv_r_Filter_6_139091_e;
    gettimeofday(&tv_r_Filter_6_139091_s, 0);
    SW_Filter_TD_6498(tbl_SerializeFromObject_TD_7904_input, tbl_Filter_TD_6498_output);
    gettimeofday(&tv_r_Filter_6_139091_e, 0);

    struct timeval tv_r_JOIN_INNER_6_721894_s, tv_r_JOIN_INNER_6_721894_e;
    gettimeofday(&tv_r_JOIN_INNER_6_721894_s, 0);
    SW_JOIN_INNER_TD_6224(tbl_Filter_TD_7212_output, tbl_Filter_TD_7526_output, tbl_JOIN_INNER_TD_6224_output);
    gettimeofday(&tv_r_JOIN_INNER_6_721894_e, 0);

    struct timeval tv_r_Filter_6_576893_s, tv_r_Filter_6_576893_e;
    gettimeofday(&tv_r_Filter_6_576893_s, 0);
    SW_Filter_TD_6452(tbl_Aggregate_TD_7535_output, tbl_Filter_TD_6452_output);
    gettimeofday(&tv_r_Filter_6_576893_e, 0);

    struct timeval tv_r_Aggregate_6_593508_s, tv_r_Aggregate_6_593508_e;
    gettimeofday(&tv_r_Aggregate_6_593508_s, 0);
    SW_Aggregate_TD_6794(tbl_JOIN_INNER_TD_7845_output, tbl_Aggregate_TD_6794_output);
    gettimeofday(&tv_r_Aggregate_6_593508_e, 0);

    struct timeval tv_r_Filter_6_120311_s, tv_r_Filter_6_120311_e;
    gettimeofday(&tv_r_Filter_6_120311_s, 0);
    SW_Filter_TD_6250(tbl_Aggregate_TD_7573_output, tbl_Filter_TD_6250_output);
    gettimeofday(&tv_r_Filter_6_120311_e, 0);

    struct timeval tv_r_JOIN_INNER_5_135359_s, tv_r_JOIN_INNER_5_135359_e;
    gettimeofday(&tv_r_JOIN_INNER_5_135359_s, 0);
    SW_JOIN_INNER_TD_5874(tbl_JOIN_INNER_TD_6224_output, tbl_Filter_TD_6498_output, tbl_JOIN_INNER_TD_5874_output);
    gettimeofday(&tv_r_JOIN_INNER_5_135359_e, 0);

    struct timeval tv_r_Project_5_861496_s, tv_r_Project_5_861496_e;
    gettimeofday(&tv_r_Project_5_861496_s, 0);
    SW_Project_TD_5450(tbl_Filter_TD_6452_output, tbl_Project_TD_5450_output);
    gettimeofday(&tv_r_Project_5_861496_e, 0);

    struct timeval tv_r_JOIN_INNER_5_656142_s, tv_r_JOIN_INNER_5_656142_e;
    gettimeofday(&tv_r_JOIN_INNER_5_656142_s, 0);
    SW_JOIN_INNER_TD_5683(tbl_Filter_TD_6250_output, tbl_Aggregate_TD_6794_output, tbl_JOIN_INNER_TD_5683_output);
    gettimeofday(&tv_r_JOIN_INNER_5_656142_e, 0);

    struct timeval tv_r_Aggregate_4_287317_s, tv_r_Aggregate_4_287317_e;
    gettimeofday(&tv_r_Aggregate_4_287317_s, 0);
    SW_Aggregate_TD_4794(tbl_JOIN_INNER_TD_5874_output, tbl_Aggregate_TD_4794_output);
    gettimeofday(&tv_r_Aggregate_4_287317_e, 0);

    struct timeval tv_r_JOIN_INNER_4_201192_s, tv_r_JOIN_INNER_4_201192_e;
    gettimeofday(&tv_r_JOIN_INNER_4_201192_s, 0);
    SW_JOIN_INNER_TD_471(tbl_JOIN_INNER_TD_5683_output, tbl_Project_TD_5450_output, tbl_JOIN_INNER_TD_471_output);
    gettimeofday(&tv_r_JOIN_INNER_4_201192_e, 0);

    struct timeval tv_r_JOIN_INNER_3_310093_s, tv_r_JOIN_INNER_3_310093_e;
    gettimeofday(&tv_r_JOIN_INNER_3_310093_s, 0);
    SW_JOIN_INNER_TD_3395(tbl_JOIN_INNER_TD_471_output, tbl_Aggregate_TD_4794_output, tbl_JOIN_INNER_TD_3395_output);
    gettimeofday(&tv_r_JOIN_INNER_3_310093_e, 0);

    struct timeval tv_r_Sort_2_864807_s, tv_r_Sort_2_864807_e;
    gettimeofday(&tv_r_Sort_2_864807_s, 0);
    SW_Sort_TD_2881(tbl_JOIN_INNER_TD_3395_output, tbl_Sort_TD_2881_output);
    gettimeofday(&tv_r_Sort_2_864807_e, 0);

    struct timeval tv_r_LocalLimit_1_800295_s, tv_r_LocalLimit_1_800295_e;
    gettimeofday(&tv_r_LocalLimit_1_800295_s, 0);
    SW_LocalLimit_TD_1212(tbl_Sort_TD_2881_output, tbl_LocalLimit_TD_1212_output);
    gettimeofday(&tv_r_LocalLimit_1_800295_e, 0);

    struct timeval tv_r_GlobalLimit_0_613146_s, tv_r_GlobalLimit_0_613146_e;
    gettimeofday(&tv_r_GlobalLimit_0_613146_s, 0);
    SW_GlobalLimit_TD_0585(tbl_LocalLimit_TD_1212_output, tbl_GlobalLimit_TD_0585_output);
    gettimeofday(&tv_r_GlobalLimit_0_613146_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_832401_s, &tv_r_Filter_10_832401_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11693_input: " << tbl_SerializeFromObject_TD_11693_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_149547_s, &tv_r_Filter_10_149547_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11435_input: " << tbl_SerializeFromObject_TD_11435_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_382434_s, &tv_r_Filter_10_382434_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11697_input: " << tbl_SerializeFromObject_TD_11697_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_334446_s, &tv_r_Filter_10_334446_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11217_input: " << tbl_SerializeFromObject_TD_11217_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_313109_s, &tv_r_Filter_9_313109_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10361_input: " << tbl_SerializeFromObject_TD_10361_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_123892_s, &tv_r_JOIN_INNER_9_123892_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10757_output: " << tbl_Filter_TD_10757_output.getNumRow() << " " << "tbl_Filter_TD_10937_output: " << tbl_Filter_TD_10937_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_291883_s, &tv_r_Filter_9_291883_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10929_input: " << tbl_SerializeFromObject_TD_10929_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_426142_s, &tv_r_Filter_9_426142_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1099_input: " << tbl_SerializeFromObject_TD_1099_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_888913_s, &tv_r_Filter_9_888913_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10568_input: " << tbl_SerializeFromObject_TD_10568_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_716_s, &tv_r_JOIN_INNER_9_716_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10580_output: " << tbl_Filter_TD_10580_output.getNumRow() << " " << "tbl_Filter_TD_1049_output: " << tbl_Filter_TD_1049_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_585811_s, &tv_r_JOIN_INNER_8_585811_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9651_output: " << tbl_JOIN_INNER_TD_9651_output.getNumRow() << " " << "tbl_Filter_TD_9455_output: " << tbl_Filter_TD_9455_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_521692_s, &tv_r_Filter_8_521692_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9951_input: " << tbl_SerializeFromObject_TD_9951_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_458565_s, &tv_r_JOIN_INNER_8_458565_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9238_output: " << tbl_Filter_TD_9238_output.getNumRow() << " " << "tbl_Filter_TD_9465_output: " << tbl_Filter_TD_9465_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_974510_s, &tv_r_JOIN_INNER_8_974510_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9886_output: " << tbl_JOIN_INNER_TD_9886_output.getNumRow() << " " << "tbl_Filter_TD_9925_output: " << tbl_Filter_TD_9925_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_289504_s, &tv_r_Filter_7_289504_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8922_input: " << tbl_SerializeFromObject_TD_8922_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_433761_s, &tv_r_Filter_7_433761_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_89_input: " << tbl_SerializeFromObject_TD_89_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_389014_s, &tv_r_Aggregate_7_389014_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8711_output: " << tbl_JOIN_INNER_TD_8711_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_708225_s, &tv_r_JOIN_INNER_7_708225_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_829_output: " << tbl_JOIN_INNER_TD_829_output.getNumRow() << " " << "tbl_Filter_TD_8521_output: " << tbl_Filter_TD_8521_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_653925_s, &tv_r_Aggregate_7_653925_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8521_output: " << tbl_JOIN_INNER_TD_8521_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_139091_s, &tv_r_Filter_6_139091_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7904_input: " << tbl_SerializeFromObject_TD_7904_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_721894_s, &tv_r_JOIN_INNER_6_721894_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7212_output: " << tbl_Filter_TD_7212_output.getNumRow() << " " << "tbl_Filter_TD_7526_output: " << tbl_Filter_TD_7526_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_576893_s, &tv_r_Filter_6_576893_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7535_output: " << tbl_Aggregate_TD_7535_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_593508_s, &tv_r_Aggregate_6_593508_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7845_output: " << tbl_JOIN_INNER_TD_7845_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_120311_s, &tv_r_Filter_6_120311_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7573_output: " << tbl_Aggregate_TD_7573_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_135359_s, &tv_r_JOIN_INNER_5_135359_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6224_output: " << tbl_JOIN_INNER_TD_6224_output.getNumRow() << " " << "tbl_Filter_TD_6498_output: " << tbl_Filter_TD_6498_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_861496_s, &tv_r_Project_5_861496_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6452_output: " << tbl_Filter_TD_6452_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_656142_s, &tv_r_JOIN_INNER_5_656142_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6250_output: " << tbl_Filter_TD_6250_output.getNumRow() << " " << "tbl_Aggregate_TD_6794_output: " << tbl_Aggregate_TD_6794_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_287317_s, &tv_r_Aggregate_4_287317_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5874_output: " << tbl_JOIN_INNER_TD_5874_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_201192_s, &tv_r_JOIN_INNER_4_201192_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5683_output: " << tbl_JOIN_INNER_TD_5683_output.getNumRow() << " " << "tbl_Project_TD_5450_output: " << tbl_Project_TD_5450_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_310093_s, &tv_r_JOIN_INNER_3_310093_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_471_output: " << tbl_JOIN_INNER_TD_471_output.getNumRow() << " " << "tbl_Aggregate_TD_4794_output: " << tbl_Aggregate_TD_4794_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_864807_s, &tv_r_Sort_2_864807_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3395_output: " << tbl_JOIN_INNER_TD_3395_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_800295_s, &tv_r_LocalLimit_1_800295_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2881_output: " << tbl_Sort_TD_2881_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_613146_s, &tv_r_GlobalLimit_0_613146_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1212_output: " << tbl_LocalLimit_TD_1212_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.3696492 * 1000 << "ms" << std::endl; 
    return 0; 
}
