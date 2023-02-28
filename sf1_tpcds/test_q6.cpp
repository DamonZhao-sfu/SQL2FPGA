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

#include "cfgFunc_q6.hpp" 
#include "q6.hpp" 

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
    std::cout << "NOTE:running query #6\n."; 
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
    Table tbl_Sort_TD_0188197_output("tbl_Sort_TD_0188197_output", 6100000, 2, "");
    tbl_Sort_TD_0188197_output.allocateHost();
    Table tbl_Filter_TD_1285144_output("tbl_Filter_TD_1285144_output", 6100000, 2, "");
    tbl_Filter_TD_1285144_output.allocateHost();
    Table tbl_Aggregate_TD_2939726_output("tbl_Aggregate_TD_2939726_output", 6100000, 2, "");
    tbl_Aggregate_TD_2939726_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3763436_output("tbl_JOIN_INNER_TD_3763436_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_3763436_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4578427_output("tbl_JOIN_INNER_TD_4578427_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4578427_output.allocateHost();
    Table tbl_Filter_TD_4795148_output("tbl_Filter_TD_4795148_output", 6100000, 1, "");
    tbl_Filter_TD_4795148_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5100901_output("tbl_JOIN_INNER_TD_5100901_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5100901_output.allocateHost();
    Table tbl_Filter_TD_5398764_output("tbl_Filter_TD_5398764_output", 6100000, 1, "");
    tbl_Filter_TD_5398764_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_5655728_output("tbl_JOIN_LEFTOUTER_TD_5655728_output", 6100000, 3, "");
    tbl_JOIN_LEFTOUTER_TD_5655728_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6356905_output("tbl_JOIN_INNER_TD_6356905_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6356905_output.allocateHost();
    Table tbl_Filter_TD_6295306_output("tbl_Filter_TD_6295306_output", 6100000, 3, "");
    tbl_Filter_TD_6295306_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6341352_input;
    tbl_SerializeFromObject_TD_6341352_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6341352_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6341352_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_6341352_input.allocateHost();
    tbl_SerializeFromObject_TD_6341352_input.loadHost();
    Table tbl_Aggregate_TD_6625392_output_preprocess("tbl_Aggregate_TD_6625392_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_6625392_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_6625392_output("tbl_Aggregate_TD_6625392_output", 6100000, 1, "");
    tbl_Aggregate_TD_6625392_output.allocateHost();
    Table tbl_Filter_TD_6270641_output("tbl_Filter_TD_6270641_output", 6100000, 3, "");
    tbl_Filter_TD_6270641_output.allocateHost();
    Table tbl_Aggregate_TD_6675662_output("tbl_Aggregate_TD_6675662_output", 6100000, 2, "");
    tbl_Aggregate_TD_6675662_output.allocateHost();
    Table tbl_Filter_TD_7298697_output("tbl_Filter_TD_7298697_output", 6100000, 2, "");
    tbl_Filter_TD_7298697_output.allocateHost();
    Table tbl_Filter_TD_7396127_output("tbl_Filter_TD_7396127_output", 6100000, 2, "");
    tbl_Filter_TD_7396127_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7385861_input;
    tbl_SerializeFromObject_TD_7385861_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7385861_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7385861_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_7385861_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_7385861_input.allocateHost();
    tbl_SerializeFromObject_TD_7385861_input.loadHost();
    Table tbl_Filter_TD_7389557_output("tbl_Filter_TD_7389557_output", 6100000, 1, "");
    tbl_Filter_TD_7389557_output.allocateHost();
    Table tbl_SerializeFromObject_TD_711998_input;
    tbl_SerializeFromObject_TD_711998_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_711998_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_711998_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_711998_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_711998_input.allocateHost();
    tbl_SerializeFromObject_TD_711998_input.loadHost();
    Table tbl_Filter_TD_7728380_output("tbl_Filter_TD_7728380_output", 6100000, 2, "");
    tbl_Filter_TD_7728380_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8835043_input;
    tbl_SerializeFromObject_TD_8835043_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8835043_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8835043_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8835043_input.allocateHost();
    tbl_SerializeFromObject_TD_8835043_input.loadHost();
    Table tbl_SerializeFromObject_TD_8208609_input;
    tbl_SerializeFromObject_TD_8208609_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8208609_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8208609_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_8208609_input.allocateHost();
    tbl_SerializeFromObject_TD_8208609_input.loadHost();
    Table tbl_SerializeFromObject_TD_8757239_input;
    tbl_SerializeFromObject_TD_8757239_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8757239_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8757239_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8757239_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8757239_input.allocateHost();
    tbl_SerializeFromObject_TD_8757239_input.loadHost();
    Table tbl_SerializeFromObject_TD_8342463_input;
    tbl_SerializeFromObject_TD_8342463_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8342463_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_8342463_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8342463_input.allocateHost();
    tbl_SerializeFromObject_TD_8342463_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_6625392_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Filter_TD_7389557_output.allocateDevBuffer(context_a, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_6625392_cmds;
    cfg_Aggregate_TD_6625392_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_6625392_gqe_aggr(cfg_Aggregate_TD_6625392_cmds.cmd);
    cfg_Aggregate_TD_6625392_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_6625392_cmds_out;
    cfg_Aggregate_TD_6625392_cmds_out.allocateHost();
    cfg_Aggregate_TD_6625392_cmds_out.allocateDevBuffer(context_a, 33);
    // *************************** Kernel Setup ************************* // 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_6625392;
    krnl_Aggregate_TD_6625392 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_6625392.setup(tbl_Filter_TD_7389557_output, tbl_Aggregate_TD_6625392_output_preprocess, cfg_Aggregate_TD_6625392_cmds, cfg_Aggregate_TD_6625392_cmds_out, buftmp_a);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_6625392;
    trans_Aggregate_TD_6625392.setq(q_a);
    trans_Aggregate_TD_6625392.add(&(cfg_Aggregate_TD_6625392_cmds));
    transEngine trans_Aggregate_TD_6625392_out;
    trans_Aggregate_TD_6625392_out.setq(q_a);
    q_a.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_6625392;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_6625392;
    std::vector<cl::Event> events_Aggregate_TD_6625392;
    events_h2d_wr_Aggregate_TD_6625392.resize(1);
    events_d2h_rd_Aggregate_TD_6625392.resize(1);
    events_Aggregate_TD_6625392.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_6625392;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_6625392;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_238557_s, tv_r_Filter_7_238557_e;
    gettimeofday(&tv_r_Filter_7_238557_s, 0);
    SW_Filter_TD_7728380(tbl_SerializeFromObject_TD_8342463_input, tbl_Filter_TD_7728380_output);
    gettimeofday(&tv_r_Filter_7_238557_e, 0);

    struct timeval tv_r_Filter_7_415990_s, tv_r_Filter_7_415990_e;
    gettimeofday(&tv_r_Filter_7_415990_s, 0);
    SW_Filter_TD_7389557(tbl_SerializeFromObject_TD_8757239_input, tbl_Filter_TD_7389557_output);
    gettimeofday(&tv_r_Filter_7_415990_e, 0);

    struct timeval tv_r_Filter_7_934939_s, tv_r_Filter_7_934939_e;
    gettimeofday(&tv_r_Filter_7_934939_s, 0);
    SW_Filter_TD_7396127(tbl_SerializeFromObject_TD_8208609_input, tbl_Filter_TD_7396127_output);
    gettimeofday(&tv_r_Filter_7_934939_e, 0);

    struct timeval tv_r_Filter_7_339104_s, tv_r_Filter_7_339104_e;
    gettimeofday(&tv_r_Filter_7_339104_s, 0);
    SW_Filter_TD_7298697(tbl_SerializeFromObject_TD_8835043_input, tbl_Filter_TD_7298697_output);
    gettimeofday(&tv_r_Filter_7_339104_e, 0);

    struct timeval tv_r_Aggregate_6_835327_s, tv_r_Aggregate_6_835327_e;
    gettimeofday(&tv_r_Aggregate_6_835327_s, 0);
    SW_Aggregate_TD_6675662(tbl_Filter_TD_7728380_output, tbl_Aggregate_TD_6675662_output);
    gettimeofday(&tv_r_Aggregate_6_835327_e, 0);

    struct timeval tv_r_Filter_6_311395_s, tv_r_Filter_6_311395_e;
    gettimeofday(&tv_r_Filter_6_311395_s, 0);
    SW_Filter_TD_6270641(tbl_SerializeFromObject_TD_711998_input, tbl_Filter_TD_6270641_output);
    gettimeofday(&tv_r_Filter_6_311395_e, 0);

    struct timeval tv_r_Aggregate_6_57347_s, tv_r_Aggregate_6_57347_e;
    gettimeofday(&tv_r_Aggregate_6_57347_s, 0);
    trans_Aggregate_TD_6625392.add(&(tbl_Filter_TD_7389557_output));
    trans_Aggregate_TD_6625392.host2dev(0, &(prev_events_grp_Aggregate_TD_6625392), &(events_h2d_wr_Aggregate_TD_6625392[0]));
    events_grp_Aggregate_TD_6625392.push_back(events_h2d_wr_Aggregate_TD_6625392[0]);
    krnl_Aggregate_TD_6625392.run(0, &(events_grp_Aggregate_TD_6625392), &(events_Aggregate_TD_6625392[0]));
    
    trans_Aggregate_TD_6625392_out.add(&(tbl_Aggregate_TD_6625392_output_preprocess));
    trans_Aggregate_TD_6625392_out.dev2host(0, &(events_Aggregate_TD_6625392), &(events_d2h_rd_Aggregate_TD_6625392[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_6625392_consolidate(tbl_Aggregate_TD_6625392_output_preprocess, tbl_Aggregate_TD_6625392_output);
    gettimeofday(&tv_r_Aggregate_6_57347_e, 0);

    struct timeval tv_r_Filter_6_433628_s, tv_r_Filter_6_433628_e;
    gettimeofday(&tv_r_Filter_6_433628_s, 0);
    SW_Filter_TD_6295306(tbl_SerializeFromObject_TD_7385861_input, tbl_Filter_TD_6295306_output);
    gettimeofday(&tv_r_Filter_6_433628_e, 0);

    struct timeval tv_r_JOIN_INNER_6_526390_s, tv_r_JOIN_INNER_6_526390_e;
    gettimeofday(&tv_r_JOIN_INNER_6_526390_s, 0);
    SW_JOIN_INNER_TD_6356905(tbl_Filter_TD_7298697_output, tbl_Filter_TD_7396127_output, tbl_JOIN_INNER_TD_6356905_output);
    gettimeofday(&tv_r_JOIN_INNER_6_526390_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_5_588870_s, tv_r_JOIN_LEFTOUTER_5_588870_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_588870_s, 0);
    SW_JOIN_LEFTOUTER_TD_5655728(tbl_Filter_TD_6270641_output, tbl_Aggregate_TD_6675662_output, tbl_JOIN_LEFTOUTER_TD_5655728_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_588870_e, 0);

    struct timeval tv_r_Filter_5_834327_s, tv_r_Filter_5_834327_e;
    gettimeofday(&tv_r_Filter_5_834327_s, 0);
    SW_Filter_TD_5398764(tbl_SerializeFromObject_TD_6341352_input, tbl_Aggregate_TD_6625392_output, tbl_Filter_TD_5398764_output);
    gettimeofday(&tv_r_Filter_5_834327_e, 0);

    struct timeval tv_r_JOIN_INNER_5_151009_s, tv_r_JOIN_INNER_5_151009_e;
    gettimeofday(&tv_r_JOIN_INNER_5_151009_s, 0);
    SW_JOIN_INNER_TD_5100901(tbl_JOIN_INNER_TD_6356905_output, tbl_Filter_TD_6295306_output, tbl_JOIN_INNER_TD_5100901_output);
    gettimeofday(&tv_r_JOIN_INNER_5_151009_e, 0);

    struct timeval tv_r_Filter_4_409175_s, tv_r_Filter_4_409175_e;
    gettimeofday(&tv_r_Filter_4_409175_s, 0);
    SW_Filter_TD_4795148(tbl_JOIN_LEFTOUTER_TD_5655728_output, tbl_Filter_TD_4795148_output);
    gettimeofday(&tv_r_Filter_4_409175_e, 0);

    struct timeval tv_r_JOIN_INNER_4_437657_s, tv_r_JOIN_INNER_4_437657_e;
    gettimeofday(&tv_r_JOIN_INNER_4_437657_s, 0);
    SW_JOIN_INNER_TD_4578427(tbl_JOIN_INNER_TD_5100901_output, tbl_Filter_TD_5398764_output, tbl_JOIN_INNER_TD_4578427_output);
    gettimeofday(&tv_r_JOIN_INNER_4_437657_e, 0);

    struct timeval tv_r_JOIN_INNER_3_842214_s, tv_r_JOIN_INNER_3_842214_e;
    gettimeofday(&tv_r_JOIN_INNER_3_842214_s, 0);
    SW_JOIN_INNER_TD_3763436(tbl_JOIN_INNER_TD_4578427_output, tbl_Filter_TD_4795148_output, tbl_JOIN_INNER_TD_3763436_output);
    gettimeofday(&tv_r_JOIN_INNER_3_842214_e, 0);

    struct timeval tv_r_Aggregate_2_435942_s, tv_r_Aggregate_2_435942_e;
    gettimeofday(&tv_r_Aggregate_2_435942_s, 0);
    SW_Aggregate_TD_2939726(tbl_JOIN_INNER_TD_3763436_output, tbl_Aggregate_TD_2939726_output);
    gettimeofday(&tv_r_Aggregate_2_435942_e, 0);

    struct timeval tv_r_Filter_1_870976_s, tv_r_Filter_1_870976_e;
    gettimeofday(&tv_r_Filter_1_870976_s, 0);
    SW_Filter_TD_1285144(tbl_Aggregate_TD_2939726_output, tbl_Filter_TD_1285144_output);
    gettimeofday(&tv_r_Filter_1_870976_e, 0);

    struct timeval tv_r_Sort_0_662446_s, tv_r_Sort_0_662446_e;
    gettimeofday(&tv_r_Sort_0_662446_s, 0);
    SW_Sort_TD_0188197(tbl_Filter_TD_1285144_output, tbl_Sort_TD_0188197_output);
    gettimeofday(&tv_r_Sort_0_662446_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_238557_s, &tv_r_Filter_7_238557_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8342463_input: " << tbl_SerializeFromObject_TD_8342463_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_415990_s, &tv_r_Filter_7_415990_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8757239_input: " << tbl_SerializeFromObject_TD_8757239_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_934939_s, &tv_r_Filter_7_934939_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8208609_input: " << tbl_SerializeFromObject_TD_8208609_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_339104_s, &tv_r_Filter_7_339104_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8835043_input: " << tbl_SerializeFromObject_TD_8835043_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_835327_s, &tv_r_Aggregate_6_835327_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7728380_output: " << tbl_Filter_TD_7728380_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_311395_s, &tv_r_Filter_6_311395_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_711998_input: " << tbl_SerializeFromObject_TD_711998_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_57347_s, &tv_r_Aggregate_6_57347_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7389557_output: " << tbl_Filter_TD_7389557_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_433628_s, &tv_r_Filter_6_433628_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7385861_input: " << tbl_SerializeFromObject_TD_7385861_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_526390_s, &tv_r_JOIN_INNER_6_526390_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7298697_output: " << tbl_Filter_TD_7298697_output.getNumRow() << " " << "tbl_Filter_TD_7396127_output: " << tbl_Filter_TD_7396127_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_5: " << tvdiff(&tv_r_JOIN_LEFTOUTER_5_588870_s, &tv_r_JOIN_LEFTOUTER_5_588870_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6270641_output: " << tbl_Filter_TD_6270641_output.getNumRow() << " " << "tbl_Aggregate_TD_6675662_output: " << tbl_Aggregate_TD_6675662_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_834327_s, &tv_r_Filter_5_834327_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6341352_input: " << tbl_SerializeFromObject_TD_6341352_input.getNumRow() << " " << "tbl_Aggregate_TD_6625392_output: " << tbl_Aggregate_TD_6625392_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_151009_s, &tv_r_JOIN_INNER_5_151009_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6356905_output: " << tbl_JOIN_INNER_TD_6356905_output.getNumRow() << " " << "tbl_Filter_TD_6295306_output: " << tbl_Filter_TD_6295306_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_409175_s, &tv_r_Filter_4_409175_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_5655728_output: " << tbl_JOIN_LEFTOUTER_TD_5655728_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_437657_s, &tv_r_JOIN_INNER_4_437657_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5100901_output: " << tbl_JOIN_INNER_TD_5100901_output.getNumRow() << " " << "tbl_Filter_TD_5398764_output: " << tbl_Filter_TD_5398764_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_842214_s, &tv_r_JOIN_INNER_3_842214_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4578427_output: " << tbl_JOIN_INNER_TD_4578427_output.getNumRow() << " " << "tbl_Filter_TD_4795148_output: " << tbl_Filter_TD_4795148_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_435942_s, &tv_r_Aggregate_2_435942_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3763436_output: " << tbl_JOIN_INNER_TD_3763436_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_1: " << tvdiff(&tv_r_Filter_1_870976_s, &tv_r_Filter_1_870976_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2939726_output: " << tbl_Aggregate_TD_2939726_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_662446_s, &tv_r_Sort_0_662446_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1285144_output: " << tbl_Filter_TD_1285144_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.2906685 * 1000 << "ms" << std::endl; 
    return 0; 
}
