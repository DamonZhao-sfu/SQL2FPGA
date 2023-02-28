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

#include "cfgFunc_q83.hpp" 
#include "q83.hpp" 

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
    std::cout << "NOTE:running query #83\n."; 
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
    Table tbl_GlobalLimit_TD_0153504_output("tbl_GlobalLimit_TD_0153504_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0153504_output.allocateHost();
    Table tbl_LocalLimit_TD_1807084_output("tbl_LocalLimit_TD_1807084_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1807084_output.allocateHost();
    Table tbl_Sort_TD_2248813_output("tbl_Sort_TD_2248813_output", 6100000, 8, "");
    tbl_Sort_TD_2248813_output.allocateHost();
    Table tbl_Project_TD_3740608_output("tbl_Project_TD_3740608_output", 6100000, 8, "");
    tbl_Project_TD_3740608_output.allocateHost();
    Table tbl_JOIN_INNER_TD_456283_output("tbl_JOIN_INNER_TD_456283_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_456283_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5296323_output("tbl_JOIN_INNER_TD_5296323_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5296323_output.allocateHost();
    Table tbl_Aggregate_TD_5523782_output("tbl_Aggregate_TD_5523782_output", 6100000, 2, "");
    tbl_Aggregate_TD_5523782_output.allocateHost();
    Table tbl_Aggregate_TD_6589621_output("tbl_Aggregate_TD_6589621_output", 6100000, 2, "");
    tbl_Aggregate_TD_6589621_output.allocateHost();
    Table tbl_Aggregate_TD_6614738_output("tbl_Aggregate_TD_6614738_output", 6100000, 2, "");
    tbl_Aggregate_TD_6614738_output.allocateHost();
    Table tbl_JOIN_INNER_TD_62789_output("tbl_JOIN_INNER_TD_62789_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_62789_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7783644_output("tbl_JOIN_INNER_TD_7783644_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7783644_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7291705_output("tbl_JOIN_INNER_TD_7291705_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7291705_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7834884_output("tbl_JOIN_INNER_TD_7834884_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_7834884_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7301959_output("tbl_JOIN_LEFTSEMI_TD_7301959_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_7301959_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8233369_output("tbl_JOIN_INNER_TD_8233369_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8233369_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_8893085_output("tbl_JOIN_LEFTSEMI_TD_8893085_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_8893085_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8480359_output("tbl_JOIN_INNER_TD_8480359_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8480359_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_8909911_output("tbl_JOIN_LEFTSEMI_TD_8909911_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_8909911_output.allocateHost();
    Table tbl_Filter_TD_8826970_output("tbl_Filter_TD_8826970_output", 6100000, 3, "");
    tbl_Filter_TD_8826970_output.allocateHost();
    Table tbl_Filter_TD_8693242_output("tbl_Filter_TD_8693242_output", 6100000, 2, "");
    tbl_Filter_TD_8693242_output.allocateHost();
    Table tbl_Filter_TD_8204569_output("tbl_Filter_TD_8204569_output", 6100000, 2, "");
    tbl_Filter_TD_8204569_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_8913296_output("tbl_JOIN_LEFTSEMI_TD_8913296_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_8913296_output.allocateHost();
    Table tbl_Filter_TD_9381128_output("tbl_Filter_TD_9381128_output", 6100000, 3, "");
    tbl_Filter_TD_9381128_output.allocateHost();
    Table tbl_Filter_TD_9289358_output("tbl_Filter_TD_9289358_output", 6100000, 2, "");
    tbl_Filter_TD_9289358_output.allocateHost();
    Table tbl_Filter_TD_927854_output("tbl_Filter_TD_927854_output", 6100000, 2, "");
    tbl_Filter_TD_927854_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_936390_output("tbl_JOIN_LEFTSEMI_TD_936390_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_936390_output.allocateHost();
    Table tbl_Filter_TD_9758630_output("tbl_Filter_TD_9758630_output", 6100000, 3, "");
    tbl_Filter_TD_9758630_output.allocateHost();
    Table tbl_Filter_TD_9974137_output("tbl_Filter_TD_9974137_output", 6100000, 2, "");
    tbl_Filter_TD_9974137_output.allocateHost();
    Table tbl_Filter_TD_934468_output("tbl_Filter_TD_934468_output", 6100000, 2, "");
    tbl_Filter_TD_934468_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_9587184_output("tbl_JOIN_LEFTSEMI_TD_9587184_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_9587184_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9747838_input;
    tbl_SerializeFromObject_TD_9747838_input = Table("web_returns", web_returns_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9747838_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_9747838_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_9747838_input.addCol("wr_return_quantity", 4);
    tbl_SerializeFromObject_TD_9747838_input.allocateHost();
    tbl_SerializeFromObject_TD_9747838_input.loadHost();
    Table tbl_SerializeFromObject_TD_9156878_input;
    tbl_SerializeFromObject_TD_9156878_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9156878_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9156878_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9156878_input.allocateHost();
    tbl_SerializeFromObject_TD_9156878_input.loadHost();
    Table tbl_SerializeFromObject_TD_9585453_input;
    tbl_SerializeFromObject_TD_9585453_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9585453_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9585453_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9585453_input.allocateHost();
    tbl_SerializeFromObject_TD_9585453_input.loadHost();
    Table tbl_SerializeFromObject_TD_9354699_input;
    tbl_SerializeFromObject_TD_9354699_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9354699_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9354699_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_9354699_input.allocateHost();
    tbl_SerializeFromObject_TD_9354699_input.loadHost();
    Table tbl_Filter_TD_9723863_output("tbl_Filter_TD_9723863_output", 6100000, 1, "");
    tbl_Filter_TD_9723863_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10927197_input;
    tbl_SerializeFromObject_TD_10927197_input = Table("store_returns", store_returns_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10927197_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_10927197_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_10927197_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_10927197_input.allocateHost();
    tbl_SerializeFromObject_TD_10927197_input.loadHost();
    Table tbl_SerializeFromObject_TD_10672407_input;
    tbl_SerializeFromObject_TD_10672407_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10672407_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10672407_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10672407_input.allocateHost();
    tbl_SerializeFromObject_TD_10672407_input.loadHost();
    Table tbl_SerializeFromObject_TD_10505824_input;
    tbl_SerializeFromObject_TD_10505824_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10505824_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10505824_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10505824_input.allocateHost();
    tbl_SerializeFromObject_TD_10505824_input.loadHost();
    Table tbl_SerializeFromObject_TD_10676584_input;
    tbl_SerializeFromObject_TD_10676584_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10676584_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10676584_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_10676584_input.allocateHost();
    tbl_SerializeFromObject_TD_10676584_input.loadHost();
    Table tbl_Filter_TD_10107099_output("tbl_Filter_TD_10107099_output", 6100000, 1, "");
    tbl_Filter_TD_10107099_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10704312_input;
    tbl_SerializeFromObject_TD_10704312_input = Table("catalog_returns", catalog_returns_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10704312_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_10704312_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_10704312_input.addCol("cr_return_quantity", 4);
    tbl_SerializeFromObject_TD_10704312_input.allocateHost();
    tbl_SerializeFromObject_TD_10704312_input.loadHost();
    Table tbl_SerializeFromObject_TD_10472203_input;
    tbl_SerializeFromObject_TD_10472203_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10472203_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10472203_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10472203_input.allocateHost();
    tbl_SerializeFromObject_TD_10472203_input.loadHost();
    Table tbl_SerializeFromObject_TD_10665816_input;
    tbl_SerializeFromObject_TD_10665816_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10665816_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10665816_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10665816_input.allocateHost();
    tbl_SerializeFromObject_TD_10665816_input.loadHost();
    Table tbl_SerializeFromObject_TD_10900026_input;
    tbl_SerializeFromObject_TD_10900026_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10900026_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10900026_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_10900026_input.allocateHost();
    tbl_SerializeFromObject_TD_10900026_input.loadHost();
    Table tbl_Filter_TD_1082572_output("tbl_Filter_TD_1082572_output", 6100000, 1, "");
    tbl_Filter_TD_1082572_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10697762_input;
    tbl_SerializeFromObject_TD_10697762_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10697762_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_10697762_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10697762_input.allocateHost();
    tbl_SerializeFromObject_TD_10697762_input.loadHost();
    Table tbl_SerializeFromObject_TD_11409154_input;
    tbl_SerializeFromObject_TD_11409154_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11409154_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11409154_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11409154_input.allocateHost();
    tbl_SerializeFromObject_TD_11409154_input.loadHost();
    Table tbl_SerializeFromObject_TD_11670655_input;
    tbl_SerializeFromObject_TD_11670655_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11670655_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11670655_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11670655_input.allocateHost();
    tbl_SerializeFromObject_TD_11670655_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_LEFTSEMI_TD_7301959_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_8893085_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_8909911_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8204569_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_8913296_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_927854_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_936390_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_934468_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_9587184_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_9354699_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9723863_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_10676584_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10107099_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_10900026_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_1082572_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_LEFTSEMI_TD_7301959_cmds;
    cfg_JOIN_LEFTSEMI_TD_7301959_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_7301959_gqe_join (cfg_JOIN_LEFTSEMI_TD_7301959_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_7301959_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_8893085_cmds;
    cfg_JOIN_LEFTSEMI_TD_8893085_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_8893085_gqe_join (cfg_JOIN_LEFTSEMI_TD_8893085_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_8893085_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_8909911_cmds;
    cfg_JOIN_LEFTSEMI_TD_8909911_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_8909911_gqe_join (cfg_JOIN_LEFTSEMI_TD_8909911_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_8909911_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_8913296_cmds;
    cfg_JOIN_LEFTSEMI_TD_8913296_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_8913296_gqe_join (cfg_JOIN_LEFTSEMI_TD_8913296_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_8913296_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_936390_cmds;
    cfg_JOIN_LEFTSEMI_TD_936390_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_936390_gqe_join (cfg_JOIN_LEFTSEMI_TD_936390_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_936390_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_9587184_cmds;
    cfg_JOIN_LEFTSEMI_TD_9587184_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_9587184_gqe_join (cfg_JOIN_LEFTSEMI_TD_9587184_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_9587184_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_LEFTSEMI_TD_7301959;
    krnl_JOIN_LEFTSEMI_TD_7301959 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_7301959.setup(tbl_JOIN_LEFTSEMI_TD_8913296_output, tbl_Filter_TD_8204569_output, tbl_JOIN_LEFTSEMI_TD_7301959_output, cfg_JOIN_LEFTSEMI_TD_7301959_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_8893085;
    krnl_JOIN_LEFTSEMI_TD_8893085 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_8893085.setup(tbl_JOIN_LEFTSEMI_TD_936390_output, tbl_Filter_TD_927854_output, tbl_JOIN_LEFTSEMI_TD_8893085_output, cfg_JOIN_LEFTSEMI_TD_8893085_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_8909911;
    krnl_JOIN_LEFTSEMI_TD_8909911 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_8909911.setup(tbl_JOIN_LEFTSEMI_TD_9587184_output, tbl_Filter_TD_934468_output, tbl_JOIN_LEFTSEMI_TD_8909911_output, cfg_JOIN_LEFTSEMI_TD_8909911_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_8913296;
    krnl_JOIN_LEFTSEMI_TD_8913296 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_8913296.setup(tbl_Filter_TD_9723863_output, tbl_SerializeFromObject_TD_9354699_input, tbl_JOIN_LEFTSEMI_TD_8913296_output, cfg_JOIN_LEFTSEMI_TD_8913296_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_936390;
    krnl_JOIN_LEFTSEMI_TD_936390 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_936390.setup(tbl_Filter_TD_10107099_output, tbl_SerializeFromObject_TD_10676584_input, tbl_JOIN_LEFTSEMI_TD_936390_output, cfg_JOIN_LEFTSEMI_TD_936390_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_9587184;
    krnl_JOIN_LEFTSEMI_TD_9587184 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_9587184.setup(tbl_Filter_TD_1082572_output, tbl_SerializeFromObject_TD_10900026_input, tbl_JOIN_LEFTSEMI_TD_9587184_output, cfg_JOIN_LEFTSEMI_TD_9587184_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_LEFTSEMI_TD_7301959;
    trans_JOIN_LEFTSEMI_TD_7301959.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_7301959.add(&(cfg_JOIN_LEFTSEMI_TD_7301959_cmds));
    transEngine trans_JOIN_LEFTSEMI_TD_7301959_out;
    trans_JOIN_LEFTSEMI_TD_7301959_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_8893085;
    trans_JOIN_LEFTSEMI_TD_8893085.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_8893085.add(&(cfg_JOIN_LEFTSEMI_TD_8893085_cmds));
    transEngine trans_JOIN_LEFTSEMI_TD_8893085_out;
    trans_JOIN_LEFTSEMI_TD_8893085_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_8909911;
    trans_JOIN_LEFTSEMI_TD_8909911.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_8909911.add(&(cfg_JOIN_LEFTSEMI_TD_8909911_cmds));
    transEngine trans_JOIN_LEFTSEMI_TD_8909911_out;
    trans_JOIN_LEFTSEMI_TD_8909911_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_8913296;
    trans_JOIN_LEFTSEMI_TD_8913296.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_8913296.add(&(cfg_JOIN_LEFTSEMI_TD_8913296_cmds));
    trans_JOIN_LEFTSEMI_TD_8913296.add(&(tbl_SerializeFromObject_TD_9354699_input));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_936390;
    trans_JOIN_LEFTSEMI_TD_936390.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_936390.add(&(cfg_JOIN_LEFTSEMI_TD_936390_cmds));
    trans_JOIN_LEFTSEMI_TD_936390.add(&(tbl_SerializeFromObject_TD_10676584_input));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_9587184;
    trans_JOIN_LEFTSEMI_TD_9587184.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_9587184.add(&(cfg_JOIN_LEFTSEMI_TD_9587184_cmds));
    trans_JOIN_LEFTSEMI_TD_9587184.add(&(tbl_SerializeFromObject_TD_10900026_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_7301959;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_7301959;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_7301959;
    events_h2d_wr_JOIN_LEFTSEMI_TD_7301959.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_7301959.resize(1);
    events_JOIN_LEFTSEMI_TD_7301959.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_7301959;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_7301959;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_8893085;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_8893085;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_8893085;
    events_h2d_wr_JOIN_LEFTSEMI_TD_8893085.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_8893085.resize(1);
    events_JOIN_LEFTSEMI_TD_8893085.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_8893085;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_8893085;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_8909911;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_8909911;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_8909911;
    events_h2d_wr_JOIN_LEFTSEMI_TD_8909911.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_8909911.resize(1);
    events_JOIN_LEFTSEMI_TD_8909911.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_8909911;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_8909911;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_8913296;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_8913296;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_8913296;
    events_h2d_wr_JOIN_LEFTSEMI_TD_8913296.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_8913296.resize(1);
    events_JOIN_LEFTSEMI_TD_8913296.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_8913296;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_8913296;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_936390;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_936390;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_936390;
    events_h2d_wr_JOIN_LEFTSEMI_TD_936390.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_936390.resize(1);
    events_JOIN_LEFTSEMI_TD_936390.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_936390;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_936390;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_9587184;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_9587184;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_9587184;
    events_h2d_wr_JOIN_LEFTSEMI_TD_9587184.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_9587184.resize(1);
    events_JOIN_LEFTSEMI_TD_9587184.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_9587184;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_9587184;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_148866_s, tv_r_Filter_10_148866_e;
    gettimeofday(&tv_r_Filter_10_148866_s, 0);
    SW_Filter_TD_1082572(tbl_SerializeFromObject_TD_11670655_input, tbl_Filter_TD_1082572_output);
    gettimeofday(&tv_r_Filter_10_148866_e, 0);

    struct timeval tv_r_Filter_10_404947_s, tv_r_Filter_10_404947_e;
    gettimeofday(&tv_r_Filter_10_404947_s, 0);
    SW_Filter_TD_10107099(tbl_SerializeFromObject_TD_11409154_input, tbl_Filter_TD_10107099_output);
    gettimeofday(&tv_r_Filter_10_404947_e, 0);

    struct timeval tv_r_Filter_9_486848_s, tv_r_Filter_9_486848_e;
    gettimeofday(&tv_r_Filter_9_486848_s, 0);
    SW_Filter_TD_9723863(tbl_SerializeFromObject_TD_10697762_input, tbl_Filter_TD_9723863_output);
    gettimeofday(&tv_r_Filter_9_486848_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_746065_s, tv_r_JOIN_LEFTSEMI_9_746065_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_746065_s, 0);
    trans_JOIN_LEFTSEMI_TD_9587184.add(&(tbl_Filter_TD_1082572_output));
    trans_JOIN_LEFTSEMI_TD_9587184.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_9587184), &(events_h2d_wr_JOIN_LEFTSEMI_TD_9587184[0]));
    events_grp_JOIN_LEFTSEMI_TD_9587184.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_9587184[0]);
    krnl_JOIN_LEFTSEMI_TD_9587184.run(0, &(events_grp_JOIN_LEFTSEMI_TD_9587184), &(events_JOIN_LEFTSEMI_TD_9587184[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_746065_e, 0);

    struct timeval tv_r_Filter_9_628055_s, tv_r_Filter_9_628055_e;
    gettimeofday(&tv_r_Filter_9_628055_s, 0);
    SW_Filter_TD_934468(tbl_SerializeFromObject_TD_10665816_input, tbl_Filter_TD_934468_output);
    gettimeofday(&tv_r_Filter_9_628055_e, 0);

    struct timeval tv_r_Filter_9_835495_s, tv_r_Filter_9_835495_e;
    gettimeofday(&tv_r_Filter_9_835495_s, 0);
    SW_Filter_TD_9974137(tbl_SerializeFromObject_TD_10472203_input, tbl_Filter_TD_9974137_output);
    gettimeofday(&tv_r_Filter_9_835495_e, 0);

    struct timeval tv_r_Filter_9_308824_s, tv_r_Filter_9_308824_e;
    gettimeofday(&tv_r_Filter_9_308824_s, 0);
    SW_Filter_TD_9758630(tbl_SerializeFromObject_TD_10704312_input, tbl_Filter_TD_9758630_output);
    gettimeofday(&tv_r_Filter_9_308824_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_500679_s, tv_r_JOIN_LEFTSEMI_9_500679_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_500679_s, 0);
    trans_JOIN_LEFTSEMI_TD_936390.add(&(tbl_Filter_TD_10107099_output));
    trans_JOIN_LEFTSEMI_TD_936390.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_936390), &(events_h2d_wr_JOIN_LEFTSEMI_TD_936390[0]));
    events_grp_JOIN_LEFTSEMI_TD_936390.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_936390[0]);
    krnl_JOIN_LEFTSEMI_TD_936390.run(0, &(events_grp_JOIN_LEFTSEMI_TD_936390), &(events_JOIN_LEFTSEMI_TD_936390[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_500679_e, 0);

    struct timeval tv_r_Filter_9_280739_s, tv_r_Filter_9_280739_e;
    gettimeofday(&tv_r_Filter_9_280739_s, 0);
    SW_Filter_TD_927854(tbl_SerializeFromObject_TD_10505824_input, tbl_Filter_TD_927854_output);
    gettimeofday(&tv_r_Filter_9_280739_e, 0);

    struct timeval tv_r_Filter_9_472684_s, tv_r_Filter_9_472684_e;
    gettimeofday(&tv_r_Filter_9_472684_s, 0);
    SW_Filter_TD_9289358(tbl_SerializeFromObject_TD_10672407_input, tbl_Filter_TD_9289358_output);
    gettimeofday(&tv_r_Filter_9_472684_e, 0);

    struct timeval tv_r_Filter_9_415177_s, tv_r_Filter_9_415177_e;
    gettimeofday(&tv_r_Filter_9_415177_s, 0);
    SW_Filter_TD_9381128(tbl_SerializeFromObject_TD_10927197_input, tbl_Filter_TD_9381128_output);
    gettimeofday(&tv_r_Filter_9_415177_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_509980_s, tv_r_JOIN_LEFTSEMI_8_509980_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_509980_s, 0);
    trans_JOIN_LEFTSEMI_TD_8913296.add(&(tbl_Filter_TD_9723863_output));
    trans_JOIN_LEFTSEMI_TD_8913296.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_8913296), &(events_h2d_wr_JOIN_LEFTSEMI_TD_8913296[0]));
    events_grp_JOIN_LEFTSEMI_TD_8913296.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8913296[0]);
    krnl_JOIN_LEFTSEMI_TD_8913296.run(0, &(events_grp_JOIN_LEFTSEMI_TD_8913296), &(events_JOIN_LEFTSEMI_TD_8913296[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_509980_e, 0);

    struct timeval tv_r_Filter_8_124690_s, tv_r_Filter_8_124690_e;
    gettimeofday(&tv_r_Filter_8_124690_s, 0);
    SW_Filter_TD_8204569(tbl_SerializeFromObject_TD_9585453_input, tbl_Filter_TD_8204569_output);
    gettimeofday(&tv_r_Filter_8_124690_e, 0);

    struct timeval tv_r_Filter_8_827444_s, tv_r_Filter_8_827444_e;
    gettimeofday(&tv_r_Filter_8_827444_s, 0);
    SW_Filter_TD_8693242(tbl_SerializeFromObject_TD_9156878_input, tbl_Filter_TD_8693242_output);
    gettimeofday(&tv_r_Filter_8_827444_e, 0);

    struct timeval tv_r_Filter_8_475488_s, tv_r_Filter_8_475488_e;
    gettimeofday(&tv_r_Filter_8_475488_s, 0);
    SW_Filter_TD_8826970(tbl_SerializeFromObject_TD_9747838_input, tbl_Filter_TD_8826970_output);
    gettimeofday(&tv_r_Filter_8_475488_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_998741_s, tv_r_JOIN_LEFTSEMI_8_998741_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_998741_s, 0);
    prev_events_grp_JOIN_LEFTSEMI_TD_8909911.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_9587184[0]);
    trans_JOIN_LEFTSEMI_TD_8909911.add(&(tbl_Filter_TD_934468_output));
    trans_JOIN_LEFTSEMI_TD_8909911.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_8909911), &(events_h2d_wr_JOIN_LEFTSEMI_TD_8909911[0]));
    events_grp_JOIN_LEFTSEMI_TD_8909911.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8909911[0]);
    events_grp_JOIN_LEFTSEMI_TD_8909911.push_back(events_JOIN_LEFTSEMI_TD_9587184[0]);
    krnl_JOIN_LEFTSEMI_TD_8909911.run(0, &(events_grp_JOIN_LEFTSEMI_TD_8909911), &(events_JOIN_LEFTSEMI_TD_8909911[0]));
    
    trans_JOIN_LEFTSEMI_TD_8909911_out.add(&(tbl_JOIN_LEFTSEMI_TD_8909911_output));
    trans_JOIN_LEFTSEMI_TD_8909911_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_8909911), &(events_d2h_rd_JOIN_LEFTSEMI_TD_8909911[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_998741_e, 0);

    struct timeval tv_r_JOIN_INNER_8_225569_s, tv_r_JOIN_INNER_8_225569_e;
    gettimeofday(&tv_r_JOIN_INNER_8_225569_s, 0);
    SW_JOIN_INNER_TD_8480359(tbl_Filter_TD_9758630_output, tbl_Filter_TD_9974137_output, tbl_JOIN_INNER_TD_8480359_output);
    gettimeofday(&tv_r_JOIN_INNER_8_225569_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_488422_s, tv_r_JOIN_LEFTSEMI_8_488422_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_488422_s, 0);
    prev_events_grp_JOIN_LEFTSEMI_TD_8893085.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_936390[0]);
    trans_JOIN_LEFTSEMI_TD_8893085.add(&(tbl_Filter_TD_927854_output));
    trans_JOIN_LEFTSEMI_TD_8893085.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_8893085), &(events_h2d_wr_JOIN_LEFTSEMI_TD_8893085[0]));
    events_grp_JOIN_LEFTSEMI_TD_8893085.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8893085[0]);
    events_grp_JOIN_LEFTSEMI_TD_8893085.push_back(events_JOIN_LEFTSEMI_TD_936390[0]);
    krnl_JOIN_LEFTSEMI_TD_8893085.run(0, &(events_grp_JOIN_LEFTSEMI_TD_8893085), &(events_JOIN_LEFTSEMI_TD_8893085[0]));
    
    trans_JOIN_LEFTSEMI_TD_8893085_out.add(&(tbl_JOIN_LEFTSEMI_TD_8893085_output));
    trans_JOIN_LEFTSEMI_TD_8893085_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_8893085), &(events_d2h_rd_JOIN_LEFTSEMI_TD_8893085[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_488422_e, 0);

    struct timeval tv_r_JOIN_INNER_8_650300_s, tv_r_JOIN_INNER_8_650300_e;
    gettimeofday(&tv_r_JOIN_INNER_8_650300_s, 0);
    SW_JOIN_INNER_TD_8233369(tbl_Filter_TD_9381128_output, tbl_Filter_TD_9289358_output, tbl_JOIN_INNER_TD_8233369_output);
    gettimeofday(&tv_r_JOIN_INNER_8_650300_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_131580_s, tv_r_JOIN_LEFTSEMI_7_131580_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_131580_s, 0);
    prev_events_grp_JOIN_LEFTSEMI_TD_7301959.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8913296[0]);
    trans_JOIN_LEFTSEMI_TD_7301959.add(&(tbl_Filter_TD_8204569_output));
    trans_JOIN_LEFTSEMI_TD_7301959.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_7301959), &(events_h2d_wr_JOIN_LEFTSEMI_TD_7301959[0]));
    events_grp_JOIN_LEFTSEMI_TD_7301959.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7301959[0]);
    events_grp_JOIN_LEFTSEMI_TD_7301959.push_back(events_JOIN_LEFTSEMI_TD_8913296[0]);
    krnl_JOIN_LEFTSEMI_TD_7301959.run(0, &(events_grp_JOIN_LEFTSEMI_TD_7301959), &(events_JOIN_LEFTSEMI_TD_7301959[0]));
    
    trans_JOIN_LEFTSEMI_TD_7301959_out.add(&(tbl_JOIN_LEFTSEMI_TD_7301959_output));
    trans_JOIN_LEFTSEMI_TD_7301959_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_7301959), &(events_d2h_rd_JOIN_LEFTSEMI_TD_7301959[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_131580_e, 0);

    struct timeval tv_r_JOIN_INNER_7_38085_s, tv_r_JOIN_INNER_7_38085_e;
    gettimeofday(&tv_r_JOIN_INNER_7_38085_s, 0);
    SW_JOIN_INNER_TD_7834884(tbl_Filter_TD_8826970_output, tbl_Filter_TD_8693242_output, tbl_JOIN_INNER_TD_7834884_output);
    gettimeofday(&tv_r_JOIN_INNER_7_38085_e, 0);

    struct timeval tv_r_JOIN_INNER_7_68322_s, tv_r_JOIN_INNER_7_68322_e;
    gettimeofday(&tv_r_JOIN_INNER_7_68322_s, 0);
    SW_JOIN_INNER_TD_7291705(tbl_JOIN_INNER_TD_8480359_output, tbl_JOIN_LEFTSEMI_TD_8909911_output, tbl_JOIN_INNER_TD_7291705_output);
    gettimeofday(&tv_r_JOIN_INNER_7_68322_e, 0);

    struct timeval tv_r_JOIN_INNER_7_65223_s, tv_r_JOIN_INNER_7_65223_e;
    gettimeofday(&tv_r_JOIN_INNER_7_65223_s, 0);
    SW_JOIN_INNER_TD_7783644(tbl_JOIN_INNER_TD_8233369_output, tbl_JOIN_LEFTSEMI_TD_8893085_output, tbl_JOIN_INNER_TD_7783644_output);
    gettimeofday(&tv_r_JOIN_INNER_7_65223_e, 0);

    struct timeval tv_r_JOIN_INNER_6_254285_s, tv_r_JOIN_INNER_6_254285_e;
    gettimeofday(&tv_r_JOIN_INNER_6_254285_s, 0);
    SW_JOIN_INNER_TD_62789(tbl_JOIN_INNER_TD_7834884_output, tbl_JOIN_LEFTSEMI_TD_7301959_output, tbl_JOIN_INNER_TD_62789_output);
    gettimeofday(&tv_r_JOIN_INNER_6_254285_e, 0);

    struct timeval tv_r_Aggregate_6_229115_s, tv_r_Aggregate_6_229115_e;
    gettimeofday(&tv_r_Aggregate_6_229115_s, 0);
    SW_Aggregate_TD_6614738(tbl_JOIN_INNER_TD_7291705_output, tbl_Aggregate_TD_6614738_output);
    gettimeofday(&tv_r_Aggregate_6_229115_e, 0);

    struct timeval tv_r_Aggregate_6_476155_s, tv_r_Aggregate_6_476155_e;
    gettimeofday(&tv_r_Aggregate_6_476155_s, 0);
    SW_Aggregate_TD_6589621(tbl_JOIN_INNER_TD_7783644_output, tbl_Aggregate_TD_6589621_output);
    gettimeofday(&tv_r_Aggregate_6_476155_e, 0);

    struct timeval tv_r_Aggregate_5_377167_s, tv_r_Aggregate_5_377167_e;
    gettimeofday(&tv_r_Aggregate_5_377167_s, 0);
    SW_Aggregate_TD_5523782(tbl_JOIN_INNER_TD_62789_output, tbl_Aggregate_TD_5523782_output);
    gettimeofday(&tv_r_Aggregate_5_377167_e, 0);

    struct timeval tv_r_JOIN_INNER_5_4486_s, tv_r_JOIN_INNER_5_4486_e;
    gettimeofday(&tv_r_JOIN_INNER_5_4486_s, 0);
    SW_JOIN_INNER_TD_5296323(tbl_Aggregate_TD_6589621_output, tbl_Aggregate_TD_6614738_output, tbl_JOIN_INNER_TD_5296323_output);
    gettimeofday(&tv_r_JOIN_INNER_5_4486_e, 0);

    struct timeval tv_r_JOIN_INNER_4_813421_s, tv_r_JOIN_INNER_4_813421_e;
    gettimeofday(&tv_r_JOIN_INNER_4_813421_s, 0);
    SW_JOIN_INNER_TD_456283(tbl_JOIN_INNER_TD_5296323_output, tbl_Aggregate_TD_5523782_output, tbl_JOIN_INNER_TD_456283_output);
    gettimeofday(&tv_r_JOIN_INNER_4_813421_e, 0);

    struct timeval tv_r_Project_3_267171_s, tv_r_Project_3_267171_e;
    gettimeofday(&tv_r_Project_3_267171_s, 0);
    SW_Project_TD_3740608(tbl_JOIN_INNER_TD_456283_output, tbl_Project_TD_3740608_output);
    gettimeofday(&tv_r_Project_3_267171_e, 0);

    struct timeval tv_r_Sort_2_826885_s, tv_r_Sort_2_826885_e;
    gettimeofday(&tv_r_Sort_2_826885_s, 0);
    SW_Sort_TD_2248813(tbl_Project_TD_3740608_output, tbl_Sort_TD_2248813_output);
    gettimeofday(&tv_r_Sort_2_826885_e, 0);

    struct timeval tv_r_LocalLimit_1_469857_s, tv_r_LocalLimit_1_469857_e;
    gettimeofday(&tv_r_LocalLimit_1_469857_s, 0);
    SW_LocalLimit_TD_1807084(tbl_Sort_TD_2248813_output, tbl_LocalLimit_TD_1807084_output);
    gettimeofday(&tv_r_LocalLimit_1_469857_e, 0);

    struct timeval tv_r_GlobalLimit_0_571710_s, tv_r_GlobalLimit_0_571710_e;
    gettimeofday(&tv_r_GlobalLimit_0_571710_s, 0);
    SW_GlobalLimit_TD_0153504(tbl_LocalLimit_TD_1807084_output, tbl_GlobalLimit_TD_0153504_output);
    gettimeofday(&tv_r_GlobalLimit_0_571710_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_148866_s, &tv_r_Filter_10_148866_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11670655_input: " << tbl_SerializeFromObject_TD_11670655_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_404947_s, &tv_r_Filter_10_404947_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11409154_input: " << tbl_SerializeFromObject_TD_11409154_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_486848_s, &tv_r_Filter_9_486848_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10697762_input: " << tbl_SerializeFromObject_TD_10697762_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_746065_s, &tv_r_JOIN_LEFTSEMI_9_746065_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10900026_input: " << tbl_SerializeFromObject_TD_10900026_input.getNumRow() << " " << "tbl_Filter_TD_1082572_output: " << tbl_Filter_TD_1082572_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_628055_s, &tv_r_Filter_9_628055_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10665816_input: " << tbl_SerializeFromObject_TD_10665816_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_835495_s, &tv_r_Filter_9_835495_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10472203_input: " << tbl_SerializeFromObject_TD_10472203_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_308824_s, &tv_r_Filter_9_308824_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10704312_input: " << tbl_SerializeFromObject_TD_10704312_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_500679_s, &tv_r_JOIN_LEFTSEMI_9_500679_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10676584_input: " << tbl_SerializeFromObject_TD_10676584_input.getNumRow() << " " << "tbl_Filter_TD_10107099_output: " << tbl_Filter_TD_10107099_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_280739_s, &tv_r_Filter_9_280739_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10505824_input: " << tbl_SerializeFromObject_TD_10505824_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_472684_s, &tv_r_Filter_9_472684_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10672407_input: " << tbl_SerializeFromObject_TD_10672407_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_415177_s, &tv_r_Filter_9_415177_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10927197_input: " << tbl_SerializeFromObject_TD_10927197_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_509980_s, &tv_r_JOIN_LEFTSEMI_8_509980_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9354699_input: " << tbl_SerializeFromObject_TD_9354699_input.getNumRow() << " " << "tbl_Filter_TD_9723863_output: " << tbl_Filter_TD_9723863_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_124690_s, &tv_r_Filter_8_124690_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9585453_input: " << tbl_SerializeFromObject_TD_9585453_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_827444_s, &tv_r_Filter_8_827444_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9156878_input: " << tbl_SerializeFromObject_TD_9156878_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_475488_s, &tv_r_Filter_8_475488_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9747838_input: " << tbl_SerializeFromObject_TD_9747838_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_998741_s, &tv_r_JOIN_LEFTSEMI_8_998741_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_934468_output: " << tbl_Filter_TD_934468_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_9587184_output: " << tbl_JOIN_LEFTSEMI_TD_9587184_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_225569_s, &tv_r_JOIN_INNER_8_225569_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9758630_output: " << tbl_Filter_TD_9758630_output.getNumRow() << " " << "tbl_Filter_TD_9974137_output: " << tbl_Filter_TD_9974137_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_488422_s, &tv_r_JOIN_LEFTSEMI_8_488422_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_927854_output: " << tbl_Filter_TD_927854_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_936390_output: " << tbl_JOIN_LEFTSEMI_TD_936390_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_650300_s, &tv_r_JOIN_INNER_8_650300_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9381128_output: " << tbl_Filter_TD_9381128_output.getNumRow() << " " << "tbl_Filter_TD_9289358_output: " << tbl_Filter_TD_9289358_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_131580_s, &tv_r_JOIN_LEFTSEMI_7_131580_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8204569_output: " << tbl_Filter_TD_8204569_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_8913296_output: " << tbl_JOIN_LEFTSEMI_TD_8913296_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_38085_s, &tv_r_JOIN_INNER_7_38085_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8826970_output: " << tbl_Filter_TD_8826970_output.getNumRow() << " " << "tbl_Filter_TD_8693242_output: " << tbl_Filter_TD_8693242_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_68322_s, &tv_r_JOIN_INNER_7_68322_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8480359_output: " << tbl_JOIN_INNER_TD_8480359_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_8909911_output: " << tbl_JOIN_LEFTSEMI_TD_8909911_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_65223_s, &tv_r_JOIN_INNER_7_65223_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8233369_output: " << tbl_JOIN_INNER_TD_8233369_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_8893085_output: " << tbl_JOIN_LEFTSEMI_TD_8893085_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_254285_s, &tv_r_JOIN_INNER_6_254285_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7834884_output: " << tbl_JOIN_INNER_TD_7834884_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7301959_output: " << tbl_JOIN_LEFTSEMI_TD_7301959_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_229115_s, &tv_r_Aggregate_6_229115_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7291705_output: " << tbl_JOIN_INNER_TD_7291705_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_476155_s, &tv_r_Aggregate_6_476155_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7783644_output: " << tbl_JOIN_INNER_TD_7783644_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_377167_s, &tv_r_Aggregate_5_377167_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_62789_output: " << tbl_JOIN_INNER_TD_62789_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_4486_s, &tv_r_JOIN_INNER_5_4486_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6589621_output: " << tbl_Aggregate_TD_6589621_output.getNumRow() << " " << "tbl_Aggregate_TD_6614738_output: " << tbl_Aggregate_TD_6614738_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_813421_s, &tv_r_JOIN_INNER_4_813421_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5296323_output: " << tbl_JOIN_INNER_TD_5296323_output.getNumRow() << " " << "tbl_Aggregate_TD_5523782_output: " << tbl_Aggregate_TD_5523782_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_267171_s, &tv_r_Project_3_267171_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_456283_output: " << tbl_JOIN_INNER_TD_456283_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_826885_s, &tv_r_Sort_2_826885_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3740608_output: " << tbl_Project_TD_3740608_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_469857_s, &tv_r_LocalLimit_1_469857_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2248813_output: " << tbl_Sort_TD_2248813_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_571710_s, &tv_r_GlobalLimit_0_571710_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1807084_output: " << tbl_LocalLimit_TD_1807084_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 5.1878505 * 1000 << "ms" << std::endl; 
    return 0; 
}
