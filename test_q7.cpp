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

#include "cfgFunc_q7.hpp" 
#include "q7.hpp" 

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
    std::cout << "NOTE:running query #7\n."; 
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
    Table tbl_GlobalLimit_TD_0555_output("tbl_GlobalLimit_TD_0555_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0555_output.allocateHost();
    Table tbl_LocalLimit_TD_1957_output("tbl_LocalLimit_TD_1957_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1957_output.allocateHost();
    Table tbl_Sort_TD_2617_output("tbl_Sort_TD_2617_output", 6100000, 5, "");
    tbl_Sort_TD_2617_output.allocateHost();
    Table tbl_Aggregate_TD_3613_output("tbl_Aggregate_TD_3613_output", 6100000, 5, "");
    tbl_Aggregate_TD_3613_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4616_output("tbl_JOIN_INNER_TD_4616_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4616_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5447_output("tbl_JOIN_INNER_TD_5447_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5447_output.allocateHost();
    Table tbl_Filter_TD_5805_output("tbl_Filter_TD_5805_output", 6100000, 1, "");
    tbl_Filter_TD_5805_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6626_output("tbl_JOIN_INNER_TD_6626_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6626_output.allocateHost();
    Table tbl_Filter_TD_6109_output("tbl_Filter_TD_6109_output", 6100000, 2, "");
    tbl_Filter_TD_6109_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6405_input;
    tbl_SerializeFromObject_TD_6405_input = Table("promotion", promotion_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6405_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_6405_input.addCol("p_channel_email", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6405_input.addCol("p_channel_event", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6405_input.allocateHost();
    tbl_SerializeFromObject_TD_6405_input.loadHost();
    Table tbl_JOIN_INNER_TD_7285_output("tbl_JOIN_INNER_TD_7285_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7285_output.allocateHost();
    Table tbl_Filter_TD_7255_output("tbl_Filter_TD_7255_output", 6100000, 1, "");
    tbl_Filter_TD_7255_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7553_input;
    tbl_SerializeFromObject_TD_7553_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7553_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7553_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7553_input.allocateHost();
    tbl_SerializeFromObject_TD_7553_input.loadHost();
    Table tbl_Filter_TD_8956_output("tbl_Filter_TD_8956_output", 6100000, 8, "");
    tbl_Filter_TD_8956_output.allocateHost();
    Table tbl_Filter_TD_8142_output("tbl_Filter_TD_8142_output", 6100000, 1, "");
    tbl_Filter_TD_8142_output.allocateHost();
    Table tbl_SerializeFromObject_TD_898_input;
    tbl_SerializeFromObject_TD_898_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_898_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_898_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_898_input.allocateHost();
    tbl_SerializeFromObject_TD_898_input.loadHost();
    Table tbl_SerializeFromObject_TD_928_input;
    tbl_SerializeFromObject_TD_928_input = Table("store_sales", store_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_928_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_928_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_928_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_928_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_928_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_928_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_928_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_928_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_928_input.allocateHost();
    tbl_SerializeFromObject_TD_928_input.loadHost();
    Table tbl_SerializeFromObject_TD_9740_input;
    tbl_SerializeFromObject_TD_9740_input = Table("customer_demographics", customer_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9740_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9740_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9740_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9740_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9740_input.allocateHost();
    tbl_SerializeFromObject_TD_9740_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_931961_s, tv_r_Filter_8_931961_e;
    gettimeofday(&tv_r_Filter_8_931961_s, 0);
    SW_Filter_TD_8142(tbl_SerializeFromObject_TD_9740_input, tbl_Filter_TD_8142_output);
    gettimeofday(&tv_r_Filter_8_931961_e, 0);

    struct timeval tv_r_Filter_8_931915_s, tv_r_Filter_8_931915_e;
    gettimeofday(&tv_r_Filter_8_931915_s, 0);
    SW_Filter_TD_8956(tbl_SerializeFromObject_TD_928_input, tbl_Filter_TD_8956_output);
    gettimeofday(&tv_r_Filter_8_931915_e, 0);

    struct timeval tv_r_Filter_7_159404_s, tv_r_Filter_7_159404_e;
    gettimeofday(&tv_r_Filter_7_159404_s, 0);
    SW_Filter_TD_7255(tbl_SerializeFromObject_TD_898_input, tbl_Filter_TD_7255_output);
    gettimeofday(&tv_r_Filter_7_159404_e, 0);

    struct timeval tv_r_JOIN_INNER_7_961500_s, tv_r_JOIN_INNER_7_961500_e;
    gettimeofday(&tv_r_JOIN_INNER_7_961500_s, 0);
    SW_JOIN_INNER_TD_7285(tbl_Filter_TD_8956_output, tbl_Filter_TD_8142_output, tbl_JOIN_INNER_TD_7285_output);
    gettimeofday(&tv_r_JOIN_INNER_7_961500_e, 0);

    struct timeval tv_r_Filter_6_993556_s, tv_r_Filter_6_993556_e;
    gettimeofday(&tv_r_Filter_6_993556_s, 0);
    SW_Filter_TD_6109(tbl_SerializeFromObject_TD_7553_input, tbl_Filter_TD_6109_output);
    gettimeofday(&tv_r_Filter_6_993556_e, 0);

    struct timeval tv_r_JOIN_INNER_6_432509_s, tv_r_JOIN_INNER_6_432509_e;
    gettimeofday(&tv_r_JOIN_INNER_6_432509_s, 0);
    SW_JOIN_INNER_TD_6626(tbl_JOIN_INNER_TD_7285_output, tbl_Filter_TD_7255_output, tbl_JOIN_INNER_TD_6626_output);
    gettimeofday(&tv_r_JOIN_INNER_6_432509_e, 0);

    struct timeval tv_r_Filter_5_223256_s, tv_r_Filter_5_223256_e;
    gettimeofday(&tv_r_Filter_5_223256_s, 0);
    SW_Filter_TD_5805(tbl_SerializeFromObject_TD_6405_input, tbl_Filter_TD_5805_output);
    gettimeofday(&tv_r_Filter_5_223256_e, 0);

    struct timeval tv_r_JOIN_INNER_5_445020_s, tv_r_JOIN_INNER_5_445020_e;
    gettimeofday(&tv_r_JOIN_INNER_5_445020_s, 0);
    SW_JOIN_INNER_TD_5447(tbl_JOIN_INNER_TD_6626_output, tbl_Filter_TD_6109_output, tbl_JOIN_INNER_TD_5447_output);
    gettimeofday(&tv_r_JOIN_INNER_5_445020_e, 0);

    struct timeval tv_r_JOIN_INNER_4_968075_s, tv_r_JOIN_INNER_4_968075_e;
    gettimeofday(&tv_r_JOIN_INNER_4_968075_s, 0);
    SW_JOIN_INNER_TD_4616(tbl_JOIN_INNER_TD_5447_output, tbl_Filter_TD_5805_output, tbl_JOIN_INNER_TD_4616_output);
    gettimeofday(&tv_r_JOIN_INNER_4_968075_e, 0);

    struct timeval tv_r_Aggregate_3_27781_s, tv_r_Aggregate_3_27781_e;
    gettimeofday(&tv_r_Aggregate_3_27781_s, 0);
    SW_Aggregate_TD_3613(tbl_JOIN_INNER_TD_4616_output, tbl_Aggregate_TD_3613_output);
    gettimeofday(&tv_r_Aggregate_3_27781_e, 0);

    struct timeval tv_r_Sort_2_44185_s, tv_r_Sort_2_44185_e;
    gettimeofday(&tv_r_Sort_2_44185_s, 0);
    SW_Sort_TD_2617(tbl_Aggregate_TD_3613_output, tbl_Sort_TD_2617_output);
    gettimeofday(&tv_r_Sort_2_44185_e, 0);

    struct timeval tv_r_LocalLimit_1_431909_s, tv_r_LocalLimit_1_431909_e;
    gettimeofday(&tv_r_LocalLimit_1_431909_s, 0);
    SW_LocalLimit_TD_1957(tbl_Sort_TD_2617_output, tbl_LocalLimit_TD_1957_output);
    gettimeofday(&tv_r_LocalLimit_1_431909_e, 0);

    struct timeval tv_r_GlobalLimit_0_396364_s, tv_r_GlobalLimit_0_396364_e;
    gettimeofday(&tv_r_GlobalLimit_0_396364_s, 0);
    SW_GlobalLimit_TD_0555(tbl_LocalLimit_TD_1957_output, tbl_GlobalLimit_TD_0555_output);
    gettimeofday(&tv_r_GlobalLimit_0_396364_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_931961_s, &tv_r_Filter_8_931961_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9740_input: " << tbl_SerializeFromObject_TD_9740_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_931915_s, &tv_r_Filter_8_931915_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_928_input: " << tbl_SerializeFromObject_TD_928_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_159404_s, &tv_r_Filter_7_159404_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_898_input: " << tbl_SerializeFromObject_TD_898_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_961500_s, &tv_r_JOIN_INNER_7_961500_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8956_output: " << tbl_Filter_TD_8956_output.getNumRow() << " " << "tbl_Filter_TD_8142_output: " << tbl_Filter_TD_8142_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_993556_s, &tv_r_Filter_6_993556_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7553_input: " << tbl_SerializeFromObject_TD_7553_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_432509_s, &tv_r_JOIN_INNER_6_432509_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7285_output: " << tbl_JOIN_INNER_TD_7285_output.getNumRow() << " " << "tbl_Filter_TD_7255_output: " << tbl_Filter_TD_7255_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_223256_s, &tv_r_Filter_5_223256_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6405_input: " << tbl_SerializeFromObject_TD_6405_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_445020_s, &tv_r_JOIN_INNER_5_445020_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6626_output: " << tbl_JOIN_INNER_TD_6626_output.getNumRow() << " " << "tbl_Filter_TD_6109_output: " << tbl_Filter_TD_6109_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_968075_s, &tv_r_JOIN_INNER_4_968075_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5447_output: " << tbl_JOIN_INNER_TD_5447_output.getNumRow() << " " << "tbl_Filter_TD_5805_output: " << tbl_Filter_TD_5805_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_27781_s, &tv_r_Aggregate_3_27781_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4616_output: " << tbl_JOIN_INNER_TD_4616_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_44185_s, &tv_r_Sort_2_44185_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3613_output: " << tbl_Aggregate_TD_3613_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_431909_s, &tv_r_LocalLimit_1_431909_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2617_output: " << tbl_Sort_TD_2617_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_396364_s, &tv_r_GlobalLimit_0_396364_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1957_output: " << tbl_LocalLimit_TD_1957_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.4091531 * 1000 << "ms" << std::endl; 
    return 0; 
}
