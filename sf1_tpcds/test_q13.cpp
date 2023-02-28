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

#include "cfgFunc_q13.hpp" 
#include "q13.hpp" 

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
    std::cout << "NOTE:running query #13\n."; 
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
    Table tbl_Aggregate_TD_0866254_output("tbl_Aggregate_TD_0866254_output", 6100000, 4, "");
    tbl_Aggregate_TD_0866254_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1576764_output("tbl_JOIN_INNER_TD_1576764_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1576764_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2527683_output("tbl_JOIN_INNER_TD_2527683_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_2527683_output.allocateHost();
    Table tbl_Filter_TD_2864835_output("tbl_Filter_TD_2864835_output", 6100000, 2, "");
    tbl_Filter_TD_2864835_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3463999_output("tbl_JOIN_INNER_TD_3463999_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_3463999_output.allocateHost();
    Table tbl_Filter_TD_3511096_output("tbl_Filter_TD_3511096_output", 6100000, 3, "");
    tbl_Filter_TD_3511096_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3785396_input;
    tbl_SerializeFromObject_TD_3785396_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3785396_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_3785396_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_3785396_input.allocateHost();
    tbl_SerializeFromObject_TD_3785396_input.loadHost();
    Table tbl_JOIN_INNER_TD_4966515_output("tbl_JOIN_INNER_TD_4966515_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_4966515_output.allocateHost();
    Table tbl_Filter_TD_4540529_output("tbl_Filter_TD_4540529_output", 6100000, 1, "");
    tbl_Filter_TD_4540529_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4993535_input;
    tbl_SerializeFromObject_TD_4993535_input = Table("customer_demographics", customer_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_4993535_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_4993535_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4993535_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4993535_input.allocateHost();
    tbl_SerializeFromObject_TD_4993535_input.loadHost();
    Table tbl_JOIN_INNER_TD_5568708_output("tbl_JOIN_INNER_TD_5568708_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_5568708_output.allocateHost();
    Table tbl_Filter_TD_5264912_output("tbl_Filter_TD_5264912_output", 6100000, 2, "");
    tbl_Filter_TD_5264912_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5261738_input;
    tbl_SerializeFromObject_TD_5261738_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5261738_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5261738_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_5261738_input.allocateHost();
    tbl_SerializeFromObject_TD_5261738_input.loadHost();
    Table tbl_Filter_TD_6354735_output("tbl_Filter_TD_6354735_output", 6100000, 10, "");
    tbl_Filter_TD_6354735_output.allocateHost();
    Table tbl_Filter_TD_6737612_output("tbl_Filter_TD_6737612_output", 6100000, 1, "");
    tbl_Filter_TD_6737612_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6355410_input;
    tbl_SerializeFromObject_TD_6355410_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6355410_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_6355410_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6355410_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6355410_input.allocateHost();
    tbl_SerializeFromObject_TD_6355410_input.loadHost();
    Table tbl_SerializeFromObject_TD_7678647_input;
    tbl_SerializeFromObject_TD_7678647_input = Table("store_sales", store_sales_n, 10, in_dir, "orc");
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_ext_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_7678647_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_7678647_input.allocateHost();
    tbl_SerializeFromObject_TD_7678647_input.loadHost();
    Table tbl_SerializeFromObject_TD_7354166_input;
    tbl_SerializeFromObject_TD_7354166_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7354166_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7354166_input.allocateHost();
    tbl_SerializeFromObject_TD_7354166_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_3463999_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4966515_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4540529_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_3463999_cmds;
    cfg_JOIN_INNER_TD_3463999_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3463999_gqe_join (cfg_JOIN_INNER_TD_3463999_cmds.cmd);
    cfg_JOIN_INNER_TD_3463999_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_3463999;
    krnl_JOIN_INNER_TD_3463999 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3463999.setup(tbl_JOIN_INNER_TD_4966515_output, tbl_Filter_TD_4540529_output, tbl_JOIN_INNER_TD_3463999_output, cfg_JOIN_INNER_TD_3463999_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_3463999;
    trans_JOIN_INNER_TD_3463999.setq(q_h);
    trans_JOIN_INNER_TD_3463999.add(&(cfg_JOIN_INNER_TD_3463999_cmds));
    transEngine trans_JOIN_INNER_TD_3463999_out;
    trans_JOIN_INNER_TD_3463999_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3463999;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3463999;
    std::vector<cl::Event> events_JOIN_INNER_TD_3463999;
    events_h2d_wr_JOIN_INNER_TD_3463999.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3463999.resize(1);
    events_JOIN_INNER_TD_3463999.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3463999;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3463999;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_835279_s, tv_r_Filter_6_835279_e;
    gettimeofday(&tv_r_Filter_6_835279_s, 0);
    SW_Filter_TD_6737612(tbl_SerializeFromObject_TD_7354166_input, tbl_Filter_TD_6737612_output);
    gettimeofday(&tv_r_Filter_6_835279_e, 0);

    struct timeval tv_r_Filter_6_131820_s, tv_r_Filter_6_131820_e;
    gettimeofday(&tv_r_Filter_6_131820_s, 0);
    SW_Filter_TD_6354735(tbl_SerializeFromObject_TD_7678647_input, tbl_Filter_TD_6354735_output);
    gettimeofday(&tv_r_Filter_6_131820_e, 0);

    struct timeval tv_r_Filter_5_946569_s, tv_r_Filter_5_946569_e;
    gettimeofday(&tv_r_Filter_5_946569_s, 0);
    SW_Filter_TD_5264912(tbl_SerializeFromObject_TD_6355410_input, tbl_Filter_TD_5264912_output);
    gettimeofday(&tv_r_Filter_5_946569_e, 0);

    struct timeval tv_r_JOIN_INNER_5_484813_s, tv_r_JOIN_INNER_5_484813_e;
    gettimeofday(&tv_r_JOIN_INNER_5_484813_s, 0);
    SW_JOIN_INNER_TD_5568708(tbl_Filter_TD_6354735_output, tbl_Filter_TD_6737612_output, tbl_JOIN_INNER_TD_5568708_output);
    gettimeofday(&tv_r_JOIN_INNER_5_484813_e, 0);

    struct timeval tv_r_Filter_4_724042_s, tv_r_Filter_4_724042_e;
    gettimeofday(&tv_r_Filter_4_724042_s, 0);
    SW_Filter_TD_4540529(tbl_SerializeFromObject_TD_5261738_input, tbl_Filter_TD_4540529_output);
    gettimeofday(&tv_r_Filter_4_724042_e, 0);

    struct timeval tv_r_JOIN_INNER_4_821031_s, tv_r_JOIN_INNER_4_821031_e;
    gettimeofday(&tv_r_JOIN_INNER_4_821031_s, 0);
    SW_JOIN_INNER_TD_4966515(tbl_JOIN_INNER_TD_5568708_output, tbl_Filter_TD_5264912_output, tbl_JOIN_INNER_TD_4966515_output);
    gettimeofday(&tv_r_JOIN_INNER_4_821031_e, 0);

    struct timeval tv_r_Filter_3_219505_s, tv_r_Filter_3_219505_e;
    gettimeofday(&tv_r_Filter_3_219505_s, 0);
    SW_Filter_TD_3511096(tbl_SerializeFromObject_TD_4993535_input, tbl_Filter_TD_3511096_output);
    gettimeofday(&tv_r_Filter_3_219505_e, 0);

    struct timeval tv_r_JOIN_INNER_3_366980_s, tv_r_JOIN_INNER_3_366980_e;
    gettimeofday(&tv_r_JOIN_INNER_3_366980_s, 0);
    trans_JOIN_INNER_TD_3463999.add(&(tbl_JOIN_INNER_TD_4966515_output));
    trans_JOIN_INNER_TD_3463999.add(&(tbl_Filter_TD_4540529_output));
    trans_JOIN_INNER_TD_3463999.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3463999), &(events_h2d_wr_JOIN_INNER_TD_3463999[0]));
    events_grp_JOIN_INNER_TD_3463999.push_back(events_h2d_wr_JOIN_INNER_TD_3463999[0]);
    krnl_JOIN_INNER_TD_3463999.run(0, &(events_grp_JOIN_INNER_TD_3463999), &(events_JOIN_INNER_TD_3463999[0]));
    
    trans_JOIN_INNER_TD_3463999_out.add(&(tbl_JOIN_INNER_TD_3463999_output));
    trans_JOIN_INNER_TD_3463999_out.dev2host(0, &(events_JOIN_INNER_TD_3463999), &(events_d2h_rd_JOIN_INNER_TD_3463999[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_366980_e, 0);

    struct timeval tv_r_Filter_2_636655_s, tv_r_Filter_2_636655_e;
    gettimeofday(&tv_r_Filter_2_636655_s, 0);
    SW_Filter_TD_2864835(tbl_SerializeFromObject_TD_3785396_input, tbl_Filter_TD_2864835_output);
    gettimeofday(&tv_r_Filter_2_636655_e, 0);

    struct timeval tv_r_JOIN_INNER_2_749339_s, tv_r_JOIN_INNER_2_749339_e;
    gettimeofday(&tv_r_JOIN_INNER_2_749339_s, 0);
    SW_JOIN_INNER_TD_2527683(tbl_JOIN_INNER_TD_3463999_output, tbl_Filter_TD_3511096_output, tbl_JOIN_INNER_TD_2527683_output);
    gettimeofday(&tv_r_JOIN_INNER_2_749339_e, 0);

    struct timeval tv_r_JOIN_INNER_1_515697_s, tv_r_JOIN_INNER_1_515697_e;
    gettimeofday(&tv_r_JOIN_INNER_1_515697_s, 0);
    SW_JOIN_INNER_TD_1576764(tbl_JOIN_INNER_TD_2527683_output, tbl_Filter_TD_2864835_output, tbl_JOIN_INNER_TD_1576764_output);
    gettimeofday(&tv_r_JOIN_INNER_1_515697_e, 0);

    struct timeval tv_r_Aggregate_0_648520_s, tv_r_Aggregate_0_648520_e;
    gettimeofday(&tv_r_Aggregate_0_648520_s, 0);
    SW_Aggregate_TD_0866254(tbl_JOIN_INNER_TD_1576764_output, tbl_Aggregate_TD_0866254_output);
    gettimeofday(&tv_r_Aggregate_0_648520_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_835279_s, &tv_r_Filter_6_835279_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7354166_input: " << tbl_SerializeFromObject_TD_7354166_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_131820_s, &tv_r_Filter_6_131820_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7678647_input: " << tbl_SerializeFromObject_TD_7678647_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_946569_s, &tv_r_Filter_5_946569_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6355410_input: " << tbl_SerializeFromObject_TD_6355410_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_484813_s, &tv_r_JOIN_INNER_5_484813_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6354735_output: " << tbl_Filter_TD_6354735_output.getNumRow() << " " << "tbl_Filter_TD_6737612_output: " << tbl_Filter_TD_6737612_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_724042_s, &tv_r_Filter_4_724042_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5261738_input: " << tbl_SerializeFromObject_TD_5261738_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_821031_s, &tv_r_JOIN_INNER_4_821031_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5568708_output: " << tbl_JOIN_INNER_TD_5568708_output.getNumRow() << " " << "tbl_Filter_TD_5264912_output: " << tbl_Filter_TD_5264912_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_219505_s, &tv_r_Filter_3_219505_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4993535_input: " << tbl_SerializeFromObject_TD_4993535_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_366980_s, &tv_r_JOIN_INNER_3_366980_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4966515_output: " << tbl_JOIN_INNER_TD_4966515_output.getNumRow() << " " << "tbl_Filter_TD_4540529_output: " << tbl_Filter_TD_4540529_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_636655_s, &tv_r_Filter_2_636655_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3785396_input: " << tbl_SerializeFromObject_TD_3785396_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_749339_s, &tv_r_JOIN_INNER_2_749339_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3463999_output: " << tbl_JOIN_INNER_TD_3463999_output.getNumRow() << " " << "tbl_Filter_TD_3511096_output: " << tbl_Filter_TD_3511096_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_515697_s, &tv_r_JOIN_INNER_1_515697_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2527683_output: " << tbl_JOIN_INNER_TD_2527683_output.getNumRow() << " " << "tbl_Filter_TD_2864835_output: " << tbl_Filter_TD_2864835_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_648520_s, &tv_r_Aggregate_0_648520_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1576764_output: " << tbl_JOIN_INNER_TD_1576764_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.949975 * 1000 << "ms" << std::endl; 
    return 0; 
}
