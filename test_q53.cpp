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

#include "cfgFunc_q53.hpp" 
#include "q53.hpp" 

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
    std::cout << "NOTE:running query #53\n."; 
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
    Table tbl_GlobalLimit_TD_0959_output("tbl_GlobalLimit_TD_0959_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0959_output.allocateHost();
    Table tbl_LocalLimit_TD_1499_output("tbl_LocalLimit_TD_1499_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1499_output.allocateHost();
    Table tbl_Sort_TD_27_output("tbl_Sort_TD_27_output", 6100000, 3, "");
    tbl_Sort_TD_27_output.allocateHost();
    Table tbl_Filter_TD_330_output("tbl_Filter_TD_330_output", 6100000, 3, "");
    tbl_Filter_TD_330_output.allocateHost();
    Table tbl_Window_TD_449_output("tbl_Window_TD_449_output", 6100000, 4, "");
    tbl_Window_TD_449_output.allocateHost();
    Table tbl_Aggregate_TD_5737_output("tbl_Aggregate_TD_5737_output", 6100000, 3, "");
    tbl_Aggregate_TD_5737_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6735_output("tbl_JOIN_INNER_TD_6735_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6735_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7133_output("tbl_JOIN_INNER_TD_7133_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7133_output.allocateHost();
    Table tbl_Filter_TD_7421_output("tbl_Filter_TD_7421_output", 6100000, 1, "");
    tbl_Filter_TD_7421_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8287_output("tbl_JOIN_INNER_TD_8287_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8287_output.allocateHost();
    Table tbl_Filter_TD_8407_output("tbl_Filter_TD_8407_output", 6100000, 2, "");
    tbl_Filter_TD_8407_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8343_input;
    tbl_SerializeFromObject_TD_8343_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8343_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8343_input.allocateHost();
    tbl_SerializeFromObject_TD_8343_input.loadHost();
    Table tbl_Filter_TD_9831_output("tbl_Filter_TD_9831_output", 6100000, 2, "");
    tbl_Filter_TD_9831_output.allocateHost();
    Table tbl_Filter_TD_9468_output("tbl_Filter_TD_9468_output", 6100000, 4, "");
    tbl_Filter_TD_9468_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9330_input;
    tbl_SerializeFromObject_TD_9330_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9330_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9330_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_9330_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9330_input.allocateHost();
    tbl_SerializeFromObject_TD_9330_input.loadHost();
    Table tbl_SerializeFromObject_TD_10720_input;
    tbl_SerializeFromObject_TD_10720_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10720_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10720_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_10720_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10720_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10720_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10720_input.allocateHost();
    tbl_SerializeFromObject_TD_10720_input.loadHost();
    Table tbl_SerializeFromObject_TD_10983_input;
    tbl_SerializeFromObject_TD_10983_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10983_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10983_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10983_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10983_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10983_input.allocateHost();
    tbl_SerializeFromObject_TD_10983_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_112303_s, tv_r_Filter_9_112303_e;
    gettimeofday(&tv_r_Filter_9_112303_s, 0);
    SW_Filter_TD_9468(tbl_SerializeFromObject_TD_10983_input, tbl_Filter_TD_9468_output);
    gettimeofday(&tv_r_Filter_9_112303_e, 0);

    struct timeval tv_r_Filter_9_709940_s, tv_r_Filter_9_709940_e;
    gettimeofday(&tv_r_Filter_9_709940_s, 0);
    SW_Filter_TD_9831(tbl_SerializeFromObject_TD_10720_input, tbl_Filter_TD_9831_output);
    gettimeofday(&tv_r_Filter_9_709940_e, 0);

    struct timeval tv_r_Filter_8_739972_s, tv_r_Filter_8_739972_e;
    gettimeofday(&tv_r_Filter_8_739972_s, 0);
    SW_Filter_TD_8407(tbl_SerializeFromObject_TD_9330_input, tbl_Filter_TD_8407_output);
    gettimeofday(&tv_r_Filter_8_739972_e, 0);

    struct timeval tv_r_JOIN_INNER_8_936732_s, tv_r_JOIN_INNER_8_936732_e;
    gettimeofday(&tv_r_JOIN_INNER_8_936732_s, 0);
    SW_JOIN_INNER_TD_8287(tbl_Filter_TD_9831_output, tbl_Filter_TD_9468_output, tbl_JOIN_INNER_TD_8287_output);
    gettimeofday(&tv_r_JOIN_INNER_8_936732_e, 0);

    struct timeval tv_r_Filter_7_505738_s, tv_r_Filter_7_505738_e;
    gettimeofday(&tv_r_Filter_7_505738_s, 0);
    SW_Filter_TD_7421(tbl_SerializeFromObject_TD_8343_input, tbl_Filter_TD_7421_output);
    gettimeofday(&tv_r_Filter_7_505738_e, 0);

    struct timeval tv_r_JOIN_INNER_7_34412_s, tv_r_JOIN_INNER_7_34412_e;
    gettimeofday(&tv_r_JOIN_INNER_7_34412_s, 0);
    SW_JOIN_INNER_TD_7133(tbl_JOIN_INNER_TD_8287_output, tbl_Filter_TD_8407_output, tbl_JOIN_INNER_TD_7133_output);
    gettimeofday(&tv_r_JOIN_INNER_7_34412_e, 0);

    struct timeval tv_r_JOIN_INNER_6_956847_s, tv_r_JOIN_INNER_6_956847_e;
    gettimeofday(&tv_r_JOIN_INNER_6_956847_s, 0);
    SW_JOIN_INNER_TD_6735(tbl_JOIN_INNER_TD_7133_output, tbl_Filter_TD_7421_output, tbl_JOIN_INNER_TD_6735_output);
    gettimeofday(&tv_r_JOIN_INNER_6_956847_e, 0);

    struct timeval tv_r_Aggregate_5_859631_s, tv_r_Aggregate_5_859631_e;
    gettimeofday(&tv_r_Aggregate_5_859631_s, 0);
    SW_Aggregate_TD_5737(tbl_JOIN_INNER_TD_6735_output, tbl_Aggregate_TD_5737_output);
    gettimeofday(&tv_r_Aggregate_5_859631_e, 0);

    struct timeval tv_r_Window_4_713240_s, tv_r_Window_4_713240_e;
    gettimeofday(&tv_r_Window_4_713240_s, 0);
    SW_Window_TD_449(tbl_Aggregate_TD_5737_output, tbl_Window_TD_449_output);
    gettimeofday(&tv_r_Window_4_713240_e, 0);

    struct timeval tv_r_Filter_3_791646_s, tv_r_Filter_3_791646_e;
    gettimeofday(&tv_r_Filter_3_791646_s, 0);
    SW_Filter_TD_330(tbl_Window_TD_449_output, tbl_Filter_TD_330_output);
    gettimeofday(&tv_r_Filter_3_791646_e, 0);

    struct timeval tv_r_Sort_2_132254_s, tv_r_Sort_2_132254_e;
    gettimeofday(&tv_r_Sort_2_132254_s, 0);
    SW_Sort_TD_27(tbl_Filter_TD_330_output, tbl_Sort_TD_27_output);
    gettimeofday(&tv_r_Sort_2_132254_e, 0);

    struct timeval tv_r_LocalLimit_1_54001_s, tv_r_LocalLimit_1_54001_e;
    gettimeofday(&tv_r_LocalLimit_1_54001_s, 0);
    SW_LocalLimit_TD_1499(tbl_Sort_TD_27_output, tbl_LocalLimit_TD_1499_output);
    gettimeofday(&tv_r_LocalLimit_1_54001_e, 0);

    struct timeval tv_r_GlobalLimit_0_65149_s, tv_r_GlobalLimit_0_65149_e;
    gettimeofday(&tv_r_GlobalLimit_0_65149_s, 0);
    SW_GlobalLimit_TD_0959(tbl_LocalLimit_TD_1499_output, tbl_GlobalLimit_TD_0959_output);
    gettimeofday(&tv_r_GlobalLimit_0_65149_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_112303_s, &tv_r_Filter_9_112303_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10983_input: " << tbl_SerializeFromObject_TD_10983_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_709940_s, &tv_r_Filter_9_709940_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10720_input: " << tbl_SerializeFromObject_TD_10720_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_739972_s, &tv_r_Filter_8_739972_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9330_input: " << tbl_SerializeFromObject_TD_9330_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_936732_s, &tv_r_JOIN_INNER_8_936732_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9831_output: " << tbl_Filter_TD_9831_output.getNumRow() << " " << "tbl_Filter_TD_9468_output: " << tbl_Filter_TD_9468_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_505738_s, &tv_r_Filter_7_505738_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8343_input: " << tbl_SerializeFromObject_TD_8343_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_34412_s, &tv_r_JOIN_INNER_7_34412_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8287_output: " << tbl_JOIN_INNER_TD_8287_output.getNumRow() << " " << "tbl_Filter_TD_8407_output: " << tbl_Filter_TD_8407_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_956847_s, &tv_r_JOIN_INNER_6_956847_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7133_output: " << tbl_JOIN_INNER_TD_7133_output.getNumRow() << " " << "tbl_Filter_TD_7421_output: " << tbl_Filter_TD_7421_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_859631_s, &tv_r_Aggregate_5_859631_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6735_output: " << tbl_JOIN_INNER_TD_6735_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_713240_s, &tv_r_Window_4_713240_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5737_output: " << tbl_Aggregate_TD_5737_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_791646_s, &tv_r_Filter_3_791646_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_449_output: " << tbl_Window_TD_449_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_132254_s, &tv_r_Sort_2_132254_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_330_output: " << tbl_Filter_TD_330_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_54001_s, &tv_r_LocalLimit_1_54001_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_27_output: " << tbl_Sort_TD_27_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_65149_s, &tv_r_GlobalLimit_0_65149_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1499_output: " << tbl_LocalLimit_TD_1499_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.80070156 * 1000 << "ms" << std::endl; 
    return 0; 
}
