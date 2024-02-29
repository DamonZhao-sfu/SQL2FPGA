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
    Table tbl_GlobalLimit_TD_050086_output("tbl_GlobalLimit_TD_050086_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_050086_output.allocateHost();
    Table tbl_LocalLimit_TD_137286_output("tbl_LocalLimit_TD_137286_output", 6100000, 2, "");
    tbl_LocalLimit_TD_137286_output.allocateHost();
    Table tbl_Sort_TD_2904256_output("tbl_Sort_TD_2904256_output", 6100000, 2, "");
    tbl_Sort_TD_2904256_output.allocateHost();
    Table tbl_Aggregate_TD_3502980_output("tbl_Aggregate_TD_3502980_output", 6100000, 2, "");
    tbl_Aggregate_TD_3502980_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4941554_output("tbl_JOIN_INNER_TD_4941554_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4941554_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5377107_output("tbl_JOIN_INNER_TD_5377107_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5377107_output.allocateHost();
    Table tbl_Aggregate_TD_561802_output("tbl_Aggregate_TD_561802_output", 6100000, 1, "");
    tbl_Aggregate_TD_561802_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6989457_output("tbl_JOIN_INNER_TD_6989457_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6989457_output.allocateHost();
    Table tbl_Filter_TD_6215944_output("tbl_Filter_TD_6215944_output", 6100000, 3, "");
    tbl_Filter_TD_6215944_output.allocateHost();
    Table tbl_Project_TD_6642414_output("tbl_Project_TD_6642414_output", 6100000, 1, "");
    tbl_Project_TD_6642414_output.allocateHost();
    Table tbl_Filter_TD_7342694_output("tbl_Filter_TD_7342694_output", 6100000, 3, "");
    tbl_Filter_TD_7342694_output.allocateHost();
    Table tbl_Filter_TD_7188400_output("tbl_Filter_TD_7188400_output", 6100000, 1, "");
    tbl_Filter_TD_7188400_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7455297_input;
    tbl_SerializeFromObject_TD_7455297_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7455297_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7455297_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7455297_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7455297_input.allocateHost();
    tbl_SerializeFromObject_TD_7455297_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_732446_output("tbl_JOIN_LEFTSEMI_TD_732446_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_732446_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8991989_input;
    tbl_SerializeFromObject_TD_8991989_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8991989_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8991989_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8991989_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_8991989_input.allocateHost();
    tbl_SerializeFromObject_TD_8991989_input.loadHost();
    Table tbl_SerializeFromObject_TD_8745087_input;
    tbl_SerializeFromObject_TD_8745087_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8745087_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8745087_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_8745087_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8745087_input.allocateHost();
    tbl_SerializeFromObject_TD_8745087_input.loadHost();
    Table tbl_Filter_TD_8171854_output("tbl_Filter_TD_8171854_output", 6100000, 1, "");
    tbl_Filter_TD_8171854_output.allocateHost();
    Table tbl_Filter_TD_8371427_output("tbl_Filter_TD_8371427_output", 6100000, 1, "");
    tbl_Filter_TD_8371427_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9906937_input;
    tbl_SerializeFromObject_TD_9906937_input = Table("customer_address", customer_address_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_9906937_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9906937_input.allocateHost();
    tbl_SerializeFromObject_TD_9906937_input.loadHost();
    Table tbl_Aggregate_TD_9977358_output("tbl_Aggregate_TD_9977358_output", 6100000, 2, "");
    tbl_Aggregate_TD_9977358_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10819547_output("tbl_JOIN_INNER_TD_10819547_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_10819547_output.allocateHost();
    Table tbl_Filter_TD_11208208_output("tbl_Filter_TD_11208208_output", 6100000, 2, "");
    tbl_Filter_TD_11208208_output.allocateHost();
    Table tbl_Filter_TD_1197485_output("tbl_Filter_TD_1197485_output", 6100000, 1, "");
    tbl_Filter_TD_1197485_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12286301_input;
    tbl_SerializeFromObject_TD_12286301_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12286301_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_12286301_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12286301_input.allocateHost();
    tbl_SerializeFromObject_TD_12286301_input.loadHost();
    Table tbl_SerializeFromObject_TD_12287125_input;
    tbl_SerializeFromObject_TD_12287125_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12287125_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_12287125_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_12287125_input.allocateHost();
    tbl_SerializeFromObject_TD_12287125_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6989457_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7342694_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7188400_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_6989457_cmds;
    cfg_JOIN_INNER_TD_6989457_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6989457_gqe_join (cfg_JOIN_INNER_TD_6989457_cmds.cmd);
    cfg_JOIN_INNER_TD_6989457_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_6989457;
    krnl_JOIN_INNER_TD_6989457 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6989457.setup(tbl_Filter_TD_7342694_output, tbl_Filter_TD_7188400_output, tbl_JOIN_INNER_TD_6989457_output, cfg_JOIN_INNER_TD_6989457_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_6989457;
    trans_JOIN_INNER_TD_6989457.setq(q_h);
    trans_JOIN_INNER_TD_6989457.add(&(cfg_JOIN_INNER_TD_6989457_cmds));
    transEngine trans_JOIN_INNER_TD_6989457_out;
    trans_JOIN_INNER_TD_6989457_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6989457;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6989457;
    std::vector<cl::Event> events_JOIN_INNER_TD_6989457;
    events_h2d_wr_JOIN_INNER_TD_6989457.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6989457.resize(1);
    events_JOIN_INNER_TD_6989457.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6989457;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6989457;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_746220_s, tv_r_Filter_11_746220_e;
    gettimeofday(&tv_r_Filter_11_746220_s, 0);
    SW_Filter_TD_1197485(tbl_SerializeFromObject_TD_12287125_input, tbl_Filter_TD_1197485_output);
    gettimeofday(&tv_r_Filter_11_746220_e, 0);

    struct timeval tv_r_Filter_11_530066_s, tv_r_Filter_11_530066_e;
    gettimeofday(&tv_r_Filter_11_530066_s, 0);
    SW_Filter_TD_11208208(tbl_SerializeFromObject_TD_12286301_input, tbl_Filter_TD_11208208_output);
    gettimeofday(&tv_r_Filter_11_530066_e, 0);

    struct timeval tv_r_JOIN_INNER_10_985970_s, tv_r_JOIN_INNER_10_985970_e;
    gettimeofday(&tv_r_JOIN_INNER_10_985970_s, 0);
    SW_JOIN_INNER_TD_10819547(tbl_Filter_TD_11208208_output, tbl_Filter_TD_1197485_output, tbl_JOIN_INNER_TD_10819547_output);
    gettimeofday(&tv_r_JOIN_INNER_10_985970_e, 0);

    struct timeval tv_r_Aggregate_9_856244_s, tv_r_Aggregate_9_856244_e;
    gettimeofday(&tv_r_Aggregate_9_856244_s, 0);
    SW_Aggregate_TD_9977358(tbl_JOIN_INNER_TD_10819547_output, tbl_Aggregate_TD_9977358_output);
    gettimeofday(&tv_r_Aggregate_9_856244_e, 0);

    struct timeval tv_r_Filter_8_247496_s, tv_r_Filter_8_247496_e;
    gettimeofday(&tv_r_Filter_8_247496_s, 0);
    SW_Filter_TD_8371427(tbl_Aggregate_TD_9977358_output, tbl_Filter_TD_8371427_output);
    gettimeofday(&tv_r_Filter_8_247496_e, 0);

    struct timeval tv_r_Filter_8_174065_s, tv_r_Filter_8_174065_e;
    gettimeofday(&tv_r_Filter_8_174065_s, 0);
    SW_Filter_TD_8171854(tbl_SerializeFromObject_TD_9906937_input, tbl_Filter_TD_8171854_output);
    gettimeofday(&tv_r_Filter_8_174065_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_254910_s, tv_r_JOIN_LEFTSEMI_7_254910_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_254910_s, 0);
    SW_JOIN_LEFTSEMI_TD_732446(tbl_Filter_TD_8171854_output, tbl_Filter_TD_8371427_output, tbl_JOIN_LEFTSEMI_TD_732446_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_254910_e, 0);

    struct timeval tv_r_Filter_7_631133_s, tv_r_Filter_7_631133_e;
    gettimeofday(&tv_r_Filter_7_631133_s, 0);
    SW_Filter_TD_7188400(tbl_SerializeFromObject_TD_8745087_input, tbl_Filter_TD_7188400_output);
    gettimeofday(&tv_r_Filter_7_631133_e, 0);

    struct timeval tv_r_Filter_7_193223_s, tv_r_Filter_7_193223_e;
    gettimeofday(&tv_r_Filter_7_193223_s, 0);
    SW_Filter_TD_7342694(tbl_SerializeFromObject_TD_8991989_input, tbl_Filter_TD_7342694_output);
    gettimeofday(&tv_r_Filter_7_193223_e, 0);

    struct timeval tv_r_Project_6_344840_s, tv_r_Project_6_344840_e;
    gettimeofday(&tv_r_Project_6_344840_s, 0);
    SW_Project_TD_6642414(tbl_JOIN_LEFTSEMI_TD_732446_output, tbl_Project_TD_6642414_output);
    gettimeofday(&tv_r_Project_6_344840_e, 0);

    struct timeval tv_r_Filter_6_520927_s, tv_r_Filter_6_520927_e;
    gettimeofday(&tv_r_Filter_6_520927_s, 0);
    SW_Filter_TD_6215944(tbl_SerializeFromObject_TD_7455297_input, tbl_Filter_TD_6215944_output);
    gettimeofday(&tv_r_Filter_6_520927_e, 0);

    struct timeval tv_r_JOIN_INNER_6_857816_s, tv_r_JOIN_INNER_6_857816_e;
    gettimeofday(&tv_r_JOIN_INNER_6_857816_s, 0);
    trans_JOIN_INNER_TD_6989457.add(&(tbl_Filter_TD_7342694_output));
    trans_JOIN_INNER_TD_6989457.add(&(tbl_Filter_TD_7188400_output));
    trans_JOIN_INNER_TD_6989457.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6989457), &(events_h2d_wr_JOIN_INNER_TD_6989457[0]));
    events_grp_JOIN_INNER_TD_6989457.push_back(events_h2d_wr_JOIN_INNER_TD_6989457[0]);
    krnl_JOIN_INNER_TD_6989457.run(0, &(events_grp_JOIN_INNER_TD_6989457), &(events_JOIN_INNER_TD_6989457[0]));
    
    trans_JOIN_INNER_TD_6989457_out.add(&(tbl_JOIN_INNER_TD_6989457_output));
    trans_JOIN_INNER_TD_6989457_out.dev2host(0, &(events_JOIN_INNER_TD_6989457), &(events_d2h_rd_JOIN_INNER_TD_6989457[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_857816_e, 0);

    struct timeval tv_r_Aggregate_5_319408_s, tv_r_Aggregate_5_319408_e;
    gettimeofday(&tv_r_Aggregate_5_319408_s, 0);
    SW_Aggregate_TD_561802(tbl_Project_TD_6642414_output, tbl_Aggregate_TD_561802_output);
    gettimeofday(&tv_r_Aggregate_5_319408_e, 0);

    struct timeval tv_r_JOIN_INNER_5_469198_s, tv_r_JOIN_INNER_5_469198_e;
    gettimeofday(&tv_r_JOIN_INNER_5_469198_s, 0);
    SW_JOIN_INNER_TD_5377107(tbl_JOIN_INNER_TD_6989457_output, tbl_Filter_TD_6215944_output, tbl_JOIN_INNER_TD_5377107_output);
    gettimeofday(&tv_r_JOIN_INNER_5_469198_e, 0);

    struct timeval tv_r_JOIN_INNER_4_181149_s, tv_r_JOIN_INNER_4_181149_e;
    gettimeofday(&tv_r_JOIN_INNER_4_181149_s, 0);
    SW_JOIN_INNER_TD_4941554(tbl_JOIN_INNER_TD_5377107_output, tbl_Aggregate_TD_561802_output, tbl_JOIN_INNER_TD_4941554_output);
    gettimeofday(&tv_r_JOIN_INNER_4_181149_e, 0);

    struct timeval tv_r_Aggregate_3_698510_s, tv_r_Aggregate_3_698510_e;
    gettimeofday(&tv_r_Aggregate_3_698510_s, 0);
    SW_Aggregate_TD_3502980(tbl_JOIN_INNER_TD_4941554_output, tbl_Aggregate_TD_3502980_output);
    gettimeofday(&tv_r_Aggregate_3_698510_e, 0);

    struct timeval tv_r_Sort_2_522619_s, tv_r_Sort_2_522619_e;
    gettimeofday(&tv_r_Sort_2_522619_s, 0);
    SW_Sort_TD_2904256(tbl_Aggregate_TD_3502980_output, tbl_Sort_TD_2904256_output);
    gettimeofday(&tv_r_Sort_2_522619_e, 0);

    struct timeval tv_r_LocalLimit_1_196448_s, tv_r_LocalLimit_1_196448_e;
    gettimeofday(&tv_r_LocalLimit_1_196448_s, 0);
    SW_LocalLimit_TD_137286(tbl_Sort_TD_2904256_output, tbl_LocalLimit_TD_137286_output);
    gettimeofday(&tv_r_LocalLimit_1_196448_e, 0);

    struct timeval tv_r_GlobalLimit_0_547479_s, tv_r_GlobalLimit_0_547479_e;
    gettimeofday(&tv_r_GlobalLimit_0_547479_s, 0);
    SW_GlobalLimit_TD_050086(tbl_LocalLimit_TD_137286_output, tbl_GlobalLimit_TD_050086_output);
    gettimeofday(&tv_r_GlobalLimit_0_547479_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_746220_s, &tv_r_Filter_11_746220_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12287125_input: " << tbl_SerializeFromObject_TD_12287125_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_530066_s, &tv_r_Filter_11_530066_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12286301_input: " << tbl_SerializeFromObject_TD_12286301_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_985970_s, &tv_r_JOIN_INNER_10_985970_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11208208_output: " << tbl_Filter_TD_11208208_output.getNumRow() << " " << "tbl_Filter_TD_1197485_output: " << tbl_Filter_TD_1197485_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_856244_s, &tv_r_Aggregate_9_856244_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10819547_output: " << tbl_JOIN_INNER_TD_10819547_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_247496_s, &tv_r_Filter_8_247496_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9977358_output: " << tbl_Aggregate_TD_9977358_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_174065_s, &tv_r_Filter_8_174065_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9906937_input: " << tbl_SerializeFromObject_TD_9906937_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_254910_s, &tv_r_JOIN_LEFTSEMI_7_254910_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8171854_output: " << tbl_Filter_TD_8171854_output.getNumRow() << " " << "tbl_Filter_TD_8371427_output: " << tbl_Filter_TD_8371427_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_631133_s, &tv_r_Filter_7_631133_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8745087_input: " << tbl_SerializeFromObject_TD_8745087_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_193223_s, &tv_r_Filter_7_193223_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8991989_input: " << tbl_SerializeFromObject_TD_8991989_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_344840_s, &tv_r_Project_6_344840_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_732446_output: " << tbl_JOIN_LEFTSEMI_TD_732446_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_520927_s, &tv_r_Filter_6_520927_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7455297_input: " << tbl_SerializeFromObject_TD_7455297_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_857816_s, &tv_r_JOIN_INNER_6_857816_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7342694_output: " << tbl_Filter_TD_7342694_output.getNumRow() << " " << "tbl_Filter_TD_7188400_output: " << tbl_Filter_TD_7188400_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_319408_s, &tv_r_Aggregate_5_319408_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6642414_output: " << tbl_Project_TD_6642414_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_469198_s, &tv_r_JOIN_INNER_5_469198_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6989457_output: " << tbl_JOIN_INNER_TD_6989457_output.getNumRow() << " " << "tbl_Filter_TD_6215944_output: " << tbl_Filter_TD_6215944_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_181149_s, &tv_r_JOIN_INNER_4_181149_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5377107_output: " << tbl_JOIN_INNER_TD_5377107_output.getNumRow() << " " << "tbl_Aggregate_TD_561802_output: " << tbl_Aggregate_TD_561802_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_698510_s, &tv_r_Aggregate_3_698510_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4941554_output: " << tbl_JOIN_INNER_TD_4941554_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_522619_s, &tv_r_Sort_2_522619_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3502980_output: " << tbl_Aggregate_TD_3502980_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_196448_s, &tv_r_LocalLimit_1_196448_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2904256_output: " << tbl_Sort_TD_2904256_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_547479_s, &tv_r_GlobalLimit_0_547479_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_137286_output: " << tbl_LocalLimit_TD_137286_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 56.27065 * 1000 << "ms" << std::endl; 
    return 0; 
}
