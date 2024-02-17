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

#include "cfgFunc_q5.hpp" 
#include "q5.hpp" 

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
    std::cout << "NOTE:running query #5\n."; 
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
    Table tbl_GlobalLimit_TD_0329_output("tbl_GlobalLimit_TD_0329_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0329_output.allocateHost();
    Table tbl_LocalLimit_TD_1187_output("tbl_LocalLimit_TD_1187_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1187_output.allocateHost();
    Table tbl_Sort_TD_2158_output("tbl_Sort_TD_2158_output", 6100000, 5, "");
    tbl_Sort_TD_2158_output.allocateHost();
    Table tbl_Aggregate_TD_3140_output("tbl_Aggregate_TD_3140_output", 6100000, 5, "");
    tbl_Aggregate_TD_3140_output.allocateHost();
    Table tbl_Expand_TD_4218_output("tbl_Expand_TD_4218_output", 6100000, 6, "");
    tbl_Expand_TD_4218_output.allocateHost();
    Table tbl_Union_TD_5582_output("tbl_Union_TD_5582_output", 6100000, 5, "");
    tbl_Union_TD_5582_output.allocateHost();
    Table tbl_Aggregate_TD_684_output("tbl_Aggregate_TD_684_output", 6100000, 5, "");
    tbl_Aggregate_TD_684_output.allocateHost();
    Table tbl_Aggregate_TD_6146_output("tbl_Aggregate_TD_6146_output", 6100000, 5, "");
    tbl_Aggregate_TD_6146_output.allocateHost();
    Table tbl_Aggregate_TD_699_output("tbl_Aggregate_TD_699_output", 6100000, 5, "");
    tbl_Aggregate_TD_699_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7761_output("tbl_JOIN_INNER_TD_7761_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7761_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7484_output("tbl_JOIN_INNER_TD_7484_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7484_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7508_output("tbl_JOIN_INNER_TD_7508_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7508_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8413_output("tbl_JOIN_INNER_TD_8413_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8413_output.allocateHost();
    Table tbl_Filter_TD_8463_output("tbl_Filter_TD_8463_output", 6100000, 2, "");
    tbl_Filter_TD_8463_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8431_output("tbl_JOIN_INNER_TD_8431_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8431_output.allocateHost();
    Table tbl_Filter_TD_8418_output("tbl_Filter_TD_8418_output", 6100000, 2, "");
    tbl_Filter_TD_8418_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8763_output("tbl_JOIN_INNER_TD_8763_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8763_output.allocateHost();
    Table tbl_Filter_TD_8537_output("tbl_Filter_TD_8537_output", 6100000, 2, "");
    tbl_Filter_TD_8537_output.allocateHost();
    Table tbl_Union_TD_9310_output("tbl_Union_TD_9310_output", 6100000, 6, "");
    tbl_Union_TD_9310_output.allocateHost();
    Table tbl_Filter_TD_9282_output("tbl_Filter_TD_9282_output", 6100000, 1, "");
    tbl_Filter_TD_9282_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9641_input;
    tbl_SerializeFromObject_TD_9641_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9641_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9641_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9641_input.allocateHost();
    tbl_SerializeFromObject_TD_9641_input.loadHost();
    Table tbl_Union_TD_998_output("tbl_Union_TD_998_output", 6100000, 6, "");
    tbl_Union_TD_998_output.allocateHost();
    Table tbl_Filter_TD_9839_output("tbl_Filter_TD_9839_output", 6100000, 1, "");
    tbl_Filter_TD_9839_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9468_input;
    tbl_SerializeFromObject_TD_9468_input = Table("catalog_page", catalog_page_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9468_input.addCol("cp_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_9468_input.addCol("cp_catalog_page_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9468_input.allocateHost();
    tbl_SerializeFromObject_TD_9468_input.loadHost();
    Table tbl_Union_TD_9890_output("tbl_Union_TD_9890_output", 6100000, 6, "");
    tbl_Union_TD_9890_output.allocateHost();
    Table tbl_Filter_TD_9870_output("tbl_Filter_TD_9870_output", 6100000, 1, "");
    tbl_Filter_TD_9870_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9300_input;
    tbl_SerializeFromObject_TD_9300_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9300_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_9300_input.addCol("web_site_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9300_input.allocateHost();
    tbl_SerializeFromObject_TD_9300_input.loadHost();
    Table tbl_Project_TD_10862_output("tbl_Project_TD_10862_output", 6100000, 6, "");
    tbl_Project_TD_10862_output.allocateHost();
    Table tbl_Project_TD_10240_output("tbl_Project_TD_10240_output", 6100000, 6, "");
    tbl_Project_TD_10240_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10776_input;
    tbl_SerializeFromObject_TD_10776_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10776_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10776_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10776_input.allocateHost();
    tbl_SerializeFromObject_TD_10776_input.loadHost();
    Table tbl_Project_TD_10526_output("tbl_Project_TD_10526_output", 6100000, 6, "");
    tbl_Project_TD_10526_output.allocateHost();
    Table tbl_Project_TD_10306_output("tbl_Project_TD_10306_output", 6100000, 6, "");
    tbl_Project_TD_10306_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10275_input;
    tbl_SerializeFromObject_TD_10275_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10275_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10275_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10275_input.allocateHost();
    tbl_SerializeFromObject_TD_10275_input.loadHost();
    Table tbl_Project_TD_10391_output("tbl_Project_TD_10391_output", 6100000, 6, "");
    tbl_Project_TD_10391_output.allocateHost();
    Table tbl_Project_TD_10487_output("tbl_Project_TD_10487_output", 6100000, 6, "");
    tbl_Project_TD_10487_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10630_input;
    tbl_SerializeFromObject_TD_10630_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10630_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10630_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10630_input.allocateHost();
    tbl_SerializeFromObject_TD_10630_input.loadHost();
    Table tbl_Filter_TD_11967_output("tbl_Filter_TD_11967_output", 6100000, 4, "");
    tbl_Filter_TD_11967_output.allocateHost();
    Table tbl_Filter_TD_11665_output("tbl_Filter_TD_11665_output", 6100000, 4, "");
    tbl_Filter_TD_11665_output.allocateHost();
    Table tbl_Filter_TD_11380_output("tbl_Filter_TD_11380_output", 6100000, 4, "");
    tbl_Filter_TD_11380_output.allocateHost();
    Table tbl_Filter_TD_11540_output("tbl_Filter_TD_11540_output", 6100000, 4, "");
    tbl_Filter_TD_11540_output.allocateHost();
    Table tbl_Filter_TD_11965_output("tbl_Filter_TD_11965_output", 6100000, 4, "");
    tbl_Filter_TD_11965_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11949_output("tbl_JOIN_INNER_TD_11949_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_11949_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12365_input;
    tbl_SerializeFromObject_TD_12365_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12365_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12365_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12365_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12365_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12365_input.allocateHost();
    tbl_SerializeFromObject_TD_12365_input.loadHost();
    Table tbl_SerializeFromObject_TD_12203_input;
    tbl_SerializeFromObject_TD_12203_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12203_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_12203_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12203_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_12203_input.addCol("sr_net_loss", 4);
    tbl_SerializeFromObject_TD_12203_input.allocateHost();
    tbl_SerializeFromObject_TD_12203_input.loadHost();
    Table tbl_SerializeFromObject_TD_12714_input;
    tbl_SerializeFromObject_TD_12714_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12714_input.addCol("cs_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_12714_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12714_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12714_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_12714_input.allocateHost();
    tbl_SerializeFromObject_TD_12714_input.loadHost();
    Table tbl_SerializeFromObject_TD_12345_input;
    tbl_SerializeFromObject_TD_12345_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12345_input.addCol("cr_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_12345_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12345_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_12345_input.addCol("cr_net_loss", 4);
    tbl_SerializeFromObject_TD_12345_input.allocateHost();
    tbl_SerializeFromObject_TD_12345_input.loadHost();
    Table tbl_SerializeFromObject_TD_1238_input;
    tbl_SerializeFromObject_TD_1238_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1238_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_1238_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1238_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1238_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_1238_input.allocateHost();
    tbl_SerializeFromObject_TD_1238_input.loadHost();
    Table tbl_Filter_TD_1291_output("tbl_Filter_TD_1291_output", 6100000, 5, "");
    tbl_Filter_TD_1291_output.allocateHost();
    Table tbl_Filter_TD_12496_output("tbl_Filter_TD_12496_output", 6100000, 3, "");
    tbl_Filter_TD_12496_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13941_input;
    tbl_SerializeFromObject_TD_13941_input = Table("web_returns", web_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13941_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_13941_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_13941_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_13941_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_13941_input.addCol("wr_net_loss", 4);
    tbl_SerializeFromObject_TD_13941_input.allocateHost();
    tbl_SerializeFromObject_TD_13941_input.loadHost();
    Table tbl_SerializeFromObject_TD_13432_input;
    tbl_SerializeFromObject_TD_13432_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13432_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13432_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_13432_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_13432_input.allocateHost();
    tbl_SerializeFromObject_TD_13432_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_369033_s, tv_r_Filter_12_369033_e;
    gettimeofday(&tv_r_Filter_12_369033_s, 0);
    SW_Filter_TD_12496(tbl_SerializeFromObject_TD_13432_input, tbl_Filter_TD_12496_output);
    gettimeofday(&tv_r_Filter_12_369033_e, 0);

    struct timeval tv_r_Filter_12_246626_s, tv_r_Filter_12_246626_e;
    gettimeofday(&tv_r_Filter_12_246626_s, 0);
    SW_Filter_TD_1291(tbl_SerializeFromObject_TD_13941_input, tbl_Filter_TD_1291_output);
    gettimeofday(&tv_r_Filter_12_246626_e, 0);

    struct timeval tv_r_JOIN_INNER_11_136693_s, tv_r_JOIN_INNER_11_136693_e;
    gettimeofday(&tv_r_JOIN_INNER_11_136693_s, 0);
    SW_JOIN_INNER_TD_11949(tbl_Filter_TD_1291_output, tbl_Filter_TD_12496_output, tbl_JOIN_INNER_TD_11949_output);
    gettimeofday(&tv_r_JOIN_INNER_11_136693_e, 0);

    struct timeval tv_r_Filter_11_336491_s, tv_r_Filter_11_336491_e;
    gettimeofday(&tv_r_Filter_11_336491_s, 0);
    SW_Filter_TD_11965(tbl_SerializeFromObject_TD_1238_input, tbl_Filter_TD_11965_output);
    gettimeofday(&tv_r_Filter_11_336491_e, 0);

    struct timeval tv_r_Filter_11_611962_s, tv_r_Filter_11_611962_e;
    gettimeofday(&tv_r_Filter_11_611962_s, 0);
    SW_Filter_TD_11540(tbl_SerializeFromObject_TD_12345_input, tbl_Filter_TD_11540_output);
    gettimeofday(&tv_r_Filter_11_611962_e, 0);

    struct timeval tv_r_Filter_11_417617_s, tv_r_Filter_11_417617_e;
    gettimeofday(&tv_r_Filter_11_417617_s, 0);
    SW_Filter_TD_11380(tbl_SerializeFromObject_TD_12714_input, tbl_Filter_TD_11380_output);
    gettimeofday(&tv_r_Filter_11_417617_e, 0);

    struct timeval tv_r_Filter_11_855020_s, tv_r_Filter_11_855020_e;
    gettimeofday(&tv_r_Filter_11_855020_s, 0);
    SW_Filter_TD_11665(tbl_SerializeFromObject_TD_12203_input, tbl_Filter_TD_11665_output);
    gettimeofday(&tv_r_Filter_11_855020_e, 0);

    struct timeval tv_r_Filter_11_177286_s, tv_r_Filter_11_177286_e;
    gettimeofday(&tv_r_Filter_11_177286_s, 0);
    SW_Filter_TD_11967(tbl_SerializeFromObject_TD_12365_input, tbl_Filter_TD_11967_output);
    gettimeofday(&tv_r_Filter_11_177286_e, 0);

    struct timeval tv_r_Project_10_863176_s, tv_r_Project_10_863176_e;
    gettimeofday(&tv_r_Project_10_863176_s, 0);
    SW_Project_TD_10487(tbl_JOIN_INNER_TD_11949_output, tbl_Project_TD_10487_output);
    gettimeofday(&tv_r_Project_10_863176_e, 0);

    struct timeval tv_r_Project_10_645532_s, tv_r_Project_10_645532_e;
    gettimeofday(&tv_r_Project_10_645532_s, 0);
    SW_Project_TD_10391(tbl_Filter_TD_11965_output, tbl_Project_TD_10391_output);
    gettimeofday(&tv_r_Project_10_645532_e, 0);

    struct timeval tv_r_Project_10_973519_s, tv_r_Project_10_973519_e;
    gettimeofday(&tv_r_Project_10_973519_s, 0);
    SW_Project_TD_10306(tbl_Filter_TD_11540_output, tbl_Project_TD_10306_output);
    gettimeofday(&tv_r_Project_10_973519_e, 0);

    struct timeval tv_r_Project_10_18442_s, tv_r_Project_10_18442_e;
    gettimeofday(&tv_r_Project_10_18442_s, 0);
    SW_Project_TD_10526(tbl_Filter_TD_11380_output, tbl_Project_TD_10526_output);
    gettimeofday(&tv_r_Project_10_18442_e, 0);

    struct timeval tv_r_Project_10_179494_s, tv_r_Project_10_179494_e;
    gettimeofday(&tv_r_Project_10_179494_s, 0);
    SW_Project_TD_10240(tbl_Filter_TD_11665_output, tbl_Project_TD_10240_output);
    gettimeofday(&tv_r_Project_10_179494_e, 0);

    struct timeval tv_r_Project_10_852162_s, tv_r_Project_10_852162_e;
    gettimeofday(&tv_r_Project_10_852162_s, 0);
    SW_Project_TD_10862(tbl_Filter_TD_11967_output, tbl_Project_TD_10862_output);
    gettimeofday(&tv_r_Project_10_852162_e, 0);

    struct timeval tv_r_Filter_9_459549_s, tv_r_Filter_9_459549_e;
    gettimeofday(&tv_r_Filter_9_459549_s, 0);
    SW_Filter_TD_9870(tbl_SerializeFromObject_TD_10630_input, tbl_Filter_TD_9870_output);
    gettimeofday(&tv_r_Filter_9_459549_e, 0);

    struct timeval tv_r_Union_9_224541_s, tv_r_Union_9_224541_e;
    gettimeofday(&tv_r_Union_9_224541_s, 0);
    SW_Union_TD_9890(tbl_Project_TD_10391_output, tbl_Project_TD_10487_output, tbl_Union_TD_9890_output);
    gettimeofday(&tv_r_Union_9_224541_e, 0);

    struct timeval tv_r_Filter_9_83209_s, tv_r_Filter_9_83209_e;
    gettimeofday(&tv_r_Filter_9_83209_s, 0);
    SW_Filter_TD_9839(tbl_SerializeFromObject_TD_10275_input, tbl_Filter_TD_9839_output);
    gettimeofday(&tv_r_Filter_9_83209_e, 0);

    struct timeval tv_r_Union_9_507589_s, tv_r_Union_9_507589_e;
    gettimeofday(&tv_r_Union_9_507589_s, 0);
    SW_Union_TD_998(tbl_Project_TD_10526_output, tbl_Project_TD_10306_output, tbl_Union_TD_998_output);
    gettimeofday(&tv_r_Union_9_507589_e, 0);

    struct timeval tv_r_Filter_9_781829_s, tv_r_Filter_9_781829_e;
    gettimeofday(&tv_r_Filter_9_781829_s, 0);
    SW_Filter_TD_9282(tbl_SerializeFromObject_TD_10776_input, tbl_Filter_TD_9282_output);
    gettimeofday(&tv_r_Filter_9_781829_e, 0);

    struct timeval tv_r_Union_9_169619_s, tv_r_Union_9_169619_e;
    gettimeofday(&tv_r_Union_9_169619_s, 0);
    SW_Union_TD_9310(tbl_Project_TD_10862_output, tbl_Project_TD_10240_output, tbl_Union_TD_9310_output);
    gettimeofday(&tv_r_Union_9_169619_e, 0);

    struct timeval tv_r_Filter_8_478607_s, tv_r_Filter_8_478607_e;
    gettimeofday(&tv_r_Filter_8_478607_s, 0);
    SW_Filter_TD_8537(tbl_SerializeFromObject_TD_9300_input, tbl_Filter_TD_8537_output);
    gettimeofday(&tv_r_Filter_8_478607_e, 0);

    struct timeval tv_r_JOIN_INNER_8_104737_s, tv_r_JOIN_INNER_8_104737_e;
    gettimeofday(&tv_r_JOIN_INNER_8_104737_s, 0);
    SW_JOIN_INNER_TD_8763(tbl_Union_TD_9890_output, tbl_Filter_TD_9870_output, tbl_JOIN_INNER_TD_8763_output);
    gettimeofday(&tv_r_JOIN_INNER_8_104737_e, 0);

    struct timeval tv_r_Filter_8_301337_s, tv_r_Filter_8_301337_e;
    gettimeofday(&tv_r_Filter_8_301337_s, 0);
    SW_Filter_TD_8418(tbl_SerializeFromObject_TD_9468_input, tbl_Filter_TD_8418_output);
    gettimeofday(&tv_r_Filter_8_301337_e, 0);

    struct timeval tv_r_JOIN_INNER_8_871473_s, tv_r_JOIN_INNER_8_871473_e;
    gettimeofday(&tv_r_JOIN_INNER_8_871473_s, 0);
    SW_JOIN_INNER_TD_8431(tbl_Union_TD_998_output, tbl_Filter_TD_9839_output, tbl_JOIN_INNER_TD_8431_output);
    gettimeofday(&tv_r_JOIN_INNER_8_871473_e, 0);

    struct timeval tv_r_Filter_8_764027_s, tv_r_Filter_8_764027_e;
    gettimeofday(&tv_r_Filter_8_764027_s, 0);
    SW_Filter_TD_8463(tbl_SerializeFromObject_TD_9641_input, tbl_Filter_TD_8463_output);
    gettimeofday(&tv_r_Filter_8_764027_e, 0);

    struct timeval tv_r_JOIN_INNER_8_527849_s, tv_r_JOIN_INNER_8_527849_e;
    gettimeofday(&tv_r_JOIN_INNER_8_527849_s, 0);
    SW_JOIN_INNER_TD_8413(tbl_Union_TD_9310_output, tbl_Filter_TD_9282_output, tbl_JOIN_INNER_TD_8413_output);
    gettimeofday(&tv_r_JOIN_INNER_8_527849_e, 0);

    struct timeval tv_r_JOIN_INNER_7_409377_s, tv_r_JOIN_INNER_7_409377_e;
    gettimeofday(&tv_r_JOIN_INNER_7_409377_s, 0);
    SW_JOIN_INNER_TD_7508(tbl_JOIN_INNER_TD_8763_output, tbl_Filter_TD_8537_output, tbl_JOIN_INNER_TD_7508_output);
    gettimeofday(&tv_r_JOIN_INNER_7_409377_e, 0);

    struct timeval tv_r_JOIN_INNER_7_81820_s, tv_r_JOIN_INNER_7_81820_e;
    gettimeofday(&tv_r_JOIN_INNER_7_81820_s, 0);
    SW_JOIN_INNER_TD_7484(tbl_JOIN_INNER_TD_8431_output, tbl_Filter_TD_8418_output, tbl_JOIN_INNER_TD_7484_output);
    gettimeofday(&tv_r_JOIN_INNER_7_81820_e, 0);

    struct timeval tv_r_JOIN_INNER_7_806046_s, tv_r_JOIN_INNER_7_806046_e;
    gettimeofday(&tv_r_JOIN_INNER_7_806046_s, 0);
    SW_JOIN_INNER_TD_7761(tbl_JOIN_INNER_TD_8413_output, tbl_Filter_TD_8463_output, tbl_JOIN_INNER_TD_7761_output);
    gettimeofday(&tv_r_JOIN_INNER_7_806046_e, 0);

    struct timeval tv_r_Aggregate_6_16193_s, tv_r_Aggregate_6_16193_e;
    gettimeofday(&tv_r_Aggregate_6_16193_s, 0);
    SW_Aggregate_TD_699(tbl_JOIN_INNER_TD_7508_output, tbl_Aggregate_TD_699_output);
    gettimeofday(&tv_r_Aggregate_6_16193_e, 0);

    struct timeval tv_r_Aggregate_6_966604_s, tv_r_Aggregate_6_966604_e;
    gettimeofday(&tv_r_Aggregate_6_966604_s, 0);
    SW_Aggregate_TD_6146(tbl_JOIN_INNER_TD_7484_output, tbl_Aggregate_TD_6146_output);
    gettimeofday(&tv_r_Aggregate_6_966604_e, 0);

    struct timeval tv_r_Aggregate_6_93155_s, tv_r_Aggregate_6_93155_e;
    gettimeofday(&tv_r_Aggregate_6_93155_s, 0);
    SW_Aggregate_TD_684(tbl_JOIN_INNER_TD_7761_output, tbl_Aggregate_TD_684_output);
    gettimeofday(&tv_r_Aggregate_6_93155_e, 0);

    struct timeval tv_r_Union_5_839187_s, tv_r_Union_5_839187_e;
    gettimeofday(&tv_r_Union_5_839187_s, 0);
    SW_Union_TD_5582(tbl_Aggregate_TD_684_output, tbl_Aggregate_TD_6146_output, tbl_Aggregate_TD_699_output, tbl_Union_TD_5582_output);
    gettimeofday(&tv_r_Union_5_839187_e, 0);

    struct timeval tv_r_Expand_4_162226_s, tv_r_Expand_4_162226_e;
    gettimeofday(&tv_r_Expand_4_162226_s, 0);
    SW_Expand_TD_4218(tbl_Union_TD_5582_output, tbl_Expand_TD_4218_output);
    gettimeofday(&tv_r_Expand_4_162226_e, 0);

    struct timeval tv_r_Aggregate_3_100033_s, tv_r_Aggregate_3_100033_e;
    gettimeofday(&tv_r_Aggregate_3_100033_s, 0);
    SW_Aggregate_TD_3140(tbl_Expand_TD_4218_output, tbl_Aggregate_TD_3140_output);
    gettimeofday(&tv_r_Aggregate_3_100033_e, 0);

    struct timeval tv_r_Sort_2_617638_s, tv_r_Sort_2_617638_e;
    gettimeofday(&tv_r_Sort_2_617638_s, 0);
    SW_Sort_TD_2158(tbl_Aggregate_TD_3140_output, tbl_Sort_TD_2158_output);
    gettimeofday(&tv_r_Sort_2_617638_e, 0);

    struct timeval tv_r_LocalLimit_1_927201_s, tv_r_LocalLimit_1_927201_e;
    gettimeofday(&tv_r_LocalLimit_1_927201_s, 0);
    SW_LocalLimit_TD_1187(tbl_Sort_TD_2158_output, tbl_LocalLimit_TD_1187_output);
    gettimeofday(&tv_r_LocalLimit_1_927201_e, 0);

    struct timeval tv_r_GlobalLimit_0_395117_s, tv_r_GlobalLimit_0_395117_e;
    gettimeofday(&tv_r_GlobalLimit_0_395117_s, 0);
    SW_GlobalLimit_TD_0329(tbl_LocalLimit_TD_1187_output, tbl_GlobalLimit_TD_0329_output);
    gettimeofday(&tv_r_GlobalLimit_0_395117_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_369033_s, &tv_r_Filter_12_369033_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13432_input: " << tbl_SerializeFromObject_TD_13432_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_246626_s, &tv_r_Filter_12_246626_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13941_input: " << tbl_SerializeFromObject_TD_13941_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_136693_s, &tv_r_JOIN_INNER_11_136693_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1291_output: " << tbl_Filter_TD_1291_output.getNumRow() << " " << "tbl_Filter_TD_12496_output: " << tbl_Filter_TD_12496_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_336491_s, &tv_r_Filter_11_336491_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1238_input: " << tbl_SerializeFromObject_TD_1238_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_611962_s, &tv_r_Filter_11_611962_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12345_input: " << tbl_SerializeFromObject_TD_12345_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_417617_s, &tv_r_Filter_11_417617_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12714_input: " << tbl_SerializeFromObject_TD_12714_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_855020_s, &tv_r_Filter_11_855020_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12203_input: " << tbl_SerializeFromObject_TD_12203_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_177286_s, &tv_r_Filter_11_177286_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12365_input: " << tbl_SerializeFromObject_TD_12365_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_863176_s, &tv_r_Project_10_863176_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11949_output: " << tbl_JOIN_INNER_TD_11949_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_645532_s, &tv_r_Project_10_645532_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11965_output: " << tbl_Filter_TD_11965_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_973519_s, &tv_r_Project_10_973519_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11540_output: " << tbl_Filter_TD_11540_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_18442_s, &tv_r_Project_10_18442_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11380_output: " << tbl_Filter_TD_11380_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_179494_s, &tv_r_Project_10_179494_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11665_output: " << tbl_Filter_TD_11665_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_852162_s, &tv_r_Project_10_852162_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11967_output: " << tbl_Filter_TD_11967_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_459549_s, &tv_r_Filter_9_459549_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10630_input: " << tbl_SerializeFromObject_TD_10630_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_224541_s, &tv_r_Union_9_224541_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10391_output: " << tbl_Project_TD_10391_output.getNumRow() << " " << "tbl_Project_TD_10487_output: " << tbl_Project_TD_10487_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_83209_s, &tv_r_Filter_9_83209_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10275_input: " << tbl_SerializeFromObject_TD_10275_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_507589_s, &tv_r_Union_9_507589_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10526_output: " << tbl_Project_TD_10526_output.getNumRow() << " " << "tbl_Project_TD_10306_output: " << tbl_Project_TD_10306_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_781829_s, &tv_r_Filter_9_781829_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10776_input: " << tbl_SerializeFromObject_TD_10776_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_169619_s, &tv_r_Union_9_169619_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10862_output: " << tbl_Project_TD_10862_output.getNumRow() << " " << "tbl_Project_TD_10240_output: " << tbl_Project_TD_10240_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_478607_s, &tv_r_Filter_8_478607_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9300_input: " << tbl_SerializeFromObject_TD_9300_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_104737_s, &tv_r_JOIN_INNER_8_104737_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9890_output: " << tbl_Union_TD_9890_output.getNumRow() << " " << "tbl_Filter_TD_9870_output: " << tbl_Filter_TD_9870_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_301337_s, &tv_r_Filter_8_301337_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9468_input: " << tbl_SerializeFromObject_TD_9468_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_871473_s, &tv_r_JOIN_INNER_8_871473_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_998_output: " << tbl_Union_TD_998_output.getNumRow() << " " << "tbl_Filter_TD_9839_output: " << tbl_Filter_TD_9839_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_764027_s, &tv_r_Filter_8_764027_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9641_input: " << tbl_SerializeFromObject_TD_9641_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_527849_s, &tv_r_JOIN_INNER_8_527849_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9310_output: " << tbl_Union_TD_9310_output.getNumRow() << " " << "tbl_Filter_TD_9282_output: " << tbl_Filter_TD_9282_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_409377_s, &tv_r_JOIN_INNER_7_409377_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8763_output: " << tbl_JOIN_INNER_TD_8763_output.getNumRow() << " " << "tbl_Filter_TD_8537_output: " << tbl_Filter_TD_8537_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_81820_s, &tv_r_JOIN_INNER_7_81820_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8431_output: " << tbl_JOIN_INNER_TD_8431_output.getNumRow() << " " << "tbl_Filter_TD_8418_output: " << tbl_Filter_TD_8418_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_806046_s, &tv_r_JOIN_INNER_7_806046_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8413_output: " << tbl_JOIN_INNER_TD_8413_output.getNumRow() << " " << "tbl_Filter_TD_8463_output: " << tbl_Filter_TD_8463_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_16193_s, &tv_r_Aggregate_6_16193_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7508_output: " << tbl_JOIN_INNER_TD_7508_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_966604_s, &tv_r_Aggregate_6_966604_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7484_output: " << tbl_JOIN_INNER_TD_7484_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_93155_s, &tv_r_Aggregate_6_93155_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7761_output: " << tbl_JOIN_INNER_TD_7761_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_5: " << tvdiff(&tv_r_Union_5_839187_s, &tv_r_Union_5_839187_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_684_output: " << tbl_Aggregate_TD_684_output.getNumRow() << " " << "tbl_Aggregate_TD_6146_output: " << tbl_Aggregate_TD_6146_output.getNumRow() << " " << "tbl_Aggregate_TD_699_output: " << tbl_Aggregate_TD_699_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_162226_s, &tv_r_Expand_4_162226_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_5582_output: " << tbl_Union_TD_5582_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_100033_s, &tv_r_Aggregate_3_100033_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4218_output: " << tbl_Expand_TD_4218_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_617638_s, &tv_r_Sort_2_617638_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3140_output: " << tbl_Aggregate_TD_3140_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_927201_s, &tv_r_LocalLimit_1_927201_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2158_output: " << tbl_Sort_TD_2158_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_395117_s, &tv_r_GlobalLimit_0_395117_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1187_output: " << tbl_LocalLimit_TD_1187_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.0315788 * 1000 << "ms" << std::endl; 
    return 0; 
}
