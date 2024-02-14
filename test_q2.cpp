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

#include "cfgFunc_q2.hpp" 
#include "q2.hpp" 

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
    std::cout << "NOTE:running query #2\n."; 
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
    Table tbl_Sort_TD_0658_output("tbl_Sort_TD_0658_output", 6100000, 8, "");
    tbl_Sort_TD_0658_output.allocateHost();
    Table tbl_Project_TD_1793_output("tbl_Project_TD_1793_output", 6100000, 8, "");
    tbl_Project_TD_1793_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2609_output("tbl_JOIN_INNER_TD_2609_output", 6100000, 15, "");
    tbl_JOIN_INNER_TD_2609_output.allocateHost();
    Table tbl_Project_TD_3932_output("tbl_Project_TD_3932_output", 6100000, 8, "");
    tbl_Project_TD_3932_output.allocateHost();
    Table tbl_Project_TD_3832_output("tbl_Project_TD_3832_output", 6100000, 8, "");
    tbl_Project_TD_3832_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4402_output("tbl_JOIN_INNER_TD_4402_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4402_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4663_output("tbl_JOIN_INNER_TD_4663_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4663_output.allocateHost();
    Table tbl_Aggregate_TD_5606_output("tbl_Aggregate_TD_5606_output", 6100000, 8, "");
    tbl_Aggregate_TD_5606_output.allocateHost();
    Table tbl_Filter_TD_5864_output("tbl_Filter_TD_5864_output", 6100000, 1, "");
    tbl_Filter_TD_5864_output.allocateHost();
    Table tbl_Aggregate_TD_5898_output("tbl_Aggregate_TD_5898_output", 6100000, 8, "");
    tbl_Aggregate_TD_5898_output.allocateHost();
    Table tbl_Filter_TD_5946_output("tbl_Filter_TD_5946_output", 6100000, 1, "");
    tbl_Filter_TD_5946_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6408_output("tbl_JOIN_INNER_TD_6408_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6408_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6130_input;
    tbl_SerializeFromObject_TD_6130_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6130_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_6130_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6130_input.allocateHost();
    tbl_SerializeFromObject_TD_6130_input.loadHost();
    Table tbl_JOIN_INNER_TD_6539_output("tbl_JOIN_INNER_TD_6539_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6539_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6656_input;
    tbl_SerializeFromObject_TD_6656_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6656_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_6656_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6656_input.allocateHost();
    tbl_SerializeFromObject_TD_6656_input.loadHost();
    Table tbl_Union_TD_7314_output("tbl_Union_TD_7314_output", 6100000, 2, "");
    tbl_Union_TD_7314_output.allocateHost();
    Table tbl_Filter_TD_79_output("tbl_Filter_TD_79_output", 6100000, 3, "");
    tbl_Filter_TD_79_output.allocateHost();
    Table tbl_Union_TD_7924_output("tbl_Union_TD_7924_output", 6100000, 2, "");
    tbl_Union_TD_7924_output.allocateHost();
    Table tbl_Filter_TD_763_output("tbl_Filter_TD_763_output", 6100000, 3, "");
    tbl_Filter_TD_763_output.allocateHost();
    Table tbl_Project_TD_8713_output("tbl_Project_TD_8713_output", 6100000, 2, "");
    tbl_Project_TD_8713_output.allocateHost();
    Table tbl_Project_TD_8213_output("tbl_Project_TD_8213_output", 6100000, 2, "");
    tbl_Project_TD_8213_output.allocateHost();
    Table tbl_SerializeFromObject_TD_832_input;
    tbl_SerializeFromObject_TD_832_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_832_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_832_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_832_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_832_input.allocateHost();
    tbl_SerializeFromObject_TD_832_input.loadHost();
    Table tbl_Project_TD_8267_output("tbl_Project_TD_8267_output", 6100000, 2, "");
    tbl_Project_TD_8267_output.allocateHost();
    Table tbl_Project_TD_8575_output("tbl_Project_TD_8575_output", 6100000, 2, "");
    tbl_Project_TD_8575_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8816_input;
    tbl_SerializeFromObject_TD_8816_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8816_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8816_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_8816_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8816_input.allocateHost();
    tbl_SerializeFromObject_TD_8816_input.loadHost();
    Table tbl_Filter_TD_9577_output("tbl_Filter_TD_9577_output", 6100000, 2, "");
    tbl_Filter_TD_9577_output.allocateHost();
    Table tbl_Filter_TD_9200_output("tbl_Filter_TD_9200_output", 6100000, 2, "");
    tbl_Filter_TD_9200_output.allocateHost();
    Table tbl_Filter_TD_9648_output("tbl_Filter_TD_9648_output", 6100000, 2, "");
    tbl_Filter_TD_9648_output.allocateHost();
    Table tbl_Filter_TD_9581_output("tbl_Filter_TD_9581_output", 6100000, 2, "");
    tbl_Filter_TD_9581_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10781_input;
    tbl_SerializeFromObject_TD_10781_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10781_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10781_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10781_input.allocateHost();
    tbl_SerializeFromObject_TD_10781_input.loadHost();
    Table tbl_SerializeFromObject_TD_10768_input;
    tbl_SerializeFromObject_TD_10768_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10768_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10768_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10768_input.allocateHost();
    tbl_SerializeFromObject_TD_10768_input.loadHost();
    Table tbl_SerializeFromObject_TD_1035_input;
    tbl_SerializeFromObject_TD_1035_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1035_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1035_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1035_input.allocateHost();
    tbl_SerializeFromObject_TD_1035_input.loadHost();
    Table tbl_SerializeFromObject_TD_10370_input;
    tbl_SerializeFromObject_TD_10370_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10370_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10370_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10370_input.allocateHost();
    tbl_SerializeFromObject_TD_10370_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_816016_s, tv_r_Filter_9_816016_e;
    gettimeofday(&tv_r_Filter_9_816016_s, 0);
    SW_Filter_TD_9581(tbl_SerializeFromObject_TD_10370_input, tbl_Filter_TD_9581_output);
    gettimeofday(&tv_r_Filter_9_816016_e, 0);

    struct timeval tv_r_Filter_9_471138_s, tv_r_Filter_9_471138_e;
    gettimeofday(&tv_r_Filter_9_471138_s, 0);
    SW_Filter_TD_9648(tbl_SerializeFromObject_TD_1035_input, tbl_Filter_TD_9648_output);
    gettimeofday(&tv_r_Filter_9_471138_e, 0);

    struct timeval tv_r_Filter_9_234011_s, tv_r_Filter_9_234011_e;
    gettimeofday(&tv_r_Filter_9_234011_s, 0);
    SW_Filter_TD_9200(tbl_SerializeFromObject_TD_10768_input, tbl_Filter_TD_9200_output);
    gettimeofday(&tv_r_Filter_9_234011_e, 0);

    struct timeval tv_r_Filter_9_160248_s, tv_r_Filter_9_160248_e;
    gettimeofday(&tv_r_Filter_9_160248_s, 0);
    SW_Filter_TD_9577(tbl_SerializeFromObject_TD_10781_input, tbl_Filter_TD_9577_output);
    gettimeofday(&tv_r_Filter_9_160248_e, 0);

    struct timeval tv_r_Project_8_45637_s, tv_r_Project_8_45637_e;
    gettimeofday(&tv_r_Project_8_45637_s, 0);
    SW_Project_TD_8575(tbl_Filter_TD_9581_output, tbl_Project_TD_8575_output);
    gettimeofday(&tv_r_Project_8_45637_e, 0);

    struct timeval tv_r_Project_8_403507_s, tv_r_Project_8_403507_e;
    gettimeofday(&tv_r_Project_8_403507_s, 0);
    SW_Project_TD_8267(tbl_Filter_TD_9648_output, tbl_Project_TD_8267_output);
    gettimeofday(&tv_r_Project_8_403507_e, 0);

    struct timeval tv_r_Project_8_245577_s, tv_r_Project_8_245577_e;
    gettimeofday(&tv_r_Project_8_245577_s, 0);
    SW_Project_TD_8213(tbl_Filter_TD_9200_output, tbl_Project_TD_8213_output);
    gettimeofday(&tv_r_Project_8_245577_e, 0);

    struct timeval tv_r_Project_8_922658_s, tv_r_Project_8_922658_e;
    gettimeofday(&tv_r_Project_8_922658_s, 0);
    SW_Project_TD_8713(tbl_Filter_TD_9577_output, tbl_Project_TD_8713_output);
    gettimeofday(&tv_r_Project_8_922658_e, 0);

    struct timeval tv_r_Filter_7_468304_s, tv_r_Filter_7_468304_e;
    gettimeofday(&tv_r_Filter_7_468304_s, 0);
    SW_Filter_TD_763(tbl_SerializeFromObject_TD_8816_input, tbl_Filter_TD_763_output);
    gettimeofday(&tv_r_Filter_7_468304_e, 0);

    struct timeval tv_r_Union_7_140296_s, tv_r_Union_7_140296_e;
    gettimeofday(&tv_r_Union_7_140296_s, 0);
    SW_Union_TD_7924(tbl_Project_TD_8267_output, tbl_Project_TD_8575_output, tbl_Union_TD_7924_output);
    gettimeofday(&tv_r_Union_7_140296_e, 0);

    struct timeval tv_r_Filter_7_983334_s, tv_r_Filter_7_983334_e;
    gettimeofday(&tv_r_Filter_7_983334_s, 0);
    SW_Filter_TD_79(tbl_SerializeFromObject_TD_832_input, tbl_Filter_TD_79_output);
    gettimeofday(&tv_r_Filter_7_983334_e, 0);

    struct timeval tv_r_Union_7_912257_s, tv_r_Union_7_912257_e;
    gettimeofday(&tv_r_Union_7_912257_s, 0);
    SW_Union_TD_7314(tbl_Project_TD_8713_output, tbl_Project_TD_8213_output, tbl_Union_TD_7314_output);
    gettimeofday(&tv_r_Union_7_912257_e, 0);

    struct timeval tv_r_JOIN_INNER_6_951765_s, tv_r_JOIN_INNER_6_951765_e;
    gettimeofday(&tv_r_JOIN_INNER_6_951765_s, 0);
    SW_JOIN_INNER_TD_6539(tbl_Union_TD_7924_output, tbl_Filter_TD_763_output, tbl_JOIN_INNER_TD_6539_output);
    gettimeofday(&tv_r_JOIN_INNER_6_951765_e, 0);

    struct timeval tv_r_JOIN_INNER_6_30023_s, tv_r_JOIN_INNER_6_30023_e;
    gettimeofday(&tv_r_JOIN_INNER_6_30023_s, 0);
    SW_JOIN_INNER_TD_6408(tbl_Union_TD_7314_output, tbl_Filter_TD_79_output, tbl_JOIN_INNER_TD_6408_output);
    gettimeofday(&tv_r_JOIN_INNER_6_30023_e, 0);

    struct timeval tv_r_Filter_5_819056_s, tv_r_Filter_5_819056_e;
    gettimeofday(&tv_r_Filter_5_819056_s, 0);
    SW_Filter_TD_5946(tbl_SerializeFromObject_TD_6656_input, tbl_Filter_TD_5946_output);
    gettimeofday(&tv_r_Filter_5_819056_e, 0);

    struct timeval tv_r_Aggregate_5_495608_s, tv_r_Aggregate_5_495608_e;
    gettimeofday(&tv_r_Aggregate_5_495608_s, 0);
    SW_Aggregate_TD_5898(tbl_JOIN_INNER_TD_6539_output, tbl_Aggregate_TD_5898_output);
    gettimeofday(&tv_r_Aggregate_5_495608_e, 0);

    struct timeval tv_r_Filter_5_592562_s, tv_r_Filter_5_592562_e;
    gettimeofday(&tv_r_Filter_5_592562_s, 0);
    SW_Filter_TD_5864(tbl_SerializeFromObject_TD_6130_input, tbl_Filter_TD_5864_output);
    gettimeofday(&tv_r_Filter_5_592562_e, 0);

    struct timeval tv_r_Aggregate_5_510920_s, tv_r_Aggregate_5_510920_e;
    gettimeofday(&tv_r_Aggregate_5_510920_s, 0);
    SW_Aggregate_TD_5606(tbl_JOIN_INNER_TD_6408_output, tbl_Aggregate_TD_5606_output);
    gettimeofday(&tv_r_Aggregate_5_510920_e, 0);

    struct timeval tv_r_JOIN_INNER_4_394482_s, tv_r_JOIN_INNER_4_394482_e;
    gettimeofday(&tv_r_JOIN_INNER_4_394482_s, 0);
    SW_JOIN_INNER_TD_4663(tbl_Aggregate_TD_5898_output, tbl_Filter_TD_5946_output, tbl_JOIN_INNER_TD_4663_output);
    gettimeofday(&tv_r_JOIN_INNER_4_394482_e, 0);

    struct timeval tv_r_JOIN_INNER_4_453439_s, tv_r_JOIN_INNER_4_453439_e;
    gettimeofday(&tv_r_JOIN_INNER_4_453439_s, 0);
    SW_JOIN_INNER_TD_4402(tbl_Aggregate_TD_5606_output, tbl_Filter_TD_5864_output, tbl_JOIN_INNER_TD_4402_output);
    gettimeofday(&tv_r_JOIN_INNER_4_453439_e, 0);

    struct timeval tv_r_Project_3_285460_s, tv_r_Project_3_285460_e;
    gettimeofday(&tv_r_Project_3_285460_s, 0);
    SW_Project_TD_3832(tbl_JOIN_INNER_TD_4663_output, tbl_Project_TD_3832_output);
    gettimeofday(&tv_r_Project_3_285460_e, 0);

    struct timeval tv_r_Project_3_911844_s, tv_r_Project_3_911844_e;
    gettimeofday(&tv_r_Project_3_911844_s, 0);
    SW_Project_TD_3932(tbl_JOIN_INNER_TD_4402_output, tbl_Project_TD_3932_output);
    gettimeofday(&tv_r_Project_3_911844_e, 0);

    struct timeval tv_r_JOIN_INNER_2_588083_s, tv_r_JOIN_INNER_2_588083_e;
    gettimeofday(&tv_r_JOIN_INNER_2_588083_s, 0);
    SW_JOIN_INNER_TD_2609(tbl_Project_TD_3932_output, tbl_Project_TD_3832_output, tbl_JOIN_INNER_TD_2609_output);
    gettimeofday(&tv_r_JOIN_INNER_2_588083_e, 0);

    struct timeval tv_r_Project_1_445828_s, tv_r_Project_1_445828_e;
    gettimeofday(&tv_r_Project_1_445828_s, 0);
    SW_Project_TD_1793(tbl_JOIN_INNER_TD_2609_output, tbl_Project_TD_1793_output);
    gettimeofday(&tv_r_Project_1_445828_e, 0);

    struct timeval tv_r_Sort_0_592885_s, tv_r_Sort_0_592885_e;
    gettimeofday(&tv_r_Sort_0_592885_s, 0);
    SW_Sort_TD_0658(tbl_Project_TD_1793_output, tbl_Sort_TD_0658_output);
    gettimeofday(&tv_r_Sort_0_592885_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_816016_s, &tv_r_Filter_9_816016_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10370_input: " << tbl_SerializeFromObject_TD_10370_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_471138_s, &tv_r_Filter_9_471138_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1035_input: " << tbl_SerializeFromObject_TD_1035_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_234011_s, &tv_r_Filter_9_234011_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10768_input: " << tbl_SerializeFromObject_TD_10768_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_160248_s, &tv_r_Filter_9_160248_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10781_input: " << tbl_SerializeFromObject_TD_10781_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_45637_s, &tv_r_Project_8_45637_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9581_output: " << tbl_Filter_TD_9581_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_403507_s, &tv_r_Project_8_403507_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9648_output: " << tbl_Filter_TD_9648_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_245577_s, &tv_r_Project_8_245577_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9200_output: " << tbl_Filter_TD_9200_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_922658_s, &tv_r_Project_8_922658_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9577_output: " << tbl_Filter_TD_9577_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_468304_s, &tv_r_Filter_7_468304_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8816_input: " << tbl_SerializeFromObject_TD_8816_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_140296_s, &tv_r_Union_7_140296_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8267_output: " << tbl_Project_TD_8267_output.getNumRow() << " " << "tbl_Project_TD_8575_output: " << tbl_Project_TD_8575_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_983334_s, &tv_r_Filter_7_983334_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_832_input: " << tbl_SerializeFromObject_TD_832_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_912257_s, &tv_r_Union_7_912257_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8713_output: " << tbl_Project_TD_8713_output.getNumRow() << " " << "tbl_Project_TD_8213_output: " << tbl_Project_TD_8213_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_951765_s, &tv_r_JOIN_INNER_6_951765_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7924_output: " << tbl_Union_TD_7924_output.getNumRow() << " " << "tbl_Filter_TD_763_output: " << tbl_Filter_TD_763_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_30023_s, &tv_r_JOIN_INNER_6_30023_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7314_output: " << tbl_Union_TD_7314_output.getNumRow() << " " << "tbl_Filter_TD_79_output: " << tbl_Filter_TD_79_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_819056_s, &tv_r_Filter_5_819056_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6656_input: " << tbl_SerializeFromObject_TD_6656_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_495608_s, &tv_r_Aggregate_5_495608_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6539_output: " << tbl_JOIN_INNER_TD_6539_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_592562_s, &tv_r_Filter_5_592562_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6130_input: " << tbl_SerializeFromObject_TD_6130_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_510920_s, &tv_r_Aggregate_5_510920_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6408_output: " << tbl_JOIN_INNER_TD_6408_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_394482_s, &tv_r_JOIN_INNER_4_394482_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5898_output: " << tbl_Aggregate_TD_5898_output.getNumRow() << " " << "tbl_Filter_TD_5946_output: " << tbl_Filter_TD_5946_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_453439_s, &tv_r_JOIN_INNER_4_453439_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5606_output: " << tbl_Aggregate_TD_5606_output.getNumRow() << " " << "tbl_Filter_TD_5864_output: " << tbl_Filter_TD_5864_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_285460_s, &tv_r_Project_3_285460_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4663_output: " << tbl_JOIN_INNER_TD_4663_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_911844_s, &tv_r_Project_3_911844_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4402_output: " << tbl_JOIN_INNER_TD_4402_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_588083_s, &tv_r_JOIN_INNER_2_588083_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3932_output: " << tbl_Project_TD_3932_output.getNumRow() << " " << "tbl_Project_TD_3832_output: " << tbl_Project_TD_3832_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_445828_s, &tv_r_Project_1_445828_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2609_output: " << tbl_JOIN_INNER_TD_2609_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_592885_s, &tv_r_Sort_0_592885_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1793_output: " << tbl_Project_TD_1793_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.435018 * 1000 << "ms" << std::endl; 
    return 0; 
}
