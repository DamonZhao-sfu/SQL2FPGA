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
    Table tbl_Sort_TD_0751_output("tbl_Sort_TD_0751_output", 6100000, 4, "");
    tbl_Sort_TD_0751_output.allocateHost();
    Table tbl_Aggregate_TD_1732_output("tbl_Aggregate_TD_1732_output", 6100000, 4, "");
    tbl_Aggregate_TD_1732_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2307_output("tbl_JOIN_INNER_TD_2307_output", 120789, 4, "");
    tbl_JOIN_INNER_TD_2307_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_4381_output("tbl_JOIN_LEFTANTI_TD_4381_output", 6100000, 2, "");
    tbl_JOIN_LEFTANTI_TD_4381_output.allocateHost();
    Table tbl_Filter_TD_4285_output("tbl_Filter_TD_4285_output", 6100000, 4, "");
    tbl_Filter_TD_4285_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6831_input;
    tbl_SerializeFromObject_TD_6831_input = Table("partsupp", partsupp_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6831_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_6831_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_6831_input.allocateHost();
    tbl_SerializeFromObject_TD_6831_input.loadHost();
    Table tbl_Project_TD_5445_output("tbl_Project_TD_5445_output", -1, 1, "");
    tbl_Project_TD_5445_output.allocateHost();
    Table tbl_Project_TD_5445_emptyBufferB("tbl_Project_TD_5445_emptyBufferB", 1, 8, "");
    tbl_Project_TD_5445_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_5998_input;
    tbl_SerializeFromObject_TD_5998_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5998_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_5998_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_5998_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_5998_input.addCol("p_brand", TPCH_READ_P_BRND_LEN+1);
    tbl_SerializeFromObject_TD_5998_input.allocateHost();
    tbl_SerializeFromObject_TD_5998_input.loadHost();
    Table tbl_Filter_TD_6869_output("tbl_Filter_TD_6869_output", 6100000, 1, "");
    tbl_Filter_TD_6869_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7953_input;
    tbl_SerializeFromObject_TD_7953_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7953_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7953_input.addCol("s_comment", TPCH_READ_S_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_7953_input.allocateHost();
    tbl_SerializeFromObject_TD_7953_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2307_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTANTI_TD_4381_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4285_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5445_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5445_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6869_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2307_cmds;
    cfg_JOIN_INNER_TD_2307_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2307_gqe_join (cfg_JOIN_INNER_TD_2307_cmds.cmd);
    cfg_JOIN_INNER_TD_2307_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_5445_cmds;
    cfg_Project_TD_5445_cmds.allocateHost();
    get_cfg_dat_Project_TD_5445_gqe_join (cfg_Project_TD_5445_cmds.cmd);
    cfg_Project_TD_5445_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2307;
    krnl_JOIN_INNER_TD_2307 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2307.setup(tbl_Filter_TD_4285_output, tbl_JOIN_LEFTANTI_TD_4381_output, tbl_JOIN_INNER_TD_2307_output, cfg_JOIN_INNER_TD_2307_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_5445;
    krnl_Project_TD_5445 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_5445.setup(tbl_Filter_TD_6869_output, tbl_Project_TD_5445_emptyBufferB, tbl_Project_TD_5445_output, cfg_Project_TD_5445_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2307;
    trans_JOIN_INNER_TD_2307.setq(q_h);
    trans_JOIN_INNER_TD_2307.add(&(cfg_JOIN_INNER_TD_2307_cmds));
    transEngine trans_JOIN_INNER_TD_2307_out;
    trans_JOIN_INNER_TD_2307_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_5445;
    trans_Project_TD_5445.setq(q_h);
    trans_Project_TD_5445.add(&(cfg_Project_TD_5445_cmds));
    transEngine trans_Project_TD_5445_out;
    trans_Project_TD_5445_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2307;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2307;
    std::vector<cl::Event> events_JOIN_INNER_TD_2307;
    events_h2d_wr_JOIN_INNER_TD_2307.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2307.resize(1);
    events_JOIN_INNER_TD_2307.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2307;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2307;
    std::vector<cl::Event> events_h2d_wr_Project_TD_5445;
    std::vector<cl::Event> events_d2h_rd_Project_TD_5445;
    std::vector<cl::Event> events_Project_TD_5445;
    events_h2d_wr_Project_TD_5445.resize(1);
    events_d2h_rd_Project_TD_5445.resize(1);
    events_Project_TD_5445.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_5445;
    std::vector<cl::Event> prev_events_grp_Project_TD_5445;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_891_s, tv_r_Filter_6_891_e;
    gettimeofday(&tv_r_Filter_6_891_s, 0);
    SW_Filter_TD_6869(tbl_SerializeFromObject_TD_7953_input, tbl_Filter_TD_6869_output);
    gettimeofday(&tv_r_Filter_6_891_e, 0);

    struct timeval tv_r_Project_5_352_s, tv_r_Project_5_352_e;
    gettimeofday(&tv_r_Project_5_352_s, 0);
    trans_Project_TD_5445.add(&(tbl_Filter_TD_6869_output));
    trans_Project_TD_5445.host2dev(0, &(prev_events_grp_Project_TD_5445), &(events_h2d_wr_Project_TD_5445[0]));
    events_grp_Project_TD_5445.push_back(events_h2d_wr_Project_TD_5445[0]);
    krnl_Project_TD_5445.run(0, &(events_grp_Project_TD_5445), &(events_Project_TD_5445[0]));
    
    trans_Project_TD_5445_out.add(&(tbl_Project_TD_5445_output));
    trans_Project_TD_5445_out.dev2host(0, &(events_Project_TD_5445), &(events_d2h_rd_Project_TD_5445[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_5_352_e, 0);

    struct timeval tv_r_Filter_4_146_s, tv_r_Filter_4_146_e;
    gettimeofday(&tv_r_Filter_4_146_s, 0);
    SW_Filter_TD_4285(tbl_SerializeFromObject_TD_5998_input, tbl_Filter_TD_4285_output);
    gettimeofday(&tv_r_Filter_4_146_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_4_223_s, tv_r_JOIN_LEFTANTI_4_223_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_223_s, 0);
    SW_JOIN_LEFTANTI_TD_4381(tbl_SerializeFromObject_TD_6831_input, tbl_Project_TD_5445_output, tbl_JOIN_LEFTANTI_TD_4381_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_223_e, 0);

    struct timeval tv_r_JOIN_INNER_2_109_s, tv_r_JOIN_INNER_2_109_e;
    gettimeofday(&tv_r_JOIN_INNER_2_109_s, 0);
    trans_JOIN_INNER_TD_2307.add(&(tbl_JOIN_LEFTANTI_TD_4381_output));
    trans_JOIN_INNER_TD_2307.add(&(tbl_Filter_TD_4285_output));
    trans_JOIN_INNER_TD_2307.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2307), &(events_h2d_wr_JOIN_INNER_TD_2307[0]));
    events_grp_JOIN_INNER_TD_2307.push_back(events_h2d_wr_JOIN_INNER_TD_2307[0]);
    krnl_JOIN_INNER_TD_2307.run(0, &(events_grp_JOIN_INNER_TD_2307), &(events_JOIN_INNER_TD_2307[0]));
    
    trans_JOIN_INNER_TD_2307_out.add(&(tbl_JOIN_INNER_TD_2307_output));
    trans_JOIN_INNER_TD_2307_out.dev2host(0, &(events_JOIN_INNER_TD_2307), &(events_d2h_rd_JOIN_INNER_TD_2307[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_109_e, 0);

    struct timeval tv_r_Aggregate_1_428_s, tv_r_Aggregate_1_428_e;
    gettimeofday(&tv_r_Aggregate_1_428_s, 0);
    SW_Aggregate_TD_1732(tbl_JOIN_INNER_TD_2307_output, tbl_SerializeFromObject_TD_5998_input, tbl_Aggregate_TD_1732_output);
    gettimeofday(&tv_r_Aggregate_1_428_e, 0);

    struct timeval tv_r_Sort_0_904_s, tv_r_Sort_0_904_e;
    gettimeofday(&tv_r_Sort_0_904_s, 0);
    SW_Sort_TD_0751(tbl_Aggregate_TD_1732_output, tbl_Sort_TD_0751_output);
    gettimeofday(&tv_r_Sort_0_904_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_891_s, &tv_r_Filter_6_891_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7953_input: " << tbl_SerializeFromObject_TD_7953_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_352_s, &tv_r_Project_5_352_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6869_output: " << tbl_Filter_TD_6869_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_146_s, &tv_r_Filter_4_146_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5998_input: " << tbl_SerializeFromObject_TD_5998_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_4: " << tvdiff(&tv_r_JOIN_LEFTANTI_4_223_s, &tv_r_JOIN_LEFTANTI_4_223_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6831_input: " << tbl_SerializeFromObject_TD_6831_input.getNumRow() << " " << "tbl_Project_TD_5445_output: " << tbl_Project_TD_5445_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_109_s, &tv_r_JOIN_INNER_2_109_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_4381_output: " << tbl_JOIN_LEFTANTI_TD_4381_output.getNumRow() << " " << "tbl_Filter_TD_4285_output: " << tbl_Filter_TD_4285_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_428_s, &tv_r_Aggregate_1_428_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2307_output: " << tbl_JOIN_INNER_TD_2307_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_904_s, &tv_r_Sort_0_904_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1732_output: " << tbl_Aggregate_TD_1732_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.70936316 * 1000 << "ms" << std::endl; 
    return 0; 
}
