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

#include "cfgFunc_q24.hpp" 
#include "q24.hpp" 

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
    std::cout << "NOTE:running query #24\n."; 
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
    Table tbl_Filter_TD_0468768_output("tbl_Filter_TD_0468768_output", 6100000, 4, "");
    tbl_Filter_TD_0468768_output.allocateHost();
    Table tbl_Aggregate_TD_177821_output("tbl_Aggregate_TD_177821_output", 6100000, 4, "");
    tbl_Aggregate_TD_177821_output.allocateHost();
    Table tbl_Aggregate_TD_1505362_output("tbl_Aggregate_TD_1505362_output", 6100000, 1, "");
    tbl_Aggregate_TD_1505362_output.allocateHost();
    Table tbl_Aggregate_TD_2608609_output("tbl_Aggregate_TD_2608609_output", 6100000, 4, "");
    tbl_Aggregate_TD_2608609_output.allocateHost();
    Table tbl_Aggregate_TD_2940910_output("tbl_Aggregate_TD_2940910_output", 6100000, 1, "");
    tbl_Aggregate_TD_2940910_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3687499_output("tbl_JOIN_INNER_TD_3687499_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_3687499_output.allocateHost();
    Table tbl_JOIN_INNER_TD_347591_output("tbl_JOIN_INNER_TD_347591_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_347591_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4481478_output("tbl_JOIN_INNER_TD_4481478_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_4481478_output.allocateHost();
    Table tbl_Filter_TD_4872797_output("tbl_Filter_TD_4872797_output", 6100000, 3, "");
    tbl_Filter_TD_4872797_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4211230_output("tbl_JOIN_INNER_TD_4211230_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_4211230_output.allocateHost();
    Table tbl_Filter_TD_4292764_output("tbl_Filter_TD_4292764_output", 6100000, 3, "");
    tbl_Filter_TD_4292764_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5532261_output("tbl_JOIN_INNER_TD_5532261_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_5532261_output.allocateHost();
    Table tbl_Filter_TD_5998291_output("tbl_Filter_TD_5998291_output", 6100000, 4, "");
    tbl_Filter_TD_5998291_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5619809_input;
    tbl_SerializeFromObject_TD_5619809_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5619809_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5619809_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5619809_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5619809_input.allocateHost();
    tbl_SerializeFromObject_TD_5619809_input.loadHost();
    Table tbl_JOIN_INNER_TD_58383_output("tbl_JOIN_INNER_TD_58383_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_58383_output.allocateHost();
    Table tbl_Filter_TD_5230413_output("tbl_Filter_TD_5230413_output", 6100000, 4, "");
    tbl_Filter_TD_5230413_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5681085_input;
    tbl_SerializeFromObject_TD_5681085_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5681085_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5681085_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5681085_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5681085_input.allocateHost();
    tbl_SerializeFromObject_TD_5681085_input.loadHost();
    Table tbl_JOIN_INNER_TD_6792498_output("tbl_JOIN_INNER_TD_6792498_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6792498_output.allocateHost();
    Table tbl_Filter_TD_633050_output("tbl_Filter_TD_633050_output", 6100000, 6, "");
    tbl_Filter_TD_633050_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6864198_input;
    tbl_SerializeFromObject_TD_6864198_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6864198_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6864198_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6864198_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6864198_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6864198_input.allocateHost();
    tbl_SerializeFromObject_TD_6864198_input.loadHost();
    Table tbl_JOIN_INNER_TD_671663_output("tbl_JOIN_INNER_TD_671663_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_671663_output.allocateHost();
    Table tbl_Filter_TD_6199839_output("tbl_Filter_TD_6199839_output", 6100000, 6, "");
    tbl_Filter_TD_6199839_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6542464_input;
    tbl_SerializeFromObject_TD_6542464_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6542464_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6542464_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6542464_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6542464_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6542464_input.allocateHost();
    tbl_SerializeFromObject_TD_6542464_input.loadHost();
    Table tbl_JOIN_INNER_TD_7277331_output("tbl_JOIN_INNER_TD_7277331_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7277331_output.allocateHost();
    Table tbl_Filter_TD_7871567_output("tbl_Filter_TD_7871567_output", 6100000, 4, "");
    tbl_Filter_TD_7871567_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7689009_input;
    tbl_SerializeFromObject_TD_7689009_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_7689009_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7689009_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_7689009_input.addCol("i_size", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7689009_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7689009_input.addCol("i_units", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7689009_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_7689009_input.allocateHost();
    tbl_SerializeFromObject_TD_7689009_input.loadHost();
    Table tbl_JOIN_INNER_TD_7404663_output("tbl_JOIN_INNER_TD_7404663_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7404663_output.allocateHost();
    Table tbl_Filter_TD_7342038_output("tbl_Filter_TD_7342038_output", 6100000, 4, "");
    tbl_Filter_TD_7342038_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7292933_input;
    tbl_SerializeFromObject_TD_7292933_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_7292933_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7292933_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_7292933_input.addCol("i_size", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7292933_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7292933_input.addCol("i_units", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7292933_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_7292933_input.allocateHost();
    tbl_SerializeFromObject_TD_7292933_input.loadHost();
    Table tbl_Filter_TD_8168458_output("tbl_Filter_TD_8168458_output", 6100000, 5, "");
    tbl_Filter_TD_8168458_output.allocateHost();
    Table tbl_Filter_TD_8988033_output("tbl_Filter_TD_8988033_output", 6100000, 2, "");
    tbl_Filter_TD_8988033_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8529346_input;
    tbl_SerializeFromObject_TD_8529346_input = Table("store", store_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8529346_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8529346_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8529346_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8529346_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8529346_input.addCol("s_market_id", 4);
    tbl_SerializeFromObject_TD_8529346_input.allocateHost();
    tbl_SerializeFromObject_TD_8529346_input.loadHost();
    Table tbl_Filter_TD_8947370_output("tbl_Filter_TD_8947370_output", 6100000, 5, "");
    tbl_Filter_TD_8947370_output.allocateHost();
    Table tbl_Filter_TD_8338704_output("tbl_Filter_TD_8338704_output", 6100000, 2, "");
    tbl_Filter_TD_8338704_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8514716_input;
    tbl_SerializeFromObject_TD_8514716_input = Table("store", store_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8514716_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8514716_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8514716_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8514716_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8514716_input.addCol("s_market_id", 4);
    tbl_SerializeFromObject_TD_8514716_input.allocateHost();
    tbl_SerializeFromObject_TD_8514716_input.loadHost();
    Table tbl_SerializeFromObject_TD_9618159_input;
    tbl_SerializeFromObject_TD_9618159_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9618159_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9618159_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9618159_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9618159_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_9618159_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_9618159_input.allocateHost();
    tbl_SerializeFromObject_TD_9618159_input.loadHost();
    Table tbl_SerializeFromObject_TD_9722543_input;
    tbl_SerializeFromObject_TD_9722543_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9722543_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_9722543_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_9722543_input.allocateHost();
    tbl_SerializeFromObject_TD_9722543_input.loadHost();
    Table tbl_SerializeFromObject_TD_9854417_input;
    tbl_SerializeFromObject_TD_9854417_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9854417_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9854417_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9854417_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9854417_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_9854417_input.addCol("ss_net_paid", 4);
    tbl_SerializeFromObject_TD_9854417_input.allocateHost();
    tbl_SerializeFromObject_TD_9854417_input.loadHost();
    Table tbl_SerializeFromObject_TD_9596766_input;
    tbl_SerializeFromObject_TD_9596766_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9596766_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_9596766_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_9596766_input.allocateHost();
    tbl_SerializeFromObject_TD_9596766_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_7277331_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7404663_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8168458_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8988033_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8947370_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8338704_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_7277331_cmds;
    cfg_JOIN_INNER_TD_7277331_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7277331_gqe_join (cfg_JOIN_INNER_TD_7277331_cmds.cmd);
    cfg_JOIN_INNER_TD_7277331_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7404663_cmds;
    cfg_JOIN_INNER_TD_7404663_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7404663_gqe_join (cfg_JOIN_INNER_TD_7404663_cmds.cmd);
    cfg_JOIN_INNER_TD_7404663_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_7277331;
    krnl_JOIN_INNER_TD_7277331 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7277331.setup(tbl_Filter_TD_8168458_output, tbl_Filter_TD_8988033_output, tbl_JOIN_INNER_TD_7277331_output, cfg_JOIN_INNER_TD_7277331_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7404663;
    krnl_JOIN_INNER_TD_7404663 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7404663.setup(tbl_Filter_TD_8947370_output, tbl_Filter_TD_8338704_output, tbl_JOIN_INNER_TD_7404663_output, cfg_JOIN_INNER_TD_7404663_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_7277331;
    trans_JOIN_INNER_TD_7277331.setq(q_h);
    trans_JOIN_INNER_TD_7277331.add(&(cfg_JOIN_INNER_TD_7277331_cmds));
    transEngine trans_JOIN_INNER_TD_7277331_out;
    trans_JOIN_INNER_TD_7277331_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7404663;
    trans_JOIN_INNER_TD_7404663.setq(q_h);
    trans_JOIN_INNER_TD_7404663.add(&(cfg_JOIN_INNER_TD_7404663_cmds));
    transEngine trans_JOIN_INNER_TD_7404663_out;
    trans_JOIN_INNER_TD_7404663_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7277331;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7277331;
    std::vector<cl::Event> events_JOIN_INNER_TD_7277331;
    events_h2d_wr_JOIN_INNER_TD_7277331.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7277331.resize(1);
    events_JOIN_INNER_TD_7277331.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7277331;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7277331;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7404663;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7404663;
    std::vector<cl::Event> events_JOIN_INNER_TD_7404663;
    events_h2d_wr_JOIN_INNER_TD_7404663.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7404663.resize(1);
    events_JOIN_INNER_TD_7404663.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7404663;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7404663;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_560366_s, tv_r_Filter_8_560366_e;
    gettimeofday(&tv_r_Filter_8_560366_s, 0);
    SW_Filter_TD_8338704(tbl_SerializeFromObject_TD_9596766_input, tbl_Filter_TD_8338704_output);
    gettimeofday(&tv_r_Filter_8_560366_e, 0);

    struct timeval tv_r_Filter_8_852068_s, tv_r_Filter_8_852068_e;
    gettimeofday(&tv_r_Filter_8_852068_s, 0);
    SW_Filter_TD_8947370(tbl_SerializeFromObject_TD_9854417_input, tbl_Filter_TD_8947370_output);
    gettimeofday(&tv_r_Filter_8_852068_e, 0);

    struct timeval tv_r_Filter_8_789298_s, tv_r_Filter_8_789298_e;
    gettimeofday(&tv_r_Filter_8_789298_s, 0);
    SW_Filter_TD_8988033(tbl_SerializeFromObject_TD_9722543_input, tbl_Filter_TD_8988033_output);
    gettimeofday(&tv_r_Filter_8_789298_e, 0);

    struct timeval tv_r_Filter_8_894929_s, tv_r_Filter_8_894929_e;
    gettimeofday(&tv_r_Filter_8_894929_s, 0);
    SW_Filter_TD_8168458(tbl_SerializeFromObject_TD_9618159_input, tbl_Filter_TD_8168458_output);
    gettimeofday(&tv_r_Filter_8_894929_e, 0);

    struct timeval tv_r_Filter_7_89504_s, tv_r_Filter_7_89504_e;
    gettimeofday(&tv_r_Filter_7_89504_s, 0);
    SW_Filter_TD_7342038(tbl_SerializeFromObject_TD_8514716_input, tbl_Filter_TD_7342038_output);
    gettimeofday(&tv_r_Filter_7_89504_e, 0);

    struct timeval tv_r_JOIN_INNER_7_371920_s, tv_r_JOIN_INNER_7_371920_e;
    gettimeofday(&tv_r_JOIN_INNER_7_371920_s, 0);
    trans_JOIN_INNER_TD_7404663.add(&(tbl_Filter_TD_8947370_output));
    trans_JOIN_INNER_TD_7404663.add(&(tbl_Filter_TD_8338704_output));
    trans_JOIN_INNER_TD_7404663.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7404663), &(events_h2d_wr_JOIN_INNER_TD_7404663[0]));
    events_grp_JOIN_INNER_TD_7404663.push_back(events_h2d_wr_JOIN_INNER_TD_7404663[0]);
    krnl_JOIN_INNER_TD_7404663.run(0, &(events_grp_JOIN_INNER_TD_7404663), &(events_JOIN_INNER_TD_7404663[0]));
    
    trans_JOIN_INNER_TD_7404663_out.add(&(tbl_JOIN_INNER_TD_7404663_output));
    trans_JOIN_INNER_TD_7404663_out.dev2host(0, &(events_JOIN_INNER_TD_7404663), &(events_d2h_rd_JOIN_INNER_TD_7404663[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_371920_e, 0);

    struct timeval tv_r_Filter_7_997746_s, tv_r_Filter_7_997746_e;
    gettimeofday(&tv_r_Filter_7_997746_s, 0);
    SW_Filter_TD_7871567(tbl_SerializeFromObject_TD_8529346_input, tbl_Filter_TD_7871567_output);
    gettimeofday(&tv_r_Filter_7_997746_e, 0);

    struct timeval tv_r_JOIN_INNER_7_366697_s, tv_r_JOIN_INNER_7_366697_e;
    gettimeofday(&tv_r_JOIN_INNER_7_366697_s, 0);
    trans_JOIN_INNER_TD_7277331.add(&(tbl_Filter_TD_8168458_output));
    trans_JOIN_INNER_TD_7277331.add(&(tbl_Filter_TD_8988033_output));
    trans_JOIN_INNER_TD_7277331.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7277331), &(events_h2d_wr_JOIN_INNER_TD_7277331[0]));
    events_grp_JOIN_INNER_TD_7277331.push_back(events_h2d_wr_JOIN_INNER_TD_7277331[0]);
    krnl_JOIN_INNER_TD_7277331.run(0, &(events_grp_JOIN_INNER_TD_7277331), &(events_JOIN_INNER_TD_7277331[0]));
    
    trans_JOIN_INNER_TD_7277331_out.add(&(tbl_JOIN_INNER_TD_7277331_output));
    trans_JOIN_INNER_TD_7277331_out.dev2host(0, &(events_JOIN_INNER_TD_7277331), &(events_d2h_rd_JOIN_INNER_TD_7277331[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_366697_e, 0);

    struct timeval tv_r_Filter_6_440745_s, tv_r_Filter_6_440745_e;
    gettimeofday(&tv_r_Filter_6_440745_s, 0);
    SW_Filter_TD_6199839(tbl_SerializeFromObject_TD_7292933_input, tbl_Filter_TD_6199839_output);
    gettimeofday(&tv_r_Filter_6_440745_e, 0);

    struct timeval tv_r_JOIN_INNER_6_134555_s, tv_r_JOIN_INNER_6_134555_e;
    gettimeofday(&tv_r_JOIN_INNER_6_134555_s, 0);
    SW_JOIN_INNER_TD_671663(tbl_JOIN_INNER_TD_7404663_output, tbl_Filter_TD_7342038_output, tbl_JOIN_INNER_TD_671663_output);
    gettimeofday(&tv_r_JOIN_INNER_6_134555_e, 0);

    struct timeval tv_r_Filter_6_779870_s, tv_r_Filter_6_779870_e;
    gettimeofday(&tv_r_Filter_6_779870_s, 0);
    SW_Filter_TD_633050(tbl_SerializeFromObject_TD_7689009_input, tbl_Filter_TD_633050_output);
    gettimeofday(&tv_r_Filter_6_779870_e, 0);

    struct timeval tv_r_JOIN_INNER_6_280066_s, tv_r_JOIN_INNER_6_280066_e;
    gettimeofday(&tv_r_JOIN_INNER_6_280066_s, 0);
    SW_JOIN_INNER_TD_6792498(tbl_JOIN_INNER_TD_7277331_output, tbl_Filter_TD_7871567_output, tbl_JOIN_INNER_TD_6792498_output);
    gettimeofday(&tv_r_JOIN_INNER_6_280066_e, 0);

    struct timeval tv_r_Filter_5_845433_s, tv_r_Filter_5_845433_e;
    gettimeofday(&tv_r_Filter_5_845433_s, 0);
    SW_Filter_TD_5230413(tbl_SerializeFromObject_TD_6542464_input, tbl_Filter_TD_5230413_output);
    gettimeofday(&tv_r_Filter_5_845433_e, 0);

    struct timeval tv_r_JOIN_INNER_5_699576_s, tv_r_JOIN_INNER_5_699576_e;
    gettimeofday(&tv_r_JOIN_INNER_5_699576_s, 0);
    SW_JOIN_INNER_TD_58383(tbl_JOIN_INNER_TD_671663_output, tbl_Filter_TD_6199839_output, tbl_JOIN_INNER_TD_58383_output);
    gettimeofday(&tv_r_JOIN_INNER_5_699576_e, 0);

    struct timeval tv_r_Filter_5_425769_s, tv_r_Filter_5_425769_e;
    gettimeofday(&tv_r_Filter_5_425769_s, 0);
    SW_Filter_TD_5998291(tbl_SerializeFromObject_TD_6864198_input, tbl_Filter_TD_5998291_output);
    gettimeofday(&tv_r_Filter_5_425769_e, 0);

    struct timeval tv_r_JOIN_INNER_5_357022_s, tv_r_JOIN_INNER_5_357022_e;
    gettimeofday(&tv_r_JOIN_INNER_5_357022_s, 0);
    SW_JOIN_INNER_TD_5532261(tbl_JOIN_INNER_TD_6792498_output, tbl_Filter_TD_633050_output, tbl_JOIN_INNER_TD_5532261_output);
    gettimeofday(&tv_r_JOIN_INNER_5_357022_e, 0);

    struct timeval tv_r_Filter_4_478353_s, tv_r_Filter_4_478353_e;
    gettimeofday(&tv_r_Filter_4_478353_s, 0);
    SW_Filter_TD_4292764(tbl_SerializeFromObject_TD_5681085_input, tbl_Filter_TD_4292764_output);
    gettimeofday(&tv_r_Filter_4_478353_e, 0);

    struct timeval tv_r_JOIN_INNER_4_408842_s, tv_r_JOIN_INNER_4_408842_e;
    gettimeofday(&tv_r_JOIN_INNER_4_408842_s, 0);
    SW_JOIN_INNER_TD_4211230(tbl_JOIN_INNER_TD_58383_output, tbl_Filter_TD_5230413_output, tbl_JOIN_INNER_TD_4211230_output);
    gettimeofday(&tv_r_JOIN_INNER_4_408842_e, 0);

    struct timeval tv_r_Filter_4_568063_s, tv_r_Filter_4_568063_e;
    gettimeofday(&tv_r_Filter_4_568063_s, 0);
    SW_Filter_TD_4872797(tbl_SerializeFromObject_TD_5619809_input, tbl_Filter_TD_4872797_output);
    gettimeofday(&tv_r_Filter_4_568063_e, 0);

    struct timeval tv_r_JOIN_INNER_4_434129_s, tv_r_JOIN_INNER_4_434129_e;
    gettimeofday(&tv_r_JOIN_INNER_4_434129_s, 0);
    SW_JOIN_INNER_TD_4481478(tbl_JOIN_INNER_TD_5532261_output, tbl_Filter_TD_5998291_output, tbl_JOIN_INNER_TD_4481478_output);
    gettimeofday(&tv_r_JOIN_INNER_4_434129_e, 0);

    struct timeval tv_r_JOIN_INNER_3_481246_s, tv_r_JOIN_INNER_3_481246_e;
    gettimeofday(&tv_r_JOIN_INNER_3_481246_s, 0);
    SW_JOIN_INNER_TD_347591(tbl_JOIN_INNER_TD_4211230_output, tbl_Filter_TD_4292764_output, tbl_JOIN_INNER_TD_347591_output);
    gettimeofday(&tv_r_JOIN_INNER_3_481246_e, 0);

    struct timeval tv_r_JOIN_INNER_3_565010_s, tv_r_JOIN_INNER_3_565010_e;
    gettimeofday(&tv_r_JOIN_INNER_3_565010_s, 0);
    SW_JOIN_INNER_TD_3687499(tbl_JOIN_INNER_TD_4481478_output, tbl_Filter_TD_4872797_output, tbl_JOIN_INNER_TD_3687499_output);
    gettimeofday(&tv_r_JOIN_INNER_3_565010_e, 0);

    struct timeval tv_r_Aggregate_2_632439_s, tv_r_Aggregate_2_632439_e;
    gettimeofday(&tv_r_Aggregate_2_632439_s, 0);
    SW_Aggregate_TD_2940910(tbl_JOIN_INNER_TD_347591_output, tbl_Aggregate_TD_2940910_output);
    gettimeofday(&tv_r_Aggregate_2_632439_e, 0);

    struct timeval tv_r_Aggregate_2_561804_s, tv_r_Aggregate_2_561804_e;
    gettimeofday(&tv_r_Aggregate_2_561804_s, 0);
    SW_Aggregate_TD_2608609(tbl_JOIN_INNER_TD_3687499_output, tbl_Aggregate_TD_2608609_output);
    gettimeofday(&tv_r_Aggregate_2_561804_e, 0);

    struct timeval tv_r_Aggregate_1_708732_s, tv_r_Aggregate_1_708732_e;
    gettimeofday(&tv_r_Aggregate_1_708732_s, 0);
    SW_Aggregate_TD_1505362(tbl_Aggregate_TD_2940910_output, tbl_Aggregate_TD_1505362_output);
    gettimeofday(&tv_r_Aggregate_1_708732_e, 0);

    struct timeval tv_r_Aggregate_1_758163_s, tv_r_Aggregate_1_758163_e;
    gettimeofday(&tv_r_Aggregate_1_758163_s, 0);
    SW_Aggregate_TD_177821(tbl_Aggregate_TD_2608609_output, tbl_Aggregate_TD_177821_output);
    gettimeofday(&tv_r_Aggregate_1_758163_e, 0);

    struct timeval tv_r_Filter_0_75684_s, tv_r_Filter_0_75684_e;
    gettimeofday(&tv_r_Filter_0_75684_s, 0);
    SW_Filter_TD_0468768(tbl_Aggregate_TD_177821_output, tbl_Aggregate_TD_1505362_output, tbl_Filter_TD_0468768_output);
    gettimeofday(&tv_r_Filter_0_75684_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_560366_s, &tv_r_Filter_8_560366_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9596766_input: " << tbl_SerializeFromObject_TD_9596766_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_852068_s, &tv_r_Filter_8_852068_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9854417_input: " << tbl_SerializeFromObject_TD_9854417_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_789298_s, &tv_r_Filter_8_789298_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9722543_input: " << tbl_SerializeFromObject_TD_9722543_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_894929_s, &tv_r_Filter_8_894929_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9618159_input: " << tbl_SerializeFromObject_TD_9618159_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_89504_s, &tv_r_Filter_7_89504_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8514716_input: " << tbl_SerializeFromObject_TD_8514716_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_371920_s, &tv_r_JOIN_INNER_7_371920_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8947370_output: " << tbl_Filter_TD_8947370_output.getNumRow() << " " << "tbl_Filter_TD_8338704_output: " << tbl_Filter_TD_8338704_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_997746_s, &tv_r_Filter_7_997746_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8529346_input: " << tbl_SerializeFromObject_TD_8529346_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_366697_s, &tv_r_JOIN_INNER_7_366697_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8168458_output: " << tbl_Filter_TD_8168458_output.getNumRow() << " " << "tbl_Filter_TD_8988033_output: " << tbl_Filter_TD_8988033_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_440745_s, &tv_r_Filter_6_440745_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7292933_input: " << tbl_SerializeFromObject_TD_7292933_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_134555_s, &tv_r_JOIN_INNER_6_134555_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7404663_output: " << tbl_JOIN_INNER_TD_7404663_output.getNumRow() << " " << "tbl_Filter_TD_7342038_output: " << tbl_Filter_TD_7342038_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_779870_s, &tv_r_Filter_6_779870_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7689009_input: " << tbl_SerializeFromObject_TD_7689009_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_280066_s, &tv_r_JOIN_INNER_6_280066_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7277331_output: " << tbl_JOIN_INNER_TD_7277331_output.getNumRow() << " " << "tbl_Filter_TD_7871567_output: " << tbl_Filter_TD_7871567_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_845433_s, &tv_r_Filter_5_845433_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6542464_input: " << tbl_SerializeFromObject_TD_6542464_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_699576_s, &tv_r_JOIN_INNER_5_699576_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_671663_output: " << tbl_JOIN_INNER_TD_671663_output.getNumRow() << " " << "tbl_Filter_TD_6199839_output: " << tbl_Filter_TD_6199839_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_425769_s, &tv_r_Filter_5_425769_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6864198_input: " << tbl_SerializeFromObject_TD_6864198_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_357022_s, &tv_r_JOIN_INNER_5_357022_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6792498_output: " << tbl_JOIN_INNER_TD_6792498_output.getNumRow() << " " << "tbl_Filter_TD_633050_output: " << tbl_Filter_TD_633050_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_478353_s, &tv_r_Filter_4_478353_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5681085_input: " << tbl_SerializeFromObject_TD_5681085_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_408842_s, &tv_r_JOIN_INNER_4_408842_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_58383_output: " << tbl_JOIN_INNER_TD_58383_output.getNumRow() << " " << "tbl_Filter_TD_5230413_output: " << tbl_Filter_TD_5230413_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_568063_s, &tv_r_Filter_4_568063_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5619809_input: " << tbl_SerializeFromObject_TD_5619809_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_434129_s, &tv_r_JOIN_INNER_4_434129_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5532261_output: " << tbl_JOIN_INNER_TD_5532261_output.getNumRow() << " " << "tbl_Filter_TD_5998291_output: " << tbl_Filter_TD_5998291_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_481246_s, &tv_r_JOIN_INNER_3_481246_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4211230_output: " << tbl_JOIN_INNER_TD_4211230_output.getNumRow() << " " << "tbl_Filter_TD_4292764_output: " << tbl_Filter_TD_4292764_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_565010_s, &tv_r_JOIN_INNER_3_565010_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4481478_output: " << tbl_JOIN_INNER_TD_4481478_output.getNumRow() << " " << "tbl_Filter_TD_4872797_output: " << tbl_Filter_TD_4872797_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_632439_s, &tv_r_Aggregate_2_632439_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_347591_output: " << tbl_JOIN_INNER_TD_347591_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_561804_s, &tv_r_Aggregate_2_561804_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3687499_output: " << tbl_JOIN_INNER_TD_3687499_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_708732_s, &tv_r_Aggregate_1_708732_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2940910_output: " << tbl_Aggregate_TD_2940910_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_758163_s, &tv_r_Aggregate_1_758163_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2608609_output: " << tbl_Aggregate_TD_2608609_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_0: " << tvdiff(&tv_r_Filter_0_75684_s, &tv_r_Filter_0_75684_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_177821_output: " << tbl_Aggregate_TD_177821_output.getNumRow() << " " << "tbl_Aggregate_TD_1505362_output: " << tbl_Aggregate_TD_1505362_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.9637221 * 1000 << "ms" << std::endl; 
    return 0; 
}
