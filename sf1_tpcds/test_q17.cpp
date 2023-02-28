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

#include "cfgFunc_q17.hpp" 
#include "q17.hpp" 

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
    std::cout << "NOTE:running query #17\n."; 
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
    Table tbl_GlobalLimit_TD_050817_output("tbl_GlobalLimit_TD_050817_output", 6100000, 9, "");
    tbl_GlobalLimit_TD_050817_output.allocateHost();
    Table tbl_LocalLimit_TD_197373_output("tbl_LocalLimit_TD_197373_output", 6100000, 9, "");
    tbl_LocalLimit_TD_197373_output.allocateHost();
    Table tbl_Sort_TD_2736234_output("tbl_Sort_TD_2736234_output", 6100000, 9, "");
    tbl_Sort_TD_2736234_output.allocateHost();
    Table tbl_Aggregate_TD_3461939_output("tbl_Aggregate_TD_3461939_output", 6100000, 9, "");
    tbl_Aggregate_TD_3461939_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4866386_output("tbl_JOIN_INNER_TD_4866386_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4866386_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5390261_output("tbl_JOIN_INNER_TD_5390261_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5390261_output.allocateHost();
    Table tbl_Filter_TD_5508824_output("tbl_Filter_TD_5508824_output", 6100000, 3, "");
    tbl_Filter_TD_5508824_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6968853_output("tbl_JOIN_INNER_TD_6968853_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6968853_output.allocateHost();
    Table tbl_Filter_TD_6649423_output("tbl_Filter_TD_6649423_output", 6100000, 2, "");
    tbl_Filter_TD_6649423_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6671033_input;
    tbl_SerializeFromObject_TD_6671033_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6671033_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6671033_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6671033_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6671033_input.allocateHost();
    tbl_SerializeFromObject_TD_6671033_input.loadHost();
    Table tbl_JOIN_INNER_TD_7937338_output("tbl_JOIN_INNER_TD_7937338_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7937338_output.allocateHost();
    Table tbl_Filter_TD_7757715_output("tbl_Filter_TD_7757715_output", 6100000, 1, "");
    tbl_Filter_TD_7757715_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7519809_input;
    tbl_SerializeFromObject_TD_7519809_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7519809_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7519809_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7519809_input.allocateHost();
    tbl_SerializeFromObject_TD_7519809_input.loadHost();
    Table tbl_JOIN_INNER_TD_8928746_output("tbl_JOIN_INNER_TD_8928746_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8928746_output.allocateHost();
    Table tbl_Filter_TD_8759921_output("tbl_Filter_TD_8759921_output", 6100000, 1, "");
    tbl_Filter_TD_8759921_output.allocateHost();
    Table tbl_SerializeFromObject_TD_862542_input;
    tbl_SerializeFromObject_TD_862542_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_862542_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_862542_input.addCol("d_quarter_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_862542_input.allocateHost();
    tbl_SerializeFromObject_TD_862542_input.loadHost();
    Table tbl_JOIN_INNER_TD_9441181_output("tbl_JOIN_INNER_TD_9441181_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_9441181_output.allocateHost();
    Table tbl_Filter_TD_9179499_output("tbl_Filter_TD_9179499_output", 6100000, 1, "");
    tbl_Filter_TD_9179499_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9139205_input;
    tbl_SerializeFromObject_TD_9139205_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9139205_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9139205_input.addCol("d_quarter_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9139205_input.allocateHost();
    tbl_SerializeFromObject_TD_9139205_input.loadHost();
    Table tbl_JOIN_INNER_TD_10119199_output("tbl_JOIN_INNER_TD_10119199_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_10119199_output.allocateHost();
    Table tbl_Filter_TD_10692357_output("tbl_Filter_TD_10692357_output", 6100000, 4, "");
    tbl_Filter_TD_10692357_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10179129_input;
    tbl_SerializeFromObject_TD_10179129_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10179129_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10179129_input.addCol("d_quarter_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10179129_input.allocateHost();
    tbl_SerializeFromObject_TD_10179129_input.loadHost();
    Table tbl_Filter_TD_11662308_output("tbl_Filter_TD_11662308_output", 6100000, 6, "");
    tbl_Filter_TD_11662308_output.allocateHost();
    Table tbl_Filter_TD_11715963_output("tbl_Filter_TD_11715963_output", 6100000, 5, "");
    tbl_Filter_TD_11715963_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11378342_input;
    tbl_SerializeFromObject_TD_11378342_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11378342_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11378342_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_11378342_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_11378342_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_11378342_input.allocateHost();
    tbl_SerializeFromObject_TD_11378342_input.loadHost();
    Table tbl_SerializeFromObject_TD_12842818_input;
    tbl_SerializeFromObject_TD_12842818_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_12842818_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12842818_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_12842818_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12842818_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12842818_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_12842818_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12842818_input.allocateHost();
    tbl_SerializeFromObject_TD_12842818_input.loadHost();
    Table tbl_SerializeFromObject_TD_12260031_input;
    tbl_SerializeFromObject_TD_12260031_input = Table("store_returns", store_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_12260031_input.addCol("sr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12260031_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_12260031_input.addCol("sr_customer_sk", 4);
    tbl_SerializeFromObject_TD_12260031_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_12260031_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_12260031_input.allocateHost();
    tbl_SerializeFromObject_TD_12260031_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6968853_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7937338_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7757715_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8928746_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8759921_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9441181_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9179499_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10119199_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10692357_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_6968853_cmds;
    cfg_JOIN_INNER_TD_6968853_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6968853_gqe_join (cfg_JOIN_INNER_TD_6968853_cmds.cmd);
    cfg_JOIN_INNER_TD_6968853_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7937338_cmds;
    cfg_JOIN_INNER_TD_7937338_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7937338_gqe_join (cfg_JOIN_INNER_TD_7937338_cmds.cmd);
    cfg_JOIN_INNER_TD_7937338_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8928746_cmds;
    cfg_JOIN_INNER_TD_8928746_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8928746_gqe_join (cfg_JOIN_INNER_TD_8928746_cmds.cmd);
    cfg_JOIN_INNER_TD_8928746_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9441181_cmds;
    cfg_JOIN_INNER_TD_9441181_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9441181_gqe_join (cfg_JOIN_INNER_TD_9441181_cmds.cmd);
    cfg_JOIN_INNER_TD_9441181_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_6968853;
    krnl_JOIN_INNER_TD_6968853 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6968853.setup(tbl_JOIN_INNER_TD_7937338_output, tbl_Filter_TD_7757715_output, tbl_JOIN_INNER_TD_6968853_output, cfg_JOIN_INNER_TD_6968853_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7937338;
    krnl_JOIN_INNER_TD_7937338 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7937338.setup(tbl_JOIN_INNER_TD_8928746_output, tbl_Filter_TD_8759921_output, tbl_JOIN_INNER_TD_7937338_output, cfg_JOIN_INNER_TD_7937338_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8928746;
    krnl_JOIN_INNER_TD_8928746 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8928746.setup(tbl_JOIN_INNER_TD_9441181_output, tbl_Filter_TD_9179499_output, tbl_JOIN_INNER_TD_8928746_output, cfg_JOIN_INNER_TD_8928746_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9441181;
    krnl_JOIN_INNER_TD_9441181 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9441181.setup(tbl_JOIN_INNER_TD_10119199_output, tbl_Filter_TD_10692357_output, tbl_JOIN_INNER_TD_9441181_output, cfg_JOIN_INNER_TD_9441181_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_6968853;
    trans_JOIN_INNER_TD_6968853.setq(q_h);
    trans_JOIN_INNER_TD_6968853.add(&(cfg_JOIN_INNER_TD_6968853_cmds));
    transEngine trans_JOIN_INNER_TD_6968853_out;
    trans_JOIN_INNER_TD_6968853_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7937338;
    trans_JOIN_INNER_TD_7937338.setq(q_h);
    trans_JOIN_INNER_TD_7937338.add(&(cfg_JOIN_INNER_TD_7937338_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8928746;
    trans_JOIN_INNER_TD_8928746.setq(q_h);
    trans_JOIN_INNER_TD_8928746.add(&(cfg_JOIN_INNER_TD_8928746_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9441181;
    trans_JOIN_INNER_TD_9441181.setq(q_h);
    trans_JOIN_INNER_TD_9441181.add(&(cfg_JOIN_INNER_TD_9441181_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6968853;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6968853;
    std::vector<cl::Event> events_JOIN_INNER_TD_6968853;
    events_h2d_wr_JOIN_INNER_TD_6968853.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6968853.resize(1);
    events_JOIN_INNER_TD_6968853.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6968853;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6968853;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7937338;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7937338;
    std::vector<cl::Event> events_JOIN_INNER_TD_7937338;
    events_h2d_wr_JOIN_INNER_TD_7937338.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7937338.resize(1);
    events_JOIN_INNER_TD_7937338.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7937338;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7937338;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8928746;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8928746;
    std::vector<cl::Event> events_JOIN_INNER_TD_8928746;
    events_h2d_wr_JOIN_INNER_TD_8928746.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8928746.resize(1);
    events_JOIN_INNER_TD_8928746.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8928746;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8928746;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9441181;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9441181;
    std::vector<cl::Event> events_JOIN_INNER_TD_9441181;
    events_h2d_wr_JOIN_INNER_TD_9441181.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9441181.resize(1);
    events_JOIN_INNER_TD_9441181.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9441181;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9441181;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_971885_s, tv_r_Filter_11_971885_e;
    gettimeofday(&tv_r_Filter_11_971885_s, 0);
    SW_Filter_TD_11715963(tbl_SerializeFromObject_TD_12260031_input, tbl_Filter_TD_11715963_output);
    gettimeofday(&tv_r_Filter_11_971885_e, 0);

    struct timeval tv_r_Filter_11_617212_s, tv_r_Filter_11_617212_e;
    gettimeofday(&tv_r_Filter_11_617212_s, 0);
    SW_Filter_TD_11662308(tbl_SerializeFromObject_TD_12842818_input, tbl_Filter_TD_11662308_output);
    gettimeofday(&tv_r_Filter_11_617212_e, 0);

    struct timeval tv_r_Filter_10_960945_s, tv_r_Filter_10_960945_e;
    gettimeofday(&tv_r_Filter_10_960945_s, 0);
    SW_Filter_TD_10692357(tbl_SerializeFromObject_TD_11378342_input, tbl_Filter_TD_10692357_output);
    gettimeofday(&tv_r_Filter_10_960945_e, 0);

    struct timeval tv_r_JOIN_INNER_10_431826_s, tv_r_JOIN_INNER_10_431826_e;
    gettimeofday(&tv_r_JOIN_INNER_10_431826_s, 0);
    SW_JOIN_INNER_TD_10119199(tbl_Filter_TD_11662308_output, tbl_Filter_TD_11715963_output, tbl_JOIN_INNER_TD_10119199_output);
    gettimeofday(&tv_r_JOIN_INNER_10_431826_e, 0);

    struct timeval tv_r_Filter_9_843684_s, tv_r_Filter_9_843684_e;
    gettimeofday(&tv_r_Filter_9_843684_s, 0);
    SW_Filter_TD_9179499(tbl_SerializeFromObject_TD_10179129_input, tbl_Filter_TD_9179499_output);
    gettimeofday(&tv_r_Filter_9_843684_e, 0);

    struct timeval tv_r_JOIN_INNER_9_561149_s, tv_r_JOIN_INNER_9_561149_e;
    gettimeofday(&tv_r_JOIN_INNER_9_561149_s, 0);
    trans_JOIN_INNER_TD_9441181.add(&(tbl_JOIN_INNER_TD_10119199_output));
    trans_JOIN_INNER_TD_9441181.add(&(tbl_Filter_TD_10692357_output));
    trans_JOIN_INNER_TD_9441181.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9441181), &(events_h2d_wr_JOIN_INNER_TD_9441181[0]));
    events_grp_JOIN_INNER_TD_9441181.push_back(events_h2d_wr_JOIN_INNER_TD_9441181[0]);
    krnl_JOIN_INNER_TD_9441181.run(0, &(events_grp_JOIN_INNER_TD_9441181), &(events_JOIN_INNER_TD_9441181[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_561149_e, 0);

    struct timeval tv_r_Filter_8_687465_s, tv_r_Filter_8_687465_e;
    gettimeofday(&tv_r_Filter_8_687465_s, 0);
    SW_Filter_TD_8759921(tbl_SerializeFromObject_TD_9139205_input, tbl_Filter_TD_8759921_output);
    gettimeofday(&tv_r_Filter_8_687465_e, 0);

    struct timeval tv_r_JOIN_INNER_8_742982_s, tv_r_JOIN_INNER_8_742982_e;
    gettimeofday(&tv_r_JOIN_INNER_8_742982_s, 0);
    prev_events_grp_JOIN_INNER_TD_8928746.push_back(events_h2d_wr_JOIN_INNER_TD_9441181[0]);
    trans_JOIN_INNER_TD_8928746.add(&(tbl_Filter_TD_9179499_output));
    trans_JOIN_INNER_TD_8928746.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8928746), &(events_h2d_wr_JOIN_INNER_TD_8928746[0]));
    events_grp_JOIN_INNER_TD_8928746.push_back(events_h2d_wr_JOIN_INNER_TD_8928746[0]);
    events_grp_JOIN_INNER_TD_8928746.push_back(events_JOIN_INNER_TD_9441181[0]);
    krnl_JOIN_INNER_TD_8928746.run(0, &(events_grp_JOIN_INNER_TD_8928746), &(events_JOIN_INNER_TD_8928746[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_742982_e, 0);

    struct timeval tv_r_Filter_7_971787_s, tv_r_Filter_7_971787_e;
    gettimeofday(&tv_r_Filter_7_971787_s, 0);
    SW_Filter_TD_7757715(tbl_SerializeFromObject_TD_862542_input, tbl_Filter_TD_7757715_output);
    gettimeofday(&tv_r_Filter_7_971787_e, 0);

    struct timeval tv_r_JOIN_INNER_7_914561_s, tv_r_JOIN_INNER_7_914561_e;
    gettimeofday(&tv_r_JOIN_INNER_7_914561_s, 0);
    prev_events_grp_JOIN_INNER_TD_7937338.push_back(events_h2d_wr_JOIN_INNER_TD_8928746[0]);
    trans_JOIN_INNER_TD_7937338.add(&(tbl_Filter_TD_8759921_output));
    trans_JOIN_INNER_TD_7937338.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7937338), &(events_h2d_wr_JOIN_INNER_TD_7937338[0]));
    events_grp_JOIN_INNER_TD_7937338.push_back(events_h2d_wr_JOIN_INNER_TD_7937338[0]);
    events_grp_JOIN_INNER_TD_7937338.push_back(events_JOIN_INNER_TD_8928746[0]);
    krnl_JOIN_INNER_TD_7937338.run(0, &(events_grp_JOIN_INNER_TD_7937338), &(events_JOIN_INNER_TD_7937338[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_914561_e, 0);

    struct timeval tv_r_Filter_6_394835_s, tv_r_Filter_6_394835_e;
    gettimeofday(&tv_r_Filter_6_394835_s, 0);
    SW_Filter_TD_6649423(tbl_SerializeFromObject_TD_7519809_input, tbl_Filter_TD_6649423_output);
    gettimeofday(&tv_r_Filter_6_394835_e, 0);

    struct timeval tv_r_JOIN_INNER_6_788487_s, tv_r_JOIN_INNER_6_788487_e;
    gettimeofday(&tv_r_JOIN_INNER_6_788487_s, 0);
    prev_events_grp_JOIN_INNER_TD_6968853.push_back(events_h2d_wr_JOIN_INNER_TD_7937338[0]);
    trans_JOIN_INNER_TD_6968853.add(&(tbl_Filter_TD_7757715_output));
    trans_JOIN_INNER_TD_6968853.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6968853), &(events_h2d_wr_JOIN_INNER_TD_6968853[0]));
    events_grp_JOIN_INNER_TD_6968853.push_back(events_h2d_wr_JOIN_INNER_TD_6968853[0]);
    events_grp_JOIN_INNER_TD_6968853.push_back(events_JOIN_INNER_TD_7937338[0]);
    krnl_JOIN_INNER_TD_6968853.run(0, &(events_grp_JOIN_INNER_TD_6968853), &(events_JOIN_INNER_TD_6968853[0]));
    
    trans_JOIN_INNER_TD_6968853_out.add(&(tbl_JOIN_INNER_TD_6968853_output));
    trans_JOIN_INNER_TD_6968853_out.dev2host(0, &(events_JOIN_INNER_TD_6968853), &(events_d2h_rd_JOIN_INNER_TD_6968853[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_788487_e, 0);

    struct timeval tv_r_Filter_5_821148_s, tv_r_Filter_5_821148_e;
    gettimeofday(&tv_r_Filter_5_821148_s, 0);
    SW_Filter_TD_5508824(tbl_SerializeFromObject_TD_6671033_input, tbl_Filter_TD_5508824_output);
    gettimeofday(&tv_r_Filter_5_821148_e, 0);

    struct timeval tv_r_JOIN_INNER_5_645770_s, tv_r_JOIN_INNER_5_645770_e;
    gettimeofday(&tv_r_JOIN_INNER_5_645770_s, 0);
    SW_JOIN_INNER_TD_5390261(tbl_JOIN_INNER_TD_6968853_output, tbl_Filter_TD_6649423_output, tbl_JOIN_INNER_TD_5390261_output);
    gettimeofday(&tv_r_JOIN_INNER_5_645770_e, 0);

    struct timeval tv_r_JOIN_INNER_4_248854_s, tv_r_JOIN_INNER_4_248854_e;
    gettimeofday(&tv_r_JOIN_INNER_4_248854_s, 0);
    SW_JOIN_INNER_TD_4866386(tbl_JOIN_INNER_TD_5390261_output, tbl_Filter_TD_5508824_output, tbl_JOIN_INNER_TD_4866386_output);
    gettimeofday(&tv_r_JOIN_INNER_4_248854_e, 0);

    struct timeval tv_r_Aggregate_3_492570_s, tv_r_Aggregate_3_492570_e;
    gettimeofday(&tv_r_Aggregate_3_492570_s, 0);
    SW_Aggregate_TD_3461939(tbl_JOIN_INNER_TD_4866386_output, tbl_Aggregate_TD_3461939_output);
    gettimeofday(&tv_r_Aggregate_3_492570_e, 0);

    struct timeval tv_r_Sort_2_351622_s, tv_r_Sort_2_351622_e;
    gettimeofday(&tv_r_Sort_2_351622_s, 0);
    SW_Sort_TD_2736234(tbl_Aggregate_TD_3461939_output, tbl_Sort_TD_2736234_output);
    gettimeofday(&tv_r_Sort_2_351622_e, 0);

    struct timeval tv_r_LocalLimit_1_412308_s, tv_r_LocalLimit_1_412308_e;
    gettimeofday(&tv_r_LocalLimit_1_412308_s, 0);
    SW_LocalLimit_TD_197373(tbl_Sort_TD_2736234_output, tbl_LocalLimit_TD_197373_output);
    gettimeofday(&tv_r_LocalLimit_1_412308_e, 0);

    struct timeval tv_r_GlobalLimit_0_222327_s, tv_r_GlobalLimit_0_222327_e;
    gettimeofday(&tv_r_GlobalLimit_0_222327_s, 0);
    SW_GlobalLimit_TD_050817(tbl_LocalLimit_TD_197373_output, tbl_GlobalLimit_TD_050817_output);
    gettimeofday(&tv_r_GlobalLimit_0_222327_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_971885_s, &tv_r_Filter_11_971885_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12260031_input: " << tbl_SerializeFromObject_TD_12260031_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_617212_s, &tv_r_Filter_11_617212_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12842818_input: " << tbl_SerializeFromObject_TD_12842818_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_960945_s, &tv_r_Filter_10_960945_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11378342_input: " << tbl_SerializeFromObject_TD_11378342_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_431826_s, &tv_r_JOIN_INNER_10_431826_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11662308_output: " << tbl_Filter_TD_11662308_output.getNumRow() << " " << "tbl_Filter_TD_11715963_output: " << tbl_Filter_TD_11715963_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_843684_s, &tv_r_Filter_9_843684_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10179129_input: " << tbl_SerializeFromObject_TD_10179129_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_561149_s, &tv_r_JOIN_INNER_9_561149_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10119199_output: " << tbl_JOIN_INNER_TD_10119199_output.getNumRow() << " " << "tbl_Filter_TD_10692357_output: " << tbl_Filter_TD_10692357_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_687465_s, &tv_r_Filter_8_687465_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9139205_input: " << tbl_SerializeFromObject_TD_9139205_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_742982_s, &tv_r_JOIN_INNER_8_742982_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9441181_output: " << tbl_JOIN_INNER_TD_9441181_output.getNumRow() << " " << "tbl_Filter_TD_9179499_output: " << tbl_Filter_TD_9179499_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_971787_s, &tv_r_Filter_7_971787_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_862542_input: " << tbl_SerializeFromObject_TD_862542_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_914561_s, &tv_r_JOIN_INNER_7_914561_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8928746_output: " << tbl_JOIN_INNER_TD_8928746_output.getNumRow() << " " << "tbl_Filter_TD_8759921_output: " << tbl_Filter_TD_8759921_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_394835_s, &tv_r_Filter_6_394835_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7519809_input: " << tbl_SerializeFromObject_TD_7519809_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_788487_s, &tv_r_JOIN_INNER_6_788487_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7937338_output: " << tbl_JOIN_INNER_TD_7937338_output.getNumRow() << " " << "tbl_Filter_TD_7757715_output: " << tbl_Filter_TD_7757715_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_821148_s, &tv_r_Filter_5_821148_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6671033_input: " << tbl_SerializeFromObject_TD_6671033_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_645770_s, &tv_r_JOIN_INNER_5_645770_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6968853_output: " << tbl_JOIN_INNER_TD_6968853_output.getNumRow() << " " << "tbl_Filter_TD_6649423_output: " << tbl_Filter_TD_6649423_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_248854_s, &tv_r_JOIN_INNER_4_248854_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5390261_output: " << tbl_JOIN_INNER_TD_5390261_output.getNumRow() << " " << "tbl_Filter_TD_5508824_output: " << tbl_Filter_TD_5508824_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_492570_s, &tv_r_Aggregate_3_492570_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4866386_output: " << tbl_JOIN_INNER_TD_4866386_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_351622_s, &tv_r_Sort_2_351622_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3461939_output: " << tbl_Aggregate_TD_3461939_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_412308_s, &tv_r_LocalLimit_1_412308_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2736234_output: " << tbl_Sort_TD_2736234_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_222327_s, &tv_r_GlobalLimit_0_222327_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_197373_output: " << tbl_LocalLimit_TD_197373_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.0350883 * 1000 << "ms" << std::endl; 
    return 0; 
}
