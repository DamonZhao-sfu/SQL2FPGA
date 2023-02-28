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

#include "cfgFunc_q93.hpp" 
#include "q93.hpp" 

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
    std::cout << "NOTE:running query #93\n."; 
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
    cl::Device device_a = devices[1]; 
    // Create context_a and command queue for selected device 
    cl::Context context_a(device_a); 
    cl::CommandQueue q_a(context_a, device_a, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE); 
    std::string devName_a = device_a.getInfo<CL_DEVICE_NAME>(); 
    std::cout << "Selected Device " << devName_a << "\n"; 
    cl::Program::Binaries xclBins_a = xcl::import_binary_file(xclbin_path_a); 
    std::vector<cl::Device> devices_a; 
    devices_a.push_back(device_a); 
    cl::Program program_a(context_a, devices_a, xclBins_a); 
    // ****************************** Tables **************************** // 
    Table tbl_GlobalLimit_TD_0297714_output("tbl_GlobalLimit_TD_0297714_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0297714_output.allocateHost();
    Table tbl_LocalLimit_TD_1313210_output("tbl_LocalLimit_TD_1313210_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1313210_output.allocateHost();
    Table tbl_Sort_TD_2800413_output("tbl_Sort_TD_2800413_output", 6100000, 2, "");
    tbl_Sort_TD_2800413_output.allocateHost();
    Table tbl_Aggregate_TD_3545242_output_preprocess("tbl_Aggregate_TD_3545242_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_3545242_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_3545242_output("tbl_Aggregate_TD_3545242_output", 6100000, 2, "");
    tbl_Aggregate_TD_3545242_output.allocateHost();
    Table tbl_Project_TD_4942201_output("tbl_Project_TD_4942201_output", 6100000, 2, "");
    tbl_Project_TD_4942201_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5595479_output("tbl_JOIN_INNER_TD_5595479_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5595479_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6245801_output("tbl_JOIN_INNER_TD_6245801_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6245801_output.allocateHost();
    Table tbl_Filter_TD_6715696_output("tbl_Filter_TD_6715696_output", 6100000, 1, "");
    tbl_Filter_TD_6715696_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7343201_input;
    tbl_SerializeFromObject_TD_7343201_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_7343201_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_7343201_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_7343201_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_7343201_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_7343201_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_7343201_input.allocateHost();
    tbl_SerializeFromObject_TD_7343201_input.loadHost();
    Table tbl_Filter_TD_790779_output("tbl_Filter_TD_790779_output", 6100000, 4, "");
    tbl_Filter_TD_790779_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7767085_input;
    tbl_SerializeFromObject_TD_7767085_input = Table("reason", reason_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7767085_input.addCol("r_reason_sk", 4);
    tbl_SerializeFromObject_TD_7767085_input.addCol("r_reason_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7767085_input.allocateHost();
    tbl_SerializeFromObject_TD_7767085_input.loadHost();
    Table tbl_SerializeFromObject_TD_8214495_input;
    tbl_SerializeFromObject_TD_8214495_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8214495_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_8214495_input.addCol("sr_reason_sk", 4);
    tbl_SerializeFromObject_TD_8214495_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_8214495_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_8214495_input.allocateHost();
    tbl_SerializeFromObject_TD_8214495_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_3545242_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Project_TD_4942201_output.allocateDevBuffer(context_a, 32);
    tbl_JOIN_INNER_TD_5595479_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6245801_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6715696_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_7343201_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_790779_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_3545242_cmds;
    cfg_Aggregate_TD_3545242_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_3545242_gqe_aggr(cfg_Aggregate_TD_3545242_cmds.cmd);
    cfg_Aggregate_TD_3545242_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_3545242_cmds_out;
    cfg_Aggregate_TD_3545242_cmds_out.allocateHost();
    cfg_Aggregate_TD_3545242_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_5595479_cmds;
    cfg_JOIN_INNER_TD_5595479_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5595479_gqe_join (cfg_JOIN_INNER_TD_5595479_cmds.cmd);
    cfg_JOIN_INNER_TD_5595479_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6245801_cmds;
    cfg_JOIN_INNER_TD_6245801_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6245801_gqe_join (cfg_JOIN_INNER_TD_6245801_cmds.cmd);
    cfg_JOIN_INNER_TD_6245801_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_3545242;
    krnl_Aggregate_TD_3545242 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_3545242.setup(tbl_Project_TD_4942201_output, tbl_Aggregate_TD_3545242_output_preprocess, cfg_Aggregate_TD_3545242_cmds, cfg_Aggregate_TD_3545242_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_5595479;
    krnl_JOIN_INNER_TD_5595479 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5595479.setup(tbl_JOIN_INNER_TD_6245801_output, tbl_Filter_TD_6715696_output, tbl_JOIN_INNER_TD_5595479_output, cfg_JOIN_INNER_TD_5595479_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6245801;
    krnl_JOIN_INNER_TD_6245801 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6245801.setup(tbl_SerializeFromObject_TD_7343201_input, tbl_Filter_TD_790779_output, tbl_JOIN_INNER_TD_6245801_output, cfg_JOIN_INNER_TD_6245801_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_3545242;
    trans_Aggregate_TD_3545242.setq(q_a);
    trans_Aggregate_TD_3545242.add(&(cfg_Aggregate_TD_3545242_cmds));
    transEngine trans_Aggregate_TD_3545242_out;
    trans_Aggregate_TD_3545242_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_5595479;
    trans_JOIN_INNER_TD_5595479.setq(q_h);
    trans_JOIN_INNER_TD_5595479.add(&(cfg_JOIN_INNER_TD_5595479_cmds));
    transEngine trans_JOIN_INNER_TD_5595479_out;
    trans_JOIN_INNER_TD_5595479_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6245801;
    trans_JOIN_INNER_TD_6245801.setq(q_h);
    trans_JOIN_INNER_TD_6245801.add(&(cfg_JOIN_INNER_TD_6245801_cmds));
    trans_JOIN_INNER_TD_6245801.add(&(tbl_SerializeFromObject_TD_7343201_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_3545242;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_3545242;
    std::vector<cl::Event> events_Aggregate_TD_3545242;
    events_h2d_wr_Aggregate_TD_3545242.resize(1);
    events_d2h_rd_Aggregate_TD_3545242.resize(1);
    events_Aggregate_TD_3545242.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_3545242;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_3545242;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5595479;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5595479;
    std::vector<cl::Event> events_JOIN_INNER_TD_5595479;
    events_h2d_wr_JOIN_INNER_TD_5595479.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5595479.resize(1);
    events_JOIN_INNER_TD_5595479.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5595479;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5595479;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6245801;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6245801;
    std::vector<cl::Event> events_JOIN_INNER_TD_6245801;
    events_h2d_wr_JOIN_INNER_TD_6245801.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6245801.resize(1);
    events_JOIN_INNER_TD_6245801.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6245801;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6245801;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_914759_s, tv_r_Filter_7_914759_e;
    gettimeofday(&tv_r_Filter_7_914759_s, 0);
    SW_Filter_TD_790779(tbl_SerializeFromObject_TD_8214495_input, tbl_Filter_TD_790779_output);
    gettimeofday(&tv_r_Filter_7_914759_e, 0);

    struct timeval tv_r_Filter_6_658985_s, tv_r_Filter_6_658985_e;
    gettimeofday(&tv_r_Filter_6_658985_s, 0);
    SW_Filter_TD_6715696(tbl_SerializeFromObject_TD_7767085_input, tbl_Filter_TD_6715696_output);
    gettimeofday(&tv_r_Filter_6_658985_e, 0);

    struct timeval tv_r_JOIN_INNER_6_58865_s, tv_r_JOIN_INNER_6_58865_e;
    gettimeofday(&tv_r_JOIN_INNER_6_58865_s, 0);
    trans_JOIN_INNER_TD_6245801.add(&(tbl_Filter_TD_790779_output));
    trans_JOIN_INNER_TD_6245801.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6245801), &(events_h2d_wr_JOIN_INNER_TD_6245801[0]));
    events_grp_JOIN_INNER_TD_6245801.push_back(events_h2d_wr_JOIN_INNER_TD_6245801[0]);
    krnl_JOIN_INNER_TD_6245801.run(0, &(events_grp_JOIN_INNER_TD_6245801), &(events_JOIN_INNER_TD_6245801[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_58865_e, 0);

    struct timeval tv_r_JOIN_INNER_5_706613_s, tv_r_JOIN_INNER_5_706613_e;
    gettimeofday(&tv_r_JOIN_INNER_5_706613_s, 0);
    prev_events_grp_JOIN_INNER_TD_5595479.push_back(events_h2d_wr_JOIN_INNER_TD_6245801[0]);
    trans_JOIN_INNER_TD_5595479.add(&(tbl_Filter_TD_6715696_output));
    trans_JOIN_INNER_TD_5595479.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5595479), &(events_h2d_wr_JOIN_INNER_TD_5595479[0]));
    events_grp_JOIN_INNER_TD_5595479.push_back(events_h2d_wr_JOIN_INNER_TD_5595479[0]);
    events_grp_JOIN_INNER_TD_5595479.push_back(events_JOIN_INNER_TD_6245801[0]);
    krnl_JOIN_INNER_TD_5595479.run(0, &(events_grp_JOIN_INNER_TD_5595479), &(events_JOIN_INNER_TD_5595479[0]));
    
    trans_JOIN_INNER_TD_5595479_out.add(&(tbl_JOIN_INNER_TD_5595479_output));
    trans_JOIN_INNER_TD_5595479_out.dev2host(0, &(events_JOIN_INNER_TD_5595479), &(events_d2h_rd_JOIN_INNER_TD_5595479[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_706613_e, 0);

    struct timeval tv_r_Project_4_952327_s, tv_r_Project_4_952327_e;
    gettimeofday(&tv_r_Project_4_952327_s, 0);
    SW_Project_TD_4942201(tbl_JOIN_INNER_TD_5595479_output, tbl_Project_TD_4942201_output);
    gettimeofday(&tv_r_Project_4_952327_e, 0);

    struct timeval tv_r_Aggregate_3_475048_s, tv_r_Aggregate_3_475048_e;
    gettimeofday(&tv_r_Aggregate_3_475048_s, 0);
    trans_Aggregate_TD_3545242.add(&(tbl_Project_TD_4942201_output));
    trans_Aggregate_TD_3545242.host2dev(0, &(prev_events_grp_Aggregate_TD_3545242), &(events_h2d_wr_Aggregate_TD_3545242[0]));
    events_grp_Aggregate_TD_3545242.push_back(events_h2d_wr_Aggregate_TD_3545242[0]);
    krnl_Aggregate_TD_3545242.run(0, &(events_grp_Aggregate_TD_3545242), &(events_Aggregate_TD_3545242[0]));
    
    trans_Aggregate_TD_3545242_out.add(&(tbl_Aggregate_TD_3545242_output_preprocess));
    trans_Aggregate_TD_3545242_out.dev2host(0, &(events_Aggregate_TD_3545242), &(events_d2h_rd_Aggregate_TD_3545242[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_3545242_consolidate(tbl_Aggregate_TD_3545242_output_preprocess, tbl_Aggregate_TD_3545242_output);
    gettimeofday(&tv_r_Aggregate_3_475048_e, 0);

    struct timeval tv_r_Sort_2_962351_s, tv_r_Sort_2_962351_e;
    gettimeofday(&tv_r_Sort_2_962351_s, 0);
    SW_Sort_TD_2800413(tbl_Aggregate_TD_3545242_output, tbl_Sort_TD_2800413_output);
    gettimeofday(&tv_r_Sort_2_962351_e, 0);

    struct timeval tv_r_LocalLimit_1_473902_s, tv_r_LocalLimit_1_473902_e;
    gettimeofday(&tv_r_LocalLimit_1_473902_s, 0);
    SW_LocalLimit_TD_1313210(tbl_Sort_TD_2800413_output, tbl_LocalLimit_TD_1313210_output);
    gettimeofday(&tv_r_LocalLimit_1_473902_e, 0);

    struct timeval tv_r_GlobalLimit_0_334057_s, tv_r_GlobalLimit_0_334057_e;
    gettimeofday(&tv_r_GlobalLimit_0_334057_s, 0);
    SW_GlobalLimit_TD_0297714(tbl_LocalLimit_TD_1313210_output, tbl_GlobalLimit_TD_0297714_output);
    gettimeofday(&tv_r_GlobalLimit_0_334057_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_914759_s, &tv_r_Filter_7_914759_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8214495_input: " << tbl_SerializeFromObject_TD_8214495_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_658985_s, &tv_r_Filter_6_658985_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7767085_input: " << tbl_SerializeFromObject_TD_7767085_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_58865_s, &tv_r_JOIN_INNER_6_58865_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7343201_input: " << tbl_SerializeFromObject_TD_7343201_input.getNumRow() << " " << "tbl_Filter_TD_790779_output: " << tbl_Filter_TD_790779_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_706613_s, &tv_r_JOIN_INNER_5_706613_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6245801_output: " << tbl_JOIN_INNER_TD_6245801_output.getNumRow() << " " << "tbl_Filter_TD_6715696_output: " << tbl_Filter_TD_6715696_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_952327_s, &tv_r_Project_4_952327_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5595479_output: " << tbl_JOIN_INNER_TD_5595479_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_475048_s, &tv_r_Aggregate_3_475048_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4942201_output: " << tbl_Project_TD_4942201_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_962351_s, &tv_r_Sort_2_962351_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3545242_output: " << tbl_Aggregate_TD_3545242_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_473902_s, &tv_r_LocalLimit_1_473902_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2800413_output: " << tbl_Sort_TD_2800413_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_334057_s, &tv_r_GlobalLimit_0_334057_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1313210_output: " << tbl_LocalLimit_TD_1313210_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.0833325 * 1000 << "ms" << std::endl; 
    return 0; 
}
