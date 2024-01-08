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
    Table tbl_Sort_TD_0417_output("tbl_Sort_TD_0417_output", 6100000, 8, "");
    tbl_Sort_TD_0417_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1344_output("tbl_JOIN_INNER_TD_1344_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_1344_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2993_output("tbl_JOIN_INNER_TD_2993_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_2993_output.allocateHost();
    Table tbl_Project_TD_2893_output("tbl_Project_TD_2893_output", -1, 1, "");
    tbl_Project_TD_2893_output.allocateHost();
    Table tbl_Project_TD_2893_emptyBufferB("tbl_Project_TD_2893_emptyBufferB", 1, 8, "");
    tbl_Project_TD_2893_emptyBufferB.allocateHost();
    Table tbl_JOIN_INNER_TD_3732_output("tbl_JOIN_INNER_TD_3732_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_3732_output.allocateHost();
    Table tbl_Project_TD_3710_output("tbl_Project_TD_3710_output", -1, 3, "");
    tbl_Project_TD_3710_output.allocateHost();
    Table tbl_Project_TD_3710_emptyBufferB("tbl_Project_TD_3710_emptyBufferB", 1, 8, "");
    tbl_Project_TD_3710_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_3401_output("tbl_Filter_TD_3401_output", 6100000, 1, "");
    tbl_Filter_TD_3401_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4808_output("tbl_JOIN_INNER_TD_4808_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4808_output.allocateHost();
    Table tbl_Project_TD_4227_output("tbl_Project_TD_4227_output", -1, 7, "");
    tbl_Project_TD_4227_output.allocateHost();
    Table tbl_Project_TD_4227_emptyBufferB("tbl_Project_TD_4227_emptyBufferB", 1, 8, "");
    tbl_Project_TD_4227_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5355_input;
    tbl_SerializeFromObject_TD_5355_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5355_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5355_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5355_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5355_input.allocateHost();
    tbl_SerializeFromObject_TD_5355_input.loadHost();
    Table tbl_SerializeFromObject_TD_4607_input;
    tbl_SerializeFromObject_TD_4607_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4607_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_4607_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_4607_input.allocateHost();
    tbl_SerializeFromObject_TD_4607_input.loadHost();
    Table tbl_JOIN_INNER_TD_5744_output("tbl_JOIN_INNER_TD_5744_output", 628, 4, "");
    tbl_JOIN_INNER_TD_5744_output.allocateHost();
    Table tbl_Aggregate_TD_6529_output("tbl_Aggregate_TD_6529_output", 6100000, 2, "");
    tbl_Aggregate_TD_6529_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.addCol("s_phone", 4, 1, 0);
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.addCol("s_comment", 4, 1, 0);
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_6656_input;
    tbl_SerializeFromObject_TD_6656_input = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6656_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6656_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_6656_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_6656_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6656_input.addCol("s_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_6656_input.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6656_input.addCol("s_comment", TPCH_READ_S_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_6656_input.allocateHost();
    tbl_SerializeFromObject_TD_6656_input.loadHost();
    Table tbl_Filter_TD_7770_output("tbl_Filter_TD_7770_output", 6100000, 2, "");
    tbl_Filter_TD_7770_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8196_input;
    tbl_SerializeFromObject_TD_8196_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8196_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8196_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8196_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8196_input.allocateHost();
    tbl_SerializeFromObject_TD_8196_input.loadHost();
    Table tbl_JOIN_INNER_TD_7170_output("tbl_JOIN_INNER_TD_7170_output", 5, 2, "");
    tbl_JOIN_INNER_TD_7170_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8988_input;
    tbl_SerializeFromObject_TD_8988_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_8988_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_8988_input.addCol("p_mfgr", TPCH_READ_P_MFG_LEN+1);
    tbl_SerializeFromObject_TD_8988_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_8988_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_8988_input.allocateHost();
    tbl_SerializeFromObject_TD_8988_input.loadHost();
    Table tbl_JOIN_INNER_TD_8626_output("tbl_JOIN_INNER_TD_8626_output", 2036, 3, "");
    tbl_JOIN_INNER_TD_8626_output.allocateHost();
    Table tbl_Filter_TD_9920_output("tbl_Filter_TD_9920_output", 6100000, 1, "");
    tbl_Filter_TD_9920_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9797_output("tbl_JOIN_INNER_TD_9797_output", 162880, 3, "");
    tbl_JOIN_INNER_TD_9797_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11356_input;
    tbl_SerializeFromObject_TD_11356_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_11356_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_11356_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_11356_input.allocateHost();
    tbl_SerializeFromObject_TD_11356_input.loadHost();
    Table tbl_SerializeFromObject_TD_10379_input;
    tbl_SerializeFromObject_TD_10379_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10379_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_10379_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_10379_input.allocateHost();
    tbl_SerializeFromObject_TD_10379_input.loadHost();
    Table tbl_SerializeFromObject_TD_12674_input;
    tbl_SerializeFromObject_TD_12674_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_12674_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_12674_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_12674_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_12674_input.allocateHost();
    tbl_SerializeFromObject_TD_12674_input.loadHost();
    Table tbl_SerializeFromObject_TD_12665_input;
    tbl_SerializeFromObject_TD_12665_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_12665_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_12665_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_12665_input.allocateHost();
    tbl_SerializeFromObject_TD_12665_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_2893_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2893_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3710_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3710_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3401_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4227_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4227_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5744_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7770_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_8196_input.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7170_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8626_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9920_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9797_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_11356_input.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_12674_input.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_12665_input.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_2893_cmds;
    cfg_Project_TD_2893_cmds.allocateHost();
    get_cfg_dat_Project_TD_2893_gqe_join (cfg_Project_TD_2893_cmds.cmd);
    cfg_Project_TD_2893_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_3710_cmds;
    cfg_Project_TD_3710_cmds.allocateHost();
    get_cfg_dat_Project_TD_3710_gqe_join (cfg_Project_TD_3710_cmds.cmd);
    cfg_Project_TD_3710_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_4227_cmds;
    cfg_Project_TD_4227_cmds.allocateHost();
    get_cfg_dat_Project_TD_4227_gqe_join (cfg_Project_TD_4227_cmds.cmd);
    cfg_Project_TD_4227_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5744_cmds;
    cfg_JOIN_INNER_TD_5744_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5744_gqe_join (cfg_JOIN_INNER_TD_5744_cmds.cmd);
    cfg_JOIN_INNER_TD_5744_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7170_cmds;
    cfg_JOIN_INNER_TD_7170_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7170_gqe_join (cfg_JOIN_INNER_TD_7170_cmds.cmd);
    cfg_JOIN_INNER_TD_7170_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8626_cmds;
    cfg_JOIN_INNER_TD_8626_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8626_gqe_join (cfg_JOIN_INNER_TD_8626_cmds.cmd);
    cfg_JOIN_INNER_TD_8626_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9797_cmds;
    cfg_JOIN_INNER_TD_9797_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9797_gqe_join (cfg_JOIN_INNER_TD_9797_cmds.cmd);
    cfg_JOIN_INNER_TD_9797_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_2893;
    krnl_Project_TD_2893 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_2893.setup(tbl_Filter_TD_3401_output, tbl_Project_TD_2893_emptyBufferB, tbl_Project_TD_2893_output, cfg_Project_TD_2893_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_3710;
    krnl_Project_TD_3710 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_3710.setup(tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute, tbl_Project_TD_3710_emptyBufferB, tbl_Project_TD_3710_output, cfg_Project_TD_3710_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_4227;
    krnl_Project_TD_4227 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_4227.setup(tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute, tbl_Project_TD_4227_emptyBufferB, tbl_Project_TD_4227_output, cfg_Project_TD_4227_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5744;
    krnl_JOIN_INNER_TD_5744 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5744.setup(tbl_SerializeFromObject_TD_8196_input, tbl_Filter_TD_7770_output, tbl_JOIN_INNER_TD_5744_output, cfg_JOIN_INNER_TD_5744_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7170;
    krnl_JOIN_INNER_TD_7170 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7170.setup(tbl_JOIN_INNER_TD_8626_output, tbl_Filter_TD_9920_output, tbl_JOIN_INNER_TD_7170_output, cfg_JOIN_INNER_TD_7170_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8626;
    krnl_JOIN_INNER_TD_8626 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8626.setup(tbl_JOIN_INNER_TD_9797_output, tbl_SerializeFromObject_TD_11356_input, tbl_JOIN_INNER_TD_8626_output, cfg_JOIN_INNER_TD_8626_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9797;
    krnl_JOIN_INNER_TD_9797 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9797.setup(tbl_SerializeFromObject_TD_12674_input, tbl_SerializeFromObject_TD_12665_input, tbl_JOIN_INNER_TD_9797_output, cfg_JOIN_INNER_TD_9797_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_2893;
    trans_Project_TD_2893.setq(q_h);
    trans_Project_TD_2893.add(&(cfg_Project_TD_2893_cmds));
    transEngine trans_Project_TD_2893_out;
    trans_Project_TD_2893_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_3710;
    trans_Project_TD_3710.setq(q_h);
    trans_Project_TD_3710.add(&(cfg_Project_TD_3710_cmds));
    trans_Project_TD_3710.add(&(tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute));
    transEngine trans_Project_TD_3710_out;
    trans_Project_TD_3710_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_4227;
    trans_Project_TD_4227.setq(q_h);
    trans_Project_TD_4227.add(&(cfg_Project_TD_4227_cmds));
    trans_Project_TD_4227.add(&(tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute));
    transEngine trans_Project_TD_4227_out;
    trans_Project_TD_4227_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5744;
    trans_JOIN_INNER_TD_5744.setq(q_h);
    trans_JOIN_INNER_TD_5744.add(&(cfg_JOIN_INNER_TD_5744_cmds));
    trans_JOIN_INNER_TD_5744.add(&(tbl_SerializeFromObject_TD_8196_input));
    transEngine trans_JOIN_INNER_TD_5744_out;
    trans_JOIN_INNER_TD_5744_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7170;
    trans_JOIN_INNER_TD_7170.setq(q_h);
    trans_JOIN_INNER_TD_7170.add(&(cfg_JOIN_INNER_TD_7170_cmds));
    transEngine trans_JOIN_INNER_TD_7170_out;
    trans_JOIN_INNER_TD_7170_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8626;
    trans_JOIN_INNER_TD_8626.setq(q_h);
    trans_JOIN_INNER_TD_8626.add(&(cfg_JOIN_INNER_TD_8626_cmds));
    trans_JOIN_INNER_TD_8626.add(&(tbl_SerializeFromObject_TD_11356_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9797;
    trans_JOIN_INNER_TD_9797.setq(q_h);
    trans_JOIN_INNER_TD_9797.add(&(cfg_JOIN_INNER_TD_9797_cmds));
    trans_JOIN_INNER_TD_9797.add(&(tbl_SerializeFromObject_TD_12674_input));
    trans_JOIN_INNER_TD_9797.add(&(tbl_SerializeFromObject_TD_12665_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_2893;
    std::vector<cl::Event> events_d2h_rd_Project_TD_2893;
    std::vector<cl::Event> events_Project_TD_2893;
    events_h2d_wr_Project_TD_2893.resize(1);
    events_d2h_rd_Project_TD_2893.resize(1);
    events_Project_TD_2893.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_2893;
    std::vector<cl::Event> prev_events_grp_Project_TD_2893;
    std::vector<cl::Event> events_h2d_wr_Project_TD_3710;
    std::vector<cl::Event> events_d2h_rd_Project_TD_3710;
    std::vector<cl::Event> events_Project_TD_3710;
    events_h2d_wr_Project_TD_3710.resize(1);
    events_d2h_rd_Project_TD_3710.resize(1);
    events_Project_TD_3710.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_3710;
    std::vector<cl::Event> prev_events_grp_Project_TD_3710;
    std::vector<cl::Event> events_h2d_wr_Project_TD_4227;
    std::vector<cl::Event> events_d2h_rd_Project_TD_4227;
    std::vector<cl::Event> events_Project_TD_4227;
    events_h2d_wr_Project_TD_4227.resize(1);
    events_d2h_rd_Project_TD_4227.resize(1);
    events_Project_TD_4227.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_4227;
    std::vector<cl::Event> prev_events_grp_Project_TD_4227;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5744;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5744;
    std::vector<cl::Event> events_JOIN_INNER_TD_5744;
    events_h2d_wr_JOIN_INNER_TD_5744.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5744.resize(1);
    events_JOIN_INNER_TD_5744.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5744;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5744;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7170;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7170;
    std::vector<cl::Event> events_JOIN_INNER_TD_7170;
    events_h2d_wr_JOIN_INNER_TD_7170.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7170.resize(1);
    events_JOIN_INNER_TD_7170.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7170;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7170;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8626;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8626;
    std::vector<cl::Event> events_JOIN_INNER_TD_8626;
    events_h2d_wr_JOIN_INNER_TD_8626.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8626.resize(1);
    events_JOIN_INNER_TD_8626.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8626;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8626;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9797;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9797;
    std::vector<cl::Event> events_JOIN_INNER_TD_9797;
    events_h2d_wr_JOIN_INNER_TD_9797.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9797.resize(1);
    events_JOIN_INNER_TD_9797.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9797;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9797;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_JOIN_INNER_9_287_s, tv_r_JOIN_INNER_9_287_e;
    gettimeofday(&tv_r_JOIN_INNER_9_287_s, 0);
    trans_JOIN_INNER_TD_9797.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9797), &(events_h2d_wr_JOIN_INNER_TD_9797[0]));
    events_grp_JOIN_INNER_TD_9797.push_back(events_h2d_wr_JOIN_INNER_TD_9797[0]);
    krnl_JOIN_INNER_TD_9797.run(0, &(events_grp_JOIN_INNER_TD_9797), &(events_JOIN_INNER_TD_9797[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_287_e, 0);

    struct timeval tv_r_Filter_9_59_s, tv_r_Filter_9_59_e;
    gettimeofday(&tv_r_Filter_9_59_s, 0);
    SW_Filter_TD_9920(tbl_SerializeFromObject_TD_10379_input, tbl_Filter_TD_9920_output);
    gettimeofday(&tv_r_Filter_9_59_e, 0);

    struct timeval tv_r_JOIN_INNER_8_109_s, tv_r_JOIN_INNER_8_109_e;
    gettimeofday(&tv_r_JOIN_INNER_8_109_s, 0);
    prev_events_grp_JOIN_INNER_TD_8626.push_back(events_h2d_wr_JOIN_INNER_TD_9797[0]);
    trans_JOIN_INNER_TD_8626.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8626), &(events_h2d_wr_JOIN_INNER_TD_8626[0]));
    events_grp_JOIN_INNER_TD_8626.push_back(events_h2d_wr_JOIN_INNER_TD_8626[0]);
    events_grp_JOIN_INNER_TD_8626.push_back(events_JOIN_INNER_TD_9797[0]);
    krnl_JOIN_INNER_TD_8626.run(0, &(events_grp_JOIN_INNER_TD_8626), &(events_JOIN_INNER_TD_8626[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_109_e, 0);

    struct timeval tv_r_JOIN_INNER_7_528_s, tv_r_JOIN_INNER_7_528_e;
    gettimeofday(&tv_r_JOIN_INNER_7_528_s, 0);
    prev_events_grp_JOIN_INNER_TD_7170.push_back(events_h2d_wr_JOIN_INNER_TD_8626[0]);
    trans_JOIN_INNER_TD_7170.add(&(tbl_Filter_TD_9920_output));
    trans_JOIN_INNER_TD_7170.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7170), &(events_h2d_wr_JOIN_INNER_TD_7170[0]));
    events_grp_JOIN_INNER_TD_7170.push_back(events_h2d_wr_JOIN_INNER_TD_7170[0]);
    events_grp_JOIN_INNER_TD_7170.push_back(events_JOIN_INNER_TD_8626[0]);
    krnl_JOIN_INNER_TD_7170.run(0, &(events_grp_JOIN_INNER_TD_7170), &(events_JOIN_INNER_TD_7170[0]));
    
    trans_JOIN_INNER_TD_7170_out.add(&(tbl_JOIN_INNER_TD_7170_output));
    trans_JOIN_INNER_TD_7170_out.dev2host(0, &(events_JOIN_INNER_TD_7170), &(events_d2h_rd_JOIN_INNER_TD_7170[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_528_e, 0);

    struct timeval tv_r_Filter_7_616_s, tv_r_Filter_7_616_e;
    gettimeofday(&tv_r_Filter_7_616_s, 0);
    SW_Filter_TD_7770(tbl_SerializeFromObject_TD_8988_input, tbl_Filter_TD_7770_output);
    gettimeofday(&tv_r_Filter_7_616_e, 0);

    struct timeval tv_r_Aggregate_6_500_s, tv_r_Aggregate_6_500_e;
    gettimeofday(&tv_r_Aggregate_6_500_s, 0);
    SW_Aggregate_TD_6529(tbl_JOIN_INNER_TD_7170_output, tbl_Aggregate_TD_6529_output);
    gettimeofday(&tv_r_Aggregate_6_500_e, 0);

    struct timeval tv_r_JOIN_INNER_5_387_s, tv_r_JOIN_INNER_5_387_e;
    gettimeofday(&tv_r_JOIN_INNER_5_387_s, 0);
    trans_JOIN_INNER_TD_5744.add(&(tbl_Filter_TD_7770_output));
    trans_JOIN_INNER_TD_5744.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5744), &(events_h2d_wr_JOIN_INNER_TD_5744[0]));
    events_grp_JOIN_INNER_TD_5744.push_back(events_h2d_wr_JOIN_INNER_TD_5744[0]);
    krnl_JOIN_INNER_TD_5744.run(0, &(events_grp_JOIN_INNER_TD_5744), &(events_JOIN_INNER_TD_5744[0]));
    
    trans_JOIN_INNER_TD_5744_out.add(&(tbl_JOIN_INNER_TD_5744_output));
    trans_JOIN_INNER_TD_5744_out.dev2host(0, &(events_JOIN_INNER_TD_5744), &(events_d2h_rd_JOIN_INNER_TD_5744[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_387_e, 0);

    struct timeval tv_r_Project_4_100_s, tv_r_Project_4_100_e;
    gettimeofday(&tv_r_Project_4_100_s, 0);
    trans_Project_TD_4227.host2dev(0, &(prev_events_grp_Project_TD_4227), &(events_h2d_wr_Project_TD_4227[0]));
    events_grp_Project_TD_4227.push_back(events_h2d_wr_Project_TD_4227[0]);
    krnl_Project_TD_4227.run(0, &(events_grp_Project_TD_4227), &(events_Project_TD_4227[0]));
    
    trans_Project_TD_4227_out.add(&(tbl_Project_TD_4227_output));
    trans_Project_TD_4227_out.dev2host(0, &(events_Project_TD_4227), &(events_d2h_rd_Project_TD_4227[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_4_100_e, 0);

    struct timeval tv_r_JOIN_INNER_4_451_s, tv_r_JOIN_INNER_4_451_e;
    gettimeofday(&tv_r_JOIN_INNER_4_451_s, 0);
    SW_JOIN_INNER_TD_4808(tbl_JOIN_INNER_TD_5744_output, tbl_Aggregate_TD_6529_output, tbl_JOIN_INNER_TD_4808_output);
    gettimeofday(&tv_r_JOIN_INNER_4_451_e, 0);

    struct timeval tv_r_Filter_3_180_s, tv_r_Filter_3_180_e;
    gettimeofday(&tv_r_Filter_3_180_s, 0);
    SW_Filter_TD_3401(tbl_SerializeFromObject_TD_4607_input, tbl_Filter_TD_3401_output);
    gettimeofday(&tv_r_Filter_3_180_e, 0);

    struct timeval tv_r_Project_3_316_s, tv_r_Project_3_316_e;
    gettimeofday(&tv_r_Project_3_316_s, 0);
    trans_Project_TD_3710.host2dev(0, &(prev_events_grp_Project_TD_3710), &(events_h2d_wr_Project_TD_3710[0]));
    events_grp_Project_TD_3710.push_back(events_h2d_wr_Project_TD_3710[0]);
    krnl_Project_TD_3710.run(0, &(events_grp_Project_TD_3710), &(events_Project_TD_3710[0]));
    
    trans_Project_TD_3710_out.add(&(tbl_Project_TD_3710_output));
    trans_Project_TD_3710_out.dev2host(0, &(events_Project_TD_3710), &(events_d2h_rd_Project_TD_3710[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_3_316_e, 0);

    struct timeval tv_r_JOIN_INNER_3_91_s, tv_r_JOIN_INNER_3_91_e;
    gettimeofday(&tv_r_JOIN_INNER_3_91_s, 0);
    SW_JOIN_INNER_TD_3732(tbl_JOIN_INNER_TD_4808_output, tbl_Project_TD_4227_output, tbl_JOIN_INNER_TD_3732_output);
    gettimeofday(&tv_r_JOIN_INNER_3_91_e, 0);

    struct timeval tv_r_Project_2_731_s, tv_r_Project_2_731_e;
    gettimeofday(&tv_r_Project_2_731_s, 0);
    trans_Project_TD_2893.add(&(tbl_Filter_TD_3401_output));
    trans_Project_TD_2893.host2dev(0, &(prev_events_grp_Project_TD_2893), &(events_h2d_wr_Project_TD_2893[0]));
    events_grp_Project_TD_2893.push_back(events_h2d_wr_Project_TD_2893[0]);
    krnl_Project_TD_2893.run(0, &(events_grp_Project_TD_2893), &(events_Project_TD_2893[0]));
    
    trans_Project_TD_2893_out.add(&(tbl_Project_TD_2893_output));
    trans_Project_TD_2893_out.dev2host(0, &(events_Project_TD_2893), &(events_d2h_rd_Project_TD_2893[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_2_731_e, 0);

    struct timeval tv_r_JOIN_INNER_2_49_s, tv_r_JOIN_INNER_2_49_e;
    gettimeofday(&tv_r_JOIN_INNER_2_49_s, 0);
    SW_JOIN_INNER_TD_2993(tbl_JOIN_INNER_TD_3732_output, tbl_Project_TD_3710_output, tbl_JOIN_INNER_TD_2993_output);
    gettimeofday(&tv_r_JOIN_INNER_2_49_e, 0);

    struct timeval tv_r_JOIN_INNER_1_732_s, tv_r_JOIN_INNER_1_732_e;
    gettimeofday(&tv_r_JOIN_INNER_1_732_s, 0);
    SW_JOIN_INNER_TD_1344(tbl_JOIN_INNER_TD_2993_output, tbl_Project_TD_2893_output, tbl_JOIN_INNER_TD_1344_output);
    gettimeofday(&tv_r_JOIN_INNER_1_732_e, 0);

    struct timeval tv_r_Sort_0_184_s, tv_r_Sort_0_184_e;
    gettimeofday(&tv_r_Sort_0_184_s, 0);
    SW_Sort_TD_0417(tbl_JOIN_INNER_TD_1344_output, tbl_SerializeFromObject_TD_8988_input, tbl_SerializeFromObject_TD_6656_input, tbl_SerializeFromObject_TD_5355_input, tbl_Sort_TD_0417_output);
    gettimeofday(&tv_r_Sort_0_184_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_287_s, &tv_r_JOIN_INNER_9_287_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12674_input: " << tbl_SerializeFromObject_TD_12674_input.getNumRow() << " " << "tbl_SerializeFromObject_TD_12665_input: " << tbl_SerializeFromObject_TD_12665_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_59_s, &tv_r_Filter_9_59_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10379_input: " << tbl_SerializeFromObject_TD_10379_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_109_s, &tv_r_JOIN_INNER_8_109_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9797_output: " << tbl_JOIN_INNER_TD_9797_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_11356_input: " << tbl_SerializeFromObject_TD_11356_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_528_s, &tv_r_JOIN_INNER_7_528_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8626_output: " << tbl_JOIN_INNER_TD_8626_output.getNumRow() << " " << "tbl_Filter_TD_9920_output: " << tbl_Filter_TD_9920_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_616_s, &tv_r_Filter_7_616_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8988_input: " << tbl_SerializeFromObject_TD_8988_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_500_s, &tv_r_Aggregate_6_500_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7170_output: " << tbl_JOIN_INNER_TD_7170_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_387_s, &tv_r_JOIN_INNER_5_387_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7770_output: " << tbl_Filter_TD_7770_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_8196_input: " << tbl_SerializeFromObject_TD_8196_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_100_s, &tv_r_Project_4_100_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_6656_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_451_s, &tv_r_JOIN_INNER_4_451_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5744_output: " << tbl_JOIN_INNER_TD_5744_output.getNumRow() << " " << "tbl_Aggregate_TD_6529_output: " << tbl_Aggregate_TD_6529_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_180_s, &tv_r_Filter_3_180_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4607_input: " << tbl_SerializeFromObject_TD_4607_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_316_s, &tv_r_Project_3_316_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5355_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_91_s, &tv_r_JOIN_INNER_3_91_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4808_output: " << tbl_JOIN_INNER_TD_4808_output.getNumRow() << " " << "tbl_Project_TD_4227_output: " << tbl_Project_TD_4227_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_731_s, &tv_r_Project_2_731_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3401_output: " << tbl_Filter_TD_3401_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_49_s, &tv_r_JOIN_INNER_2_49_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3732_output: " << tbl_JOIN_INNER_TD_3732_output.getNumRow() << " " << "tbl_Project_TD_3710_output: " << tbl_Project_TD_3710_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_732_s, &tv_r_JOIN_INNER_1_732_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2993_output: " << tbl_JOIN_INNER_TD_2993_output.getNumRow() << " " << "tbl_Project_TD_2893_output: " << tbl_Project_TD_2893_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_184_s, &tv_r_Sort_0_184_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1344_output: " << tbl_JOIN_INNER_TD_1344_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.5399958 * 1000 << "ms" << std::endl; 
    return 0; 
}
