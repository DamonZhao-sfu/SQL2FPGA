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
    Table tbl_GlobalLimit_TD_08_output("tbl_GlobalLimit_TD_08_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_08_output.allocateHost();
    Table tbl_LocalLimit_TD_1179_output("tbl_LocalLimit_TD_1179_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1179_output.allocateHost();
    Table tbl_Sort_TD_2238_output("tbl_Sort_TD_2238_output", 6100000, 5, "");
    tbl_Sort_TD_2238_output.allocateHost();
    Table tbl_Aggregate_TD_3474_output("tbl_Aggregate_TD_3474_output", 6100000, 5, "");
    tbl_Aggregate_TD_3474_output.allocateHost();
    Table tbl_Expand_TD_4408_output("tbl_Expand_TD_4408_output", 6100000, 6, "");
    tbl_Expand_TD_4408_output.allocateHost();
    Table tbl_Union_TD_5348_output("tbl_Union_TD_5348_output", 6100000, 5, "");
    tbl_Union_TD_5348_output.allocateHost();
    Table tbl_Aggregate_TD_649_output("tbl_Aggregate_TD_649_output", 6100000, 5, "");
    tbl_Aggregate_TD_649_output.allocateHost();
    Table tbl_Aggregate_TD_6760_output("tbl_Aggregate_TD_6760_output", 6100000, 5, "");
    tbl_Aggregate_TD_6760_output.allocateHost();
    Table tbl_Aggregate_TD_6963_output("tbl_Aggregate_TD_6963_output", 6100000, 5, "");
    tbl_Aggregate_TD_6963_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7146_output("tbl_JOIN_INNER_TD_7146_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7146_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7149_output("tbl_JOIN_INNER_TD_7149_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7149_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7422_output("tbl_JOIN_INNER_TD_7422_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7422_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8151_output("tbl_JOIN_INNER_TD_8151_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8151_output.allocateHost();
    Table tbl_Filter_TD_8849_output("tbl_Filter_TD_8849_output", 6100000, 2, "");
    tbl_Filter_TD_8849_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8670_output("tbl_JOIN_INNER_TD_8670_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8670_output.allocateHost();
    Table tbl_Filter_TD_8371_output("tbl_Filter_TD_8371_output", 6100000, 2, "");
    tbl_Filter_TD_8371_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8846_output("tbl_JOIN_INNER_TD_8846_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8846_output.allocateHost();
    Table tbl_Filter_TD_8533_output("tbl_Filter_TD_8533_output", 6100000, 2, "");
    tbl_Filter_TD_8533_output.allocateHost();
    Table tbl_Union_TD_9307_output("tbl_Union_TD_9307_output", 6100000, 6, "");
    tbl_Union_TD_9307_output.allocateHost();
    Table tbl_Filter_TD_9483_output("tbl_Filter_TD_9483_output", 6100000, 1, "");
    tbl_Filter_TD_9483_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9811_input;
    tbl_SerializeFromObject_TD_9811_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9811_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9811_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9811_input.allocateHost();
    tbl_SerializeFromObject_TD_9811_input.loadHost();
    Table tbl_Union_TD_919_output("tbl_Union_TD_919_output", 6100000, 6, "");
    tbl_Union_TD_919_output.allocateHost();
    Table tbl_Filter_TD_914_output("tbl_Filter_TD_914_output", 6100000, 1, "");
    tbl_Filter_TD_914_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9211_input;
    tbl_SerializeFromObject_TD_9211_input = Table("catalog_page", catalog_page_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9211_input.addCol("cp_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_9211_input.addCol("cp_catalog_page_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9211_input.allocateHost();
    tbl_SerializeFromObject_TD_9211_input.loadHost();
    Table tbl_Union_TD_9321_output("tbl_Union_TD_9321_output", 6100000, 6, "");
    tbl_Union_TD_9321_output.allocateHost();
    Table tbl_Filter_TD_9457_output("tbl_Filter_TD_9457_output", 6100000, 1, "");
    tbl_Filter_TD_9457_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9408_input;
    tbl_SerializeFromObject_TD_9408_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9408_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_9408_input.addCol("web_site_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9408_input.allocateHost();
    tbl_SerializeFromObject_TD_9408_input.loadHost();
    Table tbl_Project_TD_1079_output("tbl_Project_TD_1079_output", 6100000, 6, "");
    tbl_Project_TD_1079_output.allocateHost();
    Table tbl_Project_TD_10859_output("tbl_Project_TD_10859_output", 6100000, 6, "");
    tbl_Project_TD_10859_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10904_input;
    tbl_SerializeFromObject_TD_10904_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10904_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10904_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10904_input.allocateHost();
    tbl_SerializeFromObject_TD_10904_input.loadHost();
    Table tbl_Project_TD_10989_output("tbl_Project_TD_10989_output", 6100000, 6, "");
    tbl_Project_TD_10989_output.allocateHost();
    Table tbl_Project_TD_10541_output("tbl_Project_TD_10541_output", 6100000, 6, "");
    tbl_Project_TD_10541_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10824_input;
    tbl_SerializeFromObject_TD_10824_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10824_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10824_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10824_input.allocateHost();
    tbl_SerializeFromObject_TD_10824_input.loadHost();
    Table tbl_Project_TD_10264_output("tbl_Project_TD_10264_output", 6100000, 6, "");
    tbl_Project_TD_10264_output.allocateHost();
    Table tbl_Project_TD_10339_output("tbl_Project_TD_10339_output", 6100000, 6, "");
    tbl_Project_TD_10339_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10667_input;
    tbl_SerializeFromObject_TD_10667_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10667_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10667_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10667_input.allocateHost();
    tbl_SerializeFromObject_TD_10667_input.loadHost();
    Table tbl_Filter_TD_11733_output("tbl_Filter_TD_11733_output", 6100000, 4, "");
    tbl_Filter_TD_11733_output.allocateHost();
    Table tbl_Filter_TD_11684_output("tbl_Filter_TD_11684_output", 6100000, 4, "");
    tbl_Filter_TD_11684_output.allocateHost();
    Table tbl_Filter_TD_11886_output("tbl_Filter_TD_11886_output", 6100000, 4, "");
    tbl_Filter_TD_11886_output.allocateHost();
    Table tbl_Filter_TD_11867_output("tbl_Filter_TD_11867_output", 6100000, 4, "");
    tbl_Filter_TD_11867_output.allocateHost();
    Table tbl_Filter_TD_11186_output("tbl_Filter_TD_11186_output", 6100000, 4, "");
    tbl_Filter_TD_11186_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11758_output("tbl_JOIN_INNER_TD_11758_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_11758_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12119_input;
    tbl_SerializeFromObject_TD_12119_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12119_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12119_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12119_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12119_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12119_input.allocateHost();
    tbl_SerializeFromObject_TD_12119_input.loadHost();
    Table tbl_SerializeFromObject_TD_12424_input;
    tbl_SerializeFromObject_TD_12424_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12424_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_12424_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12424_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_12424_input.addCol("sr_net_loss", 4);
    tbl_SerializeFromObject_TD_12424_input.allocateHost();
    tbl_SerializeFromObject_TD_12424_input.loadHost();
    Table tbl_SerializeFromObject_TD_12323_input;
    tbl_SerializeFromObject_TD_12323_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12323_input.addCol("cs_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_12323_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12323_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12323_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_12323_input.allocateHost();
    tbl_SerializeFromObject_TD_12323_input.loadHost();
    Table tbl_SerializeFromObject_TD_12502_input;
    tbl_SerializeFromObject_TD_12502_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12502_input.addCol("cr_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_12502_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12502_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_12502_input.addCol("cr_net_loss", 4);
    tbl_SerializeFromObject_TD_12502_input.allocateHost();
    tbl_SerializeFromObject_TD_12502_input.loadHost();
    Table tbl_SerializeFromObject_TD_12863_input;
    tbl_SerializeFromObject_TD_12863_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12863_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_12863_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12863_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12863_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_12863_input.allocateHost();
    tbl_SerializeFromObject_TD_12863_input.loadHost();
    Table tbl_Filter_TD_12594_output("tbl_Filter_TD_12594_output", 6100000, 5, "");
    tbl_Filter_TD_12594_output.allocateHost();
    Table tbl_Filter_TD_12192_output("tbl_Filter_TD_12192_output", 6100000, 3, "");
    tbl_Filter_TD_12192_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13958_input;
    tbl_SerializeFromObject_TD_13958_input = Table("web_returns", web_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13958_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_13958_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_13958_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_13958_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_13958_input.addCol("wr_net_loss", 4);
    tbl_SerializeFromObject_TD_13958_input.allocateHost();
    tbl_SerializeFromObject_TD_13958_input.loadHost();
    Table tbl_SerializeFromObject_TD_13215_input;
    tbl_SerializeFromObject_TD_13215_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13215_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13215_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_13215_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_13215_input.allocateHost();
    tbl_SerializeFromObject_TD_13215_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_285794_s, tv_r_Filter_12_285794_e;
    gettimeofday(&tv_r_Filter_12_285794_s, 0);
    SW_Filter_TD_12192(tbl_SerializeFromObject_TD_13215_input, tbl_Filter_TD_12192_output);
    gettimeofday(&tv_r_Filter_12_285794_e, 0);

    struct timeval tv_r_Filter_12_593786_s, tv_r_Filter_12_593786_e;
    gettimeofday(&tv_r_Filter_12_593786_s, 0);
    SW_Filter_TD_12594(tbl_SerializeFromObject_TD_13958_input, tbl_Filter_TD_12594_output);
    gettimeofday(&tv_r_Filter_12_593786_e, 0);

    struct timeval tv_r_JOIN_INNER_11_357386_s, tv_r_JOIN_INNER_11_357386_e;
    gettimeofday(&tv_r_JOIN_INNER_11_357386_s, 0);
    SW_JOIN_INNER_TD_11758(tbl_Filter_TD_12594_output, tbl_Filter_TD_12192_output, tbl_JOIN_INNER_TD_11758_output);
    gettimeofday(&tv_r_JOIN_INNER_11_357386_e, 0);

    struct timeval tv_r_Filter_11_275750_s, tv_r_Filter_11_275750_e;
    gettimeofday(&tv_r_Filter_11_275750_s, 0);
    SW_Filter_TD_11186(tbl_SerializeFromObject_TD_12863_input, tbl_Filter_TD_11186_output);
    gettimeofday(&tv_r_Filter_11_275750_e, 0);

    struct timeval tv_r_Filter_11_804721_s, tv_r_Filter_11_804721_e;
    gettimeofday(&tv_r_Filter_11_804721_s, 0);
    SW_Filter_TD_11867(tbl_SerializeFromObject_TD_12502_input, tbl_Filter_TD_11867_output);
    gettimeofday(&tv_r_Filter_11_804721_e, 0);

    struct timeval tv_r_Filter_11_6234_s, tv_r_Filter_11_6234_e;
    gettimeofday(&tv_r_Filter_11_6234_s, 0);
    SW_Filter_TD_11886(tbl_SerializeFromObject_TD_12323_input, tbl_Filter_TD_11886_output);
    gettimeofday(&tv_r_Filter_11_6234_e, 0);

    struct timeval tv_r_Filter_11_165163_s, tv_r_Filter_11_165163_e;
    gettimeofday(&tv_r_Filter_11_165163_s, 0);
    SW_Filter_TD_11684(tbl_SerializeFromObject_TD_12424_input, tbl_Filter_TD_11684_output);
    gettimeofday(&tv_r_Filter_11_165163_e, 0);

    struct timeval tv_r_Filter_11_4230_s, tv_r_Filter_11_4230_e;
    gettimeofday(&tv_r_Filter_11_4230_s, 0);
    SW_Filter_TD_11733(tbl_SerializeFromObject_TD_12119_input, tbl_Filter_TD_11733_output);
    gettimeofday(&tv_r_Filter_11_4230_e, 0);

    struct timeval tv_r_Project_10_451388_s, tv_r_Project_10_451388_e;
    gettimeofday(&tv_r_Project_10_451388_s, 0);
    SW_Project_TD_10339(tbl_JOIN_INNER_TD_11758_output, tbl_Project_TD_10339_output);
    gettimeofday(&tv_r_Project_10_451388_e, 0);

    struct timeval tv_r_Project_10_244726_s, tv_r_Project_10_244726_e;
    gettimeofday(&tv_r_Project_10_244726_s, 0);
    SW_Project_TD_10264(tbl_Filter_TD_11186_output, tbl_Project_TD_10264_output);
    gettimeofday(&tv_r_Project_10_244726_e, 0);

    struct timeval tv_r_Project_10_922252_s, tv_r_Project_10_922252_e;
    gettimeofday(&tv_r_Project_10_922252_s, 0);
    SW_Project_TD_10541(tbl_Filter_TD_11867_output, tbl_Project_TD_10541_output);
    gettimeofday(&tv_r_Project_10_922252_e, 0);

    struct timeval tv_r_Project_10_677319_s, tv_r_Project_10_677319_e;
    gettimeofday(&tv_r_Project_10_677319_s, 0);
    SW_Project_TD_10989(tbl_Filter_TD_11886_output, tbl_Project_TD_10989_output);
    gettimeofday(&tv_r_Project_10_677319_e, 0);

    struct timeval tv_r_Project_10_628819_s, tv_r_Project_10_628819_e;
    gettimeofday(&tv_r_Project_10_628819_s, 0);
    SW_Project_TD_10859(tbl_Filter_TD_11684_output, tbl_Project_TD_10859_output);
    gettimeofday(&tv_r_Project_10_628819_e, 0);

    struct timeval tv_r_Project_10_721870_s, tv_r_Project_10_721870_e;
    gettimeofday(&tv_r_Project_10_721870_s, 0);
    SW_Project_TD_1079(tbl_Filter_TD_11733_output, tbl_Project_TD_1079_output);
    gettimeofday(&tv_r_Project_10_721870_e, 0);

    struct timeval tv_r_Filter_9_593792_s, tv_r_Filter_9_593792_e;
    gettimeofday(&tv_r_Filter_9_593792_s, 0);
    SW_Filter_TD_9457(tbl_SerializeFromObject_TD_10667_input, tbl_Filter_TD_9457_output);
    gettimeofday(&tv_r_Filter_9_593792_e, 0);

    struct timeval tv_r_Union_9_392414_s, tv_r_Union_9_392414_e;
    gettimeofday(&tv_r_Union_9_392414_s, 0);
    SW_Union_TD_9321(tbl_Project_TD_10264_output, tbl_Project_TD_10339_output, tbl_Union_TD_9321_output);
    gettimeofday(&tv_r_Union_9_392414_e, 0);

    struct timeval tv_r_Filter_9_613610_s, tv_r_Filter_9_613610_e;
    gettimeofday(&tv_r_Filter_9_613610_s, 0);
    SW_Filter_TD_914(tbl_SerializeFromObject_TD_10824_input, tbl_Filter_TD_914_output);
    gettimeofday(&tv_r_Filter_9_613610_e, 0);

    struct timeval tv_r_Union_9_732582_s, tv_r_Union_9_732582_e;
    gettimeofday(&tv_r_Union_9_732582_s, 0);
    SW_Union_TD_919(tbl_Project_TD_10989_output, tbl_Project_TD_10541_output, tbl_Union_TD_919_output);
    gettimeofday(&tv_r_Union_9_732582_e, 0);

    struct timeval tv_r_Filter_9_822903_s, tv_r_Filter_9_822903_e;
    gettimeofday(&tv_r_Filter_9_822903_s, 0);
    SW_Filter_TD_9483(tbl_SerializeFromObject_TD_10904_input, tbl_Filter_TD_9483_output);
    gettimeofday(&tv_r_Filter_9_822903_e, 0);

    struct timeval tv_r_Union_9_16919_s, tv_r_Union_9_16919_e;
    gettimeofday(&tv_r_Union_9_16919_s, 0);
    SW_Union_TD_9307(tbl_Project_TD_1079_output, tbl_Project_TD_10859_output, tbl_Union_TD_9307_output);
    gettimeofday(&tv_r_Union_9_16919_e, 0);

    struct timeval tv_r_Filter_8_567126_s, tv_r_Filter_8_567126_e;
    gettimeofday(&tv_r_Filter_8_567126_s, 0);
    SW_Filter_TD_8533(tbl_SerializeFromObject_TD_9408_input, tbl_Filter_TD_8533_output);
    gettimeofday(&tv_r_Filter_8_567126_e, 0);

    struct timeval tv_r_JOIN_INNER_8_131150_s, tv_r_JOIN_INNER_8_131150_e;
    gettimeofday(&tv_r_JOIN_INNER_8_131150_s, 0);
    SW_JOIN_INNER_TD_8846(tbl_Union_TD_9321_output, tbl_Filter_TD_9457_output, tbl_JOIN_INNER_TD_8846_output);
    gettimeofday(&tv_r_JOIN_INNER_8_131150_e, 0);

    struct timeval tv_r_Filter_8_132801_s, tv_r_Filter_8_132801_e;
    gettimeofday(&tv_r_Filter_8_132801_s, 0);
    SW_Filter_TD_8371(tbl_SerializeFromObject_TD_9211_input, tbl_Filter_TD_8371_output);
    gettimeofday(&tv_r_Filter_8_132801_e, 0);

    struct timeval tv_r_JOIN_INNER_8_286442_s, tv_r_JOIN_INNER_8_286442_e;
    gettimeofday(&tv_r_JOIN_INNER_8_286442_s, 0);
    SW_JOIN_INNER_TD_8670(tbl_Union_TD_919_output, tbl_Filter_TD_914_output, tbl_JOIN_INNER_TD_8670_output);
    gettimeofday(&tv_r_JOIN_INNER_8_286442_e, 0);

    struct timeval tv_r_Filter_8_375763_s, tv_r_Filter_8_375763_e;
    gettimeofday(&tv_r_Filter_8_375763_s, 0);
    SW_Filter_TD_8849(tbl_SerializeFromObject_TD_9811_input, tbl_Filter_TD_8849_output);
    gettimeofday(&tv_r_Filter_8_375763_e, 0);

    struct timeval tv_r_JOIN_INNER_8_450317_s, tv_r_JOIN_INNER_8_450317_e;
    gettimeofday(&tv_r_JOIN_INNER_8_450317_s, 0);
    SW_JOIN_INNER_TD_8151(tbl_Union_TD_9307_output, tbl_Filter_TD_9483_output, tbl_JOIN_INNER_TD_8151_output);
    gettimeofday(&tv_r_JOIN_INNER_8_450317_e, 0);

    struct timeval tv_r_JOIN_INNER_7_99055_s, tv_r_JOIN_INNER_7_99055_e;
    gettimeofday(&tv_r_JOIN_INNER_7_99055_s, 0);
    SW_JOIN_INNER_TD_7422(tbl_JOIN_INNER_TD_8846_output, tbl_Filter_TD_8533_output, tbl_JOIN_INNER_TD_7422_output);
    gettimeofday(&tv_r_JOIN_INNER_7_99055_e, 0);

    struct timeval tv_r_JOIN_INNER_7_297974_s, tv_r_JOIN_INNER_7_297974_e;
    gettimeofday(&tv_r_JOIN_INNER_7_297974_s, 0);
    SW_JOIN_INNER_TD_7149(tbl_JOIN_INNER_TD_8670_output, tbl_Filter_TD_8371_output, tbl_JOIN_INNER_TD_7149_output);
    gettimeofday(&tv_r_JOIN_INNER_7_297974_e, 0);

    struct timeval tv_r_JOIN_INNER_7_454593_s, tv_r_JOIN_INNER_7_454593_e;
    gettimeofday(&tv_r_JOIN_INNER_7_454593_s, 0);
    SW_JOIN_INNER_TD_7146(tbl_JOIN_INNER_TD_8151_output, tbl_Filter_TD_8849_output, tbl_JOIN_INNER_TD_7146_output);
    gettimeofday(&tv_r_JOIN_INNER_7_454593_e, 0);

    struct timeval tv_r_Aggregate_6_328234_s, tv_r_Aggregate_6_328234_e;
    gettimeofday(&tv_r_Aggregate_6_328234_s, 0);
    SW_Aggregate_TD_6963(tbl_JOIN_INNER_TD_7422_output, tbl_Aggregate_TD_6963_output);
    gettimeofday(&tv_r_Aggregate_6_328234_e, 0);

    struct timeval tv_r_Aggregate_6_123802_s, tv_r_Aggregate_6_123802_e;
    gettimeofday(&tv_r_Aggregate_6_123802_s, 0);
    SW_Aggregate_TD_6760(tbl_JOIN_INNER_TD_7149_output, tbl_Aggregate_TD_6760_output);
    gettimeofday(&tv_r_Aggregate_6_123802_e, 0);

    struct timeval tv_r_Aggregate_6_170589_s, tv_r_Aggregate_6_170589_e;
    gettimeofday(&tv_r_Aggregate_6_170589_s, 0);
    SW_Aggregate_TD_649(tbl_JOIN_INNER_TD_7146_output, tbl_Aggregate_TD_649_output);
    gettimeofday(&tv_r_Aggregate_6_170589_e, 0);

    struct timeval tv_r_Union_5_390064_s, tv_r_Union_5_390064_e;
    gettimeofday(&tv_r_Union_5_390064_s, 0);
    SW_Union_TD_5348(tbl_Aggregate_TD_649_output, tbl_Aggregate_TD_6760_output, tbl_Aggregate_TD_6963_output, tbl_Union_TD_5348_output);
    gettimeofday(&tv_r_Union_5_390064_e, 0);

    struct timeval tv_r_Expand_4_885078_s, tv_r_Expand_4_885078_e;
    gettimeofday(&tv_r_Expand_4_885078_s, 0);
    SW_Expand_TD_4408(tbl_Union_TD_5348_output, tbl_Expand_TD_4408_output);
    gettimeofday(&tv_r_Expand_4_885078_e, 0);

    struct timeval tv_r_Aggregate_3_172093_s, tv_r_Aggregate_3_172093_e;
    gettimeofday(&tv_r_Aggregate_3_172093_s, 0);
    SW_Aggregate_TD_3474(tbl_Expand_TD_4408_output, tbl_Aggregate_TD_3474_output);
    gettimeofday(&tv_r_Aggregate_3_172093_e, 0);

    struct timeval tv_r_Sort_2_331963_s, tv_r_Sort_2_331963_e;
    gettimeofday(&tv_r_Sort_2_331963_s, 0);
    SW_Sort_TD_2238(tbl_Aggregate_TD_3474_output, tbl_Sort_TD_2238_output);
    gettimeofday(&tv_r_Sort_2_331963_e, 0);

    struct timeval tv_r_LocalLimit_1_94736_s, tv_r_LocalLimit_1_94736_e;
    gettimeofday(&tv_r_LocalLimit_1_94736_s, 0);
    SW_LocalLimit_TD_1179(tbl_Sort_TD_2238_output, tbl_LocalLimit_TD_1179_output);
    gettimeofday(&tv_r_LocalLimit_1_94736_e, 0);

    struct timeval tv_r_GlobalLimit_0_72057_s, tv_r_GlobalLimit_0_72057_e;
    gettimeofday(&tv_r_GlobalLimit_0_72057_s, 0);
    SW_GlobalLimit_TD_08(tbl_LocalLimit_TD_1179_output, tbl_GlobalLimit_TD_08_output);
    gettimeofday(&tv_r_GlobalLimit_0_72057_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_285794_s, &tv_r_Filter_12_285794_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13215_input: " << tbl_SerializeFromObject_TD_13215_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_593786_s, &tv_r_Filter_12_593786_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13958_input: " << tbl_SerializeFromObject_TD_13958_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_357386_s, &tv_r_JOIN_INNER_11_357386_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12594_output: " << tbl_Filter_TD_12594_output.getNumRow() << " " << "tbl_Filter_TD_12192_output: " << tbl_Filter_TD_12192_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_275750_s, &tv_r_Filter_11_275750_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12863_input: " << tbl_SerializeFromObject_TD_12863_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_804721_s, &tv_r_Filter_11_804721_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12502_input: " << tbl_SerializeFromObject_TD_12502_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_6234_s, &tv_r_Filter_11_6234_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12323_input: " << tbl_SerializeFromObject_TD_12323_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_165163_s, &tv_r_Filter_11_165163_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12424_input: " << tbl_SerializeFromObject_TD_12424_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_4230_s, &tv_r_Filter_11_4230_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12119_input: " << tbl_SerializeFromObject_TD_12119_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_451388_s, &tv_r_Project_10_451388_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11758_output: " << tbl_JOIN_INNER_TD_11758_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_244726_s, &tv_r_Project_10_244726_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11186_output: " << tbl_Filter_TD_11186_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_922252_s, &tv_r_Project_10_922252_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11867_output: " << tbl_Filter_TD_11867_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_677319_s, &tv_r_Project_10_677319_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11886_output: " << tbl_Filter_TD_11886_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_628819_s, &tv_r_Project_10_628819_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11684_output: " << tbl_Filter_TD_11684_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_721870_s, &tv_r_Project_10_721870_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11733_output: " << tbl_Filter_TD_11733_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_593792_s, &tv_r_Filter_9_593792_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10667_input: " << tbl_SerializeFromObject_TD_10667_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_392414_s, &tv_r_Union_9_392414_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10264_output: " << tbl_Project_TD_10264_output.getNumRow() << " " << "tbl_Project_TD_10339_output: " << tbl_Project_TD_10339_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_613610_s, &tv_r_Filter_9_613610_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10824_input: " << tbl_SerializeFromObject_TD_10824_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_732582_s, &tv_r_Union_9_732582_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10989_output: " << tbl_Project_TD_10989_output.getNumRow() << " " << "tbl_Project_TD_10541_output: " << tbl_Project_TD_10541_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_822903_s, &tv_r_Filter_9_822903_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10904_input: " << tbl_SerializeFromObject_TD_10904_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_9: " << tvdiff(&tv_r_Union_9_16919_s, &tv_r_Union_9_16919_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1079_output: " << tbl_Project_TD_1079_output.getNumRow() << " " << "tbl_Project_TD_10859_output: " << tbl_Project_TD_10859_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_567126_s, &tv_r_Filter_8_567126_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9408_input: " << tbl_SerializeFromObject_TD_9408_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_131150_s, &tv_r_JOIN_INNER_8_131150_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9321_output: " << tbl_Union_TD_9321_output.getNumRow() << " " << "tbl_Filter_TD_9457_output: " << tbl_Filter_TD_9457_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_132801_s, &tv_r_Filter_8_132801_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9211_input: " << tbl_SerializeFromObject_TD_9211_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_286442_s, &tv_r_JOIN_INNER_8_286442_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_919_output: " << tbl_Union_TD_919_output.getNumRow() << " " << "tbl_Filter_TD_914_output: " << tbl_Filter_TD_914_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_375763_s, &tv_r_Filter_8_375763_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9811_input: " << tbl_SerializeFromObject_TD_9811_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_450317_s, &tv_r_JOIN_INNER_8_450317_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_9307_output: " << tbl_Union_TD_9307_output.getNumRow() << " " << "tbl_Filter_TD_9483_output: " << tbl_Filter_TD_9483_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_99055_s, &tv_r_JOIN_INNER_7_99055_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8846_output: " << tbl_JOIN_INNER_TD_8846_output.getNumRow() << " " << "tbl_Filter_TD_8533_output: " << tbl_Filter_TD_8533_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_297974_s, &tv_r_JOIN_INNER_7_297974_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8670_output: " << tbl_JOIN_INNER_TD_8670_output.getNumRow() << " " << "tbl_Filter_TD_8371_output: " << tbl_Filter_TD_8371_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_454593_s, &tv_r_JOIN_INNER_7_454593_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8151_output: " << tbl_JOIN_INNER_TD_8151_output.getNumRow() << " " << "tbl_Filter_TD_8849_output: " << tbl_Filter_TD_8849_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_328234_s, &tv_r_Aggregate_6_328234_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7422_output: " << tbl_JOIN_INNER_TD_7422_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_123802_s, &tv_r_Aggregate_6_123802_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7149_output: " << tbl_JOIN_INNER_TD_7149_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_170589_s, &tv_r_Aggregate_6_170589_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7146_output: " << tbl_JOIN_INNER_TD_7146_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_5: " << tvdiff(&tv_r_Union_5_390064_s, &tv_r_Union_5_390064_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_649_output: " << tbl_Aggregate_TD_649_output.getNumRow() << " " << "tbl_Aggregate_TD_6760_output: " << tbl_Aggregate_TD_6760_output.getNumRow() << " " << "tbl_Aggregate_TD_6963_output: " << tbl_Aggregate_TD_6963_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_885078_s, &tv_r_Expand_4_885078_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_5348_output: " << tbl_Union_TD_5348_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_172093_s, &tv_r_Aggregate_3_172093_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4408_output: " << tbl_Expand_TD_4408_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_331963_s, &tv_r_Sort_2_331963_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3474_output: " << tbl_Aggregate_TD_3474_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_94736_s, &tv_r_LocalLimit_1_94736_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2238_output: " << tbl_Sort_TD_2238_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_72057_s, &tv_r_GlobalLimit_0_72057_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1179_output: " << tbl_LocalLimit_TD_1179_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.2468412 * 1000 << "ms" << std::endl; 
    return 0; 
}
