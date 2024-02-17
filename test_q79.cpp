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

#include "cfgFunc_q79.hpp" 
#include "q79.hpp" 

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
    std::cout << "NOTE:running query #79\n."; 
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
    Table tbl_GlobalLimit_TD_0465_output("tbl_GlobalLimit_TD_0465_output", 6100000, 6, "");
    tbl_GlobalLimit_TD_0465_output.allocateHost();
    Table tbl_LocalLimit_TD_1555_output("tbl_LocalLimit_TD_1555_output", 6100000, 6, "");
    tbl_LocalLimit_TD_1555_output.allocateHost();
    Table tbl_Sort_TD_2371_output("tbl_Sort_TD_2371_output", 6100000, 7, "");
    tbl_Sort_TD_2371_output.allocateHost();
    Table tbl_Project_TD_3486_output("tbl_Project_TD_3486_output", 6100000, 7, "");
    tbl_Project_TD_3486_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4479_output("tbl_JOIN_INNER_TD_4479_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4479_output.allocateHost();
    Table tbl_Aggregate_TD_5493_output("tbl_Aggregate_TD_5493_output", 6100000, 5, "");
    tbl_Aggregate_TD_5493_output.allocateHost();
    Table tbl_Filter_TD_5797_output("tbl_Filter_TD_5797_output", 6100000, 3, "");
    tbl_Filter_TD_5797_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6611_output("tbl_JOIN_INNER_TD_6611_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6611_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6451_input;
    tbl_SerializeFromObject_TD_6451_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6451_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6451_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6451_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6451_input.allocateHost();
    tbl_SerializeFromObject_TD_6451_input.loadHost();
    Table tbl_JOIN_INNER_TD_7741_output("tbl_JOIN_INNER_TD_7741_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7741_output.allocateHost();
    Table tbl_Filter_TD_7999_output("tbl_Filter_TD_7999_output", 6100000, 1, "");
    tbl_Filter_TD_7999_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8931_output("tbl_JOIN_INNER_TD_8931_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8931_output.allocateHost();
    Table tbl_Filter_TD_8255_output("tbl_Filter_TD_8255_output", 6100000, 2, "");
    tbl_Filter_TD_8255_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8388_input;
    tbl_SerializeFromObject_TD_8388_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8388_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_8388_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_8388_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_8388_input.allocateHost();
    tbl_SerializeFromObject_TD_8388_input.loadHost();
    Table tbl_Filter_TD_9331_output("tbl_Filter_TD_9331_output", 6100000, 8, "");
    tbl_Filter_TD_9331_output.allocateHost();
    Table tbl_Filter_TD_9589_output("tbl_Filter_TD_9589_output", 6100000, 1, "");
    tbl_Filter_TD_9589_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9993_input;
    tbl_SerializeFromObject_TD_9993_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9993_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9993_input.addCol("s_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9993_input.addCol("s_number_employees", 4);
    tbl_SerializeFromObject_TD_9993_input.allocateHost();
    tbl_SerializeFromObject_TD_9993_input.loadHost();
    Table tbl_SerializeFromObject_TD_1068_input;
    tbl_SerializeFromObject_TD_1068_input = Table("store_sales", store_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_1068_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1068_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_1068_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_1068_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_1068_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_1068_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_1068_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_1068_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_1068_input.allocateHost();
    tbl_SerializeFromObject_TD_1068_input.loadHost();
    Table tbl_SerializeFromObject_TD_10290_input;
    tbl_SerializeFromObject_TD_10290_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10290_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10290_input.addCol("d_dow", 4);
    tbl_SerializeFromObject_TD_10290_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10290_input.allocateHost();
    tbl_SerializeFromObject_TD_10290_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_234674_s, tv_r_Filter_9_234674_e;
    gettimeofday(&tv_r_Filter_9_234674_s, 0);
    SW_Filter_TD_9589(tbl_SerializeFromObject_TD_10290_input, tbl_Filter_TD_9589_output);
    gettimeofday(&tv_r_Filter_9_234674_e, 0);

    struct timeval tv_r_Filter_9_621416_s, tv_r_Filter_9_621416_e;
    gettimeofday(&tv_r_Filter_9_621416_s, 0);
    SW_Filter_TD_9331(tbl_SerializeFromObject_TD_1068_input, tbl_Filter_TD_9331_output);
    gettimeofday(&tv_r_Filter_9_621416_e, 0);

    struct timeval tv_r_Filter_8_211051_s, tv_r_Filter_8_211051_e;
    gettimeofday(&tv_r_Filter_8_211051_s, 0);
    SW_Filter_TD_8255(tbl_SerializeFromObject_TD_9993_input, tbl_Filter_TD_8255_output);
    gettimeofday(&tv_r_Filter_8_211051_e, 0);

    struct timeval tv_r_JOIN_INNER_8_698352_s, tv_r_JOIN_INNER_8_698352_e;
    gettimeofday(&tv_r_JOIN_INNER_8_698352_s, 0);
    SW_JOIN_INNER_TD_8931(tbl_Filter_TD_9331_output, tbl_Filter_TD_9589_output, tbl_JOIN_INNER_TD_8931_output);
    gettimeofday(&tv_r_JOIN_INNER_8_698352_e, 0);

    struct timeval tv_r_Filter_7_245896_s, tv_r_Filter_7_245896_e;
    gettimeofday(&tv_r_Filter_7_245896_s, 0);
    SW_Filter_TD_7999(tbl_SerializeFromObject_TD_8388_input, tbl_Filter_TD_7999_output);
    gettimeofday(&tv_r_Filter_7_245896_e, 0);

    struct timeval tv_r_JOIN_INNER_7_943426_s, tv_r_JOIN_INNER_7_943426_e;
    gettimeofday(&tv_r_JOIN_INNER_7_943426_s, 0);
    SW_JOIN_INNER_TD_7741(tbl_JOIN_INNER_TD_8931_output, tbl_Filter_TD_8255_output, tbl_JOIN_INNER_TD_7741_output);
    gettimeofday(&tv_r_JOIN_INNER_7_943426_e, 0);

    struct timeval tv_r_JOIN_INNER_6_385774_s, tv_r_JOIN_INNER_6_385774_e;
    gettimeofday(&tv_r_JOIN_INNER_6_385774_s, 0);
    SW_JOIN_INNER_TD_6611(tbl_JOIN_INNER_TD_7741_output, tbl_Filter_TD_7999_output, tbl_JOIN_INNER_TD_6611_output);
    gettimeofday(&tv_r_JOIN_INNER_6_385774_e, 0);

    struct timeval tv_r_Filter_5_54560_s, tv_r_Filter_5_54560_e;
    gettimeofday(&tv_r_Filter_5_54560_s, 0);
    SW_Filter_TD_5797(tbl_SerializeFromObject_TD_6451_input, tbl_Filter_TD_5797_output);
    gettimeofday(&tv_r_Filter_5_54560_e, 0);

    struct timeval tv_r_Aggregate_5_274274_s, tv_r_Aggregate_5_274274_e;
    gettimeofday(&tv_r_Aggregate_5_274274_s, 0);
    SW_Aggregate_TD_5493(tbl_JOIN_INNER_TD_6611_output, tbl_Aggregate_TD_5493_output);
    gettimeofday(&tv_r_Aggregate_5_274274_e, 0);

    struct timeval tv_r_JOIN_INNER_4_457701_s, tv_r_JOIN_INNER_4_457701_e;
    gettimeofday(&tv_r_JOIN_INNER_4_457701_s, 0);
    SW_JOIN_INNER_TD_4479(tbl_Aggregate_TD_5493_output, tbl_Filter_TD_5797_output, tbl_JOIN_INNER_TD_4479_output);
    gettimeofday(&tv_r_JOIN_INNER_4_457701_e, 0);

    struct timeval tv_r_Project_3_475762_s, tv_r_Project_3_475762_e;
    gettimeofday(&tv_r_Project_3_475762_s, 0);
    SW_Project_TD_3486(tbl_JOIN_INNER_TD_4479_output, tbl_Project_TD_3486_output);
    gettimeofday(&tv_r_Project_3_475762_e, 0);

    struct timeval tv_r_Sort_2_211427_s, tv_r_Sort_2_211427_e;
    gettimeofday(&tv_r_Sort_2_211427_s, 0);
    SW_Sort_TD_2371(tbl_Project_TD_3486_output, tbl_Sort_TD_2371_output);
    gettimeofday(&tv_r_Sort_2_211427_e, 0);

    struct timeval tv_r_LocalLimit_1_859548_s, tv_r_LocalLimit_1_859548_e;
    gettimeofday(&tv_r_LocalLimit_1_859548_s, 0);
    SW_LocalLimit_TD_1555(tbl_Sort_TD_2371_output, tbl_LocalLimit_TD_1555_output);
    gettimeofday(&tv_r_LocalLimit_1_859548_e, 0);

    struct timeval tv_r_GlobalLimit_0_483013_s, tv_r_GlobalLimit_0_483013_e;
    gettimeofday(&tv_r_GlobalLimit_0_483013_s, 0);
    SW_GlobalLimit_TD_0465(tbl_LocalLimit_TD_1555_output, tbl_GlobalLimit_TD_0465_output);
    gettimeofday(&tv_r_GlobalLimit_0_483013_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_234674_s, &tv_r_Filter_9_234674_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10290_input: " << tbl_SerializeFromObject_TD_10290_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_621416_s, &tv_r_Filter_9_621416_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1068_input: " << tbl_SerializeFromObject_TD_1068_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_211051_s, &tv_r_Filter_8_211051_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9993_input: " << tbl_SerializeFromObject_TD_9993_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_698352_s, &tv_r_JOIN_INNER_8_698352_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9331_output: " << tbl_Filter_TD_9331_output.getNumRow() << " " << "tbl_Filter_TD_9589_output: " << tbl_Filter_TD_9589_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_245896_s, &tv_r_Filter_7_245896_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8388_input: " << tbl_SerializeFromObject_TD_8388_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_943426_s, &tv_r_JOIN_INNER_7_943426_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8931_output: " << tbl_JOIN_INNER_TD_8931_output.getNumRow() << " " << "tbl_Filter_TD_8255_output: " << tbl_Filter_TD_8255_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_385774_s, &tv_r_JOIN_INNER_6_385774_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7741_output: " << tbl_JOIN_INNER_TD_7741_output.getNumRow() << " " << "tbl_Filter_TD_7999_output: " << tbl_Filter_TD_7999_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_54560_s, &tv_r_Filter_5_54560_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6451_input: " << tbl_SerializeFromObject_TD_6451_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_274274_s, &tv_r_Aggregate_5_274274_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6611_output: " << tbl_JOIN_INNER_TD_6611_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_457701_s, &tv_r_JOIN_INNER_4_457701_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5493_output: " << tbl_Aggregate_TD_5493_output.getNumRow() << " " << "tbl_Filter_TD_5797_output: " << tbl_Filter_TD_5797_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_475762_s, &tv_r_Project_3_475762_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4479_output: " << tbl_JOIN_INNER_TD_4479_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_211427_s, &tv_r_Sort_2_211427_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3486_output: " << tbl_Project_TD_3486_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_859548_s, &tv_r_LocalLimit_1_859548_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2371_output: " << tbl_Sort_TD_2371_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_483013_s, &tv_r_GlobalLimit_0_483013_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1555_output: " << tbl_LocalLimit_TD_1555_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.0274605 * 1000 << "ms" << std::endl; 
    return 0; 
}
