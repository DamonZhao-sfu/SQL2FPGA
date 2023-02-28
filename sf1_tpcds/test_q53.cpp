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

#include "cfgFunc_q53.hpp" 
#include "q53.hpp" 

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
    std::cout << "NOTE:running query #53\n."; 
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
    Table tbl_GlobalLimit_TD_0585361_output("tbl_GlobalLimit_TD_0585361_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0585361_output.allocateHost();
    Table tbl_LocalLimit_TD_1513490_output("tbl_LocalLimit_TD_1513490_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1513490_output.allocateHost();
    Table tbl_Sort_TD_2425859_output("tbl_Sort_TD_2425859_output", 6100000, 3, "");
    tbl_Sort_TD_2425859_output.allocateHost();
    Table tbl_Filter_TD_3647644_output("tbl_Filter_TD_3647644_output", 6100000, 3, "");
    tbl_Filter_TD_3647644_output.allocateHost();
    Table tbl_Window_TD_4186099_output("tbl_Window_TD_4186099_output", 6100000, 4, "");
    tbl_Window_TD_4186099_output.allocateHost();
    Table tbl_Aggregate_TD_5443923_output_preprocess("tbl_Aggregate_TD_5443923_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_5443923_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_5443923_output("tbl_Aggregate_TD_5443923_output", 6100000, 3, "");
    tbl_Aggregate_TD_5443923_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6716045_output_preprocess("tbl_JOIN_INNER_TD_6716045_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6716045_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_6716045_output("tbl_JOIN_INNER_TD_6716045_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6716045_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7714058_output("tbl_JOIN_INNER_TD_7714058_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7714058_output.allocateHost();
    Table tbl_Filter_TD_7453153_output("tbl_Filter_TD_7453153_output", 6100000, 1, "");
    tbl_Filter_TD_7453153_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8235489_output("tbl_JOIN_INNER_TD_8235489_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8235489_output.allocateHost();
    Table tbl_Filter_TD_8795786_output("tbl_Filter_TD_8795786_output", 6100000, 2, "");
    tbl_Filter_TD_8795786_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8850360_input;
    tbl_SerializeFromObject_TD_8850360_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8850360_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8850360_input.allocateHost();
    tbl_SerializeFromObject_TD_8850360_input.loadHost();
    Table tbl_Filter_TD_9492965_output("tbl_Filter_TD_9492965_output", 6100000, 2, "");
    tbl_Filter_TD_9492965_output.allocateHost();
    Table tbl_Filter_TD_9806442_output("tbl_Filter_TD_9806442_output", 6100000, 4, "");
    tbl_Filter_TD_9806442_output.allocateHost();
    Table tbl_SerializeFromObject_TD_920261_input;
    tbl_SerializeFromObject_TD_920261_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_920261_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_920261_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_920261_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_920261_input.allocateHost();
    tbl_SerializeFromObject_TD_920261_input.loadHost();
    Table tbl_SerializeFromObject_TD_10633948_input;
    tbl_SerializeFromObject_TD_10633948_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10633948_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10633948_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_10633948_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10633948_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10633948_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10633948_input.allocateHost();
    tbl_SerializeFromObject_TD_10633948_input.loadHost();
    Table tbl_SerializeFromObject_TD_10538747_input;
    tbl_SerializeFromObject_TD_10538747_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10538747_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10538747_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10538747_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10538747_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10538747_input.allocateHost();
    tbl_SerializeFromObject_TD_10538747_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6716045_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_5443923_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_6716045_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7714058_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7453153_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8235489_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8795786_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9492965_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9806442_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_5443923_cmds;
    cfg_Aggregate_TD_5443923_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_5443923_gqe_aggr(cfg_Aggregate_TD_5443923_cmds.cmd);
    cfg_Aggregate_TD_5443923_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_5443923_cmds_out;
    cfg_Aggregate_TD_5443923_cmds_out.allocateHost();
    cfg_Aggregate_TD_5443923_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_6716045_cmds;
    cfg_JOIN_INNER_TD_6716045_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6716045_gqe_join (cfg_JOIN_INNER_TD_6716045_cmds.cmd);
    cfg_JOIN_INNER_TD_6716045_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7714058_cmds;
    cfg_JOIN_INNER_TD_7714058_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7714058_gqe_join (cfg_JOIN_INNER_TD_7714058_cmds.cmd);
    cfg_JOIN_INNER_TD_7714058_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8235489_cmds;
    cfg_JOIN_INNER_TD_8235489_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8235489_gqe_join (cfg_JOIN_INNER_TD_8235489_cmds.cmd);
    cfg_JOIN_INNER_TD_8235489_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_5443923;
    krnl_Aggregate_TD_5443923 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_5443923.setup(tbl_JOIN_INNER_TD_6716045_output, tbl_Aggregate_TD_5443923_output_preprocess, cfg_Aggregate_TD_5443923_cmds, cfg_Aggregate_TD_5443923_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_6716045;
    krnl_JOIN_INNER_TD_6716045 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6716045.setup(tbl_JOIN_INNER_TD_7714058_output, tbl_Filter_TD_7453153_output, tbl_JOIN_INNER_TD_6716045_output_preprocess, cfg_JOIN_INNER_TD_6716045_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7714058;
    krnl_JOIN_INNER_TD_7714058 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7714058.setup(tbl_JOIN_INNER_TD_8235489_output, tbl_Filter_TD_8795786_output, tbl_JOIN_INNER_TD_7714058_output, cfg_JOIN_INNER_TD_7714058_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8235489;
    krnl_JOIN_INNER_TD_8235489 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8235489.setup(tbl_Filter_TD_9492965_output, tbl_Filter_TD_9806442_output, tbl_JOIN_INNER_TD_8235489_output, cfg_JOIN_INNER_TD_8235489_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_5443923;
    trans_Aggregate_TD_5443923.setq(q_a);
    trans_Aggregate_TD_5443923.add(&(cfg_Aggregate_TD_5443923_cmds));
    transEngine trans_Aggregate_TD_5443923_out;
    trans_Aggregate_TD_5443923_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_6716045;
    trans_JOIN_INNER_TD_6716045.setq(q_h);
    trans_JOIN_INNER_TD_6716045.add(&(cfg_JOIN_INNER_TD_6716045_cmds));
    transEngine trans_JOIN_INNER_TD_6716045_out;
    trans_JOIN_INNER_TD_6716045_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7714058;
    trans_JOIN_INNER_TD_7714058.setq(q_h);
    trans_JOIN_INNER_TD_7714058.add(&(cfg_JOIN_INNER_TD_7714058_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8235489;
    trans_JOIN_INNER_TD_8235489.setq(q_h);
    trans_JOIN_INNER_TD_8235489.add(&(cfg_JOIN_INNER_TD_8235489_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_5443923;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_5443923;
    std::vector<cl::Event> events_Aggregate_TD_5443923;
    events_h2d_wr_Aggregate_TD_5443923.resize(1);
    events_d2h_rd_Aggregate_TD_5443923.resize(1);
    events_Aggregate_TD_5443923.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_5443923;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_5443923;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6716045;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6716045;
    std::vector<cl::Event> events_JOIN_INNER_TD_6716045;
    events_h2d_wr_JOIN_INNER_TD_6716045.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6716045.resize(1);
    events_JOIN_INNER_TD_6716045.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6716045;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6716045;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7714058;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7714058;
    std::vector<cl::Event> events_JOIN_INNER_TD_7714058;
    events_h2d_wr_JOIN_INNER_TD_7714058.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7714058.resize(1);
    events_JOIN_INNER_TD_7714058.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7714058;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7714058;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8235489;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8235489;
    std::vector<cl::Event> events_JOIN_INNER_TD_8235489;
    events_h2d_wr_JOIN_INNER_TD_8235489.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8235489.resize(1);
    events_JOIN_INNER_TD_8235489.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8235489;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8235489;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_727499_s, tv_r_Filter_9_727499_e;
    gettimeofday(&tv_r_Filter_9_727499_s, 0);
    SW_Filter_TD_9806442(tbl_SerializeFromObject_TD_10538747_input, tbl_Filter_TD_9806442_output);
    gettimeofday(&tv_r_Filter_9_727499_e, 0);

    struct timeval tv_r_Filter_9_885704_s, tv_r_Filter_9_885704_e;
    gettimeofday(&tv_r_Filter_9_885704_s, 0);
    SW_Filter_TD_9492965(tbl_SerializeFromObject_TD_10633948_input, tbl_Filter_TD_9492965_output);
    gettimeofday(&tv_r_Filter_9_885704_e, 0);

    struct timeval tv_r_Filter_8_485273_s, tv_r_Filter_8_485273_e;
    gettimeofday(&tv_r_Filter_8_485273_s, 0);
    SW_Filter_TD_8795786(tbl_SerializeFromObject_TD_920261_input, tbl_Filter_TD_8795786_output);
    gettimeofday(&tv_r_Filter_8_485273_e, 0);

    struct timeval tv_r_JOIN_INNER_8_493045_s, tv_r_JOIN_INNER_8_493045_e;
    gettimeofday(&tv_r_JOIN_INNER_8_493045_s, 0);
    trans_JOIN_INNER_TD_8235489.add(&(tbl_Filter_TD_9492965_output));
    trans_JOIN_INNER_TD_8235489.add(&(tbl_Filter_TD_9806442_output));
    trans_JOIN_INNER_TD_8235489.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8235489), &(events_h2d_wr_JOIN_INNER_TD_8235489[0]));
    events_grp_JOIN_INNER_TD_8235489.push_back(events_h2d_wr_JOIN_INNER_TD_8235489[0]);
    krnl_JOIN_INNER_TD_8235489.run(0, &(events_grp_JOIN_INNER_TD_8235489), &(events_JOIN_INNER_TD_8235489[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_493045_e, 0);

    struct timeval tv_r_Filter_7_459118_s, tv_r_Filter_7_459118_e;
    gettimeofday(&tv_r_Filter_7_459118_s, 0);
    SW_Filter_TD_7453153(tbl_SerializeFromObject_TD_8850360_input, tbl_Filter_TD_7453153_output);
    gettimeofday(&tv_r_Filter_7_459118_e, 0);

    struct timeval tv_r_JOIN_INNER_7_171407_s, tv_r_JOIN_INNER_7_171407_e;
    gettimeofday(&tv_r_JOIN_INNER_7_171407_s, 0);
    prev_events_grp_JOIN_INNER_TD_7714058.push_back(events_h2d_wr_JOIN_INNER_TD_8235489[0]);
    trans_JOIN_INNER_TD_7714058.add(&(tbl_Filter_TD_8795786_output));
    trans_JOIN_INNER_TD_7714058.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7714058), &(events_h2d_wr_JOIN_INNER_TD_7714058[0]));
    events_grp_JOIN_INNER_TD_7714058.push_back(events_h2d_wr_JOIN_INNER_TD_7714058[0]);
    events_grp_JOIN_INNER_TD_7714058.push_back(events_JOIN_INNER_TD_8235489[0]);
    krnl_JOIN_INNER_TD_7714058.run(0, &(events_grp_JOIN_INNER_TD_7714058), &(events_JOIN_INNER_TD_7714058[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_171407_e, 0);

    struct timeval tv_r_JOIN_INNER_6_865028_s, tv_r_JOIN_INNER_6_865028_e;
    gettimeofday(&tv_r_JOIN_INNER_6_865028_s, 0);
    prev_events_grp_JOIN_INNER_TD_6716045.push_back(events_h2d_wr_JOIN_INNER_TD_7714058[0]);
    trans_JOIN_INNER_TD_6716045.add(&(tbl_Filter_TD_7453153_output));
    trans_JOIN_INNER_TD_6716045.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6716045), &(events_h2d_wr_JOIN_INNER_TD_6716045[0]));
    events_grp_JOIN_INNER_TD_6716045.push_back(events_h2d_wr_JOIN_INNER_TD_6716045[0]);
    events_grp_JOIN_INNER_TD_6716045.push_back(events_JOIN_INNER_TD_7714058[0]);
    krnl_JOIN_INNER_TD_6716045.run(0, &(events_grp_JOIN_INNER_TD_6716045), &(events_JOIN_INNER_TD_6716045[0]));
    
    trans_JOIN_INNER_TD_6716045_out.add(&(tbl_JOIN_INNER_TD_6716045_output_preprocess));
    trans_JOIN_INNER_TD_6716045_out.dev2host(0, &(events_JOIN_INNER_TD_6716045), &(events_d2h_rd_JOIN_INNER_TD_6716045[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_6716045);
    tbl_JOIN_INNER_TD_6716045_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_6716045_output));
    gettimeofday(&tv_r_JOIN_INNER_6_865028_e, 0);

    struct timeval tv_r_Aggregate_5_210227_s, tv_r_Aggregate_5_210227_e;
    gettimeofday(&tv_r_Aggregate_5_210227_s, 0);
    trans_Aggregate_TD_5443923.add(&(tbl_JOIN_INNER_TD_6716045_output));
    trans_Aggregate_TD_5443923.host2dev(0, &(prev_events_grp_Aggregate_TD_5443923), &(events_h2d_wr_Aggregate_TD_5443923[0]));
    events_grp_Aggregate_TD_5443923.push_back(events_h2d_wr_Aggregate_TD_5443923[0]);
    krnl_Aggregate_TD_5443923.run(0, &(events_grp_Aggregate_TD_5443923), &(events_Aggregate_TD_5443923[0]));
    
    trans_Aggregate_TD_5443923_out.add(&(tbl_Aggregate_TD_5443923_output_preprocess));
    trans_Aggregate_TD_5443923_out.dev2host(0, &(events_Aggregate_TD_5443923), &(events_d2h_rd_Aggregate_TD_5443923[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_5443923_consolidate(tbl_Aggregate_TD_5443923_output_preprocess, tbl_Aggregate_TD_5443923_output);
    gettimeofday(&tv_r_Aggregate_5_210227_e, 0);

    struct timeval tv_r_Window_4_461840_s, tv_r_Window_4_461840_e;
    gettimeofday(&tv_r_Window_4_461840_s, 0);
    SW_Window_TD_4186099(tbl_Aggregate_TD_5443923_output, tbl_Window_TD_4186099_output);
    gettimeofday(&tv_r_Window_4_461840_e, 0);

    struct timeval tv_r_Filter_3_724456_s, tv_r_Filter_3_724456_e;
    gettimeofday(&tv_r_Filter_3_724456_s, 0);
    SW_Filter_TD_3647644(tbl_Window_TD_4186099_output, tbl_Filter_TD_3647644_output);
    gettimeofday(&tv_r_Filter_3_724456_e, 0);

    struct timeval tv_r_Sort_2_454305_s, tv_r_Sort_2_454305_e;
    gettimeofday(&tv_r_Sort_2_454305_s, 0);
    SW_Sort_TD_2425859(tbl_Filter_TD_3647644_output, tbl_Sort_TD_2425859_output);
    gettimeofday(&tv_r_Sort_2_454305_e, 0);

    struct timeval tv_r_LocalLimit_1_511847_s, tv_r_LocalLimit_1_511847_e;
    gettimeofday(&tv_r_LocalLimit_1_511847_s, 0);
    SW_LocalLimit_TD_1513490(tbl_Sort_TD_2425859_output, tbl_LocalLimit_TD_1513490_output);
    gettimeofday(&tv_r_LocalLimit_1_511847_e, 0);

    struct timeval tv_r_GlobalLimit_0_306365_s, tv_r_GlobalLimit_0_306365_e;
    gettimeofday(&tv_r_GlobalLimit_0_306365_s, 0);
    SW_GlobalLimit_TD_0585361(tbl_LocalLimit_TD_1513490_output, tbl_GlobalLimit_TD_0585361_output);
    gettimeofday(&tv_r_GlobalLimit_0_306365_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_727499_s, &tv_r_Filter_9_727499_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10538747_input: " << tbl_SerializeFromObject_TD_10538747_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_885704_s, &tv_r_Filter_9_885704_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10633948_input: " << tbl_SerializeFromObject_TD_10633948_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_485273_s, &tv_r_Filter_8_485273_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_920261_input: " << tbl_SerializeFromObject_TD_920261_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_493045_s, &tv_r_JOIN_INNER_8_493045_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9492965_output: " << tbl_Filter_TD_9492965_output.getNumRow() << " " << "tbl_Filter_TD_9806442_output: " << tbl_Filter_TD_9806442_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_459118_s, &tv_r_Filter_7_459118_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8850360_input: " << tbl_SerializeFromObject_TD_8850360_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_171407_s, &tv_r_JOIN_INNER_7_171407_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8235489_output: " << tbl_JOIN_INNER_TD_8235489_output.getNumRow() << " " << "tbl_Filter_TD_8795786_output: " << tbl_Filter_TD_8795786_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_865028_s, &tv_r_JOIN_INNER_6_865028_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7714058_output: " << tbl_JOIN_INNER_TD_7714058_output.getNumRow() << " " << "tbl_Filter_TD_7453153_output: " << tbl_Filter_TD_7453153_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_210227_s, &tv_r_Aggregate_5_210227_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6716045_output: " << tbl_JOIN_INNER_TD_6716045_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_4: " << tvdiff(&tv_r_Window_4_461840_s, &tv_r_Window_4_461840_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5443923_output: " << tbl_Aggregate_TD_5443923_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_724456_s, &tv_r_Filter_3_724456_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_4186099_output: " << tbl_Window_TD_4186099_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_454305_s, &tv_r_Sort_2_454305_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3647644_output: " << tbl_Filter_TD_3647644_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_511847_s, &tv_r_LocalLimit_1_511847_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2425859_output: " << tbl_Sort_TD_2425859_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_306365_s, &tv_r_GlobalLimit_0_306365_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1513490_output: " << tbl_LocalLimit_TD_1513490_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.0236185 * 1000 << "ms" << std::endl; 
    return 0; 
}
