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

#include "cfgFunc_q94.hpp" 
#include "q94.hpp" 

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
    std::cout << "NOTE:running query #94\n."; 
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
    Table tbl_Aggregate_TD_0575_output("tbl_Aggregate_TD_0575_output", 6100000, 3, "");
    tbl_Aggregate_TD_0575_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1664_output("tbl_JOIN_INNER_TD_1664_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1664_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2816_output("tbl_JOIN_INNER_TD_2816_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_2816_output.allocateHost();
    Table tbl_Filter_TD_2173_output("tbl_Filter_TD_2173_output", 6100000, 1, "");
    tbl_Filter_TD_2173_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3753_output("tbl_JOIN_INNER_TD_3753_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_3753_output.allocateHost();
    Table tbl_Filter_TD_351_output("tbl_Filter_TD_351_output", 6100000, 1, "");
    tbl_Filter_TD_351_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3180_input;
    tbl_SerializeFromObject_TD_3180_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3180_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_3180_input.addCol("web_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3180_input.allocateHost();
    tbl_SerializeFromObject_TD_3180_input.loadHost();
    Table tbl_JOIN_LEFTANTI_TD_4927_output("tbl_JOIN_LEFTANTI_TD_4927_output", 6100000, 6, "");
    tbl_JOIN_LEFTANTI_TD_4927_output.allocateHost();
    Table tbl_Filter_TD_4599_output("tbl_Filter_TD_4599_output", 6100000, 1, "");
    tbl_Filter_TD_4599_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4317_input;
    tbl_SerializeFromObject_TD_4317_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4317_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_4317_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4317_input.allocateHost();
    tbl_SerializeFromObject_TD_4317_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_5296_output("tbl_JOIN_LEFTSEMI_TD_5296_output", 6100000, 6, "");
    tbl_JOIN_LEFTSEMI_TD_5296_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5910_input;
    tbl_SerializeFromObject_TD_5910_input = Table("web_returns", web_returns_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_5910_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_5910_input.allocateHost();
    tbl_SerializeFromObject_TD_5910_input.loadHost();
    Table tbl_SerializeFromObject_TD_5514_input;
    tbl_SerializeFromObject_TD_5514_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5514_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5514_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_5514_input.allocateHost();
    tbl_SerializeFromObject_TD_5514_input.loadHost();
    Table tbl_Filter_TD_6646_output("tbl_Filter_TD_6646_output", 6100000, 7, "");
    tbl_Filter_TD_6646_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6349_input;
    tbl_SerializeFromObject_TD_6349_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6349_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_6349_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_6349_input.allocateHost();
    tbl_SerializeFromObject_TD_6349_input.loadHost();
    Table tbl_SerializeFromObject_TD_7460_input;
    tbl_SerializeFromObject_TD_7460_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_7460_input.addCol("ws_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_7460_input.addCol("ws_ship_addr_sk", 4);
    tbl_SerializeFromObject_TD_7460_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_7460_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_7460_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_7460_input.addCol("ws_ext_ship_cost", 4);
    tbl_SerializeFromObject_TD_7460_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_7460_input.allocateHost();
    tbl_SerializeFromObject_TD_7460_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_695801_s, tv_r_Filter_6_695801_e;
    gettimeofday(&tv_r_Filter_6_695801_s, 0);
    SW_Filter_TD_6646(tbl_SerializeFromObject_TD_7460_input, tbl_Filter_TD_6646_output);
    gettimeofday(&tv_r_Filter_6_695801_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_5_649847_s, tv_r_JOIN_LEFTSEMI_5_649847_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_649847_s, 0);
    SW_JOIN_LEFTSEMI_TD_5296(tbl_Filter_TD_6646_output, tbl_SerializeFromObject_TD_6349_input, tbl_JOIN_LEFTSEMI_TD_5296_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_649847_e, 0);

    struct timeval tv_r_Filter_4_377087_s, tv_r_Filter_4_377087_e;
    gettimeofday(&tv_r_Filter_4_377087_s, 0);
    SW_Filter_TD_4599(tbl_SerializeFromObject_TD_5514_input, tbl_Filter_TD_4599_output);
    gettimeofday(&tv_r_Filter_4_377087_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_4_823814_s, tv_r_JOIN_LEFTANTI_4_823814_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_823814_s, 0);
    SW_JOIN_LEFTANTI_TD_4927(tbl_JOIN_LEFTSEMI_TD_5296_output, tbl_SerializeFromObject_TD_5910_input, tbl_JOIN_LEFTANTI_TD_4927_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_823814_e, 0);

    struct timeval tv_r_Filter_3_908779_s, tv_r_Filter_3_908779_e;
    gettimeofday(&tv_r_Filter_3_908779_s, 0);
    SW_Filter_TD_351(tbl_SerializeFromObject_TD_4317_input, tbl_Filter_TD_351_output);
    gettimeofday(&tv_r_Filter_3_908779_e, 0);

    struct timeval tv_r_JOIN_INNER_3_868568_s, tv_r_JOIN_INNER_3_868568_e;
    gettimeofday(&tv_r_JOIN_INNER_3_868568_s, 0);
    SW_JOIN_INNER_TD_3753(tbl_JOIN_LEFTANTI_TD_4927_output, tbl_Filter_TD_4599_output, tbl_JOIN_INNER_TD_3753_output);
    gettimeofday(&tv_r_JOIN_INNER_3_868568_e, 0);

    struct timeval tv_r_Filter_2_872697_s, tv_r_Filter_2_872697_e;
    gettimeofday(&tv_r_Filter_2_872697_s, 0);
    SW_Filter_TD_2173(tbl_SerializeFromObject_TD_3180_input, tbl_Filter_TD_2173_output);
    gettimeofday(&tv_r_Filter_2_872697_e, 0);

    struct timeval tv_r_JOIN_INNER_2_987849_s, tv_r_JOIN_INNER_2_987849_e;
    gettimeofday(&tv_r_JOIN_INNER_2_987849_s, 0);
    SW_JOIN_INNER_TD_2816(tbl_JOIN_INNER_TD_3753_output, tbl_Filter_TD_351_output, tbl_JOIN_INNER_TD_2816_output);
    gettimeofday(&tv_r_JOIN_INNER_2_987849_e, 0);

    struct timeval tv_r_JOIN_INNER_1_266880_s, tv_r_JOIN_INNER_1_266880_e;
    gettimeofday(&tv_r_JOIN_INNER_1_266880_s, 0);
    SW_JOIN_INNER_TD_1664(tbl_JOIN_INNER_TD_2816_output, tbl_Filter_TD_2173_output, tbl_JOIN_INNER_TD_1664_output);
    gettimeofday(&tv_r_JOIN_INNER_1_266880_e, 0);

    struct timeval tv_r_Aggregate_0_931703_s, tv_r_Aggregate_0_931703_e;
    gettimeofday(&tv_r_Aggregate_0_931703_s, 0);
    SW_Aggregate_TD_0575(tbl_JOIN_INNER_TD_1664_output, tbl_Aggregate_TD_0575_output);
    gettimeofday(&tv_r_Aggregate_0_931703_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_695801_s, &tv_r_Filter_6_695801_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7460_input: " << tbl_SerializeFromObject_TD_7460_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_5: " << tvdiff(&tv_r_JOIN_LEFTSEMI_5_649847_s, &tv_r_JOIN_LEFTSEMI_5_649847_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6646_output: " << tbl_Filter_TD_6646_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_6349_input: " << tbl_SerializeFromObject_TD_6349_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_377087_s, &tv_r_Filter_4_377087_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5514_input: " << tbl_SerializeFromObject_TD_5514_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_4: " << tvdiff(&tv_r_JOIN_LEFTANTI_4_823814_s, &tv_r_JOIN_LEFTANTI_4_823814_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_5296_output: " << tbl_JOIN_LEFTSEMI_TD_5296_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_5910_input: " << tbl_SerializeFromObject_TD_5910_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_908779_s, &tv_r_Filter_3_908779_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4317_input: " << tbl_SerializeFromObject_TD_4317_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_868568_s, &tv_r_JOIN_INNER_3_868568_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_4927_output: " << tbl_JOIN_LEFTANTI_TD_4927_output.getNumRow() << " " << "tbl_Filter_TD_4599_output: " << tbl_Filter_TD_4599_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_872697_s, &tv_r_Filter_2_872697_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3180_input: " << tbl_SerializeFromObject_TD_3180_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_987849_s, &tv_r_JOIN_INNER_2_987849_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3753_output: " << tbl_JOIN_INNER_TD_3753_output.getNumRow() << " " << "tbl_Filter_TD_351_output: " << tbl_Filter_TD_351_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_266880_s, &tv_r_JOIN_INNER_1_266880_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2816_output: " << tbl_JOIN_INNER_TD_2816_output.getNumRow() << " " << "tbl_Filter_TD_2173_output: " << tbl_Filter_TD_2173_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_931703_s, &tv_r_Aggregate_0_931703_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1664_output: " << tbl_JOIN_INNER_TD_1664_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.3327762 * 1000 << "ms" << std::endl; 
    return 0; 
}
