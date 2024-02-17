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

#include "cfgFunc_q48.hpp" 
#include "q48.hpp" 

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
    std::cout << "NOTE:running query #48\n."; 
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
    Table tbl_Aggregate_TD_0740_output("tbl_Aggregate_TD_0740_output", 6100000, 1, "");
    tbl_Aggregate_TD_0740_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1792_output("tbl_JOIN_INNER_TD_1792_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_1792_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2853_output("tbl_JOIN_INNER_TD_2853_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_2853_output.allocateHost();
    Table tbl_Filter_TD_2477_output("tbl_Filter_TD_2477_output", 6100000, 1, "");
    tbl_Filter_TD_2477_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3636_output("tbl_JOIN_INNER_TD_3636_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3636_output.allocateHost();
    Table tbl_Filter_TD_3432_output("tbl_Filter_TD_3432_output", 6100000, 2, "");
    tbl_Filter_TD_3432_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3398_input;
    tbl_SerializeFromObject_TD_3398_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3398_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_3398_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_3398_input.allocateHost();
    tbl_SerializeFromObject_TD_3398_input.loadHost();
    Table tbl_JOIN_INNER_TD_465_output("tbl_JOIN_INNER_TD_465_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_465_output.allocateHost();
    Table tbl_Filter_TD_4213_output("tbl_Filter_TD_4213_output", 6100000, 3, "");
    tbl_Filter_TD_4213_output.allocateHost();
    Table tbl_SerializeFromObject_TD_493_input;
    tbl_SerializeFromObject_TD_493_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_493_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_493_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_493_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_493_input.allocateHost();
    tbl_SerializeFromObject_TD_493_input.loadHost();
    Table tbl_Filter_TD_5271_output("tbl_Filter_TD_5271_output", 6100000, 7, "");
    tbl_Filter_TD_5271_output.allocateHost();
    Table tbl_Filter_TD_557_output("tbl_Filter_TD_557_output", 6100000, 1, "");
    tbl_Filter_TD_557_output.allocateHost();
    Table tbl_SerializeFromObject_TD_534_input;
    tbl_SerializeFromObject_TD_534_input = Table("customer_demographics", customer_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_534_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_534_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_534_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_534_input.allocateHost();
    tbl_SerializeFromObject_TD_534_input.loadHost();
    Table tbl_SerializeFromObject_TD_6205_input;
    tbl_SerializeFromObject_TD_6205_input = Table("store_sales", store_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_6205_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_6205_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_6205_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_6205_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_6205_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_6205_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_6205_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_6205_input.allocateHost();
    tbl_SerializeFromObject_TD_6205_input.loadHost();
    Table tbl_SerializeFromObject_TD_6769_input;
    tbl_SerializeFromObject_TD_6769_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_6769_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_6769_input.allocateHost();
    tbl_SerializeFromObject_TD_6769_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_269677_s, tv_r_Filter_5_269677_e;
    gettimeofday(&tv_r_Filter_5_269677_s, 0);
    SW_Filter_TD_557(tbl_SerializeFromObject_TD_6769_input, tbl_Filter_TD_557_output);
    gettimeofday(&tv_r_Filter_5_269677_e, 0);

    struct timeval tv_r_Filter_5_593892_s, tv_r_Filter_5_593892_e;
    gettimeofday(&tv_r_Filter_5_593892_s, 0);
    SW_Filter_TD_5271(tbl_SerializeFromObject_TD_6205_input, tbl_Filter_TD_5271_output);
    gettimeofday(&tv_r_Filter_5_593892_e, 0);

    struct timeval tv_r_Filter_4_675483_s, tv_r_Filter_4_675483_e;
    gettimeofday(&tv_r_Filter_4_675483_s, 0);
    SW_Filter_TD_4213(tbl_SerializeFromObject_TD_534_input, tbl_Filter_TD_4213_output);
    gettimeofday(&tv_r_Filter_4_675483_e, 0);

    struct timeval tv_r_JOIN_INNER_4_535662_s, tv_r_JOIN_INNER_4_535662_e;
    gettimeofday(&tv_r_JOIN_INNER_4_535662_s, 0);
    SW_JOIN_INNER_TD_465(tbl_Filter_TD_5271_output, tbl_Filter_TD_557_output, tbl_JOIN_INNER_TD_465_output);
    gettimeofday(&tv_r_JOIN_INNER_4_535662_e, 0);

    struct timeval tv_r_Filter_3_108760_s, tv_r_Filter_3_108760_e;
    gettimeofday(&tv_r_Filter_3_108760_s, 0);
    SW_Filter_TD_3432(tbl_SerializeFromObject_TD_493_input, tbl_Filter_TD_3432_output);
    gettimeofday(&tv_r_Filter_3_108760_e, 0);

    struct timeval tv_r_JOIN_INNER_3_772168_s, tv_r_JOIN_INNER_3_772168_e;
    gettimeofday(&tv_r_JOIN_INNER_3_772168_s, 0);
    SW_JOIN_INNER_TD_3636(tbl_JOIN_INNER_TD_465_output, tbl_Filter_TD_4213_output, tbl_JOIN_INNER_TD_3636_output);
    gettimeofday(&tv_r_JOIN_INNER_3_772168_e, 0);

    struct timeval tv_r_Filter_2_492712_s, tv_r_Filter_2_492712_e;
    gettimeofday(&tv_r_Filter_2_492712_s, 0);
    SW_Filter_TD_2477(tbl_SerializeFromObject_TD_3398_input, tbl_Filter_TD_2477_output);
    gettimeofday(&tv_r_Filter_2_492712_e, 0);

    struct timeval tv_r_JOIN_INNER_2_271432_s, tv_r_JOIN_INNER_2_271432_e;
    gettimeofday(&tv_r_JOIN_INNER_2_271432_s, 0);
    SW_JOIN_INNER_TD_2853(tbl_JOIN_INNER_TD_3636_output, tbl_Filter_TD_3432_output, tbl_JOIN_INNER_TD_2853_output);
    gettimeofday(&tv_r_JOIN_INNER_2_271432_e, 0);

    struct timeval tv_r_JOIN_INNER_1_46640_s, tv_r_JOIN_INNER_1_46640_e;
    gettimeofday(&tv_r_JOIN_INNER_1_46640_s, 0);
    SW_JOIN_INNER_TD_1792(tbl_JOIN_INNER_TD_2853_output, tbl_Filter_TD_2477_output, tbl_JOIN_INNER_TD_1792_output);
    gettimeofday(&tv_r_JOIN_INNER_1_46640_e, 0);

    struct timeval tv_r_Aggregate_0_592647_s, tv_r_Aggregate_0_592647_e;
    gettimeofday(&tv_r_Aggregate_0_592647_s, 0);
    SW_Aggregate_TD_0740(tbl_JOIN_INNER_TD_1792_output, tbl_Aggregate_TD_0740_output);
    gettimeofday(&tv_r_Aggregate_0_592647_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_269677_s, &tv_r_Filter_5_269677_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6769_input: " << tbl_SerializeFromObject_TD_6769_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_593892_s, &tv_r_Filter_5_593892_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6205_input: " << tbl_SerializeFromObject_TD_6205_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_675483_s, &tv_r_Filter_4_675483_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_534_input: " << tbl_SerializeFromObject_TD_534_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_535662_s, &tv_r_JOIN_INNER_4_535662_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5271_output: " << tbl_Filter_TD_5271_output.getNumRow() << " " << "tbl_Filter_TD_557_output: " << tbl_Filter_TD_557_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_108760_s, &tv_r_Filter_3_108760_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_493_input: " << tbl_SerializeFromObject_TD_493_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_772168_s, &tv_r_JOIN_INNER_3_772168_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_465_output: " << tbl_JOIN_INNER_TD_465_output.getNumRow() << " " << "tbl_Filter_TD_4213_output: " << tbl_Filter_TD_4213_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_492712_s, &tv_r_Filter_2_492712_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3398_input: " << tbl_SerializeFromObject_TD_3398_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_271432_s, &tv_r_JOIN_INNER_2_271432_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3636_output: " << tbl_JOIN_INNER_TD_3636_output.getNumRow() << " " << "tbl_Filter_TD_3432_output: " << tbl_Filter_TD_3432_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_46640_s, &tv_r_JOIN_INNER_1_46640_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2853_output: " << tbl_JOIN_INNER_TD_2853_output.getNumRow() << " " << "tbl_Filter_TD_2477_output: " << tbl_Filter_TD_2477_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_592647_s, &tv_r_Aggregate_0_592647_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1792_output: " << tbl_JOIN_INNER_TD_1792_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.6974684 * 1000 << "ms" << std::endl; 
    return 0; 
}
