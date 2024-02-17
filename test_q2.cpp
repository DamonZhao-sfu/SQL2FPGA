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

#include "cfgFunc_q2.hpp" 
#include "q2.hpp" 

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
    std::cout << "NOTE:running query #2\n."; 
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
    Table tbl_Sort_TD_0721_output("tbl_Sort_TD_0721_output", 6100000, 8, "");
    tbl_Sort_TD_0721_output.allocateHost();
    Table tbl_Project_TD_1815_output("tbl_Project_TD_1815_output", 6100000, 8, "");
    tbl_Project_TD_1815_output.allocateHost();
    Table tbl_JOIN_INNER_TD_243_output("tbl_JOIN_INNER_TD_243_output", 6100000, 15, "");
    tbl_JOIN_INNER_TD_243_output.allocateHost();
    Table tbl_Project_TD_3247_output("tbl_Project_TD_3247_output", 6100000, 8, "");
    tbl_Project_TD_3247_output.allocateHost();
    Table tbl_Project_TD_3374_output("tbl_Project_TD_3374_output", 6100000, 8, "");
    tbl_Project_TD_3374_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4990_output("tbl_JOIN_INNER_TD_4990_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4990_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4959_output("tbl_JOIN_INNER_TD_4959_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4959_output.allocateHost();
    Table tbl_Aggregate_TD_585_output("tbl_Aggregate_TD_585_output", 6100000, 8, "");
    tbl_Aggregate_TD_585_output.allocateHost();
    Table tbl_Filter_TD_5167_output("tbl_Filter_TD_5167_output", 6100000, 1, "");
    tbl_Filter_TD_5167_output.allocateHost();
    Table tbl_Aggregate_TD_5119_output("tbl_Aggregate_TD_5119_output", 6100000, 8, "");
    tbl_Aggregate_TD_5119_output.allocateHost();
    Table tbl_Filter_TD_5216_output("tbl_Filter_TD_5216_output", 6100000, 1, "");
    tbl_Filter_TD_5216_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6266_output("tbl_JOIN_INNER_TD_6266_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6266_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6766_input;
    tbl_SerializeFromObject_TD_6766_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6766_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_6766_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6766_input.allocateHost();
    tbl_SerializeFromObject_TD_6766_input.loadHost();
    Table tbl_JOIN_INNER_TD_6891_output("tbl_JOIN_INNER_TD_6891_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6891_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6622_input;
    tbl_SerializeFromObject_TD_6622_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6622_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_6622_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6622_input.allocateHost();
    tbl_SerializeFromObject_TD_6622_input.loadHost();
    Table tbl_Union_TD_7148_output("tbl_Union_TD_7148_output", 6100000, 2, "");
    tbl_Union_TD_7148_output.allocateHost();
    Table tbl_Filter_TD_7688_output("tbl_Filter_TD_7688_output", 6100000, 3, "");
    tbl_Filter_TD_7688_output.allocateHost();
    Table tbl_Union_TD_7366_output("tbl_Union_TD_7366_output", 6100000, 2, "");
    tbl_Union_TD_7366_output.allocateHost();
    Table tbl_Filter_TD_7171_output("tbl_Filter_TD_7171_output", 6100000, 3, "");
    tbl_Filter_TD_7171_output.allocateHost();
    Table tbl_Project_TD_8262_output("tbl_Project_TD_8262_output", 6100000, 2, "");
    tbl_Project_TD_8262_output.allocateHost();
    Table tbl_Project_TD_8812_output("tbl_Project_TD_8812_output", 6100000, 2, "");
    tbl_Project_TD_8812_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8752_input;
    tbl_SerializeFromObject_TD_8752_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8752_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8752_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_8752_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8752_input.allocateHost();
    tbl_SerializeFromObject_TD_8752_input.loadHost();
    Table tbl_Project_TD_8599_output("tbl_Project_TD_8599_output", 6100000, 2, "");
    tbl_Project_TD_8599_output.allocateHost();
    Table tbl_Project_TD_8963_output("tbl_Project_TD_8963_output", 6100000, 2, "");
    tbl_Project_TD_8963_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8426_input;
    tbl_SerializeFromObject_TD_8426_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8426_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8426_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_8426_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8426_input.allocateHost();
    tbl_SerializeFromObject_TD_8426_input.loadHost();
    Table tbl_Filter_TD_9632_output("tbl_Filter_TD_9632_output", 6100000, 2, "");
    tbl_Filter_TD_9632_output.allocateHost();
    Table tbl_Filter_TD_9485_output("tbl_Filter_TD_9485_output", 6100000, 2, "");
    tbl_Filter_TD_9485_output.allocateHost();
    Table tbl_Filter_TD_9144_output("tbl_Filter_TD_9144_output", 6100000, 2, "");
    tbl_Filter_TD_9144_output.allocateHost();
    Table tbl_Filter_TD_9906_output("tbl_Filter_TD_9906_output", 6100000, 2, "");
    tbl_Filter_TD_9906_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1054_input;
    tbl_SerializeFromObject_TD_1054_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1054_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1054_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1054_input.allocateHost();
    tbl_SerializeFromObject_TD_1054_input.loadHost();
    Table tbl_SerializeFromObject_TD_10556_input;
    tbl_SerializeFromObject_TD_10556_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10556_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10556_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10556_input.allocateHost();
    tbl_SerializeFromObject_TD_10556_input.loadHost();
    Table tbl_SerializeFromObject_TD_10624_input;
    tbl_SerializeFromObject_TD_10624_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10624_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10624_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10624_input.allocateHost();
    tbl_SerializeFromObject_TD_10624_input.loadHost();
    Table tbl_SerializeFromObject_TD_10878_input;
    tbl_SerializeFromObject_TD_10878_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10878_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10878_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10878_input.allocateHost();
    tbl_SerializeFromObject_TD_10878_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_473503_s, tv_r_Filter_9_473503_e;
    gettimeofday(&tv_r_Filter_9_473503_s, 0);
    SW_Filter_TD_9906(tbl_SerializeFromObject_TD_10878_input, tbl_Filter_TD_9906_output);
    gettimeofday(&tv_r_Filter_9_473503_e, 0);

    struct timeval tv_r_Filter_9_416435_s, tv_r_Filter_9_416435_e;
    gettimeofday(&tv_r_Filter_9_416435_s, 0);
    SW_Filter_TD_9144(tbl_SerializeFromObject_TD_10624_input, tbl_Filter_TD_9144_output);
    gettimeofday(&tv_r_Filter_9_416435_e, 0);

    struct timeval tv_r_Filter_9_864029_s, tv_r_Filter_9_864029_e;
    gettimeofday(&tv_r_Filter_9_864029_s, 0);
    SW_Filter_TD_9485(tbl_SerializeFromObject_TD_10556_input, tbl_Filter_TD_9485_output);
    gettimeofday(&tv_r_Filter_9_864029_e, 0);

    struct timeval tv_r_Filter_9_153734_s, tv_r_Filter_9_153734_e;
    gettimeofday(&tv_r_Filter_9_153734_s, 0);
    SW_Filter_TD_9632(tbl_SerializeFromObject_TD_1054_input, tbl_Filter_TD_9632_output);
    gettimeofday(&tv_r_Filter_9_153734_e, 0);

    struct timeval tv_r_Project_8_311289_s, tv_r_Project_8_311289_e;
    gettimeofday(&tv_r_Project_8_311289_s, 0);
    SW_Project_TD_8963(tbl_Filter_TD_9906_output, tbl_Project_TD_8963_output);
    gettimeofday(&tv_r_Project_8_311289_e, 0);

    struct timeval tv_r_Project_8_231338_s, tv_r_Project_8_231338_e;
    gettimeofday(&tv_r_Project_8_231338_s, 0);
    SW_Project_TD_8599(tbl_Filter_TD_9144_output, tbl_Project_TD_8599_output);
    gettimeofday(&tv_r_Project_8_231338_e, 0);

    struct timeval tv_r_Project_8_489548_s, tv_r_Project_8_489548_e;
    gettimeofday(&tv_r_Project_8_489548_s, 0);
    SW_Project_TD_8812(tbl_Filter_TD_9485_output, tbl_Project_TD_8812_output);
    gettimeofday(&tv_r_Project_8_489548_e, 0);

    struct timeval tv_r_Project_8_107340_s, tv_r_Project_8_107340_e;
    gettimeofday(&tv_r_Project_8_107340_s, 0);
    SW_Project_TD_8262(tbl_Filter_TD_9632_output, tbl_Project_TD_8262_output);
    gettimeofday(&tv_r_Project_8_107340_e, 0);

    struct timeval tv_r_Filter_7_95120_s, tv_r_Filter_7_95120_e;
    gettimeofday(&tv_r_Filter_7_95120_s, 0);
    SW_Filter_TD_7171(tbl_SerializeFromObject_TD_8426_input, tbl_Filter_TD_7171_output);
    gettimeofday(&tv_r_Filter_7_95120_e, 0);

    struct timeval tv_r_Union_7_601551_s, tv_r_Union_7_601551_e;
    gettimeofday(&tv_r_Union_7_601551_s, 0);
    SW_Union_TD_7366(tbl_Project_TD_8599_output, tbl_Project_TD_8963_output, tbl_Union_TD_7366_output);
    gettimeofday(&tv_r_Union_7_601551_e, 0);

    struct timeval tv_r_Filter_7_595805_s, tv_r_Filter_7_595805_e;
    gettimeofday(&tv_r_Filter_7_595805_s, 0);
    SW_Filter_TD_7688(tbl_SerializeFromObject_TD_8752_input, tbl_Filter_TD_7688_output);
    gettimeofday(&tv_r_Filter_7_595805_e, 0);

    struct timeval tv_r_Union_7_935138_s, tv_r_Union_7_935138_e;
    gettimeofday(&tv_r_Union_7_935138_s, 0);
    SW_Union_TD_7148(tbl_Project_TD_8262_output, tbl_Project_TD_8812_output, tbl_Union_TD_7148_output);
    gettimeofday(&tv_r_Union_7_935138_e, 0);

    struct timeval tv_r_JOIN_INNER_6_669821_s, tv_r_JOIN_INNER_6_669821_e;
    gettimeofday(&tv_r_JOIN_INNER_6_669821_s, 0);
    SW_JOIN_INNER_TD_6891(tbl_Union_TD_7366_output, tbl_Filter_TD_7171_output, tbl_JOIN_INNER_TD_6891_output);
    gettimeofday(&tv_r_JOIN_INNER_6_669821_e, 0);

    struct timeval tv_r_JOIN_INNER_6_181504_s, tv_r_JOIN_INNER_6_181504_e;
    gettimeofday(&tv_r_JOIN_INNER_6_181504_s, 0);
    SW_JOIN_INNER_TD_6266(tbl_Union_TD_7148_output, tbl_Filter_TD_7688_output, tbl_JOIN_INNER_TD_6266_output);
    gettimeofday(&tv_r_JOIN_INNER_6_181504_e, 0);

    struct timeval tv_r_Filter_5_469102_s, tv_r_Filter_5_469102_e;
    gettimeofday(&tv_r_Filter_5_469102_s, 0);
    SW_Filter_TD_5216(tbl_SerializeFromObject_TD_6622_input, tbl_Filter_TD_5216_output);
    gettimeofday(&tv_r_Filter_5_469102_e, 0);

    struct timeval tv_r_Aggregate_5_867952_s, tv_r_Aggregate_5_867952_e;
    gettimeofday(&tv_r_Aggregate_5_867952_s, 0);
    SW_Aggregate_TD_5119(tbl_JOIN_INNER_TD_6891_output, tbl_Aggregate_TD_5119_output);
    gettimeofday(&tv_r_Aggregate_5_867952_e, 0);

    struct timeval tv_r_Filter_5_843733_s, tv_r_Filter_5_843733_e;
    gettimeofday(&tv_r_Filter_5_843733_s, 0);
    SW_Filter_TD_5167(tbl_SerializeFromObject_TD_6766_input, tbl_Filter_TD_5167_output);
    gettimeofday(&tv_r_Filter_5_843733_e, 0);

    struct timeval tv_r_Aggregate_5_432699_s, tv_r_Aggregate_5_432699_e;
    gettimeofday(&tv_r_Aggregate_5_432699_s, 0);
    SW_Aggregate_TD_585(tbl_JOIN_INNER_TD_6266_output, tbl_Aggregate_TD_585_output);
    gettimeofday(&tv_r_Aggregate_5_432699_e, 0);

    struct timeval tv_r_JOIN_INNER_4_682200_s, tv_r_JOIN_INNER_4_682200_e;
    gettimeofday(&tv_r_JOIN_INNER_4_682200_s, 0);
    SW_JOIN_INNER_TD_4959(tbl_Aggregate_TD_5119_output, tbl_Filter_TD_5216_output, tbl_JOIN_INNER_TD_4959_output);
    gettimeofday(&tv_r_JOIN_INNER_4_682200_e, 0);

    struct timeval tv_r_JOIN_INNER_4_880168_s, tv_r_JOIN_INNER_4_880168_e;
    gettimeofday(&tv_r_JOIN_INNER_4_880168_s, 0);
    SW_JOIN_INNER_TD_4990(tbl_Aggregate_TD_585_output, tbl_Filter_TD_5167_output, tbl_JOIN_INNER_TD_4990_output);
    gettimeofday(&tv_r_JOIN_INNER_4_880168_e, 0);

    struct timeval tv_r_Project_3_250315_s, tv_r_Project_3_250315_e;
    gettimeofday(&tv_r_Project_3_250315_s, 0);
    SW_Project_TD_3374(tbl_JOIN_INNER_TD_4959_output, tbl_Project_TD_3374_output);
    gettimeofday(&tv_r_Project_3_250315_e, 0);

    struct timeval tv_r_Project_3_23033_s, tv_r_Project_3_23033_e;
    gettimeofday(&tv_r_Project_3_23033_s, 0);
    SW_Project_TD_3247(tbl_JOIN_INNER_TD_4990_output, tbl_Project_TD_3247_output);
    gettimeofday(&tv_r_Project_3_23033_e, 0);

    struct timeval tv_r_JOIN_INNER_2_393127_s, tv_r_JOIN_INNER_2_393127_e;
    gettimeofday(&tv_r_JOIN_INNER_2_393127_s, 0);
    SW_JOIN_INNER_TD_243(tbl_Project_TD_3247_output, tbl_Project_TD_3374_output, tbl_JOIN_INNER_TD_243_output);
    gettimeofday(&tv_r_JOIN_INNER_2_393127_e, 0);

    struct timeval tv_r_Project_1_431092_s, tv_r_Project_1_431092_e;
    gettimeofday(&tv_r_Project_1_431092_s, 0);
    SW_Project_TD_1815(tbl_JOIN_INNER_TD_243_output, tbl_Project_TD_1815_output);
    gettimeofday(&tv_r_Project_1_431092_e, 0);

    struct timeval tv_r_Sort_0_547330_s, tv_r_Sort_0_547330_e;
    gettimeofday(&tv_r_Sort_0_547330_s, 0);
    SW_Sort_TD_0721(tbl_Project_TD_1815_output, tbl_Sort_TD_0721_output);
    gettimeofday(&tv_r_Sort_0_547330_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_473503_s, &tv_r_Filter_9_473503_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10878_input: " << tbl_SerializeFromObject_TD_10878_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_416435_s, &tv_r_Filter_9_416435_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10624_input: " << tbl_SerializeFromObject_TD_10624_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_864029_s, &tv_r_Filter_9_864029_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10556_input: " << tbl_SerializeFromObject_TD_10556_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_153734_s, &tv_r_Filter_9_153734_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1054_input: " << tbl_SerializeFromObject_TD_1054_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_311289_s, &tv_r_Project_8_311289_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9906_output: " << tbl_Filter_TD_9906_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_231338_s, &tv_r_Project_8_231338_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9144_output: " << tbl_Filter_TD_9144_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_489548_s, &tv_r_Project_8_489548_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9485_output: " << tbl_Filter_TD_9485_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_107340_s, &tv_r_Project_8_107340_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9632_output: " << tbl_Filter_TD_9632_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_95120_s, &tv_r_Filter_7_95120_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8426_input: " << tbl_SerializeFromObject_TD_8426_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_601551_s, &tv_r_Union_7_601551_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8599_output: " << tbl_Project_TD_8599_output.getNumRow() << " " << "tbl_Project_TD_8963_output: " << tbl_Project_TD_8963_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_595805_s, &tv_r_Filter_7_595805_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8752_input: " << tbl_SerializeFromObject_TD_8752_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_935138_s, &tv_r_Union_7_935138_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8262_output: " << tbl_Project_TD_8262_output.getNumRow() << " " << "tbl_Project_TD_8812_output: " << tbl_Project_TD_8812_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_669821_s, &tv_r_JOIN_INNER_6_669821_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7366_output: " << tbl_Union_TD_7366_output.getNumRow() << " " << "tbl_Filter_TD_7171_output: " << tbl_Filter_TD_7171_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_181504_s, &tv_r_JOIN_INNER_6_181504_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7148_output: " << tbl_Union_TD_7148_output.getNumRow() << " " << "tbl_Filter_TD_7688_output: " << tbl_Filter_TD_7688_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_469102_s, &tv_r_Filter_5_469102_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6622_input: " << tbl_SerializeFromObject_TD_6622_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_867952_s, &tv_r_Aggregate_5_867952_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6891_output: " << tbl_JOIN_INNER_TD_6891_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_843733_s, &tv_r_Filter_5_843733_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6766_input: " << tbl_SerializeFromObject_TD_6766_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_432699_s, &tv_r_Aggregate_5_432699_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6266_output: " << tbl_JOIN_INNER_TD_6266_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_682200_s, &tv_r_JOIN_INNER_4_682200_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5119_output: " << tbl_Aggregate_TD_5119_output.getNumRow() << " " << "tbl_Filter_TD_5216_output: " << tbl_Filter_TD_5216_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_880168_s, &tv_r_JOIN_INNER_4_880168_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_585_output: " << tbl_Aggregate_TD_585_output.getNumRow() << " " << "tbl_Filter_TD_5167_output: " << tbl_Filter_TD_5167_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_250315_s, &tv_r_Project_3_250315_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4959_output: " << tbl_JOIN_INNER_TD_4959_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_23033_s, &tv_r_Project_3_23033_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4990_output: " << tbl_JOIN_INNER_TD_4990_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_393127_s, &tv_r_JOIN_INNER_2_393127_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3247_output: " << tbl_Project_TD_3247_output.getNumRow() << " " << "tbl_Project_TD_3374_output: " << tbl_Project_TD_3374_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_431092_s, &tv_r_Project_1_431092_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_243_output: " << tbl_JOIN_INNER_TD_243_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_547330_s, &tv_r_Sort_0_547330_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1815_output: " << tbl_Project_TD_1815_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.389258 * 1000 << "ms" << std::endl; 
    return 0; 
}
