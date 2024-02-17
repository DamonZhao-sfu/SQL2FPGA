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

#include "cfgFunc_q47.hpp" 
#include "q47.hpp" 

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
    std::cout << "NOTE:running query #47\n."; 
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
    Table tbl_GlobalLimit_TD_0910_output("tbl_GlobalLimit_TD_0910_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_0910_output.allocateHost();
    Table tbl_LocalLimit_TD_1604_output("tbl_LocalLimit_TD_1604_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1604_output.allocateHost();
    Table tbl_Sort_TD_2392_output("tbl_Sort_TD_2392_output", 6100000, 10, "");
    tbl_Sort_TD_2392_output.allocateHost();
    Table tbl_Project_TD_3198_output("tbl_Project_TD_3198_output", 6100000, 10, "");
    tbl_Project_TD_3198_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4203_output("tbl_JOIN_INNER_TD_4203_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_4203_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5295_output("tbl_JOIN_INNER_TD_5295_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_5295_output.allocateHost();
    Table tbl_Project_TD_5547_output("tbl_Project_TD_5547_output", 6100000, 6, "");
    tbl_Project_TD_5547_output.allocateHost();
    Table tbl_Filter_TD_6751_output("tbl_Filter_TD_6751_output", 6100000, 9, "");
    tbl_Filter_TD_6751_output.allocateHost();
    Table tbl_Project_TD_6176_output("tbl_Project_TD_6176_output", 6100000, 6, "");
    tbl_Project_TD_6176_output.allocateHost();
    Table tbl_Window_TD_6188_output("tbl_Window_TD_6188_output", 6100000, 8, "");
    tbl_Window_TD_6188_output.allocateHost();
    Table tbl_Window_TD_7542_output("tbl_Window_TD_7542_output", 6100000, 10, "");
    tbl_Window_TD_7542_output.allocateHost();
    Table tbl_Window_TD_7922_output("tbl_Window_TD_7922_output", 6100000, 8, "");
    tbl_Window_TD_7922_output.allocateHost();
    Table tbl_Aggregate_TD_7942_output("tbl_Aggregate_TD_7942_output", 6100000, 7, "");
    tbl_Aggregate_TD_7942_output.allocateHost();
    Table tbl_Filter_TD_8853_output("tbl_Filter_TD_8853_output", 6100000, 9, "");
    tbl_Filter_TD_8853_output.allocateHost();
    Table tbl_Aggregate_TD_8312_output("tbl_Aggregate_TD_8312_output", 6100000, 7, "");
    tbl_Aggregate_TD_8312_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8425_output("tbl_JOIN_INNER_TD_8425_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8425_output.allocateHost();
    Table tbl_Window_TD_9913_output("tbl_Window_TD_9913_output", 6100000, 9, "");
    tbl_Window_TD_9913_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9859_output("tbl_JOIN_INNER_TD_9859_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9859_output.allocateHost();
    Table tbl_JOIN_INNER_TD_974_output("tbl_JOIN_INNER_TD_974_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_974_output.allocateHost();
    Table tbl_Filter_TD_9186_output("tbl_Filter_TD_9186_output", 6100000, 3, "");
    tbl_Filter_TD_9186_output.allocateHost();
    Table tbl_Aggregate_TD_1067_output("tbl_Aggregate_TD_1067_output", 6100000, 8, "");
    tbl_Aggregate_TD_1067_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1059_output("tbl_JOIN_INNER_TD_1059_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_1059_output.allocateHost();
    Table tbl_Filter_TD_10585_output("tbl_Filter_TD_10585_output", 6100000, 3, "");
    tbl_Filter_TD_10585_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10168_output("tbl_JOIN_INNER_TD_10168_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10168_output.allocateHost();
    Table tbl_Filter_TD_10454_output("tbl_Filter_TD_10454_output", 6100000, 3, "");
    tbl_Filter_TD_10454_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10126_input;
    tbl_SerializeFromObject_TD_10126_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10126_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10126_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10126_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10126_input.allocateHost();
    tbl_SerializeFromObject_TD_10126_input.loadHost();
    Table tbl_JOIN_INNER_TD_11649_output("tbl_JOIN_INNER_TD_11649_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_11649_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11390_output("tbl_JOIN_INNER_TD_11390_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_11390_output.allocateHost();
    Table tbl_Filter_TD_11828_output("tbl_Filter_TD_11828_output", 6100000, 3, "");
    tbl_Filter_TD_11828_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11249_input;
    tbl_SerializeFromObject_TD_11249_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11249_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_11249_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11249_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11249_input.allocateHost();
    tbl_SerializeFromObject_TD_11249_input.loadHost();
    Table tbl_Filter_TD_11784_output("tbl_Filter_TD_11784_output", 6100000, 3, "");
    tbl_Filter_TD_11784_output.allocateHost();
    Table tbl_Filter_TD_11301_output("tbl_Filter_TD_11301_output", 6100000, 4, "");
    tbl_Filter_TD_11301_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11478_input;
    tbl_SerializeFromObject_TD_11478_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11478_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11478_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11478_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11478_input.allocateHost();
    tbl_SerializeFromObject_TD_11478_input.loadHost();
    Table tbl_JOIN_INNER_TD_12952_output("tbl_JOIN_INNER_TD_12952_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_12952_output.allocateHost();
    Table tbl_Filter_TD_1276_output("tbl_Filter_TD_1276_output", 6100000, 3, "");
    tbl_Filter_TD_1276_output.allocateHost();
    Table tbl_Filter_TD_12215_output("tbl_Filter_TD_12215_output", 6100000, 3, "");
    tbl_Filter_TD_12215_output.allocateHost();
    Table tbl_Filter_TD_12948_output("tbl_Filter_TD_12948_output", 6100000, 4, "");
    tbl_Filter_TD_12948_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12902_input;
    tbl_SerializeFromObject_TD_12902_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12902_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12902_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12902_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12902_input.allocateHost();
    tbl_SerializeFromObject_TD_12902_input.loadHost();
    Table tbl_SerializeFromObject_TD_12522_input;
    tbl_SerializeFromObject_TD_12522_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12522_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_12522_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12522_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12522_input.allocateHost();
    tbl_SerializeFromObject_TD_12522_input.loadHost();
    Table tbl_SerializeFromObject_TD_12771_input;
    tbl_SerializeFromObject_TD_12771_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12771_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12771_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12771_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12771_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12771_input.allocateHost();
    tbl_SerializeFromObject_TD_12771_input.loadHost();
    Table tbl_JOIN_INNER_TD_13213_output("tbl_JOIN_INNER_TD_13213_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_13213_output.allocateHost();
    Table tbl_Filter_TD_13273_output("tbl_Filter_TD_13273_output", 6100000, 3, "");
    tbl_Filter_TD_13273_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13842_input;
    tbl_SerializeFromObject_TD_13842_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13842_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_13842_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13842_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13842_input.allocateHost();
    tbl_SerializeFromObject_TD_13842_input.loadHost();
    Table tbl_SerializeFromObject_TD_13437_input;
    tbl_SerializeFromObject_TD_13437_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13437_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13437_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13437_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13437_input.allocateHost();
    tbl_SerializeFromObject_TD_13437_input.loadHost();
    Table tbl_SerializeFromObject_TD_13947_input;
    tbl_SerializeFromObject_TD_13947_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13947_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13947_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13947_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_13947_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_13947_input.allocateHost();
    tbl_SerializeFromObject_TD_13947_input.loadHost();
    Table tbl_Filter_TD_14512_output("tbl_Filter_TD_14512_output", 6100000, 3, "");
    tbl_Filter_TD_14512_output.allocateHost();
    Table tbl_Filter_TD_14290_output("tbl_Filter_TD_14290_output", 6100000, 4, "");
    tbl_Filter_TD_14290_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14493_input;
    tbl_SerializeFromObject_TD_14493_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_14493_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_14493_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_14493_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_14493_input.allocateHost();
    tbl_SerializeFromObject_TD_14493_input.loadHost();
    Table tbl_SerializeFromObject_TD_15719_input;
    tbl_SerializeFromObject_TD_15719_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_15719_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15719_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15719_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15719_input.allocateHost();
    tbl_SerializeFromObject_TD_15719_input.loadHost();
    Table tbl_SerializeFromObject_TD_15146_input;
    tbl_SerializeFromObject_TD_15146_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15146_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15146_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_15146_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_15146_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_15146_input.allocateHost();
    tbl_SerializeFromObject_TD_15146_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_511679_s, tv_r_Filter_14_511679_e;
    gettimeofday(&tv_r_Filter_14_511679_s, 0);
    SW_Filter_TD_14290(tbl_SerializeFromObject_TD_15146_input, tbl_Filter_TD_14290_output);
    gettimeofday(&tv_r_Filter_14_511679_e, 0);

    struct timeval tv_r_Filter_14_571650_s, tv_r_Filter_14_571650_e;
    gettimeofday(&tv_r_Filter_14_571650_s, 0);
    SW_Filter_TD_14512(tbl_SerializeFromObject_TD_15719_input, tbl_Filter_TD_14512_output);
    gettimeofday(&tv_r_Filter_14_571650_e, 0);

    struct timeval tv_r_Filter_13_838231_s, tv_r_Filter_13_838231_e;
    gettimeofday(&tv_r_Filter_13_838231_s, 0);
    SW_Filter_TD_13273(tbl_SerializeFromObject_TD_14493_input, tbl_Filter_TD_13273_output);
    gettimeofday(&tv_r_Filter_13_838231_e, 0);

    struct timeval tv_r_JOIN_INNER_13_710845_s, tv_r_JOIN_INNER_13_710845_e;
    gettimeofday(&tv_r_JOIN_INNER_13_710845_s, 0);
    SW_JOIN_INNER_TD_13213(tbl_Filter_TD_14512_output, tbl_Filter_TD_14290_output, tbl_JOIN_INNER_TD_13213_output);
    gettimeofday(&tv_r_JOIN_INNER_13_710845_e, 0);

    struct timeval tv_r_Filter_12_817586_s, tv_r_Filter_12_817586_e;
    gettimeofday(&tv_r_Filter_12_817586_s, 0);
    SW_Filter_TD_12948(tbl_SerializeFromObject_TD_13947_input, tbl_Filter_TD_12948_output);
    gettimeofday(&tv_r_Filter_12_817586_e, 0);

    struct timeval tv_r_Filter_12_266605_s, tv_r_Filter_12_266605_e;
    gettimeofday(&tv_r_Filter_12_266605_s, 0);
    SW_Filter_TD_12215(tbl_SerializeFromObject_TD_13437_input, tbl_Filter_TD_12215_output);
    gettimeofday(&tv_r_Filter_12_266605_e, 0);

    struct timeval tv_r_Filter_12_469768_s, tv_r_Filter_12_469768_e;
    gettimeofday(&tv_r_Filter_12_469768_s, 0);
    SW_Filter_TD_1276(tbl_SerializeFromObject_TD_13842_input, tbl_Filter_TD_1276_output);
    gettimeofday(&tv_r_Filter_12_469768_e, 0);

    struct timeval tv_r_JOIN_INNER_12_841114_s, tv_r_JOIN_INNER_12_841114_e;
    gettimeofday(&tv_r_JOIN_INNER_12_841114_s, 0);
    SW_JOIN_INNER_TD_12952(tbl_JOIN_INNER_TD_13213_output, tbl_Filter_TD_13273_output, tbl_JOIN_INNER_TD_12952_output);
    gettimeofday(&tv_r_JOIN_INNER_12_841114_e, 0);

    struct timeval tv_r_Filter_11_836288_s, tv_r_Filter_11_836288_e;
    gettimeofday(&tv_r_Filter_11_836288_s, 0);
    SW_Filter_TD_11301(tbl_SerializeFromObject_TD_12771_input, tbl_Filter_TD_11301_output);
    gettimeofday(&tv_r_Filter_11_836288_e, 0);

    struct timeval tv_r_Filter_11_794486_s, tv_r_Filter_11_794486_e;
    gettimeofday(&tv_r_Filter_11_794486_s, 0);
    SW_Filter_TD_11784(tbl_SerializeFromObject_TD_12522_input, tbl_Filter_TD_11784_output);
    gettimeofday(&tv_r_Filter_11_794486_e, 0);

    struct timeval tv_r_Filter_11_363223_s, tv_r_Filter_11_363223_e;
    gettimeofday(&tv_r_Filter_11_363223_s, 0);
    SW_Filter_TD_11828(tbl_SerializeFromObject_TD_12902_input, tbl_Filter_TD_11828_output);
    gettimeofday(&tv_r_Filter_11_363223_e, 0);

    struct timeval tv_r_JOIN_INNER_11_34029_s, tv_r_JOIN_INNER_11_34029_e;
    gettimeofday(&tv_r_JOIN_INNER_11_34029_s, 0);
    SW_JOIN_INNER_TD_11390(tbl_Filter_TD_12215_output, tbl_Filter_TD_12948_output, tbl_JOIN_INNER_TD_11390_output);
    gettimeofday(&tv_r_JOIN_INNER_11_34029_e, 0);

    struct timeval tv_r_JOIN_INNER_11_646363_s, tv_r_JOIN_INNER_11_646363_e;
    gettimeofday(&tv_r_JOIN_INNER_11_646363_s, 0);
    SW_JOIN_INNER_TD_11649(tbl_JOIN_INNER_TD_12952_output, tbl_Filter_TD_1276_output, tbl_JOIN_INNER_TD_11649_output);
    gettimeofday(&tv_r_JOIN_INNER_11_646363_e, 0);

    struct timeval tv_r_Filter_10_462164_s, tv_r_Filter_10_462164_e;
    gettimeofday(&tv_r_Filter_10_462164_s, 0);
    SW_Filter_TD_10454(tbl_SerializeFromObject_TD_11478_input, tbl_Filter_TD_10454_output);
    gettimeofday(&tv_r_Filter_10_462164_e, 0);

    struct timeval tv_r_JOIN_INNER_10_39457_s, tv_r_JOIN_INNER_10_39457_e;
    gettimeofday(&tv_r_JOIN_INNER_10_39457_s, 0);
    SW_JOIN_INNER_TD_10168(tbl_Filter_TD_11784_output, tbl_Filter_TD_11301_output, tbl_JOIN_INNER_TD_10168_output);
    gettimeofday(&tv_r_JOIN_INNER_10_39457_e, 0);

    struct timeval tv_r_Filter_10_116151_s, tv_r_Filter_10_116151_e;
    gettimeofday(&tv_r_Filter_10_116151_s, 0);
    SW_Filter_TD_10585(tbl_SerializeFromObject_TD_11249_input, tbl_Filter_TD_10585_output);
    gettimeofday(&tv_r_Filter_10_116151_e, 0);

    struct timeval tv_r_JOIN_INNER_10_207998_s, tv_r_JOIN_INNER_10_207998_e;
    gettimeofday(&tv_r_JOIN_INNER_10_207998_s, 0);
    SW_JOIN_INNER_TD_1059(tbl_JOIN_INNER_TD_11390_output, tbl_Filter_TD_11828_output, tbl_JOIN_INNER_TD_1059_output);
    gettimeofday(&tv_r_JOIN_INNER_10_207998_e, 0);

    struct timeval tv_r_Aggregate_10_332936_s, tv_r_Aggregate_10_332936_e;
    gettimeofday(&tv_r_Aggregate_10_332936_s, 0);
    SW_Aggregate_TD_1067(tbl_JOIN_INNER_TD_11649_output, tbl_Aggregate_TD_1067_output);
    gettimeofday(&tv_r_Aggregate_10_332936_e, 0);

    struct timeval tv_r_Filter_9_84956_s, tv_r_Filter_9_84956_e;
    gettimeofday(&tv_r_Filter_9_84956_s, 0);
    SW_Filter_TD_9186(tbl_SerializeFromObject_TD_10126_input, tbl_Filter_TD_9186_output);
    gettimeofday(&tv_r_Filter_9_84956_e, 0);

    struct timeval tv_r_JOIN_INNER_9_867325_s, tv_r_JOIN_INNER_9_867325_e;
    gettimeofday(&tv_r_JOIN_INNER_9_867325_s, 0);
    SW_JOIN_INNER_TD_974(tbl_JOIN_INNER_TD_10168_output, tbl_Filter_TD_10454_output, tbl_JOIN_INNER_TD_974_output);
    gettimeofday(&tv_r_JOIN_INNER_9_867325_e, 0);

    struct timeval tv_r_JOIN_INNER_9_656314_s, tv_r_JOIN_INNER_9_656314_e;
    gettimeofday(&tv_r_JOIN_INNER_9_656314_s, 0);
    SW_JOIN_INNER_TD_9859(tbl_JOIN_INNER_TD_1059_output, tbl_Filter_TD_10585_output, tbl_JOIN_INNER_TD_9859_output);
    gettimeofday(&tv_r_JOIN_INNER_9_656314_e, 0);

    struct timeval tv_r_Window_9_136854_s, tv_r_Window_9_136854_e;
    gettimeofday(&tv_r_Window_9_136854_s, 0);
    SW_Window_TD_9913(tbl_Aggregate_TD_1067_output, tbl_Window_TD_9913_output);
    gettimeofday(&tv_r_Window_9_136854_e, 0);

    struct timeval tv_r_JOIN_INNER_8_15925_s, tv_r_JOIN_INNER_8_15925_e;
    gettimeofday(&tv_r_JOIN_INNER_8_15925_s, 0);
    SW_JOIN_INNER_TD_8425(tbl_JOIN_INNER_TD_974_output, tbl_Filter_TD_9186_output, tbl_JOIN_INNER_TD_8425_output);
    gettimeofday(&tv_r_JOIN_INNER_8_15925_e, 0);

    struct timeval tv_r_Aggregate_8_516375_s, tv_r_Aggregate_8_516375_e;
    gettimeofday(&tv_r_Aggregate_8_516375_s, 0);
    SW_Aggregate_TD_8312(tbl_JOIN_INNER_TD_9859_output, tbl_Aggregate_TD_8312_output);
    gettimeofday(&tv_r_Aggregate_8_516375_e, 0);

    struct timeval tv_r_Filter_8_560479_s, tv_r_Filter_8_560479_e;
    gettimeofday(&tv_r_Filter_8_560479_s, 0);
    SW_Filter_TD_8853(tbl_Window_TD_9913_output, tbl_Filter_TD_8853_output);
    gettimeofday(&tv_r_Filter_8_560479_e, 0);

    struct timeval tv_r_Aggregate_7_593009_s, tv_r_Aggregate_7_593009_e;
    gettimeofday(&tv_r_Aggregate_7_593009_s, 0);
    SW_Aggregate_TD_7942(tbl_JOIN_INNER_TD_8425_output, tbl_Aggregate_TD_7942_output);
    gettimeofday(&tv_r_Aggregate_7_593009_e, 0);

    struct timeval tv_r_Window_7_250504_s, tv_r_Window_7_250504_e;
    gettimeofday(&tv_r_Window_7_250504_s, 0);
    SW_Window_TD_7922(tbl_Aggregate_TD_8312_output, tbl_Window_TD_7922_output);
    gettimeofday(&tv_r_Window_7_250504_e, 0);

    struct timeval tv_r_Window_7_924520_s, tv_r_Window_7_924520_e;
    gettimeofday(&tv_r_Window_7_924520_s, 0);
    SW_Window_TD_7542(tbl_Filter_TD_8853_output, tbl_Window_TD_7542_output);
    gettimeofday(&tv_r_Window_7_924520_e, 0);

    struct timeval tv_r_Window_6_737155_s, tv_r_Window_6_737155_e;
    gettimeofday(&tv_r_Window_6_737155_s, 0);
    SW_Window_TD_6188(tbl_Aggregate_TD_7942_output, tbl_Window_TD_6188_output);
    gettimeofday(&tv_r_Window_6_737155_e, 0);

    struct timeval tv_r_Project_6_833972_s, tv_r_Project_6_833972_e;
    gettimeofday(&tv_r_Project_6_833972_s, 0);
    SW_Project_TD_6176(tbl_Window_TD_7922_output, tbl_Project_TD_6176_output);
    gettimeofday(&tv_r_Project_6_833972_e, 0);

    struct timeval tv_r_Filter_6_237819_s, tv_r_Filter_6_237819_e;
    gettimeofday(&tv_r_Filter_6_237819_s, 0);
    SW_Filter_TD_6751(tbl_Window_TD_7542_output, tbl_Filter_TD_6751_output);
    gettimeofday(&tv_r_Filter_6_237819_e, 0);

    struct timeval tv_r_Project_5_21160_s, tv_r_Project_5_21160_e;
    gettimeofday(&tv_r_Project_5_21160_s, 0);
    SW_Project_TD_5547(tbl_Window_TD_6188_output, tbl_Project_TD_5547_output);
    gettimeofday(&tv_r_Project_5_21160_e, 0);

    struct timeval tv_r_JOIN_INNER_5_347122_s, tv_r_JOIN_INNER_5_347122_e;
    gettimeofday(&tv_r_JOIN_INNER_5_347122_s, 0);
    SW_JOIN_INNER_TD_5295(tbl_Filter_TD_6751_output, tbl_Project_TD_6176_output, tbl_JOIN_INNER_TD_5295_output);
    gettimeofday(&tv_r_JOIN_INNER_5_347122_e, 0);

    struct timeval tv_r_JOIN_INNER_4_932877_s, tv_r_JOIN_INNER_4_932877_e;
    gettimeofday(&tv_r_JOIN_INNER_4_932877_s, 0);
    SW_JOIN_INNER_TD_4203(tbl_JOIN_INNER_TD_5295_output, tbl_Project_TD_5547_output, tbl_JOIN_INNER_TD_4203_output);
    gettimeofday(&tv_r_JOIN_INNER_4_932877_e, 0);

    struct timeval tv_r_Project_3_701240_s, tv_r_Project_3_701240_e;
    gettimeofday(&tv_r_Project_3_701240_s, 0);
    SW_Project_TD_3198(tbl_JOIN_INNER_TD_4203_output, tbl_Project_TD_3198_output);
    gettimeofday(&tv_r_Project_3_701240_e, 0);

    struct timeval tv_r_Sort_2_443164_s, tv_r_Sort_2_443164_e;
    gettimeofday(&tv_r_Sort_2_443164_s, 0);
    SW_Sort_TD_2392(tbl_Project_TD_3198_output, tbl_Sort_TD_2392_output);
    gettimeofday(&tv_r_Sort_2_443164_e, 0);

    struct timeval tv_r_LocalLimit_1_518002_s, tv_r_LocalLimit_1_518002_e;
    gettimeofday(&tv_r_LocalLimit_1_518002_s, 0);
    SW_LocalLimit_TD_1604(tbl_Sort_TD_2392_output, tbl_LocalLimit_TD_1604_output);
    gettimeofday(&tv_r_LocalLimit_1_518002_e, 0);

    struct timeval tv_r_GlobalLimit_0_790644_s, tv_r_GlobalLimit_0_790644_e;
    gettimeofday(&tv_r_GlobalLimit_0_790644_s, 0);
    SW_GlobalLimit_TD_0910(tbl_LocalLimit_TD_1604_output, tbl_GlobalLimit_TD_0910_output);
    gettimeofday(&tv_r_GlobalLimit_0_790644_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_511679_s, &tv_r_Filter_14_511679_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15146_input: " << tbl_SerializeFromObject_TD_15146_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_571650_s, &tv_r_Filter_14_571650_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15719_input: " << tbl_SerializeFromObject_TD_15719_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_838231_s, &tv_r_Filter_13_838231_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14493_input: " << tbl_SerializeFromObject_TD_14493_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_710845_s, &tv_r_JOIN_INNER_13_710845_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14512_output: " << tbl_Filter_TD_14512_output.getNumRow() << " " << "tbl_Filter_TD_14290_output: " << tbl_Filter_TD_14290_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_817586_s, &tv_r_Filter_12_817586_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13947_input: " << tbl_SerializeFromObject_TD_13947_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_266605_s, &tv_r_Filter_12_266605_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13437_input: " << tbl_SerializeFromObject_TD_13437_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_469768_s, &tv_r_Filter_12_469768_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13842_input: " << tbl_SerializeFromObject_TD_13842_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_841114_s, &tv_r_JOIN_INNER_12_841114_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13213_output: " << tbl_JOIN_INNER_TD_13213_output.getNumRow() << " " << "tbl_Filter_TD_13273_output: " << tbl_Filter_TD_13273_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_836288_s, &tv_r_Filter_11_836288_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12771_input: " << tbl_SerializeFromObject_TD_12771_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_794486_s, &tv_r_Filter_11_794486_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12522_input: " << tbl_SerializeFromObject_TD_12522_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_363223_s, &tv_r_Filter_11_363223_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12902_input: " << tbl_SerializeFromObject_TD_12902_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_34029_s, &tv_r_JOIN_INNER_11_34029_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12215_output: " << tbl_Filter_TD_12215_output.getNumRow() << " " << "tbl_Filter_TD_12948_output: " << tbl_Filter_TD_12948_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_646363_s, &tv_r_JOIN_INNER_11_646363_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12952_output: " << tbl_JOIN_INNER_TD_12952_output.getNumRow() << " " << "tbl_Filter_TD_1276_output: " << tbl_Filter_TD_1276_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_462164_s, &tv_r_Filter_10_462164_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11478_input: " << tbl_SerializeFromObject_TD_11478_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_39457_s, &tv_r_JOIN_INNER_10_39457_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11784_output: " << tbl_Filter_TD_11784_output.getNumRow() << " " << "tbl_Filter_TD_11301_output: " << tbl_Filter_TD_11301_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_116151_s, &tv_r_Filter_10_116151_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11249_input: " << tbl_SerializeFromObject_TD_11249_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_207998_s, &tv_r_JOIN_INNER_10_207998_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11390_output: " << tbl_JOIN_INNER_TD_11390_output.getNumRow() << " " << "tbl_Filter_TD_11828_output: " << tbl_Filter_TD_11828_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_332936_s, &tv_r_Aggregate_10_332936_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11649_output: " << tbl_JOIN_INNER_TD_11649_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_84956_s, &tv_r_Filter_9_84956_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10126_input: " << tbl_SerializeFromObject_TD_10126_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_867325_s, &tv_r_JOIN_INNER_9_867325_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10168_output: " << tbl_JOIN_INNER_TD_10168_output.getNumRow() << " " << "tbl_Filter_TD_10454_output: " << tbl_Filter_TD_10454_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_656314_s, &tv_r_JOIN_INNER_9_656314_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1059_output: " << tbl_JOIN_INNER_TD_1059_output.getNumRow() << " " << "tbl_Filter_TD_10585_output: " << tbl_Filter_TD_10585_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_9: " << tvdiff(&tv_r_Window_9_136854_s, &tv_r_Window_9_136854_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1067_output: " << tbl_Aggregate_TD_1067_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_15925_s, &tv_r_JOIN_INNER_8_15925_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_974_output: " << tbl_JOIN_INNER_TD_974_output.getNumRow() << " " << "tbl_Filter_TD_9186_output: " << tbl_Filter_TD_9186_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_516375_s, &tv_r_Aggregate_8_516375_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9859_output: " << tbl_JOIN_INNER_TD_9859_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_560479_s, &tv_r_Filter_8_560479_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_9913_output: " << tbl_Window_TD_9913_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_593009_s, &tv_r_Aggregate_7_593009_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8425_output: " << tbl_JOIN_INNER_TD_8425_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_250504_s, &tv_r_Window_7_250504_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8312_output: " << tbl_Aggregate_TD_8312_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_924520_s, &tv_r_Window_7_924520_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8853_output: " << tbl_Filter_TD_8853_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_6: " << tvdiff(&tv_r_Window_6_737155_s, &tv_r_Window_6_737155_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7942_output: " << tbl_Aggregate_TD_7942_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_833972_s, &tv_r_Project_6_833972_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7922_output: " << tbl_Window_TD_7922_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_237819_s, &tv_r_Filter_6_237819_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7542_output: " << tbl_Window_TD_7542_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_21160_s, &tv_r_Project_5_21160_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_6188_output: " << tbl_Window_TD_6188_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_347122_s, &tv_r_JOIN_INNER_5_347122_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6751_output: " << tbl_Filter_TD_6751_output.getNumRow() << " " << "tbl_Project_TD_6176_output: " << tbl_Project_TD_6176_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_932877_s, &tv_r_JOIN_INNER_4_932877_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5295_output: " << tbl_JOIN_INNER_TD_5295_output.getNumRow() << " " << "tbl_Project_TD_5547_output: " << tbl_Project_TD_5547_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_701240_s, &tv_r_Project_3_701240_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4203_output: " << tbl_JOIN_INNER_TD_4203_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_443164_s, &tv_r_Sort_2_443164_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3198_output: " << tbl_Project_TD_3198_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_518002_s, &tv_r_LocalLimit_1_518002_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2392_output: " << tbl_Sort_TD_2392_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_790644_s, &tv_r_GlobalLimit_0_790644_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1604_output: " << tbl_LocalLimit_TD_1604_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.9578977 * 1000 << "ms" << std::endl; 
    return 0; 
}
