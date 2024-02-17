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

#include "cfgFunc_q24.hpp" 
#include "q24.hpp" 

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
    std::cout << "NOTE:running query #24\n."; 
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
    Table tbl_Filter_TD_0493_output("tbl_Filter_TD_0493_output", 6100000, 4, "");
    tbl_Filter_TD_0493_output.allocateHost();
    Table tbl_Aggregate_TD_1882_output("tbl_Aggregate_TD_1882_output", 6100000, 4, "");
    tbl_Aggregate_TD_1882_output.allocateHost();
    Table tbl_Aggregate_TD_1954_output("tbl_Aggregate_TD_1954_output", 6100000, 1, "");
    tbl_Aggregate_TD_1954_output.allocateHost();
    Table tbl_Aggregate_TD_2765_output("tbl_Aggregate_TD_2765_output", 6100000, 4, "");
    tbl_Aggregate_TD_2765_output.allocateHost();
    Table tbl_Aggregate_TD_2849_output("tbl_Aggregate_TD_2849_output", 6100000, 1, "");
    tbl_Aggregate_TD_2849_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3445_output("tbl_JOIN_INNER_TD_3445_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_3445_output.allocateHost();
    Table tbl_JOIN_INNER_TD_312_output("tbl_JOIN_INNER_TD_312_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_312_output.allocateHost();
    Table tbl_JOIN_INNER_TD_431_output("tbl_JOIN_INNER_TD_431_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_431_output.allocateHost();
    Table tbl_Filter_TD_4800_output("tbl_Filter_TD_4800_output", 6100000, 3, "");
    tbl_Filter_TD_4800_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4772_output("tbl_JOIN_INNER_TD_4772_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_4772_output.allocateHost();
    Table tbl_Filter_TD_4900_output("tbl_Filter_TD_4900_output", 6100000, 3, "");
    tbl_Filter_TD_4900_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5888_output("tbl_JOIN_INNER_TD_5888_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_5888_output.allocateHost();
    Table tbl_Filter_TD_5513_output("tbl_Filter_TD_5513_output", 6100000, 4, "");
    tbl_Filter_TD_5513_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5753_input;
    tbl_SerializeFromObject_TD_5753_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5753_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5753_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5753_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5753_input.allocateHost();
    tbl_SerializeFromObject_TD_5753_input.loadHost();
    Table tbl_JOIN_INNER_TD_5944_output("tbl_JOIN_INNER_TD_5944_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_5944_output.allocateHost();
    Table tbl_Filter_TD_5141_output("tbl_Filter_TD_5141_output", 6100000, 4, "");
    tbl_Filter_TD_5141_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5147_input;
    tbl_SerializeFromObject_TD_5147_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5147_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5147_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5147_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5147_input.allocateHost();
    tbl_SerializeFromObject_TD_5147_input.loadHost();
    Table tbl_JOIN_INNER_TD_6700_output("tbl_JOIN_INNER_TD_6700_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6700_output.allocateHost();
    Table tbl_Filter_TD_6286_output("tbl_Filter_TD_6286_output", 6100000, 6, "");
    tbl_Filter_TD_6286_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6785_input;
    tbl_SerializeFromObject_TD_6785_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6785_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6785_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6785_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6785_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6785_input.allocateHost();
    tbl_SerializeFromObject_TD_6785_input.loadHost();
    Table tbl_JOIN_INNER_TD_6526_output("tbl_JOIN_INNER_TD_6526_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6526_output.allocateHost();
    Table tbl_Filter_TD_6691_output("tbl_Filter_TD_6691_output", 6100000, 6, "");
    tbl_Filter_TD_6691_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6707_input;
    tbl_SerializeFromObject_TD_6707_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6707_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6707_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6707_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6707_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6707_input.allocateHost();
    tbl_SerializeFromObject_TD_6707_input.loadHost();
    Table tbl_JOIN_INNER_TD_7177_output("tbl_JOIN_INNER_TD_7177_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7177_output.allocateHost();
    Table tbl_Filter_TD_7500_output("tbl_Filter_TD_7500_output", 6100000, 4, "");
    tbl_Filter_TD_7500_output.allocateHost();
    Table tbl_SerializeFromObject_TD_766_input;
    tbl_SerializeFromObject_TD_766_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_766_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_766_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_766_input.addCol("i_size", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_766_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_766_input.addCol("i_units", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_766_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_766_input.allocateHost();
    tbl_SerializeFromObject_TD_766_input.loadHost();
    Table tbl_JOIN_INNER_TD_7977_output("tbl_JOIN_INNER_TD_7977_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7977_output.allocateHost();
    Table tbl_Filter_TD_7340_output("tbl_Filter_TD_7340_output", 6100000, 4, "");
    tbl_Filter_TD_7340_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7502_input;
    tbl_SerializeFromObject_TD_7502_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_7502_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7502_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_7502_input.addCol("i_size", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7502_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7502_input.addCol("i_units", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7502_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_7502_input.allocateHost();
    tbl_SerializeFromObject_TD_7502_input.loadHost();
    Table tbl_Filter_TD_8905_output("tbl_Filter_TD_8905_output", 6100000, 5, "");
    tbl_Filter_TD_8905_output.allocateHost();
    Table tbl_Filter_TD_8848_output("tbl_Filter_TD_8848_output", 6100000, 2, "");
    tbl_Filter_TD_8848_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8872_input;
    tbl_SerializeFromObject_TD_8872_input = Table("store", store_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8872_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8872_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8872_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8872_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8872_input.addCol("s_market_id", 4);
    tbl_SerializeFromObject_TD_8872_input.allocateHost();
    tbl_SerializeFromObject_TD_8872_input.loadHost();
    Table tbl_Filter_TD_8836_output("tbl_Filter_TD_8836_output", 6100000, 5, "");
    tbl_Filter_TD_8836_output.allocateHost();
    Table tbl_Filter_TD_8286_output("tbl_Filter_TD_8286_output", 6100000, 2, "");
    tbl_Filter_TD_8286_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8523_input;
    tbl_SerializeFromObject_TD_8523_input = Table("store", store_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8523_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8523_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8523_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8523_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8523_input.addCol("s_market_id", 4);
    tbl_SerializeFromObject_TD_8523_input.allocateHost();
    tbl_SerializeFromObject_TD_8523_input.loadHost();
    Table tbl_SerializeFromObject_TD_9303_input;
    tbl_SerializeFromObject_TD_9303_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9303_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9303_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9303_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9303_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_9303_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_9303_input.allocateHost();
    tbl_SerializeFromObject_TD_9303_input.loadHost();
    Table tbl_SerializeFromObject_TD_984_input;
    tbl_SerializeFromObject_TD_984_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_984_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_984_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_984_input.allocateHost();
    tbl_SerializeFromObject_TD_984_input.loadHost();
    Table tbl_SerializeFromObject_TD_9993_input;
    tbl_SerializeFromObject_TD_9993_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9993_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9993_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9993_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9993_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_9993_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_9993_input.allocateHost();
    tbl_SerializeFromObject_TD_9993_input.loadHost();
    Table tbl_SerializeFromObject_TD_9796_input;
    tbl_SerializeFromObject_TD_9796_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9796_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_9796_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_9796_input.allocateHost();
    tbl_SerializeFromObject_TD_9796_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_70356_s, tv_r_Filter_8_70356_e;
    gettimeofday(&tv_r_Filter_8_70356_s, 0);
    SW_Filter_TD_8286(tbl_SerializeFromObject_TD_9796_input, tbl_Filter_TD_8286_output);
    gettimeofday(&tv_r_Filter_8_70356_e, 0);

    struct timeval tv_r_Filter_8_138599_s, tv_r_Filter_8_138599_e;
    gettimeofday(&tv_r_Filter_8_138599_s, 0);
    SW_Filter_TD_8836(tbl_SerializeFromObject_TD_9993_input, tbl_Filter_TD_8836_output);
    gettimeofday(&tv_r_Filter_8_138599_e, 0);

    struct timeval tv_r_Filter_8_731692_s, tv_r_Filter_8_731692_e;
    gettimeofday(&tv_r_Filter_8_731692_s, 0);
    SW_Filter_TD_8848(tbl_SerializeFromObject_TD_984_input, tbl_Filter_TD_8848_output);
    gettimeofday(&tv_r_Filter_8_731692_e, 0);

    struct timeval tv_r_Filter_8_497196_s, tv_r_Filter_8_497196_e;
    gettimeofday(&tv_r_Filter_8_497196_s, 0);
    SW_Filter_TD_8905(tbl_SerializeFromObject_TD_9303_input, tbl_Filter_TD_8905_output);
    gettimeofday(&tv_r_Filter_8_497196_e, 0);

    struct timeval tv_r_Filter_7_75742_s, tv_r_Filter_7_75742_e;
    gettimeofday(&tv_r_Filter_7_75742_s, 0);
    SW_Filter_TD_7340(tbl_SerializeFromObject_TD_8523_input, tbl_Filter_TD_7340_output);
    gettimeofday(&tv_r_Filter_7_75742_e, 0);

    struct timeval tv_r_JOIN_INNER_7_985931_s, tv_r_JOIN_INNER_7_985931_e;
    gettimeofday(&tv_r_JOIN_INNER_7_985931_s, 0);
    SW_JOIN_INNER_TD_7977(tbl_Filter_TD_8836_output, tbl_Filter_TD_8286_output, tbl_JOIN_INNER_TD_7977_output);
    gettimeofday(&tv_r_JOIN_INNER_7_985931_e, 0);

    struct timeval tv_r_Filter_7_597646_s, tv_r_Filter_7_597646_e;
    gettimeofday(&tv_r_Filter_7_597646_s, 0);
    SW_Filter_TD_7500(tbl_SerializeFromObject_TD_8872_input, tbl_Filter_TD_7500_output);
    gettimeofday(&tv_r_Filter_7_597646_e, 0);

    struct timeval tv_r_JOIN_INNER_7_601129_s, tv_r_JOIN_INNER_7_601129_e;
    gettimeofday(&tv_r_JOIN_INNER_7_601129_s, 0);
    SW_JOIN_INNER_TD_7177(tbl_Filter_TD_8905_output, tbl_Filter_TD_8848_output, tbl_JOIN_INNER_TD_7177_output);
    gettimeofday(&tv_r_JOIN_INNER_7_601129_e, 0);

    struct timeval tv_r_Filter_6_379583_s, tv_r_Filter_6_379583_e;
    gettimeofday(&tv_r_Filter_6_379583_s, 0);
    SW_Filter_TD_6691(tbl_SerializeFromObject_TD_7502_input, tbl_Filter_TD_6691_output);
    gettimeofday(&tv_r_Filter_6_379583_e, 0);

    struct timeval tv_r_JOIN_INNER_6_119328_s, tv_r_JOIN_INNER_6_119328_e;
    gettimeofday(&tv_r_JOIN_INNER_6_119328_s, 0);
    SW_JOIN_INNER_TD_6526(tbl_JOIN_INNER_TD_7977_output, tbl_Filter_TD_7340_output, tbl_JOIN_INNER_TD_6526_output);
    gettimeofday(&tv_r_JOIN_INNER_6_119328_e, 0);

    struct timeval tv_r_Filter_6_979316_s, tv_r_Filter_6_979316_e;
    gettimeofday(&tv_r_Filter_6_979316_s, 0);
    SW_Filter_TD_6286(tbl_SerializeFromObject_TD_766_input, tbl_Filter_TD_6286_output);
    gettimeofday(&tv_r_Filter_6_979316_e, 0);

    struct timeval tv_r_JOIN_INNER_6_508377_s, tv_r_JOIN_INNER_6_508377_e;
    gettimeofday(&tv_r_JOIN_INNER_6_508377_s, 0);
    SW_JOIN_INNER_TD_6700(tbl_JOIN_INNER_TD_7177_output, tbl_Filter_TD_7500_output, tbl_JOIN_INNER_TD_6700_output);
    gettimeofday(&tv_r_JOIN_INNER_6_508377_e, 0);

    struct timeval tv_r_Filter_5_353478_s, tv_r_Filter_5_353478_e;
    gettimeofday(&tv_r_Filter_5_353478_s, 0);
    SW_Filter_TD_5141(tbl_SerializeFromObject_TD_6707_input, tbl_Filter_TD_5141_output);
    gettimeofday(&tv_r_Filter_5_353478_e, 0);

    struct timeval tv_r_JOIN_INNER_5_479809_s, tv_r_JOIN_INNER_5_479809_e;
    gettimeofday(&tv_r_JOIN_INNER_5_479809_s, 0);
    SW_JOIN_INNER_TD_5944(tbl_JOIN_INNER_TD_6526_output, tbl_Filter_TD_6691_output, tbl_JOIN_INNER_TD_5944_output);
    gettimeofday(&tv_r_JOIN_INNER_5_479809_e, 0);

    struct timeval tv_r_Filter_5_547650_s, tv_r_Filter_5_547650_e;
    gettimeofday(&tv_r_Filter_5_547650_s, 0);
    SW_Filter_TD_5513(tbl_SerializeFromObject_TD_6785_input, tbl_Filter_TD_5513_output);
    gettimeofday(&tv_r_Filter_5_547650_e, 0);

    struct timeval tv_r_JOIN_INNER_5_304279_s, tv_r_JOIN_INNER_5_304279_e;
    gettimeofday(&tv_r_JOIN_INNER_5_304279_s, 0);
    SW_JOIN_INNER_TD_5888(tbl_JOIN_INNER_TD_6700_output, tbl_Filter_TD_6286_output, tbl_JOIN_INNER_TD_5888_output);
    gettimeofday(&tv_r_JOIN_INNER_5_304279_e, 0);

    struct timeval tv_r_Filter_4_961538_s, tv_r_Filter_4_961538_e;
    gettimeofday(&tv_r_Filter_4_961538_s, 0);
    SW_Filter_TD_4900(tbl_SerializeFromObject_TD_5147_input, tbl_Filter_TD_4900_output);
    gettimeofday(&tv_r_Filter_4_961538_e, 0);

    struct timeval tv_r_JOIN_INNER_4_744321_s, tv_r_JOIN_INNER_4_744321_e;
    gettimeofday(&tv_r_JOIN_INNER_4_744321_s, 0);
    SW_JOIN_INNER_TD_4772(tbl_JOIN_INNER_TD_5944_output, tbl_Filter_TD_5141_output, tbl_JOIN_INNER_TD_4772_output);
    gettimeofday(&tv_r_JOIN_INNER_4_744321_e, 0);

    struct timeval tv_r_Filter_4_530008_s, tv_r_Filter_4_530008_e;
    gettimeofday(&tv_r_Filter_4_530008_s, 0);
    SW_Filter_TD_4800(tbl_SerializeFromObject_TD_5753_input, tbl_Filter_TD_4800_output);
    gettimeofday(&tv_r_Filter_4_530008_e, 0);

    struct timeval tv_r_JOIN_INNER_4_310504_s, tv_r_JOIN_INNER_4_310504_e;
    gettimeofday(&tv_r_JOIN_INNER_4_310504_s, 0);
    SW_JOIN_INNER_TD_431(tbl_JOIN_INNER_TD_5888_output, tbl_Filter_TD_5513_output, tbl_JOIN_INNER_TD_431_output);
    gettimeofday(&tv_r_JOIN_INNER_4_310504_e, 0);

    struct timeval tv_r_JOIN_INNER_3_219520_s, tv_r_JOIN_INNER_3_219520_e;
    gettimeofday(&tv_r_JOIN_INNER_3_219520_s, 0);
    SW_JOIN_INNER_TD_312(tbl_JOIN_INNER_TD_4772_output, tbl_Filter_TD_4900_output, tbl_JOIN_INNER_TD_312_output);
    gettimeofday(&tv_r_JOIN_INNER_3_219520_e, 0);

    struct timeval tv_r_JOIN_INNER_3_441660_s, tv_r_JOIN_INNER_3_441660_e;
    gettimeofday(&tv_r_JOIN_INNER_3_441660_s, 0);
    SW_JOIN_INNER_TD_3445(tbl_JOIN_INNER_TD_431_output, tbl_Filter_TD_4800_output, tbl_JOIN_INNER_TD_3445_output);
    gettimeofday(&tv_r_JOIN_INNER_3_441660_e, 0);

    struct timeval tv_r_Aggregate_2_31524_s, tv_r_Aggregate_2_31524_e;
    gettimeofday(&tv_r_Aggregate_2_31524_s, 0);
    SW_Aggregate_TD_2849(tbl_JOIN_INNER_TD_312_output, tbl_Aggregate_TD_2849_output);
    gettimeofday(&tv_r_Aggregate_2_31524_e, 0);

    struct timeval tv_r_Aggregate_2_273705_s, tv_r_Aggregate_2_273705_e;
    gettimeofday(&tv_r_Aggregate_2_273705_s, 0);
    SW_Aggregate_TD_2765(tbl_JOIN_INNER_TD_3445_output, tbl_Aggregate_TD_2765_output);
    gettimeofday(&tv_r_Aggregate_2_273705_e, 0);

    struct timeval tv_r_Aggregate_1_501681_s, tv_r_Aggregate_1_501681_e;
    gettimeofday(&tv_r_Aggregate_1_501681_s, 0);
    SW_Aggregate_TD_1954(tbl_Aggregate_TD_2849_output, tbl_Aggregate_TD_1954_output);
    gettimeofday(&tv_r_Aggregate_1_501681_e, 0);

    struct timeval tv_r_Aggregate_1_745114_s, tv_r_Aggregate_1_745114_e;
    gettimeofday(&tv_r_Aggregate_1_745114_s, 0);
    SW_Aggregate_TD_1882(tbl_Aggregate_TD_2765_output, tbl_Aggregate_TD_1882_output);
    gettimeofday(&tv_r_Aggregate_1_745114_e, 0);

    struct timeval tv_r_Filter_0_649809_s, tv_r_Filter_0_649809_e;
    gettimeofday(&tv_r_Filter_0_649809_s, 0);
    SW_Filter_TD_0493(tbl_Aggregate_TD_1882_output, tbl_Aggregate_TD_1954_output, tbl_Filter_TD_0493_output);
    gettimeofday(&tv_r_Filter_0_649809_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_70356_s, &tv_r_Filter_8_70356_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9796_input: " << tbl_SerializeFromObject_TD_9796_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_138599_s, &tv_r_Filter_8_138599_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9993_input: " << tbl_SerializeFromObject_TD_9993_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_731692_s, &tv_r_Filter_8_731692_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_984_input: " << tbl_SerializeFromObject_TD_984_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_497196_s, &tv_r_Filter_8_497196_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9303_input: " << tbl_SerializeFromObject_TD_9303_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_75742_s, &tv_r_Filter_7_75742_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8523_input: " << tbl_SerializeFromObject_TD_8523_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_985931_s, &tv_r_JOIN_INNER_7_985931_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8836_output: " << tbl_Filter_TD_8836_output.getNumRow() << " " << "tbl_Filter_TD_8286_output: " << tbl_Filter_TD_8286_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_597646_s, &tv_r_Filter_7_597646_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8872_input: " << tbl_SerializeFromObject_TD_8872_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_601129_s, &tv_r_JOIN_INNER_7_601129_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8905_output: " << tbl_Filter_TD_8905_output.getNumRow() << " " << "tbl_Filter_TD_8848_output: " << tbl_Filter_TD_8848_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_379583_s, &tv_r_Filter_6_379583_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7502_input: " << tbl_SerializeFromObject_TD_7502_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_119328_s, &tv_r_JOIN_INNER_6_119328_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7977_output: " << tbl_JOIN_INNER_TD_7977_output.getNumRow() << " " << "tbl_Filter_TD_7340_output: " << tbl_Filter_TD_7340_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_979316_s, &tv_r_Filter_6_979316_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_766_input: " << tbl_SerializeFromObject_TD_766_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_508377_s, &tv_r_JOIN_INNER_6_508377_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7177_output: " << tbl_JOIN_INNER_TD_7177_output.getNumRow() << " " << "tbl_Filter_TD_7500_output: " << tbl_Filter_TD_7500_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_353478_s, &tv_r_Filter_5_353478_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6707_input: " << tbl_SerializeFromObject_TD_6707_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_479809_s, &tv_r_JOIN_INNER_5_479809_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6526_output: " << tbl_JOIN_INNER_TD_6526_output.getNumRow() << " " << "tbl_Filter_TD_6691_output: " << tbl_Filter_TD_6691_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_547650_s, &tv_r_Filter_5_547650_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6785_input: " << tbl_SerializeFromObject_TD_6785_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_304279_s, &tv_r_JOIN_INNER_5_304279_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6700_output: " << tbl_JOIN_INNER_TD_6700_output.getNumRow() << " " << "tbl_Filter_TD_6286_output: " << tbl_Filter_TD_6286_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_961538_s, &tv_r_Filter_4_961538_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5147_input: " << tbl_SerializeFromObject_TD_5147_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_744321_s, &tv_r_JOIN_INNER_4_744321_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5944_output: " << tbl_JOIN_INNER_TD_5944_output.getNumRow() << " " << "tbl_Filter_TD_5141_output: " << tbl_Filter_TD_5141_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_530008_s, &tv_r_Filter_4_530008_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5753_input: " << tbl_SerializeFromObject_TD_5753_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_310504_s, &tv_r_JOIN_INNER_4_310504_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5888_output: " << tbl_JOIN_INNER_TD_5888_output.getNumRow() << " " << "tbl_Filter_TD_5513_output: " << tbl_Filter_TD_5513_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_219520_s, &tv_r_JOIN_INNER_3_219520_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4772_output: " << tbl_JOIN_INNER_TD_4772_output.getNumRow() << " " << "tbl_Filter_TD_4900_output: " << tbl_Filter_TD_4900_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_441660_s, &tv_r_JOIN_INNER_3_441660_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_431_output: " << tbl_JOIN_INNER_TD_431_output.getNumRow() << " " << "tbl_Filter_TD_4800_output: " << tbl_Filter_TD_4800_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_31524_s, &tv_r_Aggregate_2_31524_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_312_output: " << tbl_JOIN_INNER_TD_312_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_273705_s, &tv_r_Aggregate_2_273705_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3445_output: " << tbl_JOIN_INNER_TD_3445_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_501681_s, &tv_r_Aggregate_1_501681_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2849_output: " << tbl_Aggregate_TD_2849_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_745114_s, &tv_r_Aggregate_1_745114_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2765_output: " << tbl_Aggregate_TD_2765_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_0: " << tvdiff(&tv_r_Filter_0_649809_s, &tv_r_Filter_0_649809_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1882_output: " << tbl_Aggregate_TD_1882_output.getNumRow() << " " << "tbl_Aggregate_TD_1954_output: " << tbl_Aggregate_TD_1954_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.2451508 * 1000 << "ms" << std::endl; 
    return 0; 
}
