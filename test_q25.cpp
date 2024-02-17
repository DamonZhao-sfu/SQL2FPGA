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

#include "cfgFunc_q25.hpp" 
#include "q25.hpp" 

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
    std::cout << "NOTE:running query #25\n."; 
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
    Table tbl_GlobalLimit_TD_0892_output("tbl_GlobalLimit_TD_0892_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0892_output.allocateHost();
    Table tbl_LocalLimit_TD_195_output("tbl_LocalLimit_TD_195_output", 6100000, 7, "");
    tbl_LocalLimit_TD_195_output.allocateHost();
    Table tbl_Sort_TD_2867_output("tbl_Sort_TD_2867_output", 6100000, 7, "");
    tbl_Sort_TD_2867_output.allocateHost();
    Table tbl_Aggregate_TD_3820_output("tbl_Aggregate_TD_3820_output", 6100000, 7, "");
    tbl_Aggregate_TD_3820_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4134_output("tbl_JOIN_INNER_TD_4134_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4134_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5714_output("tbl_JOIN_INNER_TD_5714_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5714_output.allocateHost();
    Table tbl_Filter_TD_5718_output("tbl_Filter_TD_5718_output", 6100000, 3, "");
    tbl_Filter_TD_5718_output.allocateHost();
    Table tbl_JOIN_INNER_TD_65_output("tbl_JOIN_INNER_TD_65_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_65_output.allocateHost();
    Table tbl_Filter_TD_6839_output("tbl_Filter_TD_6839_output", 6100000, 3, "");
    tbl_Filter_TD_6839_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6679_input;
    tbl_SerializeFromObject_TD_6679_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6679_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6679_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6679_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6679_input.allocateHost();
    tbl_SerializeFromObject_TD_6679_input.loadHost();
    Table tbl_JOIN_INNER_TD_7985_output("tbl_JOIN_INNER_TD_7985_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7985_output.allocateHost();
    Table tbl_Filter_TD_7249_output("tbl_Filter_TD_7249_output", 6100000, 1, "");
    tbl_Filter_TD_7249_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7318_input;
    tbl_SerializeFromObject_TD_7318_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7318_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7318_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7318_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7318_input.allocateHost();
    tbl_SerializeFromObject_TD_7318_input.loadHost();
    Table tbl_JOIN_INNER_TD_8913_output("tbl_JOIN_INNER_TD_8913_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8913_output.allocateHost();
    Table tbl_Filter_TD_8130_output("tbl_Filter_TD_8130_output", 6100000, 1, "");
    tbl_Filter_TD_8130_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8525_input;
    tbl_SerializeFromObject_TD_8525_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8525_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8525_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8525_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8525_input.allocateHost();
    tbl_SerializeFromObject_TD_8525_input.loadHost();
    Table tbl_JOIN_INNER_TD_9336_output("tbl_JOIN_INNER_TD_9336_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_9336_output.allocateHost();
    Table tbl_Filter_TD_9263_output("tbl_Filter_TD_9263_output", 6100000, 1, "");
    tbl_Filter_TD_9263_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9272_input;
    tbl_SerializeFromObject_TD_9272_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9272_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9272_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9272_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9272_input.allocateHost();
    tbl_SerializeFromObject_TD_9272_input.loadHost();
    Table tbl_JOIN_INNER_TD_10467_output("tbl_JOIN_INNER_TD_10467_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_10467_output.allocateHost();
    Table tbl_Filter_TD_10378_output("tbl_Filter_TD_10378_output", 6100000, 4, "");
    tbl_Filter_TD_10378_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10896_input;
    tbl_SerializeFromObject_TD_10896_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10896_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10896_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10896_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10896_input.allocateHost();
    tbl_SerializeFromObject_TD_10896_input.loadHost();
    Table tbl_Filter_TD_11915_output("tbl_Filter_TD_11915_output", 6100000, 6, "");
    tbl_Filter_TD_11915_output.allocateHost();
    Table tbl_Filter_TD_11669_output("tbl_Filter_TD_11669_output", 6100000, 5, "");
    tbl_Filter_TD_11669_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11990_input;
    tbl_SerializeFromObject_TD_11990_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11990_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11990_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11990_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_11990_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_11990_input.allocateHost();
    tbl_SerializeFromObject_TD_11990_input.loadHost();
    Table tbl_SerializeFromObject_TD_12431_input;
    tbl_SerializeFromObject_TD_12431_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_12431_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12431_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12431_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12431_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12431_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_12431_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12431_input.allocateHost();
    tbl_SerializeFromObject_TD_12431_input.loadHost();
    Table tbl_SerializeFromObject_TD_12480_input;
    tbl_SerializeFromObject_TD_12480_input = Table("store_returns", store_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_12480_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12480_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_12480_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_12480_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_12480_input.addCol("sr_net_loss", 4);
    tbl_SerializeFromObject_TD_12480_input.allocateHost();
    tbl_SerializeFromObject_TD_12480_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_633403_s, tv_r_Filter_11_633403_e;
    gettimeofday(&tv_r_Filter_11_633403_s, 0);
    SW_Filter_TD_11669(tbl_SerializeFromObject_TD_12480_input, tbl_Filter_TD_11669_output);
    gettimeofday(&tv_r_Filter_11_633403_e, 0);

    struct timeval tv_r_Filter_11_595195_s, tv_r_Filter_11_595195_e;
    gettimeofday(&tv_r_Filter_11_595195_s, 0);
    SW_Filter_TD_11915(tbl_SerializeFromObject_TD_12431_input, tbl_Filter_TD_11915_output);
    gettimeofday(&tv_r_Filter_11_595195_e, 0);

    struct timeval tv_r_Filter_10_729354_s, tv_r_Filter_10_729354_e;
    gettimeofday(&tv_r_Filter_10_729354_s, 0);
    SW_Filter_TD_10378(tbl_SerializeFromObject_TD_11990_input, tbl_Filter_TD_10378_output);
    gettimeofday(&tv_r_Filter_10_729354_e, 0);

    struct timeval tv_r_JOIN_INNER_10_382324_s, tv_r_JOIN_INNER_10_382324_e;
    gettimeofday(&tv_r_JOIN_INNER_10_382324_s, 0);
    SW_JOIN_INNER_TD_10467(tbl_Filter_TD_11915_output, tbl_Filter_TD_11669_output, tbl_JOIN_INNER_TD_10467_output);
    gettimeofday(&tv_r_JOIN_INNER_10_382324_e, 0);

    struct timeval tv_r_Filter_9_963511_s, tv_r_Filter_9_963511_e;
    gettimeofday(&tv_r_Filter_9_963511_s, 0);
    SW_Filter_TD_9263(tbl_SerializeFromObject_TD_10896_input, tbl_Filter_TD_9263_output);
    gettimeofday(&tv_r_Filter_9_963511_e, 0);

    struct timeval tv_r_JOIN_INNER_9_845153_s, tv_r_JOIN_INNER_9_845153_e;
    gettimeofday(&tv_r_JOIN_INNER_9_845153_s, 0);
    SW_JOIN_INNER_TD_9336(tbl_JOIN_INNER_TD_10467_output, tbl_Filter_TD_10378_output, tbl_JOIN_INNER_TD_9336_output);
    gettimeofday(&tv_r_JOIN_INNER_9_845153_e, 0);

    struct timeval tv_r_Filter_8_610662_s, tv_r_Filter_8_610662_e;
    gettimeofday(&tv_r_Filter_8_610662_s, 0);
    SW_Filter_TD_8130(tbl_SerializeFromObject_TD_9272_input, tbl_Filter_TD_8130_output);
    gettimeofday(&tv_r_Filter_8_610662_e, 0);

    struct timeval tv_r_JOIN_INNER_8_302994_s, tv_r_JOIN_INNER_8_302994_e;
    gettimeofday(&tv_r_JOIN_INNER_8_302994_s, 0);
    SW_JOIN_INNER_TD_8913(tbl_JOIN_INNER_TD_9336_output, tbl_Filter_TD_9263_output, tbl_JOIN_INNER_TD_8913_output);
    gettimeofday(&tv_r_JOIN_INNER_8_302994_e, 0);

    struct timeval tv_r_Filter_7_307668_s, tv_r_Filter_7_307668_e;
    gettimeofday(&tv_r_Filter_7_307668_s, 0);
    SW_Filter_TD_7249(tbl_SerializeFromObject_TD_8525_input, tbl_Filter_TD_7249_output);
    gettimeofday(&tv_r_Filter_7_307668_e, 0);

    struct timeval tv_r_JOIN_INNER_7_631914_s, tv_r_JOIN_INNER_7_631914_e;
    gettimeofday(&tv_r_JOIN_INNER_7_631914_s, 0);
    SW_JOIN_INNER_TD_7985(tbl_JOIN_INNER_TD_8913_output, tbl_Filter_TD_8130_output, tbl_JOIN_INNER_TD_7985_output);
    gettimeofday(&tv_r_JOIN_INNER_7_631914_e, 0);

    struct timeval tv_r_Filter_6_397830_s, tv_r_Filter_6_397830_e;
    gettimeofday(&tv_r_Filter_6_397830_s, 0);
    SW_Filter_TD_6839(tbl_SerializeFromObject_TD_7318_input, tbl_Filter_TD_6839_output);
    gettimeofday(&tv_r_Filter_6_397830_e, 0);

    struct timeval tv_r_JOIN_INNER_6_368358_s, tv_r_JOIN_INNER_6_368358_e;
    gettimeofday(&tv_r_JOIN_INNER_6_368358_s, 0);
    SW_JOIN_INNER_TD_65(tbl_JOIN_INNER_TD_7985_output, tbl_Filter_TD_7249_output, tbl_JOIN_INNER_TD_65_output);
    gettimeofday(&tv_r_JOIN_INNER_6_368358_e, 0);

    struct timeval tv_r_Filter_5_957620_s, tv_r_Filter_5_957620_e;
    gettimeofday(&tv_r_Filter_5_957620_s, 0);
    SW_Filter_TD_5718(tbl_SerializeFromObject_TD_6679_input, tbl_Filter_TD_5718_output);
    gettimeofday(&tv_r_Filter_5_957620_e, 0);

    struct timeval tv_r_JOIN_INNER_5_372032_s, tv_r_JOIN_INNER_5_372032_e;
    gettimeofday(&tv_r_JOIN_INNER_5_372032_s, 0);
    SW_JOIN_INNER_TD_5714(tbl_JOIN_INNER_TD_65_output, tbl_Filter_TD_6839_output, tbl_JOIN_INNER_TD_5714_output);
    gettimeofday(&tv_r_JOIN_INNER_5_372032_e, 0);

    struct timeval tv_r_JOIN_INNER_4_898773_s, tv_r_JOIN_INNER_4_898773_e;
    gettimeofday(&tv_r_JOIN_INNER_4_898773_s, 0);
    SW_JOIN_INNER_TD_4134(tbl_JOIN_INNER_TD_5714_output, tbl_Filter_TD_5718_output, tbl_JOIN_INNER_TD_4134_output);
    gettimeofday(&tv_r_JOIN_INNER_4_898773_e, 0);

    struct timeval tv_r_Aggregate_3_273311_s, tv_r_Aggregate_3_273311_e;
    gettimeofday(&tv_r_Aggregate_3_273311_s, 0);
    SW_Aggregate_TD_3820(tbl_JOIN_INNER_TD_4134_output, tbl_Aggregate_TD_3820_output);
    gettimeofday(&tv_r_Aggregate_3_273311_e, 0);

    struct timeval tv_r_Sort_2_414559_s, tv_r_Sort_2_414559_e;
    gettimeofday(&tv_r_Sort_2_414559_s, 0);
    SW_Sort_TD_2867(tbl_Aggregate_TD_3820_output, tbl_Sort_TD_2867_output);
    gettimeofday(&tv_r_Sort_2_414559_e, 0);

    struct timeval tv_r_LocalLimit_1_153114_s, tv_r_LocalLimit_1_153114_e;
    gettimeofday(&tv_r_LocalLimit_1_153114_s, 0);
    SW_LocalLimit_TD_195(tbl_Sort_TD_2867_output, tbl_LocalLimit_TD_195_output);
    gettimeofday(&tv_r_LocalLimit_1_153114_e, 0);

    struct timeval tv_r_GlobalLimit_0_703930_s, tv_r_GlobalLimit_0_703930_e;
    gettimeofday(&tv_r_GlobalLimit_0_703930_s, 0);
    SW_GlobalLimit_TD_0892(tbl_LocalLimit_TD_195_output, tbl_GlobalLimit_TD_0892_output);
    gettimeofday(&tv_r_GlobalLimit_0_703930_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_633403_s, &tv_r_Filter_11_633403_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12480_input: " << tbl_SerializeFromObject_TD_12480_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_595195_s, &tv_r_Filter_11_595195_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12431_input: " << tbl_SerializeFromObject_TD_12431_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_729354_s, &tv_r_Filter_10_729354_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11990_input: " << tbl_SerializeFromObject_TD_11990_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_382324_s, &tv_r_JOIN_INNER_10_382324_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11915_output: " << tbl_Filter_TD_11915_output.getNumRow() << " " << "tbl_Filter_TD_11669_output: " << tbl_Filter_TD_11669_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_963511_s, &tv_r_Filter_9_963511_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10896_input: " << tbl_SerializeFromObject_TD_10896_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_845153_s, &tv_r_JOIN_INNER_9_845153_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10467_output: " << tbl_JOIN_INNER_TD_10467_output.getNumRow() << " " << "tbl_Filter_TD_10378_output: " << tbl_Filter_TD_10378_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_610662_s, &tv_r_Filter_8_610662_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9272_input: " << tbl_SerializeFromObject_TD_9272_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_302994_s, &tv_r_JOIN_INNER_8_302994_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9336_output: " << tbl_JOIN_INNER_TD_9336_output.getNumRow() << " " << "tbl_Filter_TD_9263_output: " << tbl_Filter_TD_9263_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_307668_s, &tv_r_Filter_7_307668_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8525_input: " << tbl_SerializeFromObject_TD_8525_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_631914_s, &tv_r_JOIN_INNER_7_631914_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8913_output: " << tbl_JOIN_INNER_TD_8913_output.getNumRow() << " " << "tbl_Filter_TD_8130_output: " << tbl_Filter_TD_8130_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_397830_s, &tv_r_Filter_6_397830_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7318_input: " << tbl_SerializeFromObject_TD_7318_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_368358_s, &tv_r_JOIN_INNER_6_368358_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7985_output: " << tbl_JOIN_INNER_TD_7985_output.getNumRow() << " " << "tbl_Filter_TD_7249_output: " << tbl_Filter_TD_7249_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_957620_s, &tv_r_Filter_5_957620_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6679_input: " << tbl_SerializeFromObject_TD_6679_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_372032_s, &tv_r_JOIN_INNER_5_372032_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_65_output: " << tbl_JOIN_INNER_TD_65_output.getNumRow() << " " << "tbl_Filter_TD_6839_output: " << tbl_Filter_TD_6839_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_898773_s, &tv_r_JOIN_INNER_4_898773_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5714_output: " << tbl_JOIN_INNER_TD_5714_output.getNumRow() << " " << "tbl_Filter_TD_5718_output: " << tbl_Filter_TD_5718_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_273311_s, &tv_r_Aggregate_3_273311_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4134_output: " << tbl_JOIN_INNER_TD_4134_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_414559_s, &tv_r_Sort_2_414559_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3820_output: " << tbl_Aggregate_TD_3820_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_153114_s, &tv_r_LocalLimit_1_153114_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2867_output: " << tbl_Sort_TD_2867_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_703930_s, &tv_r_GlobalLimit_0_703930_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_195_output: " << tbl_LocalLimit_TD_195_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.9135785 * 1000 << "ms" << std::endl; 
    return 0; 
}
