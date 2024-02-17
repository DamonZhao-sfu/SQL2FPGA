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

#include "cfgFunc_q41.hpp" 
#include "q41.hpp" 

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
    std::cout << "NOTE:running query #41\n."; 
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
    Table tbl_GlobalLimit_TD_0713_output("tbl_GlobalLimit_TD_0713_output", 6100000, 1, "");
    tbl_GlobalLimit_TD_0713_output.allocateHost();
    Table tbl_LocalLimit_TD_1536_output("tbl_LocalLimit_TD_1536_output", 6100000, 1, "");
    tbl_LocalLimit_TD_1536_output.allocateHost();
    Table tbl_Sort_TD_2569_output("tbl_Sort_TD_2569_output", 6100000, 1, "");
    tbl_Sort_TD_2569_output.allocateHost();
    Table tbl_Aggregate_TD_3511_output("tbl_Aggregate_TD_3511_output", 6100000, 1, "");
    tbl_Aggregate_TD_3511_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4710_output("tbl_JOIN_INNER_TD_4710_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4710_output.allocateHost();
    Table tbl_Filter_TD_542_output("tbl_Filter_TD_542_output", 6100000, 2, "");
    tbl_Filter_TD_542_output.allocateHost();
    Table tbl_Filter_TD_5365_output("tbl_Filter_TD_5365_output", 6100000, 1, "");
    tbl_Filter_TD_5365_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6616_input;
    tbl_SerializeFromObject_TD_6616_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6616_input.addCol("i_manufact", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6616_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6616_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_6616_input.allocateHost();
    tbl_SerializeFromObject_TD_6616_input.loadHost();
    Table tbl_Aggregate_TD_6439_output("tbl_Aggregate_TD_6439_output", 6100000, 2, "");
    tbl_Aggregate_TD_6439_output.allocateHost();
    Table tbl_Filter_TD_7558_output("tbl_Filter_TD_7558_output", 6100000, 1, "");
    tbl_Filter_TD_7558_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8146_input;
    tbl_SerializeFromObject_TD_8146_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8146_input.addCol("i_manufact", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8146_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8146_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8146_input.addCol("i_units", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8146_input.addCol("i_size", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8146_input.allocateHost();
    tbl_SerializeFromObject_TD_8146_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_428252_s, tv_r_Filter_7_428252_e;
    gettimeofday(&tv_r_Filter_7_428252_s, 0);
    SW_Filter_TD_7558(tbl_SerializeFromObject_TD_8146_input, tbl_Filter_TD_7558_output);
    gettimeofday(&tv_r_Filter_7_428252_e, 0);

    struct timeval tv_r_Aggregate_6_416044_s, tv_r_Aggregate_6_416044_e;
    gettimeofday(&tv_r_Aggregate_6_416044_s, 0);
    SW_Aggregate_TD_6439(tbl_Filter_TD_7558_output, tbl_Aggregate_TD_6439_output);
    gettimeofday(&tv_r_Aggregate_6_416044_e, 0);

    struct timeval tv_r_Filter_5_355067_s, tv_r_Filter_5_355067_e;
    gettimeofday(&tv_r_Filter_5_355067_s, 0);
    SW_Filter_TD_5365(tbl_Aggregate_TD_6439_output, tbl_Filter_TD_5365_output);
    gettimeofday(&tv_r_Filter_5_355067_e, 0);

    struct timeval tv_r_Filter_5_885927_s, tv_r_Filter_5_885927_e;
    gettimeofday(&tv_r_Filter_5_885927_s, 0);
    SW_Filter_TD_542(tbl_SerializeFromObject_TD_6616_input, tbl_Filter_TD_542_output);
    gettimeofday(&tv_r_Filter_5_885927_e, 0);

    struct timeval tv_r_JOIN_INNER_4_532309_s, tv_r_JOIN_INNER_4_532309_e;
    gettimeofday(&tv_r_JOIN_INNER_4_532309_s, 0);
    SW_JOIN_INNER_TD_4710(tbl_Filter_TD_542_output, tbl_Filter_TD_5365_output, tbl_JOIN_INNER_TD_4710_output);
    gettimeofday(&tv_r_JOIN_INNER_4_532309_e, 0);

    struct timeval tv_r_Aggregate_3_708698_s, tv_r_Aggregate_3_708698_e;
    gettimeofday(&tv_r_Aggregate_3_708698_s, 0);
    SW_Aggregate_TD_3511(tbl_JOIN_INNER_TD_4710_output, tbl_Aggregate_TD_3511_output);
    gettimeofday(&tv_r_Aggregate_3_708698_e, 0);

    struct timeval tv_r_Sort_2_767876_s, tv_r_Sort_2_767876_e;
    gettimeofday(&tv_r_Sort_2_767876_s, 0);
    SW_Sort_TD_2569(tbl_Aggregate_TD_3511_output, tbl_Sort_TD_2569_output);
    gettimeofday(&tv_r_Sort_2_767876_e, 0);

    struct timeval tv_r_LocalLimit_1_804645_s, tv_r_LocalLimit_1_804645_e;
    gettimeofday(&tv_r_LocalLimit_1_804645_s, 0);
    SW_LocalLimit_TD_1536(tbl_Sort_TD_2569_output, tbl_LocalLimit_TD_1536_output);
    gettimeofday(&tv_r_LocalLimit_1_804645_e, 0);

    struct timeval tv_r_GlobalLimit_0_147443_s, tv_r_GlobalLimit_0_147443_e;
    gettimeofday(&tv_r_GlobalLimit_0_147443_s, 0);
    SW_GlobalLimit_TD_0713(tbl_LocalLimit_TD_1536_output, tbl_GlobalLimit_TD_0713_output);
    gettimeofday(&tv_r_GlobalLimit_0_147443_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_428252_s, &tv_r_Filter_7_428252_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8146_input: " << tbl_SerializeFromObject_TD_8146_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_416044_s, &tv_r_Aggregate_6_416044_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7558_output: " << tbl_Filter_TD_7558_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_355067_s, &tv_r_Filter_5_355067_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6439_output: " << tbl_Aggregate_TD_6439_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_885927_s, &tv_r_Filter_5_885927_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6616_input: " << tbl_SerializeFromObject_TD_6616_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_532309_s, &tv_r_JOIN_INNER_4_532309_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_542_output: " << tbl_Filter_TD_542_output.getNumRow() << " " << "tbl_Filter_TD_5365_output: " << tbl_Filter_TD_5365_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_708698_s, &tv_r_Aggregate_3_708698_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4710_output: " << tbl_JOIN_INNER_TD_4710_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_767876_s, &tv_r_Sort_2_767876_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3511_output: " << tbl_Aggregate_TD_3511_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_804645_s, &tv_r_LocalLimit_1_804645_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2569_output: " << tbl_Sort_TD_2569_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_147443_s, &tv_r_GlobalLimit_0_147443_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1536_output: " << tbl_LocalLimit_TD_1536_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.33152074 * 1000 << "ms" << std::endl; 
    return 0; 
}
