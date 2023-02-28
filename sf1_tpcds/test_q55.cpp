// number of overlays (w/o fusion): 0 
// number of overlays (w/ fusion): 0 
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
#include "tpcds_read.hpp" 
#include "gqe_api.hpp" 

#include "cfgFunc_q55.hpp" 
#include "q55.hpp" 

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
    std::cout << "NOTE:running query #55\n."; 
    std::cout << "NOTE:running in sf" << scale << " data\n"; 

    int32_t customer_n = 	100000; 
    int32_t customer_address_n = 	50000; 
    int32_t customer_demographics_n = 	1920800; 
    int32_t date_dim_n = 	73049; 
    int32_t household_demographics_n = 	7200; 
    int32_t income_band_n = 	20; 
    int32_t item_n = 	18000; 
    int32_t promotion_n = 	300; 
    int32_t reason_n = 	35; 
    int32_t ship_mode_n = 	20; 
    int32_t store_n = 	12; 
    int32_t time_dim_n = 	86400; 
    int32_t warehouse_n = 	5; 
    int32_t web_site_n = 	30; 
    int32_t web_page_n = 	60; 
    int32_t inventory_n = 	11745000; 
    int32_t store_returns_n = 	300000; 
    int32_t web_sales_n = 	719384; 
    int32_t web_returns_n = 	71763; 
    int32_t call_center_n = 	6; 
    int32_t catalog_page_n = 	11718; 
    int32_t catalog_returns_n = 	144067; 
    int32_t catalog_sales_n = 	1441548; 
    int32_t store_sales_n = 	2880404    ; 
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
    Table tbl_GlobalLimit_TD_0694811_output("tbl_GlobalLimit_TD_0694811_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0694811_output.allocateHost();
    Table tbl_LocalLimit_TD_1962371_output("tbl_LocalLimit_TD_1962371_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1962371_output.allocateHost();
    Table tbl_Sort_TD_2348625_output("tbl_Sort_TD_2348625_output", 6100000, 3, "");
    tbl_Sort_TD_2348625_output.allocateHost();
    Table tbl_Aggregate_TD_3693067_output("tbl_Aggregate_TD_3693067_output", 6100000, 3, "");
    tbl_Aggregate_TD_3693067_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4666132_output("tbl_JOIN_INNER_TD_4666132_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4666132_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5163427_output("tbl_JOIN_INNER_TD_5163427_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5163427_output.allocateHost();
    Table tbl_Filter_TD_578850_output("tbl_Filter_TD_578850_output", 6100000, 3, "");
    tbl_Filter_TD_578850_output.allocateHost();
    Table tbl_Filter_TD_6209123_output("tbl_Filter_TD_6209123_output", 6100000, 1, "");
    tbl_Filter_TD_6209123_output.allocateHost();
    Table tbl_Filter_TD_629538_output("tbl_Filter_TD_629538_output", 6100000, 3, "");
    tbl_Filter_TD_629538_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6333934_input;
    tbl_SerializeFromObject_TD_6333934_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6333934_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6333934_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_6333934_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6333934_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_6333934_input.allocateHost();
    tbl_SerializeFromObject_TD_6333934_input.loadHost();
    Table tbl_SerializeFromObject_TD_7313926_input;
    tbl_SerializeFromObject_TD_7313926_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7313926_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7313926_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_7313926_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7313926_input.allocateHost();
    tbl_SerializeFromObject_TD_7313926_input.loadHost();
    Table tbl_SerializeFromObject_TD_7582469_input;
    tbl_SerializeFromObject_TD_7582469_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7582469_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7582469_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_7582469_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_7582469_input.allocateHost();
    tbl_SerializeFromObject_TD_7582469_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5163427_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6209123_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_629538_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5163427_cmds;
    cfg_JOIN_INNER_TD_5163427_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5163427_gqe_join (cfg_JOIN_INNER_TD_5163427_cmds.cmd);
    cfg_JOIN_INNER_TD_5163427_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5163427;
    krnl_JOIN_INNER_TD_5163427 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5163427.setup(tbl_Filter_TD_6209123_output, tbl_Filter_TD_629538_output, tbl_JOIN_INNER_TD_5163427_output, cfg_JOIN_INNER_TD_5163427_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5163427;
    trans_JOIN_INNER_TD_5163427.setq(q_h);
    trans_JOIN_INNER_TD_5163427.add(&(cfg_JOIN_INNER_TD_5163427_cmds));
    transEngine trans_JOIN_INNER_TD_5163427_out;
    trans_JOIN_INNER_TD_5163427_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5163427;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5163427;
    std::vector<cl::Event> events_JOIN_INNER_TD_5163427;
    events_h2d_wr_JOIN_INNER_TD_5163427.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5163427.resize(1);
    events_JOIN_INNER_TD_5163427.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5163427;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5163427;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_535745_s, tv_r_Filter_6_535745_e;
    gettimeofday(&tv_r_Filter_6_535745_s, 0);
    SW_Filter_TD_629538(tbl_SerializeFromObject_TD_7582469_input, tbl_Filter_TD_629538_output);
    gettimeofday(&tv_r_Filter_6_535745_e, 0);

    struct timeval tv_r_Filter_6_753856_s, tv_r_Filter_6_753856_e;
    gettimeofday(&tv_r_Filter_6_753856_s, 0);
    SW_Filter_TD_6209123(tbl_SerializeFromObject_TD_7313926_input, tbl_Filter_TD_6209123_output);
    gettimeofday(&tv_r_Filter_6_753856_e, 0);

    struct timeval tv_r_Filter_5_508470_s, tv_r_Filter_5_508470_e;
    gettimeofday(&tv_r_Filter_5_508470_s, 0);
    SW_Filter_TD_578850(tbl_SerializeFromObject_TD_6333934_input, tbl_Filter_TD_578850_output);
    gettimeofday(&tv_r_Filter_5_508470_e, 0);

    struct timeval tv_r_JOIN_INNER_5_977847_s, tv_r_JOIN_INNER_5_977847_e;
    gettimeofday(&tv_r_JOIN_INNER_5_977847_s, 0);
    trans_JOIN_INNER_TD_5163427.add(&(tbl_Filter_TD_6209123_output));
    trans_JOIN_INNER_TD_5163427.add(&(tbl_Filter_TD_629538_output));
    trans_JOIN_INNER_TD_5163427.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5163427), &(events_h2d_wr_JOIN_INNER_TD_5163427[0]));
    events_grp_JOIN_INNER_TD_5163427.push_back(events_h2d_wr_JOIN_INNER_TD_5163427[0]);
    krnl_JOIN_INNER_TD_5163427.run(0, &(events_grp_JOIN_INNER_TD_5163427), &(events_JOIN_INNER_TD_5163427[0]));
    
    trans_JOIN_INNER_TD_5163427_out.add(&(tbl_JOIN_INNER_TD_5163427_output));
    trans_JOIN_INNER_TD_5163427_out.dev2host(0, &(events_JOIN_INNER_TD_5163427), &(events_d2h_rd_JOIN_INNER_TD_5163427[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_977847_e, 0);

    struct timeval tv_r_JOIN_INNER_4_905181_s, tv_r_JOIN_INNER_4_905181_e;
    gettimeofday(&tv_r_JOIN_INNER_4_905181_s, 0);
    SW_JOIN_INNER_TD_4666132(tbl_JOIN_INNER_TD_5163427_output, tbl_Filter_TD_578850_output, tbl_JOIN_INNER_TD_4666132_output);
    gettimeofday(&tv_r_JOIN_INNER_4_905181_e, 0);

    struct timeval tv_r_Aggregate_3_212860_s, tv_r_Aggregate_3_212860_e;
    gettimeofday(&tv_r_Aggregate_3_212860_s, 0);
    SW_Aggregate_TD_3693067(tbl_JOIN_INNER_TD_4666132_output, tbl_Aggregate_TD_3693067_output);
    gettimeofday(&tv_r_Aggregate_3_212860_e, 0);

    struct timeval tv_r_Sort_2_800076_s, tv_r_Sort_2_800076_e;
    gettimeofday(&tv_r_Sort_2_800076_s, 0);
    SW_Sort_TD_2348625(tbl_Aggregate_TD_3693067_output, tbl_Sort_TD_2348625_output);
    gettimeofday(&tv_r_Sort_2_800076_e, 0);

    struct timeval tv_r_LocalLimit_1_896259_s, tv_r_LocalLimit_1_896259_e;
    gettimeofday(&tv_r_LocalLimit_1_896259_s, 0);
    SW_LocalLimit_TD_1962371(tbl_Sort_TD_2348625_output, tbl_LocalLimit_TD_1962371_output);
    gettimeofday(&tv_r_LocalLimit_1_896259_e, 0);

    struct timeval tv_r_GlobalLimit_0_765813_s, tv_r_GlobalLimit_0_765813_e;
    gettimeofday(&tv_r_GlobalLimit_0_765813_s, 0);
    SW_GlobalLimit_TD_0694811(tbl_LocalLimit_TD_1962371_output, tbl_GlobalLimit_TD_0694811_output);
    gettimeofday(&tv_r_GlobalLimit_0_765813_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_535745_s, &tv_r_Filter_6_535745_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7582469_input: " << tbl_SerializeFromObject_TD_7582469_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_753856_s, &tv_r_Filter_6_753856_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7313926_input: " << tbl_SerializeFromObject_TD_7313926_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_508470_s, &tv_r_Filter_5_508470_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6333934_input: " << tbl_SerializeFromObject_TD_6333934_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_977847_s, &tv_r_JOIN_INNER_5_977847_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6209123_output: " << tbl_Filter_TD_6209123_output.getNumRow() << " " << "tbl_Filter_TD_629538_output: " << tbl_Filter_TD_629538_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_905181_s, &tv_r_JOIN_INNER_4_905181_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5163427_output: " << tbl_JOIN_INNER_TD_5163427_output.getNumRow() << " " << "tbl_Filter_TD_578850_output: " << tbl_Filter_TD_578850_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_212860_s, &tv_r_Aggregate_3_212860_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4666132_output: " << tbl_JOIN_INNER_TD_4666132_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_800076_s, &tv_r_Sort_2_800076_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3693067_output: " << tbl_Aggregate_TD_3693067_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_896259_s, &tv_r_LocalLimit_1_896259_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2348625_output: " << tbl_Sort_TD_2348625_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_765813_s, &tv_r_GlobalLimit_0_765813_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1962371_output: " << tbl_LocalLimit_TD_1962371_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.0148466 * 1000 << "ms" << std::endl; 
    return 0; 
}
