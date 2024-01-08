// number of overlays (w/o fusion): 13 
// number of overlays (w/ fusion): 7 
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
    Table tbl_Sort_TD_0592_output("tbl_Sort_TD_0592_output", 6100000, 8, "");
    tbl_Sort_TD_0592_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1658_output("tbl_JOIN_INNER_TD_1658_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_1658_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2580_output("tbl_JOIN_INNER_TD_2580_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_2580_output.allocateHost();
    Table tbl_Project_TD_2750_output("tbl_Project_TD_2750_output", -1, 1, "");
    tbl_Project_TD_2750_output.allocateHost();
    Table tbl_Project_TD_2750_emptyBufferB("tbl_Project_TD_2750_emptyBufferB", 1, 8, "");
    tbl_Project_TD_2750_emptyBufferB.allocateHost();
    Table tbl_JOIN_INNER_TD_3416_output("tbl_JOIN_INNER_TD_3416_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_3416_output.allocateHost();
    Table tbl_Project_TD_3551_output("tbl_Project_TD_3551_output", -1, 3, "");
    tbl_Project_TD_3551_output.allocateHost();
    Table tbl_Project_TD_3551_emptyBufferB("tbl_Project_TD_3551_emptyBufferB", 1, 8, "");
    tbl_Project_TD_3551_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_3191_output("tbl_Filter_TD_3191_output", 6100000, 1, "");
    tbl_Filter_TD_3191_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4355_output("tbl_JOIN_INNER_TD_4355_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4355_output.allocateHost();
    Table tbl_Project_TD_4188_output("tbl_Project_TD_4188_output", -1, 7, "");
    tbl_Project_TD_4188_output.allocateHost();
    Table tbl_Project_TD_4188_emptyBufferB("tbl_Project_TD_4188_emptyBufferB", 1, 8, "");
    tbl_Project_TD_4188_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5851_input;
    tbl_SerializeFromObject_TD_5851_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5851_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5851_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5851_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5851_input.allocateHost();
    tbl_SerializeFromObject_TD_5851_input.loadHost();
    Table tbl_SerializeFromObject_TD_4978_input;
    tbl_SerializeFromObject_TD_4978_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4978_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_4978_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_4978_input.allocateHost();
    tbl_SerializeFromObject_TD_4978_input.loadHost();
    Table tbl_JOIN_INNER_TD_5632_output("tbl_JOIN_INNER_TD_5632_output", 628, 4, "");
    tbl_JOIN_INNER_TD_5632_output.allocateHost();
    Table tbl_Aggregate_TD_6831_output("tbl_Aggregate_TD_6831_output", 6100000, 2, "");
    tbl_Aggregate_TD_6831_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.addCol("s_phone", 4, 1, 0);
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.addCol("s_comment", 4, 1, 0);
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_6414_input;
    tbl_SerializeFromObject_TD_6414_input = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6414_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6414_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_6414_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_6414_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6414_input.addCol("s_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_6414_input.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6414_input.addCol("s_comment", TPCH_READ_S_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_6414_input.allocateHost();
    tbl_SerializeFromObject_TD_6414_input.loadHost();
    Table tbl_Filter_TD_7192_output("tbl_Filter_TD_7192_output", 6100000, 2, "");
    tbl_Filter_TD_7192_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8870_input;
    tbl_SerializeFromObject_TD_8870_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8870_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8870_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8870_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8870_input.allocateHost();
    tbl_SerializeFromObject_TD_8870_input.loadHost();
    Table tbl_JOIN_INNER_TD_7253_output("tbl_JOIN_INNER_TD_7253_output", 5, 2, "");
    tbl_JOIN_INNER_TD_7253_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8693_input;
    tbl_SerializeFromObject_TD_8693_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_8693_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_8693_input.addCol("p_mfgr", TPCH_READ_P_MFG_LEN+1);
    tbl_SerializeFromObject_TD_8693_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_8693_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_8693_input.allocateHost();
    tbl_SerializeFromObject_TD_8693_input.loadHost();
    Table tbl_JOIN_INNER_TD_8446_output("tbl_JOIN_INNER_TD_8446_output", 2036, 3, "");
    tbl_JOIN_INNER_TD_8446_output.allocateHost();
    Table tbl_Filter_TD_9263_output("tbl_Filter_TD_9263_output", 6100000, 1, "");
    tbl_Filter_TD_9263_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9335_output("tbl_JOIN_INNER_TD_9335_output", 162880, 3, "");
    tbl_JOIN_INNER_TD_9335_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11511_input;
    tbl_SerializeFromObject_TD_11511_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_11511_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_11511_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_11511_input.allocateHost();
    tbl_SerializeFromObject_TD_11511_input.loadHost();
    Table tbl_SerializeFromObject_TD_10867_input;
    tbl_SerializeFromObject_TD_10867_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10867_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_10867_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_10867_input.allocateHost();
    tbl_SerializeFromObject_TD_10867_input.loadHost();
    Table tbl_SerializeFromObject_TD_12778_input;
    tbl_SerializeFromObject_TD_12778_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_12778_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_12778_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_12778_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_12778_input.allocateHost();
    tbl_SerializeFromObject_TD_12778_input.loadHost();
    Table tbl_SerializeFromObject_TD_12783_input;
    tbl_SerializeFromObject_TD_12783_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_12783_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_12783_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_12783_input.allocateHost();
    tbl_SerializeFromObject_TD_12783_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_2750_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2750_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3551_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3551_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3191_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4188_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4188_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5632_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7192_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_8870_input.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7253_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8446_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9263_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9335_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_11511_input.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_12778_input.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_12783_input.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_2750_cmds;
    cfg_Project_TD_2750_cmds.allocateHost();
    get_cfg_dat_Project_TD_2750_gqe_join (cfg_Project_TD_2750_cmds.cmd);
    cfg_Project_TD_2750_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_3551_cmds;
    cfg_Project_TD_3551_cmds.allocateHost();
    get_cfg_dat_Project_TD_3551_gqe_join (cfg_Project_TD_3551_cmds.cmd);
    cfg_Project_TD_3551_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_4188_cmds;
    cfg_Project_TD_4188_cmds.allocateHost();
    get_cfg_dat_Project_TD_4188_gqe_join (cfg_Project_TD_4188_cmds.cmd);
    cfg_Project_TD_4188_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5632_cmds;
    cfg_JOIN_INNER_TD_5632_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5632_gqe_join (cfg_JOIN_INNER_TD_5632_cmds.cmd);
    cfg_JOIN_INNER_TD_5632_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7253_cmds;
    cfg_JOIN_INNER_TD_7253_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7253_gqe_join (cfg_JOIN_INNER_TD_7253_cmds.cmd);
    cfg_JOIN_INNER_TD_7253_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8446_cmds;
    cfg_JOIN_INNER_TD_8446_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8446_gqe_join (cfg_JOIN_INNER_TD_8446_cmds.cmd);
    cfg_JOIN_INNER_TD_8446_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9335_cmds;
    cfg_JOIN_INNER_TD_9335_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9335_gqe_join (cfg_JOIN_INNER_TD_9335_cmds.cmd);
    cfg_JOIN_INNER_TD_9335_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_2750;
    krnl_Project_TD_2750 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_2750.setup(tbl_Filter_TD_3191_output, tbl_Project_TD_2750_emptyBufferB, tbl_Project_TD_2750_output, cfg_Project_TD_2750_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_3551;
    krnl_Project_TD_3551 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_3551.setup(tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute, tbl_Project_TD_3551_emptyBufferB, tbl_Project_TD_3551_output, cfg_Project_TD_3551_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_4188;
    krnl_Project_TD_4188 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_4188.setup(tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute, tbl_Project_TD_4188_emptyBufferB, tbl_Project_TD_4188_output, cfg_Project_TD_4188_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5632;
    krnl_JOIN_INNER_TD_5632 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5632.setup(tbl_SerializeFromObject_TD_8870_input, tbl_Filter_TD_7192_output, tbl_JOIN_INNER_TD_5632_output, cfg_JOIN_INNER_TD_5632_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7253;
    krnl_JOIN_INNER_TD_7253 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7253.setup(tbl_JOIN_INNER_TD_8446_output, tbl_Filter_TD_9263_output, tbl_JOIN_INNER_TD_7253_output, cfg_JOIN_INNER_TD_7253_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8446;
    krnl_JOIN_INNER_TD_8446 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8446.setup(tbl_JOIN_INNER_TD_9335_output, tbl_SerializeFromObject_TD_11511_input, tbl_JOIN_INNER_TD_8446_output, cfg_JOIN_INNER_TD_8446_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9335;
    krnl_JOIN_INNER_TD_9335 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9335.setup(tbl_SerializeFromObject_TD_12778_input, tbl_SerializeFromObject_TD_12783_input, tbl_JOIN_INNER_TD_9335_output, cfg_JOIN_INNER_TD_9335_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_2750;
    trans_Project_TD_2750.setq(q_h);
    trans_Project_TD_2750.add(&(cfg_Project_TD_2750_cmds));
    transEngine trans_Project_TD_2750_out;
    trans_Project_TD_2750_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_3551;
    trans_Project_TD_3551.setq(q_h);
    trans_Project_TD_3551.add(&(cfg_Project_TD_3551_cmds));
    trans_Project_TD_3551.add(&(tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute));
    transEngine trans_Project_TD_3551_out;
    trans_Project_TD_3551_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_4188;
    trans_Project_TD_4188.setq(q_h);
    trans_Project_TD_4188.add(&(cfg_Project_TD_4188_cmds));
    trans_Project_TD_4188.add(&(tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute));
    transEngine trans_Project_TD_4188_out;
    trans_Project_TD_4188_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5632;
    trans_JOIN_INNER_TD_5632.setq(q_h);
    trans_JOIN_INNER_TD_5632.add(&(cfg_JOIN_INNER_TD_5632_cmds));
    trans_JOIN_INNER_TD_5632.add(&(tbl_SerializeFromObject_TD_8870_input));
    transEngine trans_JOIN_INNER_TD_5632_out;
    trans_JOIN_INNER_TD_5632_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7253;
    trans_JOIN_INNER_TD_7253.setq(q_h);
    trans_JOIN_INNER_TD_7253.add(&(cfg_JOIN_INNER_TD_7253_cmds));
    transEngine trans_JOIN_INNER_TD_7253_out;
    trans_JOIN_INNER_TD_7253_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8446;
    trans_JOIN_INNER_TD_8446.setq(q_h);
    trans_JOIN_INNER_TD_8446.add(&(cfg_JOIN_INNER_TD_8446_cmds));
    trans_JOIN_INNER_TD_8446.add(&(tbl_SerializeFromObject_TD_11511_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9335;
    trans_JOIN_INNER_TD_9335.setq(q_h);
    trans_JOIN_INNER_TD_9335.add(&(cfg_JOIN_INNER_TD_9335_cmds));
    trans_JOIN_INNER_TD_9335.add(&(tbl_SerializeFromObject_TD_12778_input));
    trans_JOIN_INNER_TD_9335.add(&(tbl_SerializeFromObject_TD_12783_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_2750;
    std::vector<cl::Event> events_d2h_rd_Project_TD_2750;
    std::vector<cl::Event> events_Project_TD_2750;
    events_h2d_wr_Project_TD_2750.resize(1);
    events_d2h_rd_Project_TD_2750.resize(1);
    events_Project_TD_2750.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_2750;
    std::vector<cl::Event> prev_events_grp_Project_TD_2750;
    std::vector<cl::Event> events_h2d_wr_Project_TD_3551;
    std::vector<cl::Event> events_d2h_rd_Project_TD_3551;
    std::vector<cl::Event> events_Project_TD_3551;
    events_h2d_wr_Project_TD_3551.resize(1);
    events_d2h_rd_Project_TD_3551.resize(1);
    events_Project_TD_3551.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_3551;
    std::vector<cl::Event> prev_events_grp_Project_TD_3551;
    std::vector<cl::Event> events_h2d_wr_Project_TD_4188;
    std::vector<cl::Event> events_d2h_rd_Project_TD_4188;
    std::vector<cl::Event> events_Project_TD_4188;
    events_h2d_wr_Project_TD_4188.resize(1);
    events_d2h_rd_Project_TD_4188.resize(1);
    events_Project_TD_4188.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_4188;
    std::vector<cl::Event> prev_events_grp_Project_TD_4188;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5632;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5632;
    std::vector<cl::Event> events_JOIN_INNER_TD_5632;
    events_h2d_wr_JOIN_INNER_TD_5632.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5632.resize(1);
    events_JOIN_INNER_TD_5632.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5632;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5632;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7253;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7253;
    std::vector<cl::Event> events_JOIN_INNER_TD_7253;
    events_h2d_wr_JOIN_INNER_TD_7253.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7253.resize(1);
    events_JOIN_INNER_TD_7253.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7253;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7253;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8446;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8446;
    std::vector<cl::Event> events_JOIN_INNER_TD_8446;
    events_h2d_wr_JOIN_INNER_TD_8446.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8446.resize(1);
    events_JOIN_INNER_TD_8446.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8446;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8446;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9335;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9335;
    std::vector<cl::Event> events_JOIN_INNER_TD_9335;
    events_h2d_wr_JOIN_INNER_TD_9335.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9335.resize(1);
    events_JOIN_INNER_TD_9335.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9335;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9335;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_JOIN_INNER_9_502_s, tv_r_JOIN_INNER_9_502_e;
    gettimeofday(&tv_r_JOIN_INNER_9_502_s, 0);
    trans_JOIN_INNER_TD_9335.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9335), &(events_h2d_wr_JOIN_INNER_TD_9335[0]));
    events_grp_JOIN_INNER_TD_9335.push_back(events_h2d_wr_JOIN_INNER_TD_9335[0]);
    krnl_JOIN_INNER_TD_9335.run(0, &(events_grp_JOIN_INNER_TD_9335), &(events_JOIN_INNER_TD_9335[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_502_e, 0);

    struct timeval tv_r_Filter_9_906_s, tv_r_Filter_9_906_e;
    gettimeofday(&tv_r_Filter_9_906_s, 0);
    SW_Filter_TD_9263(tbl_SerializeFromObject_TD_10867_input, tbl_Filter_TD_9263_output);
    gettimeofday(&tv_r_Filter_9_906_e, 0);

    struct timeval tv_r_JOIN_INNER_8_770_s, tv_r_JOIN_INNER_8_770_e;
    gettimeofday(&tv_r_JOIN_INNER_8_770_s, 0);
    prev_events_grp_JOIN_INNER_TD_8446.push_back(events_h2d_wr_JOIN_INNER_TD_9335[0]);
    trans_JOIN_INNER_TD_8446.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8446), &(events_h2d_wr_JOIN_INNER_TD_8446[0]));
    events_grp_JOIN_INNER_TD_8446.push_back(events_h2d_wr_JOIN_INNER_TD_8446[0]);
    events_grp_JOIN_INNER_TD_8446.push_back(events_JOIN_INNER_TD_9335[0]);
    krnl_JOIN_INNER_TD_8446.run(0, &(events_grp_JOIN_INNER_TD_8446), &(events_JOIN_INNER_TD_8446[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_770_e, 0);

    struct timeval tv_r_JOIN_INNER_7_49_s, tv_r_JOIN_INNER_7_49_e;
    gettimeofday(&tv_r_JOIN_INNER_7_49_s, 0);
    prev_events_grp_JOIN_INNER_TD_7253.push_back(events_h2d_wr_JOIN_INNER_TD_8446[0]);
    trans_JOIN_INNER_TD_7253.add(&(tbl_Filter_TD_9263_output));
    trans_JOIN_INNER_TD_7253.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7253), &(events_h2d_wr_JOIN_INNER_TD_7253[0]));
    events_grp_JOIN_INNER_TD_7253.push_back(events_h2d_wr_JOIN_INNER_TD_7253[0]);
    events_grp_JOIN_INNER_TD_7253.push_back(events_JOIN_INNER_TD_8446[0]);
    krnl_JOIN_INNER_TD_7253.run(0, &(events_grp_JOIN_INNER_TD_7253), &(events_JOIN_INNER_TD_7253[0]));
    
    trans_JOIN_INNER_TD_7253_out.add(&(tbl_JOIN_INNER_TD_7253_output));
    trans_JOIN_INNER_TD_7253_out.dev2host(0, &(events_JOIN_INNER_TD_7253), &(events_d2h_rd_JOIN_INNER_TD_7253[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_49_e, 0);

    struct timeval tv_r_Filter_7_949_s, tv_r_Filter_7_949_e;
    gettimeofday(&tv_r_Filter_7_949_s, 0);
    SW_Filter_TD_7192(tbl_SerializeFromObject_TD_8693_input, tbl_Filter_TD_7192_output);
    gettimeofday(&tv_r_Filter_7_949_e, 0);

    struct timeval tv_r_Aggregate_6_636_s, tv_r_Aggregate_6_636_e;
    gettimeofday(&tv_r_Aggregate_6_636_s, 0);
    SW_Aggregate_TD_6831(tbl_JOIN_INNER_TD_7253_output, tbl_Aggregate_TD_6831_output);
    gettimeofday(&tv_r_Aggregate_6_636_e, 0);

    struct timeval tv_r_JOIN_INNER_5_522_s, tv_r_JOIN_INNER_5_522_e;
    gettimeofday(&tv_r_JOIN_INNER_5_522_s, 0);
    trans_JOIN_INNER_TD_5632.add(&(tbl_Filter_TD_7192_output));
    trans_JOIN_INNER_TD_5632.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5632), &(events_h2d_wr_JOIN_INNER_TD_5632[0]));
    events_grp_JOIN_INNER_TD_5632.push_back(events_h2d_wr_JOIN_INNER_TD_5632[0]);
    krnl_JOIN_INNER_TD_5632.run(0, &(events_grp_JOIN_INNER_TD_5632), &(events_JOIN_INNER_TD_5632[0]));
    
    trans_JOIN_INNER_TD_5632_out.add(&(tbl_JOIN_INNER_TD_5632_output));
    trans_JOIN_INNER_TD_5632_out.dev2host(0, &(events_JOIN_INNER_TD_5632), &(events_d2h_rd_JOIN_INNER_TD_5632[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_522_e, 0);

    struct timeval tv_r_Project_4_615_s, tv_r_Project_4_615_e;
    gettimeofday(&tv_r_Project_4_615_s, 0);
    trans_Project_TD_4188.host2dev(0, &(prev_events_grp_Project_TD_4188), &(events_h2d_wr_Project_TD_4188[0]));
    events_grp_Project_TD_4188.push_back(events_h2d_wr_Project_TD_4188[0]);
    krnl_Project_TD_4188.run(0, &(events_grp_Project_TD_4188), &(events_Project_TD_4188[0]));
    
    trans_Project_TD_4188_out.add(&(tbl_Project_TD_4188_output));
    trans_Project_TD_4188_out.dev2host(0, &(events_Project_TD_4188), &(events_d2h_rd_Project_TD_4188[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_4_615_e, 0);

    struct timeval tv_r_JOIN_INNER_4_734_s, tv_r_JOIN_INNER_4_734_e;
    gettimeofday(&tv_r_JOIN_INNER_4_734_s, 0);
    SW_JOIN_INNER_TD_4355(tbl_JOIN_INNER_TD_5632_output, tbl_Aggregate_TD_6831_output, tbl_JOIN_INNER_TD_4355_output);
    gettimeofday(&tv_r_JOIN_INNER_4_734_e, 0);

    struct timeval tv_r_Filter_3_237_s, tv_r_Filter_3_237_e;
    gettimeofday(&tv_r_Filter_3_237_s, 0);
    SW_Filter_TD_3191(tbl_SerializeFromObject_TD_4978_input, tbl_Filter_TD_3191_output);
    gettimeofday(&tv_r_Filter_3_237_e, 0);

    struct timeval tv_r_Project_3_373_s, tv_r_Project_3_373_e;
    gettimeofday(&tv_r_Project_3_373_s, 0);
    trans_Project_TD_3551.host2dev(0, &(prev_events_grp_Project_TD_3551), &(events_h2d_wr_Project_TD_3551[0]));
    events_grp_Project_TD_3551.push_back(events_h2d_wr_Project_TD_3551[0]);
    krnl_Project_TD_3551.run(0, &(events_grp_Project_TD_3551), &(events_Project_TD_3551[0]));
    
    trans_Project_TD_3551_out.add(&(tbl_Project_TD_3551_output));
    trans_Project_TD_3551_out.dev2host(0, &(events_Project_TD_3551), &(events_d2h_rd_Project_TD_3551[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_3_373_e, 0);

    struct timeval tv_r_JOIN_INNER_3_412_s, tv_r_JOIN_INNER_3_412_e;
    gettimeofday(&tv_r_JOIN_INNER_3_412_s, 0);
    SW_JOIN_INNER_TD_3416(tbl_JOIN_INNER_TD_4355_output, tbl_Project_TD_4188_output, tbl_JOIN_INNER_TD_3416_output);
    gettimeofday(&tv_r_JOIN_INNER_3_412_e, 0);

    struct timeval tv_r_Project_2_598_s, tv_r_Project_2_598_e;
    gettimeofday(&tv_r_Project_2_598_s, 0);
    trans_Project_TD_2750.add(&(tbl_Filter_TD_3191_output));
    trans_Project_TD_2750.host2dev(0, &(prev_events_grp_Project_TD_2750), &(events_h2d_wr_Project_TD_2750[0]));
    events_grp_Project_TD_2750.push_back(events_h2d_wr_Project_TD_2750[0]);
    krnl_Project_TD_2750.run(0, &(events_grp_Project_TD_2750), &(events_Project_TD_2750[0]));
    
    trans_Project_TD_2750_out.add(&(tbl_Project_TD_2750_output));
    trans_Project_TD_2750_out.dev2host(0, &(events_Project_TD_2750), &(events_d2h_rd_Project_TD_2750[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_2_598_e, 0);

    struct timeval tv_r_JOIN_INNER_2_111_s, tv_r_JOIN_INNER_2_111_e;
    gettimeofday(&tv_r_JOIN_INNER_2_111_s, 0);
    SW_JOIN_INNER_TD_2580(tbl_JOIN_INNER_TD_3416_output, tbl_Project_TD_3551_output, tbl_JOIN_INNER_TD_2580_output);
    gettimeofday(&tv_r_JOIN_INNER_2_111_e, 0);

    struct timeval tv_r_JOIN_INNER_1_241_s, tv_r_JOIN_INNER_1_241_e;
    gettimeofday(&tv_r_JOIN_INNER_1_241_s, 0);
    SW_JOIN_INNER_TD_1658(tbl_JOIN_INNER_TD_2580_output, tbl_Project_TD_2750_output, tbl_JOIN_INNER_TD_1658_output);
    gettimeofday(&tv_r_JOIN_INNER_1_241_e, 0);

    struct timeval tv_r_Sort_0_196_s, tv_r_Sort_0_196_e;
    gettimeofday(&tv_r_Sort_0_196_s, 0);
    SW_Sort_TD_0592(tbl_JOIN_INNER_TD_1658_output, tbl_SerializeFromObject_TD_8693_input, tbl_SerializeFromObject_TD_6414_input, tbl_SerializeFromObject_TD_5851_input, tbl_Sort_TD_0592_output);
    gettimeofday(&tv_r_Sort_0_196_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_502_s, &tv_r_JOIN_INNER_9_502_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12778_input: " << tbl_SerializeFromObject_TD_12778_input.getNumRow() << " " << "tbl_SerializeFromObject_TD_12783_input: " << tbl_SerializeFromObject_TD_12783_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_906_s, &tv_r_Filter_9_906_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10867_input: " << tbl_SerializeFromObject_TD_10867_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_770_s, &tv_r_JOIN_INNER_8_770_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9335_output: " << tbl_JOIN_INNER_TD_9335_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_11511_input: " << tbl_SerializeFromObject_TD_11511_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_49_s, &tv_r_JOIN_INNER_7_49_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8446_output: " << tbl_JOIN_INNER_TD_8446_output.getNumRow() << " " << "tbl_Filter_TD_9263_output: " << tbl_Filter_TD_9263_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_949_s, &tv_r_Filter_7_949_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8693_input: " << tbl_SerializeFromObject_TD_8693_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_636_s, &tv_r_Aggregate_6_636_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7253_output: " << tbl_JOIN_INNER_TD_7253_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_522_s, &tv_r_JOIN_INNER_5_522_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7192_output: " << tbl_Filter_TD_7192_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_8870_input: " << tbl_SerializeFromObject_TD_8870_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_615_s, &tv_r_Project_4_615_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_6414_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_734_s, &tv_r_JOIN_INNER_4_734_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5632_output: " << tbl_JOIN_INNER_TD_5632_output.getNumRow() << " " << "tbl_Aggregate_TD_6831_output: " << tbl_Aggregate_TD_6831_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_237_s, &tv_r_Filter_3_237_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4978_input: " << tbl_SerializeFromObject_TD_4978_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_373_s, &tv_r_Project_3_373_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5851_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_412_s, &tv_r_JOIN_INNER_3_412_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4355_output: " << tbl_JOIN_INNER_TD_4355_output.getNumRow() << " " << "tbl_Project_TD_4188_output: " << tbl_Project_TD_4188_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_598_s, &tv_r_Project_2_598_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3191_output: " << tbl_Filter_TD_3191_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_111_s, &tv_r_JOIN_INNER_2_111_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3416_output: " << tbl_JOIN_INNER_TD_3416_output.getNumRow() << " " << "tbl_Project_TD_3551_output: " << tbl_Project_TD_3551_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_241_s, &tv_r_JOIN_INNER_1_241_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2580_output: " << tbl_JOIN_INNER_TD_2580_output.getNumRow() << " " << "tbl_Project_TD_2750_output: " << tbl_Project_TD_2750_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_196_s, &tv_r_Sort_0_196_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1658_output: " << tbl_JOIN_INNER_TD_1658_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.5966077 * 1000 << "ms" << std::endl; 
    return 0; 
}
