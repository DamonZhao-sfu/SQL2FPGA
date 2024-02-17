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

#include "cfgFunc_q65.hpp" 
#include "q65.hpp" 

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
    std::cout << "NOTE:running query #65\n."; 
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
    Table tbl_GlobalLimit_TD_0708_output("tbl_GlobalLimit_TD_0708_output", 6100000, 6, "");
    tbl_GlobalLimit_TD_0708_output.allocateHost();
    Table tbl_LocalLimit_TD_148_output("tbl_LocalLimit_TD_148_output", 6100000, 6, "");
    tbl_LocalLimit_TD_148_output.allocateHost();
    Table tbl_Sort_TD_2968_output("tbl_Sort_TD_2968_output", 6100000, 6, "");
    tbl_Sort_TD_2968_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3541_output("tbl_JOIN_INNER_TD_3541_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_3541_output.allocateHost();
    Table tbl_JOIN_INNER_TD_418_output("tbl_JOIN_INNER_TD_418_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_418_output.allocateHost();
    Table tbl_Aggregate_TD_438_output("tbl_Aggregate_TD_438_output", 6100000, 2, "");
    tbl_Aggregate_TD_438_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5543_output("tbl_JOIN_INNER_TD_5543_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5543_output.allocateHost();
    Table tbl_Filter_TD_5491_output("tbl_Filter_TD_5491_output", 6100000, 5, "");
    tbl_Filter_TD_5491_output.allocateHost();
    Table tbl_Aggregate_TD_538_output("tbl_Aggregate_TD_538_output", 6100000, 2, "");
    tbl_Aggregate_TD_538_output.allocateHost();
    Table tbl_Filter_TD_6343_output("tbl_Filter_TD_6343_output", 6100000, 2, "");
    tbl_Filter_TD_6343_output.allocateHost();
    Table tbl_Filter_TD_663_output("tbl_Filter_TD_663_output", 6100000, 3, "");
    tbl_Filter_TD_663_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6849_input;
    tbl_SerializeFromObject_TD_6849_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_6849_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6849_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6849_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_6849_input.addCol("i_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_6849_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6849_input.allocateHost();
    tbl_SerializeFromObject_TD_6849_input.loadHost();
    Table tbl_JOIN_INNER_TD_6130_output("tbl_JOIN_INNER_TD_6130_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6130_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7279_input;
    tbl_SerializeFromObject_TD_7279_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7279_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7279_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7279_input.allocateHost();
    tbl_SerializeFromObject_TD_7279_input.loadHost();
    Table tbl_Aggregate_TD_7996_output("tbl_Aggregate_TD_7996_output", 6100000, 3, "");
    tbl_Aggregate_TD_7996_output.allocateHost();
    Table tbl_Filter_TD_7289_output("tbl_Filter_TD_7289_output", 6100000, 4, "");
    tbl_Filter_TD_7289_output.allocateHost();
    Table tbl_Filter_TD_7434_output("tbl_Filter_TD_7434_output", 6100000, 1, "");
    tbl_Filter_TD_7434_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8608_output("tbl_JOIN_INNER_TD_8608_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8608_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8387_input;
    tbl_SerializeFromObject_TD_8387_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8387_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8387_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_8387_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8387_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_8387_input.allocateHost();
    tbl_SerializeFromObject_TD_8387_input.loadHost();
    Table tbl_SerializeFromObject_TD_8241_input;
    tbl_SerializeFromObject_TD_8241_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8241_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8241_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8241_input.allocateHost();
    tbl_SerializeFromObject_TD_8241_input.loadHost();
    Table tbl_Filter_TD_9587_output("tbl_Filter_TD_9587_output", 6100000, 4, "");
    tbl_Filter_TD_9587_output.allocateHost();
    Table tbl_Filter_TD_9123_output("tbl_Filter_TD_9123_output", 6100000, 1, "");
    tbl_Filter_TD_9123_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10154_input;
    tbl_SerializeFromObject_TD_10154_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10154_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10154_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10154_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10154_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10154_input.allocateHost();
    tbl_SerializeFromObject_TD_10154_input.loadHost();
    Table tbl_SerializeFromObject_TD_10568_input;
    tbl_SerializeFromObject_TD_10568_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10568_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10568_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_10568_input.allocateHost();
    tbl_SerializeFromObject_TD_10568_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_268523_s, tv_r_Filter_9_268523_e;
    gettimeofday(&tv_r_Filter_9_268523_s, 0);
    SW_Filter_TD_9123(tbl_SerializeFromObject_TD_10568_input, tbl_Filter_TD_9123_output);
    gettimeofday(&tv_r_Filter_9_268523_e, 0);

    struct timeval tv_r_Filter_9_398809_s, tv_r_Filter_9_398809_e;
    gettimeofday(&tv_r_Filter_9_398809_s, 0);
    SW_Filter_TD_9587(tbl_SerializeFromObject_TD_10154_input, tbl_Filter_TD_9587_output);
    gettimeofday(&tv_r_Filter_9_398809_e, 0);

    struct timeval tv_r_JOIN_INNER_8_146423_s, tv_r_JOIN_INNER_8_146423_e;
    gettimeofday(&tv_r_JOIN_INNER_8_146423_s, 0);
    SW_JOIN_INNER_TD_8608(tbl_Filter_TD_9587_output, tbl_Filter_TD_9123_output, tbl_JOIN_INNER_TD_8608_output);
    gettimeofday(&tv_r_JOIN_INNER_8_146423_e, 0);

    struct timeval tv_r_Filter_7_30558_s, tv_r_Filter_7_30558_e;
    gettimeofday(&tv_r_Filter_7_30558_s, 0);
    SW_Filter_TD_7434(tbl_SerializeFromObject_TD_8241_input, tbl_Filter_TD_7434_output);
    gettimeofday(&tv_r_Filter_7_30558_e, 0);

    struct timeval tv_r_Filter_7_398181_s, tv_r_Filter_7_398181_e;
    gettimeofday(&tv_r_Filter_7_398181_s, 0);
    SW_Filter_TD_7289(tbl_SerializeFromObject_TD_8387_input, tbl_Filter_TD_7289_output);
    gettimeofday(&tv_r_Filter_7_398181_e, 0);

    struct timeval tv_r_Aggregate_7_645296_s, tv_r_Aggregate_7_645296_e;
    gettimeofday(&tv_r_Aggregate_7_645296_s, 0);
    SW_Aggregate_TD_7996(tbl_JOIN_INNER_TD_8608_output, tbl_Aggregate_TD_7996_output);
    gettimeofday(&tv_r_Aggregate_7_645296_e, 0);

    struct timeval tv_r_JOIN_INNER_6_887967_s, tv_r_JOIN_INNER_6_887967_e;
    gettimeofday(&tv_r_JOIN_INNER_6_887967_s, 0);
    SW_JOIN_INNER_TD_6130(tbl_Filter_TD_7289_output, tbl_Filter_TD_7434_output, tbl_JOIN_INNER_TD_6130_output);
    gettimeofday(&tv_r_JOIN_INNER_6_887967_e, 0);

    struct timeval tv_r_Filter_6_848502_s, tv_r_Filter_6_848502_e;
    gettimeofday(&tv_r_Filter_6_848502_s, 0);
    SW_Filter_TD_663(tbl_Aggregate_TD_7996_output, tbl_Filter_TD_663_output);
    gettimeofday(&tv_r_Filter_6_848502_e, 0);

    struct timeval tv_r_Filter_6_55969_s, tv_r_Filter_6_55969_e;
    gettimeofday(&tv_r_Filter_6_55969_s, 0);
    SW_Filter_TD_6343(tbl_SerializeFromObject_TD_7279_input, tbl_Filter_TD_6343_output);
    gettimeofday(&tv_r_Filter_6_55969_e, 0);

    struct timeval tv_r_Aggregate_5_940360_s, tv_r_Aggregate_5_940360_e;
    gettimeofday(&tv_r_Aggregate_5_940360_s, 0);
    SW_Aggregate_TD_538(tbl_JOIN_INNER_TD_6130_output, tbl_Aggregate_TD_538_output);
    gettimeofday(&tv_r_Aggregate_5_940360_e, 0);

    struct timeval tv_r_Filter_5_614166_s, tv_r_Filter_5_614166_e;
    gettimeofday(&tv_r_Filter_5_614166_s, 0);
    SW_Filter_TD_5491(tbl_SerializeFromObject_TD_6849_input, tbl_Filter_TD_5491_output);
    gettimeofday(&tv_r_Filter_5_614166_e, 0);

    struct timeval tv_r_JOIN_INNER_5_556368_s, tv_r_JOIN_INNER_5_556368_e;
    gettimeofday(&tv_r_JOIN_INNER_5_556368_s, 0);
    SW_JOIN_INNER_TD_5543(tbl_Filter_TD_6343_output, tbl_Filter_TD_663_output, tbl_JOIN_INNER_TD_5543_output);
    gettimeofday(&tv_r_JOIN_INNER_5_556368_e, 0);

    struct timeval tv_r_Aggregate_4_392970_s, tv_r_Aggregate_4_392970_e;
    gettimeofday(&tv_r_Aggregate_4_392970_s, 0);
    SW_Aggregate_TD_438(tbl_Aggregate_TD_538_output, tbl_Aggregate_TD_438_output);
    gettimeofday(&tv_r_Aggregate_4_392970_e, 0);

    struct timeval tv_r_JOIN_INNER_4_310531_s, tv_r_JOIN_INNER_4_310531_e;
    gettimeofday(&tv_r_JOIN_INNER_4_310531_s, 0);
    SW_JOIN_INNER_TD_418(tbl_JOIN_INNER_TD_5543_output, tbl_Filter_TD_5491_output, tbl_JOIN_INNER_TD_418_output);
    gettimeofday(&tv_r_JOIN_INNER_4_310531_e, 0);

    struct timeval tv_r_JOIN_INNER_3_280278_s, tv_r_JOIN_INNER_3_280278_e;
    gettimeofday(&tv_r_JOIN_INNER_3_280278_s, 0);
    SW_JOIN_INNER_TD_3541(tbl_JOIN_INNER_TD_418_output, tbl_Aggregate_TD_438_output, tbl_JOIN_INNER_TD_3541_output);
    gettimeofday(&tv_r_JOIN_INNER_3_280278_e, 0);

    struct timeval tv_r_Sort_2_596302_s, tv_r_Sort_2_596302_e;
    gettimeofday(&tv_r_Sort_2_596302_s, 0);
    SW_Sort_TD_2968(tbl_JOIN_INNER_TD_3541_output, tbl_Sort_TD_2968_output);
    gettimeofday(&tv_r_Sort_2_596302_e, 0);

    struct timeval tv_r_LocalLimit_1_527525_s, tv_r_LocalLimit_1_527525_e;
    gettimeofday(&tv_r_LocalLimit_1_527525_s, 0);
    SW_LocalLimit_TD_148(tbl_Sort_TD_2968_output, tbl_LocalLimit_TD_148_output);
    gettimeofday(&tv_r_LocalLimit_1_527525_e, 0);

    struct timeval tv_r_GlobalLimit_0_162052_s, tv_r_GlobalLimit_0_162052_e;
    gettimeofday(&tv_r_GlobalLimit_0_162052_s, 0);
    SW_GlobalLimit_TD_0708(tbl_LocalLimit_TD_148_output, tbl_GlobalLimit_TD_0708_output);
    gettimeofday(&tv_r_GlobalLimit_0_162052_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_268523_s, &tv_r_Filter_9_268523_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10568_input: " << tbl_SerializeFromObject_TD_10568_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_398809_s, &tv_r_Filter_9_398809_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10154_input: " << tbl_SerializeFromObject_TD_10154_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_146423_s, &tv_r_JOIN_INNER_8_146423_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9587_output: " << tbl_Filter_TD_9587_output.getNumRow() << " " << "tbl_Filter_TD_9123_output: " << tbl_Filter_TD_9123_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_30558_s, &tv_r_Filter_7_30558_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8241_input: " << tbl_SerializeFromObject_TD_8241_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_398181_s, &tv_r_Filter_7_398181_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8387_input: " << tbl_SerializeFromObject_TD_8387_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_645296_s, &tv_r_Aggregate_7_645296_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8608_output: " << tbl_JOIN_INNER_TD_8608_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_887967_s, &tv_r_JOIN_INNER_6_887967_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7289_output: " << tbl_Filter_TD_7289_output.getNumRow() << " " << "tbl_Filter_TD_7434_output: " << tbl_Filter_TD_7434_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_848502_s, &tv_r_Filter_6_848502_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7996_output: " << tbl_Aggregate_TD_7996_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_55969_s, &tv_r_Filter_6_55969_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7279_input: " << tbl_SerializeFromObject_TD_7279_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_940360_s, &tv_r_Aggregate_5_940360_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6130_output: " << tbl_JOIN_INNER_TD_6130_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_614166_s, &tv_r_Filter_5_614166_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6849_input: " << tbl_SerializeFromObject_TD_6849_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_556368_s, &tv_r_JOIN_INNER_5_556368_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6343_output: " << tbl_Filter_TD_6343_output.getNumRow() << " " << "tbl_Filter_TD_663_output: " << tbl_Filter_TD_663_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_392970_s, &tv_r_Aggregate_4_392970_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_538_output: " << tbl_Aggregate_TD_538_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_310531_s, &tv_r_JOIN_INNER_4_310531_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5543_output: " << tbl_JOIN_INNER_TD_5543_output.getNumRow() << " " << "tbl_Filter_TD_5491_output: " << tbl_Filter_TD_5491_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_280278_s, &tv_r_JOIN_INNER_3_280278_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_418_output: " << tbl_JOIN_INNER_TD_418_output.getNumRow() << " " << "tbl_Aggregate_TD_438_output: " << tbl_Aggregate_TD_438_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_596302_s, &tv_r_Sort_2_596302_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3541_output: " << tbl_JOIN_INNER_TD_3541_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_527525_s, &tv_r_LocalLimit_1_527525_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2968_output: " << tbl_Sort_TD_2968_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_162052_s, &tv_r_GlobalLimit_0_162052_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_148_output: " << tbl_LocalLimit_TD_148_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.7088698 * 1000 << "ms" << std::endl; 
    return 0; 
}
