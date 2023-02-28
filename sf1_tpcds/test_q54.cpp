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

#include "cfgFunc_q54.hpp" 
#include "q54.hpp" 

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
    std::cout << "NOTE:running query #54\n."; 
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
    Table tbl_GlobalLimit_TD_0758150_output("tbl_GlobalLimit_TD_0758150_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0758150_output.allocateHost();
    Table tbl_LocalLimit_TD_1440449_output("tbl_LocalLimit_TD_1440449_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1440449_output.allocateHost();
    Table tbl_Sort_TD_226630_output("tbl_Sort_TD_226630_output", 6100000, 3, "");
    tbl_Sort_TD_226630_output.allocateHost();
    Table tbl_Aggregate_TD_3857143_output("tbl_Aggregate_TD_3857143_output", 6100000, 3, "");
    tbl_Aggregate_TD_3857143_output.allocateHost();
    Table tbl_Aggregate_TD_4714860_output_preprocess("tbl_Aggregate_TD_4714860_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_4714860_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_4714860_output("tbl_Aggregate_TD_4714860_output", 6100000, 1, "");
    tbl_Aggregate_TD_4714860_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5493522_output_preprocess("tbl_JOIN_INNER_TD_5493522_output_preprocess", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5493522_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_5493522_output("tbl_JOIN_INNER_TD_5493522_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5493522_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6618781_output("tbl_JOIN_INNER_TD_6618781_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6618781_output.allocateHost();
    Table tbl_Filter_TD_6517358_output("tbl_Filter_TD_6517358_output", 6100000, 1, "");
    tbl_Filter_TD_6517358_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7465727_output("tbl_JOIN_INNER_TD_7465727_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7465727_output.allocateHost();
    Table tbl_Filter_TD_7488361_output("tbl_Filter_TD_7488361_output", 6100000, 2, "");
    tbl_Filter_TD_7488361_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7311756_input;
    tbl_SerializeFromObject_TD_7311756_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7311756_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7311756_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7311756_input.allocateHost();
    tbl_SerializeFromObject_TD_7311756_input.loadHost();
    Table tbl_Aggregate_TD_7764800_output_preprocess("tbl_Aggregate_TD_7764800_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_7764800_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_7764800_output("tbl_Aggregate_TD_7764800_output", 6100000, 1, "");
    tbl_Aggregate_TD_7764800_output.allocateHost();
    Table tbl_Aggregate_TD_7110584_output_preprocess("tbl_Aggregate_TD_7110584_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_7110584_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_7110584_output("tbl_Aggregate_TD_7110584_output", 6100000, 1, "");
    tbl_Aggregate_TD_7110584_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8184685_output("tbl_JOIN_INNER_TD_8184685_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8184685_output.allocateHost();
    Table tbl_Filter_TD_8354498_output("tbl_Filter_TD_8354498_output", 6100000, 3, "");
    tbl_Filter_TD_8354498_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8636375_input;
    tbl_SerializeFromObject_TD_8636375_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8636375_input.addCol("s_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8636375_input.addCol("s_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8636375_input.allocateHost();
    tbl_SerializeFromObject_TD_8636375_input.loadHost();
    Table tbl_Project_TD_8176563_output("tbl_Project_TD_8176563_output", 6100000, 1, "");
    tbl_Project_TD_8176563_output.allocateHost();
    Table tbl_Project_TD_8878840_output("tbl_Project_TD_8878840_output", 6100000, 1, "");
    tbl_Project_TD_8878840_output.allocateHost();
    Table tbl_Aggregate_TD_9416112_output_preprocess("tbl_Aggregate_TD_9416112_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_9416112_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_9416112_output("tbl_Aggregate_TD_9416112_output", 6100000, 2, "");
    tbl_Aggregate_TD_9416112_output.allocateHost();
    Table tbl_Filter_TD_9930196_output("tbl_Filter_TD_9930196_output", 6100000, 3, "");
    tbl_Filter_TD_9930196_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9492537_input;
    tbl_SerializeFromObject_TD_9492537_input = Table("customer_address", customer_address_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9492537_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9492537_input.addCol("ca_county", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9492537_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9492537_input.allocateHost();
    tbl_SerializeFromObject_TD_9492537_input.loadHost();
    Table tbl_Filter_TD_9668991_output("tbl_Filter_TD_9668991_output", 6100000, 1, "");
    tbl_Filter_TD_9668991_output.allocateHost();
    Table tbl_Filter_TD_9208034_output("tbl_Filter_TD_9208034_output", 6100000, 1, "");
    tbl_Filter_TD_9208034_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10708157_output_preprocess("tbl_JOIN_INNER_TD_10708157_output_preprocess", 6100000, 2, "");
    tbl_JOIN_INNER_TD_10708157_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_10708157_output("tbl_JOIN_INNER_TD_10708157_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_10708157_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10943602_input;
    tbl_SerializeFromObject_TD_10943602_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10943602_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10943602_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10943602_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10943602_input.allocateHost();
    tbl_SerializeFromObject_TD_10943602_input.loadHost();
    Table tbl_SerializeFromObject_TD_10253896_input;
    tbl_SerializeFromObject_TD_10253896_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10253896_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_10253896_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10253896_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10253896_input.allocateHost();
    tbl_SerializeFromObject_TD_10253896_input.loadHost();
    Table tbl_SerializeFromObject_TD_10698855_input;
    tbl_SerializeFromObject_TD_10698855_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10698855_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_10698855_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10698855_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10698855_input.allocateHost();
    tbl_SerializeFromObject_TD_10698855_input.loadHost();
    Table tbl_JOIN_INNER_TD_11396521_output("tbl_JOIN_INNER_TD_11396521_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_11396521_output.allocateHost();
    Table tbl_Filter_TD_11927944_output("tbl_Filter_TD_11927944_output", 6100000, 2, "");
    tbl_Filter_TD_11927944_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1283104_output("tbl_JOIN_INNER_TD_1283104_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_1283104_output.allocateHost();
    Table tbl_Filter_TD_12237561_output("tbl_Filter_TD_12237561_output", 6100000, 1, "");
    tbl_Filter_TD_12237561_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1252309_input;
    tbl_SerializeFromObject_TD_1252309_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1252309_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_1252309_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_1252309_input.allocateHost();
    tbl_SerializeFromObject_TD_1252309_input.loadHost();
    Table tbl_Union_TD_13950577_output("tbl_Union_TD_13950577_output", 6100000, 3, "");
    tbl_Union_TD_13950577_output.allocateHost();
    Table tbl_Filter_TD_13597154_output("tbl_Filter_TD_13597154_output", 6100000, 1, "");
    tbl_Filter_TD_13597154_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13154829_input;
    tbl_SerializeFromObject_TD_13154829_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_13154829_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13154829_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_13154829_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13154829_input.allocateHost();
    tbl_SerializeFromObject_TD_13154829_input.loadHost();
    Table tbl_Project_TD_14805397_output("tbl_Project_TD_14805397_output", 6100000, 3, "");
    tbl_Project_TD_14805397_output.allocateHost();
    Table tbl_Project_TD_14817648_output("tbl_Project_TD_14817648_output", 6100000, 3, "");
    tbl_Project_TD_14817648_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14658394_input;
    tbl_SerializeFromObject_TD_14658394_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_14658394_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_14658394_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14658394_input.addCol("i_class", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14658394_input.allocateHost();
    tbl_SerializeFromObject_TD_14658394_input.loadHost();
    Table tbl_Filter_TD_15665722_output("tbl_Filter_TD_15665722_output", 6100000, 3, "");
    tbl_Filter_TD_15665722_output.allocateHost();
    Table tbl_Filter_TD_15599404_output("tbl_Filter_TD_15599404_output", 6100000, 3, "");
    tbl_Filter_TD_15599404_output.allocateHost();
    Table tbl_SerializeFromObject_TD_16207547_input;
    tbl_SerializeFromObject_TD_16207547_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_16207547_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_16207547_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_16207547_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_16207547_input.allocateHost();
    tbl_SerializeFromObject_TD_16207547_input.loadHost();
    Table tbl_SerializeFromObject_TD_16537475_input;
    tbl_SerializeFromObject_TD_16537475_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_16537475_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_16537475_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_16537475_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_16537475_input.allocateHost();
    tbl_SerializeFromObject_TD_16537475_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5493522_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_4714860_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_5493522_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6618781_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6517358_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_7764800_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_7110584_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_8184685_output.allocateDevBuffer(context_h, 32);
    tbl_Project_TD_8176563_output.allocateDevBuffer(context_a, 32);
    tbl_Project_TD_8878840_output.allocateDevBuffer(context_a, 32);
    tbl_JOIN_INNER_TD_10708157_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_9416112_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_9416112_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9930196_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10708157_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_11396521_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11927944_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_1283104_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12237561_output.allocateDevBuffer(context_h, 32);
    tbl_Union_TD_13950577_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_13597154_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_4714860_cmds;
    cfg_Aggregate_TD_4714860_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_4714860_gqe_aggr(cfg_Aggregate_TD_4714860_cmds.cmd);
    cfg_Aggregate_TD_4714860_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_4714860_cmds_out;
    cfg_Aggregate_TD_4714860_cmds_out.allocateHost();
    cfg_Aggregate_TD_4714860_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_5493522_cmds;
    cfg_JOIN_INNER_TD_5493522_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5493522_gqe_join (cfg_JOIN_INNER_TD_5493522_cmds.cmd);
    cfg_JOIN_INNER_TD_5493522_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_7764800_cmds;
    cfg_Aggregate_TD_7764800_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_7764800_gqe_aggr(cfg_Aggregate_TD_7764800_cmds.cmd);
    cfg_Aggregate_TD_7764800_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_7764800_cmds_out;
    cfg_Aggregate_TD_7764800_cmds_out.allocateHost();
    cfg_Aggregate_TD_7764800_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_7110584_cmds;
    cfg_Aggregate_TD_7110584_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_7110584_gqe_aggr(cfg_Aggregate_TD_7110584_cmds.cmd);
    cfg_Aggregate_TD_7110584_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_7110584_cmds_out;
    cfg_Aggregate_TD_7110584_cmds_out.allocateHost();
    cfg_Aggregate_TD_7110584_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_8184685_cmds;
    cfg_JOIN_INNER_TD_8184685_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8184685_gqe_join (cfg_JOIN_INNER_TD_8184685_cmds.cmd);
    cfg_JOIN_INNER_TD_8184685_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_9416112_cmds;
    cfg_Aggregate_TD_9416112_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_9416112_gqe_aggr(cfg_Aggregate_TD_9416112_cmds.cmd);
    cfg_Aggregate_TD_9416112_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_9416112_cmds_out;
    cfg_Aggregate_TD_9416112_cmds_out.allocateHost();
    cfg_Aggregate_TD_9416112_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_10708157_cmds;
    cfg_JOIN_INNER_TD_10708157_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10708157_gqe_join (cfg_JOIN_INNER_TD_10708157_cmds.cmd);
    cfg_JOIN_INNER_TD_10708157_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_11396521_cmds;
    cfg_JOIN_INNER_TD_11396521_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_11396521_gqe_join (cfg_JOIN_INNER_TD_11396521_cmds.cmd);
    cfg_JOIN_INNER_TD_11396521_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_1283104_cmds;
    cfg_JOIN_INNER_TD_1283104_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1283104_gqe_join (cfg_JOIN_INNER_TD_1283104_cmds.cmd);
    cfg_JOIN_INNER_TD_1283104_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_4714860;
    krnl_Aggregate_TD_4714860 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_4714860.setup(tbl_JOIN_INNER_TD_5493522_output, tbl_Aggregate_TD_4714860_output_preprocess, cfg_Aggregate_TD_4714860_cmds, cfg_Aggregate_TD_4714860_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_5493522;
    krnl_JOIN_INNER_TD_5493522 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5493522.setup(tbl_JOIN_INNER_TD_6618781_output, tbl_Filter_TD_6517358_output, tbl_JOIN_INNER_TD_5493522_output_preprocess, cfg_JOIN_INNER_TD_5493522_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_7764800;
    krnl_Aggregate_TD_7764800 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_7764800.setup(tbl_Project_TD_8176563_output, tbl_Aggregate_TD_7764800_output_preprocess, cfg_Aggregate_TD_7764800_cmds, cfg_Aggregate_TD_7764800_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_7110584;
    krnl_Aggregate_TD_7110584 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_7110584.setup(tbl_Project_TD_8878840_output, tbl_Aggregate_TD_7110584_output_preprocess, cfg_Aggregate_TD_7110584_cmds, cfg_Aggregate_TD_7110584_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_8184685;
    krnl_JOIN_INNER_TD_8184685 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8184685.setup(tbl_Aggregate_TD_9416112_output, tbl_Filter_TD_9930196_output, tbl_JOIN_INNER_TD_8184685_output, cfg_JOIN_INNER_TD_8184685_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_9416112;
    krnl_Aggregate_TD_9416112 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_9416112.setup(tbl_JOIN_INNER_TD_10708157_output, tbl_Aggregate_TD_9416112_output_preprocess, cfg_Aggregate_TD_9416112_cmds, cfg_Aggregate_TD_9416112_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_10708157;
    krnl_JOIN_INNER_TD_10708157 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10708157.setup(tbl_JOIN_INNER_TD_11396521_output, tbl_Filter_TD_11927944_output, tbl_JOIN_INNER_TD_10708157_output_preprocess, cfg_JOIN_INNER_TD_10708157_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_11396521;
    krnl_JOIN_INNER_TD_11396521 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_11396521.setup(tbl_JOIN_INNER_TD_1283104_output, tbl_Filter_TD_12237561_output, tbl_JOIN_INNER_TD_11396521_output, cfg_JOIN_INNER_TD_11396521_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_1283104;
    krnl_JOIN_INNER_TD_1283104 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1283104.setup(tbl_Union_TD_13950577_output, tbl_Filter_TD_13597154_output, tbl_JOIN_INNER_TD_1283104_output, cfg_JOIN_INNER_TD_1283104_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_4714860;
    trans_Aggregate_TD_4714860.setq(q_a);
    trans_Aggregate_TD_4714860.add(&(cfg_Aggregate_TD_4714860_cmds));
    transEngine trans_Aggregate_TD_4714860_out;
    trans_Aggregate_TD_4714860_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_5493522;
    trans_JOIN_INNER_TD_5493522.setq(q_h);
    trans_JOIN_INNER_TD_5493522.add(&(cfg_JOIN_INNER_TD_5493522_cmds));
    transEngine trans_JOIN_INNER_TD_5493522_out;
    trans_JOIN_INNER_TD_5493522_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_7764800;
    trans_Aggregate_TD_7764800.setq(q_a);
    trans_Aggregate_TD_7764800.add(&(cfg_Aggregate_TD_7764800_cmds));
    transEngine trans_Aggregate_TD_7764800_out;
    trans_Aggregate_TD_7764800_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_7110584;
    trans_Aggregate_TD_7110584.setq(q_a);
    trans_Aggregate_TD_7110584.add(&(cfg_Aggregate_TD_7110584_cmds));
    transEngine trans_Aggregate_TD_7110584_out;
    trans_Aggregate_TD_7110584_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_8184685;
    trans_JOIN_INNER_TD_8184685.setq(q_h);
    trans_JOIN_INNER_TD_8184685.add(&(cfg_JOIN_INNER_TD_8184685_cmds));
    transEngine trans_JOIN_INNER_TD_8184685_out;
    trans_JOIN_INNER_TD_8184685_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_9416112;
    trans_Aggregate_TD_9416112.setq(q_a);
    trans_Aggregate_TD_9416112.add(&(cfg_Aggregate_TD_9416112_cmds));
    transEngine trans_Aggregate_TD_9416112_out;
    trans_Aggregate_TD_9416112_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_10708157;
    trans_JOIN_INNER_TD_10708157.setq(q_h);
    trans_JOIN_INNER_TD_10708157.add(&(cfg_JOIN_INNER_TD_10708157_cmds));
    transEngine trans_JOIN_INNER_TD_10708157_out;
    trans_JOIN_INNER_TD_10708157_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_11396521;
    trans_JOIN_INNER_TD_11396521.setq(q_h);
    trans_JOIN_INNER_TD_11396521.add(&(cfg_JOIN_INNER_TD_11396521_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_1283104;
    trans_JOIN_INNER_TD_1283104.setq(q_h);
    trans_JOIN_INNER_TD_1283104.add(&(cfg_JOIN_INNER_TD_1283104_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_4714860;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_4714860;
    std::vector<cl::Event> events_Aggregate_TD_4714860;
    events_h2d_wr_Aggregate_TD_4714860.resize(1);
    events_d2h_rd_Aggregate_TD_4714860.resize(1);
    events_Aggregate_TD_4714860.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_4714860;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_4714860;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5493522;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5493522;
    std::vector<cl::Event> events_JOIN_INNER_TD_5493522;
    events_h2d_wr_JOIN_INNER_TD_5493522.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5493522.resize(1);
    events_JOIN_INNER_TD_5493522.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5493522;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5493522;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_7764800;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_7764800;
    std::vector<cl::Event> events_Aggregate_TD_7764800;
    events_h2d_wr_Aggregate_TD_7764800.resize(1);
    events_d2h_rd_Aggregate_TD_7764800.resize(1);
    events_Aggregate_TD_7764800.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_7764800;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_7764800;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_7110584;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_7110584;
    std::vector<cl::Event> events_Aggregate_TD_7110584;
    events_h2d_wr_Aggregate_TD_7110584.resize(1);
    events_d2h_rd_Aggregate_TD_7110584.resize(1);
    events_Aggregate_TD_7110584.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_7110584;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_7110584;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8184685;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8184685;
    std::vector<cl::Event> events_JOIN_INNER_TD_8184685;
    events_h2d_wr_JOIN_INNER_TD_8184685.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8184685.resize(1);
    events_JOIN_INNER_TD_8184685.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8184685;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8184685;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_9416112;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_9416112;
    std::vector<cl::Event> events_Aggregate_TD_9416112;
    events_h2d_wr_Aggregate_TD_9416112.resize(1);
    events_d2h_rd_Aggregate_TD_9416112.resize(1);
    events_Aggregate_TD_9416112.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_9416112;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_9416112;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10708157;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10708157;
    std::vector<cl::Event> events_JOIN_INNER_TD_10708157;
    events_h2d_wr_JOIN_INNER_TD_10708157.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10708157.resize(1);
    events_JOIN_INNER_TD_10708157.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10708157;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10708157;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_11396521;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_11396521;
    std::vector<cl::Event> events_JOIN_INNER_TD_11396521;
    events_h2d_wr_JOIN_INNER_TD_11396521.resize(1);
    events_d2h_rd_JOIN_INNER_TD_11396521.resize(1);
    events_JOIN_INNER_TD_11396521.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_11396521;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_11396521;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1283104;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1283104;
    std::vector<cl::Event> events_JOIN_INNER_TD_1283104;
    events_h2d_wr_JOIN_INNER_TD_1283104.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1283104.resize(1);
    events_JOIN_INNER_TD_1283104.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1283104;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1283104;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_15_762622_s, tv_r_Filter_15_762622_e;
    gettimeofday(&tv_r_Filter_15_762622_s, 0);
    SW_Filter_TD_15599404(tbl_SerializeFromObject_TD_16537475_input, tbl_Filter_TD_15599404_output);
    gettimeofday(&tv_r_Filter_15_762622_e, 0);

    struct timeval tv_r_Filter_15_410623_s, tv_r_Filter_15_410623_e;
    gettimeofday(&tv_r_Filter_15_410623_s, 0);
    SW_Filter_TD_15665722(tbl_SerializeFromObject_TD_16207547_input, tbl_Filter_TD_15665722_output);
    gettimeofday(&tv_r_Filter_15_410623_e, 0);

    struct timeval tv_r_Project_14_992763_s, tv_r_Project_14_992763_e;
    gettimeofday(&tv_r_Project_14_992763_s, 0);
    SW_Project_TD_14817648(tbl_Filter_TD_15599404_output, tbl_Project_TD_14817648_output);
    gettimeofday(&tv_r_Project_14_992763_e, 0);

    struct timeval tv_r_Project_14_452028_s, tv_r_Project_14_452028_e;
    gettimeofday(&tv_r_Project_14_452028_s, 0);
    SW_Project_TD_14805397(tbl_Filter_TD_15665722_output, tbl_Project_TD_14805397_output);
    gettimeofday(&tv_r_Project_14_452028_e, 0);

    struct timeval tv_r_Filter_13_328532_s, tv_r_Filter_13_328532_e;
    gettimeofday(&tv_r_Filter_13_328532_s, 0);
    SW_Filter_TD_13597154(tbl_SerializeFromObject_TD_14658394_input, tbl_Filter_TD_13597154_output);
    gettimeofday(&tv_r_Filter_13_328532_e, 0);

    struct timeval tv_r_Union_13_883177_s, tv_r_Union_13_883177_e;
    gettimeofday(&tv_r_Union_13_883177_s, 0);
    SW_Union_TD_13950577(tbl_Project_TD_14805397_output, tbl_Project_TD_14817648_output, tbl_Union_TD_13950577_output);
    gettimeofday(&tv_r_Union_13_883177_e, 0);

    struct timeval tv_r_Filter_12_238847_s, tv_r_Filter_12_238847_e;
    gettimeofday(&tv_r_Filter_12_238847_s, 0);
    SW_Filter_TD_12237561(tbl_SerializeFromObject_TD_13154829_input, tbl_Filter_TD_12237561_output);
    gettimeofday(&tv_r_Filter_12_238847_e, 0);

    struct timeval tv_r_JOIN_INNER_12_703602_s, tv_r_JOIN_INNER_12_703602_e;
    gettimeofday(&tv_r_JOIN_INNER_12_703602_s, 0);
    trans_JOIN_INNER_TD_1283104.add(&(tbl_Union_TD_13950577_output));
    trans_JOIN_INNER_TD_1283104.add(&(tbl_Filter_TD_13597154_output));
    trans_JOIN_INNER_TD_1283104.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1283104), &(events_h2d_wr_JOIN_INNER_TD_1283104[0]));
    events_grp_JOIN_INNER_TD_1283104.push_back(events_h2d_wr_JOIN_INNER_TD_1283104[0]);
    krnl_JOIN_INNER_TD_1283104.run(0, &(events_grp_JOIN_INNER_TD_1283104), &(events_JOIN_INNER_TD_1283104[0]));
    gettimeofday(&tv_r_JOIN_INNER_12_703602_e, 0);

    struct timeval tv_r_Filter_11_812773_s, tv_r_Filter_11_812773_e;
    gettimeofday(&tv_r_Filter_11_812773_s, 0);
    SW_Filter_TD_11927944(tbl_SerializeFromObject_TD_1252309_input, tbl_Filter_TD_11927944_output);
    gettimeofday(&tv_r_Filter_11_812773_e, 0);

    struct timeval tv_r_JOIN_INNER_11_146321_s, tv_r_JOIN_INNER_11_146321_e;
    gettimeofday(&tv_r_JOIN_INNER_11_146321_s, 0);
    prev_events_grp_JOIN_INNER_TD_11396521.push_back(events_h2d_wr_JOIN_INNER_TD_1283104[0]);
    trans_JOIN_INNER_TD_11396521.add(&(tbl_Filter_TD_12237561_output));
    trans_JOIN_INNER_TD_11396521.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_11396521), &(events_h2d_wr_JOIN_INNER_TD_11396521[0]));
    events_grp_JOIN_INNER_TD_11396521.push_back(events_h2d_wr_JOIN_INNER_TD_11396521[0]);
    events_grp_JOIN_INNER_TD_11396521.push_back(events_JOIN_INNER_TD_1283104[0]);
    krnl_JOIN_INNER_TD_11396521.run(0, &(events_grp_JOIN_INNER_TD_11396521), &(events_JOIN_INNER_TD_11396521[0]));
    gettimeofday(&tv_r_JOIN_INNER_11_146321_e, 0);

    struct timeval tv_r_JOIN_INNER_10_456754_s, tv_r_JOIN_INNER_10_456754_e;
    gettimeofday(&tv_r_JOIN_INNER_10_456754_s, 0);
    prev_events_grp_JOIN_INNER_TD_10708157.push_back(events_h2d_wr_JOIN_INNER_TD_11396521[0]);
    trans_JOIN_INNER_TD_10708157.add(&(tbl_Filter_TD_11927944_output));
    trans_JOIN_INNER_TD_10708157.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10708157), &(events_h2d_wr_JOIN_INNER_TD_10708157[0]));
    events_grp_JOIN_INNER_TD_10708157.push_back(events_h2d_wr_JOIN_INNER_TD_10708157[0]);
    events_grp_JOIN_INNER_TD_10708157.push_back(events_JOIN_INNER_TD_11396521[0]);
    krnl_JOIN_INNER_TD_10708157.run(0, &(events_grp_JOIN_INNER_TD_10708157), &(events_JOIN_INNER_TD_10708157[0]));
    
    trans_JOIN_INNER_TD_10708157_out.add(&(tbl_JOIN_INNER_TD_10708157_output_preprocess));
    trans_JOIN_INNER_TD_10708157_out.dev2host(0, &(events_JOIN_INNER_TD_10708157), &(events_d2h_rd_JOIN_INNER_TD_10708157[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_10708157);
    tbl_JOIN_INNER_TD_10708157_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_10708157_output));
    gettimeofday(&tv_r_JOIN_INNER_10_456754_e, 0);

    struct timeval tv_r_Filter_9_883004_s, tv_r_Filter_9_883004_e;
    gettimeofday(&tv_r_Filter_9_883004_s, 0);
    SW_Filter_TD_9208034(tbl_SerializeFromObject_TD_10698855_input, tbl_Filter_TD_9208034_output);
    gettimeofday(&tv_r_Filter_9_883004_e, 0);

    struct timeval tv_r_Filter_9_117703_s, tv_r_Filter_9_117703_e;
    gettimeofday(&tv_r_Filter_9_117703_s, 0);
    SW_Filter_TD_9668991(tbl_SerializeFromObject_TD_10253896_input, tbl_Filter_TD_9668991_output);
    gettimeofday(&tv_r_Filter_9_117703_e, 0);

    struct timeval tv_r_Filter_9_292251_s, tv_r_Filter_9_292251_e;
    gettimeofday(&tv_r_Filter_9_292251_s, 0);
    SW_Filter_TD_9930196(tbl_SerializeFromObject_TD_10943602_input, tbl_Filter_TD_9930196_output);
    gettimeofday(&tv_r_Filter_9_292251_e, 0);

    struct timeval tv_r_Aggregate_9_640681_s, tv_r_Aggregate_9_640681_e;
    gettimeofday(&tv_r_Aggregate_9_640681_s, 0);
    trans_Aggregate_TD_9416112.add(&(tbl_JOIN_INNER_TD_10708157_output));
    trans_Aggregate_TD_9416112.host2dev(0, &(prev_events_grp_Aggregate_TD_9416112), &(events_h2d_wr_Aggregate_TD_9416112[0]));
    events_grp_Aggregate_TD_9416112.push_back(events_h2d_wr_Aggregate_TD_9416112[0]);
    krnl_Aggregate_TD_9416112.run(0, &(events_grp_Aggregate_TD_9416112), &(events_Aggregate_TD_9416112[0]));
    
    trans_Aggregate_TD_9416112_out.add(&(tbl_Aggregate_TD_9416112_output_preprocess));
    trans_Aggregate_TD_9416112_out.dev2host(0, &(events_Aggregate_TD_9416112), &(events_d2h_rd_Aggregate_TD_9416112[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_9416112_consolidate(tbl_Aggregate_TD_9416112_output_preprocess, tbl_Aggregate_TD_9416112_output);
    gettimeofday(&tv_r_Aggregate_9_640681_e, 0);

    struct timeval tv_r_Project_8_748562_s, tv_r_Project_8_748562_e;
    gettimeofday(&tv_r_Project_8_748562_s, 0);
    SW_Project_TD_8878840(tbl_Filter_TD_9208034_output, tbl_Project_TD_8878840_output);
    gettimeofday(&tv_r_Project_8_748562_e, 0);

    struct timeval tv_r_Project_8_534039_s, tv_r_Project_8_534039_e;
    gettimeofday(&tv_r_Project_8_534039_s, 0);
    SW_Project_TD_8176563(tbl_Filter_TD_9668991_output, tbl_Project_TD_8176563_output);
    gettimeofday(&tv_r_Project_8_534039_e, 0);

    struct timeval tv_r_Filter_8_736249_s, tv_r_Filter_8_736249_e;
    gettimeofday(&tv_r_Filter_8_736249_s, 0);
    SW_Filter_TD_8354498(tbl_SerializeFromObject_TD_9492537_input, tbl_Filter_TD_8354498_output);
    gettimeofday(&tv_r_Filter_8_736249_e, 0);

    struct timeval tv_r_JOIN_INNER_8_610660_s, tv_r_JOIN_INNER_8_610660_e;
    gettimeofday(&tv_r_JOIN_INNER_8_610660_s, 0);
    trans_JOIN_INNER_TD_8184685.add(&(tbl_Aggregate_TD_9416112_output));
    trans_JOIN_INNER_TD_8184685.add(&(tbl_Filter_TD_9930196_output));
    trans_JOIN_INNER_TD_8184685.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8184685), &(events_h2d_wr_JOIN_INNER_TD_8184685[0]));
    events_grp_JOIN_INNER_TD_8184685.push_back(events_h2d_wr_JOIN_INNER_TD_8184685[0]);
    krnl_JOIN_INNER_TD_8184685.run(0, &(events_grp_JOIN_INNER_TD_8184685), &(events_JOIN_INNER_TD_8184685[0]));
    
    trans_JOIN_INNER_TD_8184685_out.add(&(tbl_JOIN_INNER_TD_8184685_output));
    trans_JOIN_INNER_TD_8184685_out.dev2host(0, &(events_JOIN_INNER_TD_8184685), &(events_d2h_rd_JOIN_INNER_TD_8184685[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_610660_e, 0);

    struct timeval tv_r_Aggregate_7_814351_s, tv_r_Aggregate_7_814351_e;
    gettimeofday(&tv_r_Aggregate_7_814351_s, 0);
    trans_Aggregate_TD_7110584.add(&(tbl_Project_TD_8878840_output));
    trans_Aggregate_TD_7110584.host2dev(0, &(prev_events_grp_Aggregate_TD_7110584), &(events_h2d_wr_Aggregate_TD_7110584[0]));
    events_grp_Aggregate_TD_7110584.push_back(events_h2d_wr_Aggregate_TD_7110584[0]);
    krnl_Aggregate_TD_7110584.run(0, &(events_grp_Aggregate_TD_7110584), &(events_Aggregate_TD_7110584[0]));
    
    trans_Aggregate_TD_7110584_out.add(&(tbl_Aggregate_TD_7110584_output_preprocess));
    trans_Aggregate_TD_7110584_out.dev2host(0, &(events_Aggregate_TD_7110584), &(events_d2h_rd_Aggregate_TD_7110584[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_7110584_consolidate(tbl_Aggregate_TD_7110584_output_preprocess, tbl_Aggregate_TD_7110584_output);
    gettimeofday(&tv_r_Aggregate_7_814351_e, 0);

    struct timeval tv_r_Aggregate_7_229570_s, tv_r_Aggregate_7_229570_e;
    gettimeofday(&tv_r_Aggregate_7_229570_s, 0);
    trans_Aggregate_TD_7764800.add(&(tbl_Project_TD_8176563_output));
    trans_Aggregate_TD_7764800.host2dev(0, &(prev_events_grp_Aggregate_TD_7764800), &(events_h2d_wr_Aggregate_TD_7764800[0]));
    events_grp_Aggregate_TD_7764800.push_back(events_h2d_wr_Aggregate_TD_7764800[0]);
    krnl_Aggregate_TD_7764800.run(0, &(events_grp_Aggregate_TD_7764800), &(events_Aggregate_TD_7764800[0]));
    
    trans_Aggregate_TD_7764800_out.add(&(tbl_Aggregate_TD_7764800_output_preprocess));
    trans_Aggregate_TD_7764800_out.dev2host(0, &(events_Aggregate_TD_7764800), &(events_d2h_rd_Aggregate_TD_7764800[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_7764800_consolidate(tbl_Aggregate_TD_7764800_output_preprocess, tbl_Aggregate_TD_7764800_output);
    gettimeofday(&tv_r_Aggregate_7_229570_e, 0);

    struct timeval tv_r_Filter_7_470981_s, tv_r_Filter_7_470981_e;
    gettimeofday(&tv_r_Filter_7_470981_s, 0);
    SW_Filter_TD_7488361(tbl_SerializeFromObject_TD_8636375_input, tbl_Filter_TD_7488361_output);
    gettimeofday(&tv_r_Filter_7_470981_e, 0);

    struct timeval tv_r_JOIN_INNER_7_223771_s, tv_r_JOIN_INNER_7_223771_e;
    gettimeofday(&tv_r_JOIN_INNER_7_223771_s, 0);
    SW_JOIN_INNER_TD_7465727(tbl_JOIN_INNER_TD_8184685_output, tbl_Filter_TD_8354498_output, tbl_JOIN_INNER_TD_7465727_output);
    gettimeofday(&tv_r_JOIN_INNER_7_223771_e, 0);

    struct timeval tv_r_Filter_6_222629_s, tv_r_Filter_6_222629_e;
    gettimeofday(&tv_r_Filter_6_222629_s, 0);
    SW_Filter_TD_6517358(tbl_SerializeFromObject_TD_7311756_input, tbl_Aggregate_TD_7764800_output, tbl_Aggregate_TD_7110584_output, tbl_Filter_TD_6517358_output);
    gettimeofday(&tv_r_Filter_6_222629_e, 0);

    struct timeval tv_r_JOIN_INNER_6_524320_s, tv_r_JOIN_INNER_6_524320_e;
    gettimeofday(&tv_r_JOIN_INNER_6_524320_s, 0);
    SW_JOIN_INNER_TD_6618781(tbl_JOIN_INNER_TD_7465727_output, tbl_Filter_TD_7488361_output, tbl_JOIN_INNER_TD_6618781_output);
    gettimeofday(&tv_r_JOIN_INNER_6_524320_e, 0);

    struct timeval tv_r_JOIN_INNER_5_446529_s, tv_r_JOIN_INNER_5_446529_e;
    gettimeofday(&tv_r_JOIN_INNER_5_446529_s, 0);
    trans_JOIN_INNER_TD_5493522.add(&(tbl_JOIN_INNER_TD_6618781_output));
    trans_JOIN_INNER_TD_5493522.add(&(tbl_Filter_TD_6517358_output));
    trans_JOIN_INNER_TD_5493522.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5493522), &(events_h2d_wr_JOIN_INNER_TD_5493522[0]));
    events_grp_JOIN_INNER_TD_5493522.push_back(events_h2d_wr_JOIN_INNER_TD_5493522[0]);
    krnl_JOIN_INNER_TD_5493522.run(0, &(events_grp_JOIN_INNER_TD_5493522), &(events_JOIN_INNER_TD_5493522[0]));
    
    trans_JOIN_INNER_TD_5493522_out.add(&(tbl_JOIN_INNER_TD_5493522_output_preprocess));
    trans_JOIN_INNER_TD_5493522_out.dev2host(0, &(events_JOIN_INNER_TD_5493522), &(events_d2h_rd_JOIN_INNER_TD_5493522[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_5493522);
    tbl_JOIN_INNER_TD_5493522_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_5493522_output));
    gettimeofday(&tv_r_JOIN_INNER_5_446529_e, 0);

    struct timeval tv_r_Aggregate_4_481008_s, tv_r_Aggregate_4_481008_e;
    gettimeofday(&tv_r_Aggregate_4_481008_s, 0);
    trans_Aggregate_TD_4714860.add(&(tbl_JOIN_INNER_TD_5493522_output));
    trans_Aggregate_TD_4714860.host2dev(0, &(prev_events_grp_Aggregate_TD_4714860), &(events_h2d_wr_Aggregate_TD_4714860[0]));
    events_grp_Aggregate_TD_4714860.push_back(events_h2d_wr_Aggregate_TD_4714860[0]);
    krnl_Aggregate_TD_4714860.run(0, &(events_grp_Aggregate_TD_4714860), &(events_Aggregate_TD_4714860[0]));
    
    trans_Aggregate_TD_4714860_out.add(&(tbl_Aggregate_TD_4714860_output_preprocess));
    trans_Aggregate_TD_4714860_out.dev2host(0, &(events_Aggregate_TD_4714860), &(events_d2h_rd_Aggregate_TD_4714860[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_4714860_consolidate(tbl_Aggregate_TD_4714860_output_preprocess, tbl_Aggregate_TD_4714860_output);
    gettimeofday(&tv_r_Aggregate_4_481008_e, 0);

    struct timeval tv_r_Aggregate_3_766690_s, tv_r_Aggregate_3_766690_e;
    gettimeofday(&tv_r_Aggregate_3_766690_s, 0);
    SW_Aggregate_TD_3857143(tbl_Aggregate_TD_4714860_output, tbl_Aggregate_TD_3857143_output);
    gettimeofday(&tv_r_Aggregate_3_766690_e, 0);

    struct timeval tv_r_Sort_2_595834_s, tv_r_Sort_2_595834_e;
    gettimeofday(&tv_r_Sort_2_595834_s, 0);
    SW_Sort_TD_226630(tbl_Aggregate_TD_3857143_output, tbl_Sort_TD_226630_output);
    gettimeofday(&tv_r_Sort_2_595834_e, 0);

    struct timeval tv_r_LocalLimit_1_174184_s, tv_r_LocalLimit_1_174184_e;
    gettimeofday(&tv_r_LocalLimit_1_174184_s, 0);
    SW_LocalLimit_TD_1440449(tbl_Sort_TD_226630_output, tbl_LocalLimit_TD_1440449_output);
    gettimeofday(&tv_r_LocalLimit_1_174184_e, 0);

    struct timeval tv_r_GlobalLimit_0_903491_s, tv_r_GlobalLimit_0_903491_e;
    gettimeofday(&tv_r_GlobalLimit_0_903491_s, 0);
    SW_GlobalLimit_TD_0758150(tbl_LocalLimit_TD_1440449_output, tbl_GlobalLimit_TD_0758150_output);
    gettimeofday(&tv_r_GlobalLimit_0_903491_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_762622_s, &tv_r_Filter_15_762622_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_16537475_input: " << tbl_SerializeFromObject_TD_16537475_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_410623_s, &tv_r_Filter_15_410623_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_16207547_input: " << tbl_SerializeFromObject_TD_16207547_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_14: " << tvdiff(&tv_r_Project_14_992763_s, &tv_r_Project_14_992763_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_15599404_output: " << tbl_Filter_TD_15599404_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_14: " << tvdiff(&tv_r_Project_14_452028_s, &tv_r_Project_14_452028_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_15665722_output: " << tbl_Filter_TD_15665722_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_328532_s, &tv_r_Filter_13_328532_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14658394_input: " << tbl_SerializeFromObject_TD_14658394_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_13: " << tvdiff(&tv_r_Union_13_883177_s, &tv_r_Union_13_883177_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_14805397_output: " << tbl_Project_TD_14805397_output.getNumRow() << " " << "tbl_Project_TD_14817648_output: " << tbl_Project_TD_14817648_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_238847_s, &tv_r_Filter_12_238847_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13154829_input: " << tbl_SerializeFromObject_TD_13154829_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_703602_s, &tv_r_JOIN_INNER_12_703602_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_13950577_output: " << tbl_Union_TD_13950577_output.getNumRow() << " " << "tbl_Filter_TD_13597154_output: " << tbl_Filter_TD_13597154_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_812773_s, &tv_r_Filter_11_812773_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1252309_input: " << tbl_SerializeFromObject_TD_1252309_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_146321_s, &tv_r_JOIN_INNER_11_146321_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1283104_output: " << tbl_JOIN_INNER_TD_1283104_output.getNumRow() << " " << "tbl_Filter_TD_12237561_output: " << tbl_Filter_TD_12237561_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_456754_s, &tv_r_JOIN_INNER_10_456754_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11396521_output: " << tbl_JOIN_INNER_TD_11396521_output.getNumRow() << " " << "tbl_Filter_TD_11927944_output: " << tbl_Filter_TD_11927944_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_883004_s, &tv_r_Filter_9_883004_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10698855_input: " << tbl_SerializeFromObject_TD_10698855_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_117703_s, &tv_r_Filter_9_117703_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10253896_input: " << tbl_SerializeFromObject_TD_10253896_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_292251_s, &tv_r_Filter_9_292251_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10943602_input: " << tbl_SerializeFromObject_TD_10943602_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_640681_s, &tv_r_Aggregate_9_640681_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10708157_output: " << tbl_JOIN_INNER_TD_10708157_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_748562_s, &tv_r_Project_8_748562_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9208034_output: " << tbl_Filter_TD_9208034_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_534039_s, &tv_r_Project_8_534039_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9668991_output: " << tbl_Filter_TD_9668991_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_736249_s, &tv_r_Filter_8_736249_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9492537_input: " << tbl_SerializeFromObject_TD_9492537_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_610660_s, &tv_r_JOIN_INNER_8_610660_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9416112_output: " << tbl_Aggregate_TD_9416112_output.getNumRow() << " " << "tbl_Filter_TD_9930196_output: " << tbl_Filter_TD_9930196_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_814351_s, &tv_r_Aggregate_7_814351_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8878840_output: " << tbl_Project_TD_8878840_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_229570_s, &tv_r_Aggregate_7_229570_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8176563_output: " << tbl_Project_TD_8176563_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_470981_s, &tv_r_Filter_7_470981_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8636375_input: " << tbl_SerializeFromObject_TD_8636375_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_223771_s, &tv_r_JOIN_INNER_7_223771_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8184685_output: " << tbl_JOIN_INNER_TD_8184685_output.getNumRow() << " " << "tbl_Filter_TD_8354498_output: " << tbl_Filter_TD_8354498_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_222629_s, &tv_r_Filter_6_222629_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7311756_input: " << tbl_SerializeFromObject_TD_7311756_input.getNumRow() << " " << "tbl_Aggregate_TD_7764800_output: " << tbl_Aggregate_TD_7764800_output.getNumRow() << " " << "tbl_Aggregate_TD_7110584_output: " << tbl_Aggregate_TD_7110584_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_524320_s, &tv_r_JOIN_INNER_6_524320_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7465727_output: " << tbl_JOIN_INNER_TD_7465727_output.getNumRow() << " " << "tbl_Filter_TD_7488361_output: " << tbl_Filter_TD_7488361_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_446529_s, &tv_r_JOIN_INNER_5_446529_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6618781_output: " << tbl_JOIN_INNER_TD_6618781_output.getNumRow() << " " << "tbl_Filter_TD_6517358_output: " << tbl_Filter_TD_6517358_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_481008_s, &tv_r_Aggregate_4_481008_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5493522_output: " << tbl_JOIN_INNER_TD_5493522_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_766690_s, &tv_r_Aggregate_3_766690_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4714860_output: " << tbl_Aggregate_TD_4714860_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_595834_s, &tv_r_Sort_2_595834_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3857143_output: " << tbl_Aggregate_TD_3857143_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_174184_s, &tv_r_LocalLimit_1_174184_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_226630_output: " << tbl_Sort_TD_226630_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_903491_s, &tv_r_GlobalLimit_0_903491_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1440449_output: " << tbl_LocalLimit_TD_1440449_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.0073588 * 1000 << "ms" << std::endl; 
    return 0; 
}
