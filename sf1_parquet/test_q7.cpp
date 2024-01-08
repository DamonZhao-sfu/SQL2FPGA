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

#include "cfgFunc_q7.hpp" 
#include "q7.hpp" 

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
    std::cout << "NOTE:running query #7\n."; 
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
    Table tbl_Sort_TD_0947_output("tbl_Sort_TD_0947_output", 6100000, 4, "");
    tbl_Sort_TD_0947_output.allocateHost();
    Table tbl_Aggregate_TD_1967_output("tbl_Aggregate_TD_1967_output", 6100000, 4, "");
    tbl_Aggregate_TD_1967_output.allocateHost();
    Table tbl_Project_TD_2927_output("tbl_Project_TD_2927_output", 6100000, 4, "");
    tbl_Project_TD_2927_output.allocateHost();
    Table tbl_JOIN_INNER_TD_362_output("tbl_JOIN_INNER_TD_362_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_362_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4815_output("tbl_JOIN_INNER_TD_4815_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_4815_output.allocateHost();
    Table tbl_Project_TD_4879_output("tbl_Project_TD_4879_output", -1, 2, "");
    tbl_Project_TD_4879_output.allocateHost();
    Table tbl_Project_TD_4879_emptyBufferB("tbl_Project_TD_4879_emptyBufferB", 1, 8, "");
    tbl_Project_TD_4879_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_10918_input;
    tbl_SerializeFromObject_TD_10918_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10918_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_10918_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_10918_input.allocateHost();
    tbl_SerializeFromObject_TD_10918_input.loadHost();
    Table tbl_Filter_TD_622_output("tbl_Filter_TD_622_output", 6100000, 2, "");
    tbl_Filter_TD_622_output.allocateHost();
    Table tbl_Filter_TD_533_output("tbl_Filter_TD_533_output", 6100000, 2, "");
    tbl_Filter_TD_533_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7679_input;
    tbl_SerializeFromObject_TD_7679_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7679_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_7679_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_7679_input.allocateHost();
    tbl_SerializeFromObject_TD_7679_input.loadHost();
    Table tbl_SerializeFromObject_TD_6561_input;
    tbl_SerializeFromObject_TD_6561_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6561_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6561_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6561_input.allocateHost();
    tbl_SerializeFromObject_TD_6561_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4815_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4879_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4879_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_10918_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_622_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_533_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4815_cmds;
    cfg_JOIN_INNER_TD_4815_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4815_gqe_join (cfg_JOIN_INNER_TD_4815_cmds.cmd);
    cfg_JOIN_INNER_TD_4815_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_4879_cmds;
    cfg_Project_TD_4879_cmds.allocateHost();
    get_cfg_dat_Project_TD_4879_gqe_join (cfg_Project_TD_4879_cmds.cmd);
    cfg_Project_TD_4879_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4815;
    krnl_JOIN_INNER_TD_4815 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4815.setup(tbl_Filter_TD_622_output, tbl_SerializeFromObject_TD_10918_input, tbl_JOIN_INNER_TD_4815_output, cfg_JOIN_INNER_TD_4815_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_4879;
    krnl_Project_TD_4879 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_4879.setup(tbl_Filter_TD_533_output, tbl_Project_TD_4879_emptyBufferB, tbl_Project_TD_4879_output, cfg_Project_TD_4879_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4815;
    trans_JOIN_INNER_TD_4815.setq(q_h);
    trans_JOIN_INNER_TD_4815.add(&(cfg_JOIN_INNER_TD_4815_cmds));
    trans_JOIN_INNER_TD_4815.add(&(tbl_SerializeFromObject_TD_10918_input));
    transEngine trans_JOIN_INNER_TD_4815_out;
    trans_JOIN_INNER_TD_4815_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_4879;
    trans_Project_TD_4879.setq(q_h);
    trans_Project_TD_4879.add(&(cfg_Project_TD_4879_cmds));
    transEngine trans_Project_TD_4879_out;
    trans_Project_TD_4879_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4815;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4815;
    std::vector<cl::Event> events_JOIN_INNER_TD_4815;
    events_h2d_wr_JOIN_INNER_TD_4815.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4815.resize(1);
    events_JOIN_INNER_TD_4815.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4815;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4815;
    std::vector<cl::Event> events_h2d_wr_Project_TD_4879;
    std::vector<cl::Event> events_d2h_rd_Project_TD_4879;
    std::vector<cl::Event> events_Project_TD_4879;
    events_h2d_wr_Project_TD_4879.resize(1);
    events_d2h_rd_Project_TD_4879.resize(1);
    events_Project_TD_4879.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_4879;
    std::vector<cl::Event> prev_events_grp_Project_TD_4879;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_149_s, tv_r_Filter_5_149_e;
    gettimeofday(&tv_r_Filter_5_149_s, 0);
    SW_Filter_TD_533(tbl_SerializeFromObject_TD_6561_input, tbl_Filter_TD_533_output);
    gettimeofday(&tv_r_Filter_5_149_e, 0);

    struct timeval tv_r_Filter_6_199_s, tv_r_Filter_6_199_e;
    gettimeofday(&tv_r_Filter_6_199_s, 0);
    SW_Filter_TD_622(tbl_SerializeFromObject_TD_7679_input, tbl_Filter_TD_622_output);
    gettimeofday(&tv_r_Filter_6_199_e, 0);

    struct timeval tv_r_Project_4_780_s, tv_r_Project_4_780_e;
    gettimeofday(&tv_r_Project_4_780_s, 0);
    trans_Project_TD_4879.add(&(tbl_Filter_TD_533_output));
    trans_Project_TD_4879.host2dev(0, &(prev_events_grp_Project_TD_4879), &(events_h2d_wr_Project_TD_4879[0]));
    events_grp_Project_TD_4879.push_back(events_h2d_wr_Project_TD_4879[0]);
    krnl_Project_TD_4879.run(0, &(events_grp_Project_TD_4879), &(events_Project_TD_4879[0]));
    
    trans_Project_TD_4879_out.add(&(tbl_Project_TD_4879_output));
    trans_Project_TD_4879_out.dev2host(0, &(events_Project_TD_4879), &(events_d2h_rd_Project_TD_4879[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_4_780_e, 0);

    struct timeval tv_r_JOIN_INNER_4_421_s, tv_r_JOIN_INNER_4_421_e;
    gettimeofday(&tv_r_JOIN_INNER_4_421_s, 0);
    trans_JOIN_INNER_TD_4815.add(&(tbl_Filter_TD_622_output));
    trans_JOIN_INNER_TD_4815.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4815), &(events_h2d_wr_JOIN_INNER_TD_4815[0]));
    events_grp_JOIN_INNER_TD_4815.push_back(events_h2d_wr_JOIN_INNER_TD_4815[0]);
    krnl_JOIN_INNER_TD_4815.run(0, &(events_grp_JOIN_INNER_TD_4815), &(events_JOIN_INNER_TD_4815[0]));
    
    trans_JOIN_INNER_TD_4815_out.add(&(tbl_JOIN_INNER_TD_4815_output));
    trans_JOIN_INNER_TD_4815_out.dev2host(0, &(events_JOIN_INNER_TD_4815), &(events_d2h_rd_JOIN_INNER_TD_4815[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_421_e, 0);

    struct timeval tv_r_JOIN_INNER_3_637_s, tv_r_JOIN_INNER_3_637_e;
    gettimeofday(&tv_r_JOIN_INNER_3_637_s, 0);
    SW_JOIN_INNER_TD_362(tbl_JOIN_INNER_TD_4815_output, tbl_Project_TD_4879_output, tbl_SerializeFromObject_TD_7679_input, tbl_SerializeFromObject_TD_6561_input, tbl_JOIN_INNER_TD_362_output);
    gettimeofday(&tv_r_JOIN_INNER_3_637_e, 0);

    struct timeval tv_r_Project_2_949_s, tv_r_Project_2_949_e;
    gettimeofday(&tv_r_Project_2_949_s, 0);
    SW_Project_TD_2927(tbl_JOIN_INNER_TD_362_output, tbl_Project_TD_2927_output);
    gettimeofday(&tv_r_Project_2_949_e, 0);

    struct timeval tv_r_Aggregate_1_902_s, tv_r_Aggregate_1_902_e;
    gettimeofday(&tv_r_Aggregate_1_902_s, 0);
    SW_Aggregate_TD_1967(tbl_Project_TD_2927_output, tbl_Aggregate_TD_1967_output);
    gettimeofday(&tv_r_Aggregate_1_902_e, 0);

    struct timeval tv_r_Sort_0_189_s, tv_r_Sort_0_189_e;
    gettimeofday(&tv_r_Sort_0_189_s, 0);
    SW_Sort_TD_0947(tbl_Aggregate_TD_1967_output, tbl_Sort_TD_0947_output);
    gettimeofday(&tv_r_Sort_0_189_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_149_s, &tv_r_Filter_5_149_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6561_input: " << tbl_SerializeFromObject_TD_6561_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_199_s, &tv_r_Filter_6_199_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7679_input: " << tbl_SerializeFromObject_TD_7679_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_780_s, &tv_r_Project_4_780_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_533_output: " << tbl_Filter_TD_533_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_421_s, &tv_r_JOIN_INNER_4_421_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10918_input: " << tbl_SerializeFromObject_TD_10918_input.getNumRow() << " " << "tbl_Filter_TD_622_output: " << tbl_Filter_TD_622_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_637_s, &tv_r_JOIN_INNER_3_637_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4815_output: " << tbl_JOIN_INNER_TD_4815_output.getNumRow() << " " << "tbl_Project_TD_4879_output: " << tbl_Project_TD_4879_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_949_s, &tv_r_Project_2_949_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_362_output: " << tbl_JOIN_INNER_TD_362_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_902_s, &tv_r_Aggregate_1_902_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2927_output: " << tbl_Project_TD_2927_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_189_s, &tv_r_Sort_0_189_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1967_output: " << tbl_Aggregate_TD_1967_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 10.926443 * 1000 << "ms" << std::endl; 
    return 0; 
}
