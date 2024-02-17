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

#include "cfgFunc_q95.hpp" 
#include "q95.hpp" 

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
    std::cout << "NOTE:running query #95\n."; 
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
    Table tbl_Aggregate_TD_0117_output("tbl_Aggregate_TD_0117_output", 6100000, 3, "");
    tbl_Aggregate_TD_0117_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1526_output("tbl_JOIN_INNER_TD_1526_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1526_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2466_output("tbl_JOIN_INNER_TD_2466_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_2466_output.allocateHost();
    Table tbl_Filter_TD_2226_output("tbl_Filter_TD_2226_output", 6100000, 1, "");
    tbl_Filter_TD_2226_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3617_output("tbl_JOIN_INNER_TD_3617_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_3617_output.allocateHost();
    Table tbl_Filter_TD_3525_output("tbl_Filter_TD_3525_output", 6100000, 1, "");
    tbl_Filter_TD_3525_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3750_input;
    tbl_SerializeFromObject_TD_3750_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3750_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_3750_input.addCol("web_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3750_input.allocateHost();
    tbl_SerializeFromObject_TD_3750_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_4592_output("tbl_JOIN_LEFTSEMI_TD_4592_output", 6100000, 6, "");
    tbl_JOIN_LEFTSEMI_TD_4592_output.allocateHost();
    Table tbl_Filter_TD_4520_output("tbl_Filter_TD_4520_output", 6100000, 1, "");
    tbl_Filter_TD_4520_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4784_input;
    tbl_SerializeFromObject_TD_4784_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4784_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_4784_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4784_input.allocateHost();
    tbl_SerializeFromObject_TD_4784_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_5349_output("tbl_JOIN_LEFTSEMI_TD_5349_output", 6100000, 6, "");
    tbl_JOIN_LEFTSEMI_TD_5349_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5320_output("tbl_JOIN_INNER_TD_5320_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5320_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5410_input;
    tbl_SerializeFromObject_TD_5410_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5410_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5410_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_5410_input.allocateHost();
    tbl_SerializeFromObject_TD_5410_input.loadHost();
    Table tbl_Filter_TD_6585_output("tbl_Filter_TD_6585_output", 6100000, 6, "");
    tbl_Filter_TD_6585_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6185_output("tbl_JOIN_INNER_TD_6185_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_6185_output.allocateHost();
    Table tbl_Filter_TD_6499_output("tbl_Filter_TD_6499_output", 6100000, 1, "");
    tbl_Filter_TD_6499_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6941_output("tbl_JOIN_INNER_TD_6941_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_6941_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7311_input;
    tbl_SerializeFromObject_TD_7311_input = Table("web_sales", web_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_7311_input.addCol("ws_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_7311_input.addCol("ws_ship_addr_sk", 4);
    tbl_SerializeFromObject_TD_7311_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_7311_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_7311_input.addCol("ws_ext_ship_cost", 4);
    tbl_SerializeFromObject_TD_7311_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_7311_input.allocateHost();
    tbl_SerializeFromObject_TD_7311_input.loadHost();
    Table tbl_Filter_TD_7445_output("tbl_Filter_TD_7445_output", 6100000, 2, "");
    tbl_Filter_TD_7445_output.allocateHost();
    Table tbl_Filter_TD_7914_output("tbl_Filter_TD_7914_output", 6100000, 2, "");
    tbl_Filter_TD_7914_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7100_input;
    tbl_SerializeFromObject_TD_7100_input = Table("web_returns", web_returns_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7100_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_7100_input.allocateHost();
    tbl_SerializeFromObject_TD_7100_input.loadHost();
    Table tbl_Filter_TD_7133_output("tbl_Filter_TD_7133_output", 6100000, 2, "");
    tbl_Filter_TD_7133_output.allocateHost();
    Table tbl_Filter_TD_7837_output("tbl_Filter_TD_7837_output", 6100000, 2, "");
    tbl_Filter_TD_7837_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8621_input;
    tbl_SerializeFromObject_TD_8621_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8621_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8621_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_8621_input.allocateHost();
    tbl_SerializeFromObject_TD_8621_input.loadHost();
    Table tbl_SerializeFromObject_TD_8301_input;
    tbl_SerializeFromObject_TD_8301_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8301_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8301_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_8301_input.allocateHost();
    tbl_SerializeFromObject_TD_8301_input.loadHost();
    Table tbl_SerializeFromObject_TD_8229_input;
    tbl_SerializeFromObject_TD_8229_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8229_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8229_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_8229_input.allocateHost();
    tbl_SerializeFromObject_TD_8229_input.loadHost();
    Table tbl_SerializeFromObject_TD_8723_input;
    tbl_SerializeFromObject_TD_8723_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8723_input.addCol("ws_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8723_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_8723_input.allocateHost();
    tbl_SerializeFromObject_TD_8723_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_402664_s, tv_r_Filter_7_402664_e;
    gettimeofday(&tv_r_Filter_7_402664_s, 0);
    SW_Filter_TD_7837(tbl_SerializeFromObject_TD_8723_input, tbl_Filter_TD_7837_output);
    gettimeofday(&tv_r_Filter_7_402664_e, 0);

    struct timeval tv_r_Filter_7_631289_s, tv_r_Filter_7_631289_e;
    gettimeofday(&tv_r_Filter_7_631289_s, 0);
    SW_Filter_TD_7133(tbl_SerializeFromObject_TD_8229_input, tbl_Filter_TD_7133_output);
    gettimeofday(&tv_r_Filter_7_631289_e, 0);

    struct timeval tv_r_Filter_7_121087_s, tv_r_Filter_7_121087_e;
    gettimeofday(&tv_r_Filter_7_121087_s, 0);
    SW_Filter_TD_7914(tbl_SerializeFromObject_TD_8301_input, tbl_Filter_TD_7914_output);
    gettimeofday(&tv_r_Filter_7_121087_e, 0);

    struct timeval tv_r_Filter_7_398039_s, tv_r_Filter_7_398039_e;
    gettimeofday(&tv_r_Filter_7_398039_s, 0);
    SW_Filter_TD_7445(tbl_SerializeFromObject_TD_8621_input, tbl_Filter_TD_7445_output);
    gettimeofday(&tv_r_Filter_7_398039_e, 0);

    struct timeval tv_r_JOIN_INNER_6_560954_s, tv_r_JOIN_INNER_6_560954_e;
    gettimeofday(&tv_r_JOIN_INNER_6_560954_s, 0);
    SW_JOIN_INNER_TD_6941(tbl_Filter_TD_7133_output, tbl_Filter_TD_7837_output, tbl_JOIN_INNER_TD_6941_output);
    gettimeofday(&tv_r_JOIN_INNER_6_560954_e, 0);

    struct timeval tv_r_Filter_6_839624_s, tv_r_Filter_6_839624_e;
    gettimeofday(&tv_r_Filter_6_839624_s, 0);
    SW_Filter_TD_6499(tbl_SerializeFromObject_TD_7100_input, tbl_Filter_TD_6499_output);
    gettimeofday(&tv_r_Filter_6_839624_e, 0);

    struct timeval tv_r_JOIN_INNER_6_776343_s, tv_r_JOIN_INNER_6_776343_e;
    gettimeofday(&tv_r_JOIN_INNER_6_776343_s, 0);
    SW_JOIN_INNER_TD_6185(tbl_Filter_TD_7445_output, tbl_Filter_TD_7914_output, tbl_JOIN_INNER_TD_6185_output);
    gettimeofday(&tv_r_JOIN_INNER_6_776343_e, 0);

    struct timeval tv_r_Filter_6_741718_s, tv_r_Filter_6_741718_e;
    gettimeofday(&tv_r_Filter_6_741718_s, 0);
    SW_Filter_TD_6585(tbl_SerializeFromObject_TD_7311_input, tbl_Filter_TD_6585_output);
    gettimeofday(&tv_r_Filter_6_741718_e, 0);

    struct timeval tv_r_JOIN_INNER_5_810844_s, tv_r_JOIN_INNER_5_810844_e;
    gettimeofday(&tv_r_JOIN_INNER_5_810844_s, 0);
    SW_JOIN_INNER_TD_5320(tbl_Filter_TD_6499_output, tbl_JOIN_INNER_TD_6941_output, tbl_JOIN_INNER_TD_5320_output);
    gettimeofday(&tv_r_JOIN_INNER_5_810844_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_5_892480_s, tv_r_JOIN_LEFTSEMI_5_892480_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_892480_s, 0);
    SW_JOIN_LEFTSEMI_TD_5349(tbl_Filter_TD_6585_output, tbl_JOIN_INNER_TD_6185_output, tbl_JOIN_LEFTSEMI_TD_5349_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_892480_e, 0);

    struct timeval tv_r_Filter_4_833472_s, tv_r_Filter_4_833472_e;
    gettimeofday(&tv_r_Filter_4_833472_s, 0);
    SW_Filter_TD_4520(tbl_SerializeFromObject_TD_5410_input, tbl_Filter_TD_4520_output);
    gettimeofday(&tv_r_Filter_4_833472_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_4_506728_s, tv_r_JOIN_LEFTSEMI_4_506728_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_506728_s, 0);
    SW_JOIN_LEFTSEMI_TD_4592(tbl_JOIN_LEFTSEMI_TD_5349_output, tbl_JOIN_INNER_TD_5320_output, tbl_JOIN_LEFTSEMI_TD_4592_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_506728_e, 0);

    struct timeval tv_r_Filter_3_313491_s, tv_r_Filter_3_313491_e;
    gettimeofday(&tv_r_Filter_3_313491_s, 0);
    SW_Filter_TD_3525(tbl_SerializeFromObject_TD_4784_input, tbl_Filter_TD_3525_output);
    gettimeofday(&tv_r_Filter_3_313491_e, 0);

    struct timeval tv_r_JOIN_INNER_3_368316_s, tv_r_JOIN_INNER_3_368316_e;
    gettimeofday(&tv_r_JOIN_INNER_3_368316_s, 0);
    SW_JOIN_INNER_TD_3617(tbl_JOIN_LEFTSEMI_TD_4592_output, tbl_Filter_TD_4520_output, tbl_JOIN_INNER_TD_3617_output);
    gettimeofday(&tv_r_JOIN_INNER_3_368316_e, 0);

    struct timeval tv_r_Filter_2_507686_s, tv_r_Filter_2_507686_e;
    gettimeofday(&tv_r_Filter_2_507686_s, 0);
    SW_Filter_TD_2226(tbl_SerializeFromObject_TD_3750_input, tbl_Filter_TD_2226_output);
    gettimeofday(&tv_r_Filter_2_507686_e, 0);

    struct timeval tv_r_JOIN_INNER_2_305424_s, tv_r_JOIN_INNER_2_305424_e;
    gettimeofday(&tv_r_JOIN_INNER_2_305424_s, 0);
    SW_JOIN_INNER_TD_2466(tbl_JOIN_INNER_TD_3617_output, tbl_Filter_TD_3525_output, tbl_JOIN_INNER_TD_2466_output);
    gettimeofday(&tv_r_JOIN_INNER_2_305424_e, 0);

    struct timeval tv_r_JOIN_INNER_1_273374_s, tv_r_JOIN_INNER_1_273374_e;
    gettimeofday(&tv_r_JOIN_INNER_1_273374_s, 0);
    SW_JOIN_INNER_TD_1526(tbl_JOIN_INNER_TD_2466_output, tbl_Filter_TD_2226_output, tbl_JOIN_INNER_TD_1526_output);
    gettimeofday(&tv_r_JOIN_INNER_1_273374_e, 0);

    struct timeval tv_r_Aggregate_0_535734_s, tv_r_Aggregate_0_535734_e;
    gettimeofday(&tv_r_Aggregate_0_535734_s, 0);
    SW_Aggregate_TD_0117(tbl_JOIN_INNER_TD_1526_output, tbl_Aggregate_TD_0117_output);
    gettimeofday(&tv_r_Aggregate_0_535734_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_402664_s, &tv_r_Filter_7_402664_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8723_input: " << tbl_SerializeFromObject_TD_8723_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_631289_s, &tv_r_Filter_7_631289_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8229_input: " << tbl_SerializeFromObject_TD_8229_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_121087_s, &tv_r_Filter_7_121087_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8301_input: " << tbl_SerializeFromObject_TD_8301_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_398039_s, &tv_r_Filter_7_398039_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8621_input: " << tbl_SerializeFromObject_TD_8621_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_560954_s, &tv_r_JOIN_INNER_6_560954_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7133_output: " << tbl_Filter_TD_7133_output.getNumRow() << " " << "tbl_Filter_TD_7837_output: " << tbl_Filter_TD_7837_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_839624_s, &tv_r_Filter_6_839624_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7100_input: " << tbl_SerializeFromObject_TD_7100_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_776343_s, &tv_r_JOIN_INNER_6_776343_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7445_output: " << tbl_Filter_TD_7445_output.getNumRow() << " " << "tbl_Filter_TD_7914_output: " << tbl_Filter_TD_7914_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_741718_s, &tv_r_Filter_6_741718_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7311_input: " << tbl_SerializeFromObject_TD_7311_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_810844_s, &tv_r_JOIN_INNER_5_810844_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6499_output: " << tbl_Filter_TD_6499_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_6941_output: " << tbl_JOIN_INNER_TD_6941_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_5: " << tvdiff(&tv_r_JOIN_LEFTSEMI_5_892480_s, &tv_r_JOIN_LEFTSEMI_5_892480_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6585_output: " << tbl_Filter_TD_6585_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_6185_output: " << tbl_JOIN_INNER_TD_6185_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_833472_s, &tv_r_Filter_4_833472_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5410_input: " << tbl_SerializeFromObject_TD_5410_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_4: " << tvdiff(&tv_r_JOIN_LEFTSEMI_4_506728_s, &tv_r_JOIN_LEFTSEMI_4_506728_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_5349_output: " << tbl_JOIN_LEFTSEMI_TD_5349_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_5320_output: " << tbl_JOIN_INNER_TD_5320_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_313491_s, &tv_r_Filter_3_313491_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4784_input: " << tbl_SerializeFromObject_TD_4784_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_368316_s, &tv_r_JOIN_INNER_3_368316_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_4592_output: " << tbl_JOIN_LEFTSEMI_TD_4592_output.getNumRow() << " " << "tbl_Filter_TD_4520_output: " << tbl_Filter_TD_4520_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_507686_s, &tv_r_Filter_2_507686_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3750_input: " << tbl_SerializeFromObject_TD_3750_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_305424_s, &tv_r_JOIN_INNER_2_305424_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3617_output: " << tbl_JOIN_INNER_TD_3617_output.getNumRow() << " " << "tbl_Filter_TD_3525_output: " << tbl_Filter_TD_3525_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_273374_s, &tv_r_JOIN_INNER_1_273374_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2466_output: " << tbl_JOIN_INNER_TD_2466_output.getNumRow() << " " << "tbl_Filter_TD_2226_output: " << tbl_Filter_TD_2226_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_535734_s, &tv_r_Aggregate_0_535734_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1526_output: " << tbl_JOIN_INNER_TD_1526_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 8.289259 * 1000 << "ms" << std::endl; 
    return 0; 
}
