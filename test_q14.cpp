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

#include "cfgFunc_q14.hpp" 
#include "q14.hpp" 

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
    std::cout << "NOTE:running query #14\n."; 
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
    Table tbl_Sort_TD_2427_output("tbl_Sort_TD_2427_output", 6100000, 6, "");
    tbl_Sort_TD_2427_output.allocateHost();
    Table tbl_Aggregate_TD_3478_output("tbl_Aggregate_TD_3478_output", 6100000, 6, "");
    tbl_Aggregate_TD_3478_output.allocateHost();
    Table tbl_Union_TD_5991_output("tbl_Union_TD_5991_output", 6100000, 6, "");
    tbl_Union_TD_5991_output.allocateHost();
    Table tbl_Project_TD_6918_output("tbl_Project_TD_6918_output", 6100000, 6, "");
    tbl_Project_TD_6918_output.allocateHost();
    Table tbl_Project_TD_6593_output("tbl_Project_TD_6593_output", 6100000, 6, "");
    tbl_Project_TD_6593_output.allocateHost();
    Table tbl_Project_TD_6549_output("tbl_Project_TD_6549_output", 6100000, 6, "");
    tbl_Project_TD_6549_output.allocateHost();
    Table tbl_Filter_TD_7267_output("tbl_Filter_TD_7267_output", 6100000, 5, "");
    tbl_Filter_TD_7267_output.allocateHost();
    Table tbl_Filter_TD_7421_output("tbl_Filter_TD_7421_output", 6100000, 5, "");
    tbl_Filter_TD_7421_output.allocateHost();
    Table tbl_Filter_TD_7573_output("tbl_Filter_TD_7573_output", 6100000, 5, "");
    tbl_Filter_TD_7573_output.allocateHost();
    Table tbl_Aggregate_TD_821_output("tbl_Aggregate_TD_821_output", 6100000, 5, "");
    tbl_Aggregate_TD_821_output.allocateHost();
    Table tbl_Aggregate_TD_8754_output("tbl_Aggregate_TD_8754_output", 6100000, 1, "");
    tbl_Aggregate_TD_8754_output.allocateHost();
    Table tbl_Aggregate_TD_8690_output("tbl_Aggregate_TD_8690_output", 6100000, 5, "");
    tbl_Aggregate_TD_8690_output.allocateHost();
    Table tbl_Aggregate_TD_8113_output("tbl_Aggregate_TD_8113_output", 6100000, 1, "");
    tbl_Aggregate_TD_8113_output.allocateHost();
    Table tbl_Aggregate_TD_8247_output("tbl_Aggregate_TD_8247_output", 6100000, 5, "");
    tbl_Aggregate_TD_8247_output.allocateHost();
    Table tbl_Aggregate_TD_8527_output("tbl_Aggregate_TD_8527_output", 6100000, 1, "");
    tbl_Aggregate_TD_8527_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9536_output("tbl_JOIN_INNER_TD_9536_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_9536_output.allocateHost();
    Table tbl_Union_TD_9383_output("tbl_Union_TD_9383_output", 6100000, 2, "");
    tbl_Union_TD_9383_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9517_output("tbl_JOIN_INNER_TD_9517_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_9517_output.allocateHost();
    Table tbl_Union_TD_951_output("tbl_Union_TD_951_output", 6100000, 2, "");
    tbl_Union_TD_951_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9385_output("tbl_JOIN_INNER_TD_9385_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_9385_output.allocateHost();
    Table tbl_Union_TD_9511_output("tbl_Union_TD_9511_output", 6100000, 2, "");
    tbl_Union_TD_9511_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10331_output("tbl_JOIN_INNER_TD_10331_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10331_output.allocateHost();
    Table tbl_Filter_TD_1011_output("tbl_Filter_TD_1011_output", 6100000, 1, "");
    tbl_Filter_TD_1011_output.allocateHost();
    Table tbl_Project_TD_10872_output("tbl_Project_TD_10872_output", 6100000, 2, "");
    tbl_Project_TD_10872_output.allocateHost();
    Table tbl_Project_TD_1066_output("tbl_Project_TD_1066_output", 6100000, 2, "");
    tbl_Project_TD_1066_output.allocateHost();
    Table tbl_Project_TD_10270_output("tbl_Project_TD_10270_output", 6100000, 2, "");
    tbl_Project_TD_10270_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10887_output("tbl_JOIN_INNER_TD_10887_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10887_output.allocateHost();
    Table tbl_Filter_TD_10831_output("tbl_Filter_TD_10831_output", 6100000, 1, "");
    tbl_Filter_TD_10831_output.allocateHost();
    Table tbl_Project_TD_10543_output("tbl_Project_TD_10543_output", 6100000, 2, "");
    tbl_Project_TD_10543_output.allocateHost();
    Table tbl_Project_TD_1059_output("tbl_Project_TD_1059_output", 6100000, 2, "");
    tbl_Project_TD_1059_output.allocateHost();
    Table tbl_Project_TD_10407_output("tbl_Project_TD_10407_output", 6100000, 2, "");
    tbl_Project_TD_10407_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10276_output("tbl_JOIN_INNER_TD_10276_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10276_output.allocateHost();
    Table tbl_Filter_TD_10841_output("tbl_Filter_TD_10841_output", 6100000, 1, "");
    tbl_Filter_TD_10841_output.allocateHost();
    Table tbl_Project_TD_10562_output("tbl_Project_TD_10562_output", 6100000, 2, "");
    tbl_Project_TD_10562_output.allocateHost();
    Table tbl_Project_TD_10206_output("tbl_Project_TD_10206_output", 6100000, 2, "");
    tbl_Project_TD_10206_output.allocateHost();
    Table tbl_Project_TD_10208_output("tbl_Project_TD_10208_output", 6100000, 2, "");
    tbl_Project_TD_10208_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_1184_output("tbl_JOIN_LEFTSEMI_TD_1184_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_1184_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11793_output("tbl_JOIN_LEFTSEMI_TD_11793_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11793_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11169_input;
    tbl_SerializeFromObject_TD_11169_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11169_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11169_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11169_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11169_input.allocateHost();
    tbl_SerializeFromObject_TD_11169_input.loadHost();
    Table tbl_JOIN_INNER_TD_11160_output("tbl_JOIN_INNER_TD_11160_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11160_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11454_output("tbl_JOIN_INNER_TD_11454_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11454_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11233_output("tbl_JOIN_INNER_TD_11233_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11233_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11312_output("tbl_JOIN_LEFTSEMI_TD_11312_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11312_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11458_output("tbl_JOIN_LEFTSEMI_TD_11458_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11458_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11106_input;
    tbl_SerializeFromObject_TD_11106_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11106_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11106_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11106_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11106_input.allocateHost();
    tbl_SerializeFromObject_TD_11106_input.loadHost();
    Table tbl_JOIN_INNER_TD_11983_output("tbl_JOIN_INNER_TD_11983_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11983_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11795_output("tbl_JOIN_INNER_TD_11795_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11795_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11779_output("tbl_JOIN_INNER_TD_11779_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11779_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11860_output("tbl_JOIN_LEFTSEMI_TD_11860_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11860_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11505_output("tbl_JOIN_LEFTSEMI_TD_11505_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11505_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11850_input;
    tbl_SerializeFromObject_TD_11850_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11850_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11850_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11850_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11850_input.allocateHost();
    tbl_SerializeFromObject_TD_11850_input.loadHost();
    Table tbl_JOIN_INNER_TD_11535_output("tbl_JOIN_INNER_TD_11535_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11535_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11729_output("tbl_JOIN_INNER_TD_11729_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11729_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11340_output("tbl_JOIN_INNER_TD_11340_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11340_output.allocateHost();
    Table tbl_Filter_TD_12277_output("tbl_Filter_TD_12277_output", 6100000, 4, "");
    tbl_Filter_TD_12277_output.allocateHost();
    Table tbl_Project_TD_12622_output("tbl_Project_TD_12622_output", 6100000, 1, "");
    tbl_Project_TD_12622_output.allocateHost();
    Table tbl_Filter_TD_12274_output("tbl_Filter_TD_12274_output", 6100000, 4, "");
    tbl_Filter_TD_12274_output.allocateHost();
    Table tbl_Project_TD_12509_output("tbl_Project_TD_12509_output", 6100000, 1, "");
    tbl_Project_TD_12509_output.allocateHost();
    Table tbl_Filter_TD_12193_output("tbl_Filter_TD_12193_output", 6100000, 3, "");
    tbl_Filter_TD_12193_output.allocateHost();
    Table tbl_Filter_TD_1238_output("tbl_Filter_TD_1238_output", 6100000, 1, "");
    tbl_Filter_TD_1238_output.allocateHost();
    Table tbl_Filter_TD_12854_output("tbl_Filter_TD_12854_output", 6100000, 3, "");
    tbl_Filter_TD_12854_output.allocateHost();
    Table tbl_Filter_TD_12284_output("tbl_Filter_TD_12284_output", 6100000, 1, "");
    tbl_Filter_TD_12284_output.allocateHost();
    Table tbl_Filter_TD_12738_output("tbl_Filter_TD_12738_output", 6100000, 3, "");
    tbl_Filter_TD_12738_output.allocateHost();
    Table tbl_Filter_TD_12431_output("tbl_Filter_TD_12431_output", 6100000, 1, "");
    tbl_Filter_TD_12431_output.allocateHost();
    Table tbl_Filter_TD_12806_output("tbl_Filter_TD_12806_output", 6100000, 4, "");
    tbl_Filter_TD_12806_output.allocateHost();
    Table tbl_Project_TD_12113_output("tbl_Project_TD_12113_output", 6100000, 1, "");
    tbl_Project_TD_12113_output.allocateHost();
    Table tbl_Filter_TD_12696_output("tbl_Filter_TD_12696_output", 6100000, 4, "");
    tbl_Filter_TD_12696_output.allocateHost();
    Table tbl_Project_TD_12240_output("tbl_Project_TD_12240_output", 6100000, 1, "");
    tbl_Project_TD_12240_output.allocateHost();
    Table tbl_Filter_TD_12208_output("tbl_Filter_TD_12208_output", 6100000, 3, "");
    tbl_Filter_TD_12208_output.allocateHost();
    Table tbl_Filter_TD_12288_output("tbl_Filter_TD_12288_output", 6100000, 1, "");
    tbl_Filter_TD_12288_output.allocateHost();
    Table tbl_Filter_TD_1246_output("tbl_Filter_TD_1246_output", 6100000, 3, "");
    tbl_Filter_TD_1246_output.allocateHost();
    Table tbl_Filter_TD_1255_output("tbl_Filter_TD_1255_output", 6100000, 1, "");
    tbl_Filter_TD_1255_output.allocateHost();
    Table tbl_Filter_TD_12852_output("tbl_Filter_TD_12852_output", 6100000, 3, "");
    tbl_Filter_TD_12852_output.allocateHost();
    Table tbl_Filter_TD_12105_output("tbl_Filter_TD_12105_output", 6100000, 1, "");
    tbl_Filter_TD_12105_output.allocateHost();
    Table tbl_Filter_TD_12571_output("tbl_Filter_TD_12571_output", 6100000, 4, "");
    tbl_Filter_TD_12571_output.allocateHost();
    Table tbl_Project_TD_12573_output("tbl_Project_TD_12573_output", 6100000, 1, "");
    tbl_Project_TD_12573_output.allocateHost();
    Table tbl_Filter_TD_12493_output("tbl_Filter_TD_12493_output", 6100000, 4, "");
    tbl_Filter_TD_12493_output.allocateHost();
    Table tbl_Project_TD_12309_output("tbl_Project_TD_12309_output", 6100000, 1, "");
    tbl_Project_TD_12309_output.allocateHost();
    Table tbl_Filter_TD_12778_output("tbl_Filter_TD_12778_output", 6100000, 3, "");
    tbl_Filter_TD_12778_output.allocateHost();
    Table tbl_Filter_TD_1224_output("tbl_Filter_TD_1224_output", 6100000, 1, "");
    tbl_Filter_TD_1224_output.allocateHost();
    Table tbl_Filter_TD_12930_output("tbl_Filter_TD_12930_output", 6100000, 3, "");
    tbl_Filter_TD_12930_output.allocateHost();
    Table tbl_Filter_TD_12813_output("tbl_Filter_TD_12813_output", 6100000, 1, "");
    tbl_Filter_TD_12813_output.allocateHost();
    Table tbl_Filter_TD_12943_output("tbl_Filter_TD_12943_output", 6100000, 3, "");
    tbl_Filter_TD_12943_output.allocateHost();
    Table tbl_Filter_TD_12106_output("tbl_Filter_TD_12106_output", 6100000, 1, "");
    tbl_Filter_TD_12106_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13527_input;
    tbl_SerializeFromObject_TD_13527_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13527_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13527_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13527_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13527_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_13527_input.allocateHost();
    tbl_SerializeFromObject_TD_13527_input.loadHost();
    Table tbl_JOIN_INNER_TD_13775_output("tbl_JOIN_INNER_TD_13775_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13775_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13804_input;
    tbl_SerializeFromObject_TD_13804_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13804_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13804_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13804_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13804_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13804_input.allocateHost();
    tbl_SerializeFromObject_TD_13804_input.loadHost();
    Table tbl_JOIN_INNER_TD_13959_output("tbl_JOIN_INNER_TD_13959_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13959_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13751_input;
    tbl_SerializeFromObject_TD_13751_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13751_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13751_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13751_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_13751_input.allocateHost();
    tbl_SerializeFromObject_TD_13751_input.loadHost();
    Table tbl_SerializeFromObject_TD_13265_input;
    tbl_SerializeFromObject_TD_13265_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13265_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13265_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13265_input.allocateHost();
    tbl_SerializeFromObject_TD_13265_input.loadHost();
    Table tbl_SerializeFromObject_TD_13885_input;
    tbl_SerializeFromObject_TD_13885_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13885_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13885_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13885_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_13885_input.allocateHost();
    tbl_SerializeFromObject_TD_13885_input.loadHost();
    Table tbl_SerializeFromObject_TD_13495_input;
    tbl_SerializeFromObject_TD_13495_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13495_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13495_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13495_input.allocateHost();
    tbl_SerializeFromObject_TD_13495_input.loadHost();
    Table tbl_SerializeFromObject_TD_13181_input;
    tbl_SerializeFromObject_TD_13181_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13181_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13181_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13181_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_13181_input.allocateHost();
    tbl_SerializeFromObject_TD_13181_input.loadHost();
    Table tbl_SerializeFromObject_TD_13815_input;
    tbl_SerializeFromObject_TD_13815_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13815_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13815_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13815_input.allocateHost();
    tbl_SerializeFromObject_TD_13815_input.loadHost();
    Table tbl_SerializeFromObject_TD_1328_input;
    tbl_SerializeFromObject_TD_1328_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1328_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1328_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_1328_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_1328_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_1328_input.allocateHost();
    tbl_SerializeFromObject_TD_1328_input.loadHost();
    Table tbl_JOIN_INNER_TD_13246_output("tbl_JOIN_INNER_TD_13246_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13246_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13881_input;
    tbl_SerializeFromObject_TD_13881_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13881_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13881_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13881_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13881_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13881_input.allocateHost();
    tbl_SerializeFromObject_TD_13881_input.loadHost();
    Table tbl_JOIN_INNER_TD_13804_output("tbl_JOIN_INNER_TD_13804_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13804_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13340_input;
    tbl_SerializeFromObject_TD_13340_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13340_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13340_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13340_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_13340_input.allocateHost();
    tbl_SerializeFromObject_TD_13340_input.loadHost();
    Table tbl_SerializeFromObject_TD_13295_input;
    tbl_SerializeFromObject_TD_13295_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13295_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13295_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13295_input.allocateHost();
    tbl_SerializeFromObject_TD_13295_input.loadHost();
    Table tbl_SerializeFromObject_TD_13787_input;
    tbl_SerializeFromObject_TD_13787_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13787_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13787_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13787_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_13787_input.allocateHost();
    tbl_SerializeFromObject_TD_13787_input.loadHost();
    Table tbl_SerializeFromObject_TD_138_input;
    tbl_SerializeFromObject_TD_138_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_138_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_138_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_138_input.allocateHost();
    tbl_SerializeFromObject_TD_138_input.loadHost();
    Table tbl_SerializeFromObject_TD_1342_input;
    tbl_SerializeFromObject_TD_1342_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1342_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1342_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_1342_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_1342_input.allocateHost();
    tbl_SerializeFromObject_TD_1342_input.loadHost();
    Table tbl_SerializeFromObject_TD_13108_input;
    tbl_SerializeFromObject_TD_13108_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13108_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13108_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13108_input.allocateHost();
    tbl_SerializeFromObject_TD_13108_input.loadHost();
    Table tbl_SerializeFromObject_TD_13682_input;
    tbl_SerializeFromObject_TD_13682_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13682_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13682_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13682_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13682_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_13682_input.allocateHost();
    tbl_SerializeFromObject_TD_13682_input.loadHost();
    Table tbl_JOIN_INNER_TD_13488_output("tbl_JOIN_INNER_TD_13488_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13488_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1375_input;
    tbl_SerializeFromObject_TD_1375_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1375_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1375_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_1375_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_1375_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_1375_input.allocateHost();
    tbl_SerializeFromObject_TD_1375_input.loadHost();
    Table tbl_JOIN_INNER_TD_13498_output("tbl_JOIN_INNER_TD_13498_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13498_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13967_input;
    tbl_SerializeFromObject_TD_13967_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13967_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13967_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13967_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_13967_input.allocateHost();
    tbl_SerializeFromObject_TD_13967_input.loadHost();
    Table tbl_SerializeFromObject_TD_13703_input;
    tbl_SerializeFromObject_TD_13703_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13703_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13703_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13703_input.allocateHost();
    tbl_SerializeFromObject_TD_13703_input.loadHost();
    Table tbl_SerializeFromObject_TD_13299_input;
    tbl_SerializeFromObject_TD_13299_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13299_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13299_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13299_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_13299_input.allocateHost();
    tbl_SerializeFromObject_TD_13299_input.loadHost();
    Table tbl_SerializeFromObject_TD_13557_input;
    tbl_SerializeFromObject_TD_13557_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13557_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13557_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13557_input.allocateHost();
    tbl_SerializeFromObject_TD_13557_input.loadHost();
    Table tbl_SerializeFromObject_TD_13957_input;
    tbl_SerializeFromObject_TD_13957_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13957_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13957_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13957_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_13957_input.allocateHost();
    tbl_SerializeFromObject_TD_13957_input.loadHost();
    Table tbl_SerializeFromObject_TD_13687_input;
    tbl_SerializeFromObject_TD_13687_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13687_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13687_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13687_input.allocateHost();
    tbl_SerializeFromObject_TD_13687_input.loadHost();
    Table tbl_Filter_TD_149_output("tbl_Filter_TD_149_output", 6100000, 4, "");
    tbl_Filter_TD_149_output.allocateHost();
    Table tbl_Aggregate_TD_14208_output("tbl_Aggregate_TD_14208_output", 6100000, 3, "");
    tbl_Aggregate_TD_14208_output.allocateHost();
    Table tbl_Filter_TD_14893_output("tbl_Filter_TD_14893_output", 6100000, 4, "");
    tbl_Filter_TD_14893_output.allocateHost();
    Table tbl_Aggregate_TD_14413_output("tbl_Aggregate_TD_14413_output", 6100000, 3, "");
    tbl_Aggregate_TD_14413_output.allocateHost();
    Table tbl_Filter_TD_14391_output("tbl_Filter_TD_14391_output", 6100000, 4, "");
    tbl_Filter_TD_14391_output.allocateHost();
    Table tbl_Aggregate_TD_14993_output("tbl_Aggregate_TD_14993_output", 6100000, 3, "");
    tbl_Aggregate_TD_14993_output.allocateHost();
    Table tbl_Filter_TD_14419_output("tbl_Filter_TD_14419_output", 6100000, 4, "");
    tbl_Filter_TD_14419_output.allocateHost();
    Table tbl_Aggregate_TD_14533_output("tbl_Aggregate_TD_14533_output", 6100000, 3, "");
    tbl_Aggregate_TD_14533_output.allocateHost();
    Table tbl_Filter_TD_14555_output("tbl_Filter_TD_14555_output", 6100000, 4, "");
    tbl_Filter_TD_14555_output.allocateHost();
    Table tbl_Aggregate_TD_14419_output("tbl_Aggregate_TD_14419_output", 6100000, 3, "");
    tbl_Aggregate_TD_14419_output.allocateHost();
    Table tbl_Filter_TD_14102_output("tbl_Filter_TD_14102_output", 6100000, 4, "");
    tbl_Filter_TD_14102_output.allocateHost();
    Table tbl_Aggregate_TD_14981_output("tbl_Aggregate_TD_14981_output", 6100000, 3, "");
    tbl_Aggregate_TD_14981_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15152_input;
    tbl_SerializeFromObject_TD_15152_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15152_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15152_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15152_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15152_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15152_input.allocateHost();
    tbl_SerializeFromObject_TD_15152_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_1525_output("tbl_JOIN_LEFTSEMI_TD_1525_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_1525_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15375_input;
    tbl_SerializeFromObject_TD_15375_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15375_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15375_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15375_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15375_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15375_input.allocateHost();
    tbl_SerializeFromObject_TD_15375_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_15737_output("tbl_JOIN_LEFTSEMI_TD_15737_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_15737_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15622_input;
    tbl_SerializeFromObject_TD_15622_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15622_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15622_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15622_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15622_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15622_input.allocateHost();
    tbl_SerializeFromObject_TD_15622_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_15984_output("tbl_JOIN_LEFTSEMI_TD_15984_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_15984_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15527_input;
    tbl_SerializeFromObject_TD_15527_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15527_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15527_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15527_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15527_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15527_input.allocateHost();
    tbl_SerializeFromObject_TD_15527_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_1569_output("tbl_JOIN_LEFTSEMI_TD_1569_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_1569_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15684_input;
    tbl_SerializeFromObject_TD_15684_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15684_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15684_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15684_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15684_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15684_input.allocateHost();
    tbl_SerializeFromObject_TD_15684_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_1528_output("tbl_JOIN_LEFTSEMI_TD_1528_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_1528_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15566_input;
    tbl_SerializeFromObject_TD_15566_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15566_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15566_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15566_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15566_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15566_input.allocateHost();
    tbl_SerializeFromObject_TD_15566_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_15519_output("tbl_JOIN_LEFTSEMI_TD_15519_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_15519_output.allocateHost();
    Table tbl_Aggregate_TD_16795_output("tbl_Aggregate_TD_16795_output", 6100000, 3, "");
    tbl_Aggregate_TD_16795_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16168_output("tbl_JOIN_INNER_TD_16168_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16168_output.allocateHost();
    Table tbl_Aggregate_TD_16373_output("tbl_Aggregate_TD_16373_output", 6100000, 3, "");
    tbl_Aggregate_TD_16373_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16530_output("tbl_JOIN_INNER_TD_16530_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16530_output.allocateHost();
    Table tbl_Aggregate_TD_16107_output("tbl_Aggregate_TD_16107_output", 6100000, 3, "");
    tbl_Aggregate_TD_16107_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16787_output("tbl_JOIN_INNER_TD_16787_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16787_output.allocateHost();
    Table tbl_Aggregate_TD_1621_output("tbl_Aggregate_TD_1621_output", 6100000, 3, "");
    tbl_Aggregate_TD_1621_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16622_output("tbl_JOIN_INNER_TD_16622_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16622_output.allocateHost();
    Table tbl_Aggregate_TD_16233_output("tbl_Aggregate_TD_16233_output", 6100000, 3, "");
    tbl_Aggregate_TD_16233_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16300_output("tbl_JOIN_INNER_TD_16300_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16300_output.allocateHost();
    Table tbl_Aggregate_TD_167_output("tbl_Aggregate_TD_167_output", 6100000, 3, "");
    tbl_Aggregate_TD_167_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16441_output("tbl_JOIN_INNER_TD_16441_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16441_output.allocateHost();
    Table tbl_Project_TD_17388_output("tbl_Project_TD_17388_output", 6100000, 3, "");
    tbl_Project_TD_17388_output.allocateHost();
    Table tbl_JOIN_INNER_TD_17560_output("tbl_JOIN_INNER_TD_17560_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_17560_output.allocateHost();
    Table tbl_Filter_TD_17542_output("tbl_Filter_TD_17542_output", 6100000, 1, "");
    tbl_Filter_TD_17542_output.allocateHost();
    Table tbl_Project_TD_17879_output("tbl_Project_TD_17879_output", 6100000, 3, "");
    tbl_Project_TD_17879_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1797_output("tbl_JOIN_INNER_TD_1797_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_1797_output.allocateHost();
    Table tbl_Filter_TD_1711_output("tbl_Filter_TD_1711_output", 6100000, 1, "");
    tbl_Filter_TD_1711_output.allocateHost();
    Table tbl_Project_TD_17618_output("tbl_Project_TD_17618_output", 6100000, 3, "");
    tbl_Project_TD_17618_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1791_output("tbl_JOIN_INNER_TD_1791_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_1791_output.allocateHost();
    Table tbl_Filter_TD_17748_output("tbl_Filter_TD_17748_output", 6100000, 1, "");
    tbl_Filter_TD_17748_output.allocateHost();
    Table tbl_Project_TD_17191_output("tbl_Project_TD_17191_output", 6100000, 3, "");
    tbl_Project_TD_17191_output.allocateHost();
    Table tbl_JOIN_INNER_TD_17683_output("tbl_JOIN_INNER_TD_17683_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_17683_output.allocateHost();
    Table tbl_Filter_TD_17991_output("tbl_Filter_TD_17991_output", 6100000, 1, "");
    tbl_Filter_TD_17991_output.allocateHost();
    Table tbl_Project_TD_17441_output("tbl_Project_TD_17441_output", 6100000, 3, "");
    tbl_Project_TD_17441_output.allocateHost();
    Table tbl_JOIN_INNER_TD_17674_output("tbl_JOIN_INNER_TD_17674_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_17674_output.allocateHost();
    Table tbl_Filter_TD_17204_output("tbl_Filter_TD_17204_output", 6100000, 1, "");
    tbl_Filter_TD_17204_output.allocateHost();
    Table tbl_Project_TD_1710_output("tbl_Project_TD_1710_output", 6100000, 3, "");
    tbl_Project_TD_1710_output.allocateHost();
    Table tbl_JOIN_INNER_TD_175_output("tbl_JOIN_INNER_TD_175_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_175_output.allocateHost();
    Table tbl_Filter_TD_17519_output("tbl_Filter_TD_17519_output", 6100000, 1, "");
    tbl_Filter_TD_17519_output.allocateHost();
    Table tbl_JOIN_INNER_TD_18168_output("tbl_JOIN_INNER_TD_18168_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18168_output.allocateHost();
    Table tbl_Filter_TD_18556_output("tbl_Filter_TD_18556_output", 6100000, 2, "");
    tbl_Filter_TD_18556_output.allocateHost();
    Table tbl_Filter_TD_18595_output("tbl_Filter_TD_18595_output", 6100000, 4, "");
    tbl_Filter_TD_18595_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18272_input;
    tbl_SerializeFromObject_TD_18272_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_18272_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_18272_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_18272_input.allocateHost();
    tbl_SerializeFromObject_TD_18272_input.loadHost();
    Table tbl_JOIN_INNER_TD_18956_output("tbl_JOIN_INNER_TD_18956_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18956_output.allocateHost();
    Table tbl_Filter_TD_18961_output("tbl_Filter_TD_18961_output", 6100000, 2, "");
    tbl_Filter_TD_18961_output.allocateHost();
    Table tbl_Filter_TD_1868_output("tbl_Filter_TD_1868_output", 6100000, 4, "");
    tbl_Filter_TD_1868_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18327_input;
    tbl_SerializeFromObject_TD_18327_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_18327_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_18327_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_18327_input.allocateHost();
    tbl_SerializeFromObject_TD_18327_input.loadHost();
    Table tbl_JOIN_INNER_TD_1814_output("tbl_JOIN_INNER_TD_1814_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1814_output.allocateHost();
    Table tbl_Filter_TD_18154_output("tbl_Filter_TD_18154_output", 6100000, 2, "");
    tbl_Filter_TD_18154_output.allocateHost();
    Table tbl_Filter_TD_18675_output("tbl_Filter_TD_18675_output", 6100000, 4, "");
    tbl_Filter_TD_18675_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18174_input;
    tbl_SerializeFromObject_TD_18174_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_18174_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_18174_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_18174_input.allocateHost();
    tbl_SerializeFromObject_TD_18174_input.loadHost();
    Table tbl_JOIN_INNER_TD_18698_output("tbl_JOIN_INNER_TD_18698_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18698_output.allocateHost();
    Table tbl_Filter_TD_18843_output("tbl_Filter_TD_18843_output", 6100000, 2, "");
    tbl_Filter_TD_18843_output.allocateHost();
    Table tbl_Filter_TD_18697_output("tbl_Filter_TD_18697_output", 6100000, 4, "");
    tbl_Filter_TD_18697_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18564_input;
    tbl_SerializeFromObject_TD_18564_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_18564_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_18564_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_18564_input.allocateHost();
    tbl_SerializeFromObject_TD_18564_input.loadHost();
    Table tbl_JOIN_INNER_TD_18921_output("tbl_JOIN_INNER_TD_18921_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18921_output.allocateHost();
    Table tbl_Filter_TD_18985_output("tbl_Filter_TD_18985_output", 6100000, 2, "");
    tbl_Filter_TD_18985_output.allocateHost();
    Table tbl_Filter_TD_18874_output("tbl_Filter_TD_18874_output", 6100000, 4, "");
    tbl_Filter_TD_18874_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18652_input;
    tbl_SerializeFromObject_TD_18652_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_18652_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_18652_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_18652_input.allocateHost();
    tbl_SerializeFromObject_TD_18652_input.loadHost();
    Table tbl_JOIN_INNER_TD_18936_output("tbl_JOIN_INNER_TD_18936_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18936_output.allocateHost();
    Table tbl_Filter_TD_18274_output("tbl_Filter_TD_18274_output", 6100000, 2, "");
    tbl_Filter_TD_18274_output.allocateHost();
    Table tbl_Filter_TD_18409_output("tbl_Filter_TD_18409_output", 6100000, 4, "");
    tbl_Filter_TD_18409_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18227_input;
    tbl_SerializeFromObject_TD_18227_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_18227_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_18227_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_18227_input.allocateHost();
    tbl_SerializeFromObject_TD_18227_input.loadHost();
    Table tbl_JOIN_INNER_TD_19808_output("tbl_JOIN_INNER_TD_19808_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19808_output.allocateHost();
    Table tbl_Filter_TD_19818_output("tbl_Filter_TD_19818_output", 6100000, 1, "");
    tbl_Filter_TD_19818_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19637_input;
    tbl_SerializeFromObject_TD_19637_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19637_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19637_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19637_input.allocateHost();
    tbl_SerializeFromObject_TD_19637_input.loadHost();
    Table tbl_SerializeFromObject_TD_19740_input;
    tbl_SerializeFromObject_TD_19740_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19740_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19740_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19740_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19740_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19740_input.allocateHost();
    tbl_SerializeFromObject_TD_19740_input.loadHost();
    Table tbl_JOIN_INNER_TD_19326_output("tbl_JOIN_INNER_TD_19326_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19326_output.allocateHost();
    Table tbl_Filter_TD_19223_output("tbl_Filter_TD_19223_output", 6100000, 1, "");
    tbl_Filter_TD_19223_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19653_input;
    tbl_SerializeFromObject_TD_19653_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19653_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19653_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19653_input.allocateHost();
    tbl_SerializeFromObject_TD_19653_input.loadHost();
    Table tbl_SerializeFromObject_TD_19619_input;
    tbl_SerializeFromObject_TD_19619_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19619_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19619_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19619_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19619_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19619_input.allocateHost();
    tbl_SerializeFromObject_TD_19619_input.loadHost();
    Table tbl_JOIN_INNER_TD_19464_output("tbl_JOIN_INNER_TD_19464_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19464_output.allocateHost();
    Table tbl_Filter_TD_19587_output("tbl_Filter_TD_19587_output", 6100000, 1, "");
    tbl_Filter_TD_19587_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19104_input;
    tbl_SerializeFromObject_TD_19104_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19104_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19104_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19104_input.allocateHost();
    tbl_SerializeFromObject_TD_19104_input.loadHost();
    Table tbl_SerializeFromObject_TD_1961_input;
    tbl_SerializeFromObject_TD_1961_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1961_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1961_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_1961_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_1961_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_1961_input.allocateHost();
    tbl_SerializeFromObject_TD_1961_input.loadHost();
    Table tbl_JOIN_INNER_TD_19768_output("tbl_JOIN_INNER_TD_19768_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19768_output.allocateHost();
    Table tbl_Filter_TD_19257_output("tbl_Filter_TD_19257_output", 6100000, 1, "");
    tbl_Filter_TD_19257_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19198_input;
    tbl_SerializeFromObject_TD_19198_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19198_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19198_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19198_input.allocateHost();
    tbl_SerializeFromObject_TD_19198_input.loadHost();
    Table tbl_SerializeFromObject_TD_19456_input;
    tbl_SerializeFromObject_TD_19456_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19456_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19456_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19456_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19456_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19456_input.allocateHost();
    tbl_SerializeFromObject_TD_19456_input.loadHost();
    Table tbl_JOIN_INNER_TD_19663_output("tbl_JOIN_INNER_TD_19663_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19663_output.allocateHost();
    Table tbl_Filter_TD_19709_output("tbl_Filter_TD_19709_output", 6100000, 1, "");
    tbl_Filter_TD_19709_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19842_input;
    tbl_SerializeFromObject_TD_19842_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19842_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19842_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19842_input.allocateHost();
    tbl_SerializeFromObject_TD_19842_input.loadHost();
    Table tbl_SerializeFromObject_TD_19189_input;
    tbl_SerializeFromObject_TD_19189_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19189_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19189_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19189_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19189_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19189_input.allocateHost();
    tbl_SerializeFromObject_TD_19189_input.loadHost();
    Table tbl_JOIN_INNER_TD_19465_output("tbl_JOIN_INNER_TD_19465_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19465_output.allocateHost();
    Table tbl_Filter_TD_19629_output("tbl_Filter_TD_19629_output", 6100000, 1, "");
    tbl_Filter_TD_19629_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19606_input;
    tbl_SerializeFromObject_TD_19606_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19606_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19606_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19606_input.allocateHost();
    tbl_SerializeFromObject_TD_19606_input.loadHost();
    Table tbl_SerializeFromObject_TD_19969_input;
    tbl_SerializeFromObject_TD_19969_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19969_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19969_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19969_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19969_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19969_input.allocateHost();
    tbl_SerializeFromObject_TD_19969_input.loadHost();
    Table tbl_Filter_TD_20339_output("tbl_Filter_TD_20339_output", 6100000, 2, "");
    tbl_Filter_TD_20339_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_2074_output("tbl_JOIN_LEFTSEMI_TD_2074_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_2074_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20636_input;
    tbl_SerializeFromObject_TD_20636_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20636_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20636_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20636_input.allocateHost();
    tbl_SerializeFromObject_TD_20636_input.loadHost();
    Table tbl_Filter_TD_20453_output("tbl_Filter_TD_20453_output", 6100000, 2, "");
    tbl_Filter_TD_20453_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_20711_output("tbl_JOIN_LEFTSEMI_TD_20711_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_20711_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20483_input;
    tbl_SerializeFromObject_TD_20483_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20483_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20483_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20483_input.allocateHost();
    tbl_SerializeFromObject_TD_20483_input.loadHost();
    Table tbl_Filter_TD_20171_output("tbl_Filter_TD_20171_output", 6100000, 2, "");
    tbl_Filter_TD_20171_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_20649_output("tbl_JOIN_LEFTSEMI_TD_20649_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_20649_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20276_input;
    tbl_SerializeFromObject_TD_20276_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20276_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20276_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20276_input.allocateHost();
    tbl_SerializeFromObject_TD_20276_input.loadHost();
    Table tbl_Filter_TD_20406_output("tbl_Filter_TD_20406_output", 6100000, 2, "");
    tbl_Filter_TD_20406_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_2066_output("tbl_JOIN_LEFTSEMI_TD_2066_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_2066_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20381_input;
    tbl_SerializeFromObject_TD_20381_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20381_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20381_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20381_input.allocateHost();
    tbl_SerializeFromObject_TD_20381_input.loadHost();
    Table tbl_Filter_TD_20306_output("tbl_Filter_TD_20306_output", 6100000, 2, "");
    tbl_Filter_TD_20306_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_2099_output("tbl_JOIN_LEFTSEMI_TD_2099_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_2099_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20845_input;
    tbl_SerializeFromObject_TD_20845_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20845_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20845_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20845_input.allocateHost();
    tbl_SerializeFromObject_TD_20845_input.loadHost();
    Table tbl_Filter_TD_20602_output("tbl_Filter_TD_20602_output", 6100000, 2, "");
    tbl_Filter_TD_20602_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_20103_output("tbl_JOIN_LEFTSEMI_TD_20103_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_20103_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20489_input;
    tbl_SerializeFromObject_TD_20489_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20489_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20489_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20489_input.allocateHost();
    tbl_SerializeFromObject_TD_20489_input.loadHost();
    Table tbl_SerializeFromObject_TD_21265_input;
    tbl_SerializeFromObject_TD_21265_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21265_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21265_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21265_input.allocateHost();
    tbl_SerializeFromObject_TD_21265_input.loadHost();
    Table tbl_Filter_TD_21523_output("tbl_Filter_TD_21523_output", 6100000, 4, "");
    tbl_Filter_TD_21523_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21752_output("tbl_JOIN_INNER_TD_21752_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21752_output.allocateHost();
    Table tbl_SerializeFromObject_TD_21202_input;
    tbl_SerializeFromObject_TD_21202_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21202_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21202_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21202_input.allocateHost();
    tbl_SerializeFromObject_TD_21202_input.loadHost();
    Table tbl_Filter_TD_21401_output("tbl_Filter_TD_21401_output", 6100000, 4, "");
    tbl_Filter_TD_21401_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21962_output("tbl_JOIN_INNER_TD_21962_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21962_output.allocateHost();
    Table tbl_SerializeFromObject_TD_21468_input;
    tbl_SerializeFromObject_TD_21468_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21468_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21468_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21468_input.allocateHost();
    tbl_SerializeFromObject_TD_21468_input.loadHost();
    Table tbl_Filter_TD_21634_output("tbl_Filter_TD_21634_output", 6100000, 4, "");
    tbl_Filter_TD_21634_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21964_output("tbl_JOIN_INNER_TD_21964_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21964_output.allocateHost();
    Table tbl_SerializeFromObject_TD_21383_input;
    tbl_SerializeFromObject_TD_21383_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21383_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21383_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21383_input.allocateHost();
    tbl_SerializeFromObject_TD_21383_input.loadHost();
    Table tbl_Filter_TD_21655_output("tbl_Filter_TD_21655_output", 6100000, 4, "");
    tbl_Filter_TD_21655_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21388_output("tbl_JOIN_INNER_TD_21388_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21388_output.allocateHost();
    Table tbl_SerializeFromObject_TD_21508_input;
    tbl_SerializeFromObject_TD_21508_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21508_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21508_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21508_input.allocateHost();
    tbl_SerializeFromObject_TD_21508_input.loadHost();
    Table tbl_Filter_TD_21914_output("tbl_Filter_TD_21914_output", 6100000, 4, "");
    tbl_Filter_TD_21914_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21645_output("tbl_JOIN_INNER_TD_21645_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21645_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2120_input;
    tbl_SerializeFromObject_TD_2120_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_2120_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_2120_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_2120_input.allocateHost();
    tbl_SerializeFromObject_TD_2120_input.loadHost();
    Table tbl_Filter_TD_21175_output("tbl_Filter_TD_21175_output", 6100000, 4, "");
    tbl_Filter_TD_21175_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21442_output("tbl_JOIN_INNER_TD_21442_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21442_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22184_input;
    tbl_SerializeFromObject_TD_22184_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22184_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22184_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22184_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22184_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22184_input.allocateHost();
    tbl_SerializeFromObject_TD_22184_input.loadHost();
    Table tbl_JOIN_INNER_TD_22205_output("tbl_JOIN_INNER_TD_22205_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22205_output.allocateHost();
    Table tbl_Filter_TD_22357_output("tbl_Filter_TD_22357_output", 6100000, 1, "");
    tbl_Filter_TD_22357_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22794_input;
    tbl_SerializeFromObject_TD_22794_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22794_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22794_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22794_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22794_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22794_input.allocateHost();
    tbl_SerializeFromObject_TD_22794_input.loadHost();
    Table tbl_JOIN_INNER_TD_2235_output("tbl_JOIN_INNER_TD_2235_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_2235_output.allocateHost();
    Table tbl_Filter_TD_22534_output("tbl_Filter_TD_22534_output", 6100000, 1, "");
    tbl_Filter_TD_22534_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22523_input;
    tbl_SerializeFromObject_TD_22523_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22523_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22523_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22523_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22523_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22523_input.allocateHost();
    tbl_SerializeFromObject_TD_22523_input.loadHost();
    Table tbl_JOIN_INNER_TD_22127_output("tbl_JOIN_INNER_TD_22127_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22127_output.allocateHost();
    Table tbl_Filter_TD_22764_output("tbl_Filter_TD_22764_output", 6100000, 1, "");
    tbl_Filter_TD_22764_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22116_input;
    tbl_SerializeFromObject_TD_22116_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22116_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22116_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22116_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22116_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22116_input.allocateHost();
    tbl_SerializeFromObject_TD_22116_input.loadHost();
    Table tbl_JOIN_INNER_TD_22152_output("tbl_JOIN_INNER_TD_22152_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22152_output.allocateHost();
    Table tbl_Filter_TD_22335_output("tbl_Filter_TD_22335_output", 6100000, 1, "");
    tbl_Filter_TD_22335_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22865_input;
    tbl_SerializeFromObject_TD_22865_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22865_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22865_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22865_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22865_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22865_input.allocateHost();
    tbl_SerializeFromObject_TD_22865_input.loadHost();
    Table tbl_JOIN_INNER_TD_22349_output("tbl_JOIN_INNER_TD_22349_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22349_output.allocateHost();
    Table tbl_Filter_TD_22899_output("tbl_Filter_TD_22899_output", 6100000, 1, "");
    tbl_Filter_TD_22899_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22837_input;
    tbl_SerializeFromObject_TD_22837_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22837_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22837_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22837_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22837_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22837_input.allocateHost();
    tbl_SerializeFromObject_TD_22837_input.loadHost();
    Table tbl_JOIN_INNER_TD_22241_output("tbl_JOIN_INNER_TD_22241_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22241_output.allocateHost();
    Table tbl_Filter_TD_22573_output("tbl_Filter_TD_22573_output", 6100000, 1, "");
    tbl_Filter_TD_22573_output.allocateHost();
    Table tbl_Filter_TD_23147_output("tbl_Filter_TD_23147_output", 6100000, 2, "");
    tbl_Filter_TD_23147_output.allocateHost();
    Table tbl_Filter_TD_23517_output("tbl_Filter_TD_23517_output", 6100000, 4, "");
    tbl_Filter_TD_23517_output.allocateHost();
    Table tbl_SerializeFromObject_TD_23339_input;
    tbl_SerializeFromObject_TD_23339_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_23339_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_23339_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_23339_input.allocateHost();
    tbl_SerializeFromObject_TD_23339_input.loadHost();
    Table tbl_Filter_TD_23206_output("tbl_Filter_TD_23206_output", 6100000, 2, "");
    tbl_Filter_TD_23206_output.allocateHost();
    Table tbl_Filter_TD_23122_output("tbl_Filter_TD_23122_output", 6100000, 4, "");
    tbl_Filter_TD_23122_output.allocateHost();
    Table tbl_SerializeFromObject_TD_23139_input;
    tbl_SerializeFromObject_TD_23139_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_23139_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_23139_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_23139_input.allocateHost();
    tbl_SerializeFromObject_TD_23139_input.loadHost();
    Table tbl_Filter_TD_23944_output("tbl_Filter_TD_23944_output", 6100000, 2, "");
    tbl_Filter_TD_23944_output.allocateHost();
    Table tbl_Filter_TD_23906_output("tbl_Filter_TD_23906_output", 6100000, 4, "");
    tbl_Filter_TD_23906_output.allocateHost();
    Table tbl_SerializeFromObject_TD_23926_input;
    tbl_SerializeFromObject_TD_23926_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_23926_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_23926_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_23926_input.allocateHost();
    tbl_SerializeFromObject_TD_23926_input.loadHost();
    Table tbl_Filter_TD_23326_output("tbl_Filter_TD_23326_output", 6100000, 2, "");
    tbl_Filter_TD_23326_output.allocateHost();
    Table tbl_Filter_TD_23440_output("tbl_Filter_TD_23440_output", 6100000, 4, "");
    tbl_Filter_TD_23440_output.allocateHost();
    Table tbl_SerializeFromObject_TD_23930_input;
    tbl_SerializeFromObject_TD_23930_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_23930_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_23930_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_23930_input.allocateHost();
    tbl_SerializeFromObject_TD_23930_input.loadHost();
    Table tbl_Filter_TD_23686_output("tbl_Filter_TD_23686_output", 6100000, 2, "");
    tbl_Filter_TD_23686_output.allocateHost();
    Table tbl_Filter_TD_23536_output("tbl_Filter_TD_23536_output", 6100000, 4, "");
    tbl_Filter_TD_23536_output.allocateHost();
    Table tbl_SerializeFromObject_TD_23739_input;
    tbl_SerializeFromObject_TD_23739_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_23739_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_23739_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_23739_input.allocateHost();
    tbl_SerializeFromObject_TD_23739_input.loadHost();
    Table tbl_Filter_TD_2387_output("tbl_Filter_TD_2387_output", 6100000, 2, "");
    tbl_Filter_TD_2387_output.allocateHost();
    Table tbl_Filter_TD_236_output("tbl_Filter_TD_236_output", 6100000, 4, "");
    tbl_Filter_TD_236_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2341_input;
    tbl_SerializeFromObject_TD_2341_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_2341_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_2341_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_2341_input.allocateHost();
    tbl_SerializeFromObject_TD_2341_input.loadHost();
    Table tbl_SerializeFromObject_TD_24534_input;
    tbl_SerializeFromObject_TD_24534_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24534_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24534_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24534_input.allocateHost();
    tbl_SerializeFromObject_TD_24534_input.loadHost();
    Table tbl_SerializeFromObject_TD_24227_input;
    tbl_SerializeFromObject_TD_24227_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24227_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24227_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24227_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24227_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24227_input.allocateHost();
    tbl_SerializeFromObject_TD_24227_input.loadHost();
    Table tbl_SerializeFromObject_TD_24976_input;
    tbl_SerializeFromObject_TD_24976_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24976_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24976_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24976_input.allocateHost();
    tbl_SerializeFromObject_TD_24976_input.loadHost();
    Table tbl_SerializeFromObject_TD_24896_input;
    tbl_SerializeFromObject_TD_24896_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24896_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24896_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24896_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24896_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24896_input.allocateHost();
    tbl_SerializeFromObject_TD_24896_input.loadHost();
    Table tbl_SerializeFromObject_TD_24254_input;
    tbl_SerializeFromObject_TD_24254_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24254_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24254_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24254_input.allocateHost();
    tbl_SerializeFromObject_TD_24254_input.loadHost();
    Table tbl_SerializeFromObject_TD_24730_input;
    tbl_SerializeFromObject_TD_24730_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24730_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24730_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24730_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24730_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24730_input.allocateHost();
    tbl_SerializeFromObject_TD_24730_input.loadHost();
    Table tbl_SerializeFromObject_TD_2472_input;
    tbl_SerializeFromObject_TD_2472_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_2472_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_2472_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_2472_input.allocateHost();
    tbl_SerializeFromObject_TD_2472_input.loadHost();
    Table tbl_SerializeFromObject_TD_24898_input;
    tbl_SerializeFromObject_TD_24898_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24898_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24898_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24898_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24898_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24898_input.allocateHost();
    tbl_SerializeFromObject_TD_24898_input.loadHost();
    Table tbl_SerializeFromObject_TD_24208_input;
    tbl_SerializeFromObject_TD_24208_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24208_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24208_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24208_input.allocateHost();
    tbl_SerializeFromObject_TD_24208_input.loadHost();
    Table tbl_SerializeFromObject_TD_2482_input;
    tbl_SerializeFromObject_TD_2482_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_2482_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_2482_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_2482_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_2482_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_2482_input.allocateHost();
    tbl_SerializeFromObject_TD_2482_input.loadHost();
    Table tbl_SerializeFromObject_TD_24262_input;
    tbl_SerializeFromObject_TD_24262_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24262_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24262_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24262_input.allocateHost();
    tbl_SerializeFromObject_TD_24262_input.loadHost();
    Table tbl_SerializeFromObject_TD_24659_input;
    tbl_SerializeFromObject_TD_24659_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24659_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24659_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24659_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24659_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24659_input.allocateHost();
    tbl_SerializeFromObject_TD_24659_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_23_300865_s, tv_r_Filter_23_300865_e;
    gettimeofday(&tv_r_Filter_23_300865_s, 0);
    SW_Filter_TD_236(tbl_SerializeFromObject_TD_24659_input, tbl_Filter_TD_236_output);
    gettimeofday(&tv_r_Filter_23_300865_e, 0);

    struct timeval tv_r_Filter_23_18378_s, tv_r_Filter_23_18378_e;
    gettimeofday(&tv_r_Filter_23_18378_s, 0);
    SW_Filter_TD_2387(tbl_SerializeFromObject_TD_24262_input, tbl_Filter_TD_2387_output);
    gettimeofday(&tv_r_Filter_23_18378_e, 0);

    struct timeval tv_r_Filter_23_802305_s, tv_r_Filter_23_802305_e;
    gettimeofday(&tv_r_Filter_23_802305_s, 0);
    SW_Filter_TD_23536(tbl_SerializeFromObject_TD_2482_input, tbl_Filter_TD_23536_output);
    gettimeofday(&tv_r_Filter_23_802305_e, 0);

    struct timeval tv_r_Filter_23_154338_s, tv_r_Filter_23_154338_e;
    gettimeofday(&tv_r_Filter_23_154338_s, 0);
    SW_Filter_TD_23686(tbl_SerializeFromObject_TD_24208_input, tbl_Filter_TD_23686_output);
    gettimeofday(&tv_r_Filter_23_154338_e, 0);

    struct timeval tv_r_Filter_23_846774_s, tv_r_Filter_23_846774_e;
    gettimeofday(&tv_r_Filter_23_846774_s, 0);
    SW_Filter_TD_23440(tbl_SerializeFromObject_TD_24898_input, tbl_Filter_TD_23440_output);
    gettimeofday(&tv_r_Filter_23_846774_e, 0);

    struct timeval tv_r_Filter_23_240749_s, tv_r_Filter_23_240749_e;
    gettimeofday(&tv_r_Filter_23_240749_s, 0);
    SW_Filter_TD_23326(tbl_SerializeFromObject_TD_2472_input, tbl_Filter_TD_23326_output);
    gettimeofday(&tv_r_Filter_23_240749_e, 0);

    struct timeval tv_r_Filter_23_339324_s, tv_r_Filter_23_339324_e;
    gettimeofday(&tv_r_Filter_23_339324_s, 0);
    SW_Filter_TD_23906(tbl_SerializeFromObject_TD_24730_input, tbl_Filter_TD_23906_output);
    gettimeofday(&tv_r_Filter_23_339324_e, 0);

    struct timeval tv_r_Filter_23_874837_s, tv_r_Filter_23_874837_e;
    gettimeofday(&tv_r_Filter_23_874837_s, 0);
    SW_Filter_TD_23944(tbl_SerializeFromObject_TD_24254_input, tbl_Filter_TD_23944_output);
    gettimeofday(&tv_r_Filter_23_874837_e, 0);

    struct timeval tv_r_Filter_23_665582_s, tv_r_Filter_23_665582_e;
    gettimeofday(&tv_r_Filter_23_665582_s, 0);
    SW_Filter_TD_23122(tbl_SerializeFromObject_TD_24896_input, tbl_Filter_TD_23122_output);
    gettimeofday(&tv_r_Filter_23_665582_e, 0);

    struct timeval tv_r_Filter_23_120354_s, tv_r_Filter_23_120354_e;
    gettimeofday(&tv_r_Filter_23_120354_s, 0);
    SW_Filter_TD_23206(tbl_SerializeFromObject_TD_24976_input, tbl_Filter_TD_23206_output);
    gettimeofday(&tv_r_Filter_23_120354_e, 0);

    struct timeval tv_r_Filter_23_32132_s, tv_r_Filter_23_32132_e;
    gettimeofday(&tv_r_Filter_23_32132_s, 0);
    SW_Filter_TD_23517(tbl_SerializeFromObject_TD_24227_input, tbl_Filter_TD_23517_output);
    gettimeofday(&tv_r_Filter_23_32132_e, 0);

    struct timeval tv_r_Filter_23_535988_s, tv_r_Filter_23_535988_e;
    gettimeofday(&tv_r_Filter_23_535988_s, 0);
    SW_Filter_TD_23147(tbl_SerializeFromObject_TD_24534_input, tbl_Filter_TD_23147_output);
    gettimeofday(&tv_r_Filter_23_535988_e, 0);

    struct timeval tv_r_Filter_22_644530_s, tv_r_Filter_22_644530_e;
    gettimeofday(&tv_r_Filter_22_644530_s, 0);
    SW_Filter_TD_22573(tbl_SerializeFromObject_TD_2341_input, tbl_Filter_TD_22573_output);
    gettimeofday(&tv_r_Filter_22_644530_e, 0);

    struct timeval tv_r_JOIN_INNER_22_708386_s, tv_r_JOIN_INNER_22_708386_e;
    gettimeofday(&tv_r_JOIN_INNER_22_708386_s, 0);
    SW_JOIN_INNER_TD_22241(tbl_Filter_TD_2387_output, tbl_Filter_TD_236_output, tbl_JOIN_INNER_TD_22241_output);
    gettimeofday(&tv_r_JOIN_INNER_22_708386_e, 0);

    struct timeval tv_r_Filter_22_74672_s, tv_r_Filter_22_74672_e;
    gettimeofday(&tv_r_Filter_22_74672_s, 0);
    SW_Filter_TD_22899(tbl_SerializeFromObject_TD_23739_input, tbl_Filter_TD_22899_output);
    gettimeofday(&tv_r_Filter_22_74672_e, 0);

    struct timeval tv_r_JOIN_INNER_22_336735_s, tv_r_JOIN_INNER_22_336735_e;
    gettimeofday(&tv_r_JOIN_INNER_22_336735_s, 0);
    SW_JOIN_INNER_TD_22349(tbl_Filter_TD_23686_output, tbl_Filter_TD_23536_output, tbl_JOIN_INNER_TD_22349_output);
    gettimeofday(&tv_r_JOIN_INNER_22_336735_e, 0);

    struct timeval tv_r_Filter_22_213202_s, tv_r_Filter_22_213202_e;
    gettimeofday(&tv_r_Filter_22_213202_s, 0);
    SW_Filter_TD_22335(tbl_SerializeFromObject_TD_23930_input, tbl_Filter_TD_22335_output);
    gettimeofday(&tv_r_Filter_22_213202_e, 0);

    struct timeval tv_r_JOIN_INNER_22_790566_s, tv_r_JOIN_INNER_22_790566_e;
    gettimeofday(&tv_r_JOIN_INNER_22_790566_s, 0);
    SW_JOIN_INNER_TD_22152(tbl_Filter_TD_23326_output, tbl_Filter_TD_23440_output, tbl_JOIN_INNER_TD_22152_output);
    gettimeofday(&tv_r_JOIN_INNER_22_790566_e, 0);

    struct timeval tv_r_Filter_22_482440_s, tv_r_Filter_22_482440_e;
    gettimeofday(&tv_r_Filter_22_482440_s, 0);
    SW_Filter_TD_22764(tbl_SerializeFromObject_TD_23926_input, tbl_Filter_TD_22764_output);
    gettimeofday(&tv_r_Filter_22_482440_e, 0);

    struct timeval tv_r_JOIN_INNER_22_400159_s, tv_r_JOIN_INNER_22_400159_e;
    gettimeofday(&tv_r_JOIN_INNER_22_400159_s, 0);
    SW_JOIN_INNER_TD_22127(tbl_Filter_TD_23944_output, tbl_Filter_TD_23906_output, tbl_JOIN_INNER_TD_22127_output);
    gettimeofday(&tv_r_JOIN_INNER_22_400159_e, 0);

    struct timeval tv_r_Filter_22_498497_s, tv_r_Filter_22_498497_e;
    gettimeofday(&tv_r_Filter_22_498497_s, 0);
    SW_Filter_TD_22534(tbl_SerializeFromObject_TD_23139_input, tbl_Filter_TD_22534_output);
    gettimeofday(&tv_r_Filter_22_498497_e, 0);

    struct timeval tv_r_JOIN_INNER_22_29091_s, tv_r_JOIN_INNER_22_29091_e;
    gettimeofday(&tv_r_JOIN_INNER_22_29091_s, 0);
    SW_JOIN_INNER_TD_2235(tbl_Filter_TD_23206_output, tbl_Filter_TD_23122_output, tbl_JOIN_INNER_TD_2235_output);
    gettimeofday(&tv_r_JOIN_INNER_22_29091_e, 0);

    struct timeval tv_r_Filter_22_697718_s, tv_r_Filter_22_697718_e;
    gettimeofday(&tv_r_Filter_22_697718_s, 0);
    SW_Filter_TD_22357(tbl_SerializeFromObject_TD_23339_input, tbl_Filter_TD_22357_output);
    gettimeofday(&tv_r_Filter_22_697718_e, 0);

    struct timeval tv_r_JOIN_INNER_22_905650_s, tv_r_JOIN_INNER_22_905650_e;
    gettimeofday(&tv_r_JOIN_INNER_22_905650_s, 0);
    SW_JOIN_INNER_TD_22205(tbl_Filter_TD_23147_output, tbl_Filter_TD_23517_output, tbl_JOIN_INNER_TD_22205_output);
    gettimeofday(&tv_r_JOIN_INNER_22_905650_e, 0);

    struct timeval tv_r_JOIN_INNER_21_190622_s, tv_r_JOIN_INNER_21_190622_e;
    gettimeofday(&tv_r_JOIN_INNER_21_190622_s, 0);
    SW_JOIN_INNER_TD_21442(tbl_JOIN_INNER_TD_22241_output, tbl_Filter_TD_22573_output, tbl_JOIN_INNER_TD_21442_output);
    gettimeofday(&tv_r_JOIN_INNER_21_190622_e, 0);

    struct timeval tv_r_Filter_21_466980_s, tv_r_Filter_21_466980_e;
    gettimeofday(&tv_r_Filter_21_466980_s, 0);
    SW_Filter_TD_21175(tbl_SerializeFromObject_TD_22837_input, tbl_Filter_TD_21175_output);
    gettimeofday(&tv_r_Filter_21_466980_e, 0);

    struct timeval tv_r_JOIN_INNER_21_910361_s, tv_r_JOIN_INNER_21_910361_e;
    gettimeofday(&tv_r_JOIN_INNER_21_910361_s, 0);
    SW_JOIN_INNER_TD_21645(tbl_JOIN_INNER_TD_22349_output, tbl_Filter_TD_22899_output, tbl_JOIN_INNER_TD_21645_output);
    gettimeofday(&tv_r_JOIN_INNER_21_910361_e, 0);

    struct timeval tv_r_Filter_21_877879_s, tv_r_Filter_21_877879_e;
    gettimeofday(&tv_r_Filter_21_877879_s, 0);
    SW_Filter_TD_21914(tbl_SerializeFromObject_TD_22865_input, tbl_Filter_TD_21914_output);
    gettimeofday(&tv_r_Filter_21_877879_e, 0);

    struct timeval tv_r_JOIN_INNER_21_829901_s, tv_r_JOIN_INNER_21_829901_e;
    gettimeofday(&tv_r_JOIN_INNER_21_829901_s, 0);
    SW_JOIN_INNER_TD_21388(tbl_JOIN_INNER_TD_22152_output, tbl_Filter_TD_22335_output, tbl_JOIN_INNER_TD_21388_output);
    gettimeofday(&tv_r_JOIN_INNER_21_829901_e, 0);

    struct timeval tv_r_Filter_21_468356_s, tv_r_Filter_21_468356_e;
    gettimeofday(&tv_r_Filter_21_468356_s, 0);
    SW_Filter_TD_21655(tbl_SerializeFromObject_TD_22116_input, tbl_Filter_TD_21655_output);
    gettimeofday(&tv_r_Filter_21_468356_e, 0);

    struct timeval tv_r_JOIN_INNER_21_826489_s, tv_r_JOIN_INNER_21_826489_e;
    gettimeofday(&tv_r_JOIN_INNER_21_826489_s, 0);
    SW_JOIN_INNER_TD_21964(tbl_JOIN_INNER_TD_22127_output, tbl_Filter_TD_22764_output, tbl_JOIN_INNER_TD_21964_output);
    gettimeofday(&tv_r_JOIN_INNER_21_826489_e, 0);

    struct timeval tv_r_Filter_21_581362_s, tv_r_Filter_21_581362_e;
    gettimeofday(&tv_r_Filter_21_581362_s, 0);
    SW_Filter_TD_21634(tbl_SerializeFromObject_TD_22523_input, tbl_Filter_TD_21634_output);
    gettimeofday(&tv_r_Filter_21_581362_e, 0);

    struct timeval tv_r_JOIN_INNER_21_713348_s, tv_r_JOIN_INNER_21_713348_e;
    gettimeofday(&tv_r_JOIN_INNER_21_713348_s, 0);
    SW_JOIN_INNER_TD_21962(tbl_JOIN_INNER_TD_2235_output, tbl_Filter_TD_22534_output, tbl_JOIN_INNER_TD_21962_output);
    gettimeofday(&tv_r_JOIN_INNER_21_713348_e, 0);

    struct timeval tv_r_Filter_21_511492_s, tv_r_Filter_21_511492_e;
    gettimeofday(&tv_r_Filter_21_511492_s, 0);
    SW_Filter_TD_21401(tbl_SerializeFromObject_TD_22794_input, tbl_Filter_TD_21401_output);
    gettimeofday(&tv_r_Filter_21_511492_e, 0);

    struct timeval tv_r_JOIN_INNER_21_296788_s, tv_r_JOIN_INNER_21_296788_e;
    gettimeofday(&tv_r_JOIN_INNER_21_296788_s, 0);
    SW_JOIN_INNER_TD_21752(tbl_JOIN_INNER_TD_22205_output, tbl_Filter_TD_22357_output, tbl_JOIN_INNER_TD_21752_output);
    gettimeofday(&tv_r_JOIN_INNER_21_296788_e, 0);

    struct timeval tv_r_Filter_21_38013_s, tv_r_Filter_21_38013_e;
    gettimeofday(&tv_r_Filter_21_38013_s, 0);
    SW_Filter_TD_21523(tbl_SerializeFromObject_TD_22184_input, tbl_Filter_TD_21523_output);
    gettimeofday(&tv_r_Filter_21_38013_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_46370_s, tv_r_JOIN_LEFTSEMI_20_46370_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_46370_s, 0);
    SW_JOIN_LEFTSEMI_TD_20103(tbl_Filter_TD_21175_output, tbl_JOIN_INNER_TD_21442_output, tbl_JOIN_LEFTSEMI_TD_20103_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_46370_e, 0);

    struct timeval tv_r_Filter_20_160207_s, tv_r_Filter_20_160207_e;
    gettimeofday(&tv_r_Filter_20_160207_s, 0);
    SW_Filter_TD_20602(tbl_SerializeFromObject_TD_2120_input, tbl_Filter_TD_20602_output);
    gettimeofday(&tv_r_Filter_20_160207_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_645591_s, tv_r_JOIN_LEFTSEMI_20_645591_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_645591_s, 0);
    SW_JOIN_LEFTSEMI_TD_2099(tbl_Filter_TD_21914_output, tbl_JOIN_INNER_TD_21645_output, tbl_JOIN_LEFTSEMI_TD_2099_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_645591_e, 0);

    struct timeval tv_r_Filter_20_328716_s, tv_r_Filter_20_328716_e;
    gettimeofday(&tv_r_Filter_20_328716_s, 0);
    SW_Filter_TD_20306(tbl_SerializeFromObject_TD_21508_input, tbl_Filter_TD_20306_output);
    gettimeofday(&tv_r_Filter_20_328716_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_13625_s, tv_r_JOIN_LEFTSEMI_20_13625_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_13625_s, 0);
    SW_JOIN_LEFTSEMI_TD_2066(tbl_Filter_TD_21655_output, tbl_JOIN_INNER_TD_21388_output, tbl_JOIN_LEFTSEMI_TD_2066_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_13625_e, 0);

    struct timeval tv_r_Filter_20_689863_s, tv_r_Filter_20_689863_e;
    gettimeofday(&tv_r_Filter_20_689863_s, 0);
    SW_Filter_TD_20406(tbl_SerializeFromObject_TD_21383_input, tbl_Filter_TD_20406_output);
    gettimeofday(&tv_r_Filter_20_689863_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_140008_s, tv_r_JOIN_LEFTSEMI_20_140008_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_140008_s, 0);
    SW_JOIN_LEFTSEMI_TD_20649(tbl_Filter_TD_21634_output, tbl_JOIN_INNER_TD_21964_output, tbl_JOIN_LEFTSEMI_TD_20649_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_140008_e, 0);

    struct timeval tv_r_Filter_20_564891_s, tv_r_Filter_20_564891_e;
    gettimeofday(&tv_r_Filter_20_564891_s, 0);
    SW_Filter_TD_20171(tbl_SerializeFromObject_TD_21468_input, tbl_Filter_TD_20171_output);
    gettimeofday(&tv_r_Filter_20_564891_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_201836_s, tv_r_JOIN_LEFTSEMI_20_201836_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_201836_s, 0);
    SW_JOIN_LEFTSEMI_TD_20711(tbl_Filter_TD_21401_output, tbl_JOIN_INNER_TD_21962_output, tbl_JOIN_LEFTSEMI_TD_20711_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_201836_e, 0);

    struct timeval tv_r_Filter_20_938635_s, tv_r_Filter_20_938635_e;
    gettimeofday(&tv_r_Filter_20_938635_s, 0);
    SW_Filter_TD_20453(tbl_SerializeFromObject_TD_21202_input, tbl_Filter_TD_20453_output);
    gettimeofday(&tv_r_Filter_20_938635_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_883424_s, tv_r_JOIN_LEFTSEMI_20_883424_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_883424_s, 0);
    SW_JOIN_LEFTSEMI_TD_2074(tbl_Filter_TD_21523_output, tbl_JOIN_INNER_TD_21752_output, tbl_JOIN_LEFTSEMI_TD_2074_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_883424_e, 0);

    struct timeval tv_r_Filter_20_489334_s, tv_r_Filter_20_489334_e;
    gettimeofday(&tv_r_Filter_20_489334_s, 0);
    SW_Filter_TD_20339(tbl_SerializeFromObject_TD_21265_input, tbl_Filter_TD_20339_output);
    gettimeofday(&tv_r_Filter_20_489334_e, 0);

    struct timeval tv_r_Filter_19_650100_s, tv_r_Filter_19_650100_e;
    gettimeofday(&tv_r_Filter_19_650100_s, 0);
    SW_Filter_TD_19629(tbl_SerializeFromObject_TD_20489_input, tbl_Filter_TD_19629_output);
    gettimeofday(&tv_r_Filter_19_650100_e, 0);

    struct timeval tv_r_JOIN_INNER_19_814088_s, tv_r_JOIN_INNER_19_814088_e;
    gettimeofday(&tv_r_JOIN_INNER_19_814088_s, 0);
    SW_JOIN_INNER_TD_19465(tbl_Filter_TD_20602_output, tbl_JOIN_LEFTSEMI_TD_20103_output, tbl_JOIN_INNER_TD_19465_output);
    gettimeofday(&tv_r_JOIN_INNER_19_814088_e, 0);

    struct timeval tv_r_Filter_19_665238_s, tv_r_Filter_19_665238_e;
    gettimeofday(&tv_r_Filter_19_665238_s, 0);
    SW_Filter_TD_19709(tbl_SerializeFromObject_TD_20845_input, tbl_Filter_TD_19709_output);
    gettimeofday(&tv_r_Filter_19_665238_e, 0);

    struct timeval tv_r_JOIN_INNER_19_333284_s, tv_r_JOIN_INNER_19_333284_e;
    gettimeofday(&tv_r_JOIN_INNER_19_333284_s, 0);
    SW_JOIN_INNER_TD_19663(tbl_Filter_TD_20306_output, tbl_JOIN_LEFTSEMI_TD_2099_output, tbl_JOIN_INNER_TD_19663_output);
    gettimeofday(&tv_r_JOIN_INNER_19_333284_e, 0);

    struct timeval tv_r_Filter_19_155581_s, tv_r_Filter_19_155581_e;
    gettimeofday(&tv_r_Filter_19_155581_s, 0);
    SW_Filter_TD_19257(tbl_SerializeFromObject_TD_20381_input, tbl_Filter_TD_19257_output);
    gettimeofday(&tv_r_Filter_19_155581_e, 0);

    struct timeval tv_r_JOIN_INNER_19_628345_s, tv_r_JOIN_INNER_19_628345_e;
    gettimeofday(&tv_r_JOIN_INNER_19_628345_s, 0);
    SW_JOIN_INNER_TD_19768(tbl_Filter_TD_20406_output, tbl_JOIN_LEFTSEMI_TD_2066_output, tbl_JOIN_INNER_TD_19768_output);
    gettimeofday(&tv_r_JOIN_INNER_19_628345_e, 0);

    struct timeval tv_r_Filter_19_191063_s, tv_r_Filter_19_191063_e;
    gettimeofday(&tv_r_Filter_19_191063_s, 0);
    SW_Filter_TD_19587(tbl_SerializeFromObject_TD_20276_input, tbl_Filter_TD_19587_output);
    gettimeofday(&tv_r_Filter_19_191063_e, 0);

    struct timeval tv_r_JOIN_INNER_19_558641_s, tv_r_JOIN_INNER_19_558641_e;
    gettimeofday(&tv_r_JOIN_INNER_19_558641_s, 0);
    SW_JOIN_INNER_TD_19464(tbl_Filter_TD_20171_output, tbl_JOIN_LEFTSEMI_TD_20649_output, tbl_JOIN_INNER_TD_19464_output);
    gettimeofday(&tv_r_JOIN_INNER_19_558641_e, 0);

    struct timeval tv_r_Filter_19_722861_s, tv_r_Filter_19_722861_e;
    gettimeofday(&tv_r_Filter_19_722861_s, 0);
    SW_Filter_TD_19223(tbl_SerializeFromObject_TD_20483_input, tbl_Filter_TD_19223_output);
    gettimeofday(&tv_r_Filter_19_722861_e, 0);

    struct timeval tv_r_JOIN_INNER_19_670524_s, tv_r_JOIN_INNER_19_670524_e;
    gettimeofday(&tv_r_JOIN_INNER_19_670524_s, 0);
    SW_JOIN_INNER_TD_19326(tbl_Filter_TD_20453_output, tbl_JOIN_LEFTSEMI_TD_20711_output, tbl_JOIN_INNER_TD_19326_output);
    gettimeofday(&tv_r_JOIN_INNER_19_670524_e, 0);

    struct timeval tv_r_Filter_19_951857_s, tv_r_Filter_19_951857_e;
    gettimeofday(&tv_r_Filter_19_951857_s, 0);
    SW_Filter_TD_19818(tbl_SerializeFromObject_TD_20636_input, tbl_Filter_TD_19818_output);
    gettimeofday(&tv_r_Filter_19_951857_e, 0);

    struct timeval tv_r_JOIN_INNER_19_952535_s, tv_r_JOIN_INNER_19_952535_e;
    gettimeofday(&tv_r_JOIN_INNER_19_952535_s, 0);
    SW_JOIN_INNER_TD_19808(tbl_Filter_TD_20339_output, tbl_JOIN_LEFTSEMI_TD_2074_output, tbl_JOIN_INNER_TD_19808_output);
    gettimeofday(&tv_r_JOIN_INNER_19_952535_e, 0);

    struct timeval tv_r_Filter_18_944324_s, tv_r_Filter_18_944324_e;
    gettimeofday(&tv_r_Filter_18_944324_s, 0);
    SW_Filter_TD_18409(tbl_SerializeFromObject_TD_19969_input, tbl_Filter_TD_18409_output);
    gettimeofday(&tv_r_Filter_18_944324_e, 0);

    struct timeval tv_r_Filter_18_784722_s, tv_r_Filter_18_784722_e;
    gettimeofday(&tv_r_Filter_18_784722_s, 0);
    SW_Filter_TD_18274(tbl_SerializeFromObject_TD_19606_input, tbl_Filter_TD_18274_output);
    gettimeofday(&tv_r_Filter_18_784722_e, 0);

    struct timeval tv_r_JOIN_INNER_18_441326_s, tv_r_JOIN_INNER_18_441326_e;
    gettimeofday(&tv_r_JOIN_INNER_18_441326_s, 0);
    SW_JOIN_INNER_TD_18936(tbl_JOIN_INNER_TD_19465_output, tbl_Filter_TD_19629_output, tbl_JOIN_INNER_TD_18936_output);
    gettimeofday(&tv_r_JOIN_INNER_18_441326_e, 0);

    struct timeval tv_r_Filter_18_73481_s, tv_r_Filter_18_73481_e;
    gettimeofday(&tv_r_Filter_18_73481_s, 0);
    SW_Filter_TD_18874(tbl_SerializeFromObject_TD_19189_input, tbl_Filter_TD_18874_output);
    gettimeofday(&tv_r_Filter_18_73481_e, 0);

    struct timeval tv_r_Filter_18_397022_s, tv_r_Filter_18_397022_e;
    gettimeofday(&tv_r_Filter_18_397022_s, 0);
    SW_Filter_TD_18985(tbl_SerializeFromObject_TD_19842_input, tbl_Filter_TD_18985_output);
    gettimeofday(&tv_r_Filter_18_397022_e, 0);

    struct timeval tv_r_JOIN_INNER_18_353267_s, tv_r_JOIN_INNER_18_353267_e;
    gettimeofday(&tv_r_JOIN_INNER_18_353267_s, 0);
    SW_JOIN_INNER_TD_18921(tbl_JOIN_INNER_TD_19663_output, tbl_Filter_TD_19709_output, tbl_JOIN_INNER_TD_18921_output);
    gettimeofday(&tv_r_JOIN_INNER_18_353267_e, 0);

    struct timeval tv_r_Filter_18_845919_s, tv_r_Filter_18_845919_e;
    gettimeofday(&tv_r_Filter_18_845919_s, 0);
    SW_Filter_TD_18697(tbl_SerializeFromObject_TD_19456_input, tbl_Filter_TD_18697_output);
    gettimeofday(&tv_r_Filter_18_845919_e, 0);

    struct timeval tv_r_Filter_18_969307_s, tv_r_Filter_18_969307_e;
    gettimeofday(&tv_r_Filter_18_969307_s, 0);
    SW_Filter_TD_18843(tbl_SerializeFromObject_TD_19198_input, tbl_Filter_TD_18843_output);
    gettimeofday(&tv_r_Filter_18_969307_e, 0);

    struct timeval tv_r_JOIN_INNER_18_994902_s, tv_r_JOIN_INNER_18_994902_e;
    gettimeofday(&tv_r_JOIN_INNER_18_994902_s, 0);
    SW_JOIN_INNER_TD_18698(tbl_JOIN_INNER_TD_19768_output, tbl_Filter_TD_19257_output, tbl_JOIN_INNER_TD_18698_output);
    gettimeofday(&tv_r_JOIN_INNER_18_994902_e, 0);

    struct timeval tv_r_Filter_18_801356_s, tv_r_Filter_18_801356_e;
    gettimeofday(&tv_r_Filter_18_801356_s, 0);
    SW_Filter_TD_18675(tbl_SerializeFromObject_TD_1961_input, tbl_Filter_TD_18675_output);
    gettimeofday(&tv_r_Filter_18_801356_e, 0);

    struct timeval tv_r_Filter_18_869582_s, tv_r_Filter_18_869582_e;
    gettimeofday(&tv_r_Filter_18_869582_s, 0);
    SW_Filter_TD_18154(tbl_SerializeFromObject_TD_19104_input, tbl_Filter_TD_18154_output);
    gettimeofday(&tv_r_Filter_18_869582_e, 0);

    struct timeval tv_r_JOIN_INNER_18_920913_s, tv_r_JOIN_INNER_18_920913_e;
    gettimeofday(&tv_r_JOIN_INNER_18_920913_s, 0);
    SW_JOIN_INNER_TD_1814(tbl_JOIN_INNER_TD_19464_output, tbl_Filter_TD_19587_output, tbl_JOIN_INNER_TD_1814_output);
    gettimeofday(&tv_r_JOIN_INNER_18_920913_e, 0);

    struct timeval tv_r_Filter_18_883077_s, tv_r_Filter_18_883077_e;
    gettimeofday(&tv_r_Filter_18_883077_s, 0);
    SW_Filter_TD_1868(tbl_SerializeFromObject_TD_19619_input, tbl_Filter_TD_1868_output);
    gettimeofday(&tv_r_Filter_18_883077_e, 0);

    struct timeval tv_r_Filter_18_291030_s, tv_r_Filter_18_291030_e;
    gettimeofday(&tv_r_Filter_18_291030_s, 0);
    SW_Filter_TD_18961(tbl_SerializeFromObject_TD_19653_input, tbl_Filter_TD_18961_output);
    gettimeofday(&tv_r_Filter_18_291030_e, 0);

    struct timeval tv_r_JOIN_INNER_18_904597_s, tv_r_JOIN_INNER_18_904597_e;
    gettimeofday(&tv_r_JOIN_INNER_18_904597_s, 0);
    SW_JOIN_INNER_TD_18956(tbl_JOIN_INNER_TD_19326_output, tbl_Filter_TD_19223_output, tbl_JOIN_INNER_TD_18956_output);
    gettimeofday(&tv_r_JOIN_INNER_18_904597_e, 0);

    struct timeval tv_r_Filter_18_535618_s, tv_r_Filter_18_535618_e;
    gettimeofday(&tv_r_Filter_18_535618_s, 0);
    SW_Filter_TD_18595(tbl_SerializeFromObject_TD_19740_input, tbl_Filter_TD_18595_output);
    gettimeofday(&tv_r_Filter_18_535618_e, 0);

    struct timeval tv_r_Filter_18_646824_s, tv_r_Filter_18_646824_e;
    gettimeofday(&tv_r_Filter_18_646824_s, 0);
    SW_Filter_TD_18556(tbl_SerializeFromObject_TD_19637_input, tbl_Filter_TD_18556_output);
    gettimeofday(&tv_r_Filter_18_646824_e, 0);

    struct timeval tv_r_JOIN_INNER_18_118676_s, tv_r_JOIN_INNER_18_118676_e;
    gettimeofday(&tv_r_JOIN_INNER_18_118676_s, 0);
    SW_JOIN_INNER_TD_18168(tbl_JOIN_INNER_TD_19808_output, tbl_Filter_TD_19818_output, tbl_JOIN_INNER_TD_18168_output);
    gettimeofday(&tv_r_JOIN_INNER_18_118676_e, 0);

    struct timeval tv_r_Filter_17_348492_s, tv_r_Filter_17_348492_e;
    gettimeofday(&tv_r_Filter_17_348492_s, 0);
    SW_Filter_TD_17519(tbl_SerializeFromObject_TD_18227_input, tbl_Filter_TD_17519_output);
    gettimeofday(&tv_r_Filter_17_348492_e, 0);

    struct timeval tv_r_JOIN_INNER_17_30696_s, tv_r_JOIN_INNER_17_30696_e;
    gettimeofday(&tv_r_JOIN_INNER_17_30696_s, 0);
    SW_JOIN_INNER_TD_175(tbl_Filter_TD_18274_output, tbl_Filter_TD_18409_output, tbl_JOIN_INNER_TD_175_output);
    gettimeofday(&tv_r_JOIN_INNER_17_30696_e, 0);

    struct timeval tv_r_Project_17_757471_s, tv_r_Project_17_757471_e;
    gettimeofday(&tv_r_Project_17_757471_s, 0);
    SW_Project_TD_1710(tbl_JOIN_INNER_TD_18936_output, tbl_Project_TD_1710_output);
    gettimeofday(&tv_r_Project_17_757471_e, 0);

    struct timeval tv_r_Filter_17_445609_s, tv_r_Filter_17_445609_e;
    gettimeofday(&tv_r_Filter_17_445609_s, 0);
    SW_Filter_TD_17204(tbl_SerializeFromObject_TD_18652_input, tbl_Filter_TD_17204_output);
    gettimeofday(&tv_r_Filter_17_445609_e, 0);

    struct timeval tv_r_JOIN_INNER_17_604637_s, tv_r_JOIN_INNER_17_604637_e;
    gettimeofday(&tv_r_JOIN_INNER_17_604637_s, 0);
    SW_JOIN_INNER_TD_17674(tbl_Filter_TD_18985_output, tbl_Filter_TD_18874_output, tbl_JOIN_INNER_TD_17674_output);
    gettimeofday(&tv_r_JOIN_INNER_17_604637_e, 0);

    struct timeval tv_r_Project_17_58567_s, tv_r_Project_17_58567_e;
    gettimeofday(&tv_r_Project_17_58567_s, 0);
    SW_Project_TD_17441(tbl_JOIN_INNER_TD_18921_output, tbl_Project_TD_17441_output);
    gettimeofday(&tv_r_Project_17_58567_e, 0);

    struct timeval tv_r_Filter_17_530322_s, tv_r_Filter_17_530322_e;
    gettimeofday(&tv_r_Filter_17_530322_s, 0);
    SW_Filter_TD_17991(tbl_SerializeFromObject_TD_18564_input, tbl_Filter_TD_17991_output);
    gettimeofday(&tv_r_Filter_17_530322_e, 0);

    struct timeval tv_r_JOIN_INNER_17_735315_s, tv_r_JOIN_INNER_17_735315_e;
    gettimeofday(&tv_r_JOIN_INNER_17_735315_s, 0);
    SW_JOIN_INNER_TD_17683(tbl_Filter_TD_18843_output, tbl_Filter_TD_18697_output, tbl_JOIN_INNER_TD_17683_output);
    gettimeofday(&tv_r_JOIN_INNER_17_735315_e, 0);

    struct timeval tv_r_Project_17_931701_s, tv_r_Project_17_931701_e;
    gettimeofday(&tv_r_Project_17_931701_s, 0);
    SW_Project_TD_17191(tbl_JOIN_INNER_TD_18698_output, tbl_Project_TD_17191_output);
    gettimeofday(&tv_r_Project_17_931701_e, 0);

    struct timeval tv_r_Filter_17_136760_s, tv_r_Filter_17_136760_e;
    gettimeofday(&tv_r_Filter_17_136760_s, 0);
    SW_Filter_TD_17748(tbl_SerializeFromObject_TD_18174_input, tbl_Filter_TD_17748_output);
    gettimeofday(&tv_r_Filter_17_136760_e, 0);

    struct timeval tv_r_JOIN_INNER_17_559278_s, tv_r_JOIN_INNER_17_559278_e;
    gettimeofday(&tv_r_JOIN_INNER_17_559278_s, 0);
    SW_JOIN_INNER_TD_1791(tbl_Filter_TD_18154_output, tbl_Filter_TD_18675_output, tbl_JOIN_INNER_TD_1791_output);
    gettimeofday(&tv_r_JOIN_INNER_17_559278_e, 0);

    struct timeval tv_r_Project_17_985352_s, tv_r_Project_17_985352_e;
    gettimeofday(&tv_r_Project_17_985352_s, 0);
    SW_Project_TD_17618(tbl_JOIN_INNER_TD_1814_output, tbl_Project_TD_17618_output);
    gettimeofday(&tv_r_Project_17_985352_e, 0);

    struct timeval tv_r_Filter_17_741779_s, tv_r_Filter_17_741779_e;
    gettimeofday(&tv_r_Filter_17_741779_s, 0);
    SW_Filter_TD_1711(tbl_SerializeFromObject_TD_18327_input, tbl_Filter_TD_1711_output);
    gettimeofday(&tv_r_Filter_17_741779_e, 0);

    struct timeval tv_r_JOIN_INNER_17_844882_s, tv_r_JOIN_INNER_17_844882_e;
    gettimeofday(&tv_r_JOIN_INNER_17_844882_s, 0);
    SW_JOIN_INNER_TD_1797(tbl_Filter_TD_18961_output, tbl_Filter_TD_1868_output, tbl_JOIN_INNER_TD_1797_output);
    gettimeofday(&tv_r_JOIN_INNER_17_844882_e, 0);

    struct timeval tv_r_Project_17_427341_s, tv_r_Project_17_427341_e;
    gettimeofday(&tv_r_Project_17_427341_s, 0);
    SW_Project_TD_17879(tbl_JOIN_INNER_TD_18956_output, tbl_Project_TD_17879_output);
    gettimeofday(&tv_r_Project_17_427341_e, 0);

    struct timeval tv_r_Filter_17_872939_s, tv_r_Filter_17_872939_e;
    gettimeofday(&tv_r_Filter_17_872939_s, 0);
    SW_Filter_TD_17542(tbl_SerializeFromObject_TD_18272_input, tbl_Filter_TD_17542_output);
    gettimeofday(&tv_r_Filter_17_872939_e, 0);

    struct timeval tv_r_JOIN_INNER_17_847682_s, tv_r_JOIN_INNER_17_847682_e;
    gettimeofday(&tv_r_JOIN_INNER_17_847682_s, 0);
    SW_JOIN_INNER_TD_17560(tbl_Filter_TD_18556_output, tbl_Filter_TD_18595_output, tbl_JOIN_INNER_TD_17560_output);
    gettimeofday(&tv_r_JOIN_INNER_17_847682_e, 0);

    struct timeval tv_r_Project_17_23155_s, tv_r_Project_17_23155_e;
    gettimeofday(&tv_r_Project_17_23155_s, 0);
    SW_Project_TD_17388(tbl_JOIN_INNER_TD_18168_output, tbl_Project_TD_17388_output);
    gettimeofday(&tv_r_Project_17_23155_e, 0);

    struct timeval tv_r_JOIN_INNER_16_921908_s, tv_r_JOIN_INNER_16_921908_e;
    gettimeofday(&tv_r_JOIN_INNER_16_921908_s, 0);
    SW_JOIN_INNER_TD_16441(tbl_JOIN_INNER_TD_175_output, tbl_Filter_TD_17519_output, tbl_JOIN_INNER_TD_16441_output);
    gettimeofday(&tv_r_JOIN_INNER_16_921908_e, 0);

    struct timeval tv_r_Aggregate_16_349483_s, tv_r_Aggregate_16_349483_e;
    gettimeofday(&tv_r_Aggregate_16_349483_s, 0);
    SW_Aggregate_TD_167(tbl_Project_TD_1710_output, tbl_Aggregate_TD_167_output);
    gettimeofday(&tv_r_Aggregate_16_349483_e, 0);

    struct timeval tv_r_JOIN_INNER_16_118563_s, tv_r_JOIN_INNER_16_118563_e;
    gettimeofday(&tv_r_JOIN_INNER_16_118563_s, 0);
    SW_JOIN_INNER_TD_16300(tbl_JOIN_INNER_TD_17674_output, tbl_Filter_TD_17204_output, tbl_JOIN_INNER_TD_16300_output);
    gettimeofday(&tv_r_JOIN_INNER_16_118563_e, 0);

    struct timeval tv_r_Aggregate_16_679152_s, tv_r_Aggregate_16_679152_e;
    gettimeofday(&tv_r_Aggregate_16_679152_s, 0);
    SW_Aggregate_TD_16233(tbl_Project_TD_17441_output, tbl_Aggregate_TD_16233_output);
    gettimeofday(&tv_r_Aggregate_16_679152_e, 0);

    struct timeval tv_r_JOIN_INNER_16_507701_s, tv_r_JOIN_INNER_16_507701_e;
    gettimeofday(&tv_r_JOIN_INNER_16_507701_s, 0);
    SW_JOIN_INNER_TD_16622(tbl_JOIN_INNER_TD_17683_output, tbl_Filter_TD_17991_output, tbl_JOIN_INNER_TD_16622_output);
    gettimeofday(&tv_r_JOIN_INNER_16_507701_e, 0);

    struct timeval tv_r_Aggregate_16_744121_s, tv_r_Aggregate_16_744121_e;
    gettimeofday(&tv_r_Aggregate_16_744121_s, 0);
    SW_Aggregate_TD_1621(tbl_Project_TD_17191_output, tbl_Aggregate_TD_1621_output);
    gettimeofday(&tv_r_Aggregate_16_744121_e, 0);

    struct timeval tv_r_JOIN_INNER_16_374820_s, tv_r_JOIN_INNER_16_374820_e;
    gettimeofday(&tv_r_JOIN_INNER_16_374820_s, 0);
    SW_JOIN_INNER_TD_16787(tbl_JOIN_INNER_TD_1791_output, tbl_Filter_TD_17748_output, tbl_JOIN_INNER_TD_16787_output);
    gettimeofday(&tv_r_JOIN_INNER_16_374820_e, 0);

    struct timeval tv_r_Aggregate_16_557207_s, tv_r_Aggregate_16_557207_e;
    gettimeofday(&tv_r_Aggregate_16_557207_s, 0);
    SW_Aggregate_TD_16107(tbl_Project_TD_17618_output, tbl_Aggregate_TD_16107_output);
    gettimeofday(&tv_r_Aggregate_16_557207_e, 0);

    struct timeval tv_r_JOIN_INNER_16_562357_s, tv_r_JOIN_INNER_16_562357_e;
    gettimeofday(&tv_r_JOIN_INNER_16_562357_s, 0);
    SW_JOIN_INNER_TD_16530(tbl_JOIN_INNER_TD_1797_output, tbl_Filter_TD_1711_output, tbl_JOIN_INNER_TD_16530_output);
    gettimeofday(&tv_r_JOIN_INNER_16_562357_e, 0);

    struct timeval tv_r_Aggregate_16_173347_s, tv_r_Aggregate_16_173347_e;
    gettimeofday(&tv_r_Aggregate_16_173347_s, 0);
    SW_Aggregate_TD_16373(tbl_Project_TD_17879_output, tbl_Aggregate_TD_16373_output);
    gettimeofday(&tv_r_Aggregate_16_173347_e, 0);

    struct timeval tv_r_JOIN_INNER_16_210445_s, tv_r_JOIN_INNER_16_210445_e;
    gettimeofday(&tv_r_JOIN_INNER_16_210445_s, 0);
    SW_JOIN_INNER_TD_16168(tbl_JOIN_INNER_TD_17560_output, tbl_Filter_TD_17542_output, tbl_JOIN_INNER_TD_16168_output);
    gettimeofday(&tv_r_JOIN_INNER_16_210445_e, 0);

    struct timeval tv_r_Aggregate_16_52765_s, tv_r_Aggregate_16_52765_e;
    gettimeofday(&tv_r_Aggregate_16_52765_s, 0);
    SW_Aggregate_TD_16795(tbl_Project_TD_17388_output, tbl_Aggregate_TD_16795_output);
    gettimeofday(&tv_r_Aggregate_16_52765_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_201096_s, tv_r_JOIN_LEFTSEMI_15_201096_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_201096_s, 0);
    SW_JOIN_LEFTSEMI_TD_15519(tbl_Aggregate_TD_167_output, tbl_JOIN_INNER_TD_16441_output, tbl_JOIN_LEFTSEMI_TD_15519_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_201096_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_699282_s, tv_r_JOIN_LEFTSEMI_15_699282_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_699282_s, 0);
    SW_JOIN_LEFTSEMI_TD_1528(tbl_Aggregate_TD_16233_output, tbl_JOIN_INNER_TD_16300_output, tbl_JOIN_LEFTSEMI_TD_1528_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_699282_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_743673_s, tv_r_JOIN_LEFTSEMI_15_743673_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_743673_s, 0);
    SW_JOIN_LEFTSEMI_TD_1569(tbl_Aggregate_TD_1621_output, tbl_JOIN_INNER_TD_16622_output, tbl_JOIN_LEFTSEMI_TD_1569_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_743673_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_562537_s, tv_r_JOIN_LEFTSEMI_15_562537_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_562537_s, 0);
    SW_JOIN_LEFTSEMI_TD_15984(tbl_Aggregate_TD_16107_output, tbl_JOIN_INNER_TD_16787_output, tbl_JOIN_LEFTSEMI_TD_15984_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_562537_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_289080_s, tv_r_JOIN_LEFTSEMI_15_289080_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_289080_s, 0);
    SW_JOIN_LEFTSEMI_TD_15737(tbl_Aggregate_TD_16373_output, tbl_JOIN_INNER_TD_16530_output, tbl_JOIN_LEFTSEMI_TD_15737_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_289080_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_565852_s, tv_r_JOIN_LEFTSEMI_15_565852_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_565852_s, 0);
    SW_JOIN_LEFTSEMI_TD_1525(tbl_Aggregate_TD_16795_output, tbl_JOIN_INNER_TD_16168_output, tbl_JOIN_LEFTSEMI_TD_1525_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_565852_e, 0);

    struct timeval tv_r_Aggregate_14_561249_s, tv_r_Aggregate_14_561249_e;
    gettimeofday(&tv_r_Aggregate_14_561249_s, 0);
    SW_Aggregate_TD_14981(tbl_JOIN_LEFTSEMI_TD_15519_output, tbl_Aggregate_TD_14981_output);
    gettimeofday(&tv_r_Aggregate_14_561249_e, 0);

    struct timeval tv_r_Filter_14_392827_s, tv_r_Filter_14_392827_e;
    gettimeofday(&tv_r_Filter_14_392827_s, 0);
    SW_Filter_TD_14102(tbl_SerializeFromObject_TD_15566_input, tbl_Filter_TD_14102_output);
    gettimeofday(&tv_r_Filter_14_392827_e, 0);

    struct timeval tv_r_Aggregate_14_346533_s, tv_r_Aggregate_14_346533_e;
    gettimeofday(&tv_r_Aggregate_14_346533_s, 0);
    SW_Aggregate_TD_14419(tbl_JOIN_LEFTSEMI_TD_1528_output, tbl_Aggregate_TD_14419_output);
    gettimeofday(&tv_r_Aggregate_14_346533_e, 0);

    struct timeval tv_r_Filter_14_660231_s, tv_r_Filter_14_660231_e;
    gettimeofday(&tv_r_Filter_14_660231_s, 0);
    SW_Filter_TD_14555(tbl_SerializeFromObject_TD_15684_input, tbl_Filter_TD_14555_output);
    gettimeofday(&tv_r_Filter_14_660231_e, 0);

    struct timeval tv_r_Aggregate_14_974292_s, tv_r_Aggregate_14_974292_e;
    gettimeofday(&tv_r_Aggregate_14_974292_s, 0);
    SW_Aggregate_TD_14533(tbl_JOIN_LEFTSEMI_TD_1569_output, tbl_Aggregate_TD_14533_output);
    gettimeofday(&tv_r_Aggregate_14_974292_e, 0);

    struct timeval tv_r_Filter_14_7995_s, tv_r_Filter_14_7995_e;
    gettimeofday(&tv_r_Filter_14_7995_s, 0);
    SW_Filter_TD_14419(tbl_SerializeFromObject_TD_15527_input, tbl_Filter_TD_14419_output);
    gettimeofday(&tv_r_Filter_14_7995_e, 0);

    struct timeval tv_r_Aggregate_14_565510_s, tv_r_Aggregate_14_565510_e;
    gettimeofday(&tv_r_Aggregate_14_565510_s, 0);
    SW_Aggregate_TD_14993(tbl_JOIN_LEFTSEMI_TD_15984_output, tbl_Aggregate_TD_14993_output);
    gettimeofday(&tv_r_Aggregate_14_565510_e, 0);

    struct timeval tv_r_Filter_14_298395_s, tv_r_Filter_14_298395_e;
    gettimeofday(&tv_r_Filter_14_298395_s, 0);
    SW_Filter_TD_14391(tbl_SerializeFromObject_TD_15622_input, tbl_Filter_TD_14391_output);
    gettimeofday(&tv_r_Filter_14_298395_e, 0);

    struct timeval tv_r_Aggregate_14_665475_s, tv_r_Aggregate_14_665475_e;
    gettimeofday(&tv_r_Aggregate_14_665475_s, 0);
    SW_Aggregate_TD_14413(tbl_JOIN_LEFTSEMI_TD_15737_output, tbl_Aggregate_TD_14413_output);
    gettimeofday(&tv_r_Aggregate_14_665475_e, 0);

    struct timeval tv_r_Filter_14_307482_s, tv_r_Filter_14_307482_e;
    gettimeofday(&tv_r_Filter_14_307482_s, 0);
    SW_Filter_TD_14893(tbl_SerializeFromObject_TD_15375_input, tbl_Filter_TD_14893_output);
    gettimeofday(&tv_r_Filter_14_307482_e, 0);

    struct timeval tv_r_Aggregate_14_105166_s, tv_r_Aggregate_14_105166_e;
    gettimeofday(&tv_r_Aggregate_14_105166_s, 0);
    SW_Aggregate_TD_14208(tbl_JOIN_LEFTSEMI_TD_1525_output, tbl_Aggregate_TD_14208_output);
    gettimeofday(&tv_r_Aggregate_14_105166_e, 0);

    struct timeval tv_r_Filter_14_522659_s, tv_r_Filter_14_522659_e;
    gettimeofday(&tv_r_Filter_14_522659_s, 0);
    SW_Filter_TD_149(tbl_SerializeFromObject_TD_15152_input, tbl_Filter_TD_149_output);
    gettimeofday(&tv_r_Filter_14_522659_e, 0);

    struct timeval tv_r_JOIN_INNER_13_874616_s, tv_r_JOIN_INNER_13_874616_e;
    gettimeofday(&tv_r_JOIN_INNER_13_874616_s, 0);
    SW_JOIN_INNER_TD_13498(tbl_Filter_TD_14102_output, tbl_Aggregate_TD_14981_output, tbl_JOIN_INNER_TD_13498_output);
    gettimeofday(&tv_r_JOIN_INNER_13_874616_e, 0);

    struct timeval tv_r_JOIN_INNER_13_608551_s, tv_r_JOIN_INNER_13_608551_e;
    gettimeofday(&tv_r_JOIN_INNER_13_608551_s, 0);
    SW_JOIN_INNER_TD_13488(tbl_Filter_TD_14555_output, tbl_Aggregate_TD_14419_output, tbl_JOIN_INNER_TD_13488_output);
    gettimeofday(&tv_r_JOIN_INNER_13_608551_e, 0);

    struct timeval tv_r_JOIN_INNER_13_898985_s, tv_r_JOIN_INNER_13_898985_e;
    gettimeofday(&tv_r_JOIN_INNER_13_898985_s, 0);
    SW_JOIN_INNER_TD_13804(tbl_Filter_TD_14419_output, tbl_Aggregate_TD_14533_output, tbl_JOIN_INNER_TD_13804_output);
    gettimeofday(&tv_r_JOIN_INNER_13_898985_e, 0);

    struct timeval tv_r_JOIN_INNER_13_829120_s, tv_r_JOIN_INNER_13_829120_e;
    gettimeofday(&tv_r_JOIN_INNER_13_829120_s, 0);
    SW_JOIN_INNER_TD_13246(tbl_Filter_TD_14391_output, tbl_Aggregate_TD_14993_output, tbl_JOIN_INNER_TD_13246_output);
    gettimeofday(&tv_r_JOIN_INNER_13_829120_e, 0);

    struct timeval tv_r_JOIN_INNER_13_471911_s, tv_r_JOIN_INNER_13_471911_e;
    gettimeofday(&tv_r_JOIN_INNER_13_471911_s, 0);
    SW_JOIN_INNER_TD_13959(tbl_Filter_TD_14893_output, tbl_Aggregate_TD_14413_output, tbl_JOIN_INNER_TD_13959_output);
    gettimeofday(&tv_r_JOIN_INNER_13_471911_e, 0);

    struct timeval tv_r_JOIN_INNER_13_973936_s, tv_r_JOIN_INNER_13_973936_e;
    gettimeofday(&tv_r_JOIN_INNER_13_973936_s, 0);
    SW_JOIN_INNER_TD_13775(tbl_Filter_TD_149_output, tbl_Aggregate_TD_14208_output, tbl_JOIN_INNER_TD_13775_output);
    gettimeofday(&tv_r_JOIN_INNER_13_973936_e, 0);

    struct timeval tv_r_Filter_12_77413_s, tv_r_Filter_12_77413_e;
    gettimeofday(&tv_r_Filter_12_77413_s, 0);
    SW_Filter_TD_12106(tbl_SerializeFromObject_TD_13687_input, tbl_Filter_TD_12106_output);
    gettimeofday(&tv_r_Filter_12_77413_e, 0);

    struct timeval tv_r_Filter_12_995497_s, tv_r_Filter_12_995497_e;
    gettimeofday(&tv_r_Filter_12_995497_s, 0);
    SW_Filter_TD_12943(tbl_SerializeFromObject_TD_13957_input, tbl_Filter_TD_12943_output);
    gettimeofday(&tv_r_Filter_12_995497_e, 0);

    struct timeval tv_r_Filter_12_562205_s, tv_r_Filter_12_562205_e;
    gettimeofday(&tv_r_Filter_12_562205_s, 0);
    SW_Filter_TD_12813(tbl_SerializeFromObject_TD_13557_input, tbl_Filter_TD_12813_output);
    gettimeofday(&tv_r_Filter_12_562205_e, 0);

    struct timeval tv_r_Filter_12_828306_s, tv_r_Filter_12_828306_e;
    gettimeofday(&tv_r_Filter_12_828306_s, 0);
    SW_Filter_TD_12930(tbl_SerializeFromObject_TD_13299_input, tbl_Filter_TD_12930_output);
    gettimeofday(&tv_r_Filter_12_828306_e, 0);

    struct timeval tv_r_Filter_12_823854_s, tv_r_Filter_12_823854_e;
    gettimeofday(&tv_r_Filter_12_823854_s, 0);
    SW_Filter_TD_1224(tbl_SerializeFromObject_TD_13703_input, tbl_Filter_TD_1224_output);
    gettimeofday(&tv_r_Filter_12_823854_e, 0);

    struct timeval tv_r_Filter_12_341122_s, tv_r_Filter_12_341122_e;
    gettimeofday(&tv_r_Filter_12_341122_s, 0);
    SW_Filter_TD_12778(tbl_SerializeFromObject_TD_13967_input, tbl_Filter_TD_12778_output);
    gettimeofday(&tv_r_Filter_12_341122_e, 0);

    struct timeval tv_r_Project_12_187349_s, tv_r_Project_12_187349_e;
    gettimeofday(&tv_r_Project_12_187349_s, 0);
    SW_Project_TD_12309(tbl_JOIN_INNER_TD_13498_output, tbl_Project_TD_12309_output);
    gettimeofday(&tv_r_Project_12_187349_e, 0);

    struct timeval tv_r_Filter_12_783648_s, tv_r_Filter_12_783648_e;
    gettimeofday(&tv_r_Filter_12_783648_s, 0);
    SW_Filter_TD_12493(tbl_SerializeFromObject_TD_1375_input, tbl_Filter_TD_12493_output);
    gettimeofday(&tv_r_Filter_12_783648_e, 0);

    struct timeval tv_r_Project_12_516338_s, tv_r_Project_12_516338_e;
    gettimeofday(&tv_r_Project_12_516338_s, 0);
    SW_Project_TD_12573(tbl_JOIN_INNER_TD_13488_output, tbl_Project_TD_12573_output);
    gettimeofday(&tv_r_Project_12_516338_e, 0);

    struct timeval tv_r_Filter_12_136216_s, tv_r_Filter_12_136216_e;
    gettimeofday(&tv_r_Filter_12_136216_s, 0);
    SW_Filter_TD_12571(tbl_SerializeFromObject_TD_13682_input, tbl_Filter_TD_12571_output);
    gettimeofday(&tv_r_Filter_12_136216_e, 0);

    struct timeval tv_r_Filter_12_61546_s, tv_r_Filter_12_61546_e;
    gettimeofday(&tv_r_Filter_12_61546_s, 0);
    SW_Filter_TD_12105(tbl_SerializeFromObject_TD_13108_input, tbl_Filter_TD_12105_output);
    gettimeofday(&tv_r_Filter_12_61546_e, 0);

    struct timeval tv_r_Filter_12_955180_s, tv_r_Filter_12_955180_e;
    gettimeofday(&tv_r_Filter_12_955180_s, 0);
    SW_Filter_TD_12852(tbl_SerializeFromObject_TD_1342_input, tbl_Filter_TD_12852_output);
    gettimeofday(&tv_r_Filter_12_955180_e, 0);

    struct timeval tv_r_Filter_12_161827_s, tv_r_Filter_12_161827_e;
    gettimeofday(&tv_r_Filter_12_161827_s, 0);
    SW_Filter_TD_1255(tbl_SerializeFromObject_TD_138_input, tbl_Filter_TD_1255_output);
    gettimeofday(&tv_r_Filter_12_161827_e, 0);

    struct timeval tv_r_Filter_12_713847_s, tv_r_Filter_12_713847_e;
    gettimeofday(&tv_r_Filter_12_713847_s, 0);
    SW_Filter_TD_1246(tbl_SerializeFromObject_TD_13787_input, tbl_Filter_TD_1246_output);
    gettimeofday(&tv_r_Filter_12_713847_e, 0);

    struct timeval tv_r_Filter_12_6694_s, tv_r_Filter_12_6694_e;
    gettimeofday(&tv_r_Filter_12_6694_s, 0);
    SW_Filter_TD_12288(tbl_SerializeFromObject_TD_13295_input, tbl_Filter_TD_12288_output);
    gettimeofday(&tv_r_Filter_12_6694_e, 0);

    struct timeval tv_r_Filter_12_351093_s, tv_r_Filter_12_351093_e;
    gettimeofday(&tv_r_Filter_12_351093_s, 0);
    SW_Filter_TD_12208(tbl_SerializeFromObject_TD_13340_input, tbl_Filter_TD_12208_output);
    gettimeofday(&tv_r_Filter_12_351093_e, 0);

    struct timeval tv_r_Project_12_731162_s, tv_r_Project_12_731162_e;
    gettimeofday(&tv_r_Project_12_731162_s, 0);
    SW_Project_TD_12240(tbl_JOIN_INNER_TD_13804_output, tbl_Project_TD_12240_output);
    gettimeofday(&tv_r_Project_12_731162_e, 0);

    struct timeval tv_r_Filter_12_631017_s, tv_r_Filter_12_631017_e;
    gettimeofday(&tv_r_Filter_12_631017_s, 0);
    SW_Filter_TD_12696(tbl_SerializeFromObject_TD_13881_input, tbl_Filter_TD_12696_output);
    gettimeofday(&tv_r_Filter_12_631017_e, 0);

    struct timeval tv_r_Project_12_229048_s, tv_r_Project_12_229048_e;
    gettimeofday(&tv_r_Project_12_229048_s, 0);
    SW_Project_TD_12113(tbl_JOIN_INNER_TD_13246_output, tbl_Project_TD_12113_output);
    gettimeofday(&tv_r_Project_12_229048_e, 0);

    struct timeval tv_r_Filter_12_26925_s, tv_r_Filter_12_26925_e;
    gettimeofday(&tv_r_Filter_12_26925_s, 0);
    SW_Filter_TD_12806(tbl_SerializeFromObject_TD_1328_input, tbl_Filter_TD_12806_output);
    gettimeofday(&tv_r_Filter_12_26925_e, 0);

    struct timeval tv_r_Filter_12_355289_s, tv_r_Filter_12_355289_e;
    gettimeofday(&tv_r_Filter_12_355289_s, 0);
    SW_Filter_TD_12431(tbl_SerializeFromObject_TD_13815_input, tbl_Filter_TD_12431_output);
    gettimeofday(&tv_r_Filter_12_355289_e, 0);

    struct timeval tv_r_Filter_12_501003_s, tv_r_Filter_12_501003_e;
    gettimeofday(&tv_r_Filter_12_501003_s, 0);
    SW_Filter_TD_12738(tbl_SerializeFromObject_TD_13181_input, tbl_Filter_TD_12738_output);
    gettimeofday(&tv_r_Filter_12_501003_e, 0);

    struct timeval tv_r_Filter_12_295556_s, tv_r_Filter_12_295556_e;
    gettimeofday(&tv_r_Filter_12_295556_s, 0);
    SW_Filter_TD_12284(tbl_SerializeFromObject_TD_13495_input, tbl_Filter_TD_12284_output);
    gettimeofday(&tv_r_Filter_12_295556_e, 0);

    struct timeval tv_r_Filter_12_275877_s, tv_r_Filter_12_275877_e;
    gettimeofday(&tv_r_Filter_12_275877_s, 0);
    SW_Filter_TD_12854(tbl_SerializeFromObject_TD_13885_input, tbl_Filter_TD_12854_output);
    gettimeofday(&tv_r_Filter_12_275877_e, 0);

    struct timeval tv_r_Filter_12_734505_s, tv_r_Filter_12_734505_e;
    gettimeofday(&tv_r_Filter_12_734505_s, 0);
    SW_Filter_TD_1238(tbl_SerializeFromObject_TD_13265_input, tbl_Filter_TD_1238_output);
    gettimeofday(&tv_r_Filter_12_734505_e, 0);

    struct timeval tv_r_Filter_12_996493_s, tv_r_Filter_12_996493_e;
    gettimeofday(&tv_r_Filter_12_996493_s, 0);
    SW_Filter_TD_12193(tbl_SerializeFromObject_TD_13751_input, tbl_Filter_TD_12193_output);
    gettimeofday(&tv_r_Filter_12_996493_e, 0);

    struct timeval tv_r_Project_12_123413_s, tv_r_Project_12_123413_e;
    gettimeofday(&tv_r_Project_12_123413_s, 0);
    SW_Project_TD_12509(tbl_JOIN_INNER_TD_13959_output, tbl_Project_TD_12509_output);
    gettimeofday(&tv_r_Project_12_123413_e, 0);

    struct timeval tv_r_Filter_12_479767_s, tv_r_Filter_12_479767_e;
    gettimeofday(&tv_r_Filter_12_479767_s, 0);
    SW_Filter_TD_12274(tbl_SerializeFromObject_TD_13804_input, tbl_Filter_TD_12274_output);
    gettimeofday(&tv_r_Filter_12_479767_e, 0);

    struct timeval tv_r_Project_12_594722_s, tv_r_Project_12_594722_e;
    gettimeofday(&tv_r_Project_12_594722_s, 0);
    SW_Project_TD_12622(tbl_JOIN_INNER_TD_13775_output, tbl_Project_TD_12622_output);
    gettimeofday(&tv_r_Project_12_594722_e, 0);

    struct timeval tv_r_Filter_12_784901_s, tv_r_Filter_12_784901_e;
    gettimeofday(&tv_r_Filter_12_784901_s, 0);
    SW_Filter_TD_12277(tbl_SerializeFromObject_TD_13527_input, tbl_Filter_TD_12277_output);
    gettimeofday(&tv_r_Filter_12_784901_e, 0);

    struct timeval tv_r_JOIN_INNER_11_746222_s, tv_r_JOIN_INNER_11_746222_e;
    gettimeofday(&tv_r_JOIN_INNER_11_746222_s, 0);
    SW_JOIN_INNER_TD_11340(tbl_Filter_TD_12943_output, tbl_Filter_TD_12106_output, tbl_JOIN_INNER_TD_11340_output);
    gettimeofday(&tv_r_JOIN_INNER_11_746222_e, 0);

    struct timeval tv_r_JOIN_INNER_11_863504_s, tv_r_JOIN_INNER_11_863504_e;
    gettimeofday(&tv_r_JOIN_INNER_11_863504_s, 0);
    SW_JOIN_INNER_TD_11729(tbl_Filter_TD_12930_output, tbl_Filter_TD_12813_output, tbl_JOIN_INNER_TD_11729_output);
    gettimeofday(&tv_r_JOIN_INNER_11_863504_e, 0);

    struct timeval tv_r_JOIN_INNER_11_766601_s, tv_r_JOIN_INNER_11_766601_e;
    gettimeofday(&tv_r_JOIN_INNER_11_766601_s, 0);
    SW_JOIN_INNER_TD_11535(tbl_Filter_TD_12778_output, tbl_Filter_TD_1224_output, tbl_JOIN_INNER_TD_11535_output);
    gettimeofday(&tv_r_JOIN_INNER_11_766601_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_405041_s, tv_r_JOIN_LEFTSEMI_11_405041_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_405041_s, 0);
    SW_JOIN_LEFTSEMI_TD_11505(tbl_Filter_TD_12493_output, tbl_Project_TD_12309_output, tbl_JOIN_LEFTSEMI_TD_11505_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_405041_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_307582_s, tv_r_JOIN_LEFTSEMI_11_307582_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_307582_s, 0);
    SW_JOIN_LEFTSEMI_TD_11860(tbl_Filter_TD_12571_output, tbl_Project_TD_12573_output, tbl_JOIN_LEFTSEMI_TD_11860_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_307582_e, 0);

    struct timeval tv_r_JOIN_INNER_11_298808_s, tv_r_JOIN_INNER_11_298808_e;
    gettimeofday(&tv_r_JOIN_INNER_11_298808_s, 0);
    SW_JOIN_INNER_TD_11779(tbl_Filter_TD_12852_output, tbl_Filter_TD_12105_output, tbl_JOIN_INNER_TD_11779_output);
    gettimeofday(&tv_r_JOIN_INNER_11_298808_e, 0);

    struct timeval tv_r_JOIN_INNER_11_253075_s, tv_r_JOIN_INNER_11_253075_e;
    gettimeofday(&tv_r_JOIN_INNER_11_253075_s, 0);
    SW_JOIN_INNER_TD_11795(tbl_Filter_TD_1246_output, tbl_Filter_TD_1255_output, tbl_JOIN_INNER_TD_11795_output);
    gettimeofday(&tv_r_JOIN_INNER_11_253075_e, 0);

    struct timeval tv_r_JOIN_INNER_11_692807_s, tv_r_JOIN_INNER_11_692807_e;
    gettimeofday(&tv_r_JOIN_INNER_11_692807_s, 0);
    SW_JOIN_INNER_TD_11983(tbl_Filter_TD_12208_output, tbl_Filter_TD_12288_output, tbl_JOIN_INNER_TD_11983_output);
    gettimeofday(&tv_r_JOIN_INNER_11_692807_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_178097_s, tv_r_JOIN_LEFTSEMI_11_178097_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_178097_s, 0);
    SW_JOIN_LEFTSEMI_TD_11458(tbl_Filter_TD_12696_output, tbl_Project_TD_12240_output, tbl_JOIN_LEFTSEMI_TD_11458_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_178097_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_287423_s, tv_r_JOIN_LEFTSEMI_11_287423_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_287423_s, 0);
    SW_JOIN_LEFTSEMI_TD_11312(tbl_Filter_TD_12806_output, tbl_Project_TD_12113_output, tbl_JOIN_LEFTSEMI_TD_11312_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_287423_e, 0);

    struct timeval tv_r_JOIN_INNER_11_706888_s, tv_r_JOIN_INNER_11_706888_e;
    gettimeofday(&tv_r_JOIN_INNER_11_706888_s, 0);
    SW_JOIN_INNER_TD_11233(tbl_Filter_TD_12738_output, tbl_Filter_TD_12431_output, tbl_JOIN_INNER_TD_11233_output);
    gettimeofday(&tv_r_JOIN_INNER_11_706888_e, 0);

    struct timeval tv_r_JOIN_INNER_11_575803_s, tv_r_JOIN_INNER_11_575803_e;
    gettimeofday(&tv_r_JOIN_INNER_11_575803_s, 0);
    SW_JOIN_INNER_TD_11454(tbl_Filter_TD_12854_output, tbl_Filter_TD_12284_output, tbl_JOIN_INNER_TD_11454_output);
    gettimeofday(&tv_r_JOIN_INNER_11_575803_e, 0);

    struct timeval tv_r_JOIN_INNER_11_677603_s, tv_r_JOIN_INNER_11_677603_e;
    gettimeofday(&tv_r_JOIN_INNER_11_677603_s, 0);
    SW_JOIN_INNER_TD_11160(tbl_Filter_TD_12193_output, tbl_Filter_TD_1238_output, tbl_JOIN_INNER_TD_11160_output);
    gettimeofday(&tv_r_JOIN_INNER_11_677603_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_207910_s, tv_r_JOIN_LEFTSEMI_11_207910_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_207910_s, 0);
    SW_JOIN_LEFTSEMI_TD_11793(tbl_Filter_TD_12274_output, tbl_Project_TD_12509_output, tbl_JOIN_LEFTSEMI_TD_11793_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_207910_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_672067_s, tv_r_JOIN_LEFTSEMI_11_672067_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_672067_s, 0);
    SW_JOIN_LEFTSEMI_TD_1184(tbl_Filter_TD_12277_output, tbl_Project_TD_12622_output, tbl_JOIN_LEFTSEMI_TD_1184_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_672067_e, 0);

    struct timeval tv_r_Project_10_89485_s, tv_r_Project_10_89485_e;
    gettimeofday(&tv_r_Project_10_89485_s, 0);
    SW_Project_TD_10208(tbl_JOIN_INNER_TD_11340_output, tbl_Project_TD_10208_output);
    gettimeofday(&tv_r_Project_10_89485_e, 0);

    struct timeval tv_r_Project_10_520367_s, tv_r_Project_10_520367_e;
    gettimeofday(&tv_r_Project_10_520367_s, 0);
    SW_Project_TD_10206(tbl_JOIN_INNER_TD_11729_output, tbl_Project_TD_10206_output);
    gettimeofday(&tv_r_Project_10_520367_e, 0);

    struct timeval tv_r_Project_10_157479_s, tv_r_Project_10_157479_e;
    gettimeofday(&tv_r_Project_10_157479_s, 0);
    SW_Project_TD_10562(tbl_JOIN_INNER_TD_11535_output, tbl_Project_TD_10562_output);
    gettimeofday(&tv_r_Project_10_157479_e, 0);

    struct timeval tv_r_Filter_10_850262_s, tv_r_Filter_10_850262_e;
    gettimeofday(&tv_r_Filter_10_850262_s, 0);
    SW_Filter_TD_10841(tbl_SerializeFromObject_TD_11850_input, tbl_Filter_TD_10841_output);
    gettimeofday(&tv_r_Filter_10_850262_e, 0);

    struct timeval tv_r_JOIN_INNER_10_518731_s, tv_r_JOIN_INNER_10_518731_e;
    gettimeofday(&tv_r_JOIN_INNER_10_518731_s, 0);
    SW_JOIN_INNER_TD_10276(tbl_JOIN_LEFTSEMI_TD_11860_output, tbl_JOIN_LEFTSEMI_TD_11505_output, tbl_JOIN_INNER_TD_10276_output);
    gettimeofday(&tv_r_JOIN_INNER_10_518731_e, 0);

    struct timeval tv_r_Project_10_203110_s, tv_r_Project_10_203110_e;
    gettimeofday(&tv_r_Project_10_203110_s, 0);
    SW_Project_TD_10407(tbl_JOIN_INNER_TD_11779_output, tbl_Project_TD_10407_output);
    gettimeofday(&tv_r_Project_10_203110_e, 0);

    struct timeval tv_r_Project_10_410946_s, tv_r_Project_10_410946_e;
    gettimeofday(&tv_r_Project_10_410946_s, 0);
    SW_Project_TD_1059(tbl_JOIN_INNER_TD_11795_output, tbl_Project_TD_1059_output);
    gettimeofday(&tv_r_Project_10_410946_e, 0);

    struct timeval tv_r_Project_10_631882_s, tv_r_Project_10_631882_e;
    gettimeofday(&tv_r_Project_10_631882_s, 0);
    SW_Project_TD_10543(tbl_JOIN_INNER_TD_11983_output, tbl_Project_TD_10543_output);
    gettimeofday(&tv_r_Project_10_631882_e, 0);

    struct timeval tv_r_Filter_10_29866_s, tv_r_Filter_10_29866_e;
    gettimeofday(&tv_r_Filter_10_29866_s, 0);
    SW_Filter_TD_10831(tbl_SerializeFromObject_TD_11106_input, tbl_Filter_TD_10831_output);
    gettimeofday(&tv_r_Filter_10_29866_e, 0);

    struct timeval tv_r_JOIN_INNER_10_195739_s, tv_r_JOIN_INNER_10_195739_e;
    gettimeofday(&tv_r_JOIN_INNER_10_195739_s, 0);
    SW_JOIN_INNER_TD_10887(tbl_JOIN_LEFTSEMI_TD_11312_output, tbl_JOIN_LEFTSEMI_TD_11458_output, tbl_JOIN_INNER_TD_10887_output);
    gettimeofday(&tv_r_JOIN_INNER_10_195739_e, 0);

    struct timeval tv_r_Project_10_476454_s, tv_r_Project_10_476454_e;
    gettimeofday(&tv_r_Project_10_476454_s, 0);
    SW_Project_TD_10270(tbl_JOIN_INNER_TD_11233_output, tbl_Project_TD_10270_output);
    gettimeofday(&tv_r_Project_10_476454_e, 0);

    struct timeval tv_r_Project_10_123587_s, tv_r_Project_10_123587_e;
    gettimeofday(&tv_r_Project_10_123587_s, 0);
    SW_Project_TD_1066(tbl_JOIN_INNER_TD_11454_output, tbl_Project_TD_1066_output);
    gettimeofday(&tv_r_Project_10_123587_e, 0);

    struct timeval tv_r_Project_10_754429_s, tv_r_Project_10_754429_e;
    gettimeofday(&tv_r_Project_10_754429_s, 0);
    SW_Project_TD_10872(tbl_JOIN_INNER_TD_11160_output, tbl_Project_TD_10872_output);
    gettimeofday(&tv_r_Project_10_754429_e, 0);

    struct timeval tv_r_Filter_10_349467_s, tv_r_Filter_10_349467_e;
    gettimeofday(&tv_r_Filter_10_349467_s, 0);
    SW_Filter_TD_1011(tbl_SerializeFromObject_TD_11169_input, tbl_Filter_TD_1011_output);
    gettimeofday(&tv_r_Filter_10_349467_e, 0);

    struct timeval tv_r_JOIN_INNER_10_422456_s, tv_r_JOIN_INNER_10_422456_e;
    gettimeofday(&tv_r_JOIN_INNER_10_422456_s, 0);
    SW_JOIN_INNER_TD_10331(tbl_JOIN_LEFTSEMI_TD_1184_output, tbl_JOIN_LEFTSEMI_TD_11793_output, tbl_JOIN_INNER_TD_10331_output);
    gettimeofday(&tv_r_JOIN_INNER_10_422456_e, 0);

    struct timeval tv_r_Union_9_472066_s, tv_r_Union_9_472066_e;
    gettimeofday(&tv_r_Union_9_472066_s, 0);
    SW_Union_TD_9511(tbl_Project_TD_10562_output, tbl_Project_TD_10206_output, tbl_Project_TD_10208_output, tbl_Union_TD_9511_output);
    gettimeofday(&tv_r_Union_9_472066_e, 0);

    struct timeval tv_r_JOIN_INNER_9_431504_s, tv_r_JOIN_INNER_9_431504_e;
    gettimeofday(&tv_r_JOIN_INNER_9_431504_s, 0);
    SW_JOIN_INNER_TD_9385(tbl_JOIN_INNER_TD_10276_output, tbl_Filter_TD_10841_output, tbl_JOIN_INNER_TD_9385_output);
    gettimeofday(&tv_r_JOIN_INNER_9_431504_e, 0);

    struct timeval tv_r_Union_9_921083_s, tv_r_Union_9_921083_e;
    gettimeofday(&tv_r_Union_9_921083_s, 0);
    SW_Union_TD_951(tbl_Project_TD_10543_output, tbl_Project_TD_1059_output, tbl_Project_TD_10407_output, tbl_Union_TD_951_output);
    gettimeofday(&tv_r_Union_9_921083_e, 0);

    struct timeval tv_r_JOIN_INNER_9_952322_s, tv_r_JOIN_INNER_9_952322_e;
    gettimeofday(&tv_r_JOIN_INNER_9_952322_s, 0);
    SW_JOIN_INNER_TD_9517(tbl_JOIN_INNER_TD_10887_output, tbl_Filter_TD_10831_output, tbl_JOIN_INNER_TD_9517_output);
    gettimeofday(&tv_r_JOIN_INNER_9_952322_e, 0);

    struct timeval tv_r_Union_9_957125_s, tv_r_Union_9_957125_e;
    gettimeofday(&tv_r_Union_9_957125_s, 0);
    SW_Union_TD_9383(tbl_Project_TD_10872_output, tbl_Project_TD_1066_output, tbl_Project_TD_10270_output, tbl_Union_TD_9383_output);
    gettimeofday(&tv_r_Union_9_957125_e, 0);

    struct timeval tv_r_JOIN_INNER_9_99556_s, tv_r_JOIN_INNER_9_99556_e;
    gettimeofday(&tv_r_JOIN_INNER_9_99556_s, 0);
    SW_JOIN_INNER_TD_9536(tbl_JOIN_INNER_TD_10331_output, tbl_Filter_TD_1011_output, tbl_JOIN_INNER_TD_9536_output);
    gettimeofday(&tv_r_JOIN_INNER_9_99556_e, 0);

    struct timeval tv_r_Aggregate_8_540489_s, tv_r_Aggregate_8_540489_e;
    gettimeofday(&tv_r_Aggregate_8_540489_s, 0);
    SW_Aggregate_TD_8527(tbl_Union_TD_9511_output, tbl_Aggregate_TD_8527_output);
    gettimeofday(&tv_r_Aggregate_8_540489_e, 0);

    struct timeval tv_r_Aggregate_8_631611_s, tv_r_Aggregate_8_631611_e;
    gettimeofday(&tv_r_Aggregate_8_631611_s, 0);
    SW_Aggregate_TD_8247(tbl_JOIN_INNER_TD_9385_output, tbl_Aggregate_TD_8247_output);
    gettimeofday(&tv_r_Aggregate_8_631611_e, 0);

    struct timeval tv_r_Aggregate_8_554185_s, tv_r_Aggregate_8_554185_e;
    gettimeofday(&tv_r_Aggregate_8_554185_s, 0);
    SW_Aggregate_TD_8113(tbl_Union_TD_951_output, tbl_Aggregate_TD_8113_output);
    gettimeofday(&tv_r_Aggregate_8_554185_e, 0);

    struct timeval tv_r_Aggregate_8_75398_s, tv_r_Aggregate_8_75398_e;
    gettimeofday(&tv_r_Aggregate_8_75398_s, 0);
    SW_Aggregate_TD_8690(tbl_JOIN_INNER_TD_9517_output, tbl_Aggregate_TD_8690_output);
    gettimeofday(&tv_r_Aggregate_8_75398_e, 0);

    struct timeval tv_r_Aggregate_8_35876_s, tv_r_Aggregate_8_35876_e;
    gettimeofday(&tv_r_Aggregate_8_35876_s, 0);
    SW_Aggregate_TD_8754(tbl_Union_TD_9383_output, tbl_Aggregate_TD_8754_output);
    gettimeofday(&tv_r_Aggregate_8_35876_e, 0);

    struct timeval tv_r_Aggregate_8_284655_s, tv_r_Aggregate_8_284655_e;
    gettimeofday(&tv_r_Aggregate_8_284655_s, 0);
    SW_Aggregate_TD_821(tbl_JOIN_INNER_TD_9536_output, tbl_Aggregate_TD_821_output);
    gettimeofday(&tv_r_Aggregate_8_284655_e, 0);

    struct timeval tv_r_Filter_7_674544_s, tv_r_Filter_7_674544_e;
    gettimeofday(&tv_r_Filter_7_674544_s, 0);
    SW_Filter_TD_7573(tbl_Aggregate_TD_8247_output, tbl_Aggregate_TD_8527_output, tbl_Filter_TD_7573_output);
    gettimeofday(&tv_r_Filter_7_674544_e, 0);

    struct timeval tv_r_Filter_7_573454_s, tv_r_Filter_7_573454_e;
    gettimeofday(&tv_r_Filter_7_573454_s, 0);
    SW_Filter_TD_7421(tbl_Aggregate_TD_8690_output, tbl_Aggregate_TD_8113_output, tbl_Filter_TD_7421_output);
    gettimeofday(&tv_r_Filter_7_573454_e, 0);

    struct timeval tv_r_Filter_7_172776_s, tv_r_Filter_7_172776_e;
    gettimeofday(&tv_r_Filter_7_172776_s, 0);
    SW_Filter_TD_7267(tbl_Aggregate_TD_821_output, tbl_Aggregate_TD_8754_output, tbl_Filter_TD_7267_output);
    gettimeofday(&tv_r_Filter_7_172776_e, 0);

    struct timeval tv_r_Project_6_838411_s, tv_r_Project_6_838411_e;
    gettimeofday(&tv_r_Project_6_838411_s, 0);
    SW_Project_TD_6549(tbl_Filter_TD_7573_output, tbl_Project_TD_6549_output);
    gettimeofday(&tv_r_Project_6_838411_e, 0);

    struct timeval tv_r_Project_6_509309_s, tv_r_Project_6_509309_e;
    gettimeofday(&tv_r_Project_6_509309_s, 0);
    SW_Project_TD_6593(tbl_Filter_TD_7421_output, tbl_Project_TD_6593_output);
    gettimeofday(&tv_r_Project_6_509309_e, 0);

    struct timeval tv_r_Project_6_713841_s, tv_r_Project_6_713841_e;
    gettimeofday(&tv_r_Project_6_713841_s, 0);
    SW_Project_TD_6918(tbl_Filter_TD_7267_output, tbl_Project_TD_6918_output);
    gettimeofday(&tv_r_Project_6_713841_e, 0);

    struct timeval tv_r_Union_5_124289_s, tv_r_Union_5_124289_e;
    gettimeofday(&tv_r_Union_5_124289_s, 0);
    SW_Union_TD_5991(tbl_Project_TD_6918_output, tbl_Project_TD_6593_output, tbl_Project_TD_6549_output, tbl_Union_TD_5991_output);
    gettimeofday(&tv_r_Union_5_124289_e, 0);

    struct timeval tv_r_Aggregate_3_841095_s, tv_r_Aggregate_3_841095_e;
    gettimeofday(&tv_r_Aggregate_3_841095_s, 0);
    SW_Aggregate_TD_3478(NULL, tbl_Aggregate_TD_3478_output);
    gettimeofday(&tv_r_Aggregate_3_841095_e, 0);

    struct timeval tv_r_Sort_2_723579_s, tv_r_Sort_2_723579_e;
    gettimeofday(&tv_r_Sort_2_723579_s, 0);
    SW_Sort_TD_2427(tbl_Aggregate_TD_3478_output, tbl_Sort_TD_2427_output);
    gettimeofday(&tv_r_Sort_2_723579_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_300865_s, &tv_r_Filter_23_300865_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24659_input: " << tbl_SerializeFromObject_TD_24659_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_18378_s, &tv_r_Filter_23_18378_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24262_input: " << tbl_SerializeFromObject_TD_24262_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_802305_s, &tv_r_Filter_23_802305_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2482_input: " << tbl_SerializeFromObject_TD_2482_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_154338_s, &tv_r_Filter_23_154338_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24208_input: " << tbl_SerializeFromObject_TD_24208_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_846774_s, &tv_r_Filter_23_846774_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24898_input: " << tbl_SerializeFromObject_TD_24898_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_240749_s, &tv_r_Filter_23_240749_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2472_input: " << tbl_SerializeFromObject_TD_2472_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_339324_s, &tv_r_Filter_23_339324_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24730_input: " << tbl_SerializeFromObject_TD_24730_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_874837_s, &tv_r_Filter_23_874837_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24254_input: " << tbl_SerializeFromObject_TD_24254_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_665582_s, &tv_r_Filter_23_665582_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24896_input: " << tbl_SerializeFromObject_TD_24896_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_120354_s, &tv_r_Filter_23_120354_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24976_input: " << tbl_SerializeFromObject_TD_24976_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_32132_s, &tv_r_Filter_23_32132_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24227_input: " << tbl_SerializeFromObject_TD_24227_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_535988_s, &tv_r_Filter_23_535988_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24534_input: " << tbl_SerializeFromObject_TD_24534_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_644530_s, &tv_r_Filter_22_644530_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2341_input: " << tbl_SerializeFromObject_TD_2341_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_708386_s, &tv_r_JOIN_INNER_22_708386_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2387_output: " << tbl_Filter_TD_2387_output.getNumRow() << " " << "tbl_Filter_TD_236_output: " << tbl_Filter_TD_236_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_74672_s, &tv_r_Filter_22_74672_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_23739_input: " << tbl_SerializeFromObject_TD_23739_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_336735_s, &tv_r_JOIN_INNER_22_336735_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23686_output: " << tbl_Filter_TD_23686_output.getNumRow() << " " << "tbl_Filter_TD_23536_output: " << tbl_Filter_TD_23536_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_213202_s, &tv_r_Filter_22_213202_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_23930_input: " << tbl_SerializeFromObject_TD_23930_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_790566_s, &tv_r_JOIN_INNER_22_790566_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23326_output: " << tbl_Filter_TD_23326_output.getNumRow() << " " << "tbl_Filter_TD_23440_output: " << tbl_Filter_TD_23440_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_482440_s, &tv_r_Filter_22_482440_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_23926_input: " << tbl_SerializeFromObject_TD_23926_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_400159_s, &tv_r_JOIN_INNER_22_400159_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23944_output: " << tbl_Filter_TD_23944_output.getNumRow() << " " << "tbl_Filter_TD_23906_output: " << tbl_Filter_TD_23906_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_498497_s, &tv_r_Filter_22_498497_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_23139_input: " << tbl_SerializeFromObject_TD_23139_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_29091_s, &tv_r_JOIN_INNER_22_29091_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23206_output: " << tbl_Filter_TD_23206_output.getNumRow() << " " << "tbl_Filter_TD_23122_output: " << tbl_Filter_TD_23122_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_697718_s, &tv_r_Filter_22_697718_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_23339_input: " << tbl_SerializeFromObject_TD_23339_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_905650_s, &tv_r_JOIN_INNER_22_905650_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23147_output: " << tbl_Filter_TD_23147_output.getNumRow() << " " << "tbl_Filter_TD_23517_output: " << tbl_Filter_TD_23517_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_190622_s, &tv_r_JOIN_INNER_21_190622_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22241_output: " << tbl_JOIN_INNER_TD_22241_output.getNumRow() << " " << "tbl_Filter_TD_22573_output: " << tbl_Filter_TD_22573_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_466980_s, &tv_r_Filter_21_466980_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22837_input: " << tbl_SerializeFromObject_TD_22837_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_910361_s, &tv_r_JOIN_INNER_21_910361_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22349_output: " << tbl_JOIN_INNER_TD_22349_output.getNumRow() << " " << "tbl_Filter_TD_22899_output: " << tbl_Filter_TD_22899_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_877879_s, &tv_r_Filter_21_877879_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22865_input: " << tbl_SerializeFromObject_TD_22865_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_829901_s, &tv_r_JOIN_INNER_21_829901_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22152_output: " << tbl_JOIN_INNER_TD_22152_output.getNumRow() << " " << "tbl_Filter_TD_22335_output: " << tbl_Filter_TD_22335_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_468356_s, &tv_r_Filter_21_468356_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22116_input: " << tbl_SerializeFromObject_TD_22116_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_826489_s, &tv_r_JOIN_INNER_21_826489_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22127_output: " << tbl_JOIN_INNER_TD_22127_output.getNumRow() << " " << "tbl_Filter_TD_22764_output: " << tbl_Filter_TD_22764_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_581362_s, &tv_r_Filter_21_581362_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22523_input: " << tbl_SerializeFromObject_TD_22523_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_713348_s, &tv_r_JOIN_INNER_21_713348_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2235_output: " << tbl_JOIN_INNER_TD_2235_output.getNumRow() << " " << "tbl_Filter_TD_22534_output: " << tbl_Filter_TD_22534_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_511492_s, &tv_r_Filter_21_511492_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22794_input: " << tbl_SerializeFromObject_TD_22794_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_296788_s, &tv_r_JOIN_INNER_21_296788_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22205_output: " << tbl_JOIN_INNER_TD_22205_output.getNumRow() << " " << "tbl_Filter_TD_22357_output: " << tbl_Filter_TD_22357_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_38013_s, &tv_r_Filter_21_38013_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22184_input: " << tbl_SerializeFromObject_TD_22184_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_46370_s, &tv_r_JOIN_LEFTSEMI_20_46370_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21175_output: " << tbl_Filter_TD_21175_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21442_output: " << tbl_JOIN_INNER_TD_21442_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_160207_s, &tv_r_Filter_20_160207_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2120_input: " << tbl_SerializeFromObject_TD_2120_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_645591_s, &tv_r_JOIN_LEFTSEMI_20_645591_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21914_output: " << tbl_Filter_TD_21914_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21645_output: " << tbl_JOIN_INNER_TD_21645_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_328716_s, &tv_r_Filter_20_328716_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21508_input: " << tbl_SerializeFromObject_TD_21508_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_13625_s, &tv_r_JOIN_LEFTSEMI_20_13625_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21655_output: " << tbl_Filter_TD_21655_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21388_output: " << tbl_JOIN_INNER_TD_21388_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_689863_s, &tv_r_Filter_20_689863_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21383_input: " << tbl_SerializeFromObject_TD_21383_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_140008_s, &tv_r_JOIN_LEFTSEMI_20_140008_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21634_output: " << tbl_Filter_TD_21634_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21964_output: " << tbl_JOIN_INNER_TD_21964_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_564891_s, &tv_r_Filter_20_564891_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21468_input: " << tbl_SerializeFromObject_TD_21468_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_201836_s, &tv_r_JOIN_LEFTSEMI_20_201836_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21401_output: " << tbl_Filter_TD_21401_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21962_output: " << tbl_JOIN_INNER_TD_21962_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_938635_s, &tv_r_Filter_20_938635_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21202_input: " << tbl_SerializeFromObject_TD_21202_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_883424_s, &tv_r_JOIN_LEFTSEMI_20_883424_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21523_output: " << tbl_Filter_TD_21523_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21752_output: " << tbl_JOIN_INNER_TD_21752_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_489334_s, &tv_r_Filter_20_489334_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21265_input: " << tbl_SerializeFromObject_TD_21265_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_650100_s, &tv_r_Filter_19_650100_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20489_input: " << tbl_SerializeFromObject_TD_20489_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_814088_s, &tv_r_JOIN_INNER_19_814088_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20602_output: " << tbl_Filter_TD_20602_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_20103_output: " << tbl_JOIN_LEFTSEMI_TD_20103_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_665238_s, &tv_r_Filter_19_665238_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20845_input: " << tbl_SerializeFromObject_TD_20845_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_333284_s, &tv_r_JOIN_INNER_19_333284_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20306_output: " << tbl_Filter_TD_20306_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_2099_output: " << tbl_JOIN_LEFTSEMI_TD_2099_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_155581_s, &tv_r_Filter_19_155581_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20381_input: " << tbl_SerializeFromObject_TD_20381_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_628345_s, &tv_r_JOIN_INNER_19_628345_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20406_output: " << tbl_Filter_TD_20406_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_2066_output: " << tbl_JOIN_LEFTSEMI_TD_2066_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_191063_s, &tv_r_Filter_19_191063_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20276_input: " << tbl_SerializeFromObject_TD_20276_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_558641_s, &tv_r_JOIN_INNER_19_558641_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20171_output: " << tbl_Filter_TD_20171_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_20649_output: " << tbl_JOIN_LEFTSEMI_TD_20649_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_722861_s, &tv_r_Filter_19_722861_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20483_input: " << tbl_SerializeFromObject_TD_20483_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_670524_s, &tv_r_JOIN_INNER_19_670524_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20453_output: " << tbl_Filter_TD_20453_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_20711_output: " << tbl_JOIN_LEFTSEMI_TD_20711_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_951857_s, &tv_r_Filter_19_951857_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20636_input: " << tbl_SerializeFromObject_TD_20636_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_952535_s, &tv_r_JOIN_INNER_19_952535_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20339_output: " << tbl_Filter_TD_20339_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_2074_output: " << tbl_JOIN_LEFTSEMI_TD_2074_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_944324_s, &tv_r_Filter_18_944324_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19969_input: " << tbl_SerializeFromObject_TD_19969_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_784722_s, &tv_r_Filter_18_784722_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19606_input: " << tbl_SerializeFromObject_TD_19606_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_441326_s, &tv_r_JOIN_INNER_18_441326_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19465_output: " << tbl_JOIN_INNER_TD_19465_output.getNumRow() << " " << "tbl_Filter_TD_19629_output: " << tbl_Filter_TD_19629_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_73481_s, &tv_r_Filter_18_73481_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19189_input: " << tbl_SerializeFromObject_TD_19189_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_397022_s, &tv_r_Filter_18_397022_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19842_input: " << tbl_SerializeFromObject_TD_19842_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_353267_s, &tv_r_JOIN_INNER_18_353267_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19663_output: " << tbl_JOIN_INNER_TD_19663_output.getNumRow() << " " << "tbl_Filter_TD_19709_output: " << tbl_Filter_TD_19709_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_845919_s, &tv_r_Filter_18_845919_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19456_input: " << tbl_SerializeFromObject_TD_19456_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_969307_s, &tv_r_Filter_18_969307_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19198_input: " << tbl_SerializeFromObject_TD_19198_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_994902_s, &tv_r_JOIN_INNER_18_994902_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19768_output: " << tbl_JOIN_INNER_TD_19768_output.getNumRow() << " " << "tbl_Filter_TD_19257_output: " << tbl_Filter_TD_19257_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_801356_s, &tv_r_Filter_18_801356_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1961_input: " << tbl_SerializeFromObject_TD_1961_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_869582_s, &tv_r_Filter_18_869582_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19104_input: " << tbl_SerializeFromObject_TD_19104_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_920913_s, &tv_r_JOIN_INNER_18_920913_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19464_output: " << tbl_JOIN_INNER_TD_19464_output.getNumRow() << " " << "tbl_Filter_TD_19587_output: " << tbl_Filter_TD_19587_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_883077_s, &tv_r_Filter_18_883077_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19619_input: " << tbl_SerializeFromObject_TD_19619_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_291030_s, &tv_r_Filter_18_291030_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19653_input: " << tbl_SerializeFromObject_TD_19653_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_904597_s, &tv_r_JOIN_INNER_18_904597_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19326_output: " << tbl_JOIN_INNER_TD_19326_output.getNumRow() << " " << "tbl_Filter_TD_19223_output: " << tbl_Filter_TD_19223_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_535618_s, &tv_r_Filter_18_535618_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19740_input: " << tbl_SerializeFromObject_TD_19740_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_646824_s, &tv_r_Filter_18_646824_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19637_input: " << tbl_SerializeFromObject_TD_19637_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_118676_s, &tv_r_JOIN_INNER_18_118676_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19808_output: " << tbl_JOIN_INNER_TD_19808_output.getNumRow() << " " << "tbl_Filter_TD_19818_output: " << tbl_Filter_TD_19818_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_348492_s, &tv_r_Filter_17_348492_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18227_input: " << tbl_SerializeFromObject_TD_18227_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_30696_s, &tv_r_JOIN_INNER_17_30696_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18274_output: " << tbl_Filter_TD_18274_output.getNumRow() << " " << "tbl_Filter_TD_18409_output: " << tbl_Filter_TD_18409_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_757471_s, &tv_r_Project_17_757471_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18936_output: " << tbl_JOIN_INNER_TD_18936_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_445609_s, &tv_r_Filter_17_445609_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18652_input: " << tbl_SerializeFromObject_TD_18652_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_604637_s, &tv_r_JOIN_INNER_17_604637_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18985_output: " << tbl_Filter_TD_18985_output.getNumRow() << " " << "tbl_Filter_TD_18874_output: " << tbl_Filter_TD_18874_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_58567_s, &tv_r_Project_17_58567_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18921_output: " << tbl_JOIN_INNER_TD_18921_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_530322_s, &tv_r_Filter_17_530322_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18564_input: " << tbl_SerializeFromObject_TD_18564_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_735315_s, &tv_r_JOIN_INNER_17_735315_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18843_output: " << tbl_Filter_TD_18843_output.getNumRow() << " " << "tbl_Filter_TD_18697_output: " << tbl_Filter_TD_18697_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_931701_s, &tv_r_Project_17_931701_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18698_output: " << tbl_JOIN_INNER_TD_18698_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_136760_s, &tv_r_Filter_17_136760_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18174_input: " << tbl_SerializeFromObject_TD_18174_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_559278_s, &tv_r_JOIN_INNER_17_559278_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18154_output: " << tbl_Filter_TD_18154_output.getNumRow() << " " << "tbl_Filter_TD_18675_output: " << tbl_Filter_TD_18675_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_985352_s, &tv_r_Project_17_985352_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1814_output: " << tbl_JOIN_INNER_TD_1814_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_741779_s, &tv_r_Filter_17_741779_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18327_input: " << tbl_SerializeFromObject_TD_18327_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_844882_s, &tv_r_JOIN_INNER_17_844882_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18961_output: " << tbl_Filter_TD_18961_output.getNumRow() << " " << "tbl_Filter_TD_1868_output: " << tbl_Filter_TD_1868_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_427341_s, &tv_r_Project_17_427341_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18956_output: " << tbl_JOIN_INNER_TD_18956_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_872939_s, &tv_r_Filter_17_872939_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18272_input: " << tbl_SerializeFromObject_TD_18272_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_847682_s, &tv_r_JOIN_INNER_17_847682_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18556_output: " << tbl_Filter_TD_18556_output.getNumRow() << " " << "tbl_Filter_TD_18595_output: " << tbl_Filter_TD_18595_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_23155_s, &tv_r_Project_17_23155_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18168_output: " << tbl_JOIN_INNER_TD_18168_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_921908_s, &tv_r_JOIN_INNER_16_921908_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_175_output: " << tbl_JOIN_INNER_TD_175_output.getNumRow() << " " << "tbl_Filter_TD_17519_output: " << tbl_Filter_TD_17519_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_349483_s, &tv_r_Aggregate_16_349483_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1710_output: " << tbl_Project_TD_1710_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_118563_s, &tv_r_JOIN_INNER_16_118563_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17674_output: " << tbl_JOIN_INNER_TD_17674_output.getNumRow() << " " << "tbl_Filter_TD_17204_output: " << tbl_Filter_TD_17204_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_679152_s, &tv_r_Aggregate_16_679152_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17441_output: " << tbl_Project_TD_17441_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_507701_s, &tv_r_JOIN_INNER_16_507701_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17683_output: " << tbl_JOIN_INNER_TD_17683_output.getNumRow() << " " << "tbl_Filter_TD_17991_output: " << tbl_Filter_TD_17991_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_744121_s, &tv_r_Aggregate_16_744121_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17191_output: " << tbl_Project_TD_17191_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_374820_s, &tv_r_JOIN_INNER_16_374820_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1791_output: " << tbl_JOIN_INNER_TD_1791_output.getNumRow() << " " << "tbl_Filter_TD_17748_output: " << tbl_Filter_TD_17748_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_557207_s, &tv_r_Aggregate_16_557207_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17618_output: " << tbl_Project_TD_17618_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_562357_s, &tv_r_JOIN_INNER_16_562357_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1797_output: " << tbl_JOIN_INNER_TD_1797_output.getNumRow() << " " << "tbl_Filter_TD_1711_output: " << tbl_Filter_TD_1711_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_173347_s, &tv_r_Aggregate_16_173347_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17879_output: " << tbl_Project_TD_17879_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_210445_s, &tv_r_JOIN_INNER_16_210445_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17560_output: " << tbl_JOIN_INNER_TD_17560_output.getNumRow() << " " << "tbl_Filter_TD_17542_output: " << tbl_Filter_TD_17542_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_52765_s, &tv_r_Aggregate_16_52765_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17388_output: " << tbl_Project_TD_17388_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_201096_s, &tv_r_JOIN_LEFTSEMI_15_201096_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_167_output: " << tbl_Aggregate_TD_167_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16441_output: " << tbl_JOIN_INNER_TD_16441_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_699282_s, &tv_r_JOIN_LEFTSEMI_15_699282_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_16233_output: " << tbl_Aggregate_TD_16233_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16300_output: " << tbl_JOIN_INNER_TD_16300_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_743673_s, &tv_r_JOIN_LEFTSEMI_15_743673_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1621_output: " << tbl_Aggregate_TD_1621_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16622_output: " << tbl_JOIN_INNER_TD_16622_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_562537_s, &tv_r_JOIN_LEFTSEMI_15_562537_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_16107_output: " << tbl_Aggregate_TD_16107_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16787_output: " << tbl_JOIN_INNER_TD_16787_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_289080_s, &tv_r_JOIN_LEFTSEMI_15_289080_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_16373_output: " << tbl_Aggregate_TD_16373_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16530_output: " << tbl_JOIN_INNER_TD_16530_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_565852_s, &tv_r_JOIN_LEFTSEMI_15_565852_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_16795_output: " << tbl_Aggregate_TD_16795_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16168_output: " << tbl_JOIN_INNER_TD_16168_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_561249_s, &tv_r_Aggregate_14_561249_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_15519_output: " << tbl_JOIN_LEFTSEMI_TD_15519_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_392827_s, &tv_r_Filter_14_392827_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15566_input: " << tbl_SerializeFromObject_TD_15566_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_346533_s, &tv_r_Aggregate_14_346533_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_1528_output: " << tbl_JOIN_LEFTSEMI_TD_1528_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_660231_s, &tv_r_Filter_14_660231_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15684_input: " << tbl_SerializeFromObject_TD_15684_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_974292_s, &tv_r_Aggregate_14_974292_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_1569_output: " << tbl_JOIN_LEFTSEMI_TD_1569_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_7995_s, &tv_r_Filter_14_7995_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15527_input: " << tbl_SerializeFromObject_TD_15527_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_565510_s, &tv_r_Aggregate_14_565510_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_15984_output: " << tbl_JOIN_LEFTSEMI_TD_15984_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_298395_s, &tv_r_Filter_14_298395_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15622_input: " << tbl_SerializeFromObject_TD_15622_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_665475_s, &tv_r_Aggregate_14_665475_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_15737_output: " << tbl_JOIN_LEFTSEMI_TD_15737_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_307482_s, &tv_r_Filter_14_307482_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15375_input: " << tbl_SerializeFromObject_TD_15375_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_105166_s, &tv_r_Aggregate_14_105166_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_1525_output: " << tbl_JOIN_LEFTSEMI_TD_1525_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_522659_s, &tv_r_Filter_14_522659_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15152_input: " << tbl_SerializeFromObject_TD_15152_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_874616_s, &tv_r_JOIN_INNER_13_874616_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14102_output: " << tbl_Filter_TD_14102_output.getNumRow() << " " << "tbl_Aggregate_TD_14981_output: " << tbl_Aggregate_TD_14981_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_608551_s, &tv_r_JOIN_INNER_13_608551_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14555_output: " << tbl_Filter_TD_14555_output.getNumRow() << " " << "tbl_Aggregate_TD_14419_output: " << tbl_Aggregate_TD_14419_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_898985_s, &tv_r_JOIN_INNER_13_898985_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14419_output: " << tbl_Filter_TD_14419_output.getNumRow() << " " << "tbl_Aggregate_TD_14533_output: " << tbl_Aggregate_TD_14533_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_829120_s, &tv_r_JOIN_INNER_13_829120_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14391_output: " << tbl_Filter_TD_14391_output.getNumRow() << " " << "tbl_Aggregate_TD_14993_output: " << tbl_Aggregate_TD_14993_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_471911_s, &tv_r_JOIN_INNER_13_471911_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14893_output: " << tbl_Filter_TD_14893_output.getNumRow() << " " << "tbl_Aggregate_TD_14413_output: " << tbl_Aggregate_TD_14413_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_973936_s, &tv_r_JOIN_INNER_13_973936_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_149_output: " << tbl_Filter_TD_149_output.getNumRow() << " " << "tbl_Aggregate_TD_14208_output: " << tbl_Aggregate_TD_14208_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_77413_s, &tv_r_Filter_12_77413_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13687_input: " << tbl_SerializeFromObject_TD_13687_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_995497_s, &tv_r_Filter_12_995497_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13957_input: " << tbl_SerializeFromObject_TD_13957_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_562205_s, &tv_r_Filter_12_562205_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13557_input: " << tbl_SerializeFromObject_TD_13557_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_828306_s, &tv_r_Filter_12_828306_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13299_input: " << tbl_SerializeFromObject_TD_13299_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_823854_s, &tv_r_Filter_12_823854_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13703_input: " << tbl_SerializeFromObject_TD_13703_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_341122_s, &tv_r_Filter_12_341122_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13967_input: " << tbl_SerializeFromObject_TD_13967_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_187349_s, &tv_r_Project_12_187349_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13498_output: " << tbl_JOIN_INNER_TD_13498_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_783648_s, &tv_r_Filter_12_783648_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1375_input: " << tbl_SerializeFromObject_TD_1375_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_516338_s, &tv_r_Project_12_516338_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13488_output: " << tbl_JOIN_INNER_TD_13488_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_136216_s, &tv_r_Filter_12_136216_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13682_input: " << tbl_SerializeFromObject_TD_13682_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_61546_s, &tv_r_Filter_12_61546_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13108_input: " << tbl_SerializeFromObject_TD_13108_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_955180_s, &tv_r_Filter_12_955180_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1342_input: " << tbl_SerializeFromObject_TD_1342_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_161827_s, &tv_r_Filter_12_161827_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_138_input: " << tbl_SerializeFromObject_TD_138_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_713847_s, &tv_r_Filter_12_713847_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13787_input: " << tbl_SerializeFromObject_TD_13787_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_6694_s, &tv_r_Filter_12_6694_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13295_input: " << tbl_SerializeFromObject_TD_13295_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_351093_s, &tv_r_Filter_12_351093_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13340_input: " << tbl_SerializeFromObject_TD_13340_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_731162_s, &tv_r_Project_12_731162_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13804_output: " << tbl_JOIN_INNER_TD_13804_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_631017_s, &tv_r_Filter_12_631017_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13881_input: " << tbl_SerializeFromObject_TD_13881_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_229048_s, &tv_r_Project_12_229048_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13246_output: " << tbl_JOIN_INNER_TD_13246_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_26925_s, &tv_r_Filter_12_26925_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1328_input: " << tbl_SerializeFromObject_TD_1328_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_355289_s, &tv_r_Filter_12_355289_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13815_input: " << tbl_SerializeFromObject_TD_13815_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_501003_s, &tv_r_Filter_12_501003_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13181_input: " << tbl_SerializeFromObject_TD_13181_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_295556_s, &tv_r_Filter_12_295556_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13495_input: " << tbl_SerializeFromObject_TD_13495_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_275877_s, &tv_r_Filter_12_275877_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13885_input: " << tbl_SerializeFromObject_TD_13885_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_734505_s, &tv_r_Filter_12_734505_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13265_input: " << tbl_SerializeFromObject_TD_13265_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_996493_s, &tv_r_Filter_12_996493_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13751_input: " << tbl_SerializeFromObject_TD_13751_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_123413_s, &tv_r_Project_12_123413_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13959_output: " << tbl_JOIN_INNER_TD_13959_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_479767_s, &tv_r_Filter_12_479767_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13804_input: " << tbl_SerializeFromObject_TD_13804_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_594722_s, &tv_r_Project_12_594722_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13775_output: " << tbl_JOIN_INNER_TD_13775_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_784901_s, &tv_r_Filter_12_784901_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13527_input: " << tbl_SerializeFromObject_TD_13527_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_746222_s, &tv_r_JOIN_INNER_11_746222_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12943_output: " << tbl_Filter_TD_12943_output.getNumRow() << " " << "tbl_Filter_TD_12106_output: " << tbl_Filter_TD_12106_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_863504_s, &tv_r_JOIN_INNER_11_863504_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12930_output: " << tbl_Filter_TD_12930_output.getNumRow() << " " << "tbl_Filter_TD_12813_output: " << tbl_Filter_TD_12813_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_766601_s, &tv_r_JOIN_INNER_11_766601_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12778_output: " << tbl_Filter_TD_12778_output.getNumRow() << " " << "tbl_Filter_TD_1224_output: " << tbl_Filter_TD_1224_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_405041_s, &tv_r_JOIN_LEFTSEMI_11_405041_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12493_output: " << tbl_Filter_TD_12493_output.getNumRow() << " " << "tbl_Project_TD_12309_output: " << tbl_Project_TD_12309_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_307582_s, &tv_r_JOIN_LEFTSEMI_11_307582_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12571_output: " << tbl_Filter_TD_12571_output.getNumRow() << " " << "tbl_Project_TD_12573_output: " << tbl_Project_TD_12573_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_298808_s, &tv_r_JOIN_INNER_11_298808_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12852_output: " << tbl_Filter_TD_12852_output.getNumRow() << " " << "tbl_Filter_TD_12105_output: " << tbl_Filter_TD_12105_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_253075_s, &tv_r_JOIN_INNER_11_253075_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1246_output: " << tbl_Filter_TD_1246_output.getNumRow() << " " << "tbl_Filter_TD_1255_output: " << tbl_Filter_TD_1255_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_692807_s, &tv_r_JOIN_INNER_11_692807_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12208_output: " << tbl_Filter_TD_12208_output.getNumRow() << " " << "tbl_Filter_TD_12288_output: " << tbl_Filter_TD_12288_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_178097_s, &tv_r_JOIN_LEFTSEMI_11_178097_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12696_output: " << tbl_Filter_TD_12696_output.getNumRow() << " " << "tbl_Project_TD_12240_output: " << tbl_Project_TD_12240_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_287423_s, &tv_r_JOIN_LEFTSEMI_11_287423_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12806_output: " << tbl_Filter_TD_12806_output.getNumRow() << " " << "tbl_Project_TD_12113_output: " << tbl_Project_TD_12113_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_706888_s, &tv_r_JOIN_INNER_11_706888_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12738_output: " << tbl_Filter_TD_12738_output.getNumRow() << " " << "tbl_Filter_TD_12431_output: " << tbl_Filter_TD_12431_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_575803_s, &tv_r_JOIN_INNER_11_575803_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12854_output: " << tbl_Filter_TD_12854_output.getNumRow() << " " << "tbl_Filter_TD_12284_output: " << tbl_Filter_TD_12284_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_677603_s, &tv_r_JOIN_INNER_11_677603_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12193_output: " << tbl_Filter_TD_12193_output.getNumRow() << " " << "tbl_Filter_TD_1238_output: " << tbl_Filter_TD_1238_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_207910_s, &tv_r_JOIN_LEFTSEMI_11_207910_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12274_output: " << tbl_Filter_TD_12274_output.getNumRow() << " " << "tbl_Project_TD_12509_output: " << tbl_Project_TD_12509_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_672067_s, &tv_r_JOIN_LEFTSEMI_11_672067_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12277_output: " << tbl_Filter_TD_12277_output.getNumRow() << " " << "tbl_Project_TD_12622_output: " << tbl_Project_TD_12622_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_89485_s, &tv_r_Project_10_89485_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11340_output: " << tbl_JOIN_INNER_TD_11340_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_520367_s, &tv_r_Project_10_520367_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11729_output: " << tbl_JOIN_INNER_TD_11729_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_157479_s, &tv_r_Project_10_157479_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11535_output: " << tbl_JOIN_INNER_TD_11535_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_850262_s, &tv_r_Filter_10_850262_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11850_input: " << tbl_SerializeFromObject_TD_11850_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_518731_s, &tv_r_JOIN_INNER_10_518731_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_11860_output: " << tbl_JOIN_LEFTSEMI_TD_11860_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_11505_output: " << tbl_JOIN_LEFTSEMI_TD_11505_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_203110_s, &tv_r_Project_10_203110_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11779_output: " << tbl_JOIN_INNER_TD_11779_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_410946_s, &tv_r_Project_10_410946_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11795_output: " << tbl_JOIN_INNER_TD_11795_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_631882_s, &tv_r_Project_10_631882_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11983_output: " << tbl_JOIN_INNER_TD_11983_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_29866_s, &tv_r_Filter_10_29866_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11106_input: " << tbl_SerializeFromObject_TD_11106_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_195739_s, &tv_r_JOIN_INNER_10_195739_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_11312_output: " << tbl_JOIN_LEFTSEMI_TD_11312_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_11458_output: " << tbl_JOIN_LEFTSEMI_TD_11458_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_476454_s, &tv_r_Project_10_476454_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11233_output: " << tbl_JOIN_INNER_TD_11233_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_123587_s, &tv_r_Project_10_123587_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11454_output: " << tbl_JOIN_INNER_TD_11454_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_754429_s, &tv_r_Project_10_754429_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11160_output: " << tbl_JOIN_INNER_TD_11160_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_349467_s, &tv_r_Filter_10_349467_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11169_input: " << tbl_SerializeFromObject_TD_11169_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_422456_s, &tv_r_JOIN_INNER_10_422456_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_1184_output: " << tbl_JOIN_LEFTSEMI_TD_1184_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_11793_output: " << tbl_JOIN_LEFTSEMI_TD_11793_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_472066_s, &tv_r_Union_9_472066_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10562_output: " << tbl_Project_TD_10562_output.getNumRow() << " " << "tbl_Project_TD_10206_output: " << tbl_Project_TD_10206_output.getNumRow() << " " << "tbl_Project_TD_10208_output: " << tbl_Project_TD_10208_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_431504_s, &tv_r_JOIN_INNER_9_431504_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10276_output: " << tbl_JOIN_INNER_TD_10276_output.getNumRow() << " " << "tbl_Filter_TD_10841_output: " << tbl_Filter_TD_10841_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_921083_s, &tv_r_Union_9_921083_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10543_output: " << tbl_Project_TD_10543_output.getNumRow() << " " << "tbl_Project_TD_1059_output: " << tbl_Project_TD_1059_output.getNumRow() << " " << "tbl_Project_TD_10407_output: " << tbl_Project_TD_10407_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_952322_s, &tv_r_JOIN_INNER_9_952322_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10887_output: " << tbl_JOIN_INNER_TD_10887_output.getNumRow() << " " << "tbl_Filter_TD_10831_output: " << tbl_Filter_TD_10831_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_957125_s, &tv_r_Union_9_957125_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10872_output: " << tbl_Project_TD_10872_output.getNumRow() << " " << "tbl_Project_TD_1066_output: " << tbl_Project_TD_1066_output.getNumRow() << " " << "tbl_Project_TD_10270_output: " << tbl_Project_TD_10270_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_99556_s, &tv_r_JOIN_INNER_9_99556_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10331_output: " << tbl_JOIN_INNER_TD_10331_output.getNumRow() << " " << "tbl_Filter_TD_1011_output: " << tbl_Filter_TD_1011_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_540489_s, &tv_r_Aggregate_8_540489_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9511_output: " << tbl_Union_TD_9511_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_631611_s, &tv_r_Aggregate_8_631611_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9385_output: " << tbl_JOIN_INNER_TD_9385_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_554185_s, &tv_r_Aggregate_8_554185_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_951_output: " << tbl_Union_TD_951_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_75398_s, &tv_r_Aggregate_8_75398_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9517_output: " << tbl_JOIN_INNER_TD_9517_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_35876_s, &tv_r_Aggregate_8_35876_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9383_output: " << tbl_Union_TD_9383_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_284655_s, &tv_r_Aggregate_8_284655_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9536_output: " << tbl_JOIN_INNER_TD_9536_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_674544_s, &tv_r_Filter_7_674544_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8247_output: " << tbl_Aggregate_TD_8247_output.getNumRow() << " " << "tbl_Aggregate_TD_8527_output: " << tbl_Aggregate_TD_8527_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_573454_s, &tv_r_Filter_7_573454_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8690_output: " << tbl_Aggregate_TD_8690_output.getNumRow() << " " << "tbl_Aggregate_TD_8113_output: " << tbl_Aggregate_TD_8113_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_172776_s, &tv_r_Filter_7_172776_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_821_output: " << tbl_Aggregate_TD_821_output.getNumRow() << " " << "tbl_Aggregate_TD_8754_output: " << tbl_Aggregate_TD_8754_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_838411_s, &tv_r_Project_6_838411_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7573_output: " << tbl_Filter_TD_7573_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_509309_s, &tv_r_Project_6_509309_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7421_output: " << tbl_Filter_TD_7421_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_713841_s, &tv_r_Project_6_713841_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7267_output: " << tbl_Filter_TD_7267_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_5: " << tvdiff(&tv_r_Union_5_124289_s, &tv_r_Union_5_124289_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6918_output: " << tbl_Project_TD_6918_output.getNumRow() << " " << "tbl_Project_TD_6593_output: " << tbl_Project_TD_6593_output.getNumRow() << " " << "tbl_Project_TD_6549_output: " << tbl_Project_TD_6549_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_841095_s, &tv_r_Aggregate_3_841095_e) / 1000.0 << " ms " 
     << "NULL: " << NULL.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_723579_s, &tv_r_Sort_2_723579_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3478_output: " << tbl_Aggregate_TD_3478_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 19.398275 * 1000 << "ms" << std::endl; 
    return 0; 
}
