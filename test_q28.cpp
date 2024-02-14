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

#include "cfgFunc_q28.hpp" 
#include "q28.hpp" 

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
    std::cout << "NOTE:running query #28\n."; 
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
    Table tbl_JOIN_CROSS_TD_0377_output("tbl_JOIN_CROSS_TD_0377_output", 6100000, 18, "");
    tbl_JOIN_CROSS_TD_0377_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_1342_output("tbl_JOIN_CROSS_TD_1342_output", 6100000, 15, "");
    tbl_JOIN_CROSS_TD_1342_output.allocateHost();
    Table tbl_Aggregate_TD_1986_output("tbl_Aggregate_TD_1986_output", 6100000, 3, "");
    tbl_Aggregate_TD_1986_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_2888_output("tbl_JOIN_CROSS_TD_2888_output", 6100000, 12, "");
    tbl_JOIN_CROSS_TD_2888_output.allocateHost();
    Table tbl_Aggregate_TD_274_output("tbl_Aggregate_TD_274_output", 6100000, 3, "");
    tbl_Aggregate_TD_274_output.allocateHost();
    Table tbl_Filter_TD_2376_output("tbl_Filter_TD_2376_output", 6100000, 1, "");
    tbl_Filter_TD_2376_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_3877_output("tbl_JOIN_CROSS_TD_3877_output", 6100000, 9, "");
    tbl_JOIN_CROSS_TD_3877_output.allocateHost();
    Table tbl_Aggregate_TD_327_output("tbl_Aggregate_TD_327_output", 6100000, 3, "");
    tbl_Aggregate_TD_327_output.allocateHost();
    Table tbl_Filter_TD_3990_output("tbl_Filter_TD_3990_output", 6100000, 1, "");
    tbl_Filter_TD_3990_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3727_input;
    tbl_SerializeFromObject_TD_3727_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_3727_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_3727_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_3727_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_3727_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_3727_input.allocateHost();
    tbl_SerializeFromObject_TD_3727_input.loadHost();
    Table tbl_JOIN_CROSS_TD_4861_output("tbl_JOIN_CROSS_TD_4861_output", 6100000, 6, "");
    tbl_JOIN_CROSS_TD_4861_output.allocateHost();
    Table tbl_Aggregate_TD_4650_output("tbl_Aggregate_TD_4650_output", 6100000, 3, "");
    tbl_Aggregate_TD_4650_output.allocateHost();
    Table tbl_Filter_TD_4787_output("tbl_Filter_TD_4787_output", 6100000, 1, "");
    tbl_Filter_TD_4787_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4340_input;
    tbl_SerializeFromObject_TD_4340_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_4340_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_4340_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_4340_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_4340_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_4340_input.allocateHost();
    tbl_SerializeFromObject_TD_4340_input.loadHost();
    Table tbl_Aggregate_TD_541_output("tbl_Aggregate_TD_541_output", 6100000, 3, "");
    tbl_Aggregate_TD_541_output.allocateHost();
    Table tbl_Aggregate_TD_5879_output("tbl_Aggregate_TD_5879_output", 6100000, 3, "");
    tbl_Aggregate_TD_5879_output.allocateHost();
    Table tbl_Filter_TD_5124_output("tbl_Filter_TD_5124_output", 6100000, 1, "");
    tbl_Filter_TD_5124_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5119_input;
    tbl_SerializeFromObject_TD_5119_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_5119_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_5119_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_5119_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_5119_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_5119_input.allocateHost();
    tbl_SerializeFromObject_TD_5119_input.loadHost();
    Table tbl_Filter_TD_6259_output("tbl_Filter_TD_6259_output", 6100000, 1, "");
    tbl_Filter_TD_6259_output.allocateHost();
    Table tbl_Filter_TD_6669_output("tbl_Filter_TD_6669_output", 6100000, 1, "");
    tbl_Filter_TD_6669_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6823_input;
    tbl_SerializeFromObject_TD_6823_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6823_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_6823_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_6823_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_6823_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_6823_input.allocateHost();
    tbl_SerializeFromObject_TD_6823_input.loadHost();
    Table tbl_SerializeFromObject_TD_7330_input;
    tbl_SerializeFromObject_TD_7330_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_7330_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_7330_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_7330_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_7330_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_7330_input.allocateHost();
    tbl_SerializeFromObject_TD_7330_input.loadHost();
    Table tbl_SerializeFromObject_TD_77_input;
    tbl_SerializeFromObject_TD_77_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_77_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_77_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_77_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_77_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_77_input.allocateHost();
    tbl_SerializeFromObject_TD_77_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_968610_s, tv_r_Filter_6_968610_e;
    gettimeofday(&tv_r_Filter_6_968610_s, 0);
    SW_Filter_TD_6669(tbl_SerializeFromObject_TD_77_input, tbl_Filter_TD_6669_output);
    gettimeofday(&tv_r_Filter_6_968610_e, 0);

    struct timeval tv_r_Filter_6_32116_s, tv_r_Filter_6_32116_e;
    gettimeofday(&tv_r_Filter_6_32116_s, 0);
    SW_Filter_TD_6259(tbl_SerializeFromObject_TD_7330_input, tbl_Filter_TD_6259_output);
    gettimeofday(&tv_r_Filter_6_32116_e, 0);

    struct timeval tv_r_Filter_5_969799_s, tv_r_Filter_5_969799_e;
    gettimeofday(&tv_r_Filter_5_969799_s, 0);
    SW_Filter_TD_5124(tbl_SerializeFromObject_TD_6823_input, tbl_Filter_TD_5124_output);
    gettimeofday(&tv_r_Filter_5_969799_e, 0);

    struct timeval tv_r_Aggregate_5_24791_s, tv_r_Aggregate_5_24791_e;
    gettimeofday(&tv_r_Aggregate_5_24791_s, 0);
    SW_Aggregate_TD_5879(tbl_Filter_TD_6669_output, tbl_Aggregate_TD_5879_output);
    gettimeofday(&tv_r_Aggregate_5_24791_e, 0);

    struct timeval tv_r_Aggregate_5_612319_s, tv_r_Aggregate_5_612319_e;
    gettimeofday(&tv_r_Aggregate_5_612319_s, 0);
    SW_Aggregate_TD_541(tbl_Filter_TD_6259_output, tbl_Aggregate_TD_541_output);
    gettimeofday(&tv_r_Aggregate_5_612319_e, 0);

    struct timeval tv_r_Filter_4_339994_s, tv_r_Filter_4_339994_e;
    gettimeofday(&tv_r_Filter_4_339994_s, 0);
    SW_Filter_TD_4787(tbl_SerializeFromObject_TD_5119_input, tbl_Filter_TD_4787_output);
    gettimeofday(&tv_r_Filter_4_339994_e, 0);

    struct timeval tv_r_Aggregate_4_84137_s, tv_r_Aggregate_4_84137_e;
    gettimeofday(&tv_r_Aggregate_4_84137_s, 0);
    SW_Aggregate_TD_4650(tbl_Filter_TD_5124_output, tbl_Aggregate_TD_4650_output);
    gettimeofday(&tv_r_Aggregate_4_84137_e, 0);

    struct timeval tv_r_JOIN_CROSS_4_12715_s, tv_r_JOIN_CROSS_4_12715_e;
    gettimeofday(&tv_r_JOIN_CROSS_4_12715_s, 0);
    SW_JOIN_CROSS_TD_4861(tbl_Aggregate_TD_541_output, tbl_Aggregate_TD_5879_output, tbl_JOIN_CROSS_TD_4861_output);
    gettimeofday(&tv_r_JOIN_CROSS_4_12715_e, 0);

    struct timeval tv_r_Filter_3_927964_s, tv_r_Filter_3_927964_e;
    gettimeofday(&tv_r_Filter_3_927964_s, 0);
    SW_Filter_TD_3990(tbl_SerializeFromObject_TD_4340_input, tbl_Filter_TD_3990_output);
    gettimeofday(&tv_r_Filter_3_927964_e, 0);

    struct timeval tv_r_Aggregate_3_501411_s, tv_r_Aggregate_3_501411_e;
    gettimeofday(&tv_r_Aggregate_3_501411_s, 0);
    SW_Aggregate_TD_327(tbl_Filter_TD_4787_output, tbl_Aggregate_TD_327_output);
    gettimeofday(&tv_r_Aggregate_3_501411_e, 0);

    struct timeval tv_r_JOIN_CROSS_3_756333_s, tv_r_JOIN_CROSS_3_756333_e;
    gettimeofday(&tv_r_JOIN_CROSS_3_756333_s, 0);
    SW_JOIN_CROSS_TD_3877(tbl_JOIN_CROSS_TD_4861_output, tbl_Aggregate_TD_4650_output, tbl_JOIN_CROSS_TD_3877_output);
    gettimeofday(&tv_r_JOIN_CROSS_3_756333_e, 0);

    struct timeval tv_r_Filter_2_908587_s, tv_r_Filter_2_908587_e;
    gettimeofday(&tv_r_Filter_2_908587_s, 0);
    SW_Filter_TD_2376(tbl_SerializeFromObject_TD_3727_input, tbl_Filter_TD_2376_output);
    gettimeofday(&tv_r_Filter_2_908587_e, 0);

    struct timeval tv_r_Aggregate_2_500679_s, tv_r_Aggregate_2_500679_e;
    gettimeofday(&tv_r_Aggregate_2_500679_s, 0);
    SW_Aggregate_TD_274(tbl_Filter_TD_3990_output, tbl_Aggregate_TD_274_output);
    gettimeofday(&tv_r_Aggregate_2_500679_e, 0);

    struct timeval tv_r_JOIN_CROSS_2_873904_s, tv_r_JOIN_CROSS_2_873904_e;
    gettimeofday(&tv_r_JOIN_CROSS_2_873904_s, 0);
    SW_JOIN_CROSS_TD_2888(tbl_JOIN_CROSS_TD_3877_output, tbl_Aggregate_TD_327_output, tbl_JOIN_CROSS_TD_2888_output);
    gettimeofday(&tv_r_JOIN_CROSS_2_873904_e, 0);

    struct timeval tv_r_Aggregate_1_148589_s, tv_r_Aggregate_1_148589_e;
    gettimeofday(&tv_r_Aggregate_1_148589_s, 0);
    SW_Aggregate_TD_1986(tbl_Filter_TD_2376_output, tbl_Aggregate_TD_1986_output);
    gettimeofday(&tv_r_Aggregate_1_148589_e, 0);

    struct timeval tv_r_JOIN_CROSS_1_775276_s, tv_r_JOIN_CROSS_1_775276_e;
    gettimeofday(&tv_r_JOIN_CROSS_1_775276_s, 0);
    SW_JOIN_CROSS_TD_1342(tbl_JOIN_CROSS_TD_2888_output, tbl_Aggregate_TD_274_output, tbl_JOIN_CROSS_TD_1342_output);
    gettimeofday(&tv_r_JOIN_CROSS_1_775276_e, 0);

    struct timeval tv_r_JOIN_CROSS_0_413361_s, tv_r_JOIN_CROSS_0_413361_e;
    gettimeofday(&tv_r_JOIN_CROSS_0_413361_s, 0);
    SW_JOIN_CROSS_TD_0377(tbl_JOIN_CROSS_TD_1342_output, tbl_Aggregate_TD_1986_output, tbl_JOIN_CROSS_TD_0377_output);
    gettimeofday(&tv_r_JOIN_CROSS_0_413361_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_968610_s, &tv_r_Filter_6_968610_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_77_input: " << tbl_SerializeFromObject_TD_77_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_32116_s, &tv_r_Filter_6_32116_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7330_input: " << tbl_SerializeFromObject_TD_7330_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_969799_s, &tv_r_Filter_5_969799_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6823_input: " << tbl_SerializeFromObject_TD_6823_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_24791_s, &tv_r_Aggregate_5_24791_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6669_output: " << tbl_Filter_TD_6669_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_612319_s, &tv_r_Aggregate_5_612319_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6259_output: " << tbl_Filter_TD_6259_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_339994_s, &tv_r_Filter_4_339994_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5119_input: " << tbl_SerializeFromObject_TD_5119_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_84137_s, &tv_r_Aggregate_4_84137_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5124_output: " << tbl_Filter_TD_5124_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_4: " << tvdiff(&tv_r_JOIN_CROSS_4_12715_s, &tv_r_JOIN_CROSS_4_12715_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_541_output: " << tbl_Aggregate_TD_541_output.getNumRow() << " " << "tbl_Aggregate_TD_5879_output: " << tbl_Aggregate_TD_5879_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_927964_s, &tv_r_Filter_3_927964_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4340_input: " << tbl_SerializeFromObject_TD_4340_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_501411_s, &tv_r_Aggregate_3_501411_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4787_output: " << tbl_Filter_TD_4787_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_3: " << tvdiff(&tv_r_JOIN_CROSS_3_756333_s, &tv_r_JOIN_CROSS_3_756333_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_4861_output: " << tbl_JOIN_CROSS_TD_4861_output.getNumRow() << " " << "tbl_Aggregate_TD_4650_output: " << tbl_Aggregate_TD_4650_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_908587_s, &tv_r_Filter_2_908587_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3727_input: " << tbl_SerializeFromObject_TD_3727_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_500679_s, &tv_r_Aggregate_2_500679_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3990_output: " << tbl_Filter_TD_3990_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_2: " << tvdiff(&tv_r_JOIN_CROSS_2_873904_s, &tv_r_JOIN_CROSS_2_873904_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_3877_output: " << tbl_JOIN_CROSS_TD_3877_output.getNumRow() << " " << "tbl_Aggregate_TD_327_output: " << tbl_Aggregate_TD_327_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_148589_s, &tv_r_Aggregate_1_148589_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2376_output: " << tbl_Filter_TD_2376_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_1: " << tvdiff(&tv_r_JOIN_CROSS_1_775276_s, &tv_r_JOIN_CROSS_1_775276_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_2888_output: " << tbl_JOIN_CROSS_TD_2888_output.getNumRow() << " " << "tbl_Aggregate_TD_274_output: " << tbl_Aggregate_TD_274_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_0: " << tvdiff(&tv_r_JOIN_CROSS_0_413361_s, &tv_r_JOIN_CROSS_0_413361_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_1342_output: " << tbl_JOIN_CROSS_TD_1342_output.getNumRow() << " " << "tbl_Aggregate_TD_1986_output: " << tbl_Aggregate_TD_1986_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 5.744966 * 1000 << "ms" << std::endl; 
    return 0; 
}
