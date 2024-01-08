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

#include "cfgFunc_q4.hpp" 
#include "q4.hpp" 

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
    std::cout << "NOTE:running query #4\n."; 
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
    Table tbl_Sort_TD_0973_output("tbl_Sort_TD_0973_output", 6100000, 2, "");
    tbl_Sort_TD_0973_output.allocateHost();
    Table tbl_Aggregate_TD_1683_output("tbl_Aggregate_TD_1683_output", 6100000, 2, "");
    tbl_Aggregate_TD_1683_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_2580_output("tbl_JOIN_LEFTSEMI_TD_2580_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_2580_output.allocateHost();
    Table tbl_Filter_TD_3593_output("tbl_Filter_TD_3593_output", 6100000, 2, "");
    tbl_Filter_TD_3593_output.allocateHost();
    Table tbl_Project_TD_3545_output("tbl_Project_TD_3545_output", -1, 1, "");
    tbl_Project_TD_3545_output.allocateHost();
    Table tbl_Project_TD_3545_emptyBufferB("tbl_Project_TD_3545_emptyBufferB", 1, 8, "");
    tbl_Project_TD_3545_emptyBufferB.allocateHost();
    Table tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute.addCol("o_orderpriority", 4, 1, 0);
    tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_4189_input;
    tbl_SerializeFromObject_TD_4189_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_4189_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_4189_input.addCol("o_orderpriority", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_4189_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_4189_input.allocateHost();
    tbl_SerializeFromObject_TD_4189_input.loadHost();
    Table tbl_Filter_TD_4936_output("tbl_Filter_TD_4936_output", 6100000, 1, "");
    tbl_Filter_TD_4936_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5818_input;
    tbl_SerializeFromObject_TD_5818_input = Table("lineitem", lineitem_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5818_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_5818_input.addCol("l_commitdate", 4);
    tbl_SerializeFromObject_TD_5818_input.addCol("l_receiptdate", 4);
    tbl_SerializeFromObject_TD_5818_input.allocateHost();
    tbl_SerializeFromObject_TD_5818_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_3545_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3545_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4936_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_3545_cmds;
    cfg_Project_TD_3545_cmds.allocateHost();
    get_cfg_dat_Project_TD_3545_gqe_join (cfg_Project_TD_3545_cmds.cmd);
    cfg_Project_TD_3545_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_3545;
    krnl_Project_TD_3545 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_3545.setup(tbl_Filter_TD_4936_output, tbl_Project_TD_3545_emptyBufferB, tbl_Project_TD_3545_output, cfg_Project_TD_3545_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_3545;
    trans_Project_TD_3545.setq(q_h);
    trans_Project_TD_3545.add(&(cfg_Project_TD_3545_cmds));
    transEngine trans_Project_TD_3545_out;
    trans_Project_TD_3545_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_3545;
    std::vector<cl::Event> events_d2h_rd_Project_TD_3545;
    std::vector<cl::Event> events_Project_TD_3545;
    events_h2d_wr_Project_TD_3545.resize(1);
    events_d2h_rd_Project_TD_3545.resize(1);
    events_Project_TD_3545.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_3545;
    std::vector<cl::Event> prev_events_grp_Project_TD_3545;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_981_s, tv_r_Filter_4_981_e;
    gettimeofday(&tv_r_Filter_4_981_s, 0);
    SW_Filter_TD_4936(tbl_SerializeFromObject_TD_5818_input, tbl_Filter_TD_4936_output);
    gettimeofday(&tv_r_Filter_4_981_e, 0);

    struct timeval tv_r_Project_3_795_s, tv_r_Project_3_795_e;
    gettimeofday(&tv_r_Project_3_795_s, 0);
    trans_Project_TD_3545.add(&(tbl_Filter_TD_4936_output));
    trans_Project_TD_3545.host2dev(0, &(prev_events_grp_Project_TD_3545), &(events_h2d_wr_Project_TD_3545[0]));
    events_grp_Project_TD_3545.push_back(events_h2d_wr_Project_TD_3545[0]);
    krnl_Project_TD_3545.run(0, &(events_grp_Project_TD_3545), &(events_Project_TD_3545[0]));
    
    trans_Project_TD_3545_out.add(&(tbl_Project_TD_3545_output));
    trans_Project_TD_3545_out.dev2host(0, &(events_Project_TD_3545), &(events_d2h_rd_Project_TD_3545[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_3_795_e, 0);

    struct timeval tv_r_Filter_3_696_s, tv_r_Filter_3_696_e;
    gettimeofday(&tv_r_Filter_3_696_s, 0);
    SW_Filter_TD_3593(tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute, tbl_Filter_TD_3593_output);
    gettimeofday(&tv_r_Filter_3_696_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_2_543_s, tv_r_JOIN_LEFTSEMI_2_543_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_543_s, 0);
    SW_JOIN_LEFTSEMI_TD_2580(tbl_Filter_TD_3593_output, tbl_Project_TD_3545_output, tbl_JOIN_LEFTSEMI_TD_2580_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_543_e, 0);

    struct timeval tv_r_Aggregate_1_14_s, tv_r_Aggregate_1_14_e;
    gettimeofday(&tv_r_Aggregate_1_14_s, 0);
    SW_Aggregate_TD_1683(tbl_JOIN_LEFTSEMI_TD_2580_output, tbl_SerializeFromObject_TD_4189_input, tbl_Aggregate_TD_1683_output);
    gettimeofday(&tv_r_Aggregate_1_14_e, 0);

    struct timeval tv_r_Sort_0_906_s, tv_r_Sort_0_906_e;
    gettimeofday(&tv_r_Sort_0_906_s, 0);
    SW_Sort_TD_0973(tbl_Aggregate_TD_1683_output, tbl_Sort_TD_0973_output);
    gettimeofday(&tv_r_Sort_0_906_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_981_s, &tv_r_Filter_4_981_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5818_input: " << tbl_SerializeFromObject_TD_5818_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_795_s, &tv_r_Project_3_795_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4936_output: " << tbl_Filter_TD_4936_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_696_s, &tv_r_Filter_3_696_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_2: " << tvdiff(&tv_r_JOIN_LEFTSEMI_2_543_s, &tv_r_JOIN_LEFTSEMI_2_543_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3593_output: " << tbl_Filter_TD_3593_output.getNumRow() << " " << "tbl_Project_TD_3545_output: " << tbl_Project_TD_3545_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_14_s, &tv_r_Aggregate_1_14_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_2580_output: " << tbl_JOIN_LEFTSEMI_TD_2580_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_906_s, &tv_r_Sort_0_906_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1683_output: " << tbl_Aggregate_TD_1683_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 17.664736 * 1000 << "ms" << std::endl; 
    return 0; 
}
