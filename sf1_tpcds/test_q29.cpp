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

#include "cfgFunc_q29.hpp" 
#include "q29.hpp" 

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
    std::cout << "NOTE:running query #29\n."; 
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
    Table tbl_GlobalLimit_TD_0699474_output("tbl_GlobalLimit_TD_0699474_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0699474_output.allocateHost();
    Table tbl_LocalLimit_TD_1169809_output("tbl_LocalLimit_TD_1169809_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1169809_output.allocateHost();
    Table tbl_Sort_TD_2190830_output("tbl_Sort_TD_2190830_output", 6100000, 7, "");
    tbl_Sort_TD_2190830_output.allocateHost();
    Table tbl_Aggregate_TD_3189930_output("tbl_Aggregate_TD_3189930_output", 6100000, 7, "");
    tbl_Aggregate_TD_3189930_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4250913_output("tbl_JOIN_INNER_TD_4250913_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4250913_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5153646_output("tbl_JOIN_INNER_TD_5153646_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5153646_output.allocateHost();
    Table tbl_Filter_TD_5148147_output("tbl_Filter_TD_5148147_output", 6100000, 3, "");
    tbl_Filter_TD_5148147_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6814422_output("tbl_JOIN_INNER_TD_6814422_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6814422_output.allocateHost();
    Table tbl_Filter_TD_6195771_output("tbl_Filter_TD_6195771_output", 6100000, 3, "");
    tbl_Filter_TD_6195771_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6660329_input;
    tbl_SerializeFromObject_TD_6660329_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6660329_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6660329_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6660329_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6660329_input.allocateHost();
    tbl_SerializeFromObject_TD_6660329_input.loadHost();
    Table tbl_JOIN_INNER_TD_7573925_output("tbl_JOIN_INNER_TD_7573925_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7573925_output.allocateHost();
    Table tbl_Filter_TD_7171424_output("tbl_Filter_TD_7171424_output", 6100000, 1, "");
    tbl_Filter_TD_7171424_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7732861_input;
    tbl_SerializeFromObject_TD_7732861_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7732861_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7732861_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7732861_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7732861_input.allocateHost();
    tbl_SerializeFromObject_TD_7732861_input.loadHost();
    Table tbl_JOIN_INNER_TD_8986312_output("tbl_JOIN_INNER_TD_8986312_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8986312_output.allocateHost();
    Table tbl_Filter_TD_8119224_output("tbl_Filter_TD_8119224_output", 6100000, 1, "");
    tbl_Filter_TD_8119224_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8861875_input;
    tbl_SerializeFromObject_TD_8861875_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8861875_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8861875_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8861875_input.allocateHost();
    tbl_SerializeFromObject_TD_8861875_input.loadHost();
    Table tbl_JOIN_INNER_TD_9603642_output("tbl_JOIN_INNER_TD_9603642_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_9603642_output.allocateHost();
    Table tbl_Filter_TD_9189998_output("tbl_Filter_TD_9189998_output", 6100000, 1, "");
    tbl_Filter_TD_9189998_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9676823_input;
    tbl_SerializeFromObject_TD_9676823_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9676823_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9676823_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9676823_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9676823_input.allocateHost();
    tbl_SerializeFromObject_TD_9676823_input.loadHost();
    Table tbl_JOIN_INNER_TD_10807474_output("tbl_JOIN_INNER_TD_10807474_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_10807474_output.allocateHost();
    Table tbl_Filter_TD_10754982_output("tbl_Filter_TD_10754982_output", 6100000, 4, "");
    tbl_Filter_TD_10754982_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10293344_input;
    tbl_SerializeFromObject_TD_10293344_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10293344_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10293344_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10293344_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10293344_input.allocateHost();
    tbl_SerializeFromObject_TD_10293344_input.loadHost();
    Table tbl_Filter_TD_11746171_output("tbl_Filter_TD_11746171_output", 6100000, 6, "");
    tbl_Filter_TD_11746171_output.allocateHost();
    Table tbl_Filter_TD_11775210_output("tbl_Filter_TD_11775210_output", 6100000, 5, "");
    tbl_Filter_TD_11775210_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11585299_input;
    tbl_SerializeFromObject_TD_11585299_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11585299_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11585299_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11585299_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_11585299_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_11585299_input.allocateHost();
    tbl_SerializeFromObject_TD_11585299_input.loadHost();
    Table tbl_SerializeFromObject_TD_12136733_input;
    tbl_SerializeFromObject_TD_12136733_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_12136733_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12136733_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12136733_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12136733_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12136733_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_12136733_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12136733_input.allocateHost();
    tbl_SerializeFromObject_TD_12136733_input.loadHost();
    Table tbl_SerializeFromObject_TD_12870224_input;
    tbl_SerializeFromObject_TD_12870224_input = Table("store_returns", store_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_12870224_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12870224_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_12870224_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_12870224_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_12870224_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_12870224_input.allocateHost();
    tbl_SerializeFromObject_TD_12870224_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6814422_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7573925_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7171424_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8986312_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8119224_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9603642_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9189998_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10807474_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10754982_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_6814422_cmds;
    cfg_JOIN_INNER_TD_6814422_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6814422_gqe_join (cfg_JOIN_INNER_TD_6814422_cmds.cmd);
    cfg_JOIN_INNER_TD_6814422_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7573925_cmds;
    cfg_JOIN_INNER_TD_7573925_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7573925_gqe_join (cfg_JOIN_INNER_TD_7573925_cmds.cmd);
    cfg_JOIN_INNER_TD_7573925_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8986312_cmds;
    cfg_JOIN_INNER_TD_8986312_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8986312_gqe_join (cfg_JOIN_INNER_TD_8986312_cmds.cmd);
    cfg_JOIN_INNER_TD_8986312_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9603642_cmds;
    cfg_JOIN_INNER_TD_9603642_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9603642_gqe_join (cfg_JOIN_INNER_TD_9603642_cmds.cmd);
    cfg_JOIN_INNER_TD_9603642_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_6814422;
    krnl_JOIN_INNER_TD_6814422 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6814422.setup(tbl_JOIN_INNER_TD_7573925_output, tbl_Filter_TD_7171424_output, tbl_JOIN_INNER_TD_6814422_output, cfg_JOIN_INNER_TD_6814422_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7573925;
    krnl_JOIN_INNER_TD_7573925 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7573925.setup(tbl_JOIN_INNER_TD_8986312_output, tbl_Filter_TD_8119224_output, tbl_JOIN_INNER_TD_7573925_output, cfg_JOIN_INNER_TD_7573925_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8986312;
    krnl_JOIN_INNER_TD_8986312 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8986312.setup(tbl_JOIN_INNER_TD_9603642_output, tbl_Filter_TD_9189998_output, tbl_JOIN_INNER_TD_8986312_output, cfg_JOIN_INNER_TD_8986312_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9603642;
    krnl_JOIN_INNER_TD_9603642 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9603642.setup(tbl_JOIN_INNER_TD_10807474_output, tbl_Filter_TD_10754982_output, tbl_JOIN_INNER_TD_9603642_output, cfg_JOIN_INNER_TD_9603642_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_6814422;
    trans_JOIN_INNER_TD_6814422.setq(q_h);
    trans_JOIN_INNER_TD_6814422.add(&(cfg_JOIN_INNER_TD_6814422_cmds));
    transEngine trans_JOIN_INNER_TD_6814422_out;
    trans_JOIN_INNER_TD_6814422_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7573925;
    trans_JOIN_INNER_TD_7573925.setq(q_h);
    trans_JOIN_INNER_TD_7573925.add(&(cfg_JOIN_INNER_TD_7573925_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8986312;
    trans_JOIN_INNER_TD_8986312.setq(q_h);
    trans_JOIN_INNER_TD_8986312.add(&(cfg_JOIN_INNER_TD_8986312_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9603642;
    trans_JOIN_INNER_TD_9603642.setq(q_h);
    trans_JOIN_INNER_TD_9603642.add(&(cfg_JOIN_INNER_TD_9603642_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6814422;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6814422;
    std::vector<cl::Event> events_JOIN_INNER_TD_6814422;
    events_h2d_wr_JOIN_INNER_TD_6814422.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6814422.resize(1);
    events_JOIN_INNER_TD_6814422.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6814422;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6814422;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7573925;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7573925;
    std::vector<cl::Event> events_JOIN_INNER_TD_7573925;
    events_h2d_wr_JOIN_INNER_TD_7573925.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7573925.resize(1);
    events_JOIN_INNER_TD_7573925.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7573925;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7573925;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8986312;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8986312;
    std::vector<cl::Event> events_JOIN_INNER_TD_8986312;
    events_h2d_wr_JOIN_INNER_TD_8986312.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8986312.resize(1);
    events_JOIN_INNER_TD_8986312.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8986312;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8986312;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9603642;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9603642;
    std::vector<cl::Event> events_JOIN_INNER_TD_9603642;
    events_h2d_wr_JOIN_INNER_TD_9603642.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9603642.resize(1);
    events_JOIN_INNER_TD_9603642.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9603642;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9603642;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_447428_s, tv_r_Filter_11_447428_e;
    gettimeofday(&tv_r_Filter_11_447428_s, 0);
    SW_Filter_TD_11775210(tbl_SerializeFromObject_TD_12870224_input, tbl_Filter_TD_11775210_output);
    gettimeofday(&tv_r_Filter_11_447428_e, 0);

    struct timeval tv_r_Filter_11_569890_s, tv_r_Filter_11_569890_e;
    gettimeofday(&tv_r_Filter_11_569890_s, 0);
    SW_Filter_TD_11746171(tbl_SerializeFromObject_TD_12136733_input, tbl_Filter_TD_11746171_output);
    gettimeofday(&tv_r_Filter_11_569890_e, 0);

    struct timeval tv_r_Filter_10_807388_s, tv_r_Filter_10_807388_e;
    gettimeofday(&tv_r_Filter_10_807388_s, 0);
    SW_Filter_TD_10754982(tbl_SerializeFromObject_TD_11585299_input, tbl_Filter_TD_10754982_output);
    gettimeofday(&tv_r_Filter_10_807388_e, 0);

    struct timeval tv_r_JOIN_INNER_10_909802_s, tv_r_JOIN_INNER_10_909802_e;
    gettimeofday(&tv_r_JOIN_INNER_10_909802_s, 0);
    SW_JOIN_INNER_TD_10807474(tbl_Filter_TD_11746171_output, tbl_Filter_TD_11775210_output, tbl_JOIN_INNER_TD_10807474_output);
    gettimeofday(&tv_r_JOIN_INNER_10_909802_e, 0);

    struct timeval tv_r_Filter_9_138727_s, tv_r_Filter_9_138727_e;
    gettimeofday(&tv_r_Filter_9_138727_s, 0);
    SW_Filter_TD_9189998(tbl_SerializeFromObject_TD_10293344_input, tbl_Filter_TD_9189998_output);
    gettimeofday(&tv_r_Filter_9_138727_e, 0);

    struct timeval tv_r_JOIN_INNER_9_738705_s, tv_r_JOIN_INNER_9_738705_e;
    gettimeofday(&tv_r_JOIN_INNER_9_738705_s, 0);
    trans_JOIN_INNER_TD_9603642.add(&(tbl_JOIN_INNER_TD_10807474_output));
    trans_JOIN_INNER_TD_9603642.add(&(tbl_Filter_TD_10754982_output));
    trans_JOIN_INNER_TD_9603642.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9603642), &(events_h2d_wr_JOIN_INNER_TD_9603642[0]));
    events_grp_JOIN_INNER_TD_9603642.push_back(events_h2d_wr_JOIN_INNER_TD_9603642[0]);
    krnl_JOIN_INNER_TD_9603642.run(0, &(events_grp_JOIN_INNER_TD_9603642), &(events_JOIN_INNER_TD_9603642[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_738705_e, 0);

    struct timeval tv_r_Filter_8_517920_s, tv_r_Filter_8_517920_e;
    gettimeofday(&tv_r_Filter_8_517920_s, 0);
    SW_Filter_TD_8119224(tbl_SerializeFromObject_TD_9676823_input, tbl_Filter_TD_8119224_output);
    gettimeofday(&tv_r_Filter_8_517920_e, 0);

    struct timeval tv_r_JOIN_INNER_8_692876_s, tv_r_JOIN_INNER_8_692876_e;
    gettimeofday(&tv_r_JOIN_INNER_8_692876_s, 0);
    prev_events_grp_JOIN_INNER_TD_8986312.push_back(events_h2d_wr_JOIN_INNER_TD_9603642[0]);
    trans_JOIN_INNER_TD_8986312.add(&(tbl_Filter_TD_9189998_output));
    trans_JOIN_INNER_TD_8986312.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8986312), &(events_h2d_wr_JOIN_INNER_TD_8986312[0]));
    events_grp_JOIN_INNER_TD_8986312.push_back(events_h2d_wr_JOIN_INNER_TD_8986312[0]);
    events_grp_JOIN_INNER_TD_8986312.push_back(events_JOIN_INNER_TD_9603642[0]);
    krnl_JOIN_INNER_TD_8986312.run(0, &(events_grp_JOIN_INNER_TD_8986312), &(events_JOIN_INNER_TD_8986312[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_692876_e, 0);

    struct timeval tv_r_Filter_7_634169_s, tv_r_Filter_7_634169_e;
    gettimeofday(&tv_r_Filter_7_634169_s, 0);
    SW_Filter_TD_7171424(tbl_SerializeFromObject_TD_8861875_input, tbl_Filter_TD_7171424_output);
    gettimeofday(&tv_r_Filter_7_634169_e, 0);

    struct timeval tv_r_JOIN_INNER_7_568085_s, tv_r_JOIN_INNER_7_568085_e;
    gettimeofday(&tv_r_JOIN_INNER_7_568085_s, 0);
    prev_events_grp_JOIN_INNER_TD_7573925.push_back(events_h2d_wr_JOIN_INNER_TD_8986312[0]);
    trans_JOIN_INNER_TD_7573925.add(&(tbl_Filter_TD_8119224_output));
    trans_JOIN_INNER_TD_7573925.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7573925), &(events_h2d_wr_JOIN_INNER_TD_7573925[0]));
    events_grp_JOIN_INNER_TD_7573925.push_back(events_h2d_wr_JOIN_INNER_TD_7573925[0]);
    events_grp_JOIN_INNER_TD_7573925.push_back(events_JOIN_INNER_TD_8986312[0]);
    krnl_JOIN_INNER_TD_7573925.run(0, &(events_grp_JOIN_INNER_TD_7573925), &(events_JOIN_INNER_TD_7573925[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_568085_e, 0);

    struct timeval tv_r_Filter_6_81090_s, tv_r_Filter_6_81090_e;
    gettimeofday(&tv_r_Filter_6_81090_s, 0);
    SW_Filter_TD_6195771(tbl_SerializeFromObject_TD_7732861_input, tbl_Filter_TD_6195771_output);
    gettimeofday(&tv_r_Filter_6_81090_e, 0);

    struct timeval tv_r_JOIN_INNER_6_492090_s, tv_r_JOIN_INNER_6_492090_e;
    gettimeofday(&tv_r_JOIN_INNER_6_492090_s, 0);
    prev_events_grp_JOIN_INNER_TD_6814422.push_back(events_h2d_wr_JOIN_INNER_TD_7573925[0]);
    trans_JOIN_INNER_TD_6814422.add(&(tbl_Filter_TD_7171424_output));
    trans_JOIN_INNER_TD_6814422.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6814422), &(events_h2d_wr_JOIN_INNER_TD_6814422[0]));
    events_grp_JOIN_INNER_TD_6814422.push_back(events_h2d_wr_JOIN_INNER_TD_6814422[0]);
    events_grp_JOIN_INNER_TD_6814422.push_back(events_JOIN_INNER_TD_7573925[0]);
    krnl_JOIN_INNER_TD_6814422.run(0, &(events_grp_JOIN_INNER_TD_6814422), &(events_JOIN_INNER_TD_6814422[0]));
    
    trans_JOIN_INNER_TD_6814422_out.add(&(tbl_JOIN_INNER_TD_6814422_output));
    trans_JOIN_INNER_TD_6814422_out.dev2host(0, &(events_JOIN_INNER_TD_6814422), &(events_d2h_rd_JOIN_INNER_TD_6814422[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_492090_e, 0);

    struct timeval tv_r_Filter_5_215879_s, tv_r_Filter_5_215879_e;
    gettimeofday(&tv_r_Filter_5_215879_s, 0);
    SW_Filter_TD_5148147(tbl_SerializeFromObject_TD_6660329_input, tbl_Filter_TD_5148147_output);
    gettimeofday(&tv_r_Filter_5_215879_e, 0);

    struct timeval tv_r_JOIN_INNER_5_792892_s, tv_r_JOIN_INNER_5_792892_e;
    gettimeofday(&tv_r_JOIN_INNER_5_792892_s, 0);
    SW_JOIN_INNER_TD_5153646(tbl_JOIN_INNER_TD_6814422_output, tbl_Filter_TD_6195771_output, tbl_JOIN_INNER_TD_5153646_output);
    gettimeofday(&tv_r_JOIN_INNER_5_792892_e, 0);

    struct timeval tv_r_JOIN_INNER_4_709441_s, tv_r_JOIN_INNER_4_709441_e;
    gettimeofday(&tv_r_JOIN_INNER_4_709441_s, 0);
    SW_JOIN_INNER_TD_4250913(tbl_JOIN_INNER_TD_5153646_output, tbl_Filter_TD_5148147_output, tbl_JOIN_INNER_TD_4250913_output);
    gettimeofday(&tv_r_JOIN_INNER_4_709441_e, 0);

    struct timeval tv_r_Aggregate_3_881671_s, tv_r_Aggregate_3_881671_e;
    gettimeofday(&tv_r_Aggregate_3_881671_s, 0);
    SW_Aggregate_TD_3189930(tbl_JOIN_INNER_TD_4250913_output, tbl_Aggregate_TD_3189930_output);
    gettimeofday(&tv_r_Aggregate_3_881671_e, 0);

    struct timeval tv_r_Sort_2_147026_s, tv_r_Sort_2_147026_e;
    gettimeofday(&tv_r_Sort_2_147026_s, 0);
    SW_Sort_TD_2190830(tbl_Aggregate_TD_3189930_output, tbl_Sort_TD_2190830_output);
    gettimeofday(&tv_r_Sort_2_147026_e, 0);

    struct timeval tv_r_LocalLimit_1_576264_s, tv_r_LocalLimit_1_576264_e;
    gettimeofday(&tv_r_LocalLimit_1_576264_s, 0);
    SW_LocalLimit_TD_1169809(tbl_Sort_TD_2190830_output, tbl_LocalLimit_TD_1169809_output);
    gettimeofday(&tv_r_LocalLimit_1_576264_e, 0);

    struct timeval tv_r_GlobalLimit_0_333645_s, tv_r_GlobalLimit_0_333645_e;
    gettimeofday(&tv_r_GlobalLimit_0_333645_s, 0);
    SW_GlobalLimit_TD_0699474(tbl_LocalLimit_TD_1169809_output, tbl_GlobalLimit_TD_0699474_output);
    gettimeofday(&tv_r_GlobalLimit_0_333645_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_447428_s, &tv_r_Filter_11_447428_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12870224_input: " << tbl_SerializeFromObject_TD_12870224_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_569890_s, &tv_r_Filter_11_569890_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12136733_input: " << tbl_SerializeFromObject_TD_12136733_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_807388_s, &tv_r_Filter_10_807388_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11585299_input: " << tbl_SerializeFromObject_TD_11585299_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_909802_s, &tv_r_JOIN_INNER_10_909802_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11746171_output: " << tbl_Filter_TD_11746171_output.getNumRow() << " " << "tbl_Filter_TD_11775210_output: " << tbl_Filter_TD_11775210_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_138727_s, &tv_r_Filter_9_138727_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10293344_input: " << tbl_SerializeFromObject_TD_10293344_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_738705_s, &tv_r_JOIN_INNER_9_738705_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10807474_output: " << tbl_JOIN_INNER_TD_10807474_output.getNumRow() << " " << "tbl_Filter_TD_10754982_output: " << tbl_Filter_TD_10754982_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_517920_s, &tv_r_Filter_8_517920_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9676823_input: " << tbl_SerializeFromObject_TD_9676823_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_692876_s, &tv_r_JOIN_INNER_8_692876_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9603642_output: " << tbl_JOIN_INNER_TD_9603642_output.getNumRow() << " " << "tbl_Filter_TD_9189998_output: " << tbl_Filter_TD_9189998_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_634169_s, &tv_r_Filter_7_634169_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8861875_input: " << tbl_SerializeFromObject_TD_8861875_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_568085_s, &tv_r_JOIN_INNER_7_568085_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8986312_output: " << tbl_JOIN_INNER_TD_8986312_output.getNumRow() << " " << "tbl_Filter_TD_8119224_output: " << tbl_Filter_TD_8119224_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_81090_s, &tv_r_Filter_6_81090_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7732861_input: " << tbl_SerializeFromObject_TD_7732861_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_492090_s, &tv_r_JOIN_INNER_6_492090_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7573925_output: " << tbl_JOIN_INNER_TD_7573925_output.getNumRow() << " " << "tbl_Filter_TD_7171424_output: " << tbl_Filter_TD_7171424_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_215879_s, &tv_r_Filter_5_215879_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6660329_input: " << tbl_SerializeFromObject_TD_6660329_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_792892_s, &tv_r_JOIN_INNER_5_792892_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6814422_output: " << tbl_JOIN_INNER_TD_6814422_output.getNumRow() << " " << "tbl_Filter_TD_6195771_output: " << tbl_Filter_TD_6195771_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_709441_s, &tv_r_JOIN_INNER_4_709441_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5153646_output: " << tbl_JOIN_INNER_TD_5153646_output.getNumRow() << " " << "tbl_Filter_TD_5148147_output: " << tbl_Filter_TD_5148147_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_881671_s, &tv_r_Aggregate_3_881671_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4250913_output: " << tbl_JOIN_INNER_TD_4250913_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_147026_s, &tv_r_Sort_2_147026_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3189930_output: " << tbl_Aggregate_TD_3189930_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_576264_s, &tv_r_LocalLimit_1_576264_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2190830_output: " << tbl_Sort_TD_2190830_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_333645_s, &tv_r_GlobalLimit_0_333645_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1169809_output: " << tbl_LocalLimit_TD_1169809_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.7624912 * 1000 << "ms" << std::endl; 
    return 0; 
}
