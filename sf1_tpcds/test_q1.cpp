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

#include "cfgFunc_q1.hpp" 
#include "q1.hpp" 

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
    std::cout << "NOTE:running query #1\n."; 
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
    Table tbl_Sort_TD_094940_output("tbl_Sort_TD_094940_output", 6100000, 2, "");
    tbl_Sort_TD_094940_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1612168_output("tbl_JOIN_INNER_TD_1612168_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_1612168_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2967788_output("tbl_JOIN_INNER_TD_2967788_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_2967788_output.allocateHost();
    Table tbl_Filter_TD_2706855_output("tbl_Filter_TD_2706855_output", 6100000, 2, "");
    tbl_Filter_TD_2706855_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3724153_output("tbl_JOIN_INNER_TD_3724153_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_3724153_output.allocateHost();
    Table tbl_Filter_TD_3216487_output("tbl_Filter_TD_3216487_output", 6100000, 1, "");
    tbl_Filter_TD_3216487_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3865909_input;
    tbl_SerializeFromObject_TD_3865909_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3865909_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_3865909_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3865909_input.allocateHost();
    tbl_SerializeFromObject_TD_3865909_input.loadHost();
    Table tbl_Filter_TD_4612575_output("tbl_Filter_TD_4612575_output", 6100000, 3, "");
    tbl_Filter_TD_4612575_output.allocateHost();
    Table tbl_Filter_TD_4205750_output("tbl_Filter_TD_4205750_output", 6100000, 2, "");
    tbl_Filter_TD_4205750_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4923902_input;
    tbl_SerializeFromObject_TD_4923902_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4923902_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_4923902_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4923902_input.allocateHost();
    tbl_SerializeFromObject_TD_4923902_input.loadHost();
    Table tbl_Aggregate_TD_5937105_output("tbl_Aggregate_TD_5937105_output", 6100000, 3, "");
    tbl_Aggregate_TD_5937105_output.allocateHost();
    Table tbl_Aggregate_TD_5780793_output("tbl_Aggregate_TD_5780793_output", 6100000, 2, "");
    tbl_Aggregate_TD_5780793_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6603351_output("tbl_JOIN_INNER_TD_6603351_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6603351_output.allocateHost();
    Table tbl_Aggregate_TD_6926243_output("tbl_Aggregate_TD_6926243_output", 6100000, 2, "");
    tbl_Aggregate_TD_6926243_output.allocateHost();
    Table tbl_Filter_TD_7821822_output("tbl_Filter_TD_7821822_output", 6100000, 4, "");
    tbl_Filter_TD_7821822_output.allocateHost();
    Table tbl_Filter_TD_7580220_output("tbl_Filter_TD_7580220_output", 6100000, 1, "");
    tbl_Filter_TD_7580220_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7631224_output("tbl_JOIN_INNER_TD_7631224_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_7631224_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8533603_input;
    tbl_SerializeFromObject_TD_8533603_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8533603_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_8533603_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_8533603_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_8533603_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_8533603_input.allocateHost();
    tbl_SerializeFromObject_TD_8533603_input.loadHost();
    Table tbl_SerializeFromObject_TD_8246053_input;
    tbl_SerializeFromObject_TD_8246053_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8246053_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8246053_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8246053_input.allocateHost();
    tbl_SerializeFromObject_TD_8246053_input.loadHost();
    Table tbl_Filter_TD_845901_output("tbl_Filter_TD_845901_output", 6100000, 4, "");
    tbl_Filter_TD_845901_output.allocateHost();
    Table tbl_Filter_TD_8269745_output("tbl_Filter_TD_8269745_output", 6100000, 1, "");
    tbl_Filter_TD_8269745_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9239327_input;
    tbl_SerializeFromObject_TD_9239327_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9239327_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_9239327_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_9239327_input.addCol("sr_store_sk", 4);
    tbl_SerializeFromObject_TD_9239327_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_9239327_input.allocateHost();
    tbl_SerializeFromObject_TD_9239327_input.loadHost();
    Table tbl_SerializeFromObject_TD_9666560_input;
    tbl_SerializeFromObject_TD_9666560_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9666560_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9666560_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9666560_input.allocateHost();
    tbl_SerializeFromObject_TD_9666560_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2967788_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3724153_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3216487_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4612575_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4205750_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6603351_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7821822_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7580220_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7631224_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_845901_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8269745_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2967788_cmds;
    cfg_JOIN_INNER_TD_2967788_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2967788_gqe_join (cfg_JOIN_INNER_TD_2967788_cmds.cmd);
    cfg_JOIN_INNER_TD_2967788_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3724153_cmds;
    cfg_JOIN_INNER_TD_3724153_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3724153_gqe_join (cfg_JOIN_INNER_TD_3724153_cmds.cmd);
    cfg_JOIN_INNER_TD_3724153_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6603351_cmds;
    cfg_JOIN_INNER_TD_6603351_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6603351_gqe_join (cfg_JOIN_INNER_TD_6603351_cmds.cmd);
    cfg_JOIN_INNER_TD_6603351_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7631224_cmds;
    cfg_JOIN_INNER_TD_7631224_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7631224_gqe_join (cfg_JOIN_INNER_TD_7631224_cmds.cmd);
    cfg_JOIN_INNER_TD_7631224_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2967788;
    krnl_JOIN_INNER_TD_2967788 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2967788.setup(tbl_JOIN_INNER_TD_3724153_output, tbl_Filter_TD_3216487_output, tbl_JOIN_INNER_TD_2967788_output, cfg_JOIN_INNER_TD_2967788_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3724153;
    krnl_JOIN_INNER_TD_3724153 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3724153.setup(tbl_Filter_TD_4612575_output, tbl_Filter_TD_4205750_output, tbl_JOIN_INNER_TD_3724153_output, cfg_JOIN_INNER_TD_3724153_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6603351;
    krnl_JOIN_INNER_TD_6603351 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6603351.setup(tbl_Filter_TD_7821822_output, tbl_Filter_TD_7580220_output, tbl_JOIN_INNER_TD_6603351_output, cfg_JOIN_INNER_TD_6603351_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7631224;
    krnl_JOIN_INNER_TD_7631224 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7631224.setup(tbl_Filter_TD_845901_output, tbl_Filter_TD_8269745_output, tbl_JOIN_INNER_TD_7631224_output, cfg_JOIN_INNER_TD_7631224_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2967788;
    trans_JOIN_INNER_TD_2967788.setq(q_h);
    trans_JOIN_INNER_TD_2967788.add(&(cfg_JOIN_INNER_TD_2967788_cmds));
    transEngine trans_JOIN_INNER_TD_2967788_out;
    trans_JOIN_INNER_TD_2967788_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3724153;
    trans_JOIN_INNER_TD_3724153.setq(q_h);
    trans_JOIN_INNER_TD_3724153.add(&(cfg_JOIN_INNER_TD_3724153_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6603351;
    trans_JOIN_INNER_TD_6603351.setq(q_h);
    trans_JOIN_INNER_TD_6603351.add(&(cfg_JOIN_INNER_TD_6603351_cmds));
    transEngine trans_JOIN_INNER_TD_6603351_out;
    trans_JOIN_INNER_TD_6603351_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7631224;
    trans_JOIN_INNER_TD_7631224.setq(q_h);
    trans_JOIN_INNER_TD_7631224.add(&(cfg_JOIN_INNER_TD_7631224_cmds));
    transEngine trans_JOIN_INNER_TD_7631224_out;
    trans_JOIN_INNER_TD_7631224_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2967788;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2967788;
    std::vector<cl::Event> events_JOIN_INNER_TD_2967788;
    events_h2d_wr_JOIN_INNER_TD_2967788.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2967788.resize(1);
    events_JOIN_INNER_TD_2967788.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2967788;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2967788;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3724153;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3724153;
    std::vector<cl::Event> events_JOIN_INNER_TD_3724153;
    events_h2d_wr_JOIN_INNER_TD_3724153.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3724153.resize(1);
    events_JOIN_INNER_TD_3724153.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3724153;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3724153;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6603351;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6603351;
    std::vector<cl::Event> events_JOIN_INNER_TD_6603351;
    events_h2d_wr_JOIN_INNER_TD_6603351.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6603351.resize(1);
    events_JOIN_INNER_TD_6603351.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6603351;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6603351;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7631224;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7631224;
    std::vector<cl::Event> events_JOIN_INNER_TD_7631224;
    events_h2d_wr_JOIN_INNER_TD_7631224.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7631224.resize(1);
    events_JOIN_INNER_TD_7631224.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7631224;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7631224;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_749704_s, tv_r_Filter_8_749704_e;
    gettimeofday(&tv_r_Filter_8_749704_s, 0);
    SW_Filter_TD_8269745(tbl_SerializeFromObject_TD_9666560_input, tbl_Filter_TD_8269745_output);
    gettimeofday(&tv_r_Filter_8_749704_e, 0);

    struct timeval tv_r_Filter_8_456127_s, tv_r_Filter_8_456127_e;
    gettimeofday(&tv_r_Filter_8_456127_s, 0);
    SW_Filter_TD_845901(tbl_SerializeFromObject_TD_9239327_input, tbl_Filter_TD_845901_output);
    gettimeofday(&tv_r_Filter_8_456127_e, 0);

    struct timeval tv_r_JOIN_INNER_7_406557_s, tv_r_JOIN_INNER_7_406557_e;
    gettimeofday(&tv_r_JOIN_INNER_7_406557_s, 0);
    trans_JOIN_INNER_TD_7631224.add(&(tbl_Filter_TD_845901_output));
    trans_JOIN_INNER_TD_7631224.add(&(tbl_Filter_TD_8269745_output));
    trans_JOIN_INNER_TD_7631224.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7631224), &(events_h2d_wr_JOIN_INNER_TD_7631224[0]));
    events_grp_JOIN_INNER_TD_7631224.push_back(events_h2d_wr_JOIN_INNER_TD_7631224[0]);
    krnl_JOIN_INNER_TD_7631224.run(0, &(events_grp_JOIN_INNER_TD_7631224), &(events_JOIN_INNER_TD_7631224[0]));
    
    trans_JOIN_INNER_TD_7631224_out.add(&(tbl_JOIN_INNER_TD_7631224_output));
    trans_JOIN_INNER_TD_7631224_out.dev2host(0, &(events_JOIN_INNER_TD_7631224), &(events_d2h_rd_JOIN_INNER_TD_7631224[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_406557_e, 0);

    struct timeval tv_r_Filter_7_984226_s, tv_r_Filter_7_984226_e;
    gettimeofday(&tv_r_Filter_7_984226_s, 0);
    SW_Filter_TD_7580220(tbl_SerializeFromObject_TD_8246053_input, tbl_Filter_TD_7580220_output);
    gettimeofday(&tv_r_Filter_7_984226_e, 0);

    struct timeval tv_r_Filter_7_904724_s, tv_r_Filter_7_904724_e;
    gettimeofday(&tv_r_Filter_7_904724_s, 0);
    SW_Filter_TD_7821822(tbl_SerializeFromObject_TD_8533603_input, tbl_Filter_TD_7821822_output);
    gettimeofday(&tv_r_Filter_7_904724_e, 0);

    struct timeval tv_r_Aggregate_6_724960_s, tv_r_Aggregate_6_724960_e;
    gettimeofday(&tv_r_Aggregate_6_724960_s, 0);
    SW_Aggregate_TD_6926243(tbl_JOIN_INNER_TD_7631224_output, tbl_Aggregate_TD_6926243_output);
    gettimeofday(&tv_r_Aggregate_6_724960_e, 0);

    struct timeval tv_r_JOIN_INNER_6_683258_s, tv_r_JOIN_INNER_6_683258_e;
    gettimeofday(&tv_r_JOIN_INNER_6_683258_s, 0);
    trans_JOIN_INNER_TD_6603351.add(&(tbl_Filter_TD_7821822_output));
    trans_JOIN_INNER_TD_6603351.add(&(tbl_Filter_TD_7580220_output));
    trans_JOIN_INNER_TD_6603351.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6603351), &(events_h2d_wr_JOIN_INNER_TD_6603351[0]));
    events_grp_JOIN_INNER_TD_6603351.push_back(events_h2d_wr_JOIN_INNER_TD_6603351[0]);
    krnl_JOIN_INNER_TD_6603351.run(0, &(events_grp_JOIN_INNER_TD_6603351), &(events_JOIN_INNER_TD_6603351[0]));
    
    trans_JOIN_INNER_TD_6603351_out.add(&(tbl_JOIN_INNER_TD_6603351_output));
    trans_JOIN_INNER_TD_6603351_out.dev2host(0, &(events_JOIN_INNER_TD_6603351), &(events_d2h_rd_JOIN_INNER_TD_6603351[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_683258_e, 0);

    struct timeval tv_r_Aggregate_5_464728_s, tv_r_Aggregate_5_464728_e;
    gettimeofday(&tv_r_Aggregate_5_464728_s, 0);
    SW_Aggregate_TD_5780793(tbl_Aggregate_TD_6926243_output, tbl_Aggregate_TD_5780793_output);
    gettimeofday(&tv_r_Aggregate_5_464728_e, 0);

    struct timeval tv_r_Aggregate_5_950245_s, tv_r_Aggregate_5_950245_e;
    gettimeofday(&tv_r_Aggregate_5_950245_s, 0);
    SW_Aggregate_TD_5937105(tbl_JOIN_INNER_TD_6603351_output, tbl_Aggregate_TD_5937105_output);
    gettimeofday(&tv_r_Aggregate_5_950245_e, 0);

    struct timeval tv_r_Filter_4_680530_s, tv_r_Filter_4_680530_e;
    gettimeofday(&tv_r_Filter_4_680530_s, 0);
    SW_Filter_TD_4205750(tbl_Aggregate_TD_5780793_output, tbl_Filter_TD_4205750_output);
    gettimeofday(&tv_r_Filter_4_680530_e, 0);

    struct timeval tv_r_Filter_4_133053_s, tv_r_Filter_4_133053_e;
    gettimeofday(&tv_r_Filter_4_133053_s, 0);
    SW_Filter_TD_4612575(tbl_Aggregate_TD_5937105_output, tbl_Filter_TD_4612575_output);
    gettimeofday(&tv_r_Filter_4_133053_e, 0);

    struct timeval tv_r_Filter_3_147491_s, tv_r_Filter_3_147491_e;
    gettimeofday(&tv_r_Filter_3_147491_s, 0);
    SW_Filter_TD_3216487(tbl_SerializeFromObject_TD_4923902_input, tbl_Filter_TD_3216487_output);
    gettimeofday(&tv_r_Filter_3_147491_e, 0);

    struct timeval tv_r_JOIN_INNER_3_615478_s, tv_r_JOIN_INNER_3_615478_e;
    gettimeofday(&tv_r_JOIN_INNER_3_615478_s, 0);
    trans_JOIN_INNER_TD_3724153.add(&(tbl_Filter_TD_4612575_output));
    trans_JOIN_INNER_TD_3724153.add(&(tbl_Filter_TD_4205750_output));
    trans_JOIN_INNER_TD_3724153.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3724153), &(events_h2d_wr_JOIN_INNER_TD_3724153[0]));
    events_grp_JOIN_INNER_TD_3724153.push_back(events_h2d_wr_JOIN_INNER_TD_3724153[0]);
    krnl_JOIN_INNER_TD_3724153.run(0, &(events_grp_JOIN_INNER_TD_3724153), &(events_JOIN_INNER_TD_3724153[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_615478_e, 0);

    struct timeval tv_r_Filter_2_674791_s, tv_r_Filter_2_674791_e;
    gettimeofday(&tv_r_Filter_2_674791_s, 0);
    SW_Filter_TD_2706855(tbl_SerializeFromObject_TD_3865909_input, tbl_Filter_TD_2706855_output);
    gettimeofday(&tv_r_Filter_2_674791_e, 0);

    struct timeval tv_r_JOIN_INNER_2_885467_s, tv_r_JOIN_INNER_2_885467_e;
    gettimeofday(&tv_r_JOIN_INNER_2_885467_s, 0);
    prev_events_grp_JOIN_INNER_TD_2967788.push_back(events_h2d_wr_JOIN_INNER_TD_3724153[0]);
    trans_JOIN_INNER_TD_2967788.add(&(tbl_Filter_TD_3216487_output));
    trans_JOIN_INNER_TD_2967788.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2967788), &(events_h2d_wr_JOIN_INNER_TD_2967788[0]));
    events_grp_JOIN_INNER_TD_2967788.push_back(events_h2d_wr_JOIN_INNER_TD_2967788[0]);
    events_grp_JOIN_INNER_TD_2967788.push_back(events_JOIN_INNER_TD_3724153[0]);
    krnl_JOIN_INNER_TD_2967788.run(0, &(events_grp_JOIN_INNER_TD_2967788), &(events_JOIN_INNER_TD_2967788[0]));
    
    trans_JOIN_INNER_TD_2967788_out.add(&(tbl_JOIN_INNER_TD_2967788_output));
    trans_JOIN_INNER_TD_2967788_out.dev2host(0, &(events_JOIN_INNER_TD_2967788), &(events_d2h_rd_JOIN_INNER_TD_2967788[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_885467_e, 0);

    struct timeval tv_r_JOIN_INNER_1_261209_s, tv_r_JOIN_INNER_1_261209_e;
    gettimeofday(&tv_r_JOIN_INNER_1_261209_s, 0);
    SW_JOIN_INNER_TD_1612168(tbl_JOIN_INNER_TD_2967788_output, tbl_Filter_TD_2706855_output, tbl_JOIN_INNER_TD_1612168_output);
    gettimeofday(&tv_r_JOIN_INNER_1_261209_e, 0);

    struct timeval tv_r_Sort_0_755341_s, tv_r_Sort_0_755341_e;
    gettimeofday(&tv_r_Sort_0_755341_s, 0);
    SW_Sort_TD_094940(tbl_JOIN_INNER_TD_1612168_output, tbl_Sort_TD_094940_output);
    gettimeofday(&tv_r_Sort_0_755341_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_749704_s, &tv_r_Filter_8_749704_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9666560_input: " << tbl_SerializeFromObject_TD_9666560_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_456127_s, &tv_r_Filter_8_456127_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9239327_input: " << tbl_SerializeFromObject_TD_9239327_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_406557_s, &tv_r_JOIN_INNER_7_406557_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_845901_output: " << tbl_Filter_TD_845901_output.getNumRow() << " " << "tbl_Filter_TD_8269745_output: " << tbl_Filter_TD_8269745_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_984226_s, &tv_r_Filter_7_984226_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8246053_input: " << tbl_SerializeFromObject_TD_8246053_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_904724_s, &tv_r_Filter_7_904724_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8533603_input: " << tbl_SerializeFromObject_TD_8533603_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_724960_s, &tv_r_Aggregate_6_724960_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7631224_output: " << tbl_JOIN_INNER_TD_7631224_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_683258_s, &tv_r_JOIN_INNER_6_683258_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7821822_output: " << tbl_Filter_TD_7821822_output.getNumRow() << " " << "tbl_Filter_TD_7580220_output: " << tbl_Filter_TD_7580220_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_464728_s, &tv_r_Aggregate_5_464728_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6926243_output: " << tbl_Aggregate_TD_6926243_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_950245_s, &tv_r_Aggregate_5_950245_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6603351_output: " << tbl_JOIN_INNER_TD_6603351_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_680530_s, &tv_r_Filter_4_680530_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5780793_output: " << tbl_Aggregate_TD_5780793_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_133053_s, &tv_r_Filter_4_133053_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5937105_output: " << tbl_Aggregate_TD_5937105_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_147491_s, &tv_r_Filter_3_147491_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4923902_input: " << tbl_SerializeFromObject_TD_4923902_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_615478_s, &tv_r_JOIN_INNER_3_615478_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4612575_output: " << tbl_Filter_TD_4612575_output.getNumRow() << " " << "tbl_Filter_TD_4205750_output: " << tbl_Filter_TD_4205750_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_674791_s, &tv_r_Filter_2_674791_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3865909_input: " << tbl_SerializeFromObject_TD_3865909_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_885467_s, &tv_r_JOIN_INNER_2_885467_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3724153_output: " << tbl_JOIN_INNER_TD_3724153_output.getNumRow() << " " << "tbl_Filter_TD_3216487_output: " << tbl_Filter_TD_3216487_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_261209_s, &tv_r_JOIN_INNER_1_261209_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2967788_output: " << tbl_JOIN_INNER_TD_2967788_output.getNumRow() << " " << "tbl_Filter_TD_2706855_output: " << tbl_Filter_TD_2706855_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_755341_s, &tv_r_Sort_0_755341_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1612168_output: " << tbl_JOIN_INNER_TD_1612168_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.5660162 * 1000 << "ms" << std::endl; 
    return 0; 
}
