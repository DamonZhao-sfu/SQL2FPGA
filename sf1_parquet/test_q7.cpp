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
    Table tbl_Sort_TD_0804_output("tbl_Sort_TD_0804_output", 6100000, 4, "");
    tbl_Sort_TD_0804_output.allocateHost();
    Table tbl_Aggregate_TD_1258_output("tbl_Aggregate_TD_1258_output", 6100000, 4, "");
    tbl_Aggregate_TD_1258_output.allocateHost();
    Table tbl_Project_TD_2996_output("tbl_Project_TD_2996_output", 6100000, 4, "");
    tbl_Project_TD_2996_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3654_output("tbl_JOIN_INNER_TD_3654_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_3654_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4431_output("tbl_JOIN_INNER_TD_4431_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_4431_output.allocateHost();
    Table tbl_Project_TD_4101_output("tbl_Project_TD_4101_output", -1, 2, "");
    tbl_Project_TD_4101_output.allocateHost();
    Table tbl_Project_TD_4101_emptyBufferB("tbl_Project_TD_4101_emptyBufferB", 1, 8, "");
    tbl_Project_TD_4101_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_10325_input;
    tbl_SerializeFromObject_TD_10325_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10325_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_10325_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_10325_input.allocateHost();
    tbl_SerializeFromObject_TD_10325_input.loadHost();
    Table tbl_Filter_TD_6328_output("tbl_Filter_TD_6328_output", 6100000, 2, "");
    tbl_Filter_TD_6328_output.allocateHost();
    Table tbl_Filter_TD_5676_output("tbl_Filter_TD_5676_output", 6100000, 2, "");
    tbl_Filter_TD_5676_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7983_input;
    tbl_SerializeFromObject_TD_7983_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7983_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_7983_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_7983_input.allocateHost();
    tbl_SerializeFromObject_TD_7983_input.loadHost();
    Table tbl_SerializeFromObject_TD_6269_input;
    tbl_SerializeFromObject_TD_6269_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6269_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6269_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6269_input.allocateHost();
    tbl_SerializeFromObject_TD_6269_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4431_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4101_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4101_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_10325_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6328_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5676_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4431_cmds;
    cfg_JOIN_INNER_TD_4431_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4431_gqe_join (cfg_JOIN_INNER_TD_4431_cmds.cmd);
    cfg_JOIN_INNER_TD_4431_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_4101_cmds;
    cfg_Project_TD_4101_cmds.allocateHost();
    get_cfg_dat_Project_TD_4101_gqe_join (cfg_Project_TD_4101_cmds.cmd);
    cfg_Project_TD_4101_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4431;
    krnl_JOIN_INNER_TD_4431 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4431.setup(tbl_Filter_TD_6328_output, tbl_SerializeFromObject_TD_10325_input, tbl_JOIN_INNER_TD_4431_output, cfg_JOIN_INNER_TD_4431_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_4101;
    krnl_Project_TD_4101 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_4101.setup(tbl_Filter_TD_5676_output, tbl_Project_TD_4101_emptyBufferB, tbl_Project_TD_4101_output, cfg_Project_TD_4101_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4431;
    trans_JOIN_INNER_TD_4431.setq(q_h);
    trans_JOIN_INNER_TD_4431.add(&(cfg_JOIN_INNER_TD_4431_cmds));
    trans_JOIN_INNER_TD_4431.add(&(tbl_SerializeFromObject_TD_10325_input));
    transEngine trans_JOIN_INNER_TD_4431_out;
    trans_JOIN_INNER_TD_4431_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_4101;
    trans_Project_TD_4101.setq(q_h);
    trans_Project_TD_4101.add(&(cfg_Project_TD_4101_cmds));
    transEngine trans_Project_TD_4101_out;
    trans_Project_TD_4101_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4431;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4431;
    std::vector<cl::Event> events_JOIN_INNER_TD_4431;
    events_h2d_wr_JOIN_INNER_TD_4431.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4431.resize(1);
    events_JOIN_INNER_TD_4431.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4431;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4431;
    std::vector<cl::Event> events_h2d_wr_Project_TD_4101;
    std::vector<cl::Event> events_d2h_rd_Project_TD_4101;
    std::vector<cl::Event> events_Project_TD_4101;
    events_h2d_wr_Project_TD_4101.resize(1);
    events_d2h_rd_Project_TD_4101.resize(1);
    events_Project_TD_4101.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_4101;
    std::vector<cl::Event> prev_events_grp_Project_TD_4101;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_230_s, tv_r_Filter_5_230_e;
    gettimeofday(&tv_r_Filter_5_230_s, 0);
    SW_Filter_TD_5676(tbl_SerializeFromObject_TD_6269_input, tbl_Filter_TD_5676_output);
    gettimeofday(&tv_r_Filter_5_230_e, 0);

    struct timeval tv_r_Filter_6_798_s, tv_r_Filter_6_798_e;
    gettimeofday(&tv_r_Filter_6_798_s, 0);
    SW_Filter_TD_6328(tbl_SerializeFromObject_TD_7983_input, tbl_Filter_TD_6328_output);
    gettimeofday(&tv_r_Filter_6_798_e, 0);

    struct timeval tv_r_Project_4_573_s, tv_r_Project_4_573_e;
    gettimeofday(&tv_r_Project_4_573_s, 0);
    trans_Project_TD_4101.add(&(tbl_Filter_TD_5676_output));
    trans_Project_TD_4101.host2dev(0, &(prev_events_grp_Project_TD_4101), &(events_h2d_wr_Project_TD_4101[0]));
    events_grp_Project_TD_4101.push_back(events_h2d_wr_Project_TD_4101[0]);
    krnl_Project_TD_4101.run(0, &(events_grp_Project_TD_4101), &(events_Project_TD_4101[0]));
    
    trans_Project_TD_4101_out.add(&(tbl_Project_TD_4101_output));
    trans_Project_TD_4101_out.dev2host(0, &(events_Project_TD_4101), &(events_d2h_rd_Project_TD_4101[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_4_573_e, 0);

    struct timeval tv_r_JOIN_INNER_4_608_s, tv_r_JOIN_INNER_4_608_e;
    gettimeofday(&tv_r_JOIN_INNER_4_608_s, 0);
    trans_JOIN_INNER_TD_4431.add(&(tbl_Filter_TD_6328_output));
    trans_JOIN_INNER_TD_4431.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4431), &(events_h2d_wr_JOIN_INNER_TD_4431[0]));
    events_grp_JOIN_INNER_TD_4431.push_back(events_h2d_wr_JOIN_INNER_TD_4431[0]);
    krnl_JOIN_INNER_TD_4431.run(0, &(events_grp_JOIN_INNER_TD_4431), &(events_JOIN_INNER_TD_4431[0]));
    
    trans_JOIN_INNER_TD_4431_out.add(&(tbl_JOIN_INNER_TD_4431_output));
    trans_JOIN_INNER_TD_4431_out.dev2host(0, &(events_JOIN_INNER_TD_4431), &(events_d2h_rd_JOIN_INNER_TD_4431[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_608_e, 0);

    struct timeval tv_r_JOIN_INNER_3_434_s, tv_r_JOIN_INNER_3_434_e;
    gettimeofday(&tv_r_JOIN_INNER_3_434_s, 0);
    SW_JOIN_INNER_TD_3654(tbl_JOIN_INNER_TD_4431_output, tbl_Project_TD_4101_output, tbl_SerializeFromObject_TD_7983_input, tbl_SerializeFromObject_TD_6269_input, tbl_JOIN_INNER_TD_3654_output);
    gettimeofday(&tv_r_JOIN_INNER_3_434_e, 0);

    struct timeval tv_r_Project_2_834_s, tv_r_Project_2_834_e;
    gettimeofday(&tv_r_Project_2_834_s, 0);
    SW_Project_TD_2996(tbl_JOIN_INNER_TD_3654_output, tbl_Project_TD_2996_output);
    gettimeofday(&tv_r_Project_2_834_e, 0);

    struct timeval tv_r_Aggregate_1_289_s, tv_r_Aggregate_1_289_e;
    gettimeofday(&tv_r_Aggregate_1_289_s, 0);
    SW_Aggregate_TD_1258(tbl_Project_TD_2996_output, tbl_Aggregate_TD_1258_output);
    gettimeofday(&tv_r_Aggregate_1_289_e, 0);

    struct timeval tv_r_Sort_0_683_s, tv_r_Sort_0_683_e;
    gettimeofday(&tv_r_Sort_0_683_s, 0);
    SW_Sort_TD_0804(tbl_Aggregate_TD_1258_output, tbl_Sort_TD_0804_output);
    gettimeofday(&tv_r_Sort_0_683_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_230_s, &tv_r_Filter_5_230_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6269_input: " << tbl_SerializeFromObject_TD_6269_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_798_s, &tv_r_Filter_6_798_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7983_input: " << tbl_SerializeFromObject_TD_7983_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_573_s, &tv_r_Project_4_573_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5676_output: " << tbl_Filter_TD_5676_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_608_s, &tv_r_JOIN_INNER_4_608_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10325_input: " << tbl_SerializeFromObject_TD_10325_input.getNumRow() << " " << "tbl_Filter_TD_6328_output: " << tbl_Filter_TD_6328_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_434_s, &tv_r_JOIN_INNER_3_434_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4431_output: " << tbl_JOIN_INNER_TD_4431_output.getNumRow() << " " << "tbl_Project_TD_4101_output: " << tbl_Project_TD_4101_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_834_s, &tv_r_Project_2_834_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3654_output: " << tbl_JOIN_INNER_TD_3654_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_289_s, &tv_r_Aggregate_1_289_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2996_output: " << tbl_Project_TD_2996_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_683_s, &tv_r_Sort_0_683_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1258_output: " << tbl_Aggregate_TD_1258_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 5.8758802 * 1000 << "ms" << std::endl; 
    return 0; 
}
