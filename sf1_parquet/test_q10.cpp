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

#include "cfgFunc_q10.hpp" 
#include "q10.hpp" 

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
    std::cout << "NOTE:running query #10\n."; 
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
    Table tbl_Sort_TD_0489_output("tbl_Sort_TD_0489_output", 6100000, 5, "");
    tbl_Sort_TD_0489_output.allocateHost();
    Table tbl_Aggregate_TD_1525_output("tbl_Aggregate_TD_1525_output", 6100000, 5, "");
    tbl_Aggregate_TD_1525_output.allocateHost();
    Table tbl_JOIN_INNER_TD_251_output("tbl_JOIN_INNER_TD_251_output", 114347, 6, "");
    tbl_JOIN_INNER_TD_251_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3129_output("tbl_JOIN_INNER_TD_3129_output", 114347, 6, "");
    tbl_JOIN_INNER_TD_3129_output.allocateHost();
    Table tbl_Project_TD_3600_output("tbl_Project_TD_3600_output", 6100000, 2, "");
    tbl_Project_TD_3600_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4255_output("tbl_JOIN_INNER_TD_4255_output", 57111, 5, "");
    tbl_JOIN_INNER_TD_4255_output.allocateHost();
    Table tbl_Project_TD_4698_output("tbl_Project_TD_4698_output", 6100000, 3, "");
    tbl_Project_TD_4698_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5770_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5770_input_stringRowIDSubstitute = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5770_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5770_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5770_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5770_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5770_input;
    tbl_SerializeFromObject_TD_5770_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5770_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5770_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5770_input.allocateHost();
    tbl_SerializeFromObject_TD_5770_input.loadHost();
    Table tbl_Project_TD_5558_output("tbl_Project_TD_5558_output", 6100000, 4, "");
    tbl_Project_TD_5558_output.allocateHost();
    Table tbl_Project_TD_5254_output("tbl_Project_TD_5254_output", 6100000, 2, "");
    tbl_Project_TD_5254_output.allocateHost();
    Table tbl_Filter_TD_5890_output("tbl_Filter_TD_5890_output", 6100000, 3, "");
    tbl_Filter_TD_5890_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute = Table("customer", customer_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute.addCol("c_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_7679_input;
    tbl_SerializeFromObject_TD_7679_input = Table("customer", customer_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7679_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_7679_input.addCol("c_name", TPCH_READ_C_NAME_LEN+1);
    tbl_SerializeFromObject_TD_7679_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_7679_input.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_7679_input.allocateHost();
    tbl_SerializeFromObject_TD_7679_input.loadHost();
    Table tbl_Filter_TD_6111_output("tbl_Filter_TD_6111_output", 6100000, 2, "");
    tbl_Filter_TD_6111_output.allocateHost();
    Table tbl_SerializeFromObject_TD_666_input;
    tbl_SerializeFromObject_TD_666_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_666_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_666_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_666_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_666_input.addCol("l_returnflag", 4);
    tbl_SerializeFromObject_TD_666_input.allocateHost();
    tbl_SerializeFromObject_TD_666_input.loadHost();
    Table tbl_SerializeFromObject_TD_7832_input;
    tbl_SerializeFromObject_TD_7832_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_7832_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_7832_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_7832_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_7832_input.allocateHost();
    tbl_SerializeFromObject_TD_7832_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_251_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3129_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3600_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4255_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4698_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5558_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5254_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_251_cmds;
    cfg_JOIN_INNER_TD_251_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_251_gqe_join (cfg_JOIN_INNER_TD_251_cmds.cmd);
    cfg_JOIN_INNER_TD_251_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3129_cmds;
    cfg_JOIN_INNER_TD_3129_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3129_gqe_join (cfg_JOIN_INNER_TD_3129_cmds.cmd);
    cfg_JOIN_INNER_TD_3129_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4255_cmds;
    cfg_JOIN_INNER_TD_4255_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4255_gqe_join (cfg_JOIN_INNER_TD_4255_cmds.cmd);
    cfg_JOIN_INNER_TD_4255_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_251;
    krnl_JOIN_INNER_TD_251 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_251.setup(tbl_Project_TD_3600_output, tbl_JOIN_INNER_TD_3129_output, tbl_JOIN_INNER_TD_251_output, cfg_JOIN_INNER_TD_251_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3129;
    krnl_JOIN_INNER_TD_3129 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3129.setup(tbl_Project_TD_4698_output, tbl_JOIN_INNER_TD_4255_output, tbl_JOIN_INNER_TD_3129_output, cfg_JOIN_INNER_TD_3129_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4255;
    krnl_JOIN_INNER_TD_4255 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4255.setup(tbl_Project_TD_5254_output, tbl_Project_TD_5558_output, tbl_JOIN_INNER_TD_4255_output, cfg_JOIN_INNER_TD_4255_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_251;
    trans_JOIN_INNER_TD_251.setq(q_h);
    trans_JOIN_INNER_TD_251.add(&(cfg_JOIN_INNER_TD_251_cmds));
    transEngine trans_JOIN_INNER_TD_251_out;
    trans_JOIN_INNER_TD_251_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3129;
    trans_JOIN_INNER_TD_3129.setq(q_h);
    trans_JOIN_INNER_TD_3129.add(&(cfg_JOIN_INNER_TD_3129_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4255;
    trans_JOIN_INNER_TD_4255.setq(q_h);
    trans_JOIN_INNER_TD_4255.add(&(cfg_JOIN_INNER_TD_4255_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_251;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_251;
    std::vector<cl::Event> events_JOIN_INNER_TD_251;
    events_h2d_wr_JOIN_INNER_TD_251.resize(1);
    events_d2h_rd_JOIN_INNER_TD_251.resize(1);
    events_JOIN_INNER_TD_251.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_251;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_251;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3129;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3129;
    std::vector<cl::Event> events_JOIN_INNER_TD_3129;
    events_h2d_wr_JOIN_INNER_TD_3129.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3129.resize(1);
    events_JOIN_INNER_TD_3129.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3129;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3129;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4255;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4255;
    std::vector<cl::Event> events_JOIN_INNER_TD_4255;
    events_h2d_wr_JOIN_INNER_TD_4255.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4255.resize(1);
    events_JOIN_INNER_TD_4255.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4255;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4255;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_465_s, tv_r_Filter_6_465_e;
    gettimeofday(&tv_r_Filter_6_465_s, 0);
    SW_Filter_TD_6111(tbl_SerializeFromObject_TD_7832_input, tbl_Filter_TD_6111_output);
    gettimeofday(&tv_r_Filter_6_465_e, 0);

    struct timeval tv_r_Filter_5_694_s, tv_r_Filter_5_694_e;
    gettimeofday(&tv_r_Filter_5_694_s, 0);
    SW_Filter_TD_5890(tbl_SerializeFromObject_TD_666_input, tbl_Filter_TD_5890_output);
    gettimeofday(&tv_r_Filter_5_694_e, 0);

    struct timeval tv_r_Project_5_848_s, tv_r_Project_5_848_e;
    gettimeofday(&tv_r_Project_5_848_s, 0);
    SW_Project_TD_5254(tbl_Filter_TD_6111_output, tbl_Project_TD_5254_output);
    gettimeofday(&tv_r_Project_5_848_e, 0);

    struct timeval tv_r_Project_5_110_s, tv_r_Project_5_110_e;
    gettimeofday(&tv_r_Project_5_110_s, 0);
    SW_Project_TD_5558(tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute, tbl_Project_TD_5558_output);
    gettimeofday(&tv_r_Project_5_110_e, 0);

    struct timeval tv_r_Project_4_104_s, tv_r_Project_4_104_e;
    gettimeofday(&tv_r_Project_4_104_s, 0);
    SW_Project_TD_4698(tbl_Filter_TD_5890_output, tbl_Project_TD_4698_output);
    gettimeofday(&tv_r_Project_4_104_e, 0);

    struct timeval tv_r_JOIN_INNER_4_555_s, tv_r_JOIN_INNER_4_555_e;
    gettimeofday(&tv_r_JOIN_INNER_4_555_s, 0);
    trans_JOIN_INNER_TD_4255.add(&(tbl_Project_TD_5558_output));
    trans_JOIN_INNER_TD_4255.add(&(tbl_Project_TD_5254_output));
    trans_JOIN_INNER_TD_4255.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4255), &(events_h2d_wr_JOIN_INNER_TD_4255[0]));
    events_grp_JOIN_INNER_TD_4255.push_back(events_h2d_wr_JOIN_INNER_TD_4255[0]);
    krnl_JOIN_INNER_TD_4255.run(0, &(events_grp_JOIN_INNER_TD_4255), &(events_JOIN_INNER_TD_4255[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_555_e, 0);

    struct timeval tv_r_Project_3_165_s, tv_r_Project_3_165_e;
    gettimeofday(&tv_r_Project_3_165_s, 0);
    SW_Project_TD_3600(tbl_SerializeFromObject_TD_5770_input_stringRowIDSubstitute, tbl_Project_TD_3600_output);
    gettimeofday(&tv_r_Project_3_165_e, 0);

    struct timeval tv_r_JOIN_INNER_3_493_s, tv_r_JOIN_INNER_3_493_e;
    gettimeofday(&tv_r_JOIN_INNER_3_493_s, 0);
    prev_events_grp_JOIN_INNER_TD_3129.push_back(events_h2d_wr_JOIN_INNER_TD_4255[0]);
    trans_JOIN_INNER_TD_3129.add(&(tbl_Project_TD_4698_output));
    trans_JOIN_INNER_TD_3129.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3129), &(events_h2d_wr_JOIN_INNER_TD_3129[0]));
    events_grp_JOIN_INNER_TD_3129.push_back(events_h2d_wr_JOIN_INNER_TD_3129[0]);
    events_grp_JOIN_INNER_TD_3129.push_back(events_JOIN_INNER_TD_4255[0]);
    krnl_JOIN_INNER_TD_3129.run(0, &(events_grp_JOIN_INNER_TD_3129), &(events_JOIN_INNER_TD_3129[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_493_e, 0);

    struct timeval tv_r_JOIN_INNER_2_392_s, tv_r_JOIN_INNER_2_392_e;
    gettimeofday(&tv_r_JOIN_INNER_2_392_s, 0);
    prev_events_grp_JOIN_INNER_TD_251.push_back(events_h2d_wr_JOIN_INNER_TD_3129[0]);
    trans_JOIN_INNER_TD_251.add(&(tbl_Project_TD_3600_output));
    trans_JOIN_INNER_TD_251.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_251), &(events_h2d_wr_JOIN_INNER_TD_251[0]));
    events_grp_JOIN_INNER_TD_251.push_back(events_h2d_wr_JOIN_INNER_TD_251[0]);
    events_grp_JOIN_INNER_TD_251.push_back(events_JOIN_INNER_TD_3129[0]);
    krnl_JOIN_INNER_TD_251.run(0, &(events_grp_JOIN_INNER_TD_251), &(events_JOIN_INNER_TD_251[0]));
    
    trans_JOIN_INNER_TD_251_out.add(&(tbl_JOIN_INNER_TD_251_output));
    trans_JOIN_INNER_TD_251_out.dev2host(0, &(events_JOIN_INNER_TD_251), &(events_d2h_rd_JOIN_INNER_TD_251[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_392_e, 0);

    struct timeval tv_r_Aggregate_1_21_s, tv_r_Aggregate_1_21_e;
    gettimeofday(&tv_r_Aggregate_1_21_s, 0);
    SW_Aggregate_TD_1525(tbl_JOIN_INNER_TD_251_output, tbl_SerializeFromObject_TD_7679_input, tbl_SerializeFromObject_TD_5770_input, tbl_Aggregate_TD_1525_output);
    gettimeofday(&tv_r_Aggregate_1_21_e, 0);

    struct timeval tv_r_Sort_0_178_s, tv_r_Sort_0_178_e;
    gettimeofday(&tv_r_Sort_0_178_s, 0);
    SW_Sort_TD_0489(tbl_Aggregate_TD_1525_output, tbl_Sort_TD_0489_output);
    gettimeofday(&tv_r_Sort_0_178_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_465_s, &tv_r_Filter_6_465_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7832_input: " << tbl_SerializeFromObject_TD_7832_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_694_s, &tv_r_Filter_5_694_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_666_input: " << tbl_SerializeFromObject_TD_666_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_848_s, &tv_r_Project_5_848_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6111_output: " << tbl_Filter_TD_6111_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_110_s, &tv_r_Project_5_110_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_7679_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_104_s, &tv_r_Project_4_104_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5890_output: " << tbl_Filter_TD_5890_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_555_s, &tv_r_JOIN_INNER_4_555_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5558_output: " << tbl_Project_TD_5558_output.getNumRow() << " " << "tbl_Project_TD_5254_output: " << tbl_Project_TD_5254_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_165_s, &tv_r_Project_3_165_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5770_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5770_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_493_s, &tv_r_JOIN_INNER_3_493_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4255_output: " << tbl_JOIN_INNER_TD_4255_output.getNumRow() << " " << "tbl_Project_TD_4698_output: " << tbl_Project_TD_4698_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_392_s, &tv_r_JOIN_INNER_2_392_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3129_output: " << tbl_JOIN_INNER_TD_3129_output.getNumRow() << " " << "tbl_Project_TD_3600_output: " << tbl_Project_TD_3600_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_21_s, &tv_r_Aggregate_1_21_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_251_output: " << tbl_JOIN_INNER_TD_251_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_178_s, &tv_r_Sort_0_178_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1525_output: " << tbl_Aggregate_TD_1525_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 23.798918 * 1000 << "ms" << std::endl; 
    return 0; 
}
