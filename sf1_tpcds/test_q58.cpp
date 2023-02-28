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

#include "cfgFunc_q58.hpp" 
#include "q58.hpp" 

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
    std::cout << "NOTE:running query #58\n."; 
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
    Table tbl_GlobalLimit_TD_0228264_output("tbl_GlobalLimit_TD_0228264_output", 6100000, 8, "");
    tbl_GlobalLimit_TD_0228264_output.allocateHost();
    Table tbl_LocalLimit_TD_1323908_output("tbl_LocalLimit_TD_1323908_output", 6100000, 8, "");
    tbl_LocalLimit_TD_1323908_output.allocateHost();
    Table tbl_Sort_TD_2893400_output("tbl_Sort_TD_2893400_output", 6100000, 8, "");
    tbl_Sort_TD_2893400_output.allocateHost();
    Table tbl_Project_TD_3901867_output("tbl_Project_TD_3901867_output", 6100000, 8, "");
    tbl_Project_TD_3901867_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4880176_output("tbl_JOIN_INNER_TD_4880176_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_4880176_output.allocateHost();
    Table tbl_JOIN_INNER_TD_562857_output("tbl_JOIN_INNER_TD_562857_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_562857_output.allocateHost();
    Table tbl_Filter_TD_5779832_output("tbl_Filter_TD_5779832_output", 6100000, 2, "");
    tbl_Filter_TD_5779832_output.allocateHost();
    Table tbl_Filter_TD_6881067_output("tbl_Filter_TD_6881067_output", 6100000, 2, "");
    tbl_Filter_TD_6881067_output.allocateHost();
    Table tbl_Filter_TD_6893713_output("tbl_Filter_TD_6893713_output", 6100000, 2, "");
    tbl_Filter_TD_6893713_output.allocateHost();
    Table tbl_Aggregate_TD_6509306_output("tbl_Aggregate_TD_6509306_output", 6100000, 2, "");
    tbl_Aggregate_TD_6509306_output.allocateHost();
    Table tbl_Aggregate_TD_7128220_output("tbl_Aggregate_TD_7128220_output", 6100000, 2, "");
    tbl_Aggregate_TD_7128220_output.allocateHost();
    Table tbl_Aggregate_TD_7464050_output("tbl_Aggregate_TD_7464050_output", 6100000, 2, "");
    tbl_Aggregate_TD_7464050_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7691242_output("tbl_JOIN_INNER_TD_7691242_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7691242_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8235686_output("tbl_JOIN_INNER_TD_8235686_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_8235686_output.allocateHost();
    Table tbl_JOIN_INNER_TD_881496_output("tbl_JOIN_INNER_TD_881496_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_881496_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8425134_output("tbl_JOIN_INNER_TD_8425134_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8425134_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_8476052_output("tbl_JOIN_LEFTSEMI_TD_8476052_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_8476052_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9250551_output("tbl_JOIN_INNER_TD_9250551_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_9250551_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_9415842_output("tbl_JOIN_LEFTSEMI_TD_9415842_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_9415842_output.allocateHost();
    Table tbl_JOIN_INNER_TD_955202_output("tbl_JOIN_INNER_TD_955202_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_955202_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_9802369_output("tbl_JOIN_LEFTSEMI_TD_9802369_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_9802369_output.allocateHost();
    Table tbl_Filter_TD_9242214_output("tbl_Filter_TD_9242214_output", 6100000, 3, "");
    tbl_Filter_TD_9242214_output.allocateHost();
    Table tbl_Filter_TD_9508085_output("tbl_Filter_TD_9508085_output", 6100000, 2, "");
    tbl_Filter_TD_9508085_output.allocateHost();
    Table tbl_Filter_TD_9917269_output("tbl_Filter_TD_9917269_output", 6100000, 2, "");
    tbl_Filter_TD_9917269_output.allocateHost();
    Table tbl_Filter_TD_9368898_output("tbl_Filter_TD_9368898_output", 6100000, 1, "");
    tbl_Filter_TD_9368898_output.allocateHost();
    Table tbl_Filter_TD_10863527_output("tbl_Filter_TD_10863527_output", 6100000, 3, "");
    tbl_Filter_TD_10863527_output.allocateHost();
    Table tbl_Filter_TD_10571270_output("tbl_Filter_TD_10571270_output", 6100000, 2, "");
    tbl_Filter_TD_10571270_output.allocateHost();
    Table tbl_Filter_TD_10721167_output("tbl_Filter_TD_10721167_output", 6100000, 2, "");
    tbl_Filter_TD_10721167_output.allocateHost();
    Table tbl_Filter_TD_10710904_output("tbl_Filter_TD_10710904_output", 6100000, 1, "");
    tbl_Filter_TD_10710904_output.allocateHost();
    Table tbl_Filter_TD_10633598_output("tbl_Filter_TD_10633598_output", 6100000, 3, "");
    tbl_Filter_TD_10633598_output.allocateHost();
    Table tbl_Filter_TD_10724143_output("tbl_Filter_TD_10724143_output", 6100000, 2, "");
    tbl_Filter_TD_10724143_output.allocateHost();
    Table tbl_Filter_TD_10727391_output("tbl_Filter_TD_10727391_output", 6100000, 2, "");
    tbl_Filter_TD_10727391_output.allocateHost();
    Table tbl_Filter_TD_10338965_output("tbl_Filter_TD_10338965_output", 6100000, 1, "");
    tbl_Filter_TD_10338965_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10623457_input;
    tbl_SerializeFromObject_TD_10623457_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10623457_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10623457_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_10623457_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10623457_input.allocateHost();
    tbl_SerializeFromObject_TD_10623457_input.loadHost();
    Table tbl_SerializeFromObject_TD_10645116_input;
    tbl_SerializeFromObject_TD_10645116_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10645116_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10645116_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10645116_input.allocateHost();
    tbl_SerializeFromObject_TD_10645116_input.loadHost();
    Table tbl_SerializeFromObject_TD_10365343_input;
    tbl_SerializeFromObject_TD_10365343_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10365343_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10365343_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10365343_input.allocateHost();
    tbl_SerializeFromObject_TD_10365343_input.loadHost();
    Table tbl_SerializeFromObject_TD_10749734_input;
    tbl_SerializeFromObject_TD_10749734_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10749734_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_10749734_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_10749734_input.allocateHost();
    tbl_SerializeFromObject_TD_10749734_input.loadHost();
    Table tbl_Filter_TD_10464170_output("tbl_Filter_TD_10464170_output", 6100000, 1, "");
    tbl_Filter_TD_10464170_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11576918_input;
    tbl_SerializeFromObject_TD_11576918_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11576918_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11576918_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_11576918_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11576918_input.allocateHost();
    tbl_SerializeFromObject_TD_11576918_input.loadHost();
    Table tbl_SerializeFromObject_TD_1114552_input;
    tbl_SerializeFromObject_TD_1114552_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1114552_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1114552_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1114552_input.allocateHost();
    tbl_SerializeFromObject_TD_1114552_input.loadHost();
    Table tbl_SerializeFromObject_TD_11178061_input;
    tbl_SerializeFromObject_TD_11178061_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11178061_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11178061_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11178061_input.allocateHost();
    tbl_SerializeFromObject_TD_11178061_input.loadHost();
    Table tbl_SerializeFromObject_TD_11805403_input;
    tbl_SerializeFromObject_TD_11805403_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11805403_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11805403_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11805403_input.allocateHost();
    tbl_SerializeFromObject_TD_11805403_input.loadHost();
    Table tbl_Filter_TD_11783724_output("tbl_Filter_TD_11783724_output", 6100000, 1, "");
    tbl_Filter_TD_11783724_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11243200_input;
    tbl_SerializeFromObject_TD_11243200_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11243200_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_11243200_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_11243200_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_11243200_input.allocateHost();
    tbl_SerializeFromObject_TD_11243200_input.loadHost();
    Table tbl_SerializeFromObject_TD_11440700_input;
    tbl_SerializeFromObject_TD_11440700_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11440700_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_11440700_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11440700_input.allocateHost();
    tbl_SerializeFromObject_TD_11440700_input.loadHost();
    Table tbl_SerializeFromObject_TD_11490384_input;
    tbl_SerializeFromObject_TD_11490384_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11490384_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_11490384_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11490384_input.allocateHost();
    tbl_SerializeFromObject_TD_11490384_input.loadHost();
    Table tbl_SerializeFromObject_TD_11880341_input;
    tbl_SerializeFromObject_TD_11880341_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11880341_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11880341_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11880341_input.allocateHost();
    tbl_SerializeFromObject_TD_11880341_input.loadHost();
    Table tbl_Filter_TD_11460360_output("tbl_Filter_TD_11460360_output", 6100000, 1, "");
    tbl_Filter_TD_11460360_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11164227_input;
    tbl_SerializeFromObject_TD_11164227_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11164227_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_11164227_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_11164227_input.allocateHost();
    tbl_SerializeFromObject_TD_11164227_input.loadHost();
    Table tbl_SerializeFromObject_TD_12133607_input;
    tbl_SerializeFromObject_TD_12133607_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12133607_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_12133607_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12133607_input.allocateHost();
    tbl_SerializeFromObject_TD_12133607_input.loadHost();
    Table tbl_SerializeFromObject_TD_12217018_input;
    tbl_SerializeFromObject_TD_12217018_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12217018_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_12217018_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12217018_input.allocateHost();
    tbl_SerializeFromObject_TD_12217018_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_LEFTSEMI_TD_8476052_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_9415842_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_9802369_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9917269_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9368898_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10721167_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10710904_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10727391_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10338965_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_LEFTSEMI_TD_8476052_cmds;
    cfg_JOIN_LEFTSEMI_TD_8476052_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_8476052_gqe_join (cfg_JOIN_LEFTSEMI_TD_8476052_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_8476052_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_9415842_cmds;
    cfg_JOIN_LEFTSEMI_TD_9415842_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_9415842_gqe_join (cfg_JOIN_LEFTSEMI_TD_9415842_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_9415842_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_9802369_cmds;
    cfg_JOIN_LEFTSEMI_TD_9802369_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_9802369_gqe_join (cfg_JOIN_LEFTSEMI_TD_9802369_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_9802369_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_LEFTSEMI_TD_8476052;
    krnl_JOIN_LEFTSEMI_TD_8476052 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_8476052.setup(tbl_Filter_TD_9368898_output, tbl_Filter_TD_9917269_output, tbl_JOIN_LEFTSEMI_TD_8476052_output, cfg_JOIN_LEFTSEMI_TD_8476052_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_9415842;
    krnl_JOIN_LEFTSEMI_TD_9415842 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_9415842.setup(tbl_Filter_TD_10710904_output, tbl_Filter_TD_10721167_output, tbl_JOIN_LEFTSEMI_TD_9415842_output, cfg_JOIN_LEFTSEMI_TD_9415842_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_9802369;
    krnl_JOIN_LEFTSEMI_TD_9802369 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_9802369.setup(tbl_Filter_TD_10338965_output, tbl_Filter_TD_10727391_output, tbl_JOIN_LEFTSEMI_TD_9802369_output, cfg_JOIN_LEFTSEMI_TD_9802369_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_LEFTSEMI_TD_8476052;
    trans_JOIN_LEFTSEMI_TD_8476052.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_8476052.add(&(cfg_JOIN_LEFTSEMI_TD_8476052_cmds));
    transEngine trans_JOIN_LEFTSEMI_TD_8476052_out;
    trans_JOIN_LEFTSEMI_TD_8476052_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_9415842;
    trans_JOIN_LEFTSEMI_TD_9415842.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_9415842.add(&(cfg_JOIN_LEFTSEMI_TD_9415842_cmds));
    transEngine trans_JOIN_LEFTSEMI_TD_9415842_out;
    trans_JOIN_LEFTSEMI_TD_9415842_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_9802369;
    trans_JOIN_LEFTSEMI_TD_9802369.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_9802369.add(&(cfg_JOIN_LEFTSEMI_TD_9802369_cmds));
    transEngine trans_JOIN_LEFTSEMI_TD_9802369_out;
    trans_JOIN_LEFTSEMI_TD_9802369_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_8476052;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_8476052;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_8476052;
    events_h2d_wr_JOIN_LEFTSEMI_TD_8476052.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_8476052.resize(1);
    events_JOIN_LEFTSEMI_TD_8476052.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_8476052;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_8476052;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_9415842;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_9415842;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_9415842;
    events_h2d_wr_JOIN_LEFTSEMI_TD_9415842.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_9415842.resize(1);
    events_JOIN_LEFTSEMI_TD_9415842.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_9415842;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_9415842;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_9802369;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_9802369;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_9802369;
    events_h2d_wr_JOIN_LEFTSEMI_TD_9802369.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_9802369.resize(1);
    events_JOIN_LEFTSEMI_TD_9802369.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_9802369;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_9802369;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_618219_s, tv_r_Filter_11_618219_e;
    gettimeofday(&tv_r_Filter_11_618219_s, 0);
    SW_Filter_TD_11460360(tbl_SerializeFromObject_TD_12217018_input, tbl_Filter_TD_11460360_output);
    gettimeofday(&tv_r_Filter_11_618219_e, 0);

    struct timeval tv_r_Filter_11_645751_s, tv_r_Filter_11_645751_e;
    gettimeofday(&tv_r_Filter_11_645751_s, 0);
    SW_Filter_TD_11783724(tbl_SerializeFromObject_TD_12133607_input, tbl_Filter_TD_11783724_output);
    gettimeofday(&tv_r_Filter_11_645751_e, 0);

    struct timeval tv_r_Filter_10_110644_s, tv_r_Filter_10_110644_e;
    gettimeofday(&tv_r_Filter_10_110644_s, 0);
    SW_Filter_TD_10464170(tbl_SerializeFromObject_TD_11164227_input, tbl_Filter_TD_10464170_output);
    gettimeofday(&tv_r_Filter_10_110644_e, 0);

    struct timeval tv_r_Filter_10_786249_s, tv_r_Filter_10_786249_e;
    gettimeofday(&tv_r_Filter_10_786249_s, 0);
    SW_Filter_TD_10338965(tbl_SerializeFromObject_TD_11880341_input, tbl_Filter_TD_11460360_output, tbl_Filter_TD_10338965_output);
    gettimeofday(&tv_r_Filter_10_786249_e, 0);

    struct timeval tv_r_Filter_10_475423_s, tv_r_Filter_10_475423_e;
    gettimeofday(&tv_r_Filter_10_475423_s, 0);
    SW_Filter_TD_10727391(tbl_SerializeFromObject_TD_11490384_input, tbl_Filter_TD_10727391_output);
    gettimeofday(&tv_r_Filter_10_475423_e, 0);

    struct timeval tv_r_Filter_10_922406_s, tv_r_Filter_10_922406_e;
    gettimeofday(&tv_r_Filter_10_922406_s, 0);
    SW_Filter_TD_10724143(tbl_SerializeFromObject_TD_11440700_input, tbl_Filter_TD_10724143_output);
    gettimeofday(&tv_r_Filter_10_922406_e, 0);

    struct timeval tv_r_Filter_10_377892_s, tv_r_Filter_10_377892_e;
    gettimeofday(&tv_r_Filter_10_377892_s, 0);
    SW_Filter_TD_10633598(tbl_SerializeFromObject_TD_11243200_input, tbl_Filter_TD_10633598_output);
    gettimeofday(&tv_r_Filter_10_377892_e, 0);

    struct timeval tv_r_Filter_10_638398_s, tv_r_Filter_10_638398_e;
    gettimeofday(&tv_r_Filter_10_638398_s, 0);
    SW_Filter_TD_10710904(tbl_SerializeFromObject_TD_11805403_input, tbl_Filter_TD_11783724_output, tbl_Filter_TD_10710904_output);
    gettimeofday(&tv_r_Filter_10_638398_e, 0);

    struct timeval tv_r_Filter_10_258731_s, tv_r_Filter_10_258731_e;
    gettimeofday(&tv_r_Filter_10_258731_s, 0);
    SW_Filter_TD_10721167(tbl_SerializeFromObject_TD_11178061_input, tbl_Filter_TD_10721167_output);
    gettimeofday(&tv_r_Filter_10_258731_e, 0);

    struct timeval tv_r_Filter_10_271262_s, tv_r_Filter_10_271262_e;
    gettimeofday(&tv_r_Filter_10_271262_s, 0);
    SW_Filter_TD_10571270(tbl_SerializeFromObject_TD_1114552_input, tbl_Filter_TD_10571270_output);
    gettimeofday(&tv_r_Filter_10_271262_e, 0);

    struct timeval tv_r_Filter_10_125032_s, tv_r_Filter_10_125032_e;
    gettimeofday(&tv_r_Filter_10_125032_s, 0);
    SW_Filter_TD_10863527(tbl_SerializeFromObject_TD_11576918_input, tbl_Filter_TD_10863527_output);
    gettimeofday(&tv_r_Filter_10_125032_e, 0);

    struct timeval tv_r_Filter_9_146742_s, tv_r_Filter_9_146742_e;
    gettimeofday(&tv_r_Filter_9_146742_s, 0);
    SW_Filter_TD_9368898(tbl_SerializeFromObject_TD_10749734_input, tbl_Filter_TD_10464170_output, tbl_Filter_TD_9368898_output);
    gettimeofday(&tv_r_Filter_9_146742_e, 0);

    struct timeval tv_r_Filter_9_754971_s, tv_r_Filter_9_754971_e;
    gettimeofday(&tv_r_Filter_9_754971_s, 0);
    SW_Filter_TD_9917269(tbl_SerializeFromObject_TD_10365343_input, tbl_Filter_TD_9917269_output);
    gettimeofday(&tv_r_Filter_9_754971_e, 0);

    struct timeval tv_r_Filter_9_345979_s, tv_r_Filter_9_345979_e;
    gettimeofday(&tv_r_Filter_9_345979_s, 0);
    SW_Filter_TD_9508085(tbl_SerializeFromObject_TD_10645116_input, tbl_Filter_TD_9508085_output);
    gettimeofday(&tv_r_Filter_9_345979_e, 0);

    struct timeval tv_r_Filter_9_77011_s, tv_r_Filter_9_77011_e;
    gettimeofday(&tv_r_Filter_9_77011_s, 0);
    SW_Filter_TD_9242214(tbl_SerializeFromObject_TD_10623457_input, tbl_Filter_TD_9242214_output);
    gettimeofday(&tv_r_Filter_9_77011_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_503332_s, tv_r_JOIN_LEFTSEMI_9_503332_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_503332_s, 0);
    trans_JOIN_LEFTSEMI_TD_9802369.add(&(tbl_Filter_TD_10727391_output));
    trans_JOIN_LEFTSEMI_TD_9802369.add(&(tbl_Filter_TD_10338965_output));
    trans_JOIN_LEFTSEMI_TD_9802369.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_9802369), &(events_h2d_wr_JOIN_LEFTSEMI_TD_9802369[0]));
    events_grp_JOIN_LEFTSEMI_TD_9802369.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_9802369[0]);
    krnl_JOIN_LEFTSEMI_TD_9802369.run(0, &(events_grp_JOIN_LEFTSEMI_TD_9802369), &(events_JOIN_LEFTSEMI_TD_9802369[0]));
    
    trans_JOIN_LEFTSEMI_TD_9802369_out.add(&(tbl_JOIN_LEFTSEMI_TD_9802369_output));
    trans_JOIN_LEFTSEMI_TD_9802369_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_9802369), &(events_d2h_rd_JOIN_LEFTSEMI_TD_9802369[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_503332_e, 0);

    struct timeval tv_r_JOIN_INNER_9_962428_s, tv_r_JOIN_INNER_9_962428_e;
    gettimeofday(&tv_r_JOIN_INNER_9_962428_s, 0);
    SW_JOIN_INNER_TD_955202(tbl_Filter_TD_10633598_output, tbl_Filter_TD_10724143_output, tbl_JOIN_INNER_TD_955202_output);
    gettimeofday(&tv_r_JOIN_INNER_9_962428_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_9_972808_s, tv_r_JOIN_LEFTSEMI_9_972808_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_972808_s, 0);
    trans_JOIN_LEFTSEMI_TD_9415842.add(&(tbl_Filter_TD_10721167_output));
    trans_JOIN_LEFTSEMI_TD_9415842.add(&(tbl_Filter_TD_10710904_output));
    trans_JOIN_LEFTSEMI_TD_9415842.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_9415842), &(events_h2d_wr_JOIN_LEFTSEMI_TD_9415842[0]));
    events_grp_JOIN_LEFTSEMI_TD_9415842.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_9415842[0]);
    krnl_JOIN_LEFTSEMI_TD_9415842.run(0, &(events_grp_JOIN_LEFTSEMI_TD_9415842), &(events_JOIN_LEFTSEMI_TD_9415842[0]));
    
    trans_JOIN_LEFTSEMI_TD_9415842_out.add(&(tbl_JOIN_LEFTSEMI_TD_9415842_output));
    trans_JOIN_LEFTSEMI_TD_9415842_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_9415842), &(events_d2h_rd_JOIN_LEFTSEMI_TD_9415842[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_9_972808_e, 0);

    struct timeval tv_r_JOIN_INNER_9_296034_s, tv_r_JOIN_INNER_9_296034_e;
    gettimeofday(&tv_r_JOIN_INNER_9_296034_s, 0);
    SW_JOIN_INNER_TD_9250551(tbl_Filter_TD_10863527_output, tbl_Filter_TD_10571270_output, tbl_JOIN_INNER_TD_9250551_output);
    gettimeofday(&tv_r_JOIN_INNER_9_296034_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_446368_s, tv_r_JOIN_LEFTSEMI_8_446368_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_446368_s, 0);
    trans_JOIN_LEFTSEMI_TD_8476052.add(&(tbl_Filter_TD_9917269_output));
    trans_JOIN_LEFTSEMI_TD_8476052.add(&(tbl_Filter_TD_9368898_output));
    trans_JOIN_LEFTSEMI_TD_8476052.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_8476052), &(events_h2d_wr_JOIN_LEFTSEMI_TD_8476052[0]));
    events_grp_JOIN_LEFTSEMI_TD_8476052.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8476052[0]);
    krnl_JOIN_LEFTSEMI_TD_8476052.run(0, &(events_grp_JOIN_LEFTSEMI_TD_8476052), &(events_JOIN_LEFTSEMI_TD_8476052[0]));
    
    trans_JOIN_LEFTSEMI_TD_8476052_out.add(&(tbl_JOIN_LEFTSEMI_TD_8476052_output));
    trans_JOIN_LEFTSEMI_TD_8476052_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_8476052), &(events_d2h_rd_JOIN_LEFTSEMI_TD_8476052[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_446368_e, 0);

    struct timeval tv_r_JOIN_INNER_8_784280_s, tv_r_JOIN_INNER_8_784280_e;
    gettimeofday(&tv_r_JOIN_INNER_8_784280_s, 0);
    SW_JOIN_INNER_TD_8425134(tbl_Filter_TD_9242214_output, tbl_Filter_TD_9508085_output, tbl_JOIN_INNER_TD_8425134_output);
    gettimeofday(&tv_r_JOIN_INNER_8_784280_e, 0);

    struct timeval tv_r_JOIN_INNER_8_441971_s, tv_r_JOIN_INNER_8_441971_e;
    gettimeofday(&tv_r_JOIN_INNER_8_441971_s, 0);
    SW_JOIN_INNER_TD_881496(tbl_JOIN_INNER_TD_955202_output, tbl_JOIN_LEFTSEMI_TD_9802369_output, tbl_JOIN_INNER_TD_881496_output);
    gettimeofday(&tv_r_JOIN_INNER_8_441971_e, 0);

    struct timeval tv_r_JOIN_INNER_8_394441_s, tv_r_JOIN_INNER_8_394441_e;
    gettimeofday(&tv_r_JOIN_INNER_8_394441_s, 0);
    SW_JOIN_INNER_TD_8235686(tbl_JOIN_INNER_TD_9250551_output, tbl_JOIN_LEFTSEMI_TD_9415842_output, tbl_JOIN_INNER_TD_8235686_output);
    gettimeofday(&tv_r_JOIN_INNER_8_394441_e, 0);

    struct timeval tv_r_JOIN_INNER_7_366827_s, tv_r_JOIN_INNER_7_366827_e;
    gettimeofday(&tv_r_JOIN_INNER_7_366827_s, 0);
    SW_JOIN_INNER_TD_7691242(tbl_JOIN_INNER_TD_8425134_output, tbl_JOIN_LEFTSEMI_TD_8476052_output, tbl_JOIN_INNER_TD_7691242_output);
    gettimeofday(&tv_r_JOIN_INNER_7_366827_e, 0);

    struct timeval tv_r_Aggregate_7_73677_s, tv_r_Aggregate_7_73677_e;
    gettimeofday(&tv_r_Aggregate_7_73677_s, 0);
    SW_Aggregate_TD_7464050(tbl_JOIN_INNER_TD_881496_output, tbl_Aggregate_TD_7464050_output);
    gettimeofday(&tv_r_Aggregate_7_73677_e, 0);

    struct timeval tv_r_Aggregate_7_96671_s, tv_r_Aggregate_7_96671_e;
    gettimeofday(&tv_r_Aggregate_7_96671_s, 0);
    SW_Aggregate_TD_7128220(tbl_JOIN_INNER_TD_8235686_output, tbl_Aggregate_TD_7128220_output);
    gettimeofday(&tv_r_Aggregate_7_96671_e, 0);

    struct timeval tv_r_Aggregate_6_792471_s, tv_r_Aggregate_6_792471_e;
    gettimeofday(&tv_r_Aggregate_6_792471_s, 0);
    SW_Aggregate_TD_6509306(tbl_JOIN_INNER_TD_7691242_output, tbl_Aggregate_TD_6509306_output);
    gettimeofday(&tv_r_Aggregate_6_792471_e, 0);

    struct timeval tv_r_Filter_6_892303_s, tv_r_Filter_6_892303_e;
    gettimeofday(&tv_r_Filter_6_892303_s, 0);
    SW_Filter_TD_6893713(tbl_Aggregate_TD_7464050_output, tbl_Filter_TD_6893713_output);
    gettimeofday(&tv_r_Filter_6_892303_e, 0);

    struct timeval tv_r_Filter_6_806089_s, tv_r_Filter_6_806089_e;
    gettimeofday(&tv_r_Filter_6_806089_s, 0);
    SW_Filter_TD_6881067(tbl_Aggregate_TD_7128220_output, tbl_Filter_TD_6881067_output);
    gettimeofday(&tv_r_Filter_6_806089_e, 0);

    struct timeval tv_r_Filter_5_535512_s, tv_r_Filter_5_535512_e;
    gettimeofday(&tv_r_Filter_5_535512_s, 0);
    SW_Filter_TD_5779832(tbl_Aggregate_TD_6509306_output, tbl_Filter_TD_5779832_output);
    gettimeofday(&tv_r_Filter_5_535512_e, 0);

    struct timeval tv_r_JOIN_INNER_5_151048_s, tv_r_JOIN_INNER_5_151048_e;
    gettimeofday(&tv_r_JOIN_INNER_5_151048_s, 0);
    SW_JOIN_INNER_TD_562857(tbl_Filter_TD_6881067_output, tbl_Filter_TD_6893713_output, tbl_JOIN_INNER_TD_562857_output);
    gettimeofday(&tv_r_JOIN_INNER_5_151048_e, 0);

    struct timeval tv_r_JOIN_INNER_4_228773_s, tv_r_JOIN_INNER_4_228773_e;
    gettimeofday(&tv_r_JOIN_INNER_4_228773_s, 0);
    SW_JOIN_INNER_TD_4880176(tbl_JOIN_INNER_TD_562857_output, tbl_Filter_TD_5779832_output, tbl_JOIN_INNER_TD_4880176_output);
    gettimeofday(&tv_r_JOIN_INNER_4_228773_e, 0);

    struct timeval tv_r_Project_3_308836_s, tv_r_Project_3_308836_e;
    gettimeofday(&tv_r_Project_3_308836_s, 0);
    SW_Project_TD_3901867(tbl_JOIN_INNER_TD_4880176_output, tbl_Project_TD_3901867_output);
    gettimeofday(&tv_r_Project_3_308836_e, 0);

    struct timeval tv_r_Sort_2_77730_s, tv_r_Sort_2_77730_e;
    gettimeofday(&tv_r_Sort_2_77730_s, 0);
    SW_Sort_TD_2893400(tbl_Project_TD_3901867_output, tbl_Sort_TD_2893400_output);
    gettimeofday(&tv_r_Sort_2_77730_e, 0);

    struct timeval tv_r_LocalLimit_1_245095_s, tv_r_LocalLimit_1_245095_e;
    gettimeofday(&tv_r_LocalLimit_1_245095_s, 0);
    SW_LocalLimit_TD_1323908(tbl_Sort_TD_2893400_output, tbl_LocalLimit_TD_1323908_output);
    gettimeofday(&tv_r_LocalLimit_1_245095_e, 0);

    struct timeval tv_r_GlobalLimit_0_490224_s, tv_r_GlobalLimit_0_490224_e;
    gettimeofday(&tv_r_GlobalLimit_0_490224_s, 0);
    SW_GlobalLimit_TD_0228264(tbl_LocalLimit_TD_1323908_output, tbl_GlobalLimit_TD_0228264_output);
    gettimeofday(&tv_r_GlobalLimit_0_490224_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_618219_s, &tv_r_Filter_11_618219_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12217018_input: " << tbl_SerializeFromObject_TD_12217018_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_645751_s, &tv_r_Filter_11_645751_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12133607_input: " << tbl_SerializeFromObject_TD_12133607_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_110644_s, &tv_r_Filter_10_110644_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11164227_input: " << tbl_SerializeFromObject_TD_11164227_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_786249_s, &tv_r_Filter_10_786249_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11880341_input: " << tbl_SerializeFromObject_TD_11880341_input.getNumRow() << " " << "tbl_Filter_TD_11460360_output: " << tbl_Filter_TD_11460360_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_475423_s, &tv_r_Filter_10_475423_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11490384_input: " << tbl_SerializeFromObject_TD_11490384_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_922406_s, &tv_r_Filter_10_922406_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11440700_input: " << tbl_SerializeFromObject_TD_11440700_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_377892_s, &tv_r_Filter_10_377892_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11243200_input: " << tbl_SerializeFromObject_TD_11243200_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_638398_s, &tv_r_Filter_10_638398_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11805403_input: " << tbl_SerializeFromObject_TD_11805403_input.getNumRow() << " " << "tbl_Filter_TD_11783724_output: " << tbl_Filter_TD_11783724_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_258731_s, &tv_r_Filter_10_258731_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11178061_input: " << tbl_SerializeFromObject_TD_11178061_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_271262_s, &tv_r_Filter_10_271262_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1114552_input: " << tbl_SerializeFromObject_TD_1114552_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_125032_s, &tv_r_Filter_10_125032_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11576918_input: " << tbl_SerializeFromObject_TD_11576918_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_146742_s, &tv_r_Filter_9_146742_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10749734_input: " << tbl_SerializeFromObject_TD_10749734_input.getNumRow() << " " << "tbl_Filter_TD_10464170_output: " << tbl_Filter_TD_10464170_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_754971_s, &tv_r_Filter_9_754971_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10365343_input: " << tbl_SerializeFromObject_TD_10365343_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_345979_s, &tv_r_Filter_9_345979_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10645116_input: " << tbl_SerializeFromObject_TD_10645116_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_77011_s, &tv_r_Filter_9_77011_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10623457_input: " << tbl_SerializeFromObject_TD_10623457_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_503332_s, &tv_r_JOIN_LEFTSEMI_9_503332_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10727391_output: " << tbl_Filter_TD_10727391_output.getNumRow() << " " << "tbl_Filter_TD_10338965_output: " << tbl_Filter_TD_10338965_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_962428_s, &tv_r_JOIN_INNER_9_962428_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10633598_output: " << tbl_Filter_TD_10633598_output.getNumRow() << " " << "tbl_Filter_TD_10724143_output: " << tbl_Filter_TD_10724143_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_9: " << tvdiff(&tv_r_JOIN_LEFTSEMI_9_972808_s, &tv_r_JOIN_LEFTSEMI_9_972808_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10721167_output: " << tbl_Filter_TD_10721167_output.getNumRow() << " " << "tbl_Filter_TD_10710904_output: " << tbl_Filter_TD_10710904_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_296034_s, &tv_r_JOIN_INNER_9_296034_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10863527_output: " << tbl_Filter_TD_10863527_output.getNumRow() << " " << "tbl_Filter_TD_10571270_output: " << tbl_Filter_TD_10571270_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_446368_s, &tv_r_JOIN_LEFTSEMI_8_446368_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9917269_output: " << tbl_Filter_TD_9917269_output.getNumRow() << " " << "tbl_Filter_TD_9368898_output: " << tbl_Filter_TD_9368898_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_784280_s, &tv_r_JOIN_INNER_8_784280_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9242214_output: " << tbl_Filter_TD_9242214_output.getNumRow() << " " << "tbl_Filter_TD_9508085_output: " << tbl_Filter_TD_9508085_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_441971_s, &tv_r_JOIN_INNER_8_441971_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_955202_output: " << tbl_JOIN_INNER_TD_955202_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_9802369_output: " << tbl_JOIN_LEFTSEMI_TD_9802369_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_394441_s, &tv_r_JOIN_INNER_8_394441_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9250551_output: " << tbl_JOIN_INNER_TD_9250551_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_9415842_output: " << tbl_JOIN_LEFTSEMI_TD_9415842_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_366827_s, &tv_r_JOIN_INNER_7_366827_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8425134_output: " << tbl_JOIN_INNER_TD_8425134_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_8476052_output: " << tbl_JOIN_LEFTSEMI_TD_8476052_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_73677_s, &tv_r_Aggregate_7_73677_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_881496_output: " << tbl_JOIN_INNER_TD_881496_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_96671_s, &tv_r_Aggregate_7_96671_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8235686_output: " << tbl_JOIN_INNER_TD_8235686_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_792471_s, &tv_r_Aggregate_6_792471_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7691242_output: " << tbl_JOIN_INNER_TD_7691242_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_892303_s, &tv_r_Filter_6_892303_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7464050_output: " << tbl_Aggregate_TD_7464050_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_806089_s, &tv_r_Filter_6_806089_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7128220_output: " << tbl_Aggregate_TD_7128220_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_535512_s, &tv_r_Filter_5_535512_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6509306_output: " << tbl_Aggregate_TD_6509306_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_151048_s, &tv_r_JOIN_INNER_5_151048_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6881067_output: " << tbl_Filter_TD_6881067_output.getNumRow() << " " << "tbl_Filter_TD_6893713_output: " << tbl_Filter_TD_6893713_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_228773_s, &tv_r_JOIN_INNER_4_228773_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_562857_output: " << tbl_JOIN_INNER_TD_562857_output.getNumRow() << " " << "tbl_Filter_TD_5779832_output: " << tbl_Filter_TD_5779832_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_308836_s, &tv_r_Project_3_308836_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4880176_output: " << tbl_JOIN_INNER_TD_4880176_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_77730_s, &tv_r_Sort_2_77730_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3901867_output: " << tbl_Project_TD_3901867_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_245095_s, &tv_r_LocalLimit_1_245095_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2893400_output: " << tbl_Sort_TD_2893400_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_490224_s, &tv_r_GlobalLimit_0_490224_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1323908_output: " << tbl_LocalLimit_TD_1323908_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.5025501 * 1000 << "ms" << std::endl; 
    return 0; 
}
