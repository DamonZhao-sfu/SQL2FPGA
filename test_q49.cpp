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

#include "cfgFunc_q49.hpp" 
#include "q49.hpp" 

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
    std::cout << "NOTE:running query #49\n."; 
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
    Table tbl_Sort_TD_2708_output("tbl_Sort_TD_2708_output", 6100000, 5, "");
    tbl_Sort_TD_2708_output.allocateHost();
    Table tbl_Aggregate_TD_3845_output("tbl_Aggregate_TD_3845_output", 6100000, 5, "");
    tbl_Aggregate_TD_3845_output.allocateHost();
    Table tbl_Union_TD_4561_output("tbl_Union_TD_4561_output", 6100000, 5, "");
    tbl_Union_TD_4561_output.allocateHost();
    Table tbl_Project_TD_5466_output("tbl_Project_TD_5466_output", 6100000, 5, "");
    tbl_Project_TD_5466_output.allocateHost();
    Table tbl_Project_TD_5474_output("tbl_Project_TD_5474_output", 6100000, 5, "");
    tbl_Project_TD_5474_output.allocateHost();
    Table tbl_Project_TD_5126_output("tbl_Project_TD_5126_output", 6100000, 5, "");
    tbl_Project_TD_5126_output.allocateHost();
    Table tbl_Filter_TD_6973_output("tbl_Filter_TD_6973_output", 6100000, 4, "");
    tbl_Filter_TD_6973_output.allocateHost();
    Table tbl_Filter_TD_638_output("tbl_Filter_TD_638_output", 6100000, 4, "");
    tbl_Filter_TD_638_output.allocateHost();
    Table tbl_Filter_TD_6526_output("tbl_Filter_TD_6526_output", 6100000, 4, "");
    tbl_Filter_TD_6526_output.allocateHost();
    Table tbl_Window_TD_730_output("tbl_Window_TD_730_output", 6100000, 5, "");
    tbl_Window_TD_730_output.allocateHost();
    Table tbl_Window_TD_7268_output("tbl_Window_TD_7268_output", 6100000, 5, "");
    tbl_Window_TD_7268_output.allocateHost();
    Table tbl_Window_TD_7737_output("tbl_Window_TD_7737_output", 6100000, 5, "");
    tbl_Window_TD_7737_output.allocateHost();
    Table tbl_Window_TD_8542_output("tbl_Window_TD_8542_output", 6100000, 4, "");
    tbl_Window_TD_8542_output.allocateHost();
    Table tbl_Window_TD_8221_output("tbl_Window_TD_8221_output", 6100000, 4, "");
    tbl_Window_TD_8221_output.allocateHost();
    Table tbl_Window_TD_8346_output("tbl_Window_TD_8346_output", 6100000, 4, "");
    tbl_Window_TD_8346_output.allocateHost();
    Table tbl_Aggregate_TD_9309_output("tbl_Aggregate_TD_9309_output", 6100000, 3, "");
    tbl_Aggregate_TD_9309_output.allocateHost();
    Table tbl_Aggregate_TD_976_output("tbl_Aggregate_TD_976_output", 6100000, 3, "");
    tbl_Aggregate_TD_976_output.allocateHost();
    Table tbl_Aggregate_TD_9269_output("tbl_Aggregate_TD_9269_output", 6100000, 3, "");
    tbl_Aggregate_TD_9269_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10748_output("tbl_JOIN_INNER_TD_10748_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10748_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10450_output("tbl_JOIN_INNER_TD_10450_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10450_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10196_output("tbl_JOIN_INNER_TD_10196_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10196_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1116_output("tbl_JOIN_INNER_TD_1116_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_1116_output.allocateHost();
    Table tbl_Filter_TD_11561_output("tbl_Filter_TD_11561_output", 6100000, 1, "");
    tbl_Filter_TD_11561_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1125_output("tbl_JOIN_INNER_TD_1125_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_1125_output.allocateHost();
    Table tbl_Filter_TD_1138_output("tbl_Filter_TD_1138_output", 6100000, 1, "");
    tbl_Filter_TD_1138_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11215_output("tbl_JOIN_INNER_TD_11215_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11215_output.allocateHost();
    Table tbl_Filter_TD_11542_output("tbl_Filter_TD_11542_output", 6100000, 1, "");
    tbl_Filter_TD_11542_output.allocateHost();
    Table tbl_Filter_TD_1215_output("tbl_Filter_TD_1215_output", 6100000, 5, "");
    tbl_Filter_TD_1215_output.allocateHost();
    Table tbl_Filter_TD_12957_output("tbl_Filter_TD_12957_output", 6100000, 4, "");
    tbl_Filter_TD_12957_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12100_input;
    tbl_SerializeFromObject_TD_12100_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12100_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12100_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12100_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12100_input.allocateHost();
    tbl_SerializeFromObject_TD_12100_input.loadHost();
    Table tbl_Filter_TD_12259_output("tbl_Filter_TD_12259_output", 6100000, 5, "");
    tbl_Filter_TD_12259_output.allocateHost();
    Table tbl_Filter_TD_12487_output("tbl_Filter_TD_12487_output", 6100000, 4, "");
    tbl_Filter_TD_12487_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12518_input;
    tbl_SerializeFromObject_TD_12518_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12518_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12518_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12518_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12518_input.allocateHost();
    tbl_SerializeFromObject_TD_12518_input.loadHost();
    Table tbl_Filter_TD_12109_output("tbl_Filter_TD_12109_output", 6100000, 5, "");
    tbl_Filter_TD_12109_output.allocateHost();
    Table tbl_Filter_TD_1264_output("tbl_Filter_TD_1264_output", 6100000, 4, "");
    tbl_Filter_TD_1264_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1227_input;
    tbl_SerializeFromObject_TD_1227_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1227_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1227_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1227_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_1227_input.allocateHost();
    tbl_SerializeFromObject_TD_1227_input.loadHost();
    Table tbl_SerializeFromObject_TD_13373_input;
    tbl_SerializeFromObject_TD_13373_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13373_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13373_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13373_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_13373_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13373_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_13373_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_13373_input.allocateHost();
    tbl_SerializeFromObject_TD_13373_input.loadHost();
    Table tbl_SerializeFromObject_TD_13721_input;
    tbl_SerializeFromObject_TD_13721_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13721_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_13721_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_13721_input.addCol("wr_return_quantity", 4);
    tbl_SerializeFromObject_TD_13721_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_13721_input.allocateHost();
    tbl_SerializeFromObject_TD_13721_input.loadHost();
    Table tbl_SerializeFromObject_TD_13770_input;
    tbl_SerializeFromObject_TD_13770_input = Table("catalog_sales", catalog_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13770_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13770_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13770_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_13770_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13770_input.addCol("cs_net_paid", 4);
    tbl_SerializeFromObject_TD_13770_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_13770_input.allocateHost();
    tbl_SerializeFromObject_TD_13770_input.loadHost();
    Table tbl_SerializeFromObject_TD_13376_input;
    tbl_SerializeFromObject_TD_13376_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13376_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_13376_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_13376_input.addCol("cr_return_quantity", 4);
    tbl_SerializeFromObject_TD_13376_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_13376_input.allocateHost();
    tbl_SerializeFromObject_TD_13376_input.loadHost();
    Table tbl_SerializeFromObject_TD_13659_input;
    tbl_SerializeFromObject_TD_13659_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13659_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13659_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13659_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_13659_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13659_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_13659_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_13659_input.allocateHost();
    tbl_SerializeFromObject_TD_13659_input.loadHost();
    Table tbl_SerializeFromObject_TD_1390_input;
    tbl_SerializeFromObject_TD_1390_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1390_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_1390_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_1390_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_1390_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_1390_input.allocateHost();
    tbl_SerializeFromObject_TD_1390_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_472516_s, tv_r_Filter_12_472516_e;
    gettimeofday(&tv_r_Filter_12_472516_s, 0);
    SW_Filter_TD_1264(tbl_SerializeFromObject_TD_1390_input, tbl_Filter_TD_1264_output);
    gettimeofday(&tv_r_Filter_12_472516_e, 0);

    struct timeval tv_r_Filter_12_27768_s, tv_r_Filter_12_27768_e;
    gettimeofday(&tv_r_Filter_12_27768_s, 0);
    SW_Filter_TD_12109(tbl_SerializeFromObject_TD_13659_input, tbl_Filter_TD_12109_output);
    gettimeofday(&tv_r_Filter_12_27768_e, 0);

    struct timeval tv_r_Filter_12_705479_s, tv_r_Filter_12_705479_e;
    gettimeofday(&tv_r_Filter_12_705479_s, 0);
    SW_Filter_TD_12487(tbl_SerializeFromObject_TD_13376_input, tbl_Filter_TD_12487_output);
    gettimeofday(&tv_r_Filter_12_705479_e, 0);

    struct timeval tv_r_Filter_12_135468_s, tv_r_Filter_12_135468_e;
    gettimeofday(&tv_r_Filter_12_135468_s, 0);
    SW_Filter_TD_12259(tbl_SerializeFromObject_TD_13770_input, tbl_Filter_TD_12259_output);
    gettimeofday(&tv_r_Filter_12_135468_e, 0);

    struct timeval tv_r_Filter_12_405540_s, tv_r_Filter_12_405540_e;
    gettimeofday(&tv_r_Filter_12_405540_s, 0);
    SW_Filter_TD_12957(tbl_SerializeFromObject_TD_13721_input, tbl_Filter_TD_12957_output);
    gettimeofday(&tv_r_Filter_12_405540_e, 0);

    struct timeval tv_r_Filter_12_609296_s, tv_r_Filter_12_609296_e;
    gettimeofday(&tv_r_Filter_12_609296_s, 0);
    SW_Filter_TD_1215(tbl_SerializeFromObject_TD_13373_input, tbl_Filter_TD_1215_output);
    gettimeofday(&tv_r_Filter_12_609296_e, 0);

    struct timeval tv_r_Filter_11_66922_s, tv_r_Filter_11_66922_e;
    gettimeofday(&tv_r_Filter_11_66922_s, 0);
    SW_Filter_TD_11542(tbl_SerializeFromObject_TD_1227_input, tbl_Filter_TD_11542_output);
    gettimeofday(&tv_r_Filter_11_66922_e, 0);

    struct timeval tv_r_JOIN_INNER_11_109715_s, tv_r_JOIN_INNER_11_109715_e;
    gettimeofday(&tv_r_JOIN_INNER_11_109715_s, 0);
    SW_JOIN_INNER_TD_11215(tbl_Filter_TD_12109_output, tbl_Filter_TD_1264_output, tbl_JOIN_INNER_TD_11215_output);
    gettimeofday(&tv_r_JOIN_INNER_11_109715_e, 0);

    struct timeval tv_r_Filter_11_11926_s, tv_r_Filter_11_11926_e;
    gettimeofday(&tv_r_Filter_11_11926_s, 0);
    SW_Filter_TD_1138(tbl_SerializeFromObject_TD_12518_input, tbl_Filter_TD_1138_output);
    gettimeofday(&tv_r_Filter_11_11926_e, 0);

    struct timeval tv_r_JOIN_INNER_11_484817_s, tv_r_JOIN_INNER_11_484817_e;
    gettimeofday(&tv_r_JOIN_INNER_11_484817_s, 0);
    SW_JOIN_INNER_TD_1125(tbl_Filter_TD_12259_output, tbl_Filter_TD_12487_output, tbl_JOIN_INNER_TD_1125_output);
    gettimeofday(&tv_r_JOIN_INNER_11_484817_e, 0);

    struct timeval tv_r_Filter_11_921113_s, tv_r_Filter_11_921113_e;
    gettimeofday(&tv_r_Filter_11_921113_s, 0);
    SW_Filter_TD_11561(tbl_SerializeFromObject_TD_12100_input, tbl_Filter_TD_11561_output);
    gettimeofday(&tv_r_Filter_11_921113_e, 0);

    struct timeval tv_r_JOIN_INNER_11_411101_s, tv_r_JOIN_INNER_11_411101_e;
    gettimeofday(&tv_r_JOIN_INNER_11_411101_s, 0);
    SW_JOIN_INNER_TD_1116(tbl_Filter_TD_1215_output, tbl_Filter_TD_12957_output, tbl_JOIN_INNER_TD_1116_output);
    gettimeofday(&tv_r_JOIN_INNER_11_411101_e, 0);

    struct timeval tv_r_JOIN_INNER_10_748308_s, tv_r_JOIN_INNER_10_748308_e;
    gettimeofday(&tv_r_JOIN_INNER_10_748308_s, 0);
    SW_JOIN_INNER_TD_10196(tbl_JOIN_INNER_TD_11215_output, tbl_Filter_TD_11542_output, tbl_JOIN_INNER_TD_10196_output);
    gettimeofday(&tv_r_JOIN_INNER_10_748308_e, 0);

    struct timeval tv_r_JOIN_INNER_10_164473_s, tv_r_JOIN_INNER_10_164473_e;
    gettimeofday(&tv_r_JOIN_INNER_10_164473_s, 0);
    SW_JOIN_INNER_TD_10450(tbl_JOIN_INNER_TD_1125_output, tbl_Filter_TD_1138_output, tbl_JOIN_INNER_TD_10450_output);
    gettimeofday(&tv_r_JOIN_INNER_10_164473_e, 0);

    struct timeval tv_r_JOIN_INNER_10_518763_s, tv_r_JOIN_INNER_10_518763_e;
    gettimeofday(&tv_r_JOIN_INNER_10_518763_s, 0);
    SW_JOIN_INNER_TD_10748(tbl_JOIN_INNER_TD_1116_output, tbl_Filter_TD_11561_output, tbl_JOIN_INNER_TD_10748_output);
    gettimeofday(&tv_r_JOIN_INNER_10_518763_e, 0);

    struct timeval tv_r_Aggregate_9_454041_s, tv_r_Aggregate_9_454041_e;
    gettimeofday(&tv_r_Aggregate_9_454041_s, 0);
    SW_Aggregate_TD_9269(tbl_JOIN_INNER_TD_10196_output, tbl_Aggregate_TD_9269_output);
    gettimeofday(&tv_r_Aggregate_9_454041_e, 0);

    struct timeval tv_r_Aggregate_9_866400_s, tv_r_Aggregate_9_866400_e;
    gettimeofday(&tv_r_Aggregate_9_866400_s, 0);
    SW_Aggregate_TD_976(tbl_JOIN_INNER_TD_10450_output, tbl_Aggregate_TD_976_output);
    gettimeofday(&tv_r_Aggregate_9_866400_e, 0);

    struct timeval tv_r_Aggregate_9_281008_s, tv_r_Aggregate_9_281008_e;
    gettimeofday(&tv_r_Aggregate_9_281008_s, 0);
    SW_Aggregate_TD_9309(tbl_JOIN_INNER_TD_10748_output, tbl_Aggregate_TD_9309_output);
    gettimeofday(&tv_r_Aggregate_9_281008_e, 0);

    struct timeval tv_r_Window_8_888079_s, tv_r_Window_8_888079_e;
    gettimeofday(&tv_r_Window_8_888079_s, 0);
    SW_Window_TD_8346(tbl_Aggregate_TD_9269_output, tbl_Window_TD_8346_output);
    gettimeofday(&tv_r_Window_8_888079_e, 0);

    struct timeval tv_r_Window_8_460149_s, tv_r_Window_8_460149_e;
    gettimeofday(&tv_r_Window_8_460149_s, 0);
    SW_Window_TD_8221(tbl_Aggregate_TD_976_output, tbl_Window_TD_8221_output);
    gettimeofday(&tv_r_Window_8_460149_e, 0);

    struct timeval tv_r_Window_8_580913_s, tv_r_Window_8_580913_e;
    gettimeofday(&tv_r_Window_8_580913_s, 0);
    SW_Window_TD_8542(tbl_Aggregate_TD_9309_output, tbl_Window_TD_8542_output);
    gettimeofday(&tv_r_Window_8_580913_e, 0);

    struct timeval tv_r_Window_7_514394_s, tv_r_Window_7_514394_e;
    gettimeofday(&tv_r_Window_7_514394_s, 0);
    SW_Window_TD_7737(tbl_Window_TD_8346_output, tbl_Window_TD_7737_output);
    gettimeofday(&tv_r_Window_7_514394_e, 0);

    struct timeval tv_r_Window_7_415825_s, tv_r_Window_7_415825_e;
    gettimeofday(&tv_r_Window_7_415825_s, 0);
    SW_Window_TD_7268(tbl_Window_TD_8221_output, tbl_Window_TD_7268_output);
    gettimeofday(&tv_r_Window_7_415825_e, 0);

    struct timeval tv_r_Window_7_548508_s, tv_r_Window_7_548508_e;
    gettimeofday(&tv_r_Window_7_548508_s, 0);
    SW_Window_TD_730(tbl_Window_TD_8542_output, tbl_Window_TD_730_output);
    gettimeofday(&tv_r_Window_7_548508_e, 0);

    struct timeval tv_r_Filter_6_119368_s, tv_r_Filter_6_119368_e;
    gettimeofday(&tv_r_Filter_6_119368_s, 0);
    SW_Filter_TD_6526(tbl_Window_TD_7737_output, tbl_Filter_TD_6526_output);
    gettimeofday(&tv_r_Filter_6_119368_e, 0);

    struct timeval tv_r_Filter_6_707068_s, tv_r_Filter_6_707068_e;
    gettimeofday(&tv_r_Filter_6_707068_s, 0);
    SW_Filter_TD_638(tbl_Window_TD_7268_output, tbl_Filter_TD_638_output);
    gettimeofday(&tv_r_Filter_6_707068_e, 0);

    struct timeval tv_r_Filter_6_110779_s, tv_r_Filter_6_110779_e;
    gettimeofday(&tv_r_Filter_6_110779_s, 0);
    SW_Filter_TD_6973(tbl_Window_TD_730_output, tbl_Filter_TD_6973_output);
    gettimeofday(&tv_r_Filter_6_110779_e, 0);

    struct timeval tv_r_Project_5_842602_s, tv_r_Project_5_842602_e;
    gettimeofday(&tv_r_Project_5_842602_s, 0);
    SW_Project_TD_5126(tbl_Filter_TD_6526_output, tbl_Project_TD_5126_output);
    gettimeofday(&tv_r_Project_5_842602_e, 0);

    struct timeval tv_r_Project_5_421026_s, tv_r_Project_5_421026_e;
    gettimeofday(&tv_r_Project_5_421026_s, 0);
    SW_Project_TD_5474(tbl_Filter_TD_638_output, tbl_Project_TD_5474_output);
    gettimeofday(&tv_r_Project_5_421026_e, 0);

    struct timeval tv_r_Project_5_365640_s, tv_r_Project_5_365640_e;
    gettimeofday(&tv_r_Project_5_365640_s, 0);
    SW_Project_TD_5466(tbl_Filter_TD_6973_output, tbl_Project_TD_5466_output);
    gettimeofday(&tv_r_Project_5_365640_e, 0);

    struct timeval tv_r_Union_4_188824_s, tv_r_Union_4_188824_e;
    gettimeofday(&tv_r_Union_4_188824_s, 0);
    SW_Union_TD_4561(tbl_Project_TD_5466_output, tbl_Project_TD_5474_output, tbl_Project_TD_5126_output, tbl_Union_TD_4561_output);
    gettimeofday(&tv_r_Union_4_188824_e, 0);

    struct timeval tv_r_Aggregate_3_307976_s, tv_r_Aggregate_3_307976_e;
    gettimeofday(&tv_r_Aggregate_3_307976_s, 0);
    SW_Aggregate_TD_3845(tbl_Union_TD_4561_output, tbl_Aggregate_TD_3845_output);
    gettimeofday(&tv_r_Aggregate_3_307976_e, 0);

    struct timeval tv_r_Sort_2_229318_s, tv_r_Sort_2_229318_e;
    gettimeofday(&tv_r_Sort_2_229318_s, 0);
    SW_Sort_TD_2708(tbl_Aggregate_TD_3845_output, tbl_Sort_TD_2708_output);
    gettimeofday(&tv_r_Sort_2_229318_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_472516_s, &tv_r_Filter_12_472516_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1390_input: " << tbl_SerializeFromObject_TD_1390_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_27768_s, &tv_r_Filter_12_27768_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13659_input: " << tbl_SerializeFromObject_TD_13659_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_705479_s, &tv_r_Filter_12_705479_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13376_input: " << tbl_SerializeFromObject_TD_13376_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_135468_s, &tv_r_Filter_12_135468_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13770_input: " << tbl_SerializeFromObject_TD_13770_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_405540_s, &tv_r_Filter_12_405540_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13721_input: " << tbl_SerializeFromObject_TD_13721_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_609296_s, &tv_r_Filter_12_609296_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13373_input: " << tbl_SerializeFromObject_TD_13373_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_66922_s, &tv_r_Filter_11_66922_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1227_input: " << tbl_SerializeFromObject_TD_1227_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_109715_s, &tv_r_JOIN_INNER_11_109715_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12109_output: " << tbl_Filter_TD_12109_output.getNumRow() << " " << "tbl_Filter_TD_1264_output: " << tbl_Filter_TD_1264_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_11926_s, &tv_r_Filter_11_11926_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12518_input: " << tbl_SerializeFromObject_TD_12518_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_484817_s, &tv_r_JOIN_INNER_11_484817_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12259_output: " << tbl_Filter_TD_12259_output.getNumRow() << " " << "tbl_Filter_TD_12487_output: " << tbl_Filter_TD_12487_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_921113_s, &tv_r_Filter_11_921113_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12100_input: " << tbl_SerializeFromObject_TD_12100_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_411101_s, &tv_r_JOIN_INNER_11_411101_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1215_output: " << tbl_Filter_TD_1215_output.getNumRow() << " " << "tbl_Filter_TD_12957_output: " << tbl_Filter_TD_12957_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_748308_s, &tv_r_JOIN_INNER_10_748308_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11215_output: " << tbl_JOIN_INNER_TD_11215_output.getNumRow() << " " << "tbl_Filter_TD_11542_output: " << tbl_Filter_TD_11542_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_164473_s, &tv_r_JOIN_INNER_10_164473_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1125_output: " << tbl_JOIN_INNER_TD_1125_output.getNumRow() << " " << "tbl_Filter_TD_1138_output: " << tbl_Filter_TD_1138_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_518763_s, &tv_r_JOIN_INNER_10_518763_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1116_output: " << tbl_JOIN_INNER_TD_1116_output.getNumRow() << " " << "tbl_Filter_TD_11561_output: " << tbl_Filter_TD_11561_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_454041_s, &tv_r_Aggregate_9_454041_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10196_output: " << tbl_JOIN_INNER_TD_10196_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_866400_s, &tv_r_Aggregate_9_866400_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10450_output: " << tbl_JOIN_INNER_TD_10450_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_281008_s, &tv_r_Aggregate_9_281008_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10748_output: " << tbl_JOIN_INNER_TD_10748_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_888079_s, &tv_r_Window_8_888079_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9269_output: " << tbl_Aggregate_TD_9269_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_460149_s, &tv_r_Window_8_460149_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_976_output: " << tbl_Aggregate_TD_976_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_580913_s, &tv_r_Window_8_580913_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9309_output: " << tbl_Aggregate_TD_9309_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_514394_s, &tv_r_Window_7_514394_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8346_output: " << tbl_Window_TD_8346_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_415825_s, &tv_r_Window_7_415825_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8221_output: " << tbl_Window_TD_8221_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_548508_s, &tv_r_Window_7_548508_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8542_output: " << tbl_Window_TD_8542_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_119368_s, &tv_r_Filter_6_119368_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7737_output: " << tbl_Window_TD_7737_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_707068_s, &tv_r_Filter_6_707068_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7268_output: " << tbl_Window_TD_7268_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_110779_s, &tv_r_Filter_6_110779_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_730_output: " << tbl_Window_TD_730_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_842602_s, &tv_r_Project_5_842602_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6526_output: " << tbl_Filter_TD_6526_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_421026_s, &tv_r_Project_5_421026_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_638_output: " << tbl_Filter_TD_638_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_365640_s, &tv_r_Project_5_365640_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6973_output: " << tbl_Filter_TD_6973_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_188824_s, &tv_r_Union_4_188824_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5466_output: " << tbl_Project_TD_5466_output.getNumRow() << " " << "tbl_Project_TD_5474_output: " << tbl_Project_TD_5474_output.getNumRow() << " " << "tbl_Project_TD_5126_output: " << tbl_Project_TD_5126_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_307976_s, &tv_r_Aggregate_3_307976_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4561_output: " << tbl_Union_TD_4561_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_229318_s, &tv_r_Sort_2_229318_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3845_output: " << tbl_Aggregate_TD_3845_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 12.803188 * 1000 << "ms" << std::endl; 
    return 0; 
}
