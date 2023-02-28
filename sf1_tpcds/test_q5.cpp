// number of overlays (w/o fusion): 5 
// number of overlays (w/ fusion): 5 
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
#include "tpcds_read.hpp" 
#include "gqe_api.hpp" 

#include "cfgFunc_q5.hpp" 
#include "q5.hpp" 

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
    std::cout << "NOTE:running query #5\n."; 
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
    Table tbl_Sort_TD_0679582_output("tbl_Sort_TD_0679582_output", 6100000, 2, "");
    tbl_Sort_TD_0679582_output.allocateHost();
    Table tbl_Aggregate_TD_1869314_output("tbl_Aggregate_TD_1869314_output", 6100000, 2, "");
    tbl_Aggregate_TD_1869314_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2917669_output("tbl_JOIN_INNER_TD_2917669_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_2917669_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3687786_output("tbl_JOIN_INNER_TD_3687786_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3687786_output.allocateHost();
    Table tbl_Filter_TD_377131_output("tbl_Filter_TD_377131_output", 6100000, 1, "");
    tbl_Filter_TD_377131_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4177312_output("tbl_JOIN_INNER_TD_4177312_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4177312_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute = Table("nation", nation_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_4408153_input;
    tbl_SerializeFromObject_TD_4408153_input = Table("nation", nation_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_4408153_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_4408153_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_4408153_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_4408153_input.allocateHost();
    tbl_SerializeFromObject_TD_4408153_input.loadHost();
    Table tbl_SerializeFromObject_TD_4876007_input;
    tbl_SerializeFromObject_TD_4876007_input = Table("region", region_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4876007_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_4876007_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_4876007_input.allocateHost();
    tbl_SerializeFromObject_TD_4876007_input.loadHost();
    Table tbl_JOIN_INNER_TD_5487438_output("tbl_JOIN_INNER_TD_5487438_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5487438_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5940443_input;
    tbl_SerializeFromObject_TD_5940443_input = Table("supplier", supplier_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5940443_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_5940443_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_5940443_input.allocateHost();
    tbl_SerializeFromObject_TD_5940443_input.loadHost();
    Table tbl_JOIN_INNER_TD_6800328_output("tbl_JOIN_INNER_TD_6800328_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6800328_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6388251_input;
    tbl_SerializeFromObject_TD_6388251_input = Table("lineitem", lineitem_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6388251_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_6388251_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_6388251_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_6388251_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_6388251_input.allocateHost();
    tbl_SerializeFromObject_TD_6388251_input.loadHost();
    Table tbl_SerializeFromObject_TD_7805493_input;
    tbl_SerializeFromObject_TD_7805493_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7805493_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_7805493_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_7805493_input.allocateHost();
    tbl_SerializeFromObject_TD_7805493_input.loadHost();
    Table tbl_Filter_TD_771381_output("tbl_Filter_TD_771381_output", 6100000, 2, "");
    tbl_Filter_TD_771381_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8393076_input;
    tbl_SerializeFromObject_TD_8393076_input = Table("orders", orders_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8393076_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_8393076_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_8393076_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_8393076_input.allocateHost();
    tbl_SerializeFromObject_TD_8393076_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2917669_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3687786_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_377131_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4177312_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5487438_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5940443_input.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6800328_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_6388251_input.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_7805493_input.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_771381_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2917669_cmds;
    cfg_JOIN_INNER_TD_2917669_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2917669_gqe_join (cfg_JOIN_INNER_TD_2917669_cmds.cmd);
    cfg_JOIN_INNER_TD_2917669_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3687786_cmds;
    cfg_JOIN_INNER_TD_3687786_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3687786_gqe_join (cfg_JOIN_INNER_TD_3687786_cmds.cmd);
    cfg_JOIN_INNER_TD_3687786_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4177312_cmds;
    cfg_JOIN_INNER_TD_4177312_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4177312_gqe_join (cfg_JOIN_INNER_TD_4177312_cmds.cmd);
    cfg_JOIN_INNER_TD_4177312_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5487438_cmds;
    cfg_JOIN_INNER_TD_5487438_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5487438_gqe_join (cfg_JOIN_INNER_TD_5487438_cmds.cmd);
    cfg_JOIN_INNER_TD_5487438_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6800328_cmds;
    cfg_JOIN_INNER_TD_6800328_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6800328_gqe_join (cfg_JOIN_INNER_TD_6800328_cmds.cmd);
    cfg_JOIN_INNER_TD_6800328_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2917669;
    krnl_JOIN_INNER_TD_2917669 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2917669.setup(tbl_Filter_TD_377131_output, tbl_JOIN_INNER_TD_3687786_output, tbl_JOIN_INNER_TD_2917669_output, cfg_JOIN_INNER_TD_2917669_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3687786;
    krnl_JOIN_INNER_TD_3687786 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3687786.setup(tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute, tbl_JOIN_INNER_TD_4177312_output, tbl_JOIN_INNER_TD_3687786_output, cfg_JOIN_INNER_TD_3687786_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4177312;
    krnl_JOIN_INNER_TD_4177312 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4177312.setup(tbl_SerializeFromObject_TD_5940443_input, tbl_JOIN_INNER_TD_5487438_output, tbl_JOIN_INNER_TD_4177312_output, cfg_JOIN_INNER_TD_4177312_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5487438;
    krnl_JOIN_INNER_TD_5487438 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5487438.setup(tbl_JOIN_INNER_TD_6800328_output, tbl_SerializeFromObject_TD_6388251_input, tbl_JOIN_INNER_TD_5487438_output, cfg_JOIN_INNER_TD_5487438_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6800328;
    krnl_JOIN_INNER_TD_6800328 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6800328.setup(tbl_SerializeFromObject_TD_7805493_input, tbl_Filter_TD_771381_output, tbl_JOIN_INNER_TD_6800328_output, cfg_JOIN_INNER_TD_6800328_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2917669;
    trans_JOIN_INNER_TD_2917669.setq(q_h);
    trans_JOIN_INNER_TD_2917669.add(&(cfg_JOIN_INNER_TD_2917669_cmds));
    transEngine trans_JOIN_INNER_TD_2917669_out;
    trans_JOIN_INNER_TD_2917669_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3687786;
    trans_JOIN_INNER_TD_3687786.setq(q_h);
    trans_JOIN_INNER_TD_3687786.add(&(cfg_JOIN_INNER_TD_3687786_cmds));
    trans_JOIN_INNER_TD_3687786.add(&(tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4177312;
    trans_JOIN_INNER_TD_4177312.setq(q_h);
    trans_JOIN_INNER_TD_4177312.add(&(cfg_JOIN_INNER_TD_4177312_cmds));
    trans_JOIN_INNER_TD_4177312.add(&(tbl_SerializeFromObject_TD_5940443_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5487438;
    trans_JOIN_INNER_TD_5487438.setq(q_h);
    trans_JOIN_INNER_TD_5487438.add(&(cfg_JOIN_INNER_TD_5487438_cmds));
    trans_JOIN_INNER_TD_5487438.add(&(tbl_SerializeFromObject_TD_6388251_input));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6800328;
    trans_JOIN_INNER_TD_6800328.setq(q_h);
    trans_JOIN_INNER_TD_6800328.add(&(cfg_JOIN_INNER_TD_6800328_cmds));
    trans_JOIN_INNER_TD_6800328.add(&(tbl_SerializeFromObject_TD_7805493_input));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2917669;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2917669;
    std::vector<cl::Event> events_JOIN_INNER_TD_2917669;
    events_h2d_wr_JOIN_INNER_TD_2917669.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2917669.resize(1);
    events_JOIN_INNER_TD_2917669.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2917669;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2917669;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3687786;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3687786;
    std::vector<cl::Event> events_JOIN_INNER_TD_3687786;
    events_h2d_wr_JOIN_INNER_TD_3687786.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3687786.resize(1);
    events_JOIN_INNER_TD_3687786.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3687786;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3687786;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4177312;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4177312;
    std::vector<cl::Event> events_JOIN_INNER_TD_4177312;
    events_h2d_wr_JOIN_INNER_TD_4177312.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4177312.resize(1);
    events_JOIN_INNER_TD_4177312.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4177312;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4177312;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5487438;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5487438;
    std::vector<cl::Event> events_JOIN_INNER_TD_5487438;
    events_h2d_wr_JOIN_INNER_TD_5487438.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5487438.resize(1);
    events_JOIN_INNER_TD_5487438.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5487438;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5487438;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6800328;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6800328;
    std::vector<cl::Event> events_JOIN_INNER_TD_6800328;
    events_h2d_wr_JOIN_INNER_TD_6800328.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6800328.resize(1);
    events_JOIN_INNER_TD_6800328.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6800328;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6800328;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_785391_s, tv_r_Filter_7_785391_e;
    gettimeofday(&tv_r_Filter_7_785391_s, 0);
    SW_Filter_TD_771381(tbl_SerializeFromObject_TD_8393076_input, tbl_Filter_TD_771381_output);
    gettimeofday(&tv_r_Filter_7_785391_e, 0);

    struct timeval tv_r_JOIN_INNER_6_12506_s, tv_r_JOIN_INNER_6_12506_e;
    gettimeofday(&tv_r_JOIN_INNER_6_12506_s, 0);
    trans_JOIN_INNER_TD_6800328.add(&(tbl_Filter_TD_771381_output));
    trans_JOIN_INNER_TD_6800328.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6800328), &(events_h2d_wr_JOIN_INNER_TD_6800328[0]));
    events_grp_JOIN_INNER_TD_6800328.push_back(events_h2d_wr_JOIN_INNER_TD_6800328[0]);
    krnl_JOIN_INNER_TD_6800328.run(0, &(events_grp_JOIN_INNER_TD_6800328), &(events_JOIN_INNER_TD_6800328[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_12506_e, 0);

    struct timeval tv_r_JOIN_INNER_5_446149_s, tv_r_JOIN_INNER_5_446149_e;
    gettimeofday(&tv_r_JOIN_INNER_5_446149_s, 0);
    prev_events_grp_JOIN_INNER_TD_5487438.push_back(events_h2d_wr_JOIN_INNER_TD_6800328[0]);
    trans_JOIN_INNER_TD_5487438.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5487438), &(events_h2d_wr_JOIN_INNER_TD_5487438[0]));
    events_grp_JOIN_INNER_TD_5487438.push_back(events_h2d_wr_JOIN_INNER_TD_5487438[0]);
    events_grp_JOIN_INNER_TD_5487438.push_back(events_JOIN_INNER_TD_6800328[0]);
    krnl_JOIN_INNER_TD_5487438.run(0, &(events_grp_JOIN_INNER_TD_5487438), &(events_JOIN_INNER_TD_5487438[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_446149_e, 0);

    struct timeval tv_r_JOIN_INNER_4_589773_s, tv_r_JOIN_INNER_4_589773_e;
    gettimeofday(&tv_r_JOIN_INNER_4_589773_s, 0);
    prev_events_grp_JOIN_INNER_TD_4177312.push_back(events_h2d_wr_JOIN_INNER_TD_5487438[0]);
    trans_JOIN_INNER_TD_4177312.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4177312), &(events_h2d_wr_JOIN_INNER_TD_4177312[0]));
    events_grp_JOIN_INNER_TD_4177312.push_back(events_h2d_wr_JOIN_INNER_TD_4177312[0]);
    events_grp_JOIN_INNER_TD_4177312.push_back(events_JOIN_INNER_TD_5487438[0]);
    krnl_JOIN_INNER_TD_4177312.run(0, &(events_grp_JOIN_INNER_TD_4177312), &(events_JOIN_INNER_TD_4177312[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_589773_e, 0);

    struct timeval tv_r_Filter_3_171525_s, tv_r_Filter_3_171525_e;
    gettimeofday(&tv_r_Filter_3_171525_s, 0);
    SW_Filter_TD_377131(tbl_SerializeFromObject_TD_4876007_input, tbl_Filter_TD_377131_output);
    gettimeofday(&tv_r_Filter_3_171525_e, 0);

    struct timeval tv_r_JOIN_INNER_3_323527_s, tv_r_JOIN_INNER_3_323527_e;
    gettimeofday(&tv_r_JOIN_INNER_3_323527_s, 0);
    prev_events_grp_JOIN_INNER_TD_3687786.push_back(events_h2d_wr_JOIN_INNER_TD_4177312[0]);
    trans_JOIN_INNER_TD_3687786.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3687786), &(events_h2d_wr_JOIN_INNER_TD_3687786[0]));
    events_grp_JOIN_INNER_TD_3687786.push_back(events_h2d_wr_JOIN_INNER_TD_3687786[0]);
    events_grp_JOIN_INNER_TD_3687786.push_back(events_JOIN_INNER_TD_4177312[0]);
    krnl_JOIN_INNER_TD_3687786.run(0, &(events_grp_JOIN_INNER_TD_3687786), &(events_JOIN_INNER_TD_3687786[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_323527_e, 0);

    struct timeval tv_r_JOIN_INNER_2_604608_s, tv_r_JOIN_INNER_2_604608_e;
    gettimeofday(&tv_r_JOIN_INNER_2_604608_s, 0);
    prev_events_grp_JOIN_INNER_TD_2917669.push_back(events_h2d_wr_JOIN_INNER_TD_3687786[0]);
    trans_JOIN_INNER_TD_2917669.add(&(tbl_Filter_TD_377131_output));
    trans_JOIN_INNER_TD_2917669.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2917669), &(events_h2d_wr_JOIN_INNER_TD_2917669[0]));
    events_grp_JOIN_INNER_TD_2917669.push_back(events_h2d_wr_JOIN_INNER_TD_2917669[0]);
    events_grp_JOIN_INNER_TD_2917669.push_back(events_JOIN_INNER_TD_3687786[0]);
    krnl_JOIN_INNER_TD_2917669.run(0, &(events_grp_JOIN_INNER_TD_2917669), &(events_JOIN_INNER_TD_2917669[0]));
    
    trans_JOIN_INNER_TD_2917669_out.add(&(tbl_JOIN_INNER_TD_2917669_output));
    trans_JOIN_INNER_TD_2917669_out.dev2host(0, &(events_JOIN_INNER_TD_2917669), &(events_d2h_rd_JOIN_INNER_TD_2917669[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_604608_e, 0);

    struct timeval tv_r_Aggregate_1_228235_s, tv_r_Aggregate_1_228235_e;
    gettimeofday(&tv_r_Aggregate_1_228235_s, 0);
    SW_Aggregate_TD_1869314(tbl_JOIN_INNER_TD_2917669_output, tbl_SerializeFromObject_TD_4408153_input, tbl_SerializeFromObject_TD_4876007_input, tbl_Aggregate_TD_1869314_output);
    gettimeofday(&tv_r_Aggregate_1_228235_e, 0);

    struct timeval tv_r_Sort_0_551704_s, tv_r_Sort_0_551704_e;
    gettimeofday(&tv_r_Sort_0_551704_s, 0);
    SW_Sort_TD_0679582(tbl_Aggregate_TD_1869314_output, tbl_Sort_TD_0679582_output);
    gettimeofday(&tv_r_Sort_0_551704_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_785391_s, &tv_r_Filter_7_785391_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8393076_input: " << tbl_SerializeFromObject_TD_8393076_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_12506_s, &tv_r_JOIN_INNER_6_12506_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7805493_input: " << tbl_SerializeFromObject_TD_7805493_input.getNumRow() << " " << "tbl_Filter_TD_771381_output: " << tbl_Filter_TD_771381_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_446149_s, &tv_r_JOIN_INNER_5_446149_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6800328_output: " << tbl_JOIN_INNER_TD_6800328_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_6388251_input: " << tbl_SerializeFromObject_TD_6388251_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_589773_s, &tv_r_JOIN_INNER_4_589773_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5487438_output: " << tbl_JOIN_INNER_TD_5487438_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_5940443_input: " << tbl_SerializeFromObject_TD_5940443_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_171525_s, &tv_r_Filter_3_171525_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4876007_input: " << tbl_SerializeFromObject_TD_4876007_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_323527_s, &tv_r_JOIN_INNER_3_323527_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4177312_output: " << tbl_JOIN_INNER_TD_4177312_output.getNumRow() << " " << "tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_4408153_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_604608_s, &tv_r_JOIN_INNER_2_604608_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3687786_output: " << tbl_JOIN_INNER_TD_3687786_output.getNumRow() << " " << "tbl_Filter_TD_377131_output: " << tbl_Filter_TD_377131_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_228235_s, &tv_r_Aggregate_1_228235_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2917669_output: " << tbl_JOIN_INNER_TD_2917669_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_551704_s, &tv_r_Sort_0_551704_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1869314_output: " << tbl_Aggregate_TD_1869314_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 28.654793 * 1000 << "ms" << std::endl; 
    return 0; 
}
