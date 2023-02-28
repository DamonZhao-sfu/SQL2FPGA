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

#include "cfgFunc_q41.hpp" 
#include "q41.hpp" 

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
    std::cout << "NOTE:running query #41\n."; 
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
    Table tbl_GlobalLimit_TD_0489953_output("tbl_GlobalLimit_TD_0489953_output", 6100000, 1, "");
    tbl_GlobalLimit_TD_0489953_output.allocateHost();
    Table tbl_LocalLimit_TD_1940237_output("tbl_LocalLimit_TD_1940237_output", 6100000, 1, "");
    tbl_LocalLimit_TD_1940237_output.allocateHost();
    Table tbl_Sort_TD_2846943_output("tbl_Sort_TD_2846943_output", 6100000, 1, "");
    tbl_Sort_TD_2846943_output.allocateHost();
    Table tbl_Aggregate_TD_3662251_output("tbl_Aggregate_TD_3662251_output", 6100000, 1, "");
    tbl_Aggregate_TD_3662251_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4130772_output("tbl_JOIN_INNER_TD_4130772_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4130772_output.allocateHost();
    Table tbl_Filter_TD_5255769_output("tbl_Filter_TD_5255769_output", 6100000, 2, "");
    tbl_Filter_TD_5255769_output.allocateHost();
    Table tbl_Filter_TD_5795491_output("tbl_Filter_TD_5795491_output", 6100000, 1, "");
    tbl_Filter_TD_5795491_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6407888_input;
    tbl_SerializeFromObject_TD_6407888_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6407888_input.addCol("i_manufact", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6407888_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6407888_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_6407888_input.allocateHost();
    tbl_SerializeFromObject_TD_6407888_input.loadHost();
    Table tbl_Aggregate_TD_6902389_output("tbl_Aggregate_TD_6902389_output", 6100000, 2, "");
    tbl_Aggregate_TD_6902389_output.allocateHost();
    Table tbl_Filter_TD_7258112_output("tbl_Filter_TD_7258112_output", 6100000, 1, "");
    tbl_Filter_TD_7258112_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8342768_input;
    tbl_SerializeFromObject_TD_8342768_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8342768_input.addCol("i_manufact", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8342768_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8342768_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8342768_input.addCol("i_units", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8342768_input.addCol("i_size", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8342768_input.allocateHost();
    tbl_SerializeFromObject_TD_8342768_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_258828_s, tv_r_Filter_7_258828_e;
    gettimeofday(&tv_r_Filter_7_258828_s, 0);
    SW_Filter_TD_7258112(tbl_SerializeFromObject_TD_8342768_input, tbl_Filter_TD_7258112_output);
    gettimeofday(&tv_r_Filter_7_258828_e, 0);

    struct timeval tv_r_Aggregate_6_45306_s, tv_r_Aggregate_6_45306_e;
    gettimeofday(&tv_r_Aggregate_6_45306_s, 0);
    SW_Aggregate_TD_6902389(tbl_Filter_TD_7258112_output, tbl_Aggregate_TD_6902389_output);
    gettimeofday(&tv_r_Aggregate_6_45306_e, 0);

    struct timeval tv_r_Filter_5_171982_s, tv_r_Filter_5_171982_e;
    gettimeofday(&tv_r_Filter_5_171982_s, 0);
    SW_Filter_TD_5795491(tbl_Aggregate_TD_6902389_output, tbl_Filter_TD_5795491_output);
    gettimeofday(&tv_r_Filter_5_171982_e, 0);

    struct timeval tv_r_Filter_5_722946_s, tv_r_Filter_5_722946_e;
    gettimeofday(&tv_r_Filter_5_722946_s, 0);
    SW_Filter_TD_5255769(tbl_SerializeFromObject_TD_6407888_input, tbl_Filter_TD_5255769_output);
    gettimeofday(&tv_r_Filter_5_722946_e, 0);

    struct timeval tv_r_JOIN_INNER_4_882034_s, tv_r_JOIN_INNER_4_882034_e;
    gettimeofday(&tv_r_JOIN_INNER_4_882034_s, 0);
    SW_JOIN_INNER_TD_4130772(tbl_Filter_TD_5255769_output, tbl_Filter_TD_5795491_output, tbl_JOIN_INNER_TD_4130772_output);
    gettimeofday(&tv_r_JOIN_INNER_4_882034_e, 0);

    struct timeval tv_r_Aggregate_3_105747_s, tv_r_Aggregate_3_105747_e;
    gettimeofday(&tv_r_Aggregate_3_105747_s, 0);
    SW_Aggregate_TD_3662251(tbl_JOIN_INNER_TD_4130772_output, tbl_Aggregate_TD_3662251_output);
    gettimeofday(&tv_r_Aggregate_3_105747_e, 0);

    struct timeval tv_r_Sort_2_696509_s, tv_r_Sort_2_696509_e;
    gettimeofday(&tv_r_Sort_2_696509_s, 0);
    SW_Sort_TD_2846943(tbl_Aggregate_TD_3662251_output, tbl_Sort_TD_2846943_output);
    gettimeofday(&tv_r_Sort_2_696509_e, 0);

    struct timeval tv_r_LocalLimit_1_737288_s, tv_r_LocalLimit_1_737288_e;
    gettimeofday(&tv_r_LocalLimit_1_737288_s, 0);
    SW_LocalLimit_TD_1940237(tbl_Sort_TD_2846943_output, tbl_LocalLimit_TD_1940237_output);
    gettimeofday(&tv_r_LocalLimit_1_737288_e, 0);

    struct timeval tv_r_GlobalLimit_0_213213_s, tv_r_GlobalLimit_0_213213_e;
    gettimeofday(&tv_r_GlobalLimit_0_213213_s, 0);
    SW_GlobalLimit_TD_0489953(tbl_LocalLimit_TD_1940237_output, tbl_GlobalLimit_TD_0489953_output);
    gettimeofday(&tv_r_GlobalLimit_0_213213_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_258828_s, &tv_r_Filter_7_258828_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8342768_input: " << tbl_SerializeFromObject_TD_8342768_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_45306_s, &tv_r_Aggregate_6_45306_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7258112_output: " << tbl_Filter_TD_7258112_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_171982_s, &tv_r_Filter_5_171982_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6902389_output: " << tbl_Aggregate_TD_6902389_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_722946_s, &tv_r_Filter_5_722946_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6407888_input: " << tbl_SerializeFromObject_TD_6407888_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_882034_s, &tv_r_JOIN_INNER_4_882034_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5255769_output: " << tbl_Filter_TD_5255769_output.getNumRow() << " " << "tbl_Filter_TD_5795491_output: " << tbl_Filter_TD_5795491_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_105747_s, &tv_r_Aggregate_3_105747_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4130772_output: " << tbl_JOIN_INNER_TD_4130772_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_696509_s, &tv_r_Sort_2_696509_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3662251_output: " << tbl_Aggregate_TD_3662251_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_737288_s, &tv_r_LocalLimit_1_737288_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2846943_output: " << tbl_Sort_TD_2846943_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_213213_s, &tv_r_GlobalLimit_0_213213_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1940237_output: " << tbl_LocalLimit_TD_1940237_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.71159774 * 1000 << "ms" << std::endl; 
    return 0; 
}
