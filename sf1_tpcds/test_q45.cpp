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

#include "cfgFunc_q45.hpp" 
#include "q45.hpp" 

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
    std::cout << "NOTE:running query #45\n."; 
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
    Table tbl_GlobalLimit_TD_0549212_output("tbl_GlobalLimit_TD_0549212_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0549212_output.allocateHost();
    Table tbl_LocalLimit_TD_1357184_output("tbl_LocalLimit_TD_1357184_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1357184_output.allocateHost();
    Table tbl_Sort_TD_2683880_output("tbl_Sort_TD_2683880_output", 6100000, 3, "");
    tbl_Sort_TD_2683880_output.allocateHost();
    Table tbl_Aggregate_TD_3857124_output("tbl_Aggregate_TD_3857124_output", 6100000, 3, "");
    tbl_Aggregate_TD_3857124_output.allocateHost();
    Table tbl_Filter_TD_4223900_output("tbl_Filter_TD_4223900_output", 6100000, 3, "");
    tbl_Filter_TD_4223900_output.allocateHost();
    Table tbl_JOIN_EXISTENCEJOINEXISTS3600_TD_5535267_output("tbl_JOIN_EXISTENCEJOINEXISTS3600_TD_5535267_output", 6100000, 4, "");
    tbl_JOIN_EXISTENCEJOINEXISTS3600_TD_5535267_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6475627_output("tbl_JOIN_INNER_TD_6475627_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6475627_output.allocateHost();
    Table tbl_Filter_TD_6917167_output("tbl_Filter_TD_6917167_output", 6100000, 1, "");
    tbl_Filter_TD_6917167_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7746683_output("tbl_JOIN_INNER_TD_7746683_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7746683_output.allocateHost();
    Table tbl_Filter_TD_7976985_output("tbl_Filter_TD_7976985_output", 6100000, 2, "");
    tbl_Filter_TD_7976985_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7976248_input;
    tbl_SerializeFromObject_TD_7976248_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7976248_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7976248_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7976248_input.allocateHost();
    tbl_SerializeFromObject_TD_7976248_input.loadHost();
    Table tbl_JOIN_INNER_TD_8959750_output("tbl_JOIN_INNER_TD_8959750_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8959750_output.allocateHost();
    Table tbl_Filter_TD_8257474_output("tbl_Filter_TD_8257474_output", 6100000, 1, "");
    tbl_Filter_TD_8257474_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8782321_input;
    tbl_SerializeFromObject_TD_8782321_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8782321_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8782321_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8782321_input.allocateHost();
    tbl_SerializeFromObject_TD_8782321_input.loadHost();
    Table tbl_JOIN_INNER_TD_9700521_output("tbl_JOIN_INNER_TD_9700521_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_9700521_output.allocateHost();
    Table tbl_Filter_TD_9483381_output("tbl_Filter_TD_9483381_output", 6100000, 3, "");
    tbl_Filter_TD_9483381_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9463522_input;
    tbl_SerializeFromObject_TD_9463522_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9463522_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9463522_input.addCol("d_qoy", 4);
    tbl_SerializeFromObject_TD_9463522_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9463522_input.allocateHost();
    tbl_SerializeFromObject_TD_9463522_input.loadHost();
    Table tbl_Filter_TD_10542954_output("tbl_Filter_TD_10542954_output", 6100000, 4, "");
    tbl_Filter_TD_10542954_output.allocateHost();
    Table tbl_Filter_TD_10722523_output("tbl_Filter_TD_10722523_output", 6100000, 2, "");
    tbl_Filter_TD_10722523_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10416560_input;
    tbl_SerializeFromObject_TD_10416560_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10416560_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10416560_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10416560_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10416560_input.allocateHost();
    tbl_SerializeFromObject_TD_10416560_input.loadHost();
    Table tbl_SerializeFromObject_TD_1137279_input;
    tbl_SerializeFromObject_TD_1137279_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1137279_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1137279_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_1137279_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_1137279_input.addCol("ws_sales_price", 4);
    tbl_SerializeFromObject_TD_1137279_input.allocateHost();
    tbl_SerializeFromObject_TD_1137279_input.loadHost();
    Table tbl_SerializeFromObject_TD_11697672_input;
    tbl_SerializeFromObject_TD_11697672_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11697672_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_11697672_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_11697672_input.allocateHost();
    tbl_SerializeFromObject_TD_11697672_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_9700521_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10542954_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10722523_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_9700521_cmds;
    cfg_JOIN_INNER_TD_9700521_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9700521_gqe_join (cfg_JOIN_INNER_TD_9700521_cmds.cmd);
    cfg_JOIN_INNER_TD_9700521_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_9700521;
    krnl_JOIN_INNER_TD_9700521 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9700521.setup(tbl_Filter_TD_10542954_output, tbl_Filter_TD_10722523_output, tbl_JOIN_INNER_TD_9700521_output, cfg_JOIN_INNER_TD_9700521_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_9700521;
    trans_JOIN_INNER_TD_9700521.setq(q_h);
    trans_JOIN_INNER_TD_9700521.add(&(cfg_JOIN_INNER_TD_9700521_cmds));
    transEngine trans_JOIN_INNER_TD_9700521_out;
    trans_JOIN_INNER_TD_9700521_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9700521;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9700521;
    std::vector<cl::Event> events_JOIN_INNER_TD_9700521;
    events_h2d_wr_JOIN_INNER_TD_9700521.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9700521.resize(1);
    events_JOIN_INNER_TD_9700521.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9700521;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9700521;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_319467_s, tv_r_Filter_10_319467_e;
    gettimeofday(&tv_r_Filter_10_319467_s, 0);
    SW_Filter_TD_10722523(tbl_SerializeFromObject_TD_11697672_input, tbl_Filter_TD_10722523_output);
    gettimeofday(&tv_r_Filter_10_319467_e, 0);

    struct timeval tv_r_Filter_10_356215_s, tv_r_Filter_10_356215_e;
    gettimeofday(&tv_r_Filter_10_356215_s, 0);
    SW_Filter_TD_10542954(tbl_SerializeFromObject_TD_1137279_input, tbl_Filter_TD_10542954_output);
    gettimeofday(&tv_r_Filter_10_356215_e, 0);

    struct timeval tv_r_Filter_9_791761_s, tv_r_Filter_9_791761_e;
    gettimeofday(&tv_r_Filter_9_791761_s, 0);
    SW_Filter_TD_9483381(tbl_SerializeFromObject_TD_10416560_input, tbl_Filter_TD_9483381_output);
    gettimeofday(&tv_r_Filter_9_791761_e, 0);

    struct timeval tv_r_JOIN_INNER_9_236467_s, tv_r_JOIN_INNER_9_236467_e;
    gettimeofday(&tv_r_JOIN_INNER_9_236467_s, 0);
    trans_JOIN_INNER_TD_9700521.add(&(tbl_Filter_TD_10542954_output));
    trans_JOIN_INNER_TD_9700521.add(&(tbl_Filter_TD_10722523_output));
    trans_JOIN_INNER_TD_9700521.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9700521), &(events_h2d_wr_JOIN_INNER_TD_9700521[0]));
    events_grp_JOIN_INNER_TD_9700521.push_back(events_h2d_wr_JOIN_INNER_TD_9700521[0]);
    krnl_JOIN_INNER_TD_9700521.run(0, &(events_grp_JOIN_INNER_TD_9700521), &(events_JOIN_INNER_TD_9700521[0]));
    
    trans_JOIN_INNER_TD_9700521_out.add(&(tbl_JOIN_INNER_TD_9700521_output));
    trans_JOIN_INNER_TD_9700521_out.dev2host(0, &(events_JOIN_INNER_TD_9700521), &(events_d2h_rd_JOIN_INNER_TD_9700521[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_9_236467_e, 0);

    struct timeval tv_r_Filter_8_149558_s, tv_r_Filter_8_149558_e;
    gettimeofday(&tv_r_Filter_8_149558_s, 0);
    SW_Filter_TD_8257474(tbl_SerializeFromObject_TD_9463522_input, tbl_Filter_TD_8257474_output);
    gettimeofday(&tv_r_Filter_8_149558_e, 0);

    struct timeval tv_r_JOIN_INNER_8_156263_s, tv_r_JOIN_INNER_8_156263_e;
    gettimeofday(&tv_r_JOIN_INNER_8_156263_s, 0);
    SW_JOIN_INNER_TD_8959750(tbl_JOIN_INNER_TD_9700521_output, tbl_Filter_TD_9483381_output, tbl_JOIN_INNER_TD_8959750_output);
    gettimeofday(&tv_r_JOIN_INNER_8_156263_e, 0);

    struct timeval tv_r_Filter_7_78500_s, tv_r_Filter_7_78500_e;
    gettimeofday(&tv_r_Filter_7_78500_s, 0);
    SW_Filter_TD_7976985(tbl_SerializeFromObject_TD_8782321_input, tbl_Filter_TD_7976985_output);
    gettimeofday(&tv_r_Filter_7_78500_e, 0);

    struct timeval tv_r_JOIN_INNER_7_712229_s, tv_r_JOIN_INNER_7_712229_e;
    gettimeofday(&tv_r_JOIN_INNER_7_712229_s, 0);
    SW_JOIN_INNER_TD_7746683(tbl_JOIN_INNER_TD_8959750_output, tbl_Filter_TD_8257474_output, tbl_JOIN_INNER_TD_7746683_output);
    gettimeofday(&tv_r_JOIN_INNER_7_712229_e, 0);

    struct timeval tv_r_Filter_6_129686_s, tv_r_Filter_6_129686_e;
    gettimeofday(&tv_r_Filter_6_129686_s, 0);
    SW_Filter_TD_6917167(tbl_SerializeFromObject_TD_7976248_input, tbl_Filter_TD_6917167_output);
    gettimeofday(&tv_r_Filter_6_129686_e, 0);

    struct timeval tv_r_JOIN_INNER_6_637667_s, tv_r_JOIN_INNER_6_637667_e;
    gettimeofday(&tv_r_JOIN_INNER_6_637667_s, 0);
    SW_JOIN_INNER_TD_6475627(tbl_JOIN_INNER_TD_7746683_output, tbl_Filter_TD_7976985_output, tbl_JOIN_INNER_TD_6475627_output);
    gettimeofday(&tv_r_JOIN_INNER_6_637667_e, 0);

    struct timeval tv_r_JOIN_EXISTENCEJOINEXISTS3600_5_915758_s, tv_r_JOIN_EXISTENCEJOINEXISTS3600_5_915758_e;
    gettimeofday(&tv_r_JOIN_EXISTENCEJOINEXISTS3600_5_915758_s, 0);
    SW_JOIN_EXISTENCEJOINEXISTS3600_TD_5535267(tbl_JOIN_INNER_TD_6475627_output, tbl_Filter_TD_6917167_output, tbl_JOIN_EXISTENCEJOINEXISTS3600_TD_5535267_output);
    gettimeofday(&tv_r_JOIN_EXISTENCEJOINEXISTS3600_5_915758_e, 0);

    struct timeval tv_r_Filter_4_590625_s, tv_r_Filter_4_590625_e;
    gettimeofday(&tv_r_Filter_4_590625_s, 0);
    SW_Filter_TD_4223900(tbl_JOIN_EXISTENCEJOINEXISTS3600_TD_5535267_output, tbl_Filter_TD_4223900_output);
    gettimeofday(&tv_r_Filter_4_590625_e, 0);

    struct timeval tv_r_Aggregate_3_666170_s, tv_r_Aggregate_3_666170_e;
    gettimeofday(&tv_r_Aggregate_3_666170_s, 0);
    SW_Aggregate_TD_3857124(tbl_Filter_TD_4223900_output, tbl_Aggregate_TD_3857124_output);
    gettimeofday(&tv_r_Aggregate_3_666170_e, 0);

    struct timeval tv_r_Sort_2_443458_s, tv_r_Sort_2_443458_e;
    gettimeofday(&tv_r_Sort_2_443458_s, 0);
    SW_Sort_TD_2683880(tbl_Aggregate_TD_3857124_output, tbl_Sort_TD_2683880_output);
    gettimeofday(&tv_r_Sort_2_443458_e, 0);

    struct timeval tv_r_LocalLimit_1_922635_s, tv_r_LocalLimit_1_922635_e;
    gettimeofday(&tv_r_LocalLimit_1_922635_s, 0);
    SW_LocalLimit_TD_1357184(tbl_Sort_TD_2683880_output, tbl_LocalLimit_TD_1357184_output);
    gettimeofday(&tv_r_LocalLimit_1_922635_e, 0);

    struct timeval tv_r_GlobalLimit_0_101965_s, tv_r_GlobalLimit_0_101965_e;
    gettimeofday(&tv_r_GlobalLimit_0_101965_s, 0);
    SW_GlobalLimit_TD_0549212(tbl_LocalLimit_TD_1357184_output, tbl_GlobalLimit_TD_0549212_output);
    gettimeofday(&tv_r_GlobalLimit_0_101965_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_319467_s, &tv_r_Filter_10_319467_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11697672_input: " << tbl_SerializeFromObject_TD_11697672_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_356215_s, &tv_r_Filter_10_356215_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1137279_input: " << tbl_SerializeFromObject_TD_1137279_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_791761_s, &tv_r_Filter_9_791761_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10416560_input: " << tbl_SerializeFromObject_TD_10416560_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_236467_s, &tv_r_JOIN_INNER_9_236467_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10542954_output: " << tbl_Filter_TD_10542954_output.getNumRow() << " " << "tbl_Filter_TD_10722523_output: " << tbl_Filter_TD_10722523_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_149558_s, &tv_r_Filter_8_149558_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9463522_input: " << tbl_SerializeFromObject_TD_9463522_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_156263_s, &tv_r_JOIN_INNER_8_156263_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9700521_output: " << tbl_JOIN_INNER_TD_9700521_output.getNumRow() << " " << "tbl_Filter_TD_9483381_output: " << tbl_Filter_TD_9483381_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_78500_s, &tv_r_Filter_7_78500_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8782321_input: " << tbl_SerializeFromObject_TD_8782321_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_712229_s, &tv_r_JOIN_INNER_7_712229_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8959750_output: " << tbl_JOIN_INNER_TD_8959750_output.getNumRow() << " " << "tbl_Filter_TD_8257474_output: " << tbl_Filter_TD_8257474_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_129686_s, &tv_r_Filter_6_129686_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7976248_input: " << tbl_SerializeFromObject_TD_7976248_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_637667_s, &tv_r_JOIN_INNER_6_637667_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7746683_output: " << tbl_JOIN_INNER_TD_7746683_output.getNumRow() << " " << "tbl_Filter_TD_7976985_output: " << tbl_Filter_TD_7976985_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_EXISTENCEJOINEXISTS3600_5: " << tvdiff(&tv_r_JOIN_EXISTENCEJOINEXISTS3600_5_915758_s, &tv_r_JOIN_EXISTENCEJOINEXISTS3600_5_915758_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6475627_output: " << tbl_JOIN_INNER_TD_6475627_output.getNumRow() << " " << "tbl_Filter_TD_6917167_output: " << tbl_Filter_TD_6917167_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_590625_s, &tv_r_Filter_4_590625_e) / 1000.0 << " ms " 
     << "tbl_JOIN_EXISTENCEJOINEXISTS3600_TD_5535267_output: " << tbl_JOIN_EXISTENCEJOINEXISTS3600_TD_5535267_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_666170_s, &tv_r_Aggregate_3_666170_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4223900_output: " << tbl_Filter_TD_4223900_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_443458_s, &tv_r_Sort_2_443458_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3857124_output: " << tbl_Aggregate_TD_3857124_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_922635_s, &tv_r_LocalLimit_1_922635_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2683880_output: " << tbl_Sort_TD_2683880_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_101965_s, &tv_r_GlobalLimit_0_101965_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1357184_output: " << tbl_LocalLimit_TD_1357184_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.1851271 * 1000 << "ms" << std::endl; 
    return 0; 
}
