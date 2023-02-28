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
    Table tbl_GlobalLimit_TD_0310628_output("tbl_GlobalLimit_TD_0310628_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0310628_output.allocateHost();
    Table tbl_LocalLimit_TD_1490524_output("tbl_LocalLimit_TD_1490524_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1490524_output.allocateHost();
    Table tbl_Sort_TD_2824057_output("tbl_Sort_TD_2824057_output", 6100000, 5, "");
    tbl_Sort_TD_2824057_output.allocateHost();
    Table tbl_Aggregate_TD_3995729_output("tbl_Aggregate_TD_3995729_output", 6100000, 5, "");
    tbl_Aggregate_TD_3995729_output.allocateHost();
    Table tbl_Expand_TD_4572228_output("tbl_Expand_TD_4572228_output", 6100000, 6, "");
    tbl_Expand_TD_4572228_output.allocateHost();
    Table tbl_Union_TD_5633386_output("tbl_Union_TD_5633386_output", 6100000, 5, "");
    tbl_Union_TD_5633386_output.allocateHost();
    Table tbl_Project_TD_6116365_output("tbl_Project_TD_6116365_output", 6100000, 5, "");
    tbl_Project_TD_6116365_output.allocateHost();
    Table tbl_Project_TD_6956181_output("tbl_Project_TD_6956181_output", 6100000, 5, "");
    tbl_Project_TD_6956181_output.allocateHost();
    Table tbl_Project_TD_6288007_output("tbl_Project_TD_6288007_output", 6100000, 5, "");
    tbl_Project_TD_6288007_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_7963559_output("tbl_JOIN_LEFTOUTER_TD_7963559_output", 6100000, 5, "");
    tbl_JOIN_LEFTOUTER_TD_7963559_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_7354027_output("tbl_JOIN_CROSS_TD_7354027_output", 6100000, 5, "");
    tbl_JOIN_CROSS_TD_7354027_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_7182339_output("tbl_JOIN_LEFTOUTER_TD_7182339_output", 6100000, 5, "");
    tbl_JOIN_LEFTOUTER_TD_7182339_output.allocateHost();
    Table tbl_Aggregate_TD_8266797_output("tbl_Aggregate_TD_8266797_output", 6100000, 3, "");
    tbl_Aggregate_TD_8266797_output.allocateHost();
    Table tbl_Aggregate_TD_8163500_output("tbl_Aggregate_TD_8163500_output", 6100000, 3, "");
    tbl_Aggregate_TD_8163500_output.allocateHost();
    Table tbl_Aggregate_TD_8629408_output("tbl_Aggregate_TD_8629408_output", 6100000, 3, "");
    tbl_Aggregate_TD_8629408_output.allocateHost();
    Table tbl_Aggregate_TD_824008_output("tbl_Aggregate_TD_824008_output", 6100000, 2, "");
    tbl_Aggregate_TD_824008_output.allocateHost();
    Table tbl_Aggregate_TD_845339_output("tbl_Aggregate_TD_845339_output", 6100000, 3, "");
    tbl_Aggregate_TD_845339_output.allocateHost();
    Table tbl_Aggregate_TD_8699995_output("tbl_Aggregate_TD_8699995_output", 6100000, 3, "");
    tbl_Aggregate_TD_8699995_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9581032_output("tbl_JOIN_INNER_TD_9581032_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9581032_output.allocateHost();
    Table tbl_JOIN_INNER_TD_97289_output("tbl_JOIN_INNER_TD_97289_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_97289_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9360037_output("tbl_JOIN_INNER_TD_9360037_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9360037_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9321756_output("tbl_JOIN_INNER_TD_9321756_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9321756_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9143848_output("tbl_JOIN_INNER_TD_9143848_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9143848_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9902581_output("tbl_JOIN_INNER_TD_9902581_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9902581_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10149163_output("tbl_JOIN_INNER_TD_10149163_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10149163_output.allocateHost();
    Table tbl_Filter_TD_1077998_output("tbl_Filter_TD_1077998_output", 6100000, 1, "");
    tbl_Filter_TD_1077998_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10914634_output("tbl_JOIN_INNER_TD_10914634_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10914634_output.allocateHost();
    Table tbl_Filter_TD_10411018_output("tbl_Filter_TD_10411018_output", 6100000, 1, "");
    tbl_Filter_TD_10411018_output.allocateHost();
    Table tbl_Filter_TD_10351614_output("tbl_Filter_TD_10351614_output", 6100000, 4, "");
    tbl_Filter_TD_10351614_output.allocateHost();
    Table tbl_Filter_TD_10890291_output("tbl_Filter_TD_10890291_output", 6100000, 1, "");
    tbl_Filter_TD_10890291_output.allocateHost();
    Table tbl_Filter_TD_10172532_output("tbl_Filter_TD_10172532_output", 6100000, 4, "");
    tbl_Filter_TD_10172532_output.allocateHost();
    Table tbl_Filter_TD_10996134_output("tbl_Filter_TD_10996134_output", 6100000, 1, "");
    tbl_Filter_TD_10996134_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10868964_output("tbl_JOIN_INNER_TD_10868964_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10868964_output.allocateHost();
    Table tbl_Filter_TD_10643877_output("tbl_Filter_TD_10643877_output", 6100000, 1, "");
    tbl_Filter_TD_10643877_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10521058_output("tbl_JOIN_INNER_TD_10521058_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10521058_output.allocateHost();
    Table tbl_Filter_TD_10259758_output("tbl_Filter_TD_10259758_output", 6100000, 1, "");
    tbl_Filter_TD_10259758_output.allocateHost();
    Table tbl_Filter_TD_11718135_output("tbl_Filter_TD_11718135_output", 6100000, 4, "");
    tbl_Filter_TD_11718135_output.allocateHost();
    Table tbl_Filter_TD_11935863_output("tbl_Filter_TD_11935863_output", 6100000, 1, "");
    tbl_Filter_TD_11935863_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11844590_input;
    tbl_SerializeFromObject_TD_11844590_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_11844590_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_11844590_input.allocateHost();
    tbl_SerializeFromObject_TD_11844590_input.loadHost();
    Table tbl_Filter_TD_11107844_output("tbl_Filter_TD_11107844_output", 6100000, 4, "");
    tbl_Filter_TD_11107844_output.allocateHost();
    Table tbl_Filter_TD_11372712_output("tbl_Filter_TD_11372712_output", 6100000, 1, "");
    tbl_Filter_TD_11372712_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11996293_input;
    tbl_SerializeFromObject_TD_11996293_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_11996293_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_11996293_input.allocateHost();
    tbl_SerializeFromObject_TD_11996293_input.loadHost();
    Table tbl_SerializeFromObject_TD_11204257_input;
    tbl_SerializeFromObject_TD_11204257_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11204257_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11204257_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_11204257_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11204257_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_11204257_input.allocateHost();
    tbl_SerializeFromObject_TD_11204257_input.loadHost();
    Table tbl_SerializeFromObject_TD_11487734_input;
    tbl_SerializeFromObject_TD_11487734_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11487734_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11487734_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11487734_input.allocateHost();
    tbl_SerializeFromObject_TD_11487734_input.loadHost();
    Table tbl_SerializeFromObject_TD_11533116_input;
    tbl_SerializeFromObject_TD_11533116_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11533116_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_11533116_input.addCol("cr_call_center_sk", 4);
    tbl_SerializeFromObject_TD_11533116_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_11533116_input.addCol("cr_net_loss", 4);
    tbl_SerializeFromObject_TD_11533116_input.allocateHost();
    tbl_SerializeFromObject_TD_11533116_input.loadHost();
    Table tbl_SerializeFromObject_TD_1130358_input;
    tbl_SerializeFromObject_TD_1130358_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1130358_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1130358_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_1130358_input.allocateHost();
    tbl_SerializeFromObject_TD_1130358_input.loadHost();
    Table tbl_Filter_TD_11457199_output("tbl_Filter_TD_11457199_output", 6100000, 4, "");
    tbl_Filter_TD_11457199_output.allocateHost();
    Table tbl_Filter_TD_11118267_output("tbl_Filter_TD_11118267_output", 6100000, 1, "");
    tbl_Filter_TD_11118267_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11901338_input;
    tbl_SerializeFromObject_TD_11901338_input = Table("web_page", web_page_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_11901338_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_11901338_input.allocateHost();
    tbl_SerializeFromObject_TD_11901338_input.loadHost();
    Table tbl_Filter_TD_11494145_output("tbl_Filter_TD_11494145_output", 6100000, 4, "");
    tbl_Filter_TD_11494145_output.allocateHost();
    Table tbl_Filter_TD_11528910_output("tbl_Filter_TD_11528910_output", 6100000, 1, "");
    tbl_Filter_TD_11528910_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11883666_input;
    tbl_SerializeFromObject_TD_11883666_input = Table("web_page", web_page_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_11883666_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_11883666_input.allocateHost();
    tbl_SerializeFromObject_TD_11883666_input.loadHost();
    Table tbl_SerializeFromObject_TD_12303208_input;
    tbl_SerializeFromObject_TD_12303208_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12303208_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12303208_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12303208_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_12303208_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12303208_input.allocateHost();
    tbl_SerializeFromObject_TD_12303208_input.loadHost();
    Table tbl_SerializeFromObject_TD_12536393_input;
    tbl_SerializeFromObject_TD_12536393_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12536393_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12536393_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12536393_input.allocateHost();
    tbl_SerializeFromObject_TD_12536393_input.loadHost();
    Table tbl_SerializeFromObject_TD_12885142_input;
    tbl_SerializeFromObject_TD_12885142_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12885142_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12885142_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_12885142_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_12885142_input.addCol("sr_net_loss", 4);
    tbl_SerializeFromObject_TD_12885142_input.allocateHost();
    tbl_SerializeFromObject_TD_12885142_input.loadHost();
    Table tbl_SerializeFromObject_TD_12467270_input;
    tbl_SerializeFromObject_TD_12467270_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12467270_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12467270_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12467270_input.allocateHost();
    tbl_SerializeFromObject_TD_12467270_input.loadHost();
    Table tbl_SerializeFromObject_TD_1237886_input;
    tbl_SerializeFromObject_TD_1237886_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1237886_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1237886_input.addCol("ws_web_page_sk", 4);
    tbl_SerializeFromObject_TD_1237886_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1237886_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_1237886_input.allocateHost();
    tbl_SerializeFromObject_TD_1237886_input.loadHost();
    Table tbl_SerializeFromObject_TD_12588298_input;
    tbl_SerializeFromObject_TD_12588298_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12588298_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12588298_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12588298_input.allocateHost();
    tbl_SerializeFromObject_TD_12588298_input.loadHost();
    Table tbl_SerializeFromObject_TD_12981049_input;
    tbl_SerializeFromObject_TD_12981049_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12981049_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12981049_input.addCol("wr_web_page_sk", 4);
    tbl_SerializeFromObject_TD_12981049_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_12981049_input.addCol("wr_net_loss", 4);
    tbl_SerializeFromObject_TD_12981049_input.allocateHost();
    tbl_SerializeFromObject_TD_12981049_input.loadHost();
    Table tbl_SerializeFromObject_TD_12621132_input;
    tbl_SerializeFromObject_TD_12621132_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12621132_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12621132_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12621132_input.allocateHost();
    tbl_SerializeFromObject_TD_12621132_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_719831_s, tv_r_Filter_11_719831_e;
    gettimeofday(&tv_r_Filter_11_719831_s, 0);
    SW_Filter_TD_11528910(tbl_SerializeFromObject_TD_12621132_input, tbl_Filter_TD_11528910_output);
    gettimeofday(&tv_r_Filter_11_719831_e, 0);

    struct timeval tv_r_Filter_11_482479_s, tv_r_Filter_11_482479_e;
    gettimeofday(&tv_r_Filter_11_482479_s, 0);
    SW_Filter_TD_11494145(tbl_SerializeFromObject_TD_12981049_input, tbl_Filter_TD_11494145_output);
    gettimeofday(&tv_r_Filter_11_482479_e, 0);

    struct timeval tv_r_Filter_11_83612_s, tv_r_Filter_11_83612_e;
    gettimeofday(&tv_r_Filter_11_83612_s, 0);
    SW_Filter_TD_11118267(tbl_SerializeFromObject_TD_12588298_input, tbl_Filter_TD_11118267_output);
    gettimeofday(&tv_r_Filter_11_83612_e, 0);

    struct timeval tv_r_Filter_11_821454_s, tv_r_Filter_11_821454_e;
    gettimeofday(&tv_r_Filter_11_821454_s, 0);
    SW_Filter_TD_11457199(tbl_SerializeFromObject_TD_1237886_input, tbl_Filter_TD_11457199_output);
    gettimeofday(&tv_r_Filter_11_821454_e, 0);

    struct timeval tv_r_Filter_11_863396_s, tv_r_Filter_11_863396_e;
    gettimeofday(&tv_r_Filter_11_863396_s, 0);
    SW_Filter_TD_11372712(tbl_SerializeFromObject_TD_12467270_input, tbl_Filter_TD_11372712_output);
    gettimeofday(&tv_r_Filter_11_863396_e, 0);

    struct timeval tv_r_Filter_11_248722_s, tv_r_Filter_11_248722_e;
    gettimeofday(&tv_r_Filter_11_248722_s, 0);
    SW_Filter_TD_11107844(tbl_SerializeFromObject_TD_12885142_input, tbl_Filter_TD_11107844_output);
    gettimeofday(&tv_r_Filter_11_248722_e, 0);

    struct timeval tv_r_Filter_11_247637_s, tv_r_Filter_11_247637_e;
    gettimeofday(&tv_r_Filter_11_247637_s, 0);
    SW_Filter_TD_11935863(tbl_SerializeFromObject_TD_12536393_input, tbl_Filter_TD_11935863_output);
    gettimeofday(&tv_r_Filter_11_247637_e, 0);

    struct timeval tv_r_Filter_11_685551_s, tv_r_Filter_11_685551_e;
    gettimeofday(&tv_r_Filter_11_685551_s, 0);
    SW_Filter_TD_11718135(tbl_SerializeFromObject_TD_12303208_input, tbl_Filter_TD_11718135_output);
    gettimeofday(&tv_r_Filter_11_685551_e, 0);

    struct timeval tv_r_Filter_10_389320_s, tv_r_Filter_10_389320_e;
    gettimeofday(&tv_r_Filter_10_389320_s, 0);
    SW_Filter_TD_10259758(tbl_SerializeFromObject_TD_11883666_input, tbl_Filter_TD_10259758_output);
    gettimeofday(&tv_r_Filter_10_389320_e, 0);

    struct timeval tv_r_JOIN_INNER_10_246180_s, tv_r_JOIN_INNER_10_246180_e;
    gettimeofday(&tv_r_JOIN_INNER_10_246180_s, 0);
    SW_JOIN_INNER_TD_10521058(tbl_Filter_TD_11494145_output, tbl_Filter_TD_11528910_output, tbl_JOIN_INNER_TD_10521058_output);
    gettimeofday(&tv_r_JOIN_INNER_10_246180_e, 0);

    struct timeval tv_r_Filter_10_971097_s, tv_r_Filter_10_971097_e;
    gettimeofday(&tv_r_Filter_10_971097_s, 0);
    SW_Filter_TD_10643877(tbl_SerializeFromObject_TD_11901338_input, tbl_Filter_TD_10643877_output);
    gettimeofday(&tv_r_Filter_10_971097_e, 0);

    struct timeval tv_r_JOIN_INNER_10_861303_s, tv_r_JOIN_INNER_10_861303_e;
    gettimeofday(&tv_r_JOIN_INNER_10_861303_s, 0);
    SW_JOIN_INNER_TD_10868964(tbl_Filter_TD_11457199_output, tbl_Filter_TD_11118267_output, tbl_JOIN_INNER_TD_10868964_output);
    gettimeofday(&tv_r_JOIN_INNER_10_861303_e, 0);

    struct timeval tv_r_Filter_10_552942_s, tv_r_Filter_10_552942_e;
    gettimeofday(&tv_r_Filter_10_552942_s, 0);
    SW_Filter_TD_10996134(tbl_SerializeFromObject_TD_1130358_input, tbl_Filter_TD_10996134_output);
    gettimeofday(&tv_r_Filter_10_552942_e, 0);

    struct timeval tv_r_Filter_10_393597_s, tv_r_Filter_10_393597_e;
    gettimeofday(&tv_r_Filter_10_393597_s, 0);
    SW_Filter_TD_10172532(tbl_SerializeFromObject_TD_11533116_input, tbl_Filter_TD_10172532_output);
    gettimeofday(&tv_r_Filter_10_393597_e, 0);

    struct timeval tv_r_Filter_10_587990_s, tv_r_Filter_10_587990_e;
    gettimeofday(&tv_r_Filter_10_587990_s, 0);
    SW_Filter_TD_10890291(tbl_SerializeFromObject_TD_11487734_input, tbl_Filter_TD_10890291_output);
    gettimeofday(&tv_r_Filter_10_587990_e, 0);

    struct timeval tv_r_Filter_10_788962_s, tv_r_Filter_10_788962_e;
    gettimeofday(&tv_r_Filter_10_788962_s, 0);
    SW_Filter_TD_10351614(tbl_SerializeFromObject_TD_11204257_input, tbl_Filter_TD_10351614_output);
    gettimeofday(&tv_r_Filter_10_788962_e, 0);

    struct timeval tv_r_Filter_10_442019_s, tv_r_Filter_10_442019_e;
    gettimeofday(&tv_r_Filter_10_442019_s, 0);
    SW_Filter_TD_10411018(tbl_SerializeFromObject_TD_11996293_input, tbl_Filter_TD_10411018_output);
    gettimeofday(&tv_r_Filter_10_442019_e, 0);

    struct timeval tv_r_JOIN_INNER_10_822944_s, tv_r_JOIN_INNER_10_822944_e;
    gettimeofday(&tv_r_JOIN_INNER_10_822944_s, 0);
    SW_JOIN_INNER_TD_10914634(tbl_Filter_TD_11107844_output, tbl_Filter_TD_11372712_output, tbl_JOIN_INNER_TD_10914634_output);
    gettimeofday(&tv_r_JOIN_INNER_10_822944_e, 0);

    struct timeval tv_r_Filter_10_903975_s, tv_r_Filter_10_903975_e;
    gettimeofday(&tv_r_Filter_10_903975_s, 0);
    SW_Filter_TD_1077998(tbl_SerializeFromObject_TD_11844590_input, tbl_Filter_TD_1077998_output);
    gettimeofday(&tv_r_Filter_10_903975_e, 0);

    struct timeval tv_r_JOIN_INNER_10_700898_s, tv_r_JOIN_INNER_10_700898_e;
    gettimeofday(&tv_r_JOIN_INNER_10_700898_s, 0);
    SW_JOIN_INNER_TD_10149163(tbl_Filter_TD_11718135_output, tbl_Filter_TD_11935863_output, tbl_JOIN_INNER_TD_10149163_output);
    gettimeofday(&tv_r_JOIN_INNER_10_700898_e, 0);

    struct timeval tv_r_JOIN_INNER_9_875829_s, tv_r_JOIN_INNER_9_875829_e;
    gettimeofday(&tv_r_JOIN_INNER_9_875829_s, 0);
    SW_JOIN_INNER_TD_9902581(tbl_JOIN_INNER_TD_10521058_output, tbl_Filter_TD_10259758_output, tbl_JOIN_INNER_TD_9902581_output);
    gettimeofday(&tv_r_JOIN_INNER_9_875829_e, 0);

    struct timeval tv_r_JOIN_INNER_9_871994_s, tv_r_JOIN_INNER_9_871994_e;
    gettimeofday(&tv_r_JOIN_INNER_9_871994_s, 0);
    SW_JOIN_INNER_TD_9143848(tbl_JOIN_INNER_TD_10868964_output, tbl_Filter_TD_10643877_output, tbl_JOIN_INNER_TD_9143848_output);
    gettimeofday(&tv_r_JOIN_INNER_9_871994_e, 0);

    struct timeval tv_r_JOIN_INNER_9_308871_s, tv_r_JOIN_INNER_9_308871_e;
    gettimeofday(&tv_r_JOIN_INNER_9_308871_s, 0);
    SW_JOIN_INNER_TD_9321756(tbl_Filter_TD_10172532_output, tbl_Filter_TD_10996134_output, tbl_JOIN_INNER_TD_9321756_output);
    gettimeofday(&tv_r_JOIN_INNER_9_308871_e, 0);

    struct timeval tv_r_JOIN_INNER_9_566507_s, tv_r_JOIN_INNER_9_566507_e;
    gettimeofday(&tv_r_JOIN_INNER_9_566507_s, 0);
    SW_JOIN_INNER_TD_9360037(tbl_Filter_TD_10351614_output, tbl_Filter_TD_10890291_output, tbl_JOIN_INNER_TD_9360037_output);
    gettimeofday(&tv_r_JOIN_INNER_9_566507_e, 0);

    struct timeval tv_r_JOIN_INNER_9_909558_s, tv_r_JOIN_INNER_9_909558_e;
    gettimeofday(&tv_r_JOIN_INNER_9_909558_s, 0);
    SW_JOIN_INNER_TD_97289(tbl_JOIN_INNER_TD_10914634_output, tbl_Filter_TD_10411018_output, tbl_JOIN_INNER_TD_97289_output);
    gettimeofday(&tv_r_JOIN_INNER_9_909558_e, 0);

    struct timeval tv_r_JOIN_INNER_9_516598_s, tv_r_JOIN_INNER_9_516598_e;
    gettimeofday(&tv_r_JOIN_INNER_9_516598_s, 0);
    SW_JOIN_INNER_TD_9581032(tbl_JOIN_INNER_TD_10149163_output, tbl_Filter_TD_1077998_output, tbl_JOIN_INNER_TD_9581032_output);
    gettimeofday(&tv_r_JOIN_INNER_9_516598_e, 0);

    struct timeval tv_r_Aggregate_8_721952_s, tv_r_Aggregate_8_721952_e;
    gettimeofday(&tv_r_Aggregate_8_721952_s, 0);
    SW_Aggregate_TD_8699995(tbl_JOIN_INNER_TD_9902581_output, tbl_Aggregate_TD_8699995_output);
    gettimeofday(&tv_r_Aggregate_8_721952_e, 0);

    struct timeval tv_r_Aggregate_8_940250_s, tv_r_Aggregate_8_940250_e;
    gettimeofday(&tv_r_Aggregate_8_940250_s, 0);
    SW_Aggregate_TD_845339(tbl_JOIN_INNER_TD_9143848_output, tbl_Aggregate_TD_845339_output);
    gettimeofday(&tv_r_Aggregate_8_940250_e, 0);

    struct timeval tv_r_Aggregate_8_657056_s, tv_r_Aggregate_8_657056_e;
    gettimeofday(&tv_r_Aggregate_8_657056_s, 0);
    SW_Aggregate_TD_824008(tbl_JOIN_INNER_TD_9321756_output, tbl_Aggregate_TD_824008_output);
    gettimeofday(&tv_r_Aggregate_8_657056_e, 0);

    struct timeval tv_r_Aggregate_8_488703_s, tv_r_Aggregate_8_488703_e;
    gettimeofday(&tv_r_Aggregate_8_488703_s, 0);
    SW_Aggregate_TD_8629408(tbl_JOIN_INNER_TD_9360037_output, tbl_Aggregate_TD_8629408_output);
    gettimeofday(&tv_r_Aggregate_8_488703_e, 0);

    struct timeval tv_r_Aggregate_8_584321_s, tv_r_Aggregate_8_584321_e;
    gettimeofday(&tv_r_Aggregate_8_584321_s, 0);
    SW_Aggregate_TD_8163500(tbl_JOIN_INNER_TD_97289_output, tbl_Aggregate_TD_8163500_output);
    gettimeofday(&tv_r_Aggregate_8_584321_e, 0);

    struct timeval tv_r_Aggregate_8_995267_s, tv_r_Aggregate_8_995267_e;
    gettimeofday(&tv_r_Aggregate_8_995267_s, 0);
    SW_Aggregate_TD_8266797(tbl_JOIN_INNER_TD_9581032_output, tbl_Aggregate_TD_8266797_output);
    gettimeofday(&tv_r_Aggregate_8_995267_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_7_967826_s, tv_r_JOIN_LEFTOUTER_7_967826_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_967826_s, 0);
    SW_JOIN_LEFTOUTER_TD_7182339(tbl_Aggregate_TD_845339_output, tbl_Aggregate_TD_8699995_output, tbl_JOIN_LEFTOUTER_TD_7182339_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_967826_e, 0);

    struct timeval tv_r_JOIN_CROSS_7_34899_s, tv_r_JOIN_CROSS_7_34899_e;
    gettimeofday(&tv_r_JOIN_CROSS_7_34899_s, 0);
    SW_JOIN_CROSS_TD_7354027(tbl_Aggregate_TD_8629408_output, tbl_Aggregate_TD_824008_output, tbl_JOIN_CROSS_TD_7354027_output);
    gettimeofday(&tv_r_JOIN_CROSS_7_34899_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_7_325551_s, tv_r_JOIN_LEFTOUTER_7_325551_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_325551_s, 0);
    SW_JOIN_LEFTOUTER_TD_7963559(tbl_Aggregate_TD_8266797_output, tbl_Aggregate_TD_8163500_output, tbl_JOIN_LEFTOUTER_TD_7963559_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_325551_e, 0);

    struct timeval tv_r_Project_6_251990_s, tv_r_Project_6_251990_e;
    gettimeofday(&tv_r_Project_6_251990_s, 0);
    SW_Project_TD_6288007(tbl_JOIN_LEFTOUTER_TD_7182339_output, tbl_Project_TD_6288007_output);
    gettimeofday(&tv_r_Project_6_251990_e, 0);

    struct timeval tv_r_Project_6_943929_s, tv_r_Project_6_943929_e;
    gettimeofday(&tv_r_Project_6_943929_s, 0);
    SW_Project_TD_6956181(tbl_JOIN_CROSS_TD_7354027_output, tbl_Project_TD_6956181_output);
    gettimeofday(&tv_r_Project_6_943929_e, 0);

    struct timeval tv_r_Project_6_203905_s, tv_r_Project_6_203905_e;
    gettimeofday(&tv_r_Project_6_203905_s, 0);
    SW_Project_TD_6116365(tbl_JOIN_LEFTOUTER_TD_7963559_output, tbl_Project_TD_6116365_output);
    gettimeofday(&tv_r_Project_6_203905_e, 0);

    struct timeval tv_r_Union_5_803410_s, tv_r_Union_5_803410_e;
    gettimeofday(&tv_r_Union_5_803410_s, 0);
    SW_Union_TD_5633386(tbl_Project_TD_6116365_output, tbl_Project_TD_6956181_output, tbl_Project_TD_6288007_output, tbl_Union_TD_5633386_output);
    gettimeofday(&tv_r_Union_5_803410_e, 0);

    struct timeval tv_r_Expand_4_786476_s, tv_r_Expand_4_786476_e;
    gettimeofday(&tv_r_Expand_4_786476_s, 0);
    SW_Expand_TD_4572228(tbl_Union_TD_5633386_output, tbl_Expand_TD_4572228_output);
    gettimeofday(&tv_r_Expand_4_786476_e, 0);

    struct timeval tv_r_Aggregate_3_329482_s, tv_r_Aggregate_3_329482_e;
    gettimeofday(&tv_r_Aggregate_3_329482_s, 0);
    SW_Aggregate_TD_3995729(tbl_Expand_TD_4572228_output, tbl_Aggregate_TD_3995729_output);
    gettimeofday(&tv_r_Aggregate_3_329482_e, 0);

    struct timeval tv_r_Sort_2_137855_s, tv_r_Sort_2_137855_e;
    gettimeofday(&tv_r_Sort_2_137855_s, 0);
    SW_Sort_TD_2824057(tbl_Aggregate_TD_3995729_output, tbl_Sort_TD_2824057_output);
    gettimeofday(&tv_r_Sort_2_137855_e, 0);

    struct timeval tv_r_LocalLimit_1_582928_s, tv_r_LocalLimit_1_582928_e;
    gettimeofday(&tv_r_LocalLimit_1_582928_s, 0);
    SW_LocalLimit_TD_1490524(tbl_Sort_TD_2824057_output, tbl_LocalLimit_TD_1490524_output);
    gettimeofday(&tv_r_LocalLimit_1_582928_e, 0);

    struct timeval tv_r_GlobalLimit_0_363764_s, tv_r_GlobalLimit_0_363764_e;
    gettimeofday(&tv_r_GlobalLimit_0_363764_s, 0);
    SW_GlobalLimit_TD_0310628(tbl_LocalLimit_TD_1490524_output, tbl_GlobalLimit_TD_0310628_output);
    gettimeofday(&tv_r_GlobalLimit_0_363764_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_719831_s, &tv_r_Filter_11_719831_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12621132_input: " << tbl_SerializeFromObject_TD_12621132_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_482479_s, &tv_r_Filter_11_482479_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12981049_input: " << tbl_SerializeFromObject_TD_12981049_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_83612_s, &tv_r_Filter_11_83612_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12588298_input: " << tbl_SerializeFromObject_TD_12588298_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_821454_s, &tv_r_Filter_11_821454_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1237886_input: " << tbl_SerializeFromObject_TD_1237886_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_863396_s, &tv_r_Filter_11_863396_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12467270_input: " << tbl_SerializeFromObject_TD_12467270_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_248722_s, &tv_r_Filter_11_248722_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12885142_input: " << tbl_SerializeFromObject_TD_12885142_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_247637_s, &tv_r_Filter_11_247637_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12536393_input: " << tbl_SerializeFromObject_TD_12536393_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_685551_s, &tv_r_Filter_11_685551_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12303208_input: " << tbl_SerializeFromObject_TD_12303208_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_389320_s, &tv_r_Filter_10_389320_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11883666_input: " << tbl_SerializeFromObject_TD_11883666_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_246180_s, &tv_r_JOIN_INNER_10_246180_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11494145_output: " << tbl_Filter_TD_11494145_output.getNumRow() << " " << "tbl_Filter_TD_11528910_output: " << tbl_Filter_TD_11528910_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_971097_s, &tv_r_Filter_10_971097_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11901338_input: " << tbl_SerializeFromObject_TD_11901338_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_861303_s, &tv_r_JOIN_INNER_10_861303_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11457199_output: " << tbl_Filter_TD_11457199_output.getNumRow() << " " << "tbl_Filter_TD_11118267_output: " << tbl_Filter_TD_11118267_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_552942_s, &tv_r_Filter_10_552942_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1130358_input: " << tbl_SerializeFromObject_TD_1130358_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_393597_s, &tv_r_Filter_10_393597_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11533116_input: " << tbl_SerializeFromObject_TD_11533116_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_587990_s, &tv_r_Filter_10_587990_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11487734_input: " << tbl_SerializeFromObject_TD_11487734_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_788962_s, &tv_r_Filter_10_788962_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11204257_input: " << tbl_SerializeFromObject_TD_11204257_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_442019_s, &tv_r_Filter_10_442019_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11996293_input: " << tbl_SerializeFromObject_TD_11996293_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_822944_s, &tv_r_JOIN_INNER_10_822944_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11107844_output: " << tbl_Filter_TD_11107844_output.getNumRow() << " " << "tbl_Filter_TD_11372712_output: " << tbl_Filter_TD_11372712_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_903975_s, &tv_r_Filter_10_903975_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11844590_input: " << tbl_SerializeFromObject_TD_11844590_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_700898_s, &tv_r_JOIN_INNER_10_700898_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11718135_output: " << tbl_Filter_TD_11718135_output.getNumRow() << " " << "tbl_Filter_TD_11935863_output: " << tbl_Filter_TD_11935863_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_875829_s, &tv_r_JOIN_INNER_9_875829_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10521058_output: " << tbl_JOIN_INNER_TD_10521058_output.getNumRow() << " " << "tbl_Filter_TD_10259758_output: " << tbl_Filter_TD_10259758_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_871994_s, &tv_r_JOIN_INNER_9_871994_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10868964_output: " << tbl_JOIN_INNER_TD_10868964_output.getNumRow() << " " << "tbl_Filter_TD_10643877_output: " << tbl_Filter_TD_10643877_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_308871_s, &tv_r_JOIN_INNER_9_308871_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10172532_output: " << tbl_Filter_TD_10172532_output.getNumRow() << " " << "tbl_Filter_TD_10996134_output: " << tbl_Filter_TD_10996134_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_566507_s, &tv_r_JOIN_INNER_9_566507_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10351614_output: " << tbl_Filter_TD_10351614_output.getNumRow() << " " << "tbl_Filter_TD_10890291_output: " << tbl_Filter_TD_10890291_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_909558_s, &tv_r_JOIN_INNER_9_909558_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10914634_output: " << tbl_JOIN_INNER_TD_10914634_output.getNumRow() << " " << "tbl_Filter_TD_10411018_output: " << tbl_Filter_TD_10411018_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_516598_s, &tv_r_JOIN_INNER_9_516598_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10149163_output: " << tbl_JOIN_INNER_TD_10149163_output.getNumRow() << " " << "tbl_Filter_TD_1077998_output: " << tbl_Filter_TD_1077998_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_721952_s, &tv_r_Aggregate_8_721952_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9902581_output: " << tbl_JOIN_INNER_TD_9902581_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_940250_s, &tv_r_Aggregate_8_940250_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9143848_output: " << tbl_JOIN_INNER_TD_9143848_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_657056_s, &tv_r_Aggregate_8_657056_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9321756_output: " << tbl_JOIN_INNER_TD_9321756_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_488703_s, &tv_r_Aggregate_8_488703_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9360037_output: " << tbl_JOIN_INNER_TD_9360037_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_584321_s, &tv_r_Aggregate_8_584321_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_97289_output: " << tbl_JOIN_INNER_TD_97289_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_995267_s, &tv_r_Aggregate_8_995267_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9581032_output: " << tbl_JOIN_INNER_TD_9581032_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_7: " << tvdiff(&tv_r_JOIN_LEFTOUTER_7_967826_s, &tv_r_JOIN_LEFTOUTER_7_967826_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_845339_output: " << tbl_Aggregate_TD_845339_output.getNumRow() << " " << "tbl_Aggregate_TD_8699995_output: " << tbl_Aggregate_TD_8699995_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_7: " << tvdiff(&tv_r_JOIN_CROSS_7_34899_s, &tv_r_JOIN_CROSS_7_34899_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8629408_output: " << tbl_Aggregate_TD_8629408_output.getNumRow() << " " << "tbl_Aggregate_TD_824008_output: " << tbl_Aggregate_TD_824008_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_7: " << tvdiff(&tv_r_JOIN_LEFTOUTER_7_325551_s, &tv_r_JOIN_LEFTOUTER_7_325551_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8266797_output: " << tbl_Aggregate_TD_8266797_output.getNumRow() << " " << "tbl_Aggregate_TD_8163500_output: " << tbl_Aggregate_TD_8163500_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_251990_s, &tv_r_Project_6_251990_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_7182339_output: " << tbl_JOIN_LEFTOUTER_TD_7182339_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_943929_s, &tv_r_Project_6_943929_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_7354027_output: " << tbl_JOIN_CROSS_TD_7354027_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_203905_s, &tv_r_Project_6_203905_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_7963559_output: " << tbl_JOIN_LEFTOUTER_TD_7963559_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_5: " << tvdiff(&tv_r_Union_5_803410_s, &tv_r_Union_5_803410_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6116365_output: " << tbl_Project_TD_6116365_output.getNumRow() << " " << "tbl_Project_TD_6956181_output: " << tbl_Project_TD_6956181_output.getNumRow() << " " << "tbl_Project_TD_6288007_output: " << tbl_Project_TD_6288007_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_786476_s, &tv_r_Expand_4_786476_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_5633386_output: " << tbl_Union_TD_5633386_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_329482_s, &tv_r_Aggregate_3_329482_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4572228_output: " << tbl_Expand_TD_4572228_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_137855_s, &tv_r_Sort_2_137855_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3995729_output: " << tbl_Aggregate_TD_3995729_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_582928_s, &tv_r_LocalLimit_1_582928_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2824057_output: " << tbl_Sort_TD_2824057_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_363764_s, &tv_r_GlobalLimit_0_363764_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1490524_output: " << tbl_LocalLimit_TD_1490524_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.8440845 * 1000 << "ms" << std::endl; 
    return 0; 
}
