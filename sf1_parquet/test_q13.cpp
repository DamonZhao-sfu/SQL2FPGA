// number of overlays (w/o fusion): 7 
// number of overlays (w/ fusion): 4 
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

#include "cfgFunc_q13.hpp" 
#include "q13.hpp" 

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
    std::cout << "NOTE:running query #13\n."; 
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
    cl::Device device_a = devices[1]; 
    // Create context_a and command queue for selected device 
    cl::Context context_a(device_a); 
    cl::CommandQueue q_a(context_a, device_a, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE); 
    std::string devName_a = device_a.getInfo<CL_DEVICE_NAME>(); 
    std::cout << "Selected Device " << devName_a << "\n"; 
    cl::Program::Binaries xclBins_a = xcl::import_binary_file(xclbin_path_a); 
    std::vector<cl::Device> devices_a; 
    devices_a.push_back(device_a); 
    cl::Program program_a(context_a, devices_a, xclBins_a); 
    // ****************************** Tables **************************** // 
    Table tbl_Sort_TD_0246_output("tbl_Sort_TD_0246_output", 6100000, 2, "");
    tbl_Sort_TD_0246_output.allocateHost();
    Table tbl_Aggregate_TD_1785_output_preprocess("tbl_Aggregate_TD_1785_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_1785_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_1785_output("tbl_Aggregate_TD_1785_output", -1, 2, "");
    tbl_Aggregate_TD_1785_output.allocateHost();
    Table tbl_Aggregate_TD_2569_output_preprocess("tbl_Aggregate_TD_2569_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_2569_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_2569_output("tbl_Aggregate_TD_2569_output", -1, 1, "");
    tbl_Aggregate_TD_2569_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3988_output_preprocess("tbl_JOIN_LEFTANTI_TD_3988_output_preprocess", 1531000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3988_output_preprocess.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3988_output("tbl_JOIN_LEFTANTI_TD_3988_output", 1531000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3988_output.allocateHost();
    Table tbl_JOIN_INNER_TD_0738_output("tbl_JOIN_INNER_TD_0738_output", 1480133, 3, "");
    tbl_JOIN_INNER_TD_0738_output.allocateHost();
    Table tbl_Project_TD_4206_output("tbl_Project_TD_4206_output", -1, 1, "");
    tbl_Project_TD_4206_output.allocateHost();
    Table tbl_Project_TD_4206_emptyBufferB("tbl_Project_TD_4206_emptyBufferB", 1, 8, "");
    tbl_Project_TD_4206_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_5435_output("tbl_Filter_TD_5435_output", 6100000, 2, "");
    tbl_Filter_TD_5435_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5153_input;
    tbl_SerializeFromObject_TD_5153_input = Table("customer", customer_n, 1, in_dir);
    tbl_SerializeFromObject_TD_5153_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_5153_input.allocateHost();
    tbl_SerializeFromObject_TD_5153_input.loadHost();
    Table tbl_SerializeFromObject_TD_6466_input;
    tbl_SerializeFromObject_TD_6466_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_6466_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_6466_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_6466_input.addCol("o_comment", TPCH_READ_O_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_6466_input.allocateHost();
    tbl_SerializeFromObject_TD_6466_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_1785_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_LEFTANTI_TD_3988_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_2569_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_2569_output.allocateDevBuffer(context_a, 32);
    tbl_JOIN_LEFTANTI_TD_3988_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_0738_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4206_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4206_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5435_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5153_input.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_1785_cmds;
    cfg_Aggregate_TD_1785_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_1785_gqe_aggr(cfg_Aggregate_TD_1785_cmds.cmd);
    cfg_Aggregate_TD_1785_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_1785_cmds_out;
    cfg_Aggregate_TD_1785_cmds_out.allocateHost();
    cfg_Aggregate_TD_1785_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_2569_cmds;
    cfg_Aggregate_TD_2569_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_2569_gqe_aggr(cfg_Aggregate_TD_2569_cmds.cmd);
    cfg_Aggregate_TD_2569_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_2569_cmds_out;
    cfg_Aggregate_TD_2569_cmds_out.allocateHost();
    cfg_Aggregate_TD_2569_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_LEFTANTI_TD_3988_cmds;
    cfg_JOIN_LEFTANTI_TD_3988_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTANTI_TD_3988_gqe_join (cfg_JOIN_LEFTANTI_TD_3988_cmds.cmd);
    cfg_JOIN_LEFTANTI_TD_3988_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_0738_cmds;
    cfg_JOIN_INNER_TD_0738_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_0738_gqe_join (cfg_JOIN_INNER_TD_0738_cmds.cmd);
    cfg_JOIN_INNER_TD_0738_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_4206_cmds;
    cfg_Project_TD_4206_cmds.allocateHost();
    get_cfg_dat_Project_TD_4206_gqe_join (cfg_Project_TD_4206_cmds.cmd);
    cfg_Project_TD_4206_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_1785;
    krnl_Aggregate_TD_1785 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_1785.setup(tbl_Aggregate_TD_2569_output, tbl_Aggregate_TD_1785_output_preprocess, cfg_Aggregate_TD_1785_cmds, cfg_Aggregate_TD_1785_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_2569;
    krnl_Aggregate_TD_2569 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_2569.setup(tbl_JOIN_LEFTANTI_TD_3988_output, tbl_Aggregate_TD_2569_output_preprocess, cfg_Aggregate_TD_2569_cmds, cfg_Aggregate_TD_2569_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_LEFTANTI_TD_3988;
    krnl_JOIN_LEFTANTI_TD_3988 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTANTI_TD_3988.setup(tbl_SerializeFromObject_TD_5153_input, tbl_JOIN_INNER_TD_0738_output, tbl_JOIN_LEFTANTI_TD_3988_output_preprocess, cfg_JOIN_LEFTANTI_TD_3988_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_0738;
    krnl_JOIN_INNER_TD_0738 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_0738.setup(tbl_Project_TD_4206_output, tbl_Filter_TD_5435_output, tbl_JOIN_INNER_TD_0738_output, cfg_JOIN_INNER_TD_0738_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_4206;
    krnl_Project_TD_4206 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_4206.setup(tbl_SerializeFromObject_TD_5153_input, tbl_Project_TD_4206_emptyBufferB, tbl_Project_TD_4206_output, cfg_Project_TD_4206_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_1785;
    trans_Aggregate_TD_1785.setq(q_a);
    trans_Aggregate_TD_1785.add(&(cfg_Aggregate_TD_1785_cmds));
    transEngine trans_Aggregate_TD_1785_out;
    trans_Aggregate_TD_1785_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_2569;
    trans_Aggregate_TD_2569.setq(q_a);
    trans_Aggregate_TD_2569.add(&(cfg_Aggregate_TD_2569_cmds));
    transEngine trans_Aggregate_TD_2569_out;
    trans_Aggregate_TD_2569_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_LEFTANTI_TD_3988;
    trans_JOIN_LEFTANTI_TD_3988.setq(q_h);
    trans_JOIN_LEFTANTI_TD_3988.add(&(cfg_JOIN_LEFTANTI_TD_3988_cmds));
    trans_JOIN_LEFTANTI_TD_3988.add(&(tbl_SerializeFromObject_TD_5153_input));
    transEngine trans_JOIN_LEFTANTI_TD_3988_out;
    trans_JOIN_LEFTANTI_TD_3988_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_0738;
    trans_JOIN_INNER_TD_0738.setq(q_h);
    trans_JOIN_INNER_TD_0738.add(&(cfg_JOIN_INNER_TD_0738_cmds));
    q_h.finish();
    transEngine trans_Project_TD_4206;
    trans_Project_TD_4206.setq(q_h);
    trans_Project_TD_4206.add(&(cfg_Project_TD_4206_cmds));
    trans_Project_TD_4206.add(&(tbl_SerializeFromObject_TD_5153_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_1785;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_1785;
    std::vector<cl::Event> events_Aggregate_TD_1785;
    events_h2d_wr_Aggregate_TD_1785.resize(1);
    events_d2h_rd_Aggregate_TD_1785.resize(1);
    events_Aggregate_TD_1785.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_1785;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_1785;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_2569;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_2569;
    std::vector<cl::Event> events_Aggregate_TD_2569;
    events_h2d_wr_Aggregate_TD_2569.resize(1);
    events_d2h_rd_Aggregate_TD_2569.resize(1);
    events_Aggregate_TD_2569.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_2569;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_2569;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTANTI_TD_3988;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTANTI_TD_3988;
    std::vector<cl::Event> events_JOIN_LEFTANTI_TD_3988;
    events_h2d_wr_JOIN_LEFTANTI_TD_3988.resize(1);
    events_d2h_rd_JOIN_LEFTANTI_TD_3988.resize(1);
    events_JOIN_LEFTANTI_TD_3988.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTANTI_TD_3988;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTANTI_TD_3988;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_0738;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_0738;
    std::vector<cl::Event> events_JOIN_INNER_TD_0738;
    events_h2d_wr_JOIN_INNER_TD_0738.resize(1);
    events_d2h_rd_JOIN_INNER_TD_0738.resize(1);
    events_JOIN_INNER_TD_0738.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_0738;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_0738;
    std::vector<cl::Event> events_h2d_wr_Project_TD_4206;
    std::vector<cl::Event> events_d2h_rd_Project_TD_4206;
    std::vector<cl::Event> events_Project_TD_4206;
    events_h2d_wr_Project_TD_4206.resize(1);
    events_d2h_rd_Project_TD_4206.resize(1);
    events_Project_TD_4206.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_4206;
    std::vector<cl::Event> prev_events_grp_Project_TD_4206;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_107_s, tv_r_Filter_5_107_e;
    gettimeofday(&tv_r_Filter_5_107_s, 0);
    SW_Filter_TD_5435(tbl_SerializeFromObject_TD_6466_input, tbl_Filter_TD_5435_output);
    gettimeofday(&tv_r_Filter_5_107_e, 0);

    struct timeval tv_r_Project_4_460_s, tv_r_Project_4_460_e;
    gettimeofday(&tv_r_Project_4_460_s, 0);
    trans_Project_TD_4206.host2dev(0, &(prev_events_grp_Project_TD_4206), &(events_h2d_wr_Project_TD_4206[0]));
    events_grp_Project_TD_4206.push_back(events_h2d_wr_Project_TD_4206[0]);
    krnl_Project_TD_4206.run(0, &(events_grp_Project_TD_4206), &(events_Project_TD_4206[0]));
    gettimeofday(&tv_r_Project_4_460_e, 0);

    struct timeval tv_r_JOIN_INNER_0_471_s, tv_r_JOIN_INNER_0_471_e;
    gettimeofday(&tv_r_JOIN_INNER_0_471_s, 0);
    prev_events_grp_JOIN_INNER_TD_0738.push_back(events_h2d_wr_Project_TD_4206[0]);
    trans_JOIN_INNER_TD_0738.add(&(tbl_Filter_TD_5435_output));
    trans_JOIN_INNER_TD_0738.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_0738), &(events_h2d_wr_JOIN_INNER_TD_0738[0]));
    events_grp_JOIN_INNER_TD_0738.push_back(events_h2d_wr_JOIN_INNER_TD_0738[0]);
    events_grp_JOIN_INNER_TD_0738.push_back(events_Project_TD_4206[0]);
    krnl_JOIN_INNER_TD_0738.run(0, &(events_grp_JOIN_INNER_TD_0738), &(events_JOIN_INNER_TD_0738[0]));
    gettimeofday(&tv_r_JOIN_INNER_0_471_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_3_110_s, tv_r_JOIN_LEFTANTI_3_110_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_110_s, 0);
    prev_events_grp_JOIN_LEFTANTI_TD_3988.push_back(events_h2d_wr_JOIN_INNER_TD_0738[0]);
    trans_JOIN_LEFTANTI_TD_3988.host2dev(0, &(prev_events_grp_JOIN_LEFTANTI_TD_3988), &(events_h2d_wr_JOIN_LEFTANTI_TD_3988[0]));
    events_grp_JOIN_LEFTANTI_TD_3988.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_3988[0]);
    events_grp_JOIN_LEFTANTI_TD_3988.push_back(events_JOIN_INNER_TD_0738[0]);
    krnl_JOIN_LEFTANTI_TD_3988.run(0, &(events_grp_JOIN_LEFTANTI_TD_3988), &(events_JOIN_LEFTANTI_TD_3988[0]));
    
    trans_JOIN_LEFTANTI_TD_3988_out.add(&(tbl_JOIN_LEFTANTI_TD_3988_output_preprocess));
    trans_JOIN_LEFTANTI_TD_3988_out.add(&(tbl_JOIN_INNER_TD_0738_output));
    trans_JOIN_LEFTANTI_TD_3988_out.dev2host(0, &(events_JOIN_LEFTANTI_TD_3988), &(events_d2h_rd_JOIN_LEFTANTI_TD_3988[0]));
    q_h.flush();
    q_h.finish();
    SW_JOIN_LEFTANTI_TD_3988_concatenate(tbl_JOIN_LEFTANTI_TD_3988_output_preprocess, tbl_JOIN_INNER_TD_0738_output);
    tbl_JOIN_LEFTANTI_TD_3988_output_preprocess.copyTableData(&(tbl_JOIN_LEFTANTI_TD_3988_output));
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_110_e, 0);

    struct timeval tv_r_Aggregate_2_821_s, tv_r_Aggregate_2_821_e;
    gettimeofday(&tv_r_Aggregate_2_821_s, 0);
    trans_Aggregate_TD_2569.add(&(tbl_JOIN_LEFTANTI_TD_3988_output));
    trans_Aggregate_TD_2569.host2dev(0, &(prev_events_grp_Aggregate_TD_2569), &(events_h2d_wr_Aggregate_TD_2569[0]));
    events_grp_Aggregate_TD_2569.push_back(events_h2d_wr_Aggregate_TD_2569[0]);
    krnl_Aggregate_TD_2569.run(0, &(events_grp_Aggregate_TD_2569), &(events_Aggregate_TD_2569[0]));
    
    trans_Aggregate_TD_2569_out.add(&(tbl_Aggregate_TD_2569_output_preprocess));
    trans_Aggregate_TD_2569_out.dev2host(0, &(events_Aggregate_TD_2569), &(events_d2h_rd_Aggregate_TD_2569[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_2569_consolidate(tbl_Aggregate_TD_2569_output_preprocess, tbl_Aggregate_TD_2569_output);
    gettimeofday(&tv_r_Aggregate_2_821_e, 0);

    struct timeval tv_r_Aggregate_1_15_s, tv_r_Aggregate_1_15_e;
    gettimeofday(&tv_r_Aggregate_1_15_s, 0);
    prev_events_grp_Aggregate_TD_1785.push_back(events_h2d_wr_Aggregate_TD_2569[0]);
    trans_Aggregate_TD_1785.add(&(tbl_Aggregate_TD_2569_output));
    trans_Aggregate_TD_1785.host2dev(0, &(prev_events_grp_Aggregate_TD_1785), &(events_h2d_wr_Aggregate_TD_1785[0]));
    events_grp_Aggregate_TD_1785.push_back(events_h2d_wr_Aggregate_TD_1785[0]);
    events_grp_Aggregate_TD_1785.push_back(events_Aggregate_TD_2569[0]);
    krnl_Aggregate_TD_1785.run(0, &(events_grp_Aggregate_TD_1785), &(events_Aggregate_TD_1785[0]));
    
    trans_Aggregate_TD_1785_out.add(&(tbl_Aggregate_TD_1785_output_preprocess));
    trans_Aggregate_TD_1785_out.dev2host(0, &(events_Aggregate_TD_1785), &(events_d2h_rd_Aggregate_TD_1785[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_1785_consolidate(tbl_Aggregate_TD_1785_output_preprocess, tbl_Aggregate_TD_1785_output);
    gettimeofday(&tv_r_Aggregate_1_15_e, 0);

    struct timeval tv_r_Sort_0_387_s, tv_r_Sort_0_387_e;
    gettimeofday(&tv_r_Sort_0_387_s, 0);
    SW_Sort_TD_0246(tbl_Aggregate_TD_1785_output, tbl_Sort_TD_0246_output);
    gettimeofday(&tv_r_Sort_0_387_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_107_s, &tv_r_Filter_5_107_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6466_input: " << tbl_SerializeFromObject_TD_6466_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_460_s, &tv_r_Project_4_460_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5153_input: " << tbl_SerializeFromObject_TD_5153_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_0: " << tvdiff(&tv_r_JOIN_INNER_0_471_s, &tv_r_JOIN_INNER_0_471_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4206_output: " << tbl_Project_TD_4206_output.getNumRow() << " " << "tbl_Filter_TD_5435_output: " << tbl_Filter_TD_5435_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_3: " << tvdiff(&tv_r_JOIN_LEFTANTI_3_110_s, &tv_r_JOIN_LEFTANTI_3_110_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_0738_output: " << tbl_JOIN_INNER_TD_0738_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_5153_input: " << tbl_SerializeFromObject_TD_5153_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_821_s, &tv_r_Aggregate_2_821_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_3988_output: " << tbl_JOIN_LEFTANTI_TD_3988_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_15_s, &tv_r_Aggregate_1_15_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2569_output: " << tbl_Aggregate_TD_2569_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_387_s, &tv_r_Sort_0_387_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1785_output: " << tbl_Aggregate_TD_1785_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 11.83356 * 1000 << "ms" << std::endl; 
    return 0; 
}
