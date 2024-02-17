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

#include "cfgFunc_q88.hpp" 
#include "q88.hpp" 

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
    std::cout << "NOTE:running query #88\n."; 
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
    Table tbl_JOIN_CROSS_TD_0135_output("tbl_JOIN_CROSS_TD_0135_output", 6100000, 8, "");
    tbl_JOIN_CROSS_TD_0135_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_1195_output("tbl_JOIN_CROSS_TD_1195_output", 6100000, 7, "");
    tbl_JOIN_CROSS_TD_1195_output.allocateHost();
    Table tbl_Aggregate_TD_1346_output("tbl_Aggregate_TD_1346_output", 6100000, 1, "");
    tbl_Aggregate_TD_1346_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_2346_output("tbl_JOIN_CROSS_TD_2346_output", 6100000, 6, "");
    tbl_JOIN_CROSS_TD_2346_output.allocateHost();
    Table tbl_Aggregate_TD_2501_output("tbl_Aggregate_TD_2501_output", 6100000, 1, "");
    tbl_Aggregate_TD_2501_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2578_output("tbl_JOIN_INNER_TD_2578_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_2578_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_3986_output("tbl_JOIN_CROSS_TD_3986_output", 6100000, 5, "");
    tbl_JOIN_CROSS_TD_3986_output.allocateHost();
    Table tbl_Aggregate_TD_3932_output("tbl_Aggregate_TD_3932_output", 6100000, 1, "");
    tbl_Aggregate_TD_3932_output.allocateHost();
    Table tbl_JOIN_INNER_TD_337_output("tbl_JOIN_INNER_TD_337_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_337_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3940_output("tbl_JOIN_INNER_TD_3940_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_3940_output.allocateHost();
    Table tbl_Filter_TD_3311_output("tbl_Filter_TD_3311_output", 6100000, 1, "");
    tbl_Filter_TD_3311_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_4276_output("tbl_JOIN_CROSS_TD_4276_output", 6100000, 4, "");
    tbl_JOIN_CROSS_TD_4276_output.allocateHost();
    Table tbl_Aggregate_TD_4495_output("tbl_Aggregate_TD_4495_output", 6100000, 1, "");
    tbl_Aggregate_TD_4495_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4555_output("tbl_JOIN_INNER_TD_4555_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4555_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4371_output("tbl_JOIN_INNER_TD_4371_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4371_output.allocateHost();
    Table tbl_Filter_TD_4648_output("tbl_Filter_TD_4648_output", 6100000, 1, "");
    tbl_Filter_TD_4648_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4390_output("tbl_JOIN_INNER_TD_4390_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4390_output.allocateHost();
    Table tbl_Filter_TD_4762_output("tbl_Filter_TD_4762_output", 6100000, 1, "");
    tbl_Filter_TD_4762_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4381_input;
    tbl_SerializeFromObject_TD_4381_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4381_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_4381_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4381_input.allocateHost();
    tbl_SerializeFromObject_TD_4381_input.loadHost();
    Table tbl_JOIN_CROSS_TD_5373_output("tbl_JOIN_CROSS_TD_5373_output", 6100000, 3, "");
    tbl_JOIN_CROSS_TD_5373_output.allocateHost();
    Table tbl_Aggregate_TD_5256_output("tbl_Aggregate_TD_5256_output", 6100000, 1, "");
    tbl_Aggregate_TD_5256_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5671_output("tbl_JOIN_INNER_TD_5671_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5671_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5432_output("tbl_JOIN_INNER_TD_5432_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5432_output.allocateHost();
    Table tbl_Filter_TD_5625_output("tbl_Filter_TD_5625_output", 6100000, 1, "");
    tbl_Filter_TD_5625_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5155_output("tbl_JOIN_INNER_TD_5155_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5155_output.allocateHost();
    Table tbl_Filter_TD_5532_output("tbl_Filter_TD_5532_output", 6100000, 1, "");
    tbl_Filter_TD_5532_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5594_input;
    tbl_SerializeFromObject_TD_5594_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5594_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_5594_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5594_input.allocateHost();
    tbl_SerializeFromObject_TD_5594_input.loadHost();
    Table tbl_Filter_TD_5972_output("tbl_Filter_TD_5972_output", 6100000, 3, "");
    tbl_Filter_TD_5972_output.allocateHost();
    Table tbl_Filter_TD_5944_output("tbl_Filter_TD_5944_output", 6100000, 1, "");
    tbl_Filter_TD_5944_output.allocateHost();
    Table tbl_SerializeFromObject_TD_549_input;
    tbl_SerializeFromObject_TD_549_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_549_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_549_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_549_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_549_input.allocateHost();
    tbl_SerializeFromObject_TD_549_input.loadHost();
    Table tbl_JOIN_CROSS_TD_6438_output("tbl_JOIN_CROSS_TD_6438_output", 6100000, 2, "");
    tbl_JOIN_CROSS_TD_6438_output.allocateHost();
    Table tbl_Aggregate_TD_682_output("tbl_Aggregate_TD_682_output", 6100000, 1, "");
    tbl_Aggregate_TD_682_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6456_output("tbl_JOIN_INNER_TD_6456_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6456_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6631_output("tbl_JOIN_INNER_TD_6631_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_6631_output.allocateHost();
    Table tbl_Filter_TD_6997_output("tbl_Filter_TD_6997_output", 6100000, 1, "");
    tbl_Filter_TD_6997_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6456_output("tbl_JOIN_INNER_TD_6456_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6456_output.allocateHost();
    Table tbl_Filter_TD_694_output("tbl_Filter_TD_694_output", 6100000, 1, "");
    tbl_Filter_TD_694_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6142_input;
    tbl_SerializeFromObject_TD_6142_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6142_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_6142_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6142_input.allocateHost();
    tbl_SerializeFromObject_TD_6142_input.loadHost();
    Table tbl_Filter_TD_6101_output("tbl_Filter_TD_6101_output", 6100000, 3, "");
    tbl_Filter_TD_6101_output.allocateHost();
    Table tbl_Filter_TD_6153_output("tbl_Filter_TD_6153_output", 6100000, 1, "");
    tbl_Filter_TD_6153_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6106_input;
    tbl_SerializeFromObject_TD_6106_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6106_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_6106_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_6106_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_6106_input.allocateHost();
    tbl_SerializeFromObject_TD_6106_input.loadHost();
    Table tbl_SerializeFromObject_TD_6392_input;
    tbl_SerializeFromObject_TD_6392_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6392_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_6392_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_6392_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_6392_input.allocateHost();
    tbl_SerializeFromObject_TD_6392_input.loadHost();
    Table tbl_SerializeFromObject_TD_6946_input;
    tbl_SerializeFromObject_TD_6946_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6946_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_6946_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_6946_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_6946_input.allocateHost();
    tbl_SerializeFromObject_TD_6946_input.loadHost();
    Table tbl_Aggregate_TD_7877_output("tbl_Aggregate_TD_7877_output", 6100000, 1, "");
    tbl_Aggregate_TD_7877_output.allocateHost();
    Table tbl_Aggregate_TD_752_output("tbl_Aggregate_TD_752_output", 6100000, 1, "");
    tbl_Aggregate_TD_752_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7438_output("tbl_JOIN_INNER_TD_7438_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7438_output.allocateHost();
    Table tbl_JOIN_INNER_TD_72_output("tbl_JOIN_INNER_TD_72_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_72_output.allocateHost();
    Table tbl_Filter_TD_785_output("tbl_Filter_TD_785_output", 6100000, 1, "");
    tbl_Filter_TD_785_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7939_output("tbl_JOIN_INNER_TD_7939_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7939_output.allocateHost();
    Table tbl_Filter_TD_7978_output("tbl_Filter_TD_7978_output", 6100000, 1, "");
    tbl_Filter_TD_7978_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7723_input;
    tbl_SerializeFromObject_TD_7723_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7723_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7723_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7723_input.allocateHost();
    tbl_SerializeFromObject_TD_7723_input.loadHost();
    Table tbl_Filter_TD_7820_output("tbl_Filter_TD_7820_output", 6100000, 3, "");
    tbl_Filter_TD_7820_output.allocateHost();
    Table tbl_Filter_TD_7808_output("tbl_Filter_TD_7808_output", 6100000, 1, "");
    tbl_Filter_TD_7808_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7448_input;
    tbl_SerializeFromObject_TD_7448_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7448_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_7448_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_7448_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_7448_input.allocateHost();
    tbl_SerializeFromObject_TD_7448_input.loadHost();
    Table tbl_SerializeFromObject_TD_779_input;
    tbl_SerializeFromObject_TD_779_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_779_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_779_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_779_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_779_input.allocateHost();
    tbl_SerializeFromObject_TD_779_input.loadHost();
    Table tbl_SerializeFromObject_TD_7299_input;
    tbl_SerializeFromObject_TD_7299_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7299_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_7299_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_7299_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_7299_input.allocateHost();
    tbl_SerializeFromObject_TD_7299_input.loadHost();
    Table tbl_JOIN_INNER_TD_8594_output("tbl_JOIN_INNER_TD_8594_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_8594_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8441_output("tbl_JOIN_INNER_TD_8441_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_8441_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8191_output("tbl_JOIN_INNER_TD_8191_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_8191_output.allocateHost();
    Table tbl_Filter_TD_8329_output("tbl_Filter_TD_8329_output", 6100000, 1, "");
    tbl_Filter_TD_8329_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8791_output("tbl_JOIN_INNER_TD_8791_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_8791_output.allocateHost();
    Table tbl_Filter_TD_8388_output("tbl_Filter_TD_8388_output", 6100000, 1, "");
    tbl_Filter_TD_8388_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8759_input;
    tbl_SerializeFromObject_TD_8759_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8759_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8759_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8759_input.allocateHost();
    tbl_SerializeFromObject_TD_8759_input.loadHost();
    Table tbl_Filter_TD_8847_output("tbl_Filter_TD_8847_output", 6100000, 3, "");
    tbl_Filter_TD_8847_output.allocateHost();
    Table tbl_Filter_TD_8517_output("tbl_Filter_TD_8517_output", 6100000, 1, "");
    tbl_Filter_TD_8517_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8965_input;
    tbl_SerializeFromObject_TD_8965_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8965_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_8965_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_8965_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_8965_input.allocateHost();
    tbl_SerializeFromObject_TD_8965_input.loadHost();
    Table tbl_SerializeFromObject_TD_8116_input;
    tbl_SerializeFromObject_TD_8116_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8116_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_8116_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_8116_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8116_input.allocateHost();
    tbl_SerializeFromObject_TD_8116_input.loadHost();
    Table tbl_SerializeFromObject_TD_8886_input;
    tbl_SerializeFromObject_TD_8886_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8886_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_8886_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_8886_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_8886_input.allocateHost();
    tbl_SerializeFromObject_TD_8886_input.loadHost();
    Table tbl_JOIN_INNER_TD_9419_output("tbl_JOIN_INNER_TD_9419_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9419_output.allocateHost();
    Table tbl_Filter_TD_9172_output("tbl_Filter_TD_9172_output", 6100000, 1, "");
    tbl_Filter_TD_9172_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9835_output("tbl_JOIN_INNER_TD_9835_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9835_output.allocateHost();
    Table tbl_Filter_TD_9672_output("tbl_Filter_TD_9672_output", 6100000, 1, "");
    tbl_Filter_TD_9672_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9808_output("tbl_JOIN_INNER_TD_9808_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_9808_output.allocateHost();
    Table tbl_Filter_TD_9706_output("tbl_Filter_TD_9706_output", 6100000, 1, "");
    tbl_Filter_TD_9706_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9840_input;
    tbl_SerializeFromObject_TD_9840_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9840_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9840_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9840_input.allocateHost();
    tbl_SerializeFromObject_TD_9840_input.loadHost();
    Table tbl_Filter_TD_9365_output("tbl_Filter_TD_9365_output", 6100000, 3, "");
    tbl_Filter_TD_9365_output.allocateHost();
    Table tbl_Filter_TD_9968_output("tbl_Filter_TD_9968_output", 6100000, 1, "");
    tbl_Filter_TD_9968_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9365_input;
    tbl_SerializeFromObject_TD_9365_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9365_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_9365_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_9365_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_9365_input.allocateHost();
    tbl_SerializeFromObject_TD_9365_input.loadHost();
    Table tbl_SerializeFromObject_TD_9986_input;
    tbl_SerializeFromObject_TD_9986_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9986_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_9986_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_9986_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9986_input.allocateHost();
    tbl_SerializeFromObject_TD_9986_input.loadHost();
    Table tbl_SerializeFromObject_TD_9867_input;
    tbl_SerializeFromObject_TD_9867_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9867_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9867_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_9867_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_9867_input.allocateHost();
    tbl_SerializeFromObject_TD_9867_input.loadHost();
    Table tbl_JOIN_INNER_TD_10886_output("tbl_JOIN_INNER_TD_10886_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_10886_output.allocateHost();
    Table tbl_Filter_TD_10223_output("tbl_Filter_TD_10223_output", 6100000, 1, "");
    tbl_Filter_TD_10223_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10350_input;
    tbl_SerializeFromObject_TD_10350_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10350_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10350_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10350_input.allocateHost();
    tbl_SerializeFromObject_TD_10350_input.loadHost();
    Table tbl_JOIN_INNER_TD_10510_output("tbl_JOIN_INNER_TD_10510_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_10510_output.allocateHost();
    Table tbl_Filter_TD_10399_output("tbl_Filter_TD_10399_output", 6100000, 1, "");
    tbl_Filter_TD_10399_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10375_input;
    tbl_SerializeFromObject_TD_10375_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10375_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10375_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10375_input.allocateHost();
    tbl_SerializeFromObject_TD_10375_input.loadHost();
    Table tbl_Filter_TD_10999_output("tbl_Filter_TD_10999_output", 6100000, 3, "");
    tbl_Filter_TD_10999_output.allocateHost();
    Table tbl_Filter_TD_10357_output("tbl_Filter_TD_10357_output", 6100000, 1, "");
    tbl_Filter_TD_10357_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10865_input;
    tbl_SerializeFromObject_TD_10865_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10865_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_10865_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_10865_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_10865_input.allocateHost();
    tbl_SerializeFromObject_TD_10865_input.loadHost();
    Table tbl_SerializeFromObject_TD_10855_input;
    tbl_SerializeFromObject_TD_10855_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10855_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_10855_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_10855_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10855_input.allocateHost();
    tbl_SerializeFromObject_TD_10855_input.loadHost();
    Table tbl_SerializeFromObject_TD_10427_input;
    tbl_SerializeFromObject_TD_10427_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10427_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_10427_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_10427_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_10427_input.allocateHost();
    tbl_SerializeFromObject_TD_10427_input.loadHost();
    Table tbl_Filter_TD_11342_output("tbl_Filter_TD_11342_output", 6100000, 3, "");
    tbl_Filter_TD_11342_output.allocateHost();
    Table tbl_Filter_TD_11894_output("tbl_Filter_TD_11894_output", 6100000, 1, "");
    tbl_Filter_TD_11894_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11830_input;
    tbl_SerializeFromObject_TD_11830_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11830_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_11830_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_11830_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_11830_input.allocateHost();
    tbl_SerializeFromObject_TD_11830_input.loadHost();
    Table tbl_Filter_TD_1145_output("tbl_Filter_TD_1145_output", 6100000, 3, "");
    tbl_Filter_TD_1145_output.allocateHost();
    Table tbl_Filter_TD_11389_output("tbl_Filter_TD_11389_output", 6100000, 1, "");
    tbl_Filter_TD_11389_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11808_input;
    tbl_SerializeFromObject_TD_11808_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11808_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_11808_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_11808_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_11808_input.allocateHost();
    tbl_SerializeFromObject_TD_11808_input.loadHost();
    Table tbl_SerializeFromObject_TD_11754_input;
    tbl_SerializeFromObject_TD_11754_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11754_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_11754_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_11754_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11754_input.allocateHost();
    tbl_SerializeFromObject_TD_11754_input.loadHost();
    Table tbl_SerializeFromObject_TD_11169_input;
    tbl_SerializeFromObject_TD_11169_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11169_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_11169_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_11169_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_11169_input.allocateHost();
    tbl_SerializeFromObject_TD_11169_input.loadHost();
    Table tbl_SerializeFromObject_TD_12774_input;
    tbl_SerializeFromObject_TD_12774_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12774_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_12774_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_12774_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12774_input.allocateHost();
    tbl_SerializeFromObject_TD_12774_input.loadHost();
    Table tbl_SerializeFromObject_TD_12786_input;
    tbl_SerializeFromObject_TD_12786_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12786_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12786_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_12786_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_12786_input.allocateHost();
    tbl_SerializeFromObject_TD_12786_input.loadHost();
    Table tbl_SerializeFromObject_TD_12152_input;
    tbl_SerializeFromObject_TD_12152_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12152_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_12152_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_12152_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12152_input.allocateHost();
    tbl_SerializeFromObject_TD_12152_input.loadHost();
    Table tbl_SerializeFromObject_TD_12904_input;
    tbl_SerializeFromObject_TD_12904_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12904_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12904_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_12904_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_12904_input.allocateHost();
    tbl_SerializeFromObject_TD_12904_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_63182_s, tv_r_Filter_11_63182_e;
    gettimeofday(&tv_r_Filter_11_63182_s, 0);
    SW_Filter_TD_11389(tbl_SerializeFromObject_TD_12904_input, tbl_Filter_TD_11389_output);
    gettimeofday(&tv_r_Filter_11_63182_e, 0);

    struct timeval tv_r_Filter_11_54067_s, tv_r_Filter_11_54067_e;
    gettimeofday(&tv_r_Filter_11_54067_s, 0);
    SW_Filter_TD_1145(tbl_SerializeFromObject_TD_12152_input, tbl_Filter_TD_1145_output);
    gettimeofday(&tv_r_Filter_11_54067_e, 0);

    struct timeval tv_r_Filter_11_251917_s, tv_r_Filter_11_251917_e;
    gettimeofday(&tv_r_Filter_11_251917_s, 0);
    SW_Filter_TD_11894(tbl_SerializeFromObject_TD_12786_input, tbl_Filter_TD_11894_output);
    gettimeofday(&tv_r_Filter_11_251917_e, 0);

    struct timeval tv_r_Filter_11_688386_s, tv_r_Filter_11_688386_e;
    gettimeofday(&tv_r_Filter_11_688386_s, 0);
    SW_Filter_TD_11342(tbl_SerializeFromObject_TD_12774_input, tbl_Filter_TD_11342_output);
    gettimeofday(&tv_r_Filter_11_688386_e, 0);

    struct timeval tv_r_Filter_10_904478_s, tv_r_Filter_10_904478_e;
    gettimeofday(&tv_r_Filter_10_904478_s, 0);
    SW_Filter_TD_10357(tbl_SerializeFromObject_TD_11169_input, tbl_Filter_TD_10357_output);
    gettimeofday(&tv_r_Filter_10_904478_e, 0);

    struct timeval tv_r_Filter_10_340399_s, tv_r_Filter_10_340399_e;
    gettimeofday(&tv_r_Filter_10_340399_s, 0);
    SW_Filter_TD_10999(tbl_SerializeFromObject_TD_11754_input, tbl_Filter_TD_10999_output);
    gettimeofday(&tv_r_Filter_10_340399_e, 0);

    struct timeval tv_r_Filter_10_526521_s, tv_r_Filter_10_526521_e;
    gettimeofday(&tv_r_Filter_10_526521_s, 0);
    SW_Filter_TD_10399(tbl_SerializeFromObject_TD_11808_input, tbl_Filter_TD_10399_output);
    gettimeofday(&tv_r_Filter_10_526521_e, 0);

    struct timeval tv_r_JOIN_INNER_10_552559_s, tv_r_JOIN_INNER_10_552559_e;
    gettimeofday(&tv_r_JOIN_INNER_10_552559_s, 0);
    SW_JOIN_INNER_TD_10510(tbl_Filter_TD_1145_output, tbl_Filter_TD_11389_output, tbl_JOIN_INNER_TD_10510_output);
    gettimeofday(&tv_r_JOIN_INNER_10_552559_e, 0);

    struct timeval tv_r_Filter_10_779817_s, tv_r_Filter_10_779817_e;
    gettimeofday(&tv_r_Filter_10_779817_s, 0);
    SW_Filter_TD_10223(tbl_SerializeFromObject_TD_11830_input, tbl_Filter_TD_10223_output);
    gettimeofday(&tv_r_Filter_10_779817_e, 0);

    struct timeval tv_r_JOIN_INNER_10_314549_s, tv_r_JOIN_INNER_10_314549_e;
    gettimeofday(&tv_r_JOIN_INNER_10_314549_s, 0);
    SW_JOIN_INNER_TD_10886(tbl_Filter_TD_11342_output, tbl_Filter_TD_11894_output, tbl_JOIN_INNER_TD_10886_output);
    gettimeofday(&tv_r_JOIN_INNER_10_314549_e, 0);

    struct timeval tv_r_Filter_9_228189_s, tv_r_Filter_9_228189_e;
    gettimeofday(&tv_r_Filter_9_228189_s, 0);
    SW_Filter_TD_9968(tbl_SerializeFromObject_TD_10427_input, tbl_Filter_TD_9968_output);
    gettimeofday(&tv_r_Filter_9_228189_e, 0);

    struct timeval tv_r_Filter_9_245044_s, tv_r_Filter_9_245044_e;
    gettimeofday(&tv_r_Filter_9_245044_s, 0);
    SW_Filter_TD_9365(tbl_SerializeFromObject_TD_10855_input, tbl_Filter_TD_9365_output);
    gettimeofday(&tv_r_Filter_9_245044_e, 0);

    struct timeval tv_r_Filter_9_704013_s, tv_r_Filter_9_704013_e;
    gettimeofday(&tv_r_Filter_9_704013_s, 0);
    SW_Filter_TD_9706(tbl_SerializeFromObject_TD_10865_input, tbl_Filter_TD_9706_output);
    gettimeofday(&tv_r_Filter_9_704013_e, 0);

    struct timeval tv_r_JOIN_INNER_9_330286_s, tv_r_JOIN_INNER_9_330286_e;
    gettimeofday(&tv_r_JOIN_INNER_9_330286_s, 0);
    SW_JOIN_INNER_TD_9808(tbl_Filter_TD_10999_output, tbl_Filter_TD_10357_output, tbl_JOIN_INNER_TD_9808_output);
    gettimeofday(&tv_r_JOIN_INNER_9_330286_e, 0);

    struct timeval tv_r_Filter_9_376276_s, tv_r_Filter_9_376276_e;
    gettimeofday(&tv_r_Filter_9_376276_s, 0);
    SW_Filter_TD_9672(tbl_SerializeFromObject_TD_10375_input, tbl_Filter_TD_9672_output);
    gettimeofday(&tv_r_Filter_9_376276_e, 0);

    struct timeval tv_r_JOIN_INNER_9_540048_s, tv_r_JOIN_INNER_9_540048_e;
    gettimeofday(&tv_r_JOIN_INNER_9_540048_s, 0);
    SW_JOIN_INNER_TD_9835(tbl_JOIN_INNER_TD_10510_output, tbl_Filter_TD_10399_output, tbl_JOIN_INNER_TD_9835_output);
    gettimeofday(&tv_r_JOIN_INNER_9_540048_e, 0);

    struct timeval tv_r_Filter_9_167684_s, tv_r_Filter_9_167684_e;
    gettimeofday(&tv_r_Filter_9_167684_s, 0);
    SW_Filter_TD_9172(tbl_SerializeFromObject_TD_10350_input, tbl_Filter_TD_9172_output);
    gettimeofday(&tv_r_Filter_9_167684_e, 0);

    struct timeval tv_r_JOIN_INNER_9_423456_s, tv_r_JOIN_INNER_9_423456_e;
    gettimeofday(&tv_r_JOIN_INNER_9_423456_s, 0);
    SW_JOIN_INNER_TD_9419(tbl_JOIN_INNER_TD_10886_output, tbl_Filter_TD_10223_output, tbl_JOIN_INNER_TD_9419_output);
    gettimeofday(&tv_r_JOIN_INNER_9_423456_e, 0);

    struct timeval tv_r_Filter_8_566303_s, tv_r_Filter_8_566303_e;
    gettimeofday(&tv_r_Filter_8_566303_s, 0);
    SW_Filter_TD_8517(tbl_SerializeFromObject_TD_9867_input, tbl_Filter_TD_8517_output);
    gettimeofday(&tv_r_Filter_8_566303_e, 0);

    struct timeval tv_r_Filter_8_827190_s, tv_r_Filter_8_827190_e;
    gettimeofday(&tv_r_Filter_8_827190_s, 0);
    SW_Filter_TD_8847(tbl_SerializeFromObject_TD_9986_input, tbl_Filter_TD_8847_output);
    gettimeofday(&tv_r_Filter_8_827190_e, 0);

    struct timeval tv_r_Filter_8_29538_s, tv_r_Filter_8_29538_e;
    gettimeofday(&tv_r_Filter_8_29538_s, 0);
    SW_Filter_TD_8388(tbl_SerializeFromObject_TD_9365_input, tbl_Filter_TD_8388_output);
    gettimeofday(&tv_r_Filter_8_29538_e, 0);

    struct timeval tv_r_JOIN_INNER_8_610208_s, tv_r_JOIN_INNER_8_610208_e;
    gettimeofday(&tv_r_JOIN_INNER_8_610208_s, 0);
    SW_JOIN_INNER_TD_8791(tbl_Filter_TD_9365_output, tbl_Filter_TD_9968_output, tbl_JOIN_INNER_TD_8791_output);
    gettimeofday(&tv_r_JOIN_INNER_8_610208_e, 0);

    struct timeval tv_r_Filter_8_268400_s, tv_r_Filter_8_268400_e;
    gettimeofday(&tv_r_Filter_8_268400_s, 0);
    SW_Filter_TD_8329(tbl_SerializeFromObject_TD_9840_input, tbl_Filter_TD_8329_output);
    gettimeofday(&tv_r_Filter_8_268400_e, 0);

    struct timeval tv_r_JOIN_INNER_8_246347_s, tv_r_JOIN_INNER_8_246347_e;
    gettimeofday(&tv_r_JOIN_INNER_8_246347_s, 0);
    SW_JOIN_INNER_TD_8191(tbl_JOIN_INNER_TD_9808_output, tbl_Filter_TD_9706_output, tbl_JOIN_INNER_TD_8191_output);
    gettimeofday(&tv_r_JOIN_INNER_8_246347_e, 0);

    struct timeval tv_r_JOIN_INNER_8_226731_s, tv_r_JOIN_INNER_8_226731_e;
    gettimeofday(&tv_r_JOIN_INNER_8_226731_s, 0);
    SW_JOIN_INNER_TD_8441(tbl_JOIN_INNER_TD_9835_output, tbl_Filter_TD_9672_output, tbl_JOIN_INNER_TD_8441_output);
    gettimeofday(&tv_r_JOIN_INNER_8_226731_e, 0);

    struct timeval tv_r_JOIN_INNER_8_804964_s, tv_r_JOIN_INNER_8_804964_e;
    gettimeofday(&tv_r_JOIN_INNER_8_804964_s, 0);
    SW_JOIN_INNER_TD_8594(tbl_JOIN_INNER_TD_9419_output, tbl_Filter_TD_9172_output, tbl_JOIN_INNER_TD_8594_output);
    gettimeofday(&tv_r_JOIN_INNER_8_804964_e, 0);

    struct timeval tv_r_Filter_7_926869_s, tv_r_Filter_7_926869_e;
    gettimeofday(&tv_r_Filter_7_926869_s, 0);
    SW_Filter_TD_7808(tbl_SerializeFromObject_TD_8886_input, tbl_Filter_TD_7808_output);
    gettimeofday(&tv_r_Filter_7_926869_e, 0);

    struct timeval tv_r_Filter_7_682250_s, tv_r_Filter_7_682250_e;
    gettimeofday(&tv_r_Filter_7_682250_s, 0);
    SW_Filter_TD_7820(tbl_SerializeFromObject_TD_8116_input, tbl_Filter_TD_7820_output);
    gettimeofday(&tv_r_Filter_7_682250_e, 0);

    struct timeval tv_r_Filter_7_568271_s, tv_r_Filter_7_568271_e;
    gettimeofday(&tv_r_Filter_7_568271_s, 0);
    SW_Filter_TD_7978(tbl_SerializeFromObject_TD_8965_input, tbl_Filter_TD_7978_output);
    gettimeofday(&tv_r_Filter_7_568271_e, 0);

    struct timeval tv_r_JOIN_INNER_7_987254_s, tv_r_JOIN_INNER_7_987254_e;
    gettimeofday(&tv_r_JOIN_INNER_7_987254_s, 0);
    SW_JOIN_INNER_TD_7939(tbl_Filter_TD_8847_output, tbl_Filter_TD_8517_output, tbl_JOIN_INNER_TD_7939_output);
    gettimeofday(&tv_r_JOIN_INNER_7_987254_e, 0);

    struct timeval tv_r_Filter_7_994880_s, tv_r_Filter_7_994880_e;
    gettimeofday(&tv_r_Filter_7_994880_s, 0);
    SW_Filter_TD_785(tbl_SerializeFromObject_TD_8759_input, tbl_Filter_TD_785_output);
    gettimeofday(&tv_r_Filter_7_994880_e, 0);

    struct timeval tv_r_JOIN_INNER_7_898951_s, tv_r_JOIN_INNER_7_898951_e;
    gettimeofday(&tv_r_JOIN_INNER_7_898951_s, 0);
    SW_JOIN_INNER_TD_72(tbl_JOIN_INNER_TD_8791_output, tbl_Filter_TD_8388_output, tbl_JOIN_INNER_TD_72_output);
    gettimeofday(&tv_r_JOIN_INNER_7_898951_e, 0);

    struct timeval tv_r_JOIN_INNER_7_526916_s, tv_r_JOIN_INNER_7_526916_e;
    gettimeofday(&tv_r_JOIN_INNER_7_526916_s, 0);
    SW_JOIN_INNER_TD_7438(tbl_JOIN_INNER_TD_8191_output, tbl_Filter_TD_8329_output, tbl_JOIN_INNER_TD_7438_output);
    gettimeofday(&tv_r_JOIN_INNER_7_526916_e, 0);

    struct timeval tv_r_Aggregate_7_676677_s, tv_r_Aggregate_7_676677_e;
    gettimeofday(&tv_r_Aggregate_7_676677_s, 0);
    SW_Aggregate_TD_752(tbl_JOIN_INNER_TD_8441_output, tbl_Aggregate_TD_752_output);
    gettimeofday(&tv_r_Aggregate_7_676677_e, 0);

    struct timeval tv_r_Aggregate_7_65135_s, tv_r_Aggregate_7_65135_e;
    gettimeofday(&tv_r_Aggregate_7_65135_s, 0);
    SW_Aggregate_TD_7877(tbl_JOIN_INNER_TD_8594_output, tbl_Aggregate_TD_7877_output);
    gettimeofday(&tv_r_Aggregate_7_65135_e, 0);

    struct timeval tv_r_Filter_6_681617_s, tv_r_Filter_6_681617_e;
    gettimeofday(&tv_r_Filter_6_681617_s, 0);
    SW_Filter_TD_6153(tbl_SerializeFromObject_TD_7299_input, tbl_Filter_TD_6153_output);
    gettimeofday(&tv_r_Filter_6_681617_e, 0);

    struct timeval tv_r_Filter_6_346813_s, tv_r_Filter_6_346813_e;
    gettimeofday(&tv_r_Filter_6_346813_s, 0);
    SW_Filter_TD_6101(tbl_SerializeFromObject_TD_779_input, tbl_Filter_TD_6101_output);
    gettimeofday(&tv_r_Filter_6_346813_e, 0);

    struct timeval tv_r_Filter_6_329430_s, tv_r_Filter_6_329430_e;
    gettimeofday(&tv_r_Filter_6_329430_s, 0);
    SW_Filter_TD_694(tbl_SerializeFromObject_TD_7448_input, tbl_Filter_TD_694_output);
    gettimeofday(&tv_r_Filter_6_329430_e, 0);

    struct timeval tv_r_JOIN_INNER_6_935676_s, tv_r_JOIN_INNER_6_935676_e;
    gettimeofday(&tv_r_JOIN_INNER_6_935676_s, 0);
    SW_JOIN_INNER_TD_6456(tbl_Filter_TD_7820_output, tbl_Filter_TD_7808_output, tbl_JOIN_INNER_TD_6456_output);
    gettimeofday(&tv_r_JOIN_INNER_6_935676_e, 0);

    struct timeval tv_r_Filter_6_269552_s, tv_r_Filter_6_269552_e;
    gettimeofday(&tv_r_Filter_6_269552_s, 0);
    SW_Filter_TD_6997(tbl_SerializeFromObject_TD_7723_input, tbl_Filter_TD_6997_output);
    gettimeofday(&tv_r_Filter_6_269552_e, 0);

    struct timeval tv_r_JOIN_INNER_6_735564_s, tv_r_JOIN_INNER_6_735564_e;
    gettimeofday(&tv_r_JOIN_INNER_6_735564_s, 0);
    SW_JOIN_INNER_TD_6631(tbl_JOIN_INNER_TD_7939_output, tbl_Filter_TD_7978_output, tbl_JOIN_INNER_TD_6631_output);
    gettimeofday(&tv_r_JOIN_INNER_6_735564_e, 0);

    struct timeval tv_r_JOIN_INNER_6_850008_s, tv_r_JOIN_INNER_6_850008_e;
    gettimeofday(&tv_r_JOIN_INNER_6_850008_s, 0);
    SW_JOIN_INNER_TD_6456(tbl_JOIN_INNER_TD_72_output, tbl_Filter_TD_785_output, tbl_JOIN_INNER_TD_6456_output);
    gettimeofday(&tv_r_JOIN_INNER_6_850008_e, 0);

    struct timeval tv_r_Aggregate_6_822403_s, tv_r_Aggregate_6_822403_e;
    gettimeofday(&tv_r_Aggregate_6_822403_s, 0);
    SW_Aggregate_TD_682(tbl_JOIN_INNER_TD_7438_output, tbl_Aggregate_TD_682_output);
    gettimeofday(&tv_r_Aggregate_6_822403_e, 0);

    struct timeval tv_r_JOIN_CROSS_6_917581_s, tv_r_JOIN_CROSS_6_917581_e;
    gettimeofday(&tv_r_JOIN_CROSS_6_917581_s, 0);
    SW_JOIN_CROSS_TD_6438(tbl_Aggregate_TD_7877_output, tbl_Aggregate_TD_752_output, tbl_JOIN_CROSS_TD_6438_output);
    gettimeofday(&tv_r_JOIN_CROSS_6_917581_e, 0);

    struct timeval tv_r_Filter_5_749265_s, tv_r_Filter_5_749265_e;
    gettimeofday(&tv_r_Filter_5_749265_s, 0);
    SW_Filter_TD_5944(tbl_SerializeFromObject_TD_6946_input, tbl_Filter_TD_5944_output);
    gettimeofday(&tv_r_Filter_5_749265_e, 0);

    struct timeval tv_r_Filter_5_298516_s, tv_r_Filter_5_298516_e;
    gettimeofday(&tv_r_Filter_5_298516_s, 0);
    SW_Filter_TD_5972(tbl_SerializeFromObject_TD_6392_input, tbl_Filter_TD_5972_output);
    gettimeofday(&tv_r_Filter_5_298516_e, 0);

    struct timeval tv_r_Filter_5_973291_s, tv_r_Filter_5_973291_e;
    gettimeofday(&tv_r_Filter_5_973291_s, 0);
    SW_Filter_TD_5532(tbl_SerializeFromObject_TD_6106_input, tbl_Filter_TD_5532_output);
    gettimeofday(&tv_r_Filter_5_973291_e, 0);

    struct timeval tv_r_JOIN_INNER_5_106033_s, tv_r_JOIN_INNER_5_106033_e;
    gettimeofday(&tv_r_JOIN_INNER_5_106033_s, 0);
    SW_JOIN_INNER_TD_5155(tbl_Filter_TD_6101_output, tbl_Filter_TD_6153_output, tbl_JOIN_INNER_TD_5155_output);
    gettimeofday(&tv_r_JOIN_INNER_5_106033_e, 0);

    struct timeval tv_r_Filter_5_517470_s, tv_r_Filter_5_517470_e;
    gettimeofday(&tv_r_Filter_5_517470_s, 0);
    SW_Filter_TD_5625(tbl_SerializeFromObject_TD_6142_input, tbl_Filter_TD_5625_output);
    gettimeofday(&tv_r_Filter_5_517470_e, 0);

    struct timeval tv_r_JOIN_INNER_5_732483_s, tv_r_JOIN_INNER_5_732483_e;
    gettimeofday(&tv_r_JOIN_INNER_5_732483_s, 0);
    SW_JOIN_INNER_TD_5432(tbl_JOIN_INNER_TD_6456_output, tbl_Filter_TD_694_output, tbl_JOIN_INNER_TD_5432_output);
    gettimeofday(&tv_r_JOIN_INNER_5_732483_e, 0);

    struct timeval tv_r_JOIN_INNER_5_204499_s, tv_r_JOIN_INNER_5_204499_e;
    gettimeofday(&tv_r_JOIN_INNER_5_204499_s, 0);
    SW_JOIN_INNER_TD_5671(tbl_JOIN_INNER_TD_6631_output, tbl_Filter_TD_6997_output, tbl_JOIN_INNER_TD_5671_output);
    gettimeofday(&tv_r_JOIN_INNER_5_204499_e, 0);

    struct timeval tv_r_Aggregate_5_706854_s, tv_r_Aggregate_5_706854_e;
    gettimeofday(&tv_r_Aggregate_5_706854_s, 0);
    SW_Aggregate_TD_5256(tbl_JOIN_INNER_TD_6456_output, tbl_Aggregate_TD_5256_output);
    gettimeofday(&tv_r_Aggregate_5_706854_e, 0);

    struct timeval tv_r_JOIN_CROSS_5_996585_s, tv_r_JOIN_CROSS_5_996585_e;
    gettimeofday(&tv_r_JOIN_CROSS_5_996585_s, 0);
    SW_JOIN_CROSS_TD_5373(tbl_JOIN_CROSS_TD_6438_output, tbl_Aggregate_TD_682_output, tbl_JOIN_CROSS_TD_5373_output);
    gettimeofday(&tv_r_JOIN_CROSS_5_996585_e, 0);

    struct timeval tv_r_Filter_4_541305_s, tv_r_Filter_4_541305_e;
    gettimeofday(&tv_r_Filter_4_541305_s, 0);
    SW_Filter_TD_4762(tbl_SerializeFromObject_TD_549_input, tbl_Filter_TD_4762_output);
    gettimeofday(&tv_r_Filter_4_541305_e, 0);

    struct timeval tv_r_JOIN_INNER_4_654299_s, tv_r_JOIN_INNER_4_654299_e;
    gettimeofday(&tv_r_JOIN_INNER_4_654299_s, 0);
    SW_JOIN_INNER_TD_4390(tbl_Filter_TD_5972_output, tbl_Filter_TD_5944_output, tbl_JOIN_INNER_TD_4390_output);
    gettimeofday(&tv_r_JOIN_INNER_4_654299_e, 0);

    struct timeval tv_r_Filter_4_645946_s, tv_r_Filter_4_645946_e;
    gettimeofday(&tv_r_Filter_4_645946_s, 0);
    SW_Filter_TD_4648(tbl_SerializeFromObject_TD_5594_input, tbl_Filter_TD_4648_output);
    gettimeofday(&tv_r_Filter_4_645946_e, 0);

    struct timeval tv_r_JOIN_INNER_4_741356_s, tv_r_JOIN_INNER_4_741356_e;
    gettimeofday(&tv_r_JOIN_INNER_4_741356_s, 0);
    SW_JOIN_INNER_TD_4371(tbl_JOIN_INNER_TD_5155_output, tbl_Filter_TD_5532_output, tbl_JOIN_INNER_TD_4371_output);
    gettimeofday(&tv_r_JOIN_INNER_4_741356_e, 0);

    struct timeval tv_r_JOIN_INNER_4_560832_s, tv_r_JOIN_INNER_4_560832_e;
    gettimeofday(&tv_r_JOIN_INNER_4_560832_s, 0);
    SW_JOIN_INNER_TD_4555(tbl_JOIN_INNER_TD_5432_output, tbl_Filter_TD_5625_output, tbl_JOIN_INNER_TD_4555_output);
    gettimeofday(&tv_r_JOIN_INNER_4_560832_e, 0);

    struct timeval tv_r_Aggregate_4_854028_s, tv_r_Aggregate_4_854028_e;
    gettimeofday(&tv_r_Aggregate_4_854028_s, 0);
    SW_Aggregate_TD_4495(tbl_JOIN_INNER_TD_5671_output, tbl_Aggregate_TD_4495_output);
    gettimeofday(&tv_r_Aggregate_4_854028_e, 0);

    struct timeval tv_r_JOIN_CROSS_4_639969_s, tv_r_JOIN_CROSS_4_639969_e;
    gettimeofday(&tv_r_JOIN_CROSS_4_639969_s, 0);
    SW_JOIN_CROSS_TD_4276(tbl_JOIN_CROSS_TD_5373_output, tbl_Aggregate_TD_5256_output, tbl_JOIN_CROSS_TD_4276_output);
    gettimeofday(&tv_r_JOIN_CROSS_4_639969_e, 0);

    struct timeval tv_r_Filter_3_403549_s, tv_r_Filter_3_403549_e;
    gettimeofday(&tv_r_Filter_3_403549_s, 0);
    SW_Filter_TD_3311(tbl_SerializeFromObject_TD_4381_input, tbl_Filter_TD_3311_output);
    gettimeofday(&tv_r_Filter_3_403549_e, 0);

    struct timeval tv_r_JOIN_INNER_3_573888_s, tv_r_JOIN_INNER_3_573888_e;
    gettimeofday(&tv_r_JOIN_INNER_3_573888_s, 0);
    SW_JOIN_INNER_TD_3940(tbl_JOIN_INNER_TD_4390_output, tbl_Filter_TD_4762_output, tbl_JOIN_INNER_TD_3940_output);
    gettimeofday(&tv_r_JOIN_INNER_3_573888_e, 0);

    struct timeval tv_r_JOIN_INNER_3_386789_s, tv_r_JOIN_INNER_3_386789_e;
    gettimeofday(&tv_r_JOIN_INNER_3_386789_s, 0);
    SW_JOIN_INNER_TD_337(tbl_JOIN_INNER_TD_4371_output, tbl_Filter_TD_4648_output, tbl_JOIN_INNER_TD_337_output);
    gettimeofday(&tv_r_JOIN_INNER_3_386789_e, 0);

    struct timeval tv_r_Aggregate_3_831354_s, tv_r_Aggregate_3_831354_e;
    gettimeofday(&tv_r_Aggregate_3_831354_s, 0);
    SW_Aggregate_TD_3932(tbl_JOIN_INNER_TD_4555_output, tbl_Aggregate_TD_3932_output);
    gettimeofday(&tv_r_Aggregate_3_831354_e, 0);

    struct timeval tv_r_JOIN_CROSS_3_476357_s, tv_r_JOIN_CROSS_3_476357_e;
    gettimeofday(&tv_r_JOIN_CROSS_3_476357_s, 0);
    SW_JOIN_CROSS_TD_3986(tbl_JOIN_CROSS_TD_4276_output, tbl_Aggregate_TD_4495_output, tbl_JOIN_CROSS_TD_3986_output);
    gettimeofday(&tv_r_JOIN_CROSS_3_476357_e, 0);

    struct timeval tv_r_JOIN_INNER_2_586905_s, tv_r_JOIN_INNER_2_586905_e;
    gettimeofday(&tv_r_JOIN_INNER_2_586905_s, 0);
    SW_JOIN_INNER_TD_2578(tbl_JOIN_INNER_TD_3940_output, tbl_Filter_TD_3311_output, tbl_JOIN_INNER_TD_2578_output);
    gettimeofday(&tv_r_JOIN_INNER_2_586905_e, 0);

    struct timeval tv_r_Aggregate_2_848963_s, tv_r_Aggregate_2_848963_e;
    gettimeofday(&tv_r_Aggregate_2_848963_s, 0);
    SW_Aggregate_TD_2501(tbl_JOIN_INNER_TD_337_output, tbl_Aggregate_TD_2501_output);
    gettimeofday(&tv_r_Aggregate_2_848963_e, 0);

    struct timeval tv_r_JOIN_CROSS_2_461418_s, tv_r_JOIN_CROSS_2_461418_e;
    gettimeofday(&tv_r_JOIN_CROSS_2_461418_s, 0);
    SW_JOIN_CROSS_TD_2346(tbl_JOIN_CROSS_TD_3986_output, tbl_Aggregate_TD_3932_output, tbl_JOIN_CROSS_TD_2346_output);
    gettimeofday(&tv_r_JOIN_CROSS_2_461418_e, 0);

    struct timeval tv_r_Aggregate_1_292800_s, tv_r_Aggregate_1_292800_e;
    gettimeofday(&tv_r_Aggregate_1_292800_s, 0);
    SW_Aggregate_TD_1346(tbl_JOIN_INNER_TD_2578_output, tbl_Aggregate_TD_1346_output);
    gettimeofday(&tv_r_Aggregate_1_292800_e, 0);

    struct timeval tv_r_JOIN_CROSS_1_448915_s, tv_r_JOIN_CROSS_1_448915_e;
    gettimeofday(&tv_r_JOIN_CROSS_1_448915_s, 0);
    SW_JOIN_CROSS_TD_1195(tbl_JOIN_CROSS_TD_2346_output, tbl_Aggregate_TD_2501_output, tbl_JOIN_CROSS_TD_1195_output);
    gettimeofday(&tv_r_JOIN_CROSS_1_448915_e, 0);

    struct timeval tv_r_JOIN_CROSS_0_347692_s, tv_r_JOIN_CROSS_0_347692_e;
    gettimeofday(&tv_r_JOIN_CROSS_0_347692_s, 0);
    SW_JOIN_CROSS_TD_0135(tbl_JOIN_CROSS_TD_1195_output, tbl_Aggregate_TD_1346_output, tbl_JOIN_CROSS_TD_0135_output);
    gettimeofday(&tv_r_JOIN_CROSS_0_347692_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_63182_s, &tv_r_Filter_11_63182_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12904_input: " << tbl_SerializeFromObject_TD_12904_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_54067_s, &tv_r_Filter_11_54067_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12152_input: " << tbl_SerializeFromObject_TD_12152_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_251917_s, &tv_r_Filter_11_251917_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12786_input: " << tbl_SerializeFromObject_TD_12786_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_688386_s, &tv_r_Filter_11_688386_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12774_input: " << tbl_SerializeFromObject_TD_12774_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_904478_s, &tv_r_Filter_10_904478_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11169_input: " << tbl_SerializeFromObject_TD_11169_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_340399_s, &tv_r_Filter_10_340399_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11754_input: " << tbl_SerializeFromObject_TD_11754_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_526521_s, &tv_r_Filter_10_526521_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11808_input: " << tbl_SerializeFromObject_TD_11808_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_552559_s, &tv_r_JOIN_INNER_10_552559_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1145_output: " << tbl_Filter_TD_1145_output.getNumRow() << " " << "tbl_Filter_TD_11389_output: " << tbl_Filter_TD_11389_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_779817_s, &tv_r_Filter_10_779817_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11830_input: " << tbl_SerializeFromObject_TD_11830_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_314549_s, &tv_r_JOIN_INNER_10_314549_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11342_output: " << tbl_Filter_TD_11342_output.getNumRow() << " " << "tbl_Filter_TD_11894_output: " << tbl_Filter_TD_11894_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_228189_s, &tv_r_Filter_9_228189_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10427_input: " << tbl_SerializeFromObject_TD_10427_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_245044_s, &tv_r_Filter_9_245044_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10855_input: " << tbl_SerializeFromObject_TD_10855_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_704013_s, &tv_r_Filter_9_704013_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10865_input: " << tbl_SerializeFromObject_TD_10865_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_330286_s, &tv_r_JOIN_INNER_9_330286_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10999_output: " << tbl_Filter_TD_10999_output.getNumRow() << " " << "tbl_Filter_TD_10357_output: " << tbl_Filter_TD_10357_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_376276_s, &tv_r_Filter_9_376276_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10375_input: " << tbl_SerializeFromObject_TD_10375_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_540048_s, &tv_r_JOIN_INNER_9_540048_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10510_output: " << tbl_JOIN_INNER_TD_10510_output.getNumRow() << " " << "tbl_Filter_TD_10399_output: " << tbl_Filter_TD_10399_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_167684_s, &tv_r_Filter_9_167684_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10350_input: " << tbl_SerializeFromObject_TD_10350_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_423456_s, &tv_r_JOIN_INNER_9_423456_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10886_output: " << tbl_JOIN_INNER_TD_10886_output.getNumRow() << " " << "tbl_Filter_TD_10223_output: " << tbl_Filter_TD_10223_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_566303_s, &tv_r_Filter_8_566303_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9867_input: " << tbl_SerializeFromObject_TD_9867_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_827190_s, &tv_r_Filter_8_827190_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9986_input: " << tbl_SerializeFromObject_TD_9986_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_29538_s, &tv_r_Filter_8_29538_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9365_input: " << tbl_SerializeFromObject_TD_9365_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_610208_s, &tv_r_JOIN_INNER_8_610208_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9365_output: " << tbl_Filter_TD_9365_output.getNumRow() << " " << "tbl_Filter_TD_9968_output: " << tbl_Filter_TD_9968_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_268400_s, &tv_r_Filter_8_268400_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9840_input: " << tbl_SerializeFromObject_TD_9840_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_246347_s, &tv_r_JOIN_INNER_8_246347_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9808_output: " << tbl_JOIN_INNER_TD_9808_output.getNumRow() << " " << "tbl_Filter_TD_9706_output: " << tbl_Filter_TD_9706_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_226731_s, &tv_r_JOIN_INNER_8_226731_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9835_output: " << tbl_JOIN_INNER_TD_9835_output.getNumRow() << " " << "tbl_Filter_TD_9672_output: " << tbl_Filter_TD_9672_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_804964_s, &tv_r_JOIN_INNER_8_804964_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9419_output: " << tbl_JOIN_INNER_TD_9419_output.getNumRow() << " " << "tbl_Filter_TD_9172_output: " << tbl_Filter_TD_9172_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_926869_s, &tv_r_Filter_7_926869_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8886_input: " << tbl_SerializeFromObject_TD_8886_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_682250_s, &tv_r_Filter_7_682250_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8116_input: " << tbl_SerializeFromObject_TD_8116_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_568271_s, &tv_r_Filter_7_568271_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8965_input: " << tbl_SerializeFromObject_TD_8965_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_987254_s, &tv_r_JOIN_INNER_7_987254_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8847_output: " << tbl_Filter_TD_8847_output.getNumRow() << " " << "tbl_Filter_TD_8517_output: " << tbl_Filter_TD_8517_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_994880_s, &tv_r_Filter_7_994880_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8759_input: " << tbl_SerializeFromObject_TD_8759_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_898951_s, &tv_r_JOIN_INNER_7_898951_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8791_output: " << tbl_JOIN_INNER_TD_8791_output.getNumRow() << " " << "tbl_Filter_TD_8388_output: " << tbl_Filter_TD_8388_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_526916_s, &tv_r_JOIN_INNER_7_526916_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8191_output: " << tbl_JOIN_INNER_TD_8191_output.getNumRow() << " " << "tbl_Filter_TD_8329_output: " << tbl_Filter_TD_8329_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_676677_s, &tv_r_Aggregate_7_676677_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8441_output: " << tbl_JOIN_INNER_TD_8441_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_65135_s, &tv_r_Aggregate_7_65135_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8594_output: " << tbl_JOIN_INNER_TD_8594_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_681617_s, &tv_r_Filter_6_681617_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7299_input: " << tbl_SerializeFromObject_TD_7299_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_346813_s, &tv_r_Filter_6_346813_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_779_input: " << tbl_SerializeFromObject_TD_779_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_329430_s, &tv_r_Filter_6_329430_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7448_input: " << tbl_SerializeFromObject_TD_7448_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_935676_s, &tv_r_JOIN_INNER_6_935676_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7820_output: " << tbl_Filter_TD_7820_output.getNumRow() << " " << "tbl_Filter_TD_7808_output: " << tbl_Filter_TD_7808_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_269552_s, &tv_r_Filter_6_269552_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7723_input: " << tbl_SerializeFromObject_TD_7723_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_735564_s, &tv_r_JOIN_INNER_6_735564_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7939_output: " << tbl_JOIN_INNER_TD_7939_output.getNumRow() << " " << "tbl_Filter_TD_7978_output: " << tbl_Filter_TD_7978_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_850008_s, &tv_r_JOIN_INNER_6_850008_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_72_output: " << tbl_JOIN_INNER_TD_72_output.getNumRow() << " " << "tbl_Filter_TD_785_output: " << tbl_Filter_TD_785_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_822403_s, &tv_r_Aggregate_6_822403_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7438_output: " << tbl_JOIN_INNER_TD_7438_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_6: " << tvdiff(&tv_r_JOIN_CROSS_6_917581_s, &tv_r_JOIN_CROSS_6_917581_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7877_output: " << tbl_Aggregate_TD_7877_output.getNumRow() << " " << "tbl_Aggregate_TD_752_output: " << tbl_Aggregate_TD_752_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_749265_s, &tv_r_Filter_5_749265_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6946_input: " << tbl_SerializeFromObject_TD_6946_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_298516_s, &tv_r_Filter_5_298516_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6392_input: " << tbl_SerializeFromObject_TD_6392_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_973291_s, &tv_r_Filter_5_973291_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6106_input: " << tbl_SerializeFromObject_TD_6106_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_106033_s, &tv_r_JOIN_INNER_5_106033_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6101_output: " << tbl_Filter_TD_6101_output.getNumRow() << " " << "tbl_Filter_TD_6153_output: " << tbl_Filter_TD_6153_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_517470_s, &tv_r_Filter_5_517470_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6142_input: " << tbl_SerializeFromObject_TD_6142_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_732483_s, &tv_r_JOIN_INNER_5_732483_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6456_output: " << tbl_JOIN_INNER_TD_6456_output.getNumRow() << " " << "tbl_Filter_TD_694_output: " << tbl_Filter_TD_694_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_204499_s, &tv_r_JOIN_INNER_5_204499_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6631_output: " << tbl_JOIN_INNER_TD_6631_output.getNumRow() << " " << "tbl_Filter_TD_6997_output: " << tbl_Filter_TD_6997_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_706854_s, &tv_r_Aggregate_5_706854_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6456_output: " << tbl_JOIN_INNER_TD_6456_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_5: " << tvdiff(&tv_r_JOIN_CROSS_5_996585_s, &tv_r_JOIN_CROSS_5_996585_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_6438_output: " << tbl_JOIN_CROSS_TD_6438_output.getNumRow() << " " << "tbl_Aggregate_TD_682_output: " << tbl_Aggregate_TD_682_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_541305_s, &tv_r_Filter_4_541305_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_549_input: " << tbl_SerializeFromObject_TD_549_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_654299_s, &tv_r_JOIN_INNER_4_654299_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5972_output: " << tbl_Filter_TD_5972_output.getNumRow() << " " << "tbl_Filter_TD_5944_output: " << tbl_Filter_TD_5944_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_645946_s, &tv_r_Filter_4_645946_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5594_input: " << tbl_SerializeFromObject_TD_5594_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_741356_s, &tv_r_JOIN_INNER_4_741356_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5155_output: " << tbl_JOIN_INNER_TD_5155_output.getNumRow() << " " << "tbl_Filter_TD_5532_output: " << tbl_Filter_TD_5532_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_560832_s, &tv_r_JOIN_INNER_4_560832_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5432_output: " << tbl_JOIN_INNER_TD_5432_output.getNumRow() << " " << "tbl_Filter_TD_5625_output: " << tbl_Filter_TD_5625_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_854028_s, &tv_r_Aggregate_4_854028_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5671_output: " << tbl_JOIN_INNER_TD_5671_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_4: " << tvdiff(&tv_r_JOIN_CROSS_4_639969_s, &tv_r_JOIN_CROSS_4_639969_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_5373_output: " << tbl_JOIN_CROSS_TD_5373_output.getNumRow() << " " << "tbl_Aggregate_TD_5256_output: " << tbl_Aggregate_TD_5256_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_403549_s, &tv_r_Filter_3_403549_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4381_input: " << tbl_SerializeFromObject_TD_4381_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_573888_s, &tv_r_JOIN_INNER_3_573888_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4390_output: " << tbl_JOIN_INNER_TD_4390_output.getNumRow() << " " << "tbl_Filter_TD_4762_output: " << tbl_Filter_TD_4762_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_386789_s, &tv_r_JOIN_INNER_3_386789_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4371_output: " << tbl_JOIN_INNER_TD_4371_output.getNumRow() << " " << "tbl_Filter_TD_4648_output: " << tbl_Filter_TD_4648_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_831354_s, &tv_r_Aggregate_3_831354_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4555_output: " << tbl_JOIN_INNER_TD_4555_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_3: " << tvdiff(&tv_r_JOIN_CROSS_3_476357_s, &tv_r_JOIN_CROSS_3_476357_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_4276_output: " << tbl_JOIN_CROSS_TD_4276_output.getNumRow() << " " << "tbl_Aggregate_TD_4495_output: " << tbl_Aggregate_TD_4495_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_586905_s, &tv_r_JOIN_INNER_2_586905_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3940_output: " << tbl_JOIN_INNER_TD_3940_output.getNumRow() << " " << "tbl_Filter_TD_3311_output: " << tbl_Filter_TD_3311_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_848963_s, &tv_r_Aggregate_2_848963_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_337_output: " << tbl_JOIN_INNER_TD_337_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_2: " << tvdiff(&tv_r_JOIN_CROSS_2_461418_s, &tv_r_JOIN_CROSS_2_461418_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_3986_output: " << tbl_JOIN_CROSS_TD_3986_output.getNumRow() << " " << "tbl_Aggregate_TD_3932_output: " << tbl_Aggregate_TD_3932_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_292800_s, &tv_r_Aggregate_1_292800_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2578_output: " << tbl_JOIN_INNER_TD_2578_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_1: " << tvdiff(&tv_r_JOIN_CROSS_1_448915_s, &tv_r_JOIN_CROSS_1_448915_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_2346_output: " << tbl_JOIN_CROSS_TD_2346_output.getNumRow() << " " << "tbl_Aggregate_TD_2501_output: " << tbl_Aggregate_TD_2501_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_0: " << tvdiff(&tv_r_JOIN_CROSS_0_347692_s, &tv_r_JOIN_CROSS_0_347692_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_1195_output: " << tbl_JOIN_CROSS_TD_1195_output.getNumRow() << " " << "tbl_Aggregate_TD_1346_output: " << tbl_Aggregate_TD_1346_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.3236089 * 1000 << "ms" << std::endl; 
    return 0; 
}
