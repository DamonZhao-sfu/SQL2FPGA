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

#include "cfgFunc_q84.hpp" 
#include "q84.hpp" 

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
    std::cout << "NOTE:running query #84\n."; 
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
    Table tbl_GlobalLimit_TD_0170_output("tbl_GlobalLimit_TD_0170_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0170_output.allocateHost();
    Table tbl_LocalLimit_TD_1353_output("tbl_LocalLimit_TD_1353_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1353_output.allocateHost();
    Table tbl_Project_TD_2509_output("tbl_Project_TD_2509_output", 6100000, 2, "");
    tbl_Project_TD_2509_output.allocateHost();
    Table tbl_Sort_TD_3389_output("tbl_Sort_TD_3389_output", 6100000, 2, "");
    tbl_Sort_TD_3389_output.allocateHost();
    Table tbl_Project_TD_4995_output("tbl_Project_TD_4995_output", 6100000, 2, "");
    tbl_Project_TD_4995_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5111_output("tbl_JOIN_INNER_TD_5111_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5111_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6111_output("tbl_JOIN_INNER_TD_6111_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6111_output.allocateHost();
    Table tbl_Filter_TD_6339_output("tbl_Filter_TD_6339_output", 6100000, 1, "");
    tbl_Filter_TD_6339_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7813_output("tbl_JOIN_INNER_TD_7813_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_7813_output.allocateHost();
    Table tbl_Filter_TD_7424_output("tbl_Filter_TD_7424_output", 6100000, 1, "");
    tbl_Filter_TD_7424_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7795_input;
    tbl_SerializeFromObject_TD_7795_input = Table("store_returns", store_returns_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7795_input.addCol("sr_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_7795_input.allocateHost();
    tbl_SerializeFromObject_TD_7795_input.loadHost();
    Table tbl_JOIN_INNER_TD_865_output("tbl_JOIN_INNER_TD_865_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_865_output.allocateHost();
    Table tbl_Filter_TD_8418_output("tbl_Filter_TD_8418_output", 6100000, 2, "");
    tbl_Filter_TD_8418_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8983_input;
    tbl_SerializeFromObject_TD_8983_input = Table("income_band", income_band_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8983_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_8983_input.addCol("ib_lower_bound", 4);
    tbl_SerializeFromObject_TD_8983_input.addCol("ib_upper_bound", 4);
    tbl_SerializeFromObject_TD_8983_input.allocateHost();
    tbl_SerializeFromObject_TD_8983_input.loadHost();
    Table tbl_JOIN_INNER_TD_9578_output("tbl_JOIN_INNER_TD_9578_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9578_output.allocateHost();
    Table tbl_Filter_TD_9910_output("tbl_Filter_TD_9910_output", 6100000, 1, "");
    tbl_Filter_TD_9910_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9656_input;
    tbl_SerializeFromObject_TD_9656_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9656_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9656_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_9656_input.allocateHost();
    tbl_SerializeFromObject_TD_9656_input.loadHost();
    Table tbl_Filter_TD_10589_output("tbl_Filter_TD_10589_output", 6100000, 4, "");
    tbl_Filter_TD_10589_output.allocateHost();
    Table tbl_Filter_TD_10426_output("tbl_Filter_TD_10426_output", 6100000, 1, "");
    tbl_Filter_TD_10426_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10480_input;
    tbl_SerializeFromObject_TD_10480_input = Table("customer_demographics", customer_demographics_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_10480_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_10480_input.allocateHost();
    tbl_SerializeFromObject_TD_10480_input.loadHost();
    Table tbl_SerializeFromObject_TD_11204_input;
    tbl_SerializeFromObject_TD_11204_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11204_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11204_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_11204_input.addCol("c_current_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_11204_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_11204_input.allocateHost();
    tbl_SerializeFromObject_TD_11204_input.loadHost();
    Table tbl_SerializeFromObject_TD_11571_input;
    tbl_SerializeFromObject_TD_11571_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11571_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_11571_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11571_input.allocateHost();
    tbl_SerializeFromObject_TD_11571_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_703044_s, tv_r_Filter_10_703044_e;
    gettimeofday(&tv_r_Filter_10_703044_s, 0);
    SW_Filter_TD_10426(tbl_SerializeFromObject_TD_11571_input, tbl_Filter_TD_10426_output);
    gettimeofday(&tv_r_Filter_10_703044_e, 0);

    struct timeval tv_r_Filter_10_281553_s, tv_r_Filter_10_281553_e;
    gettimeofday(&tv_r_Filter_10_281553_s, 0);
    SW_Filter_TD_10589(tbl_SerializeFromObject_TD_11204_input, tbl_Filter_TD_10589_output);
    gettimeofday(&tv_r_Filter_10_281553_e, 0);

    struct timeval tv_r_Filter_9_679077_s, tv_r_Filter_9_679077_e;
    gettimeofday(&tv_r_Filter_9_679077_s, 0);
    SW_Filter_TD_9910(tbl_SerializeFromObject_TD_10480_input, tbl_Filter_TD_9910_output);
    gettimeofday(&tv_r_Filter_9_679077_e, 0);

    struct timeval tv_r_JOIN_INNER_9_194418_s, tv_r_JOIN_INNER_9_194418_e;
    gettimeofday(&tv_r_JOIN_INNER_9_194418_s, 0);
    SW_JOIN_INNER_TD_9578(tbl_Filter_TD_10589_output, tbl_Filter_TD_10426_output, tbl_JOIN_INNER_TD_9578_output);
    gettimeofday(&tv_r_JOIN_INNER_9_194418_e, 0);

    struct timeval tv_r_Filter_8_578775_s, tv_r_Filter_8_578775_e;
    gettimeofday(&tv_r_Filter_8_578775_s, 0);
    SW_Filter_TD_8418(tbl_SerializeFromObject_TD_9656_input, tbl_Filter_TD_8418_output);
    gettimeofday(&tv_r_Filter_8_578775_e, 0);

    struct timeval tv_r_JOIN_INNER_8_624147_s, tv_r_JOIN_INNER_8_624147_e;
    gettimeofday(&tv_r_JOIN_INNER_8_624147_s, 0);
    SW_JOIN_INNER_TD_865(tbl_JOIN_INNER_TD_9578_output, tbl_Filter_TD_9910_output, tbl_JOIN_INNER_TD_865_output);
    gettimeofday(&tv_r_JOIN_INNER_8_624147_e, 0);

    struct timeval tv_r_Filter_7_623587_s, tv_r_Filter_7_623587_e;
    gettimeofday(&tv_r_Filter_7_623587_s, 0);
    SW_Filter_TD_7424(tbl_SerializeFromObject_TD_8983_input, tbl_Filter_TD_7424_output);
    gettimeofday(&tv_r_Filter_7_623587_e, 0);

    struct timeval tv_r_JOIN_INNER_7_358358_s, tv_r_JOIN_INNER_7_358358_e;
    gettimeofday(&tv_r_JOIN_INNER_7_358358_s, 0);
    SW_JOIN_INNER_TD_7813(tbl_JOIN_INNER_TD_865_output, tbl_Filter_TD_8418_output, tbl_JOIN_INNER_TD_7813_output);
    gettimeofday(&tv_r_JOIN_INNER_7_358358_e, 0);

    struct timeval tv_r_Filter_6_481966_s, tv_r_Filter_6_481966_e;
    gettimeofday(&tv_r_Filter_6_481966_s, 0);
    SW_Filter_TD_6339(tbl_SerializeFromObject_TD_7795_input, tbl_Filter_TD_6339_output);
    gettimeofday(&tv_r_Filter_6_481966_e, 0);

    struct timeval tv_r_JOIN_INNER_6_983982_s, tv_r_JOIN_INNER_6_983982_e;
    gettimeofday(&tv_r_JOIN_INNER_6_983982_s, 0);
    SW_JOIN_INNER_TD_6111(tbl_JOIN_INNER_TD_7813_output, tbl_Filter_TD_7424_output, tbl_JOIN_INNER_TD_6111_output);
    gettimeofday(&tv_r_JOIN_INNER_6_983982_e, 0);

    struct timeval tv_r_JOIN_INNER_5_333361_s, tv_r_JOIN_INNER_5_333361_e;
    gettimeofday(&tv_r_JOIN_INNER_5_333361_s, 0);
    SW_JOIN_INNER_TD_5111(tbl_JOIN_INNER_TD_6111_output, tbl_Filter_TD_6339_output, tbl_JOIN_INNER_TD_5111_output);
    gettimeofday(&tv_r_JOIN_INNER_5_333361_e, 0);

    struct timeval tv_r_Project_4_669201_s, tv_r_Project_4_669201_e;
    gettimeofday(&tv_r_Project_4_669201_s, 0);
    SW_Project_TD_4995(tbl_JOIN_INNER_TD_5111_output, tbl_Project_TD_4995_output);
    gettimeofday(&tv_r_Project_4_669201_e, 0);

    struct timeval tv_r_Sort_3_892785_s, tv_r_Sort_3_892785_e;
    gettimeofday(&tv_r_Sort_3_892785_s, 0);
    SW_Sort_TD_3389(tbl_Project_TD_4995_output, tbl_Sort_TD_3389_output);
    gettimeofday(&tv_r_Sort_3_892785_e, 0);

    struct timeval tv_r_Project_2_304525_s, tv_r_Project_2_304525_e;
    gettimeofday(&tv_r_Project_2_304525_s, 0);
    SW_Project_TD_2509(tbl_Sort_TD_3389_output, tbl_Project_TD_2509_output);
    gettimeofday(&tv_r_Project_2_304525_e, 0);

    struct timeval tv_r_LocalLimit_1_456413_s, tv_r_LocalLimit_1_456413_e;
    gettimeofday(&tv_r_LocalLimit_1_456413_s, 0);
    SW_LocalLimit_TD_1353(tbl_Project_TD_2509_output, tbl_LocalLimit_TD_1353_output);
    gettimeofday(&tv_r_LocalLimit_1_456413_e, 0);

    struct timeval tv_r_GlobalLimit_0_138219_s, tv_r_GlobalLimit_0_138219_e;
    gettimeofday(&tv_r_GlobalLimit_0_138219_s, 0);
    SW_GlobalLimit_TD_0170(tbl_LocalLimit_TD_1353_output, tbl_GlobalLimit_TD_0170_output);
    gettimeofday(&tv_r_GlobalLimit_0_138219_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_703044_s, &tv_r_Filter_10_703044_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11571_input: " << tbl_SerializeFromObject_TD_11571_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_281553_s, &tv_r_Filter_10_281553_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11204_input: " << tbl_SerializeFromObject_TD_11204_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_679077_s, &tv_r_Filter_9_679077_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10480_input: " << tbl_SerializeFromObject_TD_10480_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_194418_s, &tv_r_JOIN_INNER_9_194418_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10589_output: " << tbl_Filter_TD_10589_output.getNumRow() << " " << "tbl_Filter_TD_10426_output: " << tbl_Filter_TD_10426_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_578775_s, &tv_r_Filter_8_578775_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9656_input: " << tbl_SerializeFromObject_TD_9656_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_624147_s, &tv_r_JOIN_INNER_8_624147_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9578_output: " << tbl_JOIN_INNER_TD_9578_output.getNumRow() << " " << "tbl_Filter_TD_9910_output: " << tbl_Filter_TD_9910_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_623587_s, &tv_r_Filter_7_623587_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8983_input: " << tbl_SerializeFromObject_TD_8983_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_358358_s, &tv_r_JOIN_INNER_7_358358_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_865_output: " << tbl_JOIN_INNER_TD_865_output.getNumRow() << " " << "tbl_Filter_TD_8418_output: " << tbl_Filter_TD_8418_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_481966_s, &tv_r_Filter_6_481966_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7795_input: " << tbl_SerializeFromObject_TD_7795_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_983982_s, &tv_r_JOIN_INNER_6_983982_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7813_output: " << tbl_JOIN_INNER_TD_7813_output.getNumRow() << " " << "tbl_Filter_TD_7424_output: " << tbl_Filter_TD_7424_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_333361_s, &tv_r_JOIN_INNER_5_333361_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6111_output: " << tbl_JOIN_INNER_TD_6111_output.getNumRow() << " " << "tbl_Filter_TD_6339_output: " << tbl_Filter_TD_6339_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_669201_s, &tv_r_Project_4_669201_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5111_output: " << tbl_JOIN_INNER_TD_5111_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_3: " << tvdiff(&tv_r_Sort_3_892785_s, &tv_r_Sort_3_892785_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4995_output: " << tbl_Project_TD_4995_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_304525_s, &tv_r_Project_2_304525_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_3389_output: " << tbl_Sort_TD_3389_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_456413_s, &tv_r_LocalLimit_1_456413_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2509_output: " << tbl_Project_TD_2509_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_138219_s, &tv_r_GlobalLimit_0_138219_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1353_output: " << tbl_LocalLimit_TD_1353_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.8654398 * 1000 << "ms" << std::endl; 
    return 0; 
}
