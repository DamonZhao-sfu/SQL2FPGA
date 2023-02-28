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

#include "cfgFunc_q16.hpp" 
#include "q16.hpp" 

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
    std::cout << "NOTE:running query #16\n."; 
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
    Table tbl_Aggregate_TD_0564233_output("tbl_Aggregate_TD_0564233_output", 6100000, 3, "");
    tbl_Aggregate_TD_0564233_output.allocateHost();
    Table tbl_JOIN_INNER_TD_181709_output("tbl_JOIN_INNER_TD_181709_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_181709_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2355612_output("tbl_JOIN_INNER_TD_2355612_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_2355612_output.allocateHost();
    Table tbl_Filter_TD_2728508_output("tbl_Filter_TD_2728508_output", 6100000, 1, "");
    tbl_Filter_TD_2728508_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3883666_output("tbl_JOIN_INNER_TD_3883666_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_3883666_output.allocateHost();
    Table tbl_Filter_TD_3389329_output("tbl_Filter_TD_3389329_output", 6100000, 1, "");
    tbl_Filter_TD_3389329_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3388322_input;
    tbl_SerializeFromObject_TD_3388322_input = Table("call_center", call_center_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3388322_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_3388322_input.addCol("cc_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3388322_input.allocateHost();
    tbl_SerializeFromObject_TD_3388322_input.loadHost();
    Table tbl_JOIN_LEFTANTI_TD_4961313_output("tbl_JOIN_LEFTANTI_TD_4961313_output", 6100000, 6, "");
    tbl_JOIN_LEFTANTI_TD_4961313_output.allocateHost();
    Table tbl_Filter_TD_4795895_output("tbl_Filter_TD_4795895_output", 6100000, 1, "");
    tbl_Filter_TD_4795895_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4585500_input;
    tbl_SerializeFromObject_TD_4585500_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4585500_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_4585500_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4585500_input.allocateHost();
    tbl_SerializeFromObject_TD_4585500_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_5407922_output("tbl_JOIN_LEFTSEMI_TD_5407922_output", 6100000, 6, "");
    tbl_JOIN_LEFTSEMI_TD_5407922_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5739473_input;
    tbl_SerializeFromObject_TD_5739473_input = Table("catalog_returns", catalog_returns_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_5739473_input.addCol("cr_order_number", 8);
    tbl_SerializeFromObject_TD_5739473_input.allocateHost();
    tbl_SerializeFromObject_TD_5739473_input.loadHost();
    Table tbl_SerializeFromObject_TD_5756991_input;
    tbl_SerializeFromObject_TD_5756991_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5756991_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5756991_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_5756991_input.allocateHost();
    tbl_SerializeFromObject_TD_5756991_input.loadHost();
    Table tbl_Filter_TD_6590565_output("tbl_Filter_TD_6590565_output", 6100000, 7, "");
    tbl_Filter_TD_6590565_output.allocateHost();
    Table tbl_SerializeFromObject_TD_680149_input;
    tbl_SerializeFromObject_TD_680149_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_680149_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_680149_input.addCol("cs_order_number", 8);
    tbl_SerializeFromObject_TD_680149_input.allocateHost();
    tbl_SerializeFromObject_TD_680149_input.loadHost();
    Table tbl_SerializeFromObject_TD_7742844_input;
    tbl_SerializeFromObject_TD_7742844_input = Table("catalog_sales", catalog_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_7742844_input.addCol("cs_ship_date_sk", 4);
    tbl_SerializeFromObject_TD_7742844_input.addCol("cs_ship_addr_sk", 4);
    tbl_SerializeFromObject_TD_7742844_input.addCol("cs_call_center_sk", 4);
    tbl_SerializeFromObject_TD_7742844_input.addCol("cs_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_7742844_input.addCol("cs_order_number", 8);
    tbl_SerializeFromObject_TD_7742844_input.addCol("cs_ext_ship_cost", 4);
    tbl_SerializeFromObject_TD_7742844_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_7742844_input.allocateHost();
    tbl_SerializeFromObject_TD_7742844_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_181709_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_2355612_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_2728508_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3883666_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3389329_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTANTI_TD_4961313_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4795895_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_5407922_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5739473_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6590565_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_680149_input.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_181709_cmds;
    cfg_JOIN_INNER_TD_181709_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_181709_gqe_join (cfg_JOIN_INNER_TD_181709_cmds.cmd);
    cfg_JOIN_INNER_TD_181709_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_2355612_cmds;
    cfg_JOIN_INNER_TD_2355612_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2355612_gqe_join (cfg_JOIN_INNER_TD_2355612_cmds.cmd);
    cfg_JOIN_INNER_TD_2355612_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3883666_cmds;
    cfg_JOIN_INNER_TD_3883666_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3883666_gqe_join (cfg_JOIN_INNER_TD_3883666_cmds.cmd);
    cfg_JOIN_INNER_TD_3883666_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTANTI_TD_4961313_cmds;
    cfg_JOIN_LEFTANTI_TD_4961313_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTANTI_TD_4961313_gqe_join (cfg_JOIN_LEFTANTI_TD_4961313_cmds.cmd);
    cfg_JOIN_LEFTANTI_TD_4961313_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_5407922_cmds;
    cfg_JOIN_LEFTSEMI_TD_5407922_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_5407922_gqe_join (cfg_JOIN_LEFTSEMI_TD_5407922_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_5407922_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_181709;
    krnl_JOIN_INNER_TD_181709 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_181709.setup(tbl_JOIN_INNER_TD_2355612_output, tbl_Filter_TD_2728508_output, tbl_JOIN_INNER_TD_181709_output, cfg_JOIN_INNER_TD_181709_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_2355612;
    krnl_JOIN_INNER_TD_2355612 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2355612.setup(tbl_JOIN_INNER_TD_3883666_output, tbl_Filter_TD_3389329_output, tbl_JOIN_INNER_TD_2355612_output, cfg_JOIN_INNER_TD_2355612_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3883666;
    krnl_JOIN_INNER_TD_3883666 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3883666.setup(tbl_JOIN_LEFTANTI_TD_4961313_output, tbl_Filter_TD_4795895_output, tbl_JOIN_INNER_TD_3883666_output, cfg_JOIN_INNER_TD_3883666_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTANTI_TD_4961313;
    krnl_JOIN_LEFTANTI_TD_4961313 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTANTI_TD_4961313.setup(tbl_SerializeFromObject_TD_5739473_input, tbl_JOIN_LEFTSEMI_TD_5407922_output, tbl_JOIN_LEFTANTI_TD_4961313_output, cfg_JOIN_LEFTANTI_TD_4961313_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_5407922;
    krnl_JOIN_LEFTSEMI_TD_5407922 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_5407922.setup(tbl_SerializeFromObject_TD_680149_input, tbl_Filter_TD_6590565_output, tbl_JOIN_LEFTSEMI_TD_5407922_output, cfg_JOIN_LEFTSEMI_TD_5407922_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_181709;
    trans_JOIN_INNER_TD_181709.setq(q_h);
    trans_JOIN_INNER_TD_181709.add(&(cfg_JOIN_INNER_TD_181709_cmds));
    transEngine trans_JOIN_INNER_TD_181709_out;
    trans_JOIN_INNER_TD_181709_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_2355612;
    trans_JOIN_INNER_TD_2355612.setq(q_h);
    trans_JOIN_INNER_TD_2355612.add(&(cfg_JOIN_INNER_TD_2355612_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3883666;
    trans_JOIN_INNER_TD_3883666.setq(q_h);
    trans_JOIN_INNER_TD_3883666.add(&(cfg_JOIN_INNER_TD_3883666_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTANTI_TD_4961313;
    trans_JOIN_LEFTANTI_TD_4961313.setq(q_h);
    trans_JOIN_LEFTANTI_TD_4961313.add(&(cfg_JOIN_LEFTANTI_TD_4961313_cmds));
    trans_JOIN_LEFTANTI_TD_4961313.add(&(tbl_SerializeFromObject_TD_5739473_input));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_5407922;
    trans_JOIN_LEFTSEMI_TD_5407922.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_5407922.add(&(cfg_JOIN_LEFTSEMI_TD_5407922_cmds));
    trans_JOIN_LEFTSEMI_TD_5407922.add(&(tbl_SerializeFromObject_TD_680149_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_181709;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_181709;
    std::vector<cl::Event> events_JOIN_INNER_TD_181709;
    events_h2d_wr_JOIN_INNER_TD_181709.resize(1);
    events_d2h_rd_JOIN_INNER_TD_181709.resize(1);
    events_JOIN_INNER_TD_181709.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_181709;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_181709;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2355612;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2355612;
    std::vector<cl::Event> events_JOIN_INNER_TD_2355612;
    events_h2d_wr_JOIN_INNER_TD_2355612.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2355612.resize(1);
    events_JOIN_INNER_TD_2355612.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2355612;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2355612;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3883666;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3883666;
    std::vector<cl::Event> events_JOIN_INNER_TD_3883666;
    events_h2d_wr_JOIN_INNER_TD_3883666.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3883666.resize(1);
    events_JOIN_INNER_TD_3883666.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3883666;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3883666;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTANTI_TD_4961313;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTANTI_TD_4961313;
    std::vector<cl::Event> events_JOIN_LEFTANTI_TD_4961313;
    events_h2d_wr_JOIN_LEFTANTI_TD_4961313.resize(1);
    events_d2h_rd_JOIN_LEFTANTI_TD_4961313.resize(1);
    events_JOIN_LEFTANTI_TD_4961313.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTANTI_TD_4961313;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTANTI_TD_4961313;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_5407922;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_5407922;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_5407922;
    events_h2d_wr_JOIN_LEFTSEMI_TD_5407922.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_5407922.resize(1);
    events_JOIN_LEFTSEMI_TD_5407922.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_5407922;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_5407922;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_82341_s, tv_r_Filter_6_82341_e;
    gettimeofday(&tv_r_Filter_6_82341_s, 0);
    SW_Filter_TD_6590565(tbl_SerializeFromObject_TD_7742844_input, tbl_Filter_TD_6590565_output);
    gettimeofday(&tv_r_Filter_6_82341_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_5_397349_s, tv_r_JOIN_LEFTSEMI_5_397349_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_397349_s, 0);
    trans_JOIN_LEFTSEMI_TD_5407922.add(&(tbl_Filter_TD_6590565_output));
    trans_JOIN_LEFTSEMI_TD_5407922.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_5407922), &(events_h2d_wr_JOIN_LEFTSEMI_TD_5407922[0]));
    events_grp_JOIN_LEFTSEMI_TD_5407922.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_5407922[0]);
    krnl_JOIN_LEFTSEMI_TD_5407922.run(0, &(events_grp_JOIN_LEFTSEMI_TD_5407922), &(events_JOIN_LEFTSEMI_TD_5407922[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_397349_e, 0);

    struct timeval tv_r_Filter_4_98158_s, tv_r_Filter_4_98158_e;
    gettimeofday(&tv_r_Filter_4_98158_s, 0);
    SW_Filter_TD_4795895(tbl_SerializeFromObject_TD_5756991_input, tbl_Filter_TD_4795895_output);
    gettimeofday(&tv_r_Filter_4_98158_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_4_764790_s, tv_r_JOIN_LEFTANTI_4_764790_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_764790_s, 0);
    prev_events_grp_JOIN_LEFTANTI_TD_4961313.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_5407922[0]);
    trans_JOIN_LEFTANTI_TD_4961313.host2dev(0, &(prev_events_grp_JOIN_LEFTANTI_TD_4961313), &(events_h2d_wr_JOIN_LEFTANTI_TD_4961313[0]));
    events_grp_JOIN_LEFTANTI_TD_4961313.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_4961313[0]);
    events_grp_JOIN_LEFTANTI_TD_4961313.push_back(events_JOIN_LEFTSEMI_TD_5407922[0]);
    krnl_JOIN_LEFTANTI_TD_4961313.run(0, &(events_grp_JOIN_LEFTANTI_TD_4961313), &(events_JOIN_LEFTANTI_TD_4961313[0]));
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_764790_e, 0);

    struct timeval tv_r_Filter_3_794355_s, tv_r_Filter_3_794355_e;
    gettimeofday(&tv_r_Filter_3_794355_s, 0);
    SW_Filter_TD_3389329(tbl_SerializeFromObject_TD_4585500_input, tbl_Filter_TD_3389329_output);
    gettimeofday(&tv_r_Filter_3_794355_e, 0);

    struct timeval tv_r_JOIN_INNER_3_407551_s, tv_r_JOIN_INNER_3_407551_e;
    gettimeofday(&tv_r_JOIN_INNER_3_407551_s, 0);
    prev_events_grp_JOIN_INNER_TD_3883666.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_4961313[0]);
    trans_JOIN_INNER_TD_3883666.add(&(tbl_Filter_TD_4795895_output));
    trans_JOIN_INNER_TD_3883666.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3883666), &(events_h2d_wr_JOIN_INNER_TD_3883666[0]));
    events_grp_JOIN_INNER_TD_3883666.push_back(events_h2d_wr_JOIN_INNER_TD_3883666[0]);
    events_grp_JOIN_INNER_TD_3883666.push_back(events_JOIN_LEFTANTI_TD_4961313[0]);
    krnl_JOIN_INNER_TD_3883666.run(0, &(events_grp_JOIN_INNER_TD_3883666), &(events_JOIN_INNER_TD_3883666[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_407551_e, 0);

    struct timeval tv_r_Filter_2_514532_s, tv_r_Filter_2_514532_e;
    gettimeofday(&tv_r_Filter_2_514532_s, 0);
    SW_Filter_TD_2728508(tbl_SerializeFromObject_TD_3388322_input, tbl_Filter_TD_2728508_output);
    gettimeofday(&tv_r_Filter_2_514532_e, 0);

    struct timeval tv_r_JOIN_INNER_2_732286_s, tv_r_JOIN_INNER_2_732286_e;
    gettimeofday(&tv_r_JOIN_INNER_2_732286_s, 0);
    prev_events_grp_JOIN_INNER_TD_2355612.push_back(events_h2d_wr_JOIN_INNER_TD_3883666[0]);
    trans_JOIN_INNER_TD_2355612.add(&(tbl_Filter_TD_3389329_output));
    trans_JOIN_INNER_TD_2355612.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2355612), &(events_h2d_wr_JOIN_INNER_TD_2355612[0]));
    events_grp_JOIN_INNER_TD_2355612.push_back(events_h2d_wr_JOIN_INNER_TD_2355612[0]);
    events_grp_JOIN_INNER_TD_2355612.push_back(events_JOIN_INNER_TD_3883666[0]);
    krnl_JOIN_INNER_TD_2355612.run(0, &(events_grp_JOIN_INNER_TD_2355612), &(events_JOIN_INNER_TD_2355612[0]));
    gettimeofday(&tv_r_JOIN_INNER_2_732286_e, 0);

    struct timeval tv_r_JOIN_INNER_1_28904_s, tv_r_JOIN_INNER_1_28904_e;
    gettimeofday(&tv_r_JOIN_INNER_1_28904_s, 0);
    prev_events_grp_JOIN_INNER_TD_181709.push_back(events_h2d_wr_JOIN_INNER_TD_2355612[0]);
    trans_JOIN_INNER_TD_181709.add(&(tbl_Filter_TD_2728508_output));
    trans_JOIN_INNER_TD_181709.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_181709), &(events_h2d_wr_JOIN_INNER_TD_181709[0]));
    events_grp_JOIN_INNER_TD_181709.push_back(events_h2d_wr_JOIN_INNER_TD_181709[0]);
    events_grp_JOIN_INNER_TD_181709.push_back(events_JOIN_INNER_TD_2355612[0]);
    krnl_JOIN_INNER_TD_181709.run(0, &(events_grp_JOIN_INNER_TD_181709), &(events_JOIN_INNER_TD_181709[0]));
    
    trans_JOIN_INNER_TD_181709_out.add(&(tbl_JOIN_INNER_TD_181709_output));
    trans_JOIN_INNER_TD_181709_out.dev2host(0, &(events_JOIN_INNER_TD_181709), &(events_d2h_rd_JOIN_INNER_TD_181709[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_28904_e, 0);

    struct timeval tv_r_Aggregate_0_647007_s, tv_r_Aggregate_0_647007_e;
    gettimeofday(&tv_r_Aggregate_0_647007_s, 0);
    SW_Aggregate_TD_0564233(tbl_JOIN_INNER_TD_181709_output, tbl_Aggregate_TD_0564233_output);
    gettimeofday(&tv_r_Aggregate_0_647007_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_82341_s, &tv_r_Filter_6_82341_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7742844_input: " << tbl_SerializeFromObject_TD_7742844_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_5: " << tvdiff(&tv_r_JOIN_LEFTSEMI_5_397349_s, &tv_r_JOIN_LEFTSEMI_5_397349_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6590565_output: " << tbl_Filter_TD_6590565_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_680149_input: " << tbl_SerializeFromObject_TD_680149_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_98158_s, &tv_r_Filter_4_98158_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5756991_input: " << tbl_SerializeFromObject_TD_5756991_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_4: " << tvdiff(&tv_r_JOIN_LEFTANTI_4_764790_s, &tv_r_JOIN_LEFTANTI_4_764790_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_5407922_output: " << tbl_JOIN_LEFTSEMI_TD_5407922_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_5739473_input: " << tbl_SerializeFromObject_TD_5739473_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_794355_s, &tv_r_Filter_3_794355_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4585500_input: " << tbl_SerializeFromObject_TD_4585500_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_407551_s, &tv_r_JOIN_INNER_3_407551_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_4961313_output: " << tbl_JOIN_LEFTANTI_TD_4961313_output.getNumRow() << " " << "tbl_Filter_TD_4795895_output: " << tbl_Filter_TD_4795895_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_514532_s, &tv_r_Filter_2_514532_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3388322_input: " << tbl_SerializeFromObject_TD_3388322_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_732286_s, &tv_r_JOIN_INNER_2_732286_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3883666_output: " << tbl_JOIN_INNER_TD_3883666_output.getNumRow() << " " << "tbl_Filter_TD_3389329_output: " << tbl_Filter_TD_3389329_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_28904_s, &tv_r_JOIN_INNER_1_28904_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2355612_output: " << tbl_JOIN_INNER_TD_2355612_output.getNumRow() << " " << "tbl_Filter_TD_2728508_output: " << tbl_Filter_TD_2728508_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_647007_s, &tv_r_Aggregate_0_647007_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_181709_output: " << tbl_JOIN_INNER_TD_181709_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.0436172 * 1000 << "ms" << std::endl; 
    return 0; 
}
