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

#include "cfgFunc_q9.hpp" 
#include "q9.hpp" 

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
    std::cout << "NOTE:running query #9\n."; 
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
    Table tbl_Project_TD_0368463_output("tbl_Project_TD_0368463_output", 6100000, 5, "");
    tbl_Project_TD_0368463_output.allocateHost();
    Table tbl_Filter_TD_174689_output("tbl_Filter_TD_174689_output", 6100000, 3, "");
    tbl_Filter_TD_174689_output.allocateHost();
    Table tbl_Aggregate_TD_1398302_output("tbl_Aggregate_TD_1398302_output", 6100000, 1, "");
    tbl_Aggregate_TD_1398302_output.allocateHost();
    Table tbl_Aggregate_TD_158487_output("tbl_Aggregate_TD_158487_output", 6100000, 1, "");
    tbl_Aggregate_TD_158487_output.allocateHost();
    Table tbl_Aggregate_TD_1359352_output("tbl_Aggregate_TD_1359352_output", 6100000, 1, "");
    tbl_Aggregate_TD_1359352_output.allocateHost();
    Table tbl_Aggregate_TD_1830110_output("tbl_Aggregate_TD_1830110_output", 6100000, 1, "");
    tbl_Aggregate_TD_1830110_output.allocateHost();
    Table tbl_Aggregate_TD_1755082_output("tbl_Aggregate_TD_1755082_output", 6100000, 1, "");
    tbl_Aggregate_TD_1755082_output.allocateHost();
    Table tbl_Aggregate_TD_1711449_output("tbl_Aggregate_TD_1711449_output", 6100000, 1, "");
    tbl_Aggregate_TD_1711449_output.allocateHost();
    Table tbl_Aggregate_TD_1665824_output("tbl_Aggregate_TD_1665824_output", 6100000, 1, "");
    tbl_Aggregate_TD_1665824_output.allocateHost();
    Table tbl_Aggregate_TD_1315833_output("tbl_Aggregate_TD_1315833_output", 6100000, 1, "");
    tbl_Aggregate_TD_1315833_output.allocateHost();
    Table tbl_Aggregate_TD_138085_output("tbl_Aggregate_TD_138085_output", 6100000, 1, "");
    tbl_Aggregate_TD_138085_output.allocateHost();
    Table tbl_Aggregate_TD_1333607_output("tbl_Aggregate_TD_1333607_output", 6100000, 1, "");
    tbl_Aggregate_TD_1333607_output.allocateHost();
    Table tbl_Aggregate_TD_1465069_output("tbl_Aggregate_TD_1465069_output", 6100000, 1, "");
    tbl_Aggregate_TD_1465069_output.allocateHost();
    Table tbl_Aggregate_TD_1141111_output("tbl_Aggregate_TD_1141111_output", 6100000, 1, "");
    tbl_Aggregate_TD_1141111_output.allocateHost();
    Table tbl_Aggregate_TD_1434288_output("tbl_Aggregate_TD_1434288_output", 6100000, 1, "");
    tbl_Aggregate_TD_1434288_output.allocateHost();
    Table tbl_Aggregate_TD_1312662_output("tbl_Aggregate_TD_1312662_output", 6100000, 1, "");
    tbl_Aggregate_TD_1312662_output.allocateHost();
    Table tbl_Aggregate_TD_1778739_output("tbl_Aggregate_TD_1778739_output", 6100000, 1, "");
    tbl_Aggregate_TD_1778739_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2751312_input;
    tbl_SerializeFromObject_TD_2751312_input = Table("reason", reason_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_2751312_input.addCol("r_reason_sk", 4);
    tbl_SerializeFromObject_TD_2751312_input.addCol("r_reason_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_2751312_input.addCol("r_reason_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_2751312_input.allocateHost();
    tbl_SerializeFromObject_TD_2751312_input.loadHost();
    Table tbl_Filter_TD_2726907_output("tbl_Filter_TD_2726907_output", 6100000, 23, "");
    tbl_Filter_TD_2726907_output.allocateHost();
    Table tbl_Filter_TD_2711011_output("tbl_Filter_TD_2711011_output", 6100000, 1, "");
    tbl_Filter_TD_2711011_output.allocateHost();
    Table tbl_Filter_TD_2438426_output("tbl_Filter_TD_2438426_output", 6100000, 1, "");
    tbl_Filter_TD_2438426_output.allocateHost();
    Table tbl_Filter_TD_2948971_output("tbl_Filter_TD_2948971_output", 6100000, 23, "");
    tbl_Filter_TD_2948971_output.allocateHost();
    Table tbl_Filter_TD_2550048_output("tbl_Filter_TD_2550048_output", 6100000, 1, "");
    tbl_Filter_TD_2550048_output.allocateHost();
    Table tbl_Filter_TD_2215193_output("tbl_Filter_TD_2215193_output", 6100000, 1, "");
    tbl_Filter_TD_2215193_output.allocateHost();
    Table tbl_Filter_TD_2319628_output("tbl_Filter_TD_2319628_output", 6100000, 23, "");
    tbl_Filter_TD_2319628_output.allocateHost();
    Table tbl_Filter_TD_2752602_output("tbl_Filter_TD_2752602_output", 6100000, 1, "");
    tbl_Filter_TD_2752602_output.allocateHost();
    Table tbl_Filter_TD_2505174_output("tbl_Filter_TD_2505174_output", 6100000, 1, "");
    tbl_Filter_TD_2505174_output.allocateHost();
    Table tbl_Filter_TD_2851011_output("tbl_Filter_TD_2851011_output", 6100000, 23, "");
    tbl_Filter_TD_2851011_output.allocateHost();
    Table tbl_Filter_TD_2297036_output("tbl_Filter_TD_2297036_output", 6100000, 1, "");
    tbl_Filter_TD_2297036_output.allocateHost();
    Table tbl_Filter_TD_2301173_output("tbl_Filter_TD_2301173_output", 6100000, 1, "");
    tbl_Filter_TD_2301173_output.allocateHost();
    Table tbl_Filter_TD_2261798_output("tbl_Filter_TD_2261798_output", 6100000, 23, "");
    tbl_Filter_TD_2261798_output.allocateHost();
    Table tbl_Filter_TD_2412978_output("tbl_Filter_TD_2412978_output", 6100000, 1, "");
    tbl_Filter_TD_2412978_output.allocateHost();
    Table tbl_Filter_TD_2676303_output("tbl_Filter_TD_2676303_output", 6100000, 1, "");
    tbl_Filter_TD_2676303_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3304907_input;
    tbl_SerializeFromObject_TD_3304907_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3304907_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3304907_input.allocateHost();
    tbl_SerializeFromObject_TD_3304907_input.loadHost();
    Table tbl_SerializeFromObject_TD_3295453_input;
    tbl_SerializeFromObject_TD_3295453_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3295453_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3295453_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3295453_input.allocateHost();
    tbl_SerializeFromObject_TD_3295453_input.loadHost();
    Table tbl_SerializeFromObject_TD_33427_input;
    tbl_SerializeFromObject_TD_33427_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_33427_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_33427_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_33427_input.allocateHost();
    tbl_SerializeFromObject_TD_33427_input.loadHost();
    Table tbl_SerializeFromObject_TD_3941823_input;
    tbl_SerializeFromObject_TD_3941823_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3941823_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3941823_input.allocateHost();
    tbl_SerializeFromObject_TD_3941823_input.loadHost();
    Table tbl_SerializeFromObject_TD_3190347_input;
    tbl_SerializeFromObject_TD_3190347_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3190347_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3190347_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3190347_input.allocateHost();
    tbl_SerializeFromObject_TD_3190347_input.loadHost();
    Table tbl_SerializeFromObject_TD_3399858_input;
    tbl_SerializeFromObject_TD_3399858_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3399858_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3399858_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3399858_input.allocateHost();
    tbl_SerializeFromObject_TD_3399858_input.loadHost();
    Table tbl_SerializeFromObject_TD_3915728_input;
    tbl_SerializeFromObject_TD_3915728_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3915728_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3915728_input.allocateHost();
    tbl_SerializeFromObject_TD_3915728_input.loadHost();
    Table tbl_SerializeFromObject_TD_3566713_input;
    tbl_SerializeFromObject_TD_3566713_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3566713_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3566713_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3566713_input.allocateHost();
    tbl_SerializeFromObject_TD_3566713_input.loadHost();
    Table tbl_SerializeFromObject_TD_3777986_input;
    tbl_SerializeFromObject_TD_3777986_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3777986_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3777986_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3777986_input.allocateHost();
    tbl_SerializeFromObject_TD_3777986_input.loadHost();
    Table tbl_SerializeFromObject_TD_3177959_input;
    tbl_SerializeFromObject_TD_3177959_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3177959_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3177959_input.allocateHost();
    tbl_SerializeFromObject_TD_3177959_input.loadHost();
    Table tbl_SerializeFromObject_TD_3237630_input;
    tbl_SerializeFromObject_TD_3237630_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3237630_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3237630_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3237630_input.allocateHost();
    tbl_SerializeFromObject_TD_3237630_input.loadHost();
    Table tbl_SerializeFromObject_TD_3157311_input;
    tbl_SerializeFromObject_TD_3157311_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3157311_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3157311_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3157311_input.allocateHost();
    tbl_SerializeFromObject_TD_3157311_input.loadHost();
    Table tbl_SerializeFromObject_TD_3350547_input;
    tbl_SerializeFromObject_TD_3350547_input = Table("store_sales", store_sales_n, 23, in_dir, "orc");
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_net_paid_inc_tax", 4);
    tbl_SerializeFromObject_TD_3350547_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_3350547_input.allocateHost();
    tbl_SerializeFromObject_TD_3350547_input.loadHost();
    Table tbl_SerializeFromObject_TD_3931825_input;
    tbl_SerializeFromObject_TD_3931825_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3931825_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_3931825_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3931825_input.allocateHost();
    tbl_SerializeFromObject_TD_3931825_input.loadHost();
    Table tbl_SerializeFromObject_TD_3159612_input;
    tbl_SerializeFromObject_TD_3159612_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3159612_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_3159612_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3159612_input.allocateHost();
    tbl_SerializeFromObject_TD_3159612_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_2_43070_s, tv_r_Filter_2_43070_e;
    gettimeofday(&tv_r_Filter_2_43070_s, 0);
    SW_Filter_TD_2676303(tbl_SerializeFromObject_TD_3159612_input, tbl_Filter_TD_2676303_output);
    gettimeofday(&tv_r_Filter_2_43070_e, 0);

    struct timeval tv_r_Filter_2_527063_s, tv_r_Filter_2_527063_e;
    gettimeofday(&tv_r_Filter_2_527063_s, 0);
    SW_Filter_TD_2412978(tbl_SerializeFromObject_TD_3931825_input, tbl_Filter_TD_2412978_output);
    gettimeofday(&tv_r_Filter_2_527063_e, 0);

    struct timeval tv_r_Filter_2_682252_s, tv_r_Filter_2_682252_e;
    gettimeofday(&tv_r_Filter_2_682252_s, 0);
    SW_Filter_TD_2261798(tbl_SerializeFromObject_TD_3350547_input, tbl_Filter_TD_2261798_output);
    gettimeofday(&tv_r_Filter_2_682252_e, 0);

    struct timeval tv_r_Filter_2_816663_s, tv_r_Filter_2_816663_e;
    gettimeofday(&tv_r_Filter_2_816663_s, 0);
    SW_Filter_TD_2301173(tbl_SerializeFromObject_TD_3157311_input, tbl_Filter_TD_2301173_output);
    gettimeofday(&tv_r_Filter_2_816663_e, 0);

    struct timeval tv_r_Filter_2_828327_s, tv_r_Filter_2_828327_e;
    gettimeofday(&tv_r_Filter_2_828327_s, 0);
    SW_Filter_TD_2297036(tbl_SerializeFromObject_TD_3237630_input, tbl_Filter_TD_2297036_output);
    gettimeofday(&tv_r_Filter_2_828327_e, 0);

    struct timeval tv_r_Filter_2_426509_s, tv_r_Filter_2_426509_e;
    gettimeofday(&tv_r_Filter_2_426509_s, 0);
    SW_Filter_TD_2851011(tbl_SerializeFromObject_TD_3177959_input, tbl_Filter_TD_2851011_output);
    gettimeofday(&tv_r_Filter_2_426509_e, 0);

    struct timeval tv_r_Filter_2_989703_s, tv_r_Filter_2_989703_e;
    gettimeofday(&tv_r_Filter_2_989703_s, 0);
    SW_Filter_TD_2505174(tbl_SerializeFromObject_TD_3777986_input, tbl_Filter_TD_2505174_output);
    gettimeofday(&tv_r_Filter_2_989703_e, 0);

    struct timeval tv_r_Filter_2_252882_s, tv_r_Filter_2_252882_e;
    gettimeofday(&tv_r_Filter_2_252882_s, 0);
    SW_Filter_TD_2752602(tbl_SerializeFromObject_TD_3566713_input, tbl_Filter_TD_2752602_output);
    gettimeofday(&tv_r_Filter_2_252882_e, 0);

    struct timeval tv_r_Filter_2_834310_s, tv_r_Filter_2_834310_e;
    gettimeofday(&tv_r_Filter_2_834310_s, 0);
    SW_Filter_TD_2319628(tbl_SerializeFromObject_TD_3915728_input, tbl_Filter_TD_2319628_output);
    gettimeofday(&tv_r_Filter_2_834310_e, 0);

    struct timeval tv_r_Filter_2_711385_s, tv_r_Filter_2_711385_e;
    gettimeofday(&tv_r_Filter_2_711385_s, 0);
    SW_Filter_TD_2215193(tbl_SerializeFromObject_TD_3399858_input, tbl_Filter_TD_2215193_output);
    gettimeofday(&tv_r_Filter_2_711385_e, 0);

    struct timeval tv_r_Filter_2_209307_s, tv_r_Filter_2_209307_e;
    gettimeofday(&tv_r_Filter_2_209307_s, 0);
    SW_Filter_TD_2550048(tbl_SerializeFromObject_TD_3190347_input, tbl_Filter_TD_2550048_output);
    gettimeofday(&tv_r_Filter_2_209307_e, 0);

    struct timeval tv_r_Filter_2_948537_s, tv_r_Filter_2_948537_e;
    gettimeofday(&tv_r_Filter_2_948537_s, 0);
    SW_Filter_TD_2948971(tbl_SerializeFromObject_TD_3941823_input, tbl_Filter_TD_2948971_output);
    gettimeofday(&tv_r_Filter_2_948537_e, 0);

    struct timeval tv_r_Filter_2_230583_s, tv_r_Filter_2_230583_e;
    gettimeofday(&tv_r_Filter_2_230583_s, 0);
    SW_Filter_TD_2438426(tbl_SerializeFromObject_TD_33427_input, tbl_Filter_TD_2438426_output);
    gettimeofday(&tv_r_Filter_2_230583_e, 0);

    struct timeval tv_r_Filter_2_618518_s, tv_r_Filter_2_618518_e;
    gettimeofday(&tv_r_Filter_2_618518_s, 0);
    SW_Filter_TD_2711011(tbl_SerializeFromObject_TD_3295453_input, tbl_Filter_TD_2711011_output);
    gettimeofday(&tv_r_Filter_2_618518_e, 0);

    struct timeval tv_r_Filter_2_508022_s, tv_r_Filter_2_508022_e;
    gettimeofday(&tv_r_Filter_2_508022_s, 0);
    SW_Filter_TD_2726907(tbl_SerializeFromObject_TD_3304907_input, tbl_Filter_TD_2726907_output);
    gettimeofday(&tv_r_Filter_2_508022_e, 0);

    struct timeval tv_r_Aggregate_1_194618_s, tv_r_Aggregate_1_194618_e;
    gettimeofday(&tv_r_Aggregate_1_194618_s, 0);
    SW_Aggregate_TD_1778739(tbl_Filter_TD_2676303_output, tbl_Aggregate_TD_1778739_output);
    gettimeofday(&tv_r_Aggregate_1_194618_e, 0);

    struct timeval tv_r_Aggregate_1_218169_s, tv_r_Aggregate_1_218169_e;
    gettimeofday(&tv_r_Aggregate_1_218169_s, 0);
    SW_Aggregate_TD_1312662(tbl_Filter_TD_2412978_output, tbl_Aggregate_TD_1312662_output);
    gettimeofday(&tv_r_Aggregate_1_218169_e, 0);

    struct timeval tv_r_Aggregate_1_129913_s, tv_r_Aggregate_1_129913_e;
    gettimeofday(&tv_r_Aggregate_1_129913_s, 0);
    SW_Aggregate_TD_1434288(tbl_Filter_TD_2261798_output, tbl_Aggregate_TD_1434288_output);
    gettimeofday(&tv_r_Aggregate_1_129913_e, 0);

    struct timeval tv_r_Aggregate_1_541340_s, tv_r_Aggregate_1_541340_e;
    gettimeofday(&tv_r_Aggregate_1_541340_s, 0);
    SW_Aggregate_TD_1141111(tbl_Filter_TD_2301173_output, tbl_Aggregate_TD_1141111_output);
    gettimeofday(&tv_r_Aggregate_1_541340_e, 0);

    struct timeval tv_r_Aggregate_1_390573_s, tv_r_Aggregate_1_390573_e;
    gettimeofday(&tv_r_Aggregate_1_390573_s, 0);
    SW_Aggregate_TD_1465069(tbl_Filter_TD_2297036_output, tbl_Aggregate_TD_1465069_output);
    gettimeofday(&tv_r_Aggregate_1_390573_e, 0);

    struct timeval tv_r_Aggregate_1_239326_s, tv_r_Aggregate_1_239326_e;
    gettimeofday(&tv_r_Aggregate_1_239326_s, 0);
    SW_Aggregate_TD_1333607(tbl_Filter_TD_2851011_output, tbl_Aggregate_TD_1333607_output);
    gettimeofday(&tv_r_Aggregate_1_239326_e, 0);

    struct timeval tv_r_Aggregate_1_193884_s, tv_r_Aggregate_1_193884_e;
    gettimeofday(&tv_r_Aggregate_1_193884_s, 0);
    SW_Aggregate_TD_138085(tbl_Filter_TD_2505174_output, tbl_Aggregate_TD_138085_output);
    gettimeofday(&tv_r_Aggregate_1_193884_e, 0);

    struct timeval tv_r_Aggregate_1_165353_s, tv_r_Aggregate_1_165353_e;
    gettimeofday(&tv_r_Aggregate_1_165353_s, 0);
    SW_Aggregate_TD_1315833(tbl_Filter_TD_2752602_output, tbl_Aggregate_TD_1315833_output);
    gettimeofday(&tv_r_Aggregate_1_165353_e, 0);

    struct timeval tv_r_Aggregate_1_658862_s, tv_r_Aggregate_1_658862_e;
    gettimeofday(&tv_r_Aggregate_1_658862_s, 0);
    SW_Aggregate_TD_1665824(tbl_Filter_TD_2319628_output, tbl_Aggregate_TD_1665824_output);
    gettimeofday(&tv_r_Aggregate_1_658862_e, 0);

    struct timeval tv_r_Aggregate_1_180507_s, tv_r_Aggregate_1_180507_e;
    gettimeofday(&tv_r_Aggregate_1_180507_s, 0);
    SW_Aggregate_TD_1711449(tbl_Filter_TD_2215193_output, tbl_Aggregate_TD_1711449_output);
    gettimeofday(&tv_r_Aggregate_1_180507_e, 0);

    struct timeval tv_r_Aggregate_1_865830_s, tv_r_Aggregate_1_865830_e;
    gettimeofday(&tv_r_Aggregate_1_865830_s, 0);
    SW_Aggregate_TD_1755082(tbl_Filter_TD_2550048_output, tbl_Aggregate_TD_1755082_output);
    gettimeofday(&tv_r_Aggregate_1_865830_e, 0);

    struct timeval tv_r_Aggregate_1_623602_s, tv_r_Aggregate_1_623602_e;
    gettimeofday(&tv_r_Aggregate_1_623602_s, 0);
    SW_Aggregate_TD_1830110(tbl_Filter_TD_2948971_output, tbl_Aggregate_TD_1830110_output);
    gettimeofday(&tv_r_Aggregate_1_623602_e, 0);

    struct timeval tv_r_Aggregate_1_721947_s, tv_r_Aggregate_1_721947_e;
    gettimeofday(&tv_r_Aggregate_1_721947_s, 0);
    SW_Aggregate_TD_1359352(tbl_Filter_TD_2438426_output, tbl_Aggregate_TD_1359352_output);
    gettimeofday(&tv_r_Aggregate_1_721947_e, 0);

    struct timeval tv_r_Aggregate_1_849471_s, tv_r_Aggregate_1_849471_e;
    gettimeofday(&tv_r_Aggregate_1_849471_s, 0);
    SW_Aggregate_TD_158487(tbl_Filter_TD_2711011_output, tbl_Aggregate_TD_158487_output);
    gettimeofday(&tv_r_Aggregate_1_849471_e, 0);

    struct timeval tv_r_Aggregate_1_758169_s, tv_r_Aggregate_1_758169_e;
    gettimeofday(&tv_r_Aggregate_1_758169_s, 0);
    SW_Aggregate_TD_1398302(tbl_Filter_TD_2726907_output, tbl_Aggregate_TD_1398302_output);
    gettimeofday(&tv_r_Aggregate_1_758169_e, 0);

    struct timeval tv_r_Filter_1_565770_s, tv_r_Filter_1_565770_e;
    gettimeofday(&tv_r_Filter_1_565770_s, 0);
    SW_Filter_TD_174689(tbl_SerializeFromObject_TD_2751312_input, tbl_Filter_TD_174689_output);
    gettimeofday(&tv_r_Filter_1_565770_e, 0);

    struct timeval tv_r_Project_0_338667_s, tv_r_Project_0_338667_e;
    gettimeofday(&tv_r_Project_0_338667_s, 0);
    SW_Project_TD_0368463(tbl_Filter_TD_174689_output, tbl_Aggregate_TD_1398302_output, tbl_Aggregate_TD_158487_output, tbl_Aggregate_TD_1359352_output, tbl_Aggregate_TD_1830110_output, tbl_Aggregate_TD_1755082_output, tbl_Aggregate_TD_1711449_output, tbl_Aggregate_TD_1665824_output, tbl_Aggregate_TD_1315833_output, tbl_Aggregate_TD_138085_output, tbl_Aggregate_TD_1333607_output, tbl_Aggregate_TD_1465069_output, tbl_Aggregate_TD_1141111_output, tbl_Aggregate_TD_1434288_output, tbl_Aggregate_TD_1312662_output, tbl_Aggregate_TD_1778739_output, tbl_Project_TD_0368463_output);
    gettimeofday(&tv_r_Project_0_338667_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_43070_s, &tv_r_Filter_2_43070_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3159612_input: " << tbl_SerializeFromObject_TD_3159612_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_527063_s, &tv_r_Filter_2_527063_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3931825_input: " << tbl_SerializeFromObject_TD_3931825_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_682252_s, &tv_r_Filter_2_682252_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3350547_input: " << tbl_SerializeFromObject_TD_3350547_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_816663_s, &tv_r_Filter_2_816663_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3157311_input: " << tbl_SerializeFromObject_TD_3157311_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_828327_s, &tv_r_Filter_2_828327_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3237630_input: " << tbl_SerializeFromObject_TD_3237630_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_426509_s, &tv_r_Filter_2_426509_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3177959_input: " << tbl_SerializeFromObject_TD_3177959_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_989703_s, &tv_r_Filter_2_989703_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3777986_input: " << tbl_SerializeFromObject_TD_3777986_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_252882_s, &tv_r_Filter_2_252882_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3566713_input: " << tbl_SerializeFromObject_TD_3566713_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_834310_s, &tv_r_Filter_2_834310_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3915728_input: " << tbl_SerializeFromObject_TD_3915728_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_711385_s, &tv_r_Filter_2_711385_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3399858_input: " << tbl_SerializeFromObject_TD_3399858_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_209307_s, &tv_r_Filter_2_209307_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3190347_input: " << tbl_SerializeFromObject_TD_3190347_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_948537_s, &tv_r_Filter_2_948537_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3941823_input: " << tbl_SerializeFromObject_TD_3941823_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_230583_s, &tv_r_Filter_2_230583_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_33427_input: " << tbl_SerializeFromObject_TD_33427_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_618518_s, &tv_r_Filter_2_618518_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3295453_input: " << tbl_SerializeFromObject_TD_3295453_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_508022_s, &tv_r_Filter_2_508022_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3304907_input: " << tbl_SerializeFromObject_TD_3304907_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_194618_s, &tv_r_Aggregate_1_194618_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2676303_output: " << tbl_Filter_TD_2676303_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_218169_s, &tv_r_Aggregate_1_218169_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2412978_output: " << tbl_Filter_TD_2412978_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_129913_s, &tv_r_Aggregate_1_129913_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2261798_output: " << tbl_Filter_TD_2261798_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_541340_s, &tv_r_Aggregate_1_541340_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2301173_output: " << tbl_Filter_TD_2301173_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_390573_s, &tv_r_Aggregate_1_390573_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2297036_output: " << tbl_Filter_TD_2297036_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_239326_s, &tv_r_Aggregate_1_239326_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2851011_output: " << tbl_Filter_TD_2851011_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_193884_s, &tv_r_Aggregate_1_193884_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2505174_output: " << tbl_Filter_TD_2505174_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_165353_s, &tv_r_Aggregate_1_165353_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2752602_output: " << tbl_Filter_TD_2752602_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_658862_s, &tv_r_Aggregate_1_658862_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2319628_output: " << tbl_Filter_TD_2319628_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_180507_s, &tv_r_Aggregate_1_180507_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2215193_output: " << tbl_Filter_TD_2215193_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_865830_s, &tv_r_Aggregate_1_865830_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2550048_output: " << tbl_Filter_TD_2550048_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_623602_s, &tv_r_Aggregate_1_623602_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2948971_output: " << tbl_Filter_TD_2948971_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_721947_s, &tv_r_Aggregate_1_721947_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2438426_output: " << tbl_Filter_TD_2438426_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_849471_s, &tv_r_Aggregate_1_849471_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2711011_output: " << tbl_Filter_TD_2711011_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_758169_s, &tv_r_Aggregate_1_758169_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2726907_output: " << tbl_Filter_TD_2726907_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_1: " << tvdiff(&tv_r_Filter_1_565770_s, &tv_r_Filter_1_565770_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2751312_input: " << tbl_SerializeFromObject_TD_2751312_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_0: " << tvdiff(&tv_r_Project_0_338667_s, &tv_r_Project_0_338667_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_174689_output: " << tbl_Filter_TD_174689_output.getNumRow() << " " << "tbl_Aggregate_TD_1398302_output: " << tbl_Aggregate_TD_1398302_output.getNumRow() << " " << "tbl_Aggregate_TD_158487_output: " << tbl_Aggregate_TD_158487_output.getNumRow() << " " << "tbl_Aggregate_TD_1359352_output: " << tbl_Aggregate_TD_1359352_output.getNumRow() << " " << "tbl_Aggregate_TD_1830110_output: " << tbl_Aggregate_TD_1830110_output.getNumRow() << " " << "tbl_Aggregate_TD_1755082_output: " << tbl_Aggregate_TD_1755082_output.getNumRow() << " " << "tbl_Aggregate_TD_1711449_output: " << tbl_Aggregate_TD_1711449_output.getNumRow() << " " << "tbl_Aggregate_TD_1665824_output: " << tbl_Aggregate_TD_1665824_output.getNumRow() << " " << "tbl_Aggregate_TD_1315833_output: " << tbl_Aggregate_TD_1315833_output.getNumRow() << " " << "tbl_Aggregate_TD_138085_output: " << tbl_Aggregate_TD_138085_output.getNumRow() << " " << "tbl_Aggregate_TD_1333607_output: " << tbl_Aggregate_TD_1333607_output.getNumRow() << " " << "tbl_Aggregate_TD_1465069_output: " << tbl_Aggregate_TD_1465069_output.getNumRow() << " " << "tbl_Aggregate_TD_1141111_output: " << tbl_Aggregate_TD_1141111_output.getNumRow() << " " << "tbl_Aggregate_TD_1434288_output: " << tbl_Aggregate_TD_1434288_output.getNumRow() << " " << "tbl_Aggregate_TD_1312662_output: " << tbl_Aggregate_TD_1312662_output.getNumRow() << " " << "tbl_Aggregate_TD_1778739_output: " << tbl_Aggregate_TD_1778739_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.3496494 * 1000 << "ms" << std::endl; 
    return 0; 
}
