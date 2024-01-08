// number of overlays (w/o fusion): 4 
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

#include "cfgFunc_q16.hpp" 
#include "q16.hpp" 

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
    std::cout << "NOTE:running query #16\n."; 
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
    Table tbl_Sort_TD_0654_output("tbl_Sort_TD_0654_output", 6100000, 4, "");
    tbl_Sort_TD_0654_output.allocateHost();
    Table tbl_Aggregate_TD_1995_output("tbl_Aggregate_TD_1995_output", 6100000, 4, "");
    tbl_Aggregate_TD_1995_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2848_output("tbl_JOIN_INNER_TD_2848_output", 120789, 4, "");
    tbl_JOIN_INNER_TD_2848_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_4144_output("tbl_JOIN_LEFTANTI_TD_4144_output", 6100000, 2, "");
    tbl_JOIN_LEFTANTI_TD_4144_output.allocateHost();
    Table tbl_Filter_TD_4577_output("tbl_Filter_TD_4577_output", 6100000, 4, "");
    tbl_Filter_TD_4577_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6247_input;
    tbl_SerializeFromObject_TD_6247_input = Table("partsupp", partsupp_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6247_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_6247_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_6247_input.allocateHost();
    tbl_SerializeFromObject_TD_6247_input.loadHost();
    Table tbl_Project_TD_5464_output("tbl_Project_TD_5464_output", -1, 1, "");
    tbl_Project_TD_5464_output.allocateHost();
    Table tbl_Project_TD_5464_emptyBufferB("tbl_Project_TD_5464_emptyBufferB", 1, 8, "");
    tbl_Project_TD_5464_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_5827_input;
    tbl_SerializeFromObject_TD_5827_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5827_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_5827_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_5827_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_5827_input.addCol("p_brand", TPCH_READ_P_BRND_LEN+1);
    tbl_SerializeFromObject_TD_5827_input.allocateHost();
    tbl_SerializeFromObject_TD_5827_input.loadHost();
    Table tbl_Filter_TD_6250_output("tbl_Filter_TD_6250_output", 6100000, 1, "");
    tbl_Filter_TD_6250_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7328_input;
    tbl_SerializeFromObject_TD_7328_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7328_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7328_input.addCol("s_comment", TPCH_READ_S_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_7328_input.allocateHost();
    tbl_SerializeFromObject_TD_7328_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2848_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTANTI_TD_4144_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4577_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5464_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5464_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6250_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2848_cmds;
    cfg_JOIN_INNER_TD_2848_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2848_gqe_join (cfg_JOIN_INNER_TD_2848_cmds.cmd);
    cfg_JOIN_INNER_TD_2848_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_5464_cmds;
    cfg_Project_TD_5464_cmds.allocateHost();
    get_cfg_dat_Project_TD_5464_gqe_join (cfg_Project_TD_5464_cmds.cmd);
    cfg_Project_TD_5464_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2848;
    krnl_JOIN_INNER_TD_2848 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2848.setup(tbl_Filter_TD_4577_output, tbl_JOIN_LEFTANTI_TD_4144_output, tbl_JOIN_INNER_TD_2848_output, cfg_JOIN_INNER_TD_2848_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_5464;
    krnl_Project_TD_5464 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_5464.setup(tbl_Filter_TD_6250_output, tbl_Project_TD_5464_emptyBufferB, tbl_Project_TD_5464_output, cfg_Project_TD_5464_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2848;
    trans_JOIN_INNER_TD_2848.setq(q_h);
    trans_JOIN_INNER_TD_2848.add(&(cfg_JOIN_INNER_TD_2848_cmds));
    transEngine trans_JOIN_INNER_TD_2848_out;
    trans_JOIN_INNER_TD_2848_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_5464;
    trans_Project_TD_5464.setq(q_h);
    trans_Project_TD_5464.add(&(cfg_Project_TD_5464_cmds));
    transEngine trans_Project_TD_5464_out;
    trans_Project_TD_5464_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2848;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2848;
    std::vector<cl::Event> events_JOIN_INNER_TD_2848;
    events_h2d_wr_JOIN_INNER_TD_2848.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2848.resize(1);
    events_JOIN_INNER_TD_2848.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2848;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2848;
    std::vector<cl::Event> events_h2d_wr_Project_TD_5464;
    std::vector<cl::Event> events_d2h_rd_Project_TD_5464;
    std::vector<cl::Event> events_Project_TD_5464;
    events_h2d_wr_Project_TD_5464.resize(1);
    events_d2h_rd_Project_TD_5464.resize(1);
    events_Project_TD_5464.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_5464;
    std::vector<cl::Event> prev_events_grp_Project_TD_5464;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_82_s, tv_r_Filter_6_82_e;
    gettimeofday(&tv_r_Filter_6_82_s, 0);
    SW_Filter_TD_6250(tbl_SerializeFromObject_TD_7328_input, tbl_Filter_TD_6250_output);
    gettimeofday(&tv_r_Filter_6_82_e, 0);

    struct timeval tv_r_Project_5_172_s, tv_r_Project_5_172_e;
    gettimeofday(&tv_r_Project_5_172_s, 0);
    trans_Project_TD_5464.add(&(tbl_Filter_TD_6250_output));
    trans_Project_TD_5464.host2dev(0, &(prev_events_grp_Project_TD_5464), &(events_h2d_wr_Project_TD_5464[0]));
    events_grp_Project_TD_5464.push_back(events_h2d_wr_Project_TD_5464[0]);
    krnl_Project_TD_5464.run(0, &(events_grp_Project_TD_5464), &(events_Project_TD_5464[0]));
    
    trans_Project_TD_5464_out.add(&(tbl_Project_TD_5464_output));
    trans_Project_TD_5464_out.dev2host(0, &(events_Project_TD_5464), &(events_d2h_rd_Project_TD_5464[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_5_172_e, 0);

    struct timeval tv_r_Filter_4_158_s, tv_r_Filter_4_158_e;
    gettimeofday(&tv_r_Filter_4_158_s, 0);
    SW_Filter_TD_4577(tbl_SerializeFromObject_TD_5827_input, tbl_Filter_TD_4577_output);
    gettimeofday(&tv_r_Filter_4_158_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_4_31_s, tv_r_JOIN_LEFTANTI_4_31_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_31_s, 0);
    SW_JOIN_LEFTANTI_TD_4144(tbl_SerializeFromObject_TD_6247_input, tbl_Project_TD_5464_output, tbl_JOIN_LEFTANTI_TD_4144_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_31_e, 0);

    struct timeval tv_r_JOIN_INNER_2_193_s, tv_r_JOIN_INNER_2_193_e;
    gettimeofday(&tv_r_JOIN_INNER_2_193_s, 0);
    trans_JOIN_INNER_TD_2848.add(&(tbl_JOIN_LEFTANTI_TD_4144_output));
    trans_JOIN_INNER_TD_2848.add(&(tbl_Filter_TD_4577_output));
    trans_JOIN_INNER_TD_2848.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2848), &(events_h2d_wr_JOIN_INNER_TD_2848[0]));
    events_grp_JOIN_INNER_TD_2848.push_back(events_h2d_wr_JOIN_INNER_TD_2848[0]);
    krnl_JOIN_INNER_TD_2848.run(0, &(events_grp_JOIN_INNER_TD_2848), &(events_JOIN_INNER_TD_2848[0]));
    
    trans_JOIN_INNER_TD_2848_out.add(&(tbl_JOIN_INNER_TD_2848_output));
    trans_JOIN_INNER_TD_2848_out.dev2host(0, &(events_JOIN_INNER_TD_2848), &(events_d2h_rd_JOIN_INNER_TD_2848[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_193_e, 0);

    struct timeval tv_r_Aggregate_1_394_s, tv_r_Aggregate_1_394_e;
    gettimeofday(&tv_r_Aggregate_1_394_s, 0);
    SW_Aggregate_TD_1995(tbl_JOIN_INNER_TD_2848_output, tbl_SerializeFromObject_TD_5827_input, tbl_Aggregate_TD_1995_output);
    gettimeofday(&tv_r_Aggregate_1_394_e, 0);

    struct timeval tv_r_Sort_0_436_s, tv_r_Sort_0_436_e;
    gettimeofday(&tv_r_Sort_0_436_s, 0);
    SW_Sort_TD_0654(tbl_Aggregate_TD_1995_output, tbl_Sort_TD_0654_output);
    gettimeofday(&tv_r_Sort_0_436_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_82_s, &tv_r_Filter_6_82_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7328_input: " << tbl_SerializeFromObject_TD_7328_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_172_s, &tv_r_Project_5_172_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6250_output: " << tbl_Filter_TD_6250_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_158_s, &tv_r_Filter_4_158_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5827_input: " << tbl_SerializeFromObject_TD_5827_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_4: " << tvdiff(&tv_r_JOIN_LEFTANTI_4_31_s, &tv_r_JOIN_LEFTANTI_4_31_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6247_input: " << tbl_SerializeFromObject_TD_6247_input.getNumRow() << " " << "tbl_Project_TD_5464_output: " << tbl_Project_TD_5464_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_193_s, &tv_r_JOIN_INNER_2_193_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_4144_output: " << tbl_JOIN_LEFTANTI_TD_4144_output.getNumRow() << " " << "tbl_Filter_TD_4577_output: " << tbl_Filter_TD_4577_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_394_s, &tv_r_Aggregate_1_394_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2848_output: " << tbl_JOIN_INNER_TD_2848_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_436_s, &tv_r_Sort_0_436_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1995_output: " << tbl_Aggregate_TD_1995_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.5850115 * 1000 << "ms" << std::endl; 
    return 0; 
}
