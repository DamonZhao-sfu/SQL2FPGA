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
    Table tbl_Sort_TD_0336_output("tbl_Sort_TD_0336_output", 6100000, 4, "");
    tbl_Sort_TD_0336_output.allocateHost();
    Table tbl_Aggregate_TD_1311_output("tbl_Aggregate_TD_1311_output", 6100000, 4, "");
    tbl_Aggregate_TD_1311_output.allocateHost();
    Table tbl_Project_TD_2272_output("tbl_Project_TD_2272_output", 6100000, 4, "");
    tbl_Project_TD_2272_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3278_output("tbl_JOIN_INNER_TD_3278_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_3278_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4169_output("tbl_JOIN_INNER_TD_4169_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_4169_output.allocateHost();
    Table tbl_Project_TD_434_output("tbl_Project_TD_434_output", 6100000, 2, "");
    tbl_Project_TD_434_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5627_output("tbl_JOIN_INNER_TD_5627_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_5627_output.allocateHost();
    Table tbl_Project_TD_5353_output("tbl_Project_TD_5353_output", 6100000, 2, "");
    tbl_Project_TD_5353_output.allocateHost();
    Table tbl_Filter_TD_5957_output("tbl_Filter_TD_5957_output", 6100000, 2, "");
    tbl_Filter_TD_5957_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6582_output("tbl_JOIN_INNER_TD_6582_output", 153500, 5, "");
    tbl_JOIN_INNER_TD_6582_output.allocateHost();
    Table tbl_Project_TD_6660_output("tbl_Project_TD_6660_output", 6100000, 2, "");
    tbl_Project_TD_6660_output.allocateHost();
    Table tbl_Filter_TD_6142_output("tbl_Filter_TD_6142_output", 6100000, 2, "");
    tbl_Filter_TD_6142_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6291_input;
    tbl_SerializeFromObject_TD_6291_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6291_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_6291_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_6291_input.allocateHost();
    tbl_SerializeFromObject_TD_6291_input.loadHost();
    Table tbl_JOIN_INNER_TD_7759_output("tbl_JOIN_INNER_TD_7759_output", 1829000, 5, "");
    tbl_JOIN_INNER_TD_7759_output.allocateHost();
    Table tbl_Project_TD_7581_output("tbl_Project_TD_7581_output", 6100000, 2, "");
    tbl_Project_TD_7581_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8894_input;
    tbl_SerializeFromObject_TD_8894_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_8894_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_8894_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_8894_input.allocateHost();
    tbl_SerializeFromObject_TD_8894_input.loadHost();
    Table tbl_SerializeFromObject_TD_7181_input;
    tbl_SerializeFromObject_TD_7181_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7181_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_7181_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_7181_input.allocateHost();
    tbl_SerializeFromObject_TD_7181_input.loadHost();
    Table tbl_Project_TD_8334_output("tbl_Project_TD_8334_output", 6100000, 2, "");
    tbl_Project_TD_8334_output.allocateHost();
    Table tbl_Project_TD_8486_output("tbl_Project_TD_8486_output", 6100000, 5, "");
    tbl_Project_TD_8486_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9640_input;
    tbl_SerializeFromObject_TD_9640_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9640_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_9640_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_9640_input.allocateHost();
    tbl_SerializeFromObject_TD_9640_input.loadHost();
    Table tbl_SerializeFromObject_TD_10847_input;
    tbl_SerializeFromObject_TD_10847_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_10847_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_10847_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_10847_input.allocateHost();
    tbl_SerializeFromObject_TD_10847_input.loadHost();
    Table tbl_Filter_TD_95_output("tbl_Filter_TD_95_output", 6100000, 5, "");
    tbl_Filter_TD_95_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10336_input;
    tbl_SerializeFromObject_TD_10336_input = Table("lineitem", lineitem_n, 5, in_dir);
    tbl_SerializeFromObject_TD_10336_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_10336_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_10336_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_10336_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_10336_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_10336_input.allocateHost();
    tbl_SerializeFromObject_TD_10336_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4169_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5627_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5353_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6582_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6660_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7759_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7581_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8334_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8486_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4169_cmds;
    cfg_JOIN_INNER_TD_4169_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4169_gqe_join (cfg_JOIN_INNER_TD_4169_cmds.cmd);
    cfg_JOIN_INNER_TD_4169_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5627_cmds;
    cfg_JOIN_INNER_TD_5627_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5627_gqe_join (cfg_JOIN_INNER_TD_5627_cmds.cmd);
    cfg_JOIN_INNER_TD_5627_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6582_cmds;
    cfg_JOIN_INNER_TD_6582_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6582_gqe_join (cfg_JOIN_INNER_TD_6582_cmds.cmd);
    cfg_JOIN_INNER_TD_6582_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7759_cmds;
    cfg_JOIN_INNER_TD_7759_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7759_gqe_join (cfg_JOIN_INNER_TD_7759_cmds.cmd);
    cfg_JOIN_INNER_TD_7759_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4169;
    krnl_JOIN_INNER_TD_4169 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4169.setup(tbl_Project_TD_5353_output, tbl_JOIN_INNER_TD_5627_output, tbl_JOIN_INNER_TD_4169_output, cfg_JOIN_INNER_TD_4169_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5627;
    krnl_JOIN_INNER_TD_5627 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5627.setup(tbl_JOIN_INNER_TD_6582_output, tbl_Project_TD_6660_output, tbl_JOIN_INNER_TD_5627_output, cfg_JOIN_INNER_TD_5627_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6582;
    krnl_JOIN_INNER_TD_6582 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6582.setup(tbl_Project_TD_7581_output, tbl_JOIN_INNER_TD_7759_output, tbl_JOIN_INNER_TD_6582_output, cfg_JOIN_INNER_TD_6582_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7759;
    krnl_JOIN_INNER_TD_7759 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7759.setup(tbl_Project_TD_8334_output, tbl_Project_TD_8486_output, tbl_JOIN_INNER_TD_7759_output, cfg_JOIN_INNER_TD_7759_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4169;
    trans_JOIN_INNER_TD_4169.setq(q_h);
    trans_JOIN_INNER_TD_4169.add(&(cfg_JOIN_INNER_TD_4169_cmds));
    transEngine trans_JOIN_INNER_TD_4169_out;
    trans_JOIN_INNER_TD_4169_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5627;
    trans_JOIN_INNER_TD_5627.setq(q_h);
    trans_JOIN_INNER_TD_5627.add(&(cfg_JOIN_INNER_TD_5627_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6582;
    trans_JOIN_INNER_TD_6582.setq(q_h);
    trans_JOIN_INNER_TD_6582.add(&(cfg_JOIN_INNER_TD_6582_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7759;
    trans_JOIN_INNER_TD_7759.setq(q_h);
    trans_JOIN_INNER_TD_7759.add(&(cfg_JOIN_INNER_TD_7759_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4169;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4169;
    std::vector<cl::Event> events_JOIN_INNER_TD_4169;
    events_h2d_wr_JOIN_INNER_TD_4169.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4169.resize(1);
    events_JOIN_INNER_TD_4169.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4169;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4169;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5627;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5627;
    std::vector<cl::Event> events_JOIN_INNER_TD_5627;
    events_h2d_wr_JOIN_INNER_TD_5627.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5627.resize(1);
    events_JOIN_INNER_TD_5627.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5627;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5627;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6582;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6582;
    std::vector<cl::Event> events_JOIN_INNER_TD_6582;
    events_h2d_wr_JOIN_INNER_TD_6582.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6582.resize(1);
    events_JOIN_INNER_TD_6582.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6582;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6582;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7759;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7759;
    std::vector<cl::Event> events_JOIN_INNER_TD_7759;
    events_h2d_wr_JOIN_INNER_TD_7759.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7759.resize(1);
    events_JOIN_INNER_TD_7759.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7759;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7759;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_679_s, tv_r_Filter_9_679_e;
    gettimeofday(&tv_r_Filter_9_679_s, 0);
    SW_Filter_TD_95(tbl_SerializeFromObject_TD_10336_input, tbl_Filter_TD_95_output);
    gettimeofday(&tv_r_Filter_9_679_e, 0);

    struct timeval tv_r_Project_8_872_s, tv_r_Project_8_872_e;
    gettimeofday(&tv_r_Project_8_872_s, 0);
    SW_Project_TD_8486(tbl_Filter_TD_95_output, tbl_Project_TD_8486_output);
    gettimeofday(&tv_r_Project_8_872_e, 0);

    struct timeval tv_r_Project_8_702_s, tv_r_Project_8_702_e;
    gettimeofday(&tv_r_Project_8_702_s, 0);
    SW_Project_TD_8334(tbl_SerializeFromObject_TD_10847_input, tbl_Project_TD_8334_output);
    gettimeofday(&tv_r_Project_8_702_e, 0);

    struct timeval tv_r_Project_7_446_s, tv_r_Project_7_446_e;
    gettimeofday(&tv_r_Project_7_446_s, 0);
    SW_Project_TD_7581(tbl_SerializeFromObject_TD_9640_input, tbl_Project_TD_7581_output);
    gettimeofday(&tv_r_Project_7_446_e, 0);

    struct timeval tv_r_JOIN_INNER_7_105_s, tv_r_JOIN_INNER_7_105_e;
    gettimeofday(&tv_r_JOIN_INNER_7_105_s, 0);
    trans_JOIN_INNER_TD_7759.add(&(tbl_Project_TD_8334_output));
    trans_JOIN_INNER_TD_7759.add(&(tbl_Project_TD_8486_output));
    trans_JOIN_INNER_TD_7759.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7759), &(events_h2d_wr_JOIN_INNER_TD_7759[0]));
    events_grp_JOIN_INNER_TD_7759.push_back(events_h2d_wr_JOIN_INNER_TD_7759[0]);
    krnl_JOIN_INNER_TD_7759.run(0, &(events_grp_JOIN_INNER_TD_7759), &(events_JOIN_INNER_TD_7759[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_105_e, 0);

    struct timeval tv_r_Filter_6_949_s, tv_r_Filter_6_949_e;
    gettimeofday(&tv_r_Filter_6_949_s, 0);
    SW_Filter_TD_6142(tbl_SerializeFromObject_TD_7181_input, tbl_Filter_TD_6142_output);
    gettimeofday(&tv_r_Filter_6_949_e, 0);

    struct timeval tv_r_Project_6_406_s, tv_r_Project_6_406_e;
    gettimeofday(&tv_r_Project_6_406_s, 0);
    SW_Project_TD_6660(tbl_SerializeFromObject_TD_8894_input, tbl_Project_TD_6660_output);
    gettimeofday(&tv_r_Project_6_406_e, 0);

    struct timeval tv_r_JOIN_INNER_6_407_s, tv_r_JOIN_INNER_6_407_e;
    gettimeofday(&tv_r_JOIN_INNER_6_407_s, 0);
    prev_events_grp_JOIN_INNER_TD_6582.push_back(events_h2d_wr_JOIN_INNER_TD_7759[0]);
    trans_JOIN_INNER_TD_6582.add(&(tbl_Project_TD_7581_output));
    trans_JOIN_INNER_TD_6582.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6582), &(events_h2d_wr_JOIN_INNER_TD_6582[0]));
    events_grp_JOIN_INNER_TD_6582.push_back(events_h2d_wr_JOIN_INNER_TD_6582[0]);
    events_grp_JOIN_INNER_TD_6582.push_back(events_JOIN_INNER_TD_7759[0]);
    krnl_JOIN_INNER_TD_6582.run(0, &(events_grp_JOIN_INNER_TD_6582), &(events_JOIN_INNER_TD_6582[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_407_e, 0);

    struct timeval tv_r_Filter_5_162_s, tv_r_Filter_5_162_e;
    gettimeofday(&tv_r_Filter_5_162_s, 0);
    SW_Filter_TD_5957(tbl_SerializeFromObject_TD_6291_input, tbl_Filter_TD_5957_output);
    gettimeofday(&tv_r_Filter_5_162_e, 0);

    struct timeval tv_r_Project_5_937_s, tv_r_Project_5_937_e;
    gettimeofday(&tv_r_Project_5_937_s, 0);
    SW_Project_TD_5353(tbl_Filter_TD_6142_output, tbl_Project_TD_5353_output);
    gettimeofday(&tv_r_Project_5_937_e, 0);

    struct timeval tv_r_JOIN_INNER_5_327_s, tv_r_JOIN_INNER_5_327_e;
    gettimeofday(&tv_r_JOIN_INNER_5_327_s, 0);
    prev_events_grp_JOIN_INNER_TD_5627.push_back(events_h2d_wr_JOIN_INNER_TD_6582[0]);
    trans_JOIN_INNER_TD_5627.add(&(tbl_Project_TD_6660_output));
    trans_JOIN_INNER_TD_5627.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5627), &(events_h2d_wr_JOIN_INNER_TD_5627[0]));
    events_grp_JOIN_INNER_TD_5627.push_back(events_h2d_wr_JOIN_INNER_TD_5627[0]);
    events_grp_JOIN_INNER_TD_5627.push_back(events_JOIN_INNER_TD_6582[0]);
    krnl_JOIN_INNER_TD_5627.run(0, &(events_grp_JOIN_INNER_TD_5627), &(events_JOIN_INNER_TD_5627[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_327_e, 0);

    struct timeval tv_r_Project_4_252_s, tv_r_Project_4_252_e;
    gettimeofday(&tv_r_Project_4_252_s, 0);
    SW_Project_TD_434(tbl_Filter_TD_5957_output, tbl_Project_TD_434_output);
    gettimeofday(&tv_r_Project_4_252_e, 0);

    struct timeval tv_r_JOIN_INNER_4_799_s, tv_r_JOIN_INNER_4_799_e;
    gettimeofday(&tv_r_JOIN_INNER_4_799_s, 0);
    prev_events_grp_JOIN_INNER_TD_4169.push_back(events_h2d_wr_JOIN_INNER_TD_5627[0]);
    trans_JOIN_INNER_TD_4169.add(&(tbl_Project_TD_5353_output));
    trans_JOIN_INNER_TD_4169.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4169), &(events_h2d_wr_JOIN_INNER_TD_4169[0]));
    events_grp_JOIN_INNER_TD_4169.push_back(events_h2d_wr_JOIN_INNER_TD_4169[0]);
    events_grp_JOIN_INNER_TD_4169.push_back(events_JOIN_INNER_TD_5627[0]);
    krnl_JOIN_INNER_TD_4169.run(0, &(events_grp_JOIN_INNER_TD_4169), &(events_JOIN_INNER_TD_4169[0]));
    
    trans_JOIN_INNER_TD_4169_out.add(&(tbl_JOIN_INNER_TD_4169_output));
    trans_JOIN_INNER_TD_4169_out.dev2host(0, &(events_JOIN_INNER_TD_4169), &(events_d2h_rd_JOIN_INNER_TD_4169[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_799_e, 0);

    struct timeval tv_r_JOIN_INNER_3_117_s, tv_r_JOIN_INNER_3_117_e;
    gettimeofday(&tv_r_JOIN_INNER_3_117_s, 0);
    SW_JOIN_INNER_TD_3278(tbl_JOIN_INNER_TD_4169_output, tbl_Project_TD_434_output, tbl_SerializeFromObject_TD_7181_input, tbl_SerializeFromObject_TD_6291_input, tbl_JOIN_INNER_TD_3278_output);
    gettimeofday(&tv_r_JOIN_INNER_3_117_e, 0);

    struct timeval tv_r_Project_2_180_s, tv_r_Project_2_180_e;
    gettimeofday(&tv_r_Project_2_180_s, 0);
    SW_Project_TD_2272(tbl_JOIN_INNER_TD_3278_output, tbl_Project_TD_2272_output);
    gettimeofday(&tv_r_Project_2_180_e, 0);

    struct timeval tv_r_Aggregate_1_478_s, tv_r_Aggregate_1_478_e;
    gettimeofday(&tv_r_Aggregate_1_478_s, 0);
    SW_Aggregate_TD_1311(tbl_Project_TD_2272_output, tbl_Aggregate_TD_1311_output);
    gettimeofday(&tv_r_Aggregate_1_478_e, 0);

    struct timeval tv_r_Sort_0_200_s, tv_r_Sort_0_200_e;
    gettimeofday(&tv_r_Sort_0_200_s, 0);
    SW_Sort_TD_0336(tbl_Aggregate_TD_1311_output, tbl_Sort_TD_0336_output);
    gettimeofday(&tv_r_Sort_0_200_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_679_s, &tv_r_Filter_9_679_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10336_input: " << tbl_SerializeFromObject_TD_10336_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_872_s, &tv_r_Project_8_872_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_95_output: " << tbl_Filter_TD_95_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_702_s, &tv_r_Project_8_702_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10847_input: " << tbl_SerializeFromObject_TD_10847_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_446_s, &tv_r_Project_7_446_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9640_input: " << tbl_SerializeFromObject_TD_9640_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_105_s, &tv_r_JOIN_INNER_7_105_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8334_output: " << tbl_Project_TD_8334_output.getNumRow() << " " << "tbl_Project_TD_8486_output: " << tbl_Project_TD_8486_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_949_s, &tv_r_Filter_6_949_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7181_input: " << tbl_SerializeFromObject_TD_7181_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_406_s, &tv_r_Project_6_406_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8894_input: " << tbl_SerializeFromObject_TD_8894_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_407_s, &tv_r_JOIN_INNER_6_407_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7759_output: " << tbl_JOIN_INNER_TD_7759_output.getNumRow() << " " << "tbl_Project_TD_7581_output: " << tbl_Project_TD_7581_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_162_s, &tv_r_Filter_5_162_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6291_input: " << tbl_SerializeFromObject_TD_6291_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_937_s, &tv_r_Project_5_937_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6142_output: " << tbl_Filter_TD_6142_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_327_s, &tv_r_JOIN_INNER_5_327_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6582_output: " << tbl_JOIN_INNER_TD_6582_output.getNumRow() << " " << "tbl_Project_TD_6660_output: " << tbl_Project_TD_6660_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_252_s, &tv_r_Project_4_252_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5957_output: " << tbl_Filter_TD_5957_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_799_s, &tv_r_JOIN_INNER_4_799_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5627_output: " << tbl_JOIN_INNER_TD_5627_output.getNumRow() << " " << "tbl_Project_TD_5353_output: " << tbl_Project_TD_5353_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_117_s, &tv_r_JOIN_INNER_3_117_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4169_output: " << tbl_JOIN_INNER_TD_4169_output.getNumRow() << " " << "tbl_Project_TD_434_output: " << tbl_Project_TD_434_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_180_s, &tv_r_Project_2_180_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3278_output: " << tbl_JOIN_INNER_TD_3278_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_478_s, &tv_r_Aggregate_1_478_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2272_output: " << tbl_Project_TD_2272_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_200_s, &tv_r_Sort_0_200_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1311_output: " << tbl_Aggregate_TD_1311_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 8.838851 * 1000 << "ms" << std::endl; 
    return 0; 
}
