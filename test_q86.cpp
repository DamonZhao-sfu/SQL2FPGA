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

#include "cfgFunc_q86.hpp" 
#include "q86.hpp" 

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
    std::cout << "NOTE:running query #86\n."; 
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
    Table tbl_GlobalLimit_TD_0764_output("tbl_GlobalLimit_TD_0764_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0764_output.allocateHost();
    Table tbl_LocalLimit_TD_1876_output("tbl_LocalLimit_TD_1876_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1876_output.allocateHost();
    Table tbl_Sort_TD_2496_output("tbl_Sort_TD_2496_output", 6100000, 5, "");
    tbl_Sort_TD_2496_output.allocateHost();
    Table tbl_Window_TD_344_output("tbl_Window_TD_344_output", 6100000, 8, "");
    tbl_Window_TD_344_output.allocateHost();
    Table tbl_Aggregate_TD_4443_output("tbl_Aggregate_TD_4443_output", 6100000, 7, "");
    tbl_Aggregate_TD_4443_output.allocateHost();
    Table tbl_Expand_TD_5414_output("tbl_Expand_TD_5414_output", 6100000, 4, "");
    tbl_Expand_TD_5414_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6208_output("tbl_JOIN_INNER_TD_6208_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6208_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7362_output("tbl_JOIN_INNER_TD_7362_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7362_output.allocateHost();
    Table tbl_Filter_TD_7867_output("tbl_Filter_TD_7867_output", 6100000, 3, "");
    tbl_Filter_TD_7867_output.allocateHost();
    Table tbl_Filter_TD_8314_output("tbl_Filter_TD_8314_output", 6100000, 3, "");
    tbl_Filter_TD_8314_output.allocateHost();
    Table tbl_Filter_TD_8317_output("tbl_Filter_TD_8317_output", 6100000, 1, "");
    tbl_Filter_TD_8317_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8180_input;
    tbl_SerializeFromObject_TD_8180_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8180_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8180_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8180_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8180_input.allocateHost();
    tbl_SerializeFromObject_TD_8180_input.loadHost();
    Table tbl_SerializeFromObject_TD_9168_input;
    tbl_SerializeFromObject_TD_9168_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9168_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9168_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_9168_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_9168_input.allocateHost();
    tbl_SerializeFromObject_TD_9168_input.loadHost();
    Table tbl_SerializeFromObject_TD_9726_input;
    tbl_SerializeFromObject_TD_9726_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9726_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9726_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9726_input.allocateHost();
    tbl_SerializeFromObject_TD_9726_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_574505_s, tv_r_Filter_8_574505_e;
    gettimeofday(&tv_r_Filter_8_574505_s, 0);
    SW_Filter_TD_8317(tbl_SerializeFromObject_TD_9726_input, tbl_Filter_TD_8317_output);
    gettimeofday(&tv_r_Filter_8_574505_e, 0);

    struct timeval tv_r_Filter_8_84234_s, tv_r_Filter_8_84234_e;
    gettimeofday(&tv_r_Filter_8_84234_s, 0);
    SW_Filter_TD_8314(tbl_SerializeFromObject_TD_9168_input, tbl_Filter_TD_8314_output);
    gettimeofday(&tv_r_Filter_8_84234_e, 0);

    struct timeval tv_r_Filter_7_712244_s, tv_r_Filter_7_712244_e;
    gettimeofday(&tv_r_Filter_7_712244_s, 0);
    SW_Filter_TD_7867(tbl_SerializeFromObject_TD_8180_input, tbl_Filter_TD_7867_output);
    gettimeofday(&tv_r_Filter_7_712244_e, 0);

    struct timeval tv_r_JOIN_INNER_7_839566_s, tv_r_JOIN_INNER_7_839566_e;
    gettimeofday(&tv_r_JOIN_INNER_7_839566_s, 0);
    SW_JOIN_INNER_TD_7362(tbl_Filter_TD_8314_output, tbl_Filter_TD_8317_output, tbl_JOIN_INNER_TD_7362_output);
    gettimeofday(&tv_r_JOIN_INNER_7_839566_e, 0);

    struct timeval tv_r_JOIN_INNER_6_843342_s, tv_r_JOIN_INNER_6_843342_e;
    gettimeofday(&tv_r_JOIN_INNER_6_843342_s, 0);
    SW_JOIN_INNER_TD_6208(tbl_JOIN_INNER_TD_7362_output, tbl_Filter_TD_7867_output, tbl_JOIN_INNER_TD_6208_output);
    gettimeofday(&tv_r_JOIN_INNER_6_843342_e, 0);

    struct timeval tv_r_Expand_5_447338_s, tv_r_Expand_5_447338_e;
    gettimeofday(&tv_r_Expand_5_447338_s, 0);
    SW_Expand_TD_5414(tbl_JOIN_INNER_TD_6208_output, tbl_Expand_TD_5414_output);
    gettimeofday(&tv_r_Expand_5_447338_e, 0);

    struct timeval tv_r_Aggregate_4_823505_s, tv_r_Aggregate_4_823505_e;
    gettimeofday(&tv_r_Aggregate_4_823505_s, 0);
    SW_Aggregate_TD_4443(tbl_Expand_TD_5414_output, tbl_Aggregate_TD_4443_output);
    gettimeofday(&tv_r_Aggregate_4_823505_e, 0);

    struct timeval tv_r_Window_3_36892_s, tv_r_Window_3_36892_e;
    gettimeofday(&tv_r_Window_3_36892_s, 0);
    SW_Window_TD_344(tbl_Aggregate_TD_4443_output, tbl_Window_TD_344_output);
    gettimeofday(&tv_r_Window_3_36892_e, 0);

    struct timeval tv_r_Sort_2_679402_s, tv_r_Sort_2_679402_e;
    gettimeofday(&tv_r_Sort_2_679402_s, 0);
    SW_Sort_TD_2496(tbl_Window_TD_344_output, tbl_Sort_TD_2496_output);
    gettimeofday(&tv_r_Sort_2_679402_e, 0);

    struct timeval tv_r_LocalLimit_1_696502_s, tv_r_LocalLimit_1_696502_e;
    gettimeofday(&tv_r_LocalLimit_1_696502_s, 0);
    SW_LocalLimit_TD_1876(tbl_Sort_TD_2496_output, tbl_LocalLimit_TD_1876_output);
    gettimeofday(&tv_r_LocalLimit_1_696502_e, 0);

    struct timeval tv_r_GlobalLimit_0_94309_s, tv_r_GlobalLimit_0_94309_e;
    gettimeofday(&tv_r_GlobalLimit_0_94309_s, 0);
    SW_GlobalLimit_TD_0764(tbl_LocalLimit_TD_1876_output, tbl_GlobalLimit_TD_0764_output);
    gettimeofday(&tv_r_GlobalLimit_0_94309_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_574505_s, &tv_r_Filter_8_574505_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9726_input: " << tbl_SerializeFromObject_TD_9726_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_84234_s, &tv_r_Filter_8_84234_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9168_input: " << tbl_SerializeFromObject_TD_9168_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_712244_s, &tv_r_Filter_7_712244_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8180_input: " << tbl_SerializeFromObject_TD_8180_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_839566_s, &tv_r_JOIN_INNER_7_839566_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8314_output: " << tbl_Filter_TD_8314_output.getNumRow() << " " << "tbl_Filter_TD_8317_output: " << tbl_Filter_TD_8317_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_843342_s, &tv_r_JOIN_INNER_6_843342_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7362_output: " << tbl_JOIN_INNER_TD_7362_output.getNumRow() << " " << "tbl_Filter_TD_7867_output: " << tbl_Filter_TD_7867_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_5: " << tvdiff(&tv_r_Expand_5_447338_s, &tv_r_Expand_5_447338_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6208_output: " << tbl_JOIN_INNER_TD_6208_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_823505_s, &tv_r_Aggregate_4_823505_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_5414_output: " << tbl_Expand_TD_5414_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_3: " << tvdiff(&tv_r_Window_3_36892_s, &tv_r_Window_3_36892_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4443_output: " << tbl_Aggregate_TD_4443_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_679402_s, &tv_r_Sort_2_679402_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_344_output: " << tbl_Window_TD_344_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_696502_s, &tv_r_LocalLimit_1_696502_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2496_output: " << tbl_Sort_TD_2496_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_94309_s, &tv_r_GlobalLimit_0_94309_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1876_output: " << tbl_LocalLimit_TD_1876_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.5776839 * 1000 << "ms" << std::endl; 
    return 0; 
}
