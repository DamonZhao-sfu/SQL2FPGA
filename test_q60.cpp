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

#include "cfgFunc_q60.hpp" 
#include "q60.hpp" 

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
    std::cout << "NOTE:running query #60\n."; 
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
    Table tbl_GlobalLimit_TD_0813_output("tbl_GlobalLimit_TD_0813_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0813_output.allocateHost();
    Table tbl_LocalLimit_TD_194_output("tbl_LocalLimit_TD_194_output", 6100000, 2, "");
    tbl_LocalLimit_TD_194_output.allocateHost();
    Table tbl_Sort_TD_2585_output("tbl_Sort_TD_2585_output", 6100000, 2, "");
    tbl_Sort_TD_2585_output.allocateHost();
    Table tbl_Aggregate_TD_3311_output("tbl_Aggregate_TD_3311_output", 6100000, 2, "");
    tbl_Aggregate_TD_3311_output.allocateHost();
    Table tbl_Union_TD_4572_output("tbl_Union_TD_4572_output", 6100000, 2, "");
    tbl_Union_TD_4572_output.allocateHost();
    Table tbl_Aggregate_TD_5994_output("tbl_Aggregate_TD_5994_output", 6100000, 2, "");
    tbl_Aggregate_TD_5994_output.allocateHost();
    Table tbl_Aggregate_TD_5794_output("tbl_Aggregate_TD_5794_output", 6100000, 2, "");
    tbl_Aggregate_TD_5794_output.allocateHost();
    Table tbl_Aggregate_TD_5798_output("tbl_Aggregate_TD_5798_output", 6100000, 2, "");
    tbl_Aggregate_TD_5798_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6329_output("tbl_JOIN_INNER_TD_6329_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6329_output.allocateHost();
    Table tbl_JOIN_INNER_TD_683_output("tbl_JOIN_INNER_TD_683_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_683_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6293_output("tbl_JOIN_INNER_TD_6293_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6293_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7592_output("tbl_JOIN_INNER_TD_7592_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7592_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7114_output("tbl_JOIN_LEFTSEMI_TD_7114_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7114_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7352_output("tbl_JOIN_INNER_TD_7352_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7352_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7497_output("tbl_JOIN_LEFTSEMI_TD_7497_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7497_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7199_output("tbl_JOIN_INNER_TD_7199_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7199_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7500_output("tbl_JOIN_LEFTSEMI_TD_7500_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7500_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8457_output("tbl_JOIN_INNER_TD_8457_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8457_output.allocateHost();
    Table tbl_Filter_TD_8285_output("tbl_Filter_TD_8285_output", 6100000, 1, "");
    tbl_Filter_TD_8285_output.allocateHost();
    Table tbl_Filter_TD_8855_output("tbl_Filter_TD_8855_output", 6100000, 2, "");
    tbl_Filter_TD_8855_output.allocateHost();
    Table tbl_Filter_TD_8738_output("tbl_Filter_TD_8738_output", 6100000, 1, "");
    tbl_Filter_TD_8738_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8146_output("tbl_JOIN_INNER_TD_8146_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8146_output.allocateHost();
    Table tbl_Filter_TD_8205_output("tbl_Filter_TD_8205_output", 6100000, 1, "");
    tbl_Filter_TD_8205_output.allocateHost();
    Table tbl_Filter_TD_8855_output("tbl_Filter_TD_8855_output", 6100000, 2, "");
    tbl_Filter_TD_8855_output.allocateHost();
    Table tbl_Filter_TD_8692_output("tbl_Filter_TD_8692_output", 6100000, 1, "");
    tbl_Filter_TD_8692_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8559_output("tbl_JOIN_INNER_TD_8559_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8559_output.allocateHost();
    Table tbl_Filter_TD_8937_output("tbl_Filter_TD_8937_output", 6100000, 1, "");
    tbl_Filter_TD_8937_output.allocateHost();
    Table tbl_Filter_TD_8155_output("tbl_Filter_TD_8155_output", 6100000, 2, "");
    tbl_Filter_TD_8155_output.allocateHost();
    Table tbl_Filter_TD_810_output("tbl_Filter_TD_810_output", 6100000, 1, "");
    tbl_Filter_TD_810_output.allocateHost();
    Table tbl_Filter_TD_9721_output("tbl_Filter_TD_9721_output", 6100000, 4, "");
    tbl_Filter_TD_9721_output.allocateHost();
    Table tbl_Filter_TD_9960_output("tbl_Filter_TD_9960_output", 6100000, 1, "");
    tbl_Filter_TD_9960_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9170_input;
    tbl_SerializeFromObject_TD_9170_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9170_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9170_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9170_input.allocateHost();
    tbl_SerializeFromObject_TD_9170_input.loadHost();
    Table tbl_SerializeFromObject_TD_99_input;
    tbl_SerializeFromObject_TD_99_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_99_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_99_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_99_input.allocateHost();
    tbl_SerializeFromObject_TD_99_input.loadHost();
    Table tbl_SerializeFromObject_TD_9579_input;
    tbl_SerializeFromObject_TD_9579_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9579_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9579_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9579_input.allocateHost();
    tbl_SerializeFromObject_TD_9579_input.loadHost();
    Table tbl_Filter_TD_9634_output("tbl_Filter_TD_9634_output", 6100000, 4, "");
    tbl_Filter_TD_9634_output.allocateHost();
    Table tbl_Filter_TD_9467_output("tbl_Filter_TD_9467_output", 6100000, 1, "");
    tbl_Filter_TD_9467_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9132_input;
    tbl_SerializeFromObject_TD_9132_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9132_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9132_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9132_input.allocateHost();
    tbl_SerializeFromObject_TD_9132_input.loadHost();
    Table tbl_SerializeFromObject_TD_9987_input;
    tbl_SerializeFromObject_TD_9987_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9987_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9987_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9987_input.allocateHost();
    tbl_SerializeFromObject_TD_9987_input.loadHost();
    Table tbl_SerializeFromObject_TD_9187_input;
    tbl_SerializeFromObject_TD_9187_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9187_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9187_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9187_input.allocateHost();
    tbl_SerializeFromObject_TD_9187_input.loadHost();
    Table tbl_Filter_TD_9384_output("tbl_Filter_TD_9384_output", 6100000, 4, "");
    tbl_Filter_TD_9384_output.allocateHost();
    Table tbl_Filter_TD_9722_output("tbl_Filter_TD_9722_output", 6100000, 1, "");
    tbl_Filter_TD_9722_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9795_input;
    tbl_SerializeFromObject_TD_9795_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9795_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9795_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9795_input.allocateHost();
    tbl_SerializeFromObject_TD_9795_input.loadHost();
    Table tbl_SerializeFromObject_TD_9413_input;
    tbl_SerializeFromObject_TD_9413_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9413_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9413_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9413_input.allocateHost();
    tbl_SerializeFromObject_TD_9413_input.loadHost();
    Table tbl_SerializeFromObject_TD_9251_input;
    tbl_SerializeFromObject_TD_9251_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9251_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9251_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9251_input.allocateHost();
    tbl_SerializeFromObject_TD_9251_input.loadHost();
    Table tbl_SerializeFromObject_TD_1085_input;
    tbl_SerializeFromObject_TD_1085_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1085_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1085_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_1085_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_1085_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1085_input.allocateHost();
    tbl_SerializeFromObject_TD_1085_input.loadHost();
    Table tbl_SerializeFromObject_TD_10454_input;
    tbl_SerializeFromObject_TD_10454_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10454_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10454_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10454_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10454_input.allocateHost();
    tbl_SerializeFromObject_TD_10454_input.loadHost();
    Table tbl_SerializeFromObject_TD_10726_input;
    tbl_SerializeFromObject_TD_10726_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10726_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10726_input.addCol("cs_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10726_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_10726_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10726_input.allocateHost();
    tbl_SerializeFromObject_TD_10726_input.loadHost();
    Table tbl_SerializeFromObject_TD_10951_input;
    tbl_SerializeFromObject_TD_10951_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10951_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10951_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10951_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10951_input.allocateHost();
    tbl_SerializeFromObject_TD_10951_input.loadHost();
    Table tbl_SerializeFromObject_TD_10354_input;
    tbl_SerializeFromObject_TD_10354_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10354_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10354_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_10354_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10354_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10354_input.allocateHost();
    tbl_SerializeFromObject_TD_10354_input.loadHost();
    Table tbl_SerializeFromObject_TD_10711_input;
    tbl_SerializeFromObject_TD_10711_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10711_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10711_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10711_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10711_input.allocateHost();
    tbl_SerializeFromObject_TD_10711_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_774417_s, tv_r_Filter_9_774417_e;
    gettimeofday(&tv_r_Filter_9_774417_s, 0);
    SW_Filter_TD_9722(tbl_SerializeFromObject_TD_10711_input, tbl_Filter_TD_9722_output);
    gettimeofday(&tv_r_Filter_9_774417_e, 0);

    struct timeval tv_r_Filter_9_403062_s, tv_r_Filter_9_403062_e;
    gettimeofday(&tv_r_Filter_9_403062_s, 0);
    SW_Filter_TD_9384(tbl_SerializeFromObject_TD_10354_input, tbl_Filter_TD_9384_output);
    gettimeofday(&tv_r_Filter_9_403062_e, 0);

    struct timeval tv_r_Filter_9_624042_s, tv_r_Filter_9_624042_e;
    gettimeofday(&tv_r_Filter_9_624042_s, 0);
    SW_Filter_TD_9467(tbl_SerializeFromObject_TD_10951_input, tbl_Filter_TD_9467_output);
    gettimeofday(&tv_r_Filter_9_624042_e, 0);

    struct timeval tv_r_Filter_9_804466_s, tv_r_Filter_9_804466_e;
    gettimeofday(&tv_r_Filter_9_804466_s, 0);
    SW_Filter_TD_9634(tbl_SerializeFromObject_TD_10726_input, tbl_Filter_TD_9634_output);
    gettimeofday(&tv_r_Filter_9_804466_e, 0);

    struct timeval tv_r_Filter_9_240498_s, tv_r_Filter_9_240498_e;
    gettimeofday(&tv_r_Filter_9_240498_s, 0);
    SW_Filter_TD_9960(tbl_SerializeFromObject_TD_10454_input, tbl_Filter_TD_9960_output);
    gettimeofday(&tv_r_Filter_9_240498_e, 0);

    struct timeval tv_r_Filter_9_389419_s, tv_r_Filter_9_389419_e;
    gettimeofday(&tv_r_Filter_9_389419_s, 0);
    SW_Filter_TD_9721(tbl_SerializeFromObject_TD_1085_input, tbl_Filter_TD_9721_output);
    gettimeofday(&tv_r_Filter_9_389419_e, 0);

    struct timeval tv_r_Filter_8_872950_s, tv_r_Filter_8_872950_e;
    gettimeofday(&tv_r_Filter_8_872950_s, 0);
    SW_Filter_TD_810(tbl_SerializeFromObject_TD_9251_input, tbl_Filter_TD_810_output);
    gettimeofday(&tv_r_Filter_8_872950_e, 0);

    struct timeval tv_r_Filter_8_508804_s, tv_r_Filter_8_508804_e;
    gettimeofday(&tv_r_Filter_8_508804_s, 0);
    SW_Filter_TD_8155(tbl_SerializeFromObject_TD_9413_input, tbl_Filter_TD_8155_output);
    gettimeofday(&tv_r_Filter_8_508804_e, 0);

    struct timeval tv_r_Filter_8_170402_s, tv_r_Filter_8_170402_e;
    gettimeofday(&tv_r_Filter_8_170402_s, 0);
    SW_Filter_TD_8937(tbl_SerializeFromObject_TD_9795_input, tbl_Filter_TD_8937_output);
    gettimeofday(&tv_r_Filter_8_170402_e, 0);

    struct timeval tv_r_JOIN_INNER_8_133905_s, tv_r_JOIN_INNER_8_133905_e;
    gettimeofday(&tv_r_JOIN_INNER_8_133905_s, 0);
    SW_JOIN_INNER_TD_8559(tbl_Filter_TD_9384_output, tbl_Filter_TD_9722_output, tbl_JOIN_INNER_TD_8559_output);
    gettimeofday(&tv_r_JOIN_INNER_8_133905_e, 0);

    struct timeval tv_r_Filter_8_96967_s, tv_r_Filter_8_96967_e;
    gettimeofday(&tv_r_Filter_8_96967_s, 0);
    SW_Filter_TD_8692(tbl_SerializeFromObject_TD_9187_input, tbl_Filter_TD_8692_output);
    gettimeofday(&tv_r_Filter_8_96967_e, 0);

    struct timeval tv_r_Filter_8_292741_s, tv_r_Filter_8_292741_e;
    gettimeofday(&tv_r_Filter_8_292741_s, 0);
    SW_Filter_TD_8855(tbl_SerializeFromObject_TD_9987_input, tbl_Filter_TD_8855_output);
    gettimeofday(&tv_r_Filter_8_292741_e, 0);

    struct timeval tv_r_Filter_8_961568_s, tv_r_Filter_8_961568_e;
    gettimeofday(&tv_r_Filter_8_961568_s, 0);
    SW_Filter_TD_8205(tbl_SerializeFromObject_TD_9132_input, tbl_Filter_TD_8205_output);
    gettimeofday(&tv_r_Filter_8_961568_e, 0);

    struct timeval tv_r_JOIN_INNER_8_98637_s, tv_r_JOIN_INNER_8_98637_e;
    gettimeofday(&tv_r_JOIN_INNER_8_98637_s, 0);
    SW_JOIN_INNER_TD_8146(tbl_Filter_TD_9634_output, tbl_Filter_TD_9467_output, tbl_JOIN_INNER_TD_8146_output);
    gettimeofday(&tv_r_JOIN_INNER_8_98637_e, 0);

    struct timeval tv_r_Filter_8_224298_s, tv_r_Filter_8_224298_e;
    gettimeofday(&tv_r_Filter_8_224298_s, 0);
    SW_Filter_TD_8738(tbl_SerializeFromObject_TD_9579_input, tbl_Filter_TD_8738_output);
    gettimeofday(&tv_r_Filter_8_224298_e, 0);

    struct timeval tv_r_Filter_8_936694_s, tv_r_Filter_8_936694_e;
    gettimeofday(&tv_r_Filter_8_936694_s, 0);
    SW_Filter_TD_8855(tbl_SerializeFromObject_TD_99_input, tbl_Filter_TD_8855_output);
    gettimeofday(&tv_r_Filter_8_936694_e, 0);

    struct timeval tv_r_Filter_8_793311_s, tv_r_Filter_8_793311_e;
    gettimeofday(&tv_r_Filter_8_793311_s, 0);
    SW_Filter_TD_8285(tbl_SerializeFromObject_TD_9170_input, tbl_Filter_TD_8285_output);
    gettimeofday(&tv_r_Filter_8_793311_e, 0);

    struct timeval tv_r_JOIN_INNER_8_308433_s, tv_r_JOIN_INNER_8_308433_e;
    gettimeofday(&tv_r_JOIN_INNER_8_308433_s, 0);
    SW_JOIN_INNER_TD_8457(tbl_Filter_TD_9721_output, tbl_Filter_TD_9960_output, tbl_JOIN_INNER_TD_8457_output);
    gettimeofday(&tv_r_JOIN_INNER_8_308433_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_879025_s, tv_r_JOIN_LEFTSEMI_7_879025_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_879025_s, 0);
    SW_JOIN_LEFTSEMI_TD_7500(tbl_Filter_TD_8155_output, tbl_Filter_TD_810_output, tbl_JOIN_LEFTSEMI_TD_7500_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_879025_e, 0);

    struct timeval tv_r_JOIN_INNER_7_799844_s, tv_r_JOIN_INNER_7_799844_e;
    gettimeofday(&tv_r_JOIN_INNER_7_799844_s, 0);
    SW_JOIN_INNER_TD_7199(tbl_JOIN_INNER_TD_8559_output, tbl_Filter_TD_8937_output, tbl_JOIN_INNER_TD_7199_output);
    gettimeofday(&tv_r_JOIN_INNER_7_799844_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_549326_s, tv_r_JOIN_LEFTSEMI_7_549326_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_549326_s, 0);
    SW_JOIN_LEFTSEMI_TD_7497(tbl_Filter_TD_8855_output, tbl_Filter_TD_8692_output, tbl_JOIN_LEFTSEMI_TD_7497_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_549326_e, 0);

    struct timeval tv_r_JOIN_INNER_7_660322_s, tv_r_JOIN_INNER_7_660322_e;
    gettimeofday(&tv_r_JOIN_INNER_7_660322_s, 0);
    SW_JOIN_INNER_TD_7352(tbl_JOIN_INNER_TD_8146_output, tbl_Filter_TD_8205_output, tbl_JOIN_INNER_TD_7352_output);
    gettimeofday(&tv_r_JOIN_INNER_7_660322_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_559179_s, tv_r_JOIN_LEFTSEMI_7_559179_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_559179_s, 0);
    SW_JOIN_LEFTSEMI_TD_7114(tbl_Filter_TD_8855_output, tbl_Filter_TD_8738_output, tbl_JOIN_LEFTSEMI_TD_7114_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_559179_e, 0);

    struct timeval tv_r_JOIN_INNER_7_755898_s, tv_r_JOIN_INNER_7_755898_e;
    gettimeofday(&tv_r_JOIN_INNER_7_755898_s, 0);
    SW_JOIN_INNER_TD_7592(tbl_JOIN_INNER_TD_8457_output, tbl_Filter_TD_8285_output, tbl_JOIN_INNER_TD_7592_output);
    gettimeofday(&tv_r_JOIN_INNER_7_755898_e, 0);

    struct timeval tv_r_JOIN_INNER_6_57090_s, tv_r_JOIN_INNER_6_57090_e;
    gettimeofday(&tv_r_JOIN_INNER_6_57090_s, 0);
    SW_JOIN_INNER_TD_6293(tbl_JOIN_INNER_TD_7199_output, tbl_JOIN_LEFTSEMI_TD_7500_output, tbl_JOIN_INNER_TD_6293_output);
    gettimeofday(&tv_r_JOIN_INNER_6_57090_e, 0);

    struct timeval tv_r_JOIN_INNER_6_917364_s, tv_r_JOIN_INNER_6_917364_e;
    gettimeofday(&tv_r_JOIN_INNER_6_917364_s, 0);
    SW_JOIN_INNER_TD_683(tbl_JOIN_INNER_TD_7352_output, tbl_JOIN_LEFTSEMI_TD_7497_output, tbl_JOIN_INNER_TD_683_output);
    gettimeofday(&tv_r_JOIN_INNER_6_917364_e, 0);

    struct timeval tv_r_JOIN_INNER_6_158911_s, tv_r_JOIN_INNER_6_158911_e;
    gettimeofday(&tv_r_JOIN_INNER_6_158911_s, 0);
    SW_JOIN_INNER_TD_6329(tbl_JOIN_INNER_TD_7592_output, tbl_JOIN_LEFTSEMI_TD_7114_output, tbl_JOIN_INNER_TD_6329_output);
    gettimeofday(&tv_r_JOIN_INNER_6_158911_e, 0);

    struct timeval tv_r_Aggregate_5_799215_s, tv_r_Aggregate_5_799215_e;
    gettimeofday(&tv_r_Aggregate_5_799215_s, 0);
    SW_Aggregate_TD_5798(tbl_JOIN_INNER_TD_6293_output, tbl_Aggregate_TD_5798_output);
    gettimeofday(&tv_r_Aggregate_5_799215_e, 0);

    struct timeval tv_r_Aggregate_5_711107_s, tv_r_Aggregate_5_711107_e;
    gettimeofday(&tv_r_Aggregate_5_711107_s, 0);
    SW_Aggregate_TD_5794(tbl_JOIN_INNER_TD_683_output, tbl_Aggregate_TD_5794_output);
    gettimeofday(&tv_r_Aggregate_5_711107_e, 0);

    struct timeval tv_r_Aggregate_5_387057_s, tv_r_Aggregate_5_387057_e;
    gettimeofday(&tv_r_Aggregate_5_387057_s, 0);
    SW_Aggregate_TD_5994(tbl_JOIN_INNER_TD_6329_output, tbl_Aggregate_TD_5994_output);
    gettimeofday(&tv_r_Aggregate_5_387057_e, 0);

    struct timeval tv_r_Union_4_355141_s, tv_r_Union_4_355141_e;
    gettimeofday(&tv_r_Union_4_355141_s, 0);
    SW_Union_TD_4572(tbl_Aggregate_TD_5994_output, tbl_Aggregate_TD_5794_output, tbl_Aggregate_TD_5798_output, tbl_Union_TD_4572_output);
    gettimeofday(&tv_r_Union_4_355141_e, 0);

    struct timeval tv_r_Aggregate_3_7583_s, tv_r_Aggregate_3_7583_e;
    gettimeofday(&tv_r_Aggregate_3_7583_s, 0);
    SW_Aggregate_TD_3311(tbl_Union_TD_4572_output, tbl_Aggregate_TD_3311_output);
    gettimeofday(&tv_r_Aggregate_3_7583_e, 0);

    struct timeval tv_r_Sort_2_527408_s, tv_r_Sort_2_527408_e;
    gettimeofday(&tv_r_Sort_2_527408_s, 0);
    SW_Sort_TD_2585(tbl_Aggregate_TD_3311_output, tbl_Sort_TD_2585_output);
    gettimeofday(&tv_r_Sort_2_527408_e, 0);

    struct timeval tv_r_LocalLimit_1_786713_s, tv_r_LocalLimit_1_786713_e;
    gettimeofday(&tv_r_LocalLimit_1_786713_s, 0);
    SW_LocalLimit_TD_194(tbl_Sort_TD_2585_output, tbl_LocalLimit_TD_194_output);
    gettimeofday(&tv_r_LocalLimit_1_786713_e, 0);

    struct timeval tv_r_GlobalLimit_0_867265_s, tv_r_GlobalLimit_0_867265_e;
    gettimeofday(&tv_r_GlobalLimit_0_867265_s, 0);
    SW_GlobalLimit_TD_0813(tbl_LocalLimit_TD_194_output, tbl_GlobalLimit_TD_0813_output);
    gettimeofday(&tv_r_GlobalLimit_0_867265_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_774417_s, &tv_r_Filter_9_774417_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10711_input: " << tbl_SerializeFromObject_TD_10711_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_403062_s, &tv_r_Filter_9_403062_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10354_input: " << tbl_SerializeFromObject_TD_10354_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_624042_s, &tv_r_Filter_9_624042_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10951_input: " << tbl_SerializeFromObject_TD_10951_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_804466_s, &tv_r_Filter_9_804466_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10726_input: " << tbl_SerializeFromObject_TD_10726_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_240498_s, &tv_r_Filter_9_240498_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10454_input: " << tbl_SerializeFromObject_TD_10454_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_389419_s, &tv_r_Filter_9_389419_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1085_input: " << tbl_SerializeFromObject_TD_1085_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_872950_s, &tv_r_Filter_8_872950_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9251_input: " << tbl_SerializeFromObject_TD_9251_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_508804_s, &tv_r_Filter_8_508804_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9413_input: " << tbl_SerializeFromObject_TD_9413_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_170402_s, &tv_r_Filter_8_170402_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9795_input: " << tbl_SerializeFromObject_TD_9795_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_133905_s, &tv_r_JOIN_INNER_8_133905_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9384_output: " << tbl_Filter_TD_9384_output.getNumRow() << " " << "tbl_Filter_TD_9722_output: " << tbl_Filter_TD_9722_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_96967_s, &tv_r_Filter_8_96967_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9187_input: " << tbl_SerializeFromObject_TD_9187_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_292741_s, &tv_r_Filter_8_292741_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9987_input: " << tbl_SerializeFromObject_TD_9987_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_961568_s, &tv_r_Filter_8_961568_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9132_input: " << tbl_SerializeFromObject_TD_9132_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_98637_s, &tv_r_JOIN_INNER_8_98637_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9634_output: " << tbl_Filter_TD_9634_output.getNumRow() << " " << "tbl_Filter_TD_9467_output: " << tbl_Filter_TD_9467_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_224298_s, &tv_r_Filter_8_224298_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9579_input: " << tbl_SerializeFromObject_TD_9579_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_936694_s, &tv_r_Filter_8_936694_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_99_input: " << tbl_SerializeFromObject_TD_99_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_793311_s, &tv_r_Filter_8_793311_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9170_input: " << tbl_SerializeFromObject_TD_9170_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_308433_s, &tv_r_JOIN_INNER_8_308433_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9721_output: " << tbl_Filter_TD_9721_output.getNumRow() << " " << "tbl_Filter_TD_9960_output: " << tbl_Filter_TD_9960_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_879025_s, &tv_r_JOIN_LEFTSEMI_7_879025_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8155_output: " << tbl_Filter_TD_8155_output.getNumRow() << " " << "tbl_Filter_TD_810_output: " << tbl_Filter_TD_810_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_799844_s, &tv_r_JOIN_INNER_7_799844_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8559_output: " << tbl_JOIN_INNER_TD_8559_output.getNumRow() << " " << "tbl_Filter_TD_8937_output: " << tbl_Filter_TD_8937_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_549326_s, &tv_r_JOIN_LEFTSEMI_7_549326_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8855_output: " << tbl_Filter_TD_8855_output.getNumRow() << " " << "tbl_Filter_TD_8692_output: " << tbl_Filter_TD_8692_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_660322_s, &tv_r_JOIN_INNER_7_660322_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8146_output: " << tbl_JOIN_INNER_TD_8146_output.getNumRow() << " " << "tbl_Filter_TD_8205_output: " << tbl_Filter_TD_8205_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_559179_s, &tv_r_JOIN_LEFTSEMI_7_559179_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8855_output: " << tbl_Filter_TD_8855_output.getNumRow() << " " << "tbl_Filter_TD_8738_output: " << tbl_Filter_TD_8738_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_755898_s, &tv_r_JOIN_INNER_7_755898_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8457_output: " << tbl_JOIN_INNER_TD_8457_output.getNumRow() << " " << "tbl_Filter_TD_8285_output: " << tbl_Filter_TD_8285_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_57090_s, &tv_r_JOIN_INNER_6_57090_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7199_output: " << tbl_JOIN_INNER_TD_7199_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7500_output: " << tbl_JOIN_LEFTSEMI_TD_7500_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_917364_s, &tv_r_JOIN_INNER_6_917364_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7352_output: " << tbl_JOIN_INNER_TD_7352_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7497_output: " << tbl_JOIN_LEFTSEMI_TD_7497_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_158911_s, &tv_r_JOIN_INNER_6_158911_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7592_output: " << tbl_JOIN_INNER_TD_7592_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7114_output: " << tbl_JOIN_LEFTSEMI_TD_7114_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_799215_s, &tv_r_Aggregate_5_799215_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6293_output: " << tbl_JOIN_INNER_TD_6293_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_711107_s, &tv_r_Aggregate_5_711107_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_683_output: " << tbl_JOIN_INNER_TD_683_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_387057_s, &tv_r_Aggregate_5_387057_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6329_output: " << tbl_JOIN_INNER_TD_6329_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_355141_s, &tv_r_Union_4_355141_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5994_output: " << tbl_Aggregate_TD_5994_output.getNumRow() << " " << "tbl_Aggregate_TD_5794_output: " << tbl_Aggregate_TD_5794_output.getNumRow() << " " << "tbl_Aggregate_TD_5798_output: " << tbl_Aggregate_TD_5798_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_7583_s, &tv_r_Aggregate_3_7583_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4572_output: " << tbl_Union_TD_4572_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_527408_s, &tv_r_Sort_2_527408_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3311_output: " << tbl_Aggregate_TD_3311_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_786713_s, &tv_r_LocalLimit_1_786713_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2585_output: " << tbl_Sort_TD_2585_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_867265_s, &tv_r_GlobalLimit_0_867265_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_194_output: " << tbl_LocalLimit_TD_194_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.9802498 * 1000 << "ms" << std::endl; 
    return 0; 
}
