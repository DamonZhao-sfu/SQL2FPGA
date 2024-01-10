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
    Table tbl_Sort_TD_0391_output("tbl_Sort_TD_0391_output", 6100000, 2, "");
    tbl_Sort_TD_0391_output.allocateHost();
    Table tbl_Aggregate_TD_1745_output("tbl_Aggregate_TD_1745_output", 6100000, 2, "");
    tbl_Aggregate_TD_1745_output.allocateHost();
    Table tbl_Project_TD_2405_output("tbl_Project_TD_2405_output", 6100000, 3, "");
    tbl_Project_TD_2405_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3291_output("tbl_JOIN_INNER_TD_3291_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3291_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4856_output("tbl_JOIN_INNER_TD_4856_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4856_output.allocateHost();
    Table tbl_Project_TD_4489_output("tbl_Project_TD_4489_output", 6100000, 1, "");
    tbl_Project_TD_4489_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5374_output("tbl_JOIN_INNER_TD_5374_output", 12215, 5, "");
    tbl_JOIN_INNER_TD_5374_output.allocateHost();
    Table tbl_Project_TD_5813_output("tbl_Project_TD_5813_output", 6100000, 2, "");
    tbl_Project_TD_5813_output.allocateHost();
    Table tbl_Filter_TD_5299_output("tbl_Filter_TD_5299_output", 6100000, 1, "");
    tbl_Filter_TD_5299_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6649_output("tbl_JOIN_INNER_TD_6649_output", 12215, 5, "");
    tbl_JOIN_INNER_TD_6649_output.allocateHost();
    Table tbl_Project_TD_6931_output("tbl_Project_TD_6931_output", 6100000, 2, "");
    tbl_Project_TD_6931_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7893_input;
    tbl_SerializeFromObject_TD_7893_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7893_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_7893_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_7893_input.allocateHost();
    tbl_SerializeFromObject_TD_7893_input.loadHost();
    Table tbl_SerializeFromObject_TD_664_input;
    tbl_SerializeFromObject_TD_664_input = Table("region", region_n, 2, in_dir);
    tbl_SerializeFromObject_TD_664_input.addCol("r_regionkey", 4);
    tbl_SerializeFromObject_TD_664_input.addCol("r_name", TPCH_READ_REGION_LEN+1);
    tbl_SerializeFromObject_TD_664_input.allocateHost();
    tbl_SerializeFromObject_TD_664_input.loadHost();
    Table tbl_JOIN_INNER_TD_7269_output("tbl_JOIN_INNER_TD_7269_output", 12215, 5, "");
    tbl_JOIN_INNER_TD_7269_output.allocateHost();
    Table tbl_Project_TD_7132_output("tbl_Project_TD_7132_output", 6100000, 2, "");
    tbl_Project_TD_7132_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8583_input;
    tbl_SerializeFromObject_TD_8583_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_8583_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_8583_input.addCol("n_regionkey", 4);
    tbl_SerializeFromObject_TD_8583_input.allocateHost();
    tbl_SerializeFromObject_TD_8583_input.loadHost();
    Table tbl_JOIN_INNER_TD_8272_output("tbl_JOIN_INNER_TD_8272_output", 39720, 4, "");
    tbl_JOIN_INNER_TD_8272_output.allocateHost();
    Table tbl_Project_TD_8265_output("tbl_Project_TD_8265_output", 6100000, 3, "");
    tbl_Project_TD_8265_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9462_input;
    tbl_SerializeFromObject_TD_9462_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_9462_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_9462_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_9462_input.allocateHost();
    tbl_SerializeFromObject_TD_9462_input.loadHost();
    Table tbl_JOIN_INNER_TD_9969_output("tbl_JOIN_INNER_TD_9969_output", 39720, 4, "");
    tbl_JOIN_INNER_TD_9969_output.allocateHost();
    Table tbl_Project_TD_968_output("tbl_Project_TD_968_output", 6100000, 2, "");
    tbl_Project_TD_968_output.allocateHost();
    Table tbl_Filter_TD_9196_output("tbl_Filter_TD_9196_output", 6100000, 3, "");
    tbl_Filter_TD_9196_output.allocateHost();
    Table tbl_Project_TD_10262_output("tbl_Project_TD_10262_output", 6100000, 1, "");
    tbl_Project_TD_10262_output.allocateHost();
    Table tbl_Project_TD_10703_output("tbl_Project_TD_10703_output", 6100000, 5, "");
    tbl_Project_TD_10703_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11288_input;
    tbl_SerializeFromObject_TD_11288_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_11288_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_11288_input.addCol("s_nationkey", 4);
    tbl_SerializeFromObject_TD_11288_input.allocateHost();
    tbl_SerializeFromObject_TD_11288_input.loadHost();
    Table tbl_SerializeFromObject_TD_10626_input;
    tbl_SerializeFromObject_TD_10626_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_10626_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_10626_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_10626_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_10626_input.allocateHost();
    tbl_SerializeFromObject_TD_10626_input.loadHost();
    Table tbl_Filter_TD_11561_output("tbl_Filter_TD_11561_output", 6100000, 1, "");
    tbl_Filter_TD_11561_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12416_input;
    tbl_SerializeFromObject_TD_12416_input = Table("lineitem", lineitem_n, 5, in_dir);
    tbl_SerializeFromObject_TD_12416_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_12416_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_12416_input.addCol("l_suppkey", 4);
    tbl_SerializeFromObject_TD_12416_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_12416_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_12416_input.allocateHost();
    tbl_SerializeFromObject_TD_12416_input.loadHost();
    Table tbl_SerializeFromObject_TD_12408_input;
    tbl_SerializeFromObject_TD_12408_input = Table("part", part_n, 2, in_dir);
    tbl_SerializeFromObject_TD_12408_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_12408_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_12408_input.allocateHost();
    tbl_SerializeFromObject_TD_12408_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5374_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6649_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_6931_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7269_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_7132_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8272_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8265_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9969_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_968_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10262_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_10703_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5374_cmds;
    cfg_JOIN_INNER_TD_5374_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5374_gqe_join (cfg_JOIN_INNER_TD_5374_cmds.cmd);
    cfg_JOIN_INNER_TD_5374_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6649_cmds;
    cfg_JOIN_INNER_TD_6649_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6649_gqe_join (cfg_JOIN_INNER_TD_6649_cmds.cmd);
    cfg_JOIN_INNER_TD_6649_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7269_cmds;
    cfg_JOIN_INNER_TD_7269_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7269_gqe_join (cfg_JOIN_INNER_TD_7269_cmds.cmd);
    cfg_JOIN_INNER_TD_7269_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8272_cmds;
    cfg_JOIN_INNER_TD_8272_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8272_gqe_join (cfg_JOIN_INNER_TD_8272_cmds.cmd);
    cfg_JOIN_INNER_TD_8272_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9969_cmds;
    cfg_JOIN_INNER_TD_9969_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9969_gqe_join (cfg_JOIN_INNER_TD_9969_cmds.cmd);
    cfg_JOIN_INNER_TD_9969_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5374;
    krnl_JOIN_INNER_TD_5374 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5374.setup(tbl_Project_TD_6931_output, tbl_JOIN_INNER_TD_6649_output, tbl_JOIN_INNER_TD_5374_output, cfg_JOIN_INNER_TD_5374_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6649;
    krnl_JOIN_INNER_TD_6649 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6649.setup(tbl_JOIN_INNER_TD_7269_output, tbl_Project_TD_7132_output, tbl_JOIN_INNER_TD_6649_output, cfg_JOIN_INNER_TD_6649_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7269;
    krnl_JOIN_INNER_TD_7269 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7269.setup(tbl_JOIN_INNER_TD_8272_output, tbl_Project_TD_8265_output, tbl_JOIN_INNER_TD_7269_output, cfg_JOIN_INNER_TD_7269_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8272;
    krnl_JOIN_INNER_TD_8272 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8272.setup(tbl_Project_TD_968_output, tbl_JOIN_INNER_TD_9969_output, tbl_JOIN_INNER_TD_8272_output, cfg_JOIN_INNER_TD_8272_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9969;
    krnl_JOIN_INNER_TD_9969 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9969.setup(tbl_Project_TD_10262_output, tbl_Project_TD_10703_output, tbl_JOIN_INNER_TD_9969_output, cfg_JOIN_INNER_TD_9969_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5374;
    trans_JOIN_INNER_TD_5374.setq(q_h);
    trans_JOIN_INNER_TD_5374.add(&(cfg_JOIN_INNER_TD_5374_cmds));
    transEngine trans_JOIN_INNER_TD_5374_out;
    trans_JOIN_INNER_TD_5374_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6649;
    trans_JOIN_INNER_TD_6649.setq(q_h);
    trans_JOIN_INNER_TD_6649.add(&(cfg_JOIN_INNER_TD_6649_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7269;
    trans_JOIN_INNER_TD_7269.setq(q_h);
    trans_JOIN_INNER_TD_7269.add(&(cfg_JOIN_INNER_TD_7269_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8272;
    trans_JOIN_INNER_TD_8272.setq(q_h);
    trans_JOIN_INNER_TD_8272.add(&(cfg_JOIN_INNER_TD_8272_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9969;
    trans_JOIN_INNER_TD_9969.setq(q_h);
    trans_JOIN_INNER_TD_9969.add(&(cfg_JOIN_INNER_TD_9969_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5374;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5374;
    std::vector<cl::Event> events_JOIN_INNER_TD_5374;
    events_h2d_wr_JOIN_INNER_TD_5374.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5374.resize(1);
    events_JOIN_INNER_TD_5374.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5374;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5374;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6649;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6649;
    std::vector<cl::Event> events_JOIN_INNER_TD_6649;
    events_h2d_wr_JOIN_INNER_TD_6649.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6649.resize(1);
    events_JOIN_INNER_TD_6649.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6649;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6649;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7269;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7269;
    std::vector<cl::Event> events_JOIN_INNER_TD_7269;
    events_h2d_wr_JOIN_INNER_TD_7269.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7269.resize(1);
    events_JOIN_INNER_TD_7269.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7269;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7269;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8272;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8272;
    std::vector<cl::Event> events_JOIN_INNER_TD_8272;
    events_h2d_wr_JOIN_INNER_TD_8272.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8272.resize(1);
    events_JOIN_INNER_TD_8272.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8272;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8272;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9969;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9969;
    std::vector<cl::Event> events_JOIN_INNER_TD_9969;
    events_h2d_wr_JOIN_INNER_TD_9969.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9969.resize(1);
    events_JOIN_INNER_TD_9969.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9969;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9969;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_560_s, tv_r_Filter_11_560_e;
    gettimeofday(&tv_r_Filter_11_560_s, 0);
    SW_Filter_TD_11561(tbl_SerializeFromObject_TD_12408_input, tbl_Filter_TD_11561_output);
    gettimeofday(&tv_r_Filter_11_560_e, 0);

    struct timeval tv_r_Project_10_180_s, tv_r_Project_10_180_e;
    gettimeofday(&tv_r_Project_10_180_s, 0);
    SW_Project_TD_10703(tbl_SerializeFromObject_TD_12416_input, tbl_Project_TD_10703_output);
    gettimeofday(&tv_r_Project_10_180_e, 0);

    struct timeval tv_r_Project_10_27_s, tv_r_Project_10_27_e;
    gettimeofday(&tv_r_Project_10_27_s, 0);
    SW_Project_TD_10262(tbl_Filter_TD_11561_output, tbl_Project_TD_10262_output);
    gettimeofday(&tv_r_Project_10_27_e, 0);

    struct timeval tv_r_Filter_9_739_s, tv_r_Filter_9_739_e;
    gettimeofday(&tv_r_Filter_9_739_s, 0);
    SW_Filter_TD_9196(tbl_SerializeFromObject_TD_10626_input, tbl_Filter_TD_9196_output);
    gettimeofday(&tv_r_Filter_9_739_e, 0);

    struct timeval tv_r_Project_9_551_s, tv_r_Project_9_551_e;
    gettimeofday(&tv_r_Project_9_551_s, 0);
    SW_Project_TD_968(tbl_SerializeFromObject_TD_11288_input, tbl_Project_TD_968_output);
    gettimeofday(&tv_r_Project_9_551_e, 0);

    struct timeval tv_r_JOIN_INNER_9_121_s, tv_r_JOIN_INNER_9_121_e;
    gettimeofday(&tv_r_JOIN_INNER_9_121_s, 0);
    trans_JOIN_INNER_TD_9969.add(&(tbl_Project_TD_10262_output));
    trans_JOIN_INNER_TD_9969.add(&(tbl_Project_TD_10703_output));
    trans_JOIN_INNER_TD_9969.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9969), &(events_h2d_wr_JOIN_INNER_TD_9969[0]));
    events_grp_JOIN_INNER_TD_9969.push_back(events_h2d_wr_JOIN_INNER_TD_9969[0]);
    krnl_JOIN_INNER_TD_9969.run(0, &(events_grp_JOIN_INNER_TD_9969), &(events_JOIN_INNER_TD_9969[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_121_e, 0);

    struct timeval tv_r_Project_8_265_s, tv_r_Project_8_265_e;
    gettimeofday(&tv_r_Project_8_265_s, 0);
    SW_Project_TD_8265(tbl_Filter_TD_9196_output, tbl_Project_TD_8265_output);
    gettimeofday(&tv_r_Project_8_265_e, 0);

    struct timeval tv_r_JOIN_INNER_8_966_s, tv_r_JOIN_INNER_8_966_e;
    gettimeofday(&tv_r_JOIN_INNER_8_966_s, 0);
    prev_events_grp_JOIN_INNER_TD_8272.push_back(events_h2d_wr_JOIN_INNER_TD_9969[0]);
    trans_JOIN_INNER_TD_8272.add(&(tbl_Project_TD_968_output));
    trans_JOIN_INNER_TD_8272.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8272), &(events_h2d_wr_JOIN_INNER_TD_8272[0]));
    events_grp_JOIN_INNER_TD_8272.push_back(events_h2d_wr_JOIN_INNER_TD_8272[0]);
    events_grp_JOIN_INNER_TD_8272.push_back(events_JOIN_INNER_TD_9969[0]);
    krnl_JOIN_INNER_TD_8272.run(0, &(events_grp_JOIN_INNER_TD_8272), &(events_JOIN_INNER_TD_8272[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_966_e, 0);

    struct timeval tv_r_Project_7_244_s, tv_r_Project_7_244_e;
    gettimeofday(&tv_r_Project_7_244_s, 0);
    SW_Project_TD_7132(tbl_SerializeFromObject_TD_9462_input, tbl_Project_TD_7132_output);
    gettimeofday(&tv_r_Project_7_244_e, 0);

    struct timeval tv_r_JOIN_INNER_7_970_s, tv_r_JOIN_INNER_7_970_e;
    gettimeofday(&tv_r_JOIN_INNER_7_970_s, 0);
    prev_events_grp_JOIN_INNER_TD_7269.push_back(events_h2d_wr_JOIN_INNER_TD_8272[0]);
    trans_JOIN_INNER_TD_7269.add(&(tbl_Project_TD_8265_output));
    trans_JOIN_INNER_TD_7269.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7269), &(events_h2d_wr_JOIN_INNER_TD_7269[0]));
    events_grp_JOIN_INNER_TD_7269.push_back(events_h2d_wr_JOIN_INNER_TD_7269[0]);
    events_grp_JOIN_INNER_TD_7269.push_back(events_JOIN_INNER_TD_8272[0]);
    krnl_JOIN_INNER_TD_7269.run(0, &(events_grp_JOIN_INNER_TD_7269), &(events_JOIN_INNER_TD_7269[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_970_e, 0);

    struct timeval tv_r_Project_6_84_s, tv_r_Project_6_84_e;
    gettimeofday(&tv_r_Project_6_84_s, 0);
    SW_Project_TD_6931(tbl_SerializeFromObject_TD_8583_input, tbl_Project_TD_6931_output);
    gettimeofday(&tv_r_Project_6_84_e, 0);

    struct timeval tv_r_JOIN_INNER_6_364_s, tv_r_JOIN_INNER_6_364_e;
    gettimeofday(&tv_r_JOIN_INNER_6_364_s, 0);
    prev_events_grp_JOIN_INNER_TD_6649.push_back(events_h2d_wr_JOIN_INNER_TD_7269[0]);
    trans_JOIN_INNER_TD_6649.add(&(tbl_Project_TD_7132_output));
    trans_JOIN_INNER_TD_6649.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6649), &(events_h2d_wr_JOIN_INNER_TD_6649[0]));
    events_grp_JOIN_INNER_TD_6649.push_back(events_h2d_wr_JOIN_INNER_TD_6649[0]);
    events_grp_JOIN_INNER_TD_6649.push_back(events_JOIN_INNER_TD_7269[0]);
    krnl_JOIN_INNER_TD_6649.run(0, &(events_grp_JOIN_INNER_TD_6649), &(events_JOIN_INNER_TD_6649[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_364_e, 0);

    struct timeval tv_r_Filter_5_426_s, tv_r_Filter_5_426_e;
    gettimeofday(&tv_r_Filter_5_426_s, 0);
    SW_Filter_TD_5299(tbl_SerializeFromObject_TD_664_input, tbl_Filter_TD_5299_output);
    gettimeofday(&tv_r_Filter_5_426_e, 0);

    struct timeval tv_r_Project_5_480_s, tv_r_Project_5_480_e;
    gettimeofday(&tv_r_Project_5_480_s, 0);
    SW_Project_TD_5813(tbl_SerializeFromObject_TD_7893_input, tbl_Project_TD_5813_output);
    gettimeofday(&tv_r_Project_5_480_e, 0);

    struct timeval tv_r_JOIN_INNER_5_423_s, tv_r_JOIN_INNER_5_423_e;
    gettimeofday(&tv_r_JOIN_INNER_5_423_s, 0);
    prev_events_grp_JOIN_INNER_TD_5374.push_back(events_h2d_wr_JOIN_INNER_TD_6649[0]);
    trans_JOIN_INNER_TD_5374.add(&(tbl_Project_TD_6931_output));
    trans_JOIN_INNER_TD_5374.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5374), &(events_h2d_wr_JOIN_INNER_TD_5374[0]));
    events_grp_JOIN_INNER_TD_5374.push_back(events_h2d_wr_JOIN_INNER_TD_5374[0]);
    events_grp_JOIN_INNER_TD_5374.push_back(events_JOIN_INNER_TD_6649[0]);
    krnl_JOIN_INNER_TD_5374.run(0, &(events_grp_JOIN_INNER_TD_5374), &(events_JOIN_INNER_TD_5374[0]));
    
    trans_JOIN_INNER_TD_5374_out.add(&(tbl_JOIN_INNER_TD_5374_output));
    trans_JOIN_INNER_TD_5374_out.dev2host(0, &(events_JOIN_INNER_TD_5374), &(events_d2h_rd_JOIN_INNER_TD_5374[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_423_e, 0);

    struct timeval tv_r_Project_4_230_s, tv_r_Project_4_230_e;
    gettimeofday(&tv_r_Project_4_230_s, 0);
    SW_Project_TD_4489(tbl_Filter_TD_5299_output, tbl_Project_TD_4489_output);
    gettimeofday(&tv_r_Project_4_230_e, 0);

    struct timeval tv_r_JOIN_INNER_4_505_s, tv_r_JOIN_INNER_4_505_e;
    gettimeofday(&tv_r_JOIN_INNER_4_505_s, 0);
    SW_JOIN_INNER_TD_4856(tbl_JOIN_INNER_TD_5374_output, tbl_Project_TD_5813_output, tbl_JOIN_INNER_TD_4856_output);
    gettimeofday(&tv_r_JOIN_INNER_4_505_e, 0);

    struct timeval tv_r_JOIN_INNER_3_72_s, tv_r_JOIN_INNER_3_72_e;
    gettimeofday(&tv_r_JOIN_INNER_3_72_s, 0);
    SW_JOIN_INNER_TD_3291(tbl_JOIN_INNER_TD_4856_output, tbl_Project_TD_4489_output, tbl_JOIN_INNER_TD_3291_output);
    gettimeofday(&tv_r_JOIN_INNER_3_72_e, 0);

    struct timeval tv_r_Project_2_754_s, tv_r_Project_2_754_e;
    gettimeofday(&tv_r_Project_2_754_s, 0);
    SW_Project_TD_2405(tbl_JOIN_INNER_TD_3291_output, tbl_Project_TD_2405_output);
    gettimeofday(&tv_r_Project_2_754_e, 0);

    struct timeval tv_r_Aggregate_1_695_s, tv_r_Aggregate_1_695_e;
    gettimeofday(&tv_r_Aggregate_1_695_s, 0);
    SW_Aggregate_TD_1745(tbl_Project_TD_2405_output, tbl_Aggregate_TD_1745_output);
    gettimeofday(&tv_r_Aggregate_1_695_e, 0);

    struct timeval tv_r_Sort_0_603_s, tv_r_Sort_0_603_e;
    gettimeofday(&tv_r_Sort_0_603_s, 0);
    SW_Sort_TD_0391(tbl_Aggregate_TD_1745_output, tbl_Sort_TD_0391_output);
    gettimeofday(&tv_r_Sort_0_603_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_560_s, &tv_r_Filter_11_560_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12408_input: " << tbl_SerializeFromObject_TD_12408_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_180_s, &tv_r_Project_10_180_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12416_input: " << tbl_SerializeFromObject_TD_12416_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_10: " << tvdiff(&tv_r_Project_10_27_s, &tv_r_Project_10_27_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11561_output: " << tbl_Filter_TD_11561_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_739_s, &tv_r_Filter_9_739_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10626_input: " << tbl_SerializeFromObject_TD_10626_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_9: " << tvdiff(&tv_r_Project_9_551_s, &tv_r_Project_9_551_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11288_input: " << tbl_SerializeFromObject_TD_11288_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_121_s, &tv_r_JOIN_INNER_9_121_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_10262_output: " << tbl_Project_TD_10262_output.getNumRow() << " " << "tbl_Project_TD_10703_output: " << tbl_Project_TD_10703_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_265_s, &tv_r_Project_8_265_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9196_output: " << tbl_Filter_TD_9196_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_966_s, &tv_r_JOIN_INNER_8_966_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9969_output: " << tbl_JOIN_INNER_TD_9969_output.getNumRow() << " " << "tbl_Project_TD_968_output: " << tbl_Project_TD_968_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_7: " << tvdiff(&tv_r_Project_7_244_s, &tv_r_Project_7_244_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9462_input: " << tbl_SerializeFromObject_TD_9462_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_970_s, &tv_r_JOIN_INNER_7_970_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8272_output: " << tbl_JOIN_INNER_TD_8272_output.getNumRow() << " " << "tbl_Project_TD_8265_output: " << tbl_Project_TD_8265_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_84_s, &tv_r_Project_6_84_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8583_input: " << tbl_SerializeFromObject_TD_8583_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_364_s, &tv_r_JOIN_INNER_6_364_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7269_output: " << tbl_JOIN_INNER_TD_7269_output.getNumRow() << " " << "tbl_Project_TD_7132_output: " << tbl_Project_TD_7132_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_426_s, &tv_r_Filter_5_426_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_664_input: " << tbl_SerializeFromObject_TD_664_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_480_s, &tv_r_Project_5_480_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7893_input: " << tbl_SerializeFromObject_TD_7893_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_423_s, &tv_r_JOIN_INNER_5_423_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6649_output: " << tbl_JOIN_INNER_TD_6649_output.getNumRow() << " " << "tbl_Project_TD_6931_output: " << tbl_Project_TD_6931_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_230_s, &tv_r_Project_4_230_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5299_output: " << tbl_Filter_TD_5299_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_505_s, &tv_r_JOIN_INNER_4_505_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5374_output: " << tbl_JOIN_INNER_TD_5374_output.getNumRow() << " " << "tbl_Project_TD_5813_output: " << tbl_Project_TD_5813_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_72_s, &tv_r_JOIN_INNER_3_72_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4856_output: " << tbl_JOIN_INNER_TD_4856_output.getNumRow() << " " << "tbl_Project_TD_4489_output: " << tbl_Project_TD_4489_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_754_s, &tv_r_Project_2_754_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3291_output: " << tbl_JOIN_INNER_TD_3291_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_695_s, &tv_r_Aggregate_1_695_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2405_output: " << tbl_Project_TD_2405_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_603_s, &tv_r_Sort_0_603_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1745_output: " << tbl_Aggregate_TD_1745_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 8.019813 * 1000 << "ms" << std::endl; 
    return 0; 
}
