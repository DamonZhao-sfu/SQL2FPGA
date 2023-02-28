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

#include "cfgFunc_q22.hpp" 
#include "q22.hpp" 

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
    std::cout << "NOTE:running query #22\n."; 
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
    Table tbl_GlobalLimit_TD_0591205_output("tbl_GlobalLimit_TD_0591205_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0591205_output.allocateHost();
    Table tbl_LocalLimit_TD_150176_output("tbl_LocalLimit_TD_150176_output", 6100000, 5, "");
    tbl_LocalLimit_TD_150176_output.allocateHost();
    Table tbl_Sort_TD_2105568_output("tbl_Sort_TD_2105568_output", 6100000, 5, "");
    tbl_Sort_TD_2105568_output.allocateHost();
    Table tbl_Aggregate_TD_3321370_output("tbl_Aggregate_TD_3321370_output", 6100000, 5, "");
    tbl_Aggregate_TD_3321370_output.allocateHost();
    Table tbl_Expand_TD_4998778_output("tbl_Expand_TD_4998778_output", 6100000, 6, "");
    tbl_Expand_TD_4998778_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5459337_output("tbl_JOIN_INNER_TD_5459337_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_5459337_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6505937_output("tbl_JOIN_INNER_TD_6505937_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6505937_output.allocateHost();
    Table tbl_Filter_TD_6968086_output("tbl_Filter_TD_6968086_output", 6100000, 1, "");
    tbl_Filter_TD_6968086_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7423123_output("tbl_JOIN_INNER_TD_7423123_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_7423123_output.allocateHost();
    Table tbl_Filter_TD_7207622_output("tbl_Filter_TD_7207622_output", 6100000, 5, "");
    tbl_Filter_TD_7207622_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7712457_input;
    tbl_SerializeFromObject_TD_7712457_input = Table("warehouse", warehouse_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7712457_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_7712457_input.allocateHost();
    tbl_SerializeFromObject_TD_7712457_input.loadHost();
    Table tbl_Filter_TD_8922173_output("tbl_Filter_TD_8922173_output", 6100000, 4, "");
    tbl_Filter_TD_8922173_output.allocateHost();
    Table tbl_Filter_TD_8870438_output("tbl_Filter_TD_8870438_output", 6100000, 1, "");
    tbl_Filter_TD_8870438_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8604396_input;
    tbl_SerializeFromObject_TD_8604396_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8604396_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8604396_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8604396_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8604396_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8604396_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8604396_input.allocateHost();
    tbl_SerializeFromObject_TD_8604396_input.loadHost();
    Table tbl_SerializeFromObject_TD_9677451_input;
    tbl_SerializeFromObject_TD_9677451_input = Table("inventory", inventory_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9677451_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_9677451_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_9677451_input.addCol("inv_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_9677451_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_9677451_input.allocateHost();
    tbl_SerializeFromObject_TD_9677451_input.loadHost();
    Table tbl_SerializeFromObject_TD_9835364_input;
    tbl_SerializeFromObject_TD_9835364_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9835364_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9835364_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9835364_input.allocateHost();
    tbl_SerializeFromObject_TD_9835364_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_7423123_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8922173_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8870438_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_7423123_cmds;
    cfg_JOIN_INNER_TD_7423123_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7423123_gqe_join (cfg_JOIN_INNER_TD_7423123_cmds.cmd);
    cfg_JOIN_INNER_TD_7423123_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_7423123;
    krnl_JOIN_INNER_TD_7423123 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7423123.setup(tbl_Filter_TD_8922173_output, tbl_Filter_TD_8870438_output, tbl_JOIN_INNER_TD_7423123_output, cfg_JOIN_INNER_TD_7423123_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_7423123;
    trans_JOIN_INNER_TD_7423123.setq(q_h);
    trans_JOIN_INNER_TD_7423123.add(&(cfg_JOIN_INNER_TD_7423123_cmds));
    transEngine trans_JOIN_INNER_TD_7423123_out;
    trans_JOIN_INNER_TD_7423123_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7423123;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7423123;
    std::vector<cl::Event> events_JOIN_INNER_TD_7423123;
    events_h2d_wr_JOIN_INNER_TD_7423123.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7423123.resize(1);
    events_JOIN_INNER_TD_7423123.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7423123;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7423123;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_646051_s, tv_r_Filter_8_646051_e;
    gettimeofday(&tv_r_Filter_8_646051_s, 0);
    SW_Filter_TD_8870438(tbl_SerializeFromObject_TD_9835364_input, tbl_Filter_TD_8870438_output);
    gettimeofday(&tv_r_Filter_8_646051_e, 0);

    struct timeval tv_r_Filter_8_840158_s, tv_r_Filter_8_840158_e;
    gettimeofday(&tv_r_Filter_8_840158_s, 0);
    SW_Filter_TD_8922173(tbl_SerializeFromObject_TD_9677451_input, tbl_Filter_TD_8922173_output);
    gettimeofday(&tv_r_Filter_8_840158_e, 0);

    struct timeval tv_r_Filter_7_221685_s, tv_r_Filter_7_221685_e;
    gettimeofday(&tv_r_Filter_7_221685_s, 0);
    SW_Filter_TD_7207622(tbl_SerializeFromObject_TD_8604396_input, tbl_Filter_TD_7207622_output);
    gettimeofday(&tv_r_Filter_7_221685_e, 0);

    struct timeval tv_r_JOIN_INNER_7_242393_s, tv_r_JOIN_INNER_7_242393_e;
    gettimeofday(&tv_r_JOIN_INNER_7_242393_s, 0);
    trans_JOIN_INNER_TD_7423123.add(&(tbl_Filter_TD_8922173_output));
    trans_JOIN_INNER_TD_7423123.add(&(tbl_Filter_TD_8870438_output));
    trans_JOIN_INNER_TD_7423123.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7423123), &(events_h2d_wr_JOIN_INNER_TD_7423123[0]));
    events_grp_JOIN_INNER_TD_7423123.push_back(events_h2d_wr_JOIN_INNER_TD_7423123[0]);
    krnl_JOIN_INNER_TD_7423123.run(0, &(events_grp_JOIN_INNER_TD_7423123), &(events_JOIN_INNER_TD_7423123[0]));
    
    trans_JOIN_INNER_TD_7423123_out.add(&(tbl_JOIN_INNER_TD_7423123_output));
    trans_JOIN_INNER_TD_7423123_out.dev2host(0, &(events_JOIN_INNER_TD_7423123), &(events_d2h_rd_JOIN_INNER_TD_7423123[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_242393_e, 0);

    struct timeval tv_r_Filter_6_640551_s, tv_r_Filter_6_640551_e;
    gettimeofday(&tv_r_Filter_6_640551_s, 0);
    SW_Filter_TD_6968086(tbl_SerializeFromObject_TD_7712457_input, tbl_Filter_TD_6968086_output);
    gettimeofday(&tv_r_Filter_6_640551_e, 0);

    struct timeval tv_r_JOIN_INNER_6_50178_s, tv_r_JOIN_INNER_6_50178_e;
    gettimeofday(&tv_r_JOIN_INNER_6_50178_s, 0);
    SW_JOIN_INNER_TD_6505937(tbl_JOIN_INNER_TD_7423123_output, tbl_Filter_TD_7207622_output, tbl_JOIN_INNER_TD_6505937_output);
    gettimeofday(&tv_r_JOIN_INNER_6_50178_e, 0);

    struct timeval tv_r_JOIN_INNER_5_596277_s, tv_r_JOIN_INNER_5_596277_e;
    gettimeofday(&tv_r_JOIN_INNER_5_596277_s, 0);
    SW_JOIN_INNER_TD_5459337(tbl_JOIN_INNER_TD_6505937_output, tbl_Filter_TD_6968086_output, tbl_JOIN_INNER_TD_5459337_output);
    gettimeofday(&tv_r_JOIN_INNER_5_596277_e, 0);

    struct timeval tv_r_Expand_4_764639_s, tv_r_Expand_4_764639_e;
    gettimeofday(&tv_r_Expand_4_764639_s, 0);
    SW_Expand_TD_4998778(tbl_JOIN_INNER_TD_5459337_output, tbl_Expand_TD_4998778_output);
    gettimeofday(&tv_r_Expand_4_764639_e, 0);

    struct timeval tv_r_Aggregate_3_624749_s, tv_r_Aggregate_3_624749_e;
    gettimeofday(&tv_r_Aggregate_3_624749_s, 0);
    SW_Aggregate_TD_3321370(tbl_Expand_TD_4998778_output, tbl_Aggregate_TD_3321370_output);
    gettimeofday(&tv_r_Aggregate_3_624749_e, 0);

    struct timeval tv_r_Sort_2_686128_s, tv_r_Sort_2_686128_e;
    gettimeofday(&tv_r_Sort_2_686128_s, 0);
    SW_Sort_TD_2105568(tbl_Aggregate_TD_3321370_output, tbl_Sort_TD_2105568_output);
    gettimeofday(&tv_r_Sort_2_686128_e, 0);

    struct timeval tv_r_LocalLimit_1_526773_s, tv_r_LocalLimit_1_526773_e;
    gettimeofday(&tv_r_LocalLimit_1_526773_s, 0);
    SW_LocalLimit_TD_150176(tbl_Sort_TD_2105568_output, tbl_LocalLimit_TD_150176_output);
    gettimeofday(&tv_r_LocalLimit_1_526773_e, 0);

    struct timeval tv_r_GlobalLimit_0_938410_s, tv_r_GlobalLimit_0_938410_e;
    gettimeofday(&tv_r_GlobalLimit_0_938410_s, 0);
    SW_GlobalLimit_TD_0591205(tbl_LocalLimit_TD_150176_output, tbl_GlobalLimit_TD_0591205_output);
    gettimeofday(&tv_r_GlobalLimit_0_938410_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_646051_s, &tv_r_Filter_8_646051_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9835364_input: " << tbl_SerializeFromObject_TD_9835364_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_840158_s, &tv_r_Filter_8_840158_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9677451_input: " << tbl_SerializeFromObject_TD_9677451_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_221685_s, &tv_r_Filter_7_221685_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8604396_input: " << tbl_SerializeFromObject_TD_8604396_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_242393_s, &tv_r_JOIN_INNER_7_242393_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8922173_output: " << tbl_Filter_TD_8922173_output.getNumRow() << " " << "tbl_Filter_TD_8870438_output: " << tbl_Filter_TD_8870438_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_640551_s, &tv_r_Filter_6_640551_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7712457_input: " << tbl_SerializeFromObject_TD_7712457_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_50178_s, &tv_r_JOIN_INNER_6_50178_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7423123_output: " << tbl_JOIN_INNER_TD_7423123_output.getNumRow() << " " << "tbl_Filter_TD_7207622_output: " << tbl_Filter_TD_7207622_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_596277_s, &tv_r_JOIN_INNER_5_596277_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6505937_output: " << tbl_JOIN_INNER_TD_6505937_output.getNumRow() << " " << "tbl_Filter_TD_6968086_output: " << tbl_Filter_TD_6968086_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_764639_s, &tv_r_Expand_4_764639_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5459337_output: " << tbl_JOIN_INNER_TD_5459337_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_624749_s, &tv_r_Aggregate_3_624749_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4998778_output: " << tbl_Expand_TD_4998778_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_686128_s, &tv_r_Sort_2_686128_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3321370_output: " << tbl_Aggregate_TD_3321370_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_526773_s, &tv_r_LocalLimit_1_526773_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2105568_output: " << tbl_Sort_TD_2105568_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_938410_s, &tv_r_GlobalLimit_0_938410_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_150176_output: " << tbl_LocalLimit_TD_150176_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.355857 * 1000 << "ms" << std::endl; 
    return 0; 
}
