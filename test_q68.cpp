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

#include "cfgFunc_q68.hpp" 
#include "q68.hpp" 

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
    std::cout << "NOTE:running query #68\n."; 
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
    Table tbl_GlobalLimit_TD_0924_output("tbl_GlobalLimit_TD_0924_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0924_output.allocateHost();
    Table tbl_LocalLimit_TD_1322_output("tbl_LocalLimit_TD_1322_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1322_output.allocateHost();
    Table tbl_Sort_TD_2910_output("tbl_Sort_TD_2910_output", 6100000, 8, "");
    tbl_Sort_TD_2910_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3869_output("tbl_JOIN_INNER_TD_3869_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_3869_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4103_output("tbl_JOIN_INNER_TD_4103_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4103_output.allocateHost();
    Table tbl_Filter_TD_4747_output("tbl_Filter_TD_4747_output", 6100000, 2, "");
    tbl_Filter_TD_4747_output.allocateHost();
    Table tbl_Aggregate_TD_5655_output("tbl_Aggregate_TD_5655_output", 6100000, 6, "");
    tbl_Aggregate_TD_5655_output.allocateHost();
    Table tbl_Filter_TD_5231_output("tbl_Filter_TD_5231_output", 6100000, 4, "");
    tbl_Filter_TD_5231_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5310_input;
    tbl_SerializeFromObject_TD_5310_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5310_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_5310_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5310_input.allocateHost();
    tbl_SerializeFromObject_TD_5310_input.loadHost();
    Table tbl_JOIN_INNER_TD_6913_output("tbl_JOIN_INNER_TD_6913_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_6913_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6776_input;
    tbl_SerializeFromObject_TD_6776_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6776_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6776_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_6776_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6776_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6776_input.allocateHost();
    tbl_SerializeFromObject_TD_6776_input.loadHost();
    Table tbl_JOIN_INNER_TD_7866_output("tbl_JOIN_INNER_TD_7866_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7866_output.allocateHost();
    Table tbl_Filter_TD_7155_output("tbl_Filter_TD_7155_output", 6100000, 2, "");
    tbl_Filter_TD_7155_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8602_output("tbl_JOIN_INNER_TD_8602_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8602_output.allocateHost();
    Table tbl_Filter_TD_8237_output("tbl_Filter_TD_8237_output", 6100000, 1, "");
    tbl_Filter_TD_8237_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8485_input;
    tbl_SerializeFromObject_TD_8485_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8485_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8485_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8485_input.allocateHost();
    tbl_SerializeFromObject_TD_8485_input.loadHost();
    Table tbl_JOIN_INNER_TD_9775_output("tbl_JOIN_INNER_TD_9775_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_9775_output.allocateHost();
    Table tbl_Filter_TD_922_output("tbl_Filter_TD_922_output", 6100000, 1, "");
    tbl_Filter_TD_922_output.allocateHost();
    Table tbl_SerializeFromObject_TD_971_input;
    tbl_SerializeFromObject_TD_971_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_971_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_971_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_971_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_971_input.allocateHost();
    tbl_SerializeFromObject_TD_971_input.loadHost();
    Table tbl_Filter_TD_10356_output("tbl_Filter_TD_10356_output", 6100000, 9, "");
    tbl_Filter_TD_10356_output.allocateHost();
    Table tbl_Filter_TD_1037_output("tbl_Filter_TD_1037_output", 6100000, 1, "");
    tbl_Filter_TD_1037_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10705_input;
    tbl_SerializeFromObject_TD_10705_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10705_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10705_input.addCol("s_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10705_input.allocateHost();
    tbl_SerializeFromObject_TD_10705_input.loadHost();
    Table tbl_SerializeFromObject_TD_11988_input;
    tbl_SerializeFromObject_TD_11988_input = Table("store_sales", store_sales_n, 9, in_dir, "orc");
    tbl_SerializeFromObject_TD_11988_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11988_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_11988_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_11988_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_11988_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11988_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_11988_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11988_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_11988_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_11988_input.allocateHost();
    tbl_SerializeFromObject_TD_11988_input.loadHost();
    Table tbl_SerializeFromObject_TD_11644_input;
    tbl_SerializeFromObject_TD_11644_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11644_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11644_input.addCol("d_dom", 4);
    tbl_SerializeFromObject_TD_11644_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11644_input.allocateHost();
    tbl_SerializeFromObject_TD_11644_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_246102_s, tv_r_Filter_10_246102_e;
    gettimeofday(&tv_r_Filter_10_246102_s, 0);
    SW_Filter_TD_1037(tbl_SerializeFromObject_TD_11644_input, tbl_Filter_TD_1037_output);
    gettimeofday(&tv_r_Filter_10_246102_e, 0);

    struct timeval tv_r_Filter_10_838399_s, tv_r_Filter_10_838399_e;
    gettimeofday(&tv_r_Filter_10_838399_s, 0);
    SW_Filter_TD_10356(tbl_SerializeFromObject_TD_11988_input, tbl_Filter_TD_10356_output);
    gettimeofday(&tv_r_Filter_10_838399_e, 0);

    struct timeval tv_r_Filter_9_145521_s, tv_r_Filter_9_145521_e;
    gettimeofday(&tv_r_Filter_9_145521_s, 0);
    SW_Filter_TD_922(tbl_SerializeFromObject_TD_10705_input, tbl_Filter_TD_922_output);
    gettimeofday(&tv_r_Filter_9_145521_e, 0);

    struct timeval tv_r_JOIN_INNER_9_96752_s, tv_r_JOIN_INNER_9_96752_e;
    gettimeofday(&tv_r_JOIN_INNER_9_96752_s, 0);
    SW_JOIN_INNER_TD_9775(tbl_Filter_TD_10356_output, tbl_Filter_TD_1037_output, tbl_JOIN_INNER_TD_9775_output);
    gettimeofday(&tv_r_JOIN_INNER_9_96752_e, 0);

    struct timeval tv_r_Filter_8_93449_s, tv_r_Filter_8_93449_e;
    gettimeofday(&tv_r_Filter_8_93449_s, 0);
    SW_Filter_TD_8237(tbl_SerializeFromObject_TD_971_input, tbl_Filter_TD_8237_output);
    gettimeofday(&tv_r_Filter_8_93449_e, 0);

    struct timeval tv_r_JOIN_INNER_8_744151_s, tv_r_JOIN_INNER_8_744151_e;
    gettimeofday(&tv_r_JOIN_INNER_8_744151_s, 0);
    SW_JOIN_INNER_TD_8602(tbl_JOIN_INNER_TD_9775_output, tbl_Filter_TD_922_output, tbl_JOIN_INNER_TD_8602_output);
    gettimeofday(&tv_r_JOIN_INNER_8_744151_e, 0);

    struct timeval tv_r_Filter_7_29228_s, tv_r_Filter_7_29228_e;
    gettimeofday(&tv_r_Filter_7_29228_s, 0);
    SW_Filter_TD_7155(tbl_SerializeFromObject_TD_8485_input, tbl_Filter_TD_7155_output);
    gettimeofday(&tv_r_Filter_7_29228_e, 0);

    struct timeval tv_r_JOIN_INNER_7_952633_s, tv_r_JOIN_INNER_7_952633_e;
    gettimeofday(&tv_r_JOIN_INNER_7_952633_s, 0);
    SW_JOIN_INNER_TD_7866(tbl_JOIN_INNER_TD_8602_output, tbl_Filter_TD_8237_output, tbl_JOIN_INNER_TD_7866_output);
    gettimeofday(&tv_r_JOIN_INNER_7_952633_e, 0);

    struct timeval tv_r_JOIN_INNER_6_856391_s, tv_r_JOIN_INNER_6_856391_e;
    gettimeofday(&tv_r_JOIN_INNER_6_856391_s, 0);
    SW_JOIN_INNER_TD_6913(tbl_JOIN_INNER_TD_7866_output, tbl_Filter_TD_7155_output, tbl_JOIN_INNER_TD_6913_output);
    gettimeofday(&tv_r_JOIN_INNER_6_856391_e, 0);

    struct timeval tv_r_Filter_5_591923_s, tv_r_Filter_5_591923_e;
    gettimeofday(&tv_r_Filter_5_591923_s, 0);
    SW_Filter_TD_5231(tbl_SerializeFromObject_TD_6776_input, tbl_Filter_TD_5231_output);
    gettimeofday(&tv_r_Filter_5_591923_e, 0);

    struct timeval tv_r_Aggregate_5_625011_s, tv_r_Aggregate_5_625011_e;
    gettimeofday(&tv_r_Aggregate_5_625011_s, 0);
    SW_Aggregate_TD_5655(tbl_JOIN_INNER_TD_6913_output, tbl_Aggregate_TD_5655_output);
    gettimeofday(&tv_r_Aggregate_5_625011_e, 0);

    struct timeval tv_r_Filter_4_519120_s, tv_r_Filter_4_519120_e;
    gettimeofday(&tv_r_Filter_4_519120_s, 0);
    SW_Filter_TD_4747(tbl_SerializeFromObject_TD_5310_input, tbl_Filter_TD_4747_output);
    gettimeofday(&tv_r_Filter_4_519120_e, 0);

    struct timeval tv_r_JOIN_INNER_4_665802_s, tv_r_JOIN_INNER_4_665802_e;
    gettimeofday(&tv_r_JOIN_INNER_4_665802_s, 0);
    SW_JOIN_INNER_TD_4103(tbl_Aggregate_TD_5655_output, tbl_Filter_TD_5231_output, tbl_JOIN_INNER_TD_4103_output);
    gettimeofday(&tv_r_JOIN_INNER_4_665802_e, 0);

    struct timeval tv_r_JOIN_INNER_3_201551_s, tv_r_JOIN_INNER_3_201551_e;
    gettimeofday(&tv_r_JOIN_INNER_3_201551_s, 0);
    SW_JOIN_INNER_TD_3869(tbl_JOIN_INNER_TD_4103_output, tbl_Filter_TD_4747_output, tbl_JOIN_INNER_TD_3869_output);
    gettimeofday(&tv_r_JOIN_INNER_3_201551_e, 0);

    struct timeval tv_r_Sort_2_900071_s, tv_r_Sort_2_900071_e;
    gettimeofday(&tv_r_Sort_2_900071_s, 0);
    SW_Sort_TD_2910(tbl_JOIN_INNER_TD_3869_output, tbl_Sort_TD_2910_output);
    gettimeofday(&tv_r_Sort_2_900071_e, 0);

    struct timeval tv_r_LocalLimit_1_922632_s, tv_r_LocalLimit_1_922632_e;
    gettimeofday(&tv_r_LocalLimit_1_922632_s, 0);
    SW_LocalLimit_TD_1322(tbl_Sort_TD_2910_output, tbl_LocalLimit_TD_1322_output);
    gettimeofday(&tv_r_LocalLimit_1_922632_e, 0);

    struct timeval tv_r_GlobalLimit_0_624822_s, tv_r_GlobalLimit_0_624822_e;
    gettimeofday(&tv_r_GlobalLimit_0_624822_s, 0);
    SW_GlobalLimit_TD_0924(tbl_LocalLimit_TD_1322_output, tbl_GlobalLimit_TD_0924_output);
    gettimeofday(&tv_r_GlobalLimit_0_624822_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_246102_s, &tv_r_Filter_10_246102_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11644_input: " << tbl_SerializeFromObject_TD_11644_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_838399_s, &tv_r_Filter_10_838399_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11988_input: " << tbl_SerializeFromObject_TD_11988_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_145521_s, &tv_r_Filter_9_145521_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10705_input: " << tbl_SerializeFromObject_TD_10705_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_96752_s, &tv_r_JOIN_INNER_9_96752_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10356_output: " << tbl_Filter_TD_10356_output.getNumRow() << " " << "tbl_Filter_TD_1037_output: " << tbl_Filter_TD_1037_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_93449_s, &tv_r_Filter_8_93449_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_971_input: " << tbl_SerializeFromObject_TD_971_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_744151_s, &tv_r_JOIN_INNER_8_744151_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9775_output: " << tbl_JOIN_INNER_TD_9775_output.getNumRow() << " " << "tbl_Filter_TD_922_output: " << tbl_Filter_TD_922_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_29228_s, &tv_r_Filter_7_29228_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8485_input: " << tbl_SerializeFromObject_TD_8485_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_952633_s, &tv_r_JOIN_INNER_7_952633_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8602_output: " << tbl_JOIN_INNER_TD_8602_output.getNumRow() << " " << "tbl_Filter_TD_8237_output: " << tbl_Filter_TD_8237_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_856391_s, &tv_r_JOIN_INNER_6_856391_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7866_output: " << tbl_JOIN_INNER_TD_7866_output.getNumRow() << " " << "tbl_Filter_TD_7155_output: " << tbl_Filter_TD_7155_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_591923_s, &tv_r_Filter_5_591923_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6776_input: " << tbl_SerializeFromObject_TD_6776_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_625011_s, &tv_r_Aggregate_5_625011_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6913_output: " << tbl_JOIN_INNER_TD_6913_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_519120_s, &tv_r_Filter_4_519120_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5310_input: " << tbl_SerializeFromObject_TD_5310_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_665802_s, &tv_r_JOIN_INNER_4_665802_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5655_output: " << tbl_Aggregate_TD_5655_output.getNumRow() << " " << "tbl_Filter_TD_5231_output: " << tbl_Filter_TD_5231_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_201551_s, &tv_r_JOIN_INNER_3_201551_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4103_output: " << tbl_JOIN_INNER_TD_4103_output.getNumRow() << " " << "tbl_Filter_TD_4747_output: " << tbl_Filter_TD_4747_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_900071_s, &tv_r_Sort_2_900071_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3869_output: " << tbl_JOIN_INNER_TD_3869_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_922632_s, &tv_r_LocalLimit_1_922632_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2910_output: " << tbl_Sort_TD_2910_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_624822_s, &tv_r_GlobalLimit_0_624822_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1322_output: " << tbl_LocalLimit_TD_1322_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.3999498 * 1000 << "ms" << std::endl; 
    return 0; 
}
