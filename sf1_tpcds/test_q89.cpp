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

#include "cfgFunc_q89.hpp" 
#include "q89.hpp" 

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
    std::cout << "NOTE:running query #89\n."; 
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
    Table tbl_GlobalLimit_TD_064676_output("tbl_GlobalLimit_TD_064676_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_064676_output.allocateHost();
    Table tbl_LocalLimit_TD_1656345_output("tbl_LocalLimit_TD_1656345_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1656345_output.allocateHost();
    Table tbl_Sort_TD_2907599_output("tbl_Sort_TD_2907599_output", 6100000, 8, "");
    tbl_Sort_TD_2907599_output.allocateHost();
    Table tbl_Filter_TD_3718202_output("tbl_Filter_TD_3718202_output", 6100000, 8, "");
    tbl_Filter_TD_3718202_output.allocateHost();
    Table tbl_Window_TD_4433386_output("tbl_Window_TD_4433386_output", 6100000, 9, "");
    tbl_Window_TD_4433386_output.allocateHost();
    Table tbl_Aggregate_TD_5781019_output("tbl_Aggregate_TD_5781019_output", 6100000, 8, "");
    tbl_Aggregate_TD_5781019_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6970620_output("tbl_JOIN_INNER_TD_6970620_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_6970620_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7657602_output("tbl_JOIN_INNER_TD_7657602_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7657602_output.allocateHost();
    Table tbl_Filter_TD_7740394_output("tbl_Filter_TD_7740394_output", 6100000, 3, "");
    tbl_Filter_TD_7740394_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8760587_output("tbl_JOIN_INNER_TD_8760587_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8760587_output.allocateHost();
    Table tbl_Filter_TD_8806218_output("tbl_Filter_TD_8806218_output", 6100000, 2, "");
    tbl_Filter_TD_8806218_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8988902_input;
    tbl_SerializeFromObject_TD_8988902_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8988902_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8988902_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8988902_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8988902_input.allocateHost();
    tbl_SerializeFromObject_TD_8988902_input.loadHost();
    Table tbl_Filter_TD_9465771_output("tbl_Filter_TD_9465771_output", 6100000, 4, "");
    tbl_Filter_TD_9465771_output.allocateHost();
    Table tbl_Filter_TD_9859584_output("tbl_Filter_TD_9859584_output", 6100000, 4, "");
    tbl_Filter_TD_9859584_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9292134_input;
    tbl_SerializeFromObject_TD_9292134_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9292134_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9292134_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9292134_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9292134_input.allocateHost();
    tbl_SerializeFromObject_TD_9292134_input.loadHost();
    Table tbl_SerializeFromObject_TD_10773671_input;
    tbl_SerializeFromObject_TD_10773671_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10773671_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10773671_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10773671_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10773671_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10773671_input.allocateHost();
    tbl_SerializeFromObject_TD_10773671_input.loadHost();
    Table tbl_SerializeFromObject_TD_10347761_input;
    tbl_SerializeFromObject_TD_10347761_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10347761_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10347761_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10347761_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10347761_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10347761_input.allocateHost();
    tbl_SerializeFromObject_TD_10347761_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_668406_s, tv_r_Filter_9_668406_e;
    gettimeofday(&tv_r_Filter_9_668406_s, 0);
    SW_Filter_TD_9859584(tbl_SerializeFromObject_TD_10347761_input, tbl_Filter_TD_9859584_output);
    gettimeofday(&tv_r_Filter_9_668406_e, 0);

    struct timeval tv_r_Filter_9_28691_s, tv_r_Filter_9_28691_e;
    gettimeofday(&tv_r_Filter_9_28691_s, 0);
    SW_Filter_TD_9465771(tbl_SerializeFromObject_TD_10773671_input, tbl_Filter_TD_9465771_output);
    gettimeofday(&tv_r_Filter_9_28691_e, 0);

    struct timeval tv_r_Filter_8_457429_s, tv_r_Filter_8_457429_e;
    gettimeofday(&tv_r_Filter_8_457429_s, 0);
    SW_Filter_TD_8806218(tbl_SerializeFromObject_TD_9292134_input, tbl_Filter_TD_8806218_output);
    gettimeofday(&tv_r_Filter_8_457429_e, 0);

    struct timeval tv_r_JOIN_INNER_8_29215_s, tv_r_JOIN_INNER_8_29215_e;
    gettimeofday(&tv_r_JOIN_INNER_8_29215_s, 0);
    SW_JOIN_INNER_TD_8760587(tbl_Filter_TD_9465771_output, tbl_Filter_TD_9859584_output, tbl_JOIN_INNER_TD_8760587_output);
    gettimeofday(&tv_r_JOIN_INNER_8_29215_e, 0);

    struct timeval tv_r_Filter_7_142989_s, tv_r_Filter_7_142989_e;
    gettimeofday(&tv_r_Filter_7_142989_s, 0);
    SW_Filter_TD_7740394(tbl_SerializeFromObject_TD_8988902_input, tbl_Filter_TD_7740394_output);
    gettimeofday(&tv_r_Filter_7_142989_e, 0);

    struct timeval tv_r_JOIN_INNER_7_822769_s, tv_r_JOIN_INNER_7_822769_e;
    gettimeofday(&tv_r_JOIN_INNER_7_822769_s, 0);
    SW_JOIN_INNER_TD_7657602(tbl_JOIN_INNER_TD_8760587_output, tbl_Filter_TD_8806218_output, tbl_JOIN_INNER_TD_7657602_output);
    gettimeofday(&tv_r_JOIN_INNER_7_822769_e, 0);

    struct timeval tv_r_JOIN_INNER_6_740612_s, tv_r_JOIN_INNER_6_740612_e;
    gettimeofday(&tv_r_JOIN_INNER_6_740612_s, 0);
    SW_JOIN_INNER_TD_6970620(tbl_JOIN_INNER_TD_7657602_output, tbl_Filter_TD_7740394_output, tbl_JOIN_INNER_TD_6970620_output);
    gettimeofday(&tv_r_JOIN_INNER_6_740612_e, 0);

    struct timeval tv_r_Aggregate_5_198030_s, tv_r_Aggregate_5_198030_e;
    gettimeofday(&tv_r_Aggregate_5_198030_s, 0);
    SW_Aggregate_TD_5781019(tbl_JOIN_INNER_TD_6970620_output, tbl_Aggregate_TD_5781019_output);
    gettimeofday(&tv_r_Aggregate_5_198030_e, 0);

    struct timeval tv_r_Window_4_292065_s, tv_r_Window_4_292065_e;
    gettimeofday(&tv_r_Window_4_292065_s, 0);
    SW_Window_TD_4433386(tbl_Aggregate_TD_5781019_output, tbl_Window_TD_4433386_output);
    gettimeofday(&tv_r_Window_4_292065_e, 0);

    struct timeval tv_r_Filter_3_352492_s, tv_r_Filter_3_352492_e;
    gettimeofday(&tv_r_Filter_3_352492_s, 0);
    SW_Filter_TD_3718202(tbl_Window_TD_4433386_output, tbl_Filter_TD_3718202_output);
    gettimeofday(&tv_r_Filter_3_352492_e, 0);

    struct timeval tv_r_Sort_2_92717_s, tv_r_Sort_2_92717_e;
    gettimeofday(&tv_r_Sort_2_92717_s, 0);
    SW_Sort_TD_2907599(tbl_Filter_TD_3718202_output, tbl_Sort_TD_2907599_output);
    gettimeofday(&tv_r_Sort_2_92717_e, 0);

    struct timeval tv_r_LocalLimit_1_748306_s, tv_r_LocalLimit_1_748306_e;
    gettimeofday(&tv_r_LocalLimit_1_748306_s, 0);
    SW_LocalLimit_TD_1656345(tbl_Sort_TD_2907599_output, tbl_LocalLimit_TD_1656345_output);
    gettimeofday(&tv_r_LocalLimit_1_748306_e, 0);

    struct timeval tv_r_GlobalLimit_0_583621_s, tv_r_GlobalLimit_0_583621_e;
    gettimeofday(&tv_r_GlobalLimit_0_583621_s, 0);
    SW_GlobalLimit_TD_064676(tbl_LocalLimit_TD_1656345_output, tbl_GlobalLimit_TD_064676_output);
    gettimeofday(&tv_r_GlobalLimit_0_583621_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_668406_s, &tv_r_Filter_9_668406_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10347761_input: " << tbl_SerializeFromObject_TD_10347761_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_28691_s, &tv_r_Filter_9_28691_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10773671_input: " << tbl_SerializeFromObject_TD_10773671_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_457429_s, &tv_r_Filter_8_457429_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9292134_input: " << tbl_SerializeFromObject_TD_9292134_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_29215_s, &tv_r_JOIN_INNER_8_29215_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9465771_output: " << tbl_Filter_TD_9465771_output.getNumRow() << " " << "tbl_Filter_TD_9859584_output: " << tbl_Filter_TD_9859584_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_142989_s, &tv_r_Filter_7_142989_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8988902_input: " << tbl_SerializeFromObject_TD_8988902_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_822769_s, &tv_r_JOIN_INNER_7_822769_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8760587_output: " << tbl_JOIN_INNER_TD_8760587_output.getNumRow() << " " << "tbl_Filter_TD_8806218_output: " << tbl_Filter_TD_8806218_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_740612_s, &tv_r_JOIN_INNER_6_740612_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7657602_output: " << tbl_JOIN_INNER_TD_7657602_output.getNumRow() << " " << "tbl_Filter_TD_7740394_output: " << tbl_Filter_TD_7740394_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_198030_s, &tv_r_Aggregate_5_198030_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6970620_output: " << tbl_JOIN_INNER_TD_6970620_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_292065_s, &tv_r_Window_4_292065_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5781019_output: " << tbl_Aggregate_TD_5781019_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_352492_s, &tv_r_Filter_3_352492_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4433386_output: " << tbl_Window_TD_4433386_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_92717_s, &tv_r_Sort_2_92717_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3718202_output: " << tbl_Filter_TD_3718202_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_748306_s, &tv_r_LocalLimit_1_748306_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2907599_output: " << tbl_Sort_TD_2907599_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_583621_s, &tv_r_GlobalLimit_0_583621_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1656345_output: " << tbl_LocalLimit_TD_1656345_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.648912 * 1000 << "ms" << std::endl; 
    return 0; 
}
