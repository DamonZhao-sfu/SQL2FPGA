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

#include "cfgFunc_q8.hpp" 
#include "q8.hpp" 

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
    std::cout << "NOTE:running query #8\n."; 
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
    Table tbl_GlobalLimit_TD_053_output("tbl_GlobalLimit_TD_053_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_053_output.allocateHost();
    Table tbl_LocalLimit_TD_1453_output("tbl_LocalLimit_TD_1453_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1453_output.allocateHost();
    Table tbl_Sort_TD_2109_output("tbl_Sort_TD_2109_output", 6100000, 2, "");
    tbl_Sort_TD_2109_output.allocateHost();
    Table tbl_Aggregate_TD_352_output("tbl_Aggregate_TD_352_output", 6100000, 2, "");
    tbl_Aggregate_TD_352_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4450_output("tbl_JOIN_INNER_TD_4450_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4450_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5910_output("tbl_JOIN_INNER_TD_5910_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5910_output.allocateHost();
    Table tbl_Aggregate_TD_5566_output("tbl_Aggregate_TD_5566_output", 6100000, 1, "");
    tbl_Aggregate_TD_5566_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6100_output("tbl_JOIN_INNER_TD_6100_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6100_output.allocateHost();
    Table tbl_Filter_TD_6694_output("tbl_Filter_TD_6694_output", 6100000, 3, "");
    tbl_Filter_TD_6694_output.allocateHost();
    Table tbl_Project_TD_6166_output("tbl_Project_TD_6166_output", 6100000, 1, "");
    tbl_Project_TD_6166_output.allocateHost();
    Table tbl_Filter_TD_7950_output("tbl_Filter_TD_7950_output", 6100000, 3, "");
    tbl_Filter_TD_7950_output.allocateHost();
    Table tbl_Filter_TD_7489_output("tbl_Filter_TD_7489_output", 6100000, 1, "");
    tbl_Filter_TD_7489_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7667_input;
    tbl_SerializeFromObject_TD_7667_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7667_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7667_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7667_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7667_input.allocateHost();
    tbl_SerializeFromObject_TD_7667_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_7226_output("tbl_JOIN_LEFTSEMI_TD_7226_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_7226_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8573_input;
    tbl_SerializeFromObject_TD_8573_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8573_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8573_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8573_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_8573_input.allocateHost();
    tbl_SerializeFromObject_TD_8573_input.loadHost();
    Table tbl_SerializeFromObject_TD_8305_input;
    tbl_SerializeFromObject_TD_8305_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8305_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8305_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8305_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8305_input.allocateHost();
    tbl_SerializeFromObject_TD_8305_input.loadHost();
    Table tbl_Filter_TD_8411_output("tbl_Filter_TD_8411_output", 6100000, 1, "");
    tbl_Filter_TD_8411_output.allocateHost();
    Table tbl_Filter_TD_8568_output("tbl_Filter_TD_8568_output", 6100000, 1, "");
    tbl_Filter_TD_8568_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9706_input;
    tbl_SerializeFromObject_TD_9706_input = Table("customer_address", customer_address_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_9706_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9706_input.allocateHost();
    tbl_SerializeFromObject_TD_9706_input.loadHost();
    Table tbl_Aggregate_TD_9944_output("tbl_Aggregate_TD_9944_output", 6100000, 2, "");
    tbl_Aggregate_TD_9944_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10614_output("tbl_JOIN_INNER_TD_10614_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_10614_output.allocateHost();
    Table tbl_Filter_TD_11943_output("tbl_Filter_TD_11943_output", 6100000, 2, "");
    tbl_Filter_TD_11943_output.allocateHost();
    Table tbl_Filter_TD_11100_output("tbl_Filter_TD_11100_output", 6100000, 1, "");
    tbl_Filter_TD_11100_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12752_input;
    tbl_SerializeFromObject_TD_12752_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12752_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_12752_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12752_input.allocateHost();
    tbl_SerializeFromObject_TD_12752_input.loadHost();
    Table tbl_SerializeFromObject_TD_12587_input;
    tbl_SerializeFromObject_TD_12587_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12587_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_12587_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12587_input.allocateHost();
    tbl_SerializeFromObject_TD_12587_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_339862_s, tv_r_Filter_11_339862_e;
    gettimeofday(&tv_r_Filter_11_339862_s, 0);
    SW_Filter_TD_11100(tbl_SerializeFromObject_TD_12587_input, tbl_Filter_TD_11100_output);
    gettimeofday(&tv_r_Filter_11_339862_e, 0);

    struct timeval tv_r_Filter_11_378418_s, tv_r_Filter_11_378418_e;
    gettimeofday(&tv_r_Filter_11_378418_s, 0);
    SW_Filter_TD_11943(tbl_SerializeFromObject_TD_12752_input, tbl_Filter_TD_11943_output);
    gettimeofday(&tv_r_Filter_11_378418_e, 0);

    struct timeval tv_r_JOIN_INNER_10_762881_s, tv_r_JOIN_INNER_10_762881_e;
    gettimeofday(&tv_r_JOIN_INNER_10_762881_s, 0);
    SW_JOIN_INNER_TD_10614(tbl_Filter_TD_11943_output, tbl_Filter_TD_11100_output, tbl_JOIN_INNER_TD_10614_output);
    gettimeofday(&tv_r_JOIN_INNER_10_762881_e, 0);

    struct timeval tv_r_Aggregate_9_626219_s, tv_r_Aggregate_9_626219_e;
    gettimeofday(&tv_r_Aggregate_9_626219_s, 0);
    SW_Aggregate_TD_9944(tbl_JOIN_INNER_TD_10614_output, tbl_Aggregate_TD_9944_output);
    gettimeofday(&tv_r_Aggregate_9_626219_e, 0);

    struct timeval tv_r_Filter_8_415388_s, tv_r_Filter_8_415388_e;
    gettimeofday(&tv_r_Filter_8_415388_s, 0);
    SW_Filter_TD_8568(tbl_Aggregate_TD_9944_output, tbl_Filter_TD_8568_output);
    gettimeofday(&tv_r_Filter_8_415388_e, 0);

    struct timeval tv_r_Filter_8_117495_s, tv_r_Filter_8_117495_e;
    gettimeofday(&tv_r_Filter_8_117495_s, 0);
    SW_Filter_TD_8411(tbl_SerializeFromObject_TD_9706_input, tbl_Filter_TD_8411_output);
    gettimeofday(&tv_r_Filter_8_117495_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_666287_s, tv_r_JOIN_LEFTSEMI_7_666287_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_666287_s, 0);
    SW_JOIN_LEFTSEMI_TD_7226(tbl_Filter_TD_8411_output, tbl_Filter_TD_8568_output, tbl_JOIN_LEFTSEMI_TD_7226_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_666287_e, 0);

    struct timeval tv_r_Filter_7_692487_s, tv_r_Filter_7_692487_e;
    gettimeofday(&tv_r_Filter_7_692487_s, 0);
    SW_Filter_TD_7489(tbl_SerializeFromObject_TD_8305_input, tbl_Filter_TD_7489_output);
    gettimeofday(&tv_r_Filter_7_692487_e, 0);

    struct timeval tv_r_Filter_7_424490_s, tv_r_Filter_7_424490_e;
    gettimeofday(&tv_r_Filter_7_424490_s, 0);
    SW_Filter_TD_7950(tbl_SerializeFromObject_TD_8573_input, tbl_Filter_TD_7950_output);
    gettimeofday(&tv_r_Filter_7_424490_e, 0);

    struct timeval tv_r_Project_6_518677_s, tv_r_Project_6_518677_e;
    gettimeofday(&tv_r_Project_6_518677_s, 0);
    SW_Project_TD_6166(tbl_JOIN_LEFTSEMI_TD_7226_output, tbl_Project_TD_6166_output);
    gettimeofday(&tv_r_Project_6_518677_e, 0);

    struct timeval tv_r_Filter_6_860047_s, tv_r_Filter_6_860047_e;
    gettimeofday(&tv_r_Filter_6_860047_s, 0);
    SW_Filter_TD_6694(tbl_SerializeFromObject_TD_7667_input, tbl_Filter_TD_6694_output);
    gettimeofday(&tv_r_Filter_6_860047_e, 0);

    struct timeval tv_r_JOIN_INNER_6_522064_s, tv_r_JOIN_INNER_6_522064_e;
    gettimeofday(&tv_r_JOIN_INNER_6_522064_s, 0);
    SW_JOIN_INNER_TD_6100(tbl_Filter_TD_7950_output, tbl_Filter_TD_7489_output, tbl_JOIN_INNER_TD_6100_output);
    gettimeofday(&tv_r_JOIN_INNER_6_522064_e, 0);

    struct timeval tv_r_Aggregate_5_342972_s, tv_r_Aggregate_5_342972_e;
    gettimeofday(&tv_r_Aggregate_5_342972_s, 0);
    SW_Aggregate_TD_5566(tbl_Project_TD_6166_output, tbl_Aggregate_TD_5566_output);
    gettimeofday(&tv_r_Aggregate_5_342972_e, 0);

    struct timeval tv_r_JOIN_INNER_5_178676_s, tv_r_JOIN_INNER_5_178676_e;
    gettimeofday(&tv_r_JOIN_INNER_5_178676_s, 0);
    SW_JOIN_INNER_TD_5910(tbl_JOIN_INNER_TD_6100_output, tbl_Filter_TD_6694_output, tbl_JOIN_INNER_TD_5910_output);
    gettimeofday(&tv_r_JOIN_INNER_5_178676_e, 0);

    struct timeval tv_r_JOIN_INNER_4_481481_s, tv_r_JOIN_INNER_4_481481_e;
    gettimeofday(&tv_r_JOIN_INNER_4_481481_s, 0);
    SW_JOIN_INNER_TD_4450(tbl_JOIN_INNER_TD_5910_output, tbl_Aggregate_TD_5566_output, tbl_JOIN_INNER_TD_4450_output);
    gettimeofday(&tv_r_JOIN_INNER_4_481481_e, 0);

    struct timeval tv_r_Aggregate_3_345361_s, tv_r_Aggregate_3_345361_e;
    gettimeofday(&tv_r_Aggregate_3_345361_s, 0);
    SW_Aggregate_TD_352(tbl_JOIN_INNER_TD_4450_output, tbl_Aggregate_TD_352_output);
    gettimeofday(&tv_r_Aggregate_3_345361_e, 0);

    struct timeval tv_r_Sort_2_139371_s, tv_r_Sort_2_139371_e;
    gettimeofday(&tv_r_Sort_2_139371_s, 0);
    SW_Sort_TD_2109(tbl_Aggregate_TD_352_output, tbl_Sort_TD_2109_output);
    gettimeofday(&tv_r_Sort_2_139371_e, 0);

    struct timeval tv_r_LocalLimit_1_490311_s, tv_r_LocalLimit_1_490311_e;
    gettimeofday(&tv_r_LocalLimit_1_490311_s, 0);
    SW_LocalLimit_TD_1453(tbl_Sort_TD_2109_output, tbl_LocalLimit_TD_1453_output);
    gettimeofday(&tv_r_LocalLimit_1_490311_e, 0);

    struct timeval tv_r_GlobalLimit_0_400275_s, tv_r_GlobalLimit_0_400275_e;
    gettimeofday(&tv_r_GlobalLimit_0_400275_s, 0);
    SW_GlobalLimit_TD_053(tbl_LocalLimit_TD_1453_output, tbl_GlobalLimit_TD_053_output);
    gettimeofday(&tv_r_GlobalLimit_0_400275_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_339862_s, &tv_r_Filter_11_339862_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12587_input: " << tbl_SerializeFromObject_TD_12587_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_378418_s, &tv_r_Filter_11_378418_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12752_input: " << tbl_SerializeFromObject_TD_12752_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_762881_s, &tv_r_JOIN_INNER_10_762881_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11943_output: " << tbl_Filter_TD_11943_output.getNumRow() << " " << "tbl_Filter_TD_11100_output: " << tbl_Filter_TD_11100_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_626219_s, &tv_r_Aggregate_9_626219_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10614_output: " << tbl_JOIN_INNER_TD_10614_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_415388_s, &tv_r_Filter_8_415388_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9944_output: " << tbl_Aggregate_TD_9944_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_117495_s, &tv_r_Filter_8_117495_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9706_input: " << tbl_SerializeFromObject_TD_9706_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_666287_s, &tv_r_JOIN_LEFTSEMI_7_666287_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8411_output: " << tbl_Filter_TD_8411_output.getNumRow() << " " << "tbl_Filter_TD_8568_output: " << tbl_Filter_TD_8568_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_692487_s, &tv_r_Filter_7_692487_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8305_input: " << tbl_SerializeFromObject_TD_8305_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_424490_s, &tv_r_Filter_7_424490_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8573_input: " << tbl_SerializeFromObject_TD_8573_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_518677_s, &tv_r_Project_6_518677_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_7226_output: " << tbl_JOIN_LEFTSEMI_TD_7226_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_860047_s, &tv_r_Filter_6_860047_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7667_input: " << tbl_SerializeFromObject_TD_7667_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_522064_s, &tv_r_JOIN_INNER_6_522064_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7950_output: " << tbl_Filter_TD_7950_output.getNumRow() << " " << "tbl_Filter_TD_7489_output: " << tbl_Filter_TD_7489_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_342972_s, &tv_r_Aggregate_5_342972_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6166_output: " << tbl_Project_TD_6166_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_178676_s, &tv_r_JOIN_INNER_5_178676_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6100_output: " << tbl_JOIN_INNER_TD_6100_output.getNumRow() << " " << "tbl_Filter_TD_6694_output: " << tbl_Filter_TD_6694_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_481481_s, &tv_r_JOIN_INNER_4_481481_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5910_output: " << tbl_JOIN_INNER_TD_5910_output.getNumRow() << " " << "tbl_Aggregate_TD_5566_output: " << tbl_Aggregate_TD_5566_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_345361_s, &tv_r_Aggregate_3_345361_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4450_output: " << tbl_JOIN_INNER_TD_4450_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_139371_s, &tv_r_Sort_2_139371_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_352_output: " << tbl_Aggregate_TD_352_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_490311_s, &tv_r_LocalLimit_1_490311_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2109_output: " << tbl_Sort_TD_2109_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_400275_s, &tv_r_GlobalLimit_0_400275_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1453_output: " << tbl_LocalLimit_TD_1453_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 50.36088 * 1000 << "ms" << std::endl; 
    return 0; 
}
