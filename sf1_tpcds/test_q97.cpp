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

#include "cfgFunc_q97.hpp" 
#include "q97.hpp" 

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
    std::cout << "NOTE:running query #97\n."; 
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
    Table tbl_Aggregate_TD_0983560_output("tbl_Aggregate_TD_0983560_output", 6100000, 3, "");
    tbl_Aggregate_TD_0983560_output.allocateHost();
    Table tbl_JOIN_FULLOUTER_TD_149864_output("tbl_JOIN_FULLOUTER_TD_149864_output", 6100000, 2, "");
    tbl_JOIN_FULLOUTER_TD_149864_output.allocateHost();
    Table tbl_Aggregate_TD_2799837_output("tbl_Aggregate_TD_2799837_output", 6100000, 2, "");
    tbl_Aggregate_TD_2799837_output.allocateHost();
    Table tbl_Aggregate_TD_2340169_output("tbl_Aggregate_TD_2340169_output", 6100000, 2, "");
    tbl_Aggregate_TD_2340169_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3743889_output("tbl_JOIN_INNER_TD_3743889_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3743889_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3802129_output("tbl_JOIN_INNER_TD_3802129_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3802129_output.allocateHost();
    Table tbl_Filter_TD_4333653_output("tbl_Filter_TD_4333653_output", 6100000, 3, "");
    tbl_Filter_TD_4333653_output.allocateHost();
    Table tbl_Filter_TD_4718198_output("tbl_Filter_TD_4718198_output", 6100000, 1, "");
    tbl_Filter_TD_4718198_output.allocateHost();
    Table tbl_Filter_TD_4213681_output("tbl_Filter_TD_4213681_output", 6100000, 3, "");
    tbl_Filter_TD_4213681_output.allocateHost();
    Table tbl_Filter_TD_4910913_output("tbl_Filter_TD_4910913_output", 6100000, 1, "");
    tbl_Filter_TD_4910913_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5272346_input;
    tbl_SerializeFromObject_TD_5272346_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5272346_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5272346_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_5272346_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_5272346_input.allocateHost();
    tbl_SerializeFromObject_TD_5272346_input.loadHost();
    Table tbl_SerializeFromObject_TD_5583036_input;
    tbl_SerializeFromObject_TD_5583036_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5583036_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5583036_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_5583036_input.allocateHost();
    tbl_SerializeFromObject_TD_5583036_input.loadHost();
    Table tbl_SerializeFromObject_TD_5901653_input;
    tbl_SerializeFromObject_TD_5901653_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5901653_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5901653_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_5901653_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_5901653_input.allocateHost();
    tbl_SerializeFromObject_TD_5901653_input.loadHost();
    Table tbl_SerializeFromObject_TD_5119191_input;
    tbl_SerializeFromObject_TD_5119191_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5119191_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5119191_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_5119191_input.allocateHost();
    tbl_SerializeFromObject_TD_5119191_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_940949_s, tv_r_Filter_4_940949_e;
    gettimeofday(&tv_r_Filter_4_940949_s, 0);
    SW_Filter_TD_4910913(tbl_SerializeFromObject_TD_5119191_input, tbl_Filter_TD_4910913_output);
    gettimeofday(&tv_r_Filter_4_940949_e, 0);

    struct timeval tv_r_Filter_4_583598_s, tv_r_Filter_4_583598_e;
    gettimeofday(&tv_r_Filter_4_583598_s, 0);
    SW_Filter_TD_4213681(tbl_SerializeFromObject_TD_5901653_input, tbl_Filter_TD_4213681_output);
    gettimeofday(&tv_r_Filter_4_583598_e, 0);

    struct timeval tv_r_Filter_4_956160_s, tv_r_Filter_4_956160_e;
    gettimeofday(&tv_r_Filter_4_956160_s, 0);
    SW_Filter_TD_4718198(tbl_SerializeFromObject_TD_5583036_input, tbl_Filter_TD_4718198_output);
    gettimeofday(&tv_r_Filter_4_956160_e, 0);

    struct timeval tv_r_Filter_4_780221_s, tv_r_Filter_4_780221_e;
    gettimeofday(&tv_r_Filter_4_780221_s, 0);
    SW_Filter_TD_4333653(tbl_SerializeFromObject_TD_5272346_input, tbl_Filter_TD_4333653_output);
    gettimeofday(&tv_r_Filter_4_780221_e, 0);

    struct timeval tv_r_JOIN_INNER_3_381179_s, tv_r_JOIN_INNER_3_381179_e;
    gettimeofday(&tv_r_JOIN_INNER_3_381179_s, 0);
    SW_JOIN_INNER_TD_3802129(tbl_Filter_TD_4213681_output, tbl_Filter_TD_4910913_output, tbl_JOIN_INNER_TD_3802129_output);
    gettimeofday(&tv_r_JOIN_INNER_3_381179_e, 0);

    struct timeval tv_r_JOIN_INNER_3_952312_s, tv_r_JOIN_INNER_3_952312_e;
    gettimeofday(&tv_r_JOIN_INNER_3_952312_s, 0);
    SW_JOIN_INNER_TD_3743889(tbl_Filter_TD_4333653_output, tbl_Filter_TD_4718198_output, tbl_JOIN_INNER_TD_3743889_output);
    gettimeofday(&tv_r_JOIN_INNER_3_952312_e, 0);

    struct timeval tv_r_Aggregate_2_231365_s, tv_r_Aggregate_2_231365_e;
    gettimeofday(&tv_r_Aggregate_2_231365_s, 0);
    SW_Aggregate_TD_2340169(tbl_JOIN_INNER_TD_3802129_output, tbl_Aggregate_TD_2340169_output);
    gettimeofday(&tv_r_Aggregate_2_231365_e, 0);

    struct timeval tv_r_Aggregate_2_737700_s, tv_r_Aggregate_2_737700_e;
    gettimeofday(&tv_r_Aggregate_2_737700_s, 0);
    SW_Aggregate_TD_2799837(tbl_JOIN_INNER_TD_3743889_output, tbl_Aggregate_TD_2799837_output);
    gettimeofday(&tv_r_Aggregate_2_737700_e, 0);

    struct timeval tv_r_JOIN_FULLOUTER_1_736379_s, tv_r_JOIN_FULLOUTER_1_736379_e;
    gettimeofday(&tv_r_JOIN_FULLOUTER_1_736379_s, 0);
    SW_JOIN_FULLOUTER_TD_149864(tbl_Aggregate_TD_2799837_output, tbl_Aggregate_TD_2340169_output, tbl_JOIN_FULLOUTER_TD_149864_output);
    gettimeofday(&tv_r_JOIN_FULLOUTER_1_736379_e, 0);

    struct timeval tv_r_Aggregate_0_587704_s, tv_r_Aggregate_0_587704_e;
    gettimeofday(&tv_r_Aggregate_0_587704_s, 0);
    SW_Aggregate_TD_0983560(tbl_JOIN_FULLOUTER_TD_149864_output, tbl_Aggregate_TD_0983560_output);
    gettimeofday(&tv_r_Aggregate_0_587704_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_940949_s, &tv_r_Filter_4_940949_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5119191_input: " << tbl_SerializeFromObject_TD_5119191_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_583598_s, &tv_r_Filter_4_583598_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5901653_input: " << tbl_SerializeFromObject_TD_5901653_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_956160_s, &tv_r_Filter_4_956160_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5583036_input: " << tbl_SerializeFromObject_TD_5583036_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_780221_s, &tv_r_Filter_4_780221_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5272346_input: " << tbl_SerializeFromObject_TD_5272346_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_381179_s, &tv_r_JOIN_INNER_3_381179_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4213681_output: " << tbl_Filter_TD_4213681_output.getNumRow() << " " << "tbl_Filter_TD_4910913_output: " << tbl_Filter_TD_4910913_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_952312_s, &tv_r_JOIN_INNER_3_952312_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4333653_output: " << tbl_Filter_TD_4333653_output.getNumRow() << " " << "tbl_Filter_TD_4718198_output: " << tbl_Filter_TD_4718198_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_231365_s, &tv_r_Aggregate_2_231365_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3802129_output: " << tbl_JOIN_INNER_TD_3802129_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_737700_s, &tv_r_Aggregate_2_737700_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3743889_output: " << tbl_JOIN_INNER_TD_3743889_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_FULLOUTER_1: " << tvdiff(&tv_r_JOIN_FULLOUTER_1_736379_s, &tv_r_JOIN_FULLOUTER_1_736379_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2799837_output: " << tbl_Aggregate_TD_2799837_output.getNumRow() << " " << "tbl_Aggregate_TD_2340169_output: " << tbl_Aggregate_TD_2340169_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_587704_s, &tv_r_Aggregate_0_587704_e) / 1000.0 << " ms " 
     << "tbl_JOIN_FULLOUTER_TD_149864_output: " << tbl_JOIN_FULLOUTER_TD_149864_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.4253385 * 1000 << "ms" << std::endl; 
    return 0; 
}
