// number of overlays (w/o fusion): 6 
// number of overlays (w/ fusion): 6 
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

#include "cfgFunc_q21.hpp" 
#include "q21.hpp" 

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
    std::cout << "NOTE:running query #21\n."; 
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
    Table tbl_Sort_TD_0593_output("tbl_Sort_TD_0593_output", 6100000, 2, "");
    tbl_Sort_TD_0593_output.allocateHost();
    Table tbl_Aggregate_TD_1212_output("tbl_Aggregate_TD_1212_output", 6100000, 2, "");
    tbl_Aggregate_TD_1212_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2336_output("tbl_JOIN_INNER_TD_2336_output", 25255, 1, "");
    tbl_JOIN_INNER_TD_2336_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3812_output("tbl_JOIN_INNER_TD_3812_output", 377, 2, "");
    tbl_JOIN_INNER_TD_3812_output.allocateHost();
    Table tbl_Project_TD_3530_output("tbl_Project_TD_3530_output", 6100000, 1, "");
    tbl_Project_TD_3530_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4778_output("tbl_JOIN_INNER_TD_4778_output", 52212, 3, "");
    tbl_JOIN_INNER_TD_4778_output.allocateHost();
    Table tbl_Project_TD_4701_output("tbl_Project_TD_4701_output", 6100000, 1, "");
    tbl_Project_TD_4701_output.allocateHost();
    Table tbl_Filter_TD_4611_output("tbl_Filter_TD_4611_output", 6100000, 1, "");
    tbl_Filter_TD_4611_output.allocateHost();
    Table tbl_Project_TD_5621_output("tbl_Project_TD_5621_output", 6100000, 3, "");
    tbl_Project_TD_5621_output.allocateHost();
    Table tbl_Project_TD_5958_output("tbl_Project_TD_5958_output", 6100000, 2, "");
    tbl_Project_TD_5958_output.allocateHost();
    Table tbl_Filter_TD_5747_output("tbl_Filter_TD_5747_output", 6100000, 1, "");
    tbl_Filter_TD_5747_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5957_input;
    tbl_SerializeFromObject_TD_5957_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5957_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5957_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5957_input.allocateHost();
    tbl_SerializeFromObject_TD_5957_input.loadHost();
    Table tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute = Table("supplier", supplier_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_7378_input;
    tbl_SerializeFromObject_TD_7378_input = Table("supplier", supplier_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7378_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7378_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_7378_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7378_input.allocateHost();
    tbl_SerializeFromObject_TD_7378_input.loadHost();
    Table tbl_JOIN_LEFTANTI_TD_6567_output("tbl_JOIN_LEFTANTI_TD_6567_output", -1, 2, "");
    tbl_JOIN_LEFTANTI_TD_6567_output.allocateHost();
    Table tbl_SerializeFromObject_TD_626_input;
    tbl_SerializeFromObject_TD_626_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_626_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_626_input.addCol("o_orderstatus", 4);
    tbl_SerializeFromObject_TD_626_input.allocateHost();
    tbl_SerializeFromObject_TD_626_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_7370_output("tbl_JOIN_LEFTSEMI_TD_7370_output", 2844584, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7370_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_8190_output("tbl_JOIN_LEFTSEMI_TD_8190_output", -1, 2, "");
    tbl_JOIN_LEFTSEMI_TD_8190_output.allocateHost();
    Table tbl_Project_TD_8772_output("tbl_Project_TD_8772_output", 6100000, 2, "");
    tbl_Project_TD_8772_output.allocateHost();
    Table tbl_Filter_TD_9101_output("tbl_Filter_TD_9101_output", 6100000, 2, "");
    tbl_Filter_TD_9101_output.allocateHost();
    Table tbl_Project_TD_9549_output("tbl_Project_TD_9549_output", 6100000, 2, "");
    tbl_Project_TD_9549_output.allocateHost();
    Table tbl_Filter_TD_9551_output("tbl_Filter_TD_9551_output", 6100000, 2, "");
    tbl_Filter_TD_9551_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10388_input;
    tbl_SerializeFromObject_TD_10388_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_10388_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10388_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10388_input.addCol("l_receiptdate", 4);
    tbl_SerializeFromObject_TD_10388_input.addCol("l_commitdate", 4);
    tbl_SerializeFromObject_TD_10388_input.allocateHost();
    tbl_SerializeFromObject_TD_10388_input.loadHost();
    Table tbl_SerializeFromObject_TD_10960_input;
    tbl_SerializeFromObject_TD_10960_input = Table("lineitem", lineitem_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10960_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10960_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10960_input.allocateHost();
    tbl_SerializeFromObject_TD_10960_input.loadHost();
    Table tbl_SerializeFromObject_TD_10541_input;
    tbl_SerializeFromObject_TD_10541_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_10541_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10541_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10541_input.addCol("l_receiptdate", 4);
    tbl_SerializeFromObject_TD_10541_input.addCol("l_commitdate", 4);
    tbl_SerializeFromObject_TD_10541_input.allocateHost();
    tbl_SerializeFromObject_TD_10541_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2336_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3812_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3530_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4778_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4701_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5621_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5958_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTANTI_TD_6567_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_7370_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_8190_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8772_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9101_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_9549_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2336_cmds;
    cfg_JOIN_INNER_TD_2336_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2336_gqe_join (cfg_JOIN_INNER_TD_2336_cmds.cmd);
    cfg_JOIN_INNER_TD_2336_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3812_cmds;
    cfg_JOIN_INNER_TD_3812_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3812_gqe_join (cfg_JOIN_INNER_TD_3812_cmds.cmd);
    cfg_JOIN_INNER_TD_3812_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4778_cmds;
    cfg_JOIN_INNER_TD_4778_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4778_gqe_join (cfg_JOIN_INNER_TD_4778_cmds.cmd);
    cfg_JOIN_INNER_TD_4778_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTANTI_TD_6567_cmds;
    cfg_JOIN_LEFTANTI_TD_6567_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTANTI_TD_6567_gqe_join (cfg_JOIN_LEFTANTI_TD_6567_cmds.cmd);
    cfg_JOIN_LEFTANTI_TD_6567_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_7370_cmds;
    cfg_JOIN_LEFTSEMI_TD_7370_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_7370_gqe_join (cfg_JOIN_LEFTSEMI_TD_7370_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_7370_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_8190_cmds;
    cfg_JOIN_LEFTSEMI_TD_8190_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_8190_gqe_join (cfg_JOIN_LEFTSEMI_TD_8190_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_8190_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2336;
    krnl_JOIN_INNER_TD_2336 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2336.setup(tbl_Project_TD_3530_output, tbl_JOIN_INNER_TD_3812_output, tbl_JOIN_INNER_TD_2336_output, cfg_JOIN_INNER_TD_2336_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3812;
    krnl_JOIN_INNER_TD_3812 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3812.setup(tbl_JOIN_INNER_TD_4778_output, tbl_Project_TD_4701_output, tbl_JOIN_INNER_TD_3812_output, cfg_JOIN_INNER_TD_3812_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4778;
    krnl_JOIN_INNER_TD_4778 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4778.setup(tbl_Project_TD_5621_output, tbl_Project_TD_5958_output, tbl_JOIN_INNER_TD_4778_output, cfg_JOIN_INNER_TD_4778_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTANTI_TD_6567;
    krnl_JOIN_LEFTANTI_TD_6567 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTANTI_TD_6567.setup(tbl_JOIN_LEFTSEMI_TD_7370_output, tbl_Project_TD_8772_output, tbl_JOIN_LEFTANTI_TD_6567_output, cfg_JOIN_LEFTANTI_TD_6567_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_7370;
    krnl_JOIN_LEFTSEMI_TD_7370 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_7370.setup(tbl_Project_TD_8772_output, tbl_JOIN_LEFTSEMI_TD_8190_output, tbl_JOIN_LEFTSEMI_TD_7370_output, cfg_JOIN_LEFTSEMI_TD_7370_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_8190;
    krnl_JOIN_LEFTSEMI_TD_8190 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_8190.setup(tbl_Project_TD_9549_output, tbl_Filter_TD_9101_output, tbl_JOIN_LEFTSEMI_TD_8190_output, cfg_JOIN_LEFTSEMI_TD_8190_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2336;
    trans_JOIN_INNER_TD_2336.setq(q_h);
    trans_JOIN_INNER_TD_2336.add(&(cfg_JOIN_INNER_TD_2336_cmds));
    transEngine trans_JOIN_INNER_TD_2336_out;
    trans_JOIN_INNER_TD_2336_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3812;
    trans_JOIN_INNER_TD_3812.setq(q_h);
    trans_JOIN_INNER_TD_3812.add(&(cfg_JOIN_INNER_TD_3812_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4778;
    trans_JOIN_INNER_TD_4778.setq(q_h);
    trans_JOIN_INNER_TD_4778.add(&(cfg_JOIN_INNER_TD_4778_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTANTI_TD_6567;
    trans_JOIN_LEFTANTI_TD_6567.setq(q_h);
    trans_JOIN_LEFTANTI_TD_6567.add(&(cfg_JOIN_LEFTANTI_TD_6567_cmds));
    transEngine trans_JOIN_LEFTANTI_TD_6567_out;
    trans_JOIN_LEFTANTI_TD_6567_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_7370;
    trans_JOIN_LEFTSEMI_TD_7370.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_7370.add(&(cfg_JOIN_LEFTSEMI_TD_7370_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_8190;
    trans_JOIN_LEFTSEMI_TD_8190.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_8190.add(&(cfg_JOIN_LEFTSEMI_TD_8190_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2336;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2336;
    std::vector<cl::Event> events_JOIN_INNER_TD_2336;
    events_h2d_wr_JOIN_INNER_TD_2336.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2336.resize(1);
    events_JOIN_INNER_TD_2336.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2336;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2336;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3812;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3812;
    std::vector<cl::Event> events_JOIN_INNER_TD_3812;
    events_h2d_wr_JOIN_INNER_TD_3812.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3812.resize(1);
    events_JOIN_INNER_TD_3812.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3812;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3812;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4778;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4778;
    std::vector<cl::Event> events_JOIN_INNER_TD_4778;
    events_h2d_wr_JOIN_INNER_TD_4778.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4778.resize(1);
    events_JOIN_INNER_TD_4778.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4778;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4778;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTANTI_TD_6567;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTANTI_TD_6567;
    std::vector<cl::Event> events_JOIN_LEFTANTI_TD_6567;
    events_h2d_wr_JOIN_LEFTANTI_TD_6567.resize(1);
    events_d2h_rd_JOIN_LEFTANTI_TD_6567.resize(1);
    events_JOIN_LEFTANTI_TD_6567.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTANTI_TD_6567;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTANTI_TD_6567;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_7370;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_7370;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_7370;
    events_h2d_wr_JOIN_LEFTSEMI_TD_7370.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_7370.resize(1);
    events_JOIN_LEFTSEMI_TD_7370.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_7370;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_7370;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_8190;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_8190;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_8190;
    events_h2d_wr_JOIN_LEFTSEMI_TD_8190.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_8190.resize(1);
    events_JOIN_LEFTSEMI_TD_8190.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_8190;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_8190;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_675_s, tv_r_Filter_9_675_e;
    gettimeofday(&tv_r_Filter_9_675_s, 0);
    SW_Filter_TD_9551(tbl_SerializeFromObject_TD_10541_input, tbl_Filter_TD_9551_output);
    gettimeofday(&tv_r_Filter_9_675_e, 0);

    struct timeval tv_r_Project_9_933_s, tv_r_Project_9_933_e;
    gettimeofday(&tv_r_Project_9_933_s, 0);
    SW_Project_TD_9549(tbl_SerializeFromObject_TD_10960_input, tbl_Project_TD_9549_output);
    gettimeofday(&tv_r_Project_9_933_e, 0);

    struct timeval tv_r_Filter_9_113_s, tv_r_Filter_9_113_e;
    gettimeofday(&tv_r_Filter_9_113_s, 0);
    SW_Filter_TD_9101(tbl_SerializeFromObject_TD_10388_input, tbl_Filter_TD_9101_output);
    gettimeofday(&tv_r_Filter_9_113_e, 0);

    struct timeval tv_r_Project_8_932_s, tv_r_Project_8_932_e;
    gettimeofday(&tv_r_Project_8_932_s, 0);
    SW_Project_TD_8772(tbl_Filter_TD_9551_output, tbl_Project_TD_8772_output);
    gettimeofday(&tv_r_Project_8_932_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_107_s, tv_r_JOIN_LEFTSEMI_8_107_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_107_s, 0);
    trans_JOIN_LEFTSEMI_TD_8190.add(&(tbl_Filter_TD_9101_output));
    trans_JOIN_LEFTSEMI_TD_8190.add(&(tbl_Project_TD_9549_output));
    trans_JOIN_LEFTSEMI_TD_8190.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_8190), &(events_h2d_wr_JOIN_LEFTSEMI_TD_8190[0]));
    events_grp_JOIN_LEFTSEMI_TD_8190.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8190[0]);
    krnl_JOIN_LEFTSEMI_TD_8190.run(0, &(events_grp_JOIN_LEFTSEMI_TD_8190), &(events_JOIN_LEFTSEMI_TD_8190[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_107_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_132_s, tv_r_JOIN_LEFTSEMI_7_132_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_132_s, 0);
    prev_events_grp_JOIN_LEFTSEMI_TD_7370.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8190[0]);
    trans_JOIN_LEFTSEMI_TD_7370.add(&(tbl_Project_TD_8772_output));
    trans_JOIN_LEFTSEMI_TD_7370.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_7370), &(events_h2d_wr_JOIN_LEFTSEMI_TD_7370[0]));
    events_grp_JOIN_LEFTSEMI_TD_7370.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7370[0]);
    events_grp_JOIN_LEFTSEMI_TD_7370.push_back(events_JOIN_LEFTSEMI_TD_8190[0]);
    krnl_JOIN_LEFTSEMI_TD_7370.run(0, &(events_grp_JOIN_LEFTSEMI_TD_7370), &(events_JOIN_LEFTSEMI_TD_7370[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_132_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_6_530_s, tv_r_JOIN_LEFTANTI_6_530_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_6_530_s, 0);
    prev_events_grp_JOIN_LEFTANTI_TD_6567.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7370[0]);
    trans_JOIN_LEFTANTI_TD_6567.add(&(tbl_Project_TD_8772_output));
    trans_JOIN_LEFTANTI_TD_6567.host2dev(0, &(prev_events_grp_JOIN_LEFTANTI_TD_6567), &(events_h2d_wr_JOIN_LEFTANTI_TD_6567[0]));
    events_grp_JOIN_LEFTANTI_TD_6567.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_6567[0]);
    events_grp_JOIN_LEFTANTI_TD_6567.push_back(events_JOIN_LEFTSEMI_TD_7370[0]);
    krnl_JOIN_LEFTANTI_TD_6567.run(0, &(events_grp_JOIN_LEFTANTI_TD_6567), &(events_JOIN_LEFTANTI_TD_6567[0]));
    
    trans_JOIN_LEFTANTI_TD_6567_out.add(&(tbl_JOIN_LEFTANTI_TD_6567_output));
    trans_JOIN_LEFTANTI_TD_6567_out.dev2host(0, &(events_JOIN_LEFTANTI_TD_6567), &(events_d2h_rd_JOIN_LEFTANTI_TD_6567[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTANTI_6_530_e, 0);

    struct timeval tv_r_Filter_5_390_s, tv_r_Filter_5_390_e;
    gettimeofday(&tv_r_Filter_5_390_s, 0);
    SW_Filter_TD_5747(tbl_SerializeFromObject_TD_626_input, tbl_Filter_TD_5747_output);
    gettimeofday(&tv_r_Filter_5_390_e, 0);

    struct timeval tv_r_Project_5_61_s, tv_r_Project_5_61_e;
    gettimeofday(&tv_r_Project_5_61_s, 0);
    SW_Project_TD_5958(tbl_JOIN_LEFTANTI_TD_6567_output, tbl_Project_TD_5958_output);
    gettimeofday(&tv_r_Project_5_61_e, 0);

    struct timeval tv_r_Project_5_124_s, tv_r_Project_5_124_e;
    gettimeofday(&tv_r_Project_5_124_s, 0);
    SW_Project_TD_5621(tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute, tbl_Project_TD_5621_output);
    gettimeofday(&tv_r_Project_5_124_e, 0);

    struct timeval tv_r_Filter_4_887_s, tv_r_Filter_4_887_e;
    gettimeofday(&tv_r_Filter_4_887_s, 0);
    SW_Filter_TD_4611(tbl_SerializeFromObject_TD_5957_input, tbl_Filter_TD_4611_output);
    gettimeofday(&tv_r_Filter_4_887_e, 0);

    struct timeval tv_r_Project_4_4_s, tv_r_Project_4_4_e;
    gettimeofday(&tv_r_Project_4_4_s, 0);
    SW_Project_TD_4701(tbl_Filter_TD_5747_output, tbl_Project_TD_4701_output);
    gettimeofday(&tv_r_Project_4_4_e, 0);

    struct timeval tv_r_JOIN_INNER_4_294_s, tv_r_JOIN_INNER_4_294_e;
    gettimeofday(&tv_r_JOIN_INNER_4_294_s, 0);
    trans_JOIN_INNER_TD_4778.add(&(tbl_Project_TD_5621_output));
    trans_JOIN_INNER_TD_4778.add(&(tbl_Project_TD_5958_output));
    trans_JOIN_INNER_TD_4778.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4778), &(events_h2d_wr_JOIN_INNER_TD_4778[0]));
    events_grp_JOIN_INNER_TD_4778.push_back(events_h2d_wr_JOIN_INNER_TD_4778[0]);
    krnl_JOIN_INNER_TD_4778.run(0, &(events_grp_JOIN_INNER_TD_4778), &(events_JOIN_INNER_TD_4778[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_294_e, 0);

    struct timeval tv_r_Project_3_116_s, tv_r_Project_3_116_e;
    gettimeofday(&tv_r_Project_3_116_s, 0);
    SW_Project_TD_3530(tbl_Filter_TD_4611_output, tbl_Project_TD_3530_output);
    gettimeofday(&tv_r_Project_3_116_e, 0);

    struct timeval tv_r_JOIN_INNER_3_11_s, tv_r_JOIN_INNER_3_11_e;
    gettimeofday(&tv_r_JOIN_INNER_3_11_s, 0);
    prev_events_grp_JOIN_INNER_TD_3812.push_back(events_h2d_wr_JOIN_INNER_TD_4778[0]);
    trans_JOIN_INNER_TD_3812.add(&(tbl_Project_TD_4701_output));
    trans_JOIN_INNER_TD_3812.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3812), &(events_h2d_wr_JOIN_INNER_TD_3812[0]));
    events_grp_JOIN_INNER_TD_3812.push_back(events_h2d_wr_JOIN_INNER_TD_3812[0]);
    events_grp_JOIN_INNER_TD_3812.push_back(events_JOIN_INNER_TD_4778[0]);
    krnl_JOIN_INNER_TD_3812.run(0, &(events_grp_JOIN_INNER_TD_3812), &(events_JOIN_INNER_TD_3812[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_11_e, 0);

    struct timeval tv_r_JOIN_INNER_2_315_s, tv_r_JOIN_INNER_2_315_e;
    gettimeofday(&tv_r_JOIN_INNER_2_315_s, 0);
    prev_events_grp_JOIN_INNER_TD_2336.push_back(events_h2d_wr_JOIN_INNER_TD_3812[0]);
    trans_JOIN_INNER_TD_2336.add(&(tbl_Project_TD_3530_output));
    trans_JOIN_INNER_TD_2336.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2336), &(events_h2d_wr_JOIN_INNER_TD_2336[0]));
    events_grp_JOIN_INNER_TD_2336.push_back(events_h2d_wr_JOIN_INNER_TD_2336[0]);
    events_grp_JOIN_INNER_TD_2336.push_back(events_JOIN_INNER_TD_3812[0]);
    krnl_JOIN_INNER_TD_2336.run(0, &(events_grp_JOIN_INNER_TD_2336), &(events_JOIN_INNER_TD_2336[0]));
    
    trans_JOIN_INNER_TD_2336_out.add(&(tbl_JOIN_INNER_TD_2336_output));
    trans_JOIN_INNER_TD_2336_out.dev2host(0, &(events_JOIN_INNER_TD_2336), &(events_d2h_rd_JOIN_INNER_TD_2336[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_315_e, 0);

    struct timeval tv_r_Aggregate_1_56_s, tv_r_Aggregate_1_56_e;
    gettimeofday(&tv_r_Aggregate_1_56_s, 0);
    SW_Aggregate_TD_1212(tbl_JOIN_INNER_TD_2336_output, tbl_SerializeFromObject_TD_7378_input, tbl_Aggregate_TD_1212_output);
    gettimeofday(&tv_r_Aggregate_1_56_e, 0);

    struct timeval tv_r_Sort_0_876_s, tv_r_Sort_0_876_e;
    gettimeofday(&tv_r_Sort_0_876_s, 0);
    SW_Sort_TD_0593(tbl_Aggregate_TD_1212_output, tbl_Sort_TD_0593_output);
    gettimeofday(&tv_r_Sort_0_876_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_675_s, &tv_r_Filter_9_675_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10541_input: " << tbl_SerializeFromObject_TD_10541_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_9: " << tvdiff(&tv_r_Project_9_933_s, &tv_r_Project_9_933_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10960_input: " << tbl_SerializeFromObject_TD_10960_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_113_s, &tv_r_Filter_9_113_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10388_input: " << tbl_SerializeFromObject_TD_10388_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_932_s, &tv_r_Project_8_932_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9551_output: " << tbl_Filter_TD_9551_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_107_s, &tv_r_JOIN_LEFTSEMI_8_107_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9101_output: " << tbl_Filter_TD_9101_output.getNumRow() << " " << "tbl_Project_TD_9549_output: " << tbl_Project_TD_9549_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_132_s, &tv_r_JOIN_LEFTSEMI_7_132_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_8190_output: " << tbl_JOIN_LEFTSEMI_TD_8190_output.getNumRow() << " " << "tbl_Project_TD_8772_output: " << tbl_Project_TD_8772_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_6: " << tvdiff(&tv_r_JOIN_LEFTANTI_6_530_s, &tv_r_JOIN_LEFTANTI_6_530_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8772_output: " << tbl_Project_TD_8772_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7370_output: " << tbl_JOIN_LEFTSEMI_TD_7370_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_390_s, &tv_r_Filter_5_390_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_626_input: " << tbl_SerializeFromObject_TD_626_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_61_s, &tv_r_Project_5_61_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_6567_output: " << tbl_JOIN_LEFTANTI_TD_6567_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_124_s, &tv_r_Project_5_124_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_887_s, &tv_r_Filter_4_887_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5957_input: " << tbl_SerializeFromObject_TD_5957_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_4_s, &tv_r_Project_4_4_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5747_output: " << tbl_Filter_TD_5747_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_294_s, &tv_r_JOIN_INNER_4_294_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5621_output: " << tbl_Project_TD_5621_output.getNumRow() << " " << "tbl_Project_TD_5958_output: " << tbl_Project_TD_5958_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_116_s, &tv_r_Project_3_116_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4611_output: " << tbl_Filter_TD_4611_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_11_s, &tv_r_JOIN_INNER_3_11_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4778_output: " << tbl_JOIN_INNER_TD_4778_output.getNumRow() << " " << "tbl_Project_TD_4701_output: " << tbl_Project_TD_4701_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_315_s, &tv_r_JOIN_INNER_2_315_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3812_output: " << tbl_JOIN_INNER_TD_3812_output.getNumRow() << " " << "tbl_Project_TD_3530_output: " << tbl_Project_TD_3530_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_56_s, &tv_r_Aggregate_1_56_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2336_output: " << tbl_JOIN_INNER_TD_2336_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_876_s, &tv_r_Sort_0_876_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1212_output: " << tbl_Aggregate_TD_1212_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 59.29998 * 1000 << "ms" << std::endl; 
    return 0; 
}
