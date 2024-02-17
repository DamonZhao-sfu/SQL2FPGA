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

#include "cfgFunc_q37.hpp" 
#include "q37.hpp" 

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
    std::cout << "NOTE:running query #37\n."; 
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
    Table tbl_GlobalLimit_TD_0776_output("tbl_GlobalLimit_TD_0776_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0776_output.allocateHost();
    Table tbl_LocalLimit_TD_1796_output("tbl_LocalLimit_TD_1796_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1796_output.allocateHost();
    Table tbl_Sort_TD_2566_output("tbl_Sort_TD_2566_output", 6100000, 3, "");
    tbl_Sort_TD_2566_output.allocateHost();
    Table tbl_Aggregate_TD_3823_output("tbl_Aggregate_TD_3823_output", 6100000, 3, "");
    tbl_Aggregate_TD_3823_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4969_output("tbl_JOIN_INNER_TD_4969_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4969_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5242_output("tbl_JOIN_INNER_TD_5242_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5242_output.allocateHost();
    Table tbl_Filter_TD_5553_output("tbl_Filter_TD_5553_output", 6100000, 1, "");
    tbl_Filter_TD_5553_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6238_output("tbl_JOIN_INNER_TD_6238_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6238_output.allocateHost();
    Table tbl_Filter_TD_6966_output("tbl_Filter_TD_6966_output", 6100000, 1, "");
    tbl_Filter_TD_6966_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6108_input;
    tbl_SerializeFromObject_TD_6108_input = Table("catalog_sales", catalog_sales_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_6108_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_6108_input.allocateHost();
    tbl_SerializeFromObject_TD_6108_input.loadHost();
    Table tbl_Filter_TD_7179_output("tbl_Filter_TD_7179_output", 6100000, 4, "");
    tbl_Filter_TD_7179_output.allocateHost();
    Table tbl_Filter_TD_7541_output("tbl_Filter_TD_7541_output", 6100000, 2, "");
    tbl_Filter_TD_7541_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7771_input;
    tbl_SerializeFromObject_TD_7771_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7771_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7771_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7771_input.allocateHost();
    tbl_SerializeFromObject_TD_7771_input.loadHost();
    Table tbl_SerializeFromObject_TD_8699_input;
    tbl_SerializeFromObject_TD_8699_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8699_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8699_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8699_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8699_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_8699_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_8699_input.allocateHost();
    tbl_SerializeFromObject_TD_8699_input.loadHost();
    Table tbl_SerializeFromObject_TD_8589_input;
    tbl_SerializeFromObject_TD_8589_input = Table("inventory", inventory_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8589_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_8589_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_8589_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_8589_input.allocateHost();
    tbl_SerializeFromObject_TD_8589_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_979659_s, tv_r_Filter_7_979659_e;
    gettimeofday(&tv_r_Filter_7_979659_s, 0);
    SW_Filter_TD_7541(tbl_SerializeFromObject_TD_8589_input, tbl_Filter_TD_7541_output);
    gettimeofday(&tv_r_Filter_7_979659_e, 0);

    struct timeval tv_r_Filter_7_229440_s, tv_r_Filter_7_229440_e;
    gettimeofday(&tv_r_Filter_7_229440_s, 0);
    SW_Filter_TD_7179(tbl_SerializeFromObject_TD_8699_input, tbl_Filter_TD_7179_output);
    gettimeofday(&tv_r_Filter_7_229440_e, 0);

    struct timeval tv_r_Filter_6_604691_s, tv_r_Filter_6_604691_e;
    gettimeofday(&tv_r_Filter_6_604691_s, 0);
    SW_Filter_TD_6966(tbl_SerializeFromObject_TD_7771_input, tbl_Filter_TD_6966_output);
    gettimeofday(&tv_r_Filter_6_604691_e, 0);

    struct timeval tv_r_JOIN_INNER_6_106267_s, tv_r_JOIN_INNER_6_106267_e;
    gettimeofday(&tv_r_JOIN_INNER_6_106267_s, 0);
    SW_JOIN_INNER_TD_6238(tbl_Filter_TD_7179_output, tbl_Filter_TD_7541_output, tbl_JOIN_INNER_TD_6238_output);
    gettimeofday(&tv_r_JOIN_INNER_6_106267_e, 0);

    struct timeval tv_r_Filter_5_765664_s, tv_r_Filter_5_765664_e;
    gettimeofday(&tv_r_Filter_5_765664_s, 0);
    SW_Filter_TD_5553(tbl_SerializeFromObject_TD_6108_input, tbl_Filter_TD_5553_output);
    gettimeofday(&tv_r_Filter_5_765664_e, 0);

    struct timeval tv_r_JOIN_INNER_5_354441_s, tv_r_JOIN_INNER_5_354441_e;
    gettimeofday(&tv_r_JOIN_INNER_5_354441_s, 0);
    SW_JOIN_INNER_TD_5242(tbl_JOIN_INNER_TD_6238_output, tbl_Filter_TD_6966_output, tbl_JOIN_INNER_TD_5242_output);
    gettimeofday(&tv_r_JOIN_INNER_5_354441_e, 0);

    struct timeval tv_r_JOIN_INNER_4_341046_s, tv_r_JOIN_INNER_4_341046_e;
    gettimeofday(&tv_r_JOIN_INNER_4_341046_s, 0);
    SW_JOIN_INNER_TD_4969(tbl_JOIN_INNER_TD_5242_output, tbl_Filter_TD_5553_output, tbl_JOIN_INNER_TD_4969_output);
    gettimeofday(&tv_r_JOIN_INNER_4_341046_e, 0);

    struct timeval tv_r_Aggregate_3_196003_s, tv_r_Aggregate_3_196003_e;
    gettimeofday(&tv_r_Aggregate_3_196003_s, 0);
    SW_Aggregate_TD_3823(tbl_JOIN_INNER_TD_4969_output, tbl_Aggregate_TD_3823_output);
    gettimeofday(&tv_r_Aggregate_3_196003_e, 0);

    struct timeval tv_r_Sort_2_406157_s, tv_r_Sort_2_406157_e;
    gettimeofday(&tv_r_Sort_2_406157_s, 0);
    SW_Sort_TD_2566(tbl_Aggregate_TD_3823_output, tbl_Sort_TD_2566_output);
    gettimeofday(&tv_r_Sort_2_406157_e, 0);

    struct timeval tv_r_LocalLimit_1_329344_s, tv_r_LocalLimit_1_329344_e;
    gettimeofday(&tv_r_LocalLimit_1_329344_s, 0);
    SW_LocalLimit_TD_1796(tbl_Sort_TD_2566_output, tbl_LocalLimit_TD_1796_output);
    gettimeofday(&tv_r_LocalLimit_1_329344_e, 0);

    struct timeval tv_r_GlobalLimit_0_60352_s, tv_r_GlobalLimit_0_60352_e;
    gettimeofday(&tv_r_GlobalLimit_0_60352_s, 0);
    SW_GlobalLimit_TD_0776(tbl_LocalLimit_TD_1796_output, tbl_GlobalLimit_TD_0776_output);
    gettimeofday(&tv_r_GlobalLimit_0_60352_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_979659_s, &tv_r_Filter_7_979659_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8589_input: " << tbl_SerializeFromObject_TD_8589_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_229440_s, &tv_r_Filter_7_229440_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8699_input: " << tbl_SerializeFromObject_TD_8699_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_604691_s, &tv_r_Filter_6_604691_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7771_input: " << tbl_SerializeFromObject_TD_7771_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_106267_s, &tv_r_JOIN_INNER_6_106267_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7179_output: " << tbl_Filter_TD_7179_output.getNumRow() << " " << "tbl_Filter_TD_7541_output: " << tbl_Filter_TD_7541_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_765664_s, &tv_r_Filter_5_765664_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6108_input: " << tbl_SerializeFromObject_TD_6108_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_354441_s, &tv_r_JOIN_INNER_5_354441_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6238_output: " << tbl_JOIN_INNER_TD_6238_output.getNumRow() << " " << "tbl_Filter_TD_6966_output: " << tbl_Filter_TD_6966_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_341046_s, &tv_r_JOIN_INNER_4_341046_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5242_output: " << tbl_JOIN_INNER_TD_5242_output.getNumRow() << " " << "tbl_Filter_TD_5553_output: " << tbl_Filter_TD_5553_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_196003_s, &tv_r_Aggregate_3_196003_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4969_output: " << tbl_JOIN_INNER_TD_4969_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_406157_s, &tv_r_Sort_2_406157_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3823_output: " << tbl_Aggregate_TD_3823_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_329344_s, &tv_r_LocalLimit_1_329344_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2566_output: " << tbl_Sort_TD_2566_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_60352_s, &tv_r_GlobalLimit_0_60352_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1796_output: " << tbl_LocalLimit_TD_1796_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.3820415 * 1000 << "ms" << std::endl; 
    return 0; 
}
