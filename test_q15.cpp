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

#include "cfgFunc_q15.hpp" 
#include "q15.hpp" 

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
    std::cout << "NOTE:running query #15\n."; 
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
    Table tbl_GlobalLimit_TD_0180_output("tbl_GlobalLimit_TD_0180_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0180_output.allocateHost();
    Table tbl_LocalLimit_TD_1558_output("tbl_LocalLimit_TD_1558_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1558_output.allocateHost();
    Table tbl_Sort_TD_2520_output("tbl_Sort_TD_2520_output", 6100000, 2, "");
    tbl_Sort_TD_2520_output.allocateHost();
    Table tbl_Aggregate_TD_3243_output("tbl_Aggregate_TD_3243_output", 6100000, 2, "");
    tbl_Aggregate_TD_3243_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4395_output("tbl_JOIN_INNER_TD_4395_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4395_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5902_output("tbl_JOIN_INNER_TD_5902_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5902_output.allocateHost();
    Table tbl_Filter_TD_5364_output("tbl_Filter_TD_5364_output", 6100000, 1, "");
    tbl_Filter_TD_5364_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6764_output("tbl_JOIN_INNER_TD_6764_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6764_output.allocateHost();
    Table tbl_Filter_TD_6938_output("tbl_Filter_TD_6938_output", 6100000, 3, "");
    tbl_Filter_TD_6938_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6875_input;
    tbl_SerializeFromObject_TD_6875_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6875_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6875_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_6875_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6875_input.allocateHost();
    tbl_SerializeFromObject_TD_6875_input.loadHost();
    Table tbl_Filter_TD_7387_output("tbl_Filter_TD_7387_output", 6100000, 3, "");
    tbl_Filter_TD_7387_output.allocateHost();
    Table tbl_Filter_TD_7631_output("tbl_Filter_TD_7631_output", 6100000, 2, "");
    tbl_Filter_TD_7631_output.allocateHost();
    Table tbl_SerializeFromObject_TD_72_input;
    tbl_SerializeFromObject_TD_72_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_72_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_72_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_72_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_72_input.allocateHost();
    tbl_SerializeFromObject_TD_72_input.loadHost();
    Table tbl_SerializeFromObject_TD_8459_input;
    tbl_SerializeFromObject_TD_8459_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8459_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8459_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_8459_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_8459_input.allocateHost();
    tbl_SerializeFromObject_TD_8459_input.loadHost();
    Table tbl_SerializeFromObject_TD_8122_input;
    tbl_SerializeFromObject_TD_8122_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8122_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8122_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_8122_input.allocateHost();
    tbl_SerializeFromObject_TD_8122_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_498177_s, tv_r_Filter_7_498177_e;
    gettimeofday(&tv_r_Filter_7_498177_s, 0);
    SW_Filter_TD_7631(tbl_SerializeFromObject_TD_8122_input, tbl_Filter_TD_7631_output);
    gettimeofday(&tv_r_Filter_7_498177_e, 0);

    struct timeval tv_r_Filter_7_964736_s, tv_r_Filter_7_964736_e;
    gettimeofday(&tv_r_Filter_7_964736_s, 0);
    SW_Filter_TD_7387(tbl_SerializeFromObject_TD_8459_input, tbl_Filter_TD_7387_output);
    gettimeofday(&tv_r_Filter_7_964736_e, 0);

    struct timeval tv_r_Filter_6_869825_s, tv_r_Filter_6_869825_e;
    gettimeofday(&tv_r_Filter_6_869825_s, 0);
    SW_Filter_TD_6938(tbl_SerializeFromObject_TD_72_input, tbl_Filter_TD_6938_output);
    gettimeofday(&tv_r_Filter_6_869825_e, 0);

    struct timeval tv_r_JOIN_INNER_6_789148_s, tv_r_JOIN_INNER_6_789148_e;
    gettimeofday(&tv_r_JOIN_INNER_6_789148_s, 0);
    SW_JOIN_INNER_TD_6764(tbl_Filter_TD_7387_output, tbl_Filter_TD_7631_output, tbl_JOIN_INNER_TD_6764_output);
    gettimeofday(&tv_r_JOIN_INNER_6_789148_e, 0);

    struct timeval tv_r_Filter_5_311478_s, tv_r_Filter_5_311478_e;
    gettimeofday(&tv_r_Filter_5_311478_s, 0);
    SW_Filter_TD_5364(tbl_SerializeFromObject_TD_6875_input, tbl_Filter_TD_5364_output);
    gettimeofday(&tv_r_Filter_5_311478_e, 0);

    struct timeval tv_r_JOIN_INNER_5_141274_s, tv_r_JOIN_INNER_5_141274_e;
    gettimeofday(&tv_r_JOIN_INNER_5_141274_s, 0);
    SW_JOIN_INNER_TD_5902(tbl_JOIN_INNER_TD_6764_output, tbl_Filter_TD_6938_output, tbl_JOIN_INNER_TD_5902_output);
    gettimeofday(&tv_r_JOIN_INNER_5_141274_e, 0);

    struct timeval tv_r_JOIN_INNER_4_77836_s, tv_r_JOIN_INNER_4_77836_e;
    gettimeofday(&tv_r_JOIN_INNER_4_77836_s, 0);
    SW_JOIN_INNER_TD_4395(tbl_JOIN_INNER_TD_5902_output, tbl_Filter_TD_5364_output, tbl_JOIN_INNER_TD_4395_output);
    gettimeofday(&tv_r_JOIN_INNER_4_77836_e, 0);

    struct timeval tv_r_Aggregate_3_139593_s, tv_r_Aggregate_3_139593_e;
    gettimeofday(&tv_r_Aggregate_3_139593_s, 0);
    SW_Aggregate_TD_3243(tbl_JOIN_INNER_TD_4395_output, tbl_Aggregate_TD_3243_output);
    gettimeofday(&tv_r_Aggregate_3_139593_e, 0);

    struct timeval tv_r_Sort_2_51549_s, tv_r_Sort_2_51549_e;
    gettimeofday(&tv_r_Sort_2_51549_s, 0);
    SW_Sort_TD_2520(tbl_Aggregate_TD_3243_output, tbl_Sort_TD_2520_output);
    gettimeofday(&tv_r_Sort_2_51549_e, 0);

    struct timeval tv_r_LocalLimit_1_388269_s, tv_r_LocalLimit_1_388269_e;
    gettimeofday(&tv_r_LocalLimit_1_388269_s, 0);
    SW_LocalLimit_TD_1558(tbl_Sort_TD_2520_output, tbl_LocalLimit_TD_1558_output);
    gettimeofday(&tv_r_LocalLimit_1_388269_e, 0);

    struct timeval tv_r_GlobalLimit_0_223155_s, tv_r_GlobalLimit_0_223155_e;
    gettimeofday(&tv_r_GlobalLimit_0_223155_s, 0);
    SW_GlobalLimit_TD_0180(tbl_LocalLimit_TD_1558_output, tbl_GlobalLimit_TD_0180_output);
    gettimeofday(&tv_r_GlobalLimit_0_223155_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_498177_s, &tv_r_Filter_7_498177_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8122_input: " << tbl_SerializeFromObject_TD_8122_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_964736_s, &tv_r_Filter_7_964736_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8459_input: " << tbl_SerializeFromObject_TD_8459_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_869825_s, &tv_r_Filter_6_869825_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_72_input: " << tbl_SerializeFromObject_TD_72_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_789148_s, &tv_r_JOIN_INNER_6_789148_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7387_output: " << tbl_Filter_TD_7387_output.getNumRow() << " " << "tbl_Filter_TD_7631_output: " << tbl_Filter_TD_7631_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_311478_s, &tv_r_Filter_5_311478_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6875_input: " << tbl_SerializeFromObject_TD_6875_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_141274_s, &tv_r_JOIN_INNER_5_141274_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6764_output: " << tbl_JOIN_INNER_TD_6764_output.getNumRow() << " " << "tbl_Filter_TD_6938_output: " << tbl_Filter_TD_6938_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_77836_s, &tv_r_JOIN_INNER_4_77836_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5902_output: " << tbl_JOIN_INNER_TD_5902_output.getNumRow() << " " << "tbl_Filter_TD_5364_output: " << tbl_Filter_TD_5364_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_139593_s, &tv_r_Aggregate_3_139593_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4395_output: " << tbl_JOIN_INNER_TD_4395_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_51549_s, &tv_r_Sort_2_51549_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3243_output: " << tbl_Aggregate_TD_3243_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_388269_s, &tv_r_LocalLimit_1_388269_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2520_output: " << tbl_Sort_TD_2520_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_223155_s, &tv_r_GlobalLimit_0_223155_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1558_output: " << tbl_LocalLimit_TD_1558_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.0415105 * 1000 << "ms" << std::endl; 
    return 0; 
}
