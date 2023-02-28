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

#include "cfgFunc_q60.hpp" 
#include "q60.hpp" 

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
    std::cout << "NOTE:running query #60\n."; 
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
    Table tbl_GlobalLimit_TD_0642630_output("tbl_GlobalLimit_TD_0642630_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0642630_output.allocateHost();
    Table tbl_LocalLimit_TD_1341845_output("tbl_LocalLimit_TD_1341845_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1341845_output.allocateHost();
    Table tbl_Sort_TD_2751003_output("tbl_Sort_TD_2751003_output", 6100000, 2, "");
    tbl_Sort_TD_2751003_output.allocateHost();
    Table tbl_Aggregate_TD_3576582_output("tbl_Aggregate_TD_3576582_output", 6100000, 2, "");
    tbl_Aggregate_TD_3576582_output.allocateHost();
    Table tbl_Union_TD_4850028_output("tbl_Union_TD_4850028_output", 6100000, 2, "");
    tbl_Union_TD_4850028_output.allocateHost();
    Table tbl_Aggregate_TD_5419814_output("tbl_Aggregate_TD_5419814_output", 6100000, 2, "");
    tbl_Aggregate_TD_5419814_output.allocateHost();
    Table tbl_Aggregate_TD_5963899_output("tbl_Aggregate_TD_5963899_output", 6100000, 2, "");
    tbl_Aggregate_TD_5963899_output.allocateHost();
    Table tbl_Aggregate_TD_5195582_output("tbl_Aggregate_TD_5195582_output", 6100000, 2, "");
    tbl_Aggregate_TD_5195582_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6511585_output("tbl_JOIN_INNER_TD_6511585_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6511585_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6897800_output("tbl_JOIN_INNER_TD_6897800_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6897800_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6798906_output("tbl_JOIN_INNER_TD_6798906_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6798906_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7191022_output("tbl_JOIN_INNER_TD_7191022_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7191022_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7859291_output("tbl_JOIN_LEFTSEMI_TD_7859291_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7859291_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7659473_output("tbl_JOIN_INNER_TD_7659473_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7659473_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7599302_output("tbl_JOIN_LEFTSEMI_TD_7599302_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7599302_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7317734_output("tbl_JOIN_INNER_TD_7317734_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7317734_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7879875_output("tbl_JOIN_LEFTSEMI_TD_7879875_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7879875_output.allocateHost();
    Table tbl_JOIN_INNER_TD_868432_output("tbl_JOIN_INNER_TD_868432_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_868432_output.allocateHost();
    Table tbl_Filter_TD_8478415_output("tbl_Filter_TD_8478415_output", 6100000, 1, "");
    tbl_Filter_TD_8478415_output.allocateHost();
    Table tbl_Filter_TD_880318_output("tbl_Filter_TD_880318_output", 6100000, 2, "");
    tbl_Filter_TD_880318_output.allocateHost();
    Table tbl_Filter_TD_8797865_output("tbl_Filter_TD_8797865_output", 6100000, 1, "");
    tbl_Filter_TD_8797865_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8373230_output("tbl_JOIN_INNER_TD_8373230_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8373230_output.allocateHost();
    Table tbl_Filter_TD_8964235_output("tbl_Filter_TD_8964235_output", 6100000, 1, "");
    tbl_Filter_TD_8964235_output.allocateHost();
    Table tbl_Filter_TD_8217116_output("tbl_Filter_TD_8217116_output", 6100000, 2, "");
    tbl_Filter_TD_8217116_output.allocateHost();
    Table tbl_Filter_TD_8923142_output("tbl_Filter_TD_8923142_output", 6100000, 1, "");
    tbl_Filter_TD_8923142_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8171627_output("tbl_JOIN_INNER_TD_8171627_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8171627_output.allocateHost();
    Table tbl_Filter_TD_8196589_output("tbl_Filter_TD_8196589_output", 6100000, 1, "");
    tbl_Filter_TD_8196589_output.allocateHost();
    Table tbl_Filter_TD_8317028_output("tbl_Filter_TD_8317028_output", 6100000, 2, "");
    tbl_Filter_TD_8317028_output.allocateHost();
    Table tbl_Filter_TD_8583514_output("tbl_Filter_TD_8583514_output", 6100000, 1, "");
    tbl_Filter_TD_8583514_output.allocateHost();
    Table tbl_Filter_TD_9687911_output("tbl_Filter_TD_9687911_output", 6100000, 4, "");
    tbl_Filter_TD_9687911_output.allocateHost();
    Table tbl_Filter_TD_9726497_output("tbl_Filter_TD_9726497_output", 6100000, 1, "");
    tbl_Filter_TD_9726497_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9404720_input;
    tbl_SerializeFromObject_TD_9404720_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9404720_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9404720_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9404720_input.allocateHost();
    tbl_SerializeFromObject_TD_9404720_input.loadHost();
    Table tbl_SerializeFromObject_TD_9524445_input;
    tbl_SerializeFromObject_TD_9524445_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9524445_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9524445_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9524445_input.allocateHost();
    tbl_SerializeFromObject_TD_9524445_input.loadHost();
    Table tbl_SerializeFromObject_TD_9992974_input;
    tbl_SerializeFromObject_TD_9992974_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9992974_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9992974_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9992974_input.allocateHost();
    tbl_SerializeFromObject_TD_9992974_input.loadHost();
    Table tbl_Filter_TD_9700056_output("tbl_Filter_TD_9700056_output", 6100000, 4, "");
    tbl_Filter_TD_9700056_output.allocateHost();
    Table tbl_Filter_TD_9408258_output("tbl_Filter_TD_9408258_output", 6100000, 1, "");
    tbl_Filter_TD_9408258_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9582928_input;
    tbl_SerializeFromObject_TD_9582928_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9582928_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9582928_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9582928_input.allocateHost();
    tbl_SerializeFromObject_TD_9582928_input.loadHost();
    Table tbl_SerializeFromObject_TD_9327785_input;
    tbl_SerializeFromObject_TD_9327785_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9327785_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9327785_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9327785_input.allocateHost();
    tbl_SerializeFromObject_TD_9327785_input.loadHost();
    Table tbl_SerializeFromObject_TD_9679481_input;
    tbl_SerializeFromObject_TD_9679481_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9679481_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9679481_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9679481_input.allocateHost();
    tbl_SerializeFromObject_TD_9679481_input.loadHost();
    Table tbl_Filter_TD_9669517_output("tbl_Filter_TD_9669517_output", 6100000, 4, "");
    tbl_Filter_TD_9669517_output.allocateHost();
    Table tbl_Filter_TD_9648325_output("tbl_Filter_TD_9648325_output", 6100000, 1, "");
    tbl_Filter_TD_9648325_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9335389_input;
    tbl_SerializeFromObject_TD_9335389_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9335389_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9335389_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9335389_input.allocateHost();
    tbl_SerializeFromObject_TD_9335389_input.loadHost();
    Table tbl_SerializeFromObject_TD_917319_input;
    tbl_SerializeFromObject_TD_917319_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_917319_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_917319_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_917319_input.allocateHost();
    tbl_SerializeFromObject_TD_917319_input.loadHost();
    Table tbl_SerializeFromObject_TD_9704277_input;
    tbl_SerializeFromObject_TD_9704277_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9704277_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9704277_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9704277_input.allocateHost();
    tbl_SerializeFromObject_TD_9704277_input.loadHost();
    Table tbl_SerializeFromObject_TD_10755201_input;
    tbl_SerializeFromObject_TD_10755201_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10755201_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10755201_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10755201_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_10755201_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10755201_input.allocateHost();
    tbl_SerializeFromObject_TD_10755201_input.loadHost();
    Table tbl_SerializeFromObject_TD_10110492_input;
    tbl_SerializeFromObject_TD_10110492_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10110492_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10110492_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10110492_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10110492_input.allocateHost();
    tbl_SerializeFromObject_TD_10110492_input.loadHost();
    Table tbl_SerializeFromObject_TD_1043399_input;
    tbl_SerializeFromObject_TD_1043399_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1043399_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1043399_input.addCol("cs_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_1043399_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_1043399_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1043399_input.allocateHost();
    tbl_SerializeFromObject_TD_1043399_input.loadHost();
    Table tbl_SerializeFromObject_TD_10798324_input;
    tbl_SerializeFromObject_TD_10798324_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10798324_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10798324_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10798324_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10798324_input.allocateHost();
    tbl_SerializeFromObject_TD_10798324_input.loadHost();
    Table tbl_SerializeFromObject_TD_10996857_input;
    tbl_SerializeFromObject_TD_10996857_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10996857_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10996857_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_10996857_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10996857_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10996857_input.allocateHost();
    tbl_SerializeFromObject_TD_10996857_input.loadHost();
    Table tbl_SerializeFromObject_TD_10430978_input;
    tbl_SerializeFromObject_TD_10430978_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10430978_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10430978_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10430978_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10430978_input.allocateHost();
    tbl_SerializeFromObject_TD_10430978_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_7191022_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7659473_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7317734_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_868432_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8478415_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8373230_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8964235_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8171627_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8196589_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9687911_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9726497_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9700056_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9408258_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9669517_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9648325_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_7191022_cmds;
    cfg_JOIN_INNER_TD_7191022_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7191022_gqe_join (cfg_JOIN_INNER_TD_7191022_cmds.cmd);
    cfg_JOIN_INNER_TD_7191022_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7659473_cmds;
    cfg_JOIN_INNER_TD_7659473_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7659473_gqe_join (cfg_JOIN_INNER_TD_7659473_cmds.cmd);
    cfg_JOIN_INNER_TD_7659473_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7317734_cmds;
    cfg_JOIN_INNER_TD_7317734_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7317734_gqe_join (cfg_JOIN_INNER_TD_7317734_cmds.cmd);
    cfg_JOIN_INNER_TD_7317734_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_868432_cmds;
    cfg_JOIN_INNER_TD_868432_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_868432_gqe_join (cfg_JOIN_INNER_TD_868432_cmds.cmd);
    cfg_JOIN_INNER_TD_868432_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8373230_cmds;
    cfg_JOIN_INNER_TD_8373230_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8373230_gqe_join (cfg_JOIN_INNER_TD_8373230_cmds.cmd);
    cfg_JOIN_INNER_TD_8373230_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8171627_cmds;
    cfg_JOIN_INNER_TD_8171627_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8171627_gqe_join (cfg_JOIN_INNER_TD_8171627_cmds.cmd);
    cfg_JOIN_INNER_TD_8171627_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_7191022;
    krnl_JOIN_INNER_TD_7191022 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7191022.setup(tbl_JOIN_INNER_TD_868432_output, tbl_Filter_TD_8478415_output, tbl_JOIN_INNER_TD_7191022_output, cfg_JOIN_INNER_TD_7191022_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7659473;
    krnl_JOIN_INNER_TD_7659473 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7659473.setup(tbl_JOIN_INNER_TD_8373230_output, tbl_Filter_TD_8964235_output, tbl_JOIN_INNER_TD_7659473_output, cfg_JOIN_INNER_TD_7659473_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7317734;
    krnl_JOIN_INNER_TD_7317734 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7317734.setup(tbl_JOIN_INNER_TD_8171627_output, tbl_Filter_TD_8196589_output, tbl_JOIN_INNER_TD_7317734_output, cfg_JOIN_INNER_TD_7317734_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_868432;
    krnl_JOIN_INNER_TD_868432 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_868432.setup(tbl_Filter_TD_9687911_output, tbl_Filter_TD_9726497_output, tbl_JOIN_INNER_TD_868432_output, cfg_JOIN_INNER_TD_868432_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8373230;
    krnl_JOIN_INNER_TD_8373230 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8373230.setup(tbl_Filter_TD_9700056_output, tbl_Filter_TD_9408258_output, tbl_JOIN_INNER_TD_8373230_output, cfg_JOIN_INNER_TD_8373230_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8171627;
    krnl_JOIN_INNER_TD_8171627 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8171627.setup(tbl_Filter_TD_9669517_output, tbl_Filter_TD_9648325_output, tbl_JOIN_INNER_TD_8171627_output, cfg_JOIN_INNER_TD_8171627_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_7191022;
    trans_JOIN_INNER_TD_7191022.setq(q_h);
    trans_JOIN_INNER_TD_7191022.add(&(cfg_JOIN_INNER_TD_7191022_cmds));
    transEngine trans_JOIN_INNER_TD_7191022_out;
    trans_JOIN_INNER_TD_7191022_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7659473;
    trans_JOIN_INNER_TD_7659473.setq(q_h);
    trans_JOIN_INNER_TD_7659473.add(&(cfg_JOIN_INNER_TD_7659473_cmds));
    transEngine trans_JOIN_INNER_TD_7659473_out;
    trans_JOIN_INNER_TD_7659473_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7317734;
    trans_JOIN_INNER_TD_7317734.setq(q_h);
    trans_JOIN_INNER_TD_7317734.add(&(cfg_JOIN_INNER_TD_7317734_cmds));
    transEngine trans_JOIN_INNER_TD_7317734_out;
    trans_JOIN_INNER_TD_7317734_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_868432;
    trans_JOIN_INNER_TD_868432.setq(q_h);
    trans_JOIN_INNER_TD_868432.add(&(cfg_JOIN_INNER_TD_868432_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8373230;
    trans_JOIN_INNER_TD_8373230.setq(q_h);
    trans_JOIN_INNER_TD_8373230.add(&(cfg_JOIN_INNER_TD_8373230_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8171627;
    trans_JOIN_INNER_TD_8171627.setq(q_h);
    trans_JOIN_INNER_TD_8171627.add(&(cfg_JOIN_INNER_TD_8171627_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7191022;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7191022;
    std::vector<cl::Event> events_JOIN_INNER_TD_7191022;
    events_h2d_wr_JOIN_INNER_TD_7191022.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7191022.resize(1);
    events_JOIN_INNER_TD_7191022.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7191022;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7191022;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7659473;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7659473;
    std::vector<cl::Event> events_JOIN_INNER_TD_7659473;
    events_h2d_wr_JOIN_INNER_TD_7659473.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7659473.resize(1);
    events_JOIN_INNER_TD_7659473.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7659473;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7659473;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7317734;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7317734;
    std::vector<cl::Event> events_JOIN_INNER_TD_7317734;
    events_h2d_wr_JOIN_INNER_TD_7317734.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7317734.resize(1);
    events_JOIN_INNER_TD_7317734.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7317734;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7317734;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_868432;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_868432;
    std::vector<cl::Event> events_JOIN_INNER_TD_868432;
    events_h2d_wr_JOIN_INNER_TD_868432.resize(1);
    events_d2h_rd_JOIN_INNER_TD_868432.resize(1);
    events_JOIN_INNER_TD_868432.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_868432;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_868432;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8373230;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8373230;
    std::vector<cl::Event> events_JOIN_INNER_TD_8373230;
    events_h2d_wr_JOIN_INNER_TD_8373230.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8373230.resize(1);
    events_JOIN_INNER_TD_8373230.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8373230;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8373230;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8171627;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8171627;
    std::vector<cl::Event> events_JOIN_INNER_TD_8171627;
    events_h2d_wr_JOIN_INNER_TD_8171627.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8171627.resize(1);
    events_JOIN_INNER_TD_8171627.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8171627;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8171627;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_110115_s, tv_r_Filter_9_110115_e;
    gettimeofday(&tv_r_Filter_9_110115_s, 0);
    SW_Filter_TD_9648325(tbl_SerializeFromObject_TD_10430978_input, tbl_Filter_TD_9648325_output);
    gettimeofday(&tv_r_Filter_9_110115_e, 0);

    struct timeval tv_r_Filter_9_713471_s, tv_r_Filter_9_713471_e;
    gettimeofday(&tv_r_Filter_9_713471_s, 0);
    SW_Filter_TD_9669517(tbl_SerializeFromObject_TD_10996857_input, tbl_Filter_TD_9669517_output);
    gettimeofday(&tv_r_Filter_9_713471_e, 0);

    struct timeval tv_r_Filter_9_34056_s, tv_r_Filter_9_34056_e;
    gettimeofday(&tv_r_Filter_9_34056_s, 0);
    SW_Filter_TD_9408258(tbl_SerializeFromObject_TD_10798324_input, tbl_Filter_TD_9408258_output);
    gettimeofday(&tv_r_Filter_9_34056_e, 0);

    struct timeval tv_r_Filter_9_398167_s, tv_r_Filter_9_398167_e;
    gettimeofday(&tv_r_Filter_9_398167_s, 0);
    SW_Filter_TD_9700056(tbl_SerializeFromObject_TD_1043399_input, tbl_Filter_TD_9700056_output);
    gettimeofday(&tv_r_Filter_9_398167_e, 0);

    struct timeval tv_r_Filter_9_886628_s, tv_r_Filter_9_886628_e;
    gettimeofday(&tv_r_Filter_9_886628_s, 0);
    SW_Filter_TD_9726497(tbl_SerializeFromObject_TD_10110492_input, tbl_Filter_TD_9726497_output);
    gettimeofday(&tv_r_Filter_9_886628_e, 0);

    struct timeval tv_r_Filter_9_845080_s, tv_r_Filter_9_845080_e;
    gettimeofday(&tv_r_Filter_9_845080_s, 0);
    SW_Filter_TD_9687911(tbl_SerializeFromObject_TD_10755201_input, tbl_Filter_TD_9687911_output);
    gettimeofday(&tv_r_Filter_9_845080_e, 0);

    struct timeval tv_r_Filter_8_236465_s, tv_r_Filter_8_236465_e;
    gettimeofday(&tv_r_Filter_8_236465_s, 0);
    SW_Filter_TD_8583514(tbl_SerializeFromObject_TD_9704277_input, tbl_Filter_TD_8583514_output);
    gettimeofday(&tv_r_Filter_8_236465_e, 0);

    struct timeval tv_r_Filter_8_644319_s, tv_r_Filter_8_644319_e;
    gettimeofday(&tv_r_Filter_8_644319_s, 0);
    SW_Filter_TD_8317028(tbl_SerializeFromObject_TD_917319_input, tbl_Filter_TD_8317028_output);
    gettimeofday(&tv_r_Filter_8_644319_e, 0);

    struct timeval tv_r_Filter_8_477602_s, tv_r_Filter_8_477602_e;
    gettimeofday(&tv_r_Filter_8_477602_s, 0);
    SW_Filter_TD_8196589(tbl_SerializeFromObject_TD_9335389_input, tbl_Filter_TD_8196589_output);
    gettimeofday(&tv_r_Filter_8_477602_e, 0);

    struct timeval tv_r_JOIN_INNER_8_182888_s, tv_r_JOIN_INNER_8_182888_e;
    gettimeofday(&tv_r_JOIN_INNER_8_182888_s, 0);
    trans_JOIN_INNER_TD_8171627.add(&(tbl_Filter_TD_9669517_output));
    trans_JOIN_INNER_TD_8171627.add(&(tbl_Filter_TD_9648325_output));
    trans_JOIN_INNER_TD_8171627.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8171627), &(events_h2d_wr_JOIN_INNER_TD_8171627[0]));
    events_grp_JOIN_INNER_TD_8171627.push_back(events_h2d_wr_JOIN_INNER_TD_8171627[0]);
    krnl_JOIN_INNER_TD_8171627.run(0, &(events_grp_JOIN_INNER_TD_8171627), &(events_JOIN_INNER_TD_8171627[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_182888_e, 0);

    struct timeval tv_r_Filter_8_901613_s, tv_r_Filter_8_901613_e;
    gettimeofday(&tv_r_Filter_8_901613_s, 0);
    SW_Filter_TD_8923142(tbl_SerializeFromObject_TD_9679481_input, tbl_Filter_TD_8923142_output);
    gettimeofday(&tv_r_Filter_8_901613_e, 0);

    struct timeval tv_r_Filter_8_139930_s, tv_r_Filter_8_139930_e;
    gettimeofday(&tv_r_Filter_8_139930_s, 0);
    SW_Filter_TD_8217116(tbl_SerializeFromObject_TD_9327785_input, tbl_Filter_TD_8217116_output);
    gettimeofday(&tv_r_Filter_8_139930_e, 0);

    struct timeval tv_r_Filter_8_305136_s, tv_r_Filter_8_305136_e;
    gettimeofday(&tv_r_Filter_8_305136_s, 0);
    SW_Filter_TD_8964235(tbl_SerializeFromObject_TD_9582928_input, tbl_Filter_TD_8964235_output);
    gettimeofday(&tv_r_Filter_8_305136_e, 0);

    struct timeval tv_r_JOIN_INNER_8_591164_s, tv_r_JOIN_INNER_8_591164_e;
    gettimeofday(&tv_r_JOIN_INNER_8_591164_s, 0);
    trans_JOIN_INNER_TD_8373230.add(&(tbl_Filter_TD_9700056_output));
    trans_JOIN_INNER_TD_8373230.add(&(tbl_Filter_TD_9408258_output));
    trans_JOIN_INNER_TD_8373230.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8373230), &(events_h2d_wr_JOIN_INNER_TD_8373230[0]));
    events_grp_JOIN_INNER_TD_8373230.push_back(events_h2d_wr_JOIN_INNER_TD_8373230[0]);
    krnl_JOIN_INNER_TD_8373230.run(0, &(events_grp_JOIN_INNER_TD_8373230), &(events_JOIN_INNER_TD_8373230[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_591164_e, 0);

    struct timeval tv_r_Filter_8_424331_s, tv_r_Filter_8_424331_e;
    gettimeofday(&tv_r_Filter_8_424331_s, 0);
    SW_Filter_TD_8797865(tbl_SerializeFromObject_TD_9992974_input, tbl_Filter_TD_8797865_output);
    gettimeofday(&tv_r_Filter_8_424331_e, 0);

    struct timeval tv_r_Filter_8_114310_s, tv_r_Filter_8_114310_e;
    gettimeofday(&tv_r_Filter_8_114310_s, 0);
    SW_Filter_TD_880318(tbl_SerializeFromObject_TD_9524445_input, tbl_Filter_TD_880318_output);
    gettimeofday(&tv_r_Filter_8_114310_e, 0);

    struct timeval tv_r_Filter_8_806360_s, tv_r_Filter_8_806360_e;
    gettimeofday(&tv_r_Filter_8_806360_s, 0);
    SW_Filter_TD_8478415(tbl_SerializeFromObject_TD_9404720_input, tbl_Filter_TD_8478415_output);
    gettimeofday(&tv_r_Filter_8_806360_e, 0);

    struct timeval tv_r_JOIN_INNER_8_780296_s, tv_r_JOIN_INNER_8_780296_e;
    gettimeofday(&tv_r_JOIN_INNER_8_780296_s, 0);
    trans_JOIN_INNER_TD_868432.add(&(tbl_Filter_TD_9687911_output));
    trans_JOIN_INNER_TD_868432.add(&(tbl_Filter_TD_9726497_output));
    trans_JOIN_INNER_TD_868432.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_868432), &(events_h2d_wr_JOIN_INNER_TD_868432[0]));
    events_grp_JOIN_INNER_TD_868432.push_back(events_h2d_wr_JOIN_INNER_TD_868432[0]);
    krnl_JOIN_INNER_TD_868432.run(0, &(events_grp_JOIN_INNER_TD_868432), &(events_JOIN_INNER_TD_868432[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_780296_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_612000_s, tv_r_JOIN_LEFTSEMI_7_612000_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_612000_s, 0);
    SW_JOIN_LEFTSEMI_TD_7879875(tbl_Filter_TD_8317028_output, tbl_Filter_TD_8583514_output, tbl_JOIN_LEFTSEMI_TD_7879875_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_612000_e, 0);

    struct timeval tv_r_JOIN_INNER_7_485075_s, tv_r_JOIN_INNER_7_485075_e;
    gettimeofday(&tv_r_JOIN_INNER_7_485075_s, 0);
    prev_events_grp_JOIN_INNER_TD_7317734.push_back(events_h2d_wr_JOIN_INNER_TD_8171627[0]);
    trans_JOIN_INNER_TD_7317734.add(&(tbl_Filter_TD_8196589_output));
    trans_JOIN_INNER_TD_7317734.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7317734), &(events_h2d_wr_JOIN_INNER_TD_7317734[0]));
    events_grp_JOIN_INNER_TD_7317734.push_back(events_h2d_wr_JOIN_INNER_TD_7317734[0]);
    events_grp_JOIN_INNER_TD_7317734.push_back(events_JOIN_INNER_TD_8171627[0]);
    krnl_JOIN_INNER_TD_7317734.run(0, &(events_grp_JOIN_INNER_TD_7317734), &(events_JOIN_INNER_TD_7317734[0]));
    
    trans_JOIN_INNER_TD_7317734_out.add(&(tbl_JOIN_INNER_TD_7317734_output));
    trans_JOIN_INNER_TD_7317734_out.dev2host(0, &(events_JOIN_INNER_TD_7317734), &(events_d2h_rd_JOIN_INNER_TD_7317734[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_485075_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_246525_s, tv_r_JOIN_LEFTSEMI_7_246525_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_246525_s, 0);
    SW_JOIN_LEFTSEMI_TD_7599302(tbl_Filter_TD_8217116_output, tbl_Filter_TD_8923142_output, tbl_JOIN_LEFTSEMI_TD_7599302_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_246525_e, 0);

    struct timeval tv_r_JOIN_INNER_7_335584_s, tv_r_JOIN_INNER_7_335584_e;
    gettimeofday(&tv_r_JOIN_INNER_7_335584_s, 0);
    prev_events_grp_JOIN_INNER_TD_7659473.push_back(events_h2d_wr_JOIN_INNER_TD_8373230[0]);
    trans_JOIN_INNER_TD_7659473.add(&(tbl_Filter_TD_8964235_output));
    trans_JOIN_INNER_TD_7659473.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7659473), &(events_h2d_wr_JOIN_INNER_TD_7659473[0]));
    events_grp_JOIN_INNER_TD_7659473.push_back(events_h2d_wr_JOIN_INNER_TD_7659473[0]);
    events_grp_JOIN_INNER_TD_7659473.push_back(events_JOIN_INNER_TD_8373230[0]);
    krnl_JOIN_INNER_TD_7659473.run(0, &(events_grp_JOIN_INNER_TD_7659473), &(events_JOIN_INNER_TD_7659473[0]));
    
    trans_JOIN_INNER_TD_7659473_out.add(&(tbl_JOIN_INNER_TD_7659473_output));
    trans_JOIN_INNER_TD_7659473_out.dev2host(0, &(events_JOIN_INNER_TD_7659473), &(events_d2h_rd_JOIN_INNER_TD_7659473[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_335584_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_473400_s, tv_r_JOIN_LEFTSEMI_7_473400_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_473400_s, 0);
    SW_JOIN_LEFTSEMI_TD_7859291(tbl_Filter_TD_880318_output, tbl_Filter_TD_8797865_output, tbl_JOIN_LEFTSEMI_TD_7859291_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_473400_e, 0);

    struct timeval tv_r_JOIN_INNER_7_216679_s, tv_r_JOIN_INNER_7_216679_e;
    gettimeofday(&tv_r_JOIN_INNER_7_216679_s, 0);
    prev_events_grp_JOIN_INNER_TD_7191022.push_back(events_h2d_wr_JOIN_INNER_TD_868432[0]);
    trans_JOIN_INNER_TD_7191022.add(&(tbl_Filter_TD_8478415_output));
    trans_JOIN_INNER_TD_7191022.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7191022), &(events_h2d_wr_JOIN_INNER_TD_7191022[0]));
    events_grp_JOIN_INNER_TD_7191022.push_back(events_h2d_wr_JOIN_INNER_TD_7191022[0]);
    events_grp_JOIN_INNER_TD_7191022.push_back(events_JOIN_INNER_TD_868432[0]);
    krnl_JOIN_INNER_TD_7191022.run(0, &(events_grp_JOIN_INNER_TD_7191022), &(events_JOIN_INNER_TD_7191022[0]));
    
    trans_JOIN_INNER_TD_7191022_out.add(&(tbl_JOIN_INNER_TD_7191022_output));
    trans_JOIN_INNER_TD_7191022_out.dev2host(0, &(events_JOIN_INNER_TD_7191022), &(events_d2h_rd_JOIN_INNER_TD_7191022[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_216679_e, 0);

    struct timeval tv_r_JOIN_INNER_6_959136_s, tv_r_JOIN_INNER_6_959136_e;
    gettimeofday(&tv_r_JOIN_INNER_6_959136_s, 0);
    SW_JOIN_INNER_TD_6798906(tbl_JOIN_INNER_TD_7317734_output, tbl_JOIN_LEFTSEMI_TD_7879875_output, tbl_JOIN_INNER_TD_6798906_output);
    gettimeofday(&tv_r_JOIN_INNER_6_959136_e, 0);

    struct timeval tv_r_JOIN_INNER_6_374097_s, tv_r_JOIN_INNER_6_374097_e;
    gettimeofday(&tv_r_JOIN_INNER_6_374097_s, 0);
    SW_JOIN_INNER_TD_6897800(tbl_JOIN_INNER_TD_7659473_output, tbl_JOIN_LEFTSEMI_TD_7599302_output, tbl_JOIN_INNER_TD_6897800_output);
    gettimeofday(&tv_r_JOIN_INNER_6_374097_e, 0);

    struct timeval tv_r_JOIN_INNER_6_4967_s, tv_r_JOIN_INNER_6_4967_e;
    gettimeofday(&tv_r_JOIN_INNER_6_4967_s, 0);
    SW_JOIN_INNER_TD_6511585(tbl_JOIN_INNER_TD_7191022_output, tbl_JOIN_LEFTSEMI_TD_7859291_output, tbl_JOIN_INNER_TD_6511585_output);
    gettimeofday(&tv_r_JOIN_INNER_6_4967_e, 0);

    struct timeval tv_r_Aggregate_5_149451_s, tv_r_Aggregate_5_149451_e;
    gettimeofday(&tv_r_Aggregate_5_149451_s, 0);
    SW_Aggregate_TD_5195582(tbl_JOIN_INNER_TD_6798906_output, tbl_Aggregate_TD_5195582_output);
    gettimeofday(&tv_r_Aggregate_5_149451_e, 0);

    struct timeval tv_r_Aggregate_5_955966_s, tv_r_Aggregate_5_955966_e;
    gettimeofday(&tv_r_Aggregate_5_955966_s, 0);
    SW_Aggregate_TD_5963899(tbl_JOIN_INNER_TD_6897800_output, tbl_Aggregate_TD_5963899_output);
    gettimeofday(&tv_r_Aggregate_5_955966_e, 0);

    struct timeval tv_r_Aggregate_5_161498_s, tv_r_Aggregate_5_161498_e;
    gettimeofday(&tv_r_Aggregate_5_161498_s, 0);
    SW_Aggregate_TD_5419814(tbl_JOIN_INNER_TD_6511585_output, tbl_Aggregate_TD_5419814_output);
    gettimeofday(&tv_r_Aggregate_5_161498_e, 0);

    struct timeval tv_r_Union_4_361341_s, tv_r_Union_4_361341_e;
    gettimeofday(&tv_r_Union_4_361341_s, 0);
    SW_Union_TD_4850028(tbl_Aggregate_TD_5419814_output, tbl_Aggregate_TD_5963899_output, tbl_Aggregate_TD_5195582_output, tbl_Union_TD_4850028_output);
    gettimeofday(&tv_r_Union_4_361341_e, 0);

    struct timeval tv_r_Aggregate_3_949173_s, tv_r_Aggregate_3_949173_e;
    gettimeofday(&tv_r_Aggregate_3_949173_s, 0);
    SW_Aggregate_TD_3576582(tbl_Union_TD_4850028_output, tbl_Aggregate_TD_3576582_output);
    gettimeofday(&tv_r_Aggregate_3_949173_e, 0);

    struct timeval tv_r_Sort_2_182741_s, tv_r_Sort_2_182741_e;
    gettimeofday(&tv_r_Sort_2_182741_s, 0);
    SW_Sort_TD_2751003(tbl_Aggregate_TD_3576582_output, tbl_Sort_TD_2751003_output);
    gettimeofday(&tv_r_Sort_2_182741_e, 0);

    struct timeval tv_r_LocalLimit_1_122826_s, tv_r_LocalLimit_1_122826_e;
    gettimeofday(&tv_r_LocalLimit_1_122826_s, 0);
    SW_LocalLimit_TD_1341845(tbl_Sort_TD_2751003_output, tbl_LocalLimit_TD_1341845_output);
    gettimeofday(&tv_r_LocalLimit_1_122826_e, 0);

    struct timeval tv_r_GlobalLimit_0_323223_s, tv_r_GlobalLimit_0_323223_e;
    gettimeofday(&tv_r_GlobalLimit_0_323223_s, 0);
    SW_GlobalLimit_TD_0642630(tbl_LocalLimit_TD_1341845_output, tbl_GlobalLimit_TD_0642630_output);
    gettimeofday(&tv_r_GlobalLimit_0_323223_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_110115_s, &tv_r_Filter_9_110115_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10430978_input: " << tbl_SerializeFromObject_TD_10430978_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_713471_s, &tv_r_Filter_9_713471_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10996857_input: " << tbl_SerializeFromObject_TD_10996857_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_34056_s, &tv_r_Filter_9_34056_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10798324_input: " << tbl_SerializeFromObject_TD_10798324_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_398167_s, &tv_r_Filter_9_398167_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1043399_input: " << tbl_SerializeFromObject_TD_1043399_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_886628_s, &tv_r_Filter_9_886628_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10110492_input: " << tbl_SerializeFromObject_TD_10110492_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_845080_s, &tv_r_Filter_9_845080_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10755201_input: " << tbl_SerializeFromObject_TD_10755201_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_236465_s, &tv_r_Filter_8_236465_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9704277_input: " << tbl_SerializeFromObject_TD_9704277_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_644319_s, &tv_r_Filter_8_644319_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_917319_input: " << tbl_SerializeFromObject_TD_917319_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_477602_s, &tv_r_Filter_8_477602_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9335389_input: " << tbl_SerializeFromObject_TD_9335389_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_182888_s, &tv_r_JOIN_INNER_8_182888_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9669517_output: " << tbl_Filter_TD_9669517_output.getNumRow() << " " << "tbl_Filter_TD_9648325_output: " << tbl_Filter_TD_9648325_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_901613_s, &tv_r_Filter_8_901613_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9679481_input: " << tbl_SerializeFromObject_TD_9679481_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_139930_s, &tv_r_Filter_8_139930_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9327785_input: " << tbl_SerializeFromObject_TD_9327785_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_305136_s, &tv_r_Filter_8_305136_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9582928_input: " << tbl_SerializeFromObject_TD_9582928_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_591164_s, &tv_r_JOIN_INNER_8_591164_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9700056_output: " << tbl_Filter_TD_9700056_output.getNumRow() << " " << "tbl_Filter_TD_9408258_output: " << tbl_Filter_TD_9408258_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_424331_s, &tv_r_Filter_8_424331_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9992974_input: " << tbl_SerializeFromObject_TD_9992974_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_114310_s, &tv_r_Filter_8_114310_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9524445_input: " << tbl_SerializeFromObject_TD_9524445_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_806360_s, &tv_r_Filter_8_806360_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9404720_input: " << tbl_SerializeFromObject_TD_9404720_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_780296_s, &tv_r_JOIN_INNER_8_780296_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9687911_output: " << tbl_Filter_TD_9687911_output.getNumRow() << " " << "tbl_Filter_TD_9726497_output: " << tbl_Filter_TD_9726497_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_612000_s, &tv_r_JOIN_LEFTSEMI_7_612000_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8317028_output: " << tbl_Filter_TD_8317028_output.getNumRow() << " " << "tbl_Filter_TD_8583514_output: " << tbl_Filter_TD_8583514_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_485075_s, &tv_r_JOIN_INNER_7_485075_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8171627_output: " << tbl_JOIN_INNER_TD_8171627_output.getNumRow() << " " << "tbl_Filter_TD_8196589_output: " << tbl_Filter_TD_8196589_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_246525_s, &tv_r_JOIN_LEFTSEMI_7_246525_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8217116_output: " << tbl_Filter_TD_8217116_output.getNumRow() << " " << "tbl_Filter_TD_8923142_output: " << tbl_Filter_TD_8923142_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_335584_s, &tv_r_JOIN_INNER_7_335584_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8373230_output: " << tbl_JOIN_INNER_TD_8373230_output.getNumRow() << " " << "tbl_Filter_TD_8964235_output: " << tbl_Filter_TD_8964235_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_473400_s, &tv_r_JOIN_LEFTSEMI_7_473400_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_880318_output: " << tbl_Filter_TD_880318_output.getNumRow() << " " << "tbl_Filter_TD_8797865_output: " << tbl_Filter_TD_8797865_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_216679_s, &tv_r_JOIN_INNER_7_216679_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_868432_output: " << tbl_JOIN_INNER_TD_868432_output.getNumRow() << " " << "tbl_Filter_TD_8478415_output: " << tbl_Filter_TD_8478415_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_959136_s, &tv_r_JOIN_INNER_6_959136_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7317734_output: " << tbl_JOIN_INNER_TD_7317734_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7879875_output: " << tbl_JOIN_LEFTSEMI_TD_7879875_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_374097_s, &tv_r_JOIN_INNER_6_374097_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7659473_output: " << tbl_JOIN_INNER_TD_7659473_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7599302_output: " << tbl_JOIN_LEFTSEMI_TD_7599302_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_4967_s, &tv_r_JOIN_INNER_6_4967_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7191022_output: " << tbl_JOIN_INNER_TD_7191022_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7859291_output: " << tbl_JOIN_LEFTSEMI_TD_7859291_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_149451_s, &tv_r_Aggregate_5_149451_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6798906_output: " << tbl_JOIN_INNER_TD_6798906_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_955966_s, &tv_r_Aggregate_5_955966_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6897800_output: " << tbl_JOIN_INNER_TD_6897800_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_161498_s, &tv_r_Aggregate_5_161498_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6511585_output: " << tbl_JOIN_INNER_TD_6511585_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_361341_s, &tv_r_Union_4_361341_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5419814_output: " << tbl_Aggregate_TD_5419814_output.getNumRow() << " " << "tbl_Aggregate_TD_5963899_output: " << tbl_Aggregate_TD_5963899_output.getNumRow() << " " << "tbl_Aggregate_TD_5195582_output: " << tbl_Aggregate_TD_5195582_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_949173_s, &tv_r_Aggregate_3_949173_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4850028_output: " << tbl_Union_TD_4850028_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_182741_s, &tv_r_Sort_2_182741_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3576582_output: " << tbl_Aggregate_TD_3576582_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_122826_s, &tv_r_LocalLimit_1_122826_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2751003_output: " << tbl_Sort_TD_2751003_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_323223_s, &tv_r_GlobalLimit_0_323223_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1341845_output: " << tbl_LocalLimit_TD_1341845_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.1601465 * 1000 << "ms" << std::endl; 
    return 0; 
}
