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

#include "cfgFunc_q35.hpp" 
#include "q35.hpp" 

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
    std::cout << "NOTE:running query #35\n."; 
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
    Table tbl_GlobalLimit_TD_0250_output("tbl_GlobalLimit_TD_0250_output", 6100000, 18, "");
    tbl_GlobalLimit_TD_0250_output.allocateHost();
    Table tbl_LocalLimit_TD_1294_output("tbl_LocalLimit_TD_1294_output", 6100000, 18, "");
    tbl_LocalLimit_TD_1294_output.allocateHost();
    Table tbl_Sort_TD_2320_output("tbl_Sort_TD_2320_output", 6100000, 18, "");
    tbl_Sort_TD_2320_output.allocateHost();
    Table tbl_Aggregate_TD_3453_output("tbl_Aggregate_TD_3453_output", 6100000, 18, "");
    tbl_Aggregate_TD_3453_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4164_output("tbl_JOIN_INNER_TD_4164_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4164_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5184_output("tbl_JOIN_INNER_TD_5184_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5184_output.allocateHost();
    Table tbl_Filter_TD_5659_output("tbl_Filter_TD_5659_output", 6100000, 6, "");
    tbl_Filter_TD_5659_output.allocateHost();
    Table tbl_Filter_TD_6211_output("tbl_Filter_TD_6211_output", 6100000, 2, "");
    tbl_Filter_TD_6211_output.allocateHost();
    Table tbl_Filter_TD_6808_output("tbl_Filter_TD_6808_output", 6100000, 2, "");
    tbl_Filter_TD_6808_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6352_input;
    tbl_SerializeFromObject_TD_6352_input = Table("customer_demographics", customer_demographics_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_6352_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_6352_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6352_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6352_input.addCol("cd_dep_count", 4);
    tbl_SerializeFromObject_TD_6352_input.addCol("cd_dep_employed_count", 4);
    tbl_SerializeFromObject_TD_6352_input.addCol("cd_dep_college_count", 4);
    tbl_SerializeFromObject_TD_6352_input.allocateHost();
    tbl_SerializeFromObject_TD_6352_input.loadHost();
    Table tbl_JOIN_EXISTENCEJOIN(EXISTS#7256)_TD_7604_output("tbl_JOIN_EXISTENCEJOIN(EXISTS#7256)_TD_7604_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOIN(EXISTS#7256)_TD_7604_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7348_input;
    tbl_SerializeFromObject_TD_7348_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7348_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_7348_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7348_input.allocateHost();
    tbl_SerializeFromObject_TD_7348_input.loadHost();
    Table tbl_JOIN_EXISTENCEJOIN(EXISTS#7255)_TD_872_output("tbl_JOIN_EXISTENCEJOIN(EXISTS#7255)_TD_872_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOIN(EXISTS#7255)_TD_872_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8500_output("tbl_JOIN_INNER_TD_8500_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_8500_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_9571_output("tbl_JOIN_LEFTSEMI_TD_9571_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_9571_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9410_output("tbl_JOIN_INNER_TD_9410_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9410_output.allocateHost();
    Table tbl_Filter_TD_9547_output("tbl_Filter_TD_9547_output", 6100000, 2, "");
    tbl_Filter_TD_9547_output.allocateHost();
    Table tbl_Filter_TD_967_output("tbl_Filter_TD_967_output", 6100000, 1, "");
    tbl_Filter_TD_967_output.allocateHost();
    Table tbl_Filter_TD_10874_output("tbl_Filter_TD_10874_output", 6100000, 3, "");
    tbl_Filter_TD_10874_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10134_output("tbl_JOIN_INNER_TD_10134_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_10134_output.allocateHost();
    Table tbl_Filter_TD_10632_output("tbl_Filter_TD_10632_output", 6100000, 2, "");
    tbl_Filter_TD_10632_output.allocateHost();
    Table tbl_Filter_TD_10143_output("tbl_Filter_TD_10143_output", 6100000, 1, "");
    tbl_Filter_TD_10143_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10677_input;
    tbl_SerializeFromObject_TD_10677_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10677_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10677_input.addCol("cs_ship_customer_sk", 4);
    tbl_SerializeFromObject_TD_10677_input.allocateHost();
    tbl_SerializeFromObject_TD_10677_input.loadHost();
    Table tbl_SerializeFromObject_TD_10628_input;
    tbl_SerializeFromObject_TD_10628_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10628_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10628_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10628_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_10628_input.allocateHost();
    tbl_SerializeFromObject_TD_10628_input.loadHost();
    Table tbl_SerializeFromObject_TD_11847_input;
    tbl_SerializeFromObject_TD_11847_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11847_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11847_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_11847_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_11847_input.allocateHost();
    tbl_SerializeFromObject_TD_11847_input.loadHost();
    Table tbl_Filter_TD_1167_output("tbl_Filter_TD_1167_output", 6100000, 2, "");
    tbl_Filter_TD_1167_output.allocateHost();
    Table tbl_Filter_TD_11905_output("tbl_Filter_TD_11905_output", 6100000, 1, "");
    tbl_Filter_TD_11905_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11635_input;
    tbl_SerializeFromObject_TD_11635_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11635_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11635_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11635_input.allocateHost();
    tbl_SerializeFromObject_TD_11635_input.loadHost();
    Table tbl_SerializeFromObject_TD_11220_input;
    tbl_SerializeFromObject_TD_11220_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11220_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11220_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11220_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_11220_input.allocateHost();
    tbl_SerializeFromObject_TD_11220_input.loadHost();
    Table tbl_SerializeFromObject_TD_12156_input;
    tbl_SerializeFromObject_TD_12156_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12156_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12156_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12156_input.allocateHost();
    tbl_SerializeFromObject_TD_12156_input.loadHost();
    Table tbl_SerializeFromObject_TD_12472_input;
    tbl_SerializeFromObject_TD_12472_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12472_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12472_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12472_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_12472_input.allocateHost();
    tbl_SerializeFromObject_TD_12472_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_386438_s, tv_r_Filter_11_386438_e;
    gettimeofday(&tv_r_Filter_11_386438_s, 0);
    SW_Filter_TD_11905(tbl_SerializeFromObject_TD_12472_input, tbl_Filter_TD_11905_output);
    gettimeofday(&tv_r_Filter_11_386438_e, 0);

    struct timeval tv_r_Filter_11_41243_s, tv_r_Filter_11_41243_e;
    gettimeofday(&tv_r_Filter_11_41243_s, 0);
    SW_Filter_TD_1167(tbl_SerializeFromObject_TD_12156_input, tbl_Filter_TD_1167_output);
    gettimeofday(&tv_r_Filter_11_41243_e, 0);

    struct timeval tv_r_Filter_10_868883_s, tv_r_Filter_10_868883_e;
    gettimeofday(&tv_r_Filter_10_868883_s, 0);
    SW_Filter_TD_10143(tbl_SerializeFromObject_TD_11220_input, tbl_Filter_TD_10143_output);
    gettimeofday(&tv_r_Filter_10_868883_e, 0);

    struct timeval tv_r_Filter_10_672304_s, tv_r_Filter_10_672304_e;
    gettimeofday(&tv_r_Filter_10_672304_s, 0);
    SW_Filter_TD_10632(tbl_SerializeFromObject_TD_11635_input, tbl_Filter_TD_10632_output);
    gettimeofday(&tv_r_Filter_10_672304_e, 0);

    struct timeval tv_r_JOIN_INNER_10_207391_s, tv_r_JOIN_INNER_10_207391_e;
    gettimeofday(&tv_r_JOIN_INNER_10_207391_s, 0);
    SW_JOIN_INNER_TD_10134(tbl_Filter_TD_1167_output, tbl_Filter_TD_11905_output, tbl_JOIN_INNER_TD_10134_output);
    gettimeofday(&tv_r_JOIN_INNER_10_207391_e, 0);

    struct timeval tv_r_Filter_10_678194_s, tv_r_Filter_10_678194_e;
    gettimeofday(&tv_r_Filter_10_678194_s, 0);
    SW_Filter_TD_10874(tbl_SerializeFromObject_TD_11847_input, tbl_Filter_TD_10874_output);
    gettimeofday(&tv_r_Filter_10_678194_e, 0);

    struct timeval tv_r_Filter_9_17241_s, tv_r_Filter_9_17241_e;
    gettimeofday(&tv_r_Filter_9_17241_s, 0);
    SW_Filter_TD_967(tbl_SerializeFromObject_TD_10628_input, tbl_Filter_TD_967_output);
    gettimeofday(&tv_r_Filter_9_17241_e, 0);

    struct timeval tv_r_Filter_9_919479_s, tv_r_Filter_9_919479_e;
    gettimeofday(&tv_r_Filter_9_919479_s, 0);
    SW_Filter_TD_9547(tbl_SerializeFromObject_TD_10677_input, tbl_Filter_TD_9547_output);
    gettimeofday(&tv_r_Filter_9_919479_e, 0);

    struct timeval tv_r_JOIN_INNER_9_772401_s, tv_r_JOIN_INNER_9_772401_e;
    gettimeofday(&tv_r_JOIN_INNER_9_772401_s, 0);
    SW_JOIN_INNER_TD_9410(tbl_Filter_TD_10632_output, tbl_Filter_TD_10143_output, tbl_JOIN_INNER_TD_9410_output);
    gettimeofday(&tv_r_JOIN_INNER_9_772401_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_342466_s, tv_r_JOIN_LEFTSEMI_9_342466_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_342466_s, 0);
    SW_JOIN_LEFTSEMI_TD_9571(tbl_Filter_TD_10874_output, tbl_JOIN_INNER_TD_10134_output, tbl_JOIN_LEFTSEMI_TD_9571_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_342466_e, 0);

    struct timeval tv_r_JOIN_INNER_8_680391_s, tv_r_JOIN_INNER_8_680391_e;
    gettimeofday(&tv_r_JOIN_INNER_8_680391_s, 0);
    SW_JOIN_INNER_TD_8500(tbl_Filter_TD_9547_output, tbl_Filter_TD_967_output, tbl_JOIN_INNER_TD_8500_output);
    gettimeofday(&tv_r_JOIN_INNER_8_680391_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOIN(EXISTS#7255)_8_724676_s, tv_r_JOIN_EXISTENCEJOIN(EXISTS#7255)_8_724676_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#7255)_8_724676_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872(tbl_JOIN_LEFTSEMI_TD_9571_output, tbl_JOIN_INNER_TD_9410_output, tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#7255)_8_724676_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOIN(EXISTS#7256)_7_8817_s, tv_r_JOIN_EXISTENCEJOIN(EXISTS#7256)_7_8817_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#7256)_7_8817_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604(tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output, tbl_JOIN_INNER_TD_8500_output, tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#7256)_7_8817_e, 0);

    struct timeval tv_r_Filter_6_577233_s, tv_r_Filter_6_577233_e;
    gettimeofday(&tv_r_Filter_6_577233_s, 0);
    SW_Filter_TD_6808(tbl_SerializeFromObject_TD_7348_input, tbl_Filter_TD_6808_output);
    gettimeofday(&tv_r_Filter_6_577233_e, 0);

    struct timeval tv_r_Filter_6_94356_s, tv_r_Filter_6_94356_e;
    gettimeofday(&tv_r_Filter_6_94356_s, 0);
    SW_Filter_TD_6211(tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output, tbl_Filter_TD_6211_output);
    gettimeofday(&tv_r_Filter_6_94356_e, 0);

    struct timeval tv_r_Filter_5_123878_s, tv_r_Filter_5_123878_e;
    gettimeofday(&tv_r_Filter_5_123878_s, 0);
    SW_Filter_TD_5659(tbl_SerializeFromObject_TD_6352_input, tbl_Filter_TD_5659_output);
    gettimeofday(&tv_r_Filter_5_123878_e, 0);

    struct timeval tv_r_JOIN_INNER_5_629523_s, tv_r_JOIN_INNER_5_629523_e;
    gettimeofday(&tv_r_JOIN_INNER_5_629523_s, 0);
    SW_JOIN_INNER_TD_5184(tbl_Filter_TD_6211_output, tbl_Filter_TD_6808_output, tbl_JOIN_INNER_TD_5184_output);
    gettimeofday(&tv_r_JOIN_INNER_5_629523_e, 0);

    struct timeval tv_r_JOIN_INNER_4_636164_s, tv_r_JOIN_INNER_4_636164_e;
    gettimeofday(&tv_r_JOIN_INNER_4_636164_s, 0);
    SW_JOIN_INNER_TD_4164(tbl_JOIN_INNER_TD_5184_output, tbl_Filter_TD_5659_output, tbl_JOIN_INNER_TD_4164_output);
    gettimeofday(&tv_r_JOIN_INNER_4_636164_e, 0);

    struct timeval tv_r_Aggregate_3_693790_s, tv_r_Aggregate_3_693790_e;
    gettimeofday(&tv_r_Aggregate_3_693790_s, 0);
    SW_Aggregate_TD_3453(tbl_JOIN_INNER_TD_4164_output, tbl_Aggregate_TD_3453_output);
    gettimeofday(&tv_r_Aggregate_3_693790_e, 0);

    struct timeval tv_r_Sort_2_642379_s, tv_r_Sort_2_642379_e;
    gettimeofday(&tv_r_Sort_2_642379_s, 0);
    SW_Sort_TD_2320(tbl_Aggregate_TD_3453_output, tbl_Sort_TD_2320_output);
    gettimeofday(&tv_r_Sort_2_642379_e, 0);

    struct timeval tv_r_LocalLimit_1_677853_s, tv_r_LocalLimit_1_677853_e;
    gettimeofday(&tv_r_LocalLimit_1_677853_s, 0);
    SW_LocalLimit_TD_1294(tbl_Sort_TD_2320_output, tbl_LocalLimit_TD_1294_output);
    gettimeofday(&tv_r_LocalLimit_1_677853_e, 0);

    struct timeval tv_r_GlobalLimit_0_229130_s, tv_r_GlobalLimit_0_229130_e;
    gettimeofday(&tv_r_GlobalLimit_0_229130_s, 0);
    SW_GlobalLimit_TD_0250(tbl_LocalLimit_TD_1294_output, tbl_GlobalLimit_TD_0250_output);
    gettimeofday(&tv_r_GlobalLimit_0_229130_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_386438_s, &tv_r_Filter_11_386438_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12472_input: " << tbl_SerializeFromObject_TD_12472_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_41243_s, &tv_r_Filter_11_41243_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12156_input: " << tbl_SerializeFromObject_TD_12156_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_868883_s, &tv_r_Filter_10_868883_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11220_input: " << tbl_SerializeFromObject_TD_11220_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_672304_s, &tv_r_Filter_10_672304_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11635_input: " << tbl_SerializeFromObject_TD_11635_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_207391_s, &tv_r_JOIN_INNER_10_207391_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1167_output: " << tbl_Filter_TD_1167_output.getNumRow() << " " << "tbl_Filter_TD_11905_output: " << tbl_Filter_TD_11905_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_678194_s, &tv_r_Filter_10_678194_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11847_input: " << tbl_SerializeFromObject_TD_11847_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_17241_s, &tv_r_Filter_9_17241_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10628_input: " << tbl_SerializeFromObject_TD_10628_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_919479_s, &tv_r_Filter_9_919479_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10677_input: " << tbl_SerializeFromObject_TD_10677_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_772401_s, &tv_r_JOIN_INNER_9_772401_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10632_output: " << tbl_Filter_TD_10632_output.getNumRow() << " " << "tbl_Filter_TD_10143_output: " << tbl_Filter_TD_10143_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_342466_s, &tv_r_JOIN_LEFTSEMI_9_342466_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10874_output: " << tbl_Filter_TD_10874_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_10134_output: " << tbl_JOIN_INNER_TD_10134_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_680391_s, &tv_r_JOIN_INNER_8_680391_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9547_output: " << tbl_Filter_TD_9547_output.getNumRow() << " " << "tbl_Filter_TD_967_output: " << tbl_Filter_TD_967_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOIN(EXISTS#7255)_8: " << tvdiff(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#7255)_8_724676_s, &tv_r_JOIN_EXISTENCEJOIN(EXISTS#7255)_8_724676_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_9571_output: " << tbl_JOIN_LEFTSEMI_TD_9571_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_9410_output: " << tbl_JOIN_INNER_TD_9410_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOIN(EXISTS#7256)_7: " << tvdiff(&tv_r_JOIN_EXISTENCEJOIN(EXISTS#7256)_7_8817_s, &tv_r_JOIN_EXISTENCEJOIN(EXISTS#7256)_7_8817_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output: " << tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_8500_output: " << tbl_JOIN_INNER_TD_8500_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_577233_s, &tv_r_Filter_6_577233_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7348_input: " << tbl_SerializeFromObject_TD_7348_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_94356_s, &tv_r_Filter_6_94356_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output: " << tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_123878_s, &tv_r_Filter_5_123878_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6352_input: " << tbl_SerializeFromObject_TD_6352_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_629523_s, &tv_r_JOIN_INNER_5_629523_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6211_output: " << tbl_Filter_TD_6211_output.getNumRow() << " " << "tbl_Filter_TD_6808_output: " << tbl_Filter_TD_6808_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_636164_s, &tv_r_JOIN_INNER_4_636164_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5184_output: " << tbl_JOIN_INNER_TD_5184_output.getNumRow() << " " << "tbl_Filter_TD_5659_output: " << tbl_Filter_TD_5659_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_693790_s, &tv_r_Aggregate_3_693790_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4164_output: " << tbl_JOIN_INNER_TD_4164_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_642379_s, &tv_r_Sort_2_642379_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3453_output: " << tbl_Aggregate_TD_3453_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_677853_s, &tv_r_LocalLimit_1_677853_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2320_output: " << tbl_Sort_TD_2320_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_229130_s, &tv_r_GlobalLimit_0_229130_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1294_output: " << tbl_LocalLimit_TD_1294_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.151566 * 1000 << "ms" << std::endl; 
    return 0; 
}
