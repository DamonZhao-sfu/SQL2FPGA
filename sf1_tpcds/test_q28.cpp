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
    std::string xclbin_path; 
    if (!parser.getCmdOption("-xclbin", xclbin_path)) { 
        std::cout << "ERROR: xclbin path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_h; 
    if (!parser.getCmdOption("-xclbin_h", xclbin_path_h)) { 
        std::cout << "ERROR: xclbin_h path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_a; 
    if (!parser.getCmdOption("-xclbin_a", xclbin_path_a)) { 
        std::cout << "ERROR: xclbin_a path is not set!\n"; 
        return 1; 
    } 
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
    // Get CL devices. 
    std::vector<cl::Device> devices = xcl::get_xil_devices(); 
    // ****************************** Tables **************************** // 
    Table tbl_JOIN_CROSS_TD_0917317_output("tbl_JOIN_CROSS_TD_0917317_output", 6100000, 18, "");
    tbl_JOIN_CROSS_TD_0917317_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_1401537_output("tbl_JOIN_CROSS_TD_1401537_output", 6100000, 15, "");
    tbl_JOIN_CROSS_TD_1401537_output.allocateHost();
    Table tbl_Aggregate_TD_1124954_output("tbl_Aggregate_TD_1124954_output", 6100000, 3, "");
    tbl_Aggregate_TD_1124954_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_2787985_output("tbl_JOIN_CROSS_TD_2787985_output", 6100000, 12, "");
    tbl_JOIN_CROSS_TD_2787985_output.allocateHost();
    Table tbl_Aggregate_TD_2601664_output("tbl_Aggregate_TD_2601664_output", 6100000, 3, "");
    tbl_Aggregate_TD_2601664_output.allocateHost();
    Table tbl_Filter_TD_2729162_output("tbl_Filter_TD_2729162_output", 6100000, 1, "");
    tbl_Filter_TD_2729162_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_3445858_output("tbl_JOIN_CROSS_TD_3445858_output", 6100000, 9, "");
    tbl_JOIN_CROSS_TD_3445858_output.allocateHost();
    Table tbl_Aggregate_TD_3882224_output("tbl_Aggregate_TD_3882224_output", 6100000, 3, "");
    tbl_Aggregate_TD_3882224_output.allocateHost();
    Table tbl_Filter_TD_3494541_output("tbl_Filter_TD_3494541_output", 6100000, 1, "");
    tbl_Filter_TD_3494541_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3840119_input;
    tbl_SerializeFromObject_TD_3840119_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_3840119_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3840119_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3840119_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3840119_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3840119_input.allocateHost();
    tbl_SerializeFromObject_TD_3840119_input.loadHost();
    Table tbl_JOIN_CROSS_TD_4975388_output("tbl_JOIN_CROSS_TD_4975388_output", 6100000, 6, "");
    tbl_JOIN_CROSS_TD_4975388_output.allocateHost();
    Table tbl_Aggregate_TD_4140373_output("tbl_Aggregate_TD_4140373_output", 6100000, 3, "");
    tbl_Aggregate_TD_4140373_output.allocateHost();
    Table tbl_Filter_TD_4656236_output("tbl_Filter_TD_4656236_output", 6100000, 1, "");
    tbl_Filter_TD_4656236_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4231821_input;
    tbl_SerializeFromObject_TD_4231821_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_4231821_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_4231821_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_4231821_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_4231821_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_4231821_input.allocateHost();
    tbl_SerializeFromObject_TD_4231821_input.loadHost();
    Table tbl_Aggregate_TD_5840631_output("tbl_Aggregate_TD_5840631_output", 6100000, 3, "");
    tbl_Aggregate_TD_5840631_output.allocateHost();
    Table tbl_Aggregate_TD_5218206_output("tbl_Aggregate_TD_5218206_output", 6100000, 3, "");
    tbl_Aggregate_TD_5218206_output.allocateHost();
    Table tbl_Filter_TD_536557_output("tbl_Filter_TD_536557_output", 6100000, 1, "");
    tbl_Filter_TD_536557_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5520940_input;
    tbl_SerializeFromObject_TD_5520940_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_5520940_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_5520940_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_5520940_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_5520940_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_5520940_input.allocateHost();
    tbl_SerializeFromObject_TD_5520940_input.loadHost();
    Table tbl_Filter_TD_6200293_output("tbl_Filter_TD_6200293_output", 6100000, 1, "");
    tbl_Filter_TD_6200293_output.allocateHost();
    Table tbl_Filter_TD_675304_output("tbl_Filter_TD_675304_output", 6100000, 1, "");
    tbl_Filter_TD_675304_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6615490_input;
    tbl_SerializeFromObject_TD_6615490_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6615490_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_6615490_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_6615490_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_6615490_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_6615490_input.allocateHost();
    tbl_SerializeFromObject_TD_6615490_input.loadHost();
    Table tbl_SerializeFromObject_TD_7362346_input;
    tbl_SerializeFromObject_TD_7362346_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_7362346_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_7362346_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_7362346_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_7362346_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_7362346_input.allocateHost();
    tbl_SerializeFromObject_TD_7362346_input.loadHost();
    Table tbl_SerializeFromObject_TD_7676430_input;
    tbl_SerializeFromObject_TD_7676430_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_7676430_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_7676430_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_7676430_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_7676430_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_7676430_input.allocateHost();
    tbl_SerializeFromObject_TD_7676430_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_217268_s, tv_r_Filter_6_217268_e;
    gettimeofday(&tv_r_Filter_6_217268_s, 0);
    SW_Filter_TD_675304(tbl_SerializeFromObject_TD_7676430_input, tbl_Filter_TD_675304_output);
    gettimeofday(&tv_r_Filter_6_217268_e, 0);

    struct timeval tv_r_Filter_6_713929_s, tv_r_Filter_6_713929_e;
    gettimeofday(&tv_r_Filter_6_713929_s, 0);
    SW_Filter_TD_6200293(tbl_SerializeFromObject_TD_7362346_input, tbl_Filter_TD_6200293_output);
    gettimeofday(&tv_r_Filter_6_713929_e, 0);

    struct timeval tv_r_Filter_5_281223_s, tv_r_Filter_5_281223_e;
    gettimeofday(&tv_r_Filter_5_281223_s, 0);
    SW_Filter_TD_536557(tbl_SerializeFromObject_TD_6615490_input, tbl_Filter_TD_536557_output);
    gettimeofday(&tv_r_Filter_5_281223_e, 0);

    struct timeval tv_r_Aggregate_5_594484_s, tv_r_Aggregate_5_594484_e;
    gettimeofday(&tv_r_Aggregate_5_594484_s, 0);
    SW_Aggregate_TD_5218206(tbl_Filter_TD_675304_output, tbl_Aggregate_TD_5218206_output);
    gettimeofday(&tv_r_Aggregate_5_594484_e, 0);

    struct timeval tv_r_Aggregate_5_876423_s, tv_r_Aggregate_5_876423_e;
    gettimeofday(&tv_r_Aggregate_5_876423_s, 0);
    SW_Aggregate_TD_5840631(tbl_Filter_TD_6200293_output, tbl_Aggregate_TD_5840631_output);
    gettimeofday(&tv_r_Aggregate_5_876423_e, 0);

    struct timeval tv_r_Filter_4_296149_s, tv_r_Filter_4_296149_e;
    gettimeofday(&tv_r_Filter_4_296149_s, 0);
    SW_Filter_TD_4656236(tbl_SerializeFromObject_TD_5520940_input, tbl_Filter_TD_4656236_output);
    gettimeofday(&tv_r_Filter_4_296149_e, 0);

    struct timeval tv_r_Aggregate_4_321489_s, tv_r_Aggregate_4_321489_e;
    gettimeofday(&tv_r_Aggregate_4_321489_s, 0);
    SW_Aggregate_TD_4140373(tbl_Filter_TD_536557_output, tbl_Aggregate_TD_4140373_output);
    gettimeofday(&tv_r_Aggregate_4_321489_e, 0);

    struct timeval tv_r_JOIN_CROSS_4_766869_s, tv_r_JOIN_CROSS_4_766869_e;
    gettimeofday(&tv_r_JOIN_CROSS_4_766869_s, 0);
    SW_JOIN_CROSS_TD_4975388(tbl_Aggregate_TD_5840631_output, tbl_Aggregate_TD_5218206_output, tbl_JOIN_CROSS_TD_4975388_output);
    gettimeofday(&tv_r_JOIN_CROSS_4_766869_e, 0);

    struct timeval tv_r_Filter_3_202_s, tv_r_Filter_3_202_e;
    gettimeofday(&tv_r_Filter_3_202_s, 0);
    SW_Filter_TD_3494541(tbl_SerializeFromObject_TD_4231821_input, tbl_Filter_TD_3494541_output);
    gettimeofday(&tv_r_Filter_3_202_e, 0);

    struct timeval tv_r_Aggregate_3_814811_s, tv_r_Aggregate_3_814811_e;
    gettimeofday(&tv_r_Aggregate_3_814811_s, 0);
    SW_Aggregate_TD_3882224(tbl_Filter_TD_4656236_output, tbl_Aggregate_TD_3882224_output);
    gettimeofday(&tv_r_Aggregate_3_814811_e, 0);

    struct timeval tv_r_JOIN_CROSS_3_222910_s, tv_r_JOIN_CROSS_3_222910_e;
    gettimeofday(&tv_r_JOIN_CROSS_3_222910_s, 0);
    SW_JOIN_CROSS_TD_3445858(tbl_JOIN_CROSS_TD_4975388_output, tbl_Aggregate_TD_4140373_output, tbl_JOIN_CROSS_TD_3445858_output);
    gettimeofday(&tv_r_JOIN_CROSS_3_222910_e, 0);

    struct timeval tv_r_Filter_2_357286_s, tv_r_Filter_2_357286_e;
    gettimeofday(&tv_r_Filter_2_357286_s, 0);
    SW_Filter_TD_2729162(tbl_SerializeFromObject_TD_3840119_input, tbl_Filter_TD_2729162_output);
    gettimeofday(&tv_r_Filter_2_357286_e, 0);

    struct timeval tv_r_Aggregate_2_924278_s, tv_r_Aggregate_2_924278_e;
    gettimeofday(&tv_r_Aggregate_2_924278_s, 0);
    SW_Aggregate_TD_2601664(tbl_Filter_TD_3494541_output, tbl_Aggregate_TD_2601664_output);
    gettimeofday(&tv_r_Aggregate_2_924278_e, 0);

    struct timeval tv_r_JOIN_CROSS_2_620351_s, tv_r_JOIN_CROSS_2_620351_e;
    gettimeofday(&tv_r_JOIN_CROSS_2_620351_s, 0);
    SW_JOIN_CROSS_TD_2787985(tbl_JOIN_CROSS_TD_3445858_output, tbl_Aggregate_TD_3882224_output, tbl_JOIN_CROSS_TD_2787985_output);
    gettimeofday(&tv_r_JOIN_CROSS_2_620351_e, 0);

    struct timeval tv_r_Aggregate_1_515417_s, tv_r_Aggregate_1_515417_e;
    gettimeofday(&tv_r_Aggregate_1_515417_s, 0);
    SW_Aggregate_TD_1124954(tbl_Filter_TD_2729162_output, tbl_Aggregate_TD_1124954_output);
    gettimeofday(&tv_r_Aggregate_1_515417_e, 0);

    struct timeval tv_r_JOIN_CROSS_1_22217_s, tv_r_JOIN_CROSS_1_22217_e;
    gettimeofday(&tv_r_JOIN_CROSS_1_22217_s, 0);
    SW_JOIN_CROSS_TD_1401537(tbl_JOIN_CROSS_TD_2787985_output, tbl_Aggregate_TD_2601664_output, tbl_JOIN_CROSS_TD_1401537_output);
    gettimeofday(&tv_r_JOIN_CROSS_1_22217_e, 0);

    struct timeval tv_r_JOIN_CROSS_0_628929_s, tv_r_JOIN_CROSS_0_628929_e;
    gettimeofday(&tv_r_JOIN_CROSS_0_628929_s, 0);
    SW_JOIN_CROSS_TD_0917317(tbl_JOIN_CROSS_TD_1401537_output, tbl_Aggregate_TD_1124954_output, tbl_JOIN_CROSS_TD_0917317_output);
    gettimeofday(&tv_r_JOIN_CROSS_0_628929_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_217268_s, &tv_r_Filter_6_217268_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7676430_input: " << tbl_SerializeFromObject_TD_7676430_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_713929_s, &tv_r_Filter_6_713929_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7362346_input: " << tbl_SerializeFromObject_TD_7362346_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_281223_s, &tv_r_Filter_5_281223_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6615490_input: " << tbl_SerializeFromObject_TD_6615490_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_594484_s, &tv_r_Aggregate_5_594484_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_675304_output: " << tbl_Filter_TD_675304_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_876423_s, &tv_r_Aggregate_5_876423_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6200293_output: " << tbl_Filter_TD_6200293_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_296149_s, &tv_r_Filter_4_296149_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5520940_input: " << tbl_SerializeFromObject_TD_5520940_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_321489_s, &tv_r_Aggregate_4_321489_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_536557_output: " << tbl_Filter_TD_536557_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_4: " << tvdiff(&tv_r_JOIN_CROSS_4_766869_s, &tv_r_JOIN_CROSS_4_766869_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5840631_output: " << tbl_Aggregate_TD_5840631_output.getNumRow() << " " << "tbl_Aggregate_TD_5218206_output: " << tbl_Aggregate_TD_5218206_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_202_s, &tv_r_Filter_3_202_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4231821_input: " << tbl_SerializeFromObject_TD_4231821_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_814811_s, &tv_r_Aggregate_3_814811_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4656236_output: " << tbl_Filter_TD_4656236_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_3: " << tvdiff(&tv_r_JOIN_CROSS_3_222910_s, &tv_r_JOIN_CROSS_3_222910_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_4975388_output: " << tbl_JOIN_CROSS_TD_4975388_output.getNumRow() << " " << "tbl_Aggregate_TD_4140373_output: " << tbl_Aggregate_TD_4140373_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_357286_s, &tv_r_Filter_2_357286_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3840119_input: " << tbl_SerializeFromObject_TD_3840119_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_924278_s, &tv_r_Aggregate_2_924278_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3494541_output: " << tbl_Filter_TD_3494541_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_2: " << tvdiff(&tv_r_JOIN_CROSS_2_620351_s, &tv_r_JOIN_CROSS_2_620351_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_3445858_output: " << tbl_JOIN_CROSS_TD_3445858_output.getNumRow() << " " << "tbl_Aggregate_TD_3882224_output: " << tbl_Aggregate_TD_3882224_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_515417_s, &tv_r_Aggregate_1_515417_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2729162_output: " << tbl_Filter_TD_2729162_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_1: " << tvdiff(&tv_r_JOIN_CROSS_1_22217_s, &tv_r_JOIN_CROSS_1_22217_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_2787985_output: " << tbl_JOIN_CROSS_TD_2787985_output.getNumRow() << " " << "tbl_Aggregate_TD_2601664_output: " << tbl_Aggregate_TD_2601664_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_0: " << tvdiff(&tv_r_JOIN_CROSS_0_628929_s, &tv_r_JOIN_CROSS_0_628929_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_1401537_output: " << tbl_JOIN_CROSS_TD_1401537_output.getNumRow() << " " << "tbl_Aggregate_TD_1124954_output: " << tbl_Aggregate_TD_1124954_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 5.4025292 * 1000 << "ms" << std::endl; 
    return 0; 
}
