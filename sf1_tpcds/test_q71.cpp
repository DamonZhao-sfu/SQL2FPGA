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

#include "cfgFunc_q71.hpp" 
#include "q71.hpp" 

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
    std::cout << "NOTE:running query #71\n."; 
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
    Table tbl_Sort_TD_0607550_output("tbl_Sort_TD_0607550_output", 6100000, 5, "");
    tbl_Sort_TD_0607550_output.allocateHost();
    Table tbl_Aggregate_TD_1474180_output("tbl_Aggregate_TD_1474180_output", 6100000, 5, "");
    tbl_Aggregate_TD_1474180_output.allocateHost();
    Table tbl_JOIN_INNER_TD_294675_output("tbl_JOIN_INNER_TD_294675_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_294675_output.allocateHost();
    Table tbl_JOIN_INNER_TD_361671_output("tbl_JOIN_INNER_TD_361671_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_361671_output.allocateHost();
    Table tbl_Filter_TD_3461581_output("tbl_Filter_TD_3461581_output", 6100000, 3, "");
    tbl_Filter_TD_3461581_output.allocateHost();
    Table tbl_Filter_TD_4542583_output("tbl_Filter_TD_4542583_output", 6100000, 3, "");
    tbl_Filter_TD_4542583_output.allocateHost();
    Table tbl_Union_TD_4217488_output("tbl_Union_TD_4217488_output", 6100000, 3, "");
    tbl_Union_TD_4217488_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4488424_input;
    tbl_SerializeFromObject_TD_4488424_input = Table("time_dim", time_dim_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_4488424_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_4488424_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_4488424_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_4488424_input.addCol("t_meal_time", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4488424_input.allocateHost();
    tbl_SerializeFromObject_TD_4488424_input.loadHost();
    Table tbl_SerializeFromObject_TD_5371507_input;
    tbl_SerializeFromObject_TD_5371507_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_5371507_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_5371507_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_5371507_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5371507_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_5371507_input.allocateHost();
    tbl_SerializeFromObject_TD_5371507_input.loadHost();
    Table tbl_Project_TD_5105416_output("tbl_Project_TD_5105416_output", 6100000, 3, "");
    tbl_Project_TD_5105416_output.allocateHost();
    Table tbl_Project_TD_5909207_output("tbl_Project_TD_5909207_output", 6100000, 3, "");
    tbl_Project_TD_5909207_output.allocateHost();
    Table tbl_Project_TD_5237201_output("tbl_Project_TD_5237201_output", 6100000, 3, "");
    tbl_Project_TD_5237201_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6489857_output("tbl_JOIN_INNER_TD_6489857_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6489857_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6131820_output("tbl_JOIN_INNER_TD_6131820_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6131820_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6963972_output("tbl_JOIN_INNER_TD_6963972_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6963972_output.allocateHost();
    Table tbl_Filter_TD_7473994_output("tbl_Filter_TD_7473994_output", 6100000, 4, "");
    tbl_Filter_TD_7473994_output.allocateHost();
    Table tbl_Filter_TD_7613180_output("tbl_Filter_TD_7613180_output", 6100000, 1, "");
    tbl_Filter_TD_7613180_output.allocateHost();
    Table tbl_Filter_TD_7183819_output("tbl_Filter_TD_7183819_output", 6100000, 4, "");
    tbl_Filter_TD_7183819_output.allocateHost();
    Table tbl_Filter_TD_7628179_output("tbl_Filter_TD_7628179_output", 6100000, 1, "");
    tbl_Filter_TD_7628179_output.allocateHost();
    Table tbl_Filter_TD_7718772_output("tbl_Filter_TD_7718772_output", 6100000, 4, "");
    tbl_Filter_TD_7718772_output.allocateHost();
    Table tbl_Filter_TD_7180290_output("tbl_Filter_TD_7180290_output", 6100000, 1, "");
    tbl_Filter_TD_7180290_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8862066_input;
    tbl_SerializeFromObject_TD_8862066_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8862066_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8862066_input.addCol("ws_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_8862066_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_8862066_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8862066_input.allocateHost();
    tbl_SerializeFromObject_TD_8862066_input.loadHost();
    Table tbl_SerializeFromObject_TD_8368299_input;
    tbl_SerializeFromObject_TD_8368299_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8368299_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8368299_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8368299_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8368299_input.allocateHost();
    tbl_SerializeFromObject_TD_8368299_input.loadHost();
    Table tbl_SerializeFromObject_TD_83874_input;
    tbl_SerializeFromObject_TD_83874_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_83874_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_83874_input.addCol("cs_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_83874_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_83874_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_83874_input.allocateHost();
    tbl_SerializeFromObject_TD_83874_input.loadHost();
    Table tbl_SerializeFromObject_TD_8433798_input;
    tbl_SerializeFromObject_TD_8433798_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8433798_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8433798_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8433798_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8433798_input.allocateHost();
    tbl_SerializeFromObject_TD_8433798_input.loadHost();
    Table tbl_SerializeFromObject_TD_8834351_input;
    tbl_SerializeFromObject_TD_8834351_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8834351_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8834351_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_8834351_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_8834351_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8834351_input.allocateHost();
    tbl_SerializeFromObject_TD_8834351_input.loadHost();
    Table tbl_SerializeFromObject_TD_8559777_input;
    tbl_SerializeFromObject_TD_8559777_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8559777_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8559777_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8559777_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8559777_input.allocateHost();
    tbl_SerializeFromObject_TD_8559777_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6489857_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6131820_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6963972_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7473994_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7613180_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7183819_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7628179_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7718772_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7180290_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_6489857_cmds;
    cfg_JOIN_INNER_TD_6489857_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6489857_gqe_join (cfg_JOIN_INNER_TD_6489857_cmds.cmd);
    cfg_JOIN_INNER_TD_6489857_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6131820_cmds;
    cfg_JOIN_INNER_TD_6131820_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6131820_gqe_join (cfg_JOIN_INNER_TD_6131820_cmds.cmd);
    cfg_JOIN_INNER_TD_6131820_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6963972_cmds;
    cfg_JOIN_INNER_TD_6963972_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6963972_gqe_join (cfg_JOIN_INNER_TD_6963972_cmds.cmd);
    cfg_JOIN_INNER_TD_6963972_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_6489857;
    krnl_JOIN_INNER_TD_6489857 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6489857.setup(tbl_Filter_TD_7473994_output, tbl_Filter_TD_7613180_output, tbl_JOIN_INNER_TD_6489857_output, cfg_JOIN_INNER_TD_6489857_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6131820;
    krnl_JOIN_INNER_TD_6131820 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6131820.setup(tbl_Filter_TD_7183819_output, tbl_Filter_TD_7628179_output, tbl_JOIN_INNER_TD_6131820_output, cfg_JOIN_INNER_TD_6131820_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6963972;
    krnl_JOIN_INNER_TD_6963972 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6963972.setup(tbl_Filter_TD_7718772_output, tbl_Filter_TD_7180290_output, tbl_JOIN_INNER_TD_6963972_output, cfg_JOIN_INNER_TD_6963972_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_6489857;
    trans_JOIN_INNER_TD_6489857.setq(q_h);
    trans_JOIN_INNER_TD_6489857.add(&(cfg_JOIN_INNER_TD_6489857_cmds));
    transEngine trans_JOIN_INNER_TD_6489857_out;
    trans_JOIN_INNER_TD_6489857_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6131820;
    trans_JOIN_INNER_TD_6131820.setq(q_h);
    trans_JOIN_INNER_TD_6131820.add(&(cfg_JOIN_INNER_TD_6131820_cmds));
    transEngine trans_JOIN_INNER_TD_6131820_out;
    trans_JOIN_INNER_TD_6131820_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6963972;
    trans_JOIN_INNER_TD_6963972.setq(q_h);
    trans_JOIN_INNER_TD_6963972.add(&(cfg_JOIN_INNER_TD_6963972_cmds));
    transEngine trans_JOIN_INNER_TD_6963972_out;
    trans_JOIN_INNER_TD_6963972_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6489857;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6489857;
    std::vector<cl::Event> events_JOIN_INNER_TD_6489857;
    events_h2d_wr_JOIN_INNER_TD_6489857.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6489857.resize(1);
    events_JOIN_INNER_TD_6489857.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6489857;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6489857;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6131820;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6131820;
    std::vector<cl::Event> events_JOIN_INNER_TD_6131820;
    events_h2d_wr_JOIN_INNER_TD_6131820.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6131820.resize(1);
    events_JOIN_INNER_TD_6131820.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6131820;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6131820;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6963972;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6963972;
    std::vector<cl::Event> events_JOIN_INNER_TD_6963972;
    events_h2d_wr_JOIN_INNER_TD_6963972.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6963972.resize(1);
    events_JOIN_INNER_TD_6963972.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6963972;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6963972;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_590074_s, tv_r_Filter_7_590074_e;
    gettimeofday(&tv_r_Filter_7_590074_s, 0);
    SW_Filter_TD_7180290(tbl_SerializeFromObject_TD_8559777_input, tbl_Filter_TD_7180290_output);
    gettimeofday(&tv_r_Filter_7_590074_e, 0);

    struct timeval tv_r_Filter_7_91454_s, tv_r_Filter_7_91454_e;
    gettimeofday(&tv_r_Filter_7_91454_s, 0);
    SW_Filter_TD_7718772(tbl_SerializeFromObject_TD_8834351_input, tbl_Filter_TD_7718772_output);
    gettimeofday(&tv_r_Filter_7_91454_e, 0);

    struct timeval tv_r_Filter_7_93250_s, tv_r_Filter_7_93250_e;
    gettimeofday(&tv_r_Filter_7_93250_s, 0);
    SW_Filter_TD_7628179(tbl_SerializeFromObject_TD_8433798_input, tbl_Filter_TD_7628179_output);
    gettimeofday(&tv_r_Filter_7_93250_e, 0);

    struct timeval tv_r_Filter_7_838696_s, tv_r_Filter_7_838696_e;
    gettimeofday(&tv_r_Filter_7_838696_s, 0);
    SW_Filter_TD_7183819(tbl_SerializeFromObject_TD_83874_input, tbl_Filter_TD_7183819_output);
    gettimeofday(&tv_r_Filter_7_838696_e, 0);

    struct timeval tv_r_Filter_7_560444_s, tv_r_Filter_7_560444_e;
    gettimeofday(&tv_r_Filter_7_560444_s, 0);
    SW_Filter_TD_7613180(tbl_SerializeFromObject_TD_8368299_input, tbl_Filter_TD_7613180_output);
    gettimeofday(&tv_r_Filter_7_560444_e, 0);

    struct timeval tv_r_Filter_7_835953_s, tv_r_Filter_7_835953_e;
    gettimeofday(&tv_r_Filter_7_835953_s, 0);
    SW_Filter_TD_7473994(tbl_SerializeFromObject_TD_8862066_input, tbl_Filter_TD_7473994_output);
    gettimeofday(&tv_r_Filter_7_835953_e, 0);

    struct timeval tv_r_JOIN_INNER_6_287779_s, tv_r_JOIN_INNER_6_287779_e;
    gettimeofday(&tv_r_JOIN_INNER_6_287779_s, 0);
    trans_JOIN_INNER_TD_6963972.add(&(tbl_Filter_TD_7718772_output));
    trans_JOIN_INNER_TD_6963972.add(&(tbl_Filter_TD_7180290_output));
    trans_JOIN_INNER_TD_6963972.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6963972), &(events_h2d_wr_JOIN_INNER_TD_6963972[0]));
    events_grp_JOIN_INNER_TD_6963972.push_back(events_h2d_wr_JOIN_INNER_TD_6963972[0]);
    krnl_JOIN_INNER_TD_6963972.run(0, &(events_grp_JOIN_INNER_TD_6963972), &(events_JOIN_INNER_TD_6963972[0]));
    
    trans_JOIN_INNER_TD_6963972_out.add(&(tbl_JOIN_INNER_TD_6963972_output));
    trans_JOIN_INNER_TD_6963972_out.dev2host(0, &(events_JOIN_INNER_TD_6963972), &(events_d2h_rd_JOIN_INNER_TD_6963972[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_287779_e, 0);

    struct timeval tv_r_JOIN_INNER_6_130346_s, tv_r_JOIN_INNER_6_130346_e;
    gettimeofday(&tv_r_JOIN_INNER_6_130346_s, 0);
    trans_JOIN_INNER_TD_6131820.add(&(tbl_Filter_TD_7183819_output));
    trans_JOIN_INNER_TD_6131820.add(&(tbl_Filter_TD_7628179_output));
    trans_JOIN_INNER_TD_6131820.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6131820), &(events_h2d_wr_JOIN_INNER_TD_6131820[0]));
    events_grp_JOIN_INNER_TD_6131820.push_back(events_h2d_wr_JOIN_INNER_TD_6131820[0]);
    krnl_JOIN_INNER_TD_6131820.run(0, &(events_grp_JOIN_INNER_TD_6131820), &(events_JOIN_INNER_TD_6131820[0]));
    
    trans_JOIN_INNER_TD_6131820_out.add(&(tbl_JOIN_INNER_TD_6131820_output));
    trans_JOIN_INNER_TD_6131820_out.dev2host(0, &(events_JOIN_INNER_TD_6131820), &(events_d2h_rd_JOIN_INNER_TD_6131820[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_130346_e, 0);

    struct timeval tv_r_JOIN_INNER_6_34491_s, tv_r_JOIN_INNER_6_34491_e;
    gettimeofday(&tv_r_JOIN_INNER_6_34491_s, 0);
    trans_JOIN_INNER_TD_6489857.add(&(tbl_Filter_TD_7473994_output));
    trans_JOIN_INNER_TD_6489857.add(&(tbl_Filter_TD_7613180_output));
    trans_JOIN_INNER_TD_6489857.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6489857), &(events_h2d_wr_JOIN_INNER_TD_6489857[0]));
    events_grp_JOIN_INNER_TD_6489857.push_back(events_h2d_wr_JOIN_INNER_TD_6489857[0]);
    krnl_JOIN_INNER_TD_6489857.run(0, &(events_grp_JOIN_INNER_TD_6489857), &(events_JOIN_INNER_TD_6489857[0]));
    
    trans_JOIN_INNER_TD_6489857_out.add(&(tbl_JOIN_INNER_TD_6489857_output));
    trans_JOIN_INNER_TD_6489857_out.dev2host(0, &(events_JOIN_INNER_TD_6489857), &(events_d2h_rd_JOIN_INNER_TD_6489857[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_34491_e, 0);

    struct timeval tv_r_Project_5_779085_s, tv_r_Project_5_779085_e;
    gettimeofday(&tv_r_Project_5_779085_s, 0);
    SW_Project_TD_5237201(tbl_JOIN_INNER_TD_6963972_output, tbl_Project_TD_5237201_output);
    gettimeofday(&tv_r_Project_5_779085_e, 0);

    struct timeval tv_r_Project_5_911047_s, tv_r_Project_5_911047_e;
    gettimeofday(&tv_r_Project_5_911047_s, 0);
    SW_Project_TD_5909207(tbl_JOIN_INNER_TD_6131820_output, tbl_Project_TD_5909207_output);
    gettimeofday(&tv_r_Project_5_911047_e, 0);

    struct timeval tv_r_Project_5_777389_s, tv_r_Project_5_777389_e;
    gettimeofday(&tv_r_Project_5_777389_s, 0);
    SW_Project_TD_5105416(tbl_JOIN_INNER_TD_6489857_output, tbl_Project_TD_5105416_output);
    gettimeofday(&tv_r_Project_5_777389_e, 0);

    struct timeval tv_r_Union_4_554628_s, tv_r_Union_4_554628_e;
    gettimeofday(&tv_r_Union_4_554628_s, 0);
    SW_Union_TD_4217488(tbl_Project_TD_5105416_output, tbl_Project_TD_5909207_output, tbl_Project_TD_5237201_output, tbl_Union_TD_4217488_output);
    gettimeofday(&tv_r_Union_4_554628_e, 0);

    struct timeval tv_r_Filter_4_830467_s, tv_r_Filter_4_830467_e;
    gettimeofday(&tv_r_Filter_4_830467_s, 0);
    SW_Filter_TD_4542583(tbl_SerializeFromObject_TD_5371507_input, tbl_Filter_TD_4542583_output);
    gettimeofday(&tv_r_Filter_4_830467_e, 0);

    struct timeval tv_r_Filter_3_211419_s, tv_r_Filter_3_211419_e;
    gettimeofday(&tv_r_Filter_3_211419_s, 0);
    SW_Filter_TD_3461581(tbl_SerializeFromObject_TD_4488424_input, tbl_Filter_TD_3461581_output);
    gettimeofday(&tv_r_Filter_3_211419_e, 0);

    struct timeval tv_r_JOIN_INNER_3_914208_s, tv_r_JOIN_INNER_3_914208_e;
    gettimeofday(&tv_r_JOIN_INNER_3_914208_s, 0);
    SW_JOIN_INNER_TD_361671(tbl_Filter_TD_4542583_output, tbl_Union_TD_4217488_output, tbl_JOIN_INNER_TD_361671_output);
    gettimeofday(&tv_r_JOIN_INNER_3_914208_e, 0);

    struct timeval tv_r_JOIN_INNER_2_417981_s, tv_r_JOIN_INNER_2_417981_e;
    gettimeofday(&tv_r_JOIN_INNER_2_417981_s, 0);
    SW_JOIN_INNER_TD_294675(tbl_JOIN_INNER_TD_361671_output, tbl_Filter_TD_3461581_output, tbl_JOIN_INNER_TD_294675_output);
    gettimeofday(&tv_r_JOIN_INNER_2_417981_e, 0);

    struct timeval tv_r_Aggregate_1_489544_s, tv_r_Aggregate_1_489544_e;
    gettimeofday(&tv_r_Aggregate_1_489544_s, 0);
    SW_Aggregate_TD_1474180(tbl_JOIN_INNER_TD_294675_output, tbl_Aggregate_TD_1474180_output);
    gettimeofday(&tv_r_Aggregate_1_489544_e, 0);

    struct timeval tv_r_Sort_0_258079_s, tv_r_Sort_0_258079_e;
    gettimeofday(&tv_r_Sort_0_258079_s, 0);
    SW_Sort_TD_0607550(tbl_Aggregate_TD_1474180_output, tbl_Sort_TD_0607550_output);
    gettimeofday(&tv_r_Sort_0_258079_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_590074_s, &tv_r_Filter_7_590074_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8559777_input: " << tbl_SerializeFromObject_TD_8559777_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_91454_s, &tv_r_Filter_7_91454_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8834351_input: " << tbl_SerializeFromObject_TD_8834351_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_93250_s, &tv_r_Filter_7_93250_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8433798_input: " << tbl_SerializeFromObject_TD_8433798_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_838696_s, &tv_r_Filter_7_838696_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_83874_input: " << tbl_SerializeFromObject_TD_83874_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_560444_s, &tv_r_Filter_7_560444_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8368299_input: " << tbl_SerializeFromObject_TD_8368299_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_835953_s, &tv_r_Filter_7_835953_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8862066_input: " << tbl_SerializeFromObject_TD_8862066_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_287779_s, &tv_r_JOIN_INNER_6_287779_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7718772_output: " << tbl_Filter_TD_7718772_output.getNumRow() << " " << "tbl_Filter_TD_7180290_output: " << tbl_Filter_TD_7180290_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_130346_s, &tv_r_JOIN_INNER_6_130346_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7183819_output: " << tbl_Filter_TD_7183819_output.getNumRow() << " " << "tbl_Filter_TD_7628179_output: " << tbl_Filter_TD_7628179_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_34491_s, &tv_r_JOIN_INNER_6_34491_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7473994_output: " << tbl_Filter_TD_7473994_output.getNumRow() << " " << "tbl_Filter_TD_7613180_output: " << tbl_Filter_TD_7613180_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_779085_s, &tv_r_Project_5_779085_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6963972_output: " << tbl_JOIN_INNER_TD_6963972_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_911047_s, &tv_r_Project_5_911047_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6131820_output: " << tbl_JOIN_INNER_TD_6131820_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_777389_s, &tv_r_Project_5_777389_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6489857_output: " << tbl_JOIN_INNER_TD_6489857_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_554628_s, &tv_r_Union_4_554628_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5105416_output: " << tbl_Project_TD_5105416_output.getNumRow() << " " << "tbl_Project_TD_5909207_output: " << tbl_Project_TD_5909207_output.getNumRow() << " " << "tbl_Project_TD_5237201_output: " << tbl_Project_TD_5237201_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_830467_s, &tv_r_Filter_4_830467_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5371507_input: " << tbl_SerializeFromObject_TD_5371507_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_211419_s, &tv_r_Filter_3_211419_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4488424_input: " << tbl_SerializeFromObject_TD_4488424_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_914208_s, &tv_r_JOIN_INNER_3_914208_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4542583_output: " << tbl_Filter_TD_4542583_output.getNumRow() << " " << "tbl_Union_TD_4217488_output: " << tbl_Union_TD_4217488_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_417981_s, &tv_r_JOIN_INNER_2_417981_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_361671_output: " << tbl_JOIN_INNER_TD_361671_output.getNumRow() << " " << "tbl_Filter_TD_3461581_output: " << tbl_Filter_TD_3461581_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_489544_s, &tv_r_Aggregate_1_489544_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_294675_output: " << tbl_JOIN_INNER_TD_294675_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_258079_s, &tv_r_Sort_0_258079_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1474180_output: " << tbl_Aggregate_TD_1474180_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.7867799 * 1000 << "ms" << std::endl; 
    return 0; 
}
