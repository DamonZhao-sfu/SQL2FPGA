// number of overlays (w/o fusion): 5 
// number of overlays (w/ fusion): 5 
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

#include "cfgFunc_q11.hpp" 
#include "q11.hpp" 

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
    std::cout << "NOTE:running query #11\n."; 
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
    Table tbl_Sort_TD_0147_output("tbl_Sort_TD_0147_output", 6100000, 2, "");
    tbl_Sort_TD_0147_output.allocateHost();
    Table tbl_Filter_TD_199_output("tbl_Filter_TD_199_output", 6100000, 2, "");
    tbl_Filter_TD_199_output.allocateHost();
    Table tbl_Aggregate_TD_2487_output_preprocess("tbl_Aggregate_TD_2487_output_preprocess", 600000, 16, "");
    tbl_Aggregate_TD_2487_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_2487_output("tbl_Aggregate_TD_2487_output", 600000, 2, "");
    tbl_Aggregate_TD_2487_output.allocateHost();
    Table tbl_Aggregate_TD_2487_output("tbl_Aggregate_TD_2487_output", 6100000, 1, "");
    tbl_Aggregate_TD_2487_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3365_output_preprocess("tbl_JOIN_INNER_TD_3365_output_preprocess", 393, 3, "");
    tbl_JOIN_INNER_TD_3365_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_3365_output("tbl_JOIN_INNER_TD_3365_output", 393, 3, "");
    tbl_JOIN_INNER_TD_3365_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3314_output("tbl_JOIN_INNER_TD_3314_output", 393, 2, "");
    tbl_JOIN_INNER_TD_3314_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4572_output("tbl_JOIN_INNER_TD_4572_output", 31440, 4, "");
    tbl_JOIN_INNER_TD_4572_output.allocateHost();
    Table tbl_Project_TD_4969_output("tbl_Project_TD_4969_output", 6100000, 1, "");
    tbl_Project_TD_4969_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4795_output("tbl_JOIN_INNER_TD_4795_output", 31440, 3, "");
    tbl_JOIN_INNER_TD_4795_output.allocateHost();
    Table tbl_Project_TD_4131_output("tbl_Project_TD_4131_output", 6100000, 1, "");
    tbl_Project_TD_4131_output.allocateHost();
    Table tbl_Project_TD_552_output("tbl_Project_TD_552_output", 6100000, 4, "");
    tbl_Project_TD_552_output.allocateHost();
    Table tbl_Project_TD_5634_output("tbl_Project_TD_5634_output", 6100000, 2, "");
    tbl_Project_TD_5634_output.allocateHost();
    Table tbl_Filter_TD_5649_output("tbl_Filter_TD_5649_output", 6100000, 1, "");
    tbl_Filter_TD_5649_output.allocateHost();
    Table tbl_Project_TD_5137_output("tbl_Project_TD_5137_output", 6100000, 3, "");
    tbl_Project_TD_5137_output.allocateHost();
    Table tbl_Project_TD_5968_output("tbl_Project_TD_5968_output", 6100000, 2, "");
    tbl_Project_TD_5968_output.allocateHost();
    Table tbl_Filter_TD_5136_output("tbl_Filter_TD_5136_output", 6100000, 1, "");
    tbl_Filter_TD_5136_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7619_input;
    tbl_SerializeFromObject_TD_7619_input = Table("partsupp", partsupp_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7619_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_7619_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_7619_input.addCol("ps_availqty", 4);
    tbl_SerializeFromObject_TD_7619_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_7619_input.allocateHost();
    tbl_SerializeFromObject_TD_7619_input.loadHost();
    Table tbl_SerializeFromObject_TD_7832_input;
    tbl_SerializeFromObject_TD_7832_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7832_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7832_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7832_input.allocateHost();
    tbl_SerializeFromObject_TD_7832_input.loadHost();
    Table tbl_SerializeFromObject_TD_6960_input;
    tbl_SerializeFromObject_TD_6960_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6960_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6960_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6960_input.allocateHost();
    tbl_SerializeFromObject_TD_6960_input.loadHost();
    Table tbl_SerializeFromObject_TD_7594_input;
    tbl_SerializeFromObject_TD_7594_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7594_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_7594_input.addCol("ps_availqty", 4);
    tbl_SerializeFromObject_TD_7594_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_7594_input.allocateHost();
    tbl_SerializeFromObject_TD_7594_input.loadHost();
    Table tbl_SerializeFromObject_TD_7221_input;
    tbl_SerializeFromObject_TD_7221_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7221_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7221_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7221_input.allocateHost();
    tbl_SerializeFromObject_TD_7221_input.loadHost();
    Table tbl_SerializeFromObject_TD_6713_input;
    tbl_SerializeFromObject_TD_6713_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6713_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6713_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6713_input.allocateHost();
    tbl_SerializeFromObject_TD_6713_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_3365_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_2487_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_3365_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3314_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4572_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4969_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4795_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4131_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_552_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5634_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5137_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5968_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_2487_cmds;
    cfg_Aggregate_TD_2487_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_2487_gqe_aggr(cfg_Aggregate_TD_2487_cmds.cmd);
    cfg_Aggregate_TD_2487_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_2487_cmds_out;
    cfg_Aggregate_TD_2487_cmds_out.allocateHost();
    cfg_Aggregate_TD_2487_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_3365_cmds;
    cfg_JOIN_INNER_TD_3365_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3365_gqe_join (cfg_JOIN_INNER_TD_3365_cmds.cmd);
    cfg_JOIN_INNER_TD_3365_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3314_cmds;
    cfg_JOIN_INNER_TD_3314_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3314_gqe_join (cfg_JOIN_INNER_TD_3314_cmds.cmd);
    cfg_JOIN_INNER_TD_3314_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4572_cmds;
    cfg_JOIN_INNER_TD_4572_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4572_gqe_join (cfg_JOIN_INNER_TD_4572_cmds.cmd);
    cfg_JOIN_INNER_TD_4572_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4795_cmds;
    cfg_JOIN_INNER_TD_4795_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4795_gqe_join (cfg_JOIN_INNER_TD_4795_cmds.cmd);
    cfg_JOIN_INNER_TD_4795_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_2487;
    krnl_Aggregate_TD_2487 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_2487.setup(tbl_JOIN_INNER_TD_3365_output, tbl_Aggregate_TD_2487_output_preprocess, cfg_Aggregate_TD_2487_cmds, cfg_Aggregate_TD_2487_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_3365;
    krnl_JOIN_INNER_TD_3365 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3365.setup(tbl_Project_TD_4969_output, tbl_JOIN_INNER_TD_4572_output, tbl_JOIN_INNER_TD_3365_output_preprocess, cfg_JOIN_INNER_TD_3365_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3314;
    krnl_JOIN_INNER_TD_3314 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3314.setup(tbl_Project_TD_4131_output, tbl_JOIN_INNER_TD_4795_output, tbl_JOIN_INNER_TD_3314_output, cfg_JOIN_INNER_TD_3314_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4572;
    krnl_JOIN_INNER_TD_4572 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4572.setup(tbl_Project_TD_5634_output, tbl_Project_TD_552_output, tbl_JOIN_INNER_TD_4572_output, cfg_JOIN_INNER_TD_4572_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4795;
    krnl_JOIN_INNER_TD_4795 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4795.setup(tbl_Project_TD_5968_output, tbl_Project_TD_5137_output, tbl_JOIN_INNER_TD_4795_output, cfg_JOIN_INNER_TD_4795_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_2487;
    trans_Aggregate_TD_2487.setq(q_a);
    trans_Aggregate_TD_2487.add(&(cfg_Aggregate_TD_2487_cmds));
    transEngine trans_Aggregate_TD_2487_out;
    trans_Aggregate_TD_2487_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_3365;
    trans_JOIN_INNER_TD_3365.setq(q_h);
    trans_JOIN_INNER_TD_3365.add(&(cfg_JOIN_INNER_TD_3365_cmds));
    transEngine trans_JOIN_INNER_TD_3365_out;
    trans_JOIN_INNER_TD_3365_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3314;
    trans_JOIN_INNER_TD_3314.setq(q_h);
    trans_JOIN_INNER_TD_3314.add(&(cfg_JOIN_INNER_TD_3314_cmds));
    transEngine trans_JOIN_INNER_TD_3314_out;
    trans_JOIN_INNER_TD_3314_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4572;
    trans_JOIN_INNER_TD_4572.setq(q_h);
    trans_JOIN_INNER_TD_4572.add(&(cfg_JOIN_INNER_TD_4572_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4795;
    trans_JOIN_INNER_TD_4795.setq(q_h);
    trans_JOIN_INNER_TD_4795.add(&(cfg_JOIN_INNER_TD_4795_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_2487;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_2487;
    std::vector<cl::Event> events_Aggregate_TD_2487;
    events_h2d_wr_Aggregate_TD_2487.resize(1);
    events_d2h_rd_Aggregate_TD_2487.resize(1);
    events_Aggregate_TD_2487.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_2487;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_2487;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3365;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3365;
    std::vector<cl::Event> events_JOIN_INNER_TD_3365;
    events_h2d_wr_JOIN_INNER_TD_3365.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3365.resize(1);
    events_JOIN_INNER_TD_3365.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3365;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3365;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3314;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3314;
    std::vector<cl::Event> events_JOIN_INNER_TD_3314;
    events_h2d_wr_JOIN_INNER_TD_3314.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3314.resize(1);
    events_JOIN_INNER_TD_3314.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3314;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3314;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4572;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4572;
    std::vector<cl::Event> events_JOIN_INNER_TD_4572;
    events_h2d_wr_JOIN_INNER_TD_4572.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4572.resize(1);
    events_JOIN_INNER_TD_4572.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4572;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4572;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4795;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4795;
    std::vector<cl::Event> events_JOIN_INNER_TD_4795;
    events_h2d_wr_JOIN_INNER_TD_4795.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4795.resize(1);
    events_JOIN_INNER_TD_4795.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4795;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4795;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_549_s, tv_r_Filter_5_549_e;
    gettimeofday(&tv_r_Filter_5_549_s, 0);
    SW_Filter_TD_5136(tbl_SerializeFromObject_TD_6713_input, tbl_Filter_TD_5136_output);
    gettimeofday(&tv_r_Filter_5_549_e, 0);

    struct timeval tv_r_Project_5_247_s, tv_r_Project_5_247_e;
    gettimeofday(&tv_r_Project_5_247_s, 0);
    SW_Project_TD_5968(tbl_SerializeFromObject_TD_7221_input, tbl_Project_TD_5968_output);
    gettimeofday(&tv_r_Project_5_247_e, 0);

    struct timeval tv_r_Project_5_292_s, tv_r_Project_5_292_e;
    gettimeofday(&tv_r_Project_5_292_s, 0);
    SW_Project_TD_5137(tbl_SerializeFromObject_TD_7594_input, tbl_Project_TD_5137_output);
    gettimeofday(&tv_r_Project_5_292_e, 0);

    struct timeval tv_r_Filter_5_186_s, tv_r_Filter_5_186_e;
    gettimeofday(&tv_r_Filter_5_186_s, 0);
    SW_Filter_TD_5649(tbl_SerializeFromObject_TD_6960_input, tbl_Filter_TD_5649_output);
    gettimeofday(&tv_r_Filter_5_186_e, 0);

    struct timeval tv_r_Project_5_272_s, tv_r_Project_5_272_e;
    gettimeofday(&tv_r_Project_5_272_s, 0);
    SW_Project_TD_5634(tbl_SerializeFromObject_TD_7832_input, tbl_Project_TD_5634_output);
    gettimeofday(&tv_r_Project_5_272_e, 0);

    struct timeval tv_r_Project_5_694_s, tv_r_Project_5_694_e;
    gettimeofday(&tv_r_Project_5_694_s, 0);
    SW_Project_TD_552(tbl_SerializeFromObject_TD_7619_input, tbl_Project_TD_552_output);
    gettimeofday(&tv_r_Project_5_694_e, 0);

    struct timeval tv_r_Project_4_447_s, tv_r_Project_4_447_e;
    gettimeofday(&tv_r_Project_4_447_s, 0);
    SW_Project_TD_4131(tbl_Filter_TD_5136_output, tbl_Project_TD_4131_output);
    gettimeofday(&tv_r_Project_4_447_e, 0);

    struct timeval tv_r_JOIN_INNER_4_806_s, tv_r_JOIN_INNER_4_806_e;
    gettimeofday(&tv_r_JOIN_INNER_4_806_s, 0);
    trans_JOIN_INNER_TD_4795.add(&(tbl_Project_TD_5137_output));
    trans_JOIN_INNER_TD_4795.add(&(tbl_Project_TD_5968_output));
    trans_JOIN_INNER_TD_4795.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4795), &(events_h2d_wr_JOIN_INNER_TD_4795[0]));
    events_grp_JOIN_INNER_TD_4795.push_back(events_h2d_wr_JOIN_INNER_TD_4795[0]);
    krnl_JOIN_INNER_TD_4795.run(0, &(events_grp_JOIN_INNER_TD_4795), &(events_JOIN_INNER_TD_4795[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_806_e, 0);

    struct timeval tv_r_Project_4_498_s, tv_r_Project_4_498_e;
    gettimeofday(&tv_r_Project_4_498_s, 0);
    SW_Project_TD_4969(tbl_Filter_TD_5649_output, tbl_Project_TD_4969_output);
    gettimeofday(&tv_r_Project_4_498_e, 0);

    struct timeval tv_r_JOIN_INNER_4_465_s, tv_r_JOIN_INNER_4_465_e;
    gettimeofday(&tv_r_JOIN_INNER_4_465_s, 0);
    trans_JOIN_INNER_TD_4572.add(&(tbl_Project_TD_552_output));
    trans_JOIN_INNER_TD_4572.add(&(tbl_Project_TD_5634_output));
    trans_JOIN_INNER_TD_4572.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4572), &(events_h2d_wr_JOIN_INNER_TD_4572[0]));
    events_grp_JOIN_INNER_TD_4572.push_back(events_h2d_wr_JOIN_INNER_TD_4572[0]);
    krnl_JOIN_INNER_TD_4572.run(0, &(events_grp_JOIN_INNER_TD_4572), &(events_JOIN_INNER_TD_4572[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_465_e, 0);

    struct timeval tv_r_JOIN_INNER_3_275_s, tv_r_JOIN_INNER_3_275_e;
    gettimeofday(&tv_r_JOIN_INNER_3_275_s, 0);
    prev_events_grp_JOIN_INNER_TD_3314.push_back(events_h2d_wr_JOIN_INNER_TD_4795[0]);
    trans_JOIN_INNER_TD_3314.add(&(tbl_Project_TD_4131_output));
    trans_JOIN_INNER_TD_3314.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3314), &(events_h2d_wr_JOIN_INNER_TD_3314[0]));
    events_grp_JOIN_INNER_TD_3314.push_back(events_h2d_wr_JOIN_INNER_TD_3314[0]);
    events_grp_JOIN_INNER_TD_3314.push_back(events_JOIN_INNER_TD_4795[0]);
    krnl_JOIN_INNER_TD_3314.run(0, &(events_grp_JOIN_INNER_TD_3314), &(events_JOIN_INNER_TD_3314[0]));
    
    trans_JOIN_INNER_TD_3314_out.add(&(tbl_JOIN_INNER_TD_3314_output));
    trans_JOIN_INNER_TD_3314_out.dev2host(0, &(events_JOIN_INNER_TD_3314), &(events_d2h_rd_JOIN_INNER_TD_3314[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_275_e, 0);

    struct timeval tv_r_JOIN_INNER_3_694_s, tv_r_JOIN_INNER_3_694_e;
    gettimeofday(&tv_r_JOIN_INNER_3_694_s, 0);
    prev_events_grp_JOIN_INNER_TD_3365.push_back(events_h2d_wr_JOIN_INNER_TD_4572[0]);
    trans_JOIN_INNER_TD_3365.add(&(tbl_Project_TD_4969_output));
    trans_JOIN_INNER_TD_3365.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3365), &(events_h2d_wr_JOIN_INNER_TD_3365[0]));
    events_grp_JOIN_INNER_TD_3365.push_back(events_h2d_wr_JOIN_INNER_TD_3365[0]);
    events_grp_JOIN_INNER_TD_3365.push_back(events_JOIN_INNER_TD_4572[0]);
    krnl_JOIN_INNER_TD_3365.run(0, &(events_grp_JOIN_INNER_TD_3365), &(events_JOIN_INNER_TD_3365[0]));
    
    trans_JOIN_INNER_TD_3365_out.add(&(tbl_JOIN_INNER_TD_3365_output_preprocess));
    trans_JOIN_INNER_TD_3365_out.dev2host(0, &(events_JOIN_INNER_TD_3365), &(events_d2h_rd_JOIN_INNER_TD_3365[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_3365);
    tbl_JOIN_INNER_TD_3365_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_3365_output));
    gettimeofday(&tv_r_JOIN_INNER_3_694_e, 0);

    struct timeval tv_r_Aggregate_2_746_s, tv_r_Aggregate_2_746_e;
    gettimeofday(&tv_r_Aggregate_2_746_s, 0);
    SW_Aggregate_TD_2487(tbl_JOIN_INNER_TD_3314_output, tbl_Aggregate_TD_2487_output);
    gettimeofday(&tv_r_Aggregate_2_746_e, 0);

    struct timeval tv_r_Aggregate_2_887_s, tv_r_Aggregate_2_887_e;
    gettimeofday(&tv_r_Aggregate_2_887_s, 0);
    trans_Aggregate_TD_2487.add(&(tbl_JOIN_INNER_TD_3365_output));
    trans_Aggregate_TD_2487.host2dev(0, &(prev_events_grp_Aggregate_TD_2487), &(events_h2d_wr_Aggregate_TD_2487[0]));
    events_grp_Aggregate_TD_2487.push_back(events_h2d_wr_Aggregate_TD_2487[0]);
    krnl_Aggregate_TD_2487.run(0, &(events_grp_Aggregate_TD_2487), &(events_Aggregate_TD_2487[0]));
    
    trans_Aggregate_TD_2487_out.add(&(tbl_Aggregate_TD_2487_output_preprocess));
    trans_Aggregate_TD_2487_out.dev2host(0, &(events_Aggregate_TD_2487), &(events_d2h_rd_Aggregate_TD_2487[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_2487_consolidate(tbl_Aggregate_TD_2487_output_preprocess, tbl_Aggregate_TD_2487_output);
    gettimeofday(&tv_r_Aggregate_2_887_e, 0);

    struct timeval tv_r_Filter_1_356_s, tv_r_Filter_1_356_e;
    gettimeofday(&tv_r_Filter_1_356_s, 0);
    SW_Filter_TD_199(tbl_Aggregate_TD_2487_output, tbl_Aggregate_TD_2487_output, tbl_Filter_TD_199_output);
    gettimeofday(&tv_r_Filter_1_356_e, 0);

    struct timeval tv_r_Sort_0_16_s, tv_r_Sort_0_16_e;
    gettimeofday(&tv_r_Sort_0_16_s, 0);
    SW_Sort_TD_0147(tbl_Filter_TD_199_output, tbl_Sort_TD_0147_output);
    gettimeofday(&tv_r_Sort_0_16_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_549_s, &tv_r_Filter_5_549_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6713_input: " << tbl_SerializeFromObject_TD_6713_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_247_s, &tv_r_Project_5_247_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7221_input: " << tbl_SerializeFromObject_TD_7221_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_292_s, &tv_r_Project_5_292_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7594_input: " << tbl_SerializeFromObject_TD_7594_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_186_s, &tv_r_Filter_5_186_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6960_input: " << tbl_SerializeFromObject_TD_6960_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_272_s, &tv_r_Project_5_272_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7832_input: " << tbl_SerializeFromObject_TD_7832_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_694_s, &tv_r_Project_5_694_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7619_input: " << tbl_SerializeFromObject_TD_7619_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_447_s, &tv_r_Project_4_447_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5136_output: " << tbl_Filter_TD_5136_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_806_s, &tv_r_JOIN_INNER_4_806_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5137_output: " << tbl_Project_TD_5137_output.getNumRow() << " " << "tbl_Project_TD_5968_output: " << tbl_Project_TD_5968_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_498_s, &tv_r_Project_4_498_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5649_output: " << tbl_Filter_TD_5649_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_465_s, &tv_r_JOIN_INNER_4_465_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_552_output: " << tbl_Project_TD_552_output.getNumRow() << " " << "tbl_Project_TD_5634_output: " << tbl_Project_TD_5634_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_275_s, &tv_r_JOIN_INNER_3_275_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4795_output: " << tbl_JOIN_INNER_TD_4795_output.getNumRow() << " " << "tbl_Project_TD_4131_output: " << tbl_Project_TD_4131_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_694_s, &tv_r_JOIN_INNER_3_694_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4572_output: " << tbl_JOIN_INNER_TD_4572_output.getNumRow() << " " << "tbl_Project_TD_4969_output: " << tbl_Project_TD_4969_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_746_s, &tv_r_Aggregate_2_746_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3314_output: " << tbl_JOIN_INNER_TD_3314_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_887_s, &tv_r_Aggregate_2_887_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3365_output: " << tbl_JOIN_INNER_TD_3365_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_1: " << tvdiff(&tv_r_Filter_1_356_s, &tv_r_Filter_1_356_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2487_output: " << tbl_Aggregate_TD_2487_output.getNumRow() << " " << "tbl_Aggregate_TD_2487_output: " << tbl_Aggregate_TD_2487_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_16_s, &tv_r_Sort_0_16_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_199_output: " << tbl_Filter_TD_199_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.84580857 * 1000 << "ms" << std::endl; 
    return 0; 
}
