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

#include "cfgFunc_q13.hpp" 
#include "q13.hpp" 

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
    std::cout << "NOTE:running query #13\n."; 
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
    Table tbl_Aggregate_TD_0630_output("tbl_Aggregate_TD_0630_output", 6100000, 4, "");
    tbl_Aggregate_TD_0630_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1339_output("tbl_JOIN_INNER_TD_1339_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1339_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2682_output("tbl_JOIN_INNER_TD_2682_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_2682_output.allocateHost();
    Table tbl_Filter_TD_2300_output("tbl_Filter_TD_2300_output", 6100000, 2, "");
    tbl_Filter_TD_2300_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3763_output("tbl_JOIN_INNER_TD_3763_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_3763_output.allocateHost();
    Table tbl_Filter_TD_3520_output("tbl_Filter_TD_3520_output", 6100000, 3, "");
    tbl_Filter_TD_3520_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3466_input;
    tbl_SerializeFromObject_TD_3466_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3466_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_3466_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_3466_input.allocateHost();
    tbl_SerializeFromObject_TD_3466_input.loadHost();
    Table tbl_JOIN_INNER_TD_4323_output("tbl_JOIN_INNER_TD_4323_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4323_output.allocateHost();
    Table tbl_Filter_TD_4717_output("tbl_Filter_TD_4717_output", 6100000, 1, "");
    tbl_Filter_TD_4717_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4486_input;
    tbl_SerializeFromObject_TD_4486_input = Table("customer_demographics", customer_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_4486_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_4486_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4486_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4486_input.allocateHost();
    tbl_SerializeFromObject_TD_4486_input.loadHost();
    Table tbl_JOIN_INNER_TD_5581_output("tbl_JOIN_INNER_TD_5581_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_5581_output.allocateHost();
    Table tbl_Filter_TD_5810_output("tbl_Filter_TD_5810_output", 6100000, 2, "");
    tbl_Filter_TD_5810_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5755_input;
    tbl_SerializeFromObject_TD_5755_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5755_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5755_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_5755_input.allocateHost();
    tbl_SerializeFromObject_TD_5755_input.loadHost();
    Table tbl_Filter_TD_6995_output("tbl_Filter_TD_6995_output", 6100000, 10, "");
    tbl_Filter_TD_6995_output.allocateHost();
    Table tbl_Filter_TD_6416_output("tbl_Filter_TD_6416_output", 6100000, 1, "");
    tbl_Filter_TD_6416_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6254_input;
    tbl_SerializeFromObject_TD_6254_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6254_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_6254_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6254_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6254_input.allocateHost();
    tbl_SerializeFromObject_TD_6254_input.loadHost();
    Table tbl_SerializeFromObject_TD_7957_input;
    tbl_SerializeFromObject_TD_7957_input = Table("store_sales", store_sales_n, 10, in_dir, "orc");
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_7957_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_7957_input.allocateHost();
    tbl_SerializeFromObject_TD_7957_input.loadHost();
    Table tbl_SerializeFromObject_TD_7989_input;
    tbl_SerializeFromObject_TD_7989_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7989_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7989_input.allocateHost();
    tbl_SerializeFromObject_TD_7989_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_938859_s, tv_r_Filter_6_938859_e;
    gettimeofday(&tv_r_Filter_6_938859_s, 0);
    SW_Filter_TD_6416(tbl_SerializeFromObject_TD_7989_input, tbl_Filter_TD_6416_output);
    gettimeofday(&tv_r_Filter_6_938859_e, 0);

    struct timeval tv_r_Filter_6_381185_s, tv_r_Filter_6_381185_e;
    gettimeofday(&tv_r_Filter_6_381185_s, 0);
    SW_Filter_TD_6995(tbl_SerializeFromObject_TD_7957_input, tbl_Filter_TD_6995_output);
    gettimeofday(&tv_r_Filter_6_381185_e, 0);

    struct timeval tv_r_Filter_5_532024_s, tv_r_Filter_5_532024_e;
    gettimeofday(&tv_r_Filter_5_532024_s, 0);
    SW_Filter_TD_5810(tbl_SerializeFromObject_TD_6254_input, tbl_Filter_TD_5810_output);
    gettimeofday(&tv_r_Filter_5_532024_e, 0);

    struct timeval tv_r_JOIN_INNER_5_499423_s, tv_r_JOIN_INNER_5_499423_e;
    gettimeofday(&tv_r_JOIN_INNER_5_499423_s, 0);
    SW_JOIN_INNER_TD_5581(tbl_Filter_TD_6995_output, tbl_Filter_TD_6416_output, tbl_JOIN_INNER_TD_5581_output);
    gettimeofday(&tv_r_JOIN_INNER_5_499423_e, 0);

    struct timeval tv_r_Filter_4_768434_s, tv_r_Filter_4_768434_e;
    gettimeofday(&tv_r_Filter_4_768434_s, 0);
    SW_Filter_TD_4717(tbl_SerializeFromObject_TD_5755_input, tbl_Filter_TD_4717_output);
    gettimeofday(&tv_r_Filter_4_768434_e, 0);

    struct timeval tv_r_JOIN_INNER_4_374021_s, tv_r_JOIN_INNER_4_374021_e;
    gettimeofday(&tv_r_JOIN_INNER_4_374021_s, 0);
    SW_JOIN_INNER_TD_4323(tbl_JOIN_INNER_TD_5581_output, tbl_Filter_TD_5810_output, tbl_JOIN_INNER_TD_4323_output);
    gettimeofday(&tv_r_JOIN_INNER_4_374021_e, 0);

    struct timeval tv_r_Filter_3_425895_s, tv_r_Filter_3_425895_e;
    gettimeofday(&tv_r_Filter_3_425895_s, 0);
    SW_Filter_TD_3520(tbl_SerializeFromObject_TD_4486_input, tbl_Filter_TD_3520_output);
    gettimeofday(&tv_r_Filter_3_425895_e, 0);

    struct timeval tv_r_JOIN_INNER_3_830050_s, tv_r_JOIN_INNER_3_830050_e;
    gettimeofday(&tv_r_JOIN_INNER_3_830050_s, 0);
    SW_JOIN_INNER_TD_3763(tbl_JOIN_INNER_TD_4323_output, tbl_Filter_TD_4717_output, tbl_JOIN_INNER_TD_3763_output);
    gettimeofday(&tv_r_JOIN_INNER_3_830050_e, 0);

    struct timeval tv_r_Filter_2_426151_s, tv_r_Filter_2_426151_e;
    gettimeofday(&tv_r_Filter_2_426151_s, 0);
    SW_Filter_TD_2300(tbl_SerializeFromObject_TD_3466_input, tbl_Filter_TD_2300_output);
    gettimeofday(&tv_r_Filter_2_426151_e, 0);

    struct timeval tv_r_JOIN_INNER_2_7026_s, tv_r_JOIN_INNER_2_7026_e;
    gettimeofday(&tv_r_JOIN_INNER_2_7026_s, 0);
    SW_JOIN_INNER_TD_2682(tbl_JOIN_INNER_TD_3763_output, tbl_Filter_TD_3520_output, tbl_JOIN_INNER_TD_2682_output);
    gettimeofday(&tv_r_JOIN_INNER_2_7026_e, 0);

    struct timeval tv_r_JOIN_INNER_1_876912_s, tv_r_JOIN_INNER_1_876912_e;
    gettimeofday(&tv_r_JOIN_INNER_1_876912_s, 0);
    SW_JOIN_INNER_TD_1339(tbl_JOIN_INNER_TD_2682_output, tbl_Filter_TD_2300_output, tbl_JOIN_INNER_TD_1339_output);
    gettimeofday(&tv_r_JOIN_INNER_1_876912_e, 0);

    struct timeval tv_r_Aggregate_0_931886_s, tv_r_Aggregate_0_931886_e;
    gettimeofday(&tv_r_Aggregate_0_931886_s, 0);
    SW_Aggregate_TD_0630(tbl_JOIN_INNER_TD_1339_output, tbl_Aggregate_TD_0630_output);
    gettimeofday(&tv_r_Aggregate_0_931886_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_938859_s, &tv_r_Filter_6_938859_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7989_input: " << tbl_SerializeFromObject_TD_7989_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_381185_s, &tv_r_Filter_6_381185_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7957_input: " << tbl_SerializeFromObject_TD_7957_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_532024_s, &tv_r_Filter_5_532024_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6254_input: " << tbl_SerializeFromObject_TD_6254_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_499423_s, &tv_r_JOIN_INNER_5_499423_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6995_output: " << tbl_Filter_TD_6995_output.getNumRow() << " " << "tbl_Filter_TD_6416_output: " << tbl_Filter_TD_6416_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_768434_s, &tv_r_Filter_4_768434_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5755_input: " << tbl_SerializeFromObject_TD_5755_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_374021_s, &tv_r_JOIN_INNER_4_374021_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5581_output: " << tbl_JOIN_INNER_TD_5581_output.getNumRow() << " " << "tbl_Filter_TD_5810_output: " << tbl_Filter_TD_5810_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_425895_s, &tv_r_Filter_3_425895_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4486_input: " << tbl_SerializeFromObject_TD_4486_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_830050_s, &tv_r_JOIN_INNER_3_830050_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4323_output: " << tbl_JOIN_INNER_TD_4323_output.getNumRow() << " " << "tbl_Filter_TD_4717_output: " << tbl_Filter_TD_4717_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_426151_s, &tv_r_Filter_2_426151_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3466_input: " << tbl_SerializeFromObject_TD_3466_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_7026_s, &tv_r_JOIN_INNER_2_7026_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3763_output: " << tbl_JOIN_INNER_TD_3763_output.getNumRow() << " " << "tbl_Filter_TD_3520_output: " << tbl_Filter_TD_3520_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_876912_s, &tv_r_JOIN_INNER_1_876912_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2682_output: " << tbl_JOIN_INNER_TD_2682_output.getNumRow() << " " << "tbl_Filter_TD_2300_output: " << tbl_Filter_TD_2300_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_931886_s, &tv_r_Aggregate_0_931886_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1339_output: " << tbl_JOIN_INNER_TD_1339_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.4276671 * 1000 << "ms" << std::endl; 
    return 0; 
}
