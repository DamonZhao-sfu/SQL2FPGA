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

#include "cfgFunc_q96.hpp" 
#include "q96.hpp" 

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
    std::cout << "NOTE:running query #96\n."; 
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
    Table tbl_Aggregate_TD_0995291_output("tbl_Aggregate_TD_0995291_output", 6100000, 1, "");
    tbl_Aggregate_TD_0995291_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1541857_output("tbl_JOIN_INNER_TD_1541857_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_1541857_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2285758_output("tbl_JOIN_INNER_TD_2285758_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_2285758_output.allocateHost();
    Table tbl_Filter_TD_271160_output("tbl_Filter_TD_271160_output", 6100000, 1, "");
    tbl_Filter_TD_271160_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3863104_output("tbl_JOIN_INNER_TD_3863104_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3863104_output.allocateHost();
    Table tbl_Filter_TD_3799447_output("tbl_Filter_TD_3799447_output", 6100000, 1, "");
    tbl_Filter_TD_3799447_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3667473_input;
    tbl_SerializeFromObject_TD_3667473_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3667473_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_3667473_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3667473_input.allocateHost();
    tbl_SerializeFromObject_TD_3667473_input.loadHost();
    Table tbl_Filter_TD_4873819_output("tbl_Filter_TD_4873819_output", 6100000, 3, "");
    tbl_Filter_TD_4873819_output.allocateHost();
    Table tbl_Filter_TD_4672289_output("tbl_Filter_TD_4672289_output", 6100000, 1, "");
    tbl_Filter_TD_4672289_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4927284_input;
    tbl_SerializeFromObject_TD_4927284_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_4927284_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_4927284_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_4927284_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_4927284_input.allocateHost();
    tbl_SerializeFromObject_TD_4927284_input.loadHost();
    Table tbl_SerializeFromObject_TD_5556030_input;
    tbl_SerializeFromObject_TD_5556030_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5556030_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_5556030_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_5556030_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_5556030_input.allocateHost();
    tbl_SerializeFromObject_TD_5556030_input.loadHost();
    Table tbl_SerializeFromObject_TD_5653941_input;
    tbl_SerializeFromObject_TD_5653941_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5653941_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_5653941_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_5653941_input.allocateHost();
    tbl_SerializeFromObject_TD_5653941_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_1541857_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_2285758_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_271160_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3863104_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3799447_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4873819_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4672289_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_1541857_cmds;
    cfg_JOIN_INNER_TD_1541857_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1541857_gqe_join (cfg_JOIN_INNER_TD_1541857_cmds.cmd);
    cfg_JOIN_INNER_TD_1541857_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_2285758_cmds;
    cfg_JOIN_INNER_TD_2285758_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2285758_gqe_join (cfg_JOIN_INNER_TD_2285758_cmds.cmd);
    cfg_JOIN_INNER_TD_2285758_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3863104_cmds;
    cfg_JOIN_INNER_TD_3863104_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3863104_gqe_join (cfg_JOIN_INNER_TD_3863104_cmds.cmd);
    cfg_JOIN_INNER_TD_3863104_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_1541857;
    krnl_JOIN_INNER_TD_1541857 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1541857.setup(tbl_JOIN_INNER_TD_2285758_output, tbl_Filter_TD_271160_output, tbl_JOIN_INNER_TD_1541857_output, cfg_JOIN_INNER_TD_1541857_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_2285758;
    krnl_JOIN_INNER_TD_2285758 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2285758.setup(tbl_JOIN_INNER_TD_3863104_output, tbl_Filter_TD_3799447_output, tbl_JOIN_INNER_TD_2285758_output, cfg_JOIN_INNER_TD_2285758_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3863104;
    krnl_JOIN_INNER_TD_3863104 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3863104.setup(tbl_Filter_TD_4873819_output, tbl_Filter_TD_4672289_output, tbl_JOIN_INNER_TD_3863104_output, cfg_JOIN_INNER_TD_3863104_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_1541857;
    trans_JOIN_INNER_TD_1541857.setq(q_h);
    trans_JOIN_INNER_TD_1541857.add(&(cfg_JOIN_INNER_TD_1541857_cmds));
    transEngine trans_JOIN_INNER_TD_1541857_out;
    trans_JOIN_INNER_TD_1541857_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_2285758;
    trans_JOIN_INNER_TD_2285758.setq(q_h);
    trans_JOIN_INNER_TD_2285758.add(&(cfg_JOIN_INNER_TD_2285758_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3863104;
    trans_JOIN_INNER_TD_3863104.setq(q_h);
    trans_JOIN_INNER_TD_3863104.add(&(cfg_JOIN_INNER_TD_3863104_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1541857;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1541857;
    std::vector<cl::Event> events_JOIN_INNER_TD_1541857;
    events_h2d_wr_JOIN_INNER_TD_1541857.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1541857.resize(1);
    events_JOIN_INNER_TD_1541857.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1541857;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1541857;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2285758;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2285758;
    std::vector<cl::Event> events_JOIN_INNER_TD_2285758;
    events_h2d_wr_JOIN_INNER_TD_2285758.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2285758.resize(1);
    events_JOIN_INNER_TD_2285758.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2285758;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2285758;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3863104;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3863104;
    std::vector<cl::Event> events_JOIN_INNER_TD_3863104;
    events_h2d_wr_JOIN_INNER_TD_3863104.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3863104.resize(1);
    events_JOIN_INNER_TD_3863104.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3863104;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3863104;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_812115_s, tv_r_Filter_4_812115_e;
    gettimeofday(&tv_r_Filter_4_812115_s, 0);
    SW_Filter_TD_4672289(tbl_SerializeFromObject_TD_5653941_input, tbl_Filter_TD_4672289_output);
    gettimeofday(&tv_r_Filter_4_812115_e, 0);

    struct timeval tv_r_Filter_4_668654_s, tv_r_Filter_4_668654_e;
    gettimeofday(&tv_r_Filter_4_668654_s, 0);
    SW_Filter_TD_4873819(tbl_SerializeFromObject_TD_5556030_input, tbl_Filter_TD_4873819_output);
    gettimeofday(&tv_r_Filter_4_668654_e, 0);

    struct timeval tv_r_Filter_3_401763_s, tv_r_Filter_3_401763_e;
    gettimeofday(&tv_r_Filter_3_401763_s, 0);
    SW_Filter_TD_3799447(tbl_SerializeFromObject_TD_4927284_input, tbl_Filter_TD_3799447_output);
    gettimeofday(&tv_r_Filter_3_401763_e, 0);

    struct timeval tv_r_JOIN_INNER_3_899920_s, tv_r_JOIN_INNER_3_899920_e;
    gettimeofday(&tv_r_JOIN_INNER_3_899920_s, 0);
    trans_JOIN_INNER_TD_3863104.add(&(tbl_Filter_TD_4873819_output));
    trans_JOIN_INNER_TD_3863104.add(&(tbl_Filter_TD_4672289_output));
    trans_JOIN_INNER_TD_3863104.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3863104), &(events_h2d_wr_JOIN_INNER_TD_3863104[0]));
    events_grp_JOIN_INNER_TD_3863104.push_back(events_h2d_wr_JOIN_INNER_TD_3863104[0]);
    krnl_JOIN_INNER_TD_3863104.run(0, &(events_grp_JOIN_INNER_TD_3863104), &(events_JOIN_INNER_TD_3863104[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_899920_e, 0);

    struct timeval tv_r_Filter_2_818790_s, tv_r_Filter_2_818790_e;
    gettimeofday(&tv_r_Filter_2_818790_s, 0);
    SW_Filter_TD_271160(tbl_SerializeFromObject_TD_3667473_input, tbl_Filter_TD_271160_output);
    gettimeofday(&tv_r_Filter_2_818790_e, 0);

    struct timeval tv_r_JOIN_INNER_2_355463_s, tv_r_JOIN_INNER_2_355463_e;
    gettimeofday(&tv_r_JOIN_INNER_2_355463_s, 0);
    prev_events_grp_JOIN_INNER_TD_2285758.push_back(events_h2d_wr_JOIN_INNER_TD_3863104[0]);
    trans_JOIN_INNER_TD_2285758.add(&(tbl_Filter_TD_3799447_output));
    trans_JOIN_INNER_TD_2285758.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2285758), &(events_h2d_wr_JOIN_INNER_TD_2285758[0]));
    events_grp_JOIN_INNER_TD_2285758.push_back(events_h2d_wr_JOIN_INNER_TD_2285758[0]);
    events_grp_JOIN_INNER_TD_2285758.push_back(events_JOIN_INNER_TD_3863104[0]);
    krnl_JOIN_INNER_TD_2285758.run(0, &(events_grp_JOIN_INNER_TD_2285758), &(events_JOIN_INNER_TD_2285758[0]));
    gettimeofday(&tv_r_JOIN_INNER_2_355463_e, 0);

    struct timeval tv_r_JOIN_INNER_1_210379_s, tv_r_JOIN_INNER_1_210379_e;
    gettimeofday(&tv_r_JOIN_INNER_1_210379_s, 0);
    prev_events_grp_JOIN_INNER_TD_1541857.push_back(events_h2d_wr_JOIN_INNER_TD_2285758[0]);
    trans_JOIN_INNER_TD_1541857.add(&(tbl_Filter_TD_271160_output));
    trans_JOIN_INNER_TD_1541857.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1541857), &(events_h2d_wr_JOIN_INNER_TD_1541857[0]));
    events_grp_JOIN_INNER_TD_1541857.push_back(events_h2d_wr_JOIN_INNER_TD_1541857[0]);
    events_grp_JOIN_INNER_TD_1541857.push_back(events_JOIN_INNER_TD_2285758[0]);
    krnl_JOIN_INNER_TD_1541857.run(0, &(events_grp_JOIN_INNER_TD_1541857), &(events_JOIN_INNER_TD_1541857[0]));
    
    trans_JOIN_INNER_TD_1541857_out.add(&(tbl_JOIN_INNER_TD_1541857_output));
    trans_JOIN_INNER_TD_1541857_out.dev2host(0, &(events_JOIN_INNER_TD_1541857), &(events_d2h_rd_JOIN_INNER_TD_1541857[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_210379_e, 0);

    struct timeval tv_r_Aggregate_0_780595_s, tv_r_Aggregate_0_780595_e;
    gettimeofday(&tv_r_Aggregate_0_780595_s, 0);
    SW_Aggregate_TD_0995291(tbl_JOIN_INNER_TD_1541857_output, tbl_Aggregate_TD_0995291_output);
    gettimeofday(&tv_r_Aggregate_0_780595_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_812115_s, &tv_r_Filter_4_812115_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5653941_input: " << tbl_SerializeFromObject_TD_5653941_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_668654_s, &tv_r_Filter_4_668654_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5556030_input: " << tbl_SerializeFromObject_TD_5556030_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_401763_s, &tv_r_Filter_3_401763_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4927284_input: " << tbl_SerializeFromObject_TD_4927284_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_899920_s, &tv_r_JOIN_INNER_3_899920_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4873819_output: " << tbl_Filter_TD_4873819_output.getNumRow() << " " << "tbl_Filter_TD_4672289_output: " << tbl_Filter_TD_4672289_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_818790_s, &tv_r_Filter_2_818790_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3667473_input: " << tbl_SerializeFromObject_TD_3667473_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_355463_s, &tv_r_JOIN_INNER_2_355463_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3863104_output: " << tbl_JOIN_INNER_TD_3863104_output.getNumRow() << " " << "tbl_Filter_TD_3799447_output: " << tbl_Filter_TD_3799447_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_210379_s, &tv_r_JOIN_INNER_1_210379_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2285758_output: " << tbl_JOIN_INNER_TD_2285758_output.getNumRow() << " " << "tbl_Filter_TD_271160_output: " << tbl_Filter_TD_271160_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_780595_s, &tv_r_Aggregate_0_780595_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1541857_output: " << tbl_JOIN_INNER_TD_1541857_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.62254983 * 1000 << "ms" << std::endl; 
    return 0; 
}
