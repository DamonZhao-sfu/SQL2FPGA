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

#include "cfgFunc_q4.hpp" 
#include "q4.hpp" 

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
    std::cout << "NOTE:running query #4\n."; 
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
    Table tbl_GlobalLimit_TD_0299599_output("tbl_GlobalLimit_TD_0299599_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0299599_output.allocateHost();
    Table tbl_LocalLimit_TD_1614135_output("tbl_LocalLimit_TD_1614135_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1614135_output.allocateHost();
    Table tbl_Sort_TD_2994985_output("tbl_Sort_TD_2994985_output", 6100000, 4, "");
    tbl_Sort_TD_2994985_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3765754_output("tbl_JOIN_INNER_TD_3765754_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3765754_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4669401_output("tbl_JOIN_INNER_TD_4669401_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4669401_output.allocateHost();
    Table tbl_Aggregate_TD_4772058_output("tbl_Aggregate_TD_4772058_output", 6100000, 2, "");
    tbl_Aggregate_TD_4772058_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5128726_output("tbl_JOIN_INNER_TD_5128726_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5128726_output.allocateHost();
    Table tbl_Project_TD_5818991_output("tbl_Project_TD_5818991_output", 6100000, 2, "");
    tbl_Project_TD_5818991_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5276742_output("tbl_JOIN_INNER_TD_5276742_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_5276742_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6575003_output("tbl_JOIN_INNER_TD_6575003_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_6575003_output.allocateHost();
    Table tbl_Aggregate_TD_69030_output("tbl_Aggregate_TD_69030_output", 6100000, 2, "");
    tbl_Aggregate_TD_69030_output.allocateHost();
    Table tbl_Filter_TD_6981786_output("tbl_Filter_TD_6981786_output", 6100000, 2, "");
    tbl_Filter_TD_6981786_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6727864_output("tbl_JOIN_INNER_TD_6727864_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_6727864_output.allocateHost();
    Table tbl_Filter_TD_6302538_output("tbl_Filter_TD_6302538_output", 6100000, 2, "");
    tbl_Filter_TD_6302538_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7561851_output("tbl_JOIN_INNER_TD_7561851_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7561851_output.allocateHost();
    Table tbl_Project_TD_7655473_output("tbl_Project_TD_7655473_output", 6100000, 2, "");
    tbl_Project_TD_7655473_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7443318_output("tbl_JOIN_INNER_TD_7443318_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_7443318_output.allocateHost();
    Table tbl_Aggregate_TD_7996801_output("tbl_Aggregate_TD_7996801_output", 6100000, 2, "");
    tbl_Aggregate_TD_7996801_output.allocateHost();
    Table tbl_Filter_TD_7207555_output("tbl_Filter_TD_7207555_output", 6100000, 8, "");
    tbl_Filter_TD_7207555_output.allocateHost();
    Table tbl_Filter_TD_7609836_output("tbl_Filter_TD_7609836_output", 6100000, 6, "");
    tbl_Filter_TD_7609836_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7411780_input;
    tbl_SerializeFromObject_TD_7411780_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7411780_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7411780_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7411780_input.allocateHost();
    tbl_SerializeFromObject_TD_7411780_input.loadHost();
    Table tbl_Filter_TD_8950399_output("tbl_Filter_TD_8950399_output", 6100000, 2, "");
    tbl_Filter_TD_8950399_output.allocateHost();
    Table tbl_Aggregate_TD_8666531_output("tbl_Aggregate_TD_8666531_output", 6100000, 5, "");
    tbl_Aggregate_TD_8666531_output.allocateHost();
    Table tbl_Filter_TD_8663184_output("tbl_Filter_TD_8663184_output", 6100000, 2, "");
    tbl_Filter_TD_8663184_output.allocateHost();
    Table tbl_JOIN_INNER_TD_820844_output("tbl_JOIN_INNER_TD_820844_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_820844_output.allocateHost();
    Table tbl_Filter_TD_8867464_output("tbl_Filter_TD_8867464_output", 6100000, 2, "");
    tbl_Filter_TD_8867464_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8943088_output("tbl_JOIN_INNER_TD_8943088_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_8943088_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8433045_input;
    tbl_SerializeFromObject_TD_8433045_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_8433045_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8433045_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8433045_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8433045_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8433045_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8433045_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8433045_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8433045_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8433045_input.allocateHost();
    tbl_SerializeFromObject_TD_8433045_input.loadHost();
    Table tbl_SerializeFromObject_TD_8783426_input;
    tbl_SerializeFromObject_TD_8783426_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_8783426_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8783426_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_8783426_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_8783426_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8783426_input.addCol("ws_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_8783426_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_8783426_input.allocateHost();
    tbl_SerializeFromObject_TD_8783426_input.loadHost();
    Table tbl_Aggregate_TD_9963489_output("tbl_Aggregate_TD_9963489_output", 6100000, 2, "");
    tbl_Aggregate_TD_9963489_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9356468_output("tbl_JOIN_INNER_TD_9356468_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_9356468_output.allocateHost();
    Table tbl_Aggregate_TD_9144555_output("tbl_Aggregate_TD_9144555_output", 6100000, 2, "");
    tbl_Aggregate_TD_9144555_output.allocateHost();
    Table tbl_Filter_TD_9569103_output("tbl_Filter_TD_9569103_output", 6100000, 8, "");
    tbl_Filter_TD_9569103_output.allocateHost();
    Table tbl_Filter_TD_9789104_output("tbl_Filter_TD_9789104_output", 6100000, 6, "");
    tbl_Filter_TD_9789104_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9458072_input;
    tbl_SerializeFromObject_TD_9458072_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9458072_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9458072_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9458072_input.allocateHost();
    tbl_SerializeFromObject_TD_9458072_input.loadHost();
    Table tbl_JOIN_INNER_TD_9630810_output("tbl_JOIN_INNER_TD_9630810_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_9630810_output.allocateHost();
    Table tbl_Filter_TD_961219_output("tbl_Filter_TD_961219_output", 6100000, 2, "");
    tbl_Filter_TD_961219_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10177913_output("tbl_JOIN_INNER_TD_10177913_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_10177913_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10465721_output("tbl_JOIN_INNER_TD_10465721_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_10465721_output.allocateHost();
    Table tbl_Filter_TD_10614419_output("tbl_Filter_TD_10614419_output", 6100000, 2, "");
    tbl_Filter_TD_10614419_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10141607_output("tbl_JOIN_INNER_TD_10141607_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_10141607_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10974437_input;
    tbl_SerializeFromObject_TD_10974437_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_10974437_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_10974437_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10974437_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10974437_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10974437_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10974437_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10974437_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10974437_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10974437_input.allocateHost();
    tbl_SerializeFromObject_TD_10974437_input.loadHost();
    Table tbl_SerializeFromObject_TD_10973123_input;
    tbl_SerializeFromObject_TD_10973123_input = Table("catalog_sales", catalog_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_10973123_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10973123_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_10973123_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_10973123_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10973123_input.addCol("cs_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_10973123_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_10973123_input.allocateHost();
    tbl_SerializeFromObject_TD_10973123_input.loadHost();
    Table tbl_Filter_TD_10459196_output("tbl_Filter_TD_10459196_output", 6100000, 8, "");
    tbl_Filter_TD_10459196_output.allocateHost();
    Table tbl_Filter_TD_10149543_output("tbl_Filter_TD_10149543_output", 6100000, 6, "");
    tbl_Filter_TD_10149543_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10508058_input;
    tbl_SerializeFromObject_TD_10508058_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10508058_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10508058_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10508058_input.allocateHost();
    tbl_SerializeFromObject_TD_10508058_input.loadHost();
    Table tbl_JOIN_INNER_TD_11939424_output("tbl_JOIN_INNER_TD_11939424_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_11939424_output.allocateHost();
    Table tbl_Filter_TD_11927477_output("tbl_Filter_TD_11927477_output", 6100000, 2, "");
    tbl_Filter_TD_11927477_output.allocateHost();
    Table tbl_Filter_TD_11405552_output("tbl_Filter_TD_11405552_output", 6100000, 8, "");
    tbl_Filter_TD_11405552_output.allocateHost();
    Table tbl_Filter_TD_11400518_output("tbl_Filter_TD_11400518_output", 6100000, 6, "");
    tbl_Filter_TD_11400518_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11334849_input;
    tbl_SerializeFromObject_TD_11334849_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11334849_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11334849_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11334849_input.allocateHost();
    tbl_SerializeFromObject_TD_11334849_input.loadHost();
    Table tbl_JOIN_INNER_TD_11186879_output("tbl_JOIN_INNER_TD_11186879_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_11186879_output.allocateHost();
    Table tbl_Filter_TD_11563663_output("tbl_Filter_TD_11563663_output", 6100000, 2, "");
    tbl_Filter_TD_11563663_output.allocateHost();
    Table tbl_SerializeFromObject_TD_118922_input;
    tbl_SerializeFromObject_TD_118922_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_118922_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_118922_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_118922_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_118922_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_118922_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_118922_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_118922_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_118922_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_118922_input.allocateHost();
    tbl_SerializeFromObject_TD_118922_input.loadHost();
    Table tbl_SerializeFromObject_TD_11889060_input;
    tbl_SerializeFromObject_TD_11889060_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_11889060_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11889060_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11889060_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_11889060_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11889060_input.addCol("ws_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_11889060_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_11889060_input.allocateHost();
    tbl_SerializeFromObject_TD_11889060_input.loadHost();
    Table tbl_Filter_TD_12749147_output("tbl_Filter_TD_12749147_output", 6100000, 8, "");
    tbl_Filter_TD_12749147_output.allocateHost();
    Table tbl_Filter_TD_12786611_output("tbl_Filter_TD_12786611_output", 6100000, 6, "");
    tbl_Filter_TD_12786611_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12452974_input;
    tbl_SerializeFromObject_TD_12452974_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12452974_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12452974_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12452974_input.allocateHost();
    tbl_SerializeFromObject_TD_12452974_input.loadHost();
    Table tbl_SerializeFromObject_TD_1221111_input;
    tbl_SerializeFromObject_TD_1221111_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_1221111_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_1221111_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1221111_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1221111_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1221111_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1221111_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1221111_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1221111_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1221111_input.allocateHost();
    tbl_SerializeFromObject_TD_1221111_input.loadHost();
    Table tbl_SerializeFromObject_TD_12756620_input;
    tbl_SerializeFromObject_TD_12756620_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_12756620_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12756620_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12756620_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_12756620_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12756620_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_12756620_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_12756620_input.allocateHost();
    tbl_SerializeFromObject_TD_12756620_input.loadHost();
    Table tbl_Filter_TD_12994221_output("tbl_Filter_TD_12994221_output", 6100000, 8, "");
    tbl_Filter_TD_12994221_output.allocateHost();
    Table tbl_Filter_TD_12474839_output("tbl_Filter_TD_12474839_output", 6100000, 6, "");
    tbl_Filter_TD_12474839_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12300195_input;
    tbl_SerializeFromObject_TD_12300195_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12300195_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12300195_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12300195_input.allocateHost();
    tbl_SerializeFromObject_TD_12300195_input.loadHost();
    Table tbl_SerializeFromObject_TD_1372687_input;
    tbl_SerializeFromObject_TD_1372687_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_1372687_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_1372687_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1372687_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1372687_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1372687_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1372687_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1372687_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1372687_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1372687_input.allocateHost();
    tbl_SerializeFromObject_TD_1372687_input.loadHost();
    Table tbl_SerializeFromObject_TD_13256979_input;
    tbl_SerializeFromObject_TD_13256979_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13256979_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13256979_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_13256979_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_13256979_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13256979_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_13256979_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_13256979_input.allocateHost();
    tbl_SerializeFromObject_TD_13256979_input.loadHost();
    Table tbl_SerializeFromObject_TD_13484648_input;
    tbl_SerializeFromObject_TD_13484648_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_13484648_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_13484648_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13484648_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13484648_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13484648_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13484648_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13484648_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13484648_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13484648_input.allocateHost();
    tbl_SerializeFromObject_TD_13484648_input.loadHost();
    Table tbl_SerializeFromObject_TD_13515098_input;
    tbl_SerializeFromObject_TD_13515098_input = Table("catalog_sales", catalog_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13515098_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13515098_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_13515098_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_13515098_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13515098_input.addCol("cs_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_13515098_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_13515098_input.allocateHost();
    tbl_SerializeFromObject_TD_13515098_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_432478_s, tv_r_Filter_12_432478_e;
    gettimeofday(&tv_r_Filter_12_432478_s, 0);
    SW_Filter_TD_12474839(tbl_SerializeFromObject_TD_13515098_input, tbl_Filter_TD_12474839_output);
    gettimeofday(&tv_r_Filter_12_432478_e, 0);

    struct timeval tv_r_Filter_12_189078_s, tv_r_Filter_12_189078_e;
    gettimeofday(&tv_r_Filter_12_189078_s, 0);
    SW_Filter_TD_12994221(tbl_SerializeFromObject_TD_13484648_input, tbl_Filter_TD_12994221_output);
    gettimeofday(&tv_r_Filter_12_189078_e, 0);

    struct timeval tv_r_Filter_12_98044_s, tv_r_Filter_12_98044_e;
    gettimeofday(&tv_r_Filter_12_98044_s, 0);
    SW_Filter_TD_12786611(tbl_SerializeFromObject_TD_13256979_input, tbl_Filter_TD_12786611_output);
    gettimeofday(&tv_r_Filter_12_98044_e, 0);

    struct timeval tv_r_Filter_12_243260_s, tv_r_Filter_12_243260_e;
    gettimeofday(&tv_r_Filter_12_243260_s, 0);
    SW_Filter_TD_12749147(tbl_SerializeFromObject_TD_1372687_input, tbl_Filter_TD_12749147_output);
    gettimeofday(&tv_r_Filter_12_243260_e, 0);

    struct timeval tv_r_Filter_11_46030_s, tv_r_Filter_11_46030_e;
    gettimeofday(&tv_r_Filter_11_46030_s, 0);
    SW_Filter_TD_11563663(tbl_SerializeFromObject_TD_12300195_input, tbl_Filter_TD_11563663_output);
    gettimeofday(&tv_r_Filter_11_46030_e, 0);

    struct timeval tv_r_JOIN_INNER_11_785056_s, tv_r_JOIN_INNER_11_785056_e;
    gettimeofday(&tv_r_JOIN_INNER_11_785056_s, 0);
    SW_JOIN_INNER_TD_11186879(tbl_Filter_TD_12994221_output, tbl_Filter_TD_12474839_output, tbl_JOIN_INNER_TD_11186879_output);
    gettimeofday(&tv_r_JOIN_INNER_11_785056_e, 0);

    struct timeval tv_r_Filter_11_197334_s, tv_r_Filter_11_197334_e;
    gettimeofday(&tv_r_Filter_11_197334_s, 0);
    SW_Filter_TD_11400518(tbl_SerializeFromObject_TD_12756620_input, tbl_Filter_TD_11400518_output);
    gettimeofday(&tv_r_Filter_11_197334_e, 0);

    struct timeval tv_r_Filter_11_530282_s, tv_r_Filter_11_530282_e;
    gettimeofday(&tv_r_Filter_11_530282_s, 0);
    SW_Filter_TD_11405552(tbl_SerializeFromObject_TD_1221111_input, tbl_Filter_TD_11405552_output);
    gettimeofday(&tv_r_Filter_11_530282_e, 0);

    struct timeval tv_r_Filter_11_15990_s, tv_r_Filter_11_15990_e;
    gettimeofday(&tv_r_Filter_11_15990_s, 0);
    SW_Filter_TD_11927477(tbl_SerializeFromObject_TD_12452974_input, tbl_Filter_TD_11927477_output);
    gettimeofday(&tv_r_Filter_11_15990_e, 0);

    struct timeval tv_r_JOIN_INNER_11_533459_s, tv_r_JOIN_INNER_11_533459_e;
    gettimeofday(&tv_r_JOIN_INNER_11_533459_s, 0);
    SW_JOIN_INNER_TD_11939424(tbl_Filter_TD_12749147_output, tbl_Filter_TD_12786611_output, tbl_JOIN_INNER_TD_11939424_output);
    gettimeofday(&tv_r_JOIN_INNER_11_533459_e, 0);

    struct timeval tv_r_Filter_10_248070_s, tv_r_Filter_10_248070_e;
    gettimeofday(&tv_r_Filter_10_248070_s, 0);
    SW_Filter_TD_10149543(tbl_SerializeFromObject_TD_11889060_input, tbl_Filter_TD_10149543_output);
    gettimeofday(&tv_r_Filter_10_248070_e, 0);

    struct timeval tv_r_Filter_10_38524_s, tv_r_Filter_10_38524_e;
    gettimeofday(&tv_r_Filter_10_38524_s, 0);
    SW_Filter_TD_10459196(tbl_SerializeFromObject_TD_118922_input, tbl_Filter_TD_10459196_output);
    gettimeofday(&tv_r_Filter_10_38524_e, 0);

    struct timeval tv_r_JOIN_INNER_10_109019_s, tv_r_JOIN_INNER_10_109019_e;
    gettimeofday(&tv_r_JOIN_INNER_10_109019_s, 0);
    SW_JOIN_INNER_TD_10141607(tbl_JOIN_INNER_TD_11186879_output, tbl_Filter_TD_11563663_output, tbl_JOIN_INNER_TD_10141607_output);
    gettimeofday(&tv_r_JOIN_INNER_10_109019_e, 0);

    struct timeval tv_r_Filter_10_991859_s, tv_r_Filter_10_991859_e;
    gettimeofday(&tv_r_Filter_10_991859_s, 0);
    SW_Filter_TD_10614419(tbl_SerializeFromObject_TD_11334849_input, tbl_Filter_TD_10614419_output);
    gettimeofday(&tv_r_Filter_10_991859_e, 0);

    struct timeval tv_r_JOIN_INNER_10_11688_s, tv_r_JOIN_INNER_10_11688_e;
    gettimeofday(&tv_r_JOIN_INNER_10_11688_s, 0);
    SW_JOIN_INNER_TD_10465721(tbl_Filter_TD_11405552_output, tbl_Filter_TD_11400518_output, tbl_JOIN_INNER_TD_10465721_output);
    gettimeofday(&tv_r_JOIN_INNER_10_11688_e, 0);

    struct timeval tv_r_JOIN_INNER_10_375101_s, tv_r_JOIN_INNER_10_375101_e;
    gettimeofday(&tv_r_JOIN_INNER_10_375101_s, 0);
    SW_JOIN_INNER_TD_10177913(tbl_JOIN_INNER_TD_11939424_output, tbl_Filter_TD_11927477_output, tbl_JOIN_INNER_TD_10177913_output);
    gettimeofday(&tv_r_JOIN_INNER_10_375101_e, 0);

    struct timeval tv_r_Filter_9_287556_s, tv_r_Filter_9_287556_e;
    gettimeofday(&tv_r_Filter_9_287556_s, 0);
    SW_Filter_TD_961219(tbl_SerializeFromObject_TD_10508058_input, tbl_Filter_TD_961219_output);
    gettimeofday(&tv_r_Filter_9_287556_e, 0);

    struct timeval tv_r_JOIN_INNER_9_318629_s, tv_r_JOIN_INNER_9_318629_e;
    gettimeofday(&tv_r_JOIN_INNER_9_318629_s, 0);
    SW_JOIN_INNER_TD_9630810(tbl_Filter_TD_10459196_output, tbl_Filter_TD_10149543_output, tbl_JOIN_INNER_TD_9630810_output);
    gettimeofday(&tv_r_JOIN_INNER_9_318629_e, 0);

    struct timeval tv_r_Filter_9_28329_s, tv_r_Filter_9_28329_e;
    gettimeofday(&tv_r_Filter_9_28329_s, 0);
    SW_Filter_TD_9789104(tbl_SerializeFromObject_TD_10973123_input, tbl_Filter_TD_9789104_output);
    gettimeofday(&tv_r_Filter_9_28329_e, 0);

    struct timeval tv_r_Filter_9_738515_s, tv_r_Filter_9_738515_e;
    gettimeofday(&tv_r_Filter_9_738515_s, 0);
    SW_Filter_TD_9569103(tbl_SerializeFromObject_TD_10974437_input, tbl_Filter_TD_9569103_output);
    gettimeofday(&tv_r_Filter_9_738515_e, 0);

    struct timeval tv_r_Aggregate_9_589829_s, tv_r_Aggregate_9_589829_e;
    gettimeofday(&tv_r_Aggregate_9_589829_s, 0);
    SW_Aggregate_TD_9144555(tbl_JOIN_INNER_TD_10141607_output, tbl_Aggregate_TD_9144555_output);
    gettimeofday(&tv_r_Aggregate_9_589829_e, 0);

    struct timeval tv_r_JOIN_INNER_9_900590_s, tv_r_JOIN_INNER_9_900590_e;
    gettimeofday(&tv_r_JOIN_INNER_9_900590_s, 0);
    SW_JOIN_INNER_TD_9356468(tbl_JOIN_INNER_TD_10465721_output, tbl_Filter_TD_10614419_output, tbl_JOIN_INNER_TD_9356468_output);
    gettimeofday(&tv_r_JOIN_INNER_9_900590_e, 0);

    struct timeval tv_r_Aggregate_9_660135_s, tv_r_Aggregate_9_660135_e;
    gettimeofday(&tv_r_Aggregate_9_660135_s, 0);
    SW_Aggregate_TD_9963489(tbl_JOIN_INNER_TD_10177913_output, tbl_Aggregate_TD_9963489_output);
    gettimeofday(&tv_r_Aggregate_9_660135_e, 0);

    struct timeval tv_r_JOIN_INNER_8_414801_s, tv_r_JOIN_INNER_8_414801_e;
    gettimeofday(&tv_r_JOIN_INNER_8_414801_s, 0);
    SW_JOIN_INNER_TD_8943088(tbl_JOIN_INNER_TD_9630810_output, tbl_Filter_TD_961219_output, tbl_JOIN_INNER_TD_8943088_output);
    gettimeofday(&tv_r_JOIN_INNER_8_414801_e, 0);

    struct timeval tv_r_Filter_8_797289_s, tv_r_Filter_8_797289_e;
    gettimeofday(&tv_r_Filter_8_797289_s, 0);
    SW_Filter_TD_8867464(tbl_SerializeFromObject_TD_9458072_input, tbl_Filter_TD_8867464_output);
    gettimeofday(&tv_r_Filter_8_797289_e, 0);

    struct timeval tv_r_JOIN_INNER_8_491730_s, tv_r_JOIN_INNER_8_491730_e;
    gettimeofday(&tv_r_JOIN_INNER_8_491730_s, 0);
    SW_JOIN_INNER_TD_820844(tbl_Filter_TD_9569103_output, tbl_Filter_TD_9789104_output, tbl_JOIN_INNER_TD_820844_output);
    gettimeofday(&tv_r_JOIN_INNER_8_491730_e, 0);

    struct timeval tv_r_Filter_8_738851_s, tv_r_Filter_8_738851_e;
    gettimeofday(&tv_r_Filter_8_738851_s, 0);
    SW_Filter_TD_8663184(tbl_Aggregate_TD_9144555_output, tbl_Filter_TD_8663184_output);
    gettimeofday(&tv_r_Filter_8_738851_e, 0);

    struct timeval tv_r_Aggregate_8_920936_s, tv_r_Aggregate_8_920936_e;
    gettimeofday(&tv_r_Aggregate_8_920936_s, 0);
    SW_Aggregate_TD_8666531(tbl_JOIN_INNER_TD_9356468_output, tbl_Aggregate_TD_8666531_output);
    gettimeofday(&tv_r_Aggregate_8_920936_e, 0);

    struct timeval tv_r_Filter_8_28475_s, tv_r_Filter_8_28475_e;
    gettimeofday(&tv_r_Filter_8_28475_s, 0);
    SW_Filter_TD_8950399(tbl_Aggregate_TD_9963489_output, tbl_Filter_TD_8950399_output);
    gettimeofday(&tv_r_Filter_8_28475_e, 0);

    struct timeval tv_r_Filter_7_746270_s, tv_r_Filter_7_746270_e;
    gettimeofday(&tv_r_Filter_7_746270_s, 0);
    SW_Filter_TD_7609836(tbl_SerializeFromObject_TD_8783426_input, tbl_Filter_TD_7609836_output);
    gettimeofday(&tv_r_Filter_7_746270_e, 0);

    struct timeval tv_r_Filter_7_712933_s, tv_r_Filter_7_712933_e;
    gettimeofday(&tv_r_Filter_7_712933_s, 0);
    SW_Filter_TD_7207555(tbl_SerializeFromObject_TD_8433045_input, tbl_Filter_TD_7207555_output);
    gettimeofday(&tv_r_Filter_7_712933_e, 0);

    struct timeval tv_r_Aggregate_7_467836_s, tv_r_Aggregate_7_467836_e;
    gettimeofday(&tv_r_Aggregate_7_467836_s, 0);
    SW_Aggregate_TD_7996801(tbl_JOIN_INNER_TD_8943088_output, tbl_Aggregate_TD_7996801_output);
    gettimeofday(&tv_r_Aggregate_7_467836_e, 0);

    struct timeval tv_r_JOIN_INNER_7_35121_s, tv_r_JOIN_INNER_7_35121_e;
    gettimeofday(&tv_r_JOIN_INNER_7_35121_s, 0);
    SW_JOIN_INNER_TD_7443318(tbl_JOIN_INNER_TD_820844_output, tbl_Filter_TD_8867464_output, tbl_JOIN_INNER_TD_7443318_output);
    gettimeofday(&tv_r_JOIN_INNER_7_35121_e, 0);

    struct timeval tv_r_Project_7_837442_s, tv_r_Project_7_837442_e;
    gettimeofday(&tv_r_Project_7_837442_s, 0);
    SW_Project_TD_7655473(tbl_Filter_TD_8663184_output, tbl_Project_TD_7655473_output);
    gettimeofday(&tv_r_Project_7_837442_e, 0);

    struct timeval tv_r_JOIN_INNER_7_134573_s, tv_r_JOIN_INNER_7_134573_e;
    gettimeofday(&tv_r_JOIN_INNER_7_134573_s, 0);
    SW_JOIN_INNER_TD_7561851(tbl_Filter_TD_8950399_output, tbl_Aggregate_TD_8666531_output, tbl_JOIN_INNER_TD_7561851_output);
    gettimeofday(&tv_r_JOIN_INNER_7_134573_e, 0);

    struct timeval tv_r_Filter_6_363093_s, tv_r_Filter_6_363093_e;
    gettimeofday(&tv_r_Filter_6_363093_s, 0);
    SW_Filter_TD_6302538(tbl_SerializeFromObject_TD_7411780_input, tbl_Filter_TD_6302538_output);
    gettimeofday(&tv_r_Filter_6_363093_e, 0);

    struct timeval tv_r_JOIN_INNER_6_764086_s, tv_r_JOIN_INNER_6_764086_e;
    gettimeofday(&tv_r_JOIN_INNER_6_764086_s, 0);
    SW_JOIN_INNER_TD_6727864(tbl_Filter_TD_7207555_output, tbl_Filter_TD_7609836_output, tbl_JOIN_INNER_TD_6727864_output);
    gettimeofday(&tv_r_JOIN_INNER_6_764086_e, 0);

    struct timeval tv_r_Filter_6_145558_s, tv_r_Filter_6_145558_e;
    gettimeofday(&tv_r_Filter_6_145558_s, 0);
    SW_Filter_TD_6981786(tbl_Aggregate_TD_7996801_output, tbl_Filter_TD_6981786_output);
    gettimeofday(&tv_r_Filter_6_145558_e, 0);

    struct timeval tv_r_Aggregate_6_769745_s, tv_r_Aggregate_6_769745_e;
    gettimeofday(&tv_r_Aggregate_6_769745_s, 0);
    SW_Aggregate_TD_69030(tbl_JOIN_INNER_TD_7443318_output, tbl_Aggregate_TD_69030_output);
    gettimeofday(&tv_r_Aggregate_6_769745_e, 0);

    struct timeval tv_r_JOIN_INNER_6_498860_s, tv_r_JOIN_INNER_6_498860_e;
    gettimeofday(&tv_r_JOIN_INNER_6_498860_s, 0);
    SW_JOIN_INNER_TD_6575003(tbl_JOIN_INNER_TD_7561851_output, tbl_Project_TD_7655473_output, tbl_JOIN_INNER_TD_6575003_output);
    gettimeofday(&tv_r_JOIN_INNER_6_498860_e, 0);

    struct timeval tv_r_JOIN_INNER_5_46418_s, tv_r_JOIN_INNER_5_46418_e;
    gettimeofday(&tv_r_JOIN_INNER_5_46418_s, 0);
    SW_JOIN_INNER_TD_5276742(tbl_JOIN_INNER_TD_6727864_output, tbl_Filter_TD_6302538_output, tbl_JOIN_INNER_TD_5276742_output);
    gettimeofday(&tv_r_JOIN_INNER_5_46418_e, 0);

    struct timeval tv_r_Project_5_870781_s, tv_r_Project_5_870781_e;
    gettimeofday(&tv_r_Project_5_870781_s, 0);
    SW_Project_TD_5818991(tbl_Filter_TD_6981786_output, tbl_Project_TD_5818991_output);
    gettimeofday(&tv_r_Project_5_870781_e, 0);

    struct timeval tv_r_JOIN_INNER_5_117304_s, tv_r_JOIN_INNER_5_117304_e;
    gettimeofday(&tv_r_JOIN_INNER_5_117304_s, 0);
    SW_JOIN_INNER_TD_5128726(tbl_JOIN_INNER_TD_6575003_output, tbl_Aggregate_TD_69030_output, tbl_JOIN_INNER_TD_5128726_output);
    gettimeofday(&tv_r_JOIN_INNER_5_117304_e, 0);

    struct timeval tv_r_Aggregate_4_821734_s, tv_r_Aggregate_4_821734_e;
    gettimeofday(&tv_r_Aggregate_4_821734_s, 0);
    SW_Aggregate_TD_4772058(tbl_JOIN_INNER_TD_5276742_output, tbl_Aggregate_TD_4772058_output);
    gettimeofday(&tv_r_Aggregate_4_821734_e, 0);

    struct timeval tv_r_JOIN_INNER_4_153593_s, tv_r_JOIN_INNER_4_153593_e;
    gettimeofday(&tv_r_JOIN_INNER_4_153593_s, 0);
    SW_JOIN_INNER_TD_4669401(tbl_JOIN_INNER_TD_5128726_output, tbl_Project_TD_5818991_output, tbl_JOIN_INNER_TD_4669401_output);
    gettimeofday(&tv_r_JOIN_INNER_4_153593_e, 0);

    struct timeval tv_r_JOIN_INNER_3_990631_s, tv_r_JOIN_INNER_3_990631_e;
    gettimeofday(&tv_r_JOIN_INNER_3_990631_s, 0);
    SW_JOIN_INNER_TD_3765754(tbl_JOIN_INNER_TD_4669401_output, tbl_Aggregate_TD_4772058_output, tbl_JOIN_INNER_TD_3765754_output);
    gettimeofday(&tv_r_JOIN_INNER_3_990631_e, 0);

    struct timeval tv_r_Sort_2_462449_s, tv_r_Sort_2_462449_e;
    gettimeofday(&tv_r_Sort_2_462449_s, 0);
    SW_Sort_TD_2994985(tbl_JOIN_INNER_TD_3765754_output, tbl_Sort_TD_2994985_output);
    gettimeofday(&tv_r_Sort_2_462449_e, 0);

    struct timeval tv_r_LocalLimit_1_121949_s, tv_r_LocalLimit_1_121949_e;
    gettimeofday(&tv_r_LocalLimit_1_121949_s, 0);
    SW_LocalLimit_TD_1614135(tbl_Sort_TD_2994985_output, tbl_LocalLimit_TD_1614135_output);
    gettimeofday(&tv_r_LocalLimit_1_121949_e, 0);

    struct timeval tv_r_GlobalLimit_0_187949_s, tv_r_GlobalLimit_0_187949_e;
    gettimeofday(&tv_r_GlobalLimit_0_187949_s, 0);
    SW_GlobalLimit_TD_0299599(tbl_LocalLimit_TD_1614135_output, tbl_GlobalLimit_TD_0299599_output);
    gettimeofday(&tv_r_GlobalLimit_0_187949_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_432478_s, &tv_r_Filter_12_432478_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13515098_input: " << tbl_SerializeFromObject_TD_13515098_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_189078_s, &tv_r_Filter_12_189078_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13484648_input: " << tbl_SerializeFromObject_TD_13484648_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_98044_s, &tv_r_Filter_12_98044_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13256979_input: " << tbl_SerializeFromObject_TD_13256979_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_243260_s, &tv_r_Filter_12_243260_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1372687_input: " << tbl_SerializeFromObject_TD_1372687_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_46030_s, &tv_r_Filter_11_46030_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12300195_input: " << tbl_SerializeFromObject_TD_12300195_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_785056_s, &tv_r_JOIN_INNER_11_785056_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12994221_output: " << tbl_Filter_TD_12994221_output.getNumRow() << " " << "tbl_Filter_TD_12474839_output: " << tbl_Filter_TD_12474839_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_197334_s, &tv_r_Filter_11_197334_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12756620_input: " << tbl_SerializeFromObject_TD_12756620_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_530282_s, &tv_r_Filter_11_530282_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1221111_input: " << tbl_SerializeFromObject_TD_1221111_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_15990_s, &tv_r_Filter_11_15990_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12452974_input: " << tbl_SerializeFromObject_TD_12452974_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_533459_s, &tv_r_JOIN_INNER_11_533459_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12749147_output: " << tbl_Filter_TD_12749147_output.getNumRow() << " " << "tbl_Filter_TD_12786611_output: " << tbl_Filter_TD_12786611_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_248070_s, &tv_r_Filter_10_248070_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11889060_input: " << tbl_SerializeFromObject_TD_11889060_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_38524_s, &tv_r_Filter_10_38524_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_118922_input: " << tbl_SerializeFromObject_TD_118922_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_109019_s, &tv_r_JOIN_INNER_10_109019_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11186879_output: " << tbl_JOIN_INNER_TD_11186879_output.getNumRow() << " " << "tbl_Filter_TD_11563663_output: " << tbl_Filter_TD_11563663_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_991859_s, &tv_r_Filter_10_991859_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11334849_input: " << tbl_SerializeFromObject_TD_11334849_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_11688_s, &tv_r_JOIN_INNER_10_11688_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11405552_output: " << tbl_Filter_TD_11405552_output.getNumRow() << " " << "tbl_Filter_TD_11400518_output: " << tbl_Filter_TD_11400518_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_375101_s, &tv_r_JOIN_INNER_10_375101_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11939424_output: " << tbl_JOIN_INNER_TD_11939424_output.getNumRow() << " " << "tbl_Filter_TD_11927477_output: " << tbl_Filter_TD_11927477_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_287556_s, &tv_r_Filter_9_287556_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10508058_input: " << tbl_SerializeFromObject_TD_10508058_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_318629_s, &tv_r_JOIN_INNER_9_318629_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10459196_output: " << tbl_Filter_TD_10459196_output.getNumRow() << " " << "tbl_Filter_TD_10149543_output: " << tbl_Filter_TD_10149543_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_28329_s, &tv_r_Filter_9_28329_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10973123_input: " << tbl_SerializeFromObject_TD_10973123_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_738515_s, &tv_r_Filter_9_738515_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10974437_input: " << tbl_SerializeFromObject_TD_10974437_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_589829_s, &tv_r_Aggregate_9_589829_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10141607_output: " << tbl_JOIN_INNER_TD_10141607_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_900590_s, &tv_r_JOIN_INNER_9_900590_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10465721_output: " << tbl_JOIN_INNER_TD_10465721_output.getNumRow() << " " << "tbl_Filter_TD_10614419_output: " << tbl_Filter_TD_10614419_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_660135_s, &tv_r_Aggregate_9_660135_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10177913_output: " << tbl_JOIN_INNER_TD_10177913_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_414801_s, &tv_r_JOIN_INNER_8_414801_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9630810_output: " << tbl_JOIN_INNER_TD_9630810_output.getNumRow() << " " << "tbl_Filter_TD_961219_output: " << tbl_Filter_TD_961219_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_797289_s, &tv_r_Filter_8_797289_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9458072_input: " << tbl_SerializeFromObject_TD_9458072_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_491730_s, &tv_r_JOIN_INNER_8_491730_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9569103_output: " << tbl_Filter_TD_9569103_output.getNumRow() << " " << "tbl_Filter_TD_9789104_output: " << tbl_Filter_TD_9789104_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_738851_s, &tv_r_Filter_8_738851_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9144555_output: " << tbl_Aggregate_TD_9144555_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_920936_s, &tv_r_Aggregate_8_920936_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9356468_output: " << tbl_JOIN_INNER_TD_9356468_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_28475_s, &tv_r_Filter_8_28475_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9963489_output: " << tbl_Aggregate_TD_9963489_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_746270_s, &tv_r_Filter_7_746270_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8783426_input: " << tbl_SerializeFromObject_TD_8783426_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_712933_s, &tv_r_Filter_7_712933_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8433045_input: " << tbl_SerializeFromObject_TD_8433045_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_467836_s, &tv_r_Aggregate_7_467836_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8943088_output: " << tbl_JOIN_INNER_TD_8943088_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_35121_s, &tv_r_JOIN_INNER_7_35121_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_820844_output: " << tbl_JOIN_INNER_TD_820844_output.getNumRow() << " " << "tbl_Filter_TD_8867464_output: " << tbl_Filter_TD_8867464_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_837442_s, &tv_r_Project_7_837442_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8663184_output: " << tbl_Filter_TD_8663184_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_134573_s, &tv_r_JOIN_INNER_7_134573_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8950399_output: " << tbl_Filter_TD_8950399_output.getNumRow() << " " << "tbl_Aggregate_TD_8666531_output: " << tbl_Aggregate_TD_8666531_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_363093_s, &tv_r_Filter_6_363093_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7411780_input: " << tbl_SerializeFromObject_TD_7411780_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_764086_s, &tv_r_JOIN_INNER_6_764086_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7207555_output: " << tbl_Filter_TD_7207555_output.getNumRow() << " " << "tbl_Filter_TD_7609836_output: " << tbl_Filter_TD_7609836_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_145558_s, &tv_r_Filter_6_145558_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7996801_output: " << tbl_Aggregate_TD_7996801_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_769745_s, &tv_r_Aggregate_6_769745_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7443318_output: " << tbl_JOIN_INNER_TD_7443318_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_498860_s, &tv_r_JOIN_INNER_6_498860_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7561851_output: " << tbl_JOIN_INNER_TD_7561851_output.getNumRow() << " " << "tbl_Project_TD_7655473_output: " << tbl_Project_TD_7655473_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_46418_s, &tv_r_JOIN_INNER_5_46418_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6727864_output: " << tbl_JOIN_INNER_TD_6727864_output.getNumRow() << " " << "tbl_Filter_TD_6302538_output: " << tbl_Filter_TD_6302538_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_870781_s, &tv_r_Project_5_870781_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6981786_output: " << tbl_Filter_TD_6981786_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_117304_s, &tv_r_JOIN_INNER_5_117304_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6575003_output: " << tbl_JOIN_INNER_TD_6575003_output.getNumRow() << " " << "tbl_Aggregate_TD_69030_output: " << tbl_Aggregate_TD_69030_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_821734_s, &tv_r_Aggregate_4_821734_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5276742_output: " << tbl_JOIN_INNER_TD_5276742_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_153593_s, &tv_r_JOIN_INNER_4_153593_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5128726_output: " << tbl_JOIN_INNER_TD_5128726_output.getNumRow() << " " << "tbl_Project_TD_5818991_output: " << tbl_Project_TD_5818991_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_990631_s, &tv_r_JOIN_INNER_3_990631_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4669401_output: " << tbl_JOIN_INNER_TD_4669401_output.getNumRow() << " " << "tbl_Aggregate_TD_4772058_output: " << tbl_Aggregate_TD_4772058_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_462449_s, &tv_r_Sort_2_462449_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3765754_output: " << tbl_JOIN_INNER_TD_3765754_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_121949_s, &tv_r_LocalLimit_1_121949_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2994985_output: " << tbl_Sort_TD_2994985_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_187949_s, &tv_r_GlobalLimit_0_187949_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1614135_output: " << tbl_LocalLimit_TD_1614135_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 20.801556 * 1000 << "ms" << std::endl; 
    return 0; 
}
