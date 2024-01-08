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
    Table tbl_Sort_TD_071_output("tbl_Sort_TD_071_output", 6100000, 8, "");
    tbl_Sort_TD_071_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1247_output("tbl_JOIN_INNER_TD_1247_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_1247_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2129_output("tbl_JOIN_INNER_TD_2129_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_2129_output.allocateHost();
    Table tbl_Project_TD_217_output("tbl_Project_TD_217_output", 6100000, 1, "");
    tbl_Project_TD_217_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3210_output("tbl_JOIN_INNER_TD_3210_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_3210_output.allocateHost();
    Table tbl_Project_TD_3657_output("tbl_Project_TD_3657_output", 6100000, 3, "");
    tbl_Project_TD_3657_output.allocateHost();
    Table tbl_Filter_TD_3908_output("tbl_Filter_TD_3908_output", 6100000, 1, "");
    tbl_Filter_TD_3908_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4713_output("tbl_JOIN_INNER_TD_4713_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4713_output.allocateHost();
    Table tbl_Project_TD_4142_output("tbl_Project_TD_4142_output", 6100000, 7, "");
    tbl_Project_TD_4142_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5583_input;
    tbl_SerializeFromObject_TD_5583_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5583_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5583_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5583_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5583_input.allocateHost();
    tbl_SerializeFromObject_TD_5583_input.loadHost();
    Table tbl_SerializeFromObject_TD_4670_input;
    tbl_SerializeFromObject_TD_4670_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4670_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_4670_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_4670_input.allocateHost();
    tbl_SerializeFromObject_TD_4670_input.loadHost();
    Table tbl_JOIN_INNER_TD_558_output("tbl_JOIN_INNER_TD_558_output", 628, 4, "");
    tbl_JOIN_INNER_TD_558_output.allocateHost();
    Table tbl_Aggregate_TD_6613_output("tbl_Aggregate_TD_6613_output", 6100000, 2, "");
    tbl_Aggregate_TD_6613_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.addCol("s_phone", 4, 1, 0);
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.addCol("s_comment", 4, 1, 0);
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_6765_input;
    tbl_SerializeFromObject_TD_6765_input = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6765_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6765_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_6765_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_6765_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6765_input.addCol("s_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_6765_input.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6765_input.addCol("s_comment", TPCH_READ_S_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_6765_input.allocateHost();
    tbl_SerializeFromObject_TD_6765_input.loadHost();
    Table tbl_Project_TD_626_output("tbl_Project_TD_626_output", 6100000, 2, "");
    tbl_Project_TD_626_output.allocateHost();
    Table tbl_Project_TD_6635_output("tbl_Project_TD_6635_output", 6100000, 3, "");
    tbl_Project_TD_6635_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7351_output("tbl_JOIN_INNER_TD_7351_output", 5, 2, "");
    tbl_JOIN_INNER_TD_7351_output.allocateHost();
    Table tbl_Filter_TD_7796_output("tbl_Filter_TD_7796_output", 6100000, 2, "");
    tbl_Filter_TD_7796_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8182_input;
    tbl_SerializeFromObject_TD_8182_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8182_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8182_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8182_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8182_input.allocateHost();
    tbl_SerializeFromObject_TD_8182_input.loadHost();
    Table tbl_JOIN_INNER_TD_8473_output("tbl_JOIN_INNER_TD_8473_output", 2036, 3, "");
    tbl_JOIN_INNER_TD_8473_output.allocateHost();
    Table tbl_Project_TD_8252_output("tbl_Project_TD_8252_output", 6100000, 1, "");
    tbl_Project_TD_8252_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8324_input;
    tbl_SerializeFromObject_TD_8324_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_8324_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_8324_input.addCol("p_mfgr", TPCH_READ_P_MFG_LEN+1);
    tbl_SerializeFromObject_TD_8324_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_8324_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_8324_input.allocateHost();
    tbl_SerializeFromObject_TD_8324_input.loadHost();
    Table tbl_JOIN_INNER_TD_9275_output("tbl_JOIN_INNER_TD_9275_output", 162880, 3, "");
    tbl_JOIN_INNER_TD_9275_output.allocateHost();
    Table tbl_Project_TD_9470_output("tbl_Project_TD_9470_output", 6100000, 2, "");
    tbl_Project_TD_9470_output.allocateHost();
    Table tbl_Filter_TD_9235_output("tbl_Filter_TD_9235_output", 6100000, 1, "");
    tbl_Filter_TD_9235_output.allocateHost();
    Table tbl_Project_TD_10226_output("tbl_Project_TD_10226_output", 6100000, 3, "");
    tbl_Project_TD_10226_output.allocateHost();
    Table tbl_Project_TD_10103_output("tbl_Project_TD_10103_output", 6100000, 2, "");
    tbl_Project_TD_10103_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11508_input;
    tbl_SerializeFromObject_TD_11508_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_11508_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_11508_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_11508_input.allocateHost();
    tbl_SerializeFromObject_TD_11508_input.loadHost();
    Table tbl_SerializeFromObject_TD_10399_input;
    tbl_SerializeFromObject_TD_10399_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10399_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_10399_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_10399_input.allocateHost();
    tbl_SerializeFromObject_TD_10399_input.loadHost();
    Table tbl_SerializeFromObject_TD_12490_input;
    tbl_SerializeFromObject_TD_12490_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_12490_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_12490_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_12490_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_12490_input.allocateHost();
    tbl_SerializeFromObject_TD_12490_input.loadHost();
    Table tbl_SerializeFromObject_TD_12922_input;
    tbl_SerializeFromObject_TD_12922_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_12922_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_12922_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_12922_input.allocateHost();
    tbl_SerializeFromObject_TD_12922_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_558_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_626_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6635_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7351_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8473_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8252_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9275_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_9470_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10226_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10103_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_558_cmds;
    cfg_JOIN_INNER_TD_558_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_558_gqe_join (cfg_JOIN_INNER_TD_558_cmds.cmd);
    cfg_JOIN_INNER_TD_558_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7351_cmds;
    cfg_JOIN_INNER_TD_7351_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7351_gqe_join (cfg_JOIN_INNER_TD_7351_cmds.cmd);
    cfg_JOIN_INNER_TD_7351_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8473_cmds;
    cfg_JOIN_INNER_TD_8473_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8473_gqe_join (cfg_JOIN_INNER_TD_8473_cmds.cmd);
    cfg_JOIN_INNER_TD_8473_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9275_cmds;
    cfg_JOIN_INNER_TD_9275_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9275_gqe_join (cfg_JOIN_INNER_TD_9275_cmds.cmd);
    cfg_JOIN_INNER_TD_9275_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_558;
    krnl_JOIN_INNER_TD_558 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_558.setup(tbl_Project_TD_6635_output, tbl_Project_TD_626_output, tbl_JOIN_INNER_TD_558_output, cfg_JOIN_INNER_TD_558_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7351;
    krnl_JOIN_INNER_TD_7351 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7351.setup(tbl_JOIN_INNER_TD_8473_output, tbl_Project_TD_8252_output, tbl_JOIN_INNER_TD_7351_output, cfg_JOIN_INNER_TD_7351_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8473;
    krnl_JOIN_INNER_TD_8473 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8473.setup(tbl_JOIN_INNER_TD_9275_output, tbl_Project_TD_9470_output, tbl_JOIN_INNER_TD_8473_output, cfg_JOIN_INNER_TD_8473_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9275;
    krnl_JOIN_INNER_TD_9275 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9275.setup(tbl_Project_TD_10226_output, tbl_Project_TD_10103_output, tbl_JOIN_INNER_TD_9275_output, cfg_JOIN_INNER_TD_9275_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_558;
    trans_JOIN_INNER_TD_558.setq(q_h);
    trans_JOIN_INNER_TD_558.add(&(cfg_JOIN_INNER_TD_558_cmds));
    transEngine trans_JOIN_INNER_TD_558_out;
    trans_JOIN_INNER_TD_558_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7351;
    trans_JOIN_INNER_TD_7351.setq(q_h);
    trans_JOIN_INNER_TD_7351.add(&(cfg_JOIN_INNER_TD_7351_cmds));
    transEngine trans_JOIN_INNER_TD_7351_out;
    trans_JOIN_INNER_TD_7351_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8473;
    trans_JOIN_INNER_TD_8473.setq(q_h);
    trans_JOIN_INNER_TD_8473.add(&(cfg_JOIN_INNER_TD_8473_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9275;
    trans_JOIN_INNER_TD_9275.setq(q_h);
    trans_JOIN_INNER_TD_9275.add(&(cfg_JOIN_INNER_TD_9275_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_558;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_558;
    std::vector<cl::Event> events_JOIN_INNER_TD_558;
    events_h2d_wr_JOIN_INNER_TD_558.resize(1);
    events_d2h_rd_JOIN_INNER_TD_558.resize(1);
    events_JOIN_INNER_TD_558.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_558;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_558;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7351;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7351;
    std::vector<cl::Event> events_JOIN_INNER_TD_7351;
    events_h2d_wr_JOIN_INNER_TD_7351.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7351.resize(1);
    events_JOIN_INNER_TD_7351.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7351;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7351;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8473;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8473;
    std::vector<cl::Event> events_JOIN_INNER_TD_8473;
    events_h2d_wr_JOIN_INNER_TD_8473.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8473.resize(1);
    events_JOIN_INNER_TD_8473.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8473;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8473;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9275;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9275;
    std::vector<cl::Event> events_JOIN_INNER_TD_9275;
    events_h2d_wr_JOIN_INNER_TD_9275.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9275.resize(1);
    events_JOIN_INNER_TD_9275.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9275;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9275;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Project_10_514_s, tv_r_Project_10_514_e;
    gettimeofday(&tv_r_Project_10_514_s, 0);
    SW_Project_TD_10103(tbl_SerializeFromObject_TD_12922_input, tbl_Project_TD_10103_output);
    gettimeofday(&tv_r_Project_10_514_e, 0);

    struct timeval tv_r_Project_10_789_s, tv_r_Project_10_789_e;
    gettimeofday(&tv_r_Project_10_789_s, 0);
    SW_Project_TD_10226(tbl_SerializeFromObject_TD_12490_input, tbl_Project_TD_10226_output);
    gettimeofday(&tv_r_Project_10_789_e, 0);

    struct timeval tv_r_Filter_9_839_s, tv_r_Filter_9_839_e;
    gettimeofday(&tv_r_Filter_9_839_s, 0);
    SW_Filter_TD_9235(tbl_SerializeFromObject_TD_10399_input, tbl_Filter_TD_9235_output);
    gettimeofday(&tv_r_Filter_9_839_e, 0);

    struct timeval tv_r_Project_9_676_s, tv_r_Project_9_676_e;
    gettimeofday(&tv_r_Project_9_676_s, 0);
    SW_Project_TD_9470(tbl_SerializeFromObject_TD_11508_input, tbl_Project_TD_9470_output);
    gettimeofday(&tv_r_Project_9_676_e, 0);

    struct timeval tv_r_JOIN_INNER_9_209_s, tv_r_JOIN_INNER_9_209_e;
    gettimeofday(&tv_r_JOIN_INNER_9_209_s, 0);
    trans_JOIN_INNER_TD_9275.add(&(tbl_Project_TD_10226_output));
    trans_JOIN_INNER_TD_9275.add(&(tbl_Project_TD_10103_output));
    trans_JOIN_INNER_TD_9275.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9275), &(events_h2d_wr_JOIN_INNER_TD_9275[0]));
    events_grp_JOIN_INNER_TD_9275.push_back(events_h2d_wr_JOIN_INNER_TD_9275[0]);
    krnl_JOIN_INNER_TD_9275.run(0, &(events_grp_JOIN_INNER_TD_9275), &(events_JOIN_INNER_TD_9275[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_209_e, 0);

    struct timeval tv_r_Project_8_870_s, tv_r_Project_8_870_e;
    gettimeofday(&tv_r_Project_8_870_s, 0);
    SW_Project_TD_8252(tbl_Filter_TD_9235_output, tbl_Project_TD_8252_output);
    gettimeofday(&tv_r_Project_8_870_e, 0);

    struct timeval tv_r_JOIN_INNER_8_982_s, tv_r_JOIN_INNER_8_982_e;
    gettimeofday(&tv_r_JOIN_INNER_8_982_s, 0);
    prev_events_grp_JOIN_INNER_TD_8473.push_back(events_h2d_wr_JOIN_INNER_TD_9275[0]);
    trans_JOIN_INNER_TD_8473.add(&(tbl_Project_TD_9470_output));
    trans_JOIN_INNER_TD_8473.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8473), &(events_h2d_wr_JOIN_INNER_TD_8473[0]));
    events_grp_JOIN_INNER_TD_8473.push_back(events_h2d_wr_JOIN_INNER_TD_8473[0]);
    events_grp_JOIN_INNER_TD_8473.push_back(events_JOIN_INNER_TD_9275[0]);
    krnl_JOIN_INNER_TD_8473.run(0, &(events_grp_JOIN_INNER_TD_8473), &(events_JOIN_INNER_TD_8473[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_982_e, 0);

    struct timeval tv_r_Filter_7_279_s, tv_r_Filter_7_279_e;
    gettimeofday(&tv_r_Filter_7_279_s, 0);
    SW_Filter_TD_7796(tbl_SerializeFromObject_TD_8324_input, tbl_Filter_TD_7796_output);
    gettimeofday(&tv_r_Filter_7_279_e, 0);

    struct timeval tv_r_JOIN_INNER_7_365_s, tv_r_JOIN_INNER_7_365_e;
    gettimeofday(&tv_r_JOIN_INNER_7_365_s, 0);
    prev_events_grp_JOIN_INNER_TD_7351.push_back(events_h2d_wr_JOIN_INNER_TD_8473[0]);
    trans_JOIN_INNER_TD_7351.add(&(tbl_Project_TD_8252_output));
    trans_JOIN_INNER_TD_7351.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7351), &(events_h2d_wr_JOIN_INNER_TD_7351[0]));
    events_grp_JOIN_INNER_TD_7351.push_back(events_h2d_wr_JOIN_INNER_TD_7351[0]);
    events_grp_JOIN_INNER_TD_7351.push_back(events_JOIN_INNER_TD_8473[0]);
    krnl_JOIN_INNER_TD_7351.run(0, &(events_grp_JOIN_INNER_TD_7351), &(events_JOIN_INNER_TD_7351[0]));
    
    trans_JOIN_INNER_TD_7351_out.add(&(tbl_JOIN_INNER_TD_7351_output));
    trans_JOIN_INNER_TD_7351_out.dev2host(0, &(events_JOIN_INNER_TD_7351), &(events_d2h_rd_JOIN_INNER_TD_7351[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_365_e, 0);

    struct timeval tv_r_Project_6_594_s, tv_r_Project_6_594_e;
    gettimeofday(&tv_r_Project_6_594_s, 0);
    SW_Project_TD_6635(tbl_SerializeFromObject_TD_8182_input, tbl_Project_TD_6635_output);
    gettimeofday(&tv_r_Project_6_594_e, 0);

    struct timeval tv_r_Project_6_897_s, tv_r_Project_6_897_e;
    gettimeofday(&tv_r_Project_6_897_s, 0);
    SW_Project_TD_626(tbl_Filter_TD_7796_output, tbl_Project_TD_626_output);
    gettimeofday(&tv_r_Project_6_897_e, 0);

    struct timeval tv_r_Aggregate_6_407_s, tv_r_Aggregate_6_407_e;
    gettimeofday(&tv_r_Aggregate_6_407_s, 0);
    SW_Aggregate_TD_6613(tbl_JOIN_INNER_TD_7351_output, tbl_Aggregate_TD_6613_output);
    gettimeofday(&tv_r_Aggregate_6_407_e, 0);

    struct timeval tv_r_JOIN_INNER_5_643_s, tv_r_JOIN_INNER_5_643_e;
    gettimeofday(&tv_r_JOIN_INNER_5_643_s, 0);
    trans_JOIN_INNER_TD_558.add(&(tbl_Project_TD_626_output));
    trans_JOIN_INNER_TD_558.add(&(tbl_Project_TD_6635_output));
    trans_JOIN_INNER_TD_558.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_558), &(events_h2d_wr_JOIN_INNER_TD_558[0]));
    events_grp_JOIN_INNER_TD_558.push_back(events_h2d_wr_JOIN_INNER_TD_558[0]);
    krnl_JOIN_INNER_TD_558.run(0, &(events_grp_JOIN_INNER_TD_558), &(events_JOIN_INNER_TD_558[0]));
    
    trans_JOIN_INNER_TD_558_out.add(&(tbl_JOIN_INNER_TD_558_output));
    trans_JOIN_INNER_TD_558_out.dev2host(0, &(events_JOIN_INNER_TD_558), &(events_d2h_rd_JOIN_INNER_TD_558[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_643_e, 0);

    struct timeval tv_r_Project_4_146_s, tv_r_Project_4_146_e;
    gettimeofday(&tv_r_Project_4_146_s, 0);
    SW_Project_TD_4142(tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute, tbl_Project_TD_4142_output);
    gettimeofday(&tv_r_Project_4_146_e, 0);

    struct timeval tv_r_JOIN_INNER_4_606_s, tv_r_JOIN_INNER_4_606_e;
    gettimeofday(&tv_r_JOIN_INNER_4_606_s, 0);
    SW_JOIN_INNER_TD_4713(tbl_JOIN_INNER_TD_558_output, tbl_Aggregate_TD_6613_output, tbl_JOIN_INNER_TD_4713_output);
    gettimeofday(&tv_r_JOIN_INNER_4_606_e, 0);

    struct timeval tv_r_Filter_3_337_s, tv_r_Filter_3_337_e;
    gettimeofday(&tv_r_Filter_3_337_s, 0);
    SW_Filter_TD_3908(tbl_SerializeFromObject_TD_4670_input, tbl_Filter_TD_3908_output);
    gettimeofday(&tv_r_Filter_3_337_e, 0);

    struct timeval tv_r_Project_3_849_s, tv_r_Project_3_849_e;
    gettimeofday(&tv_r_Project_3_849_s, 0);
    SW_Project_TD_3657(tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute, tbl_Project_TD_3657_output);
    gettimeofday(&tv_r_Project_3_849_e, 0);

    struct timeval tv_r_JOIN_INNER_3_865_s, tv_r_JOIN_INNER_3_865_e;
    gettimeofday(&tv_r_JOIN_INNER_3_865_s, 0);
    SW_JOIN_INNER_TD_3210(tbl_JOIN_INNER_TD_4713_output, tbl_Project_TD_4142_output, tbl_JOIN_INNER_TD_3210_output);
    gettimeofday(&tv_r_JOIN_INNER_3_865_e, 0);

    struct timeval tv_r_Project_2_812_s, tv_r_Project_2_812_e;
    gettimeofday(&tv_r_Project_2_812_s, 0);
    SW_Project_TD_217(tbl_Filter_TD_3908_output, tbl_Project_TD_217_output);
    gettimeofday(&tv_r_Project_2_812_e, 0);

    struct timeval tv_r_JOIN_INNER_2_835_s, tv_r_JOIN_INNER_2_835_e;
    gettimeofday(&tv_r_JOIN_INNER_2_835_s, 0);
    SW_JOIN_INNER_TD_2129(tbl_JOIN_INNER_TD_3210_output, tbl_Project_TD_3657_output, tbl_JOIN_INNER_TD_2129_output);
    gettimeofday(&tv_r_JOIN_INNER_2_835_e, 0);

    struct timeval tv_r_JOIN_INNER_1_979_s, tv_r_JOIN_INNER_1_979_e;
    gettimeofday(&tv_r_JOIN_INNER_1_979_s, 0);
    SW_JOIN_INNER_TD_1247(tbl_JOIN_INNER_TD_2129_output, tbl_Project_TD_217_output, tbl_JOIN_INNER_TD_1247_output);
    gettimeofday(&tv_r_JOIN_INNER_1_979_e, 0);

    struct timeval tv_r_Sort_0_667_s, tv_r_Sort_0_667_e;
    gettimeofday(&tv_r_Sort_0_667_s, 0);
    SW_Sort_TD_071(tbl_JOIN_INNER_TD_1247_output, tbl_SerializeFromObject_TD_8324_input, tbl_SerializeFromObject_TD_6765_input, tbl_SerializeFromObject_TD_5583_input, tbl_Sort_TD_071_output);
    gettimeofday(&tv_r_Sort_0_667_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_514_s, &tv_r_Project_10_514_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12922_input: " << tbl_SerializeFromObject_TD_12922_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_789_s, &tv_r_Project_10_789_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12490_input: " << tbl_SerializeFromObject_TD_12490_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_839_s, &tv_r_Filter_9_839_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10399_input: " << tbl_SerializeFromObject_TD_10399_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_9: " << tvdiff(&tv_r_Project_9_676_s, &tv_r_Project_9_676_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11508_input: " << tbl_SerializeFromObject_TD_11508_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_209_s, &tv_r_JOIN_INNER_9_209_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10226_output: " << tbl_Project_TD_10226_output.getNumRow() << " " << "tbl_Project_TD_10103_output: " << tbl_Project_TD_10103_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_870_s, &tv_r_Project_8_870_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9235_output: " << tbl_Filter_TD_9235_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_982_s, &tv_r_JOIN_INNER_8_982_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9275_output: " << tbl_JOIN_INNER_TD_9275_output.getNumRow() << " " << "tbl_Project_TD_9470_output: " << tbl_Project_TD_9470_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_279_s, &tv_r_Filter_7_279_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8324_input: " << tbl_SerializeFromObject_TD_8324_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_365_s, &tv_r_JOIN_INNER_7_365_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8473_output: " << tbl_JOIN_INNER_TD_8473_output.getNumRow() << " " << "tbl_Project_TD_8252_output: " << tbl_Project_TD_8252_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_594_s, &tv_r_Project_6_594_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8182_input: " << tbl_SerializeFromObject_TD_8182_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_897_s, &tv_r_Project_6_897_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7796_output: " << tbl_Filter_TD_7796_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_407_s, &tv_r_Aggregate_6_407_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7351_output: " << tbl_JOIN_INNER_TD_7351_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_643_s, &tv_r_JOIN_INNER_5_643_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_626_output: " << tbl_Project_TD_626_output.getNumRow() << " " << "tbl_Project_TD_6635_output: " << tbl_Project_TD_6635_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_146_s, &tv_r_Project_4_146_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_6765_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_606_s, &tv_r_JOIN_INNER_4_606_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_558_output: " << tbl_JOIN_INNER_TD_558_output.getNumRow() << " " << "tbl_Aggregate_TD_6613_output: " << tbl_Aggregate_TD_6613_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_337_s, &tv_r_Filter_3_337_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4670_input: " << tbl_SerializeFromObject_TD_4670_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_849_s, &tv_r_Project_3_849_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5583_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_865_s, &tv_r_JOIN_INNER_3_865_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4713_output: " << tbl_JOIN_INNER_TD_4713_output.getNumRow() << " " << "tbl_Project_TD_4142_output: " << tbl_Project_TD_4142_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_812_s, &tv_r_Project_2_812_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3908_output: " << tbl_Filter_TD_3908_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_835_s, &tv_r_JOIN_INNER_2_835_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3210_output: " << tbl_JOIN_INNER_TD_3210_output.getNumRow() << " " << "tbl_Project_TD_3657_output: " << tbl_Project_TD_3657_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_979_s, &tv_r_JOIN_INNER_1_979_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2129_output: " << tbl_JOIN_INNER_TD_2129_output.getNumRow() << " " << "tbl_Project_TD_217_output: " << tbl_Project_TD_217_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_667_s, &tv_r_Sort_0_667_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1247_output: " << tbl_JOIN_INNER_TD_1247_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.836902 * 1000 << "ms" << std::endl; 
    return 0; 
}
