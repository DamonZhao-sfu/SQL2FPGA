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

#include "cfgFunc_q65.hpp" 
#include "q65.hpp" 

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
    std::cout << "NOTE:running query #65\n."; 
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
    Table tbl_GlobalLimit_TD_0555713_output("tbl_GlobalLimit_TD_0555713_output", 6100000, 6, "");
    tbl_GlobalLimit_TD_0555713_output.allocateHost();
    Table tbl_LocalLimit_TD_1297676_output("tbl_LocalLimit_TD_1297676_output", 6100000, 6, "");
    tbl_LocalLimit_TD_1297676_output.allocateHost();
    Table tbl_Sort_TD_2650398_output("tbl_Sort_TD_2650398_output", 6100000, 6, "");
    tbl_Sort_TD_2650398_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3689224_output("tbl_JOIN_INNER_TD_3689224_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_3689224_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4343502_output("tbl_JOIN_INNER_TD_4343502_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4343502_output.allocateHost();
    Table tbl_Aggregate_TD_4389074_output_preprocess("tbl_Aggregate_TD_4389074_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_4389074_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_4389074_output("tbl_Aggregate_TD_4389074_output", 6100000, 2, "");
    tbl_Aggregate_TD_4389074_output.allocateHost();
    Table tbl_JOIN_INNER_TD_577295_output("tbl_JOIN_INNER_TD_577295_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_577295_output.allocateHost();
    Table tbl_Filter_TD_521079_output("tbl_Filter_TD_521079_output", 6100000, 5, "");
    tbl_Filter_TD_521079_output.allocateHost();
    Table tbl_Aggregate_TD_5306046_output_preprocess("tbl_Aggregate_TD_5306046_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_5306046_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_5306046_output("tbl_Aggregate_TD_5306046_output", 6100000, 2, "");
    tbl_Aggregate_TD_5306046_output.allocateHost();
    Table tbl_Filter_TD_6885849_output("tbl_Filter_TD_6885849_output", 6100000, 2, "");
    tbl_Filter_TD_6885849_output.allocateHost();
    Table tbl_Filter_TD_6128352_output("tbl_Filter_TD_6128352_output", 6100000, 3, "");
    tbl_Filter_TD_6128352_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6433299_input;
    tbl_SerializeFromObject_TD_6433299_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_6433299_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6433299_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6433299_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_6433299_input.addCol("i_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_6433299_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6433299_input.allocateHost();
    tbl_SerializeFromObject_TD_6433299_input.loadHost();
    Table tbl_JOIN_INNER_TD_6171404_output_preprocess("tbl_JOIN_INNER_TD_6171404_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6171404_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_6171404_output("tbl_JOIN_INNER_TD_6171404_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6171404_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7595103_input;
    tbl_SerializeFromObject_TD_7595103_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7595103_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7595103_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7595103_input.allocateHost();
    tbl_SerializeFromObject_TD_7595103_input.loadHost();
    Table tbl_Aggregate_TD_7139206_output_preprocess("tbl_Aggregate_TD_7139206_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_7139206_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_7139206_output("tbl_Aggregate_TD_7139206_output", 6100000, 3, "");
    tbl_Aggregate_TD_7139206_output.allocateHost();
    Table tbl_Filter_TD_737104_output("tbl_Filter_TD_737104_output", 6100000, 4, "");
    tbl_Filter_TD_737104_output.allocateHost();
    Table tbl_Filter_TD_7294622_output("tbl_Filter_TD_7294622_output", 6100000, 1, "");
    tbl_Filter_TD_7294622_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8434154_output_preprocess("tbl_JOIN_INNER_TD_8434154_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8434154_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_8434154_output("tbl_JOIN_INNER_TD_8434154_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8434154_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8350846_input;
    tbl_SerializeFromObject_TD_8350846_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8350846_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8350846_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_8350846_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8350846_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_8350846_input.allocateHost();
    tbl_SerializeFromObject_TD_8350846_input.loadHost();
    Table tbl_SerializeFromObject_TD_8322566_input;
    tbl_SerializeFromObject_TD_8322566_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8322566_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8322566_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8322566_input.allocateHost();
    tbl_SerializeFromObject_TD_8322566_input.loadHost();
    Table tbl_Filter_TD_9422043_output("tbl_Filter_TD_9422043_output", 6100000, 4, "");
    tbl_Filter_TD_9422043_output.allocateHost();
    Table tbl_Filter_TD_910589_output("tbl_Filter_TD_910589_output", 6100000, 1, "");
    tbl_Filter_TD_910589_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10179652_input;
    tbl_SerializeFromObject_TD_10179652_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10179652_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10179652_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10179652_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10179652_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10179652_input.allocateHost();
    tbl_SerializeFromObject_TD_10179652_input.loadHost();
    Table tbl_SerializeFromObject_TD_1052921_input;
    tbl_SerializeFromObject_TD_1052921_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1052921_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1052921_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_1052921_input.allocateHost();
    tbl_SerializeFromObject_TD_1052921_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_4389074_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_6171404_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_5306046_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_5306046_output.allocateDevBuffer(context_a, 32);
    tbl_JOIN_INNER_TD_6171404_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8434154_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_7139206_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Filter_TD_737104_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7294622_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8434154_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9422043_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_910589_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_4389074_cmds;
    cfg_Aggregate_TD_4389074_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_4389074_gqe_aggr(cfg_Aggregate_TD_4389074_cmds.cmd);
    cfg_Aggregate_TD_4389074_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_4389074_cmds_out;
    cfg_Aggregate_TD_4389074_cmds_out.allocateHost();
    cfg_Aggregate_TD_4389074_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_5306046_cmds;
    cfg_Aggregate_TD_5306046_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_5306046_gqe_aggr(cfg_Aggregate_TD_5306046_cmds.cmd);
    cfg_Aggregate_TD_5306046_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_5306046_cmds_out;
    cfg_Aggregate_TD_5306046_cmds_out.allocateHost();
    cfg_Aggregate_TD_5306046_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_6171404_cmds;
    cfg_JOIN_INNER_TD_6171404_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6171404_gqe_join (cfg_JOIN_INNER_TD_6171404_cmds.cmd);
    cfg_JOIN_INNER_TD_6171404_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_7139206_cmds;
    cfg_Aggregate_TD_7139206_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_7139206_gqe_aggr(cfg_Aggregate_TD_7139206_cmds.cmd);
    cfg_Aggregate_TD_7139206_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_7139206_cmds_out;
    cfg_Aggregate_TD_7139206_cmds_out.allocateHost();
    cfg_Aggregate_TD_7139206_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_8434154_cmds;
    cfg_JOIN_INNER_TD_8434154_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8434154_gqe_join (cfg_JOIN_INNER_TD_8434154_cmds.cmd);
    cfg_JOIN_INNER_TD_8434154_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_4389074;
    krnl_Aggregate_TD_4389074 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_4389074.setup(tbl_Aggregate_TD_5306046_output, tbl_Aggregate_TD_4389074_output_preprocess, cfg_Aggregate_TD_4389074_cmds, cfg_Aggregate_TD_4389074_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_5306046;
    krnl_Aggregate_TD_5306046 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_5306046.setup(tbl_JOIN_INNER_TD_6171404_output, tbl_Aggregate_TD_5306046_output_preprocess, cfg_Aggregate_TD_5306046_cmds, cfg_Aggregate_TD_5306046_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_6171404;
    krnl_JOIN_INNER_TD_6171404 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6171404.setup(tbl_Filter_TD_737104_output, tbl_Filter_TD_7294622_output, tbl_JOIN_INNER_TD_6171404_output_preprocess, cfg_JOIN_INNER_TD_6171404_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_7139206;
    krnl_Aggregate_TD_7139206 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_7139206.setup(tbl_JOIN_INNER_TD_8434154_output, tbl_Aggregate_TD_7139206_output_preprocess, cfg_Aggregate_TD_7139206_cmds, cfg_Aggregate_TD_7139206_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_8434154;
    krnl_JOIN_INNER_TD_8434154 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8434154.setup(tbl_Filter_TD_9422043_output, tbl_Filter_TD_910589_output, tbl_JOIN_INNER_TD_8434154_output_preprocess, cfg_JOIN_INNER_TD_8434154_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_4389074;
    trans_Aggregate_TD_4389074.setq(q_a);
    trans_Aggregate_TD_4389074.add(&(cfg_Aggregate_TD_4389074_cmds));
    transEngine trans_Aggregate_TD_4389074_out;
    trans_Aggregate_TD_4389074_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_5306046;
    trans_Aggregate_TD_5306046.setq(q_a);
    trans_Aggregate_TD_5306046.add(&(cfg_Aggregate_TD_5306046_cmds));
    transEngine trans_Aggregate_TD_5306046_out;
    trans_Aggregate_TD_5306046_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_6171404;
    trans_JOIN_INNER_TD_6171404.setq(q_h);
    trans_JOIN_INNER_TD_6171404.add(&(cfg_JOIN_INNER_TD_6171404_cmds));
    transEngine trans_JOIN_INNER_TD_6171404_out;
    trans_JOIN_INNER_TD_6171404_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_7139206;
    trans_Aggregate_TD_7139206.setq(q_a);
    trans_Aggregate_TD_7139206.add(&(cfg_Aggregate_TD_7139206_cmds));
    transEngine trans_Aggregate_TD_7139206_out;
    trans_Aggregate_TD_7139206_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_8434154;
    trans_JOIN_INNER_TD_8434154.setq(q_h);
    trans_JOIN_INNER_TD_8434154.add(&(cfg_JOIN_INNER_TD_8434154_cmds));
    transEngine trans_JOIN_INNER_TD_8434154_out;
    trans_JOIN_INNER_TD_8434154_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_4389074;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_4389074;
    std::vector<cl::Event> events_Aggregate_TD_4389074;
    events_h2d_wr_Aggregate_TD_4389074.resize(1);
    events_d2h_rd_Aggregate_TD_4389074.resize(1);
    events_Aggregate_TD_4389074.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_4389074;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_4389074;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_5306046;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_5306046;
    std::vector<cl::Event> events_Aggregate_TD_5306046;
    events_h2d_wr_Aggregate_TD_5306046.resize(1);
    events_d2h_rd_Aggregate_TD_5306046.resize(1);
    events_Aggregate_TD_5306046.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_5306046;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_5306046;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6171404;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6171404;
    std::vector<cl::Event> events_JOIN_INNER_TD_6171404;
    events_h2d_wr_JOIN_INNER_TD_6171404.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6171404.resize(1);
    events_JOIN_INNER_TD_6171404.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6171404;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6171404;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_7139206;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_7139206;
    std::vector<cl::Event> events_Aggregate_TD_7139206;
    events_h2d_wr_Aggregate_TD_7139206.resize(1);
    events_d2h_rd_Aggregate_TD_7139206.resize(1);
    events_Aggregate_TD_7139206.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_7139206;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_7139206;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8434154;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8434154;
    std::vector<cl::Event> events_JOIN_INNER_TD_8434154;
    events_h2d_wr_JOIN_INNER_TD_8434154.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8434154.resize(1);
    events_JOIN_INNER_TD_8434154.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8434154;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8434154;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_655096_s, tv_r_Filter_9_655096_e;
    gettimeofday(&tv_r_Filter_9_655096_s, 0);
    SW_Filter_TD_910589(tbl_SerializeFromObject_TD_1052921_input, tbl_Filter_TD_910589_output);
    gettimeofday(&tv_r_Filter_9_655096_e, 0);

    struct timeval tv_r_Filter_9_253133_s, tv_r_Filter_9_253133_e;
    gettimeofday(&tv_r_Filter_9_253133_s, 0);
    SW_Filter_TD_9422043(tbl_SerializeFromObject_TD_10179652_input, tbl_Filter_TD_9422043_output);
    gettimeofday(&tv_r_Filter_9_253133_e, 0);

    struct timeval tv_r_JOIN_INNER_8_217515_s, tv_r_JOIN_INNER_8_217515_e;
    gettimeofday(&tv_r_JOIN_INNER_8_217515_s, 0);
    trans_JOIN_INNER_TD_8434154.add(&(tbl_Filter_TD_9422043_output));
    trans_JOIN_INNER_TD_8434154.add(&(tbl_Filter_TD_910589_output));
    trans_JOIN_INNER_TD_8434154.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8434154), &(events_h2d_wr_JOIN_INNER_TD_8434154[0]));
    events_grp_JOIN_INNER_TD_8434154.push_back(events_h2d_wr_JOIN_INNER_TD_8434154[0]);
    krnl_JOIN_INNER_TD_8434154.run(0, &(events_grp_JOIN_INNER_TD_8434154), &(events_JOIN_INNER_TD_8434154[0]));
    
    trans_JOIN_INNER_TD_8434154_out.add(&(tbl_JOIN_INNER_TD_8434154_output_preprocess));
    trans_JOIN_INNER_TD_8434154_out.dev2host(0, &(events_JOIN_INNER_TD_8434154), &(events_d2h_rd_JOIN_INNER_TD_8434154[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_8434154);
    tbl_JOIN_INNER_TD_8434154_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_8434154_output));
    gettimeofday(&tv_r_JOIN_INNER_8_217515_e, 0);

    struct timeval tv_r_Filter_7_363268_s, tv_r_Filter_7_363268_e;
    gettimeofday(&tv_r_Filter_7_363268_s, 0);
    SW_Filter_TD_7294622(tbl_SerializeFromObject_TD_8322566_input, tbl_Filter_TD_7294622_output);
    gettimeofday(&tv_r_Filter_7_363268_e, 0);

    struct timeval tv_r_Filter_7_463561_s, tv_r_Filter_7_463561_e;
    gettimeofday(&tv_r_Filter_7_463561_s, 0);
    SW_Filter_TD_737104(tbl_SerializeFromObject_TD_8350846_input, tbl_Filter_TD_737104_output);
    gettimeofday(&tv_r_Filter_7_463561_e, 0);

    struct timeval tv_r_Aggregate_7_993466_s, tv_r_Aggregate_7_993466_e;
    gettimeofday(&tv_r_Aggregate_7_993466_s, 0);
    trans_Aggregate_TD_7139206.add(&(tbl_JOIN_INNER_TD_8434154_output));
    trans_Aggregate_TD_7139206.host2dev(0, &(prev_events_grp_Aggregate_TD_7139206), &(events_h2d_wr_Aggregate_TD_7139206[0]));
    events_grp_Aggregate_TD_7139206.push_back(events_h2d_wr_Aggregate_TD_7139206[0]);
    krnl_Aggregate_TD_7139206.run(0, &(events_grp_Aggregate_TD_7139206), &(events_Aggregate_TD_7139206[0]));
    
    trans_Aggregate_TD_7139206_out.add(&(tbl_Aggregate_TD_7139206_output_preprocess));
    trans_Aggregate_TD_7139206_out.dev2host(0, &(events_Aggregate_TD_7139206), &(events_d2h_rd_Aggregate_TD_7139206[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_7139206_consolidate(tbl_Aggregate_TD_7139206_output_preprocess, tbl_Aggregate_TD_7139206_output);
    gettimeofday(&tv_r_Aggregate_7_993466_e, 0);

    struct timeval tv_r_JOIN_INNER_6_688178_s, tv_r_JOIN_INNER_6_688178_e;
    gettimeofday(&tv_r_JOIN_INNER_6_688178_s, 0);
    trans_JOIN_INNER_TD_6171404.add(&(tbl_Filter_TD_737104_output));
    trans_JOIN_INNER_TD_6171404.add(&(tbl_Filter_TD_7294622_output));
    trans_JOIN_INNER_TD_6171404.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6171404), &(events_h2d_wr_JOIN_INNER_TD_6171404[0]));
    events_grp_JOIN_INNER_TD_6171404.push_back(events_h2d_wr_JOIN_INNER_TD_6171404[0]);
    krnl_JOIN_INNER_TD_6171404.run(0, &(events_grp_JOIN_INNER_TD_6171404), &(events_JOIN_INNER_TD_6171404[0]));
    
    trans_JOIN_INNER_TD_6171404_out.add(&(tbl_JOIN_INNER_TD_6171404_output_preprocess));
    trans_JOIN_INNER_TD_6171404_out.dev2host(0, &(events_JOIN_INNER_TD_6171404), &(events_d2h_rd_JOIN_INNER_TD_6171404[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_6171404);
    tbl_JOIN_INNER_TD_6171404_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_6171404_output));
    gettimeofday(&tv_r_JOIN_INNER_6_688178_e, 0);

    struct timeval tv_r_Filter_6_667192_s, tv_r_Filter_6_667192_e;
    gettimeofday(&tv_r_Filter_6_667192_s, 0);
    SW_Filter_TD_6128352(tbl_Aggregate_TD_7139206_output, tbl_Filter_TD_6128352_output);
    gettimeofday(&tv_r_Filter_6_667192_e, 0);

    struct timeval tv_r_Filter_6_58467_s, tv_r_Filter_6_58467_e;
    gettimeofday(&tv_r_Filter_6_58467_s, 0);
    SW_Filter_TD_6885849(tbl_SerializeFromObject_TD_7595103_input, tbl_Filter_TD_6885849_output);
    gettimeofday(&tv_r_Filter_6_58467_e, 0);

    struct timeval tv_r_Aggregate_5_419679_s, tv_r_Aggregate_5_419679_e;
    gettimeofday(&tv_r_Aggregate_5_419679_s, 0);
    trans_Aggregate_TD_5306046.add(&(tbl_JOIN_INNER_TD_6171404_output));
    trans_Aggregate_TD_5306046.host2dev(0, &(prev_events_grp_Aggregate_TD_5306046), &(events_h2d_wr_Aggregate_TD_5306046[0]));
    events_grp_Aggregate_TD_5306046.push_back(events_h2d_wr_Aggregate_TD_5306046[0]);
    krnl_Aggregate_TD_5306046.run(0, &(events_grp_Aggregate_TD_5306046), &(events_Aggregate_TD_5306046[0]));
    
    trans_Aggregate_TD_5306046_out.add(&(tbl_Aggregate_TD_5306046_output_preprocess));
    trans_Aggregate_TD_5306046_out.dev2host(0, &(events_Aggregate_TD_5306046), &(events_d2h_rd_Aggregate_TD_5306046[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_5306046_consolidate(tbl_Aggregate_TD_5306046_output_preprocess, tbl_Aggregate_TD_5306046_output);
    gettimeofday(&tv_r_Aggregate_5_419679_e, 0);

    struct timeval tv_r_Filter_5_181227_s, tv_r_Filter_5_181227_e;
    gettimeofday(&tv_r_Filter_5_181227_s, 0);
    SW_Filter_TD_521079(tbl_SerializeFromObject_TD_6433299_input, tbl_Filter_TD_521079_output);
    gettimeofday(&tv_r_Filter_5_181227_e, 0);

    struct timeval tv_r_JOIN_INNER_5_587209_s, tv_r_JOIN_INNER_5_587209_e;
    gettimeofday(&tv_r_JOIN_INNER_5_587209_s, 0);
    SW_JOIN_INNER_TD_577295(tbl_Filter_TD_6885849_output, tbl_Filter_TD_6128352_output, tbl_JOIN_INNER_TD_577295_output);
    gettimeofday(&tv_r_JOIN_INNER_5_587209_e, 0);

    struct timeval tv_r_Aggregate_4_103277_s, tv_r_Aggregate_4_103277_e;
    gettimeofday(&tv_r_Aggregate_4_103277_s, 0);
    prev_events_grp_Aggregate_TD_4389074.push_back(events_h2d_wr_Aggregate_TD_5306046[0]);
    trans_Aggregate_TD_4389074.add(&(tbl_Aggregate_TD_5306046_output));
    trans_Aggregate_TD_4389074.host2dev(0, &(prev_events_grp_Aggregate_TD_4389074), &(events_h2d_wr_Aggregate_TD_4389074[0]));
    events_grp_Aggregate_TD_4389074.push_back(events_h2d_wr_Aggregate_TD_4389074[0]);
    events_grp_Aggregate_TD_4389074.push_back(events_Aggregate_TD_5306046[0]);
    krnl_Aggregate_TD_4389074.run(0, &(events_grp_Aggregate_TD_4389074), &(events_Aggregate_TD_4389074[0]));
    
    trans_Aggregate_TD_4389074_out.add(&(tbl_Aggregate_TD_4389074_output_preprocess));
    trans_Aggregate_TD_4389074_out.dev2host(0, &(events_Aggregate_TD_4389074), &(events_d2h_rd_Aggregate_TD_4389074[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_4389074_consolidate(tbl_Aggregate_TD_4389074_output_preprocess, tbl_Aggregate_TD_4389074_output);
    gettimeofday(&tv_r_Aggregate_4_103277_e, 0);

    struct timeval tv_r_JOIN_INNER_4_486464_s, tv_r_JOIN_INNER_4_486464_e;
    gettimeofday(&tv_r_JOIN_INNER_4_486464_s, 0);
    SW_JOIN_INNER_TD_4343502(tbl_JOIN_INNER_TD_577295_output, tbl_Filter_TD_521079_output, tbl_JOIN_INNER_TD_4343502_output);
    gettimeofday(&tv_r_JOIN_INNER_4_486464_e, 0);

    struct timeval tv_r_JOIN_INNER_3_945758_s, tv_r_JOIN_INNER_3_945758_e;
    gettimeofday(&tv_r_JOIN_INNER_3_945758_s, 0);
    SW_JOIN_INNER_TD_3689224(tbl_JOIN_INNER_TD_4343502_output, tbl_Aggregate_TD_4389074_output, tbl_JOIN_INNER_TD_3689224_output);
    gettimeofday(&tv_r_JOIN_INNER_3_945758_e, 0);

    struct timeval tv_r_Sort_2_138161_s, tv_r_Sort_2_138161_e;
    gettimeofday(&tv_r_Sort_2_138161_s, 0);
    SW_Sort_TD_2650398(tbl_JOIN_INNER_TD_3689224_output, tbl_Sort_TD_2650398_output);
    gettimeofday(&tv_r_Sort_2_138161_e, 0);

    struct timeval tv_r_LocalLimit_1_425841_s, tv_r_LocalLimit_1_425841_e;
    gettimeofday(&tv_r_LocalLimit_1_425841_s, 0);
    SW_LocalLimit_TD_1297676(tbl_Sort_TD_2650398_output, tbl_LocalLimit_TD_1297676_output);
    gettimeofday(&tv_r_LocalLimit_1_425841_e, 0);

    struct timeval tv_r_GlobalLimit_0_164672_s, tv_r_GlobalLimit_0_164672_e;
    gettimeofday(&tv_r_GlobalLimit_0_164672_s, 0);
    SW_GlobalLimit_TD_0555713(tbl_LocalLimit_TD_1297676_output, tbl_GlobalLimit_TD_0555713_output);
    gettimeofday(&tv_r_GlobalLimit_0_164672_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_655096_s, &tv_r_Filter_9_655096_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1052921_input: " << tbl_SerializeFromObject_TD_1052921_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_253133_s, &tv_r_Filter_9_253133_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10179652_input: " << tbl_SerializeFromObject_TD_10179652_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_217515_s, &tv_r_JOIN_INNER_8_217515_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9422043_output: " << tbl_Filter_TD_9422043_output.getNumRow() << " " << "tbl_Filter_TD_910589_output: " << tbl_Filter_TD_910589_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_363268_s, &tv_r_Filter_7_363268_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8322566_input: " << tbl_SerializeFromObject_TD_8322566_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_463561_s, &tv_r_Filter_7_463561_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8350846_input: " << tbl_SerializeFromObject_TD_8350846_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_993466_s, &tv_r_Aggregate_7_993466_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8434154_output: " << tbl_JOIN_INNER_TD_8434154_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_688178_s, &tv_r_JOIN_INNER_6_688178_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_737104_output: " << tbl_Filter_TD_737104_output.getNumRow() << " " << "tbl_Filter_TD_7294622_output: " << tbl_Filter_TD_7294622_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_667192_s, &tv_r_Filter_6_667192_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7139206_output: " << tbl_Aggregate_TD_7139206_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_58467_s, &tv_r_Filter_6_58467_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7595103_input: " << tbl_SerializeFromObject_TD_7595103_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_419679_s, &tv_r_Aggregate_5_419679_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6171404_output: " << tbl_JOIN_INNER_TD_6171404_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_181227_s, &tv_r_Filter_5_181227_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6433299_input: " << tbl_SerializeFromObject_TD_6433299_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_587209_s, &tv_r_JOIN_INNER_5_587209_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6885849_output: " << tbl_Filter_TD_6885849_output.getNumRow() << " " << "tbl_Filter_TD_6128352_output: " << tbl_Filter_TD_6128352_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_103277_s, &tv_r_Aggregate_4_103277_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5306046_output: " << tbl_Aggregate_TD_5306046_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_486464_s, &tv_r_JOIN_INNER_4_486464_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_577295_output: " << tbl_JOIN_INNER_TD_577295_output.getNumRow() << " " << "tbl_Filter_TD_521079_output: " << tbl_Filter_TD_521079_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_945758_s, &tv_r_JOIN_INNER_3_945758_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4343502_output: " << tbl_JOIN_INNER_TD_4343502_output.getNumRow() << " " << "tbl_Aggregate_TD_4389074_output: " << tbl_Aggregate_TD_4389074_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_138161_s, &tv_r_Sort_2_138161_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3689224_output: " << tbl_JOIN_INNER_TD_3689224_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_425841_s, &tv_r_LocalLimit_1_425841_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2650398_output: " << tbl_Sort_TD_2650398_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_164672_s, &tv_r_GlobalLimit_0_164672_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1297676_output: " << tbl_LocalLimit_TD_1297676_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.6290133 * 1000 << "ms" << std::endl; 
    return 0; 
}
