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

#include "cfgFunc_q28.hpp" 
#include "q28.hpp" 

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
    std::cout << "NOTE:running query #28\n."; 
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
    Table tbl_JOIN_CROSS_TD_0670_output("tbl_JOIN_CROSS_TD_0670_output", 6100000, 18, "");
    tbl_JOIN_CROSS_TD_0670_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_1662_output("tbl_JOIN_CROSS_TD_1662_output", 6100000, 15, "");
    tbl_JOIN_CROSS_TD_1662_output.allocateHost();
    Table tbl_Aggregate_TD_1174_output("tbl_Aggregate_TD_1174_output", 6100000, 3, "");
    tbl_Aggregate_TD_1174_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_2106_output("tbl_JOIN_CROSS_TD_2106_output", 6100000, 12, "");
    tbl_JOIN_CROSS_TD_2106_output.allocateHost();
    Table tbl_Aggregate_TD_2936_output("tbl_Aggregate_TD_2936_output", 6100000, 3, "");
    tbl_Aggregate_TD_2936_output.allocateHost();
    Table tbl_Filter_TD_2521_output("tbl_Filter_TD_2521_output", 6100000, 1, "");
    tbl_Filter_TD_2521_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_3684_output("tbl_JOIN_CROSS_TD_3684_output", 6100000, 9, "");
    tbl_JOIN_CROSS_TD_3684_output.allocateHost();
    Table tbl_Aggregate_TD_3147_output("tbl_Aggregate_TD_3147_output", 6100000, 3, "");
    tbl_Aggregate_TD_3147_output.allocateHost();
    Table tbl_Filter_TD_3954_output("tbl_Filter_TD_3954_output", 6100000, 1, "");
    tbl_Filter_TD_3954_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3844_input;
    tbl_SerializeFromObject_TD_3844_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_3844_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3844_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3844_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3844_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3844_input.allocateHost();
    tbl_SerializeFromObject_TD_3844_input.loadHost();
    Table tbl_JOIN_CROSS_TD_4432_output("tbl_JOIN_CROSS_TD_4432_output", 6100000, 6, "");
    tbl_JOIN_CROSS_TD_4432_output.allocateHost();
    Table tbl_Aggregate_TD_4522_output("tbl_Aggregate_TD_4522_output", 6100000, 3, "");
    tbl_Aggregate_TD_4522_output.allocateHost();
    Table tbl_Filter_TD_483_output("tbl_Filter_TD_483_output", 6100000, 1, "");
    tbl_Filter_TD_483_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4793_input;
    tbl_SerializeFromObject_TD_4793_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_4793_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_4793_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_4793_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_4793_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_4793_input.allocateHost();
    tbl_SerializeFromObject_TD_4793_input.loadHost();
    Table tbl_Aggregate_TD_5796_output("tbl_Aggregate_TD_5796_output", 6100000, 3, "");
    tbl_Aggregate_TD_5796_output.allocateHost();
    Table tbl_Aggregate_TD_5123_output("tbl_Aggregate_TD_5123_output", 6100000, 3, "");
    tbl_Aggregate_TD_5123_output.allocateHost();
    Table tbl_Filter_TD_5636_output("tbl_Filter_TD_5636_output", 6100000, 1, "");
    tbl_Filter_TD_5636_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5367_input;
    tbl_SerializeFromObject_TD_5367_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_5367_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_5367_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_5367_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_5367_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_5367_input.allocateHost();
    tbl_SerializeFromObject_TD_5367_input.loadHost();
    Table tbl_Filter_TD_6161_output("tbl_Filter_TD_6161_output", 6100000, 1, "");
    tbl_Filter_TD_6161_output.allocateHost();
    Table tbl_Filter_TD_6253_output("tbl_Filter_TD_6253_output", 6100000, 1, "");
    tbl_Filter_TD_6253_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6168_input;
    tbl_SerializeFromObject_TD_6168_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6168_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_6168_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_6168_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_6168_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_6168_input.allocateHost();
    tbl_SerializeFromObject_TD_6168_input.loadHost();
    Table tbl_SerializeFromObject_TD_7939_input;
    tbl_SerializeFromObject_TD_7939_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_7939_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_7939_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_7939_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_7939_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_7939_input.allocateHost();
    tbl_SerializeFromObject_TD_7939_input.loadHost();
    Table tbl_SerializeFromObject_TD_7887_input;
    tbl_SerializeFromObject_TD_7887_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_7887_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_7887_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_7887_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_7887_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_7887_input.allocateHost();
    tbl_SerializeFromObject_TD_7887_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_767413_s, tv_r_Filter_6_767413_e;
    gettimeofday(&tv_r_Filter_6_767413_s, 0);
    SW_Filter_TD_6253(tbl_SerializeFromObject_TD_7887_input, tbl_Filter_TD_6253_output);
    gettimeofday(&tv_r_Filter_6_767413_e, 0);

    struct timeval tv_r_Filter_6_907263_s, tv_r_Filter_6_907263_e;
    gettimeofday(&tv_r_Filter_6_907263_s, 0);
    SW_Filter_TD_6161(tbl_SerializeFromObject_TD_7939_input, tbl_Filter_TD_6161_output);
    gettimeofday(&tv_r_Filter_6_907263_e, 0);

    struct timeval tv_r_Filter_5_277101_s, tv_r_Filter_5_277101_e;
    gettimeofday(&tv_r_Filter_5_277101_s, 0);
    SW_Filter_TD_5636(tbl_SerializeFromObject_TD_6168_input, tbl_Filter_TD_5636_output);
    gettimeofday(&tv_r_Filter_5_277101_e, 0);

    struct timeval tv_r_Aggregate_5_791145_s, tv_r_Aggregate_5_791145_e;
    gettimeofday(&tv_r_Aggregate_5_791145_s, 0);
    SW_Aggregate_TD_5123(tbl_Filter_TD_6253_output, tbl_Aggregate_TD_5123_output);
    gettimeofday(&tv_r_Aggregate_5_791145_e, 0);

    struct timeval tv_r_Aggregate_5_300022_s, tv_r_Aggregate_5_300022_e;
    gettimeofday(&tv_r_Aggregate_5_300022_s, 0);
    SW_Aggregate_TD_5796(tbl_Filter_TD_6161_output, tbl_Aggregate_TD_5796_output);
    gettimeofday(&tv_r_Aggregate_5_300022_e, 0);

    struct timeval tv_r_Filter_4_554247_s, tv_r_Filter_4_554247_e;
    gettimeofday(&tv_r_Filter_4_554247_s, 0);
    SW_Filter_TD_483(tbl_SerializeFromObject_TD_5367_input, tbl_Filter_TD_483_output);
    gettimeofday(&tv_r_Filter_4_554247_e, 0);

    struct timeval tv_r_Aggregate_4_381887_s, tv_r_Aggregate_4_381887_e;
    gettimeofday(&tv_r_Aggregate_4_381887_s, 0);
    SW_Aggregate_TD_4522(tbl_Filter_TD_5636_output, tbl_Aggregate_TD_4522_output);
    gettimeofday(&tv_r_Aggregate_4_381887_e, 0);

    struct timeval tv_r_JOIN_CROSS_4_405308_s, tv_r_JOIN_CROSS_4_405308_e;
    gettimeofday(&tv_r_JOIN_CROSS_4_405308_s, 0);
    SW_JOIN_CROSS_TD_4432(tbl_Aggregate_TD_5796_output, tbl_Aggregate_TD_5123_output, tbl_JOIN_CROSS_TD_4432_output);
    gettimeofday(&tv_r_JOIN_CROSS_4_405308_e, 0);

    struct timeval tv_r_Filter_3_195528_s, tv_r_Filter_3_195528_e;
    gettimeofday(&tv_r_Filter_3_195528_s, 0);
    SW_Filter_TD_3954(tbl_SerializeFromObject_TD_4793_input, tbl_Filter_TD_3954_output);
    gettimeofday(&tv_r_Filter_3_195528_e, 0);

    struct timeval tv_r_Aggregate_3_621028_s, tv_r_Aggregate_3_621028_e;
    gettimeofday(&tv_r_Aggregate_3_621028_s, 0);
    SW_Aggregate_TD_3147(tbl_Filter_TD_483_output, tbl_Aggregate_TD_3147_output);
    gettimeofday(&tv_r_Aggregate_3_621028_e, 0);

    struct timeval tv_r_JOIN_CROSS_3_678703_s, tv_r_JOIN_CROSS_3_678703_e;
    gettimeofday(&tv_r_JOIN_CROSS_3_678703_s, 0);
    SW_JOIN_CROSS_TD_3684(tbl_JOIN_CROSS_TD_4432_output, tbl_Aggregate_TD_4522_output, tbl_JOIN_CROSS_TD_3684_output);
    gettimeofday(&tv_r_JOIN_CROSS_3_678703_e, 0);

    struct timeval tv_r_Filter_2_290967_s, tv_r_Filter_2_290967_e;
    gettimeofday(&tv_r_Filter_2_290967_s, 0);
    SW_Filter_TD_2521(tbl_SerializeFromObject_TD_3844_input, tbl_Filter_TD_2521_output);
    gettimeofday(&tv_r_Filter_2_290967_e, 0);

    struct timeval tv_r_Aggregate_2_885048_s, tv_r_Aggregate_2_885048_e;
    gettimeofday(&tv_r_Aggregate_2_885048_s, 0);
    SW_Aggregate_TD_2936(tbl_Filter_TD_3954_output, tbl_Aggregate_TD_2936_output);
    gettimeofday(&tv_r_Aggregate_2_885048_e, 0);

    struct timeval tv_r_JOIN_CROSS_2_738923_s, tv_r_JOIN_CROSS_2_738923_e;
    gettimeofday(&tv_r_JOIN_CROSS_2_738923_s, 0);
    SW_JOIN_CROSS_TD_2106(tbl_JOIN_CROSS_TD_3684_output, tbl_Aggregate_TD_3147_output, tbl_JOIN_CROSS_TD_2106_output);
    gettimeofday(&tv_r_JOIN_CROSS_2_738923_e, 0);

    struct timeval tv_r_Aggregate_1_303104_s, tv_r_Aggregate_1_303104_e;
    gettimeofday(&tv_r_Aggregate_1_303104_s, 0);
    SW_Aggregate_TD_1174(tbl_Filter_TD_2521_output, tbl_Aggregate_TD_1174_output);
    gettimeofday(&tv_r_Aggregate_1_303104_e, 0);

    struct timeval tv_r_JOIN_CROSS_1_149223_s, tv_r_JOIN_CROSS_1_149223_e;
    gettimeofday(&tv_r_JOIN_CROSS_1_149223_s, 0);
    SW_JOIN_CROSS_TD_1662(tbl_JOIN_CROSS_TD_2106_output, tbl_Aggregate_TD_2936_output, tbl_JOIN_CROSS_TD_1662_output);
    gettimeofday(&tv_r_JOIN_CROSS_1_149223_e, 0);

    struct timeval tv_r_JOIN_CROSS_0_986321_s, tv_r_JOIN_CROSS_0_986321_e;
    gettimeofday(&tv_r_JOIN_CROSS_0_986321_s, 0);
    SW_JOIN_CROSS_TD_0670(tbl_JOIN_CROSS_TD_1662_output, tbl_Aggregate_TD_1174_output, tbl_JOIN_CROSS_TD_0670_output);
    gettimeofday(&tv_r_JOIN_CROSS_0_986321_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_767413_s, &tv_r_Filter_6_767413_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7887_input: " << tbl_SerializeFromObject_TD_7887_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_907263_s, &tv_r_Filter_6_907263_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7939_input: " << tbl_SerializeFromObject_TD_7939_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_277101_s, &tv_r_Filter_5_277101_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6168_input: " << tbl_SerializeFromObject_TD_6168_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_791145_s, &tv_r_Aggregate_5_791145_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6253_output: " << tbl_Filter_TD_6253_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_300022_s, &tv_r_Aggregate_5_300022_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6161_output: " << tbl_Filter_TD_6161_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_554247_s, &tv_r_Filter_4_554247_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5367_input: " << tbl_SerializeFromObject_TD_5367_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_381887_s, &tv_r_Aggregate_4_381887_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5636_output: " << tbl_Filter_TD_5636_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_4: " << tvdiff(&tv_r_JOIN_CROSS_4_405308_s, &tv_r_JOIN_CROSS_4_405308_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5796_output: " << tbl_Aggregate_TD_5796_output.getNumRow() << " " << "tbl_Aggregate_TD_5123_output: " << tbl_Aggregate_TD_5123_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_195528_s, &tv_r_Filter_3_195528_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4793_input: " << tbl_SerializeFromObject_TD_4793_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_621028_s, &tv_r_Aggregate_3_621028_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_483_output: " << tbl_Filter_TD_483_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_3: " << tvdiff(&tv_r_JOIN_CROSS_3_678703_s, &tv_r_JOIN_CROSS_3_678703_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_4432_output: " << tbl_JOIN_CROSS_TD_4432_output.getNumRow() << " " << "tbl_Aggregate_TD_4522_output: " << tbl_Aggregate_TD_4522_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_290967_s, &tv_r_Filter_2_290967_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3844_input: " << tbl_SerializeFromObject_TD_3844_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_885048_s, &tv_r_Aggregate_2_885048_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3954_output: " << tbl_Filter_TD_3954_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_2: " << tvdiff(&tv_r_JOIN_CROSS_2_738923_s, &tv_r_JOIN_CROSS_2_738923_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_3684_output: " << tbl_JOIN_CROSS_TD_3684_output.getNumRow() << " " << "tbl_Aggregate_TD_3147_output: " << tbl_Aggregate_TD_3147_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_303104_s, &tv_r_Aggregate_1_303104_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2521_output: " << tbl_Filter_TD_2521_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_1: " << tvdiff(&tv_r_JOIN_CROSS_1_149223_s, &tv_r_JOIN_CROSS_1_149223_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_2106_output: " << tbl_JOIN_CROSS_TD_2106_output.getNumRow() << " " << "tbl_Aggregate_TD_2936_output: " << tbl_Aggregate_TD_2936_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_0: " << tvdiff(&tv_r_JOIN_CROSS_0_986321_s, &tv_r_JOIN_CROSS_0_986321_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_1662_output: " << tbl_JOIN_CROSS_TD_1662_output.getNumRow() << " " << "tbl_Aggregate_TD_1174_output: " << tbl_Aggregate_TD_1174_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 5.5359373 * 1000 << "ms" << std::endl; 
    return 0; 
}
