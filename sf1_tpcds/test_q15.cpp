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

#include "cfgFunc_q15.hpp" 
#include "q15.hpp" 

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
    std::cout << "NOTE:running query #15\n."; 
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
    Table tbl_GlobalLimit_TD_0466310_output("tbl_GlobalLimit_TD_0466310_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0466310_output.allocateHost();
    Table tbl_LocalLimit_TD_1524901_output("tbl_LocalLimit_TD_1524901_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1524901_output.allocateHost();
    Table tbl_Sort_TD_2389318_output("tbl_Sort_TD_2389318_output", 6100000, 2, "");
    tbl_Sort_TD_2389318_output.allocateHost();
    Table tbl_Aggregate_TD_3810155_output("tbl_Aggregate_TD_3810155_output", 6100000, 2, "");
    tbl_Aggregate_TD_3810155_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4529543_output("tbl_JOIN_INNER_TD_4529543_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4529543_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5428971_output("tbl_JOIN_INNER_TD_5428971_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5428971_output.allocateHost();
    Table tbl_Filter_TD_5467112_output("tbl_Filter_TD_5467112_output", 6100000, 1, "");
    tbl_Filter_TD_5467112_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6592990_output("tbl_JOIN_INNER_TD_6592990_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6592990_output.allocateHost();
    Table tbl_Filter_TD_6321348_output("tbl_Filter_TD_6321348_output", 6100000, 3, "");
    tbl_Filter_TD_6321348_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6908965_input;
    tbl_SerializeFromObject_TD_6908965_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6908965_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6908965_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_6908965_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6908965_input.allocateHost();
    tbl_SerializeFromObject_TD_6908965_input.loadHost();
    Table tbl_Filter_TD_7942636_output("tbl_Filter_TD_7942636_output", 6100000, 3, "");
    tbl_Filter_TD_7942636_output.allocateHost();
    Table tbl_Filter_TD_7218637_output("tbl_Filter_TD_7218637_output", 6100000, 2, "");
    tbl_Filter_TD_7218637_output.allocateHost();
    Table tbl_SerializeFromObject_TD_785112_input;
    tbl_SerializeFromObject_TD_785112_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_785112_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_785112_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_785112_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_785112_input.allocateHost();
    tbl_SerializeFromObject_TD_785112_input.loadHost();
    Table tbl_SerializeFromObject_TD_8852226_input;
    tbl_SerializeFromObject_TD_8852226_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8852226_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8852226_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_8852226_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_8852226_input.allocateHost();
    tbl_SerializeFromObject_TD_8852226_input.loadHost();
    Table tbl_SerializeFromObject_TD_8999344_input;
    tbl_SerializeFromObject_TD_8999344_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8999344_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8999344_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_8999344_input.allocateHost();
    tbl_SerializeFromObject_TD_8999344_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6592990_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7942636_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7218637_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_6592990_cmds;
    cfg_JOIN_INNER_TD_6592990_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6592990_gqe_join (cfg_JOIN_INNER_TD_6592990_cmds.cmd);
    cfg_JOIN_INNER_TD_6592990_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_6592990;
    krnl_JOIN_INNER_TD_6592990 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6592990.setup(tbl_Filter_TD_7942636_output, tbl_Filter_TD_7218637_output, tbl_JOIN_INNER_TD_6592990_output, cfg_JOIN_INNER_TD_6592990_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_6592990;
    trans_JOIN_INNER_TD_6592990.setq(q_h);
    trans_JOIN_INNER_TD_6592990.add(&(cfg_JOIN_INNER_TD_6592990_cmds));
    transEngine trans_JOIN_INNER_TD_6592990_out;
    trans_JOIN_INNER_TD_6592990_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6592990;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6592990;
    std::vector<cl::Event> events_JOIN_INNER_TD_6592990;
    events_h2d_wr_JOIN_INNER_TD_6592990.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6592990.resize(1);
    events_JOIN_INNER_TD_6592990.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6592990;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6592990;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_823677_s, tv_r_Filter_7_823677_e;
    gettimeofday(&tv_r_Filter_7_823677_s, 0);
    SW_Filter_TD_7218637(tbl_SerializeFromObject_TD_8999344_input, tbl_Filter_TD_7218637_output);
    gettimeofday(&tv_r_Filter_7_823677_e, 0);

    struct timeval tv_r_Filter_7_351846_s, tv_r_Filter_7_351846_e;
    gettimeofday(&tv_r_Filter_7_351846_s, 0);
    SW_Filter_TD_7942636(tbl_SerializeFromObject_TD_8852226_input, tbl_Filter_TD_7942636_output);
    gettimeofday(&tv_r_Filter_7_351846_e, 0);

    struct timeval tv_r_Filter_6_372434_s, tv_r_Filter_6_372434_e;
    gettimeofday(&tv_r_Filter_6_372434_s, 0);
    SW_Filter_TD_6321348(tbl_SerializeFromObject_TD_785112_input, tbl_Filter_TD_6321348_output);
    gettimeofday(&tv_r_Filter_6_372434_e, 0);

    struct timeval tv_r_JOIN_INNER_6_590395_s, tv_r_JOIN_INNER_6_590395_e;
    gettimeofday(&tv_r_JOIN_INNER_6_590395_s, 0);
    trans_JOIN_INNER_TD_6592990.add(&(tbl_Filter_TD_7942636_output));
    trans_JOIN_INNER_TD_6592990.add(&(tbl_Filter_TD_7218637_output));
    trans_JOIN_INNER_TD_6592990.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6592990), &(events_h2d_wr_JOIN_INNER_TD_6592990[0]));
    events_grp_JOIN_INNER_TD_6592990.push_back(events_h2d_wr_JOIN_INNER_TD_6592990[0]);
    krnl_JOIN_INNER_TD_6592990.run(0, &(events_grp_JOIN_INNER_TD_6592990), &(events_JOIN_INNER_TD_6592990[0]));
    
    trans_JOIN_INNER_TD_6592990_out.add(&(tbl_JOIN_INNER_TD_6592990_output));
    trans_JOIN_INNER_TD_6592990_out.dev2host(0, &(events_JOIN_INNER_TD_6592990), &(events_d2h_rd_JOIN_INNER_TD_6592990[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_590395_e, 0);

    struct timeval tv_r_Filter_5_262931_s, tv_r_Filter_5_262931_e;
    gettimeofday(&tv_r_Filter_5_262931_s, 0);
    SW_Filter_TD_5467112(tbl_SerializeFromObject_TD_6908965_input, tbl_Filter_TD_5467112_output);
    gettimeofday(&tv_r_Filter_5_262931_e, 0);

    struct timeval tv_r_JOIN_INNER_5_708471_s, tv_r_JOIN_INNER_5_708471_e;
    gettimeofday(&tv_r_JOIN_INNER_5_708471_s, 0);
    SW_JOIN_INNER_TD_5428971(tbl_JOIN_INNER_TD_6592990_output, tbl_Filter_TD_6321348_output, tbl_JOIN_INNER_TD_5428971_output);
    gettimeofday(&tv_r_JOIN_INNER_5_708471_e, 0);

    struct timeval tv_r_JOIN_INNER_4_470113_s, tv_r_JOIN_INNER_4_470113_e;
    gettimeofday(&tv_r_JOIN_INNER_4_470113_s, 0);
    SW_JOIN_INNER_TD_4529543(tbl_JOIN_INNER_TD_5428971_output, tbl_Filter_TD_5467112_output, tbl_JOIN_INNER_TD_4529543_output);
    gettimeofday(&tv_r_JOIN_INNER_4_470113_e, 0);

    struct timeval tv_r_Aggregate_3_576120_s, tv_r_Aggregate_3_576120_e;
    gettimeofday(&tv_r_Aggregate_3_576120_s, 0);
    SW_Aggregate_TD_3810155(tbl_JOIN_INNER_TD_4529543_output, tbl_Aggregate_TD_3810155_output);
    gettimeofday(&tv_r_Aggregate_3_576120_e, 0);

    struct timeval tv_r_Sort_2_479620_s, tv_r_Sort_2_479620_e;
    gettimeofday(&tv_r_Sort_2_479620_s, 0);
    SW_Sort_TD_2389318(tbl_Aggregate_TD_3810155_output, tbl_Sort_TD_2389318_output);
    gettimeofday(&tv_r_Sort_2_479620_e, 0);

    struct timeval tv_r_LocalLimit_1_317875_s, tv_r_LocalLimit_1_317875_e;
    gettimeofday(&tv_r_LocalLimit_1_317875_s, 0);
    SW_LocalLimit_TD_1524901(tbl_Sort_TD_2389318_output, tbl_LocalLimit_TD_1524901_output);
    gettimeofday(&tv_r_LocalLimit_1_317875_e, 0);

    struct timeval tv_r_GlobalLimit_0_152194_s, tv_r_GlobalLimit_0_152194_e;
    gettimeofday(&tv_r_GlobalLimit_0_152194_s, 0);
    SW_GlobalLimit_TD_0466310(tbl_LocalLimit_TD_1524901_output, tbl_GlobalLimit_TD_0466310_output);
    gettimeofday(&tv_r_GlobalLimit_0_152194_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_823677_s, &tv_r_Filter_7_823677_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8999344_input: " << tbl_SerializeFromObject_TD_8999344_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_351846_s, &tv_r_Filter_7_351846_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8852226_input: " << tbl_SerializeFromObject_TD_8852226_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_372434_s, &tv_r_Filter_6_372434_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_785112_input: " << tbl_SerializeFromObject_TD_785112_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_590395_s, &tv_r_JOIN_INNER_6_590395_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7942636_output: " << tbl_Filter_TD_7942636_output.getNumRow() << " " << "tbl_Filter_TD_7218637_output: " << tbl_Filter_TD_7218637_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_262931_s, &tv_r_Filter_5_262931_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6908965_input: " << tbl_SerializeFromObject_TD_6908965_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_708471_s, &tv_r_JOIN_INNER_5_708471_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6592990_output: " << tbl_JOIN_INNER_TD_6592990_output.getNumRow() << " " << "tbl_Filter_TD_6321348_output: " << tbl_Filter_TD_6321348_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_470113_s, &tv_r_JOIN_INNER_4_470113_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5428971_output: " << tbl_JOIN_INNER_TD_5428971_output.getNumRow() << " " << "tbl_Filter_TD_5467112_output: " << tbl_Filter_TD_5467112_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_576120_s, &tv_r_Aggregate_3_576120_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4529543_output: " << tbl_JOIN_INNER_TD_4529543_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_479620_s, &tv_r_Sort_2_479620_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3810155_output: " << tbl_Aggregate_TD_3810155_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_317875_s, &tv_r_LocalLimit_1_317875_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2389318_output: " << tbl_Sort_TD_2389318_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_152194_s, &tv_r_GlobalLimit_0_152194_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1524901_output: " << tbl_LocalLimit_TD_1524901_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.6462483 * 1000 << "ms" << std::endl; 
    return 0; 
}
