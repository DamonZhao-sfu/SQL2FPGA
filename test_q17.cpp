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

#include "cfgFunc_q17.hpp" 
#include "q17.hpp" 

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
    std::cout << "NOTE:running query #17\n."; 
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
    Table tbl_GlobalLimit_TD_0120_output("tbl_GlobalLimit_TD_0120_output", 6100000, 15, "");
    tbl_GlobalLimit_TD_0120_output.allocateHost();
    Table tbl_LocalLimit_TD_1112_output("tbl_LocalLimit_TD_1112_output", 6100000, 15, "");
    tbl_LocalLimit_TD_1112_output.allocateHost();
    Table tbl_Sort_TD_2371_output("tbl_Sort_TD_2371_output", 6100000, 15, "");
    tbl_Sort_TD_2371_output.allocateHost();
    Table tbl_Aggregate_TD_3506_output("tbl_Aggregate_TD_3506_output", 6100000, 15, "");
    tbl_Aggregate_TD_3506_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4799_output("tbl_JOIN_INNER_TD_4799_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4799_output.allocateHost();
    Table tbl_JOIN_INNER_TD_58_output("tbl_JOIN_INNER_TD_58_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_58_output.allocateHost();
    Table tbl_Filter_TD_5167_output("tbl_Filter_TD_5167_output", 6100000, 3, "");
    tbl_Filter_TD_5167_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6433_output("tbl_JOIN_INNER_TD_6433_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6433_output.allocateHost();
    Table tbl_Filter_TD_6141_output("tbl_Filter_TD_6141_output", 6100000, 2, "");
    tbl_Filter_TD_6141_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6359_input;
    tbl_SerializeFromObject_TD_6359_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6359_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6359_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6359_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6359_input.allocateHost();
    tbl_SerializeFromObject_TD_6359_input.loadHost();
    Table tbl_JOIN_INNER_TD_7266_output("tbl_JOIN_INNER_TD_7266_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7266_output.allocateHost();
    Table tbl_Filter_TD_774_output("tbl_Filter_TD_774_output", 6100000, 1, "");
    tbl_Filter_TD_774_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7210_input;
    tbl_SerializeFromObject_TD_7210_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7210_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7210_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7210_input.allocateHost();
    tbl_SerializeFromObject_TD_7210_input.loadHost();
    Table tbl_JOIN_INNER_TD_8315_output("tbl_JOIN_INNER_TD_8315_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8315_output.allocateHost();
    Table tbl_Filter_TD_8635_output("tbl_Filter_TD_8635_output", 6100000, 1, "");
    tbl_Filter_TD_8635_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8622_input;
    tbl_SerializeFromObject_TD_8622_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8622_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8622_input.addCol("d_quarter_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8622_input.allocateHost();
    tbl_SerializeFromObject_TD_8622_input.loadHost();
    Table tbl_JOIN_INNER_TD_984_output("tbl_JOIN_INNER_TD_984_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_984_output.allocateHost();
    Table tbl_Filter_TD_9497_output("tbl_Filter_TD_9497_output", 6100000, 1, "");
    tbl_Filter_TD_9497_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9617_input;
    tbl_SerializeFromObject_TD_9617_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9617_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9617_input.addCol("d_quarter_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9617_input.allocateHost();
    tbl_SerializeFromObject_TD_9617_input.loadHost();
    Table tbl_JOIN_INNER_TD_10622_output("tbl_JOIN_INNER_TD_10622_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_10622_output.allocateHost();
    Table tbl_Filter_TD_10679_output("tbl_Filter_TD_10679_output", 6100000, 4, "");
    tbl_Filter_TD_10679_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10923_input;
    tbl_SerializeFromObject_TD_10923_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10923_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10923_input.addCol("d_quarter_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10923_input.allocateHost();
    tbl_SerializeFromObject_TD_10923_input.loadHost();
    Table tbl_Filter_TD_11420_output("tbl_Filter_TD_11420_output", 6100000, 6, "");
    tbl_Filter_TD_11420_output.allocateHost();
    Table tbl_Filter_TD_11308_output("tbl_Filter_TD_11308_output", 6100000, 5, "");
    tbl_Filter_TD_11308_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11166_input;
    tbl_SerializeFromObject_TD_11166_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11166_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11166_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11166_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_11166_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_11166_input.allocateHost();
    tbl_SerializeFromObject_TD_11166_input.loadHost();
    Table tbl_SerializeFromObject_TD_12536_input;
    tbl_SerializeFromObject_TD_12536_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_12536_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12536_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12536_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12536_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12536_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_12536_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12536_input.allocateHost();
    tbl_SerializeFromObject_TD_12536_input.loadHost();
    Table tbl_SerializeFromObject_TD_12628_input;
    tbl_SerializeFromObject_TD_12628_input = Table("store_returns", store_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_12628_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12628_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_12628_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_12628_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_12628_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_12628_input.allocateHost();
    tbl_SerializeFromObject_TD_12628_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_567346_s, tv_r_Filter_11_567346_e;
    gettimeofday(&tv_r_Filter_11_567346_s, 0);
    SW_Filter_TD_11308(tbl_SerializeFromObject_TD_12628_input, tbl_Filter_TD_11308_output);
    gettimeofday(&tv_r_Filter_11_567346_e, 0);

    struct timeval tv_r_Filter_11_700830_s, tv_r_Filter_11_700830_e;
    gettimeofday(&tv_r_Filter_11_700830_s, 0);
    SW_Filter_TD_11420(tbl_SerializeFromObject_TD_12536_input, tbl_Filter_TD_11420_output);
    gettimeofday(&tv_r_Filter_11_700830_e, 0);

    struct timeval tv_r_Filter_10_881053_s, tv_r_Filter_10_881053_e;
    gettimeofday(&tv_r_Filter_10_881053_s, 0);
    SW_Filter_TD_10679(tbl_SerializeFromObject_TD_11166_input, tbl_Filter_TD_10679_output);
    gettimeofday(&tv_r_Filter_10_881053_e, 0);

    struct timeval tv_r_JOIN_INNER_10_34463_s, tv_r_JOIN_INNER_10_34463_e;
    gettimeofday(&tv_r_JOIN_INNER_10_34463_s, 0);
    SW_JOIN_INNER_TD_10622(tbl_Filter_TD_11420_output, tbl_Filter_TD_11308_output, tbl_JOIN_INNER_TD_10622_output);
    gettimeofday(&tv_r_JOIN_INNER_10_34463_e, 0);

    struct timeval tv_r_Filter_9_500095_s, tv_r_Filter_9_500095_e;
    gettimeofday(&tv_r_Filter_9_500095_s, 0);
    SW_Filter_TD_9497(tbl_SerializeFromObject_TD_10923_input, tbl_Filter_TD_9497_output);
    gettimeofday(&tv_r_Filter_9_500095_e, 0);

    struct timeval tv_r_JOIN_INNER_9_441503_s, tv_r_JOIN_INNER_9_441503_e;
    gettimeofday(&tv_r_JOIN_INNER_9_441503_s, 0);
    SW_JOIN_INNER_TD_984(tbl_JOIN_INNER_TD_10622_output, tbl_Filter_TD_10679_output, tbl_JOIN_INNER_TD_984_output);
    gettimeofday(&tv_r_JOIN_INNER_9_441503_e, 0);

    struct timeval tv_r_Filter_8_16564_s, tv_r_Filter_8_16564_e;
    gettimeofday(&tv_r_Filter_8_16564_s, 0);
    SW_Filter_TD_8635(tbl_SerializeFromObject_TD_9617_input, tbl_Filter_TD_8635_output);
    gettimeofday(&tv_r_Filter_8_16564_e, 0);

    struct timeval tv_r_JOIN_INNER_8_264279_s, tv_r_JOIN_INNER_8_264279_e;
    gettimeofday(&tv_r_JOIN_INNER_8_264279_s, 0);
    SW_JOIN_INNER_TD_8315(tbl_JOIN_INNER_TD_984_output, tbl_Filter_TD_9497_output, tbl_JOIN_INNER_TD_8315_output);
    gettimeofday(&tv_r_JOIN_INNER_8_264279_e, 0);

    struct timeval tv_r_Filter_7_508658_s, tv_r_Filter_7_508658_e;
    gettimeofday(&tv_r_Filter_7_508658_s, 0);
    SW_Filter_TD_774(tbl_SerializeFromObject_TD_8622_input, tbl_Filter_TD_774_output);
    gettimeofday(&tv_r_Filter_7_508658_e, 0);

    struct timeval tv_r_JOIN_INNER_7_85837_s, tv_r_JOIN_INNER_7_85837_e;
    gettimeofday(&tv_r_JOIN_INNER_7_85837_s, 0);
    SW_JOIN_INNER_TD_7266(tbl_JOIN_INNER_TD_8315_output, tbl_Filter_TD_8635_output, tbl_JOIN_INNER_TD_7266_output);
    gettimeofday(&tv_r_JOIN_INNER_7_85837_e, 0);

    struct timeval tv_r_Filter_6_998070_s, tv_r_Filter_6_998070_e;
    gettimeofday(&tv_r_Filter_6_998070_s, 0);
    SW_Filter_TD_6141(tbl_SerializeFromObject_TD_7210_input, tbl_Filter_TD_6141_output);
    gettimeofday(&tv_r_Filter_6_998070_e, 0);

    struct timeval tv_r_JOIN_INNER_6_1064_s, tv_r_JOIN_INNER_6_1064_e;
    gettimeofday(&tv_r_JOIN_INNER_6_1064_s, 0);
    SW_JOIN_INNER_TD_6433(tbl_JOIN_INNER_TD_7266_output, tbl_Filter_TD_774_output, tbl_JOIN_INNER_TD_6433_output);
    gettimeofday(&tv_r_JOIN_INNER_6_1064_e, 0);

    struct timeval tv_r_Filter_5_233323_s, tv_r_Filter_5_233323_e;
    gettimeofday(&tv_r_Filter_5_233323_s, 0);
    SW_Filter_TD_5167(tbl_SerializeFromObject_TD_6359_input, tbl_Filter_TD_5167_output);
    gettimeofday(&tv_r_Filter_5_233323_e, 0);

    struct timeval tv_r_JOIN_INNER_5_253239_s, tv_r_JOIN_INNER_5_253239_e;
    gettimeofday(&tv_r_JOIN_INNER_5_253239_s, 0);
    SW_JOIN_INNER_TD_58(tbl_JOIN_INNER_TD_6433_output, tbl_Filter_TD_6141_output, tbl_JOIN_INNER_TD_58_output);
    gettimeofday(&tv_r_JOIN_INNER_5_253239_e, 0);

    struct timeval tv_r_JOIN_INNER_4_508691_s, tv_r_JOIN_INNER_4_508691_e;
    gettimeofday(&tv_r_JOIN_INNER_4_508691_s, 0);
    SW_JOIN_INNER_TD_4799(tbl_JOIN_INNER_TD_58_output, tbl_Filter_TD_5167_output, tbl_JOIN_INNER_TD_4799_output);
    gettimeofday(&tv_r_JOIN_INNER_4_508691_e, 0);

    struct timeval tv_r_Aggregate_3_498061_s, tv_r_Aggregate_3_498061_e;
    gettimeofday(&tv_r_Aggregate_3_498061_s, 0);
    SW_Aggregate_TD_3506(tbl_JOIN_INNER_TD_4799_output, tbl_Aggregate_TD_3506_output);
    gettimeofday(&tv_r_Aggregate_3_498061_e, 0);

    struct timeval tv_r_Sort_2_454472_s, tv_r_Sort_2_454472_e;
    gettimeofday(&tv_r_Sort_2_454472_s, 0);
    SW_Sort_TD_2371(tbl_Aggregate_TD_3506_output, tbl_Sort_TD_2371_output);
    gettimeofday(&tv_r_Sort_2_454472_e, 0);

    struct timeval tv_r_LocalLimit_1_423951_s, tv_r_LocalLimit_1_423951_e;
    gettimeofday(&tv_r_LocalLimit_1_423951_s, 0);
    SW_LocalLimit_TD_1112(tbl_Sort_TD_2371_output, tbl_LocalLimit_TD_1112_output);
    gettimeofday(&tv_r_LocalLimit_1_423951_e, 0);

    struct timeval tv_r_GlobalLimit_0_147634_s, tv_r_GlobalLimit_0_147634_e;
    gettimeofday(&tv_r_GlobalLimit_0_147634_s, 0);
    SW_GlobalLimit_TD_0120(tbl_LocalLimit_TD_1112_output, tbl_GlobalLimit_TD_0120_output);
    gettimeofday(&tv_r_GlobalLimit_0_147634_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_567346_s, &tv_r_Filter_11_567346_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12628_input: " << tbl_SerializeFromObject_TD_12628_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_700830_s, &tv_r_Filter_11_700830_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12536_input: " << tbl_SerializeFromObject_TD_12536_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_881053_s, &tv_r_Filter_10_881053_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11166_input: " << tbl_SerializeFromObject_TD_11166_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_34463_s, &tv_r_JOIN_INNER_10_34463_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11420_output: " << tbl_Filter_TD_11420_output.getNumRow() << " " << "tbl_Filter_TD_11308_output: " << tbl_Filter_TD_11308_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_500095_s, &tv_r_Filter_9_500095_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10923_input: " << tbl_SerializeFromObject_TD_10923_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_441503_s, &tv_r_JOIN_INNER_9_441503_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10622_output: " << tbl_JOIN_INNER_TD_10622_output.getNumRow() << " " << "tbl_Filter_TD_10679_output: " << tbl_Filter_TD_10679_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_16564_s, &tv_r_Filter_8_16564_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9617_input: " << tbl_SerializeFromObject_TD_9617_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_264279_s, &tv_r_JOIN_INNER_8_264279_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_984_output: " << tbl_JOIN_INNER_TD_984_output.getNumRow() << " " << "tbl_Filter_TD_9497_output: " << tbl_Filter_TD_9497_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_508658_s, &tv_r_Filter_7_508658_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8622_input: " << tbl_SerializeFromObject_TD_8622_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_85837_s, &tv_r_JOIN_INNER_7_85837_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8315_output: " << tbl_JOIN_INNER_TD_8315_output.getNumRow() << " " << "tbl_Filter_TD_8635_output: " << tbl_Filter_TD_8635_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_998070_s, &tv_r_Filter_6_998070_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7210_input: " << tbl_SerializeFromObject_TD_7210_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_1064_s, &tv_r_JOIN_INNER_6_1064_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7266_output: " << tbl_JOIN_INNER_TD_7266_output.getNumRow() << " " << "tbl_Filter_TD_774_output: " << tbl_Filter_TD_774_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_233323_s, &tv_r_Filter_5_233323_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6359_input: " << tbl_SerializeFromObject_TD_6359_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_253239_s, &tv_r_JOIN_INNER_5_253239_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6433_output: " << tbl_JOIN_INNER_TD_6433_output.getNumRow() << " " << "tbl_Filter_TD_6141_output: " << tbl_Filter_TD_6141_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_508691_s, &tv_r_JOIN_INNER_4_508691_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_58_output: " << tbl_JOIN_INNER_TD_58_output.getNumRow() << " " << "tbl_Filter_TD_5167_output: " << tbl_Filter_TD_5167_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_498061_s, &tv_r_Aggregate_3_498061_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4799_output: " << tbl_JOIN_INNER_TD_4799_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_454472_s, &tv_r_Sort_2_454472_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3506_output: " << tbl_Aggregate_TD_3506_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_423951_s, &tv_r_LocalLimit_1_423951_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2371_output: " << tbl_Sort_TD_2371_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_147634_s, &tv_r_GlobalLimit_0_147634_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1112_output: " << tbl_LocalLimit_TD_1112_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.3153808 * 1000 << "ms" << std::endl; 
    return 0; 
}
