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

#include "cfgFunc_q86.hpp" 
#include "q86.hpp" 

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
    std::cout << "NOTE:running query #86\n."; 
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
    Table tbl_GlobalLimit_TD_0573110_output("tbl_GlobalLimit_TD_0573110_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0573110_output.allocateHost();
    Table tbl_LocalLimit_TD_1934961_output("tbl_LocalLimit_TD_1934961_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1934961_output.allocateHost();
    Table tbl_Sort_TD_2553874_output("tbl_Sort_TD_2553874_output", 6100000, 5, "");
    tbl_Sort_TD_2553874_output.allocateHost();
    Table tbl_Window_TD_3102065_output("tbl_Window_TD_3102065_output", 6100000, 8, "");
    tbl_Window_TD_3102065_output.allocateHost();
    Table tbl_Aggregate_TD_4548572_output("tbl_Aggregate_TD_4548572_output", 6100000, 7, "");
    tbl_Aggregate_TD_4548572_output.allocateHost();
    Table tbl_Expand_TD_5209032_output("tbl_Expand_TD_5209032_output", 6100000, 4, "");
    tbl_Expand_TD_5209032_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6354399_output("tbl_JOIN_INNER_TD_6354399_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6354399_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7538510_output("tbl_JOIN_INNER_TD_7538510_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7538510_output.allocateHost();
    Table tbl_Filter_TD_7805812_output("tbl_Filter_TD_7805812_output", 6100000, 3, "");
    tbl_Filter_TD_7805812_output.allocateHost();
    Table tbl_Filter_TD_8843992_output("tbl_Filter_TD_8843992_output", 6100000, 3, "");
    tbl_Filter_TD_8843992_output.allocateHost();
    Table tbl_Filter_TD_8903502_output("tbl_Filter_TD_8903502_output", 6100000, 1, "");
    tbl_Filter_TD_8903502_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8454737_input;
    tbl_SerializeFromObject_TD_8454737_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8454737_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8454737_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8454737_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8454737_input.allocateHost();
    tbl_SerializeFromObject_TD_8454737_input.loadHost();
    Table tbl_SerializeFromObject_TD_9830638_input;
    tbl_SerializeFromObject_TD_9830638_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9830638_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9830638_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_9830638_input.addCol("ws_net_paid", 4);
    tbl_SerializeFromObject_TD_9830638_input.allocateHost();
    tbl_SerializeFromObject_TD_9830638_input.loadHost();
    Table tbl_SerializeFromObject_TD_9520001_input;
    tbl_SerializeFromObject_TD_9520001_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9520001_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9520001_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9520001_input.allocateHost();
    tbl_SerializeFromObject_TD_9520001_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_7538510_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8843992_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8903502_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_7538510_cmds;
    cfg_JOIN_INNER_TD_7538510_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7538510_gqe_join (cfg_JOIN_INNER_TD_7538510_cmds.cmd);
    cfg_JOIN_INNER_TD_7538510_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_7538510;
    krnl_JOIN_INNER_TD_7538510 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7538510.setup(tbl_Filter_TD_8843992_output, tbl_Filter_TD_8903502_output, tbl_JOIN_INNER_TD_7538510_output, cfg_JOIN_INNER_TD_7538510_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_7538510;
    trans_JOIN_INNER_TD_7538510.setq(q_h);
    trans_JOIN_INNER_TD_7538510.add(&(cfg_JOIN_INNER_TD_7538510_cmds));
    transEngine trans_JOIN_INNER_TD_7538510_out;
    trans_JOIN_INNER_TD_7538510_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7538510;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7538510;
    std::vector<cl::Event> events_JOIN_INNER_TD_7538510;
    events_h2d_wr_JOIN_INNER_TD_7538510.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7538510.resize(1);
    events_JOIN_INNER_TD_7538510.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7538510;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7538510;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_555231_s, tv_r_Filter_8_555231_e;
    gettimeofday(&tv_r_Filter_8_555231_s, 0);
    SW_Filter_TD_8903502(tbl_SerializeFromObject_TD_9520001_input, tbl_Filter_TD_8903502_output);
    gettimeofday(&tv_r_Filter_8_555231_e, 0);

    struct timeval tv_r_Filter_8_573446_s, tv_r_Filter_8_573446_e;
    gettimeofday(&tv_r_Filter_8_573446_s, 0);
    SW_Filter_TD_8843992(tbl_SerializeFromObject_TD_9830638_input, tbl_Filter_TD_8843992_output);
    gettimeofday(&tv_r_Filter_8_573446_e, 0);

    struct timeval tv_r_Filter_7_885772_s, tv_r_Filter_7_885772_e;
    gettimeofday(&tv_r_Filter_7_885772_s, 0);
    SW_Filter_TD_7805812(tbl_SerializeFromObject_TD_8454737_input, tbl_Filter_TD_7805812_output);
    gettimeofday(&tv_r_Filter_7_885772_e, 0);

    struct timeval tv_r_JOIN_INNER_7_85835_s, tv_r_JOIN_INNER_7_85835_e;
    gettimeofday(&tv_r_JOIN_INNER_7_85835_s, 0);
    trans_JOIN_INNER_TD_7538510.add(&(tbl_Filter_TD_8843992_output));
    trans_JOIN_INNER_TD_7538510.add(&(tbl_Filter_TD_8903502_output));
    trans_JOIN_INNER_TD_7538510.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7538510), &(events_h2d_wr_JOIN_INNER_TD_7538510[0]));
    events_grp_JOIN_INNER_TD_7538510.push_back(events_h2d_wr_JOIN_INNER_TD_7538510[0]);
    krnl_JOIN_INNER_TD_7538510.run(0, &(events_grp_JOIN_INNER_TD_7538510), &(events_JOIN_INNER_TD_7538510[0]));
    
    trans_JOIN_INNER_TD_7538510_out.add(&(tbl_JOIN_INNER_TD_7538510_output));
    trans_JOIN_INNER_TD_7538510_out.dev2host(0, &(events_JOIN_INNER_TD_7538510), &(events_d2h_rd_JOIN_INNER_TD_7538510[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_85835_e, 0);

    struct timeval tv_r_JOIN_INNER_6_633520_s, tv_r_JOIN_INNER_6_633520_e;
    gettimeofday(&tv_r_JOIN_INNER_6_633520_s, 0);
    SW_JOIN_INNER_TD_6354399(tbl_JOIN_INNER_TD_7538510_output, tbl_Filter_TD_7805812_output, tbl_JOIN_INNER_TD_6354399_output);
    gettimeofday(&tv_r_JOIN_INNER_6_633520_e, 0);

    struct timeval tv_r_Expand_5_677731_s, tv_r_Expand_5_677731_e;
    gettimeofday(&tv_r_Expand_5_677731_s, 0);
    SW_Expand_TD_5209032(tbl_JOIN_INNER_TD_6354399_output, tbl_Expand_TD_5209032_output);
    gettimeofday(&tv_r_Expand_5_677731_e, 0);

    struct timeval tv_r_Aggregate_4_206533_s, tv_r_Aggregate_4_206533_e;
    gettimeofday(&tv_r_Aggregate_4_206533_s, 0);
    SW_Aggregate_TD_4548572(tbl_Expand_TD_5209032_output, tbl_Aggregate_TD_4548572_output);
    gettimeofday(&tv_r_Aggregate_4_206533_e, 0);

    struct timeval tv_r_Window_3_566353_s, tv_r_Window_3_566353_e;
    gettimeofday(&tv_r_Window_3_566353_s, 0);
    SW_Window_TD_3102065(tbl_Aggregate_TD_4548572_output, tbl_Window_TD_3102065_output);
    gettimeofday(&tv_r_Window_3_566353_e, 0);

    struct timeval tv_r_Sort_2_269550_s, tv_r_Sort_2_269550_e;
    gettimeofday(&tv_r_Sort_2_269550_s, 0);
    SW_Sort_TD_2553874(tbl_Window_TD_3102065_output, tbl_Sort_TD_2553874_output);
    gettimeofday(&tv_r_Sort_2_269550_e, 0);

    struct timeval tv_r_LocalLimit_1_678723_s, tv_r_LocalLimit_1_678723_e;
    gettimeofday(&tv_r_LocalLimit_1_678723_s, 0);
    SW_LocalLimit_TD_1934961(tbl_Sort_TD_2553874_output, tbl_LocalLimit_TD_1934961_output);
    gettimeofday(&tv_r_LocalLimit_1_678723_e, 0);

    struct timeval tv_r_GlobalLimit_0_946648_s, tv_r_GlobalLimit_0_946648_e;
    gettimeofday(&tv_r_GlobalLimit_0_946648_s, 0);
    SW_GlobalLimit_TD_0573110(tbl_LocalLimit_TD_1934961_output, tbl_GlobalLimit_TD_0573110_output);
    gettimeofday(&tv_r_GlobalLimit_0_946648_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_555231_s, &tv_r_Filter_8_555231_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9520001_input: " << tbl_SerializeFromObject_TD_9520001_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_573446_s, &tv_r_Filter_8_573446_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9830638_input: " << tbl_SerializeFromObject_TD_9830638_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_885772_s, &tv_r_Filter_7_885772_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8454737_input: " << tbl_SerializeFromObject_TD_8454737_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_85835_s, &tv_r_JOIN_INNER_7_85835_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8843992_output: " << tbl_Filter_TD_8843992_output.getNumRow() << " " << "tbl_Filter_TD_8903502_output: " << tbl_Filter_TD_8903502_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_633520_s, &tv_r_JOIN_INNER_6_633520_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7538510_output: " << tbl_JOIN_INNER_TD_7538510_output.getNumRow() << " " << "tbl_Filter_TD_7805812_output: " << tbl_Filter_TD_7805812_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_5: " << tvdiff(&tv_r_Expand_5_677731_s, &tv_r_Expand_5_677731_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6354399_output: " << tbl_JOIN_INNER_TD_6354399_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_206533_s, &tv_r_Aggregate_4_206533_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_5209032_output: " << tbl_Expand_TD_5209032_output.getNumRow() << " " << std::endl; 

    std::cout << "Window_3: " << tvdiff(&tv_r_Window_3_566353_s, &tv_r_Window_3_566353_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4548572_output: " << tbl_Aggregate_TD_4548572_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_269550_s, &tv_r_Sort_2_269550_e) / 1000.0 << " ms " 
     << "tbl_Window_TD_3102065_output: " << tbl_Window_TD_3102065_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_678723_s, &tv_r_LocalLimit_1_678723_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2553874_output: " << tbl_Sort_TD_2553874_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_946648_s, &tv_r_GlobalLimit_0_946648_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1934961_output: " << tbl_LocalLimit_TD_1934961_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.1776654 * 1000 << "ms" << std::endl; 
    return 0; 
}
