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

#include "cfgFunc_q49.hpp" 
#include "q49.hpp" 

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
    std::cout << "NOTE:running query #49\n."; 
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
    Table tbl_GlobalLimit_TD_0684_output("tbl_GlobalLimit_TD_0684_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0684_output.allocateHost();
    Table tbl_LocalLimit_TD_1214_output("tbl_LocalLimit_TD_1214_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1214_output.allocateHost();
    Table tbl_Sort_TD_2398_output("tbl_Sort_TD_2398_output", 6100000, 5, "");
    tbl_Sort_TD_2398_output.allocateHost();
    Table tbl_Aggregate_TD_341_output("tbl_Aggregate_TD_341_output", 6100000, 5, "");
    tbl_Aggregate_TD_341_output.allocateHost();
    Table tbl_Union_TD_4454_output("tbl_Union_TD_4454_output", 6100000, 5, "");
    tbl_Union_TD_4454_output.allocateHost();
    Table tbl_Project_TD_5159_output("tbl_Project_TD_5159_output", 6100000, 5, "");
    tbl_Project_TD_5159_output.allocateHost();
    Table tbl_Project_TD_5732_output("tbl_Project_TD_5732_output", 6100000, 5, "");
    tbl_Project_TD_5732_output.allocateHost();
    Table tbl_Project_TD_5759_output("tbl_Project_TD_5759_output", 6100000, 5, "");
    tbl_Project_TD_5759_output.allocateHost();
    Table tbl_Filter_TD_6462_output("tbl_Filter_TD_6462_output", 6100000, 4, "");
    tbl_Filter_TD_6462_output.allocateHost();
    Table tbl_Filter_TD_6417_output("tbl_Filter_TD_6417_output", 6100000, 4, "");
    tbl_Filter_TD_6417_output.allocateHost();
    Table tbl_Filter_TD_6245_output("tbl_Filter_TD_6245_output", 6100000, 4, "");
    tbl_Filter_TD_6245_output.allocateHost();
    Table tbl_Window_TD_766_output("tbl_Window_TD_766_output", 6100000, 5, "");
    tbl_Window_TD_766_output.allocateHost();
    Table tbl_Window_TD_7154_output("tbl_Window_TD_7154_output", 6100000, 5, "");
    tbl_Window_TD_7154_output.allocateHost();
    Table tbl_Window_TD_7648_output("tbl_Window_TD_7648_output", 6100000, 5, "");
    tbl_Window_TD_7648_output.allocateHost();
    Table tbl_Window_TD_8212_output("tbl_Window_TD_8212_output", 6100000, 4, "");
    tbl_Window_TD_8212_output.allocateHost();
    Table tbl_Window_TD_8261_output("tbl_Window_TD_8261_output", 6100000, 4, "");
    tbl_Window_TD_8261_output.allocateHost();
    Table tbl_Window_TD_856_output("tbl_Window_TD_856_output", 6100000, 4, "");
    tbl_Window_TD_856_output.allocateHost();
    Table tbl_Aggregate_TD_9683_output("tbl_Aggregate_TD_9683_output", 6100000, 3, "");
    tbl_Aggregate_TD_9683_output.allocateHost();
    Table tbl_Aggregate_TD_9450_output("tbl_Aggregate_TD_9450_output", 6100000, 3, "");
    tbl_Aggregate_TD_9450_output.allocateHost();
    Table tbl_Aggregate_TD_9342_output("tbl_Aggregate_TD_9342_output", 6100000, 3, "");
    tbl_Aggregate_TD_9342_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1061_output("tbl_JOIN_INNER_TD_1061_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_1061_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10544_output("tbl_JOIN_INNER_TD_10544_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10544_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1072_output("tbl_JOIN_INNER_TD_1072_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_1072_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11771_output("tbl_JOIN_INNER_TD_11771_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11771_output.allocateHost();
    Table tbl_Filter_TD_11522_output("tbl_Filter_TD_11522_output", 6100000, 1, "");
    tbl_Filter_TD_11522_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11522_output("tbl_JOIN_INNER_TD_11522_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11522_output.allocateHost();
    Table tbl_Filter_TD_116_output("tbl_Filter_TD_116_output", 6100000, 1, "");
    tbl_Filter_TD_116_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11285_output("tbl_JOIN_INNER_TD_11285_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11285_output.allocateHost();
    Table tbl_Filter_TD_11239_output("tbl_Filter_TD_11239_output", 6100000, 1, "");
    tbl_Filter_TD_11239_output.allocateHost();
    Table tbl_Filter_TD_12142_output("tbl_Filter_TD_12142_output", 6100000, 5, "");
    tbl_Filter_TD_12142_output.allocateHost();
    Table tbl_Filter_TD_12740_output("tbl_Filter_TD_12740_output", 6100000, 4, "");
    tbl_Filter_TD_12740_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12588_input;
    tbl_SerializeFromObject_TD_12588_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12588_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12588_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12588_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12588_input.allocateHost();
    tbl_SerializeFromObject_TD_12588_input.loadHost();
    Table tbl_Filter_TD_1271_output("tbl_Filter_TD_1271_output", 6100000, 5, "");
    tbl_Filter_TD_1271_output.allocateHost();
    Table tbl_Filter_TD_12657_output("tbl_Filter_TD_12657_output", 6100000, 4, "");
    tbl_Filter_TD_12657_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12178_input;
    tbl_SerializeFromObject_TD_12178_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12178_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12178_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12178_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12178_input.allocateHost();
    tbl_SerializeFromObject_TD_12178_input.loadHost();
    Table tbl_Filter_TD_1272_output("tbl_Filter_TD_1272_output", 6100000, 5, "");
    tbl_Filter_TD_1272_output.allocateHost();
    Table tbl_Filter_TD_12507_output("tbl_Filter_TD_12507_output", 6100000, 4, "");
    tbl_Filter_TD_12507_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12598_input;
    tbl_SerializeFromObject_TD_12598_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12598_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12598_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12598_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12598_input.allocateHost();
    tbl_SerializeFromObject_TD_12598_input.loadHost();
    Table tbl_SerializeFromObject_TD_1344_input;
    tbl_SerializeFromObject_TD_1344_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_1344_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1344_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_1344_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_1344_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_1344_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_1344_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_1344_input.allocateHost();
    tbl_SerializeFromObject_TD_1344_input.loadHost();
    Table tbl_SerializeFromObject_TD_13135_input;
    tbl_SerializeFromObject_TD_13135_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13135_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_13135_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_13135_input.addCol("wr_return_quantity", 4);
    tbl_SerializeFromObject_TD_13135_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_13135_input.allocateHost();
    tbl_SerializeFromObject_TD_13135_input.loadHost();
    Table tbl_SerializeFromObject_TD_13961_input;
    tbl_SerializeFromObject_TD_13961_input = Table("catalog_sales", catalog_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13961_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13961_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13961_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_13961_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13961_input.addCol("cs_net_paid", 4);
    tbl_SerializeFromObject_TD_13961_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_13961_input.allocateHost();
    tbl_SerializeFromObject_TD_13961_input.loadHost();
    Table tbl_SerializeFromObject_TD_1370_input;
    tbl_SerializeFromObject_TD_1370_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1370_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_1370_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_1370_input.addCol("cr_return_quantity", 4);
    tbl_SerializeFromObject_TD_1370_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_1370_input.allocateHost();
    tbl_SerializeFromObject_TD_1370_input.loadHost();
    Table tbl_SerializeFromObject_TD_13738_input;
    tbl_SerializeFromObject_TD_13738_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13738_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13738_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13738_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_13738_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13738_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_13738_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_13738_input.allocateHost();
    tbl_SerializeFromObject_TD_13738_input.loadHost();
    Table tbl_SerializeFromObject_TD_13613_input;
    tbl_SerializeFromObject_TD_13613_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13613_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_13613_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_13613_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_13613_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_13613_input.allocateHost();
    tbl_SerializeFromObject_TD_13613_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_266524_s, tv_r_Filter_12_266524_e;
    gettimeofday(&tv_r_Filter_12_266524_s, 0);
    SW_Filter_TD_12507(tbl_SerializeFromObject_TD_13613_input, tbl_Filter_TD_12507_output);
    gettimeofday(&tv_r_Filter_12_266524_e, 0);

    struct timeval tv_r_Filter_12_611375_s, tv_r_Filter_12_611375_e;
    gettimeofday(&tv_r_Filter_12_611375_s, 0);
    SW_Filter_TD_1272(tbl_SerializeFromObject_TD_13738_input, tbl_Filter_TD_1272_output);
    gettimeofday(&tv_r_Filter_12_611375_e, 0);

    struct timeval tv_r_Filter_12_827559_s, tv_r_Filter_12_827559_e;
    gettimeofday(&tv_r_Filter_12_827559_s, 0);
    SW_Filter_TD_12657(tbl_SerializeFromObject_TD_1370_input, tbl_Filter_TD_12657_output);
    gettimeofday(&tv_r_Filter_12_827559_e, 0);

    struct timeval tv_r_Filter_12_377660_s, tv_r_Filter_12_377660_e;
    gettimeofday(&tv_r_Filter_12_377660_s, 0);
    SW_Filter_TD_1271(tbl_SerializeFromObject_TD_13961_input, tbl_Filter_TD_1271_output);
    gettimeofday(&tv_r_Filter_12_377660_e, 0);

    struct timeval tv_r_Filter_12_304800_s, tv_r_Filter_12_304800_e;
    gettimeofday(&tv_r_Filter_12_304800_s, 0);
    SW_Filter_TD_12740(tbl_SerializeFromObject_TD_13135_input, tbl_Filter_TD_12740_output);
    gettimeofday(&tv_r_Filter_12_304800_e, 0);

    struct timeval tv_r_Filter_12_770744_s, tv_r_Filter_12_770744_e;
    gettimeofday(&tv_r_Filter_12_770744_s, 0);
    SW_Filter_TD_12142(tbl_SerializeFromObject_TD_1344_input, tbl_Filter_TD_12142_output);
    gettimeofday(&tv_r_Filter_12_770744_e, 0);

    struct timeval tv_r_Filter_11_254690_s, tv_r_Filter_11_254690_e;
    gettimeofday(&tv_r_Filter_11_254690_s, 0);
    SW_Filter_TD_11239(tbl_SerializeFromObject_TD_12598_input, tbl_Filter_TD_11239_output);
    gettimeofday(&tv_r_Filter_11_254690_e, 0);

    struct timeval tv_r_JOIN_INNER_11_464486_s, tv_r_JOIN_INNER_11_464486_e;
    gettimeofday(&tv_r_JOIN_INNER_11_464486_s, 0);
    SW_JOIN_INNER_TD_11285(tbl_Filter_TD_1272_output, tbl_Filter_TD_12507_output, tbl_JOIN_INNER_TD_11285_output);
    gettimeofday(&tv_r_JOIN_INNER_11_464486_e, 0);

    struct timeval tv_r_Filter_11_757911_s, tv_r_Filter_11_757911_e;
    gettimeofday(&tv_r_Filter_11_757911_s, 0);
    SW_Filter_TD_116(tbl_SerializeFromObject_TD_12178_input, tbl_Filter_TD_116_output);
    gettimeofday(&tv_r_Filter_11_757911_e, 0);

    struct timeval tv_r_JOIN_INNER_11_622350_s, tv_r_JOIN_INNER_11_622350_e;
    gettimeofday(&tv_r_JOIN_INNER_11_622350_s, 0);
    SW_JOIN_INNER_TD_11522(tbl_Filter_TD_1271_output, tbl_Filter_TD_12657_output, tbl_JOIN_INNER_TD_11522_output);
    gettimeofday(&tv_r_JOIN_INNER_11_622350_e, 0);

    struct timeval tv_r_Filter_11_153188_s, tv_r_Filter_11_153188_e;
    gettimeofday(&tv_r_Filter_11_153188_s, 0);
    SW_Filter_TD_11522(tbl_SerializeFromObject_TD_12588_input, tbl_Filter_TD_11522_output);
    gettimeofday(&tv_r_Filter_11_153188_e, 0);

    struct timeval tv_r_JOIN_INNER_11_369759_s, tv_r_JOIN_INNER_11_369759_e;
    gettimeofday(&tv_r_JOIN_INNER_11_369759_s, 0);
    SW_JOIN_INNER_TD_11771(tbl_Filter_TD_12142_output, tbl_Filter_TD_12740_output, tbl_JOIN_INNER_TD_11771_output);
    gettimeofday(&tv_r_JOIN_INNER_11_369759_e, 0);

    struct timeval tv_r_JOIN_INNER_10_202957_s, tv_r_JOIN_INNER_10_202957_e;
    gettimeofday(&tv_r_JOIN_INNER_10_202957_s, 0);
    SW_JOIN_INNER_TD_1072(tbl_JOIN_INNER_TD_11285_output, tbl_Filter_TD_11239_output, tbl_JOIN_INNER_TD_1072_output);
    gettimeofday(&tv_r_JOIN_INNER_10_202957_e, 0);

    struct timeval tv_r_JOIN_INNER_10_120787_s, tv_r_JOIN_INNER_10_120787_e;
    gettimeofday(&tv_r_JOIN_INNER_10_120787_s, 0);
    SW_JOIN_INNER_TD_10544(tbl_JOIN_INNER_TD_11522_output, tbl_Filter_TD_116_output, tbl_JOIN_INNER_TD_10544_output);
    gettimeofday(&tv_r_JOIN_INNER_10_120787_e, 0);

    struct timeval tv_r_JOIN_INNER_10_113613_s, tv_r_JOIN_INNER_10_113613_e;
    gettimeofday(&tv_r_JOIN_INNER_10_113613_s, 0);
    SW_JOIN_INNER_TD_1061(tbl_JOIN_INNER_TD_11771_output, tbl_Filter_TD_11522_output, tbl_JOIN_INNER_TD_1061_output);
    gettimeofday(&tv_r_JOIN_INNER_10_113613_e, 0);

    struct timeval tv_r_Aggregate_9_199679_s, tv_r_Aggregate_9_199679_e;
    gettimeofday(&tv_r_Aggregate_9_199679_s, 0);
    SW_Aggregate_TD_9342(tbl_JOIN_INNER_TD_1072_output, tbl_Aggregate_TD_9342_output);
    gettimeofday(&tv_r_Aggregate_9_199679_e, 0);

    struct timeval tv_r_Aggregate_9_160327_s, tv_r_Aggregate_9_160327_e;
    gettimeofday(&tv_r_Aggregate_9_160327_s, 0);
    SW_Aggregate_TD_9450(tbl_JOIN_INNER_TD_10544_output, tbl_Aggregate_TD_9450_output);
    gettimeofday(&tv_r_Aggregate_9_160327_e, 0);

    struct timeval tv_r_Aggregate_9_110389_s, tv_r_Aggregate_9_110389_e;
    gettimeofday(&tv_r_Aggregate_9_110389_s, 0);
    SW_Aggregate_TD_9683(tbl_JOIN_INNER_TD_1061_output, tbl_Aggregate_TD_9683_output);
    gettimeofday(&tv_r_Aggregate_9_110389_e, 0);

    struct timeval tv_r_Window_8_839005_s, tv_r_Window_8_839005_e;
    gettimeofday(&tv_r_Window_8_839005_s, 0);
    SW_Window_TD_856(tbl_Aggregate_TD_9342_output, tbl_Window_TD_856_output);
    gettimeofday(&tv_r_Window_8_839005_e, 0);

    struct timeval tv_r_Window_8_676508_s, tv_r_Window_8_676508_e;
    gettimeofday(&tv_r_Window_8_676508_s, 0);
    SW_Window_TD_8261(tbl_Aggregate_TD_9450_output, tbl_Window_TD_8261_output);
    gettimeofday(&tv_r_Window_8_676508_e, 0);

    struct timeval tv_r_Window_8_659390_s, tv_r_Window_8_659390_e;
    gettimeofday(&tv_r_Window_8_659390_s, 0);
    SW_Window_TD_8212(tbl_Aggregate_TD_9683_output, tbl_Window_TD_8212_output);
    gettimeofday(&tv_r_Window_8_659390_e, 0);

    struct timeval tv_r_Window_7_317596_s, tv_r_Window_7_317596_e;
    gettimeofday(&tv_r_Window_7_317596_s, 0);
    SW_Window_TD_7648(tbl_Window_TD_856_output, tbl_Window_TD_7648_output);
    gettimeofday(&tv_r_Window_7_317596_e, 0);

    struct timeval tv_r_Window_7_691907_s, tv_r_Window_7_691907_e;
    gettimeofday(&tv_r_Window_7_691907_s, 0);
    SW_Window_TD_7154(tbl_Window_TD_8261_output, tbl_Window_TD_7154_output);
    gettimeofday(&tv_r_Window_7_691907_e, 0);

    struct timeval tv_r_Window_7_547277_s, tv_r_Window_7_547277_e;
    gettimeofday(&tv_r_Window_7_547277_s, 0);
    SW_Window_TD_766(tbl_Window_TD_8212_output, tbl_Window_TD_766_output);
    gettimeofday(&tv_r_Window_7_547277_e, 0);

    struct timeval tv_r_Filter_6_837815_s, tv_r_Filter_6_837815_e;
    gettimeofday(&tv_r_Filter_6_837815_s, 0);
    SW_Filter_TD_6245(tbl_Window_TD_7648_output, tbl_Filter_TD_6245_output);
    gettimeofday(&tv_r_Filter_6_837815_e, 0);

    struct timeval tv_r_Filter_6_379837_s, tv_r_Filter_6_379837_e;
    gettimeofday(&tv_r_Filter_6_379837_s, 0);
    SW_Filter_TD_6417(tbl_Window_TD_7154_output, tbl_Filter_TD_6417_output);
    gettimeofday(&tv_r_Filter_6_379837_e, 0);

    struct timeval tv_r_Filter_6_431236_s, tv_r_Filter_6_431236_e;
    gettimeofday(&tv_r_Filter_6_431236_s, 0);
    SW_Filter_TD_6462(tbl_Window_TD_766_output, tbl_Filter_TD_6462_output);
    gettimeofday(&tv_r_Filter_6_431236_e, 0);

    struct timeval tv_r_Project_5_300361_s, tv_r_Project_5_300361_e;
    gettimeofday(&tv_r_Project_5_300361_s, 0);
    SW_Project_TD_5759(tbl_Filter_TD_6245_output, tbl_Project_TD_5759_output);
    gettimeofday(&tv_r_Project_5_300361_e, 0);

    struct timeval tv_r_Project_5_395840_s, tv_r_Project_5_395840_e;
    gettimeofday(&tv_r_Project_5_395840_s, 0);
    SW_Project_TD_5732(tbl_Filter_TD_6417_output, tbl_Project_TD_5732_output);
    gettimeofday(&tv_r_Project_5_395840_e, 0);

    struct timeval tv_r_Project_5_617420_s, tv_r_Project_5_617420_e;
    gettimeofday(&tv_r_Project_5_617420_s, 0);
    SW_Project_TD_5159(tbl_Filter_TD_6462_output, tbl_Project_TD_5159_output);
    gettimeofday(&tv_r_Project_5_617420_e, 0);

    struct timeval tv_r_Union_4_912324_s, tv_r_Union_4_912324_e;
    gettimeofday(&tv_r_Union_4_912324_s, 0);
    SW_Union_TD_4454(tbl_Project_TD_5159_output, tbl_Project_TD_5732_output, tbl_Project_TD_5759_output, tbl_Union_TD_4454_output);
    gettimeofday(&tv_r_Union_4_912324_e, 0);

    struct timeval tv_r_Aggregate_3_475821_s, tv_r_Aggregate_3_475821_e;
    gettimeofday(&tv_r_Aggregate_3_475821_s, 0);
    SW_Aggregate_TD_341(tbl_Union_TD_4454_output, tbl_Aggregate_TD_341_output);
    gettimeofday(&tv_r_Aggregate_3_475821_e, 0);

    struct timeval tv_r_Sort_2_551560_s, tv_r_Sort_2_551560_e;
    gettimeofday(&tv_r_Sort_2_551560_s, 0);
    SW_Sort_TD_2398(tbl_Aggregate_TD_341_output, tbl_Sort_TD_2398_output);
    gettimeofday(&tv_r_Sort_2_551560_e, 0);

    struct timeval tv_r_LocalLimit_1_200270_s, tv_r_LocalLimit_1_200270_e;
    gettimeofday(&tv_r_LocalLimit_1_200270_s, 0);
    SW_LocalLimit_TD_1214(tbl_Sort_TD_2398_output, tbl_LocalLimit_TD_1214_output);
    gettimeofday(&tv_r_LocalLimit_1_200270_e, 0);

    struct timeval tv_r_GlobalLimit_0_736693_s, tv_r_GlobalLimit_0_736693_e;
    gettimeofday(&tv_r_GlobalLimit_0_736693_s, 0);
    SW_GlobalLimit_TD_0684(tbl_LocalLimit_TD_1214_output, tbl_GlobalLimit_TD_0684_output);
    gettimeofday(&tv_r_GlobalLimit_0_736693_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_266524_s, &tv_r_Filter_12_266524_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13613_input: " << tbl_SerializeFromObject_TD_13613_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_611375_s, &tv_r_Filter_12_611375_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13738_input: " << tbl_SerializeFromObject_TD_13738_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_827559_s, &tv_r_Filter_12_827559_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1370_input: " << tbl_SerializeFromObject_TD_1370_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_377660_s, &tv_r_Filter_12_377660_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13961_input: " << tbl_SerializeFromObject_TD_13961_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_304800_s, &tv_r_Filter_12_304800_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13135_input: " << tbl_SerializeFromObject_TD_13135_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_770744_s, &tv_r_Filter_12_770744_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1344_input: " << tbl_SerializeFromObject_TD_1344_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_254690_s, &tv_r_Filter_11_254690_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12598_input: " << tbl_SerializeFromObject_TD_12598_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_464486_s, &tv_r_JOIN_INNER_11_464486_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1272_output: " << tbl_Filter_TD_1272_output.getNumRow() << " " << "tbl_Filter_TD_12507_output: " << tbl_Filter_TD_12507_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_757911_s, &tv_r_Filter_11_757911_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12178_input: " << tbl_SerializeFromObject_TD_12178_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_622350_s, &tv_r_JOIN_INNER_11_622350_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1271_output: " << tbl_Filter_TD_1271_output.getNumRow() << " " << "tbl_Filter_TD_12657_output: " << tbl_Filter_TD_12657_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_153188_s, &tv_r_Filter_11_153188_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12588_input: " << tbl_SerializeFromObject_TD_12588_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_369759_s, &tv_r_JOIN_INNER_11_369759_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12142_output: " << tbl_Filter_TD_12142_output.getNumRow() << " " << "tbl_Filter_TD_12740_output: " << tbl_Filter_TD_12740_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_202957_s, &tv_r_JOIN_INNER_10_202957_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11285_output: " << tbl_JOIN_INNER_TD_11285_output.getNumRow() << " " << "tbl_Filter_TD_11239_output: " << tbl_Filter_TD_11239_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_120787_s, &tv_r_JOIN_INNER_10_120787_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11522_output: " << tbl_JOIN_INNER_TD_11522_output.getNumRow() << " " << "tbl_Filter_TD_116_output: " << tbl_Filter_TD_116_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_113613_s, &tv_r_JOIN_INNER_10_113613_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11771_output: " << tbl_JOIN_INNER_TD_11771_output.getNumRow() << " " << "tbl_Filter_TD_11522_output: " << tbl_Filter_TD_11522_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_199679_s, &tv_r_Aggregate_9_199679_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1072_output: " << tbl_JOIN_INNER_TD_1072_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_160327_s, &tv_r_Aggregate_9_160327_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10544_output: " << tbl_JOIN_INNER_TD_10544_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_110389_s, &tv_r_Aggregate_9_110389_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1061_output: " << tbl_JOIN_INNER_TD_1061_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_839005_s, &tv_r_Window_8_839005_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9342_output: " << tbl_Aggregate_TD_9342_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_676508_s, &tv_r_Window_8_676508_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9450_output: " << tbl_Aggregate_TD_9450_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_659390_s, &tv_r_Window_8_659390_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9683_output: " << tbl_Aggregate_TD_9683_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_317596_s, &tv_r_Window_7_317596_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_856_output: " << tbl_Window_TD_856_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_691907_s, &tv_r_Window_7_691907_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8261_output: " << tbl_Window_TD_8261_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_547277_s, &tv_r_Window_7_547277_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8212_output: " << tbl_Window_TD_8212_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_837815_s, &tv_r_Filter_6_837815_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7648_output: " << tbl_Window_TD_7648_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_379837_s, &tv_r_Filter_6_379837_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7154_output: " << tbl_Window_TD_7154_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_431236_s, &tv_r_Filter_6_431236_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_766_output: " << tbl_Window_TD_766_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_300361_s, &tv_r_Project_5_300361_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6245_output: " << tbl_Filter_TD_6245_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_395840_s, &tv_r_Project_5_395840_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6417_output: " << tbl_Filter_TD_6417_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_617420_s, &tv_r_Project_5_617420_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6462_output: " << tbl_Filter_TD_6462_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_912324_s, &tv_r_Union_4_912324_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5159_output: " << tbl_Project_TD_5159_output.getNumRow() << " " << "tbl_Project_TD_5732_output: " << tbl_Project_TD_5732_output.getNumRow() << " " << "tbl_Project_TD_5759_output: " << tbl_Project_TD_5759_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_475821_s, &tv_r_Aggregate_3_475821_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4454_output: " << tbl_Union_TD_4454_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_551560_s, &tv_r_Sort_2_551560_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_341_output: " << tbl_Aggregate_TD_341_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_200270_s, &tv_r_LocalLimit_1_200270_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2398_output: " << tbl_Sort_TD_2398_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_736693_s, &tv_r_GlobalLimit_0_736693_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1214_output: " << tbl_LocalLimit_TD_1214_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 6.8627615 * 1000 << "ms" << std::endl; 
    return 0; 
}
