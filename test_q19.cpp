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

#include "cfgFunc_q19.hpp" 
#include "q19.hpp" 

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
    std::cout << "NOTE:running query #19\n."; 
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
    Table tbl_GlobalLimit_TD_0781_output("tbl_GlobalLimit_TD_0781_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0781_output.allocateHost();
    Table tbl_LocalLimit_TD_1756_output("tbl_LocalLimit_TD_1756_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1756_output.allocateHost();
    Table tbl_Sort_TD_2123_output("tbl_Sort_TD_2123_output", 6100000, 5, "");
    tbl_Sort_TD_2123_output.allocateHost();
    Table tbl_Aggregate_TD_3538_output("tbl_Aggregate_TD_3538_output", 6100000, 5, "");
    tbl_Aggregate_TD_3538_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4598_output("tbl_JOIN_INNER_TD_4598_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4598_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5641_output("tbl_JOIN_INNER_TD_5641_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5641_output.allocateHost();
    Table tbl_Filter_TD_5654_output("tbl_Filter_TD_5654_output", 6100000, 2, "");
    tbl_Filter_TD_5654_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6753_output("tbl_JOIN_INNER_TD_6753_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_6753_output.allocateHost();
    Table tbl_Filter_TD_6252_output("tbl_Filter_TD_6252_output", 6100000, 2, "");
    tbl_Filter_TD_6252_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6398_input;
    tbl_SerializeFromObject_TD_6398_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6398_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_6398_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6398_input.allocateHost();
    tbl_SerializeFromObject_TD_6398_input.loadHost();
    Table tbl_JOIN_INNER_TD_7558_output("tbl_JOIN_INNER_TD_7558_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7558_output.allocateHost();
    Table tbl_Filter_TD_7566_output("tbl_Filter_TD_7566_output", 6100000, 2, "");
    tbl_Filter_TD_7566_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7286_input;
    tbl_SerializeFromObject_TD_7286_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7286_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_7286_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7286_input.allocateHost();
    tbl_SerializeFromObject_TD_7286_input.loadHost();
    Table tbl_JOIN_INNER_TD_8258_output("tbl_JOIN_INNER_TD_8258_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8258_output.allocateHost();
    Table tbl_Filter_TD_8868_output("tbl_Filter_TD_8868_output", 6100000, 5, "");
    tbl_Filter_TD_8868_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8923_input;
    tbl_SerializeFromObject_TD_8923_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8923_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8923_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_8923_input.allocateHost();
    tbl_SerializeFromObject_TD_8923_input.loadHost();
    Table tbl_Filter_TD_9644_output("tbl_Filter_TD_9644_output", 6100000, 1, "");
    tbl_Filter_TD_9644_output.allocateHost();
    Table tbl_Filter_TD_9382_output("tbl_Filter_TD_9382_output", 6100000, 5, "");
    tbl_Filter_TD_9382_output.allocateHost();
    Table tbl_SerializeFromObject_TD_969_input;
    tbl_SerializeFromObject_TD_969_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_969_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_969_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_969_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_969_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_969_input.addCol("i_manufact", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_969_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_969_input.allocateHost();
    tbl_SerializeFromObject_TD_969_input.loadHost();
    Table tbl_SerializeFromObject_TD_10648_input;
    tbl_SerializeFromObject_TD_10648_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10648_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10648_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10648_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10648_input.allocateHost();
    tbl_SerializeFromObject_TD_10648_input.loadHost();
    Table tbl_SerializeFromObject_TD_10122_input;
    tbl_SerializeFromObject_TD_10122_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10122_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10122_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10122_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10122_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10122_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10122_input.allocateHost();
    tbl_SerializeFromObject_TD_10122_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_858924_s, tv_r_Filter_9_858924_e;
    gettimeofday(&tv_r_Filter_9_858924_s, 0);
    SW_Filter_TD_9382(tbl_SerializeFromObject_TD_10122_input, tbl_Filter_TD_9382_output);
    gettimeofday(&tv_r_Filter_9_858924_e, 0);

    struct timeval tv_r_Filter_9_880334_s, tv_r_Filter_9_880334_e;
    gettimeofday(&tv_r_Filter_9_880334_s, 0);
    SW_Filter_TD_9644(tbl_SerializeFromObject_TD_10648_input, tbl_Filter_TD_9644_output);
    gettimeofday(&tv_r_Filter_9_880334_e, 0);

    struct timeval tv_r_Filter_8_444985_s, tv_r_Filter_8_444985_e;
    gettimeofday(&tv_r_Filter_8_444985_s, 0);
    SW_Filter_TD_8868(tbl_SerializeFromObject_TD_969_input, tbl_Filter_TD_8868_output);
    gettimeofday(&tv_r_Filter_8_444985_e, 0);

    struct timeval tv_r_JOIN_INNER_8_737805_s, tv_r_JOIN_INNER_8_737805_e;
    gettimeofday(&tv_r_JOIN_INNER_8_737805_s, 0);
    SW_JOIN_INNER_TD_8258(tbl_Filter_TD_9644_output, tbl_Filter_TD_9382_output, tbl_JOIN_INNER_TD_8258_output);
    gettimeofday(&tv_r_JOIN_INNER_8_737805_e, 0);

    struct timeval tv_r_Filter_7_808599_s, tv_r_Filter_7_808599_e;
    gettimeofday(&tv_r_Filter_7_808599_s, 0);
    SW_Filter_TD_7566(tbl_SerializeFromObject_TD_8923_input, tbl_Filter_TD_7566_output);
    gettimeofday(&tv_r_Filter_7_808599_e, 0);

    struct timeval tv_r_JOIN_INNER_7_574905_s, tv_r_JOIN_INNER_7_574905_e;
    gettimeofday(&tv_r_JOIN_INNER_7_574905_s, 0);
    SW_JOIN_INNER_TD_7558(tbl_JOIN_INNER_TD_8258_output, tbl_Filter_TD_8868_output, tbl_JOIN_INNER_TD_7558_output);
    gettimeofday(&tv_r_JOIN_INNER_7_574905_e, 0);

    struct timeval tv_r_Filter_6_347675_s, tv_r_Filter_6_347675_e;
    gettimeofday(&tv_r_Filter_6_347675_s, 0);
    SW_Filter_TD_6252(tbl_SerializeFromObject_TD_7286_input, tbl_Filter_TD_6252_output);
    gettimeofday(&tv_r_Filter_6_347675_e, 0);

    struct timeval tv_r_JOIN_INNER_6_1668_s, tv_r_JOIN_INNER_6_1668_e;
    gettimeofday(&tv_r_JOIN_INNER_6_1668_s, 0);
    SW_JOIN_INNER_TD_6753(tbl_JOIN_INNER_TD_7558_output, tbl_Filter_TD_7566_output, tbl_JOIN_INNER_TD_6753_output);
    gettimeofday(&tv_r_JOIN_INNER_6_1668_e, 0);

    struct timeval tv_r_Filter_5_685028_s, tv_r_Filter_5_685028_e;
    gettimeofday(&tv_r_Filter_5_685028_s, 0);
    SW_Filter_TD_5654(tbl_SerializeFromObject_TD_6398_input, tbl_Filter_TD_5654_output);
    gettimeofday(&tv_r_Filter_5_685028_e, 0);

    struct timeval tv_r_JOIN_INNER_5_262053_s, tv_r_JOIN_INNER_5_262053_e;
    gettimeofday(&tv_r_JOIN_INNER_5_262053_s, 0);
    SW_JOIN_INNER_TD_5641(tbl_JOIN_INNER_TD_6753_output, tbl_Filter_TD_6252_output, tbl_JOIN_INNER_TD_5641_output);
    gettimeofday(&tv_r_JOIN_INNER_5_262053_e, 0);

    struct timeval tv_r_JOIN_INNER_4_688059_s, tv_r_JOIN_INNER_4_688059_e;
    gettimeofday(&tv_r_JOIN_INNER_4_688059_s, 0);
    SW_JOIN_INNER_TD_4598(tbl_JOIN_INNER_TD_5641_output, tbl_Filter_TD_5654_output, tbl_JOIN_INNER_TD_4598_output);
    gettimeofday(&tv_r_JOIN_INNER_4_688059_e, 0);

    struct timeval tv_r_Aggregate_3_660948_s, tv_r_Aggregate_3_660948_e;
    gettimeofday(&tv_r_Aggregate_3_660948_s, 0);
    SW_Aggregate_TD_3538(tbl_JOIN_INNER_TD_4598_output, tbl_Aggregate_TD_3538_output);
    gettimeofday(&tv_r_Aggregate_3_660948_e, 0);

    struct timeval tv_r_Sort_2_955593_s, tv_r_Sort_2_955593_e;
    gettimeofday(&tv_r_Sort_2_955593_s, 0);
    SW_Sort_TD_2123(tbl_Aggregate_TD_3538_output, tbl_Sort_TD_2123_output);
    gettimeofday(&tv_r_Sort_2_955593_e, 0);

    struct timeval tv_r_LocalLimit_1_939722_s, tv_r_LocalLimit_1_939722_e;
    gettimeofday(&tv_r_LocalLimit_1_939722_s, 0);
    SW_LocalLimit_TD_1756(tbl_Sort_TD_2123_output, tbl_LocalLimit_TD_1756_output);
    gettimeofday(&tv_r_LocalLimit_1_939722_e, 0);

    struct timeval tv_r_GlobalLimit_0_508743_s, tv_r_GlobalLimit_0_508743_e;
    gettimeofday(&tv_r_GlobalLimit_0_508743_s, 0);
    SW_GlobalLimit_TD_0781(tbl_LocalLimit_TD_1756_output, tbl_GlobalLimit_TD_0781_output);
    gettimeofday(&tv_r_GlobalLimit_0_508743_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_858924_s, &tv_r_Filter_9_858924_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10122_input: " << tbl_SerializeFromObject_TD_10122_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_880334_s, &tv_r_Filter_9_880334_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10648_input: " << tbl_SerializeFromObject_TD_10648_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_444985_s, &tv_r_Filter_8_444985_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_969_input: " << tbl_SerializeFromObject_TD_969_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_737805_s, &tv_r_JOIN_INNER_8_737805_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9644_output: " << tbl_Filter_TD_9644_output.getNumRow() << " " << "tbl_Filter_TD_9382_output: " << tbl_Filter_TD_9382_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_808599_s, &tv_r_Filter_7_808599_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8923_input: " << tbl_SerializeFromObject_TD_8923_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_574905_s, &tv_r_JOIN_INNER_7_574905_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8258_output: " << tbl_JOIN_INNER_TD_8258_output.getNumRow() << " " << "tbl_Filter_TD_8868_output: " << tbl_Filter_TD_8868_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_347675_s, &tv_r_Filter_6_347675_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7286_input: " << tbl_SerializeFromObject_TD_7286_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_1668_s, &tv_r_JOIN_INNER_6_1668_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7558_output: " << tbl_JOIN_INNER_TD_7558_output.getNumRow() << " " << "tbl_Filter_TD_7566_output: " << tbl_Filter_TD_7566_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_685028_s, &tv_r_Filter_5_685028_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6398_input: " << tbl_SerializeFromObject_TD_6398_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_262053_s, &tv_r_JOIN_INNER_5_262053_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6753_output: " << tbl_JOIN_INNER_TD_6753_output.getNumRow() << " " << "tbl_Filter_TD_6252_output: " << tbl_Filter_TD_6252_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_688059_s, &tv_r_JOIN_INNER_4_688059_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5641_output: " << tbl_JOIN_INNER_TD_5641_output.getNumRow() << " " << "tbl_Filter_TD_5654_output: " << tbl_Filter_TD_5654_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_660948_s, &tv_r_Aggregate_3_660948_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4598_output: " << tbl_JOIN_INNER_TD_4598_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_955593_s, &tv_r_Sort_2_955593_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3538_output: " << tbl_Aggregate_TD_3538_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_939722_s, &tv_r_LocalLimit_1_939722_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2123_output: " << tbl_Sort_TD_2123_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_508743_s, &tv_r_GlobalLimit_0_508743_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1756_output: " << tbl_LocalLimit_TD_1756_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.6139426 * 1000 << "ms" << std::endl; 
    return 0; 
}
