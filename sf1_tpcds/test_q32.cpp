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

#include "cfgFunc_q32.hpp" 
#include "q32.hpp" 

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
    std::cout << "NOTE:running query #32\n."; 
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
    Table tbl_Aggregate_TD_0765850_output("tbl_Aggregate_TD_0765850_output", 6100000, 1, "");
    tbl_Aggregate_TD_0765850_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1827937_output("tbl_JOIN_INNER_TD_1827937_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_1827937_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2726088_output("tbl_JOIN_INNER_TD_2726088_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_2726088_output.allocateHost();
    Table tbl_Filter_TD_2939423_output("tbl_Filter_TD_2939423_output", 6100000, 1, "");
    tbl_Filter_TD_2939423_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3140259_output("tbl_JOIN_INNER_TD_3140259_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_3140259_output.allocateHost();
    Table tbl_Filter_TD_3330637_output("tbl_Filter_TD_3330637_output", 6100000, 2, "");
    tbl_Filter_TD_3330637_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3465600_input;
    tbl_SerializeFromObject_TD_3465600_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3465600_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_3465600_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_3465600_input.allocateHost();
    tbl_SerializeFromObject_TD_3465600_input.loadHost();
    Table tbl_Filter_TD_4366841_output("tbl_Filter_TD_4366841_output", 6100000, 3, "");
    tbl_Filter_TD_4366841_output.allocateHost();
    Table tbl_Filter_TD_4453363_output("tbl_Filter_TD_4453363_output", 6100000, 1, "");
    tbl_Filter_TD_4453363_output.allocateHost();
    Table tbl_Aggregate_TD_4377090_output_preprocess("tbl_Aggregate_TD_4377090_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_4377090_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_4377090_output("tbl_Aggregate_TD_4377090_output", 6100000, 2, "");
    tbl_Aggregate_TD_4377090_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5569911_input;
    tbl_SerializeFromObject_TD_5569911_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5569911_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5569911_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_5569911_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_5569911_input.allocateHost();
    tbl_SerializeFromObject_TD_5569911_input.loadHost();
    Table tbl_SerializeFromObject_TD_5635140_input;
    tbl_SerializeFromObject_TD_5635140_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5635140_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_5635140_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_5635140_input.allocateHost();
    tbl_SerializeFromObject_TD_5635140_input.loadHost();
    Table tbl_JOIN_INNER_TD_5686169_output_preprocess("tbl_JOIN_INNER_TD_5686169_output_preprocess", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5686169_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_5686169_output("tbl_JOIN_INNER_TD_5686169_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5686169_output.allocateHost();
    Table tbl_Filter_TD_6755408_output("tbl_Filter_TD_6755408_output", 6100000, 3, "");
    tbl_Filter_TD_6755408_output.allocateHost();
    Table tbl_Filter_TD_6941389_output("tbl_Filter_TD_6941389_output", 6100000, 1, "");
    tbl_Filter_TD_6941389_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7873326_input;
    tbl_SerializeFromObject_TD_7873326_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7873326_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7873326_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_7873326_input.addCol("cs_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_7873326_input.allocateHost();
    tbl_SerializeFromObject_TD_7873326_input.loadHost();
    Table tbl_SerializeFromObject_TD_7222617_input;
    tbl_SerializeFromObject_TD_7222617_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7222617_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7222617_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7222617_input.allocateHost();
    tbl_SerializeFromObject_TD_7222617_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_1827937_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_2726088_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_2939423_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3140259_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3330637_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4366841_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4453363_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5686169_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_4377090_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_5686169_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6755408_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6941389_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_1827937_cmds;
    cfg_JOIN_INNER_TD_1827937_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1827937_gqe_join (cfg_JOIN_INNER_TD_1827937_cmds.cmd);
    cfg_JOIN_INNER_TD_1827937_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_2726088_cmds;
    cfg_JOIN_INNER_TD_2726088_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2726088_gqe_join (cfg_JOIN_INNER_TD_2726088_cmds.cmd);
    cfg_JOIN_INNER_TD_2726088_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3140259_cmds;
    cfg_JOIN_INNER_TD_3140259_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3140259_gqe_join (cfg_JOIN_INNER_TD_3140259_cmds.cmd);
    cfg_JOIN_INNER_TD_3140259_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_4377090_cmds;
    cfg_Aggregate_TD_4377090_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_4377090_gqe_aggr(cfg_Aggregate_TD_4377090_cmds.cmd);
    cfg_Aggregate_TD_4377090_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_4377090_cmds_out;
    cfg_Aggregate_TD_4377090_cmds_out.allocateHost();
    cfg_Aggregate_TD_4377090_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_5686169_cmds;
    cfg_JOIN_INNER_TD_5686169_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5686169_gqe_join (cfg_JOIN_INNER_TD_5686169_cmds.cmd);
    cfg_JOIN_INNER_TD_5686169_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_1827937;
    krnl_JOIN_INNER_TD_1827937 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1827937.setup(tbl_JOIN_INNER_TD_2726088_output, tbl_Filter_TD_2939423_output, tbl_JOIN_INNER_TD_1827937_output, cfg_JOIN_INNER_TD_1827937_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_2726088;
    krnl_JOIN_INNER_TD_2726088 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2726088.setup(tbl_JOIN_INNER_TD_3140259_output, tbl_Filter_TD_3330637_output, tbl_JOIN_INNER_TD_2726088_output, cfg_JOIN_INNER_TD_2726088_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3140259;
    krnl_JOIN_INNER_TD_3140259 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3140259.setup(tbl_Filter_TD_4366841_output, tbl_Filter_TD_4453363_output, tbl_JOIN_INNER_TD_3140259_output, cfg_JOIN_INNER_TD_3140259_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_4377090;
    krnl_Aggregate_TD_4377090 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_4377090.setup(tbl_JOIN_INNER_TD_5686169_output, tbl_Aggregate_TD_4377090_output_preprocess, cfg_Aggregate_TD_4377090_cmds, cfg_Aggregate_TD_4377090_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_5686169;
    krnl_JOIN_INNER_TD_5686169 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5686169.setup(tbl_Filter_TD_6755408_output, tbl_Filter_TD_6941389_output, tbl_JOIN_INNER_TD_5686169_output_preprocess, cfg_JOIN_INNER_TD_5686169_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_1827937;
    trans_JOIN_INNER_TD_1827937.setq(q_h);
    trans_JOIN_INNER_TD_1827937.add(&(cfg_JOIN_INNER_TD_1827937_cmds));
    transEngine trans_JOIN_INNER_TD_1827937_out;
    trans_JOIN_INNER_TD_1827937_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_2726088;
    trans_JOIN_INNER_TD_2726088.setq(q_h);
    trans_JOIN_INNER_TD_2726088.add(&(cfg_JOIN_INNER_TD_2726088_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3140259;
    trans_JOIN_INNER_TD_3140259.setq(q_h);
    trans_JOIN_INNER_TD_3140259.add(&(cfg_JOIN_INNER_TD_3140259_cmds));
    q_h.finish();
    transEngine trans_Aggregate_TD_4377090;
    trans_Aggregate_TD_4377090.setq(q_a);
    trans_Aggregate_TD_4377090.add(&(cfg_Aggregate_TD_4377090_cmds));
    transEngine trans_Aggregate_TD_4377090_out;
    trans_Aggregate_TD_4377090_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_5686169;
    trans_JOIN_INNER_TD_5686169.setq(q_h);
    trans_JOIN_INNER_TD_5686169.add(&(cfg_JOIN_INNER_TD_5686169_cmds));
    transEngine trans_JOIN_INNER_TD_5686169_out;
    trans_JOIN_INNER_TD_5686169_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1827937;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1827937;
    std::vector<cl::Event> events_JOIN_INNER_TD_1827937;
    events_h2d_wr_JOIN_INNER_TD_1827937.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1827937.resize(1);
    events_JOIN_INNER_TD_1827937.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1827937;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1827937;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2726088;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2726088;
    std::vector<cl::Event> events_JOIN_INNER_TD_2726088;
    events_h2d_wr_JOIN_INNER_TD_2726088.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2726088.resize(1);
    events_JOIN_INNER_TD_2726088.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2726088;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2726088;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3140259;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3140259;
    std::vector<cl::Event> events_JOIN_INNER_TD_3140259;
    events_h2d_wr_JOIN_INNER_TD_3140259.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3140259.resize(1);
    events_JOIN_INNER_TD_3140259.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3140259;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3140259;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_4377090;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_4377090;
    std::vector<cl::Event> events_Aggregate_TD_4377090;
    events_h2d_wr_Aggregate_TD_4377090.resize(1);
    events_d2h_rd_Aggregate_TD_4377090.resize(1);
    events_Aggregate_TD_4377090.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_4377090;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_4377090;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5686169;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5686169;
    std::vector<cl::Event> events_JOIN_INNER_TD_5686169;
    events_h2d_wr_JOIN_INNER_TD_5686169.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5686169.resize(1);
    events_JOIN_INNER_TD_5686169.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5686169;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5686169;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_437769_s, tv_r_Filter_6_437769_e;
    gettimeofday(&tv_r_Filter_6_437769_s, 0);
    SW_Filter_TD_6941389(tbl_SerializeFromObject_TD_7222617_input, tbl_Filter_TD_6941389_output);
    gettimeofday(&tv_r_Filter_6_437769_e, 0);

    struct timeval tv_r_Filter_6_280886_s, tv_r_Filter_6_280886_e;
    gettimeofday(&tv_r_Filter_6_280886_s, 0);
    SW_Filter_TD_6755408(tbl_SerializeFromObject_TD_7873326_input, tbl_Filter_TD_6755408_output);
    gettimeofday(&tv_r_Filter_6_280886_e, 0);

    struct timeval tv_r_JOIN_INNER_5_689207_s, tv_r_JOIN_INNER_5_689207_e;
    gettimeofday(&tv_r_JOIN_INNER_5_689207_s, 0);
    trans_JOIN_INNER_TD_5686169.add(&(tbl_Filter_TD_6755408_output));
    trans_JOIN_INNER_TD_5686169.add(&(tbl_Filter_TD_6941389_output));
    trans_JOIN_INNER_TD_5686169.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5686169), &(events_h2d_wr_JOIN_INNER_TD_5686169[0]));
    events_grp_JOIN_INNER_TD_5686169.push_back(events_h2d_wr_JOIN_INNER_TD_5686169[0]);
    krnl_JOIN_INNER_TD_5686169.run(0, &(events_grp_JOIN_INNER_TD_5686169), &(events_JOIN_INNER_TD_5686169[0]));
    
    trans_JOIN_INNER_TD_5686169_out.add(&(tbl_JOIN_INNER_TD_5686169_output_preprocess));
    trans_JOIN_INNER_TD_5686169_out.dev2host(0, &(events_JOIN_INNER_TD_5686169), &(events_d2h_rd_JOIN_INNER_TD_5686169[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_5686169);
    tbl_JOIN_INNER_TD_5686169_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_5686169_output));
    gettimeofday(&tv_r_JOIN_INNER_5_689207_e, 0);

    struct timeval tv_r_Aggregate_4_745075_s, tv_r_Aggregate_4_745075_e;
    gettimeofday(&tv_r_Aggregate_4_745075_s, 0);
    trans_Aggregate_TD_4377090.add(&(tbl_JOIN_INNER_TD_5686169_output));
    trans_Aggregate_TD_4377090.host2dev(0, &(prev_events_grp_Aggregate_TD_4377090), &(events_h2d_wr_Aggregate_TD_4377090[0]));
    events_grp_Aggregate_TD_4377090.push_back(events_h2d_wr_Aggregate_TD_4377090[0]);
    krnl_Aggregate_TD_4377090.run(0, &(events_grp_Aggregate_TD_4377090), &(events_Aggregate_TD_4377090[0]));
    
    trans_Aggregate_TD_4377090_out.add(&(tbl_Aggregate_TD_4377090_output_preprocess));
    trans_Aggregate_TD_4377090_out.dev2host(0, &(events_Aggregate_TD_4377090), &(events_d2h_rd_Aggregate_TD_4377090[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_4377090_consolidate(tbl_Aggregate_TD_4377090_output_preprocess, tbl_Aggregate_TD_4377090_output);
    gettimeofday(&tv_r_Aggregate_4_745075_e, 0);

    struct timeval tv_r_Filter_4_554369_s, tv_r_Filter_4_554369_e;
    gettimeofday(&tv_r_Filter_4_554369_s, 0);
    SW_Filter_TD_4453363(tbl_SerializeFromObject_TD_5635140_input, tbl_Filter_TD_4453363_output);
    gettimeofday(&tv_r_Filter_4_554369_e, 0);

    struct timeval tv_r_Filter_4_727779_s, tv_r_Filter_4_727779_e;
    gettimeofday(&tv_r_Filter_4_727779_s, 0);
    SW_Filter_TD_4366841(tbl_SerializeFromObject_TD_5569911_input, tbl_Filter_TD_4366841_output);
    gettimeofday(&tv_r_Filter_4_727779_e, 0);

    struct timeval tv_r_Filter_3_14940_s, tv_r_Filter_3_14940_e;
    gettimeofday(&tv_r_Filter_3_14940_s, 0);
    SW_Filter_TD_3330637(tbl_Aggregate_TD_4377090_output, tbl_Filter_TD_3330637_output);
    gettimeofday(&tv_r_Filter_3_14940_e, 0);

    struct timeval tv_r_JOIN_INNER_3_388283_s, tv_r_JOIN_INNER_3_388283_e;
    gettimeofday(&tv_r_JOIN_INNER_3_388283_s, 0);
    trans_JOIN_INNER_TD_3140259.add(&(tbl_Filter_TD_4366841_output));
    trans_JOIN_INNER_TD_3140259.add(&(tbl_Filter_TD_4453363_output));
    trans_JOIN_INNER_TD_3140259.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3140259), &(events_h2d_wr_JOIN_INNER_TD_3140259[0]));
    events_grp_JOIN_INNER_TD_3140259.push_back(events_h2d_wr_JOIN_INNER_TD_3140259[0]);
    krnl_JOIN_INNER_TD_3140259.run(0, &(events_grp_JOIN_INNER_TD_3140259), &(events_JOIN_INNER_TD_3140259[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_388283_e, 0);

    struct timeval tv_r_Filter_2_427208_s, tv_r_Filter_2_427208_e;
    gettimeofday(&tv_r_Filter_2_427208_s, 0);
    SW_Filter_TD_2939423(tbl_SerializeFromObject_TD_3465600_input, tbl_Filter_TD_2939423_output);
    gettimeofday(&tv_r_Filter_2_427208_e, 0);

    struct timeval tv_r_JOIN_INNER_2_558061_s, tv_r_JOIN_INNER_2_558061_e;
    gettimeofday(&tv_r_JOIN_INNER_2_558061_s, 0);
    prev_events_grp_JOIN_INNER_TD_2726088.push_back(events_h2d_wr_JOIN_INNER_TD_3140259[0]);
    trans_JOIN_INNER_TD_2726088.add(&(tbl_Filter_TD_3330637_output));
    trans_JOIN_INNER_TD_2726088.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2726088), &(events_h2d_wr_JOIN_INNER_TD_2726088[0]));
    events_grp_JOIN_INNER_TD_2726088.push_back(events_h2d_wr_JOIN_INNER_TD_2726088[0]);
    events_grp_JOIN_INNER_TD_2726088.push_back(events_JOIN_INNER_TD_3140259[0]);
    krnl_JOIN_INNER_TD_2726088.run(0, &(events_grp_JOIN_INNER_TD_2726088), &(events_JOIN_INNER_TD_2726088[0]));
    gettimeofday(&tv_r_JOIN_INNER_2_558061_e, 0);

    struct timeval tv_r_JOIN_INNER_1_773822_s, tv_r_JOIN_INNER_1_773822_e;
    gettimeofday(&tv_r_JOIN_INNER_1_773822_s, 0);
    prev_events_grp_JOIN_INNER_TD_1827937.push_back(events_h2d_wr_JOIN_INNER_TD_2726088[0]);
    trans_JOIN_INNER_TD_1827937.add(&(tbl_Filter_TD_2939423_output));
    trans_JOIN_INNER_TD_1827937.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1827937), &(events_h2d_wr_JOIN_INNER_TD_1827937[0]));
    events_grp_JOIN_INNER_TD_1827937.push_back(events_h2d_wr_JOIN_INNER_TD_1827937[0]);
    events_grp_JOIN_INNER_TD_1827937.push_back(events_JOIN_INNER_TD_2726088[0]);
    krnl_JOIN_INNER_TD_1827937.run(0, &(events_grp_JOIN_INNER_TD_1827937), &(events_JOIN_INNER_TD_1827937[0]));
    
    trans_JOIN_INNER_TD_1827937_out.add(&(tbl_JOIN_INNER_TD_1827937_output));
    trans_JOIN_INNER_TD_1827937_out.dev2host(0, &(events_JOIN_INNER_TD_1827937), &(events_d2h_rd_JOIN_INNER_TD_1827937[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_773822_e, 0);

    struct timeval tv_r_Aggregate_0_520964_s, tv_r_Aggregate_0_520964_e;
    gettimeofday(&tv_r_Aggregate_0_520964_s, 0);
    SW_Aggregate_TD_0765850(tbl_JOIN_INNER_TD_1827937_output, tbl_Aggregate_TD_0765850_output);
    gettimeofday(&tv_r_Aggregate_0_520964_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_437769_s, &tv_r_Filter_6_437769_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7222617_input: " << tbl_SerializeFromObject_TD_7222617_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_280886_s, &tv_r_Filter_6_280886_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7873326_input: " << tbl_SerializeFromObject_TD_7873326_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_689207_s, &tv_r_JOIN_INNER_5_689207_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6755408_output: " << tbl_Filter_TD_6755408_output.getNumRow() << " " << "tbl_Filter_TD_6941389_output: " << tbl_Filter_TD_6941389_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_745075_s, &tv_r_Aggregate_4_745075_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5686169_output: " << tbl_JOIN_INNER_TD_5686169_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_554369_s, &tv_r_Filter_4_554369_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5635140_input: " << tbl_SerializeFromObject_TD_5635140_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_727779_s, &tv_r_Filter_4_727779_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5569911_input: " << tbl_SerializeFromObject_TD_5569911_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_14940_s, &tv_r_Filter_3_14940_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4377090_output: " << tbl_Aggregate_TD_4377090_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_388283_s, &tv_r_JOIN_INNER_3_388283_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4366841_output: " << tbl_Filter_TD_4366841_output.getNumRow() << " " << "tbl_Filter_TD_4453363_output: " << tbl_Filter_TD_4453363_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_427208_s, &tv_r_Filter_2_427208_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3465600_input: " << tbl_SerializeFromObject_TD_3465600_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_558061_s, &tv_r_JOIN_INNER_2_558061_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3140259_output: " << tbl_JOIN_INNER_TD_3140259_output.getNumRow() << " " << "tbl_Filter_TD_3330637_output: " << tbl_Filter_TD_3330637_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_773822_s, &tv_r_JOIN_INNER_1_773822_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2726088_output: " << tbl_JOIN_INNER_TD_2726088_output.getNumRow() << " " << "tbl_Filter_TD_2939423_output: " << tbl_Filter_TD_2939423_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_520964_s, &tv_r_Aggregate_0_520964_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1827937_output: " << tbl_JOIN_INNER_TD_1827937_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.364852 * 1000 << "ms" << std::endl; 
    return 0; 
}
