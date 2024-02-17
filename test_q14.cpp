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
    Table tbl_GlobalLimit_TD_0297_output("tbl_GlobalLimit_TD_0297_output", 6100000, 6, "");
    tbl_GlobalLimit_TD_0297_output.allocateHost();
    Table tbl_LocalLimit_TD_1625_output("tbl_LocalLimit_TD_1625_output", 6100000, 6, "");
    tbl_LocalLimit_TD_1625_output.allocateHost();
    Table tbl_Sort_TD_2396_output("tbl_Sort_TD_2396_output", 6100000, 6, "");
    tbl_Sort_TD_2396_output.allocateHost();
    Table tbl_Aggregate_TD_3894_output("tbl_Aggregate_TD_3894_output", 6100000, 6, "");
    tbl_Aggregate_TD_3894_output.allocateHost();
    Table tbl_Expand_TD_4900_output("tbl_Expand_TD_4900_output", 6100000, 7, "");
    tbl_Expand_TD_4900_output.allocateHost();
    Table tbl_Union_TD_5437_output("tbl_Union_TD_5437_output", 6100000, 6, "");
    tbl_Union_TD_5437_output.allocateHost();
    Table tbl_Project_TD_6597_output("tbl_Project_TD_6597_output", 6100000, 6, "");
    tbl_Project_TD_6597_output.allocateHost();
    Table tbl_Project_TD_6100_output("tbl_Project_TD_6100_output", 6100000, 6, "");
    tbl_Project_TD_6100_output.allocateHost();
    Table tbl_Project_TD_6237_output("tbl_Project_TD_6237_output", 6100000, 6, "");
    tbl_Project_TD_6237_output.allocateHost();
    Table tbl_Filter_TD_7569_output("tbl_Filter_TD_7569_output", 6100000, 5, "");
    tbl_Filter_TD_7569_output.allocateHost();
    Table tbl_Filter_TD_7865_output("tbl_Filter_TD_7865_output", 6100000, 5, "");
    tbl_Filter_TD_7865_output.allocateHost();
    Table tbl_Filter_TD_7522_output("tbl_Filter_TD_7522_output", 6100000, 5, "");
    tbl_Filter_TD_7522_output.allocateHost();
    Table tbl_Aggregate_TD_8818_output("tbl_Aggregate_TD_8818_output", 6100000, 5, "");
    tbl_Aggregate_TD_8818_output.allocateHost();
    Table tbl_Aggregate_TD_8310_output("tbl_Aggregate_TD_8310_output", 6100000, 1, "");
    tbl_Aggregate_TD_8310_output.allocateHost();
    Table tbl_Aggregate_TD_8835_output("tbl_Aggregate_TD_8835_output", 6100000, 5, "");
    tbl_Aggregate_TD_8835_output.allocateHost();
    Table tbl_Aggregate_TD_8810_output("tbl_Aggregate_TD_8810_output", 6100000, 1, "");
    tbl_Aggregate_TD_8810_output.allocateHost();
    Table tbl_Aggregate_TD_816_output("tbl_Aggregate_TD_816_output", 6100000, 5, "");
    tbl_Aggregate_TD_816_output.allocateHost();
    Table tbl_Aggregate_TD_8808_output("tbl_Aggregate_TD_8808_output", 6100000, 1, "");
    tbl_Aggregate_TD_8808_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9455_output("tbl_JOIN_INNER_TD_9455_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_9455_output.allocateHost();
    Table tbl_Union_TD_9347_output("tbl_Union_TD_9347_output", 6100000, 2, "");
    tbl_Union_TD_9347_output.allocateHost();
    Table tbl_JOIN_INNER_TD_963_output("tbl_JOIN_INNER_TD_963_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_963_output.allocateHost();
    Table tbl_Union_TD_9308_output("tbl_Union_TD_9308_output", 6100000, 2, "");
    tbl_Union_TD_9308_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9862_output("tbl_JOIN_INNER_TD_9862_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_9862_output.allocateHost();
    Table tbl_Union_TD_9949_output("tbl_Union_TD_9949_output", 6100000, 2, "");
    tbl_Union_TD_9949_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10740_output("tbl_JOIN_INNER_TD_10740_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10740_output.allocateHost();
    Table tbl_Filter_TD_1059_output("tbl_Filter_TD_1059_output", 6100000, 1, "");
    tbl_Filter_TD_1059_output.allocateHost();
    Table tbl_Project_TD_10364_output("tbl_Project_TD_10364_output", 6100000, 2, "");
    tbl_Project_TD_10364_output.allocateHost();
    Table tbl_Project_TD_10581_output("tbl_Project_TD_10581_output", 6100000, 2, "");
    tbl_Project_TD_10581_output.allocateHost();
    Table tbl_Project_TD_10123_output("tbl_Project_TD_10123_output", 6100000, 2, "");
    tbl_Project_TD_10123_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10647_output("tbl_JOIN_INNER_TD_10647_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10647_output.allocateHost();
    Table tbl_Filter_TD_10713_output("tbl_Filter_TD_10713_output", 6100000, 1, "");
    tbl_Filter_TD_10713_output.allocateHost();
    Table tbl_Project_TD_10583_output("tbl_Project_TD_10583_output", 6100000, 2, "");
    tbl_Project_TD_10583_output.allocateHost();
    Table tbl_Project_TD_10750_output("tbl_Project_TD_10750_output", 6100000, 2, "");
    tbl_Project_TD_10750_output.allocateHost();
    Table tbl_Project_TD_1031_output("tbl_Project_TD_1031_output", 6100000, 2, "");
    tbl_Project_TD_1031_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10323_output("tbl_JOIN_INNER_TD_10323_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10323_output.allocateHost();
    Table tbl_Filter_TD_1013_output("tbl_Filter_TD_1013_output", 6100000, 1, "");
    tbl_Filter_TD_1013_output.allocateHost();
    Table tbl_Project_TD_10121_output("tbl_Project_TD_10121_output", 6100000, 2, "");
    tbl_Project_TD_10121_output.allocateHost();
    Table tbl_Project_TD_10502_output("tbl_Project_TD_10502_output", 6100000, 2, "");
    tbl_Project_TD_10502_output.allocateHost();
    Table tbl_Project_TD_10595_output("tbl_Project_TD_10595_output", 6100000, 2, "");
    tbl_Project_TD_10595_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_1169_output("tbl_JOIN_LEFTSEMI_TD_1169_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_1169_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11737_output("tbl_JOIN_LEFTSEMI_TD_11737_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11737_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11951_input;
    tbl_SerializeFromObject_TD_11951_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11951_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11951_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11951_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11951_input.allocateHost();
    tbl_SerializeFromObject_TD_11951_input.loadHost();
    Table tbl_JOIN_INNER_TD_11621_output("tbl_JOIN_INNER_TD_11621_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11621_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11837_output("tbl_JOIN_INNER_TD_11837_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11837_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1191_output("tbl_JOIN_INNER_TD_1191_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_1191_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11655_output("tbl_JOIN_LEFTSEMI_TD_11655_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11655_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11161_output("tbl_JOIN_LEFTSEMI_TD_11161_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11161_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11547_input;
    tbl_SerializeFromObject_TD_11547_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11547_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11547_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11547_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11547_input.allocateHost();
    tbl_SerializeFromObject_TD_11547_input.loadHost();
    Table tbl_JOIN_INNER_TD_11961_output("tbl_JOIN_INNER_TD_11961_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11961_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1175_output("tbl_JOIN_INNER_TD_1175_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_1175_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11408_output("tbl_JOIN_INNER_TD_11408_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11408_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11641_output("tbl_JOIN_LEFTSEMI_TD_11641_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11641_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_11290_output("tbl_JOIN_LEFTSEMI_TD_11290_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_11290_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11820_input;
    tbl_SerializeFromObject_TD_11820_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11820_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11820_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11820_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11820_input.allocateHost();
    tbl_SerializeFromObject_TD_11820_input.loadHost();
    Table tbl_JOIN_INNER_TD_11482_output("tbl_JOIN_INNER_TD_11482_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11482_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1162_output("tbl_JOIN_INNER_TD_1162_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_1162_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11446_output("tbl_JOIN_INNER_TD_11446_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_11446_output.allocateHost();
    Table tbl_Filter_TD_12286_output("tbl_Filter_TD_12286_output", 6100000, 4, "");
    tbl_Filter_TD_12286_output.allocateHost();
    Table tbl_Project_TD_12137_output("tbl_Project_TD_12137_output", 6100000, 1, "");
    tbl_Project_TD_12137_output.allocateHost();
    Table tbl_Filter_TD_12604_output("tbl_Filter_TD_12604_output", 6100000, 4, "");
    tbl_Filter_TD_12604_output.allocateHost();
    Table tbl_Project_TD_1223_output("tbl_Project_TD_1223_output", 6100000, 1, "");
    tbl_Project_TD_1223_output.allocateHost();
    Table tbl_Filter_TD_12354_output("tbl_Filter_TD_12354_output", 6100000, 3, "");
    tbl_Filter_TD_12354_output.allocateHost();
    Table tbl_Filter_TD_12671_output("tbl_Filter_TD_12671_output", 6100000, 1, "");
    tbl_Filter_TD_12671_output.allocateHost();
    Table tbl_Filter_TD_12834_output("tbl_Filter_TD_12834_output", 6100000, 3, "");
    tbl_Filter_TD_12834_output.allocateHost();
    Table tbl_Filter_TD_1229_output("tbl_Filter_TD_1229_output", 6100000, 1, "");
    tbl_Filter_TD_1229_output.allocateHost();
    Table tbl_Filter_TD_12285_output("tbl_Filter_TD_12285_output", 6100000, 3, "");
    tbl_Filter_TD_12285_output.allocateHost();
    Table tbl_Filter_TD_12881_output("tbl_Filter_TD_12881_output", 6100000, 1, "");
    tbl_Filter_TD_12881_output.allocateHost();
    Table tbl_Filter_TD_12332_output("tbl_Filter_TD_12332_output", 6100000, 4, "");
    tbl_Filter_TD_12332_output.allocateHost();
    Table tbl_Project_TD_12270_output("tbl_Project_TD_12270_output", 6100000, 1, "");
    tbl_Project_TD_12270_output.allocateHost();
    Table tbl_Filter_TD_12646_output("tbl_Filter_TD_12646_output", 6100000, 4, "");
    tbl_Filter_TD_12646_output.allocateHost();
    Table tbl_Project_TD_12738_output("tbl_Project_TD_12738_output", 6100000, 1, "");
    tbl_Project_TD_12738_output.allocateHost();
    Table tbl_Filter_TD_12711_output("tbl_Filter_TD_12711_output", 6100000, 3, "");
    tbl_Filter_TD_12711_output.allocateHost();
    Table tbl_Filter_TD_12802_output("tbl_Filter_TD_12802_output", 6100000, 1, "");
    tbl_Filter_TD_12802_output.allocateHost();
    Table tbl_Filter_TD_12623_output("tbl_Filter_TD_12623_output", 6100000, 3, "");
    tbl_Filter_TD_12623_output.allocateHost();
    Table tbl_Filter_TD_12678_output("tbl_Filter_TD_12678_output", 6100000, 1, "");
    tbl_Filter_TD_12678_output.allocateHost();
    Table tbl_Filter_TD_12645_output("tbl_Filter_TD_12645_output", 6100000, 3, "");
    tbl_Filter_TD_12645_output.allocateHost();
    Table tbl_Filter_TD_12676_output("tbl_Filter_TD_12676_output", 6100000, 1, "");
    tbl_Filter_TD_12676_output.allocateHost();
    Table tbl_Filter_TD_12745_output("tbl_Filter_TD_12745_output", 6100000, 4, "");
    tbl_Filter_TD_12745_output.allocateHost();
    Table tbl_Project_TD_12881_output("tbl_Project_TD_12881_output", 6100000, 1, "");
    tbl_Project_TD_12881_output.allocateHost();
    Table tbl_Filter_TD_12481_output("tbl_Filter_TD_12481_output", 6100000, 4, "");
    tbl_Filter_TD_12481_output.allocateHost();
    Table tbl_Project_TD_12700_output("tbl_Project_TD_12700_output", 6100000, 1, "");
    tbl_Project_TD_12700_output.allocateHost();
    Table tbl_Filter_TD_1212_output("tbl_Filter_TD_1212_output", 6100000, 3, "");
    tbl_Filter_TD_1212_output.allocateHost();
    Table tbl_Filter_TD_12502_output("tbl_Filter_TD_12502_output", 6100000, 1, "");
    tbl_Filter_TD_12502_output.allocateHost();
    Table tbl_Filter_TD_12763_output("tbl_Filter_TD_12763_output", 6100000, 3, "");
    tbl_Filter_TD_12763_output.allocateHost();
    Table tbl_Filter_TD_12866_output("tbl_Filter_TD_12866_output", 6100000, 1, "");
    tbl_Filter_TD_12866_output.allocateHost();
    Table tbl_Filter_TD_12654_output("tbl_Filter_TD_12654_output", 6100000, 3, "");
    tbl_Filter_TD_12654_output.allocateHost();
    Table tbl_Filter_TD_12130_output("tbl_Filter_TD_12130_output", 6100000, 1, "");
    tbl_Filter_TD_12130_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13667_input;
    tbl_SerializeFromObject_TD_13667_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13667_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13667_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13667_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13667_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_13667_input.allocateHost();
    tbl_SerializeFromObject_TD_13667_input.loadHost();
    Table tbl_JOIN_INNER_TD_13722_output("tbl_JOIN_INNER_TD_13722_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13722_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13499_input;
    tbl_SerializeFromObject_TD_13499_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13499_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13499_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13499_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13499_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13499_input.allocateHost();
    tbl_SerializeFromObject_TD_13499_input.loadHost();
    Table tbl_JOIN_INNER_TD_13763_output("tbl_JOIN_INNER_TD_13763_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13763_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13299_input;
    tbl_SerializeFromObject_TD_13299_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13299_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13299_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13299_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_13299_input.allocateHost();
    tbl_SerializeFromObject_TD_13299_input.loadHost();
    Table tbl_SerializeFromObject_TD_13505_input;
    tbl_SerializeFromObject_TD_13505_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13505_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13505_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13505_input.allocateHost();
    tbl_SerializeFromObject_TD_13505_input.loadHost();
    Table tbl_SerializeFromObject_TD_13944_input;
    tbl_SerializeFromObject_TD_13944_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13944_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13944_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13944_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_13944_input.allocateHost();
    tbl_SerializeFromObject_TD_13944_input.loadHost();
    Table tbl_SerializeFromObject_TD_13308_input;
    tbl_SerializeFromObject_TD_13308_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13308_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13308_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13308_input.allocateHost();
    tbl_SerializeFromObject_TD_13308_input.loadHost();
    Table tbl_SerializeFromObject_TD_13873_input;
    tbl_SerializeFromObject_TD_13873_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13873_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13873_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13873_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_13873_input.allocateHost();
    tbl_SerializeFromObject_TD_13873_input.loadHost();
    Table tbl_SerializeFromObject_TD_13791_input;
    tbl_SerializeFromObject_TD_13791_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13791_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13791_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13791_input.allocateHost();
    tbl_SerializeFromObject_TD_13791_input.loadHost();
    Table tbl_SerializeFromObject_TD_13140_input;
    tbl_SerializeFromObject_TD_13140_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13140_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13140_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13140_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13140_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_13140_input.allocateHost();
    tbl_SerializeFromObject_TD_13140_input.loadHost();
    Table tbl_JOIN_INNER_TD_13603_output("tbl_JOIN_INNER_TD_13603_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13603_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13833_input;
    tbl_SerializeFromObject_TD_13833_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13833_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13833_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13833_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13833_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13833_input.allocateHost();
    tbl_SerializeFromObject_TD_13833_input.loadHost();
    Table tbl_JOIN_INNER_TD_13882_output("tbl_JOIN_INNER_TD_13882_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13882_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13633_input;
    tbl_SerializeFromObject_TD_13633_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13633_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13633_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13633_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_13633_input.allocateHost();
    tbl_SerializeFromObject_TD_13633_input.loadHost();
    Table tbl_SerializeFromObject_TD_13559_input;
    tbl_SerializeFromObject_TD_13559_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13559_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13559_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13559_input.allocateHost();
    tbl_SerializeFromObject_TD_13559_input.loadHost();
    Table tbl_SerializeFromObject_TD_13747_input;
    tbl_SerializeFromObject_TD_13747_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13747_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13747_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13747_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_13747_input.allocateHost();
    tbl_SerializeFromObject_TD_13747_input.loadHost();
    Table tbl_SerializeFromObject_TD_13828_input;
    tbl_SerializeFromObject_TD_13828_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13828_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13828_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13828_input.allocateHost();
    tbl_SerializeFromObject_TD_13828_input.loadHost();
    Table tbl_SerializeFromObject_TD_13889_input;
    tbl_SerializeFromObject_TD_13889_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13889_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13889_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13889_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_13889_input.allocateHost();
    tbl_SerializeFromObject_TD_13889_input.loadHost();
    Table tbl_SerializeFromObject_TD_13140_input;
    tbl_SerializeFromObject_TD_13140_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13140_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13140_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13140_input.allocateHost();
    tbl_SerializeFromObject_TD_13140_input.loadHost();
    Table tbl_SerializeFromObject_TD_13580_input;
    tbl_SerializeFromObject_TD_13580_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13580_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13580_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13580_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13580_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_13580_input.allocateHost();
    tbl_SerializeFromObject_TD_13580_input.loadHost();
    Table tbl_JOIN_INNER_TD_13754_output("tbl_JOIN_INNER_TD_13754_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13754_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1343_input;
    tbl_SerializeFromObject_TD_1343_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1343_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1343_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_1343_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_1343_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_1343_input.allocateHost();
    tbl_SerializeFromObject_TD_1343_input.loadHost();
    Table tbl_JOIN_INNER_TD_13338_output("tbl_JOIN_INNER_TD_13338_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_13338_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13448_input;
    tbl_SerializeFromObject_TD_13448_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13448_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13448_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13448_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_13448_input.allocateHost();
    tbl_SerializeFromObject_TD_13448_input.loadHost();
    Table tbl_SerializeFromObject_TD_13912_input;
    tbl_SerializeFromObject_TD_13912_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13912_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13912_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13912_input.allocateHost();
    tbl_SerializeFromObject_TD_13912_input.loadHost();
    Table tbl_SerializeFromObject_TD_13889_input;
    tbl_SerializeFromObject_TD_13889_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13889_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13889_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13889_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_13889_input.allocateHost();
    tbl_SerializeFromObject_TD_13889_input.loadHost();
    Table tbl_SerializeFromObject_TD_13753_input;
    tbl_SerializeFromObject_TD_13753_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13753_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13753_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13753_input.allocateHost();
    tbl_SerializeFromObject_TD_13753_input.loadHost();
    Table tbl_SerializeFromObject_TD_1362_input;
    tbl_SerializeFromObject_TD_1362_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1362_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1362_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_1362_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_1362_input.allocateHost();
    tbl_SerializeFromObject_TD_1362_input.loadHost();
    Table tbl_SerializeFromObject_TD_13691_input;
    tbl_SerializeFromObject_TD_13691_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13691_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13691_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13691_input.allocateHost();
    tbl_SerializeFromObject_TD_13691_input.loadHost();
    Table tbl_Filter_TD_14496_output("tbl_Filter_TD_14496_output", 6100000, 4, "");
    tbl_Filter_TD_14496_output.allocateHost();
    Table tbl_Aggregate_TD_14612_output("tbl_Aggregate_TD_14612_output", 6100000, 3, "");
    tbl_Aggregate_TD_14612_output.allocateHost();
    Table tbl_Filter_TD_14642_output("tbl_Filter_TD_14642_output", 6100000, 4, "");
    tbl_Filter_TD_14642_output.allocateHost();
    Table tbl_Aggregate_TD_14976_output("tbl_Aggregate_TD_14976_output", 6100000, 3, "");
    tbl_Aggregate_TD_14976_output.allocateHost();
    Table tbl_Filter_TD_14967_output("tbl_Filter_TD_14967_output", 6100000, 4, "");
    tbl_Filter_TD_14967_output.allocateHost();
    Table tbl_Aggregate_TD_14718_output("tbl_Aggregate_TD_14718_output", 6100000, 3, "");
    tbl_Aggregate_TD_14718_output.allocateHost();
    Table tbl_Filter_TD_14419_output("tbl_Filter_TD_14419_output", 6100000, 4, "");
    tbl_Filter_TD_14419_output.allocateHost();
    Table tbl_Aggregate_TD_14402_output("tbl_Aggregate_TD_14402_output", 6100000, 3, "");
    tbl_Aggregate_TD_14402_output.allocateHost();
    Table tbl_Filter_TD_14627_output("tbl_Filter_TD_14627_output", 6100000, 4, "");
    tbl_Filter_TD_14627_output.allocateHost();
    Table tbl_Aggregate_TD_14536_output("tbl_Aggregate_TD_14536_output", 6100000, 3, "");
    tbl_Aggregate_TD_14536_output.allocateHost();
    Table tbl_Filter_TD_14901_output("tbl_Filter_TD_14901_output", 6100000, 4, "");
    tbl_Filter_TD_14901_output.allocateHost();
    Table tbl_Aggregate_TD_14488_output("tbl_Aggregate_TD_14488_output", 6100000, 3, "");
    tbl_Aggregate_TD_14488_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15835_input;
    tbl_SerializeFromObject_TD_15835_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15835_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15835_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15835_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15835_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15835_input.allocateHost();
    tbl_SerializeFromObject_TD_15835_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_15633_output("tbl_JOIN_LEFTSEMI_TD_15633_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_15633_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15765_input;
    tbl_SerializeFromObject_TD_15765_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15765_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15765_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15765_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15765_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15765_input.allocateHost();
    tbl_SerializeFromObject_TD_15765_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_15848_output("tbl_JOIN_LEFTSEMI_TD_15848_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_15848_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1598_input;
    tbl_SerializeFromObject_TD_1598_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1598_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1598_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_1598_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_1598_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_1598_input.allocateHost();
    tbl_SerializeFromObject_TD_1598_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_1512_output("tbl_JOIN_LEFTSEMI_TD_1512_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_1512_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15738_input;
    tbl_SerializeFromObject_TD_15738_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15738_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15738_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15738_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15738_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15738_input.allocateHost();
    tbl_SerializeFromObject_TD_15738_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_15325_output("tbl_JOIN_LEFTSEMI_TD_15325_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_15325_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1547_input;
    tbl_SerializeFromObject_TD_1547_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1547_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1547_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_1547_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_1547_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_1547_input.allocateHost();
    tbl_SerializeFromObject_TD_1547_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_1578_output("tbl_JOIN_LEFTSEMI_TD_1578_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_1578_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15176_input;
    tbl_SerializeFromObject_TD_15176_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15176_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15176_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_15176_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_15176_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_15176_input.allocateHost();
    tbl_SerializeFromObject_TD_15176_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_15617_output("tbl_JOIN_LEFTSEMI_TD_15617_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_15617_output.allocateHost();
    Table tbl_Aggregate_TD_164_output("tbl_Aggregate_TD_164_output", 6100000, 3, "");
    tbl_Aggregate_TD_164_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16625_output("tbl_JOIN_INNER_TD_16625_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16625_output.allocateHost();
    Table tbl_Aggregate_TD_16697_output("tbl_Aggregate_TD_16697_output", 6100000, 3, "");
    tbl_Aggregate_TD_16697_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16574_output("tbl_JOIN_INNER_TD_16574_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16574_output.allocateHost();
    Table tbl_Aggregate_TD_16614_output("tbl_Aggregate_TD_16614_output", 6100000, 3, "");
    tbl_Aggregate_TD_16614_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16874_output("tbl_JOIN_INNER_TD_16874_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16874_output.allocateHost();
    Table tbl_Aggregate_TD_16287_output("tbl_Aggregate_TD_16287_output", 6100000, 3, "");
    tbl_Aggregate_TD_16287_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16338_output("tbl_JOIN_INNER_TD_16338_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16338_output.allocateHost();
    Table tbl_Aggregate_TD_16957_output("tbl_Aggregate_TD_16957_output", 6100000, 3, "");
    tbl_Aggregate_TD_16957_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16736_output("tbl_JOIN_INNER_TD_16736_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16736_output.allocateHost();
    Table tbl_Aggregate_TD_16626_output("tbl_Aggregate_TD_16626_output", 6100000, 3, "");
    tbl_Aggregate_TD_16626_output.allocateHost();
    Table tbl_JOIN_INNER_TD_16332_output("tbl_JOIN_INNER_TD_16332_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_16332_output.allocateHost();
    Table tbl_Project_TD_17766_output("tbl_Project_TD_17766_output", 6100000, 3, "");
    tbl_Project_TD_17766_output.allocateHost();
    Table tbl_JOIN_INNER_TD_17571_output("tbl_JOIN_INNER_TD_17571_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_17571_output.allocateHost();
    Table tbl_Filter_TD_17213_output("tbl_Filter_TD_17213_output", 6100000, 1, "");
    tbl_Filter_TD_17213_output.allocateHost();
    Table tbl_Project_TD_17995_output("tbl_Project_TD_17995_output", 6100000, 3, "");
    tbl_Project_TD_17995_output.allocateHost();
    Table tbl_JOIN_INNER_TD_17921_output("tbl_JOIN_INNER_TD_17921_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_17921_output.allocateHost();
    Table tbl_Filter_TD_17751_output("tbl_Filter_TD_17751_output", 6100000, 1, "");
    tbl_Filter_TD_17751_output.allocateHost();
    Table tbl_Project_TD_17992_output("tbl_Project_TD_17992_output", 6100000, 3, "");
    tbl_Project_TD_17992_output.allocateHost();
    Table tbl_JOIN_INNER_TD_17260_output("tbl_JOIN_INNER_TD_17260_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_17260_output.allocateHost();
    Table tbl_Filter_TD_17632_output("tbl_Filter_TD_17632_output", 6100000, 1, "");
    tbl_Filter_TD_17632_output.allocateHost();
    Table tbl_Project_TD_1763_output("tbl_Project_TD_1763_output", 6100000, 3, "");
    tbl_Project_TD_1763_output.allocateHost();
    Table tbl_JOIN_INNER_TD_17364_output("tbl_JOIN_INNER_TD_17364_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_17364_output.allocateHost();
    Table tbl_Filter_TD_1756_output("tbl_Filter_TD_1756_output", 6100000, 1, "");
    tbl_Filter_TD_1756_output.allocateHost();
    Table tbl_Project_TD_17967_output("tbl_Project_TD_17967_output", 6100000, 3, "");
    tbl_Project_TD_17967_output.allocateHost();
    Table tbl_JOIN_INNER_TD_17337_output("tbl_JOIN_INNER_TD_17337_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_17337_output.allocateHost();
    Table tbl_Filter_TD_17941_output("tbl_Filter_TD_17941_output", 6100000, 1, "");
    tbl_Filter_TD_17941_output.allocateHost();
    Table tbl_Project_TD_17123_output("tbl_Project_TD_17123_output", 6100000, 3, "");
    tbl_Project_TD_17123_output.allocateHost();
    Table tbl_JOIN_INNER_TD_17757_output("tbl_JOIN_INNER_TD_17757_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_17757_output.allocateHost();
    Table tbl_Filter_TD_17529_output("tbl_Filter_TD_17529_output", 6100000, 1, "");
    tbl_Filter_TD_17529_output.allocateHost();
    Table tbl_JOIN_INNER_TD_18539_output("tbl_JOIN_INNER_TD_18539_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18539_output.allocateHost();
    Table tbl_Filter_TD_18170_output("tbl_Filter_TD_18170_output", 6100000, 2, "");
    tbl_Filter_TD_18170_output.allocateHost();
    Table tbl_Filter_TD_18859_output("tbl_Filter_TD_18859_output", 6100000, 4, "");
    tbl_Filter_TD_18859_output.allocateHost();
    Table tbl_SerializeFromObject_TD_183_input;
    tbl_SerializeFromObject_TD_183_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_183_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_183_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_183_input.allocateHost();
    tbl_SerializeFromObject_TD_183_input.loadHost();
    Table tbl_JOIN_INNER_TD_18658_output("tbl_JOIN_INNER_TD_18658_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18658_output.allocateHost();
    Table tbl_Filter_TD_18917_output("tbl_Filter_TD_18917_output", 6100000, 2, "");
    tbl_Filter_TD_18917_output.allocateHost();
    Table tbl_Filter_TD_18934_output("tbl_Filter_TD_18934_output", 6100000, 4, "");
    tbl_Filter_TD_18934_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18200_input;
    tbl_SerializeFromObject_TD_18200_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_18200_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_18200_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_18200_input.allocateHost();
    tbl_SerializeFromObject_TD_18200_input.loadHost();
    Table tbl_JOIN_INNER_TD_1868_output("tbl_JOIN_INNER_TD_1868_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1868_output.allocateHost();
    Table tbl_Filter_TD_18490_output("tbl_Filter_TD_18490_output", 6100000, 2, "");
    tbl_Filter_TD_18490_output.allocateHost();
    Table tbl_Filter_TD_18269_output("tbl_Filter_TD_18269_output", 6100000, 4, "");
    tbl_Filter_TD_18269_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1817_input;
    tbl_SerializeFromObject_TD_1817_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1817_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1817_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1817_input.allocateHost();
    tbl_SerializeFromObject_TD_1817_input.loadHost();
    Table tbl_JOIN_INNER_TD_18462_output("tbl_JOIN_INNER_TD_18462_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18462_output.allocateHost();
    Table tbl_Filter_TD_18640_output("tbl_Filter_TD_18640_output", 6100000, 2, "");
    tbl_Filter_TD_18640_output.allocateHost();
    Table tbl_Filter_TD_18736_output("tbl_Filter_TD_18736_output", 6100000, 4, "");
    tbl_Filter_TD_18736_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1865_input;
    tbl_SerializeFromObject_TD_1865_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1865_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1865_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1865_input.allocateHost();
    tbl_SerializeFromObject_TD_1865_input.loadHost();
    Table tbl_JOIN_INNER_TD_18309_output("tbl_JOIN_INNER_TD_18309_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18309_output.allocateHost();
    Table tbl_Filter_TD_18913_output("tbl_Filter_TD_18913_output", 6100000, 2, "");
    tbl_Filter_TD_18913_output.allocateHost();
    Table tbl_Filter_TD_18615_output("tbl_Filter_TD_18615_output", 6100000, 4, "");
    tbl_Filter_TD_18615_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18382_input;
    tbl_SerializeFromObject_TD_18382_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_18382_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_18382_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_18382_input.allocateHost();
    tbl_SerializeFromObject_TD_18382_input.loadHost();
    Table tbl_JOIN_INNER_TD_18580_output("tbl_JOIN_INNER_TD_18580_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_18580_output.allocateHost();
    Table tbl_Filter_TD_18230_output("tbl_Filter_TD_18230_output", 6100000, 2, "");
    tbl_Filter_TD_18230_output.allocateHost();
    Table tbl_Filter_TD_18650_output("tbl_Filter_TD_18650_output", 6100000, 4, "");
    tbl_Filter_TD_18650_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18445_input;
    tbl_SerializeFromObject_TD_18445_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_18445_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_18445_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_18445_input.allocateHost();
    tbl_SerializeFromObject_TD_18445_input.loadHost();
    Table tbl_JOIN_INNER_TD_19746_output("tbl_JOIN_INNER_TD_19746_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19746_output.allocateHost();
    Table tbl_Filter_TD_19161_output("tbl_Filter_TD_19161_output", 6100000, 1, "");
    tbl_Filter_TD_19161_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19726_input;
    tbl_SerializeFromObject_TD_19726_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19726_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19726_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19726_input.allocateHost();
    tbl_SerializeFromObject_TD_19726_input.loadHost();
    Table tbl_SerializeFromObject_TD_19232_input;
    tbl_SerializeFromObject_TD_19232_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19232_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19232_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19232_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19232_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19232_input.allocateHost();
    tbl_SerializeFromObject_TD_19232_input.loadHost();
    Table tbl_JOIN_INNER_TD_19789_output("tbl_JOIN_INNER_TD_19789_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19789_output.allocateHost();
    Table tbl_Filter_TD_19305_output("tbl_Filter_TD_19305_output", 6100000, 1, "");
    tbl_Filter_TD_19305_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19793_input;
    tbl_SerializeFromObject_TD_19793_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19793_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19793_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19793_input.allocateHost();
    tbl_SerializeFromObject_TD_19793_input.loadHost();
    Table tbl_SerializeFromObject_TD_19652_input;
    tbl_SerializeFromObject_TD_19652_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19652_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19652_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19652_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19652_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19652_input.allocateHost();
    tbl_SerializeFromObject_TD_19652_input.loadHost();
    Table tbl_JOIN_INNER_TD_199_output("tbl_JOIN_INNER_TD_199_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_199_output.allocateHost();
    Table tbl_Filter_TD_19755_output("tbl_Filter_TD_19755_output", 6100000, 1, "");
    tbl_Filter_TD_19755_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19187_input;
    tbl_SerializeFromObject_TD_19187_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19187_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19187_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19187_input.allocateHost();
    tbl_SerializeFromObject_TD_19187_input.loadHost();
    Table tbl_SerializeFromObject_TD_19419_input;
    tbl_SerializeFromObject_TD_19419_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19419_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19419_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19419_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19419_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19419_input.allocateHost();
    tbl_SerializeFromObject_TD_19419_input.loadHost();
    Table tbl_JOIN_INNER_TD_19510_output("tbl_JOIN_INNER_TD_19510_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19510_output.allocateHost();
    Table tbl_Filter_TD_19734_output("tbl_Filter_TD_19734_output", 6100000, 1, "");
    tbl_Filter_TD_19734_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19102_input;
    tbl_SerializeFromObject_TD_19102_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19102_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19102_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19102_input.allocateHost();
    tbl_SerializeFromObject_TD_19102_input.loadHost();
    Table tbl_SerializeFromObject_TD_19762_input;
    tbl_SerializeFromObject_TD_19762_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19762_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19762_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19762_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19762_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19762_input.allocateHost();
    tbl_SerializeFromObject_TD_19762_input.loadHost();
    Table tbl_JOIN_INNER_TD_19987_output("tbl_JOIN_INNER_TD_19987_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19987_output.allocateHost();
    Table tbl_Filter_TD_19593_output("tbl_Filter_TD_19593_output", 6100000, 1, "");
    tbl_Filter_TD_19593_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19891_input;
    tbl_SerializeFromObject_TD_19891_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19891_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19891_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19891_input.allocateHost();
    tbl_SerializeFromObject_TD_19891_input.loadHost();
    Table tbl_SerializeFromObject_TD_19289_input;
    tbl_SerializeFromObject_TD_19289_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19289_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19289_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19289_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19289_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19289_input.allocateHost();
    tbl_SerializeFromObject_TD_19289_input.loadHost();
    Table tbl_JOIN_INNER_TD_19988_output("tbl_JOIN_INNER_TD_19988_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_19988_output.allocateHost();
    Table tbl_Filter_TD_19645_output("tbl_Filter_TD_19645_output", 6100000, 1, "");
    tbl_Filter_TD_19645_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19820_input;
    tbl_SerializeFromObject_TD_19820_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_19820_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_19820_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_19820_input.allocateHost();
    tbl_SerializeFromObject_TD_19820_input.loadHost();
    Table tbl_SerializeFromObject_TD_19964_input;
    tbl_SerializeFromObject_TD_19964_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_19964_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_19964_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_19964_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_19964_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_19964_input.allocateHost();
    tbl_SerializeFromObject_TD_19964_input.loadHost();
    Table tbl_Filter_TD_20859_output("tbl_Filter_TD_20859_output", 6100000, 2, "");
    tbl_Filter_TD_20859_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_20128_output("tbl_JOIN_LEFTSEMI_TD_20128_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_20128_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20126_input;
    tbl_SerializeFromObject_TD_20126_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20126_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20126_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20126_input.allocateHost();
    tbl_SerializeFromObject_TD_20126_input.loadHost();
    Table tbl_Filter_TD_20507_output("tbl_Filter_TD_20507_output", 6100000, 2, "");
    tbl_Filter_TD_20507_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_20292_output("tbl_JOIN_LEFTSEMI_TD_20292_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_20292_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20463_input;
    tbl_SerializeFromObject_TD_20463_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20463_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20463_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20463_input.allocateHost();
    tbl_SerializeFromObject_TD_20463_input.loadHost();
    Table tbl_Filter_TD_20241_output("tbl_Filter_TD_20241_output", 6100000, 2, "");
    tbl_Filter_TD_20241_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_20114_output("tbl_JOIN_LEFTSEMI_TD_20114_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_20114_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2029_input;
    tbl_SerializeFromObject_TD_2029_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_2029_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_2029_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_2029_input.allocateHost();
    tbl_SerializeFromObject_TD_2029_input.loadHost();
    Table tbl_Filter_TD_20155_output("tbl_Filter_TD_20155_output", 6100000, 2, "");
    tbl_Filter_TD_20155_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_20380_output("tbl_JOIN_LEFTSEMI_TD_20380_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_20380_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20230_input;
    tbl_SerializeFromObject_TD_20230_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20230_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20230_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20230_input.allocateHost();
    tbl_SerializeFromObject_TD_20230_input.loadHost();
    Table tbl_Filter_TD_20607_output("tbl_Filter_TD_20607_output", 6100000, 2, "");
    tbl_Filter_TD_20607_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_20478_output("tbl_JOIN_LEFTSEMI_TD_20478_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_20478_output.allocateHost();
    Table tbl_SerializeFromObject_TD_205_input;
    tbl_SerializeFromObject_TD_205_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_205_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_205_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_205_input.allocateHost();
    tbl_SerializeFromObject_TD_205_input.loadHost();
    Table tbl_Filter_TD_2078_output("tbl_Filter_TD_2078_output", 6100000, 2, "");
    tbl_Filter_TD_2078_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_20666_output("tbl_JOIN_LEFTSEMI_TD_20666_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_20666_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20407_input;
    tbl_SerializeFromObject_TD_20407_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20407_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20407_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20407_input.allocateHost();
    tbl_SerializeFromObject_TD_20407_input.loadHost();
    Table tbl_SerializeFromObject_TD_21233_input;
    tbl_SerializeFromObject_TD_21233_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21233_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21233_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21233_input.allocateHost();
    tbl_SerializeFromObject_TD_21233_input.loadHost();
    Table tbl_Filter_TD_21385_output("tbl_Filter_TD_21385_output", 6100000, 4, "");
    tbl_Filter_TD_21385_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2148_output("tbl_JOIN_INNER_TD_2148_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_2148_output.allocateHost();
    Table tbl_SerializeFromObject_TD_21637_input;
    tbl_SerializeFromObject_TD_21637_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21637_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21637_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21637_input.allocateHost();
    tbl_SerializeFromObject_TD_21637_input.loadHost();
    Table tbl_Filter_TD_21569_output("tbl_Filter_TD_21569_output", 6100000, 4, "");
    tbl_Filter_TD_21569_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21649_output("tbl_JOIN_INNER_TD_21649_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21649_output.allocateHost();
    Table tbl_SerializeFromObject_TD_21666_input;
    tbl_SerializeFromObject_TD_21666_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21666_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21666_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21666_input.allocateHost();
    tbl_SerializeFromObject_TD_21666_input.loadHost();
    Table tbl_Filter_TD_21526_output("tbl_Filter_TD_21526_output", 6100000, 4, "");
    tbl_Filter_TD_21526_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21864_output("tbl_JOIN_INNER_TD_21864_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21864_output.allocateHost();
    Table tbl_SerializeFromObject_TD_21438_input;
    tbl_SerializeFromObject_TD_21438_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21438_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21438_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21438_input.allocateHost();
    tbl_SerializeFromObject_TD_21438_input.loadHost();
    Table tbl_Filter_TD_21378_output("tbl_Filter_TD_21378_output", 6100000, 4, "");
    tbl_Filter_TD_21378_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2135_output("tbl_JOIN_INNER_TD_2135_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_2135_output.allocateHost();
    Table tbl_SerializeFromObject_TD_21378_input;
    tbl_SerializeFromObject_TD_21378_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21378_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21378_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21378_input.allocateHost();
    tbl_SerializeFromObject_TD_21378_input.loadHost();
    Table tbl_Filter_TD_21302_output("tbl_Filter_TD_21302_output", 6100000, 4, "");
    tbl_Filter_TD_21302_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21129_output("tbl_JOIN_INNER_TD_21129_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21129_output.allocateHost();
    Table tbl_SerializeFromObject_TD_21976_input;
    tbl_SerializeFromObject_TD_21976_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_21976_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_21976_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_21976_input.allocateHost();
    tbl_SerializeFromObject_TD_21976_input.loadHost();
    Table tbl_Filter_TD_21573_output("tbl_Filter_TD_21573_output", 6100000, 4, "");
    tbl_Filter_TD_21573_output.allocateHost();
    Table tbl_JOIN_INNER_TD_21555_output("tbl_JOIN_INNER_TD_21555_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_21555_output.allocateHost();
    Table tbl_SerializeFromObject_TD_224_input;
    tbl_SerializeFromObject_TD_224_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_224_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_224_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_224_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_224_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_224_input.allocateHost();
    tbl_SerializeFromObject_TD_224_input.loadHost();
    Table tbl_JOIN_INNER_TD_22328_output("tbl_JOIN_INNER_TD_22328_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22328_output.allocateHost();
    Table tbl_Filter_TD_22347_output("tbl_Filter_TD_22347_output", 6100000, 1, "");
    tbl_Filter_TD_22347_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22265_input;
    tbl_SerializeFromObject_TD_22265_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22265_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22265_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22265_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22265_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22265_input.allocateHost();
    tbl_SerializeFromObject_TD_22265_input.loadHost();
    Table tbl_JOIN_INNER_TD_22320_output("tbl_JOIN_INNER_TD_22320_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22320_output.allocateHost();
    Table tbl_Filter_TD_22149_output("tbl_Filter_TD_22149_output", 6100000, 1, "");
    tbl_Filter_TD_22149_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22568_input;
    tbl_SerializeFromObject_TD_22568_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22568_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22568_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22568_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22568_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22568_input.allocateHost();
    tbl_SerializeFromObject_TD_22568_input.loadHost();
    Table tbl_JOIN_INNER_TD_22180_output("tbl_JOIN_INNER_TD_22180_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22180_output.allocateHost();
    Table tbl_Filter_TD_22770_output("tbl_Filter_TD_22770_output", 6100000, 1, "");
    tbl_Filter_TD_22770_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22537_input;
    tbl_SerializeFromObject_TD_22537_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22537_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22537_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22537_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22537_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22537_input.allocateHost();
    tbl_SerializeFromObject_TD_22537_input.loadHost();
    Table tbl_JOIN_INNER_TD_22932_output("tbl_JOIN_INNER_TD_22932_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22932_output.allocateHost();
    Table tbl_Filter_TD_22285_output("tbl_Filter_TD_22285_output", 6100000, 1, "");
    tbl_Filter_TD_22285_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22108_input;
    tbl_SerializeFromObject_TD_22108_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22108_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22108_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22108_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22108_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22108_input.allocateHost();
    tbl_SerializeFromObject_TD_22108_input.loadHost();
    Table tbl_JOIN_INNER_TD_22665_output("tbl_JOIN_INNER_TD_22665_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22665_output.allocateHost();
    Table tbl_Filter_TD_222_output("tbl_Filter_TD_222_output", 6100000, 1, "");
    tbl_Filter_TD_222_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22316_input;
    tbl_SerializeFromObject_TD_22316_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_22316_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_22316_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_22316_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_22316_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_22316_input.allocateHost();
    tbl_SerializeFromObject_TD_22316_input.loadHost();
    Table tbl_JOIN_INNER_TD_22808_output("tbl_JOIN_INNER_TD_22808_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_22808_output.allocateHost();
    Table tbl_Filter_TD_22493_output("tbl_Filter_TD_22493_output", 6100000, 1, "");
    tbl_Filter_TD_22493_output.allocateHost();
    Table tbl_Filter_TD_23657_output("tbl_Filter_TD_23657_output", 6100000, 2, "");
    tbl_Filter_TD_23657_output.allocateHost();
    Table tbl_Filter_TD_23866_output("tbl_Filter_TD_23866_output", 6100000, 4, "");
    tbl_Filter_TD_23866_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2377_input;
    tbl_SerializeFromObject_TD_2377_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_2377_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_2377_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_2377_input.allocateHost();
    tbl_SerializeFromObject_TD_2377_input.loadHost();
    Table tbl_Filter_TD_23757_output("tbl_Filter_TD_23757_output", 6100000, 2, "");
    tbl_Filter_TD_23757_output.allocateHost();
    Table tbl_Filter_TD_239_output("tbl_Filter_TD_239_output", 6100000, 4, "");
    tbl_Filter_TD_239_output.allocateHost();
    Table tbl_SerializeFromObject_TD_23287_input;
    tbl_SerializeFromObject_TD_23287_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_23287_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_23287_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_23287_input.allocateHost();
    tbl_SerializeFromObject_TD_23287_input.loadHost();
    Table tbl_Filter_TD_23206_output("tbl_Filter_TD_23206_output", 6100000, 2, "");
    tbl_Filter_TD_23206_output.allocateHost();
    Table tbl_Filter_TD_23135_output("tbl_Filter_TD_23135_output", 6100000, 4, "");
    tbl_Filter_TD_23135_output.allocateHost();
    Table tbl_SerializeFromObject_TD_23360_input;
    tbl_SerializeFromObject_TD_23360_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_23360_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_23360_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_23360_input.allocateHost();
    tbl_SerializeFromObject_TD_23360_input.loadHost();
    Table tbl_Filter_TD_23503_output("tbl_Filter_TD_23503_output", 6100000, 2, "");
    tbl_Filter_TD_23503_output.allocateHost();
    Table tbl_Filter_TD_23629_output("tbl_Filter_TD_23629_output", 6100000, 4, "");
    tbl_Filter_TD_23629_output.allocateHost();
    Table tbl_SerializeFromObject_TD_23652_input;
    tbl_SerializeFromObject_TD_23652_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_23652_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_23652_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_23652_input.allocateHost();
    tbl_SerializeFromObject_TD_23652_input.loadHost();
    Table tbl_Filter_TD_23247_output("tbl_Filter_TD_23247_output", 6100000, 2, "");
    tbl_Filter_TD_23247_output.allocateHost();
    Table tbl_Filter_TD_23719_output("tbl_Filter_TD_23719_output", 6100000, 4, "");
    tbl_Filter_TD_23719_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2339_input;
    tbl_SerializeFromObject_TD_2339_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_2339_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_2339_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_2339_input.allocateHost();
    tbl_SerializeFromObject_TD_2339_input.loadHost();
    Table tbl_Filter_TD_23647_output("tbl_Filter_TD_23647_output", 6100000, 2, "");
    tbl_Filter_TD_23647_output.allocateHost();
    Table tbl_Filter_TD_23797_output("tbl_Filter_TD_23797_output", 6100000, 4, "");
    tbl_Filter_TD_23797_output.allocateHost();
    Table tbl_SerializeFromObject_TD_23674_input;
    tbl_SerializeFromObject_TD_23674_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_23674_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_23674_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_23674_input.allocateHost();
    tbl_SerializeFromObject_TD_23674_input.loadHost();
    Table tbl_SerializeFromObject_TD_24127_input;
    tbl_SerializeFromObject_TD_24127_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24127_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24127_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24127_input.allocateHost();
    tbl_SerializeFromObject_TD_24127_input.loadHost();
    Table tbl_SerializeFromObject_TD_24922_input;
    tbl_SerializeFromObject_TD_24922_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24922_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24922_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24922_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24922_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24922_input.allocateHost();
    tbl_SerializeFromObject_TD_24922_input.loadHost();
    Table tbl_SerializeFromObject_TD_24801_input;
    tbl_SerializeFromObject_TD_24801_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24801_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24801_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24801_input.allocateHost();
    tbl_SerializeFromObject_TD_24801_input.loadHost();
    Table tbl_SerializeFromObject_TD_24623_input;
    tbl_SerializeFromObject_TD_24623_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24623_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24623_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24623_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24623_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24623_input.allocateHost();
    tbl_SerializeFromObject_TD_24623_input.loadHost();
    Table tbl_SerializeFromObject_TD_24311_input;
    tbl_SerializeFromObject_TD_24311_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24311_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24311_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24311_input.allocateHost();
    tbl_SerializeFromObject_TD_24311_input.loadHost();
    Table tbl_SerializeFromObject_TD_2459_input;
    tbl_SerializeFromObject_TD_2459_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_2459_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_2459_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_2459_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_2459_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_2459_input.allocateHost();
    tbl_SerializeFromObject_TD_2459_input.loadHost();
    Table tbl_SerializeFromObject_TD_24286_input;
    tbl_SerializeFromObject_TD_24286_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24286_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24286_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24286_input.allocateHost();
    tbl_SerializeFromObject_TD_24286_input.loadHost();
    Table tbl_SerializeFromObject_TD_24834_input;
    tbl_SerializeFromObject_TD_24834_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24834_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24834_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24834_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24834_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24834_input.allocateHost();
    tbl_SerializeFromObject_TD_24834_input.loadHost();
    Table tbl_SerializeFromObject_TD_24658_input;
    tbl_SerializeFromObject_TD_24658_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24658_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24658_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24658_input.allocateHost();
    tbl_SerializeFromObject_TD_24658_input.loadHost();
    Table tbl_SerializeFromObject_TD_24745_input;
    tbl_SerializeFromObject_TD_24745_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24745_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24745_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24745_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24745_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24745_input.allocateHost();
    tbl_SerializeFromObject_TD_24745_input.loadHost();
    Table tbl_SerializeFromObject_TD_24320_input;
    tbl_SerializeFromObject_TD_24320_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_24320_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_24320_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24320_input.allocateHost();
    tbl_SerializeFromObject_TD_24320_input.loadHost();
    Table tbl_SerializeFromObject_TD_24844_input;
    tbl_SerializeFromObject_TD_24844_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_24844_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_24844_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_24844_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_24844_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_24844_input.allocateHost();
    tbl_SerializeFromObject_TD_24844_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_23_438670_s, tv_r_Filter_23_438670_e;
    gettimeofday(&tv_r_Filter_23_438670_s, 0);
    SW_Filter_TD_23797(tbl_SerializeFromObject_TD_24844_input, tbl_Filter_TD_23797_output);
    gettimeofday(&tv_r_Filter_23_438670_e, 0);

    struct timeval tv_r_Filter_23_361320_s, tv_r_Filter_23_361320_e;
    gettimeofday(&tv_r_Filter_23_361320_s, 0);
    SW_Filter_TD_23647(tbl_SerializeFromObject_TD_24320_input, tbl_Filter_TD_23647_output);
    gettimeofday(&tv_r_Filter_23_361320_e, 0);

    struct timeval tv_r_Filter_23_369884_s, tv_r_Filter_23_369884_e;
    gettimeofday(&tv_r_Filter_23_369884_s, 0);
    SW_Filter_TD_23719(tbl_SerializeFromObject_TD_24745_input, tbl_Filter_TD_23719_output);
    gettimeofday(&tv_r_Filter_23_369884_e, 0);

    struct timeval tv_r_Filter_23_594700_s, tv_r_Filter_23_594700_e;
    gettimeofday(&tv_r_Filter_23_594700_s, 0);
    SW_Filter_TD_23247(tbl_SerializeFromObject_TD_24658_input, tbl_Filter_TD_23247_output);
    gettimeofday(&tv_r_Filter_23_594700_e, 0);

    struct timeval tv_r_Filter_23_602587_s, tv_r_Filter_23_602587_e;
    gettimeofday(&tv_r_Filter_23_602587_s, 0);
    SW_Filter_TD_23629(tbl_SerializeFromObject_TD_24834_input, tbl_Filter_TD_23629_output);
    gettimeofday(&tv_r_Filter_23_602587_e, 0);

    struct timeval tv_r_Filter_23_484316_s, tv_r_Filter_23_484316_e;
    gettimeofday(&tv_r_Filter_23_484316_s, 0);
    SW_Filter_TD_23503(tbl_SerializeFromObject_TD_24286_input, tbl_Filter_TD_23503_output);
    gettimeofday(&tv_r_Filter_23_484316_e, 0);

    struct timeval tv_r_Filter_23_695942_s, tv_r_Filter_23_695942_e;
    gettimeofday(&tv_r_Filter_23_695942_s, 0);
    SW_Filter_TD_23135(tbl_SerializeFromObject_TD_2459_input, tbl_Filter_TD_23135_output);
    gettimeofday(&tv_r_Filter_23_695942_e, 0);

    struct timeval tv_r_Filter_23_617394_s, tv_r_Filter_23_617394_e;
    gettimeofday(&tv_r_Filter_23_617394_s, 0);
    SW_Filter_TD_23206(tbl_SerializeFromObject_TD_24311_input, tbl_Filter_TD_23206_output);
    gettimeofday(&tv_r_Filter_23_617394_e, 0);

    struct timeval tv_r_Filter_23_205781_s, tv_r_Filter_23_205781_e;
    gettimeofday(&tv_r_Filter_23_205781_s, 0);
    SW_Filter_TD_239(tbl_SerializeFromObject_TD_24623_input, tbl_Filter_TD_239_output);
    gettimeofday(&tv_r_Filter_23_205781_e, 0);

    struct timeval tv_r_Filter_23_425452_s, tv_r_Filter_23_425452_e;
    gettimeofday(&tv_r_Filter_23_425452_s, 0);
    SW_Filter_TD_23757(tbl_SerializeFromObject_TD_24801_input, tbl_Filter_TD_23757_output);
    gettimeofday(&tv_r_Filter_23_425452_e, 0);

    struct timeval tv_r_Filter_23_880342_s, tv_r_Filter_23_880342_e;
    gettimeofday(&tv_r_Filter_23_880342_s, 0);
    SW_Filter_TD_23866(tbl_SerializeFromObject_TD_24922_input, tbl_Filter_TD_23866_output);
    gettimeofday(&tv_r_Filter_23_880342_e, 0);

    struct timeval tv_r_Filter_23_458383_s, tv_r_Filter_23_458383_e;
    gettimeofday(&tv_r_Filter_23_458383_s, 0);
    SW_Filter_TD_23657(tbl_SerializeFromObject_TD_24127_input, tbl_Filter_TD_23657_output);
    gettimeofday(&tv_r_Filter_23_458383_e, 0);

    struct timeval tv_r_Filter_22_593723_s, tv_r_Filter_22_593723_e;
    gettimeofday(&tv_r_Filter_22_593723_s, 0);
    SW_Filter_TD_22493(tbl_SerializeFromObject_TD_23674_input, tbl_Filter_TD_22493_output);
    gettimeofday(&tv_r_Filter_22_593723_e, 0);

    struct timeval tv_r_JOIN_INNER_22_316756_s, tv_r_JOIN_INNER_22_316756_e;
    gettimeofday(&tv_r_JOIN_INNER_22_316756_s, 0);
    SW_JOIN_INNER_TD_22808(tbl_Filter_TD_23647_output, tbl_Filter_TD_23797_output, tbl_JOIN_INNER_TD_22808_output);
    gettimeofday(&tv_r_JOIN_INNER_22_316756_e, 0);

    struct timeval tv_r_Filter_22_104083_s, tv_r_Filter_22_104083_e;
    gettimeofday(&tv_r_Filter_22_104083_s, 0);
    SW_Filter_TD_222(tbl_SerializeFromObject_TD_2339_input, tbl_Filter_TD_222_output);
    gettimeofday(&tv_r_Filter_22_104083_e, 0);

    struct timeval tv_r_JOIN_INNER_22_259172_s, tv_r_JOIN_INNER_22_259172_e;
    gettimeofday(&tv_r_JOIN_INNER_22_259172_s, 0);
    SW_JOIN_INNER_TD_22665(tbl_Filter_TD_23247_output, tbl_Filter_TD_23719_output, tbl_JOIN_INNER_TD_22665_output);
    gettimeofday(&tv_r_JOIN_INNER_22_259172_e, 0);

    struct timeval tv_r_Filter_22_833279_s, tv_r_Filter_22_833279_e;
    gettimeofday(&tv_r_Filter_22_833279_s, 0);
    SW_Filter_TD_22285(tbl_SerializeFromObject_TD_23652_input, tbl_Filter_TD_22285_output);
    gettimeofday(&tv_r_Filter_22_833279_e, 0);

    struct timeval tv_r_JOIN_INNER_22_468582_s, tv_r_JOIN_INNER_22_468582_e;
    gettimeofday(&tv_r_JOIN_INNER_22_468582_s, 0);
    SW_JOIN_INNER_TD_22932(tbl_Filter_TD_23503_output, tbl_Filter_TD_23629_output, tbl_JOIN_INNER_TD_22932_output);
    gettimeofday(&tv_r_JOIN_INNER_22_468582_e, 0);

    struct timeval tv_r_Filter_22_700178_s, tv_r_Filter_22_700178_e;
    gettimeofday(&tv_r_Filter_22_700178_s, 0);
    SW_Filter_TD_22770(tbl_SerializeFromObject_TD_23360_input, tbl_Filter_TD_22770_output);
    gettimeofday(&tv_r_Filter_22_700178_e, 0);

    struct timeval tv_r_JOIN_INNER_22_534948_s, tv_r_JOIN_INNER_22_534948_e;
    gettimeofday(&tv_r_JOIN_INNER_22_534948_s, 0);
    SW_JOIN_INNER_TD_22180(tbl_Filter_TD_23206_output, tbl_Filter_TD_23135_output, tbl_JOIN_INNER_TD_22180_output);
    gettimeofday(&tv_r_JOIN_INNER_22_534948_e, 0);

    struct timeval tv_r_Filter_22_675781_s, tv_r_Filter_22_675781_e;
    gettimeofday(&tv_r_Filter_22_675781_s, 0);
    SW_Filter_TD_22149(tbl_SerializeFromObject_TD_23287_input, tbl_Filter_TD_22149_output);
    gettimeofday(&tv_r_Filter_22_675781_e, 0);

    struct timeval tv_r_JOIN_INNER_22_85608_s, tv_r_JOIN_INNER_22_85608_e;
    gettimeofday(&tv_r_JOIN_INNER_22_85608_s, 0);
    SW_JOIN_INNER_TD_22320(tbl_Filter_TD_23757_output, tbl_Filter_TD_239_output, tbl_JOIN_INNER_TD_22320_output);
    gettimeofday(&tv_r_JOIN_INNER_22_85608_e, 0);

    struct timeval tv_r_Filter_22_425866_s, tv_r_Filter_22_425866_e;
    gettimeofday(&tv_r_Filter_22_425866_s, 0);
    SW_Filter_TD_22347(tbl_SerializeFromObject_TD_2377_input, tbl_Filter_TD_22347_output);
    gettimeofday(&tv_r_Filter_22_425866_e, 0);

    struct timeval tv_r_JOIN_INNER_22_791835_s, tv_r_JOIN_INNER_22_791835_e;
    gettimeofday(&tv_r_JOIN_INNER_22_791835_s, 0);
    SW_JOIN_INNER_TD_22328(tbl_Filter_TD_23657_output, tbl_Filter_TD_23866_output, tbl_JOIN_INNER_TD_22328_output);
    gettimeofday(&tv_r_JOIN_INNER_22_791835_e, 0);

    struct timeval tv_r_JOIN_INNER_21_226889_s, tv_r_JOIN_INNER_21_226889_e;
    gettimeofday(&tv_r_JOIN_INNER_21_226889_s, 0);
    SW_JOIN_INNER_TD_21555(tbl_JOIN_INNER_TD_22808_output, tbl_Filter_TD_22493_output, tbl_JOIN_INNER_TD_21555_output);
    gettimeofday(&tv_r_JOIN_INNER_21_226889_e, 0);

    struct timeval tv_r_Filter_21_789640_s, tv_r_Filter_21_789640_e;
    gettimeofday(&tv_r_Filter_21_789640_s, 0);
    SW_Filter_TD_21573(tbl_SerializeFromObject_TD_22316_input, tbl_Filter_TD_21573_output);
    gettimeofday(&tv_r_Filter_21_789640_e, 0);

    struct timeval tv_r_JOIN_INNER_21_933699_s, tv_r_JOIN_INNER_21_933699_e;
    gettimeofday(&tv_r_JOIN_INNER_21_933699_s, 0);
    SW_JOIN_INNER_TD_21129(tbl_JOIN_INNER_TD_22665_output, tbl_Filter_TD_222_output, tbl_JOIN_INNER_TD_21129_output);
    gettimeofday(&tv_r_JOIN_INNER_21_933699_e, 0);

    struct timeval tv_r_Filter_21_831291_s, tv_r_Filter_21_831291_e;
    gettimeofday(&tv_r_Filter_21_831291_s, 0);
    SW_Filter_TD_21302(tbl_SerializeFromObject_TD_22108_input, tbl_Filter_TD_21302_output);
    gettimeofday(&tv_r_Filter_21_831291_e, 0);

    struct timeval tv_r_JOIN_INNER_21_441503_s, tv_r_JOIN_INNER_21_441503_e;
    gettimeofday(&tv_r_JOIN_INNER_21_441503_s, 0);
    SW_JOIN_INNER_TD_2135(tbl_JOIN_INNER_TD_22932_output, tbl_Filter_TD_22285_output, tbl_JOIN_INNER_TD_2135_output);
    gettimeofday(&tv_r_JOIN_INNER_21_441503_e, 0);

    struct timeval tv_r_Filter_21_716476_s, tv_r_Filter_21_716476_e;
    gettimeofday(&tv_r_Filter_21_716476_s, 0);
    SW_Filter_TD_21378(tbl_SerializeFromObject_TD_22537_input, tbl_Filter_TD_21378_output);
    gettimeofday(&tv_r_Filter_21_716476_e, 0);

    struct timeval tv_r_JOIN_INNER_21_275437_s, tv_r_JOIN_INNER_21_275437_e;
    gettimeofday(&tv_r_JOIN_INNER_21_275437_s, 0);
    SW_JOIN_INNER_TD_21864(tbl_JOIN_INNER_TD_22180_output, tbl_Filter_TD_22770_output, tbl_JOIN_INNER_TD_21864_output);
    gettimeofday(&tv_r_JOIN_INNER_21_275437_e, 0);

    struct timeval tv_r_Filter_21_8389_s, tv_r_Filter_21_8389_e;
    gettimeofday(&tv_r_Filter_21_8389_s, 0);
    SW_Filter_TD_21526(tbl_SerializeFromObject_TD_22568_input, tbl_Filter_TD_21526_output);
    gettimeofday(&tv_r_Filter_21_8389_e, 0);

    struct timeval tv_r_JOIN_INNER_21_271958_s, tv_r_JOIN_INNER_21_271958_e;
    gettimeofday(&tv_r_JOIN_INNER_21_271958_s, 0);
    SW_JOIN_INNER_TD_21649(tbl_JOIN_INNER_TD_22320_output, tbl_Filter_TD_22149_output, tbl_JOIN_INNER_TD_21649_output);
    gettimeofday(&tv_r_JOIN_INNER_21_271958_e, 0);

    struct timeval tv_r_Filter_21_246138_s, tv_r_Filter_21_246138_e;
    gettimeofday(&tv_r_Filter_21_246138_s, 0);
    SW_Filter_TD_21569(tbl_SerializeFromObject_TD_22265_input, tbl_Filter_TD_21569_output);
    gettimeofday(&tv_r_Filter_21_246138_e, 0);

    struct timeval tv_r_JOIN_INNER_21_794573_s, tv_r_JOIN_INNER_21_794573_e;
    gettimeofday(&tv_r_JOIN_INNER_21_794573_s, 0);
    SW_JOIN_INNER_TD_2148(tbl_JOIN_INNER_TD_22328_output, tbl_Filter_TD_22347_output, tbl_JOIN_INNER_TD_2148_output);
    gettimeofday(&tv_r_JOIN_INNER_21_794573_e, 0);

    struct timeval tv_r_Filter_21_671697_s, tv_r_Filter_21_671697_e;
    gettimeofday(&tv_r_Filter_21_671697_s, 0);
    SW_Filter_TD_21385(tbl_SerializeFromObject_TD_224_input, tbl_Filter_TD_21385_output);
    gettimeofday(&tv_r_Filter_21_671697_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_382390_s, tv_r_JOIN_LEFTSEMI_20_382390_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_382390_s, 0);
    SW_JOIN_LEFTSEMI_TD_20666(tbl_Filter_TD_21573_output, tbl_JOIN_INNER_TD_21555_output, tbl_JOIN_LEFTSEMI_TD_20666_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_382390_e, 0);

    struct timeval tv_r_Filter_20_864721_s, tv_r_Filter_20_864721_e;
    gettimeofday(&tv_r_Filter_20_864721_s, 0);
    SW_Filter_TD_2078(tbl_SerializeFromObject_TD_21976_input, tbl_Filter_TD_2078_output);
    gettimeofday(&tv_r_Filter_20_864721_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_300882_s, tv_r_JOIN_LEFTSEMI_20_300882_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_300882_s, 0);
    SW_JOIN_LEFTSEMI_TD_20478(tbl_Filter_TD_21302_output, tbl_JOIN_INNER_TD_21129_output, tbl_JOIN_LEFTSEMI_TD_20478_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_300882_e, 0);

    struct timeval tv_r_Filter_20_862138_s, tv_r_Filter_20_862138_e;
    gettimeofday(&tv_r_Filter_20_862138_s, 0);
    SW_Filter_TD_20607(tbl_SerializeFromObject_TD_21378_input, tbl_Filter_TD_20607_output);
    gettimeofday(&tv_r_Filter_20_862138_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_221161_s, tv_r_JOIN_LEFTSEMI_20_221161_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_221161_s, 0);
    SW_JOIN_LEFTSEMI_TD_20380(tbl_Filter_TD_21378_output, tbl_JOIN_INNER_TD_2135_output, tbl_JOIN_LEFTSEMI_TD_20380_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_221161_e, 0);

    struct timeval tv_r_Filter_20_729699_s, tv_r_Filter_20_729699_e;
    gettimeofday(&tv_r_Filter_20_729699_s, 0);
    SW_Filter_TD_20155(tbl_SerializeFromObject_TD_21438_input, tbl_Filter_TD_20155_output);
    gettimeofday(&tv_r_Filter_20_729699_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_824006_s, tv_r_JOIN_LEFTSEMI_20_824006_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_824006_s, 0);
    SW_JOIN_LEFTSEMI_TD_20114(tbl_Filter_TD_21526_output, tbl_JOIN_INNER_TD_21864_output, tbl_JOIN_LEFTSEMI_TD_20114_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_824006_e, 0);

    struct timeval tv_r_Filter_20_916968_s, tv_r_Filter_20_916968_e;
    gettimeofday(&tv_r_Filter_20_916968_s, 0);
    SW_Filter_TD_20241(tbl_SerializeFromObject_TD_21666_input, tbl_Filter_TD_20241_output);
    gettimeofday(&tv_r_Filter_20_916968_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_12790_s, tv_r_JOIN_LEFTSEMI_20_12790_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_12790_s, 0);
    SW_JOIN_LEFTSEMI_TD_20292(tbl_Filter_TD_21569_output, tbl_JOIN_INNER_TD_21649_output, tbl_JOIN_LEFTSEMI_TD_20292_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_12790_e, 0);

    struct timeval tv_r_Filter_20_742015_s, tv_r_Filter_20_742015_e;
    gettimeofday(&tv_r_Filter_20_742015_s, 0);
    SW_Filter_TD_20507(tbl_SerializeFromObject_TD_21637_input, tbl_Filter_TD_20507_output);
    gettimeofday(&tv_r_Filter_20_742015_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_20_131232_s, tv_r_JOIN_LEFTSEMI_20_131232_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_131232_s, 0);
    SW_JOIN_LEFTSEMI_TD_20128(tbl_Filter_TD_21385_output, tbl_JOIN_INNER_TD_2148_output, tbl_JOIN_LEFTSEMI_TD_20128_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_20_131232_e, 0);

    struct timeval tv_r_Filter_20_26619_s, tv_r_Filter_20_26619_e;
    gettimeofday(&tv_r_Filter_20_26619_s, 0);
    SW_Filter_TD_20859(tbl_SerializeFromObject_TD_21233_input, tbl_Filter_TD_20859_output);
    gettimeofday(&tv_r_Filter_20_26619_e, 0);

    struct timeval tv_r_Filter_19_794856_s, tv_r_Filter_19_794856_e;
    gettimeofday(&tv_r_Filter_19_794856_s, 0);
    SW_Filter_TD_19645(tbl_SerializeFromObject_TD_20407_input, tbl_Filter_TD_19645_output);
    gettimeofday(&tv_r_Filter_19_794856_e, 0);

    struct timeval tv_r_JOIN_INNER_19_491039_s, tv_r_JOIN_INNER_19_491039_e;
    gettimeofday(&tv_r_JOIN_INNER_19_491039_s, 0);
    SW_JOIN_INNER_TD_19988(tbl_Filter_TD_2078_output, tbl_JOIN_LEFTSEMI_TD_20666_output, tbl_JOIN_INNER_TD_19988_output);
    gettimeofday(&tv_r_JOIN_INNER_19_491039_e, 0);

    struct timeval tv_r_Filter_19_796726_s, tv_r_Filter_19_796726_e;
    gettimeofday(&tv_r_Filter_19_796726_s, 0);
    SW_Filter_TD_19593(tbl_SerializeFromObject_TD_205_input, tbl_Filter_TD_19593_output);
    gettimeofday(&tv_r_Filter_19_796726_e, 0);

    struct timeval tv_r_JOIN_INNER_19_132880_s, tv_r_JOIN_INNER_19_132880_e;
    gettimeofday(&tv_r_JOIN_INNER_19_132880_s, 0);
    SW_JOIN_INNER_TD_19987(tbl_Filter_TD_20607_output, tbl_JOIN_LEFTSEMI_TD_20478_output, tbl_JOIN_INNER_TD_19987_output);
    gettimeofday(&tv_r_JOIN_INNER_19_132880_e, 0);

    struct timeval tv_r_Filter_19_780813_s, tv_r_Filter_19_780813_e;
    gettimeofday(&tv_r_Filter_19_780813_s, 0);
    SW_Filter_TD_19734(tbl_SerializeFromObject_TD_20230_input, tbl_Filter_TD_19734_output);
    gettimeofday(&tv_r_Filter_19_780813_e, 0);

    struct timeval tv_r_JOIN_INNER_19_243387_s, tv_r_JOIN_INNER_19_243387_e;
    gettimeofday(&tv_r_JOIN_INNER_19_243387_s, 0);
    SW_JOIN_INNER_TD_19510(tbl_Filter_TD_20155_output, tbl_JOIN_LEFTSEMI_TD_20380_output, tbl_JOIN_INNER_TD_19510_output);
    gettimeofday(&tv_r_JOIN_INNER_19_243387_e, 0);

    struct timeval tv_r_Filter_19_542735_s, tv_r_Filter_19_542735_e;
    gettimeofday(&tv_r_Filter_19_542735_s, 0);
    SW_Filter_TD_19755(tbl_SerializeFromObject_TD_2029_input, tbl_Filter_TD_19755_output);
    gettimeofday(&tv_r_Filter_19_542735_e, 0);

    struct timeval tv_r_JOIN_INNER_19_150644_s, tv_r_JOIN_INNER_19_150644_e;
    gettimeofday(&tv_r_JOIN_INNER_19_150644_s, 0);
    SW_JOIN_INNER_TD_199(tbl_Filter_TD_20241_output, tbl_JOIN_LEFTSEMI_TD_20114_output, tbl_JOIN_INNER_TD_199_output);
    gettimeofday(&tv_r_JOIN_INNER_19_150644_e, 0);

    struct timeval tv_r_Filter_19_955226_s, tv_r_Filter_19_955226_e;
    gettimeofday(&tv_r_Filter_19_955226_s, 0);
    SW_Filter_TD_19305(tbl_SerializeFromObject_TD_20463_input, tbl_Filter_TD_19305_output);
    gettimeofday(&tv_r_Filter_19_955226_e, 0);

    struct timeval tv_r_JOIN_INNER_19_730631_s, tv_r_JOIN_INNER_19_730631_e;
    gettimeofday(&tv_r_JOIN_INNER_19_730631_s, 0);
    SW_JOIN_INNER_TD_19789(tbl_Filter_TD_20507_output, tbl_JOIN_LEFTSEMI_TD_20292_output, tbl_JOIN_INNER_TD_19789_output);
    gettimeofday(&tv_r_JOIN_INNER_19_730631_e, 0);

    struct timeval tv_r_Filter_19_976343_s, tv_r_Filter_19_976343_e;
    gettimeofday(&tv_r_Filter_19_976343_s, 0);
    SW_Filter_TD_19161(tbl_SerializeFromObject_TD_20126_input, tbl_Filter_TD_19161_output);
    gettimeofday(&tv_r_Filter_19_976343_e, 0);

    struct timeval tv_r_JOIN_INNER_19_629411_s, tv_r_JOIN_INNER_19_629411_e;
    gettimeofday(&tv_r_JOIN_INNER_19_629411_s, 0);
    SW_JOIN_INNER_TD_19746(tbl_Filter_TD_20859_output, tbl_JOIN_LEFTSEMI_TD_20128_output, tbl_JOIN_INNER_TD_19746_output);
    gettimeofday(&tv_r_JOIN_INNER_19_629411_e, 0);

    struct timeval tv_r_Filter_18_682028_s, tv_r_Filter_18_682028_e;
    gettimeofday(&tv_r_Filter_18_682028_s, 0);
    SW_Filter_TD_18650(tbl_SerializeFromObject_TD_19964_input, tbl_Filter_TD_18650_output);
    gettimeofday(&tv_r_Filter_18_682028_e, 0);

    struct timeval tv_r_Filter_18_617360_s, tv_r_Filter_18_617360_e;
    gettimeofday(&tv_r_Filter_18_617360_s, 0);
    SW_Filter_TD_18230(tbl_SerializeFromObject_TD_19820_input, tbl_Filter_TD_18230_output);
    gettimeofday(&tv_r_Filter_18_617360_e, 0);

    struct timeval tv_r_JOIN_INNER_18_731692_s, tv_r_JOIN_INNER_18_731692_e;
    gettimeofday(&tv_r_JOIN_INNER_18_731692_s, 0);
    SW_JOIN_INNER_TD_18580(tbl_JOIN_INNER_TD_19988_output, tbl_Filter_TD_19645_output, tbl_JOIN_INNER_TD_18580_output);
    gettimeofday(&tv_r_JOIN_INNER_18_731692_e, 0);

    struct timeval tv_r_Filter_18_324475_s, tv_r_Filter_18_324475_e;
    gettimeofday(&tv_r_Filter_18_324475_s, 0);
    SW_Filter_TD_18615(tbl_SerializeFromObject_TD_19289_input, tbl_Filter_TD_18615_output);
    gettimeofday(&tv_r_Filter_18_324475_e, 0);

    struct timeval tv_r_Filter_18_140777_s, tv_r_Filter_18_140777_e;
    gettimeofday(&tv_r_Filter_18_140777_s, 0);
    SW_Filter_TD_18913(tbl_SerializeFromObject_TD_19891_input, tbl_Filter_TD_18913_output);
    gettimeofday(&tv_r_Filter_18_140777_e, 0);

    struct timeval tv_r_JOIN_INNER_18_721774_s, tv_r_JOIN_INNER_18_721774_e;
    gettimeofday(&tv_r_JOIN_INNER_18_721774_s, 0);
    SW_JOIN_INNER_TD_18309(tbl_JOIN_INNER_TD_19987_output, tbl_Filter_TD_19593_output, tbl_JOIN_INNER_TD_18309_output);
    gettimeofday(&tv_r_JOIN_INNER_18_721774_e, 0);

    struct timeval tv_r_Filter_18_124949_s, tv_r_Filter_18_124949_e;
    gettimeofday(&tv_r_Filter_18_124949_s, 0);
    SW_Filter_TD_18736(tbl_SerializeFromObject_TD_19762_input, tbl_Filter_TD_18736_output);
    gettimeofday(&tv_r_Filter_18_124949_e, 0);

    struct timeval tv_r_Filter_18_686722_s, tv_r_Filter_18_686722_e;
    gettimeofday(&tv_r_Filter_18_686722_s, 0);
    SW_Filter_TD_18640(tbl_SerializeFromObject_TD_19102_input, tbl_Filter_TD_18640_output);
    gettimeofday(&tv_r_Filter_18_686722_e, 0);

    struct timeval tv_r_JOIN_INNER_18_780549_s, tv_r_JOIN_INNER_18_780549_e;
    gettimeofday(&tv_r_JOIN_INNER_18_780549_s, 0);
    SW_JOIN_INNER_TD_18462(tbl_JOIN_INNER_TD_19510_output, tbl_Filter_TD_19734_output, tbl_JOIN_INNER_TD_18462_output);
    gettimeofday(&tv_r_JOIN_INNER_18_780549_e, 0);

    struct timeval tv_r_Filter_18_317415_s, tv_r_Filter_18_317415_e;
    gettimeofday(&tv_r_Filter_18_317415_s, 0);
    SW_Filter_TD_18269(tbl_SerializeFromObject_TD_19419_input, tbl_Filter_TD_18269_output);
    gettimeofday(&tv_r_Filter_18_317415_e, 0);

    struct timeval tv_r_Filter_18_488210_s, tv_r_Filter_18_488210_e;
    gettimeofday(&tv_r_Filter_18_488210_s, 0);
    SW_Filter_TD_18490(tbl_SerializeFromObject_TD_19187_input, tbl_Filter_TD_18490_output);
    gettimeofday(&tv_r_Filter_18_488210_e, 0);

    struct timeval tv_r_JOIN_INNER_18_706640_s, tv_r_JOIN_INNER_18_706640_e;
    gettimeofday(&tv_r_JOIN_INNER_18_706640_s, 0);
    SW_JOIN_INNER_TD_1868(tbl_JOIN_INNER_TD_199_output, tbl_Filter_TD_19755_output, tbl_JOIN_INNER_TD_1868_output);
    gettimeofday(&tv_r_JOIN_INNER_18_706640_e, 0);

    struct timeval tv_r_Filter_18_10785_s, tv_r_Filter_18_10785_e;
    gettimeofday(&tv_r_Filter_18_10785_s, 0);
    SW_Filter_TD_18934(tbl_SerializeFromObject_TD_19652_input, tbl_Filter_TD_18934_output);
    gettimeofday(&tv_r_Filter_18_10785_e, 0);

    struct timeval tv_r_Filter_18_888417_s, tv_r_Filter_18_888417_e;
    gettimeofday(&tv_r_Filter_18_888417_s, 0);
    SW_Filter_TD_18917(tbl_SerializeFromObject_TD_19793_input, tbl_Filter_TD_18917_output);
    gettimeofday(&tv_r_Filter_18_888417_e, 0);

    struct timeval tv_r_JOIN_INNER_18_999118_s, tv_r_JOIN_INNER_18_999118_e;
    gettimeofday(&tv_r_JOIN_INNER_18_999118_s, 0);
    SW_JOIN_INNER_TD_18658(tbl_JOIN_INNER_TD_19789_output, tbl_Filter_TD_19305_output, tbl_JOIN_INNER_TD_18658_output);
    gettimeofday(&tv_r_JOIN_INNER_18_999118_e, 0);

    struct timeval tv_r_Filter_18_176283_s, tv_r_Filter_18_176283_e;
    gettimeofday(&tv_r_Filter_18_176283_s, 0);
    SW_Filter_TD_18859(tbl_SerializeFromObject_TD_19232_input, tbl_Filter_TD_18859_output);
    gettimeofday(&tv_r_Filter_18_176283_e, 0);

    struct timeval tv_r_Filter_18_656141_s, tv_r_Filter_18_656141_e;
    gettimeofday(&tv_r_Filter_18_656141_s, 0);
    SW_Filter_TD_18170(tbl_SerializeFromObject_TD_19726_input, tbl_Filter_TD_18170_output);
    gettimeofday(&tv_r_Filter_18_656141_e, 0);

    struct timeval tv_r_JOIN_INNER_18_833025_s, tv_r_JOIN_INNER_18_833025_e;
    gettimeofday(&tv_r_JOIN_INNER_18_833025_s, 0);
    SW_JOIN_INNER_TD_18539(tbl_JOIN_INNER_TD_19746_output, tbl_Filter_TD_19161_output, tbl_JOIN_INNER_TD_18539_output);
    gettimeofday(&tv_r_JOIN_INNER_18_833025_e, 0);

    struct timeval tv_r_Filter_17_434033_s, tv_r_Filter_17_434033_e;
    gettimeofday(&tv_r_Filter_17_434033_s, 0);
    SW_Filter_TD_17529(tbl_SerializeFromObject_TD_18445_input, tbl_Filter_TD_17529_output);
    gettimeofday(&tv_r_Filter_17_434033_e, 0);

    struct timeval tv_r_JOIN_INNER_17_508957_s, tv_r_JOIN_INNER_17_508957_e;
    gettimeofday(&tv_r_JOIN_INNER_17_508957_s, 0);
    SW_JOIN_INNER_TD_17757(tbl_Filter_TD_18230_output, tbl_Filter_TD_18650_output, tbl_JOIN_INNER_TD_17757_output);
    gettimeofday(&tv_r_JOIN_INNER_17_508957_e, 0);

    struct timeval tv_r_Project_17_410350_s, tv_r_Project_17_410350_e;
    gettimeofday(&tv_r_Project_17_410350_s, 0);
    SW_Project_TD_17123(tbl_JOIN_INNER_TD_18580_output, tbl_Project_TD_17123_output);
    gettimeofday(&tv_r_Project_17_410350_e, 0);

    struct timeval tv_r_Filter_17_271588_s, tv_r_Filter_17_271588_e;
    gettimeofday(&tv_r_Filter_17_271588_s, 0);
    SW_Filter_TD_17941(tbl_SerializeFromObject_TD_18382_input, tbl_Filter_TD_17941_output);
    gettimeofday(&tv_r_Filter_17_271588_e, 0);

    struct timeval tv_r_JOIN_INNER_17_417938_s, tv_r_JOIN_INNER_17_417938_e;
    gettimeofday(&tv_r_JOIN_INNER_17_417938_s, 0);
    SW_JOIN_INNER_TD_17337(tbl_Filter_TD_18913_output, tbl_Filter_TD_18615_output, tbl_JOIN_INNER_TD_17337_output);
    gettimeofday(&tv_r_JOIN_INNER_17_417938_e, 0);

    struct timeval tv_r_Project_17_370212_s, tv_r_Project_17_370212_e;
    gettimeofday(&tv_r_Project_17_370212_s, 0);
    SW_Project_TD_17967(tbl_JOIN_INNER_TD_18309_output, tbl_Project_TD_17967_output);
    gettimeofday(&tv_r_Project_17_370212_e, 0);

    struct timeval tv_r_Filter_17_364283_s, tv_r_Filter_17_364283_e;
    gettimeofday(&tv_r_Filter_17_364283_s, 0);
    SW_Filter_TD_1756(tbl_SerializeFromObject_TD_1865_input, tbl_Filter_TD_1756_output);
    gettimeofday(&tv_r_Filter_17_364283_e, 0);

    struct timeval tv_r_JOIN_INNER_17_873976_s, tv_r_JOIN_INNER_17_873976_e;
    gettimeofday(&tv_r_JOIN_INNER_17_873976_s, 0);
    SW_JOIN_INNER_TD_17364(tbl_Filter_TD_18640_output, tbl_Filter_TD_18736_output, tbl_JOIN_INNER_TD_17364_output);
    gettimeofday(&tv_r_JOIN_INNER_17_873976_e, 0);

    struct timeval tv_r_Project_17_997898_s, tv_r_Project_17_997898_e;
    gettimeofday(&tv_r_Project_17_997898_s, 0);
    SW_Project_TD_1763(tbl_JOIN_INNER_TD_18462_output, tbl_Project_TD_1763_output);
    gettimeofday(&tv_r_Project_17_997898_e, 0);

    struct timeval tv_r_Filter_17_271094_s, tv_r_Filter_17_271094_e;
    gettimeofday(&tv_r_Filter_17_271094_s, 0);
    SW_Filter_TD_17632(tbl_SerializeFromObject_TD_1817_input, tbl_Filter_TD_17632_output);
    gettimeofday(&tv_r_Filter_17_271094_e, 0);

    struct timeval tv_r_JOIN_INNER_17_449697_s, tv_r_JOIN_INNER_17_449697_e;
    gettimeofday(&tv_r_JOIN_INNER_17_449697_s, 0);
    SW_JOIN_INNER_TD_17260(tbl_Filter_TD_18490_output, tbl_Filter_TD_18269_output, tbl_JOIN_INNER_TD_17260_output);
    gettimeofday(&tv_r_JOIN_INNER_17_449697_e, 0);

    struct timeval tv_r_Project_17_768185_s, tv_r_Project_17_768185_e;
    gettimeofday(&tv_r_Project_17_768185_s, 0);
    SW_Project_TD_17992(tbl_JOIN_INNER_TD_1868_output, tbl_Project_TD_17992_output);
    gettimeofday(&tv_r_Project_17_768185_e, 0);

    struct timeval tv_r_Filter_17_683427_s, tv_r_Filter_17_683427_e;
    gettimeofday(&tv_r_Filter_17_683427_s, 0);
    SW_Filter_TD_17751(tbl_SerializeFromObject_TD_18200_input, tbl_Filter_TD_17751_output);
    gettimeofday(&tv_r_Filter_17_683427_e, 0);

    struct timeval tv_r_JOIN_INNER_17_160478_s, tv_r_JOIN_INNER_17_160478_e;
    gettimeofday(&tv_r_JOIN_INNER_17_160478_s, 0);
    SW_JOIN_INNER_TD_17921(tbl_Filter_TD_18917_output, tbl_Filter_TD_18934_output, tbl_JOIN_INNER_TD_17921_output);
    gettimeofday(&tv_r_JOIN_INNER_17_160478_e, 0);

    struct timeval tv_r_Project_17_400519_s, tv_r_Project_17_400519_e;
    gettimeofday(&tv_r_Project_17_400519_s, 0);
    SW_Project_TD_17995(tbl_JOIN_INNER_TD_18658_output, tbl_Project_TD_17995_output);
    gettimeofday(&tv_r_Project_17_400519_e, 0);

    struct timeval tv_r_Filter_17_897028_s, tv_r_Filter_17_897028_e;
    gettimeofday(&tv_r_Filter_17_897028_s, 0);
    SW_Filter_TD_17213(tbl_SerializeFromObject_TD_183_input, tbl_Filter_TD_17213_output);
    gettimeofday(&tv_r_Filter_17_897028_e, 0);

    struct timeval tv_r_JOIN_INNER_17_9776_s, tv_r_JOIN_INNER_17_9776_e;
    gettimeofday(&tv_r_JOIN_INNER_17_9776_s, 0);
    SW_JOIN_INNER_TD_17571(tbl_Filter_TD_18170_output, tbl_Filter_TD_18859_output, tbl_JOIN_INNER_TD_17571_output);
    gettimeofday(&tv_r_JOIN_INNER_17_9776_e, 0);

    struct timeval tv_r_Project_17_55895_s, tv_r_Project_17_55895_e;
    gettimeofday(&tv_r_Project_17_55895_s, 0);
    SW_Project_TD_17766(tbl_JOIN_INNER_TD_18539_output, tbl_Project_TD_17766_output);
    gettimeofday(&tv_r_Project_17_55895_e, 0);

    struct timeval tv_r_JOIN_INNER_16_88044_s, tv_r_JOIN_INNER_16_88044_e;
    gettimeofday(&tv_r_JOIN_INNER_16_88044_s, 0);
    SW_JOIN_INNER_TD_16332(tbl_JOIN_INNER_TD_17757_output, tbl_Filter_TD_17529_output, tbl_JOIN_INNER_TD_16332_output);
    gettimeofday(&tv_r_JOIN_INNER_16_88044_e, 0);

    struct timeval tv_r_Aggregate_16_200857_s, tv_r_Aggregate_16_200857_e;
    gettimeofday(&tv_r_Aggregate_16_200857_s, 0);
    SW_Aggregate_TD_16626(tbl_Project_TD_17123_output, tbl_Aggregate_TD_16626_output);
    gettimeofday(&tv_r_Aggregate_16_200857_e, 0);

    struct timeval tv_r_JOIN_INNER_16_587894_s, tv_r_JOIN_INNER_16_587894_e;
    gettimeofday(&tv_r_JOIN_INNER_16_587894_s, 0);
    SW_JOIN_INNER_TD_16736(tbl_JOIN_INNER_TD_17337_output, tbl_Filter_TD_17941_output, tbl_JOIN_INNER_TD_16736_output);
    gettimeofday(&tv_r_JOIN_INNER_16_587894_e, 0);

    struct timeval tv_r_Aggregate_16_429780_s, tv_r_Aggregate_16_429780_e;
    gettimeofday(&tv_r_Aggregate_16_429780_s, 0);
    SW_Aggregate_TD_16957(tbl_Project_TD_17967_output, tbl_Aggregate_TD_16957_output);
    gettimeofday(&tv_r_Aggregate_16_429780_e, 0);

    struct timeval tv_r_JOIN_INNER_16_335467_s, tv_r_JOIN_INNER_16_335467_e;
    gettimeofday(&tv_r_JOIN_INNER_16_335467_s, 0);
    SW_JOIN_INNER_TD_16338(tbl_JOIN_INNER_TD_17364_output, tbl_Filter_TD_1756_output, tbl_JOIN_INNER_TD_16338_output);
    gettimeofday(&tv_r_JOIN_INNER_16_335467_e, 0);

    struct timeval tv_r_Aggregate_16_65138_s, tv_r_Aggregate_16_65138_e;
    gettimeofday(&tv_r_Aggregate_16_65138_s, 0);
    SW_Aggregate_TD_16287(tbl_Project_TD_1763_output, tbl_Aggregate_TD_16287_output);
    gettimeofday(&tv_r_Aggregate_16_65138_e, 0);

    struct timeval tv_r_JOIN_INNER_16_156744_s, tv_r_JOIN_INNER_16_156744_e;
    gettimeofday(&tv_r_JOIN_INNER_16_156744_s, 0);
    SW_JOIN_INNER_TD_16874(tbl_JOIN_INNER_TD_17260_output, tbl_Filter_TD_17632_output, tbl_JOIN_INNER_TD_16874_output);
    gettimeofday(&tv_r_JOIN_INNER_16_156744_e, 0);

    struct timeval tv_r_Aggregate_16_630122_s, tv_r_Aggregate_16_630122_e;
    gettimeofday(&tv_r_Aggregate_16_630122_s, 0);
    SW_Aggregate_TD_16614(tbl_Project_TD_17992_output, tbl_Aggregate_TD_16614_output);
    gettimeofday(&tv_r_Aggregate_16_630122_e, 0);

    struct timeval tv_r_JOIN_INNER_16_722209_s, tv_r_JOIN_INNER_16_722209_e;
    gettimeofday(&tv_r_JOIN_INNER_16_722209_s, 0);
    SW_JOIN_INNER_TD_16574(tbl_JOIN_INNER_TD_17921_output, tbl_Filter_TD_17751_output, tbl_JOIN_INNER_TD_16574_output);
    gettimeofday(&tv_r_JOIN_INNER_16_722209_e, 0);

    struct timeval tv_r_Aggregate_16_781050_s, tv_r_Aggregate_16_781050_e;
    gettimeofday(&tv_r_Aggregate_16_781050_s, 0);
    SW_Aggregate_TD_16697(tbl_Project_TD_17995_output, tbl_Aggregate_TD_16697_output);
    gettimeofday(&tv_r_Aggregate_16_781050_e, 0);

    struct timeval tv_r_JOIN_INNER_16_279152_s, tv_r_JOIN_INNER_16_279152_e;
    gettimeofday(&tv_r_JOIN_INNER_16_279152_s, 0);
    SW_JOIN_INNER_TD_16625(tbl_JOIN_INNER_TD_17571_output, tbl_Filter_TD_17213_output, tbl_JOIN_INNER_TD_16625_output);
    gettimeofday(&tv_r_JOIN_INNER_16_279152_e, 0);

    struct timeval tv_r_Aggregate_16_790043_s, tv_r_Aggregate_16_790043_e;
    gettimeofday(&tv_r_Aggregate_16_790043_s, 0);
    SW_Aggregate_TD_164(tbl_Project_TD_17766_output, tbl_Aggregate_TD_164_output);
    gettimeofday(&tv_r_Aggregate_16_790043_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_709285_s, tv_r_JOIN_LEFTSEMI_15_709285_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_709285_s, 0);
    SW_JOIN_LEFTSEMI_TD_15617(tbl_Aggregate_TD_16626_output, tbl_JOIN_INNER_TD_16332_output, tbl_JOIN_LEFTSEMI_TD_15617_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_709285_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_505836_s, tv_r_JOIN_LEFTSEMI_15_505836_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_505836_s, 0);
    SW_JOIN_LEFTSEMI_TD_1578(tbl_Aggregate_TD_16957_output, tbl_JOIN_INNER_TD_16736_output, tbl_JOIN_LEFTSEMI_TD_1578_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_505836_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_204681_s, tv_r_JOIN_LEFTSEMI_15_204681_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_204681_s, 0);
    SW_JOIN_LEFTSEMI_TD_15325(tbl_Aggregate_TD_16287_output, tbl_JOIN_INNER_TD_16338_output, tbl_JOIN_LEFTSEMI_TD_15325_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_204681_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_414912_s, tv_r_JOIN_LEFTSEMI_15_414912_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_414912_s, 0);
    SW_JOIN_LEFTSEMI_TD_1512(tbl_Aggregate_TD_16614_output, tbl_JOIN_INNER_TD_16874_output, tbl_JOIN_LEFTSEMI_TD_1512_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_414912_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_925686_s, tv_r_JOIN_LEFTSEMI_15_925686_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_925686_s, 0);
    SW_JOIN_LEFTSEMI_TD_15848(tbl_Aggregate_TD_16697_output, tbl_JOIN_INNER_TD_16574_output, tbl_JOIN_LEFTSEMI_TD_15848_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_925686_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_15_120457_s, tv_r_JOIN_LEFTSEMI_15_120457_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_120457_s, 0);
    SW_JOIN_LEFTSEMI_TD_15633(tbl_Aggregate_TD_164_output, tbl_JOIN_INNER_TD_16625_output, tbl_JOIN_LEFTSEMI_TD_15633_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_15_120457_e, 0);

    struct timeval tv_r_Aggregate_14_181162_s, tv_r_Aggregate_14_181162_e;
    gettimeofday(&tv_r_Aggregate_14_181162_s, 0);
    SW_Aggregate_TD_14488(tbl_JOIN_LEFTSEMI_TD_15617_output, tbl_Aggregate_TD_14488_output);
    gettimeofday(&tv_r_Aggregate_14_181162_e, 0);

    struct timeval tv_r_Filter_14_262034_s, tv_r_Filter_14_262034_e;
    gettimeofday(&tv_r_Filter_14_262034_s, 0);
    SW_Filter_TD_14901(tbl_SerializeFromObject_TD_15176_input, tbl_Filter_TD_14901_output);
    gettimeofday(&tv_r_Filter_14_262034_e, 0);

    struct timeval tv_r_Aggregate_14_79411_s, tv_r_Aggregate_14_79411_e;
    gettimeofday(&tv_r_Aggregate_14_79411_s, 0);
    SW_Aggregate_TD_14536(tbl_JOIN_LEFTSEMI_TD_1578_output, tbl_Aggregate_TD_14536_output);
    gettimeofday(&tv_r_Aggregate_14_79411_e, 0);

    struct timeval tv_r_Filter_14_735797_s, tv_r_Filter_14_735797_e;
    gettimeofday(&tv_r_Filter_14_735797_s, 0);
    SW_Filter_TD_14627(tbl_SerializeFromObject_TD_1547_input, tbl_Filter_TD_14627_output);
    gettimeofday(&tv_r_Filter_14_735797_e, 0);

    struct timeval tv_r_Aggregate_14_593021_s, tv_r_Aggregate_14_593021_e;
    gettimeofday(&tv_r_Aggregate_14_593021_s, 0);
    SW_Aggregate_TD_14402(tbl_JOIN_LEFTSEMI_TD_15325_output, tbl_Aggregate_TD_14402_output);
    gettimeofday(&tv_r_Aggregate_14_593021_e, 0);

    struct timeval tv_r_Filter_14_71765_s, tv_r_Filter_14_71765_e;
    gettimeofday(&tv_r_Filter_14_71765_s, 0);
    SW_Filter_TD_14419(tbl_SerializeFromObject_TD_15738_input, tbl_Filter_TD_14419_output);
    gettimeofday(&tv_r_Filter_14_71765_e, 0);

    struct timeval tv_r_Aggregate_14_527491_s, tv_r_Aggregate_14_527491_e;
    gettimeofday(&tv_r_Aggregate_14_527491_s, 0);
    SW_Aggregate_TD_14718(tbl_JOIN_LEFTSEMI_TD_1512_output, tbl_Aggregate_TD_14718_output);
    gettimeofday(&tv_r_Aggregate_14_527491_e, 0);

    struct timeval tv_r_Filter_14_505391_s, tv_r_Filter_14_505391_e;
    gettimeofday(&tv_r_Filter_14_505391_s, 0);
    SW_Filter_TD_14967(tbl_SerializeFromObject_TD_1598_input, tbl_Filter_TD_14967_output);
    gettimeofday(&tv_r_Filter_14_505391_e, 0);

    struct timeval tv_r_Aggregate_14_395949_s, tv_r_Aggregate_14_395949_e;
    gettimeofday(&tv_r_Aggregate_14_395949_s, 0);
    SW_Aggregate_TD_14976(tbl_JOIN_LEFTSEMI_TD_15848_output, tbl_Aggregate_TD_14976_output);
    gettimeofday(&tv_r_Aggregate_14_395949_e, 0);

    struct timeval tv_r_Filter_14_486753_s, tv_r_Filter_14_486753_e;
    gettimeofday(&tv_r_Filter_14_486753_s, 0);
    SW_Filter_TD_14642(tbl_SerializeFromObject_TD_15765_input, tbl_Filter_TD_14642_output);
    gettimeofday(&tv_r_Filter_14_486753_e, 0);

    struct timeval tv_r_Aggregate_14_408724_s, tv_r_Aggregate_14_408724_e;
    gettimeofday(&tv_r_Aggregate_14_408724_s, 0);
    SW_Aggregate_TD_14612(tbl_JOIN_LEFTSEMI_TD_15633_output, tbl_Aggregate_TD_14612_output);
    gettimeofday(&tv_r_Aggregate_14_408724_e, 0);

    struct timeval tv_r_Filter_14_813227_s, tv_r_Filter_14_813227_e;
    gettimeofday(&tv_r_Filter_14_813227_s, 0);
    SW_Filter_TD_14496(tbl_SerializeFromObject_TD_15835_input, tbl_Filter_TD_14496_output);
    gettimeofday(&tv_r_Filter_14_813227_e, 0);

    struct timeval tv_r_JOIN_INNER_13_856253_s, tv_r_JOIN_INNER_13_856253_e;
    gettimeofday(&tv_r_JOIN_INNER_13_856253_s, 0);
    SW_JOIN_INNER_TD_13338(tbl_Filter_TD_14901_output, tbl_Aggregate_TD_14488_output, tbl_JOIN_INNER_TD_13338_output);
    gettimeofday(&tv_r_JOIN_INNER_13_856253_e, 0);

    struct timeval tv_r_JOIN_INNER_13_60750_s, tv_r_JOIN_INNER_13_60750_e;
    gettimeofday(&tv_r_JOIN_INNER_13_60750_s, 0);
    SW_JOIN_INNER_TD_13754(tbl_Filter_TD_14627_output, tbl_Aggregate_TD_14536_output, tbl_JOIN_INNER_TD_13754_output);
    gettimeofday(&tv_r_JOIN_INNER_13_60750_e, 0);

    struct timeval tv_r_JOIN_INNER_13_276161_s, tv_r_JOIN_INNER_13_276161_e;
    gettimeofday(&tv_r_JOIN_INNER_13_276161_s, 0);
    SW_JOIN_INNER_TD_13882(tbl_Filter_TD_14419_output, tbl_Aggregate_TD_14402_output, tbl_JOIN_INNER_TD_13882_output);
    gettimeofday(&tv_r_JOIN_INNER_13_276161_e, 0);

    struct timeval tv_r_JOIN_INNER_13_641102_s, tv_r_JOIN_INNER_13_641102_e;
    gettimeofday(&tv_r_JOIN_INNER_13_641102_s, 0);
    SW_JOIN_INNER_TD_13603(tbl_Filter_TD_14967_output, tbl_Aggregate_TD_14718_output, tbl_JOIN_INNER_TD_13603_output);
    gettimeofday(&tv_r_JOIN_INNER_13_641102_e, 0);

    struct timeval tv_r_JOIN_INNER_13_444470_s, tv_r_JOIN_INNER_13_444470_e;
    gettimeofday(&tv_r_JOIN_INNER_13_444470_s, 0);
    SW_JOIN_INNER_TD_13763(tbl_Filter_TD_14642_output, tbl_Aggregate_TD_14976_output, tbl_JOIN_INNER_TD_13763_output);
    gettimeofday(&tv_r_JOIN_INNER_13_444470_e, 0);

    struct timeval tv_r_JOIN_INNER_13_978747_s, tv_r_JOIN_INNER_13_978747_e;
    gettimeofday(&tv_r_JOIN_INNER_13_978747_s, 0);
    SW_JOIN_INNER_TD_13722(tbl_Filter_TD_14496_output, tbl_Aggregate_TD_14612_output, tbl_JOIN_INNER_TD_13722_output);
    gettimeofday(&tv_r_JOIN_INNER_13_978747_e, 0);

    struct timeval tv_r_Filter_12_958413_s, tv_r_Filter_12_958413_e;
    gettimeofday(&tv_r_Filter_12_958413_s, 0);
    SW_Filter_TD_12130(tbl_SerializeFromObject_TD_13691_input, tbl_Filter_TD_12130_output);
    gettimeofday(&tv_r_Filter_12_958413_e, 0);

    struct timeval tv_r_Filter_12_744901_s, tv_r_Filter_12_744901_e;
    gettimeofday(&tv_r_Filter_12_744901_s, 0);
    SW_Filter_TD_12654(tbl_SerializeFromObject_TD_1362_input, tbl_Filter_TD_12654_output);
    gettimeofday(&tv_r_Filter_12_744901_e, 0);

    struct timeval tv_r_Filter_12_704505_s, tv_r_Filter_12_704505_e;
    gettimeofday(&tv_r_Filter_12_704505_s, 0);
    SW_Filter_TD_12866(tbl_SerializeFromObject_TD_13753_input, tbl_Filter_TD_12866_output);
    gettimeofday(&tv_r_Filter_12_704505_e, 0);

    struct timeval tv_r_Filter_12_433403_s, tv_r_Filter_12_433403_e;
    gettimeofday(&tv_r_Filter_12_433403_s, 0);
    SW_Filter_TD_12763(tbl_SerializeFromObject_TD_13889_input, tbl_Filter_TD_12763_output);
    gettimeofday(&tv_r_Filter_12_433403_e, 0);

    struct timeval tv_r_Filter_12_716044_s, tv_r_Filter_12_716044_e;
    gettimeofday(&tv_r_Filter_12_716044_s, 0);
    SW_Filter_TD_12502(tbl_SerializeFromObject_TD_13912_input, tbl_Filter_TD_12502_output);
    gettimeofday(&tv_r_Filter_12_716044_e, 0);

    struct timeval tv_r_Filter_12_204611_s, tv_r_Filter_12_204611_e;
    gettimeofday(&tv_r_Filter_12_204611_s, 0);
    SW_Filter_TD_1212(tbl_SerializeFromObject_TD_13448_input, tbl_Filter_TD_1212_output);
    gettimeofday(&tv_r_Filter_12_204611_e, 0);

    struct timeval tv_r_Project_12_551986_s, tv_r_Project_12_551986_e;
    gettimeofday(&tv_r_Project_12_551986_s, 0);
    SW_Project_TD_12700(tbl_JOIN_INNER_TD_13338_output, tbl_Project_TD_12700_output);
    gettimeofday(&tv_r_Project_12_551986_e, 0);

    struct timeval tv_r_Filter_12_145757_s, tv_r_Filter_12_145757_e;
    gettimeofday(&tv_r_Filter_12_145757_s, 0);
    SW_Filter_TD_12481(tbl_SerializeFromObject_TD_1343_input, tbl_Filter_TD_12481_output);
    gettimeofday(&tv_r_Filter_12_145757_e, 0);

    struct timeval tv_r_Project_12_331617_s, tv_r_Project_12_331617_e;
    gettimeofday(&tv_r_Project_12_331617_s, 0);
    SW_Project_TD_12881(tbl_JOIN_INNER_TD_13754_output, tbl_Project_TD_12881_output);
    gettimeofday(&tv_r_Project_12_331617_e, 0);

    struct timeval tv_r_Filter_12_425173_s, tv_r_Filter_12_425173_e;
    gettimeofday(&tv_r_Filter_12_425173_s, 0);
    SW_Filter_TD_12745(tbl_SerializeFromObject_TD_13580_input, tbl_Filter_TD_12745_output);
    gettimeofday(&tv_r_Filter_12_425173_e, 0);

    struct timeval tv_r_Filter_12_874797_s, tv_r_Filter_12_874797_e;
    gettimeofday(&tv_r_Filter_12_874797_s, 0);
    SW_Filter_TD_12676(tbl_SerializeFromObject_TD_13140_input, tbl_Filter_TD_12676_output);
    gettimeofday(&tv_r_Filter_12_874797_e, 0);

    struct timeval tv_r_Filter_12_351831_s, tv_r_Filter_12_351831_e;
    gettimeofday(&tv_r_Filter_12_351831_s, 0);
    SW_Filter_TD_12645(tbl_SerializeFromObject_TD_13889_input, tbl_Filter_TD_12645_output);
    gettimeofday(&tv_r_Filter_12_351831_e, 0);

    struct timeval tv_r_Filter_12_252578_s, tv_r_Filter_12_252578_e;
    gettimeofday(&tv_r_Filter_12_252578_s, 0);
    SW_Filter_TD_12678(tbl_SerializeFromObject_TD_13828_input, tbl_Filter_TD_12678_output);
    gettimeofday(&tv_r_Filter_12_252578_e, 0);

    struct timeval tv_r_Filter_12_347811_s, tv_r_Filter_12_347811_e;
    gettimeofday(&tv_r_Filter_12_347811_s, 0);
    SW_Filter_TD_12623(tbl_SerializeFromObject_TD_13747_input, tbl_Filter_TD_12623_output);
    gettimeofday(&tv_r_Filter_12_347811_e, 0);

    struct timeval tv_r_Filter_12_365762_s, tv_r_Filter_12_365762_e;
    gettimeofday(&tv_r_Filter_12_365762_s, 0);
    SW_Filter_TD_12802(tbl_SerializeFromObject_TD_13559_input, tbl_Filter_TD_12802_output);
    gettimeofday(&tv_r_Filter_12_365762_e, 0);

    struct timeval tv_r_Filter_12_156622_s, tv_r_Filter_12_156622_e;
    gettimeofday(&tv_r_Filter_12_156622_s, 0);
    SW_Filter_TD_12711(tbl_SerializeFromObject_TD_13633_input, tbl_Filter_TD_12711_output);
    gettimeofday(&tv_r_Filter_12_156622_e, 0);

    struct timeval tv_r_Project_12_505368_s, tv_r_Project_12_505368_e;
    gettimeofday(&tv_r_Project_12_505368_s, 0);
    SW_Project_TD_12738(tbl_JOIN_INNER_TD_13882_output, tbl_Project_TD_12738_output);
    gettimeofday(&tv_r_Project_12_505368_e, 0);

    struct timeval tv_r_Filter_12_987205_s, tv_r_Filter_12_987205_e;
    gettimeofday(&tv_r_Filter_12_987205_s, 0);
    SW_Filter_TD_12646(tbl_SerializeFromObject_TD_13833_input, tbl_Filter_TD_12646_output);
    gettimeofday(&tv_r_Filter_12_987205_e, 0);

    struct timeval tv_r_Project_12_827628_s, tv_r_Project_12_827628_e;
    gettimeofday(&tv_r_Project_12_827628_s, 0);
    SW_Project_TD_12270(tbl_JOIN_INNER_TD_13603_output, tbl_Project_TD_12270_output);
    gettimeofday(&tv_r_Project_12_827628_e, 0);

    struct timeval tv_r_Filter_12_98117_s, tv_r_Filter_12_98117_e;
    gettimeofday(&tv_r_Filter_12_98117_s, 0);
    SW_Filter_TD_12332(tbl_SerializeFromObject_TD_13140_input, tbl_Filter_TD_12332_output);
    gettimeofday(&tv_r_Filter_12_98117_e, 0);

    struct timeval tv_r_Filter_12_397538_s, tv_r_Filter_12_397538_e;
    gettimeofday(&tv_r_Filter_12_397538_s, 0);
    SW_Filter_TD_12881(tbl_SerializeFromObject_TD_13791_input, tbl_Filter_TD_12881_output);
    gettimeofday(&tv_r_Filter_12_397538_e, 0);

    struct timeval tv_r_Filter_12_807103_s, tv_r_Filter_12_807103_e;
    gettimeofday(&tv_r_Filter_12_807103_s, 0);
    SW_Filter_TD_12285(tbl_SerializeFromObject_TD_13873_input, tbl_Filter_TD_12285_output);
    gettimeofday(&tv_r_Filter_12_807103_e, 0);

    struct timeval tv_r_Filter_12_336504_s, tv_r_Filter_12_336504_e;
    gettimeofday(&tv_r_Filter_12_336504_s, 0);
    SW_Filter_TD_1229(tbl_SerializeFromObject_TD_13308_input, tbl_Filter_TD_1229_output);
    gettimeofday(&tv_r_Filter_12_336504_e, 0);

    struct timeval tv_r_Filter_12_620575_s, tv_r_Filter_12_620575_e;
    gettimeofday(&tv_r_Filter_12_620575_s, 0);
    SW_Filter_TD_12834(tbl_SerializeFromObject_TD_13944_input, tbl_Filter_TD_12834_output);
    gettimeofday(&tv_r_Filter_12_620575_e, 0);

    struct timeval tv_r_Filter_12_580601_s, tv_r_Filter_12_580601_e;
    gettimeofday(&tv_r_Filter_12_580601_s, 0);
    SW_Filter_TD_12671(tbl_SerializeFromObject_TD_13505_input, tbl_Filter_TD_12671_output);
    gettimeofday(&tv_r_Filter_12_580601_e, 0);

    struct timeval tv_r_Filter_12_154971_s, tv_r_Filter_12_154971_e;
    gettimeofday(&tv_r_Filter_12_154971_s, 0);
    SW_Filter_TD_12354(tbl_SerializeFromObject_TD_13299_input, tbl_Filter_TD_12354_output);
    gettimeofday(&tv_r_Filter_12_154971_e, 0);

    struct timeval tv_r_Project_12_141017_s, tv_r_Project_12_141017_e;
    gettimeofday(&tv_r_Project_12_141017_s, 0);
    SW_Project_TD_1223(tbl_JOIN_INNER_TD_13763_output, tbl_Project_TD_1223_output);
    gettimeofday(&tv_r_Project_12_141017_e, 0);

    struct timeval tv_r_Filter_12_502674_s, tv_r_Filter_12_502674_e;
    gettimeofday(&tv_r_Filter_12_502674_s, 0);
    SW_Filter_TD_12604(tbl_SerializeFromObject_TD_13499_input, tbl_Filter_TD_12604_output);
    gettimeofday(&tv_r_Filter_12_502674_e, 0);

    struct timeval tv_r_Project_12_847181_s, tv_r_Project_12_847181_e;
    gettimeofday(&tv_r_Project_12_847181_s, 0);
    SW_Project_TD_12137(tbl_JOIN_INNER_TD_13722_output, tbl_Project_TD_12137_output);
    gettimeofday(&tv_r_Project_12_847181_e, 0);

    struct timeval tv_r_Filter_12_684002_s, tv_r_Filter_12_684002_e;
    gettimeofday(&tv_r_Filter_12_684002_s, 0);
    SW_Filter_TD_12286(tbl_SerializeFromObject_TD_13667_input, tbl_Filter_TD_12286_output);
    gettimeofday(&tv_r_Filter_12_684002_e, 0);

    struct timeval tv_r_JOIN_INNER_11_535192_s, tv_r_JOIN_INNER_11_535192_e;
    gettimeofday(&tv_r_JOIN_INNER_11_535192_s, 0);
    SW_JOIN_INNER_TD_11446(tbl_Filter_TD_12654_output, tbl_Filter_TD_12130_output, tbl_JOIN_INNER_TD_11446_output);
    gettimeofday(&tv_r_JOIN_INNER_11_535192_e, 0);

    struct timeval tv_r_JOIN_INNER_11_719595_s, tv_r_JOIN_INNER_11_719595_e;
    gettimeofday(&tv_r_JOIN_INNER_11_719595_s, 0);
    SW_JOIN_INNER_TD_1162(tbl_Filter_TD_12763_output, tbl_Filter_TD_12866_output, tbl_JOIN_INNER_TD_1162_output);
    gettimeofday(&tv_r_JOIN_INNER_11_719595_e, 0);

    struct timeval tv_r_JOIN_INNER_11_359951_s, tv_r_JOIN_INNER_11_359951_e;
    gettimeofday(&tv_r_JOIN_INNER_11_359951_s, 0);
    SW_JOIN_INNER_TD_11482(tbl_Filter_TD_1212_output, tbl_Filter_TD_12502_output, tbl_JOIN_INNER_TD_11482_output);
    gettimeofday(&tv_r_JOIN_INNER_11_359951_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_974262_s, tv_r_JOIN_LEFTSEMI_11_974262_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_974262_s, 0);
    SW_JOIN_LEFTSEMI_TD_11290(tbl_Filter_TD_12481_output, tbl_Project_TD_12700_output, tbl_JOIN_LEFTSEMI_TD_11290_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_974262_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_92776_s, tv_r_JOIN_LEFTSEMI_11_92776_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_92776_s, 0);
    SW_JOIN_LEFTSEMI_TD_11641(tbl_Filter_TD_12745_output, tbl_Project_TD_12881_output, tbl_JOIN_LEFTSEMI_TD_11641_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_92776_e, 0);

    struct timeval tv_r_JOIN_INNER_11_489271_s, tv_r_JOIN_INNER_11_489271_e;
    gettimeofday(&tv_r_JOIN_INNER_11_489271_s, 0);
    SW_JOIN_INNER_TD_11408(tbl_Filter_TD_12645_output, tbl_Filter_TD_12676_output, tbl_JOIN_INNER_TD_11408_output);
    gettimeofday(&tv_r_JOIN_INNER_11_489271_e, 0);

    struct timeval tv_r_JOIN_INNER_11_699912_s, tv_r_JOIN_INNER_11_699912_e;
    gettimeofday(&tv_r_JOIN_INNER_11_699912_s, 0);
    SW_JOIN_INNER_TD_1175(tbl_Filter_TD_12623_output, tbl_Filter_TD_12678_output, tbl_JOIN_INNER_TD_1175_output);
    gettimeofday(&tv_r_JOIN_INNER_11_699912_e, 0);

    struct timeval tv_r_JOIN_INNER_11_237263_s, tv_r_JOIN_INNER_11_237263_e;
    gettimeofday(&tv_r_JOIN_INNER_11_237263_s, 0);
    SW_JOIN_INNER_TD_11961(tbl_Filter_TD_12711_output, tbl_Filter_TD_12802_output, tbl_JOIN_INNER_TD_11961_output);
    gettimeofday(&tv_r_JOIN_INNER_11_237263_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_336408_s, tv_r_JOIN_LEFTSEMI_11_336408_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_336408_s, 0);
    SW_JOIN_LEFTSEMI_TD_11161(tbl_Filter_TD_12646_output, tbl_Project_TD_12738_output, tbl_JOIN_LEFTSEMI_TD_11161_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_336408_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_238357_s, tv_r_JOIN_LEFTSEMI_11_238357_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_238357_s, 0);
    SW_JOIN_LEFTSEMI_TD_11655(tbl_Filter_TD_12332_output, tbl_Project_TD_12270_output, tbl_JOIN_LEFTSEMI_TD_11655_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_238357_e, 0);

    struct timeval tv_r_JOIN_INNER_11_812966_s, tv_r_JOIN_INNER_11_812966_e;
    gettimeofday(&tv_r_JOIN_INNER_11_812966_s, 0);
    SW_JOIN_INNER_TD_1191(tbl_Filter_TD_12285_output, tbl_Filter_TD_12881_output, tbl_JOIN_INNER_TD_1191_output);
    gettimeofday(&tv_r_JOIN_INNER_11_812966_e, 0);

    struct timeval tv_r_JOIN_INNER_11_581520_s, tv_r_JOIN_INNER_11_581520_e;
    gettimeofday(&tv_r_JOIN_INNER_11_581520_s, 0);
    SW_JOIN_INNER_TD_11837(tbl_Filter_TD_12834_output, tbl_Filter_TD_1229_output, tbl_JOIN_INNER_TD_11837_output);
    gettimeofday(&tv_r_JOIN_INNER_11_581520_e, 0);

    struct timeval tv_r_JOIN_INNER_11_818913_s, tv_r_JOIN_INNER_11_818913_e;
    gettimeofday(&tv_r_JOIN_INNER_11_818913_s, 0);
    SW_JOIN_INNER_TD_11621(tbl_Filter_TD_12354_output, tbl_Filter_TD_12671_output, tbl_JOIN_INNER_TD_11621_output);
    gettimeofday(&tv_r_JOIN_INNER_11_818913_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_403670_s, tv_r_JOIN_LEFTSEMI_11_403670_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_403670_s, 0);
    SW_JOIN_LEFTSEMI_TD_11737(tbl_Filter_TD_12604_output, tbl_Project_TD_1223_output, tbl_JOIN_LEFTSEMI_TD_11737_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_403670_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_11_257943_s, tv_r_JOIN_LEFTSEMI_11_257943_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_257943_s, 0);
    SW_JOIN_LEFTSEMI_TD_1169(tbl_Filter_TD_12286_output, tbl_Project_TD_12137_output, tbl_JOIN_LEFTSEMI_TD_1169_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_11_257943_e, 0);

    struct timeval tv_r_Project_10_720133_s, tv_r_Project_10_720133_e;
    gettimeofday(&tv_r_Project_10_720133_s, 0);
    SW_Project_TD_10595(tbl_JOIN_INNER_TD_11446_output, tbl_Project_TD_10595_output);
    gettimeofday(&tv_r_Project_10_720133_e, 0);

    struct timeval tv_r_Project_10_869791_s, tv_r_Project_10_869791_e;
    gettimeofday(&tv_r_Project_10_869791_s, 0);
    SW_Project_TD_10502(tbl_JOIN_INNER_TD_1162_output, tbl_Project_TD_10502_output);
    gettimeofday(&tv_r_Project_10_869791_e, 0);

    struct timeval tv_r_Project_10_641550_s, tv_r_Project_10_641550_e;
    gettimeofday(&tv_r_Project_10_641550_s, 0);
    SW_Project_TD_10121(tbl_JOIN_INNER_TD_11482_output, tbl_Project_TD_10121_output);
    gettimeofday(&tv_r_Project_10_641550_e, 0);

    struct timeval tv_r_Filter_10_271886_s, tv_r_Filter_10_271886_e;
    gettimeofday(&tv_r_Filter_10_271886_s, 0);
    SW_Filter_TD_1013(tbl_SerializeFromObject_TD_11820_input, tbl_Filter_TD_1013_output);
    gettimeofday(&tv_r_Filter_10_271886_e, 0);

    struct timeval tv_r_JOIN_INNER_10_96700_s, tv_r_JOIN_INNER_10_96700_e;
    gettimeofday(&tv_r_JOIN_INNER_10_96700_s, 0);
    SW_JOIN_INNER_TD_10323(tbl_JOIN_LEFTSEMI_TD_11641_output, tbl_JOIN_LEFTSEMI_TD_11290_output, tbl_JOIN_INNER_TD_10323_output);
    gettimeofday(&tv_r_JOIN_INNER_10_96700_e, 0);

    struct timeval tv_r_Project_10_30749_s, tv_r_Project_10_30749_e;
    gettimeofday(&tv_r_Project_10_30749_s, 0);
    SW_Project_TD_1031(tbl_JOIN_INNER_TD_11408_output, tbl_Project_TD_1031_output);
    gettimeofday(&tv_r_Project_10_30749_e, 0);

    struct timeval tv_r_Project_10_654010_s, tv_r_Project_10_654010_e;
    gettimeofday(&tv_r_Project_10_654010_s, 0);
    SW_Project_TD_10750(tbl_JOIN_INNER_TD_1175_output, tbl_Project_TD_10750_output);
    gettimeofday(&tv_r_Project_10_654010_e, 0);

    struct timeval tv_r_Project_10_437987_s, tv_r_Project_10_437987_e;
    gettimeofday(&tv_r_Project_10_437987_s, 0);
    SW_Project_TD_10583(tbl_JOIN_INNER_TD_11961_output, tbl_Project_TD_10583_output);
    gettimeofday(&tv_r_Project_10_437987_e, 0);

    struct timeval tv_r_Filter_10_471741_s, tv_r_Filter_10_471741_e;
    gettimeofday(&tv_r_Filter_10_471741_s, 0);
    SW_Filter_TD_10713(tbl_SerializeFromObject_TD_11547_input, tbl_Filter_TD_10713_output);
    gettimeofday(&tv_r_Filter_10_471741_e, 0);

    struct timeval tv_r_JOIN_INNER_10_305865_s, tv_r_JOIN_INNER_10_305865_e;
    gettimeofday(&tv_r_JOIN_INNER_10_305865_s, 0);
    SW_JOIN_INNER_TD_10647(tbl_JOIN_LEFTSEMI_TD_11655_output, tbl_JOIN_LEFTSEMI_TD_11161_output, tbl_JOIN_INNER_TD_10647_output);
    gettimeofday(&tv_r_JOIN_INNER_10_305865_e, 0);

    struct timeval tv_r_Project_10_596109_s, tv_r_Project_10_596109_e;
    gettimeofday(&tv_r_Project_10_596109_s, 0);
    SW_Project_TD_10123(tbl_JOIN_INNER_TD_1191_output, tbl_Project_TD_10123_output);
    gettimeofday(&tv_r_Project_10_596109_e, 0);

    struct timeval tv_r_Project_10_764695_s, tv_r_Project_10_764695_e;
    gettimeofday(&tv_r_Project_10_764695_s, 0);
    SW_Project_TD_10581(tbl_JOIN_INNER_TD_11837_output, tbl_Project_TD_10581_output);
    gettimeofday(&tv_r_Project_10_764695_e, 0);

    struct timeval tv_r_Project_10_481126_s, tv_r_Project_10_481126_e;
    gettimeofday(&tv_r_Project_10_481126_s, 0);
    SW_Project_TD_10364(tbl_JOIN_INNER_TD_11621_output, tbl_Project_TD_10364_output);
    gettimeofday(&tv_r_Project_10_481126_e, 0);

    struct timeval tv_r_Filter_10_297030_s, tv_r_Filter_10_297030_e;
    gettimeofday(&tv_r_Filter_10_297030_s, 0);
    SW_Filter_TD_1059(tbl_SerializeFromObject_TD_11951_input, tbl_Filter_TD_1059_output);
    gettimeofday(&tv_r_Filter_10_297030_e, 0);

    struct timeval tv_r_JOIN_INNER_10_820313_s, tv_r_JOIN_INNER_10_820313_e;
    gettimeofday(&tv_r_JOIN_INNER_10_820313_s, 0);
    SW_JOIN_INNER_TD_10740(tbl_JOIN_LEFTSEMI_TD_1169_output, tbl_JOIN_LEFTSEMI_TD_11737_output, tbl_JOIN_INNER_TD_10740_output);
    gettimeofday(&tv_r_JOIN_INNER_10_820313_e, 0);

    struct timeval tv_r_Union_9_946101_s, tv_r_Union_9_946101_e;
    gettimeofday(&tv_r_Union_9_946101_s, 0);
    SW_Union_TD_9949(tbl_Project_TD_10121_output, tbl_Project_TD_10502_output, tbl_Project_TD_10595_output, tbl_Union_TD_9949_output);
    gettimeofday(&tv_r_Union_9_946101_e, 0);

    struct timeval tv_r_JOIN_INNER_9_344552_s, tv_r_JOIN_INNER_9_344552_e;
    gettimeofday(&tv_r_JOIN_INNER_9_344552_s, 0);
    SW_JOIN_INNER_TD_9862(tbl_JOIN_INNER_TD_10323_output, tbl_Filter_TD_1013_output, tbl_JOIN_INNER_TD_9862_output);
    gettimeofday(&tv_r_JOIN_INNER_9_344552_e, 0);

    struct timeval tv_r_Union_9_50848_s, tv_r_Union_9_50848_e;
    gettimeofday(&tv_r_Union_9_50848_s, 0);
    SW_Union_TD_9308(tbl_Project_TD_10583_output, tbl_Project_TD_10750_output, tbl_Project_TD_1031_output, tbl_Union_TD_9308_output);
    gettimeofday(&tv_r_Union_9_50848_e, 0);

    struct timeval tv_r_JOIN_INNER_9_577303_s, tv_r_JOIN_INNER_9_577303_e;
    gettimeofday(&tv_r_JOIN_INNER_9_577303_s, 0);
    SW_JOIN_INNER_TD_963(tbl_JOIN_INNER_TD_10647_output, tbl_Filter_TD_10713_output, tbl_JOIN_INNER_TD_963_output);
    gettimeofday(&tv_r_JOIN_INNER_9_577303_e, 0);

    struct timeval tv_r_Union_9_889939_s, tv_r_Union_9_889939_e;
    gettimeofday(&tv_r_Union_9_889939_s, 0);
    SW_Union_TD_9347(tbl_Project_TD_10364_output, tbl_Project_TD_10581_output, tbl_Project_TD_10123_output, tbl_Union_TD_9347_output);
    gettimeofday(&tv_r_Union_9_889939_e, 0);

    struct timeval tv_r_JOIN_INNER_9_364504_s, tv_r_JOIN_INNER_9_364504_e;
    gettimeofday(&tv_r_JOIN_INNER_9_364504_s, 0);
    SW_JOIN_INNER_TD_9455(tbl_JOIN_INNER_TD_10740_output, tbl_Filter_TD_1059_output, tbl_JOIN_INNER_TD_9455_output);
    gettimeofday(&tv_r_JOIN_INNER_9_364504_e, 0);

    struct timeval tv_r_Aggregate_8_997147_s, tv_r_Aggregate_8_997147_e;
    gettimeofday(&tv_r_Aggregate_8_997147_s, 0);
    SW_Aggregate_TD_8808(tbl_Union_TD_9949_output, tbl_Aggregate_TD_8808_output);
    gettimeofday(&tv_r_Aggregate_8_997147_e, 0);

    struct timeval tv_r_Aggregate_8_834323_s, tv_r_Aggregate_8_834323_e;
    gettimeofday(&tv_r_Aggregate_8_834323_s, 0);
    SW_Aggregate_TD_816(tbl_JOIN_INNER_TD_9862_output, tbl_Aggregate_TD_816_output);
    gettimeofday(&tv_r_Aggregate_8_834323_e, 0);

    struct timeval tv_r_Aggregate_8_395576_s, tv_r_Aggregate_8_395576_e;
    gettimeofday(&tv_r_Aggregate_8_395576_s, 0);
    SW_Aggregate_TD_8810(tbl_Union_TD_9308_output, tbl_Aggregate_TD_8810_output);
    gettimeofday(&tv_r_Aggregate_8_395576_e, 0);

    struct timeval tv_r_Aggregate_8_297522_s, tv_r_Aggregate_8_297522_e;
    gettimeofday(&tv_r_Aggregate_8_297522_s, 0);
    SW_Aggregate_TD_8835(tbl_JOIN_INNER_TD_963_output, tbl_Aggregate_TD_8835_output);
    gettimeofday(&tv_r_Aggregate_8_297522_e, 0);

    struct timeval tv_r_Aggregate_8_928804_s, tv_r_Aggregate_8_928804_e;
    gettimeofday(&tv_r_Aggregate_8_928804_s, 0);
    SW_Aggregate_TD_8310(tbl_Union_TD_9347_output, tbl_Aggregate_TD_8310_output);
    gettimeofday(&tv_r_Aggregate_8_928804_e, 0);

    struct timeval tv_r_Aggregate_8_602871_s, tv_r_Aggregate_8_602871_e;
    gettimeofday(&tv_r_Aggregate_8_602871_s, 0);
    SW_Aggregate_TD_8818(tbl_JOIN_INNER_TD_9455_output, tbl_Aggregate_TD_8818_output);
    gettimeofday(&tv_r_Aggregate_8_602871_e, 0);

    struct timeval tv_r_Filter_7_546456_s, tv_r_Filter_7_546456_e;
    gettimeofday(&tv_r_Filter_7_546456_s, 0);
    SW_Filter_TD_7522(tbl_Aggregate_TD_816_output, tbl_Aggregate_TD_8808_output, tbl_Filter_TD_7522_output);
    gettimeofday(&tv_r_Filter_7_546456_e, 0);

    struct timeval tv_r_Filter_7_721329_s, tv_r_Filter_7_721329_e;
    gettimeofday(&tv_r_Filter_7_721329_s, 0);
    SW_Filter_TD_7865(tbl_Aggregate_TD_8835_output, tbl_Aggregate_TD_8810_output, tbl_Filter_TD_7865_output);
    gettimeofday(&tv_r_Filter_7_721329_e, 0);

    struct timeval tv_r_Filter_7_645801_s, tv_r_Filter_7_645801_e;
    gettimeofday(&tv_r_Filter_7_645801_s, 0);
    SW_Filter_TD_7569(tbl_Aggregate_TD_8818_output, tbl_Aggregate_TD_8310_output, tbl_Filter_TD_7569_output);
    gettimeofday(&tv_r_Filter_7_645801_e, 0);

    struct timeval tv_r_Project_6_218289_s, tv_r_Project_6_218289_e;
    gettimeofday(&tv_r_Project_6_218289_s, 0);
    SW_Project_TD_6237(tbl_Filter_TD_7522_output, tbl_Project_TD_6237_output);
    gettimeofday(&tv_r_Project_6_218289_e, 0);

    struct timeval tv_r_Project_6_538298_s, tv_r_Project_6_538298_e;
    gettimeofday(&tv_r_Project_6_538298_s, 0);
    SW_Project_TD_6100(tbl_Filter_TD_7865_output, tbl_Project_TD_6100_output);
    gettimeofday(&tv_r_Project_6_538298_e, 0);

    struct timeval tv_r_Project_6_240452_s, tv_r_Project_6_240452_e;
    gettimeofday(&tv_r_Project_6_240452_s, 0);
    SW_Project_TD_6597(tbl_Filter_TD_7569_output, tbl_Project_TD_6597_output);
    gettimeofday(&tv_r_Project_6_240452_e, 0);

    struct timeval tv_r_Union_5_99588_s, tv_r_Union_5_99588_e;
    gettimeofday(&tv_r_Union_5_99588_s, 0);
    SW_Union_TD_5437(tbl_Project_TD_6597_output, tbl_Project_TD_6100_output, tbl_Project_TD_6237_output, tbl_Union_TD_5437_output);
    gettimeofday(&tv_r_Union_5_99588_e, 0);

    struct timeval tv_r_Expand_4_596804_s, tv_r_Expand_4_596804_e;
    gettimeofday(&tv_r_Expand_4_596804_s, 0);
    SW_Expand_TD_4900(tbl_Union_TD_5437_output, tbl_Expand_TD_4900_output);
    gettimeofday(&tv_r_Expand_4_596804_e, 0);

    struct timeval tv_r_Aggregate_3_984698_s, tv_r_Aggregate_3_984698_e;
    gettimeofday(&tv_r_Aggregate_3_984698_s, 0);
    SW_Aggregate_TD_3894(tbl_Expand_TD_4900_output, tbl_Aggregate_TD_3894_output);
    gettimeofday(&tv_r_Aggregate_3_984698_e, 0);

    struct timeval tv_r_Sort_2_587309_s, tv_r_Sort_2_587309_e;
    gettimeofday(&tv_r_Sort_2_587309_s, 0);
    SW_Sort_TD_2396(tbl_Aggregate_TD_3894_output, tbl_Sort_TD_2396_output);
    gettimeofday(&tv_r_Sort_2_587309_e, 0);

    struct timeval tv_r_LocalLimit_1_385042_s, tv_r_LocalLimit_1_385042_e;
    gettimeofday(&tv_r_LocalLimit_1_385042_s, 0);
    SW_LocalLimit_TD_1625(tbl_Sort_TD_2396_output, tbl_LocalLimit_TD_1625_output);
    gettimeofday(&tv_r_LocalLimit_1_385042_e, 0);

    struct timeval tv_r_GlobalLimit_0_907240_s, tv_r_GlobalLimit_0_907240_e;
    gettimeofday(&tv_r_GlobalLimit_0_907240_s, 0);
    SW_GlobalLimit_TD_0297(tbl_LocalLimit_TD_1625_output, tbl_GlobalLimit_TD_0297_output);
    gettimeofday(&tv_r_GlobalLimit_0_907240_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_438670_s, &tv_r_Filter_23_438670_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24844_input: " << tbl_SerializeFromObject_TD_24844_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_361320_s, &tv_r_Filter_23_361320_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24320_input: " << tbl_SerializeFromObject_TD_24320_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_369884_s, &tv_r_Filter_23_369884_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24745_input: " << tbl_SerializeFromObject_TD_24745_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_594700_s, &tv_r_Filter_23_594700_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24658_input: " << tbl_SerializeFromObject_TD_24658_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_602587_s, &tv_r_Filter_23_602587_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24834_input: " << tbl_SerializeFromObject_TD_24834_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_484316_s, &tv_r_Filter_23_484316_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24286_input: " << tbl_SerializeFromObject_TD_24286_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_695942_s, &tv_r_Filter_23_695942_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2459_input: " << tbl_SerializeFromObject_TD_2459_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_617394_s, &tv_r_Filter_23_617394_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24311_input: " << tbl_SerializeFromObject_TD_24311_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_205781_s, &tv_r_Filter_23_205781_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24623_input: " << tbl_SerializeFromObject_TD_24623_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_425452_s, &tv_r_Filter_23_425452_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24801_input: " << tbl_SerializeFromObject_TD_24801_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_880342_s, &tv_r_Filter_23_880342_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24922_input: " << tbl_SerializeFromObject_TD_24922_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_458383_s, &tv_r_Filter_23_458383_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24127_input: " << tbl_SerializeFromObject_TD_24127_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_593723_s, &tv_r_Filter_22_593723_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_23674_input: " << tbl_SerializeFromObject_TD_23674_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_316756_s, &tv_r_JOIN_INNER_22_316756_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23647_output: " << tbl_Filter_TD_23647_output.getNumRow() << " " << "tbl_Filter_TD_23797_output: " << tbl_Filter_TD_23797_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_104083_s, &tv_r_Filter_22_104083_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2339_input: " << tbl_SerializeFromObject_TD_2339_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_259172_s, &tv_r_JOIN_INNER_22_259172_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23247_output: " << tbl_Filter_TD_23247_output.getNumRow() << " " << "tbl_Filter_TD_23719_output: " << tbl_Filter_TD_23719_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_833279_s, &tv_r_Filter_22_833279_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_23652_input: " << tbl_SerializeFromObject_TD_23652_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_468582_s, &tv_r_JOIN_INNER_22_468582_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23503_output: " << tbl_Filter_TD_23503_output.getNumRow() << " " << "tbl_Filter_TD_23629_output: " << tbl_Filter_TD_23629_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_700178_s, &tv_r_Filter_22_700178_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_23360_input: " << tbl_SerializeFromObject_TD_23360_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_534948_s, &tv_r_JOIN_INNER_22_534948_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23206_output: " << tbl_Filter_TD_23206_output.getNumRow() << " " << "tbl_Filter_TD_23135_output: " << tbl_Filter_TD_23135_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_675781_s, &tv_r_Filter_22_675781_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_23287_input: " << tbl_SerializeFromObject_TD_23287_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_85608_s, &tv_r_JOIN_INNER_22_85608_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23757_output: " << tbl_Filter_TD_23757_output.getNumRow() << " " << "tbl_Filter_TD_239_output: " << tbl_Filter_TD_239_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_22: " << tvdiff(&tv_r_Filter_22_425866_s, &tv_r_Filter_22_425866_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2377_input: " << tbl_SerializeFromObject_TD_2377_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_791835_s, &tv_r_JOIN_INNER_22_791835_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23657_output: " << tbl_Filter_TD_23657_output.getNumRow() << " " << "tbl_Filter_TD_23866_output: " << tbl_Filter_TD_23866_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_226889_s, &tv_r_JOIN_INNER_21_226889_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22808_output: " << tbl_JOIN_INNER_TD_22808_output.getNumRow() << " " << "tbl_Filter_TD_22493_output: " << tbl_Filter_TD_22493_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_789640_s, &tv_r_Filter_21_789640_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22316_input: " << tbl_SerializeFromObject_TD_22316_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_933699_s, &tv_r_JOIN_INNER_21_933699_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22665_output: " << tbl_JOIN_INNER_TD_22665_output.getNumRow() << " " << "tbl_Filter_TD_222_output: " << tbl_Filter_TD_222_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_831291_s, &tv_r_Filter_21_831291_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22108_input: " << tbl_SerializeFromObject_TD_22108_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_441503_s, &tv_r_JOIN_INNER_21_441503_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22932_output: " << tbl_JOIN_INNER_TD_22932_output.getNumRow() << " " << "tbl_Filter_TD_22285_output: " << tbl_Filter_TD_22285_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_716476_s, &tv_r_Filter_21_716476_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22537_input: " << tbl_SerializeFromObject_TD_22537_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_275437_s, &tv_r_JOIN_INNER_21_275437_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22180_output: " << tbl_JOIN_INNER_TD_22180_output.getNumRow() << " " << "tbl_Filter_TD_22770_output: " << tbl_Filter_TD_22770_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_8389_s, &tv_r_Filter_21_8389_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22568_input: " << tbl_SerializeFromObject_TD_22568_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_271958_s, &tv_r_JOIN_INNER_21_271958_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22320_output: " << tbl_JOIN_INNER_TD_22320_output.getNumRow() << " " << "tbl_Filter_TD_22149_output: " << tbl_Filter_TD_22149_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_246138_s, &tv_r_Filter_21_246138_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22265_input: " << tbl_SerializeFromObject_TD_22265_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_21: " << tvdiff(&tv_r_JOIN_INNER_21_794573_s, &tv_r_JOIN_INNER_21_794573_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22328_output: " << tbl_JOIN_INNER_TD_22328_output.getNumRow() << " " << "tbl_Filter_TD_22347_output: " << tbl_Filter_TD_22347_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_671697_s, &tv_r_Filter_21_671697_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_224_input: " << tbl_SerializeFromObject_TD_224_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_382390_s, &tv_r_JOIN_LEFTSEMI_20_382390_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21573_output: " << tbl_Filter_TD_21573_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21555_output: " << tbl_JOIN_INNER_TD_21555_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_864721_s, &tv_r_Filter_20_864721_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21976_input: " << tbl_SerializeFromObject_TD_21976_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_300882_s, &tv_r_JOIN_LEFTSEMI_20_300882_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21302_output: " << tbl_Filter_TD_21302_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21129_output: " << tbl_JOIN_INNER_TD_21129_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_862138_s, &tv_r_Filter_20_862138_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21378_input: " << tbl_SerializeFromObject_TD_21378_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_221161_s, &tv_r_JOIN_LEFTSEMI_20_221161_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21378_output: " << tbl_Filter_TD_21378_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_2135_output: " << tbl_JOIN_INNER_TD_2135_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_729699_s, &tv_r_Filter_20_729699_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21438_input: " << tbl_SerializeFromObject_TD_21438_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_824006_s, &tv_r_JOIN_LEFTSEMI_20_824006_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21526_output: " << tbl_Filter_TD_21526_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21864_output: " << tbl_JOIN_INNER_TD_21864_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_916968_s, &tv_r_Filter_20_916968_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21666_input: " << tbl_SerializeFromObject_TD_21666_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_12790_s, &tv_r_JOIN_LEFTSEMI_20_12790_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21569_output: " << tbl_Filter_TD_21569_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_21649_output: " << tbl_JOIN_INNER_TD_21649_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_742015_s, &tv_r_Filter_20_742015_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21637_input: " << tbl_SerializeFromObject_TD_21637_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_20: " << tvdiff(&tv_r_JOIN_LEFTSEMI_20_131232_s, &tv_r_JOIN_LEFTSEMI_20_131232_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21385_output: " << tbl_Filter_TD_21385_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_2148_output: " << tbl_JOIN_INNER_TD_2148_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_26619_s, &tv_r_Filter_20_26619_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_21233_input: " << tbl_SerializeFromObject_TD_21233_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_794856_s, &tv_r_Filter_19_794856_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20407_input: " << tbl_SerializeFromObject_TD_20407_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_491039_s, &tv_r_JOIN_INNER_19_491039_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2078_output: " << tbl_Filter_TD_2078_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_20666_output: " << tbl_JOIN_LEFTSEMI_TD_20666_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_796726_s, &tv_r_Filter_19_796726_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_205_input: " << tbl_SerializeFromObject_TD_205_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_132880_s, &tv_r_JOIN_INNER_19_132880_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20607_output: " << tbl_Filter_TD_20607_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_20478_output: " << tbl_JOIN_LEFTSEMI_TD_20478_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_780813_s, &tv_r_Filter_19_780813_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20230_input: " << tbl_SerializeFromObject_TD_20230_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_243387_s, &tv_r_JOIN_INNER_19_243387_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20155_output: " << tbl_Filter_TD_20155_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_20380_output: " << tbl_JOIN_LEFTSEMI_TD_20380_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_542735_s, &tv_r_Filter_19_542735_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2029_input: " << tbl_SerializeFromObject_TD_2029_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_150644_s, &tv_r_JOIN_INNER_19_150644_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20241_output: " << tbl_Filter_TD_20241_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_20114_output: " << tbl_JOIN_LEFTSEMI_TD_20114_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_955226_s, &tv_r_Filter_19_955226_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20463_input: " << tbl_SerializeFromObject_TD_20463_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_730631_s, &tv_r_JOIN_INNER_19_730631_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20507_output: " << tbl_Filter_TD_20507_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_20292_output: " << tbl_JOIN_LEFTSEMI_TD_20292_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_976343_s, &tv_r_Filter_19_976343_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20126_input: " << tbl_SerializeFromObject_TD_20126_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_629411_s, &tv_r_JOIN_INNER_19_629411_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_20859_output: " << tbl_Filter_TD_20859_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_20128_output: " << tbl_JOIN_LEFTSEMI_TD_20128_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_682028_s, &tv_r_Filter_18_682028_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19964_input: " << tbl_SerializeFromObject_TD_19964_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_617360_s, &tv_r_Filter_18_617360_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19820_input: " << tbl_SerializeFromObject_TD_19820_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_731692_s, &tv_r_JOIN_INNER_18_731692_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19988_output: " << tbl_JOIN_INNER_TD_19988_output.getNumRow() << " " << "tbl_Filter_TD_19645_output: " << tbl_Filter_TD_19645_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_324475_s, &tv_r_Filter_18_324475_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19289_input: " << tbl_SerializeFromObject_TD_19289_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_140777_s, &tv_r_Filter_18_140777_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19891_input: " << tbl_SerializeFromObject_TD_19891_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_721774_s, &tv_r_JOIN_INNER_18_721774_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19987_output: " << tbl_JOIN_INNER_TD_19987_output.getNumRow() << " " << "tbl_Filter_TD_19593_output: " << tbl_Filter_TD_19593_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_124949_s, &tv_r_Filter_18_124949_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19762_input: " << tbl_SerializeFromObject_TD_19762_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_686722_s, &tv_r_Filter_18_686722_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19102_input: " << tbl_SerializeFromObject_TD_19102_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_780549_s, &tv_r_JOIN_INNER_18_780549_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19510_output: " << tbl_JOIN_INNER_TD_19510_output.getNumRow() << " " << "tbl_Filter_TD_19734_output: " << tbl_Filter_TD_19734_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_317415_s, &tv_r_Filter_18_317415_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19419_input: " << tbl_SerializeFromObject_TD_19419_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_488210_s, &tv_r_Filter_18_488210_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19187_input: " << tbl_SerializeFromObject_TD_19187_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_706640_s, &tv_r_JOIN_INNER_18_706640_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_199_output: " << tbl_JOIN_INNER_TD_199_output.getNumRow() << " " << "tbl_Filter_TD_19755_output: " << tbl_Filter_TD_19755_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_10785_s, &tv_r_Filter_18_10785_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19652_input: " << tbl_SerializeFromObject_TD_19652_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_888417_s, &tv_r_Filter_18_888417_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19793_input: " << tbl_SerializeFromObject_TD_19793_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_999118_s, &tv_r_JOIN_INNER_18_999118_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19789_output: " << tbl_JOIN_INNER_TD_19789_output.getNumRow() << " " << "tbl_Filter_TD_19305_output: " << tbl_Filter_TD_19305_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_176283_s, &tv_r_Filter_18_176283_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19232_input: " << tbl_SerializeFromObject_TD_19232_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_656141_s, &tv_r_Filter_18_656141_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19726_input: " << tbl_SerializeFromObject_TD_19726_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_833025_s, &tv_r_JOIN_INNER_18_833025_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19746_output: " << tbl_JOIN_INNER_TD_19746_output.getNumRow() << " " << "tbl_Filter_TD_19161_output: " << tbl_Filter_TD_19161_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_434033_s, &tv_r_Filter_17_434033_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18445_input: " << tbl_SerializeFromObject_TD_18445_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_508957_s, &tv_r_JOIN_INNER_17_508957_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18230_output: " << tbl_Filter_TD_18230_output.getNumRow() << " " << "tbl_Filter_TD_18650_output: " << tbl_Filter_TD_18650_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_410350_s, &tv_r_Project_17_410350_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18580_output: " << tbl_JOIN_INNER_TD_18580_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_271588_s, &tv_r_Filter_17_271588_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18382_input: " << tbl_SerializeFromObject_TD_18382_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_417938_s, &tv_r_JOIN_INNER_17_417938_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18913_output: " << tbl_Filter_TD_18913_output.getNumRow() << " " << "tbl_Filter_TD_18615_output: " << tbl_Filter_TD_18615_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_370212_s, &tv_r_Project_17_370212_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18309_output: " << tbl_JOIN_INNER_TD_18309_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_364283_s, &tv_r_Filter_17_364283_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1865_input: " << tbl_SerializeFromObject_TD_1865_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_873976_s, &tv_r_JOIN_INNER_17_873976_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18640_output: " << tbl_Filter_TD_18640_output.getNumRow() << " " << "tbl_Filter_TD_18736_output: " << tbl_Filter_TD_18736_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_997898_s, &tv_r_Project_17_997898_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18462_output: " << tbl_JOIN_INNER_TD_18462_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_271094_s, &tv_r_Filter_17_271094_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1817_input: " << tbl_SerializeFromObject_TD_1817_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_449697_s, &tv_r_JOIN_INNER_17_449697_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18490_output: " << tbl_Filter_TD_18490_output.getNumRow() << " " << "tbl_Filter_TD_18269_output: " << tbl_Filter_TD_18269_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_768185_s, &tv_r_Project_17_768185_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1868_output: " << tbl_JOIN_INNER_TD_1868_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_683427_s, &tv_r_Filter_17_683427_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18200_input: " << tbl_SerializeFromObject_TD_18200_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_160478_s, &tv_r_JOIN_INNER_17_160478_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18917_output: " << tbl_Filter_TD_18917_output.getNumRow() << " " << "tbl_Filter_TD_18934_output: " << tbl_Filter_TD_18934_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_400519_s, &tv_r_Project_17_400519_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18658_output: " << tbl_JOIN_INNER_TD_18658_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_897028_s, &tv_r_Filter_17_897028_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_183_input: " << tbl_SerializeFromObject_TD_183_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_9776_s, &tv_r_JOIN_INNER_17_9776_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_18170_output: " << tbl_Filter_TD_18170_output.getNumRow() << " " << "tbl_Filter_TD_18859_output: " << tbl_Filter_TD_18859_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_17: " << tvdiff(&tv_r_Project_17_55895_s, &tv_r_Project_17_55895_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18539_output: " << tbl_JOIN_INNER_TD_18539_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_88044_s, &tv_r_JOIN_INNER_16_88044_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17757_output: " << tbl_JOIN_INNER_TD_17757_output.getNumRow() << " " << "tbl_Filter_TD_17529_output: " << tbl_Filter_TD_17529_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_200857_s, &tv_r_Aggregate_16_200857_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17123_output: " << tbl_Project_TD_17123_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_587894_s, &tv_r_JOIN_INNER_16_587894_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17337_output: " << tbl_JOIN_INNER_TD_17337_output.getNumRow() << " " << "tbl_Filter_TD_17941_output: " << tbl_Filter_TD_17941_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_429780_s, &tv_r_Aggregate_16_429780_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17967_output: " << tbl_Project_TD_17967_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_335467_s, &tv_r_JOIN_INNER_16_335467_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17364_output: " << tbl_JOIN_INNER_TD_17364_output.getNumRow() << " " << "tbl_Filter_TD_1756_output: " << tbl_Filter_TD_1756_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_65138_s, &tv_r_Aggregate_16_65138_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1763_output: " << tbl_Project_TD_1763_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_156744_s, &tv_r_JOIN_INNER_16_156744_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17260_output: " << tbl_JOIN_INNER_TD_17260_output.getNumRow() << " " << "tbl_Filter_TD_17632_output: " << tbl_Filter_TD_17632_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_630122_s, &tv_r_Aggregate_16_630122_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17992_output: " << tbl_Project_TD_17992_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_722209_s, &tv_r_JOIN_INNER_16_722209_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17921_output: " << tbl_JOIN_INNER_TD_17921_output.getNumRow() << " " << "tbl_Filter_TD_17751_output: " << tbl_Filter_TD_17751_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_781050_s, &tv_r_Aggregate_16_781050_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17995_output: " << tbl_Project_TD_17995_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_279152_s, &tv_r_JOIN_INNER_16_279152_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17571_output: " << tbl_JOIN_INNER_TD_17571_output.getNumRow() << " " << "tbl_Filter_TD_17213_output: " << tbl_Filter_TD_17213_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_16: " << tvdiff(&tv_r_Aggregate_16_790043_s, &tv_r_Aggregate_16_790043_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_17766_output: " << tbl_Project_TD_17766_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_709285_s, &tv_r_JOIN_LEFTSEMI_15_709285_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_16626_output: " << tbl_Aggregate_TD_16626_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16332_output: " << tbl_JOIN_INNER_TD_16332_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_505836_s, &tv_r_JOIN_LEFTSEMI_15_505836_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_16957_output: " << tbl_Aggregate_TD_16957_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16736_output: " << tbl_JOIN_INNER_TD_16736_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_204681_s, &tv_r_JOIN_LEFTSEMI_15_204681_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_16287_output: " << tbl_Aggregate_TD_16287_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16338_output: " << tbl_JOIN_INNER_TD_16338_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_414912_s, &tv_r_JOIN_LEFTSEMI_15_414912_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_16614_output: " << tbl_Aggregate_TD_16614_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16874_output: " << tbl_JOIN_INNER_TD_16874_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_925686_s, &tv_r_JOIN_LEFTSEMI_15_925686_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_16697_output: " << tbl_Aggregate_TD_16697_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16574_output: " << tbl_JOIN_INNER_TD_16574_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_15: " << tvdiff(&tv_r_JOIN_LEFTSEMI_15_120457_s, &tv_r_JOIN_LEFTSEMI_15_120457_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_164_output: " << tbl_Aggregate_TD_164_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_16625_output: " << tbl_JOIN_INNER_TD_16625_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_181162_s, &tv_r_Aggregate_14_181162_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_15617_output: " << tbl_JOIN_LEFTSEMI_TD_15617_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_262034_s, &tv_r_Filter_14_262034_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15176_input: " << tbl_SerializeFromObject_TD_15176_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_79411_s, &tv_r_Aggregate_14_79411_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_1578_output: " << tbl_JOIN_LEFTSEMI_TD_1578_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_735797_s, &tv_r_Filter_14_735797_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1547_input: " << tbl_SerializeFromObject_TD_1547_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_593021_s, &tv_r_Aggregate_14_593021_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_15325_output: " << tbl_JOIN_LEFTSEMI_TD_15325_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_71765_s, &tv_r_Filter_14_71765_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15738_input: " << tbl_SerializeFromObject_TD_15738_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_527491_s, &tv_r_Aggregate_14_527491_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_1512_output: " << tbl_JOIN_LEFTSEMI_TD_1512_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_505391_s, &tv_r_Filter_14_505391_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1598_input: " << tbl_SerializeFromObject_TD_1598_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_395949_s, &tv_r_Aggregate_14_395949_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_15848_output: " << tbl_JOIN_LEFTSEMI_TD_15848_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_486753_s, &tv_r_Filter_14_486753_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15765_input: " << tbl_SerializeFromObject_TD_15765_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_14: " << tvdiff(&tv_r_Aggregate_14_408724_s, &tv_r_Aggregate_14_408724_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_15633_output: " << tbl_JOIN_LEFTSEMI_TD_15633_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_813227_s, &tv_r_Filter_14_813227_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15835_input: " << tbl_SerializeFromObject_TD_15835_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_856253_s, &tv_r_JOIN_INNER_13_856253_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14901_output: " << tbl_Filter_TD_14901_output.getNumRow() << " " << "tbl_Aggregate_TD_14488_output: " << tbl_Aggregate_TD_14488_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_60750_s, &tv_r_JOIN_INNER_13_60750_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14627_output: " << tbl_Filter_TD_14627_output.getNumRow() << " " << "tbl_Aggregate_TD_14536_output: " << tbl_Aggregate_TD_14536_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_276161_s, &tv_r_JOIN_INNER_13_276161_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14419_output: " << tbl_Filter_TD_14419_output.getNumRow() << " " << "tbl_Aggregate_TD_14402_output: " << tbl_Aggregate_TD_14402_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_641102_s, &tv_r_JOIN_INNER_13_641102_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14967_output: " << tbl_Filter_TD_14967_output.getNumRow() << " " << "tbl_Aggregate_TD_14718_output: " << tbl_Aggregate_TD_14718_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_444470_s, &tv_r_JOIN_INNER_13_444470_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14642_output: " << tbl_Filter_TD_14642_output.getNumRow() << " " << "tbl_Aggregate_TD_14976_output: " << tbl_Aggregate_TD_14976_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_978747_s, &tv_r_JOIN_INNER_13_978747_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14496_output: " << tbl_Filter_TD_14496_output.getNumRow() << " " << "tbl_Aggregate_TD_14612_output: " << tbl_Aggregate_TD_14612_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_958413_s, &tv_r_Filter_12_958413_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13691_input: " << tbl_SerializeFromObject_TD_13691_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_744901_s, &tv_r_Filter_12_744901_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1362_input: " << tbl_SerializeFromObject_TD_1362_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_704505_s, &tv_r_Filter_12_704505_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13753_input: " << tbl_SerializeFromObject_TD_13753_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_433403_s, &tv_r_Filter_12_433403_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13889_input: " << tbl_SerializeFromObject_TD_13889_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_716044_s, &tv_r_Filter_12_716044_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13912_input: " << tbl_SerializeFromObject_TD_13912_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_204611_s, &tv_r_Filter_12_204611_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13448_input: " << tbl_SerializeFromObject_TD_13448_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_551986_s, &tv_r_Project_12_551986_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13338_output: " << tbl_JOIN_INNER_TD_13338_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_145757_s, &tv_r_Filter_12_145757_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1343_input: " << tbl_SerializeFromObject_TD_1343_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_331617_s, &tv_r_Project_12_331617_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13754_output: " << tbl_JOIN_INNER_TD_13754_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_425173_s, &tv_r_Filter_12_425173_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13580_input: " << tbl_SerializeFromObject_TD_13580_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_874797_s, &tv_r_Filter_12_874797_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13140_input: " << tbl_SerializeFromObject_TD_13140_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_351831_s, &tv_r_Filter_12_351831_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13889_input: " << tbl_SerializeFromObject_TD_13889_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_252578_s, &tv_r_Filter_12_252578_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13828_input: " << tbl_SerializeFromObject_TD_13828_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_347811_s, &tv_r_Filter_12_347811_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13747_input: " << tbl_SerializeFromObject_TD_13747_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_365762_s, &tv_r_Filter_12_365762_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13559_input: " << tbl_SerializeFromObject_TD_13559_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_156622_s, &tv_r_Filter_12_156622_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13633_input: " << tbl_SerializeFromObject_TD_13633_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_505368_s, &tv_r_Project_12_505368_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13882_output: " << tbl_JOIN_INNER_TD_13882_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_987205_s, &tv_r_Filter_12_987205_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13833_input: " << tbl_SerializeFromObject_TD_13833_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_827628_s, &tv_r_Project_12_827628_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13603_output: " << tbl_JOIN_INNER_TD_13603_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_98117_s, &tv_r_Filter_12_98117_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13140_input: " << tbl_SerializeFromObject_TD_13140_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_397538_s, &tv_r_Filter_12_397538_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13791_input: " << tbl_SerializeFromObject_TD_13791_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_807103_s, &tv_r_Filter_12_807103_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13873_input: " << tbl_SerializeFromObject_TD_13873_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_336504_s, &tv_r_Filter_12_336504_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13308_input: " << tbl_SerializeFromObject_TD_13308_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_620575_s, &tv_r_Filter_12_620575_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13944_input: " << tbl_SerializeFromObject_TD_13944_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_580601_s, &tv_r_Filter_12_580601_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13505_input: " << tbl_SerializeFromObject_TD_13505_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_154971_s, &tv_r_Filter_12_154971_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13299_input: " << tbl_SerializeFromObject_TD_13299_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_141017_s, &tv_r_Project_12_141017_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13763_output: " << tbl_JOIN_INNER_TD_13763_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_502674_s, &tv_r_Filter_12_502674_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13499_input: " << tbl_SerializeFromObject_TD_13499_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_12: " << tvdiff(&tv_r_Project_12_847181_s, &tv_r_Project_12_847181_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13722_output: " << tbl_JOIN_INNER_TD_13722_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_684002_s, &tv_r_Filter_12_684002_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13667_input: " << tbl_SerializeFromObject_TD_13667_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_535192_s, &tv_r_JOIN_INNER_11_535192_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12654_output: " << tbl_Filter_TD_12654_output.getNumRow() << " " << "tbl_Filter_TD_12130_output: " << tbl_Filter_TD_12130_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_719595_s, &tv_r_JOIN_INNER_11_719595_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12763_output: " << tbl_Filter_TD_12763_output.getNumRow() << " " << "tbl_Filter_TD_12866_output: " << tbl_Filter_TD_12866_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_359951_s, &tv_r_JOIN_INNER_11_359951_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1212_output: " << tbl_Filter_TD_1212_output.getNumRow() << " " << "tbl_Filter_TD_12502_output: " << tbl_Filter_TD_12502_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_974262_s, &tv_r_JOIN_LEFTSEMI_11_974262_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12481_output: " << tbl_Filter_TD_12481_output.getNumRow() << " " << "tbl_Project_TD_12700_output: " << tbl_Project_TD_12700_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_92776_s, &tv_r_JOIN_LEFTSEMI_11_92776_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12745_output: " << tbl_Filter_TD_12745_output.getNumRow() << " " << "tbl_Project_TD_12881_output: " << tbl_Project_TD_12881_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_489271_s, &tv_r_JOIN_INNER_11_489271_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12645_output: " << tbl_Filter_TD_12645_output.getNumRow() << " " << "tbl_Filter_TD_12676_output: " << tbl_Filter_TD_12676_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_699912_s, &tv_r_JOIN_INNER_11_699912_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12623_output: " << tbl_Filter_TD_12623_output.getNumRow() << " " << "tbl_Filter_TD_12678_output: " << tbl_Filter_TD_12678_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_237263_s, &tv_r_JOIN_INNER_11_237263_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12711_output: " << tbl_Filter_TD_12711_output.getNumRow() << " " << "tbl_Filter_TD_12802_output: " << tbl_Filter_TD_12802_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_336408_s, &tv_r_JOIN_LEFTSEMI_11_336408_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12646_output: " << tbl_Filter_TD_12646_output.getNumRow() << " " << "tbl_Project_TD_12738_output: " << tbl_Project_TD_12738_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_238357_s, &tv_r_JOIN_LEFTSEMI_11_238357_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12332_output: " << tbl_Filter_TD_12332_output.getNumRow() << " " << "tbl_Project_TD_12270_output: " << tbl_Project_TD_12270_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_812966_s, &tv_r_JOIN_INNER_11_812966_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12285_output: " << tbl_Filter_TD_12285_output.getNumRow() << " " << "tbl_Filter_TD_12881_output: " << tbl_Filter_TD_12881_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_581520_s, &tv_r_JOIN_INNER_11_581520_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12834_output: " << tbl_Filter_TD_12834_output.getNumRow() << " " << "tbl_Filter_TD_1229_output: " << tbl_Filter_TD_1229_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_818913_s, &tv_r_JOIN_INNER_11_818913_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12354_output: " << tbl_Filter_TD_12354_output.getNumRow() << " " << "tbl_Filter_TD_12671_output: " << tbl_Filter_TD_12671_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_403670_s, &tv_r_JOIN_LEFTSEMI_11_403670_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12604_output: " << tbl_Filter_TD_12604_output.getNumRow() << " " << "tbl_Project_TD_1223_output: " << tbl_Project_TD_1223_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_11: " << tvdiff(&tv_r_JOIN_LEFTSEMI_11_257943_s, &tv_r_JOIN_LEFTSEMI_11_257943_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12286_output: " << tbl_Filter_TD_12286_output.getNumRow() << " " << "tbl_Project_TD_12137_output: " << tbl_Project_TD_12137_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_720133_s, &tv_r_Project_10_720133_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11446_output: " << tbl_JOIN_INNER_TD_11446_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_869791_s, &tv_r_Project_10_869791_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1162_output: " << tbl_JOIN_INNER_TD_1162_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_641550_s, &tv_r_Project_10_641550_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11482_output: " << tbl_JOIN_INNER_TD_11482_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_271886_s, &tv_r_Filter_10_271886_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11820_input: " << tbl_SerializeFromObject_TD_11820_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_96700_s, &tv_r_JOIN_INNER_10_96700_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_11641_output: " << tbl_JOIN_LEFTSEMI_TD_11641_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_11290_output: " << tbl_JOIN_LEFTSEMI_TD_11290_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_30749_s, &tv_r_Project_10_30749_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11408_output: " << tbl_JOIN_INNER_TD_11408_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_654010_s, &tv_r_Project_10_654010_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1175_output: " << tbl_JOIN_INNER_TD_1175_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_437987_s, &tv_r_Project_10_437987_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11961_output: " << tbl_JOIN_INNER_TD_11961_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_471741_s, &tv_r_Filter_10_471741_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11547_input: " << tbl_SerializeFromObject_TD_11547_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_305865_s, &tv_r_JOIN_INNER_10_305865_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_11655_output: " << tbl_JOIN_LEFTSEMI_TD_11655_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_11161_output: " << tbl_JOIN_LEFTSEMI_TD_11161_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_596109_s, &tv_r_Project_10_596109_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1191_output: " << tbl_JOIN_INNER_TD_1191_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_764695_s, &tv_r_Project_10_764695_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11837_output: " << tbl_JOIN_INNER_TD_11837_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_481126_s, &tv_r_Project_10_481126_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11621_output: " << tbl_JOIN_INNER_TD_11621_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_297030_s, &tv_r_Filter_10_297030_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11951_input: " << tbl_SerializeFromObject_TD_11951_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_820313_s, &tv_r_JOIN_INNER_10_820313_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_1169_output: " << tbl_JOIN_LEFTSEMI_TD_1169_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_11737_output: " << tbl_JOIN_LEFTSEMI_TD_11737_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_946101_s, &tv_r_Union_9_946101_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10121_output: " << tbl_Project_TD_10121_output.getNumRow() << " " << "tbl_Project_TD_10502_output: " << tbl_Project_TD_10502_output.getNumRow() << " " << "tbl_Project_TD_10595_output: " << tbl_Project_TD_10595_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_344552_s, &tv_r_JOIN_INNER_9_344552_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10323_output: " << tbl_JOIN_INNER_TD_10323_output.getNumRow() << " " << "tbl_Filter_TD_1013_output: " << tbl_Filter_TD_1013_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_50848_s, &tv_r_Union_9_50848_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10583_output: " << tbl_Project_TD_10583_output.getNumRow() << " " << "tbl_Project_TD_10750_output: " << tbl_Project_TD_10750_output.getNumRow() << " " << "tbl_Project_TD_1031_output: " << tbl_Project_TD_1031_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_577303_s, &tv_r_JOIN_INNER_9_577303_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10647_output: " << tbl_JOIN_INNER_TD_10647_output.getNumRow() << " " << "tbl_Filter_TD_10713_output: " << tbl_Filter_TD_10713_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_889939_s, &tv_r_Union_9_889939_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10364_output: " << tbl_Project_TD_10364_output.getNumRow() << " " << "tbl_Project_TD_10581_output: " << tbl_Project_TD_10581_output.getNumRow() << " " << "tbl_Project_TD_10123_output: " << tbl_Project_TD_10123_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_364504_s, &tv_r_JOIN_INNER_9_364504_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10740_output: " << tbl_JOIN_INNER_TD_10740_output.getNumRow() << " " << "tbl_Filter_TD_1059_output: " << tbl_Filter_TD_1059_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_997147_s, &tv_r_Aggregate_8_997147_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9949_output: " << tbl_Union_TD_9949_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_834323_s, &tv_r_Aggregate_8_834323_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9862_output: " << tbl_JOIN_INNER_TD_9862_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_395576_s, &tv_r_Aggregate_8_395576_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9308_output: " << tbl_Union_TD_9308_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_297522_s, &tv_r_Aggregate_8_297522_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_963_output: " << tbl_JOIN_INNER_TD_963_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_928804_s, &tv_r_Aggregate_8_928804_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9347_output: " << tbl_Union_TD_9347_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_602871_s, &tv_r_Aggregate_8_602871_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9455_output: " << tbl_JOIN_INNER_TD_9455_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_546456_s, &tv_r_Filter_7_546456_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_816_output: " << tbl_Aggregate_TD_816_output.getNumRow() << " " << "tbl_Aggregate_TD_8808_output: " << tbl_Aggregate_TD_8808_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_721329_s, &tv_r_Filter_7_721329_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8835_output: " << tbl_Aggregate_TD_8835_output.getNumRow() << " " << "tbl_Aggregate_TD_8810_output: " << tbl_Aggregate_TD_8810_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_645801_s, &tv_r_Filter_7_645801_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8818_output: " << tbl_Aggregate_TD_8818_output.getNumRow() << " " << "tbl_Aggregate_TD_8310_output: " << tbl_Aggregate_TD_8310_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_218289_s, &tv_r_Project_6_218289_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7522_output: " << tbl_Filter_TD_7522_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_538298_s, &tv_r_Project_6_538298_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7865_output: " << tbl_Filter_TD_7865_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_240452_s, &tv_r_Project_6_240452_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7569_output: " << tbl_Filter_TD_7569_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_5: " << tvdiff(&tv_r_Union_5_99588_s, &tv_r_Union_5_99588_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6597_output: " << tbl_Project_TD_6597_output.getNumRow() << " " << "tbl_Project_TD_6100_output: " << tbl_Project_TD_6100_output.getNumRow() << " " << "tbl_Project_TD_6237_output: " << tbl_Project_TD_6237_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_596804_s, &tv_r_Expand_4_596804_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_5437_output: " << tbl_Union_TD_5437_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_984698_s, &tv_r_Aggregate_3_984698_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4900_output: " << tbl_Expand_TD_4900_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_587309_s, &tv_r_Sort_2_587309_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3894_output: " << tbl_Aggregate_TD_3894_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_385042_s, &tv_r_LocalLimit_1_385042_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2396_output: " << tbl_Sort_TD_2396_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_907240_s, &tv_r_GlobalLimit_0_907240_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1625_output: " << tbl_LocalLimit_TD_1625_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 12.7893305 * 1000 << "ms" << std::endl; 
    return 0; 
}
