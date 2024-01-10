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

#include "cfgFunc_q9.hpp" 
#include "q9.hpp" 

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
    std::cout << "NOTE:running query #9\n."; 
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
    Table tbl_Sort_TD_0917_output("tbl_Sort_TD_0917_output", 6100000, 3, "");
    tbl_Sort_TD_0917_output.allocateHost();
    Table tbl_Aggregate_TD_1258_output("tbl_Aggregate_TD_1258_output", 6100000, 3, "");
    tbl_Aggregate_TD_1258_output.allocateHost();
    Table tbl_Project_TD_2627_output("tbl_Project_TD_2627_output", 6100000, 3, "");
    tbl_Project_TD_2627_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3689_output("tbl_JOIN_INNER_TD_3689_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_3689_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4253_output("tbl_JOIN_INNER_TD_4253_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_4253_output.allocateHost();
    Table tbl_Project_TD_4730_output("tbl_Project_TD_4730_output", 6100000, 2, "");
    tbl_Project_TD_4730_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5681_output("tbl_JOIN_INNER_TD_5681_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_5681_output.allocateHost();
    Table tbl_Project_TD_5632_output("tbl_Project_TD_5632_output", 6100000, 2, "");
    tbl_Project_TD_5632_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6186_input;
    tbl_SerializeFromObject_TD_6186_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6186_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6186_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6186_input.allocateHost();
    tbl_SerializeFromObject_TD_6186_input.loadHost();
    Table tbl_JOIN_INNER_TD_6868_output("tbl_JOIN_INNER_TD_6868_output", 319287, 7, "");
    tbl_JOIN_INNER_TD_6868_output.allocateHost();
    Table tbl_Project_TD_6275_output("tbl_Project_TD_6275_output", 6100000, 3, "");
    tbl_Project_TD_6275_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7359_input;
    tbl_SerializeFromObject_TD_7359_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7359_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_7359_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_7359_input.allocateHost();
    tbl_SerializeFromObject_TD_7359_input.loadHost();
    Table tbl_JOIN_INNER_TD_7627_output("tbl_JOIN_INNER_TD_7627_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_7627_output.allocateHost();
    Table tbl_Project_TD_7253_output("tbl_Project_TD_7253_output", 6100000, 2, "");
    tbl_Project_TD_7253_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8934_input;
    tbl_SerializeFromObject_TD_8934_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8934_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8934_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8934_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8934_input.allocateHost();
    tbl_SerializeFromObject_TD_8934_input.loadHost();
    Table tbl_Project_TD_8413_output("tbl_Project_TD_8413_output", 6100000, 1, "");
    tbl_Project_TD_8413_output.allocateHost();
    Table tbl_Project_TD_8156_output("tbl_Project_TD_8156_output", 6100000, 6, "");
    tbl_Project_TD_8156_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9677_input;
    tbl_SerializeFromObject_TD_9677_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9677_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_9677_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_9677_input.allocateHost();
    tbl_SerializeFromObject_TD_9677_input.loadHost();
    Table tbl_Filter_TD_9305_output("tbl_Filter_TD_9305_output", 6100000, 1, "");
    tbl_Filter_TD_9305_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10487_input;
    tbl_SerializeFromObject_TD_10487_input = Table("lineitem", lineitem_n, 6, in_dir);
    tbl_SerializeFromObject_TD_10487_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10487_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_10487_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10487_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_10487_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_10487_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_10487_input.allocateHost();
    tbl_SerializeFromObject_TD_10487_input.loadHost();
    Table tbl_SerializeFromObject_TD_10261_input;
    tbl_SerializeFromObject_TD_10261_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10261_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_10261_input.addCol("p_name", TPCH_READ_P_NAME_LEN+1);
    tbl_SerializeFromObject_TD_10261_input.allocateHost();
    tbl_SerializeFromObject_TD_10261_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4253_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5681_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5632_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6868_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6275_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7627_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7253_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8413_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8156_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4253_cmds;
    cfg_JOIN_INNER_TD_4253_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4253_gqe_join (cfg_JOIN_INNER_TD_4253_cmds.cmd);
    cfg_JOIN_INNER_TD_4253_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5681_cmds;
    cfg_JOIN_INNER_TD_5681_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5681_gqe_join (cfg_JOIN_INNER_TD_5681_cmds.cmd);
    cfg_JOIN_INNER_TD_5681_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6868_cmds;
    cfg_JOIN_INNER_TD_6868_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6868_gqe_join (cfg_JOIN_INNER_TD_6868_cmds.cmd);
    cfg_JOIN_INNER_TD_6868_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7627_cmds;
    cfg_JOIN_INNER_TD_7627_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7627_gqe_join (cfg_JOIN_INNER_TD_7627_cmds.cmd);
    cfg_JOIN_INNER_TD_7627_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4253;
    krnl_JOIN_INNER_TD_4253 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4253.setup(tbl_JOIN_INNER_TD_5681_output, tbl_Project_TD_5632_output, tbl_JOIN_INNER_TD_4253_output, cfg_JOIN_INNER_TD_4253_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5681;
    krnl_JOIN_INNER_TD_5681 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5681.setup(tbl_JOIN_INNER_TD_6868_output, tbl_Project_TD_6275_output, tbl_JOIN_INNER_TD_5681_output, cfg_JOIN_INNER_TD_5681_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6868;
    krnl_JOIN_INNER_TD_6868 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6868.setup(tbl_Project_TD_7253_output, tbl_JOIN_INNER_TD_7627_output, tbl_JOIN_INNER_TD_6868_output, cfg_JOIN_INNER_TD_6868_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7627;
    krnl_JOIN_INNER_TD_7627 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7627.setup(tbl_Project_TD_8413_output, tbl_Project_TD_8156_output, tbl_JOIN_INNER_TD_7627_output, cfg_JOIN_INNER_TD_7627_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4253;
    trans_JOIN_INNER_TD_4253.setq(q_h);
    trans_JOIN_INNER_TD_4253.add(&(cfg_JOIN_INNER_TD_4253_cmds));
    transEngine trans_JOIN_INNER_TD_4253_out;
    trans_JOIN_INNER_TD_4253_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5681;
    trans_JOIN_INNER_TD_5681.setq(q_h);
    trans_JOIN_INNER_TD_5681.add(&(cfg_JOIN_INNER_TD_5681_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6868;
    trans_JOIN_INNER_TD_6868.setq(q_h);
    trans_JOIN_INNER_TD_6868.add(&(cfg_JOIN_INNER_TD_6868_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7627;
    trans_JOIN_INNER_TD_7627.setq(q_h);
    trans_JOIN_INNER_TD_7627.add(&(cfg_JOIN_INNER_TD_7627_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4253;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4253;
    std::vector<cl::Event> events_JOIN_INNER_TD_4253;
    events_h2d_wr_JOIN_INNER_TD_4253.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4253.resize(1);
    events_JOIN_INNER_TD_4253.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4253;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4253;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5681;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5681;
    std::vector<cl::Event> events_JOIN_INNER_TD_5681;
    events_h2d_wr_JOIN_INNER_TD_5681.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5681.resize(1);
    events_JOIN_INNER_TD_5681.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5681;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5681;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6868;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6868;
    std::vector<cl::Event> events_JOIN_INNER_TD_6868;
    events_h2d_wr_JOIN_INNER_TD_6868.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6868.resize(1);
    events_JOIN_INNER_TD_6868.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6868;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6868;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7627;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7627;
    std::vector<cl::Event> events_JOIN_INNER_TD_7627;
    events_h2d_wr_JOIN_INNER_TD_7627.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7627.resize(1);
    events_JOIN_INNER_TD_7627.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7627;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7627;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_764_s, tv_r_Filter_9_764_e;
    gettimeofday(&tv_r_Filter_9_764_s, 0);
    SW_Filter_TD_9305(tbl_SerializeFromObject_TD_10261_input, tbl_Filter_TD_9305_output);
    gettimeofday(&tv_r_Filter_9_764_e, 0);

    struct timeval tv_r_Project_8_398_s, tv_r_Project_8_398_e;
    gettimeofday(&tv_r_Project_8_398_s, 0);
    SW_Project_TD_8156(tbl_SerializeFromObject_TD_10487_input, tbl_Project_TD_8156_output);
    gettimeofday(&tv_r_Project_8_398_e, 0);

    struct timeval tv_r_Project_8_799_s, tv_r_Project_8_799_e;
    gettimeofday(&tv_r_Project_8_799_s, 0);
    SW_Project_TD_8413(tbl_Filter_TD_9305_output, tbl_Project_TD_8413_output);
    gettimeofday(&tv_r_Project_8_799_e, 0);

    struct timeval tv_r_Project_7_359_s, tv_r_Project_7_359_e;
    gettimeofday(&tv_r_Project_7_359_s, 0);
    SW_Project_TD_7253(tbl_SerializeFromObject_TD_9677_input, tbl_Project_TD_7253_output);
    gettimeofday(&tv_r_Project_7_359_e, 0);

    struct timeval tv_r_JOIN_INNER_7_252_s, tv_r_JOIN_INNER_7_252_e;
    gettimeofday(&tv_r_JOIN_INNER_7_252_s, 0);
    trans_JOIN_INNER_TD_7627.add(&(tbl_Project_TD_8413_output));
    trans_JOIN_INNER_TD_7627.add(&(tbl_Project_TD_8156_output));
    trans_JOIN_INNER_TD_7627.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7627), &(events_h2d_wr_JOIN_INNER_TD_7627[0]));
    events_grp_JOIN_INNER_TD_7627.push_back(events_h2d_wr_JOIN_INNER_TD_7627[0]);
    krnl_JOIN_INNER_TD_7627.run(0, &(events_grp_JOIN_INNER_TD_7627), &(events_JOIN_INNER_TD_7627[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_252_e, 0);

    struct timeval tv_r_Project_6_450_s, tv_r_Project_6_450_e;
    gettimeofday(&tv_r_Project_6_450_s, 0);
    SW_Project_TD_6275(tbl_SerializeFromObject_TD_8934_input, tbl_Project_TD_6275_output);
    gettimeofday(&tv_r_Project_6_450_e, 0);

    struct timeval tv_r_JOIN_INNER_6_464_s, tv_r_JOIN_INNER_6_464_e;
    gettimeofday(&tv_r_JOIN_INNER_6_464_s, 0);
    prev_events_grp_JOIN_INNER_TD_6868.push_back(events_h2d_wr_JOIN_INNER_TD_7627[0]);
    trans_JOIN_INNER_TD_6868.add(&(tbl_Project_TD_7253_output));
    trans_JOIN_INNER_TD_6868.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6868), &(events_h2d_wr_JOIN_INNER_TD_6868[0]));
    events_grp_JOIN_INNER_TD_6868.push_back(events_h2d_wr_JOIN_INNER_TD_6868[0]);
    events_grp_JOIN_INNER_TD_6868.push_back(events_JOIN_INNER_TD_7627[0]);
    krnl_JOIN_INNER_TD_6868.run(0, &(events_grp_JOIN_INNER_TD_6868), &(events_JOIN_INNER_TD_6868[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_464_e, 0);

    struct timeval tv_r_Project_5_281_s, tv_r_Project_5_281_e;
    gettimeofday(&tv_r_Project_5_281_s, 0);
    SW_Project_TD_5632(tbl_SerializeFromObject_TD_7359_input, tbl_Project_TD_5632_output);
    gettimeofday(&tv_r_Project_5_281_e, 0);

    struct timeval tv_r_JOIN_INNER_5_987_s, tv_r_JOIN_INNER_5_987_e;
    gettimeofday(&tv_r_JOIN_INNER_5_987_s, 0);
    prev_events_grp_JOIN_INNER_TD_5681.push_back(events_h2d_wr_JOIN_INNER_TD_6868[0]);
    trans_JOIN_INNER_TD_5681.add(&(tbl_Project_TD_6275_output));
    trans_JOIN_INNER_TD_5681.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5681), &(events_h2d_wr_JOIN_INNER_TD_5681[0]));
    events_grp_JOIN_INNER_TD_5681.push_back(events_h2d_wr_JOIN_INNER_TD_5681[0]);
    events_grp_JOIN_INNER_TD_5681.push_back(events_JOIN_INNER_TD_6868[0]);
    krnl_JOIN_INNER_TD_5681.run(0, &(events_grp_JOIN_INNER_TD_5681), &(events_JOIN_INNER_TD_5681[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_987_e, 0);

    struct timeval tv_r_Project_4_825_s, tv_r_Project_4_825_e;
    gettimeofday(&tv_r_Project_4_825_s, 0);
    SW_Project_TD_4730(tbl_SerializeFromObject_TD_6186_input, tbl_Project_TD_4730_output);
    gettimeofday(&tv_r_Project_4_825_e, 0);

    struct timeval tv_r_JOIN_INNER_4_868_s, tv_r_JOIN_INNER_4_868_e;
    gettimeofday(&tv_r_JOIN_INNER_4_868_s, 0);
    prev_events_grp_JOIN_INNER_TD_4253.push_back(events_h2d_wr_JOIN_INNER_TD_5681[0]);
    trans_JOIN_INNER_TD_4253.add(&(tbl_Project_TD_5632_output));
    trans_JOIN_INNER_TD_4253.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4253), &(events_h2d_wr_JOIN_INNER_TD_4253[0]));
    events_grp_JOIN_INNER_TD_4253.push_back(events_h2d_wr_JOIN_INNER_TD_4253[0]);
    events_grp_JOIN_INNER_TD_4253.push_back(events_JOIN_INNER_TD_5681[0]);
    krnl_JOIN_INNER_TD_4253.run(0, &(events_grp_JOIN_INNER_TD_4253), &(events_JOIN_INNER_TD_4253[0]));
    
    trans_JOIN_INNER_TD_4253_out.add(&(tbl_JOIN_INNER_TD_4253_output));
    trans_JOIN_INNER_TD_4253_out.dev2host(0, &(events_JOIN_INNER_TD_4253), &(events_d2h_rd_JOIN_INNER_TD_4253[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_868_e, 0);

    struct timeval tv_r_JOIN_INNER_3_53_s, tv_r_JOIN_INNER_3_53_e;
    gettimeofday(&tv_r_JOIN_INNER_3_53_s, 0);
    SW_JOIN_INNER_TD_3689(tbl_JOIN_INNER_TD_4253_output, tbl_Project_TD_4730_output, tbl_JOIN_INNER_TD_3689_output);
    gettimeofday(&tv_r_JOIN_INNER_3_53_e, 0);

    struct timeval tv_r_Project_2_662_s, tv_r_Project_2_662_e;
    gettimeofday(&tv_r_Project_2_662_s, 0);
    SW_Project_TD_2627(tbl_JOIN_INNER_TD_3689_output, tbl_Project_TD_2627_output);
    gettimeofday(&tv_r_Project_2_662_e, 0);

    struct timeval tv_r_Aggregate_1_381_s, tv_r_Aggregate_1_381_e;
    gettimeofday(&tv_r_Aggregate_1_381_s, 0);
    SW_Aggregate_TD_1258(tbl_Project_TD_2627_output, tbl_Aggregate_TD_1258_output);
    gettimeofday(&tv_r_Aggregate_1_381_e, 0);

    struct timeval tv_r_Sort_0_171_s, tv_r_Sort_0_171_e;
    gettimeofday(&tv_r_Sort_0_171_s, 0);
    SW_Sort_TD_0917(tbl_Aggregate_TD_1258_output, tbl_Sort_TD_0917_output);
    gettimeofday(&tv_r_Sort_0_171_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_764_s, &tv_r_Filter_9_764_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10261_input: " << tbl_SerializeFromObject_TD_10261_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_398_s, &tv_r_Project_8_398_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10487_input: " << tbl_SerializeFromObject_TD_10487_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_799_s, &tv_r_Project_8_799_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9305_output: " << tbl_Filter_TD_9305_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_359_s, &tv_r_Project_7_359_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9677_input: " << tbl_SerializeFromObject_TD_9677_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_252_s, &tv_r_JOIN_INNER_7_252_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8413_output: " << tbl_Project_TD_8413_output.getNumRow() << " " << "tbl_Project_TD_8156_output: " << tbl_Project_TD_8156_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_450_s, &tv_r_Project_6_450_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8934_input: " << tbl_SerializeFromObject_TD_8934_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_464_s, &tv_r_JOIN_INNER_6_464_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7627_output: " << tbl_JOIN_INNER_TD_7627_output.getNumRow() << " " << "tbl_Project_TD_7253_output: " << tbl_Project_TD_7253_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_281_s, &tv_r_Project_5_281_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7359_input: " << tbl_SerializeFromObject_TD_7359_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_987_s, &tv_r_JOIN_INNER_5_987_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6868_output: " << tbl_JOIN_INNER_TD_6868_output.getNumRow() << " " << "tbl_Project_TD_6275_output: " << tbl_Project_TD_6275_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_825_s, &tv_r_Project_4_825_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6186_input: " << tbl_SerializeFromObject_TD_6186_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_868_s, &tv_r_JOIN_INNER_4_868_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5681_output: " << tbl_JOIN_INNER_TD_5681_output.getNumRow() << " " << "tbl_Project_TD_5632_output: " << tbl_Project_TD_5632_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_53_s, &tv_r_JOIN_INNER_3_53_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4253_output: " << tbl_JOIN_INNER_TD_4253_output.getNumRow() << " " << "tbl_Project_TD_4730_output: " << tbl_Project_TD_4730_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_662_s, &tv_r_Project_2_662_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3689_output: " << tbl_JOIN_INNER_TD_3689_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_381_s, &tv_r_Aggregate_1_381_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2627_output: " << tbl_Project_TD_2627_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_171_s, &tv_r_Sort_0_171_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1258_output: " << tbl_Aggregate_TD_1258_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 14.832088 * 1000 << "ms" << std::endl; 
    return 0; 
}
