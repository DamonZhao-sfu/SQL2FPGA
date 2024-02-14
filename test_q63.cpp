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

#include "cfgFunc_q63.hpp" 
#include "q63.hpp" 

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
    std::cout << "NOTE:running query #63\n."; 
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
    Table tbl_Sort_TD_2634_output("tbl_Sort_TD_2634_output", 6100000, 3, "");
    tbl_Sort_TD_2634_output.allocateHost();
    Table tbl_Filter_TD_3667_output("tbl_Filter_TD_3667_output", 6100000, 3, "");
    tbl_Filter_TD_3667_output.allocateHost();
    Table tbl_Window_TD_4777_output("tbl_Window_TD_4777_output", 6100000, 4, "");
    tbl_Window_TD_4777_output.allocateHost();
    Table tbl_Aggregate_TD_5554_output("tbl_Aggregate_TD_5554_output", 6100000, 3, "");
    tbl_Aggregate_TD_5554_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6968_output("tbl_JOIN_INNER_TD_6968_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6968_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7823_output("tbl_JOIN_INNER_TD_7823_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7823_output.allocateHost();
    Table tbl_Filter_TD_7163_output("tbl_Filter_TD_7163_output", 6100000, 1, "");
    tbl_Filter_TD_7163_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8522_output("tbl_JOIN_INNER_TD_8522_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8522_output.allocateHost();
    Table tbl_Filter_TD_8559_output("tbl_Filter_TD_8559_output", 6100000, 2, "");
    tbl_Filter_TD_8559_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8266_input;
    tbl_SerializeFromObject_TD_8266_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8266_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8266_input.allocateHost();
    tbl_SerializeFromObject_TD_8266_input.loadHost();
    Table tbl_Filter_TD_9528_output("tbl_Filter_TD_9528_output", 6100000, 2, "");
    tbl_Filter_TD_9528_output.allocateHost();
    Table tbl_Filter_TD_9648_output("tbl_Filter_TD_9648_output", 6100000, 4, "");
    tbl_Filter_TD_9648_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9820_input;
    tbl_SerializeFromObject_TD_9820_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9820_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9820_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9820_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9820_input.allocateHost();
    tbl_SerializeFromObject_TD_9820_input.loadHost();
    Table tbl_SerializeFromObject_TD_10415_input;
    tbl_SerializeFromObject_TD_10415_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10415_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10415_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_10415_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10415_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10415_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10415_input.allocateHost();
    tbl_SerializeFromObject_TD_10415_input.loadHost();
    Table tbl_SerializeFromObject_TD_10209_input;
    tbl_SerializeFromObject_TD_10209_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10209_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10209_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10209_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10209_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10209_input.allocateHost();
    tbl_SerializeFromObject_TD_10209_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_808324_s, tv_r_Filter_9_808324_e;
    gettimeofday(&tv_r_Filter_9_808324_s, 0);
    SW_Filter_TD_9648(tbl_SerializeFromObject_TD_10209_input, tbl_Filter_TD_9648_output);
    gettimeofday(&tv_r_Filter_9_808324_e, 0);

    struct timeval tv_r_Filter_9_173662_s, tv_r_Filter_9_173662_e;
    gettimeofday(&tv_r_Filter_9_173662_s, 0);
    SW_Filter_TD_9528(tbl_SerializeFromObject_TD_10415_input, tbl_Filter_TD_9528_output);
    gettimeofday(&tv_r_Filter_9_173662_e, 0);

    struct timeval tv_r_Filter_8_72323_s, tv_r_Filter_8_72323_e;
    gettimeofday(&tv_r_Filter_8_72323_s, 0);
    SW_Filter_TD_8559(tbl_SerializeFromObject_TD_9820_input, tbl_Filter_TD_8559_output);
    gettimeofday(&tv_r_Filter_8_72323_e, 0);

    struct timeval tv_r_JOIN_INNER_8_983503_s, tv_r_JOIN_INNER_8_983503_e;
    gettimeofday(&tv_r_JOIN_INNER_8_983503_s, 0);
    SW_JOIN_INNER_TD_8522(tbl_Filter_TD_9528_output, tbl_Filter_TD_9648_output, tbl_JOIN_INNER_TD_8522_output);
    gettimeofday(&tv_r_JOIN_INNER_8_983503_e, 0);

    struct timeval tv_r_Filter_7_416952_s, tv_r_Filter_7_416952_e;
    gettimeofday(&tv_r_Filter_7_416952_s, 0);
    SW_Filter_TD_7163(tbl_SerializeFromObject_TD_8266_input, tbl_Filter_TD_7163_output);
    gettimeofday(&tv_r_Filter_7_416952_e, 0);

    struct timeval tv_r_JOIN_INNER_7_556862_s, tv_r_JOIN_INNER_7_556862_e;
    gettimeofday(&tv_r_JOIN_INNER_7_556862_s, 0);
    SW_JOIN_INNER_TD_7823(tbl_JOIN_INNER_TD_8522_output, tbl_Filter_TD_8559_output, tbl_JOIN_INNER_TD_7823_output);
    gettimeofday(&tv_r_JOIN_INNER_7_556862_e, 0);

    struct timeval tv_r_JOIN_INNER_6_581667_s, tv_r_JOIN_INNER_6_581667_e;
    gettimeofday(&tv_r_JOIN_INNER_6_581667_s, 0);
    SW_JOIN_INNER_TD_6968(tbl_JOIN_INNER_TD_7823_output, tbl_Filter_TD_7163_output, tbl_JOIN_INNER_TD_6968_output);
    gettimeofday(&tv_r_JOIN_INNER_6_581667_e, 0);

    struct timeval tv_r_Aggregate_5_971609_s, tv_r_Aggregate_5_971609_e;
    gettimeofday(&tv_r_Aggregate_5_971609_s, 0);
    SW_Aggregate_TD_5554(tbl_JOIN_INNER_TD_6968_output, tbl_Aggregate_TD_5554_output);
    gettimeofday(&tv_r_Aggregate_5_971609_e, 0);

    struct timeval tv_r_Window_4_80597_s, tv_r_Window_4_80597_e;
    gettimeofday(&tv_r_Window_4_80597_s, 0);
    SW_Window_TD_4777(tbl_Aggregate_TD_5554_output, tbl_Window_TD_4777_output);
    gettimeofday(&tv_r_Window_4_80597_e, 0);

    struct timeval tv_r_Filter_3_325632_s, tv_r_Filter_3_325632_e;
    gettimeofday(&tv_r_Filter_3_325632_s, 0);
    SW_Filter_TD_3667(tbl_Window_TD_4777_output, tbl_Filter_TD_3667_output);
    gettimeofday(&tv_r_Filter_3_325632_e, 0);

    struct timeval tv_r_Sort_2_777751_s, tv_r_Sort_2_777751_e;
    gettimeofday(&tv_r_Sort_2_777751_s, 0);
    SW_Sort_TD_2634(tbl_Filter_TD_3667_output, tbl_Sort_TD_2634_output);
    gettimeofday(&tv_r_Sort_2_777751_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_808324_s, &tv_r_Filter_9_808324_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10209_input: " << tbl_SerializeFromObject_TD_10209_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_173662_s, &tv_r_Filter_9_173662_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10415_input: " << tbl_SerializeFromObject_TD_10415_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_72323_s, &tv_r_Filter_8_72323_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9820_input: " << tbl_SerializeFromObject_TD_9820_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_983503_s, &tv_r_JOIN_INNER_8_983503_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9528_output: " << tbl_Filter_TD_9528_output.getNumRow() << " " << "tbl_Filter_TD_9648_output: " << tbl_Filter_TD_9648_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_416952_s, &tv_r_Filter_7_416952_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8266_input: " << tbl_SerializeFromObject_TD_8266_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_556862_s, &tv_r_JOIN_INNER_7_556862_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8522_output: " << tbl_JOIN_INNER_TD_8522_output.getNumRow() << " " << "tbl_Filter_TD_8559_output: " << tbl_Filter_TD_8559_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_581667_s, &tv_r_JOIN_INNER_6_581667_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7823_output: " << tbl_JOIN_INNER_TD_7823_output.getNumRow() << " " << "tbl_Filter_TD_7163_output: " << tbl_Filter_TD_7163_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_971609_s, &tv_r_Aggregate_5_971609_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6968_output: " << tbl_JOIN_INNER_TD_6968_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_80597_s, &tv_r_Window_4_80597_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5554_output: " << tbl_Aggregate_TD_5554_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_325632_s, &tv_r_Filter_3_325632_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4777_output: " << tbl_Window_TD_4777_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_777751_s, &tv_r_Sort_2_777751_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3667_output: " << tbl_Filter_TD_3667_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.7338299 * 1000 << "ms" << std::endl; 
    return 0; 
}
