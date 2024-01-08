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
#include "gqe_api.hpp" 

#include "cfgFunc_q8.hpp" 
#include "q8.hpp" 

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
    std::cout << "NOTE:running query #8\n."; 
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
    Table tbl_Sort_TD_0936_output("tbl_Sort_TD_0936_output", 6100000, 2, "");
    tbl_Sort_TD_0936_output.allocateHost();
    Table tbl_Aggregate_TD_1231_output("tbl_Aggregate_TD_1231_output", 6100000, 2, "");
    tbl_Aggregate_TD_1231_output.allocateHost();
    Table tbl_Project_TD_2743_output("tbl_Project_TD_2743_output", 6100000, 3, "");
    tbl_Project_TD_2743_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3576_output("tbl_JOIN_INNER_TD_3576_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3576_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4966_output("tbl_JOIN_INNER_TD_4966_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4966_output.allocateHost();
    Table tbl_Project_TD_4792_output("tbl_Project_TD_4792_output", 6100000, 1, "");
    tbl_Project_TD_4792_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5583_output("tbl_JOIN_INNER_TD_5583_output", 12215, 5, "");
    tbl_JOIN_INNER_TD_5583_output.allocateHost();
    Table tbl_Project_TD_5787_output("tbl_Project_TD_5787_output", 6100000, 2, "");
    tbl_Project_TD_5787_output.allocateHost();
    Table tbl_Filter_TD_5848_output("tbl_Filter_TD_5848_output", 6100000, 1, "");
    tbl_Filter_TD_5848_output.allocateHost();
    Table tbl_JOIN_INNER_TD_679_output("tbl_JOIN_INNER_TD_679_output", 12215, 5, "");
    tbl_JOIN_INNER_TD_679_output.allocateHost();
    Table tbl_Project_TD_6628_output("tbl_Project_TD_6628_output", 6100000, 2, "");
    tbl_Project_TD_6628_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7758_input;
    tbl_SerializeFromObject_TD_7758_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7758_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_7758_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_7758_input.allocateHost();
    tbl_SerializeFromObject_TD_7758_input.loadHost();
    Table tbl_SerializeFromObject_TD_6919_input;
    tbl_SerializeFromObject_TD_6919_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6919_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_6919_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_6919_input.allocateHost();
    tbl_SerializeFromObject_TD_6919_input.loadHost();
    Table tbl_JOIN_INNER_TD_7978_output("tbl_JOIN_INNER_TD_7978_output", 12215, 5, "");
    tbl_JOIN_INNER_TD_7978_output.allocateHost();
    Table tbl_Project_TD_7353_output("tbl_Project_TD_7353_output", 6100000, 2, "");
    tbl_Project_TD_7353_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8581_input;
    tbl_SerializeFromObject_TD_8581_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_8581_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_8581_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_8581_input.allocateHost();
    tbl_SerializeFromObject_TD_8581_input.loadHost();
    Table tbl_JOIN_INNER_TD_825_output("tbl_JOIN_INNER_TD_825_output", 39720, 4, "");
    tbl_JOIN_INNER_TD_825_output.allocateHost();
    Table tbl_Project_TD_871_output("tbl_Project_TD_871_output", 6100000, 3, "");
    tbl_Project_TD_871_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9527_input;
    tbl_SerializeFromObject_TD_9527_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9527_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_9527_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_9527_input.allocateHost();
    tbl_SerializeFromObject_TD_9527_input.loadHost();
    Table tbl_JOIN_INNER_TD_9113_output("tbl_JOIN_INNER_TD_9113_output", 39720, 4, "");
    tbl_JOIN_INNER_TD_9113_output.allocateHost();
    Table tbl_Project_TD_9692_output("tbl_Project_TD_9692_output", 6100000, 2, "");
    tbl_Project_TD_9692_output.allocateHost();
    Table tbl_Filter_TD_9864_output("tbl_Filter_TD_9864_output", 6100000, 3, "");
    tbl_Filter_TD_9864_output.allocateHost();
    Table tbl_Project_TD_10538_output("tbl_Project_TD_10538_output", 6100000, 1, "");
    tbl_Project_TD_10538_output.allocateHost();
    Table tbl_Project_TD_10384_output("tbl_Project_TD_10384_output", 6100000, 5, "");
    tbl_Project_TD_10384_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11425_input;
    tbl_SerializeFromObject_TD_11425_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_11425_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_11425_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_11425_input.allocateHost();
    tbl_SerializeFromObject_TD_11425_input.loadHost();
    Table tbl_SerializeFromObject_TD_10597_input;
    tbl_SerializeFromObject_TD_10597_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_10597_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_10597_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_10597_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_10597_input.allocateHost();
    tbl_SerializeFromObject_TD_10597_input.loadHost();
    Table tbl_Filter_TD_11349_output("tbl_Filter_TD_11349_output", 6100000, 1, "");
    tbl_Filter_TD_11349_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12286_input;
    tbl_SerializeFromObject_TD_12286_input = Table("lineitem", lineitem_n, 5, in_dir);
    tbl_SerializeFromObject_TD_12286_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_12286_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_12286_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_12286_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_12286_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_12286_input.allocateHost();
    tbl_SerializeFromObject_TD_12286_input.loadHost();
    Table tbl_SerializeFromObject_TD_12246_input;
    tbl_SerializeFromObject_TD_12246_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_12246_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_12246_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_12246_input.allocateHost();
    tbl_SerializeFromObject_TD_12246_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5583_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_679_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6628_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7978_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7353_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_825_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_871_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9113_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_9692_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10538_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10384_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5583_cmds;
    cfg_JOIN_INNER_TD_5583_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5583_gqe_join (cfg_JOIN_INNER_TD_5583_cmds.cmd);
    cfg_JOIN_INNER_TD_5583_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_679_cmds;
    cfg_JOIN_INNER_TD_679_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_679_gqe_join (cfg_JOIN_INNER_TD_679_cmds.cmd);
    cfg_JOIN_INNER_TD_679_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7978_cmds;
    cfg_JOIN_INNER_TD_7978_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7978_gqe_join (cfg_JOIN_INNER_TD_7978_cmds.cmd);
    cfg_JOIN_INNER_TD_7978_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_825_cmds;
    cfg_JOIN_INNER_TD_825_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_825_gqe_join (cfg_JOIN_INNER_TD_825_cmds.cmd);
    cfg_JOIN_INNER_TD_825_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9113_cmds;
    cfg_JOIN_INNER_TD_9113_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9113_gqe_join (cfg_JOIN_INNER_TD_9113_cmds.cmd);
    cfg_JOIN_INNER_TD_9113_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5583;
    krnl_JOIN_INNER_TD_5583 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5583.setup(tbl_Project_TD_6628_output, tbl_JOIN_INNER_TD_679_output, tbl_JOIN_INNER_TD_5583_output, cfg_JOIN_INNER_TD_5583_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_679;
    krnl_JOIN_INNER_TD_679 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_679.setup(tbl_JOIN_INNER_TD_7978_output, tbl_Project_TD_7353_output, tbl_JOIN_INNER_TD_679_output, cfg_JOIN_INNER_TD_679_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7978;
    krnl_JOIN_INNER_TD_7978 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7978.setup(tbl_JOIN_INNER_TD_825_output, tbl_Project_TD_871_output, tbl_JOIN_INNER_TD_7978_output, cfg_JOIN_INNER_TD_7978_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_825;
    krnl_JOIN_INNER_TD_825 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_825.setup(tbl_Project_TD_9692_output, tbl_JOIN_INNER_TD_9113_output, tbl_JOIN_INNER_TD_825_output, cfg_JOIN_INNER_TD_825_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9113;
    krnl_JOIN_INNER_TD_9113 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9113.setup(tbl_Project_TD_10538_output, tbl_Project_TD_10384_output, tbl_JOIN_INNER_TD_9113_output, cfg_JOIN_INNER_TD_9113_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5583;
    trans_JOIN_INNER_TD_5583.setq(q_h);
    trans_JOIN_INNER_TD_5583.add(&(cfg_JOIN_INNER_TD_5583_cmds));
    transEngine trans_JOIN_INNER_TD_5583_out;
    trans_JOIN_INNER_TD_5583_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_679;
    trans_JOIN_INNER_TD_679.setq(q_h);
    trans_JOIN_INNER_TD_679.add(&(cfg_JOIN_INNER_TD_679_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7978;
    trans_JOIN_INNER_TD_7978.setq(q_h);
    trans_JOIN_INNER_TD_7978.add(&(cfg_JOIN_INNER_TD_7978_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_825;
    trans_JOIN_INNER_TD_825.setq(q_h);
    trans_JOIN_INNER_TD_825.add(&(cfg_JOIN_INNER_TD_825_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9113;
    trans_JOIN_INNER_TD_9113.setq(q_h);
    trans_JOIN_INNER_TD_9113.add(&(cfg_JOIN_INNER_TD_9113_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5583;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5583;
    std::vector<cl::Event> events_JOIN_INNER_TD_5583;
    events_h2d_wr_JOIN_INNER_TD_5583.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5583.resize(1);
    events_JOIN_INNER_TD_5583.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5583;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5583;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_679;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_679;
    std::vector<cl::Event> events_JOIN_INNER_TD_679;
    events_h2d_wr_JOIN_INNER_TD_679.resize(1);
    events_d2h_rd_JOIN_INNER_TD_679.resize(1);
    events_JOIN_INNER_TD_679.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_679;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_679;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7978;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7978;
    std::vector<cl::Event> events_JOIN_INNER_TD_7978;
    events_h2d_wr_JOIN_INNER_TD_7978.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7978.resize(1);
    events_JOIN_INNER_TD_7978.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7978;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7978;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_825;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_825;
    std::vector<cl::Event> events_JOIN_INNER_TD_825;
    events_h2d_wr_JOIN_INNER_TD_825.resize(1);
    events_d2h_rd_JOIN_INNER_TD_825.resize(1);
    events_JOIN_INNER_TD_825.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_825;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_825;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9113;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9113;
    std::vector<cl::Event> events_JOIN_INNER_TD_9113;
    events_h2d_wr_JOIN_INNER_TD_9113.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9113.resize(1);
    events_JOIN_INNER_TD_9113.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9113;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9113;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_178_s, tv_r_Filter_11_178_e;
    gettimeofday(&tv_r_Filter_11_178_s, 0);
    SW_Filter_TD_11349(tbl_SerializeFromObject_TD_12246_input, tbl_Filter_TD_11349_output);
    gettimeofday(&tv_r_Filter_11_178_e, 0);

    struct timeval tv_r_Project_10_260_s, tv_r_Project_10_260_e;
    gettimeofday(&tv_r_Project_10_260_s, 0);
    SW_Project_TD_10384(tbl_SerializeFromObject_TD_12286_input, tbl_Project_TD_10384_output);
    gettimeofday(&tv_r_Project_10_260_e, 0);

    struct timeval tv_r_Project_10_747_s, tv_r_Project_10_747_e;
    gettimeofday(&tv_r_Project_10_747_s, 0);
    SW_Project_TD_10538(tbl_Filter_TD_11349_output, tbl_Project_TD_10538_output);
    gettimeofday(&tv_r_Project_10_747_e, 0);

    struct timeval tv_r_Filter_9_133_s, tv_r_Filter_9_133_e;
    gettimeofday(&tv_r_Filter_9_133_s, 0);
    SW_Filter_TD_9864(tbl_SerializeFromObject_TD_10597_input, tbl_Filter_TD_9864_output);
    gettimeofday(&tv_r_Filter_9_133_e, 0);

    struct timeval tv_r_Project_9_766_s, tv_r_Project_9_766_e;
    gettimeofday(&tv_r_Project_9_766_s, 0);
    SW_Project_TD_9692(tbl_SerializeFromObject_TD_11425_input, tbl_Project_TD_9692_output);
    gettimeofday(&tv_r_Project_9_766_e, 0);

    struct timeval tv_r_JOIN_INNER_9_63_s, tv_r_JOIN_INNER_9_63_e;
    gettimeofday(&tv_r_JOIN_INNER_9_63_s, 0);
    trans_JOIN_INNER_TD_9113.add(&(tbl_Project_TD_10538_output));
    trans_JOIN_INNER_TD_9113.add(&(tbl_Project_TD_10384_output));
    trans_JOIN_INNER_TD_9113.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9113), &(events_h2d_wr_JOIN_INNER_TD_9113[0]));
    events_grp_JOIN_INNER_TD_9113.push_back(events_h2d_wr_JOIN_INNER_TD_9113[0]);
    krnl_JOIN_INNER_TD_9113.run(0, &(events_grp_JOIN_INNER_TD_9113), &(events_JOIN_INNER_TD_9113[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_63_e, 0);

    struct timeval tv_r_Project_8_170_s, tv_r_Project_8_170_e;
    gettimeofday(&tv_r_Project_8_170_s, 0);
    SW_Project_TD_871(tbl_Filter_TD_9864_output, tbl_Project_TD_871_output);
    gettimeofday(&tv_r_Project_8_170_e, 0);

    struct timeval tv_r_JOIN_INNER_8_360_s, tv_r_JOIN_INNER_8_360_e;
    gettimeofday(&tv_r_JOIN_INNER_8_360_s, 0);
    prev_events_grp_JOIN_INNER_TD_825.push_back(events_h2d_wr_JOIN_INNER_TD_9113[0]);
    trans_JOIN_INNER_TD_825.add(&(tbl_Project_TD_9692_output));
    trans_JOIN_INNER_TD_825.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_825), &(events_h2d_wr_JOIN_INNER_TD_825[0]));
    events_grp_JOIN_INNER_TD_825.push_back(events_h2d_wr_JOIN_INNER_TD_825[0]);
    events_grp_JOIN_INNER_TD_825.push_back(events_JOIN_INNER_TD_9113[0]);
    krnl_JOIN_INNER_TD_825.run(0, &(events_grp_JOIN_INNER_TD_825), &(events_JOIN_INNER_TD_825[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_360_e, 0);

    struct timeval tv_r_Project_7_317_s, tv_r_Project_7_317_e;
    gettimeofday(&tv_r_Project_7_317_s, 0);
    SW_Project_TD_7353(tbl_SerializeFromObject_TD_9527_input, tbl_Project_TD_7353_output);
    gettimeofday(&tv_r_Project_7_317_e, 0);

    struct timeval tv_r_JOIN_INNER_7_815_s, tv_r_JOIN_INNER_7_815_e;
    gettimeofday(&tv_r_JOIN_INNER_7_815_s, 0);
    prev_events_grp_JOIN_INNER_TD_7978.push_back(events_h2d_wr_JOIN_INNER_TD_825[0]);
    trans_JOIN_INNER_TD_7978.add(&(tbl_Project_TD_871_output));
    trans_JOIN_INNER_TD_7978.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7978), &(events_h2d_wr_JOIN_INNER_TD_7978[0]));
    events_grp_JOIN_INNER_TD_7978.push_back(events_h2d_wr_JOIN_INNER_TD_7978[0]);
    events_grp_JOIN_INNER_TD_7978.push_back(events_JOIN_INNER_TD_825[0]);
    krnl_JOIN_INNER_TD_7978.run(0, &(events_grp_JOIN_INNER_TD_7978), &(events_JOIN_INNER_TD_7978[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_815_e, 0);

    struct timeval tv_r_Project_6_961_s, tv_r_Project_6_961_e;
    gettimeofday(&tv_r_Project_6_961_s, 0);
    SW_Project_TD_6628(tbl_SerializeFromObject_TD_8581_input, tbl_Project_TD_6628_output);
    gettimeofday(&tv_r_Project_6_961_e, 0);

    struct timeval tv_r_JOIN_INNER_6_300_s, tv_r_JOIN_INNER_6_300_e;
    gettimeofday(&tv_r_JOIN_INNER_6_300_s, 0);
    prev_events_grp_JOIN_INNER_TD_679.push_back(events_h2d_wr_JOIN_INNER_TD_7978[0]);
    trans_JOIN_INNER_TD_679.add(&(tbl_Project_TD_7353_output));
    trans_JOIN_INNER_TD_679.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_679), &(events_h2d_wr_JOIN_INNER_TD_679[0]));
    events_grp_JOIN_INNER_TD_679.push_back(events_h2d_wr_JOIN_INNER_TD_679[0]);
    events_grp_JOIN_INNER_TD_679.push_back(events_JOIN_INNER_TD_7978[0]);
    krnl_JOIN_INNER_TD_679.run(0, &(events_grp_JOIN_INNER_TD_679), &(events_JOIN_INNER_TD_679[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_300_e, 0);

    struct timeval tv_r_Filter_5_518_s, tv_r_Filter_5_518_e;
    gettimeofday(&tv_r_Filter_5_518_s, 0);
    SW_Filter_TD_5848(tbl_SerializeFromObject_TD_6919_input, tbl_Filter_TD_5848_output);
    gettimeofday(&tv_r_Filter_5_518_e, 0);

    struct timeval tv_r_Project_5_786_s, tv_r_Project_5_786_e;
    gettimeofday(&tv_r_Project_5_786_s, 0);
    SW_Project_TD_5787(tbl_SerializeFromObject_TD_7758_input, tbl_Project_TD_5787_output);
    gettimeofday(&tv_r_Project_5_786_e, 0);

    struct timeval tv_r_JOIN_INNER_5_287_s, tv_r_JOIN_INNER_5_287_e;
    gettimeofday(&tv_r_JOIN_INNER_5_287_s, 0);
    prev_events_grp_JOIN_INNER_TD_5583.push_back(events_h2d_wr_JOIN_INNER_TD_679[0]);
    trans_JOIN_INNER_TD_5583.add(&(tbl_Project_TD_6628_output));
    trans_JOIN_INNER_TD_5583.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5583), &(events_h2d_wr_JOIN_INNER_TD_5583[0]));
    events_grp_JOIN_INNER_TD_5583.push_back(events_h2d_wr_JOIN_INNER_TD_5583[0]);
    events_grp_JOIN_INNER_TD_5583.push_back(events_JOIN_INNER_TD_679[0]);
    krnl_JOIN_INNER_TD_5583.run(0, &(events_grp_JOIN_INNER_TD_5583), &(events_JOIN_INNER_TD_5583[0]));
    
    trans_JOIN_INNER_TD_5583_out.add(&(tbl_JOIN_INNER_TD_5583_output));
    trans_JOIN_INNER_TD_5583_out.dev2host(0, &(events_JOIN_INNER_TD_5583), &(events_d2h_rd_JOIN_INNER_TD_5583[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_287_e, 0);

    struct timeval tv_r_Project_4_563_s, tv_r_Project_4_563_e;
    gettimeofday(&tv_r_Project_4_563_s, 0);
    SW_Project_TD_4792(tbl_Filter_TD_5848_output, tbl_Project_TD_4792_output);
    gettimeofday(&tv_r_Project_4_563_e, 0);

    struct timeval tv_r_JOIN_INNER_4_860_s, tv_r_JOIN_INNER_4_860_e;
    gettimeofday(&tv_r_JOIN_INNER_4_860_s, 0);
    SW_JOIN_INNER_TD_4966(tbl_JOIN_INNER_TD_5583_output, tbl_Project_TD_5787_output, tbl_JOIN_INNER_TD_4966_output);
    gettimeofday(&tv_r_JOIN_INNER_4_860_e, 0);

    struct timeval tv_r_JOIN_INNER_3_396_s, tv_r_JOIN_INNER_3_396_e;
    gettimeofday(&tv_r_JOIN_INNER_3_396_s, 0);
    SW_JOIN_INNER_TD_3576(tbl_JOIN_INNER_TD_4966_output, tbl_Project_TD_4792_output, tbl_JOIN_INNER_TD_3576_output);
    gettimeofday(&tv_r_JOIN_INNER_3_396_e, 0);

    struct timeval tv_r_Project_2_954_s, tv_r_Project_2_954_e;
    gettimeofday(&tv_r_Project_2_954_s, 0);
    SW_Project_TD_2743(tbl_JOIN_INNER_TD_3576_output, tbl_Project_TD_2743_output);
    gettimeofday(&tv_r_Project_2_954_e, 0);

    struct timeval tv_r_Aggregate_1_256_s, tv_r_Aggregate_1_256_e;
    gettimeofday(&tv_r_Aggregate_1_256_s, 0);
    SW_Aggregate_TD_1231(tbl_Project_TD_2743_output, tbl_Aggregate_TD_1231_output);
    gettimeofday(&tv_r_Aggregate_1_256_e, 0);

    struct timeval tv_r_Sort_0_771_s, tv_r_Sort_0_771_e;
    gettimeofday(&tv_r_Sort_0_771_s, 0);
    SW_Sort_TD_0936(tbl_Aggregate_TD_1231_output, tbl_Sort_TD_0936_output);
    gettimeofday(&tv_r_Sort_0_771_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_178_s, &tv_r_Filter_11_178_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12246_input: " << tbl_SerializeFromObject_TD_12246_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_260_s, &tv_r_Project_10_260_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12286_input: " << tbl_SerializeFromObject_TD_12286_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_747_s, &tv_r_Project_10_747_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11349_output: " << tbl_Filter_TD_11349_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_133_s, &tv_r_Filter_9_133_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10597_input: " << tbl_SerializeFromObject_TD_10597_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_9: " << tvdiff(&tv_r_Project_9_766_s, &tv_r_Project_9_766_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11425_input: " << tbl_SerializeFromObject_TD_11425_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_63_s, &tv_r_JOIN_INNER_9_63_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10538_output: " << tbl_Project_TD_10538_output.getNumRow() << " " << "tbl_Project_TD_10384_output: " << tbl_Project_TD_10384_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_170_s, &tv_r_Project_8_170_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9864_output: " << tbl_Filter_TD_9864_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_360_s, &tv_r_JOIN_INNER_8_360_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9113_output: " << tbl_JOIN_INNER_TD_9113_output.getNumRow() << " " << "tbl_Project_TD_9692_output: " << tbl_Project_TD_9692_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_317_s, &tv_r_Project_7_317_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9527_input: " << tbl_SerializeFromObject_TD_9527_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_815_s, &tv_r_JOIN_INNER_7_815_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_825_output: " << tbl_JOIN_INNER_TD_825_output.getNumRow() << " " << "tbl_Project_TD_871_output: " << tbl_Project_TD_871_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_961_s, &tv_r_Project_6_961_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8581_input: " << tbl_SerializeFromObject_TD_8581_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_300_s, &tv_r_JOIN_INNER_6_300_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7978_output: " << tbl_JOIN_INNER_TD_7978_output.getNumRow() << " " << "tbl_Project_TD_7353_output: " << tbl_Project_TD_7353_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_518_s, &tv_r_Filter_5_518_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6919_input: " << tbl_SerializeFromObject_TD_6919_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_786_s, &tv_r_Project_5_786_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7758_input: " << tbl_SerializeFromObject_TD_7758_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_287_s, &tv_r_JOIN_INNER_5_287_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_679_output: " << tbl_JOIN_INNER_TD_679_output.getNumRow() << " " << "tbl_Project_TD_6628_output: " << tbl_Project_TD_6628_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_563_s, &tv_r_Project_4_563_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5848_output: " << tbl_Filter_TD_5848_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_860_s, &tv_r_JOIN_INNER_4_860_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5583_output: " << tbl_JOIN_INNER_TD_5583_output.getNumRow() << " " << "tbl_Project_TD_5787_output: " << tbl_Project_TD_5787_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_396_s, &tv_r_JOIN_INNER_3_396_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4966_output: " << tbl_JOIN_INNER_TD_4966_output.getNumRow() << " " << "tbl_Project_TD_4792_output: " << tbl_Project_TD_4792_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_954_s, &tv_r_Project_2_954_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3576_output: " << tbl_JOIN_INNER_TD_3576_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_256_s, &tv_r_Aggregate_1_256_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2743_output: " << tbl_Project_TD_2743_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_771_s, &tv_r_Sort_0_771_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1231_output: " << tbl_Aggregate_TD_1231_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 8.410949 * 1000 << "ms" << std::endl; 
    return 0; 
}
