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

#include "cfgFunc_q98.hpp" 
#include "q98.hpp" 

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
    std::cout << "NOTE:running query #98\n."; 
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
    Table tbl_Sort_TD_0716650_output("tbl_Sort_TD_0716650_output", 6100000, 7, "");
    tbl_Sort_TD_0716650_output.allocateHost();
    Table tbl_Project_TD_1941039_output("tbl_Project_TD_1941039_output", 6100000, 7, "");
    tbl_Project_TD_1941039_output.allocateHost();
    Table tbl_Window_TD_280485_output("tbl_Window_TD_280485_output", 6100000, 9, "");
    tbl_Window_TD_280485_output.allocateHost();
    Table tbl_Aggregate_TD_3985290_output("tbl_Aggregate_TD_3985290_output", 6100000, 8, "");
    tbl_Aggregate_TD_3985290_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4246407_output("tbl_JOIN_INNER_TD_4246407_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4246407_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5456923_output("tbl_JOIN_INNER_TD_5456923_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5456923_output.allocateHost();
    Table tbl_Filter_TD_5924949_output("tbl_Filter_TD_5924949_output", 6100000, 1, "");
    tbl_Filter_TD_5924949_output.allocateHost();
    Table tbl_Filter_TD_6477952_output("tbl_Filter_TD_6477952_output", 6100000, 3, "");
    tbl_Filter_TD_6477952_output.allocateHost();
    Table tbl_Filter_TD_6325510_output("tbl_Filter_TD_6325510_output", 6100000, 6, "");
    tbl_Filter_TD_6325510_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6154996_input;
    tbl_SerializeFromObject_TD_6154996_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6154996_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6154996_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_6154996_input.allocateHost();
    tbl_SerializeFromObject_TD_6154996_input.loadHost();
    Table tbl_SerializeFromObject_TD_7319780_input;
    tbl_SerializeFromObject_TD_7319780_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7319780_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7319780_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_7319780_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_7319780_input.allocateHost();
    tbl_SerializeFromObject_TD_7319780_input.loadHost();
    Table tbl_SerializeFromObject_TD_7969726_input;
    tbl_SerializeFromObject_TD_7969726_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_7969726_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7969726_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7969726_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7969726_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_7969726_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7969726_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7969726_input.allocateHost();
    tbl_SerializeFromObject_TD_7969726_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_304917_s, tv_r_Filter_6_304917_e;
    gettimeofday(&tv_r_Filter_6_304917_s, 0);
    SW_Filter_TD_6325510(tbl_SerializeFromObject_TD_7969726_input, tbl_Filter_TD_6325510_output);
    gettimeofday(&tv_r_Filter_6_304917_e, 0);

    struct timeval tv_r_Filter_6_778396_s, tv_r_Filter_6_778396_e;
    gettimeofday(&tv_r_Filter_6_778396_s, 0);
    SW_Filter_TD_6477952(tbl_SerializeFromObject_TD_7319780_input, tbl_Filter_TD_6477952_output);
    gettimeofday(&tv_r_Filter_6_778396_e, 0);

    struct timeval tv_r_Filter_5_821002_s, tv_r_Filter_5_821002_e;
    gettimeofday(&tv_r_Filter_5_821002_s, 0);
    SW_Filter_TD_5924949(tbl_SerializeFromObject_TD_6154996_input, tbl_Filter_TD_5924949_output);
    gettimeofday(&tv_r_Filter_5_821002_e, 0);

    struct timeval tv_r_JOIN_INNER_5_903542_s, tv_r_JOIN_INNER_5_903542_e;
    gettimeofday(&tv_r_JOIN_INNER_5_903542_s, 0);
    SW_JOIN_INNER_TD_5456923(tbl_Filter_TD_6477952_output, tbl_Filter_TD_6325510_output, tbl_JOIN_INNER_TD_5456923_output);
    gettimeofday(&tv_r_JOIN_INNER_5_903542_e, 0);

    struct timeval tv_r_JOIN_INNER_4_75238_s, tv_r_JOIN_INNER_4_75238_e;
    gettimeofday(&tv_r_JOIN_INNER_4_75238_s, 0);
    SW_JOIN_INNER_TD_4246407(tbl_JOIN_INNER_TD_5456923_output, tbl_Filter_TD_5924949_output, tbl_JOIN_INNER_TD_4246407_output);
    gettimeofday(&tv_r_JOIN_INNER_4_75238_e, 0);

    struct timeval tv_r_Aggregate_3_948183_s, tv_r_Aggregate_3_948183_e;
    gettimeofday(&tv_r_Aggregate_3_948183_s, 0);
    SW_Aggregate_TD_3985290(tbl_JOIN_INNER_TD_4246407_output, tbl_Aggregate_TD_3985290_output);
    gettimeofday(&tv_r_Aggregate_3_948183_e, 0);

    struct timeval tv_r_Window_2_648385_s, tv_r_Window_2_648385_e;
    gettimeofday(&tv_r_Window_2_648385_s, 0);
    SW_Window_TD_280485(tbl_Aggregate_TD_3985290_output, tbl_Window_TD_280485_output);
    gettimeofday(&tv_r_Window_2_648385_e, 0);

    struct timeval tv_r_Project_1_148086_s, tv_r_Project_1_148086_e;
    gettimeofday(&tv_r_Project_1_148086_s, 0);
    SW_Project_TD_1941039(tbl_Window_TD_280485_output, tbl_Project_TD_1941039_output);
    gettimeofday(&tv_r_Project_1_148086_e, 0);

    struct timeval tv_r_Sort_0_541341_s, tv_r_Sort_0_541341_e;
    gettimeofday(&tv_r_Sort_0_541341_s, 0);
    SW_Sort_TD_0716650(tbl_Project_TD_1941039_output, tbl_Sort_TD_0716650_output);
    gettimeofday(&tv_r_Sort_0_541341_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_304917_s, &tv_r_Filter_6_304917_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7969726_input: " << tbl_SerializeFromObject_TD_7969726_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_778396_s, &tv_r_Filter_6_778396_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7319780_input: " << tbl_SerializeFromObject_TD_7319780_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_821002_s, &tv_r_Filter_5_821002_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6154996_input: " << tbl_SerializeFromObject_TD_6154996_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_903542_s, &tv_r_JOIN_INNER_5_903542_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6477952_output: " << tbl_Filter_TD_6477952_output.getNumRow() << " " << "tbl_Filter_TD_6325510_output: " << tbl_Filter_TD_6325510_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_75238_s, &tv_r_JOIN_INNER_4_75238_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5456923_output: " << tbl_JOIN_INNER_TD_5456923_output.getNumRow() << " " << "tbl_Filter_TD_5924949_output: " << tbl_Filter_TD_5924949_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_948183_s, &tv_r_Aggregate_3_948183_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4246407_output: " << tbl_JOIN_INNER_TD_4246407_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_2: " << tvdiff(&tv_r_Window_2_648385_s, &tv_r_Window_2_648385_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3985290_output: " << tbl_Aggregate_TD_3985290_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_148086_s, &tv_r_Project_1_148086_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_280485_output: " << tbl_Window_TD_280485_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_541341_s, &tv_r_Sort_0_541341_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1941039_output: " << tbl_Project_TD_1941039_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.359518 * 1000 << "ms" << std::endl; 
    return 0; 
}
