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

#include "cfgFunc_q18.hpp" 
#include "q18.hpp" 

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
    std::cout << "NOTE:running query #18\n."; 
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
    Table tbl_Sort_TD_0338_output("tbl_Sort_TD_0338_output", 6100000, 6, "");
    tbl_Sort_TD_0338_output.allocateHost();
    Table tbl_Aggregate_TD_1591_output("tbl_Aggregate_TD_1591_output", 6100000, 6, "");
    tbl_Aggregate_TD_1591_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2239_output("tbl_JOIN_INNER_TD_2239_output", 100, 6, "");
    tbl_JOIN_INNER_TD_2239_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3607_output("tbl_JOIN_INNER_TD_3607_output", 100, 5, "");
    tbl_JOIN_INNER_TD_3607_output.allocateHost();
    Table tbl_Project_TD_3733_output("tbl_Project_TD_3733_output", 6100000, 2, "");
    tbl_Project_TD_3733_output.allocateHost();
    Table tbl_Project_TD_4227_output("tbl_Project_TD_4227_output", 6100000, 2, "");
    tbl_Project_TD_4227_output.allocateHost();
    Table tbl_Project_TD_4576_output("tbl_Project_TD_4576_output", 6100000, 4, "");
    tbl_Project_TD_4576_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_4174_output("tbl_JOIN_LEFTSEMI_TD_4174_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_4174_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6603_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_6603_input_stringRowIDSubstitute = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6603_input_stringRowIDSubstitute.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_6603_input_stringRowIDSubstitute.addCol("c_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_6603_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_6603_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_6603_input;
    tbl_SerializeFromObject_TD_6603_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6603_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_6603_input.addCol("c_name", TPCH_READ_C_NAME_LEN+1);
    tbl_SerializeFromObject_TD_6603_input.allocateHost();
    tbl_SerializeFromObject_TD_6603_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_563_output("tbl_JOIN_LEFTSEMI_TD_563_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_563_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6669_input;
    tbl_SerializeFromObject_TD_6669_input = Table("lineitem", lineitem_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6669_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_6669_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_6669_input.allocateHost();
    tbl_SerializeFromObject_TD_6669_input.loadHost();
    Table tbl_SerializeFromObject_TD_7683_input;
    tbl_SerializeFromObject_TD_7683_input = Table("orders", orders_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7683_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_7683_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_7683_input.addCol("o_totalprice", 4);
    tbl_SerializeFromObject_TD_7683_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_7683_input.allocateHost();
    tbl_SerializeFromObject_TD_7683_input.loadHost();
    Table tbl_Filter_TD_623_output("tbl_Filter_TD_623_output", 6100000, 1, "");
    tbl_Filter_TD_623_output.allocateHost();
    Table tbl_Aggregate_TD_7384_output_preprocess("tbl_Aggregate_TD_7384_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_7384_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_7384_output("tbl_Aggregate_TD_7384_output", -1, 2, "");
    tbl_Aggregate_TD_7384_output.allocateHost();
    Table tbl_Project_TD_8778_output("tbl_Project_TD_8778_output", 6100000, 2, "");
    tbl_Project_TD_8778_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9246_input;
    tbl_SerializeFromObject_TD_9246_input = Table("lineitem", lineitem_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9246_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_9246_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_9246_input.allocateHost();
    tbl_SerializeFromObject_TD_9246_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2239_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3607_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3733_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4227_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4576_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_7384_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Project_TD_8778_output.allocateDevBuffer(context_a, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2239_cmds;
    cfg_JOIN_INNER_TD_2239_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2239_gqe_join (cfg_JOIN_INNER_TD_2239_cmds.cmd);
    cfg_JOIN_INNER_TD_2239_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3607_cmds;
    cfg_JOIN_INNER_TD_3607_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3607_gqe_join (cfg_JOIN_INNER_TD_3607_cmds.cmd);
    cfg_JOIN_INNER_TD_3607_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_7384_cmds;
    cfg_Aggregate_TD_7384_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_7384_gqe_aggr(cfg_Aggregate_TD_7384_cmds.cmd);
    cfg_Aggregate_TD_7384_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_7384_cmds_out;
    cfg_Aggregate_TD_7384_cmds_out.allocateHost();
    cfg_Aggregate_TD_7384_cmds_out.allocateDevBuffer(context_a, 33);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2239;
    krnl_JOIN_INNER_TD_2239 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2239.setup(tbl_JOIN_INNER_TD_3607_output, tbl_Project_TD_3733_output, tbl_JOIN_INNER_TD_2239_output, cfg_JOIN_INNER_TD_2239_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3607;
    krnl_JOIN_INNER_TD_3607 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3607.setup(tbl_Project_TD_4227_output, tbl_Project_TD_4576_output, tbl_JOIN_INNER_TD_3607_output, cfg_JOIN_INNER_TD_3607_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_7384;
    krnl_Aggregate_TD_7384 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_7384.setup(tbl_Project_TD_8778_output, tbl_Aggregate_TD_7384_output_preprocess, cfg_Aggregate_TD_7384_cmds, cfg_Aggregate_TD_7384_cmds_out, buftmp_a);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2239;
    trans_JOIN_INNER_TD_2239.setq(q_h);
    trans_JOIN_INNER_TD_2239.add(&(cfg_JOIN_INNER_TD_2239_cmds));
    transEngine trans_JOIN_INNER_TD_2239_out;
    trans_JOIN_INNER_TD_2239_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3607;
    trans_JOIN_INNER_TD_3607.setq(q_h);
    trans_JOIN_INNER_TD_3607.add(&(cfg_JOIN_INNER_TD_3607_cmds));
    q_h.finish();
    transEngine trans_Aggregate_TD_7384;
    trans_Aggregate_TD_7384.setq(q_a);
    trans_Aggregate_TD_7384.add(&(cfg_Aggregate_TD_7384_cmds));
    transEngine trans_Aggregate_TD_7384_out;
    trans_Aggregate_TD_7384_out.setq(q_a);
    q_a.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2239;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2239;
    std::vector<cl::Event> events_JOIN_INNER_TD_2239;
    events_h2d_wr_JOIN_INNER_TD_2239.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2239.resize(1);
    events_JOIN_INNER_TD_2239.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2239;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2239;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3607;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3607;
    std::vector<cl::Event> events_JOIN_INNER_TD_3607;
    events_h2d_wr_JOIN_INNER_TD_3607.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3607.resize(1);
    events_JOIN_INNER_TD_3607.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3607;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3607;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_7384;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_7384;
    std::vector<cl::Event> events_Aggregate_TD_7384;
    events_h2d_wr_Aggregate_TD_7384.resize(1);
    events_d2h_rd_Aggregate_TD_7384.resize(1);
    events_Aggregate_TD_7384.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_7384;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_7384;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Project_8_67_s, tv_r_Project_8_67_e;
    gettimeofday(&tv_r_Project_8_67_s, 0);
    SW_Project_TD_8778(tbl_SerializeFromObject_TD_9246_input, tbl_Project_TD_8778_output);
    gettimeofday(&tv_r_Project_8_67_e, 0);

    struct timeval tv_r_Aggregate_7_668_s, tv_r_Aggregate_7_668_e;
    gettimeofday(&tv_r_Aggregate_7_668_s, 0);
    trans_Aggregate_TD_7384.add(&(tbl_Project_TD_8778_output));
    trans_Aggregate_TD_7384.host2dev(0, &(prev_events_grp_Aggregate_TD_7384), &(events_h2d_wr_Aggregate_TD_7384[0]));
    events_grp_Aggregate_TD_7384.push_back(events_h2d_wr_Aggregate_TD_7384[0]);
    krnl_Aggregate_TD_7384.run(0, &(events_grp_Aggregate_TD_7384), &(events_Aggregate_TD_7384[0]));
    
    trans_Aggregate_TD_7384_out.add(&(tbl_Aggregate_TD_7384_output_preprocess));
    trans_Aggregate_TD_7384_out.dev2host(0, &(events_Aggregate_TD_7384), &(events_d2h_rd_Aggregate_TD_7384[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_7384_consolidate(tbl_Aggregate_TD_7384_output_preprocess, tbl_Aggregate_TD_7384_output);
    gettimeofday(&tv_r_Aggregate_7_668_e, 0);

    struct timeval tv_r_Filter_6_417_s, tv_r_Filter_6_417_e;
    gettimeofday(&tv_r_Filter_6_417_s, 0);
    SW_Filter_TD_623(tbl_Aggregate_TD_7384_output, tbl_Filter_TD_623_output);
    gettimeofday(&tv_r_Filter_6_417_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_5_942_s, tv_r_JOIN_LEFTSEMI_5_942_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_942_s, 0);
    SW_JOIN_LEFTSEMI_TD_563(tbl_SerializeFromObject_TD_7683_input, tbl_Filter_TD_623_output, tbl_JOIN_LEFTSEMI_TD_563_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_5_942_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_4_841_s, tv_r_JOIN_LEFTSEMI_4_841_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_841_s, 0);
    SW_JOIN_LEFTSEMI_TD_4174(tbl_SerializeFromObject_TD_6669_input, tbl_Filter_TD_623_output, tbl_JOIN_LEFTSEMI_TD_4174_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_841_e, 0);

    struct timeval tv_r_Project_4_852_s, tv_r_Project_4_852_e;
    gettimeofday(&tv_r_Project_4_852_s, 0);
    SW_Project_TD_4576(tbl_JOIN_LEFTSEMI_TD_563_output, tbl_Project_TD_4576_output);
    gettimeofday(&tv_r_Project_4_852_e, 0);

    struct timeval tv_r_Project_4_551_s, tv_r_Project_4_551_e;
    gettimeofday(&tv_r_Project_4_551_s, 0);
    SW_Project_TD_4227(tbl_SerializeFromObject_TD_6603_input_stringRowIDSubstitute, tbl_Project_TD_4227_output);
    gettimeofday(&tv_r_Project_4_551_e, 0);

    struct timeval tv_r_Project_3_736_s, tv_r_Project_3_736_e;
    gettimeofday(&tv_r_Project_3_736_s, 0);
    SW_Project_TD_3733(tbl_JOIN_LEFTSEMI_TD_4174_output, tbl_Project_TD_3733_output);
    gettimeofday(&tv_r_Project_3_736_e, 0);

    struct timeval tv_r_JOIN_INNER_3_859_s, tv_r_JOIN_INNER_3_859_e;
    gettimeofday(&tv_r_JOIN_INNER_3_859_s, 0);
    trans_JOIN_INNER_TD_3607.add(&(tbl_Project_TD_4227_output));
    trans_JOIN_INNER_TD_3607.add(&(tbl_Project_TD_4576_output));
    trans_JOIN_INNER_TD_3607.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3607), &(events_h2d_wr_JOIN_INNER_TD_3607[0]));
    events_grp_JOIN_INNER_TD_3607.push_back(events_h2d_wr_JOIN_INNER_TD_3607[0]);
    krnl_JOIN_INNER_TD_3607.run(0, &(events_grp_JOIN_INNER_TD_3607), &(events_JOIN_INNER_TD_3607[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_859_e, 0);

    struct timeval tv_r_JOIN_INNER_2_837_s, tv_r_JOIN_INNER_2_837_e;
    gettimeofday(&tv_r_JOIN_INNER_2_837_s, 0);
    prev_events_grp_JOIN_INNER_TD_2239.push_back(events_h2d_wr_JOIN_INNER_TD_3607[0]);
    trans_JOIN_INNER_TD_2239.add(&(tbl_Project_TD_3733_output));
    trans_JOIN_INNER_TD_2239.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2239), &(events_h2d_wr_JOIN_INNER_TD_2239[0]));
    events_grp_JOIN_INNER_TD_2239.push_back(events_h2d_wr_JOIN_INNER_TD_2239[0]);
    events_grp_JOIN_INNER_TD_2239.push_back(events_JOIN_INNER_TD_3607[0]);
    krnl_JOIN_INNER_TD_2239.run(0, &(events_grp_JOIN_INNER_TD_2239), &(events_JOIN_INNER_TD_2239[0]));
    
    trans_JOIN_INNER_TD_2239_out.add(&(tbl_JOIN_INNER_TD_2239_output));
    trans_JOIN_INNER_TD_2239_out.dev2host(0, &(events_JOIN_INNER_TD_2239), &(events_d2h_rd_JOIN_INNER_TD_2239[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_837_e, 0);

    struct timeval tv_r_Aggregate_1_690_s, tv_r_Aggregate_1_690_e;
    gettimeofday(&tv_r_Aggregate_1_690_s, 0);
    SW_Aggregate_TD_1591(tbl_JOIN_INNER_TD_2239_output, tbl_SerializeFromObject_TD_6603_input, tbl_Aggregate_TD_1591_output);
    gettimeofday(&tv_r_Aggregate_1_690_e, 0);

    struct timeval tv_r_Sort_0_192_s, tv_r_Sort_0_192_e;
    gettimeofday(&tv_r_Sort_0_192_s, 0);
    SW_Sort_TD_0338(tbl_Aggregate_TD_1591_output, tbl_Sort_TD_0338_output);
    gettimeofday(&tv_r_Sort_0_192_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_67_s, &tv_r_Project_8_67_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9246_input: " << tbl_SerializeFromObject_TD_9246_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_668_s, &tv_r_Aggregate_7_668_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8778_output: " << tbl_Project_TD_8778_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_417_s, &tv_r_Filter_6_417_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7384_output: " << tbl_Aggregate_TD_7384_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_5: " << tvdiff(&tv_r_JOIN_LEFTSEMI_5_942_s, &tv_r_JOIN_LEFTSEMI_5_942_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7683_input: " << tbl_SerializeFromObject_TD_7683_input.getNumRow() << " " << "tbl_Filter_TD_623_output: " << tbl_Filter_TD_623_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_4: " << tvdiff(&tv_r_JOIN_LEFTSEMI_4_841_s, &tv_r_JOIN_LEFTSEMI_4_841_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6669_input: " << tbl_SerializeFromObject_TD_6669_input.getNumRow() << " " << "tbl_Filter_TD_623_output: " << tbl_Filter_TD_623_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_852_s, &tv_r_Project_4_852_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_563_output: " << tbl_JOIN_LEFTSEMI_TD_563_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_551_s, &tv_r_Project_4_551_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6603_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_6603_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_736_s, &tv_r_Project_3_736_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_4174_output: " << tbl_JOIN_LEFTSEMI_TD_4174_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_859_s, &tv_r_JOIN_INNER_3_859_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4227_output: " << tbl_Project_TD_4227_output.getNumRow() << " " << "tbl_Project_TD_4576_output: " << tbl_Project_TD_4576_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_837_s, &tv_r_JOIN_INNER_2_837_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3607_output: " << tbl_JOIN_INNER_TD_3607_output.getNumRow() << " " << "tbl_Project_TD_3733_output: " << tbl_Project_TD_3733_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_690_s, &tv_r_Aggregate_1_690_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2239_output: " << tbl_JOIN_INNER_TD_2239_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_192_s, &tv_r_Sort_0_192_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1591_output: " << tbl_Aggregate_TD_1591_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 62.24356 * 1000 << "ms" << std::endl; 
    return 0; 
}
