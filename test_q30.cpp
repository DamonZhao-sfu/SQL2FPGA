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

#include "cfgFunc_q30.hpp" 
#include "q30.hpp" 

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
    std::cout << "NOTE:running query #30\n."; 
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
    Table tbl_GlobalLimit_TD_0888_output("tbl_GlobalLimit_TD_0888_output", 6100000, 13, "");
    tbl_GlobalLimit_TD_0888_output.allocateHost();
    Table tbl_LocalLimit_TD_1276_output("tbl_LocalLimit_TD_1276_output", 6100000, 13, "");
    tbl_LocalLimit_TD_1276_output.allocateHost();
    Table tbl_Sort_TD_249_output("tbl_Sort_TD_249_output", 6100000, 13, "");
    tbl_Sort_TD_249_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3408_output("tbl_JOIN_INNER_TD_3408_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_3408_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4476_output("tbl_JOIN_INNER_TD_4476_output", 6100000, 14, "");
    tbl_JOIN_INNER_TD_4476_output.allocateHost();
    Table tbl_Filter_TD_4912_output("tbl_Filter_TD_4912_output", 6100000, 1, "");
    tbl_Filter_TD_4912_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5139_output("tbl_JOIN_INNER_TD_5139_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5139_output.allocateHost();
    Table tbl_Filter_TD_5836_output("tbl_Filter_TD_5836_output", 6100000, 14, "");
    tbl_Filter_TD_5836_output.allocateHost();
    Table tbl_SerializeFromObject_TD_597_input;
    tbl_SerializeFromObject_TD_597_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_597_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_597_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_597_input.allocateHost();
    tbl_SerializeFromObject_TD_597_input.loadHost();
    Table tbl_Filter_TD_6830_output("tbl_Filter_TD_6830_output", 6100000, 3, "");
    tbl_Filter_TD_6830_output.allocateHost();
    Table tbl_Filter_TD_6457_output("tbl_Filter_TD_6457_output", 6100000, 2, "");
    tbl_Filter_TD_6457_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6733_input;
    tbl_SerializeFromObject_TD_6733_input = Table("customer", customer_n, 14, in_dir, "orc");
    tbl_SerializeFromObject_TD_6733_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_salutation", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_birth_day", 4);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_birth_month", 4);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_birth_year", 4);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6733_input.addCol("c_last_review_date", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6733_input.allocateHost();
    tbl_SerializeFromObject_TD_6733_input.loadHost();
    Table tbl_Aggregate_TD_768_output("tbl_Aggregate_TD_768_output", 6100000, 3, "");
    tbl_Aggregate_TD_768_output.allocateHost();
    Table tbl_Aggregate_TD_7213_output("tbl_Aggregate_TD_7213_output", 6100000, 2, "");
    tbl_Aggregate_TD_7213_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8255_output("tbl_JOIN_INNER_TD_8255_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8255_output.allocateHost();
    Table tbl_Aggregate_TD_8385_output("tbl_Aggregate_TD_8385_output", 6100000, 2, "");
    tbl_Aggregate_TD_8385_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9210_output("tbl_JOIN_INNER_TD_9210_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9210_output.allocateHost();
    Table tbl_Filter_TD_9301_output("tbl_Filter_TD_9301_output", 6100000, 2, "");
    tbl_Filter_TD_9301_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9840_output("tbl_JOIN_INNER_TD_9840_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9840_output.allocateHost();
    Table tbl_Filter_TD_1058_output("tbl_Filter_TD_1058_output", 6100000, 4, "");
    tbl_Filter_TD_1058_output.allocateHost();
    Table tbl_Filter_TD_10298_output("tbl_Filter_TD_10298_output", 6100000, 1, "");
    tbl_Filter_TD_10298_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10573_input;
    tbl_SerializeFromObject_TD_10573_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10573_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10573_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10573_input.allocateHost();
    tbl_SerializeFromObject_TD_10573_input.loadHost();
    Table tbl_JOIN_INNER_TD_10275_output("tbl_JOIN_INNER_TD_10275_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10275_output.allocateHost();
    Table tbl_Filter_TD_10451_output("tbl_Filter_TD_10451_output", 6100000, 2, "");
    tbl_Filter_TD_10451_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11774_input;
    tbl_SerializeFromObject_TD_11774_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11774_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_11774_input.addCol("wr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_11774_input.addCol("wr_returning_addr_sk", 4);
    tbl_SerializeFromObject_TD_11774_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_11774_input.allocateHost();
    tbl_SerializeFromObject_TD_11774_input.loadHost();
    Table tbl_SerializeFromObject_TD_11641_input;
    tbl_SerializeFromObject_TD_11641_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11641_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11641_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11641_input.allocateHost();
    tbl_SerializeFromObject_TD_11641_input.loadHost();
    Table tbl_Filter_TD_11506_output("tbl_Filter_TD_11506_output", 6100000, 4, "");
    tbl_Filter_TD_11506_output.allocateHost();
    Table tbl_Filter_TD_11550_output("tbl_Filter_TD_11550_output", 6100000, 1, "");
    tbl_Filter_TD_11550_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11371_input;
    tbl_SerializeFromObject_TD_11371_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11371_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_11371_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11371_input.allocateHost();
    tbl_SerializeFromObject_TD_11371_input.loadHost();
    Table tbl_SerializeFromObject_TD_12199_input;
    tbl_SerializeFromObject_TD_12199_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12199_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12199_input.addCol("wr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_12199_input.addCol("wr_returning_addr_sk", 4);
    tbl_SerializeFromObject_TD_12199_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_12199_input.allocateHost();
    tbl_SerializeFromObject_TD_12199_input.loadHost();
    Table tbl_SerializeFromObject_TD_12566_input;
    tbl_SerializeFromObject_TD_12566_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12566_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12566_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12566_input.allocateHost();
    tbl_SerializeFromObject_TD_12566_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_751171_s, tv_r_Filter_11_751171_e;
    gettimeofday(&tv_r_Filter_11_751171_s, 0);
    SW_Filter_TD_11550(tbl_SerializeFromObject_TD_12566_input, tbl_Filter_TD_11550_output);
    gettimeofday(&tv_r_Filter_11_751171_e, 0);

    struct timeval tv_r_Filter_11_147835_s, tv_r_Filter_11_147835_e;
    gettimeofday(&tv_r_Filter_11_147835_s, 0);
    SW_Filter_TD_11506(tbl_SerializeFromObject_TD_12199_input, tbl_Filter_TD_11506_output);
    gettimeofday(&tv_r_Filter_11_147835_e, 0);

    struct timeval tv_r_Filter_10_606671_s, tv_r_Filter_10_606671_e;
    gettimeofday(&tv_r_Filter_10_606671_s, 0);
    SW_Filter_TD_10451(tbl_SerializeFromObject_TD_11371_input, tbl_Filter_TD_10451_output);
    gettimeofday(&tv_r_Filter_10_606671_e, 0);

    struct timeval tv_r_JOIN_INNER_10_427937_s, tv_r_JOIN_INNER_10_427937_e;
    gettimeofday(&tv_r_JOIN_INNER_10_427937_s, 0);
    SW_JOIN_INNER_TD_10275(tbl_Filter_TD_11506_output, tbl_Filter_TD_11550_output, tbl_JOIN_INNER_TD_10275_output);
    gettimeofday(&tv_r_JOIN_INNER_10_427937_e, 0);

    struct timeval tv_r_Filter_10_573092_s, tv_r_Filter_10_573092_e;
    gettimeofday(&tv_r_Filter_10_573092_s, 0);
    SW_Filter_TD_10298(tbl_SerializeFromObject_TD_11641_input, tbl_Filter_TD_10298_output);
    gettimeofday(&tv_r_Filter_10_573092_e, 0);

    struct timeval tv_r_Filter_10_221878_s, tv_r_Filter_10_221878_e;
    gettimeofday(&tv_r_Filter_10_221878_s, 0);
    SW_Filter_TD_1058(tbl_SerializeFromObject_TD_11774_input, tbl_Filter_TD_1058_output);
    gettimeofday(&tv_r_Filter_10_221878_e, 0);

    struct timeval tv_r_JOIN_INNER_9_406914_s, tv_r_JOIN_INNER_9_406914_e;
    gettimeofday(&tv_r_JOIN_INNER_9_406914_s, 0);
    SW_JOIN_INNER_TD_9840(tbl_JOIN_INNER_TD_10275_output, tbl_Filter_TD_10451_output, tbl_JOIN_INNER_TD_9840_output);
    gettimeofday(&tv_r_JOIN_INNER_9_406914_e, 0);

    struct timeval tv_r_Filter_9_82646_s, tv_r_Filter_9_82646_e;
    gettimeofday(&tv_r_Filter_9_82646_s, 0);
    SW_Filter_TD_9301(tbl_SerializeFromObject_TD_10573_input, tbl_Filter_TD_9301_output);
    gettimeofday(&tv_r_Filter_9_82646_e, 0);

    struct timeval tv_r_JOIN_INNER_9_482142_s, tv_r_JOIN_INNER_9_482142_e;
    gettimeofday(&tv_r_JOIN_INNER_9_482142_s, 0);
    SW_JOIN_INNER_TD_9210(tbl_Filter_TD_1058_output, tbl_Filter_TD_10298_output, tbl_JOIN_INNER_TD_9210_output);
    gettimeofday(&tv_r_JOIN_INNER_9_482142_e, 0);

    struct timeval tv_r_Aggregate_8_753630_s, tv_r_Aggregate_8_753630_e;
    gettimeofday(&tv_r_Aggregate_8_753630_s, 0);
    SW_Aggregate_TD_8385(tbl_JOIN_INNER_TD_9840_output, tbl_Aggregate_TD_8385_output);
    gettimeofday(&tv_r_Aggregate_8_753630_e, 0);

    struct timeval tv_r_JOIN_INNER_8_487720_s, tv_r_JOIN_INNER_8_487720_e;
    gettimeofday(&tv_r_JOIN_INNER_8_487720_s, 0);
    SW_JOIN_INNER_TD_8255(tbl_JOIN_INNER_TD_9210_output, tbl_Filter_TD_9301_output, tbl_JOIN_INNER_TD_8255_output);
    gettimeofday(&tv_r_JOIN_INNER_8_487720_e, 0);

    struct timeval tv_r_Aggregate_7_408593_s, tv_r_Aggregate_7_408593_e;
    gettimeofday(&tv_r_Aggregate_7_408593_s, 0);
    SW_Aggregate_TD_7213(tbl_Aggregate_TD_8385_output, tbl_Aggregate_TD_7213_output);
    gettimeofday(&tv_r_Aggregate_7_408593_e, 0);

    struct timeval tv_r_Aggregate_7_920394_s, tv_r_Aggregate_7_920394_e;
    gettimeofday(&tv_r_Aggregate_7_920394_s, 0);
    SW_Aggregate_TD_768(tbl_JOIN_INNER_TD_8255_output, tbl_Aggregate_TD_768_output);
    gettimeofday(&tv_r_Aggregate_7_920394_e, 0);

    struct timeval tv_r_Filter_6_274994_s, tv_r_Filter_6_274994_e;
    gettimeofday(&tv_r_Filter_6_274994_s, 0);
    SW_Filter_TD_6457(tbl_Aggregate_TD_7213_output, tbl_Filter_TD_6457_output);
    gettimeofday(&tv_r_Filter_6_274994_e, 0);

    struct timeval tv_r_Filter_6_208027_s, tv_r_Filter_6_208027_e;
    gettimeofday(&tv_r_Filter_6_208027_s, 0);
    SW_Filter_TD_6830(tbl_Aggregate_TD_768_output, tbl_Filter_TD_6830_output);
    gettimeofday(&tv_r_Filter_6_208027_e, 0);

    struct timeval tv_r_Filter_5_330842_s, tv_r_Filter_5_330842_e;
    gettimeofday(&tv_r_Filter_5_330842_s, 0);
    SW_Filter_TD_5836(tbl_SerializeFromObject_TD_6733_input, tbl_Filter_TD_5836_output);
    gettimeofday(&tv_r_Filter_5_330842_e, 0);

    struct timeval tv_r_JOIN_INNER_5_625872_s, tv_r_JOIN_INNER_5_625872_e;
    gettimeofday(&tv_r_JOIN_INNER_5_625872_s, 0);
    SW_JOIN_INNER_TD_5139(tbl_Filter_TD_6830_output, tbl_Filter_TD_6457_output, tbl_JOIN_INNER_TD_5139_output);
    gettimeofday(&tv_r_JOIN_INNER_5_625872_e, 0);

    struct timeval tv_r_Filter_4_821211_s, tv_r_Filter_4_821211_e;
    gettimeofday(&tv_r_Filter_4_821211_s, 0);
    SW_Filter_TD_4912(tbl_SerializeFromObject_TD_597_input, tbl_Filter_TD_4912_output);
    gettimeofday(&tv_r_Filter_4_821211_e, 0);

    struct timeval tv_r_JOIN_INNER_4_120687_s, tv_r_JOIN_INNER_4_120687_e;
    gettimeofday(&tv_r_JOIN_INNER_4_120687_s, 0);
    SW_JOIN_INNER_TD_4476(tbl_JOIN_INNER_TD_5139_output, tbl_Filter_TD_5836_output, tbl_JOIN_INNER_TD_4476_output);
    gettimeofday(&tv_r_JOIN_INNER_4_120687_e, 0);

    struct timeval tv_r_JOIN_INNER_3_849039_s, tv_r_JOIN_INNER_3_849039_e;
    gettimeofday(&tv_r_JOIN_INNER_3_849039_s, 0);
    SW_JOIN_INNER_TD_3408(tbl_JOIN_INNER_TD_4476_output, tbl_Filter_TD_4912_output, tbl_JOIN_INNER_TD_3408_output);
    gettimeofday(&tv_r_JOIN_INNER_3_849039_e, 0);

    struct timeval tv_r_Sort_2_437317_s, tv_r_Sort_2_437317_e;
    gettimeofday(&tv_r_Sort_2_437317_s, 0);
    SW_Sort_TD_249(tbl_JOIN_INNER_TD_3408_output, tbl_Sort_TD_249_output);
    gettimeofday(&tv_r_Sort_2_437317_e, 0);

    struct timeval tv_r_LocalLimit_1_768931_s, tv_r_LocalLimit_1_768931_e;
    gettimeofday(&tv_r_LocalLimit_1_768931_s, 0);
    SW_LocalLimit_TD_1276(tbl_Sort_TD_249_output, tbl_LocalLimit_TD_1276_output);
    gettimeofday(&tv_r_LocalLimit_1_768931_e, 0);

    struct timeval tv_r_GlobalLimit_0_63716_s, tv_r_GlobalLimit_0_63716_e;
    gettimeofday(&tv_r_GlobalLimit_0_63716_s, 0);
    SW_GlobalLimit_TD_0888(tbl_LocalLimit_TD_1276_output, tbl_GlobalLimit_TD_0888_output);
    gettimeofday(&tv_r_GlobalLimit_0_63716_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_751171_s, &tv_r_Filter_11_751171_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12566_input: " << tbl_SerializeFromObject_TD_12566_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_147835_s, &tv_r_Filter_11_147835_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12199_input: " << tbl_SerializeFromObject_TD_12199_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_606671_s, &tv_r_Filter_10_606671_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11371_input: " << tbl_SerializeFromObject_TD_11371_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_427937_s, &tv_r_JOIN_INNER_10_427937_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11506_output: " << tbl_Filter_TD_11506_output.getNumRow() << " " << "tbl_Filter_TD_11550_output: " << tbl_Filter_TD_11550_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_573092_s, &tv_r_Filter_10_573092_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11641_input: " << tbl_SerializeFromObject_TD_11641_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_221878_s, &tv_r_Filter_10_221878_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11774_input: " << tbl_SerializeFromObject_TD_11774_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_406914_s, &tv_r_JOIN_INNER_9_406914_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10275_output: " << tbl_JOIN_INNER_TD_10275_output.getNumRow() << " " << "tbl_Filter_TD_10451_output: " << tbl_Filter_TD_10451_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_82646_s, &tv_r_Filter_9_82646_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10573_input: " << tbl_SerializeFromObject_TD_10573_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_482142_s, &tv_r_JOIN_INNER_9_482142_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1058_output: " << tbl_Filter_TD_1058_output.getNumRow() << " " << "tbl_Filter_TD_10298_output: " << tbl_Filter_TD_10298_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_753630_s, &tv_r_Aggregate_8_753630_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9840_output: " << tbl_JOIN_INNER_TD_9840_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_487720_s, &tv_r_JOIN_INNER_8_487720_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9210_output: " << tbl_JOIN_INNER_TD_9210_output.getNumRow() << " " << "tbl_Filter_TD_9301_output: " << tbl_Filter_TD_9301_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_408593_s, &tv_r_Aggregate_7_408593_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8385_output: " << tbl_Aggregate_TD_8385_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_920394_s, &tv_r_Aggregate_7_920394_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8255_output: " << tbl_JOIN_INNER_TD_8255_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_274994_s, &tv_r_Filter_6_274994_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7213_output: " << tbl_Aggregate_TD_7213_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_208027_s, &tv_r_Filter_6_208027_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_768_output: " << tbl_Aggregate_TD_768_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_330842_s, &tv_r_Filter_5_330842_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6733_input: " << tbl_SerializeFromObject_TD_6733_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_625872_s, &tv_r_JOIN_INNER_5_625872_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6830_output: " << tbl_Filter_TD_6830_output.getNumRow() << " " << "tbl_Filter_TD_6457_output: " << tbl_Filter_TD_6457_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_821211_s, &tv_r_Filter_4_821211_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_597_input: " << tbl_SerializeFromObject_TD_597_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_120687_s, &tv_r_JOIN_INNER_4_120687_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5139_output: " << tbl_JOIN_INNER_TD_5139_output.getNumRow() << " " << "tbl_Filter_TD_5836_output: " << tbl_Filter_TD_5836_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_849039_s, &tv_r_JOIN_INNER_3_849039_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4476_output: " << tbl_JOIN_INNER_TD_4476_output.getNumRow() << " " << "tbl_Filter_TD_4912_output: " << tbl_Filter_TD_4912_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_437317_s, &tv_r_Sort_2_437317_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3408_output: " << tbl_JOIN_INNER_TD_3408_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_768931_s, &tv_r_LocalLimit_1_768931_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_249_output: " << tbl_Sort_TD_249_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_63716_s, &tv_r_GlobalLimit_0_63716_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1276_output: " << tbl_LocalLimit_TD_1276_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.8734098 * 1000 << "ms" << std::endl; 
    return 0; 
}
