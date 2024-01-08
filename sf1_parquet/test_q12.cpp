// number of overlays (w/o fusion): 3 
// number of overlays (w/ fusion): 1 
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

#include "cfgFunc_q12.hpp" 
#include "q12.hpp" 

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
    std::cout << "NOTE:running query #12\n."; 
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
    Table tbl_Sort_TD_0933_output("tbl_Sort_TD_0933_output", 6100000, 3, "");
    tbl_Sort_TD_0933_output.allocateHost();
    Table tbl_Aggregate_TD_1319_output("tbl_Aggregate_TD_1319_output", 6100000, 3, "");
    tbl_Aggregate_TD_1319_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2994_output("tbl_JOIN_INNER_TD_2994_output", 31211, 2, "");
    tbl_JOIN_INNER_TD_2994_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute.addCol("o_orderpriority", 4, 1, 0);
    tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5544_input;
    tbl_SerializeFromObject_TD_5544_input = Table("orders", orders_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5544_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_5544_input.addCol("o_orderpriority", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_5544_input.allocateHost();
    tbl_SerializeFromObject_TD_5544_input.loadHost();
    Table tbl_Filter_TD_4748_output("tbl_Filter_TD_4748_output", 6100000, 2, "");
    tbl_Filter_TD_4748_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5537_input;
    tbl_SerializeFromObject_TD_5537_input = Table("lineitem", lineitem_n, 5, in_dir);
    tbl_SerializeFromObject_TD_5537_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_5537_input.addCol("l_shipmode", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_5537_input.addCol("l_commitdate", 4);
    tbl_SerializeFromObject_TD_5537_input.addCol("l_receiptdate", 4);
    tbl_SerializeFromObject_TD_5537_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_5537_input.allocateHost();
    tbl_SerializeFromObject_TD_5537_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2994_output.allocateDevBuffer(context_h, 32);
    tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4748_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2994_cmds;
    cfg_JOIN_INNER_TD_2994_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2994_gqe_join (cfg_JOIN_INNER_TD_2994_cmds.cmd);
    cfg_JOIN_INNER_TD_2994_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2994;
    krnl_JOIN_INNER_TD_2994 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2994.setup(tbl_Filter_TD_4748_output, tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute, tbl_JOIN_INNER_TD_2994_output, cfg_JOIN_INNER_TD_2994_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2994;
    trans_JOIN_INNER_TD_2994.setq(q_h);
    trans_JOIN_INNER_TD_2994.add(&(cfg_JOIN_INNER_TD_2994_cmds));
    trans_JOIN_INNER_TD_2994.add(&(tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute));
    transEngine trans_JOIN_INNER_TD_2994_out;
    trans_JOIN_INNER_TD_2994_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2994;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2994;
    std::vector<cl::Event> events_JOIN_INNER_TD_2994;
    events_h2d_wr_JOIN_INNER_TD_2994.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2994.resize(1);
    events_JOIN_INNER_TD_2994.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2994;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2994;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_101_s, tv_r_Filter_4_101_e;
    gettimeofday(&tv_r_Filter_4_101_s, 0);
    SW_Filter_TD_4748(tbl_SerializeFromObject_TD_5537_input, tbl_Filter_TD_4748_output);
    gettimeofday(&tv_r_Filter_4_101_e, 0);

    struct timeval tv_r_JOIN_INNER_2_815_s, tv_r_JOIN_INNER_2_815_e;
    gettimeofday(&tv_r_JOIN_INNER_2_815_s, 0);
    trans_JOIN_INNER_TD_2994.add(&(tbl_Filter_TD_4748_output));
    trans_JOIN_INNER_TD_2994.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2994), &(events_h2d_wr_JOIN_INNER_TD_2994[0]));
    events_grp_JOIN_INNER_TD_2994.push_back(events_h2d_wr_JOIN_INNER_TD_2994[0]);
    krnl_JOIN_INNER_TD_2994.run(0, &(events_grp_JOIN_INNER_TD_2994), &(events_JOIN_INNER_TD_2994[0]));
    
    trans_JOIN_INNER_TD_2994_out.add(&(tbl_JOIN_INNER_TD_2994_output));
    trans_JOIN_INNER_TD_2994_out.dev2host(0, &(events_JOIN_INNER_TD_2994), &(events_d2h_rd_JOIN_INNER_TD_2994[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_815_e, 0);

    struct timeval tv_r_Aggregate_1_93_s, tv_r_Aggregate_1_93_e;
    gettimeofday(&tv_r_Aggregate_1_93_s, 0);
    SW_Aggregate_TD_1319(tbl_JOIN_INNER_TD_2994_output, tbl_SerializeFromObject_TD_5544_input, tbl_SerializeFromObject_TD_5537_input, tbl_Aggregate_TD_1319_output);
    gettimeofday(&tv_r_Aggregate_1_93_e, 0);

    struct timeval tv_r_Sort_0_447_s, tv_r_Sort_0_447_e;
    gettimeofday(&tv_r_Sort_0_447_s, 0);
    SW_Sort_TD_0933(tbl_Aggregate_TD_1319_output, tbl_Sort_TD_0933_output);
    gettimeofday(&tv_r_Sort_0_447_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_101_s, &tv_r_Filter_4_101_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5537_input: " << tbl_SerializeFromObject_TD_5537_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_815_s, &tv_r_JOIN_INNER_2_815_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5544_input_stringRowIDSubstitute.getNumRow() << " " << "tbl_Filter_TD_4748_output: " << tbl_Filter_TD_4748_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_93_s, &tv_r_Aggregate_1_93_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2994_output: " << tbl_JOIN_INNER_TD_2994_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_447_s, &tv_r_Sort_0_447_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1319_output: " << tbl_Aggregate_TD_1319_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 32.942078 * 1000 << "ms" << std::endl; 
    return 0; 
}
