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

#include "cfgFunc_q36.hpp" 
#include "q36.hpp" 

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
    std::cout << "NOTE:running query #36\n."; 
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
    Table tbl_GlobalLimit_TD_0694_output("tbl_GlobalLimit_TD_0694_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0694_output.allocateHost();
    Table tbl_LocalLimit_TD_1523_output("tbl_LocalLimit_TD_1523_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1523_output.allocateHost();
    Table tbl_Sort_TD_2134_output("tbl_Sort_TD_2134_output", 6100000, 5, "");
    tbl_Sort_TD_2134_output.allocateHost();
    Table tbl_Window_TD_3438_output("tbl_Window_TD_3438_output", 6100000, 8, "");
    tbl_Window_TD_3438_output.allocateHost();
    Table tbl_Aggregate_TD_4504_output("tbl_Aggregate_TD_4504_output", 6100000, 7, "");
    tbl_Aggregate_TD_4504_output.allocateHost();
    Table tbl_Expand_TD_5796_output("tbl_Expand_TD_5796_output", 6100000, 5, "");
    tbl_Expand_TD_5796_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6861_output("tbl_JOIN_INNER_TD_6861_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6861_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7275_output("tbl_JOIN_INNER_TD_7275_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7275_output.allocateHost();
    Table tbl_Filter_TD_7810_output("tbl_Filter_TD_7810_output", 6100000, 1, "");
    tbl_Filter_TD_7810_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8112_output("tbl_JOIN_INNER_TD_8112_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8112_output.allocateHost();
    Table tbl_Filter_TD_85_output("tbl_Filter_TD_85_output", 6100000, 3, "");
    tbl_Filter_TD_85_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8912_input;
    tbl_SerializeFromObject_TD_8912_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8912_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8912_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8912_input.allocateHost();
    tbl_SerializeFromObject_TD_8912_input.loadHost();
    Table tbl_Filter_TD_9350_output("tbl_Filter_TD_9350_output", 6100000, 5, "");
    tbl_Filter_TD_9350_output.allocateHost();
    Table tbl_Filter_TD_9577_output("tbl_Filter_TD_9577_output", 6100000, 1, "");
    tbl_Filter_TD_9577_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9833_input;
    tbl_SerializeFromObject_TD_9833_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9833_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9833_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9833_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9833_input.allocateHost();
    tbl_SerializeFromObject_TD_9833_input.loadHost();
    Table tbl_SerializeFromObject_TD_10662_input;
    tbl_SerializeFromObject_TD_10662_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10662_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10662_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10662_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10662_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10662_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_10662_input.allocateHost();
    tbl_SerializeFromObject_TD_10662_input.loadHost();
    Table tbl_SerializeFromObject_TD_10246_input;
    tbl_SerializeFromObject_TD_10246_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10246_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10246_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10246_input.allocateHost();
    tbl_SerializeFromObject_TD_10246_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_803887_s, tv_r_Filter_9_803887_e;
    gettimeofday(&tv_r_Filter_9_803887_s, 0);
    SW_Filter_TD_9577(tbl_SerializeFromObject_TD_10246_input, tbl_Filter_TD_9577_output);
    gettimeofday(&tv_r_Filter_9_803887_e, 0);

    struct timeval tv_r_Filter_9_123743_s, tv_r_Filter_9_123743_e;
    gettimeofday(&tv_r_Filter_9_123743_s, 0);
    SW_Filter_TD_9350(tbl_SerializeFromObject_TD_10662_input, tbl_Filter_TD_9350_output);
    gettimeofday(&tv_r_Filter_9_123743_e, 0);

    struct timeval tv_r_Filter_8_231539_s, tv_r_Filter_8_231539_e;
    gettimeofday(&tv_r_Filter_8_231539_s, 0);
    SW_Filter_TD_85(tbl_SerializeFromObject_TD_9833_input, tbl_Filter_TD_85_output);
    gettimeofday(&tv_r_Filter_8_231539_e, 0);

    struct timeval tv_r_JOIN_INNER_8_743746_s, tv_r_JOIN_INNER_8_743746_e;
    gettimeofday(&tv_r_JOIN_INNER_8_743746_s, 0);
    SW_JOIN_INNER_TD_8112(tbl_Filter_TD_9350_output, tbl_Filter_TD_9577_output, tbl_JOIN_INNER_TD_8112_output);
    gettimeofday(&tv_r_JOIN_INNER_8_743746_e, 0);

    struct timeval tv_r_Filter_7_591539_s, tv_r_Filter_7_591539_e;
    gettimeofday(&tv_r_Filter_7_591539_s, 0);
    SW_Filter_TD_7810(tbl_SerializeFromObject_TD_8912_input, tbl_Filter_TD_7810_output);
    gettimeofday(&tv_r_Filter_7_591539_e, 0);

    struct timeval tv_r_JOIN_INNER_7_860767_s, tv_r_JOIN_INNER_7_860767_e;
    gettimeofday(&tv_r_JOIN_INNER_7_860767_s, 0);
    SW_JOIN_INNER_TD_7275(tbl_JOIN_INNER_TD_8112_output, tbl_Filter_TD_85_output, tbl_JOIN_INNER_TD_7275_output);
    gettimeofday(&tv_r_JOIN_INNER_7_860767_e, 0);

    struct timeval tv_r_JOIN_INNER_6_732765_s, tv_r_JOIN_INNER_6_732765_e;
    gettimeofday(&tv_r_JOIN_INNER_6_732765_s, 0);
    SW_JOIN_INNER_TD_6861(tbl_JOIN_INNER_TD_7275_output, tbl_Filter_TD_7810_output, tbl_JOIN_INNER_TD_6861_output);
    gettimeofday(&tv_r_JOIN_INNER_6_732765_e, 0);

    struct timeval tv_r_Expand_5_541261_s, tv_r_Expand_5_541261_e;
    gettimeofday(&tv_r_Expand_5_541261_s, 0);
    SW_Expand_TD_5796(tbl_JOIN_INNER_TD_6861_output, tbl_Expand_TD_5796_output);
    gettimeofday(&tv_r_Expand_5_541261_e, 0);

    struct timeval tv_r_Aggregate_4_338619_s, tv_r_Aggregate_4_338619_e;
    gettimeofday(&tv_r_Aggregate_4_338619_s, 0);
    SW_Aggregate_TD_4504(tbl_Expand_TD_5796_output, tbl_Aggregate_TD_4504_output);
    gettimeofday(&tv_r_Aggregate_4_338619_e, 0);

    struct timeval tv_r_Window_3_590132_s, tv_r_Window_3_590132_e;
    gettimeofday(&tv_r_Window_3_590132_s, 0);
    SW_Window_TD_3438(tbl_Aggregate_TD_4504_output, tbl_Window_TD_3438_output);
    gettimeofday(&tv_r_Window_3_590132_e, 0);

    struct timeval tv_r_Sort_2_122075_s, tv_r_Sort_2_122075_e;
    gettimeofday(&tv_r_Sort_2_122075_s, 0);
    SW_Sort_TD_2134(tbl_Window_TD_3438_output, tbl_Sort_TD_2134_output);
    gettimeofday(&tv_r_Sort_2_122075_e, 0);

    struct timeval tv_r_LocalLimit_1_620158_s, tv_r_LocalLimit_1_620158_e;
    gettimeofday(&tv_r_LocalLimit_1_620158_s, 0);
    SW_LocalLimit_TD_1523(tbl_Sort_TD_2134_output, tbl_LocalLimit_TD_1523_output);
    gettimeofday(&tv_r_LocalLimit_1_620158_e, 0);

    struct timeval tv_r_GlobalLimit_0_350956_s, tv_r_GlobalLimit_0_350956_e;
    gettimeofday(&tv_r_GlobalLimit_0_350956_s, 0);
    SW_GlobalLimit_TD_0694(tbl_LocalLimit_TD_1523_output, tbl_GlobalLimit_TD_0694_output);
    gettimeofday(&tv_r_GlobalLimit_0_350956_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_803887_s, &tv_r_Filter_9_803887_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10246_input: " << tbl_SerializeFromObject_TD_10246_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_123743_s, &tv_r_Filter_9_123743_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10662_input: " << tbl_SerializeFromObject_TD_10662_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_231539_s, &tv_r_Filter_8_231539_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9833_input: " << tbl_SerializeFromObject_TD_9833_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_743746_s, &tv_r_JOIN_INNER_8_743746_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9350_output: " << tbl_Filter_TD_9350_output.getNumRow() << " " << "tbl_Filter_TD_9577_output: " << tbl_Filter_TD_9577_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_591539_s, &tv_r_Filter_7_591539_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8912_input: " << tbl_SerializeFromObject_TD_8912_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_860767_s, &tv_r_JOIN_INNER_7_860767_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8112_output: " << tbl_JOIN_INNER_TD_8112_output.getNumRow() << " " << "tbl_Filter_TD_85_output: " << tbl_Filter_TD_85_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_732765_s, &tv_r_JOIN_INNER_6_732765_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7275_output: " << tbl_JOIN_INNER_TD_7275_output.getNumRow() << " " << "tbl_Filter_TD_7810_output: " << tbl_Filter_TD_7810_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_5: " << tvdiff(&tv_r_Expand_5_541261_s, &tv_r_Expand_5_541261_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6861_output: " << tbl_JOIN_INNER_TD_6861_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_338619_s, &tv_r_Aggregate_4_338619_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_5796_output: " << tbl_Expand_TD_5796_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_3: " << tvdiff(&tv_r_Window_3_590132_s, &tv_r_Window_3_590132_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4504_output: " << tbl_Aggregate_TD_4504_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_122075_s, &tv_r_Sort_2_122075_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_3438_output: " << tbl_Window_TD_3438_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_620158_s, &tv_r_LocalLimit_1_620158_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2134_output: " << tbl_Sort_TD_2134_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_350956_s, &tv_r_GlobalLimit_0_350956_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1523_output: " << tbl_LocalLimit_TD_1523_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.4958118 * 1000 << "ms" << std::endl; 
    return 0; 
}
