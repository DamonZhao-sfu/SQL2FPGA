// number of overlays (w/o fusion): 2 
// number of overlays (w/ fusion): 2 
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

#include "cfgFunc_q19.hpp" 
#include "q19.hpp" 

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
    std::cout << "NOTE:running query #19\n."; 
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
    Table tbl_Aggregate_TD_0376_output("tbl_Aggregate_TD_0376_output", 6100000, 1, "");
    tbl_Aggregate_TD_0376_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1583_output("tbl_JOIN_INNER_TD_1583_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_1583_output.allocateHost();
    Table tbl_Project_TD_2674_output("tbl_Project_TD_2674_output", -1, 4, "");
    tbl_Project_TD_2674_output.allocateHost();
    Table tbl_Project_TD_2674_emptyBufferB("tbl_Project_TD_2674_emptyBufferB", 1, 8, "");
    tbl_Project_TD_2674_emptyBufferB.allocateHost();
    Table tbl_Project_TD_2539_output("tbl_Project_TD_2539_output", -1, 4, "");
    tbl_Project_TD_2539_output.allocateHost();
    Table tbl_Project_TD_2539_emptyBufferB("tbl_Project_TD_2539_emptyBufferB", 1, 8, "");
    tbl_Project_TD_2539_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_3180_output("tbl_Filter_TD_3180_output", 6100000, 4, "");
    tbl_Filter_TD_3180_output.allocateHost();
    Table tbl_Filter_TD_3962_output("tbl_Filter_TD_3962_output", 6100000, 4, "");
    tbl_Filter_TD_3962_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4679_input;
    tbl_SerializeFromObject_TD_4679_input = Table("lineitem", lineitem_n, 6, in_dir);
    tbl_SerializeFromObject_TD_4679_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_4679_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_4679_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_4679_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_4679_input.addCol("l_shipinstruct", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_4679_input.addCol("l_shipmode", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_4679_input.allocateHost();
    tbl_SerializeFromObject_TD_4679_input.loadHost();
    Table tbl_SerializeFromObject_TD_4606_input;
    tbl_SerializeFromObject_TD_4606_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_4606_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_4606_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_4606_input.addCol("p_container", TPCH_READ_P_CNTR_LEN+1);
    tbl_SerializeFromObject_TD_4606_input.addCol("p_brand", TPCH_READ_P_BRND_LEN+1);
    tbl_SerializeFromObject_TD_4606_input.allocateHost();
    tbl_SerializeFromObject_TD_4606_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_2674_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2674_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2539_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2539_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3180_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3962_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_2674_cmds;
    cfg_Project_TD_2674_cmds.allocateHost();
    get_cfg_dat_Project_TD_2674_gqe_join (cfg_Project_TD_2674_cmds.cmd);
    cfg_Project_TD_2674_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_2539_cmds;
    cfg_Project_TD_2539_cmds.allocateHost();
    get_cfg_dat_Project_TD_2539_gqe_join (cfg_Project_TD_2539_cmds.cmd);
    cfg_Project_TD_2539_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_2674;
    krnl_Project_TD_2674 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_2674.setup(tbl_Filter_TD_3180_output, tbl_Project_TD_2674_emptyBufferB, tbl_Project_TD_2674_output, cfg_Project_TD_2674_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_2539;
    krnl_Project_TD_2539 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_2539.setup(tbl_Filter_TD_3962_output, tbl_Project_TD_2539_emptyBufferB, tbl_Project_TD_2539_output, cfg_Project_TD_2539_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_2674;
    trans_Project_TD_2674.setq(q_h);
    trans_Project_TD_2674.add(&(cfg_Project_TD_2674_cmds));
    transEngine trans_Project_TD_2674_out;
    trans_Project_TD_2674_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_2539;
    trans_Project_TD_2539.setq(q_h);
    trans_Project_TD_2539.add(&(cfg_Project_TD_2539_cmds));
    transEngine trans_Project_TD_2539_out;
    trans_Project_TD_2539_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_2674;
    std::vector<cl::Event> events_d2h_rd_Project_TD_2674;
    std::vector<cl::Event> events_Project_TD_2674;
    events_h2d_wr_Project_TD_2674.resize(1);
    events_d2h_rd_Project_TD_2674.resize(1);
    events_Project_TD_2674.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_2674;
    std::vector<cl::Event> prev_events_grp_Project_TD_2674;
    std::vector<cl::Event> events_h2d_wr_Project_TD_2539;
    std::vector<cl::Event> events_d2h_rd_Project_TD_2539;
    std::vector<cl::Event> events_Project_TD_2539;
    events_h2d_wr_Project_TD_2539.resize(1);
    events_d2h_rd_Project_TD_2539.resize(1);
    events_Project_TD_2539.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_2539;
    std::vector<cl::Event> prev_events_grp_Project_TD_2539;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_3_153_s, tv_r_Filter_3_153_e;
    gettimeofday(&tv_r_Filter_3_153_s, 0);
    SW_Filter_TD_3962(tbl_SerializeFromObject_TD_4606_input, tbl_Filter_TD_3962_output);
    gettimeofday(&tv_r_Filter_3_153_e, 0);

    struct timeval tv_r_Filter_3_902_s, tv_r_Filter_3_902_e;
    gettimeofday(&tv_r_Filter_3_902_s, 0);
    SW_Filter_TD_3180(tbl_SerializeFromObject_TD_4679_input, tbl_Filter_TD_3180_output);
    gettimeofday(&tv_r_Filter_3_902_e, 0);

    struct timeval tv_r_Project_2_131_s, tv_r_Project_2_131_e;
    gettimeofday(&tv_r_Project_2_131_s, 0);
    trans_Project_TD_2539.add(&(tbl_Filter_TD_3962_output));
    trans_Project_TD_2539.host2dev(0, &(prev_events_grp_Project_TD_2539), &(events_h2d_wr_Project_TD_2539[0]));
    events_grp_Project_TD_2539.push_back(events_h2d_wr_Project_TD_2539[0]);
    krnl_Project_TD_2539.run(0, &(events_grp_Project_TD_2539), &(events_Project_TD_2539[0]));
    
    trans_Project_TD_2539_out.add(&(tbl_Project_TD_2539_output));
    trans_Project_TD_2539_out.dev2host(0, &(events_Project_TD_2539), &(events_d2h_rd_Project_TD_2539[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_2_131_e, 0);

    struct timeval tv_r_Project_2_490_s, tv_r_Project_2_490_e;
    gettimeofday(&tv_r_Project_2_490_s, 0);
    trans_Project_TD_2674.add(&(tbl_Filter_TD_3180_output));
    trans_Project_TD_2674.host2dev(0, &(prev_events_grp_Project_TD_2674), &(events_h2d_wr_Project_TD_2674[0]));
    events_grp_Project_TD_2674.push_back(events_h2d_wr_Project_TD_2674[0]);
    krnl_Project_TD_2674.run(0, &(events_grp_Project_TD_2674), &(events_Project_TD_2674[0]));
    
    trans_Project_TD_2674_out.add(&(tbl_Project_TD_2674_output));
    trans_Project_TD_2674_out.dev2host(0, &(events_Project_TD_2674), &(events_d2h_rd_Project_TD_2674[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_2_490_e, 0);

    struct timeval tv_r_JOIN_INNER_1_97_s, tv_r_JOIN_INNER_1_97_e;
    gettimeofday(&tv_r_JOIN_INNER_1_97_s, 0);
    SW_JOIN_INNER_TD_1583(tbl_Project_TD_2674_output, tbl_Project_TD_2539_output, tbl_SerializeFromObject_TD_4606_input, tbl_JOIN_INNER_TD_1583_output);
    gettimeofday(&tv_r_JOIN_INNER_1_97_e, 0);

    struct timeval tv_r_Aggregate_0_729_s, tv_r_Aggregate_0_729_e;
    gettimeofday(&tv_r_Aggregate_0_729_s, 0);
    SW_Aggregate_TD_0376(tbl_JOIN_INNER_TD_1583_output, tbl_Aggregate_TD_0376_output);
    gettimeofday(&tv_r_Aggregate_0_729_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_153_s, &tv_r_Filter_3_153_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4606_input: " << tbl_SerializeFromObject_TD_4606_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_902_s, &tv_r_Filter_3_902_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4679_input: " << tbl_SerializeFromObject_TD_4679_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_131_s, &tv_r_Project_2_131_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3962_output: " << tbl_Filter_TD_3962_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_490_s, &tv_r_Project_2_490_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3180_output: " << tbl_Filter_TD_3180_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_97_s, &tv_r_JOIN_INNER_1_97_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2674_output: " << tbl_Project_TD_2674_output.getNumRow() << " " << "tbl_Project_TD_2539_output: " << tbl_Project_TD_2539_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_729_s, &tv_r_Aggregate_0_729_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1583_output: " << tbl_JOIN_INNER_TD_1583_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 8.504743 * 1000 << "ms" << std::endl; 
    return 0; 
}
