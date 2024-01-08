// number of overlays (w/o fusion): 3 
// number of overlays (w/ fusion): 3 
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
    Table tbl_Sort_TD_0610_output("tbl_Sort_TD_0610_output", 6100000, 2, "");
    tbl_Sort_TD_0610_output.allocateHost();
    Table tbl_Aggregate_TD_1351_output("tbl_Aggregate_TD_1351_output", 6100000, 2, "");
    tbl_Aggregate_TD_1351_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2444_output("tbl_JOIN_INNER_TD_2444_output", 25255, 1, "");
    tbl_JOIN_INNER_TD_2444_output.allocateHost();
    Table tbl_JOIN_INNER_TD_334_output("tbl_JOIN_INNER_TD_334_output", 377, 2, "");
    tbl_JOIN_INNER_TD_334_output.allocateHost();
    Table tbl_Project_TD_3929_output("tbl_Project_TD_3929_output", 6100000, 1, "");
    tbl_Project_TD_3929_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4280_output("tbl_JOIN_INNER_TD_4280_output", 52212, 3, "");
    tbl_JOIN_INNER_TD_4280_output.allocateHost();
    Table tbl_Project_TD_4410_output("tbl_Project_TD_4410_output", 6100000, 1, "");
    tbl_Project_TD_4410_output.allocateHost();
    Table tbl_Filter_TD_4760_output("tbl_Filter_TD_4760_output", 6100000, 1, "");
    tbl_Filter_TD_4760_output.allocateHost();
    Table tbl_Project_TD_5923_output("tbl_Project_TD_5923_output", 6100000, 3, "");
    tbl_Project_TD_5923_output.allocateHost();
    Table tbl_Project_TD_5470_output("tbl_Project_TD_5470_output", 6100000, 2, "");
    tbl_Project_TD_5470_output.allocateHost();
    Table tbl_Filter_TD_5581_output("tbl_Filter_TD_5581_output", 6100000, 1, "");
    tbl_Filter_TD_5581_output.allocateHost();
    Table tbl_SerializeFromObject_TD_536_input;
    tbl_SerializeFromObject_TD_536_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_536_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_536_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_536_input.allocateHost();
    tbl_SerializeFromObject_TD_536_input.loadHost();
    Table tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute = Table("supplier", supplier_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.addCol("s_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_7579_input;
    tbl_SerializeFromObject_TD_7579_input = Table("supplier", supplier_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7579_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7579_input.addCol("s_name", TPCH_READ_S_NAME_LEN+1);
    tbl_SerializeFromObject_TD_7579_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_7579_input.allocateHost();
    tbl_SerializeFromObject_TD_7579_input.loadHost();
    Table tbl_JOIN_LEFTANTI_TD_6964_output("tbl_JOIN_LEFTANTI_TD_6964_output", 6100000, 2, "");
    tbl_JOIN_LEFTANTI_TD_6964_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6476_input;
    tbl_SerializeFromObject_TD_6476_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6476_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_6476_input.addCol("o_orderstatus", 4);
    tbl_SerializeFromObject_TD_6476_input.allocateHost();
    tbl_SerializeFromObject_TD_6476_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_77_output("tbl_JOIN_LEFTSEMI_TD_77_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_77_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_810_output("tbl_JOIN_LEFTSEMI_TD_810_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_810_output.allocateHost();
    Table tbl_Project_TD_8792_output("tbl_Project_TD_8792_output", 6100000, 2, "");
    tbl_Project_TD_8792_output.allocateHost();
    Table tbl_Filter_TD_9369_output("tbl_Filter_TD_9369_output", 6100000, 2, "");
    tbl_Filter_TD_9369_output.allocateHost();
    Table tbl_Project_TD_9203_output("tbl_Project_TD_9203_output", 6100000, 2, "");
    tbl_Project_TD_9203_output.allocateHost();
    Table tbl_Filter_TD_9156_output("tbl_Filter_TD_9156_output", 6100000, 2, "");
    tbl_Filter_TD_9156_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10622_input;
    tbl_SerializeFromObject_TD_10622_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_10622_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10622_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10622_input.addCol("l_receiptdate", 4);
    tbl_SerializeFromObject_TD_10622_input.addCol("l_commitdate", 4);
    tbl_SerializeFromObject_TD_10622_input.allocateHost();
    tbl_SerializeFromObject_TD_10622_input.loadHost();
    Table tbl_SerializeFromObject_TD_10495_input;
    tbl_SerializeFromObject_TD_10495_input = Table("lineitem", lineitem_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10495_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10495_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10495_input.allocateHost();
    tbl_SerializeFromObject_TD_10495_input.loadHost();
    Table tbl_SerializeFromObject_TD_10181_input;
    tbl_SerializeFromObject_TD_10181_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_10181_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10181_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10181_input.addCol("l_receiptdate", 4);
    tbl_SerializeFromObject_TD_10181_input.addCol("l_commitdate", 4);
    tbl_SerializeFromObject_TD_10181_input.allocateHost();
    tbl_SerializeFromObject_TD_10181_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2444_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_334_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3929_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4280_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4410_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5923_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5470_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2444_cmds;
    cfg_JOIN_INNER_TD_2444_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2444_gqe_join (cfg_JOIN_INNER_TD_2444_cmds.cmd);
    cfg_JOIN_INNER_TD_2444_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_334_cmds;
    cfg_JOIN_INNER_TD_334_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_334_gqe_join (cfg_JOIN_INNER_TD_334_cmds.cmd);
    cfg_JOIN_INNER_TD_334_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4280_cmds;
    cfg_JOIN_INNER_TD_4280_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4280_gqe_join (cfg_JOIN_INNER_TD_4280_cmds.cmd);
    cfg_JOIN_INNER_TD_4280_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2444;
    krnl_JOIN_INNER_TD_2444 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2444.setup(tbl_Project_TD_3929_output, tbl_JOIN_INNER_TD_334_output, tbl_JOIN_INNER_TD_2444_output, cfg_JOIN_INNER_TD_2444_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_334;
    krnl_JOIN_INNER_TD_334 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_334.setup(tbl_JOIN_INNER_TD_4280_output, tbl_Project_TD_4410_output, tbl_JOIN_INNER_TD_334_output, cfg_JOIN_INNER_TD_334_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4280;
    krnl_JOIN_INNER_TD_4280 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4280.setup(tbl_Project_TD_5923_output, tbl_Project_TD_5470_output, tbl_JOIN_INNER_TD_4280_output, cfg_JOIN_INNER_TD_4280_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2444;
    trans_JOIN_INNER_TD_2444.setq(q_h);
    trans_JOIN_INNER_TD_2444.add(&(cfg_JOIN_INNER_TD_2444_cmds));
    transEngine trans_JOIN_INNER_TD_2444_out;
    trans_JOIN_INNER_TD_2444_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_334;
    trans_JOIN_INNER_TD_334.setq(q_h);
    trans_JOIN_INNER_TD_334.add(&(cfg_JOIN_INNER_TD_334_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4280;
    trans_JOIN_INNER_TD_4280.setq(q_h);
    trans_JOIN_INNER_TD_4280.add(&(cfg_JOIN_INNER_TD_4280_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2444;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2444;
    std::vector<cl::Event> events_JOIN_INNER_TD_2444;
    events_h2d_wr_JOIN_INNER_TD_2444.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2444.resize(1);
    events_JOIN_INNER_TD_2444.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2444;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2444;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_334;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_334;
    std::vector<cl::Event> events_JOIN_INNER_TD_334;
    events_h2d_wr_JOIN_INNER_TD_334.resize(1);
    events_d2h_rd_JOIN_INNER_TD_334.resize(1);
    events_JOIN_INNER_TD_334.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_334;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_334;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4280;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4280;
    std::vector<cl::Event> events_JOIN_INNER_TD_4280;
    events_h2d_wr_JOIN_INNER_TD_4280.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4280.resize(1);
    events_JOIN_INNER_TD_4280.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4280;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4280;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_947_s, tv_r_Filter_9_947_e;
    gettimeofday(&tv_r_Filter_9_947_s, 0);
    SW_Filter_TD_9156(tbl_SerializeFromObject_TD_10181_input, tbl_Filter_TD_9156_output);
    gettimeofday(&tv_r_Filter_9_947_e, 0);

    struct timeval tv_r_Project_9_738_s, tv_r_Project_9_738_e;
    gettimeofday(&tv_r_Project_9_738_s, 0);
    SW_Project_TD_9203(tbl_SerializeFromObject_TD_10495_input, tbl_Project_TD_9203_output);
    gettimeofday(&tv_r_Project_9_738_e, 0);

    struct timeval tv_r_Filter_9_865_s, tv_r_Filter_9_865_e;
    gettimeofday(&tv_r_Filter_9_865_s, 0);
    SW_Filter_TD_9369(tbl_SerializeFromObject_TD_10622_input, tbl_Filter_TD_9369_output);
    gettimeofday(&tv_r_Filter_9_865_e, 0);

    struct timeval tv_r_Project_8_527_s, tv_r_Project_8_527_e;
    gettimeofday(&tv_r_Project_8_527_s, 0);
    SW_Project_TD_8792(tbl_Filter_TD_9156_output, tbl_Project_TD_8792_output);
    gettimeofday(&tv_r_Project_8_527_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_355_s, tv_r_JOIN_LEFTSEMI_8_355_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_355_s, 0);
    SW_JOIN_LEFTSEMI_TD_810(tbl_Filter_TD_9369_output, tbl_Project_TD_9203_output, tbl_JOIN_LEFTSEMI_TD_810_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_355_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_81_s, tv_r_JOIN_LEFTSEMI_7_81_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_81_s, 0);
    SW_JOIN_LEFTSEMI_TD_77(tbl_JOIN_LEFTSEMI_TD_810_output, tbl_Project_TD_8792_output, tbl_JOIN_LEFTSEMI_TD_77_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_81_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_6_795_s, tv_r_JOIN_LEFTANTI_6_795_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_6_795_s, 0);
    SW_JOIN_LEFTANTI_TD_6964(tbl_Project_TD_8792_output, tbl_JOIN_LEFTSEMI_TD_77_output, tbl_JOIN_LEFTANTI_TD_6964_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_6_795_e, 0);

    struct timeval tv_r_Filter_5_901_s, tv_r_Filter_5_901_e;
    gettimeofday(&tv_r_Filter_5_901_s, 0);
    SW_Filter_TD_5581(tbl_SerializeFromObject_TD_6476_input, tbl_Filter_TD_5581_output);
    gettimeofday(&tv_r_Filter_5_901_e, 0);

    struct timeval tv_r_Project_5_477_s, tv_r_Project_5_477_e;
    gettimeofday(&tv_r_Project_5_477_s, 0);
    SW_Project_TD_5470(tbl_JOIN_LEFTANTI_TD_6964_output, tbl_Project_TD_5470_output);
    gettimeofday(&tv_r_Project_5_477_e, 0);

    struct timeval tv_r_Project_5_19_s, tv_r_Project_5_19_e;
    gettimeofday(&tv_r_Project_5_19_s, 0);
    SW_Project_TD_5923(tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute, tbl_Project_TD_5923_output);
    gettimeofday(&tv_r_Project_5_19_e, 0);

    struct timeval tv_r_Filter_4_579_s, tv_r_Filter_4_579_e;
    gettimeofday(&tv_r_Filter_4_579_s, 0);
    SW_Filter_TD_4760(tbl_SerializeFromObject_TD_536_input, tbl_Filter_TD_4760_output);
    gettimeofday(&tv_r_Filter_4_579_e, 0);

    struct timeval tv_r_Project_4_78_s, tv_r_Project_4_78_e;
    gettimeofday(&tv_r_Project_4_78_s, 0);
    SW_Project_TD_4410(tbl_Filter_TD_5581_output, tbl_Project_TD_4410_output);
    gettimeofday(&tv_r_Project_4_78_e, 0);

    struct timeval tv_r_JOIN_INNER_4_14_s, tv_r_JOIN_INNER_4_14_e;
    gettimeofday(&tv_r_JOIN_INNER_4_14_s, 0);
    trans_JOIN_INNER_TD_4280.add(&(tbl_Project_TD_5923_output));
    trans_JOIN_INNER_TD_4280.add(&(tbl_Project_TD_5470_output));
    trans_JOIN_INNER_TD_4280.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4280), &(events_h2d_wr_JOIN_INNER_TD_4280[0]));
    events_grp_JOIN_INNER_TD_4280.push_back(events_h2d_wr_JOIN_INNER_TD_4280[0]);
    krnl_JOIN_INNER_TD_4280.run(0, &(events_grp_JOIN_INNER_TD_4280), &(events_JOIN_INNER_TD_4280[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_14_e, 0);

    struct timeval tv_r_Project_3_18_s, tv_r_Project_3_18_e;
    gettimeofday(&tv_r_Project_3_18_s, 0);
    SW_Project_TD_3929(tbl_Filter_TD_4760_output, tbl_Project_TD_3929_output);
    gettimeofday(&tv_r_Project_3_18_e, 0);

    struct timeval tv_r_JOIN_INNER_3_549_s, tv_r_JOIN_INNER_3_549_e;
    gettimeofday(&tv_r_JOIN_INNER_3_549_s, 0);
    prev_events_grp_JOIN_INNER_TD_334.push_back(events_h2d_wr_JOIN_INNER_TD_4280[0]);
    trans_JOIN_INNER_TD_334.add(&(tbl_Project_TD_4410_output));
    trans_JOIN_INNER_TD_334.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_334), &(events_h2d_wr_JOIN_INNER_TD_334[0]));
    events_grp_JOIN_INNER_TD_334.push_back(events_h2d_wr_JOIN_INNER_TD_334[0]);
    events_grp_JOIN_INNER_TD_334.push_back(events_JOIN_INNER_TD_4280[0]);
    krnl_JOIN_INNER_TD_334.run(0, &(events_grp_JOIN_INNER_TD_334), &(events_JOIN_INNER_TD_334[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_549_e, 0);

    struct timeval tv_r_JOIN_INNER_2_867_s, tv_r_JOIN_INNER_2_867_e;
    gettimeofday(&tv_r_JOIN_INNER_2_867_s, 0);
    prev_events_grp_JOIN_INNER_TD_2444.push_back(events_h2d_wr_JOIN_INNER_TD_334[0]);
    trans_JOIN_INNER_TD_2444.add(&(tbl_Project_TD_3929_output));
    trans_JOIN_INNER_TD_2444.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2444), &(events_h2d_wr_JOIN_INNER_TD_2444[0]));
    events_grp_JOIN_INNER_TD_2444.push_back(events_h2d_wr_JOIN_INNER_TD_2444[0]);
    events_grp_JOIN_INNER_TD_2444.push_back(events_JOIN_INNER_TD_334[0]);
    krnl_JOIN_INNER_TD_2444.run(0, &(events_grp_JOIN_INNER_TD_2444), &(events_JOIN_INNER_TD_2444[0]));
    
    trans_JOIN_INNER_TD_2444_out.add(&(tbl_JOIN_INNER_TD_2444_output));
    trans_JOIN_INNER_TD_2444_out.dev2host(0, &(events_JOIN_INNER_TD_2444), &(events_d2h_rd_JOIN_INNER_TD_2444[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_867_e, 0);

    struct timeval tv_r_Aggregate_1_896_s, tv_r_Aggregate_1_896_e;
    gettimeofday(&tv_r_Aggregate_1_896_s, 0);
    SW_Aggregate_TD_1351(tbl_JOIN_INNER_TD_2444_output, tbl_SerializeFromObject_TD_7579_input, tbl_Aggregate_TD_1351_output);
    gettimeofday(&tv_r_Aggregate_1_896_e, 0);

    struct timeval tv_r_Sort_0_389_s, tv_r_Sort_0_389_e;
    gettimeofday(&tv_r_Sort_0_389_s, 0);
    SW_Sort_TD_0610(tbl_Aggregate_TD_1351_output, tbl_Sort_TD_0610_output);
    gettimeofday(&tv_r_Sort_0_389_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_947_s, &tv_r_Filter_9_947_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10181_input: " << tbl_SerializeFromObject_TD_10181_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_9: " << tvdiff(&tv_r_Project_9_738_s, &tv_r_Project_9_738_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10495_input: " << tbl_SerializeFromObject_TD_10495_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_865_s, &tv_r_Filter_9_865_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10622_input: " << tbl_SerializeFromObject_TD_10622_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_527_s, &tv_r_Project_8_527_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9156_output: " << tbl_Filter_TD_9156_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_355_s, &tv_r_JOIN_LEFTSEMI_8_355_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9369_output: " << tbl_Filter_TD_9369_output.getNumRow() << " " << "tbl_Project_TD_9203_output: " << tbl_Project_TD_9203_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_81_s, &tv_r_JOIN_LEFTSEMI_7_81_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_810_output: " << tbl_JOIN_LEFTSEMI_TD_810_output.getNumRow() << " " << "tbl_Project_TD_8792_output: " << tbl_Project_TD_8792_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_6: " << tvdiff(&tv_r_JOIN_LEFTANTI_6_795_s, &tv_r_JOIN_LEFTANTI_6_795_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8792_output: " << tbl_Project_TD_8792_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_77_output: " << tbl_JOIN_LEFTSEMI_TD_77_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_901_s, &tv_r_Filter_5_901_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6476_input: " << tbl_SerializeFromObject_TD_6476_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_477_s, &tv_r_Project_5_477_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_6964_output: " << tbl_JOIN_LEFTANTI_TD_6964_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_19_s, &tv_r_Project_5_19_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_579_s, &tv_r_Filter_4_579_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_536_input: " << tbl_SerializeFromObject_TD_536_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_78_s, &tv_r_Project_4_78_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5581_output: " << tbl_Filter_TD_5581_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_14_s, &tv_r_JOIN_INNER_4_14_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5923_output: " << tbl_Project_TD_5923_output.getNumRow() << " " << "tbl_Project_TD_5470_output: " << tbl_Project_TD_5470_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_18_s, &tv_r_Project_3_18_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4760_output: " << tbl_Filter_TD_4760_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_549_s, &tv_r_JOIN_INNER_3_549_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4280_output: " << tbl_JOIN_INNER_TD_4280_output.getNumRow() << " " << "tbl_Project_TD_4410_output: " << tbl_Project_TD_4410_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_867_s, &tv_r_JOIN_INNER_2_867_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_334_output: " << tbl_JOIN_INNER_TD_334_output.getNumRow() << " " << "tbl_Project_TD_3929_output: " << tbl_Project_TD_3929_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_896_s, &tv_r_Aggregate_1_896_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2444_output: " << tbl_JOIN_INNER_TD_2444_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_389_s, &tv_r_Sort_0_389_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1351_output: " << tbl_Aggregate_TD_1351_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 25.251385 * 1000 << "ms" << std::endl; 
    return 0; 
}
