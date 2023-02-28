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

#include "cfgFunc_q66.hpp" 
#include "q66.hpp" 

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
    std::cout << "NOTE:running query #66\n."; 
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
    Table tbl_GlobalLimit_TD_0526692_output("tbl_GlobalLimit_TD_0526692_output", 6100000, 44, "");
    tbl_GlobalLimit_TD_0526692_output.allocateHost();
    Table tbl_LocalLimit_TD_1638769_output("tbl_LocalLimit_TD_1638769_output", 6100000, 44, "");
    tbl_LocalLimit_TD_1638769_output.allocateHost();
    Table tbl_Sort_TD_2649702_output("tbl_Sort_TD_2649702_output", 6100000, 44, "");
    tbl_Sort_TD_2649702_output.allocateHost();
    Table tbl_Aggregate_TD_3586184_output("tbl_Aggregate_TD_3586184_output", 6100000, 44, "");
    tbl_Aggregate_TD_3586184_output.allocateHost();
    Table tbl_Union_TD_4335829_output("tbl_Union_TD_4335829_output", 6100000, 32, "");
    tbl_Union_TD_4335829_output.allocateHost();
    Table tbl_Aggregate_TD_5627574_output("tbl_Aggregate_TD_5627574_output", 6100000, 32, "");
    tbl_Aggregate_TD_5627574_output.allocateHost();
    Table tbl_Aggregate_TD_5688875_output("tbl_Aggregate_TD_5688875_output", 6100000, 32, "");
    tbl_Aggregate_TD_5688875_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6812522_output("tbl_JOIN_INNER_TD_6812522_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_6812522_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6577690_output("tbl_JOIN_INNER_TD_6577690_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_6577690_output.allocateHost();
    Table tbl_JOIN_INNER_TD_764122_output("tbl_JOIN_INNER_TD_764122_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_764122_output.allocateHost();
    Table tbl_Filter_TD_7702345_output("tbl_Filter_TD_7702345_output", 6100000, 1, "");
    tbl_Filter_TD_7702345_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7780644_output("tbl_JOIN_INNER_TD_7780644_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_7780644_output.allocateHost();
    Table tbl_Filter_TD_7997991_output("tbl_Filter_TD_7997991_output", 6100000, 1, "");
    tbl_Filter_TD_7997991_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8336742_output("tbl_JOIN_INNER_TD_8336742_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_8336742_output.allocateHost();
    Table tbl_Filter_TD_8380376_output("tbl_Filter_TD_8380376_output", 6100000, 1, "");
    tbl_Filter_TD_8380376_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8355248_input;
    tbl_SerializeFromObject_TD_8355248_input = Table("ship_mode", ship_mode_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8355248_input.addCol("sm_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_8355248_input.addCol("sm_carrier", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8355248_input.allocateHost();
    tbl_SerializeFromObject_TD_8355248_input.loadHost();
    Table tbl_JOIN_INNER_TD_8906280_output("tbl_JOIN_INNER_TD_8906280_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_8906280_output.allocateHost();
    Table tbl_Filter_TD_8814604_output("tbl_Filter_TD_8814604_output", 6100000, 1, "");
    tbl_Filter_TD_8814604_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8388811_input;
    tbl_SerializeFromObject_TD_8388811_input = Table("ship_mode", ship_mode_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8388811_input.addCol("sm_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_8388811_input.addCol("sm_carrier", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8388811_input.allocateHost();
    tbl_SerializeFromObject_TD_8388811_input.loadHost();
    Table tbl_JOIN_INNER_TD_954823_output("tbl_JOIN_INNER_TD_954823_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_954823_output.allocateHost();
    Table tbl_Filter_TD_9286444_output("tbl_Filter_TD_9286444_output", 6100000, 3, "");
    tbl_Filter_TD_9286444_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9735743_input;
    tbl_SerializeFromObject_TD_9735743_input = Table("time_dim", time_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9735743_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_9735743_input.addCol("t_time", 4);
    tbl_SerializeFromObject_TD_9735743_input.allocateHost();
    tbl_SerializeFromObject_TD_9735743_input.loadHost();
    Table tbl_JOIN_INNER_TD_9310454_output("tbl_JOIN_INNER_TD_9310454_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_9310454_output.allocateHost();
    Table tbl_Filter_TD_9171133_output("tbl_Filter_TD_9171133_output", 6100000, 3, "");
    tbl_Filter_TD_9171133_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9236167_input;
    tbl_SerializeFromObject_TD_9236167_input = Table("time_dim", time_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9236167_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_9236167_input.addCol("t_time", 4);
    tbl_SerializeFromObject_TD_9236167_input.allocateHost();
    tbl_SerializeFromObject_TD_9236167_input.loadHost();
    Table tbl_Filter_TD_104782_output("tbl_Filter_TD_104782_output", 6100000, 7, "");
    tbl_Filter_TD_104782_output.allocateHost();
    Table tbl_Filter_TD_10879758_output("tbl_Filter_TD_10879758_output", 6100000, 7, "");
    tbl_Filter_TD_10879758_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10259182_input;
    tbl_SerializeFromObject_TD_10259182_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10259182_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10259182_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10259182_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10259182_input.allocateHost();
    tbl_SerializeFromObject_TD_10259182_input.loadHost();
    Table tbl_Filter_TD_10810801_output("tbl_Filter_TD_10810801_output", 6100000, 7, "");
    tbl_Filter_TD_10810801_output.allocateHost();
    Table tbl_Filter_TD_1094903_output("tbl_Filter_TD_1094903_output", 6100000, 7, "");
    tbl_Filter_TD_1094903_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10264758_input;
    tbl_SerializeFromObject_TD_10264758_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10264758_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10264758_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10264758_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10264758_input.allocateHost();
    tbl_SerializeFromObject_TD_10264758_input.loadHost();
    Table tbl_SerializeFromObject_TD_11920712_input;
    tbl_SerializeFromObject_TD_11920712_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11920712_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11920712_input.addCol("ws_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_11920712_input.addCol("ws_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_11920712_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_11920712_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_11920712_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11920712_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_11920712_input.allocateHost();
    tbl_SerializeFromObject_TD_11920712_input.loadHost();
    Table tbl_SerializeFromObject_TD_11679256_input;
    tbl_SerializeFromObject_TD_11679256_input = Table("warehouse", warehouse_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11679256_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_11679256_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11679256_input.addCol("w_warehouse_sq_ft", 4);
    tbl_SerializeFromObject_TD_11679256_input.addCol("w_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11679256_input.addCol("w_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11679256_input.addCol("w_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11679256_input.addCol("w_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11679256_input.allocateHost();
    tbl_SerializeFromObject_TD_11679256_input.loadHost();
    Table tbl_SerializeFromObject_TD_11120691_input;
    tbl_SerializeFromObject_TD_11120691_input = Table("catalog_sales", catalog_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11120691_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11120691_input.addCol("cs_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_11120691_input.addCol("cs_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_11120691_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_11120691_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_11120691_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_11120691_input.addCol("cs_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_11120691_input.allocateHost();
    tbl_SerializeFromObject_TD_11120691_input.loadHost();
    Table tbl_SerializeFromObject_TD_11233408_input;
    tbl_SerializeFromObject_TD_11233408_input = Table("warehouse", warehouse_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11233408_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_11233408_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11233408_input.addCol("w_warehouse_sq_ft", 4);
    tbl_SerializeFromObject_TD_11233408_input.addCol("w_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11233408_input.addCol("w_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11233408_input.addCol("w_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11233408_input.addCol("w_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11233408_input.allocateHost();
    tbl_SerializeFromObject_TD_11233408_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_572221_s, tv_r_Filter_10_572221_e;
    gettimeofday(&tv_r_Filter_10_572221_s, 0);
    SW_Filter_TD_1094903(tbl_SerializeFromObject_TD_11233408_input, tbl_Filter_TD_1094903_output);
    gettimeofday(&tv_r_Filter_10_572221_e, 0);

    struct timeval tv_r_Filter_10_776473_s, tv_r_Filter_10_776473_e;
    gettimeofday(&tv_r_Filter_10_776473_s, 0);
    SW_Filter_TD_10810801(tbl_SerializeFromObject_TD_11120691_input, tbl_Filter_TD_10810801_output);
    gettimeofday(&tv_r_Filter_10_776473_e, 0);

    struct timeval tv_r_Filter_10_524710_s, tv_r_Filter_10_524710_e;
    gettimeofday(&tv_r_Filter_10_524710_s, 0);
    SW_Filter_TD_10879758(tbl_SerializeFromObject_TD_11679256_input, tbl_Filter_TD_10879758_output);
    gettimeofday(&tv_r_Filter_10_524710_e, 0);

    struct timeval tv_r_Filter_10_279463_s, tv_r_Filter_10_279463_e;
    gettimeofday(&tv_r_Filter_10_279463_s, 0);
    SW_Filter_TD_104782(tbl_SerializeFromObject_TD_11920712_input, tbl_Filter_TD_104782_output);
    gettimeofday(&tv_r_Filter_10_279463_e, 0);

    struct timeval tv_r_Filter_9_833103_s, tv_r_Filter_9_833103_e;
    gettimeofday(&tv_r_Filter_9_833103_s, 0);
    SW_Filter_TD_9171133(tbl_SerializeFromObject_TD_10264758_input, tbl_Filter_TD_9171133_output);
    gettimeofday(&tv_r_Filter_9_833103_e, 0);

    struct timeval tv_r_JOIN_INNER_9_838919_s, tv_r_JOIN_INNER_9_838919_e;
    gettimeofday(&tv_r_JOIN_INNER_9_838919_s, 0);
    SW_JOIN_INNER_TD_9310454(tbl_Filter_TD_10810801_output, tbl_Filter_TD_1094903_output, tbl_JOIN_INNER_TD_9310454_output);
    gettimeofday(&tv_r_JOIN_INNER_9_838919_e, 0);

    struct timeval tv_r_Filter_9_812166_s, tv_r_Filter_9_812166_e;
    gettimeofday(&tv_r_Filter_9_812166_s, 0);
    SW_Filter_TD_9286444(tbl_SerializeFromObject_TD_10259182_input, tbl_Filter_TD_9286444_output);
    gettimeofday(&tv_r_Filter_9_812166_e, 0);

    struct timeval tv_r_JOIN_INNER_9_700552_s, tv_r_JOIN_INNER_9_700552_e;
    gettimeofday(&tv_r_JOIN_INNER_9_700552_s, 0);
    SW_JOIN_INNER_TD_954823(tbl_Filter_TD_104782_output, tbl_Filter_TD_10879758_output, tbl_JOIN_INNER_TD_954823_output);
    gettimeofday(&tv_r_JOIN_INNER_9_700552_e, 0);

    struct timeval tv_r_Filter_8_989855_s, tv_r_Filter_8_989855_e;
    gettimeofday(&tv_r_Filter_8_989855_s, 0);
    SW_Filter_TD_8814604(tbl_SerializeFromObject_TD_9236167_input, tbl_Filter_TD_8814604_output);
    gettimeofday(&tv_r_Filter_8_989855_e, 0);

    struct timeval tv_r_JOIN_INNER_8_638195_s, tv_r_JOIN_INNER_8_638195_e;
    gettimeofday(&tv_r_JOIN_INNER_8_638195_s, 0);
    SW_JOIN_INNER_TD_8906280(tbl_JOIN_INNER_TD_9310454_output, tbl_Filter_TD_9171133_output, tbl_JOIN_INNER_TD_8906280_output);
    gettimeofday(&tv_r_JOIN_INNER_8_638195_e, 0);

    struct timeval tv_r_Filter_8_375677_s, tv_r_Filter_8_375677_e;
    gettimeofday(&tv_r_Filter_8_375677_s, 0);
    SW_Filter_TD_8380376(tbl_SerializeFromObject_TD_9735743_input, tbl_Filter_TD_8380376_output);
    gettimeofday(&tv_r_Filter_8_375677_e, 0);

    struct timeval tv_r_JOIN_INNER_8_6200_s, tv_r_JOIN_INNER_8_6200_e;
    gettimeofday(&tv_r_JOIN_INNER_8_6200_s, 0);
    SW_JOIN_INNER_TD_8336742(tbl_JOIN_INNER_TD_954823_output, tbl_Filter_TD_9286444_output, tbl_JOIN_INNER_TD_8336742_output);
    gettimeofday(&tv_r_JOIN_INNER_8_6200_e, 0);

    struct timeval tv_r_Filter_7_723540_s, tv_r_Filter_7_723540_e;
    gettimeofday(&tv_r_Filter_7_723540_s, 0);
    SW_Filter_TD_7997991(tbl_SerializeFromObject_TD_8388811_input, tbl_Filter_TD_7997991_output);
    gettimeofday(&tv_r_Filter_7_723540_e, 0);

    struct timeval tv_r_JOIN_INNER_7_401609_s, tv_r_JOIN_INNER_7_401609_e;
    gettimeofday(&tv_r_JOIN_INNER_7_401609_s, 0);
    SW_JOIN_INNER_TD_7780644(tbl_JOIN_INNER_TD_8906280_output, tbl_Filter_TD_8814604_output, tbl_JOIN_INNER_TD_7780644_output);
    gettimeofday(&tv_r_JOIN_INNER_7_401609_e, 0);

    struct timeval tv_r_Filter_7_585025_s, tv_r_Filter_7_585025_e;
    gettimeofday(&tv_r_Filter_7_585025_s, 0);
    SW_Filter_TD_7702345(tbl_SerializeFromObject_TD_8355248_input, tbl_Filter_TD_7702345_output);
    gettimeofday(&tv_r_Filter_7_585025_e, 0);

    struct timeval tv_r_JOIN_INNER_7_965632_s, tv_r_JOIN_INNER_7_965632_e;
    gettimeofday(&tv_r_JOIN_INNER_7_965632_s, 0);
    SW_JOIN_INNER_TD_764122(tbl_JOIN_INNER_TD_8336742_output, tbl_Filter_TD_8380376_output, tbl_JOIN_INNER_TD_764122_output);
    gettimeofday(&tv_r_JOIN_INNER_7_965632_e, 0);

    struct timeval tv_r_JOIN_INNER_6_187080_s, tv_r_JOIN_INNER_6_187080_e;
    gettimeofday(&tv_r_JOIN_INNER_6_187080_s, 0);
    SW_JOIN_INNER_TD_6577690(tbl_JOIN_INNER_TD_7780644_output, tbl_Filter_TD_7997991_output, tbl_JOIN_INNER_TD_6577690_output);
    gettimeofday(&tv_r_JOIN_INNER_6_187080_e, 0);

    struct timeval tv_r_JOIN_INNER_6_829764_s, tv_r_JOIN_INNER_6_829764_e;
    gettimeofday(&tv_r_JOIN_INNER_6_829764_s, 0);
    SW_JOIN_INNER_TD_6812522(tbl_JOIN_INNER_TD_764122_output, tbl_Filter_TD_7702345_output, tbl_JOIN_INNER_TD_6812522_output);
    gettimeofday(&tv_r_JOIN_INNER_6_829764_e, 0);

    struct timeval tv_r_Aggregate_5_405579_s, tv_r_Aggregate_5_405579_e;
    gettimeofday(&tv_r_Aggregate_5_405579_s, 0);
    SW_Aggregate_TD_5688875(tbl_JOIN_INNER_TD_6577690_output, tbl_Aggregate_TD_5688875_output);
    gettimeofday(&tv_r_Aggregate_5_405579_e, 0);

    struct timeval tv_r_Aggregate_5_302966_s, tv_r_Aggregate_5_302966_e;
    gettimeofday(&tv_r_Aggregate_5_302966_s, 0);
    SW_Aggregate_TD_5627574(tbl_JOIN_INNER_TD_6812522_output, tbl_Aggregate_TD_5627574_output);
    gettimeofday(&tv_r_Aggregate_5_302966_e, 0);

    struct timeval tv_r_Union_4_708306_s, tv_r_Union_4_708306_e;
    gettimeofday(&tv_r_Union_4_708306_s, 0);
    SW_Union_TD_4335829(tbl_Aggregate_TD_5627574_output, tbl_Aggregate_TD_5688875_output, tbl_Union_TD_4335829_output);
    gettimeofday(&tv_r_Union_4_708306_e, 0);

    struct timeval tv_r_Aggregate_3_683824_s, tv_r_Aggregate_3_683824_e;
    gettimeofday(&tv_r_Aggregate_3_683824_s, 0);
    SW_Aggregate_TD_3586184(tbl_Union_TD_4335829_output, tbl_Aggregate_TD_3586184_output);
    gettimeofday(&tv_r_Aggregate_3_683824_e, 0);

    struct timeval tv_r_Sort_2_402035_s, tv_r_Sort_2_402035_e;
    gettimeofday(&tv_r_Sort_2_402035_s, 0);
    SW_Sort_TD_2649702(tbl_Aggregate_TD_3586184_output, tbl_Sort_TD_2649702_output);
    gettimeofday(&tv_r_Sort_2_402035_e, 0);

    struct timeval tv_r_LocalLimit_1_997068_s, tv_r_LocalLimit_1_997068_e;
    gettimeofday(&tv_r_LocalLimit_1_997068_s, 0);
    SW_LocalLimit_TD_1638769(tbl_Sort_TD_2649702_output, tbl_LocalLimit_TD_1638769_output);
    gettimeofday(&tv_r_LocalLimit_1_997068_e, 0);

    struct timeval tv_r_GlobalLimit_0_638000_s, tv_r_GlobalLimit_0_638000_e;
    gettimeofday(&tv_r_GlobalLimit_0_638000_s, 0);
    SW_GlobalLimit_TD_0526692(tbl_LocalLimit_TD_1638769_output, tbl_GlobalLimit_TD_0526692_output);
    gettimeofday(&tv_r_GlobalLimit_0_638000_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_572221_s, &tv_r_Filter_10_572221_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11233408_input: " << tbl_SerializeFromObject_TD_11233408_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_776473_s, &tv_r_Filter_10_776473_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11120691_input: " << tbl_SerializeFromObject_TD_11120691_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_524710_s, &tv_r_Filter_10_524710_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11679256_input: " << tbl_SerializeFromObject_TD_11679256_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_279463_s, &tv_r_Filter_10_279463_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11920712_input: " << tbl_SerializeFromObject_TD_11920712_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_833103_s, &tv_r_Filter_9_833103_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10264758_input: " << tbl_SerializeFromObject_TD_10264758_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_838919_s, &tv_r_JOIN_INNER_9_838919_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10810801_output: " << tbl_Filter_TD_10810801_output.getNumRow() << " " << "tbl_Filter_TD_1094903_output: " << tbl_Filter_TD_1094903_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_812166_s, &tv_r_Filter_9_812166_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10259182_input: " << tbl_SerializeFromObject_TD_10259182_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_700552_s, &tv_r_JOIN_INNER_9_700552_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_104782_output: " << tbl_Filter_TD_104782_output.getNumRow() << " " << "tbl_Filter_TD_10879758_output: " << tbl_Filter_TD_10879758_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_989855_s, &tv_r_Filter_8_989855_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9236167_input: " << tbl_SerializeFromObject_TD_9236167_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_638195_s, &tv_r_JOIN_INNER_8_638195_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9310454_output: " << tbl_JOIN_INNER_TD_9310454_output.getNumRow() << " " << "tbl_Filter_TD_9171133_output: " << tbl_Filter_TD_9171133_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_375677_s, &tv_r_Filter_8_375677_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9735743_input: " << tbl_SerializeFromObject_TD_9735743_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_6200_s, &tv_r_JOIN_INNER_8_6200_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_954823_output: " << tbl_JOIN_INNER_TD_954823_output.getNumRow() << " " << "tbl_Filter_TD_9286444_output: " << tbl_Filter_TD_9286444_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_723540_s, &tv_r_Filter_7_723540_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8388811_input: " << tbl_SerializeFromObject_TD_8388811_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_401609_s, &tv_r_JOIN_INNER_7_401609_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8906280_output: " << tbl_JOIN_INNER_TD_8906280_output.getNumRow() << " " << "tbl_Filter_TD_8814604_output: " << tbl_Filter_TD_8814604_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_585025_s, &tv_r_Filter_7_585025_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8355248_input: " << tbl_SerializeFromObject_TD_8355248_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_965632_s, &tv_r_JOIN_INNER_7_965632_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8336742_output: " << tbl_JOIN_INNER_TD_8336742_output.getNumRow() << " " << "tbl_Filter_TD_8380376_output: " << tbl_Filter_TD_8380376_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_187080_s, &tv_r_JOIN_INNER_6_187080_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7780644_output: " << tbl_JOIN_INNER_TD_7780644_output.getNumRow() << " " << "tbl_Filter_TD_7997991_output: " << tbl_Filter_TD_7997991_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_829764_s, &tv_r_JOIN_INNER_6_829764_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_764122_output: " << tbl_JOIN_INNER_TD_764122_output.getNumRow() << " " << "tbl_Filter_TD_7702345_output: " << tbl_Filter_TD_7702345_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_405579_s, &tv_r_Aggregate_5_405579_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6577690_output: " << tbl_JOIN_INNER_TD_6577690_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_302966_s, &tv_r_Aggregate_5_302966_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6812522_output: " << tbl_JOIN_INNER_TD_6812522_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_708306_s, &tv_r_Union_4_708306_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5627574_output: " << tbl_Aggregate_TD_5627574_output.getNumRow() << " " << "tbl_Aggregate_TD_5688875_output: " << tbl_Aggregate_TD_5688875_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_683824_s, &tv_r_Aggregate_3_683824_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4335829_output: " << tbl_Union_TD_4335829_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_402035_s, &tv_r_Sort_2_402035_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3586184_output: " << tbl_Aggregate_TD_3586184_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_997068_s, &tv_r_LocalLimit_1_997068_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2649702_output: " << tbl_Sort_TD_2649702_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_638000_s, &tv_r_GlobalLimit_0_638000_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1638769_output: " << tbl_LocalLimit_TD_1638769_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.4814246 * 1000 << "ms" << std::endl; 
    return 0; 
}
