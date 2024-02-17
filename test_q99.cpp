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
    // ****************************** Tables **************************** // 
    Table tbl_GlobalLimit_TD_0688_output("tbl_GlobalLimit_TD_0688_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0688_output.allocateHost();
    Table tbl_LocalLimit_TD_187_output("tbl_LocalLimit_TD_187_output", 6100000, 8, "");
    tbl_LocalLimit_TD_187_output.allocateHost();
    Table tbl_Sort_TD_2151_output("tbl_Sort_TD_2151_output", 6100000, 8, "");
    tbl_Sort_TD_2151_output.allocateHost();
    Table tbl_Aggregate_TD_3583_output("tbl_Aggregate_TD_3583_output", 6100000, 8, "");
    tbl_Aggregate_TD_3583_output.allocateHost();
    Table tbl_Project_TD_4174_output("tbl_Project_TD_4174_output", 6100000, 5, "");
    tbl_Project_TD_4174_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5896_output("tbl_JOIN_INNER_TD_5896_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5896_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6673_output("tbl_JOIN_INNER_TD_6673_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6673_output.allocateHost();
    Table tbl_Filter_TD_6984_output("tbl_Filter_TD_6984_output", 6100000, 1, "");
    tbl_Filter_TD_6984_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7651_output("tbl_JOIN_INNER_TD_7651_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7651_output.allocateHost();
    Table tbl_Filter_TD_793_output("tbl_Filter_TD_793_output", 6100000, 2, "");
    tbl_Filter_TD_793_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7621_input;
    tbl_SerializeFromObject_TD_7621_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7621_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7621_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7621_input.allocateHost();
    tbl_SerializeFromObject_TD_7621_input.loadHost();
    Table tbl_JOIN_INNER_TD_8349_output("tbl_JOIN_INNER_TD_8349_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8349_output.allocateHost();
    Table tbl_Filter_TD_8340_output("tbl_Filter_TD_8340_output", 6100000, 2, "");
    tbl_Filter_TD_8340_output.allocateHost();
    Table tbl_SerializeFromObject_TD_843_input;
    tbl_SerializeFromObject_TD_843_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_843_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_843_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_843_input.allocateHost();
    tbl_SerializeFromObject_TD_843_input.loadHost();
    Table tbl_Filter_TD_961_output("tbl_Filter_TD_961_output", 6100000, 5, "");
    tbl_Filter_TD_961_output.allocateHost();
    Table tbl_Filter_TD_9137_output("tbl_Filter_TD_9137_output", 6100000, 2, "");
    tbl_Filter_TD_9137_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9673_input;
    tbl_SerializeFromObject_TD_9673_input = Table("ship_mode", ship_mode_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9673_input.addCol("sm_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_9673_input.addCol("sm_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9673_input.allocateHost();
    tbl_SerializeFromObject_TD_9673_input.loadHost();
    Table tbl_SerializeFromObject_TD_10448_input;
    tbl_SerializeFromObject_TD_10448_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10448_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10448_input.addCol("cs_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_10448_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_10448_input.addCol("cs_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_10448_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10448_input.allocateHost();
    tbl_SerializeFromObject_TD_10448_input.loadHost();
    Table tbl_SerializeFromObject_TD_10590_input;
    tbl_SerializeFromObject_TD_10590_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10590_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10590_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10590_input.allocateHost();
    tbl_SerializeFromObject_TD_10590_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_386762_s, tv_r_Filter_9_386762_e;
    gettimeofday(&tv_r_Filter_9_386762_s, 0);
    SW_Filter_TD_9137(tbl_SerializeFromObject_TD_10590_input, tbl_Filter_TD_9137_output);
    gettimeofday(&tv_r_Filter_9_386762_e, 0);

    struct timeval tv_r_Filter_9_956933_s, tv_r_Filter_9_956933_e;
    gettimeofday(&tv_r_Filter_9_956933_s, 0);
    SW_Filter_TD_961(tbl_SerializeFromObject_TD_10448_input, tbl_Filter_TD_961_output);
    gettimeofday(&tv_r_Filter_9_956933_e, 0);

    struct timeval tv_r_Filter_8_37839_s, tv_r_Filter_8_37839_e;
    gettimeofday(&tv_r_Filter_8_37839_s, 0);
    SW_Filter_TD_8340(tbl_SerializeFromObject_TD_9673_input, tbl_Filter_TD_8340_output);
    gettimeofday(&tv_r_Filter_8_37839_e, 0);

    struct timeval tv_r_JOIN_INNER_8_734778_s, tv_r_JOIN_INNER_8_734778_e;
    gettimeofday(&tv_r_JOIN_INNER_8_734778_s, 0);
    SW_JOIN_INNER_TD_8349(tbl_Filter_TD_961_output, tbl_Filter_TD_9137_output, tbl_JOIN_INNER_TD_8349_output);
    gettimeofday(&tv_r_JOIN_INNER_8_734778_e, 0);

    struct timeval tv_r_Filter_7_546840_s, tv_r_Filter_7_546840_e;
    gettimeofday(&tv_r_Filter_7_546840_s, 0);
    SW_Filter_TD_793(tbl_SerializeFromObject_TD_843_input, tbl_Filter_TD_793_output);
    gettimeofday(&tv_r_Filter_7_546840_e, 0);

    struct timeval tv_r_JOIN_INNER_7_164433_s, tv_r_JOIN_INNER_7_164433_e;
    gettimeofday(&tv_r_JOIN_INNER_7_164433_s, 0);
    SW_JOIN_INNER_TD_7651(tbl_JOIN_INNER_TD_8349_output, tbl_Filter_TD_8340_output, tbl_JOIN_INNER_TD_7651_output);
    gettimeofday(&tv_r_JOIN_INNER_7_164433_e, 0);

    struct timeval tv_r_Filter_6_717151_s, tv_r_Filter_6_717151_e;
    gettimeofday(&tv_r_Filter_6_717151_s, 0);
    SW_Filter_TD_6984(tbl_SerializeFromObject_TD_7621_input, tbl_Filter_TD_6984_output);
    gettimeofday(&tv_r_Filter_6_717151_e, 0);

    struct timeval tv_r_JOIN_INNER_6_183645_s, tv_r_JOIN_INNER_6_183645_e;
    gettimeofday(&tv_r_JOIN_INNER_6_183645_s, 0);
    SW_JOIN_INNER_TD_6673(tbl_JOIN_INNER_TD_7651_output, tbl_Filter_TD_793_output, tbl_JOIN_INNER_TD_6673_output);
    gettimeofday(&tv_r_JOIN_INNER_6_183645_e, 0);

    struct timeval tv_r_JOIN_INNER_5_234813_s, tv_r_JOIN_INNER_5_234813_e;
    gettimeofday(&tv_r_JOIN_INNER_5_234813_s, 0);
    SW_JOIN_INNER_TD_5896(tbl_JOIN_INNER_TD_6673_output, tbl_Filter_TD_6984_output, tbl_JOIN_INNER_TD_5896_output);
    gettimeofday(&tv_r_JOIN_INNER_5_234813_e, 0);

    struct timeval tv_r_Project_4_105535_s, tv_r_Project_4_105535_e;
    gettimeofday(&tv_r_Project_4_105535_s, 0);
    SW_Project_TD_4174(tbl_JOIN_INNER_TD_5896_output, tbl_Project_TD_4174_output);
    gettimeofday(&tv_r_Project_4_105535_e, 0);

    struct timeval tv_r_Aggregate_3_696433_s, tv_r_Aggregate_3_696433_e;
    gettimeofday(&tv_r_Aggregate_3_696433_s, 0);
    SW_Aggregate_TD_3583(tbl_Project_TD_4174_output, tbl_Aggregate_TD_3583_output);
    gettimeofday(&tv_r_Aggregate_3_696433_e, 0);

    struct timeval tv_r_Sort_2_228143_s, tv_r_Sort_2_228143_e;
    gettimeofday(&tv_r_Sort_2_228143_s, 0);
    SW_Sort_TD_2151(tbl_Aggregate_TD_3583_output, tbl_Sort_TD_2151_output);
    gettimeofday(&tv_r_Sort_2_228143_e, 0);

    struct timeval tv_r_LocalLimit_1_121914_s, tv_r_LocalLimit_1_121914_e;
    gettimeofday(&tv_r_LocalLimit_1_121914_s, 0);
    SW_LocalLimit_TD_187(tbl_Sort_TD_2151_output, tbl_LocalLimit_TD_187_output);
    gettimeofday(&tv_r_LocalLimit_1_121914_e, 0);

    struct timeval tv_r_GlobalLimit_0_286632_s, tv_r_GlobalLimit_0_286632_e;
    gettimeofday(&tv_r_GlobalLimit_0_286632_s, 0);
    SW_GlobalLimit_TD_0688(tbl_LocalLimit_TD_187_output, tbl_GlobalLimit_TD_0688_output);
    gettimeofday(&tv_r_GlobalLimit_0_286632_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_386762_s, &tv_r_Filter_9_386762_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10590_input: " << tbl_SerializeFromObject_TD_10590_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_956933_s, &tv_r_Filter_9_956933_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10448_input: " << tbl_SerializeFromObject_TD_10448_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_37839_s, &tv_r_Filter_8_37839_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9673_input: " << tbl_SerializeFromObject_TD_9673_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_734778_s, &tv_r_JOIN_INNER_8_734778_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_961_output: " << tbl_Filter_TD_961_output.getNumRow() << " " << "tbl_Filter_TD_9137_output: " << tbl_Filter_TD_9137_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_546840_s, &tv_r_Filter_7_546840_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_843_input: " << tbl_SerializeFromObject_TD_843_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_164433_s, &tv_r_JOIN_INNER_7_164433_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8349_output: " << tbl_JOIN_INNER_TD_8349_output.getNumRow() << " " << "tbl_Filter_TD_8340_output: " << tbl_Filter_TD_8340_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_717151_s, &tv_r_Filter_6_717151_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7621_input: " << tbl_SerializeFromObject_TD_7621_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_183645_s, &tv_r_JOIN_INNER_6_183645_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7651_output: " << tbl_JOIN_INNER_TD_7651_output.getNumRow() << " " << "tbl_Filter_TD_793_output: " << tbl_Filter_TD_793_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_234813_s, &tv_r_JOIN_INNER_5_234813_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6673_output: " << tbl_JOIN_INNER_TD_6673_output.getNumRow() << " " << "tbl_Filter_TD_6984_output: " << tbl_Filter_TD_6984_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_105535_s, &tv_r_Project_4_105535_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5896_output: " << tbl_JOIN_INNER_TD_5896_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_696433_s, &tv_r_Aggregate_3_696433_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4174_output: " << tbl_Project_TD_4174_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_228143_s, &tv_r_Sort_2_228143_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3583_output: " << tbl_Aggregate_TD_3583_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_121914_s, &tv_r_LocalLimit_1_121914_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2151_output: " << tbl_Sort_TD_2151_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_286632_s, &tv_r_GlobalLimit_0_286632_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_187_output: " << tbl_LocalLimit_TD_187_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.7646201 * 1000 << "ms" << std::endl; 
    return 0; 
}
