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

#include "cfgFunc_q69.hpp" 
#include "q69.hpp" 

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
    std::cout << "NOTE:running query #69\n."; 
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
    Table tbl_GlobalLimit_TD_0847171_output("tbl_GlobalLimit_TD_0847171_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0847171_output.allocateHost();
    Table tbl_LocalLimit_TD_1703287_output("tbl_LocalLimit_TD_1703287_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1703287_output.allocateHost();
    Table tbl_Sort_TD_2979666_output("tbl_Sort_TD_2979666_output", 6100000, 8, "");
    tbl_Sort_TD_2979666_output.allocateHost();
    Table tbl_Aggregate_TD_3102527_output("tbl_Aggregate_TD_3102527_output", 6100000, 8, "");
    tbl_Aggregate_TD_3102527_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4400500_output("tbl_JOIN_INNER_TD_4400500_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4400500_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5985186_output("tbl_JOIN_INNER_TD_5985186_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5985186_output.allocateHost();
    Table tbl_Filter_TD_5854071_output("tbl_Filter_TD_5854071_output", 6100000, 6, "");
    tbl_Filter_TD_5854071_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_661965_output("tbl_JOIN_LEFTANTI_TD_661965_output", 6100000, 2, "");
    tbl_JOIN_LEFTANTI_TD_661965_output.allocateHost();
    Table tbl_Filter_TD_6649189_output("tbl_Filter_TD_6649189_output", 6100000, 1, "");
    tbl_Filter_TD_6649189_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6704228_input;
    tbl_SerializeFromObject_TD_6704228_input = Table("customer_demographics", customer_demographics_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_6704228_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_6704228_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6704228_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6704228_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6704228_input.addCol("cd_purchase_estimate", 4);
    tbl_SerializeFromObject_TD_6704228_input.addCol("cd_credit_rating", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6704228_input.allocateHost();
    tbl_SerializeFromObject_TD_6704228_input.loadHost();
    Table tbl_JOIN_LEFTANTI_TD_7896858_output("tbl_JOIN_LEFTANTI_TD_7896858_output", 6100000, 3, "");
    tbl_JOIN_LEFTANTI_TD_7896858_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7324098_output("tbl_JOIN_INNER_TD_7324098_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_7324098_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7641347_input;
    tbl_SerializeFromObject_TD_7641347_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7641347_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_7641347_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7641347_input.allocateHost();
    tbl_SerializeFromObject_TD_7641347_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_8689843_output("tbl_JOIN_LEFTSEMI_TD_8689843_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_8689843_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8194112_output("tbl_JOIN_INNER_TD_8194112_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_8194112_output.allocateHost();
    Table tbl_Filter_TD_8594710_output("tbl_Filter_TD_8594710_output", 6100000, 2, "");
    tbl_Filter_TD_8594710_output.allocateHost();
    Table tbl_Filter_TD_8312637_output("tbl_Filter_TD_8312637_output", 6100000, 1, "");
    tbl_Filter_TD_8312637_output.allocateHost();
    Table tbl_Filter_TD_9351736_output("tbl_Filter_TD_9351736_output", 6100000, 3, "");
    tbl_Filter_TD_9351736_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9579200_output("tbl_JOIN_INNER_TD_9579200_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9579200_output.allocateHost();
    Table tbl_Filter_TD_9818100_output("tbl_Filter_TD_9818100_output", 6100000, 2, "");
    tbl_Filter_TD_9818100_output.allocateHost();
    Table tbl_Filter_TD_9296994_output("tbl_Filter_TD_9296994_output", 6100000, 1, "");
    tbl_Filter_TD_9296994_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9144993_input;
    tbl_SerializeFromObject_TD_9144993_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9144993_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9144993_input.addCol("cs_ship_customer_sk", 4);
    tbl_SerializeFromObject_TD_9144993_input.allocateHost();
    tbl_SerializeFromObject_TD_9144993_input.loadHost();
    Table tbl_SerializeFromObject_TD_9204594_input;
    tbl_SerializeFromObject_TD_9204594_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9204594_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9204594_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_9204594_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_9204594_input.allocateHost();
    tbl_SerializeFromObject_TD_9204594_input.loadHost();
    Table tbl_SerializeFromObject_TD_10254394_input;
    tbl_SerializeFromObject_TD_10254394_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10254394_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_10254394_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_10254394_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_10254394_input.allocateHost();
    tbl_SerializeFromObject_TD_10254394_input.loadHost();
    Table tbl_Filter_TD_10258340_output("tbl_Filter_TD_10258340_output", 6100000, 2, "");
    tbl_Filter_TD_10258340_output.allocateHost();
    Table tbl_Filter_TD_10878670_output("tbl_Filter_TD_10878670_output", 6100000, 1, "");
    tbl_Filter_TD_10878670_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10792473_input;
    tbl_SerializeFromObject_TD_10792473_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10792473_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10792473_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_10792473_input.allocateHost();
    tbl_SerializeFromObject_TD_10792473_input.loadHost();
    Table tbl_SerializeFromObject_TD_10831247_input;
    tbl_SerializeFromObject_TD_10831247_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10831247_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10831247_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10831247_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10831247_input.allocateHost();
    tbl_SerializeFromObject_TD_10831247_input.loadHost();
    Table tbl_SerializeFromObject_TD_1191122_input;
    tbl_SerializeFromObject_TD_1191122_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1191122_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1191122_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_1191122_input.allocateHost();
    tbl_SerializeFromObject_TD_1191122_input.loadHost();
    Table tbl_SerializeFromObject_TD_11599506_input;
    tbl_SerializeFromObject_TD_11599506_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11599506_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11599506_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_11599506_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_11599506_input.allocateHost();
    tbl_SerializeFromObject_TD_11599506_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5985186_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTANTI_TD_661965_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6649189_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTANTI_TD_7896858_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7324098_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_8689843_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8194112_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8594710_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8312637_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9351736_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9579200_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9818100_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9296994_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10258340_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10878670_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5985186_cmds;
    cfg_JOIN_INNER_TD_5985186_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5985186_gqe_join (cfg_JOIN_INNER_TD_5985186_cmds.cmd);
    cfg_JOIN_INNER_TD_5985186_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTANTI_TD_661965_cmds;
    cfg_JOIN_LEFTANTI_TD_661965_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTANTI_TD_661965_gqe_join (cfg_JOIN_LEFTANTI_TD_661965_cmds.cmd);
    cfg_JOIN_LEFTANTI_TD_661965_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTANTI_TD_7896858_cmds;
    cfg_JOIN_LEFTANTI_TD_7896858_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTANTI_TD_7896858_gqe_join (cfg_JOIN_LEFTANTI_TD_7896858_cmds.cmd);
    cfg_JOIN_LEFTANTI_TD_7896858_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7324098_cmds;
    cfg_JOIN_INNER_TD_7324098_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7324098_gqe_join (cfg_JOIN_INNER_TD_7324098_cmds.cmd);
    cfg_JOIN_INNER_TD_7324098_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_8689843_cmds;
    cfg_JOIN_LEFTSEMI_TD_8689843_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_8689843_gqe_join (cfg_JOIN_LEFTSEMI_TD_8689843_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_8689843_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8194112_cmds;
    cfg_JOIN_INNER_TD_8194112_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8194112_gqe_join (cfg_JOIN_INNER_TD_8194112_cmds.cmd);
    cfg_JOIN_INNER_TD_8194112_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9579200_cmds;
    cfg_JOIN_INNER_TD_9579200_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9579200_gqe_join (cfg_JOIN_INNER_TD_9579200_cmds.cmd);
    cfg_JOIN_INNER_TD_9579200_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5985186;
    krnl_JOIN_INNER_TD_5985186 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5985186.setup(tbl_JOIN_LEFTANTI_TD_661965_output, tbl_Filter_TD_6649189_output, tbl_JOIN_INNER_TD_5985186_output, cfg_JOIN_INNER_TD_5985186_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTANTI_TD_661965;
    krnl_JOIN_LEFTANTI_TD_661965 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTANTI_TD_661965.setup(tbl_JOIN_INNER_TD_7324098_output, tbl_JOIN_LEFTANTI_TD_7896858_output, tbl_JOIN_LEFTANTI_TD_661965_output, cfg_JOIN_LEFTANTI_TD_661965_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTANTI_TD_7896858;
    krnl_JOIN_LEFTANTI_TD_7896858 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTANTI_TD_7896858.setup(tbl_JOIN_INNER_TD_8194112_output, tbl_JOIN_LEFTSEMI_TD_8689843_output, tbl_JOIN_LEFTANTI_TD_7896858_output, cfg_JOIN_LEFTANTI_TD_7896858_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7324098;
    krnl_JOIN_INNER_TD_7324098 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7324098.setup(tbl_Filter_TD_8594710_output, tbl_Filter_TD_8312637_output, tbl_JOIN_INNER_TD_7324098_output, cfg_JOIN_INNER_TD_7324098_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_8689843;
    krnl_JOIN_LEFTSEMI_TD_8689843 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_8689843.setup(tbl_JOIN_INNER_TD_9579200_output, tbl_Filter_TD_9351736_output, tbl_JOIN_LEFTSEMI_TD_8689843_output, cfg_JOIN_LEFTSEMI_TD_8689843_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8194112;
    krnl_JOIN_INNER_TD_8194112 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8194112.setup(tbl_Filter_TD_9818100_output, tbl_Filter_TD_9296994_output, tbl_JOIN_INNER_TD_8194112_output, cfg_JOIN_INNER_TD_8194112_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9579200;
    krnl_JOIN_INNER_TD_9579200 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9579200.setup(tbl_Filter_TD_10258340_output, tbl_Filter_TD_10878670_output, tbl_JOIN_INNER_TD_9579200_output, cfg_JOIN_INNER_TD_9579200_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5985186;
    trans_JOIN_INNER_TD_5985186.setq(q_h);
    trans_JOIN_INNER_TD_5985186.add(&(cfg_JOIN_INNER_TD_5985186_cmds));
    transEngine trans_JOIN_INNER_TD_5985186_out;
    trans_JOIN_INNER_TD_5985186_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTANTI_TD_661965;
    trans_JOIN_LEFTANTI_TD_661965.setq(q_h);
    trans_JOIN_LEFTANTI_TD_661965.add(&(cfg_JOIN_LEFTANTI_TD_661965_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTANTI_TD_7896858;
    trans_JOIN_LEFTANTI_TD_7896858.setq(q_h);
    trans_JOIN_LEFTANTI_TD_7896858.add(&(cfg_JOIN_LEFTANTI_TD_7896858_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7324098;
    trans_JOIN_INNER_TD_7324098.setq(q_h);
    trans_JOIN_INNER_TD_7324098.add(&(cfg_JOIN_INNER_TD_7324098_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_8689843;
    trans_JOIN_LEFTSEMI_TD_8689843.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_8689843.add(&(cfg_JOIN_LEFTSEMI_TD_8689843_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8194112;
    trans_JOIN_INNER_TD_8194112.setq(q_h);
    trans_JOIN_INNER_TD_8194112.add(&(cfg_JOIN_INNER_TD_8194112_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9579200;
    trans_JOIN_INNER_TD_9579200.setq(q_h);
    trans_JOIN_INNER_TD_9579200.add(&(cfg_JOIN_INNER_TD_9579200_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5985186;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5985186;
    std::vector<cl::Event> events_JOIN_INNER_TD_5985186;
    events_h2d_wr_JOIN_INNER_TD_5985186.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5985186.resize(1);
    events_JOIN_INNER_TD_5985186.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5985186;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5985186;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTANTI_TD_661965;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTANTI_TD_661965;
    std::vector<cl::Event> events_JOIN_LEFTANTI_TD_661965;
    events_h2d_wr_JOIN_LEFTANTI_TD_661965.resize(1);
    events_d2h_rd_JOIN_LEFTANTI_TD_661965.resize(1);
    events_JOIN_LEFTANTI_TD_661965.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTANTI_TD_661965;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTANTI_TD_661965;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTANTI_TD_7896858;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTANTI_TD_7896858;
    std::vector<cl::Event> events_JOIN_LEFTANTI_TD_7896858;
    events_h2d_wr_JOIN_LEFTANTI_TD_7896858.resize(1);
    events_d2h_rd_JOIN_LEFTANTI_TD_7896858.resize(1);
    events_JOIN_LEFTANTI_TD_7896858.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTANTI_TD_7896858;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTANTI_TD_7896858;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7324098;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7324098;
    std::vector<cl::Event> events_JOIN_INNER_TD_7324098;
    events_h2d_wr_JOIN_INNER_TD_7324098.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7324098.resize(1);
    events_JOIN_INNER_TD_7324098.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7324098;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7324098;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_8689843;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_8689843;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_8689843;
    events_h2d_wr_JOIN_LEFTSEMI_TD_8689843.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_8689843.resize(1);
    events_JOIN_LEFTSEMI_TD_8689843.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_8689843;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_8689843;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8194112;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8194112;
    std::vector<cl::Event> events_JOIN_INNER_TD_8194112;
    events_h2d_wr_JOIN_INNER_TD_8194112.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8194112.resize(1);
    events_JOIN_INNER_TD_8194112.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8194112;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8194112;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9579200;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9579200;
    std::vector<cl::Event> events_JOIN_INNER_TD_9579200;
    events_h2d_wr_JOIN_INNER_TD_9579200.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9579200.resize(1);
    events_JOIN_INNER_TD_9579200.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9579200;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9579200;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_10_656479_s, tv_r_Filter_10_656479_e;
    gettimeofday(&tv_r_Filter_10_656479_s, 0);
    SW_Filter_TD_10878670(tbl_SerializeFromObject_TD_11599506_input, tbl_Filter_TD_10878670_output);
    gettimeofday(&tv_r_Filter_10_656479_e, 0);

    struct timeval tv_r_Filter_10_724240_s, tv_r_Filter_10_724240_e;
    gettimeofday(&tv_r_Filter_10_724240_s, 0);
    SW_Filter_TD_10258340(tbl_SerializeFromObject_TD_1191122_input, tbl_Filter_TD_10258340_output);
    gettimeofday(&tv_r_Filter_10_724240_e, 0);

    struct timeval tv_r_Filter_9_94046_s, tv_r_Filter_9_94046_e;
    gettimeofday(&tv_r_Filter_9_94046_s, 0);
    SW_Filter_TD_9296994(tbl_SerializeFromObject_TD_10831247_input, tbl_Filter_TD_9296994_output);
    gettimeofday(&tv_r_Filter_9_94046_e, 0);

    struct timeval tv_r_Filter_9_511393_s, tv_r_Filter_9_511393_e;
    gettimeofday(&tv_r_Filter_9_511393_s, 0);
    SW_Filter_TD_9818100(tbl_SerializeFromObject_TD_10792473_input, tbl_Filter_TD_9818100_output);
    gettimeofday(&tv_r_Filter_9_511393_e, 0);

    struct timeval tv_r_JOIN_INNER_9_413886_s, tv_r_JOIN_INNER_9_413886_e;
    gettimeofday(&tv_r_JOIN_INNER_9_413886_s, 0);
    trans_JOIN_INNER_TD_9579200.add(&(tbl_Filter_TD_10258340_output));
    trans_JOIN_INNER_TD_9579200.add(&(tbl_Filter_TD_10878670_output));
    trans_JOIN_INNER_TD_9579200.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9579200), &(events_h2d_wr_JOIN_INNER_TD_9579200[0]));
    events_grp_JOIN_INNER_TD_9579200.push_back(events_h2d_wr_JOIN_INNER_TD_9579200[0]);
    krnl_JOIN_INNER_TD_9579200.run(0, &(events_grp_JOIN_INNER_TD_9579200), &(events_JOIN_INNER_TD_9579200[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_413886_e, 0);

    struct timeval tv_r_Filter_9_179081_s, tv_r_Filter_9_179081_e;
    gettimeofday(&tv_r_Filter_9_179081_s, 0);
    SW_Filter_TD_9351736(tbl_SerializeFromObject_TD_10254394_input, tbl_Filter_TD_9351736_output);
    gettimeofday(&tv_r_Filter_9_179081_e, 0);

    struct timeval tv_r_Filter_8_653076_s, tv_r_Filter_8_653076_e;
    gettimeofday(&tv_r_Filter_8_653076_s, 0);
    SW_Filter_TD_8312637(tbl_SerializeFromObject_TD_9204594_input, tbl_Filter_TD_8312637_output);
    gettimeofday(&tv_r_Filter_8_653076_e, 0);

    struct timeval tv_r_Filter_8_37770_s, tv_r_Filter_8_37770_e;
    gettimeofday(&tv_r_Filter_8_37770_s, 0);
    SW_Filter_TD_8594710(tbl_SerializeFromObject_TD_9144993_input, tbl_Filter_TD_8594710_output);
    gettimeofday(&tv_r_Filter_8_37770_e, 0);

    struct timeval tv_r_JOIN_INNER_8_901792_s, tv_r_JOIN_INNER_8_901792_e;
    gettimeofday(&tv_r_JOIN_INNER_8_901792_s, 0);
    trans_JOIN_INNER_TD_8194112.add(&(tbl_Filter_TD_9818100_output));
    trans_JOIN_INNER_TD_8194112.add(&(tbl_Filter_TD_9296994_output));
    trans_JOIN_INNER_TD_8194112.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8194112), &(events_h2d_wr_JOIN_INNER_TD_8194112[0]));
    events_grp_JOIN_INNER_TD_8194112.push_back(events_h2d_wr_JOIN_INNER_TD_8194112[0]);
    krnl_JOIN_INNER_TD_8194112.run(0, &(events_grp_JOIN_INNER_TD_8194112), &(events_JOIN_INNER_TD_8194112[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_901792_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_306519_s, tv_r_JOIN_LEFTSEMI_8_306519_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_306519_s, 0);
    prev_events_grp_JOIN_LEFTSEMI_TD_8689843.push_back(events_h2d_wr_JOIN_INNER_TD_9579200[0]);
    trans_JOIN_LEFTSEMI_TD_8689843.add(&(tbl_Filter_TD_9351736_output));
    trans_JOIN_LEFTSEMI_TD_8689843.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_8689843), &(events_h2d_wr_JOIN_LEFTSEMI_TD_8689843[0]));
    events_grp_JOIN_LEFTSEMI_TD_8689843.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8689843[0]);
    events_grp_JOIN_LEFTSEMI_TD_8689843.push_back(events_JOIN_INNER_TD_9579200[0]);
    krnl_JOIN_LEFTSEMI_TD_8689843.run(0, &(events_grp_JOIN_LEFTSEMI_TD_8689843), &(events_JOIN_LEFTSEMI_TD_8689843[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_306519_e, 0);

    struct timeval tv_r_JOIN_INNER_7_294091_s, tv_r_JOIN_INNER_7_294091_e;
    gettimeofday(&tv_r_JOIN_INNER_7_294091_s, 0);
    trans_JOIN_INNER_TD_7324098.add(&(tbl_Filter_TD_8594710_output));
    trans_JOIN_INNER_TD_7324098.add(&(tbl_Filter_TD_8312637_output));
    trans_JOIN_INNER_TD_7324098.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7324098), &(events_h2d_wr_JOIN_INNER_TD_7324098[0]));
    events_grp_JOIN_INNER_TD_7324098.push_back(events_h2d_wr_JOIN_INNER_TD_7324098[0]);
    krnl_JOIN_INNER_TD_7324098.run(0, &(events_grp_JOIN_INNER_TD_7324098), &(events_JOIN_INNER_TD_7324098[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_294091_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_7_387157_s, tv_r_JOIN_LEFTANTI_7_387157_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_7_387157_s, 0);
    prev_events_grp_JOIN_LEFTANTI_TD_7896858.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8689843[0]);
    prev_events_grp_JOIN_LEFTANTI_TD_7896858.push_back(events_h2d_wr_JOIN_INNER_TD_8194112[0]);
    trans_JOIN_LEFTANTI_TD_7896858.host2dev(0, &(prev_events_grp_JOIN_LEFTANTI_TD_7896858), &(events_h2d_wr_JOIN_LEFTANTI_TD_7896858[0]));
    events_grp_JOIN_LEFTANTI_TD_7896858.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_7896858[0]);
    events_grp_JOIN_LEFTANTI_TD_7896858.push_back(events_JOIN_LEFTSEMI_TD_8689843[0]);
    events_grp_JOIN_LEFTANTI_TD_7896858.push_back(events_JOIN_INNER_TD_8194112[0]);
    krnl_JOIN_LEFTANTI_TD_7896858.run(0, &(events_grp_JOIN_LEFTANTI_TD_7896858), &(events_JOIN_LEFTANTI_TD_7896858[0]));
    gettimeofday(&tv_r_JOIN_LEFTANTI_7_387157_e, 0);

    struct timeval tv_r_Filter_6_878715_s, tv_r_Filter_6_878715_e;
    gettimeofday(&tv_r_Filter_6_878715_s, 0);
    SW_Filter_TD_6649189(tbl_SerializeFromObject_TD_7641347_input, tbl_Filter_TD_6649189_output);
    gettimeofday(&tv_r_Filter_6_878715_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_6_501921_s, tv_r_JOIN_LEFTANTI_6_501921_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_6_501921_s, 0);
    prev_events_grp_JOIN_LEFTANTI_TD_661965.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_7896858[0]);
    prev_events_grp_JOIN_LEFTANTI_TD_661965.push_back(events_h2d_wr_JOIN_INNER_TD_7324098[0]);
    trans_JOIN_LEFTANTI_TD_661965.host2dev(0, &(prev_events_grp_JOIN_LEFTANTI_TD_661965), &(events_h2d_wr_JOIN_LEFTANTI_TD_661965[0]));
    events_grp_JOIN_LEFTANTI_TD_661965.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_661965[0]);
    events_grp_JOIN_LEFTANTI_TD_661965.push_back(events_JOIN_LEFTANTI_TD_7896858[0]);
    events_grp_JOIN_LEFTANTI_TD_661965.push_back(events_JOIN_INNER_TD_7324098[0]);
    krnl_JOIN_LEFTANTI_TD_661965.run(0, &(events_grp_JOIN_LEFTANTI_TD_661965), &(events_JOIN_LEFTANTI_TD_661965[0]));
    gettimeofday(&tv_r_JOIN_LEFTANTI_6_501921_e, 0);

    struct timeval tv_r_Filter_5_127991_s, tv_r_Filter_5_127991_e;
    gettimeofday(&tv_r_Filter_5_127991_s, 0);
    SW_Filter_TD_5854071(tbl_SerializeFromObject_TD_6704228_input, tbl_Filter_TD_5854071_output);
    gettimeofday(&tv_r_Filter_5_127991_e, 0);

    struct timeval tv_r_JOIN_INNER_5_686498_s, tv_r_JOIN_INNER_5_686498_e;
    gettimeofday(&tv_r_JOIN_INNER_5_686498_s, 0);
    prev_events_grp_JOIN_INNER_TD_5985186.push_back(events_h2d_wr_JOIN_LEFTANTI_TD_661965[0]);
    trans_JOIN_INNER_TD_5985186.add(&(tbl_Filter_TD_6649189_output));
    trans_JOIN_INNER_TD_5985186.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5985186), &(events_h2d_wr_JOIN_INNER_TD_5985186[0]));
    events_grp_JOIN_INNER_TD_5985186.push_back(events_h2d_wr_JOIN_INNER_TD_5985186[0]);
    events_grp_JOIN_INNER_TD_5985186.push_back(events_JOIN_LEFTANTI_TD_661965[0]);
    krnl_JOIN_INNER_TD_5985186.run(0, &(events_grp_JOIN_INNER_TD_5985186), &(events_JOIN_INNER_TD_5985186[0]));
    
    trans_JOIN_INNER_TD_5985186_out.add(&(tbl_JOIN_INNER_TD_5985186_output));
    trans_JOIN_INNER_TD_5985186_out.dev2host(0, &(events_JOIN_INNER_TD_5985186), &(events_d2h_rd_JOIN_INNER_TD_5985186[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_686498_e, 0);

    struct timeval tv_r_JOIN_INNER_4_456835_s, tv_r_JOIN_INNER_4_456835_e;
    gettimeofday(&tv_r_JOIN_INNER_4_456835_s, 0);
    SW_JOIN_INNER_TD_4400500(tbl_JOIN_INNER_TD_5985186_output, tbl_Filter_TD_5854071_output, tbl_JOIN_INNER_TD_4400500_output);
    gettimeofday(&tv_r_JOIN_INNER_4_456835_e, 0);

    struct timeval tv_r_Aggregate_3_215326_s, tv_r_Aggregate_3_215326_e;
    gettimeofday(&tv_r_Aggregate_3_215326_s, 0);
    SW_Aggregate_TD_3102527(tbl_JOIN_INNER_TD_4400500_output, tbl_Aggregate_TD_3102527_output);
    gettimeofday(&tv_r_Aggregate_3_215326_e, 0);

    struct timeval tv_r_Sort_2_268461_s, tv_r_Sort_2_268461_e;
    gettimeofday(&tv_r_Sort_2_268461_s, 0);
    SW_Sort_TD_2979666(tbl_Aggregate_TD_3102527_output, tbl_Sort_TD_2979666_output);
    gettimeofday(&tv_r_Sort_2_268461_e, 0);

    struct timeval tv_r_LocalLimit_1_358575_s, tv_r_LocalLimit_1_358575_e;
    gettimeofday(&tv_r_LocalLimit_1_358575_s, 0);
    SW_LocalLimit_TD_1703287(tbl_Sort_TD_2979666_output, tbl_LocalLimit_TD_1703287_output);
    gettimeofday(&tv_r_LocalLimit_1_358575_e, 0);

    struct timeval tv_r_GlobalLimit_0_352720_s, tv_r_GlobalLimit_0_352720_e;
    gettimeofday(&tv_r_GlobalLimit_0_352720_s, 0);
    SW_GlobalLimit_TD_0847171(tbl_LocalLimit_TD_1703287_output, tbl_GlobalLimit_TD_0847171_output);
    gettimeofday(&tv_r_GlobalLimit_0_352720_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_656479_s, &tv_r_Filter_10_656479_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11599506_input: " << tbl_SerializeFromObject_TD_11599506_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_724240_s, &tv_r_Filter_10_724240_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1191122_input: " << tbl_SerializeFromObject_TD_1191122_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_94046_s, &tv_r_Filter_9_94046_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10831247_input: " << tbl_SerializeFromObject_TD_10831247_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_511393_s, &tv_r_Filter_9_511393_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10792473_input: " << tbl_SerializeFromObject_TD_10792473_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_413886_s, &tv_r_JOIN_INNER_9_413886_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10258340_output: " << tbl_Filter_TD_10258340_output.getNumRow() << " " << "tbl_Filter_TD_10878670_output: " << tbl_Filter_TD_10878670_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_179081_s, &tv_r_Filter_9_179081_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10254394_input: " << tbl_SerializeFromObject_TD_10254394_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_653076_s, &tv_r_Filter_8_653076_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9204594_input: " << tbl_SerializeFromObject_TD_9204594_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_37770_s, &tv_r_Filter_8_37770_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9144993_input: " << tbl_SerializeFromObject_TD_9144993_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_901792_s, &tv_r_JOIN_INNER_8_901792_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9818100_output: " << tbl_Filter_TD_9818100_output.getNumRow() << " " << "tbl_Filter_TD_9296994_output: " << tbl_Filter_TD_9296994_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_306519_s, &tv_r_JOIN_LEFTSEMI_8_306519_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9351736_output: " << tbl_Filter_TD_9351736_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_9579200_output: " << tbl_JOIN_INNER_TD_9579200_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_294091_s, &tv_r_JOIN_INNER_7_294091_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8594710_output: " << tbl_Filter_TD_8594710_output.getNumRow() << " " << "tbl_Filter_TD_8312637_output: " << tbl_Filter_TD_8312637_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_7: " << tvdiff(&tv_r_JOIN_LEFTANTI_7_387157_s, &tv_r_JOIN_LEFTANTI_7_387157_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_8689843_output: " << tbl_JOIN_LEFTSEMI_TD_8689843_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_8194112_output: " << tbl_JOIN_INNER_TD_8194112_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_878715_s, &tv_r_Filter_6_878715_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7641347_input: " << tbl_SerializeFromObject_TD_7641347_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_6: " << tvdiff(&tv_r_JOIN_LEFTANTI_6_501921_s, &tv_r_JOIN_LEFTANTI_6_501921_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_7896858_output: " << tbl_JOIN_LEFTANTI_TD_7896858_output.getNumRow() << " " << "tbl_JOIN_INNER_TD_7324098_output: " << tbl_JOIN_INNER_TD_7324098_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_127991_s, &tv_r_Filter_5_127991_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6704228_input: " << tbl_SerializeFromObject_TD_6704228_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_686498_s, &tv_r_JOIN_INNER_5_686498_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_661965_output: " << tbl_JOIN_LEFTANTI_TD_661965_output.getNumRow() << " " << "tbl_Filter_TD_6649189_output: " << tbl_Filter_TD_6649189_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_456835_s, &tv_r_JOIN_INNER_4_456835_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5985186_output: " << tbl_JOIN_INNER_TD_5985186_output.getNumRow() << " " << "tbl_Filter_TD_5854071_output: " << tbl_Filter_TD_5854071_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_215326_s, &tv_r_Aggregate_3_215326_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4400500_output: " << tbl_JOIN_INNER_TD_4400500_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_268461_s, &tv_r_Sort_2_268461_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3102527_output: " << tbl_Aggregate_TD_3102527_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_358575_s, &tv_r_LocalLimit_1_358575_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2979666_output: " << tbl_Sort_TD_2979666_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_352720_s, &tv_r_GlobalLimit_0_352720_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1703287_output: " << tbl_LocalLimit_TD_1703287_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.8747053 * 1000 << "ms" << std::endl; 
    return 0; 
}
