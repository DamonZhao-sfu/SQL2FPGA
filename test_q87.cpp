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

#include "cfgFunc_q87.hpp" 
#include "q87.hpp" 

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
    std::cout << "NOTE:running query #87\n."; 
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
    Table tbl_Aggregate_TD_0563_output("tbl_Aggregate_TD_0563_output", 6100000, 1, "");
    tbl_Aggregate_TD_0563_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_2345_output("tbl_JOIN_LEFTANTI_TD_2345_output", 6100000, 3, "");
    tbl_JOIN_LEFTANTI_TD_2345_output.allocateHost();
    Table tbl_Aggregate_TD_38_output("tbl_Aggregate_TD_38_output", 6100000, 3, "");
    tbl_Aggregate_TD_38_output.allocateHost();
    Table tbl_Aggregate_TD_3399_output("tbl_Aggregate_TD_3399_output", 6100000, 3, "");
    tbl_Aggregate_TD_3399_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_4648_output("tbl_JOIN_LEFTANTI_TD_4648_output", 6100000, 3, "");
    tbl_JOIN_LEFTANTI_TD_4648_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4663_output("tbl_JOIN_INNER_TD_4663_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4663_output.allocateHost();
    Table tbl_Aggregate_TD_5601_output("tbl_Aggregate_TD_5601_output", 6100000, 3, "");
    tbl_Aggregate_TD_5601_output.allocateHost();
    Table tbl_Aggregate_TD_5729_output("tbl_Aggregate_TD_5729_output", 6100000, 3, "");
    tbl_Aggregate_TD_5729_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5178_output("tbl_JOIN_INNER_TD_5178_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5178_output.allocateHost();
    Table tbl_Filter_TD_5716_output("tbl_Filter_TD_5716_output", 6100000, 3, "");
    tbl_Filter_TD_5716_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6126_output("tbl_JOIN_INNER_TD_6126_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6126_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6515_output("tbl_JOIN_INNER_TD_6515_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6515_output.allocateHost();
    Table tbl_Filter_TD_6202_output("tbl_Filter_TD_6202_output", 6100000, 2, "");
    tbl_Filter_TD_6202_output.allocateHost();
    Table tbl_Filter_TD_6823_output("tbl_Filter_TD_6823_output", 6100000, 2, "");
    tbl_Filter_TD_6823_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6109_input;
    tbl_SerializeFromObject_TD_6109_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6109_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6109_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6109_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6109_input.allocateHost();
    tbl_SerializeFromObject_TD_6109_input.loadHost();
    Table tbl_JOIN_INNER_TD_769_output("tbl_JOIN_INNER_TD_769_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_769_output.allocateHost();
    Table tbl_Filter_TD_7915_output("tbl_Filter_TD_7915_output", 6100000, 3, "");
    tbl_Filter_TD_7915_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7693_output("tbl_JOIN_INNER_TD_7693_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7693_output.allocateHost();
    Table tbl_Filter_TD_786_output("tbl_Filter_TD_786_output", 6100000, 3, "");
    tbl_Filter_TD_786_output.allocateHost();
    Table tbl_SerializeFromObject_TD_73_input;
    tbl_SerializeFromObject_TD_73_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_73_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_73_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_73_input.allocateHost();
    tbl_SerializeFromObject_TD_73_input.loadHost();
    Table tbl_SerializeFromObject_TD_7614_input;
    tbl_SerializeFromObject_TD_7614_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7614_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7614_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7614_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7614_input.allocateHost();
    tbl_SerializeFromObject_TD_7614_input.loadHost();
    Table tbl_Filter_TD_8900_output("tbl_Filter_TD_8900_output", 6100000, 2, "");
    tbl_Filter_TD_8900_output.allocateHost();
    Table tbl_Filter_TD_822_output("tbl_Filter_TD_822_output", 6100000, 2, "");
    tbl_Filter_TD_822_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8274_input;
    tbl_SerializeFromObject_TD_8274_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8274_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8274_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8274_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8274_input.allocateHost();
    tbl_SerializeFromObject_TD_8274_input.loadHost();
    Table tbl_Filter_TD_8833_output("tbl_Filter_TD_8833_output", 6100000, 2, "");
    tbl_Filter_TD_8833_output.allocateHost();
    Table tbl_Filter_TD_8317_output("tbl_Filter_TD_8317_output", 6100000, 2, "");
    tbl_Filter_TD_8317_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8762_input;
    tbl_SerializeFromObject_TD_8762_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8762_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8762_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8762_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8762_input.allocateHost();
    tbl_SerializeFromObject_TD_8762_input.loadHost();
    Table tbl_SerializeFromObject_TD_9672_input;
    tbl_SerializeFromObject_TD_9672_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9672_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9672_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9672_input.allocateHost();
    tbl_SerializeFromObject_TD_9672_input.loadHost();
    Table tbl_SerializeFromObject_TD_9982_input;
    tbl_SerializeFromObject_TD_9982_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9982_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9982_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9982_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9982_input.allocateHost();
    tbl_SerializeFromObject_TD_9982_input.loadHost();
    Table tbl_SerializeFromObject_TD_9476_input;
    tbl_SerializeFromObject_TD_9476_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9476_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9476_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_9476_input.allocateHost();
    tbl_SerializeFromObject_TD_9476_input.loadHost();
    Table tbl_SerializeFromObject_TD_9944_input;
    tbl_SerializeFromObject_TD_9944_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9944_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9944_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9944_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9944_input.allocateHost();
    tbl_SerializeFromObject_TD_9944_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_813291_s, tv_r_Filter_8_813291_e;
    gettimeofday(&tv_r_Filter_8_813291_s, 0);
    SW_Filter_TD_8317(tbl_SerializeFromObject_TD_9944_input, tbl_Filter_TD_8317_output);
    gettimeofday(&tv_r_Filter_8_813291_e, 0);

    struct timeval tv_r_Filter_8_492776_s, tv_r_Filter_8_492776_e;
    gettimeofday(&tv_r_Filter_8_492776_s, 0);
    SW_Filter_TD_8833(tbl_SerializeFromObject_TD_9476_input, tbl_Filter_TD_8833_output);
    gettimeofday(&tv_r_Filter_8_492776_e, 0);

    struct timeval tv_r_Filter_8_220198_s, tv_r_Filter_8_220198_e;
    gettimeofday(&tv_r_Filter_8_220198_s, 0);
    SW_Filter_TD_822(tbl_SerializeFromObject_TD_9982_input, tbl_Filter_TD_822_output);
    gettimeofday(&tv_r_Filter_8_220198_e, 0);

    struct timeval tv_r_Filter_8_279714_s, tv_r_Filter_8_279714_e;
    gettimeofday(&tv_r_Filter_8_279714_s, 0);
    SW_Filter_TD_8900(tbl_SerializeFromObject_TD_9672_input, tbl_Filter_TD_8900_output);
    gettimeofday(&tv_r_Filter_8_279714_e, 0);

    struct timeval tv_r_Filter_7_401949_s, tv_r_Filter_7_401949_e;
    gettimeofday(&tv_r_Filter_7_401949_s, 0);
    SW_Filter_TD_786(tbl_SerializeFromObject_TD_8762_input, tbl_Filter_TD_786_output);
    gettimeofday(&tv_r_Filter_7_401949_e, 0);

    struct timeval tv_r_JOIN_INNER_7_918173_s, tv_r_JOIN_INNER_7_918173_e;
    gettimeofday(&tv_r_JOIN_INNER_7_918173_s, 0);
    SW_JOIN_INNER_TD_7693(tbl_Filter_TD_8833_output, tbl_Filter_TD_8317_output, tbl_JOIN_INNER_TD_7693_output);
    gettimeofday(&tv_r_JOIN_INNER_7_918173_e, 0);

    struct timeval tv_r_Filter_7_52310_s, tv_r_Filter_7_52310_e;
    gettimeofday(&tv_r_Filter_7_52310_s, 0);
    SW_Filter_TD_7915(tbl_SerializeFromObject_TD_8274_input, tbl_Filter_TD_7915_output);
    gettimeofday(&tv_r_Filter_7_52310_e, 0);

    struct timeval tv_r_JOIN_INNER_7_496663_s, tv_r_JOIN_INNER_7_496663_e;
    gettimeofday(&tv_r_JOIN_INNER_7_496663_s, 0);
    SW_JOIN_INNER_TD_769(tbl_Filter_TD_8900_output, tbl_Filter_TD_822_output, tbl_JOIN_INNER_TD_769_output);
    gettimeofday(&tv_r_JOIN_INNER_7_496663_e, 0);

    struct timeval tv_r_Filter_6_613007_s, tv_r_Filter_6_613007_e;
    gettimeofday(&tv_r_Filter_6_613007_s, 0);
    SW_Filter_TD_6823(tbl_SerializeFromObject_TD_7614_input, tbl_Filter_TD_6823_output);
    gettimeofday(&tv_r_Filter_6_613007_e, 0);

    struct timeval tv_r_Filter_6_182629_s, tv_r_Filter_6_182629_e;
    gettimeofday(&tv_r_Filter_6_182629_s, 0);
    SW_Filter_TD_6202(tbl_SerializeFromObject_TD_73_input, tbl_Filter_TD_6202_output);
    gettimeofday(&tv_r_Filter_6_182629_e, 0);

    struct timeval tv_r_JOIN_INNER_6_350132_s, tv_r_JOIN_INNER_6_350132_e;
    gettimeofday(&tv_r_JOIN_INNER_6_350132_s, 0);
    SW_JOIN_INNER_TD_6515(tbl_JOIN_INNER_TD_7693_output, tbl_Filter_TD_786_output, tbl_JOIN_INNER_TD_6515_output);
    gettimeofday(&tv_r_JOIN_INNER_6_350132_e, 0);

    struct timeval tv_r_JOIN_INNER_6_64430_s, tv_r_JOIN_INNER_6_64430_e;
    gettimeofday(&tv_r_JOIN_INNER_6_64430_s, 0);
    SW_JOIN_INNER_TD_6126(tbl_JOIN_INNER_TD_769_output, tbl_Filter_TD_7915_output, tbl_JOIN_INNER_TD_6126_output);
    gettimeofday(&tv_r_JOIN_INNER_6_64430_e, 0);

    struct timeval tv_r_Filter_5_416552_s, tv_r_Filter_5_416552_e;
    gettimeofday(&tv_r_Filter_5_416552_s, 0);
    SW_Filter_TD_5716(tbl_SerializeFromObject_TD_6109_input, tbl_Filter_TD_5716_output);
    gettimeofday(&tv_r_Filter_5_416552_e, 0);

    struct timeval tv_r_JOIN_INNER_5_980443_s, tv_r_JOIN_INNER_5_980443_e;
    gettimeofday(&tv_r_JOIN_INNER_5_980443_s, 0);
    SW_JOIN_INNER_TD_5178(tbl_Filter_TD_6202_output, tbl_Filter_TD_6823_output, tbl_JOIN_INNER_TD_5178_output);
    gettimeofday(&tv_r_JOIN_INNER_5_980443_e, 0);

    struct timeval tv_r_Aggregate_5_37226_s, tv_r_Aggregate_5_37226_e;
    gettimeofday(&tv_r_Aggregate_5_37226_s, 0);
    SW_Aggregate_TD_5729(tbl_JOIN_INNER_TD_6515_output, tbl_Aggregate_TD_5729_output);
    gettimeofday(&tv_r_Aggregate_5_37226_e, 0);

    struct timeval tv_r_Aggregate_5_908394_s, tv_r_Aggregate_5_908394_e;
    gettimeofday(&tv_r_Aggregate_5_908394_s, 0);
    SW_Aggregate_TD_5601(tbl_JOIN_INNER_TD_6126_output, tbl_Aggregate_TD_5601_output);
    gettimeofday(&tv_r_Aggregate_5_908394_e, 0);

    struct timeval tv_r_JOIN_INNER_4_806646_s, tv_r_JOIN_INNER_4_806646_e;
    gettimeofday(&tv_r_JOIN_INNER_4_806646_s, 0);
    SW_JOIN_INNER_TD_4663(tbl_JOIN_INNER_TD_5178_output, tbl_Filter_TD_5716_output, tbl_JOIN_INNER_TD_4663_output);
    gettimeofday(&tv_r_JOIN_INNER_4_806646_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_4_616204_s, tv_r_JOIN_LEFTANTI_4_616204_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_616204_s, 0);
    SW_JOIN_LEFTANTI_TD_4648(tbl_Aggregate_TD_5601_output, tbl_Aggregate_TD_5729_output, tbl_JOIN_LEFTANTI_TD_4648_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_616204_e, 0);

    struct timeval tv_r_Aggregate_3_306612_s, tv_r_Aggregate_3_306612_e;
    gettimeofday(&tv_r_Aggregate_3_306612_s, 0);
    SW_Aggregate_TD_3399(tbl_JOIN_INNER_TD_4663_output, tbl_Aggregate_TD_3399_output);
    gettimeofday(&tv_r_Aggregate_3_306612_e, 0);

    struct timeval tv_r_Aggregate_3_840732_s, tv_r_Aggregate_3_840732_e;
    gettimeofday(&tv_r_Aggregate_3_840732_s, 0);
    SW_Aggregate_TD_38(tbl_JOIN_LEFTANTI_TD_4648_output, tbl_Aggregate_TD_38_output);
    gettimeofday(&tv_r_Aggregate_3_840732_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_2_738360_s, tv_r_JOIN_LEFTANTI_2_738360_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_2_738360_s, 0);
    SW_JOIN_LEFTANTI_TD_2345(tbl_Aggregate_TD_38_output, tbl_Aggregate_TD_3399_output, tbl_JOIN_LEFTANTI_TD_2345_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_2_738360_e, 0);

    struct timeval tv_r_Aggregate_1_923193_s, tv_r_Aggregate_1_923193_e;
    gettimeofday(&tv_r_Aggregate_1_923193_s, 0);
    SW_Aggregate_TD_15(tbl_JOIN_LEFTANTI_TD_2345_output, NULL);
    gettimeofday(&tv_r_Aggregate_1_923193_e, 0);

    struct timeval tv_r_Aggregate_0_928325_s, tv_r_Aggregate_0_928325_e;
    gettimeofday(&tv_r_Aggregate_0_928325_s, 0);
    SW_Aggregate_TD_0563(NULL, tbl_Aggregate_TD_0563_output);
    gettimeofday(&tv_r_Aggregate_0_928325_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_813291_s, &tv_r_Filter_8_813291_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9944_input: " << tbl_SerializeFromObject_TD_9944_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_492776_s, &tv_r_Filter_8_492776_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9476_input: " << tbl_SerializeFromObject_TD_9476_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_220198_s, &tv_r_Filter_8_220198_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9982_input: " << tbl_SerializeFromObject_TD_9982_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_279714_s, &tv_r_Filter_8_279714_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9672_input: " << tbl_SerializeFromObject_TD_9672_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_401949_s, &tv_r_Filter_7_401949_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8762_input: " << tbl_SerializeFromObject_TD_8762_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_918173_s, &tv_r_JOIN_INNER_7_918173_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8833_output: " << tbl_Filter_TD_8833_output.getNumRow() << " " << "tbl_Filter_TD_8317_output: " << tbl_Filter_TD_8317_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_52310_s, &tv_r_Filter_7_52310_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8274_input: " << tbl_SerializeFromObject_TD_8274_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_496663_s, &tv_r_JOIN_INNER_7_496663_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8900_output: " << tbl_Filter_TD_8900_output.getNumRow() << " " << "tbl_Filter_TD_822_output: " << tbl_Filter_TD_822_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_613007_s, &tv_r_Filter_6_613007_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7614_input: " << tbl_SerializeFromObject_TD_7614_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_182629_s, &tv_r_Filter_6_182629_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_73_input: " << tbl_SerializeFromObject_TD_73_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_350132_s, &tv_r_JOIN_INNER_6_350132_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7693_output: " << tbl_JOIN_INNER_TD_7693_output.getNumRow() << " " << "tbl_Filter_TD_786_output: " << tbl_Filter_TD_786_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_64430_s, &tv_r_JOIN_INNER_6_64430_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_769_output: " << tbl_JOIN_INNER_TD_769_output.getNumRow() << " " << "tbl_Filter_TD_7915_output: " << tbl_Filter_TD_7915_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_416552_s, &tv_r_Filter_5_416552_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6109_input: " << tbl_SerializeFromObject_TD_6109_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_980443_s, &tv_r_JOIN_INNER_5_980443_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6202_output: " << tbl_Filter_TD_6202_output.getNumRow() << " " << "tbl_Filter_TD_6823_output: " << tbl_Filter_TD_6823_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_37226_s, &tv_r_Aggregate_5_37226_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6515_output: " << tbl_JOIN_INNER_TD_6515_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_908394_s, &tv_r_Aggregate_5_908394_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6126_output: " << tbl_JOIN_INNER_TD_6126_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_806646_s, &tv_r_JOIN_INNER_4_806646_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5178_output: " << tbl_JOIN_INNER_TD_5178_output.getNumRow() << " " << "tbl_Filter_TD_5716_output: " << tbl_Filter_TD_5716_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_4: " << tvdiff(&tv_r_JOIN_LEFTANTI_4_616204_s, &tv_r_JOIN_LEFTANTI_4_616204_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5601_output: " << tbl_Aggregate_TD_5601_output.getNumRow() << " " << "tbl_Aggregate_TD_5729_output: " << tbl_Aggregate_TD_5729_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_306612_s, &tv_r_Aggregate_3_306612_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4663_output: " << tbl_JOIN_INNER_TD_4663_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_840732_s, &tv_r_Aggregate_3_840732_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_4648_output: " << tbl_JOIN_LEFTANTI_TD_4648_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_2: " << tvdiff(&tv_r_JOIN_LEFTANTI_2_738360_s, &tv_r_JOIN_LEFTANTI_2_738360_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_38_output: " << tbl_Aggregate_TD_38_output.getNumRow() << " " << "tbl_Aggregate_TD_3399_output: " << tbl_Aggregate_TD_3399_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_923193_s, &tv_r_Aggregate_1_923193_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_2345_output: " << tbl_JOIN_LEFTANTI_TD_2345_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_928325_s, &tv_r_Aggregate_0_928325_e) / 1000.0 << " ms " 
     << "NULL: " << NULL.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.429136 * 1000 << "ms" << std::endl; 
    return 0; 
}
