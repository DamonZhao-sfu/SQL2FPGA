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
    Table tbl_Sort_TD_0643_output("tbl_Sort_TD_0643_output", 6100000, 8, "");
    tbl_Sort_TD_0643_output.allocateHost();
    Table tbl_JOIN_INNER_TD_158_output("tbl_JOIN_INNER_TD_158_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_158_output.allocateHost();
    Table tbl_JOIN_INNER_TD_217_output("tbl_JOIN_INNER_TD_217_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_217_output.allocateHost();
    Table tbl_Project_TD_2731_output("tbl_Project_TD_2731_output", 6100000, 1, "");
    tbl_Project_TD_2731_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3536_output("tbl_JOIN_INNER_TD_3536_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_3536_output.allocateHost();
    Table tbl_Project_TD_3436_output("tbl_Project_TD_3436_output", 6100000, 3, "");
    tbl_Project_TD_3436_output.allocateHost();
    Table tbl_Filter_TD_3501_output("tbl_Filter_TD_3501_output", 6100000, 1, "");
    tbl_Filter_TD_3501_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4649_output("tbl_JOIN_INNER_TD_4649_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4649_output.allocateHost();
    Table tbl_Project_TD_4671_output("tbl_Project_TD_4671_output", 6100000, 7, "");
    tbl_Project_TD_4671_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5935_input;
    tbl_SerializeFromObject_TD_5935_input = Table("nation", nation_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5935_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5935_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5935_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_5935_input.allocateHost();
    tbl_SerializeFromObject_TD_5935_input.loadHost();
    Table tbl_SerializeFromObject_TD_4553_input;
    tbl_SerializeFromObject_TD_4553_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_4553_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_4553_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_4553_input.allocateHost();
    tbl_SerializeFromObject_TD_4553_input.loadHost();
    Table tbl_JOIN_INNER_TD_5906_output("tbl_JOIN_INNER_TD_5906_output", 628, 4, "");
    tbl_JOIN_INNER_TD_5906_output.allocateHost();
    Table tbl_Aggregate_TD_6718_output("tbl_Aggregate_TD_6718_output", 6100000, 2, "");
    tbl_Aggregate_TD_6718_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.addCol("s_address", 4, 1, 0);
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.addCol("s_phone", 4, 1, 0);
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.addCol("s_comment", 4, 1, 0);
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_6529_input;
    tbl_SerializeFromObject_TD_6529_input = Table("supplier", supplier_n, 7, in_dir);
    tbl_SerializeFromObject_TD_6529_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_6529_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_6529_input.addCol("s_address", TPCH_READ_S_ADDR_MAX+1);
    tbl_SerializeFromObject_TD_6529_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_6529_input.addCol("s_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_6529_input.addCol("s_acctbal", 4);
    tbl_SerializeFromObject_TD_6529_input.addCol("s_comment", TPCH_READ_S_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_6529_input.allocateHost();
    tbl_SerializeFromObject_TD_6529_input.loadHost();
    Table tbl_Project_TD_6478_output("tbl_Project_TD_6478_output", 6100000, 2, "");
    tbl_Project_TD_6478_output.allocateHost();
    Table tbl_Project_TD_661_output("tbl_Project_TD_661_output", 6100000, 3, "");
    tbl_Project_TD_661_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7863_output("tbl_JOIN_INNER_TD_7863_output", 5, 2, "");
    tbl_JOIN_INNER_TD_7863_output.allocateHost();
    Table tbl_Filter_TD_7706_output("tbl_Filter_TD_7706_output", 6100000, 2, "");
    tbl_Filter_TD_7706_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8714_input;
    tbl_SerializeFromObject_TD_8714_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8714_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8714_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8714_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8714_input.allocateHost();
    tbl_SerializeFromObject_TD_8714_input.loadHost();
    Table tbl_JOIN_INNER_TD_8713_output("tbl_JOIN_INNER_TD_8713_output", 2036, 3, "");
    tbl_JOIN_INNER_TD_8713_output.allocateHost();
    Table tbl_Project_TD_8161_output("tbl_Project_TD_8161_output", 6100000, 1, "");
    tbl_Project_TD_8161_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8403_input;
    tbl_SerializeFromObject_TD_8403_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_8403_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_8403_input.addCol("p_mfgr", TPCH_READ_P_MFG_LEN+1);
    tbl_SerializeFromObject_TD_8403_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_8403_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_8403_input.allocateHost();
    tbl_SerializeFromObject_TD_8403_input.loadHost();
    Table tbl_JOIN_INNER_TD_9742_output("tbl_JOIN_INNER_TD_9742_output", 162880, 3, "");
    tbl_JOIN_INNER_TD_9742_output.allocateHost();
    Table tbl_Project_TD_9960_output("tbl_Project_TD_9960_output", 6100000, 2, "");
    tbl_Project_TD_9960_output.allocateHost();
    Table tbl_Filter_TD_9732_output("tbl_Filter_TD_9732_output", 6100000, 1, "");
    tbl_Filter_TD_9732_output.allocateHost();
    Table tbl_Project_TD_10270_output("tbl_Project_TD_10270_output", 6100000, 3, "");
    tbl_Project_TD_10270_output.allocateHost();
    Table tbl_Project_TD_10571_output("tbl_Project_TD_10571_output", 6100000, 2, "");
    tbl_Project_TD_10571_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11781_input;
    tbl_SerializeFromObject_TD_11781_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_11781_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_11781_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_11781_input.allocateHost();
    tbl_SerializeFromObject_TD_11781_input.loadHost();
    Table tbl_SerializeFromObject_TD_10560_input;
    tbl_SerializeFromObject_TD_10560_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10560_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_10560_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_10560_input.allocateHost();
    tbl_SerializeFromObject_TD_10560_input.loadHost();
    Table tbl_SerializeFromObject_TD_12569_input;
    tbl_SerializeFromObject_TD_12569_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_12569_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_12569_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_12569_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_12569_input.allocateHost();
    tbl_SerializeFromObject_TD_12569_input.loadHost();
    Table tbl_SerializeFromObject_TD_12695_input;
    tbl_SerializeFromObject_TD_12695_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_12695_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_12695_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_12695_input.allocateHost();
    tbl_SerializeFromObject_TD_12695_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5906_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6478_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_661_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7863_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8713_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8161_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9742_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_9960_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10270_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10571_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5906_cmds;
    cfg_JOIN_INNER_TD_5906_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5906_gqe_join (cfg_JOIN_INNER_TD_5906_cmds.cmd);
    cfg_JOIN_INNER_TD_5906_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7863_cmds;
    cfg_JOIN_INNER_TD_7863_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7863_gqe_join (cfg_JOIN_INNER_TD_7863_cmds.cmd);
    cfg_JOIN_INNER_TD_7863_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8713_cmds;
    cfg_JOIN_INNER_TD_8713_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8713_gqe_join (cfg_JOIN_INNER_TD_8713_cmds.cmd);
    cfg_JOIN_INNER_TD_8713_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9742_cmds;
    cfg_JOIN_INNER_TD_9742_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9742_gqe_join (cfg_JOIN_INNER_TD_9742_cmds.cmd);
    cfg_JOIN_INNER_TD_9742_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5906;
    krnl_JOIN_INNER_TD_5906 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5906.setup(tbl_Project_TD_661_output, tbl_Project_TD_6478_output, tbl_JOIN_INNER_TD_5906_output, cfg_JOIN_INNER_TD_5906_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7863;
    krnl_JOIN_INNER_TD_7863 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7863.setup(tbl_JOIN_INNER_TD_8713_output, tbl_Project_TD_8161_output, tbl_JOIN_INNER_TD_7863_output, cfg_JOIN_INNER_TD_7863_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8713;
    krnl_JOIN_INNER_TD_8713 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8713.setup(tbl_JOIN_INNER_TD_9742_output, tbl_Project_TD_9960_output, tbl_JOIN_INNER_TD_8713_output, cfg_JOIN_INNER_TD_8713_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9742;
    krnl_JOIN_INNER_TD_9742 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9742.setup(tbl_Project_TD_10270_output, tbl_Project_TD_10571_output, tbl_JOIN_INNER_TD_9742_output, cfg_JOIN_INNER_TD_9742_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5906;
    trans_JOIN_INNER_TD_5906.setq(q_h);
    trans_JOIN_INNER_TD_5906.add(&(cfg_JOIN_INNER_TD_5906_cmds));
    transEngine trans_JOIN_INNER_TD_5906_out;
    trans_JOIN_INNER_TD_5906_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7863;
    trans_JOIN_INNER_TD_7863.setq(q_h);
    trans_JOIN_INNER_TD_7863.add(&(cfg_JOIN_INNER_TD_7863_cmds));
    transEngine trans_JOIN_INNER_TD_7863_out;
    trans_JOIN_INNER_TD_7863_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8713;
    trans_JOIN_INNER_TD_8713.setq(q_h);
    trans_JOIN_INNER_TD_8713.add(&(cfg_JOIN_INNER_TD_8713_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9742;
    trans_JOIN_INNER_TD_9742.setq(q_h);
    trans_JOIN_INNER_TD_9742.add(&(cfg_JOIN_INNER_TD_9742_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5906;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5906;
    std::vector<cl::Event> events_JOIN_INNER_TD_5906;
    events_h2d_wr_JOIN_INNER_TD_5906.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5906.resize(1);
    events_JOIN_INNER_TD_5906.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5906;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5906;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7863;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7863;
    std::vector<cl::Event> events_JOIN_INNER_TD_7863;
    events_h2d_wr_JOIN_INNER_TD_7863.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7863.resize(1);
    events_JOIN_INNER_TD_7863.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7863;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7863;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8713;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8713;
    std::vector<cl::Event> events_JOIN_INNER_TD_8713;
    events_h2d_wr_JOIN_INNER_TD_8713.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8713.resize(1);
    events_JOIN_INNER_TD_8713.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8713;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8713;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9742;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9742;
    std::vector<cl::Event> events_JOIN_INNER_TD_9742;
    events_h2d_wr_JOIN_INNER_TD_9742.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9742.resize(1);
    events_JOIN_INNER_TD_9742.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9742;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9742;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Project_10_898_s, tv_r_Project_10_898_e;
    gettimeofday(&tv_r_Project_10_898_s, 0);
    SW_Project_TD_10571(tbl_SerializeFromObject_TD_12695_input, tbl_Project_TD_10571_output);
    gettimeofday(&tv_r_Project_10_898_e, 0);

    struct timeval tv_r_Project_10_949_s, tv_r_Project_10_949_e;
    gettimeofday(&tv_r_Project_10_949_s, 0);
    SW_Project_TD_10270(tbl_SerializeFromObject_TD_12569_input, tbl_Project_TD_10270_output);
    gettimeofday(&tv_r_Project_10_949_e, 0);

    struct timeval tv_r_Filter_9_683_s, tv_r_Filter_9_683_e;
    gettimeofday(&tv_r_Filter_9_683_s, 0);
    SW_Filter_TD_9732(tbl_SerializeFromObject_TD_10560_input, tbl_Filter_TD_9732_output);
    gettimeofday(&tv_r_Filter_9_683_e, 0);

    struct timeval tv_r_Project_9_769_s, tv_r_Project_9_769_e;
    gettimeofday(&tv_r_Project_9_769_s, 0);
    SW_Project_TD_9960(tbl_SerializeFromObject_TD_11781_input, tbl_Project_TD_9960_output);
    gettimeofday(&tv_r_Project_9_769_e, 0);

    struct timeval tv_r_JOIN_INNER_9_632_s, tv_r_JOIN_INNER_9_632_e;
    gettimeofday(&tv_r_JOIN_INNER_9_632_s, 0);
    trans_JOIN_INNER_TD_9742.add(&(tbl_Project_TD_10270_output));
    trans_JOIN_INNER_TD_9742.add(&(tbl_Project_TD_10571_output));
    trans_JOIN_INNER_TD_9742.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9742), &(events_h2d_wr_JOIN_INNER_TD_9742[0]));
    events_grp_JOIN_INNER_TD_9742.push_back(events_h2d_wr_JOIN_INNER_TD_9742[0]);
    krnl_JOIN_INNER_TD_9742.run(0, &(events_grp_JOIN_INNER_TD_9742), &(events_JOIN_INNER_TD_9742[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_632_e, 0);

    struct timeval tv_r_Project_8_852_s, tv_r_Project_8_852_e;
    gettimeofday(&tv_r_Project_8_852_s, 0);
    SW_Project_TD_8161(tbl_Filter_TD_9732_output, tbl_Project_TD_8161_output);
    gettimeofday(&tv_r_Project_8_852_e, 0);

    struct timeval tv_r_JOIN_INNER_8_378_s, tv_r_JOIN_INNER_8_378_e;
    gettimeofday(&tv_r_JOIN_INNER_8_378_s, 0);
    prev_events_grp_JOIN_INNER_TD_8713.push_back(events_h2d_wr_JOIN_INNER_TD_9742[0]);
    trans_JOIN_INNER_TD_8713.add(&(tbl_Project_TD_9960_output));
    trans_JOIN_INNER_TD_8713.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8713), &(events_h2d_wr_JOIN_INNER_TD_8713[0]));
    events_grp_JOIN_INNER_TD_8713.push_back(events_h2d_wr_JOIN_INNER_TD_8713[0]);
    events_grp_JOIN_INNER_TD_8713.push_back(events_JOIN_INNER_TD_9742[0]);
    krnl_JOIN_INNER_TD_8713.run(0, &(events_grp_JOIN_INNER_TD_8713), &(events_JOIN_INNER_TD_8713[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_378_e, 0);

    struct timeval tv_r_Filter_7_5_s, tv_r_Filter_7_5_e;
    gettimeofday(&tv_r_Filter_7_5_s, 0);
    SW_Filter_TD_7706(tbl_SerializeFromObject_TD_8403_input, tbl_Filter_TD_7706_output);
    gettimeofday(&tv_r_Filter_7_5_e, 0);

    struct timeval tv_r_JOIN_INNER_7_810_s, tv_r_JOIN_INNER_7_810_e;
    gettimeofday(&tv_r_JOIN_INNER_7_810_s, 0);
    prev_events_grp_JOIN_INNER_TD_7863.push_back(events_h2d_wr_JOIN_INNER_TD_8713[0]);
    trans_JOIN_INNER_TD_7863.add(&(tbl_Project_TD_8161_output));
    trans_JOIN_INNER_TD_7863.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7863), &(events_h2d_wr_JOIN_INNER_TD_7863[0]));
    events_grp_JOIN_INNER_TD_7863.push_back(events_h2d_wr_JOIN_INNER_TD_7863[0]);
    events_grp_JOIN_INNER_TD_7863.push_back(events_JOIN_INNER_TD_8713[0]);
    krnl_JOIN_INNER_TD_7863.run(0, &(events_grp_JOIN_INNER_TD_7863), &(events_JOIN_INNER_TD_7863[0]));
    
    trans_JOIN_INNER_TD_7863_out.add(&(tbl_JOIN_INNER_TD_7863_output));
    trans_JOIN_INNER_TD_7863_out.dev2host(0, &(events_JOIN_INNER_TD_7863), &(events_d2h_rd_JOIN_INNER_TD_7863[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_810_e, 0);

    struct timeval tv_r_Project_6_754_s, tv_r_Project_6_754_e;
    gettimeofday(&tv_r_Project_6_754_s, 0);
    SW_Project_TD_661(tbl_SerializeFromObject_TD_8714_input, tbl_Project_TD_661_output);
    gettimeofday(&tv_r_Project_6_754_e, 0);

    struct timeval tv_r_Project_6_642_s, tv_r_Project_6_642_e;
    gettimeofday(&tv_r_Project_6_642_s, 0);
    SW_Project_TD_6478(tbl_Filter_TD_7706_output, tbl_Project_TD_6478_output);
    gettimeofday(&tv_r_Project_6_642_e, 0);

    struct timeval tv_r_Aggregate_6_210_s, tv_r_Aggregate_6_210_e;
    gettimeofday(&tv_r_Aggregate_6_210_s, 0);
    SW_Aggregate_TD_6718(tbl_JOIN_INNER_TD_7863_output, tbl_Aggregate_TD_6718_output);
    gettimeofday(&tv_r_Aggregate_6_210_e, 0);

    struct timeval tv_r_JOIN_INNER_5_866_s, tv_r_JOIN_INNER_5_866_e;
    gettimeofday(&tv_r_JOIN_INNER_5_866_s, 0);
    trans_JOIN_INNER_TD_5906.add(&(tbl_Project_TD_6478_output));
    trans_JOIN_INNER_TD_5906.add(&(tbl_Project_TD_661_output));
    trans_JOIN_INNER_TD_5906.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5906), &(events_h2d_wr_JOIN_INNER_TD_5906[0]));
    events_grp_JOIN_INNER_TD_5906.push_back(events_h2d_wr_JOIN_INNER_TD_5906[0]);
    krnl_JOIN_INNER_TD_5906.run(0, &(events_grp_JOIN_INNER_TD_5906), &(events_JOIN_INNER_TD_5906[0]));
    
    trans_JOIN_INNER_TD_5906_out.add(&(tbl_JOIN_INNER_TD_5906_output));
    trans_JOIN_INNER_TD_5906_out.dev2host(0, &(events_JOIN_INNER_TD_5906), &(events_d2h_rd_JOIN_INNER_TD_5906[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_866_e, 0);

    struct timeval tv_r_Project_4_881_s, tv_r_Project_4_881_e;
    gettimeofday(&tv_r_Project_4_881_s, 0);
    SW_Project_TD_4671(tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute, tbl_Project_TD_4671_output);
    gettimeofday(&tv_r_Project_4_881_e, 0);

    struct timeval tv_r_JOIN_INNER_4_362_s, tv_r_JOIN_INNER_4_362_e;
    gettimeofday(&tv_r_JOIN_INNER_4_362_s, 0);
    SW_JOIN_INNER_TD_4649(tbl_JOIN_INNER_TD_5906_output, tbl_Aggregate_TD_6718_output, tbl_JOIN_INNER_TD_4649_output);
    gettimeofday(&tv_r_JOIN_INNER_4_362_e, 0);

    struct timeval tv_r_Filter_3_771_s, tv_r_Filter_3_771_e;
    gettimeofday(&tv_r_Filter_3_771_s, 0);
    SW_Filter_TD_3501(tbl_SerializeFromObject_TD_4553_input, tbl_Filter_TD_3501_output);
    gettimeofday(&tv_r_Filter_3_771_e, 0);

    struct timeval tv_r_Project_3_211_s, tv_r_Project_3_211_e;
    gettimeofday(&tv_r_Project_3_211_s, 0);
    SW_Project_TD_3436(tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute, tbl_Project_TD_3436_output);
    gettimeofday(&tv_r_Project_3_211_e, 0);

    struct timeval tv_r_JOIN_INNER_3_130_s, tv_r_JOIN_INNER_3_130_e;
    gettimeofday(&tv_r_JOIN_INNER_3_130_s, 0);
    SW_JOIN_INNER_TD_3536(tbl_JOIN_INNER_TD_4649_output, tbl_Project_TD_4671_output, tbl_JOIN_INNER_TD_3536_output);
    gettimeofday(&tv_r_JOIN_INNER_3_130_e, 0);

    struct timeval tv_r_Project_2_4_s, tv_r_Project_2_4_e;
    gettimeofday(&tv_r_Project_2_4_s, 0);
    SW_Project_TD_2731(tbl_Filter_TD_3501_output, tbl_Project_TD_2731_output);
    gettimeofday(&tv_r_Project_2_4_e, 0);

    struct timeval tv_r_JOIN_INNER_2_938_s, tv_r_JOIN_INNER_2_938_e;
    gettimeofday(&tv_r_JOIN_INNER_2_938_s, 0);
    SW_JOIN_INNER_TD_217(tbl_JOIN_INNER_TD_3536_output, tbl_Project_TD_3436_output, tbl_JOIN_INNER_TD_217_output);
    gettimeofday(&tv_r_JOIN_INNER_2_938_e, 0);

    struct timeval tv_r_JOIN_INNER_1_56_s, tv_r_JOIN_INNER_1_56_e;
    gettimeofday(&tv_r_JOIN_INNER_1_56_s, 0);
    SW_JOIN_INNER_TD_158(tbl_JOIN_INNER_TD_217_output, tbl_Project_TD_2731_output, tbl_JOIN_INNER_TD_158_output);
    gettimeofday(&tv_r_JOIN_INNER_1_56_e, 0);

    struct timeval tv_r_Sort_0_181_s, tv_r_Sort_0_181_e;
    gettimeofday(&tv_r_Sort_0_181_s, 0);
    SW_Sort_TD_0643(tbl_JOIN_INNER_TD_158_output, tbl_SerializeFromObject_TD_8403_input, tbl_SerializeFromObject_TD_6529_input, tbl_SerializeFromObject_TD_5935_input, tbl_Sort_TD_0643_output);
    gettimeofday(&tv_r_Sort_0_181_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_898_s, &tv_r_Project_10_898_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12695_input: " << tbl_SerializeFromObject_TD_12695_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_949_s, &tv_r_Project_10_949_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12569_input: " << tbl_SerializeFromObject_TD_12569_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_683_s, &tv_r_Filter_9_683_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10560_input: " << tbl_SerializeFromObject_TD_10560_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_9: " << tvdiff(&tv_r_Project_9_769_s, &tv_r_Project_9_769_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11781_input: " << tbl_SerializeFromObject_TD_11781_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_632_s, &tv_r_JOIN_INNER_9_632_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10270_output: " << tbl_Project_TD_10270_output.getNumRow() << " " << "tbl_Project_TD_10571_output: " << tbl_Project_TD_10571_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_852_s, &tv_r_Project_8_852_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9732_output: " << tbl_Filter_TD_9732_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_378_s, &tv_r_JOIN_INNER_8_378_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9742_output: " << tbl_JOIN_INNER_TD_9742_output.getNumRow() << " " << "tbl_Project_TD_9960_output: " << tbl_Project_TD_9960_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_5_s, &tv_r_Filter_7_5_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8403_input: " << tbl_SerializeFromObject_TD_8403_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_810_s, &tv_r_JOIN_INNER_7_810_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8713_output: " << tbl_JOIN_INNER_TD_8713_output.getNumRow() << " " << "tbl_Project_TD_8161_output: " << tbl_Project_TD_8161_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_754_s, &tv_r_Project_6_754_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8714_input: " << tbl_SerializeFromObject_TD_8714_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_642_s, &tv_r_Project_6_642_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7706_output: " << tbl_Filter_TD_7706_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_210_s, &tv_r_Aggregate_6_210_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7863_output: " << tbl_JOIN_INNER_TD_7863_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_866_s, &tv_r_JOIN_INNER_5_866_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6478_output: " << tbl_Project_TD_6478_output.getNumRow() << " " << "tbl_Project_TD_661_output: " << tbl_Project_TD_661_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_881_s, &tv_r_Project_4_881_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_362_s, &tv_r_JOIN_INNER_4_362_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5906_output: " << tbl_JOIN_INNER_TD_5906_output.getNumRow() << " " << "tbl_Aggregate_TD_6718_output: " << tbl_Aggregate_TD_6718_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_771_s, &tv_r_Filter_3_771_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4553_input: " << tbl_SerializeFromObject_TD_4553_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_211_s, &tv_r_Project_3_211_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_130_s, &tv_r_JOIN_INNER_3_130_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4649_output: " << tbl_JOIN_INNER_TD_4649_output.getNumRow() << " " << "tbl_Project_TD_4671_output: " << tbl_Project_TD_4671_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_4_s, &tv_r_Project_2_4_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3501_output: " << tbl_Filter_TD_3501_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_938_s, &tv_r_JOIN_INNER_2_938_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3536_output: " << tbl_JOIN_INNER_TD_3536_output.getNumRow() << " " << "tbl_Project_TD_3436_output: " << tbl_Project_TD_3436_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_56_s, &tv_r_JOIN_INNER_1_56_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_217_output: " << tbl_JOIN_INNER_TD_217_output.getNumRow() << " " << "tbl_Project_TD_2731_output: " << tbl_Project_TD_2731_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_181_s, &tv_r_Sort_0_181_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_158_output: " << tbl_JOIN_INNER_TD_158_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.2340508 * 1000 << "ms" << std::endl; 
    return 0; 
}
