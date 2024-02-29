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

#include "cfgFunc_q7.hpp" 
#include "q7.hpp" 

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
    std::cout << "NOTE:running query #7\n."; 
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
    Table tbl_GlobalLimit_TD_0698360_output("tbl_GlobalLimit_TD_0698360_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0698360_output.allocateHost();
    Table tbl_LocalLimit_TD_1807386_output("tbl_LocalLimit_TD_1807386_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1807386_output.allocateHost();
    Table tbl_Sort_TD_298244_output("tbl_Sort_TD_298244_output", 6100000, 5, "");
    tbl_Sort_TD_298244_output.allocateHost();
    Table tbl_Aggregate_TD_343662_output("tbl_Aggregate_TD_343662_output", 6100000, 5, "");
    tbl_Aggregate_TD_343662_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4493352_output("tbl_JOIN_INNER_TD_4493352_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4493352_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5455767_output("tbl_JOIN_INNER_TD_5455767_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5455767_output.allocateHost();
    Table tbl_Filter_TD_5514409_output("tbl_Filter_TD_5514409_output", 6100000, 1, "");
    tbl_Filter_TD_5514409_output.allocateHost();
    Table tbl_JOIN_INNER_TD_634276_output("tbl_JOIN_INNER_TD_634276_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_634276_output.allocateHost();
    Table tbl_Filter_TD_6247537_output("tbl_Filter_TD_6247537_output", 6100000, 2, "");
    tbl_Filter_TD_6247537_output.allocateHost();
    Table tbl_SerializeFromObject_TD_626586_input;
    tbl_SerializeFromObject_TD_626586_input = Table("promotion", promotion_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_626586_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_626586_input.addCol("p_channel_email", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_626586_input.addCol("p_channel_event", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_626586_input.allocateHost();
    tbl_SerializeFromObject_TD_626586_input.loadHost();
    Table tbl_JOIN_INNER_TD_7550095_output("tbl_JOIN_INNER_TD_7550095_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7550095_output.allocateHost();
    Table tbl_Filter_TD_7175512_output("tbl_Filter_TD_7175512_output", 6100000, 1, "");
    tbl_Filter_TD_7175512_output.allocateHost();
    Table tbl_SerializeFromObject_TD_784092_input;
    tbl_SerializeFromObject_TD_784092_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_784092_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_784092_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_784092_input.allocateHost();
    tbl_SerializeFromObject_TD_784092_input.loadHost();
    Table tbl_Filter_TD_8469237_output("tbl_Filter_TD_8469237_output", 6100000, 8, "");
    tbl_Filter_TD_8469237_output.allocateHost();
    Table tbl_Filter_TD_8322871_output("tbl_Filter_TD_8322871_output", 6100000, 1, "");
    tbl_Filter_TD_8322871_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8484499_input;
    tbl_SerializeFromObject_TD_8484499_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8484499_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8484499_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8484499_input.allocateHost();
    tbl_SerializeFromObject_TD_8484499_input.loadHost();
    Table tbl_SerializeFromObject_TD_9522515_input;
    tbl_SerializeFromObject_TD_9522515_input = Table("store_sales", store_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_9522515_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9522515_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9522515_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_9522515_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_9522515_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_9522515_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_9522515_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_9522515_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_9522515_input.allocateHost();
    tbl_SerializeFromObject_TD_9522515_input.loadHost();
    Table tbl_SerializeFromObject_TD_9943333_input;
    tbl_SerializeFromObject_TD_9943333_input = Table("customer_demographics", customer_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9943333_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9943333_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9943333_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9943333_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9943333_input.allocateHost();
    tbl_SerializeFromObject_TD_9943333_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_634276_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7550095_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7175512_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8469237_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8322871_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_634276_cmds;
    cfg_JOIN_INNER_TD_634276_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_634276_gqe_join (cfg_JOIN_INNER_TD_634276_cmds.cmd);
    cfg_JOIN_INNER_TD_634276_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7550095_cmds;
    cfg_JOIN_INNER_TD_7550095_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7550095_gqe_join (cfg_JOIN_INNER_TD_7550095_cmds.cmd);
    cfg_JOIN_INNER_TD_7550095_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_634276;
    krnl_JOIN_INNER_TD_634276 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_634276.setup(tbl_JOIN_INNER_TD_7550095_output, tbl_Filter_TD_7175512_output, tbl_JOIN_INNER_TD_634276_output, cfg_JOIN_INNER_TD_634276_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7550095;
    krnl_JOIN_INNER_TD_7550095 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7550095.setup(tbl_Filter_TD_8469237_output, tbl_Filter_TD_8322871_output, tbl_JOIN_INNER_TD_7550095_output, cfg_JOIN_INNER_TD_7550095_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_634276;
    trans_JOIN_INNER_TD_634276.setq(q_h);
    trans_JOIN_INNER_TD_634276.add(&(cfg_JOIN_INNER_TD_634276_cmds));
    transEngine trans_JOIN_INNER_TD_634276_out;
    trans_JOIN_INNER_TD_634276_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7550095;
    trans_JOIN_INNER_TD_7550095.setq(q_h);
    trans_JOIN_INNER_TD_7550095.add(&(cfg_JOIN_INNER_TD_7550095_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_634276;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_634276;
    std::vector<cl::Event> events_JOIN_INNER_TD_634276;
    events_h2d_wr_JOIN_INNER_TD_634276.resize(1);
    events_d2h_rd_JOIN_INNER_TD_634276.resize(1);
    events_JOIN_INNER_TD_634276.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_634276;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_634276;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7550095;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7550095;
    std::vector<cl::Event> events_JOIN_INNER_TD_7550095;
    events_h2d_wr_JOIN_INNER_TD_7550095.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7550095.resize(1);
    events_JOIN_INNER_TD_7550095.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7550095;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7550095;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_451182_s, tv_r_Filter_8_451182_e;
    gettimeofday(&tv_r_Filter_8_451182_s, 0);
    SW_Filter_TD_8322871(tbl_SerializeFromObject_TD_9943333_input, tbl_Filter_TD_8322871_output);
    gettimeofday(&tv_r_Filter_8_451182_e, 0);

    struct timeval tv_r_Filter_8_272445_s, tv_r_Filter_8_272445_e;
    gettimeofday(&tv_r_Filter_8_272445_s, 0);
    SW_Filter_TD_8469237(tbl_SerializeFromObject_TD_9522515_input, tbl_Filter_TD_8469237_output);
    gettimeofday(&tv_r_Filter_8_272445_e, 0);

    struct timeval tv_r_Filter_7_22386_s, tv_r_Filter_7_22386_e;
    gettimeofday(&tv_r_Filter_7_22386_s, 0);
    SW_Filter_TD_7175512(tbl_SerializeFromObject_TD_8484499_input, tbl_Filter_TD_7175512_output);
    gettimeofday(&tv_r_Filter_7_22386_e, 0);

    struct timeval tv_r_JOIN_INNER_7_672640_s, tv_r_JOIN_INNER_7_672640_e;
    gettimeofday(&tv_r_JOIN_INNER_7_672640_s, 0);
    trans_JOIN_INNER_TD_7550095.add(&(tbl_Filter_TD_8469237_output));
    trans_JOIN_INNER_TD_7550095.add(&(tbl_Filter_TD_8322871_output));
    trans_JOIN_INNER_TD_7550095.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7550095), &(events_h2d_wr_JOIN_INNER_TD_7550095[0]));
    events_grp_JOIN_INNER_TD_7550095.push_back(events_h2d_wr_JOIN_INNER_TD_7550095[0]);
    krnl_JOIN_INNER_TD_7550095.run(0, &(events_grp_JOIN_INNER_TD_7550095), &(events_JOIN_INNER_TD_7550095[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_672640_e, 0);

    struct timeval tv_r_Filter_6_263773_s, tv_r_Filter_6_263773_e;
    gettimeofday(&tv_r_Filter_6_263773_s, 0);
    SW_Filter_TD_6247537(tbl_SerializeFromObject_TD_784092_input, tbl_Filter_TD_6247537_output);
    gettimeofday(&tv_r_Filter_6_263773_e, 0);

    struct timeval tv_r_JOIN_INNER_6_792600_s, tv_r_JOIN_INNER_6_792600_e;
    gettimeofday(&tv_r_JOIN_INNER_6_792600_s, 0);
    prev_events_grp_JOIN_INNER_TD_634276.push_back(events_h2d_wr_JOIN_INNER_TD_7550095[0]);
    trans_JOIN_INNER_TD_634276.add(&(tbl_Filter_TD_7175512_output));
    trans_JOIN_INNER_TD_634276.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_634276), &(events_h2d_wr_JOIN_INNER_TD_634276[0]));
    events_grp_JOIN_INNER_TD_634276.push_back(events_h2d_wr_JOIN_INNER_TD_634276[0]);
    events_grp_JOIN_INNER_TD_634276.push_back(events_JOIN_INNER_TD_7550095[0]);
    krnl_JOIN_INNER_TD_634276.run(0, &(events_grp_JOIN_INNER_TD_634276), &(events_JOIN_INNER_TD_634276[0]));
    
    trans_JOIN_INNER_TD_634276_out.add(&(tbl_JOIN_INNER_TD_634276_output));
    trans_JOIN_INNER_TD_634276_out.dev2host(0, &(events_JOIN_INNER_TD_634276), &(events_d2h_rd_JOIN_INNER_TD_634276[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_792600_e, 0);

    struct timeval tv_r_Filter_5_901418_s, tv_r_Filter_5_901418_e;
    gettimeofday(&tv_r_Filter_5_901418_s, 0);
    SW_Filter_TD_5514409(tbl_SerializeFromObject_TD_626586_input, tbl_Filter_TD_5514409_output);
    gettimeofday(&tv_r_Filter_5_901418_e, 0);

    struct timeval tv_r_JOIN_INNER_5_683866_s, tv_r_JOIN_INNER_5_683866_e;
    gettimeofday(&tv_r_JOIN_INNER_5_683866_s, 0);
    SW_JOIN_INNER_TD_5455767(tbl_JOIN_INNER_TD_634276_output, tbl_Filter_TD_6247537_output, tbl_JOIN_INNER_TD_5455767_output);
    gettimeofday(&tv_r_JOIN_INNER_5_683866_e, 0);

    struct timeval tv_r_JOIN_INNER_4_983950_s, tv_r_JOIN_INNER_4_983950_e;
    gettimeofday(&tv_r_JOIN_INNER_4_983950_s, 0);
    SW_JOIN_INNER_TD_4493352(tbl_JOIN_INNER_TD_5455767_output, tbl_Filter_TD_5514409_output, tbl_JOIN_INNER_TD_4493352_output);
    gettimeofday(&tv_r_JOIN_INNER_4_983950_e, 0);

    struct timeval tv_r_Aggregate_3_756618_s, tv_r_Aggregate_3_756618_e;
    gettimeofday(&tv_r_Aggregate_3_756618_s, 0);
    SW_Aggregate_TD_343662(tbl_JOIN_INNER_TD_4493352_output, tbl_Aggregate_TD_343662_output);
    gettimeofday(&tv_r_Aggregate_3_756618_e, 0);

    struct timeval tv_r_Sort_2_291325_s, tv_r_Sort_2_291325_e;
    gettimeofday(&tv_r_Sort_2_291325_s, 0);
    SW_Sort_TD_298244(tbl_Aggregate_TD_343662_output, tbl_Sort_TD_298244_output);
    gettimeofday(&tv_r_Sort_2_291325_e, 0);

    struct timeval tv_r_LocalLimit_1_786193_s, tv_r_LocalLimit_1_786193_e;
    gettimeofday(&tv_r_LocalLimit_1_786193_s, 0);
    SW_LocalLimit_TD_1807386(tbl_Sort_TD_298244_output, tbl_LocalLimit_TD_1807386_output);
    gettimeofday(&tv_r_LocalLimit_1_786193_e, 0);

    struct timeval tv_r_GlobalLimit_0_550124_s, tv_r_GlobalLimit_0_550124_e;
    gettimeofday(&tv_r_GlobalLimit_0_550124_s, 0);
    SW_GlobalLimit_TD_0698360(tbl_LocalLimit_TD_1807386_output, tbl_GlobalLimit_TD_0698360_output);
    gettimeofday(&tv_r_GlobalLimit_0_550124_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_451182_s, &tv_r_Filter_8_451182_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9943333_input: " << tbl_SerializeFromObject_TD_9943333_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_272445_s, &tv_r_Filter_8_272445_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9522515_input: " << tbl_SerializeFromObject_TD_9522515_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_22386_s, &tv_r_Filter_7_22386_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8484499_input: " << tbl_SerializeFromObject_TD_8484499_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_672640_s, &tv_r_JOIN_INNER_7_672640_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8469237_output: " << tbl_Filter_TD_8469237_output.getNumRow() << " " << "tbl_Filter_TD_8322871_output: " << tbl_Filter_TD_8322871_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_263773_s, &tv_r_Filter_6_263773_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_784092_input: " << tbl_SerializeFromObject_TD_784092_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_792600_s, &tv_r_JOIN_INNER_6_792600_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7550095_output: " << tbl_JOIN_INNER_TD_7550095_output.getNumRow() << " " << "tbl_Filter_TD_7175512_output: " << tbl_Filter_TD_7175512_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_901418_s, &tv_r_Filter_5_901418_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_626586_input: " << tbl_SerializeFromObject_TD_626586_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_683866_s, &tv_r_JOIN_INNER_5_683866_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_634276_output: " << tbl_JOIN_INNER_TD_634276_output.getNumRow() << " " << "tbl_Filter_TD_6247537_output: " << tbl_Filter_TD_6247537_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_983950_s, &tv_r_JOIN_INNER_4_983950_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5455767_output: " << tbl_JOIN_INNER_TD_5455767_output.getNumRow() << " " << "tbl_Filter_TD_5514409_output: " << tbl_Filter_TD_5514409_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_756618_s, &tv_r_Aggregate_3_756618_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4493352_output: " << tbl_JOIN_INNER_TD_4493352_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_291325_s, &tv_r_Sort_2_291325_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_343662_output: " << tbl_Aggregate_TD_343662_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_786193_s, &tv_r_LocalLimit_1_786193_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_298244_output: " << tbl_Sort_TD_298244_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_550124_s, &tv_r_GlobalLimit_0_550124_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1807386_output: " << tbl_LocalLimit_TD_1807386_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.6625547 * 1000 << "ms" << std::endl; 
    return 0; 
}
