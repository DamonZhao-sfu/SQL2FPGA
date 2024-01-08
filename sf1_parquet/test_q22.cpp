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
    Table tbl_Sort_TD_0123_output("tbl_Sort_TD_0123_output", 6100000, 3, "");
    tbl_Sort_TD_0123_output.allocateHost();
    Table tbl_Aggregate_TD_156_output("tbl_Aggregate_TD_156_output", 6100000, 3, "");
    tbl_Aggregate_TD_156_output.allocateHost();
    Table tbl_Project_TD_2279_output("tbl_Project_TD_2279_output", 6100000, 2, "");
    tbl_Project_TD_2279_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3448_output("tbl_JOIN_LEFTANTI_TD_3448_output", 6100000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3448_output.allocateHost();
    Table tbl_Filter_TD_4417_output("tbl_Filter_TD_4417_output", 6100000, 3, "");
    tbl_Filter_TD_4417_output.allocateHost();
    Table tbl_Project_TD_4584_output("tbl_Project_TD_4584_output", -1, 1, "");
    tbl_Project_TD_4584_output.allocateHost();
    Table tbl_Project_TD_4584_emptyBufferB("tbl_Project_TD_4584_emptyBufferB", 1, 8, "");
    tbl_Project_TD_4584_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_5204_input;
    tbl_SerializeFromObject_TD_5204_input = Table("customer", customer_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5204_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_5204_input.addCol("c_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_5204_input.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_5204_input.allocateHost();
    tbl_SerializeFromObject_TD_5204_input.loadHost();
    Table tbl_Aggregate_TD_5369_output("tbl_Aggregate_TD_5369_output", 6100000, 1, "");
    tbl_Aggregate_TD_5369_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5311_input;
    tbl_SerializeFromObject_TD_5311_input = Table("orders", orders_n, 1, in_dir);
    tbl_SerializeFromObject_TD_5311_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_5311_input.allocateHost();
    tbl_SerializeFromObject_TD_5311_input.loadHost();
    Table tbl_Project_TD_6531_output("tbl_Project_TD_6531_output", -1, 1, "");
    tbl_Project_TD_6531_output.allocateHost();
    Table tbl_Project_TD_6531_emptyBufferB("tbl_Project_TD_6531_emptyBufferB", 1, 8, "");
    tbl_Project_TD_6531_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_7516_output("tbl_Filter_TD_7516_output", 6100000, 1, "");
    tbl_Filter_TD_7516_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8248_input;
    tbl_SerializeFromObject_TD_8248_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_8248_input.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_8248_input.addCol("c_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_8248_input.allocateHost();
    tbl_SerializeFromObject_TD_8248_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_4584_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4584_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5311_input.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6531_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6531_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7516_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_4584_cmds;
    cfg_Project_TD_4584_cmds.allocateHost();
    get_cfg_dat_Project_TD_4584_gqe_join (cfg_Project_TD_4584_cmds.cmd);
    cfg_Project_TD_4584_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_6531_cmds;
    cfg_Project_TD_6531_cmds.allocateHost();
    get_cfg_dat_Project_TD_6531_gqe_join (cfg_Project_TD_6531_cmds.cmd);
    cfg_Project_TD_6531_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_4584;
    krnl_Project_TD_4584 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_4584.setup(tbl_SerializeFromObject_TD_5311_input, tbl_Project_TD_4584_emptyBufferB, tbl_Project_TD_4584_output, cfg_Project_TD_4584_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_6531;
    krnl_Project_TD_6531 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_6531.setup(tbl_Filter_TD_7516_output, tbl_Project_TD_6531_emptyBufferB, tbl_Project_TD_6531_output, cfg_Project_TD_6531_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_4584;
    trans_Project_TD_4584.setq(q_h);
    trans_Project_TD_4584.add(&(cfg_Project_TD_4584_cmds));
    trans_Project_TD_4584.add(&(tbl_SerializeFromObject_TD_5311_input));
    transEngine trans_Project_TD_4584_out;
    trans_Project_TD_4584_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_6531;
    trans_Project_TD_6531.setq(q_h);
    trans_Project_TD_6531.add(&(cfg_Project_TD_6531_cmds));
    transEngine trans_Project_TD_6531_out;
    trans_Project_TD_6531_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_4584;
    std::vector<cl::Event> events_d2h_rd_Project_TD_4584;
    std::vector<cl::Event> events_Project_TD_4584;
    events_h2d_wr_Project_TD_4584.resize(1);
    events_d2h_rd_Project_TD_4584.resize(1);
    events_Project_TD_4584.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_4584;
    std::vector<cl::Event> prev_events_grp_Project_TD_4584;
    std::vector<cl::Event> events_h2d_wr_Project_TD_6531;
    std::vector<cl::Event> events_d2h_rd_Project_TD_6531;
    std::vector<cl::Event> events_Project_TD_6531;
    events_h2d_wr_Project_TD_6531.resize(1);
    events_d2h_rd_Project_TD_6531.resize(1);
    events_Project_TD_6531.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_6531;
    std::vector<cl::Event> prev_events_grp_Project_TD_6531;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_68_s, tv_r_Filter_7_68_e;
    gettimeofday(&tv_r_Filter_7_68_s, 0);
    SW_Filter_TD_7516(tbl_SerializeFromObject_TD_8248_input, tbl_Filter_TD_7516_output);
    gettimeofday(&tv_r_Filter_7_68_e, 0);

    struct timeval tv_r_Project_6_49_s, tv_r_Project_6_49_e;
    gettimeofday(&tv_r_Project_6_49_s, 0);
    trans_Project_TD_6531.add(&(tbl_Filter_TD_7516_output));
    trans_Project_TD_6531.host2dev(0, &(prev_events_grp_Project_TD_6531), &(events_h2d_wr_Project_TD_6531[0]));
    events_grp_Project_TD_6531.push_back(events_h2d_wr_Project_TD_6531[0]);
    krnl_Project_TD_6531.run(0, &(events_grp_Project_TD_6531), &(events_Project_TD_6531[0]));
    
    trans_Project_TD_6531_out.add(&(tbl_Project_TD_6531_output));
    trans_Project_TD_6531_out.dev2host(0, &(events_Project_TD_6531), &(events_d2h_rd_Project_TD_6531[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_6_49_e, 0);

    struct timeval tv_r_Aggregate_5_231_s, tv_r_Aggregate_5_231_e;
    gettimeofday(&tv_r_Aggregate_5_231_s, 0);
    SW_Aggregate_TD_5369(tbl_Project_TD_6531_output, tbl_Aggregate_TD_5369_output);
    gettimeofday(&tv_r_Aggregate_5_231_e, 0);

    struct timeval tv_r_Project_4_653_s, tv_r_Project_4_653_e;
    gettimeofday(&tv_r_Project_4_653_s, 0);
    trans_Project_TD_4584.host2dev(0, &(prev_events_grp_Project_TD_4584), &(events_h2d_wr_Project_TD_4584[0]));
    events_grp_Project_TD_4584.push_back(events_h2d_wr_Project_TD_4584[0]);
    krnl_Project_TD_4584.run(0, &(events_grp_Project_TD_4584), &(events_Project_TD_4584[0]));
    
    trans_Project_TD_4584_out.add(&(tbl_Project_TD_4584_output));
    trans_Project_TD_4584_out.dev2host(0, &(events_Project_TD_4584), &(events_d2h_rd_Project_TD_4584[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_4_653_e, 0);

    struct timeval tv_r_Filter_4_468_s, tv_r_Filter_4_468_e;
    gettimeofday(&tv_r_Filter_4_468_s, 0);
    SW_Filter_TD_4417(tbl_SerializeFromObject_TD_5204_input, tbl_Aggregate_TD_5369_output, tbl_Filter_TD_4417_output);
    gettimeofday(&tv_r_Filter_4_468_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_3_909_s, tv_r_JOIN_LEFTANTI_3_909_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_909_s, 0);
    SW_JOIN_LEFTANTI_TD_3448(tbl_Filter_TD_4417_output, tbl_Project_TD_4584_output, tbl_JOIN_LEFTANTI_TD_3448_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_909_e, 0);

    struct timeval tv_r_Project_2_936_s, tv_r_Project_2_936_e;
    gettimeofday(&tv_r_Project_2_936_s, 0);
    SW_Project_TD_2279(tbl_JOIN_LEFTANTI_TD_3448_output, tbl_SerializeFromObject_TD_5204_input, tbl_Project_TD_2279_output);
    gettimeofday(&tv_r_Project_2_936_e, 0);

    struct timeval tv_r_Aggregate_1_908_s, tv_r_Aggregate_1_908_e;
    gettimeofday(&tv_r_Aggregate_1_908_s, 0);
    SW_Aggregate_TD_156(tbl_Project_TD_2279_output, tbl_Aggregate_TD_156_output);
    gettimeofday(&tv_r_Aggregate_1_908_e, 0);

    struct timeval tv_r_Sort_0_259_s, tv_r_Sort_0_259_e;
    gettimeofday(&tv_r_Sort_0_259_s, 0);
    SW_Sort_TD_0123(tbl_Aggregate_TD_156_output, tbl_Sort_TD_0123_output);
    gettimeofday(&tv_r_Sort_0_259_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_68_s, &tv_r_Filter_7_68_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8248_input: " << tbl_SerializeFromObject_TD_8248_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_49_s, &tv_r_Project_6_49_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7516_output: " << tbl_Filter_TD_7516_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_231_s, &tv_r_Aggregate_5_231_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6531_output: " << tbl_Project_TD_6531_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_653_s, &tv_r_Project_4_653_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5311_input: " << tbl_SerializeFromObject_TD_5311_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_468_s, &tv_r_Filter_4_468_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5204_input: " << tbl_SerializeFromObject_TD_5204_input.getNumRow() << " " << "tbl_Aggregate_TD_5369_output: " << tbl_Aggregate_TD_5369_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_3: " << tvdiff(&tv_r_JOIN_LEFTANTI_3_909_s, &tv_r_JOIN_LEFTANTI_3_909_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4417_output: " << tbl_Filter_TD_4417_output.getNumRow() << " " << "tbl_Project_TD_4584_output: " << tbl_Project_TD_4584_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_936_s, &tv_r_Project_2_936_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_3448_output: " << tbl_JOIN_LEFTANTI_TD_3448_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_908_s, &tv_r_Aggregate_1_908_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2279_output: " << tbl_Project_TD_2279_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_259_s, &tv_r_Sort_0_259_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_156_output: " << tbl_Aggregate_TD_156_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.1117952 * 1000 << "ms" << std::endl; 
    return 0; 
}
