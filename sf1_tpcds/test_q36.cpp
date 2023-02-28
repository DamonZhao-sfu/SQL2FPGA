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

#include "cfgFunc_q36.hpp" 
#include "q36.hpp" 

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
    std::cout << "NOTE:running query #36\n."; 
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
    Table tbl_GlobalLimit_TD_0383183_output("tbl_GlobalLimit_TD_0383183_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0383183_output.allocateHost();
    Table tbl_LocalLimit_TD_1873165_output("tbl_LocalLimit_TD_1873165_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1873165_output.allocateHost();
    Table tbl_Sort_TD_2410446_output("tbl_Sort_TD_2410446_output", 6100000, 5, "");
    tbl_Sort_TD_2410446_output.allocateHost();
    Table tbl_Window_TD_3169260_output("tbl_Window_TD_3169260_output", 6100000, 8, "");
    tbl_Window_TD_3169260_output.allocateHost();
    Table tbl_Aggregate_TD_4672429_output("tbl_Aggregate_TD_4672429_output", 6100000, 7, "");
    tbl_Aggregate_TD_4672429_output.allocateHost();
    Table tbl_Expand_TD_5794515_output("tbl_Expand_TD_5794515_output", 6100000, 5, "");
    tbl_Expand_TD_5794515_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6550178_output("tbl_JOIN_INNER_TD_6550178_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6550178_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7847335_output("tbl_JOIN_INNER_TD_7847335_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7847335_output.allocateHost();
    Table tbl_Filter_TD_7126729_output("tbl_Filter_TD_7126729_output", 6100000, 1, "");
    tbl_Filter_TD_7126729_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8696105_output("tbl_JOIN_INNER_TD_8696105_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8696105_output.allocateHost();
    Table tbl_Filter_TD_8714744_output("tbl_Filter_TD_8714744_output", 6100000, 3, "");
    tbl_Filter_TD_8714744_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8965813_input;
    tbl_SerializeFromObject_TD_8965813_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8965813_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8965813_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8965813_input.allocateHost();
    tbl_SerializeFromObject_TD_8965813_input.loadHost();
    Table tbl_Filter_TD_9557319_output("tbl_Filter_TD_9557319_output", 6100000, 5, "");
    tbl_Filter_TD_9557319_output.allocateHost();
    Table tbl_Filter_TD_9706947_output("tbl_Filter_TD_9706947_output", 6100000, 1, "");
    tbl_Filter_TD_9706947_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9852954_input;
    tbl_SerializeFromObject_TD_9852954_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9852954_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9852954_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9852954_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9852954_input.allocateHost();
    tbl_SerializeFromObject_TD_9852954_input.loadHost();
    Table tbl_SerializeFromObject_TD_1073457_input;
    tbl_SerializeFromObject_TD_1073457_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_1073457_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1073457_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_1073457_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_1073457_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1073457_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_1073457_input.allocateHost();
    tbl_SerializeFromObject_TD_1073457_input.loadHost();
    Table tbl_SerializeFromObject_TD_10224115_input;
    tbl_SerializeFromObject_TD_10224115_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10224115_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10224115_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10224115_input.allocateHost();
    tbl_SerializeFromObject_TD_10224115_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_8696105_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9557319_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9706947_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_8696105_cmds;
    cfg_JOIN_INNER_TD_8696105_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8696105_gqe_join (cfg_JOIN_INNER_TD_8696105_cmds.cmd);
    cfg_JOIN_INNER_TD_8696105_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_8696105;
    krnl_JOIN_INNER_TD_8696105 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8696105.setup(tbl_Filter_TD_9557319_output, tbl_Filter_TD_9706947_output, tbl_JOIN_INNER_TD_8696105_output, cfg_JOIN_INNER_TD_8696105_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_8696105;
    trans_JOIN_INNER_TD_8696105.setq(q_h);
    trans_JOIN_INNER_TD_8696105.add(&(cfg_JOIN_INNER_TD_8696105_cmds));
    transEngine trans_JOIN_INNER_TD_8696105_out;
    trans_JOIN_INNER_TD_8696105_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8696105;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8696105;
    std::vector<cl::Event> events_JOIN_INNER_TD_8696105;
    events_h2d_wr_JOIN_INNER_TD_8696105.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8696105.resize(1);
    events_JOIN_INNER_TD_8696105.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8696105;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8696105;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_853299_s, tv_r_Filter_9_853299_e;
    gettimeofday(&tv_r_Filter_9_853299_s, 0);
    SW_Filter_TD_9706947(tbl_SerializeFromObject_TD_10224115_input, tbl_Filter_TD_9706947_output);
    gettimeofday(&tv_r_Filter_9_853299_e, 0);

    struct timeval tv_r_Filter_9_302621_s, tv_r_Filter_9_302621_e;
    gettimeofday(&tv_r_Filter_9_302621_s, 0);
    SW_Filter_TD_9557319(tbl_SerializeFromObject_TD_1073457_input, tbl_Filter_TD_9557319_output);
    gettimeofday(&tv_r_Filter_9_302621_e, 0);

    struct timeval tv_r_Filter_8_15103_s, tv_r_Filter_8_15103_e;
    gettimeofday(&tv_r_Filter_8_15103_s, 0);
    SW_Filter_TD_8714744(tbl_SerializeFromObject_TD_9852954_input, tbl_Filter_TD_8714744_output);
    gettimeofday(&tv_r_Filter_8_15103_e, 0);

    struct timeval tv_r_JOIN_INNER_8_222887_s, tv_r_JOIN_INNER_8_222887_e;
    gettimeofday(&tv_r_JOIN_INNER_8_222887_s, 0);
    trans_JOIN_INNER_TD_8696105.add(&(tbl_Filter_TD_9557319_output));
    trans_JOIN_INNER_TD_8696105.add(&(tbl_Filter_TD_9706947_output));
    trans_JOIN_INNER_TD_8696105.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8696105), &(events_h2d_wr_JOIN_INNER_TD_8696105[0]));
    events_grp_JOIN_INNER_TD_8696105.push_back(events_h2d_wr_JOIN_INNER_TD_8696105[0]);
    krnl_JOIN_INNER_TD_8696105.run(0, &(events_grp_JOIN_INNER_TD_8696105), &(events_JOIN_INNER_TD_8696105[0]));
    
    trans_JOIN_INNER_TD_8696105_out.add(&(tbl_JOIN_INNER_TD_8696105_output));
    trans_JOIN_INNER_TD_8696105_out.dev2host(0, &(events_JOIN_INNER_TD_8696105), &(events_d2h_rd_JOIN_INNER_TD_8696105[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_222887_e, 0);

    struct timeval tv_r_Filter_7_187016_s, tv_r_Filter_7_187016_e;
    gettimeofday(&tv_r_Filter_7_187016_s, 0);
    SW_Filter_TD_7126729(tbl_SerializeFromObject_TD_8965813_input, tbl_Filter_TD_7126729_output);
    gettimeofday(&tv_r_Filter_7_187016_e, 0);

    struct timeval tv_r_JOIN_INNER_7_98672_s, tv_r_JOIN_INNER_7_98672_e;
    gettimeofday(&tv_r_JOIN_INNER_7_98672_s, 0);
    SW_JOIN_INNER_TD_7847335(tbl_JOIN_INNER_TD_8696105_output, tbl_Filter_TD_8714744_output, tbl_JOIN_INNER_TD_7847335_output);
    gettimeofday(&tv_r_JOIN_INNER_7_98672_e, 0);

    struct timeval tv_r_JOIN_INNER_6_147755_s, tv_r_JOIN_INNER_6_147755_e;
    gettimeofday(&tv_r_JOIN_INNER_6_147755_s, 0);
    SW_JOIN_INNER_TD_6550178(tbl_JOIN_INNER_TD_7847335_output, tbl_Filter_TD_7126729_output, tbl_JOIN_INNER_TD_6550178_output);
    gettimeofday(&tv_r_JOIN_INNER_6_147755_e, 0);

    struct timeval tv_r_Expand_5_975257_s, tv_r_Expand_5_975257_e;
    gettimeofday(&tv_r_Expand_5_975257_s, 0);
    SW_Expand_TD_5794515(tbl_JOIN_INNER_TD_6550178_output, tbl_Expand_TD_5794515_output);
    gettimeofday(&tv_r_Expand_5_975257_e, 0);

    struct timeval tv_r_Aggregate_4_307920_s, tv_r_Aggregate_4_307920_e;
    gettimeofday(&tv_r_Aggregate_4_307920_s, 0);
    SW_Aggregate_TD_4672429(tbl_Expand_TD_5794515_output, tbl_Aggregate_TD_4672429_output);
    gettimeofday(&tv_r_Aggregate_4_307920_e, 0);

    struct timeval tv_r_Window_3_14787_s, tv_r_Window_3_14787_e;
    gettimeofday(&tv_r_Window_3_14787_s, 0);
    SW_Window_TD_3169260(tbl_Aggregate_TD_4672429_output, tbl_Window_TD_3169260_output);
    gettimeofday(&tv_r_Window_3_14787_e, 0);

    struct timeval tv_r_Sort_2_139515_s, tv_r_Sort_2_139515_e;
    gettimeofday(&tv_r_Sort_2_139515_s, 0);
    SW_Sort_TD_2410446(tbl_Window_TD_3169260_output, tbl_Sort_TD_2410446_output);
    gettimeofday(&tv_r_Sort_2_139515_e, 0);

    struct timeval tv_r_LocalLimit_1_462606_s, tv_r_LocalLimit_1_462606_e;
    gettimeofday(&tv_r_LocalLimit_1_462606_s, 0);
    SW_LocalLimit_TD_1873165(tbl_Sort_TD_2410446_output, tbl_LocalLimit_TD_1873165_output);
    gettimeofday(&tv_r_LocalLimit_1_462606_e, 0);

    struct timeval tv_r_GlobalLimit_0_370769_s, tv_r_GlobalLimit_0_370769_e;
    gettimeofday(&tv_r_GlobalLimit_0_370769_s, 0);
    SW_GlobalLimit_TD_0383183(tbl_LocalLimit_TD_1873165_output, tbl_GlobalLimit_TD_0383183_output);
    gettimeofday(&tv_r_GlobalLimit_0_370769_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_853299_s, &tv_r_Filter_9_853299_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10224115_input: " << tbl_SerializeFromObject_TD_10224115_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_302621_s, &tv_r_Filter_9_302621_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1073457_input: " << tbl_SerializeFromObject_TD_1073457_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_15103_s, &tv_r_Filter_8_15103_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9852954_input: " << tbl_SerializeFromObject_TD_9852954_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_222887_s, &tv_r_JOIN_INNER_8_222887_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9557319_output: " << tbl_Filter_TD_9557319_output.getNumRow() << " " << "tbl_Filter_TD_9706947_output: " << tbl_Filter_TD_9706947_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_187016_s, &tv_r_Filter_7_187016_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8965813_input: " << tbl_SerializeFromObject_TD_8965813_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_98672_s, &tv_r_JOIN_INNER_7_98672_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8696105_output: " << tbl_JOIN_INNER_TD_8696105_output.getNumRow() << " " << "tbl_Filter_TD_8714744_output: " << tbl_Filter_TD_8714744_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_147755_s, &tv_r_JOIN_INNER_6_147755_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7847335_output: " << tbl_JOIN_INNER_TD_7847335_output.getNumRow() << " " << "tbl_Filter_TD_7126729_output: " << tbl_Filter_TD_7126729_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_5: " << tvdiff(&tv_r_Expand_5_975257_s, &tv_r_Expand_5_975257_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6550178_output: " << tbl_JOIN_INNER_TD_6550178_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_307920_s, &tv_r_Aggregate_4_307920_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_5794515_output: " << tbl_Expand_TD_5794515_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_3: " << tvdiff(&tv_r_Window_3_14787_s, &tv_r_Window_3_14787_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4672429_output: " << tbl_Aggregate_TD_4672429_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_139515_s, &tv_r_Sort_2_139515_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_3169260_output: " << tbl_Window_TD_3169260_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_462606_s, &tv_r_LocalLimit_1_462606_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2410446_output: " << tbl_Sort_TD_2410446_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_370769_s, &tv_r_GlobalLimit_0_370769_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1873165_output: " << tbl_LocalLimit_TD_1873165_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.0466774 * 1000 << "ms" << std::endl; 
    return 0; 
}
