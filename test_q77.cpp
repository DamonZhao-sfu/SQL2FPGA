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

#include "cfgFunc_q77.hpp" 
#include "q77.hpp" 

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
    std::cout << "NOTE:running query #77\n."; 
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
    Table tbl_GlobalLimit_TD_0610_output("tbl_GlobalLimit_TD_0610_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0610_output.allocateHost();
    Table tbl_LocalLimit_TD_1987_output("tbl_LocalLimit_TD_1987_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1987_output.allocateHost();
    Table tbl_Sort_TD_2629_output("tbl_Sort_TD_2629_output", 6100000, 5, "");
    tbl_Sort_TD_2629_output.allocateHost();
    Table tbl_Aggregate_TD_3167_output("tbl_Aggregate_TD_3167_output", 6100000, 5, "");
    tbl_Aggregate_TD_3167_output.allocateHost();
    Table tbl_Expand_TD_4479_output("tbl_Expand_TD_4479_output", 6100000, 6, "");
    tbl_Expand_TD_4479_output.allocateHost();
    Table tbl_Union_TD_5742_output("tbl_Union_TD_5742_output", 6100000, 5, "");
    tbl_Union_TD_5742_output.allocateHost();
    Table tbl_Project_TD_6273_output("tbl_Project_TD_6273_output", 6100000, 5, "");
    tbl_Project_TD_6273_output.allocateHost();
    Table tbl_Project_TD_6263_output("tbl_Project_TD_6263_output", 6100000, 5, "");
    tbl_Project_TD_6263_output.allocateHost();
    Table tbl_Project_TD_6820_output("tbl_Project_TD_6820_output", 6100000, 5, "");
    tbl_Project_TD_6820_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_7362_output("tbl_JOIN_LEFTOUTER_TD_7362_output", 6100000, 5, "");
    tbl_JOIN_LEFTOUTER_TD_7362_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_7750_output("tbl_JOIN_CROSS_TD_7750_output", 6100000, 5, "");
    tbl_JOIN_CROSS_TD_7750_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_7195_output("tbl_JOIN_LEFTOUTER_TD_7195_output", 6100000, 5, "");
    tbl_JOIN_LEFTOUTER_TD_7195_output.allocateHost();
    Table tbl_Aggregate_TD_8431_output("tbl_Aggregate_TD_8431_output", 6100000, 3, "");
    tbl_Aggregate_TD_8431_output.allocateHost();
    Table tbl_Aggregate_TD_8960_output("tbl_Aggregate_TD_8960_output", 6100000, 3, "");
    tbl_Aggregate_TD_8960_output.allocateHost();
    Table tbl_Aggregate_TD_8812_output("tbl_Aggregate_TD_8812_output", 6100000, 3, "");
    tbl_Aggregate_TD_8812_output.allocateHost();
    Table tbl_Aggregate_TD_8291_output("tbl_Aggregate_TD_8291_output", 6100000, 2, "");
    tbl_Aggregate_TD_8291_output.allocateHost();
    Table tbl_Aggregate_TD_8619_output("tbl_Aggregate_TD_8619_output", 6100000, 3, "");
    tbl_Aggregate_TD_8619_output.allocateHost();
    Table tbl_Aggregate_TD_8690_output("tbl_Aggregate_TD_8690_output", 6100000, 3, "");
    tbl_Aggregate_TD_8690_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9764_output("tbl_JOIN_INNER_TD_9764_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9764_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9582_output("tbl_JOIN_INNER_TD_9582_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9582_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9899_output("tbl_JOIN_INNER_TD_9899_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9899_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9725_output("tbl_JOIN_INNER_TD_9725_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9725_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9626_output("tbl_JOIN_INNER_TD_9626_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9626_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9584_output("tbl_JOIN_INNER_TD_9584_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9584_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10908_output("tbl_JOIN_INNER_TD_10908_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10908_output.allocateHost();
    Table tbl_Filter_TD_1061_output("tbl_Filter_TD_1061_output", 6100000, 1, "");
    tbl_Filter_TD_1061_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10173_output("tbl_JOIN_INNER_TD_10173_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10173_output.allocateHost();
    Table tbl_Filter_TD_1028_output("tbl_Filter_TD_1028_output", 6100000, 1, "");
    tbl_Filter_TD_1028_output.allocateHost();
    Table tbl_Filter_TD_10994_output("tbl_Filter_TD_10994_output", 6100000, 4, "");
    tbl_Filter_TD_10994_output.allocateHost();
    Table tbl_Filter_TD_10179_output("tbl_Filter_TD_10179_output", 6100000, 1, "");
    tbl_Filter_TD_10179_output.allocateHost();
    Table tbl_Filter_TD_10528_output("tbl_Filter_TD_10528_output", 6100000, 4, "");
    tbl_Filter_TD_10528_output.allocateHost();
    Table tbl_Filter_TD_1046_output("tbl_Filter_TD_1046_output", 6100000, 1, "");
    tbl_Filter_TD_1046_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1071_output("tbl_JOIN_INNER_TD_1071_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1071_output.allocateHost();
    Table tbl_Filter_TD_1055_output("tbl_Filter_TD_1055_output", 6100000, 1, "");
    tbl_Filter_TD_1055_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10613_output("tbl_JOIN_INNER_TD_10613_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10613_output.allocateHost();
    Table tbl_Filter_TD_10322_output("tbl_Filter_TD_10322_output", 6100000, 1, "");
    tbl_Filter_TD_10322_output.allocateHost();
    Table tbl_Filter_TD_1119_output("tbl_Filter_TD_1119_output", 6100000, 4, "");
    tbl_Filter_TD_1119_output.allocateHost();
    Table tbl_Filter_TD_11869_output("tbl_Filter_TD_11869_output", 6100000, 1, "");
    tbl_Filter_TD_11869_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11803_input;
    tbl_SerializeFromObject_TD_11803_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_11803_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_11803_input.allocateHost();
    tbl_SerializeFromObject_TD_11803_input.loadHost();
    Table tbl_Filter_TD_11580_output("tbl_Filter_TD_11580_output", 6100000, 4, "");
    tbl_Filter_TD_11580_output.allocateHost();
    Table tbl_Filter_TD_11122_output("tbl_Filter_TD_11122_output", 6100000, 1, "");
    tbl_Filter_TD_11122_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11794_input;
    tbl_SerializeFromObject_TD_11794_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_11794_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_11794_input.allocateHost();
    tbl_SerializeFromObject_TD_11794_input.loadHost();
    Table tbl_SerializeFromObject_TD_11171_input;
    tbl_SerializeFromObject_TD_11171_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11171_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11171_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_11171_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11171_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_11171_input.allocateHost();
    tbl_SerializeFromObject_TD_11171_input.loadHost();
    Table tbl_SerializeFromObject_TD_11802_input;
    tbl_SerializeFromObject_TD_11802_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11802_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11802_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11802_input.allocateHost();
    tbl_SerializeFromObject_TD_11802_input.loadHost();
    Table tbl_SerializeFromObject_TD_1116_input;
    tbl_SerializeFromObject_TD_1116_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1116_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_1116_input.addCol("cr_call_center_sk", 4);
    tbl_SerializeFromObject_TD_1116_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_1116_input.addCol("cr_net_loss", 4);
    tbl_SerializeFromObject_TD_1116_input.allocateHost();
    tbl_SerializeFromObject_TD_1116_input.loadHost();
    Table tbl_SerializeFromObject_TD_11285_input;
    tbl_SerializeFromObject_TD_11285_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11285_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11285_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11285_input.allocateHost();
    tbl_SerializeFromObject_TD_11285_input.loadHost();
    Table tbl_Filter_TD_11323_output("tbl_Filter_TD_11323_output", 6100000, 4, "");
    tbl_Filter_TD_11323_output.allocateHost();
    Table tbl_Filter_TD_11471_output("tbl_Filter_TD_11471_output", 6100000, 1, "");
    tbl_Filter_TD_11471_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11500_input;
    tbl_SerializeFromObject_TD_11500_input = Table("web_page", web_page_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_11500_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_11500_input.allocateHost();
    tbl_SerializeFromObject_TD_11500_input.loadHost();
    Table tbl_Filter_TD_11306_output("tbl_Filter_TD_11306_output", 6100000, 4, "");
    tbl_Filter_TD_11306_output.allocateHost();
    Table tbl_Filter_TD_11581_output("tbl_Filter_TD_11581_output", 6100000, 1, "");
    tbl_Filter_TD_11581_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1151_input;
    tbl_SerializeFromObject_TD_1151_input = Table("web_page", web_page_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_1151_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_1151_input.allocateHost();
    tbl_SerializeFromObject_TD_1151_input.loadHost();
    Table tbl_SerializeFromObject_TD_12415_input;
    tbl_SerializeFromObject_TD_12415_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12415_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12415_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12415_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12415_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12415_input.allocateHost();
    tbl_SerializeFromObject_TD_12415_input.loadHost();
    Table tbl_SerializeFromObject_TD_12935_input;
    tbl_SerializeFromObject_TD_12935_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12935_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12935_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12935_input.allocateHost();
    tbl_SerializeFromObject_TD_12935_input.loadHost();
    Table tbl_SerializeFromObject_TD_12505_input;
    tbl_SerializeFromObject_TD_12505_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12505_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12505_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_12505_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_12505_input.addCol("sr_net_loss", 4);
    tbl_SerializeFromObject_TD_12505_input.allocateHost();
    tbl_SerializeFromObject_TD_12505_input.loadHost();
    Table tbl_SerializeFromObject_TD_12365_input;
    tbl_SerializeFromObject_TD_12365_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12365_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12365_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12365_input.allocateHost();
    tbl_SerializeFromObject_TD_12365_input.loadHost();
    Table tbl_SerializeFromObject_TD_12306_input;
    tbl_SerializeFromObject_TD_12306_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12306_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12306_input.addCol("ws_web_page_sk", 4);
    tbl_SerializeFromObject_TD_12306_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12306_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_12306_input.allocateHost();
    tbl_SerializeFromObject_TD_12306_input.loadHost();
    Table tbl_SerializeFromObject_TD_12361_input;
    tbl_SerializeFromObject_TD_12361_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12361_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12361_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12361_input.allocateHost();
    tbl_SerializeFromObject_TD_12361_input.loadHost();
    Table tbl_SerializeFromObject_TD_12885_input;
    tbl_SerializeFromObject_TD_12885_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12885_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12885_input.addCol("wr_web_page_sk", 4);
    tbl_SerializeFromObject_TD_12885_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_12885_input.addCol("wr_net_loss", 4);
    tbl_SerializeFromObject_TD_12885_input.allocateHost();
    tbl_SerializeFromObject_TD_12885_input.loadHost();
    Table tbl_SerializeFromObject_TD_12171_input;
    tbl_SerializeFromObject_TD_12171_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12171_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12171_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12171_input.allocateHost();
    tbl_SerializeFromObject_TD_12171_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_420868_s, tv_r_Filter_11_420868_e;
    gettimeofday(&tv_r_Filter_11_420868_s, 0);
    SW_Filter_TD_11581(tbl_SerializeFromObject_TD_12171_input, tbl_Filter_TD_11581_output);
    gettimeofday(&tv_r_Filter_11_420868_e, 0);

    struct timeval tv_r_Filter_11_668125_s, tv_r_Filter_11_668125_e;
    gettimeofday(&tv_r_Filter_11_668125_s, 0);
    SW_Filter_TD_11306(tbl_SerializeFromObject_TD_12885_input, tbl_Filter_TD_11306_output);
    gettimeofday(&tv_r_Filter_11_668125_e, 0);

    struct timeval tv_r_Filter_11_213458_s, tv_r_Filter_11_213458_e;
    gettimeofday(&tv_r_Filter_11_213458_s, 0);
    SW_Filter_TD_11471(tbl_SerializeFromObject_TD_12361_input, tbl_Filter_TD_11471_output);
    gettimeofday(&tv_r_Filter_11_213458_e, 0);

    struct timeval tv_r_Filter_11_730799_s, tv_r_Filter_11_730799_e;
    gettimeofday(&tv_r_Filter_11_730799_s, 0);
    SW_Filter_TD_11323(tbl_SerializeFromObject_TD_12306_input, tbl_Filter_TD_11323_output);
    gettimeofday(&tv_r_Filter_11_730799_e, 0);

    struct timeval tv_r_Filter_11_429714_s, tv_r_Filter_11_429714_e;
    gettimeofday(&tv_r_Filter_11_429714_s, 0);
    SW_Filter_TD_11122(tbl_SerializeFromObject_TD_12365_input, tbl_Filter_TD_11122_output);
    gettimeofday(&tv_r_Filter_11_429714_e, 0);

    struct timeval tv_r_Filter_11_37076_s, tv_r_Filter_11_37076_e;
    gettimeofday(&tv_r_Filter_11_37076_s, 0);
    SW_Filter_TD_11580(tbl_SerializeFromObject_TD_12505_input, tbl_Filter_TD_11580_output);
    gettimeofday(&tv_r_Filter_11_37076_e, 0);

    struct timeval tv_r_Filter_11_992998_s, tv_r_Filter_11_992998_e;
    gettimeofday(&tv_r_Filter_11_992998_s, 0);
    SW_Filter_TD_11869(tbl_SerializeFromObject_TD_12935_input, tbl_Filter_TD_11869_output);
    gettimeofday(&tv_r_Filter_11_992998_e, 0);

    struct timeval tv_r_Filter_11_956692_s, tv_r_Filter_11_956692_e;
    gettimeofday(&tv_r_Filter_11_956692_s, 0);
    SW_Filter_TD_1119(tbl_SerializeFromObject_TD_12415_input, tbl_Filter_TD_1119_output);
    gettimeofday(&tv_r_Filter_11_956692_e, 0);

    struct timeval tv_r_Filter_10_396526_s, tv_r_Filter_10_396526_e;
    gettimeofday(&tv_r_Filter_10_396526_s, 0);
    SW_Filter_TD_10322(tbl_SerializeFromObject_TD_1151_input, tbl_Filter_TD_10322_output);
    gettimeofday(&tv_r_Filter_10_396526_e, 0);

    struct timeval tv_r_JOIN_INNER_10_61251_s, tv_r_JOIN_INNER_10_61251_e;
    gettimeofday(&tv_r_JOIN_INNER_10_61251_s, 0);
    SW_JOIN_INNER_TD_10613(tbl_Filter_TD_11306_output, tbl_Filter_TD_11581_output, tbl_JOIN_INNER_TD_10613_output);
    gettimeofday(&tv_r_JOIN_INNER_10_61251_e, 0);

    struct timeval tv_r_Filter_10_915166_s, tv_r_Filter_10_915166_e;
    gettimeofday(&tv_r_Filter_10_915166_s, 0);
    SW_Filter_TD_1055(tbl_SerializeFromObject_TD_11500_input, tbl_Filter_TD_1055_output);
    gettimeofday(&tv_r_Filter_10_915166_e, 0);

    struct timeval tv_r_JOIN_INNER_10_599627_s, tv_r_JOIN_INNER_10_599627_e;
    gettimeofday(&tv_r_JOIN_INNER_10_599627_s, 0);
    SW_JOIN_INNER_TD_1071(tbl_Filter_TD_11323_output, tbl_Filter_TD_11471_output, tbl_JOIN_INNER_TD_1071_output);
    gettimeofday(&tv_r_JOIN_INNER_10_599627_e, 0);

    struct timeval tv_r_Filter_10_578303_s, tv_r_Filter_10_578303_e;
    gettimeofday(&tv_r_Filter_10_578303_s, 0);
    SW_Filter_TD_1046(tbl_SerializeFromObject_TD_11285_input, tbl_Filter_TD_1046_output);
    gettimeofday(&tv_r_Filter_10_578303_e, 0);

    struct timeval tv_r_Filter_10_929969_s, tv_r_Filter_10_929969_e;
    gettimeofday(&tv_r_Filter_10_929969_s, 0);
    SW_Filter_TD_10528(tbl_SerializeFromObject_TD_1116_input, tbl_Filter_TD_10528_output);
    gettimeofday(&tv_r_Filter_10_929969_e, 0);

    struct timeval tv_r_Filter_10_671723_s, tv_r_Filter_10_671723_e;
    gettimeofday(&tv_r_Filter_10_671723_s, 0);
    SW_Filter_TD_10179(tbl_SerializeFromObject_TD_11802_input, tbl_Filter_TD_10179_output);
    gettimeofday(&tv_r_Filter_10_671723_e, 0);

    struct timeval tv_r_Filter_10_460493_s, tv_r_Filter_10_460493_e;
    gettimeofday(&tv_r_Filter_10_460493_s, 0);
    SW_Filter_TD_10994(tbl_SerializeFromObject_TD_11171_input, tbl_Filter_TD_10994_output);
    gettimeofday(&tv_r_Filter_10_460493_e, 0);

    struct timeval tv_r_Filter_10_521929_s, tv_r_Filter_10_521929_e;
    gettimeofday(&tv_r_Filter_10_521929_s, 0);
    SW_Filter_TD_1028(tbl_SerializeFromObject_TD_11794_input, tbl_Filter_TD_1028_output);
    gettimeofday(&tv_r_Filter_10_521929_e, 0);

    struct timeval tv_r_JOIN_INNER_10_22046_s, tv_r_JOIN_INNER_10_22046_e;
    gettimeofday(&tv_r_JOIN_INNER_10_22046_s, 0);
    SW_JOIN_INNER_TD_10173(tbl_Filter_TD_11580_output, tbl_Filter_TD_11122_output, tbl_JOIN_INNER_TD_10173_output);
    gettimeofday(&tv_r_JOIN_INNER_10_22046_e, 0);

    struct timeval tv_r_Filter_10_642758_s, tv_r_Filter_10_642758_e;
    gettimeofday(&tv_r_Filter_10_642758_s, 0);
    SW_Filter_TD_1061(tbl_SerializeFromObject_TD_11803_input, tbl_Filter_TD_1061_output);
    gettimeofday(&tv_r_Filter_10_642758_e, 0);

    struct timeval tv_r_JOIN_INNER_10_4217_s, tv_r_JOIN_INNER_10_4217_e;
    gettimeofday(&tv_r_JOIN_INNER_10_4217_s, 0);
    SW_JOIN_INNER_TD_10908(tbl_Filter_TD_1119_output, tbl_Filter_TD_11869_output, tbl_JOIN_INNER_TD_10908_output);
    gettimeofday(&tv_r_JOIN_INNER_10_4217_e, 0);

    struct timeval tv_r_JOIN_INNER_9_311568_s, tv_r_JOIN_INNER_9_311568_e;
    gettimeofday(&tv_r_JOIN_INNER_9_311568_s, 0);
    SW_JOIN_INNER_TD_9584(tbl_JOIN_INNER_TD_10613_output, tbl_Filter_TD_10322_output, tbl_JOIN_INNER_TD_9584_output);
    gettimeofday(&tv_r_JOIN_INNER_9_311568_e, 0);

    struct timeval tv_r_JOIN_INNER_9_156864_s, tv_r_JOIN_INNER_9_156864_e;
    gettimeofday(&tv_r_JOIN_INNER_9_156864_s, 0);
    SW_JOIN_INNER_TD_9626(tbl_JOIN_INNER_TD_1071_output, tbl_Filter_TD_1055_output, tbl_JOIN_INNER_TD_9626_output);
    gettimeofday(&tv_r_JOIN_INNER_9_156864_e, 0);

    struct timeval tv_r_JOIN_INNER_9_176738_s, tv_r_JOIN_INNER_9_176738_e;
    gettimeofday(&tv_r_JOIN_INNER_9_176738_s, 0);
    SW_JOIN_INNER_TD_9725(tbl_Filter_TD_10528_output, tbl_Filter_TD_1046_output, tbl_JOIN_INNER_TD_9725_output);
    gettimeofday(&tv_r_JOIN_INNER_9_176738_e, 0);

    struct timeval tv_r_JOIN_INNER_9_131929_s, tv_r_JOIN_INNER_9_131929_e;
    gettimeofday(&tv_r_JOIN_INNER_9_131929_s, 0);
    SW_JOIN_INNER_TD_9899(tbl_Filter_TD_10994_output, tbl_Filter_TD_10179_output, tbl_JOIN_INNER_TD_9899_output);
    gettimeofday(&tv_r_JOIN_INNER_9_131929_e, 0);

    struct timeval tv_r_JOIN_INNER_9_292884_s, tv_r_JOIN_INNER_9_292884_e;
    gettimeofday(&tv_r_JOIN_INNER_9_292884_s, 0);
    SW_JOIN_INNER_TD_9582(tbl_JOIN_INNER_TD_10173_output, tbl_Filter_TD_1028_output, tbl_JOIN_INNER_TD_9582_output);
    gettimeofday(&tv_r_JOIN_INNER_9_292884_e, 0);

    struct timeval tv_r_JOIN_INNER_9_639767_s, tv_r_JOIN_INNER_9_639767_e;
    gettimeofday(&tv_r_JOIN_INNER_9_639767_s, 0);
    SW_JOIN_INNER_TD_9764(tbl_JOIN_INNER_TD_10908_output, tbl_Filter_TD_1061_output, tbl_JOIN_INNER_TD_9764_output);
    gettimeofday(&tv_r_JOIN_INNER_9_639767_e, 0);

    struct timeval tv_r_Aggregate_8_663617_s, tv_r_Aggregate_8_663617_e;
    gettimeofday(&tv_r_Aggregate_8_663617_s, 0);
    SW_Aggregate_TD_8690(tbl_JOIN_INNER_TD_9584_output, tbl_Aggregate_TD_8690_output);
    gettimeofday(&tv_r_Aggregate_8_663617_e, 0);

    struct timeval tv_r_Aggregate_8_49421_s, tv_r_Aggregate_8_49421_e;
    gettimeofday(&tv_r_Aggregate_8_49421_s, 0);
    SW_Aggregate_TD_8619(tbl_JOIN_INNER_TD_9626_output, tbl_Aggregate_TD_8619_output);
    gettimeofday(&tv_r_Aggregate_8_49421_e, 0);

    struct timeval tv_r_Aggregate_8_328251_s, tv_r_Aggregate_8_328251_e;
    gettimeofday(&tv_r_Aggregate_8_328251_s, 0);
    SW_Aggregate_TD_8291(tbl_JOIN_INNER_TD_9725_output, tbl_Aggregate_TD_8291_output);
    gettimeofday(&tv_r_Aggregate_8_328251_e, 0);

    struct timeval tv_r_Aggregate_8_555695_s, tv_r_Aggregate_8_555695_e;
    gettimeofday(&tv_r_Aggregate_8_555695_s, 0);
    SW_Aggregate_TD_8812(tbl_JOIN_INNER_TD_9899_output, tbl_Aggregate_TD_8812_output);
    gettimeofday(&tv_r_Aggregate_8_555695_e, 0);

    struct timeval tv_r_Aggregate_8_656803_s, tv_r_Aggregate_8_656803_e;
    gettimeofday(&tv_r_Aggregate_8_656803_s, 0);
    SW_Aggregate_TD_8960(tbl_JOIN_INNER_TD_9582_output, tbl_Aggregate_TD_8960_output);
    gettimeofday(&tv_r_Aggregate_8_656803_e, 0);

    struct timeval tv_r_Aggregate_8_600726_s, tv_r_Aggregate_8_600726_e;
    gettimeofday(&tv_r_Aggregate_8_600726_s, 0);
    SW_Aggregate_TD_8431(tbl_JOIN_INNER_TD_9764_output, tbl_Aggregate_TD_8431_output);
    gettimeofday(&tv_r_Aggregate_8_600726_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_7_279117_s, tv_r_JOIN_LEFTOUTER_7_279117_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_279117_s, 0);
    SW_JOIN_LEFTOUTER_TD_7195(tbl_Aggregate_TD_8619_output, tbl_Aggregate_TD_8690_output, tbl_JOIN_LEFTOUTER_TD_7195_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_279117_e, 0);

    struct timeval tv_r_JOIN_CROSS_7_229746_s, tv_r_JOIN_CROSS_7_229746_e;
    gettimeofday(&tv_r_JOIN_CROSS_7_229746_s, 0);
    SW_JOIN_CROSS_TD_7750(tbl_Aggregate_TD_8812_output, tbl_Aggregate_TD_8291_output, tbl_JOIN_CROSS_TD_7750_output);
    gettimeofday(&tv_r_JOIN_CROSS_7_229746_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_7_456281_s, tv_r_JOIN_LEFTOUTER_7_456281_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_456281_s, 0);
    SW_JOIN_LEFTOUTER_TD_7362(tbl_Aggregate_TD_8431_output, tbl_Aggregate_TD_8960_output, tbl_JOIN_LEFTOUTER_TD_7362_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_456281_e, 0);

    struct timeval tv_r_Project_6_981505_s, tv_r_Project_6_981505_e;
    gettimeofday(&tv_r_Project_6_981505_s, 0);
    SW_Project_TD_6820(tbl_JOIN_LEFTOUTER_TD_7195_output, tbl_Project_TD_6820_output);
    gettimeofday(&tv_r_Project_6_981505_e, 0);

    struct timeval tv_r_Project_6_302809_s, tv_r_Project_6_302809_e;
    gettimeofday(&tv_r_Project_6_302809_s, 0);
    SW_Project_TD_6263(tbl_JOIN_CROSS_TD_7750_output, tbl_Project_TD_6263_output);
    gettimeofday(&tv_r_Project_6_302809_e, 0);

    struct timeval tv_r_Project_6_833319_s, tv_r_Project_6_833319_e;
    gettimeofday(&tv_r_Project_6_833319_s, 0);
    SW_Project_TD_6273(tbl_JOIN_LEFTOUTER_TD_7362_output, tbl_Project_TD_6273_output);
    gettimeofday(&tv_r_Project_6_833319_e, 0);

    struct timeval tv_r_Union_5_407799_s, tv_r_Union_5_407799_e;
    gettimeofday(&tv_r_Union_5_407799_s, 0);
    SW_Union_TD_5742(tbl_Project_TD_6273_output, tbl_Project_TD_6263_output, tbl_Project_TD_6820_output, tbl_Union_TD_5742_output);
    gettimeofday(&tv_r_Union_5_407799_e, 0);

    struct timeval tv_r_Expand_4_723181_s, tv_r_Expand_4_723181_e;
    gettimeofday(&tv_r_Expand_4_723181_s, 0);
    SW_Expand_TD_4479(tbl_Union_TD_5742_output, tbl_Expand_TD_4479_output);
    gettimeofday(&tv_r_Expand_4_723181_e, 0);

    struct timeval tv_r_Aggregate_3_394036_s, tv_r_Aggregate_3_394036_e;
    gettimeofday(&tv_r_Aggregate_3_394036_s, 0);
    SW_Aggregate_TD_3167(tbl_Expand_TD_4479_output, tbl_Aggregate_TD_3167_output);
    gettimeofday(&tv_r_Aggregate_3_394036_e, 0);

    struct timeval tv_r_Sort_2_999307_s, tv_r_Sort_2_999307_e;
    gettimeofday(&tv_r_Sort_2_999307_s, 0);
    SW_Sort_TD_2629(tbl_Aggregate_TD_3167_output, tbl_Sort_TD_2629_output);
    gettimeofday(&tv_r_Sort_2_999307_e, 0);

    struct timeval tv_r_LocalLimit_1_988711_s, tv_r_LocalLimit_1_988711_e;
    gettimeofday(&tv_r_LocalLimit_1_988711_s, 0);
    SW_LocalLimit_TD_1987(tbl_Sort_TD_2629_output, tbl_LocalLimit_TD_1987_output);
    gettimeofday(&tv_r_LocalLimit_1_988711_e, 0);

    struct timeval tv_r_GlobalLimit_0_728443_s, tv_r_GlobalLimit_0_728443_e;
    gettimeofday(&tv_r_GlobalLimit_0_728443_s, 0);
    SW_GlobalLimit_TD_0610(tbl_LocalLimit_TD_1987_output, tbl_GlobalLimit_TD_0610_output);
    gettimeofday(&tv_r_GlobalLimit_0_728443_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_420868_s, &tv_r_Filter_11_420868_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12171_input: " << tbl_SerializeFromObject_TD_12171_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_668125_s, &tv_r_Filter_11_668125_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12885_input: " << tbl_SerializeFromObject_TD_12885_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_213458_s, &tv_r_Filter_11_213458_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12361_input: " << tbl_SerializeFromObject_TD_12361_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_730799_s, &tv_r_Filter_11_730799_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12306_input: " << tbl_SerializeFromObject_TD_12306_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_429714_s, &tv_r_Filter_11_429714_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12365_input: " << tbl_SerializeFromObject_TD_12365_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_37076_s, &tv_r_Filter_11_37076_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12505_input: " << tbl_SerializeFromObject_TD_12505_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_992998_s, &tv_r_Filter_11_992998_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12935_input: " << tbl_SerializeFromObject_TD_12935_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_956692_s, &tv_r_Filter_11_956692_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12415_input: " << tbl_SerializeFromObject_TD_12415_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_396526_s, &tv_r_Filter_10_396526_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1151_input: " << tbl_SerializeFromObject_TD_1151_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_61251_s, &tv_r_JOIN_INNER_10_61251_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11306_output: " << tbl_Filter_TD_11306_output.getNumRow() << " " << "tbl_Filter_TD_11581_output: " << tbl_Filter_TD_11581_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_915166_s, &tv_r_Filter_10_915166_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11500_input: " << tbl_SerializeFromObject_TD_11500_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_599627_s, &tv_r_JOIN_INNER_10_599627_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11323_output: " << tbl_Filter_TD_11323_output.getNumRow() << " " << "tbl_Filter_TD_11471_output: " << tbl_Filter_TD_11471_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_578303_s, &tv_r_Filter_10_578303_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11285_input: " << tbl_SerializeFromObject_TD_11285_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_929969_s, &tv_r_Filter_10_929969_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1116_input: " << tbl_SerializeFromObject_TD_1116_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_671723_s, &tv_r_Filter_10_671723_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11802_input: " << tbl_SerializeFromObject_TD_11802_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_460493_s, &tv_r_Filter_10_460493_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11171_input: " << tbl_SerializeFromObject_TD_11171_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_521929_s, &tv_r_Filter_10_521929_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11794_input: " << tbl_SerializeFromObject_TD_11794_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_22046_s, &tv_r_JOIN_INNER_10_22046_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11580_output: " << tbl_Filter_TD_11580_output.getNumRow() << " " << "tbl_Filter_TD_11122_output: " << tbl_Filter_TD_11122_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_642758_s, &tv_r_Filter_10_642758_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11803_input: " << tbl_SerializeFromObject_TD_11803_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_4217_s, &tv_r_JOIN_INNER_10_4217_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1119_output: " << tbl_Filter_TD_1119_output.getNumRow() << " " << "tbl_Filter_TD_11869_output: " << tbl_Filter_TD_11869_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_311568_s, &tv_r_JOIN_INNER_9_311568_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10613_output: " << tbl_JOIN_INNER_TD_10613_output.getNumRow() << " " << "tbl_Filter_TD_10322_output: " << tbl_Filter_TD_10322_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_156864_s, &tv_r_JOIN_INNER_9_156864_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1071_output: " << tbl_JOIN_INNER_TD_1071_output.getNumRow() << " " << "tbl_Filter_TD_1055_output: " << tbl_Filter_TD_1055_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_176738_s, &tv_r_JOIN_INNER_9_176738_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10528_output: " << tbl_Filter_TD_10528_output.getNumRow() << " " << "tbl_Filter_TD_1046_output: " << tbl_Filter_TD_1046_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_131929_s, &tv_r_JOIN_INNER_9_131929_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10994_output: " << tbl_Filter_TD_10994_output.getNumRow() << " " << "tbl_Filter_TD_10179_output: " << tbl_Filter_TD_10179_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_292884_s, &tv_r_JOIN_INNER_9_292884_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10173_output: " << tbl_JOIN_INNER_TD_10173_output.getNumRow() << " " << "tbl_Filter_TD_1028_output: " << tbl_Filter_TD_1028_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_639767_s, &tv_r_JOIN_INNER_9_639767_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10908_output: " << tbl_JOIN_INNER_TD_10908_output.getNumRow() << " " << "tbl_Filter_TD_1061_output: " << tbl_Filter_TD_1061_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_663617_s, &tv_r_Aggregate_8_663617_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9584_output: " << tbl_JOIN_INNER_TD_9584_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_49421_s, &tv_r_Aggregate_8_49421_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9626_output: " << tbl_JOIN_INNER_TD_9626_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_328251_s, &tv_r_Aggregate_8_328251_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9725_output: " << tbl_JOIN_INNER_TD_9725_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_555695_s, &tv_r_Aggregate_8_555695_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9899_output: " << tbl_JOIN_INNER_TD_9899_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_656803_s, &tv_r_Aggregate_8_656803_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9582_output: " << tbl_JOIN_INNER_TD_9582_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_600726_s, &tv_r_Aggregate_8_600726_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9764_output: " << tbl_JOIN_INNER_TD_9764_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_7: " << tvdiff(&tv_r_JOIN_LEFTOUTER_7_279117_s, &tv_r_JOIN_LEFTOUTER_7_279117_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8619_output: " << tbl_Aggregate_TD_8619_output.getNumRow() << " " << "tbl_Aggregate_TD_8690_output: " << tbl_Aggregate_TD_8690_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_7: " << tvdiff(&tv_r_JOIN_CROSS_7_229746_s, &tv_r_JOIN_CROSS_7_229746_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8812_output: " << tbl_Aggregate_TD_8812_output.getNumRow() << " " << "tbl_Aggregate_TD_8291_output: " << tbl_Aggregate_TD_8291_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_7: " << tvdiff(&tv_r_JOIN_LEFTOUTER_7_456281_s, &tv_r_JOIN_LEFTOUTER_7_456281_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8431_output: " << tbl_Aggregate_TD_8431_output.getNumRow() << " " << "tbl_Aggregate_TD_8960_output: " << tbl_Aggregate_TD_8960_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_981505_s, &tv_r_Project_6_981505_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_7195_output: " << tbl_JOIN_LEFTOUTER_TD_7195_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_302809_s, &tv_r_Project_6_302809_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_7750_output: " << tbl_JOIN_CROSS_TD_7750_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_833319_s, &tv_r_Project_6_833319_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_7362_output: " << tbl_JOIN_LEFTOUTER_TD_7362_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_5: " << tvdiff(&tv_r_Union_5_407799_s, &tv_r_Union_5_407799_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6273_output: " << tbl_Project_TD_6273_output.getNumRow() << " " << "tbl_Project_TD_6263_output: " << tbl_Project_TD_6263_output.getNumRow() << " " << "tbl_Project_TD_6820_output: " << tbl_Project_TD_6820_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_723181_s, &tv_r_Expand_4_723181_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_5742_output: " << tbl_Union_TD_5742_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_394036_s, &tv_r_Aggregate_3_394036_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4479_output: " << tbl_Expand_TD_4479_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_999307_s, &tv_r_Sort_2_999307_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3167_output: " << tbl_Aggregate_TD_3167_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_988711_s, &tv_r_LocalLimit_1_988711_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2629_output: " << tbl_Sort_TD_2629_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_728443_s, &tv_r_GlobalLimit_0_728443_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1987_output: " << tbl_LocalLimit_TD_1987_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.2310688 * 1000 << "ms" << std::endl; 
    return 0; 
}
