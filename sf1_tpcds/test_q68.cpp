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

#include "cfgFunc_q68.hpp" 
#include "q68.hpp" 

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
    std::cout << "NOTE:running query #68\n."; 
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
    Table tbl_GlobalLimit_TD_0205931_output("tbl_GlobalLimit_TD_0205931_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0205931_output.allocateHost();
    Table tbl_LocalLimit_TD_1966644_output("tbl_LocalLimit_TD_1966644_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1966644_output.allocateHost();
    Table tbl_Sort_TD_2419311_output("tbl_Sort_TD_2419311_output", 6100000, 8, "");
    tbl_Sort_TD_2419311_output.allocateHost();
    Table tbl_JOIN_INNER_TD_335662_output("tbl_JOIN_INNER_TD_335662_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_335662_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4289178_output("tbl_JOIN_INNER_TD_4289178_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4289178_output.allocateHost();
    Table tbl_Filter_TD_4612521_output("tbl_Filter_TD_4612521_output", 6100000, 2, "");
    tbl_Filter_TD_4612521_output.allocateHost();
    Table tbl_Aggregate_TD_5123969_output("tbl_Aggregate_TD_5123969_output", 6100000, 6, "");
    tbl_Aggregate_TD_5123969_output.allocateHost();
    Table tbl_Filter_TD_5554632_output("tbl_Filter_TD_5554632_output", 6100000, 4, "");
    tbl_Filter_TD_5554632_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5179636_input;
    tbl_SerializeFromObject_TD_5179636_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5179636_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_5179636_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5179636_input.allocateHost();
    tbl_SerializeFromObject_TD_5179636_input.loadHost();
    Table tbl_JOIN_INNER_TD_6289369_output("tbl_JOIN_INNER_TD_6289369_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_6289369_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6362796_input;
    tbl_SerializeFromObject_TD_6362796_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6362796_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6362796_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_6362796_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6362796_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6362796_input.allocateHost();
    tbl_SerializeFromObject_TD_6362796_input.loadHost();
    Table tbl_JOIN_INNER_TD_7304367_output("tbl_JOIN_INNER_TD_7304367_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7304367_output.allocateHost();
    Table tbl_Filter_TD_7495519_output("tbl_Filter_TD_7495519_output", 6100000, 2, "");
    tbl_Filter_TD_7495519_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8976414_output("tbl_JOIN_INNER_TD_8976414_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_8976414_output.allocateHost();
    Table tbl_Filter_TD_8150531_output("tbl_Filter_TD_8150531_output", 6100000, 1, "");
    tbl_Filter_TD_8150531_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8358248_input;
    tbl_SerializeFromObject_TD_8358248_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8358248_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8358248_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8358248_input.allocateHost();
    tbl_SerializeFromObject_TD_8358248_input.loadHost();
    Table tbl_JOIN_INNER_TD_9168301_output("tbl_JOIN_INNER_TD_9168301_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_9168301_output.allocateHost();
    Table tbl_Filter_TD_9950881_output("tbl_Filter_TD_9950881_output", 6100000, 1, "");
    tbl_Filter_TD_9950881_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9310394_input;
    tbl_SerializeFromObject_TD_9310394_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9310394_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9310394_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_9310394_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_9310394_input.allocateHost();
    tbl_SerializeFromObject_TD_9310394_input.loadHost();
    Table tbl_Filter_TD_1063872_output("tbl_Filter_TD_1063872_output", 6100000, 9, "");
    tbl_Filter_TD_1063872_output.allocateHost();
    Table tbl_Filter_TD_10542925_output("tbl_Filter_TD_10542925_output", 6100000, 1, "");
    tbl_Filter_TD_10542925_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1090087_input;
    tbl_SerializeFromObject_TD_1090087_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1090087_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_1090087_input.addCol("s_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1090087_input.allocateHost();
    tbl_SerializeFromObject_TD_1090087_input.loadHost();
    Table tbl_SerializeFromObject_TD_11351931_input;
    tbl_SerializeFromObject_TD_11351931_input = Table("store_sales", store_sales_n, 9, in_dir, "orc");
    tbl_SerializeFromObject_TD_11351931_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11351931_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_11351931_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_11351931_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_11351931_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11351931_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_11351931_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11351931_input.addCol("ss_ext_list_price", 4);
    tbl_SerializeFromObject_TD_11351931_input.addCol("ss_ext_tax", 4);
    tbl_SerializeFromObject_TD_11351931_input.allocateHost();
    tbl_SerializeFromObject_TD_11351931_input.loadHost();
    Table tbl_SerializeFromObject_TD_11642030_input;
    tbl_SerializeFromObject_TD_11642030_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11642030_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11642030_input.addCol("d_dom", 4);
    tbl_SerializeFromObject_TD_11642030_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11642030_input.allocateHost();
    tbl_SerializeFromObject_TD_11642030_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_7304367_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8976414_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8150531_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9168301_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9950881_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_7304367_cmds;
    cfg_JOIN_INNER_TD_7304367_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7304367_gqe_join (cfg_JOIN_INNER_TD_7304367_cmds.cmd);
    cfg_JOIN_INNER_TD_7304367_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8976414_cmds;
    cfg_JOIN_INNER_TD_8976414_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8976414_gqe_join (cfg_JOIN_INNER_TD_8976414_cmds.cmd);
    cfg_JOIN_INNER_TD_8976414_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_7304367;
    krnl_JOIN_INNER_TD_7304367 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7304367.setup(tbl_JOIN_INNER_TD_8976414_output, tbl_Filter_TD_8150531_output, tbl_JOIN_INNER_TD_7304367_output, cfg_JOIN_INNER_TD_7304367_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8976414;
    krnl_JOIN_INNER_TD_8976414 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8976414.setup(tbl_JOIN_INNER_TD_9168301_output, tbl_Filter_TD_9950881_output, tbl_JOIN_INNER_TD_8976414_output, cfg_JOIN_INNER_TD_8976414_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_7304367;
    trans_JOIN_INNER_TD_7304367.setq(q_h);
    trans_JOIN_INNER_TD_7304367.add(&(cfg_JOIN_INNER_TD_7304367_cmds));
    transEngine trans_JOIN_INNER_TD_7304367_out;
    trans_JOIN_INNER_TD_7304367_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8976414;
    trans_JOIN_INNER_TD_8976414.setq(q_h);
    trans_JOIN_INNER_TD_8976414.add(&(cfg_JOIN_INNER_TD_8976414_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7304367;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7304367;
    std::vector<cl::Event> events_JOIN_INNER_TD_7304367;
    events_h2d_wr_JOIN_INNER_TD_7304367.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7304367.resize(1);
    events_JOIN_INNER_TD_7304367.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7304367;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7304367;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8976414;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8976414;
    std::vector<cl::Event> events_JOIN_INNER_TD_8976414;
    events_h2d_wr_JOIN_INNER_TD_8976414.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8976414.resize(1);
    events_JOIN_INNER_TD_8976414.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8976414;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8976414;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_36797_s, tv_r_Filter_10_36797_e;
    gettimeofday(&tv_r_Filter_10_36797_s, 0);
    SW_Filter_TD_10542925(tbl_SerializeFromObject_TD_11642030_input, tbl_Filter_TD_10542925_output);
    gettimeofday(&tv_r_Filter_10_36797_e, 0);

    struct timeval tv_r_Filter_10_426039_s, tv_r_Filter_10_426039_e;
    gettimeofday(&tv_r_Filter_10_426039_s, 0);
    SW_Filter_TD_1063872(tbl_SerializeFromObject_TD_11351931_input, tbl_Filter_TD_1063872_output);
    gettimeofday(&tv_r_Filter_10_426039_e, 0);

    struct timeval tv_r_Filter_9_506332_s, tv_r_Filter_9_506332_e;
    gettimeofday(&tv_r_Filter_9_506332_s, 0);
    SW_Filter_TD_9950881(tbl_SerializeFromObject_TD_1090087_input, tbl_Filter_TD_9950881_output);
    gettimeofday(&tv_r_Filter_9_506332_e, 0);

    struct timeval tv_r_JOIN_INNER_9_411682_s, tv_r_JOIN_INNER_9_411682_e;
    gettimeofday(&tv_r_JOIN_INNER_9_411682_s, 0);
    SW_JOIN_INNER_TD_9168301(tbl_Filter_TD_1063872_output, tbl_Filter_TD_10542925_output, tbl_JOIN_INNER_TD_9168301_output);
    gettimeofday(&tv_r_JOIN_INNER_9_411682_e, 0);

    struct timeval tv_r_Filter_8_577785_s, tv_r_Filter_8_577785_e;
    gettimeofday(&tv_r_Filter_8_577785_s, 0);
    SW_Filter_TD_8150531(tbl_SerializeFromObject_TD_9310394_input, tbl_Filter_TD_8150531_output);
    gettimeofday(&tv_r_Filter_8_577785_e, 0);

    struct timeval tv_r_JOIN_INNER_8_336357_s, tv_r_JOIN_INNER_8_336357_e;
    gettimeofday(&tv_r_JOIN_INNER_8_336357_s, 0);
    trans_JOIN_INNER_TD_8976414.add(&(tbl_JOIN_INNER_TD_9168301_output));
    trans_JOIN_INNER_TD_8976414.add(&(tbl_Filter_TD_9950881_output));
    trans_JOIN_INNER_TD_8976414.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8976414), &(events_h2d_wr_JOIN_INNER_TD_8976414[0]));
    events_grp_JOIN_INNER_TD_8976414.push_back(events_h2d_wr_JOIN_INNER_TD_8976414[0]);
    krnl_JOIN_INNER_TD_8976414.run(0, &(events_grp_JOIN_INNER_TD_8976414), &(events_JOIN_INNER_TD_8976414[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_336357_e, 0);

    struct timeval tv_r_Filter_7_951540_s, tv_r_Filter_7_951540_e;
    gettimeofday(&tv_r_Filter_7_951540_s, 0);
    SW_Filter_TD_7495519(tbl_SerializeFromObject_TD_8358248_input, tbl_Filter_TD_7495519_output);
    gettimeofday(&tv_r_Filter_7_951540_e, 0);

    struct timeval tv_r_JOIN_INNER_7_304141_s, tv_r_JOIN_INNER_7_304141_e;
    gettimeofday(&tv_r_JOIN_INNER_7_304141_s, 0);
    prev_events_grp_JOIN_INNER_TD_7304367.push_back(events_h2d_wr_JOIN_INNER_TD_8976414[0]);
    trans_JOIN_INNER_TD_7304367.add(&(tbl_Filter_TD_8150531_output));
    trans_JOIN_INNER_TD_7304367.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7304367), &(events_h2d_wr_JOIN_INNER_TD_7304367[0]));
    events_grp_JOIN_INNER_TD_7304367.push_back(events_h2d_wr_JOIN_INNER_TD_7304367[0]);
    events_grp_JOIN_INNER_TD_7304367.push_back(events_JOIN_INNER_TD_8976414[0]);
    krnl_JOIN_INNER_TD_7304367.run(0, &(events_grp_JOIN_INNER_TD_7304367), &(events_JOIN_INNER_TD_7304367[0]));
    
    trans_JOIN_INNER_TD_7304367_out.add(&(tbl_JOIN_INNER_TD_7304367_output));
    trans_JOIN_INNER_TD_7304367_out.dev2host(0, &(events_JOIN_INNER_TD_7304367), &(events_d2h_rd_JOIN_INNER_TD_7304367[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_304141_e, 0);

    struct timeval tv_r_JOIN_INNER_6_85195_s, tv_r_JOIN_INNER_6_85195_e;
    gettimeofday(&tv_r_JOIN_INNER_6_85195_s, 0);
    SW_JOIN_INNER_TD_6289369(tbl_JOIN_INNER_TD_7304367_output, tbl_Filter_TD_7495519_output, tbl_JOIN_INNER_TD_6289369_output);
    gettimeofday(&tv_r_JOIN_INNER_6_85195_e, 0);

    struct timeval tv_r_Filter_5_978500_s, tv_r_Filter_5_978500_e;
    gettimeofday(&tv_r_Filter_5_978500_s, 0);
    SW_Filter_TD_5554632(tbl_SerializeFromObject_TD_6362796_input, tbl_Filter_TD_5554632_output);
    gettimeofday(&tv_r_Filter_5_978500_e, 0);

    struct timeval tv_r_Aggregate_5_553546_s, tv_r_Aggregate_5_553546_e;
    gettimeofday(&tv_r_Aggregate_5_553546_s, 0);
    SW_Aggregate_TD_5123969(tbl_JOIN_INNER_TD_6289369_output, tbl_Aggregate_TD_5123969_output);
    gettimeofday(&tv_r_Aggregate_5_553546_e, 0);

    struct timeval tv_r_Filter_4_375317_s, tv_r_Filter_4_375317_e;
    gettimeofday(&tv_r_Filter_4_375317_s, 0);
    SW_Filter_TD_4612521(tbl_SerializeFromObject_TD_5179636_input, tbl_Filter_TD_4612521_output);
    gettimeofday(&tv_r_Filter_4_375317_e, 0);

    struct timeval tv_r_JOIN_INNER_4_811788_s, tv_r_JOIN_INNER_4_811788_e;
    gettimeofday(&tv_r_JOIN_INNER_4_811788_s, 0);
    SW_JOIN_INNER_TD_4289178(tbl_Aggregate_TD_5123969_output, tbl_Filter_TD_5554632_output, tbl_JOIN_INNER_TD_4289178_output);
    gettimeofday(&tv_r_JOIN_INNER_4_811788_e, 0);

    struct timeval tv_r_JOIN_INNER_3_463131_s, tv_r_JOIN_INNER_3_463131_e;
    gettimeofday(&tv_r_JOIN_INNER_3_463131_s, 0);
    SW_JOIN_INNER_TD_335662(tbl_JOIN_INNER_TD_4289178_output, tbl_Filter_TD_4612521_output, tbl_JOIN_INNER_TD_335662_output);
    gettimeofday(&tv_r_JOIN_INNER_3_463131_e, 0);

    struct timeval tv_r_Sort_2_432619_s, tv_r_Sort_2_432619_e;
    gettimeofday(&tv_r_Sort_2_432619_s, 0);
    SW_Sort_TD_2419311(tbl_JOIN_INNER_TD_335662_output, tbl_Sort_TD_2419311_output);
    gettimeofday(&tv_r_Sort_2_432619_e, 0);

    struct timeval tv_r_LocalLimit_1_778806_s, tv_r_LocalLimit_1_778806_e;
    gettimeofday(&tv_r_LocalLimit_1_778806_s, 0);
    SW_LocalLimit_TD_1966644(tbl_Sort_TD_2419311_output, tbl_LocalLimit_TD_1966644_output);
    gettimeofday(&tv_r_LocalLimit_1_778806_e, 0);

    struct timeval tv_r_GlobalLimit_0_387820_s, tv_r_GlobalLimit_0_387820_e;
    gettimeofday(&tv_r_GlobalLimit_0_387820_s, 0);
    SW_GlobalLimit_TD_0205931(tbl_LocalLimit_TD_1966644_output, tbl_GlobalLimit_TD_0205931_output);
    gettimeofday(&tv_r_GlobalLimit_0_387820_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_36797_s, &tv_r_Filter_10_36797_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11642030_input: " << tbl_SerializeFromObject_TD_11642030_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_426039_s, &tv_r_Filter_10_426039_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11351931_input: " << tbl_SerializeFromObject_TD_11351931_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_506332_s, &tv_r_Filter_9_506332_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1090087_input: " << tbl_SerializeFromObject_TD_1090087_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_411682_s, &tv_r_JOIN_INNER_9_411682_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1063872_output: " << tbl_Filter_TD_1063872_output.getNumRow() << " " << "tbl_Filter_TD_10542925_output: " << tbl_Filter_TD_10542925_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_577785_s, &tv_r_Filter_8_577785_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9310394_input: " << tbl_SerializeFromObject_TD_9310394_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_336357_s, &tv_r_JOIN_INNER_8_336357_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9168301_output: " << tbl_JOIN_INNER_TD_9168301_output.getNumRow() << " " << "tbl_Filter_TD_9950881_output: " << tbl_Filter_TD_9950881_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_951540_s, &tv_r_Filter_7_951540_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8358248_input: " << tbl_SerializeFromObject_TD_8358248_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_304141_s, &tv_r_JOIN_INNER_7_304141_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8976414_output: " << tbl_JOIN_INNER_TD_8976414_output.getNumRow() << " " << "tbl_Filter_TD_8150531_output: " << tbl_Filter_TD_8150531_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_85195_s, &tv_r_JOIN_INNER_6_85195_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7304367_output: " << tbl_JOIN_INNER_TD_7304367_output.getNumRow() << " " << "tbl_Filter_TD_7495519_output: " << tbl_Filter_TD_7495519_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_978500_s, &tv_r_Filter_5_978500_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6362796_input: " << tbl_SerializeFromObject_TD_6362796_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_553546_s, &tv_r_Aggregate_5_553546_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6289369_output: " << tbl_JOIN_INNER_TD_6289369_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_375317_s, &tv_r_Filter_4_375317_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5179636_input: " << tbl_SerializeFromObject_TD_5179636_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_811788_s, &tv_r_JOIN_INNER_4_811788_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5123969_output: " << tbl_Aggregate_TD_5123969_output.getNumRow() << " " << "tbl_Filter_TD_5554632_output: " << tbl_Filter_TD_5554632_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_463131_s, &tv_r_JOIN_INNER_3_463131_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4289178_output: " << tbl_JOIN_INNER_TD_4289178_output.getNumRow() << " " << "tbl_Filter_TD_4612521_output: " << tbl_Filter_TD_4612521_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_432619_s, &tv_r_Sort_2_432619_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_335662_output: " << tbl_JOIN_INNER_TD_335662_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_778806_s, &tv_r_LocalLimit_1_778806_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2419311_output: " << tbl_Sort_TD_2419311_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_387820_s, &tv_r_GlobalLimit_0_387820_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1966644_output: " << tbl_LocalLimit_TD_1966644_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.1004243 * 1000 << "ms" << std::endl; 
    return 0; 
}
