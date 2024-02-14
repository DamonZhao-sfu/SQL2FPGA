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

#include "cfgFunc_q54.hpp" 
#include "q54.hpp" 

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
    std::cout << "NOTE:running query #54\n."; 
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
    Table tbl_GlobalLimit_TD_0564_output("tbl_GlobalLimit_TD_0564_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0564_output.allocateHost();
    Table tbl_LocalLimit_TD_189_output("tbl_LocalLimit_TD_189_output", 6100000, 3, "");
    tbl_LocalLimit_TD_189_output.allocateHost();
    Table tbl_Sort_TD_2177_output("tbl_Sort_TD_2177_output", 6100000, 3, "");
    tbl_Sort_TD_2177_output.allocateHost();
    Table tbl_Aggregate_TD_3559_output("tbl_Aggregate_TD_3559_output", 6100000, 3, "");
    tbl_Aggregate_TD_3559_output.allocateHost();
    Table tbl_Aggregate_TD_4705_output("tbl_Aggregate_TD_4705_output", 6100000, 1, "");
    tbl_Aggregate_TD_4705_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5396_output("tbl_JOIN_INNER_TD_5396_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5396_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6459_output("tbl_JOIN_INNER_TD_6459_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6459_output.allocateHost();
    Table tbl_Filter_TD_695_output("tbl_Filter_TD_695_output", 6100000, 1, "");
    tbl_Filter_TD_695_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7607_output("tbl_JOIN_INNER_TD_7607_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7607_output.allocateHost();
    Table tbl_Filter_TD_7921_output("tbl_Filter_TD_7921_output", 6100000, 2, "");
    tbl_Filter_TD_7921_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7722_input;
    tbl_SerializeFromObject_TD_7722_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7722_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7722_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7722_input.allocateHost();
    tbl_SerializeFromObject_TD_7722_input.loadHost();
    Table tbl_Aggregate_TD_7203_output("tbl_Aggregate_TD_7203_output", 6100000, 1, "");
    tbl_Aggregate_TD_7203_output.allocateHost();
    Table tbl_Aggregate_TD_7969_output("tbl_Aggregate_TD_7969_output", 6100000, 1, "");
    tbl_Aggregate_TD_7969_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8990_output("tbl_JOIN_INNER_TD_8990_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8990_output.allocateHost();
    Table tbl_Filter_TD_8975_output("tbl_Filter_TD_8975_output", 6100000, 3, "");
    tbl_Filter_TD_8975_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8234_input;
    tbl_SerializeFromObject_TD_8234_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8234_input.addCol("s_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8234_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8234_input.allocateHost();
    tbl_SerializeFromObject_TD_8234_input.loadHost();
    Table tbl_Project_TD_8253_output("tbl_Project_TD_8253_output", 6100000, 1, "");
    tbl_Project_TD_8253_output.allocateHost();
    Table tbl_Project_TD_8126_output("tbl_Project_TD_8126_output", 6100000, 1, "");
    tbl_Project_TD_8126_output.allocateHost();
    Table tbl_Aggregate_TD_9899_output("tbl_Aggregate_TD_9899_output", 6100000, 2, "");
    tbl_Aggregate_TD_9899_output.allocateHost();
    Table tbl_Filter_TD_9339_output("tbl_Filter_TD_9339_output", 6100000, 3, "");
    tbl_Filter_TD_9339_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9695_input;
    tbl_SerializeFromObject_TD_9695_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9695_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9695_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9695_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9695_input.allocateHost();
    tbl_SerializeFromObject_TD_9695_input.loadHost();
    Table tbl_Filter_TD_9595_output("tbl_Filter_TD_9595_output", 6100000, 1, "");
    tbl_Filter_TD_9595_output.allocateHost();
    Table tbl_Filter_TD_9398_output("tbl_Filter_TD_9398_output", 6100000, 1, "");
    tbl_Filter_TD_9398_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10337_output("tbl_JOIN_INNER_TD_10337_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_10337_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10676_input;
    tbl_SerializeFromObject_TD_10676_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10676_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10676_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10676_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10676_input.allocateHost();
    tbl_SerializeFromObject_TD_10676_input.loadHost();
    Table tbl_SerializeFromObject_TD_10612_input;
    tbl_SerializeFromObject_TD_10612_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10612_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_10612_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10612_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10612_input.allocateHost();
    tbl_SerializeFromObject_TD_10612_input.loadHost();
    Table tbl_SerializeFromObject_TD_10926_input;
    tbl_SerializeFromObject_TD_10926_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10926_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_10926_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10926_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10926_input.allocateHost();
    tbl_SerializeFromObject_TD_10926_input.loadHost();
    Table tbl_JOIN_INNER_TD_11146_output("tbl_JOIN_INNER_TD_11146_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_11146_output.allocateHost();
    Table tbl_Filter_TD_11630_output("tbl_Filter_TD_11630_output", 6100000, 2, "");
    tbl_Filter_TD_11630_output.allocateHost();
    Table tbl_JOIN_INNER_TD_12920_output("tbl_JOIN_INNER_TD_12920_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_12920_output.allocateHost();
    Table tbl_Filter_TD_12870_output("tbl_Filter_TD_12870_output", 6100000, 1, "");
    tbl_Filter_TD_12870_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12177_input;
    tbl_SerializeFromObject_TD_12177_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12177_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12177_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_12177_input.allocateHost();
    tbl_SerializeFromObject_TD_12177_input.loadHost();
    Table tbl_Union_TD_13999_output("tbl_Union_TD_13999_output", 6100000, 3, "");
    tbl_Union_TD_13999_output.allocateHost();
    Table tbl_Filter_TD_1373_output("tbl_Filter_TD_1373_output", 6100000, 1, "");
    tbl_Filter_TD_1373_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13994_input;
    tbl_SerializeFromObject_TD_13994_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13994_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13994_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_13994_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13994_input.allocateHost();
    tbl_SerializeFromObject_TD_13994_input.loadHost();
    Table tbl_Project_TD_14511_output("tbl_Project_TD_14511_output", 6100000, 3, "");
    tbl_Project_TD_14511_output.allocateHost();
    Table tbl_Project_TD_14242_output("tbl_Project_TD_14242_output", 6100000, 3, "");
    tbl_Project_TD_14242_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14161_input;
    tbl_SerializeFromObject_TD_14161_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_14161_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_14161_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14161_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14161_input.allocateHost();
    tbl_SerializeFromObject_TD_14161_input.loadHost();
    Table tbl_Filter_TD_1538_output("tbl_Filter_TD_1538_output", 6100000, 3, "");
    tbl_Filter_TD_1538_output.allocateHost();
    Table tbl_Filter_TD_15281_output("tbl_Filter_TD_15281_output", 6100000, 3, "");
    tbl_Filter_TD_15281_output.allocateHost();
    Table tbl_SerializeFromObject_TD_16720_input;
    tbl_SerializeFromObject_TD_16720_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_16720_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_16720_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_16720_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_16720_input.allocateHost();
    tbl_SerializeFromObject_TD_16720_input.loadHost();
    Table tbl_SerializeFromObject_TD_16408_input;
    tbl_SerializeFromObject_TD_16408_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_16408_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_16408_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_16408_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_16408_input.allocateHost();
    tbl_SerializeFromObject_TD_16408_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_15_813623_s, tv_r_Filter_15_813623_e;
    gettimeofday(&tv_r_Filter_15_813623_s, 0);
    SW_Filter_TD_15281(tbl_SerializeFromObject_TD_16408_input, tbl_Filter_TD_15281_output);
    gettimeofday(&tv_r_Filter_15_813623_e, 0);

    struct timeval tv_r_Filter_15_378939_s, tv_r_Filter_15_378939_e;
    gettimeofday(&tv_r_Filter_15_378939_s, 0);
    SW_Filter_TD_1538(tbl_SerializeFromObject_TD_16720_input, tbl_Filter_TD_1538_output);
    gettimeofday(&tv_r_Filter_15_378939_e, 0);

    struct timeval tv_r_Project_14_301696_s, tv_r_Project_14_301696_e;
    gettimeofday(&tv_r_Project_14_301696_s, 0);
    SW_Project_TD_14242(tbl_Filter_TD_15281_output, tbl_Project_TD_14242_output);
    gettimeofday(&tv_r_Project_14_301696_e, 0);

    struct timeval tv_r_Project_14_845549_s, tv_r_Project_14_845549_e;
    gettimeofday(&tv_r_Project_14_845549_s, 0);
    SW_Project_TD_14511(tbl_Filter_TD_1538_output, tbl_Project_TD_14511_output);
    gettimeofday(&tv_r_Project_14_845549_e, 0);

    struct timeval tv_r_Filter_13_71487_s, tv_r_Filter_13_71487_e;
    gettimeofday(&tv_r_Filter_13_71487_s, 0);
    SW_Filter_TD_1373(tbl_SerializeFromObject_TD_14161_input, tbl_Filter_TD_1373_output);
    gettimeofday(&tv_r_Filter_13_71487_e, 0);

    struct timeval tv_r_Union_13_79762_s, tv_r_Union_13_79762_e;
    gettimeofday(&tv_r_Union_13_79762_s, 0);
    SW_Union_TD_13999(tbl_Project_TD_14511_output, tbl_Project_TD_14242_output, tbl_Union_TD_13999_output);
    gettimeofday(&tv_r_Union_13_79762_e, 0);

    struct timeval tv_r_Filter_12_836322_s, tv_r_Filter_12_836322_e;
    gettimeofday(&tv_r_Filter_12_836322_s, 0);
    SW_Filter_TD_12870(tbl_SerializeFromObject_TD_13994_input, tbl_Filter_TD_12870_output);
    gettimeofday(&tv_r_Filter_12_836322_e, 0);

    struct timeval tv_r_JOIN_INNER_12_821098_s, tv_r_JOIN_INNER_12_821098_e;
    gettimeofday(&tv_r_JOIN_INNER_12_821098_s, 0);
    SW_JOIN_INNER_TD_12920(tbl_Union_TD_13999_output, tbl_Filter_TD_1373_output, tbl_JOIN_INNER_TD_12920_output);
    gettimeofday(&tv_r_JOIN_INNER_12_821098_e, 0);

    struct timeval tv_r_Filter_11_113064_s, tv_r_Filter_11_113064_e;
    gettimeofday(&tv_r_Filter_11_113064_s, 0);
    SW_Filter_TD_11630(tbl_SerializeFromObject_TD_12177_input, tbl_Filter_TD_11630_output);
    gettimeofday(&tv_r_Filter_11_113064_e, 0);

    struct timeval tv_r_JOIN_INNER_11_729713_s, tv_r_JOIN_INNER_11_729713_e;
    gettimeofday(&tv_r_JOIN_INNER_11_729713_s, 0);
    SW_JOIN_INNER_TD_11146(tbl_JOIN_INNER_TD_12920_output, tbl_Filter_TD_12870_output, tbl_JOIN_INNER_TD_11146_output);
    gettimeofday(&tv_r_JOIN_INNER_11_729713_e, 0);

    struct timeval tv_r_JOIN_INNER_10_675289_s, tv_r_JOIN_INNER_10_675289_e;
    gettimeofday(&tv_r_JOIN_INNER_10_675289_s, 0);
    SW_JOIN_INNER_TD_10337(tbl_JOIN_INNER_TD_11146_output, tbl_Filter_TD_11630_output, tbl_JOIN_INNER_TD_10337_output);
    gettimeofday(&tv_r_JOIN_INNER_10_675289_e, 0);

    struct timeval tv_r_Filter_9_561117_s, tv_r_Filter_9_561117_e;
    gettimeofday(&tv_r_Filter_9_561117_s, 0);
    SW_Filter_TD_9398(tbl_SerializeFromObject_TD_10926_input, tbl_Filter_TD_9398_output);
    gettimeofday(&tv_r_Filter_9_561117_e, 0);

    struct timeval tv_r_Filter_9_377627_s, tv_r_Filter_9_377627_e;
    gettimeofday(&tv_r_Filter_9_377627_s, 0);
    SW_Filter_TD_9595(tbl_SerializeFromObject_TD_10612_input, tbl_Filter_TD_9595_output);
    gettimeofday(&tv_r_Filter_9_377627_e, 0);

    struct timeval tv_r_Filter_9_467329_s, tv_r_Filter_9_467329_e;
    gettimeofday(&tv_r_Filter_9_467329_s, 0);
    SW_Filter_TD_9339(tbl_SerializeFromObject_TD_10676_input, tbl_Filter_TD_9339_output);
    gettimeofday(&tv_r_Filter_9_467329_e, 0);

    struct timeval tv_r_Aggregate_9_759482_s, tv_r_Aggregate_9_759482_e;
    gettimeofday(&tv_r_Aggregate_9_759482_s, 0);
    SW_Aggregate_TD_9899(tbl_JOIN_INNER_TD_10337_output, tbl_Aggregate_TD_9899_output);
    gettimeofday(&tv_r_Aggregate_9_759482_e, 0);

    struct timeval tv_r_Project_8_374482_s, tv_r_Project_8_374482_e;
    gettimeofday(&tv_r_Project_8_374482_s, 0);
    SW_Project_TD_8126(tbl_Filter_TD_9398_output, tbl_Project_TD_8126_output);
    gettimeofday(&tv_r_Project_8_374482_e, 0);

    struct timeval tv_r_Project_8_782166_s, tv_r_Project_8_782166_e;
    gettimeofday(&tv_r_Project_8_782166_s, 0);
    SW_Project_TD_8253(tbl_Filter_TD_9595_output, tbl_Project_TD_8253_output);
    gettimeofday(&tv_r_Project_8_782166_e, 0);

    struct timeval tv_r_Filter_8_140790_s, tv_r_Filter_8_140790_e;
    gettimeofday(&tv_r_Filter_8_140790_s, 0);
    SW_Filter_TD_8975(tbl_SerializeFromObject_TD_9695_input, tbl_Filter_TD_8975_output);
    gettimeofday(&tv_r_Filter_8_140790_e, 0);

    struct timeval tv_r_JOIN_INNER_8_707905_s, tv_r_JOIN_INNER_8_707905_e;
    gettimeofday(&tv_r_JOIN_INNER_8_707905_s, 0);
    SW_JOIN_INNER_TD_8990(tbl_Aggregate_TD_9899_output, tbl_Filter_TD_9339_output, tbl_JOIN_INNER_TD_8990_output);
    gettimeofday(&tv_r_JOIN_INNER_8_707905_e, 0);

    struct timeval tv_r_Aggregate_7_793383_s, tv_r_Aggregate_7_793383_e;
    gettimeofday(&tv_r_Aggregate_7_793383_s, 0);
    SW_Aggregate_TD_7969(tbl_Project_TD_8126_output, tbl_Aggregate_TD_7969_output);
    gettimeofday(&tv_r_Aggregate_7_793383_e, 0);

    struct timeval tv_r_Aggregate_7_693012_s, tv_r_Aggregate_7_693012_e;
    gettimeofday(&tv_r_Aggregate_7_693012_s, 0);
    SW_Aggregate_TD_7203(tbl_Project_TD_8253_output, tbl_Aggregate_TD_7203_output);
    gettimeofday(&tv_r_Aggregate_7_693012_e, 0);

    struct timeval tv_r_Filter_7_995073_s, tv_r_Filter_7_995073_e;
    gettimeofday(&tv_r_Filter_7_995073_s, 0);
    SW_Filter_TD_7921(tbl_SerializeFromObject_TD_8234_input, tbl_Filter_TD_7921_output);
    gettimeofday(&tv_r_Filter_7_995073_e, 0);

    struct timeval tv_r_JOIN_INNER_7_388350_s, tv_r_JOIN_INNER_7_388350_e;
    gettimeofday(&tv_r_JOIN_INNER_7_388350_s, 0);
    SW_JOIN_INNER_TD_7607(tbl_JOIN_INNER_TD_8990_output, tbl_Filter_TD_8975_output, tbl_JOIN_INNER_TD_7607_output);
    gettimeofday(&tv_r_JOIN_INNER_7_388350_e, 0);

    struct timeval tv_r_Filter_6_266063_s, tv_r_Filter_6_266063_e;
    gettimeofday(&tv_r_Filter_6_266063_s, 0);
    SW_Filter_TD_695(tbl_SerializeFromObject_TD_7722_input, tbl_Aggregate_TD_7203_output, tbl_Aggregate_TD_7969_output, tbl_Filter_TD_695_output);
    gettimeofday(&tv_r_Filter_6_266063_e, 0);

    struct timeval tv_r_JOIN_INNER_6_571403_s, tv_r_JOIN_INNER_6_571403_e;
    gettimeofday(&tv_r_JOIN_INNER_6_571403_s, 0);
    SW_JOIN_INNER_TD_6459(tbl_JOIN_INNER_TD_7607_output, tbl_Filter_TD_7921_output, tbl_JOIN_INNER_TD_6459_output);
    gettimeofday(&tv_r_JOIN_INNER_6_571403_e, 0);

    struct timeval tv_r_JOIN_INNER_5_696043_s, tv_r_JOIN_INNER_5_696043_e;
    gettimeofday(&tv_r_JOIN_INNER_5_696043_s, 0);
    SW_JOIN_INNER_TD_5396(tbl_JOIN_INNER_TD_6459_output, tbl_Filter_TD_695_output, tbl_JOIN_INNER_TD_5396_output);
    gettimeofday(&tv_r_JOIN_INNER_5_696043_e, 0);

    struct timeval tv_r_Aggregate_4_667694_s, tv_r_Aggregate_4_667694_e;
    gettimeofday(&tv_r_Aggregate_4_667694_s, 0);
    SW_Aggregate_TD_4705(tbl_JOIN_INNER_TD_5396_output, tbl_Aggregate_TD_4705_output);
    gettimeofday(&tv_r_Aggregate_4_667694_e, 0);

    struct timeval tv_r_Aggregate_3_573762_s, tv_r_Aggregate_3_573762_e;
    gettimeofday(&tv_r_Aggregate_3_573762_s, 0);
    SW_Aggregate_TD_3559(tbl_Aggregate_TD_4705_output, tbl_Aggregate_TD_3559_output);
    gettimeofday(&tv_r_Aggregate_3_573762_e, 0);

    struct timeval tv_r_Sort_2_284303_s, tv_r_Sort_2_284303_e;
    gettimeofday(&tv_r_Sort_2_284303_s, 0);
    SW_Sort_TD_2177(tbl_Aggregate_TD_3559_output, tbl_Sort_TD_2177_output);
    gettimeofday(&tv_r_Sort_2_284303_e, 0);

    struct timeval tv_r_LocalLimit_1_752981_s, tv_r_LocalLimit_1_752981_e;
    gettimeofday(&tv_r_LocalLimit_1_752981_s, 0);
    SW_LocalLimit_TD_189(tbl_Sort_TD_2177_output, tbl_LocalLimit_TD_189_output);
    gettimeofday(&tv_r_LocalLimit_1_752981_e, 0);

    struct timeval tv_r_GlobalLimit_0_55397_s, tv_r_GlobalLimit_0_55397_e;
    gettimeofday(&tv_r_GlobalLimit_0_55397_s, 0);
    SW_GlobalLimit_TD_0564(tbl_LocalLimit_TD_189_output, tbl_GlobalLimit_TD_0564_output);
    gettimeofday(&tv_r_GlobalLimit_0_55397_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_813623_s, &tv_r_Filter_15_813623_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_16408_input: " << tbl_SerializeFromObject_TD_16408_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_378939_s, &tv_r_Filter_15_378939_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_16720_input: " << tbl_SerializeFromObject_TD_16720_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_14: " << tvdiff(&tv_r_Project_14_301696_s, &tv_r_Project_14_301696_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_15281_output: " << tbl_Filter_TD_15281_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_14: " << tvdiff(&tv_r_Project_14_845549_s, &tv_r_Project_14_845549_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1538_output: " << tbl_Filter_TD_1538_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_71487_s, &tv_r_Filter_13_71487_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14161_input: " << tbl_SerializeFromObject_TD_14161_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_13: " << tvdiff(&tv_r_Union_13_79762_s, &tv_r_Union_13_79762_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_14511_output: " << tbl_Project_TD_14511_output.getNumRow() << " " << "tbl_Project_TD_14242_output: " << tbl_Project_TD_14242_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_836322_s, &tv_r_Filter_12_836322_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13994_input: " << tbl_SerializeFromObject_TD_13994_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_821098_s, &tv_r_JOIN_INNER_12_821098_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_13999_output: " << tbl_Union_TD_13999_output.getNumRow() << " " << "tbl_Filter_TD_1373_output: " << tbl_Filter_TD_1373_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_113064_s, &tv_r_Filter_11_113064_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12177_input: " << tbl_SerializeFromObject_TD_12177_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_729713_s, &tv_r_JOIN_INNER_11_729713_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12920_output: " << tbl_JOIN_INNER_TD_12920_output.getNumRow() << " " << "tbl_Filter_TD_12870_output: " << tbl_Filter_TD_12870_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_675289_s, &tv_r_JOIN_INNER_10_675289_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11146_output: " << tbl_JOIN_INNER_TD_11146_output.getNumRow() << " " << "tbl_Filter_TD_11630_output: " << tbl_Filter_TD_11630_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_561117_s, &tv_r_Filter_9_561117_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10926_input: " << tbl_SerializeFromObject_TD_10926_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_377627_s, &tv_r_Filter_9_377627_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10612_input: " << tbl_SerializeFromObject_TD_10612_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_467329_s, &tv_r_Filter_9_467329_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10676_input: " << tbl_SerializeFromObject_TD_10676_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_759482_s, &tv_r_Aggregate_9_759482_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10337_output: " << tbl_JOIN_INNER_TD_10337_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_374482_s, &tv_r_Project_8_374482_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9398_output: " << tbl_Filter_TD_9398_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_782166_s, &tv_r_Project_8_782166_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9595_output: " << tbl_Filter_TD_9595_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_140790_s, &tv_r_Filter_8_140790_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9695_input: " << tbl_SerializeFromObject_TD_9695_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_707905_s, &tv_r_JOIN_INNER_8_707905_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9899_output: " << tbl_Aggregate_TD_9899_output.getNumRow() << " " << "tbl_Filter_TD_9339_output: " << tbl_Filter_TD_9339_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_793383_s, &tv_r_Aggregate_7_793383_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8126_output: " << tbl_Project_TD_8126_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_693012_s, &tv_r_Aggregate_7_693012_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8253_output: " << tbl_Project_TD_8253_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_995073_s, &tv_r_Filter_7_995073_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8234_input: " << tbl_SerializeFromObject_TD_8234_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_388350_s, &tv_r_JOIN_INNER_7_388350_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8990_output: " << tbl_JOIN_INNER_TD_8990_output.getNumRow() << " " << "tbl_Filter_TD_8975_output: " << tbl_Filter_TD_8975_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_266063_s, &tv_r_Filter_6_266063_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7722_input: " << tbl_SerializeFromObject_TD_7722_input.getNumRow() << " " << "tbl_Aggregate_TD_7203_output: " << tbl_Aggregate_TD_7203_output.getNumRow() << " " << "tbl_Aggregate_TD_7969_output: " << tbl_Aggregate_TD_7969_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_571403_s, &tv_r_JOIN_INNER_6_571403_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7607_output: " << tbl_JOIN_INNER_TD_7607_output.getNumRow() << " " << "tbl_Filter_TD_7921_output: " << tbl_Filter_TD_7921_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_696043_s, &tv_r_JOIN_INNER_5_696043_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6459_output: " << tbl_JOIN_INNER_TD_6459_output.getNumRow() << " " << "tbl_Filter_TD_695_output: " << tbl_Filter_TD_695_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_667694_s, &tv_r_Aggregate_4_667694_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5396_output: " << tbl_JOIN_INNER_TD_5396_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_573762_s, &tv_r_Aggregate_3_573762_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4705_output: " << tbl_Aggregate_TD_4705_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_284303_s, &tv_r_Sort_2_284303_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3559_output: " << tbl_Aggregate_TD_3559_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_752981_s, &tv_r_LocalLimit_1_752981_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2177_output: " << tbl_Sort_TD_2177_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_55397_s, &tv_r_GlobalLimit_0_55397_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_189_output: " << tbl_LocalLimit_TD_189_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.8475752 * 1000 << "ms" << std::endl; 
    return 0; 
}
