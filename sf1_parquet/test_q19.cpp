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
    Table tbl_Aggregate_TD_0638_output("tbl_Aggregate_TD_0638_output", 6100000, 1, "");
    tbl_Aggregate_TD_0638_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1623_output("tbl_JOIN_INNER_TD_1623_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_1623_output.allocateHost();
    Table tbl_Project_TD_2491_output("tbl_Project_TD_2491_output", -1, 4, "");
    tbl_Project_TD_2491_output.allocateHost();
    Table tbl_Project_TD_2491_emptyBufferB("tbl_Project_TD_2491_emptyBufferB", 1, 8, "");
    tbl_Project_TD_2491_emptyBufferB.allocateHost();
    Table tbl_Project_TD_2198_output("tbl_Project_TD_2198_output", -1, 4, "");
    tbl_Project_TD_2198_output.allocateHost();
    Table tbl_Project_TD_2198_emptyBufferB("tbl_Project_TD_2198_emptyBufferB", 1, 8, "");
    tbl_Project_TD_2198_emptyBufferB.allocateHost();
    Table tbl_Filter_TD_3671_output("tbl_Filter_TD_3671_output", 6100000, 4, "");
    tbl_Filter_TD_3671_output.allocateHost();
    Table tbl_Filter_TD_3978_output("tbl_Filter_TD_3978_output", 6100000, 4, "");
    tbl_Filter_TD_3978_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4774_input;
    tbl_SerializeFromObject_TD_4774_input = Table("lineitem", lineitem_n, 6, in_dir);
    tbl_SerializeFromObject_TD_4774_input.addCol("l_partkey", 4);
    tbl_SerializeFromObject_TD_4774_input.addCol("l_quantity", 4);
    tbl_SerializeFromObject_TD_4774_input.addCol("l_extendedprice", 4);
    tbl_SerializeFromObject_TD_4774_input.addCol("l_discount", 4);
    tbl_SerializeFromObject_TD_4774_input.addCol("l_shipinstruct", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_4774_input.addCol("l_shipmode", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_4774_input.allocateHost();
    tbl_SerializeFromObject_TD_4774_input.loadHost();
    Table tbl_SerializeFromObject_TD_4547_input;
    tbl_SerializeFromObject_TD_4547_input = Table("part", part_n, 4, in_dir);
    tbl_SerializeFromObject_TD_4547_input.addCol("p_partkey", 4);
    tbl_SerializeFromObject_TD_4547_input.addCol("p_size", 4);
    tbl_SerializeFromObject_TD_4547_input.addCol("p_container", TPCH_READ_P_CNTR_LEN+1);
    tbl_SerializeFromObject_TD_4547_input.addCol("p_brand", TPCH_READ_P_BRND_LEN+1);
    tbl_SerializeFromObject_TD_4547_input.allocateHost();
    tbl_SerializeFromObject_TD_4547_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Project_TD_2491_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2491_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2198_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_2198_emptyBufferB.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3671_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3978_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_Project_TD_2491_cmds;
    cfg_Project_TD_2491_cmds.allocateHost();
    get_cfg_dat_Project_TD_2491_gqe_join (cfg_Project_TD_2491_cmds.cmd);
    cfg_Project_TD_2491_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_Project_TD_2198_cmds;
    cfg_Project_TD_2198_cmds.allocateHost();
    get_cfg_dat_Project_TD_2198_gqe_join (cfg_Project_TD_2198_cmds.cmd);
    cfg_Project_TD_2198_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_Project_TD_2491;
    krnl_Project_TD_2491 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_2491.setup(tbl_Filter_TD_3671_output, tbl_Project_TD_2491_emptyBufferB, tbl_Project_TD_2491_output, cfg_Project_TD_2491_cmds, buftmp_h);
    krnlEngine krnl_Project_TD_2198;
    krnl_Project_TD_2198 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_Project_TD_2198.setup(tbl_Filter_TD_3978_output, tbl_Project_TD_2198_emptyBufferB, tbl_Project_TD_2198_output, cfg_Project_TD_2198_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Project_TD_2491;
    trans_Project_TD_2491.setq(q_h);
    trans_Project_TD_2491.add(&(cfg_Project_TD_2491_cmds));
    transEngine trans_Project_TD_2491_out;
    trans_Project_TD_2491_out.setq(q_h);
    q_h.finish();
    transEngine trans_Project_TD_2198;
    trans_Project_TD_2198.setq(q_h);
    trans_Project_TD_2198.add(&(cfg_Project_TD_2198_cmds));
    transEngine trans_Project_TD_2198_out;
    trans_Project_TD_2198_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Project_TD_2491;
    std::vector<cl::Event> events_d2h_rd_Project_TD_2491;
    std::vector<cl::Event> events_Project_TD_2491;
    events_h2d_wr_Project_TD_2491.resize(1);
    events_d2h_rd_Project_TD_2491.resize(1);
    events_Project_TD_2491.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_2491;
    std::vector<cl::Event> prev_events_grp_Project_TD_2491;
    std::vector<cl::Event> events_h2d_wr_Project_TD_2198;
    std::vector<cl::Event> events_d2h_rd_Project_TD_2198;
    std::vector<cl::Event> events_Project_TD_2198;
    events_h2d_wr_Project_TD_2198.resize(1);
    events_d2h_rd_Project_TD_2198.resize(1);
    events_Project_TD_2198.resize(1);
    std::vector<cl::Event> events_grp_Project_TD_2198;
    std::vector<cl::Event> prev_events_grp_Project_TD_2198;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_3_495_s, tv_r_Filter_3_495_e;
    gettimeofday(&tv_r_Filter_3_495_s, 0);
    SW_Filter_TD_3978(tbl_SerializeFromObject_TD_4547_input, tbl_Filter_TD_3978_output);
    gettimeofday(&tv_r_Filter_3_495_e, 0);

    struct timeval tv_r_Filter_3_520_s, tv_r_Filter_3_520_e;
    gettimeofday(&tv_r_Filter_3_520_s, 0);
    SW_Filter_TD_3671(tbl_SerializeFromObject_TD_4774_input, tbl_Filter_TD_3671_output);
    gettimeofday(&tv_r_Filter_3_520_e, 0);

    struct timeval tv_r_Project_2_853_s, tv_r_Project_2_853_e;
    gettimeofday(&tv_r_Project_2_853_s, 0);
    trans_Project_TD_2198.add(&(tbl_Filter_TD_3978_output));
    trans_Project_TD_2198.host2dev(0, &(prev_events_grp_Project_TD_2198), &(events_h2d_wr_Project_TD_2198[0]));
    events_grp_Project_TD_2198.push_back(events_h2d_wr_Project_TD_2198[0]);
    krnl_Project_TD_2198.run(0, &(events_grp_Project_TD_2198), &(events_Project_TD_2198[0]));
    
    trans_Project_TD_2198_out.add(&(tbl_Project_TD_2198_output));
    trans_Project_TD_2198_out.dev2host(0, &(events_Project_TD_2198), &(events_d2h_rd_Project_TD_2198[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_2_853_e, 0);

    struct timeval tv_r_Project_2_919_s, tv_r_Project_2_919_e;
    gettimeofday(&tv_r_Project_2_919_s, 0);
    trans_Project_TD_2491.add(&(tbl_Filter_TD_3671_output));
    trans_Project_TD_2491.host2dev(0, &(prev_events_grp_Project_TD_2491), &(events_h2d_wr_Project_TD_2491[0]));
    events_grp_Project_TD_2491.push_back(events_h2d_wr_Project_TD_2491[0]);
    krnl_Project_TD_2491.run(0, &(events_grp_Project_TD_2491), &(events_Project_TD_2491[0]));
    
    trans_Project_TD_2491_out.add(&(tbl_Project_TD_2491_output));
    trans_Project_TD_2491_out.dev2host(0, &(events_Project_TD_2491), &(events_d2h_rd_Project_TD_2491[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_Project_2_919_e, 0);

    struct timeval tv_r_JOIN_INNER_1_978_s, tv_r_JOIN_INNER_1_978_e;
    gettimeofday(&tv_r_JOIN_INNER_1_978_s, 0);
    SW_JOIN_INNER_TD_1623(tbl_Project_TD_2491_output, tbl_Project_TD_2198_output, tbl_SerializeFromObject_TD_4547_input, tbl_JOIN_INNER_TD_1623_output);
    gettimeofday(&tv_r_JOIN_INNER_1_978_e, 0);

    struct timeval tv_r_Aggregate_0_956_s, tv_r_Aggregate_0_956_e;
    gettimeofday(&tv_r_Aggregate_0_956_s, 0);
    SW_Aggregate_TD_0638(tbl_JOIN_INNER_TD_1623_output, tbl_Aggregate_TD_0638_output);
    gettimeofday(&tv_r_Aggregate_0_956_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_495_s, &tv_r_Filter_3_495_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4547_input: " << tbl_SerializeFromObject_TD_4547_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_520_s, &tv_r_Filter_3_520_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4774_input: " << tbl_SerializeFromObject_TD_4774_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_853_s, &tv_r_Project_2_853_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3978_output: " << tbl_Filter_TD_3978_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_919_s, &tv_r_Project_2_919_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3671_output: " << tbl_Filter_TD_3671_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_978_s, &tv_r_JOIN_INNER_1_978_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_2491_output: " << tbl_Project_TD_2491_output.getNumRow() << " " << "tbl_Project_TD_2198_output: " << tbl_Project_TD_2198_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_956_s, &tv_r_Aggregate_0_956_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1623_output: " << tbl_JOIN_INNER_TD_1623_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 16.5387 * 1000 << "ms" << std::endl; 
    return 0; 
}
