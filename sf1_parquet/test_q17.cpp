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

#include "cfgFunc_q17.hpp" 
#include "q17.hpp" 

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
    std::cout << "NOTE:running query #17\n."; 
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
    Table tbl_Aggregate_TD_0868_output("tbl_Aggregate_TD_0868_output", 6100000, 1, "");
    tbl_Aggregate_TD_0868_output.allocateHost();
    Table tbl_JOIN_INNER_TD_137_output("tbl_JOIN_INNER_TD_137_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_137_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2929_output("tbl_JOIN_INNER_TD_2929_output", 1507, 3, "");
    tbl_JOIN_INNER_TD_2929_output.allocateHost();
    Table tbl_Aggregate_TD_3415_output("tbl_Aggregate_TD_3415_output", 6100000, 2, "");
    tbl_Aggregate_TD_3415_output.allocateHost();
    Table tbl_SerializeFromObject_TD_596_input;
    tbl_SerializeFromObject_TD_596_input = Table("lineitem", lineitem_n, 3, in_dir);
    tbl_SerializeFromObject_TD_596_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_596_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_596_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_596_input.allocateHost();
    tbl_SerializeFromObject_TD_596_input.loadHost();
    Table tbl_Filter_TD_4365_output("tbl_Filter_TD_4365_output", 6100000, 1, "");
    tbl_Filter_TD_4365_output.allocateHost();
    Table tbl_Project_TD_4323_output("tbl_Project_TD_4323_output", -1, 2, "");
    tbl_Project_TD_4323_output.allocateHost();
    Table tbl_Project_TD_4323_emptyBufferB("tbl_Project_TD_4323_emptyBufferB", 1, 8, "");
    tbl_Project_TD_4323_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_5346_input;
    tbl_SerializeFromObject_TD_5346_input = Table("part", part_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5346_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_5346_input.addCol("p_brand", TPCH_READ_P_BRND_LEN+1);
    tbl_SerializeFromObject_TD_5346_input.addCol("p_container", TPCH_READ_P_CNTR_LEN+1);
    tbl_SerializeFromObject_TD_5346_input.allocateHost();
    tbl_SerializeFromObject_TD_5346_input.loadHost();
    Table tbl_SerializeFromObject_TD_626_input;
    tbl_SerializeFromObject_TD_626_input = Table("lineitem", lineitem_n, 2, in_dir);
    tbl_SerializeFromObject_TD_626_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_626_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_626_input.allocateHost();
    tbl_SerializeFromObject_TD_626_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2929_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_596_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4365_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4323_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4323_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_626_input.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2929_cmds;
    cfg_JOIN_INNER_TD_2929_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2929_gqe_join (cfg_JOIN_INNER_TD_2929_cmds.cmd);
    cfg_JOIN_INNER_TD_2929_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_4323_cmds;
    cfg_Project_TD_4323_cmds.allocateHost();
    get_cfg_dat_Project_TD_4323_gqe_join (cfg_Project_TD_4323_cmds.cmd);
    cfg_Project_TD_4323_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2929;
    krnl_JOIN_INNER_TD_2929 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2929.setup(tbl_Filter_TD_4365_output, tbl_SerializeFromObject_TD_596_input, tbl_JOIN_INNER_TD_2929_output, cfg_JOIN_INNER_TD_2929_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_4323;
    krnl_Project_TD_4323 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_4323.setup(tbl_SerializeFromObject_TD_626_input, tbl_Project_TD_4323_emptyBufferB, tbl_Project_TD_4323_output, cfg_Project_TD_4323_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2929;
    trans_JOIN_INNER_TD_2929.setq(q_h);
    trans_JOIN_INNER_TD_2929.add(&(cfg_JOIN_INNER_TD_2929_cmds));
    trans_JOIN_INNER_TD_2929.add(&(tbl_SerializeFromObject_TD_596_input));
    transEngine trans_JOIN_INNER_TD_2929_out;
    trans_JOIN_INNER_TD_2929_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_4323;
    trans_Project_TD_4323.setq(q_h);
    trans_Project_TD_4323.add(&(cfg_Project_TD_4323_cmds));
    trans_Project_TD_4323.add(&(tbl_SerializeFromObject_TD_626_input));
    transEngine trans_Project_TD_4323_out;
    trans_Project_TD_4323_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2929;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2929;
    std::vector<cl::Event> events_JOIN_INNER_TD_2929;
    events_h2d_wr_JOIN_INNER_TD_2929.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2929.resize(1);
    events_JOIN_INNER_TD_2929.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2929;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2929;
    std::vector<cl::Event> events_h2d_wr_Project_TD_4323;
    std::vector<cl::Event> events_d2h_rd_Project_TD_4323;
    std::vector<cl::Event> events_Project_TD_4323;
    events_h2d_wr_Project_TD_4323.resize(1);
    events_d2h_rd_Project_TD_4323.resize(1);
    events_Project_TD_4323.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_4323;
    std::vector<cl::Event> prev_events_grp_Project_TD_4323;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Project_4_350_s, tv_r_Project_4_350_e;
    gettimeofday(&tv_r_Project_4_350_s, 0);
    trans_Project_TD_4323.host2dev(0, &(prev_events_grp_Project_TD_4323), &(events_h2d_wr_Project_TD_4323[0]));
    events_grp_Project_TD_4323.push_back(events_h2d_wr_Project_TD_4323[0]);
    krnl_Project_TD_4323.run(0, &(events_grp_Project_TD_4323), &(events_Project_TD_4323[0]));
    
    trans_Project_TD_4323_out.add(&(tbl_Project_TD_4323_output));
    trans_Project_TD_4323_out.dev2host(0, &(events_Project_TD_4323), &(events_d2h_rd_Project_TD_4323[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_4_350_e, 0);

    struct timeval tv_r_Filter_4_622_s, tv_r_Filter_4_622_e;
    gettimeofday(&tv_r_Filter_4_622_s, 0);
    SW_Filter_TD_4365(tbl_SerializeFromObject_TD_5346_input, tbl_Filter_TD_4365_output);
    gettimeofday(&tv_r_Filter_4_622_e, 0);

    struct timeval tv_r_Aggregate_3_517_s, tv_r_Aggregate_3_517_e;
    gettimeofday(&tv_r_Aggregate_3_517_s, 0);
    SW_Aggregate_TD_3415(tbl_Project_TD_4323_output, tbl_Aggregate_TD_3415_output);
    gettimeofday(&tv_r_Aggregate_3_517_e, 0);

    struct timeval tv_r_JOIN_INNER_2_259_s, tv_r_JOIN_INNER_2_259_e;
    gettimeofday(&tv_r_JOIN_INNER_2_259_s, 0);
    trans_JOIN_INNER_TD_2929.add(&(tbl_Filter_TD_4365_output));
    trans_JOIN_INNER_TD_2929.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2929), &(events_h2d_wr_JOIN_INNER_TD_2929[0]));
    events_grp_JOIN_INNER_TD_2929.push_back(events_h2d_wr_JOIN_INNER_TD_2929[0]);
    krnl_JOIN_INNER_TD_2929.run(0, &(events_grp_JOIN_INNER_TD_2929), &(events_JOIN_INNER_TD_2929[0]));
    
    trans_JOIN_INNER_TD_2929_out.add(&(tbl_JOIN_INNER_TD_2929_output));
    trans_JOIN_INNER_TD_2929_out.dev2host(0, &(events_JOIN_INNER_TD_2929), &(events_d2h_rd_JOIN_INNER_TD_2929[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_259_e, 0);

    struct timeval tv_r_JOIN_INNER_1_220_s, tv_r_JOIN_INNER_1_220_e;
    gettimeofday(&tv_r_JOIN_INNER_1_220_s, 0);
    SW_JOIN_INNER_TD_137(tbl_JOIN_INNER_TD_2929_output, tbl_Aggregate_TD_3415_output, tbl_JOIN_INNER_TD_137_output);
    gettimeofday(&tv_r_JOIN_INNER_1_220_e, 0);

    struct timeval tv_r_Aggregate_0_335_s, tv_r_Aggregate_0_335_e;
    gettimeofday(&tv_r_Aggregate_0_335_s, 0);
    SW_Aggregate_TD_0868(tbl_JOIN_INNER_TD_137_output, tbl_Aggregate_TD_0868_output);
    gettimeofday(&tv_r_Aggregate_0_335_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_350_s, &tv_r_Project_4_350_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_626_input: " << tbl_SerializeFromObject_TD_626_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_622_s, &tv_r_Filter_4_622_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5346_input: " << tbl_SerializeFromObject_TD_5346_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_517_s, &tv_r_Aggregate_3_517_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4323_output: " << tbl_Project_TD_4323_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_259_s, &tv_r_JOIN_INNER_2_259_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_596_input: " << tbl_SerializeFromObject_TD_596_input.getNumRow() << " " << "tbl_Filter_TD_4365_output: " << tbl_Filter_TD_4365_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_220_s, &tv_r_JOIN_INNER_1_220_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2929_output: " << tbl_JOIN_INNER_TD_2929_output.getNumRow() << " " << "tbl_Aggregate_TD_3415_output: " << tbl_Aggregate_TD_3415_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_335_s, &tv_r_Aggregate_0_335_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_137_output: " << tbl_JOIN_INNER_TD_137_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 19.18106 * 1000 << "ms" << std::endl; 
    return 0; 
}
