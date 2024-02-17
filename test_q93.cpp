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

#include "cfgFunc_q93.hpp" 
#include "q93.hpp" 

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
    std::cout << "NOTE:running query #93\n."; 
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
    Table tbl_GlobalLimit_TD_0636_output("tbl_GlobalLimit_TD_0636_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0636_output.allocateHost();
    Table tbl_LocalLimit_TD_1757_output("tbl_LocalLimit_TD_1757_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1757_output.allocateHost();
    Table tbl_Sort_TD_2981_output("tbl_Sort_TD_2981_output", 6100000, 2, "");
    tbl_Sort_TD_2981_output.allocateHost();
    Table tbl_Aggregate_TD_348_output("tbl_Aggregate_TD_348_output", 6100000, 2, "");
    tbl_Aggregate_TD_348_output.allocateHost();
    Table tbl_Project_TD_4799_output("tbl_Project_TD_4799_output", 6100000, 2, "");
    tbl_Project_TD_4799_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5801_output("tbl_JOIN_INNER_TD_5801_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5801_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6615_output("tbl_JOIN_INNER_TD_6615_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6615_output.allocateHost();
    Table tbl_Filter_TD_6407_output("tbl_Filter_TD_6407_output", 6100000, 1, "");
    tbl_Filter_TD_6407_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7821_input;
    tbl_SerializeFromObject_TD_7821_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_7821_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_7821_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_7821_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_7821_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_7821_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_7821_input.allocateHost();
    tbl_SerializeFromObject_TD_7821_input.loadHost();
    Table tbl_Filter_TD_7217_output("tbl_Filter_TD_7217_output", 6100000, 4, "");
    tbl_Filter_TD_7217_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7136_input;
    tbl_SerializeFromObject_TD_7136_input = Table("reason", reason_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7136_input.addCol("r_reason_sk", 4);
    tbl_SerializeFromObject_TD_7136_input.addCol("r_reason_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7136_input.allocateHost();
    tbl_SerializeFromObject_TD_7136_input.loadHost();
    Table tbl_SerializeFromObject_TD_8493_input;
    tbl_SerializeFromObject_TD_8493_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8493_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_8493_input.addCol("sr_reason_sk", 4);
    tbl_SerializeFromObject_TD_8493_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_8493_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_8493_input.allocateHost();
    tbl_SerializeFromObject_TD_8493_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_260794_s, tv_r_Filter_7_260794_e;
    gettimeofday(&tv_r_Filter_7_260794_s, 0);
    SW_Filter_TD_7217(tbl_SerializeFromObject_TD_8493_input, tbl_Filter_TD_7217_output);
    gettimeofday(&tv_r_Filter_7_260794_e, 0);

    struct timeval tv_r_Filter_6_125963_s, tv_r_Filter_6_125963_e;
    gettimeofday(&tv_r_Filter_6_125963_s, 0);
    SW_Filter_TD_6407(tbl_SerializeFromObject_TD_7136_input, tbl_Filter_TD_6407_output);
    gettimeofday(&tv_r_Filter_6_125963_e, 0);

    struct timeval tv_r_JOIN_INNER_6_548384_s, tv_r_JOIN_INNER_6_548384_e;
    gettimeofday(&tv_r_JOIN_INNER_6_548384_s, 0);
    SW_JOIN_INNER_TD_6615(tbl_SerializeFromObject_TD_7821_input, tbl_Filter_TD_7217_output, tbl_JOIN_INNER_TD_6615_output);
    gettimeofday(&tv_r_JOIN_INNER_6_548384_e, 0);

    struct timeval tv_r_JOIN_INNER_5_928467_s, tv_r_JOIN_INNER_5_928467_e;
    gettimeofday(&tv_r_JOIN_INNER_5_928467_s, 0);
    SW_JOIN_INNER_TD_5801(tbl_JOIN_INNER_TD_6615_output, tbl_Filter_TD_6407_output, tbl_JOIN_INNER_TD_5801_output);
    gettimeofday(&tv_r_JOIN_INNER_5_928467_e, 0);

    struct timeval tv_r_Project_4_736925_s, tv_r_Project_4_736925_e;
    gettimeofday(&tv_r_Project_4_736925_s, 0);
    SW_Project_TD_4799(tbl_JOIN_INNER_TD_5801_output, tbl_Project_TD_4799_output);
    gettimeofday(&tv_r_Project_4_736925_e, 0);

    struct timeval tv_r_Aggregate_3_912845_s, tv_r_Aggregate_3_912845_e;
    gettimeofday(&tv_r_Aggregate_3_912845_s, 0);
    SW_Aggregate_TD_348(tbl_Project_TD_4799_output, tbl_Aggregate_TD_348_output);
    gettimeofday(&tv_r_Aggregate_3_912845_e, 0);

    struct timeval tv_r_Sort_2_905309_s, tv_r_Sort_2_905309_e;
    gettimeofday(&tv_r_Sort_2_905309_s, 0);
    SW_Sort_TD_2981(tbl_Aggregate_TD_348_output, tbl_Sort_TD_2981_output);
    gettimeofday(&tv_r_Sort_2_905309_e, 0);

    struct timeval tv_r_LocalLimit_1_618815_s, tv_r_LocalLimit_1_618815_e;
    gettimeofday(&tv_r_LocalLimit_1_618815_s, 0);
    SW_LocalLimit_TD_1757(tbl_Sort_TD_2981_output, tbl_LocalLimit_TD_1757_output);
    gettimeofday(&tv_r_LocalLimit_1_618815_e, 0);

    struct timeval tv_r_GlobalLimit_0_629000_s, tv_r_GlobalLimit_0_629000_e;
    gettimeofday(&tv_r_GlobalLimit_0_629000_s, 0);
    SW_GlobalLimit_TD_0636(tbl_LocalLimit_TD_1757_output, tbl_GlobalLimit_TD_0636_output);
    gettimeofday(&tv_r_GlobalLimit_0_629000_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_260794_s, &tv_r_Filter_7_260794_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8493_input: " << tbl_SerializeFromObject_TD_8493_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_125963_s, &tv_r_Filter_6_125963_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7136_input: " << tbl_SerializeFromObject_TD_7136_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_548384_s, &tv_r_JOIN_INNER_6_548384_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7821_input: " << tbl_SerializeFromObject_TD_7821_input.getNumRow() << " " << "tbl_Filter_TD_7217_output: " << tbl_Filter_TD_7217_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_928467_s, &tv_r_JOIN_INNER_5_928467_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6615_output: " << tbl_JOIN_INNER_TD_6615_output.getNumRow() << " " << "tbl_Filter_TD_6407_output: " << tbl_Filter_TD_6407_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_736925_s, &tv_r_Project_4_736925_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5801_output: " << tbl_JOIN_INNER_TD_5801_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_912845_s, &tv_r_Aggregate_3_912845_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4799_output: " << tbl_Project_TD_4799_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_905309_s, &tv_r_Sort_2_905309_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_348_output: " << tbl_Aggregate_TD_348_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_618815_s, &tv_r_LocalLimit_1_618815_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2981_output: " << tbl_Sort_TD_2981_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_629000_s, &tv_r_GlobalLimit_0_629000_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1757_output: " << tbl_LocalLimit_TD_1757_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.2281862 * 1000 << "ms" << std::endl; 
    return 0; 
}
