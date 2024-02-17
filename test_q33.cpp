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

#include "cfgFunc_q33.hpp" 
#include "q33.hpp" 

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
    std::cout << "NOTE:running query #33\n."; 
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
    Table tbl_GlobalLimit_TD_0447_output("tbl_GlobalLimit_TD_0447_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0447_output.allocateHost();
    Table tbl_LocalLimit_TD_1633_output("tbl_LocalLimit_TD_1633_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1633_output.allocateHost();
    Table tbl_Sort_TD_2533_output("tbl_Sort_TD_2533_output", 6100000, 2, "");
    tbl_Sort_TD_2533_output.allocateHost();
    Table tbl_Aggregate_TD_3865_output("tbl_Aggregate_TD_3865_output", 6100000, 2, "");
    tbl_Aggregate_TD_3865_output.allocateHost();
    Table tbl_Union_TD_4116_output("tbl_Union_TD_4116_output", 6100000, 2, "");
    tbl_Union_TD_4116_output.allocateHost();
    Table tbl_Aggregate_TD_5120_output("tbl_Aggregate_TD_5120_output", 6100000, 2, "");
    tbl_Aggregate_TD_5120_output.allocateHost();
    Table tbl_Aggregate_TD_553_output("tbl_Aggregate_TD_553_output", 6100000, 2, "");
    tbl_Aggregate_TD_553_output.allocateHost();
    Table tbl_Aggregate_TD_5389_output("tbl_Aggregate_TD_5389_output", 6100000, 2, "");
    tbl_Aggregate_TD_5389_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6878_output("tbl_JOIN_INNER_TD_6878_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6878_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6880_output("tbl_JOIN_INNER_TD_6880_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6880_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6642_output("tbl_JOIN_INNER_TD_6642_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6642_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7265_output("tbl_JOIN_INNER_TD_7265_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7265_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7931_output("tbl_JOIN_LEFTSEMI_TD_7931_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7931_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7160_output("tbl_JOIN_INNER_TD_7160_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7160_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7353_output("tbl_JOIN_LEFTSEMI_TD_7353_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7353_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7939_output("tbl_JOIN_INNER_TD_7939_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7939_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_763_output("tbl_JOIN_LEFTSEMI_TD_763_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_763_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8553_output("tbl_JOIN_INNER_TD_8553_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8553_output.allocateHost();
    Table tbl_Filter_TD_8992_output("tbl_Filter_TD_8992_output", 6100000, 1, "");
    tbl_Filter_TD_8992_output.allocateHost();
    Table tbl_Filter_TD_8318_output("tbl_Filter_TD_8318_output", 6100000, 2, "");
    tbl_Filter_TD_8318_output.allocateHost();
    Table tbl_Filter_TD_8784_output("tbl_Filter_TD_8784_output", 6100000, 1, "");
    tbl_Filter_TD_8784_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8469_output("tbl_JOIN_INNER_TD_8469_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8469_output.allocateHost();
    Table tbl_Filter_TD_8101_output("tbl_Filter_TD_8101_output", 6100000, 1, "");
    tbl_Filter_TD_8101_output.allocateHost();
    Table tbl_Filter_TD_8959_output("tbl_Filter_TD_8959_output", 6100000, 2, "");
    tbl_Filter_TD_8959_output.allocateHost();
    Table tbl_Filter_TD_8243_output("tbl_Filter_TD_8243_output", 6100000, 1, "");
    tbl_Filter_TD_8243_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8325_output("tbl_JOIN_INNER_TD_8325_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8325_output.allocateHost();
    Table tbl_Filter_TD_8837_output("tbl_Filter_TD_8837_output", 6100000, 1, "");
    tbl_Filter_TD_8837_output.allocateHost();
    Table tbl_Filter_TD_8412_output("tbl_Filter_TD_8412_output", 6100000, 2, "");
    tbl_Filter_TD_8412_output.allocateHost();
    Table tbl_Filter_TD_8351_output("tbl_Filter_TD_8351_output", 6100000, 1, "");
    tbl_Filter_TD_8351_output.allocateHost();
    Table tbl_Filter_TD_9158_output("tbl_Filter_TD_9158_output", 6100000, 4, "");
    tbl_Filter_TD_9158_output.allocateHost();
    Table tbl_Filter_TD_9493_output("tbl_Filter_TD_9493_output", 6100000, 1, "");
    tbl_Filter_TD_9493_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9257_input;
    tbl_SerializeFromObject_TD_9257_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9257_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9257_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9257_input.allocateHost();
    tbl_SerializeFromObject_TD_9257_input.loadHost();
    Table tbl_SerializeFromObject_TD_9168_input;
    tbl_SerializeFromObject_TD_9168_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9168_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9168_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9168_input.allocateHost();
    tbl_SerializeFromObject_TD_9168_input.loadHost();
    Table tbl_SerializeFromObject_TD_9558_input;
    tbl_SerializeFromObject_TD_9558_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9558_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9558_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9558_input.allocateHost();
    tbl_SerializeFromObject_TD_9558_input.loadHost();
    Table tbl_Filter_TD_9547_output("tbl_Filter_TD_9547_output", 6100000, 4, "");
    tbl_Filter_TD_9547_output.allocateHost();
    Table tbl_Filter_TD_9406_output("tbl_Filter_TD_9406_output", 6100000, 1, "");
    tbl_Filter_TD_9406_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9196_input;
    tbl_SerializeFromObject_TD_9196_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9196_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9196_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9196_input.allocateHost();
    tbl_SerializeFromObject_TD_9196_input.loadHost();
    Table tbl_SerializeFromObject_TD_9764_input;
    tbl_SerializeFromObject_TD_9764_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9764_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9764_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9764_input.allocateHost();
    tbl_SerializeFromObject_TD_9764_input.loadHost();
    Table tbl_SerializeFromObject_TD_9897_input;
    tbl_SerializeFromObject_TD_9897_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9897_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9897_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9897_input.allocateHost();
    tbl_SerializeFromObject_TD_9897_input.loadHost();
    Table tbl_Filter_TD_945_output("tbl_Filter_TD_945_output", 6100000, 4, "");
    tbl_Filter_TD_945_output.allocateHost();
    Table tbl_Filter_TD_9501_output("tbl_Filter_TD_9501_output", 6100000, 1, "");
    tbl_Filter_TD_9501_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9426_input;
    tbl_SerializeFromObject_TD_9426_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9426_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9426_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9426_input.allocateHost();
    tbl_SerializeFromObject_TD_9426_input.loadHost();
    Table tbl_SerializeFromObject_TD_9150_input;
    tbl_SerializeFromObject_TD_9150_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9150_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9150_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9150_input.allocateHost();
    tbl_SerializeFromObject_TD_9150_input.loadHost();
    Table tbl_SerializeFromObject_TD_9370_input;
    tbl_SerializeFromObject_TD_9370_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9370_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9370_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9370_input.allocateHost();
    tbl_SerializeFromObject_TD_9370_input.loadHost();
    Table tbl_SerializeFromObject_TD_1049_input;
    tbl_SerializeFromObject_TD_1049_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1049_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1049_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_1049_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_1049_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1049_input.allocateHost();
    tbl_SerializeFromObject_TD_1049_input.loadHost();
    Table tbl_SerializeFromObject_TD_1022_input;
    tbl_SerializeFromObject_TD_1022_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1022_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1022_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1022_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_1022_input.allocateHost();
    tbl_SerializeFromObject_TD_1022_input.loadHost();
    Table tbl_SerializeFromObject_TD_10411_input;
    tbl_SerializeFromObject_TD_10411_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10411_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10411_input.addCol("cs_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10411_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_10411_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10411_input.allocateHost();
    tbl_SerializeFromObject_TD_10411_input.loadHost();
    Table tbl_SerializeFromObject_TD_10624_input;
    tbl_SerializeFromObject_TD_10624_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10624_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10624_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10624_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10624_input.allocateHost();
    tbl_SerializeFromObject_TD_10624_input.loadHost();
    Table tbl_SerializeFromObject_TD_10903_input;
    tbl_SerializeFromObject_TD_10903_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10903_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10903_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_10903_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10903_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10903_input.allocateHost();
    tbl_SerializeFromObject_TD_10903_input.loadHost();
    Table tbl_SerializeFromObject_TD_1033_input;
    tbl_SerializeFromObject_TD_1033_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1033_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1033_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1033_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_1033_input.allocateHost();
    tbl_SerializeFromObject_TD_1033_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_433500_s, tv_r_Filter_9_433500_e;
    gettimeofday(&tv_r_Filter_9_433500_s, 0);
    SW_Filter_TD_9501(tbl_SerializeFromObject_TD_1033_input, tbl_Filter_TD_9501_output);
    gettimeofday(&tv_r_Filter_9_433500_e, 0);

    struct timeval tv_r_Filter_9_206892_s, tv_r_Filter_9_206892_e;
    gettimeofday(&tv_r_Filter_9_206892_s, 0);
    SW_Filter_TD_945(tbl_SerializeFromObject_TD_10903_input, tbl_Filter_TD_945_output);
    gettimeofday(&tv_r_Filter_9_206892_e, 0);

    struct timeval tv_r_Filter_9_432346_s, tv_r_Filter_9_432346_e;
    gettimeofday(&tv_r_Filter_9_432346_s, 0);
    SW_Filter_TD_9406(tbl_SerializeFromObject_TD_10624_input, tbl_Filter_TD_9406_output);
    gettimeofday(&tv_r_Filter_9_432346_e, 0);

    struct timeval tv_r_Filter_9_126670_s, tv_r_Filter_9_126670_e;
    gettimeofday(&tv_r_Filter_9_126670_s, 0);
    SW_Filter_TD_9547(tbl_SerializeFromObject_TD_10411_input, tbl_Filter_TD_9547_output);
    gettimeofday(&tv_r_Filter_9_126670_e, 0);

    struct timeval tv_r_Filter_9_699636_s, tv_r_Filter_9_699636_e;
    gettimeofday(&tv_r_Filter_9_699636_s, 0);
    SW_Filter_TD_9493(tbl_SerializeFromObject_TD_1022_input, tbl_Filter_TD_9493_output);
    gettimeofday(&tv_r_Filter_9_699636_e, 0);

    struct timeval tv_r_Filter_9_297792_s, tv_r_Filter_9_297792_e;
    gettimeofday(&tv_r_Filter_9_297792_s, 0);
    SW_Filter_TD_9158(tbl_SerializeFromObject_TD_1049_input, tbl_Filter_TD_9158_output);
    gettimeofday(&tv_r_Filter_9_297792_e, 0);

    struct timeval tv_r_Filter_8_888572_s, tv_r_Filter_8_888572_e;
    gettimeofday(&tv_r_Filter_8_888572_s, 0);
    SW_Filter_TD_8351(tbl_SerializeFromObject_TD_9370_input, tbl_Filter_TD_8351_output);
    gettimeofday(&tv_r_Filter_8_888572_e, 0);

    struct timeval tv_r_Filter_8_48059_s, tv_r_Filter_8_48059_e;
    gettimeofday(&tv_r_Filter_8_48059_s, 0);
    SW_Filter_TD_8412(tbl_SerializeFromObject_TD_9150_input, tbl_Filter_TD_8412_output);
    gettimeofday(&tv_r_Filter_8_48059_e, 0);

    struct timeval tv_r_Filter_8_906355_s, tv_r_Filter_8_906355_e;
    gettimeofday(&tv_r_Filter_8_906355_s, 0);
    SW_Filter_TD_8837(tbl_SerializeFromObject_TD_9426_input, tbl_Filter_TD_8837_output);
    gettimeofday(&tv_r_Filter_8_906355_e, 0);

    struct timeval tv_r_JOIN_INNER_8_878155_s, tv_r_JOIN_INNER_8_878155_e;
    gettimeofday(&tv_r_JOIN_INNER_8_878155_s, 0);
    SW_JOIN_INNER_TD_8325(tbl_Filter_TD_945_output, tbl_Filter_TD_9501_output, tbl_JOIN_INNER_TD_8325_output);
    gettimeofday(&tv_r_JOIN_INNER_8_878155_e, 0);

    struct timeval tv_r_Filter_8_719617_s, tv_r_Filter_8_719617_e;
    gettimeofday(&tv_r_Filter_8_719617_s, 0);
    SW_Filter_TD_8243(tbl_SerializeFromObject_TD_9897_input, tbl_Filter_TD_8243_output);
    gettimeofday(&tv_r_Filter_8_719617_e, 0);

    struct timeval tv_r_Filter_8_590140_s, tv_r_Filter_8_590140_e;
    gettimeofday(&tv_r_Filter_8_590140_s, 0);
    SW_Filter_TD_8959(tbl_SerializeFromObject_TD_9764_input, tbl_Filter_TD_8959_output);
    gettimeofday(&tv_r_Filter_8_590140_e, 0);

    struct timeval tv_r_Filter_8_538238_s, tv_r_Filter_8_538238_e;
    gettimeofday(&tv_r_Filter_8_538238_s, 0);
    SW_Filter_TD_8101(tbl_SerializeFromObject_TD_9196_input, tbl_Filter_TD_8101_output);
    gettimeofday(&tv_r_Filter_8_538238_e, 0);

    struct timeval tv_r_JOIN_INNER_8_314552_s, tv_r_JOIN_INNER_8_314552_e;
    gettimeofday(&tv_r_JOIN_INNER_8_314552_s, 0);
    SW_JOIN_INNER_TD_8469(tbl_Filter_TD_9547_output, tbl_Filter_TD_9406_output, tbl_JOIN_INNER_TD_8469_output);
    gettimeofday(&tv_r_JOIN_INNER_8_314552_e, 0);

    struct timeval tv_r_Filter_8_205335_s, tv_r_Filter_8_205335_e;
    gettimeofday(&tv_r_Filter_8_205335_s, 0);
    SW_Filter_TD_8784(tbl_SerializeFromObject_TD_9558_input, tbl_Filter_TD_8784_output);
    gettimeofday(&tv_r_Filter_8_205335_e, 0);

    struct timeval tv_r_Filter_8_702321_s, tv_r_Filter_8_702321_e;
    gettimeofday(&tv_r_Filter_8_702321_s, 0);
    SW_Filter_TD_8318(tbl_SerializeFromObject_TD_9168_input, tbl_Filter_TD_8318_output);
    gettimeofday(&tv_r_Filter_8_702321_e, 0);

    struct timeval tv_r_Filter_8_31812_s, tv_r_Filter_8_31812_e;
    gettimeofday(&tv_r_Filter_8_31812_s, 0);
    SW_Filter_TD_8992(tbl_SerializeFromObject_TD_9257_input, tbl_Filter_TD_8992_output);
    gettimeofday(&tv_r_Filter_8_31812_e, 0);

    struct timeval tv_r_JOIN_INNER_8_311463_s, tv_r_JOIN_INNER_8_311463_e;
    gettimeofday(&tv_r_JOIN_INNER_8_311463_s, 0);
    SW_JOIN_INNER_TD_8553(tbl_Filter_TD_9158_output, tbl_Filter_TD_9493_output, tbl_JOIN_INNER_TD_8553_output);
    gettimeofday(&tv_r_JOIN_INNER_8_311463_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_926111_s, tv_r_JOIN_LEFTSEMI_7_926111_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_926111_s, 0);
    SW_JOIN_LEFTSEMI_TD_763(tbl_Filter_TD_8412_output, tbl_Filter_TD_8351_output, tbl_JOIN_LEFTSEMI_TD_763_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_926111_e, 0);

    struct timeval tv_r_JOIN_INNER_7_405929_s, tv_r_JOIN_INNER_7_405929_e;
    gettimeofday(&tv_r_JOIN_INNER_7_405929_s, 0);
    SW_JOIN_INNER_TD_7939(tbl_JOIN_INNER_TD_8325_output, tbl_Filter_TD_8837_output, tbl_JOIN_INNER_TD_7939_output);
    gettimeofday(&tv_r_JOIN_INNER_7_405929_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_306713_s, tv_r_JOIN_LEFTSEMI_7_306713_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_306713_s, 0);
    SW_JOIN_LEFTSEMI_TD_7353(tbl_Filter_TD_8959_output, tbl_Filter_TD_8243_output, tbl_JOIN_LEFTSEMI_TD_7353_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_306713_e, 0);

    struct timeval tv_r_JOIN_INNER_7_324240_s, tv_r_JOIN_INNER_7_324240_e;
    gettimeofday(&tv_r_JOIN_INNER_7_324240_s, 0);
    SW_JOIN_INNER_TD_7160(tbl_JOIN_INNER_TD_8469_output, tbl_Filter_TD_8101_output, tbl_JOIN_INNER_TD_7160_output);
    gettimeofday(&tv_r_JOIN_INNER_7_324240_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_924114_s, tv_r_JOIN_LEFTSEMI_7_924114_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_924114_s, 0);
    SW_JOIN_LEFTSEMI_TD_7931(tbl_Filter_TD_8318_output, tbl_Filter_TD_8784_output, tbl_JOIN_LEFTSEMI_TD_7931_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_924114_e, 0);

    struct timeval tv_r_JOIN_INNER_7_765280_s, tv_r_JOIN_INNER_7_765280_e;
    gettimeofday(&tv_r_JOIN_INNER_7_765280_s, 0);
    SW_JOIN_INNER_TD_7265(tbl_JOIN_INNER_TD_8553_output, tbl_Filter_TD_8992_output, tbl_JOIN_INNER_TD_7265_output);
    gettimeofday(&tv_r_JOIN_INNER_7_765280_e, 0);

    struct timeval tv_r_JOIN_INNER_6_473889_s, tv_r_JOIN_INNER_6_473889_e;
    gettimeofday(&tv_r_JOIN_INNER_6_473889_s, 0);
    SW_JOIN_INNER_TD_6642(tbl_JOIN_INNER_TD_7939_output, tbl_JOIN_LEFTSEMI_TD_763_output, tbl_JOIN_INNER_TD_6642_output);
    gettimeofday(&tv_r_JOIN_INNER_6_473889_e, 0);

    struct timeval tv_r_JOIN_INNER_6_245009_s, tv_r_JOIN_INNER_6_245009_e;
    gettimeofday(&tv_r_JOIN_INNER_6_245009_s, 0);
    SW_JOIN_INNER_TD_6880(tbl_JOIN_INNER_TD_7160_output, tbl_JOIN_LEFTSEMI_TD_7353_output, tbl_JOIN_INNER_TD_6880_output);
    gettimeofday(&tv_r_JOIN_INNER_6_245009_e, 0);

    struct timeval tv_r_JOIN_INNER_6_476990_s, tv_r_JOIN_INNER_6_476990_e;
    gettimeofday(&tv_r_JOIN_INNER_6_476990_s, 0);
    SW_JOIN_INNER_TD_6878(tbl_JOIN_INNER_TD_7265_output, tbl_JOIN_LEFTSEMI_TD_7931_output, tbl_JOIN_INNER_TD_6878_output);
    gettimeofday(&tv_r_JOIN_INNER_6_476990_e, 0);

    struct timeval tv_r_Aggregate_5_131225_s, tv_r_Aggregate_5_131225_e;
    gettimeofday(&tv_r_Aggregate_5_131225_s, 0);
    SW_Aggregate_TD_5389(tbl_JOIN_INNER_TD_6642_output, tbl_Aggregate_TD_5389_output);
    gettimeofday(&tv_r_Aggregate_5_131225_e, 0);

    struct timeval tv_r_Aggregate_5_860263_s, tv_r_Aggregate_5_860263_e;
    gettimeofday(&tv_r_Aggregate_5_860263_s, 0);
    SW_Aggregate_TD_553(tbl_JOIN_INNER_TD_6880_output, tbl_Aggregate_TD_553_output);
    gettimeofday(&tv_r_Aggregate_5_860263_e, 0);

    struct timeval tv_r_Aggregate_5_467285_s, tv_r_Aggregate_5_467285_e;
    gettimeofday(&tv_r_Aggregate_5_467285_s, 0);
    SW_Aggregate_TD_5120(tbl_JOIN_INNER_TD_6878_output, tbl_Aggregate_TD_5120_output);
    gettimeofday(&tv_r_Aggregate_5_467285_e, 0);

    struct timeval tv_r_Union_4_70638_s, tv_r_Union_4_70638_e;
    gettimeofday(&tv_r_Union_4_70638_s, 0);
    SW_Union_TD_4116(tbl_Aggregate_TD_5120_output, tbl_Aggregate_TD_553_output, tbl_Aggregate_TD_5389_output, tbl_Union_TD_4116_output);
    gettimeofday(&tv_r_Union_4_70638_e, 0);

    struct timeval tv_r_Aggregate_3_731412_s, tv_r_Aggregate_3_731412_e;
    gettimeofday(&tv_r_Aggregate_3_731412_s, 0);
    SW_Aggregate_TD_3865(tbl_Union_TD_4116_output, tbl_Aggregate_TD_3865_output);
    gettimeofday(&tv_r_Aggregate_3_731412_e, 0);

    struct timeval tv_r_Sort_2_657805_s, tv_r_Sort_2_657805_e;
    gettimeofday(&tv_r_Sort_2_657805_s, 0);
    SW_Sort_TD_2533(tbl_Aggregate_TD_3865_output, tbl_Sort_TD_2533_output);
    gettimeofday(&tv_r_Sort_2_657805_e, 0);

    struct timeval tv_r_LocalLimit_1_730083_s, tv_r_LocalLimit_1_730083_e;
    gettimeofday(&tv_r_LocalLimit_1_730083_s, 0);
    SW_LocalLimit_TD_1633(tbl_Sort_TD_2533_output, tbl_LocalLimit_TD_1633_output);
    gettimeofday(&tv_r_LocalLimit_1_730083_e, 0);

    struct timeval tv_r_GlobalLimit_0_247656_s, tv_r_GlobalLimit_0_247656_e;
    gettimeofday(&tv_r_GlobalLimit_0_247656_s, 0);
    SW_GlobalLimit_TD_0447(tbl_LocalLimit_TD_1633_output, tbl_GlobalLimit_TD_0447_output);
    gettimeofday(&tv_r_GlobalLimit_0_247656_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_433500_s, &tv_r_Filter_9_433500_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1033_input: " << tbl_SerializeFromObject_TD_1033_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_206892_s, &tv_r_Filter_9_206892_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10903_input: " << tbl_SerializeFromObject_TD_10903_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_432346_s, &tv_r_Filter_9_432346_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10624_input: " << tbl_SerializeFromObject_TD_10624_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_126670_s, &tv_r_Filter_9_126670_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10411_input: " << tbl_SerializeFromObject_TD_10411_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_699636_s, &tv_r_Filter_9_699636_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1022_input: " << tbl_SerializeFromObject_TD_1022_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_297792_s, &tv_r_Filter_9_297792_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1049_input: " << tbl_SerializeFromObject_TD_1049_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_888572_s, &tv_r_Filter_8_888572_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9370_input: " << tbl_SerializeFromObject_TD_9370_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_48059_s, &tv_r_Filter_8_48059_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9150_input: " << tbl_SerializeFromObject_TD_9150_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_906355_s, &tv_r_Filter_8_906355_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9426_input: " << tbl_SerializeFromObject_TD_9426_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_878155_s, &tv_r_JOIN_INNER_8_878155_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_945_output: " << tbl_Filter_TD_945_output.getNumRow() << " " << "tbl_Filter_TD_9501_output: " << tbl_Filter_TD_9501_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_719617_s, &tv_r_Filter_8_719617_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9897_input: " << tbl_SerializeFromObject_TD_9897_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_590140_s, &tv_r_Filter_8_590140_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9764_input: " << tbl_SerializeFromObject_TD_9764_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_538238_s, &tv_r_Filter_8_538238_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9196_input: " << tbl_SerializeFromObject_TD_9196_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_314552_s, &tv_r_JOIN_INNER_8_314552_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9547_output: " << tbl_Filter_TD_9547_output.getNumRow() << " " << "tbl_Filter_TD_9406_output: " << tbl_Filter_TD_9406_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_205335_s, &tv_r_Filter_8_205335_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9558_input: " << tbl_SerializeFromObject_TD_9558_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_702321_s, &tv_r_Filter_8_702321_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9168_input: " << tbl_SerializeFromObject_TD_9168_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_31812_s, &tv_r_Filter_8_31812_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9257_input: " << tbl_SerializeFromObject_TD_9257_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_311463_s, &tv_r_JOIN_INNER_8_311463_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9158_output: " << tbl_Filter_TD_9158_output.getNumRow() << " " << "tbl_Filter_TD_9493_output: " << tbl_Filter_TD_9493_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_926111_s, &tv_r_JOIN_LEFTSEMI_7_926111_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8412_output: " << tbl_Filter_TD_8412_output.getNumRow() << " " << "tbl_Filter_TD_8351_output: " << tbl_Filter_TD_8351_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_405929_s, &tv_r_JOIN_INNER_7_405929_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8325_output: " << tbl_JOIN_INNER_TD_8325_output.getNumRow() << " " << "tbl_Filter_TD_8837_output: " << tbl_Filter_TD_8837_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_306713_s, &tv_r_JOIN_LEFTSEMI_7_306713_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8959_output: " << tbl_Filter_TD_8959_output.getNumRow() << " " << "tbl_Filter_TD_8243_output: " << tbl_Filter_TD_8243_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_324240_s, &tv_r_JOIN_INNER_7_324240_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8469_output: " << tbl_JOIN_INNER_TD_8469_output.getNumRow() << " " << "tbl_Filter_TD_8101_output: " << tbl_Filter_TD_8101_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_924114_s, &tv_r_JOIN_LEFTSEMI_7_924114_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8318_output: " << tbl_Filter_TD_8318_output.getNumRow() << " " << "tbl_Filter_TD_8784_output: " << tbl_Filter_TD_8784_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_765280_s, &tv_r_JOIN_INNER_7_765280_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8553_output: " << tbl_JOIN_INNER_TD_8553_output.getNumRow() << " " << "tbl_Filter_TD_8992_output: " << tbl_Filter_TD_8992_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_473889_s, &tv_r_JOIN_INNER_6_473889_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7939_output: " << tbl_JOIN_INNER_TD_7939_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_763_output: " << tbl_JOIN_LEFTSEMI_TD_763_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_245009_s, &tv_r_JOIN_INNER_6_245009_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7160_output: " << tbl_JOIN_INNER_TD_7160_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7353_output: " << tbl_JOIN_LEFTSEMI_TD_7353_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_476990_s, &tv_r_JOIN_INNER_6_476990_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7265_output: " << tbl_JOIN_INNER_TD_7265_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7931_output: " << tbl_JOIN_LEFTSEMI_TD_7931_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_131225_s, &tv_r_Aggregate_5_131225_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6642_output: " << tbl_JOIN_INNER_TD_6642_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_860263_s, &tv_r_Aggregate_5_860263_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6880_output: " << tbl_JOIN_INNER_TD_6880_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_467285_s, &tv_r_Aggregate_5_467285_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6878_output: " << tbl_JOIN_INNER_TD_6878_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_70638_s, &tv_r_Union_4_70638_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5120_output: " << tbl_Aggregate_TD_5120_output.getNumRow() << " " << "tbl_Aggregate_TD_553_output: " << tbl_Aggregate_TD_553_output.getNumRow() << " " << "tbl_Aggregate_TD_5389_output: " << tbl_Aggregate_TD_5389_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_731412_s, &tv_r_Aggregate_3_731412_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4116_output: " << tbl_Union_TD_4116_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_657805_s, &tv_r_Sort_2_657805_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3865_output: " << tbl_Aggregate_TD_3865_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_730083_s, &tv_r_LocalLimit_1_730083_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2533_output: " << tbl_Sort_TD_2533_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_247656_s, &tv_r_GlobalLimit_0_247656_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1633_output: " << tbl_LocalLimit_TD_1633_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.5654027 * 1000 << "ms" << std::endl; 
    return 0; 
}
