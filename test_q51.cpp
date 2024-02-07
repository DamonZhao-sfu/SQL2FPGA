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

#include "cfgFunc_q51.hpp" 
#include "q51.hpp" 

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
    std::cout << "NOTE:running query #51\n."; 
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
    Table tbl_Sort_TD_2603_output("tbl_Sort_TD_2603_output", 6100000, 6, "");
    tbl_Sort_TD_2603_output.allocateHost();
    Table tbl_Filter_TD_3112_output("tbl_Filter_TD_3112_output", 6100000, 6, "");
    tbl_Filter_TD_3112_output.allocateHost();
    Table tbl_Window_TD_4561_output("tbl_Window_TD_4561_output", 6100000, 6, "");
    tbl_Window_TD_4561_output.allocateHost();
    Table tbl_Project_TD_5112_output("tbl_Project_TD_5112_output", 6100000, 4, "");
    tbl_Project_TD_5112_output.allocateHost();
    Table tbl_JOIN_FULLOUTER_TD_6251_output("tbl_JOIN_FULLOUTER_TD_6251_output", 6100000, 6, "");
    tbl_JOIN_FULLOUTER_TD_6251_output.allocateHost();
    Table tbl_Window_TD_7748_output("tbl_Window_TD_7748_output", 6100000, 5, "");
    tbl_Window_TD_7748_output.allocateHost();
    Table tbl_Window_TD_74_output("tbl_Window_TD_74_output", 6100000, 5, "");
    tbl_Window_TD_74_output.allocateHost();
    Table tbl_Aggregate_TD_80_output("tbl_Aggregate_TD_80_output", 6100000, 4, "");
    tbl_Aggregate_TD_80_output.allocateHost();
    Table tbl_Aggregate_TD_8601_output("tbl_Aggregate_TD_8601_output", 6100000, 4, "");
    tbl_Aggregate_TD_8601_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9156_output("tbl_JOIN_INNER_TD_9156_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9156_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9483_output("tbl_JOIN_INNER_TD_9483_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9483_output.allocateHost();
    Table tbl_Filter_TD_10125_output("tbl_Filter_TD_10125_output", 6100000, 3, "");
    tbl_Filter_TD_10125_output.allocateHost();
    Table tbl_Filter_TD_10220_output("tbl_Filter_TD_10220_output", 6100000, 2, "");
    tbl_Filter_TD_10220_output.allocateHost();
    Table tbl_Filter_TD_10336_output("tbl_Filter_TD_10336_output", 6100000, 3, "");
    tbl_Filter_TD_10336_output.allocateHost();
    Table tbl_Filter_TD_10512_output("tbl_Filter_TD_10512_output", 6100000, 2, "");
    tbl_Filter_TD_10512_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11547_input;
    tbl_SerializeFromObject_TD_11547_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11547_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11547_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_11547_input.addCol("ws_sales_price", 4);
    tbl_SerializeFromObject_TD_11547_input.allocateHost();
    tbl_SerializeFromObject_TD_11547_input.loadHost();
    Table tbl_SerializeFromObject_TD_11617_input;
    tbl_SerializeFromObject_TD_11617_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11617_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11617_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11617_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_11617_input.allocateHost();
    tbl_SerializeFromObject_TD_11617_input.loadHost();
    Table tbl_SerializeFromObject_TD_11509_input;
    tbl_SerializeFromObject_TD_11509_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11509_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11509_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_11509_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_11509_input.allocateHost();
    tbl_SerializeFromObject_TD_11509_input.loadHost();
    Table tbl_SerializeFromObject_TD_11792_input;
    tbl_SerializeFromObject_TD_11792_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11792_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11792_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11792_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_11792_input.allocateHost();
    tbl_SerializeFromObject_TD_11792_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_417651_s, tv_r_Filter_10_417651_e;
    gettimeofday(&tv_r_Filter_10_417651_s, 0);
    SW_Filter_TD_10512(tbl_SerializeFromObject_TD_11792_input, tbl_Filter_TD_10512_output);
    gettimeofday(&tv_r_Filter_10_417651_e, 0);

    struct timeval tv_r_Filter_10_864680_s, tv_r_Filter_10_864680_e;
    gettimeofday(&tv_r_Filter_10_864680_s, 0);
    SW_Filter_TD_10336(tbl_SerializeFromObject_TD_11509_input, tbl_Filter_TD_10336_output);
    gettimeofday(&tv_r_Filter_10_864680_e, 0);

    struct timeval tv_r_Filter_10_162309_s, tv_r_Filter_10_162309_e;
    gettimeofday(&tv_r_Filter_10_162309_s, 0);
    SW_Filter_TD_10220(tbl_SerializeFromObject_TD_11617_input, tbl_Filter_TD_10220_output);
    gettimeofday(&tv_r_Filter_10_162309_e, 0);

    struct timeval tv_r_Filter_10_534837_s, tv_r_Filter_10_534837_e;
    gettimeofday(&tv_r_Filter_10_534837_s, 0);
    SW_Filter_TD_10125(tbl_SerializeFromObject_TD_11547_input, tbl_Filter_TD_10125_output);
    gettimeofday(&tv_r_Filter_10_534837_e, 0);

    struct timeval tv_r_JOIN_INNER_9_364554_s, tv_r_JOIN_INNER_9_364554_e;
    gettimeofday(&tv_r_JOIN_INNER_9_364554_s, 0);
    SW_JOIN_INNER_TD_9483(tbl_Filter_TD_10336_output, tbl_Filter_TD_10512_output, tbl_JOIN_INNER_TD_9483_output);
    gettimeofday(&tv_r_JOIN_INNER_9_364554_e, 0);

    struct timeval tv_r_JOIN_INNER_9_695541_s, tv_r_JOIN_INNER_9_695541_e;
    gettimeofday(&tv_r_JOIN_INNER_9_695541_s, 0);
    SW_JOIN_INNER_TD_9156(tbl_Filter_TD_10125_output, tbl_Filter_TD_10220_output, tbl_JOIN_INNER_TD_9156_output);
    gettimeofday(&tv_r_JOIN_INNER_9_695541_e, 0);

    struct timeval tv_r_Aggregate_8_53752_s, tv_r_Aggregate_8_53752_e;
    gettimeofday(&tv_r_Aggregate_8_53752_s, 0);
    SW_Aggregate_TD_8601(tbl_JOIN_INNER_TD_9483_output, tbl_Aggregate_TD_8601_output);
    gettimeofday(&tv_r_Aggregate_8_53752_e, 0);

    struct timeval tv_r_Aggregate_8_444086_s, tv_r_Aggregate_8_444086_e;
    gettimeofday(&tv_r_Aggregate_8_444086_s, 0);
    SW_Aggregate_TD_80(tbl_JOIN_INNER_TD_9156_output, tbl_Aggregate_TD_80_output);
    gettimeofday(&tv_r_Aggregate_8_444086_e, 0);

    struct timeval tv_r_Window_7_329378_s, tv_r_Window_7_329378_e;
    gettimeofday(&tv_r_Window_7_329378_s, 0);
    SW_Window_TD_74(tbl_Aggregate_TD_8601_output, tbl_Window_TD_74_output);
    gettimeofday(&tv_r_Window_7_329378_e, 0);

    struct timeval tv_r_Window_7_90997_s, tv_r_Window_7_90997_e;
    gettimeofday(&tv_r_Window_7_90997_s, 0);
    SW_Window_TD_7748(tbl_Aggregate_TD_80_output, tbl_Window_TD_7748_output);
    gettimeofday(&tv_r_Window_7_90997_e, 0);

    struct timeval tv_r_JOIN_FULLOUTER_6_474972_s, tv_r_JOIN_FULLOUTER_6_474972_e;
    gettimeofday(&tv_r_JOIN_FULLOUTER_6_474972_s, 0);
    SW_JOIN_FULLOUTER_TD_6251(tbl_Window_TD_7748_output, tbl_Window_TD_74_output, tbl_JOIN_FULLOUTER_TD_6251_output);
    gettimeofday(&tv_r_JOIN_FULLOUTER_6_474972_e, 0);

    struct timeval tv_r_Project_5_331085_s, tv_r_Project_5_331085_e;
    gettimeofday(&tv_r_Project_5_331085_s, 0);
    SW_Project_TD_5112(tbl_JOIN_FULLOUTER_TD_6251_output, tbl_Project_TD_5112_output);
    gettimeofday(&tv_r_Project_5_331085_e, 0);

    struct timeval tv_r_Window_4_465635_s, tv_r_Window_4_465635_e;
    gettimeofday(&tv_r_Window_4_465635_s, 0);
    SW_Window_TD_4561(tbl_Project_TD_5112_output, tbl_Window_TD_4561_output);
    gettimeofday(&tv_r_Window_4_465635_e, 0);

    struct timeval tv_r_Filter_3_283062_s, tv_r_Filter_3_283062_e;
    gettimeofday(&tv_r_Filter_3_283062_s, 0);
    SW_Filter_TD_3112(tbl_Window_TD_4561_output, tbl_Filter_TD_3112_output);
    gettimeofday(&tv_r_Filter_3_283062_e, 0);

    struct timeval tv_r_Sort_2_729004_s, tv_r_Sort_2_729004_e;
    gettimeofday(&tv_r_Sort_2_729004_s, 0);
    SW_Sort_TD_2603(tbl_Filter_TD_3112_output, tbl_Sort_TD_2603_output);
    gettimeofday(&tv_r_Sort_2_729004_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_417651_s, &tv_r_Filter_10_417651_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11792_input: " << tbl_SerializeFromObject_TD_11792_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_864680_s, &tv_r_Filter_10_864680_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11509_input: " << tbl_SerializeFromObject_TD_11509_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_162309_s, &tv_r_Filter_10_162309_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11617_input: " << tbl_SerializeFromObject_TD_11617_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_534837_s, &tv_r_Filter_10_534837_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11547_input: " << tbl_SerializeFromObject_TD_11547_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_364554_s, &tv_r_JOIN_INNER_9_364554_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10336_output: " << tbl_Filter_TD_10336_output.getNumRow() << " " << "tbl_Filter_TD_10512_output: " << tbl_Filter_TD_10512_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_695541_s, &tv_r_JOIN_INNER_9_695541_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10125_output: " << tbl_Filter_TD_10125_output.getNumRow() << " " << "tbl_Filter_TD_10220_output: " << tbl_Filter_TD_10220_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_53752_s, &tv_r_Aggregate_8_53752_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9483_output: " << tbl_JOIN_INNER_TD_9483_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_444086_s, &tv_r_Aggregate_8_444086_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9156_output: " << tbl_JOIN_INNER_TD_9156_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_329378_s, &tv_r_Window_7_329378_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8601_output: " << tbl_Aggregate_TD_8601_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_90997_s, &tv_r_Window_7_90997_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_80_output: " << tbl_Aggregate_TD_80_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_FULLOUTER_6: " << tvdiff(&tv_r_JOIN_FULLOUTER_6_474972_s, &tv_r_JOIN_FULLOUTER_6_474972_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7748_output: " << tbl_Window_TD_7748_output.getNumRow() << " " << "tbl_Window_TD_74_output: " << tbl_Window_TD_74_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_331085_s, &tv_r_Project_5_331085_e) / 1000.0 << " ms " 
     << "tbl_JOIN_FULLOUTER_TD_6251_output: " << tbl_JOIN_FULLOUTER_TD_6251_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_465635_s, &tv_r_Window_4_465635_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5112_output: " << tbl_Project_TD_5112_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_283062_s, &tv_r_Filter_3_283062_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4561_output: " << tbl_Window_TD_4561_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_729004_s, &tv_r_Sort_2_729004_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3112_output: " << tbl_Filter_TD_3112_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 9.356464 * 1000 << "ms" << std::endl; 
    return 0; 
}
