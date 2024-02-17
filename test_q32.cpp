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

#include "cfgFunc_q32.hpp" 
#include "q32.hpp" 

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
    std::cout << "NOTE:running query #32\n."; 
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
    Table tbl_Aggregate_TD_0875_output("tbl_Aggregate_TD_0875_output", 6100000, 1, "");
    tbl_Aggregate_TD_0875_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1733_output("tbl_JOIN_INNER_TD_1733_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_1733_output.allocateHost();
    Table tbl_JOIN_INNER_TD_23_output("tbl_JOIN_INNER_TD_23_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_23_output.allocateHost();
    Table tbl_Filter_TD_2612_output("tbl_Filter_TD_2612_output", 6100000, 1, "");
    tbl_Filter_TD_2612_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3100_output("tbl_JOIN_INNER_TD_3100_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_3100_output.allocateHost();
    Table tbl_Filter_TD_3137_output("tbl_Filter_TD_3137_output", 6100000, 2, "");
    tbl_Filter_TD_3137_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3312_input;
    tbl_SerializeFromObject_TD_3312_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3312_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_3312_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_3312_input.allocateHost();
    tbl_SerializeFromObject_TD_3312_input.loadHost();
    Table tbl_Filter_TD_4798_output("tbl_Filter_TD_4798_output", 6100000, 3, "");
    tbl_Filter_TD_4798_output.allocateHost();
    Table tbl_Filter_TD_4443_output("tbl_Filter_TD_4443_output", 6100000, 1, "");
    tbl_Filter_TD_4443_output.allocateHost();
    Table tbl_Aggregate_TD_4445_output("tbl_Aggregate_TD_4445_output", 6100000, 2, "");
    tbl_Aggregate_TD_4445_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5370_input;
    tbl_SerializeFromObject_TD_5370_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5370_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5370_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_5370_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_5370_input.allocateHost();
    tbl_SerializeFromObject_TD_5370_input.loadHost();
    Table tbl_SerializeFromObject_TD_577_input;
    tbl_SerializeFromObject_TD_577_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_577_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_577_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_577_input.allocateHost();
    tbl_SerializeFromObject_TD_577_input.loadHost();
    Table tbl_JOIN_INNER_TD_5915_output("tbl_JOIN_INNER_TD_5915_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5915_output.allocateHost();
    Table tbl_Filter_TD_6515_output("tbl_Filter_TD_6515_output", 6100000, 3, "");
    tbl_Filter_TD_6515_output.allocateHost();
    Table tbl_Filter_TD_6829_output("tbl_Filter_TD_6829_output", 6100000, 1, "");
    tbl_Filter_TD_6829_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7288_input;
    tbl_SerializeFromObject_TD_7288_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7288_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7288_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_7288_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_7288_input.allocateHost();
    tbl_SerializeFromObject_TD_7288_input.loadHost();
    Table tbl_SerializeFromObject_TD_727_input;
    tbl_SerializeFromObject_TD_727_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_727_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_727_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_727_input.allocateHost();
    tbl_SerializeFromObject_TD_727_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_480729_s, tv_r_Filter_6_480729_e;
    gettimeofday(&tv_r_Filter_6_480729_s, 0);
    SW_Filter_TD_6829(tbl_SerializeFromObject_TD_727_input, tbl_Filter_TD_6829_output);
    gettimeofday(&tv_r_Filter_6_480729_e, 0);

    struct timeval tv_r_Filter_6_687092_s, tv_r_Filter_6_687092_e;
    gettimeofday(&tv_r_Filter_6_687092_s, 0);
    SW_Filter_TD_6515(tbl_SerializeFromObject_TD_7288_input, tbl_Filter_TD_6515_output);
    gettimeofday(&tv_r_Filter_6_687092_e, 0);

    struct timeval tv_r_JOIN_INNER_5_258039_s, tv_r_JOIN_INNER_5_258039_e;
    gettimeofday(&tv_r_JOIN_INNER_5_258039_s, 0);
    SW_JOIN_INNER_TD_5915(tbl_Filter_TD_6515_output, tbl_Filter_TD_6829_output, tbl_JOIN_INNER_TD_5915_output);
    gettimeofday(&tv_r_JOIN_INNER_5_258039_e, 0);

    struct timeval tv_r_Aggregate_4_113966_s, tv_r_Aggregate_4_113966_e;
    gettimeofday(&tv_r_Aggregate_4_113966_s, 0);
    SW_Aggregate_TD_4445(tbl_JOIN_INNER_TD_5915_output, tbl_Aggregate_TD_4445_output);
    gettimeofday(&tv_r_Aggregate_4_113966_e, 0);

    struct timeval tv_r_Filter_4_313407_s, tv_r_Filter_4_313407_e;
    gettimeofday(&tv_r_Filter_4_313407_s, 0);
    SW_Filter_TD_4443(tbl_SerializeFromObject_TD_577_input, tbl_Filter_TD_4443_output);
    gettimeofday(&tv_r_Filter_4_313407_e, 0);

    struct timeval tv_r_Filter_4_556325_s, tv_r_Filter_4_556325_e;
    gettimeofday(&tv_r_Filter_4_556325_s, 0);
    SW_Filter_TD_4798(tbl_SerializeFromObject_TD_5370_input, tbl_Filter_TD_4798_output);
    gettimeofday(&tv_r_Filter_4_556325_e, 0);

    struct timeval tv_r_Filter_3_621089_s, tv_r_Filter_3_621089_e;
    gettimeofday(&tv_r_Filter_3_621089_s, 0);
    SW_Filter_TD_3137(tbl_Aggregate_TD_4445_output, tbl_Filter_TD_3137_output);
    gettimeofday(&tv_r_Filter_3_621089_e, 0);

    struct timeval tv_r_JOIN_INNER_3_909545_s, tv_r_JOIN_INNER_3_909545_e;
    gettimeofday(&tv_r_JOIN_INNER_3_909545_s, 0);
    SW_JOIN_INNER_TD_3100(tbl_Filter_TD_4798_output, tbl_Filter_TD_4443_output, tbl_JOIN_INNER_TD_3100_output);
    gettimeofday(&tv_r_JOIN_INNER_3_909545_e, 0);

    struct timeval tv_r_Filter_2_647555_s, tv_r_Filter_2_647555_e;
    gettimeofday(&tv_r_Filter_2_647555_s, 0);
    SW_Filter_TD_2612(tbl_SerializeFromObject_TD_3312_input, tbl_Filter_TD_2612_output);
    gettimeofday(&tv_r_Filter_2_647555_e, 0);

    struct timeval tv_r_JOIN_INNER_2_574524_s, tv_r_JOIN_INNER_2_574524_e;
    gettimeofday(&tv_r_JOIN_INNER_2_574524_s, 0);
    SW_JOIN_INNER_TD_23(tbl_JOIN_INNER_TD_3100_output, tbl_Filter_TD_3137_output, tbl_JOIN_INNER_TD_23_output);
    gettimeofday(&tv_r_JOIN_INNER_2_574524_e, 0);

    struct timeval tv_r_JOIN_INNER_1_481660_s, tv_r_JOIN_INNER_1_481660_e;
    gettimeofday(&tv_r_JOIN_INNER_1_481660_s, 0);
    SW_JOIN_INNER_TD_1733(tbl_JOIN_INNER_TD_23_output, tbl_Filter_TD_2612_output, tbl_JOIN_INNER_TD_1733_output);
    gettimeofday(&tv_r_JOIN_INNER_1_481660_e, 0);

    struct timeval tv_r_Aggregate_0_214823_s, tv_r_Aggregate_0_214823_e;
    gettimeofday(&tv_r_Aggregate_0_214823_s, 0);
    SW_Aggregate_TD_0875(tbl_JOIN_INNER_TD_1733_output, tbl_Aggregate_TD_0875_output);
    gettimeofday(&tv_r_Aggregate_0_214823_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_480729_s, &tv_r_Filter_6_480729_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_727_input: " << tbl_SerializeFromObject_TD_727_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_687092_s, &tv_r_Filter_6_687092_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7288_input: " << tbl_SerializeFromObject_TD_7288_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_258039_s, &tv_r_JOIN_INNER_5_258039_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6515_output: " << tbl_Filter_TD_6515_output.getNumRow() << " " << "tbl_Filter_TD_6829_output: " << tbl_Filter_TD_6829_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_113966_s, &tv_r_Aggregate_4_113966_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5915_output: " << tbl_JOIN_INNER_TD_5915_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_313407_s, &tv_r_Filter_4_313407_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_577_input: " << tbl_SerializeFromObject_TD_577_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_556325_s, &tv_r_Filter_4_556325_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5370_input: " << tbl_SerializeFromObject_TD_5370_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_621089_s, &tv_r_Filter_3_621089_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4445_output: " << tbl_Aggregate_TD_4445_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_909545_s, &tv_r_JOIN_INNER_3_909545_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4798_output: " << tbl_Filter_TD_4798_output.getNumRow() << " " << "tbl_Filter_TD_4443_output: " << tbl_Filter_TD_4443_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_647555_s, &tv_r_Filter_2_647555_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3312_input: " << tbl_SerializeFromObject_TD_3312_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_574524_s, &tv_r_JOIN_INNER_2_574524_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3100_output: " << tbl_JOIN_INNER_TD_3100_output.getNumRow() << " " << "tbl_Filter_TD_3137_output: " << tbl_Filter_TD_3137_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_481660_s, &tv_r_JOIN_INNER_1_481660_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_23_output: " << tbl_JOIN_INNER_TD_23_output.getNumRow() << " " << "tbl_Filter_TD_2612_output: " << tbl_Filter_TD_2612_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_214823_s, &tv_r_Aggregate_0_214823_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1733_output: " << tbl_JOIN_INNER_TD_1733_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.712168 * 1000 << "ms" << std::endl; 
    return 0; 
}
