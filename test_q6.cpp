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

#include "cfgFunc_q6.hpp" 
#include "q6.hpp" 

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
    std::cout << "NOTE:running query #6\n."; 
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
    Table tbl_GlobalLimit_TD_0194_output("tbl_GlobalLimit_TD_0194_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0194_output.allocateHost();
    Table tbl_LocalLimit_TD_1116_output("tbl_LocalLimit_TD_1116_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1116_output.allocateHost();
    Table tbl_Sort_TD_2166_output("tbl_Sort_TD_2166_output", 6100000, 2, "");
    tbl_Sort_TD_2166_output.allocateHost();
    Table tbl_Filter_TD_3700_output("tbl_Filter_TD_3700_output", 6100000, 2, "");
    tbl_Filter_TD_3700_output.allocateHost();
    Table tbl_Aggregate_TD_4818_output("tbl_Aggregate_TD_4818_output", 6100000, 2, "");
    tbl_Aggregate_TD_4818_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5360_output("tbl_JOIN_INNER_TD_5360_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5360_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6355_output("tbl_JOIN_INNER_TD_6355_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6355_output.allocateHost();
    Table tbl_Filter_TD_6144_output("tbl_Filter_TD_6144_output", 6100000, 1, "");
    tbl_Filter_TD_6144_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7719_output("tbl_JOIN_INNER_TD_7719_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_7719_output.allocateHost();
    Table tbl_Filter_TD_7921_output("tbl_Filter_TD_7921_output", 6100000, 1, "");
    tbl_Filter_TD_7921_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_7299_output("tbl_JOIN_LEFTOUTER_TD_7299_output", 6100000, 3, "");
    tbl_JOIN_LEFTOUTER_TD_7299_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8362_output("tbl_JOIN_INNER_TD_8362_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_8362_output.allocateHost();
    Table tbl_Filter_TD_8230_output("tbl_Filter_TD_8230_output", 6100000, 3, "");
    tbl_Filter_TD_8230_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8781_input;
    tbl_SerializeFromObject_TD_8781_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8781_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8781_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8781_input.allocateHost();
    tbl_SerializeFromObject_TD_8781_input.loadHost();
    Table tbl_Aggregate_TD_8592_output("tbl_Aggregate_TD_8592_output", 6100000, 1, "");
    tbl_Aggregate_TD_8592_output.allocateHost();
    Table tbl_Filter_TD_8696_output("tbl_Filter_TD_8696_output", 6100000, 3, "");
    tbl_Filter_TD_8696_output.allocateHost();
    Table tbl_Aggregate_TD_8932_output("tbl_Aggregate_TD_8932_output", 6100000, 2, "");
    tbl_Aggregate_TD_8932_output.allocateHost();
    Table tbl_Filter_TD_9643_output("tbl_Filter_TD_9643_output", 6100000, 2, "");
    tbl_Filter_TD_9643_output.allocateHost();
    Table tbl_Filter_TD_9831_output("tbl_Filter_TD_9831_output", 6100000, 2, "");
    tbl_Filter_TD_9831_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9832_input;
    tbl_SerializeFromObject_TD_9832_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9832_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9832_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9832_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9832_input.allocateHost();
    tbl_SerializeFromObject_TD_9832_input.loadHost();
    Table tbl_Filter_TD_9114_output("tbl_Filter_TD_9114_output", 6100000, 1, "");
    tbl_Filter_TD_9114_output.allocateHost();
    Table tbl_SerializeFromObject_TD_997_input;
    tbl_SerializeFromObject_TD_997_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_997_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_997_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_997_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_997_input.allocateHost();
    tbl_SerializeFromObject_TD_997_input.loadHost();
    Table tbl_Filter_TD_9837_output("tbl_Filter_TD_9837_output", 6100000, 2, "");
    tbl_Filter_TD_9837_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10349_input;
    tbl_SerializeFromObject_TD_10349_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10349_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10349_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10349_input.allocateHost();
    tbl_SerializeFromObject_TD_10349_input.loadHost();
    Table tbl_SerializeFromObject_TD_10955_input;
    tbl_SerializeFromObject_TD_10955_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10955_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_10955_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_10955_input.allocateHost();
    tbl_SerializeFromObject_TD_10955_input.loadHost();
    Table tbl_SerializeFromObject_TD_10645_input;
    tbl_SerializeFromObject_TD_10645_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10645_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_10645_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10645_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10645_input.allocateHost();
    tbl_SerializeFromObject_TD_10645_input.loadHost();
    Table tbl_SerializeFromObject_TD_10158_input;
    tbl_SerializeFromObject_TD_10158_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10158_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_10158_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10158_input.allocateHost();
    tbl_SerializeFromObject_TD_10158_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_820091_s, tv_r_Filter_9_820091_e;
    gettimeofday(&tv_r_Filter_9_820091_s, 0);
    SW_Filter_TD_9837(tbl_SerializeFromObject_TD_10158_input, tbl_Filter_TD_9837_output);
    gettimeofday(&tv_r_Filter_9_820091_e, 0);

    struct timeval tv_r_Filter_9_952263_s, tv_r_Filter_9_952263_e;
    gettimeofday(&tv_r_Filter_9_952263_s, 0);
    SW_Filter_TD_9114(tbl_SerializeFromObject_TD_10645_input, tbl_Filter_TD_9114_output);
    gettimeofday(&tv_r_Filter_9_952263_e, 0);

    struct timeval tv_r_Filter_9_227809_s, tv_r_Filter_9_227809_e;
    gettimeofday(&tv_r_Filter_9_227809_s, 0);
    SW_Filter_TD_9831(tbl_SerializeFromObject_TD_10955_input, tbl_Filter_TD_9831_output);
    gettimeofday(&tv_r_Filter_9_227809_e, 0);

    struct timeval tv_r_Filter_9_156297_s, tv_r_Filter_9_156297_e;
    gettimeofday(&tv_r_Filter_9_156297_s, 0);
    SW_Filter_TD_9643(tbl_SerializeFromObject_TD_10349_input, tbl_Filter_TD_9643_output);
    gettimeofday(&tv_r_Filter_9_156297_e, 0);

    struct timeval tv_r_Aggregate_8_778251_s, tv_r_Aggregate_8_778251_e;
    gettimeofday(&tv_r_Aggregate_8_778251_s, 0);
    SW_Aggregate_TD_8932(tbl_Filter_TD_9837_output, tbl_Aggregate_TD_8932_output);
    gettimeofday(&tv_r_Aggregate_8_778251_e, 0);

    struct timeval tv_r_Filter_8_284991_s, tv_r_Filter_8_284991_e;
    gettimeofday(&tv_r_Filter_8_284991_s, 0);
    SW_Filter_TD_8696(tbl_SerializeFromObject_TD_997_input, tbl_Filter_TD_8696_output);
    gettimeofday(&tv_r_Filter_8_284991_e, 0);

    struct timeval tv_r_Aggregate_8_18304_s, tv_r_Aggregate_8_18304_e;
    gettimeofday(&tv_r_Aggregate_8_18304_s, 0);
    SW_Aggregate_TD_8592(tbl_Filter_TD_9114_output, tbl_Aggregate_TD_8592_output);
    gettimeofday(&tv_r_Aggregate_8_18304_e, 0);

    struct timeval tv_r_Filter_8_726847_s, tv_r_Filter_8_726847_e;
    gettimeofday(&tv_r_Filter_8_726847_s, 0);
    SW_Filter_TD_8230(tbl_SerializeFromObject_TD_9832_input, tbl_Filter_TD_8230_output);
    gettimeofday(&tv_r_Filter_8_726847_e, 0);

    struct timeval tv_r_JOIN_INNER_8_873919_s, tv_r_JOIN_INNER_8_873919_e;
    gettimeofday(&tv_r_JOIN_INNER_8_873919_s, 0);
    SW_JOIN_INNER_TD_8362(tbl_Filter_TD_9643_output, tbl_Filter_TD_9831_output, tbl_JOIN_INNER_TD_8362_output);
    gettimeofday(&tv_r_JOIN_INNER_8_873919_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_7_739222_s, tv_r_JOIN_LEFTOUTER_7_739222_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_739222_s, 0);
    SW_JOIN_LEFTOUTER_TD_7299(tbl_Filter_TD_8696_output, tbl_Aggregate_TD_8932_output, tbl_JOIN_LEFTOUTER_TD_7299_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_7_739222_e, 0);

    struct timeval tv_r_Filter_7_518208_s, tv_r_Filter_7_518208_e;
    gettimeofday(&tv_r_Filter_7_518208_s, 0);
    SW_Filter_TD_7921(tbl_SerializeFromObject_TD_8781_input, tbl_Aggregate_TD_8592_output, tbl_Filter_TD_7921_output);
    gettimeofday(&tv_r_Filter_7_518208_e, 0);

    struct timeval tv_r_JOIN_INNER_7_828420_s, tv_r_JOIN_INNER_7_828420_e;
    gettimeofday(&tv_r_JOIN_INNER_7_828420_s, 0);
    SW_JOIN_INNER_TD_7719(tbl_JOIN_INNER_TD_8362_output, tbl_Filter_TD_8230_output, tbl_JOIN_INNER_TD_7719_output);
    gettimeofday(&tv_r_JOIN_INNER_7_828420_e, 0);

    struct timeval tv_r_Filter_6_659760_s, tv_r_Filter_6_659760_e;
    gettimeofday(&tv_r_Filter_6_659760_s, 0);
    SW_Filter_TD_6144(tbl_JOIN_LEFTOUTER_TD_7299_output, tbl_Filter_TD_6144_output);
    gettimeofday(&tv_r_Filter_6_659760_e, 0);

    struct timeval tv_r_JOIN_INNER_6_561586_s, tv_r_JOIN_INNER_6_561586_e;
    gettimeofday(&tv_r_JOIN_INNER_6_561586_s, 0);
    SW_JOIN_INNER_TD_6355(tbl_JOIN_INNER_TD_7719_output, tbl_Filter_TD_7921_output, tbl_JOIN_INNER_TD_6355_output);
    gettimeofday(&tv_r_JOIN_INNER_6_561586_e, 0);

    struct timeval tv_r_JOIN_INNER_5_995778_s, tv_r_JOIN_INNER_5_995778_e;
    gettimeofday(&tv_r_JOIN_INNER_5_995778_s, 0);
    SW_JOIN_INNER_TD_5360(tbl_JOIN_INNER_TD_6355_output, tbl_Filter_TD_6144_output, tbl_JOIN_INNER_TD_5360_output);
    gettimeofday(&tv_r_JOIN_INNER_5_995778_e, 0);

    struct timeval tv_r_Aggregate_4_764720_s, tv_r_Aggregate_4_764720_e;
    gettimeofday(&tv_r_Aggregate_4_764720_s, 0);
    SW_Aggregate_TD_4818(tbl_JOIN_INNER_TD_5360_output, tbl_Aggregate_TD_4818_output);
    gettimeofday(&tv_r_Aggregate_4_764720_e, 0);

    struct timeval tv_r_Filter_3_224413_s, tv_r_Filter_3_224413_e;
    gettimeofday(&tv_r_Filter_3_224413_s, 0);
    SW_Filter_TD_3700(tbl_Aggregate_TD_4818_output, tbl_Filter_TD_3700_output);
    gettimeofday(&tv_r_Filter_3_224413_e, 0);

    struct timeval tv_r_Sort_2_170291_s, tv_r_Sort_2_170291_e;
    gettimeofday(&tv_r_Sort_2_170291_s, 0);
    SW_Sort_TD_2166(tbl_Filter_TD_3700_output, tbl_Sort_TD_2166_output);
    gettimeofday(&tv_r_Sort_2_170291_e, 0);

    struct timeval tv_r_LocalLimit_1_35673_s, tv_r_LocalLimit_1_35673_e;
    gettimeofday(&tv_r_LocalLimit_1_35673_s, 0);
    SW_LocalLimit_TD_1116(tbl_Sort_TD_2166_output, tbl_LocalLimit_TD_1116_output);
    gettimeofday(&tv_r_LocalLimit_1_35673_e, 0);

    struct timeval tv_r_GlobalLimit_0_469784_s, tv_r_GlobalLimit_0_469784_e;
    gettimeofday(&tv_r_GlobalLimit_0_469784_s, 0);
    SW_GlobalLimit_TD_0194(tbl_LocalLimit_TD_1116_output, tbl_GlobalLimit_TD_0194_output);
    gettimeofday(&tv_r_GlobalLimit_0_469784_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_820091_s, &tv_r_Filter_9_820091_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10158_input: " << tbl_SerializeFromObject_TD_10158_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_952263_s, &tv_r_Filter_9_952263_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10645_input: " << tbl_SerializeFromObject_TD_10645_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_227809_s, &tv_r_Filter_9_227809_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10955_input: " << tbl_SerializeFromObject_TD_10955_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_156297_s, &tv_r_Filter_9_156297_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10349_input: " << tbl_SerializeFromObject_TD_10349_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_778251_s, &tv_r_Aggregate_8_778251_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9837_output: " << tbl_Filter_TD_9837_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_284991_s, &tv_r_Filter_8_284991_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_997_input: " << tbl_SerializeFromObject_TD_997_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_18304_s, &tv_r_Aggregate_8_18304_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9114_output: " << tbl_Filter_TD_9114_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_726847_s, &tv_r_Filter_8_726847_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9832_input: " << tbl_SerializeFromObject_TD_9832_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_873919_s, &tv_r_JOIN_INNER_8_873919_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9643_output: " << tbl_Filter_TD_9643_output.getNumRow() << " " << "tbl_Filter_TD_9831_output: " << tbl_Filter_TD_9831_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_7: " << tvdiff(&tv_r_JOIN_LEFTOUTER_7_739222_s, &tv_r_JOIN_LEFTOUTER_7_739222_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8696_output: " << tbl_Filter_TD_8696_output.getNumRow() << " " << "tbl_Aggregate_TD_8932_output: " << tbl_Aggregate_TD_8932_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_518208_s, &tv_r_Filter_7_518208_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8781_input: " << tbl_SerializeFromObject_TD_8781_input.getNumRow() << " " << "tbl_Aggregate_TD_8592_output: " << tbl_Aggregate_TD_8592_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_828420_s, &tv_r_JOIN_INNER_7_828420_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8362_output: " << tbl_JOIN_INNER_TD_8362_output.getNumRow() << " " << "tbl_Filter_TD_8230_output: " << tbl_Filter_TD_8230_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_659760_s, &tv_r_Filter_6_659760_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_7299_output: " << tbl_JOIN_LEFTOUTER_TD_7299_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_561586_s, &tv_r_JOIN_INNER_6_561586_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7719_output: " << tbl_JOIN_INNER_TD_7719_output.getNumRow() << " " << "tbl_Filter_TD_7921_output: " << tbl_Filter_TD_7921_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_995778_s, &tv_r_JOIN_INNER_5_995778_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6355_output: " << tbl_JOIN_INNER_TD_6355_output.getNumRow() << " " << "tbl_Filter_TD_6144_output: " << tbl_Filter_TD_6144_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_764720_s, &tv_r_Aggregate_4_764720_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5360_output: " << tbl_JOIN_INNER_TD_5360_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_224413_s, &tv_r_Filter_3_224413_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4818_output: " << tbl_Aggregate_TD_4818_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_170291_s, &tv_r_Sort_2_170291_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3700_output: " << tbl_Filter_TD_3700_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_35673_s, &tv_r_LocalLimit_1_35673_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2166_output: " << tbl_Sort_TD_2166_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_469784_s, &tv_r_GlobalLimit_0_469784_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1116_output: " << tbl_LocalLimit_TD_1116_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.3150806 * 1000 << "ms" << std::endl; 
    return 0; 
}
