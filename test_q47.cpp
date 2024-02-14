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
    Table tbl_Sort_TD_2644_output("tbl_Sort_TD_2644_output", 6100000, 10, "");
    tbl_Sort_TD_2644_output.allocateHost();
    Table tbl_Project_TD_3545_output("tbl_Project_TD_3545_output", 6100000, 10, "");
    tbl_Project_TD_3545_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4587_output("tbl_JOIN_INNER_TD_4587_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_4587_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5380_output("tbl_JOIN_INNER_TD_5380_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_5380_output.allocateHost();
    Table tbl_Project_TD_5825_output("tbl_Project_TD_5825_output", 6100000, 6, "");
    tbl_Project_TD_5825_output.allocateHost();
    Table tbl_Filter_TD_6476_output("tbl_Filter_TD_6476_output", 6100000, 9, "");
    tbl_Filter_TD_6476_output.allocateHost();
    Table tbl_Project_TD_6491_output("tbl_Project_TD_6491_output", 6100000, 6, "");
    tbl_Project_TD_6491_output.allocateHost();
    Table tbl_Window_TD_6841_output("tbl_Window_TD_6841_output", 6100000, 8, "");
    tbl_Window_TD_6841_output.allocateHost();
    Table tbl_Window_TD_751_output("tbl_Window_TD_751_output", 6100000, 10, "");
    tbl_Window_TD_751_output.allocateHost();
    Table tbl_Window_TD_7143_output("tbl_Window_TD_7143_output", 6100000, 8, "");
    tbl_Window_TD_7143_output.allocateHost();
    Table tbl_Aggregate_TD_7589_output("tbl_Aggregate_TD_7589_output", 6100000, 7, "");
    tbl_Aggregate_TD_7589_output.allocateHost();
    Table tbl_Filter_TD_8435_output("tbl_Filter_TD_8435_output", 6100000, 9, "");
    tbl_Filter_TD_8435_output.allocateHost();
    Table tbl_Aggregate_TD_8481_output("tbl_Aggregate_TD_8481_output", 6100000, 7, "");
    tbl_Aggregate_TD_8481_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8104_output("tbl_JOIN_INNER_TD_8104_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8104_output.allocateHost();
    Table tbl_Window_TD_9139_output("tbl_Window_TD_9139_output", 6100000, 9, "");
    tbl_Window_TD_9139_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9379_output("tbl_JOIN_INNER_TD_9379_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9379_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9705_output("tbl_JOIN_INNER_TD_9705_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_9705_output.allocateHost();
    Table tbl_Filter_TD_9452_output("tbl_Filter_TD_9452_output", 6100000, 3, "");
    tbl_Filter_TD_9452_output.allocateHost();
    Table tbl_Aggregate_TD_10843_output("tbl_Aggregate_TD_10843_output", 6100000, 8, "");
    tbl_Aggregate_TD_10843_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10223_output("tbl_JOIN_INNER_TD_10223_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10223_output.allocateHost();
    Table tbl_Filter_TD_10408_output("tbl_Filter_TD_10408_output", 6100000, 3, "");
    tbl_Filter_TD_10408_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10246_output("tbl_JOIN_INNER_TD_10246_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10246_output.allocateHost();
    Table tbl_Filter_TD_10232_output("tbl_Filter_TD_10232_output", 6100000, 3, "");
    tbl_Filter_TD_10232_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10483_input;
    tbl_SerializeFromObject_TD_10483_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10483_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10483_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10483_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10483_input.allocateHost();
    tbl_SerializeFromObject_TD_10483_input.loadHost();
    Table tbl_JOIN_INNER_TD_11291_output("tbl_JOIN_INNER_TD_11291_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_11291_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11466_output("tbl_JOIN_INNER_TD_11466_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_11466_output.allocateHost();
    Table tbl_Filter_TD_11691_output("tbl_Filter_TD_11691_output", 6100000, 3, "");
    tbl_Filter_TD_11691_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11759_input;
    tbl_SerializeFromObject_TD_11759_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11759_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_11759_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11759_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11759_input.allocateHost();
    tbl_SerializeFromObject_TD_11759_input.loadHost();
    Table tbl_Filter_TD_11390_output("tbl_Filter_TD_11390_output", 6100000, 3, "");
    tbl_Filter_TD_11390_output.allocateHost();
    Table tbl_Filter_TD_11421_output("tbl_Filter_TD_11421_output", 6100000, 4, "");
    tbl_Filter_TD_11421_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11607_input;
    tbl_SerializeFromObject_TD_11607_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11607_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11607_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11607_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11607_input.allocateHost();
    tbl_SerializeFromObject_TD_11607_input.loadHost();
    Table tbl_JOIN_INNER_TD_12932_output("tbl_JOIN_INNER_TD_12932_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_12932_output.allocateHost();
    Table tbl_Filter_TD_1295_output("tbl_Filter_TD_1295_output", 6100000, 3, "");
    tbl_Filter_TD_1295_output.allocateHost();
    Table tbl_Filter_TD_12379_output("tbl_Filter_TD_12379_output", 6100000, 3, "");
    tbl_Filter_TD_12379_output.allocateHost();
    Table tbl_Filter_TD_12710_output("tbl_Filter_TD_12710_output", 6100000, 4, "");
    tbl_Filter_TD_12710_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12715_input;
    tbl_SerializeFromObject_TD_12715_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12715_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12715_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12715_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12715_input.allocateHost();
    tbl_SerializeFromObject_TD_12715_input.loadHost();
    Table tbl_SerializeFromObject_TD_1266_input;
    tbl_SerializeFromObject_TD_1266_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1266_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1266_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1266_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1266_input.allocateHost();
    tbl_SerializeFromObject_TD_1266_input.loadHost();
    Table tbl_SerializeFromObject_TD_12441_input;
    tbl_SerializeFromObject_TD_12441_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12441_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12441_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12441_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12441_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12441_input.allocateHost();
    tbl_SerializeFromObject_TD_12441_input.loadHost();
    Table tbl_JOIN_INNER_TD_13710_output("tbl_JOIN_INNER_TD_13710_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_13710_output.allocateHost();
    Table tbl_Filter_TD_13616_output("tbl_Filter_TD_13616_output", 6100000, 3, "");
    tbl_Filter_TD_13616_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13157_input;
    tbl_SerializeFromObject_TD_13157_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13157_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_13157_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13157_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13157_input.allocateHost();
    tbl_SerializeFromObject_TD_13157_input.loadHost();
    Table tbl_SerializeFromObject_TD_13672_input;
    tbl_SerializeFromObject_TD_13672_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13672_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13672_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13672_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13672_input.allocateHost();
    tbl_SerializeFromObject_TD_13672_input.loadHost();
    Table tbl_SerializeFromObject_TD_13308_input;
    tbl_SerializeFromObject_TD_13308_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13308_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13308_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13308_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_13308_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_13308_input.allocateHost();
    tbl_SerializeFromObject_TD_13308_input.loadHost();
    Table tbl_Filter_TD_1470_output("tbl_Filter_TD_1470_output", 6100000, 3, "");
    tbl_Filter_TD_1470_output.allocateHost();
    Table tbl_Filter_TD_14801_output("tbl_Filter_TD_14801_output", 6100000, 4, "");
    tbl_Filter_TD_14801_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14429_input;
    tbl_SerializeFromObject_TD_14429_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_14429_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_14429_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_14429_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_14429_input.allocateHost();
    tbl_SerializeFromObject_TD_14429_input.loadHost();
    Table tbl_SerializeFromObject_TD_15275_input;
    tbl_SerializeFromObject_TD_15275_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_15275_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15275_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15275_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15275_input.allocateHost();
    tbl_SerializeFromObject_TD_15275_input.loadHost();
    Table tbl_SerializeFromObject_TD_15210_input;
    tbl_SerializeFromObject_TD_15210_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15210_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15210_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_15210_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_15210_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_15210_input.allocateHost();
    tbl_SerializeFromObject_TD_15210_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_478917_s, tv_r_Filter_14_478917_e;
    gettimeofday(&tv_r_Filter_14_478917_s, 0);
    SW_Filter_TD_14801(tbl_SerializeFromObject_TD_15210_input, tbl_Filter_TD_14801_output);
    gettimeofday(&tv_r_Filter_14_478917_e, 0);

    struct timeval tv_r_Filter_14_509559_s, tv_r_Filter_14_509559_e;
    gettimeofday(&tv_r_Filter_14_509559_s, 0);
    SW_Filter_TD_1470(tbl_SerializeFromObject_TD_15275_input, tbl_Filter_TD_1470_output);
    gettimeofday(&tv_r_Filter_14_509559_e, 0);

    struct timeval tv_r_Filter_13_176641_s, tv_r_Filter_13_176641_e;
    gettimeofday(&tv_r_Filter_13_176641_s, 0);
    SW_Filter_TD_13616(tbl_SerializeFromObject_TD_14429_input, tbl_Filter_TD_13616_output);
    gettimeofday(&tv_r_Filter_13_176641_e, 0);

    struct timeval tv_r_JOIN_INNER_13_456990_s, tv_r_JOIN_INNER_13_456990_e;
    gettimeofday(&tv_r_JOIN_INNER_13_456990_s, 0);
    SW_JOIN_INNER_TD_13710(tbl_Filter_TD_1470_output, tbl_Filter_TD_14801_output, tbl_JOIN_INNER_TD_13710_output);
    gettimeofday(&tv_r_JOIN_INNER_13_456990_e, 0);

    struct timeval tv_r_Filter_12_193971_s, tv_r_Filter_12_193971_e;
    gettimeofday(&tv_r_Filter_12_193971_s, 0);
    SW_Filter_TD_12710(tbl_SerializeFromObject_TD_13308_input, tbl_Filter_TD_12710_output);
    gettimeofday(&tv_r_Filter_12_193971_e, 0);

    struct timeval tv_r_Filter_12_288903_s, tv_r_Filter_12_288903_e;
    gettimeofday(&tv_r_Filter_12_288903_s, 0);
    SW_Filter_TD_12379(tbl_SerializeFromObject_TD_13672_input, tbl_Filter_TD_12379_output);
    gettimeofday(&tv_r_Filter_12_288903_e, 0);

    struct timeval tv_r_Filter_12_539080_s, tv_r_Filter_12_539080_e;
    gettimeofday(&tv_r_Filter_12_539080_s, 0);
    SW_Filter_TD_1295(tbl_SerializeFromObject_TD_13157_input, tbl_Filter_TD_1295_output);
    gettimeofday(&tv_r_Filter_12_539080_e, 0);

    struct timeval tv_r_JOIN_INNER_12_364024_s, tv_r_JOIN_INNER_12_364024_e;
    gettimeofday(&tv_r_JOIN_INNER_12_364024_s, 0);
    SW_JOIN_INNER_TD_12932(tbl_JOIN_INNER_TD_13710_output, tbl_Filter_TD_13616_output, tbl_JOIN_INNER_TD_12932_output);
    gettimeofday(&tv_r_JOIN_INNER_12_364024_e, 0);

    struct timeval tv_r_Filter_11_810970_s, tv_r_Filter_11_810970_e;
    gettimeofday(&tv_r_Filter_11_810970_s, 0);
    SW_Filter_TD_11421(tbl_SerializeFromObject_TD_12441_input, tbl_Filter_TD_11421_output);
    gettimeofday(&tv_r_Filter_11_810970_e, 0);

    struct timeval tv_r_Filter_11_206545_s, tv_r_Filter_11_206545_e;
    gettimeofday(&tv_r_Filter_11_206545_s, 0);
    SW_Filter_TD_11390(tbl_SerializeFromObject_TD_1266_input, tbl_Filter_TD_11390_output);
    gettimeofday(&tv_r_Filter_11_206545_e, 0);

    struct timeval tv_r_Filter_11_44144_s, tv_r_Filter_11_44144_e;
    gettimeofday(&tv_r_Filter_11_44144_s, 0);
    SW_Filter_TD_11691(tbl_SerializeFromObject_TD_12715_input, tbl_Filter_TD_11691_output);
    gettimeofday(&tv_r_Filter_11_44144_e, 0);

    struct timeval tv_r_JOIN_INNER_11_535782_s, tv_r_JOIN_INNER_11_535782_e;
    gettimeofday(&tv_r_JOIN_INNER_11_535782_s, 0);
    SW_JOIN_INNER_TD_11466(tbl_Filter_TD_12379_output, tbl_Filter_TD_12710_output, tbl_JOIN_INNER_TD_11466_output);
    gettimeofday(&tv_r_JOIN_INNER_11_535782_e, 0);

    struct timeval tv_r_JOIN_INNER_11_816787_s, tv_r_JOIN_INNER_11_816787_e;
    gettimeofday(&tv_r_JOIN_INNER_11_816787_s, 0);
    SW_JOIN_INNER_TD_11291(tbl_JOIN_INNER_TD_12932_output, tbl_Filter_TD_1295_output, tbl_JOIN_INNER_TD_11291_output);
    gettimeofday(&tv_r_JOIN_INNER_11_816787_e, 0);

    struct timeval tv_r_Filter_10_237729_s, tv_r_Filter_10_237729_e;
    gettimeofday(&tv_r_Filter_10_237729_s, 0);
    SW_Filter_TD_10232(tbl_SerializeFromObject_TD_11607_input, tbl_Filter_TD_10232_output);
    gettimeofday(&tv_r_Filter_10_237729_e, 0);

    struct timeval tv_r_JOIN_INNER_10_671590_s, tv_r_JOIN_INNER_10_671590_e;
    gettimeofday(&tv_r_JOIN_INNER_10_671590_s, 0);
    SW_JOIN_INNER_TD_10246(tbl_Filter_TD_11390_output, tbl_Filter_TD_11421_output, tbl_JOIN_INNER_TD_10246_output);
    gettimeofday(&tv_r_JOIN_INNER_10_671590_e, 0);

    struct timeval tv_r_Filter_10_543890_s, tv_r_Filter_10_543890_e;
    gettimeofday(&tv_r_Filter_10_543890_s, 0);
    SW_Filter_TD_10408(tbl_SerializeFromObject_TD_11759_input, tbl_Filter_TD_10408_output);
    gettimeofday(&tv_r_Filter_10_543890_e, 0);

    struct timeval tv_r_JOIN_INNER_10_263444_s, tv_r_JOIN_INNER_10_263444_e;
    gettimeofday(&tv_r_JOIN_INNER_10_263444_s, 0);
    SW_JOIN_INNER_TD_10223(tbl_JOIN_INNER_TD_11466_output, tbl_Filter_TD_11691_output, tbl_JOIN_INNER_TD_10223_output);
    gettimeofday(&tv_r_JOIN_INNER_10_263444_e, 0);

    struct timeval tv_r_Aggregate_10_443304_s, tv_r_Aggregate_10_443304_e;
    gettimeofday(&tv_r_Aggregate_10_443304_s, 0);
    SW_Aggregate_TD_10843(tbl_JOIN_INNER_TD_11291_output, tbl_Aggregate_TD_10843_output);
    gettimeofday(&tv_r_Aggregate_10_443304_e, 0);

    struct timeval tv_r_Filter_9_944908_s, tv_r_Filter_9_944908_e;
    gettimeofday(&tv_r_Filter_9_944908_s, 0);
    SW_Filter_TD_9452(tbl_SerializeFromObject_TD_10483_input, tbl_Filter_TD_9452_output);
    gettimeofday(&tv_r_Filter_9_944908_e, 0);

    struct timeval tv_r_JOIN_INNER_9_189760_s, tv_r_JOIN_INNER_9_189760_e;
    gettimeofday(&tv_r_JOIN_INNER_9_189760_s, 0);
    SW_JOIN_INNER_TD_9705(tbl_JOIN_INNER_TD_10246_output, tbl_Filter_TD_10232_output, tbl_JOIN_INNER_TD_9705_output);
    gettimeofday(&tv_r_JOIN_INNER_9_189760_e, 0);

    struct timeval tv_r_JOIN_INNER_9_616802_s, tv_r_JOIN_INNER_9_616802_e;
    gettimeofday(&tv_r_JOIN_INNER_9_616802_s, 0);
    SW_JOIN_INNER_TD_9379(tbl_JOIN_INNER_TD_10223_output, tbl_Filter_TD_10408_output, tbl_JOIN_INNER_TD_9379_output);
    gettimeofday(&tv_r_JOIN_INNER_9_616802_e, 0);

    struct timeval tv_r_Window_9_48009_s, tv_r_Window_9_48009_e;
    gettimeofday(&tv_r_Window_9_48009_s, 0);
    SW_Window_TD_9139(tbl_Aggregate_TD_10843_output, tbl_Window_TD_9139_output);
    gettimeofday(&tv_r_Window_9_48009_e, 0);

    struct timeval tv_r_JOIN_INNER_8_896312_s, tv_r_JOIN_INNER_8_896312_e;
    gettimeofday(&tv_r_JOIN_INNER_8_896312_s, 0);
    SW_JOIN_INNER_TD_8104(tbl_JOIN_INNER_TD_9705_output, tbl_Filter_TD_9452_output, tbl_JOIN_INNER_TD_8104_output);
    gettimeofday(&tv_r_JOIN_INNER_8_896312_e, 0);

    struct timeval tv_r_Aggregate_8_455460_s, tv_r_Aggregate_8_455460_e;
    gettimeofday(&tv_r_Aggregate_8_455460_s, 0);
    SW_Aggregate_TD_8481(tbl_JOIN_INNER_TD_9379_output, tbl_Aggregate_TD_8481_output);
    gettimeofday(&tv_r_Aggregate_8_455460_e, 0);

    struct timeval tv_r_Filter_8_621795_s, tv_r_Filter_8_621795_e;
    gettimeofday(&tv_r_Filter_8_621795_s, 0);
    SW_Filter_TD_8435(tbl_Window_TD_9139_output, tbl_Filter_TD_8435_output);
    gettimeofday(&tv_r_Filter_8_621795_e, 0);

    struct timeval tv_r_Aggregate_7_97856_s, tv_r_Aggregate_7_97856_e;
    gettimeofday(&tv_r_Aggregate_7_97856_s, 0);
    SW_Aggregate_TD_7589(tbl_JOIN_INNER_TD_8104_output, tbl_Aggregate_TD_7589_output);
    gettimeofday(&tv_r_Aggregate_7_97856_e, 0);

    struct timeval tv_r_Window_7_634262_s, tv_r_Window_7_634262_e;
    gettimeofday(&tv_r_Window_7_634262_s, 0);
    SW_Window_TD_7143(tbl_Aggregate_TD_8481_output, tbl_Window_TD_7143_output);
    gettimeofday(&tv_r_Window_7_634262_e, 0);

    struct timeval tv_r_Window_7_135453_s, tv_r_Window_7_135453_e;
    gettimeofday(&tv_r_Window_7_135453_s, 0);
    SW_Window_TD_751(tbl_Filter_TD_8435_output, tbl_Window_TD_751_output);
    gettimeofday(&tv_r_Window_7_135453_e, 0);

    struct timeval tv_r_Window_6_436881_s, tv_r_Window_6_436881_e;
    gettimeofday(&tv_r_Window_6_436881_s, 0);
    SW_Window_TD_6841(tbl_Aggregate_TD_7589_output, tbl_Window_TD_6841_output);
    gettimeofday(&tv_r_Window_6_436881_e, 0);

    struct timeval tv_r_Project_6_965231_s, tv_r_Project_6_965231_e;
    gettimeofday(&tv_r_Project_6_965231_s, 0);
    SW_Project_TD_6491(tbl_Window_TD_7143_output, tbl_Project_TD_6491_output);
    gettimeofday(&tv_r_Project_6_965231_e, 0);

    struct timeval tv_r_Filter_6_432425_s, tv_r_Filter_6_432425_e;
    gettimeofday(&tv_r_Filter_6_432425_s, 0);
    SW_Filter_TD_6476(tbl_Window_TD_751_output, tbl_Filter_TD_6476_output);
    gettimeofday(&tv_r_Filter_6_432425_e, 0);

    struct timeval tv_r_Project_5_910098_s, tv_r_Project_5_910098_e;
    gettimeofday(&tv_r_Project_5_910098_s, 0);
    SW_Project_TD_5825(tbl_Window_TD_6841_output, tbl_Project_TD_5825_output);
    gettimeofday(&tv_r_Project_5_910098_e, 0);

    struct timeval tv_r_JOIN_INNER_5_986315_s, tv_r_JOIN_INNER_5_986315_e;
    gettimeofday(&tv_r_JOIN_INNER_5_986315_s, 0);
    SW_JOIN_INNER_TD_5380(tbl_Filter_TD_6476_output, tbl_Project_TD_6491_output, tbl_JOIN_INNER_TD_5380_output);
    gettimeofday(&tv_r_JOIN_INNER_5_986315_e, 0);

    struct timeval tv_r_JOIN_INNER_4_681735_s, tv_r_JOIN_INNER_4_681735_e;
    gettimeofday(&tv_r_JOIN_INNER_4_681735_s, 0);
    SW_JOIN_INNER_TD_4587(tbl_JOIN_INNER_TD_5380_output, tbl_Project_TD_5825_output, tbl_JOIN_INNER_TD_4587_output);
    gettimeofday(&tv_r_JOIN_INNER_4_681735_e, 0);

    struct timeval tv_r_Project_3_699886_s, tv_r_Project_3_699886_e;
    gettimeofday(&tv_r_Project_3_699886_s, 0);
    SW_Project_TD_3545(tbl_JOIN_INNER_TD_4587_output, tbl_Project_TD_3545_output);
    gettimeofday(&tv_r_Project_3_699886_e, 0);

    struct timeval tv_r_Sort_2_910312_s, tv_r_Sort_2_910312_e;
    gettimeofday(&tv_r_Sort_2_910312_s, 0);
    SW_Sort_TD_2644(tbl_Project_TD_3545_output, tbl_Sort_TD_2644_output);
    gettimeofday(&tv_r_Sort_2_910312_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_478917_s, &tv_r_Filter_14_478917_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15210_input: " << tbl_SerializeFromObject_TD_15210_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_509559_s, &tv_r_Filter_14_509559_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15275_input: " << tbl_SerializeFromObject_TD_15275_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_176641_s, &tv_r_Filter_13_176641_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14429_input: " << tbl_SerializeFromObject_TD_14429_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_456990_s, &tv_r_JOIN_INNER_13_456990_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1470_output: " << tbl_Filter_TD_1470_output.getNumRow() << " " << "tbl_Filter_TD_14801_output: " << tbl_Filter_TD_14801_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_193971_s, &tv_r_Filter_12_193971_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13308_input: " << tbl_SerializeFromObject_TD_13308_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_288903_s, &tv_r_Filter_12_288903_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13672_input: " << tbl_SerializeFromObject_TD_13672_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_539080_s, &tv_r_Filter_12_539080_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13157_input: " << tbl_SerializeFromObject_TD_13157_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_364024_s, &tv_r_JOIN_INNER_12_364024_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13710_output: " << tbl_JOIN_INNER_TD_13710_output.getNumRow() << " " << "tbl_Filter_TD_13616_output: " << tbl_Filter_TD_13616_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_810970_s, &tv_r_Filter_11_810970_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12441_input: " << tbl_SerializeFromObject_TD_12441_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_206545_s, &tv_r_Filter_11_206545_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1266_input: " << tbl_SerializeFromObject_TD_1266_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_44144_s, &tv_r_Filter_11_44144_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12715_input: " << tbl_SerializeFromObject_TD_12715_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_535782_s, &tv_r_JOIN_INNER_11_535782_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12379_output: " << tbl_Filter_TD_12379_output.getNumRow() << " " << "tbl_Filter_TD_12710_output: " << tbl_Filter_TD_12710_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_816787_s, &tv_r_JOIN_INNER_11_816787_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12932_output: " << tbl_JOIN_INNER_TD_12932_output.getNumRow() << " " << "tbl_Filter_TD_1295_output: " << tbl_Filter_TD_1295_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_237729_s, &tv_r_Filter_10_237729_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11607_input: " << tbl_SerializeFromObject_TD_11607_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_671590_s, &tv_r_JOIN_INNER_10_671590_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11390_output: " << tbl_Filter_TD_11390_output.getNumRow() << " " << "tbl_Filter_TD_11421_output: " << tbl_Filter_TD_11421_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_543890_s, &tv_r_Filter_10_543890_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11759_input: " << tbl_SerializeFromObject_TD_11759_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_263444_s, &tv_r_JOIN_INNER_10_263444_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11466_output: " << tbl_JOIN_INNER_TD_11466_output.getNumRow() << " " << "tbl_Filter_TD_11691_output: " << tbl_Filter_TD_11691_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_443304_s, &tv_r_Aggregate_10_443304_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11291_output: " << tbl_JOIN_INNER_TD_11291_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_944908_s, &tv_r_Filter_9_944908_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10483_input: " << tbl_SerializeFromObject_TD_10483_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_189760_s, &tv_r_JOIN_INNER_9_189760_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10246_output: " << tbl_JOIN_INNER_TD_10246_output.getNumRow() << " " << "tbl_Filter_TD_10232_output: " << tbl_Filter_TD_10232_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_616802_s, &tv_r_JOIN_INNER_9_616802_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10223_output: " << tbl_JOIN_INNER_TD_10223_output.getNumRow() << " " << "tbl_Filter_TD_10408_output: " << tbl_Filter_TD_10408_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_9: " << tvdiff(&tv_r_Window_9_48009_s, &tv_r_Window_9_48009_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10843_output: " << tbl_Aggregate_TD_10843_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_896312_s, &tv_r_JOIN_INNER_8_896312_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9705_output: " << tbl_JOIN_INNER_TD_9705_output.getNumRow() << " " << "tbl_Filter_TD_9452_output: " << tbl_Filter_TD_9452_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_455460_s, &tv_r_Aggregate_8_455460_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9379_output: " << tbl_JOIN_INNER_TD_9379_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_621795_s, &tv_r_Filter_8_621795_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_9139_output: " << tbl_Window_TD_9139_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_97856_s, &tv_r_Aggregate_7_97856_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8104_output: " << tbl_JOIN_INNER_TD_8104_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_634262_s, &tv_r_Window_7_634262_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8481_output: " << tbl_Aggregate_TD_8481_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_135453_s, &tv_r_Window_7_135453_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8435_output: " << tbl_Filter_TD_8435_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_6: " << tvdiff(&tv_r_Window_6_436881_s, &tv_r_Window_6_436881_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7589_output: " << tbl_Aggregate_TD_7589_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_965231_s, &tv_r_Project_6_965231_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7143_output: " << tbl_Window_TD_7143_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_432425_s, &tv_r_Filter_6_432425_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_751_output: " << tbl_Window_TD_751_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_910098_s, &tv_r_Project_5_910098_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_6841_output: " << tbl_Window_TD_6841_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_986315_s, &tv_r_JOIN_INNER_5_986315_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6476_output: " << tbl_Filter_TD_6476_output.getNumRow() << " " << "tbl_Project_TD_6491_output: " << tbl_Project_TD_6491_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_681735_s, &tv_r_JOIN_INNER_4_681735_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5380_output: " << tbl_JOIN_INNER_TD_5380_output.getNumRow() << " " << "tbl_Project_TD_5825_output: " << tbl_Project_TD_5825_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_699886_s, &tv_r_Project_3_699886_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4587_output: " << tbl_JOIN_INNER_TD_4587_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_910312_s, &tv_r_Sort_2_910312_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3545_output: " << tbl_Project_TD_3545_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.554851 * 1000 << "ms" << std::endl; 
    return 0; 
}
