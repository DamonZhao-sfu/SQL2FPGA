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

#include "cfgFunc_q38.hpp" 
#include "q38.hpp" 

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
    std::cout << "NOTE:running query #38\n."; 
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
    Table tbl_Aggregate_TD_0863_output("tbl_Aggregate_TD_0863_output", 6100000, 1, "");
    tbl_Aggregate_TD_0863_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_2911_output("tbl_JOIN_LEFTSEMI_TD_2911_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_2911_output.allocateHost();
    Table tbl_Aggregate_TD_3468_output("tbl_Aggregate_TD_3468_output", 6100000, 3, "");
    tbl_Aggregate_TD_3468_output.allocateHost();
    Table tbl_Aggregate_TD_3354_output("tbl_Aggregate_TD_3354_output", 6100000, 3, "");
    tbl_Aggregate_TD_3354_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_4869_output("tbl_JOIN_LEFTSEMI_TD_4869_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_4869_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4934_output("tbl_JOIN_INNER_TD_4934_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4934_output.allocateHost();
    Table tbl_Aggregate_TD_5946_output("tbl_Aggregate_TD_5946_output", 6100000, 3, "");
    tbl_Aggregate_TD_5946_output.allocateHost();
    Table tbl_Aggregate_TD_5224_output("tbl_Aggregate_TD_5224_output", 6100000, 3, "");
    tbl_Aggregate_TD_5224_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5222_output("tbl_JOIN_INNER_TD_5222_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5222_output.allocateHost();
    Table tbl_Filter_TD_5529_output("tbl_Filter_TD_5529_output", 6100000, 3, "");
    tbl_Filter_TD_5529_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6456_output("tbl_JOIN_INNER_TD_6456_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6456_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6267_output("tbl_JOIN_INNER_TD_6267_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6267_output.allocateHost();
    Table tbl_Filter_TD_6124_output("tbl_Filter_TD_6124_output", 6100000, 2, "");
    tbl_Filter_TD_6124_output.allocateHost();
    Table tbl_Filter_TD_63_output("tbl_Filter_TD_63_output", 6100000, 2, "");
    tbl_Filter_TD_63_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6457_input;
    tbl_SerializeFromObject_TD_6457_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6457_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6457_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6457_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6457_input.allocateHost();
    tbl_SerializeFromObject_TD_6457_input.loadHost();
    Table tbl_JOIN_INNER_TD_7364_output("tbl_JOIN_INNER_TD_7364_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7364_output.allocateHost();
    Table tbl_Filter_TD_7489_output("tbl_Filter_TD_7489_output", 6100000, 3, "");
    tbl_Filter_TD_7489_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7569_output("tbl_JOIN_INNER_TD_7569_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7569_output.allocateHost();
    Table tbl_Filter_TD_7326_output("tbl_Filter_TD_7326_output", 6100000, 3, "");
    tbl_Filter_TD_7326_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7139_input;
    tbl_SerializeFromObject_TD_7139_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7139_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7139_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_7139_input.allocateHost();
    tbl_SerializeFromObject_TD_7139_input.loadHost();
    Table tbl_SerializeFromObject_TD_7548_input;
    tbl_SerializeFromObject_TD_7548_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7548_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7548_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7548_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7548_input.allocateHost();
    tbl_SerializeFromObject_TD_7548_input.loadHost();
    Table tbl_Filter_TD_896_output("tbl_Filter_TD_896_output", 6100000, 2, "");
    tbl_Filter_TD_896_output.allocateHost();
    Table tbl_Filter_TD_8943_output("tbl_Filter_TD_8943_output", 6100000, 2, "");
    tbl_Filter_TD_8943_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8785_input;
    tbl_SerializeFromObject_TD_8785_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8785_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8785_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8785_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8785_input.allocateHost();
    tbl_SerializeFromObject_TD_8785_input.loadHost();
    Table tbl_Filter_TD_8570_output("tbl_Filter_TD_8570_output", 6100000, 2, "");
    tbl_Filter_TD_8570_output.allocateHost();
    Table tbl_Filter_TD_8198_output("tbl_Filter_TD_8198_output", 6100000, 2, "");
    tbl_Filter_TD_8198_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8399_input;
    tbl_SerializeFromObject_TD_8399_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8399_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8399_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8399_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8399_input.allocateHost();
    tbl_SerializeFromObject_TD_8399_input.loadHost();
    Table tbl_SerializeFromObject_TD_9376_input;
    tbl_SerializeFromObject_TD_9376_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9376_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9376_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9376_input.allocateHost();
    tbl_SerializeFromObject_TD_9376_input.loadHost();
    Table tbl_SerializeFromObject_TD_9493_input;
    tbl_SerializeFromObject_TD_9493_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9493_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9493_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9493_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9493_input.allocateHost();
    tbl_SerializeFromObject_TD_9493_input.loadHost();
    Table tbl_SerializeFromObject_TD_933_input;
    tbl_SerializeFromObject_TD_933_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_933_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_933_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_933_input.allocateHost();
    tbl_SerializeFromObject_TD_933_input.loadHost();
    Table tbl_SerializeFromObject_TD_9800_input;
    tbl_SerializeFromObject_TD_9800_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9800_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9800_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9800_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9800_input.allocateHost();
    tbl_SerializeFromObject_TD_9800_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_883938_s, tv_r_Filter_8_883938_e;
    gettimeofday(&tv_r_Filter_8_883938_s, 0);
    SW_Filter_TD_8198(tbl_SerializeFromObject_TD_9800_input, tbl_Filter_TD_8198_output);
    gettimeofday(&tv_r_Filter_8_883938_e, 0);

    struct timeval tv_r_Filter_8_958485_s, tv_r_Filter_8_958485_e;
    gettimeofday(&tv_r_Filter_8_958485_s, 0);
    SW_Filter_TD_8570(tbl_SerializeFromObject_TD_933_input, tbl_Filter_TD_8570_output);
    gettimeofday(&tv_r_Filter_8_958485_e, 0);

    struct timeval tv_r_Filter_8_729429_s, tv_r_Filter_8_729429_e;
    gettimeofday(&tv_r_Filter_8_729429_s, 0);
    SW_Filter_TD_8943(tbl_SerializeFromObject_TD_9493_input, tbl_Filter_TD_8943_output);
    gettimeofday(&tv_r_Filter_8_729429_e, 0);

    struct timeval tv_r_Filter_8_787238_s, tv_r_Filter_8_787238_e;
    gettimeofday(&tv_r_Filter_8_787238_s, 0);
    SW_Filter_TD_896(tbl_SerializeFromObject_TD_9376_input, tbl_Filter_TD_896_output);
    gettimeofday(&tv_r_Filter_8_787238_e, 0);

    struct timeval tv_r_Filter_7_310983_s, tv_r_Filter_7_310983_e;
    gettimeofday(&tv_r_Filter_7_310983_s, 0);
    SW_Filter_TD_7326(tbl_SerializeFromObject_TD_8399_input, tbl_Filter_TD_7326_output);
    gettimeofday(&tv_r_Filter_7_310983_e, 0);

    struct timeval tv_r_JOIN_INNER_7_585908_s, tv_r_JOIN_INNER_7_585908_e;
    gettimeofday(&tv_r_JOIN_INNER_7_585908_s, 0);
    SW_JOIN_INNER_TD_7569(tbl_Filter_TD_8570_output, tbl_Filter_TD_8198_output, tbl_JOIN_INNER_TD_7569_output);
    gettimeofday(&tv_r_JOIN_INNER_7_585908_e, 0);

    struct timeval tv_r_Filter_7_810767_s, tv_r_Filter_7_810767_e;
    gettimeofday(&tv_r_Filter_7_810767_s, 0);
    SW_Filter_TD_7489(tbl_SerializeFromObject_TD_8785_input, tbl_Filter_TD_7489_output);
    gettimeofday(&tv_r_Filter_7_810767_e, 0);

    struct timeval tv_r_JOIN_INNER_7_395224_s, tv_r_JOIN_INNER_7_395224_e;
    gettimeofday(&tv_r_JOIN_INNER_7_395224_s, 0);
    SW_JOIN_INNER_TD_7364(tbl_Filter_TD_896_output, tbl_Filter_TD_8943_output, tbl_JOIN_INNER_TD_7364_output);
    gettimeofday(&tv_r_JOIN_INNER_7_395224_e, 0);

    struct timeval tv_r_Filter_6_121008_s, tv_r_Filter_6_121008_e;
    gettimeofday(&tv_r_Filter_6_121008_s, 0);
    SW_Filter_TD_63(tbl_SerializeFromObject_TD_7548_input, tbl_Filter_TD_63_output);
    gettimeofday(&tv_r_Filter_6_121008_e, 0);

    struct timeval tv_r_Filter_6_691207_s, tv_r_Filter_6_691207_e;
    gettimeofday(&tv_r_Filter_6_691207_s, 0);
    SW_Filter_TD_6124(tbl_SerializeFromObject_TD_7139_input, tbl_Filter_TD_6124_output);
    gettimeofday(&tv_r_Filter_6_691207_e, 0);

    struct timeval tv_r_JOIN_INNER_6_48010_s, tv_r_JOIN_INNER_6_48010_e;
    gettimeofday(&tv_r_JOIN_INNER_6_48010_s, 0);
    SW_JOIN_INNER_TD_6267(tbl_JOIN_INNER_TD_7569_output, tbl_Filter_TD_7326_output, tbl_JOIN_INNER_TD_6267_output);
    gettimeofday(&tv_r_JOIN_INNER_6_48010_e, 0);

    struct timeval tv_r_JOIN_INNER_6_181868_s, tv_r_JOIN_INNER_6_181868_e;
    gettimeofday(&tv_r_JOIN_INNER_6_181868_s, 0);
    SW_JOIN_INNER_TD_6456(tbl_JOIN_INNER_TD_7364_output, tbl_Filter_TD_7489_output, tbl_JOIN_INNER_TD_6456_output);
    gettimeofday(&tv_r_JOIN_INNER_6_181868_e, 0);

    struct timeval tv_r_Filter_5_156831_s, tv_r_Filter_5_156831_e;
    gettimeofday(&tv_r_Filter_5_156831_s, 0);
    SW_Filter_TD_5529(tbl_SerializeFromObject_TD_6457_input, tbl_Filter_TD_5529_output);
    gettimeofday(&tv_r_Filter_5_156831_e, 0);

    struct timeval tv_r_JOIN_INNER_5_688190_s, tv_r_JOIN_INNER_5_688190_e;
    gettimeofday(&tv_r_JOIN_INNER_5_688190_s, 0);
    SW_JOIN_INNER_TD_5222(tbl_Filter_TD_6124_output, tbl_Filter_TD_63_output, tbl_JOIN_INNER_TD_5222_output);
    gettimeofday(&tv_r_JOIN_INNER_5_688190_e, 0);

    struct timeval tv_r_Aggregate_5_595488_s, tv_r_Aggregate_5_595488_e;
    gettimeofday(&tv_r_Aggregate_5_595488_s, 0);
    SW_Aggregate_TD_5224(tbl_JOIN_INNER_TD_6267_output, tbl_Aggregate_TD_5224_output);
    gettimeofday(&tv_r_Aggregate_5_595488_e, 0);

    struct timeval tv_r_Aggregate_5_700673_s, tv_r_Aggregate_5_700673_e;
    gettimeofday(&tv_r_Aggregate_5_700673_s, 0);
    SW_Aggregate_TD_5946(tbl_JOIN_INNER_TD_6456_output, tbl_Aggregate_TD_5946_output);
    gettimeofday(&tv_r_Aggregate_5_700673_e, 0);

    struct timeval tv_r_JOIN_INNER_4_768690_s, tv_r_JOIN_INNER_4_768690_e;
    gettimeofday(&tv_r_JOIN_INNER_4_768690_s, 0);
    SW_JOIN_INNER_TD_4934(tbl_JOIN_INNER_TD_5222_output, tbl_Filter_TD_5529_output, tbl_JOIN_INNER_TD_4934_output);
    gettimeofday(&tv_r_JOIN_INNER_4_768690_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_4_865794_s, tv_r_JOIN_LEFTSEMI_4_865794_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_865794_s, 0);
    SW_JOIN_LEFTSEMI_TD_4869(tbl_Aggregate_TD_5946_output, tbl_Aggregate_TD_5224_output, tbl_JOIN_LEFTSEMI_TD_4869_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_865794_e, 0);

    struct timeval tv_r_Aggregate_3_613028_s, tv_r_Aggregate_3_613028_e;
    gettimeofday(&tv_r_Aggregate_3_613028_s, 0);
    SW_Aggregate_TD_3354(tbl_JOIN_INNER_TD_4934_output, tbl_Aggregate_TD_3354_output);
    gettimeofday(&tv_r_Aggregate_3_613028_e, 0);

    struct timeval tv_r_Aggregate_3_313619_s, tv_r_Aggregate_3_313619_e;
    gettimeofday(&tv_r_Aggregate_3_313619_s, 0);
    SW_Aggregate_TD_3468(tbl_JOIN_LEFTSEMI_TD_4869_output, tbl_Aggregate_TD_3468_output);
    gettimeofday(&tv_r_Aggregate_3_313619_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_2_631682_s, tv_r_JOIN_LEFTSEMI_2_631682_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_631682_s, 0);
    SW_JOIN_LEFTSEMI_TD_2911(tbl_Aggregate_TD_3468_output, tbl_Aggregate_TD_3354_output, tbl_JOIN_LEFTSEMI_TD_2911_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_631682_e, 0);

    struct timeval tv_r_Aggregate_1_365443_s, tv_r_Aggregate_1_365443_e;
    gettimeofday(&tv_r_Aggregate_1_365443_s, 0);
    SW_Aggregate_TD_1176(tbl_JOIN_LEFTSEMI_TD_2911_output, NULL);
    gettimeofday(&tv_r_Aggregate_1_365443_e, 0);

    struct timeval tv_r_Aggregate_0_992650_s, tv_r_Aggregate_0_992650_e;
    gettimeofday(&tv_r_Aggregate_0_992650_s, 0);
    SW_Aggregate_TD_0863(NULL, tbl_Aggregate_TD_0863_output);
    gettimeofday(&tv_r_Aggregate_0_992650_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_883938_s, &tv_r_Filter_8_883938_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9800_input: " << tbl_SerializeFromObject_TD_9800_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_958485_s, &tv_r_Filter_8_958485_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_933_input: " << tbl_SerializeFromObject_TD_933_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_729429_s, &tv_r_Filter_8_729429_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9493_input: " << tbl_SerializeFromObject_TD_9493_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_787238_s, &tv_r_Filter_8_787238_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9376_input: " << tbl_SerializeFromObject_TD_9376_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_310983_s, &tv_r_Filter_7_310983_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8399_input: " << tbl_SerializeFromObject_TD_8399_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_585908_s, &tv_r_JOIN_INNER_7_585908_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8570_output: " << tbl_Filter_TD_8570_output.getNumRow() << " " << "tbl_Filter_TD_8198_output: " << tbl_Filter_TD_8198_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_810767_s, &tv_r_Filter_7_810767_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8785_input: " << tbl_SerializeFromObject_TD_8785_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_395224_s, &tv_r_JOIN_INNER_7_395224_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_896_output: " << tbl_Filter_TD_896_output.getNumRow() << " " << "tbl_Filter_TD_8943_output: " << tbl_Filter_TD_8943_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_121008_s, &tv_r_Filter_6_121008_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7548_input: " << tbl_SerializeFromObject_TD_7548_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_691207_s, &tv_r_Filter_6_691207_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7139_input: " << tbl_SerializeFromObject_TD_7139_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_48010_s, &tv_r_JOIN_INNER_6_48010_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7569_output: " << tbl_JOIN_INNER_TD_7569_output.getNumRow() << " " << "tbl_Filter_TD_7326_output: " << tbl_Filter_TD_7326_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_181868_s, &tv_r_JOIN_INNER_6_181868_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7364_output: " << tbl_JOIN_INNER_TD_7364_output.getNumRow() << " " << "tbl_Filter_TD_7489_output: " << tbl_Filter_TD_7489_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_156831_s, &tv_r_Filter_5_156831_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6457_input: " << tbl_SerializeFromObject_TD_6457_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_688190_s, &tv_r_JOIN_INNER_5_688190_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6124_output: " << tbl_Filter_TD_6124_output.getNumRow() << " " << "tbl_Filter_TD_63_output: " << tbl_Filter_TD_63_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_595488_s, &tv_r_Aggregate_5_595488_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6267_output: " << tbl_JOIN_INNER_TD_6267_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_700673_s, &tv_r_Aggregate_5_700673_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6456_output: " << tbl_JOIN_INNER_TD_6456_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_768690_s, &tv_r_JOIN_INNER_4_768690_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5222_output: " << tbl_JOIN_INNER_TD_5222_output.getNumRow() << " " << "tbl_Filter_TD_5529_output: " << tbl_Filter_TD_5529_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_4: " << tvdiff(&tv_r_JOIN_LEFTSEMI_4_865794_s, &tv_r_JOIN_LEFTSEMI_4_865794_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5946_output: " << tbl_Aggregate_TD_5946_output.getNumRow() << " " << "tbl_Aggregate_TD_5224_output: " << tbl_Aggregate_TD_5224_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_613028_s, &tv_r_Aggregate_3_613028_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4934_output: " << tbl_JOIN_INNER_TD_4934_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_313619_s, &tv_r_Aggregate_3_313619_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_4869_output: " << tbl_JOIN_LEFTSEMI_TD_4869_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_2: " << tvdiff(&tv_r_JOIN_LEFTSEMI_2_631682_s, &tv_r_JOIN_LEFTSEMI_2_631682_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3468_output: " << tbl_Aggregate_TD_3468_output.getNumRow() << " " << "tbl_Aggregate_TD_3354_output: " << tbl_Aggregate_TD_3354_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_365443_s, &tv_r_Aggregate_1_365443_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_2911_output: " << tbl_JOIN_LEFTSEMI_TD_2911_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_992650_s, &tv_r_Aggregate_0_992650_e) / 1000.0 << " ms " 
     << "NULL: " << NULL.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.4030298 * 1000 << "ms" << std::endl; 
    return 0; 
}
