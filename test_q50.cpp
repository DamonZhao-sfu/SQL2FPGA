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

#include "cfgFunc_q50.hpp" 
#include "q50.hpp" 

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
    std::cout << "NOTE:running query #50\n."; 
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
    Table tbl_GlobalLimit_TD_0460_output("tbl_GlobalLimit_TD_0460_output", 6100000, 15, "");
    tbl_GlobalLimit_TD_0460_output.allocateHost();
    Table tbl_LocalLimit_TD_1423_output("tbl_LocalLimit_TD_1423_output", 6100000, 15, "");
    tbl_LocalLimit_TD_1423_output.allocateHost();
    Table tbl_Sort_TD_2252_output("tbl_Sort_TD_2252_output", 6100000, 15, "");
    tbl_Sort_TD_2252_output.allocateHost();
    Table tbl_Aggregate_TD_3602_output("tbl_Aggregate_TD_3602_output", 6100000, 15, "");
    tbl_Aggregate_TD_3602_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4682_output("tbl_JOIN_INNER_TD_4682_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_4682_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5473_output("tbl_JOIN_INNER_TD_5473_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_5473_output.allocateHost();
    Table tbl_Filter_TD_5650_output("tbl_Filter_TD_5650_output", 6100000, 1, "");
    tbl_Filter_TD_5650_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6453_output("tbl_JOIN_INNER_TD_6453_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_6453_output.allocateHost();
    Table tbl_Filter_TD_6171_output("tbl_Filter_TD_6171_output", 6100000, 1, "");
    tbl_Filter_TD_6171_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6708_input;
    tbl_SerializeFromObject_TD_6708_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6708_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6708_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6708_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_6708_input.allocateHost();
    tbl_SerializeFromObject_TD_6708_input.loadHost();
    Table tbl_JOIN_INNER_TD_7872_output("tbl_JOIN_INNER_TD_7872_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_7872_output.allocateHost();
    Table tbl_Filter_TD_7283_output("tbl_Filter_TD_7283_output", 6100000, 11, "");
    tbl_Filter_TD_7283_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7575_input;
    tbl_SerializeFromObject_TD_7575_input = Table("date_dim", date_dim_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7575_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7575_input.allocateHost();
    tbl_SerializeFromObject_TD_7575_input.loadHost();
    Table tbl_Filter_TD_8572_output("tbl_Filter_TD_8572_output", 6100000, 5, "");
    tbl_Filter_TD_8572_output.allocateHost();
    Table tbl_Filter_TD_873_output("tbl_Filter_TD_873_output", 6100000, 4, "");
    tbl_Filter_TD_873_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8242_input;
    tbl_SerializeFromObject_TD_8242_input = Table("store", store_n, 11, in_dir, "orc");
    tbl_SerializeFromObject_TD_8242_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_company_id", 4);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_street_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_suite_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8242_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8242_input.allocateHost();
    tbl_SerializeFromObject_TD_8242_input.loadHost();
    Table tbl_SerializeFromObject_TD_9100_input;
    tbl_SerializeFromObject_TD_9100_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9100_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9100_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9100_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9100_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9100_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_9100_input.allocateHost();
    tbl_SerializeFromObject_TD_9100_input.loadHost();
    Table tbl_SerializeFromObject_TD_9924_input;
    tbl_SerializeFromObject_TD_9924_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9924_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_9924_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_9924_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_9924_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_9924_input.allocateHost();
    tbl_SerializeFromObject_TD_9924_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_800992_s, tv_r_Filter_8_800992_e;
    gettimeofday(&tv_r_Filter_8_800992_s, 0);
    SW_Filter_TD_873(tbl_SerializeFromObject_TD_9924_input, tbl_Filter_TD_873_output);
    gettimeofday(&tv_r_Filter_8_800992_e, 0);

    struct timeval tv_r_Filter_8_939474_s, tv_r_Filter_8_939474_e;
    gettimeofday(&tv_r_Filter_8_939474_s, 0);
    SW_Filter_TD_8572(tbl_SerializeFromObject_TD_9100_input, tbl_Filter_TD_8572_output);
    gettimeofday(&tv_r_Filter_8_939474_e, 0);

    struct timeval tv_r_Filter_7_671438_s, tv_r_Filter_7_671438_e;
    gettimeofday(&tv_r_Filter_7_671438_s, 0);
    SW_Filter_TD_7283(tbl_SerializeFromObject_TD_8242_input, tbl_Filter_TD_7283_output);
    gettimeofday(&tv_r_Filter_7_671438_e, 0);

    struct timeval tv_r_JOIN_INNER_7_572019_s, tv_r_JOIN_INNER_7_572019_e;
    gettimeofday(&tv_r_JOIN_INNER_7_572019_s, 0);
    SW_JOIN_INNER_TD_7872(tbl_Filter_TD_8572_output, tbl_Filter_TD_873_output, tbl_JOIN_INNER_TD_7872_output);
    gettimeofday(&tv_r_JOIN_INNER_7_572019_e, 0);

    struct timeval tv_r_Filter_6_327521_s, tv_r_Filter_6_327521_e;
    gettimeofday(&tv_r_Filter_6_327521_s, 0);
    SW_Filter_TD_6171(tbl_SerializeFromObject_TD_7575_input, tbl_Filter_TD_6171_output);
    gettimeofday(&tv_r_Filter_6_327521_e, 0);

    struct timeval tv_r_JOIN_INNER_6_112653_s, tv_r_JOIN_INNER_6_112653_e;
    gettimeofday(&tv_r_JOIN_INNER_6_112653_s, 0);
    SW_JOIN_INNER_TD_6453(tbl_JOIN_INNER_TD_7872_output, tbl_Filter_TD_7283_output, tbl_JOIN_INNER_TD_6453_output);
    gettimeofday(&tv_r_JOIN_INNER_6_112653_e, 0);

    struct timeval tv_r_Filter_5_52072_s, tv_r_Filter_5_52072_e;
    gettimeofday(&tv_r_Filter_5_52072_s, 0);
    SW_Filter_TD_5650(tbl_SerializeFromObject_TD_6708_input, tbl_Filter_TD_5650_output);
    gettimeofday(&tv_r_Filter_5_52072_e, 0);

    struct timeval tv_r_JOIN_INNER_5_338179_s, tv_r_JOIN_INNER_5_338179_e;
    gettimeofday(&tv_r_JOIN_INNER_5_338179_s, 0);
    SW_JOIN_INNER_TD_5473(tbl_JOIN_INNER_TD_6453_output, tbl_Filter_TD_6171_output, tbl_JOIN_INNER_TD_5473_output);
    gettimeofday(&tv_r_JOIN_INNER_5_338179_e, 0);

    struct timeval tv_r_JOIN_INNER_4_737090_s, tv_r_JOIN_INNER_4_737090_e;
    gettimeofday(&tv_r_JOIN_INNER_4_737090_s, 0);
    SW_JOIN_INNER_TD_4682(tbl_JOIN_INNER_TD_5473_output, tbl_Filter_TD_5650_output, tbl_JOIN_INNER_TD_4682_output);
    gettimeofday(&tv_r_JOIN_INNER_4_737090_e, 0);

    struct timeval tv_r_Aggregate_3_342713_s, tv_r_Aggregate_3_342713_e;
    gettimeofday(&tv_r_Aggregate_3_342713_s, 0);
    SW_Aggregate_TD_3602(tbl_JOIN_INNER_TD_4682_output, tbl_Aggregate_TD_3602_output);
    gettimeofday(&tv_r_Aggregate_3_342713_e, 0);

    struct timeval tv_r_Sort_2_429715_s, tv_r_Sort_2_429715_e;
    gettimeofday(&tv_r_Sort_2_429715_s, 0);
    SW_Sort_TD_2252(tbl_Aggregate_TD_3602_output, tbl_Sort_TD_2252_output);
    gettimeofday(&tv_r_Sort_2_429715_e, 0);

    struct timeval tv_r_LocalLimit_1_540663_s, tv_r_LocalLimit_1_540663_e;
    gettimeofday(&tv_r_LocalLimit_1_540663_s, 0);
    SW_LocalLimit_TD_1423(tbl_Sort_TD_2252_output, tbl_LocalLimit_TD_1423_output);
    gettimeofday(&tv_r_LocalLimit_1_540663_e, 0);

    struct timeval tv_r_GlobalLimit_0_63706_s, tv_r_GlobalLimit_0_63706_e;
    gettimeofday(&tv_r_GlobalLimit_0_63706_s, 0);
    SW_GlobalLimit_TD_0460(tbl_LocalLimit_TD_1423_output, tbl_GlobalLimit_TD_0460_output);
    gettimeofday(&tv_r_GlobalLimit_0_63706_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_800992_s, &tv_r_Filter_8_800992_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9924_input: " << tbl_SerializeFromObject_TD_9924_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_939474_s, &tv_r_Filter_8_939474_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9100_input: " << tbl_SerializeFromObject_TD_9100_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_671438_s, &tv_r_Filter_7_671438_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8242_input: " << tbl_SerializeFromObject_TD_8242_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_572019_s, &tv_r_JOIN_INNER_7_572019_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8572_output: " << tbl_Filter_TD_8572_output.getNumRow() << " " << "tbl_Filter_TD_873_output: " << tbl_Filter_TD_873_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_327521_s, &tv_r_Filter_6_327521_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7575_input: " << tbl_SerializeFromObject_TD_7575_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_112653_s, &tv_r_JOIN_INNER_6_112653_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7872_output: " << tbl_JOIN_INNER_TD_7872_output.getNumRow() << " " << "tbl_Filter_TD_7283_output: " << tbl_Filter_TD_7283_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_52072_s, &tv_r_Filter_5_52072_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6708_input: " << tbl_SerializeFromObject_TD_6708_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_338179_s, &tv_r_JOIN_INNER_5_338179_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6453_output: " << tbl_JOIN_INNER_TD_6453_output.getNumRow() << " " << "tbl_Filter_TD_6171_output: " << tbl_Filter_TD_6171_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_737090_s, &tv_r_JOIN_INNER_4_737090_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5473_output: " << tbl_JOIN_INNER_TD_5473_output.getNumRow() << " " << "tbl_Filter_TD_5650_output: " << tbl_Filter_TD_5650_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_342713_s, &tv_r_Aggregate_3_342713_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4682_output: " << tbl_JOIN_INNER_TD_4682_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_429715_s, &tv_r_Sort_2_429715_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3602_output: " << tbl_Aggregate_TD_3602_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_540663_s, &tv_r_LocalLimit_1_540663_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2252_output: " << tbl_Sort_TD_2252_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_63706_s, &tv_r_GlobalLimit_0_63706_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1423_output: " << tbl_LocalLimit_TD_1423_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.1020759 * 1000 << "ms" << std::endl; 
    return 0; 
}
