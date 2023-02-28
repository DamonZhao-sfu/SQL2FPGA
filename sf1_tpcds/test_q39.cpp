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

#include "cfgFunc_q39.hpp" 
#include "q39.hpp" 

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
    std::cout << "NOTE:running query #39\n."; 
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
    Table tbl_Sort_TD_0957414_output("tbl_Sort_TD_0957414_output", 6100000, 8, "");
    tbl_Sort_TD_0957414_output.allocateHost();
    Table tbl_Project_TD_1710705_output("tbl_Project_TD_1710705_output", 6100000, 8, "");
    tbl_Project_TD_1710705_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2621802_output("tbl_JOIN_INNER_TD_2621802_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_2621802_output.allocateHost();
    Table tbl_Aggregate_TD_3765802_output("tbl_Aggregate_TD_3765802_output", 6100000, 4, "");
    tbl_Aggregate_TD_3765802_output.allocateHost();
    Table tbl_Aggregate_TD_3702847_output("tbl_Aggregate_TD_3702847_output", 6100000, 4, "");
    tbl_Aggregate_TD_3702847_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4100788_output("tbl_JOIN_INNER_TD_4100788_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4100788_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4920053_output("tbl_JOIN_INNER_TD_4920053_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4920053_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5811079_output("tbl_JOIN_INNER_TD_5811079_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5811079_output.allocateHost();
    Table tbl_Filter_TD_5190123_output("tbl_Filter_TD_5190123_output", 6100000, 2, "");
    tbl_Filter_TD_5190123_output.allocateHost();
    Table tbl_JOIN_INNER_TD_576365_output("tbl_JOIN_INNER_TD_576365_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_576365_output.allocateHost();
    Table tbl_Filter_TD_560475_output("tbl_Filter_TD_560475_output", 6100000, 2, "");
    tbl_Filter_TD_560475_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6156238_output("tbl_JOIN_INNER_TD_6156238_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6156238_output.allocateHost();
    Table tbl_Filter_TD_6294642_output("tbl_Filter_TD_6294642_output", 6100000, 2, "");
    tbl_Filter_TD_6294642_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6866264_input;
    tbl_SerializeFromObject_TD_6866264_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6866264_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6866264_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_6866264_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6866264_input.allocateHost();
    tbl_SerializeFromObject_TD_6866264_input.loadHost();
    Table tbl_JOIN_INNER_TD_659182_output("tbl_JOIN_INNER_TD_659182_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_659182_output.allocateHost();
    Table tbl_Filter_TD_6734621_output("tbl_Filter_TD_6734621_output", 6100000, 2, "");
    tbl_Filter_TD_6734621_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6552494_input;
    tbl_SerializeFromObject_TD_6552494_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6552494_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6552494_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_6552494_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6552494_input.allocateHost();
    tbl_SerializeFromObject_TD_6552494_input.loadHost();
    Table tbl_Filter_TD_7203627_output("tbl_Filter_TD_7203627_output", 6100000, 4, "");
    tbl_Filter_TD_7203627_output.allocateHost();
    Table tbl_Filter_TD_7706078_output("tbl_Filter_TD_7706078_output", 6100000, 1, "");
    tbl_Filter_TD_7706078_output.allocateHost();
    Table tbl_SerializeFromObject_TD_752315_input;
    tbl_SerializeFromObject_TD_752315_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_752315_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_752315_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_752315_input.allocateHost();
    tbl_SerializeFromObject_TD_752315_input.loadHost();
    Table tbl_Filter_TD_7630010_output("tbl_Filter_TD_7630010_output", 6100000, 4, "");
    tbl_Filter_TD_7630010_output.allocateHost();
    Table tbl_Filter_TD_7652124_output("tbl_Filter_TD_7652124_output", 6100000, 1, "");
    tbl_Filter_TD_7652124_output.allocateHost();
    Table tbl_SerializeFromObject_TD_778977_input;
    tbl_SerializeFromObject_TD_778977_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_778977_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_778977_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_778977_input.allocateHost();
    tbl_SerializeFromObject_TD_778977_input.loadHost();
    Table tbl_SerializeFromObject_TD_8766547_input;
    tbl_SerializeFromObject_TD_8766547_input = Table("inventory", inventory_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8766547_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_8766547_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_8766547_input.addCol("inv_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8766547_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_8766547_input.allocateHost();
    tbl_SerializeFromObject_TD_8766547_input.loadHost();
    Table tbl_SerializeFromObject_TD_8374655_input;
    tbl_SerializeFromObject_TD_8374655_input = Table("item", item_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8374655_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8374655_input.allocateHost();
    tbl_SerializeFromObject_TD_8374655_input.loadHost();
    Table tbl_SerializeFromObject_TD_8842881_input;
    tbl_SerializeFromObject_TD_8842881_input = Table("inventory", inventory_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8842881_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_8842881_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_8842881_input.addCol("inv_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_8842881_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_8842881_input.allocateHost();
    tbl_SerializeFromObject_TD_8842881_input.loadHost();
    Table tbl_SerializeFromObject_TD_8121076_input;
    tbl_SerializeFromObject_TD_8121076_input = Table("item", item_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8121076_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8121076_input.allocateHost();
    tbl_SerializeFromObject_TD_8121076_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2621802_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_3765802_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_3702847_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6156238_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_659182_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7203627_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7706078_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7630010_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7652124_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2621802_cmds;
    cfg_JOIN_INNER_TD_2621802_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2621802_gqe_join (cfg_JOIN_INNER_TD_2621802_cmds.cmd);
    cfg_JOIN_INNER_TD_2621802_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6156238_cmds;
    cfg_JOIN_INNER_TD_6156238_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6156238_gqe_join (cfg_JOIN_INNER_TD_6156238_cmds.cmd);
    cfg_JOIN_INNER_TD_6156238_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_659182_cmds;
    cfg_JOIN_INNER_TD_659182_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_659182_gqe_join (cfg_JOIN_INNER_TD_659182_cmds.cmd);
    cfg_JOIN_INNER_TD_659182_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2621802;
    krnl_JOIN_INNER_TD_2621802 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2621802.setup(tbl_Aggregate_TD_3765802_output, tbl_Aggregate_TD_3702847_output, tbl_JOIN_INNER_TD_2621802_output, cfg_JOIN_INNER_TD_2621802_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6156238;
    krnl_JOIN_INNER_TD_6156238 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6156238.setup(tbl_Filter_TD_7203627_output, tbl_Filter_TD_7706078_output, tbl_JOIN_INNER_TD_6156238_output, cfg_JOIN_INNER_TD_6156238_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_659182;
    krnl_JOIN_INNER_TD_659182 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_659182.setup(tbl_Filter_TD_7630010_output, tbl_Filter_TD_7652124_output, tbl_JOIN_INNER_TD_659182_output, cfg_JOIN_INNER_TD_659182_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2621802;
    trans_JOIN_INNER_TD_2621802.setq(q_h);
    trans_JOIN_INNER_TD_2621802.add(&(cfg_JOIN_INNER_TD_2621802_cmds));
    transEngine trans_JOIN_INNER_TD_2621802_out;
    trans_JOIN_INNER_TD_2621802_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6156238;
    trans_JOIN_INNER_TD_6156238.setq(q_h);
    trans_JOIN_INNER_TD_6156238.add(&(cfg_JOIN_INNER_TD_6156238_cmds));
    transEngine trans_JOIN_INNER_TD_6156238_out;
    trans_JOIN_INNER_TD_6156238_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_659182;
    trans_JOIN_INNER_TD_659182.setq(q_h);
    trans_JOIN_INNER_TD_659182.add(&(cfg_JOIN_INNER_TD_659182_cmds));
    transEngine trans_JOIN_INNER_TD_659182_out;
    trans_JOIN_INNER_TD_659182_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2621802;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2621802;
    std::vector<cl::Event> events_JOIN_INNER_TD_2621802;
    events_h2d_wr_JOIN_INNER_TD_2621802.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2621802.resize(1);
    events_JOIN_INNER_TD_2621802.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2621802;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2621802;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6156238;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6156238;
    std::vector<cl::Event> events_JOIN_INNER_TD_6156238;
    events_h2d_wr_JOIN_INNER_TD_6156238.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6156238.resize(1);
    events_JOIN_INNER_TD_6156238.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6156238;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6156238;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_659182;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_659182;
    std::vector<cl::Event> events_JOIN_INNER_TD_659182;
    events_h2d_wr_JOIN_INNER_TD_659182.resize(1);
    events_d2h_rd_JOIN_INNER_TD_659182.resize(1);
    events_JOIN_INNER_TD_659182.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_659182;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_659182;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_452258_s, tv_r_Filter_7_452258_e;
    gettimeofday(&tv_r_Filter_7_452258_s, 0);
    SW_Filter_TD_7652124(tbl_SerializeFromObject_TD_8121076_input, tbl_Filter_TD_7652124_output);
    gettimeofday(&tv_r_Filter_7_452258_e, 0);

    struct timeval tv_r_Filter_7_26107_s, tv_r_Filter_7_26107_e;
    gettimeofday(&tv_r_Filter_7_26107_s, 0);
    SW_Filter_TD_7630010(tbl_SerializeFromObject_TD_8842881_input, tbl_Filter_TD_7630010_output);
    gettimeofday(&tv_r_Filter_7_26107_e, 0);

    struct timeval tv_r_Filter_7_782177_s, tv_r_Filter_7_782177_e;
    gettimeofday(&tv_r_Filter_7_782177_s, 0);
    SW_Filter_TD_7706078(tbl_SerializeFromObject_TD_8374655_input, tbl_Filter_TD_7706078_output);
    gettimeofday(&tv_r_Filter_7_782177_e, 0);

    struct timeval tv_r_Filter_7_708762_s, tv_r_Filter_7_708762_e;
    gettimeofday(&tv_r_Filter_7_708762_s, 0);
    SW_Filter_TD_7203627(tbl_SerializeFromObject_TD_8766547_input, tbl_Filter_TD_7203627_output);
    gettimeofday(&tv_r_Filter_7_708762_e, 0);

    struct timeval tv_r_Filter_6_69262_s, tv_r_Filter_6_69262_e;
    gettimeofday(&tv_r_Filter_6_69262_s, 0);
    SW_Filter_TD_6734621(tbl_SerializeFromObject_TD_778977_input, tbl_Filter_TD_6734621_output);
    gettimeofday(&tv_r_Filter_6_69262_e, 0);

    struct timeval tv_r_JOIN_INNER_6_351126_s, tv_r_JOIN_INNER_6_351126_e;
    gettimeofday(&tv_r_JOIN_INNER_6_351126_s, 0);
    trans_JOIN_INNER_TD_659182.add(&(tbl_Filter_TD_7630010_output));
    trans_JOIN_INNER_TD_659182.add(&(tbl_Filter_TD_7652124_output));
    trans_JOIN_INNER_TD_659182.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_659182), &(events_h2d_wr_JOIN_INNER_TD_659182[0]));
    events_grp_JOIN_INNER_TD_659182.push_back(events_h2d_wr_JOIN_INNER_TD_659182[0]);
    krnl_JOIN_INNER_TD_659182.run(0, &(events_grp_JOIN_INNER_TD_659182), &(events_JOIN_INNER_TD_659182[0]));
    
    trans_JOIN_INNER_TD_659182_out.add(&(tbl_JOIN_INNER_TD_659182_output));
    trans_JOIN_INNER_TD_659182_out.dev2host(0, &(events_JOIN_INNER_TD_659182), &(events_d2h_rd_JOIN_INNER_TD_659182[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_351126_e, 0);

    struct timeval tv_r_Filter_6_505546_s, tv_r_Filter_6_505546_e;
    gettimeofday(&tv_r_Filter_6_505546_s, 0);
    SW_Filter_TD_6294642(tbl_SerializeFromObject_TD_752315_input, tbl_Filter_TD_6294642_output);
    gettimeofday(&tv_r_Filter_6_505546_e, 0);

    struct timeval tv_r_JOIN_INNER_6_546879_s, tv_r_JOIN_INNER_6_546879_e;
    gettimeofday(&tv_r_JOIN_INNER_6_546879_s, 0);
    trans_JOIN_INNER_TD_6156238.add(&(tbl_Filter_TD_7203627_output));
    trans_JOIN_INNER_TD_6156238.add(&(tbl_Filter_TD_7706078_output));
    trans_JOIN_INNER_TD_6156238.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6156238), &(events_h2d_wr_JOIN_INNER_TD_6156238[0]));
    events_grp_JOIN_INNER_TD_6156238.push_back(events_h2d_wr_JOIN_INNER_TD_6156238[0]);
    krnl_JOIN_INNER_TD_6156238.run(0, &(events_grp_JOIN_INNER_TD_6156238), &(events_JOIN_INNER_TD_6156238[0]));
    
    trans_JOIN_INNER_TD_6156238_out.add(&(tbl_JOIN_INNER_TD_6156238_output));
    trans_JOIN_INNER_TD_6156238_out.dev2host(0, &(events_JOIN_INNER_TD_6156238), &(events_d2h_rd_JOIN_INNER_TD_6156238[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_546879_e, 0);

    struct timeval tv_r_Filter_5_99484_s, tv_r_Filter_5_99484_e;
    gettimeofday(&tv_r_Filter_5_99484_s, 0);
    SW_Filter_TD_560475(tbl_SerializeFromObject_TD_6552494_input, tbl_Filter_TD_560475_output);
    gettimeofday(&tv_r_Filter_5_99484_e, 0);

    struct timeval tv_r_JOIN_INNER_5_197282_s, tv_r_JOIN_INNER_5_197282_e;
    gettimeofday(&tv_r_JOIN_INNER_5_197282_s, 0);
    SW_JOIN_INNER_TD_576365(tbl_JOIN_INNER_TD_659182_output, tbl_Filter_TD_6734621_output, tbl_JOIN_INNER_TD_576365_output);
    gettimeofday(&tv_r_JOIN_INNER_5_197282_e, 0);

    struct timeval tv_r_Filter_5_708247_s, tv_r_Filter_5_708247_e;
    gettimeofday(&tv_r_Filter_5_708247_s, 0);
    SW_Filter_TD_5190123(tbl_SerializeFromObject_TD_6866264_input, tbl_Filter_TD_5190123_output);
    gettimeofday(&tv_r_Filter_5_708247_e, 0);

    struct timeval tv_r_JOIN_INNER_5_798826_s, tv_r_JOIN_INNER_5_798826_e;
    gettimeofday(&tv_r_JOIN_INNER_5_798826_s, 0);
    SW_JOIN_INNER_TD_5811079(tbl_JOIN_INNER_TD_6156238_output, tbl_Filter_TD_6294642_output, tbl_JOIN_INNER_TD_5811079_output);
    gettimeofday(&tv_r_JOIN_INNER_5_798826_e, 0);

    struct timeval tv_r_JOIN_INNER_4_690658_s, tv_r_JOIN_INNER_4_690658_e;
    gettimeofday(&tv_r_JOIN_INNER_4_690658_s, 0);
    SW_JOIN_INNER_TD_4920053(tbl_JOIN_INNER_TD_576365_output, tbl_Filter_TD_560475_output, tbl_JOIN_INNER_TD_4920053_output);
    gettimeofday(&tv_r_JOIN_INNER_4_690658_e, 0);

    struct timeval tv_r_JOIN_INNER_4_652714_s, tv_r_JOIN_INNER_4_652714_e;
    gettimeofday(&tv_r_JOIN_INNER_4_652714_s, 0);
    SW_JOIN_INNER_TD_4100788(tbl_JOIN_INNER_TD_5811079_output, tbl_Filter_TD_5190123_output, tbl_JOIN_INNER_TD_4100788_output);
    gettimeofday(&tv_r_JOIN_INNER_4_652714_e, 0);

    struct timeval tv_r_Aggregate_3_967590_s, tv_r_Aggregate_3_967590_e;
    gettimeofday(&tv_r_Aggregate_3_967590_s, 0);
    SW_Aggregate_TD_3702847(tbl_JOIN_INNER_TD_4920053_output, tbl_Aggregate_TD_3702847_output);
    gettimeofday(&tv_r_Aggregate_3_967590_e, 0);

    struct timeval tv_r_Aggregate_3_846103_s, tv_r_Aggregate_3_846103_e;
    gettimeofday(&tv_r_Aggregate_3_846103_s, 0);
    SW_Aggregate_TD_3765802(tbl_JOIN_INNER_TD_4100788_output, tbl_Aggregate_TD_3765802_output);
    gettimeofday(&tv_r_Aggregate_3_846103_e, 0);

    struct timeval tv_r_JOIN_INNER_2_783945_s, tv_r_JOIN_INNER_2_783945_e;
    gettimeofday(&tv_r_JOIN_INNER_2_783945_s, 0);
    trans_JOIN_INNER_TD_2621802.add(&(tbl_Aggregate_TD_3765802_output));
    trans_JOIN_INNER_TD_2621802.add(&(tbl_Aggregate_TD_3702847_output));
    trans_JOIN_INNER_TD_2621802.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2621802), &(events_h2d_wr_JOIN_INNER_TD_2621802[0]));
    events_grp_JOIN_INNER_TD_2621802.push_back(events_h2d_wr_JOIN_INNER_TD_2621802[0]);
    krnl_JOIN_INNER_TD_2621802.run(0, &(events_grp_JOIN_INNER_TD_2621802), &(events_JOIN_INNER_TD_2621802[0]));
    
    trans_JOIN_INNER_TD_2621802_out.add(&(tbl_JOIN_INNER_TD_2621802_output));
    trans_JOIN_INNER_TD_2621802_out.dev2host(0, &(events_JOIN_INNER_TD_2621802), &(events_d2h_rd_JOIN_INNER_TD_2621802[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_783945_e, 0);

    struct timeval tv_r_Project_1_877870_s, tv_r_Project_1_877870_e;
    gettimeofday(&tv_r_Project_1_877870_s, 0);
    SW_Project_TD_1710705(tbl_JOIN_INNER_TD_2621802_output, tbl_Project_TD_1710705_output);
    gettimeofday(&tv_r_Project_1_877870_e, 0);

    struct timeval tv_r_Sort_0_622131_s, tv_r_Sort_0_622131_e;
    gettimeofday(&tv_r_Sort_0_622131_s, 0);
    SW_Sort_TD_0957414(tbl_Project_TD_1710705_output, tbl_Sort_TD_0957414_output);
    gettimeofday(&tv_r_Sort_0_622131_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_452258_s, &tv_r_Filter_7_452258_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8121076_input: " << tbl_SerializeFromObject_TD_8121076_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_26107_s, &tv_r_Filter_7_26107_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8842881_input: " << tbl_SerializeFromObject_TD_8842881_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_782177_s, &tv_r_Filter_7_782177_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8374655_input: " << tbl_SerializeFromObject_TD_8374655_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_708762_s, &tv_r_Filter_7_708762_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8766547_input: " << tbl_SerializeFromObject_TD_8766547_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_69262_s, &tv_r_Filter_6_69262_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_778977_input: " << tbl_SerializeFromObject_TD_778977_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_351126_s, &tv_r_JOIN_INNER_6_351126_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7630010_output: " << tbl_Filter_TD_7630010_output.getNumRow() << " " << "tbl_Filter_TD_7652124_output: " << tbl_Filter_TD_7652124_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_505546_s, &tv_r_Filter_6_505546_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_752315_input: " << tbl_SerializeFromObject_TD_752315_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_546879_s, &tv_r_JOIN_INNER_6_546879_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7203627_output: " << tbl_Filter_TD_7203627_output.getNumRow() << " " << "tbl_Filter_TD_7706078_output: " << tbl_Filter_TD_7706078_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_99484_s, &tv_r_Filter_5_99484_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6552494_input: " << tbl_SerializeFromObject_TD_6552494_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_197282_s, &tv_r_JOIN_INNER_5_197282_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_659182_output: " << tbl_JOIN_INNER_TD_659182_output.getNumRow() << " " << "tbl_Filter_TD_6734621_output: " << tbl_Filter_TD_6734621_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_708247_s, &tv_r_Filter_5_708247_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6866264_input: " << tbl_SerializeFromObject_TD_6866264_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_798826_s, &tv_r_JOIN_INNER_5_798826_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6156238_output: " << tbl_JOIN_INNER_TD_6156238_output.getNumRow() << " " << "tbl_Filter_TD_6294642_output: " << tbl_Filter_TD_6294642_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_690658_s, &tv_r_JOIN_INNER_4_690658_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_576365_output: " << tbl_JOIN_INNER_TD_576365_output.getNumRow() << " " << "tbl_Filter_TD_560475_output: " << tbl_Filter_TD_560475_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_652714_s, &tv_r_JOIN_INNER_4_652714_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5811079_output: " << tbl_JOIN_INNER_TD_5811079_output.getNumRow() << " " << "tbl_Filter_TD_5190123_output: " << tbl_Filter_TD_5190123_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_967590_s, &tv_r_Aggregate_3_967590_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4920053_output: " << tbl_JOIN_INNER_TD_4920053_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_846103_s, &tv_r_Aggregate_3_846103_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4100788_output: " << tbl_JOIN_INNER_TD_4100788_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_783945_s, &tv_r_JOIN_INNER_2_783945_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3765802_output: " << tbl_Aggregate_TD_3765802_output.getNumRow() << " " << "tbl_Aggregate_TD_3702847_output: " << tbl_Aggregate_TD_3702847_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_877870_s, &tv_r_Project_1_877870_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2621802_output: " << tbl_JOIN_INNER_TD_2621802_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_622131_s, &tv_r_Sort_0_622131_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1710705_output: " << tbl_Project_TD_1710705_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.264149 * 1000 << "ms" << std::endl; 
    return 0; 
}
