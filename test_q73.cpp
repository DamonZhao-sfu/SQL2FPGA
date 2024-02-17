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

#include "cfgFunc_q73.hpp" 
#include "q73.hpp" 

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
    std::cout << "NOTE:running query #73\n."; 
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
    Table tbl_Sort_TD_0881_output("tbl_Sort_TD_0881_output", 6100000, 6, "");
    tbl_Sort_TD_0881_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1282_output("tbl_JOIN_INNER_TD_1282_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_1282_output.allocateHost();
    Table tbl_Filter_TD_2984_output("tbl_Filter_TD_2984_output", 6100000, 3, "");
    tbl_Filter_TD_2984_output.allocateHost();
    Table tbl_Filter_TD_2868_output("tbl_Filter_TD_2868_output", 6100000, 5, "");
    tbl_Filter_TD_2868_output.allocateHost();
    Table tbl_Aggregate_TD_3466_output("tbl_Aggregate_TD_3466_output", 6100000, 3, "");
    tbl_Aggregate_TD_3466_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3702_input;
    tbl_SerializeFromObject_TD_3702_input = Table("customer", customer_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_3702_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_3702_input.addCol("c_salutation", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3702_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3702_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3702_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3702_input.allocateHost();
    tbl_SerializeFromObject_TD_3702_input.loadHost();
    Table tbl_JOIN_INNER_TD_4135_output("tbl_JOIN_INNER_TD_4135_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4135_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5190_output("tbl_JOIN_INNER_TD_5190_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5190_output.allocateHost();
    Table tbl_Filter_TD_5843_output("tbl_Filter_TD_5843_output", 6100000, 1, "");
    tbl_Filter_TD_5843_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6616_output("tbl_JOIN_INNER_TD_6616_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6616_output.allocateHost();
    Table tbl_Filter_TD_6613_output("tbl_Filter_TD_6613_output", 6100000, 1, "");
    tbl_Filter_TD_6613_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6763_input;
    tbl_SerializeFromObject_TD_6763_input = Table("household_demographics", household_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6763_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_6763_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_6763_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_6763_input.addCol("hd_buy_potential", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6763_input.allocateHost();
    tbl_SerializeFromObject_TD_6763_input.loadHost();
    Table tbl_Filter_TD_7524_output("tbl_Filter_TD_7524_output", 6100000, 5, "");
    tbl_Filter_TD_7524_output.allocateHost();
    Table tbl_Filter_TD_7781_output("tbl_Filter_TD_7781_output", 6100000, 1, "");
    tbl_Filter_TD_7781_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7894_input;
    tbl_SerializeFromObject_TD_7894_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7894_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7894_input.addCol("s_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7894_input.allocateHost();
    tbl_SerializeFromObject_TD_7894_input.loadHost();
    Table tbl_SerializeFromObject_TD_8912_input;
    tbl_SerializeFromObject_TD_8912_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8912_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8912_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_8912_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_8912_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8912_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_8912_input.allocateHost();
    tbl_SerializeFromObject_TD_8912_input.loadHost();
    Table tbl_SerializeFromObject_TD_8328_input;
    tbl_SerializeFromObject_TD_8328_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8328_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8328_input.addCol("d_dom", 4);
    tbl_SerializeFromObject_TD_8328_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8328_input.allocateHost();
    tbl_SerializeFromObject_TD_8328_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_28541_s, tv_r_Filter_7_28541_e;
    gettimeofday(&tv_r_Filter_7_28541_s, 0);
    SW_Filter_TD_7781(tbl_SerializeFromObject_TD_8328_input, tbl_Filter_TD_7781_output);
    gettimeofday(&tv_r_Filter_7_28541_e, 0);

    struct timeval tv_r_Filter_7_189505_s, tv_r_Filter_7_189505_e;
    gettimeofday(&tv_r_Filter_7_189505_s, 0);
    SW_Filter_TD_7524(tbl_SerializeFromObject_TD_8912_input, tbl_Filter_TD_7524_output);
    gettimeofday(&tv_r_Filter_7_189505_e, 0);

    struct timeval tv_r_Filter_6_798918_s, tv_r_Filter_6_798918_e;
    gettimeofday(&tv_r_Filter_6_798918_s, 0);
    SW_Filter_TD_6613(tbl_SerializeFromObject_TD_7894_input, tbl_Filter_TD_6613_output);
    gettimeofday(&tv_r_Filter_6_798918_e, 0);

    struct timeval tv_r_JOIN_INNER_6_786449_s, tv_r_JOIN_INNER_6_786449_e;
    gettimeofday(&tv_r_JOIN_INNER_6_786449_s, 0);
    SW_JOIN_INNER_TD_6616(tbl_Filter_TD_7524_output, tbl_Filter_TD_7781_output, tbl_JOIN_INNER_TD_6616_output);
    gettimeofday(&tv_r_JOIN_INNER_6_786449_e, 0);

    struct timeval tv_r_Filter_5_777914_s, tv_r_Filter_5_777914_e;
    gettimeofday(&tv_r_Filter_5_777914_s, 0);
    SW_Filter_TD_5843(tbl_SerializeFromObject_TD_6763_input, tbl_Filter_TD_5843_output);
    gettimeofday(&tv_r_Filter_5_777914_e, 0);

    struct timeval tv_r_JOIN_INNER_5_458502_s, tv_r_JOIN_INNER_5_458502_e;
    gettimeofday(&tv_r_JOIN_INNER_5_458502_s, 0);
    SW_JOIN_INNER_TD_5190(tbl_JOIN_INNER_TD_6616_output, tbl_Filter_TD_6613_output, tbl_JOIN_INNER_TD_5190_output);
    gettimeofday(&tv_r_JOIN_INNER_5_458502_e, 0);

    struct timeval tv_r_JOIN_INNER_4_918346_s, tv_r_JOIN_INNER_4_918346_e;
    gettimeofday(&tv_r_JOIN_INNER_4_918346_s, 0);
    SW_JOIN_INNER_TD_4135(tbl_JOIN_INNER_TD_5190_output, tbl_Filter_TD_5843_output, tbl_JOIN_INNER_TD_4135_output);
    gettimeofday(&tv_r_JOIN_INNER_4_918346_e, 0);

    struct timeval tv_r_Aggregate_3_356858_s, tv_r_Aggregate_3_356858_e;
    gettimeofday(&tv_r_Aggregate_3_356858_s, 0);
    SW_Aggregate_TD_3466(tbl_JOIN_INNER_TD_4135_output, tbl_Aggregate_TD_3466_output);
    gettimeofday(&tv_r_Aggregate_3_356858_e, 0);

    struct timeval tv_r_Filter_2_9182_s, tv_r_Filter_2_9182_e;
    gettimeofday(&tv_r_Filter_2_9182_s, 0);
    SW_Filter_TD_2868(tbl_SerializeFromObject_TD_3702_input, tbl_Filter_TD_2868_output);
    gettimeofday(&tv_r_Filter_2_9182_e, 0);

    struct timeval tv_r_Filter_2_467536_s, tv_r_Filter_2_467536_e;
    gettimeofday(&tv_r_Filter_2_467536_s, 0);
    SW_Filter_TD_2984(tbl_Aggregate_TD_3466_output, tbl_Filter_TD_2984_output);
    gettimeofday(&tv_r_Filter_2_467536_e, 0);

    struct timeval tv_r_JOIN_INNER_1_1922_s, tv_r_JOIN_INNER_1_1922_e;
    gettimeofday(&tv_r_JOIN_INNER_1_1922_s, 0);
    SW_JOIN_INNER_TD_1282(tbl_Filter_TD_2984_output, tbl_Filter_TD_2868_output, tbl_JOIN_INNER_TD_1282_output);
    gettimeofday(&tv_r_JOIN_INNER_1_1922_e, 0);

    struct timeval tv_r_Sort_0_652410_s, tv_r_Sort_0_652410_e;
    gettimeofday(&tv_r_Sort_0_652410_s, 0);
    SW_Sort_TD_0881(tbl_JOIN_INNER_TD_1282_output, tbl_Sort_TD_0881_output);
    gettimeofday(&tv_r_Sort_0_652410_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_28541_s, &tv_r_Filter_7_28541_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8328_input: " << tbl_SerializeFromObject_TD_8328_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_189505_s, &tv_r_Filter_7_189505_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8912_input: " << tbl_SerializeFromObject_TD_8912_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_798918_s, &tv_r_Filter_6_798918_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7894_input: " << tbl_SerializeFromObject_TD_7894_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_786449_s, &tv_r_JOIN_INNER_6_786449_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7524_output: " << tbl_Filter_TD_7524_output.getNumRow() << " " << "tbl_Filter_TD_7781_output: " << tbl_Filter_TD_7781_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_777914_s, &tv_r_Filter_5_777914_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6763_input: " << tbl_SerializeFromObject_TD_6763_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_458502_s, &tv_r_JOIN_INNER_5_458502_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6616_output: " << tbl_JOIN_INNER_TD_6616_output.getNumRow() << " " << "tbl_Filter_TD_6613_output: " << tbl_Filter_TD_6613_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_918346_s, &tv_r_JOIN_INNER_4_918346_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5190_output: " << tbl_JOIN_INNER_TD_5190_output.getNumRow() << " " << "tbl_Filter_TD_5843_output: " << tbl_Filter_TD_5843_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_356858_s, &tv_r_Aggregate_3_356858_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4135_output: " << tbl_JOIN_INNER_TD_4135_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_9182_s, &tv_r_Filter_2_9182_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3702_input: " << tbl_SerializeFromObject_TD_3702_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_467536_s, &tv_r_Filter_2_467536_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3466_output: " << tbl_Aggregate_TD_3466_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_1922_s, &tv_r_JOIN_INNER_1_1922_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2984_output: " << tbl_Filter_TD_2984_output.getNumRow() << " " << "tbl_Filter_TD_2868_output: " << tbl_Filter_TD_2868_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_652410_s, &tv_r_Sort_0_652410_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1282_output: " << tbl_JOIN_INNER_TD_1282_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.7638331 * 1000 << "ms" << std::endl; 
    return 0; 
}
