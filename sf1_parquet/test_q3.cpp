// number of overlays (w/o fusion): 3 
// number of overlays (w/ fusion): 3 
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

#include "cfgFunc_q3.hpp" 
#include "q3.hpp" 

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
    std::cout << "NOTE:running query #3\n."; 
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
    Table tbl_Sort_TD_0299_output("tbl_Sort_TD_0299_output", 6100000, 4, "");
    tbl_Sort_TD_0299_output.allocateHost();
    Table tbl_Aggregate_TD_1143_output_preprocess("tbl_Aggregate_TD_1143_output_preprocess", 24000, 16, "");
    tbl_Aggregate_TD_1143_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_1143_output("tbl_Aggregate_TD_1143_output", 24000, 4, "");
    tbl_Aggregate_TD_1143_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2153_output_preprocess("tbl_JOIN_INNER_TD_2153_output_preprocess", 30000, 5, "");
    tbl_JOIN_INNER_TD_2153_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_2153_output("tbl_JOIN_INNER_TD_2153_output", 30000, 5, "");
    tbl_JOIN_INNER_TD_2153_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3364_output("tbl_JOIN_INNER_TD_3364_output", 150000, 3, "");
    tbl_JOIN_INNER_TD_3364_output.allocateHost();
    Table tbl_Project_TD_3697_output("tbl_Project_TD_3697_output", 6100000, 3, "");
    tbl_Project_TD_3697_output.allocateHost();
    Table tbl_Project_TD_4659_output("tbl_Project_TD_4659_output", 6100000, 1, "");
    tbl_Project_TD_4659_output.allocateHost();
    Table tbl_Project_TD_4750_output("tbl_Project_TD_4750_output", 6100000, 4, "");
    tbl_Project_TD_4750_output.allocateHost();
    Table tbl_Filter_TD_4968_output("tbl_Filter_TD_4968_output", 6100000, 3, "");
    tbl_Filter_TD_4968_output.allocateHost();
    Table tbl_Filter_TD_5358_output("tbl_Filter_TD_5358_output", 6100000, 1, "");
    tbl_Filter_TD_5358_output.allocateHost();
    Table tbl_Filter_TD_5524_output("tbl_Filter_TD_5524_output", 6100000, 4, "");
    tbl_Filter_TD_5524_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5359_input;
    tbl_SerializeFromObject_TD_5359_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5359_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_5359_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_5359_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_5359_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_5359_input.allocateHost();
    tbl_SerializeFromObject_TD_5359_input.loadHost();
    Table tbl_SerializeFromObject_TD_6654_input;
    tbl_SerializeFromObject_TD_6654_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6654_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_6654_input.addCol("c_mktsegment", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_6654_input.allocateHost();
    tbl_SerializeFromObject_TD_6654_input.loadHost();
    Table tbl_SerializeFromObject_TD_6459_input;
    tbl_SerializeFromObject_TD_6459_input = Table("orders", orders_n, 4, in_dir);
    tbl_SerializeFromObject_TD_6459_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_6459_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_6459_input.addCol("o_shippriority", 4);
    tbl_SerializeFromObject_TD_6459_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_6459_input.allocateHost();
    tbl_SerializeFromObject_TD_6459_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2153_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_1143_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_2153_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3364_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3697_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4659_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4750_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_1143_cmds;
    cfg_Aggregate_TD_1143_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_1143_gqe_aggr(cfg_Aggregate_TD_1143_cmds.cmd);
    cfg_Aggregate_TD_1143_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_1143_cmds_out;
    cfg_Aggregate_TD_1143_cmds_out.allocateHost();
    cfg_Aggregate_TD_1143_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_2153_cmds;
    cfg_JOIN_INNER_TD_2153_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2153_gqe_join (cfg_JOIN_INNER_TD_2153_cmds.cmd);
    cfg_JOIN_INNER_TD_2153_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3364_cmds;
    cfg_JOIN_INNER_TD_3364_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3364_gqe_join (cfg_JOIN_INNER_TD_3364_cmds.cmd);
    cfg_JOIN_INNER_TD_3364_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_1143;
    krnl_Aggregate_TD_1143 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_1143.setup(tbl_JOIN_INNER_TD_2153_output, tbl_Aggregate_TD_1143_output_preprocess, cfg_Aggregate_TD_1143_cmds, cfg_Aggregate_TD_1143_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_2153;
    krnl_JOIN_INNER_TD_2153 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2153.setup(tbl_Project_TD_3697_output, tbl_JOIN_INNER_TD_3364_output, tbl_JOIN_INNER_TD_2153_output_preprocess, cfg_JOIN_INNER_TD_2153_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3364;
    krnl_JOIN_INNER_TD_3364 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3364.setup(tbl_Project_TD_4659_output, tbl_Project_TD_4750_output, tbl_JOIN_INNER_TD_3364_output, cfg_JOIN_INNER_TD_3364_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_1143;
    trans_Aggregate_TD_1143.setq(q_a);
    trans_Aggregate_TD_1143.add(&(cfg_Aggregate_TD_1143_cmds));
    transEngine trans_Aggregate_TD_1143_out;
    trans_Aggregate_TD_1143_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_2153;
    trans_JOIN_INNER_TD_2153.setq(q_h);
    trans_JOIN_INNER_TD_2153.add(&(cfg_JOIN_INNER_TD_2153_cmds));
    transEngine trans_JOIN_INNER_TD_2153_out;
    trans_JOIN_INNER_TD_2153_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3364;
    trans_JOIN_INNER_TD_3364.setq(q_h);
    trans_JOIN_INNER_TD_3364.add(&(cfg_JOIN_INNER_TD_3364_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_1143;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_1143;
    std::vector<cl::Event> events_Aggregate_TD_1143;
    events_h2d_wr_Aggregate_TD_1143.resize(1);
    events_d2h_rd_Aggregate_TD_1143.resize(1);
    events_Aggregate_TD_1143.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_1143;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_1143;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2153;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2153;
    std::vector<cl::Event> events_JOIN_INNER_TD_2153;
    events_h2d_wr_JOIN_INNER_TD_2153.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2153.resize(1);
    events_JOIN_INNER_TD_2153.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2153;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2153;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3364;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3364;
    std::vector<cl::Event> events_JOIN_INNER_TD_3364;
    events_h2d_wr_JOIN_INNER_TD_3364.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3364.resize(1);
    events_JOIN_INNER_TD_3364.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3364;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3364;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_532_s, tv_r_Filter_5_532_e;
    gettimeofday(&tv_r_Filter_5_532_s, 0);
    SW_Filter_TD_5524(tbl_SerializeFromObject_TD_6459_input, tbl_Filter_TD_5524_output);
    gettimeofday(&tv_r_Filter_5_532_e, 0);

    struct timeval tv_r_Filter_5_956_s, tv_r_Filter_5_956_e;
    gettimeofday(&tv_r_Filter_5_956_s, 0);
    SW_Filter_TD_5358(tbl_SerializeFromObject_TD_6654_input, tbl_Filter_TD_5358_output);
    gettimeofday(&tv_r_Filter_5_956_e, 0);

    struct timeval tv_r_Filter_4_492_s, tv_r_Filter_4_492_e;
    gettimeofday(&tv_r_Filter_4_492_s, 0);
    SW_Filter_TD_4968(tbl_SerializeFromObject_TD_5359_input, tbl_Filter_TD_4968_output);
    gettimeofday(&tv_r_Filter_4_492_e, 0);

    struct timeval tv_r_Project_4_358_s, tv_r_Project_4_358_e;
    gettimeofday(&tv_r_Project_4_358_s, 0);
    SW_Project_TD_4750(tbl_Filter_TD_5524_output, tbl_Project_TD_4750_output);
    gettimeofday(&tv_r_Project_4_358_e, 0);

    struct timeval tv_r_Project_4_244_s, tv_r_Project_4_244_e;
    gettimeofday(&tv_r_Project_4_244_s, 0);
    SW_Project_TD_4659(tbl_Filter_TD_5358_output, tbl_Project_TD_4659_output);
    gettimeofday(&tv_r_Project_4_244_e, 0);

    struct timeval tv_r_Project_3_327_s, tv_r_Project_3_327_e;
    gettimeofday(&tv_r_Project_3_327_s, 0);
    SW_Project_TD_3697(tbl_Filter_TD_4968_output, tbl_Project_TD_3697_output);
    gettimeofday(&tv_r_Project_3_327_e, 0);

    struct timeval tv_r_JOIN_INNER_3_922_s, tv_r_JOIN_INNER_3_922_e;
    gettimeofday(&tv_r_JOIN_INNER_3_922_s, 0);
    trans_JOIN_INNER_TD_3364.add(&(tbl_Project_TD_4659_output));
    trans_JOIN_INNER_TD_3364.add(&(tbl_Project_TD_4750_output));
    trans_JOIN_INNER_TD_3364.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3364), &(events_h2d_wr_JOIN_INNER_TD_3364[0]));
    events_grp_JOIN_INNER_TD_3364.push_back(events_h2d_wr_JOIN_INNER_TD_3364[0]);
    krnl_JOIN_INNER_TD_3364.run(0, &(events_grp_JOIN_INNER_TD_3364), &(events_JOIN_INNER_TD_3364[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_922_e, 0);

    struct timeval tv_r_JOIN_INNER_2_188_s, tv_r_JOIN_INNER_2_188_e;
    gettimeofday(&tv_r_JOIN_INNER_2_188_s, 0);
    prev_events_grp_JOIN_INNER_TD_2153.push_back(events_h2d_wr_JOIN_INNER_TD_3364[0]);
    trans_JOIN_INNER_TD_2153.add(&(tbl_Project_TD_3697_output));
    trans_JOIN_INNER_TD_2153.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2153), &(events_h2d_wr_JOIN_INNER_TD_2153[0]));
    events_grp_JOIN_INNER_TD_2153.push_back(events_h2d_wr_JOIN_INNER_TD_2153[0]);
    events_grp_JOIN_INNER_TD_2153.push_back(events_JOIN_INNER_TD_3364[0]);
    krnl_JOIN_INNER_TD_2153.run(0, &(events_grp_JOIN_INNER_TD_2153), &(events_JOIN_INNER_TD_2153[0]));
    
    trans_JOIN_INNER_TD_2153_out.add(&(tbl_JOIN_INNER_TD_2153_output_preprocess));
    trans_JOIN_INNER_TD_2153_out.dev2host(0, &(events_JOIN_INNER_TD_2153), &(events_d2h_rd_JOIN_INNER_TD_2153[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_2153);
    tbl_JOIN_INNER_TD_2153_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_2153_output));
    gettimeofday(&tv_r_JOIN_INNER_2_188_e, 0);

    struct timeval tv_r_Aggregate_1_152_s, tv_r_Aggregate_1_152_e;
    gettimeofday(&tv_r_Aggregate_1_152_s, 0);
    trans_Aggregate_TD_1143.add(&(tbl_JOIN_INNER_TD_2153_output));
    trans_Aggregate_TD_1143.host2dev(0, &(prev_events_grp_Aggregate_TD_1143), &(events_h2d_wr_Aggregate_TD_1143[0]));
    events_grp_Aggregate_TD_1143.push_back(events_h2d_wr_Aggregate_TD_1143[0]);
    krnl_Aggregate_TD_1143.run(0, &(events_grp_Aggregate_TD_1143), &(events_Aggregate_TD_1143[0]));
    
    trans_Aggregate_TD_1143_out.add(&(tbl_Aggregate_TD_1143_output_preprocess));
    trans_Aggregate_TD_1143_out.dev2host(0, &(events_Aggregate_TD_1143), &(events_d2h_rd_Aggregate_TD_1143[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_1143_consolidate(tbl_Aggregate_TD_1143_output_preprocess, tbl_Aggregate_TD_1143_output);
    gettimeofday(&tv_r_Aggregate_1_152_e, 0);

    struct timeval tv_r_Sort_0_281_s, tv_r_Sort_0_281_e;
    gettimeofday(&tv_r_Sort_0_281_s, 0);
    SW_Sort_TD_0299(tbl_Aggregate_TD_1143_output, tbl_Sort_TD_0299_output);
    gettimeofday(&tv_r_Sort_0_281_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_532_s, &tv_r_Filter_5_532_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6459_input: " << tbl_SerializeFromObject_TD_6459_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_956_s, &tv_r_Filter_5_956_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6654_input: " << tbl_SerializeFromObject_TD_6654_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_492_s, &tv_r_Filter_4_492_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5359_input: " << tbl_SerializeFromObject_TD_5359_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_358_s, &tv_r_Project_4_358_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5524_output: " << tbl_Filter_TD_5524_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_244_s, &tv_r_Project_4_244_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5358_output: " << tbl_Filter_TD_5358_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_327_s, &tv_r_Project_3_327_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4968_output: " << tbl_Filter_TD_4968_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_922_s, &tv_r_JOIN_INNER_3_922_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4659_output: " << tbl_Project_TD_4659_output.getNumRow() << " " << "tbl_Project_TD_4750_output: " << tbl_Project_TD_4750_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_188_s, &tv_r_JOIN_INNER_2_188_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3364_output: " << tbl_JOIN_INNER_TD_3364_output.getNumRow() << " " << "tbl_Project_TD_3697_output: " << tbl_Project_TD_3697_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_152_s, &tv_r_Aggregate_1_152_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2153_output: " << tbl_JOIN_INNER_TD_2153_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_281_s, &tv_r_Sort_0_281_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1143_output: " << tbl_Aggregate_TD_1143_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 7.2407546 * 1000 << "ms" << std::endl; 
    return 0; 
}
