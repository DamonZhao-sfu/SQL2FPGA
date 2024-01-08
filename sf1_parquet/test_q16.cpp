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

#include "cfgFunc_q16.hpp" 
#include "q16.hpp" 

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
    std::cout << "NOTE:running query #16\n."; 
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
    Table tbl_Sort_TD_0465_output("tbl_Sort_TD_0465_output", 6100000, 4, "");
    tbl_Sort_TD_0465_output.allocateHost();
    Table tbl_Aggregate_TD_1302_output("tbl_Aggregate_TD_1302_output", 6100000, 4, "");
    tbl_Aggregate_TD_1302_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2209_output("tbl_JOIN_INNER_TD_2209_output", 120789, 4, "");
    tbl_JOIN_INNER_TD_2209_output.allocateHost();
    Table tbl_Project_TD_367_output("tbl_Project_TD_367_output", 6100000, 2, "");
    tbl_Project_TD_367_output.allocateHost();
    Table tbl_Project_TD_3784_output("tbl_Project_TD_3784_output", 6100000, 4, "");
    tbl_Project_TD_3784_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_4314_output("tbl_JOIN_LEFTANTI_TD_4314_output", 6100000, 2, "");
    tbl_JOIN_LEFTANTI_TD_4314_output.allocateHost();
    Table tbl_Filter_TD_4709_output("tbl_Filter_TD_4709_output", 6100000, 4, "");
    tbl_Filter_TD_4709_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6434_input;
    tbl_SerializeFromObject_TD_6434_input = Table("partsupp", partsupp_n, 2, in_dir);
    tbl_SerializeFromObject_TD_6434_input.addCol("ps_partkey", 4);
    tbl_SerializeFromObject_TD_6434_input.addCol("ps_suppkey", 4);
    tbl_SerializeFromObject_TD_6434_input.allocateHost();
    tbl_SerializeFromObject_TD_6434_input.loadHost();
    Table tbl_Project_TD_5671_output("tbl_Project_TD_5671_output", 6100000, 1, "");
    tbl_Project_TD_5671_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5427_input;
    tbl_SerializeFromObject_TD_5427_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_5427_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_5427_input.addCol("p_type", TPCH_READ_P_TYPE_LEN+1);
    tbl_SerializeFromObject_TD_5427_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_5427_input.addCol("p_brand", TPCH_READ_P_BRND_LEN+1);
    tbl_SerializeFromObject_TD_5427_input.allocateHost();
    tbl_SerializeFromObject_TD_5427_input.loadHost();
    Table tbl_Filter_TD_6144_output("tbl_Filter_TD_6144_output", 6100000, 1, "");
    tbl_Filter_TD_6144_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7150_input;
    tbl_SerializeFromObject_TD_7150_input = Table("supplier", supplier_n, 2, in_dir);
    tbl_SerializeFromObject_TD_7150_input.addCol("s_suppkey", 4);
    tbl_SerializeFromObject_TD_7150_input.addCol("s_comment", TPCH_READ_S_CMNT_MAX+1);
    tbl_SerializeFromObject_TD_7150_input.allocateHost();
    tbl_SerializeFromObject_TD_7150_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2209_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_367_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_3784_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2209_cmds;
    cfg_JOIN_INNER_TD_2209_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2209_gqe_join (cfg_JOIN_INNER_TD_2209_cmds.cmd);
    cfg_JOIN_INNER_TD_2209_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2209;
    krnl_JOIN_INNER_TD_2209 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2209.setup(tbl_Project_TD_3784_output, tbl_Project_TD_367_output, tbl_JOIN_INNER_TD_2209_output, cfg_JOIN_INNER_TD_2209_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2209;
    trans_JOIN_INNER_TD_2209.setq(q_h);
    trans_JOIN_INNER_TD_2209.add(&(cfg_JOIN_INNER_TD_2209_cmds));
    transEngine trans_JOIN_INNER_TD_2209_out;
    trans_JOIN_INNER_TD_2209_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2209;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2209;
    std::vector<cl::Event> events_JOIN_INNER_TD_2209;
    events_h2d_wr_JOIN_INNER_TD_2209.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2209.resize(1);
    events_JOIN_INNER_TD_2209.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2209;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2209;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_912_s, tv_r_Filter_6_912_e;
    gettimeofday(&tv_r_Filter_6_912_s, 0);
    SW_Filter_TD_6144(tbl_SerializeFromObject_TD_7150_input, tbl_Filter_TD_6144_output);
    gettimeofday(&tv_r_Filter_6_912_e, 0);

    struct timeval tv_r_Project_5_898_s, tv_r_Project_5_898_e;
    gettimeofday(&tv_r_Project_5_898_s, 0);
    SW_Project_TD_5671(tbl_Filter_TD_6144_output, tbl_Project_TD_5671_output);
    gettimeofday(&tv_r_Project_5_898_e, 0);

    struct timeval tv_r_Filter_4_974_s, tv_r_Filter_4_974_e;
    gettimeofday(&tv_r_Filter_4_974_s, 0);
    SW_Filter_TD_4709(tbl_SerializeFromObject_TD_5427_input, tbl_Filter_TD_4709_output);
    gettimeofday(&tv_r_Filter_4_974_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_4_711_s, tv_r_JOIN_LEFTANTI_4_711_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_711_s, 0);
    SW_JOIN_LEFTANTI_TD_4314(tbl_SerializeFromObject_TD_6434_input, tbl_Project_TD_5671_output, tbl_JOIN_LEFTANTI_TD_4314_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_4_711_e, 0);

    struct timeval tv_r_Project_3_338_s, tv_r_Project_3_338_e;
    gettimeofday(&tv_r_Project_3_338_s, 0);
    SW_Project_TD_3784(tbl_Filter_TD_4709_output, tbl_Project_TD_3784_output);
    gettimeofday(&tv_r_Project_3_338_e, 0);

    struct timeval tv_r_Project_3_651_s, tv_r_Project_3_651_e;
    gettimeofday(&tv_r_Project_3_651_s, 0);
    SW_Project_TD_367(tbl_JOIN_LEFTANTI_TD_4314_output, tbl_Project_TD_367_output);
    gettimeofday(&tv_r_Project_3_651_e, 0);

    struct timeval tv_r_JOIN_INNER_2_594_s, tv_r_JOIN_INNER_2_594_e;
    gettimeofday(&tv_r_JOIN_INNER_2_594_s, 0);
    trans_JOIN_INNER_TD_2209.add(&(tbl_Project_TD_367_output));
    trans_JOIN_INNER_TD_2209.add(&(tbl_Project_TD_3784_output));
    trans_JOIN_INNER_TD_2209.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2209), &(events_h2d_wr_JOIN_INNER_TD_2209[0]));
    events_grp_JOIN_INNER_TD_2209.push_back(events_h2d_wr_JOIN_INNER_TD_2209[0]);
    krnl_JOIN_INNER_TD_2209.run(0, &(events_grp_JOIN_INNER_TD_2209), &(events_JOIN_INNER_TD_2209[0]));
    
    trans_JOIN_INNER_TD_2209_out.add(&(tbl_JOIN_INNER_TD_2209_output));
    trans_JOIN_INNER_TD_2209_out.dev2host(0, &(events_JOIN_INNER_TD_2209), &(events_d2h_rd_JOIN_INNER_TD_2209[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_594_e, 0);

    struct timeval tv_r_Aggregate_1_981_s, tv_r_Aggregate_1_981_e;
    gettimeofday(&tv_r_Aggregate_1_981_s, 0);
    SW_Aggregate_TD_1302(tbl_JOIN_INNER_TD_2209_output, tbl_SerializeFromObject_TD_5427_input, tbl_Aggregate_TD_1302_output);
    gettimeofday(&tv_r_Aggregate_1_981_e, 0);

    struct timeval tv_r_Sort_0_406_s, tv_r_Sort_0_406_e;
    gettimeofday(&tv_r_Sort_0_406_s, 0);
    SW_Sort_TD_0465(tbl_Aggregate_TD_1302_output, tbl_Sort_TD_0465_output);
    gettimeofday(&tv_r_Sort_0_406_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_912_s, &tv_r_Filter_6_912_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7150_input: " << tbl_SerializeFromObject_TD_7150_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_898_s, &tv_r_Project_5_898_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6144_output: " << tbl_Filter_TD_6144_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_974_s, &tv_r_Filter_4_974_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5427_input: " << tbl_SerializeFromObject_TD_5427_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_4: " << tvdiff(&tv_r_JOIN_LEFTANTI_4_711_s, &tv_r_JOIN_LEFTANTI_4_711_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6434_input: " << tbl_SerializeFromObject_TD_6434_input.getNumRow() << " " << "tbl_Project_TD_5671_output: " << tbl_Project_TD_5671_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_338_s, &tv_r_Project_3_338_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4709_output: " << tbl_Filter_TD_4709_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_651_s, &tv_r_Project_3_651_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_4314_output: " << tbl_JOIN_LEFTANTI_TD_4314_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_594_s, &tv_r_JOIN_INNER_2_594_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_367_output: " << tbl_Project_TD_367_output.getNumRow() << " " << "tbl_Project_TD_3784_output: " << tbl_Project_TD_3784_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_981_s, &tv_r_Aggregate_1_981_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2209_output: " << tbl_JOIN_INNER_TD_2209_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_406_s, &tv_r_Sort_0_406_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1302_output: " << tbl_Aggregate_TD_1302_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.9439678 * 1000 << "ms" << std::endl; 
    return 0; 
}
