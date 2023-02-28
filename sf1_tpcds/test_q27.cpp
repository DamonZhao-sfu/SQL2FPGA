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

#include "cfgFunc_q27.hpp" 
#include "q27.hpp" 

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
    std::cout << "NOTE:running query #27\n."; 
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
    Table tbl_GlobalLimit_TD_0826444_output("tbl_GlobalLimit_TD_0826444_output", 6100000, 7, "");
    tbl_GlobalLimit_TD_0826444_output.allocateHost();
    Table tbl_LocalLimit_TD_1273937_output("tbl_LocalLimit_TD_1273937_output", 6100000, 7, "");
    tbl_LocalLimit_TD_1273937_output.allocateHost();
    Table tbl_Sort_TD_2944132_output("tbl_Sort_TD_2944132_output", 6100000, 7, "");
    tbl_Sort_TD_2944132_output.allocateHost();
    Table tbl_Aggregate_TD_372925_output("tbl_Aggregate_TD_372925_output", 6100000, 7, "");
    tbl_Aggregate_TD_372925_output.allocateHost();
    Table tbl_Expand_TD_4338734_output("tbl_Expand_TD_4338734_output", 6100000, 7, "");
    tbl_Expand_TD_4338734_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5699652_output("tbl_JOIN_INNER_TD_5699652_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5699652_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6131403_output("tbl_JOIN_INNER_TD_6131403_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6131403_output.allocateHost();
    Table tbl_Filter_TD_6603407_output("tbl_Filter_TD_6603407_output", 6100000, 2, "");
    tbl_Filter_TD_6603407_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7252432_output("tbl_JOIN_INNER_TD_7252432_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7252432_output.allocateHost();
    Table tbl_Filter_TD_7481166_output("tbl_Filter_TD_7481166_output", 6100000, 2, "");
    tbl_Filter_TD_7481166_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7281750_input;
    tbl_SerializeFromObject_TD_7281750_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7281750_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7281750_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7281750_input.allocateHost();
    tbl_SerializeFromObject_TD_7281750_input.loadHost();
    Table tbl_JOIN_INNER_TD_8966181_output("tbl_JOIN_INNER_TD_8966181_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8966181_output.allocateHost();
    Table tbl_Filter_TD_8977249_output("tbl_Filter_TD_8977249_output", 6100000, 1, "");
    tbl_Filter_TD_8977249_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8878572_input;
    tbl_SerializeFromObject_TD_8878572_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8878572_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8878572_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8878572_input.allocateHost();
    tbl_SerializeFromObject_TD_8878572_input.loadHost();
    Table tbl_Filter_TD_9983533_output("tbl_Filter_TD_9983533_output", 6100000, 8, "");
    tbl_Filter_TD_9983533_output.allocateHost();
    Table tbl_Filter_TD_9471548_output("tbl_Filter_TD_9471548_output", 6100000, 1, "");
    tbl_Filter_TD_9471548_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9315289_input;
    tbl_SerializeFromObject_TD_9315289_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9315289_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9315289_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9315289_input.allocateHost();
    tbl_SerializeFromObject_TD_9315289_input.loadHost();
    Table tbl_SerializeFromObject_TD_10361498_input;
    tbl_SerializeFromObject_TD_10361498_input = Table("store_sales", store_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_10361498_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10361498_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10361498_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_10361498_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10361498_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_10361498_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_10361498_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_10361498_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_10361498_input.allocateHost();
    tbl_SerializeFromObject_TD_10361498_input.loadHost();
    Table tbl_SerializeFromObject_TD_10127977_input;
    tbl_SerializeFromObject_TD_10127977_input = Table("customer_demographics", customer_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10127977_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_10127977_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10127977_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10127977_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10127977_input.allocateHost();
    tbl_SerializeFromObject_TD_10127977_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_7252432_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8966181_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8977249_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9983533_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9471548_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_7252432_cmds;
    cfg_JOIN_INNER_TD_7252432_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7252432_gqe_join (cfg_JOIN_INNER_TD_7252432_cmds.cmd);
    cfg_JOIN_INNER_TD_7252432_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8966181_cmds;
    cfg_JOIN_INNER_TD_8966181_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8966181_gqe_join (cfg_JOIN_INNER_TD_8966181_cmds.cmd);
    cfg_JOIN_INNER_TD_8966181_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_7252432;
    krnl_JOIN_INNER_TD_7252432 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7252432.setup(tbl_JOIN_INNER_TD_8966181_output, tbl_Filter_TD_8977249_output, tbl_JOIN_INNER_TD_7252432_output, cfg_JOIN_INNER_TD_7252432_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8966181;
    krnl_JOIN_INNER_TD_8966181 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8966181.setup(tbl_Filter_TD_9983533_output, tbl_Filter_TD_9471548_output, tbl_JOIN_INNER_TD_8966181_output, cfg_JOIN_INNER_TD_8966181_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_7252432;
    trans_JOIN_INNER_TD_7252432.setq(q_h);
    trans_JOIN_INNER_TD_7252432.add(&(cfg_JOIN_INNER_TD_7252432_cmds));
    transEngine trans_JOIN_INNER_TD_7252432_out;
    trans_JOIN_INNER_TD_7252432_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8966181;
    trans_JOIN_INNER_TD_8966181.setq(q_h);
    trans_JOIN_INNER_TD_8966181.add(&(cfg_JOIN_INNER_TD_8966181_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7252432;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7252432;
    std::vector<cl::Event> events_JOIN_INNER_TD_7252432;
    events_h2d_wr_JOIN_INNER_TD_7252432.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7252432.resize(1);
    events_JOIN_INNER_TD_7252432.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7252432;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7252432;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8966181;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8966181;
    std::vector<cl::Event> events_JOIN_INNER_TD_8966181;
    events_h2d_wr_JOIN_INNER_TD_8966181.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8966181.resize(1);
    events_JOIN_INNER_TD_8966181.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8966181;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8966181;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_572465_s, tv_r_Filter_9_572465_e;
    gettimeofday(&tv_r_Filter_9_572465_s, 0);
    SW_Filter_TD_9471548(tbl_SerializeFromObject_TD_10127977_input, tbl_Filter_TD_9471548_output);
    gettimeofday(&tv_r_Filter_9_572465_e, 0);

    struct timeval tv_r_Filter_9_394655_s, tv_r_Filter_9_394655_e;
    gettimeofday(&tv_r_Filter_9_394655_s, 0);
    SW_Filter_TD_9983533(tbl_SerializeFromObject_TD_10361498_input, tbl_Filter_TD_9983533_output);
    gettimeofday(&tv_r_Filter_9_394655_e, 0);

    struct timeval tv_r_Filter_8_171911_s, tv_r_Filter_8_171911_e;
    gettimeofday(&tv_r_Filter_8_171911_s, 0);
    SW_Filter_TD_8977249(tbl_SerializeFromObject_TD_9315289_input, tbl_Filter_TD_8977249_output);
    gettimeofday(&tv_r_Filter_8_171911_e, 0);

    struct timeval tv_r_JOIN_INNER_8_912172_s, tv_r_JOIN_INNER_8_912172_e;
    gettimeofday(&tv_r_JOIN_INNER_8_912172_s, 0);
    trans_JOIN_INNER_TD_8966181.add(&(tbl_Filter_TD_9983533_output));
    trans_JOIN_INNER_TD_8966181.add(&(tbl_Filter_TD_9471548_output));
    trans_JOIN_INNER_TD_8966181.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8966181), &(events_h2d_wr_JOIN_INNER_TD_8966181[0]));
    events_grp_JOIN_INNER_TD_8966181.push_back(events_h2d_wr_JOIN_INNER_TD_8966181[0]);
    krnl_JOIN_INNER_TD_8966181.run(0, &(events_grp_JOIN_INNER_TD_8966181), &(events_JOIN_INNER_TD_8966181[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_912172_e, 0);

    struct timeval tv_r_Filter_7_749312_s, tv_r_Filter_7_749312_e;
    gettimeofday(&tv_r_Filter_7_749312_s, 0);
    SW_Filter_TD_7481166(tbl_SerializeFromObject_TD_8878572_input, tbl_Filter_TD_7481166_output);
    gettimeofday(&tv_r_Filter_7_749312_e, 0);

    struct timeval tv_r_JOIN_INNER_7_868723_s, tv_r_JOIN_INNER_7_868723_e;
    gettimeofday(&tv_r_JOIN_INNER_7_868723_s, 0);
    prev_events_grp_JOIN_INNER_TD_7252432.push_back(events_h2d_wr_JOIN_INNER_TD_8966181[0]);
    trans_JOIN_INNER_TD_7252432.add(&(tbl_Filter_TD_8977249_output));
    trans_JOIN_INNER_TD_7252432.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7252432), &(events_h2d_wr_JOIN_INNER_TD_7252432[0]));
    events_grp_JOIN_INNER_TD_7252432.push_back(events_h2d_wr_JOIN_INNER_TD_7252432[0]);
    events_grp_JOIN_INNER_TD_7252432.push_back(events_JOIN_INNER_TD_8966181[0]);
    krnl_JOIN_INNER_TD_7252432.run(0, &(events_grp_JOIN_INNER_TD_7252432), &(events_JOIN_INNER_TD_7252432[0]));
    
    trans_JOIN_INNER_TD_7252432_out.add(&(tbl_JOIN_INNER_TD_7252432_output));
    trans_JOIN_INNER_TD_7252432_out.dev2host(0, &(events_JOIN_INNER_TD_7252432), &(events_d2h_rd_JOIN_INNER_TD_7252432[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_868723_e, 0);

    struct timeval tv_r_Filter_6_671210_s, tv_r_Filter_6_671210_e;
    gettimeofday(&tv_r_Filter_6_671210_s, 0);
    SW_Filter_TD_6603407(tbl_SerializeFromObject_TD_7281750_input, tbl_Filter_TD_6603407_output);
    gettimeofday(&tv_r_Filter_6_671210_e, 0);

    struct timeval tv_r_JOIN_INNER_6_176019_s, tv_r_JOIN_INNER_6_176019_e;
    gettimeofday(&tv_r_JOIN_INNER_6_176019_s, 0);
    SW_JOIN_INNER_TD_6131403(tbl_JOIN_INNER_TD_7252432_output, tbl_Filter_TD_7481166_output, tbl_JOIN_INNER_TD_6131403_output);
    gettimeofday(&tv_r_JOIN_INNER_6_176019_e, 0);

    struct timeval tv_r_JOIN_INNER_5_523684_s, tv_r_JOIN_INNER_5_523684_e;
    gettimeofday(&tv_r_JOIN_INNER_5_523684_s, 0);
    SW_JOIN_INNER_TD_5699652(tbl_JOIN_INNER_TD_6131403_output, tbl_Filter_TD_6603407_output, tbl_JOIN_INNER_TD_5699652_output);
    gettimeofday(&tv_r_JOIN_INNER_5_523684_e, 0);

    struct timeval tv_r_Expand_4_91411_s, tv_r_Expand_4_91411_e;
    gettimeofday(&tv_r_Expand_4_91411_s, 0);
    SW_Expand_TD_4338734(tbl_JOIN_INNER_TD_5699652_output, tbl_Expand_TD_4338734_output);
    gettimeofday(&tv_r_Expand_4_91411_e, 0);

    struct timeval tv_r_Aggregate_3_319564_s, tv_r_Aggregate_3_319564_e;
    gettimeofday(&tv_r_Aggregate_3_319564_s, 0);
    SW_Aggregate_TD_372925(tbl_Expand_TD_4338734_output, tbl_Aggregate_TD_372925_output);
    gettimeofday(&tv_r_Aggregate_3_319564_e, 0);

    struct timeval tv_r_Sort_2_7953_s, tv_r_Sort_2_7953_e;
    gettimeofday(&tv_r_Sort_2_7953_s, 0);
    SW_Sort_TD_2944132(tbl_Aggregate_TD_372925_output, tbl_Sort_TD_2944132_output);
    gettimeofday(&tv_r_Sort_2_7953_e, 0);

    struct timeval tv_r_LocalLimit_1_349581_s, tv_r_LocalLimit_1_349581_e;
    gettimeofday(&tv_r_LocalLimit_1_349581_s, 0);
    SW_LocalLimit_TD_1273937(tbl_Sort_TD_2944132_output, tbl_LocalLimit_TD_1273937_output);
    gettimeofday(&tv_r_LocalLimit_1_349581_e, 0);

    struct timeval tv_r_GlobalLimit_0_645042_s, tv_r_GlobalLimit_0_645042_e;
    gettimeofday(&tv_r_GlobalLimit_0_645042_s, 0);
    SW_GlobalLimit_TD_0826444(tbl_LocalLimit_TD_1273937_output, tbl_GlobalLimit_TD_0826444_output);
    gettimeofday(&tv_r_GlobalLimit_0_645042_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_572465_s, &tv_r_Filter_9_572465_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10127977_input: " << tbl_SerializeFromObject_TD_10127977_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_394655_s, &tv_r_Filter_9_394655_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10361498_input: " << tbl_SerializeFromObject_TD_10361498_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_171911_s, &tv_r_Filter_8_171911_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9315289_input: " << tbl_SerializeFromObject_TD_9315289_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_912172_s, &tv_r_JOIN_INNER_8_912172_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9983533_output: " << tbl_Filter_TD_9983533_output.getNumRow() << " " << "tbl_Filter_TD_9471548_output: " << tbl_Filter_TD_9471548_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_749312_s, &tv_r_Filter_7_749312_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8878572_input: " << tbl_SerializeFromObject_TD_8878572_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_868723_s, &tv_r_JOIN_INNER_7_868723_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8966181_output: " << tbl_JOIN_INNER_TD_8966181_output.getNumRow() << " " << "tbl_Filter_TD_8977249_output: " << tbl_Filter_TD_8977249_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_671210_s, &tv_r_Filter_6_671210_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7281750_input: " << tbl_SerializeFromObject_TD_7281750_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_176019_s, &tv_r_JOIN_INNER_6_176019_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7252432_output: " << tbl_JOIN_INNER_TD_7252432_output.getNumRow() << " " << "tbl_Filter_TD_7481166_output: " << tbl_Filter_TD_7481166_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_523684_s, &tv_r_JOIN_INNER_5_523684_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6131403_output: " << tbl_JOIN_INNER_TD_6131403_output.getNumRow() << " " << "tbl_Filter_TD_6603407_output: " << tbl_Filter_TD_6603407_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_91411_s, &tv_r_Expand_4_91411_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5699652_output: " << tbl_JOIN_INNER_TD_5699652_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_319564_s, &tv_r_Aggregate_3_319564_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4338734_output: " << tbl_Expand_TD_4338734_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_7953_s, &tv_r_Sort_2_7953_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_372925_output: " << tbl_Aggregate_TD_372925_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_349581_s, &tv_r_LocalLimit_1_349581_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2944132_output: " << tbl_Sort_TD_2944132_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_645042_s, &tv_r_GlobalLimit_0_645042_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1273937_output: " << tbl_LocalLimit_TD_1273937_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.3274286 * 1000 << "ms" << std::endl; 
    return 0; 
}
