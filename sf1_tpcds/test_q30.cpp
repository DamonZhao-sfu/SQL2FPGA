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

#include "cfgFunc_q30.hpp" 
#include "q30.hpp" 

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
    std::cout << "NOTE:running query #30\n."; 
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
    Table tbl_GlobalLimit_TD_033848_output("tbl_GlobalLimit_TD_033848_output", 6100000, 13, "");
    tbl_GlobalLimit_TD_033848_output.allocateHost();
    Table tbl_LocalLimit_TD_1726839_output("tbl_LocalLimit_TD_1726839_output", 6100000, 13, "");
    tbl_LocalLimit_TD_1726839_output.allocateHost();
    Table tbl_Sort_TD_2202456_output("tbl_Sort_TD_2202456_output", 6100000, 13, "");
    tbl_Sort_TD_2202456_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3334547_output("tbl_JOIN_INNER_TD_3334547_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_3334547_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4344574_output("tbl_JOIN_INNER_TD_4344574_output", 6100000, 14, "");
    tbl_JOIN_INNER_TD_4344574_output.allocateHost();
    Table tbl_Filter_TD_4993835_output("tbl_Filter_TD_4993835_output", 6100000, 1, "");
    tbl_Filter_TD_4993835_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5824678_output("tbl_JOIN_INNER_TD_5824678_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5824678_output.allocateHost();
    Table tbl_Filter_TD_5946954_output("tbl_Filter_TD_5946954_output", 6100000, 14, "");
    tbl_Filter_TD_5946954_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5113741_input;
    tbl_SerializeFromObject_TD_5113741_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5113741_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_5113741_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5113741_input.allocateHost();
    tbl_SerializeFromObject_TD_5113741_input.loadHost();
    Table tbl_Filter_TD_6964300_output("tbl_Filter_TD_6964300_output", 6100000, 3, "");
    tbl_Filter_TD_6964300_output.allocateHost();
    Table tbl_Filter_TD_6693183_output("tbl_Filter_TD_6693183_output", 6100000, 2, "");
    tbl_Filter_TD_6693183_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6570991_input;
    tbl_SerializeFromObject_TD_6570991_input = Table("customer", customer_n, 14, in_dir, "orc");
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_salutation", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_birth_day", 4);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_birth_month", 4);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_birth_year", 4);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_birth_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_login", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_email_address", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6570991_input.addCol("c_last_review_date", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6570991_input.allocateHost();
    tbl_SerializeFromObject_TD_6570991_input.loadHost();
    Table tbl_Aggregate_TD_7523234_output("tbl_Aggregate_TD_7523234_output", 6100000, 3, "");
    tbl_Aggregate_TD_7523234_output.allocateHost();
    Table tbl_Aggregate_TD_796971_output("tbl_Aggregate_TD_796971_output", 6100000, 2, "");
    tbl_Aggregate_TD_796971_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8212124_output("tbl_JOIN_INNER_TD_8212124_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8212124_output.allocateHost();
    Table tbl_Aggregate_TD_8209764_output("tbl_Aggregate_TD_8209764_output", 6100000, 2, "");
    tbl_Aggregate_TD_8209764_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9876637_output("tbl_JOIN_INNER_TD_9876637_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9876637_output.allocateHost();
    Table tbl_Filter_TD_9190988_output("tbl_Filter_TD_9190988_output", 6100000, 2, "");
    tbl_Filter_TD_9190988_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9617328_output("tbl_JOIN_INNER_TD_9617328_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9617328_output.allocateHost();
    Table tbl_Filter_TD_10543569_output("tbl_Filter_TD_10543569_output", 6100000, 4, "");
    tbl_Filter_TD_10543569_output.allocateHost();
    Table tbl_Filter_TD_10124943_output("tbl_Filter_TD_10124943_output", 6100000, 1, "");
    tbl_Filter_TD_10124943_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10113435_input;
    tbl_SerializeFromObject_TD_10113435_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10113435_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10113435_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10113435_input.allocateHost();
    tbl_SerializeFromObject_TD_10113435_input.loadHost();
    Table tbl_JOIN_INNER_TD_10161447_output("tbl_JOIN_INNER_TD_10161447_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10161447_output.allocateHost();
    Table tbl_Filter_TD_10815764_output("tbl_Filter_TD_10815764_output", 6100000, 2, "");
    tbl_Filter_TD_10815764_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11495008_input;
    tbl_SerializeFromObject_TD_11495008_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11495008_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_11495008_input.addCol("wr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_11495008_input.addCol("wr_returning_addr_sk", 4);
    tbl_SerializeFromObject_TD_11495008_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_11495008_input.allocateHost();
    tbl_SerializeFromObject_TD_11495008_input.loadHost();
    Table tbl_SerializeFromObject_TD_11596274_input;
    tbl_SerializeFromObject_TD_11596274_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11596274_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11596274_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11596274_input.allocateHost();
    tbl_SerializeFromObject_TD_11596274_input.loadHost();
    Table tbl_Filter_TD_11264839_output("tbl_Filter_TD_11264839_output", 6100000, 4, "");
    tbl_Filter_TD_11264839_output.allocateHost();
    Table tbl_Filter_TD_11851293_output("tbl_Filter_TD_11851293_output", 6100000, 1, "");
    tbl_Filter_TD_11851293_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11596201_input;
    tbl_SerializeFromObject_TD_11596201_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11596201_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_11596201_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11596201_input.allocateHost();
    tbl_SerializeFromObject_TD_11596201_input.loadHost();
    Table tbl_SerializeFromObject_TD_12544355_input;
    tbl_SerializeFromObject_TD_12544355_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12544355_input.addCol("wr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12544355_input.addCol("wr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_12544355_input.addCol("wr_returning_addr_sk", 4);
    tbl_SerializeFromObject_TD_12544355_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_12544355_input.allocateHost();
    tbl_SerializeFromObject_TD_12544355_input.loadHost();
    Table tbl_SerializeFromObject_TD_12795082_input;
    tbl_SerializeFromObject_TD_12795082_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12795082_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12795082_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12795082_input.allocateHost();
    tbl_SerializeFromObject_TD_12795082_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_9876637_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10543569_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10124943_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10161447_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11264839_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11851293_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_9876637_cmds;
    cfg_JOIN_INNER_TD_9876637_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9876637_gqe_join (cfg_JOIN_INNER_TD_9876637_cmds.cmd);
    cfg_JOIN_INNER_TD_9876637_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_10161447_cmds;
    cfg_JOIN_INNER_TD_10161447_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10161447_gqe_join (cfg_JOIN_INNER_TD_10161447_cmds.cmd);
    cfg_JOIN_INNER_TD_10161447_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_9876637;
    krnl_JOIN_INNER_TD_9876637 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9876637.setup(tbl_Filter_TD_10543569_output, tbl_Filter_TD_10124943_output, tbl_JOIN_INNER_TD_9876637_output, cfg_JOIN_INNER_TD_9876637_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_10161447;
    krnl_JOIN_INNER_TD_10161447 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10161447.setup(tbl_Filter_TD_11264839_output, tbl_Filter_TD_11851293_output, tbl_JOIN_INNER_TD_10161447_output, cfg_JOIN_INNER_TD_10161447_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_9876637;
    trans_JOIN_INNER_TD_9876637.setq(q_h);
    trans_JOIN_INNER_TD_9876637.add(&(cfg_JOIN_INNER_TD_9876637_cmds));
    transEngine trans_JOIN_INNER_TD_9876637_out;
    trans_JOIN_INNER_TD_9876637_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_10161447;
    trans_JOIN_INNER_TD_10161447.setq(q_h);
    trans_JOIN_INNER_TD_10161447.add(&(cfg_JOIN_INNER_TD_10161447_cmds));
    transEngine trans_JOIN_INNER_TD_10161447_out;
    trans_JOIN_INNER_TD_10161447_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9876637;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9876637;
    std::vector<cl::Event> events_JOIN_INNER_TD_9876637;
    events_h2d_wr_JOIN_INNER_TD_9876637.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9876637.resize(1);
    events_JOIN_INNER_TD_9876637.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9876637;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9876637;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10161447;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10161447;
    std::vector<cl::Event> events_JOIN_INNER_TD_10161447;
    events_h2d_wr_JOIN_INNER_TD_10161447.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10161447.resize(1);
    events_JOIN_INNER_TD_10161447.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10161447;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10161447;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_984270_s, tv_r_Filter_11_984270_e;
    gettimeofday(&tv_r_Filter_11_984270_s, 0);
    SW_Filter_TD_11851293(tbl_SerializeFromObject_TD_12795082_input, tbl_Filter_TD_11851293_output);
    gettimeofday(&tv_r_Filter_11_984270_e, 0);

    struct timeval tv_r_Filter_11_385888_s, tv_r_Filter_11_385888_e;
    gettimeofday(&tv_r_Filter_11_385888_s, 0);
    SW_Filter_TD_11264839(tbl_SerializeFromObject_TD_12544355_input, tbl_Filter_TD_11264839_output);
    gettimeofday(&tv_r_Filter_11_385888_e, 0);

    struct timeval tv_r_Filter_10_198374_s, tv_r_Filter_10_198374_e;
    gettimeofday(&tv_r_Filter_10_198374_s, 0);
    SW_Filter_TD_10815764(tbl_SerializeFromObject_TD_11596201_input, tbl_Filter_TD_10815764_output);
    gettimeofday(&tv_r_Filter_10_198374_e, 0);

    struct timeval tv_r_JOIN_INNER_10_797882_s, tv_r_JOIN_INNER_10_797882_e;
    gettimeofday(&tv_r_JOIN_INNER_10_797882_s, 0);
    trans_JOIN_INNER_TD_10161447.add(&(tbl_Filter_TD_11264839_output));
    trans_JOIN_INNER_TD_10161447.add(&(tbl_Filter_TD_11851293_output));
    trans_JOIN_INNER_TD_10161447.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10161447), &(events_h2d_wr_JOIN_INNER_TD_10161447[0]));
    events_grp_JOIN_INNER_TD_10161447.push_back(events_h2d_wr_JOIN_INNER_TD_10161447[0]);
    krnl_JOIN_INNER_TD_10161447.run(0, &(events_grp_JOIN_INNER_TD_10161447), &(events_JOIN_INNER_TD_10161447[0]));
    
    trans_JOIN_INNER_TD_10161447_out.add(&(tbl_JOIN_INNER_TD_10161447_output));
    trans_JOIN_INNER_TD_10161447_out.dev2host(0, &(events_JOIN_INNER_TD_10161447), &(events_d2h_rd_JOIN_INNER_TD_10161447[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_10_797882_e, 0);

    struct timeval tv_r_Filter_10_584664_s, tv_r_Filter_10_584664_e;
    gettimeofday(&tv_r_Filter_10_584664_s, 0);
    SW_Filter_TD_10124943(tbl_SerializeFromObject_TD_11596274_input, tbl_Filter_TD_10124943_output);
    gettimeofday(&tv_r_Filter_10_584664_e, 0);

    struct timeval tv_r_Filter_10_334731_s, tv_r_Filter_10_334731_e;
    gettimeofday(&tv_r_Filter_10_334731_s, 0);
    SW_Filter_TD_10543569(tbl_SerializeFromObject_TD_11495008_input, tbl_Filter_TD_10543569_output);
    gettimeofday(&tv_r_Filter_10_334731_e, 0);

    struct timeval tv_r_JOIN_INNER_9_476323_s, tv_r_JOIN_INNER_9_476323_e;
    gettimeofday(&tv_r_JOIN_INNER_9_476323_s, 0);
    SW_JOIN_INNER_TD_9617328(tbl_JOIN_INNER_TD_10161447_output, tbl_Filter_TD_10815764_output, tbl_JOIN_INNER_TD_9617328_output);
    gettimeofday(&tv_r_JOIN_INNER_9_476323_e, 0);

    struct timeval tv_r_Filter_9_838081_s, tv_r_Filter_9_838081_e;
    gettimeofday(&tv_r_Filter_9_838081_s, 0);
    SW_Filter_TD_9190988(tbl_SerializeFromObject_TD_10113435_input, tbl_Filter_TD_9190988_output);
    gettimeofday(&tv_r_Filter_9_838081_e, 0);

    struct timeval tv_r_JOIN_INNER_9_614504_s, tv_r_JOIN_INNER_9_614504_e;
    gettimeofday(&tv_r_JOIN_INNER_9_614504_s, 0);
    trans_JOIN_INNER_TD_9876637.add(&(tbl_Filter_TD_10543569_output));
    trans_JOIN_INNER_TD_9876637.add(&(tbl_Filter_TD_10124943_output));
    trans_JOIN_INNER_TD_9876637.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9876637), &(events_h2d_wr_JOIN_INNER_TD_9876637[0]));
    events_grp_JOIN_INNER_TD_9876637.push_back(events_h2d_wr_JOIN_INNER_TD_9876637[0]);
    krnl_JOIN_INNER_TD_9876637.run(0, &(events_grp_JOIN_INNER_TD_9876637), &(events_JOIN_INNER_TD_9876637[0]));
    
    trans_JOIN_INNER_TD_9876637_out.add(&(tbl_JOIN_INNER_TD_9876637_output));
    trans_JOIN_INNER_TD_9876637_out.dev2host(0, &(events_JOIN_INNER_TD_9876637), &(events_d2h_rd_JOIN_INNER_TD_9876637[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_9_614504_e, 0);

    struct timeval tv_r_Aggregate_8_167539_s, tv_r_Aggregate_8_167539_e;
    gettimeofday(&tv_r_Aggregate_8_167539_s, 0);
    SW_Aggregate_TD_8209764(tbl_JOIN_INNER_TD_9617328_output, tbl_Aggregate_TD_8209764_output);
    gettimeofday(&tv_r_Aggregate_8_167539_e, 0);

    struct timeval tv_r_JOIN_INNER_8_505837_s, tv_r_JOIN_INNER_8_505837_e;
    gettimeofday(&tv_r_JOIN_INNER_8_505837_s, 0);
    SW_JOIN_INNER_TD_8212124(tbl_JOIN_INNER_TD_9876637_output, tbl_Filter_TD_9190988_output, tbl_JOIN_INNER_TD_8212124_output);
    gettimeofday(&tv_r_JOIN_INNER_8_505837_e, 0);

    struct timeval tv_r_Aggregate_7_930522_s, tv_r_Aggregate_7_930522_e;
    gettimeofday(&tv_r_Aggregate_7_930522_s, 0);
    SW_Aggregate_TD_796971(tbl_Aggregate_TD_8209764_output, tbl_Aggregate_TD_796971_output);
    gettimeofday(&tv_r_Aggregate_7_930522_e, 0);

    struct timeval tv_r_Aggregate_7_861971_s, tv_r_Aggregate_7_861971_e;
    gettimeofday(&tv_r_Aggregate_7_861971_s, 0);
    SW_Aggregate_TD_7523234(tbl_JOIN_INNER_TD_8212124_output, tbl_Aggregate_TD_7523234_output);
    gettimeofday(&tv_r_Aggregate_7_861971_e, 0);

    struct timeval tv_r_Filter_6_106663_s, tv_r_Filter_6_106663_e;
    gettimeofday(&tv_r_Filter_6_106663_s, 0);
    SW_Filter_TD_6693183(tbl_Aggregate_TD_796971_output, tbl_Filter_TD_6693183_output);
    gettimeofday(&tv_r_Filter_6_106663_e, 0);

    struct timeval tv_r_Filter_6_256783_s, tv_r_Filter_6_256783_e;
    gettimeofday(&tv_r_Filter_6_256783_s, 0);
    SW_Filter_TD_6964300(tbl_Aggregate_TD_7523234_output, tbl_Filter_TD_6964300_output);
    gettimeofday(&tv_r_Filter_6_256783_e, 0);

    struct timeval tv_r_Filter_5_960945_s, tv_r_Filter_5_960945_e;
    gettimeofday(&tv_r_Filter_5_960945_s, 0);
    SW_Filter_TD_5946954(tbl_SerializeFromObject_TD_6570991_input, tbl_Filter_TD_5946954_output);
    gettimeofday(&tv_r_Filter_5_960945_e, 0);

    struct timeval tv_r_JOIN_INNER_5_372138_s, tv_r_JOIN_INNER_5_372138_e;
    gettimeofday(&tv_r_JOIN_INNER_5_372138_s, 0);
    SW_JOIN_INNER_TD_5824678(tbl_Filter_TD_6964300_output, tbl_Filter_TD_6693183_output, tbl_JOIN_INNER_TD_5824678_output);
    gettimeofday(&tv_r_JOIN_INNER_5_372138_e, 0);

    struct timeval tv_r_Filter_4_83692_s, tv_r_Filter_4_83692_e;
    gettimeofday(&tv_r_Filter_4_83692_s, 0);
    SW_Filter_TD_4993835(tbl_SerializeFromObject_TD_5113741_input, tbl_Filter_TD_4993835_output);
    gettimeofday(&tv_r_Filter_4_83692_e, 0);

    struct timeval tv_r_JOIN_INNER_4_463562_s, tv_r_JOIN_INNER_4_463562_e;
    gettimeofday(&tv_r_JOIN_INNER_4_463562_s, 0);
    SW_JOIN_INNER_TD_4344574(tbl_JOIN_INNER_TD_5824678_output, tbl_Filter_TD_5946954_output, tbl_JOIN_INNER_TD_4344574_output);
    gettimeofday(&tv_r_JOIN_INNER_4_463562_e, 0);

    struct timeval tv_r_JOIN_INNER_3_661729_s, tv_r_JOIN_INNER_3_661729_e;
    gettimeofday(&tv_r_JOIN_INNER_3_661729_s, 0);
    SW_JOIN_INNER_TD_3334547(tbl_JOIN_INNER_TD_4344574_output, tbl_Filter_TD_4993835_output, tbl_JOIN_INNER_TD_3334547_output);
    gettimeofday(&tv_r_JOIN_INNER_3_661729_e, 0);

    struct timeval tv_r_Sort_2_171073_s, tv_r_Sort_2_171073_e;
    gettimeofday(&tv_r_Sort_2_171073_s, 0);
    SW_Sort_TD_2202456(tbl_JOIN_INNER_TD_3334547_output, tbl_Sort_TD_2202456_output);
    gettimeofday(&tv_r_Sort_2_171073_e, 0);

    struct timeval tv_r_LocalLimit_1_490197_s, tv_r_LocalLimit_1_490197_e;
    gettimeofday(&tv_r_LocalLimit_1_490197_s, 0);
    SW_LocalLimit_TD_1726839(tbl_Sort_TD_2202456_output, tbl_LocalLimit_TD_1726839_output);
    gettimeofday(&tv_r_LocalLimit_1_490197_e, 0);

    struct timeval tv_r_GlobalLimit_0_420466_s, tv_r_GlobalLimit_0_420466_e;
    gettimeofday(&tv_r_GlobalLimit_0_420466_s, 0);
    SW_GlobalLimit_TD_033848(tbl_LocalLimit_TD_1726839_output, tbl_GlobalLimit_TD_033848_output);
    gettimeofday(&tv_r_GlobalLimit_0_420466_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_984270_s, &tv_r_Filter_11_984270_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12795082_input: " << tbl_SerializeFromObject_TD_12795082_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_385888_s, &tv_r_Filter_11_385888_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12544355_input: " << tbl_SerializeFromObject_TD_12544355_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_198374_s, &tv_r_Filter_10_198374_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11596201_input: " << tbl_SerializeFromObject_TD_11596201_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_797882_s, &tv_r_JOIN_INNER_10_797882_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11264839_output: " << tbl_Filter_TD_11264839_output.getNumRow() << " " << "tbl_Filter_TD_11851293_output: " << tbl_Filter_TD_11851293_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_584664_s, &tv_r_Filter_10_584664_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11596274_input: " << tbl_SerializeFromObject_TD_11596274_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_334731_s, &tv_r_Filter_10_334731_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11495008_input: " << tbl_SerializeFromObject_TD_11495008_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_476323_s, &tv_r_JOIN_INNER_9_476323_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10161447_output: " << tbl_JOIN_INNER_TD_10161447_output.getNumRow() << " " << "tbl_Filter_TD_10815764_output: " << tbl_Filter_TD_10815764_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_838081_s, &tv_r_Filter_9_838081_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10113435_input: " << tbl_SerializeFromObject_TD_10113435_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_614504_s, &tv_r_JOIN_INNER_9_614504_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10543569_output: " << tbl_Filter_TD_10543569_output.getNumRow() << " " << "tbl_Filter_TD_10124943_output: " << tbl_Filter_TD_10124943_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_167539_s, &tv_r_Aggregate_8_167539_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9617328_output: " << tbl_JOIN_INNER_TD_9617328_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_505837_s, &tv_r_JOIN_INNER_8_505837_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9876637_output: " << tbl_JOIN_INNER_TD_9876637_output.getNumRow() << " " << "tbl_Filter_TD_9190988_output: " << tbl_Filter_TD_9190988_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_930522_s, &tv_r_Aggregate_7_930522_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8209764_output: " << tbl_Aggregate_TD_8209764_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_861971_s, &tv_r_Aggregate_7_861971_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8212124_output: " << tbl_JOIN_INNER_TD_8212124_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_106663_s, &tv_r_Filter_6_106663_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_796971_output: " << tbl_Aggregate_TD_796971_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_256783_s, &tv_r_Filter_6_256783_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7523234_output: " << tbl_Aggregate_TD_7523234_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_960945_s, &tv_r_Filter_5_960945_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6570991_input: " << tbl_SerializeFromObject_TD_6570991_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_372138_s, &tv_r_JOIN_INNER_5_372138_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6964300_output: " << tbl_Filter_TD_6964300_output.getNumRow() << " " << "tbl_Filter_TD_6693183_output: " << tbl_Filter_TD_6693183_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_83692_s, &tv_r_Filter_4_83692_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5113741_input: " << tbl_SerializeFromObject_TD_5113741_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_463562_s, &tv_r_JOIN_INNER_4_463562_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5824678_output: " << tbl_JOIN_INNER_TD_5824678_output.getNumRow() << " " << "tbl_Filter_TD_5946954_output: " << tbl_Filter_TD_5946954_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_661729_s, &tv_r_JOIN_INNER_3_661729_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4344574_output: " << tbl_JOIN_INNER_TD_4344574_output.getNumRow() << " " << "tbl_Filter_TD_4993835_output: " << tbl_Filter_TD_4993835_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_171073_s, &tv_r_Sort_2_171073_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3334547_output: " << tbl_JOIN_INNER_TD_3334547_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_490197_s, &tv_r_LocalLimit_1_490197_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2202456_output: " << tbl_Sort_TD_2202456_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_420466_s, &tv_r_GlobalLimit_0_420466_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1726839_output: " << tbl_LocalLimit_TD_1726839_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.4675487 * 1000 << "ms" << std::endl; 
    return 0; 
}
