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

#include "cfgFunc_q21.hpp" 
#include "q21.hpp" 

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
    std::cout << "NOTE:running query #21\n."; 
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
    Table tbl_GlobalLimit_TD_0805_output("tbl_GlobalLimit_TD_0805_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0805_output.allocateHost();
    Table tbl_LocalLimit_TD_1689_output("tbl_LocalLimit_TD_1689_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1689_output.allocateHost();
    Table tbl_Sort_TD_2802_output("tbl_Sort_TD_2802_output", 6100000, 4, "");
    tbl_Sort_TD_2802_output.allocateHost();
    Table tbl_Filter_TD_3280_output("tbl_Filter_TD_3280_output", 6100000, 4, "");
    tbl_Filter_TD_3280_output.allocateHost();
    Table tbl_Aggregate_TD_4575_output("tbl_Aggregate_TD_4575_output", 6100000, 4, "");
    tbl_Aggregate_TD_4575_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5493_output("tbl_JOIN_INNER_TD_5493_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5493_output.allocateHost();
    Table tbl_JOIN_INNER_TD_625_output("tbl_JOIN_INNER_TD_625_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_625_output.allocateHost();
    Table tbl_Filter_TD_6616_output("tbl_Filter_TD_6616_output", 6100000, 2, "");
    tbl_Filter_TD_6616_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7991_output("tbl_JOIN_INNER_TD_7991_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7991_output.allocateHost();
    Table tbl_Filter_TD_721_output("tbl_Filter_TD_721_output", 6100000, 2, "");
    tbl_Filter_TD_721_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7861_input;
    tbl_SerializeFromObject_TD_7861_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7861_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7861_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7861_input.allocateHost();
    tbl_SerializeFromObject_TD_7861_input.loadHost();
    Table tbl_Filter_TD_871_output("tbl_Filter_TD_871_output", 6100000, 4, "");
    tbl_Filter_TD_871_output.allocateHost();
    Table tbl_Filter_TD_8608_output("tbl_Filter_TD_8608_output", 6100000, 2, "");
    tbl_Filter_TD_8608_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8640_input;
    tbl_SerializeFromObject_TD_8640_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8640_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8640_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8640_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_8640_input.allocateHost();
    tbl_SerializeFromObject_TD_8640_input.loadHost();
    Table tbl_SerializeFromObject_TD_9619_input;
    tbl_SerializeFromObject_TD_9619_input = Table("inventory", inventory_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9619_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_9619_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_9619_input.addCol("inv_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_9619_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_9619_input.allocateHost();
    tbl_SerializeFromObject_TD_9619_input.loadHost();
    Table tbl_SerializeFromObject_TD_9667_input;
    tbl_SerializeFromObject_TD_9667_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9667_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_9667_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9667_input.allocateHost();
    tbl_SerializeFromObject_TD_9667_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_861246_s, tv_r_Filter_8_861246_e;
    gettimeofday(&tv_r_Filter_8_861246_s, 0);
    SW_Filter_TD_8608(tbl_SerializeFromObject_TD_9667_input, tbl_Filter_TD_8608_output);
    gettimeofday(&tv_r_Filter_8_861246_e, 0);

    struct timeval tv_r_Filter_8_598487_s, tv_r_Filter_8_598487_e;
    gettimeofday(&tv_r_Filter_8_598487_s, 0);
    SW_Filter_TD_871(tbl_SerializeFromObject_TD_9619_input, tbl_Filter_TD_871_output);
    gettimeofday(&tv_r_Filter_8_598487_e, 0);

    struct timeval tv_r_Filter_7_470186_s, tv_r_Filter_7_470186_e;
    gettimeofday(&tv_r_Filter_7_470186_s, 0);
    SW_Filter_TD_721(tbl_SerializeFromObject_TD_8640_input, tbl_Filter_TD_721_output);
    gettimeofday(&tv_r_Filter_7_470186_e, 0);

    struct timeval tv_r_JOIN_INNER_7_600874_s, tv_r_JOIN_INNER_7_600874_e;
    gettimeofday(&tv_r_JOIN_INNER_7_600874_s, 0);
    SW_JOIN_INNER_TD_7991(tbl_Filter_TD_871_output, tbl_Filter_TD_8608_output, tbl_JOIN_INNER_TD_7991_output);
    gettimeofday(&tv_r_JOIN_INNER_7_600874_e, 0);

    struct timeval tv_r_Filter_6_147730_s, tv_r_Filter_6_147730_e;
    gettimeofday(&tv_r_Filter_6_147730_s, 0);
    SW_Filter_TD_6616(tbl_SerializeFromObject_TD_7861_input, tbl_Filter_TD_6616_output);
    gettimeofday(&tv_r_Filter_6_147730_e, 0);

    struct timeval tv_r_JOIN_INNER_6_652519_s, tv_r_JOIN_INNER_6_652519_e;
    gettimeofday(&tv_r_JOIN_INNER_6_652519_s, 0);
    SW_JOIN_INNER_TD_625(tbl_JOIN_INNER_TD_7991_output, tbl_Filter_TD_721_output, tbl_JOIN_INNER_TD_625_output);
    gettimeofday(&tv_r_JOIN_INNER_6_652519_e, 0);

    struct timeval tv_r_JOIN_INNER_5_792271_s, tv_r_JOIN_INNER_5_792271_e;
    gettimeofday(&tv_r_JOIN_INNER_5_792271_s, 0);
    SW_JOIN_INNER_TD_5493(tbl_JOIN_INNER_TD_625_output, tbl_Filter_TD_6616_output, tbl_JOIN_INNER_TD_5493_output);
    gettimeofday(&tv_r_JOIN_INNER_5_792271_e, 0);

    struct timeval tv_r_Aggregate_4_56338_s, tv_r_Aggregate_4_56338_e;
    gettimeofday(&tv_r_Aggregate_4_56338_s, 0);
    SW_Aggregate_TD_4575(tbl_JOIN_INNER_TD_5493_output, tbl_Aggregate_TD_4575_output);
    gettimeofday(&tv_r_Aggregate_4_56338_e, 0);

    struct timeval tv_r_Filter_3_260860_s, tv_r_Filter_3_260860_e;
    gettimeofday(&tv_r_Filter_3_260860_s, 0);
    SW_Filter_TD_3280(tbl_Aggregate_TD_4575_output, tbl_Filter_TD_3280_output);
    gettimeofday(&tv_r_Filter_3_260860_e, 0);

    struct timeval tv_r_Sort_2_242013_s, tv_r_Sort_2_242013_e;
    gettimeofday(&tv_r_Sort_2_242013_s, 0);
    SW_Sort_TD_2802(tbl_Filter_TD_3280_output, tbl_Sort_TD_2802_output);
    gettimeofday(&tv_r_Sort_2_242013_e, 0);

    struct timeval tv_r_LocalLimit_1_943501_s, tv_r_LocalLimit_1_943501_e;
    gettimeofday(&tv_r_LocalLimit_1_943501_s, 0);
    SW_LocalLimit_TD_1689(tbl_Sort_TD_2802_output, tbl_LocalLimit_TD_1689_output);
    gettimeofday(&tv_r_LocalLimit_1_943501_e, 0);

    struct timeval tv_r_GlobalLimit_0_492198_s, tv_r_GlobalLimit_0_492198_e;
    gettimeofday(&tv_r_GlobalLimit_0_492198_s, 0);
    SW_GlobalLimit_TD_0805(tbl_LocalLimit_TD_1689_output, tbl_GlobalLimit_TD_0805_output);
    gettimeofday(&tv_r_GlobalLimit_0_492198_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_861246_s, &tv_r_Filter_8_861246_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9667_input: " << tbl_SerializeFromObject_TD_9667_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_598487_s, &tv_r_Filter_8_598487_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9619_input: " << tbl_SerializeFromObject_TD_9619_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_470186_s, &tv_r_Filter_7_470186_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8640_input: " << tbl_SerializeFromObject_TD_8640_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_600874_s, &tv_r_JOIN_INNER_7_600874_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_871_output: " << tbl_Filter_TD_871_output.getNumRow() << " " << "tbl_Filter_TD_8608_output: " << tbl_Filter_TD_8608_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_147730_s, &tv_r_Filter_6_147730_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7861_input: " << tbl_SerializeFromObject_TD_7861_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_652519_s, &tv_r_JOIN_INNER_6_652519_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7991_output: " << tbl_JOIN_INNER_TD_7991_output.getNumRow() << " " << "tbl_Filter_TD_721_output: " << tbl_Filter_TD_721_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_792271_s, &tv_r_JOIN_INNER_5_792271_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_625_output: " << tbl_JOIN_INNER_TD_625_output.getNumRow() << " " << "tbl_Filter_TD_6616_output: " << tbl_Filter_TD_6616_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_56338_s, &tv_r_Aggregate_4_56338_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5493_output: " << tbl_JOIN_INNER_TD_5493_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_260860_s, &tv_r_Filter_3_260860_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4575_output: " << tbl_Aggregate_TD_4575_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_242013_s, &tv_r_Sort_2_242013_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3280_output: " << tbl_Filter_TD_3280_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_943501_s, &tv_r_LocalLimit_1_943501_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2802_output: " << tbl_Sort_TD_2802_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_492198_s, &tv_r_GlobalLimit_0_492198_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1689_output: " << tbl_LocalLimit_TD_1689_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.081444 * 1000 << "ms" << std::endl; 
    return 0; 
}
