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

#include "cfgFunc_q75.hpp" 
#include "q75.hpp" 

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
    std::cout << "NOTE:running query #75\n."; 
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
    Table tbl_GlobalLimit_TD_0245_output("tbl_GlobalLimit_TD_0245_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_0245_output.allocateHost();
    Table tbl_LocalLimit_TD_1405_output("tbl_LocalLimit_TD_1405_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1405_output.allocateHost();
    Table tbl_Sort_TD_2173_output("tbl_Sort_TD_2173_output", 6100000, 10, "");
    tbl_Sort_TD_2173_output.allocateHost();
    Table tbl_Project_TD_325_output("tbl_Project_TD_325_output", 6100000, 10, "");
    tbl_Project_TD_325_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4103_output("tbl_JOIN_INNER_TD_4103_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_4103_output.allocateHost();
    Table tbl_Aggregate_TD_5224_output("tbl_Aggregate_TD_5224_output", 6100000, 7, "");
    tbl_Aggregate_TD_5224_output.allocateHost();
    Table tbl_Aggregate_TD_5619_output("tbl_Aggregate_TD_5619_output", 6100000, 7, "");
    tbl_Aggregate_TD_5619_output.allocateHost();
    Table tbl_Aggregate_TD_6822_output("tbl_Aggregate_TD_6822_output", 6100000, 7, "");
    tbl_Aggregate_TD_6822_output.allocateHost();
    Table tbl_Aggregate_TD_6400_output("tbl_Aggregate_TD_6400_output", 6100000, 7, "");
    tbl_Aggregate_TD_6400_output.allocateHost();
    Table tbl_Union_TD_7735_output("tbl_Union_TD_7735_output", 6100000, 7, "");
    tbl_Union_TD_7735_output.allocateHost();
    Table tbl_Union_TD_7865_output("tbl_Union_TD_7865_output", 6100000, 7, "");
    tbl_Union_TD_7865_output.allocateHost();
    Table tbl_Project_TD_854_output("tbl_Project_TD_854_output", 6100000, 7, "");
    tbl_Project_TD_854_output.allocateHost();
    Table tbl_Project_TD_8574_output("tbl_Project_TD_8574_output", 6100000, 7, "");
    tbl_Project_TD_8574_output.allocateHost();
    Table tbl_Project_TD_8196_output("tbl_Project_TD_8196_output", 6100000, 7, "");
    tbl_Project_TD_8196_output.allocateHost();
    Table tbl_Project_TD_8867_output("tbl_Project_TD_8867_output", 6100000, 7, "");
    tbl_Project_TD_8867_output.allocateHost();
    Table tbl_Project_TD_8456_output("tbl_Project_TD_8456_output", 6100000, 7, "");
    tbl_Project_TD_8456_output.allocateHost();
    Table tbl_Project_TD_8978_output("tbl_Project_TD_8978_output", 6100000, 7, "");
    tbl_Project_TD_8978_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9192_output("tbl_JOIN_LEFTOUTER_TD_9192_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_9192_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9362_output("tbl_JOIN_LEFTOUTER_TD_9362_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_9362_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_951_output("tbl_JOIN_LEFTOUTER_TD_951_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_951_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_97_output("tbl_JOIN_LEFTOUTER_TD_97_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_97_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9485_output("tbl_JOIN_LEFTOUTER_TD_9485_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_9485_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_946_output("tbl_JOIN_LEFTOUTER_TD_946_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_946_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10587_output("tbl_JOIN_INNER_TD_10587_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10587_output.allocateHost();
    Table tbl_Filter_TD_10579_output("tbl_Filter_TD_10579_output", 6100000, 4, "");
    tbl_Filter_TD_10579_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10377_output("tbl_JOIN_INNER_TD_10377_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10377_output.allocateHost();
    Table tbl_Filter_TD_10297_output("tbl_Filter_TD_10297_output", 6100000, 4, "");
    tbl_Filter_TD_10297_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10415_output("tbl_JOIN_INNER_TD_10415_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10415_output.allocateHost();
    Table tbl_Filter_TD_10602_output("tbl_Filter_TD_10602_output", 6100000, 4, "");
    tbl_Filter_TD_10602_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10611_output("tbl_JOIN_INNER_TD_10611_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10611_output.allocateHost();
    Table tbl_Filter_TD_10332_output("tbl_Filter_TD_10332_output", 6100000, 4, "");
    tbl_Filter_TD_10332_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10227_output("tbl_JOIN_INNER_TD_10227_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10227_output.allocateHost();
    Table tbl_Filter_TD_10856_output("tbl_Filter_TD_10856_output", 6100000, 4, "");
    tbl_Filter_TD_10856_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10409_output("tbl_JOIN_INNER_TD_10409_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10409_output.allocateHost();
    Table tbl_Filter_TD_10227_output("tbl_Filter_TD_10227_output", 6100000, 4, "");
    tbl_Filter_TD_10227_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11247_output("tbl_JOIN_INNER_TD_11247_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11247_output.allocateHost();
    Table tbl_Filter_TD_1132_output("tbl_Filter_TD_1132_output", 6100000, 2, "");
    tbl_Filter_TD_1132_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11440_input;
    tbl_SerializeFromObject_TD_11440_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11440_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_11440_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_11440_input.addCol("cr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11440_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_11440_input.allocateHost();
    tbl_SerializeFromObject_TD_11440_input.loadHost();
    Table tbl_JOIN_INNER_TD_11452_output("tbl_JOIN_INNER_TD_11452_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11452_output.allocateHost();
    Table tbl_Filter_TD_11967_output("tbl_Filter_TD_11967_output", 6100000, 2, "");
    tbl_Filter_TD_11967_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11120_input;
    tbl_SerializeFromObject_TD_11120_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11120_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_11120_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_11120_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11120_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_11120_input.allocateHost();
    tbl_SerializeFromObject_TD_11120_input.loadHost();
    Table tbl_JOIN_INNER_TD_11872_output("tbl_JOIN_INNER_TD_11872_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11872_output.allocateHost();
    Table tbl_Filter_TD_11365_output("tbl_Filter_TD_11365_output", 6100000, 2, "");
    tbl_Filter_TD_11365_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11758_input;
    tbl_SerializeFromObject_TD_11758_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11758_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_11758_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_11758_input.addCol("wr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11758_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_11758_input.allocateHost();
    tbl_SerializeFromObject_TD_11758_input.loadHost();
    Table tbl_JOIN_INNER_TD_11561_output("tbl_JOIN_INNER_TD_11561_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11561_output.allocateHost();
    Table tbl_Filter_TD_11361_output("tbl_Filter_TD_11361_output", 6100000, 2, "");
    tbl_Filter_TD_11361_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11906_input;
    tbl_SerializeFromObject_TD_11906_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11906_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_11906_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_11906_input.addCol("cr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11906_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_11906_input.allocateHost();
    tbl_SerializeFromObject_TD_11906_input.loadHost();
    Table tbl_JOIN_INNER_TD_11821_output("tbl_JOIN_INNER_TD_11821_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11821_output.allocateHost();
    Table tbl_Filter_TD_11517_output("tbl_Filter_TD_11517_output", 6100000, 2, "");
    tbl_Filter_TD_11517_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11311_input;
    tbl_SerializeFromObject_TD_11311_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11311_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_11311_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_11311_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11311_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_11311_input.allocateHost();
    tbl_SerializeFromObject_TD_11311_input.loadHost();
    Table tbl_JOIN_INNER_TD_11993_output("tbl_JOIN_INNER_TD_11993_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11993_output.allocateHost();
    Table tbl_Filter_TD_11610_output("tbl_Filter_TD_11610_output", 6100000, 2, "");
    tbl_Filter_TD_11610_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11898_input;
    tbl_SerializeFromObject_TD_11898_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11898_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_11898_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_11898_input.addCol("wr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11898_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_11898_input.allocateHost();
    tbl_SerializeFromObject_TD_11898_input.loadHost();
    Table tbl_Filter_TD_12653_output("tbl_Filter_TD_12653_output", 6100000, 5, "");
    tbl_Filter_TD_12653_output.allocateHost();
    Table tbl_Filter_TD_12692_output("tbl_Filter_TD_12692_output", 6100000, 5, "");
    tbl_Filter_TD_12692_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12447_input;
    tbl_SerializeFromObject_TD_12447_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12447_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12447_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12447_input.allocateHost();
    tbl_SerializeFromObject_TD_12447_input.loadHost();
    Table tbl_Filter_TD_12175_output("tbl_Filter_TD_12175_output", 6100000, 5, "");
    tbl_Filter_TD_12175_output.allocateHost();
    Table tbl_Filter_TD_12389_output("tbl_Filter_TD_12389_output", 6100000, 5, "");
    tbl_Filter_TD_12389_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12200_input;
    tbl_SerializeFromObject_TD_12200_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12200_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12200_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12200_input.allocateHost();
    tbl_SerializeFromObject_TD_12200_input.loadHost();
    Table tbl_Filter_TD_12627_output("tbl_Filter_TD_12627_output", 6100000, 5, "");
    tbl_Filter_TD_12627_output.allocateHost();
    Table tbl_Filter_TD_12894_output("tbl_Filter_TD_12894_output", 6100000, 5, "");
    tbl_Filter_TD_12894_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12227_input;
    tbl_SerializeFromObject_TD_12227_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12227_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12227_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12227_input.allocateHost();
    tbl_SerializeFromObject_TD_12227_input.loadHost();
    Table tbl_Filter_TD_12636_output("tbl_Filter_TD_12636_output", 6100000, 5, "");
    tbl_Filter_TD_12636_output.allocateHost();
    Table tbl_Filter_TD_12473_output("tbl_Filter_TD_12473_output", 6100000, 5, "");
    tbl_Filter_TD_12473_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12371_input;
    tbl_SerializeFromObject_TD_12371_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12371_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12371_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12371_input.allocateHost();
    tbl_SerializeFromObject_TD_12371_input.loadHost();
    Table tbl_Filter_TD_12474_output("tbl_Filter_TD_12474_output", 6100000, 5, "");
    tbl_Filter_TD_12474_output.allocateHost();
    Table tbl_Filter_TD_12292_output("tbl_Filter_TD_12292_output", 6100000, 5, "");
    tbl_Filter_TD_12292_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12509_input;
    tbl_SerializeFromObject_TD_12509_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12509_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12509_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12509_input.allocateHost();
    tbl_SerializeFromObject_TD_12509_input.loadHost();
    Table tbl_Filter_TD_12140_output("tbl_Filter_TD_12140_output", 6100000, 5, "");
    tbl_Filter_TD_12140_output.allocateHost();
    Table tbl_Filter_TD_12907_output("tbl_Filter_TD_12907_output", 6100000, 5, "");
    tbl_Filter_TD_12907_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12248_input;
    tbl_SerializeFromObject_TD_12248_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12248_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12248_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12248_input.allocateHost();
    tbl_SerializeFromObject_TD_12248_input.loadHost();
    Table tbl_SerializeFromObject_TD_13863_input;
    tbl_SerializeFromObject_TD_13863_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13863_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13863_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13863_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_13863_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13863_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13863_input.allocateHost();
    tbl_SerializeFromObject_TD_13863_input.loadHost();
    Table tbl_SerializeFromObject_TD_13269_input;
    tbl_SerializeFromObject_TD_13269_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13269_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13269_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13269_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13269_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13269_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13269_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13269_input.allocateHost();
    tbl_SerializeFromObject_TD_13269_input.loadHost();
    Table tbl_SerializeFromObject_TD_13691_input;
    tbl_SerializeFromObject_TD_13691_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13691_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13691_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13691_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_13691_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13691_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13691_input.allocateHost();
    tbl_SerializeFromObject_TD_13691_input.loadHost();
    Table tbl_SerializeFromObject_TD_13637_input;
    tbl_SerializeFromObject_TD_13637_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13637_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13637_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13637_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13637_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13637_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13637_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13637_input.allocateHost();
    tbl_SerializeFromObject_TD_13637_input.loadHost();
    Table tbl_SerializeFromObject_TD_131_input;
    tbl_SerializeFromObject_TD_131_input = Table("web_sales", web_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_131_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_131_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_131_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_131_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_131_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_131_input.allocateHost();
    tbl_SerializeFromObject_TD_131_input.loadHost();
    Table tbl_SerializeFromObject_TD_13761_input;
    tbl_SerializeFromObject_TD_13761_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13761_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13761_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13761_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13761_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13761_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13761_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13761_input.allocateHost();
    tbl_SerializeFromObject_TD_13761_input.loadHost();
    Table tbl_SerializeFromObject_TD_13682_input;
    tbl_SerializeFromObject_TD_13682_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13682_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13682_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13682_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_13682_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13682_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13682_input.allocateHost();
    tbl_SerializeFromObject_TD_13682_input.loadHost();
    Table tbl_SerializeFromObject_TD_13613_input;
    tbl_SerializeFromObject_TD_13613_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13613_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13613_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13613_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13613_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13613_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13613_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13613_input.allocateHost();
    tbl_SerializeFromObject_TD_13613_input.loadHost();
    Table tbl_SerializeFromObject_TD_13863_input;
    tbl_SerializeFromObject_TD_13863_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13863_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13863_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13863_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_13863_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13863_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13863_input.allocateHost();
    tbl_SerializeFromObject_TD_13863_input.loadHost();
    Table tbl_SerializeFromObject_TD_13146_input;
    tbl_SerializeFromObject_TD_13146_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13146_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13146_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13146_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13146_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13146_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13146_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13146_input.allocateHost();
    tbl_SerializeFromObject_TD_13146_input.loadHost();
    Table tbl_SerializeFromObject_TD_1393_input;
    tbl_SerializeFromObject_TD_1393_input = Table("web_sales", web_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_1393_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1393_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_1393_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_1393_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_1393_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1393_input.allocateHost();
    tbl_SerializeFromObject_TD_1393_input.loadHost();
    Table tbl_SerializeFromObject_TD_13876_input;
    tbl_SerializeFromObject_TD_13876_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13876_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13876_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13876_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13876_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13876_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13876_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13876_input.allocateHost();
    tbl_SerializeFromObject_TD_13876_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_122676_s, tv_r_Filter_12_122676_e;
    gettimeofday(&tv_r_Filter_12_122676_s, 0);
    SW_Filter_TD_12907(tbl_SerializeFromObject_TD_13876_input, tbl_Filter_TD_12907_output);
    gettimeofday(&tv_r_Filter_12_122676_e, 0);

    struct timeval tv_r_Filter_12_962704_s, tv_r_Filter_12_962704_e;
    gettimeofday(&tv_r_Filter_12_962704_s, 0);
    SW_Filter_TD_12140(tbl_SerializeFromObject_TD_1393_input, tbl_Filter_TD_12140_output);
    gettimeofday(&tv_r_Filter_12_962704_e, 0);

    struct timeval tv_r_Filter_12_101915_s, tv_r_Filter_12_101915_e;
    gettimeofday(&tv_r_Filter_12_101915_s, 0);
    SW_Filter_TD_12292(tbl_SerializeFromObject_TD_13146_input, tbl_Filter_TD_12292_output);
    gettimeofday(&tv_r_Filter_12_101915_e, 0);

    struct timeval tv_r_Filter_12_843529_s, tv_r_Filter_12_843529_e;
    gettimeofday(&tv_r_Filter_12_843529_s, 0);
    SW_Filter_TD_12474(tbl_SerializeFromObject_TD_13863_input, tbl_Filter_TD_12474_output);
    gettimeofday(&tv_r_Filter_12_843529_e, 0);

    struct timeval tv_r_Filter_12_562416_s, tv_r_Filter_12_562416_e;
    gettimeofday(&tv_r_Filter_12_562416_s, 0);
    SW_Filter_TD_12473(tbl_SerializeFromObject_TD_13613_input, tbl_Filter_TD_12473_output);
    gettimeofday(&tv_r_Filter_12_562416_e, 0);

    struct timeval tv_r_Filter_12_89805_s, tv_r_Filter_12_89805_e;
    gettimeofday(&tv_r_Filter_12_89805_s, 0);
    SW_Filter_TD_12636(tbl_SerializeFromObject_TD_13682_input, tbl_Filter_TD_12636_output);
    gettimeofday(&tv_r_Filter_12_89805_e, 0);

    struct timeval tv_r_Filter_12_133286_s, tv_r_Filter_12_133286_e;
    gettimeofday(&tv_r_Filter_12_133286_s, 0);
    SW_Filter_TD_12894(tbl_SerializeFromObject_TD_13761_input, tbl_Filter_TD_12894_output);
    gettimeofday(&tv_r_Filter_12_133286_e, 0);

    struct timeval tv_r_Filter_12_414967_s, tv_r_Filter_12_414967_e;
    gettimeofday(&tv_r_Filter_12_414967_s, 0);
    SW_Filter_TD_12627(tbl_SerializeFromObject_TD_131_input, tbl_Filter_TD_12627_output);
    gettimeofday(&tv_r_Filter_12_414967_e, 0);

    struct timeval tv_r_Filter_12_567024_s, tv_r_Filter_12_567024_e;
    gettimeofday(&tv_r_Filter_12_567024_s, 0);
    SW_Filter_TD_12389(tbl_SerializeFromObject_TD_13637_input, tbl_Filter_TD_12389_output);
    gettimeofday(&tv_r_Filter_12_567024_e, 0);

    struct timeval tv_r_Filter_12_729744_s, tv_r_Filter_12_729744_e;
    gettimeofday(&tv_r_Filter_12_729744_s, 0);
    SW_Filter_TD_12175(tbl_SerializeFromObject_TD_13691_input, tbl_Filter_TD_12175_output);
    gettimeofday(&tv_r_Filter_12_729744_e, 0);

    struct timeval tv_r_Filter_12_827583_s, tv_r_Filter_12_827583_e;
    gettimeofday(&tv_r_Filter_12_827583_s, 0);
    SW_Filter_TD_12692(tbl_SerializeFromObject_TD_13269_input, tbl_Filter_TD_12692_output);
    gettimeofday(&tv_r_Filter_12_827583_e, 0);

    struct timeval tv_r_Filter_12_699275_s, tv_r_Filter_12_699275_e;
    gettimeofday(&tv_r_Filter_12_699275_s, 0);
    SW_Filter_TD_12653(tbl_SerializeFromObject_TD_13863_input, tbl_Filter_TD_12653_output);
    gettimeofday(&tv_r_Filter_12_699275_e, 0);

    struct timeval tv_r_Filter_11_767534_s, tv_r_Filter_11_767534_e;
    gettimeofday(&tv_r_Filter_11_767534_s, 0);
    SW_Filter_TD_11610(tbl_SerializeFromObject_TD_12248_input, tbl_Filter_TD_11610_output);
    gettimeofday(&tv_r_Filter_11_767534_e, 0);

    struct timeval tv_r_JOIN_INNER_11_372748_s, tv_r_JOIN_INNER_11_372748_e;
    gettimeofday(&tv_r_JOIN_INNER_11_372748_s, 0);
    SW_JOIN_INNER_TD_11993(tbl_Filter_TD_12140_output, tbl_Filter_TD_12907_output, tbl_JOIN_INNER_TD_11993_output);
    gettimeofday(&tv_r_JOIN_INNER_11_372748_e, 0);

    struct timeval tv_r_Filter_11_576568_s, tv_r_Filter_11_576568_e;
    gettimeofday(&tv_r_Filter_11_576568_s, 0);
    SW_Filter_TD_11517(tbl_SerializeFromObject_TD_12509_input, tbl_Filter_TD_11517_output);
    gettimeofday(&tv_r_Filter_11_576568_e, 0);

    struct timeval tv_r_JOIN_INNER_11_282355_s, tv_r_JOIN_INNER_11_282355_e;
    gettimeofday(&tv_r_JOIN_INNER_11_282355_s, 0);
    SW_JOIN_INNER_TD_11821(tbl_Filter_TD_12474_output, tbl_Filter_TD_12292_output, tbl_JOIN_INNER_TD_11821_output);
    gettimeofday(&tv_r_JOIN_INNER_11_282355_e, 0);

    struct timeval tv_r_Filter_11_793047_s, tv_r_Filter_11_793047_e;
    gettimeofday(&tv_r_Filter_11_793047_s, 0);
    SW_Filter_TD_11361(tbl_SerializeFromObject_TD_12371_input, tbl_Filter_TD_11361_output);
    gettimeofday(&tv_r_Filter_11_793047_e, 0);

    struct timeval tv_r_JOIN_INNER_11_495199_s, tv_r_JOIN_INNER_11_495199_e;
    gettimeofday(&tv_r_JOIN_INNER_11_495199_s, 0);
    SW_JOIN_INNER_TD_11561(tbl_Filter_TD_12636_output, tbl_Filter_TD_12473_output, tbl_JOIN_INNER_TD_11561_output);
    gettimeofday(&tv_r_JOIN_INNER_11_495199_e, 0);

    struct timeval tv_r_Filter_11_224328_s, tv_r_Filter_11_224328_e;
    gettimeofday(&tv_r_Filter_11_224328_s, 0);
    SW_Filter_TD_11365(tbl_SerializeFromObject_TD_12227_input, tbl_Filter_TD_11365_output);
    gettimeofday(&tv_r_Filter_11_224328_e, 0);

    struct timeval tv_r_JOIN_INNER_11_120023_s, tv_r_JOIN_INNER_11_120023_e;
    gettimeofday(&tv_r_JOIN_INNER_11_120023_s, 0);
    SW_JOIN_INNER_TD_11872(tbl_Filter_TD_12627_output, tbl_Filter_TD_12894_output, tbl_JOIN_INNER_TD_11872_output);
    gettimeofday(&tv_r_JOIN_INNER_11_120023_e, 0);

    struct timeval tv_r_Filter_11_255543_s, tv_r_Filter_11_255543_e;
    gettimeofday(&tv_r_Filter_11_255543_s, 0);
    SW_Filter_TD_11967(tbl_SerializeFromObject_TD_12200_input, tbl_Filter_TD_11967_output);
    gettimeofday(&tv_r_Filter_11_255543_e, 0);

    struct timeval tv_r_JOIN_INNER_11_889690_s, tv_r_JOIN_INNER_11_889690_e;
    gettimeofday(&tv_r_JOIN_INNER_11_889690_s, 0);
    SW_JOIN_INNER_TD_11452(tbl_Filter_TD_12175_output, tbl_Filter_TD_12389_output, tbl_JOIN_INNER_TD_11452_output);
    gettimeofday(&tv_r_JOIN_INNER_11_889690_e, 0);

    struct timeval tv_r_Filter_11_574802_s, tv_r_Filter_11_574802_e;
    gettimeofday(&tv_r_Filter_11_574802_s, 0);
    SW_Filter_TD_1132(tbl_SerializeFromObject_TD_12447_input, tbl_Filter_TD_1132_output);
    gettimeofday(&tv_r_Filter_11_574802_e, 0);

    struct timeval tv_r_JOIN_INNER_11_145718_s, tv_r_JOIN_INNER_11_145718_e;
    gettimeofday(&tv_r_JOIN_INNER_11_145718_s, 0);
    SW_JOIN_INNER_TD_11247(tbl_Filter_TD_12653_output, tbl_Filter_TD_12692_output, tbl_JOIN_INNER_TD_11247_output);
    gettimeofday(&tv_r_JOIN_INNER_11_145718_e, 0);

    struct timeval tv_r_Filter_10_598548_s, tv_r_Filter_10_598548_e;
    gettimeofday(&tv_r_Filter_10_598548_s, 0);
    SW_Filter_TD_10227(tbl_SerializeFromObject_TD_11898_input, tbl_Filter_TD_10227_output);
    gettimeofday(&tv_r_Filter_10_598548_e, 0);

    struct timeval tv_r_JOIN_INNER_10_189296_s, tv_r_JOIN_INNER_10_189296_e;
    gettimeofday(&tv_r_JOIN_INNER_10_189296_s, 0);
    SW_JOIN_INNER_TD_10409(tbl_JOIN_INNER_TD_11993_output, tbl_Filter_TD_11610_output, tbl_JOIN_INNER_TD_10409_output);
    gettimeofday(&tv_r_JOIN_INNER_10_189296_e, 0);

    struct timeval tv_r_Filter_10_167231_s, tv_r_Filter_10_167231_e;
    gettimeofday(&tv_r_Filter_10_167231_s, 0);
    SW_Filter_TD_10856(tbl_SerializeFromObject_TD_11311_input, tbl_Filter_TD_10856_output);
    gettimeofday(&tv_r_Filter_10_167231_e, 0);

    struct timeval tv_r_JOIN_INNER_10_468254_s, tv_r_JOIN_INNER_10_468254_e;
    gettimeofday(&tv_r_JOIN_INNER_10_468254_s, 0);
    SW_JOIN_INNER_TD_10227(tbl_JOIN_INNER_TD_11821_output, tbl_Filter_TD_11517_output, tbl_JOIN_INNER_TD_10227_output);
    gettimeofday(&tv_r_JOIN_INNER_10_468254_e, 0);

    struct timeval tv_r_Filter_10_434838_s, tv_r_Filter_10_434838_e;
    gettimeofday(&tv_r_Filter_10_434838_s, 0);
    SW_Filter_TD_10332(tbl_SerializeFromObject_TD_11906_input, tbl_Filter_TD_10332_output);
    gettimeofday(&tv_r_Filter_10_434838_e, 0);

    struct timeval tv_r_JOIN_INNER_10_499322_s, tv_r_JOIN_INNER_10_499322_e;
    gettimeofday(&tv_r_JOIN_INNER_10_499322_s, 0);
    SW_JOIN_INNER_TD_10611(tbl_JOIN_INNER_TD_11561_output, tbl_Filter_TD_11361_output, tbl_JOIN_INNER_TD_10611_output);
    gettimeofday(&tv_r_JOIN_INNER_10_499322_e, 0);

    struct timeval tv_r_Filter_10_902919_s, tv_r_Filter_10_902919_e;
    gettimeofday(&tv_r_Filter_10_902919_s, 0);
    SW_Filter_TD_10602(tbl_SerializeFromObject_TD_11758_input, tbl_Filter_TD_10602_output);
    gettimeofday(&tv_r_Filter_10_902919_e, 0);

    struct timeval tv_r_JOIN_INNER_10_280264_s, tv_r_JOIN_INNER_10_280264_e;
    gettimeofday(&tv_r_JOIN_INNER_10_280264_s, 0);
    SW_JOIN_INNER_TD_10415(tbl_JOIN_INNER_TD_11872_output, tbl_Filter_TD_11365_output, tbl_JOIN_INNER_TD_10415_output);
    gettimeofday(&tv_r_JOIN_INNER_10_280264_e, 0);

    struct timeval tv_r_Filter_10_832291_s, tv_r_Filter_10_832291_e;
    gettimeofday(&tv_r_Filter_10_832291_s, 0);
    SW_Filter_TD_10297(tbl_SerializeFromObject_TD_11120_input, tbl_Filter_TD_10297_output);
    gettimeofday(&tv_r_Filter_10_832291_e, 0);

    struct timeval tv_r_JOIN_INNER_10_715556_s, tv_r_JOIN_INNER_10_715556_e;
    gettimeofday(&tv_r_JOIN_INNER_10_715556_s, 0);
    SW_JOIN_INNER_TD_10377(tbl_JOIN_INNER_TD_11452_output, tbl_Filter_TD_11967_output, tbl_JOIN_INNER_TD_10377_output);
    gettimeofday(&tv_r_JOIN_INNER_10_715556_e, 0);

    struct timeval tv_r_Filter_10_933071_s, tv_r_Filter_10_933071_e;
    gettimeofday(&tv_r_Filter_10_933071_s, 0);
    SW_Filter_TD_10579(tbl_SerializeFromObject_TD_11440_input, tbl_Filter_TD_10579_output);
    gettimeofday(&tv_r_Filter_10_933071_e, 0);

    struct timeval tv_r_JOIN_INNER_10_753869_s, tv_r_JOIN_INNER_10_753869_e;
    gettimeofday(&tv_r_JOIN_INNER_10_753869_s, 0);
    SW_JOIN_INNER_TD_10587(tbl_JOIN_INNER_TD_11247_output, tbl_Filter_TD_1132_output, tbl_JOIN_INNER_TD_10587_output);
    gettimeofday(&tv_r_JOIN_INNER_10_753869_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_603337_s, tv_r_JOIN_LEFTOUTER_9_603337_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_603337_s, 0);
    SW_JOIN_LEFTOUTER_TD_946(tbl_JOIN_INNER_TD_10409_output, tbl_Filter_TD_10227_output, tbl_JOIN_LEFTOUTER_TD_946_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_603337_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_765816_s, tv_r_JOIN_LEFTOUTER_9_765816_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_765816_s, 0);
    SW_JOIN_LEFTOUTER_TD_9485(tbl_JOIN_INNER_TD_10227_output, tbl_Filter_TD_10856_output, tbl_JOIN_LEFTOUTER_TD_9485_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_765816_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_478957_s, tv_r_JOIN_LEFTOUTER_9_478957_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_478957_s, 0);
    SW_JOIN_LEFTOUTER_TD_97(tbl_JOIN_INNER_TD_10611_output, tbl_Filter_TD_10332_output, tbl_JOIN_LEFTOUTER_TD_97_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_478957_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_767049_s, tv_r_JOIN_LEFTOUTER_9_767049_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_767049_s, 0);
    SW_JOIN_LEFTOUTER_TD_951(tbl_JOIN_INNER_TD_10415_output, tbl_Filter_TD_10602_output, tbl_JOIN_LEFTOUTER_TD_951_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_767049_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_16341_s, tv_r_JOIN_LEFTOUTER_9_16341_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_16341_s, 0);
    SW_JOIN_LEFTOUTER_TD_9362(tbl_JOIN_INNER_TD_10377_output, tbl_Filter_TD_10297_output, tbl_JOIN_LEFTOUTER_TD_9362_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_16341_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_916293_s, tv_r_JOIN_LEFTOUTER_9_916293_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_916293_s, 0);
    SW_JOIN_LEFTOUTER_TD_9192(tbl_JOIN_INNER_TD_10587_output, tbl_Filter_TD_10579_output, tbl_JOIN_LEFTOUTER_TD_9192_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_916293_e, 0);

    struct timeval tv_r_Project_8_177735_s, tv_r_Project_8_177735_e;
    gettimeofday(&tv_r_Project_8_177735_s, 0);
    SW_Project_TD_8978(tbl_JOIN_LEFTOUTER_TD_946_output, tbl_Project_TD_8978_output);
    gettimeofday(&tv_r_Project_8_177735_e, 0);

    struct timeval tv_r_Project_8_276427_s, tv_r_Project_8_276427_e;
    gettimeofday(&tv_r_Project_8_276427_s, 0);
    SW_Project_TD_8456(tbl_JOIN_LEFTOUTER_TD_9485_output, tbl_Project_TD_8456_output);
    gettimeofday(&tv_r_Project_8_276427_e, 0);

    struct timeval tv_r_Project_8_249856_s, tv_r_Project_8_249856_e;
    gettimeofday(&tv_r_Project_8_249856_s, 0);
    SW_Project_TD_8867(tbl_JOIN_LEFTOUTER_TD_97_output, tbl_Project_TD_8867_output);
    gettimeofday(&tv_r_Project_8_249856_e, 0);

    struct timeval tv_r_Project_8_244267_s, tv_r_Project_8_244267_e;
    gettimeofday(&tv_r_Project_8_244267_s, 0);
    SW_Project_TD_8196(tbl_JOIN_LEFTOUTER_TD_951_output, tbl_Project_TD_8196_output);
    gettimeofday(&tv_r_Project_8_244267_e, 0);

    struct timeval tv_r_Project_8_915225_s, tv_r_Project_8_915225_e;
    gettimeofday(&tv_r_Project_8_915225_s, 0);
    SW_Project_TD_8574(tbl_JOIN_LEFTOUTER_TD_9362_output, tbl_Project_TD_8574_output);
    gettimeofday(&tv_r_Project_8_915225_e, 0);

    struct timeval tv_r_Project_8_556149_s, tv_r_Project_8_556149_e;
    gettimeofday(&tv_r_Project_8_556149_s, 0);
    SW_Project_TD_854(tbl_JOIN_LEFTOUTER_TD_9192_output, tbl_Project_TD_854_output);
    gettimeofday(&tv_r_Project_8_556149_e, 0);

    struct timeval tv_r_Union_7_853321_s, tv_r_Union_7_853321_e;
    gettimeofday(&tv_r_Union_7_853321_s, 0);
    SW_Union_TD_7865(tbl_Project_TD_8867_output, tbl_Project_TD_8456_output, tbl_Project_TD_8978_output, tbl_Union_TD_7865_output);
    gettimeofday(&tv_r_Union_7_853321_e, 0);

    struct timeval tv_r_Union_7_7622_s, tv_r_Union_7_7622_e;
    gettimeofday(&tv_r_Union_7_7622_s, 0);
    SW_Union_TD_7735(tbl_Project_TD_854_output, tbl_Project_TD_8574_output, tbl_Project_TD_8196_output, tbl_Union_TD_7735_output);
    gettimeofday(&tv_r_Union_7_7622_e, 0);

    struct timeval tv_r_Aggregate_6_654421_s, tv_r_Aggregate_6_654421_e;
    gettimeofday(&tv_r_Aggregate_6_654421_s, 0);
    SW_Aggregate_TD_6400(tbl_Union_TD_7865_output, tbl_Aggregate_TD_6400_output);
    gettimeofday(&tv_r_Aggregate_6_654421_e, 0);

    struct timeval tv_r_Aggregate_6_356151_s, tv_r_Aggregate_6_356151_e;
    gettimeofday(&tv_r_Aggregate_6_356151_s, 0);
    SW_Aggregate_TD_6822(tbl_Union_TD_7735_output, tbl_Aggregate_TD_6822_output);
    gettimeofday(&tv_r_Aggregate_6_356151_e, 0);

    struct timeval tv_r_Aggregate_5_965534_s, tv_r_Aggregate_5_965534_e;
    gettimeofday(&tv_r_Aggregate_5_965534_s, 0);
    SW_Aggregate_TD_5619(tbl_Aggregate_TD_6400_output, tbl_Aggregate_TD_5619_output);
    gettimeofday(&tv_r_Aggregate_5_965534_e, 0);

    struct timeval tv_r_Aggregate_5_753205_s, tv_r_Aggregate_5_753205_e;
    gettimeofday(&tv_r_Aggregate_5_753205_s, 0);
    SW_Aggregate_TD_5224(tbl_Aggregate_TD_6822_output, tbl_Aggregate_TD_5224_output);
    gettimeofday(&tv_r_Aggregate_5_753205_e, 0);

    struct timeval tv_r_JOIN_INNER_4_506788_s, tv_r_JOIN_INNER_4_506788_e;
    gettimeofday(&tv_r_JOIN_INNER_4_506788_s, 0);
    SW_JOIN_INNER_TD_4103(tbl_Aggregate_TD_5224_output, tbl_Aggregate_TD_5619_output, tbl_JOIN_INNER_TD_4103_output);
    gettimeofday(&tv_r_JOIN_INNER_4_506788_e, 0);

    struct timeval tv_r_Project_3_483426_s, tv_r_Project_3_483426_e;
    gettimeofday(&tv_r_Project_3_483426_s, 0);
    SW_Project_TD_325(tbl_JOIN_INNER_TD_4103_output, tbl_Project_TD_325_output);
    gettimeofday(&tv_r_Project_3_483426_e, 0);

    struct timeval tv_r_Sort_2_371060_s, tv_r_Sort_2_371060_e;
    gettimeofday(&tv_r_Sort_2_371060_s, 0);
    SW_Sort_TD_2173(tbl_Project_TD_325_output, tbl_Sort_TD_2173_output);
    gettimeofday(&tv_r_Sort_2_371060_e, 0);

    struct timeval tv_r_LocalLimit_1_472518_s, tv_r_LocalLimit_1_472518_e;
    gettimeofday(&tv_r_LocalLimit_1_472518_s, 0);
    SW_LocalLimit_TD_1405(tbl_Sort_TD_2173_output, tbl_LocalLimit_TD_1405_output);
    gettimeofday(&tv_r_LocalLimit_1_472518_e, 0);

    struct timeval tv_r_GlobalLimit_0_183691_s, tv_r_GlobalLimit_0_183691_e;
    gettimeofday(&tv_r_GlobalLimit_0_183691_s, 0);
    SW_GlobalLimit_TD_0245(tbl_LocalLimit_TD_1405_output, tbl_GlobalLimit_TD_0245_output);
    gettimeofday(&tv_r_GlobalLimit_0_183691_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_122676_s, &tv_r_Filter_12_122676_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13876_input: " << tbl_SerializeFromObject_TD_13876_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_962704_s, &tv_r_Filter_12_962704_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1393_input: " << tbl_SerializeFromObject_TD_1393_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_101915_s, &tv_r_Filter_12_101915_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13146_input: " << tbl_SerializeFromObject_TD_13146_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_843529_s, &tv_r_Filter_12_843529_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13863_input: " << tbl_SerializeFromObject_TD_13863_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_562416_s, &tv_r_Filter_12_562416_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13613_input: " << tbl_SerializeFromObject_TD_13613_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_89805_s, &tv_r_Filter_12_89805_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13682_input: " << tbl_SerializeFromObject_TD_13682_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_133286_s, &tv_r_Filter_12_133286_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13761_input: " << tbl_SerializeFromObject_TD_13761_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_414967_s, &tv_r_Filter_12_414967_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_131_input: " << tbl_SerializeFromObject_TD_131_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_567024_s, &tv_r_Filter_12_567024_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13637_input: " << tbl_SerializeFromObject_TD_13637_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_729744_s, &tv_r_Filter_12_729744_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13691_input: " << tbl_SerializeFromObject_TD_13691_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_827583_s, &tv_r_Filter_12_827583_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13269_input: " << tbl_SerializeFromObject_TD_13269_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_699275_s, &tv_r_Filter_12_699275_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13863_input: " << tbl_SerializeFromObject_TD_13863_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_767534_s, &tv_r_Filter_11_767534_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12248_input: " << tbl_SerializeFromObject_TD_12248_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_372748_s, &tv_r_JOIN_INNER_11_372748_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12140_output: " << tbl_Filter_TD_12140_output.getNumRow() << " " << "tbl_Filter_TD_12907_output: " << tbl_Filter_TD_12907_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_576568_s, &tv_r_Filter_11_576568_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12509_input: " << tbl_SerializeFromObject_TD_12509_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_282355_s, &tv_r_JOIN_INNER_11_282355_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12474_output: " << tbl_Filter_TD_12474_output.getNumRow() << " " << "tbl_Filter_TD_12292_output: " << tbl_Filter_TD_12292_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_793047_s, &tv_r_Filter_11_793047_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12371_input: " << tbl_SerializeFromObject_TD_12371_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_495199_s, &tv_r_JOIN_INNER_11_495199_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12636_output: " << tbl_Filter_TD_12636_output.getNumRow() << " " << "tbl_Filter_TD_12473_output: " << tbl_Filter_TD_12473_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_224328_s, &tv_r_Filter_11_224328_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12227_input: " << tbl_SerializeFromObject_TD_12227_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_120023_s, &tv_r_JOIN_INNER_11_120023_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12627_output: " << tbl_Filter_TD_12627_output.getNumRow() << " " << "tbl_Filter_TD_12894_output: " << tbl_Filter_TD_12894_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_255543_s, &tv_r_Filter_11_255543_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12200_input: " << tbl_SerializeFromObject_TD_12200_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_889690_s, &tv_r_JOIN_INNER_11_889690_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12175_output: " << tbl_Filter_TD_12175_output.getNumRow() << " " << "tbl_Filter_TD_12389_output: " << tbl_Filter_TD_12389_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_574802_s, &tv_r_Filter_11_574802_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12447_input: " << tbl_SerializeFromObject_TD_12447_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_145718_s, &tv_r_JOIN_INNER_11_145718_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12653_output: " << tbl_Filter_TD_12653_output.getNumRow() << " " << "tbl_Filter_TD_12692_output: " << tbl_Filter_TD_12692_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_598548_s, &tv_r_Filter_10_598548_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11898_input: " << tbl_SerializeFromObject_TD_11898_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_189296_s, &tv_r_JOIN_INNER_10_189296_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11993_output: " << tbl_JOIN_INNER_TD_11993_output.getNumRow() << " " << "tbl_Filter_TD_11610_output: " << tbl_Filter_TD_11610_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_167231_s, &tv_r_Filter_10_167231_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11311_input: " << tbl_SerializeFromObject_TD_11311_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_468254_s, &tv_r_JOIN_INNER_10_468254_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11821_output: " << tbl_JOIN_INNER_TD_11821_output.getNumRow() << " " << "tbl_Filter_TD_11517_output: " << tbl_Filter_TD_11517_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_434838_s, &tv_r_Filter_10_434838_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11906_input: " << tbl_SerializeFromObject_TD_11906_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_499322_s, &tv_r_JOIN_INNER_10_499322_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11561_output: " << tbl_JOIN_INNER_TD_11561_output.getNumRow() << " " << "tbl_Filter_TD_11361_output: " << tbl_Filter_TD_11361_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_902919_s, &tv_r_Filter_10_902919_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11758_input: " << tbl_SerializeFromObject_TD_11758_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_280264_s, &tv_r_JOIN_INNER_10_280264_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11872_output: " << tbl_JOIN_INNER_TD_11872_output.getNumRow() << " " << "tbl_Filter_TD_11365_output: " << tbl_Filter_TD_11365_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_832291_s, &tv_r_Filter_10_832291_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11120_input: " << tbl_SerializeFromObject_TD_11120_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_715556_s, &tv_r_JOIN_INNER_10_715556_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11452_output: " << tbl_JOIN_INNER_TD_11452_output.getNumRow() << " " << "tbl_Filter_TD_11967_output: " << tbl_Filter_TD_11967_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_933071_s, &tv_r_Filter_10_933071_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11440_input: " << tbl_SerializeFromObject_TD_11440_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_753869_s, &tv_r_JOIN_INNER_10_753869_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11247_output: " << tbl_JOIN_INNER_TD_11247_output.getNumRow() << " " << "tbl_Filter_TD_1132_output: " << tbl_Filter_TD_1132_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_603337_s, &tv_r_JOIN_LEFTOUTER_9_603337_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10409_output: " << tbl_JOIN_INNER_TD_10409_output.getNumRow() << " " << "tbl_Filter_TD_10227_output: " << tbl_Filter_TD_10227_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_765816_s, &tv_r_JOIN_LEFTOUTER_9_765816_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10227_output: " << tbl_JOIN_INNER_TD_10227_output.getNumRow() << " " << "tbl_Filter_TD_10856_output: " << tbl_Filter_TD_10856_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_478957_s, &tv_r_JOIN_LEFTOUTER_9_478957_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10611_output: " << tbl_JOIN_INNER_TD_10611_output.getNumRow() << " " << "tbl_Filter_TD_10332_output: " << tbl_Filter_TD_10332_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_767049_s, &tv_r_JOIN_LEFTOUTER_9_767049_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10415_output: " << tbl_JOIN_INNER_TD_10415_output.getNumRow() << " " << "tbl_Filter_TD_10602_output: " << tbl_Filter_TD_10602_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_16341_s, &tv_r_JOIN_LEFTOUTER_9_16341_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10377_output: " << tbl_JOIN_INNER_TD_10377_output.getNumRow() << " " << "tbl_Filter_TD_10297_output: " << tbl_Filter_TD_10297_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_916293_s, &tv_r_JOIN_LEFTOUTER_9_916293_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10587_output: " << tbl_JOIN_INNER_TD_10587_output.getNumRow() << " " << "tbl_Filter_TD_10579_output: " << tbl_Filter_TD_10579_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_177735_s, &tv_r_Project_8_177735_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_946_output: " << tbl_JOIN_LEFTOUTER_TD_946_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_276427_s, &tv_r_Project_8_276427_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9485_output: " << tbl_JOIN_LEFTOUTER_TD_9485_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_249856_s, &tv_r_Project_8_249856_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_97_output: " << tbl_JOIN_LEFTOUTER_TD_97_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_244267_s, &tv_r_Project_8_244267_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_951_output: " << tbl_JOIN_LEFTOUTER_TD_951_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_915225_s, &tv_r_Project_8_915225_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9362_output: " << tbl_JOIN_LEFTOUTER_TD_9362_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_556149_s, &tv_r_Project_8_556149_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9192_output: " << tbl_JOIN_LEFTOUTER_TD_9192_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_853321_s, &tv_r_Union_7_853321_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8867_output: " << tbl_Project_TD_8867_output.getNumRow() << " " << "tbl_Project_TD_8456_output: " << tbl_Project_TD_8456_output.getNumRow() << " " << "tbl_Project_TD_8978_output: " << tbl_Project_TD_8978_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_7622_s, &tv_r_Union_7_7622_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_854_output: " << tbl_Project_TD_854_output.getNumRow() << " " << "tbl_Project_TD_8574_output: " << tbl_Project_TD_8574_output.getNumRow() << " " << "tbl_Project_TD_8196_output: " << tbl_Project_TD_8196_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_654421_s, &tv_r_Aggregate_6_654421_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7865_output: " << tbl_Union_TD_7865_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_356151_s, &tv_r_Aggregate_6_356151_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7735_output: " << tbl_Union_TD_7735_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_965534_s, &tv_r_Aggregate_5_965534_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6400_output: " << tbl_Aggregate_TD_6400_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_753205_s, &tv_r_Aggregate_5_753205_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6822_output: " << tbl_Aggregate_TD_6822_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_506788_s, &tv_r_JOIN_INNER_4_506788_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5224_output: " << tbl_Aggregate_TD_5224_output.getNumRow() << " " << "tbl_Aggregate_TD_5619_output: " << tbl_Aggregate_TD_5619_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_483426_s, &tv_r_Project_3_483426_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4103_output: " << tbl_JOIN_INNER_TD_4103_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_371060_s, &tv_r_Sort_2_371060_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_325_output: " << tbl_Project_TD_325_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_472518_s, &tv_r_LocalLimit_1_472518_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2173_output: " << tbl_Sort_TD_2173_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_183691_s, &tv_r_GlobalLimit_0_183691_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1405_output: " << tbl_LocalLimit_TD_1405_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.982648 * 1000 << "ms" << std::endl; 
    return 0; 
}
