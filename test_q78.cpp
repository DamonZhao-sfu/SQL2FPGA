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
    Table tbl_GlobalLimit_TD_0911_output("tbl_GlobalLimit_TD_0911_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_0911_output.allocateHost();
    Table tbl_LocalLimit_TD_1408_output("tbl_LocalLimit_TD_1408_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1408_output.allocateHost();
    Table tbl_Sort_TD_2372_output("tbl_Sort_TD_2372_output", 6100000, 15, "");
    tbl_Sort_TD_2372_output.allocateHost();
    Table tbl_Project_TD_3298_output("tbl_Project_TD_3298_output", 6100000, 15, "");
    tbl_Project_TD_3298_output.allocateHost();
    Table tbl_Filter_TD_4779_output("tbl_Filter_TD_4779_output", 6100000, 12, "");
    tbl_Filter_TD_4779_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_5298_output("tbl_JOIN_LEFTOUTER_TD_5298_output", 6100000, 12, "");
    tbl_JOIN_LEFTOUTER_TD_5298_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_6900_output("tbl_JOIN_LEFTOUTER_TD_6900_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_6900_output.allocateHost();
    Table tbl_Aggregate_TD_6830_output("tbl_Aggregate_TD_6830_output", 6100000, 6, "");
    tbl_Aggregate_TD_6830_output.allocateHost();
    Table tbl_Aggregate_TD_7725_output("tbl_Aggregate_TD_7725_output", 6100000, 6, "");
    tbl_Aggregate_TD_7725_output.allocateHost();
    Table tbl_Aggregate_TD_7321_output("tbl_Aggregate_TD_7321_output", 6100000, 6, "");
    tbl_Aggregate_TD_7321_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7771_output("tbl_JOIN_INNER_TD_7771_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7771_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8185_output("tbl_JOIN_INNER_TD_8185_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8185_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8219_output("tbl_JOIN_INNER_TD_8219_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8219_output.allocateHost();
    Table tbl_Filter_TD_8793_output("tbl_Filter_TD_8793_output", 6100000, 6, "");
    tbl_Filter_TD_8793_output.allocateHost();
    Table tbl_Filter_TD_834_output("tbl_Filter_TD_834_output", 6100000, 2, "");
    tbl_Filter_TD_834_output.allocateHost();
    Table tbl_Filter_TD_9858_output("tbl_Filter_TD_9858_output", 6100000, 6, "");
    tbl_Filter_TD_9858_output.allocateHost();
    Table tbl_Filter_TD_9780_output("tbl_Filter_TD_9780_output", 6100000, 2, "");
    tbl_Filter_TD_9780_output.allocateHost();
    Table tbl_Filter_TD_9126_output("tbl_Filter_TD_9126_output", 6100000, 6, "");
    tbl_Filter_TD_9126_output.allocateHost();
    Table tbl_Filter_TD_9549_output("tbl_Filter_TD_9549_output", 6100000, 2, "");
    tbl_Filter_TD_9549_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9235_output("tbl_JOIN_LEFTOUTER_TD_9235_output", 6100000, 7, "");
    tbl_JOIN_LEFTOUTER_TD_9235_output.allocateHost();
    Table tbl_SerializeFromObject_TD_92_input;
    tbl_SerializeFromObject_TD_92_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_92_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_92_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_92_input.allocateHost();
    tbl_SerializeFromObject_TD_92_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_10476_output("tbl_JOIN_LEFTOUTER_TD_10476_output", 6100000, 7, "");
    tbl_JOIN_LEFTOUTER_TD_10476_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10346_input;
    tbl_SerializeFromObject_TD_10346_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10346_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10346_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10346_input.allocateHost();
    tbl_SerializeFromObject_TD_10346_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_10249_output("tbl_JOIN_LEFTOUTER_TD_10249_output", 6100000, 7, "");
    tbl_JOIN_LEFTOUTER_TD_10249_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10389_input;
    tbl_SerializeFromObject_TD_10389_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10389_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10389_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10389_input.allocateHost();
    tbl_SerializeFromObject_TD_10389_input.loadHost();
    Table tbl_Filter_TD_1052_output("tbl_Filter_TD_1052_output", 6100000, 7, "");
    tbl_Filter_TD_1052_output.allocateHost();
    Table tbl_Filter_TD_10805_output("tbl_Filter_TD_10805_output", 6100000, 2, "");
    tbl_Filter_TD_10805_output.allocateHost();
    Table tbl_Filter_TD_11866_output("tbl_Filter_TD_11866_output", 6100000, 7, "");
    tbl_Filter_TD_11866_output.allocateHost();
    Table tbl_Filter_TD_11202_output("tbl_Filter_TD_11202_output", 6100000, 2, "");
    tbl_Filter_TD_11202_output.allocateHost();
    Table tbl_Filter_TD_11953_output("tbl_Filter_TD_11953_output", 6100000, 7, "");
    tbl_Filter_TD_11953_output.allocateHost();
    Table tbl_Filter_TD_11121_output("tbl_Filter_TD_11121_output", 6100000, 2, "");
    tbl_Filter_TD_11121_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11586_input;
    tbl_SerializeFromObject_TD_11586_input = Table("catalog_sales", catalog_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_11586_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11586_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11586_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_11586_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_11586_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_11586_input.addCol("cs_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_11586_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_11586_input.allocateHost();
    tbl_SerializeFromObject_TD_11586_input.loadHost();
    Table tbl_SerializeFromObject_TD_11987_input;
    tbl_SerializeFromObject_TD_11987_input = Table("catalog_returns", catalog_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11987_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_11987_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_11987_input.allocateHost();
    tbl_SerializeFromObject_TD_11987_input.loadHost();
    Table tbl_SerializeFromObject_TD_12361_input;
    tbl_SerializeFromObject_TD_12361_input = Table("store_sales", store_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_12361_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12361_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12361_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12361_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_12361_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12361_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_12361_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12361_input.allocateHost();
    tbl_SerializeFromObject_TD_12361_input.loadHost();
    Table tbl_SerializeFromObject_TD_12730_input;
    tbl_SerializeFromObject_TD_12730_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12730_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_12730_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_12730_input.allocateHost();
    tbl_SerializeFromObject_TD_12730_input.loadHost();
    Table tbl_SerializeFromObject_TD_12284_input;
    tbl_SerializeFromObject_TD_12284_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_12284_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12284_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_12284_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_12284_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_12284_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_12284_input.addCol("ws_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_12284_input.addCol("ws_sales_price", 4);
    tbl_SerializeFromObject_TD_12284_input.allocateHost();
    tbl_SerializeFromObject_TD_12284_input.loadHost();
    Table tbl_SerializeFromObject_TD_12866_input;
    tbl_SerializeFromObject_TD_12866_input = Table("web_returns", web_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12866_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_12866_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_12866_input.allocateHost();
    tbl_SerializeFromObject_TD_12866_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_34323_s, tv_r_Filter_11_34323_e;
    gettimeofday(&tv_r_Filter_11_34323_s, 0);
    SW_Filter_TD_11121(tbl_SerializeFromObject_TD_12866_input, tbl_Filter_TD_11121_output);
    gettimeofday(&tv_r_Filter_11_34323_e, 0);

    struct timeval tv_r_Filter_11_748493_s, tv_r_Filter_11_748493_e;
    gettimeofday(&tv_r_Filter_11_748493_s, 0);
    SW_Filter_TD_11953(tbl_SerializeFromObject_TD_12284_input, tbl_Filter_TD_11953_output);
    gettimeofday(&tv_r_Filter_11_748493_e, 0);

    struct timeval tv_r_Filter_11_166187_s, tv_r_Filter_11_166187_e;
    gettimeofday(&tv_r_Filter_11_166187_s, 0);
    SW_Filter_TD_11202(tbl_SerializeFromObject_TD_12730_input, tbl_Filter_TD_11202_output);
    gettimeofday(&tv_r_Filter_11_166187_e, 0);

    struct timeval tv_r_Filter_11_462786_s, tv_r_Filter_11_462786_e;
    gettimeofday(&tv_r_Filter_11_462786_s, 0);
    SW_Filter_TD_11866(tbl_SerializeFromObject_TD_12361_input, tbl_Filter_TD_11866_output);
    gettimeofday(&tv_r_Filter_11_462786_e, 0);

    struct timeval tv_r_Filter_10_604045_s, tv_r_Filter_10_604045_e;
    gettimeofday(&tv_r_Filter_10_604045_s, 0);
    SW_Filter_TD_10805(tbl_SerializeFromObject_TD_11987_input, tbl_Filter_TD_10805_output);
    gettimeofday(&tv_r_Filter_10_604045_e, 0);

    struct timeval tv_r_Filter_10_166872_s, tv_r_Filter_10_166872_e;
    gettimeofday(&tv_r_Filter_10_166872_s, 0);
    SW_Filter_TD_1052(tbl_SerializeFromObject_TD_11586_input, tbl_Filter_TD_1052_output);
    gettimeofday(&tv_r_Filter_10_166872_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_10_523007_s, tv_r_JOIN_LEFTOUTER_10_523007_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_10_523007_s, 0);
    SW_JOIN_LEFTOUTER_TD_10249(tbl_Filter_TD_11953_output, tbl_Filter_TD_11121_output, tbl_JOIN_LEFTOUTER_TD_10249_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_10_523007_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_10_577480_s, tv_r_JOIN_LEFTOUTER_10_577480_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_10_577480_s, 0);
    SW_JOIN_LEFTOUTER_TD_10476(tbl_Filter_TD_11866_output, tbl_Filter_TD_11202_output, tbl_JOIN_LEFTOUTER_TD_10476_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_10_577480_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_853116_s, tv_r_JOIN_LEFTOUTER_9_853116_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_853116_s, 0);
    SW_JOIN_LEFTOUTER_TD_9235(tbl_Filter_TD_1052_output, tbl_Filter_TD_10805_output, tbl_JOIN_LEFTOUTER_TD_9235_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_853116_e, 0);

    struct timeval tv_r_Filter_9_394704_s, tv_r_Filter_9_394704_e;
    gettimeofday(&tv_r_Filter_9_394704_s, 0);
    SW_Filter_TD_9549(tbl_SerializeFromObject_TD_10389_input, tbl_Filter_TD_9549_output);
    gettimeofday(&tv_r_Filter_9_394704_e, 0);

    struct timeval tv_r_Filter_9_862551_s, tv_r_Filter_9_862551_e;
    gettimeofday(&tv_r_Filter_9_862551_s, 0);
    SW_Filter_TD_9126(tbl_JOIN_LEFTOUTER_TD_10249_output, tbl_Filter_TD_9126_output);
    gettimeofday(&tv_r_Filter_9_862551_e, 0);

    struct timeval tv_r_Filter_9_137272_s, tv_r_Filter_9_137272_e;
    gettimeofday(&tv_r_Filter_9_137272_s, 0);
    SW_Filter_TD_9780(tbl_SerializeFromObject_TD_10346_input, tbl_Filter_TD_9780_output);
    gettimeofday(&tv_r_Filter_9_137272_e, 0);

    struct timeval tv_r_Filter_9_629619_s, tv_r_Filter_9_629619_e;
    gettimeofday(&tv_r_Filter_9_629619_s, 0);
    SW_Filter_TD_9858(tbl_JOIN_LEFTOUTER_TD_10476_output, tbl_Filter_TD_9858_output);
    gettimeofday(&tv_r_Filter_9_629619_e, 0);

    struct timeval tv_r_Filter_8_49655_s, tv_r_Filter_8_49655_e;
    gettimeofday(&tv_r_Filter_8_49655_s, 0);
    SW_Filter_TD_834(tbl_SerializeFromObject_TD_92_input, tbl_Filter_TD_834_output);
    gettimeofday(&tv_r_Filter_8_49655_e, 0);

    struct timeval tv_r_Filter_8_282638_s, tv_r_Filter_8_282638_e;
    gettimeofday(&tv_r_Filter_8_282638_s, 0);
    SW_Filter_TD_8793(tbl_JOIN_LEFTOUTER_TD_9235_output, tbl_Filter_TD_8793_output);
    gettimeofday(&tv_r_Filter_8_282638_e, 0);

    struct timeval tv_r_JOIN_INNER_8_439339_s, tv_r_JOIN_INNER_8_439339_e;
    gettimeofday(&tv_r_JOIN_INNER_8_439339_s, 0);
    SW_JOIN_INNER_TD_8219(tbl_Filter_TD_9126_output, tbl_Filter_TD_9549_output, tbl_JOIN_INNER_TD_8219_output);
    gettimeofday(&tv_r_JOIN_INNER_8_439339_e, 0);

    struct timeval tv_r_JOIN_INNER_8_961481_s, tv_r_JOIN_INNER_8_961481_e;
    gettimeofday(&tv_r_JOIN_INNER_8_961481_s, 0);
    SW_JOIN_INNER_TD_8185(tbl_Filter_TD_9858_output, tbl_Filter_TD_9780_output, tbl_JOIN_INNER_TD_8185_output);
    gettimeofday(&tv_r_JOIN_INNER_8_961481_e, 0);

    struct timeval tv_r_JOIN_INNER_7_886207_s, tv_r_JOIN_INNER_7_886207_e;
    gettimeofday(&tv_r_JOIN_INNER_7_886207_s, 0);
    SW_JOIN_INNER_TD_7771(tbl_Filter_TD_8793_output, tbl_Filter_TD_834_output, tbl_JOIN_INNER_TD_7771_output);
    gettimeofday(&tv_r_JOIN_INNER_7_886207_e, 0);

    struct timeval tv_r_Aggregate_7_938091_s, tv_r_Aggregate_7_938091_e;
    gettimeofday(&tv_r_Aggregate_7_938091_s, 0);
    SW_Aggregate_TD_7321(tbl_JOIN_INNER_TD_8219_output, tbl_Aggregate_TD_7321_output);
    gettimeofday(&tv_r_Aggregate_7_938091_e, 0);

    struct timeval tv_r_Aggregate_7_902756_s, tv_r_Aggregate_7_902756_e;
    gettimeofday(&tv_r_Aggregate_7_902756_s, 0);
    SW_Aggregate_TD_7725(tbl_JOIN_INNER_TD_8185_output, tbl_Aggregate_TD_7725_output);
    gettimeofday(&tv_r_Aggregate_7_902756_e, 0);

    struct timeval tv_r_Aggregate_6_627597_s, tv_r_Aggregate_6_627597_e;
    gettimeofday(&tv_r_Aggregate_6_627597_s, 0);
    SW_Aggregate_TD_6830(tbl_JOIN_INNER_TD_7771_output, tbl_Aggregate_TD_6830_output);
    gettimeofday(&tv_r_Aggregate_6_627597_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_6_79937_s, tv_r_JOIN_LEFTOUTER_6_79937_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_6_79937_s, 0);
    SW_JOIN_LEFTOUTER_TD_6900(tbl_Aggregate_TD_7725_output, tbl_Aggregate_TD_7321_output, tbl_JOIN_LEFTOUTER_TD_6900_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_6_79937_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_5_402790_s, tv_r_JOIN_LEFTOUTER_5_402790_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_402790_s, 0);
    SW_JOIN_LEFTOUTER_TD_5298(tbl_JOIN_LEFTOUTER_TD_6900_output, tbl_Aggregate_TD_6830_output, tbl_JOIN_LEFTOUTER_TD_5298_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_402790_e, 0);

    struct timeval tv_r_Filter_4_213514_s, tv_r_Filter_4_213514_e;
    gettimeofday(&tv_r_Filter_4_213514_s, 0);
    SW_Filter_TD_4779(tbl_JOIN_LEFTOUTER_TD_5298_output, tbl_Filter_TD_4779_output);
    gettimeofday(&tv_r_Filter_4_213514_e, 0);

    struct timeval tv_r_Project_3_498086_s, tv_r_Project_3_498086_e;
    gettimeofday(&tv_r_Project_3_498086_s, 0);
    SW_Project_TD_3298(tbl_Filter_TD_4779_output, tbl_Project_TD_3298_output);
    gettimeofday(&tv_r_Project_3_498086_e, 0);

    struct timeval tv_r_Sort_2_593607_s, tv_r_Sort_2_593607_e;
    gettimeofday(&tv_r_Sort_2_593607_s, 0);
    SW_Sort_TD_2372(tbl_Project_TD_3298_output, tbl_Sort_TD_2372_output);
    gettimeofday(&tv_r_Sort_2_593607_e, 0);

    struct timeval tv_r_LocalLimit_1_392539_s, tv_r_LocalLimit_1_392539_e;
    gettimeofday(&tv_r_LocalLimit_1_392539_s, 0);
    SW_LocalLimit_TD_1408(tbl_Sort_TD_2372_output, tbl_LocalLimit_TD_1408_output);
    gettimeofday(&tv_r_LocalLimit_1_392539_e, 0);

    struct timeval tv_r_GlobalLimit_0_495440_s, tv_r_GlobalLimit_0_495440_e;
    gettimeofday(&tv_r_GlobalLimit_0_495440_s, 0);
    SW_GlobalLimit_TD_0911(tbl_LocalLimit_TD_1408_output, tbl_GlobalLimit_TD_0911_output);
    gettimeofday(&tv_r_GlobalLimit_0_495440_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_34323_s, &tv_r_Filter_11_34323_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12866_input: " << tbl_SerializeFromObject_TD_12866_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_748493_s, &tv_r_Filter_11_748493_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12284_input: " << tbl_SerializeFromObject_TD_12284_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_166187_s, &tv_r_Filter_11_166187_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12730_input: " << tbl_SerializeFromObject_TD_12730_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_462786_s, &tv_r_Filter_11_462786_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12361_input: " << tbl_SerializeFromObject_TD_12361_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_604045_s, &tv_r_Filter_10_604045_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11987_input: " << tbl_SerializeFromObject_TD_11987_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_166872_s, &tv_r_Filter_10_166872_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11586_input: " << tbl_SerializeFromObject_TD_11586_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_10: " << tvdiff(&tv_r_JOIN_LEFTOUTER_10_523007_s, &tv_r_JOIN_LEFTOUTER_10_523007_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11953_output: " << tbl_Filter_TD_11953_output.getNumRow() << " " << "tbl_Filter_TD_11121_output: " << tbl_Filter_TD_11121_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_10: " << tvdiff(&tv_r_JOIN_LEFTOUTER_10_577480_s, &tv_r_JOIN_LEFTOUTER_10_577480_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11866_output: " << tbl_Filter_TD_11866_output.getNumRow() << " " << "tbl_Filter_TD_11202_output: " << tbl_Filter_TD_11202_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_853116_s, &tv_r_JOIN_LEFTOUTER_9_853116_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1052_output: " << tbl_Filter_TD_1052_output.getNumRow() << " " << "tbl_Filter_TD_10805_output: " << tbl_Filter_TD_10805_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_394704_s, &tv_r_Filter_9_394704_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10389_input: " << tbl_SerializeFromObject_TD_10389_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_862551_s, &tv_r_Filter_9_862551_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_10249_output: " << tbl_JOIN_LEFTOUTER_TD_10249_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_137272_s, &tv_r_Filter_9_137272_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10346_input: " << tbl_SerializeFromObject_TD_10346_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_629619_s, &tv_r_Filter_9_629619_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_10476_output: " << tbl_JOIN_LEFTOUTER_TD_10476_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_49655_s, &tv_r_Filter_8_49655_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_92_input: " << tbl_SerializeFromObject_TD_92_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_282638_s, &tv_r_Filter_8_282638_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9235_output: " << tbl_JOIN_LEFTOUTER_TD_9235_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_439339_s, &tv_r_JOIN_INNER_8_439339_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9126_output: " << tbl_Filter_TD_9126_output.getNumRow() << " " << "tbl_Filter_TD_9549_output: " << tbl_Filter_TD_9549_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_961481_s, &tv_r_JOIN_INNER_8_961481_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9858_output: " << tbl_Filter_TD_9858_output.getNumRow() << " " << "tbl_Filter_TD_9780_output: " << tbl_Filter_TD_9780_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_886207_s, &tv_r_JOIN_INNER_7_886207_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8793_output: " << tbl_Filter_TD_8793_output.getNumRow() << " " << "tbl_Filter_TD_834_output: " << tbl_Filter_TD_834_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_938091_s, &tv_r_Aggregate_7_938091_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8219_output: " << tbl_JOIN_INNER_TD_8219_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_902756_s, &tv_r_Aggregate_7_902756_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8185_output: " << tbl_JOIN_INNER_TD_8185_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_627597_s, &tv_r_Aggregate_6_627597_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7771_output: " << tbl_JOIN_INNER_TD_7771_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_6: " << tvdiff(&tv_r_JOIN_LEFTOUTER_6_79937_s, &tv_r_JOIN_LEFTOUTER_6_79937_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7725_output: " << tbl_Aggregate_TD_7725_output.getNumRow() << " " << "tbl_Aggregate_TD_7321_output: " << tbl_Aggregate_TD_7321_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_5: " << tvdiff(&tv_r_JOIN_LEFTOUTER_5_402790_s, &tv_r_JOIN_LEFTOUTER_5_402790_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_6900_output: " << tbl_JOIN_LEFTOUTER_TD_6900_output.getNumRow() << " " << "tbl_Aggregate_TD_6830_output: " << tbl_Aggregate_TD_6830_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_213514_s, &tv_r_Filter_4_213514_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_5298_output: " << tbl_JOIN_LEFTOUTER_TD_5298_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_498086_s, &tv_r_Project_3_498086_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4779_output: " << tbl_Filter_TD_4779_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_593607_s, &tv_r_Sort_2_593607_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3298_output: " << tbl_Project_TD_3298_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_392539_s, &tv_r_LocalLimit_1_392539_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2372_output: " << tbl_Sort_TD_2372_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_495440_s, &tv_r_GlobalLimit_0_495440_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1408_output: " << tbl_LocalLimit_TD_1408_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 5.268853 * 1000 << "ms" << std::endl; 
    return 0; 
}
