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

#include "cfgFunc_q2.hpp" 
#include "q2.hpp" 

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
    std::cout << "NOTE:running query #2\n."; 
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
    Table tbl_Sort_TD_0491_output("tbl_Sort_TD_0491_output", 6100000, 8, "");
    tbl_Sort_TD_0491_output.allocateHost();
    Table tbl_JOIN_INNER_TD_132_output("tbl_JOIN_INNER_TD_132_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_132_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2859_output("tbl_JOIN_INNER_TD_2859_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_2859_output.allocateHost();
    Table tbl_Project_TD_2522_output("tbl_Project_TD_2522_output", 6100000, 1, "");
    tbl_Project_TD_2522_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3235_output("tbl_JOIN_INNER_TD_3235_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_3235_output.allocateHost();
    Table tbl_Project_TD_3381_output("tbl_Project_TD_3381_output", 6100000, 3, "");
    tbl_Project_TD_3381_output.allocateHost();
    Table tbl_Filter_TD_35_output("tbl_Filter_TD_35_output", 6100000, 1, "");
    tbl_Filter_TD_35_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4876_output("tbl_JOIN_INNER_TD_4876_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4876_output.allocateHost();
    Table tbl_Project_TD_4648_output("tbl_Project_TD_4648_output", 6100000, 7, "");
    tbl_Project_TD_4648_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5208_input;
    tbl_SerializeFromObject_TD_5208_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5208_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5208_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5208_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5208_input.allocateHost();
    tbl_SerializeFromObject_TD_5208_input.loadHost();
    Table tbl_SerializeFromObject_TD_4480_input;
    tbl_SerializeFromObject_TD_4480_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4480_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_4480_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_4480_input.allocateHost();
    tbl_SerializeFromObject_TD_4480_input.loadHost();
    Table tbl_JOIN_INNER_TD_5794_output("tbl_JOIN_INNER_TD_5794_output", 628, 4, "");
    tbl_JOIN_INNER_TD_5794_output.allocateHost();
    Table tbl_Aggregate_TD_6472_output("tbl_Aggregate_TD_6472_output", 6100000, 2, "");
    tbl_Aggregate_TD_6472_output.allocateHost();
    Table tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.addCol("s_phone", 4, 1, 0);
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.addCol("s_comment", 4, 1, 0);
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_645_input;
    tbl_SerializeFromObject_TD_645_input = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_645_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_645_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_645_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_645_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_645_input.addCol("s_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_645_input.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_645_input.addCol("s_comment", TPCH_READ_S_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_645_input.allocateHost();
    tbl_SerializeFromObject_TD_645_input.loadHost();
    Table tbl_Project_TD_6844_output("tbl_Project_TD_6844_output", 6100000, 2, "");
    tbl_Project_TD_6844_output.allocateHost();
    Table tbl_Project_TD_6440_output("tbl_Project_TD_6440_output", 6100000, 3, "");
    tbl_Project_TD_6440_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7591_output("tbl_JOIN_INNER_TD_7591_output", 5, 2, "");
    tbl_JOIN_INNER_TD_7591_output.allocateHost();
    Table tbl_Filter_TD_7704_output("tbl_Filter_TD_7704_output", 6100000, 2, "");
    tbl_Filter_TD_7704_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8183_input;
    tbl_SerializeFromObject_TD_8183_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8183_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8183_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8183_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8183_input.allocateHost();
    tbl_SerializeFromObject_TD_8183_input.loadHost();
    Table tbl_JOIN_INNER_TD_8766_output("tbl_JOIN_INNER_TD_8766_output", 2036, 3, "");
    tbl_JOIN_INNER_TD_8766_output.allocateHost();
    Table tbl_Project_TD_8115_output("tbl_Project_TD_8115_output", 6100000, 1, "");
    tbl_Project_TD_8115_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8284_input;
    tbl_SerializeFromObject_TD_8284_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_8284_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_8284_input.addCol("p_mfgr", TPCH_READ_P_MFG_LEN+1);
    tbl_SerializeFromObject_TD_8284_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_8284_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_8284_input.allocateHost();
    tbl_SerializeFromObject_TD_8284_input.loadHost();
    Table tbl_JOIN_INNER_TD_9982_output("tbl_JOIN_INNER_TD_9982_output", 162880, 3, "");
    tbl_JOIN_INNER_TD_9982_output.allocateHost();
    Table tbl_Project_TD_9990_output("tbl_Project_TD_9990_output", 6100000, 2, "");
    tbl_Project_TD_9990_output.allocateHost();
    Table tbl_Filter_TD_9786_output("tbl_Filter_TD_9786_output", 6100000, 1, "");
    tbl_Filter_TD_9786_output.allocateHost();
    Table tbl_Project_TD_10150_output("tbl_Project_TD_10150_output", 6100000, 3, "");
    tbl_Project_TD_10150_output.allocateHost();
    Table tbl_Project_TD_1097_output("tbl_Project_TD_1097_output", 6100000, 2, "");
    tbl_Project_TD_1097_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11731_input;
    tbl_SerializeFromObject_TD_11731_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_11731_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_11731_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_11731_input.allocateHost();
    tbl_SerializeFromObject_TD_11731_input.loadHost();
    Table tbl_SerializeFromObject_TD_10113_input;
    tbl_SerializeFromObject_TD_10113_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10113_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_10113_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_10113_input.allocateHost();
    tbl_SerializeFromObject_TD_10113_input.loadHost();
    Table tbl_SerializeFromObject_TD_1267_input;
    tbl_SerializeFromObject_TD_1267_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_1267_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_1267_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_1267_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_1267_input.allocateHost();
    tbl_SerializeFromObject_TD_1267_input.loadHost();
    Table tbl_SerializeFromObject_TD_12609_input;
    tbl_SerializeFromObject_TD_12609_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_12609_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_12609_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_12609_input.allocateHost();
    tbl_SerializeFromObject_TD_12609_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5794_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6844_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6440_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7591_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8766_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8115_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9982_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_9990_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10150_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_1097_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5794_cmds;
    cfg_JOIN_INNER_TD_5794_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5794_gqe_join (cfg_JOIN_INNER_TD_5794_cmds.cmd);
    cfg_JOIN_INNER_TD_5794_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7591_cmds;
    cfg_JOIN_INNER_TD_7591_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7591_gqe_join (cfg_JOIN_INNER_TD_7591_cmds.cmd);
    cfg_JOIN_INNER_TD_7591_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8766_cmds;
    cfg_JOIN_INNER_TD_8766_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8766_gqe_join (cfg_JOIN_INNER_TD_8766_cmds.cmd);
    cfg_JOIN_INNER_TD_8766_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9982_cmds;
    cfg_JOIN_INNER_TD_9982_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9982_gqe_join (cfg_JOIN_INNER_TD_9982_cmds.cmd);
    cfg_JOIN_INNER_TD_9982_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5794;
    krnl_JOIN_INNER_TD_5794 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5794.setup(tbl_Project_TD_6440_output, tbl_Project_TD_6844_output, tbl_JOIN_INNER_TD_5794_output, cfg_JOIN_INNER_TD_5794_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7591;
    krnl_JOIN_INNER_TD_7591 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7591.setup(tbl_JOIN_INNER_TD_8766_output, tbl_Project_TD_8115_output, tbl_JOIN_INNER_TD_7591_output, cfg_JOIN_INNER_TD_7591_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8766;
    krnl_JOIN_INNER_TD_8766 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8766.setup(tbl_JOIN_INNER_TD_9982_output, tbl_Project_TD_9990_output, tbl_JOIN_INNER_TD_8766_output, cfg_JOIN_INNER_TD_8766_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9982;
    krnl_JOIN_INNER_TD_9982 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9982.setup(tbl_Project_TD_10150_output, tbl_Project_TD_1097_output, tbl_JOIN_INNER_TD_9982_output, cfg_JOIN_INNER_TD_9982_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5794;
    trans_JOIN_INNER_TD_5794.setq(q_h);
    trans_JOIN_INNER_TD_5794.add(&(cfg_JOIN_INNER_TD_5794_cmds));
    transEngine trans_JOIN_INNER_TD_5794_out;
    trans_JOIN_INNER_TD_5794_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7591;
    trans_JOIN_INNER_TD_7591.setq(q_h);
    trans_JOIN_INNER_TD_7591.add(&(cfg_JOIN_INNER_TD_7591_cmds));
    transEngine trans_JOIN_INNER_TD_7591_out;
    trans_JOIN_INNER_TD_7591_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8766;
    trans_JOIN_INNER_TD_8766.setq(q_h);
    trans_JOIN_INNER_TD_8766.add(&(cfg_JOIN_INNER_TD_8766_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9982;
    trans_JOIN_INNER_TD_9982.setq(q_h);
    trans_JOIN_INNER_TD_9982.add(&(cfg_JOIN_INNER_TD_9982_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5794;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5794;
    std::vector<cl::Event> events_JOIN_INNER_TD_5794;
    events_h2d_wr_JOIN_INNER_TD_5794.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5794.resize(1);
    events_JOIN_INNER_TD_5794.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5794;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5794;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7591;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7591;
    std::vector<cl::Event> events_JOIN_INNER_TD_7591;
    events_h2d_wr_JOIN_INNER_TD_7591.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7591.resize(1);
    events_JOIN_INNER_TD_7591.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7591;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7591;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8766;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8766;
    std::vector<cl::Event> events_JOIN_INNER_TD_8766;
    events_h2d_wr_JOIN_INNER_TD_8766.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8766.resize(1);
    events_JOIN_INNER_TD_8766.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8766;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8766;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9982;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9982;
    std::vector<cl::Event> events_JOIN_INNER_TD_9982;
    events_h2d_wr_JOIN_INNER_TD_9982.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9982.resize(1);
    events_JOIN_INNER_TD_9982.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9982;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9982;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Project_10_786_s, tv_r_Project_10_786_e;
    gettimeofday(&tv_r_Project_10_786_s, 0);
    SW_Project_TD_1097(tbl_SerializeFromObject_TD_12609_input, tbl_Project_TD_1097_output);
    gettimeofday(&tv_r_Project_10_786_e, 0);

    struct timeval tv_r_Project_10_703_s, tv_r_Project_10_703_e;
    gettimeofday(&tv_r_Project_10_703_s, 0);
    SW_Project_TD_10150(tbl_SerializeFromObject_TD_1267_input, tbl_Project_TD_10150_output);
    gettimeofday(&tv_r_Project_10_703_e, 0);

    struct timeval tv_r_Filter_9_184_s, tv_r_Filter_9_184_e;
    gettimeofday(&tv_r_Filter_9_184_s, 0);
    SW_Filter_TD_9786(tbl_SerializeFromObject_TD_10113_input, tbl_Filter_TD_9786_output);
    gettimeofday(&tv_r_Filter_9_184_e, 0);

    struct timeval tv_r_Project_9_483_s, tv_r_Project_9_483_e;
    gettimeofday(&tv_r_Project_9_483_s, 0);
    SW_Project_TD_9990(tbl_SerializeFromObject_TD_11731_input, tbl_Project_TD_9990_output);
    gettimeofday(&tv_r_Project_9_483_e, 0);

    struct timeval tv_r_JOIN_INNER_9_484_s, tv_r_JOIN_INNER_9_484_e;
    gettimeofday(&tv_r_JOIN_INNER_9_484_s, 0);
    trans_JOIN_INNER_TD_9982.add(&(tbl_Project_TD_10150_output));
    trans_JOIN_INNER_TD_9982.add(&(tbl_Project_TD_1097_output));
    trans_JOIN_INNER_TD_9982.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9982), &(events_h2d_wr_JOIN_INNER_TD_9982[0]));
    events_grp_JOIN_INNER_TD_9982.push_back(events_h2d_wr_JOIN_INNER_TD_9982[0]);
    krnl_JOIN_INNER_TD_9982.run(0, &(events_grp_JOIN_INNER_TD_9982), &(events_JOIN_INNER_TD_9982[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_484_e, 0);

    struct timeval tv_r_Project_8_207_s, tv_r_Project_8_207_e;
    gettimeofday(&tv_r_Project_8_207_s, 0);
    SW_Project_TD_8115(tbl_Filter_TD_9786_output, tbl_Project_TD_8115_output);
    gettimeofday(&tv_r_Project_8_207_e, 0);

    struct timeval tv_r_JOIN_INNER_8_434_s, tv_r_JOIN_INNER_8_434_e;
    gettimeofday(&tv_r_JOIN_INNER_8_434_s, 0);
    prev_events_grp_JOIN_INNER_TD_8766.push_back(events_h2d_wr_JOIN_INNER_TD_9982[0]);
    trans_JOIN_INNER_TD_8766.add(&(tbl_Project_TD_9990_output));
    trans_JOIN_INNER_TD_8766.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8766), &(events_h2d_wr_JOIN_INNER_TD_8766[0]));
    events_grp_JOIN_INNER_TD_8766.push_back(events_h2d_wr_JOIN_INNER_TD_8766[0]);
    events_grp_JOIN_INNER_TD_8766.push_back(events_JOIN_INNER_TD_9982[0]);
    krnl_JOIN_INNER_TD_8766.run(0, &(events_grp_JOIN_INNER_TD_8766), &(events_JOIN_INNER_TD_8766[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_434_e, 0);

    struct timeval tv_r_Filter_7_772_s, tv_r_Filter_7_772_e;
    gettimeofday(&tv_r_Filter_7_772_s, 0);
    SW_Filter_TD_7704(tbl_SerializeFromObject_TD_8284_input, tbl_Filter_TD_7704_output);
    gettimeofday(&tv_r_Filter_7_772_e, 0);

    struct timeval tv_r_JOIN_INNER_7_375_s, tv_r_JOIN_INNER_7_375_e;
    gettimeofday(&tv_r_JOIN_INNER_7_375_s, 0);
    prev_events_grp_JOIN_INNER_TD_7591.push_back(events_h2d_wr_JOIN_INNER_TD_8766[0]);
    trans_JOIN_INNER_TD_7591.add(&(tbl_Project_TD_8115_output));
    trans_JOIN_INNER_TD_7591.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7591), &(events_h2d_wr_JOIN_INNER_TD_7591[0]));
    events_grp_JOIN_INNER_TD_7591.push_back(events_h2d_wr_JOIN_INNER_TD_7591[0]);
    events_grp_JOIN_INNER_TD_7591.push_back(events_JOIN_INNER_TD_8766[0]);
    krnl_JOIN_INNER_TD_7591.run(0, &(events_grp_JOIN_INNER_TD_7591), &(events_JOIN_INNER_TD_7591[0]));
    
    trans_JOIN_INNER_TD_7591_out.add(&(tbl_JOIN_INNER_TD_7591_output));
    trans_JOIN_INNER_TD_7591_out.dev2host(0, &(events_JOIN_INNER_TD_7591), &(events_d2h_rd_JOIN_INNER_TD_7591[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_375_e, 0);

    struct timeval tv_r_Project_6_464_s, tv_r_Project_6_464_e;
    gettimeofday(&tv_r_Project_6_464_s, 0);
    SW_Project_TD_6440(tbl_SerializeFromObject_TD_8183_input, tbl_Project_TD_6440_output);
    gettimeofday(&tv_r_Project_6_464_e, 0);

    struct timeval tv_r_Project_6_552_s, tv_r_Project_6_552_e;
    gettimeofday(&tv_r_Project_6_552_s, 0);
    SW_Project_TD_6844(tbl_Filter_TD_7704_output, tbl_Project_TD_6844_output);
    gettimeofday(&tv_r_Project_6_552_e, 0);

    struct timeval tv_r_Aggregate_6_724_s, tv_r_Aggregate_6_724_e;
    gettimeofday(&tv_r_Aggregate_6_724_s, 0);
    SW_Aggregate_TD_6472(tbl_JOIN_INNER_TD_7591_output, tbl_Aggregate_TD_6472_output);
    gettimeofday(&tv_r_Aggregate_6_724_e, 0);

    struct timeval tv_r_JOIN_INNER_5_184_s, tv_r_JOIN_INNER_5_184_e;
    gettimeofday(&tv_r_JOIN_INNER_5_184_s, 0);
    trans_JOIN_INNER_TD_5794.add(&(tbl_Project_TD_6844_output));
    trans_JOIN_INNER_TD_5794.add(&(tbl_Project_TD_6440_output));
    trans_JOIN_INNER_TD_5794.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5794), &(events_h2d_wr_JOIN_INNER_TD_5794[0]));
    events_grp_JOIN_INNER_TD_5794.push_back(events_h2d_wr_JOIN_INNER_TD_5794[0]);
    krnl_JOIN_INNER_TD_5794.run(0, &(events_grp_JOIN_INNER_TD_5794), &(events_JOIN_INNER_TD_5794[0]));
    
    trans_JOIN_INNER_TD_5794_out.add(&(tbl_JOIN_INNER_TD_5794_output));
    trans_JOIN_INNER_TD_5794_out.dev2host(0, &(events_JOIN_INNER_TD_5794), &(events_d2h_rd_JOIN_INNER_TD_5794[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_184_e, 0);

    struct timeval tv_r_Project_4_291_s, tv_r_Project_4_291_e;
    gettimeofday(&tv_r_Project_4_291_s, 0);
    SW_Project_TD_4648(tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute, tbl_Project_TD_4648_output);
    gettimeofday(&tv_r_Project_4_291_e, 0);

    struct timeval tv_r_JOIN_INNER_4_36_s, tv_r_JOIN_INNER_4_36_e;
    gettimeofday(&tv_r_JOIN_INNER_4_36_s, 0);
    SW_JOIN_INNER_TD_4876(tbl_JOIN_INNER_TD_5794_output, tbl_Aggregate_TD_6472_output, tbl_JOIN_INNER_TD_4876_output);
    gettimeofday(&tv_r_JOIN_INNER_4_36_e, 0);

    struct timeval tv_r_Filter_3_228_s, tv_r_Filter_3_228_e;
    gettimeofday(&tv_r_Filter_3_228_s, 0);
    SW_Filter_TD_35(tbl_SerializeFromObject_TD_4480_input, tbl_Filter_TD_35_output);
    gettimeofday(&tv_r_Filter_3_228_e, 0);

    struct timeval tv_r_Project_3_39_s, tv_r_Project_3_39_e;
    gettimeofday(&tv_r_Project_3_39_s, 0);
    SW_Project_TD_3381(tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute, tbl_Project_TD_3381_output);
    gettimeofday(&tv_r_Project_3_39_e, 0);

    struct timeval tv_r_JOIN_INNER_3_238_s, tv_r_JOIN_INNER_3_238_e;
    gettimeofday(&tv_r_JOIN_INNER_3_238_s, 0);
    SW_JOIN_INNER_TD_3235(tbl_JOIN_INNER_TD_4876_output, tbl_Project_TD_4648_output, tbl_JOIN_INNER_TD_3235_output);
    gettimeofday(&tv_r_JOIN_INNER_3_238_e, 0);

    struct timeval tv_r_Project_2_780_s, tv_r_Project_2_780_e;
    gettimeofday(&tv_r_Project_2_780_s, 0);
    SW_Project_TD_2522(tbl_Filter_TD_35_output, tbl_Project_TD_2522_output);
    gettimeofday(&tv_r_Project_2_780_e, 0);

    struct timeval tv_r_JOIN_INNER_2_702_s, tv_r_JOIN_INNER_2_702_e;
    gettimeofday(&tv_r_JOIN_INNER_2_702_s, 0);
    SW_JOIN_INNER_TD_2859(tbl_JOIN_INNER_TD_3235_output, tbl_Project_TD_3381_output, tbl_JOIN_INNER_TD_2859_output);
    gettimeofday(&tv_r_JOIN_INNER_2_702_e, 0);

    struct timeval tv_r_JOIN_INNER_1_498_s, tv_r_JOIN_INNER_1_498_e;
    gettimeofday(&tv_r_JOIN_INNER_1_498_s, 0);
    SW_JOIN_INNER_TD_132(tbl_JOIN_INNER_TD_2859_output, tbl_Project_TD_2522_output, tbl_JOIN_INNER_TD_132_output);
    gettimeofday(&tv_r_JOIN_INNER_1_498_e, 0);

    struct timeval tv_r_Sort_0_332_s, tv_r_Sort_0_332_e;
    gettimeofday(&tv_r_Sort_0_332_s, 0);
    SW_Sort_TD_0491(tbl_JOIN_INNER_TD_132_output, tbl_SerializeFromObject_TD_8284_input, tbl_SerializeFromObject_TD_645_input, tbl_SerializeFromObject_TD_5208_input, tbl_Sort_TD_0491_output);
    gettimeofday(&tv_r_Sort_0_332_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_786_s, &tv_r_Project_10_786_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12609_input: " << tbl_SerializeFromObject_TD_12609_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_703_s, &tv_r_Project_10_703_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1267_input: " << tbl_SerializeFromObject_TD_1267_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_184_s, &tv_r_Filter_9_184_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10113_input: " << tbl_SerializeFromObject_TD_10113_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_9: " << tvdiff(&tv_r_Project_9_483_s, &tv_r_Project_9_483_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11731_input: " << tbl_SerializeFromObject_TD_11731_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_484_s, &tv_r_JOIN_INNER_9_484_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10150_output: " << tbl_Project_TD_10150_output.getNumRow() << " " << "tbl_Project_TD_1097_output: " << tbl_Project_TD_1097_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_207_s, &tv_r_Project_8_207_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9786_output: " << tbl_Filter_TD_9786_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_434_s, &tv_r_JOIN_INNER_8_434_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9982_output: " << tbl_JOIN_INNER_TD_9982_output.getNumRow() << " " << "tbl_Project_TD_9990_output: " << tbl_Project_TD_9990_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_772_s, &tv_r_Filter_7_772_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8284_input: " << tbl_SerializeFromObject_TD_8284_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_375_s, &tv_r_JOIN_INNER_7_375_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8766_output: " << tbl_JOIN_INNER_TD_8766_output.getNumRow() << " " << "tbl_Project_TD_8115_output: " << tbl_Project_TD_8115_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_464_s, &tv_r_Project_6_464_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8183_input: " << tbl_SerializeFromObject_TD_8183_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_552_s, &tv_r_Project_6_552_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7704_output: " << tbl_Filter_TD_7704_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_724_s, &tv_r_Aggregate_6_724_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7591_output: " << tbl_JOIN_INNER_TD_7591_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_184_s, &tv_r_JOIN_INNER_5_184_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6844_output: " << tbl_Project_TD_6844_output.getNumRow() << " " << "tbl_Project_TD_6440_output: " << tbl_Project_TD_6440_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_291_s, &tv_r_Project_4_291_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_645_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_36_s, &tv_r_JOIN_INNER_4_36_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5794_output: " << tbl_JOIN_INNER_TD_5794_output.getNumRow() << " " << "tbl_Aggregate_TD_6472_output: " << tbl_Aggregate_TD_6472_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_228_s, &tv_r_Filter_3_228_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4480_input: " << tbl_SerializeFromObject_TD_4480_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_39_s, &tv_r_Project_3_39_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5208_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_238_s, &tv_r_JOIN_INNER_3_238_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4876_output: " << tbl_JOIN_INNER_TD_4876_output.getNumRow() << " " << "tbl_Project_TD_4648_output: " << tbl_Project_TD_4648_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_780_s, &tv_r_Project_2_780_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_35_output: " << tbl_Filter_TD_35_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_702_s, &tv_r_JOIN_INNER_2_702_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3235_output: " << tbl_JOIN_INNER_TD_3235_output.getNumRow() << " " << "tbl_Project_TD_3381_output: " << tbl_Project_TD_3381_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_498_s, &tv_r_JOIN_INNER_1_498_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2859_output: " << tbl_JOIN_INNER_TD_2859_output.getNumRow() << " " << "tbl_Project_TD_2522_output: " << tbl_Project_TD_2522_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_332_s, &tv_r_Sort_0_332_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_132_output: " << tbl_JOIN_INNER_TD_132_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.6332026 * 1000 << "ms" << std::endl; 
    return 0; 
}
