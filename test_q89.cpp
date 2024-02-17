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

#include "cfgFunc_q89.hpp" 
#include "q89.hpp" 

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
    std::cout << "NOTE:running query #89\n."; 
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
    Table tbl_GlobalLimit_TD_0863_output("tbl_GlobalLimit_TD_0863_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0863_output.allocateHost();
    Table tbl_LocalLimit_TD_1348_output("tbl_LocalLimit_TD_1348_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1348_output.allocateHost();
    Table tbl_Sort_TD_2336_output("tbl_Sort_TD_2336_output", 6100000, 8, "");
    tbl_Sort_TD_2336_output.allocateHost();
    Table tbl_Filter_TD_3912_output("tbl_Filter_TD_3912_output", 6100000, 8, "");
    tbl_Filter_TD_3912_output.allocateHost();
    Table tbl_Window_TD_4198_output("tbl_Window_TD_4198_output", 6100000, 9, "");
    tbl_Window_TD_4198_output.allocateHost();
    Table tbl_Aggregate_TD_5940_output("tbl_Aggregate_TD_5940_output", 6100000, 8, "");
    tbl_Aggregate_TD_5940_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6795_output("tbl_JOIN_INNER_TD_6795_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_6795_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7324_output("tbl_JOIN_INNER_TD_7324_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7324_output.allocateHost();
    Table tbl_Filter_TD_7396_output("tbl_Filter_TD_7396_output", 6100000, 3, "");
    tbl_Filter_TD_7396_output.allocateHost();
    Table tbl_JOIN_INNER_TD_846_output("tbl_JOIN_INNER_TD_846_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_846_output.allocateHost();
    Table tbl_Filter_TD_8569_output("tbl_Filter_TD_8569_output", 6100000, 2, "");
    tbl_Filter_TD_8569_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8890_input;
    tbl_SerializeFromObject_TD_8890_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8890_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8890_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8890_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8890_input.allocateHost();
    tbl_SerializeFromObject_TD_8890_input.loadHost();
    Table tbl_Filter_TD_9168_output("tbl_Filter_TD_9168_output", 6100000, 4, "");
    tbl_Filter_TD_9168_output.allocateHost();
    Table tbl_Filter_TD_9668_output("tbl_Filter_TD_9668_output", 6100000, 4, "");
    tbl_Filter_TD_9668_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9941_input;
    tbl_SerializeFromObject_TD_9941_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9941_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9941_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9941_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9941_input.allocateHost();
    tbl_SerializeFromObject_TD_9941_input.loadHost();
    Table tbl_SerializeFromObject_TD_1037_input;
    tbl_SerializeFromObject_TD_1037_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1037_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1037_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1037_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1037_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1037_input.allocateHost();
    tbl_SerializeFromObject_TD_1037_input.loadHost();
    Table tbl_SerializeFromObject_TD_10698_input;
    tbl_SerializeFromObject_TD_10698_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10698_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10698_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10698_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10698_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10698_input.allocateHost();
    tbl_SerializeFromObject_TD_10698_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_978460_s, tv_r_Filter_9_978460_e;
    gettimeofday(&tv_r_Filter_9_978460_s, 0);
    SW_Filter_TD_9668(tbl_SerializeFromObject_TD_10698_input, tbl_Filter_TD_9668_output);
    gettimeofday(&tv_r_Filter_9_978460_e, 0);

    struct timeval tv_r_Filter_9_2882_s, tv_r_Filter_9_2882_e;
    gettimeofday(&tv_r_Filter_9_2882_s, 0);
    SW_Filter_TD_9168(tbl_SerializeFromObject_TD_1037_input, tbl_Filter_TD_9168_output);
    gettimeofday(&tv_r_Filter_9_2882_e, 0);

    struct timeval tv_r_Filter_8_716510_s, tv_r_Filter_8_716510_e;
    gettimeofday(&tv_r_Filter_8_716510_s, 0);
    SW_Filter_TD_8569(tbl_SerializeFromObject_TD_9941_input, tbl_Filter_TD_8569_output);
    gettimeofday(&tv_r_Filter_8_716510_e, 0);

    struct timeval tv_r_JOIN_INNER_8_692603_s, tv_r_JOIN_INNER_8_692603_e;
    gettimeofday(&tv_r_JOIN_INNER_8_692603_s, 0);
    SW_JOIN_INNER_TD_846(tbl_Filter_TD_9168_output, tbl_Filter_TD_9668_output, tbl_JOIN_INNER_TD_846_output);
    gettimeofday(&tv_r_JOIN_INNER_8_692603_e, 0);

    struct timeval tv_r_Filter_7_77671_s, tv_r_Filter_7_77671_e;
    gettimeofday(&tv_r_Filter_7_77671_s, 0);
    SW_Filter_TD_7396(tbl_SerializeFromObject_TD_8890_input, tbl_Filter_TD_7396_output);
    gettimeofday(&tv_r_Filter_7_77671_e, 0);

    struct timeval tv_r_JOIN_INNER_7_833459_s, tv_r_JOIN_INNER_7_833459_e;
    gettimeofday(&tv_r_JOIN_INNER_7_833459_s, 0);
    SW_JOIN_INNER_TD_7324(tbl_JOIN_INNER_TD_846_output, tbl_Filter_TD_8569_output, tbl_JOIN_INNER_TD_7324_output);
    gettimeofday(&tv_r_JOIN_INNER_7_833459_e, 0);

    struct timeval tv_r_JOIN_INNER_6_552701_s, tv_r_JOIN_INNER_6_552701_e;
    gettimeofday(&tv_r_JOIN_INNER_6_552701_s, 0);
    SW_JOIN_INNER_TD_6795(tbl_JOIN_INNER_TD_7324_output, tbl_Filter_TD_7396_output, tbl_JOIN_INNER_TD_6795_output);
    gettimeofday(&tv_r_JOIN_INNER_6_552701_e, 0);

    struct timeval tv_r_Aggregate_5_131954_s, tv_r_Aggregate_5_131954_e;
    gettimeofday(&tv_r_Aggregate_5_131954_s, 0);
    SW_Aggregate_TD_5940(tbl_JOIN_INNER_TD_6795_output, tbl_Aggregate_TD_5940_output);
    gettimeofday(&tv_r_Aggregate_5_131954_e, 0);

    struct timeval tv_r_Window_4_676344_s, tv_r_Window_4_676344_e;
    gettimeofday(&tv_r_Window_4_676344_s, 0);
    SW_Window_TD_4198(tbl_Aggregate_TD_5940_output, tbl_Window_TD_4198_output);
    gettimeofday(&tv_r_Window_4_676344_e, 0);

    struct timeval tv_r_Filter_3_42603_s, tv_r_Filter_3_42603_e;
    gettimeofday(&tv_r_Filter_3_42603_s, 0);
    SW_Filter_TD_3912(tbl_Window_TD_4198_output, tbl_Filter_TD_3912_output);
    gettimeofday(&tv_r_Filter_3_42603_e, 0);

    struct timeval tv_r_Sort_2_449852_s, tv_r_Sort_2_449852_e;
    gettimeofday(&tv_r_Sort_2_449852_s, 0);
    SW_Sort_TD_2336(tbl_Filter_TD_3912_output, tbl_Sort_TD_2336_output);
    gettimeofday(&tv_r_Sort_2_449852_e, 0);

    struct timeval tv_r_LocalLimit_1_676529_s, tv_r_LocalLimit_1_676529_e;
    gettimeofday(&tv_r_LocalLimit_1_676529_s, 0);
    SW_LocalLimit_TD_1348(tbl_Sort_TD_2336_output, tbl_LocalLimit_TD_1348_output);
    gettimeofday(&tv_r_LocalLimit_1_676529_e, 0);

    struct timeval tv_r_GlobalLimit_0_31561_s, tv_r_GlobalLimit_0_31561_e;
    gettimeofday(&tv_r_GlobalLimit_0_31561_s, 0);
    SW_GlobalLimit_TD_0863(tbl_LocalLimit_TD_1348_output, tbl_GlobalLimit_TD_0863_output);
    gettimeofday(&tv_r_GlobalLimit_0_31561_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_978460_s, &tv_r_Filter_9_978460_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10698_input: " << tbl_SerializeFromObject_TD_10698_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_2882_s, &tv_r_Filter_9_2882_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1037_input: " << tbl_SerializeFromObject_TD_1037_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_716510_s, &tv_r_Filter_8_716510_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9941_input: " << tbl_SerializeFromObject_TD_9941_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_692603_s, &tv_r_JOIN_INNER_8_692603_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9168_output: " << tbl_Filter_TD_9168_output.getNumRow() << " " << "tbl_Filter_TD_9668_output: " << tbl_Filter_TD_9668_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_77671_s, &tv_r_Filter_7_77671_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8890_input: " << tbl_SerializeFromObject_TD_8890_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_833459_s, &tv_r_JOIN_INNER_7_833459_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_846_output: " << tbl_JOIN_INNER_TD_846_output.getNumRow() << " " << "tbl_Filter_TD_8569_output: " << tbl_Filter_TD_8569_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_552701_s, &tv_r_JOIN_INNER_6_552701_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7324_output: " << tbl_JOIN_INNER_TD_7324_output.getNumRow() << " " << "tbl_Filter_TD_7396_output: " << tbl_Filter_TD_7396_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_131954_s, &tv_r_Aggregate_5_131954_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6795_output: " << tbl_JOIN_INNER_TD_6795_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_676344_s, &tv_r_Window_4_676344_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5940_output: " << tbl_Aggregate_TD_5940_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_42603_s, &tv_r_Filter_3_42603_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4198_output: " << tbl_Window_TD_4198_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_449852_s, &tv_r_Sort_2_449852_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3912_output: " << tbl_Filter_TD_3912_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_676529_s, &tv_r_LocalLimit_1_676529_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2336_output: " << tbl_Sort_TD_2336_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_31561_s, &tv_r_GlobalLimit_0_31561_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1348_output: " << tbl_LocalLimit_TD_1348_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.9051599 * 1000 << "ms" << std::endl; 
    return 0; 
}
