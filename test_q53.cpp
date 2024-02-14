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

#include "cfgFunc_q53.hpp" 
#include "q53.hpp" 

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
    std::cout << "NOTE:running query #53\n."; 
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
    Table tbl_Sort_TD_2614_output("tbl_Sort_TD_2614_output", 6100000, 3, "");
    tbl_Sort_TD_2614_output.allocateHost();
    Table tbl_Filter_TD_3198_output("tbl_Filter_TD_3198_output", 6100000, 3, "");
    tbl_Filter_TD_3198_output.allocateHost();
    Table tbl_Window_TD_4144_output("tbl_Window_TD_4144_output", 6100000, 4, "");
    tbl_Window_TD_4144_output.allocateHost();
    Table tbl_Aggregate_TD_5580_output("tbl_Aggregate_TD_5580_output", 6100000, 3, "");
    tbl_Aggregate_TD_5580_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6824_output("tbl_JOIN_INNER_TD_6824_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6824_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7486_output("tbl_JOIN_INNER_TD_7486_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7486_output.allocateHost();
    Table tbl_Filter_TD_7479_output("tbl_Filter_TD_7479_output", 6100000, 1, "");
    tbl_Filter_TD_7479_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8719_output("tbl_JOIN_INNER_TD_8719_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8719_output.allocateHost();
    Table tbl_Filter_TD_8658_output("tbl_Filter_TD_8658_output", 6100000, 2, "");
    tbl_Filter_TD_8658_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8887_input;
    tbl_SerializeFromObject_TD_8887_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8887_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8887_input.allocateHost();
    tbl_SerializeFromObject_TD_8887_input.loadHost();
    Table tbl_Filter_TD_9457_output("tbl_Filter_TD_9457_output", 6100000, 2, "");
    tbl_Filter_TD_9457_output.allocateHost();
    Table tbl_Filter_TD_9688_output("tbl_Filter_TD_9688_output", 6100000, 4, "");
    tbl_Filter_TD_9688_output.allocateHost();
    Table tbl_SerializeFromObject_TD_952_input;
    tbl_SerializeFromObject_TD_952_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_952_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_952_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_952_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_952_input.allocateHost();
    tbl_SerializeFromObject_TD_952_input.loadHost();
    Table tbl_SerializeFromObject_TD_10249_input;
    tbl_SerializeFromObject_TD_10249_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10249_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10249_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_10249_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10249_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10249_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10249_input.allocateHost();
    tbl_SerializeFromObject_TD_10249_input.loadHost();
    Table tbl_SerializeFromObject_TD_10177_input;
    tbl_SerializeFromObject_TD_10177_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10177_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10177_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10177_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10177_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10177_input.allocateHost();
    tbl_SerializeFromObject_TD_10177_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_286964_s, tv_r_Filter_9_286964_e;
    gettimeofday(&tv_r_Filter_9_286964_s, 0);
    SW_Filter_TD_9688(tbl_SerializeFromObject_TD_10177_input, tbl_Filter_TD_9688_output);
    gettimeofday(&tv_r_Filter_9_286964_e, 0);

    struct timeval tv_r_Filter_9_82220_s, tv_r_Filter_9_82220_e;
    gettimeofday(&tv_r_Filter_9_82220_s, 0);
    SW_Filter_TD_9457(tbl_SerializeFromObject_TD_10249_input, tbl_Filter_TD_9457_output);
    gettimeofday(&tv_r_Filter_9_82220_e, 0);

    struct timeval tv_r_Filter_8_385905_s, tv_r_Filter_8_385905_e;
    gettimeofday(&tv_r_Filter_8_385905_s, 0);
    SW_Filter_TD_8658(tbl_SerializeFromObject_TD_952_input, tbl_Filter_TD_8658_output);
    gettimeofday(&tv_r_Filter_8_385905_e, 0);

    struct timeval tv_r_JOIN_INNER_8_408564_s, tv_r_JOIN_INNER_8_408564_e;
    gettimeofday(&tv_r_JOIN_INNER_8_408564_s, 0);
    SW_JOIN_INNER_TD_8719(tbl_Filter_TD_9457_output, tbl_Filter_TD_9688_output, tbl_JOIN_INNER_TD_8719_output);
    gettimeofday(&tv_r_JOIN_INNER_8_408564_e, 0);

    struct timeval tv_r_Filter_7_807297_s, tv_r_Filter_7_807297_e;
    gettimeofday(&tv_r_Filter_7_807297_s, 0);
    SW_Filter_TD_7479(tbl_SerializeFromObject_TD_8887_input, tbl_Filter_TD_7479_output);
    gettimeofday(&tv_r_Filter_7_807297_e, 0);

    struct timeval tv_r_JOIN_INNER_7_25236_s, tv_r_JOIN_INNER_7_25236_e;
    gettimeofday(&tv_r_JOIN_INNER_7_25236_s, 0);
    SW_JOIN_INNER_TD_7486(tbl_JOIN_INNER_TD_8719_output, tbl_Filter_TD_8658_output, tbl_JOIN_INNER_TD_7486_output);
    gettimeofday(&tv_r_JOIN_INNER_7_25236_e, 0);

    struct timeval tv_r_JOIN_INNER_6_85942_s, tv_r_JOIN_INNER_6_85942_e;
    gettimeofday(&tv_r_JOIN_INNER_6_85942_s, 0);
    SW_JOIN_INNER_TD_6824(tbl_JOIN_INNER_TD_7486_output, tbl_Filter_TD_7479_output, tbl_JOIN_INNER_TD_6824_output);
    gettimeofday(&tv_r_JOIN_INNER_6_85942_e, 0);

    struct timeval tv_r_Aggregate_5_616036_s, tv_r_Aggregate_5_616036_e;
    gettimeofday(&tv_r_Aggregate_5_616036_s, 0);
    SW_Aggregate_TD_5580(tbl_JOIN_INNER_TD_6824_output, tbl_Aggregate_TD_5580_output);
    gettimeofday(&tv_r_Aggregate_5_616036_e, 0);

    struct timeval tv_r_Window_4_496598_s, tv_r_Window_4_496598_e;
    gettimeofday(&tv_r_Window_4_496598_s, 0);
    SW_Window_TD_4144(tbl_Aggregate_TD_5580_output, tbl_Window_TD_4144_output);
    gettimeofday(&tv_r_Window_4_496598_e, 0);

    struct timeval tv_r_Filter_3_901957_s, tv_r_Filter_3_901957_e;
    gettimeofday(&tv_r_Filter_3_901957_s, 0);
    SW_Filter_TD_3198(tbl_Window_TD_4144_output, tbl_Filter_TD_3198_output);
    gettimeofday(&tv_r_Filter_3_901957_e, 0);

    struct timeval tv_r_Sort_2_354741_s, tv_r_Sort_2_354741_e;
    gettimeofday(&tv_r_Sort_2_354741_s, 0);
    SW_Sort_TD_2614(tbl_Filter_TD_3198_output, tbl_Sort_TD_2614_output);
    gettimeofday(&tv_r_Sort_2_354741_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_286964_s, &tv_r_Filter_9_286964_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10177_input: " << tbl_SerializeFromObject_TD_10177_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_82220_s, &tv_r_Filter_9_82220_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10249_input: " << tbl_SerializeFromObject_TD_10249_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_385905_s, &tv_r_Filter_8_385905_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_952_input: " << tbl_SerializeFromObject_TD_952_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_408564_s, &tv_r_JOIN_INNER_8_408564_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9457_output: " << tbl_Filter_TD_9457_output.getNumRow() << " " << "tbl_Filter_TD_9688_output: " << tbl_Filter_TD_9688_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_807297_s, &tv_r_Filter_7_807297_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8887_input: " << tbl_SerializeFromObject_TD_8887_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_25236_s, &tv_r_JOIN_INNER_7_25236_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8719_output: " << tbl_JOIN_INNER_TD_8719_output.getNumRow() << " " << "tbl_Filter_TD_8658_output: " << tbl_Filter_TD_8658_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_85942_s, &tv_r_JOIN_INNER_6_85942_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7486_output: " << tbl_JOIN_INNER_TD_7486_output.getNumRow() << " " << "tbl_Filter_TD_7479_output: " << tbl_Filter_TD_7479_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_616036_s, &tv_r_Aggregate_5_616036_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6824_output: " << tbl_JOIN_INNER_TD_6824_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_496598_s, &tv_r_Window_4_496598_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5580_output: " << tbl_Aggregate_TD_5580_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_901957_s, &tv_r_Filter_3_901957_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4144_output: " << tbl_Window_TD_4144_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_354741_s, &tv_r_Sort_2_354741_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3198_output: " << tbl_Filter_TD_3198_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.90274554 * 1000 << "ms" << std::endl; 
    return 0; 
}
