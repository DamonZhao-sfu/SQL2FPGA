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
    Table tbl_Sort_TD_0284552_output("tbl_Sort_TD_0284552_output", 6100000, 2, "");
    tbl_Sort_TD_0284552_output.allocateHost();
    Table tbl_Filter_TD_1689814_output("tbl_Filter_TD_1689814_output", 6100000, 2, "");
    tbl_Filter_TD_1689814_output.allocateHost();
    Table tbl_Aggregate_TD_242625_output("tbl_Aggregate_TD_242625_output", 6100000, 2, "");
    tbl_Aggregate_TD_242625_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3672842_output("tbl_JOIN_INNER_TD_3672842_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_3672842_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4941537_output("tbl_JOIN_INNER_TD_4941537_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4941537_output.allocateHost();
    Table tbl_Filter_TD_4658420_output("tbl_Filter_TD_4658420_output", 6100000, 1, "");
    tbl_Filter_TD_4658420_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5608880_output("tbl_JOIN_INNER_TD_5608880_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5608880_output.allocateHost();
    Table tbl_Filter_TD_5686869_output("tbl_Filter_TD_5686869_output", 6100000, 1, "");
    tbl_Filter_TD_5686869_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_5163955_output("tbl_JOIN_LEFTOUTER_TD_5163955_output", 6100000, 3, "");
    tbl_JOIN_LEFTOUTER_TD_5163955_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6977083_output("tbl_JOIN_INNER_TD_6977083_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6977083_output.allocateHost();
    Table tbl_Filter_TD_6398187_output("tbl_Filter_TD_6398187_output", 6100000, 3, "");
    tbl_Filter_TD_6398187_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6923675_input;
    tbl_SerializeFromObject_TD_6923675_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6923675_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6923675_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_6923675_input.allocateHost();
    tbl_SerializeFromObject_TD_6923675_input.loadHost();
    Table tbl_Aggregate_TD_6943873_output_preprocess("tbl_Aggregate_TD_6943873_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_6943873_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_6943873_output("tbl_Aggregate_TD_6943873_output", 6100000, 1, "");
    tbl_Aggregate_TD_6943873_output.allocateHost();
    Table tbl_Filter_TD_6507229_output("tbl_Filter_TD_6507229_output", 6100000, 3, "");
    tbl_Filter_TD_6507229_output.allocateHost();
    Table tbl_Aggregate_TD_6540010_output("tbl_Aggregate_TD_6540010_output", 6100000, 2, "");
    tbl_Aggregate_TD_6540010_output.allocateHost();
    Table tbl_Filter_TD_7817519_output("tbl_Filter_TD_7817519_output", 6100000, 2, "");
    tbl_Filter_TD_7817519_output.allocateHost();
    Table tbl_Filter_TD_7438911_output("tbl_Filter_TD_7438911_output", 6100000, 2, "");
    tbl_Filter_TD_7438911_output.allocateHost();
    Table tbl_SerializeFromObject_TD_77027_input;
    tbl_SerializeFromObject_TD_77027_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_77027_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_77027_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_77027_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_77027_input.allocateHost();
    tbl_SerializeFromObject_TD_77027_input.loadHost();
    Table tbl_Filter_TD_7835507_output("tbl_Filter_TD_7835507_output", 6100000, 1, "");
    tbl_Filter_TD_7835507_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7874910_input;
    tbl_SerializeFromObject_TD_7874910_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7874910_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7874910_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_7874910_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7874910_input.allocateHost();
    tbl_SerializeFromObject_TD_7874910_input.loadHost();
    Table tbl_Filter_TD_780665_output("tbl_Filter_TD_780665_output", 6100000, 2, "");
    tbl_Filter_TD_780665_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8980163_input;
    tbl_SerializeFromObject_TD_8980163_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8980163_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8980163_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8980163_input.allocateHost();
    tbl_SerializeFromObject_TD_8980163_input.loadHost();
    Table tbl_SerializeFromObject_TD_8540550_input;
    tbl_SerializeFromObject_TD_8540550_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8540550_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8540550_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_8540550_input.allocateHost();
    tbl_SerializeFromObject_TD_8540550_input.loadHost();
    Table tbl_SerializeFromObject_TD_8979836_input;
    tbl_SerializeFromObject_TD_8979836_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8979836_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8979836_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8979836_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8979836_input.allocateHost();
    tbl_SerializeFromObject_TD_8979836_input.loadHost();
    Table tbl_SerializeFromObject_TD_8993535_input;
    tbl_SerializeFromObject_TD_8993535_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8993535_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_8993535_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8993535_input.allocateHost();
    tbl_SerializeFromObject_TD_8993535_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_6943873_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Filter_TD_7835507_output.allocateDevBuffer(context_a, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_6943873_cmds;
    cfg_Aggregate_TD_6943873_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_6943873_gqe_aggr(cfg_Aggregate_TD_6943873_cmds.cmd);
    cfg_Aggregate_TD_6943873_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_6943873_cmds_out;
    cfg_Aggregate_TD_6943873_cmds_out.allocateHost();
    cfg_Aggregate_TD_6943873_cmds_out.allocateDevBuffer(context_a, 33);
    // *************************** Kernel Setup ************************* // 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_6943873;
    krnl_Aggregate_TD_6943873 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_6943873.setup(tbl_Filter_TD_7835507_output, tbl_Aggregate_TD_6943873_output_preprocess, cfg_Aggregate_TD_6943873_cmds, cfg_Aggregate_TD_6943873_cmds_out, buftmp_a);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_6943873;
    trans_Aggregate_TD_6943873.setq(q_a);
    trans_Aggregate_TD_6943873.add(&(cfg_Aggregate_TD_6943873_cmds));
    transEngine trans_Aggregate_TD_6943873_out;
    trans_Aggregate_TD_6943873_out.setq(q_a);
    q_a.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_6943873;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_6943873;
    std::vector<cl::Event> events_Aggregate_TD_6943873;
    events_h2d_wr_Aggregate_TD_6943873.resize(1);
    events_d2h_rd_Aggregate_TD_6943873.resize(1);
    events_Aggregate_TD_6943873.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_6943873;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_6943873;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_713662_s, tv_r_Filter_7_713662_e;
    gettimeofday(&tv_r_Filter_7_713662_s, 0);
    SW_Filter_TD_780665(tbl_SerializeFromObject_TD_8993535_input, tbl_Filter_TD_780665_output);
    gettimeofday(&tv_r_Filter_7_713662_e, 0);

    struct timeval tv_r_Filter_7_794114_s, tv_r_Filter_7_794114_e;
    gettimeofday(&tv_r_Filter_7_794114_s, 0);
    SW_Filter_TD_7835507(tbl_SerializeFromObject_TD_8979836_input, tbl_Filter_TD_7835507_output);
    gettimeofday(&tv_r_Filter_7_794114_e, 0);

    struct timeval tv_r_Filter_7_517316_s, tv_r_Filter_7_517316_e;
    gettimeofday(&tv_r_Filter_7_517316_s, 0);
    SW_Filter_TD_7438911(tbl_SerializeFromObject_TD_8540550_input, tbl_Filter_TD_7438911_output);
    gettimeofday(&tv_r_Filter_7_517316_e, 0);

    struct timeval tv_r_Filter_7_868133_s, tv_r_Filter_7_868133_e;
    gettimeofday(&tv_r_Filter_7_868133_s, 0);
    SW_Filter_TD_7817519(tbl_SerializeFromObject_TD_8980163_input, tbl_Filter_TD_7817519_output);
    gettimeofday(&tv_r_Filter_7_868133_e, 0);

    struct timeval tv_r_Aggregate_6_774390_s, tv_r_Aggregate_6_774390_e;
    gettimeofday(&tv_r_Aggregate_6_774390_s, 0);
    SW_Aggregate_TD_6540010(tbl_Filter_TD_780665_output, tbl_Aggregate_TD_6540010_output);
    gettimeofday(&tv_r_Aggregate_6_774390_e, 0);

    struct timeval tv_r_Filter_6_957162_s, tv_r_Filter_6_957162_e;
    gettimeofday(&tv_r_Filter_6_957162_s, 0);
    SW_Filter_TD_6507229(tbl_SerializeFromObject_TD_7874910_input, tbl_Filter_TD_6507229_output);
    gettimeofday(&tv_r_Filter_6_957162_e, 0);

    struct timeval tv_r_Aggregate_6_845700_s, tv_r_Aggregate_6_845700_e;
    gettimeofday(&tv_r_Aggregate_6_845700_s, 0);
    trans_Aggregate_TD_6943873.add(&(tbl_Filter_TD_7835507_output));
    trans_Aggregate_TD_6943873.host2dev(0, &(prev_events_grp_Aggregate_TD_6943873), &(events_h2d_wr_Aggregate_TD_6943873[0]));
    events_grp_Aggregate_TD_6943873.push_back(events_h2d_wr_Aggregate_TD_6943873[0]);
    krnl_Aggregate_TD_6943873.run(0, &(events_grp_Aggregate_TD_6943873), &(events_Aggregate_TD_6943873[0]));
    
    trans_Aggregate_TD_6943873_out.add(&(tbl_Aggregate_TD_6943873_output_preprocess));
    trans_Aggregate_TD_6943873_out.dev2host(0, &(events_Aggregate_TD_6943873), &(events_d2h_rd_Aggregate_TD_6943873[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_6943873_consolidate(tbl_Aggregate_TD_6943873_output_preprocess, tbl_Aggregate_TD_6943873_output);
    gettimeofday(&tv_r_Aggregate_6_845700_e, 0);

    struct timeval tv_r_Filter_6_470918_s, tv_r_Filter_6_470918_e;
    gettimeofday(&tv_r_Filter_6_470918_s, 0);
    SW_Filter_TD_6398187(tbl_SerializeFromObject_TD_77027_input, tbl_Filter_TD_6398187_output);
    gettimeofday(&tv_r_Filter_6_470918_e, 0);

    struct timeval tv_r_JOIN_INNER_6_511193_s, tv_r_JOIN_INNER_6_511193_e;
    gettimeofday(&tv_r_JOIN_INNER_6_511193_s, 0);
    SW_JOIN_INNER_TD_6977083(tbl_Filter_TD_7817519_output, tbl_Filter_TD_7438911_output, tbl_JOIN_INNER_TD_6977083_output);
    gettimeofday(&tv_r_JOIN_INNER_6_511193_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_5_822239_s, tv_r_JOIN_LEFTOUTER_5_822239_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_822239_s, 0);
    SW_JOIN_LEFTOUTER_TD_5163955(tbl_Filter_TD_6507229_output, tbl_Aggregate_TD_6540010_output, tbl_JOIN_LEFTOUTER_TD_5163955_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_822239_e, 0);

    struct timeval tv_r_Filter_5_563304_s, tv_r_Filter_5_563304_e;
    gettimeofday(&tv_r_Filter_5_563304_s, 0);
    SW_Filter_TD_5686869(tbl_SerializeFromObject_TD_6923675_input, tbl_Aggregate_TD_6943873_output, tbl_Filter_TD_5686869_output);
    gettimeofday(&tv_r_Filter_5_563304_e, 0);

    struct timeval tv_r_JOIN_INNER_5_432528_s, tv_r_JOIN_INNER_5_432528_e;
    gettimeofday(&tv_r_JOIN_INNER_5_432528_s, 0);
    SW_JOIN_INNER_TD_5608880(tbl_JOIN_INNER_TD_6977083_output, tbl_Filter_TD_6398187_output, tbl_JOIN_INNER_TD_5608880_output);
    gettimeofday(&tv_r_JOIN_INNER_5_432528_e, 0);

    struct timeval tv_r_Filter_4_102981_s, tv_r_Filter_4_102981_e;
    gettimeofday(&tv_r_Filter_4_102981_s, 0);
    SW_Filter_TD_4658420(tbl_JOIN_LEFTOUTER_TD_5163955_output, tbl_Filter_TD_4658420_output);
    gettimeofday(&tv_r_Filter_4_102981_e, 0);

    struct timeval tv_r_JOIN_INNER_4_459481_s, tv_r_JOIN_INNER_4_459481_e;
    gettimeofday(&tv_r_JOIN_INNER_4_459481_s, 0);
    SW_JOIN_INNER_TD_4941537(tbl_JOIN_INNER_TD_5608880_output, tbl_Filter_TD_5686869_output, tbl_JOIN_INNER_TD_4941537_output);
    gettimeofday(&tv_r_JOIN_INNER_4_459481_e, 0);

    struct timeval tv_r_JOIN_INNER_3_419762_s, tv_r_JOIN_INNER_3_419762_e;
    gettimeofday(&tv_r_JOIN_INNER_3_419762_s, 0);
    SW_JOIN_INNER_TD_3672842(tbl_JOIN_INNER_TD_4941537_output, tbl_Filter_TD_4658420_output, tbl_JOIN_INNER_TD_3672842_output);
    gettimeofday(&tv_r_JOIN_INNER_3_419762_e, 0);

    struct timeval tv_r_Aggregate_2_346248_s, tv_r_Aggregate_2_346248_e;
    gettimeofday(&tv_r_Aggregate_2_346248_s, 0);
    SW_Aggregate_TD_242625(tbl_JOIN_INNER_TD_3672842_output, tbl_Aggregate_TD_242625_output);
    gettimeofday(&tv_r_Aggregate_2_346248_e, 0);

    struct timeval tv_r_Filter_1_270535_s, tv_r_Filter_1_270535_e;
    gettimeofday(&tv_r_Filter_1_270535_s, 0);
    SW_Filter_TD_1689814(tbl_Aggregate_TD_242625_output, tbl_Filter_TD_1689814_output);
    gettimeofday(&tv_r_Filter_1_270535_e, 0);

    struct timeval tv_r_Sort_0_358061_s, tv_r_Sort_0_358061_e;
    gettimeofday(&tv_r_Sort_0_358061_s, 0);
    SW_Sort_TD_0284552(tbl_Filter_TD_1689814_output, tbl_Sort_TD_0284552_output);
    gettimeofday(&tv_r_Sort_0_358061_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_713662_s, &tv_r_Filter_7_713662_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8993535_input: " << tbl_SerializeFromObject_TD_8993535_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_794114_s, &tv_r_Filter_7_794114_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8979836_input: " << tbl_SerializeFromObject_TD_8979836_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_517316_s, &tv_r_Filter_7_517316_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8540550_input: " << tbl_SerializeFromObject_TD_8540550_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_868133_s, &tv_r_Filter_7_868133_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8980163_input: " << tbl_SerializeFromObject_TD_8980163_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_774390_s, &tv_r_Aggregate_6_774390_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_780665_output: " << tbl_Filter_TD_780665_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_957162_s, &tv_r_Filter_6_957162_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7874910_input: " << tbl_SerializeFromObject_TD_7874910_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_845700_s, &tv_r_Aggregate_6_845700_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7835507_output: " << tbl_Filter_TD_7835507_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_470918_s, &tv_r_Filter_6_470918_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_77027_input: " << tbl_SerializeFromObject_TD_77027_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_511193_s, &tv_r_JOIN_INNER_6_511193_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7817519_output: " << tbl_Filter_TD_7817519_output.getNumRow() << " " << "tbl_Filter_TD_7438911_output: " << tbl_Filter_TD_7438911_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_5: " << tvdiff(&tv_r_JOIN_LEFTOUTER_5_822239_s, &tv_r_JOIN_LEFTOUTER_5_822239_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6507229_output: " << tbl_Filter_TD_6507229_output.getNumRow() << " " << "tbl_Aggregate_TD_6540010_output: " << tbl_Aggregate_TD_6540010_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_563304_s, &tv_r_Filter_5_563304_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6923675_input: " << tbl_SerializeFromObject_TD_6923675_input.getNumRow() << " " << "tbl_Aggregate_TD_6943873_output: " << tbl_Aggregate_TD_6943873_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_432528_s, &tv_r_JOIN_INNER_5_432528_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6977083_output: " << tbl_JOIN_INNER_TD_6977083_output.getNumRow() << " " << "tbl_Filter_TD_6398187_output: " << tbl_Filter_TD_6398187_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_102981_s, &tv_r_Filter_4_102981_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_5163955_output: " << tbl_JOIN_LEFTOUTER_TD_5163955_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_459481_s, &tv_r_JOIN_INNER_4_459481_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5608880_output: " << tbl_JOIN_INNER_TD_5608880_output.getNumRow() << " " << "tbl_Filter_TD_5686869_output: " << tbl_Filter_TD_5686869_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_419762_s, &tv_r_JOIN_INNER_3_419762_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4941537_output: " << tbl_JOIN_INNER_TD_4941537_output.getNumRow() << " " << "tbl_Filter_TD_4658420_output: " << tbl_Filter_TD_4658420_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_346248_s, &tv_r_Aggregate_2_346248_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3672842_output: " << tbl_JOIN_INNER_TD_3672842_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_1: " << tvdiff(&tv_r_Filter_1_270535_s, &tv_r_Filter_1_270535_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_242625_output: " << tbl_Aggregate_TD_242625_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_358061_s, &tv_r_Sort_0_358061_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1689814_output: " << tbl_Filter_TD_1689814_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.700156 * 1000 << "ms" << std::endl; 
    return 0; 
}
