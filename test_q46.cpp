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

#include "cfgFunc_q46.hpp" 
#include "q46.hpp" 

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
    std::cout << "NOTE:running query #46\n."; 
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
    Table tbl_GlobalLimit_TD_0783_output("tbl_GlobalLimit_TD_0783_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0783_output.allocateHost();
    Table tbl_LocalLimit_TD_1729_output("tbl_LocalLimit_TD_1729_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1729_output.allocateHost();
    Table tbl_Sort_TD_2157_output("tbl_Sort_TD_2157_output", 6100000, 7, "");
    tbl_Sort_TD_2157_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3961_output("tbl_JOIN_INNER_TD_3961_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_3961_output.allocateHost();
    Table tbl_JOIN_INNER_TD_443_output("tbl_JOIN_INNER_TD_443_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_443_output.allocateHost();
    Table tbl_Filter_TD_4313_output("tbl_Filter_TD_4313_output", 6100000, 2, "");
    tbl_Filter_TD_4313_output.allocateHost();
    Table tbl_Aggregate_TD_5253_output("tbl_Aggregate_TD_5253_output", 6100000, 5, "");
    tbl_Aggregate_TD_5253_output.allocateHost();
    Table tbl_Filter_TD_5833_output("tbl_Filter_TD_5833_output", 6100000, 4, "");
    tbl_Filter_TD_5833_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5893_input;
    tbl_SerializeFromObject_TD_5893_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5893_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_5893_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5893_input.allocateHost();
    tbl_SerializeFromObject_TD_5893_input.loadHost();
    Table tbl_JOIN_INNER_TD_6917_output("tbl_JOIN_INNER_TD_6917_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6917_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6156_input;
    tbl_SerializeFromObject_TD_6156_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6156_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6156_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_6156_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6156_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6156_input.allocateHost();
    tbl_SerializeFromObject_TD_6156_input.loadHost();
    Table tbl_JOIN_INNER_TD_7274_output("tbl_JOIN_INNER_TD_7274_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7274_output.allocateHost();
    Table tbl_Filter_TD_7506_output("tbl_Filter_TD_7506_output", 6100000, 2, "");
    tbl_Filter_TD_7506_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8212_output("tbl_JOIN_INNER_TD_8212_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8212_output.allocateHost();
    Table tbl_Filter_TD_8736_output("tbl_Filter_TD_8736_output", 6100000, 1, "");
    tbl_Filter_TD_8736_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8199_input;
    tbl_SerializeFromObject_TD_8199_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8199_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8199_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8199_input.allocateHost();
    tbl_SerializeFromObject_TD_8199_input.loadHost();
    Table tbl_JOIN_INNER_TD_9767_output("tbl_JOIN_INNER_TD_9767_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9767_output.allocateHost();
    Table tbl_Filter_TD_9653_output("tbl_Filter_TD_9653_output", 6100000, 1, "");
    tbl_Filter_TD_9653_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9142_input;
    tbl_SerializeFromObject_TD_9142_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9142_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9142_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_9142_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_9142_input.allocateHost();
    tbl_SerializeFromObject_TD_9142_input.loadHost();
    Table tbl_Filter_TD_10597_output("tbl_Filter_TD_10597_output", 6100000, 8, "");
    tbl_Filter_TD_10597_output.allocateHost();
    Table tbl_Filter_TD_10931_output("tbl_Filter_TD_10931_output", 6100000, 1, "");
    tbl_Filter_TD_10931_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10107_input;
    tbl_SerializeFromObject_TD_10107_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10107_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10107_input.addCol("s_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10107_input.allocateHost();
    tbl_SerializeFromObject_TD_10107_input.loadHost();
    Table tbl_SerializeFromObject_TD_11154_input;
    tbl_SerializeFromObject_TD_11154_input = Table("store_sales", store_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_11154_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11154_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_11154_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_11154_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_11154_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11154_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_11154_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_11154_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_11154_input.allocateHost();
    tbl_SerializeFromObject_TD_11154_input.loadHost();
    Table tbl_SerializeFromObject_TD_11908_input;
    tbl_SerializeFromObject_TD_11908_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11908_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11908_input.addCol("d_dow", 4);
    tbl_SerializeFromObject_TD_11908_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11908_input.allocateHost();
    tbl_SerializeFromObject_TD_11908_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_299045_s, tv_r_Filter_10_299045_e;
    gettimeofday(&tv_r_Filter_10_299045_s, 0);
    SW_Filter_TD_10931(tbl_SerializeFromObject_TD_11908_input, tbl_Filter_TD_10931_output);
    gettimeofday(&tv_r_Filter_10_299045_e, 0);

    struct timeval tv_r_Filter_10_539731_s, tv_r_Filter_10_539731_e;
    gettimeofday(&tv_r_Filter_10_539731_s, 0);
    SW_Filter_TD_10597(tbl_SerializeFromObject_TD_11154_input, tbl_Filter_TD_10597_output);
    gettimeofday(&tv_r_Filter_10_539731_e, 0);

    struct timeval tv_r_Filter_9_306991_s, tv_r_Filter_9_306991_e;
    gettimeofday(&tv_r_Filter_9_306991_s, 0);
    SW_Filter_TD_9653(tbl_SerializeFromObject_TD_10107_input, tbl_Filter_TD_9653_output);
    gettimeofday(&tv_r_Filter_9_306991_e, 0);

    struct timeval tv_r_JOIN_INNER_9_386603_s, tv_r_JOIN_INNER_9_386603_e;
    gettimeofday(&tv_r_JOIN_INNER_9_386603_s, 0);
    SW_JOIN_INNER_TD_9767(tbl_Filter_TD_10597_output, tbl_Filter_TD_10931_output, tbl_JOIN_INNER_TD_9767_output);
    gettimeofday(&tv_r_JOIN_INNER_9_386603_e, 0);

    struct timeval tv_r_Filter_8_493549_s, tv_r_Filter_8_493549_e;
    gettimeofday(&tv_r_Filter_8_493549_s, 0);
    SW_Filter_TD_8736(tbl_SerializeFromObject_TD_9142_input, tbl_Filter_TD_8736_output);
    gettimeofday(&tv_r_Filter_8_493549_e, 0);

    struct timeval tv_r_JOIN_INNER_8_203312_s, tv_r_JOIN_INNER_8_203312_e;
    gettimeofday(&tv_r_JOIN_INNER_8_203312_s, 0);
    SW_JOIN_INNER_TD_8212(tbl_JOIN_INNER_TD_9767_output, tbl_Filter_TD_9653_output, tbl_JOIN_INNER_TD_8212_output);
    gettimeofday(&tv_r_JOIN_INNER_8_203312_e, 0);

    struct timeval tv_r_Filter_7_141306_s, tv_r_Filter_7_141306_e;
    gettimeofday(&tv_r_Filter_7_141306_s, 0);
    SW_Filter_TD_7506(tbl_SerializeFromObject_TD_8199_input, tbl_Filter_TD_7506_output);
    gettimeofday(&tv_r_Filter_7_141306_e, 0);

    struct timeval tv_r_JOIN_INNER_7_10659_s, tv_r_JOIN_INNER_7_10659_e;
    gettimeofday(&tv_r_JOIN_INNER_7_10659_s, 0);
    SW_JOIN_INNER_TD_7274(tbl_JOIN_INNER_TD_8212_output, tbl_Filter_TD_8736_output, tbl_JOIN_INNER_TD_7274_output);
    gettimeofday(&tv_r_JOIN_INNER_7_10659_e, 0);

    struct timeval tv_r_JOIN_INNER_6_927433_s, tv_r_JOIN_INNER_6_927433_e;
    gettimeofday(&tv_r_JOIN_INNER_6_927433_s, 0);
    SW_JOIN_INNER_TD_6917(tbl_JOIN_INNER_TD_7274_output, tbl_Filter_TD_7506_output, tbl_JOIN_INNER_TD_6917_output);
    gettimeofday(&tv_r_JOIN_INNER_6_927433_e, 0);

    struct timeval tv_r_Filter_5_718292_s, tv_r_Filter_5_718292_e;
    gettimeofday(&tv_r_Filter_5_718292_s, 0);
    SW_Filter_TD_5833(tbl_SerializeFromObject_TD_6156_input, tbl_Filter_TD_5833_output);
    gettimeofday(&tv_r_Filter_5_718292_e, 0);

    struct timeval tv_r_Aggregate_5_190400_s, tv_r_Aggregate_5_190400_e;
    gettimeofday(&tv_r_Aggregate_5_190400_s, 0);
    SW_Aggregate_TD_5253(tbl_JOIN_INNER_TD_6917_output, tbl_Aggregate_TD_5253_output);
    gettimeofday(&tv_r_Aggregate_5_190400_e, 0);

    struct timeval tv_r_Filter_4_760615_s, tv_r_Filter_4_760615_e;
    gettimeofday(&tv_r_Filter_4_760615_s, 0);
    SW_Filter_TD_4313(tbl_SerializeFromObject_TD_5893_input, tbl_Filter_TD_4313_output);
    gettimeofday(&tv_r_Filter_4_760615_e, 0);

    struct timeval tv_r_JOIN_INNER_4_534747_s, tv_r_JOIN_INNER_4_534747_e;
    gettimeofday(&tv_r_JOIN_INNER_4_534747_s, 0);
    SW_JOIN_INNER_TD_443(tbl_Aggregate_TD_5253_output, tbl_Filter_TD_5833_output, tbl_JOIN_INNER_TD_443_output);
    gettimeofday(&tv_r_JOIN_INNER_4_534747_e, 0);

    struct timeval tv_r_JOIN_INNER_3_818349_s, tv_r_JOIN_INNER_3_818349_e;
    gettimeofday(&tv_r_JOIN_INNER_3_818349_s, 0);
    SW_JOIN_INNER_TD_3961(tbl_JOIN_INNER_TD_443_output, tbl_Filter_TD_4313_output, tbl_JOIN_INNER_TD_3961_output);
    gettimeofday(&tv_r_JOIN_INNER_3_818349_e, 0);

    struct timeval tv_r_Sort_2_25904_s, tv_r_Sort_2_25904_e;
    gettimeofday(&tv_r_Sort_2_25904_s, 0);
    SW_Sort_TD_2157(tbl_JOIN_INNER_TD_3961_output, tbl_Sort_TD_2157_output);
    gettimeofday(&tv_r_Sort_2_25904_e, 0);

    struct timeval tv_r_LocalLimit_1_678926_s, tv_r_LocalLimit_1_678926_e;
    gettimeofday(&tv_r_LocalLimit_1_678926_s, 0);
    SW_LocalLimit_TD_1729(tbl_Sort_TD_2157_output, tbl_LocalLimit_TD_1729_output);
    gettimeofday(&tv_r_LocalLimit_1_678926_e, 0);

    struct timeval tv_r_GlobalLimit_0_608521_s, tv_r_GlobalLimit_0_608521_e;
    gettimeofday(&tv_r_GlobalLimit_0_608521_s, 0);
    SW_GlobalLimit_TD_0783(tbl_LocalLimit_TD_1729_output, tbl_GlobalLimit_TD_0783_output);
    gettimeofday(&tv_r_GlobalLimit_0_608521_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_299045_s, &tv_r_Filter_10_299045_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11908_input: " << tbl_SerializeFromObject_TD_11908_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_539731_s, &tv_r_Filter_10_539731_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11154_input: " << tbl_SerializeFromObject_TD_11154_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_306991_s, &tv_r_Filter_9_306991_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10107_input: " << tbl_SerializeFromObject_TD_10107_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_386603_s, &tv_r_JOIN_INNER_9_386603_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10597_output: " << tbl_Filter_TD_10597_output.getNumRow() << " " << "tbl_Filter_TD_10931_output: " << tbl_Filter_TD_10931_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_493549_s, &tv_r_Filter_8_493549_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9142_input: " << tbl_SerializeFromObject_TD_9142_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_203312_s, &tv_r_JOIN_INNER_8_203312_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9767_output: " << tbl_JOIN_INNER_TD_9767_output.getNumRow() << " " << "tbl_Filter_TD_9653_output: " << tbl_Filter_TD_9653_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_141306_s, &tv_r_Filter_7_141306_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8199_input: " << tbl_SerializeFromObject_TD_8199_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_10659_s, &tv_r_JOIN_INNER_7_10659_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8212_output: " << tbl_JOIN_INNER_TD_8212_output.getNumRow() << " " << "tbl_Filter_TD_8736_output: " << tbl_Filter_TD_8736_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_927433_s, &tv_r_JOIN_INNER_6_927433_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7274_output: " << tbl_JOIN_INNER_TD_7274_output.getNumRow() << " " << "tbl_Filter_TD_7506_output: " << tbl_Filter_TD_7506_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_718292_s, &tv_r_Filter_5_718292_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6156_input: " << tbl_SerializeFromObject_TD_6156_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_190400_s, &tv_r_Aggregate_5_190400_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6917_output: " << tbl_JOIN_INNER_TD_6917_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_760615_s, &tv_r_Filter_4_760615_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5893_input: " << tbl_SerializeFromObject_TD_5893_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_534747_s, &tv_r_JOIN_INNER_4_534747_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5253_output: " << tbl_Aggregate_TD_5253_output.getNumRow() << " " << "tbl_Filter_TD_5833_output: " << tbl_Filter_TD_5833_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_818349_s, &tv_r_JOIN_INNER_3_818349_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_443_output: " << tbl_JOIN_INNER_TD_443_output.getNumRow() << " " << "tbl_Filter_TD_4313_output: " << tbl_Filter_TD_4313_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_25904_s, &tv_r_Sort_2_25904_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3961_output: " << tbl_JOIN_INNER_TD_3961_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_678926_s, &tv_r_LocalLimit_1_678926_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2157_output: " << tbl_Sort_TD_2157_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_608521_s, &tv_r_GlobalLimit_0_608521_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1729_output: " << tbl_LocalLimit_TD_1729_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.2347193 * 1000 << "ms" << std::endl; 
    return 0; 
}
