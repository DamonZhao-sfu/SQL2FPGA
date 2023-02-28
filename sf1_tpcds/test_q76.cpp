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

#include "cfgFunc_q76.hpp" 
#include "q76.hpp" 

int main(int argc, const char* argv[]) { 
    std::cout << "\n------------ TPC-H Query Test -------------\n"; 
    ArgParser parser(argc, argv); 
    std::string xclbin_path; 
    if (!parser.getCmdOption("-xclbin", xclbin_path)) { 
        std::cout << "ERROR: xclbin path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_h; 
    if (!parser.getCmdOption("-xclbin_h", xclbin_path_h)) { 
        std::cout << "ERROR: xclbin_h path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_a; 
    if (!parser.getCmdOption("-xclbin_a", xclbin_path_a)) { 
        std::cout << "ERROR: xclbin_a path is not set!\n"; 
        return 1; 
    } 
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
    std::cout << "NOTE:running query #76\n."; 
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
    // Get CL devices. 
    std::vector<cl::Device> devices = xcl::get_xil_devices(); 
    // ****************************** Tables **************************** // 
    Table tbl_GlobalLimit_TD_0252279_output("tbl_GlobalLimit_TD_0252279_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0252279_output.allocateHost();
    Table tbl_LocalLimit_TD_1113449_output("tbl_LocalLimit_TD_1113449_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1113449_output.allocateHost();
    Table tbl_Sort_TD_2899364_output("tbl_Sort_TD_2899364_output", 6100000, 7, "");
    tbl_Sort_TD_2899364_output.allocateHost();
    Table tbl_Aggregate_TD_3979786_output("tbl_Aggregate_TD_3979786_output", 6100000, 7, "");
    tbl_Aggregate_TD_3979786_output.allocateHost();
    Table tbl_Union_TD_4654963_output("tbl_Union_TD_4654963_output", 6100000, 6, "");
    tbl_Union_TD_4654963_output.allocateHost();
    Table tbl_Project_TD_553323_output("tbl_Project_TD_553323_output", 6100000, 6, "");
    tbl_Project_TD_553323_output.allocateHost();
    Table tbl_Project_TD_5228637_output("tbl_Project_TD_5228637_output", 6100000, 6, "");
    tbl_Project_TD_5228637_output.allocateHost();
    Table tbl_Project_TD_5712895_output("tbl_Project_TD_5712895_output", 6100000, 6, "");
    tbl_Project_TD_5712895_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6876420_output("tbl_JOIN_INNER_TD_6876420_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6876420_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6824948_output("tbl_JOIN_INNER_TD_6824948_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6824948_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6345353_output("tbl_JOIN_INNER_TD_6345353_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6345353_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7957052_output("tbl_JOIN_INNER_TD_7957052_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7957052_output.allocateHost();
    Table tbl_Filter_TD_7806626_output("tbl_Filter_TD_7806626_output", 6100000, 3, "");
    tbl_Filter_TD_7806626_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7417399_output("tbl_JOIN_INNER_TD_7417399_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7417399_output.allocateHost();
    Table tbl_Filter_TD_7296672_output("tbl_Filter_TD_7296672_output", 6100000, 3, "");
    tbl_Filter_TD_7296672_output.allocateHost();
    Table tbl_JOIN_INNER_TD_738313_output("tbl_JOIN_INNER_TD_738313_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_738313_output.allocateHost();
    Table tbl_Filter_TD_7497659_output("tbl_Filter_TD_7497659_output", 6100000, 3, "");
    tbl_Filter_TD_7497659_output.allocateHost();
    Table tbl_Filter_TD_8749274_output("tbl_Filter_TD_8749274_output", 6100000, 4, "");
    tbl_Filter_TD_8749274_output.allocateHost();
    Table tbl_Filter_TD_8144920_output("tbl_Filter_TD_8144920_output", 6100000, 2, "");
    tbl_Filter_TD_8144920_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8731347_input;
    tbl_SerializeFromObject_TD_8731347_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8731347_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8731347_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8731347_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8731347_input.allocateHost();
    tbl_SerializeFromObject_TD_8731347_input.loadHost();
    Table tbl_Filter_TD_8603644_output("tbl_Filter_TD_8603644_output", 6100000, 4, "");
    tbl_Filter_TD_8603644_output.allocateHost();
    Table tbl_Filter_TD_8973868_output("tbl_Filter_TD_8973868_output", 6100000, 2, "");
    tbl_Filter_TD_8973868_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8375806_input;
    tbl_SerializeFromObject_TD_8375806_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8375806_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8375806_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8375806_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8375806_input.allocateHost();
    tbl_SerializeFromObject_TD_8375806_input.loadHost();
    Table tbl_Filter_TD_8604280_output("tbl_Filter_TD_8604280_output", 6100000, 4, "");
    tbl_Filter_TD_8604280_output.allocateHost();
    Table tbl_Filter_TD_8583896_output("tbl_Filter_TD_8583896_output", 6100000, 2, "");
    tbl_Filter_TD_8583896_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8176172_input;
    tbl_SerializeFromObject_TD_8176172_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8176172_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8176172_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8176172_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8176172_input.allocateHost();
    tbl_SerializeFromObject_TD_8176172_input.loadHost();
    Table tbl_SerializeFromObject_TD_9925650_input;
    tbl_SerializeFromObject_TD_9925650_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9925650_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9925650_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9925650_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9925650_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9925650_input.allocateHost();
    tbl_SerializeFromObject_TD_9925650_input.loadHost();
    Table tbl_SerializeFromObject_TD_9306116_input;
    tbl_SerializeFromObject_TD_9306116_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9306116_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9306116_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9306116_input.allocateHost();
    tbl_SerializeFromObject_TD_9306116_input.loadHost();
    Table tbl_SerializeFromObject_TD_9251509_input;
    tbl_SerializeFromObject_TD_9251509_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9251509_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9251509_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_9251509_input.addCol("ws_ship_customer_sk", 4);
    tbl_SerializeFromObject_TD_9251509_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9251509_input.allocateHost();
    tbl_SerializeFromObject_TD_9251509_input.loadHost();
    Table tbl_SerializeFromObject_TD_9930217_input;
    tbl_SerializeFromObject_TD_9930217_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9930217_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9930217_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9930217_input.allocateHost();
    tbl_SerializeFromObject_TD_9930217_input.loadHost();
    Table tbl_SerializeFromObject_TD_9352570_input;
    tbl_SerializeFromObject_TD_9352570_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9352570_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9352570_input.addCol("cs_ship_addr_sk", 4);
    tbl_SerializeFromObject_TD_9352570_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_9352570_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9352570_input.allocateHost();
    tbl_SerializeFromObject_TD_9352570_input.loadHost();
    Table tbl_SerializeFromObject_TD_9919821_input;
    tbl_SerializeFromObject_TD_9919821_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9919821_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9919821_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9919821_input.allocateHost();
    tbl_SerializeFromObject_TD_9919821_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_42710_s, tv_r_Filter_8_42710_e;
    gettimeofday(&tv_r_Filter_8_42710_s, 0);
    SW_Filter_TD_8583896(tbl_SerializeFromObject_TD_9919821_input, tbl_Filter_TD_8583896_output);
    gettimeofday(&tv_r_Filter_8_42710_e, 0);

    struct timeval tv_r_Filter_8_953327_s, tv_r_Filter_8_953327_e;
    gettimeofday(&tv_r_Filter_8_953327_s, 0);
    SW_Filter_TD_8604280(tbl_SerializeFromObject_TD_9352570_input, tbl_Filter_TD_8604280_output);
    gettimeofday(&tv_r_Filter_8_953327_e, 0);

    struct timeval tv_r_Filter_8_482534_s, tv_r_Filter_8_482534_e;
    gettimeofday(&tv_r_Filter_8_482534_s, 0);
    SW_Filter_TD_8973868(tbl_SerializeFromObject_TD_9930217_input, tbl_Filter_TD_8973868_output);
    gettimeofday(&tv_r_Filter_8_482534_e, 0);

    struct timeval tv_r_Filter_8_651165_s, tv_r_Filter_8_651165_e;
    gettimeofday(&tv_r_Filter_8_651165_s, 0);
    SW_Filter_TD_8603644(tbl_SerializeFromObject_TD_9251509_input, tbl_Filter_TD_8603644_output);
    gettimeofday(&tv_r_Filter_8_651165_e, 0);

    struct timeval tv_r_Filter_8_843319_s, tv_r_Filter_8_843319_e;
    gettimeofday(&tv_r_Filter_8_843319_s, 0);
    SW_Filter_TD_8144920(tbl_SerializeFromObject_TD_9306116_input, tbl_Filter_TD_8144920_output);
    gettimeofday(&tv_r_Filter_8_843319_e, 0);

    struct timeval tv_r_Filter_8_14440_s, tv_r_Filter_8_14440_e;
    gettimeofday(&tv_r_Filter_8_14440_s, 0);
    SW_Filter_TD_8749274(tbl_SerializeFromObject_TD_9925650_input, tbl_Filter_TD_8749274_output);
    gettimeofday(&tv_r_Filter_8_14440_e, 0);

    struct timeval tv_r_Filter_7_711423_s, tv_r_Filter_7_711423_e;
    gettimeofday(&tv_r_Filter_7_711423_s, 0);
    SW_Filter_TD_7497659(tbl_SerializeFromObject_TD_8176172_input, tbl_Filter_TD_7497659_output);
    gettimeofday(&tv_r_Filter_7_711423_e, 0);

    struct timeval tv_r_JOIN_INNER_7_710531_s, tv_r_JOIN_INNER_7_710531_e;
    gettimeofday(&tv_r_JOIN_INNER_7_710531_s, 0);
    SW_JOIN_INNER_TD_738313(tbl_Filter_TD_8604280_output, tbl_Filter_TD_8583896_output, tbl_JOIN_INNER_TD_738313_output);
    gettimeofday(&tv_r_JOIN_INNER_7_710531_e, 0);

    struct timeval tv_r_Filter_7_374855_s, tv_r_Filter_7_374855_e;
    gettimeofday(&tv_r_Filter_7_374855_s, 0);
    SW_Filter_TD_7296672(tbl_SerializeFromObject_TD_8375806_input, tbl_Filter_TD_7296672_output);
    gettimeofday(&tv_r_Filter_7_374855_e, 0);

    struct timeval tv_r_JOIN_INNER_7_513414_s, tv_r_JOIN_INNER_7_513414_e;
    gettimeofday(&tv_r_JOIN_INNER_7_513414_s, 0);
    SW_JOIN_INNER_TD_7417399(tbl_Filter_TD_8603644_output, tbl_Filter_TD_8973868_output, tbl_JOIN_INNER_TD_7417399_output);
    gettimeofday(&tv_r_JOIN_INNER_7_513414_e, 0);

    struct timeval tv_r_Filter_7_967972_s, tv_r_Filter_7_967972_e;
    gettimeofday(&tv_r_Filter_7_967972_s, 0);
    SW_Filter_TD_7806626(tbl_SerializeFromObject_TD_8731347_input, tbl_Filter_TD_7806626_output);
    gettimeofday(&tv_r_Filter_7_967972_e, 0);

    struct timeval tv_r_JOIN_INNER_7_347080_s, tv_r_JOIN_INNER_7_347080_e;
    gettimeofday(&tv_r_JOIN_INNER_7_347080_s, 0);
    SW_JOIN_INNER_TD_7957052(tbl_Filter_TD_8749274_output, tbl_Filter_TD_8144920_output, tbl_JOIN_INNER_TD_7957052_output);
    gettimeofday(&tv_r_JOIN_INNER_7_347080_e, 0);

    struct timeval tv_r_JOIN_INNER_6_375632_s, tv_r_JOIN_INNER_6_375632_e;
    gettimeofday(&tv_r_JOIN_INNER_6_375632_s, 0);
    SW_JOIN_INNER_TD_6345353(tbl_JOIN_INNER_TD_738313_output, tbl_Filter_TD_7497659_output, tbl_JOIN_INNER_TD_6345353_output);
    gettimeofday(&tv_r_JOIN_INNER_6_375632_e, 0);

    struct timeval tv_r_JOIN_INNER_6_979736_s, tv_r_JOIN_INNER_6_979736_e;
    gettimeofday(&tv_r_JOIN_INNER_6_979736_s, 0);
    SW_JOIN_INNER_TD_6824948(tbl_JOIN_INNER_TD_7417399_output, tbl_Filter_TD_7296672_output, tbl_JOIN_INNER_TD_6824948_output);
    gettimeofday(&tv_r_JOIN_INNER_6_979736_e, 0);

    struct timeval tv_r_JOIN_INNER_6_334437_s, tv_r_JOIN_INNER_6_334437_e;
    gettimeofday(&tv_r_JOIN_INNER_6_334437_s, 0);
    SW_JOIN_INNER_TD_6876420(tbl_JOIN_INNER_TD_7957052_output, tbl_Filter_TD_7806626_output, tbl_JOIN_INNER_TD_6876420_output);
    gettimeofday(&tv_r_JOIN_INNER_6_334437_e, 0);

    struct timeval tv_r_Project_5_854532_s, tv_r_Project_5_854532_e;
    gettimeofday(&tv_r_Project_5_854532_s, 0);
    SW_Project_TD_5712895(tbl_JOIN_INNER_TD_6345353_output, tbl_Project_TD_5712895_output);
    gettimeofday(&tv_r_Project_5_854532_e, 0);

    struct timeval tv_r_Project_5_674903_s, tv_r_Project_5_674903_e;
    gettimeofday(&tv_r_Project_5_674903_s, 0);
    SW_Project_TD_5228637(tbl_JOIN_INNER_TD_6824948_output, tbl_Project_TD_5228637_output);
    gettimeofday(&tv_r_Project_5_674903_e, 0);

    struct timeval tv_r_Project_5_297290_s, tv_r_Project_5_297290_e;
    gettimeofday(&tv_r_Project_5_297290_s, 0);
    SW_Project_TD_553323(tbl_JOIN_INNER_TD_6876420_output, tbl_Project_TD_553323_output);
    gettimeofday(&tv_r_Project_5_297290_e, 0);

    struct timeval tv_r_Union_4_875530_s, tv_r_Union_4_875530_e;
    gettimeofday(&tv_r_Union_4_875530_s, 0);
    SW_Union_TD_4654963(tbl_Project_TD_553323_output, tbl_Project_TD_5228637_output, tbl_Project_TD_5712895_output, tbl_Union_TD_4654963_output);
    gettimeofday(&tv_r_Union_4_875530_e, 0);

    struct timeval tv_r_Aggregate_3_368984_s, tv_r_Aggregate_3_368984_e;
    gettimeofday(&tv_r_Aggregate_3_368984_s, 0);
    SW_Aggregate_TD_3979786(tbl_Union_TD_4654963_output, tbl_Aggregate_TD_3979786_output);
    gettimeofday(&tv_r_Aggregate_3_368984_e, 0);

    struct timeval tv_r_Sort_2_296831_s, tv_r_Sort_2_296831_e;
    gettimeofday(&tv_r_Sort_2_296831_s, 0);
    SW_Sort_TD_2899364(tbl_Aggregate_TD_3979786_output, tbl_Sort_TD_2899364_output);
    gettimeofday(&tv_r_Sort_2_296831_e, 0);

    struct timeval tv_r_LocalLimit_1_795719_s, tv_r_LocalLimit_1_795719_e;
    gettimeofday(&tv_r_LocalLimit_1_795719_s, 0);
    SW_LocalLimit_TD_1113449(tbl_Sort_TD_2899364_output, tbl_LocalLimit_TD_1113449_output);
    gettimeofday(&tv_r_LocalLimit_1_795719_e, 0);

    struct timeval tv_r_GlobalLimit_0_306191_s, tv_r_GlobalLimit_0_306191_e;
    gettimeofday(&tv_r_GlobalLimit_0_306191_s, 0);
    SW_GlobalLimit_TD_0252279(tbl_LocalLimit_TD_1113449_output, tbl_GlobalLimit_TD_0252279_output);
    gettimeofday(&tv_r_GlobalLimit_0_306191_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_42710_s, &tv_r_Filter_8_42710_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9919821_input: " << tbl_SerializeFromObject_TD_9919821_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_953327_s, &tv_r_Filter_8_953327_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9352570_input: " << tbl_SerializeFromObject_TD_9352570_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_482534_s, &tv_r_Filter_8_482534_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9930217_input: " << tbl_SerializeFromObject_TD_9930217_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_651165_s, &tv_r_Filter_8_651165_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9251509_input: " << tbl_SerializeFromObject_TD_9251509_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_843319_s, &tv_r_Filter_8_843319_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9306116_input: " << tbl_SerializeFromObject_TD_9306116_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_14440_s, &tv_r_Filter_8_14440_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9925650_input: " << tbl_SerializeFromObject_TD_9925650_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_711423_s, &tv_r_Filter_7_711423_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8176172_input: " << tbl_SerializeFromObject_TD_8176172_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_710531_s, &tv_r_JOIN_INNER_7_710531_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8604280_output: " << tbl_Filter_TD_8604280_output.getNumRow() << " " << "tbl_Filter_TD_8583896_output: " << tbl_Filter_TD_8583896_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_374855_s, &tv_r_Filter_7_374855_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8375806_input: " << tbl_SerializeFromObject_TD_8375806_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_513414_s, &tv_r_JOIN_INNER_7_513414_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8603644_output: " << tbl_Filter_TD_8603644_output.getNumRow() << " " << "tbl_Filter_TD_8973868_output: " << tbl_Filter_TD_8973868_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_967972_s, &tv_r_Filter_7_967972_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8731347_input: " << tbl_SerializeFromObject_TD_8731347_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_347080_s, &tv_r_JOIN_INNER_7_347080_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8749274_output: " << tbl_Filter_TD_8749274_output.getNumRow() << " " << "tbl_Filter_TD_8144920_output: " << tbl_Filter_TD_8144920_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_375632_s, &tv_r_JOIN_INNER_6_375632_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_738313_output: " << tbl_JOIN_INNER_TD_738313_output.getNumRow() << " " << "tbl_Filter_TD_7497659_output: " << tbl_Filter_TD_7497659_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_979736_s, &tv_r_JOIN_INNER_6_979736_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7417399_output: " << tbl_JOIN_INNER_TD_7417399_output.getNumRow() << " " << "tbl_Filter_TD_7296672_output: " << tbl_Filter_TD_7296672_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_334437_s, &tv_r_JOIN_INNER_6_334437_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7957052_output: " << tbl_JOIN_INNER_TD_7957052_output.getNumRow() << " " << "tbl_Filter_TD_7806626_output: " << tbl_Filter_TD_7806626_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_854532_s, &tv_r_Project_5_854532_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6345353_output: " << tbl_JOIN_INNER_TD_6345353_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_674903_s, &tv_r_Project_5_674903_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6824948_output: " << tbl_JOIN_INNER_TD_6824948_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_297290_s, &tv_r_Project_5_297290_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6876420_output: " << tbl_JOIN_INNER_TD_6876420_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_875530_s, &tv_r_Union_4_875530_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_553323_output: " << tbl_Project_TD_553323_output.getNumRow() << " " << "tbl_Project_TD_5228637_output: " << tbl_Project_TD_5228637_output.getNumRow() << " " << "tbl_Project_TD_5712895_output: " << tbl_Project_TD_5712895_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_368984_s, &tv_r_Aggregate_3_368984_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4654963_output: " << tbl_Union_TD_4654963_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_296831_s, &tv_r_Sort_2_296831_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3979786_output: " << tbl_Aggregate_TD_3979786_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_795719_s, &tv_r_LocalLimit_1_795719_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2899364_output: " << tbl_Sort_TD_2899364_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_306191_s, &tv_r_GlobalLimit_0_306191_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1113449_output: " << tbl_LocalLimit_TD_1113449_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.711227 * 1000 << "ms" << std::endl; 
    return 0; 
}
