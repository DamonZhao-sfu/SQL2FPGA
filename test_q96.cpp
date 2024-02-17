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

#include "cfgFunc_q96.hpp" 
#include "q96.hpp" 

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
    std::cout << "NOTE:running query #96\n."; 
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
    Table tbl_Aggregate_TD_0551_output("tbl_Aggregate_TD_0551_output", 6100000, 1, "");
    tbl_Aggregate_TD_0551_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1122_output("tbl_JOIN_INNER_TD_1122_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_1122_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2568_output("tbl_JOIN_INNER_TD_2568_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_2568_output.allocateHost();
    Table tbl_Filter_TD_2285_output("tbl_Filter_TD_2285_output", 6100000, 1, "");
    tbl_Filter_TD_2285_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3224_output("tbl_JOIN_INNER_TD_3224_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3224_output.allocateHost();
    Table tbl_Filter_TD_3237_output("tbl_Filter_TD_3237_output", 6100000, 1, "");
    tbl_Filter_TD_3237_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3923_input;
    tbl_SerializeFromObject_TD_3923_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3923_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_3923_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3923_input.allocateHost();
    tbl_SerializeFromObject_TD_3923_input.loadHost();
    Table tbl_Filter_TD_4930_output("tbl_Filter_TD_4930_output", 6100000, 3, "");
    tbl_Filter_TD_4930_output.allocateHost();
    Table tbl_Filter_TD_4922_output("tbl_Filter_TD_4922_output", 6100000, 1, "");
    tbl_Filter_TD_4922_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4736_input;
    tbl_SerializeFromObject_TD_4736_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_4736_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_4736_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_4736_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_4736_input.allocateHost();
    tbl_SerializeFromObject_TD_4736_input.loadHost();
    Table tbl_SerializeFromObject_TD_5766_input;
    tbl_SerializeFromObject_TD_5766_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5766_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_5766_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_5766_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_5766_input.allocateHost();
    tbl_SerializeFromObject_TD_5766_input.loadHost();
    Table tbl_SerializeFromObject_TD_5136_input;
    tbl_SerializeFromObject_TD_5136_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5136_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_5136_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_5136_input.allocateHost();
    tbl_SerializeFromObject_TD_5136_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_412164_s, tv_r_Filter_4_412164_e;
    gettimeofday(&tv_r_Filter_4_412164_s, 0);
    SW_Filter_TD_4922(tbl_SerializeFromObject_TD_5136_input, tbl_Filter_TD_4922_output);
    gettimeofday(&tv_r_Filter_4_412164_e, 0);

    struct timeval tv_r_Filter_4_944654_s, tv_r_Filter_4_944654_e;
    gettimeofday(&tv_r_Filter_4_944654_s, 0);
    SW_Filter_TD_4930(tbl_SerializeFromObject_TD_5766_input, tbl_Filter_TD_4930_output);
    gettimeofday(&tv_r_Filter_4_944654_e, 0);

    struct timeval tv_r_Filter_3_963374_s, tv_r_Filter_3_963374_e;
    gettimeofday(&tv_r_Filter_3_963374_s, 0);
    SW_Filter_TD_3237(tbl_SerializeFromObject_TD_4736_input, tbl_Filter_TD_3237_output);
    gettimeofday(&tv_r_Filter_3_963374_e, 0);

    struct timeval tv_r_JOIN_INNER_3_492773_s, tv_r_JOIN_INNER_3_492773_e;
    gettimeofday(&tv_r_JOIN_INNER_3_492773_s, 0);
    SW_JOIN_INNER_TD_3224(tbl_Filter_TD_4930_output, tbl_Filter_TD_4922_output, tbl_JOIN_INNER_TD_3224_output);
    gettimeofday(&tv_r_JOIN_INNER_3_492773_e, 0);

    struct timeval tv_r_Filter_2_894802_s, tv_r_Filter_2_894802_e;
    gettimeofday(&tv_r_Filter_2_894802_s, 0);
    SW_Filter_TD_2285(tbl_SerializeFromObject_TD_3923_input, tbl_Filter_TD_2285_output);
    gettimeofday(&tv_r_Filter_2_894802_e, 0);

    struct timeval tv_r_JOIN_INNER_2_374673_s, tv_r_JOIN_INNER_2_374673_e;
    gettimeofday(&tv_r_JOIN_INNER_2_374673_s, 0);
    SW_JOIN_INNER_TD_2568(tbl_JOIN_INNER_TD_3224_output, tbl_Filter_TD_3237_output, tbl_JOIN_INNER_TD_2568_output);
    gettimeofday(&tv_r_JOIN_INNER_2_374673_e, 0);

    struct timeval tv_r_JOIN_INNER_1_854855_s, tv_r_JOIN_INNER_1_854855_e;
    gettimeofday(&tv_r_JOIN_INNER_1_854855_s, 0);
    SW_JOIN_INNER_TD_1122(tbl_JOIN_INNER_TD_2568_output, tbl_Filter_TD_2285_output, tbl_JOIN_INNER_TD_1122_output);
    gettimeofday(&tv_r_JOIN_INNER_1_854855_e, 0);

    struct timeval tv_r_Aggregate_0_550267_s, tv_r_Aggregate_0_550267_e;
    gettimeofday(&tv_r_Aggregate_0_550267_s, 0);
    SW_Aggregate_TD_0551(tbl_JOIN_INNER_TD_1122_output, tbl_Aggregate_TD_0551_output);
    gettimeofday(&tv_r_Aggregate_0_550267_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_412164_s, &tv_r_Filter_4_412164_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5136_input: " << tbl_SerializeFromObject_TD_5136_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_944654_s, &tv_r_Filter_4_944654_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5766_input: " << tbl_SerializeFromObject_TD_5766_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_963374_s, &tv_r_Filter_3_963374_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4736_input: " << tbl_SerializeFromObject_TD_4736_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_492773_s, &tv_r_JOIN_INNER_3_492773_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4930_output: " << tbl_Filter_TD_4930_output.getNumRow() << " " << "tbl_Filter_TD_4922_output: " << tbl_Filter_TD_4922_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_894802_s, &tv_r_Filter_2_894802_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3923_input: " << tbl_SerializeFromObject_TD_3923_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_374673_s, &tv_r_JOIN_INNER_2_374673_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3224_output: " << tbl_JOIN_INNER_TD_3224_output.getNumRow() << " " << "tbl_Filter_TD_3237_output: " << tbl_Filter_TD_3237_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_854855_s, &tv_r_JOIN_INNER_1_854855_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2568_output: " << tbl_JOIN_INNER_TD_2568_output.getNumRow() << " " << "tbl_Filter_TD_2285_output: " << tbl_Filter_TD_2285_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_550267_s, &tv_r_Aggregate_0_550267_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1122_output: " << tbl_JOIN_INNER_TD_1122_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.4654649 * 1000 << "ms" << std::endl; 
    return 0; 
}
