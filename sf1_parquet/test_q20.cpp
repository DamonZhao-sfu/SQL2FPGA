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

#include "cfgFunc_q20.hpp" 
#include "q20.hpp" 

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
    std::cout << "NOTE:running query #20\n."; 
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
    Table tbl_Sort_TD_0813_output("tbl_Sort_TD_0813_output", 6100000, 2, "");
    tbl_Sort_TD_0813_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1743_output("tbl_JOIN_INNER_TD_1743_output", 210, 2, "");
    tbl_JOIN_INNER_TD_1743_output.allocateHost();
    Table tbl_Project_TD_2232_output("tbl_Project_TD_2232_output", 6100000, 3, "");
    tbl_Project_TD_2232_output.allocateHost();
    Table tbl_Project_TD_2118_output("tbl_Project_TD_2118_output", 6100000, 1, "");
    tbl_Project_TD_2118_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_3685_output("tbl_JOIN_LEFTSEMI_TD_3685_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_3685_output.allocateHost();
    Table tbl_Filter_TD_3945_output("tbl_Filter_TD_3945_output", 6100000, 1, "");
    tbl_Filter_TD_3945_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute = Table("supplier", supplier_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5893_input;
    tbl_SerializeFromObject_TD_5893_input = Table("supplier", supplier_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5893_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_5893_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_5893_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_5893_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_5893_input.allocateHost();
    tbl_SerializeFromObject_TD_5893_input.loadHost();
    Table tbl_Project_TD_4266_output("tbl_Project_TD_4266_output", 6100000, 1, "");
    tbl_Project_TD_4266_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4817_input;
    tbl_SerializeFromObject_TD_4817_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4817_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_4817_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_4817_input.allocateHost();
    tbl_SerializeFromObject_TD_4817_input.loadHost();
    Table tbl_JOIN_INNER_TD_5811_output("tbl_JOIN_INNER_TD_5811_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5811_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_6378_output("tbl_JOIN_LEFTSEMI_TD_6378_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_6378_output.allocateHost();
    Table tbl_Aggregate_TD_7908_output_preprocess("tbl_Aggregate_TD_7908_output_preprocess", -1, 16, "");
    tbl_Aggregate_TD_7908_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_7908_output("tbl_Aggregate_TD_7908_output", -1, 3, "");
    tbl_Aggregate_TD_7908_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8299_input;
    tbl_SerializeFromObject_TD_8299_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8299_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8299_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8299_input.addCol("ps_availqty", 4);
    tbl_SerializeFromObject_TD_8299_input.allocateHost();
    tbl_SerializeFromObject_TD_8299_input.loadHost();
    Table tbl_Project_TD_7132_output("tbl_Project_TD_7132_output", 6100000, 1, "");
    tbl_Project_TD_7132_output.allocateHost();
    Table tbl_Project_TD_8252_output("tbl_Project_TD_8252_output", 6100000, 3, "");
    tbl_Project_TD_8252_output.allocateHost();
    Table tbl_Filter_TD_8873_output("tbl_Filter_TD_8873_output", 6100000, 1, "");
    tbl_Filter_TD_8873_output.allocateHost();
    Table tbl_Filter_TD_9874_output("tbl_Filter_TD_9874_output", 6100000, 3, "");
    tbl_Filter_TD_9874_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9743_input;
    tbl_SerializeFromObject_TD_9743_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9743_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_9743_input.addCol("p_name", TPCH_READ_P_NAME_LEN+1);
    tbl_SerializeFromObject_TD_9743_input.allocateHost();
    tbl_SerializeFromObject_TD_9743_input.loadHost();
    Table tbl_SerializeFromObject_TD_10875_input;
    tbl_SerializeFromObject_TD_10875_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_10875_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_10875_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10875_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_10875_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_10875_input.allocateHost();
    tbl_SerializeFromObject_TD_10875_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_1743_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2232_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2118_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_7908_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Project_TD_8252_output.allocateDevBuffer(context_a, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_1743_cmds;
    cfg_JOIN_INNER_TD_1743_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1743_gqe_join (cfg_JOIN_INNER_TD_1743_cmds.cmd);
    cfg_JOIN_INNER_TD_1743_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_7908_cmds;
    cfg_Aggregate_TD_7908_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_7908_gqe_aggr(cfg_Aggregate_TD_7908_cmds.cmd);
    cfg_Aggregate_TD_7908_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_7908_cmds_out;
    cfg_Aggregate_TD_7908_cmds_out.allocateHost();
    cfg_Aggregate_TD_7908_cmds_out.allocateDevBuffer(context_a, 33);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_1743;
    krnl_JOIN_INNER_TD_1743 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1743.setup(tbl_Project_TD_2232_output, tbl_Project_TD_2118_output, tbl_JOIN_INNER_TD_1743_output, cfg_JOIN_INNER_TD_1743_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_7908;
    krnl_Aggregate_TD_7908 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_7908.setup(tbl_Project_TD_8252_output, tbl_Aggregate_TD_7908_output_preprocess, cfg_Aggregate_TD_7908_cmds, cfg_Aggregate_TD_7908_cmds_out, buftmp_a);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_1743;
    trans_JOIN_INNER_TD_1743.setq(q_h);
    trans_JOIN_INNER_TD_1743.add(&(cfg_JOIN_INNER_TD_1743_cmds));
    transEngine trans_JOIN_INNER_TD_1743_out;
    trans_JOIN_INNER_TD_1743_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_7908;
    trans_Aggregate_TD_7908.setq(q_a);
    trans_Aggregate_TD_7908.add(&(cfg_Aggregate_TD_7908_cmds));
    transEngine trans_Aggregate_TD_7908_out;
    trans_Aggregate_TD_7908_out.setq(q_a);
    q_a.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1743;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1743;
    std::vector<cl::Event> events_JOIN_INNER_TD_1743;
    events_h2d_wr_JOIN_INNER_TD_1743.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1743.resize(1);
    events_JOIN_INNER_TD_1743.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1743;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1743;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_7908;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_7908;
    std::vector<cl::Event> events_Aggregate_TD_7908;
    events_h2d_wr_Aggregate_TD_7908.resize(1);
    events_d2h_rd_Aggregate_TD_7908.resize(1);
    events_Aggregate_TD_7908.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_7908;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_7908;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_982_s, tv_r_Filter_9_982_e;
    gettimeofday(&tv_r_Filter_9_982_s, 0);
    SW_Filter_TD_9874(tbl_SerializeFromObject_TD_10875_input, tbl_Filter_TD_9874_output);
    gettimeofday(&tv_r_Filter_9_982_e, 0);

    struct timeval tv_r_Filter_8_988_s, tv_r_Filter_8_988_e;
    gettimeofday(&tv_r_Filter_8_988_s, 0);
    SW_Filter_TD_8873(tbl_SerializeFromObject_TD_9743_input, tbl_Filter_TD_8873_output);
    gettimeofday(&tv_r_Filter_8_988_e, 0);

    struct timeval tv_r_Project_8_537_s, tv_r_Project_8_537_e;
    gettimeofday(&tv_r_Project_8_537_s, 0);
    SW_Project_TD_8252(tbl_Filter_TD_9874_output, tbl_Project_TD_8252_output);
    gettimeofday(&tv_r_Project_8_537_e, 0);

    struct timeval tv_r_Project_7_113_s, tv_r_Project_7_113_e;
    gettimeofday(&tv_r_Project_7_113_s, 0);
    SW_Project_TD_7132(tbl_Filter_TD_8873_output, tbl_Project_TD_7132_output);
    gettimeofday(&tv_r_Project_7_113_e, 0);

    struct timeval tv_r_Aggregate_7_620_s, tv_r_Aggregate_7_620_e;
    gettimeofday(&tv_r_Aggregate_7_620_s, 0);
    trans_Aggregate_TD_7908.add(&(tbl_Project_TD_8252_output));
    trans_Aggregate_TD_7908.host2dev(0, &(prev_events_grp_Aggregate_TD_7908), &(events_h2d_wr_Aggregate_TD_7908[0]));
    events_grp_Aggregate_TD_7908.push_back(events_h2d_wr_Aggregate_TD_7908[0]);
    krnl_Aggregate_TD_7908.run(0, &(events_grp_Aggregate_TD_7908), &(events_Aggregate_TD_7908[0]));
    
    trans_Aggregate_TD_7908_out.add(&(tbl_Aggregate_TD_7908_output_preprocess));
    trans_Aggregate_TD_7908_out.dev2host(0, &(events_Aggregate_TD_7908), &(events_d2h_rd_Aggregate_TD_7908[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_7908_consolidate(tbl_Aggregate_TD_7908_output_preprocess, tbl_Aggregate_TD_7908_output);
    gettimeofday(&tv_r_Aggregate_7_620_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_6_316_s, tv_r_JOIN_LEFTSEMI_6_316_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_6_316_s, 0);
    SW_JOIN_LEFTSEMI_TD_6378(tbl_SerializeFromObject_TD_8299_input, tbl_Project_TD_7132_output, tbl_JOIN_LEFTSEMI_TD_6378_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_6_316_e, 0);

    struct timeval tv_r_JOIN_INNER_5_975_s, tv_r_JOIN_INNER_5_975_e;
    gettimeofday(&tv_r_JOIN_INNER_5_975_s, 0);
    SW_JOIN_INNER_TD_5811(tbl_JOIN_LEFTSEMI_TD_6378_output, tbl_Aggregate_TD_7908_output, tbl_JOIN_INNER_TD_5811_output);
    gettimeofday(&tv_r_JOIN_INNER_5_975_e, 0);

    struct timeval tv_r_Project_4_242_s, tv_r_Project_4_242_e;
    gettimeofday(&tv_r_Project_4_242_s, 0);
    SW_Project_TD_4266(tbl_JOIN_INNER_TD_5811_output, tbl_Project_TD_4266_output);
    gettimeofday(&tv_r_Project_4_242_e, 0);

    struct timeval tv_r_Filter_3_498_s, tv_r_Filter_3_498_e;
    gettimeofday(&tv_r_Filter_3_498_s, 0);
    SW_Filter_TD_3945(tbl_SerializeFromObject_TD_4817_input, tbl_Filter_TD_3945_output);
    gettimeofday(&tv_r_Filter_3_498_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_3_735_s, tv_r_JOIN_LEFTSEMI_3_735_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_3_735_s, 0);
    SW_JOIN_LEFTSEMI_TD_3685(tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute, tbl_Project_TD_4266_output, tbl_JOIN_LEFTSEMI_TD_3685_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_3_735_e, 0);

    struct timeval tv_r_Project_2_225_s, tv_r_Project_2_225_e;
    gettimeofday(&tv_r_Project_2_225_s, 0);
    SW_Project_TD_2118(tbl_Filter_TD_3945_output, tbl_Project_TD_2118_output);
    gettimeofday(&tv_r_Project_2_225_e, 0);

    struct timeval tv_r_Project_2_538_s, tv_r_Project_2_538_e;
    gettimeofday(&tv_r_Project_2_538_s, 0);
    SW_Project_TD_2232(tbl_JOIN_LEFTSEMI_TD_3685_output, tbl_Project_TD_2232_output);
    gettimeofday(&tv_r_Project_2_538_e, 0);

    struct timeval tv_r_JOIN_INNER_1_133_s, tv_r_JOIN_INNER_1_133_e;
    gettimeofday(&tv_r_JOIN_INNER_1_133_s, 0);
    trans_JOIN_INNER_TD_1743.add(&(tbl_Project_TD_2232_output));
    trans_JOIN_INNER_TD_1743.add(&(tbl_Project_TD_2118_output));
    trans_JOIN_INNER_TD_1743.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1743), &(events_h2d_wr_JOIN_INNER_TD_1743[0]));
    events_grp_JOIN_INNER_TD_1743.push_back(events_h2d_wr_JOIN_INNER_TD_1743[0]);
    krnl_JOIN_INNER_TD_1743.run(0, &(events_grp_JOIN_INNER_TD_1743), &(events_JOIN_INNER_TD_1743[0]));
    
    trans_JOIN_INNER_TD_1743_out.add(&(tbl_JOIN_INNER_TD_1743_output));
    trans_JOIN_INNER_TD_1743_out.dev2host(0, &(events_JOIN_INNER_TD_1743), &(events_d2h_rd_JOIN_INNER_TD_1743[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_1_133_e, 0);

    struct timeval tv_r_Sort_0_612_s, tv_r_Sort_0_612_e;
    gettimeofday(&tv_r_Sort_0_612_s, 0);
    SW_Sort_TD_0813(tbl_JOIN_INNER_TD_1743_output, tbl_SerializeFromObject_TD_5893_input, tbl_Sort_TD_0813_output);
    gettimeofday(&tv_r_Sort_0_612_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_982_s, &tv_r_Filter_9_982_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10875_input: " << tbl_SerializeFromObject_TD_10875_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_988_s, &tv_r_Filter_8_988_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9743_input: " << tbl_SerializeFromObject_TD_9743_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_537_s, &tv_r_Project_8_537_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9874_output: " << tbl_Filter_TD_9874_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_113_s, &tv_r_Project_7_113_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8873_output: " << tbl_Filter_TD_8873_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_620_s, &tv_r_Aggregate_7_620_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8252_output: " << tbl_Project_TD_8252_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_6: " << tvdiff(&tv_r_JOIN_LEFTSEMI_6_316_s, &tv_r_JOIN_LEFTSEMI_6_316_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8299_input: " << tbl_SerializeFromObject_TD_8299_input.getNumRow() << " " << "tbl_Project_TD_7132_output: " << tbl_Project_TD_7132_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_975_s, &tv_r_JOIN_INNER_5_975_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_6378_output: " << tbl_JOIN_LEFTSEMI_TD_6378_output.getNumRow() << " " << "tbl_Aggregate_TD_7908_output: " << tbl_Aggregate_TD_7908_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_242_s, &tv_r_Project_4_242_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5811_output: " << tbl_JOIN_INNER_TD_5811_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_498_s, &tv_r_Filter_3_498_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4817_input: " << tbl_SerializeFromObject_TD_4817_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_3: " << tvdiff(&tv_r_JOIN_LEFTSEMI_3_735_s, &tv_r_JOIN_LEFTSEMI_3_735_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.getNumRow() << " " << "tbl_Project_TD_4266_output: " << tbl_Project_TD_4266_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_225_s, &tv_r_Project_2_225_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3945_output: " << tbl_Filter_TD_3945_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_538_s, &tv_r_Project_2_538_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_3685_output: " << tbl_JOIN_LEFTSEMI_TD_3685_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_133_s, &tv_r_JOIN_INNER_1_133_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2232_output: " << tbl_Project_TD_2232_output.getNumRow() << " " << "tbl_Project_TD_2118_output: " << tbl_Project_TD_2118_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_612_s, &tv_r_Sort_0_612_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1743_output: " << tbl_JOIN_INNER_TD_1743_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.0498943 * 1000 << "ms" << std::endl; 
    return 0; 
}
