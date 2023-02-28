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

#include "cfgFunc_q57.hpp" 
#include "q57.hpp" 

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
    std::cout << "NOTE:running query #57\n."; 
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
    Table tbl_GlobalLimit_TD_0149818_output("tbl_GlobalLimit_TD_0149818_output", 6100000, 9, "");
    tbl_GlobalLimit_TD_0149818_output.allocateHost();
    Table tbl_LocalLimit_TD_1612059_output("tbl_LocalLimit_TD_1612059_output", 6100000, 9, "");
    tbl_LocalLimit_TD_1612059_output.allocateHost();
    Table tbl_Sort_TD_2143402_output("tbl_Sort_TD_2143402_output", 6100000, 9, "");
    tbl_Sort_TD_2143402_output.allocateHost();
    Table tbl_Project_TD_3281366_output("tbl_Project_TD_3281366_output", 6100000, 9, "");
    tbl_Project_TD_3281366_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4129517_output("tbl_JOIN_INNER_TD_4129517_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_4129517_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5600253_output("tbl_JOIN_INNER_TD_5600253_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_5600253_output.allocateHost();
    Table tbl_Project_TD_5814840_output("tbl_Project_TD_5814840_output", 6100000, 5, "");
    tbl_Project_TD_5814840_output.allocateHost();
    Table tbl_Filter_TD_6280280_output("tbl_Filter_TD_6280280_output", 6100000, 8, "");
    tbl_Filter_TD_6280280_output.allocateHost();
    Table tbl_Project_TD_6367829_output("tbl_Project_TD_6367829_output", 6100000, 5, "");
    tbl_Project_TD_6367829_output.allocateHost();
    Table tbl_Window_TD_667216_output("tbl_Window_TD_667216_output", 6100000, 7, "");
    tbl_Window_TD_667216_output.allocateHost();
    Table tbl_Window_TD_7795814_output("tbl_Window_TD_7795814_output", 6100000, 9, "");
    tbl_Window_TD_7795814_output.allocateHost();
    Table tbl_Window_TD_7153683_output("tbl_Window_TD_7153683_output", 6100000, 7, "");
    tbl_Window_TD_7153683_output.allocateHost();
    Table tbl_Aggregate_TD_7141526_output("tbl_Aggregate_TD_7141526_output", 6100000, 6, "");
    tbl_Aggregate_TD_7141526_output.allocateHost();
    Table tbl_Filter_TD_8454835_output("tbl_Filter_TD_8454835_output", 6100000, 8, "");
    tbl_Filter_TD_8454835_output.allocateHost();
    Table tbl_Aggregate_TD_8646556_output("tbl_Aggregate_TD_8646556_output", 6100000, 6, "");
    tbl_Aggregate_TD_8646556_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8968526_output("tbl_JOIN_INNER_TD_8968526_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8968526_output.allocateHost();
    Table tbl_Window_TD_9159445_output("tbl_Window_TD_9159445_output", 6100000, 8, "");
    tbl_Window_TD_9159445_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9746555_output("tbl_JOIN_INNER_TD_9746555_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_9746555_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9728343_output("tbl_JOIN_INNER_TD_9728343_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_9728343_output.allocateHost();
    Table tbl_Filter_TD_9134941_output("tbl_Filter_TD_9134941_output", 6100000, 2, "");
    tbl_Filter_TD_9134941_output.allocateHost();
    Table tbl_Aggregate_TD_10626150_output("tbl_Aggregate_TD_10626150_output", 6100000, 7, "");
    tbl_Aggregate_TD_10626150_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10117251_output("tbl_JOIN_INNER_TD_10117251_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_10117251_output.allocateHost();
    Table tbl_Filter_TD_10549331_output("tbl_Filter_TD_10549331_output", 6100000, 2, "");
    tbl_Filter_TD_10549331_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10316981_output("tbl_JOIN_INNER_TD_10316981_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_10316981_output.allocateHost();
    Table tbl_Filter_TD_10193612_output("tbl_Filter_TD_10193612_output", 6100000, 3, "");
    tbl_Filter_TD_10193612_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10736255_input;
    tbl_SerializeFromObject_TD_10736255_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10736255_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_10736255_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10736255_input.allocateHost();
    tbl_SerializeFromObject_TD_10736255_input.loadHost();
    Table tbl_JOIN_INNER_TD_11475424_output("tbl_JOIN_INNER_TD_11475424_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_11475424_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11152755_output("tbl_JOIN_INNER_TD_11152755_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_11152755_output.allocateHost();
    Table tbl_Filter_TD_11947670_output("tbl_Filter_TD_11947670_output", 6100000, 3, "");
    tbl_Filter_TD_11947670_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11955267_input;
    tbl_SerializeFromObject_TD_11955267_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11955267_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_11955267_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11955267_input.allocateHost();
    tbl_SerializeFromObject_TD_11955267_input.loadHost();
    Table tbl_Filter_TD_11850311_output("tbl_Filter_TD_11850311_output", 6100000, 3, "");
    tbl_Filter_TD_11850311_output.allocateHost();
    Table tbl_Filter_TD_11821076_output("tbl_Filter_TD_11821076_output", 6100000, 4, "");
    tbl_Filter_TD_11821076_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11704370_input;
    tbl_SerializeFromObject_TD_11704370_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11704370_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11704370_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11704370_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11704370_input.allocateHost();
    tbl_SerializeFromObject_TD_11704370_input.loadHost();
    Table tbl_JOIN_INNER_TD_12396774_output("tbl_JOIN_INNER_TD_12396774_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_12396774_output.allocateHost();
    Table tbl_Filter_TD_12949450_output("tbl_Filter_TD_12949450_output", 6100000, 2, "");
    tbl_Filter_TD_12949450_output.allocateHost();
    Table tbl_Filter_TD_12687373_output("tbl_Filter_TD_12687373_output", 6100000, 3, "");
    tbl_Filter_TD_12687373_output.allocateHost();
    Table tbl_Filter_TD_12565789_output("tbl_Filter_TD_12565789_output", 6100000, 4, "");
    tbl_Filter_TD_12565789_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12529394_input;
    tbl_SerializeFromObject_TD_12529394_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12529394_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12529394_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12529394_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_12529394_input.allocateHost();
    tbl_SerializeFromObject_TD_12529394_input.loadHost();
    Table tbl_SerializeFromObject_TD_12431209_input;
    tbl_SerializeFromObject_TD_12431209_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12431209_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_12431209_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12431209_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12431209_input.allocateHost();
    tbl_SerializeFromObject_TD_12431209_input.loadHost();
    Table tbl_SerializeFromObject_TD_12164565_input;
    tbl_SerializeFromObject_TD_12164565_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12164565_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12164565_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_12164565_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_12164565_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_12164565_input.allocateHost();
    tbl_SerializeFromObject_TD_12164565_input.loadHost();
    Table tbl_JOIN_INNER_TD_13934565_output("tbl_JOIN_INNER_TD_13934565_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_13934565_output.allocateHost();
    Table tbl_Filter_TD_13380205_output("tbl_Filter_TD_13380205_output", 6100000, 3, "");
    tbl_Filter_TD_13380205_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13785934_input;
    tbl_SerializeFromObject_TD_13785934_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13785934_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_13785934_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13785934_input.allocateHost();
    tbl_SerializeFromObject_TD_13785934_input.loadHost();
    Table tbl_SerializeFromObject_TD_13927365_input;
    tbl_SerializeFromObject_TD_13927365_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13927365_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13927365_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13927365_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13927365_input.allocateHost();
    tbl_SerializeFromObject_TD_13927365_input.loadHost();
    Table tbl_SerializeFromObject_TD_13357180_input;
    tbl_SerializeFromObject_TD_13357180_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13357180_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13357180_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_13357180_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13357180_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_13357180_input.allocateHost();
    tbl_SerializeFromObject_TD_13357180_input.loadHost();
    Table tbl_Filter_TD_14683796_output("tbl_Filter_TD_14683796_output", 6100000, 3, "");
    tbl_Filter_TD_14683796_output.allocateHost();
    Table tbl_Filter_TD_14333174_output("tbl_Filter_TD_14333174_output", 6100000, 4, "");
    tbl_Filter_TD_14333174_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14361224_input;
    tbl_SerializeFromObject_TD_14361224_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_14361224_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_14361224_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_14361224_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_14361224_input.allocateHost();
    tbl_SerializeFromObject_TD_14361224_input.loadHost();
    Table tbl_SerializeFromObject_TD_15392103_input;
    tbl_SerializeFromObject_TD_15392103_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_15392103_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_15392103_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15392103_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15392103_input.allocateHost();
    tbl_SerializeFromObject_TD_15392103_input.loadHost();
    Table tbl_SerializeFromObject_TD_15217870_input;
    tbl_SerializeFromObject_TD_15217870_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_15217870_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15217870_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_15217870_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_15217870_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_15217870_input.allocateHost();
    tbl_SerializeFromObject_TD_15217870_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_366122_s, tv_r_Filter_14_366122_e;
    gettimeofday(&tv_r_Filter_14_366122_s, 0);
    SW_Filter_TD_14333174(tbl_SerializeFromObject_TD_15217870_input, tbl_Filter_TD_14333174_output);
    gettimeofday(&tv_r_Filter_14_366122_e, 0);

    struct timeval tv_r_Filter_14_336801_s, tv_r_Filter_14_336801_e;
    gettimeofday(&tv_r_Filter_14_336801_s, 0);
    SW_Filter_TD_14683796(tbl_SerializeFromObject_TD_15392103_input, tbl_Filter_TD_14683796_output);
    gettimeofday(&tv_r_Filter_14_336801_e, 0);

    struct timeval tv_r_Filter_13_367991_s, tv_r_Filter_13_367991_e;
    gettimeofday(&tv_r_Filter_13_367991_s, 0);
    SW_Filter_TD_13380205(tbl_SerializeFromObject_TD_14361224_input, tbl_Filter_TD_13380205_output);
    gettimeofday(&tv_r_Filter_13_367991_e, 0);

    struct timeval tv_r_JOIN_INNER_13_562091_s, tv_r_JOIN_INNER_13_562091_e;
    gettimeofday(&tv_r_JOIN_INNER_13_562091_s, 0);
    SW_JOIN_INNER_TD_13934565(tbl_Filter_TD_14683796_output, tbl_Filter_TD_14333174_output, tbl_JOIN_INNER_TD_13934565_output);
    gettimeofday(&tv_r_JOIN_INNER_13_562091_e, 0);

    struct timeval tv_r_Filter_12_996522_s, tv_r_Filter_12_996522_e;
    gettimeofday(&tv_r_Filter_12_996522_s, 0);
    SW_Filter_TD_12565789(tbl_SerializeFromObject_TD_13357180_input, tbl_Filter_TD_12565789_output);
    gettimeofday(&tv_r_Filter_12_996522_e, 0);

    struct timeval tv_r_Filter_12_319235_s, tv_r_Filter_12_319235_e;
    gettimeofday(&tv_r_Filter_12_319235_s, 0);
    SW_Filter_TD_12687373(tbl_SerializeFromObject_TD_13927365_input, tbl_Filter_TD_12687373_output);
    gettimeofday(&tv_r_Filter_12_319235_e, 0);

    struct timeval tv_r_Filter_12_450397_s, tv_r_Filter_12_450397_e;
    gettimeofday(&tv_r_Filter_12_450397_s, 0);
    SW_Filter_TD_12949450(tbl_SerializeFromObject_TD_13785934_input, tbl_Filter_TD_12949450_output);
    gettimeofday(&tv_r_Filter_12_450397_e, 0);

    struct timeval tv_r_JOIN_INNER_12_236952_s, tv_r_JOIN_INNER_12_236952_e;
    gettimeofday(&tv_r_JOIN_INNER_12_236952_s, 0);
    SW_JOIN_INNER_TD_12396774(tbl_JOIN_INNER_TD_13934565_output, tbl_Filter_TD_13380205_output, tbl_JOIN_INNER_TD_12396774_output);
    gettimeofday(&tv_r_JOIN_INNER_12_236952_e, 0);

    struct timeval tv_r_Filter_11_294547_s, tv_r_Filter_11_294547_e;
    gettimeofday(&tv_r_Filter_11_294547_s, 0);
    SW_Filter_TD_11821076(tbl_SerializeFromObject_TD_12164565_input, tbl_Filter_TD_11821076_output);
    gettimeofday(&tv_r_Filter_11_294547_e, 0);

    struct timeval tv_r_Filter_11_784114_s, tv_r_Filter_11_784114_e;
    gettimeofday(&tv_r_Filter_11_784114_s, 0);
    SW_Filter_TD_11850311(tbl_SerializeFromObject_TD_12431209_input, tbl_Filter_TD_11850311_output);
    gettimeofday(&tv_r_Filter_11_784114_e, 0);

    struct timeval tv_r_Filter_11_414890_s, tv_r_Filter_11_414890_e;
    gettimeofday(&tv_r_Filter_11_414890_s, 0);
    SW_Filter_TD_11947670(tbl_SerializeFromObject_TD_12529394_input, tbl_Filter_TD_11947670_output);
    gettimeofday(&tv_r_Filter_11_414890_e, 0);

    struct timeval tv_r_JOIN_INNER_11_683360_s, tv_r_JOIN_INNER_11_683360_e;
    gettimeofday(&tv_r_JOIN_INNER_11_683360_s, 0);
    SW_JOIN_INNER_TD_11152755(tbl_Filter_TD_12687373_output, tbl_Filter_TD_12565789_output, tbl_JOIN_INNER_TD_11152755_output);
    gettimeofday(&tv_r_JOIN_INNER_11_683360_e, 0);

    struct timeval tv_r_JOIN_INNER_11_790587_s, tv_r_JOIN_INNER_11_790587_e;
    gettimeofday(&tv_r_JOIN_INNER_11_790587_s, 0);
    SW_JOIN_INNER_TD_11475424(tbl_JOIN_INNER_TD_12396774_output, tbl_Filter_TD_12949450_output, tbl_JOIN_INNER_TD_11475424_output);
    gettimeofday(&tv_r_JOIN_INNER_11_790587_e, 0);

    struct timeval tv_r_Filter_10_721427_s, tv_r_Filter_10_721427_e;
    gettimeofday(&tv_r_Filter_10_721427_s, 0);
    SW_Filter_TD_10193612(tbl_SerializeFromObject_TD_11704370_input, tbl_Filter_TD_10193612_output);
    gettimeofday(&tv_r_Filter_10_721427_e, 0);

    struct timeval tv_r_JOIN_INNER_10_995151_s, tv_r_JOIN_INNER_10_995151_e;
    gettimeofday(&tv_r_JOIN_INNER_10_995151_s, 0);
    SW_JOIN_INNER_TD_10316981(tbl_Filter_TD_11850311_output, tbl_Filter_TD_11821076_output, tbl_JOIN_INNER_TD_10316981_output);
    gettimeofday(&tv_r_JOIN_INNER_10_995151_e, 0);

    struct timeval tv_r_Filter_10_990120_s, tv_r_Filter_10_990120_e;
    gettimeofday(&tv_r_Filter_10_990120_s, 0);
    SW_Filter_TD_10549331(tbl_SerializeFromObject_TD_11955267_input, tbl_Filter_TD_10549331_output);
    gettimeofday(&tv_r_Filter_10_990120_e, 0);

    struct timeval tv_r_JOIN_INNER_10_877039_s, tv_r_JOIN_INNER_10_877039_e;
    gettimeofday(&tv_r_JOIN_INNER_10_877039_s, 0);
    SW_JOIN_INNER_TD_10117251(tbl_JOIN_INNER_TD_11152755_output, tbl_Filter_TD_11947670_output, tbl_JOIN_INNER_TD_10117251_output);
    gettimeofday(&tv_r_JOIN_INNER_10_877039_e, 0);

    struct timeval tv_r_Aggregate_10_153823_s, tv_r_Aggregate_10_153823_e;
    gettimeofday(&tv_r_Aggregate_10_153823_s, 0);
    SW_Aggregate_TD_10626150(tbl_JOIN_INNER_TD_11475424_output, tbl_Aggregate_TD_10626150_output);
    gettimeofday(&tv_r_Aggregate_10_153823_e, 0);

    struct timeval tv_r_Filter_9_278393_s, tv_r_Filter_9_278393_e;
    gettimeofday(&tv_r_Filter_9_278393_s, 0);
    SW_Filter_TD_9134941(tbl_SerializeFromObject_TD_10736255_input, tbl_Filter_TD_9134941_output);
    gettimeofday(&tv_r_Filter_9_278393_e, 0);

    struct timeval tv_r_JOIN_INNER_9_537283_s, tv_r_JOIN_INNER_9_537283_e;
    gettimeofday(&tv_r_JOIN_INNER_9_537283_s, 0);
    SW_JOIN_INNER_TD_9728343(tbl_JOIN_INNER_TD_10316981_output, tbl_Filter_TD_10193612_output, tbl_JOIN_INNER_TD_9728343_output);
    gettimeofday(&tv_r_JOIN_INNER_9_537283_e, 0);

    struct timeval tv_r_JOIN_INNER_9_196906_s, tv_r_JOIN_INNER_9_196906_e;
    gettimeofday(&tv_r_JOIN_INNER_9_196906_s, 0);
    SW_JOIN_INNER_TD_9746555(tbl_JOIN_INNER_TD_10117251_output, tbl_Filter_TD_10549331_output, tbl_JOIN_INNER_TD_9746555_output);
    gettimeofday(&tv_r_JOIN_INNER_9_196906_e, 0);

    struct timeval tv_r_Window_9_899543_s, tv_r_Window_9_899543_e;
    gettimeofday(&tv_r_Window_9_899543_s, 0);
    SW_Window_TD_9159445(tbl_Aggregate_TD_10626150_output, tbl_Window_TD_9159445_output);
    gettimeofday(&tv_r_Window_9_899543_e, 0);

    struct timeval tv_r_JOIN_INNER_8_6305_s, tv_r_JOIN_INNER_8_6305_e;
    gettimeofday(&tv_r_JOIN_INNER_8_6305_s, 0);
    SW_JOIN_INNER_TD_8968526(tbl_JOIN_INNER_TD_9728343_output, tbl_Filter_TD_9134941_output, tbl_JOIN_INNER_TD_8968526_output);
    gettimeofday(&tv_r_JOIN_INNER_8_6305_e, 0);

    struct timeval tv_r_Aggregate_8_873710_s, tv_r_Aggregate_8_873710_e;
    gettimeofday(&tv_r_Aggregate_8_873710_s, 0);
    SW_Aggregate_TD_8646556(tbl_JOIN_INNER_TD_9746555_output, tbl_Aggregate_TD_8646556_output);
    gettimeofday(&tv_r_Aggregate_8_873710_e, 0);

    struct timeval tv_r_Filter_8_618548_s, tv_r_Filter_8_618548_e;
    gettimeofday(&tv_r_Filter_8_618548_s, 0);
    SW_Filter_TD_8454835(tbl_Window_TD_9159445_output, tbl_Filter_TD_8454835_output);
    gettimeofday(&tv_r_Filter_8_618548_e, 0);

    struct timeval tv_r_Aggregate_7_796308_s, tv_r_Aggregate_7_796308_e;
    gettimeofday(&tv_r_Aggregate_7_796308_s, 0);
    SW_Aggregate_TD_7141526(tbl_JOIN_INNER_TD_8968526_output, tbl_Aggregate_TD_7141526_output);
    gettimeofday(&tv_r_Aggregate_7_796308_e, 0);

    struct timeval tv_r_Window_7_21425_s, tv_r_Window_7_21425_e;
    gettimeofday(&tv_r_Window_7_21425_s, 0);
    SW_Window_TD_7153683(tbl_Aggregate_TD_8646556_output, tbl_Window_TD_7153683_output);
    gettimeofday(&tv_r_Window_7_21425_e, 0);

    struct timeval tv_r_Window_7_712370_s, tv_r_Window_7_712370_e;
    gettimeofday(&tv_r_Window_7_712370_s, 0);
    SW_Window_TD_7795814(tbl_Filter_TD_8454835_output, tbl_Window_TD_7795814_output);
    gettimeofday(&tv_r_Window_7_712370_e, 0);

    struct timeval tv_r_Window_6_125462_s, tv_r_Window_6_125462_e;
    gettimeofday(&tv_r_Window_6_125462_s, 0);
    SW_Window_TD_667216(tbl_Aggregate_TD_7141526_output, tbl_Window_TD_667216_output);
    gettimeofday(&tv_r_Window_6_125462_e, 0);

    struct timeval tv_r_Project_6_852796_s, tv_r_Project_6_852796_e;
    gettimeofday(&tv_r_Project_6_852796_s, 0);
    SW_Project_TD_6367829(tbl_Window_TD_7153683_output, tbl_Project_TD_6367829_output);
    gettimeofday(&tv_r_Project_6_852796_e, 0);

    struct timeval tv_r_Filter_6_313745_s, tv_r_Filter_6_313745_e;
    gettimeofday(&tv_r_Filter_6_313745_s, 0);
    SW_Filter_TD_6280280(tbl_Window_TD_7795814_output, tbl_Filter_TD_6280280_output);
    gettimeofday(&tv_r_Filter_6_313745_e, 0);

    struct timeval tv_r_Project_5_553836_s, tv_r_Project_5_553836_e;
    gettimeofday(&tv_r_Project_5_553836_s, 0);
    SW_Project_TD_5814840(tbl_Window_TD_667216_output, tbl_Project_TD_5814840_output);
    gettimeofday(&tv_r_Project_5_553836_e, 0);

    struct timeval tv_r_JOIN_INNER_5_147125_s, tv_r_JOIN_INNER_5_147125_e;
    gettimeofday(&tv_r_JOIN_INNER_5_147125_s, 0);
    SW_JOIN_INNER_TD_5600253(tbl_Filter_TD_6280280_output, tbl_Project_TD_6367829_output, tbl_JOIN_INNER_TD_5600253_output);
    gettimeofday(&tv_r_JOIN_INNER_5_147125_e, 0);

    struct timeval tv_r_JOIN_INNER_4_550929_s, tv_r_JOIN_INNER_4_550929_e;
    gettimeofday(&tv_r_JOIN_INNER_4_550929_s, 0);
    SW_JOIN_INNER_TD_4129517(tbl_JOIN_INNER_TD_5600253_output, tbl_Project_TD_5814840_output, tbl_JOIN_INNER_TD_4129517_output);
    gettimeofday(&tv_r_JOIN_INNER_4_550929_e, 0);

    struct timeval tv_r_Project_3_810638_s, tv_r_Project_3_810638_e;
    gettimeofday(&tv_r_Project_3_810638_s, 0);
    SW_Project_TD_3281366(tbl_JOIN_INNER_TD_4129517_output, tbl_Project_TD_3281366_output);
    gettimeofday(&tv_r_Project_3_810638_e, 0);

    struct timeval tv_r_Sort_2_954409_s, tv_r_Sort_2_954409_e;
    gettimeofday(&tv_r_Sort_2_954409_s, 0);
    SW_Sort_TD_2143402(tbl_Project_TD_3281366_output, tbl_Sort_TD_2143402_output);
    gettimeofday(&tv_r_Sort_2_954409_e, 0);

    struct timeval tv_r_LocalLimit_1_157907_s, tv_r_LocalLimit_1_157907_e;
    gettimeofday(&tv_r_LocalLimit_1_157907_s, 0);
    SW_LocalLimit_TD_1612059(tbl_Sort_TD_2143402_output, tbl_LocalLimit_TD_1612059_output);
    gettimeofday(&tv_r_LocalLimit_1_157907_e, 0);

    struct timeval tv_r_GlobalLimit_0_328739_s, tv_r_GlobalLimit_0_328739_e;
    gettimeofday(&tv_r_GlobalLimit_0_328739_s, 0);
    SW_GlobalLimit_TD_0149818(tbl_LocalLimit_TD_1612059_output, tbl_GlobalLimit_TD_0149818_output);
    gettimeofday(&tv_r_GlobalLimit_0_328739_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_366122_s, &tv_r_Filter_14_366122_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15217870_input: " << tbl_SerializeFromObject_TD_15217870_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_336801_s, &tv_r_Filter_14_336801_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15392103_input: " << tbl_SerializeFromObject_TD_15392103_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_367991_s, &tv_r_Filter_13_367991_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14361224_input: " << tbl_SerializeFromObject_TD_14361224_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_562091_s, &tv_r_JOIN_INNER_13_562091_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14683796_output: " << tbl_Filter_TD_14683796_output.getNumRow() << " " << "tbl_Filter_TD_14333174_output: " << tbl_Filter_TD_14333174_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_996522_s, &tv_r_Filter_12_996522_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13357180_input: " << tbl_SerializeFromObject_TD_13357180_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_319235_s, &tv_r_Filter_12_319235_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13927365_input: " << tbl_SerializeFromObject_TD_13927365_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_450397_s, &tv_r_Filter_12_450397_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13785934_input: " << tbl_SerializeFromObject_TD_13785934_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_236952_s, &tv_r_JOIN_INNER_12_236952_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13934565_output: " << tbl_JOIN_INNER_TD_13934565_output.getNumRow() << " " << "tbl_Filter_TD_13380205_output: " << tbl_Filter_TD_13380205_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_294547_s, &tv_r_Filter_11_294547_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12164565_input: " << tbl_SerializeFromObject_TD_12164565_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_784114_s, &tv_r_Filter_11_784114_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12431209_input: " << tbl_SerializeFromObject_TD_12431209_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_414890_s, &tv_r_Filter_11_414890_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12529394_input: " << tbl_SerializeFromObject_TD_12529394_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_683360_s, &tv_r_JOIN_INNER_11_683360_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12687373_output: " << tbl_Filter_TD_12687373_output.getNumRow() << " " << "tbl_Filter_TD_12565789_output: " << tbl_Filter_TD_12565789_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_790587_s, &tv_r_JOIN_INNER_11_790587_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12396774_output: " << tbl_JOIN_INNER_TD_12396774_output.getNumRow() << " " << "tbl_Filter_TD_12949450_output: " << tbl_Filter_TD_12949450_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_721427_s, &tv_r_Filter_10_721427_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11704370_input: " << tbl_SerializeFromObject_TD_11704370_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_995151_s, &tv_r_JOIN_INNER_10_995151_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11850311_output: " << tbl_Filter_TD_11850311_output.getNumRow() << " " << "tbl_Filter_TD_11821076_output: " << tbl_Filter_TD_11821076_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_990120_s, &tv_r_Filter_10_990120_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11955267_input: " << tbl_SerializeFromObject_TD_11955267_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_877039_s, &tv_r_JOIN_INNER_10_877039_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11152755_output: " << tbl_JOIN_INNER_TD_11152755_output.getNumRow() << " " << "tbl_Filter_TD_11947670_output: " << tbl_Filter_TD_11947670_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_153823_s, &tv_r_Aggregate_10_153823_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11475424_output: " << tbl_JOIN_INNER_TD_11475424_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_278393_s, &tv_r_Filter_9_278393_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10736255_input: " << tbl_SerializeFromObject_TD_10736255_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_537283_s, &tv_r_JOIN_INNER_9_537283_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10316981_output: " << tbl_JOIN_INNER_TD_10316981_output.getNumRow() << " " << "tbl_Filter_TD_10193612_output: " << tbl_Filter_TD_10193612_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_196906_s, &tv_r_JOIN_INNER_9_196906_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10117251_output: " << tbl_JOIN_INNER_TD_10117251_output.getNumRow() << " " << "tbl_Filter_TD_10549331_output: " << tbl_Filter_TD_10549331_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_9: " << tvdiff(&tv_r_Window_9_899543_s, &tv_r_Window_9_899543_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10626150_output: " << tbl_Aggregate_TD_10626150_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_6305_s, &tv_r_JOIN_INNER_8_6305_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9728343_output: " << tbl_JOIN_INNER_TD_9728343_output.getNumRow() << " " << "tbl_Filter_TD_9134941_output: " << tbl_Filter_TD_9134941_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_873710_s, &tv_r_Aggregate_8_873710_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9746555_output: " << tbl_JOIN_INNER_TD_9746555_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_618548_s, &tv_r_Filter_8_618548_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_9159445_output: " << tbl_Window_TD_9159445_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_796308_s, &tv_r_Aggregate_7_796308_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8968526_output: " << tbl_JOIN_INNER_TD_8968526_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_21425_s, &tv_r_Window_7_21425_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8646556_output: " << tbl_Aggregate_TD_8646556_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_7: " << tvdiff(&tv_r_Window_7_712370_s, &tv_r_Window_7_712370_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8454835_output: " << tbl_Filter_TD_8454835_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_6: " << tvdiff(&tv_r_Window_6_125462_s, &tv_r_Window_6_125462_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7141526_output: " << tbl_Aggregate_TD_7141526_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_852796_s, &tv_r_Project_6_852796_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7153683_output: " << tbl_Window_TD_7153683_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_313745_s, &tv_r_Filter_6_313745_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_7795814_output: " << tbl_Window_TD_7795814_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_553836_s, &tv_r_Project_5_553836_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_667216_output: " << tbl_Window_TD_667216_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_147125_s, &tv_r_JOIN_INNER_5_147125_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6280280_output: " << tbl_Filter_TD_6280280_output.getNumRow() << " " << "tbl_Project_TD_6367829_output: " << tbl_Project_TD_6367829_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_550929_s, &tv_r_JOIN_INNER_4_550929_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5600253_output: " << tbl_JOIN_INNER_TD_5600253_output.getNumRow() << " " << "tbl_Project_TD_5814840_output: " << tbl_Project_TD_5814840_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_810638_s, &tv_r_Project_3_810638_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4129517_output: " << tbl_JOIN_INNER_TD_4129517_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_954409_s, &tv_r_Sort_2_954409_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3281366_output: " << tbl_Project_TD_3281366_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_157907_s, &tv_r_LocalLimit_1_157907_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2143402_output: " << tbl_Sort_TD_2143402_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_328739_s, &tv_r_GlobalLimit_0_328739_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1612059_output: " << tbl_LocalLimit_TD_1612059_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.9968204 * 1000 << "ms" << std::endl; 
    return 0; 
}
