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

#include "cfgFunc_q34.hpp" 
#include "q34.hpp" 

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
    std::cout << "NOTE:running query #34\n."; 
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
    cl::Device device_a = devices[1]; 
    // Create context_a and command queue for selected device 
    cl::Context context_a(device_a); 
    cl::CommandQueue q_a(context_a, device_a, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE); 
    std::string devName_a = device_a.getInfo<CL_DEVICE_NAME>(); 
    std::cout << "Selected Device " << devName_a << "\n"; 
    cl::Program::Binaries xclBins_a = xcl::import_binary_file(xclbin_path_a); 
    std::vector<cl::Device> devices_a; 
    devices_a.push_back(device_a); 
    cl::Program program_a(context_a, devices_a, xclBins_a); 
    // ****************************** Tables **************************** // 
    Table tbl_Sort_TD_0632623_output("tbl_Sort_TD_0632623_output", 6100000, 6, "");
    tbl_Sort_TD_0632623_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1193922_output("tbl_JOIN_INNER_TD_1193922_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_1193922_output.allocateHost();
    Table tbl_Filter_TD_2266355_output("tbl_Filter_TD_2266355_output", 6100000, 3, "");
    tbl_Filter_TD_2266355_output.allocateHost();
    Table tbl_Filter_TD_2833331_output("tbl_Filter_TD_2833331_output", 6100000, 5, "");
    tbl_Filter_TD_2833331_output.allocateHost();
    Table tbl_Aggregate_TD_3658390_output_preprocess("tbl_Aggregate_TD_3658390_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_3658390_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_3658390_output("tbl_Aggregate_TD_3658390_output", 6100000, 3, "");
    tbl_Aggregate_TD_3658390_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3511645_input;
    tbl_SerializeFromObject_TD_3511645_input = Table("customer", customer_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_3511645_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_3511645_input.addCol("c_salutation", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3511645_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3511645_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3511645_input.addCol("c_preferred_cust_flag", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_3511645_input.allocateHost();
    tbl_SerializeFromObject_TD_3511645_input.loadHost();
    Table tbl_JOIN_INNER_TD_4857938_output_preprocess("tbl_JOIN_INNER_TD_4857938_output_preprocess", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4857938_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_4857938_output("tbl_JOIN_INNER_TD_4857938_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4857938_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5988590_output("tbl_JOIN_INNER_TD_5988590_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5988590_output.allocateHost();
    Table tbl_Filter_TD_5949983_output("tbl_Filter_TD_5949983_output", 6100000, 1, "");
    tbl_Filter_TD_5949983_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6544790_output("tbl_JOIN_INNER_TD_6544790_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_6544790_output.allocateHost();
    Table tbl_Filter_TD_6479201_output("tbl_Filter_TD_6479201_output", 6100000, 1, "");
    tbl_Filter_TD_6479201_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6555907_input;
    tbl_SerializeFromObject_TD_6555907_input = Table("household_demographics", household_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6555907_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_6555907_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_6555907_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_6555907_input.addCol("hd_buy_potential", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6555907_input.allocateHost();
    tbl_SerializeFromObject_TD_6555907_input.loadHost();
    Table tbl_Filter_TD_7478592_output("tbl_Filter_TD_7478592_output", 6100000, 5, "");
    tbl_Filter_TD_7478592_output.allocateHost();
    Table tbl_Filter_TD_7444298_output("tbl_Filter_TD_7444298_output", 6100000, 1, "");
    tbl_Filter_TD_7444298_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7380405_input;
    tbl_SerializeFromObject_TD_7380405_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7380405_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7380405_input.addCol("s_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7380405_input.allocateHost();
    tbl_SerializeFromObject_TD_7380405_input.loadHost();
    Table tbl_SerializeFromObject_TD_8658413_input;
    tbl_SerializeFromObject_TD_8658413_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8658413_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8658413_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_8658413_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_8658413_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_8658413_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_8658413_input.allocateHost();
    tbl_SerializeFromObject_TD_8658413_input.loadHost();
    Table tbl_SerializeFromObject_TD_8149191_input;
    tbl_SerializeFromObject_TD_8149191_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8149191_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8149191_input.addCol("d_dom", 4);
    tbl_SerializeFromObject_TD_8149191_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8149191_input.allocateHost();
    tbl_SerializeFromObject_TD_8149191_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4857938_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_3658390_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_4857938_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5988590_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5949983_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6544790_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6479201_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7478592_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7444298_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_3658390_cmds;
    cfg_Aggregate_TD_3658390_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_3658390_gqe_aggr(cfg_Aggregate_TD_3658390_cmds.cmd);
    cfg_Aggregate_TD_3658390_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_3658390_cmds_out;
    cfg_Aggregate_TD_3658390_cmds_out.allocateHost();
    cfg_Aggregate_TD_3658390_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_4857938_cmds;
    cfg_JOIN_INNER_TD_4857938_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4857938_gqe_join (cfg_JOIN_INNER_TD_4857938_cmds.cmd);
    cfg_JOIN_INNER_TD_4857938_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5988590_cmds;
    cfg_JOIN_INNER_TD_5988590_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5988590_gqe_join (cfg_JOIN_INNER_TD_5988590_cmds.cmd);
    cfg_JOIN_INNER_TD_5988590_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6544790_cmds;
    cfg_JOIN_INNER_TD_6544790_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6544790_gqe_join (cfg_JOIN_INNER_TD_6544790_cmds.cmd);
    cfg_JOIN_INNER_TD_6544790_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_3658390;
    krnl_Aggregate_TD_3658390 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_3658390.setup(tbl_JOIN_INNER_TD_4857938_output, tbl_Aggregate_TD_3658390_output_preprocess, cfg_Aggregate_TD_3658390_cmds, cfg_Aggregate_TD_3658390_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_4857938;
    krnl_JOIN_INNER_TD_4857938 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4857938.setup(tbl_JOIN_INNER_TD_5988590_output, tbl_Filter_TD_5949983_output, tbl_JOIN_INNER_TD_4857938_output_preprocess, cfg_JOIN_INNER_TD_4857938_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5988590;
    krnl_JOIN_INNER_TD_5988590 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5988590.setup(tbl_JOIN_INNER_TD_6544790_output, tbl_Filter_TD_6479201_output, tbl_JOIN_INNER_TD_5988590_output, cfg_JOIN_INNER_TD_5988590_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6544790;
    krnl_JOIN_INNER_TD_6544790 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6544790.setup(tbl_Filter_TD_7478592_output, tbl_Filter_TD_7444298_output, tbl_JOIN_INNER_TD_6544790_output, cfg_JOIN_INNER_TD_6544790_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_3658390;
    trans_Aggregate_TD_3658390.setq(q_a);
    trans_Aggregate_TD_3658390.add(&(cfg_Aggregate_TD_3658390_cmds));
    transEngine trans_Aggregate_TD_3658390_out;
    trans_Aggregate_TD_3658390_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_4857938;
    trans_JOIN_INNER_TD_4857938.setq(q_h);
    trans_JOIN_INNER_TD_4857938.add(&(cfg_JOIN_INNER_TD_4857938_cmds));
    transEngine trans_JOIN_INNER_TD_4857938_out;
    trans_JOIN_INNER_TD_4857938_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5988590;
    trans_JOIN_INNER_TD_5988590.setq(q_h);
    trans_JOIN_INNER_TD_5988590.add(&(cfg_JOIN_INNER_TD_5988590_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6544790;
    trans_JOIN_INNER_TD_6544790.setq(q_h);
    trans_JOIN_INNER_TD_6544790.add(&(cfg_JOIN_INNER_TD_6544790_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_3658390;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_3658390;
    std::vector<cl::Event> events_Aggregate_TD_3658390;
    events_h2d_wr_Aggregate_TD_3658390.resize(1);
    events_d2h_rd_Aggregate_TD_3658390.resize(1);
    events_Aggregate_TD_3658390.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_3658390;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_3658390;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4857938;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4857938;
    std::vector<cl::Event> events_JOIN_INNER_TD_4857938;
    events_h2d_wr_JOIN_INNER_TD_4857938.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4857938.resize(1);
    events_JOIN_INNER_TD_4857938.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4857938;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4857938;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5988590;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5988590;
    std::vector<cl::Event> events_JOIN_INNER_TD_5988590;
    events_h2d_wr_JOIN_INNER_TD_5988590.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5988590.resize(1);
    events_JOIN_INNER_TD_5988590.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5988590;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5988590;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6544790;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6544790;
    std::vector<cl::Event> events_JOIN_INNER_TD_6544790;
    events_h2d_wr_JOIN_INNER_TD_6544790.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6544790.resize(1);
    events_JOIN_INNER_TD_6544790.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6544790;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6544790;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_989715_s, tv_r_Filter_7_989715_e;
    gettimeofday(&tv_r_Filter_7_989715_s, 0);
    SW_Filter_TD_7444298(tbl_SerializeFromObject_TD_8149191_input, tbl_Filter_TD_7444298_output);
    gettimeofday(&tv_r_Filter_7_989715_e, 0);

    struct timeval tv_r_Filter_7_424619_s, tv_r_Filter_7_424619_e;
    gettimeofday(&tv_r_Filter_7_424619_s, 0);
    SW_Filter_TD_7478592(tbl_SerializeFromObject_TD_8658413_input, tbl_Filter_TD_7478592_output);
    gettimeofday(&tv_r_Filter_7_424619_e, 0);

    struct timeval tv_r_Filter_6_364180_s, tv_r_Filter_6_364180_e;
    gettimeofday(&tv_r_Filter_6_364180_s, 0);
    SW_Filter_TD_6479201(tbl_SerializeFromObject_TD_7380405_input, tbl_Filter_TD_6479201_output);
    gettimeofday(&tv_r_Filter_6_364180_e, 0);

    struct timeval tv_r_JOIN_INNER_6_63208_s, tv_r_JOIN_INNER_6_63208_e;
    gettimeofday(&tv_r_JOIN_INNER_6_63208_s, 0);
    trans_JOIN_INNER_TD_6544790.add(&(tbl_Filter_TD_7478592_output));
    trans_JOIN_INNER_TD_6544790.add(&(tbl_Filter_TD_7444298_output));
    trans_JOIN_INNER_TD_6544790.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6544790), &(events_h2d_wr_JOIN_INNER_TD_6544790[0]));
    events_grp_JOIN_INNER_TD_6544790.push_back(events_h2d_wr_JOIN_INNER_TD_6544790[0]);
    krnl_JOIN_INNER_TD_6544790.run(0, &(events_grp_JOIN_INNER_TD_6544790), &(events_JOIN_INNER_TD_6544790[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_63208_e, 0);

    struct timeval tv_r_Filter_5_888558_s, tv_r_Filter_5_888558_e;
    gettimeofday(&tv_r_Filter_5_888558_s, 0);
    SW_Filter_TD_5949983(tbl_SerializeFromObject_TD_6555907_input, tbl_Filter_TD_5949983_output);
    gettimeofday(&tv_r_Filter_5_888558_e, 0);

    struct timeval tv_r_JOIN_INNER_5_975434_s, tv_r_JOIN_INNER_5_975434_e;
    gettimeofday(&tv_r_JOIN_INNER_5_975434_s, 0);
    prev_events_grp_JOIN_INNER_TD_5988590.push_back(events_h2d_wr_JOIN_INNER_TD_6544790[0]);
    trans_JOIN_INNER_TD_5988590.add(&(tbl_Filter_TD_6479201_output));
    trans_JOIN_INNER_TD_5988590.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5988590), &(events_h2d_wr_JOIN_INNER_TD_5988590[0]));
    events_grp_JOIN_INNER_TD_5988590.push_back(events_h2d_wr_JOIN_INNER_TD_5988590[0]);
    events_grp_JOIN_INNER_TD_5988590.push_back(events_JOIN_INNER_TD_6544790[0]);
    krnl_JOIN_INNER_TD_5988590.run(0, &(events_grp_JOIN_INNER_TD_5988590), &(events_JOIN_INNER_TD_5988590[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_975434_e, 0);

    struct timeval tv_r_JOIN_INNER_4_293543_s, tv_r_JOIN_INNER_4_293543_e;
    gettimeofday(&tv_r_JOIN_INNER_4_293543_s, 0);
    prev_events_grp_JOIN_INNER_TD_4857938.push_back(events_h2d_wr_JOIN_INNER_TD_5988590[0]);
    trans_JOIN_INNER_TD_4857938.add(&(tbl_Filter_TD_5949983_output));
    trans_JOIN_INNER_TD_4857938.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4857938), &(events_h2d_wr_JOIN_INNER_TD_4857938[0]));
    events_grp_JOIN_INNER_TD_4857938.push_back(events_h2d_wr_JOIN_INNER_TD_4857938[0]);
    events_grp_JOIN_INNER_TD_4857938.push_back(events_JOIN_INNER_TD_5988590[0]);
    krnl_JOIN_INNER_TD_4857938.run(0, &(events_grp_JOIN_INNER_TD_4857938), &(events_JOIN_INNER_TD_4857938[0]));
    
    trans_JOIN_INNER_TD_4857938_out.add(&(tbl_JOIN_INNER_TD_4857938_output_preprocess));
    trans_JOIN_INNER_TD_4857938_out.dev2host(0, &(events_JOIN_INNER_TD_4857938), &(events_d2h_rd_JOIN_INNER_TD_4857938[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_4857938);
    tbl_JOIN_INNER_TD_4857938_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_4857938_output));
    gettimeofday(&tv_r_JOIN_INNER_4_293543_e, 0);

    struct timeval tv_r_Aggregate_3_66596_s, tv_r_Aggregate_3_66596_e;
    gettimeofday(&tv_r_Aggregate_3_66596_s, 0);
    trans_Aggregate_TD_3658390.add(&(tbl_JOIN_INNER_TD_4857938_output));
    trans_Aggregate_TD_3658390.host2dev(0, &(prev_events_grp_Aggregate_TD_3658390), &(events_h2d_wr_Aggregate_TD_3658390[0]));
    events_grp_Aggregate_TD_3658390.push_back(events_h2d_wr_Aggregate_TD_3658390[0]);
    krnl_Aggregate_TD_3658390.run(0, &(events_grp_Aggregate_TD_3658390), &(events_Aggregate_TD_3658390[0]));
    
    trans_Aggregate_TD_3658390_out.add(&(tbl_Aggregate_TD_3658390_output_preprocess));
    trans_Aggregate_TD_3658390_out.dev2host(0, &(events_Aggregate_TD_3658390), &(events_d2h_rd_Aggregate_TD_3658390[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_3658390_consolidate(tbl_Aggregate_TD_3658390_output_preprocess, tbl_Aggregate_TD_3658390_output);
    gettimeofday(&tv_r_Aggregate_3_66596_e, 0);

    struct timeval tv_r_Filter_2_858062_s, tv_r_Filter_2_858062_e;
    gettimeofday(&tv_r_Filter_2_858062_s, 0);
    SW_Filter_TD_2833331(tbl_SerializeFromObject_TD_3511645_input, tbl_Filter_TD_2833331_output);
    gettimeofday(&tv_r_Filter_2_858062_e, 0);

    struct timeval tv_r_Filter_2_347587_s, tv_r_Filter_2_347587_e;
    gettimeofday(&tv_r_Filter_2_347587_s, 0);
    SW_Filter_TD_2266355(tbl_Aggregate_TD_3658390_output, tbl_Filter_TD_2266355_output);
    gettimeofday(&tv_r_Filter_2_347587_e, 0);

    struct timeval tv_r_JOIN_INNER_1_551043_s, tv_r_JOIN_INNER_1_551043_e;
    gettimeofday(&tv_r_JOIN_INNER_1_551043_s, 0);
    SW_JOIN_INNER_TD_1193922(tbl_Filter_TD_2266355_output, tbl_Filter_TD_2833331_output, tbl_JOIN_INNER_TD_1193922_output);
    gettimeofday(&tv_r_JOIN_INNER_1_551043_e, 0);

    struct timeval tv_r_Sort_0_320834_s, tv_r_Sort_0_320834_e;
    gettimeofday(&tv_r_Sort_0_320834_s, 0);
    SW_Sort_TD_0632623(tbl_JOIN_INNER_TD_1193922_output, tbl_Sort_TD_0632623_output);
    gettimeofday(&tv_r_Sort_0_320834_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_989715_s, &tv_r_Filter_7_989715_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8149191_input: " << tbl_SerializeFromObject_TD_8149191_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_424619_s, &tv_r_Filter_7_424619_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8658413_input: " << tbl_SerializeFromObject_TD_8658413_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_364180_s, &tv_r_Filter_6_364180_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7380405_input: " << tbl_SerializeFromObject_TD_7380405_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_63208_s, &tv_r_JOIN_INNER_6_63208_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7478592_output: " << tbl_Filter_TD_7478592_output.getNumRow() << " " << "tbl_Filter_TD_7444298_output: " << tbl_Filter_TD_7444298_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_888558_s, &tv_r_Filter_5_888558_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6555907_input: " << tbl_SerializeFromObject_TD_6555907_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_975434_s, &tv_r_JOIN_INNER_5_975434_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6544790_output: " << tbl_JOIN_INNER_TD_6544790_output.getNumRow() << " " << "tbl_Filter_TD_6479201_output: " << tbl_Filter_TD_6479201_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_293543_s, &tv_r_JOIN_INNER_4_293543_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5988590_output: " << tbl_JOIN_INNER_TD_5988590_output.getNumRow() << " " << "tbl_Filter_TD_5949983_output: " << tbl_Filter_TD_5949983_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_66596_s, &tv_r_Aggregate_3_66596_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4857938_output: " << tbl_JOIN_INNER_TD_4857938_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_858062_s, &tv_r_Filter_2_858062_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3511645_input: " << tbl_SerializeFromObject_TD_3511645_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_347587_s, &tv_r_Filter_2_347587_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3658390_output: " << tbl_Aggregate_TD_3658390_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_551043_s, &tv_r_JOIN_INNER_1_551043_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2266355_output: " << tbl_Filter_TD_2266355_output.getNumRow() << " " << "tbl_Filter_TD_2833331_output: " << tbl_Filter_TD_2833331_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_320834_s, &tv_r_Sort_0_320834_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1193922_output: " << tbl_JOIN_INNER_TD_1193922_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.254864 * 1000 << "ms" << std::endl; 
    return 0; 
}
