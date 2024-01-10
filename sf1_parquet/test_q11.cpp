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
    Table tbl_Sort_TD_0795_output("tbl_Sort_TD_0795_output", 6100000, 2, "");
    tbl_Sort_TD_0795_output.allocateHost();
    Table tbl_Filter_TD_1569_output("tbl_Filter_TD_1569_output", 6100000, 2, "");
    tbl_Filter_TD_1569_output.allocateHost();
    Table tbl_Aggregate_TD_2344_output_preprocess("tbl_Aggregate_TD_2344_output_preprocess", 600000, 16, "");
    tbl_Aggregate_TD_2344_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_2344_output("tbl_Aggregate_TD_2344_output", 600000, 2, "");
    tbl_Aggregate_TD_2344_output.allocateHost();
    Table tbl_Aggregate_TD_2286_output("tbl_Aggregate_TD_2286_output", 6100000, 1, "");
    tbl_Aggregate_TD_2286_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3615_output_preprocess("tbl_JOIN_INNER_TD_3615_output_preprocess", 393, 3, "");
    tbl_JOIN_INNER_TD_3615_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_3615_output("tbl_JOIN_INNER_TD_3615_output", 393, 3, "");
    tbl_JOIN_INNER_TD_3615_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3566_output("tbl_JOIN_INNER_TD_3566_output", 393, 2, "");
    tbl_JOIN_INNER_TD_3566_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4465_output("tbl_JOIN_INNER_TD_4465_output", 31440, 4, "");
    tbl_JOIN_INNER_TD_4465_output.allocateHost();
    Table tbl_Project_TD_4219_output("tbl_Project_TD_4219_output", 6100000, 1, "");
    tbl_Project_TD_4219_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4458_output("tbl_JOIN_INNER_TD_4458_output", 31440, 3, "");
    tbl_JOIN_INNER_TD_4458_output.allocateHost();
    Table tbl_Project_TD_4299_output("tbl_Project_TD_4299_output", 6100000, 1, "");
    tbl_Project_TD_4299_output.allocateHost();
    Table tbl_Project_TD_5264_output("tbl_Project_TD_5264_output", 6100000, 4, "");
    tbl_Project_TD_5264_output.allocateHost();
    Table tbl_Project_TD_5912_output("tbl_Project_TD_5912_output", 6100000, 2, "");
    tbl_Project_TD_5912_output.allocateHost();
    Table tbl_Filter_TD_5128_output("tbl_Filter_TD_5128_output", 6100000, 1, "");
    tbl_Filter_TD_5128_output.allocateHost();
    Table tbl_Project_TD_5970_output("tbl_Project_TD_5970_output", 6100000, 3, "");
    tbl_Project_TD_5970_output.allocateHost();
    Table tbl_Project_TD_5277_output("tbl_Project_TD_5277_output", 6100000, 2, "");
    tbl_Project_TD_5277_output.allocateHost();
    Table tbl_Filter_TD_5490_output("tbl_Filter_TD_5490_output", 6100000, 1, "");
    tbl_Filter_TD_5490_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7305_input;
    tbl_SerializeFromObject_TD_7305_input = Table("partsupp", partsupp_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7305_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_7305_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_7305_input.addCol("ps_availqty", 4);
    tbl_SerializeFromObject_TD_7305_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_7305_input.allocateHost();
    tbl_SerializeFromObject_TD_7305_input.loadHost();
    Table tbl_SerializeFromObject_TD_7840_input;
    tbl_SerializeFromObject_TD_7840_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7840_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7840_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7840_input.allocateHost();
    tbl_SerializeFromObject_TD_7840_input.loadHost();
    Table tbl_SerializeFromObject_TD_6928_input;
    tbl_SerializeFromObject_TD_6928_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6928_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6928_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6928_input.allocateHost();
    tbl_SerializeFromObject_TD_6928_input.loadHost();
    Table tbl_SerializeFromObject_TD_7852_input;
    tbl_SerializeFromObject_TD_7852_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7852_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_7852_input.addCol("ps_availqty", 4);
    tbl_SerializeFromObject_TD_7852_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_7852_input.allocateHost();
    tbl_SerializeFromObject_TD_7852_input.loadHost();
    Table tbl_SerializeFromObject_TD_7559_input;
    tbl_SerializeFromObject_TD_7559_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7559_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7559_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7559_input.allocateHost();
    tbl_SerializeFromObject_TD_7559_input.loadHost();
    Table tbl_SerializeFromObject_TD_6405_input;
    tbl_SerializeFromObject_TD_6405_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6405_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6405_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6405_input.allocateHost();
    tbl_SerializeFromObject_TD_6405_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_3615_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_2344_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_3615_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3566_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4465_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4219_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4458_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4299_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5264_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5912_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5970_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5277_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_2344_cmds;
    cfg_Aggregate_TD_2344_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_2344_gqe_aggr(cfg_Aggregate_TD_2344_cmds.cmd);
    cfg_Aggregate_TD_2344_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_2344_cmds_out;
    cfg_Aggregate_TD_2344_cmds_out.allocateHost();
    cfg_Aggregate_TD_2344_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_3615_cmds;
    cfg_JOIN_INNER_TD_3615_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3615_gqe_join (cfg_JOIN_INNER_TD_3615_cmds.cmd);
    cfg_JOIN_INNER_TD_3615_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3566_cmds;
    cfg_JOIN_INNER_TD_3566_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3566_gqe_join (cfg_JOIN_INNER_TD_3566_cmds.cmd);
    cfg_JOIN_INNER_TD_3566_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4465_cmds;
    cfg_JOIN_INNER_TD_4465_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4465_gqe_join (cfg_JOIN_INNER_TD_4465_cmds.cmd);
    cfg_JOIN_INNER_TD_4465_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4458_cmds;
    cfg_JOIN_INNER_TD_4458_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4458_gqe_join (cfg_JOIN_INNER_TD_4458_cmds.cmd);
    cfg_JOIN_INNER_TD_4458_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_2344;
    krnl_Aggregate_TD_2344 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_2344.setup(tbl_JOIN_INNER_TD_3615_output, tbl_Aggregate_TD_2344_output_preprocess, cfg_Aggregate_TD_2344_cmds, cfg_Aggregate_TD_2344_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_3615;
    krnl_JOIN_INNER_TD_3615 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3615.setup(tbl_Project_TD_4219_output, tbl_JOIN_INNER_TD_4465_output, tbl_JOIN_INNER_TD_3615_output_preprocess, cfg_JOIN_INNER_TD_3615_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3566;
    krnl_JOIN_INNER_TD_3566 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3566.setup(tbl_Project_TD_4299_output, tbl_JOIN_INNER_TD_4458_output, tbl_JOIN_INNER_TD_3566_output, cfg_JOIN_INNER_TD_3566_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4465;
    krnl_JOIN_INNER_TD_4465 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4465.setup(tbl_Project_TD_5912_output, tbl_Project_TD_5264_output, tbl_JOIN_INNER_TD_4465_output, cfg_JOIN_INNER_TD_4465_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4458;
    krnl_JOIN_INNER_TD_4458 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4458.setup(tbl_Project_TD_5277_output, tbl_Project_TD_5970_output, tbl_JOIN_INNER_TD_4458_output, cfg_JOIN_INNER_TD_4458_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_2344;
    trans_Aggregate_TD_2344.setq(q_a);
    trans_Aggregate_TD_2344.add(&(cfg_Aggregate_TD_2344_cmds));
    transEngine trans_Aggregate_TD_2344_out;
    trans_Aggregate_TD_2344_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_3615;
    trans_JOIN_INNER_TD_3615.setq(q_h);
    trans_JOIN_INNER_TD_3615.add(&(cfg_JOIN_INNER_TD_3615_cmds));
    transEngine trans_JOIN_INNER_TD_3615_out;
    trans_JOIN_INNER_TD_3615_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3566;
    trans_JOIN_INNER_TD_3566.setq(q_h);
    trans_JOIN_INNER_TD_3566.add(&(cfg_JOIN_INNER_TD_3566_cmds));
    transEngine trans_JOIN_INNER_TD_3566_out;
    trans_JOIN_INNER_TD_3566_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4465;
    trans_JOIN_INNER_TD_4465.setq(q_h);
    trans_JOIN_INNER_TD_4465.add(&(cfg_JOIN_INNER_TD_4465_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4458;
    trans_JOIN_INNER_TD_4458.setq(q_h);
    trans_JOIN_INNER_TD_4458.add(&(cfg_JOIN_INNER_TD_4458_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_2344;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_2344;
    std::vector<cl::Event> events_Aggregate_TD_2344;
    events_h2d_wr_Aggregate_TD_2344.resize(1);
    events_d2h_rd_Aggregate_TD_2344.resize(1);
    events_Aggregate_TD_2344.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_2344;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_2344;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3615;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3615;
    std::vector<cl::Event> events_JOIN_INNER_TD_3615;
    events_h2d_wr_JOIN_INNER_TD_3615.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3615.resize(1);
    events_JOIN_INNER_TD_3615.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3615;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3615;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3566;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3566;
    std::vector<cl::Event> events_JOIN_INNER_TD_3566;
    events_h2d_wr_JOIN_INNER_TD_3566.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3566.resize(1);
    events_JOIN_INNER_TD_3566.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3566;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3566;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4465;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4465;
    std::vector<cl::Event> events_JOIN_INNER_TD_4465;
    events_h2d_wr_JOIN_INNER_TD_4465.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4465.resize(1);
    events_JOIN_INNER_TD_4465.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4465;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4465;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4458;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4458;
    std::vector<cl::Event> events_JOIN_INNER_TD_4458;
    events_h2d_wr_JOIN_INNER_TD_4458.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4458.resize(1);
    events_JOIN_INNER_TD_4458.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4458;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4458;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_5_661_s, tv_r_Filter_5_661_e;
    gettimeofday(&tv_r_Filter_5_661_s, 0);
    SW_Filter_TD_5490(tbl_SerializeFromObject_TD_6405_input, tbl_Filter_TD_5490_output);
    gettimeofday(&tv_r_Filter_5_661_e, 0);

    struct timeval tv_r_Project_5_171_s, tv_r_Project_5_171_e;
    gettimeofday(&tv_r_Project_5_171_s, 0);
    SW_Project_TD_5277(tbl_SerializeFromObject_TD_7559_input, tbl_Project_TD_5277_output);
    gettimeofday(&tv_r_Project_5_171_e, 0);

    struct timeval tv_r_Project_5_368_s, tv_r_Project_5_368_e;
    gettimeofday(&tv_r_Project_5_368_s, 0);
    SW_Project_TD_5970(tbl_SerializeFromObject_TD_7852_input, tbl_Project_TD_5970_output);
    gettimeofday(&tv_r_Project_5_368_e, 0);

    struct timeval tv_r_Filter_5_159_s, tv_r_Filter_5_159_e;
    gettimeofday(&tv_r_Filter_5_159_s, 0);
    SW_Filter_TD_5128(tbl_SerializeFromObject_TD_6928_input, tbl_Filter_TD_5128_output);
    gettimeofday(&tv_r_Filter_5_159_e, 0);

    struct timeval tv_r_Project_5_477_s, tv_r_Project_5_477_e;
    gettimeofday(&tv_r_Project_5_477_s, 0);
    SW_Project_TD_5912(tbl_SerializeFromObject_TD_7840_input, tbl_Project_TD_5912_output);
    gettimeofday(&tv_r_Project_5_477_e, 0);

    struct timeval tv_r_Project_5_199_s, tv_r_Project_5_199_e;
    gettimeofday(&tv_r_Project_5_199_s, 0);
    SW_Project_TD_5264(tbl_SerializeFromObject_TD_7305_input, tbl_Project_TD_5264_output);
    gettimeofday(&tv_r_Project_5_199_e, 0);

    struct timeval tv_r_Project_4_484_s, tv_r_Project_4_484_e;
    gettimeofday(&tv_r_Project_4_484_s, 0);
    SW_Project_TD_4299(tbl_Filter_TD_5490_output, tbl_Project_TD_4299_output);
    gettimeofday(&tv_r_Project_4_484_e, 0);

    struct timeval tv_r_JOIN_INNER_4_455_s, tv_r_JOIN_INNER_4_455_e;
    gettimeofday(&tv_r_JOIN_INNER_4_455_s, 0);
    trans_JOIN_INNER_TD_4458.add(&(tbl_Project_TD_5970_output));
    trans_JOIN_INNER_TD_4458.add(&(tbl_Project_TD_5277_output));
    trans_JOIN_INNER_TD_4458.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4458), &(events_h2d_wr_JOIN_INNER_TD_4458[0]));
    events_grp_JOIN_INNER_TD_4458.push_back(events_h2d_wr_JOIN_INNER_TD_4458[0]);
    krnl_JOIN_INNER_TD_4458.run(0, &(events_grp_JOIN_INNER_TD_4458), &(events_JOIN_INNER_TD_4458[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_455_e, 0);

    struct timeval tv_r_Project_4_756_s, tv_r_Project_4_756_e;
    gettimeofday(&tv_r_Project_4_756_s, 0);
    SW_Project_TD_4219(tbl_Filter_TD_5128_output, tbl_Project_TD_4219_output);
    gettimeofday(&tv_r_Project_4_756_e, 0);

    struct timeval tv_r_JOIN_INNER_4_312_s, tv_r_JOIN_INNER_4_312_e;
    gettimeofday(&tv_r_JOIN_INNER_4_312_s, 0);
    trans_JOIN_INNER_TD_4465.add(&(tbl_Project_TD_5264_output));
    trans_JOIN_INNER_TD_4465.add(&(tbl_Project_TD_5912_output));
    trans_JOIN_INNER_TD_4465.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4465), &(events_h2d_wr_JOIN_INNER_TD_4465[0]));
    events_grp_JOIN_INNER_TD_4465.push_back(events_h2d_wr_JOIN_INNER_TD_4465[0]);
    krnl_JOIN_INNER_TD_4465.run(0, &(events_grp_JOIN_INNER_TD_4465), &(events_JOIN_INNER_TD_4465[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_312_e, 0);

    struct timeval tv_r_JOIN_INNER_3_874_s, tv_r_JOIN_INNER_3_874_e;
    gettimeofday(&tv_r_JOIN_INNER_3_874_s, 0);
    prev_events_grp_JOIN_INNER_TD_3566.push_back(events_h2d_wr_JOIN_INNER_TD_4458[0]);
    trans_JOIN_INNER_TD_3566.add(&(tbl_Project_TD_4299_output));
    trans_JOIN_INNER_TD_3566.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3566), &(events_h2d_wr_JOIN_INNER_TD_3566[0]));
    events_grp_JOIN_INNER_TD_3566.push_back(events_h2d_wr_JOIN_INNER_TD_3566[0]);
    events_grp_JOIN_INNER_TD_3566.push_back(events_JOIN_INNER_TD_4458[0]);
    krnl_JOIN_INNER_TD_3566.run(0, &(events_grp_JOIN_INNER_TD_3566), &(events_JOIN_INNER_TD_3566[0]));
    
    trans_JOIN_INNER_TD_3566_out.add(&(tbl_JOIN_INNER_TD_3566_output));
    trans_JOIN_INNER_TD_3566_out.dev2host(0, &(events_JOIN_INNER_TD_3566), &(events_d2h_rd_JOIN_INNER_TD_3566[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_874_e, 0);

    struct timeval tv_r_JOIN_INNER_3_139_s, tv_r_JOIN_INNER_3_139_e;
    gettimeofday(&tv_r_JOIN_INNER_3_139_s, 0);
    prev_events_grp_JOIN_INNER_TD_3615.push_back(events_h2d_wr_JOIN_INNER_TD_4465[0]);
    trans_JOIN_INNER_TD_3615.add(&(tbl_Project_TD_4219_output));
    trans_JOIN_INNER_TD_3615.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3615), &(events_h2d_wr_JOIN_INNER_TD_3615[0]));
    events_grp_JOIN_INNER_TD_3615.push_back(events_h2d_wr_JOIN_INNER_TD_3615[0]);
    events_grp_JOIN_INNER_TD_3615.push_back(events_JOIN_INNER_TD_4465[0]);
    krnl_JOIN_INNER_TD_3615.run(0, &(events_grp_JOIN_INNER_TD_3615), &(events_JOIN_INNER_TD_3615[0]));
    
    trans_JOIN_INNER_TD_3615_out.add(&(tbl_JOIN_INNER_TD_3615_output_preprocess));
    trans_JOIN_INNER_TD_3615_out.dev2host(0, &(events_JOIN_INNER_TD_3615), &(events_d2h_rd_JOIN_INNER_TD_3615[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_3615);
    tbl_JOIN_INNER_TD_3615_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_3615_output));
    gettimeofday(&tv_r_JOIN_INNER_3_139_e, 0);

    struct timeval tv_r_Aggregate_2_236_s, tv_r_Aggregate_2_236_e;
    gettimeofday(&tv_r_Aggregate_2_236_s, 0);
    SW_Aggregate_TD_2286(tbl_JOIN_INNER_TD_3566_output, tbl_Aggregate_TD_2286_output);
    gettimeofday(&tv_r_Aggregate_2_236_e, 0);

    struct timeval tv_r_Aggregate_2_363_s, tv_r_Aggregate_2_363_e;
    gettimeofday(&tv_r_Aggregate_2_363_s, 0);
    trans_Aggregate_TD_2344.add(&(tbl_JOIN_INNER_TD_3615_output));
    trans_Aggregate_TD_2344.host2dev(0, &(prev_events_grp_Aggregate_TD_2344), &(events_h2d_wr_Aggregate_TD_2344[0]));
    events_grp_Aggregate_TD_2344.push_back(events_h2d_wr_Aggregate_TD_2344[0]);
    krnl_Aggregate_TD_2344.run(0, &(events_grp_Aggregate_TD_2344), &(events_Aggregate_TD_2344[0]));
    
    trans_Aggregate_TD_2344_out.add(&(tbl_Aggregate_TD_2344_output_preprocess));
    trans_Aggregate_TD_2344_out.dev2host(0, &(events_Aggregate_TD_2344), &(events_d2h_rd_Aggregate_TD_2344[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_2344_consolidate(tbl_Aggregate_TD_2344_output_preprocess, tbl_Aggregate_TD_2344_output);
    gettimeofday(&tv_r_Aggregate_2_363_e, 0);

    struct timeval tv_r_Filter_1_222_s, tv_r_Filter_1_222_e;
    gettimeofday(&tv_r_Filter_1_222_s, 0);
    SW_Filter_TD_1569(tbl_Aggregate_TD_2344_output, tbl_Aggregate_TD_2286_output, tbl_Filter_TD_1569_output);
    gettimeofday(&tv_r_Filter_1_222_e, 0);

    struct timeval tv_r_Sort_0_864_s, tv_r_Sort_0_864_e;
    gettimeofday(&tv_r_Sort_0_864_s, 0);
    SW_Sort_TD_0795(tbl_Filter_TD_1569_output, tbl_Sort_TD_0795_output);
    gettimeofday(&tv_r_Sort_0_864_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_661_s, &tv_r_Filter_5_661_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6405_input: " << tbl_SerializeFromObject_TD_6405_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_171_s, &tv_r_Project_5_171_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7559_input: " << tbl_SerializeFromObject_TD_7559_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_368_s, &tv_r_Project_5_368_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7852_input: " << tbl_SerializeFromObject_TD_7852_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_159_s, &tv_r_Filter_5_159_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6928_input: " << tbl_SerializeFromObject_TD_6928_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_477_s, &tv_r_Project_5_477_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7840_input: " << tbl_SerializeFromObject_TD_7840_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_199_s, &tv_r_Project_5_199_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7305_input: " << tbl_SerializeFromObject_TD_7305_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_484_s, &tv_r_Project_4_484_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5490_output: " << tbl_Filter_TD_5490_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_455_s, &tv_r_JOIN_INNER_4_455_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5970_output: " << tbl_Project_TD_5970_output.getNumRow() << " " << "tbl_Project_TD_5277_output: " << tbl_Project_TD_5277_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_756_s, &tv_r_Project_4_756_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5128_output: " << tbl_Filter_TD_5128_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_312_s, &tv_r_JOIN_INNER_4_312_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5264_output: " << tbl_Project_TD_5264_output.getNumRow() << " " << "tbl_Project_TD_5912_output: " << tbl_Project_TD_5912_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_874_s, &tv_r_JOIN_INNER_3_874_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4458_output: " << tbl_JOIN_INNER_TD_4458_output.getNumRow() << " " << "tbl_Project_TD_4299_output: " << tbl_Project_TD_4299_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_139_s, &tv_r_JOIN_INNER_3_139_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4465_output: " << tbl_JOIN_INNER_TD_4465_output.getNumRow() << " " << "tbl_Project_TD_4219_output: " << tbl_Project_TD_4219_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_236_s, &tv_r_Aggregate_2_236_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3566_output: " << tbl_JOIN_INNER_TD_3566_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_363_s, &tv_r_Aggregate_2_363_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3615_output: " << tbl_JOIN_INNER_TD_3615_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_1: " << tvdiff(&tv_r_Filter_1_222_s, &tv_r_Filter_1_222_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2344_output: " << tbl_Aggregate_TD_2344_output.getNumRow() << " " << "tbl_Aggregate_TD_2286_output: " << tbl_Aggregate_TD_2286_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_864_s, &tv_r_Sort_0_864_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1569_output: " << tbl_Filter_TD_1569_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.7025144 * 1000 << "ms" << std::endl; 
    return 0; 
}
