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

#include "cfgFunc_q23.hpp" 
#include "q23.hpp" 

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
    std::cout << "NOTE:running query #23\n."; 
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
    Table tbl_GlobalLimit_TD_0259_output("tbl_GlobalLimit_TD_0259_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0259_output.allocateHost();
    Table tbl_LocalLimit_TD_1875_output("tbl_LocalLimit_TD_1875_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1875_output.allocateHost();
    Table tbl_Sort_TD_2569_output("tbl_Sort_TD_2569_output", 6100000, 3, "");
    tbl_Sort_TD_2569_output.allocateHost();
    Table tbl_Union_TD_3904_output("tbl_Union_TD_3904_output", 6100000, 3, "");
    tbl_Union_TD_3904_output.allocateHost();
    Table tbl_Aggregate_TD_4154_output("tbl_Aggregate_TD_4154_output", 6100000, 3, "");
    tbl_Aggregate_TD_4154_output.allocateHost();
    Table tbl_Aggregate_TD_4919_output("tbl_Aggregate_TD_4919_output", 6100000, 3, "");
    tbl_Aggregate_TD_4919_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5285_output("tbl_JOIN_INNER_TD_5285_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5285_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5458_output("tbl_JOIN_INNER_TD_5458_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5458_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6903_output("tbl_JOIN_INNER_TD_6903_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6903_output.allocateHost();
    Table tbl_Filter_TD_6952_output("tbl_Filter_TD_6952_output", 6100000, 1, "");
    tbl_Filter_TD_6952_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6734_output("tbl_JOIN_INNER_TD_6734_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6734_output.allocateHost();
    Table tbl_Filter_TD_659_output("tbl_Filter_TD_659_output", 6100000, 1, "");
    tbl_Filter_TD_659_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7638_output("tbl_JOIN_LEFTSEMI_TD_7638_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_7638_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_712_output("tbl_JOIN_LEFTSEMI_TD_712_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_712_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7808_input;
    tbl_SerializeFromObject_TD_7808_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7808_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7808_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7808_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_7808_input.allocateHost();
    tbl_SerializeFromObject_TD_7808_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_7644_output("tbl_JOIN_LEFTSEMI_TD_7644_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_7644_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7610_output("tbl_JOIN_LEFTSEMI_TD_7610_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_7610_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7330_input;
    tbl_SerializeFromObject_TD_7330_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7330_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7330_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7330_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_7330_input.allocateHost();
    tbl_SerializeFromObject_TD_7330_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_8335_output("tbl_JOIN_LEFTSEMI_TD_8335_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_8335_output.allocateHost();
    Table tbl_Filter_TD_8459_output("tbl_Filter_TD_8459_output", 6100000, 1, "");
    tbl_Filter_TD_8459_output.allocateHost();
    Table tbl_Filter_TD_8126_output("tbl_Filter_TD_8126_output", 6100000, 3, "");
    tbl_Filter_TD_8126_output.allocateHost();
    Table tbl_Filter_TD_8372_output("tbl_Filter_TD_8372_output", 6100000, 1, "");
    tbl_Filter_TD_8372_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_8635_output("tbl_JOIN_LEFTSEMI_TD_8635_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_8635_output.allocateHost();
    Table tbl_Filter_TD_8268_output("tbl_Filter_TD_8268_output", 6100000, 1, "");
    tbl_Filter_TD_8268_output.allocateHost();
    Table tbl_Filter_TD_8986_output("tbl_Filter_TD_8986_output", 6100000, 3, "");
    tbl_Filter_TD_8986_output.allocateHost();
    Table tbl_Filter_TD_848_output("tbl_Filter_TD_848_output", 6100000, 1, "");
    tbl_Filter_TD_848_output.allocateHost();
    Table tbl_Filter_TD_9916_output("tbl_Filter_TD_9916_output", 6100000, 5, "");
    tbl_Filter_TD_9916_output.allocateHost();
    Table tbl_Filter_TD_9908_output("tbl_Filter_TD_9908_output", 6100000, 1, "");
    tbl_Filter_TD_9908_output.allocateHost();
    Table tbl_Aggregate_TD_9321_output("tbl_Aggregate_TD_9321_output", 6100000, 2, "");
    tbl_Aggregate_TD_9321_output.allocateHost();
    Table tbl_Aggregate_TD_9718_output("tbl_Aggregate_TD_9718_output", 6100000, 1, "");
    tbl_Aggregate_TD_9718_output.allocateHost();
    Table tbl_SerializeFromObject_TD_947_input;
    tbl_SerializeFromObject_TD_947_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_947_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_947_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_947_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_947_input.allocateHost();
    tbl_SerializeFromObject_TD_947_input.loadHost();
    Table tbl_Aggregate_TD_9316_output("tbl_Aggregate_TD_9316_output", 6100000, 2, "");
    tbl_Aggregate_TD_9316_output.allocateHost();
    Table tbl_Aggregate_TD_9685_output("tbl_Aggregate_TD_9685_output", 6100000, 1, "");
    tbl_Aggregate_TD_9685_output.allocateHost();
    Table tbl_Filter_TD_9743_output("tbl_Filter_TD_9743_output", 6100000, 5, "");
    tbl_Filter_TD_9743_output.allocateHost();
    Table tbl_Filter_TD_9232_output("tbl_Filter_TD_9232_output", 6100000, 1, "");
    tbl_Filter_TD_9232_output.allocateHost();
    Table tbl_Aggregate_TD_9944_output("tbl_Aggregate_TD_9944_output", 6100000, 2, "");
    tbl_Aggregate_TD_9944_output.allocateHost();
    Table tbl_Aggregate_TD_9186_output("tbl_Aggregate_TD_9186_output", 6100000, 1, "");
    tbl_Aggregate_TD_9186_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9729_input;
    tbl_SerializeFromObject_TD_9729_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9729_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_9729_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9729_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9729_input.allocateHost();
    tbl_SerializeFromObject_TD_9729_input.loadHost();
    Table tbl_Aggregate_TD_9865_output("tbl_Aggregate_TD_9865_output", 6100000, 2, "");
    tbl_Aggregate_TD_9865_output.allocateHost();
    Table tbl_Aggregate_TD_9917_output("tbl_Aggregate_TD_9917_output", 6100000, 1, "");
    tbl_Aggregate_TD_9917_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10154_input;
    tbl_SerializeFromObject_TD_10154_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10154_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10154_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_10154_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_10154_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_10154_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_10154_input.allocateHost();
    tbl_SerializeFromObject_TD_10154_input.loadHost();
    Table tbl_Aggregate_TD_10306_output("tbl_Aggregate_TD_10306_output", 6100000, 2, "");
    tbl_Aggregate_TD_10306_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10314_output("tbl_JOIN_INNER_TD_10314_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10314_output.allocateHost();
    Table tbl_Aggregate_TD_10600_output("tbl_Aggregate_TD_10600_output", 6100000, 1, "");
    tbl_Aggregate_TD_10600_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10166_output("tbl_JOIN_INNER_TD_10166_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10166_output.allocateHost();
    Table tbl_Aggregate_TD_10214_output("tbl_Aggregate_TD_10214_output", 6100000, 1, "");
    tbl_Aggregate_TD_10214_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10314_input;
    tbl_SerializeFromObject_TD_10314_input = Table("web_sales", web_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10314_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10314_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_10314_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_10314_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_10314_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_10314_input.allocateHost();
    tbl_SerializeFromObject_TD_10314_input.loadHost();
    Table tbl_Aggregate_TD_10592_output("tbl_Aggregate_TD_10592_output", 6100000, 2, "");
    tbl_Aggregate_TD_10592_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10944_output("tbl_JOIN_INNER_TD_10944_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10944_output.allocateHost();
    Table tbl_Aggregate_TD_10251_output("tbl_Aggregate_TD_10251_output", 6100000, 1, "");
    tbl_Aggregate_TD_10251_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10243_output("tbl_JOIN_INNER_TD_10243_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10243_output.allocateHost();
    Table tbl_Aggregate_TD_10133_output("tbl_Aggregate_TD_10133_output", 6100000, 1, "");
    tbl_Aggregate_TD_10133_output.allocateHost();
    Table tbl_Project_TD_11265_output("tbl_Project_TD_11265_output", 6100000, 3, "");
    tbl_Project_TD_11265_output.allocateHost();
    Table tbl_Filter_TD_11326_output("tbl_Filter_TD_11326_output", 6100000, 3, "");
    tbl_Filter_TD_11326_output.allocateHost();
    Table tbl_Filter_TD_1141_output("tbl_Filter_TD_1141_output", 6100000, 1, "");
    tbl_Filter_TD_1141_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11124_output("tbl_JOIN_INNER_TD_11124_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_11124_output.allocateHost();
    Table tbl_Filter_TD_11982_output("tbl_Filter_TD_11982_output", 6100000, 3, "");
    tbl_Filter_TD_11982_output.allocateHost();
    Table tbl_Filter_TD_11964_output("tbl_Filter_TD_11964_output", 6100000, 1, "");
    tbl_Filter_TD_11964_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11848_output("tbl_JOIN_INNER_TD_11848_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_11848_output.allocateHost();
    Table tbl_Project_TD_11749_output("tbl_Project_TD_11749_output", 6100000, 3, "");
    tbl_Project_TD_11749_output.allocateHost();
    Table tbl_Filter_TD_11755_output("tbl_Filter_TD_11755_output", 6100000, 3, "");
    tbl_Filter_TD_11755_output.allocateHost();
    Table tbl_Filter_TD_11729_output("tbl_Filter_TD_11729_output", 6100000, 1, "");
    tbl_Filter_TD_11729_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11921_output("tbl_JOIN_INNER_TD_11921_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_11921_output.allocateHost();
    Table tbl_Filter_TD_1135_output("tbl_Filter_TD_1135_output", 6100000, 3, "");
    tbl_Filter_TD_1135_output.allocateHost();
    Table tbl_Filter_TD_11663_output("tbl_Filter_TD_11663_output", 6100000, 1, "");
    tbl_Filter_TD_11663_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11233_output("tbl_JOIN_INNER_TD_11233_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_11233_output.allocateHost();
    Table tbl_JOIN_INNER_TD_12484_output("tbl_JOIN_INNER_TD_12484_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_12484_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12765_input;
    tbl_SerializeFromObject_TD_12765_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12765_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12765_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12765_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12765_input.allocateHost();
    tbl_SerializeFromObject_TD_12765_input.loadHost();
    Table tbl_SerializeFromObject_TD_12414_input;
    tbl_SerializeFromObject_TD_12414_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_12414_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12414_input.allocateHost();
    tbl_SerializeFromObject_TD_12414_input.loadHost();
    Table tbl_JOIN_INNER_TD_12888_output("tbl_JOIN_INNER_TD_12888_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_12888_output.allocateHost();
    Table tbl_Filter_TD_1256_output("tbl_Filter_TD_1256_output", 6100000, 1, "");
    tbl_Filter_TD_1256_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12760_input;
    tbl_SerializeFromObject_TD_12760_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12760_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12760_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12760_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12760_input.allocateHost();
    tbl_SerializeFromObject_TD_12760_input.loadHost();
    Table tbl_SerializeFromObject_TD_12265_input;
    tbl_SerializeFromObject_TD_12265_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_12265_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12265_input.allocateHost();
    tbl_SerializeFromObject_TD_12265_input.loadHost();
    Table tbl_JOIN_INNER_TD_12863_output("tbl_JOIN_INNER_TD_12863_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_12863_output.allocateHost();
    Table tbl_Filter_TD_12879_output("tbl_Filter_TD_12879_output", 6100000, 1, "");
    tbl_Filter_TD_12879_output.allocateHost();
    Table tbl_JOIN_INNER_TD_12949_output("tbl_JOIN_INNER_TD_12949_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_12949_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12839_input;
    tbl_SerializeFromObject_TD_12839_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12839_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12839_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12839_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12839_input.allocateHost();
    tbl_SerializeFromObject_TD_12839_input.loadHost();
    Table tbl_SerializeFromObject_TD_12970_input;
    tbl_SerializeFromObject_TD_12970_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_12970_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12970_input.allocateHost();
    tbl_SerializeFromObject_TD_12970_input.loadHost();
    Table tbl_JOIN_INNER_TD_12533_output("tbl_JOIN_INNER_TD_12533_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_12533_output.allocateHost();
    Table tbl_Filter_TD_12161_output("tbl_Filter_TD_12161_output", 6100000, 1, "");
    tbl_Filter_TD_12161_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12474_input;
    tbl_SerializeFromObject_TD_12474_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12474_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12474_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12474_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12474_input.allocateHost();
    tbl_SerializeFromObject_TD_12474_input.loadHost();
    Table tbl_SerializeFromObject_TD_12570_input;
    tbl_SerializeFromObject_TD_12570_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_12570_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12570_input.allocateHost();
    tbl_SerializeFromObject_TD_12570_input.loadHost();
    Table tbl_JOIN_INNER_TD_12759_output("tbl_JOIN_INNER_TD_12759_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_12759_output.allocateHost();
    Table tbl_Filter_TD_12201_output("tbl_Filter_TD_12201_output", 6100000, 1, "");
    tbl_Filter_TD_12201_output.allocateHost();
    Table tbl_JOIN_INNER_TD_13946_output("tbl_JOIN_INNER_TD_13946_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_13946_output.allocateHost();
    Table tbl_Filter_TD_13640_output("tbl_Filter_TD_13640_output", 6100000, 2, "");
    tbl_Filter_TD_13640_output.allocateHost();
    Table tbl_Filter_TD_13938_output("tbl_Filter_TD_13938_output", 6100000, 4, "");
    tbl_Filter_TD_13938_output.allocateHost();
    Table tbl_Filter_TD_13842_output("tbl_Filter_TD_13842_output", 6100000, 1, "");
    tbl_Filter_TD_13842_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13276_input;
    tbl_SerializeFromObject_TD_13276_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13276_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13276_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13276_input.allocateHost();
    tbl_SerializeFromObject_TD_13276_input.loadHost();
    Table tbl_Filter_TD_13522_output("tbl_Filter_TD_13522_output", 6100000, 4, "");
    tbl_Filter_TD_13522_output.allocateHost();
    Table tbl_Filter_TD_13254_output("tbl_Filter_TD_13254_output", 6100000, 1, "");
    tbl_Filter_TD_13254_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13351_input;
    tbl_SerializeFromObject_TD_13351_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13351_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13351_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13351_input.allocateHost();
    tbl_SerializeFromObject_TD_13351_input.loadHost();
    Table tbl_JOIN_INNER_TD_13227_output("tbl_JOIN_INNER_TD_13227_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_13227_output.allocateHost();
    Table tbl_Filter_TD_13146_output("tbl_Filter_TD_13146_output", 6100000, 2, "");
    tbl_Filter_TD_13146_output.allocateHost();
    Table tbl_Filter_TD_13663_output("tbl_Filter_TD_13663_output", 6100000, 4, "");
    tbl_Filter_TD_13663_output.allocateHost();
    Table tbl_Filter_TD_13117_output("tbl_Filter_TD_13117_output", 6100000, 1, "");
    tbl_Filter_TD_13117_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13398_input;
    tbl_SerializeFromObject_TD_13398_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13398_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13398_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13398_input.allocateHost();
    tbl_SerializeFromObject_TD_13398_input.loadHost();
    Table tbl_Filter_TD_13449_output("tbl_Filter_TD_13449_output", 6100000, 4, "");
    tbl_Filter_TD_13449_output.allocateHost();
    Table tbl_Filter_TD_1388_output("tbl_Filter_TD_1388_output", 6100000, 1, "");
    tbl_Filter_TD_1388_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13395_input;
    tbl_SerializeFromObject_TD_13395_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13395_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13395_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13395_input.allocateHost();
    tbl_SerializeFromObject_TD_13395_input.loadHost();
    Table tbl_Filter_TD_1426_output("tbl_Filter_TD_1426_output", 6100000, 2, "");
    tbl_Filter_TD_1426_output.allocateHost();
    Table tbl_Filter_TD_14458_output("tbl_Filter_TD_14458_output", 6100000, 2, "");
    tbl_Filter_TD_14458_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14519_input;
    tbl_SerializeFromObject_TD_14519_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14519_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_14519_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14519_input.allocateHost();
    tbl_SerializeFromObject_TD_14519_input.loadHost();
    Table tbl_SerializeFromObject_TD_14964_input;
    tbl_SerializeFromObject_TD_14964_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_14964_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_14964_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_14964_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_14964_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_14964_input.allocateHost();
    tbl_SerializeFromObject_TD_14964_input.loadHost();
    Table tbl_SerializeFromObject_TD_14829_input;
    tbl_SerializeFromObject_TD_14829_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_14829_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_14829_input.allocateHost();
    tbl_SerializeFromObject_TD_14829_input.loadHost();
    Table tbl_SerializeFromObject_TD_14638_input;
    tbl_SerializeFromObject_TD_14638_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_14638_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_14638_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_14638_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_14638_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_14638_input.allocateHost();
    tbl_SerializeFromObject_TD_14638_input.loadHost();
    Table tbl_SerializeFromObject_TD_1448_input;
    tbl_SerializeFromObject_TD_1448_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_1448_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_1448_input.allocateHost();
    tbl_SerializeFromObject_TD_1448_input.loadHost();
    Table tbl_Filter_TD_14223_output("tbl_Filter_TD_14223_output", 6100000, 2, "");
    tbl_Filter_TD_14223_output.allocateHost();
    Table tbl_Filter_TD_14503_output("tbl_Filter_TD_14503_output", 6100000, 2, "");
    tbl_Filter_TD_14503_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14319_input;
    tbl_SerializeFromObject_TD_14319_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14319_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_14319_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14319_input.allocateHost();
    tbl_SerializeFromObject_TD_14319_input.loadHost();
    Table tbl_SerializeFromObject_TD_1489_input;
    tbl_SerializeFromObject_TD_1489_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1489_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1489_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_1489_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_1489_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_1489_input.allocateHost();
    tbl_SerializeFromObject_TD_1489_input.loadHost();
    Table tbl_SerializeFromObject_TD_14990_input;
    tbl_SerializeFromObject_TD_14990_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_14990_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_14990_input.allocateHost();
    tbl_SerializeFromObject_TD_14990_input.loadHost();
    Table tbl_SerializeFromObject_TD_14929_input;
    tbl_SerializeFromObject_TD_14929_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_14929_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_14929_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_14929_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_14929_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_14929_input.allocateHost();
    tbl_SerializeFromObject_TD_14929_input.loadHost();
    Table tbl_SerializeFromObject_TD_14793_input;
    tbl_SerializeFromObject_TD_14793_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_14793_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_14793_input.allocateHost();
    tbl_SerializeFromObject_TD_14793_input.loadHost();
    Table tbl_SerializeFromObject_TD_15589_input;
    tbl_SerializeFromObject_TD_15589_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_15589_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15589_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_15589_input.allocateHost();
    tbl_SerializeFromObject_TD_15589_input.loadHost();
    Table tbl_SerializeFromObject_TD_15913_input;
    tbl_SerializeFromObject_TD_15913_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_15913_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_15913_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_15913_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_15913_input.allocateHost();
    tbl_SerializeFromObject_TD_15913_input.loadHost();
    Table tbl_SerializeFromObject_TD_15255_input;
    tbl_SerializeFromObject_TD_15255_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_15255_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15255_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_15255_input.allocateHost();
    tbl_SerializeFromObject_TD_15255_input.loadHost();
    Table tbl_SerializeFromObject_TD_15793_input;
    tbl_SerializeFromObject_TD_15793_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_15793_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_15793_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_15793_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_15793_input.allocateHost();
    tbl_SerializeFromObject_TD_15793_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_486977_s, tv_r_Filter_14_486977_e;
    gettimeofday(&tv_r_Filter_14_486977_s, 0);
    SW_Filter_TD_14503(tbl_SerializeFromObject_TD_15793_input, tbl_Filter_TD_14503_output);
    gettimeofday(&tv_r_Filter_14_486977_e, 0);

    struct timeval tv_r_Filter_14_105967_s, tv_r_Filter_14_105967_e;
    gettimeofday(&tv_r_Filter_14_105967_s, 0);
    SW_Filter_TD_14223(tbl_SerializeFromObject_TD_15255_input, tbl_Filter_TD_14223_output);
    gettimeofday(&tv_r_Filter_14_105967_e, 0);

    struct timeval tv_r_Filter_14_8691_s, tv_r_Filter_14_8691_e;
    gettimeofday(&tv_r_Filter_14_8691_s, 0);
    SW_Filter_TD_14458(tbl_SerializeFromObject_TD_15913_input, tbl_Filter_TD_14458_output);
    gettimeofday(&tv_r_Filter_14_8691_e, 0);

    struct timeval tv_r_Filter_14_944386_s, tv_r_Filter_14_944386_e;
    gettimeofday(&tv_r_Filter_14_944386_s, 0);
    SW_Filter_TD_1426(tbl_SerializeFromObject_TD_15589_input, tbl_Filter_TD_1426_output);
    gettimeofday(&tv_r_Filter_14_944386_e, 0);

    struct timeval tv_r_Filter_13_414944_s, tv_r_Filter_13_414944_e;
    gettimeofday(&tv_r_Filter_13_414944_s, 0);
    SW_Filter_TD_1388(tbl_SerializeFromObject_TD_14793_input, tbl_Filter_TD_1388_output);
    gettimeofday(&tv_r_Filter_13_414944_e, 0);

    struct timeval tv_r_Filter_13_388749_s, tv_r_Filter_13_388749_e;
    gettimeofday(&tv_r_Filter_13_388749_s, 0);
    SW_Filter_TD_13449(tbl_SerializeFromObject_TD_14929_input, tbl_Filter_TD_13449_output);
    gettimeofday(&tv_r_Filter_13_388749_e, 0);

    struct timeval tv_r_Filter_13_281131_s, tv_r_Filter_13_281131_e;
    gettimeofday(&tv_r_Filter_13_281131_s, 0);
    SW_Filter_TD_13117(tbl_SerializeFromObject_TD_14990_input, tbl_Filter_TD_13117_output);
    gettimeofday(&tv_r_Filter_13_281131_e, 0);

    struct timeval tv_r_Filter_13_96453_s, tv_r_Filter_13_96453_e;
    gettimeofday(&tv_r_Filter_13_96453_s, 0);
    SW_Filter_TD_13663(tbl_SerializeFromObject_TD_1489_input, tbl_Filter_TD_13663_output);
    gettimeofday(&tv_r_Filter_13_96453_e, 0);

    struct timeval tv_r_Filter_13_630416_s, tv_r_Filter_13_630416_e;
    gettimeofday(&tv_r_Filter_13_630416_s, 0);
    SW_Filter_TD_13146(tbl_SerializeFromObject_TD_14319_input, tbl_Filter_TD_13146_output);
    gettimeofday(&tv_r_Filter_13_630416_e, 0);

    struct timeval tv_r_JOIN_INNER_13_359760_s, tv_r_JOIN_INNER_13_359760_e;
    gettimeofday(&tv_r_JOIN_INNER_13_359760_s, 0);
    SW_JOIN_INNER_TD_13227(tbl_Filter_TD_14223_output, tbl_Filter_TD_14503_output, tbl_JOIN_INNER_TD_13227_output);
    gettimeofday(&tv_r_JOIN_INNER_13_359760_e, 0);

    struct timeval tv_r_Filter_13_894139_s, tv_r_Filter_13_894139_e;
    gettimeofday(&tv_r_Filter_13_894139_s, 0);
    SW_Filter_TD_13254(tbl_SerializeFromObject_TD_1448_input, tbl_Filter_TD_13254_output);
    gettimeofday(&tv_r_Filter_13_894139_e, 0);

    struct timeval tv_r_Filter_13_1028_s, tv_r_Filter_13_1028_e;
    gettimeofday(&tv_r_Filter_13_1028_s, 0);
    SW_Filter_TD_13522(tbl_SerializeFromObject_TD_14638_input, tbl_Filter_TD_13522_output);
    gettimeofday(&tv_r_Filter_13_1028_e, 0);

    struct timeval tv_r_Filter_13_641526_s, tv_r_Filter_13_641526_e;
    gettimeofday(&tv_r_Filter_13_641526_s, 0);
    SW_Filter_TD_13842(tbl_SerializeFromObject_TD_14829_input, tbl_Filter_TD_13842_output);
    gettimeofday(&tv_r_Filter_13_641526_e, 0);

    struct timeval tv_r_Filter_13_569376_s, tv_r_Filter_13_569376_e;
    gettimeofday(&tv_r_Filter_13_569376_s, 0);
    SW_Filter_TD_13938(tbl_SerializeFromObject_TD_14964_input, tbl_Filter_TD_13938_output);
    gettimeofday(&tv_r_Filter_13_569376_e, 0);

    struct timeval tv_r_Filter_13_978911_s, tv_r_Filter_13_978911_e;
    gettimeofday(&tv_r_Filter_13_978911_s, 0);
    SW_Filter_TD_13640(tbl_SerializeFromObject_TD_14519_input, tbl_Filter_TD_13640_output);
    gettimeofday(&tv_r_Filter_13_978911_e, 0);

    struct timeval tv_r_JOIN_INNER_13_508058_s, tv_r_JOIN_INNER_13_508058_e;
    gettimeofday(&tv_r_JOIN_INNER_13_508058_s, 0);
    SW_JOIN_INNER_TD_13946(tbl_Filter_TD_1426_output, tbl_Filter_TD_14458_output, tbl_JOIN_INNER_TD_13946_output);
    gettimeofday(&tv_r_JOIN_INNER_13_508058_e, 0);

    struct timeval tv_r_Filter_12_599972_s, tv_r_Filter_12_599972_e;
    gettimeofday(&tv_r_Filter_12_599972_s, 0);
    SW_Filter_TD_12201(tbl_SerializeFromObject_TD_13395_input, tbl_Filter_TD_12201_output);
    gettimeofday(&tv_r_Filter_12_599972_e, 0);

    struct timeval tv_r_JOIN_INNER_12_226794_s, tv_r_JOIN_INNER_12_226794_e;
    gettimeofday(&tv_r_JOIN_INNER_12_226794_s, 0);
    SW_JOIN_INNER_TD_12759(tbl_Filter_TD_13449_output, tbl_Filter_TD_1388_output, tbl_JOIN_INNER_TD_12759_output);
    gettimeofday(&tv_r_JOIN_INNER_12_226794_e, 0);

    struct timeval tv_r_Filter_12_389411_s, tv_r_Filter_12_389411_e;
    gettimeofday(&tv_r_Filter_12_389411_s, 0);
    SW_Filter_TD_12161(tbl_SerializeFromObject_TD_13398_input, tbl_Filter_TD_12161_output);
    gettimeofday(&tv_r_Filter_12_389411_e, 0);

    struct timeval tv_r_JOIN_INNER_12_292594_s, tv_r_JOIN_INNER_12_292594_e;
    gettimeofday(&tv_r_JOIN_INNER_12_292594_s, 0);
    SW_JOIN_INNER_TD_12533(tbl_Filter_TD_13663_output, tbl_Filter_TD_13117_output, tbl_JOIN_INNER_TD_12533_output);
    gettimeofday(&tv_r_JOIN_INNER_12_292594_e, 0);

    struct timeval tv_r_JOIN_INNER_12_702082_s, tv_r_JOIN_INNER_12_702082_e;
    gettimeofday(&tv_r_JOIN_INNER_12_702082_s, 0);
    SW_JOIN_INNER_TD_12949(tbl_JOIN_INNER_TD_13227_output, tbl_Filter_TD_13146_output, tbl_JOIN_INNER_TD_12949_output);
    gettimeofday(&tv_r_JOIN_INNER_12_702082_e, 0);

    struct timeval tv_r_Filter_12_562296_s, tv_r_Filter_12_562296_e;
    gettimeofday(&tv_r_Filter_12_562296_s, 0);
    SW_Filter_TD_12879(tbl_SerializeFromObject_TD_13351_input, tbl_Filter_TD_12879_output);
    gettimeofday(&tv_r_Filter_12_562296_e, 0);

    struct timeval tv_r_JOIN_INNER_12_392918_s, tv_r_JOIN_INNER_12_392918_e;
    gettimeofday(&tv_r_JOIN_INNER_12_392918_s, 0);
    SW_JOIN_INNER_TD_12863(tbl_Filter_TD_13522_output, tbl_Filter_TD_13254_output, tbl_JOIN_INNER_TD_12863_output);
    gettimeofday(&tv_r_JOIN_INNER_12_392918_e, 0);

    struct timeval tv_r_Filter_12_9587_s, tv_r_Filter_12_9587_e;
    gettimeofday(&tv_r_Filter_12_9587_s, 0);
    SW_Filter_TD_1256(tbl_SerializeFromObject_TD_13276_input, tbl_Filter_TD_1256_output);
    gettimeofday(&tv_r_Filter_12_9587_e, 0);

    struct timeval tv_r_JOIN_INNER_12_376347_s, tv_r_JOIN_INNER_12_376347_e;
    gettimeofday(&tv_r_JOIN_INNER_12_376347_s, 0);
    SW_JOIN_INNER_TD_12888(tbl_Filter_TD_13938_output, tbl_Filter_TD_13842_output, tbl_JOIN_INNER_TD_12888_output);
    gettimeofday(&tv_r_JOIN_INNER_12_376347_e, 0);

    struct timeval tv_r_JOIN_INNER_12_184315_s, tv_r_JOIN_INNER_12_184315_e;
    gettimeofday(&tv_r_JOIN_INNER_12_184315_s, 0);
    SW_JOIN_INNER_TD_12484(tbl_JOIN_INNER_TD_13946_output, tbl_Filter_TD_13640_output, tbl_JOIN_INNER_TD_12484_output);
    gettimeofday(&tv_r_JOIN_INNER_12_184315_e, 0);

    struct timeval tv_r_JOIN_INNER_11_23790_s, tv_r_JOIN_INNER_11_23790_e;
    gettimeofday(&tv_r_JOIN_INNER_11_23790_s, 0);
    SW_JOIN_INNER_TD_11233(tbl_JOIN_INNER_TD_12759_output, tbl_Filter_TD_12201_output, tbl_JOIN_INNER_TD_11233_output);
    gettimeofday(&tv_r_JOIN_INNER_11_23790_e, 0);

    struct timeval tv_r_Filter_11_763543_s, tv_r_Filter_11_763543_e;
    gettimeofday(&tv_r_Filter_11_763543_s, 0);
    SW_Filter_TD_11663(tbl_SerializeFromObject_TD_12570_input, tbl_Filter_TD_11663_output);
    gettimeofday(&tv_r_Filter_11_763543_e, 0);

    struct timeval tv_r_Filter_11_693761_s, tv_r_Filter_11_693761_e;
    gettimeofday(&tv_r_Filter_11_693761_s, 0);
    SW_Filter_TD_1135(tbl_SerializeFromObject_TD_12474_input, tbl_Filter_TD_1135_output);
    gettimeofday(&tv_r_Filter_11_693761_e, 0);

    struct timeval tv_r_JOIN_INNER_11_516715_s, tv_r_JOIN_INNER_11_516715_e;
    gettimeofday(&tv_r_JOIN_INNER_11_516715_s, 0);
    SW_JOIN_INNER_TD_11921(tbl_JOIN_INNER_TD_12533_output, tbl_Filter_TD_12161_output, tbl_JOIN_INNER_TD_11921_output);
    gettimeofday(&tv_r_JOIN_INNER_11_516715_e, 0);

    struct timeval tv_r_Filter_11_314936_s, tv_r_Filter_11_314936_e;
    gettimeofday(&tv_r_Filter_11_314936_s, 0);
    SW_Filter_TD_11729(tbl_SerializeFromObject_TD_12970_input, tbl_Filter_TD_11729_output);
    gettimeofday(&tv_r_Filter_11_314936_e, 0);

    struct timeval tv_r_Filter_11_112345_s, tv_r_Filter_11_112345_e;
    gettimeofday(&tv_r_Filter_11_112345_s, 0);
    SW_Filter_TD_11755(tbl_SerializeFromObject_TD_12839_input, tbl_Filter_TD_11755_output);
    gettimeofday(&tv_r_Filter_11_112345_e, 0);

    struct timeval tv_r_Project_11_222622_s, tv_r_Project_11_222622_e;
    gettimeofday(&tv_r_Project_11_222622_s, 0);
    SW_Project_TD_11749(tbl_JOIN_INNER_TD_12949_output, tbl_Project_TD_11749_output);
    gettimeofday(&tv_r_Project_11_222622_e, 0);

    struct timeval tv_r_JOIN_INNER_11_254021_s, tv_r_JOIN_INNER_11_254021_e;
    gettimeofday(&tv_r_JOIN_INNER_11_254021_s, 0);
    SW_JOIN_INNER_TD_11848(tbl_JOIN_INNER_TD_12863_output, tbl_Filter_TD_12879_output, tbl_JOIN_INNER_TD_11848_output);
    gettimeofday(&tv_r_JOIN_INNER_11_254021_e, 0);

    struct timeval tv_r_Filter_11_333049_s, tv_r_Filter_11_333049_e;
    gettimeofday(&tv_r_Filter_11_333049_s, 0);
    SW_Filter_TD_11964(tbl_SerializeFromObject_TD_12265_input, tbl_Filter_TD_11964_output);
    gettimeofday(&tv_r_Filter_11_333049_e, 0);

    struct timeval tv_r_Filter_11_180109_s, tv_r_Filter_11_180109_e;
    gettimeofday(&tv_r_Filter_11_180109_s, 0);
    SW_Filter_TD_11982(tbl_SerializeFromObject_TD_12760_input, tbl_Filter_TD_11982_output);
    gettimeofday(&tv_r_Filter_11_180109_e, 0);

    struct timeval tv_r_JOIN_INNER_11_880601_s, tv_r_JOIN_INNER_11_880601_e;
    gettimeofday(&tv_r_JOIN_INNER_11_880601_s, 0);
    SW_JOIN_INNER_TD_11124(tbl_JOIN_INNER_TD_12888_output, tbl_Filter_TD_1256_output, tbl_JOIN_INNER_TD_11124_output);
    gettimeofday(&tv_r_JOIN_INNER_11_880601_e, 0);

    struct timeval tv_r_Filter_11_113843_s, tv_r_Filter_11_113843_e;
    gettimeofday(&tv_r_Filter_11_113843_s, 0);
    SW_Filter_TD_1141(tbl_SerializeFromObject_TD_12414_input, tbl_Filter_TD_1141_output);
    gettimeofday(&tv_r_Filter_11_113843_e, 0);

    struct timeval tv_r_Filter_11_326310_s, tv_r_Filter_11_326310_e;
    gettimeofday(&tv_r_Filter_11_326310_s, 0);
    SW_Filter_TD_11326(tbl_SerializeFromObject_TD_12765_input, tbl_Filter_TD_11326_output);
    gettimeofday(&tv_r_Filter_11_326310_e, 0);

    struct timeval tv_r_Project_11_914057_s, tv_r_Project_11_914057_e;
    gettimeofday(&tv_r_Project_11_914057_s, 0);
    SW_Project_TD_11265(tbl_JOIN_INNER_TD_12484_output, tbl_Project_TD_11265_output);
    gettimeofday(&tv_r_Project_11_914057_e, 0);

    struct timeval tv_r_Aggregate_10_837473_s, tv_r_Aggregate_10_837473_e;
    gettimeofday(&tv_r_Aggregate_10_837473_s, 0);
    SW_Aggregate_TD_10133(tbl_JOIN_INNER_TD_11233_output, tbl_Aggregate_TD_10133_output);
    gettimeofday(&tv_r_Aggregate_10_837473_e, 0);

    struct timeval tv_r_JOIN_INNER_10_654922_s, tv_r_JOIN_INNER_10_654922_e;
    gettimeofday(&tv_r_JOIN_INNER_10_654922_s, 0);
    SW_JOIN_INNER_TD_10243(tbl_Filter_TD_1135_output, tbl_Filter_TD_11663_output, tbl_JOIN_INNER_TD_10243_output);
    gettimeofday(&tv_r_JOIN_INNER_10_654922_e, 0);

    struct timeval tv_r_Aggregate_10_388157_s, tv_r_Aggregate_10_388157_e;
    gettimeofday(&tv_r_Aggregate_10_388157_s, 0);
    SW_Aggregate_TD_10251(tbl_JOIN_INNER_TD_11921_output, tbl_Aggregate_TD_10251_output);
    gettimeofday(&tv_r_Aggregate_10_388157_e, 0);

    struct timeval tv_r_JOIN_INNER_10_579137_s, tv_r_JOIN_INNER_10_579137_e;
    gettimeofday(&tv_r_JOIN_INNER_10_579137_s, 0);
    SW_JOIN_INNER_TD_10944(tbl_Filter_TD_11755_output, tbl_Filter_TD_11729_output, tbl_JOIN_INNER_TD_10944_output);
    gettimeofday(&tv_r_JOIN_INNER_10_579137_e, 0);

    struct timeval tv_r_Aggregate_10_933401_s, tv_r_Aggregate_10_933401_e;
    gettimeofday(&tv_r_Aggregate_10_933401_s, 0);
    SW_Aggregate_TD_10592(tbl_Project_TD_11749_output, tbl_Aggregate_TD_10592_output);
    gettimeofday(&tv_r_Aggregate_10_933401_e, 0);

    struct timeval tv_r_Aggregate_10_739885_s, tv_r_Aggregate_10_739885_e;
    gettimeofday(&tv_r_Aggregate_10_739885_s, 0);
    SW_Aggregate_TD_10214(tbl_JOIN_INNER_TD_11848_output, tbl_Aggregate_TD_10214_output);
    gettimeofday(&tv_r_Aggregate_10_739885_e, 0);

    struct timeval tv_r_JOIN_INNER_10_75583_s, tv_r_JOIN_INNER_10_75583_e;
    gettimeofday(&tv_r_JOIN_INNER_10_75583_s, 0);
    SW_JOIN_INNER_TD_10166(tbl_Filter_TD_11982_output, tbl_Filter_TD_11964_output, tbl_JOIN_INNER_TD_10166_output);
    gettimeofday(&tv_r_JOIN_INNER_10_75583_e, 0);

    struct timeval tv_r_Aggregate_10_954097_s, tv_r_Aggregate_10_954097_e;
    gettimeofday(&tv_r_Aggregate_10_954097_s, 0);
    SW_Aggregate_TD_10600(tbl_JOIN_INNER_TD_11124_output, tbl_Aggregate_TD_10600_output);
    gettimeofday(&tv_r_Aggregate_10_954097_e, 0);

    struct timeval tv_r_JOIN_INNER_10_206432_s, tv_r_JOIN_INNER_10_206432_e;
    gettimeofday(&tv_r_JOIN_INNER_10_206432_s, 0);
    SW_JOIN_INNER_TD_10314(tbl_Filter_TD_11326_output, tbl_Filter_TD_1141_output, tbl_JOIN_INNER_TD_10314_output);
    gettimeofday(&tv_r_JOIN_INNER_10_206432_e, 0);

    struct timeval tv_r_Aggregate_10_100558_s, tv_r_Aggregate_10_100558_e;
    gettimeofday(&tv_r_Aggregate_10_100558_s, 0);
    SW_Aggregate_TD_10306(tbl_Project_TD_11265_output, tbl_Aggregate_TD_10306_output);
    gettimeofday(&tv_r_Aggregate_10_100558_e, 0);

    struct timeval tv_r_Aggregate_9_491850_s, tv_r_Aggregate_9_491850_e;
    gettimeofday(&tv_r_Aggregate_9_491850_s, 0);
    SW_Aggregate_TD_9917(tbl_Aggregate_TD_10133_output, tbl_Aggregate_TD_9917_output);
    gettimeofday(&tv_r_Aggregate_9_491850_e, 0);

    struct timeval tv_r_Aggregate_9_462451_s, tv_r_Aggregate_9_462451_e;
    gettimeofday(&tv_r_Aggregate_9_462451_s, 0);
    SW_Aggregate_TD_9865(tbl_JOIN_INNER_TD_10243_output, tbl_Aggregate_TD_9865_output);
    gettimeofday(&tv_r_Aggregate_9_462451_e, 0);

    struct timeval tv_r_Aggregate_9_308156_s, tv_r_Aggregate_9_308156_e;
    gettimeofday(&tv_r_Aggregate_9_308156_s, 0);
    SW_Aggregate_TD_9186(tbl_Aggregate_TD_10251_output, tbl_Aggregate_TD_9186_output);
    gettimeofday(&tv_r_Aggregate_9_308156_e, 0);

    struct timeval tv_r_Aggregate_9_92437_s, tv_r_Aggregate_9_92437_e;
    gettimeofday(&tv_r_Aggregate_9_92437_s, 0);
    SW_Aggregate_TD_9944(tbl_JOIN_INNER_TD_10944_output, tbl_Aggregate_TD_9944_output);
    gettimeofday(&tv_r_Aggregate_9_92437_e, 0);

    struct timeval tv_r_Filter_9_905174_s, tv_r_Filter_9_905174_e;
    gettimeofday(&tv_r_Filter_9_905174_s, 0);
    SW_Filter_TD_9232(tbl_Aggregate_TD_10592_output, tbl_Filter_TD_9232_output);
    gettimeofday(&tv_r_Filter_9_905174_e, 0);

    struct timeval tv_r_Filter_9_490096_s, tv_r_Filter_9_490096_e;
    gettimeofday(&tv_r_Filter_9_490096_s, 0);
    SW_Filter_TD_9743(tbl_SerializeFromObject_TD_10314_input, tbl_Filter_TD_9743_output);
    gettimeofday(&tv_r_Filter_9_490096_e, 0);

    struct timeval tv_r_Aggregate_9_1634_s, tv_r_Aggregate_9_1634_e;
    gettimeofday(&tv_r_Aggregate_9_1634_s, 0);
    SW_Aggregate_TD_9685(tbl_Aggregate_TD_10214_output, tbl_Aggregate_TD_9685_output);
    gettimeofday(&tv_r_Aggregate_9_1634_e, 0);

    struct timeval tv_r_Aggregate_9_475673_s, tv_r_Aggregate_9_475673_e;
    gettimeofday(&tv_r_Aggregate_9_475673_s, 0);
    SW_Aggregate_TD_9316(tbl_JOIN_INNER_TD_10166_output, tbl_Aggregate_TD_9316_output);
    gettimeofday(&tv_r_Aggregate_9_475673_e, 0);

    struct timeval tv_r_Aggregate_9_812300_s, tv_r_Aggregate_9_812300_e;
    gettimeofday(&tv_r_Aggregate_9_812300_s, 0);
    SW_Aggregate_TD_9718(tbl_Aggregate_TD_10600_output, tbl_Aggregate_TD_9718_output);
    gettimeofday(&tv_r_Aggregate_9_812300_e, 0);

    struct timeval tv_r_Aggregate_9_869043_s, tv_r_Aggregate_9_869043_e;
    gettimeofday(&tv_r_Aggregate_9_869043_s, 0);
    SW_Aggregate_TD_9321(tbl_JOIN_INNER_TD_10314_output, tbl_Aggregate_TD_9321_output);
    gettimeofday(&tv_r_Aggregate_9_869043_e, 0);

    struct timeval tv_r_Filter_9_459172_s, tv_r_Filter_9_459172_e;
    gettimeofday(&tv_r_Filter_9_459172_s, 0);
    SW_Filter_TD_9908(tbl_Aggregate_TD_10306_output, tbl_Filter_TD_9908_output);
    gettimeofday(&tv_r_Filter_9_459172_e, 0);

    struct timeval tv_r_Filter_9_468619_s, tv_r_Filter_9_468619_e;
    gettimeofday(&tv_r_Filter_9_468619_s, 0);
    SW_Filter_TD_9916(tbl_SerializeFromObject_TD_10154_input, tbl_Filter_TD_9916_output);
    gettimeofday(&tv_r_Filter_9_468619_e, 0);

    struct timeval tv_r_Filter_8_451582_s, tv_r_Filter_8_451582_e;
    gettimeofday(&tv_r_Filter_8_451582_s, 0);
    SW_Filter_TD_848(tbl_Aggregate_TD_9865_output, tbl_Aggregate_TD_9917_output, tbl_Filter_TD_848_output);
    gettimeofday(&tv_r_Filter_8_451582_e, 0);

    struct timeval tv_r_Filter_8_256089_s, tv_r_Filter_8_256089_e;
    gettimeofday(&tv_r_Filter_8_256089_s, 0);
    SW_Filter_TD_8986(tbl_SerializeFromObject_TD_9729_input, tbl_Filter_TD_8986_output);
    gettimeofday(&tv_r_Filter_8_256089_e, 0);

    struct timeval tv_r_Filter_8_32759_s, tv_r_Filter_8_32759_e;
    gettimeofday(&tv_r_Filter_8_32759_s, 0);
    SW_Filter_TD_8268(tbl_Aggregate_TD_9944_output, tbl_Aggregate_TD_9186_output, tbl_Filter_TD_8268_output);
    gettimeofday(&tv_r_Filter_8_32759_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_676338_s, tv_r_JOIN_LEFTSEMI_8_676338_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_676338_s, 0);
    SW_JOIN_LEFTSEMI_TD_8635(tbl_Filter_TD_9743_output, tbl_Filter_TD_9232_output, tbl_JOIN_LEFTSEMI_TD_8635_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_676338_e, 0);

    struct timeval tv_r_Filter_8_732615_s, tv_r_Filter_8_732615_e;
    gettimeofday(&tv_r_Filter_8_732615_s, 0);
    SW_Filter_TD_8372(tbl_Aggregate_TD_9316_output, tbl_Aggregate_TD_9685_output, tbl_Filter_TD_8372_output);
    gettimeofday(&tv_r_Filter_8_732615_e, 0);

    struct timeval tv_r_Filter_8_333029_s, tv_r_Filter_8_333029_e;
    gettimeofday(&tv_r_Filter_8_333029_s, 0);
    SW_Filter_TD_8126(tbl_SerializeFromObject_TD_947_input, tbl_Filter_TD_8126_output);
    gettimeofday(&tv_r_Filter_8_333029_e, 0);

    struct timeval tv_r_Filter_8_635616_s, tv_r_Filter_8_635616_e;
    gettimeofday(&tv_r_Filter_8_635616_s, 0);
    SW_Filter_TD_8459(tbl_Aggregate_TD_9321_output, tbl_Aggregate_TD_9718_output, tbl_Filter_TD_8459_output);
    gettimeofday(&tv_r_Filter_8_635616_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_729488_s, tv_r_JOIN_LEFTSEMI_8_729488_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_729488_s, 0);
    SW_JOIN_LEFTSEMI_TD_8335(tbl_Filter_TD_9916_output, tbl_Filter_TD_9908_output, tbl_JOIN_LEFTSEMI_TD_8335_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_729488_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_8960_s, tv_r_JOIN_LEFTSEMI_7_8960_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_8960_s, 0);
    SW_JOIN_LEFTSEMI_TD_7610(tbl_Filter_TD_8986_output, tbl_Filter_TD_848_output, tbl_JOIN_LEFTSEMI_TD_7610_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_8960_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_727728_s, tv_r_JOIN_LEFTSEMI_7_727728_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_727728_s, 0);
    SW_JOIN_LEFTSEMI_TD_7644(tbl_JOIN_LEFTSEMI_TD_8635_output, tbl_Filter_TD_8268_output, tbl_JOIN_LEFTSEMI_TD_7644_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_727728_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_381371_s, tv_r_JOIN_LEFTSEMI_7_381371_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_381371_s, 0);
    SW_JOIN_LEFTSEMI_TD_712(tbl_Filter_TD_8126_output, tbl_Filter_TD_8372_output, tbl_JOIN_LEFTSEMI_TD_712_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_381371_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_588132_s, tv_r_JOIN_LEFTSEMI_7_588132_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_588132_s, 0);
    SW_JOIN_LEFTSEMI_TD_7638(tbl_JOIN_LEFTSEMI_TD_8335_output, tbl_Filter_TD_8459_output, tbl_JOIN_LEFTSEMI_TD_7638_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_588132_e, 0);

    struct timeval tv_r_Filter_6_26780_s, tv_r_Filter_6_26780_e;
    gettimeofday(&tv_r_Filter_6_26780_s, 0);
    SW_Filter_TD_659(tbl_SerializeFromObject_TD_7330_input, tbl_Filter_TD_659_output);
    gettimeofday(&tv_r_Filter_6_26780_e, 0);

    struct timeval tv_r_JOIN_INNER_6_916029_s, tv_r_JOIN_INNER_6_916029_e;
    gettimeofday(&tv_r_JOIN_INNER_6_916029_s, 0);
    SW_JOIN_INNER_TD_6734(tbl_JOIN_LEFTSEMI_TD_7644_output, tbl_JOIN_LEFTSEMI_TD_7610_output, tbl_JOIN_INNER_TD_6734_output);
    gettimeofday(&tv_r_JOIN_INNER_6_916029_e, 0);

    struct timeval tv_r_Filter_6_61672_s, tv_r_Filter_6_61672_e;
    gettimeofday(&tv_r_Filter_6_61672_s, 0);
    SW_Filter_TD_6952(tbl_SerializeFromObject_TD_7808_input, tbl_Filter_TD_6952_output);
    gettimeofday(&tv_r_Filter_6_61672_e, 0);

    struct timeval tv_r_JOIN_INNER_6_759433_s, tv_r_JOIN_INNER_6_759433_e;
    gettimeofday(&tv_r_JOIN_INNER_6_759433_s, 0);
    SW_JOIN_INNER_TD_6903(tbl_JOIN_LEFTSEMI_TD_7638_output, tbl_JOIN_LEFTSEMI_TD_712_output, tbl_JOIN_INNER_TD_6903_output);
    gettimeofday(&tv_r_JOIN_INNER_6_759433_e, 0);

    struct timeval tv_r_JOIN_INNER_5_317665_s, tv_r_JOIN_INNER_5_317665_e;
    gettimeofday(&tv_r_JOIN_INNER_5_317665_s, 0);
    SW_JOIN_INNER_TD_5458(tbl_JOIN_INNER_TD_6734_output, tbl_Filter_TD_659_output, tbl_JOIN_INNER_TD_5458_output);
    gettimeofday(&tv_r_JOIN_INNER_5_317665_e, 0);

    struct timeval tv_r_JOIN_INNER_5_539947_s, tv_r_JOIN_INNER_5_539947_e;
    gettimeofday(&tv_r_JOIN_INNER_5_539947_s, 0);
    SW_JOIN_INNER_TD_5285(tbl_JOIN_INNER_TD_6903_output, tbl_Filter_TD_6952_output, tbl_JOIN_INNER_TD_5285_output);
    gettimeofday(&tv_r_JOIN_INNER_5_539947_e, 0);

    struct timeval tv_r_Aggregate_4_980755_s, tv_r_Aggregate_4_980755_e;
    gettimeofday(&tv_r_Aggregate_4_980755_s, 0);
    SW_Aggregate_TD_4919(tbl_JOIN_INNER_TD_5458_output, tbl_Aggregate_TD_4919_output);
    gettimeofday(&tv_r_Aggregate_4_980755_e, 0);

    struct timeval tv_r_Aggregate_4_283516_s, tv_r_Aggregate_4_283516_e;
    gettimeofday(&tv_r_Aggregate_4_283516_s, 0);
    SW_Aggregate_TD_4154(tbl_JOIN_INNER_TD_5285_output, tbl_Aggregate_TD_4154_output);
    gettimeofday(&tv_r_Aggregate_4_283516_e, 0);

    struct timeval tv_r_Union_3_867652_s, tv_r_Union_3_867652_e;
    gettimeofday(&tv_r_Union_3_867652_s, 0);
    SW_Union_TD_3904(tbl_Aggregate_TD_4154_output, tbl_Aggregate_TD_4919_output, tbl_Union_TD_3904_output);
    gettimeofday(&tv_r_Union_3_867652_e, 0);

    struct timeval tv_r_Sort_2_275907_s, tv_r_Sort_2_275907_e;
    gettimeofday(&tv_r_Sort_2_275907_s, 0);
    SW_Sort_TD_2569(tbl_Union_TD_3904_output, tbl_Sort_TD_2569_output);
    gettimeofday(&tv_r_Sort_2_275907_e, 0);

    struct timeval tv_r_LocalLimit_1_307485_s, tv_r_LocalLimit_1_307485_e;
    gettimeofday(&tv_r_LocalLimit_1_307485_s, 0);
    SW_LocalLimit_TD_1875(tbl_Sort_TD_2569_output, tbl_LocalLimit_TD_1875_output);
    gettimeofday(&tv_r_LocalLimit_1_307485_e, 0);

    struct timeval tv_r_GlobalLimit_0_337466_s, tv_r_GlobalLimit_0_337466_e;
    gettimeofday(&tv_r_GlobalLimit_0_337466_s, 0);
    SW_GlobalLimit_TD_0259(tbl_LocalLimit_TD_1875_output, tbl_GlobalLimit_TD_0259_output);
    gettimeofday(&tv_r_GlobalLimit_0_337466_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_486977_s, &tv_r_Filter_14_486977_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15793_input: " << tbl_SerializeFromObject_TD_15793_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_105967_s, &tv_r_Filter_14_105967_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15255_input: " << tbl_SerializeFromObject_TD_15255_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_8691_s, &tv_r_Filter_14_8691_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15913_input: " << tbl_SerializeFromObject_TD_15913_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_944386_s, &tv_r_Filter_14_944386_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15589_input: " << tbl_SerializeFromObject_TD_15589_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_414944_s, &tv_r_Filter_13_414944_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14793_input: " << tbl_SerializeFromObject_TD_14793_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_388749_s, &tv_r_Filter_13_388749_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14929_input: " << tbl_SerializeFromObject_TD_14929_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_281131_s, &tv_r_Filter_13_281131_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14990_input: " << tbl_SerializeFromObject_TD_14990_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_96453_s, &tv_r_Filter_13_96453_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1489_input: " << tbl_SerializeFromObject_TD_1489_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_630416_s, &tv_r_Filter_13_630416_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14319_input: " << tbl_SerializeFromObject_TD_14319_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_359760_s, &tv_r_JOIN_INNER_13_359760_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14223_output: " << tbl_Filter_TD_14223_output.getNumRow() << " " << "tbl_Filter_TD_14503_output: " << tbl_Filter_TD_14503_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_894139_s, &tv_r_Filter_13_894139_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1448_input: " << tbl_SerializeFromObject_TD_1448_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_1028_s, &tv_r_Filter_13_1028_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14638_input: " << tbl_SerializeFromObject_TD_14638_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_641526_s, &tv_r_Filter_13_641526_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14829_input: " << tbl_SerializeFromObject_TD_14829_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_569376_s, &tv_r_Filter_13_569376_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14964_input: " << tbl_SerializeFromObject_TD_14964_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_978911_s, &tv_r_Filter_13_978911_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14519_input: " << tbl_SerializeFromObject_TD_14519_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_508058_s, &tv_r_JOIN_INNER_13_508058_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1426_output: " << tbl_Filter_TD_1426_output.getNumRow() << " " << "tbl_Filter_TD_14458_output: " << tbl_Filter_TD_14458_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_599972_s, &tv_r_Filter_12_599972_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13395_input: " << tbl_SerializeFromObject_TD_13395_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_226794_s, &tv_r_JOIN_INNER_12_226794_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_13449_output: " << tbl_Filter_TD_13449_output.getNumRow() << " " << "tbl_Filter_TD_1388_output: " << tbl_Filter_TD_1388_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_389411_s, &tv_r_Filter_12_389411_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13398_input: " << tbl_SerializeFromObject_TD_13398_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_292594_s, &tv_r_JOIN_INNER_12_292594_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_13663_output: " << tbl_Filter_TD_13663_output.getNumRow() << " " << "tbl_Filter_TD_13117_output: " << tbl_Filter_TD_13117_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_702082_s, &tv_r_JOIN_INNER_12_702082_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13227_output: " << tbl_JOIN_INNER_TD_13227_output.getNumRow() << " " << "tbl_Filter_TD_13146_output: " << tbl_Filter_TD_13146_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_562296_s, &tv_r_Filter_12_562296_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13351_input: " << tbl_SerializeFromObject_TD_13351_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_392918_s, &tv_r_JOIN_INNER_12_392918_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_13522_output: " << tbl_Filter_TD_13522_output.getNumRow() << " " << "tbl_Filter_TD_13254_output: " << tbl_Filter_TD_13254_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_9587_s, &tv_r_Filter_12_9587_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13276_input: " << tbl_SerializeFromObject_TD_13276_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_376347_s, &tv_r_JOIN_INNER_12_376347_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_13938_output: " << tbl_Filter_TD_13938_output.getNumRow() << " " << "tbl_Filter_TD_13842_output: " << tbl_Filter_TD_13842_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_184315_s, &tv_r_JOIN_INNER_12_184315_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13946_output: " << tbl_JOIN_INNER_TD_13946_output.getNumRow() << " " << "tbl_Filter_TD_13640_output: " << tbl_Filter_TD_13640_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_23790_s, &tv_r_JOIN_INNER_11_23790_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12759_output: " << tbl_JOIN_INNER_TD_12759_output.getNumRow() << " " << "tbl_Filter_TD_12201_output: " << tbl_Filter_TD_12201_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_763543_s, &tv_r_Filter_11_763543_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12570_input: " << tbl_SerializeFromObject_TD_12570_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_693761_s, &tv_r_Filter_11_693761_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12474_input: " << tbl_SerializeFromObject_TD_12474_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_516715_s, &tv_r_JOIN_INNER_11_516715_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12533_output: " << tbl_JOIN_INNER_TD_12533_output.getNumRow() << " " << "tbl_Filter_TD_12161_output: " << tbl_Filter_TD_12161_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_314936_s, &tv_r_Filter_11_314936_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12970_input: " << tbl_SerializeFromObject_TD_12970_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_112345_s, &tv_r_Filter_11_112345_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12839_input: " << tbl_SerializeFromObject_TD_12839_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_11: " << tvdiff(&tv_r_Project_11_222622_s, &tv_r_Project_11_222622_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12949_output: " << tbl_JOIN_INNER_TD_12949_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_254021_s, &tv_r_JOIN_INNER_11_254021_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12863_output: " << tbl_JOIN_INNER_TD_12863_output.getNumRow() << " " << "tbl_Filter_TD_12879_output: " << tbl_Filter_TD_12879_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_333049_s, &tv_r_Filter_11_333049_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12265_input: " << tbl_SerializeFromObject_TD_12265_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_180109_s, &tv_r_Filter_11_180109_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12760_input: " << tbl_SerializeFromObject_TD_12760_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_880601_s, &tv_r_JOIN_INNER_11_880601_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12888_output: " << tbl_JOIN_INNER_TD_12888_output.getNumRow() << " " << "tbl_Filter_TD_1256_output: " << tbl_Filter_TD_1256_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_113843_s, &tv_r_Filter_11_113843_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12414_input: " << tbl_SerializeFromObject_TD_12414_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_326310_s, &tv_r_Filter_11_326310_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12765_input: " << tbl_SerializeFromObject_TD_12765_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_11: " << tvdiff(&tv_r_Project_11_914057_s, &tv_r_Project_11_914057_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12484_output: " << tbl_JOIN_INNER_TD_12484_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_837473_s, &tv_r_Aggregate_10_837473_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11233_output: " << tbl_JOIN_INNER_TD_11233_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_654922_s, &tv_r_JOIN_INNER_10_654922_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1135_output: " << tbl_Filter_TD_1135_output.getNumRow() << " " << "tbl_Filter_TD_11663_output: " << tbl_Filter_TD_11663_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_388157_s, &tv_r_Aggregate_10_388157_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11921_output: " << tbl_JOIN_INNER_TD_11921_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_579137_s, &tv_r_JOIN_INNER_10_579137_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11755_output: " << tbl_Filter_TD_11755_output.getNumRow() << " " << "tbl_Filter_TD_11729_output: " << tbl_Filter_TD_11729_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_933401_s, &tv_r_Aggregate_10_933401_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_11749_output: " << tbl_Project_TD_11749_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_739885_s, &tv_r_Aggregate_10_739885_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11848_output: " << tbl_JOIN_INNER_TD_11848_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_75583_s, &tv_r_JOIN_INNER_10_75583_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11982_output: " << tbl_Filter_TD_11982_output.getNumRow() << " " << "tbl_Filter_TD_11964_output: " << tbl_Filter_TD_11964_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_954097_s, &tv_r_Aggregate_10_954097_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11124_output: " << tbl_JOIN_INNER_TD_11124_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_206432_s, &tv_r_JOIN_INNER_10_206432_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11326_output: " << tbl_Filter_TD_11326_output.getNumRow() << " " << "tbl_Filter_TD_1141_output: " << tbl_Filter_TD_1141_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_100558_s, &tv_r_Aggregate_10_100558_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_11265_output: " << tbl_Project_TD_11265_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_491850_s, &tv_r_Aggregate_9_491850_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10133_output: " << tbl_Aggregate_TD_10133_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_462451_s, &tv_r_Aggregate_9_462451_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10243_output: " << tbl_JOIN_INNER_TD_10243_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_308156_s, &tv_r_Aggregate_9_308156_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10251_output: " << tbl_Aggregate_TD_10251_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_92437_s, &tv_r_Aggregate_9_92437_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10944_output: " << tbl_JOIN_INNER_TD_10944_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_905174_s, &tv_r_Filter_9_905174_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10592_output: " << tbl_Aggregate_TD_10592_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_490096_s, &tv_r_Filter_9_490096_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10314_input: " << tbl_SerializeFromObject_TD_10314_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_1634_s, &tv_r_Aggregate_9_1634_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10214_output: " << tbl_Aggregate_TD_10214_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_475673_s, &tv_r_Aggregate_9_475673_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10166_output: " << tbl_JOIN_INNER_TD_10166_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_812300_s, &tv_r_Aggregate_9_812300_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10600_output: " << tbl_Aggregate_TD_10600_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_869043_s, &tv_r_Aggregate_9_869043_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10314_output: " << tbl_JOIN_INNER_TD_10314_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_459172_s, &tv_r_Filter_9_459172_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10306_output: " << tbl_Aggregate_TD_10306_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_468619_s, &tv_r_Filter_9_468619_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10154_input: " << tbl_SerializeFromObject_TD_10154_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_451582_s, &tv_r_Filter_8_451582_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9865_output: " << tbl_Aggregate_TD_9865_output.getNumRow() << " " << "tbl_Aggregate_TD_9917_output: " << tbl_Aggregate_TD_9917_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_256089_s, &tv_r_Filter_8_256089_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9729_input: " << tbl_SerializeFromObject_TD_9729_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_32759_s, &tv_r_Filter_8_32759_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9944_output: " << tbl_Aggregate_TD_9944_output.getNumRow() << " " << "tbl_Aggregate_TD_9186_output: " << tbl_Aggregate_TD_9186_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_676338_s, &tv_r_JOIN_LEFTSEMI_8_676338_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9743_output: " << tbl_Filter_TD_9743_output.getNumRow() << " " << "tbl_Filter_TD_9232_output: " << tbl_Filter_TD_9232_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_732615_s, &tv_r_Filter_8_732615_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9316_output: " << tbl_Aggregate_TD_9316_output.getNumRow() << " " << "tbl_Aggregate_TD_9685_output: " << tbl_Aggregate_TD_9685_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_333029_s, &tv_r_Filter_8_333029_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_947_input: " << tbl_SerializeFromObject_TD_947_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_635616_s, &tv_r_Filter_8_635616_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9321_output: " << tbl_Aggregate_TD_9321_output.getNumRow() << " " << "tbl_Aggregate_TD_9718_output: " << tbl_Aggregate_TD_9718_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_729488_s, &tv_r_JOIN_LEFTSEMI_8_729488_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9916_output: " << tbl_Filter_TD_9916_output.getNumRow() << " " << "tbl_Filter_TD_9908_output: " << tbl_Filter_TD_9908_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_8960_s, &tv_r_JOIN_LEFTSEMI_7_8960_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8986_output: " << tbl_Filter_TD_8986_output.getNumRow() << " " << "tbl_Filter_TD_848_output: " << tbl_Filter_TD_848_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_727728_s, &tv_r_JOIN_LEFTSEMI_7_727728_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_8635_output: " << tbl_JOIN_LEFTSEMI_TD_8635_output.getNumRow() << " " << "tbl_Filter_TD_8268_output: " << tbl_Filter_TD_8268_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_381371_s, &tv_r_JOIN_LEFTSEMI_7_381371_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8126_output: " << tbl_Filter_TD_8126_output.getNumRow() << " " << "tbl_Filter_TD_8372_output: " << tbl_Filter_TD_8372_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_588132_s, &tv_r_JOIN_LEFTSEMI_7_588132_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_8335_output: " << tbl_JOIN_LEFTSEMI_TD_8335_output.getNumRow() << " " << "tbl_Filter_TD_8459_output: " << tbl_Filter_TD_8459_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_26780_s, &tv_r_Filter_6_26780_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7330_input: " << tbl_SerializeFromObject_TD_7330_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_916029_s, &tv_r_JOIN_INNER_6_916029_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_7644_output: " << tbl_JOIN_LEFTSEMI_TD_7644_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7610_output: " << tbl_JOIN_LEFTSEMI_TD_7610_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_61672_s, &tv_r_Filter_6_61672_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7808_input: " << tbl_SerializeFromObject_TD_7808_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_759433_s, &tv_r_JOIN_INNER_6_759433_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_7638_output: " << tbl_JOIN_LEFTSEMI_TD_7638_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_712_output: " << tbl_JOIN_LEFTSEMI_TD_712_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_317665_s, &tv_r_JOIN_INNER_5_317665_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6734_output: " << tbl_JOIN_INNER_TD_6734_output.getNumRow() << " " << "tbl_Filter_TD_659_output: " << tbl_Filter_TD_659_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_539947_s, &tv_r_JOIN_INNER_5_539947_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6903_output: " << tbl_JOIN_INNER_TD_6903_output.getNumRow() << " " << "tbl_Filter_TD_6952_output: " << tbl_Filter_TD_6952_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_980755_s, &tv_r_Aggregate_4_980755_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5458_output: " << tbl_JOIN_INNER_TD_5458_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_283516_s, &tv_r_Aggregate_4_283516_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5285_output: " << tbl_JOIN_INNER_TD_5285_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_3: " << tvdiff(&tv_r_Union_3_867652_s, &tv_r_Union_3_867652_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4154_output: " << tbl_Aggregate_TD_4154_output.getNumRow() << " " << "tbl_Aggregate_TD_4919_output: " << tbl_Aggregate_TD_4919_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_275907_s, &tv_r_Sort_2_275907_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_3904_output: " << tbl_Union_TD_3904_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_307485_s, &tv_r_LocalLimit_1_307485_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2569_output: " << tbl_Sort_TD_2569_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_337466_s, &tv_r_GlobalLimit_0_337466_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1875_output: " << tbl_LocalLimit_TD_1875_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 9.84775 * 1000 << "ms" << std::endl; 
    return 0; 
}
