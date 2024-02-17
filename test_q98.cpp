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

#include "cfgFunc_q98.hpp" 
#include "q98.hpp" 

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
    std::cout << "NOTE:running query #98\n."; 
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
    Table tbl_Sort_TD_0284_output("tbl_Sort_TD_0284_output", 6100000, 7, "");
    tbl_Sort_TD_0284_output.allocateHost();
    Table tbl_Project_TD_1481_output("tbl_Project_TD_1481_output", 6100000, 7, "");
    tbl_Project_TD_1481_output.allocateHost();
    Table tbl_Window_TD_2156_output("tbl_Window_TD_2156_output", 6100000, 9, "");
    tbl_Window_TD_2156_output.allocateHost();
    Table tbl_Aggregate_TD_3853_output("tbl_Aggregate_TD_3853_output", 6100000, 8, "");
    tbl_Aggregate_TD_3853_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4286_output("tbl_JOIN_INNER_TD_4286_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4286_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5863_output("tbl_JOIN_INNER_TD_5863_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5863_output.allocateHost();
    Table tbl_Filter_TD_5388_output("tbl_Filter_TD_5388_output", 6100000, 1, "");
    tbl_Filter_TD_5388_output.allocateHost();
    Table tbl_Filter_TD_624_output("tbl_Filter_TD_624_output", 6100000, 3, "");
    tbl_Filter_TD_624_output.allocateHost();
    Table tbl_Filter_TD_6750_output("tbl_Filter_TD_6750_output", 6100000, 6, "");
    tbl_Filter_TD_6750_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6732_input;
    tbl_SerializeFromObject_TD_6732_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6732_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6732_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_6732_input.allocateHost();
    tbl_SerializeFromObject_TD_6732_input.loadHost();
    Table tbl_SerializeFromObject_TD_7326_input;
    tbl_SerializeFromObject_TD_7326_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7326_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7326_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_7326_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_7326_input.allocateHost();
    tbl_SerializeFromObject_TD_7326_input.loadHost();
    Table tbl_SerializeFromObject_TD_7922_input;
    tbl_SerializeFromObject_TD_7922_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_7922_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7922_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7922_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7922_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_7922_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7922_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7922_input.allocateHost();
    tbl_SerializeFromObject_TD_7922_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_721991_s, tv_r_Filter_6_721991_e;
    gettimeofday(&tv_r_Filter_6_721991_s, 0);
    SW_Filter_TD_6750(tbl_SerializeFromObject_TD_7922_input, tbl_Filter_TD_6750_output);
    gettimeofday(&tv_r_Filter_6_721991_e, 0);

    struct timeval tv_r_Filter_6_599793_s, tv_r_Filter_6_599793_e;
    gettimeofday(&tv_r_Filter_6_599793_s, 0);
    SW_Filter_TD_624(tbl_SerializeFromObject_TD_7326_input, tbl_Filter_TD_624_output);
    gettimeofday(&tv_r_Filter_6_599793_e, 0);

    struct timeval tv_r_Filter_5_224554_s, tv_r_Filter_5_224554_e;
    gettimeofday(&tv_r_Filter_5_224554_s, 0);
    SW_Filter_TD_5388(tbl_SerializeFromObject_TD_6732_input, tbl_Filter_TD_5388_output);
    gettimeofday(&tv_r_Filter_5_224554_e, 0);

    struct timeval tv_r_JOIN_INNER_5_815919_s, tv_r_JOIN_INNER_5_815919_e;
    gettimeofday(&tv_r_JOIN_INNER_5_815919_s, 0);
    SW_JOIN_INNER_TD_5863(tbl_Filter_TD_624_output, tbl_Filter_TD_6750_output, tbl_JOIN_INNER_TD_5863_output);
    gettimeofday(&tv_r_JOIN_INNER_5_815919_e, 0);

    struct timeval tv_r_JOIN_INNER_4_743364_s, tv_r_JOIN_INNER_4_743364_e;
    gettimeofday(&tv_r_JOIN_INNER_4_743364_s, 0);
    SW_JOIN_INNER_TD_4286(tbl_JOIN_INNER_TD_5863_output, tbl_Filter_TD_5388_output, tbl_JOIN_INNER_TD_4286_output);
    gettimeofday(&tv_r_JOIN_INNER_4_743364_e, 0);

    struct timeval tv_r_Aggregate_3_39876_s, tv_r_Aggregate_3_39876_e;
    gettimeofday(&tv_r_Aggregate_3_39876_s, 0);
    SW_Aggregate_TD_3853(tbl_JOIN_INNER_TD_4286_output, tbl_Aggregate_TD_3853_output);
    gettimeofday(&tv_r_Aggregate_3_39876_e, 0);

    struct timeval tv_r_Window_2_575264_s, tv_r_Window_2_575264_e;
    gettimeofday(&tv_r_Window_2_575264_s, 0);
    SW_Window_TD_2156(tbl_Aggregate_TD_3853_output, tbl_Window_TD_2156_output);
    gettimeofday(&tv_r_Window_2_575264_e, 0);

    struct timeval tv_r_Project_1_150719_s, tv_r_Project_1_150719_e;
    gettimeofday(&tv_r_Project_1_150719_s, 0);
    SW_Project_TD_1481(tbl_Window_TD_2156_output, tbl_Project_TD_1481_output);
    gettimeofday(&tv_r_Project_1_150719_e, 0);

    struct timeval tv_r_Sort_0_477929_s, tv_r_Sort_0_477929_e;
    gettimeofday(&tv_r_Sort_0_477929_s, 0);
    SW_Sort_TD_0284(tbl_Project_TD_1481_output, tbl_Sort_TD_0284_output);
    gettimeofday(&tv_r_Sort_0_477929_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_721991_s, &tv_r_Filter_6_721991_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7922_input: " << tbl_SerializeFromObject_TD_7922_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_599793_s, &tv_r_Filter_6_599793_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7326_input: " << tbl_SerializeFromObject_TD_7326_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_224554_s, &tv_r_Filter_5_224554_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6732_input: " << tbl_SerializeFromObject_TD_6732_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_815919_s, &tv_r_JOIN_INNER_5_815919_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_624_output: " << tbl_Filter_TD_624_output.getNumRow() << " " << "tbl_Filter_TD_6750_output: " << tbl_Filter_TD_6750_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_743364_s, &tv_r_JOIN_INNER_4_743364_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5863_output: " << tbl_JOIN_INNER_TD_5863_output.getNumRow() << " " << "tbl_Filter_TD_5388_output: " << tbl_Filter_TD_5388_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_39876_s, &tv_r_Aggregate_3_39876_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4286_output: " << tbl_JOIN_INNER_TD_4286_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_2: " << tvdiff(&tv_r_Window_2_575264_s, &tv_r_Window_2_575264_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3853_output: " << tbl_Aggregate_TD_3853_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_150719_s, &tv_r_Project_1_150719_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_2156_output: " << tbl_Window_TD_2156_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_477929_s, &tv_r_Sort_0_477929_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1481_output: " << tbl_Project_TD_1481_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.91649866 * 1000 << "ms" << std::endl; 
    return 0; 
}
