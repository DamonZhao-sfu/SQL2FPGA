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

#include "cfgFunc_q26.hpp" 
#include "q26.hpp" 

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
    std::cout << "NOTE:running query #26\n."; 
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
    Table tbl_GlobalLimit_TD_0929814_output("tbl_GlobalLimit_TD_0929814_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0929814_output.allocateHost();
    Table tbl_LocalLimit_TD_1131871_output("tbl_LocalLimit_TD_1131871_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1131871_output.allocateHost();
    Table tbl_Sort_TD_2936640_output("tbl_Sort_TD_2936640_output", 6100000, 5, "");
    tbl_Sort_TD_2936640_output.allocateHost();
    Table tbl_Aggregate_TD_3752206_output("tbl_Aggregate_TD_3752206_output", 6100000, 5, "");
    tbl_Aggregate_TD_3752206_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4952724_output("tbl_JOIN_INNER_TD_4952724_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4952724_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5580582_output("tbl_JOIN_INNER_TD_5580582_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5580582_output.allocateHost();
    Table tbl_Filter_TD_5872233_output("tbl_Filter_TD_5872233_output", 6100000, 1, "");
    tbl_Filter_TD_5872233_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6466058_output("tbl_JOIN_INNER_TD_6466058_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6466058_output.allocateHost();
    Table tbl_Filter_TD_6994985_output("tbl_Filter_TD_6994985_output", 6100000, 2, "");
    tbl_Filter_TD_6994985_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6506664_input;
    tbl_SerializeFromObject_TD_6506664_input = Table("promotion", promotion_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6506664_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_6506664_input.addCol("p_channel_email", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6506664_input.addCol("p_channel_event", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6506664_input.allocateHost();
    tbl_SerializeFromObject_TD_6506664_input.loadHost();
    Table tbl_JOIN_INNER_TD_7128871_output("tbl_JOIN_INNER_TD_7128871_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7128871_output.allocateHost();
    Table tbl_Filter_TD_7510349_output("tbl_Filter_TD_7510349_output", 6100000, 1, "");
    tbl_Filter_TD_7510349_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7825808_input;
    tbl_SerializeFromObject_TD_7825808_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7825808_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7825808_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7825808_input.allocateHost();
    tbl_SerializeFromObject_TD_7825808_input.loadHost();
    Table tbl_Filter_TD_8301634_output("tbl_Filter_TD_8301634_output", 6100000, 8, "");
    tbl_Filter_TD_8301634_output.allocateHost();
    Table tbl_Filter_TD_8411038_output("tbl_Filter_TD_8411038_output", 6100000, 1, "");
    tbl_Filter_TD_8411038_output.allocateHost();
    Table tbl_SerializeFromObject_TD_839714_input;
    tbl_SerializeFromObject_TD_839714_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_839714_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_839714_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_839714_input.allocateHost();
    tbl_SerializeFromObject_TD_839714_input.loadHost();
    Table tbl_SerializeFromObject_TD_9634658_input;
    tbl_SerializeFromObject_TD_9634658_input = Table("catalog_sales", catalog_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_9634658_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9634658_input.addCol("cs_bill_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_9634658_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_9634658_input.addCol("cs_promo_sk", 4);
    tbl_SerializeFromObject_TD_9634658_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_9634658_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_9634658_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_9634658_input.addCol("cs_coupon_amt", 4);
    tbl_SerializeFromObject_TD_9634658_input.allocateHost();
    tbl_SerializeFromObject_TD_9634658_input.loadHost();
    Table tbl_SerializeFromObject_TD_951368_input;
    tbl_SerializeFromObject_TD_951368_input = Table("customer_demographics", customer_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_951368_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_951368_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_951368_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_951368_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_951368_input.allocateHost();
    tbl_SerializeFromObject_TD_951368_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_6466058_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7128871_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7510349_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8301634_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8411038_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_6466058_cmds;
    cfg_JOIN_INNER_TD_6466058_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6466058_gqe_join (cfg_JOIN_INNER_TD_6466058_cmds.cmd);
    cfg_JOIN_INNER_TD_6466058_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7128871_cmds;
    cfg_JOIN_INNER_TD_7128871_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7128871_gqe_join (cfg_JOIN_INNER_TD_7128871_cmds.cmd);
    cfg_JOIN_INNER_TD_7128871_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_6466058;
    krnl_JOIN_INNER_TD_6466058 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6466058.setup(tbl_JOIN_INNER_TD_7128871_output, tbl_Filter_TD_7510349_output, tbl_JOIN_INNER_TD_6466058_output, cfg_JOIN_INNER_TD_6466058_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7128871;
    krnl_JOIN_INNER_TD_7128871 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7128871.setup(tbl_Filter_TD_8301634_output, tbl_Filter_TD_8411038_output, tbl_JOIN_INNER_TD_7128871_output, cfg_JOIN_INNER_TD_7128871_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_6466058;
    trans_JOIN_INNER_TD_6466058.setq(q_h);
    trans_JOIN_INNER_TD_6466058.add(&(cfg_JOIN_INNER_TD_6466058_cmds));
    transEngine trans_JOIN_INNER_TD_6466058_out;
    trans_JOIN_INNER_TD_6466058_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7128871;
    trans_JOIN_INNER_TD_7128871.setq(q_h);
    trans_JOIN_INNER_TD_7128871.add(&(cfg_JOIN_INNER_TD_7128871_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6466058;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6466058;
    std::vector<cl::Event> events_JOIN_INNER_TD_6466058;
    events_h2d_wr_JOIN_INNER_TD_6466058.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6466058.resize(1);
    events_JOIN_INNER_TD_6466058.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6466058;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6466058;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7128871;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7128871;
    std::vector<cl::Event> events_JOIN_INNER_TD_7128871;
    events_h2d_wr_JOIN_INNER_TD_7128871.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7128871.resize(1);
    events_JOIN_INNER_TD_7128871.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7128871;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7128871;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_158085_s, tv_r_Filter_8_158085_e;
    gettimeofday(&tv_r_Filter_8_158085_s, 0);
    SW_Filter_TD_8411038(tbl_SerializeFromObject_TD_951368_input, tbl_Filter_TD_8411038_output);
    gettimeofday(&tv_r_Filter_8_158085_e, 0);

    struct timeval tv_r_Filter_8_582833_s, tv_r_Filter_8_582833_e;
    gettimeofday(&tv_r_Filter_8_582833_s, 0);
    SW_Filter_TD_8301634(tbl_SerializeFromObject_TD_9634658_input, tbl_Filter_TD_8301634_output);
    gettimeofday(&tv_r_Filter_8_582833_e, 0);

    struct timeval tv_r_Filter_7_529880_s, tv_r_Filter_7_529880_e;
    gettimeofday(&tv_r_Filter_7_529880_s, 0);
    SW_Filter_TD_7510349(tbl_SerializeFromObject_TD_839714_input, tbl_Filter_TD_7510349_output);
    gettimeofday(&tv_r_Filter_7_529880_e, 0);

    struct timeval tv_r_JOIN_INNER_7_918657_s, tv_r_JOIN_INNER_7_918657_e;
    gettimeofday(&tv_r_JOIN_INNER_7_918657_s, 0);
    trans_JOIN_INNER_TD_7128871.add(&(tbl_Filter_TD_8301634_output));
    trans_JOIN_INNER_TD_7128871.add(&(tbl_Filter_TD_8411038_output));
    trans_JOIN_INNER_TD_7128871.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7128871), &(events_h2d_wr_JOIN_INNER_TD_7128871[0]));
    events_grp_JOIN_INNER_TD_7128871.push_back(events_h2d_wr_JOIN_INNER_TD_7128871[0]);
    krnl_JOIN_INNER_TD_7128871.run(0, &(events_grp_JOIN_INNER_TD_7128871), &(events_JOIN_INNER_TD_7128871[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_918657_e, 0);

    struct timeval tv_r_Filter_6_386198_s, tv_r_Filter_6_386198_e;
    gettimeofday(&tv_r_Filter_6_386198_s, 0);
    SW_Filter_TD_6994985(tbl_SerializeFromObject_TD_7825808_input, tbl_Filter_TD_6994985_output);
    gettimeofday(&tv_r_Filter_6_386198_e, 0);

    struct timeval tv_r_JOIN_INNER_6_421673_s, tv_r_JOIN_INNER_6_421673_e;
    gettimeofday(&tv_r_JOIN_INNER_6_421673_s, 0);
    prev_events_grp_JOIN_INNER_TD_6466058.push_back(events_h2d_wr_JOIN_INNER_TD_7128871[0]);
    trans_JOIN_INNER_TD_6466058.add(&(tbl_Filter_TD_7510349_output));
    trans_JOIN_INNER_TD_6466058.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6466058), &(events_h2d_wr_JOIN_INNER_TD_6466058[0]));
    events_grp_JOIN_INNER_TD_6466058.push_back(events_h2d_wr_JOIN_INNER_TD_6466058[0]);
    events_grp_JOIN_INNER_TD_6466058.push_back(events_JOIN_INNER_TD_7128871[0]);
    krnl_JOIN_INNER_TD_6466058.run(0, &(events_grp_JOIN_INNER_TD_6466058), &(events_JOIN_INNER_TD_6466058[0]));
    
    trans_JOIN_INNER_TD_6466058_out.add(&(tbl_JOIN_INNER_TD_6466058_output));
    trans_JOIN_INNER_TD_6466058_out.dev2host(0, &(events_JOIN_INNER_TD_6466058), &(events_d2h_rd_JOIN_INNER_TD_6466058[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_421673_e, 0);

    struct timeval tv_r_Filter_5_103517_s, tv_r_Filter_5_103517_e;
    gettimeofday(&tv_r_Filter_5_103517_s, 0);
    SW_Filter_TD_5872233(tbl_SerializeFromObject_TD_6506664_input, tbl_Filter_TD_5872233_output);
    gettimeofday(&tv_r_Filter_5_103517_e, 0);

    struct timeval tv_r_JOIN_INNER_5_228622_s, tv_r_JOIN_INNER_5_228622_e;
    gettimeofday(&tv_r_JOIN_INNER_5_228622_s, 0);
    SW_JOIN_INNER_TD_5580582(tbl_JOIN_INNER_TD_6466058_output, tbl_Filter_TD_6994985_output, tbl_JOIN_INNER_TD_5580582_output);
    gettimeofday(&tv_r_JOIN_INNER_5_228622_e, 0);

    struct timeval tv_r_JOIN_INNER_4_734616_s, tv_r_JOIN_INNER_4_734616_e;
    gettimeofday(&tv_r_JOIN_INNER_4_734616_s, 0);
    SW_JOIN_INNER_TD_4952724(tbl_JOIN_INNER_TD_5580582_output, tbl_Filter_TD_5872233_output, tbl_JOIN_INNER_TD_4952724_output);
    gettimeofday(&tv_r_JOIN_INNER_4_734616_e, 0);

    struct timeval tv_r_Aggregate_3_44224_s, tv_r_Aggregate_3_44224_e;
    gettimeofday(&tv_r_Aggregate_3_44224_s, 0);
    SW_Aggregate_TD_3752206(tbl_JOIN_INNER_TD_4952724_output, tbl_Aggregate_TD_3752206_output);
    gettimeofday(&tv_r_Aggregate_3_44224_e, 0);

    struct timeval tv_r_Sort_2_29362_s, tv_r_Sort_2_29362_e;
    gettimeofday(&tv_r_Sort_2_29362_s, 0);
    SW_Sort_TD_2936640(tbl_Aggregate_TD_3752206_output, tbl_Sort_TD_2936640_output);
    gettimeofday(&tv_r_Sort_2_29362_e, 0);

    struct timeval tv_r_LocalLimit_1_190985_s, tv_r_LocalLimit_1_190985_e;
    gettimeofday(&tv_r_LocalLimit_1_190985_s, 0);
    SW_LocalLimit_TD_1131871(tbl_Sort_TD_2936640_output, tbl_LocalLimit_TD_1131871_output);
    gettimeofday(&tv_r_LocalLimit_1_190985_e, 0);

    struct timeval tv_r_GlobalLimit_0_372687_s, tv_r_GlobalLimit_0_372687_e;
    gettimeofday(&tv_r_GlobalLimit_0_372687_s, 0);
    SW_GlobalLimit_TD_0929814(tbl_LocalLimit_TD_1131871_output, tbl_GlobalLimit_TD_0929814_output);
    gettimeofday(&tv_r_GlobalLimit_0_372687_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_158085_s, &tv_r_Filter_8_158085_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_951368_input: " << tbl_SerializeFromObject_TD_951368_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_582833_s, &tv_r_Filter_8_582833_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9634658_input: " << tbl_SerializeFromObject_TD_9634658_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_529880_s, &tv_r_Filter_7_529880_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_839714_input: " << tbl_SerializeFromObject_TD_839714_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_918657_s, &tv_r_JOIN_INNER_7_918657_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8301634_output: " << tbl_Filter_TD_8301634_output.getNumRow() << " " << "tbl_Filter_TD_8411038_output: " << tbl_Filter_TD_8411038_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_386198_s, &tv_r_Filter_6_386198_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7825808_input: " << tbl_SerializeFromObject_TD_7825808_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_421673_s, &tv_r_JOIN_INNER_6_421673_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7128871_output: " << tbl_JOIN_INNER_TD_7128871_output.getNumRow() << " " << "tbl_Filter_TD_7510349_output: " << tbl_Filter_TD_7510349_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_103517_s, &tv_r_Filter_5_103517_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6506664_input: " << tbl_SerializeFromObject_TD_6506664_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_228622_s, &tv_r_JOIN_INNER_5_228622_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6466058_output: " << tbl_JOIN_INNER_TD_6466058_output.getNumRow() << " " << "tbl_Filter_TD_6994985_output: " << tbl_Filter_TD_6994985_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_734616_s, &tv_r_JOIN_INNER_4_734616_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5580582_output: " << tbl_JOIN_INNER_TD_5580582_output.getNumRow() << " " << "tbl_Filter_TD_5872233_output: " << tbl_Filter_TD_5872233_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_44224_s, &tv_r_Aggregate_3_44224_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4952724_output: " << tbl_JOIN_INNER_TD_4952724_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_29362_s, &tv_r_Sort_2_29362_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3752206_output: " << tbl_Aggregate_TD_3752206_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_190985_s, &tv_r_LocalLimit_1_190985_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2936640_output: " << tbl_Sort_TD_2936640_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_372687_s, &tv_r_GlobalLimit_0_372687_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1131871_output: " << tbl_LocalLimit_TD_1131871_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.7334877 * 1000 << "ms" << std::endl; 
    return 0; 
}
