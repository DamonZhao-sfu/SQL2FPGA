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

#include "cfgFunc_q97.hpp" 
#include "q97.hpp" 

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
    std::cout << "NOTE:running query #97\n."; 
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
    Table tbl_Aggregate_TD_0238_output("tbl_Aggregate_TD_0238_output", 6100000, 3, "");
    tbl_Aggregate_TD_0238_output.allocateHost();
    Table tbl_JOIN_FULLOUTER_TD_139_output("tbl_JOIN_FULLOUTER_TD_139_output", 6100000, 2, "");
    tbl_JOIN_FULLOUTER_TD_139_output.allocateHost();
    Table tbl_Aggregate_TD_2883_output("tbl_Aggregate_TD_2883_output", 6100000, 2, "");
    tbl_Aggregate_TD_2883_output.allocateHost();
    Table tbl_Aggregate_TD_2250_output("tbl_Aggregate_TD_2250_output", 6100000, 2, "");
    tbl_Aggregate_TD_2250_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3657_output("tbl_JOIN_INNER_TD_3657_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3657_output.allocateHost();
    Table tbl_JOIN_INNER_TD_339_output("tbl_JOIN_INNER_TD_339_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_339_output.allocateHost();
    Table tbl_Filter_TD_473_output("tbl_Filter_TD_473_output", 6100000, 3, "");
    tbl_Filter_TD_473_output.allocateHost();
    Table tbl_Filter_TD_4554_output("tbl_Filter_TD_4554_output", 6100000, 1, "");
    tbl_Filter_TD_4554_output.allocateHost();
    Table tbl_Filter_TD_499_output("tbl_Filter_TD_499_output", 6100000, 3, "");
    tbl_Filter_TD_499_output.allocateHost();
    Table tbl_Filter_TD_4221_output("tbl_Filter_TD_4221_output", 6100000, 1, "");
    tbl_Filter_TD_4221_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5880_input;
    tbl_SerializeFromObject_TD_5880_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5880_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5880_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_5880_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_5880_input.allocateHost();
    tbl_SerializeFromObject_TD_5880_input.loadHost();
    Table tbl_SerializeFromObject_TD_5759_input;
    tbl_SerializeFromObject_TD_5759_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5759_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5759_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_5759_input.allocateHost();
    tbl_SerializeFromObject_TD_5759_input.loadHost();
    Table tbl_SerializeFromObject_TD_5269_input;
    tbl_SerializeFromObject_TD_5269_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5269_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5269_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_5269_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_5269_input.allocateHost();
    tbl_SerializeFromObject_TD_5269_input.loadHost();
    Table tbl_SerializeFromObject_TD_5972_input;
    tbl_SerializeFromObject_TD_5972_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5972_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5972_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_5972_input.allocateHost();
    tbl_SerializeFromObject_TD_5972_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_321811_s, tv_r_Filter_4_321811_e;
    gettimeofday(&tv_r_Filter_4_321811_s, 0);
    SW_Filter_TD_4221(tbl_SerializeFromObject_TD_5972_input, tbl_Filter_TD_4221_output);
    gettimeofday(&tv_r_Filter_4_321811_e, 0);

    struct timeval tv_r_Filter_4_102879_s, tv_r_Filter_4_102879_e;
    gettimeofday(&tv_r_Filter_4_102879_s, 0);
    SW_Filter_TD_499(tbl_SerializeFromObject_TD_5269_input, tbl_Filter_TD_499_output);
    gettimeofday(&tv_r_Filter_4_102879_e, 0);

    struct timeval tv_r_Filter_4_443149_s, tv_r_Filter_4_443149_e;
    gettimeofday(&tv_r_Filter_4_443149_s, 0);
    SW_Filter_TD_4554(tbl_SerializeFromObject_TD_5759_input, tbl_Filter_TD_4554_output);
    gettimeofday(&tv_r_Filter_4_443149_e, 0);

    struct timeval tv_r_Filter_4_11138_s, tv_r_Filter_4_11138_e;
    gettimeofday(&tv_r_Filter_4_11138_s, 0);
    SW_Filter_TD_473(tbl_SerializeFromObject_TD_5880_input, tbl_Filter_TD_473_output);
    gettimeofday(&tv_r_Filter_4_11138_e, 0);

    struct timeval tv_r_JOIN_INNER_3_26725_s, tv_r_JOIN_INNER_3_26725_e;
    gettimeofday(&tv_r_JOIN_INNER_3_26725_s, 0);
    SW_JOIN_INNER_TD_339(tbl_Filter_TD_499_output, tbl_Filter_TD_4221_output, tbl_JOIN_INNER_TD_339_output);
    gettimeofday(&tv_r_JOIN_INNER_3_26725_e, 0);

    struct timeval tv_r_JOIN_INNER_3_631873_s, tv_r_JOIN_INNER_3_631873_e;
    gettimeofday(&tv_r_JOIN_INNER_3_631873_s, 0);
    SW_JOIN_INNER_TD_3657(tbl_Filter_TD_473_output, tbl_Filter_TD_4554_output, tbl_JOIN_INNER_TD_3657_output);
    gettimeofday(&tv_r_JOIN_INNER_3_631873_e, 0);

    struct timeval tv_r_Aggregate_2_145242_s, tv_r_Aggregate_2_145242_e;
    gettimeofday(&tv_r_Aggregate_2_145242_s, 0);
    SW_Aggregate_TD_2250(tbl_JOIN_INNER_TD_339_output, tbl_Aggregate_TD_2250_output);
    gettimeofday(&tv_r_Aggregate_2_145242_e, 0);

    struct timeval tv_r_Aggregate_2_67281_s, tv_r_Aggregate_2_67281_e;
    gettimeofday(&tv_r_Aggregate_2_67281_s, 0);
    SW_Aggregate_TD_2883(tbl_JOIN_INNER_TD_3657_output, tbl_Aggregate_TD_2883_output);
    gettimeofday(&tv_r_Aggregate_2_67281_e, 0);

    struct timeval tv_r_JOIN_FULLOUTER_1_893027_s, tv_r_JOIN_FULLOUTER_1_893027_e;
    gettimeofday(&tv_r_JOIN_FULLOUTER_1_893027_s, 0);
    SW_JOIN_FULLOUTER_TD_139(tbl_Aggregate_TD_2883_output, tbl_Aggregate_TD_2250_output, tbl_JOIN_FULLOUTER_TD_139_output);
    gettimeofday(&tv_r_JOIN_FULLOUTER_1_893027_e, 0);

    struct timeval tv_r_Aggregate_0_455448_s, tv_r_Aggregate_0_455448_e;
    gettimeofday(&tv_r_Aggregate_0_455448_s, 0);
    SW_Aggregate_TD_0238(tbl_JOIN_FULLOUTER_TD_139_output, tbl_Aggregate_TD_0238_output);
    gettimeofday(&tv_r_Aggregate_0_455448_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_321811_s, &tv_r_Filter_4_321811_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5972_input: " << tbl_SerializeFromObject_TD_5972_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_102879_s, &tv_r_Filter_4_102879_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5269_input: " << tbl_SerializeFromObject_TD_5269_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_443149_s, &tv_r_Filter_4_443149_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5759_input: " << tbl_SerializeFromObject_TD_5759_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_11138_s, &tv_r_Filter_4_11138_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5880_input: " << tbl_SerializeFromObject_TD_5880_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_26725_s, &tv_r_JOIN_INNER_3_26725_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_499_output: " << tbl_Filter_TD_499_output.getNumRow() << " " << "tbl_Filter_TD_4221_output: " << tbl_Filter_TD_4221_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_631873_s, &tv_r_JOIN_INNER_3_631873_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_473_output: " << tbl_Filter_TD_473_output.getNumRow() << " " << "tbl_Filter_TD_4554_output: " << tbl_Filter_TD_4554_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_145242_s, &tv_r_Aggregate_2_145242_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_339_output: " << tbl_JOIN_INNER_TD_339_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_67281_s, &tv_r_Aggregate_2_67281_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3657_output: " << tbl_JOIN_INNER_TD_3657_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_FULLOUTER_1: " << tvdiff(&tv_r_JOIN_FULLOUTER_1_893027_s, &tv_r_JOIN_FULLOUTER_1_893027_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2883_output: " << tbl_Aggregate_TD_2883_output.getNumRow() << " " << "tbl_Aggregate_TD_2250_output: " << tbl_Aggregate_TD_2250_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_455448_s, &tv_r_Aggregate_0_455448_e) / 1000.0 << " ms " 
     << "tbl_JOIN_FULLOUTER_TD_139_output: " << tbl_JOIN_FULLOUTER_TD_139_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.553562 * 1000 << "ms" << std::endl; 
    return 0; 
}
