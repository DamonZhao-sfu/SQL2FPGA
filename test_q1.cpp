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
    Table tbl_Sort_TD_0125_output("tbl_Sort_TD_0125_output", 6100000, 2, "");
    tbl_Sort_TD_0125_output.allocateHost();
    Table tbl_JOIN_INNER_TD_153_output("tbl_JOIN_INNER_TD_153_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_153_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2233_output("tbl_JOIN_INNER_TD_2233_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_2233_output.allocateHost();
    Table tbl_Filter_TD_2154_output("tbl_Filter_TD_2154_output", 6100000, 2, "");
    tbl_Filter_TD_2154_output.allocateHost();
    Table tbl_JOIN_INNER_TD_361_output("tbl_JOIN_INNER_TD_361_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_361_output.allocateHost();
    Table tbl_Filter_TD_3423_output("tbl_Filter_TD_3423_output", 6100000, 1, "");
    tbl_Filter_TD_3423_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3855_input;
    tbl_SerializeFromObject_TD_3855_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3855_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_3855_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3855_input.allocateHost();
    tbl_SerializeFromObject_TD_3855_input.loadHost();
    Table tbl_Filter_TD_4518_output("tbl_Filter_TD_4518_output", 6100000, 3, "");
    tbl_Filter_TD_4518_output.allocateHost();
    Table tbl_Filter_TD_460_output("tbl_Filter_TD_460_output", 6100000, 2, "");
    tbl_Filter_TD_460_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4798_input;
    tbl_SerializeFromObject_TD_4798_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4798_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_4798_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4798_input.allocateHost();
    tbl_SerializeFromObject_TD_4798_input.loadHost();
    Table tbl_Aggregate_TD_5583_output("tbl_Aggregate_TD_5583_output", 6100000, 3, "");
    tbl_Aggregate_TD_5583_output.allocateHost();
    Table tbl_Aggregate_TD_5248_output("tbl_Aggregate_TD_5248_output", 6100000, 2, "");
    tbl_Aggregate_TD_5248_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6316_output("tbl_JOIN_INNER_TD_6316_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6316_output.allocateHost();
    Table tbl_Aggregate_TD_6592_output("tbl_Aggregate_TD_6592_output", 6100000, 2, "");
    tbl_Aggregate_TD_6592_output.allocateHost();
    Table tbl_Filter_TD_7381_output("tbl_Filter_TD_7381_output", 6100000, 4, "");
    tbl_Filter_TD_7381_output.allocateHost();
    Table tbl_Filter_TD_793_output("tbl_Filter_TD_793_output", 6100000, 1, "");
    tbl_Filter_TD_793_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7254_output("tbl_JOIN_INNER_TD_7254_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_7254_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8517_input;
    tbl_SerializeFromObject_TD_8517_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8517_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_8517_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_8517_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_8517_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_8517_input.allocateHost();
    tbl_SerializeFromObject_TD_8517_input.loadHost();
    Table tbl_SerializeFromObject_TD_8286_input;
    tbl_SerializeFromObject_TD_8286_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8286_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8286_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8286_input.allocateHost();
    tbl_SerializeFromObject_TD_8286_input.loadHost();
    Table tbl_Filter_TD_8827_output("tbl_Filter_TD_8827_output", 6100000, 4, "");
    tbl_Filter_TD_8827_output.allocateHost();
    Table tbl_Filter_TD_8455_output("tbl_Filter_TD_8455_output", 6100000, 1, "");
    tbl_Filter_TD_8455_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9851_input;
    tbl_SerializeFromObject_TD_9851_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9851_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_9851_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_9851_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_9851_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_9851_input.allocateHost();
    tbl_SerializeFromObject_TD_9851_input.loadHost();
    Table tbl_SerializeFromObject_TD_9993_input;
    tbl_SerializeFromObject_TD_9993_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9993_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9993_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9993_input.allocateHost();
    tbl_SerializeFromObject_TD_9993_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_97257_s, tv_r_Filter_8_97257_e;
    gettimeofday(&tv_r_Filter_8_97257_s, 0);
    SW_Filter_TD_8455(tbl_SerializeFromObject_TD_9993_input, tbl_Filter_TD_8455_output);
    gettimeofday(&tv_r_Filter_8_97257_e, 0);

    struct timeval tv_r_Filter_8_289818_s, tv_r_Filter_8_289818_e;
    gettimeofday(&tv_r_Filter_8_289818_s, 0);
    SW_Filter_TD_8827(tbl_SerializeFromObject_TD_9851_input, tbl_Filter_TD_8827_output);
    gettimeofday(&tv_r_Filter_8_289818_e, 0);

    struct timeval tv_r_JOIN_INNER_7_979579_s, tv_r_JOIN_INNER_7_979579_e;
    gettimeofday(&tv_r_JOIN_INNER_7_979579_s, 0);
    SW_JOIN_INNER_TD_7254(tbl_Filter_TD_8827_output, tbl_Filter_TD_8455_output, tbl_JOIN_INNER_TD_7254_output);
    gettimeofday(&tv_r_JOIN_INNER_7_979579_e, 0);

    struct timeval tv_r_Filter_7_369448_s, tv_r_Filter_7_369448_e;
    gettimeofday(&tv_r_Filter_7_369448_s, 0);
    SW_Filter_TD_793(tbl_SerializeFromObject_TD_8286_input, tbl_Filter_TD_793_output);
    gettimeofday(&tv_r_Filter_7_369448_e, 0);

    struct timeval tv_r_Filter_7_552049_s, tv_r_Filter_7_552049_e;
    gettimeofday(&tv_r_Filter_7_552049_s, 0);
    SW_Filter_TD_7381(tbl_SerializeFromObject_TD_8517_input, tbl_Filter_TD_7381_output);
    gettimeofday(&tv_r_Filter_7_552049_e, 0);

    struct timeval tv_r_Aggregate_6_243748_s, tv_r_Aggregate_6_243748_e;
    gettimeofday(&tv_r_Aggregate_6_243748_s, 0);
    SW_Aggregate_TD_6592(tbl_JOIN_INNER_TD_7254_output, tbl_Aggregate_TD_6592_output);
    gettimeofday(&tv_r_Aggregate_6_243748_e, 0);

    struct timeval tv_r_JOIN_INNER_6_826532_s, tv_r_JOIN_INNER_6_826532_e;
    gettimeofday(&tv_r_JOIN_INNER_6_826532_s, 0);
    SW_JOIN_INNER_TD_6316(tbl_Filter_TD_7381_output, tbl_Filter_TD_793_output, tbl_JOIN_INNER_TD_6316_output);
    gettimeofday(&tv_r_JOIN_INNER_6_826532_e, 0);

    struct timeval tv_r_Aggregate_5_956099_s, tv_r_Aggregate_5_956099_e;
    gettimeofday(&tv_r_Aggregate_5_956099_s, 0);
    SW_Aggregate_TD_5248(tbl_Aggregate_TD_6592_output, tbl_Aggregate_TD_5248_output);
    gettimeofday(&tv_r_Aggregate_5_956099_e, 0);

    struct timeval tv_r_Aggregate_5_858858_s, tv_r_Aggregate_5_858858_e;
    gettimeofday(&tv_r_Aggregate_5_858858_s, 0);
    SW_Aggregate_TD_5583(tbl_JOIN_INNER_TD_6316_output, tbl_Aggregate_TD_5583_output);
    gettimeofday(&tv_r_Aggregate_5_858858_e, 0);

    struct timeval tv_r_Filter_4_452764_s, tv_r_Filter_4_452764_e;
    gettimeofday(&tv_r_Filter_4_452764_s, 0);
    SW_Filter_TD_460(tbl_Aggregate_TD_5248_output, tbl_Filter_TD_460_output);
    gettimeofday(&tv_r_Filter_4_452764_e, 0);

    struct timeval tv_r_Filter_4_926265_s, tv_r_Filter_4_926265_e;
    gettimeofday(&tv_r_Filter_4_926265_s, 0);
    SW_Filter_TD_4518(tbl_Aggregate_TD_5583_output, tbl_Filter_TD_4518_output);
    gettimeofday(&tv_r_Filter_4_926265_e, 0);

    struct timeval tv_r_Filter_3_945831_s, tv_r_Filter_3_945831_e;
    gettimeofday(&tv_r_Filter_3_945831_s, 0);
    SW_Filter_TD_3423(tbl_SerializeFromObject_TD_4798_input, tbl_Filter_TD_3423_output);
    gettimeofday(&tv_r_Filter_3_945831_e, 0);

    struct timeval tv_r_JOIN_INNER_3_432260_s, tv_r_JOIN_INNER_3_432260_e;
    gettimeofday(&tv_r_JOIN_INNER_3_432260_s, 0);
    SW_JOIN_INNER_TD_361(tbl_Filter_TD_4518_output, tbl_Filter_TD_460_output, tbl_JOIN_INNER_TD_361_output);
    gettimeofday(&tv_r_JOIN_INNER_3_432260_e, 0);

    struct timeval tv_r_Filter_2_69080_s, tv_r_Filter_2_69080_e;
    gettimeofday(&tv_r_Filter_2_69080_s, 0);
    SW_Filter_TD_2154(tbl_SerializeFromObject_TD_3855_input, tbl_Filter_TD_2154_output);
    gettimeofday(&tv_r_Filter_2_69080_e, 0);

    struct timeval tv_r_JOIN_INNER_2_889016_s, tv_r_JOIN_INNER_2_889016_e;
    gettimeofday(&tv_r_JOIN_INNER_2_889016_s, 0);
    SW_JOIN_INNER_TD_2233(tbl_JOIN_INNER_TD_361_output, tbl_Filter_TD_3423_output, tbl_JOIN_INNER_TD_2233_output);
    gettimeofday(&tv_r_JOIN_INNER_2_889016_e, 0);

    struct timeval tv_r_JOIN_INNER_1_195518_s, tv_r_JOIN_INNER_1_195518_e;
    gettimeofday(&tv_r_JOIN_INNER_1_195518_s, 0);
    SW_JOIN_INNER_TD_153(tbl_JOIN_INNER_TD_2233_output, tbl_Filter_TD_2154_output, tbl_JOIN_INNER_TD_153_output);
    gettimeofday(&tv_r_JOIN_INNER_1_195518_e, 0);

    struct timeval tv_r_Sort_0_833431_s, tv_r_Sort_0_833431_e;
    gettimeofday(&tv_r_Sort_0_833431_s, 0);
    SW_Sort_TD_0125(tbl_JOIN_INNER_TD_153_output, tbl_Sort_TD_0125_output);
    gettimeofday(&tv_r_Sort_0_833431_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_97257_s, &tv_r_Filter_8_97257_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9993_input: " << tbl_SerializeFromObject_TD_9993_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_289818_s, &tv_r_Filter_8_289818_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9851_input: " << tbl_SerializeFromObject_TD_9851_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_979579_s, &tv_r_JOIN_INNER_7_979579_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8827_output: " << tbl_Filter_TD_8827_output.getNumRow() << " " << "tbl_Filter_TD_8455_output: " << tbl_Filter_TD_8455_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_369448_s, &tv_r_Filter_7_369448_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8286_input: " << tbl_SerializeFromObject_TD_8286_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_552049_s, &tv_r_Filter_7_552049_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8517_input: " << tbl_SerializeFromObject_TD_8517_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_243748_s, &tv_r_Aggregate_6_243748_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7254_output: " << tbl_JOIN_INNER_TD_7254_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_826532_s, &tv_r_JOIN_INNER_6_826532_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7381_output: " << tbl_Filter_TD_7381_output.getNumRow() << " " << "tbl_Filter_TD_793_output: " << tbl_Filter_TD_793_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_956099_s, &tv_r_Aggregate_5_956099_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6592_output: " << tbl_Aggregate_TD_6592_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_858858_s, &tv_r_Aggregate_5_858858_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6316_output: " << tbl_JOIN_INNER_TD_6316_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_452764_s, &tv_r_Filter_4_452764_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5248_output: " << tbl_Aggregate_TD_5248_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_926265_s, &tv_r_Filter_4_926265_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5583_output: " << tbl_Aggregate_TD_5583_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_945831_s, &tv_r_Filter_3_945831_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4798_input: " << tbl_SerializeFromObject_TD_4798_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_432260_s, &tv_r_JOIN_INNER_3_432260_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4518_output: " << tbl_Filter_TD_4518_output.getNumRow() << " " << "tbl_Filter_TD_460_output: " << tbl_Filter_TD_460_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_69080_s, &tv_r_Filter_2_69080_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3855_input: " << tbl_SerializeFromObject_TD_3855_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_889016_s, &tv_r_JOIN_INNER_2_889016_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_361_output: " << tbl_JOIN_INNER_TD_361_output.getNumRow() << " " << "tbl_Filter_TD_3423_output: " << tbl_Filter_TD_3423_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_195518_s, &tv_r_JOIN_INNER_1_195518_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2233_output: " << tbl_JOIN_INNER_TD_2233_output.getNumRow() << " " << "tbl_Filter_TD_2154_output: " << tbl_Filter_TD_2154_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_833431_s, &tv_r_Sort_0_833431_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_153_output: " << tbl_JOIN_INNER_TD_153_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.4212642 * 1000 << "ms" << std::endl; 
    return 0; 
}
