// number of overlays (w/o fusion): 2 
// number of overlays (w/ fusion): 2 
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
#include "gqe_api.hpp" 

#include "cfgFunc_q22.hpp" 
#include "q22.hpp" 

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
    std::cout << "NOTE:running query #22\n."; 
    std::cout << "NOTE:running in sf" << scale << " data\n"; 

    int32_t lineitem_n = SF1_LINEITEM; 
    int32_t supplier_n = SF1_SUPPLIER; 
    int32_t nation_n = SF1_NATION; 
    int32_t orders_n = SF1_ORDERS; 
    int32_t customer_n = SF1_CUSTOMER; 
    int32_t region_n = SF1_REGION; 
    int32_t part_n = SF1_PART; 
    int32_t partsupp_n = SF1_PARTSUPP; 
    if (scale == 30) { 
        lineitem_n = SF30_LINEITEM; 
        supplier_n = SF30_SUPPLIER; 
        nation_n = SF30_NATION; 
        orders_n = SF30_ORDERS; 
        customer_n = SF30_CUSTOMER; 
        region_n = SF30_REGION; 
        part_n = SF30_PART; 
        partsupp_n = SF30_PARTSUPP; 
    } 
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
    Table tbl_Sort_TD_0895_output("tbl_Sort_TD_0895_output", 6100000, 3, "");
    tbl_Sort_TD_0895_output.allocateHost();
    Table tbl_Aggregate_TD_1234_output("tbl_Aggregate_TD_1234_output", 6100000, 3, "");
    tbl_Aggregate_TD_1234_output.allocateHost();
    Table tbl_Project_TD_2116_output("tbl_Project_TD_2116_output", 6100000, 2, "");
    tbl_Project_TD_2116_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3883_output("tbl_JOIN_LEFTANTI_TD_3883_output", 6100000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3883_output.allocateHost();
    Table tbl_Filter_TD_4676_output("tbl_Filter_TD_4676_output", 6100000, 3, "");
    tbl_Filter_TD_4676_output.allocateHost();
    Table tbl_Project_TD_498_output("tbl_Project_TD_498_output", -1, 1, "");
    tbl_Project_TD_498_output.allocateHost();
    Table tbl_Project_TD_498_emptyBufferB("tbl_Project_TD_498_emptyBufferB", 1, 8, "");
    tbl_Project_TD_498_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_5500_input;
    tbl_SerializeFromObject_TD_5500_input = Table("customer", customer_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5500_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_5500_input.addCol("c_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_5500_input.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_5500_input.allocateHost();
    tbl_SerializeFromObject_TD_5500_input.loadHost();
    Table tbl_Aggregate_TD_51_output("tbl_Aggregate_TD_51_output", 6100000, 1, "");
    tbl_Aggregate_TD_51_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5835_input;
    tbl_SerializeFromObject_TD_5835_input = Table("orders", orders_n, 1, in_dir);
    tbl_SerializeFromObject_TD_5835_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_5835_input.allocateHost();
    tbl_SerializeFromObject_TD_5835_input.loadHost();
    Table tbl_Project_TD_6623_output("tbl_Project_TD_6623_output", -1, 1, "");
    tbl_Project_TD_6623_output.allocateHost();
    Table tbl_Project_TD_6623_emptyBufferB("tbl_Project_TD_6623_emptyBufferB", 1, 8, "");
    tbl_Project_TD_6623_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_7744_output("tbl_Filter_TD_7744_output", 6100000, 1, "");
    tbl_Filter_TD_7744_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8542_input;
    tbl_SerializeFromObject_TD_8542_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_8542_input.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_8542_input.addCol("c_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_8542_input.allocateHost();
    tbl_SerializeFromObject_TD_8542_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_498_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_498_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5835_input.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6623_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6623_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7744_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_498_cmds;
    cfg_Project_TD_498_cmds.allocateHost();
    get_cfg_dat_Project_TD_498_gqe_join (cfg_Project_TD_498_cmds.cmd);
    cfg_Project_TD_498_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_6623_cmds;
    cfg_Project_TD_6623_cmds.allocateHost();
    get_cfg_dat_Project_TD_6623_gqe_join (cfg_Project_TD_6623_cmds.cmd);
    cfg_Project_TD_6623_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_498;
    krnl_Project_TD_498 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_498.setup(tbl_SerializeFromObject_TD_5835_input, tbl_Project_TD_498_emptyBufferB, tbl_Project_TD_498_output, cfg_Project_TD_498_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_6623;
    krnl_Project_TD_6623 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_6623.setup(tbl_Filter_TD_7744_output, tbl_Project_TD_6623_emptyBufferB, tbl_Project_TD_6623_output, cfg_Project_TD_6623_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_498;
    trans_Project_TD_498.setq(q_h);
    trans_Project_TD_498.add(&(cfg_Project_TD_498_cmds));
    trans_Project_TD_498.add(&(tbl_SerializeFromObject_TD_5835_input));
    transEngine trans_Project_TD_498_out;
    trans_Project_TD_498_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_6623;
    trans_Project_TD_6623.setq(q_h);
    trans_Project_TD_6623.add(&(cfg_Project_TD_6623_cmds));
    transEngine trans_Project_TD_6623_out;
    trans_Project_TD_6623_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_498;
    std::vector<cl::Event> events_d2h_rd_Project_TD_498;
    std::vector<cl::Event> events_Project_TD_498;
    events_h2d_wr_Project_TD_498.resize(1);
    events_d2h_rd_Project_TD_498.resize(1);
    events_Project_TD_498.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_498;
    std::vector<cl::Event> prev_events_grp_Project_TD_498;
    std::vector<cl::Event> events_h2d_wr_Project_TD_6623;
    std::vector<cl::Event> events_d2h_rd_Project_TD_6623;
    std::vector<cl::Event> events_Project_TD_6623;
    events_h2d_wr_Project_TD_6623.resize(1);
    events_d2h_rd_Project_TD_6623.resize(1);
    events_Project_TD_6623.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_6623;
    std::vector<cl::Event> prev_events_grp_Project_TD_6623;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_386_s, tv_r_Filter_7_386_e;
    gettimeofday(&tv_r_Filter_7_386_s, 0);
    SW_Filter_TD_7744(tbl_SerializeFromObject_TD_8542_input, tbl_Filter_TD_7744_output);
    gettimeofday(&tv_r_Filter_7_386_e, 0);

    struct timeval tv_r_Project_6_965_s, tv_r_Project_6_965_e;
    gettimeofday(&tv_r_Project_6_965_s, 0);
    trans_Project_TD_6623.add(&(tbl_Filter_TD_7744_output));
    trans_Project_TD_6623.host2dev(0, &(prev_events_grp_Project_TD_6623), &(events_h2d_wr_Project_TD_6623[0]));
    events_grp_Project_TD_6623.push_back(events_h2d_wr_Project_TD_6623[0]);
    krnl_Project_TD_6623.run(0, &(events_grp_Project_TD_6623), &(events_Project_TD_6623[0]));
    
    trans_Project_TD_6623_out.add(&(tbl_Project_TD_6623_output));
    trans_Project_TD_6623_out.dev2host(0, &(events_Project_TD_6623), &(events_d2h_rd_Project_TD_6623[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_6_965_e, 0);

    struct timeval tv_r_Aggregate_5_351_s, tv_r_Aggregate_5_351_e;
    gettimeofday(&tv_r_Aggregate_5_351_s, 0);
    SW_Aggregate_TD_51(tbl_Project_TD_6623_output, tbl_Aggregate_TD_51_output);
    gettimeofday(&tv_r_Aggregate_5_351_e, 0);

    struct timeval tv_r_Project_4_908_s, tv_r_Project_4_908_e;
    gettimeofday(&tv_r_Project_4_908_s, 0);
    trans_Project_TD_498.host2dev(0, &(prev_events_grp_Project_TD_498), &(events_h2d_wr_Project_TD_498[0]));
    events_grp_Project_TD_498.push_back(events_h2d_wr_Project_TD_498[0]);
    krnl_Project_TD_498.run(0, &(events_grp_Project_TD_498), &(events_Project_TD_498[0]));
    
    trans_Project_TD_498_out.add(&(tbl_Project_TD_498_output));
    trans_Project_TD_498_out.dev2host(0, &(events_Project_TD_498), &(events_d2h_rd_Project_TD_498[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_4_908_e, 0);

    struct timeval tv_r_Filter_4_478_s, tv_r_Filter_4_478_e;
    gettimeofday(&tv_r_Filter_4_478_s, 0);
    SW_Filter_TD_4676(tbl_SerializeFromObject_TD_5500_input, tbl_Aggregate_TD_51_output, tbl_Filter_TD_4676_output);
    gettimeofday(&tv_r_Filter_4_478_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_3_400_s, tv_r_JOIN_LEFTANTI_3_400_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_400_s, 0);
    SW_JOIN_LEFTANTI_TD_3883(tbl_Filter_TD_4676_output, tbl_Project_TD_498_output, tbl_JOIN_LEFTANTI_TD_3883_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_400_e, 0);

    struct timeval tv_r_Project_2_185_s, tv_r_Project_2_185_e;
    gettimeofday(&tv_r_Project_2_185_s, 0);
    SW_Project_TD_2116(tbl_JOIN_LEFTANTI_TD_3883_output, tbl_SerializeFromObject_TD_5500_input, tbl_Project_TD_2116_output);
    gettimeofday(&tv_r_Project_2_185_e, 0);

    struct timeval tv_r_Aggregate_1_590_s, tv_r_Aggregate_1_590_e;
    gettimeofday(&tv_r_Aggregate_1_590_s, 0);
    SW_Aggregate_TD_1234(tbl_Project_TD_2116_output, tbl_Aggregate_TD_1234_output);
    gettimeofday(&tv_r_Aggregate_1_590_e, 0);

    struct timeval tv_r_Sort_0_538_s, tv_r_Sort_0_538_e;
    gettimeofday(&tv_r_Sort_0_538_s, 0);
    SW_Sort_TD_0895(tbl_Aggregate_TD_1234_output, tbl_Sort_TD_0895_output);
    gettimeofday(&tv_r_Sort_0_538_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_386_s, &tv_r_Filter_7_386_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8542_input: " << tbl_SerializeFromObject_TD_8542_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_965_s, &tv_r_Project_6_965_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7744_output: " << tbl_Filter_TD_7744_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_351_s, &tv_r_Aggregate_5_351_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6623_output: " << tbl_Project_TD_6623_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_908_s, &tv_r_Project_4_908_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5835_input: " << tbl_SerializeFromObject_TD_5835_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_478_s, &tv_r_Filter_4_478_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5500_input: " << tbl_SerializeFromObject_TD_5500_input.getNumRow() << " " << "tbl_Aggregate_TD_51_output: " << tbl_Aggregate_TD_51_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_3: " << tvdiff(&tv_r_JOIN_LEFTANTI_3_400_s, &tv_r_JOIN_LEFTANTI_3_400_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4676_output: " << tbl_Filter_TD_4676_output.getNumRow() << " " << "tbl_Project_TD_498_output: " << tbl_Project_TD_498_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_185_s, &tv_r_Project_2_185_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_3883_output: " << tbl_JOIN_LEFTANTI_TD_3883_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_590_s, &tv_r_Aggregate_1_590_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2116_output: " << tbl_Project_TD_2116_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_538_s, &tv_r_Sort_0_538_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1234_output: " << tbl_Aggregate_TD_1234_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 7.3323326 * 1000 << "ms" << std::endl; 
    return 0; 
}
