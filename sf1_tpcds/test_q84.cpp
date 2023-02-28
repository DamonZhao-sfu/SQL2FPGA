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

#include "cfgFunc_q84.hpp" 
#include "q84.hpp" 

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
    std::cout << "NOTE:running query #84\n."; 
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
    Table tbl_GlobalLimit_TD_0706120_output("tbl_GlobalLimit_TD_0706120_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0706120_output.allocateHost();
    Table tbl_LocalLimit_TD_1221096_output("tbl_LocalLimit_TD_1221096_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1221096_output.allocateHost();
    Table tbl_Sort_TD_2641582_output("tbl_Sort_TD_2641582_output", 6100000, 3, "");
    tbl_Sort_TD_2641582_output.allocateHost();
    Table tbl_Project_TD_3769236_output("tbl_Project_TD_3769236_output", 6100000, 3, "");
    tbl_Project_TD_3769236_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4208858_output("tbl_JOIN_INNER_TD_4208858_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4208858_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5670821_output("tbl_JOIN_INNER_TD_5670821_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5670821_output.allocateHost();
    Table tbl_Filter_TD_5548983_output("tbl_Filter_TD_5548983_output", 6100000, 1, "");
    tbl_Filter_TD_5548983_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6568874_output("tbl_JOIN_INNER_TD_6568874_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6568874_output.allocateHost();
    Table tbl_Filter_TD_6497520_output("tbl_Filter_TD_6497520_output", 6100000, 1, "");
    tbl_Filter_TD_6497520_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6906673_input;
    tbl_SerializeFromObject_TD_6906673_input = Table("store_returns", store_returns_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_6906673_input.addCol("sr_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_6906673_input.allocateHost();
    tbl_SerializeFromObject_TD_6906673_input.loadHost();
    Table tbl_JOIN_INNER_TD_7311132_output("tbl_JOIN_INNER_TD_7311132_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7311132_output.allocateHost();
    Table tbl_Filter_TD_7634569_output("tbl_Filter_TD_7634569_output", 6100000, 2, "");
    tbl_Filter_TD_7634569_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7341858_input;
    tbl_SerializeFromObject_TD_7341858_input = Table("income_band", income_band_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7341858_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_7341858_input.addCol("ib_lower_bound", 4);
    tbl_SerializeFromObject_TD_7341858_input.addCol("ib_upper_bound", 4);
    tbl_SerializeFromObject_TD_7341858_input.allocateHost();
    tbl_SerializeFromObject_TD_7341858_input.loadHost();
    Table tbl_JOIN_INNER_TD_8412173_output("tbl_JOIN_INNER_TD_8412173_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8412173_output.allocateHost();
    Table tbl_Filter_TD_8859381_output("tbl_Filter_TD_8859381_output", 6100000, 1, "");
    tbl_Filter_TD_8859381_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8261768_input;
    tbl_SerializeFromObject_TD_8261768_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8261768_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_8261768_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_8261768_input.allocateHost();
    tbl_SerializeFromObject_TD_8261768_input.loadHost();
    Table tbl_Filter_TD_9572026_output("tbl_Filter_TD_9572026_output", 6100000, 6, "");
    tbl_Filter_TD_9572026_output.allocateHost();
    Table tbl_Filter_TD_9910946_output("tbl_Filter_TD_9910946_output", 6100000, 1, "");
    tbl_Filter_TD_9910946_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9392656_input;
    tbl_SerializeFromObject_TD_9392656_input = Table("customer_demographics", customer_demographics_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_9392656_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9392656_input.allocateHost();
    tbl_SerializeFromObject_TD_9392656_input.loadHost();
    Table tbl_SerializeFromObject_TD_10726741_input;
    tbl_SerializeFromObject_TD_10726741_input = Table("customer", customer_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_10726741_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10726741_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_10726741_input.addCol("c_current_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_10726741_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_10726741_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10726741_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10726741_input.allocateHost();
    tbl_SerializeFromObject_TD_10726741_input.loadHost();
    Table tbl_SerializeFromObject_TD_10659891_input;
    tbl_SerializeFromObject_TD_10659891_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10659891_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10659891_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10659891_input.allocateHost();
    tbl_SerializeFromObject_TD_10659891_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_16400_s, tv_r_Filter_9_16400_e;
    gettimeofday(&tv_r_Filter_9_16400_s, 0);
    SW_Filter_TD_9910946(tbl_SerializeFromObject_TD_10659891_input, tbl_Filter_TD_9910946_output);
    gettimeofday(&tv_r_Filter_9_16400_e, 0);

    struct timeval tv_r_Filter_9_514399_s, tv_r_Filter_9_514399_e;
    gettimeofday(&tv_r_Filter_9_514399_s, 0);
    SW_Filter_TD_9572026(tbl_SerializeFromObject_TD_10726741_input, tbl_Filter_TD_9572026_output);
    gettimeofday(&tv_r_Filter_9_514399_e, 0);

    struct timeval tv_r_Filter_8_774834_s, tv_r_Filter_8_774834_e;
    gettimeofday(&tv_r_Filter_8_774834_s, 0);
    SW_Filter_TD_8859381(tbl_SerializeFromObject_TD_9392656_input, tbl_Filter_TD_8859381_output);
    gettimeofday(&tv_r_Filter_8_774834_e, 0);

    struct timeval tv_r_JOIN_INNER_8_124745_s, tv_r_JOIN_INNER_8_124745_e;
    gettimeofday(&tv_r_JOIN_INNER_8_124745_s, 0);
    SW_JOIN_INNER_TD_8412173(tbl_Filter_TD_9572026_output, tbl_Filter_TD_9910946_output, tbl_JOIN_INNER_TD_8412173_output);
    gettimeofday(&tv_r_JOIN_INNER_8_124745_e, 0);

    struct timeval tv_r_Filter_7_252759_s, tv_r_Filter_7_252759_e;
    gettimeofday(&tv_r_Filter_7_252759_s, 0);
    SW_Filter_TD_7634569(tbl_SerializeFromObject_TD_8261768_input, tbl_Filter_TD_7634569_output);
    gettimeofday(&tv_r_Filter_7_252759_e, 0);

    struct timeval tv_r_JOIN_INNER_7_459085_s, tv_r_JOIN_INNER_7_459085_e;
    gettimeofday(&tv_r_JOIN_INNER_7_459085_s, 0);
    SW_JOIN_INNER_TD_7311132(tbl_JOIN_INNER_TD_8412173_output, tbl_Filter_TD_8859381_output, tbl_JOIN_INNER_TD_7311132_output);
    gettimeofday(&tv_r_JOIN_INNER_7_459085_e, 0);

    struct timeval tv_r_Filter_6_92113_s, tv_r_Filter_6_92113_e;
    gettimeofday(&tv_r_Filter_6_92113_s, 0);
    SW_Filter_TD_6497520(tbl_SerializeFromObject_TD_7341858_input, tbl_Filter_TD_6497520_output);
    gettimeofday(&tv_r_Filter_6_92113_e, 0);

    struct timeval tv_r_JOIN_INNER_6_423227_s, tv_r_JOIN_INNER_6_423227_e;
    gettimeofday(&tv_r_JOIN_INNER_6_423227_s, 0);
    SW_JOIN_INNER_TD_6568874(tbl_JOIN_INNER_TD_7311132_output, tbl_Filter_TD_7634569_output, tbl_JOIN_INNER_TD_6568874_output);
    gettimeofday(&tv_r_JOIN_INNER_6_423227_e, 0);

    struct timeval tv_r_Filter_5_658372_s, tv_r_Filter_5_658372_e;
    gettimeofday(&tv_r_Filter_5_658372_s, 0);
    SW_Filter_TD_5548983(tbl_SerializeFromObject_TD_6906673_input, tbl_Filter_TD_5548983_output);
    gettimeofday(&tv_r_Filter_5_658372_e, 0);

    struct timeval tv_r_JOIN_INNER_5_117085_s, tv_r_JOIN_INNER_5_117085_e;
    gettimeofday(&tv_r_JOIN_INNER_5_117085_s, 0);
    SW_JOIN_INNER_TD_5670821(tbl_JOIN_INNER_TD_6568874_output, tbl_Filter_TD_6497520_output, tbl_JOIN_INNER_TD_5670821_output);
    gettimeofday(&tv_r_JOIN_INNER_5_117085_e, 0);

    struct timeval tv_r_JOIN_INNER_4_735654_s, tv_r_JOIN_INNER_4_735654_e;
    gettimeofday(&tv_r_JOIN_INNER_4_735654_s, 0);
    SW_JOIN_INNER_TD_4208858(tbl_JOIN_INNER_TD_5670821_output, tbl_Filter_TD_5548983_output, tbl_JOIN_INNER_TD_4208858_output);
    gettimeofday(&tv_r_JOIN_INNER_4_735654_e, 0);

    struct timeval tv_r_Project_3_163697_s, tv_r_Project_3_163697_e;
    gettimeofday(&tv_r_Project_3_163697_s, 0);
    SW_Project_TD_3769236(tbl_JOIN_INNER_TD_4208858_output, tbl_Project_TD_3769236_output);
    gettimeofday(&tv_r_Project_3_163697_e, 0);

    struct timeval tv_r_Sort_2_730313_s, tv_r_Sort_2_730313_e;
    gettimeofday(&tv_r_Sort_2_730313_s, 0);
    SW_Sort_TD_2641582(tbl_Project_TD_3769236_output, tbl_Sort_TD_2641582_output);
    gettimeofday(&tv_r_Sort_2_730313_e, 0);

    struct timeval tv_r_LocalLimit_1_558278_s, tv_r_LocalLimit_1_558278_e;
    gettimeofday(&tv_r_LocalLimit_1_558278_s, 0);
    SW_LocalLimit_TD_1221096(tbl_Sort_TD_2641582_output, tbl_LocalLimit_TD_1221096_output);
    gettimeofday(&tv_r_LocalLimit_1_558278_e, 0);

    struct timeval tv_r_GlobalLimit_0_589187_s, tv_r_GlobalLimit_0_589187_e;
    gettimeofday(&tv_r_GlobalLimit_0_589187_s, 0);
    SW_GlobalLimit_TD_0706120(tbl_LocalLimit_TD_1221096_output, tbl_GlobalLimit_TD_0706120_output);
    gettimeofday(&tv_r_GlobalLimit_0_589187_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_16400_s, &tv_r_Filter_9_16400_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10659891_input: " << tbl_SerializeFromObject_TD_10659891_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_514399_s, &tv_r_Filter_9_514399_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10726741_input: " << tbl_SerializeFromObject_TD_10726741_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_774834_s, &tv_r_Filter_8_774834_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9392656_input: " << tbl_SerializeFromObject_TD_9392656_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_124745_s, &tv_r_JOIN_INNER_8_124745_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9572026_output: " << tbl_Filter_TD_9572026_output.getNumRow() << " " << "tbl_Filter_TD_9910946_output: " << tbl_Filter_TD_9910946_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_252759_s, &tv_r_Filter_7_252759_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8261768_input: " << tbl_SerializeFromObject_TD_8261768_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_459085_s, &tv_r_JOIN_INNER_7_459085_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8412173_output: " << tbl_JOIN_INNER_TD_8412173_output.getNumRow() << " " << "tbl_Filter_TD_8859381_output: " << tbl_Filter_TD_8859381_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_92113_s, &tv_r_Filter_6_92113_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7341858_input: " << tbl_SerializeFromObject_TD_7341858_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_423227_s, &tv_r_JOIN_INNER_6_423227_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7311132_output: " << tbl_JOIN_INNER_TD_7311132_output.getNumRow() << " " << "tbl_Filter_TD_7634569_output: " << tbl_Filter_TD_7634569_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_658372_s, &tv_r_Filter_5_658372_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6906673_input: " << tbl_SerializeFromObject_TD_6906673_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_117085_s, &tv_r_JOIN_INNER_5_117085_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6568874_output: " << tbl_JOIN_INNER_TD_6568874_output.getNumRow() << " " << "tbl_Filter_TD_6497520_output: " << tbl_Filter_TD_6497520_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_735654_s, &tv_r_JOIN_INNER_4_735654_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5670821_output: " << tbl_JOIN_INNER_TD_5670821_output.getNumRow() << " " << "tbl_Filter_TD_5548983_output: " << tbl_Filter_TD_5548983_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_163697_s, &tv_r_Project_3_163697_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4208858_output: " << tbl_JOIN_INNER_TD_4208858_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_730313_s, &tv_r_Sort_2_730313_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3769236_output: " << tbl_Project_TD_3769236_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_558278_s, &tv_r_LocalLimit_1_558278_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2641582_output: " << tbl_Sort_TD_2641582_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_589187_s, &tv_r_GlobalLimit_0_589187_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1221096_output: " << tbl_LocalLimit_TD_1221096_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.5276613 * 1000 << "ms" << std::endl; 
    return 0; 
}
