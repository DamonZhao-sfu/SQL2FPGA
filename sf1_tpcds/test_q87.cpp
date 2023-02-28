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

#include "cfgFunc_q87.hpp" 
#include "q87.hpp" 

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
    std::cout << "NOTE:running query #87\n."; 
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
    Table tbl_Aggregate_TD_045007_output("tbl_Aggregate_TD_045007_output", 6100000, 1, "");
    tbl_Aggregate_TD_045007_output.allocateHost();
    Table tbl_Aggregate_TD_1207379_output("tbl_Aggregate_TD_1207379_output", 6100000, 3, "");
    tbl_Aggregate_TD_1207379_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_2781583_output("tbl_JOIN_LEFTANTI_TD_2781583_output", 6100000, 3, "");
    tbl_JOIN_LEFTANTI_TD_2781583_output.allocateHost();
    Table tbl_Aggregate_TD_334750_output("tbl_Aggregate_TD_334750_output", 6100000, 3, "");
    tbl_Aggregate_TD_334750_output.allocateHost();
    Table tbl_Aggregate_TD_3740660_output("tbl_Aggregate_TD_3740660_output", 6100000, 3, "");
    tbl_Aggregate_TD_3740660_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_4535172_output("tbl_JOIN_LEFTANTI_TD_4535172_output", 6100000, 3, "");
    tbl_JOIN_LEFTANTI_TD_4535172_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4382945_output("tbl_JOIN_INNER_TD_4382945_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4382945_output.allocateHost();
    Table tbl_Aggregate_TD_5210836_output("tbl_Aggregate_TD_5210836_output", 6100000, 3, "");
    tbl_Aggregate_TD_5210836_output.allocateHost();
    Table tbl_Aggregate_TD_5686133_output("tbl_Aggregate_TD_5686133_output", 6100000, 3, "");
    tbl_Aggregate_TD_5686133_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5956612_output("tbl_JOIN_INNER_TD_5956612_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5956612_output.allocateHost();
    Table tbl_Filter_TD_5323794_output("tbl_Filter_TD_5323794_output", 6100000, 3, "");
    tbl_Filter_TD_5323794_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6135963_output("tbl_JOIN_INNER_TD_6135963_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6135963_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6449902_output("tbl_JOIN_INNER_TD_6449902_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6449902_output.allocateHost();
    Table tbl_Filter_TD_6651659_output("tbl_Filter_TD_6651659_output", 6100000, 2, "");
    tbl_Filter_TD_6651659_output.allocateHost();
    Table tbl_Filter_TD_6736629_output("tbl_Filter_TD_6736629_output", 6100000, 2, "");
    tbl_Filter_TD_6736629_output.allocateHost();
    Table tbl_SerializeFromObject_TD_653513_input;
    tbl_SerializeFromObject_TD_653513_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_653513_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_653513_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_653513_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_653513_input.allocateHost();
    tbl_SerializeFromObject_TD_653513_input.loadHost();
    Table tbl_JOIN_INNER_TD_7158615_output("tbl_JOIN_INNER_TD_7158615_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7158615_output.allocateHost();
    Table tbl_Filter_TD_7196343_output("tbl_Filter_TD_7196343_output", 6100000, 3, "");
    tbl_Filter_TD_7196343_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7987939_output("tbl_JOIN_INNER_TD_7987939_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7987939_output.allocateHost();
    Table tbl_Filter_TD_71901_output("tbl_Filter_TD_71901_output", 6100000, 3, "");
    tbl_Filter_TD_71901_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7121715_input;
    tbl_SerializeFromObject_TD_7121715_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7121715_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7121715_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_7121715_input.allocateHost();
    tbl_SerializeFromObject_TD_7121715_input.loadHost();
    Table tbl_SerializeFromObject_TD_7121252_input;
    tbl_SerializeFromObject_TD_7121252_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7121252_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7121252_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7121252_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7121252_input.allocateHost();
    tbl_SerializeFromObject_TD_7121252_input.loadHost();
    Table tbl_Filter_TD_8537167_output("tbl_Filter_TD_8537167_output", 6100000, 2, "");
    tbl_Filter_TD_8537167_output.allocateHost();
    Table tbl_Filter_TD_8987276_output("tbl_Filter_TD_8987276_output", 6100000, 2, "");
    tbl_Filter_TD_8987276_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8737618_input;
    tbl_SerializeFromObject_TD_8737618_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8737618_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8737618_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8737618_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8737618_input.allocateHost();
    tbl_SerializeFromObject_TD_8737618_input.loadHost();
    Table tbl_Filter_TD_8405416_output("tbl_Filter_TD_8405416_output", 6100000, 2, "");
    tbl_Filter_TD_8405416_output.allocateHost();
    Table tbl_Filter_TD_888282_output("tbl_Filter_TD_888282_output", 6100000, 2, "");
    tbl_Filter_TD_888282_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8342999_input;
    tbl_SerializeFromObject_TD_8342999_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8342999_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8342999_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8342999_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8342999_input.allocateHost();
    tbl_SerializeFromObject_TD_8342999_input.loadHost();
    Table tbl_SerializeFromObject_TD_9537670_input;
    tbl_SerializeFromObject_TD_9537670_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9537670_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9537670_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9537670_input.allocateHost();
    tbl_SerializeFromObject_TD_9537670_input.loadHost();
    Table tbl_SerializeFromObject_TD_9263414_input;
    tbl_SerializeFromObject_TD_9263414_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9263414_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9263414_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9263414_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9263414_input.allocateHost();
    tbl_SerializeFromObject_TD_9263414_input.loadHost();
    Table tbl_SerializeFromObject_TD_9640121_input;
    tbl_SerializeFromObject_TD_9640121_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9640121_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9640121_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_9640121_input.allocateHost();
    tbl_SerializeFromObject_TD_9640121_input.loadHost();
    Table tbl_SerializeFromObject_TD_9935731_input;
    tbl_SerializeFromObject_TD_9935731_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9935731_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9935731_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9935731_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9935731_input.allocateHost();
    tbl_SerializeFromObject_TD_9935731_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5956612_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6651659_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6736629_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7158615_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7987939_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8537167_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8987276_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8405416_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_888282_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5956612_cmds;
    cfg_JOIN_INNER_TD_5956612_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5956612_gqe_join (cfg_JOIN_INNER_TD_5956612_cmds.cmd);
    cfg_JOIN_INNER_TD_5956612_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7158615_cmds;
    cfg_JOIN_INNER_TD_7158615_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7158615_gqe_join (cfg_JOIN_INNER_TD_7158615_cmds.cmd);
    cfg_JOIN_INNER_TD_7158615_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7987939_cmds;
    cfg_JOIN_INNER_TD_7987939_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7987939_gqe_join (cfg_JOIN_INNER_TD_7987939_cmds.cmd);
    cfg_JOIN_INNER_TD_7987939_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5956612;
    krnl_JOIN_INNER_TD_5956612 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5956612.setup(tbl_Filter_TD_6651659_output, tbl_Filter_TD_6736629_output, tbl_JOIN_INNER_TD_5956612_output, cfg_JOIN_INNER_TD_5956612_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7158615;
    krnl_JOIN_INNER_TD_7158615 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7158615.setup(tbl_Filter_TD_8537167_output, tbl_Filter_TD_8987276_output, tbl_JOIN_INNER_TD_7158615_output, cfg_JOIN_INNER_TD_7158615_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7987939;
    krnl_JOIN_INNER_TD_7987939 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7987939.setup(tbl_Filter_TD_8405416_output, tbl_Filter_TD_888282_output, tbl_JOIN_INNER_TD_7987939_output, cfg_JOIN_INNER_TD_7987939_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5956612;
    trans_JOIN_INNER_TD_5956612.setq(q_h);
    trans_JOIN_INNER_TD_5956612.add(&(cfg_JOIN_INNER_TD_5956612_cmds));
    transEngine trans_JOIN_INNER_TD_5956612_out;
    trans_JOIN_INNER_TD_5956612_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7158615;
    trans_JOIN_INNER_TD_7158615.setq(q_h);
    trans_JOIN_INNER_TD_7158615.add(&(cfg_JOIN_INNER_TD_7158615_cmds));
    transEngine trans_JOIN_INNER_TD_7158615_out;
    trans_JOIN_INNER_TD_7158615_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7987939;
    trans_JOIN_INNER_TD_7987939.setq(q_h);
    trans_JOIN_INNER_TD_7987939.add(&(cfg_JOIN_INNER_TD_7987939_cmds));
    transEngine trans_JOIN_INNER_TD_7987939_out;
    trans_JOIN_INNER_TD_7987939_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5956612;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5956612;
    std::vector<cl::Event> events_JOIN_INNER_TD_5956612;
    events_h2d_wr_JOIN_INNER_TD_5956612.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5956612.resize(1);
    events_JOIN_INNER_TD_5956612.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5956612;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5956612;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7158615;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7158615;
    std::vector<cl::Event> events_JOIN_INNER_TD_7158615;
    events_h2d_wr_JOIN_INNER_TD_7158615.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7158615.resize(1);
    events_JOIN_INNER_TD_7158615.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7158615;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7158615;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7987939;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7987939;
    std::vector<cl::Event> events_JOIN_INNER_TD_7987939;
    events_h2d_wr_JOIN_INNER_TD_7987939.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7987939.resize(1);
    events_JOIN_INNER_TD_7987939.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7987939;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7987939;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_498207_s, tv_r_Filter_8_498207_e;
    gettimeofday(&tv_r_Filter_8_498207_s, 0);
    SW_Filter_TD_888282(tbl_SerializeFromObject_TD_9935731_input, tbl_Filter_TD_888282_output);
    gettimeofday(&tv_r_Filter_8_498207_e, 0);

    struct timeval tv_r_Filter_8_971211_s, tv_r_Filter_8_971211_e;
    gettimeofday(&tv_r_Filter_8_971211_s, 0);
    SW_Filter_TD_8405416(tbl_SerializeFromObject_TD_9640121_input, tbl_Filter_TD_8405416_output);
    gettimeofday(&tv_r_Filter_8_971211_e, 0);

    struct timeval tv_r_Filter_8_375684_s, tv_r_Filter_8_375684_e;
    gettimeofday(&tv_r_Filter_8_375684_s, 0);
    SW_Filter_TD_8987276(tbl_SerializeFromObject_TD_9263414_input, tbl_Filter_TD_8987276_output);
    gettimeofday(&tv_r_Filter_8_375684_e, 0);

    struct timeval tv_r_Filter_8_268912_s, tv_r_Filter_8_268912_e;
    gettimeofday(&tv_r_Filter_8_268912_s, 0);
    SW_Filter_TD_8537167(tbl_SerializeFromObject_TD_9537670_input, tbl_Filter_TD_8537167_output);
    gettimeofday(&tv_r_Filter_8_268912_e, 0);

    struct timeval tv_r_Filter_7_920685_s, tv_r_Filter_7_920685_e;
    gettimeofday(&tv_r_Filter_7_920685_s, 0);
    SW_Filter_TD_71901(tbl_SerializeFromObject_TD_8342999_input, tbl_Filter_TD_71901_output);
    gettimeofday(&tv_r_Filter_7_920685_e, 0);

    struct timeval tv_r_JOIN_INNER_7_115304_s, tv_r_JOIN_INNER_7_115304_e;
    gettimeofday(&tv_r_JOIN_INNER_7_115304_s, 0);
    trans_JOIN_INNER_TD_7987939.add(&(tbl_Filter_TD_8405416_output));
    trans_JOIN_INNER_TD_7987939.add(&(tbl_Filter_TD_888282_output));
    trans_JOIN_INNER_TD_7987939.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7987939), &(events_h2d_wr_JOIN_INNER_TD_7987939[0]));
    events_grp_JOIN_INNER_TD_7987939.push_back(events_h2d_wr_JOIN_INNER_TD_7987939[0]);
    krnl_JOIN_INNER_TD_7987939.run(0, &(events_grp_JOIN_INNER_TD_7987939), &(events_JOIN_INNER_TD_7987939[0]));
    
    trans_JOIN_INNER_TD_7987939_out.add(&(tbl_JOIN_INNER_TD_7987939_output));
    trans_JOIN_INNER_TD_7987939_out.dev2host(0, &(events_JOIN_INNER_TD_7987939), &(events_d2h_rd_JOIN_INNER_TD_7987939[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_115304_e, 0);

    struct timeval tv_r_Filter_7_407138_s, tv_r_Filter_7_407138_e;
    gettimeofday(&tv_r_Filter_7_407138_s, 0);
    SW_Filter_TD_7196343(tbl_SerializeFromObject_TD_8737618_input, tbl_Filter_TD_7196343_output);
    gettimeofday(&tv_r_Filter_7_407138_e, 0);

    struct timeval tv_r_JOIN_INNER_7_860506_s, tv_r_JOIN_INNER_7_860506_e;
    gettimeofday(&tv_r_JOIN_INNER_7_860506_s, 0);
    trans_JOIN_INNER_TD_7158615.add(&(tbl_Filter_TD_8537167_output));
    trans_JOIN_INNER_TD_7158615.add(&(tbl_Filter_TD_8987276_output));
    trans_JOIN_INNER_TD_7158615.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7158615), &(events_h2d_wr_JOIN_INNER_TD_7158615[0]));
    events_grp_JOIN_INNER_TD_7158615.push_back(events_h2d_wr_JOIN_INNER_TD_7158615[0]);
    krnl_JOIN_INNER_TD_7158615.run(0, &(events_grp_JOIN_INNER_TD_7158615), &(events_JOIN_INNER_TD_7158615[0]));
    
    trans_JOIN_INNER_TD_7158615_out.add(&(tbl_JOIN_INNER_TD_7158615_output));
    trans_JOIN_INNER_TD_7158615_out.dev2host(0, &(events_JOIN_INNER_TD_7158615), &(events_d2h_rd_JOIN_INNER_TD_7158615[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_860506_e, 0);

    struct timeval tv_r_Filter_6_106979_s, tv_r_Filter_6_106979_e;
    gettimeofday(&tv_r_Filter_6_106979_s, 0);
    SW_Filter_TD_6736629(tbl_SerializeFromObject_TD_7121252_input, tbl_Filter_TD_6736629_output);
    gettimeofday(&tv_r_Filter_6_106979_e, 0);

    struct timeval tv_r_Filter_6_153380_s, tv_r_Filter_6_153380_e;
    gettimeofday(&tv_r_Filter_6_153380_s, 0);
    SW_Filter_TD_6651659(tbl_SerializeFromObject_TD_7121715_input, tbl_Filter_TD_6651659_output);
    gettimeofday(&tv_r_Filter_6_153380_e, 0);

    struct timeval tv_r_JOIN_INNER_6_191798_s, tv_r_JOIN_INNER_6_191798_e;
    gettimeofday(&tv_r_JOIN_INNER_6_191798_s, 0);
    SW_JOIN_INNER_TD_6449902(tbl_JOIN_INNER_TD_7987939_output, tbl_Filter_TD_71901_output, tbl_JOIN_INNER_TD_6449902_output);
    gettimeofday(&tv_r_JOIN_INNER_6_191798_e, 0);

    struct timeval tv_r_JOIN_INNER_6_350501_s, tv_r_JOIN_INNER_6_350501_e;
    gettimeofday(&tv_r_JOIN_INNER_6_350501_s, 0);
    SW_JOIN_INNER_TD_6135963(tbl_JOIN_INNER_TD_7158615_output, tbl_Filter_TD_7196343_output, tbl_JOIN_INNER_TD_6135963_output);
    gettimeofday(&tv_r_JOIN_INNER_6_350501_e, 0);

    struct timeval tv_r_Filter_5_931621_s, tv_r_Filter_5_931621_e;
    gettimeofday(&tv_r_Filter_5_931621_s, 0);
    SW_Filter_TD_5323794(tbl_SerializeFromObject_TD_653513_input, tbl_Filter_TD_5323794_output);
    gettimeofday(&tv_r_Filter_5_931621_e, 0);

    struct timeval tv_r_JOIN_INNER_5_454591_s, tv_r_JOIN_INNER_5_454591_e;
    gettimeofday(&tv_r_JOIN_INNER_5_454591_s, 0);
    trans_JOIN_INNER_TD_5956612.add(&(tbl_Filter_TD_6651659_output));
    trans_JOIN_INNER_TD_5956612.add(&(tbl_Filter_TD_6736629_output));
    trans_JOIN_INNER_TD_5956612.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5956612), &(events_h2d_wr_JOIN_INNER_TD_5956612[0]));
    events_grp_JOIN_INNER_TD_5956612.push_back(events_h2d_wr_JOIN_INNER_TD_5956612[0]);
    krnl_JOIN_INNER_TD_5956612.run(0, &(events_grp_JOIN_INNER_TD_5956612), &(events_JOIN_INNER_TD_5956612[0]));
    
    trans_JOIN_INNER_TD_5956612_out.add(&(tbl_JOIN_INNER_TD_5956612_output));
    trans_JOIN_INNER_TD_5956612_out.dev2host(0, &(events_JOIN_INNER_TD_5956612), &(events_d2h_rd_JOIN_INNER_TD_5956612[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_454591_e, 0);

    struct timeval tv_r_Aggregate_5_179419_s, tv_r_Aggregate_5_179419_e;
    gettimeofday(&tv_r_Aggregate_5_179419_s, 0);
    SW_Aggregate_TD_5686133(tbl_JOIN_INNER_TD_6449902_output, tbl_Aggregate_TD_5686133_output);
    gettimeofday(&tv_r_Aggregate_5_179419_e, 0);

    struct timeval tv_r_Aggregate_5_424246_s, tv_r_Aggregate_5_424246_e;
    gettimeofday(&tv_r_Aggregate_5_424246_s, 0);
    SW_Aggregate_TD_5210836(tbl_JOIN_INNER_TD_6135963_output, tbl_Aggregate_TD_5210836_output);
    gettimeofday(&tv_r_Aggregate_5_424246_e, 0);

    struct timeval tv_r_JOIN_INNER_4_963852_s, tv_r_JOIN_INNER_4_963852_e;
    gettimeofday(&tv_r_JOIN_INNER_4_963852_s, 0);
    SW_JOIN_INNER_TD_4382945(tbl_JOIN_INNER_TD_5956612_output, tbl_Filter_TD_5323794_output, tbl_JOIN_INNER_TD_4382945_output);
    gettimeofday(&tv_r_JOIN_INNER_4_963852_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_4_657807_s, tv_r_JOIN_LEFTANTI_4_657807_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_657807_s, 0);
    SW_JOIN_LEFTANTI_TD_4535172(tbl_Aggregate_TD_5210836_output, tbl_Aggregate_TD_5686133_output, tbl_JOIN_LEFTANTI_TD_4535172_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_657807_e, 0);

    struct timeval tv_r_Aggregate_3_7853_s, tv_r_Aggregate_3_7853_e;
    gettimeofday(&tv_r_Aggregate_3_7853_s, 0);
    SW_Aggregate_TD_3740660(tbl_JOIN_INNER_TD_4382945_output, tbl_Aggregate_TD_3740660_output);
    gettimeofday(&tv_r_Aggregate_3_7853_e, 0);

    struct timeval tv_r_Aggregate_3_578456_s, tv_r_Aggregate_3_578456_e;
    gettimeofday(&tv_r_Aggregate_3_578456_s, 0);
    SW_Aggregate_TD_334750(tbl_JOIN_LEFTANTI_TD_4535172_output, tbl_Aggregate_TD_334750_output);
    gettimeofday(&tv_r_Aggregate_3_578456_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_2_624544_s, tv_r_JOIN_LEFTANTI_2_624544_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_2_624544_s, 0);
    SW_JOIN_LEFTANTI_TD_2781583(tbl_Aggregate_TD_334750_output, tbl_Aggregate_TD_3740660_output, tbl_JOIN_LEFTANTI_TD_2781583_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_2_624544_e, 0);

    struct timeval tv_r_Aggregate_1_334768_s, tv_r_Aggregate_1_334768_e;
    gettimeofday(&tv_r_Aggregate_1_334768_s, 0);
    SW_Aggregate_TD_1207379(tbl_JOIN_LEFTANTI_TD_2781583_output, tbl_Aggregate_TD_1207379_output);
    gettimeofday(&tv_r_Aggregate_1_334768_e, 0);

    struct timeval tv_r_Aggregate_0_671760_s, tv_r_Aggregate_0_671760_e;
    gettimeofday(&tv_r_Aggregate_0_671760_s, 0);
    SW_Aggregate_TD_045007(tbl_Aggregate_TD_1207379_output, tbl_Aggregate_TD_045007_output);
    gettimeofday(&tv_r_Aggregate_0_671760_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_498207_s, &tv_r_Filter_8_498207_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9935731_input: " << tbl_SerializeFromObject_TD_9935731_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_971211_s, &tv_r_Filter_8_971211_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9640121_input: " << tbl_SerializeFromObject_TD_9640121_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_375684_s, &tv_r_Filter_8_375684_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9263414_input: " << tbl_SerializeFromObject_TD_9263414_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_268912_s, &tv_r_Filter_8_268912_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9537670_input: " << tbl_SerializeFromObject_TD_9537670_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_920685_s, &tv_r_Filter_7_920685_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8342999_input: " << tbl_SerializeFromObject_TD_8342999_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_115304_s, &tv_r_JOIN_INNER_7_115304_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8405416_output: " << tbl_Filter_TD_8405416_output.getNumRow() << " " << "tbl_Filter_TD_888282_output: " << tbl_Filter_TD_888282_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_407138_s, &tv_r_Filter_7_407138_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8737618_input: " << tbl_SerializeFromObject_TD_8737618_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_860506_s, &tv_r_JOIN_INNER_7_860506_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8537167_output: " << tbl_Filter_TD_8537167_output.getNumRow() << " " << "tbl_Filter_TD_8987276_output: " << tbl_Filter_TD_8987276_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_106979_s, &tv_r_Filter_6_106979_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7121252_input: " << tbl_SerializeFromObject_TD_7121252_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_153380_s, &tv_r_Filter_6_153380_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7121715_input: " << tbl_SerializeFromObject_TD_7121715_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_191798_s, &tv_r_JOIN_INNER_6_191798_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7987939_output: " << tbl_JOIN_INNER_TD_7987939_output.getNumRow() << " " << "tbl_Filter_TD_71901_output: " << tbl_Filter_TD_71901_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_350501_s, &tv_r_JOIN_INNER_6_350501_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7158615_output: " << tbl_JOIN_INNER_TD_7158615_output.getNumRow() << " " << "tbl_Filter_TD_7196343_output: " << tbl_Filter_TD_7196343_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_931621_s, &tv_r_Filter_5_931621_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_653513_input: " << tbl_SerializeFromObject_TD_653513_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_454591_s, &tv_r_JOIN_INNER_5_454591_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6651659_output: " << tbl_Filter_TD_6651659_output.getNumRow() << " " << "tbl_Filter_TD_6736629_output: " << tbl_Filter_TD_6736629_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_179419_s, &tv_r_Aggregate_5_179419_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6449902_output: " << tbl_JOIN_INNER_TD_6449902_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_424246_s, &tv_r_Aggregate_5_424246_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6135963_output: " << tbl_JOIN_INNER_TD_6135963_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_963852_s, &tv_r_JOIN_INNER_4_963852_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5956612_output: " << tbl_JOIN_INNER_TD_5956612_output.getNumRow() << " " << "tbl_Filter_TD_5323794_output: " << tbl_Filter_TD_5323794_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_4: " << tvdiff(&tv_r_JOIN_LEFTANTI_4_657807_s, &tv_r_JOIN_LEFTANTI_4_657807_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5210836_output: " << tbl_Aggregate_TD_5210836_output.getNumRow() << " " << "tbl_Aggregate_TD_5686133_output: " << tbl_Aggregate_TD_5686133_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_7853_s, &tv_r_Aggregate_3_7853_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4382945_output: " << tbl_JOIN_INNER_TD_4382945_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_578456_s, &tv_r_Aggregate_3_578456_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_4535172_output: " << tbl_JOIN_LEFTANTI_TD_4535172_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_2: " << tvdiff(&tv_r_JOIN_LEFTANTI_2_624544_s, &tv_r_JOIN_LEFTANTI_2_624544_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_334750_output: " << tbl_Aggregate_TD_334750_output.getNumRow() << " " << "tbl_Aggregate_TD_3740660_output: " << tbl_Aggregate_TD_3740660_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_334768_s, &tv_r_Aggregate_1_334768_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_2781583_output: " << tbl_JOIN_LEFTANTI_TD_2781583_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_671760_s, &tv_r_Aggregate_0_671760_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1207379_output: " << tbl_Aggregate_TD_1207379_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.1608596 * 1000 << "ms" << std::endl; 
    return 0; 
}
