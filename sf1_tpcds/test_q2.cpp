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

#include "cfgFunc_q2.hpp" 
#include "q2.hpp" 

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
    std::cout << "NOTE:running query #2\n."; 
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
    Table tbl_Sort_TD_0365665_output("tbl_Sort_TD_0365665_output", 6100000, 8, "");
    tbl_Sort_TD_0365665_output.allocateHost();
    Table tbl_Project_TD_1776759_output("tbl_Project_TD_1776759_output", 6100000, 8, "");
    tbl_Project_TD_1776759_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2107122_output("tbl_JOIN_INNER_TD_2107122_output", 6100000, 15, "");
    tbl_JOIN_INNER_TD_2107122_output.allocateHost();
    Table tbl_Project_TD_3338815_output("tbl_Project_TD_3338815_output", 6100000, 8, "");
    tbl_Project_TD_3338815_output.allocateHost();
    Table tbl_Project_TD_3157696_output("tbl_Project_TD_3157696_output", 6100000, 8, "");
    tbl_Project_TD_3157696_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4721950_output("tbl_JOIN_INNER_TD_4721950_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4721950_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4196728_output("tbl_JOIN_INNER_TD_4196728_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4196728_output.allocateHost();
    Table tbl_Aggregate_TD_5740714_output("tbl_Aggregate_TD_5740714_output", 6100000, 8, "");
    tbl_Aggregate_TD_5740714_output.allocateHost();
    Table tbl_Filter_TD_558953_output("tbl_Filter_TD_558953_output", 6100000, 1, "");
    tbl_Filter_TD_558953_output.allocateHost();
    Table tbl_Aggregate_TD_5801716_output("tbl_Aggregate_TD_5801716_output", 6100000, 8, "");
    tbl_Aggregate_TD_5801716_output.allocateHost();
    Table tbl_Filter_TD_5333220_output("tbl_Filter_TD_5333220_output", 6100000, 1, "");
    tbl_Filter_TD_5333220_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6454560_output("tbl_JOIN_INNER_TD_6454560_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6454560_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6863873_input;
    tbl_SerializeFromObject_TD_6863873_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6863873_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_6863873_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6863873_input.allocateHost();
    tbl_SerializeFromObject_TD_6863873_input.loadHost();
    Table tbl_JOIN_INNER_TD_651345_output("tbl_JOIN_INNER_TD_651345_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_651345_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6341474_input;
    tbl_SerializeFromObject_TD_6341474_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6341474_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_6341474_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6341474_input.allocateHost();
    tbl_SerializeFromObject_TD_6341474_input.loadHost();
    Table tbl_Union_TD_765942_output("tbl_Union_TD_765942_output", 6100000, 2, "");
    tbl_Union_TD_765942_output.allocateHost();
    Table tbl_Filter_TD_7576765_output("tbl_Filter_TD_7576765_output", 6100000, 3, "");
    tbl_Filter_TD_7576765_output.allocateHost();
    Table tbl_Union_TD_758796_output("tbl_Union_TD_758796_output", 6100000, 2, "");
    tbl_Union_TD_758796_output.allocateHost();
    Table tbl_Filter_TD_7198621_output("tbl_Filter_TD_7198621_output", 6100000, 3, "");
    tbl_Filter_TD_7198621_output.allocateHost();
    Table tbl_Project_TD_8895802_output("tbl_Project_TD_8895802_output", 6100000, 2, "");
    tbl_Project_TD_8895802_output.allocateHost();
    Table tbl_Project_TD_8314740_output("tbl_Project_TD_8314740_output", 6100000, 2, "");
    tbl_Project_TD_8314740_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8331725_input;
    tbl_SerializeFromObject_TD_8331725_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8331725_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8331725_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_8331725_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8331725_input.allocateHost();
    tbl_SerializeFromObject_TD_8331725_input.loadHost();
    Table tbl_Project_TD_836089_output("tbl_Project_TD_836089_output", 6100000, 2, "");
    tbl_Project_TD_836089_output.allocateHost();
    Table tbl_Project_TD_8208729_output("tbl_Project_TD_8208729_output", 6100000, 2, "");
    tbl_Project_TD_8208729_output.allocateHost();
    Table tbl_SerializeFromObject_TD_894845_input;
    tbl_SerializeFromObject_TD_894845_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_894845_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_894845_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_894845_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_894845_input.allocateHost();
    tbl_SerializeFromObject_TD_894845_input.loadHost();
    Table tbl_Filter_TD_9936457_output("tbl_Filter_TD_9936457_output", 6100000, 2, "");
    tbl_Filter_TD_9936457_output.allocateHost();
    Table tbl_Filter_TD_9510183_output("tbl_Filter_TD_9510183_output", 6100000, 2, "");
    tbl_Filter_TD_9510183_output.allocateHost();
    Table tbl_Filter_TD_9825442_output("tbl_Filter_TD_9825442_output", 6100000, 2, "");
    tbl_Filter_TD_9825442_output.allocateHost();
    Table tbl_Filter_TD_9773239_output("tbl_Filter_TD_9773239_output", 6100000, 2, "");
    tbl_Filter_TD_9773239_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10972201_input;
    tbl_SerializeFromObject_TD_10972201_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10972201_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10972201_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10972201_input.allocateHost();
    tbl_SerializeFromObject_TD_10972201_input.loadHost();
    Table tbl_SerializeFromObject_TD_10592338_input;
    tbl_SerializeFromObject_TD_10592338_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10592338_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10592338_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10592338_input.allocateHost();
    tbl_SerializeFromObject_TD_10592338_input.loadHost();
    Table tbl_SerializeFromObject_TD_10585026_input;
    tbl_SerializeFromObject_TD_10585026_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10585026_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10585026_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10585026_input.allocateHost();
    tbl_SerializeFromObject_TD_10585026_input.loadHost();
    Table tbl_SerializeFromObject_TD_10324965_input;
    tbl_SerializeFromObject_TD_10324965_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10324965_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10324965_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10324965_input.allocateHost();
    tbl_SerializeFromObject_TD_10324965_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4721950_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4196728_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_5740714_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_558953_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_5801716_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5333220_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4721950_cmds;
    cfg_JOIN_INNER_TD_4721950_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4721950_gqe_join (cfg_JOIN_INNER_TD_4721950_cmds.cmd);
    cfg_JOIN_INNER_TD_4721950_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4196728_cmds;
    cfg_JOIN_INNER_TD_4196728_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4196728_gqe_join (cfg_JOIN_INNER_TD_4196728_cmds.cmd);
    cfg_JOIN_INNER_TD_4196728_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4721950;
    krnl_JOIN_INNER_TD_4721950 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4721950.setup(tbl_Aggregate_TD_5740714_output, tbl_Filter_TD_558953_output, tbl_JOIN_INNER_TD_4721950_output, cfg_JOIN_INNER_TD_4721950_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4196728;
    krnl_JOIN_INNER_TD_4196728 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4196728.setup(tbl_Aggregate_TD_5801716_output, tbl_Filter_TD_5333220_output, tbl_JOIN_INNER_TD_4196728_output, cfg_JOIN_INNER_TD_4196728_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4721950;
    trans_JOIN_INNER_TD_4721950.setq(q_h);
    trans_JOIN_INNER_TD_4721950.add(&(cfg_JOIN_INNER_TD_4721950_cmds));
    transEngine trans_JOIN_INNER_TD_4721950_out;
    trans_JOIN_INNER_TD_4721950_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4196728;
    trans_JOIN_INNER_TD_4196728.setq(q_h);
    trans_JOIN_INNER_TD_4196728.add(&(cfg_JOIN_INNER_TD_4196728_cmds));
    transEngine trans_JOIN_INNER_TD_4196728_out;
    trans_JOIN_INNER_TD_4196728_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4721950;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4721950;
    std::vector<cl::Event> events_JOIN_INNER_TD_4721950;
    events_h2d_wr_JOIN_INNER_TD_4721950.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4721950.resize(1);
    events_JOIN_INNER_TD_4721950.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4721950;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4721950;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4196728;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4196728;
    std::vector<cl::Event> events_JOIN_INNER_TD_4196728;
    events_h2d_wr_JOIN_INNER_TD_4196728.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4196728.resize(1);
    events_JOIN_INNER_TD_4196728.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4196728;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4196728;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_992774_s, tv_r_Filter_9_992774_e;
    gettimeofday(&tv_r_Filter_9_992774_s, 0);
    SW_Filter_TD_9773239(tbl_SerializeFromObject_TD_10324965_input, tbl_Filter_TD_9773239_output);
    gettimeofday(&tv_r_Filter_9_992774_e, 0);

    struct timeval tv_r_Filter_9_739452_s, tv_r_Filter_9_739452_e;
    gettimeofday(&tv_r_Filter_9_739452_s, 0);
    SW_Filter_TD_9825442(tbl_SerializeFromObject_TD_10585026_input, tbl_Filter_TD_9825442_output);
    gettimeofday(&tv_r_Filter_9_739452_e, 0);

    struct timeval tv_r_Filter_9_987289_s, tv_r_Filter_9_987289_e;
    gettimeofday(&tv_r_Filter_9_987289_s, 0);
    SW_Filter_TD_9510183(tbl_SerializeFromObject_TD_10592338_input, tbl_Filter_TD_9510183_output);
    gettimeofday(&tv_r_Filter_9_987289_e, 0);

    struct timeval tv_r_Filter_9_888512_s, tv_r_Filter_9_888512_e;
    gettimeofday(&tv_r_Filter_9_888512_s, 0);
    SW_Filter_TD_9936457(tbl_SerializeFromObject_TD_10972201_input, tbl_Filter_TD_9936457_output);
    gettimeofday(&tv_r_Filter_9_888512_e, 0);

    struct timeval tv_r_Project_8_593455_s, tv_r_Project_8_593455_e;
    gettimeofday(&tv_r_Project_8_593455_s, 0);
    SW_Project_TD_8208729(tbl_Filter_TD_9773239_output, tbl_Project_TD_8208729_output);
    gettimeofday(&tv_r_Project_8_593455_e, 0);

    struct timeval tv_r_Project_8_429832_s, tv_r_Project_8_429832_e;
    gettimeofday(&tv_r_Project_8_429832_s, 0);
    SW_Project_TD_836089(tbl_Filter_TD_9825442_output, tbl_Project_TD_836089_output);
    gettimeofday(&tv_r_Project_8_429832_e, 0);

    struct timeval tv_r_Project_8_515755_s, tv_r_Project_8_515755_e;
    gettimeofday(&tv_r_Project_8_515755_s, 0);
    SW_Project_TD_8314740(tbl_Filter_TD_9510183_output, tbl_Project_TD_8314740_output);
    gettimeofday(&tv_r_Project_8_515755_e, 0);

    struct timeval tv_r_Project_8_922945_s, tv_r_Project_8_922945_e;
    gettimeofday(&tv_r_Project_8_922945_s, 0);
    SW_Project_TD_8895802(tbl_Filter_TD_9936457_output, tbl_Project_TD_8895802_output);
    gettimeofday(&tv_r_Project_8_922945_e, 0);

    struct timeval tv_r_Filter_7_61554_s, tv_r_Filter_7_61554_e;
    gettimeofday(&tv_r_Filter_7_61554_s, 0);
    SW_Filter_TD_7198621(tbl_SerializeFromObject_TD_894845_input, tbl_Filter_TD_7198621_output);
    gettimeofday(&tv_r_Filter_7_61554_e, 0);

    struct timeval tv_r_Union_7_547069_s, tv_r_Union_7_547069_e;
    gettimeofday(&tv_r_Union_7_547069_s, 0);
    SW_Union_TD_758796(tbl_Project_TD_836089_output, tbl_Project_TD_8208729_output, tbl_Union_TD_758796_output);
    gettimeofday(&tv_r_Union_7_547069_e, 0);

    struct timeval tv_r_Filter_7_624522_s, tv_r_Filter_7_624522_e;
    gettimeofday(&tv_r_Filter_7_624522_s, 0);
    SW_Filter_TD_7576765(tbl_SerializeFromObject_TD_8331725_input, tbl_Filter_TD_7576765_output);
    gettimeofday(&tv_r_Filter_7_624522_e, 0);

    struct timeval tv_r_Union_7_231557_s, tv_r_Union_7_231557_e;
    gettimeofday(&tv_r_Union_7_231557_s, 0);
    SW_Union_TD_765942(tbl_Project_TD_8895802_output, tbl_Project_TD_8314740_output, tbl_Union_TD_765942_output);
    gettimeofday(&tv_r_Union_7_231557_e, 0);

    struct timeval tv_r_JOIN_INNER_6_744511_s, tv_r_JOIN_INNER_6_744511_e;
    gettimeofday(&tv_r_JOIN_INNER_6_744511_s, 0);
    SW_JOIN_INNER_TD_651345(tbl_Union_TD_758796_output, tbl_Filter_TD_7198621_output, tbl_JOIN_INNER_TD_651345_output);
    gettimeofday(&tv_r_JOIN_INNER_6_744511_e, 0);

    struct timeval tv_r_JOIN_INNER_6_800307_s, tv_r_JOIN_INNER_6_800307_e;
    gettimeofday(&tv_r_JOIN_INNER_6_800307_s, 0);
    SW_JOIN_INNER_TD_6454560(tbl_Union_TD_765942_output, tbl_Filter_TD_7576765_output, tbl_JOIN_INNER_TD_6454560_output);
    gettimeofday(&tv_r_JOIN_INNER_6_800307_e, 0);

    struct timeval tv_r_Filter_5_189781_s, tv_r_Filter_5_189781_e;
    gettimeofday(&tv_r_Filter_5_189781_s, 0);
    SW_Filter_TD_5333220(tbl_SerializeFromObject_TD_6341474_input, tbl_Filter_TD_5333220_output);
    gettimeofday(&tv_r_Filter_5_189781_e, 0);

    struct timeval tv_r_Aggregate_5_841402_s, tv_r_Aggregate_5_841402_e;
    gettimeofday(&tv_r_Aggregate_5_841402_s, 0);
    SW_Aggregate_TD_5801716(tbl_JOIN_INNER_TD_651345_output, tbl_Aggregate_TD_5801716_output);
    gettimeofday(&tv_r_Aggregate_5_841402_e, 0);

    struct timeval tv_r_Filter_5_291409_s, tv_r_Filter_5_291409_e;
    gettimeofday(&tv_r_Filter_5_291409_s, 0);
    SW_Filter_TD_558953(tbl_SerializeFromObject_TD_6863873_input, tbl_Filter_TD_558953_output);
    gettimeofday(&tv_r_Filter_5_291409_e, 0);

    struct timeval tv_r_Aggregate_5_762966_s, tv_r_Aggregate_5_762966_e;
    gettimeofday(&tv_r_Aggregate_5_762966_s, 0);
    SW_Aggregate_TD_5740714(tbl_JOIN_INNER_TD_6454560_output, tbl_Aggregate_TD_5740714_output);
    gettimeofday(&tv_r_Aggregate_5_762966_e, 0);

    struct timeval tv_r_JOIN_INNER_4_94860_s, tv_r_JOIN_INNER_4_94860_e;
    gettimeofday(&tv_r_JOIN_INNER_4_94860_s, 0);
    trans_JOIN_INNER_TD_4196728.add(&(tbl_Aggregate_TD_5801716_output));
    trans_JOIN_INNER_TD_4196728.add(&(tbl_Filter_TD_5333220_output));
    trans_JOIN_INNER_TD_4196728.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4196728), &(events_h2d_wr_JOIN_INNER_TD_4196728[0]));
    events_grp_JOIN_INNER_TD_4196728.push_back(events_h2d_wr_JOIN_INNER_TD_4196728[0]);
    krnl_JOIN_INNER_TD_4196728.run(0, &(events_grp_JOIN_INNER_TD_4196728), &(events_JOIN_INNER_TD_4196728[0]));
    
    trans_JOIN_INNER_TD_4196728_out.add(&(tbl_JOIN_INNER_TD_4196728_output));
    trans_JOIN_INNER_TD_4196728_out.dev2host(0, &(events_JOIN_INNER_TD_4196728), &(events_d2h_rd_JOIN_INNER_TD_4196728[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_94860_e, 0);

    struct timeval tv_r_JOIN_INNER_4_858069_s, tv_r_JOIN_INNER_4_858069_e;
    gettimeofday(&tv_r_JOIN_INNER_4_858069_s, 0);
    trans_JOIN_INNER_TD_4721950.add(&(tbl_Aggregate_TD_5740714_output));
    trans_JOIN_INNER_TD_4721950.add(&(tbl_Filter_TD_558953_output));
    trans_JOIN_INNER_TD_4721950.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4721950), &(events_h2d_wr_JOIN_INNER_TD_4721950[0]));
    events_grp_JOIN_INNER_TD_4721950.push_back(events_h2d_wr_JOIN_INNER_TD_4721950[0]);
    krnl_JOIN_INNER_TD_4721950.run(0, &(events_grp_JOIN_INNER_TD_4721950), &(events_JOIN_INNER_TD_4721950[0]));
    
    trans_JOIN_INNER_TD_4721950_out.add(&(tbl_JOIN_INNER_TD_4721950_output));
    trans_JOIN_INNER_TD_4721950_out.dev2host(0, &(events_JOIN_INNER_TD_4721950), &(events_d2h_rd_JOIN_INNER_TD_4721950[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_858069_e, 0);

    struct timeval tv_r_Project_3_467174_s, tv_r_Project_3_467174_e;
    gettimeofday(&tv_r_Project_3_467174_s, 0);
    SW_Project_TD_3157696(tbl_JOIN_INNER_TD_4196728_output, tbl_Project_TD_3157696_output);
    gettimeofday(&tv_r_Project_3_467174_e, 0);

    struct timeval tv_r_Project_3_9075_s, tv_r_Project_3_9075_e;
    gettimeofday(&tv_r_Project_3_9075_s, 0);
    SW_Project_TD_3338815(tbl_JOIN_INNER_TD_4721950_output, tbl_Project_TD_3338815_output);
    gettimeofday(&tv_r_Project_3_9075_e, 0);

    struct timeval tv_r_JOIN_INNER_2_704468_s, tv_r_JOIN_INNER_2_704468_e;
    gettimeofday(&tv_r_JOIN_INNER_2_704468_s, 0);
    SW_JOIN_INNER_TD_2107122(tbl_Project_TD_3338815_output, tbl_Project_TD_3157696_output, tbl_JOIN_INNER_TD_2107122_output);
    gettimeofday(&tv_r_JOIN_INNER_2_704468_e, 0);

    struct timeval tv_r_Project_1_148975_s, tv_r_Project_1_148975_e;
    gettimeofday(&tv_r_Project_1_148975_s, 0);
    SW_Project_TD_1776759(tbl_JOIN_INNER_TD_2107122_output, tbl_Project_TD_1776759_output);
    gettimeofday(&tv_r_Project_1_148975_e, 0);

    struct timeval tv_r_Sort_0_216779_s, tv_r_Sort_0_216779_e;
    gettimeofday(&tv_r_Sort_0_216779_s, 0);
    SW_Sort_TD_0365665(tbl_Project_TD_1776759_output, tbl_Sort_TD_0365665_output);
    gettimeofday(&tv_r_Sort_0_216779_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_992774_s, &tv_r_Filter_9_992774_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10324965_input: " << tbl_SerializeFromObject_TD_10324965_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_739452_s, &tv_r_Filter_9_739452_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10585026_input: " << tbl_SerializeFromObject_TD_10585026_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_987289_s, &tv_r_Filter_9_987289_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10592338_input: " << tbl_SerializeFromObject_TD_10592338_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_888512_s, &tv_r_Filter_9_888512_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10972201_input: " << tbl_SerializeFromObject_TD_10972201_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_593455_s, &tv_r_Project_8_593455_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9773239_output: " << tbl_Filter_TD_9773239_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_429832_s, &tv_r_Project_8_429832_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9825442_output: " << tbl_Filter_TD_9825442_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_515755_s, &tv_r_Project_8_515755_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9510183_output: " << tbl_Filter_TD_9510183_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_922945_s, &tv_r_Project_8_922945_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9936457_output: " << tbl_Filter_TD_9936457_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_61554_s, &tv_r_Filter_7_61554_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_894845_input: " << tbl_SerializeFromObject_TD_894845_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_547069_s, &tv_r_Union_7_547069_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_836089_output: " << tbl_Project_TD_836089_output.getNumRow() << " " << "tbl_Project_TD_8208729_output: " << tbl_Project_TD_8208729_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_624522_s, &tv_r_Filter_7_624522_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8331725_input: " << tbl_SerializeFromObject_TD_8331725_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_231557_s, &tv_r_Union_7_231557_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8895802_output: " << tbl_Project_TD_8895802_output.getNumRow() << " " << "tbl_Project_TD_8314740_output: " << tbl_Project_TD_8314740_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_744511_s, &tv_r_JOIN_INNER_6_744511_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_758796_output: " << tbl_Union_TD_758796_output.getNumRow() << " " << "tbl_Filter_TD_7198621_output: " << tbl_Filter_TD_7198621_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_800307_s, &tv_r_JOIN_INNER_6_800307_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_765942_output: " << tbl_Union_TD_765942_output.getNumRow() << " " << "tbl_Filter_TD_7576765_output: " << tbl_Filter_TD_7576765_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_189781_s, &tv_r_Filter_5_189781_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6341474_input: " << tbl_SerializeFromObject_TD_6341474_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_841402_s, &tv_r_Aggregate_5_841402_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_651345_output: " << tbl_JOIN_INNER_TD_651345_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_291409_s, &tv_r_Filter_5_291409_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6863873_input: " << tbl_SerializeFromObject_TD_6863873_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_762966_s, &tv_r_Aggregate_5_762966_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6454560_output: " << tbl_JOIN_INNER_TD_6454560_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_94860_s, &tv_r_JOIN_INNER_4_94860_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5801716_output: " << tbl_Aggregate_TD_5801716_output.getNumRow() << " " << "tbl_Filter_TD_5333220_output: " << tbl_Filter_TD_5333220_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_858069_s, &tv_r_JOIN_INNER_4_858069_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5740714_output: " << tbl_Aggregate_TD_5740714_output.getNumRow() << " " << "tbl_Filter_TD_558953_output: " << tbl_Filter_TD_558953_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_467174_s, &tv_r_Project_3_467174_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4196728_output: " << tbl_JOIN_INNER_TD_4196728_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_9075_s, &tv_r_Project_3_9075_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4721950_output: " << tbl_JOIN_INNER_TD_4721950_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_704468_s, &tv_r_JOIN_INNER_2_704468_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3338815_output: " << tbl_Project_TD_3338815_output.getNumRow() << " " << "tbl_Project_TD_3157696_output: " << tbl_Project_TD_3157696_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_148975_s, &tv_r_Project_1_148975_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2107122_output: " << tbl_JOIN_INNER_TD_2107122_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_216779_s, &tv_r_Sort_0_216779_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1776759_output: " << tbl_Project_TD_1776759_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.9436351 * 1000 << "ms" << std::endl; 
    return 0; 
}
