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

#include "cfgFunc_q81.hpp" 
#include "q81.hpp" 

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
    std::cout << "NOTE:running query #81\n."; 
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
    Table tbl_GlobalLimit_TD_0500_output("tbl_GlobalLimit_TD_0500_output", 6100000, 16, "");
    tbl_GlobalLimit_TD_0500_output.allocateHost();
    Table tbl_LocalLimit_TD_1349_output("tbl_LocalLimit_TD_1349_output", 6100000, 16, "");
    tbl_LocalLimit_TD_1349_output.allocateHost();
    Table tbl_Sort_TD_2224_output("tbl_Sort_TD_2224_output", 6100000, 16, "");
    tbl_Sort_TD_2224_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3557_output("tbl_JOIN_INNER_TD_3557_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_3557_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4823_output("tbl_JOIN_INNER_TD_4823_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4823_output.allocateHost();
    Table tbl_Filter_TD_4120_output("tbl_Filter_TD_4120_output", 6100000, 12, "");
    tbl_Filter_TD_4120_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5177_output("tbl_JOIN_INNER_TD_5177_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5177_output.allocateHost();
    Table tbl_Filter_TD_5889_output("tbl_Filter_TD_5889_output", 6100000, 6, "");
    tbl_Filter_TD_5889_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5116_input;
    tbl_SerializeFromObject_TD_5116_input = Table("customer_address", customer_address_n, 12, in_dir, "orc");
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_street_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_suite_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_5116_input.addCol("ca_location_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5116_input.allocateHost();
    tbl_SerializeFromObject_TD_5116_input.loadHost();
    Table tbl_Filter_TD_6591_output("tbl_Filter_TD_6591_output", 6100000, 3, "");
    tbl_Filter_TD_6591_output.allocateHost();
    Table tbl_Filter_TD_6192_output("tbl_Filter_TD_6192_output", 6100000, 2, "");
    tbl_Filter_TD_6192_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6844_input;
    tbl_SerializeFromObject_TD_6844_input = Table("customer", customer_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_6844_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6844_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6844_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_6844_input.addCol("c_salutation", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6844_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6844_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6844_input.allocateHost();
    tbl_SerializeFromObject_TD_6844_input.loadHost();
    Table tbl_Aggregate_TD_7861_output("tbl_Aggregate_TD_7861_output", 6100000, 3, "");
    tbl_Aggregate_TD_7861_output.allocateHost();
    Table tbl_Aggregate_TD_7139_output("tbl_Aggregate_TD_7139_output", 6100000, 2, "");
    tbl_Aggregate_TD_7139_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8865_output("tbl_JOIN_INNER_TD_8865_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8865_output.allocateHost();
    Table tbl_Aggregate_TD_8283_output("tbl_Aggregate_TD_8283_output", 6100000, 2, "");
    tbl_Aggregate_TD_8283_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9477_output("tbl_JOIN_INNER_TD_9477_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9477_output.allocateHost();
    Table tbl_Filter_TD_9444_output("tbl_Filter_TD_9444_output", 6100000, 2, "");
    tbl_Filter_TD_9444_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9643_output("tbl_JOIN_INNER_TD_9643_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9643_output.allocateHost();
    Table tbl_Filter_TD_10660_output("tbl_Filter_TD_10660_output", 6100000, 4, "");
    tbl_Filter_TD_10660_output.allocateHost();
    Table tbl_Filter_TD_10802_output("tbl_Filter_TD_10802_output", 6100000, 1, "");
    tbl_Filter_TD_10802_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10693_input;
    tbl_SerializeFromObject_TD_10693_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10693_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10693_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10693_input.allocateHost();
    tbl_SerializeFromObject_TD_10693_input.loadHost();
    Table tbl_JOIN_INNER_TD_10298_output("tbl_JOIN_INNER_TD_10298_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10298_output.allocateHost();
    Table tbl_Filter_TD_10346_output("tbl_Filter_TD_10346_output", 6100000, 2, "");
    tbl_Filter_TD_10346_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11110_input;
    tbl_SerializeFromObject_TD_11110_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11110_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_11110_input.addCol("cr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_11110_input.addCol("cr_returning_addr_sk", 4);
    tbl_SerializeFromObject_TD_11110_input.addCol("cr_return_amt_inc_tax", 4);
    tbl_SerializeFromObject_TD_11110_input.allocateHost();
    tbl_SerializeFromObject_TD_11110_input.loadHost();
    Table tbl_SerializeFromObject_TD_11518_input;
    tbl_SerializeFromObject_TD_11518_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11518_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11518_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11518_input.allocateHost();
    tbl_SerializeFromObject_TD_11518_input.loadHost();
    Table tbl_Filter_TD_11166_output("tbl_Filter_TD_11166_output", 6100000, 4, "");
    tbl_Filter_TD_11166_output.allocateHost();
    Table tbl_Filter_TD_11314_output("tbl_Filter_TD_11314_output", 6100000, 1, "");
    tbl_Filter_TD_11314_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1123_input;
    tbl_SerializeFromObject_TD_1123_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1123_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_1123_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1123_input.allocateHost();
    tbl_SerializeFromObject_TD_1123_input.loadHost();
    Table tbl_SerializeFromObject_TD_12374_input;
    tbl_SerializeFromObject_TD_12374_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12374_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12374_input.addCol("cr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_12374_input.addCol("cr_returning_addr_sk", 4);
    tbl_SerializeFromObject_TD_12374_input.addCol("cr_return_amt_inc_tax", 4);
    tbl_SerializeFromObject_TD_12374_input.allocateHost();
    tbl_SerializeFromObject_TD_12374_input.loadHost();
    Table tbl_SerializeFromObject_TD_12215_input;
    tbl_SerializeFromObject_TD_12215_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12215_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12215_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12215_input.allocateHost();
    tbl_SerializeFromObject_TD_12215_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_836153_s, tv_r_Filter_11_836153_e;
    gettimeofday(&tv_r_Filter_11_836153_s, 0);
    SW_Filter_TD_11314(tbl_SerializeFromObject_TD_12215_input, tbl_Filter_TD_11314_output);
    gettimeofday(&tv_r_Filter_11_836153_e, 0);

    struct timeval tv_r_Filter_11_415527_s, tv_r_Filter_11_415527_e;
    gettimeofday(&tv_r_Filter_11_415527_s, 0);
    SW_Filter_TD_11166(tbl_SerializeFromObject_TD_12374_input, tbl_Filter_TD_11166_output);
    gettimeofday(&tv_r_Filter_11_415527_e, 0);

    struct timeval tv_r_Filter_10_793512_s, tv_r_Filter_10_793512_e;
    gettimeofday(&tv_r_Filter_10_793512_s, 0);
    SW_Filter_TD_10346(tbl_SerializeFromObject_TD_1123_input, tbl_Filter_TD_10346_output);
    gettimeofday(&tv_r_Filter_10_793512_e, 0);

    struct timeval tv_r_JOIN_INNER_10_425434_s, tv_r_JOIN_INNER_10_425434_e;
    gettimeofday(&tv_r_JOIN_INNER_10_425434_s, 0);
    SW_JOIN_INNER_TD_10298(tbl_Filter_TD_11166_output, tbl_Filter_TD_11314_output, tbl_JOIN_INNER_TD_10298_output);
    gettimeofday(&tv_r_JOIN_INNER_10_425434_e, 0);

    struct timeval tv_r_Filter_10_433424_s, tv_r_Filter_10_433424_e;
    gettimeofday(&tv_r_Filter_10_433424_s, 0);
    SW_Filter_TD_10802(tbl_SerializeFromObject_TD_11518_input, tbl_Filter_TD_10802_output);
    gettimeofday(&tv_r_Filter_10_433424_e, 0);

    struct timeval tv_r_Filter_10_991160_s, tv_r_Filter_10_991160_e;
    gettimeofday(&tv_r_Filter_10_991160_s, 0);
    SW_Filter_TD_10660(tbl_SerializeFromObject_TD_11110_input, tbl_Filter_TD_10660_output);
    gettimeofday(&tv_r_Filter_10_991160_e, 0);

    struct timeval tv_r_JOIN_INNER_9_51479_s, tv_r_JOIN_INNER_9_51479_e;
    gettimeofday(&tv_r_JOIN_INNER_9_51479_s, 0);
    SW_JOIN_INNER_TD_9643(tbl_JOIN_INNER_TD_10298_output, tbl_Filter_TD_10346_output, tbl_JOIN_INNER_TD_9643_output);
    gettimeofday(&tv_r_JOIN_INNER_9_51479_e, 0);

    struct timeval tv_r_Filter_9_760731_s, tv_r_Filter_9_760731_e;
    gettimeofday(&tv_r_Filter_9_760731_s, 0);
    SW_Filter_TD_9444(tbl_SerializeFromObject_TD_10693_input, tbl_Filter_TD_9444_output);
    gettimeofday(&tv_r_Filter_9_760731_e, 0);

    struct timeval tv_r_JOIN_INNER_9_446373_s, tv_r_JOIN_INNER_9_446373_e;
    gettimeofday(&tv_r_JOIN_INNER_9_446373_s, 0);
    SW_JOIN_INNER_TD_9477(tbl_Filter_TD_10660_output, tbl_Filter_TD_10802_output, tbl_JOIN_INNER_TD_9477_output);
    gettimeofday(&tv_r_JOIN_INNER_9_446373_e, 0);

    struct timeval tv_r_Aggregate_8_199594_s, tv_r_Aggregate_8_199594_e;
    gettimeofday(&tv_r_Aggregate_8_199594_s, 0);
    SW_Aggregate_TD_8283(tbl_JOIN_INNER_TD_9643_output, tbl_Aggregate_TD_8283_output);
    gettimeofday(&tv_r_Aggregate_8_199594_e, 0);

    struct timeval tv_r_JOIN_INNER_8_549368_s, tv_r_JOIN_INNER_8_549368_e;
    gettimeofday(&tv_r_JOIN_INNER_8_549368_s, 0);
    SW_JOIN_INNER_TD_8865(tbl_JOIN_INNER_TD_9477_output, tbl_Filter_TD_9444_output, tbl_JOIN_INNER_TD_8865_output);
    gettimeofday(&tv_r_JOIN_INNER_8_549368_e, 0);

    struct timeval tv_r_Aggregate_7_597527_s, tv_r_Aggregate_7_597527_e;
    gettimeofday(&tv_r_Aggregate_7_597527_s, 0);
    SW_Aggregate_TD_7139(tbl_Aggregate_TD_8283_output, tbl_Aggregate_TD_7139_output);
    gettimeofday(&tv_r_Aggregate_7_597527_e, 0);

    struct timeval tv_r_Aggregate_7_526347_s, tv_r_Aggregate_7_526347_e;
    gettimeofday(&tv_r_Aggregate_7_526347_s, 0);
    SW_Aggregate_TD_7861(tbl_JOIN_INNER_TD_8865_output, tbl_Aggregate_TD_7861_output);
    gettimeofday(&tv_r_Aggregate_7_526347_e, 0);

    struct timeval tv_r_Filter_6_978323_s, tv_r_Filter_6_978323_e;
    gettimeofday(&tv_r_Filter_6_978323_s, 0);
    SW_Filter_TD_6192(tbl_Aggregate_TD_7139_output, tbl_Filter_TD_6192_output);
    gettimeofday(&tv_r_Filter_6_978323_e, 0);

    struct timeval tv_r_Filter_6_726055_s, tv_r_Filter_6_726055_e;
    gettimeofday(&tv_r_Filter_6_726055_s, 0);
    SW_Filter_TD_6591(tbl_Aggregate_TD_7861_output, tbl_Filter_TD_6591_output);
    gettimeofday(&tv_r_Filter_6_726055_e, 0);

    struct timeval tv_r_Filter_5_392260_s, tv_r_Filter_5_392260_e;
    gettimeofday(&tv_r_Filter_5_392260_s, 0);
    SW_Filter_TD_5889(tbl_SerializeFromObject_TD_6844_input, tbl_Filter_TD_5889_output);
    gettimeofday(&tv_r_Filter_5_392260_e, 0);

    struct timeval tv_r_JOIN_INNER_5_555030_s, tv_r_JOIN_INNER_5_555030_e;
    gettimeofday(&tv_r_JOIN_INNER_5_555030_s, 0);
    SW_JOIN_INNER_TD_5177(tbl_Filter_TD_6591_output, tbl_Filter_TD_6192_output, tbl_JOIN_INNER_TD_5177_output);
    gettimeofday(&tv_r_JOIN_INNER_5_555030_e, 0);

    struct timeval tv_r_Filter_4_238432_s, tv_r_Filter_4_238432_e;
    gettimeofday(&tv_r_Filter_4_238432_s, 0);
    SW_Filter_TD_4120(tbl_SerializeFromObject_TD_5116_input, tbl_Filter_TD_4120_output);
    gettimeofday(&tv_r_Filter_4_238432_e, 0);

    struct timeval tv_r_JOIN_INNER_4_324222_s, tv_r_JOIN_INNER_4_324222_e;
    gettimeofday(&tv_r_JOIN_INNER_4_324222_s, 0);
    SW_JOIN_INNER_TD_4823(tbl_JOIN_INNER_TD_5177_output, tbl_Filter_TD_5889_output, tbl_JOIN_INNER_TD_4823_output);
    gettimeofday(&tv_r_JOIN_INNER_4_324222_e, 0);

    struct timeval tv_r_JOIN_INNER_3_967593_s, tv_r_JOIN_INNER_3_967593_e;
    gettimeofday(&tv_r_JOIN_INNER_3_967593_s, 0);
    SW_JOIN_INNER_TD_3557(tbl_JOIN_INNER_TD_4823_output, tbl_Filter_TD_4120_output, tbl_JOIN_INNER_TD_3557_output);
    gettimeofday(&tv_r_JOIN_INNER_3_967593_e, 0);

    struct timeval tv_r_Sort_2_2662_s, tv_r_Sort_2_2662_e;
    gettimeofday(&tv_r_Sort_2_2662_s, 0);
    SW_Sort_TD_2224(tbl_JOIN_INNER_TD_3557_output, tbl_Sort_TD_2224_output);
    gettimeofday(&tv_r_Sort_2_2662_e, 0);

    struct timeval tv_r_LocalLimit_1_729655_s, tv_r_LocalLimit_1_729655_e;
    gettimeofday(&tv_r_LocalLimit_1_729655_s, 0);
    SW_LocalLimit_TD_1349(tbl_Sort_TD_2224_output, tbl_LocalLimit_TD_1349_output);
    gettimeofday(&tv_r_LocalLimit_1_729655_e, 0);

    struct timeval tv_r_GlobalLimit_0_792432_s, tv_r_GlobalLimit_0_792432_e;
    gettimeofday(&tv_r_GlobalLimit_0_792432_s, 0);
    SW_GlobalLimit_TD_0500(tbl_LocalLimit_TD_1349_output, tbl_GlobalLimit_TD_0500_output);
    gettimeofday(&tv_r_GlobalLimit_0_792432_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_836153_s, &tv_r_Filter_11_836153_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12215_input: " << tbl_SerializeFromObject_TD_12215_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_415527_s, &tv_r_Filter_11_415527_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12374_input: " << tbl_SerializeFromObject_TD_12374_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_793512_s, &tv_r_Filter_10_793512_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1123_input: " << tbl_SerializeFromObject_TD_1123_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_425434_s, &tv_r_JOIN_INNER_10_425434_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11166_output: " << tbl_Filter_TD_11166_output.getNumRow() << " " << "tbl_Filter_TD_11314_output: " << tbl_Filter_TD_11314_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_433424_s, &tv_r_Filter_10_433424_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11518_input: " << tbl_SerializeFromObject_TD_11518_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_991160_s, &tv_r_Filter_10_991160_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11110_input: " << tbl_SerializeFromObject_TD_11110_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_51479_s, &tv_r_JOIN_INNER_9_51479_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10298_output: " << tbl_JOIN_INNER_TD_10298_output.getNumRow() << " " << "tbl_Filter_TD_10346_output: " << tbl_Filter_TD_10346_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_760731_s, &tv_r_Filter_9_760731_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10693_input: " << tbl_SerializeFromObject_TD_10693_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_446373_s, &tv_r_JOIN_INNER_9_446373_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10660_output: " << tbl_Filter_TD_10660_output.getNumRow() << " " << "tbl_Filter_TD_10802_output: " << tbl_Filter_TD_10802_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_199594_s, &tv_r_Aggregate_8_199594_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9643_output: " << tbl_JOIN_INNER_TD_9643_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_549368_s, &tv_r_JOIN_INNER_8_549368_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9477_output: " << tbl_JOIN_INNER_TD_9477_output.getNumRow() << " " << "tbl_Filter_TD_9444_output: " << tbl_Filter_TD_9444_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_597527_s, &tv_r_Aggregate_7_597527_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8283_output: " << tbl_Aggregate_TD_8283_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_526347_s, &tv_r_Aggregate_7_526347_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8865_output: " << tbl_JOIN_INNER_TD_8865_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_978323_s, &tv_r_Filter_6_978323_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7139_output: " << tbl_Aggregate_TD_7139_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_726055_s, &tv_r_Filter_6_726055_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7861_output: " << tbl_Aggregate_TD_7861_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_392260_s, &tv_r_Filter_5_392260_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6844_input: " << tbl_SerializeFromObject_TD_6844_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_555030_s, &tv_r_JOIN_INNER_5_555030_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6591_output: " << tbl_Filter_TD_6591_output.getNumRow() << " " << "tbl_Filter_TD_6192_output: " << tbl_Filter_TD_6192_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_238432_s, &tv_r_Filter_4_238432_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5116_input: " << tbl_SerializeFromObject_TD_5116_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_324222_s, &tv_r_JOIN_INNER_4_324222_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5177_output: " << tbl_JOIN_INNER_TD_5177_output.getNumRow() << " " << "tbl_Filter_TD_5889_output: " << tbl_Filter_TD_5889_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_967593_s, &tv_r_JOIN_INNER_3_967593_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4823_output: " << tbl_JOIN_INNER_TD_4823_output.getNumRow() << " " << "tbl_Filter_TD_4120_output: " << tbl_Filter_TD_4120_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_2662_s, &tv_r_Sort_2_2662_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3557_output: " << tbl_JOIN_INNER_TD_3557_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_729655_s, &tv_r_LocalLimit_1_729655_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2224_output: " << tbl_Sort_TD_2224_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_792432_s, &tv_r_GlobalLimit_0_792432_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1349_output: " << tbl_LocalLimit_TD_1349_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.6301941 * 1000 << "ms" << std::endl; 
    return 0; 
}
