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
    Table tbl_GlobalLimit_TD_0935789_output("tbl_GlobalLimit_TD_0935789_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0935789_output.allocateHost();
    Table tbl_LocalLimit_TD_1554759_output("tbl_LocalLimit_TD_1554759_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1554759_output.allocateHost();
    Table tbl_Sort_TD_2334152_output("tbl_Sort_TD_2334152_output", 6100000, 4, "");
    tbl_Sort_TD_2334152_output.allocateHost();
    Table tbl_Aggregate_TD_3318770_output("tbl_Aggregate_TD_3318770_output", 6100000, 4, "");
    tbl_Aggregate_TD_3318770_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4459609_output("tbl_JOIN_INNER_TD_4459609_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4459609_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5921576_output("tbl_JOIN_INNER_TD_5921576_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5921576_output.allocateHost();
    Table tbl_Filter_TD_5297285_output("tbl_Filter_TD_5297285_output", 6100000, 2, "");
    tbl_Filter_TD_5297285_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6297350_output("tbl_JOIN_INNER_TD_6297350_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6297350_output.allocateHost();
    Table tbl_Filter_TD_6471903_output("tbl_Filter_TD_6471903_output", 6100000, 2, "");
    tbl_Filter_TD_6471903_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6775888_input;
    tbl_SerializeFromObject_TD_6775888_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6775888_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6775888_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_6775888_input.allocateHost();
    tbl_SerializeFromObject_TD_6775888_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_7427510_output("tbl_JOIN_LEFTOUTER_TD_7427510_output", 6100000, 5, "");
    tbl_JOIN_LEFTOUTER_TD_7427510_output.allocateHost();
    Table tbl_Filter_TD_7165700_output("tbl_Filter_TD_7165700_output", 6100000, 2, "");
    tbl_Filter_TD_7165700_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7239257_input;
    tbl_SerializeFromObject_TD_7239257_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7239257_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7239257_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7239257_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_7239257_input.allocateHost();
    tbl_SerializeFromObject_TD_7239257_input.loadHost();
    Table tbl_Filter_TD_8693890_output("tbl_Filter_TD_8693890_output", 6100000, 5, "");
    tbl_Filter_TD_8693890_output.allocateHost();
    Table tbl_Filter_TD_8278181_output("tbl_Filter_TD_8278181_output", 6100000, 3, "");
    tbl_Filter_TD_8278181_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8602090_input;
    tbl_SerializeFromObject_TD_8602090_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8602090_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8602090_input.addCol("w_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8602090_input.allocateHost();
    tbl_SerializeFromObject_TD_8602090_input.loadHost();
    Table tbl_SerializeFromObject_TD_9706750_input;
    tbl_SerializeFromObject_TD_9706750_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9706750_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9706750_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_9706750_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_9706750_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_9706750_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_9706750_input.allocateHost();
    tbl_SerializeFromObject_TD_9706750_input.loadHost();
    Table tbl_SerializeFromObject_TD_9170820_input;
    tbl_SerializeFromObject_TD_9170820_input = Table("catalog_returns", catalog_returns_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9170820_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_9170820_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_9170820_input.addCol("cr_refunded_cash", 4);
    tbl_SerializeFromObject_TD_9170820_input.allocateHost();
    tbl_SerializeFromObject_TD_9170820_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_981139_s, tv_r_Filter_8_981139_e;
    gettimeofday(&tv_r_Filter_8_981139_s, 0);
    SW_Filter_TD_8278181(tbl_SerializeFromObject_TD_9170820_input, tbl_Filter_TD_8278181_output);
    gettimeofday(&tv_r_Filter_8_981139_e, 0);

    struct timeval tv_r_Filter_8_239029_s, tv_r_Filter_8_239029_e;
    gettimeofday(&tv_r_Filter_8_239029_s, 0);
    SW_Filter_TD_8693890(tbl_SerializeFromObject_TD_9706750_input, tbl_Filter_TD_8693890_output);
    gettimeofday(&tv_r_Filter_8_239029_e, 0);

    struct timeval tv_r_Filter_7_900709_s, tv_r_Filter_7_900709_e;
    gettimeofday(&tv_r_Filter_7_900709_s, 0);
    SW_Filter_TD_7165700(tbl_SerializeFromObject_TD_8602090_input, tbl_Filter_TD_7165700_output);
    gettimeofday(&tv_r_Filter_7_900709_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_7_448695_s, tv_r_JOIN_LEFTOUTER_7_448695_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_448695_s, 0);
    SW_JOIN_LEFTOUTER_TD_7427510(tbl_Filter_TD_8693890_output, tbl_Filter_TD_8278181_output, tbl_JOIN_LEFTOUTER_TD_7427510_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_448695_e, 0);

    struct timeval tv_r_Filter_6_671375_s, tv_r_Filter_6_671375_e;
    gettimeofday(&tv_r_Filter_6_671375_s, 0);
    SW_Filter_TD_6471903(tbl_SerializeFromObject_TD_7239257_input, tbl_Filter_TD_6471903_output);
    gettimeofday(&tv_r_Filter_6_671375_e, 0);

    struct timeval tv_r_JOIN_INNER_6_427091_s, tv_r_JOIN_INNER_6_427091_e;
    gettimeofday(&tv_r_JOIN_INNER_6_427091_s, 0);
    SW_JOIN_INNER_TD_6297350(tbl_JOIN_LEFTOUTER_TD_7427510_output, tbl_Filter_TD_7165700_output, tbl_JOIN_INNER_TD_6297350_output);
    gettimeofday(&tv_r_JOIN_INNER_6_427091_e, 0);

    struct timeval tv_r_Filter_5_805336_s, tv_r_Filter_5_805336_e;
    gettimeofday(&tv_r_Filter_5_805336_s, 0);
    SW_Filter_TD_5297285(tbl_SerializeFromObject_TD_6775888_input, tbl_Filter_TD_5297285_output);
    gettimeofday(&tv_r_Filter_5_805336_e, 0);

    struct timeval tv_r_JOIN_INNER_5_386852_s, tv_r_JOIN_INNER_5_386852_e;
    gettimeofday(&tv_r_JOIN_INNER_5_386852_s, 0);
    SW_JOIN_INNER_TD_5921576(tbl_JOIN_INNER_TD_6297350_output, tbl_Filter_TD_6471903_output, tbl_JOIN_INNER_TD_5921576_output);
    gettimeofday(&tv_r_JOIN_INNER_5_386852_e, 0);

    struct timeval tv_r_JOIN_INNER_4_546812_s, tv_r_JOIN_INNER_4_546812_e;
    gettimeofday(&tv_r_JOIN_INNER_4_546812_s, 0);
    SW_JOIN_INNER_TD_4459609(tbl_JOIN_INNER_TD_5921576_output, tbl_Filter_TD_5297285_output, tbl_JOIN_INNER_TD_4459609_output);
    gettimeofday(&tv_r_JOIN_INNER_4_546812_e, 0);

    struct timeval tv_r_Aggregate_3_836017_s, tv_r_Aggregate_3_836017_e;
    gettimeofday(&tv_r_Aggregate_3_836017_s, 0);
    SW_Aggregate_TD_3318770(tbl_JOIN_INNER_TD_4459609_output, tbl_Aggregate_TD_3318770_output);
    gettimeofday(&tv_r_Aggregate_3_836017_e, 0);

    struct timeval tv_r_Sort_2_166487_s, tv_r_Sort_2_166487_e;
    gettimeofday(&tv_r_Sort_2_166487_s, 0);
    SW_Sort_TD_2334152(tbl_Aggregate_TD_3318770_output, tbl_Sort_TD_2334152_output);
    gettimeofday(&tv_r_Sort_2_166487_e, 0);

    struct timeval tv_r_LocalLimit_1_56922_s, tv_r_LocalLimit_1_56922_e;
    gettimeofday(&tv_r_LocalLimit_1_56922_s, 0);
    SW_LocalLimit_TD_1554759(tbl_Sort_TD_2334152_output, tbl_LocalLimit_TD_1554759_output);
    gettimeofday(&tv_r_LocalLimit_1_56922_e, 0);

    struct timeval tv_r_GlobalLimit_0_664937_s, tv_r_GlobalLimit_0_664937_e;
    gettimeofday(&tv_r_GlobalLimit_0_664937_s, 0);
    SW_GlobalLimit_TD_0935789(tbl_LocalLimit_TD_1554759_output, tbl_GlobalLimit_TD_0935789_output);
    gettimeofday(&tv_r_GlobalLimit_0_664937_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_981139_s, &tv_r_Filter_8_981139_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9170820_input: " << tbl_SerializeFromObject_TD_9170820_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_239029_s, &tv_r_Filter_8_239029_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9706750_input: " << tbl_SerializeFromObject_TD_9706750_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_900709_s, &tv_r_Filter_7_900709_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8602090_input: " << tbl_SerializeFromObject_TD_8602090_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_7: " << tvdiff(&tv_r_JOIN_LEFTOUTER_7_448695_s, &tv_r_JOIN_LEFTOUTER_7_448695_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8693890_output: " << tbl_Filter_TD_8693890_output.getNumRow() << " " << "tbl_Filter_TD_8278181_output: " << tbl_Filter_TD_8278181_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_671375_s, &tv_r_Filter_6_671375_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7239257_input: " << tbl_SerializeFromObject_TD_7239257_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_427091_s, &tv_r_JOIN_INNER_6_427091_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_7427510_output: " << tbl_JOIN_LEFTOUTER_TD_7427510_output.getNumRow() << " " << "tbl_Filter_TD_7165700_output: " << tbl_Filter_TD_7165700_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_805336_s, &tv_r_Filter_5_805336_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6775888_input: " << tbl_SerializeFromObject_TD_6775888_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_386852_s, &tv_r_JOIN_INNER_5_386852_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6297350_output: " << tbl_JOIN_INNER_TD_6297350_output.getNumRow() << " " << "tbl_Filter_TD_6471903_output: " << tbl_Filter_TD_6471903_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_546812_s, &tv_r_JOIN_INNER_4_546812_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5921576_output: " << tbl_JOIN_INNER_TD_5921576_output.getNumRow() << " " << "tbl_Filter_TD_5297285_output: " << tbl_Filter_TD_5297285_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_836017_s, &tv_r_Aggregate_3_836017_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4459609_output: " << tbl_JOIN_INNER_TD_4459609_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_166487_s, &tv_r_Sort_2_166487_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3318770_output: " << tbl_Aggregate_TD_3318770_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_56922_s, &tv_r_LocalLimit_1_56922_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2334152_output: " << tbl_Sort_TD_2334152_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_664937_s, &tv_r_GlobalLimit_0_664937_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1554759_output: " << tbl_LocalLimit_TD_1554759_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.8636152 * 1000 << "ms" << std::endl; 
    return 0; 
}
