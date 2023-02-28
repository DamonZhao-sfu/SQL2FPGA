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

#include "cfgFunc_q92.hpp" 
#include "q92.hpp" 

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
    std::cout << "NOTE:running query #92\n."; 
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
    cl::Device device_a = devices[1]; 
    // Create context_a and command queue for selected device 
    cl::Context context_a(device_a); 
    cl::CommandQueue q_a(context_a, device_a, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE); 
    std::string devName_a = device_a.getInfo<CL_DEVICE_NAME>(); 
    std::cout << "Selected Device " << devName_a << "\n"; 
    cl::Program::Binaries xclBins_a = xcl::import_binary_file(xclbin_path_a); 
    std::vector<cl::Device> devices_a; 
    devices_a.push_back(device_a); 
    cl::Program program_a(context_a, devices_a, xclBins_a); 
    // ****************************** Tables **************************** // 
    Table tbl_Aggregate_TD_0967942_output("tbl_Aggregate_TD_0967942_output", 6100000, 1, "");
    tbl_Aggregate_TD_0967942_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1938870_output("tbl_JOIN_INNER_TD_1938870_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_1938870_output.allocateHost();
    Table tbl_JOIN_INNER_TD_256820_output("tbl_JOIN_INNER_TD_256820_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_256820_output.allocateHost();
    Table tbl_Filter_TD_2385947_output("tbl_Filter_TD_2385947_output", 6100000, 1, "");
    tbl_Filter_TD_2385947_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3950390_output("tbl_JOIN_INNER_TD_3950390_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_3950390_output.allocateHost();
    Table tbl_Filter_TD_3694895_output("tbl_Filter_TD_3694895_output", 6100000, 2, "");
    tbl_Filter_TD_3694895_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3351751_input;
    tbl_SerializeFromObject_TD_3351751_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3351751_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_3351751_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_3351751_input.allocateHost();
    tbl_SerializeFromObject_TD_3351751_input.loadHost();
    Table tbl_Filter_TD_4803735_output("tbl_Filter_TD_4803735_output", 6100000, 3, "");
    tbl_Filter_TD_4803735_output.allocateHost();
    Table tbl_Filter_TD_4780068_output("tbl_Filter_TD_4780068_output", 6100000, 1, "");
    tbl_Filter_TD_4780068_output.allocateHost();
    Table tbl_Aggregate_TD_4869590_output_preprocess("tbl_Aggregate_TD_4869590_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_4869590_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_4869590_output("tbl_Aggregate_TD_4869590_output", 6100000, 2, "");
    tbl_Aggregate_TD_4869590_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5647535_input;
    tbl_SerializeFromObject_TD_5647535_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5647535_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5647535_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_5647535_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_5647535_input.allocateHost();
    tbl_SerializeFromObject_TD_5647535_input.loadHost();
    Table tbl_SerializeFromObject_TD_5920515_input;
    tbl_SerializeFromObject_TD_5920515_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5920515_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_5920515_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_5920515_input.allocateHost();
    tbl_SerializeFromObject_TD_5920515_input.loadHost();
    Table tbl_JOIN_INNER_TD_5777030_output_preprocess("tbl_JOIN_INNER_TD_5777030_output_preprocess", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5777030_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_5777030_output("tbl_JOIN_INNER_TD_5777030_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5777030_output.allocateHost();
    Table tbl_Filter_TD_6492803_output("tbl_Filter_TD_6492803_output", 6100000, 3, "");
    tbl_Filter_TD_6492803_output.allocateHost();
    Table tbl_Filter_TD_6201353_output("tbl_Filter_TD_6201353_output", 6100000, 1, "");
    tbl_Filter_TD_6201353_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7799063_input;
    tbl_SerializeFromObject_TD_7799063_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7799063_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7799063_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_7799063_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_7799063_input.allocateHost();
    tbl_SerializeFromObject_TD_7799063_input.loadHost();
    Table tbl_SerializeFromObject_TD_7546676_input;
    tbl_SerializeFromObject_TD_7546676_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7546676_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7546676_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7546676_input.allocateHost();
    tbl_SerializeFromObject_TD_7546676_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_1938870_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_256820_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_2385947_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3950390_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3694895_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4803735_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4780068_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5777030_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_4869590_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_5777030_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6492803_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6201353_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_1938870_cmds;
    cfg_JOIN_INNER_TD_1938870_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1938870_gqe_join (cfg_JOIN_INNER_TD_1938870_cmds.cmd);
    cfg_JOIN_INNER_TD_1938870_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_256820_cmds;
    cfg_JOIN_INNER_TD_256820_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_256820_gqe_join (cfg_JOIN_INNER_TD_256820_cmds.cmd);
    cfg_JOIN_INNER_TD_256820_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3950390_cmds;
    cfg_JOIN_INNER_TD_3950390_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3950390_gqe_join (cfg_JOIN_INNER_TD_3950390_cmds.cmd);
    cfg_JOIN_INNER_TD_3950390_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_4869590_cmds;
    cfg_Aggregate_TD_4869590_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_4869590_gqe_aggr(cfg_Aggregate_TD_4869590_cmds.cmd);
    cfg_Aggregate_TD_4869590_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_4869590_cmds_out;
    cfg_Aggregate_TD_4869590_cmds_out.allocateHost();
    cfg_Aggregate_TD_4869590_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_5777030_cmds;
    cfg_JOIN_INNER_TD_5777030_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5777030_gqe_join (cfg_JOIN_INNER_TD_5777030_cmds.cmd);
    cfg_JOIN_INNER_TD_5777030_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_1938870;
    krnl_JOIN_INNER_TD_1938870 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1938870.setup(tbl_JOIN_INNER_TD_256820_output, tbl_Filter_TD_2385947_output, tbl_JOIN_INNER_TD_1938870_output, cfg_JOIN_INNER_TD_1938870_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_256820;
    krnl_JOIN_INNER_TD_256820 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_256820.setup(tbl_JOIN_INNER_TD_3950390_output, tbl_Filter_TD_3694895_output, tbl_JOIN_INNER_TD_256820_output, cfg_JOIN_INNER_TD_256820_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3950390;
    krnl_JOIN_INNER_TD_3950390 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3950390.setup(tbl_Filter_TD_4803735_output, tbl_Filter_TD_4780068_output, tbl_JOIN_INNER_TD_3950390_output, cfg_JOIN_INNER_TD_3950390_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_4869590;
    krnl_Aggregate_TD_4869590 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_4869590.setup(tbl_JOIN_INNER_TD_5777030_output, tbl_Aggregate_TD_4869590_output_preprocess, cfg_Aggregate_TD_4869590_cmds, cfg_Aggregate_TD_4869590_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_5777030;
    krnl_JOIN_INNER_TD_5777030 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5777030.setup(tbl_Filter_TD_6492803_output, tbl_Filter_TD_6201353_output, tbl_JOIN_INNER_TD_5777030_output_preprocess, cfg_JOIN_INNER_TD_5777030_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_1938870;
    trans_JOIN_INNER_TD_1938870.setq(q_h);
    trans_JOIN_INNER_TD_1938870.add(&(cfg_JOIN_INNER_TD_1938870_cmds));
    transEngine trans_JOIN_INNER_TD_1938870_out;
    trans_JOIN_INNER_TD_1938870_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_256820;
    trans_JOIN_INNER_TD_256820.setq(q_h);
    trans_JOIN_INNER_TD_256820.add(&(cfg_JOIN_INNER_TD_256820_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3950390;
    trans_JOIN_INNER_TD_3950390.setq(q_h);
    trans_JOIN_INNER_TD_3950390.add(&(cfg_JOIN_INNER_TD_3950390_cmds));
    q_h.finish();
    transEngine trans_Aggregate_TD_4869590;
    trans_Aggregate_TD_4869590.setq(q_a);
    trans_Aggregate_TD_4869590.add(&(cfg_Aggregate_TD_4869590_cmds));
    transEngine trans_Aggregate_TD_4869590_out;
    trans_Aggregate_TD_4869590_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_5777030;
    trans_JOIN_INNER_TD_5777030.setq(q_h);
    trans_JOIN_INNER_TD_5777030.add(&(cfg_JOIN_INNER_TD_5777030_cmds));
    transEngine trans_JOIN_INNER_TD_5777030_out;
    trans_JOIN_INNER_TD_5777030_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1938870;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1938870;
    std::vector<cl::Event> events_JOIN_INNER_TD_1938870;
    events_h2d_wr_JOIN_INNER_TD_1938870.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1938870.resize(1);
    events_JOIN_INNER_TD_1938870.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1938870;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1938870;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_256820;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_256820;
    std::vector<cl::Event> events_JOIN_INNER_TD_256820;
    events_h2d_wr_JOIN_INNER_TD_256820.resize(1);
    events_d2h_rd_JOIN_INNER_TD_256820.resize(1);
    events_JOIN_INNER_TD_256820.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_256820;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_256820;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3950390;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3950390;
    std::vector<cl::Event> events_JOIN_INNER_TD_3950390;
    events_h2d_wr_JOIN_INNER_TD_3950390.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3950390.resize(1);
    events_JOIN_INNER_TD_3950390.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3950390;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3950390;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_4869590;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_4869590;
    std::vector<cl::Event> events_Aggregate_TD_4869590;
    events_h2d_wr_Aggregate_TD_4869590.resize(1);
    events_d2h_rd_Aggregate_TD_4869590.resize(1);
    events_Aggregate_TD_4869590.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_4869590;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_4869590;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5777030;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5777030;
    std::vector<cl::Event> events_JOIN_INNER_TD_5777030;
    events_h2d_wr_JOIN_INNER_TD_5777030.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5777030.resize(1);
    events_JOIN_INNER_TD_5777030.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5777030;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5777030;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_987825_s, tv_r_Filter_6_987825_e;
    gettimeofday(&tv_r_Filter_6_987825_s, 0);
    SW_Filter_TD_6201353(tbl_SerializeFromObject_TD_7546676_input, tbl_Filter_TD_6201353_output);
    gettimeofday(&tv_r_Filter_6_987825_e, 0);

    struct timeval tv_r_Filter_6_662486_s, tv_r_Filter_6_662486_e;
    gettimeofday(&tv_r_Filter_6_662486_s, 0);
    SW_Filter_TD_6492803(tbl_SerializeFromObject_TD_7799063_input, tbl_Filter_TD_6492803_output);
    gettimeofday(&tv_r_Filter_6_662486_e, 0);

    struct timeval tv_r_JOIN_INNER_5_748397_s, tv_r_JOIN_INNER_5_748397_e;
    gettimeofday(&tv_r_JOIN_INNER_5_748397_s, 0);
    trans_JOIN_INNER_TD_5777030.add(&(tbl_Filter_TD_6492803_output));
    trans_JOIN_INNER_TD_5777030.add(&(tbl_Filter_TD_6201353_output));
    trans_JOIN_INNER_TD_5777030.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5777030), &(events_h2d_wr_JOIN_INNER_TD_5777030[0]));
    events_grp_JOIN_INNER_TD_5777030.push_back(events_h2d_wr_JOIN_INNER_TD_5777030[0]);
    krnl_JOIN_INNER_TD_5777030.run(0, &(events_grp_JOIN_INNER_TD_5777030), &(events_JOIN_INNER_TD_5777030[0]));
    
    trans_JOIN_INNER_TD_5777030_out.add(&(tbl_JOIN_INNER_TD_5777030_output_preprocess));
    trans_JOIN_INNER_TD_5777030_out.dev2host(0, &(events_JOIN_INNER_TD_5777030), &(events_d2h_rd_JOIN_INNER_TD_5777030[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_5777030);
    tbl_JOIN_INNER_TD_5777030_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_5777030_output));
    gettimeofday(&tv_r_JOIN_INNER_5_748397_e, 0);

    struct timeval tv_r_Aggregate_4_26941_s, tv_r_Aggregate_4_26941_e;
    gettimeofday(&tv_r_Aggregate_4_26941_s, 0);
    trans_Aggregate_TD_4869590.add(&(tbl_JOIN_INNER_TD_5777030_output));
    trans_Aggregate_TD_4869590.host2dev(0, &(prev_events_grp_Aggregate_TD_4869590), &(events_h2d_wr_Aggregate_TD_4869590[0]));
    events_grp_Aggregate_TD_4869590.push_back(events_h2d_wr_Aggregate_TD_4869590[0]);
    krnl_Aggregate_TD_4869590.run(0, &(events_grp_Aggregate_TD_4869590), &(events_Aggregate_TD_4869590[0]));
    
    trans_Aggregate_TD_4869590_out.add(&(tbl_Aggregate_TD_4869590_output_preprocess));
    trans_Aggregate_TD_4869590_out.dev2host(0, &(events_Aggregate_TD_4869590), &(events_d2h_rd_Aggregate_TD_4869590[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_4869590_consolidate(tbl_Aggregate_TD_4869590_output_preprocess, tbl_Aggregate_TD_4869590_output);
    gettimeofday(&tv_r_Aggregate_4_26941_e, 0);

    struct timeval tv_r_Filter_4_182907_s, tv_r_Filter_4_182907_e;
    gettimeofday(&tv_r_Filter_4_182907_s, 0);
    SW_Filter_TD_4780068(tbl_SerializeFromObject_TD_5920515_input, tbl_Filter_TD_4780068_output);
    gettimeofday(&tv_r_Filter_4_182907_e, 0);

    struct timeval tv_r_Filter_4_273833_s, tv_r_Filter_4_273833_e;
    gettimeofday(&tv_r_Filter_4_273833_s, 0);
    SW_Filter_TD_4803735(tbl_SerializeFromObject_TD_5647535_input, tbl_Filter_TD_4803735_output);
    gettimeofday(&tv_r_Filter_4_273833_e, 0);

    struct timeval tv_r_Filter_3_729903_s, tv_r_Filter_3_729903_e;
    gettimeofday(&tv_r_Filter_3_729903_s, 0);
    SW_Filter_TD_3694895(tbl_Aggregate_TD_4869590_output, tbl_Filter_TD_3694895_output);
    gettimeofday(&tv_r_Filter_3_729903_e, 0);

    struct timeval tv_r_JOIN_INNER_3_227728_s, tv_r_JOIN_INNER_3_227728_e;
    gettimeofday(&tv_r_JOIN_INNER_3_227728_s, 0);
    trans_JOIN_INNER_TD_3950390.add(&(tbl_Filter_TD_4803735_output));
    trans_JOIN_INNER_TD_3950390.add(&(tbl_Filter_TD_4780068_output));
    trans_JOIN_INNER_TD_3950390.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3950390), &(events_h2d_wr_JOIN_INNER_TD_3950390[0]));
    events_grp_JOIN_INNER_TD_3950390.push_back(events_h2d_wr_JOIN_INNER_TD_3950390[0]);
    krnl_JOIN_INNER_TD_3950390.run(0, &(events_grp_JOIN_INNER_TD_3950390), &(events_JOIN_INNER_TD_3950390[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_227728_e, 0);

    struct timeval tv_r_Filter_2_493746_s, tv_r_Filter_2_493746_e;
    gettimeofday(&tv_r_Filter_2_493746_s, 0);
    SW_Filter_TD_2385947(tbl_SerializeFromObject_TD_3351751_input, tbl_Filter_TD_2385947_output);
    gettimeofday(&tv_r_Filter_2_493746_e, 0);

    struct timeval tv_r_JOIN_INNER_2_622385_s, tv_r_JOIN_INNER_2_622385_e;
    gettimeofday(&tv_r_JOIN_INNER_2_622385_s, 0);
    prev_events_grp_JOIN_INNER_TD_256820.push_back(events_h2d_wr_JOIN_INNER_TD_3950390[0]);
    trans_JOIN_INNER_TD_256820.add(&(tbl_Filter_TD_3694895_output));
    trans_JOIN_INNER_TD_256820.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_256820), &(events_h2d_wr_JOIN_INNER_TD_256820[0]));
    events_grp_JOIN_INNER_TD_256820.push_back(events_h2d_wr_JOIN_INNER_TD_256820[0]);
    events_grp_JOIN_INNER_TD_256820.push_back(events_JOIN_INNER_TD_3950390[0]);
    krnl_JOIN_INNER_TD_256820.run(0, &(events_grp_JOIN_INNER_TD_256820), &(events_JOIN_INNER_TD_256820[0]));
    gettimeofday(&tv_r_JOIN_INNER_2_622385_e, 0);

    struct timeval tv_r_JOIN_INNER_1_918369_s, tv_r_JOIN_INNER_1_918369_e;
    gettimeofday(&tv_r_JOIN_INNER_1_918369_s, 0);
    prev_events_grp_JOIN_INNER_TD_1938870.push_back(events_h2d_wr_JOIN_INNER_TD_256820[0]);
    trans_JOIN_INNER_TD_1938870.add(&(tbl_Filter_TD_2385947_output));
    trans_JOIN_INNER_TD_1938870.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1938870), &(events_h2d_wr_JOIN_INNER_TD_1938870[0]));
    events_grp_JOIN_INNER_TD_1938870.push_back(events_h2d_wr_JOIN_INNER_TD_1938870[0]);
    events_grp_JOIN_INNER_TD_1938870.push_back(events_JOIN_INNER_TD_256820[0]);
    krnl_JOIN_INNER_TD_1938870.run(0, &(events_grp_JOIN_INNER_TD_1938870), &(events_JOIN_INNER_TD_1938870[0]));
    
    trans_JOIN_INNER_TD_1938870_out.add(&(tbl_JOIN_INNER_TD_1938870_output));
    trans_JOIN_INNER_TD_1938870_out.dev2host(0, &(events_JOIN_INNER_TD_1938870), &(events_d2h_rd_JOIN_INNER_TD_1938870[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_918369_e, 0);

    struct timeval tv_r_Aggregate_0_803865_s, tv_r_Aggregate_0_803865_e;
    gettimeofday(&tv_r_Aggregate_0_803865_s, 0);
    SW_Aggregate_TD_0967942(tbl_JOIN_INNER_TD_1938870_output, tbl_Aggregate_TD_0967942_output);
    gettimeofday(&tv_r_Aggregate_0_803865_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_987825_s, &tv_r_Filter_6_987825_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7546676_input: " << tbl_SerializeFromObject_TD_7546676_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_662486_s, &tv_r_Filter_6_662486_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7799063_input: " << tbl_SerializeFromObject_TD_7799063_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_748397_s, &tv_r_JOIN_INNER_5_748397_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6492803_output: " << tbl_Filter_TD_6492803_output.getNumRow() << " " << "tbl_Filter_TD_6201353_output: " << tbl_Filter_TD_6201353_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_26941_s, &tv_r_Aggregate_4_26941_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5777030_output: " << tbl_JOIN_INNER_TD_5777030_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_182907_s, &tv_r_Filter_4_182907_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5920515_input: " << tbl_SerializeFromObject_TD_5920515_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_273833_s, &tv_r_Filter_4_273833_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5647535_input: " << tbl_SerializeFromObject_TD_5647535_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_729903_s, &tv_r_Filter_3_729903_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4869590_output: " << tbl_Aggregate_TD_4869590_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_227728_s, &tv_r_JOIN_INNER_3_227728_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4803735_output: " << tbl_Filter_TD_4803735_output.getNumRow() << " " << "tbl_Filter_TD_4780068_output: " << tbl_Filter_TD_4780068_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_493746_s, &tv_r_Filter_2_493746_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3351751_input: " << tbl_SerializeFromObject_TD_3351751_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_622385_s, &tv_r_JOIN_INNER_2_622385_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3950390_output: " << tbl_JOIN_INNER_TD_3950390_output.getNumRow() << " " << "tbl_Filter_TD_3694895_output: " << tbl_Filter_TD_3694895_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_918369_s, &tv_r_JOIN_INNER_1_918369_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_256820_output: " << tbl_JOIN_INNER_TD_256820_output.getNumRow() << " " << "tbl_Filter_TD_2385947_output: " << tbl_Filter_TD_2385947_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_803865_s, &tv_r_Aggregate_0_803865_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1938870_output: " << tbl_JOIN_INNER_TD_1938870_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.0868946 * 1000 << "ms" << std::endl; 
    return 0; 
}
