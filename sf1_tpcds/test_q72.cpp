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

#include "cfgFunc_q72.hpp" 
#include "q72.hpp" 

int main(int argc, const char* argv[]) { 
    std::cout << "\n------------ TPC-H Query Test -------------\n"; 
    ArgParser parser(argc, argv); 
    std::string xclbin_path; 
    if (!parser.getCmdOption("-xclbin", xclbin_path)) { 
        std::cout << "ERROR: xclbin path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_h; 
    if (!parser.getCmdOption("-xclbin_h", xclbin_path_h)) { 
        std::cout << "ERROR: xclbin_h path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_a; 
    if (!parser.getCmdOption("-xclbin_a", xclbin_path_a)) { 
        std::cout << "ERROR: xclbin_a path is not set!\n"; 
        return 1; 
    } 
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
    std::cout << "NOTE:running query #72\n."; 
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
    // Get CL devices. 
    std::vector<cl::Device> devices = xcl::get_xil_devices(); 
    // ****************************** Tables **************************** // 
    Table tbl_GlobalLimit_TD_0453784_output("tbl_GlobalLimit_TD_0453784_output", 6100000, 6, "");
    tbl_GlobalLimit_TD_0453784_output.allocateHost();
    Table tbl_LocalLimit_TD_1508215_output("tbl_LocalLimit_TD_1508215_output", 6100000, 6, "");
    tbl_LocalLimit_TD_1508215_output.allocateHost();
    Table tbl_Sort_TD_2462288_output("tbl_Sort_TD_2462288_output", 6100000, 6, "");
    tbl_Sort_TD_2462288_output.allocateHost();
    Table tbl_Aggregate_TD_3846070_output("tbl_Aggregate_TD_3846070_output", 6100000, 6, "");
    tbl_Aggregate_TD_3846070_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_4446657_output("tbl_JOIN_LEFTOUTER_TD_4446657_output", 6100000, 4, "");
    tbl_JOIN_LEFTOUTER_TD_4446657_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_5593677_output("tbl_JOIN_LEFTOUTER_TD_5593677_output", 6100000, 6, "");
    tbl_JOIN_LEFTOUTER_TD_5593677_output.allocateHost();
    Table tbl_Filter_TD_5726448_output("tbl_Filter_TD_5726448_output", 6100000, 2, "");
    tbl_Filter_TD_5726448_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6683758_output("tbl_JOIN_INNER_TD_6683758_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6683758_output.allocateHost();
    Table tbl_Filter_TD_6800157_output("tbl_Filter_TD_6800157_output", 6100000, 1, "");
    tbl_Filter_TD_6800157_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6691106_input;
    tbl_SerializeFromObject_TD_6691106_input = Table("catalog_returns", catalog_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6691106_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_6691106_input.addCol("cr_order_number", 8);
    tbl_SerializeFromObject_TD_6691106_input.allocateHost();
    tbl_SerializeFromObject_TD_6691106_input.loadHost();
    Table tbl_JOIN_INNER_TD_7191780_output("tbl_JOIN_INNER_TD_7191780_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_7191780_output.allocateHost();
    Table tbl_Filter_TD_7271269_output("tbl_Filter_TD_7271269_output", 6100000, 2, "");
    tbl_Filter_TD_7271269_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7112138_input;
    tbl_SerializeFromObject_TD_7112138_input = Table("promotion", promotion_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7112138_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_7112138_input.allocateHost();
    tbl_SerializeFromObject_TD_7112138_input.loadHost();
    Table tbl_JOIN_INNER_TD_859021_output("tbl_JOIN_INNER_TD_859021_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_859021_output.allocateHost();
    Table tbl_Filter_TD_8869621_output("tbl_Filter_TD_8869621_output", 6100000, 2, "");
    tbl_Filter_TD_8869621_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8119017_input;
    tbl_SerializeFromObject_TD_8119017_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8119017_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8119017_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_8119017_input.allocateHost();
    tbl_SerializeFromObject_TD_8119017_input.loadHost();
    Table tbl_JOIN_INNER_TD_9217039_output("tbl_JOIN_INNER_TD_9217039_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_9217039_output.allocateHost();
    Table tbl_Filter_TD_9701751_output("tbl_Filter_TD_9701751_output", 6100000, 3, "");
    tbl_Filter_TD_9701751_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9555523_input;
    tbl_SerializeFromObject_TD_9555523_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9555523_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9555523_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_9555523_input.allocateHost();
    tbl_SerializeFromObject_TD_9555523_input.loadHost();
    Table tbl_JOIN_INNER_TD_10512967_output("tbl_JOIN_INNER_TD_10512967_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10512967_output.allocateHost();
    Table tbl_Filter_TD_10682466_output("tbl_Filter_TD_10682466_output", 6100000, 1, "");
    tbl_Filter_TD_10682466_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10130575_input;
    tbl_SerializeFromObject_TD_10130575_input = Table("date_dim", date_dim_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10130575_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10130575_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10130575_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_10130575_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10130575_input.allocateHost();
    tbl_SerializeFromObject_TD_10130575_input.loadHost();
    Table tbl_JOIN_INNER_TD_1134526_output("tbl_JOIN_INNER_TD_1134526_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_1134526_output.allocateHost();
    Table tbl_Filter_TD_11629310_output("tbl_Filter_TD_11629310_output", 6100000, 1, "");
    tbl_Filter_TD_11629310_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11251179_input;
    tbl_SerializeFromObject_TD_11251179_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11251179_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_11251179_input.addCol("hd_buy_potential", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11251179_input.allocateHost();
    tbl_SerializeFromObject_TD_11251179_input.loadHost();
    Table tbl_JOIN_INNER_TD_12548352_output("tbl_JOIN_INNER_TD_12548352_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_12548352_output.allocateHost();
    Table tbl_Filter_TD_12394126_output("tbl_Filter_TD_12394126_output", 6100000, 2, "");
    tbl_Filter_TD_12394126_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12200729_input;
    tbl_SerializeFromObject_TD_12200729_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12200729_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12200729_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12200729_input.allocateHost();
    tbl_SerializeFromObject_TD_12200729_input.loadHost();
    Table tbl_JOIN_INNER_TD_13954203_output("tbl_JOIN_INNER_TD_13954203_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_13954203_output.allocateHost();
    Table tbl_Filter_TD_13127165_output("tbl_Filter_TD_13127165_output", 6100000, 2, "");
    tbl_Filter_TD_13127165_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13903586_input;
    tbl_SerializeFromObject_TD_13903586_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13903586_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13903586_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13903586_input.allocateHost();
    tbl_SerializeFromObject_TD_13903586_input.loadHost();
    Table tbl_Filter_TD_14610738_output("tbl_Filter_TD_14610738_output", 6100000, 8, "");
    tbl_Filter_TD_14610738_output.allocateHost();
    Table tbl_Filter_TD_14141034_output("tbl_Filter_TD_14141034_output", 6100000, 4, "");
    tbl_Filter_TD_14141034_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14548882_input;
    tbl_SerializeFromObject_TD_14548882_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14548882_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_14548882_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14548882_input.allocateHost();
    tbl_SerializeFromObject_TD_14548882_input.loadHost();
    Table tbl_SerializeFromObject_TD_15550944_input;
    tbl_SerializeFromObject_TD_15550944_input = Table("catalog_sales", catalog_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_15550944_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15550944_input.addCol("cs_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_15550944_input.addCol("cs_bill_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_15550944_input.addCol("cs_bill_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_15550944_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_15550944_input.addCol("cs_promo_sk", 4);
    tbl_SerializeFromObject_TD_15550944_input.addCol("cs_order_number", 8);
    tbl_SerializeFromObject_TD_15550944_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_15550944_input.allocateHost();
    tbl_SerializeFromObject_TD_15550944_input.loadHost();
    Table tbl_SerializeFromObject_TD_15511874_input;
    tbl_SerializeFromObject_TD_15511874_input = Table("inventory", inventory_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15511874_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_15511874_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_15511874_input.addCol("inv_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_15511874_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_15511874_input.allocateHost();
    tbl_SerializeFromObject_TD_15511874_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_458796_s, tv_r_Filter_14_458796_e;
    gettimeofday(&tv_r_Filter_14_458796_s, 0);
    SW_Filter_TD_14141034(tbl_SerializeFromObject_TD_15511874_input, tbl_Filter_TD_14141034_output);
    gettimeofday(&tv_r_Filter_14_458796_e, 0);

    struct timeval tv_r_Filter_14_499038_s, tv_r_Filter_14_499038_e;
    gettimeofday(&tv_r_Filter_14_499038_s, 0);
    SW_Filter_TD_14610738(tbl_SerializeFromObject_TD_15550944_input, tbl_Filter_TD_14610738_output);
    gettimeofday(&tv_r_Filter_14_499038_e, 0);

    struct timeval tv_r_Filter_13_799511_s, tv_r_Filter_13_799511_e;
    gettimeofday(&tv_r_Filter_13_799511_s, 0);
    SW_Filter_TD_13127165(tbl_SerializeFromObject_TD_14548882_input, tbl_Filter_TD_13127165_output);
    gettimeofday(&tv_r_Filter_13_799511_e, 0);

    struct timeval tv_r_JOIN_INNER_13_5038_s, tv_r_JOIN_INNER_13_5038_e;
    gettimeofday(&tv_r_JOIN_INNER_13_5038_s, 0);
    SW_JOIN_INNER_TD_13954203(tbl_Filter_TD_14610738_output, tbl_Filter_TD_14141034_output, tbl_JOIN_INNER_TD_13954203_output);
    gettimeofday(&tv_r_JOIN_INNER_13_5038_e, 0);

    struct timeval tv_r_Filter_12_457444_s, tv_r_Filter_12_457444_e;
    gettimeofday(&tv_r_Filter_12_457444_s, 0);
    SW_Filter_TD_12394126(tbl_SerializeFromObject_TD_13903586_input, tbl_Filter_TD_12394126_output);
    gettimeofday(&tv_r_Filter_12_457444_e, 0);

    struct timeval tv_r_JOIN_INNER_12_498177_s, tv_r_JOIN_INNER_12_498177_e;
    gettimeofday(&tv_r_JOIN_INNER_12_498177_s, 0);
    SW_JOIN_INNER_TD_12548352(tbl_JOIN_INNER_TD_13954203_output, tbl_Filter_TD_13127165_output, tbl_JOIN_INNER_TD_12548352_output);
    gettimeofday(&tv_r_JOIN_INNER_12_498177_e, 0);

    struct timeval tv_r_Filter_11_362560_s, tv_r_Filter_11_362560_e;
    gettimeofday(&tv_r_Filter_11_362560_s, 0);
    SW_Filter_TD_11629310(tbl_SerializeFromObject_TD_12200729_input, tbl_Filter_TD_11629310_output);
    gettimeofday(&tv_r_Filter_11_362560_e, 0);

    struct timeval tv_r_JOIN_INNER_11_550539_s, tv_r_JOIN_INNER_11_550539_e;
    gettimeofday(&tv_r_JOIN_INNER_11_550539_s, 0);
    SW_JOIN_INNER_TD_1134526(tbl_JOIN_INNER_TD_12548352_output, tbl_Filter_TD_12394126_output, tbl_JOIN_INNER_TD_1134526_output);
    gettimeofday(&tv_r_JOIN_INNER_11_550539_e, 0);

    struct timeval tv_r_Filter_10_212902_s, tv_r_Filter_10_212902_e;
    gettimeofday(&tv_r_Filter_10_212902_s, 0);
    SW_Filter_TD_10682466(tbl_SerializeFromObject_TD_11251179_input, tbl_Filter_TD_10682466_output);
    gettimeofday(&tv_r_Filter_10_212902_e, 0);

    struct timeval tv_r_JOIN_INNER_10_258501_s, tv_r_JOIN_INNER_10_258501_e;
    gettimeofday(&tv_r_JOIN_INNER_10_258501_s, 0);
    SW_JOIN_INNER_TD_10512967(tbl_JOIN_INNER_TD_1134526_output, tbl_Filter_TD_11629310_output, tbl_JOIN_INNER_TD_10512967_output);
    gettimeofday(&tv_r_JOIN_INNER_10_258501_e, 0);

    struct timeval tv_r_Filter_9_641634_s, tv_r_Filter_9_641634_e;
    gettimeofday(&tv_r_Filter_9_641634_s, 0);
    SW_Filter_TD_9701751(tbl_SerializeFromObject_TD_10130575_input, tbl_Filter_TD_9701751_output);
    gettimeofday(&tv_r_Filter_9_641634_e, 0);

    struct timeval tv_r_JOIN_INNER_9_799953_s, tv_r_JOIN_INNER_9_799953_e;
    gettimeofday(&tv_r_JOIN_INNER_9_799953_s, 0);
    SW_JOIN_INNER_TD_9217039(tbl_JOIN_INNER_TD_10512967_output, tbl_Filter_TD_10682466_output, tbl_JOIN_INNER_TD_9217039_output);
    gettimeofday(&tv_r_JOIN_INNER_9_799953_e, 0);

    struct timeval tv_r_Filter_8_766181_s, tv_r_Filter_8_766181_e;
    gettimeofday(&tv_r_Filter_8_766181_s, 0);
    SW_Filter_TD_8869621(tbl_SerializeFromObject_TD_9555523_input, tbl_Filter_TD_8869621_output);
    gettimeofday(&tv_r_Filter_8_766181_e, 0);

    struct timeval tv_r_JOIN_INNER_8_752889_s, tv_r_JOIN_INNER_8_752889_e;
    gettimeofday(&tv_r_JOIN_INNER_8_752889_s, 0);
    SW_JOIN_INNER_TD_859021(tbl_JOIN_INNER_TD_9217039_output, tbl_Filter_TD_9701751_output, tbl_JOIN_INNER_TD_859021_output);
    gettimeofday(&tv_r_JOIN_INNER_8_752889_e, 0);

    struct timeval tv_r_Filter_7_565896_s, tv_r_Filter_7_565896_e;
    gettimeofday(&tv_r_Filter_7_565896_s, 0);
    SW_Filter_TD_7271269(tbl_SerializeFromObject_TD_8119017_input, tbl_Filter_TD_7271269_output);
    gettimeofday(&tv_r_Filter_7_565896_e, 0);

    struct timeval tv_r_JOIN_INNER_7_34999_s, tv_r_JOIN_INNER_7_34999_e;
    gettimeofday(&tv_r_JOIN_INNER_7_34999_s, 0);
    SW_JOIN_INNER_TD_7191780(tbl_JOIN_INNER_TD_859021_output, tbl_Filter_TD_8869621_output, tbl_JOIN_INNER_TD_7191780_output);
    gettimeofday(&tv_r_JOIN_INNER_7_34999_e, 0);

    struct timeval tv_r_Filter_6_676271_s, tv_r_Filter_6_676271_e;
    gettimeofday(&tv_r_Filter_6_676271_s, 0);
    SW_Filter_TD_6800157(tbl_SerializeFromObject_TD_7112138_input, tbl_Filter_TD_6800157_output);
    gettimeofday(&tv_r_Filter_6_676271_e, 0);

    struct timeval tv_r_JOIN_INNER_6_76027_s, tv_r_JOIN_INNER_6_76027_e;
    gettimeofday(&tv_r_JOIN_INNER_6_76027_s, 0);
    SW_JOIN_INNER_TD_6683758(tbl_JOIN_INNER_TD_7191780_output, tbl_Filter_TD_7271269_output, tbl_JOIN_INNER_TD_6683758_output);
    gettimeofday(&tv_r_JOIN_INNER_6_76027_e, 0);

    struct timeval tv_r_Filter_5_800287_s, tv_r_Filter_5_800287_e;
    gettimeofday(&tv_r_Filter_5_800287_s, 0);
    SW_Filter_TD_5726448(tbl_SerializeFromObject_TD_6691106_input, tbl_Filter_TD_5726448_output);
    gettimeofday(&tv_r_Filter_5_800287_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_5_948450_s, tv_r_JOIN_LEFTOUTER_5_948450_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_948450_s, 0);
    SW_JOIN_LEFTOUTER_TD_5593677(tbl_JOIN_INNER_TD_6683758_output, tbl_Filter_TD_6800157_output, tbl_JOIN_LEFTOUTER_TD_5593677_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_948450_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_4_855487_s, tv_r_JOIN_LEFTOUTER_4_855487_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_4_855487_s, 0);
    SW_JOIN_LEFTOUTER_TD_4446657(tbl_JOIN_LEFTOUTER_TD_5593677_output, tbl_Filter_TD_5726448_output, tbl_JOIN_LEFTOUTER_TD_4446657_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_4_855487_e, 0);

    struct timeval tv_r_Aggregate_3_348892_s, tv_r_Aggregate_3_348892_e;
    gettimeofday(&tv_r_Aggregate_3_348892_s, 0);
    SW_Aggregate_TD_3846070(tbl_JOIN_LEFTOUTER_TD_4446657_output, tbl_Aggregate_TD_3846070_output);
    gettimeofday(&tv_r_Aggregate_3_348892_e, 0);

    struct timeval tv_r_Sort_2_496405_s, tv_r_Sort_2_496405_e;
    gettimeofday(&tv_r_Sort_2_496405_s, 0);
    SW_Sort_TD_2462288(tbl_Aggregate_TD_3846070_output, tbl_Sort_TD_2462288_output);
    gettimeofday(&tv_r_Sort_2_496405_e, 0);

    struct timeval tv_r_LocalLimit_1_437085_s, tv_r_LocalLimit_1_437085_e;
    gettimeofday(&tv_r_LocalLimit_1_437085_s, 0);
    SW_LocalLimit_TD_1508215(tbl_Sort_TD_2462288_output, tbl_LocalLimit_TD_1508215_output);
    gettimeofday(&tv_r_LocalLimit_1_437085_e, 0);

    struct timeval tv_r_GlobalLimit_0_911792_s, tv_r_GlobalLimit_0_911792_e;
    gettimeofday(&tv_r_GlobalLimit_0_911792_s, 0);
    SW_GlobalLimit_TD_0453784(tbl_LocalLimit_TD_1508215_output, tbl_GlobalLimit_TD_0453784_output);
    gettimeofday(&tv_r_GlobalLimit_0_911792_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_458796_s, &tv_r_Filter_14_458796_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15511874_input: " << tbl_SerializeFromObject_TD_15511874_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_499038_s, &tv_r_Filter_14_499038_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15550944_input: " << tbl_SerializeFromObject_TD_15550944_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_799511_s, &tv_r_Filter_13_799511_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14548882_input: " << tbl_SerializeFromObject_TD_14548882_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_5038_s, &tv_r_JOIN_INNER_13_5038_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14610738_output: " << tbl_Filter_TD_14610738_output.getNumRow() << " " << "tbl_Filter_TD_14141034_output: " << tbl_Filter_TD_14141034_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_457444_s, &tv_r_Filter_12_457444_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13903586_input: " << tbl_SerializeFromObject_TD_13903586_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_498177_s, &tv_r_JOIN_INNER_12_498177_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13954203_output: " << tbl_JOIN_INNER_TD_13954203_output.getNumRow() << " " << "tbl_Filter_TD_13127165_output: " << tbl_Filter_TD_13127165_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_362560_s, &tv_r_Filter_11_362560_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12200729_input: " << tbl_SerializeFromObject_TD_12200729_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_550539_s, &tv_r_JOIN_INNER_11_550539_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12548352_output: " << tbl_JOIN_INNER_TD_12548352_output.getNumRow() << " " << "tbl_Filter_TD_12394126_output: " << tbl_Filter_TD_12394126_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_212902_s, &tv_r_Filter_10_212902_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11251179_input: " << tbl_SerializeFromObject_TD_11251179_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_258501_s, &tv_r_JOIN_INNER_10_258501_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1134526_output: " << tbl_JOIN_INNER_TD_1134526_output.getNumRow() << " " << "tbl_Filter_TD_11629310_output: " << tbl_Filter_TD_11629310_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_641634_s, &tv_r_Filter_9_641634_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10130575_input: " << tbl_SerializeFromObject_TD_10130575_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_799953_s, &tv_r_JOIN_INNER_9_799953_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10512967_output: " << tbl_JOIN_INNER_TD_10512967_output.getNumRow() << " " << "tbl_Filter_TD_10682466_output: " << tbl_Filter_TD_10682466_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_766181_s, &tv_r_Filter_8_766181_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9555523_input: " << tbl_SerializeFromObject_TD_9555523_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_752889_s, &tv_r_JOIN_INNER_8_752889_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9217039_output: " << tbl_JOIN_INNER_TD_9217039_output.getNumRow() << " " << "tbl_Filter_TD_9701751_output: " << tbl_Filter_TD_9701751_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_565896_s, &tv_r_Filter_7_565896_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8119017_input: " << tbl_SerializeFromObject_TD_8119017_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_34999_s, &tv_r_JOIN_INNER_7_34999_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_859021_output: " << tbl_JOIN_INNER_TD_859021_output.getNumRow() << " " << "tbl_Filter_TD_8869621_output: " << tbl_Filter_TD_8869621_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_676271_s, &tv_r_Filter_6_676271_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7112138_input: " << tbl_SerializeFromObject_TD_7112138_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_76027_s, &tv_r_JOIN_INNER_6_76027_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7191780_output: " << tbl_JOIN_INNER_TD_7191780_output.getNumRow() << " " << "tbl_Filter_TD_7271269_output: " << tbl_Filter_TD_7271269_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_800287_s, &tv_r_Filter_5_800287_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6691106_input: " << tbl_SerializeFromObject_TD_6691106_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_5: " << tvdiff(&tv_r_JOIN_LEFTOUTER_5_948450_s, &tv_r_JOIN_LEFTOUTER_5_948450_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6683758_output: " << tbl_JOIN_INNER_TD_6683758_output.getNumRow() << " " << "tbl_Filter_TD_6800157_output: " << tbl_Filter_TD_6800157_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_4: " << tvdiff(&tv_r_JOIN_LEFTOUTER_4_855487_s, &tv_r_JOIN_LEFTOUTER_4_855487_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_5593677_output: " << tbl_JOIN_LEFTOUTER_TD_5593677_output.getNumRow() << " " << "tbl_Filter_TD_5726448_output: " << tbl_Filter_TD_5726448_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_348892_s, &tv_r_Aggregate_3_348892_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_4446657_output: " << tbl_JOIN_LEFTOUTER_TD_4446657_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_496405_s, &tv_r_Sort_2_496405_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3846070_output: " << tbl_Aggregate_TD_3846070_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_437085_s, &tv_r_LocalLimit_1_437085_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2462288_output: " << tbl_Sort_TD_2462288_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_911792_s, &tv_r_GlobalLimit_0_911792_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1508215_output: " << tbl_LocalLimit_TD_1508215_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 19.252613 * 1000 << "ms" << std::endl; 
    return 0; 
}
