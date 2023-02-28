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

#include "cfgFunc_q59.hpp" 
#include "q59.hpp" 

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
    std::cout << "NOTE:running query #59\n."; 
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
    Table tbl_GlobalLimit_TD_0349849_output("tbl_GlobalLimit_TD_0349849_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_0349849_output.allocateHost();
    Table tbl_LocalLimit_TD_1229133_output("tbl_LocalLimit_TD_1229133_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1229133_output.allocateHost();
    Table tbl_Sort_TD_2975885_output("tbl_Sort_TD_2975885_output", 6100000, 10, "");
    tbl_Sort_TD_2975885_output.allocateHost();
    Table tbl_Project_TD_3897509_output("tbl_Project_TD_3897509_output", 6100000, 10, "");
    tbl_Project_TD_3897509_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4344734_output("tbl_JOIN_INNER_TD_4344734_output", 6100000, 17, "");
    tbl_JOIN_INNER_TD_4344734_output.allocateHost();
    Table tbl_Project_TD_5200571_output("tbl_Project_TD_5200571_output", 6100000, 10, "");
    tbl_Project_TD_5200571_output.allocateHost();
    Table tbl_Project_TD_5751441_output("tbl_Project_TD_5751441_output", 6100000, 9, "");
    tbl_Project_TD_5751441_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6488639_output("tbl_JOIN_INNER_TD_6488639_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_6488639_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6360733_output("tbl_JOIN_INNER_TD_6360733_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_6360733_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7873929_output("tbl_JOIN_INNER_TD_7873929_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_7873929_output.allocateHost();
    Table tbl_Filter_TD_7297408_output("tbl_Filter_TD_7297408_output", 6100000, 1, "");
    tbl_Filter_TD_7297408_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7649616_output("tbl_JOIN_INNER_TD_7649616_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_7649616_output.allocateHost();
    Table tbl_Filter_TD_7229147_output("tbl_Filter_TD_7229147_output", 6100000, 1, "");
    tbl_Filter_TD_7229147_output.allocateHost();
    Table tbl_Aggregate_TD_8828940_output("tbl_Aggregate_TD_8828940_output", 6100000, 9, "");
    tbl_Aggregate_TD_8828940_output.allocateHost();
    Table tbl_Filter_TD_884436_output("tbl_Filter_TD_884436_output", 6100000, 3, "");
    tbl_Filter_TD_884436_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8781349_input;
    tbl_SerializeFromObject_TD_8781349_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8781349_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_8781349_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8781349_input.allocateHost();
    tbl_SerializeFromObject_TD_8781349_input.loadHost();
    Table tbl_Aggregate_TD_8913145_output("tbl_Aggregate_TD_8913145_output", 6100000, 9, "");
    tbl_Aggregate_TD_8913145_output.allocateHost();
    Table tbl_Filter_TD_8426158_output("tbl_Filter_TD_8426158_output", 6100000, 2, "");
    tbl_Filter_TD_8426158_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8346915_input;
    tbl_SerializeFromObject_TD_8346915_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8346915_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_8346915_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8346915_input.allocateHost();
    tbl_SerializeFromObject_TD_8346915_input.loadHost();
    Table tbl_JOIN_INNER_TD_9109703_output("tbl_JOIN_INNER_TD_9109703_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_9109703_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9137603_input;
    tbl_SerializeFromObject_TD_9137603_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9137603_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9137603_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9137603_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9137603_input.allocateHost();
    tbl_SerializeFromObject_TD_9137603_input.loadHost();
    Table tbl_JOIN_INNER_TD_9128274_output("tbl_JOIN_INNER_TD_9128274_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_9128274_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9832151_input;
    tbl_SerializeFromObject_TD_9832151_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9832151_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9832151_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9832151_input.allocateHost();
    tbl_SerializeFromObject_TD_9832151_input.loadHost();
    Table tbl_Filter_TD_10517055_output("tbl_Filter_TD_10517055_output", 6100000, 3, "");
    tbl_Filter_TD_10517055_output.allocateHost();
    Table tbl_Filter_TD_10622206_output("tbl_Filter_TD_10622206_output", 6100000, 3, "");
    tbl_Filter_TD_10622206_output.allocateHost();
    Table tbl_Filter_TD_10180785_output("tbl_Filter_TD_10180785_output", 6100000, 3, "");
    tbl_Filter_TD_10180785_output.allocateHost();
    Table tbl_Filter_TD_1025987_output("tbl_Filter_TD_1025987_output", 6100000, 3, "");
    tbl_Filter_TD_1025987_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11953518_input;
    tbl_SerializeFromObject_TD_11953518_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11953518_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11953518_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11953518_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_11953518_input.allocateHost();
    tbl_SerializeFromObject_TD_11953518_input.loadHost();
    Table tbl_SerializeFromObject_TD_11143336_input;
    tbl_SerializeFromObject_TD_11143336_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11143336_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11143336_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11143336_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11143336_input.allocateHost();
    tbl_SerializeFromObject_TD_11143336_input.loadHost();
    Table tbl_SerializeFromObject_TD_11131468_input;
    tbl_SerializeFromObject_TD_11131468_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11131468_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11131468_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11131468_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_11131468_input.allocateHost();
    tbl_SerializeFromObject_TD_11131468_input.loadHost();
    Table tbl_SerializeFromObject_TD_11637062_input;
    tbl_SerializeFromObject_TD_11637062_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11637062_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11637062_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11637062_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11637062_input.allocateHost();
    tbl_SerializeFromObject_TD_11637062_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_606020_s, tv_r_Filter_10_606020_e;
    gettimeofday(&tv_r_Filter_10_606020_s, 0);
    SW_Filter_TD_1025987(tbl_SerializeFromObject_TD_11637062_input, tbl_Filter_TD_1025987_output);
    gettimeofday(&tv_r_Filter_10_606020_e, 0);

    struct timeval tv_r_Filter_10_296769_s, tv_r_Filter_10_296769_e;
    gettimeofday(&tv_r_Filter_10_296769_s, 0);
    SW_Filter_TD_10180785(tbl_SerializeFromObject_TD_11131468_input, tbl_Filter_TD_10180785_output);
    gettimeofday(&tv_r_Filter_10_296769_e, 0);

    struct timeval tv_r_Filter_10_922256_s, tv_r_Filter_10_922256_e;
    gettimeofday(&tv_r_Filter_10_922256_s, 0);
    SW_Filter_TD_10622206(tbl_SerializeFromObject_TD_11143336_input, tbl_Filter_TD_10622206_output);
    gettimeofday(&tv_r_Filter_10_922256_e, 0);

    struct timeval tv_r_Filter_10_447095_s, tv_r_Filter_10_447095_e;
    gettimeofday(&tv_r_Filter_10_447095_s, 0);
    SW_Filter_TD_10517055(tbl_SerializeFromObject_TD_11953518_input, tbl_Filter_TD_10517055_output);
    gettimeofday(&tv_r_Filter_10_447095_e, 0);

    struct timeval tv_r_JOIN_INNER_9_192503_s, tv_r_JOIN_INNER_9_192503_e;
    gettimeofday(&tv_r_JOIN_INNER_9_192503_s, 0);
    SW_JOIN_INNER_TD_9128274(tbl_Filter_TD_10180785_output, tbl_Filter_TD_1025987_output, tbl_JOIN_INNER_TD_9128274_output);
    gettimeofday(&tv_r_JOIN_INNER_9_192503_e, 0);

    struct timeval tv_r_JOIN_INNER_9_21838_s, tv_r_JOIN_INNER_9_21838_e;
    gettimeofday(&tv_r_JOIN_INNER_9_21838_s, 0);
    SW_JOIN_INNER_TD_9109703(tbl_Filter_TD_10517055_output, tbl_Filter_TD_10622206_output, tbl_JOIN_INNER_TD_9109703_output);
    gettimeofday(&tv_r_JOIN_INNER_9_21838_e, 0);

    struct timeval tv_r_Filter_8_171258_s, tv_r_Filter_8_171258_e;
    gettimeofday(&tv_r_Filter_8_171258_s, 0);
    SW_Filter_TD_8426158(tbl_SerializeFromObject_TD_9832151_input, tbl_Filter_TD_8426158_output);
    gettimeofday(&tv_r_Filter_8_171258_e, 0);

    struct timeval tv_r_Aggregate_8_16559_s, tv_r_Aggregate_8_16559_e;
    gettimeofday(&tv_r_Aggregate_8_16559_s, 0);
    SW_Aggregate_TD_8913145(tbl_JOIN_INNER_TD_9128274_output, tbl_Aggregate_TD_8913145_output);
    gettimeofday(&tv_r_Aggregate_8_16559_e, 0);

    struct timeval tv_r_Filter_8_675200_s, tv_r_Filter_8_675200_e;
    gettimeofday(&tv_r_Filter_8_675200_s, 0);
    SW_Filter_TD_884436(tbl_SerializeFromObject_TD_9137603_input, tbl_Filter_TD_884436_output);
    gettimeofday(&tv_r_Filter_8_675200_e, 0);

    struct timeval tv_r_Aggregate_8_115651_s, tv_r_Aggregate_8_115651_e;
    gettimeofday(&tv_r_Aggregate_8_115651_s, 0);
    SW_Aggregate_TD_8828940(tbl_JOIN_INNER_TD_9109703_output, tbl_Aggregate_TD_8828940_output);
    gettimeofday(&tv_r_Aggregate_8_115651_e, 0);

    struct timeval tv_r_Filter_7_528607_s, tv_r_Filter_7_528607_e;
    gettimeofday(&tv_r_Filter_7_528607_s, 0);
    SW_Filter_TD_7229147(tbl_SerializeFromObject_TD_8346915_input, tbl_Filter_TD_7229147_output);
    gettimeofday(&tv_r_Filter_7_528607_e, 0);

    struct timeval tv_r_JOIN_INNER_7_231811_s, tv_r_JOIN_INNER_7_231811_e;
    gettimeofday(&tv_r_JOIN_INNER_7_231811_s, 0);
    SW_JOIN_INNER_TD_7649616(tbl_Aggregate_TD_8913145_output, tbl_Filter_TD_8426158_output, tbl_JOIN_INNER_TD_7649616_output);
    gettimeofday(&tv_r_JOIN_INNER_7_231811_e, 0);

    struct timeval tv_r_Filter_7_522833_s, tv_r_Filter_7_522833_e;
    gettimeofday(&tv_r_Filter_7_522833_s, 0);
    SW_Filter_TD_7297408(tbl_SerializeFromObject_TD_8781349_input, tbl_Filter_TD_7297408_output);
    gettimeofday(&tv_r_Filter_7_522833_e, 0);

    struct timeval tv_r_JOIN_INNER_7_672563_s, tv_r_JOIN_INNER_7_672563_e;
    gettimeofday(&tv_r_JOIN_INNER_7_672563_s, 0);
    SW_JOIN_INNER_TD_7873929(tbl_Aggregate_TD_8828940_output, tbl_Filter_TD_884436_output, tbl_JOIN_INNER_TD_7873929_output);
    gettimeofday(&tv_r_JOIN_INNER_7_672563_e, 0);

    struct timeval tv_r_JOIN_INNER_6_510414_s, tv_r_JOIN_INNER_6_510414_e;
    gettimeofday(&tv_r_JOIN_INNER_6_510414_s, 0);
    SW_JOIN_INNER_TD_6360733(tbl_JOIN_INNER_TD_7649616_output, tbl_Filter_TD_7229147_output, tbl_JOIN_INNER_TD_6360733_output);
    gettimeofday(&tv_r_JOIN_INNER_6_510414_e, 0);

    struct timeval tv_r_JOIN_INNER_6_783003_s, tv_r_JOIN_INNER_6_783003_e;
    gettimeofday(&tv_r_JOIN_INNER_6_783003_s, 0);
    SW_JOIN_INNER_TD_6488639(tbl_JOIN_INNER_TD_7873929_output, tbl_Filter_TD_7297408_output, tbl_JOIN_INNER_TD_6488639_output);
    gettimeofday(&tv_r_JOIN_INNER_6_783003_e, 0);

    struct timeval tv_r_Project_5_207651_s, tv_r_Project_5_207651_e;
    gettimeofday(&tv_r_Project_5_207651_s, 0);
    SW_Project_TD_5751441(tbl_JOIN_INNER_TD_6360733_output, tbl_Project_TD_5751441_output);
    gettimeofday(&tv_r_Project_5_207651_e, 0);

    struct timeval tv_r_Project_5_812896_s, tv_r_Project_5_812896_e;
    gettimeofday(&tv_r_Project_5_812896_s, 0);
    SW_Project_TD_5200571(tbl_JOIN_INNER_TD_6488639_output, tbl_Project_TD_5200571_output);
    gettimeofday(&tv_r_Project_5_812896_e, 0);

    struct timeval tv_r_JOIN_INNER_4_232751_s, tv_r_JOIN_INNER_4_232751_e;
    gettimeofday(&tv_r_JOIN_INNER_4_232751_s, 0);
    SW_JOIN_INNER_TD_4344734(tbl_Project_TD_5200571_output, tbl_Project_TD_5751441_output, tbl_JOIN_INNER_TD_4344734_output);
    gettimeofday(&tv_r_JOIN_INNER_4_232751_e, 0);

    struct timeval tv_r_Project_3_537598_s, tv_r_Project_3_537598_e;
    gettimeofday(&tv_r_Project_3_537598_s, 0);
    SW_Project_TD_3897509(tbl_JOIN_INNER_TD_4344734_output, tbl_Project_TD_3897509_output);
    gettimeofday(&tv_r_Project_3_537598_e, 0);

    struct timeval tv_r_Sort_2_37606_s, tv_r_Sort_2_37606_e;
    gettimeofday(&tv_r_Sort_2_37606_s, 0);
    SW_Sort_TD_2975885(tbl_Project_TD_3897509_output, tbl_Sort_TD_2975885_output);
    gettimeofday(&tv_r_Sort_2_37606_e, 0);

    struct timeval tv_r_LocalLimit_1_604997_s, tv_r_LocalLimit_1_604997_e;
    gettimeofday(&tv_r_LocalLimit_1_604997_s, 0);
    SW_LocalLimit_TD_1229133(tbl_Sort_TD_2975885_output, tbl_LocalLimit_TD_1229133_output);
    gettimeofday(&tv_r_LocalLimit_1_604997_e, 0);

    struct timeval tv_r_GlobalLimit_0_976710_s, tv_r_GlobalLimit_0_976710_e;
    gettimeofday(&tv_r_GlobalLimit_0_976710_s, 0);
    SW_GlobalLimit_TD_0349849(tbl_LocalLimit_TD_1229133_output, tbl_GlobalLimit_TD_0349849_output);
    gettimeofday(&tv_r_GlobalLimit_0_976710_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_606020_s, &tv_r_Filter_10_606020_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11637062_input: " << tbl_SerializeFromObject_TD_11637062_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_296769_s, &tv_r_Filter_10_296769_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11131468_input: " << tbl_SerializeFromObject_TD_11131468_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_922256_s, &tv_r_Filter_10_922256_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11143336_input: " << tbl_SerializeFromObject_TD_11143336_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_447095_s, &tv_r_Filter_10_447095_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11953518_input: " << tbl_SerializeFromObject_TD_11953518_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_192503_s, &tv_r_JOIN_INNER_9_192503_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10180785_output: " << tbl_Filter_TD_10180785_output.getNumRow() << " " << "tbl_Filter_TD_1025987_output: " << tbl_Filter_TD_1025987_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_21838_s, &tv_r_JOIN_INNER_9_21838_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10517055_output: " << tbl_Filter_TD_10517055_output.getNumRow() << " " << "tbl_Filter_TD_10622206_output: " << tbl_Filter_TD_10622206_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_171258_s, &tv_r_Filter_8_171258_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9832151_input: " << tbl_SerializeFromObject_TD_9832151_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_16559_s, &tv_r_Aggregate_8_16559_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9128274_output: " << tbl_JOIN_INNER_TD_9128274_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_675200_s, &tv_r_Filter_8_675200_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9137603_input: " << tbl_SerializeFromObject_TD_9137603_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_115651_s, &tv_r_Aggregate_8_115651_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9109703_output: " << tbl_JOIN_INNER_TD_9109703_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_528607_s, &tv_r_Filter_7_528607_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8346915_input: " << tbl_SerializeFromObject_TD_8346915_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_231811_s, &tv_r_JOIN_INNER_7_231811_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8913145_output: " << tbl_Aggregate_TD_8913145_output.getNumRow() << " " << "tbl_Filter_TD_8426158_output: " << tbl_Filter_TD_8426158_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_522833_s, &tv_r_Filter_7_522833_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8781349_input: " << tbl_SerializeFromObject_TD_8781349_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_672563_s, &tv_r_JOIN_INNER_7_672563_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8828940_output: " << tbl_Aggregate_TD_8828940_output.getNumRow() << " " << "tbl_Filter_TD_884436_output: " << tbl_Filter_TD_884436_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_510414_s, &tv_r_JOIN_INNER_6_510414_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7649616_output: " << tbl_JOIN_INNER_TD_7649616_output.getNumRow() << " " << "tbl_Filter_TD_7229147_output: " << tbl_Filter_TD_7229147_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_783003_s, &tv_r_JOIN_INNER_6_783003_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7873929_output: " << tbl_JOIN_INNER_TD_7873929_output.getNumRow() << " " << "tbl_Filter_TD_7297408_output: " << tbl_Filter_TD_7297408_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_207651_s, &tv_r_Project_5_207651_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6360733_output: " << tbl_JOIN_INNER_TD_6360733_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_812896_s, &tv_r_Project_5_812896_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6488639_output: " << tbl_JOIN_INNER_TD_6488639_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_232751_s, &tv_r_JOIN_INNER_4_232751_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5200571_output: " << tbl_Project_TD_5200571_output.getNumRow() << " " << "tbl_Project_TD_5751441_output: " << tbl_Project_TD_5751441_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_537598_s, &tv_r_Project_3_537598_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4344734_output: " << tbl_JOIN_INNER_TD_4344734_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_37606_s, &tv_r_Sort_2_37606_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3897509_output: " << tbl_Project_TD_3897509_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_604997_s, &tv_r_LocalLimit_1_604997_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2975885_output: " << tbl_Sort_TD_2975885_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_976710_s, &tv_r_GlobalLimit_0_976710_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1229133_output: " << tbl_LocalLimit_TD_1229133_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.1001008 * 1000 << "ms" << std::endl; 
    return 0; 
}
