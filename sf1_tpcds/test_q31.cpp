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

#include "cfgFunc_q31.hpp" 
#include "q31.hpp" 

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
    std::cout << "NOTE:running query #31\n."; 
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
    cl::Device device_h = devices[0]; 
    // Create context_h and command queue for selected device 
    cl::Context context_h(device_h); 
    cl::CommandQueue q_h(context_h, device_h, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE); 
    std::string devName_h = device_h.getInfo<CL_DEVICE_NAME>(); 
    std::cout << "Selected Device " << devName_h << "\n"; 
    cl::Program::Binaries xclBins_h = xcl::import_binary_file(xclbin_path_h); 
    std::vector<cl::Device> devices_h; 
    devices_h.push_back(device_h); 
    cl::Program program_h(context_h, devices_h, xclBins_h); 
    // ****************************** Tables **************************** // 
    Table tbl_Sort_TD_0714814_output("tbl_Sort_TD_0714814_output", 6100000, 6, "");
    tbl_Sort_TD_0714814_output.allocateHost();
    Table tbl_Project_TD_112864_output("tbl_Project_TD_112864_output", 6100000, 6, "");
    tbl_Project_TD_112864_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2324966_output("tbl_JOIN_INNER_TD_2324966_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_2324966_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3851901_output("tbl_JOIN_INNER_TD_3851901_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_3851901_output.allocateHost();
    Table tbl_Aggregate_TD_3900201_output("tbl_Aggregate_TD_3900201_output", 6100000, 2, "");
    tbl_Aggregate_TD_3900201_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4134806_output("tbl_JOIN_INNER_TD_4134806_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4134806_output.allocateHost();
    Table tbl_Aggregate_TD_43723_output("tbl_Aggregate_TD_43723_output", 6100000, 2, "");
    tbl_Aggregate_TD_43723_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4795854_output("tbl_JOIN_INNER_TD_4795854_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_4795854_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5135323_output("tbl_JOIN_INNER_TD_5135323_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5135323_output.allocateHost();
    Table tbl_Aggregate_TD_5743181_output("tbl_Aggregate_TD_5743181_output", 6100000, 2, "");
    tbl_Aggregate_TD_5743181_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5266001_output("tbl_JOIN_INNER_TD_5266001_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5266001_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5372260_output("tbl_JOIN_INNER_TD_5372260_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5372260_output.allocateHost();
    Table tbl_Filter_TD_5786904_output("tbl_Filter_TD_5786904_output", 6100000, 2, "");
    tbl_Filter_TD_5786904_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6718635_output("tbl_JOIN_INNER_TD_6718635_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6718635_output.allocateHost();
    Table tbl_Aggregate_TD_626149_output("tbl_Aggregate_TD_626149_output", 6100000, 2, "");
    tbl_Aggregate_TD_626149_output.allocateHost();
    Table tbl_JOIN_INNER_TD_673095_output("tbl_JOIN_INNER_TD_673095_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_673095_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6872948_output("tbl_JOIN_INNER_TD_6872948_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6872948_output.allocateHost();
    Table tbl_Filter_TD_6989288_output("tbl_Filter_TD_6989288_output", 6100000, 2, "");
    tbl_Filter_TD_6989288_output.allocateHost();
    Table tbl_Filter_TD_648510_output("tbl_Filter_TD_648510_output", 6100000, 3, "");
    tbl_Filter_TD_648510_output.allocateHost();
    Table tbl_Filter_TD_6413588_output("tbl_Filter_TD_6413588_output", 6100000, 3, "");
    tbl_Filter_TD_6413588_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6168328_input;
    tbl_SerializeFromObject_TD_6168328_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6168328_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_6168328_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6168328_input.allocateHost();
    tbl_SerializeFromObject_TD_6168328_input.loadHost();
    Table tbl_Aggregate_TD_715884_output("tbl_Aggregate_TD_715884_output", 6100000, 3, "");
    tbl_Aggregate_TD_715884_output.allocateHost();
    Table tbl_Aggregate_TD_7696336_output("tbl_Aggregate_TD_7696336_output", 6100000, 2, "");
    tbl_Aggregate_TD_7696336_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7976974_output("tbl_JOIN_INNER_TD_7976974_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7976974_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7769739_output("tbl_JOIN_INNER_TD_7769739_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7769739_output.allocateHost();
    Table tbl_Filter_TD_7409783_output("tbl_Filter_TD_7409783_output", 6100000, 2, "");
    tbl_Filter_TD_7409783_output.allocateHost();
    Table tbl_Filter_TD_7110750_output("tbl_Filter_TD_7110750_output", 6100000, 3, "");
    tbl_Filter_TD_7110750_output.allocateHost();
    Table tbl_Filter_TD_7876152_output("tbl_Filter_TD_7876152_output", 6100000, 3, "");
    tbl_Filter_TD_7876152_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7386193_input;
    tbl_SerializeFromObject_TD_7386193_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7386193_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_7386193_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7386193_input.allocateHost();
    tbl_SerializeFromObject_TD_7386193_input.loadHost();
    Table tbl_SerializeFromObject_TD_7213950_input;
    tbl_SerializeFromObject_TD_7213950_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7213950_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7213950_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_7213950_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_7213950_input.allocateHost();
    tbl_SerializeFromObject_TD_7213950_input.loadHost();
    Table tbl_SerializeFromObject_TD_7614970_input;
    tbl_SerializeFromObject_TD_7614970_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7614970_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7614970_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7614970_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_7614970_input.allocateHost();
    tbl_SerializeFromObject_TD_7614970_input.loadHost();
    Table tbl_JOIN_INNER_TD_8701822_output("tbl_JOIN_INNER_TD_8701822_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8701822_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8266314_output("tbl_JOIN_INNER_TD_8266314_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8266314_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8986387_output("tbl_JOIN_INNER_TD_8986387_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8986387_output.allocateHost();
    Table tbl_Filter_TD_8806247_output("tbl_Filter_TD_8806247_output", 6100000, 2, "");
    tbl_Filter_TD_8806247_output.allocateHost();
    Table tbl_Filter_TD_8980256_output("tbl_Filter_TD_8980256_output", 6100000, 3, "");
    tbl_Filter_TD_8980256_output.allocateHost();
    Table tbl_Filter_TD_8985396_output("tbl_Filter_TD_8985396_output", 6100000, 3, "");
    tbl_Filter_TD_8985396_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8844691_input;
    tbl_SerializeFromObject_TD_8844691_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8844691_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8844691_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8844691_input.allocateHost();
    tbl_SerializeFromObject_TD_8844691_input.loadHost();
    Table tbl_SerializeFromObject_TD_8185299_input;
    tbl_SerializeFromObject_TD_8185299_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8185299_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8185299_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_8185299_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8185299_input.allocateHost();
    tbl_SerializeFromObject_TD_8185299_input.loadHost();
    Table tbl_SerializeFromObject_TD_8568858_input;
    tbl_SerializeFromObject_TD_8568858_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8568858_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8568858_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8568858_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8568858_input.allocateHost();
    tbl_SerializeFromObject_TD_8568858_input.loadHost();
    Table tbl_JOIN_INNER_TD_9628813_output("tbl_JOIN_INNER_TD_9628813_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_9628813_output.allocateHost();
    Table tbl_Filter_TD_933553_output("tbl_Filter_TD_933553_output", 6100000, 2, "");
    tbl_Filter_TD_933553_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9801878_output("tbl_JOIN_INNER_TD_9801878_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_9801878_output.allocateHost();
    Table tbl_Filter_TD_9911989_output("tbl_Filter_TD_9911989_output", 6100000, 2, "");
    tbl_Filter_TD_9911989_output.allocateHost();
    Table tbl_Filter_TD_9294021_output("tbl_Filter_TD_9294021_output", 6100000, 3, "");
    tbl_Filter_TD_9294021_output.allocateHost();
    Table tbl_Filter_TD_9472277_output("tbl_Filter_TD_9472277_output", 6100000, 3, "");
    tbl_Filter_TD_9472277_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9884661_input;
    tbl_SerializeFromObject_TD_9884661_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9884661_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9884661_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9884661_input.allocateHost();
    tbl_SerializeFromObject_TD_9884661_input.loadHost();
    Table tbl_SerializeFromObject_TD_9851500_input;
    tbl_SerializeFromObject_TD_9851500_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9851500_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9851500_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_9851500_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9851500_input.allocateHost();
    tbl_SerializeFromObject_TD_9851500_input.loadHost();
    Table tbl_SerializeFromObject_TD_9756110_input;
    tbl_SerializeFromObject_TD_9756110_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9756110_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9756110_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9756110_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_9756110_input.allocateHost();
    tbl_SerializeFromObject_TD_9756110_input.loadHost();
    Table tbl_Filter_TD_10282303_output("tbl_Filter_TD_10282303_output", 6100000, 3, "");
    tbl_Filter_TD_10282303_output.allocateHost();
    Table tbl_Filter_TD_10700756_output("tbl_Filter_TD_10700756_output", 6100000, 3, "");
    tbl_Filter_TD_10700756_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10335462_input;
    tbl_SerializeFromObject_TD_10335462_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10335462_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10335462_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10335462_input.allocateHost();
    tbl_SerializeFromObject_TD_10335462_input.loadHost();
    Table tbl_Filter_TD_10793771_output("tbl_Filter_TD_10793771_output", 6100000, 3, "");
    tbl_Filter_TD_10793771_output.allocateHost();
    Table tbl_Filter_TD_10722444_output("tbl_Filter_TD_10722444_output", 6100000, 3, "");
    tbl_Filter_TD_10722444_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1032642_input;
    tbl_SerializeFromObject_TD_1032642_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1032642_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_1032642_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1032642_input.allocateHost();
    tbl_SerializeFromObject_TD_1032642_input.loadHost();
    Table tbl_SerializeFromObject_TD_10512123_input;
    tbl_SerializeFromObject_TD_10512123_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10512123_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10512123_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_10512123_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10512123_input.allocateHost();
    tbl_SerializeFromObject_TD_10512123_input.loadHost();
    Table tbl_SerializeFromObject_TD_10381514_input;
    tbl_SerializeFromObject_TD_10381514_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10381514_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10381514_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10381514_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_10381514_input.allocateHost();
    tbl_SerializeFromObject_TD_10381514_input.loadHost();
    Table tbl_SerializeFromObject_TD_11247879_input;
    tbl_SerializeFromObject_TD_11247879_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11247879_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11247879_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_11247879_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11247879_input.allocateHost();
    tbl_SerializeFromObject_TD_11247879_input.loadHost();
    Table tbl_SerializeFromObject_TD_11371222_input;
    tbl_SerializeFromObject_TD_11371222_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11371222_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11371222_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11371222_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_11371222_input.allocateHost();
    tbl_SerializeFromObject_TD_11371222_input.loadHost();
    Table tbl_SerializeFromObject_TD_11160561_input;
    tbl_SerializeFromObject_TD_11160561_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11160561_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11160561_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_11160561_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11160561_input.allocateHost();
    tbl_SerializeFromObject_TD_11160561_input.loadHost();
    Table tbl_SerializeFromObject_TD_11675216_input;
    tbl_SerializeFromObject_TD_11675216_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11675216_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11675216_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11675216_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_11675216_input.allocateHost();
    tbl_SerializeFromObject_TD_11675216_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5372260_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6872948_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_648510_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6413588_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7769739_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7110750_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7876152_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8986387_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8980256_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8985396_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9628813_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9801878_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9294021_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9472277_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10282303_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10700756_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10793771_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10722444_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5372260_cmds;
    cfg_JOIN_INNER_TD_5372260_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5372260_gqe_join (cfg_JOIN_INNER_TD_5372260_cmds.cmd);
    cfg_JOIN_INNER_TD_5372260_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6872948_cmds;
    cfg_JOIN_INNER_TD_6872948_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6872948_gqe_join (cfg_JOIN_INNER_TD_6872948_cmds.cmd);
    cfg_JOIN_INNER_TD_6872948_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7769739_cmds;
    cfg_JOIN_INNER_TD_7769739_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7769739_gqe_join (cfg_JOIN_INNER_TD_7769739_cmds.cmd);
    cfg_JOIN_INNER_TD_7769739_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8986387_cmds;
    cfg_JOIN_INNER_TD_8986387_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8986387_gqe_join (cfg_JOIN_INNER_TD_8986387_cmds.cmd);
    cfg_JOIN_INNER_TD_8986387_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9628813_cmds;
    cfg_JOIN_INNER_TD_9628813_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9628813_gqe_join (cfg_JOIN_INNER_TD_9628813_cmds.cmd);
    cfg_JOIN_INNER_TD_9628813_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9801878_cmds;
    cfg_JOIN_INNER_TD_9801878_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9801878_gqe_join (cfg_JOIN_INNER_TD_9801878_cmds.cmd);
    cfg_JOIN_INNER_TD_9801878_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5372260;
    krnl_JOIN_INNER_TD_5372260 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5372260.setup(tbl_Filter_TD_648510_output, tbl_Filter_TD_6413588_output, tbl_JOIN_INNER_TD_5372260_output, cfg_JOIN_INNER_TD_5372260_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6872948;
    krnl_JOIN_INNER_TD_6872948 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6872948.setup(tbl_Filter_TD_7110750_output, tbl_Filter_TD_7876152_output, tbl_JOIN_INNER_TD_6872948_output, cfg_JOIN_INNER_TD_6872948_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7769739;
    krnl_JOIN_INNER_TD_7769739 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7769739.setup(tbl_Filter_TD_8980256_output, tbl_Filter_TD_8985396_output, tbl_JOIN_INNER_TD_7769739_output, cfg_JOIN_INNER_TD_7769739_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8986387;
    krnl_JOIN_INNER_TD_8986387 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8986387.setup(tbl_Filter_TD_9294021_output, tbl_Filter_TD_9472277_output, tbl_JOIN_INNER_TD_8986387_output, cfg_JOIN_INNER_TD_8986387_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9628813;
    krnl_JOIN_INNER_TD_9628813 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9628813.setup(tbl_Filter_TD_10282303_output, tbl_Filter_TD_10700756_output, tbl_JOIN_INNER_TD_9628813_output, cfg_JOIN_INNER_TD_9628813_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9801878;
    krnl_JOIN_INNER_TD_9801878 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9801878.setup(tbl_Filter_TD_10793771_output, tbl_Filter_TD_10722444_output, tbl_JOIN_INNER_TD_9801878_output, cfg_JOIN_INNER_TD_9801878_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5372260;
    trans_JOIN_INNER_TD_5372260.setq(q_h);
    trans_JOIN_INNER_TD_5372260.add(&(cfg_JOIN_INNER_TD_5372260_cmds));
    transEngine trans_JOIN_INNER_TD_5372260_out;
    trans_JOIN_INNER_TD_5372260_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6872948;
    trans_JOIN_INNER_TD_6872948.setq(q_h);
    trans_JOIN_INNER_TD_6872948.add(&(cfg_JOIN_INNER_TD_6872948_cmds));
    transEngine trans_JOIN_INNER_TD_6872948_out;
    trans_JOIN_INNER_TD_6872948_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7769739;
    trans_JOIN_INNER_TD_7769739.setq(q_h);
    trans_JOIN_INNER_TD_7769739.add(&(cfg_JOIN_INNER_TD_7769739_cmds));
    transEngine trans_JOIN_INNER_TD_7769739_out;
    trans_JOIN_INNER_TD_7769739_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8986387;
    trans_JOIN_INNER_TD_8986387.setq(q_h);
    trans_JOIN_INNER_TD_8986387.add(&(cfg_JOIN_INNER_TD_8986387_cmds));
    transEngine trans_JOIN_INNER_TD_8986387_out;
    trans_JOIN_INNER_TD_8986387_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9628813;
    trans_JOIN_INNER_TD_9628813.setq(q_h);
    trans_JOIN_INNER_TD_9628813.add(&(cfg_JOIN_INNER_TD_9628813_cmds));
    transEngine trans_JOIN_INNER_TD_9628813_out;
    trans_JOIN_INNER_TD_9628813_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9801878;
    trans_JOIN_INNER_TD_9801878.setq(q_h);
    trans_JOIN_INNER_TD_9801878.add(&(cfg_JOIN_INNER_TD_9801878_cmds));
    transEngine trans_JOIN_INNER_TD_9801878_out;
    trans_JOIN_INNER_TD_9801878_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5372260;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5372260;
    std::vector<cl::Event> events_JOIN_INNER_TD_5372260;
    events_h2d_wr_JOIN_INNER_TD_5372260.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5372260.resize(1);
    events_JOIN_INNER_TD_5372260.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5372260;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5372260;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6872948;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6872948;
    std::vector<cl::Event> events_JOIN_INNER_TD_6872948;
    events_h2d_wr_JOIN_INNER_TD_6872948.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6872948.resize(1);
    events_JOIN_INNER_TD_6872948.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6872948;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6872948;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7769739;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7769739;
    std::vector<cl::Event> events_JOIN_INNER_TD_7769739;
    events_h2d_wr_JOIN_INNER_TD_7769739.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7769739.resize(1);
    events_JOIN_INNER_TD_7769739.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7769739;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7769739;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8986387;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8986387;
    std::vector<cl::Event> events_JOIN_INNER_TD_8986387;
    events_h2d_wr_JOIN_INNER_TD_8986387.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8986387.resize(1);
    events_JOIN_INNER_TD_8986387.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8986387;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8986387;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9628813;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9628813;
    std::vector<cl::Event> events_JOIN_INNER_TD_9628813;
    events_h2d_wr_JOIN_INNER_TD_9628813.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9628813.resize(1);
    events_JOIN_INNER_TD_9628813.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9628813;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9628813;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9801878;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9801878;
    std::vector<cl::Event> events_JOIN_INNER_TD_9801878;
    events_h2d_wr_JOIN_INNER_TD_9801878.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9801878.resize(1);
    events_JOIN_INNER_TD_9801878.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9801878;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9801878;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_174737_s, tv_r_Filter_10_174737_e;
    gettimeofday(&tv_r_Filter_10_174737_s, 0);
    SW_Filter_TD_10722444(tbl_SerializeFromObject_TD_11675216_input, tbl_Filter_TD_10722444_output);
    gettimeofday(&tv_r_Filter_10_174737_e, 0);

    struct timeval tv_r_Filter_10_851609_s, tv_r_Filter_10_851609_e;
    gettimeofday(&tv_r_Filter_10_851609_s, 0);
    SW_Filter_TD_10793771(tbl_SerializeFromObject_TD_11160561_input, tbl_Filter_TD_10793771_output);
    gettimeofday(&tv_r_Filter_10_851609_e, 0);

    struct timeval tv_r_Filter_10_670038_s, tv_r_Filter_10_670038_e;
    gettimeofday(&tv_r_Filter_10_670038_s, 0);
    SW_Filter_TD_10700756(tbl_SerializeFromObject_TD_11371222_input, tbl_Filter_TD_10700756_output);
    gettimeofday(&tv_r_Filter_10_670038_e, 0);

    struct timeval tv_r_Filter_10_846079_s, tv_r_Filter_10_846079_e;
    gettimeofday(&tv_r_Filter_10_846079_s, 0);
    SW_Filter_TD_10282303(tbl_SerializeFromObject_TD_11247879_input, tbl_Filter_TD_10282303_output);
    gettimeofday(&tv_r_Filter_10_846079_e, 0);

    struct timeval tv_r_Filter_9_203929_s, tv_r_Filter_9_203929_e;
    gettimeofday(&tv_r_Filter_9_203929_s, 0);
    SW_Filter_TD_9472277(tbl_SerializeFromObject_TD_10381514_input, tbl_Filter_TD_9472277_output);
    gettimeofday(&tv_r_Filter_9_203929_e, 0);

    struct timeval tv_r_Filter_9_645365_s, tv_r_Filter_9_645365_e;
    gettimeofday(&tv_r_Filter_9_645365_s, 0);
    SW_Filter_TD_9294021(tbl_SerializeFromObject_TD_10512123_input, tbl_Filter_TD_9294021_output);
    gettimeofday(&tv_r_Filter_9_645365_e, 0);

    struct timeval tv_r_Filter_9_674200_s, tv_r_Filter_9_674200_e;
    gettimeofday(&tv_r_Filter_9_674200_s, 0);
    SW_Filter_TD_9911989(tbl_SerializeFromObject_TD_1032642_input, tbl_Filter_TD_9911989_output);
    gettimeofday(&tv_r_Filter_9_674200_e, 0);

    struct timeval tv_r_JOIN_INNER_9_802381_s, tv_r_JOIN_INNER_9_802381_e;
    gettimeofday(&tv_r_JOIN_INNER_9_802381_s, 0);
    trans_JOIN_INNER_TD_9801878.add(&(tbl_Filter_TD_10793771_output));
    trans_JOIN_INNER_TD_9801878.add(&(tbl_Filter_TD_10722444_output));
    trans_JOIN_INNER_TD_9801878.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9801878), &(events_h2d_wr_JOIN_INNER_TD_9801878[0]));
    events_grp_JOIN_INNER_TD_9801878.push_back(events_h2d_wr_JOIN_INNER_TD_9801878[0]);
    krnl_JOIN_INNER_TD_9801878.run(0, &(events_grp_JOIN_INNER_TD_9801878), &(events_JOIN_INNER_TD_9801878[0]));
    
    trans_JOIN_INNER_TD_9801878_out.add(&(tbl_JOIN_INNER_TD_9801878_output));
    trans_JOIN_INNER_TD_9801878_out.dev2host(0, &(events_JOIN_INNER_TD_9801878), &(events_d2h_rd_JOIN_INNER_TD_9801878[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_9_802381_e, 0);

    struct timeval tv_r_Filter_9_466087_s, tv_r_Filter_9_466087_e;
    gettimeofday(&tv_r_Filter_9_466087_s, 0);
    SW_Filter_TD_933553(tbl_SerializeFromObject_TD_10335462_input, tbl_Filter_TD_933553_output);
    gettimeofday(&tv_r_Filter_9_466087_e, 0);

    struct timeval tv_r_JOIN_INNER_9_949760_s, tv_r_JOIN_INNER_9_949760_e;
    gettimeofday(&tv_r_JOIN_INNER_9_949760_s, 0);
    trans_JOIN_INNER_TD_9628813.add(&(tbl_Filter_TD_10282303_output));
    trans_JOIN_INNER_TD_9628813.add(&(tbl_Filter_TD_10700756_output));
    trans_JOIN_INNER_TD_9628813.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9628813), &(events_h2d_wr_JOIN_INNER_TD_9628813[0]));
    events_grp_JOIN_INNER_TD_9628813.push_back(events_h2d_wr_JOIN_INNER_TD_9628813[0]);
    krnl_JOIN_INNER_TD_9628813.run(0, &(events_grp_JOIN_INNER_TD_9628813), &(events_JOIN_INNER_TD_9628813[0]));
    
    trans_JOIN_INNER_TD_9628813_out.add(&(tbl_JOIN_INNER_TD_9628813_output));
    trans_JOIN_INNER_TD_9628813_out.dev2host(0, &(events_JOIN_INNER_TD_9628813), &(events_d2h_rd_JOIN_INNER_TD_9628813[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_9_949760_e, 0);

    struct timeval tv_r_Filter_8_841756_s, tv_r_Filter_8_841756_e;
    gettimeofday(&tv_r_Filter_8_841756_s, 0);
    SW_Filter_TD_8985396(tbl_SerializeFromObject_TD_9756110_input, tbl_Filter_TD_8985396_output);
    gettimeofday(&tv_r_Filter_8_841756_e, 0);

    struct timeval tv_r_Filter_8_170480_s, tv_r_Filter_8_170480_e;
    gettimeofday(&tv_r_Filter_8_170480_s, 0);
    SW_Filter_TD_8980256(tbl_SerializeFromObject_TD_9851500_input, tbl_Filter_TD_8980256_output);
    gettimeofday(&tv_r_Filter_8_170480_e, 0);

    struct timeval tv_r_Filter_8_480595_s, tv_r_Filter_8_480595_e;
    gettimeofday(&tv_r_Filter_8_480595_s, 0);
    SW_Filter_TD_8806247(tbl_SerializeFromObject_TD_9884661_input, tbl_Filter_TD_8806247_output);
    gettimeofday(&tv_r_Filter_8_480595_e, 0);

    struct timeval tv_r_JOIN_INNER_8_413107_s, tv_r_JOIN_INNER_8_413107_e;
    gettimeofday(&tv_r_JOIN_INNER_8_413107_s, 0);
    trans_JOIN_INNER_TD_8986387.add(&(tbl_Filter_TD_9294021_output));
    trans_JOIN_INNER_TD_8986387.add(&(tbl_Filter_TD_9472277_output));
    trans_JOIN_INNER_TD_8986387.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8986387), &(events_h2d_wr_JOIN_INNER_TD_8986387[0]));
    events_grp_JOIN_INNER_TD_8986387.push_back(events_h2d_wr_JOIN_INNER_TD_8986387[0]);
    krnl_JOIN_INNER_TD_8986387.run(0, &(events_grp_JOIN_INNER_TD_8986387), &(events_JOIN_INNER_TD_8986387[0]));
    
    trans_JOIN_INNER_TD_8986387_out.add(&(tbl_JOIN_INNER_TD_8986387_output));
    trans_JOIN_INNER_TD_8986387_out.dev2host(0, &(events_JOIN_INNER_TD_8986387), &(events_d2h_rd_JOIN_INNER_TD_8986387[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_413107_e, 0);

    struct timeval tv_r_JOIN_INNER_8_781228_s, tv_r_JOIN_INNER_8_781228_e;
    gettimeofday(&tv_r_JOIN_INNER_8_781228_s, 0);
    SW_JOIN_INNER_TD_8266314(tbl_JOIN_INNER_TD_9801878_output, tbl_Filter_TD_9911989_output, tbl_JOIN_INNER_TD_8266314_output);
    gettimeofday(&tv_r_JOIN_INNER_8_781228_e, 0);

    struct timeval tv_r_JOIN_INNER_8_337490_s, tv_r_JOIN_INNER_8_337490_e;
    gettimeofday(&tv_r_JOIN_INNER_8_337490_s, 0);
    SW_JOIN_INNER_TD_8701822(tbl_JOIN_INNER_TD_9628813_output, tbl_Filter_TD_933553_output, tbl_JOIN_INNER_TD_8701822_output);
    gettimeofday(&tv_r_JOIN_INNER_8_337490_e, 0);

    struct timeval tv_r_Filter_7_509388_s, tv_r_Filter_7_509388_e;
    gettimeofday(&tv_r_Filter_7_509388_s, 0);
    SW_Filter_TD_7876152(tbl_SerializeFromObject_TD_8568858_input, tbl_Filter_TD_7876152_output);
    gettimeofday(&tv_r_Filter_7_509388_e, 0);

    struct timeval tv_r_Filter_7_827485_s, tv_r_Filter_7_827485_e;
    gettimeofday(&tv_r_Filter_7_827485_s, 0);
    SW_Filter_TD_7110750(tbl_SerializeFromObject_TD_8185299_input, tbl_Filter_TD_7110750_output);
    gettimeofday(&tv_r_Filter_7_827485_e, 0);

    struct timeval tv_r_Filter_7_66938_s, tv_r_Filter_7_66938_e;
    gettimeofday(&tv_r_Filter_7_66938_s, 0);
    SW_Filter_TD_7409783(tbl_SerializeFromObject_TD_8844691_input, tbl_Filter_TD_7409783_output);
    gettimeofday(&tv_r_Filter_7_66938_e, 0);

    struct timeval tv_r_JOIN_INNER_7_497778_s, tv_r_JOIN_INNER_7_497778_e;
    gettimeofday(&tv_r_JOIN_INNER_7_497778_s, 0);
    trans_JOIN_INNER_TD_7769739.add(&(tbl_Filter_TD_8980256_output));
    trans_JOIN_INNER_TD_7769739.add(&(tbl_Filter_TD_8985396_output));
    trans_JOIN_INNER_TD_7769739.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7769739), &(events_h2d_wr_JOIN_INNER_TD_7769739[0]));
    events_grp_JOIN_INNER_TD_7769739.push_back(events_h2d_wr_JOIN_INNER_TD_7769739[0]);
    krnl_JOIN_INNER_TD_7769739.run(0, &(events_grp_JOIN_INNER_TD_7769739), &(events_JOIN_INNER_TD_7769739[0]));
    
    trans_JOIN_INNER_TD_7769739_out.add(&(tbl_JOIN_INNER_TD_7769739_output));
    trans_JOIN_INNER_TD_7769739_out.dev2host(0, &(events_JOIN_INNER_TD_7769739), &(events_d2h_rd_JOIN_INNER_TD_7769739[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_497778_e, 0);

    struct timeval tv_r_JOIN_INNER_7_526632_s, tv_r_JOIN_INNER_7_526632_e;
    gettimeofday(&tv_r_JOIN_INNER_7_526632_s, 0);
    SW_JOIN_INNER_TD_7976974(tbl_JOIN_INNER_TD_8986387_output, tbl_Filter_TD_8806247_output, tbl_JOIN_INNER_TD_7976974_output);
    gettimeofday(&tv_r_JOIN_INNER_7_526632_e, 0);

    struct timeval tv_r_Aggregate_7_577383_s, tv_r_Aggregate_7_577383_e;
    gettimeofday(&tv_r_Aggregate_7_577383_s, 0);
    SW_Aggregate_TD_7696336(tbl_JOIN_INNER_TD_8266314_output, tbl_Aggregate_TD_7696336_output);
    gettimeofday(&tv_r_Aggregate_7_577383_e, 0);

    struct timeval tv_r_Aggregate_7_267522_s, tv_r_Aggregate_7_267522_e;
    gettimeofday(&tv_r_Aggregate_7_267522_s, 0);
    SW_Aggregate_TD_715884(tbl_JOIN_INNER_TD_8701822_output, tbl_Aggregate_TD_715884_output);
    gettimeofday(&tv_r_Aggregate_7_267522_e, 0);

    struct timeval tv_r_Filter_6_228977_s, tv_r_Filter_6_228977_e;
    gettimeofday(&tv_r_Filter_6_228977_s, 0);
    SW_Filter_TD_6413588(tbl_SerializeFromObject_TD_7614970_input, tbl_Filter_TD_6413588_output);
    gettimeofday(&tv_r_Filter_6_228977_e, 0);

    struct timeval tv_r_Filter_6_898188_s, tv_r_Filter_6_898188_e;
    gettimeofday(&tv_r_Filter_6_898188_s, 0);
    SW_Filter_TD_648510(tbl_SerializeFromObject_TD_7213950_input, tbl_Filter_TD_648510_output);
    gettimeofday(&tv_r_Filter_6_898188_e, 0);

    struct timeval tv_r_Filter_6_73074_s, tv_r_Filter_6_73074_e;
    gettimeofday(&tv_r_Filter_6_73074_s, 0);
    SW_Filter_TD_6989288(tbl_SerializeFromObject_TD_7386193_input, tbl_Filter_TD_6989288_output);
    gettimeofday(&tv_r_Filter_6_73074_e, 0);

    struct timeval tv_r_JOIN_INNER_6_823675_s, tv_r_JOIN_INNER_6_823675_e;
    gettimeofday(&tv_r_JOIN_INNER_6_823675_s, 0);
    trans_JOIN_INNER_TD_6872948.add(&(tbl_Filter_TD_7110750_output));
    trans_JOIN_INNER_TD_6872948.add(&(tbl_Filter_TD_7876152_output));
    trans_JOIN_INNER_TD_6872948.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6872948), &(events_h2d_wr_JOIN_INNER_TD_6872948[0]));
    events_grp_JOIN_INNER_TD_6872948.push_back(events_h2d_wr_JOIN_INNER_TD_6872948[0]);
    krnl_JOIN_INNER_TD_6872948.run(0, &(events_grp_JOIN_INNER_TD_6872948), &(events_JOIN_INNER_TD_6872948[0]));
    
    trans_JOIN_INNER_TD_6872948_out.add(&(tbl_JOIN_INNER_TD_6872948_output));
    trans_JOIN_INNER_TD_6872948_out.dev2host(0, &(events_JOIN_INNER_TD_6872948), &(events_d2h_rd_JOIN_INNER_TD_6872948[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_823675_e, 0);

    struct timeval tv_r_JOIN_INNER_6_285258_s, tv_r_JOIN_INNER_6_285258_e;
    gettimeofday(&tv_r_JOIN_INNER_6_285258_s, 0);
    SW_JOIN_INNER_TD_673095(tbl_JOIN_INNER_TD_7769739_output, tbl_Filter_TD_7409783_output, tbl_JOIN_INNER_TD_673095_output);
    gettimeofday(&tv_r_JOIN_INNER_6_285258_e, 0);

    struct timeval tv_r_Aggregate_6_481524_s, tv_r_Aggregate_6_481524_e;
    gettimeofday(&tv_r_Aggregate_6_481524_s, 0);
    SW_Aggregate_TD_626149(tbl_JOIN_INNER_TD_7976974_output, tbl_Aggregate_TD_626149_output);
    gettimeofday(&tv_r_Aggregate_6_481524_e, 0);

    struct timeval tv_r_JOIN_INNER_6_292188_s, tv_r_JOIN_INNER_6_292188_e;
    gettimeofday(&tv_r_JOIN_INNER_6_292188_s, 0);
    SW_JOIN_INNER_TD_6718635(tbl_Aggregate_TD_715884_output, tbl_Aggregate_TD_7696336_output, tbl_JOIN_INNER_TD_6718635_output);
    gettimeofday(&tv_r_JOIN_INNER_6_292188_e, 0);

    struct timeval tv_r_Filter_5_562489_s, tv_r_Filter_5_562489_e;
    gettimeofday(&tv_r_Filter_5_562489_s, 0);
    SW_Filter_TD_5786904(tbl_SerializeFromObject_TD_6168328_input, tbl_Filter_TD_5786904_output);
    gettimeofday(&tv_r_Filter_5_562489_e, 0);

    struct timeval tv_r_JOIN_INNER_5_812127_s, tv_r_JOIN_INNER_5_812127_e;
    gettimeofday(&tv_r_JOIN_INNER_5_812127_s, 0);
    trans_JOIN_INNER_TD_5372260.add(&(tbl_Filter_TD_648510_output));
    trans_JOIN_INNER_TD_5372260.add(&(tbl_Filter_TD_6413588_output));
    trans_JOIN_INNER_TD_5372260.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5372260), &(events_h2d_wr_JOIN_INNER_TD_5372260[0]));
    events_grp_JOIN_INNER_TD_5372260.push_back(events_h2d_wr_JOIN_INNER_TD_5372260[0]);
    krnl_JOIN_INNER_TD_5372260.run(0, &(events_grp_JOIN_INNER_TD_5372260), &(events_JOIN_INNER_TD_5372260[0]));
    
    trans_JOIN_INNER_TD_5372260_out.add(&(tbl_JOIN_INNER_TD_5372260_output));
    trans_JOIN_INNER_TD_5372260_out.dev2host(0, &(events_JOIN_INNER_TD_5372260), &(events_d2h_rd_JOIN_INNER_TD_5372260[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_812127_e, 0);

    struct timeval tv_r_JOIN_INNER_5_37344_s, tv_r_JOIN_INNER_5_37344_e;
    gettimeofday(&tv_r_JOIN_INNER_5_37344_s, 0);
    SW_JOIN_INNER_TD_5266001(tbl_JOIN_INNER_TD_6872948_output, tbl_Filter_TD_6989288_output, tbl_JOIN_INNER_TD_5266001_output);
    gettimeofday(&tv_r_JOIN_INNER_5_37344_e, 0);

    struct timeval tv_r_Aggregate_5_660706_s, tv_r_Aggregate_5_660706_e;
    gettimeofday(&tv_r_Aggregate_5_660706_s, 0);
    SW_Aggregate_TD_5743181(tbl_JOIN_INNER_TD_673095_output, tbl_Aggregate_TD_5743181_output);
    gettimeofday(&tv_r_Aggregate_5_660706_e, 0);

    struct timeval tv_r_JOIN_INNER_5_406114_s, tv_r_JOIN_INNER_5_406114_e;
    gettimeofday(&tv_r_JOIN_INNER_5_406114_s, 0);
    SW_JOIN_INNER_TD_5135323(tbl_JOIN_INNER_TD_6718635_output, tbl_Aggregate_TD_626149_output, tbl_JOIN_INNER_TD_5135323_output);
    gettimeofday(&tv_r_JOIN_INNER_5_406114_e, 0);

    struct timeval tv_r_JOIN_INNER_4_391214_s, tv_r_JOIN_INNER_4_391214_e;
    gettimeofday(&tv_r_JOIN_INNER_4_391214_s, 0);
    SW_JOIN_INNER_TD_4795854(tbl_JOIN_INNER_TD_5372260_output, tbl_Filter_TD_5786904_output, tbl_JOIN_INNER_TD_4795854_output);
    gettimeofday(&tv_r_JOIN_INNER_4_391214_e, 0);

    struct timeval tv_r_Aggregate_4_226204_s, tv_r_Aggregate_4_226204_e;
    gettimeofday(&tv_r_Aggregate_4_226204_s, 0);
    SW_Aggregate_TD_43723(tbl_JOIN_INNER_TD_5266001_output, tbl_Aggregate_TD_43723_output);
    gettimeofday(&tv_r_Aggregate_4_226204_e, 0);

    struct timeval tv_r_JOIN_INNER_4_933792_s, tv_r_JOIN_INNER_4_933792_e;
    gettimeofday(&tv_r_JOIN_INNER_4_933792_s, 0);
    SW_JOIN_INNER_TD_4134806(tbl_JOIN_INNER_TD_5135323_output, tbl_Aggregate_TD_5743181_output, tbl_JOIN_INNER_TD_4134806_output);
    gettimeofday(&tv_r_JOIN_INNER_4_933792_e, 0);

    struct timeval tv_r_Aggregate_3_122826_s, tv_r_Aggregate_3_122826_e;
    gettimeofday(&tv_r_Aggregate_3_122826_s, 0);
    SW_Aggregate_TD_3900201(tbl_JOIN_INNER_TD_4795854_output, tbl_Aggregate_TD_3900201_output);
    gettimeofday(&tv_r_Aggregate_3_122826_e, 0);

    struct timeval tv_r_JOIN_INNER_3_533986_s, tv_r_JOIN_INNER_3_533986_e;
    gettimeofday(&tv_r_JOIN_INNER_3_533986_s, 0);
    SW_JOIN_INNER_TD_3851901(tbl_JOIN_INNER_TD_4134806_output, tbl_Aggregate_TD_43723_output, tbl_JOIN_INNER_TD_3851901_output);
    gettimeofday(&tv_r_JOIN_INNER_3_533986_e, 0);

    struct timeval tv_r_JOIN_INNER_2_930026_s, tv_r_JOIN_INNER_2_930026_e;
    gettimeofday(&tv_r_JOIN_INNER_2_930026_s, 0);
    SW_JOIN_INNER_TD_2324966(tbl_JOIN_INNER_TD_3851901_output, tbl_Aggregate_TD_3900201_output, tbl_JOIN_INNER_TD_2324966_output);
    gettimeofday(&tv_r_JOIN_INNER_2_930026_e, 0);

    struct timeval tv_r_Project_1_752563_s, tv_r_Project_1_752563_e;
    gettimeofday(&tv_r_Project_1_752563_s, 0);
    SW_Project_TD_112864(tbl_JOIN_INNER_TD_2324966_output, tbl_Project_TD_112864_output);
    gettimeofday(&tv_r_Project_1_752563_e, 0);

    struct timeval tv_r_Sort_0_645550_s, tv_r_Sort_0_645550_e;
    gettimeofday(&tv_r_Sort_0_645550_s, 0);
    SW_Sort_TD_0714814(tbl_Project_TD_112864_output, tbl_Sort_TD_0714814_output);
    gettimeofday(&tv_r_Sort_0_645550_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_174737_s, &tv_r_Filter_10_174737_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11675216_input: " << tbl_SerializeFromObject_TD_11675216_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_851609_s, &tv_r_Filter_10_851609_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11160561_input: " << tbl_SerializeFromObject_TD_11160561_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_670038_s, &tv_r_Filter_10_670038_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11371222_input: " << tbl_SerializeFromObject_TD_11371222_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_846079_s, &tv_r_Filter_10_846079_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11247879_input: " << tbl_SerializeFromObject_TD_11247879_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_203929_s, &tv_r_Filter_9_203929_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10381514_input: " << tbl_SerializeFromObject_TD_10381514_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_645365_s, &tv_r_Filter_9_645365_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10512123_input: " << tbl_SerializeFromObject_TD_10512123_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_674200_s, &tv_r_Filter_9_674200_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1032642_input: " << tbl_SerializeFromObject_TD_1032642_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_802381_s, &tv_r_JOIN_INNER_9_802381_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10793771_output: " << tbl_Filter_TD_10793771_output.getNumRow() << " " << "tbl_Filter_TD_10722444_output: " << tbl_Filter_TD_10722444_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_466087_s, &tv_r_Filter_9_466087_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10335462_input: " << tbl_SerializeFromObject_TD_10335462_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_949760_s, &tv_r_JOIN_INNER_9_949760_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10282303_output: " << tbl_Filter_TD_10282303_output.getNumRow() << " " << "tbl_Filter_TD_10700756_output: " << tbl_Filter_TD_10700756_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_841756_s, &tv_r_Filter_8_841756_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9756110_input: " << tbl_SerializeFromObject_TD_9756110_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_170480_s, &tv_r_Filter_8_170480_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9851500_input: " << tbl_SerializeFromObject_TD_9851500_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_480595_s, &tv_r_Filter_8_480595_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9884661_input: " << tbl_SerializeFromObject_TD_9884661_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_413107_s, &tv_r_JOIN_INNER_8_413107_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9294021_output: " << tbl_Filter_TD_9294021_output.getNumRow() << " " << "tbl_Filter_TD_9472277_output: " << tbl_Filter_TD_9472277_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_781228_s, &tv_r_JOIN_INNER_8_781228_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9801878_output: " << tbl_JOIN_INNER_TD_9801878_output.getNumRow() << " " << "tbl_Filter_TD_9911989_output: " << tbl_Filter_TD_9911989_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_337490_s, &tv_r_JOIN_INNER_8_337490_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9628813_output: " << tbl_JOIN_INNER_TD_9628813_output.getNumRow() << " " << "tbl_Filter_TD_933553_output: " << tbl_Filter_TD_933553_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_509388_s, &tv_r_Filter_7_509388_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8568858_input: " << tbl_SerializeFromObject_TD_8568858_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_827485_s, &tv_r_Filter_7_827485_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8185299_input: " << tbl_SerializeFromObject_TD_8185299_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_66938_s, &tv_r_Filter_7_66938_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8844691_input: " << tbl_SerializeFromObject_TD_8844691_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_497778_s, &tv_r_JOIN_INNER_7_497778_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8980256_output: " << tbl_Filter_TD_8980256_output.getNumRow() << " " << "tbl_Filter_TD_8985396_output: " << tbl_Filter_TD_8985396_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_526632_s, &tv_r_JOIN_INNER_7_526632_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8986387_output: " << tbl_JOIN_INNER_TD_8986387_output.getNumRow() << " " << "tbl_Filter_TD_8806247_output: " << tbl_Filter_TD_8806247_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_577383_s, &tv_r_Aggregate_7_577383_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8266314_output: " << tbl_JOIN_INNER_TD_8266314_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_267522_s, &tv_r_Aggregate_7_267522_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8701822_output: " << tbl_JOIN_INNER_TD_8701822_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_228977_s, &tv_r_Filter_6_228977_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7614970_input: " << tbl_SerializeFromObject_TD_7614970_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_898188_s, &tv_r_Filter_6_898188_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7213950_input: " << tbl_SerializeFromObject_TD_7213950_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_73074_s, &tv_r_Filter_6_73074_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7386193_input: " << tbl_SerializeFromObject_TD_7386193_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_823675_s, &tv_r_JOIN_INNER_6_823675_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7110750_output: " << tbl_Filter_TD_7110750_output.getNumRow() << " " << "tbl_Filter_TD_7876152_output: " << tbl_Filter_TD_7876152_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_285258_s, &tv_r_JOIN_INNER_6_285258_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7769739_output: " << tbl_JOIN_INNER_TD_7769739_output.getNumRow() << " " << "tbl_Filter_TD_7409783_output: " << tbl_Filter_TD_7409783_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_481524_s, &tv_r_Aggregate_6_481524_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7976974_output: " << tbl_JOIN_INNER_TD_7976974_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_292188_s, &tv_r_JOIN_INNER_6_292188_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_715884_output: " << tbl_Aggregate_TD_715884_output.getNumRow() << " " << "tbl_Aggregate_TD_7696336_output: " << tbl_Aggregate_TD_7696336_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_562489_s, &tv_r_Filter_5_562489_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6168328_input: " << tbl_SerializeFromObject_TD_6168328_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_812127_s, &tv_r_JOIN_INNER_5_812127_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_648510_output: " << tbl_Filter_TD_648510_output.getNumRow() << " " << "tbl_Filter_TD_6413588_output: " << tbl_Filter_TD_6413588_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_37344_s, &tv_r_JOIN_INNER_5_37344_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6872948_output: " << tbl_JOIN_INNER_TD_6872948_output.getNumRow() << " " << "tbl_Filter_TD_6989288_output: " << tbl_Filter_TD_6989288_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_660706_s, &tv_r_Aggregate_5_660706_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_673095_output: " << tbl_JOIN_INNER_TD_673095_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_406114_s, &tv_r_JOIN_INNER_5_406114_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6718635_output: " << tbl_JOIN_INNER_TD_6718635_output.getNumRow() << " " << "tbl_Aggregate_TD_626149_output: " << tbl_Aggregate_TD_626149_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_391214_s, &tv_r_JOIN_INNER_4_391214_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5372260_output: " << tbl_JOIN_INNER_TD_5372260_output.getNumRow() << " " << "tbl_Filter_TD_5786904_output: " << tbl_Filter_TD_5786904_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_226204_s, &tv_r_Aggregate_4_226204_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5266001_output: " << tbl_JOIN_INNER_TD_5266001_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_933792_s, &tv_r_JOIN_INNER_4_933792_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5135323_output: " << tbl_JOIN_INNER_TD_5135323_output.getNumRow() << " " << "tbl_Aggregate_TD_5743181_output: " << tbl_Aggregate_TD_5743181_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_122826_s, &tv_r_Aggregate_3_122826_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4795854_output: " << tbl_JOIN_INNER_TD_4795854_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_533986_s, &tv_r_JOIN_INNER_3_533986_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4134806_output: " << tbl_JOIN_INNER_TD_4134806_output.getNumRow() << " " << "tbl_Aggregate_TD_43723_output: " << tbl_Aggregate_TD_43723_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_930026_s, &tv_r_JOIN_INNER_2_930026_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3851901_output: " << tbl_JOIN_INNER_TD_3851901_output.getNumRow() << " " << "tbl_Aggregate_TD_3900201_output: " << tbl_Aggregate_TD_3900201_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_752563_s, &tv_r_Project_1_752563_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2324966_output: " << tbl_JOIN_INNER_TD_2324966_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_645550_s, &tv_r_Sort_0_645550_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_112864_output: " << tbl_Project_TD_112864_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.122954 * 1000 << "ms" << std::endl; 
    return 0; 
}
