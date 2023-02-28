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

#include "cfgFunc_q62.hpp" 
#include "q62.hpp" 

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
    std::cout << "NOTE:running query #62\n."; 
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
    Table tbl_GlobalLimit_TD_0305456_output("tbl_GlobalLimit_TD_0305456_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0305456_output.allocateHost();
    Table tbl_LocalLimit_TD_1392273_output("tbl_LocalLimit_TD_1392273_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1392273_output.allocateHost();
    Table tbl_Sort_TD_2364931_output("tbl_Sort_TD_2364931_output", 6100000, 8, "");
    tbl_Sort_TD_2364931_output.allocateHost();
    Table tbl_Aggregate_TD_381901_output("tbl_Aggregate_TD_381901_output", 6100000, 8, "");
    tbl_Aggregate_TD_381901_output.allocateHost();
    Table tbl_Project_TD_4847082_output("tbl_Project_TD_4847082_output", 6100000, 5, "");
    tbl_Project_TD_4847082_output.allocateHost();
    Table tbl_JOIN_INNER_TD_576744_output("tbl_JOIN_INNER_TD_576744_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_576744_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6542_output("tbl_JOIN_INNER_TD_6542_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6542_output.allocateHost();
    Table tbl_Filter_TD_6913439_output("tbl_Filter_TD_6913439_output", 6100000, 1, "");
    tbl_Filter_TD_6913439_output.allocateHost();
    Table tbl_JOIN_INNER_TD_720595_output("tbl_JOIN_INNER_TD_720595_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_720595_output.allocateHost();
    Table tbl_Filter_TD_7919637_output("tbl_Filter_TD_7919637_output", 6100000, 2, "");
    tbl_Filter_TD_7919637_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7306681_input;
    tbl_SerializeFromObject_TD_7306681_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7306681_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7306681_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7306681_input.allocateHost();
    tbl_SerializeFromObject_TD_7306681_input.loadHost();
    Table tbl_JOIN_INNER_TD_8323755_output("tbl_JOIN_INNER_TD_8323755_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8323755_output.allocateHost();
    Table tbl_Filter_TD_8952385_output("tbl_Filter_TD_8952385_output", 6100000, 2, "");
    tbl_Filter_TD_8952385_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8535850_input;
    tbl_SerializeFromObject_TD_8535850_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8535850_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_8535850_input.addCol("web_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8535850_input.allocateHost();
    tbl_SerializeFromObject_TD_8535850_input.loadHost();
    Table tbl_Filter_TD_9868278_output("tbl_Filter_TD_9868278_output", 6100000, 5, "");
    tbl_Filter_TD_9868278_output.allocateHost();
    Table tbl_Filter_TD_9547949_output("tbl_Filter_TD_9547949_output", 6100000, 2, "");
    tbl_Filter_TD_9547949_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9663276_input;
    tbl_SerializeFromObject_TD_9663276_input = Table("ship_mode", ship_mode_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9663276_input.addCol("sm_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_9663276_input.addCol("sm_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9663276_input.allocateHost();
    tbl_SerializeFromObject_TD_9663276_input.loadHost();
    Table tbl_SerializeFromObject_TD_10804530_input;
    tbl_SerializeFromObject_TD_10804530_input = Table("web_sales", web_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10804530_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10804530_input.addCol("ws_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_10804530_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_10804530_input.addCol("ws_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_10804530_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10804530_input.allocateHost();
    tbl_SerializeFromObject_TD_10804530_input.loadHost();
    Table tbl_SerializeFromObject_TD_10173132_input;
    tbl_SerializeFromObject_TD_10173132_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10173132_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10173132_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10173132_input.allocateHost();
    tbl_SerializeFromObject_TD_10173132_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_84468_s, tv_r_Filter_9_84468_e;
    gettimeofday(&tv_r_Filter_9_84468_s, 0);
    SW_Filter_TD_9547949(tbl_SerializeFromObject_TD_10173132_input, tbl_Filter_TD_9547949_output);
    gettimeofday(&tv_r_Filter_9_84468_e, 0);

    struct timeval tv_r_Filter_9_158583_s, tv_r_Filter_9_158583_e;
    gettimeofday(&tv_r_Filter_9_158583_s, 0);
    SW_Filter_TD_9868278(tbl_SerializeFromObject_TD_10804530_input, tbl_Filter_TD_9868278_output);
    gettimeofday(&tv_r_Filter_9_158583_e, 0);

    struct timeval tv_r_Filter_8_166848_s, tv_r_Filter_8_166848_e;
    gettimeofday(&tv_r_Filter_8_166848_s, 0);
    SW_Filter_TD_8952385(tbl_SerializeFromObject_TD_9663276_input, tbl_Filter_TD_8952385_output);
    gettimeofday(&tv_r_Filter_8_166848_e, 0);

    struct timeval tv_r_JOIN_INNER_8_671468_s, tv_r_JOIN_INNER_8_671468_e;
    gettimeofday(&tv_r_JOIN_INNER_8_671468_s, 0);
    SW_JOIN_INNER_TD_8323755(tbl_Filter_TD_9868278_output, tbl_Filter_TD_9547949_output, tbl_JOIN_INNER_TD_8323755_output);
    gettimeofday(&tv_r_JOIN_INNER_8_671468_e, 0);

    struct timeval tv_r_Filter_7_230861_s, tv_r_Filter_7_230861_e;
    gettimeofday(&tv_r_Filter_7_230861_s, 0);
    SW_Filter_TD_7919637(tbl_SerializeFromObject_TD_8535850_input, tbl_Filter_TD_7919637_output);
    gettimeofday(&tv_r_Filter_7_230861_e, 0);

    struct timeval tv_r_JOIN_INNER_7_842040_s, tv_r_JOIN_INNER_7_842040_e;
    gettimeofday(&tv_r_JOIN_INNER_7_842040_s, 0);
    SW_JOIN_INNER_TD_720595(tbl_JOIN_INNER_TD_8323755_output, tbl_Filter_TD_8952385_output, tbl_JOIN_INNER_TD_720595_output);
    gettimeofday(&tv_r_JOIN_INNER_7_842040_e, 0);

    struct timeval tv_r_Filter_6_877342_s, tv_r_Filter_6_877342_e;
    gettimeofday(&tv_r_Filter_6_877342_s, 0);
    SW_Filter_TD_6913439(tbl_SerializeFromObject_TD_7306681_input, tbl_Filter_TD_6913439_output);
    gettimeofday(&tv_r_Filter_6_877342_e, 0);

    struct timeval tv_r_JOIN_INNER_6_877327_s, tv_r_JOIN_INNER_6_877327_e;
    gettimeofday(&tv_r_JOIN_INNER_6_877327_s, 0);
    SW_JOIN_INNER_TD_6542(tbl_JOIN_INNER_TD_720595_output, tbl_Filter_TD_7919637_output, tbl_JOIN_INNER_TD_6542_output);
    gettimeofday(&tv_r_JOIN_INNER_6_877327_e, 0);

    struct timeval tv_r_JOIN_INNER_5_535831_s, tv_r_JOIN_INNER_5_535831_e;
    gettimeofday(&tv_r_JOIN_INNER_5_535831_s, 0);
    SW_JOIN_INNER_TD_576744(tbl_JOIN_INNER_TD_6542_output, tbl_Filter_TD_6913439_output, tbl_JOIN_INNER_TD_576744_output);
    gettimeofday(&tv_r_JOIN_INNER_5_535831_e, 0);

    struct timeval tv_r_Project_4_972929_s, tv_r_Project_4_972929_e;
    gettimeofday(&tv_r_Project_4_972929_s, 0);
    SW_Project_TD_4847082(tbl_JOIN_INNER_TD_576744_output, tbl_Project_TD_4847082_output);
    gettimeofday(&tv_r_Project_4_972929_e, 0);

    struct timeval tv_r_Aggregate_3_873979_s, tv_r_Aggregate_3_873979_e;
    gettimeofday(&tv_r_Aggregate_3_873979_s, 0);
    SW_Aggregate_TD_381901(tbl_Project_TD_4847082_output, tbl_Aggregate_TD_381901_output);
    gettimeofday(&tv_r_Aggregate_3_873979_e, 0);

    struct timeval tv_r_Sort_2_518127_s, tv_r_Sort_2_518127_e;
    gettimeofday(&tv_r_Sort_2_518127_s, 0);
    SW_Sort_TD_2364931(tbl_Aggregate_TD_381901_output, tbl_Sort_TD_2364931_output);
    gettimeofday(&tv_r_Sort_2_518127_e, 0);

    struct timeval tv_r_LocalLimit_1_352617_s, tv_r_LocalLimit_1_352617_e;
    gettimeofday(&tv_r_LocalLimit_1_352617_s, 0);
    SW_LocalLimit_TD_1392273(tbl_Sort_TD_2364931_output, tbl_LocalLimit_TD_1392273_output);
    gettimeofday(&tv_r_LocalLimit_1_352617_e, 0);

    struct timeval tv_r_GlobalLimit_0_166206_s, tv_r_GlobalLimit_0_166206_e;
    gettimeofday(&tv_r_GlobalLimit_0_166206_s, 0);
    SW_GlobalLimit_TD_0305456(tbl_LocalLimit_TD_1392273_output, tbl_GlobalLimit_TD_0305456_output);
    gettimeofday(&tv_r_GlobalLimit_0_166206_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_84468_s, &tv_r_Filter_9_84468_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10173132_input: " << tbl_SerializeFromObject_TD_10173132_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_158583_s, &tv_r_Filter_9_158583_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10804530_input: " << tbl_SerializeFromObject_TD_10804530_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_166848_s, &tv_r_Filter_8_166848_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9663276_input: " << tbl_SerializeFromObject_TD_9663276_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_671468_s, &tv_r_JOIN_INNER_8_671468_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9868278_output: " << tbl_Filter_TD_9868278_output.getNumRow() << " " << "tbl_Filter_TD_9547949_output: " << tbl_Filter_TD_9547949_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_230861_s, &tv_r_Filter_7_230861_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8535850_input: " << tbl_SerializeFromObject_TD_8535850_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_842040_s, &tv_r_JOIN_INNER_7_842040_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8323755_output: " << tbl_JOIN_INNER_TD_8323755_output.getNumRow() << " " << "tbl_Filter_TD_8952385_output: " << tbl_Filter_TD_8952385_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_877342_s, &tv_r_Filter_6_877342_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7306681_input: " << tbl_SerializeFromObject_TD_7306681_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_877327_s, &tv_r_JOIN_INNER_6_877327_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_720595_output: " << tbl_JOIN_INNER_TD_720595_output.getNumRow() << " " << "tbl_Filter_TD_7919637_output: " << tbl_Filter_TD_7919637_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_535831_s, &tv_r_JOIN_INNER_5_535831_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6542_output: " << tbl_JOIN_INNER_TD_6542_output.getNumRow() << " " << "tbl_Filter_TD_6913439_output: " << tbl_Filter_TD_6913439_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_972929_s, &tv_r_Project_4_972929_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_576744_output: " << tbl_JOIN_INNER_TD_576744_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_873979_s, &tv_r_Aggregate_3_873979_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4847082_output: " << tbl_Project_TD_4847082_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_518127_s, &tv_r_Sort_2_518127_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_381901_output: " << tbl_Aggregate_TD_381901_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_352617_s, &tv_r_LocalLimit_1_352617_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2364931_output: " << tbl_Sort_TD_2364931_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_166206_s, &tv_r_GlobalLimit_0_166206_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1392273_output: " << tbl_LocalLimit_TD_1392273_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.97296137 * 1000 << "ms" << std::endl; 
    return 0; 
}
