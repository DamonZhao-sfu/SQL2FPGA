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
#include "tpcds_read.hpp" 
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
    Table tbl_Sort_TD_030846_output("tbl_Sort_TD_030846_output", 6100000, 4, "");
    tbl_Sort_TD_030846_output.allocateHost();
    Table tbl_Aggregate_TD_1758145_output_preprocess("tbl_Aggregate_TD_1758145_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_1758145_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_1758145_output("tbl_Aggregate_TD_1758145_output", 6100000, 4, "");
    tbl_Aggregate_TD_1758145_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2789433_output_preprocess("tbl_JOIN_INNER_TD_2789433_output_preprocess", 6100000, 5, "");
    tbl_JOIN_INNER_TD_2789433_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_2789433_output("tbl_JOIN_INNER_TD_2789433_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_2789433_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3104616_output("tbl_JOIN_INNER_TD_3104616_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_3104616_output.allocateHost();
    Table tbl_Filter_TD_3387698_output("tbl_Filter_TD_3387698_output", 6100000, 3, "");
    tbl_Filter_TD_3387698_output.allocateHost();
    Table tbl_Filter_TD_4438557_output("tbl_Filter_TD_4438557_output", 6100000, 1, "");
    tbl_Filter_TD_4438557_output.allocateHost();
    Table tbl_Filter_TD_4583076_output("tbl_Filter_TD_4583076_output", 6100000, 4, "");
    tbl_Filter_TD_4583076_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4780844_input;
    tbl_SerializeFromObject_TD_4780844_input = Table("lineitem", lineitem_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_4780844_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_4780844_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_4780844_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_4780844_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_4780844_input.allocateHost();
    tbl_SerializeFromObject_TD_4780844_input.loadHost();
    Table tbl_SerializeFromObject_TD_5309205_input;
    tbl_SerializeFromObject_TD_5309205_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5309205_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_5309205_input.addCol("c_mktsegment", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_5309205_input.allocateHost();
    tbl_SerializeFromObject_TD_5309205_input.loadHost();
    Table tbl_SerializeFromObject_TD_5347556_input;
    tbl_SerializeFromObject_TD_5347556_input = Table("orders", orders_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_5347556_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_5347556_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_5347556_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_5347556_input.addCol("o_shippriority", 4);
    tbl_SerializeFromObject_TD_5347556_input.allocateHost();
    tbl_SerializeFromObject_TD_5347556_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2789433_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_1758145_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_2789433_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3104616_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3387698_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4438557_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4583076_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_1758145_cmds;
    cfg_Aggregate_TD_1758145_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_1758145_gqe_aggr(cfg_Aggregate_TD_1758145_cmds.cmd);
    cfg_Aggregate_TD_1758145_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_1758145_cmds_out;
    cfg_Aggregate_TD_1758145_cmds_out.allocateHost();
    cfg_Aggregate_TD_1758145_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_2789433_cmds;
    cfg_JOIN_INNER_TD_2789433_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2789433_gqe_join (cfg_JOIN_INNER_TD_2789433_cmds.cmd);
    cfg_JOIN_INNER_TD_2789433_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3104616_cmds;
    cfg_JOIN_INNER_TD_3104616_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3104616_gqe_join (cfg_JOIN_INNER_TD_3104616_cmds.cmd);
    cfg_JOIN_INNER_TD_3104616_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_1758145;
    krnl_Aggregate_TD_1758145 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_1758145.setup(tbl_JOIN_INNER_TD_2789433_output, tbl_Aggregate_TD_1758145_output_preprocess, cfg_Aggregate_TD_1758145_cmds, cfg_Aggregate_TD_1758145_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_2789433;
    krnl_JOIN_INNER_TD_2789433 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2789433.setup(tbl_Filter_TD_3387698_output, tbl_JOIN_INNER_TD_3104616_output, tbl_JOIN_INNER_TD_2789433_output_preprocess, cfg_JOIN_INNER_TD_2789433_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3104616;
    krnl_JOIN_INNER_TD_3104616 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3104616.setup(tbl_Filter_TD_4438557_output, tbl_Filter_TD_4583076_output, tbl_JOIN_INNER_TD_3104616_output, cfg_JOIN_INNER_TD_3104616_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_1758145;
    trans_Aggregate_TD_1758145.setq(q_a);
    trans_Aggregate_TD_1758145.add(&(cfg_Aggregate_TD_1758145_cmds));
    transEngine trans_Aggregate_TD_1758145_out;
    trans_Aggregate_TD_1758145_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_2789433;
    trans_JOIN_INNER_TD_2789433.setq(q_h);
    trans_JOIN_INNER_TD_2789433.add(&(cfg_JOIN_INNER_TD_2789433_cmds));
    transEngine trans_JOIN_INNER_TD_2789433_out;
    trans_JOIN_INNER_TD_2789433_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3104616;
    trans_JOIN_INNER_TD_3104616.setq(q_h);
    trans_JOIN_INNER_TD_3104616.add(&(cfg_JOIN_INNER_TD_3104616_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_1758145;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_1758145;
    std::vector<cl::Event> events_Aggregate_TD_1758145;
    events_h2d_wr_Aggregate_TD_1758145.resize(1);
    events_d2h_rd_Aggregate_TD_1758145.resize(1);
    events_Aggregate_TD_1758145.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_1758145;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_1758145;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2789433;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2789433;
    std::vector<cl::Event> events_JOIN_INNER_TD_2789433;
    events_h2d_wr_JOIN_INNER_TD_2789433.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2789433.resize(1);
    events_JOIN_INNER_TD_2789433.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2789433;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2789433;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3104616;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3104616;
    std::vector<cl::Event> events_JOIN_INNER_TD_3104616;
    events_h2d_wr_JOIN_INNER_TD_3104616.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3104616.resize(1);
    events_JOIN_INNER_TD_3104616.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3104616;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3104616;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_669542_s, tv_r_Filter_4_669542_e;
    gettimeofday(&tv_r_Filter_4_669542_s, 0);
    SW_Filter_TD_4583076(tbl_SerializeFromObject_TD_5347556_input, tbl_Filter_TD_4583076_output);
    gettimeofday(&tv_r_Filter_4_669542_e, 0);

    struct timeval tv_r_Filter_4_896912_s, tv_r_Filter_4_896912_e;
    gettimeofday(&tv_r_Filter_4_896912_s, 0);
    SW_Filter_TD_4438557(tbl_SerializeFromObject_TD_5309205_input, tbl_Filter_TD_4438557_output);
    gettimeofday(&tv_r_Filter_4_896912_e, 0);

    struct timeval tv_r_Filter_3_355839_s, tv_r_Filter_3_355839_e;
    gettimeofday(&tv_r_Filter_3_355839_s, 0);
    SW_Filter_TD_3387698(tbl_SerializeFromObject_TD_4780844_input, tbl_Filter_TD_3387698_output);
    gettimeofday(&tv_r_Filter_3_355839_e, 0);

    struct timeval tv_r_JOIN_INNER_3_149581_s, tv_r_JOIN_INNER_3_149581_e;
    gettimeofday(&tv_r_JOIN_INNER_3_149581_s, 0);
    trans_JOIN_INNER_TD_3104616.add(&(tbl_Filter_TD_4438557_output));
    trans_JOIN_INNER_TD_3104616.add(&(tbl_Filter_TD_4583076_output));
    trans_JOIN_INNER_TD_3104616.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3104616), &(events_h2d_wr_JOIN_INNER_TD_3104616[0]));
    events_grp_JOIN_INNER_TD_3104616.push_back(events_h2d_wr_JOIN_INNER_TD_3104616[0]);
    krnl_JOIN_INNER_TD_3104616.run(0, &(events_grp_JOIN_INNER_TD_3104616), &(events_JOIN_INNER_TD_3104616[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_149581_e, 0);

    struct timeval tv_r_JOIN_INNER_2_27874_s, tv_r_JOIN_INNER_2_27874_e;
    gettimeofday(&tv_r_JOIN_INNER_2_27874_s, 0);
    prev_events_grp_JOIN_INNER_TD_2789433.push_back(events_h2d_wr_JOIN_INNER_TD_3104616[0]);
    trans_JOIN_INNER_TD_2789433.add(&(tbl_Filter_TD_3387698_output));
    trans_JOIN_INNER_TD_2789433.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2789433), &(events_h2d_wr_JOIN_INNER_TD_2789433[0]));
    events_grp_JOIN_INNER_TD_2789433.push_back(events_h2d_wr_JOIN_INNER_TD_2789433[0]);
    events_grp_JOIN_INNER_TD_2789433.push_back(events_JOIN_INNER_TD_3104616[0]);
    krnl_JOIN_INNER_TD_2789433.run(0, &(events_grp_JOIN_INNER_TD_2789433), &(events_JOIN_INNER_TD_2789433[0]));
    
    trans_JOIN_INNER_TD_2789433_out.add(&(tbl_JOIN_INNER_TD_2789433_output_preprocess));
    trans_JOIN_INNER_TD_2789433_out.dev2host(0, &(events_JOIN_INNER_TD_2789433), &(events_d2h_rd_JOIN_INNER_TD_2789433[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_2789433);
    tbl_JOIN_INNER_TD_2789433_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_2789433_output));
    gettimeofday(&tv_r_JOIN_INNER_2_27874_e, 0);

    struct timeval tv_r_Aggregate_1_202475_s, tv_r_Aggregate_1_202475_e;
    gettimeofday(&tv_r_Aggregate_1_202475_s, 0);
    trans_Aggregate_TD_1758145.add(&(tbl_JOIN_INNER_TD_2789433_output));
    trans_Aggregate_TD_1758145.host2dev(0, &(prev_events_grp_Aggregate_TD_1758145), &(events_h2d_wr_Aggregate_TD_1758145[0]));
    events_grp_Aggregate_TD_1758145.push_back(events_h2d_wr_Aggregate_TD_1758145[0]);
    krnl_Aggregate_TD_1758145.run(0, &(events_grp_Aggregate_TD_1758145), &(events_Aggregate_TD_1758145[0]));
    
    trans_Aggregate_TD_1758145_out.add(&(tbl_Aggregate_TD_1758145_output_preprocess));
    trans_Aggregate_TD_1758145_out.dev2host(0, &(events_Aggregate_TD_1758145), &(events_d2h_rd_Aggregate_TD_1758145[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_1758145_consolidate(tbl_Aggregate_TD_1758145_output_preprocess, tbl_Aggregate_TD_1758145_output);
    gettimeofday(&tv_r_Aggregate_1_202475_e, 0);

    struct timeval tv_r_Sort_0_180361_s, tv_r_Sort_0_180361_e;
    gettimeofday(&tv_r_Sort_0_180361_s, 0);
    SW_Sort_TD_030846(tbl_Aggregate_TD_1758145_output, tbl_Sort_TD_030846_output);
    gettimeofday(&tv_r_Sort_0_180361_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_669542_s, &tv_r_Filter_4_669542_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5347556_input: " << tbl_SerializeFromObject_TD_5347556_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_896912_s, &tv_r_Filter_4_896912_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5309205_input: " << tbl_SerializeFromObject_TD_5309205_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_355839_s, &tv_r_Filter_3_355839_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4780844_input: " << tbl_SerializeFromObject_TD_4780844_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_149581_s, &tv_r_JOIN_INNER_3_149581_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4438557_output: " << tbl_Filter_TD_4438557_output.getNumRow() << " " << "tbl_Filter_TD_4583076_output: " << tbl_Filter_TD_4583076_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_27874_s, &tv_r_JOIN_INNER_2_27874_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3104616_output: " << tbl_JOIN_INNER_TD_3104616_output.getNumRow() << " " << "tbl_Filter_TD_3387698_output: " << tbl_Filter_TD_3387698_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_202475_s, &tv_r_Aggregate_1_202475_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2789433_output: " << tbl_JOIN_INNER_TD_2789433_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_180361_s, &tv_r_Sort_0_180361_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1758145_output: " << tbl_Aggregate_TD_1758145_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 22.481178 * 1000 << "ms" << std::endl; 
    return 0; 
}
