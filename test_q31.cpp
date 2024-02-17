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

#include "cfgFunc_q31.hpp" 
#include "q31.hpp" 

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
    std::cout << "NOTE:running query #31\n."; 
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
    Table tbl_Sort_TD_0776_output("tbl_Sort_TD_0776_output", 6100000, 6, "");
    tbl_Sort_TD_0776_output.allocateHost();
    Table tbl_Project_TD_1142_output("tbl_Project_TD_1142_output", 6100000, 6, "");
    tbl_Project_TD_1142_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2198_output("tbl_JOIN_INNER_TD_2198_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_2198_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3222_output("tbl_JOIN_INNER_TD_3222_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_3222_output.allocateHost();
    Table tbl_Aggregate_TD_3469_output("tbl_Aggregate_TD_3469_output", 6100000, 2, "");
    tbl_Aggregate_TD_3469_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4331_output("tbl_JOIN_INNER_TD_4331_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4331_output.allocateHost();
    Table tbl_Aggregate_TD_4908_output("tbl_Aggregate_TD_4908_output", 6100000, 2, "");
    tbl_Aggregate_TD_4908_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4101_output("tbl_JOIN_INNER_TD_4101_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_4101_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5168_output("tbl_JOIN_INNER_TD_5168_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5168_output.allocateHost();
    Table tbl_Aggregate_TD_5223_output("tbl_Aggregate_TD_5223_output", 6100000, 2, "");
    tbl_Aggregate_TD_5223_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5990_output("tbl_JOIN_INNER_TD_5990_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5990_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5899_output("tbl_JOIN_INNER_TD_5899_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5899_output.allocateHost();
    Table tbl_Filter_TD_5616_output("tbl_Filter_TD_5616_output", 6100000, 2, "");
    tbl_Filter_TD_5616_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6144_output("tbl_JOIN_INNER_TD_6144_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6144_output.allocateHost();
    Table tbl_Aggregate_TD_6469_output("tbl_Aggregate_TD_6469_output", 6100000, 2, "");
    tbl_Aggregate_TD_6469_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6820_output("tbl_JOIN_INNER_TD_6820_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6820_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6916_output("tbl_JOIN_INNER_TD_6916_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6916_output.allocateHost();
    Table tbl_Filter_TD_670_output("tbl_Filter_TD_670_output", 6100000, 2, "");
    tbl_Filter_TD_670_output.allocateHost();
    Table tbl_Filter_TD_6942_output("tbl_Filter_TD_6942_output", 6100000, 3, "");
    tbl_Filter_TD_6942_output.allocateHost();
    Table tbl_Filter_TD_6369_output("tbl_Filter_TD_6369_output", 6100000, 3, "");
    tbl_Filter_TD_6369_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6730_input;
    tbl_SerializeFromObject_TD_6730_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6730_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_6730_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6730_input.allocateHost();
    tbl_SerializeFromObject_TD_6730_input.loadHost();
    Table tbl_Aggregate_TD_7120_output("tbl_Aggregate_TD_7120_output", 6100000, 3, "");
    tbl_Aggregate_TD_7120_output.allocateHost();
    Table tbl_Aggregate_TD_7187_output("tbl_Aggregate_TD_7187_output", 6100000, 2, "");
    tbl_Aggregate_TD_7187_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7640_output("tbl_JOIN_INNER_TD_7640_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7640_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7281_output("tbl_JOIN_INNER_TD_7281_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7281_output.allocateHost();
    Table tbl_Filter_TD_7121_output("tbl_Filter_TD_7121_output", 6100000, 2, "");
    tbl_Filter_TD_7121_output.allocateHost();
    Table tbl_Filter_TD_7547_output("tbl_Filter_TD_7547_output", 6100000, 3, "");
    tbl_Filter_TD_7547_output.allocateHost();
    Table tbl_Filter_TD_7786_output("tbl_Filter_TD_7786_output", 6100000, 3, "");
    tbl_Filter_TD_7786_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7296_input;
    tbl_SerializeFromObject_TD_7296_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7296_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_7296_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7296_input.allocateHost();
    tbl_SerializeFromObject_TD_7296_input.loadHost();
    Table tbl_SerializeFromObject_TD_7787_input;
    tbl_SerializeFromObject_TD_7787_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7787_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7787_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_7787_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_7787_input.allocateHost();
    tbl_SerializeFromObject_TD_7787_input.loadHost();
    Table tbl_SerializeFromObject_TD_7577_input;
    tbl_SerializeFromObject_TD_7577_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7577_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7577_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7577_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_7577_input.allocateHost();
    tbl_SerializeFromObject_TD_7577_input.loadHost();
    Table tbl_JOIN_INNER_TD_8325_output("tbl_JOIN_INNER_TD_8325_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8325_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8258_output("tbl_JOIN_INNER_TD_8258_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8258_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8738_output("tbl_JOIN_INNER_TD_8738_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8738_output.allocateHost();
    Table tbl_Filter_TD_8821_output("tbl_Filter_TD_8821_output", 6100000, 2, "");
    tbl_Filter_TD_8821_output.allocateHost();
    Table tbl_Filter_TD_8992_output("tbl_Filter_TD_8992_output", 6100000, 3, "");
    tbl_Filter_TD_8992_output.allocateHost();
    Table tbl_Filter_TD_882_output("tbl_Filter_TD_882_output", 6100000, 3, "");
    tbl_Filter_TD_882_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8581_input;
    tbl_SerializeFromObject_TD_8581_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8581_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8581_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8581_input.allocateHost();
    tbl_SerializeFromObject_TD_8581_input.loadHost();
    Table tbl_SerializeFromObject_TD_8427_input;
    tbl_SerializeFromObject_TD_8427_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8427_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8427_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_8427_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8427_input.allocateHost();
    tbl_SerializeFromObject_TD_8427_input.loadHost();
    Table tbl_SerializeFromObject_TD_8533_input;
    tbl_SerializeFromObject_TD_8533_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8533_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8533_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8533_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8533_input.allocateHost();
    tbl_SerializeFromObject_TD_8533_input.loadHost();
    Table tbl_JOIN_INNER_TD_970_output("tbl_JOIN_INNER_TD_970_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_970_output.allocateHost();
    Table tbl_Filter_TD_9534_output("tbl_Filter_TD_9534_output", 6100000, 2, "");
    tbl_Filter_TD_9534_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9356_output("tbl_JOIN_INNER_TD_9356_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_9356_output.allocateHost();
    Table tbl_Filter_TD_997_output("tbl_Filter_TD_997_output", 6100000, 2, "");
    tbl_Filter_TD_997_output.allocateHost();
    Table tbl_Filter_TD_9120_output("tbl_Filter_TD_9120_output", 6100000, 3, "");
    tbl_Filter_TD_9120_output.allocateHost();
    Table tbl_Filter_TD_9117_output("tbl_Filter_TD_9117_output", 6100000, 3, "");
    tbl_Filter_TD_9117_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9177_input;
    tbl_SerializeFromObject_TD_9177_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9177_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9177_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9177_input.allocateHost();
    tbl_SerializeFromObject_TD_9177_input.loadHost();
    Table tbl_SerializeFromObject_TD_9397_input;
    tbl_SerializeFromObject_TD_9397_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9397_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9397_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_9397_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9397_input.allocateHost();
    tbl_SerializeFromObject_TD_9397_input.loadHost();
    Table tbl_SerializeFromObject_TD_9192_input;
    tbl_SerializeFromObject_TD_9192_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9192_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9192_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9192_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_9192_input.allocateHost();
    tbl_SerializeFromObject_TD_9192_input.loadHost();
    Table tbl_Filter_TD_10302_output("tbl_Filter_TD_10302_output", 6100000, 3, "");
    tbl_Filter_TD_10302_output.allocateHost();
    Table tbl_Filter_TD_10709_output("tbl_Filter_TD_10709_output", 6100000, 3, "");
    tbl_Filter_TD_10709_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10779_input;
    tbl_SerializeFromObject_TD_10779_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10779_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10779_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10779_input.allocateHost();
    tbl_SerializeFromObject_TD_10779_input.loadHost();
    Table tbl_Filter_TD_10556_output("tbl_Filter_TD_10556_output", 6100000, 3, "");
    tbl_Filter_TD_10556_output.allocateHost();
    Table tbl_Filter_TD_10650_output("tbl_Filter_TD_10650_output", 6100000, 3, "");
    tbl_Filter_TD_10650_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10923_input;
    tbl_SerializeFromObject_TD_10923_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10923_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10923_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10923_input.allocateHost();
    tbl_SerializeFromObject_TD_10923_input.loadHost();
    Table tbl_SerializeFromObject_TD_10336_input;
    tbl_SerializeFromObject_TD_10336_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10336_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10336_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_10336_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10336_input.allocateHost();
    tbl_SerializeFromObject_TD_10336_input.loadHost();
    Table tbl_SerializeFromObject_TD_10713_input;
    tbl_SerializeFromObject_TD_10713_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10713_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10713_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10713_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_10713_input.allocateHost();
    tbl_SerializeFromObject_TD_10713_input.loadHost();
    Table tbl_SerializeFromObject_TD_1148_input;
    tbl_SerializeFromObject_TD_1148_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1148_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1148_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_1148_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1148_input.allocateHost();
    tbl_SerializeFromObject_TD_1148_input.loadHost();
    Table tbl_SerializeFromObject_TD_11348_input;
    tbl_SerializeFromObject_TD_11348_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11348_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11348_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11348_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_11348_input.allocateHost();
    tbl_SerializeFromObject_TD_11348_input.loadHost();
    Table tbl_SerializeFromObject_TD_11359_input;
    tbl_SerializeFromObject_TD_11359_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11359_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11359_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_11359_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11359_input.allocateHost();
    tbl_SerializeFromObject_TD_11359_input.loadHost();
    Table tbl_SerializeFromObject_TD_11265_input;
    tbl_SerializeFromObject_TD_11265_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11265_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11265_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11265_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_11265_input.allocateHost();
    tbl_SerializeFromObject_TD_11265_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_901346_s, tv_r_Filter_10_901346_e;
    gettimeofday(&tv_r_Filter_10_901346_s, 0);
    SW_Filter_TD_10650(tbl_SerializeFromObject_TD_11265_input, tbl_Filter_TD_10650_output);
    gettimeofday(&tv_r_Filter_10_901346_e, 0);

    struct timeval tv_r_Filter_10_831293_s, tv_r_Filter_10_831293_e;
    gettimeofday(&tv_r_Filter_10_831293_s, 0);
    SW_Filter_TD_10556(tbl_SerializeFromObject_TD_11359_input, tbl_Filter_TD_10556_output);
    gettimeofday(&tv_r_Filter_10_831293_e, 0);

    struct timeval tv_r_Filter_10_254972_s, tv_r_Filter_10_254972_e;
    gettimeofday(&tv_r_Filter_10_254972_s, 0);
    SW_Filter_TD_10709(tbl_SerializeFromObject_TD_11348_input, tbl_Filter_TD_10709_output);
    gettimeofday(&tv_r_Filter_10_254972_e, 0);

    struct timeval tv_r_Filter_10_663741_s, tv_r_Filter_10_663741_e;
    gettimeofday(&tv_r_Filter_10_663741_s, 0);
    SW_Filter_TD_10302(tbl_SerializeFromObject_TD_1148_input, tbl_Filter_TD_10302_output);
    gettimeofday(&tv_r_Filter_10_663741_e, 0);

    struct timeval tv_r_Filter_9_386632_s, tv_r_Filter_9_386632_e;
    gettimeofday(&tv_r_Filter_9_386632_s, 0);
    SW_Filter_TD_9117(tbl_SerializeFromObject_TD_10713_input, tbl_Filter_TD_9117_output);
    gettimeofday(&tv_r_Filter_9_386632_e, 0);

    struct timeval tv_r_Filter_9_262180_s, tv_r_Filter_9_262180_e;
    gettimeofday(&tv_r_Filter_9_262180_s, 0);
    SW_Filter_TD_9120(tbl_SerializeFromObject_TD_10336_input, tbl_Filter_TD_9120_output);
    gettimeofday(&tv_r_Filter_9_262180_e, 0);

    struct timeval tv_r_Filter_9_826713_s, tv_r_Filter_9_826713_e;
    gettimeofday(&tv_r_Filter_9_826713_s, 0);
    SW_Filter_TD_997(tbl_SerializeFromObject_TD_10923_input, tbl_Filter_TD_997_output);
    gettimeofday(&tv_r_Filter_9_826713_e, 0);

    struct timeval tv_r_JOIN_INNER_9_761366_s, tv_r_JOIN_INNER_9_761366_e;
    gettimeofday(&tv_r_JOIN_INNER_9_761366_s, 0);
    SW_JOIN_INNER_TD_9356(tbl_Filter_TD_10556_output, tbl_Filter_TD_10650_output, tbl_JOIN_INNER_TD_9356_output);
    gettimeofday(&tv_r_JOIN_INNER_9_761366_e, 0);

    struct timeval tv_r_Filter_9_336752_s, tv_r_Filter_9_336752_e;
    gettimeofday(&tv_r_Filter_9_336752_s, 0);
    SW_Filter_TD_9534(tbl_SerializeFromObject_TD_10779_input, tbl_Filter_TD_9534_output);
    gettimeofday(&tv_r_Filter_9_336752_e, 0);

    struct timeval tv_r_JOIN_INNER_9_29549_s, tv_r_JOIN_INNER_9_29549_e;
    gettimeofday(&tv_r_JOIN_INNER_9_29549_s, 0);
    SW_JOIN_INNER_TD_970(tbl_Filter_TD_10302_output, tbl_Filter_TD_10709_output, tbl_JOIN_INNER_TD_970_output);
    gettimeofday(&tv_r_JOIN_INNER_9_29549_e, 0);

    struct timeval tv_r_Filter_8_922265_s, tv_r_Filter_8_922265_e;
    gettimeofday(&tv_r_Filter_8_922265_s, 0);
    SW_Filter_TD_882(tbl_SerializeFromObject_TD_9192_input, tbl_Filter_TD_882_output);
    gettimeofday(&tv_r_Filter_8_922265_e, 0);

    struct timeval tv_r_Filter_8_104925_s, tv_r_Filter_8_104925_e;
    gettimeofday(&tv_r_Filter_8_104925_s, 0);
    SW_Filter_TD_8992(tbl_SerializeFromObject_TD_9397_input, tbl_Filter_TD_8992_output);
    gettimeofday(&tv_r_Filter_8_104925_e, 0);

    struct timeval tv_r_Filter_8_111001_s, tv_r_Filter_8_111001_e;
    gettimeofday(&tv_r_Filter_8_111001_s, 0);
    SW_Filter_TD_8821(tbl_SerializeFromObject_TD_9177_input, tbl_Filter_TD_8821_output);
    gettimeofday(&tv_r_Filter_8_111001_e, 0);

    struct timeval tv_r_JOIN_INNER_8_138260_s, tv_r_JOIN_INNER_8_138260_e;
    gettimeofday(&tv_r_JOIN_INNER_8_138260_s, 0);
    SW_JOIN_INNER_TD_8738(tbl_Filter_TD_9120_output, tbl_Filter_TD_9117_output, tbl_JOIN_INNER_TD_8738_output);
    gettimeofday(&tv_r_JOIN_INNER_8_138260_e, 0);

    struct timeval tv_r_JOIN_INNER_8_553803_s, tv_r_JOIN_INNER_8_553803_e;
    gettimeofday(&tv_r_JOIN_INNER_8_553803_s, 0);
    SW_JOIN_INNER_TD_8258(tbl_JOIN_INNER_TD_9356_output, tbl_Filter_TD_997_output, tbl_JOIN_INNER_TD_8258_output);
    gettimeofday(&tv_r_JOIN_INNER_8_553803_e, 0);

    struct timeval tv_r_JOIN_INNER_8_938327_s, tv_r_JOIN_INNER_8_938327_e;
    gettimeofday(&tv_r_JOIN_INNER_8_938327_s, 0);
    SW_JOIN_INNER_TD_8325(tbl_JOIN_INNER_TD_970_output, tbl_Filter_TD_9534_output, tbl_JOIN_INNER_TD_8325_output);
    gettimeofday(&tv_r_JOIN_INNER_8_938327_e, 0);

    struct timeval tv_r_Filter_7_65430_s, tv_r_Filter_7_65430_e;
    gettimeofday(&tv_r_Filter_7_65430_s, 0);
    SW_Filter_TD_7786(tbl_SerializeFromObject_TD_8533_input, tbl_Filter_TD_7786_output);
    gettimeofday(&tv_r_Filter_7_65430_e, 0);

    struct timeval tv_r_Filter_7_532354_s, tv_r_Filter_7_532354_e;
    gettimeofday(&tv_r_Filter_7_532354_s, 0);
    SW_Filter_TD_7547(tbl_SerializeFromObject_TD_8427_input, tbl_Filter_TD_7547_output);
    gettimeofday(&tv_r_Filter_7_532354_e, 0);

    struct timeval tv_r_Filter_7_48273_s, tv_r_Filter_7_48273_e;
    gettimeofday(&tv_r_Filter_7_48273_s, 0);
    SW_Filter_TD_7121(tbl_SerializeFromObject_TD_8581_input, tbl_Filter_TD_7121_output);
    gettimeofday(&tv_r_Filter_7_48273_e, 0);

    struct timeval tv_r_JOIN_INNER_7_170670_s, tv_r_JOIN_INNER_7_170670_e;
    gettimeofday(&tv_r_JOIN_INNER_7_170670_s, 0);
    SW_JOIN_INNER_TD_7281(tbl_Filter_TD_8992_output, tbl_Filter_TD_882_output, tbl_JOIN_INNER_TD_7281_output);
    gettimeofday(&tv_r_JOIN_INNER_7_170670_e, 0);

    struct timeval tv_r_JOIN_INNER_7_480018_s, tv_r_JOIN_INNER_7_480018_e;
    gettimeofday(&tv_r_JOIN_INNER_7_480018_s, 0);
    SW_JOIN_INNER_TD_7640(tbl_JOIN_INNER_TD_8738_output, tbl_Filter_TD_8821_output, tbl_JOIN_INNER_TD_7640_output);
    gettimeofday(&tv_r_JOIN_INNER_7_480018_e, 0);

    struct timeval tv_r_Aggregate_7_616547_s, tv_r_Aggregate_7_616547_e;
    gettimeofday(&tv_r_Aggregate_7_616547_s, 0);
    SW_Aggregate_TD_7187(tbl_JOIN_INNER_TD_8258_output, tbl_Aggregate_TD_7187_output);
    gettimeofday(&tv_r_Aggregate_7_616547_e, 0);

    struct timeval tv_r_Aggregate_7_109104_s, tv_r_Aggregate_7_109104_e;
    gettimeofday(&tv_r_Aggregate_7_109104_s, 0);
    SW_Aggregate_TD_7120(tbl_JOIN_INNER_TD_8325_output, tbl_Aggregate_TD_7120_output);
    gettimeofday(&tv_r_Aggregate_7_109104_e, 0);

    struct timeval tv_r_Filter_6_295385_s, tv_r_Filter_6_295385_e;
    gettimeofday(&tv_r_Filter_6_295385_s, 0);
    SW_Filter_TD_6369(tbl_SerializeFromObject_TD_7577_input, tbl_Filter_TD_6369_output);
    gettimeofday(&tv_r_Filter_6_295385_e, 0);

    struct timeval tv_r_Filter_6_599284_s, tv_r_Filter_6_599284_e;
    gettimeofday(&tv_r_Filter_6_599284_s, 0);
    SW_Filter_TD_6942(tbl_SerializeFromObject_TD_7787_input, tbl_Filter_TD_6942_output);
    gettimeofday(&tv_r_Filter_6_599284_e, 0);

    struct timeval tv_r_Filter_6_882470_s, tv_r_Filter_6_882470_e;
    gettimeofday(&tv_r_Filter_6_882470_s, 0);
    SW_Filter_TD_670(tbl_SerializeFromObject_TD_7296_input, tbl_Filter_TD_670_output);
    gettimeofday(&tv_r_Filter_6_882470_e, 0);

    struct timeval tv_r_JOIN_INNER_6_897991_s, tv_r_JOIN_INNER_6_897991_e;
    gettimeofday(&tv_r_JOIN_INNER_6_897991_s, 0);
    SW_JOIN_INNER_TD_6916(tbl_Filter_TD_7547_output, tbl_Filter_TD_7786_output, tbl_JOIN_INNER_TD_6916_output);
    gettimeofday(&tv_r_JOIN_INNER_6_897991_e, 0);

    struct timeval tv_r_JOIN_INNER_6_637802_s, tv_r_JOIN_INNER_6_637802_e;
    gettimeofday(&tv_r_JOIN_INNER_6_637802_s, 0);
    SW_JOIN_INNER_TD_6820(tbl_JOIN_INNER_TD_7281_output, tbl_Filter_TD_7121_output, tbl_JOIN_INNER_TD_6820_output);
    gettimeofday(&tv_r_JOIN_INNER_6_637802_e, 0);

    struct timeval tv_r_Aggregate_6_881437_s, tv_r_Aggregate_6_881437_e;
    gettimeofday(&tv_r_Aggregate_6_881437_s, 0);
    SW_Aggregate_TD_6469(tbl_JOIN_INNER_TD_7640_output, tbl_Aggregate_TD_6469_output);
    gettimeofday(&tv_r_Aggregate_6_881437_e, 0);

    struct timeval tv_r_JOIN_INNER_6_258385_s, tv_r_JOIN_INNER_6_258385_e;
    gettimeofday(&tv_r_JOIN_INNER_6_258385_s, 0);
    SW_JOIN_INNER_TD_6144(tbl_Aggregate_TD_7120_output, tbl_Aggregate_TD_7187_output, tbl_JOIN_INNER_TD_6144_output);
    gettimeofday(&tv_r_JOIN_INNER_6_258385_e, 0);

    struct timeval tv_r_Filter_5_39581_s, tv_r_Filter_5_39581_e;
    gettimeofday(&tv_r_Filter_5_39581_s, 0);
    SW_Filter_TD_5616(tbl_SerializeFromObject_TD_6730_input, tbl_Filter_TD_5616_output);
    gettimeofday(&tv_r_Filter_5_39581_e, 0);

    struct timeval tv_r_JOIN_INNER_5_286388_s, tv_r_JOIN_INNER_5_286388_e;
    gettimeofday(&tv_r_JOIN_INNER_5_286388_s, 0);
    SW_JOIN_INNER_TD_5899(tbl_Filter_TD_6942_output, tbl_Filter_TD_6369_output, tbl_JOIN_INNER_TD_5899_output);
    gettimeofday(&tv_r_JOIN_INNER_5_286388_e, 0);

    struct timeval tv_r_JOIN_INNER_5_23310_s, tv_r_JOIN_INNER_5_23310_e;
    gettimeofday(&tv_r_JOIN_INNER_5_23310_s, 0);
    SW_JOIN_INNER_TD_5990(tbl_JOIN_INNER_TD_6916_output, tbl_Filter_TD_670_output, tbl_JOIN_INNER_TD_5990_output);
    gettimeofday(&tv_r_JOIN_INNER_5_23310_e, 0);

    struct timeval tv_r_Aggregate_5_469758_s, tv_r_Aggregate_5_469758_e;
    gettimeofday(&tv_r_Aggregate_5_469758_s, 0);
    SW_Aggregate_TD_5223(tbl_JOIN_INNER_TD_6820_output, tbl_Aggregate_TD_5223_output);
    gettimeofday(&tv_r_Aggregate_5_469758_e, 0);

    struct timeval tv_r_JOIN_INNER_5_577299_s, tv_r_JOIN_INNER_5_577299_e;
    gettimeofday(&tv_r_JOIN_INNER_5_577299_s, 0);
    SW_JOIN_INNER_TD_5168(tbl_JOIN_INNER_TD_6144_output, tbl_Aggregate_TD_6469_output, tbl_JOIN_INNER_TD_5168_output);
    gettimeofday(&tv_r_JOIN_INNER_5_577299_e, 0);

    struct timeval tv_r_JOIN_INNER_4_448278_s, tv_r_JOIN_INNER_4_448278_e;
    gettimeofday(&tv_r_JOIN_INNER_4_448278_s, 0);
    SW_JOIN_INNER_TD_4101(tbl_JOIN_INNER_TD_5899_output, tbl_Filter_TD_5616_output, tbl_JOIN_INNER_TD_4101_output);
    gettimeofday(&tv_r_JOIN_INNER_4_448278_e, 0);

    struct timeval tv_r_Aggregate_4_876007_s, tv_r_Aggregate_4_876007_e;
    gettimeofday(&tv_r_Aggregate_4_876007_s, 0);
    SW_Aggregate_TD_4908(tbl_JOIN_INNER_TD_5990_output, tbl_Aggregate_TD_4908_output);
    gettimeofday(&tv_r_Aggregate_4_876007_e, 0);

    struct timeval tv_r_JOIN_INNER_4_876597_s, tv_r_JOIN_INNER_4_876597_e;
    gettimeofday(&tv_r_JOIN_INNER_4_876597_s, 0);
    SW_JOIN_INNER_TD_4331(tbl_JOIN_INNER_TD_5168_output, tbl_Aggregate_TD_5223_output, tbl_JOIN_INNER_TD_4331_output);
    gettimeofday(&tv_r_JOIN_INNER_4_876597_e, 0);

    struct timeval tv_r_Aggregate_3_21880_s, tv_r_Aggregate_3_21880_e;
    gettimeofday(&tv_r_Aggregate_3_21880_s, 0);
    SW_Aggregate_TD_3469(tbl_JOIN_INNER_TD_4101_output, tbl_Aggregate_TD_3469_output);
    gettimeofday(&tv_r_Aggregate_3_21880_e, 0);

    struct timeval tv_r_JOIN_INNER_3_550312_s, tv_r_JOIN_INNER_3_550312_e;
    gettimeofday(&tv_r_JOIN_INNER_3_550312_s, 0);
    SW_JOIN_INNER_TD_3222(tbl_JOIN_INNER_TD_4331_output, tbl_Aggregate_TD_4908_output, tbl_JOIN_INNER_TD_3222_output);
    gettimeofday(&tv_r_JOIN_INNER_3_550312_e, 0);

    struct timeval tv_r_JOIN_INNER_2_397642_s, tv_r_JOIN_INNER_2_397642_e;
    gettimeofday(&tv_r_JOIN_INNER_2_397642_s, 0);
    SW_JOIN_INNER_TD_2198(tbl_JOIN_INNER_TD_3222_output, tbl_Aggregate_TD_3469_output, tbl_JOIN_INNER_TD_2198_output);
    gettimeofday(&tv_r_JOIN_INNER_2_397642_e, 0);

    struct timeval tv_r_Project_1_557543_s, tv_r_Project_1_557543_e;
    gettimeofday(&tv_r_Project_1_557543_s, 0);
    SW_Project_TD_1142(tbl_JOIN_INNER_TD_2198_output, tbl_Project_TD_1142_output);
    gettimeofday(&tv_r_Project_1_557543_e, 0);

    struct timeval tv_r_Sort_0_918459_s, tv_r_Sort_0_918459_e;
    gettimeofday(&tv_r_Sort_0_918459_s, 0);
    SW_Sort_TD_0776(tbl_Project_TD_1142_output, tbl_Sort_TD_0776_output);
    gettimeofday(&tv_r_Sort_0_918459_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_901346_s, &tv_r_Filter_10_901346_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11265_input: " << tbl_SerializeFromObject_TD_11265_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_831293_s, &tv_r_Filter_10_831293_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11359_input: " << tbl_SerializeFromObject_TD_11359_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_254972_s, &tv_r_Filter_10_254972_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11348_input: " << tbl_SerializeFromObject_TD_11348_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_663741_s, &tv_r_Filter_10_663741_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1148_input: " << tbl_SerializeFromObject_TD_1148_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_386632_s, &tv_r_Filter_9_386632_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10713_input: " << tbl_SerializeFromObject_TD_10713_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_262180_s, &tv_r_Filter_9_262180_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10336_input: " << tbl_SerializeFromObject_TD_10336_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_826713_s, &tv_r_Filter_9_826713_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10923_input: " << tbl_SerializeFromObject_TD_10923_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_761366_s, &tv_r_JOIN_INNER_9_761366_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10556_output: " << tbl_Filter_TD_10556_output.getNumRow() << " " << "tbl_Filter_TD_10650_output: " << tbl_Filter_TD_10650_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_336752_s, &tv_r_Filter_9_336752_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10779_input: " << tbl_SerializeFromObject_TD_10779_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_29549_s, &tv_r_JOIN_INNER_9_29549_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10302_output: " << tbl_Filter_TD_10302_output.getNumRow() << " " << "tbl_Filter_TD_10709_output: " << tbl_Filter_TD_10709_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_922265_s, &tv_r_Filter_8_922265_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9192_input: " << tbl_SerializeFromObject_TD_9192_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_104925_s, &tv_r_Filter_8_104925_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9397_input: " << tbl_SerializeFromObject_TD_9397_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_111001_s, &tv_r_Filter_8_111001_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9177_input: " << tbl_SerializeFromObject_TD_9177_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_138260_s, &tv_r_JOIN_INNER_8_138260_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9120_output: " << tbl_Filter_TD_9120_output.getNumRow() << " " << "tbl_Filter_TD_9117_output: " << tbl_Filter_TD_9117_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_553803_s, &tv_r_JOIN_INNER_8_553803_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9356_output: " << tbl_JOIN_INNER_TD_9356_output.getNumRow() << " " << "tbl_Filter_TD_997_output: " << tbl_Filter_TD_997_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_938327_s, &tv_r_JOIN_INNER_8_938327_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_970_output: " << tbl_JOIN_INNER_TD_970_output.getNumRow() << " " << "tbl_Filter_TD_9534_output: " << tbl_Filter_TD_9534_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_65430_s, &tv_r_Filter_7_65430_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8533_input: " << tbl_SerializeFromObject_TD_8533_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_532354_s, &tv_r_Filter_7_532354_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8427_input: " << tbl_SerializeFromObject_TD_8427_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_48273_s, &tv_r_Filter_7_48273_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8581_input: " << tbl_SerializeFromObject_TD_8581_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_170670_s, &tv_r_JOIN_INNER_7_170670_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8992_output: " << tbl_Filter_TD_8992_output.getNumRow() << " " << "tbl_Filter_TD_882_output: " << tbl_Filter_TD_882_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_480018_s, &tv_r_JOIN_INNER_7_480018_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8738_output: " << tbl_JOIN_INNER_TD_8738_output.getNumRow() << " " << "tbl_Filter_TD_8821_output: " << tbl_Filter_TD_8821_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_616547_s, &tv_r_Aggregate_7_616547_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8258_output: " << tbl_JOIN_INNER_TD_8258_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_109104_s, &tv_r_Aggregate_7_109104_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8325_output: " << tbl_JOIN_INNER_TD_8325_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_295385_s, &tv_r_Filter_6_295385_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7577_input: " << tbl_SerializeFromObject_TD_7577_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_599284_s, &tv_r_Filter_6_599284_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7787_input: " << tbl_SerializeFromObject_TD_7787_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_882470_s, &tv_r_Filter_6_882470_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7296_input: " << tbl_SerializeFromObject_TD_7296_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_897991_s, &tv_r_JOIN_INNER_6_897991_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7547_output: " << tbl_Filter_TD_7547_output.getNumRow() << " " << "tbl_Filter_TD_7786_output: " << tbl_Filter_TD_7786_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_637802_s, &tv_r_JOIN_INNER_6_637802_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7281_output: " << tbl_JOIN_INNER_TD_7281_output.getNumRow() << " " << "tbl_Filter_TD_7121_output: " << tbl_Filter_TD_7121_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_881437_s, &tv_r_Aggregate_6_881437_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7640_output: " << tbl_JOIN_INNER_TD_7640_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_258385_s, &tv_r_JOIN_INNER_6_258385_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7120_output: " << tbl_Aggregate_TD_7120_output.getNumRow() << " " << "tbl_Aggregate_TD_7187_output: " << tbl_Aggregate_TD_7187_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_39581_s, &tv_r_Filter_5_39581_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6730_input: " << tbl_SerializeFromObject_TD_6730_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_286388_s, &tv_r_JOIN_INNER_5_286388_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6942_output: " << tbl_Filter_TD_6942_output.getNumRow() << " " << "tbl_Filter_TD_6369_output: " << tbl_Filter_TD_6369_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_23310_s, &tv_r_JOIN_INNER_5_23310_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6916_output: " << tbl_JOIN_INNER_TD_6916_output.getNumRow() << " " << "tbl_Filter_TD_670_output: " << tbl_Filter_TD_670_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_469758_s, &tv_r_Aggregate_5_469758_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6820_output: " << tbl_JOIN_INNER_TD_6820_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_577299_s, &tv_r_JOIN_INNER_5_577299_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6144_output: " << tbl_JOIN_INNER_TD_6144_output.getNumRow() << " " << "tbl_Aggregate_TD_6469_output: " << tbl_Aggregate_TD_6469_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_448278_s, &tv_r_JOIN_INNER_4_448278_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5899_output: " << tbl_JOIN_INNER_TD_5899_output.getNumRow() << " " << "tbl_Filter_TD_5616_output: " << tbl_Filter_TD_5616_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_876007_s, &tv_r_Aggregate_4_876007_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5990_output: " << tbl_JOIN_INNER_TD_5990_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_876597_s, &tv_r_JOIN_INNER_4_876597_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5168_output: " << tbl_JOIN_INNER_TD_5168_output.getNumRow() << " " << "tbl_Aggregate_TD_5223_output: " << tbl_Aggregate_TD_5223_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_21880_s, &tv_r_Aggregate_3_21880_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4101_output: " << tbl_JOIN_INNER_TD_4101_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_550312_s, &tv_r_JOIN_INNER_3_550312_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4331_output: " << tbl_JOIN_INNER_TD_4331_output.getNumRow() << " " << "tbl_Aggregate_TD_4908_output: " << tbl_Aggregate_TD_4908_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_397642_s, &tv_r_JOIN_INNER_2_397642_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3222_output: " << tbl_JOIN_INNER_TD_3222_output.getNumRow() << " " << "tbl_Aggregate_TD_3469_output: " << tbl_Aggregate_TD_3469_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_557543_s, &tv_r_Project_1_557543_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2198_output: " << tbl_JOIN_INNER_TD_2198_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_918459_s, &tv_r_Sort_0_918459_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1142_output: " << tbl_Project_TD_1142_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.4335647 * 1000 << "ms" << std::endl; 
    return 0; 
}
