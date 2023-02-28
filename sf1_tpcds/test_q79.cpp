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

#include "cfgFunc_q79.hpp" 
#include "q79.hpp" 

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
    std::cout << "NOTE:running query #79\n."; 
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
    Table tbl_GlobalLimit_TD_0256583_output("tbl_GlobalLimit_TD_0256583_output", 6100000, 6, "");
    tbl_GlobalLimit_TD_0256583_output.allocateHost();
    Table tbl_LocalLimit_TD_1778926_output("tbl_LocalLimit_TD_1778926_output", 6100000, 6, "");
    tbl_LocalLimit_TD_1778926_output.allocateHost();
    Table tbl_Sort_TD_2199202_output("tbl_Sort_TD_2199202_output", 6100000, 6, "");
    tbl_Sort_TD_2199202_output.allocateHost();
    Table tbl_Project_TD_3157990_output("tbl_Project_TD_3157990_output", 6100000, 6, "");
    tbl_Project_TD_3157990_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4973885_output("tbl_JOIN_INNER_TD_4973885_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4973885_output.allocateHost();
    Table tbl_Aggregate_TD_5905546_output("tbl_Aggregate_TD_5905546_output", 6100000, 5, "");
    tbl_Aggregate_TD_5905546_output.allocateHost();
    Table tbl_Filter_TD_5237055_output("tbl_Filter_TD_5237055_output", 6100000, 3, "");
    tbl_Filter_TD_5237055_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6208271_output("tbl_JOIN_INNER_TD_6208271_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6208271_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6428394_input;
    tbl_SerializeFromObject_TD_6428394_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6428394_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6428394_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6428394_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6428394_input.allocateHost();
    tbl_SerializeFromObject_TD_6428394_input.loadHost();
    Table tbl_JOIN_INNER_TD_7485560_output("tbl_JOIN_INNER_TD_7485560_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7485560_output.allocateHost();
    Table tbl_Filter_TD_7641997_output("tbl_Filter_TD_7641997_output", 6100000, 1, "");
    tbl_Filter_TD_7641997_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8736015_output("tbl_JOIN_INNER_TD_8736015_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8736015_output.allocateHost();
    Table tbl_Filter_TD_8913607_output("tbl_Filter_TD_8913607_output", 6100000, 2, "");
    tbl_Filter_TD_8913607_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8107337_input;
    tbl_SerializeFromObject_TD_8107337_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8107337_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_8107337_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_8107337_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_8107337_input.allocateHost();
    tbl_SerializeFromObject_TD_8107337_input.loadHost();
    Table tbl_Filter_TD_9432002_output("tbl_Filter_TD_9432002_output", 6100000, 8, "");
    tbl_Filter_TD_9432002_output.allocateHost();
    Table tbl_Filter_TD_9889080_output("tbl_Filter_TD_9889080_output", 6100000, 1, "");
    tbl_Filter_TD_9889080_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9357229_input;
    tbl_SerializeFromObject_TD_9357229_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9357229_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9357229_input.addCol("s_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9357229_input.addCol("s_number_employees", 4);
    tbl_SerializeFromObject_TD_9357229_input.allocateHost();
    tbl_SerializeFromObject_TD_9357229_input.loadHost();
    Table tbl_SerializeFromObject_TD_10211032_input;
    tbl_SerializeFromObject_TD_10211032_input = Table("store_sales", store_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_10211032_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10211032_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10211032_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_10211032_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_10211032_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10211032_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_10211032_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_10211032_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_10211032_input.allocateHost();
    tbl_SerializeFromObject_TD_10211032_input.loadHost();
    Table tbl_SerializeFromObject_TD_10358670_input;
    tbl_SerializeFromObject_TD_10358670_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10358670_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10358670_input.addCol("d_dow", 4);
    tbl_SerializeFromObject_TD_10358670_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10358670_input.allocateHost();
    tbl_SerializeFromObject_TD_10358670_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_8736015_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9432002_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9889080_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_8736015_cmds;
    cfg_JOIN_INNER_TD_8736015_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8736015_gqe_join (cfg_JOIN_INNER_TD_8736015_cmds.cmd);
    cfg_JOIN_INNER_TD_8736015_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_8736015;
    krnl_JOIN_INNER_TD_8736015 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8736015.setup(tbl_Filter_TD_9432002_output, tbl_Filter_TD_9889080_output, tbl_JOIN_INNER_TD_8736015_output, cfg_JOIN_INNER_TD_8736015_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_8736015;
    trans_JOIN_INNER_TD_8736015.setq(q_h);
    trans_JOIN_INNER_TD_8736015.add(&(cfg_JOIN_INNER_TD_8736015_cmds));
    transEngine trans_JOIN_INNER_TD_8736015_out;
    trans_JOIN_INNER_TD_8736015_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8736015;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8736015;
    std::vector<cl::Event> events_JOIN_INNER_TD_8736015;
    events_h2d_wr_JOIN_INNER_TD_8736015.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8736015.resize(1);
    events_JOIN_INNER_TD_8736015.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8736015;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8736015;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_125492_s, tv_r_Filter_9_125492_e;
    gettimeofday(&tv_r_Filter_9_125492_s, 0);
    SW_Filter_TD_9889080(tbl_SerializeFromObject_TD_10358670_input, tbl_Filter_TD_9889080_output);
    gettimeofday(&tv_r_Filter_9_125492_e, 0);

    struct timeval tv_r_Filter_9_752070_s, tv_r_Filter_9_752070_e;
    gettimeofday(&tv_r_Filter_9_752070_s, 0);
    SW_Filter_TD_9432002(tbl_SerializeFromObject_TD_10211032_input, tbl_Filter_TD_9432002_output);
    gettimeofday(&tv_r_Filter_9_752070_e, 0);

    struct timeval tv_r_Filter_8_690481_s, tv_r_Filter_8_690481_e;
    gettimeofday(&tv_r_Filter_8_690481_s, 0);
    SW_Filter_TD_8913607(tbl_SerializeFromObject_TD_9357229_input, tbl_Filter_TD_8913607_output);
    gettimeofday(&tv_r_Filter_8_690481_e, 0);

    struct timeval tv_r_JOIN_INNER_8_96241_s, tv_r_JOIN_INNER_8_96241_e;
    gettimeofday(&tv_r_JOIN_INNER_8_96241_s, 0);
    trans_JOIN_INNER_TD_8736015.add(&(tbl_Filter_TD_9432002_output));
    trans_JOIN_INNER_TD_8736015.add(&(tbl_Filter_TD_9889080_output));
    trans_JOIN_INNER_TD_8736015.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8736015), &(events_h2d_wr_JOIN_INNER_TD_8736015[0]));
    events_grp_JOIN_INNER_TD_8736015.push_back(events_h2d_wr_JOIN_INNER_TD_8736015[0]);
    krnl_JOIN_INNER_TD_8736015.run(0, &(events_grp_JOIN_INNER_TD_8736015), &(events_JOIN_INNER_TD_8736015[0]));
    
    trans_JOIN_INNER_TD_8736015_out.add(&(tbl_JOIN_INNER_TD_8736015_output));
    trans_JOIN_INNER_TD_8736015_out.dev2host(0, &(events_JOIN_INNER_TD_8736015), &(events_d2h_rd_JOIN_INNER_TD_8736015[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_96241_e, 0);

    struct timeval tv_r_Filter_7_172297_s, tv_r_Filter_7_172297_e;
    gettimeofday(&tv_r_Filter_7_172297_s, 0);
    SW_Filter_TD_7641997(tbl_SerializeFromObject_TD_8107337_input, tbl_Filter_TD_7641997_output);
    gettimeofday(&tv_r_Filter_7_172297_e, 0);

    struct timeval tv_r_JOIN_INNER_7_857768_s, tv_r_JOIN_INNER_7_857768_e;
    gettimeofday(&tv_r_JOIN_INNER_7_857768_s, 0);
    SW_JOIN_INNER_TD_7485560(tbl_JOIN_INNER_TD_8736015_output, tbl_Filter_TD_8913607_output, tbl_JOIN_INNER_TD_7485560_output);
    gettimeofday(&tv_r_JOIN_INNER_7_857768_e, 0);

    struct timeval tv_r_JOIN_INNER_6_206193_s, tv_r_JOIN_INNER_6_206193_e;
    gettimeofday(&tv_r_JOIN_INNER_6_206193_s, 0);
    SW_JOIN_INNER_TD_6208271(tbl_JOIN_INNER_TD_7485560_output, tbl_Filter_TD_7641997_output, tbl_JOIN_INNER_TD_6208271_output);
    gettimeofday(&tv_r_JOIN_INNER_6_206193_e, 0);

    struct timeval tv_r_Filter_5_337324_s, tv_r_Filter_5_337324_e;
    gettimeofday(&tv_r_Filter_5_337324_s, 0);
    SW_Filter_TD_5237055(tbl_SerializeFromObject_TD_6428394_input, tbl_Filter_TD_5237055_output);
    gettimeofday(&tv_r_Filter_5_337324_e, 0);

    struct timeval tv_r_Aggregate_5_610077_s, tv_r_Aggregate_5_610077_e;
    gettimeofday(&tv_r_Aggregate_5_610077_s, 0);
    SW_Aggregate_TD_5905546(tbl_JOIN_INNER_TD_6208271_output, tbl_Aggregate_TD_5905546_output);
    gettimeofday(&tv_r_Aggregate_5_610077_e, 0);

    struct timeval tv_r_JOIN_INNER_4_709570_s, tv_r_JOIN_INNER_4_709570_e;
    gettimeofday(&tv_r_JOIN_INNER_4_709570_s, 0);
    SW_JOIN_INNER_TD_4973885(tbl_Aggregate_TD_5905546_output, tbl_Filter_TD_5237055_output, tbl_JOIN_INNER_TD_4973885_output);
    gettimeofday(&tv_r_JOIN_INNER_4_709570_e, 0);

    struct timeval tv_r_Project_3_312050_s, tv_r_Project_3_312050_e;
    gettimeofday(&tv_r_Project_3_312050_s, 0);
    SW_Project_TD_3157990(tbl_JOIN_INNER_TD_4973885_output, tbl_Project_TD_3157990_output);
    gettimeofday(&tv_r_Project_3_312050_e, 0);

    struct timeval tv_r_Sort_2_600729_s, tv_r_Sort_2_600729_e;
    gettimeofday(&tv_r_Sort_2_600729_s, 0);
    SW_Sort_TD_2199202(tbl_Project_TD_3157990_output, tbl_Sort_TD_2199202_output);
    gettimeofday(&tv_r_Sort_2_600729_e, 0);

    struct timeval tv_r_LocalLimit_1_689572_s, tv_r_LocalLimit_1_689572_e;
    gettimeofday(&tv_r_LocalLimit_1_689572_s, 0);
    SW_LocalLimit_TD_1778926(tbl_Sort_TD_2199202_output, tbl_LocalLimit_TD_1778926_output);
    gettimeofday(&tv_r_LocalLimit_1_689572_e, 0);

    struct timeval tv_r_GlobalLimit_0_648715_s, tv_r_GlobalLimit_0_648715_e;
    gettimeofday(&tv_r_GlobalLimit_0_648715_s, 0);
    SW_GlobalLimit_TD_0256583(tbl_LocalLimit_TD_1778926_output, tbl_GlobalLimit_TD_0256583_output);
    gettimeofday(&tv_r_GlobalLimit_0_648715_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_125492_s, &tv_r_Filter_9_125492_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10358670_input: " << tbl_SerializeFromObject_TD_10358670_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_752070_s, &tv_r_Filter_9_752070_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10211032_input: " << tbl_SerializeFromObject_TD_10211032_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_690481_s, &tv_r_Filter_8_690481_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9357229_input: " << tbl_SerializeFromObject_TD_9357229_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_96241_s, &tv_r_JOIN_INNER_8_96241_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9432002_output: " << tbl_Filter_TD_9432002_output.getNumRow() << " " << "tbl_Filter_TD_9889080_output: " << tbl_Filter_TD_9889080_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_172297_s, &tv_r_Filter_7_172297_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8107337_input: " << tbl_SerializeFromObject_TD_8107337_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_857768_s, &tv_r_JOIN_INNER_7_857768_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8736015_output: " << tbl_JOIN_INNER_TD_8736015_output.getNumRow() << " " << "tbl_Filter_TD_8913607_output: " << tbl_Filter_TD_8913607_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_206193_s, &tv_r_JOIN_INNER_6_206193_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7485560_output: " << tbl_JOIN_INNER_TD_7485560_output.getNumRow() << " " << "tbl_Filter_TD_7641997_output: " << tbl_Filter_TD_7641997_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_337324_s, &tv_r_Filter_5_337324_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6428394_input: " << tbl_SerializeFromObject_TD_6428394_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_610077_s, &tv_r_Aggregate_5_610077_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6208271_output: " << tbl_JOIN_INNER_TD_6208271_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_709570_s, &tv_r_JOIN_INNER_4_709570_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5905546_output: " << tbl_Aggregate_TD_5905546_output.getNumRow() << " " << "tbl_Filter_TD_5237055_output: " << tbl_Filter_TD_5237055_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_312050_s, &tv_r_Project_3_312050_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4973885_output: " << tbl_JOIN_INNER_TD_4973885_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_600729_s, &tv_r_Sort_2_600729_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3157990_output: " << tbl_Project_TD_3157990_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_689572_s, &tv_r_LocalLimit_1_689572_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2199202_output: " << tbl_Sort_TD_2199202_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_648715_s, &tv_r_GlobalLimit_0_648715_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1778926_output: " << tbl_LocalLimit_TD_1778926_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.7634759 * 1000 << "ms" << std::endl; 
    return 0; 
}
