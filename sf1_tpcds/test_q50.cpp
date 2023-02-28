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

#include "cfgFunc_q50.hpp" 
#include "q50.hpp" 

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
    std::cout << "NOTE:running query #50\n."; 
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
    Table tbl_GlobalLimit_TD_088941_output("tbl_GlobalLimit_TD_088941_output", 6100000, 15, "");
    tbl_GlobalLimit_TD_088941_output.allocateHost();
    Table tbl_LocalLimit_TD_1851195_output("tbl_LocalLimit_TD_1851195_output", 6100000, 15, "");
    tbl_LocalLimit_TD_1851195_output.allocateHost();
    Table tbl_Sort_TD_2330733_output("tbl_Sort_TD_2330733_output", 6100000, 15, "");
    tbl_Sort_TD_2330733_output.allocateHost();
    Table tbl_Aggregate_TD_3222078_output("tbl_Aggregate_TD_3222078_output", 6100000, 15, "");
    tbl_Aggregate_TD_3222078_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4524835_output("tbl_JOIN_INNER_TD_4524835_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_4524835_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5281905_output("tbl_JOIN_INNER_TD_5281905_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_5281905_output.allocateHost();
    Table tbl_Filter_TD_5828956_output("tbl_Filter_TD_5828956_output", 6100000, 1, "");
    tbl_Filter_TD_5828956_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6538934_output("tbl_JOIN_INNER_TD_6538934_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_6538934_output.allocateHost();
    Table tbl_Filter_TD_6702773_output("tbl_Filter_TD_6702773_output", 6100000, 1, "");
    tbl_Filter_TD_6702773_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6860579_input;
    tbl_SerializeFromObject_TD_6860579_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6860579_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6860579_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6860579_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_6860579_input.allocateHost();
    tbl_SerializeFromObject_TD_6860579_input.loadHost();
    Table tbl_JOIN_INNER_TD_7829517_output("tbl_JOIN_INNER_TD_7829517_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_7829517_output.allocateHost();
    Table tbl_Filter_TD_7528426_output("tbl_Filter_TD_7528426_output", 6100000, 11, "");
    tbl_Filter_TD_7528426_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7172731_input;
    tbl_SerializeFromObject_TD_7172731_input = Table("date_dim", date_dim_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7172731_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7172731_input.allocateHost();
    tbl_SerializeFromObject_TD_7172731_input.loadHost();
    Table tbl_Filter_TD_875777_output("tbl_Filter_TD_875777_output", 6100000, 5, "");
    tbl_Filter_TD_875777_output.allocateHost();
    Table tbl_Filter_TD_8110355_output("tbl_Filter_TD_8110355_output", 6100000, 4, "");
    tbl_Filter_TD_8110355_output.allocateHost();
    Table tbl_SerializeFromObject_TD_884788_input;
    tbl_SerializeFromObject_TD_884788_input = Table("store", store_n, 11, in_dir, "orc");
    tbl_SerializeFromObject_TD_884788_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_company_id", 4);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_street_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_suite_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_884788_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_884788_input.allocateHost();
    tbl_SerializeFromObject_TD_884788_input.loadHost();
    Table tbl_SerializeFromObject_TD_9742417_input;
    tbl_SerializeFromObject_TD_9742417_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9742417_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9742417_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9742417_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9742417_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9742417_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_9742417_input.allocateHost();
    tbl_SerializeFromObject_TD_9742417_input.loadHost();
    Table tbl_SerializeFromObject_TD_9613125_input;
    tbl_SerializeFromObject_TD_9613125_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9613125_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_9613125_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_9613125_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_9613125_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_9613125_input.allocateHost();
    tbl_SerializeFromObject_TD_9613125_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_574171_s, tv_r_Filter_8_574171_e;
    gettimeofday(&tv_r_Filter_8_574171_s, 0);
    SW_Filter_TD_8110355(tbl_SerializeFromObject_TD_9613125_input, tbl_Filter_TD_8110355_output);
    gettimeofday(&tv_r_Filter_8_574171_e, 0);

    struct timeval tv_r_Filter_8_449165_s, tv_r_Filter_8_449165_e;
    gettimeofday(&tv_r_Filter_8_449165_s, 0);
    SW_Filter_TD_875777(tbl_SerializeFromObject_TD_9742417_input, tbl_Filter_TD_875777_output);
    gettimeofday(&tv_r_Filter_8_449165_e, 0);

    struct timeval tv_r_Filter_7_618031_s, tv_r_Filter_7_618031_e;
    gettimeofday(&tv_r_Filter_7_618031_s, 0);
    SW_Filter_TD_7528426(tbl_SerializeFromObject_TD_884788_input, tbl_Filter_TD_7528426_output);
    gettimeofday(&tv_r_Filter_7_618031_e, 0);

    struct timeval tv_r_JOIN_INNER_7_911849_s, tv_r_JOIN_INNER_7_911849_e;
    gettimeofday(&tv_r_JOIN_INNER_7_911849_s, 0);
    SW_JOIN_INNER_TD_7829517(tbl_Filter_TD_875777_output, tbl_Filter_TD_8110355_output, tbl_JOIN_INNER_TD_7829517_output);
    gettimeofday(&tv_r_JOIN_INNER_7_911849_e, 0);

    struct timeval tv_r_Filter_6_400397_s, tv_r_Filter_6_400397_e;
    gettimeofday(&tv_r_Filter_6_400397_s, 0);
    SW_Filter_TD_6702773(tbl_SerializeFromObject_TD_7172731_input, tbl_Filter_TD_6702773_output);
    gettimeofday(&tv_r_Filter_6_400397_e, 0);

    struct timeval tv_r_JOIN_INNER_6_499152_s, tv_r_JOIN_INNER_6_499152_e;
    gettimeofday(&tv_r_JOIN_INNER_6_499152_s, 0);
    SW_JOIN_INNER_TD_6538934(tbl_JOIN_INNER_TD_7829517_output, tbl_Filter_TD_7528426_output, tbl_JOIN_INNER_TD_6538934_output);
    gettimeofday(&tv_r_JOIN_INNER_6_499152_e, 0);

    struct timeval tv_r_Filter_5_332733_s, tv_r_Filter_5_332733_e;
    gettimeofday(&tv_r_Filter_5_332733_s, 0);
    SW_Filter_TD_5828956(tbl_SerializeFromObject_TD_6860579_input, tbl_Filter_TD_5828956_output);
    gettimeofday(&tv_r_Filter_5_332733_e, 0);

    struct timeval tv_r_JOIN_INNER_5_518612_s, tv_r_JOIN_INNER_5_518612_e;
    gettimeofday(&tv_r_JOIN_INNER_5_518612_s, 0);
    SW_JOIN_INNER_TD_5281905(tbl_JOIN_INNER_TD_6538934_output, tbl_Filter_TD_6702773_output, tbl_JOIN_INNER_TD_5281905_output);
    gettimeofday(&tv_r_JOIN_INNER_5_518612_e, 0);

    struct timeval tv_r_JOIN_INNER_4_933441_s, tv_r_JOIN_INNER_4_933441_e;
    gettimeofday(&tv_r_JOIN_INNER_4_933441_s, 0);
    SW_JOIN_INNER_TD_4524835(tbl_JOIN_INNER_TD_5281905_output, tbl_Filter_TD_5828956_output, tbl_JOIN_INNER_TD_4524835_output);
    gettimeofday(&tv_r_JOIN_INNER_4_933441_e, 0);

    struct timeval tv_r_Aggregate_3_74462_s, tv_r_Aggregate_3_74462_e;
    gettimeofday(&tv_r_Aggregate_3_74462_s, 0);
    SW_Aggregate_TD_3222078(tbl_JOIN_INNER_TD_4524835_output, tbl_Aggregate_TD_3222078_output);
    gettimeofday(&tv_r_Aggregate_3_74462_e, 0);

    struct timeval tv_r_Sort_2_289498_s, tv_r_Sort_2_289498_e;
    gettimeofday(&tv_r_Sort_2_289498_s, 0);
    SW_Sort_TD_2330733(tbl_Aggregate_TD_3222078_output, tbl_Sort_TD_2330733_output);
    gettimeofday(&tv_r_Sort_2_289498_e, 0);

    struct timeval tv_r_LocalLimit_1_537831_s, tv_r_LocalLimit_1_537831_e;
    gettimeofday(&tv_r_LocalLimit_1_537831_s, 0);
    SW_LocalLimit_TD_1851195(tbl_Sort_TD_2330733_output, tbl_LocalLimit_TD_1851195_output);
    gettimeofday(&tv_r_LocalLimit_1_537831_e, 0);

    struct timeval tv_r_GlobalLimit_0_832677_s, tv_r_GlobalLimit_0_832677_e;
    gettimeofday(&tv_r_GlobalLimit_0_832677_s, 0);
    SW_GlobalLimit_TD_088941(tbl_LocalLimit_TD_1851195_output, tbl_GlobalLimit_TD_088941_output);
    gettimeofday(&tv_r_GlobalLimit_0_832677_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_574171_s, &tv_r_Filter_8_574171_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9613125_input: " << tbl_SerializeFromObject_TD_9613125_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_449165_s, &tv_r_Filter_8_449165_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9742417_input: " << tbl_SerializeFromObject_TD_9742417_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_618031_s, &tv_r_Filter_7_618031_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_884788_input: " << tbl_SerializeFromObject_TD_884788_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_911849_s, &tv_r_JOIN_INNER_7_911849_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_875777_output: " << tbl_Filter_TD_875777_output.getNumRow() << " " << "tbl_Filter_TD_8110355_output: " << tbl_Filter_TD_8110355_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_400397_s, &tv_r_Filter_6_400397_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7172731_input: " << tbl_SerializeFromObject_TD_7172731_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_499152_s, &tv_r_JOIN_INNER_6_499152_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7829517_output: " << tbl_JOIN_INNER_TD_7829517_output.getNumRow() << " " << "tbl_Filter_TD_7528426_output: " << tbl_Filter_TD_7528426_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_332733_s, &tv_r_Filter_5_332733_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6860579_input: " << tbl_SerializeFromObject_TD_6860579_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_518612_s, &tv_r_JOIN_INNER_5_518612_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6538934_output: " << tbl_JOIN_INNER_TD_6538934_output.getNumRow() << " " << "tbl_Filter_TD_6702773_output: " << tbl_Filter_TD_6702773_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_933441_s, &tv_r_JOIN_INNER_4_933441_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5281905_output: " << tbl_JOIN_INNER_TD_5281905_output.getNumRow() << " " << "tbl_Filter_TD_5828956_output: " << tbl_Filter_TD_5828956_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_74462_s, &tv_r_Aggregate_3_74462_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4524835_output: " << tbl_JOIN_INNER_TD_4524835_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_289498_s, &tv_r_Sort_2_289498_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3222078_output: " << tbl_Aggregate_TD_3222078_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_537831_s, &tv_r_LocalLimit_1_537831_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2330733_output: " << tbl_Sort_TD_2330733_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_832677_s, &tv_r_GlobalLimit_0_832677_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1851195_output: " << tbl_LocalLimit_TD_1851195_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.8173238 * 1000 << "ms" << std::endl; 
    return 0; 
}
