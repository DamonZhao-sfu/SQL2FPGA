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

#include "cfgFunc_q44.hpp" 
#include "q44.hpp" 

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
    std::cout << "NOTE:running query #44\n."; 
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
    Table tbl_Sort_TD_2320_output("tbl_Sort_TD_2320_output", 6100000, 3, "");
    tbl_Sort_TD_2320_output.allocateHost();
    Table tbl_Project_TD_3880_output("tbl_Project_TD_3880_output", 6100000, 3, "");
    tbl_Project_TD_3880_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4324_output("tbl_JOIN_INNER_TD_4324_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4324_output.allocateHost();
    Table tbl_JOIN_INNER_TD_591_output("tbl_JOIN_INNER_TD_591_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_591_output.allocateHost();
    Table tbl_Filter_TD_5250_output("tbl_Filter_TD_5250_output", 6100000, 2, "");
    tbl_Filter_TD_5250_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6760_output("tbl_JOIN_INNER_TD_6760_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6760_output.allocateHost();
    Table tbl_Filter_TD_6455_output("tbl_Filter_TD_6455_output", 6100000, 2, "");
    tbl_Filter_TD_6455_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6534_input;
    tbl_SerializeFromObject_TD_6534_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6534_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6534_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6534_input.allocateHost();
    tbl_SerializeFromObject_TD_6534_input.loadHost();
    Table tbl_Filter_TD_7665_output("tbl_Filter_TD_7665_output", 6100000, 2, "");
    tbl_Filter_TD_7665_output.allocateHost();
    Table tbl_Filter_TD_7589_output("tbl_Filter_TD_7589_output", 6100000, 2, "");
    tbl_Filter_TD_7589_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7237_input;
    tbl_SerializeFromObject_TD_7237_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7237_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7237_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7237_input.allocateHost();
    tbl_SerializeFromObject_TD_7237_input.loadHost();
    Table tbl_Window_TD_8329_output("tbl_Window_TD_8329_output", 6100000, 3, "");
    tbl_Window_TD_8329_output.allocateHost();
    Table tbl_Window_TD_8386_output("tbl_Window_TD_8386_output", 6100000, 3, "");
    tbl_Window_TD_8386_output.allocateHost();
    Table tbl_Filter_TD_9577_output("tbl_Filter_TD_9577_output", 6100000, 2, "");
    tbl_Filter_TD_9577_output.allocateHost();
    Table tbl_Filter_TD_9368_output("tbl_Filter_TD_9368_output", 6100000, 2, "");
    tbl_Filter_TD_9368_output.allocateHost();
    Table tbl_Aggregate_TD_10194_output("tbl_Aggregate_TD_10194_output", 6100000, 2, "");
    tbl_Aggregate_TD_10194_output.allocateHost();
    Table tbl_Aggregate_TD_10350_output("tbl_Aggregate_TD_10350_output", 6100000, 1, "");
    tbl_Aggregate_TD_10350_output.allocateHost();
    Table tbl_Aggregate_TD_10408_output("tbl_Aggregate_TD_10408_output", 6100000, 2, "");
    tbl_Aggregate_TD_10408_output.allocateHost();
    Table tbl_Aggregate_TD_1036_output("tbl_Aggregate_TD_1036_output", 6100000, 1, "");
    tbl_Aggregate_TD_1036_output.allocateHost();
    Table tbl_Filter_TD_11168_output("tbl_Filter_TD_11168_output", 6100000, 2, "");
    tbl_Filter_TD_11168_output.allocateHost();
    Table tbl_Filter_TD_11965_output("tbl_Filter_TD_11965_output", 6100000, 2, "");
    tbl_Filter_TD_11965_output.allocateHost();
    Table tbl_Filter_TD_11939_output("tbl_Filter_TD_11939_output", 6100000, 2, "");
    tbl_Filter_TD_11939_output.allocateHost();
    Table tbl_Filter_TD_11963_output("tbl_Filter_TD_11963_output", 6100000, 2, "");
    tbl_Filter_TD_11963_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12467_input;
    tbl_SerializeFromObject_TD_12467_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12467_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12467_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12467_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12467_input.allocateHost();
    tbl_SerializeFromObject_TD_12467_input.loadHost();
    Table tbl_SerializeFromObject_TD_12140_input;
    tbl_SerializeFromObject_TD_12140_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12140_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12140_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12140_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_12140_input.allocateHost();
    tbl_SerializeFromObject_TD_12140_input.loadHost();
    Table tbl_SerializeFromObject_TD_1242_input;
    tbl_SerializeFromObject_TD_1242_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1242_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_1242_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_1242_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_1242_input.allocateHost();
    tbl_SerializeFromObject_TD_1242_input.loadHost();
    Table tbl_SerializeFromObject_TD_1216_input;
    tbl_SerializeFromObject_TD_1216_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1216_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_1216_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_1216_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_1216_input.allocateHost();
    tbl_SerializeFromObject_TD_1216_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_119570_s, tv_r_Filter_11_119570_e;
    gettimeofday(&tv_r_Filter_11_119570_s, 0);
    SW_Filter_TD_11963(tbl_SerializeFromObject_TD_1216_input, tbl_Filter_TD_11963_output);
    gettimeofday(&tv_r_Filter_11_119570_e, 0);

    struct timeval tv_r_Filter_11_662174_s, tv_r_Filter_11_662174_e;
    gettimeofday(&tv_r_Filter_11_662174_s, 0);
    SW_Filter_TD_11939(tbl_SerializeFromObject_TD_1242_input, tbl_Filter_TD_11939_output);
    gettimeofday(&tv_r_Filter_11_662174_e, 0);

    struct timeval tv_r_Filter_11_813544_s, tv_r_Filter_11_813544_e;
    gettimeofday(&tv_r_Filter_11_813544_s, 0);
    SW_Filter_TD_11965(tbl_SerializeFromObject_TD_12140_input, tbl_Filter_TD_11965_output);
    gettimeofday(&tv_r_Filter_11_813544_e, 0);

    struct timeval tv_r_Filter_11_925234_s, tv_r_Filter_11_925234_e;
    gettimeofday(&tv_r_Filter_11_925234_s, 0);
    SW_Filter_TD_11168(tbl_SerializeFromObject_TD_12467_input, tbl_Filter_TD_11168_output);
    gettimeofday(&tv_r_Filter_11_925234_e, 0);

    struct timeval tv_r_Aggregate_10_58988_s, tv_r_Aggregate_10_58988_e;
    gettimeofday(&tv_r_Aggregate_10_58988_s, 0);
    SW_Aggregate_TD_1036(tbl_Filter_TD_11963_output, tbl_Aggregate_TD_1036_output);
    gettimeofday(&tv_r_Aggregate_10_58988_e, 0);

    struct timeval tv_r_Aggregate_10_305866_s, tv_r_Aggregate_10_305866_e;
    gettimeofday(&tv_r_Aggregate_10_305866_s, 0);
    SW_Aggregate_TD_10408(tbl_Filter_TD_11939_output, tbl_Aggregate_TD_10408_output);
    gettimeofday(&tv_r_Aggregate_10_305866_e, 0);

    struct timeval tv_r_Aggregate_10_178063_s, tv_r_Aggregate_10_178063_e;
    gettimeofday(&tv_r_Aggregate_10_178063_s, 0);
    SW_Aggregate_TD_10350(tbl_Filter_TD_11965_output, tbl_Aggregate_TD_10350_output);
    gettimeofday(&tv_r_Aggregate_10_178063_e, 0);

    struct timeval tv_r_Aggregate_10_456814_s, tv_r_Aggregate_10_456814_e;
    gettimeofday(&tv_r_Aggregate_10_456814_s, 0);
    SW_Aggregate_TD_10194(tbl_Filter_TD_11168_output, tbl_Aggregate_TD_10194_output);
    gettimeofday(&tv_r_Aggregate_10_456814_e, 0);

    struct timeval tv_r_Filter_9_331999_s, tv_r_Filter_9_331999_e;
    gettimeofday(&tv_r_Filter_9_331999_s, 0);
    SW_Filter_TD_9368(tbl_Aggregate_TD_10408_output, tbl_Aggregate_TD_1036_output, tbl_Filter_TD_9368_output);
    gettimeofday(&tv_r_Filter_9_331999_e, 0);

    struct timeval tv_r_Filter_9_398902_s, tv_r_Filter_9_398902_e;
    gettimeofday(&tv_r_Filter_9_398902_s, 0);
    SW_Filter_TD_9577(tbl_Aggregate_TD_10194_output, tbl_Aggregate_TD_10350_output, tbl_Filter_TD_9577_output);
    gettimeofday(&tv_r_Filter_9_398902_e, 0);

    struct timeval tv_r_Window_8_528675_s, tv_r_Window_8_528675_e;
    gettimeofday(&tv_r_Window_8_528675_s, 0);
    SW_Window_TD_8386(tbl_Filter_TD_9368_output, tbl_Window_TD_8386_output);
    gettimeofday(&tv_r_Window_8_528675_e, 0);

    struct timeval tv_r_Window_8_159425_s, tv_r_Window_8_159425_e;
    gettimeofday(&tv_r_Window_8_159425_s, 0);
    SW_Window_TD_8329(tbl_Filter_TD_9577_output, tbl_Window_TD_8329_output);
    gettimeofday(&tv_r_Window_8_159425_e, 0);

    struct timeval tv_r_Filter_7_890732_s, tv_r_Filter_7_890732_e;
    gettimeofday(&tv_r_Filter_7_890732_s, 0);
    SW_Filter_TD_7589(tbl_Window_TD_8386_output, tbl_Filter_TD_7589_output);
    gettimeofday(&tv_r_Filter_7_890732_e, 0);

    struct timeval tv_r_Filter_7_58146_s, tv_r_Filter_7_58146_e;
    gettimeofday(&tv_r_Filter_7_58146_s, 0);
    SW_Filter_TD_7665(tbl_Window_TD_8329_output, tbl_Filter_TD_7665_output);
    gettimeofday(&tv_r_Filter_7_58146_e, 0);

    struct timeval tv_r_Filter_6_368770_s, tv_r_Filter_6_368770_e;
    gettimeofday(&tv_r_Filter_6_368770_s, 0);
    SW_Filter_TD_6455(tbl_SerializeFromObject_TD_7237_input, tbl_Filter_TD_6455_output);
    gettimeofday(&tv_r_Filter_6_368770_e, 0);

    struct timeval tv_r_JOIN_INNER_6_633046_s, tv_r_JOIN_INNER_6_633046_e;
    gettimeofday(&tv_r_JOIN_INNER_6_633046_s, 0);
    SW_JOIN_INNER_TD_6760(tbl_Filter_TD_7665_output, tbl_Filter_TD_7589_output, tbl_JOIN_INNER_TD_6760_output);
    gettimeofday(&tv_r_JOIN_INNER_6_633046_e, 0);

    struct timeval tv_r_Filter_5_880296_s, tv_r_Filter_5_880296_e;
    gettimeofday(&tv_r_Filter_5_880296_s, 0);
    SW_Filter_TD_5250(tbl_SerializeFromObject_TD_6534_input, tbl_Filter_TD_5250_output);
    gettimeofday(&tv_r_Filter_5_880296_e, 0);

    struct timeval tv_r_JOIN_INNER_5_72377_s, tv_r_JOIN_INNER_5_72377_e;
    gettimeofday(&tv_r_JOIN_INNER_5_72377_s, 0);
    SW_JOIN_INNER_TD_591(tbl_JOIN_INNER_TD_6760_output, tbl_Filter_TD_6455_output, tbl_JOIN_INNER_TD_591_output);
    gettimeofday(&tv_r_JOIN_INNER_5_72377_e, 0);

    struct timeval tv_r_JOIN_INNER_4_969392_s, tv_r_JOIN_INNER_4_969392_e;
    gettimeofday(&tv_r_JOIN_INNER_4_969392_s, 0);
    SW_JOIN_INNER_TD_4324(tbl_JOIN_INNER_TD_591_output, tbl_Filter_TD_5250_output, tbl_JOIN_INNER_TD_4324_output);
    gettimeofday(&tv_r_JOIN_INNER_4_969392_e, 0);

    struct timeval tv_r_Project_3_222341_s, tv_r_Project_3_222341_e;
    gettimeofday(&tv_r_Project_3_222341_s, 0);
    SW_Project_TD_3880(tbl_JOIN_INNER_TD_4324_output, tbl_Project_TD_3880_output);
    gettimeofday(&tv_r_Project_3_222341_e, 0);

    struct timeval tv_r_Sort_2_490309_s, tv_r_Sort_2_490309_e;
    gettimeofday(&tv_r_Sort_2_490309_s, 0);
    SW_Sort_TD_2320(tbl_Project_TD_3880_output, tbl_Sort_TD_2320_output);
    gettimeofday(&tv_r_Sort_2_490309_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_119570_s, &tv_r_Filter_11_119570_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1216_input: " << tbl_SerializeFromObject_TD_1216_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_662174_s, &tv_r_Filter_11_662174_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1242_input: " << tbl_SerializeFromObject_TD_1242_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_813544_s, &tv_r_Filter_11_813544_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12140_input: " << tbl_SerializeFromObject_TD_12140_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_925234_s, &tv_r_Filter_11_925234_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12467_input: " << tbl_SerializeFromObject_TD_12467_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_58988_s, &tv_r_Aggregate_10_58988_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11963_output: " << tbl_Filter_TD_11963_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_305866_s, &tv_r_Aggregate_10_305866_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11939_output: " << tbl_Filter_TD_11939_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_178063_s, &tv_r_Aggregate_10_178063_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11965_output: " << tbl_Filter_TD_11965_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_456814_s, &tv_r_Aggregate_10_456814_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11168_output: " << tbl_Filter_TD_11168_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_331999_s, &tv_r_Filter_9_331999_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10408_output: " << tbl_Aggregate_TD_10408_output.getNumRow() << " " << "tbl_Aggregate_TD_1036_output: " << tbl_Aggregate_TD_1036_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_398902_s, &tv_r_Filter_9_398902_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10194_output: " << tbl_Aggregate_TD_10194_output.getNumRow() << " " << "tbl_Aggregate_TD_10350_output: " << tbl_Aggregate_TD_10350_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_528675_s, &tv_r_Window_8_528675_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9368_output: " << tbl_Filter_TD_9368_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_159425_s, &tv_r_Window_8_159425_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9577_output: " << tbl_Filter_TD_9577_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_890732_s, &tv_r_Filter_7_890732_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8386_output: " << tbl_Window_TD_8386_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_58146_s, &tv_r_Filter_7_58146_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8329_output: " << tbl_Window_TD_8329_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_368770_s, &tv_r_Filter_6_368770_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7237_input: " << tbl_SerializeFromObject_TD_7237_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_633046_s, &tv_r_JOIN_INNER_6_633046_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7665_output: " << tbl_Filter_TD_7665_output.getNumRow() << " " << "tbl_Filter_TD_7589_output: " << tbl_Filter_TD_7589_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_880296_s, &tv_r_Filter_5_880296_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6534_input: " << tbl_SerializeFromObject_TD_6534_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_72377_s, &tv_r_JOIN_INNER_5_72377_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6760_output: " << tbl_JOIN_INNER_TD_6760_output.getNumRow() << " " << "tbl_Filter_TD_6455_output: " << tbl_Filter_TD_6455_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_969392_s, &tv_r_JOIN_INNER_4_969392_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_591_output: " << tbl_JOIN_INNER_TD_591_output.getNumRow() << " " << "tbl_Filter_TD_5250_output: " << tbl_Filter_TD_5250_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_222341_s, &tv_r_Project_3_222341_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4324_output: " << tbl_JOIN_INNER_TD_4324_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_490309_s, &tv_r_Sort_2_490309_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3880_output: " << tbl_Project_TD_3880_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.1949975 * 1000 << "ms" << std::endl; 
    return 0; 
}
