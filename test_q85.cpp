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

#include "cfgFunc_q85.hpp" 
#include "q85.hpp" 

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
    std::cout << "NOTE:running query #85\n."; 
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
    Table tbl_GlobalLimit_TD_0864_output("tbl_GlobalLimit_TD_0864_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0864_output.allocateHost();
    Table tbl_LocalLimit_TD_1624_output("tbl_LocalLimit_TD_1624_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1624_output.allocateHost();
    Table tbl_Sort_TD_284_output("tbl_Sort_TD_284_output", 6100000, 4, "");
    tbl_Sort_TD_284_output.allocateHost();
    Table tbl_Aggregate_TD_3334_output("tbl_Aggregate_TD_3334_output", 6100000, 4, "");
    tbl_Aggregate_TD_3334_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4880_output("tbl_JOIN_INNER_TD_4880_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_4880_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5991_output("tbl_JOIN_INNER_TD_5991_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5991_output.allocateHost();
    Table tbl_Filter_TD_5826_output("tbl_Filter_TD_5826_output", 6100000, 2, "");
    tbl_Filter_TD_5826_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6831_output("tbl_JOIN_INNER_TD_6831_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6831_output.allocateHost();
    Table tbl_Filter_TD_6628_output("tbl_Filter_TD_6628_output", 6100000, 1, "");
    tbl_Filter_TD_6628_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6600_input;
    tbl_SerializeFromObject_TD_6600_input = Table("reason", reason_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6600_input.addCol("r_reason_sk", 4);
    tbl_SerializeFromObject_TD_6600_input.addCol("r_reason_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6600_input.allocateHost();
    tbl_SerializeFromObject_TD_6600_input.loadHost();
    Table tbl_JOIN_INNER_TD_7466_output("tbl_JOIN_INNER_TD_7466_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7466_output.allocateHost();
    Table tbl_Filter_TD_7168_output("tbl_Filter_TD_7168_output", 6100000, 2, "");
    tbl_Filter_TD_7168_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7441_input;
    tbl_SerializeFromObject_TD_7441_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7441_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7441_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7441_input.allocateHost();
    tbl_SerializeFromObject_TD_7441_input.loadHost();
    Table tbl_JOIN_INNER_TD_8683_output("tbl_JOIN_INNER_TD_8683_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8683_output.allocateHost();
    Table tbl_Filter_TD_8315_output("tbl_Filter_TD_8315_output", 6100000, 3, "");
    tbl_Filter_TD_8315_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8398_input;
    tbl_SerializeFromObject_TD_8398_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8398_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8398_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8398_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8398_input.allocateHost();
    tbl_SerializeFromObject_TD_8398_input.loadHost();
    Table tbl_JOIN_INNER_TD_9831_output("tbl_JOIN_INNER_TD_9831_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_9831_output.allocateHost();
    Table tbl_Filter_TD_9665_output("tbl_Filter_TD_9665_output", 6100000, 3, "");
    tbl_Filter_TD_9665_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9484_input;
    tbl_SerializeFromObject_TD_9484_input = Table("customer_demographics", customer_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9484_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9484_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9484_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9484_input.allocateHost();
    tbl_SerializeFromObject_TD_9484_input.loadHost();
    Table tbl_JOIN_INNER_TD_10450_output("tbl_JOIN_INNER_TD_10450_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_10450_output.allocateHost();
    Table tbl_Filter_TD_10506_output("tbl_Filter_TD_10506_output", 6100000, 1, "");
    tbl_Filter_TD_10506_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10279_input;
    tbl_SerializeFromObject_TD_10279_input = Table("customer_demographics", customer_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10279_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_10279_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10279_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10279_input.allocateHost();
    tbl_SerializeFromObject_TD_10279_input.loadHost();
    Table tbl_Filter_TD_11340_output("tbl_Filter_TD_11340_output", 6100000, 7, "");
    tbl_Filter_TD_11340_output.allocateHost();
    Table tbl_Filter_TD_11778_output("tbl_Filter_TD_11778_output", 6100000, 8, "");
    tbl_Filter_TD_11778_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11764_input;
    tbl_SerializeFromObject_TD_11764_input = Table("web_page", web_page_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_11764_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_11764_input.allocateHost();
    tbl_SerializeFromObject_TD_11764_input.loadHost();
    Table tbl_SerializeFromObject_TD_12175_input;
    tbl_SerializeFromObject_TD_12175_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_12175_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12175_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_12175_input.addCol("ws_web_page_sk", 4);
    tbl_SerializeFromObject_TD_12175_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_12175_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_12175_input.addCol("ws_sales_price", 4);
    tbl_SerializeFromObject_TD_12175_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_12175_input.allocateHost();
    tbl_SerializeFromObject_TD_12175_input.loadHost();
    Table tbl_SerializeFromObject_TD_12661_input;
    tbl_SerializeFromObject_TD_12661_input = Table("web_returns", web_returns_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_12661_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_12661_input.addCol("wr_refunded_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_12661_input.addCol("wr_refunded_addr_sk", 4);
    tbl_SerializeFromObject_TD_12661_input.addCol("wr_returning_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_12661_input.addCol("wr_reason_sk", 4);
    tbl_SerializeFromObject_TD_12661_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_12661_input.addCol("wr_fee", 4);
    tbl_SerializeFromObject_TD_12661_input.addCol("wr_refunded_cash", 4);
    tbl_SerializeFromObject_TD_12661_input.allocateHost();
    tbl_SerializeFromObject_TD_12661_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_150276_s, tv_r_Filter_11_150276_e;
    gettimeofday(&tv_r_Filter_11_150276_s, 0);
    SW_Filter_TD_11778(tbl_SerializeFromObject_TD_12661_input, tbl_Filter_TD_11778_output);
    gettimeofday(&tv_r_Filter_11_150276_e, 0);

    struct timeval tv_r_Filter_11_482480_s, tv_r_Filter_11_482480_e;
    gettimeofday(&tv_r_Filter_11_482480_s, 0);
    SW_Filter_TD_11340(tbl_SerializeFromObject_TD_12175_input, tbl_Filter_TD_11340_output);
    gettimeofday(&tv_r_Filter_11_482480_e, 0);

    struct timeval tv_r_Filter_10_825873_s, tv_r_Filter_10_825873_e;
    gettimeofday(&tv_r_Filter_10_825873_s, 0);
    SW_Filter_TD_10506(tbl_SerializeFromObject_TD_11764_input, tbl_Filter_TD_10506_output);
    gettimeofday(&tv_r_Filter_10_825873_e, 0);

    struct timeval tv_r_JOIN_INNER_10_505670_s, tv_r_JOIN_INNER_10_505670_e;
    gettimeofday(&tv_r_JOIN_INNER_10_505670_s, 0);
    SW_JOIN_INNER_TD_10450(tbl_Filter_TD_11340_output, tbl_Filter_TD_11778_output, tbl_JOIN_INNER_TD_10450_output);
    gettimeofday(&tv_r_JOIN_INNER_10_505670_e, 0);

    struct timeval tv_r_Filter_9_357338_s, tv_r_Filter_9_357338_e;
    gettimeofday(&tv_r_Filter_9_357338_s, 0);
    SW_Filter_TD_9665(tbl_SerializeFromObject_TD_10279_input, tbl_Filter_TD_9665_output);
    gettimeofday(&tv_r_Filter_9_357338_e, 0);

    struct timeval tv_r_JOIN_INNER_9_158919_s, tv_r_JOIN_INNER_9_158919_e;
    gettimeofday(&tv_r_JOIN_INNER_9_158919_s, 0);
    SW_JOIN_INNER_TD_9831(tbl_JOIN_INNER_TD_10450_output, tbl_Filter_TD_10506_output, tbl_JOIN_INNER_TD_9831_output);
    gettimeofday(&tv_r_JOIN_INNER_9_158919_e, 0);

    struct timeval tv_r_Filter_8_562945_s, tv_r_Filter_8_562945_e;
    gettimeofday(&tv_r_Filter_8_562945_s, 0);
    SW_Filter_TD_8315(tbl_SerializeFromObject_TD_9484_input, tbl_Filter_TD_8315_output);
    gettimeofday(&tv_r_Filter_8_562945_e, 0);

    struct timeval tv_r_JOIN_INNER_8_895622_s, tv_r_JOIN_INNER_8_895622_e;
    gettimeofday(&tv_r_JOIN_INNER_8_895622_s, 0);
    SW_JOIN_INNER_TD_8683(tbl_JOIN_INNER_TD_9831_output, tbl_Filter_TD_9665_output, tbl_JOIN_INNER_TD_8683_output);
    gettimeofday(&tv_r_JOIN_INNER_8_895622_e, 0);

    struct timeval tv_r_Filter_7_139881_s, tv_r_Filter_7_139881_e;
    gettimeofday(&tv_r_Filter_7_139881_s, 0);
    SW_Filter_TD_7168(tbl_SerializeFromObject_TD_8398_input, tbl_Filter_TD_7168_output);
    gettimeofday(&tv_r_Filter_7_139881_e, 0);

    struct timeval tv_r_JOIN_INNER_7_323600_s, tv_r_JOIN_INNER_7_323600_e;
    gettimeofday(&tv_r_JOIN_INNER_7_323600_s, 0);
    SW_JOIN_INNER_TD_7466(tbl_JOIN_INNER_TD_8683_output, tbl_Filter_TD_8315_output, tbl_JOIN_INNER_TD_7466_output);
    gettimeofday(&tv_r_JOIN_INNER_7_323600_e, 0);

    struct timeval tv_r_Filter_6_591533_s, tv_r_Filter_6_591533_e;
    gettimeofday(&tv_r_Filter_6_591533_s, 0);
    SW_Filter_TD_6628(tbl_SerializeFromObject_TD_7441_input, tbl_Filter_TD_6628_output);
    gettimeofday(&tv_r_Filter_6_591533_e, 0);

    struct timeval tv_r_JOIN_INNER_6_31588_s, tv_r_JOIN_INNER_6_31588_e;
    gettimeofday(&tv_r_JOIN_INNER_6_31588_s, 0);
    SW_JOIN_INNER_TD_6831(tbl_JOIN_INNER_TD_7466_output, tbl_Filter_TD_7168_output, tbl_JOIN_INNER_TD_6831_output);
    gettimeofday(&tv_r_JOIN_INNER_6_31588_e, 0);

    struct timeval tv_r_Filter_5_456329_s, tv_r_Filter_5_456329_e;
    gettimeofday(&tv_r_Filter_5_456329_s, 0);
    SW_Filter_TD_5826(tbl_SerializeFromObject_TD_6600_input, tbl_Filter_TD_5826_output);
    gettimeofday(&tv_r_Filter_5_456329_e, 0);

    struct timeval tv_r_JOIN_INNER_5_818367_s, tv_r_JOIN_INNER_5_818367_e;
    gettimeofday(&tv_r_JOIN_INNER_5_818367_s, 0);
    SW_JOIN_INNER_TD_5991(tbl_JOIN_INNER_TD_6831_output, tbl_Filter_TD_6628_output, tbl_JOIN_INNER_TD_5991_output);
    gettimeofday(&tv_r_JOIN_INNER_5_818367_e, 0);

    struct timeval tv_r_JOIN_INNER_4_420945_s, tv_r_JOIN_INNER_4_420945_e;
    gettimeofday(&tv_r_JOIN_INNER_4_420945_s, 0);
    SW_JOIN_INNER_TD_4880(tbl_JOIN_INNER_TD_5991_output, tbl_Filter_TD_5826_output, tbl_JOIN_INNER_TD_4880_output);
    gettimeofday(&tv_r_JOIN_INNER_4_420945_e, 0);

    struct timeval tv_r_Aggregate_3_820985_s, tv_r_Aggregate_3_820985_e;
    gettimeofday(&tv_r_Aggregate_3_820985_s, 0);
    SW_Aggregate_TD_3334(tbl_JOIN_INNER_TD_4880_output, tbl_Aggregate_TD_3334_output);
    gettimeofday(&tv_r_Aggregate_3_820985_e, 0);

    struct timeval tv_r_Sort_2_786290_s, tv_r_Sort_2_786290_e;
    gettimeofday(&tv_r_Sort_2_786290_s, 0);
    SW_Sort_TD_284(tbl_Aggregate_TD_3334_output, tbl_Sort_TD_284_output);
    gettimeofday(&tv_r_Sort_2_786290_e, 0);

    struct timeval tv_r_LocalLimit_1_250306_s, tv_r_LocalLimit_1_250306_e;
    gettimeofday(&tv_r_LocalLimit_1_250306_s, 0);
    SW_LocalLimit_TD_1624(tbl_Sort_TD_284_output, tbl_LocalLimit_TD_1624_output);
    gettimeofday(&tv_r_LocalLimit_1_250306_e, 0);

    struct timeval tv_r_GlobalLimit_0_838698_s, tv_r_GlobalLimit_0_838698_e;
    gettimeofday(&tv_r_GlobalLimit_0_838698_s, 0);
    SW_GlobalLimit_TD_0864(tbl_LocalLimit_TD_1624_output, tbl_GlobalLimit_TD_0864_output);
    gettimeofday(&tv_r_GlobalLimit_0_838698_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_150276_s, &tv_r_Filter_11_150276_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12661_input: " << tbl_SerializeFromObject_TD_12661_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_482480_s, &tv_r_Filter_11_482480_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12175_input: " << tbl_SerializeFromObject_TD_12175_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_825873_s, &tv_r_Filter_10_825873_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11764_input: " << tbl_SerializeFromObject_TD_11764_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_505670_s, &tv_r_JOIN_INNER_10_505670_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11340_output: " << tbl_Filter_TD_11340_output.getNumRow() << " " << "tbl_Filter_TD_11778_output: " << tbl_Filter_TD_11778_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_357338_s, &tv_r_Filter_9_357338_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10279_input: " << tbl_SerializeFromObject_TD_10279_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_158919_s, &tv_r_JOIN_INNER_9_158919_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10450_output: " << tbl_JOIN_INNER_TD_10450_output.getNumRow() << " " << "tbl_Filter_TD_10506_output: " << tbl_Filter_TD_10506_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_562945_s, &tv_r_Filter_8_562945_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9484_input: " << tbl_SerializeFromObject_TD_9484_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_895622_s, &tv_r_JOIN_INNER_8_895622_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9831_output: " << tbl_JOIN_INNER_TD_9831_output.getNumRow() << " " << "tbl_Filter_TD_9665_output: " << tbl_Filter_TD_9665_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_139881_s, &tv_r_Filter_7_139881_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8398_input: " << tbl_SerializeFromObject_TD_8398_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_323600_s, &tv_r_JOIN_INNER_7_323600_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8683_output: " << tbl_JOIN_INNER_TD_8683_output.getNumRow() << " " << "tbl_Filter_TD_8315_output: " << tbl_Filter_TD_8315_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_591533_s, &tv_r_Filter_6_591533_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7441_input: " << tbl_SerializeFromObject_TD_7441_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_31588_s, &tv_r_JOIN_INNER_6_31588_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7466_output: " << tbl_JOIN_INNER_TD_7466_output.getNumRow() << " " << "tbl_Filter_TD_7168_output: " << tbl_Filter_TD_7168_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_456329_s, &tv_r_Filter_5_456329_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6600_input: " << tbl_SerializeFromObject_TD_6600_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_818367_s, &tv_r_JOIN_INNER_5_818367_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6831_output: " << tbl_JOIN_INNER_TD_6831_output.getNumRow() << " " << "tbl_Filter_TD_6628_output: " << tbl_Filter_TD_6628_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_420945_s, &tv_r_JOIN_INNER_4_420945_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5991_output: " << tbl_JOIN_INNER_TD_5991_output.getNumRow() << " " << "tbl_Filter_TD_5826_output: " << tbl_Filter_TD_5826_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_820985_s, &tv_r_Aggregate_3_820985_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4880_output: " << tbl_JOIN_INNER_TD_4880_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_786290_s, &tv_r_Sort_2_786290_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3334_output: " << tbl_Aggregate_TD_3334_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_250306_s, &tv_r_LocalLimit_1_250306_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_284_output: " << tbl_Sort_TD_284_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_838698_s, &tv_r_GlobalLimit_0_838698_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1624_output: " << tbl_LocalLimit_TD_1624_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.427385 * 1000 << "ms" << std::endl; 
    return 0; 
}
