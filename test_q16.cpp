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

#include "cfgFunc_q16.hpp" 
#include "q16.hpp" 

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
    std::cout << "NOTE:running query #16\n."; 
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
    Table tbl_Aggregate_TD_0523_output("tbl_Aggregate_TD_0523_output", 6100000, 3, "");
    tbl_Aggregate_TD_0523_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1645_output("tbl_JOIN_INNER_TD_1645_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1645_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2729_output("tbl_JOIN_INNER_TD_2729_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_2729_output.allocateHost();
    Table tbl_Filter_TD_2381_output("tbl_Filter_TD_2381_output", 6100000, 1, "");
    tbl_Filter_TD_2381_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3913_output("tbl_JOIN_INNER_TD_3913_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_3913_output.allocateHost();
    Table tbl_Filter_TD_3980_output("tbl_Filter_TD_3980_output", 6100000, 1, "");
    tbl_Filter_TD_3980_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3206_input;
    tbl_SerializeFromObject_TD_3206_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3206_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_3206_input.addCol("cc_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3206_input.allocateHost();
    tbl_SerializeFromObject_TD_3206_input.loadHost();
    Table tbl_JOIN_LEFTANTI_TD_4732_output("tbl_JOIN_LEFTANTI_TD_4732_output", 6100000, 6, "");
    tbl_JOIN_LEFTANTI_TD_4732_output.allocateHost();
    Table tbl_Filter_TD_40_output("tbl_Filter_TD_40_output", 6100000, 1, "");
    tbl_Filter_TD_40_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4392_input;
    tbl_SerializeFromObject_TD_4392_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4392_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_4392_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4392_input.allocateHost();
    tbl_SerializeFromObject_TD_4392_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_5382_output("tbl_JOIN_LEFTSEMI_TD_5382_output", 6100000, 6, "");
    tbl_JOIN_LEFTSEMI_TD_5382_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5232_input;
    tbl_SerializeFromObject_TD_5232_input = Table("catalog_returns", catalog_returns_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_5232_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_5232_input.allocateHost();
    tbl_SerializeFromObject_TD_5232_input.loadHost();
    Table tbl_SerializeFromObject_TD_5644_input;
    tbl_SerializeFromObject_TD_5644_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5644_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5644_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_5644_input.allocateHost();
    tbl_SerializeFromObject_TD_5644_input.loadHost();
    Table tbl_Filter_TD_6108_output("tbl_Filter_TD_6108_output", 6100000, 7, "");
    tbl_Filter_TD_6108_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6224_input;
    tbl_SerializeFromObject_TD_6224_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6224_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_6224_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_6224_input.allocateHost();
    tbl_SerializeFromObject_TD_6224_input.loadHost();
    Table tbl_SerializeFromObject_TD_7133_input;
    tbl_SerializeFromObject_TD_7133_input = Table("catalog_sales", catalog_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_7133_input.addCol("cs_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_7133_input.addCol("cs_ship_addr_sk", 4);
    tbl_SerializeFromObject_TD_7133_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_7133_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_7133_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_7133_input.addCol("cs_ext_ship_cost", 4);
    tbl_SerializeFromObject_TD_7133_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_7133_input.allocateHost();
    tbl_SerializeFromObject_TD_7133_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_923572_s, tv_r_Filter_6_923572_e;
    gettimeofday(&tv_r_Filter_6_923572_s, 0);
    SW_Filter_TD_6108(tbl_SerializeFromObject_TD_7133_input, tbl_Filter_TD_6108_output);
    gettimeofday(&tv_r_Filter_6_923572_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_5_583477_s, tv_r_JOIN_LEFTSEMI_5_583477_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_583477_s, 0);
    SW_JOIN_LEFTSEMI_TD_5382(tbl_Filter_TD_6108_output, tbl_SerializeFromObject_TD_6224_input, tbl_JOIN_LEFTSEMI_TD_5382_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_583477_e, 0);

    struct timeval tv_r_Filter_4_310200_s, tv_r_Filter_4_310200_e;
    gettimeofday(&tv_r_Filter_4_310200_s, 0);
    SW_Filter_TD_40(tbl_SerializeFromObject_TD_5644_input, tbl_Filter_TD_40_output);
    gettimeofday(&tv_r_Filter_4_310200_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_4_699838_s, tv_r_JOIN_LEFTANTI_4_699838_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_699838_s, 0);
    SW_JOIN_LEFTANTI_TD_4732(tbl_JOIN_LEFTSEMI_TD_5382_output, tbl_SerializeFromObject_TD_5232_input, tbl_JOIN_LEFTANTI_TD_4732_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_699838_e, 0);

    struct timeval tv_r_Filter_3_162008_s, tv_r_Filter_3_162008_e;
    gettimeofday(&tv_r_Filter_3_162008_s, 0);
    SW_Filter_TD_3980(tbl_SerializeFromObject_TD_4392_input, tbl_Filter_TD_3980_output);
    gettimeofday(&tv_r_Filter_3_162008_e, 0);

    struct timeval tv_r_JOIN_INNER_3_870391_s, tv_r_JOIN_INNER_3_870391_e;
    gettimeofday(&tv_r_JOIN_INNER_3_870391_s, 0);
    SW_JOIN_INNER_TD_3913(tbl_JOIN_LEFTANTI_TD_4732_output, tbl_Filter_TD_40_output, tbl_JOIN_INNER_TD_3913_output);
    gettimeofday(&tv_r_JOIN_INNER_3_870391_e, 0);

    struct timeval tv_r_Filter_2_680580_s, tv_r_Filter_2_680580_e;
    gettimeofday(&tv_r_Filter_2_680580_s, 0);
    SW_Filter_TD_2381(tbl_SerializeFromObject_TD_3206_input, tbl_Filter_TD_2381_output);
    gettimeofday(&tv_r_Filter_2_680580_e, 0);

    struct timeval tv_r_JOIN_INNER_2_572880_s, tv_r_JOIN_INNER_2_572880_e;
    gettimeofday(&tv_r_JOIN_INNER_2_572880_s, 0);
    SW_JOIN_INNER_TD_2729(tbl_JOIN_INNER_TD_3913_output, tbl_Filter_TD_3980_output, tbl_JOIN_INNER_TD_2729_output);
    gettimeofday(&tv_r_JOIN_INNER_2_572880_e, 0);

    struct timeval tv_r_JOIN_INNER_1_359043_s, tv_r_JOIN_INNER_1_359043_e;
    gettimeofday(&tv_r_JOIN_INNER_1_359043_s, 0);
    SW_JOIN_INNER_TD_1645(tbl_JOIN_INNER_TD_2729_output, tbl_Filter_TD_2381_output, tbl_JOIN_INNER_TD_1645_output);
    gettimeofday(&tv_r_JOIN_INNER_1_359043_e, 0);

    struct timeval tv_r_Aggregate_0_842182_s, tv_r_Aggregate_0_842182_e;
    gettimeofday(&tv_r_Aggregate_0_842182_s, 0);
    SW_Aggregate_TD_0523(tbl_JOIN_INNER_TD_1645_output, tbl_Aggregate_TD_0523_output);
    gettimeofday(&tv_r_Aggregate_0_842182_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_923572_s, &tv_r_Filter_6_923572_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7133_input: " << tbl_SerializeFromObject_TD_7133_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_5: " << tvdiff(&tv_r_JOIN_LEFTSEMI_5_583477_s, &tv_r_JOIN_LEFTSEMI_5_583477_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6108_output: " << tbl_Filter_TD_6108_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_6224_input: " << tbl_SerializeFromObject_TD_6224_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_310200_s, &tv_r_Filter_4_310200_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5644_input: " << tbl_SerializeFromObject_TD_5644_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_4: " << tvdiff(&tv_r_JOIN_LEFTANTI_4_699838_s, &tv_r_JOIN_LEFTANTI_4_699838_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_5382_output: " << tbl_JOIN_LEFTSEMI_TD_5382_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_5232_input: " << tbl_SerializeFromObject_TD_5232_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_162008_s, &tv_r_Filter_3_162008_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4392_input: " << tbl_SerializeFromObject_TD_4392_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_870391_s, &tv_r_JOIN_INNER_3_870391_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_4732_output: " << tbl_JOIN_LEFTANTI_TD_4732_output.getNumRow() << " " << "tbl_Filter_TD_40_output: " << tbl_Filter_TD_40_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_680580_s, &tv_r_Filter_2_680580_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3206_input: " << tbl_SerializeFromObject_TD_3206_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_572880_s, &tv_r_JOIN_INNER_2_572880_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3913_output: " << tbl_JOIN_INNER_TD_3913_output.getNumRow() << " " << "tbl_Filter_TD_3980_output: " << tbl_Filter_TD_3980_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_359043_s, &tv_r_JOIN_INNER_1_359043_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2729_output: " << tbl_JOIN_INNER_TD_2729_output.getNumRow() << " " << "tbl_Filter_TD_2381_output: " << tbl_Filter_TD_2381_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_842182_s, &tv_r_Aggregate_0_842182_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1645_output: " << tbl_JOIN_INNER_TD_1645_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.2411338 * 1000 << "ms" << std::endl; 
    return 0; 
}
