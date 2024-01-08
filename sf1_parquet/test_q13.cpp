// number of overlays (w/o fusion): 4 
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
    Table tbl_Sort_TD_0357_output("tbl_Sort_TD_0357_output", 6100000, 2, "");
    tbl_Sort_TD_0357_output.allocateHost();
    Table tbl_Aggregate_TD_1307_output_preprocess("tbl_Aggregate_TD_1307_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_1307_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_1307_output("tbl_Aggregate_TD_1307_output", -1, 2, "");
    tbl_Aggregate_TD_1307_output.allocateHost();
    Table tbl_Aggregate_TD_2283_output_preprocess("tbl_Aggregate_TD_2283_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_2283_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_2283_output("tbl_Aggregate_TD_2283_output", -1, 1, "");
    tbl_Aggregate_TD_2283_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3981_output_preprocess("tbl_JOIN_LEFTANTI_TD_3981_output_preprocess", 1531000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3981_output_preprocess.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3981_output("tbl_JOIN_LEFTANTI_TD_3981_output", 1531000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3981_output.allocateHost();
    Table tbl_JOIN_INNER_TD_0719_output("tbl_JOIN_INNER_TD_0719_output", 1480133, 3, "");
    tbl_JOIN_INNER_TD_0719_output.allocateHost();
    Table tbl_Project_TD_4342_output("tbl_Project_TD_4342_output", 6100000, 1, "");
    tbl_Project_TD_4342_output.allocateHost();
    Table tbl_Project_TD_4217_output("tbl_Project_TD_4217_output", 6100000, 2, "");
    tbl_Project_TD_4217_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5330_input;
    tbl_SerializeFromObject_TD_5330_input = Table("customer", customer_n, 1, in_dir);
    tbl_SerializeFromObject_TD_5330_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_5330_input.allocateHost();
    tbl_SerializeFromObject_TD_5330_input.loadHost();
    Table tbl_Filter_TD_5288_output("tbl_Filter_TD_5288_output", 6100000, 2, "");
    tbl_Filter_TD_5288_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6729_input;
    tbl_SerializeFromObject_TD_6729_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_6729_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_6729_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_6729_input.addCol("o_comment", TPCH_READ_O_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_6729_input.allocateHost();
    tbl_SerializeFromObject_TD_6729_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_1307_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_LEFTANTI_TD_3981_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_2283_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_2283_output.allocateDevBuffer(context_a, 32);
    tbl_JOIN_LEFTANTI_TD_3981_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_0719_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4342_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4217_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_1307_cmds;
    cfg_Aggregate_TD_1307_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_1307_gqe_aggr(cfg_Aggregate_TD_1307_cmds.cmd);
    cfg_Aggregate_TD_1307_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_1307_cmds_out;
    cfg_Aggregate_TD_1307_cmds_out.allocateHost();
    cfg_Aggregate_TD_1307_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_2283_cmds;
    cfg_Aggregate_TD_2283_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_2283_gqe_aggr(cfg_Aggregate_TD_2283_cmds.cmd);
    cfg_Aggregate_TD_2283_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_2283_cmds_out;
    cfg_Aggregate_TD_2283_cmds_out.allocateHost();
    cfg_Aggregate_TD_2283_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_LEFTANTI_TD_3981_cmds;
    cfg_JOIN_LEFTANTI_TD_3981_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTANTI_TD_3981_gqe_join (cfg_JOIN_LEFTANTI_TD_3981_cmds.cmd);
    cfg_JOIN_LEFTANTI_TD_3981_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_0719_cmds;
    cfg_JOIN_INNER_TD_0719_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_0719_gqe_join (cfg_JOIN_INNER_TD_0719_cmds.cmd);
    cfg_JOIN_INNER_TD_0719_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_1307;
    krnl_Aggregate_TD_1307 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_1307.setup(tbl_Aggregate_TD_2283_output, tbl_Aggregate_TD_1307_output_preprocess, cfg_Aggregate_TD_1307_cmds, cfg_Aggregate_TD_1307_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_2283;
    krnl_Aggregate_TD_2283 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_2283.setup(tbl_JOIN_LEFTANTI_TD_3981_output, tbl_Aggregate_TD_2283_output_preprocess, cfg_Aggregate_TD_2283_cmds, cfg_Aggregate_TD_2283_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_LEFTANTI_TD_3981;
    krnl_JOIN_LEFTANTI_TD_3981 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTANTI_TD_3981.setup(tbl_Project_TD_4342_output, tbl_JOIN_INNER_TD_0719_output, tbl_JOIN_LEFTANTI_TD_3981_output_preprocess, cfg_JOIN_LEFTANTI_TD_3981_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_0719;
    krnl_JOIN_INNER_TD_0719 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_0719.setup(tbl_Project_TD_4342_output, tbl_Project_TD_4217_output, tbl_JOIN_INNER_TD_0719_output, cfg_JOIN_INNER_TD_0719_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_1307;
    trans_Aggregate_TD_1307.setq(q_a);
    trans_Aggregate_TD_1307.add(&(cfg_Aggregate_TD_1307_cmds));
    transEngine trans_Aggregate_TD_1307_out;
    trans_Aggregate_TD_1307_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_2283;
    trans_Aggregate_TD_2283.setq(q_a);
    trans_Aggregate_TD_2283.add(&(cfg_Aggregate_TD_2283_cmds));
    transEngine trans_Aggregate_TD_2283_out;
    trans_Aggregate_TD_2283_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_LEFTANTI_TD_3981;
    trans_JOIN_LEFTANTI_TD_3981.setq(q_h);
    trans_JOIN_LEFTANTI_TD_3981.add(&(cfg_JOIN_LEFTANTI_TD_3981_cmds));
    transEngine trans_JOIN_LEFTANTI_TD_3981_out;
    trans_JOIN_LEFTANTI_TD_3981_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_0719;
    trans_JOIN_INNER_TD_0719.setq(q_h);
    trans_JOIN_INNER_TD_0719.add(&(cfg_JOIN_INNER_TD_0719_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_1307;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_1307;
    std::vector<cl::Event> events_Aggregate_TD_1307;
    events_h2d_wr_Aggregate_TD_1307.resize(1);
    events_d2h_rd_Aggregate_TD_1307.resize(1);
    events_Aggregate_TD_1307.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_1307;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_1307;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_2283;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_2283;
    std::vector<cl::Event> events_Aggregate_TD_2283;
    events_h2d_wr_Aggregate_TD_2283.resize(1);
    events_d2h_rd_Aggregate_TD_2283.resize(1);
    events_Aggregate_TD_2283.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_2283;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_2283;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTANTI_TD_3981;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTANTI_TD_3981;
    std::vector<cl::Event> events_JOIN_LEFTANTI_TD_3981;
    events_h2d_wr_JOIN_LEFTANTI_TD_3981.resize(1);
    events_d2h_rd_JOIN_LEFTANTI_TD_3981.resize(1);
    events_JOIN_LEFTANTI_TD_3981.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTANTI_TD_3981;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTANTI_TD_3981;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_0719;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_0719;
    std::vector<cl::Event> events_JOIN_INNER_TD_0719;
    events_h2d_wr_JOIN_INNER_TD_0719.resize(1);
    events_d2h_rd_JOIN_INNER_TD_0719.resize(1);
    events_JOIN_INNER_TD_0719.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_0719;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_0719;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_773_s, tv_r_Filter_5_773_e;
    gettimeofday(&tv_r_Filter_5_773_s, 0);
    SW_Filter_TD_5288(tbl_SerializeFromObject_TD_6729_input, tbl_Filter_TD_5288_output);
    gettimeofday(&tv_r_Filter_5_773_e, 0);

    struct timeval tv_r_Project_4_866_s, tv_r_Project_4_866_e;
    gettimeofday(&tv_r_Project_4_866_s, 0);
    SW_Project_TD_4217(tbl_Filter_TD_5288_output, tbl_Project_TD_4217_output);
    gettimeofday(&tv_r_Project_4_866_e, 0);

    struct timeval tv_r_Project_4_598_s, tv_r_Project_4_598_e;
    gettimeofday(&tv_r_Project_4_598_s, 0);
    SW_Project_TD_4342(tbl_SerializeFromObject_TD_5330_input, tbl_Project_TD_4342_output);
    gettimeofday(&tv_r_Project_4_598_e, 0);

    struct timeval tv_r_JOIN_INNER_0_382_s, tv_r_JOIN_INNER_0_382_e;
    gettimeofday(&tv_r_JOIN_INNER_0_382_s, 0);
    trans_JOIN_INNER_TD_0719.add(&(tbl_Project_TD_4342_output));
    trans_JOIN_INNER_TD_0719.add(&(tbl_Project_TD_4217_output));
    trans_JOIN_INNER_TD_0719.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_0719), &(events_h2d_wr_JOIN_INNER_TD_0719[0]));
    events_grp_JOIN_INNER_TD_0719.push_back(events_h2d_wr_JOIN_INNER_TD_0719[0]);
    krnl_JOIN_INNER_TD_0719.run(0, &(events_grp_JOIN_INNER_TD_0719), &(events_JOIN_INNER_TD_0719[0]));
    gettimeofday(&tv_r_JOIN_INNER_0_382_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_3_405_s, tv_r_JOIN_LEFTANTI_3_405_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_405_s, 0);
    prev_events_grp_JOIN_LEFTANTI_TD_3981.push_back(events_h2d_wr_JOIN_INNER_TD_0719[0]);
    trans_JOIN_LEFTANTI_TD_3981.add(&(tbl_Project_TD_4342_output));
    trans_JOIN_LEFTANTI_TD_3981.host2dev(0, &(prev_events_grp_JOIN_LEFTANTI_TD_3981), &(events_h2d_wr_JOIN_LEFTANTI_TD_3981[0]));
    events_grp_JOIN_LEFTANTI_TD_3981.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_3981[0]);
    events_grp_JOIN_LEFTANTI_TD_3981.push_back(events_JOIN_INNER_TD_0719[0]);
    krnl_JOIN_LEFTANTI_TD_3981.run(0, &(events_grp_JOIN_LEFTANTI_TD_3981), &(events_JOIN_LEFTANTI_TD_3981[0]));
    
    trans_JOIN_LEFTANTI_TD_3981_out.add(&(tbl_JOIN_LEFTANTI_TD_3981_output_preprocess));
    trans_JOIN_LEFTANTI_TD_3981_out.add(&(tbl_JOIN_INNER_TD_0719_output));
    trans_JOIN_LEFTANTI_TD_3981_out.dev2host(0, &(events_JOIN_LEFTANTI_TD_3981), &(events_d2h_rd_JOIN_LEFTANTI_TD_3981[0]));
    q_h.flush();
    q_h.finish();
    SW_JOIN_LEFTANTI_TD_3981_concatenate(tbl_JOIN_LEFTANTI_TD_3981_output_preprocess, tbl_JOIN_INNER_TD_0719_output);
    tbl_JOIN_LEFTANTI_TD_3981_output_preprocess.copyTableData(&(tbl_JOIN_LEFTANTI_TD_3981_output));
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_405_e, 0);

    struct timeval tv_r_Aggregate_2_435_s, tv_r_Aggregate_2_435_e;
    gettimeofday(&tv_r_Aggregate_2_435_s, 0);
    trans_Aggregate_TD_2283.add(&(tbl_JOIN_LEFTANTI_TD_3981_output));
    trans_Aggregate_TD_2283.host2dev(0, &(prev_events_grp_Aggregate_TD_2283), &(events_h2d_wr_Aggregate_TD_2283[0]));
    events_grp_Aggregate_TD_2283.push_back(events_h2d_wr_Aggregate_TD_2283[0]);
    krnl_Aggregate_TD_2283.run(0, &(events_grp_Aggregate_TD_2283), &(events_Aggregate_TD_2283[0]));
    
    trans_Aggregate_TD_2283_out.add(&(tbl_Aggregate_TD_2283_output_preprocess));
    trans_Aggregate_TD_2283_out.dev2host(0, &(events_Aggregate_TD_2283), &(events_d2h_rd_Aggregate_TD_2283[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_2283_consolidate(tbl_Aggregate_TD_2283_output_preprocess, tbl_Aggregate_TD_2283_output);
    gettimeofday(&tv_r_Aggregate_2_435_e, 0);

    struct timeval tv_r_Aggregate_1_700_s, tv_r_Aggregate_1_700_e;
    gettimeofday(&tv_r_Aggregate_1_700_s, 0);
    prev_events_grp_Aggregate_TD_1307.push_back(events_h2d_wr_Aggregate_TD_2283[0]);
    trans_Aggregate_TD_1307.add(&(tbl_Aggregate_TD_2283_output));
    trans_Aggregate_TD_1307.host2dev(0, &(prev_events_grp_Aggregate_TD_1307), &(events_h2d_wr_Aggregate_TD_1307[0]));
    events_grp_Aggregate_TD_1307.push_back(events_h2d_wr_Aggregate_TD_1307[0]);
    events_grp_Aggregate_TD_1307.push_back(events_Aggregate_TD_2283[0]);
    krnl_Aggregate_TD_1307.run(0, &(events_grp_Aggregate_TD_1307), &(events_Aggregate_TD_1307[0]));
    
    trans_Aggregate_TD_1307_out.add(&(tbl_Aggregate_TD_1307_output_preprocess));
    trans_Aggregate_TD_1307_out.dev2host(0, &(events_Aggregate_TD_1307), &(events_d2h_rd_Aggregate_TD_1307[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_1307_consolidate(tbl_Aggregate_TD_1307_output_preprocess, tbl_Aggregate_TD_1307_output);
    gettimeofday(&tv_r_Aggregate_1_700_e, 0);

    struct timeval tv_r_Sort_0_468_s, tv_r_Sort_0_468_e;
    gettimeofday(&tv_r_Sort_0_468_s, 0);
    SW_Sort_TD_0357(tbl_Aggregate_TD_1307_output, tbl_Sort_TD_0357_output);
    gettimeofday(&tv_r_Sort_0_468_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_773_s, &tv_r_Filter_5_773_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6729_input: " << tbl_SerializeFromObject_TD_6729_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_866_s, &tv_r_Project_4_866_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5288_output: " << tbl_Filter_TD_5288_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_598_s, &tv_r_Project_4_598_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5330_input: " << tbl_SerializeFromObject_TD_5330_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_0: " << tvdiff(&tv_r_JOIN_INNER_0_382_s, &tv_r_JOIN_INNER_0_382_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4342_output: " << tbl_Project_TD_4342_output.getNumRow() << " " << "tbl_Project_TD_4217_output: " << tbl_Project_TD_4217_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_3: " << tvdiff(&tv_r_JOIN_LEFTANTI_3_405_s, &tv_r_JOIN_LEFTANTI_3_405_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_0719_output: " << tbl_JOIN_INNER_TD_0719_output.getNumRow() << " " << "tbl_Project_TD_4342_output: " << tbl_Project_TD_4342_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_435_s, &tv_r_Aggregate_2_435_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_3981_output: " << tbl_JOIN_LEFTANTI_TD_3981_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_700_s, &tv_r_Aggregate_1_700_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2283_output: " << tbl_Aggregate_TD_2283_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_468_s, &tv_r_Sort_0_468_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1307_output: " << tbl_Aggregate_TD_1307_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 11.593285 * 1000 << "ms" << std::endl; 
    return 0; 
}
