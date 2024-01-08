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
    Table tbl_Sort_TD_0655_output("tbl_Sort_TD_0655_output", 6100000, 3, "");
    tbl_Sort_TD_0655_output.allocateHost();
    Table tbl_Aggregate_TD_1370_output("tbl_Aggregate_TD_1370_output", 6100000, 3, "");
    tbl_Aggregate_TD_1370_output.allocateHost();
    Table tbl_Project_TD_2742_output("tbl_Project_TD_2742_output", 6100000, 3, "");
    tbl_Project_TD_2742_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3698_output("tbl_JOIN_INNER_TD_3698_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_3698_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4347_output("tbl_JOIN_INNER_TD_4347_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_4347_output.allocateHost();
    Table tbl_Project_TD_4449_output("tbl_Project_TD_4449_output", 6100000, 2, "");
    tbl_Project_TD_4449_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5711_output("tbl_JOIN_INNER_TD_5711_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_5711_output.allocateHost();
    Table tbl_Project_TD_5613_output("tbl_Project_TD_5613_output", 6100000, 2, "");
    tbl_Project_TD_5613_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6964_input;
    tbl_SerializeFromObject_TD_6964_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6964_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6964_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6964_input.allocateHost();
    tbl_SerializeFromObject_TD_6964_input.loadHost();
    Table tbl_JOIN_INNER_TD_6841_output("tbl_JOIN_INNER_TD_6841_output", 319287, 7, "");
    tbl_JOIN_INNER_TD_6841_output.allocateHost();
    Table tbl_Project_TD_6622_output("tbl_Project_TD_6622_output", 6100000, 3, "");
    tbl_Project_TD_6622_output.allocateHost();
    Table tbl_SerializeFromObject_TD_714_input;
    tbl_SerializeFromObject_TD_714_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_714_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_714_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_714_input.allocateHost();
    tbl_SerializeFromObject_TD_714_input.loadHost();
    Table tbl_JOIN_INNER_TD_7479_output("tbl_JOIN_INNER_TD_7479_output", 319287, 6, "");
    tbl_JOIN_INNER_TD_7479_output.allocateHost();
    Table tbl_Project_TD_77_output("tbl_Project_TD_77_output", 6100000, 2, "");
    tbl_Project_TD_77_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8752_input;
    tbl_SerializeFromObject_TD_8752_input = Table("partsupp", partsupp_n, 3, in_dir);
    tbl_SerializeFromObject_TD_8752_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_8752_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_8752_input.addCol("ps_supplycost", 4);
    tbl_SerializeFromObject_TD_8752_input.allocateHost();
    tbl_SerializeFromObject_TD_8752_input.loadHost();
    Table tbl_Project_TD_8184_output("tbl_Project_TD_8184_output", 6100000, 1, "");
    tbl_Project_TD_8184_output.allocateHost();
    Table tbl_Project_TD_8312_output("tbl_Project_TD_8312_output", 6100000, 6, "");
    tbl_Project_TD_8312_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9563_input;
    tbl_SerializeFromObject_TD_9563_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9563_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_9563_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_9563_input.allocateHost();
    tbl_SerializeFromObject_TD_9563_input.loadHost();
    Table tbl_Filter_TD_9870_output("tbl_Filter_TD_9870_output", 6100000, 1, "");
    tbl_Filter_TD_9870_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1020_input;
    tbl_SerializeFromObject_TD_1020_input = Table("lineitem", lineitem_n, 6, in_dir);
    tbl_SerializeFromObject_TD_1020_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_1020_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_1020_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_1020_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_1020_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_1020_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_1020_input.allocateHost();
    tbl_SerializeFromObject_TD_1020_input.loadHost();
    Table tbl_SerializeFromObject_TD_10937_input;
    tbl_SerializeFromObject_TD_10937_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10937_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_10937_input.addCol("p_name", TPCH_READ_P_NAME_LEN+1);
    tbl_SerializeFromObject_TD_10937_input.allocateHost();
    tbl_SerializeFromObject_TD_10937_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4347_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5711_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5613_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6841_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6622_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7479_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_77_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8184_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8312_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4347_cmds;
    cfg_JOIN_INNER_TD_4347_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4347_gqe_join (cfg_JOIN_INNER_TD_4347_cmds.cmd);
    cfg_JOIN_INNER_TD_4347_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5711_cmds;
    cfg_JOIN_INNER_TD_5711_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5711_gqe_join (cfg_JOIN_INNER_TD_5711_cmds.cmd);
    cfg_JOIN_INNER_TD_5711_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6841_cmds;
    cfg_JOIN_INNER_TD_6841_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6841_gqe_join (cfg_JOIN_INNER_TD_6841_cmds.cmd);
    cfg_JOIN_INNER_TD_6841_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7479_cmds;
    cfg_JOIN_INNER_TD_7479_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7479_gqe_join (cfg_JOIN_INNER_TD_7479_cmds.cmd);
    cfg_JOIN_INNER_TD_7479_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4347;
    krnl_JOIN_INNER_TD_4347 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4347.setup(tbl_JOIN_INNER_TD_5711_output, tbl_Project_TD_5613_output, tbl_JOIN_INNER_TD_4347_output, cfg_JOIN_INNER_TD_4347_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5711;
    krnl_JOIN_INNER_TD_5711 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5711.setup(tbl_JOIN_INNER_TD_6841_output, tbl_Project_TD_6622_output, tbl_JOIN_INNER_TD_5711_output, cfg_JOIN_INNER_TD_5711_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6841;
    krnl_JOIN_INNER_TD_6841 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6841.setup(tbl_Project_TD_77_output, tbl_JOIN_INNER_TD_7479_output, tbl_JOIN_INNER_TD_6841_output, cfg_JOIN_INNER_TD_6841_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7479;
    krnl_JOIN_INNER_TD_7479 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7479.setup(tbl_Project_TD_8184_output, tbl_Project_TD_8312_output, tbl_JOIN_INNER_TD_7479_output, cfg_JOIN_INNER_TD_7479_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4347;
    trans_JOIN_INNER_TD_4347.setq(q_h);
    trans_JOIN_INNER_TD_4347.add(&(cfg_JOIN_INNER_TD_4347_cmds));
    transEngine trans_JOIN_INNER_TD_4347_out;
    trans_JOIN_INNER_TD_4347_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5711;
    trans_JOIN_INNER_TD_5711.setq(q_h);
    trans_JOIN_INNER_TD_5711.add(&(cfg_JOIN_INNER_TD_5711_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6841;
    trans_JOIN_INNER_TD_6841.setq(q_h);
    trans_JOIN_INNER_TD_6841.add(&(cfg_JOIN_INNER_TD_6841_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7479;
    trans_JOIN_INNER_TD_7479.setq(q_h);
    trans_JOIN_INNER_TD_7479.add(&(cfg_JOIN_INNER_TD_7479_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4347;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4347;
    std::vector<cl::Event> events_JOIN_INNER_TD_4347;
    events_h2d_wr_JOIN_INNER_TD_4347.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4347.resize(1);
    events_JOIN_INNER_TD_4347.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4347;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4347;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5711;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5711;
    std::vector<cl::Event> events_JOIN_INNER_TD_5711;
    events_h2d_wr_JOIN_INNER_TD_5711.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5711.resize(1);
    events_JOIN_INNER_TD_5711.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5711;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5711;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6841;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6841;
    std::vector<cl::Event> events_JOIN_INNER_TD_6841;
    events_h2d_wr_JOIN_INNER_TD_6841.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6841.resize(1);
    events_JOIN_INNER_TD_6841.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6841;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6841;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7479;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7479;
    std::vector<cl::Event> events_JOIN_INNER_TD_7479;
    events_h2d_wr_JOIN_INNER_TD_7479.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7479.resize(1);
    events_JOIN_INNER_TD_7479.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7479;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7479;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_314_s, tv_r_Filter_9_314_e;
    gettimeofday(&tv_r_Filter_9_314_s, 0);
    SW_Filter_TD_9870(tbl_SerializeFromObject_TD_10937_input, tbl_Filter_TD_9870_output);
    gettimeofday(&tv_r_Filter_9_314_e, 0);

    struct timeval tv_r_Project_8_672_s, tv_r_Project_8_672_e;
    gettimeofday(&tv_r_Project_8_672_s, 0);
    SW_Project_TD_8312(tbl_SerializeFromObject_TD_1020_input, tbl_Project_TD_8312_output);
    gettimeofday(&tv_r_Project_8_672_e, 0);

    struct timeval tv_r_Project_8_212_s, tv_r_Project_8_212_e;
    gettimeofday(&tv_r_Project_8_212_s, 0);
    SW_Project_TD_8184(tbl_Filter_TD_9870_output, tbl_Project_TD_8184_output);
    gettimeofday(&tv_r_Project_8_212_e, 0);

    struct timeval tv_r_Project_7_890_s, tv_r_Project_7_890_e;
    gettimeofday(&tv_r_Project_7_890_s, 0);
    SW_Project_TD_77(tbl_SerializeFromObject_TD_9563_input, tbl_Project_TD_77_output);
    gettimeofday(&tv_r_Project_7_890_e, 0);

    struct timeval tv_r_JOIN_INNER_7_939_s, tv_r_JOIN_INNER_7_939_e;
    gettimeofday(&tv_r_JOIN_INNER_7_939_s, 0);
    trans_JOIN_INNER_TD_7479.add(&(tbl_Project_TD_8184_output));
    trans_JOIN_INNER_TD_7479.add(&(tbl_Project_TD_8312_output));
    trans_JOIN_INNER_TD_7479.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7479), &(events_h2d_wr_JOIN_INNER_TD_7479[0]));
    events_grp_JOIN_INNER_TD_7479.push_back(events_h2d_wr_JOIN_INNER_TD_7479[0]);
    krnl_JOIN_INNER_TD_7479.run(0, &(events_grp_JOIN_INNER_TD_7479), &(events_JOIN_INNER_TD_7479[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_939_e, 0);

    struct timeval tv_r_Project_6_829_s, tv_r_Project_6_829_e;
    gettimeofday(&tv_r_Project_6_829_s, 0);
    SW_Project_TD_6622(tbl_SerializeFromObject_TD_8752_input, tbl_Project_TD_6622_output);
    gettimeofday(&tv_r_Project_6_829_e, 0);

    struct timeval tv_r_JOIN_INNER_6_511_s, tv_r_JOIN_INNER_6_511_e;
    gettimeofday(&tv_r_JOIN_INNER_6_511_s, 0);
    prev_events_grp_JOIN_INNER_TD_6841.push_back(events_h2d_wr_JOIN_INNER_TD_7479[0]);
    trans_JOIN_INNER_TD_6841.add(&(tbl_Project_TD_77_output));
    trans_JOIN_INNER_TD_6841.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6841), &(events_h2d_wr_JOIN_INNER_TD_6841[0]));
    events_grp_JOIN_INNER_TD_6841.push_back(events_h2d_wr_JOIN_INNER_TD_6841[0]);
    events_grp_JOIN_INNER_TD_6841.push_back(events_JOIN_INNER_TD_7479[0]);
    krnl_JOIN_INNER_TD_6841.run(0, &(events_grp_JOIN_INNER_TD_6841), &(events_JOIN_INNER_TD_6841[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_511_e, 0);

    struct timeval tv_r_Project_5_161_s, tv_r_Project_5_161_e;
    gettimeofday(&tv_r_Project_5_161_s, 0);
    SW_Project_TD_5613(tbl_SerializeFromObject_TD_714_input, tbl_Project_TD_5613_output);
    gettimeofday(&tv_r_Project_5_161_e, 0);

    struct timeval tv_r_JOIN_INNER_5_473_s, tv_r_JOIN_INNER_5_473_e;
    gettimeofday(&tv_r_JOIN_INNER_5_473_s, 0);
    prev_events_grp_JOIN_INNER_TD_5711.push_back(events_h2d_wr_JOIN_INNER_TD_6841[0]);
    trans_JOIN_INNER_TD_5711.add(&(tbl_Project_TD_6622_output));
    trans_JOIN_INNER_TD_5711.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5711), &(events_h2d_wr_JOIN_INNER_TD_5711[0]));
    events_grp_JOIN_INNER_TD_5711.push_back(events_h2d_wr_JOIN_INNER_TD_5711[0]);
    events_grp_JOIN_INNER_TD_5711.push_back(events_JOIN_INNER_TD_6841[0]);
    krnl_JOIN_INNER_TD_5711.run(0, &(events_grp_JOIN_INNER_TD_5711), &(events_JOIN_INNER_TD_5711[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_473_e, 0);

    struct timeval tv_r_Project_4_884_s, tv_r_Project_4_884_e;
    gettimeofday(&tv_r_Project_4_884_s, 0);
    SW_Project_TD_4449(tbl_SerializeFromObject_TD_6964_input, tbl_Project_TD_4449_output);
    gettimeofday(&tv_r_Project_4_884_e, 0);

    struct timeval tv_r_JOIN_INNER_4_266_s, tv_r_JOIN_INNER_4_266_e;
    gettimeofday(&tv_r_JOIN_INNER_4_266_s, 0);
    prev_events_grp_JOIN_INNER_TD_4347.push_back(events_h2d_wr_JOIN_INNER_TD_5711[0]);
    trans_JOIN_INNER_TD_4347.add(&(tbl_Project_TD_5613_output));
    trans_JOIN_INNER_TD_4347.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4347), &(events_h2d_wr_JOIN_INNER_TD_4347[0]));
    events_grp_JOIN_INNER_TD_4347.push_back(events_h2d_wr_JOIN_INNER_TD_4347[0]);
    events_grp_JOIN_INNER_TD_4347.push_back(events_JOIN_INNER_TD_5711[0]);
    krnl_JOIN_INNER_TD_4347.run(0, &(events_grp_JOIN_INNER_TD_4347), &(events_JOIN_INNER_TD_4347[0]));
    
    trans_JOIN_INNER_TD_4347_out.add(&(tbl_JOIN_INNER_TD_4347_output));
    trans_JOIN_INNER_TD_4347_out.dev2host(0, &(events_JOIN_INNER_TD_4347), &(events_d2h_rd_JOIN_INNER_TD_4347[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_266_e, 0);

    struct timeval tv_r_JOIN_INNER_3_702_s, tv_r_JOIN_INNER_3_702_e;
    gettimeofday(&tv_r_JOIN_INNER_3_702_s, 0);
    SW_JOIN_INNER_TD_3698(tbl_JOIN_INNER_TD_4347_output, tbl_Project_TD_4449_output, tbl_JOIN_INNER_TD_3698_output);
    gettimeofday(&tv_r_JOIN_INNER_3_702_e, 0);

    struct timeval tv_r_Project_2_22_s, tv_r_Project_2_22_e;
    gettimeofday(&tv_r_Project_2_22_s, 0);
    SW_Project_TD_2742(tbl_JOIN_INNER_TD_3698_output, tbl_Project_TD_2742_output);
    gettimeofday(&tv_r_Project_2_22_e, 0);

    struct timeval tv_r_Aggregate_1_322_s, tv_r_Aggregate_1_322_e;
    gettimeofday(&tv_r_Aggregate_1_322_s, 0);
    SW_Aggregate_TD_1370(tbl_Project_TD_2742_output, tbl_Aggregate_TD_1370_output);
    gettimeofday(&tv_r_Aggregate_1_322_e, 0);

    struct timeval tv_r_Sort_0_212_s, tv_r_Sort_0_212_e;
    gettimeofday(&tv_r_Sort_0_212_s, 0);
    SW_Sort_TD_0655(tbl_Aggregate_TD_1370_output, tbl_Sort_TD_0655_output);
    gettimeofday(&tv_r_Sort_0_212_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_314_s, &tv_r_Filter_9_314_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10937_input: " << tbl_SerializeFromObject_TD_10937_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_672_s, &tv_r_Project_8_672_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1020_input: " << tbl_SerializeFromObject_TD_1020_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_212_s, &tv_r_Project_8_212_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9870_output: " << tbl_Filter_TD_9870_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_890_s, &tv_r_Project_7_890_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9563_input: " << tbl_SerializeFromObject_TD_9563_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_939_s, &tv_r_JOIN_INNER_7_939_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8184_output: " << tbl_Project_TD_8184_output.getNumRow() << " " << "tbl_Project_TD_8312_output: " << tbl_Project_TD_8312_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_829_s, &tv_r_Project_6_829_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8752_input: " << tbl_SerializeFromObject_TD_8752_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_511_s, &tv_r_JOIN_INNER_6_511_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7479_output: " << tbl_JOIN_INNER_TD_7479_output.getNumRow() << " " << "tbl_Project_TD_77_output: " << tbl_Project_TD_77_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_161_s, &tv_r_Project_5_161_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_714_input: " << tbl_SerializeFromObject_TD_714_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_473_s, &tv_r_JOIN_INNER_5_473_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6841_output: " << tbl_JOIN_INNER_TD_6841_output.getNumRow() << " " << "tbl_Project_TD_6622_output: " << tbl_Project_TD_6622_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_884_s, &tv_r_Project_4_884_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6964_input: " << tbl_SerializeFromObject_TD_6964_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_266_s, &tv_r_JOIN_INNER_4_266_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5711_output: " << tbl_JOIN_INNER_TD_5711_output.getNumRow() << " " << "tbl_Project_TD_5613_output: " << tbl_Project_TD_5613_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_702_s, &tv_r_JOIN_INNER_3_702_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4347_output: " << tbl_JOIN_INNER_TD_4347_output.getNumRow() << " " << "tbl_Project_TD_4449_output: " << tbl_Project_TD_4449_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_22_s, &tv_r_Project_2_22_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3698_output: " << tbl_JOIN_INNER_TD_3698_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_322_s, &tv_r_Aggregate_1_322_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2742_output: " << tbl_Project_TD_2742_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_212_s, &tv_r_Sort_0_212_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1370_output: " << tbl_Aggregate_TD_1370_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 17.105753 * 1000 << "ms" << std::endl; 
    return 0; 
}
