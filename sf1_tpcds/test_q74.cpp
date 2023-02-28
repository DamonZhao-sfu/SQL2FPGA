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

#include "cfgFunc_q74.hpp" 
#include "q74.hpp" 

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
    std::cout << "NOTE:running query #74\n."; 
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
    Table tbl_GlobalLimit_TD_0212813_output("tbl_GlobalLimit_TD_0212813_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0212813_output.allocateHost();
    Table tbl_LocalLimit_TD_1167695_output("tbl_LocalLimit_TD_1167695_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1167695_output.allocateHost();
    Table tbl_Sort_TD_2685989_output("tbl_Sort_TD_2685989_output", 6100000, 3, "");
    tbl_Sort_TD_2685989_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3617649_output("tbl_JOIN_INNER_TD_3617649_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_3617649_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4885302_output("tbl_JOIN_INNER_TD_4885302_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4885302_output.allocateHost();
    Table tbl_Aggregate_TD_4370616_output("tbl_Aggregate_TD_4370616_output", 6100000, 2, "");
    tbl_Aggregate_TD_4370616_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5729656_output("tbl_JOIN_INNER_TD_5729656_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5729656_output.allocateHost();
    Table tbl_Project_TD_5904404_output("tbl_Project_TD_5904404_output", 6100000, 2, "");
    tbl_Project_TD_5904404_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5681857_output("tbl_JOIN_INNER_TD_5681857_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5681857_output.allocateHost();
    Table tbl_Filter_TD_6630367_output("tbl_Filter_TD_6630367_output", 6100000, 2, "");
    tbl_Filter_TD_6630367_output.allocateHost();
    Table tbl_Aggregate_TD_6564_output("tbl_Aggregate_TD_6564_output", 6100000, 4, "");
    tbl_Aggregate_TD_6564_output.allocateHost();
    Table tbl_Filter_TD_6563405_output("tbl_Filter_TD_6563405_output", 6100000, 2, "");
    tbl_Filter_TD_6563405_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6168417_output("tbl_JOIN_INNER_TD_6168417_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6168417_output.allocateHost();
    Table tbl_Filter_TD_6779394_output("tbl_Filter_TD_6779394_output", 6100000, 2, "");
    tbl_Filter_TD_6779394_output.allocateHost();
    Table tbl_Aggregate_TD_7257614_output("tbl_Aggregate_TD_7257614_output", 6100000, 2, "");
    tbl_Aggregate_TD_7257614_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7178507_output("tbl_JOIN_INNER_TD_7178507_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7178507_output.allocateHost();
    Table tbl_Aggregate_TD_763186_output("tbl_Aggregate_TD_763186_output", 6100000, 2, "");
    tbl_Aggregate_TD_763186_output.allocateHost();
    Table tbl_Filter_TD_7101571_output("tbl_Filter_TD_7101571_output", 6100000, 4, "");
    tbl_Filter_TD_7101571_output.allocateHost();
    Table tbl_Filter_TD_7968160_output("tbl_Filter_TD_7968160_output", 6100000, 3, "");
    tbl_Filter_TD_7968160_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7635570_input;
    tbl_SerializeFromObject_TD_7635570_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7635570_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7635570_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7635570_input.allocateHost();
    tbl_SerializeFromObject_TD_7635570_input.loadHost();
    Table tbl_JOIN_INNER_TD_8433237_output("tbl_JOIN_INNER_TD_8433237_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8433237_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8389446_output("tbl_JOIN_INNER_TD_8389446_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8389446_output.allocateHost();
    Table tbl_Filter_TD_8262205_output("tbl_Filter_TD_8262205_output", 6100000, 2, "");
    tbl_Filter_TD_8262205_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8295190_output("tbl_JOIN_INNER_TD_8295190_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8295190_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8387293_input;
    tbl_SerializeFromObject_TD_8387293_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8387293_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8387293_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8387293_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8387293_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8387293_input.allocateHost();
    tbl_SerializeFromObject_TD_8387293_input.loadHost();
    Table tbl_SerializeFromObject_TD_8532321_input;
    tbl_SerializeFromObject_TD_8532321_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8532321_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8532321_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_8532321_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_8532321_input.allocateHost();
    tbl_SerializeFromObject_TD_8532321_input.loadHost();
    Table tbl_JOIN_INNER_TD_9509211_output("tbl_JOIN_INNER_TD_9509211_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_9509211_output.allocateHost();
    Table tbl_Filter_TD_9467190_output("tbl_Filter_TD_9467190_output", 6100000, 2, "");
    tbl_Filter_TD_9467190_output.allocateHost();
    Table tbl_Filter_TD_942668_output("tbl_Filter_TD_942668_output", 6100000, 4, "");
    tbl_Filter_TD_942668_output.allocateHost();
    Table tbl_Filter_TD_9181945_output("tbl_Filter_TD_9181945_output", 6100000, 3, "");
    tbl_Filter_TD_9181945_output.allocateHost();
    Table tbl_SerializeFromObject_TD_91725_input;
    tbl_SerializeFromObject_TD_91725_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_91725_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_91725_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_91725_input.allocateHost();
    tbl_SerializeFromObject_TD_91725_input.loadHost();
    Table tbl_JOIN_INNER_TD_9695983_output("tbl_JOIN_INNER_TD_9695983_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_9695983_output.allocateHost();
    Table tbl_Filter_TD_9261802_output("tbl_Filter_TD_9261802_output", 6100000, 2, "");
    tbl_Filter_TD_9261802_output.allocateHost();
    Table tbl_Filter_TD_10767588_output("tbl_Filter_TD_10767588_output", 6100000, 4, "");
    tbl_Filter_TD_10767588_output.allocateHost();
    Table tbl_Filter_TD_10539841_output("tbl_Filter_TD_10539841_output", 6100000, 3, "");
    tbl_Filter_TD_10539841_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10515404_input;
    tbl_SerializeFromObject_TD_10515404_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10515404_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10515404_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10515404_input.allocateHost();
    tbl_SerializeFromObject_TD_10515404_input.loadHost();
    Table tbl_SerializeFromObject_TD_10143973_input;
    tbl_SerializeFromObject_TD_10143973_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10143973_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_10143973_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10143973_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10143973_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10143973_input.allocateHost();
    tbl_SerializeFromObject_TD_10143973_input.loadHost();
    Table tbl_SerializeFromObject_TD_10324686_input;
    tbl_SerializeFromObject_TD_10324686_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10324686_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10324686_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10324686_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_10324686_input.allocateHost();
    tbl_SerializeFromObject_TD_10324686_input.loadHost();
    Table tbl_Filter_TD_10741733_output("tbl_Filter_TD_10741733_output", 6100000, 4, "");
    tbl_Filter_TD_10741733_output.allocateHost();
    Table tbl_Filter_TD_1031933_output("tbl_Filter_TD_1031933_output", 6100000, 3, "");
    tbl_Filter_TD_1031933_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10993185_input;
    tbl_SerializeFromObject_TD_10993185_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10993185_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10993185_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10993185_input.allocateHost();
    tbl_SerializeFromObject_TD_10993185_input.loadHost();
    Table tbl_SerializeFromObject_TD_11392681_input;
    tbl_SerializeFromObject_TD_11392681_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11392681_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11392681_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11392681_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11392681_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11392681_input.allocateHost();
    tbl_SerializeFromObject_TD_11392681_input.loadHost();
    Table tbl_SerializeFromObject_TD_1188870_input;
    tbl_SerializeFromObject_TD_1188870_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1188870_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1188870_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_1188870_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_1188870_input.allocateHost();
    tbl_SerializeFromObject_TD_1188870_input.loadHost();
    Table tbl_SerializeFromObject_TD_11102132_input;
    tbl_SerializeFromObject_TD_11102132_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11102132_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11102132_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11102132_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11102132_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11102132_input.allocateHost();
    tbl_SerializeFromObject_TD_11102132_input.loadHost();
    Table tbl_SerializeFromObject_TD_11808107_input;
    tbl_SerializeFromObject_TD_11808107_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11808107_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11808107_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11808107_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_11808107_input.allocateHost();
    tbl_SerializeFromObject_TD_11808107_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_366723_s, tv_r_Filter_10_366723_e;
    gettimeofday(&tv_r_Filter_10_366723_s, 0);
    SW_Filter_TD_1031933(tbl_SerializeFromObject_TD_11808107_input, tbl_Filter_TD_1031933_output);
    gettimeofday(&tv_r_Filter_10_366723_e, 0);

    struct timeval tv_r_Filter_10_431560_s, tv_r_Filter_10_431560_e;
    gettimeofday(&tv_r_Filter_10_431560_s, 0);
    SW_Filter_TD_10741733(tbl_SerializeFromObject_TD_11102132_input, tbl_Filter_TD_10741733_output);
    gettimeofday(&tv_r_Filter_10_431560_e, 0);

    struct timeval tv_r_Filter_10_289494_s, tv_r_Filter_10_289494_e;
    gettimeofday(&tv_r_Filter_10_289494_s, 0);
    SW_Filter_TD_10539841(tbl_SerializeFromObject_TD_1188870_input, tbl_Filter_TD_10539841_output);
    gettimeofday(&tv_r_Filter_10_289494_e, 0);

    struct timeval tv_r_Filter_10_371908_s, tv_r_Filter_10_371908_e;
    gettimeofday(&tv_r_Filter_10_371908_s, 0);
    SW_Filter_TD_10767588(tbl_SerializeFromObject_TD_11392681_input, tbl_Filter_TD_10767588_output);
    gettimeofday(&tv_r_Filter_10_371908_e, 0);

    struct timeval tv_r_Filter_9_385289_s, tv_r_Filter_9_385289_e;
    gettimeofday(&tv_r_Filter_9_385289_s, 0);
    SW_Filter_TD_9261802(tbl_SerializeFromObject_TD_10993185_input, tbl_Filter_TD_9261802_output);
    gettimeofday(&tv_r_Filter_9_385289_e, 0);

    struct timeval tv_r_JOIN_INNER_9_155850_s, tv_r_JOIN_INNER_9_155850_e;
    gettimeofday(&tv_r_JOIN_INNER_9_155850_s, 0);
    SW_JOIN_INNER_TD_9695983(tbl_Filter_TD_10741733_output, tbl_Filter_TD_1031933_output, tbl_JOIN_INNER_TD_9695983_output);
    gettimeofday(&tv_r_JOIN_INNER_9_155850_e, 0);

    struct timeval tv_r_Filter_9_834692_s, tv_r_Filter_9_834692_e;
    gettimeofday(&tv_r_Filter_9_834692_s, 0);
    SW_Filter_TD_9181945(tbl_SerializeFromObject_TD_10324686_input, tbl_Filter_TD_9181945_output);
    gettimeofday(&tv_r_Filter_9_834692_e, 0);

    struct timeval tv_r_Filter_9_887216_s, tv_r_Filter_9_887216_e;
    gettimeofday(&tv_r_Filter_9_887216_s, 0);
    SW_Filter_TD_942668(tbl_SerializeFromObject_TD_10143973_input, tbl_Filter_TD_942668_output);
    gettimeofday(&tv_r_Filter_9_887216_e, 0);

    struct timeval tv_r_Filter_9_901001_s, tv_r_Filter_9_901001_e;
    gettimeofday(&tv_r_Filter_9_901001_s, 0);
    SW_Filter_TD_9467190(tbl_SerializeFromObject_TD_10515404_input, tbl_Filter_TD_9467190_output);
    gettimeofday(&tv_r_Filter_9_901001_e, 0);

    struct timeval tv_r_JOIN_INNER_9_252334_s, tv_r_JOIN_INNER_9_252334_e;
    gettimeofday(&tv_r_JOIN_INNER_9_252334_s, 0);
    SW_JOIN_INNER_TD_9509211(tbl_Filter_TD_10767588_output, tbl_Filter_TD_10539841_output, tbl_JOIN_INNER_TD_9509211_output);
    gettimeofday(&tv_r_JOIN_INNER_9_252334_e, 0);

    struct timeval tv_r_JOIN_INNER_8_167858_s, tv_r_JOIN_INNER_8_167858_e;
    gettimeofday(&tv_r_JOIN_INNER_8_167858_s, 0);
    SW_JOIN_INNER_TD_8295190(tbl_JOIN_INNER_TD_9695983_output, tbl_Filter_TD_9261802_output, tbl_JOIN_INNER_TD_8295190_output);
    gettimeofday(&tv_r_JOIN_INNER_8_167858_e, 0);

    struct timeval tv_r_Filter_8_152227_s, tv_r_Filter_8_152227_e;
    gettimeofday(&tv_r_Filter_8_152227_s, 0);
    SW_Filter_TD_8262205(tbl_SerializeFromObject_TD_91725_input, tbl_Filter_TD_8262205_output);
    gettimeofday(&tv_r_Filter_8_152227_e, 0);

    struct timeval tv_r_JOIN_INNER_8_236372_s, tv_r_JOIN_INNER_8_236372_e;
    gettimeofday(&tv_r_JOIN_INNER_8_236372_s, 0);
    SW_JOIN_INNER_TD_8389446(tbl_Filter_TD_942668_output, tbl_Filter_TD_9181945_output, tbl_JOIN_INNER_TD_8389446_output);
    gettimeofday(&tv_r_JOIN_INNER_8_236372_e, 0);

    struct timeval tv_r_JOIN_INNER_8_562118_s, tv_r_JOIN_INNER_8_562118_e;
    gettimeofday(&tv_r_JOIN_INNER_8_562118_s, 0);
    SW_JOIN_INNER_TD_8433237(tbl_JOIN_INNER_TD_9509211_output, tbl_Filter_TD_9467190_output, tbl_JOIN_INNER_TD_8433237_output);
    gettimeofday(&tv_r_JOIN_INNER_8_562118_e, 0);

    struct timeval tv_r_Filter_7_744210_s, tv_r_Filter_7_744210_e;
    gettimeofday(&tv_r_Filter_7_744210_s, 0);
    SW_Filter_TD_7968160(tbl_SerializeFromObject_TD_8532321_input, tbl_Filter_TD_7968160_output);
    gettimeofday(&tv_r_Filter_7_744210_e, 0);

    struct timeval tv_r_Filter_7_46610_s, tv_r_Filter_7_46610_e;
    gettimeofday(&tv_r_Filter_7_46610_s, 0);
    SW_Filter_TD_7101571(tbl_SerializeFromObject_TD_8387293_input, tbl_Filter_TD_7101571_output);
    gettimeofday(&tv_r_Filter_7_46610_e, 0);

    struct timeval tv_r_Aggregate_7_479812_s, tv_r_Aggregate_7_479812_e;
    gettimeofday(&tv_r_Aggregate_7_479812_s, 0);
    SW_Aggregate_TD_763186(tbl_JOIN_INNER_TD_8295190_output, tbl_Aggregate_TD_763186_output);
    gettimeofday(&tv_r_Aggregate_7_479812_e, 0);

    struct timeval tv_r_JOIN_INNER_7_431330_s, tv_r_JOIN_INNER_7_431330_e;
    gettimeofday(&tv_r_JOIN_INNER_7_431330_s, 0);
    SW_JOIN_INNER_TD_7178507(tbl_JOIN_INNER_TD_8389446_output, tbl_Filter_TD_8262205_output, tbl_JOIN_INNER_TD_7178507_output);
    gettimeofday(&tv_r_JOIN_INNER_7_431330_e, 0);

    struct timeval tv_r_Aggregate_7_925940_s, tv_r_Aggregate_7_925940_e;
    gettimeofday(&tv_r_Aggregate_7_925940_s, 0);
    SW_Aggregate_TD_7257614(tbl_JOIN_INNER_TD_8433237_output, tbl_Aggregate_TD_7257614_output);
    gettimeofday(&tv_r_Aggregate_7_925940_e, 0);

    struct timeval tv_r_Filter_6_399764_s, tv_r_Filter_6_399764_e;
    gettimeofday(&tv_r_Filter_6_399764_s, 0);
    SW_Filter_TD_6779394(tbl_SerializeFromObject_TD_7635570_input, tbl_Filter_TD_6779394_output);
    gettimeofday(&tv_r_Filter_6_399764_e, 0);

    struct timeval tv_r_JOIN_INNER_6_323732_s, tv_r_JOIN_INNER_6_323732_e;
    gettimeofday(&tv_r_JOIN_INNER_6_323732_s, 0);
    SW_JOIN_INNER_TD_6168417(tbl_Filter_TD_7101571_output, tbl_Filter_TD_7968160_output, tbl_JOIN_INNER_TD_6168417_output);
    gettimeofday(&tv_r_JOIN_INNER_6_323732_e, 0);

    struct timeval tv_r_Filter_6_728354_s, tv_r_Filter_6_728354_e;
    gettimeofday(&tv_r_Filter_6_728354_s, 0);
    SW_Filter_TD_6563405(tbl_Aggregate_TD_763186_output, tbl_Filter_TD_6563405_output);
    gettimeofday(&tv_r_Filter_6_728354_e, 0);

    struct timeval tv_r_Aggregate_6_15989_s, tv_r_Aggregate_6_15989_e;
    gettimeofday(&tv_r_Aggregate_6_15989_s, 0);
    SW_Aggregate_TD_6564(tbl_JOIN_INNER_TD_7178507_output, tbl_Aggregate_TD_6564_output);
    gettimeofday(&tv_r_Aggregate_6_15989_e, 0);

    struct timeval tv_r_Filter_6_415049_s, tv_r_Filter_6_415049_e;
    gettimeofday(&tv_r_Filter_6_415049_s, 0);
    SW_Filter_TD_6630367(tbl_Aggregate_TD_7257614_output, tbl_Filter_TD_6630367_output);
    gettimeofday(&tv_r_Filter_6_415049_e, 0);

    struct timeval tv_r_JOIN_INNER_5_395164_s, tv_r_JOIN_INNER_5_395164_e;
    gettimeofday(&tv_r_JOIN_INNER_5_395164_s, 0);
    SW_JOIN_INNER_TD_5681857(tbl_JOIN_INNER_TD_6168417_output, tbl_Filter_TD_6779394_output, tbl_JOIN_INNER_TD_5681857_output);
    gettimeofday(&tv_r_JOIN_INNER_5_395164_e, 0);

    struct timeval tv_r_Project_5_349869_s, tv_r_Project_5_349869_e;
    gettimeofday(&tv_r_Project_5_349869_s, 0);
    SW_Project_TD_5904404(tbl_Filter_TD_6563405_output, tbl_Project_TD_5904404_output);
    gettimeofday(&tv_r_Project_5_349869_e, 0);

    struct timeval tv_r_JOIN_INNER_5_918724_s, tv_r_JOIN_INNER_5_918724_e;
    gettimeofday(&tv_r_JOIN_INNER_5_918724_s, 0);
    SW_JOIN_INNER_TD_5729656(tbl_Filter_TD_6630367_output, tbl_Aggregate_TD_6564_output, tbl_JOIN_INNER_TD_5729656_output);
    gettimeofday(&tv_r_JOIN_INNER_5_918724_e, 0);

    struct timeval tv_r_Aggregate_4_198168_s, tv_r_Aggregate_4_198168_e;
    gettimeofday(&tv_r_Aggregate_4_198168_s, 0);
    SW_Aggregate_TD_4370616(tbl_JOIN_INNER_TD_5681857_output, tbl_Aggregate_TD_4370616_output);
    gettimeofday(&tv_r_Aggregate_4_198168_e, 0);

    struct timeval tv_r_JOIN_INNER_4_472999_s, tv_r_JOIN_INNER_4_472999_e;
    gettimeofday(&tv_r_JOIN_INNER_4_472999_s, 0);
    SW_JOIN_INNER_TD_4885302(tbl_JOIN_INNER_TD_5729656_output, tbl_Project_TD_5904404_output, tbl_JOIN_INNER_TD_4885302_output);
    gettimeofday(&tv_r_JOIN_INNER_4_472999_e, 0);

    struct timeval tv_r_JOIN_INNER_3_771258_s, tv_r_JOIN_INNER_3_771258_e;
    gettimeofday(&tv_r_JOIN_INNER_3_771258_s, 0);
    SW_JOIN_INNER_TD_3617649(tbl_JOIN_INNER_TD_4885302_output, tbl_Aggregate_TD_4370616_output, tbl_JOIN_INNER_TD_3617649_output);
    gettimeofday(&tv_r_JOIN_INNER_3_771258_e, 0);

    struct timeval tv_r_Sort_2_396754_s, tv_r_Sort_2_396754_e;
    gettimeofday(&tv_r_Sort_2_396754_s, 0);
    SW_Sort_TD_2685989(tbl_JOIN_INNER_TD_3617649_output, tbl_Sort_TD_2685989_output);
    gettimeofday(&tv_r_Sort_2_396754_e, 0);

    struct timeval tv_r_LocalLimit_1_745872_s, tv_r_LocalLimit_1_745872_e;
    gettimeofday(&tv_r_LocalLimit_1_745872_s, 0);
    SW_LocalLimit_TD_1167695(tbl_Sort_TD_2685989_output, tbl_LocalLimit_TD_1167695_output);
    gettimeofday(&tv_r_LocalLimit_1_745872_e, 0);

    struct timeval tv_r_GlobalLimit_0_986674_s, tv_r_GlobalLimit_0_986674_e;
    gettimeofday(&tv_r_GlobalLimit_0_986674_s, 0);
    SW_GlobalLimit_TD_0212813(tbl_LocalLimit_TD_1167695_output, tbl_GlobalLimit_TD_0212813_output);
    gettimeofday(&tv_r_GlobalLimit_0_986674_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_366723_s, &tv_r_Filter_10_366723_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11808107_input: " << tbl_SerializeFromObject_TD_11808107_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_431560_s, &tv_r_Filter_10_431560_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11102132_input: " << tbl_SerializeFromObject_TD_11102132_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_289494_s, &tv_r_Filter_10_289494_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1188870_input: " << tbl_SerializeFromObject_TD_1188870_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_371908_s, &tv_r_Filter_10_371908_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11392681_input: " << tbl_SerializeFromObject_TD_11392681_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_385289_s, &tv_r_Filter_9_385289_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10993185_input: " << tbl_SerializeFromObject_TD_10993185_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_155850_s, &tv_r_JOIN_INNER_9_155850_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10741733_output: " << tbl_Filter_TD_10741733_output.getNumRow() << " " << "tbl_Filter_TD_1031933_output: " << tbl_Filter_TD_1031933_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_834692_s, &tv_r_Filter_9_834692_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10324686_input: " << tbl_SerializeFromObject_TD_10324686_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_887216_s, &tv_r_Filter_9_887216_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10143973_input: " << tbl_SerializeFromObject_TD_10143973_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_901001_s, &tv_r_Filter_9_901001_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10515404_input: " << tbl_SerializeFromObject_TD_10515404_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_252334_s, &tv_r_JOIN_INNER_9_252334_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10767588_output: " << tbl_Filter_TD_10767588_output.getNumRow() << " " << "tbl_Filter_TD_10539841_output: " << tbl_Filter_TD_10539841_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_167858_s, &tv_r_JOIN_INNER_8_167858_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9695983_output: " << tbl_JOIN_INNER_TD_9695983_output.getNumRow() << " " << "tbl_Filter_TD_9261802_output: " << tbl_Filter_TD_9261802_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_152227_s, &tv_r_Filter_8_152227_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_91725_input: " << tbl_SerializeFromObject_TD_91725_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_236372_s, &tv_r_JOIN_INNER_8_236372_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_942668_output: " << tbl_Filter_TD_942668_output.getNumRow() << " " << "tbl_Filter_TD_9181945_output: " << tbl_Filter_TD_9181945_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_562118_s, &tv_r_JOIN_INNER_8_562118_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9509211_output: " << tbl_JOIN_INNER_TD_9509211_output.getNumRow() << " " << "tbl_Filter_TD_9467190_output: " << tbl_Filter_TD_9467190_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_744210_s, &tv_r_Filter_7_744210_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8532321_input: " << tbl_SerializeFromObject_TD_8532321_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_46610_s, &tv_r_Filter_7_46610_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8387293_input: " << tbl_SerializeFromObject_TD_8387293_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_479812_s, &tv_r_Aggregate_7_479812_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8295190_output: " << tbl_JOIN_INNER_TD_8295190_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_431330_s, &tv_r_JOIN_INNER_7_431330_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8389446_output: " << tbl_JOIN_INNER_TD_8389446_output.getNumRow() << " " << "tbl_Filter_TD_8262205_output: " << tbl_Filter_TD_8262205_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_925940_s, &tv_r_Aggregate_7_925940_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8433237_output: " << tbl_JOIN_INNER_TD_8433237_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_399764_s, &tv_r_Filter_6_399764_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7635570_input: " << tbl_SerializeFromObject_TD_7635570_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_323732_s, &tv_r_JOIN_INNER_6_323732_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7101571_output: " << tbl_Filter_TD_7101571_output.getNumRow() << " " << "tbl_Filter_TD_7968160_output: " << tbl_Filter_TD_7968160_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_728354_s, &tv_r_Filter_6_728354_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_763186_output: " << tbl_Aggregate_TD_763186_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_15989_s, &tv_r_Aggregate_6_15989_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7178507_output: " << tbl_JOIN_INNER_TD_7178507_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_415049_s, &tv_r_Filter_6_415049_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7257614_output: " << tbl_Aggregate_TD_7257614_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_395164_s, &tv_r_JOIN_INNER_5_395164_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6168417_output: " << tbl_JOIN_INNER_TD_6168417_output.getNumRow() << " " << "tbl_Filter_TD_6779394_output: " << tbl_Filter_TD_6779394_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_349869_s, &tv_r_Project_5_349869_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6563405_output: " << tbl_Filter_TD_6563405_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_918724_s, &tv_r_JOIN_INNER_5_918724_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6630367_output: " << tbl_Filter_TD_6630367_output.getNumRow() << " " << "tbl_Aggregate_TD_6564_output: " << tbl_Aggregate_TD_6564_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_198168_s, &tv_r_Aggregate_4_198168_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5681857_output: " << tbl_JOIN_INNER_TD_5681857_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_472999_s, &tv_r_JOIN_INNER_4_472999_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5729656_output: " << tbl_JOIN_INNER_TD_5729656_output.getNumRow() << " " << "tbl_Project_TD_5904404_output: " << tbl_Project_TD_5904404_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_771258_s, &tv_r_JOIN_INNER_3_771258_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4885302_output: " << tbl_JOIN_INNER_TD_4885302_output.getNumRow() << " " << "tbl_Aggregate_TD_4370616_output: " << tbl_Aggregate_TD_4370616_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_396754_s, &tv_r_Sort_2_396754_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3617649_output: " << tbl_JOIN_INNER_TD_3617649_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_745872_s, &tv_r_LocalLimit_1_745872_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2685989_output: " << tbl_Sort_TD_2685989_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_986674_s, &tv_r_GlobalLimit_0_986674_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1167695_output: " << tbl_LocalLimit_TD_1167695_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.3181062 * 1000 << "ms" << std::endl; 
    return 0; 
}
