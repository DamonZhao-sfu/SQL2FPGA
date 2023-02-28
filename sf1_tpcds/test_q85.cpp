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

#include "cfgFunc_q85.hpp" 
#include "q85.hpp" 

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
    std::cout << "NOTE:running query #85\n."; 
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
    Table tbl_GlobalLimit_TD_0112166_output("tbl_GlobalLimit_TD_0112166_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0112166_output.allocateHost();
    Table tbl_LocalLimit_TD_1951222_output("tbl_LocalLimit_TD_1951222_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1951222_output.allocateHost();
    Table tbl_Sort_TD_262009_output("tbl_Sort_TD_262009_output", 6100000, 4, "");
    tbl_Sort_TD_262009_output.allocateHost();
    Table tbl_Aggregate_TD_3215716_output("tbl_Aggregate_TD_3215716_output", 6100000, 4, "");
    tbl_Aggregate_TD_3215716_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4897087_output("tbl_JOIN_INNER_TD_4897087_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_4897087_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5925652_output("tbl_JOIN_INNER_TD_5925652_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5925652_output.allocateHost();
    Table tbl_Filter_TD_593692_output("tbl_Filter_TD_593692_output", 6100000, 2, "");
    tbl_Filter_TD_593692_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6220601_output("tbl_JOIN_INNER_TD_6220601_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6220601_output.allocateHost();
    Table tbl_Filter_TD_6818358_output("tbl_Filter_TD_6818358_output", 6100000, 1, "");
    tbl_Filter_TD_6818358_output.allocateHost();
    Table tbl_SerializeFromObject_TD_653671_input;
    tbl_SerializeFromObject_TD_653671_input = Table("reason", reason_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_653671_input.addCol("r_reason_sk", 4);
    tbl_SerializeFromObject_TD_653671_input.addCol("r_reason_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_653671_input.allocateHost();
    tbl_SerializeFromObject_TD_653671_input.loadHost();
    Table tbl_JOIN_INNER_TD_7811337_output("tbl_JOIN_INNER_TD_7811337_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7811337_output.allocateHost();
    Table tbl_Filter_TD_7622118_output("tbl_Filter_TD_7622118_output", 6100000, 2, "");
    tbl_Filter_TD_7622118_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7704692_input;
    tbl_SerializeFromObject_TD_7704692_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7704692_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7704692_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7704692_input.allocateHost();
    tbl_SerializeFromObject_TD_7704692_input.loadHost();
    Table tbl_JOIN_INNER_TD_8438855_output("tbl_JOIN_INNER_TD_8438855_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_8438855_output.allocateHost();
    Table tbl_Filter_TD_8686270_output("tbl_Filter_TD_8686270_output", 6100000, 3, "");
    tbl_Filter_TD_8686270_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8662169_input;
    tbl_SerializeFromObject_TD_8662169_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8662169_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8662169_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8662169_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8662169_input.allocateHost();
    tbl_SerializeFromObject_TD_8662169_input.loadHost();
    Table tbl_JOIN_INNER_TD_9576697_output("tbl_JOIN_INNER_TD_9576697_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_9576697_output.allocateHost();
    Table tbl_Filter_TD_9969837_output("tbl_Filter_TD_9969837_output", 6100000, 3, "");
    tbl_Filter_TD_9969837_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9174688_input;
    tbl_SerializeFromObject_TD_9174688_input = Table("customer_demographics", customer_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9174688_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9174688_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9174688_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9174688_input.allocateHost();
    tbl_SerializeFromObject_TD_9174688_input.loadHost();
    Table tbl_JOIN_INNER_TD_10963168_output("tbl_JOIN_INNER_TD_10963168_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_10963168_output.allocateHost();
    Table tbl_Filter_TD_10440582_output("tbl_Filter_TD_10440582_output", 6100000, 1, "");
    tbl_Filter_TD_10440582_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10967032_input;
    tbl_SerializeFromObject_TD_10967032_input = Table("customer_demographics", customer_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10967032_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_10967032_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10967032_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10967032_input.allocateHost();
    tbl_SerializeFromObject_TD_10967032_input.loadHost();
    Table tbl_Filter_TD_11238772_output("tbl_Filter_TD_11238772_output", 6100000, 7, "");
    tbl_Filter_TD_11238772_output.allocateHost();
    Table tbl_Filter_TD_11794714_output("tbl_Filter_TD_11794714_output", 6100000, 8, "");
    tbl_Filter_TD_11794714_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11841978_input;
    tbl_SerializeFromObject_TD_11841978_input = Table("web_page", web_page_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_11841978_input.addCol("wp_web_page_sk", 4);
    tbl_SerializeFromObject_TD_11841978_input.allocateHost();
    tbl_SerializeFromObject_TD_11841978_input.loadHost();
    Table tbl_SerializeFromObject_TD_12674893_input;
    tbl_SerializeFromObject_TD_12674893_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_12674893_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_12674893_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_12674893_input.addCol("ws_web_page_sk", 4);
    tbl_SerializeFromObject_TD_12674893_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_12674893_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_12674893_input.addCol("ws_sales_price", 4);
    tbl_SerializeFromObject_TD_12674893_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_12674893_input.allocateHost();
    tbl_SerializeFromObject_TD_12674893_input.loadHost();
    Table tbl_SerializeFromObject_TD_12988764_input;
    tbl_SerializeFromObject_TD_12988764_input = Table("web_returns", web_returns_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_12988764_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_12988764_input.addCol("wr_refunded_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_12988764_input.addCol("wr_refunded_addr_sk", 4);
    tbl_SerializeFromObject_TD_12988764_input.addCol("wr_returning_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_12988764_input.addCol("wr_reason_sk", 4);
    tbl_SerializeFromObject_TD_12988764_input.addCol("wr_order_number", 8);
    tbl_SerializeFromObject_TD_12988764_input.addCol("wr_fee", 4);
    tbl_SerializeFromObject_TD_12988764_input.addCol("wr_refunded_cash", 4);
    tbl_SerializeFromObject_TD_12988764_input.allocateHost();
    tbl_SerializeFromObject_TD_12988764_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5925652_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6220601_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6818358_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5925652_cmds;
    cfg_JOIN_INNER_TD_5925652_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5925652_gqe_join (cfg_JOIN_INNER_TD_5925652_cmds.cmd);
    cfg_JOIN_INNER_TD_5925652_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5925652;
    krnl_JOIN_INNER_TD_5925652 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5925652.setup(tbl_JOIN_INNER_TD_6220601_output, tbl_Filter_TD_6818358_output, tbl_JOIN_INNER_TD_5925652_output, cfg_JOIN_INNER_TD_5925652_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5925652;
    trans_JOIN_INNER_TD_5925652.setq(q_h);
    trans_JOIN_INNER_TD_5925652.add(&(cfg_JOIN_INNER_TD_5925652_cmds));
    transEngine trans_JOIN_INNER_TD_5925652_out;
    trans_JOIN_INNER_TD_5925652_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5925652;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5925652;
    std::vector<cl::Event> events_JOIN_INNER_TD_5925652;
    events_h2d_wr_JOIN_INNER_TD_5925652.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5925652.resize(1);
    events_JOIN_INNER_TD_5925652.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5925652;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5925652;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_178443_s, tv_r_Filter_11_178443_e;
    gettimeofday(&tv_r_Filter_11_178443_s, 0);
    SW_Filter_TD_11794714(tbl_SerializeFromObject_TD_12988764_input, tbl_Filter_TD_11794714_output);
    gettimeofday(&tv_r_Filter_11_178443_e, 0);

    struct timeval tv_r_Filter_11_858746_s, tv_r_Filter_11_858746_e;
    gettimeofday(&tv_r_Filter_11_858746_s, 0);
    SW_Filter_TD_11238772(tbl_SerializeFromObject_TD_12674893_input, tbl_Filter_TD_11238772_output);
    gettimeofday(&tv_r_Filter_11_858746_e, 0);

    struct timeval tv_r_Filter_10_795725_s, tv_r_Filter_10_795725_e;
    gettimeofday(&tv_r_Filter_10_795725_s, 0);
    SW_Filter_TD_10440582(tbl_SerializeFromObject_TD_11841978_input, tbl_Filter_TD_10440582_output);
    gettimeofday(&tv_r_Filter_10_795725_e, 0);

    struct timeval tv_r_JOIN_INNER_10_563572_s, tv_r_JOIN_INNER_10_563572_e;
    gettimeofday(&tv_r_JOIN_INNER_10_563572_s, 0);
    SW_JOIN_INNER_TD_10963168(tbl_Filter_TD_11238772_output, tbl_Filter_TD_11794714_output, tbl_JOIN_INNER_TD_10963168_output);
    gettimeofday(&tv_r_JOIN_INNER_10_563572_e, 0);

    struct timeval tv_r_Filter_9_495184_s, tv_r_Filter_9_495184_e;
    gettimeofday(&tv_r_Filter_9_495184_s, 0);
    SW_Filter_TD_9969837(tbl_SerializeFromObject_TD_10967032_input, tbl_Filter_TD_9969837_output);
    gettimeofday(&tv_r_Filter_9_495184_e, 0);

    struct timeval tv_r_JOIN_INNER_9_539093_s, tv_r_JOIN_INNER_9_539093_e;
    gettimeofday(&tv_r_JOIN_INNER_9_539093_s, 0);
    SW_JOIN_INNER_TD_9576697(tbl_JOIN_INNER_TD_10963168_output, tbl_Filter_TD_10440582_output, tbl_JOIN_INNER_TD_9576697_output);
    gettimeofday(&tv_r_JOIN_INNER_9_539093_e, 0);

    struct timeval tv_r_Filter_8_710003_s, tv_r_Filter_8_710003_e;
    gettimeofday(&tv_r_Filter_8_710003_s, 0);
    SW_Filter_TD_8686270(tbl_SerializeFromObject_TD_9174688_input, tbl_Filter_TD_8686270_output);
    gettimeofday(&tv_r_Filter_8_710003_e, 0);

    struct timeval tv_r_JOIN_INNER_8_886578_s, tv_r_JOIN_INNER_8_886578_e;
    gettimeofday(&tv_r_JOIN_INNER_8_886578_s, 0);
    SW_JOIN_INNER_TD_8438855(tbl_JOIN_INNER_TD_9576697_output, tbl_Filter_TD_9969837_output, tbl_JOIN_INNER_TD_8438855_output);
    gettimeofday(&tv_r_JOIN_INNER_8_886578_e, 0);

    struct timeval tv_r_Filter_7_735646_s, tv_r_Filter_7_735646_e;
    gettimeofday(&tv_r_Filter_7_735646_s, 0);
    SW_Filter_TD_7622118(tbl_SerializeFromObject_TD_8662169_input, tbl_Filter_TD_7622118_output);
    gettimeofday(&tv_r_Filter_7_735646_e, 0);

    struct timeval tv_r_JOIN_INNER_7_924124_s, tv_r_JOIN_INNER_7_924124_e;
    gettimeofday(&tv_r_JOIN_INNER_7_924124_s, 0);
    SW_JOIN_INNER_TD_7811337(tbl_JOIN_INNER_TD_8438855_output, tbl_Filter_TD_8686270_output, tbl_JOIN_INNER_TD_7811337_output);
    gettimeofday(&tv_r_JOIN_INNER_7_924124_e, 0);

    struct timeval tv_r_Filter_6_795514_s, tv_r_Filter_6_795514_e;
    gettimeofday(&tv_r_Filter_6_795514_s, 0);
    SW_Filter_TD_6818358(tbl_SerializeFromObject_TD_7704692_input, tbl_Filter_TD_6818358_output);
    gettimeofday(&tv_r_Filter_6_795514_e, 0);

    struct timeval tv_r_JOIN_INNER_6_352248_s, tv_r_JOIN_INNER_6_352248_e;
    gettimeofday(&tv_r_JOIN_INNER_6_352248_s, 0);
    SW_JOIN_INNER_TD_6220601(tbl_JOIN_INNER_TD_7811337_output, tbl_Filter_TD_7622118_output, tbl_JOIN_INNER_TD_6220601_output);
    gettimeofday(&tv_r_JOIN_INNER_6_352248_e, 0);

    struct timeval tv_r_Filter_5_795495_s, tv_r_Filter_5_795495_e;
    gettimeofday(&tv_r_Filter_5_795495_s, 0);
    SW_Filter_TD_593692(tbl_SerializeFromObject_TD_653671_input, tbl_Filter_TD_593692_output);
    gettimeofday(&tv_r_Filter_5_795495_e, 0);

    struct timeval tv_r_JOIN_INNER_5_697445_s, tv_r_JOIN_INNER_5_697445_e;
    gettimeofday(&tv_r_JOIN_INNER_5_697445_s, 0);
    trans_JOIN_INNER_TD_5925652.add(&(tbl_JOIN_INNER_TD_6220601_output));
    trans_JOIN_INNER_TD_5925652.add(&(tbl_Filter_TD_6818358_output));
    trans_JOIN_INNER_TD_5925652.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5925652), &(events_h2d_wr_JOIN_INNER_TD_5925652[0]));
    events_grp_JOIN_INNER_TD_5925652.push_back(events_h2d_wr_JOIN_INNER_TD_5925652[0]);
    krnl_JOIN_INNER_TD_5925652.run(0, &(events_grp_JOIN_INNER_TD_5925652), &(events_JOIN_INNER_TD_5925652[0]));
    
    trans_JOIN_INNER_TD_5925652_out.add(&(tbl_JOIN_INNER_TD_5925652_output));
    trans_JOIN_INNER_TD_5925652_out.dev2host(0, &(events_JOIN_INNER_TD_5925652), &(events_d2h_rd_JOIN_INNER_TD_5925652[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_697445_e, 0);

    struct timeval tv_r_JOIN_INNER_4_48786_s, tv_r_JOIN_INNER_4_48786_e;
    gettimeofday(&tv_r_JOIN_INNER_4_48786_s, 0);
    SW_JOIN_INNER_TD_4897087(tbl_JOIN_INNER_TD_5925652_output, tbl_Filter_TD_593692_output, tbl_JOIN_INNER_TD_4897087_output);
    gettimeofday(&tv_r_JOIN_INNER_4_48786_e, 0);

    struct timeval tv_r_Aggregate_3_154659_s, tv_r_Aggregate_3_154659_e;
    gettimeofday(&tv_r_Aggregate_3_154659_s, 0);
    SW_Aggregate_TD_3215716(tbl_JOIN_INNER_TD_4897087_output, tbl_Aggregate_TD_3215716_output);
    gettimeofday(&tv_r_Aggregate_3_154659_e, 0);

    struct timeval tv_r_Sort_2_221557_s, tv_r_Sort_2_221557_e;
    gettimeofday(&tv_r_Sort_2_221557_s, 0);
    SW_Sort_TD_262009(tbl_Aggregate_TD_3215716_output, tbl_Sort_TD_262009_output);
    gettimeofday(&tv_r_Sort_2_221557_e, 0);

    struct timeval tv_r_LocalLimit_1_173327_s, tv_r_LocalLimit_1_173327_e;
    gettimeofday(&tv_r_LocalLimit_1_173327_s, 0);
    SW_LocalLimit_TD_1951222(tbl_Sort_TD_262009_output, tbl_LocalLimit_TD_1951222_output);
    gettimeofday(&tv_r_LocalLimit_1_173327_e, 0);

    struct timeval tv_r_GlobalLimit_0_246560_s, tv_r_GlobalLimit_0_246560_e;
    gettimeofday(&tv_r_GlobalLimit_0_246560_s, 0);
    SW_GlobalLimit_TD_0112166(tbl_LocalLimit_TD_1951222_output, tbl_GlobalLimit_TD_0112166_output);
    gettimeofday(&tv_r_GlobalLimit_0_246560_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_178443_s, &tv_r_Filter_11_178443_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12988764_input: " << tbl_SerializeFromObject_TD_12988764_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_858746_s, &tv_r_Filter_11_858746_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12674893_input: " << tbl_SerializeFromObject_TD_12674893_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_795725_s, &tv_r_Filter_10_795725_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11841978_input: " << tbl_SerializeFromObject_TD_11841978_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_563572_s, &tv_r_JOIN_INNER_10_563572_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11238772_output: " << tbl_Filter_TD_11238772_output.getNumRow() << " " << "tbl_Filter_TD_11794714_output: " << tbl_Filter_TD_11794714_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_495184_s, &tv_r_Filter_9_495184_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10967032_input: " << tbl_SerializeFromObject_TD_10967032_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_539093_s, &tv_r_JOIN_INNER_9_539093_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10963168_output: " << tbl_JOIN_INNER_TD_10963168_output.getNumRow() << " " << "tbl_Filter_TD_10440582_output: " << tbl_Filter_TD_10440582_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_710003_s, &tv_r_Filter_8_710003_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9174688_input: " << tbl_SerializeFromObject_TD_9174688_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_886578_s, &tv_r_JOIN_INNER_8_886578_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9576697_output: " << tbl_JOIN_INNER_TD_9576697_output.getNumRow() << " " << "tbl_Filter_TD_9969837_output: " << tbl_Filter_TD_9969837_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_735646_s, &tv_r_Filter_7_735646_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8662169_input: " << tbl_SerializeFromObject_TD_8662169_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_924124_s, &tv_r_JOIN_INNER_7_924124_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8438855_output: " << tbl_JOIN_INNER_TD_8438855_output.getNumRow() << " " << "tbl_Filter_TD_8686270_output: " << tbl_Filter_TD_8686270_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_795514_s, &tv_r_Filter_6_795514_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7704692_input: " << tbl_SerializeFromObject_TD_7704692_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_352248_s, &tv_r_JOIN_INNER_6_352248_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7811337_output: " << tbl_JOIN_INNER_TD_7811337_output.getNumRow() << " " << "tbl_Filter_TD_7622118_output: " << tbl_Filter_TD_7622118_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_795495_s, &tv_r_Filter_5_795495_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_653671_input: " << tbl_SerializeFromObject_TD_653671_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_697445_s, &tv_r_JOIN_INNER_5_697445_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6220601_output: " << tbl_JOIN_INNER_TD_6220601_output.getNumRow() << " " << "tbl_Filter_TD_6818358_output: " << tbl_Filter_TD_6818358_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_48786_s, &tv_r_JOIN_INNER_4_48786_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5925652_output: " << tbl_JOIN_INNER_TD_5925652_output.getNumRow() << " " << "tbl_Filter_TD_593692_output: " << tbl_Filter_TD_593692_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_154659_s, &tv_r_Aggregate_3_154659_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4897087_output: " << tbl_JOIN_INNER_TD_4897087_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_221557_s, &tv_r_Sort_2_221557_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3215716_output: " << tbl_Aggregate_TD_3215716_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_173327_s, &tv_r_LocalLimit_1_173327_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_262009_output: " << tbl_Sort_TD_262009_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_246560_s, &tv_r_GlobalLimit_0_246560_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1951222_output: " << tbl_LocalLimit_TD_1951222_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.1422868 * 1000 << "ms" << std::endl; 
    return 0; 
}
