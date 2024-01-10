// number of overlays (w/o fusion): 1 
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

#include "cfgFunc_q17.hpp" 
#include "q17.hpp" 

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
    std::cout << "NOTE:running query #17\n."; 
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
    Table tbl_Aggregate_TD_0973_output("tbl_Aggregate_TD_0973_output", 6100000, 1, "");
    tbl_Aggregate_TD_0973_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1952_output("tbl_JOIN_INNER_TD_1952_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_1952_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2649_output("tbl_JOIN_INNER_TD_2649_output", 1507, 3, "");
    tbl_JOIN_INNER_TD_2649_output.allocateHost();
    Table tbl_Aggregate_TD_3395_output("tbl_Aggregate_TD_3395_output", 6100000, 2, "");
    tbl_Aggregate_TD_3395_output.allocateHost();
    Table tbl_Project_TD_364_output("tbl_Project_TD_364_output", 6100000, 3, "");
    tbl_Project_TD_364_output.allocateHost();
    Table tbl_Project_TD_345_output("tbl_Project_TD_345_output", 6100000, 1, "");
    tbl_Project_TD_345_output.allocateHost();
    Table tbl_Project_TD_4903_output("tbl_Project_TD_4903_output", 6100000, 2, "");
    tbl_Project_TD_4903_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5709_input;
    tbl_SerializeFromObject_TD_5709_input = Table("lineitem", lineitem_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5709_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_5709_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_5709_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_5709_input.allocateHost();
    tbl_SerializeFromObject_TD_5709_input.loadHost();
    Table tbl_Filter_TD_4323_output("tbl_Filter_TD_4323_output", 6100000, 1, "");
    tbl_Filter_TD_4323_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6483_input;
    tbl_SerializeFromObject_TD_6483_input = Table("lineitem", lineitem_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6483_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_6483_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_6483_input.allocateHost();
    tbl_SerializeFromObject_TD_6483_input.loadHost();
    Table tbl_SerializeFromObject_TD_5815_input;
    tbl_SerializeFromObject_TD_5815_input = Table("part", part_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5815_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_5815_input.addCol("p_brand", TPCH_READ_P_BRND_LEN+1);
    tbl_SerializeFromObject_TD_5815_input.addCol("p_container", TPCH_READ_P_CNTR_LEN+1);
    tbl_SerializeFromObject_TD_5815_input.allocateHost();
    tbl_SerializeFromObject_TD_5815_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2649_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_364_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_345_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2649_cmds;
    cfg_JOIN_INNER_TD_2649_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2649_gqe_join (cfg_JOIN_INNER_TD_2649_cmds.cmd);
    cfg_JOIN_INNER_TD_2649_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2649;
    krnl_JOIN_INNER_TD_2649 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2649.setup(tbl_Project_TD_345_output, tbl_Project_TD_364_output, tbl_JOIN_INNER_TD_2649_output, cfg_JOIN_INNER_TD_2649_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2649;
    trans_JOIN_INNER_TD_2649.setq(q_h);
    trans_JOIN_INNER_TD_2649.add(&(cfg_JOIN_INNER_TD_2649_cmds));
    transEngine trans_JOIN_INNER_TD_2649_out;
    trans_JOIN_INNER_TD_2649_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2649;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2649;
    std::vector<cl::Event> events_JOIN_INNER_TD_2649;
    events_h2d_wr_JOIN_INNER_TD_2649.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2649.resize(1);
    events_JOIN_INNER_TD_2649.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2649;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2649;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_278_s, tv_r_Filter_4_278_e;
    gettimeofday(&tv_r_Filter_4_278_s, 0);
    SW_Filter_TD_4323(tbl_SerializeFromObject_TD_5815_input, tbl_Filter_TD_4323_output);
    gettimeofday(&tv_r_Filter_4_278_e, 0);

    struct timeval tv_r_Project_4_62_s, tv_r_Project_4_62_e;
    gettimeofday(&tv_r_Project_4_62_s, 0);
    SW_Project_TD_4903(tbl_SerializeFromObject_TD_6483_input, tbl_Project_TD_4903_output);
    gettimeofday(&tv_r_Project_4_62_e, 0);

    struct timeval tv_r_Project_3_435_s, tv_r_Project_3_435_e;
    gettimeofday(&tv_r_Project_3_435_s, 0);
    SW_Project_TD_345(tbl_Filter_TD_4323_output, tbl_Project_TD_345_output);
    gettimeofday(&tv_r_Project_3_435_e, 0);

    struct timeval tv_r_Project_3_107_s, tv_r_Project_3_107_e;
    gettimeofday(&tv_r_Project_3_107_s, 0);
    SW_Project_TD_364(tbl_SerializeFromObject_TD_5709_input, tbl_Project_TD_364_output);
    gettimeofday(&tv_r_Project_3_107_e, 0);

    struct timeval tv_r_Aggregate_3_744_s, tv_r_Aggregate_3_744_e;
    gettimeofday(&tv_r_Aggregate_3_744_s, 0);
    SW_Aggregate_TD_3395(tbl_Project_TD_4903_output, tbl_Aggregate_TD_3395_output);
    gettimeofday(&tv_r_Aggregate_3_744_e, 0);

    struct timeval tv_r_JOIN_INNER_2_982_s, tv_r_JOIN_INNER_2_982_e;
    gettimeofday(&tv_r_JOIN_INNER_2_982_s, 0);
    trans_JOIN_INNER_TD_2649.add(&(tbl_Project_TD_364_output));
    trans_JOIN_INNER_TD_2649.add(&(tbl_Project_TD_345_output));
    trans_JOIN_INNER_TD_2649.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2649), &(events_h2d_wr_JOIN_INNER_TD_2649[0]));
    events_grp_JOIN_INNER_TD_2649.push_back(events_h2d_wr_JOIN_INNER_TD_2649[0]);
    krnl_JOIN_INNER_TD_2649.run(0, &(events_grp_JOIN_INNER_TD_2649), &(events_JOIN_INNER_TD_2649[0]));
    
    trans_JOIN_INNER_TD_2649_out.add(&(tbl_JOIN_INNER_TD_2649_output));
    trans_JOIN_INNER_TD_2649_out.dev2host(0, &(events_JOIN_INNER_TD_2649), &(events_d2h_rd_JOIN_INNER_TD_2649[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_982_e, 0);

    struct timeval tv_r_JOIN_INNER_1_723_s, tv_r_JOIN_INNER_1_723_e;
    gettimeofday(&tv_r_JOIN_INNER_1_723_s, 0);
    SW_JOIN_INNER_TD_1952(tbl_JOIN_INNER_TD_2649_output, tbl_Aggregate_TD_3395_output, tbl_JOIN_INNER_TD_1952_output);
    gettimeofday(&tv_r_JOIN_INNER_1_723_e, 0);

    struct timeval tv_r_Aggregate_0_646_s, tv_r_Aggregate_0_646_e;
    gettimeofday(&tv_r_Aggregate_0_646_s, 0);
    SW_Aggregate_TD_0973(tbl_JOIN_INNER_TD_1952_output, tbl_Aggregate_TD_0973_output);
    gettimeofday(&tv_r_Aggregate_0_646_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_278_s, &tv_r_Filter_4_278_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5815_input: " << tbl_SerializeFromObject_TD_5815_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_62_s, &tv_r_Project_4_62_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6483_input: " << tbl_SerializeFromObject_TD_6483_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_435_s, &tv_r_Project_3_435_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4323_output: " << tbl_Filter_TD_4323_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_107_s, &tv_r_Project_3_107_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5709_input: " << tbl_SerializeFromObject_TD_5709_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_744_s, &tv_r_Aggregate_3_744_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_4903_output: " << tbl_Project_TD_4903_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_982_s, &tv_r_JOIN_INNER_2_982_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_364_output: " << tbl_Project_TD_364_output.getNumRow() << " " << "tbl_Project_TD_345_output: " << tbl_Project_TD_345_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_723_s, &tv_r_JOIN_INNER_1_723_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2649_output: " << tbl_JOIN_INNER_TD_2649_output.getNumRow() << " " << "tbl_Aggregate_TD_3395_output: " << tbl_Aggregate_TD_3395_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_646_s, &tv_r_Aggregate_0_646_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1952_output: " << tbl_JOIN_INNER_TD_1952_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 16.660023 * 1000 << "ms" << std::endl; 
    return 0; 
}
