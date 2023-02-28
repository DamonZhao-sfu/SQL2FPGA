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

#include "cfgFunc_q37.hpp" 
#include "q37.hpp" 

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
    std::cout << "NOTE:running query #37\n."; 
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
    Table tbl_GlobalLimit_TD_067936_output("tbl_GlobalLimit_TD_067936_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_067936_output.allocateHost();
    Table tbl_LocalLimit_TD_1707610_output("tbl_LocalLimit_TD_1707610_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1707610_output.allocateHost();
    Table tbl_Sort_TD_2478764_output("tbl_Sort_TD_2478764_output", 6100000, 3, "");
    tbl_Sort_TD_2478764_output.allocateHost();
    Table tbl_Aggregate_TD_3295214_output("tbl_Aggregate_TD_3295214_output", 6100000, 3, "");
    tbl_Aggregate_TD_3295214_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4932885_output("tbl_JOIN_INNER_TD_4932885_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4932885_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5580925_output("tbl_JOIN_INNER_TD_5580925_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5580925_output.allocateHost();
    Table tbl_Filter_TD_5253567_output("tbl_Filter_TD_5253567_output", 6100000, 1, "");
    tbl_Filter_TD_5253567_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6879871_output("tbl_JOIN_INNER_TD_6879871_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6879871_output.allocateHost();
    Table tbl_Filter_TD_611968_output("tbl_Filter_TD_611968_output", 6100000, 1, "");
    tbl_Filter_TD_611968_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6958103_input;
    tbl_SerializeFromObject_TD_6958103_input = Table("catalog_sales", catalog_sales_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_6958103_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_6958103_input.allocateHost();
    tbl_SerializeFromObject_TD_6958103_input.loadHost();
    Table tbl_Filter_TD_7777887_output("tbl_Filter_TD_7777887_output", 6100000, 4, "");
    tbl_Filter_TD_7777887_output.allocateHost();
    Table tbl_Filter_TD_7787454_output("tbl_Filter_TD_7787454_output", 6100000, 2, "");
    tbl_Filter_TD_7787454_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7728813_input;
    tbl_SerializeFromObject_TD_7728813_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7728813_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7728813_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7728813_input.allocateHost();
    tbl_SerializeFromObject_TD_7728813_input.loadHost();
    Table tbl_SerializeFromObject_TD_8284013_input;
    tbl_SerializeFromObject_TD_8284013_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8284013_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8284013_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8284013_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8284013_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_8284013_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_8284013_input.allocateHost();
    tbl_SerializeFromObject_TD_8284013_input.loadHost();
    Table tbl_SerializeFromObject_TD_8426507_input;
    tbl_SerializeFromObject_TD_8426507_input = Table("inventory", inventory_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8426507_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_8426507_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_8426507_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_8426507_input.allocateHost();
    tbl_SerializeFromObject_TD_8426507_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_108101_s, tv_r_Filter_7_108101_e;
    gettimeofday(&tv_r_Filter_7_108101_s, 0);
    SW_Filter_TD_7787454(tbl_SerializeFromObject_TD_8426507_input, tbl_Filter_TD_7787454_output);
    gettimeofday(&tv_r_Filter_7_108101_e, 0);

    struct timeval tv_r_Filter_7_159332_s, tv_r_Filter_7_159332_e;
    gettimeofday(&tv_r_Filter_7_159332_s, 0);
    SW_Filter_TD_7777887(tbl_SerializeFromObject_TD_8284013_input, tbl_Filter_TD_7777887_output);
    gettimeofday(&tv_r_Filter_7_159332_e, 0);

    struct timeval tv_r_Filter_6_294461_s, tv_r_Filter_6_294461_e;
    gettimeofday(&tv_r_Filter_6_294461_s, 0);
    SW_Filter_TD_611968(tbl_SerializeFromObject_TD_7728813_input, tbl_Filter_TD_611968_output);
    gettimeofday(&tv_r_Filter_6_294461_e, 0);

    struct timeval tv_r_JOIN_INNER_6_275149_s, tv_r_JOIN_INNER_6_275149_e;
    gettimeofday(&tv_r_JOIN_INNER_6_275149_s, 0);
    SW_JOIN_INNER_TD_6879871(tbl_Filter_TD_7777887_output, tbl_Filter_TD_7787454_output, tbl_JOIN_INNER_TD_6879871_output);
    gettimeofday(&tv_r_JOIN_INNER_6_275149_e, 0);

    struct timeval tv_r_Filter_5_33377_s, tv_r_Filter_5_33377_e;
    gettimeofday(&tv_r_Filter_5_33377_s, 0);
    SW_Filter_TD_5253567(tbl_SerializeFromObject_TD_6958103_input, tbl_Filter_TD_5253567_output);
    gettimeofday(&tv_r_Filter_5_33377_e, 0);

    struct timeval tv_r_JOIN_INNER_5_932281_s, tv_r_JOIN_INNER_5_932281_e;
    gettimeofday(&tv_r_JOIN_INNER_5_932281_s, 0);
    SW_JOIN_INNER_TD_5580925(tbl_JOIN_INNER_TD_6879871_output, tbl_Filter_TD_611968_output, tbl_JOIN_INNER_TD_5580925_output);
    gettimeofday(&tv_r_JOIN_INNER_5_932281_e, 0);

    struct timeval tv_r_JOIN_INNER_4_918919_s, tv_r_JOIN_INNER_4_918919_e;
    gettimeofday(&tv_r_JOIN_INNER_4_918919_s, 0);
    SW_JOIN_INNER_TD_4932885(tbl_JOIN_INNER_TD_5580925_output, tbl_Filter_TD_5253567_output, tbl_JOIN_INNER_TD_4932885_output);
    gettimeofday(&tv_r_JOIN_INNER_4_918919_e, 0);

    struct timeval tv_r_Aggregate_3_357983_s, tv_r_Aggregate_3_357983_e;
    gettimeofday(&tv_r_Aggregate_3_357983_s, 0);
    SW_Aggregate_TD_3295214(tbl_JOIN_INNER_TD_4932885_output, tbl_Aggregate_TD_3295214_output);
    gettimeofday(&tv_r_Aggregate_3_357983_e, 0);

    struct timeval tv_r_Sort_2_466345_s, tv_r_Sort_2_466345_e;
    gettimeofday(&tv_r_Sort_2_466345_s, 0);
    SW_Sort_TD_2478764(tbl_Aggregate_TD_3295214_output, tbl_Sort_TD_2478764_output);
    gettimeofday(&tv_r_Sort_2_466345_e, 0);

    struct timeval tv_r_LocalLimit_1_208778_s, tv_r_LocalLimit_1_208778_e;
    gettimeofday(&tv_r_LocalLimit_1_208778_s, 0);
    SW_LocalLimit_TD_1707610(tbl_Sort_TD_2478764_output, tbl_LocalLimit_TD_1707610_output);
    gettimeofday(&tv_r_LocalLimit_1_208778_e, 0);

    struct timeval tv_r_GlobalLimit_0_413801_s, tv_r_GlobalLimit_0_413801_e;
    gettimeofday(&tv_r_GlobalLimit_0_413801_s, 0);
    SW_GlobalLimit_TD_067936(tbl_LocalLimit_TD_1707610_output, tbl_GlobalLimit_TD_067936_output);
    gettimeofday(&tv_r_GlobalLimit_0_413801_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_108101_s, &tv_r_Filter_7_108101_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8426507_input: " << tbl_SerializeFromObject_TD_8426507_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_159332_s, &tv_r_Filter_7_159332_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8284013_input: " << tbl_SerializeFromObject_TD_8284013_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_294461_s, &tv_r_Filter_6_294461_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7728813_input: " << tbl_SerializeFromObject_TD_7728813_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_275149_s, &tv_r_JOIN_INNER_6_275149_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7777887_output: " << tbl_Filter_TD_7777887_output.getNumRow() << " " << "tbl_Filter_TD_7787454_output: " << tbl_Filter_TD_7787454_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_33377_s, &tv_r_Filter_5_33377_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6958103_input: " << tbl_SerializeFromObject_TD_6958103_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_932281_s, &tv_r_JOIN_INNER_5_932281_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6879871_output: " << tbl_JOIN_INNER_TD_6879871_output.getNumRow() << " " << "tbl_Filter_TD_611968_output: " << tbl_Filter_TD_611968_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_918919_s, &tv_r_JOIN_INNER_4_918919_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5580925_output: " << tbl_JOIN_INNER_TD_5580925_output.getNumRow() << " " << "tbl_Filter_TD_5253567_output: " << tbl_Filter_TD_5253567_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_357983_s, &tv_r_Aggregate_3_357983_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4932885_output: " << tbl_JOIN_INNER_TD_4932885_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_466345_s, &tv_r_Sort_2_466345_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3295214_output: " << tbl_Aggregate_TD_3295214_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_208778_s, &tv_r_LocalLimit_1_208778_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2478764_output: " << tbl_Sort_TD_2478764_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_413801_s, &tv_r_GlobalLimit_0_413801_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1707610_output: " << tbl_LocalLimit_TD_1707610_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.9817863 * 1000 << "ms" << std::endl; 
    return 0; 
}
