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

#include "cfgFunc_q8.hpp" 
#include "q8.hpp" 

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
    std::cout << "NOTE:running query #8\n."; 
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
    Table tbl_GlobalLimit_TD_0727163_output("tbl_GlobalLimit_TD_0727163_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0727163_output.allocateHost();
    Table tbl_LocalLimit_TD_1593401_output("tbl_LocalLimit_TD_1593401_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1593401_output.allocateHost();
    Table tbl_Sort_TD_2398304_output("tbl_Sort_TD_2398304_output", 6100000, 2, "");
    tbl_Sort_TD_2398304_output.allocateHost();
    Table tbl_Aggregate_TD_397347_output("tbl_Aggregate_TD_397347_output", 6100000, 2, "");
    tbl_Aggregate_TD_397347_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4543876_output("tbl_JOIN_INNER_TD_4543876_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4543876_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5120648_output("tbl_JOIN_INNER_TD_5120648_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5120648_output.allocateHost();
    Table tbl_Aggregate_TD_5430624_output("tbl_Aggregate_TD_5430624_output", 6100000, 1, "");
    tbl_Aggregate_TD_5430624_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6637257_output("tbl_JOIN_INNER_TD_6637257_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6637257_output.allocateHost();
    Table tbl_Filter_TD_6234521_output("tbl_Filter_TD_6234521_output", 6100000, 3, "");
    tbl_Filter_TD_6234521_output.allocateHost();
    Table tbl_Project_TD_6966312_output("tbl_Project_TD_6966312_output", 6100000, 1, "");
    tbl_Project_TD_6966312_output.allocateHost();
    Table tbl_Filter_TD_7229913_output("tbl_Filter_TD_7229913_output", 6100000, 3, "");
    tbl_Filter_TD_7229913_output.allocateHost();
    Table tbl_Filter_TD_752082_output("tbl_Filter_TD_752082_output", 6100000, 1, "");
    tbl_Filter_TD_752082_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7826072_input;
    tbl_SerializeFromObject_TD_7826072_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7826072_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7826072_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7826072_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7826072_input.allocateHost();
    tbl_SerializeFromObject_TD_7826072_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_7250885_output("tbl_JOIN_LEFTSEMI_TD_7250885_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_7250885_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8888280_input;
    tbl_SerializeFromObject_TD_8888280_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8888280_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8888280_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8888280_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_8888280_input.allocateHost();
    tbl_SerializeFromObject_TD_8888280_input.loadHost();
    Table tbl_SerializeFromObject_TD_8531740_input;
    tbl_SerializeFromObject_TD_8531740_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8531740_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8531740_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8531740_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8531740_input.allocateHost();
    tbl_SerializeFromObject_TD_8531740_input.loadHost();
    Table tbl_Filter_TD_862651_output("tbl_Filter_TD_862651_output", 6100000, 1, "");
    tbl_Filter_TD_862651_output.allocateHost();
    Table tbl_Filter_TD_8270607_output("tbl_Filter_TD_8270607_output", 6100000, 1, "");
    tbl_Filter_TD_8270607_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9528659_input;
    tbl_SerializeFromObject_TD_9528659_input = Table("customer_address", customer_address_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_9528659_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9528659_input.allocateHost();
    tbl_SerializeFromObject_TD_9528659_input.loadHost();
    Table tbl_Aggregate_TD_9885721_output("tbl_Aggregate_TD_9885721_output", 6100000, 2, "");
    tbl_Aggregate_TD_9885721_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10814657_output("tbl_JOIN_INNER_TD_10814657_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_10814657_output.allocateHost();
    Table tbl_Filter_TD_11830516_output("tbl_Filter_TD_11830516_output", 6100000, 2, "");
    tbl_Filter_TD_11830516_output.allocateHost();
    Table tbl_Filter_TD_11376396_output("tbl_Filter_TD_11376396_output", 6100000, 1, "");
    tbl_Filter_TD_11376396_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12768689_input;
    tbl_SerializeFromObject_TD_12768689_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12768689_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_12768689_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12768689_input.allocateHost();
    tbl_SerializeFromObject_TD_12768689_input.loadHost();
    Table tbl_SerializeFromObject_TD_12101089_input;
    tbl_SerializeFromObject_TD_12101089_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12101089_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_12101089_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12101089_input.allocateHost();
    tbl_SerializeFromObject_TD_12101089_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6637257_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7229913_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_752082_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_6637257_cmds;
    cfg_JOIN_INNER_TD_6637257_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6637257_gqe_join (cfg_JOIN_INNER_TD_6637257_cmds.cmd);
    cfg_JOIN_INNER_TD_6637257_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_6637257;
    krnl_JOIN_INNER_TD_6637257 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6637257.setup(tbl_Filter_TD_7229913_output, tbl_Filter_TD_752082_output, tbl_JOIN_INNER_TD_6637257_output, cfg_JOIN_INNER_TD_6637257_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_6637257;
    trans_JOIN_INNER_TD_6637257.setq(q_h);
    trans_JOIN_INNER_TD_6637257.add(&(cfg_JOIN_INNER_TD_6637257_cmds));
    transEngine trans_JOIN_INNER_TD_6637257_out;
    trans_JOIN_INNER_TD_6637257_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6637257;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6637257;
    std::vector<cl::Event> events_JOIN_INNER_TD_6637257;
    events_h2d_wr_JOIN_INNER_TD_6637257.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6637257.resize(1);
    events_JOIN_INNER_TD_6637257.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6637257;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6637257;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_696715_s, tv_r_Filter_11_696715_e;
    gettimeofday(&tv_r_Filter_11_696715_s, 0);
    SW_Filter_TD_11376396(tbl_SerializeFromObject_TD_12101089_input, tbl_Filter_TD_11376396_output);
    gettimeofday(&tv_r_Filter_11_696715_e, 0);

    struct timeval tv_r_Filter_11_470319_s, tv_r_Filter_11_470319_e;
    gettimeofday(&tv_r_Filter_11_470319_s, 0);
    SW_Filter_TD_11830516(tbl_SerializeFromObject_TD_12768689_input, tbl_Filter_TD_11830516_output);
    gettimeofday(&tv_r_Filter_11_470319_e, 0);

    struct timeval tv_r_JOIN_INNER_10_246949_s, tv_r_JOIN_INNER_10_246949_e;
    gettimeofday(&tv_r_JOIN_INNER_10_246949_s, 0);
    SW_JOIN_INNER_TD_10814657(tbl_Filter_TD_11830516_output, tbl_Filter_TD_11376396_output, tbl_JOIN_INNER_TD_10814657_output);
    gettimeofday(&tv_r_JOIN_INNER_10_246949_e, 0);

    struct timeval tv_r_Aggregate_9_557245_s, tv_r_Aggregate_9_557245_e;
    gettimeofday(&tv_r_Aggregate_9_557245_s, 0);
    SW_Aggregate_TD_9885721(tbl_JOIN_INNER_TD_10814657_output, tbl_Aggregate_TD_9885721_output);
    gettimeofday(&tv_r_Aggregate_9_557245_e, 0);

    struct timeval tv_r_Filter_8_9567_s, tv_r_Filter_8_9567_e;
    gettimeofday(&tv_r_Filter_8_9567_s, 0);
    SW_Filter_TD_8270607(tbl_Aggregate_TD_9885721_output, tbl_Filter_TD_8270607_output);
    gettimeofday(&tv_r_Filter_8_9567_e, 0);

    struct timeval tv_r_Filter_8_50329_s, tv_r_Filter_8_50329_e;
    gettimeofday(&tv_r_Filter_8_50329_s, 0);
    SW_Filter_TD_862651(tbl_SerializeFromObject_TD_9528659_input, tbl_Filter_TD_862651_output);
    gettimeofday(&tv_r_Filter_8_50329_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_115937_s, tv_r_JOIN_LEFTSEMI_7_115937_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_115937_s, 0);
    SW_JOIN_LEFTSEMI_TD_7250885(tbl_Filter_TD_862651_output, tbl_Filter_TD_8270607_output, tbl_JOIN_LEFTSEMI_TD_7250885_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_115937_e, 0);

    struct timeval tv_r_Filter_7_413408_s, tv_r_Filter_7_413408_e;
    gettimeofday(&tv_r_Filter_7_413408_s, 0);
    SW_Filter_TD_752082(tbl_SerializeFromObject_TD_8531740_input, tbl_Filter_TD_752082_output);
    gettimeofday(&tv_r_Filter_7_413408_e, 0);

    struct timeval tv_r_Filter_7_192761_s, tv_r_Filter_7_192761_e;
    gettimeofday(&tv_r_Filter_7_192761_s, 0);
    SW_Filter_TD_7229913(tbl_SerializeFromObject_TD_8888280_input, tbl_Filter_TD_7229913_output);
    gettimeofday(&tv_r_Filter_7_192761_e, 0);

    struct timeval tv_r_Project_6_715558_s, tv_r_Project_6_715558_e;
    gettimeofday(&tv_r_Project_6_715558_s, 0);
    SW_Project_TD_6966312(tbl_JOIN_LEFTSEMI_TD_7250885_output, tbl_Project_TD_6966312_output);
    gettimeofday(&tv_r_Project_6_715558_e, 0);

    struct timeval tv_r_Filter_6_429084_s, tv_r_Filter_6_429084_e;
    gettimeofday(&tv_r_Filter_6_429084_s, 0);
    SW_Filter_TD_6234521(tbl_SerializeFromObject_TD_7826072_input, tbl_Filter_TD_6234521_output);
    gettimeofday(&tv_r_Filter_6_429084_e, 0);

    struct timeval tv_r_JOIN_INNER_6_258975_s, tv_r_JOIN_INNER_6_258975_e;
    gettimeofday(&tv_r_JOIN_INNER_6_258975_s, 0);
    trans_JOIN_INNER_TD_6637257.add(&(tbl_Filter_TD_7229913_output));
    trans_JOIN_INNER_TD_6637257.add(&(tbl_Filter_TD_752082_output));
    trans_JOIN_INNER_TD_6637257.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6637257), &(events_h2d_wr_JOIN_INNER_TD_6637257[0]));
    events_grp_JOIN_INNER_TD_6637257.push_back(events_h2d_wr_JOIN_INNER_TD_6637257[0]);
    krnl_JOIN_INNER_TD_6637257.run(0, &(events_grp_JOIN_INNER_TD_6637257), &(events_JOIN_INNER_TD_6637257[0]));
    
    trans_JOIN_INNER_TD_6637257_out.add(&(tbl_JOIN_INNER_TD_6637257_output));
    trans_JOIN_INNER_TD_6637257_out.dev2host(0, &(events_JOIN_INNER_TD_6637257), &(events_d2h_rd_JOIN_INNER_TD_6637257[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_258975_e, 0);

    struct timeval tv_r_Aggregate_5_131796_s, tv_r_Aggregate_5_131796_e;
    gettimeofday(&tv_r_Aggregate_5_131796_s, 0);
    SW_Aggregate_TD_5430624(tbl_Project_TD_6966312_output, tbl_Aggregate_TD_5430624_output);
    gettimeofday(&tv_r_Aggregate_5_131796_e, 0);

    struct timeval tv_r_JOIN_INNER_5_534347_s, tv_r_JOIN_INNER_5_534347_e;
    gettimeofday(&tv_r_JOIN_INNER_5_534347_s, 0);
    SW_JOIN_INNER_TD_5120648(tbl_JOIN_INNER_TD_6637257_output, tbl_Filter_TD_6234521_output, tbl_JOIN_INNER_TD_5120648_output);
    gettimeofday(&tv_r_JOIN_INNER_5_534347_e, 0);

    struct timeval tv_r_JOIN_INNER_4_436707_s, tv_r_JOIN_INNER_4_436707_e;
    gettimeofday(&tv_r_JOIN_INNER_4_436707_s, 0);
    SW_JOIN_INNER_TD_4543876(tbl_JOIN_INNER_TD_5120648_output, tbl_Aggregate_TD_5430624_output, tbl_JOIN_INNER_TD_4543876_output);
    gettimeofday(&tv_r_JOIN_INNER_4_436707_e, 0);

    struct timeval tv_r_Aggregate_3_42071_s, tv_r_Aggregate_3_42071_e;
    gettimeofday(&tv_r_Aggregate_3_42071_s, 0);
    SW_Aggregate_TD_397347(tbl_JOIN_INNER_TD_4543876_output, tbl_Aggregate_TD_397347_output);
    gettimeofday(&tv_r_Aggregate_3_42071_e, 0);

    struct timeval tv_r_Sort_2_630627_s, tv_r_Sort_2_630627_e;
    gettimeofday(&tv_r_Sort_2_630627_s, 0);
    SW_Sort_TD_2398304(tbl_Aggregate_TD_397347_output, tbl_Sort_TD_2398304_output);
    gettimeofday(&tv_r_Sort_2_630627_e, 0);

    struct timeval tv_r_LocalLimit_1_961656_s, tv_r_LocalLimit_1_961656_e;
    gettimeofday(&tv_r_LocalLimit_1_961656_s, 0);
    SW_LocalLimit_TD_1593401(tbl_Sort_TD_2398304_output, tbl_LocalLimit_TD_1593401_output);
    gettimeofday(&tv_r_LocalLimit_1_961656_e, 0);

    struct timeval tv_r_GlobalLimit_0_10013_s, tv_r_GlobalLimit_0_10013_e;
    gettimeofday(&tv_r_GlobalLimit_0_10013_s, 0);
    SW_GlobalLimit_TD_0727163(tbl_LocalLimit_TD_1593401_output, tbl_GlobalLimit_TD_0727163_output);
    gettimeofday(&tv_r_GlobalLimit_0_10013_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_696715_s, &tv_r_Filter_11_696715_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12101089_input: " << tbl_SerializeFromObject_TD_12101089_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_470319_s, &tv_r_Filter_11_470319_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12768689_input: " << tbl_SerializeFromObject_TD_12768689_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_246949_s, &tv_r_JOIN_INNER_10_246949_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11830516_output: " << tbl_Filter_TD_11830516_output.getNumRow() << " " << "tbl_Filter_TD_11376396_output: " << tbl_Filter_TD_11376396_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_557245_s, &tv_r_Aggregate_9_557245_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10814657_output: " << tbl_JOIN_INNER_TD_10814657_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_9567_s, &tv_r_Filter_8_9567_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9885721_output: " << tbl_Aggregate_TD_9885721_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_50329_s, &tv_r_Filter_8_50329_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9528659_input: " << tbl_SerializeFromObject_TD_9528659_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_115937_s, &tv_r_JOIN_LEFTSEMI_7_115937_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_862651_output: " << tbl_Filter_TD_862651_output.getNumRow() << " " << "tbl_Filter_TD_8270607_output: " << tbl_Filter_TD_8270607_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_413408_s, &tv_r_Filter_7_413408_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8531740_input: " << tbl_SerializeFromObject_TD_8531740_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_192761_s, &tv_r_Filter_7_192761_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8888280_input: " << tbl_SerializeFromObject_TD_8888280_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_715558_s, &tv_r_Project_6_715558_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_7250885_output: " << tbl_JOIN_LEFTSEMI_TD_7250885_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_429084_s, &tv_r_Filter_6_429084_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7826072_input: " << tbl_SerializeFromObject_TD_7826072_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_258975_s, &tv_r_JOIN_INNER_6_258975_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7229913_output: " << tbl_Filter_TD_7229913_output.getNumRow() << " " << "tbl_Filter_TD_752082_output: " << tbl_Filter_TD_752082_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_131796_s, &tv_r_Aggregate_5_131796_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6966312_output: " << tbl_Project_TD_6966312_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_534347_s, &tv_r_JOIN_INNER_5_534347_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6637257_output: " << tbl_JOIN_INNER_TD_6637257_output.getNumRow() << " " << "tbl_Filter_TD_6234521_output: " << tbl_Filter_TD_6234521_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_436707_s, &tv_r_JOIN_INNER_4_436707_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5120648_output: " << tbl_JOIN_INNER_TD_5120648_output.getNumRow() << " " << "tbl_Aggregate_TD_5430624_output: " << tbl_Aggregate_TD_5430624_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_42071_s, &tv_r_Aggregate_3_42071_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4543876_output: " << tbl_JOIN_INNER_TD_4543876_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_630627_s, &tv_r_Sort_2_630627_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_397347_output: " << tbl_Aggregate_TD_397347_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_961656_s, &tv_r_LocalLimit_1_961656_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2398304_output: " << tbl_Sort_TD_2398304_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_10013_s, &tv_r_GlobalLimit_0_10013_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1593401_output: " << tbl_LocalLimit_TD_1593401_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 85.86921 * 1000 << "ms" << std::endl; 
    return 0; 
}
