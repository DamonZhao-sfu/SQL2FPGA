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

#include "cfgFunc_q89.hpp" 
#include "q89.hpp" 

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
    std::cout << "NOTE:running query #89\n."; 
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
    Table tbl_Sort_TD_268_output("tbl_Sort_TD_268_output", 6100000, 8, "");
    tbl_Sort_TD_268_output.allocateHost();
    Table tbl_Filter_TD_322_output("tbl_Filter_TD_322_output", 6100000, 8, "");
    tbl_Filter_TD_322_output.allocateHost();
    Table tbl_Window_TD_4752_output("tbl_Window_TD_4752_output", 6100000, 9, "");
    tbl_Window_TD_4752_output.allocateHost();
    Table tbl_Aggregate_TD_5475_output("tbl_Aggregate_TD_5475_output", 6100000, 8, "");
    tbl_Aggregate_TD_5475_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6427_output("tbl_JOIN_INNER_TD_6427_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_6427_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7629_output("tbl_JOIN_INNER_TD_7629_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7629_output.allocateHost();
    Table tbl_Filter_TD_7753_output("tbl_Filter_TD_7753_output", 6100000, 3, "");
    tbl_Filter_TD_7753_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8161_output("tbl_JOIN_INNER_TD_8161_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8161_output.allocateHost();
    Table tbl_Filter_TD_8974_output("tbl_Filter_TD_8974_output", 6100000, 2, "");
    tbl_Filter_TD_8974_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8661_input;
    tbl_SerializeFromObject_TD_8661_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8661_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8661_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8661_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8661_input.allocateHost();
    tbl_SerializeFromObject_TD_8661_input.loadHost();
    Table tbl_Filter_TD_9626_output("tbl_Filter_TD_9626_output", 6100000, 4, "");
    tbl_Filter_TD_9626_output.allocateHost();
    Table tbl_Filter_TD_9251_output("tbl_Filter_TD_9251_output", 6100000, 4, "");
    tbl_Filter_TD_9251_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9138_input;
    tbl_SerializeFromObject_TD_9138_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9138_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9138_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9138_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9138_input.allocateHost();
    tbl_SerializeFromObject_TD_9138_input.loadHost();
    Table tbl_SerializeFromObject_TD_10639_input;
    tbl_SerializeFromObject_TD_10639_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10639_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10639_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10639_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10639_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10639_input.allocateHost();
    tbl_SerializeFromObject_TD_10639_input.loadHost();
    Table tbl_SerializeFromObject_TD_1047_input;
    tbl_SerializeFromObject_TD_1047_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1047_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1047_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_1047_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_1047_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_1047_input.allocateHost();
    tbl_SerializeFromObject_TD_1047_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_68836_s, tv_r_Filter_9_68836_e;
    gettimeofday(&tv_r_Filter_9_68836_s, 0);
    SW_Filter_TD_9251(tbl_SerializeFromObject_TD_1047_input, tbl_Filter_TD_9251_output);
    gettimeofday(&tv_r_Filter_9_68836_e, 0);

    struct timeval tv_r_Filter_9_179130_s, tv_r_Filter_9_179130_e;
    gettimeofday(&tv_r_Filter_9_179130_s, 0);
    SW_Filter_TD_9626(tbl_SerializeFromObject_TD_10639_input, tbl_Filter_TD_9626_output);
    gettimeofday(&tv_r_Filter_9_179130_e, 0);

    struct timeval tv_r_Filter_8_258561_s, tv_r_Filter_8_258561_e;
    gettimeofday(&tv_r_Filter_8_258561_s, 0);
    SW_Filter_TD_8974(tbl_SerializeFromObject_TD_9138_input, tbl_Filter_TD_8974_output);
    gettimeofday(&tv_r_Filter_8_258561_e, 0);

    struct timeval tv_r_JOIN_INNER_8_493824_s, tv_r_JOIN_INNER_8_493824_e;
    gettimeofday(&tv_r_JOIN_INNER_8_493824_s, 0);
    SW_JOIN_INNER_TD_8161(tbl_Filter_TD_9626_output, tbl_Filter_TD_9251_output, tbl_JOIN_INNER_TD_8161_output);
    gettimeofday(&tv_r_JOIN_INNER_8_493824_e, 0);

    struct timeval tv_r_Filter_7_445787_s, tv_r_Filter_7_445787_e;
    gettimeofday(&tv_r_Filter_7_445787_s, 0);
    SW_Filter_TD_7753(tbl_SerializeFromObject_TD_8661_input, tbl_Filter_TD_7753_output);
    gettimeofday(&tv_r_Filter_7_445787_e, 0);

    struct timeval tv_r_JOIN_INNER_7_424898_s, tv_r_JOIN_INNER_7_424898_e;
    gettimeofday(&tv_r_JOIN_INNER_7_424898_s, 0);
    SW_JOIN_INNER_TD_7629(tbl_JOIN_INNER_TD_8161_output, tbl_Filter_TD_8974_output, tbl_JOIN_INNER_TD_7629_output);
    gettimeofday(&tv_r_JOIN_INNER_7_424898_e, 0);

    struct timeval tv_r_JOIN_INNER_6_572060_s, tv_r_JOIN_INNER_6_572060_e;
    gettimeofday(&tv_r_JOIN_INNER_6_572060_s, 0);
    SW_JOIN_INNER_TD_6427(tbl_JOIN_INNER_TD_7629_output, tbl_Filter_TD_7753_output, tbl_JOIN_INNER_TD_6427_output);
    gettimeofday(&tv_r_JOIN_INNER_6_572060_e, 0);

    struct timeval tv_r_Aggregate_5_535545_s, tv_r_Aggregate_5_535545_e;
    gettimeofday(&tv_r_Aggregate_5_535545_s, 0);
    SW_Aggregate_TD_5475(tbl_JOIN_INNER_TD_6427_output, tbl_Aggregate_TD_5475_output);
    gettimeofday(&tv_r_Aggregate_5_535545_e, 0);

    struct timeval tv_r_Window_4_873213_s, tv_r_Window_4_873213_e;
    gettimeofday(&tv_r_Window_4_873213_s, 0);
    SW_Window_TD_4752(tbl_Aggregate_TD_5475_output, tbl_Window_TD_4752_output);
    gettimeofday(&tv_r_Window_4_873213_e, 0);

    struct timeval tv_r_Filter_3_359743_s, tv_r_Filter_3_359743_e;
    gettimeofday(&tv_r_Filter_3_359743_s, 0);
    SW_Filter_TD_322(tbl_Window_TD_4752_output, tbl_Filter_TD_322_output);
    gettimeofday(&tv_r_Filter_3_359743_e, 0);

    struct timeval tv_r_Sort_2_206555_s, tv_r_Sort_2_206555_e;
    gettimeofday(&tv_r_Sort_2_206555_s, 0);
    SW_Sort_TD_268(tbl_Filter_TD_322_output, tbl_Sort_TD_268_output);
    gettimeofday(&tv_r_Sort_2_206555_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_68836_s, &tv_r_Filter_9_68836_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1047_input: " << tbl_SerializeFromObject_TD_1047_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_179130_s, &tv_r_Filter_9_179130_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10639_input: " << tbl_SerializeFromObject_TD_10639_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_258561_s, &tv_r_Filter_8_258561_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9138_input: " << tbl_SerializeFromObject_TD_9138_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_493824_s, &tv_r_JOIN_INNER_8_493824_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9626_output: " << tbl_Filter_TD_9626_output.getNumRow() << " " << "tbl_Filter_TD_9251_output: " << tbl_Filter_TD_9251_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_445787_s, &tv_r_Filter_7_445787_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8661_input: " << tbl_SerializeFromObject_TD_8661_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_424898_s, &tv_r_JOIN_INNER_7_424898_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8161_output: " << tbl_JOIN_INNER_TD_8161_output.getNumRow() << " " << "tbl_Filter_TD_8974_output: " << tbl_Filter_TD_8974_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_572060_s, &tv_r_JOIN_INNER_6_572060_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7629_output: " << tbl_JOIN_INNER_TD_7629_output.getNumRow() << " " << "tbl_Filter_TD_7753_output: " << tbl_Filter_TD_7753_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_535545_s, &tv_r_Aggregate_5_535545_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6427_output: " << tbl_JOIN_INNER_TD_6427_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_873213_s, &tv_r_Window_4_873213_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5475_output: " << tbl_Aggregate_TD_5475_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_359743_s, &tv_r_Filter_3_359743_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4752_output: " << tbl_Window_TD_4752_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_206555_s, &tv_r_Sort_2_206555_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_322_output: " << tbl_Filter_TD_322_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.020516 * 1000 << "ms" << std::endl; 
    return 0; 
}
