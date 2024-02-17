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

#include "cfgFunc_q59.hpp" 
#include "q59.hpp" 

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
    std::cout << "NOTE:running query #59\n."; 
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
    Table tbl_GlobalLimit_TD_09_output("tbl_GlobalLimit_TD_09_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_09_output.allocateHost();
    Table tbl_LocalLimit_TD_1558_output("tbl_LocalLimit_TD_1558_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1558_output.allocateHost();
    Table tbl_Sort_TD_2100_output("tbl_Sort_TD_2100_output", 6100000, 10, "");
    tbl_Sort_TD_2100_output.allocateHost();
    Table tbl_Project_TD_3199_output("tbl_Project_TD_3199_output", 6100000, 10, "");
    tbl_Project_TD_3199_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4788_output("tbl_JOIN_INNER_TD_4788_output", 6100000, 17, "");
    tbl_JOIN_INNER_TD_4788_output.allocateHost();
    Table tbl_Project_TD_5392_output("tbl_Project_TD_5392_output", 6100000, 10, "");
    tbl_Project_TD_5392_output.allocateHost();
    Table tbl_Project_TD_5269_output("tbl_Project_TD_5269_output", 6100000, 9, "");
    tbl_Project_TD_5269_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6655_output("tbl_JOIN_INNER_TD_6655_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_6655_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6400_output("tbl_JOIN_INNER_TD_6400_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_6400_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7618_output("tbl_JOIN_INNER_TD_7618_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_7618_output.allocateHost();
    Table tbl_Filter_TD_7381_output("tbl_Filter_TD_7381_output", 6100000, 1, "");
    tbl_Filter_TD_7381_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7173_output("tbl_JOIN_INNER_TD_7173_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_7173_output.allocateHost();
    Table tbl_Filter_TD_7903_output("tbl_Filter_TD_7903_output", 6100000, 1, "");
    tbl_Filter_TD_7903_output.allocateHost();
    Table tbl_Aggregate_TD_8474_output("tbl_Aggregate_TD_8474_output", 6100000, 9, "");
    tbl_Aggregate_TD_8474_output.allocateHost();
    Table tbl_Filter_TD_8497_output("tbl_Filter_TD_8497_output", 6100000, 3, "");
    tbl_Filter_TD_8497_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8812_input;
    tbl_SerializeFromObject_TD_8812_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8812_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_8812_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8812_input.allocateHost();
    tbl_SerializeFromObject_TD_8812_input.loadHost();
    Table tbl_Aggregate_TD_8822_output("tbl_Aggregate_TD_8822_output", 6100000, 9, "");
    tbl_Aggregate_TD_8822_output.allocateHost();
    Table tbl_Filter_TD_8248_output("tbl_Filter_TD_8248_output", 6100000, 2, "");
    tbl_Filter_TD_8248_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8848_input;
    tbl_SerializeFromObject_TD_8848_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8848_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_8848_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8848_input.allocateHost();
    tbl_SerializeFromObject_TD_8848_input.loadHost();
    Table tbl_JOIN_INNER_TD_9756_output("tbl_JOIN_INNER_TD_9756_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_9756_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9539_input;
    tbl_SerializeFromObject_TD_9539_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9539_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9539_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9539_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9539_input.allocateHost();
    tbl_SerializeFromObject_TD_9539_input.loadHost();
    Table tbl_JOIN_INNER_TD_9357_output("tbl_JOIN_INNER_TD_9357_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_9357_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9324_input;
    tbl_SerializeFromObject_TD_9324_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9324_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9324_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9324_input.allocateHost();
    tbl_SerializeFromObject_TD_9324_input.loadHost();
    Table tbl_Filter_TD_10629_output("tbl_Filter_TD_10629_output", 6100000, 3, "");
    tbl_Filter_TD_10629_output.allocateHost();
    Table tbl_Filter_TD_10779_output("tbl_Filter_TD_10779_output", 6100000, 3, "");
    tbl_Filter_TD_10779_output.allocateHost();
    Table tbl_Filter_TD_10370_output("tbl_Filter_TD_10370_output", 6100000, 3, "");
    tbl_Filter_TD_10370_output.allocateHost();
    Table tbl_Filter_TD_10340_output("tbl_Filter_TD_10340_output", 6100000, 3, "");
    tbl_Filter_TD_10340_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11483_input;
    tbl_SerializeFromObject_TD_11483_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11483_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11483_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11483_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_11483_input.allocateHost();
    tbl_SerializeFromObject_TD_11483_input.loadHost();
    Table tbl_SerializeFromObject_TD_11630_input;
    tbl_SerializeFromObject_TD_11630_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11630_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11630_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11630_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11630_input.allocateHost();
    tbl_SerializeFromObject_TD_11630_input.loadHost();
    Table tbl_SerializeFromObject_TD_11269_input;
    tbl_SerializeFromObject_TD_11269_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11269_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11269_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11269_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_11269_input.allocateHost();
    tbl_SerializeFromObject_TD_11269_input.loadHost();
    Table tbl_SerializeFromObject_TD_11755_input;
    tbl_SerializeFromObject_TD_11755_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11755_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11755_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11755_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11755_input.allocateHost();
    tbl_SerializeFromObject_TD_11755_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_858539_s, tv_r_Filter_10_858539_e;
    gettimeofday(&tv_r_Filter_10_858539_s, 0);
    SW_Filter_TD_10340(tbl_SerializeFromObject_TD_11755_input, tbl_Filter_TD_10340_output);
    gettimeofday(&tv_r_Filter_10_858539_e, 0);

    struct timeval tv_r_Filter_10_389177_s, tv_r_Filter_10_389177_e;
    gettimeofday(&tv_r_Filter_10_389177_s, 0);
    SW_Filter_TD_10370(tbl_SerializeFromObject_TD_11269_input, tbl_Filter_TD_10370_output);
    gettimeofday(&tv_r_Filter_10_389177_e, 0);

    struct timeval tv_r_Filter_10_146193_s, tv_r_Filter_10_146193_e;
    gettimeofday(&tv_r_Filter_10_146193_s, 0);
    SW_Filter_TD_10779(tbl_SerializeFromObject_TD_11630_input, tbl_Filter_TD_10779_output);
    gettimeofday(&tv_r_Filter_10_146193_e, 0);

    struct timeval tv_r_Filter_10_740230_s, tv_r_Filter_10_740230_e;
    gettimeofday(&tv_r_Filter_10_740230_s, 0);
    SW_Filter_TD_10629(tbl_SerializeFromObject_TD_11483_input, tbl_Filter_TD_10629_output);
    gettimeofday(&tv_r_Filter_10_740230_e, 0);

    struct timeval tv_r_JOIN_INNER_9_210962_s, tv_r_JOIN_INNER_9_210962_e;
    gettimeofday(&tv_r_JOIN_INNER_9_210962_s, 0);
    SW_JOIN_INNER_TD_9357(tbl_Filter_TD_10370_output, tbl_Filter_TD_10340_output, tbl_JOIN_INNER_TD_9357_output);
    gettimeofday(&tv_r_JOIN_INNER_9_210962_e, 0);

    struct timeval tv_r_JOIN_INNER_9_883400_s, tv_r_JOIN_INNER_9_883400_e;
    gettimeofday(&tv_r_JOIN_INNER_9_883400_s, 0);
    SW_JOIN_INNER_TD_9756(tbl_Filter_TD_10629_output, tbl_Filter_TD_10779_output, tbl_JOIN_INNER_TD_9756_output);
    gettimeofday(&tv_r_JOIN_INNER_9_883400_e, 0);

    struct timeval tv_r_Filter_8_7853_s, tv_r_Filter_8_7853_e;
    gettimeofday(&tv_r_Filter_8_7853_s, 0);
    SW_Filter_TD_8248(tbl_SerializeFromObject_TD_9324_input, tbl_Filter_TD_8248_output);
    gettimeofday(&tv_r_Filter_8_7853_e, 0);

    struct timeval tv_r_Aggregate_8_766326_s, tv_r_Aggregate_8_766326_e;
    gettimeofday(&tv_r_Aggregate_8_766326_s, 0);
    SW_Aggregate_TD_8822(tbl_JOIN_INNER_TD_9357_output, tbl_Aggregate_TD_8822_output);
    gettimeofday(&tv_r_Aggregate_8_766326_e, 0);

    struct timeval tv_r_Filter_8_198561_s, tv_r_Filter_8_198561_e;
    gettimeofday(&tv_r_Filter_8_198561_s, 0);
    SW_Filter_TD_8497(tbl_SerializeFromObject_TD_9539_input, tbl_Filter_TD_8497_output);
    gettimeofday(&tv_r_Filter_8_198561_e, 0);

    struct timeval tv_r_Aggregate_8_735122_s, tv_r_Aggregate_8_735122_e;
    gettimeofday(&tv_r_Aggregate_8_735122_s, 0);
    SW_Aggregate_TD_8474(tbl_JOIN_INNER_TD_9756_output, tbl_Aggregate_TD_8474_output);
    gettimeofday(&tv_r_Aggregate_8_735122_e, 0);

    struct timeval tv_r_Filter_7_95368_s, tv_r_Filter_7_95368_e;
    gettimeofday(&tv_r_Filter_7_95368_s, 0);
    SW_Filter_TD_7903(tbl_SerializeFromObject_TD_8848_input, tbl_Filter_TD_7903_output);
    gettimeofday(&tv_r_Filter_7_95368_e, 0);

    struct timeval tv_r_JOIN_INNER_7_229556_s, tv_r_JOIN_INNER_7_229556_e;
    gettimeofday(&tv_r_JOIN_INNER_7_229556_s, 0);
    SW_JOIN_INNER_TD_7173(tbl_Aggregate_TD_8822_output, tbl_Filter_TD_8248_output, tbl_JOIN_INNER_TD_7173_output);
    gettimeofday(&tv_r_JOIN_INNER_7_229556_e, 0);

    struct timeval tv_r_Filter_7_318053_s, tv_r_Filter_7_318053_e;
    gettimeofday(&tv_r_Filter_7_318053_s, 0);
    SW_Filter_TD_7381(tbl_SerializeFromObject_TD_8812_input, tbl_Filter_TD_7381_output);
    gettimeofday(&tv_r_Filter_7_318053_e, 0);

    struct timeval tv_r_JOIN_INNER_7_748726_s, tv_r_JOIN_INNER_7_748726_e;
    gettimeofday(&tv_r_JOIN_INNER_7_748726_s, 0);
    SW_JOIN_INNER_TD_7618(tbl_Aggregate_TD_8474_output, tbl_Filter_TD_8497_output, tbl_JOIN_INNER_TD_7618_output);
    gettimeofday(&tv_r_JOIN_INNER_7_748726_e, 0);

    struct timeval tv_r_JOIN_INNER_6_734109_s, tv_r_JOIN_INNER_6_734109_e;
    gettimeofday(&tv_r_JOIN_INNER_6_734109_s, 0);
    SW_JOIN_INNER_TD_6400(tbl_JOIN_INNER_TD_7173_output, tbl_Filter_TD_7903_output, tbl_JOIN_INNER_TD_6400_output);
    gettimeofday(&tv_r_JOIN_INNER_6_734109_e, 0);

    struct timeval tv_r_JOIN_INNER_6_603693_s, tv_r_JOIN_INNER_6_603693_e;
    gettimeofday(&tv_r_JOIN_INNER_6_603693_s, 0);
    SW_JOIN_INNER_TD_6655(tbl_JOIN_INNER_TD_7618_output, tbl_Filter_TD_7381_output, tbl_JOIN_INNER_TD_6655_output);
    gettimeofday(&tv_r_JOIN_INNER_6_603693_e, 0);

    struct timeval tv_r_Project_5_64092_s, tv_r_Project_5_64092_e;
    gettimeofday(&tv_r_Project_5_64092_s, 0);
    SW_Project_TD_5269(tbl_JOIN_INNER_TD_6400_output, tbl_Project_TD_5269_output);
    gettimeofday(&tv_r_Project_5_64092_e, 0);

    struct timeval tv_r_Project_5_417841_s, tv_r_Project_5_417841_e;
    gettimeofday(&tv_r_Project_5_417841_s, 0);
    SW_Project_TD_5392(tbl_JOIN_INNER_TD_6655_output, tbl_Project_TD_5392_output);
    gettimeofday(&tv_r_Project_5_417841_e, 0);

    struct timeval tv_r_JOIN_INNER_4_221108_s, tv_r_JOIN_INNER_4_221108_e;
    gettimeofday(&tv_r_JOIN_INNER_4_221108_s, 0);
    SW_JOIN_INNER_TD_4788(tbl_Project_TD_5392_output, tbl_Project_TD_5269_output, tbl_JOIN_INNER_TD_4788_output);
    gettimeofday(&tv_r_JOIN_INNER_4_221108_e, 0);

    struct timeval tv_r_Project_3_965273_s, tv_r_Project_3_965273_e;
    gettimeofday(&tv_r_Project_3_965273_s, 0);
    SW_Project_TD_3199(tbl_JOIN_INNER_TD_4788_output, tbl_Project_TD_3199_output);
    gettimeofday(&tv_r_Project_3_965273_e, 0);

    struct timeval tv_r_Sort_2_236078_s, tv_r_Sort_2_236078_e;
    gettimeofday(&tv_r_Sort_2_236078_s, 0);
    SW_Sort_TD_2100(tbl_Project_TD_3199_output, tbl_Sort_TD_2100_output);
    gettimeofday(&tv_r_Sort_2_236078_e, 0);

    struct timeval tv_r_LocalLimit_1_449769_s, tv_r_LocalLimit_1_449769_e;
    gettimeofday(&tv_r_LocalLimit_1_449769_s, 0);
    SW_LocalLimit_TD_1558(tbl_Sort_TD_2100_output, tbl_LocalLimit_TD_1558_output);
    gettimeofday(&tv_r_LocalLimit_1_449769_e, 0);

    struct timeval tv_r_GlobalLimit_0_656479_s, tv_r_GlobalLimit_0_656479_e;
    gettimeofday(&tv_r_GlobalLimit_0_656479_s, 0);
    SW_GlobalLimit_TD_09(tbl_LocalLimit_TD_1558_output, tbl_GlobalLimit_TD_09_output);
    gettimeofday(&tv_r_GlobalLimit_0_656479_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_858539_s, &tv_r_Filter_10_858539_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11755_input: " << tbl_SerializeFromObject_TD_11755_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_389177_s, &tv_r_Filter_10_389177_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11269_input: " << tbl_SerializeFromObject_TD_11269_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_146193_s, &tv_r_Filter_10_146193_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11630_input: " << tbl_SerializeFromObject_TD_11630_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_740230_s, &tv_r_Filter_10_740230_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11483_input: " << tbl_SerializeFromObject_TD_11483_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_210962_s, &tv_r_JOIN_INNER_9_210962_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10370_output: " << tbl_Filter_TD_10370_output.getNumRow() << " " << "tbl_Filter_TD_10340_output: " << tbl_Filter_TD_10340_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_883400_s, &tv_r_JOIN_INNER_9_883400_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10629_output: " << tbl_Filter_TD_10629_output.getNumRow() << " " << "tbl_Filter_TD_10779_output: " << tbl_Filter_TD_10779_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_7853_s, &tv_r_Filter_8_7853_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9324_input: " << tbl_SerializeFromObject_TD_9324_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_766326_s, &tv_r_Aggregate_8_766326_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9357_output: " << tbl_JOIN_INNER_TD_9357_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_198561_s, &tv_r_Filter_8_198561_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9539_input: " << tbl_SerializeFromObject_TD_9539_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_735122_s, &tv_r_Aggregate_8_735122_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9756_output: " << tbl_JOIN_INNER_TD_9756_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_95368_s, &tv_r_Filter_7_95368_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8848_input: " << tbl_SerializeFromObject_TD_8848_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_229556_s, &tv_r_JOIN_INNER_7_229556_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8822_output: " << tbl_Aggregate_TD_8822_output.getNumRow() << " " << "tbl_Filter_TD_8248_output: " << tbl_Filter_TD_8248_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_318053_s, &tv_r_Filter_7_318053_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8812_input: " << tbl_SerializeFromObject_TD_8812_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_748726_s, &tv_r_JOIN_INNER_7_748726_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8474_output: " << tbl_Aggregate_TD_8474_output.getNumRow() << " " << "tbl_Filter_TD_8497_output: " << tbl_Filter_TD_8497_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_734109_s, &tv_r_JOIN_INNER_6_734109_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7173_output: " << tbl_JOIN_INNER_TD_7173_output.getNumRow() << " " << "tbl_Filter_TD_7903_output: " << tbl_Filter_TD_7903_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_603693_s, &tv_r_JOIN_INNER_6_603693_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7618_output: " << tbl_JOIN_INNER_TD_7618_output.getNumRow() << " " << "tbl_Filter_TD_7381_output: " << tbl_Filter_TD_7381_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_64092_s, &tv_r_Project_5_64092_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6400_output: " << tbl_JOIN_INNER_TD_6400_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_417841_s, &tv_r_Project_5_417841_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6655_output: " << tbl_JOIN_INNER_TD_6655_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_221108_s, &tv_r_JOIN_INNER_4_221108_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5392_output: " << tbl_Project_TD_5392_output.getNumRow() << " " << "tbl_Project_TD_5269_output: " << tbl_Project_TD_5269_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_965273_s, &tv_r_Project_3_965273_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4788_output: " << tbl_JOIN_INNER_TD_4788_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_236078_s, &tv_r_Sort_2_236078_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3199_output: " << tbl_Project_TD_3199_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_449769_s, &tv_r_LocalLimit_1_449769_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2100_output: " << tbl_Sort_TD_2100_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_656479_s, &tv_r_GlobalLimit_0_656479_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1558_output: " << tbl_LocalLimit_TD_1558_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.1816037 * 1000 << "ms" << std::endl; 
    return 0; 
}
