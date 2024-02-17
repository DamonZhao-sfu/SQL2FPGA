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

#include "cfgFunc_q29.hpp" 
#include "q29.hpp" 

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
    std::cout << "NOTE:running query #29\n."; 
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
    Table tbl_GlobalLimit_TD_0340_output("tbl_GlobalLimit_TD_0340_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0340_output.allocateHost();
    Table tbl_LocalLimit_TD_1597_output("tbl_LocalLimit_TD_1597_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1597_output.allocateHost();
    Table tbl_Sort_TD_2128_output("tbl_Sort_TD_2128_output", 6100000, 7, "");
    tbl_Sort_TD_2128_output.allocateHost();
    Table tbl_Aggregate_TD_3430_output("tbl_Aggregate_TD_3430_output", 6100000, 7, "");
    tbl_Aggregate_TD_3430_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4366_output("tbl_JOIN_INNER_TD_4366_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4366_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5190_output("tbl_JOIN_INNER_TD_5190_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5190_output.allocateHost();
    Table tbl_Filter_TD_5234_output("tbl_Filter_TD_5234_output", 6100000, 3, "");
    tbl_Filter_TD_5234_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6279_output("tbl_JOIN_INNER_TD_6279_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6279_output.allocateHost();
    Table tbl_Filter_TD_6891_output("tbl_Filter_TD_6891_output", 6100000, 3, "");
    tbl_Filter_TD_6891_output.allocateHost();
    Table tbl_SerializeFromObject_TD_629_input;
    tbl_SerializeFromObject_TD_629_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_629_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_629_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_629_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_629_input.allocateHost();
    tbl_SerializeFromObject_TD_629_input.loadHost();
    Table tbl_JOIN_INNER_TD_7511_output("tbl_JOIN_INNER_TD_7511_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7511_output.allocateHost();
    Table tbl_Filter_TD_7728_output("tbl_Filter_TD_7728_output", 6100000, 1, "");
    tbl_Filter_TD_7728_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7435_input;
    tbl_SerializeFromObject_TD_7435_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7435_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7435_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7435_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7435_input.allocateHost();
    tbl_SerializeFromObject_TD_7435_input.loadHost();
    Table tbl_JOIN_INNER_TD_8885_output("tbl_JOIN_INNER_TD_8885_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8885_output.allocateHost();
    Table tbl_Filter_TD_8741_output("tbl_Filter_TD_8741_output", 6100000, 1, "");
    tbl_Filter_TD_8741_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8510_input;
    tbl_SerializeFromObject_TD_8510_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8510_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8510_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8510_input.allocateHost();
    tbl_SerializeFromObject_TD_8510_input.loadHost();
    Table tbl_JOIN_INNER_TD_9867_output("tbl_JOIN_INNER_TD_9867_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_9867_output.allocateHost();
    Table tbl_Filter_TD_9557_output("tbl_Filter_TD_9557_output", 6100000, 1, "");
    tbl_Filter_TD_9557_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9880_input;
    tbl_SerializeFromObject_TD_9880_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9880_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9880_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9880_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9880_input.allocateHost();
    tbl_SerializeFromObject_TD_9880_input.loadHost();
    Table tbl_JOIN_INNER_TD_10259_output("tbl_JOIN_INNER_TD_10259_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_10259_output.allocateHost();
    Table tbl_Filter_TD_10978_output("tbl_Filter_TD_10978_output", 6100000, 4, "");
    tbl_Filter_TD_10978_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10375_input;
    tbl_SerializeFromObject_TD_10375_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10375_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10375_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10375_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10375_input.allocateHost();
    tbl_SerializeFromObject_TD_10375_input.loadHost();
    Table tbl_Filter_TD_1139_output("tbl_Filter_TD_1139_output", 6100000, 6, "");
    tbl_Filter_TD_1139_output.allocateHost();
    Table tbl_Filter_TD_11703_output("tbl_Filter_TD_11703_output", 6100000, 5, "");
    tbl_Filter_TD_11703_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11558_input;
    tbl_SerializeFromObject_TD_11558_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11558_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11558_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11558_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_11558_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_11558_input.allocateHost();
    tbl_SerializeFromObject_TD_11558_input.loadHost();
    Table tbl_SerializeFromObject_TD_12215_input;
    tbl_SerializeFromObject_TD_12215_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_12215_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12215_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12215_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12215_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12215_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_12215_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12215_input.allocateHost();
    tbl_SerializeFromObject_TD_12215_input.loadHost();
    Table tbl_SerializeFromObject_TD_12500_input;
    tbl_SerializeFromObject_TD_12500_input = Table("store_returns", store_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_12500_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12500_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_12500_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_12500_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_12500_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_12500_input.allocateHost();
    tbl_SerializeFromObject_TD_12500_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_154584_s, tv_r_Filter_11_154584_e;
    gettimeofday(&tv_r_Filter_11_154584_s, 0);
    SW_Filter_TD_11703(tbl_SerializeFromObject_TD_12500_input, tbl_Filter_TD_11703_output);
    gettimeofday(&tv_r_Filter_11_154584_e, 0);

    struct timeval tv_r_Filter_11_912857_s, tv_r_Filter_11_912857_e;
    gettimeofday(&tv_r_Filter_11_912857_s, 0);
    SW_Filter_TD_1139(tbl_SerializeFromObject_TD_12215_input, tbl_Filter_TD_1139_output);
    gettimeofday(&tv_r_Filter_11_912857_e, 0);

    struct timeval tv_r_Filter_10_796873_s, tv_r_Filter_10_796873_e;
    gettimeofday(&tv_r_Filter_10_796873_s, 0);
    SW_Filter_TD_10978(tbl_SerializeFromObject_TD_11558_input, tbl_Filter_TD_10978_output);
    gettimeofday(&tv_r_Filter_10_796873_e, 0);

    struct timeval tv_r_JOIN_INNER_10_654556_s, tv_r_JOIN_INNER_10_654556_e;
    gettimeofday(&tv_r_JOIN_INNER_10_654556_s, 0);
    SW_JOIN_INNER_TD_10259(tbl_Filter_TD_1139_output, tbl_Filter_TD_11703_output, tbl_JOIN_INNER_TD_10259_output);
    gettimeofday(&tv_r_JOIN_INNER_10_654556_e, 0);

    struct timeval tv_r_Filter_9_123300_s, tv_r_Filter_9_123300_e;
    gettimeofday(&tv_r_Filter_9_123300_s, 0);
    SW_Filter_TD_9557(tbl_SerializeFromObject_TD_10375_input, tbl_Filter_TD_9557_output);
    gettimeofday(&tv_r_Filter_9_123300_e, 0);

    struct timeval tv_r_JOIN_INNER_9_144834_s, tv_r_JOIN_INNER_9_144834_e;
    gettimeofday(&tv_r_JOIN_INNER_9_144834_s, 0);
    SW_JOIN_INNER_TD_9867(tbl_JOIN_INNER_TD_10259_output, tbl_Filter_TD_10978_output, tbl_JOIN_INNER_TD_9867_output);
    gettimeofday(&tv_r_JOIN_INNER_9_144834_e, 0);

    struct timeval tv_r_Filter_8_801864_s, tv_r_Filter_8_801864_e;
    gettimeofday(&tv_r_Filter_8_801864_s, 0);
    SW_Filter_TD_8741(tbl_SerializeFromObject_TD_9880_input, tbl_Filter_TD_8741_output);
    gettimeofday(&tv_r_Filter_8_801864_e, 0);

    struct timeval tv_r_JOIN_INNER_8_525878_s, tv_r_JOIN_INNER_8_525878_e;
    gettimeofday(&tv_r_JOIN_INNER_8_525878_s, 0);
    SW_JOIN_INNER_TD_8885(tbl_JOIN_INNER_TD_9867_output, tbl_Filter_TD_9557_output, tbl_JOIN_INNER_TD_8885_output);
    gettimeofday(&tv_r_JOIN_INNER_8_525878_e, 0);

    struct timeval tv_r_Filter_7_218297_s, tv_r_Filter_7_218297_e;
    gettimeofday(&tv_r_Filter_7_218297_s, 0);
    SW_Filter_TD_7728(tbl_SerializeFromObject_TD_8510_input, tbl_Filter_TD_7728_output);
    gettimeofday(&tv_r_Filter_7_218297_e, 0);

    struct timeval tv_r_JOIN_INNER_7_796746_s, tv_r_JOIN_INNER_7_796746_e;
    gettimeofday(&tv_r_JOIN_INNER_7_796746_s, 0);
    SW_JOIN_INNER_TD_7511(tbl_JOIN_INNER_TD_8885_output, tbl_Filter_TD_8741_output, tbl_JOIN_INNER_TD_7511_output);
    gettimeofday(&tv_r_JOIN_INNER_7_796746_e, 0);

    struct timeval tv_r_Filter_6_453207_s, tv_r_Filter_6_453207_e;
    gettimeofday(&tv_r_Filter_6_453207_s, 0);
    SW_Filter_TD_6891(tbl_SerializeFromObject_TD_7435_input, tbl_Filter_TD_6891_output);
    gettimeofday(&tv_r_Filter_6_453207_e, 0);

    struct timeval tv_r_JOIN_INNER_6_77163_s, tv_r_JOIN_INNER_6_77163_e;
    gettimeofday(&tv_r_JOIN_INNER_6_77163_s, 0);
    SW_JOIN_INNER_TD_6279(tbl_JOIN_INNER_TD_7511_output, tbl_Filter_TD_7728_output, tbl_JOIN_INNER_TD_6279_output);
    gettimeofday(&tv_r_JOIN_INNER_6_77163_e, 0);

    struct timeval tv_r_Filter_5_225968_s, tv_r_Filter_5_225968_e;
    gettimeofday(&tv_r_Filter_5_225968_s, 0);
    SW_Filter_TD_5234(tbl_SerializeFromObject_TD_629_input, tbl_Filter_TD_5234_output);
    gettimeofday(&tv_r_Filter_5_225968_e, 0);

    struct timeval tv_r_JOIN_INNER_5_224119_s, tv_r_JOIN_INNER_5_224119_e;
    gettimeofday(&tv_r_JOIN_INNER_5_224119_s, 0);
    SW_JOIN_INNER_TD_5190(tbl_JOIN_INNER_TD_6279_output, tbl_Filter_TD_6891_output, tbl_JOIN_INNER_TD_5190_output);
    gettimeofday(&tv_r_JOIN_INNER_5_224119_e, 0);

    struct timeval tv_r_JOIN_INNER_4_503258_s, tv_r_JOIN_INNER_4_503258_e;
    gettimeofday(&tv_r_JOIN_INNER_4_503258_s, 0);
    SW_JOIN_INNER_TD_4366(tbl_JOIN_INNER_TD_5190_output, tbl_Filter_TD_5234_output, tbl_JOIN_INNER_TD_4366_output);
    gettimeofday(&tv_r_JOIN_INNER_4_503258_e, 0);

    struct timeval tv_r_Aggregate_3_315248_s, tv_r_Aggregate_3_315248_e;
    gettimeofday(&tv_r_Aggregate_3_315248_s, 0);
    SW_Aggregate_TD_3430(tbl_JOIN_INNER_TD_4366_output, tbl_Aggregate_TD_3430_output);
    gettimeofday(&tv_r_Aggregate_3_315248_e, 0);

    struct timeval tv_r_Sort_2_505778_s, tv_r_Sort_2_505778_e;
    gettimeofday(&tv_r_Sort_2_505778_s, 0);
    SW_Sort_TD_2128(tbl_Aggregate_TD_3430_output, tbl_Sort_TD_2128_output);
    gettimeofday(&tv_r_Sort_2_505778_e, 0);

    struct timeval tv_r_LocalLimit_1_143230_s, tv_r_LocalLimit_1_143230_e;
    gettimeofday(&tv_r_LocalLimit_1_143230_s, 0);
    SW_LocalLimit_TD_1597(tbl_Sort_TD_2128_output, tbl_LocalLimit_TD_1597_output);
    gettimeofday(&tv_r_LocalLimit_1_143230_e, 0);

    struct timeval tv_r_GlobalLimit_0_541356_s, tv_r_GlobalLimit_0_541356_e;
    gettimeofday(&tv_r_GlobalLimit_0_541356_s, 0);
    SW_GlobalLimit_TD_0340(tbl_LocalLimit_TD_1597_output, tbl_GlobalLimit_TD_0340_output);
    gettimeofday(&tv_r_GlobalLimit_0_541356_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_154584_s, &tv_r_Filter_11_154584_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12500_input: " << tbl_SerializeFromObject_TD_12500_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_912857_s, &tv_r_Filter_11_912857_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12215_input: " << tbl_SerializeFromObject_TD_12215_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_796873_s, &tv_r_Filter_10_796873_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11558_input: " << tbl_SerializeFromObject_TD_11558_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_654556_s, &tv_r_JOIN_INNER_10_654556_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1139_output: " << tbl_Filter_TD_1139_output.getNumRow() << " " << "tbl_Filter_TD_11703_output: " << tbl_Filter_TD_11703_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_123300_s, &tv_r_Filter_9_123300_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10375_input: " << tbl_SerializeFromObject_TD_10375_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_144834_s, &tv_r_JOIN_INNER_9_144834_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10259_output: " << tbl_JOIN_INNER_TD_10259_output.getNumRow() << " " << "tbl_Filter_TD_10978_output: " << tbl_Filter_TD_10978_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_801864_s, &tv_r_Filter_8_801864_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9880_input: " << tbl_SerializeFromObject_TD_9880_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_525878_s, &tv_r_JOIN_INNER_8_525878_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9867_output: " << tbl_JOIN_INNER_TD_9867_output.getNumRow() << " " << "tbl_Filter_TD_9557_output: " << tbl_Filter_TD_9557_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_218297_s, &tv_r_Filter_7_218297_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8510_input: " << tbl_SerializeFromObject_TD_8510_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_796746_s, &tv_r_JOIN_INNER_7_796746_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8885_output: " << tbl_JOIN_INNER_TD_8885_output.getNumRow() << " " << "tbl_Filter_TD_8741_output: " << tbl_Filter_TD_8741_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_453207_s, &tv_r_Filter_6_453207_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7435_input: " << tbl_SerializeFromObject_TD_7435_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_77163_s, &tv_r_JOIN_INNER_6_77163_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7511_output: " << tbl_JOIN_INNER_TD_7511_output.getNumRow() << " " << "tbl_Filter_TD_7728_output: " << tbl_Filter_TD_7728_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_225968_s, &tv_r_Filter_5_225968_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_629_input: " << tbl_SerializeFromObject_TD_629_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_224119_s, &tv_r_JOIN_INNER_5_224119_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6279_output: " << tbl_JOIN_INNER_TD_6279_output.getNumRow() << " " << "tbl_Filter_TD_6891_output: " << tbl_Filter_TD_6891_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_503258_s, &tv_r_JOIN_INNER_4_503258_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5190_output: " << tbl_JOIN_INNER_TD_5190_output.getNumRow() << " " << "tbl_Filter_TD_5234_output: " << tbl_Filter_TD_5234_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_315248_s, &tv_r_Aggregate_3_315248_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4366_output: " << tbl_JOIN_INNER_TD_4366_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_505778_s, &tv_r_Sort_2_505778_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3430_output: " << tbl_Aggregate_TD_3430_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_143230_s, &tv_r_LocalLimit_1_143230_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2128_output: " << tbl_Sort_TD_2128_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_541356_s, &tv_r_GlobalLimit_0_541356_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1597_output: " << tbl_LocalLimit_TD_1597_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.52957 * 1000 << "ms" << std::endl; 
    return 0; 
}
