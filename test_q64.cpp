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

#include "cfgFunc_q64.hpp" 
#include "q64.hpp" 

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
    std::cout << "NOTE:running query #64\n."; 
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
    Table tbl_Sort_TD_0481_output("tbl_Sort_TD_0481_output", 6100000, 22, "");
    tbl_Sort_TD_0481_output.allocateHost();
    Table tbl_Project_TD_1119_output("tbl_Project_TD_1119_output", 6100000, 22, "");
    tbl_Project_TD_1119_output.allocateHost();
    Table tbl_JOIN_INNER_TD_216_output("tbl_JOIN_INNER_TD_216_output", 6100000, 21, "");
    tbl_JOIN_INNER_TD_216_output.allocateHost();
    Table tbl_Aggregate_TD_3191_output("tbl_Aggregate_TD_3191_output", 6100000, 17, "");
    tbl_Aggregate_TD_3191_output.allocateHost();
    Table tbl_Aggregate_TD_3862_output("tbl_Aggregate_TD_3862_output", 6100000, 8, "");
    tbl_Aggregate_TD_3862_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4497_output("tbl_JOIN_INNER_TD_4497_output", 6100000, 18, "");
    tbl_JOIN_INNER_TD_4497_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4630_output("tbl_JOIN_INNER_TD_4630_output", 6100000, 18, "");
    tbl_JOIN_INNER_TD_4630_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5470_output("tbl_JOIN_INNER_TD_5470_output", 6100000, 17, "");
    tbl_JOIN_INNER_TD_5470_output.allocateHost();
    Table tbl_Filter_TD_5300_output("tbl_Filter_TD_5300_output", 6100000, 2, "");
    tbl_Filter_TD_5300_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5724_output("tbl_JOIN_INNER_TD_5724_output", 6100000, 17, "");
    tbl_JOIN_INNER_TD_5724_output.allocateHost();
    Table tbl_Filter_TD_5551_output("tbl_Filter_TD_5551_output", 6100000, 2, "");
    tbl_Filter_TD_5551_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6496_output("tbl_JOIN_INNER_TD_6496_output", 6100000, 18, "");
    tbl_JOIN_INNER_TD_6496_output.allocateHost();
    Table tbl_Filter_TD_6813_output("tbl_Filter_TD_6813_output", 6100000, 1, "");
    tbl_Filter_TD_6813_output.allocateHost();
    Table tbl_SerializeFromObject_TD_698_input;
    tbl_SerializeFromObject_TD_698_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_698_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_698_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_698_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_698_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_698_input.allocateHost();
    tbl_SerializeFromObject_TD_698_input.loadHost();
    Table tbl_JOIN_INNER_TD_691_output("tbl_JOIN_INNER_TD_691_output", 6100000, 18, "");
    tbl_JOIN_INNER_TD_691_output.allocateHost();
    Table tbl_Filter_TD_6259_output("tbl_Filter_TD_6259_output", 6100000, 1, "");
    tbl_Filter_TD_6259_output.allocateHost();
    Table tbl_SerializeFromObject_TD_612_input;
    tbl_SerializeFromObject_TD_612_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_612_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_612_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_612_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_612_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_612_input.allocateHost();
    tbl_SerializeFromObject_TD_612_input.loadHost();
    Table tbl_JOIN_INNER_TD_7357_output("tbl_JOIN_INNER_TD_7357_output", 6100000, 19, "");
    tbl_JOIN_INNER_TD_7357_output.allocateHost();
    Table tbl_Filter_TD_7917_output("tbl_Filter_TD_7917_output", 6100000, 1, "");
    tbl_Filter_TD_7917_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7576_input;
    tbl_SerializeFromObject_TD_7576_input = Table("income_band", income_band_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7576_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_7576_input.allocateHost();
    tbl_SerializeFromObject_TD_7576_input.loadHost();
    Table tbl_JOIN_INNER_TD_7413_output("tbl_JOIN_INNER_TD_7413_output", 6100000, 19, "");
    tbl_JOIN_INNER_TD_7413_output.allocateHost();
    Table tbl_Filter_TD_7912_output("tbl_Filter_TD_7912_output", 6100000, 1, "");
    tbl_Filter_TD_7912_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7674_input;
    tbl_SerializeFromObject_TD_7674_input = Table("income_band", income_band_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7674_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_7674_input.allocateHost();
    tbl_SerializeFromObject_TD_7674_input.loadHost();
    Table tbl_JOIN_INNER_TD_8636_output("tbl_JOIN_INNER_TD_8636_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_8636_output.allocateHost();
    Table tbl_Filter_TD_8498_output("tbl_Filter_TD_8498_output", 6100000, 5, "");
    tbl_Filter_TD_8498_output.allocateHost();
    Table tbl_SerializeFromObject_TD_827_input;
    tbl_SerializeFromObject_TD_827_input = Table("income_band", income_band_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_827_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_827_input.allocateHost();
    tbl_SerializeFromObject_TD_827_input.loadHost();
    Table tbl_JOIN_INNER_TD_8928_output("tbl_JOIN_INNER_TD_8928_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_8928_output.allocateHost();
    Table tbl_Filter_TD_8500_output("tbl_Filter_TD_8500_output", 6100000, 5, "");
    tbl_Filter_TD_8500_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8928_input;
    tbl_SerializeFromObject_TD_8928_input = Table("income_band", income_band_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8928_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_8928_input.allocateHost();
    tbl_SerializeFromObject_TD_8928_input.loadHost();
    Table tbl_JOIN_INNER_TD_9130_output("tbl_JOIN_INNER_TD_9130_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_9130_output.allocateHost();
    Table tbl_Filter_TD_958_output("tbl_Filter_TD_958_output", 6100000, 5, "");
    tbl_Filter_TD_958_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9677_input;
    tbl_SerializeFromObject_TD_9677_input = Table("customer_address", customer_address_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9677_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9677_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9677_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9677_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9677_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9677_input.allocateHost();
    tbl_SerializeFromObject_TD_9677_input.loadHost();
    Table tbl_JOIN_INNER_TD_939_output("tbl_JOIN_INNER_TD_939_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_939_output.allocateHost();
    Table tbl_Filter_TD_9827_output("tbl_Filter_TD_9827_output", 6100000, 5, "");
    tbl_Filter_TD_9827_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9196_input;
    tbl_SerializeFromObject_TD_9196_input = Table("customer_address", customer_address_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9196_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9196_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9196_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9196_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9196_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9196_input.allocateHost();
    tbl_SerializeFromObject_TD_9196_input.loadHost();
    Table tbl_JOIN_INNER_TD_10624_output("tbl_JOIN_INNER_TD_10624_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_10624_output.allocateHost();
    Table tbl_Filter_TD_10925_output("tbl_Filter_TD_10925_output", 6100000, 2, "");
    tbl_Filter_TD_10925_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10144_input;
    tbl_SerializeFromObject_TD_10144_input = Table("customer_address", customer_address_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10144_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10144_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10144_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10144_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10144_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10144_input.allocateHost();
    tbl_SerializeFromObject_TD_10144_input.loadHost();
    Table tbl_JOIN_INNER_TD_10170_output("tbl_JOIN_INNER_TD_10170_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_10170_output.allocateHost();
    Table tbl_Filter_TD_10610_output("tbl_Filter_TD_10610_output", 6100000, 2, "");
    tbl_Filter_TD_10610_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10401_input;
    tbl_SerializeFromObject_TD_10401_input = Table("customer_address", customer_address_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10401_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10401_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10401_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10401_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10401_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10401_input.allocateHost();
    tbl_SerializeFromObject_TD_10401_input.loadHost();
    Table tbl_JOIN_INNER_TD_11819_output("tbl_JOIN_INNER_TD_11819_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_11819_output.allocateHost();
    Table tbl_Filter_TD_115_output("tbl_Filter_TD_115_output", 6100000, 2, "");
    tbl_Filter_TD_115_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1192_input;
    tbl_SerializeFromObject_TD_1192_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1192_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_1192_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_1192_input.allocateHost();
    tbl_SerializeFromObject_TD_1192_input.loadHost();
    Table tbl_JOIN_INNER_TD_1133_output("tbl_JOIN_INNER_TD_1133_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_1133_output.allocateHost();
    Table tbl_Filter_TD_11841_output("tbl_Filter_TD_11841_output", 6100000, 2, "");
    tbl_Filter_TD_11841_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11795_input;
    tbl_SerializeFromObject_TD_11795_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11795_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_11795_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_11795_input.allocateHost();
    tbl_SerializeFromObject_TD_11795_input.loadHost();
    Table tbl_JOIN_INNER_TD_12366_output("tbl_JOIN_INNER_TD_12366_output", 6100000, 14, "");
    tbl_JOIN_INNER_TD_12366_output.allocateHost();
    Table tbl_Filter_TD_12587_output("tbl_Filter_TD_12587_output", 6100000, 1, "");
    tbl_Filter_TD_12587_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12279_input;
    tbl_SerializeFromObject_TD_12279_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12279_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12279_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_12279_input.allocateHost();
    tbl_SerializeFromObject_TD_12279_input.loadHost();
    Table tbl_JOIN_INNER_TD_12614_output("tbl_JOIN_INNER_TD_12614_output", 6100000, 14, "");
    tbl_JOIN_INNER_TD_12614_output.allocateHost();
    Table tbl_Filter_TD_1217_output("tbl_Filter_TD_1217_output", 6100000, 1, "");
    tbl_Filter_TD_1217_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12137_input;
    tbl_SerializeFromObject_TD_12137_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12137_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12137_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_12137_input.allocateHost();
    tbl_SerializeFromObject_TD_12137_input.loadHost();
    Table tbl_JOIN_INNER_TD_13284_output("tbl_JOIN_INNER_TD_13284_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_13284_output.allocateHost();
    Table tbl_Filter_TD_13368_output("tbl_Filter_TD_13368_output", 6100000, 2, "");
    tbl_Filter_TD_13368_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13359_input;
    tbl_SerializeFromObject_TD_13359_input = Table("promotion", promotion_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_13359_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_13359_input.allocateHost();
    tbl_SerializeFromObject_TD_13359_input.loadHost();
    Table tbl_JOIN_INNER_TD_13897_output("tbl_JOIN_INNER_TD_13897_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_13897_output.allocateHost();
    Table tbl_Filter_TD_13462_output("tbl_Filter_TD_13462_output", 6100000, 2, "");
    tbl_Filter_TD_13462_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13730_input;
    tbl_SerializeFromObject_TD_13730_input = Table("promotion", promotion_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_13730_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_13730_input.allocateHost();
    tbl_SerializeFromObject_TD_13730_input.loadHost();
    Table tbl_JOIN_INNER_TD_14698_output("tbl_JOIN_INNER_TD_14698_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_14698_output.allocateHost();
    Table tbl_Filter_TD_14941_output("tbl_Filter_TD_14941_output", 6100000, 2, "");
    tbl_Filter_TD_14941_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14814_input;
    tbl_SerializeFromObject_TD_14814_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14814_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_14814_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14814_input.allocateHost();
    tbl_SerializeFromObject_TD_14814_input.loadHost();
    Table tbl_JOIN_INNER_TD_14960_output("tbl_JOIN_INNER_TD_14960_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_14960_output.allocateHost();
    Table tbl_Filter_TD_14498_output("tbl_Filter_TD_14498_output", 6100000, 2, "");
    tbl_Filter_TD_14498_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14926_input;
    tbl_SerializeFromObject_TD_14926_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14926_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_14926_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14926_input.allocateHost();
    tbl_SerializeFromObject_TD_14926_input.loadHost();
    Table tbl_JOIN_INNER_TD_15183_output("tbl_JOIN_INNER_TD_15183_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_15183_output.allocateHost();
    Table tbl_Filter_TD_1559_output("tbl_Filter_TD_1559_output", 6100000, 2, "");
    tbl_Filter_TD_1559_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15210_input;
    tbl_SerializeFromObject_TD_15210_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_15210_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_15210_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15210_input.allocateHost();
    tbl_SerializeFromObject_TD_15210_input.loadHost();
    Table tbl_JOIN_INNER_TD_15975_output("tbl_JOIN_INNER_TD_15975_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_15975_output.allocateHost();
    Table tbl_Filter_TD_1575_output("tbl_Filter_TD_1575_output", 6100000, 2, "");
    tbl_Filter_TD_1575_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15371_input;
    tbl_SerializeFromObject_TD_15371_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_15371_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_15371_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15371_input.allocateHost();
    tbl_SerializeFromObject_TD_15371_input.loadHost();
    Table tbl_JOIN_INNER_TD_16477_output("tbl_JOIN_INNER_TD_16477_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_16477_output.allocateHost();
    Table tbl_Filter_TD_16920_output("tbl_Filter_TD_16920_output", 6100000, 2, "");
    tbl_Filter_TD_16920_output.allocateHost();
    Table tbl_SerializeFromObject_TD_16895_input;
    tbl_SerializeFromObject_TD_16895_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_16895_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_16895_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_16895_input.allocateHost();
    tbl_SerializeFromObject_TD_16895_input.loadHost();
    Table tbl_JOIN_INNER_TD_16122_output("tbl_JOIN_INNER_TD_16122_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_16122_output.allocateHost();
    Table tbl_Filter_TD_16465_output("tbl_Filter_TD_16465_output", 6100000, 2, "");
    tbl_Filter_TD_16465_output.allocateHost();
    Table tbl_SerializeFromObject_TD_16444_input;
    tbl_SerializeFromObject_TD_16444_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_16444_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_16444_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_16444_input.allocateHost();
    tbl_SerializeFromObject_TD_16444_input.loadHost();
    Table tbl_JOIN_INNER_TD_17482_output("tbl_JOIN_INNER_TD_17482_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_17482_output.allocateHost();
    Table tbl_Filter_TD_17190_output("tbl_Filter_TD_17190_output", 6100000, 6, "");
    tbl_Filter_TD_17190_output.allocateHost();
    Table tbl_SerializeFromObject_TD_17788_input;
    tbl_SerializeFromObject_TD_17788_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_17788_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_17788_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_17788_input.allocateHost();
    tbl_SerializeFromObject_TD_17788_input.loadHost();
    Table tbl_JOIN_INNER_TD_17724_output("tbl_JOIN_INNER_TD_17724_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_17724_output.allocateHost();
    Table tbl_Filter_TD_1749_output("tbl_Filter_TD_1749_output", 6100000, 6, "");
    tbl_Filter_TD_1749_output.allocateHost();
    Table tbl_SerializeFromObject_TD_17401_input;
    tbl_SerializeFromObject_TD_17401_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_17401_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_17401_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_17401_input.allocateHost();
    tbl_SerializeFromObject_TD_17401_input.loadHost();
    Table tbl_JOIN_INNER_TD_18270_output("tbl_JOIN_INNER_TD_18270_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_18270_output.allocateHost();
    Table tbl_Filter_TD_18257_output("tbl_Filter_TD_18257_output", 6100000, 3, "");
    tbl_Filter_TD_18257_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1829_input;
    tbl_SerializeFromObject_TD_1829_input = Table("customer", customer_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_1829_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_1829_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_1829_input.addCol("c_current_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_1829_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_1829_input.addCol("c_first_shipto_date_sk", 4);
    tbl_SerializeFromObject_TD_1829_input.addCol("c_first_sales_date_sk", 4);
    tbl_SerializeFromObject_TD_1829_input.allocateHost();
    tbl_SerializeFromObject_TD_1829_input.loadHost();
    Table tbl_JOIN_INNER_TD_18144_output("tbl_JOIN_INNER_TD_18144_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_18144_output.allocateHost();
    Table tbl_Filter_TD_18863_output("tbl_Filter_TD_18863_output", 6100000, 3, "");
    tbl_Filter_TD_18863_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18405_input;
    tbl_SerializeFromObject_TD_18405_input = Table("customer", customer_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_18405_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_18405_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_18405_input.addCol("c_current_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_18405_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_18405_input.addCol("c_first_shipto_date_sk", 4);
    tbl_SerializeFromObject_TD_18405_input.addCol("c_first_sales_date_sk", 4);
    tbl_SerializeFromObject_TD_18405_input.allocateHost();
    tbl_SerializeFromObject_TD_18405_input.loadHost();
    Table tbl_JOIN_INNER_TD_19689_output("tbl_JOIN_INNER_TD_19689_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_19689_output.allocateHost();
    Table tbl_Filter_TD_19880_output("tbl_Filter_TD_19880_output", 6100000, 2, "");
    tbl_Filter_TD_19880_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1973_input;
    tbl_SerializeFromObject_TD_1973_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1973_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_1973_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1973_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1973_input.allocateHost();
    tbl_SerializeFromObject_TD_1973_input.loadHost();
    Table tbl_JOIN_INNER_TD_19822_output("tbl_JOIN_INNER_TD_19822_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_19822_output.allocateHost();
    Table tbl_Filter_TD_19333_output("tbl_Filter_TD_19333_output", 6100000, 2, "");
    tbl_Filter_TD_19333_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19527_input;
    tbl_SerializeFromObject_TD_19527_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_19527_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_19527_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_19527_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_19527_input.allocateHost();
    tbl_SerializeFromObject_TD_19527_input.loadHost();
    Table tbl_JOIN_INNER_TD_20679_output("tbl_JOIN_INNER_TD_20679_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_20679_output.allocateHost();
    Table tbl_Filter_TD_20625_output("tbl_Filter_TD_20625_output", 6100000, 1, "");
    tbl_Filter_TD_20625_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20453_input;
    tbl_SerializeFromObject_TD_20453_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20453_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20453_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20453_input.allocateHost();
    tbl_SerializeFromObject_TD_20453_input.loadHost();
    Table tbl_JOIN_INNER_TD_20919_output("tbl_JOIN_INNER_TD_20919_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_20919_output.allocateHost();
    Table tbl_Filter_TD_20809_output("tbl_Filter_TD_20809_output", 6100000, 1, "");
    tbl_Filter_TD_20809_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20817_input;
    tbl_SerializeFromObject_TD_20817_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20817_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20817_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20817_input.allocateHost();
    tbl_SerializeFromObject_TD_20817_input.loadHost();
    Table tbl_Filter_TD_21607_output("tbl_Filter_TD_21607_output", 6100000, 12, "");
    tbl_Filter_TD_21607_output.allocateHost();
    Table tbl_Filter_TD_21899_output("tbl_Filter_TD_21899_output", 6100000, 2, "");
    tbl_Filter_TD_21899_output.allocateHost();
    Table tbl_Aggregate_TD_21360_output("tbl_Aggregate_TD_21360_output", 6100000, 3, "");
    tbl_Aggregate_TD_21360_output.allocateHost();
    Table tbl_Filter_TD_21387_output("tbl_Filter_TD_21387_output", 6100000, 12, "");
    tbl_Filter_TD_21387_output.allocateHost();
    Table tbl_Filter_TD_21215_output("tbl_Filter_TD_21215_output", 6100000, 2, "");
    tbl_Filter_TD_21215_output.allocateHost();
    Table tbl_Aggregate_TD_2160_output("tbl_Aggregate_TD_2160_output", 6100000, 3, "");
    tbl_Aggregate_TD_2160_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22647_input;
    tbl_SerializeFromObject_TD_22647_input = Table("store_sales", store_sales_n, 12, in_dir, "orc");
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_22647_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_22647_input.allocateHost();
    tbl_SerializeFromObject_TD_22647_input.loadHost();
    Table tbl_SerializeFromObject_TD_22788_input;
    tbl_SerializeFromObject_TD_22788_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_22788_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_22788_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_22788_input.allocateHost();
    tbl_SerializeFromObject_TD_22788_input.loadHost();
    Table tbl_JOIN_INNER_TD_22611_output("tbl_JOIN_INNER_TD_22611_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_22611_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22425_input;
    tbl_SerializeFromObject_TD_22425_input = Table("store_sales", store_sales_n, 12, in_dir, "orc");
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_22425_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_22425_input.allocateHost();
    tbl_SerializeFromObject_TD_22425_input.loadHost();
    Table tbl_SerializeFromObject_TD_22593_input;
    tbl_SerializeFromObject_TD_22593_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_22593_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_22593_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_22593_input.allocateHost();
    tbl_SerializeFromObject_TD_22593_input.loadHost();
    Table tbl_JOIN_INNER_TD_22484_output("tbl_JOIN_INNER_TD_22484_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_22484_output.allocateHost();
    Table tbl_Filter_TD_23246_output("tbl_Filter_TD_23246_output", 6100000, 3, "");
    tbl_Filter_TD_23246_output.allocateHost();
    Table tbl_Filter_TD_23258_output("tbl_Filter_TD_23258_output", 6100000, 5, "");
    tbl_Filter_TD_23258_output.allocateHost();
    Table tbl_Filter_TD_2382_output("tbl_Filter_TD_2382_output", 6100000, 3, "");
    tbl_Filter_TD_2382_output.allocateHost();
    Table tbl_Filter_TD_2327_output("tbl_Filter_TD_2327_output", 6100000, 5, "");
    tbl_Filter_TD_2327_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2448_input;
    tbl_SerializeFromObject_TD_2448_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_2448_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_2448_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_2448_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_2448_input.allocateHost();
    tbl_SerializeFromObject_TD_2448_input.loadHost();
    Table tbl_SerializeFromObject_TD_24584_input;
    tbl_SerializeFromObject_TD_24584_input = Table("catalog_returns", catalog_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_24584_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_24584_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_24584_input.addCol("cr_refunded_cash", 4);
    tbl_SerializeFromObject_TD_24584_input.addCol("cr_reversed_charge", 4);
    tbl_SerializeFromObject_TD_24584_input.addCol("cr_store_credit", 4);
    tbl_SerializeFromObject_TD_24584_input.allocateHost();
    tbl_SerializeFromObject_TD_24584_input.loadHost();
    Table tbl_SerializeFromObject_TD_24904_input;
    tbl_SerializeFromObject_TD_24904_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_24904_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24904_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_24904_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_24904_input.allocateHost();
    tbl_SerializeFromObject_TD_24904_input.loadHost();
    Table tbl_SerializeFromObject_TD_24479_input;
    tbl_SerializeFromObject_TD_24479_input = Table("catalog_returns", catalog_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_24479_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_24479_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_24479_input.addCol("cr_refunded_cash", 4);
    tbl_SerializeFromObject_TD_24479_input.addCol("cr_reversed_charge", 4);
    tbl_SerializeFromObject_TD_24479_input.addCol("cr_store_credit", 4);
    tbl_SerializeFromObject_TD_24479_input.allocateHost();
    tbl_SerializeFromObject_TD_24479_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_23_291836_s, tv_r_Filter_23_291836_e;
    gettimeofday(&tv_r_Filter_23_291836_s, 0);
    SW_Filter_TD_2327(tbl_SerializeFromObject_TD_24479_input, tbl_Filter_TD_2327_output);
    gettimeofday(&tv_r_Filter_23_291836_e, 0);

    struct timeval tv_r_Filter_23_295005_s, tv_r_Filter_23_295005_e;
    gettimeofday(&tv_r_Filter_23_295005_s, 0);
    SW_Filter_TD_2382(tbl_SerializeFromObject_TD_24904_input, tbl_Filter_TD_2382_output);
    gettimeofday(&tv_r_Filter_23_295005_e, 0);

    struct timeval tv_r_Filter_23_538650_s, tv_r_Filter_23_538650_e;
    gettimeofday(&tv_r_Filter_23_538650_s, 0);
    SW_Filter_TD_23258(tbl_SerializeFromObject_TD_24584_input, tbl_Filter_TD_23258_output);
    gettimeofday(&tv_r_Filter_23_538650_e, 0);

    struct timeval tv_r_Filter_23_406355_s, tv_r_Filter_23_406355_e;
    gettimeofday(&tv_r_Filter_23_406355_s, 0);
    SW_Filter_TD_23246(tbl_SerializeFromObject_TD_2448_input, tbl_Filter_TD_23246_output);
    gettimeofday(&tv_r_Filter_23_406355_e, 0);

    struct timeval tv_r_JOIN_INNER_22_618784_s, tv_r_JOIN_INNER_22_618784_e;
    gettimeofday(&tv_r_JOIN_INNER_22_618784_s, 0);
    SW_JOIN_INNER_TD_22484(tbl_Filter_TD_2382_output, tbl_Filter_TD_2327_output, tbl_JOIN_INNER_TD_22484_output);
    gettimeofday(&tv_r_JOIN_INNER_22_618784_e, 0);

    struct timeval tv_r_JOIN_INNER_22_364922_s, tv_r_JOIN_INNER_22_364922_e;
    gettimeofday(&tv_r_JOIN_INNER_22_364922_s, 0);
    SW_JOIN_INNER_TD_22611(tbl_Filter_TD_23246_output, tbl_Filter_TD_23258_output, tbl_JOIN_INNER_TD_22611_output);
    gettimeofday(&tv_r_JOIN_INNER_22_364922_e, 0);

    struct timeval tv_r_Aggregate_21_191957_s, tv_r_Aggregate_21_191957_e;
    gettimeofday(&tv_r_Aggregate_21_191957_s, 0);
    SW_Aggregate_TD_2160(tbl_JOIN_INNER_TD_22484_output, tbl_Aggregate_TD_2160_output);
    gettimeofday(&tv_r_Aggregate_21_191957_e, 0);

    struct timeval tv_r_Filter_21_268584_s, tv_r_Filter_21_268584_e;
    gettimeofday(&tv_r_Filter_21_268584_s, 0);
    SW_Filter_TD_21215(tbl_SerializeFromObject_TD_22593_input, tbl_Filter_TD_21215_output);
    gettimeofday(&tv_r_Filter_21_268584_e, 0);

    struct timeval tv_r_Filter_21_961080_s, tv_r_Filter_21_961080_e;
    gettimeofday(&tv_r_Filter_21_961080_s, 0);
    SW_Filter_TD_21387(tbl_SerializeFromObject_TD_22425_input, tbl_Filter_TD_21387_output);
    gettimeofday(&tv_r_Filter_21_961080_e, 0);

    struct timeval tv_r_Aggregate_21_790941_s, tv_r_Aggregate_21_790941_e;
    gettimeofday(&tv_r_Aggregate_21_790941_s, 0);
    SW_Aggregate_TD_21360(tbl_JOIN_INNER_TD_22611_output, tbl_Aggregate_TD_21360_output);
    gettimeofday(&tv_r_Aggregate_21_790941_e, 0);

    struct timeval tv_r_Filter_21_256390_s, tv_r_Filter_21_256390_e;
    gettimeofday(&tv_r_Filter_21_256390_s, 0);
    SW_Filter_TD_21899(tbl_SerializeFromObject_TD_22788_input, tbl_Filter_TD_21899_output);
    gettimeofday(&tv_r_Filter_21_256390_e, 0);

    struct timeval tv_r_Filter_21_265387_s, tv_r_Filter_21_265387_e;
    gettimeofday(&tv_r_Filter_21_265387_s, 0);
    SW_Filter_TD_21607(tbl_SerializeFromObject_TD_22647_input, tbl_Filter_TD_21607_output);
    gettimeofday(&tv_r_Filter_21_265387_e, 0);

    struct timeval tv_r_Filter_20_450290_s, tv_r_Filter_20_450290_e;
    gettimeofday(&tv_r_Filter_20_450290_s, 0);
    SW_Filter_TD_20809(tbl_Aggregate_TD_2160_output, tbl_Filter_TD_20809_output);
    gettimeofday(&tv_r_Filter_20_450290_e, 0);

    struct timeval tv_r_JOIN_INNER_20_99945_s, tv_r_JOIN_INNER_20_99945_e;
    gettimeofday(&tv_r_JOIN_INNER_20_99945_s, 0);
    SW_JOIN_INNER_TD_20919(tbl_Filter_TD_21387_output, tbl_Filter_TD_21215_output, tbl_JOIN_INNER_TD_20919_output);
    gettimeofday(&tv_r_JOIN_INNER_20_99945_e, 0);

    struct timeval tv_r_Filter_20_879239_s, tv_r_Filter_20_879239_e;
    gettimeofday(&tv_r_Filter_20_879239_s, 0);
    SW_Filter_TD_20625(tbl_Aggregate_TD_21360_output, tbl_Filter_TD_20625_output);
    gettimeofday(&tv_r_Filter_20_879239_e, 0);

    struct timeval tv_r_JOIN_INNER_20_601205_s, tv_r_JOIN_INNER_20_601205_e;
    gettimeofday(&tv_r_JOIN_INNER_20_601205_s, 0);
    SW_JOIN_INNER_TD_20679(tbl_Filter_TD_21607_output, tbl_Filter_TD_21899_output, tbl_JOIN_INNER_TD_20679_output);
    gettimeofday(&tv_r_JOIN_INNER_20_601205_e, 0);

    struct timeval tv_r_Filter_19_835744_s, tv_r_Filter_19_835744_e;
    gettimeofday(&tv_r_Filter_19_835744_s, 0);
    SW_Filter_TD_19333(tbl_SerializeFromObject_TD_20817_input, tbl_Filter_TD_19333_output);
    gettimeofday(&tv_r_Filter_19_835744_e, 0);

    struct timeval tv_r_JOIN_INNER_19_175391_s, tv_r_JOIN_INNER_19_175391_e;
    gettimeofday(&tv_r_JOIN_INNER_19_175391_s, 0);
    SW_JOIN_INNER_TD_19822(tbl_JOIN_INNER_TD_20919_output, tbl_Filter_TD_20809_output, tbl_JOIN_INNER_TD_19822_output);
    gettimeofday(&tv_r_JOIN_INNER_19_175391_e, 0);

    struct timeval tv_r_Filter_19_728051_s, tv_r_Filter_19_728051_e;
    gettimeofday(&tv_r_Filter_19_728051_s, 0);
    SW_Filter_TD_19880(tbl_SerializeFromObject_TD_20453_input, tbl_Filter_TD_19880_output);
    gettimeofday(&tv_r_Filter_19_728051_e, 0);

    struct timeval tv_r_JOIN_INNER_19_963358_s, tv_r_JOIN_INNER_19_963358_e;
    gettimeofday(&tv_r_JOIN_INNER_19_963358_s, 0);
    SW_JOIN_INNER_TD_19689(tbl_JOIN_INNER_TD_20679_output, tbl_Filter_TD_20625_output, tbl_JOIN_INNER_TD_19689_output);
    gettimeofday(&tv_r_JOIN_INNER_19_963358_e, 0);

    struct timeval tv_r_Filter_18_832792_s, tv_r_Filter_18_832792_e;
    gettimeofday(&tv_r_Filter_18_832792_s, 0);
    SW_Filter_TD_18863(tbl_SerializeFromObject_TD_19527_input, tbl_Filter_TD_18863_output);
    gettimeofday(&tv_r_Filter_18_832792_e, 0);

    struct timeval tv_r_JOIN_INNER_18_547636_s, tv_r_JOIN_INNER_18_547636_e;
    gettimeofday(&tv_r_JOIN_INNER_18_547636_s, 0);
    SW_JOIN_INNER_TD_18144(tbl_JOIN_INNER_TD_19822_output, tbl_Filter_TD_19333_output, tbl_JOIN_INNER_TD_18144_output);
    gettimeofday(&tv_r_JOIN_INNER_18_547636_e, 0);

    struct timeval tv_r_Filter_18_778576_s, tv_r_Filter_18_778576_e;
    gettimeofday(&tv_r_Filter_18_778576_s, 0);
    SW_Filter_TD_18257(tbl_SerializeFromObject_TD_1973_input, tbl_Filter_TD_18257_output);
    gettimeofday(&tv_r_Filter_18_778576_e, 0);

    struct timeval tv_r_JOIN_INNER_18_89320_s, tv_r_JOIN_INNER_18_89320_e;
    gettimeofday(&tv_r_JOIN_INNER_18_89320_s, 0);
    SW_JOIN_INNER_TD_18270(tbl_JOIN_INNER_TD_19689_output, tbl_Filter_TD_19880_output, tbl_JOIN_INNER_TD_18270_output);
    gettimeofday(&tv_r_JOIN_INNER_18_89320_e, 0);

    struct timeval tv_r_Filter_17_910635_s, tv_r_Filter_17_910635_e;
    gettimeofday(&tv_r_Filter_17_910635_s, 0);
    SW_Filter_TD_1749(tbl_SerializeFromObject_TD_18405_input, tbl_Filter_TD_1749_output);
    gettimeofday(&tv_r_Filter_17_910635_e, 0);

    struct timeval tv_r_JOIN_INNER_17_414781_s, tv_r_JOIN_INNER_17_414781_e;
    gettimeofday(&tv_r_JOIN_INNER_17_414781_s, 0);
    SW_JOIN_INNER_TD_17724(tbl_JOIN_INNER_TD_18144_output, tbl_Filter_TD_18863_output, tbl_JOIN_INNER_TD_17724_output);
    gettimeofday(&tv_r_JOIN_INNER_17_414781_e, 0);

    struct timeval tv_r_Filter_17_800793_s, tv_r_Filter_17_800793_e;
    gettimeofday(&tv_r_Filter_17_800793_s, 0);
    SW_Filter_TD_17190(tbl_SerializeFromObject_TD_1829_input, tbl_Filter_TD_17190_output);
    gettimeofday(&tv_r_Filter_17_800793_e, 0);

    struct timeval tv_r_JOIN_INNER_17_302780_s, tv_r_JOIN_INNER_17_302780_e;
    gettimeofday(&tv_r_JOIN_INNER_17_302780_s, 0);
    SW_JOIN_INNER_TD_17482(tbl_JOIN_INNER_TD_18270_output, tbl_Filter_TD_18257_output, tbl_JOIN_INNER_TD_17482_output);
    gettimeofday(&tv_r_JOIN_INNER_17_302780_e, 0);

    struct timeval tv_r_Filter_16_390336_s, tv_r_Filter_16_390336_e;
    gettimeofday(&tv_r_Filter_16_390336_s, 0);
    SW_Filter_TD_16465(tbl_SerializeFromObject_TD_17401_input, tbl_Filter_TD_16465_output);
    gettimeofday(&tv_r_Filter_16_390336_e, 0);

    struct timeval tv_r_JOIN_INNER_16_509510_s, tv_r_JOIN_INNER_16_509510_e;
    gettimeofday(&tv_r_JOIN_INNER_16_509510_s, 0);
    SW_JOIN_INNER_TD_16122(tbl_JOIN_INNER_TD_17724_output, tbl_Filter_TD_1749_output, tbl_JOIN_INNER_TD_16122_output);
    gettimeofday(&tv_r_JOIN_INNER_16_509510_e, 0);

    struct timeval tv_r_Filter_16_203238_s, tv_r_Filter_16_203238_e;
    gettimeofday(&tv_r_Filter_16_203238_s, 0);
    SW_Filter_TD_16920(tbl_SerializeFromObject_TD_17788_input, tbl_Filter_TD_16920_output);
    gettimeofday(&tv_r_Filter_16_203238_e, 0);

    struct timeval tv_r_JOIN_INNER_16_259020_s, tv_r_JOIN_INNER_16_259020_e;
    gettimeofday(&tv_r_JOIN_INNER_16_259020_s, 0);
    SW_JOIN_INNER_TD_16477(tbl_JOIN_INNER_TD_17482_output, tbl_Filter_TD_17190_output, tbl_JOIN_INNER_TD_16477_output);
    gettimeofday(&tv_r_JOIN_INNER_16_259020_e, 0);

    struct timeval tv_r_Filter_15_233164_s, tv_r_Filter_15_233164_e;
    gettimeofday(&tv_r_Filter_15_233164_s, 0);
    SW_Filter_TD_1575(tbl_SerializeFromObject_TD_16444_input, tbl_Filter_TD_1575_output);
    gettimeofday(&tv_r_Filter_15_233164_e, 0);

    struct timeval tv_r_JOIN_INNER_15_698691_s, tv_r_JOIN_INNER_15_698691_e;
    gettimeofday(&tv_r_JOIN_INNER_15_698691_s, 0);
    SW_JOIN_INNER_TD_15975(tbl_JOIN_INNER_TD_16122_output, tbl_Filter_TD_16465_output, tbl_JOIN_INNER_TD_15975_output);
    gettimeofday(&tv_r_JOIN_INNER_15_698691_e, 0);

    struct timeval tv_r_Filter_15_749242_s, tv_r_Filter_15_749242_e;
    gettimeofday(&tv_r_Filter_15_749242_s, 0);
    SW_Filter_TD_1559(tbl_SerializeFromObject_TD_16895_input, tbl_Filter_TD_1559_output);
    gettimeofday(&tv_r_Filter_15_749242_e, 0);

    struct timeval tv_r_JOIN_INNER_15_797847_s, tv_r_JOIN_INNER_15_797847_e;
    gettimeofday(&tv_r_JOIN_INNER_15_797847_s, 0);
    SW_JOIN_INNER_TD_15183(tbl_JOIN_INNER_TD_16477_output, tbl_Filter_TD_16920_output, tbl_JOIN_INNER_TD_15183_output);
    gettimeofday(&tv_r_JOIN_INNER_15_797847_e, 0);

    struct timeval tv_r_Filter_14_964720_s, tv_r_Filter_14_964720_e;
    gettimeofday(&tv_r_Filter_14_964720_s, 0);
    SW_Filter_TD_14498(tbl_SerializeFromObject_TD_15371_input, tbl_Filter_TD_14498_output);
    gettimeofday(&tv_r_Filter_14_964720_e, 0);

    struct timeval tv_r_JOIN_INNER_14_549342_s, tv_r_JOIN_INNER_14_549342_e;
    gettimeofday(&tv_r_JOIN_INNER_14_549342_s, 0);
    SW_JOIN_INNER_TD_14960(tbl_JOIN_INNER_TD_15975_output, tbl_Filter_TD_1575_output, tbl_JOIN_INNER_TD_14960_output);
    gettimeofday(&tv_r_JOIN_INNER_14_549342_e, 0);

    struct timeval tv_r_Filter_14_705513_s, tv_r_Filter_14_705513_e;
    gettimeofday(&tv_r_Filter_14_705513_s, 0);
    SW_Filter_TD_14941(tbl_SerializeFromObject_TD_15210_input, tbl_Filter_TD_14941_output);
    gettimeofday(&tv_r_Filter_14_705513_e, 0);

    struct timeval tv_r_JOIN_INNER_14_570635_s, tv_r_JOIN_INNER_14_570635_e;
    gettimeofday(&tv_r_JOIN_INNER_14_570635_s, 0);
    SW_JOIN_INNER_TD_14698(tbl_JOIN_INNER_TD_15183_output, tbl_Filter_TD_1559_output, tbl_JOIN_INNER_TD_14698_output);
    gettimeofday(&tv_r_JOIN_INNER_14_570635_e, 0);

    struct timeval tv_r_Filter_13_30894_s, tv_r_Filter_13_30894_e;
    gettimeofday(&tv_r_Filter_13_30894_s, 0);
    SW_Filter_TD_13462(tbl_SerializeFromObject_TD_14926_input, tbl_Filter_TD_13462_output);
    gettimeofday(&tv_r_Filter_13_30894_e, 0);

    struct timeval tv_r_JOIN_INNER_13_777967_s, tv_r_JOIN_INNER_13_777967_e;
    gettimeofday(&tv_r_JOIN_INNER_13_777967_s, 0);
    SW_JOIN_INNER_TD_13897(tbl_JOIN_INNER_TD_14960_output, tbl_Filter_TD_14498_output, tbl_JOIN_INNER_TD_13897_output);
    gettimeofday(&tv_r_JOIN_INNER_13_777967_e, 0);

    struct timeval tv_r_Filter_13_104164_s, tv_r_Filter_13_104164_e;
    gettimeofday(&tv_r_Filter_13_104164_s, 0);
    SW_Filter_TD_13368(tbl_SerializeFromObject_TD_14814_input, tbl_Filter_TD_13368_output);
    gettimeofday(&tv_r_Filter_13_104164_e, 0);

    struct timeval tv_r_JOIN_INNER_13_923396_s, tv_r_JOIN_INNER_13_923396_e;
    gettimeofday(&tv_r_JOIN_INNER_13_923396_s, 0);
    SW_JOIN_INNER_TD_13284(tbl_JOIN_INNER_TD_14698_output, tbl_Filter_TD_14941_output, tbl_JOIN_INNER_TD_13284_output);
    gettimeofday(&tv_r_JOIN_INNER_13_923396_e, 0);

    struct timeval tv_r_Filter_12_445513_s, tv_r_Filter_12_445513_e;
    gettimeofday(&tv_r_Filter_12_445513_s, 0);
    SW_Filter_TD_1217(tbl_SerializeFromObject_TD_13730_input, tbl_Filter_TD_1217_output);
    gettimeofday(&tv_r_Filter_12_445513_e, 0);

    struct timeval tv_r_JOIN_INNER_12_811466_s, tv_r_JOIN_INNER_12_811466_e;
    gettimeofday(&tv_r_JOIN_INNER_12_811466_s, 0);
    SW_JOIN_INNER_TD_12614(tbl_JOIN_INNER_TD_13897_output, tbl_Filter_TD_13462_output, tbl_JOIN_INNER_TD_12614_output);
    gettimeofday(&tv_r_JOIN_INNER_12_811466_e, 0);

    struct timeval tv_r_Filter_12_496355_s, tv_r_Filter_12_496355_e;
    gettimeofday(&tv_r_Filter_12_496355_s, 0);
    SW_Filter_TD_12587(tbl_SerializeFromObject_TD_13359_input, tbl_Filter_TD_12587_output);
    gettimeofday(&tv_r_Filter_12_496355_e, 0);

    struct timeval tv_r_JOIN_INNER_12_915379_s, tv_r_JOIN_INNER_12_915379_e;
    gettimeofday(&tv_r_JOIN_INNER_12_915379_s, 0);
    SW_JOIN_INNER_TD_12366(tbl_JOIN_INNER_TD_13284_output, tbl_Filter_TD_13368_output, tbl_JOIN_INNER_TD_12366_output);
    gettimeofday(&tv_r_JOIN_INNER_12_915379_e, 0);

    struct timeval tv_r_Filter_11_728121_s, tv_r_Filter_11_728121_e;
    gettimeofday(&tv_r_Filter_11_728121_s, 0);
    SW_Filter_TD_11841(tbl_SerializeFromObject_TD_12137_input, tbl_Filter_TD_11841_output);
    gettimeofday(&tv_r_Filter_11_728121_e, 0);

    struct timeval tv_r_JOIN_INNER_11_662001_s, tv_r_JOIN_INNER_11_662001_e;
    gettimeofday(&tv_r_JOIN_INNER_11_662001_s, 0);
    SW_JOIN_INNER_TD_1133(tbl_JOIN_INNER_TD_12614_output, tbl_Filter_TD_1217_output, tbl_JOIN_INNER_TD_1133_output);
    gettimeofday(&tv_r_JOIN_INNER_11_662001_e, 0);

    struct timeval tv_r_Filter_11_91629_s, tv_r_Filter_11_91629_e;
    gettimeofday(&tv_r_Filter_11_91629_s, 0);
    SW_Filter_TD_115(tbl_SerializeFromObject_TD_12279_input, tbl_Filter_TD_115_output);
    gettimeofday(&tv_r_Filter_11_91629_e, 0);

    struct timeval tv_r_JOIN_INNER_11_637658_s, tv_r_JOIN_INNER_11_637658_e;
    gettimeofday(&tv_r_JOIN_INNER_11_637658_s, 0);
    SW_JOIN_INNER_TD_11819(tbl_JOIN_INNER_TD_12366_output, tbl_Filter_TD_12587_output, tbl_JOIN_INNER_TD_11819_output);
    gettimeofday(&tv_r_JOIN_INNER_11_637658_e, 0);

    struct timeval tv_r_Filter_10_250568_s, tv_r_Filter_10_250568_e;
    gettimeofday(&tv_r_Filter_10_250568_s, 0);
    SW_Filter_TD_10610(tbl_SerializeFromObject_TD_11795_input, tbl_Filter_TD_10610_output);
    gettimeofday(&tv_r_Filter_10_250568_e, 0);

    struct timeval tv_r_JOIN_INNER_10_415722_s, tv_r_JOIN_INNER_10_415722_e;
    gettimeofday(&tv_r_JOIN_INNER_10_415722_s, 0);
    SW_JOIN_INNER_TD_10170(tbl_JOIN_INNER_TD_1133_output, tbl_Filter_TD_11841_output, tbl_JOIN_INNER_TD_10170_output);
    gettimeofday(&tv_r_JOIN_INNER_10_415722_e, 0);

    struct timeval tv_r_Filter_10_193799_s, tv_r_Filter_10_193799_e;
    gettimeofday(&tv_r_Filter_10_193799_s, 0);
    SW_Filter_TD_10925(tbl_SerializeFromObject_TD_1192_input, tbl_Filter_TD_10925_output);
    gettimeofday(&tv_r_Filter_10_193799_e, 0);

    struct timeval tv_r_JOIN_INNER_10_788595_s, tv_r_JOIN_INNER_10_788595_e;
    gettimeofday(&tv_r_JOIN_INNER_10_788595_s, 0);
    SW_JOIN_INNER_TD_10624(tbl_JOIN_INNER_TD_11819_output, tbl_Filter_TD_115_output, tbl_JOIN_INNER_TD_10624_output);
    gettimeofday(&tv_r_JOIN_INNER_10_788595_e, 0);

    struct timeval tv_r_Filter_9_877004_s, tv_r_Filter_9_877004_e;
    gettimeofday(&tv_r_Filter_9_877004_s, 0);
    SW_Filter_TD_9827(tbl_SerializeFromObject_TD_10401_input, tbl_Filter_TD_9827_output);
    gettimeofday(&tv_r_Filter_9_877004_e, 0);

    struct timeval tv_r_JOIN_INNER_9_153260_s, tv_r_JOIN_INNER_9_153260_e;
    gettimeofday(&tv_r_JOIN_INNER_9_153260_s, 0);
    SW_JOIN_INNER_TD_939(tbl_JOIN_INNER_TD_10170_output, tbl_Filter_TD_10610_output, tbl_JOIN_INNER_TD_939_output);
    gettimeofday(&tv_r_JOIN_INNER_9_153260_e, 0);

    struct timeval tv_r_Filter_9_656247_s, tv_r_Filter_9_656247_e;
    gettimeofday(&tv_r_Filter_9_656247_s, 0);
    SW_Filter_TD_958(tbl_SerializeFromObject_TD_10144_input, tbl_Filter_TD_958_output);
    gettimeofday(&tv_r_Filter_9_656247_e, 0);

    struct timeval tv_r_JOIN_INNER_9_317936_s, tv_r_JOIN_INNER_9_317936_e;
    gettimeofday(&tv_r_JOIN_INNER_9_317936_s, 0);
    SW_JOIN_INNER_TD_9130(tbl_JOIN_INNER_TD_10624_output, tbl_Filter_TD_10925_output, tbl_JOIN_INNER_TD_9130_output);
    gettimeofday(&tv_r_JOIN_INNER_9_317936_e, 0);

    struct timeval tv_r_Filter_8_471681_s, tv_r_Filter_8_471681_e;
    gettimeofday(&tv_r_Filter_8_471681_s, 0);
    SW_Filter_TD_8500(tbl_SerializeFromObject_TD_9196_input, tbl_Filter_TD_8500_output);
    gettimeofday(&tv_r_Filter_8_471681_e, 0);

    struct timeval tv_r_JOIN_INNER_8_352307_s, tv_r_JOIN_INNER_8_352307_e;
    gettimeofday(&tv_r_JOIN_INNER_8_352307_s, 0);
    SW_JOIN_INNER_TD_8928(tbl_JOIN_INNER_TD_939_output, tbl_Filter_TD_9827_output, tbl_JOIN_INNER_TD_8928_output);
    gettimeofday(&tv_r_JOIN_INNER_8_352307_e, 0);

    struct timeval tv_r_Filter_8_784115_s, tv_r_Filter_8_784115_e;
    gettimeofday(&tv_r_Filter_8_784115_s, 0);
    SW_Filter_TD_8498(tbl_SerializeFromObject_TD_9677_input, tbl_Filter_TD_8498_output);
    gettimeofday(&tv_r_Filter_8_784115_e, 0);

    struct timeval tv_r_JOIN_INNER_8_45214_s, tv_r_JOIN_INNER_8_45214_e;
    gettimeofday(&tv_r_JOIN_INNER_8_45214_s, 0);
    SW_JOIN_INNER_TD_8636(tbl_JOIN_INNER_TD_9130_output, tbl_Filter_TD_958_output, tbl_JOIN_INNER_TD_8636_output);
    gettimeofday(&tv_r_JOIN_INNER_8_45214_e, 0);

    struct timeval tv_r_Filter_7_216706_s, tv_r_Filter_7_216706_e;
    gettimeofday(&tv_r_Filter_7_216706_s, 0);
    SW_Filter_TD_7912(tbl_SerializeFromObject_TD_8928_input, tbl_Filter_TD_7912_output);
    gettimeofday(&tv_r_Filter_7_216706_e, 0);

    struct timeval tv_r_JOIN_INNER_7_271795_s, tv_r_JOIN_INNER_7_271795_e;
    gettimeofday(&tv_r_JOIN_INNER_7_271795_s, 0);
    SW_JOIN_INNER_TD_7413(tbl_JOIN_INNER_TD_8928_output, tbl_Filter_TD_8500_output, tbl_JOIN_INNER_TD_7413_output);
    gettimeofday(&tv_r_JOIN_INNER_7_271795_e, 0);

    struct timeval tv_r_Filter_7_820395_s, tv_r_Filter_7_820395_e;
    gettimeofday(&tv_r_Filter_7_820395_s, 0);
    SW_Filter_TD_7917(tbl_SerializeFromObject_TD_827_input, tbl_Filter_TD_7917_output);
    gettimeofday(&tv_r_Filter_7_820395_e, 0);

    struct timeval tv_r_JOIN_INNER_7_936291_s, tv_r_JOIN_INNER_7_936291_e;
    gettimeofday(&tv_r_JOIN_INNER_7_936291_s, 0);
    SW_JOIN_INNER_TD_7357(tbl_JOIN_INNER_TD_8636_output, tbl_Filter_TD_8498_output, tbl_JOIN_INNER_TD_7357_output);
    gettimeofday(&tv_r_JOIN_INNER_7_936291_e, 0);

    struct timeval tv_r_Filter_6_190244_s, tv_r_Filter_6_190244_e;
    gettimeofday(&tv_r_Filter_6_190244_s, 0);
    SW_Filter_TD_6259(tbl_SerializeFromObject_TD_7674_input, tbl_Filter_TD_6259_output);
    gettimeofday(&tv_r_Filter_6_190244_e, 0);

    struct timeval tv_r_JOIN_INNER_6_760233_s, tv_r_JOIN_INNER_6_760233_e;
    gettimeofday(&tv_r_JOIN_INNER_6_760233_s, 0);
    SW_JOIN_INNER_TD_691(tbl_JOIN_INNER_TD_7413_output, tbl_Filter_TD_7912_output, tbl_JOIN_INNER_TD_691_output);
    gettimeofday(&tv_r_JOIN_INNER_6_760233_e, 0);

    struct timeval tv_r_Filter_6_78768_s, tv_r_Filter_6_78768_e;
    gettimeofday(&tv_r_Filter_6_78768_s, 0);
    SW_Filter_TD_6813(tbl_SerializeFromObject_TD_7576_input, tbl_Filter_TD_6813_output);
    gettimeofday(&tv_r_Filter_6_78768_e, 0);

    struct timeval tv_r_JOIN_INNER_6_158182_s, tv_r_JOIN_INNER_6_158182_e;
    gettimeofday(&tv_r_JOIN_INNER_6_158182_s, 0);
    SW_JOIN_INNER_TD_6496(tbl_JOIN_INNER_TD_7357_output, tbl_Filter_TD_7917_output, tbl_JOIN_INNER_TD_6496_output);
    gettimeofday(&tv_r_JOIN_INNER_6_158182_e, 0);

    struct timeval tv_r_Filter_5_449904_s, tv_r_Filter_5_449904_e;
    gettimeofday(&tv_r_Filter_5_449904_s, 0);
    SW_Filter_TD_5551(tbl_SerializeFromObject_TD_612_input, tbl_Filter_TD_5551_output);
    gettimeofday(&tv_r_Filter_5_449904_e, 0);

    struct timeval tv_r_JOIN_INNER_5_767308_s, tv_r_JOIN_INNER_5_767308_e;
    gettimeofday(&tv_r_JOIN_INNER_5_767308_s, 0);
    SW_JOIN_INNER_TD_5724(tbl_JOIN_INNER_TD_691_output, tbl_Filter_TD_6259_output, tbl_JOIN_INNER_TD_5724_output);
    gettimeofday(&tv_r_JOIN_INNER_5_767308_e, 0);

    struct timeval tv_r_Filter_5_798271_s, tv_r_Filter_5_798271_e;
    gettimeofday(&tv_r_Filter_5_798271_s, 0);
    SW_Filter_TD_5300(tbl_SerializeFromObject_TD_698_input, tbl_Filter_TD_5300_output);
    gettimeofday(&tv_r_Filter_5_798271_e, 0);

    struct timeval tv_r_JOIN_INNER_5_38861_s, tv_r_JOIN_INNER_5_38861_e;
    gettimeofday(&tv_r_JOIN_INNER_5_38861_s, 0);
    SW_JOIN_INNER_TD_5470(tbl_JOIN_INNER_TD_6496_output, tbl_Filter_TD_6813_output, tbl_JOIN_INNER_TD_5470_output);
    gettimeofday(&tv_r_JOIN_INNER_5_38861_e, 0);

    struct timeval tv_r_JOIN_INNER_4_600314_s, tv_r_JOIN_INNER_4_600314_e;
    gettimeofday(&tv_r_JOIN_INNER_4_600314_s, 0);
    SW_JOIN_INNER_TD_4630(tbl_JOIN_INNER_TD_5724_output, tbl_Filter_TD_5551_output, tbl_JOIN_INNER_TD_4630_output);
    gettimeofday(&tv_r_JOIN_INNER_4_600314_e, 0);

    struct timeval tv_r_JOIN_INNER_4_51874_s, tv_r_JOIN_INNER_4_51874_e;
    gettimeofday(&tv_r_JOIN_INNER_4_51874_s, 0);
    SW_JOIN_INNER_TD_4497(tbl_JOIN_INNER_TD_5470_output, tbl_Filter_TD_5300_output, tbl_JOIN_INNER_TD_4497_output);
    gettimeofday(&tv_r_JOIN_INNER_4_51874_e, 0);

    struct timeval tv_r_Aggregate_3_613038_s, tv_r_Aggregate_3_613038_e;
    gettimeofday(&tv_r_Aggregate_3_613038_s, 0);
    SW_Aggregate_TD_3862(tbl_JOIN_INNER_TD_4630_output, tbl_Aggregate_TD_3862_output);
    gettimeofday(&tv_r_Aggregate_3_613038_e, 0);

    struct timeval tv_r_Aggregate_3_615073_s, tv_r_Aggregate_3_615073_e;
    gettimeofday(&tv_r_Aggregate_3_615073_s, 0);
    SW_Aggregate_TD_3191(tbl_JOIN_INNER_TD_4497_output, tbl_Aggregate_TD_3191_output);
    gettimeofday(&tv_r_Aggregate_3_615073_e, 0);

    struct timeval tv_r_JOIN_INNER_2_719586_s, tv_r_JOIN_INNER_2_719586_e;
    gettimeofday(&tv_r_JOIN_INNER_2_719586_s, 0);
    SW_JOIN_INNER_TD_216(tbl_Aggregate_TD_3191_output, tbl_Aggregate_TD_3862_output, tbl_JOIN_INNER_TD_216_output);
    gettimeofday(&tv_r_JOIN_INNER_2_719586_e, 0);

    struct timeval tv_r_Project_1_512496_s, tv_r_Project_1_512496_e;
    gettimeofday(&tv_r_Project_1_512496_s, 0);
    SW_Project_TD_1119(tbl_JOIN_INNER_TD_216_output, tbl_Project_TD_1119_output);
    gettimeofday(&tv_r_Project_1_512496_e, 0);

    struct timeval tv_r_Sort_0_95538_s, tv_r_Sort_0_95538_e;
    gettimeofday(&tv_r_Sort_0_95538_s, 0);
    SW_Sort_TD_0481(tbl_Project_TD_1119_output, tbl_Sort_TD_0481_output);
    gettimeofday(&tv_r_Sort_0_95538_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_291836_s, &tv_r_Filter_23_291836_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24479_input: " << tbl_SerializeFromObject_TD_24479_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_295005_s, &tv_r_Filter_23_295005_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24904_input: " << tbl_SerializeFromObject_TD_24904_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_538650_s, &tv_r_Filter_23_538650_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24584_input: " << tbl_SerializeFromObject_TD_24584_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_406355_s, &tv_r_Filter_23_406355_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2448_input: " << tbl_SerializeFromObject_TD_2448_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_618784_s, &tv_r_JOIN_INNER_22_618784_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2382_output: " << tbl_Filter_TD_2382_output.getNumRow() << " " << "tbl_Filter_TD_2327_output: " << tbl_Filter_TD_2327_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_364922_s, &tv_r_JOIN_INNER_22_364922_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23246_output: " << tbl_Filter_TD_23246_output.getNumRow() << " " << "tbl_Filter_TD_23258_output: " << tbl_Filter_TD_23258_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_21: " << tvdiff(&tv_r_Aggregate_21_191957_s, &tv_r_Aggregate_21_191957_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22484_output: " << tbl_JOIN_INNER_TD_22484_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_268584_s, &tv_r_Filter_21_268584_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22593_input: " << tbl_SerializeFromObject_TD_22593_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_961080_s, &tv_r_Filter_21_961080_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22425_input: " << tbl_SerializeFromObject_TD_22425_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_21: " << tvdiff(&tv_r_Aggregate_21_790941_s, &tv_r_Aggregate_21_790941_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22611_output: " << tbl_JOIN_INNER_TD_22611_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_256390_s, &tv_r_Filter_21_256390_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22788_input: " << tbl_SerializeFromObject_TD_22788_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_265387_s, &tv_r_Filter_21_265387_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22647_input: " << tbl_SerializeFromObject_TD_22647_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_450290_s, &tv_r_Filter_20_450290_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2160_output: " << tbl_Aggregate_TD_2160_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_20: " << tvdiff(&tv_r_JOIN_INNER_20_99945_s, &tv_r_JOIN_INNER_20_99945_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21387_output: " << tbl_Filter_TD_21387_output.getNumRow() << " " << "tbl_Filter_TD_21215_output: " << tbl_Filter_TD_21215_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_879239_s, &tv_r_Filter_20_879239_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_21360_output: " << tbl_Aggregate_TD_21360_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_20: " << tvdiff(&tv_r_JOIN_INNER_20_601205_s, &tv_r_JOIN_INNER_20_601205_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21607_output: " << tbl_Filter_TD_21607_output.getNumRow() << " " << "tbl_Filter_TD_21899_output: " << tbl_Filter_TD_21899_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_835744_s, &tv_r_Filter_19_835744_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20817_input: " << tbl_SerializeFromObject_TD_20817_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_175391_s, &tv_r_JOIN_INNER_19_175391_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_20919_output: " << tbl_JOIN_INNER_TD_20919_output.getNumRow() << " " << "tbl_Filter_TD_20809_output: " << tbl_Filter_TD_20809_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_728051_s, &tv_r_Filter_19_728051_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20453_input: " << tbl_SerializeFromObject_TD_20453_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_963358_s, &tv_r_JOIN_INNER_19_963358_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_20679_output: " << tbl_JOIN_INNER_TD_20679_output.getNumRow() << " " << "tbl_Filter_TD_20625_output: " << tbl_Filter_TD_20625_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_832792_s, &tv_r_Filter_18_832792_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19527_input: " << tbl_SerializeFromObject_TD_19527_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_547636_s, &tv_r_JOIN_INNER_18_547636_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19822_output: " << tbl_JOIN_INNER_TD_19822_output.getNumRow() << " " << "tbl_Filter_TD_19333_output: " << tbl_Filter_TD_19333_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_778576_s, &tv_r_Filter_18_778576_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1973_input: " << tbl_SerializeFromObject_TD_1973_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_89320_s, &tv_r_JOIN_INNER_18_89320_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19689_output: " << tbl_JOIN_INNER_TD_19689_output.getNumRow() << " " << "tbl_Filter_TD_19880_output: " << tbl_Filter_TD_19880_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_910635_s, &tv_r_Filter_17_910635_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18405_input: " << tbl_SerializeFromObject_TD_18405_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_414781_s, &tv_r_JOIN_INNER_17_414781_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18144_output: " << tbl_JOIN_INNER_TD_18144_output.getNumRow() << " " << "tbl_Filter_TD_18863_output: " << tbl_Filter_TD_18863_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_800793_s, &tv_r_Filter_17_800793_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1829_input: " << tbl_SerializeFromObject_TD_1829_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_302780_s, &tv_r_JOIN_INNER_17_302780_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18270_output: " << tbl_JOIN_INNER_TD_18270_output.getNumRow() << " " << "tbl_Filter_TD_18257_output: " << tbl_Filter_TD_18257_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_16: " << tvdiff(&tv_r_Filter_16_390336_s, &tv_r_Filter_16_390336_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_17401_input: " << tbl_SerializeFromObject_TD_17401_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_509510_s, &tv_r_JOIN_INNER_16_509510_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17724_output: " << tbl_JOIN_INNER_TD_17724_output.getNumRow() << " " << "tbl_Filter_TD_1749_output: " << tbl_Filter_TD_1749_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_16: " << tvdiff(&tv_r_Filter_16_203238_s, &tv_r_Filter_16_203238_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_17788_input: " << tbl_SerializeFromObject_TD_17788_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_259020_s, &tv_r_JOIN_INNER_16_259020_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17482_output: " << tbl_JOIN_INNER_TD_17482_output.getNumRow() << " " << "tbl_Filter_TD_17190_output: " << tbl_Filter_TD_17190_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_233164_s, &tv_r_Filter_15_233164_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_16444_input: " << tbl_SerializeFromObject_TD_16444_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_15: " << tvdiff(&tv_r_JOIN_INNER_15_698691_s, &tv_r_JOIN_INNER_15_698691_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_16122_output: " << tbl_JOIN_INNER_TD_16122_output.getNumRow() << " " << "tbl_Filter_TD_16465_output: " << tbl_Filter_TD_16465_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_749242_s, &tv_r_Filter_15_749242_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_16895_input: " << tbl_SerializeFromObject_TD_16895_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_15: " << tvdiff(&tv_r_JOIN_INNER_15_797847_s, &tv_r_JOIN_INNER_15_797847_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_16477_output: " << tbl_JOIN_INNER_TD_16477_output.getNumRow() << " " << "tbl_Filter_TD_16920_output: " << tbl_Filter_TD_16920_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_964720_s, &tv_r_Filter_14_964720_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15371_input: " << tbl_SerializeFromObject_TD_15371_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_14: " << tvdiff(&tv_r_JOIN_INNER_14_549342_s, &tv_r_JOIN_INNER_14_549342_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_15975_output: " << tbl_JOIN_INNER_TD_15975_output.getNumRow() << " " << "tbl_Filter_TD_1575_output: " << tbl_Filter_TD_1575_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_705513_s, &tv_r_Filter_14_705513_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15210_input: " << tbl_SerializeFromObject_TD_15210_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_14: " << tvdiff(&tv_r_JOIN_INNER_14_570635_s, &tv_r_JOIN_INNER_14_570635_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_15183_output: " << tbl_JOIN_INNER_TD_15183_output.getNumRow() << " " << "tbl_Filter_TD_1559_output: " << tbl_Filter_TD_1559_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_30894_s, &tv_r_Filter_13_30894_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14926_input: " << tbl_SerializeFromObject_TD_14926_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_777967_s, &tv_r_JOIN_INNER_13_777967_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_14960_output: " << tbl_JOIN_INNER_TD_14960_output.getNumRow() << " " << "tbl_Filter_TD_14498_output: " << tbl_Filter_TD_14498_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_104164_s, &tv_r_Filter_13_104164_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14814_input: " << tbl_SerializeFromObject_TD_14814_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_923396_s, &tv_r_JOIN_INNER_13_923396_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_14698_output: " << tbl_JOIN_INNER_TD_14698_output.getNumRow() << " " << "tbl_Filter_TD_14941_output: " << tbl_Filter_TD_14941_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_445513_s, &tv_r_Filter_12_445513_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13730_input: " << tbl_SerializeFromObject_TD_13730_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_811466_s, &tv_r_JOIN_INNER_12_811466_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13897_output: " << tbl_JOIN_INNER_TD_13897_output.getNumRow() << " " << "tbl_Filter_TD_13462_output: " << tbl_Filter_TD_13462_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_496355_s, &tv_r_Filter_12_496355_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13359_input: " << tbl_SerializeFromObject_TD_13359_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_915379_s, &tv_r_JOIN_INNER_12_915379_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13284_output: " << tbl_JOIN_INNER_TD_13284_output.getNumRow() << " " << "tbl_Filter_TD_13368_output: " << tbl_Filter_TD_13368_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_728121_s, &tv_r_Filter_11_728121_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12137_input: " << tbl_SerializeFromObject_TD_12137_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_662001_s, &tv_r_JOIN_INNER_11_662001_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12614_output: " << tbl_JOIN_INNER_TD_12614_output.getNumRow() << " " << "tbl_Filter_TD_1217_output: " << tbl_Filter_TD_1217_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_91629_s, &tv_r_Filter_11_91629_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12279_input: " << tbl_SerializeFromObject_TD_12279_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_637658_s, &tv_r_JOIN_INNER_11_637658_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12366_output: " << tbl_JOIN_INNER_TD_12366_output.getNumRow() << " " << "tbl_Filter_TD_12587_output: " << tbl_Filter_TD_12587_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_250568_s, &tv_r_Filter_10_250568_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11795_input: " << tbl_SerializeFromObject_TD_11795_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_415722_s, &tv_r_JOIN_INNER_10_415722_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1133_output: " << tbl_JOIN_INNER_TD_1133_output.getNumRow() << " " << "tbl_Filter_TD_11841_output: " << tbl_Filter_TD_11841_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_193799_s, &tv_r_Filter_10_193799_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1192_input: " << tbl_SerializeFromObject_TD_1192_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_788595_s, &tv_r_JOIN_INNER_10_788595_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11819_output: " << tbl_JOIN_INNER_TD_11819_output.getNumRow() << " " << "tbl_Filter_TD_115_output: " << tbl_Filter_TD_115_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_877004_s, &tv_r_Filter_9_877004_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10401_input: " << tbl_SerializeFromObject_TD_10401_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_153260_s, &tv_r_JOIN_INNER_9_153260_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10170_output: " << tbl_JOIN_INNER_TD_10170_output.getNumRow() << " " << "tbl_Filter_TD_10610_output: " << tbl_Filter_TD_10610_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_656247_s, &tv_r_Filter_9_656247_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10144_input: " << tbl_SerializeFromObject_TD_10144_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_317936_s, &tv_r_JOIN_INNER_9_317936_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10624_output: " << tbl_JOIN_INNER_TD_10624_output.getNumRow() << " " << "tbl_Filter_TD_10925_output: " << tbl_Filter_TD_10925_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_471681_s, &tv_r_Filter_8_471681_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9196_input: " << tbl_SerializeFromObject_TD_9196_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_352307_s, &tv_r_JOIN_INNER_8_352307_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_939_output: " << tbl_JOIN_INNER_TD_939_output.getNumRow() << " " << "tbl_Filter_TD_9827_output: " << tbl_Filter_TD_9827_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_784115_s, &tv_r_Filter_8_784115_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9677_input: " << tbl_SerializeFromObject_TD_9677_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_45214_s, &tv_r_JOIN_INNER_8_45214_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9130_output: " << tbl_JOIN_INNER_TD_9130_output.getNumRow() << " " << "tbl_Filter_TD_958_output: " << tbl_Filter_TD_958_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_216706_s, &tv_r_Filter_7_216706_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8928_input: " << tbl_SerializeFromObject_TD_8928_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_271795_s, &tv_r_JOIN_INNER_7_271795_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8928_output: " << tbl_JOIN_INNER_TD_8928_output.getNumRow() << " " << "tbl_Filter_TD_8500_output: " << tbl_Filter_TD_8500_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_820395_s, &tv_r_Filter_7_820395_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_827_input: " << tbl_SerializeFromObject_TD_827_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_936291_s, &tv_r_JOIN_INNER_7_936291_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8636_output: " << tbl_JOIN_INNER_TD_8636_output.getNumRow() << " " << "tbl_Filter_TD_8498_output: " << tbl_Filter_TD_8498_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_190244_s, &tv_r_Filter_6_190244_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7674_input: " << tbl_SerializeFromObject_TD_7674_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_760233_s, &tv_r_JOIN_INNER_6_760233_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7413_output: " << tbl_JOIN_INNER_TD_7413_output.getNumRow() << " " << "tbl_Filter_TD_7912_output: " << tbl_Filter_TD_7912_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_78768_s, &tv_r_Filter_6_78768_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7576_input: " << tbl_SerializeFromObject_TD_7576_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_158182_s, &tv_r_JOIN_INNER_6_158182_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7357_output: " << tbl_JOIN_INNER_TD_7357_output.getNumRow() << " " << "tbl_Filter_TD_7917_output: " << tbl_Filter_TD_7917_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_449904_s, &tv_r_Filter_5_449904_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_612_input: " << tbl_SerializeFromObject_TD_612_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_767308_s, &tv_r_JOIN_INNER_5_767308_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_691_output: " << tbl_JOIN_INNER_TD_691_output.getNumRow() << " " << "tbl_Filter_TD_6259_output: " << tbl_Filter_TD_6259_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_798271_s, &tv_r_Filter_5_798271_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_698_input: " << tbl_SerializeFromObject_TD_698_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_38861_s, &tv_r_JOIN_INNER_5_38861_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6496_output: " << tbl_JOIN_INNER_TD_6496_output.getNumRow() << " " << "tbl_Filter_TD_6813_output: " << tbl_Filter_TD_6813_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_600314_s, &tv_r_JOIN_INNER_4_600314_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5724_output: " << tbl_JOIN_INNER_TD_5724_output.getNumRow() << " " << "tbl_Filter_TD_5551_output: " << tbl_Filter_TD_5551_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_51874_s, &tv_r_JOIN_INNER_4_51874_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5470_output: " << tbl_JOIN_INNER_TD_5470_output.getNumRow() << " " << "tbl_Filter_TD_5300_output: " << tbl_Filter_TD_5300_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_613038_s, &tv_r_Aggregate_3_613038_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4630_output: " << tbl_JOIN_INNER_TD_4630_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_615073_s, &tv_r_Aggregate_3_615073_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4497_output: " << tbl_JOIN_INNER_TD_4497_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_719586_s, &tv_r_JOIN_INNER_2_719586_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3191_output: " << tbl_Aggregate_TD_3191_output.getNumRow() << " " << "tbl_Aggregate_TD_3862_output: " << tbl_Aggregate_TD_3862_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_512496_s, &tv_r_Project_1_512496_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_216_output: " << tbl_JOIN_INNER_TD_216_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_95538_s, &tv_r_Sort_0_95538_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1119_output: " << tbl_Project_TD_1119_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.2246222 * 1000 << "ms" << std::endl; 
    return 0; 
}
