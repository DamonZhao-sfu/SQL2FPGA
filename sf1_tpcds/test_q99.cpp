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

#include "cfgFunc_q99.hpp" 
#include "q99.hpp" 

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
    std::cout << "NOTE:running query #99\n."; 
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
    Table tbl_GlobalLimit_TD_0995988_output("tbl_GlobalLimit_TD_0995988_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0995988_output.allocateHost();
    Table tbl_LocalLimit_TD_1680593_output("tbl_LocalLimit_TD_1680593_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1680593_output.allocateHost();
    Table tbl_Sort_TD_236481_output("tbl_Sort_TD_236481_output", 6100000, 8, "");
    tbl_Sort_TD_236481_output.allocateHost();
    Table tbl_Aggregate_TD_3786050_output("tbl_Aggregate_TD_3786050_output", 6100000, 8, "");
    tbl_Aggregate_TD_3786050_output.allocateHost();
    Table tbl_Project_TD_4344609_output("tbl_Project_TD_4344609_output", 6100000, 5, "");
    tbl_Project_TD_4344609_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5432267_output("tbl_JOIN_INNER_TD_5432267_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5432267_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6333517_output("tbl_JOIN_INNER_TD_6333517_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6333517_output.allocateHost();
    Table tbl_Filter_TD_6392046_output("tbl_Filter_TD_6392046_output", 6100000, 1, "");
    tbl_Filter_TD_6392046_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7645148_output("tbl_JOIN_INNER_TD_7645148_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7645148_output.allocateHost();
    Table tbl_Filter_TD_7106943_output("tbl_Filter_TD_7106943_output", 6100000, 2, "");
    tbl_Filter_TD_7106943_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7295180_input;
    tbl_SerializeFromObject_TD_7295180_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7295180_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7295180_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7295180_input.allocateHost();
    tbl_SerializeFromObject_TD_7295180_input.loadHost();
    Table tbl_JOIN_INNER_TD_857892_output("tbl_JOIN_INNER_TD_857892_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_857892_output.allocateHost();
    Table tbl_Filter_TD_8207674_output("tbl_Filter_TD_8207674_output", 6100000, 2, "");
    tbl_Filter_TD_8207674_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8288659_input;
    tbl_SerializeFromObject_TD_8288659_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8288659_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_8288659_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8288659_input.allocateHost();
    tbl_SerializeFromObject_TD_8288659_input.loadHost();
    Table tbl_Filter_TD_9405265_output("tbl_Filter_TD_9405265_output", 6100000, 5, "");
    tbl_Filter_TD_9405265_output.allocateHost();
    Table tbl_Filter_TD_9121705_output("tbl_Filter_TD_9121705_output", 6100000, 2, "");
    tbl_Filter_TD_9121705_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9611360_input;
    tbl_SerializeFromObject_TD_9611360_input = Table("ship_mode", ship_mode_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9611360_input.addCol("sm_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_9611360_input.addCol("sm_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9611360_input.allocateHost();
    tbl_SerializeFromObject_TD_9611360_input.loadHost();
    Table tbl_SerializeFromObject_TD_10347627_input;
    tbl_SerializeFromObject_TD_10347627_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10347627_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10347627_input.addCol("cs_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_10347627_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_10347627_input.addCol("cs_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_10347627_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10347627_input.allocateHost();
    tbl_SerializeFromObject_TD_10347627_input.loadHost();
    Table tbl_SerializeFromObject_TD_10719958_input;
    tbl_SerializeFromObject_TD_10719958_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10719958_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10719958_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10719958_input.allocateHost();
    tbl_SerializeFromObject_TD_10719958_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_370955_s, tv_r_Filter_9_370955_e;
    gettimeofday(&tv_r_Filter_9_370955_s, 0);
    SW_Filter_TD_9121705(tbl_SerializeFromObject_TD_10719958_input, tbl_Filter_TD_9121705_output);
    gettimeofday(&tv_r_Filter_9_370955_e, 0);

    struct timeval tv_r_Filter_9_825894_s, tv_r_Filter_9_825894_e;
    gettimeofday(&tv_r_Filter_9_825894_s, 0);
    SW_Filter_TD_9405265(tbl_SerializeFromObject_TD_10347627_input, tbl_Filter_TD_9405265_output);
    gettimeofday(&tv_r_Filter_9_825894_e, 0);

    struct timeval tv_r_Filter_8_77661_s, tv_r_Filter_8_77661_e;
    gettimeofday(&tv_r_Filter_8_77661_s, 0);
    SW_Filter_TD_8207674(tbl_SerializeFromObject_TD_9611360_input, tbl_Filter_TD_8207674_output);
    gettimeofday(&tv_r_Filter_8_77661_e, 0);

    struct timeval tv_r_JOIN_INNER_8_327511_s, tv_r_JOIN_INNER_8_327511_e;
    gettimeofday(&tv_r_JOIN_INNER_8_327511_s, 0);
    SW_JOIN_INNER_TD_857892(tbl_Filter_TD_9405265_output, tbl_Filter_TD_9121705_output, tbl_JOIN_INNER_TD_857892_output);
    gettimeofday(&tv_r_JOIN_INNER_8_327511_e, 0);

    struct timeval tv_r_Filter_7_813140_s, tv_r_Filter_7_813140_e;
    gettimeofday(&tv_r_Filter_7_813140_s, 0);
    SW_Filter_TD_7106943(tbl_SerializeFromObject_TD_8288659_input, tbl_Filter_TD_7106943_output);
    gettimeofday(&tv_r_Filter_7_813140_e, 0);

    struct timeval tv_r_JOIN_INNER_7_324434_s, tv_r_JOIN_INNER_7_324434_e;
    gettimeofday(&tv_r_JOIN_INNER_7_324434_s, 0);
    SW_JOIN_INNER_TD_7645148(tbl_JOIN_INNER_TD_857892_output, tbl_Filter_TD_8207674_output, tbl_JOIN_INNER_TD_7645148_output);
    gettimeofday(&tv_r_JOIN_INNER_7_324434_e, 0);

    struct timeval tv_r_Filter_6_761568_s, tv_r_Filter_6_761568_e;
    gettimeofday(&tv_r_Filter_6_761568_s, 0);
    SW_Filter_TD_6392046(tbl_SerializeFromObject_TD_7295180_input, tbl_Filter_TD_6392046_output);
    gettimeofday(&tv_r_Filter_6_761568_e, 0);

    struct timeval tv_r_JOIN_INNER_6_99849_s, tv_r_JOIN_INNER_6_99849_e;
    gettimeofday(&tv_r_JOIN_INNER_6_99849_s, 0);
    SW_JOIN_INNER_TD_6333517(tbl_JOIN_INNER_TD_7645148_output, tbl_Filter_TD_7106943_output, tbl_JOIN_INNER_TD_6333517_output);
    gettimeofday(&tv_r_JOIN_INNER_6_99849_e, 0);

    struct timeval tv_r_JOIN_INNER_5_844766_s, tv_r_JOIN_INNER_5_844766_e;
    gettimeofday(&tv_r_JOIN_INNER_5_844766_s, 0);
    SW_JOIN_INNER_TD_5432267(tbl_JOIN_INNER_TD_6333517_output, tbl_Filter_TD_6392046_output, tbl_JOIN_INNER_TD_5432267_output);
    gettimeofday(&tv_r_JOIN_INNER_5_844766_e, 0);

    struct timeval tv_r_Project_4_806284_s, tv_r_Project_4_806284_e;
    gettimeofday(&tv_r_Project_4_806284_s, 0);
    SW_Project_TD_4344609(tbl_JOIN_INNER_TD_5432267_output, tbl_Project_TD_4344609_output);
    gettimeofday(&tv_r_Project_4_806284_e, 0);

    struct timeval tv_r_Aggregate_3_357501_s, tv_r_Aggregate_3_357501_e;
    gettimeofday(&tv_r_Aggregate_3_357501_s, 0);
    SW_Aggregate_TD_3786050(tbl_Project_TD_4344609_output, tbl_Aggregate_TD_3786050_output);
    gettimeofday(&tv_r_Aggregate_3_357501_e, 0);

    struct timeval tv_r_Sort_2_81729_s, tv_r_Sort_2_81729_e;
    gettimeofday(&tv_r_Sort_2_81729_s, 0);
    SW_Sort_TD_236481(tbl_Aggregate_TD_3786050_output, tbl_Sort_TD_236481_output);
    gettimeofday(&tv_r_Sort_2_81729_e, 0);

    struct timeval tv_r_LocalLimit_1_196125_s, tv_r_LocalLimit_1_196125_e;
    gettimeofday(&tv_r_LocalLimit_1_196125_s, 0);
    SW_LocalLimit_TD_1680593(tbl_Sort_TD_236481_output, tbl_LocalLimit_TD_1680593_output);
    gettimeofday(&tv_r_LocalLimit_1_196125_e, 0);

    struct timeval tv_r_GlobalLimit_0_719162_s, tv_r_GlobalLimit_0_719162_e;
    gettimeofday(&tv_r_GlobalLimit_0_719162_s, 0);
    SW_GlobalLimit_TD_0995988(tbl_LocalLimit_TD_1680593_output, tbl_GlobalLimit_TD_0995988_output);
    gettimeofday(&tv_r_GlobalLimit_0_719162_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_370955_s, &tv_r_Filter_9_370955_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10719958_input: " << tbl_SerializeFromObject_TD_10719958_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_825894_s, &tv_r_Filter_9_825894_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10347627_input: " << tbl_SerializeFromObject_TD_10347627_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_77661_s, &tv_r_Filter_8_77661_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9611360_input: " << tbl_SerializeFromObject_TD_9611360_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_327511_s, &tv_r_JOIN_INNER_8_327511_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9405265_output: " << tbl_Filter_TD_9405265_output.getNumRow() << " " << "tbl_Filter_TD_9121705_output: " << tbl_Filter_TD_9121705_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_813140_s, &tv_r_Filter_7_813140_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8288659_input: " << tbl_SerializeFromObject_TD_8288659_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_324434_s, &tv_r_JOIN_INNER_7_324434_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_857892_output: " << tbl_JOIN_INNER_TD_857892_output.getNumRow() << " " << "tbl_Filter_TD_8207674_output: " << tbl_Filter_TD_8207674_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_761568_s, &tv_r_Filter_6_761568_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7295180_input: " << tbl_SerializeFromObject_TD_7295180_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_99849_s, &tv_r_JOIN_INNER_6_99849_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7645148_output: " << tbl_JOIN_INNER_TD_7645148_output.getNumRow() << " " << "tbl_Filter_TD_7106943_output: " << tbl_Filter_TD_7106943_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_844766_s, &tv_r_JOIN_INNER_5_844766_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6333517_output: " << tbl_JOIN_INNER_TD_6333517_output.getNumRow() << " " << "tbl_Filter_TD_6392046_output: " << tbl_Filter_TD_6392046_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_806284_s, &tv_r_Project_4_806284_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5432267_output: " << tbl_JOIN_INNER_TD_5432267_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_357501_s, &tv_r_Aggregate_3_357501_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4344609_output: " << tbl_Project_TD_4344609_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_81729_s, &tv_r_Sort_2_81729_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3786050_output: " << tbl_Aggregate_TD_3786050_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_196125_s, &tv_r_LocalLimit_1_196125_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_236481_output: " << tbl_Sort_TD_236481_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_719162_s, &tv_r_GlobalLimit_0_719162_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1680593_output: " << tbl_LocalLimit_TD_1680593_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.0919296 * 1000 << "ms" << std::endl; 
    return 0; 
}
