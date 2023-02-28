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

#include "cfgFunc_q78.hpp" 
#include "q78.hpp" 

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
    std::cout << "NOTE:running query #78\n."; 
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
    Table tbl_GlobalLimit_TD_0719824_output("tbl_GlobalLimit_TD_0719824_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_0719824_output.allocateHost();
    Table tbl_LocalLimit_TD_1830181_output("tbl_LocalLimit_TD_1830181_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1830181_output.allocateHost();
    Table tbl_Sort_TD_2283204_output("tbl_Sort_TD_2283204_output", 6100000, 13, "");
    tbl_Sort_TD_2283204_output.allocateHost();
    Table tbl_Project_TD_344674_output("tbl_Project_TD_344674_output", 6100000, 13, "");
    tbl_Project_TD_344674_output.allocateHost();
    Table tbl_Filter_TD_4768320_output("tbl_Filter_TD_4768320_output", 6100000, 12, "");
    tbl_Filter_TD_4768320_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_5635267_output("tbl_JOIN_LEFTOUTER_TD_5635267_output", 6100000, 12, "");
    tbl_JOIN_LEFTOUTER_TD_5635267_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_6331756_output("tbl_JOIN_LEFTOUTER_TD_6331756_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_6331756_output.allocateHost();
    Table tbl_Aggregate_TD_6420558_output("tbl_Aggregate_TD_6420558_output", 6100000, 6, "");
    tbl_Aggregate_TD_6420558_output.allocateHost();
    Table tbl_Aggregate_TD_7837729_output("tbl_Aggregate_TD_7837729_output", 6100000, 6, "");
    tbl_Aggregate_TD_7837729_output.allocateHost();
    Table tbl_Aggregate_TD_7868102_output("tbl_Aggregate_TD_7868102_output", 6100000, 6, "");
    tbl_Aggregate_TD_7868102_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7400734_output("tbl_JOIN_INNER_TD_7400734_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7400734_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8502276_output("tbl_JOIN_INNER_TD_8502276_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8502276_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8757232_output("tbl_JOIN_INNER_TD_8757232_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8757232_output.allocateHost();
    Table tbl_Filter_TD_8336378_output("tbl_Filter_TD_8336378_output", 6100000, 6, "");
    tbl_Filter_TD_8336378_output.allocateHost();
    Table tbl_Filter_TD_8496883_output("tbl_Filter_TD_8496883_output", 6100000, 2, "");
    tbl_Filter_TD_8496883_output.allocateHost();
    Table tbl_Filter_TD_976570_output("tbl_Filter_TD_976570_output", 6100000, 6, "");
    tbl_Filter_TD_976570_output.allocateHost();
    Table tbl_Filter_TD_9743359_output("tbl_Filter_TD_9743359_output", 6100000, 2, "");
    tbl_Filter_TD_9743359_output.allocateHost();
    Table tbl_Filter_TD_9397482_output("tbl_Filter_TD_9397482_output", 6100000, 6, "");
    tbl_Filter_TD_9397482_output.allocateHost();
    Table tbl_Filter_TD_9978439_output("tbl_Filter_TD_9978439_output", 6100000, 2, "");
    tbl_Filter_TD_9978439_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9477366_output("tbl_JOIN_LEFTOUTER_TD_9477366_output", 6100000, 7, "");
    tbl_JOIN_LEFTOUTER_TD_9477366_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9179802_input;
    tbl_SerializeFromObject_TD_9179802_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9179802_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9179802_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9179802_input.allocateHost();
    tbl_SerializeFromObject_TD_9179802_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_10711537_output("tbl_JOIN_LEFTOUTER_TD_10711537_output", 6100000, 7, "");
    tbl_JOIN_LEFTOUTER_TD_10711537_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10904468_input;
    tbl_SerializeFromObject_TD_10904468_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10904468_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10904468_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10904468_input.allocateHost();
    tbl_SerializeFromObject_TD_10904468_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_10713050_output("tbl_JOIN_LEFTOUTER_TD_10713050_output", 6100000, 7, "");
    tbl_JOIN_LEFTOUTER_TD_10713050_output.allocateHost();
    Table tbl_SerializeFromObject_TD_103060_input;
    tbl_SerializeFromObject_TD_103060_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_103060_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_103060_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_103060_input.allocateHost();
    tbl_SerializeFromObject_TD_103060_input.loadHost();
    Table tbl_Filter_TD_1046103_output("tbl_Filter_TD_1046103_output", 6100000, 7, "");
    tbl_Filter_TD_1046103_output.allocateHost();
    Table tbl_Filter_TD_10577868_output("tbl_Filter_TD_10577868_output", 6100000, 2, "");
    tbl_Filter_TD_10577868_output.allocateHost();
    Table tbl_Filter_TD_11462890_output("tbl_Filter_TD_11462890_output", 6100000, 7, "");
    tbl_Filter_TD_11462890_output.allocateHost();
    Table tbl_Filter_TD_11384181_output("tbl_Filter_TD_11384181_output", 6100000, 2, "");
    tbl_Filter_TD_11384181_output.allocateHost();
    Table tbl_Filter_TD_11582386_output("tbl_Filter_TD_11582386_output", 6100000, 7, "");
    tbl_Filter_TD_11582386_output.allocateHost();
    Table tbl_Filter_TD_11539873_output("tbl_Filter_TD_11539873_output", 6100000, 2, "");
    tbl_Filter_TD_11539873_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11615208_input;
    tbl_SerializeFromObject_TD_11615208_input = Table("catalog_sales", catalog_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11615208_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11615208_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11615208_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_11615208_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_11615208_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_11615208_input.addCol("cs_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_11615208_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_11615208_input.allocateHost();
    tbl_SerializeFromObject_TD_11615208_input.loadHost();
    Table tbl_SerializeFromObject_TD_11576532_input;
    tbl_SerializeFromObject_TD_11576532_input = Table("catalog_returns", catalog_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11576532_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_11576532_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_11576532_input.allocateHost();
    tbl_SerializeFromObject_TD_11576532_input.loadHost();
    Table tbl_SerializeFromObject_TD_12576811_input;
    tbl_SerializeFromObject_TD_12576811_input = Table("store_sales", store_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_12576811_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12576811_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12576811_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12576811_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_12576811_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12576811_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_12576811_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12576811_input.allocateHost();
    tbl_SerializeFromObject_TD_12576811_input.loadHost();
    Table tbl_SerializeFromObject_TD_12240311_input;
    tbl_SerializeFromObject_TD_12240311_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12240311_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_12240311_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_12240311_input.allocateHost();
    tbl_SerializeFromObject_TD_12240311_input.loadHost();
    Table tbl_SerializeFromObject_TD_12168737_input;
    tbl_SerializeFromObject_TD_12168737_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_12168737_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12168737_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_12168737_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_12168737_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_12168737_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_12168737_input.addCol("ws_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_12168737_input.addCol("ws_sales_price", 4);
    tbl_SerializeFromObject_TD_12168737_input.allocateHost();
    tbl_SerializeFromObject_TD_12168737_input.loadHost();
    Table tbl_SerializeFromObject_TD_12243999_input;
    tbl_SerializeFromObject_TD_12243999_input = Table("web_returns", web_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12243999_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_12243999_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_12243999_input.allocateHost();
    tbl_SerializeFromObject_TD_12243999_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_940046_s, tv_r_Filter_11_940046_e;
    gettimeofday(&tv_r_Filter_11_940046_s, 0);
    SW_Filter_TD_11539873(tbl_SerializeFromObject_TD_12243999_input, tbl_Filter_TD_11539873_output);
    gettimeofday(&tv_r_Filter_11_940046_e, 0);

    struct timeval tv_r_Filter_11_827224_s, tv_r_Filter_11_827224_e;
    gettimeofday(&tv_r_Filter_11_827224_s, 0);
    SW_Filter_TD_11582386(tbl_SerializeFromObject_TD_12168737_input, tbl_Filter_TD_11582386_output);
    gettimeofday(&tv_r_Filter_11_827224_e, 0);

    struct timeval tv_r_Filter_11_361451_s, tv_r_Filter_11_361451_e;
    gettimeofday(&tv_r_Filter_11_361451_s, 0);
    SW_Filter_TD_11384181(tbl_SerializeFromObject_TD_12240311_input, tbl_Filter_TD_11384181_output);
    gettimeofday(&tv_r_Filter_11_361451_e, 0);

    struct timeval tv_r_Filter_11_199461_s, tv_r_Filter_11_199461_e;
    gettimeofday(&tv_r_Filter_11_199461_s, 0);
    SW_Filter_TD_11462890(tbl_SerializeFromObject_TD_12576811_input, tbl_Filter_TD_11462890_output);
    gettimeofday(&tv_r_Filter_11_199461_e, 0);

    struct timeval tv_r_Filter_10_407737_s, tv_r_Filter_10_407737_e;
    gettimeofday(&tv_r_Filter_10_407737_s, 0);
    SW_Filter_TD_10577868(tbl_SerializeFromObject_TD_11576532_input, tbl_Filter_TD_10577868_output);
    gettimeofday(&tv_r_Filter_10_407737_e, 0);

    struct timeval tv_r_Filter_10_829063_s, tv_r_Filter_10_829063_e;
    gettimeofday(&tv_r_Filter_10_829063_s, 0);
    SW_Filter_TD_1046103(tbl_SerializeFromObject_TD_11615208_input, tbl_Filter_TD_1046103_output);
    gettimeofday(&tv_r_Filter_10_829063_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_10_598052_s, tv_r_JOIN_LEFTOUTER_10_598052_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_10_598052_s, 0);
    SW_JOIN_LEFTOUTER_TD_10713050(tbl_Filter_TD_11582386_output, tbl_Filter_TD_11539873_output, tbl_JOIN_LEFTOUTER_TD_10713050_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_10_598052_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_10_478114_s, tv_r_JOIN_LEFTOUTER_10_478114_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_10_478114_s, 0);
    SW_JOIN_LEFTOUTER_TD_10711537(tbl_Filter_TD_11462890_output, tbl_Filter_TD_11384181_output, tbl_JOIN_LEFTOUTER_TD_10711537_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_10_478114_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_697050_s, tv_r_JOIN_LEFTOUTER_9_697050_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_697050_s, 0);
    SW_JOIN_LEFTOUTER_TD_9477366(tbl_Filter_TD_1046103_output, tbl_Filter_TD_10577868_output, tbl_JOIN_LEFTOUTER_TD_9477366_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_697050_e, 0);

    struct timeval tv_r_Filter_9_88541_s, tv_r_Filter_9_88541_e;
    gettimeofday(&tv_r_Filter_9_88541_s, 0);
    SW_Filter_TD_9978439(tbl_SerializeFromObject_TD_103060_input, tbl_Filter_TD_9978439_output);
    gettimeofday(&tv_r_Filter_9_88541_e, 0);

    struct timeval tv_r_Filter_9_326054_s, tv_r_Filter_9_326054_e;
    gettimeofday(&tv_r_Filter_9_326054_s, 0);
    SW_Filter_TD_9397482(tbl_JOIN_LEFTOUTER_TD_10713050_output, tbl_Filter_TD_9397482_output);
    gettimeofday(&tv_r_Filter_9_326054_e, 0);

    struct timeval tv_r_Filter_9_173106_s, tv_r_Filter_9_173106_e;
    gettimeofday(&tv_r_Filter_9_173106_s, 0);
    SW_Filter_TD_9743359(tbl_SerializeFromObject_TD_10904468_input, tbl_Filter_TD_9743359_output);
    gettimeofday(&tv_r_Filter_9_173106_e, 0);

    struct timeval tv_r_Filter_9_935716_s, tv_r_Filter_9_935716_e;
    gettimeofday(&tv_r_Filter_9_935716_s, 0);
    SW_Filter_TD_976570(tbl_JOIN_LEFTOUTER_TD_10711537_output, tbl_Filter_TD_976570_output);
    gettimeofday(&tv_r_Filter_9_935716_e, 0);

    struct timeval tv_r_Filter_8_988076_s, tv_r_Filter_8_988076_e;
    gettimeofday(&tv_r_Filter_8_988076_s, 0);
    SW_Filter_TD_8496883(tbl_SerializeFromObject_TD_9179802_input, tbl_Filter_TD_8496883_output);
    gettimeofday(&tv_r_Filter_8_988076_e, 0);

    struct timeval tv_r_Filter_8_465824_s, tv_r_Filter_8_465824_e;
    gettimeofday(&tv_r_Filter_8_465824_s, 0);
    SW_Filter_TD_8336378(tbl_JOIN_LEFTOUTER_TD_9477366_output, tbl_Filter_TD_8336378_output);
    gettimeofday(&tv_r_Filter_8_465824_e, 0);

    struct timeval tv_r_JOIN_INNER_8_828361_s, tv_r_JOIN_INNER_8_828361_e;
    gettimeofday(&tv_r_JOIN_INNER_8_828361_s, 0);
    SW_JOIN_INNER_TD_8757232(tbl_Filter_TD_9397482_output, tbl_Filter_TD_9978439_output, tbl_JOIN_INNER_TD_8757232_output);
    gettimeofday(&tv_r_JOIN_INNER_8_828361_e, 0);

    struct timeval tv_r_JOIN_INNER_8_68288_s, tv_r_JOIN_INNER_8_68288_e;
    gettimeofday(&tv_r_JOIN_INNER_8_68288_s, 0);
    SW_JOIN_INNER_TD_8502276(tbl_Filter_TD_976570_output, tbl_Filter_TD_9743359_output, tbl_JOIN_INNER_TD_8502276_output);
    gettimeofday(&tv_r_JOIN_INNER_8_68288_e, 0);

    struct timeval tv_r_JOIN_INNER_7_617113_s, tv_r_JOIN_INNER_7_617113_e;
    gettimeofday(&tv_r_JOIN_INNER_7_617113_s, 0);
    SW_JOIN_INNER_TD_7400734(tbl_Filter_TD_8336378_output, tbl_Filter_TD_8496883_output, tbl_JOIN_INNER_TD_7400734_output);
    gettimeofday(&tv_r_JOIN_INNER_7_617113_e, 0);

    struct timeval tv_r_Aggregate_7_740860_s, tv_r_Aggregate_7_740860_e;
    gettimeofday(&tv_r_Aggregate_7_740860_s, 0);
    SW_Aggregate_TD_7868102(tbl_JOIN_INNER_TD_8757232_output, tbl_Aggregate_TD_7868102_output);
    gettimeofday(&tv_r_Aggregate_7_740860_e, 0);

    struct timeval tv_r_Aggregate_7_238595_s, tv_r_Aggregate_7_238595_e;
    gettimeofday(&tv_r_Aggregate_7_238595_s, 0);
    SW_Aggregate_TD_7837729(tbl_JOIN_INNER_TD_8502276_output, tbl_Aggregate_TD_7837729_output);
    gettimeofday(&tv_r_Aggregate_7_238595_e, 0);

    struct timeval tv_r_Aggregate_6_519302_s, tv_r_Aggregate_6_519302_e;
    gettimeofday(&tv_r_Aggregate_6_519302_s, 0);
    SW_Aggregate_TD_6420558(tbl_JOIN_INNER_TD_7400734_output, tbl_Aggregate_TD_6420558_output);
    gettimeofday(&tv_r_Aggregate_6_519302_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_6_703312_s, tv_r_JOIN_LEFTOUTER_6_703312_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_6_703312_s, 0);
    SW_JOIN_LEFTOUTER_TD_6331756(tbl_Aggregate_TD_7837729_output, tbl_Aggregate_TD_7868102_output, tbl_JOIN_LEFTOUTER_TD_6331756_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_6_703312_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_5_140269_s, tv_r_JOIN_LEFTOUTER_5_140269_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_140269_s, 0);
    SW_JOIN_LEFTOUTER_TD_5635267(tbl_JOIN_LEFTOUTER_TD_6331756_output, tbl_Aggregate_TD_6420558_output, tbl_JOIN_LEFTOUTER_TD_5635267_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_140269_e, 0);

    struct timeval tv_r_Filter_4_262248_s, tv_r_Filter_4_262248_e;
    gettimeofday(&tv_r_Filter_4_262248_s, 0);
    SW_Filter_TD_4768320(tbl_JOIN_LEFTOUTER_TD_5635267_output, tbl_Filter_TD_4768320_output);
    gettimeofday(&tv_r_Filter_4_262248_e, 0);

    struct timeval tv_r_Project_3_940823_s, tv_r_Project_3_940823_e;
    gettimeofday(&tv_r_Project_3_940823_s, 0);
    SW_Project_TD_344674(tbl_Filter_TD_4768320_output, tbl_Project_TD_344674_output);
    gettimeofday(&tv_r_Project_3_940823_e, 0);

    struct timeval tv_r_Sort_2_798231_s, tv_r_Sort_2_798231_e;
    gettimeofday(&tv_r_Sort_2_798231_s, 0);
    SW_Sort_TD_2283204(tbl_Project_TD_344674_output, tbl_Sort_TD_2283204_output);
    gettimeofday(&tv_r_Sort_2_798231_e, 0);

    struct timeval tv_r_LocalLimit_1_191962_s, tv_r_LocalLimit_1_191962_e;
    gettimeofday(&tv_r_LocalLimit_1_191962_s, 0);
    SW_LocalLimit_TD_1830181(tbl_Sort_TD_2283204_output, tbl_LocalLimit_TD_1830181_output);
    gettimeofday(&tv_r_LocalLimit_1_191962_e, 0);

    struct timeval tv_r_GlobalLimit_0_433745_s, tv_r_GlobalLimit_0_433745_e;
    gettimeofday(&tv_r_GlobalLimit_0_433745_s, 0);
    SW_GlobalLimit_TD_0719824(tbl_LocalLimit_TD_1830181_output, tbl_GlobalLimit_TD_0719824_output);
    gettimeofday(&tv_r_GlobalLimit_0_433745_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_940046_s, &tv_r_Filter_11_940046_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12243999_input: " << tbl_SerializeFromObject_TD_12243999_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_827224_s, &tv_r_Filter_11_827224_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12168737_input: " << tbl_SerializeFromObject_TD_12168737_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_361451_s, &tv_r_Filter_11_361451_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12240311_input: " << tbl_SerializeFromObject_TD_12240311_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_199461_s, &tv_r_Filter_11_199461_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12576811_input: " << tbl_SerializeFromObject_TD_12576811_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_407737_s, &tv_r_Filter_10_407737_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11576532_input: " << tbl_SerializeFromObject_TD_11576532_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_829063_s, &tv_r_Filter_10_829063_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11615208_input: " << tbl_SerializeFromObject_TD_11615208_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_10: " << tvdiff(&tv_r_JOIN_LEFTOUTER_10_598052_s, &tv_r_JOIN_LEFTOUTER_10_598052_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11582386_output: " << tbl_Filter_TD_11582386_output.getNumRow() << " " << "tbl_Filter_TD_11539873_output: " << tbl_Filter_TD_11539873_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_10: " << tvdiff(&tv_r_JOIN_LEFTOUTER_10_478114_s, &tv_r_JOIN_LEFTOUTER_10_478114_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11462890_output: " << tbl_Filter_TD_11462890_output.getNumRow() << " " << "tbl_Filter_TD_11384181_output: " << tbl_Filter_TD_11384181_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_697050_s, &tv_r_JOIN_LEFTOUTER_9_697050_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1046103_output: " << tbl_Filter_TD_1046103_output.getNumRow() << " " << "tbl_Filter_TD_10577868_output: " << tbl_Filter_TD_10577868_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_88541_s, &tv_r_Filter_9_88541_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_103060_input: " << tbl_SerializeFromObject_TD_103060_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_326054_s, &tv_r_Filter_9_326054_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_10713050_output: " << tbl_JOIN_LEFTOUTER_TD_10713050_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_173106_s, &tv_r_Filter_9_173106_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10904468_input: " << tbl_SerializeFromObject_TD_10904468_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_935716_s, &tv_r_Filter_9_935716_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_10711537_output: " << tbl_JOIN_LEFTOUTER_TD_10711537_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_988076_s, &tv_r_Filter_8_988076_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9179802_input: " << tbl_SerializeFromObject_TD_9179802_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_465824_s, &tv_r_Filter_8_465824_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9477366_output: " << tbl_JOIN_LEFTOUTER_TD_9477366_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_828361_s, &tv_r_JOIN_INNER_8_828361_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9397482_output: " << tbl_Filter_TD_9397482_output.getNumRow() << " " << "tbl_Filter_TD_9978439_output: " << tbl_Filter_TD_9978439_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_68288_s, &tv_r_JOIN_INNER_8_68288_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_976570_output: " << tbl_Filter_TD_976570_output.getNumRow() << " " << "tbl_Filter_TD_9743359_output: " << tbl_Filter_TD_9743359_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_617113_s, &tv_r_JOIN_INNER_7_617113_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8336378_output: " << tbl_Filter_TD_8336378_output.getNumRow() << " " << "tbl_Filter_TD_8496883_output: " << tbl_Filter_TD_8496883_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_740860_s, &tv_r_Aggregate_7_740860_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8757232_output: " << tbl_JOIN_INNER_TD_8757232_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_238595_s, &tv_r_Aggregate_7_238595_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8502276_output: " << tbl_JOIN_INNER_TD_8502276_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_519302_s, &tv_r_Aggregate_6_519302_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7400734_output: " << tbl_JOIN_INNER_TD_7400734_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_6: " << tvdiff(&tv_r_JOIN_LEFTOUTER_6_703312_s, &tv_r_JOIN_LEFTOUTER_6_703312_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7837729_output: " << tbl_Aggregate_TD_7837729_output.getNumRow() << " " << "tbl_Aggregate_TD_7868102_output: " << tbl_Aggregate_TD_7868102_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_5: " << tvdiff(&tv_r_JOIN_LEFTOUTER_5_140269_s, &tv_r_JOIN_LEFTOUTER_5_140269_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_6331756_output: " << tbl_JOIN_LEFTOUTER_TD_6331756_output.getNumRow() << " " << "tbl_Aggregate_TD_6420558_output: " << tbl_Aggregate_TD_6420558_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_262248_s, &tv_r_Filter_4_262248_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_5635267_output: " << tbl_JOIN_LEFTOUTER_TD_5635267_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_940823_s, &tv_r_Project_3_940823_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4768320_output: " << tbl_Filter_TD_4768320_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_798231_s, &tv_r_Sort_2_798231_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_344674_output: " << tbl_Project_TD_344674_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_191962_s, &tv_r_LocalLimit_1_191962_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2283204_output: " << tbl_Sort_TD_2283204_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_433745_s, &tv_r_GlobalLimit_0_433745_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1830181_output: " << tbl_LocalLimit_TD_1830181_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 5.979016 * 1000 << "ms" << std::endl; 
    return 0; 
}
