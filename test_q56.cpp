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

#include "cfgFunc_q56.hpp" 
#include "q56.hpp" 

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
    std::cout << "NOTE:running query #56\n."; 
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
    Table tbl_GlobalLimit_TD_0357_output("tbl_GlobalLimit_TD_0357_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0357_output.allocateHost();
    Table tbl_LocalLimit_TD_1160_output("tbl_LocalLimit_TD_1160_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1160_output.allocateHost();
    Table tbl_Sort_TD_2325_output("tbl_Sort_TD_2325_output", 6100000, 2, "");
    tbl_Sort_TD_2325_output.allocateHost();
    Table tbl_Aggregate_TD_3457_output("tbl_Aggregate_TD_3457_output", 6100000, 2, "");
    tbl_Aggregate_TD_3457_output.allocateHost();
    Table tbl_Union_TD_4316_output("tbl_Union_TD_4316_output", 6100000, 2, "");
    tbl_Union_TD_4316_output.allocateHost();
    Table tbl_Aggregate_TD_5946_output("tbl_Aggregate_TD_5946_output", 6100000, 2, "");
    tbl_Aggregate_TD_5946_output.allocateHost();
    Table tbl_Aggregate_TD_5579_output("tbl_Aggregate_TD_5579_output", 6100000, 2, "");
    tbl_Aggregate_TD_5579_output.allocateHost();
    Table tbl_Aggregate_TD_5244_output("tbl_Aggregate_TD_5244_output", 6100000, 2, "");
    tbl_Aggregate_TD_5244_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6287_output("tbl_JOIN_INNER_TD_6287_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6287_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6151_output("tbl_JOIN_INNER_TD_6151_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6151_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6222_output("tbl_JOIN_INNER_TD_6222_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6222_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7613_output("tbl_JOIN_INNER_TD_7613_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7613_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7832_output("tbl_JOIN_LEFTSEMI_TD_7832_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7832_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7792_output("tbl_JOIN_INNER_TD_7792_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7792_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7271_output("tbl_JOIN_LEFTSEMI_TD_7271_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7271_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7327_output("tbl_JOIN_INNER_TD_7327_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7327_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7189_output("tbl_JOIN_LEFTSEMI_TD_7189_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7189_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8890_output("tbl_JOIN_INNER_TD_8890_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8890_output.allocateHost();
    Table tbl_Filter_TD_8400_output("tbl_Filter_TD_8400_output", 6100000, 1, "");
    tbl_Filter_TD_8400_output.allocateHost();
    Table tbl_Filter_TD_8590_output("tbl_Filter_TD_8590_output", 6100000, 2, "");
    tbl_Filter_TD_8590_output.allocateHost();
    Table tbl_Filter_TD_8692_output("tbl_Filter_TD_8692_output", 6100000, 1, "");
    tbl_Filter_TD_8692_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8495_output("tbl_JOIN_INNER_TD_8495_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8495_output.allocateHost();
    Table tbl_Filter_TD_8597_output("tbl_Filter_TD_8597_output", 6100000, 1, "");
    tbl_Filter_TD_8597_output.allocateHost();
    Table tbl_Filter_TD_8587_output("tbl_Filter_TD_8587_output", 6100000, 2, "");
    tbl_Filter_TD_8587_output.allocateHost();
    Table tbl_Filter_TD_8724_output("tbl_Filter_TD_8724_output", 6100000, 1, "");
    tbl_Filter_TD_8724_output.allocateHost();
    Table tbl_JOIN_INNER_TD_856_output("tbl_JOIN_INNER_TD_856_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_856_output.allocateHost();
    Table tbl_Filter_TD_8903_output("tbl_Filter_TD_8903_output", 6100000, 1, "");
    tbl_Filter_TD_8903_output.allocateHost();
    Table tbl_Filter_TD_8376_output("tbl_Filter_TD_8376_output", 6100000, 2, "");
    tbl_Filter_TD_8376_output.allocateHost();
    Table tbl_Filter_TD_854_output("tbl_Filter_TD_854_output", 6100000, 1, "");
    tbl_Filter_TD_854_output.allocateHost();
    Table tbl_Filter_TD_9450_output("tbl_Filter_TD_9450_output", 6100000, 4, "");
    tbl_Filter_TD_9450_output.allocateHost();
    Table tbl_Filter_TD_939_output("tbl_Filter_TD_939_output", 6100000, 1, "");
    tbl_Filter_TD_939_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9153_input;
    tbl_SerializeFromObject_TD_9153_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9153_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9153_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9153_input.allocateHost();
    tbl_SerializeFromObject_TD_9153_input.loadHost();
    Table tbl_SerializeFromObject_TD_921_input;
    tbl_SerializeFromObject_TD_921_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_921_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_921_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_921_input.allocateHost();
    tbl_SerializeFromObject_TD_921_input.loadHost();
    Table tbl_SerializeFromObject_TD_9422_input;
    tbl_SerializeFromObject_TD_9422_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9422_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9422_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9422_input.allocateHost();
    tbl_SerializeFromObject_TD_9422_input.loadHost();
    Table tbl_Filter_TD_9313_output("tbl_Filter_TD_9313_output", 6100000, 4, "");
    tbl_Filter_TD_9313_output.allocateHost();
    Table tbl_Filter_TD_9446_output("tbl_Filter_TD_9446_output", 6100000, 1, "");
    tbl_Filter_TD_9446_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9125_input;
    tbl_SerializeFromObject_TD_9125_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9125_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9125_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9125_input.allocateHost();
    tbl_SerializeFromObject_TD_9125_input.loadHost();
    Table tbl_SerializeFromObject_TD_947_input;
    tbl_SerializeFromObject_TD_947_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_947_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_947_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_947_input.allocateHost();
    tbl_SerializeFromObject_TD_947_input.loadHost();
    Table tbl_SerializeFromObject_TD_9672_input;
    tbl_SerializeFromObject_TD_9672_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9672_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9672_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9672_input.allocateHost();
    tbl_SerializeFromObject_TD_9672_input.loadHost();
    Table tbl_Filter_TD_9657_output("tbl_Filter_TD_9657_output", 6100000, 4, "");
    tbl_Filter_TD_9657_output.allocateHost();
    Table tbl_Filter_TD_9134_output("tbl_Filter_TD_9134_output", 6100000, 1, "");
    tbl_Filter_TD_9134_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9134_input;
    tbl_SerializeFromObject_TD_9134_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9134_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9134_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9134_input.allocateHost();
    tbl_SerializeFromObject_TD_9134_input.loadHost();
    Table tbl_SerializeFromObject_TD_9673_input;
    tbl_SerializeFromObject_TD_9673_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9673_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9673_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9673_input.allocateHost();
    tbl_SerializeFromObject_TD_9673_input.loadHost();
    Table tbl_SerializeFromObject_TD_9646_input;
    tbl_SerializeFromObject_TD_9646_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9646_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9646_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9646_input.allocateHost();
    tbl_SerializeFromObject_TD_9646_input.loadHost();
    Table tbl_SerializeFromObject_TD_10300_input;
    tbl_SerializeFromObject_TD_10300_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10300_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10300_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10300_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_10300_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10300_input.allocateHost();
    tbl_SerializeFromObject_TD_10300_input.loadHost();
    Table tbl_SerializeFromObject_TD_10381_input;
    tbl_SerializeFromObject_TD_10381_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10381_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10381_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10381_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10381_input.allocateHost();
    tbl_SerializeFromObject_TD_10381_input.loadHost();
    Table tbl_SerializeFromObject_TD_10137_input;
    tbl_SerializeFromObject_TD_10137_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10137_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10137_input.addCol("cs_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10137_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_10137_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10137_input.allocateHost();
    tbl_SerializeFromObject_TD_10137_input.loadHost();
    Table tbl_SerializeFromObject_TD_10866_input;
    tbl_SerializeFromObject_TD_10866_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10866_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10866_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10866_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10866_input.allocateHost();
    tbl_SerializeFromObject_TD_10866_input.loadHost();
    Table tbl_SerializeFromObject_TD_10713_input;
    tbl_SerializeFromObject_TD_10713_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10713_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10713_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_10713_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10713_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10713_input.allocateHost();
    tbl_SerializeFromObject_TD_10713_input.loadHost();
    Table tbl_SerializeFromObject_TD_10190_input;
    tbl_SerializeFromObject_TD_10190_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10190_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10190_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10190_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10190_input.allocateHost();
    tbl_SerializeFromObject_TD_10190_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_862561_s, tv_r_Filter_9_862561_e;
    gettimeofday(&tv_r_Filter_9_862561_s, 0);
    SW_Filter_TD_9134(tbl_SerializeFromObject_TD_10190_input, tbl_Filter_TD_9134_output);
    gettimeofday(&tv_r_Filter_9_862561_e, 0);

    struct timeval tv_r_Filter_9_252506_s, tv_r_Filter_9_252506_e;
    gettimeofday(&tv_r_Filter_9_252506_s, 0);
    SW_Filter_TD_9657(tbl_SerializeFromObject_TD_10713_input, tbl_Filter_TD_9657_output);
    gettimeofday(&tv_r_Filter_9_252506_e, 0);

    struct timeval tv_r_Filter_9_276844_s, tv_r_Filter_9_276844_e;
    gettimeofday(&tv_r_Filter_9_276844_s, 0);
    SW_Filter_TD_9446(tbl_SerializeFromObject_TD_10866_input, tbl_Filter_TD_9446_output);
    gettimeofday(&tv_r_Filter_9_276844_e, 0);

    struct timeval tv_r_Filter_9_362378_s, tv_r_Filter_9_362378_e;
    gettimeofday(&tv_r_Filter_9_362378_s, 0);
    SW_Filter_TD_9313(tbl_SerializeFromObject_TD_10137_input, tbl_Filter_TD_9313_output);
    gettimeofday(&tv_r_Filter_9_362378_e, 0);

    struct timeval tv_r_Filter_9_538382_s, tv_r_Filter_9_538382_e;
    gettimeofday(&tv_r_Filter_9_538382_s, 0);
    SW_Filter_TD_939(tbl_SerializeFromObject_TD_10381_input, tbl_Filter_TD_939_output);
    gettimeofday(&tv_r_Filter_9_538382_e, 0);

    struct timeval tv_r_Filter_9_777911_s, tv_r_Filter_9_777911_e;
    gettimeofday(&tv_r_Filter_9_777911_s, 0);
    SW_Filter_TD_9450(tbl_SerializeFromObject_TD_10300_input, tbl_Filter_TD_9450_output);
    gettimeofday(&tv_r_Filter_9_777911_e, 0);

    struct timeval tv_r_Filter_8_555547_s, tv_r_Filter_8_555547_e;
    gettimeofday(&tv_r_Filter_8_555547_s, 0);
    SW_Filter_TD_854(tbl_SerializeFromObject_TD_9646_input, tbl_Filter_TD_854_output);
    gettimeofday(&tv_r_Filter_8_555547_e, 0);

    struct timeval tv_r_Filter_8_529503_s, tv_r_Filter_8_529503_e;
    gettimeofday(&tv_r_Filter_8_529503_s, 0);
    SW_Filter_TD_8376(tbl_SerializeFromObject_TD_9673_input, tbl_Filter_TD_8376_output);
    gettimeofday(&tv_r_Filter_8_529503_e, 0);

    struct timeval tv_r_Filter_8_421329_s, tv_r_Filter_8_421329_e;
    gettimeofday(&tv_r_Filter_8_421329_s, 0);
    SW_Filter_TD_8903(tbl_SerializeFromObject_TD_9134_input, tbl_Filter_TD_8903_output);
    gettimeofday(&tv_r_Filter_8_421329_e, 0);

    struct timeval tv_r_JOIN_INNER_8_32969_s, tv_r_JOIN_INNER_8_32969_e;
    gettimeofday(&tv_r_JOIN_INNER_8_32969_s, 0);
    SW_JOIN_INNER_TD_856(tbl_Filter_TD_9657_output, tbl_Filter_TD_9134_output, tbl_JOIN_INNER_TD_856_output);
    gettimeofday(&tv_r_JOIN_INNER_8_32969_e, 0);

    struct timeval tv_r_Filter_8_996281_s, tv_r_Filter_8_996281_e;
    gettimeofday(&tv_r_Filter_8_996281_s, 0);
    SW_Filter_TD_8724(tbl_SerializeFromObject_TD_9672_input, tbl_Filter_TD_8724_output);
    gettimeofday(&tv_r_Filter_8_996281_e, 0);

    struct timeval tv_r_Filter_8_835811_s, tv_r_Filter_8_835811_e;
    gettimeofday(&tv_r_Filter_8_835811_s, 0);
    SW_Filter_TD_8587(tbl_SerializeFromObject_TD_947_input, tbl_Filter_TD_8587_output);
    gettimeofday(&tv_r_Filter_8_835811_e, 0);

    struct timeval tv_r_Filter_8_882945_s, tv_r_Filter_8_882945_e;
    gettimeofday(&tv_r_Filter_8_882945_s, 0);
    SW_Filter_TD_8597(tbl_SerializeFromObject_TD_9125_input, tbl_Filter_TD_8597_output);
    gettimeofday(&tv_r_Filter_8_882945_e, 0);

    struct timeval tv_r_JOIN_INNER_8_325364_s, tv_r_JOIN_INNER_8_325364_e;
    gettimeofday(&tv_r_JOIN_INNER_8_325364_s, 0);
    SW_JOIN_INNER_TD_8495(tbl_Filter_TD_9313_output, tbl_Filter_TD_9446_output, tbl_JOIN_INNER_TD_8495_output);
    gettimeofday(&tv_r_JOIN_INNER_8_325364_e, 0);

    struct timeval tv_r_Filter_8_446078_s, tv_r_Filter_8_446078_e;
    gettimeofday(&tv_r_Filter_8_446078_s, 0);
    SW_Filter_TD_8692(tbl_SerializeFromObject_TD_9422_input, tbl_Filter_TD_8692_output);
    gettimeofday(&tv_r_Filter_8_446078_e, 0);

    struct timeval tv_r_Filter_8_403079_s, tv_r_Filter_8_403079_e;
    gettimeofday(&tv_r_Filter_8_403079_s, 0);
    SW_Filter_TD_8590(tbl_SerializeFromObject_TD_921_input, tbl_Filter_TD_8590_output);
    gettimeofday(&tv_r_Filter_8_403079_e, 0);

    struct timeval tv_r_Filter_8_891926_s, tv_r_Filter_8_891926_e;
    gettimeofday(&tv_r_Filter_8_891926_s, 0);
    SW_Filter_TD_8400(tbl_SerializeFromObject_TD_9153_input, tbl_Filter_TD_8400_output);
    gettimeofday(&tv_r_Filter_8_891926_e, 0);

    struct timeval tv_r_JOIN_INNER_8_58356_s, tv_r_JOIN_INNER_8_58356_e;
    gettimeofday(&tv_r_JOIN_INNER_8_58356_s, 0);
    SW_JOIN_INNER_TD_8890(tbl_Filter_TD_9450_output, tbl_Filter_TD_939_output, tbl_JOIN_INNER_TD_8890_output);
    gettimeofday(&tv_r_JOIN_INNER_8_58356_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_998633_s, tv_r_JOIN_LEFTSEMI_7_998633_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_998633_s, 0);
    SW_JOIN_LEFTSEMI_TD_7189(tbl_Filter_TD_8376_output, tbl_Filter_TD_854_output, tbl_JOIN_LEFTSEMI_TD_7189_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_998633_e, 0);

    struct timeval tv_r_JOIN_INNER_7_746403_s, tv_r_JOIN_INNER_7_746403_e;
    gettimeofday(&tv_r_JOIN_INNER_7_746403_s, 0);
    SW_JOIN_INNER_TD_7327(tbl_JOIN_INNER_TD_856_output, tbl_Filter_TD_8903_output, tbl_JOIN_INNER_TD_7327_output);
    gettimeofday(&tv_r_JOIN_INNER_7_746403_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_341913_s, tv_r_JOIN_LEFTSEMI_7_341913_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_341913_s, 0);
    SW_JOIN_LEFTSEMI_TD_7271(tbl_Filter_TD_8587_output, tbl_Filter_TD_8724_output, tbl_JOIN_LEFTSEMI_TD_7271_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_341913_e, 0);

    struct timeval tv_r_JOIN_INNER_7_796670_s, tv_r_JOIN_INNER_7_796670_e;
    gettimeofday(&tv_r_JOIN_INNER_7_796670_s, 0);
    SW_JOIN_INNER_TD_7792(tbl_JOIN_INNER_TD_8495_output, tbl_Filter_TD_8597_output, tbl_JOIN_INNER_TD_7792_output);
    gettimeofday(&tv_r_JOIN_INNER_7_796670_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_622070_s, tv_r_JOIN_LEFTSEMI_7_622070_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_622070_s, 0);
    SW_JOIN_LEFTSEMI_TD_7832(tbl_Filter_TD_8590_output, tbl_Filter_TD_8692_output, tbl_JOIN_LEFTSEMI_TD_7832_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_622070_e, 0);

    struct timeval tv_r_JOIN_INNER_7_665251_s, tv_r_JOIN_INNER_7_665251_e;
    gettimeofday(&tv_r_JOIN_INNER_7_665251_s, 0);
    SW_JOIN_INNER_TD_7613(tbl_JOIN_INNER_TD_8890_output, tbl_Filter_TD_8400_output, tbl_JOIN_INNER_TD_7613_output);
    gettimeofday(&tv_r_JOIN_INNER_7_665251_e, 0);

    struct timeval tv_r_JOIN_INNER_6_214954_s, tv_r_JOIN_INNER_6_214954_e;
    gettimeofday(&tv_r_JOIN_INNER_6_214954_s, 0);
    SW_JOIN_INNER_TD_6222(tbl_JOIN_INNER_TD_7327_output, tbl_JOIN_LEFTSEMI_TD_7189_output, tbl_JOIN_INNER_TD_6222_output);
    gettimeofday(&tv_r_JOIN_INNER_6_214954_e, 0);

    struct timeval tv_r_JOIN_INNER_6_113925_s, tv_r_JOIN_INNER_6_113925_e;
    gettimeofday(&tv_r_JOIN_INNER_6_113925_s, 0);
    SW_JOIN_INNER_TD_6151(tbl_JOIN_INNER_TD_7792_output, tbl_JOIN_LEFTSEMI_TD_7271_output, tbl_JOIN_INNER_TD_6151_output);
    gettimeofday(&tv_r_JOIN_INNER_6_113925_e, 0);

    struct timeval tv_r_JOIN_INNER_6_493499_s, tv_r_JOIN_INNER_6_493499_e;
    gettimeofday(&tv_r_JOIN_INNER_6_493499_s, 0);
    SW_JOIN_INNER_TD_6287(tbl_JOIN_INNER_TD_7613_output, tbl_JOIN_LEFTSEMI_TD_7832_output, tbl_JOIN_INNER_TD_6287_output);
    gettimeofday(&tv_r_JOIN_INNER_6_493499_e, 0);

    struct timeval tv_r_Aggregate_5_188190_s, tv_r_Aggregate_5_188190_e;
    gettimeofday(&tv_r_Aggregate_5_188190_s, 0);
    SW_Aggregate_TD_5244(tbl_JOIN_INNER_TD_6222_output, tbl_Aggregate_TD_5244_output);
    gettimeofday(&tv_r_Aggregate_5_188190_e, 0);

    struct timeval tv_r_Aggregate_5_242797_s, tv_r_Aggregate_5_242797_e;
    gettimeofday(&tv_r_Aggregate_5_242797_s, 0);
    SW_Aggregate_TD_5579(tbl_JOIN_INNER_TD_6151_output, tbl_Aggregate_TD_5579_output);
    gettimeofday(&tv_r_Aggregate_5_242797_e, 0);

    struct timeval tv_r_Aggregate_5_684632_s, tv_r_Aggregate_5_684632_e;
    gettimeofday(&tv_r_Aggregate_5_684632_s, 0);
    SW_Aggregate_TD_5946(tbl_JOIN_INNER_TD_6287_output, tbl_Aggregate_TD_5946_output);
    gettimeofday(&tv_r_Aggregate_5_684632_e, 0);

    struct timeval tv_r_Union_4_880613_s, tv_r_Union_4_880613_e;
    gettimeofday(&tv_r_Union_4_880613_s, 0);
    SW_Union_TD_4316(tbl_Aggregate_TD_5946_output, tbl_Aggregate_TD_5579_output, tbl_Aggregate_TD_5244_output, tbl_Union_TD_4316_output);
    gettimeofday(&tv_r_Union_4_880613_e, 0);

    struct timeval tv_r_Aggregate_3_818567_s, tv_r_Aggregate_3_818567_e;
    gettimeofday(&tv_r_Aggregate_3_818567_s, 0);
    SW_Aggregate_TD_3457(tbl_Union_TD_4316_output, tbl_Aggregate_TD_3457_output);
    gettimeofday(&tv_r_Aggregate_3_818567_e, 0);

    struct timeval tv_r_Sort_2_27602_s, tv_r_Sort_2_27602_e;
    gettimeofday(&tv_r_Sort_2_27602_s, 0);
    SW_Sort_TD_2325(tbl_Aggregate_TD_3457_output, tbl_Sort_TD_2325_output);
    gettimeofday(&tv_r_Sort_2_27602_e, 0);

    struct timeval tv_r_LocalLimit_1_97704_s, tv_r_LocalLimit_1_97704_e;
    gettimeofday(&tv_r_LocalLimit_1_97704_s, 0);
    SW_LocalLimit_TD_1160(tbl_Sort_TD_2325_output, tbl_LocalLimit_TD_1160_output);
    gettimeofday(&tv_r_LocalLimit_1_97704_e, 0);

    struct timeval tv_r_GlobalLimit_0_923977_s, tv_r_GlobalLimit_0_923977_e;
    gettimeofday(&tv_r_GlobalLimit_0_923977_s, 0);
    SW_GlobalLimit_TD_0357(tbl_LocalLimit_TD_1160_output, tbl_GlobalLimit_TD_0357_output);
    gettimeofday(&tv_r_GlobalLimit_0_923977_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_862561_s, &tv_r_Filter_9_862561_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10190_input: " << tbl_SerializeFromObject_TD_10190_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_252506_s, &tv_r_Filter_9_252506_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10713_input: " << tbl_SerializeFromObject_TD_10713_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_276844_s, &tv_r_Filter_9_276844_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10866_input: " << tbl_SerializeFromObject_TD_10866_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_362378_s, &tv_r_Filter_9_362378_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10137_input: " << tbl_SerializeFromObject_TD_10137_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_538382_s, &tv_r_Filter_9_538382_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10381_input: " << tbl_SerializeFromObject_TD_10381_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_777911_s, &tv_r_Filter_9_777911_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10300_input: " << tbl_SerializeFromObject_TD_10300_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_555547_s, &tv_r_Filter_8_555547_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9646_input: " << tbl_SerializeFromObject_TD_9646_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_529503_s, &tv_r_Filter_8_529503_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9673_input: " << tbl_SerializeFromObject_TD_9673_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_421329_s, &tv_r_Filter_8_421329_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9134_input: " << tbl_SerializeFromObject_TD_9134_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_32969_s, &tv_r_JOIN_INNER_8_32969_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9657_output: " << tbl_Filter_TD_9657_output.getNumRow() << " " << "tbl_Filter_TD_9134_output: " << tbl_Filter_TD_9134_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_996281_s, &tv_r_Filter_8_996281_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9672_input: " << tbl_SerializeFromObject_TD_9672_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_835811_s, &tv_r_Filter_8_835811_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_947_input: " << tbl_SerializeFromObject_TD_947_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_882945_s, &tv_r_Filter_8_882945_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9125_input: " << tbl_SerializeFromObject_TD_9125_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_325364_s, &tv_r_JOIN_INNER_8_325364_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9313_output: " << tbl_Filter_TD_9313_output.getNumRow() << " " << "tbl_Filter_TD_9446_output: " << tbl_Filter_TD_9446_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_446078_s, &tv_r_Filter_8_446078_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9422_input: " << tbl_SerializeFromObject_TD_9422_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_403079_s, &tv_r_Filter_8_403079_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_921_input: " << tbl_SerializeFromObject_TD_921_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_891926_s, &tv_r_Filter_8_891926_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9153_input: " << tbl_SerializeFromObject_TD_9153_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_58356_s, &tv_r_JOIN_INNER_8_58356_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9450_output: " << tbl_Filter_TD_9450_output.getNumRow() << " " << "tbl_Filter_TD_939_output: " << tbl_Filter_TD_939_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_998633_s, &tv_r_JOIN_LEFTSEMI_7_998633_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8376_output: " << tbl_Filter_TD_8376_output.getNumRow() << " " << "tbl_Filter_TD_854_output: " << tbl_Filter_TD_854_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_746403_s, &tv_r_JOIN_INNER_7_746403_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_856_output: " << tbl_JOIN_INNER_TD_856_output.getNumRow() << " " << "tbl_Filter_TD_8903_output: " << tbl_Filter_TD_8903_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_341913_s, &tv_r_JOIN_LEFTSEMI_7_341913_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8587_output: " << tbl_Filter_TD_8587_output.getNumRow() << " " << "tbl_Filter_TD_8724_output: " << tbl_Filter_TD_8724_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_796670_s, &tv_r_JOIN_INNER_7_796670_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8495_output: " << tbl_JOIN_INNER_TD_8495_output.getNumRow() << " " << "tbl_Filter_TD_8597_output: " << tbl_Filter_TD_8597_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_622070_s, &tv_r_JOIN_LEFTSEMI_7_622070_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8590_output: " << tbl_Filter_TD_8590_output.getNumRow() << " " << "tbl_Filter_TD_8692_output: " << tbl_Filter_TD_8692_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_665251_s, &tv_r_JOIN_INNER_7_665251_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8890_output: " << tbl_JOIN_INNER_TD_8890_output.getNumRow() << " " << "tbl_Filter_TD_8400_output: " << tbl_Filter_TD_8400_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_214954_s, &tv_r_JOIN_INNER_6_214954_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7327_output: " << tbl_JOIN_INNER_TD_7327_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7189_output: " << tbl_JOIN_LEFTSEMI_TD_7189_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_113925_s, &tv_r_JOIN_INNER_6_113925_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7792_output: " << tbl_JOIN_INNER_TD_7792_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7271_output: " << tbl_JOIN_LEFTSEMI_TD_7271_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_493499_s, &tv_r_JOIN_INNER_6_493499_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7613_output: " << tbl_JOIN_INNER_TD_7613_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7832_output: " << tbl_JOIN_LEFTSEMI_TD_7832_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_188190_s, &tv_r_Aggregate_5_188190_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6222_output: " << tbl_JOIN_INNER_TD_6222_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_242797_s, &tv_r_Aggregate_5_242797_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6151_output: " << tbl_JOIN_INNER_TD_6151_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_684632_s, &tv_r_Aggregate_5_684632_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6287_output: " << tbl_JOIN_INNER_TD_6287_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_880613_s, &tv_r_Union_4_880613_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5946_output: " << tbl_Aggregate_TD_5946_output.getNumRow() << " " << "tbl_Aggregate_TD_5579_output: " << tbl_Aggregate_TD_5579_output.getNumRow() << " " << "tbl_Aggregate_TD_5244_output: " << tbl_Aggregate_TD_5244_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_818567_s, &tv_r_Aggregate_3_818567_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4316_output: " << tbl_Union_TD_4316_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_27602_s, &tv_r_Sort_2_27602_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3457_output: " << tbl_Aggregate_TD_3457_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_97704_s, &tv_r_LocalLimit_1_97704_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2325_output: " << tbl_Sort_TD_2325_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_923977_s, &tv_r_GlobalLimit_0_923977_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1160_output: " << tbl_LocalLimit_TD_1160_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.3684385 * 1000 << "ms" << std::endl; 
    return 0; 
}
