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
    std::string xclbin_path; 
    if (!parser.getCmdOption("-xclbin", xclbin_path)) { 
        std::cout << "ERROR: xclbin path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_h; 
    if (!parser.getCmdOption("-xclbin_h", xclbin_path_h)) { 
        std::cout << "ERROR: xclbin_h path is not set!\n"; 
        return 1; 
    } 
    std::string xclbin_path_a; 
    if (!parser.getCmdOption("-xclbin_a", xclbin_path_a)) { 
        std::cout << "ERROR: xclbin_a path is not set!\n"; 
        return 1; 
    } 
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
    // Get CL devices. 
    std::vector<cl::Device> devices = xcl::get_xil_devices(); 
    // ****************************** Tables **************************** // 
    Table tbl_GlobalLimit_TD_0268519_output("tbl_GlobalLimit_TD_0268519_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_0268519_output.allocateHost();
    Table tbl_LocalLimit_TD_1738376_output("tbl_LocalLimit_TD_1738376_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1738376_output.allocateHost();
    Table tbl_Sort_TD_2621100_output("tbl_Sort_TD_2621100_output", 6100000, 10, "");
    tbl_Sort_TD_2621100_output.allocateHost();
    Table tbl_Project_TD_3301366_output("tbl_Project_TD_3301366_output", 6100000, 10, "");
    tbl_Project_TD_3301366_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4451010_output("tbl_JOIN_INNER_TD_4451010_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_4451010_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5593396_output("tbl_JOIN_INNER_TD_5593396_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_5593396_output.allocateHost();
    Table tbl_Project_TD_5488834_output("tbl_Project_TD_5488834_output", 6100000, 6, "");
    tbl_Project_TD_5488834_output.allocateHost();
    Table tbl_Filter_TD_6889843_output("tbl_Filter_TD_6889843_output", 6100000, 9, "");
    tbl_Filter_TD_6889843_output.allocateHost();
    Table tbl_Project_TD_6645868_output("tbl_Project_TD_6645868_output", 6100000, 6, "");
    tbl_Project_TD_6645868_output.allocateHost();
    Table tbl_Window_TD_6278248_output("tbl_Window_TD_6278248_output", 6100000, 8, "");
    tbl_Window_TD_6278248_output.allocateHost();
    Table tbl_Window_TD_7832204_output("tbl_Window_TD_7832204_output", 6100000, 10, "");
    tbl_Window_TD_7832204_output.allocateHost();
    Table tbl_Window_TD_7882987_output("tbl_Window_TD_7882987_output", 6100000, 8, "");
    tbl_Window_TD_7882987_output.allocateHost();
    Table tbl_Aggregate_TD_7878749_output("tbl_Aggregate_TD_7878749_output", 6100000, 7, "");
    tbl_Aggregate_TD_7878749_output.allocateHost();
    Table tbl_Filter_TD_864194_output("tbl_Filter_TD_864194_output", 6100000, 9, "");
    tbl_Filter_TD_864194_output.allocateHost();
    Table tbl_Aggregate_TD_8923830_output("tbl_Aggregate_TD_8923830_output", 6100000, 7, "");
    tbl_Aggregate_TD_8923830_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8323340_output("tbl_JOIN_INNER_TD_8323340_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8323340_output.allocateHost();
    Table tbl_Window_TD_9143522_output("tbl_Window_TD_9143522_output", 6100000, 9, "");
    tbl_Window_TD_9143522_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9985419_output("tbl_JOIN_INNER_TD_9985419_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9985419_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9443754_output("tbl_JOIN_INNER_TD_9443754_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_9443754_output.allocateHost();
    Table tbl_Filter_TD_9473523_output("tbl_Filter_TD_9473523_output", 6100000, 3, "");
    tbl_Filter_TD_9473523_output.allocateHost();
    Table tbl_Aggregate_TD_10684223_output("tbl_Aggregate_TD_10684223_output", 6100000, 8, "");
    tbl_Aggregate_TD_10684223_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10844481_output("tbl_JOIN_INNER_TD_10844481_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10844481_output.allocateHost();
    Table tbl_Filter_TD_10844073_output("tbl_Filter_TD_10844073_output", 6100000, 3, "");
    tbl_Filter_TD_10844073_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10961687_output("tbl_JOIN_INNER_TD_10961687_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10961687_output.allocateHost();
    Table tbl_Filter_TD_10732995_output("tbl_Filter_TD_10732995_output", 6100000, 3, "");
    tbl_Filter_TD_10732995_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10501406_input;
    tbl_SerializeFromObject_TD_10501406_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10501406_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10501406_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10501406_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10501406_input.allocateHost();
    tbl_SerializeFromObject_TD_10501406_input.loadHost();
    Table tbl_JOIN_INNER_TD_11395773_output("tbl_JOIN_INNER_TD_11395773_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_11395773_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11506670_output("tbl_JOIN_INNER_TD_11506670_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_11506670_output.allocateHost();
    Table tbl_Filter_TD_11952870_output("tbl_Filter_TD_11952870_output", 6100000, 3, "");
    tbl_Filter_TD_11952870_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11183471_input;
    tbl_SerializeFromObject_TD_11183471_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11183471_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_11183471_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11183471_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11183471_input.allocateHost();
    tbl_SerializeFromObject_TD_11183471_input.loadHost();
    Table tbl_Filter_TD_11694324_output("tbl_Filter_TD_11694324_output", 6100000, 3, "");
    tbl_Filter_TD_11694324_output.allocateHost();
    Table tbl_Filter_TD_11870010_output("tbl_Filter_TD_11870010_output", 6100000, 4, "");
    tbl_Filter_TD_11870010_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1188449_input;
    tbl_SerializeFromObject_TD_1188449_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1188449_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1188449_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1188449_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_1188449_input.allocateHost();
    tbl_SerializeFromObject_TD_1188449_input.loadHost();
    Table tbl_JOIN_INNER_TD_12796731_output("tbl_JOIN_INNER_TD_12796731_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_12796731_output.allocateHost();
    Table tbl_Filter_TD_12464139_output("tbl_Filter_TD_12464139_output", 6100000, 3, "");
    tbl_Filter_TD_12464139_output.allocateHost();
    Table tbl_Filter_TD_12561191_output("tbl_Filter_TD_12561191_output", 6100000, 3, "");
    tbl_Filter_TD_12561191_output.allocateHost();
    Table tbl_Filter_TD_12364176_output("tbl_Filter_TD_12364176_output", 6100000, 4, "");
    tbl_Filter_TD_12364176_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12230855_input;
    tbl_SerializeFromObject_TD_12230855_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12230855_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12230855_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12230855_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12230855_input.allocateHost();
    tbl_SerializeFromObject_TD_12230855_input.loadHost();
    Table tbl_SerializeFromObject_TD_12482520_input;
    tbl_SerializeFromObject_TD_12482520_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12482520_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_12482520_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12482520_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12482520_input.allocateHost();
    tbl_SerializeFromObject_TD_12482520_input.loadHost();
    Table tbl_SerializeFromObject_TD_12259404_input;
    tbl_SerializeFromObject_TD_12259404_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12259404_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12259404_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12259404_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12259404_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12259404_input.allocateHost();
    tbl_SerializeFromObject_TD_12259404_input.loadHost();
    Table tbl_JOIN_INNER_TD_13318346_output("tbl_JOIN_INNER_TD_13318346_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_13318346_output.allocateHost();
    Table tbl_Filter_TD_13453291_output("tbl_Filter_TD_13453291_output", 6100000, 3, "");
    tbl_Filter_TD_13453291_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13316677_input;
    tbl_SerializeFromObject_TD_13316677_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13316677_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_13316677_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13316677_input.addCol("s_company_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13316677_input.allocateHost();
    tbl_SerializeFromObject_TD_13316677_input.loadHost();
    Table tbl_SerializeFromObject_TD_1322349_input;
    tbl_SerializeFromObject_TD_1322349_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1322349_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1322349_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1322349_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1322349_input.allocateHost();
    tbl_SerializeFromObject_TD_1322349_input.loadHost();
    Table tbl_SerializeFromObject_TD_13522982_input;
    tbl_SerializeFromObject_TD_13522982_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13522982_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13522982_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13522982_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_13522982_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_13522982_input.allocateHost();
    tbl_SerializeFromObject_TD_13522982_input.loadHost();
    Table tbl_Filter_TD_14347868_output("tbl_Filter_TD_14347868_output", 6100000, 3, "");
    tbl_Filter_TD_14347868_output.allocateHost();
    Table tbl_Filter_TD_14927856_output("tbl_Filter_TD_14927856_output", 6100000, 4, "");
    tbl_Filter_TD_14927856_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14411562_input;
    tbl_SerializeFromObject_TD_14411562_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_14411562_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_14411562_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_14411562_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_14411562_input.allocateHost();
    tbl_SerializeFromObject_TD_14411562_input.loadHost();
    Table tbl_SerializeFromObject_TD_15764117_input;
    tbl_SerializeFromObject_TD_15764117_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_15764117_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15764117_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15764117_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15764117_input.allocateHost();
    tbl_SerializeFromObject_TD_15764117_input.loadHost();
    Table tbl_SerializeFromObject_TD_15178586_input;
    tbl_SerializeFromObject_TD_15178586_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15178586_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15178586_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_15178586_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_15178586_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_15178586_input.allocateHost();
    tbl_SerializeFromObject_TD_15178586_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_199800_s, tv_r_Filter_14_199800_e;
    gettimeofday(&tv_r_Filter_14_199800_s, 0);
    SW_Filter_TD_14927856(tbl_SerializeFromObject_TD_15178586_input, tbl_Filter_TD_14927856_output);
    gettimeofday(&tv_r_Filter_14_199800_e, 0);

    struct timeval tv_r_Filter_14_883636_s, tv_r_Filter_14_883636_e;
    gettimeofday(&tv_r_Filter_14_883636_s, 0);
    SW_Filter_TD_14347868(tbl_SerializeFromObject_TD_15764117_input, tbl_Filter_TD_14347868_output);
    gettimeofday(&tv_r_Filter_14_883636_e, 0);

    struct timeval tv_r_Filter_13_997290_s, tv_r_Filter_13_997290_e;
    gettimeofday(&tv_r_Filter_13_997290_s, 0);
    SW_Filter_TD_13453291(tbl_SerializeFromObject_TD_14411562_input, tbl_Filter_TD_13453291_output);
    gettimeofday(&tv_r_Filter_13_997290_e, 0);

    struct timeval tv_r_JOIN_INNER_13_451138_s, tv_r_JOIN_INNER_13_451138_e;
    gettimeofday(&tv_r_JOIN_INNER_13_451138_s, 0);
    SW_JOIN_INNER_TD_13318346(tbl_Filter_TD_14347868_output, tbl_Filter_TD_14927856_output, tbl_JOIN_INNER_TD_13318346_output);
    gettimeofday(&tv_r_JOIN_INNER_13_451138_e, 0);

    struct timeval tv_r_Filter_12_922305_s, tv_r_Filter_12_922305_e;
    gettimeofday(&tv_r_Filter_12_922305_s, 0);
    SW_Filter_TD_12364176(tbl_SerializeFromObject_TD_13522982_input, tbl_Filter_TD_12364176_output);
    gettimeofday(&tv_r_Filter_12_922305_e, 0);

    struct timeval tv_r_Filter_12_109068_s, tv_r_Filter_12_109068_e;
    gettimeofday(&tv_r_Filter_12_109068_s, 0);
    SW_Filter_TD_12561191(tbl_SerializeFromObject_TD_1322349_input, tbl_Filter_TD_12561191_output);
    gettimeofday(&tv_r_Filter_12_109068_e, 0);

    struct timeval tv_r_Filter_12_954591_s, tv_r_Filter_12_954591_e;
    gettimeofday(&tv_r_Filter_12_954591_s, 0);
    SW_Filter_TD_12464139(tbl_SerializeFromObject_TD_13316677_input, tbl_Filter_TD_12464139_output);
    gettimeofday(&tv_r_Filter_12_954591_e, 0);

    struct timeval tv_r_JOIN_INNER_12_852063_s, tv_r_JOIN_INNER_12_852063_e;
    gettimeofday(&tv_r_JOIN_INNER_12_852063_s, 0);
    SW_JOIN_INNER_TD_12796731(tbl_JOIN_INNER_TD_13318346_output, tbl_Filter_TD_13453291_output, tbl_JOIN_INNER_TD_12796731_output);
    gettimeofday(&tv_r_JOIN_INNER_12_852063_e, 0);

    struct timeval tv_r_Filter_11_264167_s, tv_r_Filter_11_264167_e;
    gettimeofday(&tv_r_Filter_11_264167_s, 0);
    SW_Filter_TD_11870010(tbl_SerializeFromObject_TD_12259404_input, tbl_Filter_TD_11870010_output);
    gettimeofday(&tv_r_Filter_11_264167_e, 0);

    struct timeval tv_r_Filter_11_655573_s, tv_r_Filter_11_655573_e;
    gettimeofday(&tv_r_Filter_11_655573_s, 0);
    SW_Filter_TD_11694324(tbl_SerializeFromObject_TD_12482520_input, tbl_Filter_TD_11694324_output);
    gettimeofday(&tv_r_Filter_11_655573_e, 0);

    struct timeval tv_r_Filter_11_858078_s, tv_r_Filter_11_858078_e;
    gettimeofday(&tv_r_Filter_11_858078_s, 0);
    SW_Filter_TD_11952870(tbl_SerializeFromObject_TD_12230855_input, tbl_Filter_TD_11952870_output);
    gettimeofday(&tv_r_Filter_11_858078_e, 0);

    struct timeval tv_r_JOIN_INNER_11_122170_s, tv_r_JOIN_INNER_11_122170_e;
    gettimeofday(&tv_r_JOIN_INNER_11_122170_s, 0);
    SW_JOIN_INNER_TD_11506670(tbl_Filter_TD_12561191_output, tbl_Filter_TD_12364176_output, tbl_JOIN_INNER_TD_11506670_output);
    gettimeofday(&tv_r_JOIN_INNER_11_122170_e, 0);

    struct timeval tv_r_JOIN_INNER_11_683502_s, tv_r_JOIN_INNER_11_683502_e;
    gettimeofday(&tv_r_JOIN_INNER_11_683502_s, 0);
    SW_JOIN_INNER_TD_11395773(tbl_JOIN_INNER_TD_12796731_output, tbl_Filter_TD_12464139_output, tbl_JOIN_INNER_TD_11395773_output);
    gettimeofday(&tv_r_JOIN_INNER_11_683502_e, 0);

    struct timeval tv_r_Filter_10_467001_s, tv_r_Filter_10_467001_e;
    gettimeofday(&tv_r_Filter_10_467001_s, 0);
    SW_Filter_TD_10732995(tbl_SerializeFromObject_TD_1188449_input, tbl_Filter_TD_10732995_output);
    gettimeofday(&tv_r_Filter_10_467001_e, 0);

    struct timeval tv_r_JOIN_INNER_10_24808_s, tv_r_JOIN_INNER_10_24808_e;
    gettimeofday(&tv_r_JOIN_INNER_10_24808_s, 0);
    SW_JOIN_INNER_TD_10961687(tbl_Filter_TD_11694324_output, tbl_Filter_TD_11870010_output, tbl_JOIN_INNER_TD_10961687_output);
    gettimeofday(&tv_r_JOIN_INNER_10_24808_e, 0);

    struct timeval tv_r_Filter_10_868406_s, tv_r_Filter_10_868406_e;
    gettimeofday(&tv_r_Filter_10_868406_s, 0);
    SW_Filter_TD_10844073(tbl_SerializeFromObject_TD_11183471_input, tbl_Filter_TD_10844073_output);
    gettimeofday(&tv_r_Filter_10_868406_e, 0);

    struct timeval tv_r_JOIN_INNER_10_961251_s, tv_r_JOIN_INNER_10_961251_e;
    gettimeofday(&tv_r_JOIN_INNER_10_961251_s, 0);
    SW_JOIN_INNER_TD_10844481(tbl_JOIN_INNER_TD_11506670_output, tbl_Filter_TD_11952870_output, tbl_JOIN_INNER_TD_10844481_output);
    gettimeofday(&tv_r_JOIN_INNER_10_961251_e, 0);

    struct timeval tv_r_Aggregate_10_922425_s, tv_r_Aggregate_10_922425_e;
    gettimeofday(&tv_r_Aggregate_10_922425_s, 0);
    SW_Aggregate_TD_10684223(tbl_JOIN_INNER_TD_11395773_output, tbl_Aggregate_TD_10684223_output);
    gettimeofday(&tv_r_Aggregate_10_922425_e, 0);

    struct timeval tv_r_Filter_9_107183_s, tv_r_Filter_9_107183_e;
    gettimeofday(&tv_r_Filter_9_107183_s, 0);
    SW_Filter_TD_9473523(tbl_SerializeFromObject_TD_10501406_input, tbl_Filter_TD_9473523_output);
    gettimeofday(&tv_r_Filter_9_107183_e, 0);

    struct timeval tv_r_JOIN_INNER_9_468872_s, tv_r_JOIN_INNER_9_468872_e;
    gettimeofday(&tv_r_JOIN_INNER_9_468872_s, 0);
    SW_JOIN_INNER_TD_9443754(tbl_JOIN_INNER_TD_10961687_output, tbl_Filter_TD_10732995_output, tbl_JOIN_INNER_TD_9443754_output);
    gettimeofday(&tv_r_JOIN_INNER_9_468872_e, 0);

    struct timeval tv_r_JOIN_INNER_9_218967_s, tv_r_JOIN_INNER_9_218967_e;
    gettimeofday(&tv_r_JOIN_INNER_9_218967_s, 0);
    SW_JOIN_INNER_TD_9985419(tbl_JOIN_INNER_TD_10844481_output, tbl_Filter_TD_10844073_output, tbl_JOIN_INNER_TD_9985419_output);
    gettimeofday(&tv_r_JOIN_INNER_9_218967_e, 0);

    struct timeval tv_r_Window_9_76898_s, tv_r_Window_9_76898_e;
    gettimeofday(&tv_r_Window_9_76898_s, 0);
    SW_Window_TD_9143522(tbl_Aggregate_TD_10684223_output, tbl_Window_TD_9143522_output);
    gettimeofday(&tv_r_Window_9_76898_e, 0);

    struct timeval tv_r_JOIN_INNER_8_61730_s, tv_r_JOIN_INNER_8_61730_e;
    gettimeofday(&tv_r_JOIN_INNER_8_61730_s, 0);
    SW_JOIN_INNER_TD_8323340(tbl_JOIN_INNER_TD_9443754_output, tbl_Filter_TD_9473523_output, tbl_JOIN_INNER_TD_8323340_output);
    gettimeofday(&tv_r_JOIN_INNER_8_61730_e, 0);

    struct timeval tv_r_Aggregate_8_390001_s, tv_r_Aggregate_8_390001_e;
    gettimeofday(&tv_r_Aggregate_8_390001_s, 0);
    SW_Aggregate_TD_8923830(tbl_JOIN_INNER_TD_9985419_output, tbl_Aggregate_TD_8923830_output);
    gettimeofday(&tv_r_Aggregate_8_390001_e, 0);

    struct timeval tv_r_Filter_8_29499_s, tv_r_Filter_8_29499_e;
    gettimeofday(&tv_r_Filter_8_29499_s, 0);
    SW_Filter_TD_864194(tbl_Window_TD_9143522_output, tbl_Filter_TD_864194_output);
    gettimeofday(&tv_r_Filter_8_29499_e, 0);

    struct timeval tv_r_Aggregate_7_387550_s, tv_r_Aggregate_7_387550_e;
    gettimeofday(&tv_r_Aggregate_7_387550_s, 0);
    SW_Aggregate_TD_7878749(tbl_JOIN_INNER_TD_8323340_output, tbl_Aggregate_TD_7878749_output);
    gettimeofday(&tv_r_Aggregate_7_387550_e, 0);

    struct timeval tv_r_Window_7_574806_s, tv_r_Window_7_574806_e;
    gettimeofday(&tv_r_Window_7_574806_s, 0);
    SW_Window_TD_7882987(tbl_Aggregate_TD_8923830_output, tbl_Window_TD_7882987_output);
    gettimeofday(&tv_r_Window_7_574806_e, 0);

    struct timeval tv_r_Window_7_901864_s, tv_r_Window_7_901864_e;
    gettimeofday(&tv_r_Window_7_901864_s, 0);
    SW_Window_TD_7832204(tbl_Filter_TD_864194_output, tbl_Window_TD_7832204_output);
    gettimeofday(&tv_r_Window_7_901864_e, 0);

    struct timeval tv_r_Window_6_283669_s, tv_r_Window_6_283669_e;
    gettimeofday(&tv_r_Window_6_283669_s, 0);
    SW_Window_TD_6278248(tbl_Aggregate_TD_7878749_output, tbl_Window_TD_6278248_output);
    gettimeofday(&tv_r_Window_6_283669_e, 0);

    struct timeval tv_r_Project_6_424102_s, tv_r_Project_6_424102_e;
    gettimeofday(&tv_r_Project_6_424102_s, 0);
    SW_Project_TD_6645868(tbl_Window_TD_7882987_output, tbl_Project_TD_6645868_output);
    gettimeofday(&tv_r_Project_6_424102_e, 0);

    struct timeval tv_r_Filter_6_881106_s, tv_r_Filter_6_881106_e;
    gettimeofday(&tv_r_Filter_6_881106_s, 0);
    SW_Filter_TD_6889843(tbl_Window_TD_7832204_output, tbl_Filter_TD_6889843_output);
    gettimeofday(&tv_r_Filter_6_881106_e, 0);

    struct timeval tv_r_Project_5_452885_s, tv_r_Project_5_452885_e;
    gettimeofday(&tv_r_Project_5_452885_s, 0);
    SW_Project_TD_5488834(tbl_Window_TD_6278248_output, tbl_Project_TD_5488834_output);
    gettimeofday(&tv_r_Project_5_452885_e, 0);

    struct timeval tv_r_JOIN_INNER_5_672797_s, tv_r_JOIN_INNER_5_672797_e;
    gettimeofday(&tv_r_JOIN_INNER_5_672797_s, 0);
    SW_JOIN_INNER_TD_5593396(tbl_Filter_TD_6889843_output, tbl_Project_TD_6645868_output, tbl_JOIN_INNER_TD_5593396_output);
    gettimeofday(&tv_r_JOIN_INNER_5_672797_e, 0);

    struct timeval tv_r_JOIN_INNER_4_225173_s, tv_r_JOIN_INNER_4_225173_e;
    gettimeofday(&tv_r_JOIN_INNER_4_225173_s, 0);
    SW_JOIN_INNER_TD_4451010(tbl_JOIN_INNER_TD_5593396_output, tbl_Project_TD_5488834_output, tbl_JOIN_INNER_TD_4451010_output);
    gettimeofday(&tv_r_JOIN_INNER_4_225173_e, 0);

    struct timeval tv_r_Project_3_691255_s, tv_r_Project_3_691255_e;
    gettimeofday(&tv_r_Project_3_691255_s, 0);
    SW_Project_TD_3301366(tbl_JOIN_INNER_TD_4451010_output, tbl_Project_TD_3301366_output);
    gettimeofday(&tv_r_Project_3_691255_e, 0);

    struct timeval tv_r_Sort_2_888698_s, tv_r_Sort_2_888698_e;
    gettimeofday(&tv_r_Sort_2_888698_s, 0);
    SW_Sort_TD_2621100(tbl_Project_TD_3301366_output, tbl_Sort_TD_2621100_output);
    gettimeofday(&tv_r_Sort_2_888698_e, 0);

    struct timeval tv_r_LocalLimit_1_776694_s, tv_r_LocalLimit_1_776694_e;
    gettimeofday(&tv_r_LocalLimit_1_776694_s, 0);
    SW_LocalLimit_TD_1738376(tbl_Sort_TD_2621100_output, tbl_LocalLimit_TD_1738376_output);
    gettimeofday(&tv_r_LocalLimit_1_776694_e, 0);

    struct timeval tv_r_GlobalLimit_0_335256_s, tv_r_GlobalLimit_0_335256_e;
    gettimeofday(&tv_r_GlobalLimit_0_335256_s, 0);
    SW_GlobalLimit_TD_0268519(tbl_LocalLimit_TD_1738376_output, tbl_GlobalLimit_TD_0268519_output);
    gettimeofday(&tv_r_GlobalLimit_0_335256_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_199800_s, &tv_r_Filter_14_199800_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15178586_input: " << tbl_SerializeFromObject_TD_15178586_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_883636_s, &tv_r_Filter_14_883636_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15764117_input: " << tbl_SerializeFromObject_TD_15764117_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_997290_s, &tv_r_Filter_13_997290_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14411562_input: " << tbl_SerializeFromObject_TD_14411562_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_451138_s, &tv_r_JOIN_INNER_13_451138_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14347868_output: " << tbl_Filter_TD_14347868_output.getNumRow() << " " << "tbl_Filter_TD_14927856_output: " << tbl_Filter_TD_14927856_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_922305_s, &tv_r_Filter_12_922305_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13522982_input: " << tbl_SerializeFromObject_TD_13522982_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_109068_s, &tv_r_Filter_12_109068_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1322349_input: " << tbl_SerializeFromObject_TD_1322349_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_954591_s, &tv_r_Filter_12_954591_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13316677_input: " << tbl_SerializeFromObject_TD_13316677_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_852063_s, &tv_r_JOIN_INNER_12_852063_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13318346_output: " << tbl_JOIN_INNER_TD_13318346_output.getNumRow() << " " << "tbl_Filter_TD_13453291_output: " << tbl_Filter_TD_13453291_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_264167_s, &tv_r_Filter_11_264167_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12259404_input: " << tbl_SerializeFromObject_TD_12259404_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_655573_s, &tv_r_Filter_11_655573_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12482520_input: " << tbl_SerializeFromObject_TD_12482520_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_858078_s, &tv_r_Filter_11_858078_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12230855_input: " << tbl_SerializeFromObject_TD_12230855_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_122170_s, &tv_r_JOIN_INNER_11_122170_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12561191_output: " << tbl_Filter_TD_12561191_output.getNumRow() << " " << "tbl_Filter_TD_12364176_output: " << tbl_Filter_TD_12364176_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_683502_s, &tv_r_JOIN_INNER_11_683502_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12796731_output: " << tbl_JOIN_INNER_TD_12796731_output.getNumRow() << " " << "tbl_Filter_TD_12464139_output: " << tbl_Filter_TD_12464139_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_467001_s, &tv_r_Filter_10_467001_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1188449_input: " << tbl_SerializeFromObject_TD_1188449_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_24808_s, &tv_r_JOIN_INNER_10_24808_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11694324_output: " << tbl_Filter_TD_11694324_output.getNumRow() << " " << "tbl_Filter_TD_11870010_output: " << tbl_Filter_TD_11870010_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_868406_s, &tv_r_Filter_10_868406_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11183471_input: " << tbl_SerializeFromObject_TD_11183471_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_961251_s, &tv_r_JOIN_INNER_10_961251_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11506670_output: " << tbl_JOIN_INNER_TD_11506670_output.getNumRow() << " " << "tbl_Filter_TD_11952870_output: " << tbl_Filter_TD_11952870_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_922425_s, &tv_r_Aggregate_10_922425_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11395773_output: " << tbl_JOIN_INNER_TD_11395773_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_107183_s, &tv_r_Filter_9_107183_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10501406_input: " << tbl_SerializeFromObject_TD_10501406_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_468872_s, &tv_r_JOIN_INNER_9_468872_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10961687_output: " << tbl_JOIN_INNER_TD_10961687_output.getNumRow() << " " << "tbl_Filter_TD_10732995_output: " << tbl_Filter_TD_10732995_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_218967_s, &tv_r_JOIN_INNER_9_218967_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10844481_output: " << tbl_JOIN_INNER_TD_10844481_output.getNumRow() << " " << "tbl_Filter_TD_10844073_output: " << tbl_Filter_TD_10844073_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_9: " << tvdiff(&tv_r_Window_9_76898_s, &tv_r_Window_9_76898_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10684223_output: " << tbl_Aggregate_TD_10684223_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_61730_s, &tv_r_JOIN_INNER_8_61730_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9443754_output: " << tbl_JOIN_INNER_TD_9443754_output.getNumRow() << " " << "tbl_Filter_TD_9473523_output: " << tbl_Filter_TD_9473523_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_390001_s, &tv_r_Aggregate_8_390001_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9985419_output: " << tbl_JOIN_INNER_TD_9985419_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_29499_s, &tv_r_Filter_8_29499_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_9143522_output: " << tbl_Window_TD_9143522_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_387550_s, &tv_r_Aggregate_7_387550_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8323340_output: " << tbl_JOIN_INNER_TD_8323340_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_574806_s, &tv_r_Window_7_574806_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8923830_output: " << tbl_Aggregate_TD_8923830_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_901864_s, &tv_r_Window_7_901864_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_864194_output: " << tbl_Filter_TD_864194_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_6: " << tvdiff(&tv_r_Window_6_283669_s, &tv_r_Window_6_283669_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7878749_output: " << tbl_Aggregate_TD_7878749_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_424102_s, &tv_r_Project_6_424102_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7882987_output: " << tbl_Window_TD_7882987_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_881106_s, &tv_r_Filter_6_881106_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7832204_output: " << tbl_Window_TD_7832204_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_452885_s, &tv_r_Project_5_452885_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_6278248_output: " << tbl_Window_TD_6278248_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_672797_s, &tv_r_JOIN_INNER_5_672797_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6889843_output: " << tbl_Filter_TD_6889843_output.getNumRow() << " " << "tbl_Project_TD_6645868_output: " << tbl_Project_TD_6645868_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_225173_s, &tv_r_JOIN_INNER_4_225173_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5593396_output: " << tbl_JOIN_INNER_TD_5593396_output.getNumRow() << " " << "tbl_Project_TD_5488834_output: " << tbl_Project_TD_5488834_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_691255_s, &tv_r_Project_3_691255_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4451010_output: " << tbl_JOIN_INNER_TD_4451010_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_888698_s, &tv_r_Sort_2_888698_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3301366_output: " << tbl_Project_TD_3301366_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_776694_s, &tv_r_LocalLimit_1_776694_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2621100_output: " << tbl_Sort_TD_2621100_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_335256_s, &tv_r_GlobalLimit_0_335256_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1738376_output: " << tbl_LocalLimit_TD_1738376_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.0346684 * 1000 << "ms" << std::endl; 
    return 0; 
}
