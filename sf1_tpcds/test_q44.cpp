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

#include "cfgFunc_q44.hpp" 
#include "q44.hpp" 

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
    std::cout << "NOTE:running query #44\n."; 
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
    Table tbl_GlobalLimit_TD_0500080_output("tbl_GlobalLimit_TD_0500080_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0500080_output.allocateHost();
    Table tbl_LocalLimit_TD_178366_output("tbl_LocalLimit_TD_178366_output", 6100000, 3, "");
    tbl_LocalLimit_TD_178366_output.allocateHost();
    Table tbl_Sort_TD_2208247_output("tbl_Sort_TD_2208247_output", 6100000, 3, "");
    tbl_Sort_TD_2208247_output.allocateHost();
    Table tbl_Project_TD_3292213_output("tbl_Project_TD_3292213_output", 6100000, 3, "");
    tbl_Project_TD_3292213_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4435382_output("tbl_JOIN_INNER_TD_4435382_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4435382_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5902447_output("tbl_JOIN_INNER_TD_5902447_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5902447_output.allocateHost();
    Table tbl_Filter_TD_5581896_output("tbl_Filter_TD_5581896_output", 6100000, 2, "");
    tbl_Filter_TD_5581896_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6478433_output("tbl_JOIN_INNER_TD_6478433_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6478433_output.allocateHost();
    Table tbl_Filter_TD_6626003_output("tbl_Filter_TD_6626003_output", 6100000, 2, "");
    tbl_Filter_TD_6626003_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6718070_input;
    tbl_SerializeFromObject_TD_6718070_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6718070_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6718070_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6718070_input.allocateHost();
    tbl_SerializeFromObject_TD_6718070_input.loadHost();
    Table tbl_Filter_TD_7862837_output("tbl_Filter_TD_7862837_output", 6100000, 2, "");
    tbl_Filter_TD_7862837_output.allocateHost();
    Table tbl_Filter_TD_7606358_output("tbl_Filter_TD_7606358_output", 6100000, 2, "");
    tbl_Filter_TD_7606358_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7985453_input;
    tbl_SerializeFromObject_TD_7985453_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7985453_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7985453_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7985453_input.allocateHost();
    tbl_SerializeFromObject_TD_7985453_input.loadHost();
    Table tbl_Window_TD_8245318_output("tbl_Window_TD_8245318_output", 6100000, 3, "");
    tbl_Window_TD_8245318_output.allocateHost();
    Table tbl_Window_TD_8623966_output("tbl_Window_TD_8623966_output", 6100000, 3, "");
    tbl_Window_TD_8623966_output.allocateHost();
    Table tbl_Filter_TD_9256529_output("tbl_Filter_TD_9256529_output", 6100000, 2, "");
    tbl_Filter_TD_9256529_output.allocateHost();
    Table tbl_Filter_TD_9311402_output("tbl_Filter_TD_9311402_output", 6100000, 2, "");
    tbl_Filter_TD_9311402_output.allocateHost();
    Table tbl_Aggregate_TD_10258077_output("tbl_Aggregate_TD_10258077_output", 6100000, 2, "");
    tbl_Aggregate_TD_10258077_output.allocateHost();
    Table tbl_Aggregate_TD_10169659_output_preprocess("tbl_Aggregate_TD_10169659_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_10169659_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_10169659_output("tbl_Aggregate_TD_10169659_output", 6100000, 1, "");
    tbl_Aggregate_TD_10169659_output.allocateHost();
    Table tbl_Aggregate_TD_10881817_output("tbl_Aggregate_TD_10881817_output", 6100000, 2, "");
    tbl_Aggregate_TD_10881817_output.allocateHost();
    Table tbl_Aggregate_TD_10418601_output_preprocess("tbl_Aggregate_TD_10418601_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_10418601_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_10418601_output("tbl_Aggregate_TD_10418601_output", 6100000, 1, "");
    tbl_Aggregate_TD_10418601_output.allocateHost();
    Table tbl_Filter_TD_11894274_output("tbl_Filter_TD_11894274_output", 6100000, 2, "");
    tbl_Filter_TD_11894274_output.allocateHost();
    Table tbl_Filter_TD_11397913_output("tbl_Filter_TD_11397913_output", 6100000, 2, "");
    tbl_Filter_TD_11397913_output.allocateHost();
    Table tbl_Filter_TD_11198664_output("tbl_Filter_TD_11198664_output", 6100000, 2, "");
    tbl_Filter_TD_11198664_output.allocateHost();
    Table tbl_Filter_TD_11415172_output("tbl_Filter_TD_11415172_output", 6100000, 2, "");
    tbl_Filter_TD_11415172_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12403901_input;
    tbl_SerializeFromObject_TD_12403901_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12403901_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12403901_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12403901_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12403901_input.allocateHost();
    tbl_SerializeFromObject_TD_12403901_input.loadHost();
    Table tbl_SerializeFromObject_TD_12651205_input;
    tbl_SerializeFromObject_TD_12651205_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12651205_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12651205_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12651205_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_12651205_input.allocateHost();
    tbl_SerializeFromObject_TD_12651205_input.loadHost();
    Table tbl_SerializeFromObject_TD_12531289_input;
    tbl_SerializeFromObject_TD_12531289_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12531289_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12531289_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12531289_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12531289_input.allocateHost();
    tbl_SerializeFromObject_TD_12531289_input.loadHost();
    Table tbl_SerializeFromObject_TD_12337282_input;
    tbl_SerializeFromObject_TD_12337282_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12337282_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12337282_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_12337282_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_12337282_input.allocateHost();
    tbl_SerializeFromObject_TD_12337282_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6478433_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7862837_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7606358_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_10169659_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_10418601_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Filter_TD_11397913_output.allocateDevBuffer(context_a, 32);
    tbl_Filter_TD_11415172_output.allocateDevBuffer(context_a, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_6478433_cmds;
    cfg_JOIN_INNER_TD_6478433_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6478433_gqe_join (cfg_JOIN_INNER_TD_6478433_cmds.cmd);
    cfg_JOIN_INNER_TD_6478433_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_10169659_cmds;
    cfg_Aggregate_TD_10169659_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_10169659_gqe_aggr(cfg_Aggregate_TD_10169659_cmds.cmd);
    cfg_Aggregate_TD_10169659_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_10169659_cmds_out;
    cfg_Aggregate_TD_10169659_cmds_out.allocateHost();
    cfg_Aggregate_TD_10169659_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_10418601_cmds;
    cfg_Aggregate_TD_10418601_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_10418601_gqe_aggr(cfg_Aggregate_TD_10418601_cmds.cmd);
    cfg_Aggregate_TD_10418601_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_10418601_cmds_out;
    cfg_Aggregate_TD_10418601_cmds_out.allocateHost();
    cfg_Aggregate_TD_10418601_cmds_out.allocateDevBuffer(context_a, 33);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_6478433;
    krnl_JOIN_INNER_TD_6478433 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6478433.setup(tbl_Filter_TD_7862837_output, tbl_Filter_TD_7606358_output, tbl_JOIN_INNER_TD_6478433_output, cfg_JOIN_INNER_TD_6478433_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_10169659;
    krnl_Aggregate_TD_10169659 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_10169659.setup(tbl_Filter_TD_11397913_output, tbl_Aggregate_TD_10169659_output_preprocess, cfg_Aggregate_TD_10169659_cmds, cfg_Aggregate_TD_10169659_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_10418601;
    krnl_Aggregate_TD_10418601 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_10418601.setup(tbl_Filter_TD_11415172_output, tbl_Aggregate_TD_10418601_output_preprocess, cfg_Aggregate_TD_10418601_cmds, cfg_Aggregate_TD_10418601_cmds_out, buftmp_a);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_6478433;
    trans_JOIN_INNER_TD_6478433.setq(q_h);
    trans_JOIN_INNER_TD_6478433.add(&(cfg_JOIN_INNER_TD_6478433_cmds));
    transEngine trans_JOIN_INNER_TD_6478433_out;
    trans_JOIN_INNER_TD_6478433_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_10169659;
    trans_Aggregate_TD_10169659.setq(q_a);
    trans_Aggregate_TD_10169659.add(&(cfg_Aggregate_TD_10169659_cmds));
    transEngine trans_Aggregate_TD_10169659_out;
    trans_Aggregate_TD_10169659_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_10418601;
    trans_Aggregate_TD_10418601.setq(q_a);
    trans_Aggregate_TD_10418601.add(&(cfg_Aggregate_TD_10418601_cmds));
    transEngine trans_Aggregate_TD_10418601_out;
    trans_Aggregate_TD_10418601_out.setq(q_a);
    q_a.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6478433;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6478433;
    std::vector<cl::Event> events_JOIN_INNER_TD_6478433;
    events_h2d_wr_JOIN_INNER_TD_6478433.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6478433.resize(1);
    events_JOIN_INNER_TD_6478433.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6478433;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6478433;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_10169659;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_10169659;
    std::vector<cl::Event> events_Aggregate_TD_10169659;
    events_h2d_wr_Aggregate_TD_10169659.resize(1);
    events_d2h_rd_Aggregate_TD_10169659.resize(1);
    events_Aggregate_TD_10169659.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_10169659;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_10169659;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_10418601;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_10418601;
    std::vector<cl::Event> events_Aggregate_TD_10418601;
    events_h2d_wr_Aggregate_TD_10418601.resize(1);
    events_d2h_rd_Aggregate_TD_10418601.resize(1);
    events_Aggregate_TD_10418601.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_10418601;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_10418601;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_335339_s, tv_r_Filter_11_335339_e;
    gettimeofday(&tv_r_Filter_11_335339_s, 0);
    SW_Filter_TD_11415172(tbl_SerializeFromObject_TD_12337282_input, tbl_Filter_TD_11415172_output);
    gettimeofday(&tv_r_Filter_11_335339_e, 0);

    struct timeval tv_r_Filter_11_677076_s, tv_r_Filter_11_677076_e;
    gettimeofday(&tv_r_Filter_11_677076_s, 0);
    SW_Filter_TD_11198664(tbl_SerializeFromObject_TD_12531289_input, tbl_Filter_TD_11198664_output);
    gettimeofday(&tv_r_Filter_11_677076_e, 0);

    struct timeval tv_r_Filter_11_301945_s, tv_r_Filter_11_301945_e;
    gettimeofday(&tv_r_Filter_11_301945_s, 0);
    SW_Filter_TD_11397913(tbl_SerializeFromObject_TD_12651205_input, tbl_Filter_TD_11397913_output);
    gettimeofday(&tv_r_Filter_11_301945_e, 0);

    struct timeval tv_r_Filter_11_896537_s, tv_r_Filter_11_896537_e;
    gettimeofday(&tv_r_Filter_11_896537_s, 0);
    SW_Filter_TD_11894274(tbl_SerializeFromObject_TD_12403901_input, tbl_Filter_TD_11894274_output);
    gettimeofday(&tv_r_Filter_11_896537_e, 0);

    struct timeval tv_r_Aggregate_10_642541_s, tv_r_Aggregate_10_642541_e;
    gettimeofday(&tv_r_Aggregate_10_642541_s, 0);
    trans_Aggregate_TD_10418601.add(&(tbl_Filter_TD_11415172_output));
    trans_Aggregate_TD_10418601.host2dev(0, &(prev_events_grp_Aggregate_TD_10418601), &(events_h2d_wr_Aggregate_TD_10418601[0]));
    events_grp_Aggregate_TD_10418601.push_back(events_h2d_wr_Aggregate_TD_10418601[0]);
    krnl_Aggregate_TD_10418601.run(0, &(events_grp_Aggregate_TD_10418601), &(events_Aggregate_TD_10418601[0]));
    
    trans_Aggregate_TD_10418601_out.add(&(tbl_Aggregate_TD_10418601_output_preprocess));
    trans_Aggregate_TD_10418601_out.dev2host(0, &(events_Aggregate_TD_10418601), &(events_d2h_rd_Aggregate_TD_10418601[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_10418601_consolidate(tbl_Aggregate_TD_10418601_output_preprocess, tbl_Aggregate_TD_10418601_output);
    gettimeofday(&tv_r_Aggregate_10_642541_e, 0);

    struct timeval tv_r_Aggregate_10_821962_s, tv_r_Aggregate_10_821962_e;
    gettimeofday(&tv_r_Aggregate_10_821962_s, 0);
    SW_Aggregate_TD_10881817(tbl_Filter_TD_11198664_output, tbl_Aggregate_TD_10881817_output);
    gettimeofday(&tv_r_Aggregate_10_821962_e, 0);

    struct timeval tv_r_Aggregate_10_17876_s, tv_r_Aggregate_10_17876_e;
    gettimeofday(&tv_r_Aggregate_10_17876_s, 0);
    trans_Aggregate_TD_10169659.add(&(tbl_Filter_TD_11397913_output));
    trans_Aggregate_TD_10169659.host2dev(0, &(prev_events_grp_Aggregate_TD_10169659), &(events_h2d_wr_Aggregate_TD_10169659[0]));
    events_grp_Aggregate_TD_10169659.push_back(events_h2d_wr_Aggregate_TD_10169659[0]);
    krnl_Aggregate_TD_10169659.run(0, &(events_grp_Aggregate_TD_10169659), &(events_Aggregate_TD_10169659[0]));
    
    trans_Aggregate_TD_10169659_out.add(&(tbl_Aggregate_TD_10169659_output_preprocess));
    trans_Aggregate_TD_10169659_out.dev2host(0, &(events_Aggregate_TD_10169659), &(events_d2h_rd_Aggregate_TD_10169659[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_10169659_consolidate(tbl_Aggregate_TD_10169659_output_preprocess, tbl_Aggregate_TD_10169659_output);
    gettimeofday(&tv_r_Aggregate_10_17876_e, 0);

    struct timeval tv_r_Aggregate_10_363392_s, tv_r_Aggregate_10_363392_e;
    gettimeofday(&tv_r_Aggregate_10_363392_s, 0);
    SW_Aggregate_TD_10258077(tbl_Filter_TD_11894274_output, tbl_Aggregate_TD_10258077_output);
    gettimeofday(&tv_r_Aggregate_10_363392_e, 0);

    struct timeval tv_r_Filter_9_687942_s, tv_r_Filter_9_687942_e;
    gettimeofday(&tv_r_Filter_9_687942_s, 0);
    SW_Filter_TD_9311402(tbl_Aggregate_TD_10881817_output, tbl_Aggregate_TD_10418601_output, tbl_Filter_TD_9311402_output);
    gettimeofday(&tv_r_Filter_9_687942_e, 0);

    struct timeval tv_r_Filter_9_682423_s, tv_r_Filter_9_682423_e;
    gettimeofday(&tv_r_Filter_9_682423_s, 0);
    SW_Filter_TD_9256529(tbl_Aggregate_TD_10258077_output, tbl_Aggregate_TD_10169659_output, tbl_Filter_TD_9256529_output);
    gettimeofday(&tv_r_Filter_9_682423_e, 0);

    struct timeval tv_r_Window_8_231554_s, tv_r_Window_8_231554_e;
    gettimeofday(&tv_r_Window_8_231554_s, 0);
    SW_Window_TD_8623966(tbl_Filter_TD_9311402_output, tbl_Window_TD_8623966_output);
    gettimeofday(&tv_r_Window_8_231554_e, 0);

    struct timeval tv_r_Window_8_363335_s, tv_r_Window_8_363335_e;
    gettimeofday(&tv_r_Window_8_363335_s, 0);
    SW_Window_TD_8245318(tbl_Filter_TD_9256529_output, tbl_Window_TD_8245318_output);
    gettimeofday(&tv_r_Window_8_363335_e, 0);

    struct timeval tv_r_Filter_7_162542_s, tv_r_Filter_7_162542_e;
    gettimeofday(&tv_r_Filter_7_162542_s, 0);
    SW_Filter_TD_7606358(tbl_Window_TD_8623966_output, tbl_Filter_TD_7606358_output);
    gettimeofday(&tv_r_Filter_7_162542_e, 0);

    struct timeval tv_r_Filter_7_839051_s, tv_r_Filter_7_839051_e;
    gettimeofday(&tv_r_Filter_7_839051_s, 0);
    SW_Filter_TD_7862837(tbl_Window_TD_8245318_output, tbl_Filter_TD_7862837_output);
    gettimeofday(&tv_r_Filter_7_839051_e, 0);

    struct timeval tv_r_Filter_6_861181_s, tv_r_Filter_6_861181_e;
    gettimeofday(&tv_r_Filter_6_861181_s, 0);
    SW_Filter_TD_6626003(tbl_SerializeFromObject_TD_7985453_input, tbl_Filter_TD_6626003_output);
    gettimeofday(&tv_r_Filter_6_861181_e, 0);

    struct timeval tv_r_JOIN_INNER_6_104235_s, tv_r_JOIN_INNER_6_104235_e;
    gettimeofday(&tv_r_JOIN_INNER_6_104235_s, 0);
    trans_JOIN_INNER_TD_6478433.add(&(tbl_Filter_TD_7862837_output));
    trans_JOIN_INNER_TD_6478433.add(&(tbl_Filter_TD_7606358_output));
    trans_JOIN_INNER_TD_6478433.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6478433), &(events_h2d_wr_JOIN_INNER_TD_6478433[0]));
    events_grp_JOIN_INNER_TD_6478433.push_back(events_h2d_wr_JOIN_INNER_TD_6478433[0]);
    krnl_JOIN_INNER_TD_6478433.run(0, &(events_grp_JOIN_INNER_TD_6478433), &(events_JOIN_INNER_TD_6478433[0]));
    
    trans_JOIN_INNER_TD_6478433_out.add(&(tbl_JOIN_INNER_TD_6478433_output));
    trans_JOIN_INNER_TD_6478433_out.dev2host(0, &(events_JOIN_INNER_TD_6478433), &(events_d2h_rd_JOIN_INNER_TD_6478433[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_104235_e, 0);

    struct timeval tv_r_Filter_5_871843_s, tv_r_Filter_5_871843_e;
    gettimeofday(&tv_r_Filter_5_871843_s, 0);
    SW_Filter_TD_5581896(tbl_SerializeFromObject_TD_6718070_input, tbl_Filter_TD_5581896_output);
    gettimeofday(&tv_r_Filter_5_871843_e, 0);

    struct timeval tv_r_JOIN_INNER_5_866207_s, tv_r_JOIN_INNER_5_866207_e;
    gettimeofday(&tv_r_JOIN_INNER_5_866207_s, 0);
    SW_JOIN_INNER_TD_5902447(tbl_JOIN_INNER_TD_6478433_output, tbl_Filter_TD_6626003_output, tbl_JOIN_INNER_TD_5902447_output);
    gettimeofday(&tv_r_JOIN_INNER_5_866207_e, 0);

    struct timeval tv_r_JOIN_INNER_4_85391_s, tv_r_JOIN_INNER_4_85391_e;
    gettimeofday(&tv_r_JOIN_INNER_4_85391_s, 0);
    SW_JOIN_INNER_TD_4435382(tbl_JOIN_INNER_TD_5902447_output, tbl_Filter_TD_5581896_output, tbl_JOIN_INNER_TD_4435382_output);
    gettimeofday(&tv_r_JOIN_INNER_4_85391_e, 0);

    struct timeval tv_r_Project_3_797282_s, tv_r_Project_3_797282_e;
    gettimeofday(&tv_r_Project_3_797282_s, 0);
    SW_Project_TD_3292213(tbl_JOIN_INNER_TD_4435382_output, tbl_Project_TD_3292213_output);
    gettimeofday(&tv_r_Project_3_797282_e, 0);

    struct timeval tv_r_Sort_2_660002_s, tv_r_Sort_2_660002_e;
    gettimeofday(&tv_r_Sort_2_660002_s, 0);
    SW_Sort_TD_2208247(tbl_Project_TD_3292213_output, tbl_Sort_TD_2208247_output);
    gettimeofday(&tv_r_Sort_2_660002_e, 0);

    struct timeval tv_r_LocalLimit_1_537248_s, tv_r_LocalLimit_1_537248_e;
    gettimeofday(&tv_r_LocalLimit_1_537248_s, 0);
    SW_LocalLimit_TD_178366(tbl_Sort_TD_2208247_output, tbl_LocalLimit_TD_178366_output);
    gettimeofday(&tv_r_LocalLimit_1_537248_e, 0);

    struct timeval tv_r_GlobalLimit_0_417814_s, tv_r_GlobalLimit_0_417814_e;
    gettimeofday(&tv_r_GlobalLimit_0_417814_s, 0);
    SW_GlobalLimit_TD_0500080(tbl_LocalLimit_TD_178366_output, tbl_GlobalLimit_TD_0500080_output);
    gettimeofday(&tv_r_GlobalLimit_0_417814_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_335339_s, &tv_r_Filter_11_335339_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12337282_input: " << tbl_SerializeFromObject_TD_12337282_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_677076_s, &tv_r_Filter_11_677076_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12531289_input: " << tbl_SerializeFromObject_TD_12531289_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_301945_s, &tv_r_Filter_11_301945_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12651205_input: " << tbl_SerializeFromObject_TD_12651205_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_896537_s, &tv_r_Filter_11_896537_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12403901_input: " << tbl_SerializeFromObject_TD_12403901_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_642541_s, &tv_r_Aggregate_10_642541_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11415172_output: " << tbl_Filter_TD_11415172_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_821962_s, &tv_r_Aggregate_10_821962_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11198664_output: " << tbl_Filter_TD_11198664_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_17876_s, &tv_r_Aggregate_10_17876_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11397913_output: " << tbl_Filter_TD_11397913_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_363392_s, &tv_r_Aggregate_10_363392_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11894274_output: " << tbl_Filter_TD_11894274_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_687942_s, &tv_r_Filter_9_687942_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10881817_output: " << tbl_Aggregate_TD_10881817_output.getNumRow() << " " << "tbl_Aggregate_TD_10418601_output: " << tbl_Aggregate_TD_10418601_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_682423_s, &tv_r_Filter_9_682423_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10258077_output: " << tbl_Aggregate_TD_10258077_output.getNumRow() << " " << "tbl_Aggregate_TD_10169659_output: " << tbl_Aggregate_TD_10169659_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_231554_s, &tv_r_Window_8_231554_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9311402_output: " << tbl_Filter_TD_9311402_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_8: " << tvdiff(&tv_r_Window_8_363335_s, &tv_r_Window_8_363335_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9256529_output: " << tbl_Filter_TD_9256529_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_162542_s, &tv_r_Filter_7_162542_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8623966_output: " << tbl_Window_TD_8623966_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_839051_s, &tv_r_Filter_7_839051_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_8245318_output: " << tbl_Window_TD_8245318_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_861181_s, &tv_r_Filter_6_861181_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7985453_input: " << tbl_SerializeFromObject_TD_7985453_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_104235_s, &tv_r_JOIN_INNER_6_104235_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7862837_output: " << tbl_Filter_TD_7862837_output.getNumRow() << " " << "tbl_Filter_TD_7606358_output: " << tbl_Filter_TD_7606358_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_871843_s, &tv_r_Filter_5_871843_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6718070_input: " << tbl_SerializeFromObject_TD_6718070_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_866207_s, &tv_r_JOIN_INNER_5_866207_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6478433_output: " << tbl_JOIN_INNER_TD_6478433_output.getNumRow() << " " << "tbl_Filter_TD_6626003_output: " << tbl_Filter_TD_6626003_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_85391_s, &tv_r_JOIN_INNER_4_85391_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5902447_output: " << tbl_JOIN_INNER_TD_5902447_output.getNumRow() << " " << "tbl_Filter_TD_5581896_output: " << tbl_Filter_TD_5581896_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_797282_s, &tv_r_Project_3_797282_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4435382_output: " << tbl_JOIN_INNER_TD_4435382_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_660002_s, &tv_r_Sort_2_660002_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3292213_output: " << tbl_Project_TD_3292213_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_537248_s, &tv_r_LocalLimit_1_537248_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2208247_output: " << tbl_Sort_TD_2208247_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_417814_s, &tv_r_GlobalLimit_0_417814_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_178366_output: " << tbl_LocalLimit_TD_178366_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.8891585 * 1000 << "ms" << std::endl; 
    return 0; 
}
