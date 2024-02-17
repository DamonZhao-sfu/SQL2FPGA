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

#include "cfgFunc_q76.hpp" 
#include "q76.hpp" 

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
    std::cout << "NOTE:running query #76\n."; 
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
    Table tbl_GlobalLimit_TD_0129_output("tbl_GlobalLimit_TD_0129_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0129_output.allocateHost();
    Table tbl_LocalLimit_TD_1798_output("tbl_LocalLimit_TD_1798_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1798_output.allocateHost();
    Table tbl_Sort_TD_2966_output("tbl_Sort_TD_2966_output", 6100000, 7, "");
    tbl_Sort_TD_2966_output.allocateHost();
    Table tbl_Aggregate_TD_3931_output("tbl_Aggregate_TD_3931_output", 6100000, 7, "");
    tbl_Aggregate_TD_3931_output.allocateHost();
    Table tbl_Union_TD_4792_output("tbl_Union_TD_4792_output", 6100000, 6, "");
    tbl_Union_TD_4792_output.allocateHost();
    Table tbl_Project_TD_5741_output("tbl_Project_TD_5741_output", 6100000, 6, "");
    tbl_Project_TD_5741_output.allocateHost();
    Table tbl_Project_TD_5567_output("tbl_Project_TD_5567_output", 6100000, 6, "");
    tbl_Project_TD_5567_output.allocateHost();
    Table tbl_Project_TD_5271_output("tbl_Project_TD_5271_output", 6100000, 6, "");
    tbl_Project_TD_5271_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6988_output("tbl_JOIN_INNER_TD_6988_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6988_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6627_output("tbl_JOIN_INNER_TD_6627_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6627_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6434_output("tbl_JOIN_INNER_TD_6434_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6434_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7711_output("tbl_JOIN_INNER_TD_7711_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7711_output.allocateHost();
    Table tbl_Filter_TD_7875_output("tbl_Filter_TD_7875_output", 6100000, 3, "");
    tbl_Filter_TD_7875_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7937_output("tbl_JOIN_INNER_TD_7937_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7937_output.allocateHost();
    Table tbl_Filter_TD_779_output("tbl_Filter_TD_779_output", 6100000, 3, "");
    tbl_Filter_TD_779_output.allocateHost();
    Table tbl_JOIN_INNER_TD_767_output("tbl_JOIN_INNER_TD_767_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_767_output.allocateHost();
    Table tbl_Filter_TD_7540_output("tbl_Filter_TD_7540_output", 6100000, 3, "");
    tbl_Filter_TD_7540_output.allocateHost();
    Table tbl_Filter_TD_8486_output("tbl_Filter_TD_8486_output", 6100000, 4, "");
    tbl_Filter_TD_8486_output.allocateHost();
    Table tbl_Filter_TD_8801_output("tbl_Filter_TD_8801_output", 6100000, 2, "");
    tbl_Filter_TD_8801_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8993_input;
    tbl_SerializeFromObject_TD_8993_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8993_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8993_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8993_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8993_input.allocateHost();
    tbl_SerializeFromObject_TD_8993_input.loadHost();
    Table tbl_Filter_TD_8760_output("tbl_Filter_TD_8760_output", 6100000, 4, "");
    tbl_Filter_TD_8760_output.allocateHost();
    Table tbl_Filter_TD_8221_output("tbl_Filter_TD_8221_output", 6100000, 2, "");
    tbl_Filter_TD_8221_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8569_input;
    tbl_SerializeFromObject_TD_8569_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8569_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8569_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8569_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8569_input.allocateHost();
    tbl_SerializeFromObject_TD_8569_input.loadHost();
    Table tbl_Filter_TD_8523_output("tbl_Filter_TD_8523_output", 6100000, 4, "");
    tbl_Filter_TD_8523_output.allocateHost();
    Table tbl_Filter_TD_8788_output("tbl_Filter_TD_8788_output", 6100000, 2, "");
    tbl_Filter_TD_8788_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8603_input;
    tbl_SerializeFromObject_TD_8603_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8603_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8603_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8603_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8603_input.allocateHost();
    tbl_SerializeFromObject_TD_8603_input.loadHost();
    Table tbl_SerializeFromObject_TD_9196_input;
    tbl_SerializeFromObject_TD_9196_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9196_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9196_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9196_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9196_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9196_input.allocateHost();
    tbl_SerializeFromObject_TD_9196_input.loadHost();
    Table tbl_SerializeFromObject_TD_9415_input;
    tbl_SerializeFromObject_TD_9415_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9415_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9415_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9415_input.allocateHost();
    tbl_SerializeFromObject_TD_9415_input.loadHost();
    Table tbl_SerializeFromObject_TD_9438_input;
    tbl_SerializeFromObject_TD_9438_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9438_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9438_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_9438_input.addCol("ws_ship_customer_sk", 4);
    tbl_SerializeFromObject_TD_9438_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9438_input.allocateHost();
    tbl_SerializeFromObject_TD_9438_input.loadHost();
    Table tbl_SerializeFromObject_TD_9676_input;
    tbl_SerializeFromObject_TD_9676_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9676_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9676_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9676_input.allocateHost();
    tbl_SerializeFromObject_TD_9676_input.loadHost();
    Table tbl_SerializeFromObject_TD_9973_input;
    tbl_SerializeFromObject_TD_9973_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9973_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9973_input.addCol("cs_ship_addr_sk", 4);
    tbl_SerializeFromObject_TD_9973_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_9973_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9973_input.allocateHost();
    tbl_SerializeFromObject_TD_9973_input.loadHost();
    Table tbl_SerializeFromObject_TD_9127_input;
    tbl_SerializeFromObject_TD_9127_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9127_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9127_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9127_input.allocateHost();
    tbl_SerializeFromObject_TD_9127_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_300307_s, tv_r_Filter_8_300307_e;
    gettimeofday(&tv_r_Filter_8_300307_s, 0);
    SW_Filter_TD_8788(tbl_SerializeFromObject_TD_9127_input, tbl_Filter_TD_8788_output);
    gettimeofday(&tv_r_Filter_8_300307_e, 0);

    struct timeval tv_r_Filter_8_423108_s, tv_r_Filter_8_423108_e;
    gettimeofday(&tv_r_Filter_8_423108_s, 0);
    SW_Filter_TD_8523(tbl_SerializeFromObject_TD_9973_input, tbl_Filter_TD_8523_output);
    gettimeofday(&tv_r_Filter_8_423108_e, 0);

    struct timeval tv_r_Filter_8_255722_s, tv_r_Filter_8_255722_e;
    gettimeofday(&tv_r_Filter_8_255722_s, 0);
    SW_Filter_TD_8221(tbl_SerializeFromObject_TD_9676_input, tbl_Filter_TD_8221_output);
    gettimeofday(&tv_r_Filter_8_255722_e, 0);

    struct timeval tv_r_Filter_8_671510_s, tv_r_Filter_8_671510_e;
    gettimeofday(&tv_r_Filter_8_671510_s, 0);
    SW_Filter_TD_8760(tbl_SerializeFromObject_TD_9438_input, tbl_Filter_TD_8760_output);
    gettimeofday(&tv_r_Filter_8_671510_e, 0);

    struct timeval tv_r_Filter_8_481807_s, tv_r_Filter_8_481807_e;
    gettimeofday(&tv_r_Filter_8_481807_s, 0);
    SW_Filter_TD_8801(tbl_SerializeFromObject_TD_9415_input, tbl_Filter_TD_8801_output);
    gettimeofday(&tv_r_Filter_8_481807_e, 0);

    struct timeval tv_r_Filter_8_864154_s, tv_r_Filter_8_864154_e;
    gettimeofday(&tv_r_Filter_8_864154_s, 0);
    SW_Filter_TD_8486(tbl_SerializeFromObject_TD_9196_input, tbl_Filter_TD_8486_output);
    gettimeofday(&tv_r_Filter_8_864154_e, 0);

    struct timeval tv_r_Filter_7_203194_s, tv_r_Filter_7_203194_e;
    gettimeofday(&tv_r_Filter_7_203194_s, 0);
    SW_Filter_TD_7540(tbl_SerializeFromObject_TD_8603_input, tbl_Filter_TD_7540_output);
    gettimeofday(&tv_r_Filter_7_203194_e, 0);

    struct timeval tv_r_JOIN_INNER_7_476197_s, tv_r_JOIN_INNER_7_476197_e;
    gettimeofday(&tv_r_JOIN_INNER_7_476197_s, 0);
    SW_JOIN_INNER_TD_767(tbl_Filter_TD_8523_output, tbl_Filter_TD_8788_output, tbl_JOIN_INNER_TD_767_output);
    gettimeofday(&tv_r_JOIN_INNER_7_476197_e, 0);

    struct timeval tv_r_Filter_7_914605_s, tv_r_Filter_7_914605_e;
    gettimeofday(&tv_r_Filter_7_914605_s, 0);
    SW_Filter_TD_779(tbl_SerializeFromObject_TD_8569_input, tbl_Filter_TD_779_output);
    gettimeofday(&tv_r_Filter_7_914605_e, 0);

    struct timeval tv_r_JOIN_INNER_7_346178_s, tv_r_JOIN_INNER_7_346178_e;
    gettimeofday(&tv_r_JOIN_INNER_7_346178_s, 0);
    SW_JOIN_INNER_TD_7937(tbl_Filter_TD_8760_output, tbl_Filter_TD_8221_output, tbl_JOIN_INNER_TD_7937_output);
    gettimeofday(&tv_r_JOIN_INNER_7_346178_e, 0);

    struct timeval tv_r_Filter_7_931226_s, tv_r_Filter_7_931226_e;
    gettimeofday(&tv_r_Filter_7_931226_s, 0);
    SW_Filter_TD_7875(tbl_SerializeFromObject_TD_8993_input, tbl_Filter_TD_7875_output);
    gettimeofday(&tv_r_Filter_7_931226_e, 0);

    struct timeval tv_r_JOIN_INNER_7_684623_s, tv_r_JOIN_INNER_7_684623_e;
    gettimeofday(&tv_r_JOIN_INNER_7_684623_s, 0);
    SW_JOIN_INNER_TD_7711(tbl_Filter_TD_8486_output, tbl_Filter_TD_8801_output, tbl_JOIN_INNER_TD_7711_output);
    gettimeofday(&tv_r_JOIN_INNER_7_684623_e, 0);

    struct timeval tv_r_JOIN_INNER_6_557487_s, tv_r_JOIN_INNER_6_557487_e;
    gettimeofday(&tv_r_JOIN_INNER_6_557487_s, 0);
    SW_JOIN_INNER_TD_6434(tbl_JOIN_INNER_TD_767_output, tbl_Filter_TD_7540_output, tbl_JOIN_INNER_TD_6434_output);
    gettimeofday(&tv_r_JOIN_INNER_6_557487_e, 0);

    struct timeval tv_r_JOIN_INNER_6_549801_s, tv_r_JOIN_INNER_6_549801_e;
    gettimeofday(&tv_r_JOIN_INNER_6_549801_s, 0);
    SW_JOIN_INNER_TD_6627(tbl_JOIN_INNER_TD_7937_output, tbl_Filter_TD_779_output, tbl_JOIN_INNER_TD_6627_output);
    gettimeofday(&tv_r_JOIN_INNER_6_549801_e, 0);

    struct timeval tv_r_JOIN_INNER_6_624466_s, tv_r_JOIN_INNER_6_624466_e;
    gettimeofday(&tv_r_JOIN_INNER_6_624466_s, 0);
    SW_JOIN_INNER_TD_6988(tbl_JOIN_INNER_TD_7711_output, tbl_Filter_TD_7875_output, tbl_JOIN_INNER_TD_6988_output);
    gettimeofday(&tv_r_JOIN_INNER_6_624466_e, 0);

    struct timeval tv_r_Project_5_569709_s, tv_r_Project_5_569709_e;
    gettimeofday(&tv_r_Project_5_569709_s, 0);
    SW_Project_TD_5271(tbl_JOIN_INNER_TD_6434_output, tbl_Project_TD_5271_output);
    gettimeofday(&tv_r_Project_5_569709_e, 0);

    struct timeval tv_r_Project_5_423983_s, tv_r_Project_5_423983_e;
    gettimeofday(&tv_r_Project_5_423983_s, 0);
    SW_Project_TD_5567(tbl_JOIN_INNER_TD_6627_output, tbl_Project_TD_5567_output);
    gettimeofday(&tv_r_Project_5_423983_e, 0);

    struct timeval tv_r_Project_5_722125_s, tv_r_Project_5_722125_e;
    gettimeofday(&tv_r_Project_5_722125_s, 0);
    SW_Project_TD_5741(tbl_JOIN_INNER_TD_6988_output, tbl_Project_TD_5741_output);
    gettimeofday(&tv_r_Project_5_722125_e, 0);

    struct timeval tv_r_Union_4_8477_s, tv_r_Union_4_8477_e;
    gettimeofday(&tv_r_Union_4_8477_s, 0);
    SW_Union_TD_4792(tbl_Project_TD_5741_output, tbl_Project_TD_5567_output, tbl_Project_TD_5271_output, tbl_Union_TD_4792_output);
    gettimeofday(&tv_r_Union_4_8477_e, 0);

    struct timeval tv_r_Aggregate_3_867660_s, tv_r_Aggregate_3_867660_e;
    gettimeofday(&tv_r_Aggregate_3_867660_s, 0);
    SW_Aggregate_TD_3931(tbl_Union_TD_4792_output, tbl_Aggregate_TD_3931_output);
    gettimeofday(&tv_r_Aggregate_3_867660_e, 0);

    struct timeval tv_r_Sort_2_224571_s, tv_r_Sort_2_224571_e;
    gettimeofday(&tv_r_Sort_2_224571_s, 0);
    SW_Sort_TD_2966(tbl_Aggregate_TD_3931_output, tbl_Sort_TD_2966_output);
    gettimeofday(&tv_r_Sort_2_224571_e, 0);

    struct timeval tv_r_LocalLimit_1_94028_s, tv_r_LocalLimit_1_94028_e;
    gettimeofday(&tv_r_LocalLimit_1_94028_s, 0);
    SW_LocalLimit_TD_1798(tbl_Sort_TD_2966_output, tbl_LocalLimit_TD_1798_output);
    gettimeofday(&tv_r_LocalLimit_1_94028_e, 0);

    struct timeval tv_r_GlobalLimit_0_794832_s, tv_r_GlobalLimit_0_794832_e;
    gettimeofday(&tv_r_GlobalLimit_0_794832_s, 0);
    SW_GlobalLimit_TD_0129(tbl_LocalLimit_TD_1798_output, tbl_GlobalLimit_TD_0129_output);
    gettimeofday(&tv_r_GlobalLimit_0_794832_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_300307_s, &tv_r_Filter_8_300307_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9127_input: " << tbl_SerializeFromObject_TD_9127_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_423108_s, &tv_r_Filter_8_423108_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9973_input: " << tbl_SerializeFromObject_TD_9973_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_255722_s, &tv_r_Filter_8_255722_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9676_input: " << tbl_SerializeFromObject_TD_9676_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_671510_s, &tv_r_Filter_8_671510_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9438_input: " << tbl_SerializeFromObject_TD_9438_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_481807_s, &tv_r_Filter_8_481807_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9415_input: " << tbl_SerializeFromObject_TD_9415_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_864154_s, &tv_r_Filter_8_864154_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9196_input: " << tbl_SerializeFromObject_TD_9196_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_203194_s, &tv_r_Filter_7_203194_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8603_input: " << tbl_SerializeFromObject_TD_8603_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_476197_s, &tv_r_JOIN_INNER_7_476197_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8523_output: " << tbl_Filter_TD_8523_output.getNumRow() << " " << "tbl_Filter_TD_8788_output: " << tbl_Filter_TD_8788_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_914605_s, &tv_r_Filter_7_914605_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8569_input: " << tbl_SerializeFromObject_TD_8569_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_346178_s, &tv_r_JOIN_INNER_7_346178_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8760_output: " << tbl_Filter_TD_8760_output.getNumRow() << " " << "tbl_Filter_TD_8221_output: " << tbl_Filter_TD_8221_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_931226_s, &tv_r_Filter_7_931226_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8993_input: " << tbl_SerializeFromObject_TD_8993_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_684623_s, &tv_r_JOIN_INNER_7_684623_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8486_output: " << tbl_Filter_TD_8486_output.getNumRow() << " " << "tbl_Filter_TD_8801_output: " << tbl_Filter_TD_8801_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_557487_s, &tv_r_JOIN_INNER_6_557487_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_767_output: " << tbl_JOIN_INNER_TD_767_output.getNumRow() << " " << "tbl_Filter_TD_7540_output: " << tbl_Filter_TD_7540_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_549801_s, &tv_r_JOIN_INNER_6_549801_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7937_output: " << tbl_JOIN_INNER_TD_7937_output.getNumRow() << " " << "tbl_Filter_TD_779_output: " << tbl_Filter_TD_779_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_624466_s, &tv_r_JOIN_INNER_6_624466_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7711_output: " << tbl_JOIN_INNER_TD_7711_output.getNumRow() << " " << "tbl_Filter_TD_7875_output: " << tbl_Filter_TD_7875_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_569709_s, &tv_r_Project_5_569709_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6434_output: " << tbl_JOIN_INNER_TD_6434_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_423983_s, &tv_r_Project_5_423983_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6627_output: " << tbl_JOIN_INNER_TD_6627_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_722125_s, &tv_r_Project_5_722125_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6988_output: " << tbl_JOIN_INNER_TD_6988_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_8477_s, &tv_r_Union_4_8477_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5741_output: " << tbl_Project_TD_5741_output.getNumRow() << " " << "tbl_Project_TD_5567_output: " << tbl_Project_TD_5567_output.getNumRow() << " " << "tbl_Project_TD_5271_output: " << tbl_Project_TD_5271_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_867660_s, &tv_r_Aggregate_3_867660_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4792_output: " << tbl_Union_TD_4792_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_224571_s, &tv_r_Sort_2_224571_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3931_output: " << tbl_Aggregate_TD_3931_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_94028_s, &tv_r_LocalLimit_1_94028_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2966_output: " << tbl_Sort_TD_2966_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_794832_s, &tv_r_GlobalLimit_0_794832_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1798_output: " << tbl_LocalLimit_TD_1798_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.0955868 * 1000 << "ms" << std::endl; 
    return 0; 
}
