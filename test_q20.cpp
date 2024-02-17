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

#include "cfgFunc_q20.hpp" 
#include "q20.hpp" 

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
    std::cout << "NOTE:running query #20\n."; 
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
    Table tbl_GlobalLimit_TD_0150_output("tbl_GlobalLimit_TD_0150_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0150_output.allocateHost();
    Table tbl_LocalLimit_TD_1792_output("tbl_LocalLimit_TD_1792_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1792_output.allocateHost();
    Table tbl_Sort_TD_2370_output("tbl_Sort_TD_2370_output", 6100000, 7, "");
    tbl_Sort_TD_2370_output.allocateHost();
    Table tbl_Project_TD_3653_output("tbl_Project_TD_3653_output", 6100000, 7, "");
    tbl_Project_TD_3653_output.allocateHost();
    Table tbl_Window_TD_4799_output("tbl_Window_TD_4799_output", 6100000, 9, "");
    tbl_Window_TD_4799_output.allocateHost();
    Table tbl_Aggregate_TD_515_output("tbl_Aggregate_TD_515_output", 6100000, 8, "");
    tbl_Aggregate_TD_515_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6251_output("tbl_JOIN_INNER_TD_6251_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6251_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7664_output("tbl_JOIN_INNER_TD_7664_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7664_output.allocateHost();
    Table tbl_Filter_TD_7319_output("tbl_Filter_TD_7319_output", 6100000, 1, "");
    tbl_Filter_TD_7319_output.allocateHost();
    Table tbl_Filter_TD_8407_output("tbl_Filter_TD_8407_output", 6100000, 3, "");
    tbl_Filter_TD_8407_output.allocateHost();
    Table tbl_Filter_TD_8314_output("tbl_Filter_TD_8314_output", 6100000, 6, "");
    tbl_Filter_TD_8314_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8699_input;
    tbl_SerializeFromObject_TD_8699_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8699_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8699_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_8699_input.allocateHost();
    tbl_SerializeFromObject_TD_8699_input.loadHost();
    Table tbl_SerializeFromObject_TD_9195_input;
    tbl_SerializeFromObject_TD_9195_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9195_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9195_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_9195_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9195_input.allocateHost();
    tbl_SerializeFromObject_TD_9195_input.loadHost();
    Table tbl_SerializeFromObject_TD_94_input;
    tbl_SerializeFromObject_TD_94_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_94_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_94_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_94_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_94_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_94_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_94_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_94_input.allocateHost();
    tbl_SerializeFromObject_TD_94_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_488356_s, tv_r_Filter_8_488356_e;
    gettimeofday(&tv_r_Filter_8_488356_s, 0);
    SW_Filter_TD_8314(tbl_SerializeFromObject_TD_94_input, tbl_Filter_TD_8314_output);
    gettimeofday(&tv_r_Filter_8_488356_e, 0);

    struct timeval tv_r_Filter_8_198420_s, tv_r_Filter_8_198420_e;
    gettimeofday(&tv_r_Filter_8_198420_s, 0);
    SW_Filter_TD_8407(tbl_SerializeFromObject_TD_9195_input, tbl_Filter_TD_8407_output);
    gettimeofday(&tv_r_Filter_8_198420_e, 0);

    struct timeval tv_r_Filter_7_483846_s, tv_r_Filter_7_483846_e;
    gettimeofday(&tv_r_Filter_7_483846_s, 0);
    SW_Filter_TD_7319(tbl_SerializeFromObject_TD_8699_input, tbl_Filter_TD_7319_output);
    gettimeofday(&tv_r_Filter_7_483846_e, 0);

    struct timeval tv_r_JOIN_INNER_7_273428_s, tv_r_JOIN_INNER_7_273428_e;
    gettimeofday(&tv_r_JOIN_INNER_7_273428_s, 0);
    SW_JOIN_INNER_TD_7664(tbl_Filter_TD_8407_output, tbl_Filter_TD_8314_output, tbl_JOIN_INNER_TD_7664_output);
    gettimeofday(&tv_r_JOIN_INNER_7_273428_e, 0);

    struct timeval tv_r_JOIN_INNER_6_796750_s, tv_r_JOIN_INNER_6_796750_e;
    gettimeofday(&tv_r_JOIN_INNER_6_796750_s, 0);
    SW_JOIN_INNER_TD_6251(tbl_JOIN_INNER_TD_7664_output, tbl_Filter_TD_7319_output, tbl_JOIN_INNER_TD_6251_output);
    gettimeofday(&tv_r_JOIN_INNER_6_796750_e, 0);

    struct timeval tv_r_Aggregate_5_279204_s, tv_r_Aggregate_5_279204_e;
    gettimeofday(&tv_r_Aggregate_5_279204_s, 0);
    SW_Aggregate_TD_515(tbl_JOIN_INNER_TD_6251_output, tbl_Aggregate_TD_515_output);
    gettimeofday(&tv_r_Aggregate_5_279204_e, 0);

    struct timeval tv_r_Window_4_143259_s, tv_r_Window_4_143259_e;
    gettimeofday(&tv_r_Window_4_143259_s, 0);
    SW_Window_TD_4799(tbl_Aggregate_TD_515_output, tbl_Window_TD_4799_output);
    gettimeofday(&tv_r_Window_4_143259_e, 0);

    struct timeval tv_r_Project_3_672126_s, tv_r_Project_3_672126_e;
    gettimeofday(&tv_r_Project_3_672126_s, 0);
    SW_Project_TD_3653(tbl_Window_TD_4799_output, tbl_Project_TD_3653_output);
    gettimeofday(&tv_r_Project_3_672126_e, 0);

    struct timeval tv_r_Sort_2_607976_s, tv_r_Sort_2_607976_e;
    gettimeofday(&tv_r_Sort_2_607976_s, 0);
    SW_Sort_TD_2370(tbl_Project_TD_3653_output, tbl_Sort_TD_2370_output);
    gettimeofday(&tv_r_Sort_2_607976_e, 0);

    struct timeval tv_r_LocalLimit_1_690028_s, tv_r_LocalLimit_1_690028_e;
    gettimeofday(&tv_r_LocalLimit_1_690028_s, 0);
    SW_LocalLimit_TD_1792(tbl_Sort_TD_2370_output, tbl_LocalLimit_TD_1792_output);
    gettimeofday(&tv_r_LocalLimit_1_690028_e, 0);

    struct timeval tv_r_GlobalLimit_0_812506_s, tv_r_GlobalLimit_0_812506_e;
    gettimeofday(&tv_r_GlobalLimit_0_812506_s, 0);
    SW_GlobalLimit_TD_0150(tbl_LocalLimit_TD_1792_output, tbl_GlobalLimit_TD_0150_output);
    gettimeofday(&tv_r_GlobalLimit_0_812506_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_488356_s, &tv_r_Filter_8_488356_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_94_input: " << tbl_SerializeFromObject_TD_94_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_198420_s, &tv_r_Filter_8_198420_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9195_input: " << tbl_SerializeFromObject_TD_9195_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_483846_s, &tv_r_Filter_7_483846_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8699_input: " << tbl_SerializeFromObject_TD_8699_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_273428_s, &tv_r_JOIN_INNER_7_273428_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8407_output: " << tbl_Filter_TD_8407_output.getNumRow() << " " << "tbl_Filter_TD_8314_output: " << tbl_Filter_TD_8314_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_796750_s, &tv_r_JOIN_INNER_6_796750_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7664_output: " << tbl_JOIN_INNER_TD_7664_output.getNumRow() << " " << "tbl_Filter_TD_7319_output: " << tbl_Filter_TD_7319_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_279204_s, &tv_r_Aggregate_5_279204_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6251_output: " << tbl_JOIN_INNER_TD_6251_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_143259_s, &tv_r_Window_4_143259_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_515_output: " << tbl_Aggregate_TD_515_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_672126_s, &tv_r_Project_3_672126_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4799_output: " << tbl_Window_TD_4799_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_607976_s, &tv_r_Sort_2_607976_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3653_output: " << tbl_Project_TD_3653_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_690028_s, &tv_r_LocalLimit_1_690028_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2370_output: " << tbl_Sort_TD_2370_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_812506_s, &tv_r_GlobalLimit_0_812506_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1792_output: " << tbl_LocalLimit_TD_1792_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.55622274 * 1000 << "ms" << std::endl; 
    return 0; 
}
