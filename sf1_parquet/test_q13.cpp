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
    Table tbl_Sort_TD_0431_output("tbl_Sort_TD_0431_output", 6100000, 2, "");
    tbl_Sort_TD_0431_output.allocateHost();
    Table tbl_Aggregate_TD_1999_output_preprocess("tbl_Aggregate_TD_1999_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_1999_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_1999_output("tbl_Aggregate_TD_1999_output", -1, 2, "");
    tbl_Aggregate_TD_1999_output.allocateHost();
    Table tbl_Aggregate_TD_2275_output_preprocess("tbl_Aggregate_TD_2275_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_2275_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_2275_output("tbl_Aggregate_TD_2275_output", -1, 1, "");
    tbl_Aggregate_TD_2275_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3709_output_preprocess("tbl_JOIN_LEFTANTI_TD_3709_output_preprocess", 1531000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3709_output_preprocess.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3709_output("tbl_JOIN_LEFTANTI_TD_3709_output", 1531000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3709_output.allocateHost();
    Table tbl_JOIN_INNER_TD_0806_output("tbl_JOIN_INNER_TD_0806_output", 1480133, 3, "");
    tbl_JOIN_INNER_TD_0806_output.allocateHost();
    Table tbl_Project_TD_4817_output("tbl_Project_TD_4817_output", 6100000, 1, "");
    tbl_Project_TD_4817_output.allocateHost();
    Table tbl_Project_TD_482_output("tbl_Project_TD_482_output", 6100000, 2, "");
    tbl_Project_TD_482_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5591_input;
    tbl_SerializeFromObject_TD_5591_input = Table("customer", customer_n, 1, in_dir);
    tbl_SerializeFromObject_TD_5591_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_5591_input.allocateHost();
    tbl_SerializeFromObject_TD_5591_input.loadHost();
    Table tbl_Filter_TD_5424_output("tbl_Filter_TD_5424_output", 6100000, 2, "");
    tbl_Filter_TD_5424_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6265_input;
    tbl_SerializeFromObject_TD_6265_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_6265_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_6265_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_6265_input.addCol("o_comment", TPCH_READ_O_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_6265_input.allocateHost();
    tbl_SerializeFromObject_TD_6265_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_1999_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_LEFTANTI_TD_3709_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_2275_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_2275_output.allocateDevBuffer(context_a, 32);
    tbl_JOIN_LEFTANTI_TD_3709_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_0806_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4817_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_482_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_1999_cmds;
    cfg_Aggregate_TD_1999_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_1999_gqe_aggr(cfg_Aggregate_TD_1999_cmds.cmd);
    cfg_Aggregate_TD_1999_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_1999_cmds_out;
    cfg_Aggregate_TD_1999_cmds_out.allocateHost();
    cfg_Aggregate_TD_1999_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_2275_cmds;
    cfg_Aggregate_TD_2275_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_2275_gqe_aggr(cfg_Aggregate_TD_2275_cmds.cmd);
    cfg_Aggregate_TD_2275_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_2275_cmds_out;
    cfg_Aggregate_TD_2275_cmds_out.allocateHost();
    cfg_Aggregate_TD_2275_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_LEFTANTI_TD_3709_cmds;
    cfg_JOIN_LEFTANTI_TD_3709_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTANTI_TD_3709_gqe_join (cfg_JOIN_LEFTANTI_TD_3709_cmds.cmd);
    cfg_JOIN_LEFTANTI_TD_3709_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_0806_cmds;
    cfg_JOIN_INNER_TD_0806_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_0806_gqe_join (cfg_JOIN_INNER_TD_0806_cmds.cmd);
    cfg_JOIN_INNER_TD_0806_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_1999;
    krnl_Aggregate_TD_1999 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_1999.setup(tbl_Aggregate_TD_2275_output, tbl_Aggregate_TD_1999_output_preprocess, cfg_Aggregate_TD_1999_cmds, cfg_Aggregate_TD_1999_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_2275;
    krnl_Aggregate_TD_2275 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_2275.setup(tbl_JOIN_LEFTANTI_TD_3709_output, tbl_Aggregate_TD_2275_output_preprocess, cfg_Aggregate_TD_2275_cmds, cfg_Aggregate_TD_2275_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_LEFTANTI_TD_3709;
    krnl_JOIN_LEFTANTI_TD_3709 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTANTI_TD_3709.setup(tbl_Project_TD_4817_output, tbl_JOIN_INNER_TD_0806_output, tbl_JOIN_LEFTANTI_TD_3709_output_preprocess, cfg_JOIN_LEFTANTI_TD_3709_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_0806;
    krnl_JOIN_INNER_TD_0806 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_0806.setup(tbl_Project_TD_4817_output, tbl_Project_TD_482_output, tbl_JOIN_INNER_TD_0806_output, cfg_JOIN_INNER_TD_0806_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_1999;
    trans_Aggregate_TD_1999.setq(q_a);
    trans_Aggregate_TD_1999.add(&(cfg_Aggregate_TD_1999_cmds));
    transEngine trans_Aggregate_TD_1999_out;
    trans_Aggregate_TD_1999_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_2275;
    trans_Aggregate_TD_2275.setq(q_a);
    trans_Aggregate_TD_2275.add(&(cfg_Aggregate_TD_2275_cmds));
    transEngine trans_Aggregate_TD_2275_out;
    trans_Aggregate_TD_2275_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_LEFTANTI_TD_3709;
    trans_JOIN_LEFTANTI_TD_3709.setq(q_h);
    trans_JOIN_LEFTANTI_TD_3709.add(&(cfg_JOIN_LEFTANTI_TD_3709_cmds));
    transEngine trans_JOIN_LEFTANTI_TD_3709_out;
    trans_JOIN_LEFTANTI_TD_3709_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_0806;
    trans_JOIN_INNER_TD_0806.setq(q_h);
    trans_JOIN_INNER_TD_0806.add(&(cfg_JOIN_INNER_TD_0806_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_1999;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_1999;
    std::vector<cl::Event> events_Aggregate_TD_1999;
    events_h2d_wr_Aggregate_TD_1999.resize(1);
    events_d2h_rd_Aggregate_TD_1999.resize(1);
    events_Aggregate_TD_1999.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_1999;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_1999;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_2275;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_2275;
    std::vector<cl::Event> events_Aggregate_TD_2275;
    events_h2d_wr_Aggregate_TD_2275.resize(1);
    events_d2h_rd_Aggregate_TD_2275.resize(1);
    events_Aggregate_TD_2275.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_2275;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_2275;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTANTI_TD_3709;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTANTI_TD_3709;
    std::vector<cl::Event> events_JOIN_LEFTANTI_TD_3709;
    events_h2d_wr_JOIN_LEFTANTI_TD_3709.resize(1);
    events_d2h_rd_JOIN_LEFTANTI_TD_3709.resize(1);
    events_JOIN_LEFTANTI_TD_3709.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTANTI_TD_3709;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTANTI_TD_3709;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_0806;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_0806;
    std::vector<cl::Event> events_JOIN_INNER_TD_0806;
    events_h2d_wr_JOIN_INNER_TD_0806.resize(1);
    events_d2h_rd_JOIN_INNER_TD_0806.resize(1);
    events_JOIN_INNER_TD_0806.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_0806;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_0806;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_467_s, tv_r_Filter_5_467_e;
    gettimeofday(&tv_r_Filter_5_467_s, 0);
    SW_Filter_TD_5424(tbl_SerializeFromObject_TD_6265_input, tbl_Filter_TD_5424_output);
    gettimeofday(&tv_r_Filter_5_467_e, 0);

    struct timeval tv_r_Project_4_458_s, tv_r_Project_4_458_e;
    gettimeofday(&tv_r_Project_4_458_s, 0);
    SW_Project_TD_482(tbl_Filter_TD_5424_output, tbl_Project_TD_482_output);
    gettimeofday(&tv_r_Project_4_458_e, 0);

    struct timeval tv_r_Project_4_299_s, tv_r_Project_4_299_e;
    gettimeofday(&tv_r_Project_4_299_s, 0);
    SW_Project_TD_4817(tbl_SerializeFromObject_TD_5591_input, tbl_Project_TD_4817_output);
    gettimeofday(&tv_r_Project_4_299_e, 0);

    struct timeval tv_r_JOIN_INNER_0_732_s, tv_r_JOIN_INNER_0_732_e;
    gettimeofday(&tv_r_JOIN_INNER_0_732_s, 0);
    trans_JOIN_INNER_TD_0806.add(&(tbl_Project_TD_4817_output));
    trans_JOIN_INNER_TD_0806.add(&(tbl_Project_TD_482_output));
    trans_JOIN_INNER_TD_0806.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_0806), &(events_h2d_wr_JOIN_INNER_TD_0806[0]));
    events_grp_JOIN_INNER_TD_0806.push_back(events_h2d_wr_JOIN_INNER_TD_0806[0]);
    krnl_JOIN_INNER_TD_0806.run(0, &(events_grp_JOIN_INNER_TD_0806), &(events_JOIN_INNER_TD_0806[0]));
    gettimeofday(&tv_r_JOIN_INNER_0_732_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_3_251_s, tv_r_JOIN_LEFTANTI_3_251_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_251_s, 0);
    prev_events_grp_JOIN_LEFTANTI_TD_3709.push_back(events_h2d_wr_JOIN_INNER_TD_0806[0]);
    trans_JOIN_LEFTANTI_TD_3709.add(&(tbl_Project_TD_4817_output));
    trans_JOIN_LEFTANTI_TD_3709.host2dev(0, &(prev_events_grp_JOIN_LEFTANTI_TD_3709), &(events_h2d_wr_JOIN_LEFTANTI_TD_3709[0]));
    events_grp_JOIN_LEFTANTI_TD_3709.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_3709[0]);
    events_grp_JOIN_LEFTANTI_TD_3709.push_back(events_JOIN_INNER_TD_0806[0]);
    krnl_JOIN_LEFTANTI_TD_3709.run(0, &(events_grp_JOIN_LEFTANTI_TD_3709), &(events_JOIN_LEFTANTI_TD_3709[0]));
    
    trans_JOIN_LEFTANTI_TD_3709_out.add(&(tbl_JOIN_LEFTANTI_TD_3709_output_preprocess));
    trans_JOIN_LEFTANTI_TD_3709_out.add(&(tbl_JOIN_INNER_TD_0806_output));
    trans_JOIN_LEFTANTI_TD_3709_out.dev2host(0, &(events_JOIN_LEFTANTI_TD_3709), &(events_d2h_rd_JOIN_LEFTANTI_TD_3709[0]));
    q_h.flush();
    q_h.finish();
    SW_JOIN_LEFTANTI_TD_3709_concatenate(tbl_JOIN_LEFTANTI_TD_3709_output_preprocess, tbl_JOIN_INNER_TD_0806_output);
    tbl_JOIN_LEFTANTI_TD_3709_output_preprocess.copyTableData(&(tbl_JOIN_LEFTANTI_TD_3709_output));
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_251_e, 0);

    struct timeval tv_r_Aggregate_2_855_s, tv_r_Aggregate_2_855_e;
    gettimeofday(&tv_r_Aggregate_2_855_s, 0);
    trans_Aggregate_TD_2275.add(&(tbl_JOIN_LEFTANTI_TD_3709_output));
    trans_Aggregate_TD_2275.host2dev(0, &(prev_events_grp_Aggregate_TD_2275), &(events_h2d_wr_Aggregate_TD_2275[0]));
    events_grp_Aggregate_TD_2275.push_back(events_h2d_wr_Aggregate_TD_2275[0]);
    krnl_Aggregate_TD_2275.run(0, &(events_grp_Aggregate_TD_2275), &(events_Aggregate_TD_2275[0]));
    
    trans_Aggregate_TD_2275_out.add(&(tbl_Aggregate_TD_2275_output_preprocess));
    trans_Aggregate_TD_2275_out.dev2host(0, &(events_Aggregate_TD_2275), &(events_d2h_rd_Aggregate_TD_2275[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_2275_consolidate(tbl_Aggregate_TD_2275_output_preprocess, tbl_Aggregate_TD_2275_output);
    gettimeofday(&tv_r_Aggregate_2_855_e, 0);

    struct timeval tv_r_Aggregate_1_89_s, tv_r_Aggregate_1_89_e;
    gettimeofday(&tv_r_Aggregate_1_89_s, 0);
    prev_events_grp_Aggregate_TD_1999.push_back(events_h2d_wr_Aggregate_TD_2275[0]);
    trans_Aggregate_TD_1999.add(&(tbl_Aggregate_TD_2275_output));
    trans_Aggregate_TD_1999.host2dev(0, &(prev_events_grp_Aggregate_TD_1999), &(events_h2d_wr_Aggregate_TD_1999[0]));
    events_grp_Aggregate_TD_1999.push_back(events_h2d_wr_Aggregate_TD_1999[0]);
    events_grp_Aggregate_TD_1999.push_back(events_Aggregate_TD_2275[0]);
    krnl_Aggregate_TD_1999.run(0, &(events_grp_Aggregate_TD_1999), &(events_Aggregate_TD_1999[0]));
    
    trans_Aggregate_TD_1999_out.add(&(tbl_Aggregate_TD_1999_output_preprocess));
    trans_Aggregate_TD_1999_out.dev2host(0, &(events_Aggregate_TD_1999), &(events_d2h_rd_Aggregate_TD_1999[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_1999_consolidate(tbl_Aggregate_TD_1999_output_preprocess, tbl_Aggregate_TD_1999_output);
    gettimeofday(&tv_r_Aggregate_1_89_e, 0);

    struct timeval tv_r_Sort_0_279_s, tv_r_Sort_0_279_e;
    gettimeofday(&tv_r_Sort_0_279_s, 0);
    SW_Sort_TD_0431(tbl_Aggregate_TD_1999_output, tbl_Sort_TD_0431_output);
    gettimeofday(&tv_r_Sort_0_279_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_467_s, &tv_r_Filter_5_467_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6265_input: " << tbl_SerializeFromObject_TD_6265_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_458_s, &tv_r_Project_4_458_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5424_output: " << tbl_Filter_TD_5424_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_299_s, &tv_r_Project_4_299_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5591_input: " << tbl_SerializeFromObject_TD_5591_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_0: " << tvdiff(&tv_r_JOIN_INNER_0_732_s, &tv_r_JOIN_INNER_0_732_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4817_output: " << tbl_Project_TD_4817_output.getNumRow() << " " << "tbl_Project_TD_482_output: " << tbl_Project_TD_482_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_3: " << tvdiff(&tv_r_JOIN_LEFTANTI_3_251_s, &tv_r_JOIN_LEFTANTI_3_251_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_0806_output: " << tbl_JOIN_INNER_TD_0806_output.getNumRow() << " " << "tbl_Project_TD_4817_output: " << tbl_Project_TD_4817_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_855_s, &tv_r_Aggregate_2_855_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_3709_output: " << tbl_JOIN_LEFTANTI_TD_3709_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_89_s, &tv_r_Aggregate_1_89_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2275_output: " << tbl_Aggregate_TD_2275_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_279_s, &tv_r_Sort_0_279_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1999_output: " << tbl_Aggregate_TD_1999_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 8.844604 * 1000 << "ms" << std::endl; 
    return 0; 
}
