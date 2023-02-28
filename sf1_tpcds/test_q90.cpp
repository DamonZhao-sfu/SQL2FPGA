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

#include "cfgFunc_q90.hpp" 
#include "q90.hpp" 

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
    std::cout << "NOTE:running query #90\n."; 
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
    Table tbl_Project_TD_0896501_output("tbl_Project_TD_0896501_output", 6100000, 1, "");
    tbl_Project_TD_0896501_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_1182859_output("tbl_JOIN_CROSS_TD_1182859_output", 6100000, 2, "");
    tbl_JOIN_CROSS_TD_1182859_output.allocateHost();
    Table tbl_Aggregate_TD_2963332_output("tbl_Aggregate_TD_2963332_output", 6100000, 1, "");
    tbl_Aggregate_TD_2963332_output.allocateHost();
    Table tbl_Aggregate_TD_248662_output("tbl_Aggregate_TD_248662_output", 6100000, 1, "");
    tbl_Aggregate_TD_248662_output.allocateHost();
    Table tbl_JOIN_INNER_TD_328805_output("tbl_JOIN_INNER_TD_328805_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_328805_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3547194_output("tbl_JOIN_INNER_TD_3547194_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3547194_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4581322_output("tbl_JOIN_INNER_TD_4581322_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4581322_output.allocateHost();
    Table tbl_Filter_TD_4434162_output("tbl_Filter_TD_4434162_output", 6100000, 1, "");
    tbl_Filter_TD_4434162_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4828106_output("tbl_JOIN_INNER_TD_4828106_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4828106_output.allocateHost();
    Table tbl_Filter_TD_4527149_output("tbl_Filter_TD_4527149_output", 6100000, 1, "");
    tbl_Filter_TD_4527149_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5982183_output("tbl_JOIN_INNER_TD_5982183_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5982183_output.allocateHost();
    Table tbl_Filter_TD_5945676_output("tbl_Filter_TD_5945676_output", 6100000, 1, "");
    tbl_Filter_TD_5945676_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5268380_input;
    tbl_SerializeFromObject_TD_5268380_input = Table("web_page", web_page_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5268380_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_5268380_input.addCol("wp_char_count", 4);
    tbl_SerializeFromObject_TD_5268380_input.allocateHost();
    tbl_SerializeFromObject_TD_5268380_input.loadHost();
    Table tbl_JOIN_INNER_TD_5410044_output("tbl_JOIN_INNER_TD_5410044_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5410044_output.allocateHost();
    Table tbl_Filter_TD_5583903_output("tbl_Filter_TD_5583903_output", 6100000, 1, "");
    tbl_Filter_TD_5583903_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5985009_input;
    tbl_SerializeFromObject_TD_5985009_input = Table("web_page", web_page_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5985009_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_5985009_input.addCol("wp_char_count", 4);
    tbl_SerializeFromObject_TD_5985009_input.allocateHost();
    tbl_SerializeFromObject_TD_5985009_input.loadHost();
    Table tbl_Filter_TD_655281_output("tbl_Filter_TD_655281_output", 6100000, 3, "");
    tbl_Filter_TD_655281_output.allocateHost();
    Table tbl_Filter_TD_6189517_output("tbl_Filter_TD_6189517_output", 6100000, 1, "");
    tbl_Filter_TD_6189517_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6915499_input;
    tbl_SerializeFromObject_TD_6915499_input = Table("time_dim", time_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6915499_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_6915499_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_6915499_input.allocateHost();
    tbl_SerializeFromObject_TD_6915499_input.loadHost();
    Table tbl_Filter_TD_6511180_output("tbl_Filter_TD_6511180_output", 6100000, 3, "");
    tbl_Filter_TD_6511180_output.allocateHost();
    Table tbl_Filter_TD_6633999_output("tbl_Filter_TD_6633999_output", 6100000, 1, "");
    tbl_Filter_TD_6633999_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6967561_input;
    tbl_SerializeFromObject_TD_6967561_input = Table("time_dim", time_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6967561_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_6967561_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_6967561_input.allocateHost();
    tbl_SerializeFromObject_TD_6967561_input.loadHost();
    Table tbl_SerializeFromObject_TD_7654654_input;
    tbl_SerializeFromObject_TD_7654654_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7654654_input.addCol("ws_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_7654654_input.addCol("ws_ship_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_7654654_input.addCol("ws_web_page_sk", 4);
    tbl_SerializeFromObject_TD_7654654_input.allocateHost();
    tbl_SerializeFromObject_TD_7654654_input.loadHost();
    Table tbl_SerializeFromObject_TD_7909277_input;
    tbl_SerializeFromObject_TD_7909277_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7909277_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_7909277_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_7909277_input.allocateHost();
    tbl_SerializeFromObject_TD_7909277_input.loadHost();
    Table tbl_SerializeFromObject_TD_7303184_input;
    tbl_SerializeFromObject_TD_7303184_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7303184_input.addCol("ws_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_7303184_input.addCol("ws_ship_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_7303184_input.addCol("ws_web_page_sk", 4);
    tbl_SerializeFromObject_TD_7303184_input.allocateHost();
    tbl_SerializeFromObject_TD_7303184_input.loadHost();
    Table tbl_SerializeFromObject_TD_7366927_input;
    tbl_SerializeFromObject_TD_7366927_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7366927_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_7366927_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_7366927_input.allocateHost();
    tbl_SerializeFromObject_TD_7366927_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_328805_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3547194_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4581322_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4434162_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4828106_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4527149_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5982183_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5945676_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5410044_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5583903_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_655281_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6189517_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6511180_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6633999_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_328805_cmds;
    cfg_JOIN_INNER_TD_328805_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_328805_gqe_join (cfg_JOIN_INNER_TD_328805_cmds.cmd);
    cfg_JOIN_INNER_TD_328805_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3547194_cmds;
    cfg_JOIN_INNER_TD_3547194_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3547194_gqe_join (cfg_JOIN_INNER_TD_3547194_cmds.cmd);
    cfg_JOIN_INNER_TD_3547194_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4581322_cmds;
    cfg_JOIN_INNER_TD_4581322_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4581322_gqe_join (cfg_JOIN_INNER_TD_4581322_cmds.cmd);
    cfg_JOIN_INNER_TD_4581322_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4828106_cmds;
    cfg_JOIN_INNER_TD_4828106_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4828106_gqe_join (cfg_JOIN_INNER_TD_4828106_cmds.cmd);
    cfg_JOIN_INNER_TD_4828106_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5982183_cmds;
    cfg_JOIN_INNER_TD_5982183_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5982183_gqe_join (cfg_JOIN_INNER_TD_5982183_cmds.cmd);
    cfg_JOIN_INNER_TD_5982183_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5410044_cmds;
    cfg_JOIN_INNER_TD_5410044_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5410044_gqe_join (cfg_JOIN_INNER_TD_5410044_cmds.cmd);
    cfg_JOIN_INNER_TD_5410044_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_328805;
    krnl_JOIN_INNER_TD_328805 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_328805.setup(tbl_JOIN_INNER_TD_4581322_output, tbl_Filter_TD_4434162_output, tbl_JOIN_INNER_TD_328805_output, cfg_JOIN_INNER_TD_328805_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3547194;
    krnl_JOIN_INNER_TD_3547194 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3547194.setup(tbl_JOIN_INNER_TD_4828106_output, tbl_Filter_TD_4527149_output, tbl_JOIN_INNER_TD_3547194_output, cfg_JOIN_INNER_TD_3547194_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4581322;
    krnl_JOIN_INNER_TD_4581322 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4581322.setup(tbl_JOIN_INNER_TD_5982183_output, tbl_Filter_TD_5945676_output, tbl_JOIN_INNER_TD_4581322_output, cfg_JOIN_INNER_TD_4581322_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4828106;
    krnl_JOIN_INNER_TD_4828106 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4828106.setup(tbl_JOIN_INNER_TD_5410044_output, tbl_Filter_TD_5583903_output, tbl_JOIN_INNER_TD_4828106_output, cfg_JOIN_INNER_TD_4828106_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5982183;
    krnl_JOIN_INNER_TD_5982183 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5982183.setup(tbl_Filter_TD_655281_output, tbl_Filter_TD_6189517_output, tbl_JOIN_INNER_TD_5982183_output, cfg_JOIN_INNER_TD_5982183_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5410044;
    krnl_JOIN_INNER_TD_5410044 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5410044.setup(tbl_Filter_TD_6511180_output, tbl_Filter_TD_6633999_output, tbl_JOIN_INNER_TD_5410044_output, cfg_JOIN_INNER_TD_5410044_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_328805;
    trans_JOIN_INNER_TD_328805.setq(q_h);
    trans_JOIN_INNER_TD_328805.add(&(cfg_JOIN_INNER_TD_328805_cmds));
    transEngine trans_JOIN_INNER_TD_328805_out;
    trans_JOIN_INNER_TD_328805_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3547194;
    trans_JOIN_INNER_TD_3547194.setq(q_h);
    trans_JOIN_INNER_TD_3547194.add(&(cfg_JOIN_INNER_TD_3547194_cmds));
    transEngine trans_JOIN_INNER_TD_3547194_out;
    trans_JOIN_INNER_TD_3547194_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4581322;
    trans_JOIN_INNER_TD_4581322.setq(q_h);
    trans_JOIN_INNER_TD_4581322.add(&(cfg_JOIN_INNER_TD_4581322_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4828106;
    trans_JOIN_INNER_TD_4828106.setq(q_h);
    trans_JOIN_INNER_TD_4828106.add(&(cfg_JOIN_INNER_TD_4828106_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5982183;
    trans_JOIN_INNER_TD_5982183.setq(q_h);
    trans_JOIN_INNER_TD_5982183.add(&(cfg_JOIN_INNER_TD_5982183_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5410044;
    trans_JOIN_INNER_TD_5410044.setq(q_h);
    trans_JOIN_INNER_TD_5410044.add(&(cfg_JOIN_INNER_TD_5410044_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_328805;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_328805;
    std::vector<cl::Event> events_JOIN_INNER_TD_328805;
    events_h2d_wr_JOIN_INNER_TD_328805.resize(1);
    events_d2h_rd_JOIN_INNER_TD_328805.resize(1);
    events_JOIN_INNER_TD_328805.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_328805;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_328805;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3547194;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3547194;
    std::vector<cl::Event> events_JOIN_INNER_TD_3547194;
    events_h2d_wr_JOIN_INNER_TD_3547194.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3547194.resize(1);
    events_JOIN_INNER_TD_3547194.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3547194;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3547194;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4581322;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4581322;
    std::vector<cl::Event> events_JOIN_INNER_TD_4581322;
    events_h2d_wr_JOIN_INNER_TD_4581322.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4581322.resize(1);
    events_JOIN_INNER_TD_4581322.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4581322;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4581322;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4828106;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4828106;
    std::vector<cl::Event> events_JOIN_INNER_TD_4828106;
    events_h2d_wr_JOIN_INNER_TD_4828106.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4828106.resize(1);
    events_JOIN_INNER_TD_4828106.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4828106;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4828106;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5982183;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5982183;
    std::vector<cl::Event> events_JOIN_INNER_TD_5982183;
    events_h2d_wr_JOIN_INNER_TD_5982183.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5982183.resize(1);
    events_JOIN_INNER_TD_5982183.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5982183;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5982183;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5410044;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5410044;
    std::vector<cl::Event> events_JOIN_INNER_TD_5410044;
    events_h2d_wr_JOIN_INNER_TD_5410044.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5410044.resize(1);
    events_JOIN_INNER_TD_5410044.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5410044;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5410044;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_581681_s, tv_r_Filter_6_581681_e;
    gettimeofday(&tv_r_Filter_6_581681_s, 0);
    SW_Filter_TD_6633999(tbl_SerializeFromObject_TD_7366927_input, tbl_Filter_TD_6633999_output);
    gettimeofday(&tv_r_Filter_6_581681_e, 0);

    struct timeval tv_r_Filter_6_182962_s, tv_r_Filter_6_182962_e;
    gettimeofday(&tv_r_Filter_6_182962_s, 0);
    SW_Filter_TD_6511180(tbl_SerializeFromObject_TD_7303184_input, tbl_Filter_TD_6511180_output);
    gettimeofday(&tv_r_Filter_6_182962_e, 0);

    struct timeval tv_r_Filter_6_33798_s, tv_r_Filter_6_33798_e;
    gettimeofday(&tv_r_Filter_6_33798_s, 0);
    SW_Filter_TD_6189517(tbl_SerializeFromObject_TD_7909277_input, tbl_Filter_TD_6189517_output);
    gettimeofday(&tv_r_Filter_6_33798_e, 0);

    struct timeval tv_r_Filter_6_513224_s, tv_r_Filter_6_513224_e;
    gettimeofday(&tv_r_Filter_6_513224_s, 0);
    SW_Filter_TD_655281(tbl_SerializeFromObject_TD_7654654_input, tbl_Filter_TD_655281_output);
    gettimeofday(&tv_r_Filter_6_513224_e, 0);

    struct timeval tv_r_Filter_5_609100_s, tv_r_Filter_5_609100_e;
    gettimeofday(&tv_r_Filter_5_609100_s, 0);
    SW_Filter_TD_5583903(tbl_SerializeFromObject_TD_6967561_input, tbl_Filter_TD_5583903_output);
    gettimeofday(&tv_r_Filter_5_609100_e, 0);

    struct timeval tv_r_JOIN_INNER_5_77173_s, tv_r_JOIN_INNER_5_77173_e;
    gettimeofday(&tv_r_JOIN_INNER_5_77173_s, 0);
    trans_JOIN_INNER_TD_5410044.add(&(tbl_Filter_TD_6511180_output));
    trans_JOIN_INNER_TD_5410044.add(&(tbl_Filter_TD_6633999_output));
    trans_JOIN_INNER_TD_5410044.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5410044), &(events_h2d_wr_JOIN_INNER_TD_5410044[0]));
    events_grp_JOIN_INNER_TD_5410044.push_back(events_h2d_wr_JOIN_INNER_TD_5410044[0]);
    krnl_JOIN_INNER_TD_5410044.run(0, &(events_grp_JOIN_INNER_TD_5410044), &(events_JOIN_INNER_TD_5410044[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_77173_e, 0);

    struct timeval tv_r_Filter_5_855210_s, tv_r_Filter_5_855210_e;
    gettimeofday(&tv_r_Filter_5_855210_s, 0);
    SW_Filter_TD_5945676(tbl_SerializeFromObject_TD_6915499_input, tbl_Filter_TD_5945676_output);
    gettimeofday(&tv_r_Filter_5_855210_e, 0);

    struct timeval tv_r_JOIN_INNER_5_301692_s, tv_r_JOIN_INNER_5_301692_e;
    gettimeofday(&tv_r_JOIN_INNER_5_301692_s, 0);
    trans_JOIN_INNER_TD_5982183.add(&(tbl_Filter_TD_655281_output));
    trans_JOIN_INNER_TD_5982183.add(&(tbl_Filter_TD_6189517_output));
    trans_JOIN_INNER_TD_5982183.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5982183), &(events_h2d_wr_JOIN_INNER_TD_5982183[0]));
    events_grp_JOIN_INNER_TD_5982183.push_back(events_h2d_wr_JOIN_INNER_TD_5982183[0]);
    krnl_JOIN_INNER_TD_5982183.run(0, &(events_grp_JOIN_INNER_TD_5982183), &(events_JOIN_INNER_TD_5982183[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_301692_e, 0);

    struct timeval tv_r_Filter_4_438018_s, tv_r_Filter_4_438018_e;
    gettimeofday(&tv_r_Filter_4_438018_s, 0);
    SW_Filter_TD_4527149(tbl_SerializeFromObject_TD_5985009_input, tbl_Filter_TD_4527149_output);
    gettimeofday(&tv_r_Filter_4_438018_e, 0);

    struct timeval tv_r_JOIN_INNER_4_632550_s, tv_r_JOIN_INNER_4_632550_e;
    gettimeofday(&tv_r_JOIN_INNER_4_632550_s, 0);
    prev_events_grp_JOIN_INNER_TD_4828106.push_back(events_h2d_wr_JOIN_INNER_TD_5410044[0]);
    trans_JOIN_INNER_TD_4828106.add(&(tbl_Filter_TD_5583903_output));
    trans_JOIN_INNER_TD_4828106.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4828106), &(events_h2d_wr_JOIN_INNER_TD_4828106[0]));
    events_grp_JOIN_INNER_TD_4828106.push_back(events_h2d_wr_JOIN_INNER_TD_4828106[0]);
    events_grp_JOIN_INNER_TD_4828106.push_back(events_JOIN_INNER_TD_5410044[0]);
    krnl_JOIN_INNER_TD_4828106.run(0, &(events_grp_JOIN_INNER_TD_4828106), &(events_JOIN_INNER_TD_4828106[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_632550_e, 0);

    struct timeval tv_r_Filter_4_679522_s, tv_r_Filter_4_679522_e;
    gettimeofday(&tv_r_Filter_4_679522_s, 0);
    SW_Filter_TD_4434162(tbl_SerializeFromObject_TD_5268380_input, tbl_Filter_TD_4434162_output);
    gettimeofday(&tv_r_Filter_4_679522_e, 0);

    struct timeval tv_r_JOIN_INNER_4_911937_s, tv_r_JOIN_INNER_4_911937_e;
    gettimeofday(&tv_r_JOIN_INNER_4_911937_s, 0);
    prev_events_grp_JOIN_INNER_TD_4581322.push_back(events_h2d_wr_JOIN_INNER_TD_5982183[0]);
    trans_JOIN_INNER_TD_4581322.add(&(tbl_Filter_TD_5945676_output));
    trans_JOIN_INNER_TD_4581322.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4581322), &(events_h2d_wr_JOIN_INNER_TD_4581322[0]));
    events_grp_JOIN_INNER_TD_4581322.push_back(events_h2d_wr_JOIN_INNER_TD_4581322[0]);
    events_grp_JOIN_INNER_TD_4581322.push_back(events_JOIN_INNER_TD_5982183[0]);
    krnl_JOIN_INNER_TD_4581322.run(0, &(events_grp_JOIN_INNER_TD_4581322), &(events_JOIN_INNER_TD_4581322[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_911937_e, 0);

    struct timeval tv_r_JOIN_INNER_3_18467_s, tv_r_JOIN_INNER_3_18467_e;
    gettimeofday(&tv_r_JOIN_INNER_3_18467_s, 0);
    prev_events_grp_JOIN_INNER_TD_3547194.push_back(events_h2d_wr_JOIN_INNER_TD_4828106[0]);
    trans_JOIN_INNER_TD_3547194.add(&(tbl_Filter_TD_4527149_output));
    trans_JOIN_INNER_TD_3547194.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3547194), &(events_h2d_wr_JOIN_INNER_TD_3547194[0]));
    events_grp_JOIN_INNER_TD_3547194.push_back(events_h2d_wr_JOIN_INNER_TD_3547194[0]);
    events_grp_JOIN_INNER_TD_3547194.push_back(events_JOIN_INNER_TD_4828106[0]);
    krnl_JOIN_INNER_TD_3547194.run(0, &(events_grp_JOIN_INNER_TD_3547194), &(events_JOIN_INNER_TD_3547194[0]));
    
    trans_JOIN_INNER_TD_3547194_out.add(&(tbl_JOIN_INNER_TD_3547194_output));
    trans_JOIN_INNER_TD_3547194_out.dev2host(0, &(events_JOIN_INNER_TD_3547194), &(events_d2h_rd_JOIN_INNER_TD_3547194[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_18467_e, 0);

    struct timeval tv_r_JOIN_INNER_3_988923_s, tv_r_JOIN_INNER_3_988923_e;
    gettimeofday(&tv_r_JOIN_INNER_3_988923_s, 0);
    prev_events_grp_JOIN_INNER_TD_328805.push_back(events_h2d_wr_JOIN_INNER_TD_4581322[0]);
    trans_JOIN_INNER_TD_328805.add(&(tbl_Filter_TD_4434162_output));
    trans_JOIN_INNER_TD_328805.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_328805), &(events_h2d_wr_JOIN_INNER_TD_328805[0]));
    events_grp_JOIN_INNER_TD_328805.push_back(events_h2d_wr_JOIN_INNER_TD_328805[0]);
    events_grp_JOIN_INNER_TD_328805.push_back(events_JOIN_INNER_TD_4581322[0]);
    krnl_JOIN_INNER_TD_328805.run(0, &(events_grp_JOIN_INNER_TD_328805), &(events_JOIN_INNER_TD_328805[0]));
    
    trans_JOIN_INNER_TD_328805_out.add(&(tbl_JOIN_INNER_TD_328805_output));
    trans_JOIN_INNER_TD_328805_out.dev2host(0, &(events_JOIN_INNER_TD_328805), &(events_d2h_rd_JOIN_INNER_TD_328805[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_988923_e, 0);

    struct timeval tv_r_Aggregate_2_905067_s, tv_r_Aggregate_2_905067_e;
    gettimeofday(&tv_r_Aggregate_2_905067_s, 0);
    SW_Aggregate_TD_248662(tbl_JOIN_INNER_TD_3547194_output, tbl_Aggregate_TD_248662_output);
    gettimeofday(&tv_r_Aggregate_2_905067_e, 0);

    struct timeval tv_r_Aggregate_2_203886_s, tv_r_Aggregate_2_203886_e;
    gettimeofday(&tv_r_Aggregate_2_203886_s, 0);
    SW_Aggregate_TD_2963332(tbl_JOIN_INNER_TD_328805_output, tbl_Aggregate_TD_2963332_output);
    gettimeofday(&tv_r_Aggregate_2_203886_e, 0);

    struct timeval tv_r_JOIN_CROSS_1_704152_s, tv_r_JOIN_CROSS_1_704152_e;
    gettimeofday(&tv_r_JOIN_CROSS_1_704152_s, 0);
    SW_JOIN_CROSS_TD_1182859(tbl_Aggregate_TD_2963332_output, tbl_Aggregate_TD_248662_output, tbl_JOIN_CROSS_TD_1182859_output);
    gettimeofday(&tv_r_JOIN_CROSS_1_704152_e, 0);

    struct timeval tv_r_Project_0_768237_s, tv_r_Project_0_768237_e;
    gettimeofday(&tv_r_Project_0_768237_s, 0);
    SW_Project_TD_0896501(tbl_JOIN_CROSS_TD_1182859_output, tbl_Project_TD_0896501_output);
    gettimeofday(&tv_r_Project_0_768237_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_581681_s, &tv_r_Filter_6_581681_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7366927_input: " << tbl_SerializeFromObject_TD_7366927_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_182962_s, &tv_r_Filter_6_182962_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7303184_input: " << tbl_SerializeFromObject_TD_7303184_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_33798_s, &tv_r_Filter_6_33798_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7909277_input: " << tbl_SerializeFromObject_TD_7909277_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_513224_s, &tv_r_Filter_6_513224_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7654654_input: " << tbl_SerializeFromObject_TD_7654654_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_609100_s, &tv_r_Filter_5_609100_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6967561_input: " << tbl_SerializeFromObject_TD_6967561_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_77173_s, &tv_r_JOIN_INNER_5_77173_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6511180_output: " << tbl_Filter_TD_6511180_output.getNumRow() << " " << "tbl_Filter_TD_6633999_output: " << tbl_Filter_TD_6633999_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_855210_s, &tv_r_Filter_5_855210_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6915499_input: " << tbl_SerializeFromObject_TD_6915499_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_301692_s, &tv_r_JOIN_INNER_5_301692_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_655281_output: " << tbl_Filter_TD_655281_output.getNumRow() << " " << "tbl_Filter_TD_6189517_output: " << tbl_Filter_TD_6189517_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_438018_s, &tv_r_Filter_4_438018_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5985009_input: " << tbl_SerializeFromObject_TD_5985009_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_632550_s, &tv_r_JOIN_INNER_4_632550_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5410044_output: " << tbl_JOIN_INNER_TD_5410044_output.getNumRow() << " " << "tbl_Filter_TD_5583903_output: " << tbl_Filter_TD_5583903_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_679522_s, &tv_r_Filter_4_679522_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5268380_input: " << tbl_SerializeFromObject_TD_5268380_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_911937_s, &tv_r_JOIN_INNER_4_911937_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5982183_output: " << tbl_JOIN_INNER_TD_5982183_output.getNumRow() << " " << "tbl_Filter_TD_5945676_output: " << tbl_Filter_TD_5945676_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_18467_s, &tv_r_JOIN_INNER_3_18467_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4828106_output: " << tbl_JOIN_INNER_TD_4828106_output.getNumRow() << " " << "tbl_Filter_TD_4527149_output: " << tbl_Filter_TD_4527149_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_988923_s, &tv_r_JOIN_INNER_3_988923_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4581322_output: " << tbl_JOIN_INNER_TD_4581322_output.getNumRow() << " " << "tbl_Filter_TD_4434162_output: " << tbl_Filter_TD_4434162_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_905067_s, &tv_r_Aggregate_2_905067_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3547194_output: " << tbl_JOIN_INNER_TD_3547194_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_203886_s, &tv_r_Aggregate_2_203886_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_328805_output: " << tbl_JOIN_INNER_TD_328805_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_1: " << tvdiff(&tv_r_JOIN_CROSS_1_704152_s, &tv_r_JOIN_CROSS_1_704152_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2963332_output: " << tbl_Aggregate_TD_2963332_output.getNumRow() << " " << "tbl_Aggregate_TD_248662_output: " << tbl_Aggregate_TD_248662_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_0: " << tvdiff(&tv_r_Project_0_768237_s, &tv_r_Project_0_768237_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_1182859_output: " << tbl_JOIN_CROSS_TD_1182859_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.6843974 * 1000 << "ms" << std::endl; 
    return 0; 
}
