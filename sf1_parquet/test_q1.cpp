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

#include "cfgFunc_q1.hpp" 
#include "q1.hpp" 

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
    std::cout << "NOTE:running query #1\n."; 
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
    cl::Device device_a = devices[1]; 
    // Create context_a and command queue for selected device 
    cl::Context context_a(device_a); 
    cl::CommandQueue q_a(context_a, device_a, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE); 
    std::string devName_a = device_a.getInfo<CL_DEVICE_NAME>(); 
    std::cout << "Selected Device " << devName_a << "\n"; 
    cl::Program::Binaries xclBins_a = xcl::import_binary_file(xclbin_path_a); 
    std::vector<cl::Device> devices_a; 
    devices_a.push_back(device_a); 
    cl::Program program_a(context_a, devices_a, xclBins_a); 
    // ****************************** Tables **************************** // 
    Table tbl_Sort_TD_0839_output("tbl_Sort_TD_0839_output", 6100000, 10, "");
    tbl_Sort_TD_0839_output.allocateHost();
    Table tbl_Aggregate_TD_182_output_preprocess("tbl_Aggregate_TD_182_output_preprocess", 10, 16, "");
    tbl_Aggregate_TD_182_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_182_output("tbl_Aggregate_TD_182_output", 10, 10, "");
    tbl_Aggregate_TD_182_output.allocateHost();
    Table tbl_Project_TD_2944_output("tbl_Project_TD_2944_output", 6100000, 6, "");
    tbl_Project_TD_2944_output.allocateHost();
    Table tbl_Filter_TD_3203_output("tbl_Filter_TD_3203_output", 6100000, 6, "");
    tbl_Filter_TD_3203_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute = Table("lineitem", lineitem_n, 7, in_dir);
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.addCol("l_tax", 4);
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.addCol("l_returnflag", 4);
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.addCol("l_linestatus", 4);
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_4178_input;
    tbl_SerializeFromObject_TD_4178_input = Table("lineitem", lineitem_n, 7, in_dir);
    tbl_SerializeFromObject_TD_4178_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_4178_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_4178_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_4178_input.addCol("l_tax", 4);
    tbl_SerializeFromObject_TD_4178_input.addCol("l_returnflag", 4);
    tbl_SerializeFromObject_TD_4178_input.addCol("l_linestatus", 4);
    tbl_SerializeFromObject_TD_4178_input.addCol("l_shipdate", 4);
    tbl_SerializeFromObject_TD_4178_input.allocateHost();
    tbl_SerializeFromObject_TD_4178_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_182_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Project_TD_2944_output.allocateDevBuffer(context_a, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_182_cmds;
    cfg_Aggregate_TD_182_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_182_gqe_aggr(cfg_Aggregate_TD_182_cmds.cmd);
    cfg_Aggregate_TD_182_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_182_cmds_out;
    cfg_Aggregate_TD_182_cmds_out.allocateHost();
    cfg_Aggregate_TD_182_cmds_out.allocateDevBuffer(context_a, 33);
    // *************************** Kernel Setup ************************* // 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_182;
    krnl_Aggregate_TD_182 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_182.setup(tbl_Project_TD_2944_output, tbl_Aggregate_TD_182_output_preprocess, cfg_Aggregate_TD_182_cmds, cfg_Aggregate_TD_182_cmds_out, buftmp_a);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_182;
    trans_Aggregate_TD_182.setq(q_a);
    trans_Aggregate_TD_182.add(&(cfg_Aggregate_TD_182_cmds));
    transEngine trans_Aggregate_TD_182_out;
    trans_Aggregate_TD_182_out.setq(q_a);
    q_a.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_182;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_182;
    std::vector<cl::Event> events_Aggregate_TD_182;
    events_h2d_wr_Aggregate_TD_182.resize(1);
    events_d2h_rd_Aggregate_TD_182.resize(1);
    events_Aggregate_TD_182.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_182;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_182;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_3_832_s, tv_r_Filter_3_832_e;
    gettimeofday(&tv_r_Filter_3_832_s, 0);
    SW_Filter_TD_3203(tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute, tbl_Filter_TD_3203_output);
    gettimeofday(&tv_r_Filter_3_832_e, 0);

    struct timeval tv_r_Project_2_265_s, tv_r_Project_2_265_e;
    gettimeofday(&tv_r_Project_2_265_s, 0);
    SW_Project_TD_2944(tbl_Filter_TD_3203_output, tbl_SerializeFromObject_TD_4178_input, tbl_Project_TD_2944_output);
    gettimeofday(&tv_r_Project_2_265_e, 0);

    struct timeval tv_r_Aggregate_1_504_s, tv_r_Aggregate_1_504_e;
    gettimeofday(&tv_r_Aggregate_1_504_s, 0);
    trans_Aggregate_TD_182.add(&(tbl_Project_TD_2944_output));
    trans_Aggregate_TD_182.host2dev(0, &(prev_events_grp_Aggregate_TD_182), &(events_h2d_wr_Aggregate_TD_182[0]));
    events_grp_Aggregate_TD_182.push_back(events_h2d_wr_Aggregate_TD_182[0]);
    krnl_Aggregate_TD_182.run(0, &(events_grp_Aggregate_TD_182), &(events_Aggregate_TD_182[0]));
    
    trans_Aggregate_TD_182_out.add(&(tbl_Aggregate_TD_182_output_preprocess));
    trans_Aggregate_TD_182_out.dev2host(0, &(events_Aggregate_TD_182), &(events_d2h_rd_Aggregate_TD_182[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_182_consolidate(tbl_Aggregate_TD_182_output_preprocess, tbl_Aggregate_TD_182_output);
    gettimeofday(&tv_r_Aggregate_1_504_e, 0);

    struct timeval tv_r_Sort_0_686_s, tv_r_Sort_0_686_e;
    gettimeofday(&tv_r_Sort_0_686_s, 0);
    SW_Sort_TD_0839(tbl_Aggregate_TD_182_output, tbl_Sort_TD_0839_output);
    gettimeofday(&tv_r_Sort_0_686_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_832_s, &tv_r_Filter_3_832_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_4178_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_265_s, &tv_r_Project_2_265_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3203_output: " << tbl_Filter_TD_3203_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_504_s, &tv_r_Aggregate_1_504_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2944_output: " << tbl_Project_TD_2944_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_686_s, &tv_r_Sort_0_686_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_182_output: " << tbl_Aggregate_TD_182_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 22.496891 * 1000 << "ms" << std::endl; 
    return 0; 
}
