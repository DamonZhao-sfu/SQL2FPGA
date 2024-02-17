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

#include "cfgFunc_q91.hpp" 
#include "q91.hpp" 

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
    std::cout << "NOTE:running query #91\n."; 
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
    Table tbl_Sort_TD_065_output("tbl_Sort_TD_065_output", 6100000, 4, "");
    tbl_Sort_TD_065_output.allocateHost();
    Table tbl_Aggregate_TD_1398_output("tbl_Aggregate_TD_1398_output", 6100000, 4, "");
    tbl_Aggregate_TD_1398_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2737_output("tbl_JOIN_INNER_TD_2737_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_2737_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3281_output("tbl_JOIN_INNER_TD_3281_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_3281_output.allocateHost();
    Table tbl_Filter_TD_364_output("tbl_Filter_TD_364_output", 6100000, 1, "");
    tbl_Filter_TD_364_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4340_output("tbl_JOIN_INNER_TD_4340_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4340_output.allocateHost();
    Table tbl_Filter_TD_4461_output("tbl_Filter_TD_4461_output", 6100000, 3, "");
    tbl_Filter_TD_4461_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4870_input;
    tbl_SerializeFromObject_TD_4870_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4870_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_4870_input.addCol("hd_buy_potential", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4870_input.allocateHost();
    tbl_SerializeFromObject_TD_4870_input.loadHost();
    Table tbl_JOIN_INNER_TD_5928_output("tbl_JOIN_INNER_TD_5928_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5928_output.allocateHost();
    Table tbl_Filter_TD_5793_output("tbl_Filter_TD_5793_output", 6100000, 1, "");
    tbl_Filter_TD_5793_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5912_input;
    tbl_SerializeFromObject_TD_5912_input = Table("customer_demographics", customer_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5912_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_5912_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5912_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5912_input.allocateHost();
    tbl_SerializeFromObject_TD_5912_input.loadHost();
    Table tbl_JOIN_INNER_TD_679_output("tbl_JOIN_INNER_TD_679_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_679_output.allocateHost();
    Table tbl_Filter_TD_6203_output("tbl_Filter_TD_6203_output", 6100000, 4, "");
    tbl_Filter_TD_6203_output.allocateHost();
    Table tbl_SerializeFromObject_TD_666_input;
    tbl_SerializeFromObject_TD_666_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_666_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_666_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_666_input.allocateHost();
    tbl_SerializeFromObject_TD_666_input.loadHost();
    Table tbl_JOIN_INNER_TD_7615_output("tbl_JOIN_INNER_TD_7615_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7615_output.allocateHost();
    Table tbl_Filter_TD_7219_output("tbl_Filter_TD_7219_output", 6100000, 1, "");
    tbl_Filter_TD_7219_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7275_input;
    tbl_SerializeFromObject_TD_7275_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_7275_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_7275_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_7275_input.addCol("c_current_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_7275_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_7275_input.allocateHost();
    tbl_SerializeFromObject_TD_7275_input.loadHost();
    Table tbl_Filter_TD_8283_output("tbl_Filter_TD_8283_output", 6100000, 4, "");
    tbl_Filter_TD_8283_output.allocateHost();
    Table tbl_Filter_TD_8169_output("tbl_Filter_TD_8169_output", 6100000, 4, "");
    tbl_Filter_TD_8169_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8831_input;
    tbl_SerializeFromObject_TD_8831_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8831_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8831_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8831_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8831_input.allocateHost();
    tbl_SerializeFromObject_TD_8831_input.loadHost();
    Table tbl_SerializeFromObject_TD_9912_input;
    tbl_SerializeFromObject_TD_9912_input = Table("call_center", call_center_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9912_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_9912_input.addCol("cc_call_center_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9912_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9912_input.addCol("cc_manager", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9912_input.allocateHost();
    tbl_SerializeFromObject_TD_9912_input.loadHost();
    Table tbl_SerializeFromObject_TD_9990_input;
    tbl_SerializeFromObject_TD_9990_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9990_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_9990_input.addCol("cr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_9990_input.addCol("cr_call_center_sk", 4);
    tbl_SerializeFromObject_TD_9990_input.addCol("cr_net_loss", 4);
    tbl_SerializeFromObject_TD_9990_input.allocateHost();
    tbl_SerializeFromObject_TD_9990_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_56260_s, tv_r_Filter_8_56260_e;
    gettimeofday(&tv_r_Filter_8_56260_s, 0);
    SW_Filter_TD_8169(tbl_SerializeFromObject_TD_9990_input, tbl_Filter_TD_8169_output);
    gettimeofday(&tv_r_Filter_8_56260_e, 0);

    struct timeval tv_r_Filter_8_554038_s, tv_r_Filter_8_554038_e;
    gettimeofday(&tv_r_Filter_8_554038_s, 0);
    SW_Filter_TD_8283(tbl_SerializeFromObject_TD_9912_input, tbl_Filter_TD_8283_output);
    gettimeofday(&tv_r_Filter_8_554038_e, 0);

    struct timeval tv_r_Filter_7_644222_s, tv_r_Filter_7_644222_e;
    gettimeofday(&tv_r_Filter_7_644222_s, 0);
    SW_Filter_TD_7219(tbl_SerializeFromObject_TD_8831_input, tbl_Filter_TD_7219_output);
    gettimeofday(&tv_r_Filter_7_644222_e, 0);

    struct timeval tv_r_JOIN_INNER_7_930448_s, tv_r_JOIN_INNER_7_930448_e;
    gettimeofday(&tv_r_JOIN_INNER_7_930448_s, 0);
    SW_JOIN_INNER_TD_7615(tbl_Filter_TD_8283_output, tbl_Filter_TD_8169_output, tbl_JOIN_INNER_TD_7615_output);
    gettimeofday(&tv_r_JOIN_INNER_7_930448_e, 0);

    struct timeval tv_r_Filter_6_899321_s, tv_r_Filter_6_899321_e;
    gettimeofday(&tv_r_Filter_6_899321_s, 0);
    SW_Filter_TD_6203(tbl_SerializeFromObject_TD_7275_input, tbl_Filter_TD_6203_output);
    gettimeofday(&tv_r_Filter_6_899321_e, 0);

    struct timeval tv_r_JOIN_INNER_6_682086_s, tv_r_JOIN_INNER_6_682086_e;
    gettimeofday(&tv_r_JOIN_INNER_6_682086_s, 0);
    SW_JOIN_INNER_TD_679(tbl_JOIN_INNER_TD_7615_output, tbl_Filter_TD_7219_output, tbl_JOIN_INNER_TD_679_output);
    gettimeofday(&tv_r_JOIN_INNER_6_682086_e, 0);

    struct timeval tv_r_Filter_5_242972_s, tv_r_Filter_5_242972_e;
    gettimeofday(&tv_r_Filter_5_242972_s, 0);
    SW_Filter_TD_5793(tbl_SerializeFromObject_TD_666_input, tbl_Filter_TD_5793_output);
    gettimeofday(&tv_r_Filter_5_242972_e, 0);

    struct timeval tv_r_JOIN_INNER_5_192039_s, tv_r_JOIN_INNER_5_192039_e;
    gettimeofday(&tv_r_JOIN_INNER_5_192039_s, 0);
    SW_JOIN_INNER_TD_5928(tbl_JOIN_INNER_TD_679_output, tbl_Filter_TD_6203_output, tbl_JOIN_INNER_TD_5928_output);
    gettimeofday(&tv_r_JOIN_INNER_5_192039_e, 0);

    struct timeval tv_r_Filter_4_785133_s, tv_r_Filter_4_785133_e;
    gettimeofday(&tv_r_Filter_4_785133_s, 0);
    SW_Filter_TD_4461(tbl_SerializeFromObject_TD_5912_input, tbl_Filter_TD_4461_output);
    gettimeofday(&tv_r_Filter_4_785133_e, 0);

    struct timeval tv_r_JOIN_INNER_4_918023_s, tv_r_JOIN_INNER_4_918023_e;
    gettimeofday(&tv_r_JOIN_INNER_4_918023_s, 0);
    SW_JOIN_INNER_TD_4340(tbl_JOIN_INNER_TD_5928_output, tbl_Filter_TD_5793_output, tbl_JOIN_INNER_TD_4340_output);
    gettimeofday(&tv_r_JOIN_INNER_4_918023_e, 0);

    struct timeval tv_r_Filter_3_253755_s, tv_r_Filter_3_253755_e;
    gettimeofday(&tv_r_Filter_3_253755_s, 0);
    SW_Filter_TD_364(tbl_SerializeFromObject_TD_4870_input, tbl_Filter_TD_364_output);
    gettimeofday(&tv_r_Filter_3_253755_e, 0);

    struct timeval tv_r_JOIN_INNER_3_239120_s, tv_r_JOIN_INNER_3_239120_e;
    gettimeofday(&tv_r_JOIN_INNER_3_239120_s, 0);
    SW_JOIN_INNER_TD_3281(tbl_JOIN_INNER_TD_4340_output, tbl_Filter_TD_4461_output, tbl_JOIN_INNER_TD_3281_output);
    gettimeofday(&tv_r_JOIN_INNER_3_239120_e, 0);

    struct timeval tv_r_JOIN_INNER_2_455763_s, tv_r_JOIN_INNER_2_455763_e;
    gettimeofday(&tv_r_JOIN_INNER_2_455763_s, 0);
    SW_JOIN_INNER_TD_2737(tbl_JOIN_INNER_TD_3281_output, tbl_Filter_TD_364_output, tbl_JOIN_INNER_TD_2737_output);
    gettimeofday(&tv_r_JOIN_INNER_2_455763_e, 0);

    struct timeval tv_r_Aggregate_1_716838_s, tv_r_Aggregate_1_716838_e;
    gettimeofday(&tv_r_Aggregate_1_716838_s, 0);
    SW_Aggregate_TD_1398(tbl_JOIN_INNER_TD_2737_output, tbl_Aggregate_TD_1398_output);
    gettimeofday(&tv_r_Aggregate_1_716838_e, 0);

    struct timeval tv_r_Sort_0_918181_s, tv_r_Sort_0_918181_e;
    gettimeofday(&tv_r_Sort_0_918181_s, 0);
    SW_Sort_TD_065(tbl_Aggregate_TD_1398_output, tbl_Sort_TD_065_output);
    gettimeofday(&tv_r_Sort_0_918181_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_56260_s, &tv_r_Filter_8_56260_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9990_input: " << tbl_SerializeFromObject_TD_9990_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_554038_s, &tv_r_Filter_8_554038_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9912_input: " << tbl_SerializeFromObject_TD_9912_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_644222_s, &tv_r_Filter_7_644222_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8831_input: " << tbl_SerializeFromObject_TD_8831_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_930448_s, &tv_r_JOIN_INNER_7_930448_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8283_output: " << tbl_Filter_TD_8283_output.getNumRow() << " " << "tbl_Filter_TD_8169_output: " << tbl_Filter_TD_8169_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_899321_s, &tv_r_Filter_6_899321_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7275_input: " << tbl_SerializeFromObject_TD_7275_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_682086_s, &tv_r_JOIN_INNER_6_682086_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7615_output: " << tbl_JOIN_INNER_TD_7615_output.getNumRow() << " " << "tbl_Filter_TD_7219_output: " << tbl_Filter_TD_7219_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_242972_s, &tv_r_Filter_5_242972_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_666_input: " << tbl_SerializeFromObject_TD_666_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_192039_s, &tv_r_JOIN_INNER_5_192039_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_679_output: " << tbl_JOIN_INNER_TD_679_output.getNumRow() << " " << "tbl_Filter_TD_6203_output: " << tbl_Filter_TD_6203_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_785133_s, &tv_r_Filter_4_785133_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5912_input: " << tbl_SerializeFromObject_TD_5912_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_918023_s, &tv_r_JOIN_INNER_4_918023_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5928_output: " << tbl_JOIN_INNER_TD_5928_output.getNumRow() << " " << "tbl_Filter_TD_5793_output: " << tbl_Filter_TD_5793_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_253755_s, &tv_r_Filter_3_253755_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4870_input: " << tbl_SerializeFromObject_TD_4870_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_239120_s, &tv_r_JOIN_INNER_3_239120_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4340_output: " << tbl_JOIN_INNER_TD_4340_output.getNumRow() << " " << "tbl_Filter_TD_4461_output: " << tbl_Filter_TD_4461_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_455763_s, &tv_r_JOIN_INNER_2_455763_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3281_output: " << tbl_JOIN_INNER_TD_3281_output.getNumRow() << " " << "tbl_Filter_TD_364_output: " << tbl_Filter_TD_364_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_716838_s, &tv_r_Aggregate_1_716838_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2737_output: " << tbl_JOIN_INNER_TD_2737_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_918181_s, &tv_r_Sort_0_918181_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1398_output: " << tbl_Aggregate_TD_1398_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.2252612 * 1000 << "ms" << std::endl; 
    return 0; 
}
