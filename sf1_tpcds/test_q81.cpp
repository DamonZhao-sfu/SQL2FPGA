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

#include "cfgFunc_q81.hpp" 
#include "q81.hpp" 

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
    std::cout << "NOTE:running query #81\n."; 
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
    Table tbl_GlobalLimit_TD_0184923_output("tbl_GlobalLimit_TD_0184923_output", 6100000, 16, "");
    tbl_GlobalLimit_TD_0184923_output.allocateHost();
    Table tbl_LocalLimit_TD_1875280_output("tbl_LocalLimit_TD_1875280_output", 6100000, 16, "");
    tbl_LocalLimit_TD_1875280_output.allocateHost();
    Table tbl_Sort_TD_2231489_output("tbl_Sort_TD_2231489_output", 6100000, 16, "");
    tbl_Sort_TD_2231489_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3200214_output("tbl_JOIN_INNER_TD_3200214_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_3200214_output.allocateHost();
    Table tbl_JOIN_INNER_TD_41150_output("tbl_JOIN_INNER_TD_41150_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_41150_output.allocateHost();
    Table tbl_Filter_TD_4870184_output("tbl_Filter_TD_4870184_output", 6100000, 12, "");
    tbl_Filter_TD_4870184_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5473210_output("tbl_JOIN_INNER_TD_5473210_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5473210_output.allocateHost();
    Table tbl_Filter_TD_5691634_output("tbl_Filter_TD_5691634_output", 6100000, 6, "");
    tbl_Filter_TD_5691634_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5938228_input;
    tbl_SerializeFromObject_TD_5938228_input = Table("customer_address", customer_address_n, 12, in_dir, "orc");
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_street_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_suite_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_country", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_5938228_input.addCol("ca_location_type", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5938228_input.allocateHost();
    tbl_SerializeFromObject_TD_5938228_input.loadHost();
    Table tbl_Filter_TD_6289706_output("tbl_Filter_TD_6289706_output", 6100000, 3, "");
    tbl_Filter_TD_6289706_output.allocateHost();
    Table tbl_Filter_TD_6616093_output("tbl_Filter_TD_6616093_output", 6100000, 2, "");
    tbl_Filter_TD_6616093_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6848157_input;
    tbl_SerializeFromObject_TD_6848157_input = Table("customer", customer_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_6848157_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6848157_input.addCol("c_customer_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6848157_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_6848157_input.addCol("c_salutation", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6848157_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6848157_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6848157_input.allocateHost();
    tbl_SerializeFromObject_TD_6848157_input.loadHost();
    Table tbl_Aggregate_TD_770700_output("tbl_Aggregate_TD_770700_output", 6100000, 3, "");
    tbl_Aggregate_TD_770700_output.allocateHost();
    Table tbl_Aggregate_TD_7217144_output("tbl_Aggregate_TD_7217144_output", 6100000, 2, "");
    tbl_Aggregate_TD_7217144_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8952324_output("tbl_JOIN_INNER_TD_8952324_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8952324_output.allocateHost();
    Table tbl_Aggregate_TD_8544010_output("tbl_Aggregate_TD_8544010_output", 6100000, 2, "");
    tbl_Aggregate_TD_8544010_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9269164_output("tbl_JOIN_INNER_TD_9269164_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9269164_output.allocateHost();
    Table tbl_Filter_TD_9555588_output("tbl_Filter_TD_9555588_output", 6100000, 2, "");
    tbl_Filter_TD_9555588_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9732494_output("tbl_JOIN_INNER_TD_9732494_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9732494_output.allocateHost();
    Table tbl_Filter_TD_10810629_output("tbl_Filter_TD_10810629_output", 6100000, 4, "");
    tbl_Filter_TD_10810629_output.allocateHost();
    Table tbl_Filter_TD_10979076_output("tbl_Filter_TD_10979076_output", 6100000, 1, "");
    tbl_Filter_TD_10979076_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10162582_input;
    tbl_SerializeFromObject_TD_10162582_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10162582_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10162582_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10162582_input.allocateHost();
    tbl_SerializeFromObject_TD_10162582_input.loadHost();
    Table tbl_JOIN_INNER_TD_10451888_output("tbl_JOIN_INNER_TD_10451888_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10451888_output.allocateHost();
    Table tbl_Filter_TD_10415010_output("tbl_Filter_TD_10415010_output", 6100000, 2, "");
    tbl_Filter_TD_10415010_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11266406_input;
    tbl_SerializeFromObject_TD_11266406_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11266406_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_11266406_input.addCol("cr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_11266406_input.addCol("cr_returning_addr_sk", 4);
    tbl_SerializeFromObject_TD_11266406_input.addCol("cr_return_amt_inc_tax", 4);
    tbl_SerializeFromObject_TD_11266406_input.allocateHost();
    tbl_SerializeFromObject_TD_11266406_input.loadHost();
    Table tbl_SerializeFromObject_TD_11311676_input;
    tbl_SerializeFromObject_TD_11311676_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11311676_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11311676_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11311676_input.allocateHost();
    tbl_SerializeFromObject_TD_11311676_input.loadHost();
    Table tbl_Filter_TD_11670144_output("tbl_Filter_TD_11670144_output", 6100000, 4, "");
    tbl_Filter_TD_11670144_output.allocateHost();
    Table tbl_Filter_TD_11644500_output("tbl_Filter_TD_11644500_output", 6100000, 1, "");
    tbl_Filter_TD_11644500_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11534519_input;
    tbl_SerializeFromObject_TD_11534519_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11534519_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_11534519_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11534519_input.allocateHost();
    tbl_SerializeFromObject_TD_11534519_input.loadHost();
    Table tbl_SerializeFromObject_TD_12107851_input;
    tbl_SerializeFromObject_TD_12107851_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_12107851_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_12107851_input.addCol("cr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_12107851_input.addCol("cr_returning_addr_sk", 4);
    tbl_SerializeFromObject_TD_12107851_input.addCol("cr_return_amt_inc_tax", 4);
    tbl_SerializeFromObject_TD_12107851_input.allocateHost();
    tbl_SerializeFromObject_TD_12107851_input.loadHost();
    Table tbl_SerializeFromObject_TD_12996197_input;
    tbl_SerializeFromObject_TD_12996197_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12996197_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12996197_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12996197_input.allocateHost();
    tbl_SerializeFromObject_TD_12996197_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_9269164_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10810629_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10979076_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10451888_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11670144_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11644500_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_9269164_cmds;
    cfg_JOIN_INNER_TD_9269164_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9269164_gqe_join (cfg_JOIN_INNER_TD_9269164_cmds.cmd);
    cfg_JOIN_INNER_TD_9269164_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_10451888_cmds;
    cfg_JOIN_INNER_TD_10451888_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10451888_gqe_join (cfg_JOIN_INNER_TD_10451888_cmds.cmd);
    cfg_JOIN_INNER_TD_10451888_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_9269164;
    krnl_JOIN_INNER_TD_9269164 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9269164.setup(tbl_Filter_TD_10810629_output, tbl_Filter_TD_10979076_output, tbl_JOIN_INNER_TD_9269164_output, cfg_JOIN_INNER_TD_9269164_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_10451888;
    krnl_JOIN_INNER_TD_10451888 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10451888.setup(tbl_Filter_TD_11670144_output, tbl_Filter_TD_11644500_output, tbl_JOIN_INNER_TD_10451888_output, cfg_JOIN_INNER_TD_10451888_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_9269164;
    trans_JOIN_INNER_TD_9269164.setq(q_h);
    trans_JOIN_INNER_TD_9269164.add(&(cfg_JOIN_INNER_TD_9269164_cmds));
    transEngine trans_JOIN_INNER_TD_9269164_out;
    trans_JOIN_INNER_TD_9269164_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_10451888;
    trans_JOIN_INNER_TD_10451888.setq(q_h);
    trans_JOIN_INNER_TD_10451888.add(&(cfg_JOIN_INNER_TD_10451888_cmds));
    transEngine trans_JOIN_INNER_TD_10451888_out;
    trans_JOIN_INNER_TD_10451888_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9269164;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9269164;
    std::vector<cl::Event> events_JOIN_INNER_TD_9269164;
    events_h2d_wr_JOIN_INNER_TD_9269164.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9269164.resize(1);
    events_JOIN_INNER_TD_9269164.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9269164;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9269164;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10451888;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10451888;
    std::vector<cl::Event> events_JOIN_INNER_TD_10451888;
    events_h2d_wr_JOIN_INNER_TD_10451888.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10451888.resize(1);
    events_JOIN_INNER_TD_10451888.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10451888;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10451888;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_62059_s, tv_r_Filter_11_62059_e;
    gettimeofday(&tv_r_Filter_11_62059_s, 0);
    SW_Filter_TD_11644500(tbl_SerializeFromObject_TD_12996197_input, tbl_Filter_TD_11644500_output);
    gettimeofday(&tv_r_Filter_11_62059_e, 0);

    struct timeval tv_r_Filter_11_772981_s, tv_r_Filter_11_772981_e;
    gettimeofday(&tv_r_Filter_11_772981_s, 0);
    SW_Filter_TD_11670144(tbl_SerializeFromObject_TD_12107851_input, tbl_Filter_TD_11670144_output);
    gettimeofday(&tv_r_Filter_11_772981_e, 0);

    struct timeval tv_r_Filter_10_953205_s, tv_r_Filter_10_953205_e;
    gettimeofday(&tv_r_Filter_10_953205_s, 0);
    SW_Filter_TD_10415010(tbl_SerializeFromObject_TD_11534519_input, tbl_Filter_TD_10415010_output);
    gettimeofday(&tv_r_Filter_10_953205_e, 0);

    struct timeval tv_r_JOIN_INNER_10_348069_s, tv_r_JOIN_INNER_10_348069_e;
    gettimeofday(&tv_r_JOIN_INNER_10_348069_s, 0);
    trans_JOIN_INNER_TD_10451888.add(&(tbl_Filter_TD_11670144_output));
    trans_JOIN_INNER_TD_10451888.add(&(tbl_Filter_TD_11644500_output));
    trans_JOIN_INNER_TD_10451888.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10451888), &(events_h2d_wr_JOIN_INNER_TD_10451888[0]));
    events_grp_JOIN_INNER_TD_10451888.push_back(events_h2d_wr_JOIN_INNER_TD_10451888[0]);
    krnl_JOIN_INNER_TD_10451888.run(0, &(events_grp_JOIN_INNER_TD_10451888), &(events_JOIN_INNER_TD_10451888[0]));
    
    trans_JOIN_INNER_TD_10451888_out.add(&(tbl_JOIN_INNER_TD_10451888_output));
    trans_JOIN_INNER_TD_10451888_out.dev2host(0, &(events_JOIN_INNER_TD_10451888), &(events_d2h_rd_JOIN_INNER_TD_10451888[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_10_348069_e, 0);

    struct timeval tv_r_Filter_10_254318_s, tv_r_Filter_10_254318_e;
    gettimeofday(&tv_r_Filter_10_254318_s, 0);
    SW_Filter_TD_10979076(tbl_SerializeFromObject_TD_11311676_input, tbl_Filter_TD_10979076_output);
    gettimeofday(&tv_r_Filter_10_254318_e, 0);

    struct timeval tv_r_Filter_10_160224_s, tv_r_Filter_10_160224_e;
    gettimeofday(&tv_r_Filter_10_160224_s, 0);
    SW_Filter_TD_10810629(tbl_SerializeFromObject_TD_11266406_input, tbl_Filter_TD_10810629_output);
    gettimeofday(&tv_r_Filter_10_160224_e, 0);

    struct timeval tv_r_JOIN_INNER_9_200469_s, tv_r_JOIN_INNER_9_200469_e;
    gettimeofday(&tv_r_JOIN_INNER_9_200469_s, 0);
    SW_JOIN_INNER_TD_9732494(tbl_JOIN_INNER_TD_10451888_output, tbl_Filter_TD_10415010_output, tbl_JOIN_INNER_TD_9732494_output);
    gettimeofday(&tv_r_JOIN_INNER_9_200469_e, 0);

    struct timeval tv_r_Filter_9_309996_s, tv_r_Filter_9_309996_e;
    gettimeofday(&tv_r_Filter_9_309996_s, 0);
    SW_Filter_TD_9555588(tbl_SerializeFromObject_TD_10162582_input, tbl_Filter_TD_9555588_output);
    gettimeofday(&tv_r_Filter_9_309996_e, 0);

    struct timeval tv_r_JOIN_INNER_9_264227_s, tv_r_JOIN_INNER_9_264227_e;
    gettimeofday(&tv_r_JOIN_INNER_9_264227_s, 0);
    trans_JOIN_INNER_TD_9269164.add(&(tbl_Filter_TD_10810629_output));
    trans_JOIN_INNER_TD_9269164.add(&(tbl_Filter_TD_10979076_output));
    trans_JOIN_INNER_TD_9269164.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9269164), &(events_h2d_wr_JOIN_INNER_TD_9269164[0]));
    events_grp_JOIN_INNER_TD_9269164.push_back(events_h2d_wr_JOIN_INNER_TD_9269164[0]);
    krnl_JOIN_INNER_TD_9269164.run(0, &(events_grp_JOIN_INNER_TD_9269164), &(events_JOIN_INNER_TD_9269164[0]));
    
    trans_JOIN_INNER_TD_9269164_out.add(&(tbl_JOIN_INNER_TD_9269164_output));
    trans_JOIN_INNER_TD_9269164_out.dev2host(0, &(events_JOIN_INNER_TD_9269164), &(events_d2h_rd_JOIN_INNER_TD_9269164[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_9_264227_e, 0);

    struct timeval tv_r_Aggregate_8_74368_s, tv_r_Aggregate_8_74368_e;
    gettimeofday(&tv_r_Aggregate_8_74368_s, 0);
    SW_Aggregate_TD_8544010(tbl_JOIN_INNER_TD_9732494_output, tbl_Aggregate_TD_8544010_output);
    gettimeofday(&tv_r_Aggregate_8_74368_e, 0);

    struct timeval tv_r_JOIN_INNER_8_889672_s, tv_r_JOIN_INNER_8_889672_e;
    gettimeofday(&tv_r_JOIN_INNER_8_889672_s, 0);
    SW_JOIN_INNER_TD_8952324(tbl_JOIN_INNER_TD_9269164_output, tbl_Filter_TD_9555588_output, tbl_JOIN_INNER_TD_8952324_output);
    gettimeofday(&tv_r_JOIN_INNER_8_889672_e, 0);

    struct timeval tv_r_Aggregate_7_462486_s, tv_r_Aggregate_7_462486_e;
    gettimeofday(&tv_r_Aggregate_7_462486_s, 0);
    SW_Aggregate_TD_7217144(tbl_Aggregate_TD_8544010_output, tbl_Aggregate_TD_7217144_output);
    gettimeofday(&tv_r_Aggregate_7_462486_e, 0);

    struct timeval tv_r_Aggregate_7_979196_s, tv_r_Aggregate_7_979196_e;
    gettimeofday(&tv_r_Aggregate_7_979196_s, 0);
    SW_Aggregate_TD_770700(tbl_JOIN_INNER_TD_8952324_output, tbl_Aggregate_TD_770700_output);
    gettimeofday(&tv_r_Aggregate_7_979196_e, 0);

    struct timeval tv_r_Filter_6_731820_s, tv_r_Filter_6_731820_e;
    gettimeofday(&tv_r_Filter_6_731820_s, 0);
    SW_Filter_TD_6616093(tbl_Aggregate_TD_7217144_output, tbl_Filter_TD_6616093_output);
    gettimeofday(&tv_r_Filter_6_731820_e, 0);

    struct timeval tv_r_Filter_6_617220_s, tv_r_Filter_6_617220_e;
    gettimeofday(&tv_r_Filter_6_617220_s, 0);
    SW_Filter_TD_6289706(tbl_Aggregate_TD_770700_output, tbl_Filter_TD_6289706_output);
    gettimeofday(&tv_r_Filter_6_617220_e, 0);

    struct timeval tv_r_Filter_5_69508_s, tv_r_Filter_5_69508_e;
    gettimeofday(&tv_r_Filter_5_69508_s, 0);
    SW_Filter_TD_5691634(tbl_SerializeFromObject_TD_6848157_input, tbl_Filter_TD_5691634_output);
    gettimeofday(&tv_r_Filter_5_69508_e, 0);

    struct timeval tv_r_JOIN_INNER_5_723557_s, tv_r_JOIN_INNER_5_723557_e;
    gettimeofday(&tv_r_JOIN_INNER_5_723557_s, 0);
    SW_JOIN_INNER_TD_5473210(tbl_Filter_TD_6289706_output, tbl_Filter_TD_6616093_output, tbl_JOIN_INNER_TD_5473210_output);
    gettimeofday(&tv_r_JOIN_INNER_5_723557_e, 0);

    struct timeval tv_r_Filter_4_219225_s, tv_r_Filter_4_219225_e;
    gettimeofday(&tv_r_Filter_4_219225_s, 0);
    SW_Filter_TD_4870184(tbl_SerializeFromObject_TD_5938228_input, tbl_Filter_TD_4870184_output);
    gettimeofday(&tv_r_Filter_4_219225_e, 0);

    struct timeval tv_r_JOIN_INNER_4_460091_s, tv_r_JOIN_INNER_4_460091_e;
    gettimeofday(&tv_r_JOIN_INNER_4_460091_s, 0);
    SW_JOIN_INNER_TD_41150(tbl_JOIN_INNER_TD_5473210_output, tbl_Filter_TD_5691634_output, tbl_JOIN_INNER_TD_41150_output);
    gettimeofday(&tv_r_JOIN_INNER_4_460091_e, 0);

    struct timeval tv_r_JOIN_INNER_3_540447_s, tv_r_JOIN_INNER_3_540447_e;
    gettimeofday(&tv_r_JOIN_INNER_3_540447_s, 0);
    SW_JOIN_INNER_TD_3200214(tbl_JOIN_INNER_TD_41150_output, tbl_Filter_TD_4870184_output, tbl_JOIN_INNER_TD_3200214_output);
    gettimeofday(&tv_r_JOIN_INNER_3_540447_e, 0);

    struct timeval tv_r_Sort_2_721130_s, tv_r_Sort_2_721130_e;
    gettimeofday(&tv_r_Sort_2_721130_s, 0);
    SW_Sort_TD_2231489(tbl_JOIN_INNER_TD_3200214_output, tbl_Sort_TD_2231489_output);
    gettimeofday(&tv_r_Sort_2_721130_e, 0);

    struct timeval tv_r_LocalLimit_1_798073_s, tv_r_LocalLimit_1_798073_e;
    gettimeofday(&tv_r_LocalLimit_1_798073_s, 0);
    SW_LocalLimit_TD_1875280(tbl_Sort_TD_2231489_output, tbl_LocalLimit_TD_1875280_output);
    gettimeofday(&tv_r_LocalLimit_1_798073_e, 0);

    struct timeval tv_r_GlobalLimit_0_633617_s, tv_r_GlobalLimit_0_633617_e;
    gettimeofday(&tv_r_GlobalLimit_0_633617_s, 0);
    SW_GlobalLimit_TD_0184923(tbl_LocalLimit_TD_1875280_output, tbl_GlobalLimit_TD_0184923_output);
    gettimeofday(&tv_r_GlobalLimit_0_633617_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_62059_s, &tv_r_Filter_11_62059_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12996197_input: " << tbl_SerializeFromObject_TD_12996197_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_772981_s, &tv_r_Filter_11_772981_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12107851_input: " << tbl_SerializeFromObject_TD_12107851_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_953205_s, &tv_r_Filter_10_953205_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11534519_input: " << tbl_SerializeFromObject_TD_11534519_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_348069_s, &tv_r_JOIN_INNER_10_348069_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11670144_output: " << tbl_Filter_TD_11670144_output.getNumRow() << " " << "tbl_Filter_TD_11644500_output: " << tbl_Filter_TD_11644500_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_254318_s, &tv_r_Filter_10_254318_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11311676_input: " << tbl_SerializeFromObject_TD_11311676_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_160224_s, &tv_r_Filter_10_160224_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11266406_input: " << tbl_SerializeFromObject_TD_11266406_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_200469_s, &tv_r_JOIN_INNER_9_200469_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10451888_output: " << tbl_JOIN_INNER_TD_10451888_output.getNumRow() << " " << "tbl_Filter_TD_10415010_output: " << tbl_Filter_TD_10415010_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_309996_s, &tv_r_Filter_9_309996_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10162582_input: " << tbl_SerializeFromObject_TD_10162582_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_264227_s, &tv_r_JOIN_INNER_9_264227_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10810629_output: " << tbl_Filter_TD_10810629_output.getNumRow() << " " << "tbl_Filter_TD_10979076_output: " << tbl_Filter_TD_10979076_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_8: " << tvdiff(&tv_r_Aggregate_8_74368_s, &tv_r_Aggregate_8_74368_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9732494_output: " << tbl_JOIN_INNER_TD_9732494_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_889672_s, &tv_r_JOIN_INNER_8_889672_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9269164_output: " << tbl_JOIN_INNER_TD_9269164_output.getNumRow() << " " << "tbl_Filter_TD_9555588_output: " << tbl_Filter_TD_9555588_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_462486_s, &tv_r_Aggregate_7_462486_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_8544010_output: " << tbl_Aggregate_TD_8544010_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_979196_s, &tv_r_Aggregate_7_979196_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8952324_output: " << tbl_JOIN_INNER_TD_8952324_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_731820_s, &tv_r_Filter_6_731820_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7217144_output: " << tbl_Aggregate_TD_7217144_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_617220_s, &tv_r_Filter_6_617220_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_770700_output: " << tbl_Aggregate_TD_770700_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_69508_s, &tv_r_Filter_5_69508_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6848157_input: " << tbl_SerializeFromObject_TD_6848157_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_723557_s, &tv_r_JOIN_INNER_5_723557_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6289706_output: " << tbl_Filter_TD_6289706_output.getNumRow() << " " << "tbl_Filter_TD_6616093_output: " << tbl_Filter_TD_6616093_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_219225_s, &tv_r_Filter_4_219225_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5938228_input: " << tbl_SerializeFromObject_TD_5938228_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_460091_s, &tv_r_JOIN_INNER_4_460091_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5473210_output: " << tbl_JOIN_INNER_TD_5473210_output.getNumRow() << " " << "tbl_Filter_TD_5691634_output: " << tbl_Filter_TD_5691634_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_540447_s, &tv_r_JOIN_INNER_3_540447_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_41150_output: " << tbl_JOIN_INNER_TD_41150_output.getNumRow() << " " << "tbl_Filter_TD_4870184_output: " << tbl_Filter_TD_4870184_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_721130_s, &tv_r_Sort_2_721130_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3200214_output: " << tbl_JOIN_INNER_TD_3200214_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_798073_s, &tv_r_LocalLimit_1_798073_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2231489_output: " << tbl_Sort_TD_2231489_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_633617_s, &tv_r_GlobalLimit_0_633617_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1875280_output: " << tbl_LocalLimit_TD_1875280_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.4848963 * 1000 << "ms" << std::endl; 
    return 0; 
}
