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

#include "cfgFunc_q46.hpp" 
#include "q46.hpp" 

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
    std::cout << "NOTE:running query #46\n."; 
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
    Table tbl_GlobalLimit_TD_0611206_output("tbl_GlobalLimit_TD_0611206_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0611206_output.allocateHost();
    Table tbl_LocalLimit_TD_1194543_output("tbl_LocalLimit_TD_1194543_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1194543_output.allocateHost();
    Table tbl_Sort_TD_2535437_output("tbl_Sort_TD_2535437_output", 6100000, 7, "");
    tbl_Sort_TD_2535437_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3989813_output("tbl_JOIN_INNER_TD_3989813_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_3989813_output.allocateHost();
    Table tbl_JOIN_INNER_TD_426372_output("tbl_JOIN_INNER_TD_426372_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_426372_output.allocateHost();
    Table tbl_Filter_TD_4982897_output("tbl_Filter_TD_4982897_output", 6100000, 2, "");
    tbl_Filter_TD_4982897_output.allocateHost();
    Table tbl_Aggregate_TD_5802775_output("tbl_Aggregate_TD_5802775_output", 6100000, 5, "");
    tbl_Aggregate_TD_5802775_output.allocateHost();
    Table tbl_Filter_TD_5580054_output("tbl_Filter_TD_5580054_output", 6100000, 4, "");
    tbl_Filter_TD_5580054_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5524268_input;
    tbl_SerializeFromObject_TD_5524268_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5524268_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_5524268_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5524268_input.allocateHost();
    tbl_SerializeFromObject_TD_5524268_input.loadHost();
    Table tbl_JOIN_INNER_TD_6779262_output("tbl_JOIN_INNER_TD_6779262_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6779262_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6603777_input;
    tbl_SerializeFromObject_TD_6603777_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6603777_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6603777_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_6603777_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6603777_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6603777_input.allocateHost();
    tbl_SerializeFromObject_TD_6603777_input.loadHost();
    Table tbl_JOIN_INNER_TD_7526055_output("tbl_JOIN_INNER_TD_7526055_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7526055_output.allocateHost();
    Table tbl_Filter_TD_7367205_output("tbl_Filter_TD_7367205_output", 6100000, 2, "");
    tbl_Filter_TD_7367205_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8378940_output("tbl_JOIN_INNER_TD_8378940_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8378940_output.allocateHost();
    Table tbl_Filter_TD_8784966_output("tbl_Filter_TD_8784966_output", 6100000, 1, "");
    tbl_Filter_TD_8784966_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8100902_input;
    tbl_SerializeFromObject_TD_8100902_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8100902_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8100902_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8100902_input.allocateHost();
    tbl_SerializeFromObject_TD_8100902_input.loadHost();
    Table tbl_JOIN_INNER_TD_980035_output("tbl_JOIN_INNER_TD_980035_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_980035_output.allocateHost();
    Table tbl_Filter_TD_9651785_output("tbl_Filter_TD_9651785_output", 6100000, 1, "");
    tbl_Filter_TD_9651785_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9714693_input;
    tbl_SerializeFromObject_TD_9714693_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9714693_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9714693_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_9714693_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_9714693_input.allocateHost();
    tbl_SerializeFromObject_TD_9714693_input.loadHost();
    Table tbl_Filter_TD_10194149_output("tbl_Filter_TD_10194149_output", 6100000, 8, "");
    tbl_Filter_TD_10194149_output.allocateHost();
    Table tbl_Filter_TD_106616_output("tbl_Filter_TD_106616_output", 6100000, 1, "");
    tbl_Filter_TD_106616_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1079569_input;
    tbl_SerializeFromObject_TD_1079569_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1079569_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_1079569_input.addCol("s_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1079569_input.allocateHost();
    tbl_SerializeFromObject_TD_1079569_input.loadHost();
    Table tbl_SerializeFromObject_TD_11662071_input;
    tbl_SerializeFromObject_TD_11662071_input = Table("store_sales", store_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_11662071_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11662071_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_11662071_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_11662071_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_11662071_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11662071_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_11662071_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_11662071_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_11662071_input.allocateHost();
    tbl_SerializeFromObject_TD_11662071_input.loadHost();
    Table tbl_SerializeFromObject_TD_11148216_input;
    tbl_SerializeFromObject_TD_11148216_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11148216_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11148216_input.addCol("d_dow", 4);
    tbl_SerializeFromObject_TD_11148216_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11148216_input.allocateHost();
    tbl_SerializeFromObject_TD_11148216_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_7526055_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8378940_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8784966_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_980035_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9651785_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10194149_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_106616_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_7526055_cmds;
    cfg_JOIN_INNER_TD_7526055_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7526055_gqe_join (cfg_JOIN_INNER_TD_7526055_cmds.cmd);
    cfg_JOIN_INNER_TD_7526055_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8378940_cmds;
    cfg_JOIN_INNER_TD_8378940_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8378940_gqe_join (cfg_JOIN_INNER_TD_8378940_cmds.cmd);
    cfg_JOIN_INNER_TD_8378940_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_980035_cmds;
    cfg_JOIN_INNER_TD_980035_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_980035_gqe_join (cfg_JOIN_INNER_TD_980035_cmds.cmd);
    cfg_JOIN_INNER_TD_980035_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_7526055;
    krnl_JOIN_INNER_TD_7526055 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7526055.setup(tbl_JOIN_INNER_TD_8378940_output, tbl_Filter_TD_8784966_output, tbl_JOIN_INNER_TD_7526055_output, cfg_JOIN_INNER_TD_7526055_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8378940;
    krnl_JOIN_INNER_TD_8378940 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8378940.setup(tbl_JOIN_INNER_TD_980035_output, tbl_Filter_TD_9651785_output, tbl_JOIN_INNER_TD_8378940_output, cfg_JOIN_INNER_TD_8378940_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_980035;
    krnl_JOIN_INNER_TD_980035 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_980035.setup(tbl_Filter_TD_10194149_output, tbl_Filter_TD_106616_output, tbl_JOIN_INNER_TD_980035_output, cfg_JOIN_INNER_TD_980035_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_7526055;
    trans_JOIN_INNER_TD_7526055.setq(q_h);
    trans_JOIN_INNER_TD_7526055.add(&(cfg_JOIN_INNER_TD_7526055_cmds));
    transEngine trans_JOIN_INNER_TD_7526055_out;
    trans_JOIN_INNER_TD_7526055_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8378940;
    trans_JOIN_INNER_TD_8378940.setq(q_h);
    trans_JOIN_INNER_TD_8378940.add(&(cfg_JOIN_INNER_TD_8378940_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_980035;
    trans_JOIN_INNER_TD_980035.setq(q_h);
    trans_JOIN_INNER_TD_980035.add(&(cfg_JOIN_INNER_TD_980035_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7526055;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7526055;
    std::vector<cl::Event> events_JOIN_INNER_TD_7526055;
    events_h2d_wr_JOIN_INNER_TD_7526055.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7526055.resize(1);
    events_JOIN_INNER_TD_7526055.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7526055;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7526055;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8378940;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8378940;
    std::vector<cl::Event> events_JOIN_INNER_TD_8378940;
    events_h2d_wr_JOIN_INNER_TD_8378940.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8378940.resize(1);
    events_JOIN_INNER_TD_8378940.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8378940;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8378940;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_980035;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_980035;
    std::vector<cl::Event> events_JOIN_INNER_TD_980035;
    events_h2d_wr_JOIN_INNER_TD_980035.resize(1);
    events_d2h_rd_JOIN_INNER_TD_980035.resize(1);
    events_JOIN_INNER_TD_980035.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_980035;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_980035;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_600955_s, tv_r_Filter_10_600955_e;
    gettimeofday(&tv_r_Filter_10_600955_s, 0);
    SW_Filter_TD_106616(tbl_SerializeFromObject_TD_11148216_input, tbl_Filter_TD_106616_output);
    gettimeofday(&tv_r_Filter_10_600955_e, 0);

    struct timeval tv_r_Filter_10_158707_s, tv_r_Filter_10_158707_e;
    gettimeofday(&tv_r_Filter_10_158707_s, 0);
    SW_Filter_TD_10194149(tbl_SerializeFromObject_TD_11662071_input, tbl_Filter_TD_10194149_output);
    gettimeofday(&tv_r_Filter_10_158707_e, 0);

    struct timeval tv_r_Filter_9_595104_s, tv_r_Filter_9_595104_e;
    gettimeofday(&tv_r_Filter_9_595104_s, 0);
    SW_Filter_TD_9651785(tbl_SerializeFromObject_TD_1079569_input, tbl_Filter_TD_9651785_output);
    gettimeofday(&tv_r_Filter_9_595104_e, 0);

    struct timeval tv_r_JOIN_INNER_9_954317_s, tv_r_JOIN_INNER_9_954317_e;
    gettimeofday(&tv_r_JOIN_INNER_9_954317_s, 0);
    trans_JOIN_INNER_TD_980035.add(&(tbl_Filter_TD_10194149_output));
    trans_JOIN_INNER_TD_980035.add(&(tbl_Filter_TD_106616_output));
    trans_JOIN_INNER_TD_980035.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_980035), &(events_h2d_wr_JOIN_INNER_TD_980035[0]));
    events_grp_JOIN_INNER_TD_980035.push_back(events_h2d_wr_JOIN_INNER_TD_980035[0]);
    krnl_JOIN_INNER_TD_980035.run(0, &(events_grp_JOIN_INNER_TD_980035), &(events_JOIN_INNER_TD_980035[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_954317_e, 0);

    struct timeval tv_r_Filter_8_954300_s, tv_r_Filter_8_954300_e;
    gettimeofday(&tv_r_Filter_8_954300_s, 0);
    SW_Filter_TD_8784966(tbl_SerializeFromObject_TD_9714693_input, tbl_Filter_TD_8784966_output);
    gettimeofday(&tv_r_Filter_8_954300_e, 0);

    struct timeval tv_r_JOIN_INNER_8_466053_s, tv_r_JOIN_INNER_8_466053_e;
    gettimeofday(&tv_r_JOIN_INNER_8_466053_s, 0);
    prev_events_grp_JOIN_INNER_TD_8378940.push_back(events_h2d_wr_JOIN_INNER_TD_980035[0]);
    trans_JOIN_INNER_TD_8378940.add(&(tbl_Filter_TD_9651785_output));
    trans_JOIN_INNER_TD_8378940.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8378940), &(events_h2d_wr_JOIN_INNER_TD_8378940[0]));
    events_grp_JOIN_INNER_TD_8378940.push_back(events_h2d_wr_JOIN_INNER_TD_8378940[0]);
    events_grp_JOIN_INNER_TD_8378940.push_back(events_JOIN_INNER_TD_980035[0]);
    krnl_JOIN_INNER_TD_8378940.run(0, &(events_grp_JOIN_INNER_TD_8378940), &(events_JOIN_INNER_TD_8378940[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_466053_e, 0);

    struct timeval tv_r_Filter_7_906631_s, tv_r_Filter_7_906631_e;
    gettimeofday(&tv_r_Filter_7_906631_s, 0);
    SW_Filter_TD_7367205(tbl_SerializeFromObject_TD_8100902_input, tbl_Filter_TD_7367205_output);
    gettimeofday(&tv_r_Filter_7_906631_e, 0);

    struct timeval tv_r_JOIN_INNER_7_793202_s, tv_r_JOIN_INNER_7_793202_e;
    gettimeofday(&tv_r_JOIN_INNER_7_793202_s, 0);
    prev_events_grp_JOIN_INNER_TD_7526055.push_back(events_h2d_wr_JOIN_INNER_TD_8378940[0]);
    trans_JOIN_INNER_TD_7526055.add(&(tbl_Filter_TD_8784966_output));
    trans_JOIN_INNER_TD_7526055.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7526055), &(events_h2d_wr_JOIN_INNER_TD_7526055[0]));
    events_grp_JOIN_INNER_TD_7526055.push_back(events_h2d_wr_JOIN_INNER_TD_7526055[0]);
    events_grp_JOIN_INNER_TD_7526055.push_back(events_JOIN_INNER_TD_8378940[0]);
    krnl_JOIN_INNER_TD_7526055.run(0, &(events_grp_JOIN_INNER_TD_7526055), &(events_JOIN_INNER_TD_7526055[0]));
    
    trans_JOIN_INNER_TD_7526055_out.add(&(tbl_JOIN_INNER_TD_7526055_output));
    trans_JOIN_INNER_TD_7526055_out.dev2host(0, &(events_JOIN_INNER_TD_7526055), &(events_d2h_rd_JOIN_INNER_TD_7526055[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_793202_e, 0);

    struct timeval tv_r_JOIN_INNER_6_953161_s, tv_r_JOIN_INNER_6_953161_e;
    gettimeofday(&tv_r_JOIN_INNER_6_953161_s, 0);
    SW_JOIN_INNER_TD_6779262(tbl_JOIN_INNER_TD_7526055_output, tbl_Filter_TD_7367205_output, tbl_JOIN_INNER_TD_6779262_output);
    gettimeofday(&tv_r_JOIN_INNER_6_953161_e, 0);

    struct timeval tv_r_Filter_5_277960_s, tv_r_Filter_5_277960_e;
    gettimeofday(&tv_r_Filter_5_277960_s, 0);
    SW_Filter_TD_5580054(tbl_SerializeFromObject_TD_6603777_input, tbl_Filter_TD_5580054_output);
    gettimeofday(&tv_r_Filter_5_277960_e, 0);

    struct timeval tv_r_Aggregate_5_187881_s, tv_r_Aggregate_5_187881_e;
    gettimeofday(&tv_r_Aggregate_5_187881_s, 0);
    SW_Aggregate_TD_5802775(tbl_JOIN_INNER_TD_6779262_output, tbl_Aggregate_TD_5802775_output);
    gettimeofday(&tv_r_Aggregate_5_187881_e, 0);

    struct timeval tv_r_Filter_4_768848_s, tv_r_Filter_4_768848_e;
    gettimeofday(&tv_r_Filter_4_768848_s, 0);
    SW_Filter_TD_4982897(tbl_SerializeFromObject_TD_5524268_input, tbl_Filter_TD_4982897_output);
    gettimeofday(&tv_r_Filter_4_768848_e, 0);

    struct timeval tv_r_JOIN_INNER_4_637622_s, tv_r_JOIN_INNER_4_637622_e;
    gettimeofday(&tv_r_JOIN_INNER_4_637622_s, 0);
    SW_JOIN_INNER_TD_426372(tbl_Aggregate_TD_5802775_output, tbl_Filter_TD_5580054_output, tbl_JOIN_INNER_TD_426372_output);
    gettimeofday(&tv_r_JOIN_INNER_4_637622_e, 0);

    struct timeval tv_r_JOIN_INNER_3_76495_s, tv_r_JOIN_INNER_3_76495_e;
    gettimeofday(&tv_r_JOIN_INNER_3_76495_s, 0);
    SW_JOIN_INNER_TD_3989813(tbl_JOIN_INNER_TD_426372_output, tbl_Filter_TD_4982897_output, tbl_JOIN_INNER_TD_3989813_output);
    gettimeofday(&tv_r_JOIN_INNER_3_76495_e, 0);

    struct timeval tv_r_Sort_2_643478_s, tv_r_Sort_2_643478_e;
    gettimeofday(&tv_r_Sort_2_643478_s, 0);
    SW_Sort_TD_2535437(tbl_JOIN_INNER_TD_3989813_output, tbl_Sort_TD_2535437_output);
    gettimeofday(&tv_r_Sort_2_643478_e, 0);

    struct timeval tv_r_LocalLimit_1_94487_s, tv_r_LocalLimit_1_94487_e;
    gettimeofday(&tv_r_LocalLimit_1_94487_s, 0);
    SW_LocalLimit_TD_1194543(tbl_Sort_TD_2535437_output, tbl_LocalLimit_TD_1194543_output);
    gettimeofday(&tv_r_LocalLimit_1_94487_e, 0);

    struct timeval tv_r_GlobalLimit_0_657334_s, tv_r_GlobalLimit_0_657334_e;
    gettimeofday(&tv_r_GlobalLimit_0_657334_s, 0);
    SW_GlobalLimit_TD_0611206(tbl_LocalLimit_TD_1194543_output, tbl_GlobalLimit_TD_0611206_output);
    gettimeofday(&tv_r_GlobalLimit_0_657334_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_600955_s, &tv_r_Filter_10_600955_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11148216_input: " << tbl_SerializeFromObject_TD_11148216_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_158707_s, &tv_r_Filter_10_158707_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11662071_input: " << tbl_SerializeFromObject_TD_11662071_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_595104_s, &tv_r_Filter_9_595104_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1079569_input: " << tbl_SerializeFromObject_TD_1079569_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_954317_s, &tv_r_JOIN_INNER_9_954317_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10194149_output: " << tbl_Filter_TD_10194149_output.getNumRow() << " " << "tbl_Filter_TD_106616_output: " << tbl_Filter_TD_106616_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_954300_s, &tv_r_Filter_8_954300_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9714693_input: " << tbl_SerializeFromObject_TD_9714693_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_466053_s, &tv_r_JOIN_INNER_8_466053_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_980035_output: " << tbl_JOIN_INNER_TD_980035_output.getNumRow() << " " << "tbl_Filter_TD_9651785_output: " << tbl_Filter_TD_9651785_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_906631_s, &tv_r_Filter_7_906631_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8100902_input: " << tbl_SerializeFromObject_TD_8100902_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_793202_s, &tv_r_JOIN_INNER_7_793202_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8378940_output: " << tbl_JOIN_INNER_TD_8378940_output.getNumRow() << " " << "tbl_Filter_TD_8784966_output: " << tbl_Filter_TD_8784966_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_953161_s, &tv_r_JOIN_INNER_6_953161_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7526055_output: " << tbl_JOIN_INNER_TD_7526055_output.getNumRow() << " " << "tbl_Filter_TD_7367205_output: " << tbl_Filter_TD_7367205_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_277960_s, &tv_r_Filter_5_277960_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6603777_input: " << tbl_SerializeFromObject_TD_6603777_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_187881_s, &tv_r_Aggregate_5_187881_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6779262_output: " << tbl_JOIN_INNER_TD_6779262_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_768848_s, &tv_r_Filter_4_768848_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5524268_input: " << tbl_SerializeFromObject_TD_5524268_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_637622_s, &tv_r_JOIN_INNER_4_637622_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5802775_output: " << tbl_Aggregate_TD_5802775_output.getNumRow() << " " << "tbl_Filter_TD_5580054_output: " << tbl_Filter_TD_5580054_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_76495_s, &tv_r_JOIN_INNER_3_76495_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_426372_output: " << tbl_JOIN_INNER_TD_426372_output.getNumRow() << " " << "tbl_Filter_TD_4982897_output: " << tbl_Filter_TD_4982897_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_643478_s, &tv_r_Sort_2_643478_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3989813_output: " << tbl_JOIN_INNER_TD_3989813_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_94487_s, &tv_r_LocalLimit_1_94487_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2535437_output: " << tbl_Sort_TD_2535437_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_657334_s, &tv_r_GlobalLimit_0_657334_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1194543_output: " << tbl_LocalLimit_TD_1194543_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.9498588 * 1000 << "ms" << std::endl; 
    return 0; 
}
