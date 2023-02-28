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

#include "cfgFunc_q25.hpp" 
#include "q25.hpp" 

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
    std::cout << "NOTE:running query #25\n."; 
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
    Table tbl_GlobalLimit_TD_0727839_output("tbl_GlobalLimit_TD_0727839_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0727839_output.allocateHost();
    Table tbl_LocalLimit_TD_1136602_output("tbl_LocalLimit_TD_1136602_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1136602_output.allocateHost();
    Table tbl_Sort_TD_2205571_output("tbl_Sort_TD_2205571_output", 6100000, 7, "");
    tbl_Sort_TD_2205571_output.allocateHost();
    Table tbl_Aggregate_TD_3776190_output("tbl_Aggregate_TD_3776190_output", 6100000, 7, "");
    tbl_Aggregate_TD_3776190_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4510247_output("tbl_JOIN_INNER_TD_4510247_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4510247_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5985119_output("tbl_JOIN_INNER_TD_5985119_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5985119_output.allocateHost();
    Table tbl_Filter_TD_57462_output("tbl_Filter_TD_57462_output", 6100000, 3, "");
    tbl_Filter_TD_57462_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6112127_output("tbl_JOIN_INNER_TD_6112127_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6112127_output.allocateHost();
    Table tbl_Filter_TD_6662422_output("tbl_Filter_TD_6662422_output", 6100000, 3, "");
    tbl_Filter_TD_6662422_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6652868_input;
    tbl_SerializeFromObject_TD_6652868_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6652868_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6652868_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6652868_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6652868_input.allocateHost();
    tbl_SerializeFromObject_TD_6652868_input.loadHost();
    Table tbl_JOIN_INNER_TD_7311061_output("tbl_JOIN_INNER_TD_7311061_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7311061_output.allocateHost();
    Table tbl_Filter_TD_7565999_output("tbl_Filter_TD_7565999_output", 6100000, 1, "");
    tbl_Filter_TD_7565999_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7735716_input;
    tbl_SerializeFromObject_TD_7735716_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7735716_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7735716_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7735716_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7735716_input.allocateHost();
    tbl_SerializeFromObject_TD_7735716_input.loadHost();
    Table tbl_JOIN_INNER_TD_8438460_output("tbl_JOIN_INNER_TD_8438460_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8438460_output.allocateHost();
    Table tbl_Filter_TD_8378836_output("tbl_Filter_TD_8378836_output", 6100000, 1, "");
    tbl_Filter_TD_8378836_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8502080_input;
    tbl_SerializeFromObject_TD_8502080_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8502080_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8502080_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8502080_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8502080_input.allocateHost();
    tbl_SerializeFromObject_TD_8502080_input.loadHost();
    Table tbl_JOIN_INNER_TD_9908785_output("tbl_JOIN_INNER_TD_9908785_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_9908785_output.allocateHost();
    Table tbl_Filter_TD_9735524_output("tbl_Filter_TD_9735524_output", 6100000, 1, "");
    tbl_Filter_TD_9735524_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9958485_input;
    tbl_SerializeFromObject_TD_9958485_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9958485_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9958485_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9958485_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9958485_input.allocateHost();
    tbl_SerializeFromObject_TD_9958485_input.loadHost();
    Table tbl_JOIN_INNER_TD_10784378_output("tbl_JOIN_INNER_TD_10784378_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_10784378_output.allocateHost();
    Table tbl_Filter_TD_10749498_output("tbl_Filter_TD_10749498_output", 6100000, 4, "");
    tbl_Filter_TD_10749498_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10313279_input;
    tbl_SerializeFromObject_TD_10313279_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10313279_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10313279_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10313279_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10313279_input.allocateHost();
    tbl_SerializeFromObject_TD_10313279_input.loadHost();
    Table tbl_Filter_TD_11487685_output("tbl_Filter_TD_11487685_output", 6100000, 6, "");
    tbl_Filter_TD_11487685_output.allocateHost();
    Table tbl_Filter_TD_1134337_output("tbl_Filter_TD_1134337_output", 6100000, 5, "");
    tbl_Filter_TD_1134337_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11577042_input;
    tbl_SerializeFromObject_TD_11577042_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11577042_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11577042_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11577042_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_11577042_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_11577042_input.allocateHost();
    tbl_SerializeFromObject_TD_11577042_input.loadHost();
    Table tbl_SerializeFromObject_TD_12459140_input;
    tbl_SerializeFromObject_TD_12459140_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_12459140_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12459140_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12459140_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12459140_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12459140_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_12459140_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12459140_input.allocateHost();
    tbl_SerializeFromObject_TD_12459140_input.loadHost();
    Table tbl_SerializeFromObject_TD_12660281_input;
    tbl_SerializeFromObject_TD_12660281_input = Table("store_returns", store_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_12660281_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12660281_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_12660281_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_12660281_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_12660281_input.addCol("sr_net_loss", 4);
    tbl_SerializeFromObject_TD_12660281_input.allocateHost();
    tbl_SerializeFromObject_TD_12660281_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6112127_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7311061_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7565999_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8438460_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8378836_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9908785_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9735524_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10784378_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10749498_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_6112127_cmds;
    cfg_JOIN_INNER_TD_6112127_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6112127_gqe_join (cfg_JOIN_INNER_TD_6112127_cmds.cmd);
    cfg_JOIN_INNER_TD_6112127_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7311061_cmds;
    cfg_JOIN_INNER_TD_7311061_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7311061_gqe_join (cfg_JOIN_INNER_TD_7311061_cmds.cmd);
    cfg_JOIN_INNER_TD_7311061_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8438460_cmds;
    cfg_JOIN_INNER_TD_8438460_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8438460_gqe_join (cfg_JOIN_INNER_TD_8438460_cmds.cmd);
    cfg_JOIN_INNER_TD_8438460_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9908785_cmds;
    cfg_JOIN_INNER_TD_9908785_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9908785_gqe_join (cfg_JOIN_INNER_TD_9908785_cmds.cmd);
    cfg_JOIN_INNER_TD_9908785_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_6112127;
    krnl_JOIN_INNER_TD_6112127 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6112127.setup(tbl_JOIN_INNER_TD_7311061_output, tbl_Filter_TD_7565999_output, tbl_JOIN_INNER_TD_6112127_output, cfg_JOIN_INNER_TD_6112127_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7311061;
    krnl_JOIN_INNER_TD_7311061 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7311061.setup(tbl_JOIN_INNER_TD_8438460_output, tbl_Filter_TD_8378836_output, tbl_JOIN_INNER_TD_7311061_output, cfg_JOIN_INNER_TD_7311061_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8438460;
    krnl_JOIN_INNER_TD_8438460 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8438460.setup(tbl_JOIN_INNER_TD_9908785_output, tbl_Filter_TD_9735524_output, tbl_JOIN_INNER_TD_8438460_output, cfg_JOIN_INNER_TD_8438460_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9908785;
    krnl_JOIN_INNER_TD_9908785 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9908785.setup(tbl_JOIN_INNER_TD_10784378_output, tbl_Filter_TD_10749498_output, tbl_JOIN_INNER_TD_9908785_output, cfg_JOIN_INNER_TD_9908785_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_6112127;
    trans_JOIN_INNER_TD_6112127.setq(q_h);
    trans_JOIN_INNER_TD_6112127.add(&(cfg_JOIN_INNER_TD_6112127_cmds));
    transEngine trans_JOIN_INNER_TD_6112127_out;
    trans_JOIN_INNER_TD_6112127_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7311061;
    trans_JOIN_INNER_TD_7311061.setq(q_h);
    trans_JOIN_INNER_TD_7311061.add(&(cfg_JOIN_INNER_TD_7311061_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8438460;
    trans_JOIN_INNER_TD_8438460.setq(q_h);
    trans_JOIN_INNER_TD_8438460.add(&(cfg_JOIN_INNER_TD_8438460_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9908785;
    trans_JOIN_INNER_TD_9908785.setq(q_h);
    trans_JOIN_INNER_TD_9908785.add(&(cfg_JOIN_INNER_TD_9908785_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6112127;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6112127;
    std::vector<cl::Event> events_JOIN_INNER_TD_6112127;
    events_h2d_wr_JOIN_INNER_TD_6112127.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6112127.resize(1);
    events_JOIN_INNER_TD_6112127.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6112127;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6112127;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7311061;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7311061;
    std::vector<cl::Event> events_JOIN_INNER_TD_7311061;
    events_h2d_wr_JOIN_INNER_TD_7311061.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7311061.resize(1);
    events_JOIN_INNER_TD_7311061.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7311061;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7311061;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8438460;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8438460;
    std::vector<cl::Event> events_JOIN_INNER_TD_8438460;
    events_h2d_wr_JOIN_INNER_TD_8438460.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8438460.resize(1);
    events_JOIN_INNER_TD_8438460.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8438460;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8438460;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9908785;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9908785;
    std::vector<cl::Event> events_JOIN_INNER_TD_9908785;
    events_h2d_wr_JOIN_INNER_TD_9908785.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9908785.resize(1);
    events_JOIN_INNER_TD_9908785.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9908785;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9908785;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_426372_s, tv_r_Filter_11_426372_e;
    gettimeofday(&tv_r_Filter_11_426372_s, 0);
    SW_Filter_TD_1134337(tbl_SerializeFromObject_TD_12660281_input, tbl_Filter_TD_1134337_output);
    gettimeofday(&tv_r_Filter_11_426372_e, 0);

    struct timeval tv_r_Filter_11_209389_s, tv_r_Filter_11_209389_e;
    gettimeofday(&tv_r_Filter_11_209389_s, 0);
    SW_Filter_TD_11487685(tbl_SerializeFromObject_TD_12459140_input, tbl_Filter_TD_11487685_output);
    gettimeofday(&tv_r_Filter_11_209389_e, 0);

    struct timeval tv_r_Filter_10_725337_s, tv_r_Filter_10_725337_e;
    gettimeofday(&tv_r_Filter_10_725337_s, 0);
    SW_Filter_TD_10749498(tbl_SerializeFromObject_TD_11577042_input, tbl_Filter_TD_10749498_output);
    gettimeofday(&tv_r_Filter_10_725337_e, 0);

    struct timeval tv_r_JOIN_INNER_10_34101_s, tv_r_JOIN_INNER_10_34101_e;
    gettimeofday(&tv_r_JOIN_INNER_10_34101_s, 0);
    SW_JOIN_INNER_TD_10784378(tbl_Filter_TD_11487685_output, tbl_Filter_TD_1134337_output, tbl_JOIN_INNER_TD_10784378_output);
    gettimeofday(&tv_r_JOIN_INNER_10_34101_e, 0);

    struct timeval tv_r_Filter_9_106761_s, tv_r_Filter_9_106761_e;
    gettimeofday(&tv_r_Filter_9_106761_s, 0);
    SW_Filter_TD_9735524(tbl_SerializeFromObject_TD_10313279_input, tbl_Filter_TD_9735524_output);
    gettimeofday(&tv_r_Filter_9_106761_e, 0);

    struct timeval tv_r_JOIN_INNER_9_130852_s, tv_r_JOIN_INNER_9_130852_e;
    gettimeofday(&tv_r_JOIN_INNER_9_130852_s, 0);
    trans_JOIN_INNER_TD_9908785.add(&(tbl_JOIN_INNER_TD_10784378_output));
    trans_JOIN_INNER_TD_9908785.add(&(tbl_Filter_TD_10749498_output));
    trans_JOIN_INNER_TD_9908785.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9908785), &(events_h2d_wr_JOIN_INNER_TD_9908785[0]));
    events_grp_JOIN_INNER_TD_9908785.push_back(events_h2d_wr_JOIN_INNER_TD_9908785[0]);
    krnl_JOIN_INNER_TD_9908785.run(0, &(events_grp_JOIN_INNER_TD_9908785), &(events_JOIN_INNER_TD_9908785[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_130852_e, 0);

    struct timeval tv_r_Filter_8_221292_s, tv_r_Filter_8_221292_e;
    gettimeofday(&tv_r_Filter_8_221292_s, 0);
    SW_Filter_TD_8378836(tbl_SerializeFromObject_TD_9958485_input, tbl_Filter_TD_8378836_output);
    gettimeofday(&tv_r_Filter_8_221292_e, 0);

    struct timeval tv_r_JOIN_INNER_8_416472_s, tv_r_JOIN_INNER_8_416472_e;
    gettimeofday(&tv_r_JOIN_INNER_8_416472_s, 0);
    prev_events_grp_JOIN_INNER_TD_8438460.push_back(events_h2d_wr_JOIN_INNER_TD_9908785[0]);
    trans_JOIN_INNER_TD_8438460.add(&(tbl_Filter_TD_9735524_output));
    trans_JOIN_INNER_TD_8438460.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8438460), &(events_h2d_wr_JOIN_INNER_TD_8438460[0]));
    events_grp_JOIN_INNER_TD_8438460.push_back(events_h2d_wr_JOIN_INNER_TD_8438460[0]);
    events_grp_JOIN_INNER_TD_8438460.push_back(events_JOIN_INNER_TD_9908785[0]);
    krnl_JOIN_INNER_TD_8438460.run(0, &(events_grp_JOIN_INNER_TD_8438460), &(events_JOIN_INNER_TD_8438460[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_416472_e, 0);

    struct timeval tv_r_Filter_7_409000_s, tv_r_Filter_7_409000_e;
    gettimeofday(&tv_r_Filter_7_409000_s, 0);
    SW_Filter_TD_7565999(tbl_SerializeFromObject_TD_8502080_input, tbl_Filter_TD_7565999_output);
    gettimeofday(&tv_r_Filter_7_409000_e, 0);

    struct timeval tv_r_JOIN_INNER_7_840495_s, tv_r_JOIN_INNER_7_840495_e;
    gettimeofday(&tv_r_JOIN_INNER_7_840495_s, 0);
    prev_events_grp_JOIN_INNER_TD_7311061.push_back(events_h2d_wr_JOIN_INNER_TD_8438460[0]);
    trans_JOIN_INNER_TD_7311061.add(&(tbl_Filter_TD_8378836_output));
    trans_JOIN_INNER_TD_7311061.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7311061), &(events_h2d_wr_JOIN_INNER_TD_7311061[0]));
    events_grp_JOIN_INNER_TD_7311061.push_back(events_h2d_wr_JOIN_INNER_TD_7311061[0]);
    events_grp_JOIN_INNER_TD_7311061.push_back(events_JOIN_INNER_TD_8438460[0]);
    krnl_JOIN_INNER_TD_7311061.run(0, &(events_grp_JOIN_INNER_TD_7311061), &(events_JOIN_INNER_TD_7311061[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_840495_e, 0);

    struct timeval tv_r_Filter_6_153720_s, tv_r_Filter_6_153720_e;
    gettimeofday(&tv_r_Filter_6_153720_s, 0);
    SW_Filter_TD_6662422(tbl_SerializeFromObject_TD_7735716_input, tbl_Filter_TD_6662422_output);
    gettimeofday(&tv_r_Filter_6_153720_e, 0);

    struct timeval tv_r_JOIN_INNER_6_143671_s, tv_r_JOIN_INNER_6_143671_e;
    gettimeofday(&tv_r_JOIN_INNER_6_143671_s, 0);
    prev_events_grp_JOIN_INNER_TD_6112127.push_back(events_h2d_wr_JOIN_INNER_TD_7311061[0]);
    trans_JOIN_INNER_TD_6112127.add(&(tbl_Filter_TD_7565999_output));
    trans_JOIN_INNER_TD_6112127.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6112127), &(events_h2d_wr_JOIN_INNER_TD_6112127[0]));
    events_grp_JOIN_INNER_TD_6112127.push_back(events_h2d_wr_JOIN_INNER_TD_6112127[0]);
    events_grp_JOIN_INNER_TD_6112127.push_back(events_JOIN_INNER_TD_7311061[0]);
    krnl_JOIN_INNER_TD_6112127.run(0, &(events_grp_JOIN_INNER_TD_6112127), &(events_JOIN_INNER_TD_6112127[0]));
    
    trans_JOIN_INNER_TD_6112127_out.add(&(tbl_JOIN_INNER_TD_6112127_output));
    trans_JOIN_INNER_TD_6112127_out.dev2host(0, &(events_JOIN_INNER_TD_6112127), &(events_d2h_rd_JOIN_INNER_TD_6112127[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_143671_e, 0);

    struct timeval tv_r_Filter_5_262272_s, tv_r_Filter_5_262272_e;
    gettimeofday(&tv_r_Filter_5_262272_s, 0);
    SW_Filter_TD_57462(tbl_SerializeFromObject_TD_6652868_input, tbl_Filter_TD_57462_output);
    gettimeofday(&tv_r_Filter_5_262272_e, 0);

    struct timeval tv_r_JOIN_INNER_5_467670_s, tv_r_JOIN_INNER_5_467670_e;
    gettimeofday(&tv_r_JOIN_INNER_5_467670_s, 0);
    SW_JOIN_INNER_TD_5985119(tbl_JOIN_INNER_TD_6112127_output, tbl_Filter_TD_6662422_output, tbl_JOIN_INNER_TD_5985119_output);
    gettimeofday(&tv_r_JOIN_INNER_5_467670_e, 0);

    struct timeval tv_r_JOIN_INNER_4_262676_s, tv_r_JOIN_INNER_4_262676_e;
    gettimeofday(&tv_r_JOIN_INNER_4_262676_s, 0);
    SW_JOIN_INNER_TD_4510247(tbl_JOIN_INNER_TD_5985119_output, tbl_Filter_TD_57462_output, tbl_JOIN_INNER_TD_4510247_output);
    gettimeofday(&tv_r_JOIN_INNER_4_262676_e, 0);

    struct timeval tv_r_Aggregate_3_605805_s, tv_r_Aggregate_3_605805_e;
    gettimeofday(&tv_r_Aggregate_3_605805_s, 0);
    SW_Aggregate_TD_3776190(tbl_JOIN_INNER_TD_4510247_output, tbl_Aggregate_TD_3776190_output);
    gettimeofday(&tv_r_Aggregate_3_605805_e, 0);

    struct timeval tv_r_Sort_2_793108_s, tv_r_Sort_2_793108_e;
    gettimeofday(&tv_r_Sort_2_793108_s, 0);
    SW_Sort_TD_2205571(tbl_Aggregate_TD_3776190_output, tbl_Sort_TD_2205571_output);
    gettimeofday(&tv_r_Sort_2_793108_e, 0);

    struct timeval tv_r_LocalLimit_1_495072_s, tv_r_LocalLimit_1_495072_e;
    gettimeofday(&tv_r_LocalLimit_1_495072_s, 0);
    SW_LocalLimit_TD_1136602(tbl_Sort_TD_2205571_output, tbl_LocalLimit_TD_1136602_output);
    gettimeofday(&tv_r_LocalLimit_1_495072_e, 0);

    struct timeval tv_r_GlobalLimit_0_681915_s, tv_r_GlobalLimit_0_681915_e;
    gettimeofday(&tv_r_GlobalLimit_0_681915_s, 0);
    SW_GlobalLimit_TD_0727839(tbl_LocalLimit_TD_1136602_output, tbl_GlobalLimit_TD_0727839_output);
    gettimeofday(&tv_r_GlobalLimit_0_681915_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_426372_s, &tv_r_Filter_11_426372_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12660281_input: " << tbl_SerializeFromObject_TD_12660281_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_209389_s, &tv_r_Filter_11_209389_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12459140_input: " << tbl_SerializeFromObject_TD_12459140_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_725337_s, &tv_r_Filter_10_725337_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11577042_input: " << tbl_SerializeFromObject_TD_11577042_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_34101_s, &tv_r_JOIN_INNER_10_34101_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11487685_output: " << tbl_Filter_TD_11487685_output.getNumRow() << " " << "tbl_Filter_TD_1134337_output: " << tbl_Filter_TD_1134337_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_106761_s, &tv_r_Filter_9_106761_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10313279_input: " << tbl_SerializeFromObject_TD_10313279_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_130852_s, &tv_r_JOIN_INNER_9_130852_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10784378_output: " << tbl_JOIN_INNER_TD_10784378_output.getNumRow() << " " << "tbl_Filter_TD_10749498_output: " << tbl_Filter_TD_10749498_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_221292_s, &tv_r_Filter_8_221292_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9958485_input: " << tbl_SerializeFromObject_TD_9958485_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_416472_s, &tv_r_JOIN_INNER_8_416472_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9908785_output: " << tbl_JOIN_INNER_TD_9908785_output.getNumRow() << " " << "tbl_Filter_TD_9735524_output: " << tbl_Filter_TD_9735524_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_409000_s, &tv_r_Filter_7_409000_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8502080_input: " << tbl_SerializeFromObject_TD_8502080_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_840495_s, &tv_r_JOIN_INNER_7_840495_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8438460_output: " << tbl_JOIN_INNER_TD_8438460_output.getNumRow() << " " << "tbl_Filter_TD_8378836_output: " << tbl_Filter_TD_8378836_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_153720_s, &tv_r_Filter_6_153720_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7735716_input: " << tbl_SerializeFromObject_TD_7735716_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_143671_s, &tv_r_JOIN_INNER_6_143671_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7311061_output: " << tbl_JOIN_INNER_TD_7311061_output.getNumRow() << " " << "tbl_Filter_TD_7565999_output: " << tbl_Filter_TD_7565999_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_262272_s, &tv_r_Filter_5_262272_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6652868_input: " << tbl_SerializeFromObject_TD_6652868_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_467670_s, &tv_r_JOIN_INNER_5_467670_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6112127_output: " << tbl_JOIN_INNER_TD_6112127_output.getNumRow() << " " << "tbl_Filter_TD_6662422_output: " << tbl_Filter_TD_6662422_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_262676_s, &tv_r_JOIN_INNER_4_262676_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5985119_output: " << tbl_JOIN_INNER_TD_5985119_output.getNumRow() << " " << "tbl_Filter_TD_57462_output: " << tbl_Filter_TD_57462_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_605805_s, &tv_r_Aggregate_3_605805_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4510247_output: " << tbl_JOIN_INNER_TD_4510247_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_793108_s, &tv_r_Sort_2_793108_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3776190_output: " << tbl_Aggregate_TD_3776190_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_495072_s, &tv_r_LocalLimit_1_495072_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2205571_output: " << tbl_Sort_TD_2205571_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_681915_s, &tv_r_GlobalLimit_0_681915_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1136602_output: " << tbl_LocalLimit_TD_1136602_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 5.1959167 * 1000 << "ms" << std::endl; 
    return 0; 
}
