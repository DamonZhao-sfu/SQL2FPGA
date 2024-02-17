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

#include "cfgFunc_q34.hpp" 
#include "q34.hpp" 

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
    std::cout << "NOTE:running query #34\n."; 
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
    Table tbl_Sort_TD_0612_output("tbl_Sort_TD_0612_output", 6100000, 6, "");
    tbl_Sort_TD_0612_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1717_output("tbl_JOIN_INNER_TD_1717_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_1717_output.allocateHost();
    Table tbl_Filter_TD_2536_output("tbl_Filter_TD_2536_output", 6100000, 3, "");
    tbl_Filter_TD_2536_output.allocateHost();
    Table tbl_Filter_TD_2394_output("tbl_Filter_TD_2394_output", 6100000, 5, "");
    tbl_Filter_TD_2394_output.allocateHost();
    Table tbl_Aggregate_TD_329_output("tbl_Aggregate_TD_329_output", 6100000, 3, "");
    tbl_Aggregate_TD_329_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3766_input;
    tbl_SerializeFromObject_TD_3766_input = Table("customer", customer_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_3766_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_3766_input.addCol("c_salutation", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3766_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3766_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3766_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3766_input.allocateHost();
    tbl_SerializeFromObject_TD_3766_input.loadHost();
    Table tbl_JOIN_INNER_TD_4669_output("tbl_JOIN_INNER_TD_4669_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4669_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5677_output("tbl_JOIN_INNER_TD_5677_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5677_output.allocateHost();
    Table tbl_Filter_TD_5875_output("tbl_Filter_TD_5875_output", 6100000, 1, "");
    tbl_Filter_TD_5875_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6743_output("tbl_JOIN_INNER_TD_6743_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6743_output.allocateHost();
    Table tbl_Filter_TD_6746_output("tbl_Filter_TD_6746_output", 6100000, 1, "");
    tbl_Filter_TD_6746_output.allocateHost();
    Table tbl_SerializeFromObject_TD_65_input;
    tbl_SerializeFromObject_TD_65_input = Table("household_demographics", household_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_65_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_65_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_65_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_65_input.addCol("hd_buy_potential", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_65_input.allocateHost();
    tbl_SerializeFromObject_TD_65_input.loadHost();
    Table tbl_Filter_TD_7294_output("tbl_Filter_TD_7294_output", 6100000, 5, "");
    tbl_Filter_TD_7294_output.allocateHost();
    Table tbl_Filter_TD_7264_output("tbl_Filter_TD_7264_output", 6100000, 1, "");
    tbl_Filter_TD_7264_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7810_input;
    tbl_SerializeFromObject_TD_7810_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7810_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7810_input.addCol("s_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7810_input.allocateHost();
    tbl_SerializeFromObject_TD_7810_input.loadHost();
    Table tbl_SerializeFromObject_TD_8797_input;
    tbl_SerializeFromObject_TD_8797_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8797_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8797_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_8797_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_8797_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8797_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_8797_input.allocateHost();
    tbl_SerializeFromObject_TD_8797_input.loadHost();
    Table tbl_SerializeFromObject_TD_8224_input;
    tbl_SerializeFromObject_TD_8224_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8224_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8224_input.addCol("d_dom", 4);
    tbl_SerializeFromObject_TD_8224_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8224_input.allocateHost();
    tbl_SerializeFromObject_TD_8224_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_176633_s, tv_r_Filter_7_176633_e;
    gettimeofday(&tv_r_Filter_7_176633_s, 0);
    SW_Filter_TD_7264(tbl_SerializeFromObject_TD_8224_input, tbl_Filter_TD_7264_output);
    gettimeofday(&tv_r_Filter_7_176633_e, 0);

    struct timeval tv_r_Filter_7_358236_s, tv_r_Filter_7_358236_e;
    gettimeofday(&tv_r_Filter_7_358236_s, 0);
    SW_Filter_TD_7294(tbl_SerializeFromObject_TD_8797_input, tbl_Filter_TD_7294_output);
    gettimeofday(&tv_r_Filter_7_358236_e, 0);

    struct timeval tv_r_Filter_6_282008_s, tv_r_Filter_6_282008_e;
    gettimeofday(&tv_r_Filter_6_282008_s, 0);
    SW_Filter_TD_6746(tbl_SerializeFromObject_TD_7810_input, tbl_Filter_TD_6746_output);
    gettimeofday(&tv_r_Filter_6_282008_e, 0);

    struct timeval tv_r_JOIN_INNER_6_145736_s, tv_r_JOIN_INNER_6_145736_e;
    gettimeofday(&tv_r_JOIN_INNER_6_145736_s, 0);
    SW_JOIN_INNER_TD_6743(tbl_Filter_TD_7294_output, tbl_Filter_TD_7264_output, tbl_JOIN_INNER_TD_6743_output);
    gettimeofday(&tv_r_JOIN_INNER_6_145736_e, 0);

    struct timeval tv_r_Filter_5_872750_s, tv_r_Filter_5_872750_e;
    gettimeofday(&tv_r_Filter_5_872750_s, 0);
    SW_Filter_TD_5875(tbl_SerializeFromObject_TD_65_input, tbl_Filter_TD_5875_output);
    gettimeofday(&tv_r_Filter_5_872750_e, 0);

    struct timeval tv_r_JOIN_INNER_5_132145_s, tv_r_JOIN_INNER_5_132145_e;
    gettimeofday(&tv_r_JOIN_INNER_5_132145_s, 0);
    SW_JOIN_INNER_TD_5677(tbl_JOIN_INNER_TD_6743_output, tbl_Filter_TD_6746_output, tbl_JOIN_INNER_TD_5677_output);
    gettimeofday(&tv_r_JOIN_INNER_5_132145_e, 0);

    struct timeval tv_r_JOIN_INNER_4_740538_s, tv_r_JOIN_INNER_4_740538_e;
    gettimeofday(&tv_r_JOIN_INNER_4_740538_s, 0);
    SW_JOIN_INNER_TD_4669(tbl_JOIN_INNER_TD_5677_output, tbl_Filter_TD_5875_output, tbl_JOIN_INNER_TD_4669_output);
    gettimeofday(&tv_r_JOIN_INNER_4_740538_e, 0);

    struct timeval tv_r_Aggregate_3_537239_s, tv_r_Aggregate_3_537239_e;
    gettimeofday(&tv_r_Aggregate_3_537239_s, 0);
    SW_Aggregate_TD_329(tbl_JOIN_INNER_TD_4669_output, tbl_Aggregate_TD_329_output);
    gettimeofday(&tv_r_Aggregate_3_537239_e, 0);

    struct timeval tv_r_Filter_2_62600_s, tv_r_Filter_2_62600_e;
    gettimeofday(&tv_r_Filter_2_62600_s, 0);
    SW_Filter_TD_2394(tbl_SerializeFromObject_TD_3766_input, tbl_Filter_TD_2394_output);
    gettimeofday(&tv_r_Filter_2_62600_e, 0);

    struct timeval tv_r_Filter_2_4406_s, tv_r_Filter_2_4406_e;
    gettimeofday(&tv_r_Filter_2_4406_s, 0);
    SW_Filter_TD_2536(tbl_Aggregate_TD_329_output, tbl_Filter_TD_2536_output);
    gettimeofday(&tv_r_Filter_2_4406_e, 0);

    struct timeval tv_r_JOIN_INNER_1_256780_s, tv_r_JOIN_INNER_1_256780_e;
    gettimeofday(&tv_r_JOIN_INNER_1_256780_s, 0);
    SW_JOIN_INNER_TD_1717(tbl_Filter_TD_2536_output, tbl_Filter_TD_2394_output, tbl_JOIN_INNER_TD_1717_output);
    gettimeofday(&tv_r_JOIN_INNER_1_256780_e, 0);

    struct timeval tv_r_Sort_0_641604_s, tv_r_Sort_0_641604_e;
    gettimeofday(&tv_r_Sort_0_641604_s, 0);
    SW_Sort_TD_0612(tbl_JOIN_INNER_TD_1717_output, tbl_Sort_TD_0612_output);
    gettimeofday(&tv_r_Sort_0_641604_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_176633_s, &tv_r_Filter_7_176633_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8224_input: " << tbl_SerializeFromObject_TD_8224_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_358236_s, &tv_r_Filter_7_358236_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8797_input: " << tbl_SerializeFromObject_TD_8797_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_282008_s, &tv_r_Filter_6_282008_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7810_input: " << tbl_SerializeFromObject_TD_7810_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_145736_s, &tv_r_JOIN_INNER_6_145736_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7294_output: " << tbl_Filter_TD_7294_output.getNumRow() << " " << "tbl_Filter_TD_7264_output: " << tbl_Filter_TD_7264_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_872750_s, &tv_r_Filter_5_872750_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_65_input: " << tbl_SerializeFromObject_TD_65_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_132145_s, &tv_r_JOIN_INNER_5_132145_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6743_output: " << tbl_JOIN_INNER_TD_6743_output.getNumRow() << " " << "tbl_Filter_TD_6746_output: " << tbl_Filter_TD_6746_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_740538_s, &tv_r_JOIN_INNER_4_740538_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5677_output: " << tbl_JOIN_INNER_TD_5677_output.getNumRow() << " " << "tbl_Filter_TD_5875_output: " << tbl_Filter_TD_5875_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_537239_s, &tv_r_Aggregate_3_537239_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4669_output: " << tbl_JOIN_INNER_TD_4669_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_62600_s, &tv_r_Filter_2_62600_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3766_input: " << tbl_SerializeFromObject_TD_3766_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_4406_s, &tv_r_Filter_2_4406_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_329_output: " << tbl_Aggregate_TD_329_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_256780_s, &tv_r_JOIN_INNER_1_256780_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2536_output: " << tbl_Filter_TD_2536_output.getNumRow() << " " << "tbl_Filter_TD_2394_output: " << tbl_Filter_TD_2394_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_641604_s, &tv_r_Sort_0_641604_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1717_output: " << tbl_JOIN_INNER_TD_1717_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.6249612 * 1000 << "ms" << std::endl; 
    return 0; 
}
