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

#include "cfgFunc_q1.hpp" 
#include "q1.hpp" 

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
    std::cout << "NOTE:running query #1\n."; 
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
    Table tbl_GlobalLimit_TD_0331_output("tbl_GlobalLimit_TD_0331_output", 6100000, 1, "");
    tbl_GlobalLimit_TD_0331_output.allocateHost();
    Table tbl_LocalLimit_TD_1511_output("tbl_LocalLimit_TD_1511_output", 6100000, 1, "");
    tbl_LocalLimit_TD_1511_output.allocateHost();
    Table tbl_Sort_TD_2956_output("tbl_Sort_TD_2956_output", 6100000, 1, "");
    tbl_Sort_TD_2956_output.allocateHost();
    Table tbl_JOIN_INNER_TD_38_output("tbl_JOIN_INNER_TD_38_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_38_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4555_output("tbl_JOIN_INNER_TD_4555_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4555_output.allocateHost();
    Table tbl_Filter_TD_4963_output("tbl_Filter_TD_4963_output", 6100000, 2, "");
    tbl_Filter_TD_4963_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5977_output("tbl_JOIN_INNER_TD_5977_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5977_output.allocateHost();
    Table tbl_Filter_TD_5670_output("tbl_Filter_TD_5670_output", 6100000, 1, "");
    tbl_Filter_TD_5670_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5102_input;
    tbl_SerializeFromObject_TD_5102_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5102_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_5102_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5102_input.allocateHost();
    tbl_SerializeFromObject_TD_5102_input.loadHost();
    Table tbl_Filter_TD_618_output("tbl_Filter_TD_618_output", 6100000, 3, "");
    tbl_Filter_TD_618_output.allocateHost();
    Table tbl_Filter_TD_6214_output("tbl_Filter_TD_6214_output", 6100000, 2, "");
    tbl_Filter_TD_6214_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6946_input;
    tbl_SerializeFromObject_TD_6946_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6946_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_6946_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6946_input.allocateHost();
    tbl_SerializeFromObject_TD_6946_input.loadHost();
    Table tbl_Aggregate_TD_768_output("tbl_Aggregate_TD_768_output", 6100000, 3, "");
    tbl_Aggregate_TD_768_output.allocateHost();
    Table tbl_Aggregate_TD_7469_output("tbl_Aggregate_TD_7469_output", 6100000, 2, "");
    tbl_Aggregate_TD_7469_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8510_output("tbl_JOIN_INNER_TD_8510_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8510_output.allocateHost();
    Table tbl_Aggregate_TD_8971_output("tbl_Aggregate_TD_8971_output", 6100000, 2, "");
    tbl_Aggregate_TD_8971_output.allocateHost();
    Table tbl_Filter_TD_9969_output("tbl_Filter_TD_9969_output", 6100000, 4, "");
    tbl_Filter_TD_9969_output.allocateHost();
    Table tbl_Filter_TD_9327_output("tbl_Filter_TD_9327_output", 6100000, 1, "");
    tbl_Filter_TD_9327_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9875_output("tbl_JOIN_INNER_TD_9875_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9875_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10732_input;
    tbl_SerializeFromObject_TD_10732_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10732_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_10732_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_10732_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_10732_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_10732_input.allocateHost();
    tbl_SerializeFromObject_TD_10732_input.loadHost();
    Table tbl_SerializeFromObject_TD_10578_input;
    tbl_SerializeFromObject_TD_10578_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10578_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10578_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10578_input.allocateHost();
    tbl_SerializeFromObject_TD_10578_input.loadHost();
    Table tbl_Filter_TD_10844_output("tbl_Filter_TD_10844_output", 6100000, 4, "");
    tbl_Filter_TD_10844_output.allocateHost();
    Table tbl_Filter_TD_10626_output("tbl_Filter_TD_10626_output", 6100000, 1, "");
    tbl_Filter_TD_10626_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11974_input;
    tbl_SerializeFromObject_TD_11974_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11974_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_11974_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_11974_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_11974_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_11974_input.allocateHost();
    tbl_SerializeFromObject_TD_11974_input.loadHost();
    Table tbl_SerializeFromObject_TD_11696_input;
    tbl_SerializeFromObject_TD_11696_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11696_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11696_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11696_input.allocateHost();
    tbl_SerializeFromObject_TD_11696_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_19125_s, tv_r_Filter_10_19125_e;
    gettimeofday(&tv_r_Filter_10_19125_s, 0);
    SW_Filter_TD_10626(tbl_SerializeFromObject_TD_11696_input, tbl_Filter_TD_10626_output);
    gettimeofday(&tv_r_Filter_10_19125_e, 0);

    struct timeval tv_r_Filter_10_778501_s, tv_r_Filter_10_778501_e;
    gettimeofday(&tv_r_Filter_10_778501_s, 0);
    SW_Filter_TD_10844(tbl_SerializeFromObject_TD_11974_input, tbl_Filter_TD_10844_output);
    gettimeofday(&tv_r_Filter_10_778501_e, 0);

    struct timeval tv_r_JOIN_INNER_9_37923_s, tv_r_JOIN_INNER_9_37923_e;
    gettimeofday(&tv_r_JOIN_INNER_9_37923_s, 0);
    SW_JOIN_INNER_TD_9875(tbl_Filter_TD_10844_output, tbl_Filter_TD_10626_output, tbl_JOIN_INNER_TD_9875_output);
    gettimeofday(&tv_r_JOIN_INNER_9_37923_e, 0);

    struct timeval tv_r_Filter_9_139141_s, tv_r_Filter_9_139141_e;
    gettimeofday(&tv_r_Filter_9_139141_s, 0);
    SW_Filter_TD_9327(tbl_SerializeFromObject_TD_10578_input, tbl_Filter_TD_9327_output);
    gettimeofday(&tv_r_Filter_9_139141_e, 0);

    struct timeval tv_r_Filter_9_766016_s, tv_r_Filter_9_766016_e;
    gettimeofday(&tv_r_Filter_9_766016_s, 0);
    SW_Filter_TD_9969(tbl_SerializeFromObject_TD_10732_input, tbl_Filter_TD_9969_output);
    gettimeofday(&tv_r_Filter_9_766016_e, 0);

    struct timeval tv_r_Aggregate_8_167205_s, tv_r_Aggregate_8_167205_e;
    gettimeofday(&tv_r_Aggregate_8_167205_s, 0);
    SW_Aggregate_TD_8971(tbl_JOIN_INNER_TD_9875_output, tbl_Aggregate_TD_8971_output);
    gettimeofday(&tv_r_Aggregate_8_167205_e, 0);

    struct timeval tv_r_JOIN_INNER_8_477982_s, tv_r_JOIN_INNER_8_477982_e;
    gettimeofday(&tv_r_JOIN_INNER_8_477982_s, 0);
    SW_JOIN_INNER_TD_8510(tbl_Filter_TD_9969_output, tbl_Filter_TD_9327_output, tbl_JOIN_INNER_TD_8510_output);
    gettimeofday(&tv_r_JOIN_INNER_8_477982_e, 0);

    struct timeval tv_r_Aggregate_7_307013_s, tv_r_Aggregate_7_307013_e;
    gettimeofday(&tv_r_Aggregate_7_307013_s, 0);
    SW_Aggregate_TD_7469(tbl_Aggregate_TD_8971_output, tbl_Aggregate_TD_7469_output);
    gettimeofday(&tv_r_Aggregate_7_307013_e, 0);

    struct timeval tv_r_Aggregate_7_46543_s, tv_r_Aggregate_7_46543_e;
    gettimeofday(&tv_r_Aggregate_7_46543_s, 0);
    SW_Aggregate_TD_768(tbl_JOIN_INNER_TD_8510_output, tbl_Aggregate_TD_768_output);
    gettimeofday(&tv_r_Aggregate_7_46543_e, 0);

    struct timeval tv_r_Filter_6_919809_s, tv_r_Filter_6_919809_e;
    gettimeofday(&tv_r_Filter_6_919809_s, 0);
    SW_Filter_TD_6214(tbl_Aggregate_TD_7469_output, tbl_Filter_TD_6214_output);
    gettimeofday(&tv_r_Filter_6_919809_e, 0);

    struct timeval tv_r_Filter_6_213253_s, tv_r_Filter_6_213253_e;
    gettimeofday(&tv_r_Filter_6_213253_s, 0);
    SW_Filter_TD_618(tbl_Aggregate_TD_768_output, tbl_Filter_TD_618_output);
    gettimeofday(&tv_r_Filter_6_213253_e, 0);

    struct timeval tv_r_Filter_5_443943_s, tv_r_Filter_5_443943_e;
    gettimeofday(&tv_r_Filter_5_443943_s, 0);
    SW_Filter_TD_5670(tbl_SerializeFromObject_TD_6946_input, tbl_Filter_TD_5670_output);
    gettimeofday(&tv_r_Filter_5_443943_e, 0);

    struct timeval tv_r_JOIN_INNER_5_464080_s, tv_r_JOIN_INNER_5_464080_e;
    gettimeofday(&tv_r_JOIN_INNER_5_464080_s, 0);
    SW_JOIN_INNER_TD_5977(tbl_Filter_TD_618_output, tbl_Filter_TD_6214_output, tbl_JOIN_INNER_TD_5977_output);
    gettimeofday(&tv_r_JOIN_INNER_5_464080_e, 0);

    struct timeval tv_r_Filter_4_604130_s, tv_r_Filter_4_604130_e;
    gettimeofday(&tv_r_Filter_4_604130_s, 0);
    SW_Filter_TD_4963(tbl_SerializeFromObject_TD_5102_input, tbl_Filter_TD_4963_output);
    gettimeofday(&tv_r_Filter_4_604130_e, 0);

    struct timeval tv_r_JOIN_INNER_4_373256_s, tv_r_JOIN_INNER_4_373256_e;
    gettimeofday(&tv_r_JOIN_INNER_4_373256_s, 0);
    SW_JOIN_INNER_TD_4555(tbl_JOIN_INNER_TD_5977_output, tbl_Filter_TD_5670_output, tbl_JOIN_INNER_TD_4555_output);
    gettimeofday(&tv_r_JOIN_INNER_4_373256_e, 0);

    struct timeval tv_r_JOIN_INNER_3_63424_s, tv_r_JOIN_INNER_3_63424_e;
    gettimeofday(&tv_r_JOIN_INNER_3_63424_s, 0);
    SW_JOIN_INNER_TD_38(tbl_JOIN_INNER_TD_4555_output, tbl_Filter_TD_4963_output, tbl_JOIN_INNER_TD_38_output);
    gettimeofday(&tv_r_JOIN_INNER_3_63424_e, 0);

    struct timeval tv_r_Sort_2_320314_s, tv_r_Sort_2_320314_e;
    gettimeofday(&tv_r_Sort_2_320314_s, 0);
    SW_Sort_TD_2956(tbl_JOIN_INNER_TD_38_output, tbl_Sort_TD_2956_output);
    gettimeofday(&tv_r_Sort_2_320314_e, 0);

    struct timeval tv_r_LocalLimit_1_440057_s, tv_r_LocalLimit_1_440057_e;
    gettimeofday(&tv_r_LocalLimit_1_440057_s, 0);
    SW_LocalLimit_TD_1511(tbl_Sort_TD_2956_output, tbl_LocalLimit_TD_1511_output);
    gettimeofday(&tv_r_LocalLimit_1_440057_e, 0);

    struct timeval tv_r_GlobalLimit_0_481513_s, tv_r_GlobalLimit_0_481513_e;
    gettimeofday(&tv_r_GlobalLimit_0_481513_s, 0);
    SW_GlobalLimit_TD_0331(tbl_LocalLimit_TD_1511_output, tbl_GlobalLimit_TD_0331_output);
    gettimeofday(&tv_r_GlobalLimit_0_481513_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_19125_s, &tv_r_Filter_10_19125_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11696_input: " << tbl_SerializeFromObject_TD_11696_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_778501_s, &tv_r_Filter_10_778501_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11974_input: " << tbl_SerializeFromObject_TD_11974_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_37923_s, &tv_r_JOIN_INNER_9_37923_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10844_output: " << tbl_Filter_TD_10844_output.getNumRow() << " " << "tbl_Filter_TD_10626_output: " << tbl_Filter_TD_10626_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_139141_s, &tv_r_Filter_9_139141_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10578_input: " << tbl_SerializeFromObject_TD_10578_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_766016_s, &tv_r_Filter_9_766016_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10732_input: " << tbl_SerializeFromObject_TD_10732_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_167205_s, &tv_r_Aggregate_8_167205_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9875_output: " << tbl_JOIN_INNER_TD_9875_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_477982_s, &tv_r_JOIN_INNER_8_477982_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9969_output: " << tbl_Filter_TD_9969_output.getNumRow() << " " << "tbl_Filter_TD_9327_output: " << tbl_Filter_TD_9327_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_307013_s, &tv_r_Aggregate_7_307013_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8971_output: " << tbl_Aggregate_TD_8971_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_46543_s, &tv_r_Aggregate_7_46543_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8510_output: " << tbl_JOIN_INNER_TD_8510_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_919809_s, &tv_r_Filter_6_919809_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7469_output: " << tbl_Aggregate_TD_7469_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_213253_s, &tv_r_Filter_6_213253_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_768_output: " << tbl_Aggregate_TD_768_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_443943_s, &tv_r_Filter_5_443943_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6946_input: " << tbl_SerializeFromObject_TD_6946_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_464080_s, &tv_r_JOIN_INNER_5_464080_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_618_output: " << tbl_Filter_TD_618_output.getNumRow() << " " << "tbl_Filter_TD_6214_output: " << tbl_Filter_TD_6214_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_604130_s, &tv_r_Filter_4_604130_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5102_input: " << tbl_SerializeFromObject_TD_5102_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_373256_s, &tv_r_JOIN_INNER_4_373256_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5977_output: " << tbl_JOIN_INNER_TD_5977_output.getNumRow() << " " << "tbl_Filter_TD_5670_output: " << tbl_Filter_TD_5670_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_63424_s, &tv_r_JOIN_INNER_3_63424_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4555_output: " << tbl_JOIN_INNER_TD_4555_output.getNumRow() << " " << "tbl_Filter_TD_4963_output: " << tbl_Filter_TD_4963_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_320314_s, &tv_r_Sort_2_320314_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_38_output: " << tbl_JOIN_INNER_TD_38_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_440057_s, &tv_r_LocalLimit_1_440057_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2956_output: " << tbl_Sort_TD_2956_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_481513_s, &tv_r_GlobalLimit_0_481513_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1511_output: " << tbl_LocalLimit_TD_1511_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.8534038 * 1000 << "ms" << std::endl; 
    return 0; 
}
