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

#include "cfgFunc_q90.hpp" 
#include "q90.hpp" 

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
    std::cout << "NOTE:running query #90\n."; 
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
    Table tbl_Project_TD_0242_output("tbl_Project_TD_0242_output", 6100000, 1, "");
    tbl_Project_TD_0242_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_1775_output("tbl_JOIN_CROSS_TD_1775_output", 6100000, 2, "");
    tbl_JOIN_CROSS_TD_1775_output.allocateHost();
    Table tbl_Aggregate_TD_2431_output("tbl_Aggregate_TD_2431_output", 6100000, 1, "");
    tbl_Aggregate_TD_2431_output.allocateHost();
    Table tbl_Aggregate_TD_2829_output("tbl_Aggregate_TD_2829_output", 6100000, 1, "");
    tbl_Aggregate_TD_2829_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3951_output("tbl_JOIN_INNER_TD_3951_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3951_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3758_output("tbl_JOIN_INNER_TD_3758_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3758_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4390_output("tbl_JOIN_INNER_TD_4390_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4390_output.allocateHost();
    Table tbl_Filter_TD_4565_output("tbl_Filter_TD_4565_output", 6100000, 1, "");
    tbl_Filter_TD_4565_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4513_output("tbl_JOIN_INNER_TD_4513_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4513_output.allocateHost();
    Table tbl_Filter_TD_4775_output("tbl_Filter_TD_4775_output", 6100000, 1, "");
    tbl_Filter_TD_4775_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5714_output("tbl_JOIN_INNER_TD_5714_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5714_output.allocateHost();
    Table tbl_Filter_TD_5644_output("tbl_Filter_TD_5644_output", 6100000, 1, "");
    tbl_Filter_TD_5644_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5856_input;
    tbl_SerializeFromObject_TD_5856_input = Table("web_page", web_page_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5856_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_5856_input.addCol("wp_char_count", 4);
    tbl_SerializeFromObject_TD_5856_input.allocateHost();
    tbl_SerializeFromObject_TD_5856_input.loadHost();
    Table tbl_JOIN_INNER_TD_5209_output("tbl_JOIN_INNER_TD_5209_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5209_output.allocateHost();
    Table tbl_Filter_TD_5406_output("tbl_Filter_TD_5406_output", 6100000, 1, "");
    tbl_Filter_TD_5406_output.allocateHost();
    Table tbl_SerializeFromObject_TD_566_input;
    tbl_SerializeFromObject_TD_566_input = Table("web_page", web_page_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_566_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_566_input.addCol("wp_char_count", 4);
    tbl_SerializeFromObject_TD_566_input.allocateHost();
    tbl_SerializeFromObject_TD_566_input.loadHost();
    Table tbl_Filter_TD_6240_output("tbl_Filter_TD_6240_output", 6100000, 3, "");
    tbl_Filter_TD_6240_output.allocateHost();
    Table tbl_Filter_TD_6813_output("tbl_Filter_TD_6813_output", 6100000, 1, "");
    tbl_Filter_TD_6813_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6858_input;
    tbl_SerializeFromObject_TD_6858_input = Table("time_dim", time_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6858_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_6858_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_6858_input.allocateHost();
    tbl_SerializeFromObject_TD_6858_input.loadHost();
    Table tbl_Filter_TD_6232_output("tbl_Filter_TD_6232_output", 6100000, 3, "");
    tbl_Filter_TD_6232_output.allocateHost();
    Table tbl_Filter_TD_6467_output("tbl_Filter_TD_6467_output", 6100000, 1, "");
    tbl_Filter_TD_6467_output.allocateHost();
    Table tbl_SerializeFromObject_TD_697_input;
    tbl_SerializeFromObject_TD_697_input = Table("time_dim", time_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_697_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_697_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_697_input.allocateHost();
    tbl_SerializeFromObject_TD_697_input.loadHost();
    Table tbl_SerializeFromObject_TD_7601_input;
    tbl_SerializeFromObject_TD_7601_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7601_input.addCol("ws_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_7601_input.addCol("ws_ship_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_7601_input.addCol("ws_web_page_sk", 4);
    tbl_SerializeFromObject_TD_7601_input.allocateHost();
    tbl_SerializeFromObject_TD_7601_input.loadHost();
    Table tbl_SerializeFromObject_TD_7441_input;
    tbl_SerializeFromObject_TD_7441_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7441_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_7441_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_7441_input.allocateHost();
    tbl_SerializeFromObject_TD_7441_input.loadHost();
    Table tbl_SerializeFromObject_TD_750_input;
    tbl_SerializeFromObject_TD_750_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_750_input.addCol("ws_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_750_input.addCol("ws_ship_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_750_input.addCol("ws_web_page_sk", 4);
    tbl_SerializeFromObject_TD_750_input.allocateHost();
    tbl_SerializeFromObject_TD_750_input.loadHost();
    Table tbl_SerializeFromObject_TD_7107_input;
    tbl_SerializeFromObject_TD_7107_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7107_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_7107_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_7107_input.allocateHost();
    tbl_SerializeFromObject_TD_7107_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_441486_s, tv_r_Filter_6_441486_e;
    gettimeofday(&tv_r_Filter_6_441486_s, 0);
    SW_Filter_TD_6467(tbl_SerializeFromObject_TD_7107_input, tbl_Filter_TD_6467_output);
    gettimeofday(&tv_r_Filter_6_441486_e, 0);

    struct timeval tv_r_Filter_6_334203_s, tv_r_Filter_6_334203_e;
    gettimeofday(&tv_r_Filter_6_334203_s, 0);
    SW_Filter_TD_6232(tbl_SerializeFromObject_TD_750_input, tbl_Filter_TD_6232_output);
    gettimeofday(&tv_r_Filter_6_334203_e, 0);

    struct timeval tv_r_Filter_6_747744_s, tv_r_Filter_6_747744_e;
    gettimeofday(&tv_r_Filter_6_747744_s, 0);
    SW_Filter_TD_6813(tbl_SerializeFromObject_TD_7441_input, tbl_Filter_TD_6813_output);
    gettimeofday(&tv_r_Filter_6_747744_e, 0);

    struct timeval tv_r_Filter_6_463841_s, tv_r_Filter_6_463841_e;
    gettimeofday(&tv_r_Filter_6_463841_s, 0);
    SW_Filter_TD_6240(tbl_SerializeFromObject_TD_7601_input, tbl_Filter_TD_6240_output);
    gettimeofday(&tv_r_Filter_6_463841_e, 0);

    struct timeval tv_r_Filter_5_727993_s, tv_r_Filter_5_727993_e;
    gettimeofday(&tv_r_Filter_5_727993_s, 0);
    SW_Filter_TD_5406(tbl_SerializeFromObject_TD_697_input, tbl_Filter_TD_5406_output);
    gettimeofday(&tv_r_Filter_5_727993_e, 0);

    struct timeval tv_r_JOIN_INNER_5_642954_s, tv_r_JOIN_INNER_5_642954_e;
    gettimeofday(&tv_r_JOIN_INNER_5_642954_s, 0);
    SW_JOIN_INNER_TD_5209(tbl_Filter_TD_6232_output, tbl_Filter_TD_6467_output, tbl_JOIN_INNER_TD_5209_output);
    gettimeofday(&tv_r_JOIN_INNER_5_642954_e, 0);

    struct timeval tv_r_Filter_5_915712_s, tv_r_Filter_5_915712_e;
    gettimeofday(&tv_r_Filter_5_915712_s, 0);
    SW_Filter_TD_5644(tbl_SerializeFromObject_TD_6858_input, tbl_Filter_TD_5644_output);
    gettimeofday(&tv_r_Filter_5_915712_e, 0);

    struct timeval tv_r_JOIN_INNER_5_904607_s, tv_r_JOIN_INNER_5_904607_e;
    gettimeofday(&tv_r_JOIN_INNER_5_904607_s, 0);
    SW_JOIN_INNER_TD_5714(tbl_Filter_TD_6240_output, tbl_Filter_TD_6813_output, tbl_JOIN_INNER_TD_5714_output);
    gettimeofday(&tv_r_JOIN_INNER_5_904607_e, 0);

    struct timeval tv_r_Filter_4_300930_s, tv_r_Filter_4_300930_e;
    gettimeofday(&tv_r_Filter_4_300930_s, 0);
    SW_Filter_TD_4775(tbl_SerializeFromObject_TD_566_input, tbl_Filter_TD_4775_output);
    gettimeofday(&tv_r_Filter_4_300930_e, 0);

    struct timeval tv_r_JOIN_INNER_4_298139_s, tv_r_JOIN_INNER_4_298139_e;
    gettimeofday(&tv_r_JOIN_INNER_4_298139_s, 0);
    SW_JOIN_INNER_TD_4513(tbl_JOIN_INNER_TD_5209_output, tbl_Filter_TD_5406_output, tbl_JOIN_INNER_TD_4513_output);
    gettimeofday(&tv_r_JOIN_INNER_4_298139_e, 0);

    struct timeval tv_r_Filter_4_950946_s, tv_r_Filter_4_950946_e;
    gettimeofday(&tv_r_Filter_4_950946_s, 0);
    SW_Filter_TD_4565(tbl_SerializeFromObject_TD_5856_input, tbl_Filter_TD_4565_output);
    gettimeofday(&tv_r_Filter_4_950946_e, 0);

    struct timeval tv_r_JOIN_INNER_4_335962_s, tv_r_JOIN_INNER_4_335962_e;
    gettimeofday(&tv_r_JOIN_INNER_4_335962_s, 0);
    SW_JOIN_INNER_TD_4390(tbl_JOIN_INNER_TD_5714_output, tbl_Filter_TD_5644_output, tbl_JOIN_INNER_TD_4390_output);
    gettimeofday(&tv_r_JOIN_INNER_4_335962_e, 0);

    struct timeval tv_r_JOIN_INNER_3_568334_s, tv_r_JOIN_INNER_3_568334_e;
    gettimeofday(&tv_r_JOIN_INNER_3_568334_s, 0);
    SW_JOIN_INNER_TD_3758(tbl_JOIN_INNER_TD_4513_output, tbl_Filter_TD_4775_output, tbl_JOIN_INNER_TD_3758_output);
    gettimeofday(&tv_r_JOIN_INNER_3_568334_e, 0);

    struct timeval tv_r_JOIN_INNER_3_588605_s, tv_r_JOIN_INNER_3_588605_e;
    gettimeofday(&tv_r_JOIN_INNER_3_588605_s, 0);
    SW_JOIN_INNER_TD_3951(tbl_JOIN_INNER_TD_4390_output, tbl_Filter_TD_4565_output, tbl_JOIN_INNER_TD_3951_output);
    gettimeofday(&tv_r_JOIN_INNER_3_588605_e, 0);

    struct timeval tv_r_Aggregate_2_77010_s, tv_r_Aggregate_2_77010_e;
    gettimeofday(&tv_r_Aggregate_2_77010_s, 0);
    SW_Aggregate_TD_2829(tbl_JOIN_INNER_TD_3758_output, tbl_Aggregate_TD_2829_output);
    gettimeofday(&tv_r_Aggregate_2_77010_e, 0);

    struct timeval tv_r_Aggregate_2_660362_s, tv_r_Aggregate_2_660362_e;
    gettimeofday(&tv_r_Aggregate_2_660362_s, 0);
    SW_Aggregate_TD_2431(tbl_JOIN_INNER_TD_3951_output, tbl_Aggregate_TD_2431_output);
    gettimeofday(&tv_r_Aggregate_2_660362_e, 0);

    struct timeval tv_r_JOIN_CROSS_1_667570_s, tv_r_JOIN_CROSS_1_667570_e;
    gettimeofday(&tv_r_JOIN_CROSS_1_667570_s, 0);
    SW_JOIN_CROSS_TD_1775(tbl_Aggregate_TD_2431_output, tbl_Aggregate_TD_2829_output, tbl_JOIN_CROSS_TD_1775_output);
    gettimeofday(&tv_r_JOIN_CROSS_1_667570_e, 0);

    struct timeval tv_r_Project_0_307799_s, tv_r_Project_0_307799_e;
    gettimeofday(&tv_r_Project_0_307799_s, 0);
    SW_Project_TD_0242(tbl_JOIN_CROSS_TD_1775_output, tbl_Project_TD_0242_output);
    gettimeofday(&tv_r_Project_0_307799_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_441486_s, &tv_r_Filter_6_441486_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7107_input: " << tbl_SerializeFromObject_TD_7107_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_334203_s, &tv_r_Filter_6_334203_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_750_input: " << tbl_SerializeFromObject_TD_750_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_747744_s, &tv_r_Filter_6_747744_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7441_input: " << tbl_SerializeFromObject_TD_7441_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_463841_s, &tv_r_Filter_6_463841_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7601_input: " << tbl_SerializeFromObject_TD_7601_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_727993_s, &tv_r_Filter_5_727993_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_697_input: " << tbl_SerializeFromObject_TD_697_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_642954_s, &tv_r_JOIN_INNER_5_642954_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6232_output: " << tbl_Filter_TD_6232_output.getNumRow() << " " << "tbl_Filter_TD_6467_output: " << tbl_Filter_TD_6467_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_915712_s, &tv_r_Filter_5_915712_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6858_input: " << tbl_SerializeFromObject_TD_6858_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_904607_s, &tv_r_JOIN_INNER_5_904607_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6240_output: " << tbl_Filter_TD_6240_output.getNumRow() << " " << "tbl_Filter_TD_6813_output: " << tbl_Filter_TD_6813_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_300930_s, &tv_r_Filter_4_300930_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_566_input: " << tbl_SerializeFromObject_TD_566_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_298139_s, &tv_r_JOIN_INNER_4_298139_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5209_output: " << tbl_JOIN_INNER_TD_5209_output.getNumRow() << " " << "tbl_Filter_TD_5406_output: " << tbl_Filter_TD_5406_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_950946_s, &tv_r_Filter_4_950946_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5856_input: " << tbl_SerializeFromObject_TD_5856_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_335962_s, &tv_r_JOIN_INNER_4_335962_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5714_output: " << tbl_JOIN_INNER_TD_5714_output.getNumRow() << " " << "tbl_Filter_TD_5644_output: " << tbl_Filter_TD_5644_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_568334_s, &tv_r_JOIN_INNER_3_568334_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4513_output: " << tbl_JOIN_INNER_TD_4513_output.getNumRow() << " " << "tbl_Filter_TD_4775_output: " << tbl_Filter_TD_4775_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_588605_s, &tv_r_JOIN_INNER_3_588605_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4390_output: " << tbl_JOIN_INNER_TD_4390_output.getNumRow() << " " << "tbl_Filter_TD_4565_output: " << tbl_Filter_TD_4565_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_77010_s, &tv_r_Aggregate_2_77010_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3758_output: " << tbl_JOIN_INNER_TD_3758_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_660362_s, &tv_r_Aggregate_2_660362_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3951_output: " << tbl_JOIN_INNER_TD_3951_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_1: " << tvdiff(&tv_r_JOIN_CROSS_1_667570_s, &tv_r_JOIN_CROSS_1_667570_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2431_output: " << tbl_Aggregate_TD_2431_output.getNumRow() << " " << "tbl_Aggregate_TD_2829_output: " << tbl_Aggregate_TD_2829_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_0: " << tvdiff(&tv_r_Project_0_307799_s, &tv_r_Project_0_307799_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_1775_output: " << tbl_JOIN_CROSS_TD_1775_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.9086916 * 1000 << "ms" << std::endl; 
    return 0; 
}
