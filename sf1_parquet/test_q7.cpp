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
    Table tbl_Sort_TD_0403_output("tbl_Sort_TD_0403_output", 6100000, 4, "");
    tbl_Sort_TD_0403_output.allocateHost();
    Table tbl_Aggregate_TD_1881_output("tbl_Aggregate_TD_1881_output", 6100000, 4, "");
    tbl_Aggregate_TD_1881_output.allocateHost();
    Table tbl_Project_TD_2342_output("tbl_Project_TD_2342_output", 6100000, 4, "");
    tbl_Project_TD_2342_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3522_output("tbl_JOIN_INNER_TD_3522_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_3522_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4424_output("tbl_JOIN_INNER_TD_4424_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_4424_output.allocateHost();
    Table tbl_Project_TD_4855_output("tbl_Project_TD_4855_output", 6100000, 2, "");
    tbl_Project_TD_4855_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5368_output("tbl_JOIN_INNER_TD_5368_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_5368_output.allocateHost();
    Table tbl_Project_TD_5128_output("tbl_Project_TD_5128_output", 6100000, 2, "");
    tbl_Project_TD_5128_output.allocateHost();
    Table tbl_Filter_TD_529_output("tbl_Filter_TD_529_output", 6100000, 2, "");
    tbl_Filter_TD_529_output.allocateHost();
    Table tbl_JOIN_INNER_TD_676_output("tbl_JOIN_INNER_TD_676_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_676_output.allocateHost();
    Table tbl_Project_TD_6973_output("tbl_Project_TD_6973_output", 6100000, 2, "");
    tbl_Project_TD_6973_output.allocateHost();
    Table tbl_Filter_TD_6880_output("tbl_Filter_TD_6880_output", 6100000, 2, "");
    tbl_Filter_TD_6880_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6571_input;
    tbl_SerializeFromObject_TD_6571_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6571_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6571_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6571_input.allocateHost();
    tbl_SerializeFromObject_TD_6571_input.loadHost();
    Table tbl_JOIN_INNER_TD_7649_output("tbl_JOIN_INNER_TD_7649_output", 1829000, 5, "");
    tbl_JOIN_INNER_TD_7649_output.allocateHost();
    Table tbl_Project_TD_7467_output("tbl_Project_TD_7467_output", 6100000, 2, "");
    tbl_Project_TD_7467_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8368_input;
    tbl_SerializeFromObject_TD_8368_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_8368_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_8368_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_8368_input.allocateHost();
    tbl_SerializeFromObject_TD_8368_input.loadHost();
    Table tbl_SerializeFromObject_TD_7397_input;
    tbl_SerializeFromObject_TD_7397_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7397_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_7397_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_7397_input.allocateHost();
    tbl_SerializeFromObject_TD_7397_input.loadHost();
    Table tbl_Project_TD_8675_output("tbl_Project_TD_8675_output", 6100000, 2, "");
    tbl_Project_TD_8675_output.allocateHost();
    Table tbl_Project_TD_8409_output("tbl_Project_TD_8409_output", 6100000, 5, "");
    tbl_Project_TD_8409_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9879_input;
    tbl_SerializeFromObject_TD_9879_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9879_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_9879_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_9879_input.allocateHost();
    tbl_SerializeFromObject_TD_9879_input.loadHost();
    Table tbl_SerializeFromObject_TD_10339_input;
    tbl_SerializeFromObject_TD_10339_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10339_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_10339_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_10339_input.allocateHost();
    tbl_SerializeFromObject_TD_10339_input.loadHost();
    Table tbl_Filter_TD_9537_output("tbl_Filter_TD_9537_output", 6100000, 5, "");
    tbl_Filter_TD_9537_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10428_input;
    tbl_SerializeFromObject_TD_10428_input = Table("lineitem", lineitem_n, 5, in_dir);
    tbl_SerializeFromObject_TD_10428_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10428_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10428_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_10428_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_10428_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_10428_input.allocateHost();
    tbl_SerializeFromObject_TD_10428_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4424_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5368_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5128_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_676_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6973_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7649_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7467_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8675_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8409_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4424_cmds;
    cfg_JOIN_INNER_TD_4424_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4424_gqe_join (cfg_JOIN_INNER_TD_4424_cmds.cmd);
    cfg_JOIN_INNER_TD_4424_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5368_cmds;
    cfg_JOIN_INNER_TD_5368_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5368_gqe_join (cfg_JOIN_INNER_TD_5368_cmds.cmd);
    cfg_JOIN_INNER_TD_5368_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_676_cmds;
    cfg_JOIN_INNER_TD_676_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_676_gqe_join (cfg_JOIN_INNER_TD_676_cmds.cmd);
    cfg_JOIN_INNER_TD_676_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7649_cmds;
    cfg_JOIN_INNER_TD_7649_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7649_gqe_join (cfg_JOIN_INNER_TD_7649_cmds.cmd);
    cfg_JOIN_INNER_TD_7649_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4424;
    krnl_JOIN_INNER_TD_4424 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4424.setup(tbl_Project_TD_5128_output, tbl_JOIN_INNER_TD_5368_output, tbl_JOIN_INNER_TD_4424_output, cfg_JOIN_INNER_TD_4424_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5368;
    krnl_JOIN_INNER_TD_5368 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5368.setup(tbl_JOIN_INNER_TD_676_output, tbl_Project_TD_6973_output, tbl_JOIN_INNER_TD_5368_output, cfg_JOIN_INNER_TD_5368_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_676;
    krnl_JOIN_INNER_TD_676 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_676.setup(tbl_Project_TD_7467_output, tbl_JOIN_INNER_TD_7649_output, tbl_JOIN_INNER_TD_676_output, cfg_JOIN_INNER_TD_676_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7649;
    krnl_JOIN_INNER_TD_7649 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7649.setup(tbl_Project_TD_8675_output, tbl_Project_TD_8409_output, tbl_JOIN_INNER_TD_7649_output, cfg_JOIN_INNER_TD_7649_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4424;
    trans_JOIN_INNER_TD_4424.setq(q_h);
    trans_JOIN_INNER_TD_4424.add(&(cfg_JOIN_INNER_TD_4424_cmds));
    transEngine trans_JOIN_INNER_TD_4424_out;
    trans_JOIN_INNER_TD_4424_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5368;
    trans_JOIN_INNER_TD_5368.setq(q_h);
    trans_JOIN_INNER_TD_5368.add(&(cfg_JOIN_INNER_TD_5368_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_676;
    trans_JOIN_INNER_TD_676.setq(q_h);
    trans_JOIN_INNER_TD_676.add(&(cfg_JOIN_INNER_TD_676_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7649;
    trans_JOIN_INNER_TD_7649.setq(q_h);
    trans_JOIN_INNER_TD_7649.add(&(cfg_JOIN_INNER_TD_7649_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4424;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4424;
    std::vector<cl::Event> events_JOIN_INNER_TD_4424;
    events_h2d_wr_JOIN_INNER_TD_4424.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4424.resize(1);
    events_JOIN_INNER_TD_4424.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4424;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4424;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5368;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5368;
    std::vector<cl::Event> events_JOIN_INNER_TD_5368;
    events_h2d_wr_JOIN_INNER_TD_5368.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5368.resize(1);
    events_JOIN_INNER_TD_5368.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5368;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5368;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_676;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_676;
    std::vector<cl::Event> events_JOIN_INNER_TD_676;
    events_h2d_wr_JOIN_INNER_TD_676.resize(1);
    events_d2h_rd_JOIN_INNER_TD_676.resize(1);
    events_JOIN_INNER_TD_676.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_676;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_676;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7649;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7649;
    std::vector<cl::Event> events_JOIN_INNER_TD_7649;
    events_h2d_wr_JOIN_INNER_TD_7649.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7649.resize(1);
    events_JOIN_INNER_TD_7649.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7649;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7649;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_866_s, tv_r_Filter_9_866_e;
    gettimeofday(&tv_r_Filter_9_866_s, 0);
    SW_Filter_TD_9537(tbl_SerializeFromObject_TD_10428_input, tbl_Filter_TD_9537_output);
    gettimeofday(&tv_r_Filter_9_866_e, 0);

    struct timeval tv_r_Project_8_737_s, tv_r_Project_8_737_e;
    gettimeofday(&tv_r_Project_8_737_s, 0);
    SW_Project_TD_8409(tbl_Filter_TD_9537_output, tbl_Project_TD_8409_output);
    gettimeofday(&tv_r_Project_8_737_e, 0);

    struct timeval tv_r_Project_8_980_s, tv_r_Project_8_980_e;
    gettimeofday(&tv_r_Project_8_980_s, 0);
    SW_Project_TD_8675(tbl_SerializeFromObject_TD_10339_input, tbl_Project_TD_8675_output);
    gettimeofday(&tv_r_Project_8_980_e, 0);

    struct timeval tv_r_Project_7_230_s, tv_r_Project_7_230_e;
    gettimeofday(&tv_r_Project_7_230_s, 0);
    SW_Project_TD_7467(tbl_SerializeFromObject_TD_9879_input, tbl_Project_TD_7467_output);
    gettimeofday(&tv_r_Project_7_230_e, 0);

    struct timeval tv_r_JOIN_INNER_7_675_s, tv_r_JOIN_INNER_7_675_e;
    gettimeofday(&tv_r_JOIN_INNER_7_675_s, 0);
    trans_JOIN_INNER_TD_7649.add(&(tbl_Project_TD_8675_output));
    trans_JOIN_INNER_TD_7649.add(&(tbl_Project_TD_8409_output));
    trans_JOIN_INNER_TD_7649.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7649), &(events_h2d_wr_JOIN_INNER_TD_7649[0]));
    events_grp_JOIN_INNER_TD_7649.push_back(events_h2d_wr_JOIN_INNER_TD_7649[0]);
    krnl_JOIN_INNER_TD_7649.run(0, &(events_grp_JOIN_INNER_TD_7649), &(events_JOIN_INNER_TD_7649[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_675_e, 0);

    struct timeval tv_r_Filter_6_914_s, tv_r_Filter_6_914_e;
    gettimeofday(&tv_r_Filter_6_914_s, 0);
    SW_Filter_TD_6880(tbl_SerializeFromObject_TD_7397_input, tbl_Filter_TD_6880_output);
    gettimeofday(&tv_r_Filter_6_914_e, 0);

    struct timeval tv_r_Project_6_42_s, tv_r_Project_6_42_e;
    gettimeofday(&tv_r_Project_6_42_s, 0);
    SW_Project_TD_6973(tbl_SerializeFromObject_TD_8368_input, tbl_Project_TD_6973_output);
    gettimeofday(&tv_r_Project_6_42_e, 0);

    struct timeval tv_r_JOIN_INNER_6_764_s, tv_r_JOIN_INNER_6_764_e;
    gettimeofday(&tv_r_JOIN_INNER_6_764_s, 0);
    prev_events_grp_JOIN_INNER_TD_676.push_back(events_h2d_wr_JOIN_INNER_TD_7649[0]);
    trans_JOIN_INNER_TD_676.add(&(tbl_Project_TD_7467_output));
    trans_JOIN_INNER_TD_676.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_676), &(events_h2d_wr_JOIN_INNER_TD_676[0]));
    events_grp_JOIN_INNER_TD_676.push_back(events_h2d_wr_JOIN_INNER_TD_676[0]);
    events_grp_JOIN_INNER_TD_676.push_back(events_JOIN_INNER_TD_7649[0]);
    krnl_JOIN_INNER_TD_676.run(0, &(events_grp_JOIN_INNER_TD_676), &(events_JOIN_INNER_TD_676[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_764_e, 0);

    struct timeval tv_r_Filter_5_214_s, tv_r_Filter_5_214_e;
    gettimeofday(&tv_r_Filter_5_214_s, 0);
    SW_Filter_TD_529(tbl_SerializeFromObject_TD_6571_input, tbl_Filter_TD_529_output);
    gettimeofday(&tv_r_Filter_5_214_e, 0);

    struct timeval tv_r_Project_5_699_s, tv_r_Project_5_699_e;
    gettimeofday(&tv_r_Project_5_699_s, 0);
    SW_Project_TD_5128(tbl_Filter_TD_6880_output, tbl_Project_TD_5128_output);
    gettimeofday(&tv_r_Project_5_699_e, 0);

    struct timeval tv_r_JOIN_INNER_5_482_s, tv_r_JOIN_INNER_5_482_e;
    gettimeofday(&tv_r_JOIN_INNER_5_482_s, 0);
    prev_events_grp_JOIN_INNER_TD_5368.push_back(events_h2d_wr_JOIN_INNER_TD_676[0]);
    trans_JOIN_INNER_TD_5368.add(&(tbl_Project_TD_6973_output));
    trans_JOIN_INNER_TD_5368.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5368), &(events_h2d_wr_JOIN_INNER_TD_5368[0]));
    events_grp_JOIN_INNER_TD_5368.push_back(events_h2d_wr_JOIN_INNER_TD_5368[0]);
    events_grp_JOIN_INNER_TD_5368.push_back(events_JOIN_INNER_TD_676[0]);
    krnl_JOIN_INNER_TD_5368.run(0, &(events_grp_JOIN_INNER_TD_5368), &(events_JOIN_INNER_TD_5368[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_482_e, 0);

    struct timeval tv_r_Project_4_514_s, tv_r_Project_4_514_e;
    gettimeofday(&tv_r_Project_4_514_s, 0);
    SW_Project_TD_4855(tbl_Filter_TD_529_output, tbl_Project_TD_4855_output);
    gettimeofday(&tv_r_Project_4_514_e, 0);

    struct timeval tv_r_JOIN_INNER_4_655_s, tv_r_JOIN_INNER_4_655_e;
    gettimeofday(&tv_r_JOIN_INNER_4_655_s, 0);
    prev_events_grp_JOIN_INNER_TD_4424.push_back(events_h2d_wr_JOIN_INNER_TD_5368[0]);
    trans_JOIN_INNER_TD_4424.add(&(tbl_Project_TD_5128_output));
    trans_JOIN_INNER_TD_4424.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4424), &(events_h2d_wr_JOIN_INNER_TD_4424[0]));
    events_grp_JOIN_INNER_TD_4424.push_back(events_h2d_wr_JOIN_INNER_TD_4424[0]);
    events_grp_JOIN_INNER_TD_4424.push_back(events_JOIN_INNER_TD_5368[0]);
    krnl_JOIN_INNER_TD_4424.run(0, &(events_grp_JOIN_INNER_TD_4424), &(events_JOIN_INNER_TD_4424[0]));
    
    trans_JOIN_INNER_TD_4424_out.add(&(tbl_JOIN_INNER_TD_4424_output));
    trans_JOIN_INNER_TD_4424_out.dev2host(0, &(events_JOIN_INNER_TD_4424), &(events_d2h_rd_JOIN_INNER_TD_4424[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_655_e, 0);

    struct timeval tv_r_JOIN_INNER_3_706_s, tv_r_JOIN_INNER_3_706_e;
    gettimeofday(&tv_r_JOIN_INNER_3_706_s, 0);
    SW_JOIN_INNER_TD_3522(tbl_JOIN_INNER_TD_4424_output, tbl_Project_TD_4855_output, tbl_SerializeFromObject_TD_7397_input, tbl_SerializeFromObject_TD_6571_input, tbl_JOIN_INNER_TD_3522_output);
    gettimeofday(&tv_r_JOIN_INNER_3_706_e, 0);

    struct timeval tv_r_Project_2_47_s, tv_r_Project_2_47_e;
    gettimeofday(&tv_r_Project_2_47_s, 0);
    SW_Project_TD_2342(tbl_JOIN_INNER_TD_3522_output, tbl_Project_TD_2342_output);
    gettimeofday(&tv_r_Project_2_47_e, 0);

    struct timeval tv_r_Aggregate_1_171_s, tv_r_Aggregate_1_171_e;
    gettimeofday(&tv_r_Aggregate_1_171_s, 0);
    SW_Aggregate_TD_1881(tbl_Project_TD_2342_output, tbl_Aggregate_TD_1881_output);
    gettimeofday(&tv_r_Aggregate_1_171_e, 0);

    struct timeval tv_r_Sort_0_937_s, tv_r_Sort_0_937_e;
    gettimeofday(&tv_r_Sort_0_937_s, 0);
    SW_Sort_TD_0403(tbl_Aggregate_TD_1881_output, tbl_Sort_TD_0403_output);
    gettimeofday(&tv_r_Sort_0_937_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_866_s, &tv_r_Filter_9_866_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10428_input: " << tbl_SerializeFromObject_TD_10428_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_737_s, &tv_r_Project_8_737_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9537_output: " << tbl_Filter_TD_9537_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_980_s, &tv_r_Project_8_980_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10339_input: " << tbl_SerializeFromObject_TD_10339_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_230_s, &tv_r_Project_7_230_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9879_input: " << tbl_SerializeFromObject_TD_9879_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_675_s, &tv_r_JOIN_INNER_7_675_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8675_output: " << tbl_Project_TD_8675_output.getNumRow() << " " << "tbl_Project_TD_8409_output: " << tbl_Project_TD_8409_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_914_s, &tv_r_Filter_6_914_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7397_input: " << tbl_SerializeFromObject_TD_7397_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_42_s, &tv_r_Project_6_42_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8368_input: " << tbl_SerializeFromObject_TD_8368_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_764_s, &tv_r_JOIN_INNER_6_764_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7649_output: " << tbl_JOIN_INNER_TD_7649_output.getNumRow() << " " << "tbl_Project_TD_7467_output: " << tbl_Project_TD_7467_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_214_s, &tv_r_Filter_5_214_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6571_input: " << tbl_SerializeFromObject_TD_6571_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_699_s, &tv_r_Project_5_699_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6880_output: " << tbl_Filter_TD_6880_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_482_s, &tv_r_JOIN_INNER_5_482_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_676_output: " << tbl_JOIN_INNER_TD_676_output.getNumRow() << " " << "tbl_Project_TD_6973_output: " << tbl_Project_TD_6973_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_514_s, &tv_r_Project_4_514_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_529_output: " << tbl_Filter_TD_529_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_655_s, &tv_r_JOIN_INNER_4_655_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5368_output: " << tbl_JOIN_INNER_TD_5368_output.getNumRow() << " " << "tbl_Project_TD_5128_output: " << tbl_Project_TD_5128_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_706_s, &tv_r_JOIN_INNER_3_706_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4424_output: " << tbl_JOIN_INNER_TD_4424_output.getNumRow() << " " << "tbl_Project_TD_4855_output: " << tbl_Project_TD_4855_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_47_s, &tv_r_Project_2_47_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3522_output: " << tbl_JOIN_INNER_TD_3522_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_171_s, &tv_r_Aggregate_1_171_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2342_output: " << tbl_Project_TD_2342_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_937_s, &tv_r_Sort_0_937_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1881_output: " << tbl_Aggregate_TD_1881_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 7.472079 * 1000 << "ms" << std::endl; 
    return 0; 
}
