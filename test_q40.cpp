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

#include "cfgFunc_q40.hpp" 
#include "q40.hpp" 

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
    std::cout << "NOTE:running query #40\n."; 
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
    Table tbl_GlobalLimit_TD_0507_output("tbl_GlobalLimit_TD_0507_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0507_output.allocateHost();
    Table tbl_LocalLimit_TD_1617_output("tbl_LocalLimit_TD_1617_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1617_output.allocateHost();
    Table tbl_Sort_TD_2331_output("tbl_Sort_TD_2331_output", 6100000, 4, "");
    tbl_Sort_TD_2331_output.allocateHost();
    Table tbl_Aggregate_TD_3700_output("tbl_Aggregate_TD_3700_output", 6100000, 4, "");
    tbl_Aggregate_TD_3700_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4291_output("tbl_JOIN_INNER_TD_4291_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4291_output.allocateHost();
    Table tbl_JOIN_INNER_TD_587_output("tbl_JOIN_INNER_TD_587_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_587_output.allocateHost();
    Table tbl_Filter_TD_57_output("tbl_Filter_TD_57_output", 6100000, 2, "");
    tbl_Filter_TD_57_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6105_output("tbl_JOIN_INNER_TD_6105_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6105_output.allocateHost();
    Table tbl_Filter_TD_6550_output("tbl_Filter_TD_6550_output", 6100000, 2, "");
    tbl_Filter_TD_6550_output.allocateHost();
    Table tbl_SerializeFromObject_TD_657_input;
    tbl_SerializeFromObject_TD_657_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_657_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_657_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_657_input.allocateHost();
    tbl_SerializeFromObject_TD_657_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_7287_output("tbl_JOIN_LEFTOUTER_TD_7287_output", 6100000, 5, "");
    tbl_JOIN_LEFTOUTER_TD_7287_output.allocateHost();
    Table tbl_Filter_TD_7962_output("tbl_Filter_TD_7962_output", 6100000, 2, "");
    tbl_Filter_TD_7962_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7577_input;
    tbl_SerializeFromObject_TD_7577_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7577_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7577_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7577_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_7577_input.allocateHost();
    tbl_SerializeFromObject_TD_7577_input.loadHost();
    Table tbl_Filter_TD_8440_output("tbl_Filter_TD_8440_output", 6100000, 5, "");
    tbl_Filter_TD_8440_output.allocateHost();
    Table tbl_Filter_TD_8809_output("tbl_Filter_TD_8809_output", 6100000, 3, "");
    tbl_Filter_TD_8809_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8181_input;
    tbl_SerializeFromObject_TD_8181_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8181_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8181_input.addCol("w_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8181_input.allocateHost();
    tbl_SerializeFromObject_TD_8181_input.loadHost();
    Table tbl_SerializeFromObject_TD_9420_input;
    tbl_SerializeFromObject_TD_9420_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9420_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9420_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_9420_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_9420_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_9420_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_9420_input.allocateHost();
    tbl_SerializeFromObject_TD_9420_input.loadHost();
    Table tbl_SerializeFromObject_TD_9627_input;
    tbl_SerializeFromObject_TD_9627_input = Table("catalog_returns", catalog_returns_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9627_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_9627_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_9627_input.addCol("cr_refunded_cash", 4);
    tbl_SerializeFromObject_TD_9627_input.allocateHost();
    tbl_SerializeFromObject_TD_9627_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_450161_s, tv_r_Filter_8_450161_e;
    gettimeofday(&tv_r_Filter_8_450161_s, 0);
    SW_Filter_TD_8809(tbl_SerializeFromObject_TD_9627_input, tbl_Filter_TD_8809_output);
    gettimeofday(&tv_r_Filter_8_450161_e, 0);

    struct timeval tv_r_Filter_8_880329_s, tv_r_Filter_8_880329_e;
    gettimeofday(&tv_r_Filter_8_880329_s, 0);
    SW_Filter_TD_8440(tbl_SerializeFromObject_TD_9420_input, tbl_Filter_TD_8440_output);
    gettimeofday(&tv_r_Filter_8_880329_e, 0);

    struct timeval tv_r_Filter_7_691787_s, tv_r_Filter_7_691787_e;
    gettimeofday(&tv_r_Filter_7_691787_s, 0);
    SW_Filter_TD_7962(tbl_SerializeFromObject_TD_8181_input, tbl_Filter_TD_7962_output);
    gettimeofday(&tv_r_Filter_7_691787_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_7_735936_s, tv_r_JOIN_LEFTOUTER_7_735936_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_735936_s, 0);
    SW_JOIN_LEFTOUTER_TD_7287(tbl_Filter_TD_8440_output, tbl_Filter_TD_8809_output, tbl_JOIN_LEFTOUTER_TD_7287_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_735936_e, 0);

    struct timeval tv_r_Filter_6_540493_s, tv_r_Filter_6_540493_e;
    gettimeofday(&tv_r_Filter_6_540493_s, 0);
    SW_Filter_TD_6550(tbl_SerializeFromObject_TD_7577_input, tbl_Filter_TD_6550_output);
    gettimeofday(&tv_r_Filter_6_540493_e, 0);

    struct timeval tv_r_JOIN_INNER_6_811418_s, tv_r_JOIN_INNER_6_811418_e;
    gettimeofday(&tv_r_JOIN_INNER_6_811418_s, 0);
    SW_JOIN_INNER_TD_6105(tbl_JOIN_LEFTOUTER_TD_7287_output, tbl_Filter_TD_7962_output, tbl_JOIN_INNER_TD_6105_output);
    gettimeofday(&tv_r_JOIN_INNER_6_811418_e, 0);

    struct timeval tv_r_Filter_5_963663_s, tv_r_Filter_5_963663_e;
    gettimeofday(&tv_r_Filter_5_963663_s, 0);
    SW_Filter_TD_57(tbl_SerializeFromObject_TD_657_input, tbl_Filter_TD_57_output);
    gettimeofday(&tv_r_Filter_5_963663_e, 0);

    struct timeval tv_r_JOIN_INNER_5_217773_s, tv_r_JOIN_INNER_5_217773_e;
    gettimeofday(&tv_r_JOIN_INNER_5_217773_s, 0);
    SW_JOIN_INNER_TD_587(tbl_JOIN_INNER_TD_6105_output, tbl_Filter_TD_6550_output, tbl_JOIN_INNER_TD_587_output);
    gettimeofday(&tv_r_JOIN_INNER_5_217773_e, 0);

    struct timeval tv_r_JOIN_INNER_4_402973_s, tv_r_JOIN_INNER_4_402973_e;
    gettimeofday(&tv_r_JOIN_INNER_4_402973_s, 0);
    SW_JOIN_INNER_TD_4291(tbl_JOIN_INNER_TD_587_output, tbl_Filter_TD_57_output, tbl_JOIN_INNER_TD_4291_output);
    gettimeofday(&tv_r_JOIN_INNER_4_402973_e, 0);

    struct timeval tv_r_Aggregate_3_591583_s, tv_r_Aggregate_3_591583_e;
    gettimeofday(&tv_r_Aggregate_3_591583_s, 0);
    SW_Aggregate_TD_3700(tbl_JOIN_INNER_TD_4291_output, tbl_Aggregate_TD_3700_output);
    gettimeofday(&tv_r_Aggregate_3_591583_e, 0);

    struct timeval tv_r_Sort_2_532744_s, tv_r_Sort_2_532744_e;
    gettimeofday(&tv_r_Sort_2_532744_s, 0);
    SW_Sort_TD_2331(tbl_Aggregate_TD_3700_output, tbl_Sort_TD_2331_output);
    gettimeofday(&tv_r_Sort_2_532744_e, 0);

    struct timeval tv_r_LocalLimit_1_607237_s, tv_r_LocalLimit_1_607237_e;
    gettimeofday(&tv_r_LocalLimit_1_607237_s, 0);
    SW_LocalLimit_TD_1617(tbl_Sort_TD_2331_output, tbl_LocalLimit_TD_1617_output);
    gettimeofday(&tv_r_LocalLimit_1_607237_e, 0);

    struct timeval tv_r_GlobalLimit_0_213259_s, tv_r_GlobalLimit_0_213259_e;
    gettimeofday(&tv_r_GlobalLimit_0_213259_s, 0);
    SW_GlobalLimit_TD_0507(tbl_LocalLimit_TD_1617_output, tbl_GlobalLimit_TD_0507_output);
    gettimeofday(&tv_r_GlobalLimit_0_213259_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_450161_s, &tv_r_Filter_8_450161_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9627_input: " << tbl_SerializeFromObject_TD_9627_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_880329_s, &tv_r_Filter_8_880329_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9420_input: " << tbl_SerializeFromObject_TD_9420_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_691787_s, &tv_r_Filter_7_691787_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8181_input: " << tbl_SerializeFromObject_TD_8181_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_7: " << tvdiff(&tv_r_JOIN_LEFTOUTER_7_735936_s, &tv_r_JOIN_LEFTOUTER_7_735936_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8440_output: " << tbl_Filter_TD_8440_output.getNumRow() << " " << "tbl_Filter_TD_8809_output: " << tbl_Filter_TD_8809_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_540493_s, &tv_r_Filter_6_540493_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7577_input: " << tbl_SerializeFromObject_TD_7577_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_811418_s, &tv_r_JOIN_INNER_6_811418_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_7287_output: " << tbl_JOIN_LEFTOUTER_TD_7287_output.getNumRow() << " " << "tbl_Filter_TD_7962_output: " << tbl_Filter_TD_7962_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_963663_s, &tv_r_Filter_5_963663_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_657_input: " << tbl_SerializeFromObject_TD_657_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_217773_s, &tv_r_JOIN_INNER_5_217773_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6105_output: " << tbl_JOIN_INNER_TD_6105_output.getNumRow() << " " << "tbl_Filter_TD_6550_output: " << tbl_Filter_TD_6550_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_402973_s, &tv_r_JOIN_INNER_4_402973_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_587_output: " << tbl_JOIN_INNER_TD_587_output.getNumRow() << " " << "tbl_Filter_TD_57_output: " << tbl_Filter_TD_57_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_591583_s, &tv_r_Aggregate_3_591583_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4291_output: " << tbl_JOIN_INNER_TD_4291_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_532744_s, &tv_r_Sort_2_532744_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3700_output: " << tbl_Aggregate_TD_3700_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_607237_s, &tv_r_LocalLimit_1_607237_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2331_output: " << tbl_Sort_TD_2331_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_213259_s, &tv_r_GlobalLimit_0_213259_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1617_output: " << tbl_LocalLimit_TD_1617_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.1901661 * 1000 << "ms" << std::endl; 
    return 0; 
}
