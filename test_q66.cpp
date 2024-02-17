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
    // ****************************** Tables **************************** // 
    Table tbl_GlobalLimit_TD_0880_output("tbl_GlobalLimit_TD_0880_output", 6100000, 44, "");
    tbl_GlobalLimit_TD_0880_output.allocateHost();
    Table tbl_LocalLimit_TD_176_output("tbl_LocalLimit_TD_176_output", 6100000, 44, "");
    tbl_LocalLimit_TD_176_output.allocateHost();
    Table tbl_Sort_TD_2221_output("tbl_Sort_TD_2221_output", 6100000, 44, "");
    tbl_Sort_TD_2221_output.allocateHost();
    Table tbl_Aggregate_TD_3208_output("tbl_Aggregate_TD_3208_output", 6100000, 44, "");
    tbl_Aggregate_TD_3208_output.allocateHost();
    Table tbl_Union_TD_4115_output("tbl_Union_TD_4115_output", 6100000, 32, "");
    tbl_Union_TD_4115_output.allocateHost();
    Table tbl_Aggregate_TD_5722_output("tbl_Aggregate_TD_5722_output", 6100000, 32, "");
    tbl_Aggregate_TD_5722_output.allocateHost();
    Table tbl_Aggregate_TD_5382_output("tbl_Aggregate_TD_5382_output", 6100000, 32, "");
    tbl_Aggregate_TD_5382_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6889_output("tbl_JOIN_INNER_TD_6889_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_6889_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6285_output("tbl_JOIN_INNER_TD_6285_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_6285_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7652_output("tbl_JOIN_INNER_TD_7652_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_7652_output.allocateHost();
    Table tbl_Filter_TD_7464_output("tbl_Filter_TD_7464_output", 6100000, 1, "");
    tbl_Filter_TD_7464_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7431_output("tbl_JOIN_INNER_TD_7431_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_7431_output.allocateHost();
    Table tbl_Filter_TD_7288_output("tbl_Filter_TD_7288_output", 6100000, 1, "");
    tbl_Filter_TD_7288_output.allocateHost();
    Table tbl_JOIN_INNER_TD_820_output("tbl_JOIN_INNER_TD_820_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_820_output.allocateHost();
    Table tbl_Filter_TD_8159_output("tbl_Filter_TD_8159_output", 6100000, 1, "");
    tbl_Filter_TD_8159_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8548_input;
    tbl_SerializeFromObject_TD_8548_input = Table("ship_mode", ship_mode_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8548_input.addCol("sm_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_8548_input.addCol("sm_carrier", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8548_input.allocateHost();
    tbl_SerializeFromObject_TD_8548_input.loadHost();
    Table tbl_JOIN_INNER_TD_8809_output("tbl_JOIN_INNER_TD_8809_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_8809_output.allocateHost();
    Table tbl_Filter_TD_8234_output("tbl_Filter_TD_8234_output", 6100000, 1, "");
    tbl_Filter_TD_8234_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8984_input;
    tbl_SerializeFromObject_TD_8984_input = Table("ship_mode", ship_mode_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8984_input.addCol("sm_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_8984_input.addCol("sm_carrier", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8984_input.allocateHost();
    tbl_SerializeFromObject_TD_8984_input.loadHost();
    Table tbl_JOIN_INNER_TD_9553_output("tbl_JOIN_INNER_TD_9553_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_9553_output.allocateHost();
    Table tbl_Filter_TD_9224_output("tbl_Filter_TD_9224_output", 6100000, 3, "");
    tbl_Filter_TD_9224_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9658_input;
    tbl_SerializeFromObject_TD_9658_input = Table("time_dim", time_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9658_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_9658_input.addCol("t_time", 4);
    tbl_SerializeFromObject_TD_9658_input.allocateHost();
    tbl_SerializeFromObject_TD_9658_input.loadHost();
    Table tbl_JOIN_INNER_TD_9818_output("tbl_JOIN_INNER_TD_9818_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_9818_output.allocateHost();
    Table tbl_Filter_TD_9637_output("tbl_Filter_TD_9637_output", 6100000, 3, "");
    tbl_Filter_TD_9637_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9307_input;
    tbl_SerializeFromObject_TD_9307_input = Table("time_dim", time_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9307_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_9307_input.addCol("t_time", 4);
    tbl_SerializeFromObject_TD_9307_input.allocateHost();
    tbl_SerializeFromObject_TD_9307_input.loadHost();
    Table tbl_Filter_TD_10672_output("tbl_Filter_TD_10672_output", 6100000, 7, "");
    tbl_Filter_TD_10672_output.allocateHost();
    Table tbl_Filter_TD_10163_output("tbl_Filter_TD_10163_output", 6100000, 7, "");
    tbl_Filter_TD_10163_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10847_input;
    tbl_SerializeFromObject_TD_10847_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10847_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10847_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10847_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10847_input.allocateHost();
    tbl_SerializeFromObject_TD_10847_input.loadHost();
    Table tbl_Filter_TD_10798_output("tbl_Filter_TD_10798_output", 6100000, 7, "");
    tbl_Filter_TD_10798_output.allocateHost();
    Table tbl_Filter_TD_10558_output("tbl_Filter_TD_10558_output", 6100000, 7, "");
    tbl_Filter_TD_10558_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1084_input;
    tbl_SerializeFromObject_TD_1084_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1084_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1084_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1084_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_1084_input.allocateHost();
    tbl_SerializeFromObject_TD_1084_input.loadHost();
    Table tbl_SerializeFromObject_TD_11901_input;
    tbl_SerializeFromObject_TD_11901_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11901_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11901_input.addCol("ws_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_11901_input.addCol("ws_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_11901_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_11901_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_11901_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11901_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_11901_input.allocateHost();
    tbl_SerializeFromObject_TD_11901_input.loadHost();
    Table tbl_SerializeFromObject_TD_11174_input;
    tbl_SerializeFromObject_TD_11174_input = Table("warehouse", warehouse_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11174_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_11174_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11174_input.addCol("w_warehouse_sq_ft", 4);
    tbl_SerializeFromObject_TD_11174_input.addCol("w_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11174_input.addCol("w_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11174_input.addCol("w_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11174_input.addCol("w_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11174_input.allocateHost();
    tbl_SerializeFromObject_TD_11174_input.loadHost();
    Table tbl_SerializeFromObject_TD_11683_input;
    tbl_SerializeFromObject_TD_11683_input = Table("catalog_sales", catalog_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11683_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11683_input.addCol("cs_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_11683_input.addCol("cs_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_11683_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_11683_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_11683_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_11683_input.addCol("cs_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_11683_input.allocateHost();
    tbl_SerializeFromObject_TD_11683_input.loadHost();
    Table tbl_SerializeFromObject_TD_11202_input;
    tbl_SerializeFromObject_TD_11202_input = Table("warehouse", warehouse_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11202_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_11202_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11202_input.addCol("w_warehouse_sq_ft", 4);
    tbl_SerializeFromObject_TD_11202_input.addCol("w_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11202_input.addCol("w_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11202_input.addCol("w_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11202_input.addCol("w_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11202_input.allocateHost();
    tbl_SerializeFromObject_TD_11202_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_888362_s, tv_r_Filter_10_888362_e;
    gettimeofday(&tv_r_Filter_10_888362_s, 0);
    SW_Filter_TD_10558(tbl_SerializeFromObject_TD_11202_input, tbl_Filter_TD_10558_output);
    gettimeofday(&tv_r_Filter_10_888362_e, 0);

    struct timeval tv_r_Filter_10_112859_s, tv_r_Filter_10_112859_e;
    gettimeofday(&tv_r_Filter_10_112859_s, 0);
    SW_Filter_TD_10798(tbl_SerializeFromObject_TD_11683_input, tbl_Filter_TD_10798_output);
    gettimeofday(&tv_r_Filter_10_112859_e, 0);

    struct timeval tv_r_Filter_10_831976_s, tv_r_Filter_10_831976_e;
    gettimeofday(&tv_r_Filter_10_831976_s, 0);
    SW_Filter_TD_10163(tbl_SerializeFromObject_TD_11174_input, tbl_Filter_TD_10163_output);
    gettimeofday(&tv_r_Filter_10_831976_e, 0);

    struct timeval tv_r_Filter_10_354137_s, tv_r_Filter_10_354137_e;
    gettimeofday(&tv_r_Filter_10_354137_s, 0);
    SW_Filter_TD_10672(tbl_SerializeFromObject_TD_11901_input, tbl_Filter_TD_10672_output);
    gettimeofday(&tv_r_Filter_10_354137_e, 0);

    struct timeval tv_r_Filter_9_100223_s, tv_r_Filter_9_100223_e;
    gettimeofday(&tv_r_Filter_9_100223_s, 0);
    SW_Filter_TD_9637(tbl_SerializeFromObject_TD_1084_input, tbl_Filter_TD_9637_output);
    gettimeofday(&tv_r_Filter_9_100223_e, 0);

    struct timeval tv_r_JOIN_INNER_9_736943_s, tv_r_JOIN_INNER_9_736943_e;
    gettimeofday(&tv_r_JOIN_INNER_9_736943_s, 0);
    SW_JOIN_INNER_TD_9818(tbl_Filter_TD_10798_output, tbl_Filter_TD_10558_output, tbl_JOIN_INNER_TD_9818_output);
    gettimeofday(&tv_r_JOIN_INNER_9_736943_e, 0);

    struct timeval tv_r_Filter_9_684352_s, tv_r_Filter_9_684352_e;
    gettimeofday(&tv_r_Filter_9_684352_s, 0);
    SW_Filter_TD_9224(tbl_SerializeFromObject_TD_10847_input, tbl_Filter_TD_9224_output);
    gettimeofday(&tv_r_Filter_9_684352_e, 0);

    struct timeval tv_r_JOIN_INNER_9_404687_s, tv_r_JOIN_INNER_9_404687_e;
    gettimeofday(&tv_r_JOIN_INNER_9_404687_s, 0);
    SW_JOIN_INNER_TD_9553(tbl_Filter_TD_10672_output, tbl_Filter_TD_10163_output, tbl_JOIN_INNER_TD_9553_output);
    gettimeofday(&tv_r_JOIN_INNER_9_404687_e, 0);

    struct timeval tv_r_Filter_8_501707_s, tv_r_Filter_8_501707_e;
    gettimeofday(&tv_r_Filter_8_501707_s, 0);
    SW_Filter_TD_8234(tbl_SerializeFromObject_TD_9307_input, tbl_Filter_TD_8234_output);
    gettimeofday(&tv_r_Filter_8_501707_e, 0);

    struct timeval tv_r_JOIN_INNER_8_376436_s, tv_r_JOIN_INNER_8_376436_e;
    gettimeofday(&tv_r_JOIN_INNER_8_376436_s, 0);
    SW_JOIN_INNER_TD_8809(tbl_JOIN_INNER_TD_9818_output, tbl_Filter_TD_9637_output, tbl_JOIN_INNER_TD_8809_output);
    gettimeofday(&tv_r_JOIN_INNER_8_376436_e, 0);

    struct timeval tv_r_Filter_8_284017_s, tv_r_Filter_8_284017_e;
    gettimeofday(&tv_r_Filter_8_284017_s, 0);
    SW_Filter_TD_8159(tbl_SerializeFromObject_TD_9658_input, tbl_Filter_TD_8159_output);
    gettimeofday(&tv_r_Filter_8_284017_e, 0);

    struct timeval tv_r_JOIN_INNER_8_784164_s, tv_r_JOIN_INNER_8_784164_e;
    gettimeofday(&tv_r_JOIN_INNER_8_784164_s, 0);
    SW_JOIN_INNER_TD_820(tbl_JOIN_INNER_TD_9553_output, tbl_Filter_TD_9224_output, tbl_JOIN_INNER_TD_820_output);
    gettimeofday(&tv_r_JOIN_INNER_8_784164_e, 0);

    struct timeval tv_r_Filter_7_256122_s, tv_r_Filter_7_256122_e;
    gettimeofday(&tv_r_Filter_7_256122_s, 0);
    SW_Filter_TD_7288(tbl_SerializeFromObject_TD_8984_input, tbl_Filter_TD_7288_output);
    gettimeofday(&tv_r_Filter_7_256122_e, 0);

    struct timeval tv_r_JOIN_INNER_7_347900_s, tv_r_JOIN_INNER_7_347900_e;
    gettimeofday(&tv_r_JOIN_INNER_7_347900_s, 0);
    SW_JOIN_INNER_TD_7431(tbl_JOIN_INNER_TD_8809_output, tbl_Filter_TD_8234_output, tbl_JOIN_INNER_TD_7431_output);
    gettimeofday(&tv_r_JOIN_INNER_7_347900_e, 0);

    struct timeval tv_r_Filter_7_118920_s, tv_r_Filter_7_118920_e;
    gettimeofday(&tv_r_Filter_7_118920_s, 0);
    SW_Filter_TD_7464(tbl_SerializeFromObject_TD_8548_input, tbl_Filter_TD_7464_output);
    gettimeofday(&tv_r_Filter_7_118920_e, 0);

    struct timeval tv_r_JOIN_INNER_7_239389_s, tv_r_JOIN_INNER_7_239389_e;
    gettimeofday(&tv_r_JOIN_INNER_7_239389_s, 0);
    SW_JOIN_INNER_TD_7652(tbl_JOIN_INNER_TD_820_output, tbl_Filter_TD_8159_output, tbl_JOIN_INNER_TD_7652_output);
    gettimeofday(&tv_r_JOIN_INNER_7_239389_e, 0);

    struct timeval tv_r_JOIN_INNER_6_773449_s, tv_r_JOIN_INNER_6_773449_e;
    gettimeofday(&tv_r_JOIN_INNER_6_773449_s, 0);
    SW_JOIN_INNER_TD_6285(tbl_JOIN_INNER_TD_7431_output, tbl_Filter_TD_7288_output, tbl_JOIN_INNER_TD_6285_output);
    gettimeofday(&tv_r_JOIN_INNER_6_773449_e, 0);

    struct timeval tv_r_JOIN_INNER_6_919726_s, tv_r_JOIN_INNER_6_919726_e;
    gettimeofday(&tv_r_JOIN_INNER_6_919726_s, 0);
    SW_JOIN_INNER_TD_6889(tbl_JOIN_INNER_TD_7652_output, tbl_Filter_TD_7464_output, tbl_JOIN_INNER_TD_6889_output);
    gettimeofday(&tv_r_JOIN_INNER_6_919726_e, 0);

    struct timeval tv_r_Aggregate_5_85156_s, tv_r_Aggregate_5_85156_e;
    gettimeofday(&tv_r_Aggregate_5_85156_s, 0);
    SW_Aggregate_TD_5382(tbl_JOIN_INNER_TD_6285_output, tbl_Aggregate_TD_5382_output);
    gettimeofday(&tv_r_Aggregate_5_85156_e, 0);

    struct timeval tv_r_Aggregate_5_36100_s, tv_r_Aggregate_5_36100_e;
    gettimeofday(&tv_r_Aggregate_5_36100_s, 0);
    SW_Aggregate_TD_5722(tbl_JOIN_INNER_TD_6889_output, tbl_Aggregate_TD_5722_output);
    gettimeofday(&tv_r_Aggregate_5_36100_e, 0);

    struct timeval tv_r_Union_4_503149_s, tv_r_Union_4_503149_e;
    gettimeofday(&tv_r_Union_4_503149_s, 0);
    SW_Union_TD_4115(tbl_Aggregate_TD_5722_output, tbl_Aggregate_TD_5382_output, tbl_Union_TD_4115_output);
    gettimeofday(&tv_r_Union_4_503149_e, 0);

    struct timeval tv_r_Aggregate_3_818346_s, tv_r_Aggregate_3_818346_e;
    gettimeofday(&tv_r_Aggregate_3_818346_s, 0);
    SW_Aggregate_TD_3208(tbl_Union_TD_4115_output, tbl_Aggregate_TD_3208_output);
    gettimeofday(&tv_r_Aggregate_3_818346_e, 0);

    struct timeval tv_r_Sort_2_263407_s, tv_r_Sort_2_263407_e;
    gettimeofday(&tv_r_Sort_2_263407_s, 0);
    SW_Sort_TD_2221(tbl_Aggregate_TD_3208_output, tbl_Sort_TD_2221_output);
    gettimeofday(&tv_r_Sort_2_263407_e, 0);

    struct timeval tv_r_LocalLimit_1_688277_s, tv_r_LocalLimit_1_688277_e;
    gettimeofday(&tv_r_LocalLimit_1_688277_s, 0);
    SW_LocalLimit_TD_176(tbl_Sort_TD_2221_output, tbl_LocalLimit_TD_176_output);
    gettimeofday(&tv_r_LocalLimit_1_688277_e, 0);

    struct timeval tv_r_GlobalLimit_0_264867_s, tv_r_GlobalLimit_0_264867_e;
    gettimeofday(&tv_r_GlobalLimit_0_264867_s, 0);
    SW_GlobalLimit_TD_0880(tbl_LocalLimit_TD_176_output, tbl_GlobalLimit_TD_0880_output);
    gettimeofday(&tv_r_GlobalLimit_0_264867_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_888362_s, &tv_r_Filter_10_888362_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11202_input: " << tbl_SerializeFromObject_TD_11202_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_112859_s, &tv_r_Filter_10_112859_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11683_input: " << tbl_SerializeFromObject_TD_11683_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_831976_s, &tv_r_Filter_10_831976_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11174_input: " << tbl_SerializeFromObject_TD_11174_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_354137_s, &tv_r_Filter_10_354137_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11901_input: " << tbl_SerializeFromObject_TD_11901_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_100223_s, &tv_r_Filter_9_100223_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1084_input: " << tbl_SerializeFromObject_TD_1084_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_736943_s, &tv_r_JOIN_INNER_9_736943_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10798_output: " << tbl_Filter_TD_10798_output.getNumRow() << " " << "tbl_Filter_TD_10558_output: " << tbl_Filter_TD_10558_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_684352_s, &tv_r_Filter_9_684352_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10847_input: " << tbl_SerializeFromObject_TD_10847_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_404687_s, &tv_r_JOIN_INNER_9_404687_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10672_output: " << tbl_Filter_TD_10672_output.getNumRow() << " " << "tbl_Filter_TD_10163_output: " << tbl_Filter_TD_10163_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_501707_s, &tv_r_Filter_8_501707_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9307_input: " << tbl_SerializeFromObject_TD_9307_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_376436_s, &tv_r_JOIN_INNER_8_376436_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9818_output: " << tbl_JOIN_INNER_TD_9818_output.getNumRow() << " " << "tbl_Filter_TD_9637_output: " << tbl_Filter_TD_9637_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_284017_s, &tv_r_Filter_8_284017_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9658_input: " << tbl_SerializeFromObject_TD_9658_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_784164_s, &tv_r_JOIN_INNER_8_784164_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9553_output: " << tbl_JOIN_INNER_TD_9553_output.getNumRow() << " " << "tbl_Filter_TD_9224_output: " << tbl_Filter_TD_9224_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_256122_s, &tv_r_Filter_7_256122_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8984_input: " << tbl_SerializeFromObject_TD_8984_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_347900_s, &tv_r_JOIN_INNER_7_347900_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8809_output: " << tbl_JOIN_INNER_TD_8809_output.getNumRow() << " " << "tbl_Filter_TD_8234_output: " << tbl_Filter_TD_8234_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_118920_s, &tv_r_Filter_7_118920_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8548_input: " << tbl_SerializeFromObject_TD_8548_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_239389_s, &tv_r_JOIN_INNER_7_239389_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_820_output: " << tbl_JOIN_INNER_TD_820_output.getNumRow() << " " << "tbl_Filter_TD_8159_output: " << tbl_Filter_TD_8159_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_773449_s, &tv_r_JOIN_INNER_6_773449_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7431_output: " << tbl_JOIN_INNER_TD_7431_output.getNumRow() << " " << "tbl_Filter_TD_7288_output: " << tbl_Filter_TD_7288_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_919726_s, &tv_r_JOIN_INNER_6_919726_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7652_output: " << tbl_JOIN_INNER_TD_7652_output.getNumRow() << " " << "tbl_Filter_TD_7464_output: " << tbl_Filter_TD_7464_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_85156_s, &tv_r_Aggregate_5_85156_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6285_output: " << tbl_JOIN_INNER_TD_6285_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_36100_s, &tv_r_Aggregate_5_36100_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6889_output: " << tbl_JOIN_INNER_TD_6889_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_503149_s, &tv_r_Union_4_503149_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5722_output: " << tbl_Aggregate_TD_5722_output.getNumRow() << " " << "tbl_Aggregate_TD_5382_output: " << tbl_Aggregate_TD_5382_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_818346_s, &tv_r_Aggregate_3_818346_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4115_output: " << tbl_Union_TD_4115_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_263407_s, &tv_r_Sort_2_263407_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3208_output: " << tbl_Aggregate_TD_3208_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_688277_s, &tv_r_LocalLimit_1_688277_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2221_output: " << tbl_Sort_TD_2221_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_264867_s, &tv_r_GlobalLimit_0_264867_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_176_output: " << tbl_LocalLimit_TD_176_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.8204105 * 1000 << "ms" << std::endl; 
    return 0; 
}
