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
    Table tbl_Sort_TD_085_output("tbl_Sort_TD_085_output", 6100000, 5, "");
    tbl_Sort_TD_085_output.allocateHost();
    Table tbl_Aggregate_TD_1904_output("tbl_Aggregate_TD_1904_output", 6100000, 5, "");
    tbl_Aggregate_TD_1904_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2522_output("tbl_JOIN_INNER_TD_2522_output", 114347, 6, "");
    tbl_JOIN_INNER_TD_2522_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3902_output("tbl_JOIN_INNER_TD_3902_output", 114347, 6, "");
    tbl_JOIN_INNER_TD_3902_output.allocateHost();
    Table tbl_Project_TD_3656_output("tbl_Project_TD_3656_output", 6100000, 2, "");
    tbl_Project_TD_3656_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4739_output("tbl_JOIN_INNER_TD_4739_output", 57111, 5, "");
    tbl_JOIN_INNER_TD_4739_output.allocateHost();
    Table tbl_Project_TD_4725_output("tbl_Project_TD_4725_output", 6100000, 3, "");
    tbl_Project_TD_4725_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute.addCol("n_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_5681_input;
    tbl_SerializeFromObject_TD_5681_input = Table("nation", nation_n, 2, in_dir);
    tbl_SerializeFromObject_TD_5681_input.addCol("n_nationkey", 4);
    tbl_SerializeFromObject_TD_5681_input.addCol("n_name", TPCH_READ_NATION_LEN+1);
    tbl_SerializeFromObject_TD_5681_input.allocateHost();
    tbl_SerializeFromObject_TD_5681_input.loadHost();
    Table tbl_Project_TD_5231_output("tbl_Project_TD_5231_output", 6100000, 4, "");
    tbl_Project_TD_5231_output.allocateHost();
    Table tbl_Project_TD_5845_output("tbl_Project_TD_5845_output", 6100000, 2, "");
    tbl_Project_TD_5845_output.allocateHost();
    Table tbl_Filter_TD_5433_output("tbl_Filter_TD_5433_output", 6100000, 3, "");
    tbl_Filter_TD_5433_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute = Table("customer", customer_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.addCol("c_name", 4, 1, 0);
    tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_7497_input;
    tbl_SerializeFromObject_TD_7497_input = Table("customer", customer_n, 4, in_dir);
    tbl_SerializeFromObject_TD_7497_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_7497_input.addCol("c_name", TPCH_READ_C_NAME_LEN+1);
    tbl_SerializeFromObject_TD_7497_input.addCol("c_nationkey", 4);
    tbl_SerializeFromObject_TD_7497_input.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_7497_input.allocateHost();
    tbl_SerializeFromObject_TD_7497_input.loadHost();
    Table tbl_Filter_TD_6720_output("tbl_Filter_TD_6720_output", 6100000, 2, "");
    tbl_Filter_TD_6720_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6108_input;
    tbl_SerializeFromObject_TD_6108_input = Table("lineitem", lineitem_n, 4, in_dir);
    tbl_SerializeFromObject_TD_6108_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_6108_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_6108_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_6108_input.addCol("l_returnflag", 4);
    tbl_SerializeFromObject_TD_6108_input.allocateHost();
    tbl_SerializeFromObject_TD_6108_input.loadHost();
    Table tbl_SerializeFromObject_TD_798_input;
    tbl_SerializeFromObject_TD_798_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_798_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_798_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_798_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_798_input.allocateHost();
    tbl_SerializeFromObject_TD_798_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2522_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3902_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3656_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4739_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_4725_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5231_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_5845_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2522_cmds;
    cfg_JOIN_INNER_TD_2522_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2522_gqe_join (cfg_JOIN_INNER_TD_2522_cmds.cmd);
    cfg_JOIN_INNER_TD_2522_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3902_cmds;
    cfg_JOIN_INNER_TD_3902_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3902_gqe_join (cfg_JOIN_INNER_TD_3902_cmds.cmd);
    cfg_JOIN_INNER_TD_3902_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4739_cmds;
    cfg_JOIN_INNER_TD_4739_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4739_gqe_join (cfg_JOIN_INNER_TD_4739_cmds.cmd);
    cfg_JOIN_INNER_TD_4739_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2522;
    krnl_JOIN_INNER_TD_2522 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2522.setup(tbl_Project_TD_3656_output, tbl_JOIN_INNER_TD_3902_output, tbl_JOIN_INNER_TD_2522_output, cfg_JOIN_INNER_TD_2522_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3902;
    krnl_JOIN_INNER_TD_3902 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3902.setup(tbl_Project_TD_4725_output, tbl_JOIN_INNER_TD_4739_output, tbl_JOIN_INNER_TD_3902_output, cfg_JOIN_INNER_TD_3902_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4739;
    krnl_JOIN_INNER_TD_4739 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4739.setup(tbl_Project_TD_5845_output, tbl_Project_TD_5231_output, tbl_JOIN_INNER_TD_4739_output, cfg_JOIN_INNER_TD_4739_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2522;
    trans_JOIN_INNER_TD_2522.setq(q_h);
    trans_JOIN_INNER_TD_2522.add(&(cfg_JOIN_INNER_TD_2522_cmds));
    transEngine trans_JOIN_INNER_TD_2522_out;
    trans_JOIN_INNER_TD_2522_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3902;
    trans_JOIN_INNER_TD_3902.setq(q_h);
    trans_JOIN_INNER_TD_3902.add(&(cfg_JOIN_INNER_TD_3902_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4739;
    trans_JOIN_INNER_TD_4739.setq(q_h);
    trans_JOIN_INNER_TD_4739.add(&(cfg_JOIN_INNER_TD_4739_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2522;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2522;
    std::vector<cl::Event> events_JOIN_INNER_TD_2522;
    events_h2d_wr_JOIN_INNER_TD_2522.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2522.resize(1);
    events_JOIN_INNER_TD_2522.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2522;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2522;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3902;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3902;
    std::vector<cl::Event> events_JOIN_INNER_TD_3902;
    events_h2d_wr_JOIN_INNER_TD_3902.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3902.resize(1);
    events_JOIN_INNER_TD_3902.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3902;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3902;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4739;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4739;
    std::vector<cl::Event> events_JOIN_INNER_TD_4739;
    events_h2d_wr_JOIN_INNER_TD_4739.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4739.resize(1);
    events_JOIN_INNER_TD_4739.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4739;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4739;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_994_s, tv_r_Filter_6_994_e;
    gettimeofday(&tv_r_Filter_6_994_s, 0);
    SW_Filter_TD_6720(tbl_SerializeFromObject_TD_798_input, tbl_Filter_TD_6720_output);
    gettimeofday(&tv_r_Filter_6_994_e, 0);

    struct timeval tv_r_Filter_5_288_s, tv_r_Filter_5_288_e;
    gettimeofday(&tv_r_Filter_5_288_s, 0);
    SW_Filter_TD_5433(tbl_SerializeFromObject_TD_6108_input, tbl_Filter_TD_5433_output);
    gettimeofday(&tv_r_Filter_5_288_e, 0);

    struct timeval tv_r_Project_5_546_s, tv_r_Project_5_546_e;
    gettimeofday(&tv_r_Project_5_546_s, 0);
    SW_Project_TD_5845(tbl_Filter_TD_6720_output, tbl_Project_TD_5845_output);
    gettimeofday(&tv_r_Project_5_546_e, 0);

    struct timeval tv_r_Project_5_218_s, tv_r_Project_5_218_e;
    gettimeofday(&tv_r_Project_5_218_s, 0);
    SW_Project_TD_5231(tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute, tbl_Project_TD_5231_output);
    gettimeofday(&tv_r_Project_5_218_e, 0);

    struct timeval tv_r_Project_4_150_s, tv_r_Project_4_150_e;
    gettimeofday(&tv_r_Project_4_150_s, 0);
    SW_Project_TD_4725(tbl_Filter_TD_5433_output, tbl_Project_TD_4725_output);
    gettimeofday(&tv_r_Project_4_150_e, 0);

    struct timeval tv_r_JOIN_INNER_4_863_s, tv_r_JOIN_INNER_4_863_e;
    gettimeofday(&tv_r_JOIN_INNER_4_863_s, 0);
    trans_JOIN_INNER_TD_4739.add(&(tbl_Project_TD_5231_output));
    trans_JOIN_INNER_TD_4739.add(&(tbl_Project_TD_5845_output));
    trans_JOIN_INNER_TD_4739.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4739), &(events_h2d_wr_JOIN_INNER_TD_4739[0]));
    events_grp_JOIN_INNER_TD_4739.push_back(events_h2d_wr_JOIN_INNER_TD_4739[0]);
    krnl_JOIN_INNER_TD_4739.run(0, &(events_grp_JOIN_INNER_TD_4739), &(events_JOIN_INNER_TD_4739[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_863_e, 0);

    struct timeval tv_r_Project_3_646_s, tv_r_Project_3_646_e;
    gettimeofday(&tv_r_Project_3_646_s, 0);
    SW_Project_TD_3656(tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute, tbl_Project_TD_3656_output);
    gettimeofday(&tv_r_Project_3_646_e, 0);

    struct timeval tv_r_JOIN_INNER_3_281_s, tv_r_JOIN_INNER_3_281_e;
    gettimeofday(&tv_r_JOIN_INNER_3_281_s, 0);
    prev_events_grp_JOIN_INNER_TD_3902.push_back(events_h2d_wr_JOIN_INNER_TD_4739[0]);
    trans_JOIN_INNER_TD_3902.add(&(tbl_Project_TD_4725_output));
    trans_JOIN_INNER_TD_3902.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3902), &(events_h2d_wr_JOIN_INNER_TD_3902[0]));
    events_grp_JOIN_INNER_TD_3902.push_back(events_h2d_wr_JOIN_INNER_TD_3902[0]);
    events_grp_JOIN_INNER_TD_3902.push_back(events_JOIN_INNER_TD_4739[0]);
    krnl_JOIN_INNER_TD_3902.run(0, &(events_grp_JOIN_INNER_TD_3902), &(events_JOIN_INNER_TD_3902[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_281_e, 0);

    struct timeval tv_r_JOIN_INNER_2_135_s, tv_r_JOIN_INNER_2_135_e;
    gettimeofday(&tv_r_JOIN_INNER_2_135_s, 0);
    prev_events_grp_JOIN_INNER_TD_2522.push_back(events_h2d_wr_JOIN_INNER_TD_3902[0]);
    trans_JOIN_INNER_TD_2522.add(&(tbl_Project_TD_3656_output));
    trans_JOIN_INNER_TD_2522.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2522), &(events_h2d_wr_JOIN_INNER_TD_2522[0]));
    events_grp_JOIN_INNER_TD_2522.push_back(events_h2d_wr_JOIN_INNER_TD_2522[0]);
    events_grp_JOIN_INNER_TD_2522.push_back(events_JOIN_INNER_TD_3902[0]);
    krnl_JOIN_INNER_TD_2522.run(0, &(events_grp_JOIN_INNER_TD_2522), &(events_JOIN_INNER_TD_2522[0]));
    
    trans_JOIN_INNER_TD_2522_out.add(&(tbl_JOIN_INNER_TD_2522_output));
    trans_JOIN_INNER_TD_2522_out.dev2host(0, &(events_JOIN_INNER_TD_2522), &(events_d2h_rd_JOIN_INNER_TD_2522[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_135_e, 0);

    struct timeval tv_r_Aggregate_1_640_s, tv_r_Aggregate_1_640_e;
    gettimeofday(&tv_r_Aggregate_1_640_s, 0);
    SW_Aggregate_TD_1904(tbl_JOIN_INNER_TD_2522_output, tbl_SerializeFromObject_TD_7497_input, tbl_SerializeFromObject_TD_5681_input, tbl_Aggregate_TD_1904_output);
    gettimeofday(&tv_r_Aggregate_1_640_e, 0);

    struct timeval tv_r_Sort_0_381_s, tv_r_Sort_0_381_e;
    gettimeofday(&tv_r_Sort_0_381_s, 0);
    SW_Sort_TD_085(tbl_Aggregate_TD_1904_output, tbl_Sort_TD_085_output);
    gettimeofday(&tv_r_Sort_0_381_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_994_s, &tv_r_Filter_6_994_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_798_input: " << tbl_SerializeFromObject_TD_798_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_288_s, &tv_r_Filter_5_288_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6108_input: " << tbl_SerializeFromObject_TD_6108_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_546_s, &tv_r_Project_5_546_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6720_output: " << tbl_Filter_TD_6720_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_218_s, &tv_r_Project_5_218_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_150_s, &tv_r_Project_4_150_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5433_output: " << tbl_Filter_TD_5433_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_863_s, &tv_r_JOIN_INNER_4_863_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5231_output: " << tbl_Project_TD_5231_output.getNumRow() << " " << "tbl_Project_TD_5845_output: " << tbl_Project_TD_5845_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_646_s, &tv_r_Project_3_646_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_281_s, &tv_r_JOIN_INNER_3_281_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4739_output: " << tbl_JOIN_INNER_TD_4739_output.getNumRow() << " " << "tbl_Project_TD_4725_output: " << tbl_Project_TD_4725_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_135_s, &tv_r_JOIN_INNER_2_135_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3902_output: " << tbl_JOIN_INNER_TD_3902_output.getNumRow() << " " << "tbl_Project_TD_3656_output: " << tbl_Project_TD_3656_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_640_s, &tv_r_Aggregate_1_640_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2522_output: " << tbl_JOIN_INNER_TD_2522_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_381_s, &tv_r_Sort_0_381_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1904_output: " << tbl_Aggregate_TD_1904_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 15.560469 * 1000 << "ms" << std::endl; 
    return 0; 
}
