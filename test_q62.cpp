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

#include "cfgFunc_q62.hpp" 
#include "q62.hpp" 

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
    std::cout << "NOTE:running query #62\n."; 
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
    Table tbl_GlobalLimit_TD_0516_output("tbl_GlobalLimit_TD_0516_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0516_output.allocateHost();
    Table tbl_LocalLimit_TD_1152_output("tbl_LocalLimit_TD_1152_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1152_output.allocateHost();
    Table tbl_Sort_TD_2837_output("tbl_Sort_TD_2837_output", 6100000, 8, "");
    tbl_Sort_TD_2837_output.allocateHost();
    Table tbl_Aggregate_TD_3518_output("tbl_Aggregate_TD_3518_output", 6100000, 8, "");
    tbl_Aggregate_TD_3518_output.allocateHost();
    Table tbl_Project_TD_495_output("tbl_Project_TD_495_output", 6100000, 5, "");
    tbl_Project_TD_495_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5691_output("tbl_JOIN_INNER_TD_5691_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5691_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6301_output("tbl_JOIN_INNER_TD_6301_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6301_output.allocateHost();
    Table tbl_Filter_TD_6475_output("tbl_Filter_TD_6475_output", 6100000, 1, "");
    tbl_Filter_TD_6475_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7931_output("tbl_JOIN_INNER_TD_7931_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7931_output.allocateHost();
    Table tbl_Filter_TD_7774_output("tbl_Filter_TD_7774_output", 6100000, 2, "");
    tbl_Filter_TD_7774_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7303_input;
    tbl_SerializeFromObject_TD_7303_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7303_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7303_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7303_input.allocateHost();
    tbl_SerializeFromObject_TD_7303_input.loadHost();
    Table tbl_JOIN_INNER_TD_8645_output("tbl_JOIN_INNER_TD_8645_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8645_output.allocateHost();
    Table tbl_Filter_TD_8784_output("tbl_Filter_TD_8784_output", 6100000, 2, "");
    tbl_Filter_TD_8784_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8746_input;
    tbl_SerializeFromObject_TD_8746_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8746_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_8746_input.addCol("web_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8746_input.allocateHost();
    tbl_SerializeFromObject_TD_8746_input.loadHost();
    Table tbl_Filter_TD_9629_output("tbl_Filter_TD_9629_output", 6100000, 5, "");
    tbl_Filter_TD_9629_output.allocateHost();
    Table tbl_Filter_TD_9883_output("tbl_Filter_TD_9883_output", 6100000, 2, "");
    tbl_Filter_TD_9883_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9528_input;
    tbl_SerializeFromObject_TD_9528_input = Table("ship_mode", ship_mode_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9528_input.addCol("sm_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_9528_input.addCol("sm_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9528_input.allocateHost();
    tbl_SerializeFromObject_TD_9528_input.loadHost();
    Table tbl_SerializeFromObject_TD_10391_input;
    tbl_SerializeFromObject_TD_10391_input = Table("web_sales", web_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10391_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10391_input.addCol("ws_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_10391_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_10391_input.addCol("ws_ship_mode_sk", 4);
    tbl_SerializeFromObject_TD_10391_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10391_input.allocateHost();
    tbl_SerializeFromObject_TD_10391_input.loadHost();
    Table tbl_SerializeFromObject_TD_10953_input;
    tbl_SerializeFromObject_TD_10953_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10953_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10953_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10953_input.allocateHost();
    tbl_SerializeFromObject_TD_10953_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_491443_s, tv_r_Filter_9_491443_e;
    gettimeofday(&tv_r_Filter_9_491443_s, 0);
    SW_Filter_TD_9883(tbl_SerializeFromObject_TD_10953_input, tbl_Filter_TD_9883_output);
    gettimeofday(&tv_r_Filter_9_491443_e, 0);

    struct timeval tv_r_Filter_9_794582_s, tv_r_Filter_9_794582_e;
    gettimeofday(&tv_r_Filter_9_794582_s, 0);
    SW_Filter_TD_9629(tbl_SerializeFromObject_TD_10391_input, tbl_Filter_TD_9629_output);
    gettimeofday(&tv_r_Filter_9_794582_e, 0);

    struct timeval tv_r_Filter_8_765202_s, tv_r_Filter_8_765202_e;
    gettimeofday(&tv_r_Filter_8_765202_s, 0);
    SW_Filter_TD_8784(tbl_SerializeFromObject_TD_9528_input, tbl_Filter_TD_8784_output);
    gettimeofday(&tv_r_Filter_8_765202_e, 0);

    struct timeval tv_r_JOIN_INNER_8_53299_s, tv_r_JOIN_INNER_8_53299_e;
    gettimeofday(&tv_r_JOIN_INNER_8_53299_s, 0);
    SW_JOIN_INNER_TD_8645(tbl_Filter_TD_9629_output, tbl_Filter_TD_9883_output, tbl_JOIN_INNER_TD_8645_output);
    gettimeofday(&tv_r_JOIN_INNER_8_53299_e, 0);

    struct timeval tv_r_Filter_7_201444_s, tv_r_Filter_7_201444_e;
    gettimeofday(&tv_r_Filter_7_201444_s, 0);
    SW_Filter_TD_7774(tbl_SerializeFromObject_TD_8746_input, tbl_Filter_TD_7774_output);
    gettimeofday(&tv_r_Filter_7_201444_e, 0);

    struct timeval tv_r_JOIN_INNER_7_116284_s, tv_r_JOIN_INNER_7_116284_e;
    gettimeofday(&tv_r_JOIN_INNER_7_116284_s, 0);
    SW_JOIN_INNER_TD_7931(tbl_JOIN_INNER_TD_8645_output, tbl_Filter_TD_8784_output, tbl_JOIN_INNER_TD_7931_output);
    gettimeofday(&tv_r_JOIN_INNER_7_116284_e, 0);

    struct timeval tv_r_Filter_6_298076_s, tv_r_Filter_6_298076_e;
    gettimeofday(&tv_r_Filter_6_298076_s, 0);
    SW_Filter_TD_6475(tbl_SerializeFromObject_TD_7303_input, tbl_Filter_TD_6475_output);
    gettimeofday(&tv_r_Filter_6_298076_e, 0);

    struct timeval tv_r_JOIN_INNER_6_637158_s, tv_r_JOIN_INNER_6_637158_e;
    gettimeofday(&tv_r_JOIN_INNER_6_637158_s, 0);
    SW_JOIN_INNER_TD_6301(tbl_JOIN_INNER_TD_7931_output, tbl_Filter_TD_7774_output, tbl_JOIN_INNER_TD_6301_output);
    gettimeofday(&tv_r_JOIN_INNER_6_637158_e, 0);

    struct timeval tv_r_JOIN_INNER_5_495738_s, tv_r_JOIN_INNER_5_495738_e;
    gettimeofday(&tv_r_JOIN_INNER_5_495738_s, 0);
    SW_JOIN_INNER_TD_5691(tbl_JOIN_INNER_TD_6301_output, tbl_Filter_TD_6475_output, tbl_JOIN_INNER_TD_5691_output);
    gettimeofday(&tv_r_JOIN_INNER_5_495738_e, 0);

    struct timeval tv_r_Project_4_598166_s, tv_r_Project_4_598166_e;
    gettimeofday(&tv_r_Project_4_598166_s, 0);
    SW_Project_TD_495(tbl_JOIN_INNER_TD_5691_output, tbl_Project_TD_495_output);
    gettimeofday(&tv_r_Project_4_598166_e, 0);

    struct timeval tv_r_Aggregate_3_404663_s, tv_r_Aggregate_3_404663_e;
    gettimeofday(&tv_r_Aggregate_3_404663_s, 0);
    SW_Aggregate_TD_3518(tbl_Project_TD_495_output, tbl_Aggregate_TD_3518_output);
    gettimeofday(&tv_r_Aggregate_3_404663_e, 0);

    struct timeval tv_r_Sort_2_145480_s, tv_r_Sort_2_145480_e;
    gettimeofday(&tv_r_Sort_2_145480_s, 0);
    SW_Sort_TD_2837(tbl_Aggregate_TD_3518_output, tbl_Sort_TD_2837_output);
    gettimeofday(&tv_r_Sort_2_145480_e, 0);

    struct timeval tv_r_LocalLimit_1_619481_s, tv_r_LocalLimit_1_619481_e;
    gettimeofday(&tv_r_LocalLimit_1_619481_s, 0);
    SW_LocalLimit_TD_1152(tbl_Sort_TD_2837_output, tbl_LocalLimit_TD_1152_output);
    gettimeofday(&tv_r_LocalLimit_1_619481_e, 0);

    struct timeval tv_r_GlobalLimit_0_323405_s, tv_r_GlobalLimit_0_323405_e;
    gettimeofday(&tv_r_GlobalLimit_0_323405_s, 0);
    SW_GlobalLimit_TD_0516(tbl_LocalLimit_TD_1152_output, tbl_GlobalLimit_TD_0516_output);
    gettimeofday(&tv_r_GlobalLimit_0_323405_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_491443_s, &tv_r_Filter_9_491443_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10953_input: " << tbl_SerializeFromObject_TD_10953_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_794582_s, &tv_r_Filter_9_794582_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10391_input: " << tbl_SerializeFromObject_TD_10391_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_765202_s, &tv_r_Filter_8_765202_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9528_input: " << tbl_SerializeFromObject_TD_9528_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_53299_s, &tv_r_JOIN_INNER_8_53299_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9629_output: " << tbl_Filter_TD_9629_output.getNumRow() << " " << "tbl_Filter_TD_9883_output: " << tbl_Filter_TD_9883_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_201444_s, &tv_r_Filter_7_201444_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8746_input: " << tbl_SerializeFromObject_TD_8746_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_116284_s, &tv_r_JOIN_INNER_7_116284_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8645_output: " << tbl_JOIN_INNER_TD_8645_output.getNumRow() << " " << "tbl_Filter_TD_8784_output: " << tbl_Filter_TD_8784_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_298076_s, &tv_r_Filter_6_298076_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7303_input: " << tbl_SerializeFromObject_TD_7303_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_637158_s, &tv_r_JOIN_INNER_6_637158_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7931_output: " << tbl_JOIN_INNER_TD_7931_output.getNumRow() << " " << "tbl_Filter_TD_7774_output: " << tbl_Filter_TD_7774_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_495738_s, &tv_r_JOIN_INNER_5_495738_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6301_output: " << tbl_JOIN_INNER_TD_6301_output.getNumRow() << " " << "tbl_Filter_TD_6475_output: " << tbl_Filter_TD_6475_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_598166_s, &tv_r_Project_4_598166_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5691_output: " << tbl_JOIN_INNER_TD_5691_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_404663_s, &tv_r_Aggregate_3_404663_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_495_output: " << tbl_Project_TD_495_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_145480_s, &tv_r_Sort_2_145480_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3518_output: " << tbl_Aggregate_TD_3518_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_619481_s, &tv_r_LocalLimit_1_619481_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2837_output: " << tbl_Sort_TD_2837_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_323405_s, &tv_r_GlobalLimit_0_323405_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1152_output: " << tbl_LocalLimit_TD_1152_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.49994028 * 1000 << "ms" << std::endl; 
    return 0; 
}
