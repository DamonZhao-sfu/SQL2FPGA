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
    Table tbl_GlobalLimit_TD_0226_output("tbl_GlobalLimit_TD_0226_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0226_output.allocateHost();
    Table tbl_LocalLimit_TD_1125_output("tbl_LocalLimit_TD_1125_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1125_output.allocateHost();
    Table tbl_Sort_TD_2887_output("tbl_Sort_TD_2887_output", 6100000, 5, "");
    tbl_Sort_TD_2887_output.allocateHost();
    Table tbl_Aggregate_TD_3861_output("tbl_Aggregate_TD_3861_output", 6100000, 5, "");
    tbl_Aggregate_TD_3861_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4794_output("tbl_JOIN_INNER_TD_4794_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4794_output.allocateHost();
    Table tbl_JOIN_INNER_TD_574_output("tbl_JOIN_INNER_TD_574_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_574_output.allocateHost();
    Table tbl_Filter_TD_521_output("tbl_Filter_TD_521_output", 6100000, 1, "");
    tbl_Filter_TD_521_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6918_output("tbl_JOIN_INNER_TD_6918_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6918_output.allocateHost();
    Table tbl_Filter_TD_6716_output("tbl_Filter_TD_6716_output", 6100000, 2, "");
    tbl_Filter_TD_6716_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6829_input;
    tbl_SerializeFromObject_TD_6829_input = Table("promotion", promotion_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6829_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_6829_input.addCol("p_channel_email", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6829_input.addCol("p_channel_event", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6829_input.allocateHost();
    tbl_SerializeFromObject_TD_6829_input.loadHost();
    Table tbl_JOIN_INNER_TD_7977_output("tbl_JOIN_INNER_TD_7977_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7977_output.allocateHost();
    Table tbl_Filter_TD_7995_output("tbl_Filter_TD_7995_output", 6100000, 1, "");
    tbl_Filter_TD_7995_output.allocateHost();
    Table tbl_SerializeFromObject_TD_726_input;
    tbl_SerializeFromObject_TD_726_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_726_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_726_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_726_input.allocateHost();
    tbl_SerializeFromObject_TD_726_input.loadHost();
    Table tbl_Filter_TD_8620_output("tbl_Filter_TD_8620_output", 6100000, 8, "");
    tbl_Filter_TD_8620_output.allocateHost();
    Table tbl_Filter_TD_8837_output("tbl_Filter_TD_8837_output", 6100000, 1, "");
    tbl_Filter_TD_8837_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8530_input;
    tbl_SerializeFromObject_TD_8530_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8530_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8530_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8530_input.allocateHost();
    tbl_SerializeFromObject_TD_8530_input.loadHost();
    Table tbl_SerializeFromObject_TD_916_input;
    tbl_SerializeFromObject_TD_916_input = Table("store_sales", store_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_916_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_916_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_916_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_916_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_916_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_916_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_916_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_916_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_916_input.allocateHost();
    tbl_SerializeFromObject_TD_916_input.loadHost();
    Table tbl_SerializeFromObject_TD_9921_input;
    tbl_SerializeFromObject_TD_9921_input = Table("customer_demographics", customer_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9921_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9921_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9921_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9921_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9921_input.allocateHost();
    tbl_SerializeFromObject_TD_9921_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_484241_s, tv_r_Filter_8_484241_e;
    gettimeofday(&tv_r_Filter_8_484241_s, 0);
    SW_Filter_TD_8837(tbl_SerializeFromObject_TD_9921_input, tbl_Filter_TD_8837_output);
    gettimeofday(&tv_r_Filter_8_484241_e, 0);

    struct timeval tv_r_Filter_8_881181_s, tv_r_Filter_8_881181_e;
    gettimeofday(&tv_r_Filter_8_881181_s, 0);
    SW_Filter_TD_8620(tbl_SerializeFromObject_TD_916_input, tbl_Filter_TD_8620_output);
    gettimeofday(&tv_r_Filter_8_881181_e, 0);

    struct timeval tv_r_Filter_7_277536_s, tv_r_Filter_7_277536_e;
    gettimeofday(&tv_r_Filter_7_277536_s, 0);
    SW_Filter_TD_7995(tbl_SerializeFromObject_TD_8530_input, tbl_Filter_TD_7995_output);
    gettimeofday(&tv_r_Filter_7_277536_e, 0);

    struct timeval tv_r_JOIN_INNER_7_901782_s, tv_r_JOIN_INNER_7_901782_e;
    gettimeofday(&tv_r_JOIN_INNER_7_901782_s, 0);
    SW_JOIN_INNER_TD_7977(tbl_Filter_TD_8620_output, tbl_Filter_TD_8837_output, tbl_JOIN_INNER_TD_7977_output);
    gettimeofday(&tv_r_JOIN_INNER_7_901782_e, 0);

    struct timeval tv_r_Filter_6_534258_s, tv_r_Filter_6_534258_e;
    gettimeofday(&tv_r_Filter_6_534258_s, 0);
    SW_Filter_TD_6716(tbl_SerializeFromObject_TD_726_input, tbl_Filter_TD_6716_output);
    gettimeofday(&tv_r_Filter_6_534258_e, 0);

    struct timeval tv_r_JOIN_INNER_6_479832_s, tv_r_JOIN_INNER_6_479832_e;
    gettimeofday(&tv_r_JOIN_INNER_6_479832_s, 0);
    SW_JOIN_INNER_TD_6918(tbl_JOIN_INNER_TD_7977_output, tbl_Filter_TD_7995_output, tbl_JOIN_INNER_TD_6918_output);
    gettimeofday(&tv_r_JOIN_INNER_6_479832_e, 0);

    struct timeval tv_r_Filter_5_723638_s, tv_r_Filter_5_723638_e;
    gettimeofday(&tv_r_Filter_5_723638_s, 0);
    SW_Filter_TD_521(tbl_SerializeFromObject_TD_6829_input, tbl_Filter_TD_521_output);
    gettimeofday(&tv_r_Filter_5_723638_e, 0);

    struct timeval tv_r_JOIN_INNER_5_942562_s, tv_r_JOIN_INNER_5_942562_e;
    gettimeofday(&tv_r_JOIN_INNER_5_942562_s, 0);
    SW_JOIN_INNER_TD_574(tbl_JOIN_INNER_TD_6918_output, tbl_Filter_TD_6716_output, tbl_JOIN_INNER_TD_574_output);
    gettimeofday(&tv_r_JOIN_INNER_5_942562_e, 0);

    struct timeval tv_r_JOIN_INNER_4_207143_s, tv_r_JOIN_INNER_4_207143_e;
    gettimeofday(&tv_r_JOIN_INNER_4_207143_s, 0);
    SW_JOIN_INNER_TD_4794(tbl_JOIN_INNER_TD_574_output, tbl_Filter_TD_521_output, tbl_JOIN_INNER_TD_4794_output);
    gettimeofday(&tv_r_JOIN_INNER_4_207143_e, 0);

    struct timeval tv_r_Aggregate_3_840570_s, tv_r_Aggregate_3_840570_e;
    gettimeofday(&tv_r_Aggregate_3_840570_s, 0);
    SW_Aggregate_TD_3861(tbl_JOIN_INNER_TD_4794_output, tbl_Aggregate_TD_3861_output);
    gettimeofday(&tv_r_Aggregate_3_840570_e, 0);

    struct timeval tv_r_Sort_2_774402_s, tv_r_Sort_2_774402_e;
    gettimeofday(&tv_r_Sort_2_774402_s, 0);
    SW_Sort_TD_2887(tbl_Aggregate_TD_3861_output, tbl_Sort_TD_2887_output);
    gettimeofday(&tv_r_Sort_2_774402_e, 0);

    struct timeval tv_r_LocalLimit_1_650193_s, tv_r_LocalLimit_1_650193_e;
    gettimeofday(&tv_r_LocalLimit_1_650193_s, 0);
    SW_LocalLimit_TD_1125(tbl_Sort_TD_2887_output, tbl_LocalLimit_TD_1125_output);
    gettimeofday(&tv_r_LocalLimit_1_650193_e, 0);

    struct timeval tv_r_GlobalLimit_0_233863_s, tv_r_GlobalLimit_0_233863_e;
    gettimeofday(&tv_r_GlobalLimit_0_233863_s, 0);
    SW_GlobalLimit_TD_0226(tbl_LocalLimit_TD_1125_output, tbl_GlobalLimit_TD_0226_output);
    gettimeofday(&tv_r_GlobalLimit_0_233863_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_484241_s, &tv_r_Filter_8_484241_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9921_input: " << tbl_SerializeFromObject_TD_9921_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_881181_s, &tv_r_Filter_8_881181_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_916_input: " << tbl_SerializeFromObject_TD_916_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_277536_s, &tv_r_Filter_7_277536_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8530_input: " << tbl_SerializeFromObject_TD_8530_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_901782_s, &tv_r_JOIN_INNER_7_901782_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8620_output: " << tbl_Filter_TD_8620_output.getNumRow() << " " << "tbl_Filter_TD_8837_output: " << tbl_Filter_TD_8837_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_534258_s, &tv_r_Filter_6_534258_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_726_input: " << tbl_SerializeFromObject_TD_726_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_479832_s, &tv_r_JOIN_INNER_6_479832_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7977_output: " << tbl_JOIN_INNER_TD_7977_output.getNumRow() << " " << "tbl_Filter_TD_7995_output: " << tbl_Filter_TD_7995_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_723638_s, &tv_r_Filter_5_723638_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6829_input: " << tbl_SerializeFromObject_TD_6829_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_942562_s, &tv_r_JOIN_INNER_5_942562_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6918_output: " << tbl_JOIN_INNER_TD_6918_output.getNumRow() << " " << "tbl_Filter_TD_6716_output: " << tbl_Filter_TD_6716_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_207143_s, &tv_r_JOIN_INNER_4_207143_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_574_output: " << tbl_JOIN_INNER_TD_574_output.getNumRow() << " " << "tbl_Filter_TD_521_output: " << tbl_Filter_TD_521_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_840570_s, &tv_r_Aggregate_3_840570_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4794_output: " << tbl_JOIN_INNER_TD_4794_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_774402_s, &tv_r_Sort_2_774402_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3861_output: " << tbl_Aggregate_TD_3861_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_650193_s, &tv_r_LocalLimit_1_650193_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2887_output: " << tbl_Sort_TD_2887_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_233863_s, &tv_r_GlobalLimit_0_233863_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1125_output: " << tbl_LocalLimit_TD_1125_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.6532176 * 1000 << "ms" << std::endl; 
    return 0; 
}
