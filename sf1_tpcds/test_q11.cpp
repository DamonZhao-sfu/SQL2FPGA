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

#include "cfgFunc_q11.hpp" 
#include "q11.hpp" 

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
    std::cout << "NOTE:running query #11\n."; 
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
    Table tbl_GlobalLimit_TD_0390956_output("tbl_GlobalLimit_TD_0390956_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0390956_output.allocateHost();
    Table tbl_LocalLimit_TD_1474584_output("tbl_LocalLimit_TD_1474584_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1474584_output.allocateHost();
    Table tbl_Sort_TD_2375492_output("tbl_Sort_TD_2375492_output", 6100000, 4, "");
    tbl_Sort_TD_2375492_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3134678_output("tbl_JOIN_INNER_TD_3134678_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3134678_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4684294_output("tbl_JOIN_INNER_TD_4684294_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4684294_output.allocateHost();
    Table tbl_Aggregate_TD_4227102_output("tbl_Aggregate_TD_4227102_output", 6100000, 2, "");
    tbl_Aggregate_TD_4227102_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5718613_output("tbl_JOIN_INNER_TD_5718613_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5718613_output.allocateHost();
    Table tbl_Project_TD_5627054_output("tbl_Project_TD_5627054_output", 6100000, 2, "");
    tbl_Project_TD_5627054_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5561400_output("tbl_JOIN_INNER_TD_5561400_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_5561400_output.allocateHost();
    Table tbl_Filter_TD_6675945_output("tbl_Filter_TD_6675945_output", 6100000, 2, "");
    tbl_Filter_TD_6675945_output.allocateHost();
    Table tbl_Aggregate_TD_6768095_output("tbl_Aggregate_TD_6768095_output", 6100000, 5, "");
    tbl_Aggregate_TD_6768095_output.allocateHost();
    Table tbl_Filter_TD_6775461_output("tbl_Filter_TD_6775461_output", 6100000, 2, "");
    tbl_Filter_TD_6775461_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6938161_output("tbl_JOIN_INNER_TD_6938161_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_6938161_output.allocateHost();
    Table tbl_Filter_TD_6903073_output("tbl_Filter_TD_6903073_output", 6100000, 2, "");
    tbl_Filter_TD_6903073_output.allocateHost();
    Table tbl_Aggregate_TD_7531914_output("tbl_Aggregate_TD_7531914_output", 6100000, 2, "");
    tbl_Aggregate_TD_7531914_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7685463_output("tbl_JOIN_INNER_TD_7685463_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_7685463_output.allocateHost();
    Table tbl_Aggregate_TD_7929347_output("tbl_Aggregate_TD_7929347_output", 6100000, 2, "");
    tbl_Aggregate_TD_7929347_output.allocateHost();
    Table tbl_Filter_TD_7748576_output("tbl_Filter_TD_7748576_output", 6100000, 8, "");
    tbl_Filter_TD_7748576_output.allocateHost();
    Table tbl_Filter_TD_7151844_output("tbl_Filter_TD_7151844_output", 6100000, 4, "");
    tbl_Filter_TD_7151844_output.allocateHost();
    Table tbl_SerializeFromObject_TD_747633_input;
    tbl_SerializeFromObject_TD_747633_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_747633_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_747633_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_747633_input.allocateHost();
    tbl_SerializeFromObject_TD_747633_input.loadHost();
    Table tbl_JOIN_INNER_TD_8102244_output("tbl_JOIN_INNER_TD_8102244_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8102244_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8507778_output("tbl_JOIN_INNER_TD_8507778_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8507778_output.allocateHost();
    Table tbl_Filter_TD_8859214_output("tbl_Filter_TD_8859214_output", 6100000, 2, "");
    tbl_Filter_TD_8859214_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8636343_output("tbl_JOIN_INNER_TD_8636343_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8636343_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8181325_input;
    tbl_SerializeFromObject_TD_8181325_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_8181325_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8181325_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8181325_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8181325_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8181325_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8181325_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8181325_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8181325_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8181325_input.allocateHost();
    tbl_SerializeFromObject_TD_8181325_input.loadHost();
    Table tbl_SerializeFromObject_TD_8363848_input;
    tbl_SerializeFromObject_TD_8363848_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8363848_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8363848_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_8363848_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_8363848_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_8363848_input.allocateHost();
    tbl_SerializeFromObject_TD_8363848_input.loadHost();
    Table tbl_JOIN_INNER_TD_9818140_output("tbl_JOIN_INNER_TD_9818140_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_9818140_output.allocateHost();
    Table tbl_Filter_TD_9480838_output("tbl_Filter_TD_9480838_output", 6100000, 2, "");
    tbl_Filter_TD_9480838_output.allocateHost();
    Table tbl_Filter_TD_9182746_output("tbl_Filter_TD_9182746_output", 6100000, 8, "");
    tbl_Filter_TD_9182746_output.allocateHost();
    Table tbl_Filter_TD_9517431_output("tbl_Filter_TD_9517431_output", 6100000, 4, "");
    tbl_Filter_TD_9517431_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9197035_input;
    tbl_SerializeFromObject_TD_9197035_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9197035_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9197035_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9197035_input.allocateHost();
    tbl_SerializeFromObject_TD_9197035_input.loadHost();
    Table tbl_JOIN_INNER_TD_94962_output("tbl_JOIN_INNER_TD_94962_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_94962_output.allocateHost();
    Table tbl_Filter_TD_9867021_output("tbl_Filter_TD_9867021_output", 6100000, 2, "");
    tbl_Filter_TD_9867021_output.allocateHost();
    Table tbl_Filter_TD_10424401_output("tbl_Filter_TD_10424401_output", 6100000, 8, "");
    tbl_Filter_TD_10424401_output.allocateHost();
    Table tbl_Filter_TD_10861231_output("tbl_Filter_TD_10861231_output", 6100000, 4, "");
    tbl_Filter_TD_10861231_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10618827_input;
    tbl_SerializeFromObject_TD_10618827_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10618827_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10618827_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10618827_input.allocateHost();
    tbl_SerializeFromObject_TD_10618827_input.loadHost();
    Table tbl_SerializeFromObject_TD_1091238_input;
    tbl_SerializeFromObject_TD_1091238_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_1091238_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_1091238_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1091238_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1091238_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1091238_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1091238_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1091238_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1091238_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1091238_input.allocateHost();
    tbl_SerializeFromObject_TD_1091238_input.loadHost();
    Table tbl_SerializeFromObject_TD_10648325_input;
    tbl_SerializeFromObject_TD_10648325_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10648325_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10648325_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10648325_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_10648325_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_10648325_input.allocateHost();
    tbl_SerializeFromObject_TD_10648325_input.loadHost();
    Table tbl_Filter_TD_10428265_output("tbl_Filter_TD_10428265_output", 6100000, 8, "");
    tbl_Filter_TD_10428265_output.allocateHost();
    Table tbl_Filter_TD_10127855_output("tbl_Filter_TD_10127855_output", 6100000, 4, "");
    tbl_Filter_TD_10127855_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10845829_input;
    tbl_SerializeFromObject_TD_10845829_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10845829_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10845829_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10845829_input.allocateHost();
    tbl_SerializeFromObject_TD_10845829_input.loadHost();
    Table tbl_SerializeFromObject_TD_11673566_input;
    tbl_SerializeFromObject_TD_11673566_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_11673566_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11673566_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11673566_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11673566_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11673566_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11673566_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11673566_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11673566_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11673566_input.allocateHost();
    tbl_SerializeFromObject_TD_11673566_input.loadHost();
    Table tbl_SerializeFromObject_TD_1130114_input;
    tbl_SerializeFromObject_TD_1130114_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1130114_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1130114_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_1130114_input.addCol("ss_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_1130114_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_1130114_input.allocateHost();
    tbl_SerializeFromObject_TD_1130114_input.loadHost();
    Table tbl_SerializeFromObject_TD_11884660_input;
    tbl_SerializeFromObject_TD_11884660_input = Table("customer", customer_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_11884660_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11884660_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11884660_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11884660_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11884660_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11884660_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11884660_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11884660_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11884660_input.allocateHost();
    tbl_SerializeFromObject_TD_11884660_input.loadHost();
    Table tbl_SerializeFromObject_TD_11577603_input;
    tbl_SerializeFromObject_TD_11577603_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11577603_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11577603_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11577603_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_11577603_input.addCol("ws_ext_list_price", 4);
    tbl_SerializeFromObject_TD_11577603_input.allocateHost();
    tbl_SerializeFromObject_TD_11577603_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_25844_s, tv_r_Filter_10_25844_e;
    gettimeofday(&tv_r_Filter_10_25844_s, 0);
    SW_Filter_TD_10127855(tbl_SerializeFromObject_TD_11577603_input, tbl_Filter_TD_10127855_output);
    gettimeofday(&tv_r_Filter_10_25844_e, 0);

    struct timeval tv_r_Filter_10_761780_s, tv_r_Filter_10_761780_e;
    gettimeofday(&tv_r_Filter_10_761780_s, 0);
    SW_Filter_TD_10428265(tbl_SerializeFromObject_TD_11884660_input, tbl_Filter_TD_10428265_output);
    gettimeofday(&tv_r_Filter_10_761780_e, 0);

    struct timeval tv_r_Filter_10_578623_s, tv_r_Filter_10_578623_e;
    gettimeofday(&tv_r_Filter_10_578623_s, 0);
    SW_Filter_TD_10861231(tbl_SerializeFromObject_TD_1130114_input, tbl_Filter_TD_10861231_output);
    gettimeofday(&tv_r_Filter_10_578623_e, 0);

    struct timeval tv_r_Filter_10_313388_s, tv_r_Filter_10_313388_e;
    gettimeofday(&tv_r_Filter_10_313388_s, 0);
    SW_Filter_TD_10424401(tbl_SerializeFromObject_TD_11673566_input, tbl_Filter_TD_10424401_output);
    gettimeofday(&tv_r_Filter_10_313388_e, 0);

    struct timeval tv_r_Filter_9_44056_s, tv_r_Filter_9_44056_e;
    gettimeofday(&tv_r_Filter_9_44056_s, 0);
    SW_Filter_TD_9867021(tbl_SerializeFromObject_TD_10845829_input, tbl_Filter_TD_9867021_output);
    gettimeofday(&tv_r_Filter_9_44056_e, 0);

    struct timeval tv_r_JOIN_INNER_9_370574_s, tv_r_JOIN_INNER_9_370574_e;
    gettimeofday(&tv_r_JOIN_INNER_9_370574_s, 0);
    SW_JOIN_INNER_TD_94962(tbl_Filter_TD_10428265_output, tbl_Filter_TD_10127855_output, tbl_JOIN_INNER_TD_94962_output);
    gettimeofday(&tv_r_JOIN_INNER_9_370574_e, 0);

    struct timeval tv_r_Filter_9_401052_s, tv_r_Filter_9_401052_e;
    gettimeofday(&tv_r_Filter_9_401052_s, 0);
    SW_Filter_TD_9517431(tbl_SerializeFromObject_TD_10648325_input, tbl_Filter_TD_9517431_output);
    gettimeofday(&tv_r_Filter_9_401052_e, 0);

    struct timeval tv_r_Filter_9_717449_s, tv_r_Filter_9_717449_e;
    gettimeofday(&tv_r_Filter_9_717449_s, 0);
    SW_Filter_TD_9182746(tbl_SerializeFromObject_TD_1091238_input, tbl_Filter_TD_9182746_output);
    gettimeofday(&tv_r_Filter_9_717449_e, 0);

    struct timeval tv_r_Filter_9_174841_s, tv_r_Filter_9_174841_e;
    gettimeofday(&tv_r_Filter_9_174841_s, 0);
    SW_Filter_TD_9480838(tbl_SerializeFromObject_TD_10618827_input, tbl_Filter_TD_9480838_output);
    gettimeofday(&tv_r_Filter_9_174841_e, 0);

    struct timeval tv_r_JOIN_INNER_9_496570_s, tv_r_JOIN_INNER_9_496570_e;
    gettimeofday(&tv_r_JOIN_INNER_9_496570_s, 0);
    SW_JOIN_INNER_TD_9818140(tbl_Filter_TD_10424401_output, tbl_Filter_TD_10861231_output, tbl_JOIN_INNER_TD_9818140_output);
    gettimeofday(&tv_r_JOIN_INNER_9_496570_e, 0);

    struct timeval tv_r_JOIN_INNER_8_599687_s, tv_r_JOIN_INNER_8_599687_e;
    gettimeofday(&tv_r_JOIN_INNER_8_599687_s, 0);
    SW_JOIN_INNER_TD_8636343(tbl_JOIN_INNER_TD_94962_output, tbl_Filter_TD_9867021_output, tbl_JOIN_INNER_TD_8636343_output);
    gettimeofday(&tv_r_JOIN_INNER_8_599687_e, 0);

    struct timeval tv_r_Filter_8_417242_s, tv_r_Filter_8_417242_e;
    gettimeofday(&tv_r_Filter_8_417242_s, 0);
    SW_Filter_TD_8859214(tbl_SerializeFromObject_TD_9197035_input, tbl_Filter_TD_8859214_output);
    gettimeofday(&tv_r_Filter_8_417242_e, 0);

    struct timeval tv_r_JOIN_INNER_8_426073_s, tv_r_JOIN_INNER_8_426073_e;
    gettimeofday(&tv_r_JOIN_INNER_8_426073_s, 0);
    SW_JOIN_INNER_TD_8507778(tbl_Filter_TD_9182746_output, tbl_Filter_TD_9517431_output, tbl_JOIN_INNER_TD_8507778_output);
    gettimeofday(&tv_r_JOIN_INNER_8_426073_e, 0);

    struct timeval tv_r_JOIN_INNER_8_175501_s, tv_r_JOIN_INNER_8_175501_e;
    gettimeofday(&tv_r_JOIN_INNER_8_175501_s, 0);
    SW_JOIN_INNER_TD_8102244(tbl_JOIN_INNER_TD_9818140_output, tbl_Filter_TD_9480838_output, tbl_JOIN_INNER_TD_8102244_output);
    gettimeofday(&tv_r_JOIN_INNER_8_175501_e, 0);

    struct timeval tv_r_Filter_7_732174_s, tv_r_Filter_7_732174_e;
    gettimeofday(&tv_r_Filter_7_732174_s, 0);
    SW_Filter_TD_7151844(tbl_SerializeFromObject_TD_8363848_input, tbl_Filter_TD_7151844_output);
    gettimeofday(&tv_r_Filter_7_732174_e, 0);

    struct timeval tv_r_Filter_7_692872_s, tv_r_Filter_7_692872_e;
    gettimeofday(&tv_r_Filter_7_692872_s, 0);
    SW_Filter_TD_7748576(tbl_SerializeFromObject_TD_8181325_input, tbl_Filter_TD_7748576_output);
    gettimeofday(&tv_r_Filter_7_692872_e, 0);

    struct timeval tv_r_Aggregate_7_173993_s, tv_r_Aggregate_7_173993_e;
    gettimeofday(&tv_r_Aggregate_7_173993_s, 0);
    SW_Aggregate_TD_7929347(tbl_JOIN_INNER_TD_8636343_output, tbl_Aggregate_TD_7929347_output);
    gettimeofday(&tv_r_Aggregate_7_173993_e, 0);

    struct timeval tv_r_JOIN_INNER_7_830207_s, tv_r_JOIN_INNER_7_830207_e;
    gettimeofday(&tv_r_JOIN_INNER_7_830207_s, 0);
    SW_JOIN_INNER_TD_7685463(tbl_JOIN_INNER_TD_8507778_output, tbl_Filter_TD_8859214_output, tbl_JOIN_INNER_TD_7685463_output);
    gettimeofday(&tv_r_JOIN_INNER_7_830207_e, 0);

    struct timeval tv_r_Aggregate_7_129070_s, tv_r_Aggregate_7_129070_e;
    gettimeofday(&tv_r_Aggregate_7_129070_s, 0);
    SW_Aggregate_TD_7531914(tbl_JOIN_INNER_TD_8102244_output, tbl_Aggregate_TD_7531914_output);
    gettimeofday(&tv_r_Aggregate_7_129070_e, 0);

    struct timeval tv_r_Filter_6_471383_s, tv_r_Filter_6_471383_e;
    gettimeofday(&tv_r_Filter_6_471383_s, 0);
    SW_Filter_TD_6903073(tbl_SerializeFromObject_TD_747633_input, tbl_Filter_TD_6903073_output);
    gettimeofday(&tv_r_Filter_6_471383_e, 0);

    struct timeval tv_r_JOIN_INNER_6_640140_s, tv_r_JOIN_INNER_6_640140_e;
    gettimeofday(&tv_r_JOIN_INNER_6_640140_s, 0);
    SW_JOIN_INNER_TD_6938161(tbl_Filter_TD_7748576_output, tbl_Filter_TD_7151844_output, tbl_JOIN_INNER_TD_6938161_output);
    gettimeofday(&tv_r_JOIN_INNER_6_640140_e, 0);

    struct timeval tv_r_Filter_6_898756_s, tv_r_Filter_6_898756_e;
    gettimeofday(&tv_r_Filter_6_898756_s, 0);
    SW_Filter_TD_6775461(tbl_Aggregate_TD_7929347_output, tbl_Filter_TD_6775461_output);
    gettimeofday(&tv_r_Filter_6_898756_e, 0);

    struct timeval tv_r_Aggregate_6_797405_s, tv_r_Aggregate_6_797405_e;
    gettimeofday(&tv_r_Aggregate_6_797405_s, 0);
    SW_Aggregate_TD_6768095(tbl_JOIN_INNER_TD_7685463_output, tbl_Aggregate_TD_6768095_output);
    gettimeofday(&tv_r_Aggregate_6_797405_e, 0);

    struct timeval tv_r_Filter_6_467986_s, tv_r_Filter_6_467986_e;
    gettimeofday(&tv_r_Filter_6_467986_s, 0);
    SW_Filter_TD_6675945(tbl_Aggregate_TD_7531914_output, tbl_Filter_TD_6675945_output);
    gettimeofday(&tv_r_Filter_6_467986_e, 0);

    struct timeval tv_r_JOIN_INNER_5_741812_s, tv_r_JOIN_INNER_5_741812_e;
    gettimeofday(&tv_r_JOIN_INNER_5_741812_s, 0);
    SW_JOIN_INNER_TD_5561400(tbl_JOIN_INNER_TD_6938161_output, tbl_Filter_TD_6903073_output, tbl_JOIN_INNER_TD_5561400_output);
    gettimeofday(&tv_r_JOIN_INNER_5_741812_e, 0);

    struct timeval tv_r_Project_5_855048_s, tv_r_Project_5_855048_e;
    gettimeofday(&tv_r_Project_5_855048_s, 0);
    SW_Project_TD_5627054(tbl_Filter_TD_6775461_output, tbl_Project_TD_5627054_output);
    gettimeofday(&tv_r_Project_5_855048_e, 0);

    struct timeval tv_r_JOIN_INNER_5_986564_s, tv_r_JOIN_INNER_5_986564_e;
    gettimeofday(&tv_r_JOIN_INNER_5_986564_s, 0);
    SW_JOIN_INNER_TD_5718613(tbl_Filter_TD_6675945_output, tbl_Aggregate_TD_6768095_output, tbl_JOIN_INNER_TD_5718613_output);
    gettimeofday(&tv_r_JOIN_INNER_5_986564_e, 0);

    struct timeval tv_r_Aggregate_4_911575_s, tv_r_Aggregate_4_911575_e;
    gettimeofday(&tv_r_Aggregate_4_911575_s, 0);
    SW_Aggregate_TD_4227102(tbl_JOIN_INNER_TD_5561400_output, tbl_Aggregate_TD_4227102_output);
    gettimeofday(&tv_r_Aggregate_4_911575_e, 0);

    struct timeval tv_r_JOIN_INNER_4_941993_s, tv_r_JOIN_INNER_4_941993_e;
    gettimeofday(&tv_r_JOIN_INNER_4_941993_s, 0);
    SW_JOIN_INNER_TD_4684294(tbl_JOIN_INNER_TD_5718613_output, tbl_Project_TD_5627054_output, tbl_JOIN_INNER_TD_4684294_output);
    gettimeofday(&tv_r_JOIN_INNER_4_941993_e, 0);

    struct timeval tv_r_JOIN_INNER_3_999884_s, tv_r_JOIN_INNER_3_999884_e;
    gettimeofday(&tv_r_JOIN_INNER_3_999884_s, 0);
    SW_JOIN_INNER_TD_3134678(tbl_JOIN_INNER_TD_4684294_output, tbl_Aggregate_TD_4227102_output, tbl_JOIN_INNER_TD_3134678_output);
    gettimeofday(&tv_r_JOIN_INNER_3_999884_e, 0);

    struct timeval tv_r_Sort_2_172939_s, tv_r_Sort_2_172939_e;
    gettimeofday(&tv_r_Sort_2_172939_s, 0);
    SW_Sort_TD_2375492(tbl_JOIN_INNER_TD_3134678_output, tbl_Sort_TD_2375492_output);
    gettimeofday(&tv_r_Sort_2_172939_e, 0);

    struct timeval tv_r_LocalLimit_1_387708_s, tv_r_LocalLimit_1_387708_e;
    gettimeofday(&tv_r_LocalLimit_1_387708_s, 0);
    SW_LocalLimit_TD_1474584(tbl_Sort_TD_2375492_output, tbl_LocalLimit_TD_1474584_output);
    gettimeofday(&tv_r_LocalLimit_1_387708_e, 0);

    struct timeval tv_r_GlobalLimit_0_123560_s, tv_r_GlobalLimit_0_123560_e;
    gettimeofday(&tv_r_GlobalLimit_0_123560_s, 0);
    SW_GlobalLimit_TD_0390956(tbl_LocalLimit_TD_1474584_output, tbl_GlobalLimit_TD_0390956_output);
    gettimeofday(&tv_r_GlobalLimit_0_123560_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_25844_s, &tv_r_Filter_10_25844_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11577603_input: " << tbl_SerializeFromObject_TD_11577603_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_761780_s, &tv_r_Filter_10_761780_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11884660_input: " << tbl_SerializeFromObject_TD_11884660_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_578623_s, &tv_r_Filter_10_578623_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1130114_input: " << tbl_SerializeFromObject_TD_1130114_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_313388_s, &tv_r_Filter_10_313388_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11673566_input: " << tbl_SerializeFromObject_TD_11673566_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_44056_s, &tv_r_Filter_9_44056_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10845829_input: " << tbl_SerializeFromObject_TD_10845829_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_370574_s, &tv_r_JOIN_INNER_9_370574_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10428265_output: " << tbl_Filter_TD_10428265_output.getNumRow() << " " << "tbl_Filter_TD_10127855_output: " << tbl_Filter_TD_10127855_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_401052_s, &tv_r_Filter_9_401052_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10648325_input: " << tbl_SerializeFromObject_TD_10648325_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_717449_s, &tv_r_Filter_9_717449_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1091238_input: " << tbl_SerializeFromObject_TD_1091238_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_174841_s, &tv_r_Filter_9_174841_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10618827_input: " << tbl_SerializeFromObject_TD_10618827_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_496570_s, &tv_r_JOIN_INNER_9_496570_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10424401_output: " << tbl_Filter_TD_10424401_output.getNumRow() << " " << "tbl_Filter_TD_10861231_output: " << tbl_Filter_TD_10861231_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_599687_s, &tv_r_JOIN_INNER_8_599687_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_94962_output: " << tbl_JOIN_INNER_TD_94962_output.getNumRow() << " " << "tbl_Filter_TD_9867021_output: " << tbl_Filter_TD_9867021_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_417242_s, &tv_r_Filter_8_417242_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9197035_input: " << tbl_SerializeFromObject_TD_9197035_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_426073_s, &tv_r_JOIN_INNER_8_426073_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9182746_output: " << tbl_Filter_TD_9182746_output.getNumRow() << " " << "tbl_Filter_TD_9517431_output: " << tbl_Filter_TD_9517431_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_175501_s, &tv_r_JOIN_INNER_8_175501_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9818140_output: " << tbl_JOIN_INNER_TD_9818140_output.getNumRow() << " " << "tbl_Filter_TD_9480838_output: " << tbl_Filter_TD_9480838_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_732174_s, &tv_r_Filter_7_732174_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8363848_input: " << tbl_SerializeFromObject_TD_8363848_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_692872_s, &tv_r_Filter_7_692872_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8181325_input: " << tbl_SerializeFromObject_TD_8181325_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_173993_s, &tv_r_Aggregate_7_173993_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8636343_output: " << tbl_JOIN_INNER_TD_8636343_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_830207_s, &tv_r_JOIN_INNER_7_830207_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8507778_output: " << tbl_JOIN_INNER_TD_8507778_output.getNumRow() << " " << "tbl_Filter_TD_8859214_output: " << tbl_Filter_TD_8859214_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_129070_s, &tv_r_Aggregate_7_129070_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8102244_output: " << tbl_JOIN_INNER_TD_8102244_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_471383_s, &tv_r_Filter_6_471383_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_747633_input: " << tbl_SerializeFromObject_TD_747633_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_640140_s, &tv_r_JOIN_INNER_6_640140_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7748576_output: " << tbl_Filter_TD_7748576_output.getNumRow() << " " << "tbl_Filter_TD_7151844_output: " << tbl_Filter_TD_7151844_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_898756_s, &tv_r_Filter_6_898756_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7929347_output: " << tbl_Aggregate_TD_7929347_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_797405_s, &tv_r_Aggregate_6_797405_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7685463_output: " << tbl_JOIN_INNER_TD_7685463_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_467986_s, &tv_r_Filter_6_467986_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7531914_output: " << tbl_Aggregate_TD_7531914_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_741812_s, &tv_r_JOIN_INNER_5_741812_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6938161_output: " << tbl_JOIN_INNER_TD_6938161_output.getNumRow() << " " << "tbl_Filter_TD_6903073_output: " << tbl_Filter_TD_6903073_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_855048_s, &tv_r_Project_5_855048_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6775461_output: " << tbl_Filter_TD_6775461_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_986564_s, &tv_r_JOIN_INNER_5_986564_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6675945_output: " << tbl_Filter_TD_6675945_output.getNumRow() << " " << "tbl_Aggregate_TD_6768095_output: " << tbl_Aggregate_TD_6768095_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_911575_s, &tv_r_Aggregate_4_911575_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5561400_output: " << tbl_JOIN_INNER_TD_5561400_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_941993_s, &tv_r_JOIN_INNER_4_941993_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5718613_output: " << tbl_JOIN_INNER_TD_5718613_output.getNumRow() << " " << "tbl_Project_TD_5627054_output: " << tbl_Project_TD_5627054_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_999884_s, &tv_r_JOIN_INNER_3_999884_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4684294_output: " << tbl_JOIN_INNER_TD_4684294_output.getNumRow() << " " << "tbl_Aggregate_TD_4227102_output: " << tbl_Aggregate_TD_4227102_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_172939_s, &tv_r_Sort_2_172939_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3134678_output: " << tbl_JOIN_INNER_TD_3134678_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_387708_s, &tv_r_LocalLimit_1_387708_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2375492_output: " << tbl_Sort_TD_2375492_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_123560_s, &tv_r_GlobalLimit_0_123560_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1474584_output: " << tbl_LocalLimit_TD_1474584_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.8204637 * 1000 << "ms" << std::endl; 
    return 0; 
}
