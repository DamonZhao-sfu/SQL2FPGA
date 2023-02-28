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

#include "cfgFunc_q33.hpp" 
#include "q33.hpp" 

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
    std::cout << "NOTE:running query #33\n."; 
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
    Table tbl_GlobalLimit_TD_0247631_output("tbl_GlobalLimit_TD_0247631_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0247631_output.allocateHost();
    Table tbl_LocalLimit_TD_1371196_output("tbl_LocalLimit_TD_1371196_output", 6100000, 2, "");
    tbl_LocalLimit_TD_1371196_output.allocateHost();
    Table tbl_Sort_TD_2467056_output("tbl_Sort_TD_2467056_output", 6100000, 2, "");
    tbl_Sort_TD_2467056_output.allocateHost();
    Table tbl_Aggregate_TD_3434102_output_preprocess("tbl_Aggregate_TD_3434102_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_3434102_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_3434102_output("tbl_Aggregate_TD_3434102_output", 6100000, 2, "");
    tbl_Aggregate_TD_3434102_output.allocateHost();
    Table tbl_Union_TD_4778146_output("tbl_Union_TD_4778146_output", 6100000, 2, "");
    tbl_Union_TD_4778146_output.allocateHost();
    Table tbl_Aggregate_TD_5498396_output_preprocess("tbl_Aggregate_TD_5498396_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_5498396_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_5498396_output("tbl_Aggregate_TD_5498396_output", 6100000, 2, "");
    tbl_Aggregate_TD_5498396_output.allocateHost();
    Table tbl_Aggregate_TD_5222086_output_preprocess("tbl_Aggregate_TD_5222086_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_5222086_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_5222086_output("tbl_Aggregate_TD_5222086_output", 6100000, 2, "");
    tbl_Aggregate_TD_5222086_output.allocateHost();
    Table tbl_Aggregate_TD_5427655_output_preprocess("tbl_Aggregate_TD_5427655_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_5427655_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_5427655_output("tbl_Aggregate_TD_5427655_output", 6100000, 2, "");
    tbl_Aggregate_TD_5427655_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6886344_output_preprocess("tbl_JOIN_INNER_TD_6886344_output_preprocess", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6886344_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_6886344_output("tbl_JOIN_INNER_TD_6886344_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6886344_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6459025_output_preprocess("tbl_JOIN_INNER_TD_6459025_output_preprocess", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6459025_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_6459025_output("tbl_JOIN_INNER_TD_6459025_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6459025_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6176382_output_preprocess("tbl_JOIN_INNER_TD_6176382_output_preprocess", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6176382_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_6176382_output("tbl_JOIN_INNER_TD_6176382_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6176382_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7275669_output("tbl_JOIN_INNER_TD_7275669_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7275669_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7613906_output("tbl_JOIN_LEFTSEMI_TD_7613906_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7613906_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7963040_output("tbl_JOIN_INNER_TD_7963040_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7963040_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7824317_output("tbl_JOIN_LEFTSEMI_TD_7824317_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7824317_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7265401_output("tbl_JOIN_INNER_TD_7265401_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7265401_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7423409_output("tbl_JOIN_LEFTSEMI_TD_7423409_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7423409_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8318828_output("tbl_JOIN_INNER_TD_8318828_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8318828_output.allocateHost();
    Table tbl_Filter_TD_8968724_output("tbl_Filter_TD_8968724_output", 6100000, 1, "");
    tbl_Filter_TD_8968724_output.allocateHost();
    Table tbl_Filter_TD_872699_output("tbl_Filter_TD_872699_output", 6100000, 2, "");
    tbl_Filter_TD_872699_output.allocateHost();
    Table tbl_Filter_TD_8794557_output("tbl_Filter_TD_8794557_output", 6100000, 1, "");
    tbl_Filter_TD_8794557_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8319886_output("tbl_JOIN_INNER_TD_8319886_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8319886_output.allocateHost();
    Table tbl_Filter_TD_8847181_output("tbl_Filter_TD_8847181_output", 6100000, 1, "");
    tbl_Filter_TD_8847181_output.allocateHost();
    Table tbl_Filter_TD_8284973_output("tbl_Filter_TD_8284973_output", 6100000, 2, "");
    tbl_Filter_TD_8284973_output.allocateHost();
    Table tbl_Filter_TD_898052_output("tbl_Filter_TD_898052_output", 6100000, 1, "");
    tbl_Filter_TD_898052_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8501707_output("tbl_JOIN_INNER_TD_8501707_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8501707_output.allocateHost();
    Table tbl_Filter_TD_8236046_output("tbl_Filter_TD_8236046_output", 6100000, 1, "");
    tbl_Filter_TD_8236046_output.allocateHost();
    Table tbl_Filter_TD_8843891_output("tbl_Filter_TD_8843891_output", 6100000, 2, "");
    tbl_Filter_TD_8843891_output.allocateHost();
    Table tbl_Filter_TD_8374641_output("tbl_Filter_TD_8374641_output", 6100000, 1, "");
    tbl_Filter_TD_8374641_output.allocateHost();
    Table tbl_Filter_TD_9973823_output("tbl_Filter_TD_9973823_output", 6100000, 4, "");
    tbl_Filter_TD_9973823_output.allocateHost();
    Table tbl_Filter_TD_9700540_output("tbl_Filter_TD_9700540_output", 6100000, 1, "");
    tbl_Filter_TD_9700540_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9635821_input;
    tbl_SerializeFromObject_TD_9635821_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9635821_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9635821_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9635821_input.allocateHost();
    tbl_SerializeFromObject_TD_9635821_input.loadHost();
    Table tbl_SerializeFromObject_TD_9305529_input;
    tbl_SerializeFromObject_TD_9305529_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9305529_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9305529_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9305529_input.allocateHost();
    tbl_SerializeFromObject_TD_9305529_input.loadHost();
    Table tbl_SerializeFromObject_TD_9459724_input;
    tbl_SerializeFromObject_TD_9459724_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9459724_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9459724_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9459724_input.allocateHost();
    tbl_SerializeFromObject_TD_9459724_input.loadHost();
    Table tbl_Filter_TD_9372891_output("tbl_Filter_TD_9372891_output", 6100000, 4, "");
    tbl_Filter_TD_9372891_output.allocateHost();
    Table tbl_Filter_TD_9240343_output("tbl_Filter_TD_9240343_output", 6100000, 1, "");
    tbl_Filter_TD_9240343_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9924233_input;
    tbl_SerializeFromObject_TD_9924233_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9924233_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9924233_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9924233_input.allocateHost();
    tbl_SerializeFromObject_TD_9924233_input.loadHost();
    Table tbl_SerializeFromObject_TD_9508366_input;
    tbl_SerializeFromObject_TD_9508366_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9508366_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9508366_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9508366_input.allocateHost();
    tbl_SerializeFromObject_TD_9508366_input.loadHost();
    Table tbl_SerializeFromObject_TD_9482178_input;
    tbl_SerializeFromObject_TD_9482178_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9482178_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9482178_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9482178_input.allocateHost();
    tbl_SerializeFromObject_TD_9482178_input.loadHost();
    Table tbl_Filter_TD_9130594_output("tbl_Filter_TD_9130594_output", 6100000, 4, "");
    tbl_Filter_TD_9130594_output.allocateHost();
    Table tbl_Filter_TD_9183412_output("tbl_Filter_TD_9183412_output", 6100000, 1, "");
    tbl_Filter_TD_9183412_output.allocateHost();
    Table tbl_SerializeFromObject_TD_94482_input;
    tbl_SerializeFromObject_TD_94482_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_94482_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_94482_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_94482_input.allocateHost();
    tbl_SerializeFromObject_TD_94482_input.loadHost();
    Table tbl_SerializeFromObject_TD_9495262_input;
    tbl_SerializeFromObject_TD_9495262_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9495262_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9495262_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9495262_input.allocateHost();
    tbl_SerializeFromObject_TD_9495262_input.loadHost();
    Table tbl_SerializeFromObject_TD_9517456_input;
    tbl_SerializeFromObject_TD_9517456_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9517456_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9517456_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9517456_input.allocateHost();
    tbl_SerializeFromObject_TD_9517456_input.loadHost();
    Table tbl_SerializeFromObject_TD_10268607_input;
    tbl_SerializeFromObject_TD_10268607_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10268607_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10268607_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10268607_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_10268607_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10268607_input.allocateHost();
    tbl_SerializeFromObject_TD_10268607_input.loadHost();
    Table tbl_SerializeFromObject_TD_10577154_input;
    tbl_SerializeFromObject_TD_10577154_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10577154_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10577154_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10577154_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10577154_input.allocateHost();
    tbl_SerializeFromObject_TD_10577154_input.loadHost();
    Table tbl_SerializeFromObject_TD_10497619_input;
    tbl_SerializeFromObject_TD_10497619_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10497619_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10497619_input.addCol("cs_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10497619_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_10497619_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10497619_input.allocateHost();
    tbl_SerializeFromObject_TD_10497619_input.loadHost();
    Table tbl_SerializeFromObject_TD_10911781_input;
    tbl_SerializeFromObject_TD_10911781_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10911781_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10911781_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10911781_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10911781_input.allocateHost();
    tbl_SerializeFromObject_TD_10911781_input.loadHost();
    Table tbl_SerializeFromObject_TD_10997412_input;
    tbl_SerializeFromObject_TD_10997412_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10997412_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10997412_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_10997412_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10997412_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10997412_input.allocateHost();
    tbl_SerializeFromObject_TD_10997412_input.loadHost();
    Table tbl_SerializeFromObject_TD_10565563_input;
    tbl_SerializeFromObject_TD_10565563_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10565563_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10565563_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10565563_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10565563_input.allocateHost();
    tbl_SerializeFromObject_TD_10565563_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_3434102_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Union_TD_4778146_output.allocateDevBuffer(context_a, 32);
    tbl_JOIN_INNER_TD_6886344_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_5498396_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_6459025_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_5222086_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_6176382_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_5427655_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_6886344_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6459025_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6176382_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7275669_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_7613906_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7963040_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_7824317_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7265401_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_7423409_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8318828_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8968724_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_872699_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8794557_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8319886_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8847181_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8284973_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_898052_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8501707_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8236046_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8843891_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8374641_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9973823_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9700540_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9372891_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9240343_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9130594_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9183412_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_3434102_cmds;
    cfg_Aggregate_TD_3434102_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_3434102_gqe_aggr(cfg_Aggregate_TD_3434102_cmds.cmd);
    cfg_Aggregate_TD_3434102_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_3434102_cmds_out;
    cfg_Aggregate_TD_3434102_cmds_out.allocateHost();
    cfg_Aggregate_TD_3434102_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_5498396_cmds;
    cfg_Aggregate_TD_5498396_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_5498396_gqe_aggr(cfg_Aggregate_TD_5498396_cmds.cmd);
    cfg_Aggregate_TD_5498396_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_5498396_cmds_out;
    cfg_Aggregate_TD_5498396_cmds_out.allocateHost();
    cfg_Aggregate_TD_5498396_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_5222086_cmds;
    cfg_Aggregate_TD_5222086_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_5222086_gqe_aggr(cfg_Aggregate_TD_5222086_cmds.cmd);
    cfg_Aggregate_TD_5222086_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_5222086_cmds_out;
    cfg_Aggregate_TD_5222086_cmds_out.allocateHost();
    cfg_Aggregate_TD_5222086_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_5427655_cmds;
    cfg_Aggregate_TD_5427655_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_5427655_gqe_aggr(cfg_Aggregate_TD_5427655_cmds.cmd);
    cfg_Aggregate_TD_5427655_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_5427655_cmds_out;
    cfg_Aggregate_TD_5427655_cmds_out.allocateHost();
    cfg_Aggregate_TD_5427655_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_6886344_cmds;
    cfg_JOIN_INNER_TD_6886344_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6886344_gqe_join (cfg_JOIN_INNER_TD_6886344_cmds.cmd);
    cfg_JOIN_INNER_TD_6886344_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6459025_cmds;
    cfg_JOIN_INNER_TD_6459025_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6459025_gqe_join (cfg_JOIN_INNER_TD_6459025_cmds.cmd);
    cfg_JOIN_INNER_TD_6459025_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6176382_cmds;
    cfg_JOIN_INNER_TD_6176382_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6176382_gqe_join (cfg_JOIN_INNER_TD_6176382_cmds.cmd);
    cfg_JOIN_INNER_TD_6176382_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7275669_cmds;
    cfg_JOIN_INNER_TD_7275669_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7275669_gqe_join (cfg_JOIN_INNER_TD_7275669_cmds.cmd);
    cfg_JOIN_INNER_TD_7275669_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_7613906_cmds;
    cfg_JOIN_LEFTSEMI_TD_7613906_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_7613906_gqe_join (cfg_JOIN_LEFTSEMI_TD_7613906_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_7613906_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7963040_cmds;
    cfg_JOIN_INNER_TD_7963040_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7963040_gqe_join (cfg_JOIN_INNER_TD_7963040_cmds.cmd);
    cfg_JOIN_INNER_TD_7963040_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_7824317_cmds;
    cfg_JOIN_LEFTSEMI_TD_7824317_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_7824317_gqe_join (cfg_JOIN_LEFTSEMI_TD_7824317_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_7824317_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7265401_cmds;
    cfg_JOIN_INNER_TD_7265401_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7265401_gqe_join (cfg_JOIN_INNER_TD_7265401_cmds.cmd);
    cfg_JOIN_INNER_TD_7265401_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_7423409_cmds;
    cfg_JOIN_LEFTSEMI_TD_7423409_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_7423409_gqe_join (cfg_JOIN_LEFTSEMI_TD_7423409_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_7423409_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8318828_cmds;
    cfg_JOIN_INNER_TD_8318828_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8318828_gqe_join (cfg_JOIN_INNER_TD_8318828_cmds.cmd);
    cfg_JOIN_INNER_TD_8318828_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8319886_cmds;
    cfg_JOIN_INNER_TD_8319886_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8319886_gqe_join (cfg_JOIN_INNER_TD_8319886_cmds.cmd);
    cfg_JOIN_INNER_TD_8319886_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8501707_cmds;
    cfg_JOIN_INNER_TD_8501707_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8501707_gqe_join (cfg_JOIN_INNER_TD_8501707_cmds.cmd);
    cfg_JOIN_INNER_TD_8501707_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_3434102;
    krnl_Aggregate_TD_3434102 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_3434102.setup(tbl_Union_TD_4778146_output, tbl_Aggregate_TD_3434102_output_preprocess, cfg_Aggregate_TD_3434102_cmds, cfg_Aggregate_TD_3434102_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_5498396;
    krnl_Aggregate_TD_5498396 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_5498396.setup(tbl_JOIN_INNER_TD_6886344_output, tbl_Aggregate_TD_5498396_output_preprocess, cfg_Aggregate_TD_5498396_cmds, cfg_Aggregate_TD_5498396_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_5222086;
    krnl_Aggregate_TD_5222086 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_5222086.setup(tbl_JOIN_INNER_TD_6459025_output, tbl_Aggregate_TD_5222086_output_preprocess, cfg_Aggregate_TD_5222086_cmds, cfg_Aggregate_TD_5222086_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_5427655;
    krnl_Aggregate_TD_5427655 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_5427655.setup(tbl_JOIN_INNER_TD_6176382_output, tbl_Aggregate_TD_5427655_output_preprocess, cfg_Aggregate_TD_5427655_cmds, cfg_Aggregate_TD_5427655_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_6886344;
    krnl_JOIN_INNER_TD_6886344 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6886344.setup(tbl_JOIN_INNER_TD_7275669_output, tbl_JOIN_LEFTSEMI_TD_7613906_output, tbl_JOIN_INNER_TD_6886344_output_preprocess, cfg_JOIN_INNER_TD_6886344_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6459025;
    krnl_JOIN_INNER_TD_6459025 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6459025.setup(tbl_JOIN_INNER_TD_7963040_output, tbl_JOIN_LEFTSEMI_TD_7824317_output, tbl_JOIN_INNER_TD_6459025_output_preprocess, cfg_JOIN_INNER_TD_6459025_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6176382;
    krnl_JOIN_INNER_TD_6176382 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6176382.setup(tbl_JOIN_INNER_TD_7265401_output, tbl_JOIN_LEFTSEMI_TD_7423409_output, tbl_JOIN_INNER_TD_6176382_output_preprocess, cfg_JOIN_INNER_TD_6176382_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7275669;
    krnl_JOIN_INNER_TD_7275669 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7275669.setup(tbl_JOIN_INNER_TD_8318828_output, tbl_Filter_TD_8968724_output, tbl_JOIN_INNER_TD_7275669_output, cfg_JOIN_INNER_TD_7275669_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_7613906;
    krnl_JOIN_LEFTSEMI_TD_7613906 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_7613906.setup(tbl_Filter_TD_8794557_output, tbl_Filter_TD_872699_output, tbl_JOIN_LEFTSEMI_TD_7613906_output, cfg_JOIN_LEFTSEMI_TD_7613906_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7963040;
    krnl_JOIN_INNER_TD_7963040 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7963040.setup(tbl_JOIN_INNER_TD_8319886_output, tbl_Filter_TD_8847181_output, tbl_JOIN_INNER_TD_7963040_output, cfg_JOIN_INNER_TD_7963040_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_7824317;
    krnl_JOIN_LEFTSEMI_TD_7824317 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_7824317.setup(tbl_Filter_TD_898052_output, tbl_Filter_TD_8284973_output, tbl_JOIN_LEFTSEMI_TD_7824317_output, cfg_JOIN_LEFTSEMI_TD_7824317_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7265401;
    krnl_JOIN_INNER_TD_7265401 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7265401.setup(tbl_JOIN_INNER_TD_8501707_output, tbl_Filter_TD_8236046_output, tbl_JOIN_INNER_TD_7265401_output, cfg_JOIN_INNER_TD_7265401_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_7423409;
    krnl_JOIN_LEFTSEMI_TD_7423409 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_7423409.setup(tbl_Filter_TD_8374641_output, tbl_Filter_TD_8843891_output, tbl_JOIN_LEFTSEMI_TD_7423409_output, cfg_JOIN_LEFTSEMI_TD_7423409_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8318828;
    krnl_JOIN_INNER_TD_8318828 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8318828.setup(tbl_Filter_TD_9973823_output, tbl_Filter_TD_9700540_output, tbl_JOIN_INNER_TD_8318828_output, cfg_JOIN_INNER_TD_8318828_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8319886;
    krnl_JOIN_INNER_TD_8319886 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8319886.setup(tbl_Filter_TD_9372891_output, tbl_Filter_TD_9240343_output, tbl_JOIN_INNER_TD_8319886_output, cfg_JOIN_INNER_TD_8319886_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8501707;
    krnl_JOIN_INNER_TD_8501707 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8501707.setup(tbl_Filter_TD_9130594_output, tbl_Filter_TD_9183412_output, tbl_JOIN_INNER_TD_8501707_output, cfg_JOIN_INNER_TD_8501707_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_3434102;
    trans_Aggregate_TD_3434102.setq(q_a);
    trans_Aggregate_TD_3434102.add(&(cfg_Aggregate_TD_3434102_cmds));
    transEngine trans_Aggregate_TD_3434102_out;
    trans_Aggregate_TD_3434102_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_5498396;
    trans_Aggregate_TD_5498396.setq(q_a);
    trans_Aggregate_TD_5498396.add(&(cfg_Aggregate_TD_5498396_cmds));
    transEngine trans_Aggregate_TD_5498396_out;
    trans_Aggregate_TD_5498396_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_5222086;
    trans_Aggregate_TD_5222086.setq(q_a);
    trans_Aggregate_TD_5222086.add(&(cfg_Aggregate_TD_5222086_cmds));
    transEngine trans_Aggregate_TD_5222086_out;
    trans_Aggregate_TD_5222086_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_5427655;
    trans_Aggregate_TD_5427655.setq(q_a);
    trans_Aggregate_TD_5427655.add(&(cfg_Aggregate_TD_5427655_cmds));
    transEngine trans_Aggregate_TD_5427655_out;
    trans_Aggregate_TD_5427655_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_6886344;
    trans_JOIN_INNER_TD_6886344.setq(q_h);
    trans_JOIN_INNER_TD_6886344.add(&(cfg_JOIN_INNER_TD_6886344_cmds));
    transEngine trans_JOIN_INNER_TD_6886344_out;
    trans_JOIN_INNER_TD_6886344_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6459025;
    trans_JOIN_INNER_TD_6459025.setq(q_h);
    trans_JOIN_INNER_TD_6459025.add(&(cfg_JOIN_INNER_TD_6459025_cmds));
    transEngine trans_JOIN_INNER_TD_6459025_out;
    trans_JOIN_INNER_TD_6459025_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6176382;
    trans_JOIN_INNER_TD_6176382.setq(q_h);
    trans_JOIN_INNER_TD_6176382.add(&(cfg_JOIN_INNER_TD_6176382_cmds));
    transEngine trans_JOIN_INNER_TD_6176382_out;
    trans_JOIN_INNER_TD_6176382_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7275669;
    trans_JOIN_INNER_TD_7275669.setq(q_h);
    trans_JOIN_INNER_TD_7275669.add(&(cfg_JOIN_INNER_TD_7275669_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_7613906;
    trans_JOIN_LEFTSEMI_TD_7613906.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_7613906.add(&(cfg_JOIN_LEFTSEMI_TD_7613906_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7963040;
    trans_JOIN_INNER_TD_7963040.setq(q_h);
    trans_JOIN_INNER_TD_7963040.add(&(cfg_JOIN_INNER_TD_7963040_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_7824317;
    trans_JOIN_LEFTSEMI_TD_7824317.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_7824317.add(&(cfg_JOIN_LEFTSEMI_TD_7824317_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7265401;
    trans_JOIN_INNER_TD_7265401.setq(q_h);
    trans_JOIN_INNER_TD_7265401.add(&(cfg_JOIN_INNER_TD_7265401_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_7423409;
    trans_JOIN_LEFTSEMI_TD_7423409.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_7423409.add(&(cfg_JOIN_LEFTSEMI_TD_7423409_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8318828;
    trans_JOIN_INNER_TD_8318828.setq(q_h);
    trans_JOIN_INNER_TD_8318828.add(&(cfg_JOIN_INNER_TD_8318828_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8319886;
    trans_JOIN_INNER_TD_8319886.setq(q_h);
    trans_JOIN_INNER_TD_8319886.add(&(cfg_JOIN_INNER_TD_8319886_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8501707;
    trans_JOIN_INNER_TD_8501707.setq(q_h);
    trans_JOIN_INNER_TD_8501707.add(&(cfg_JOIN_INNER_TD_8501707_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_3434102;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_3434102;
    std::vector<cl::Event> events_Aggregate_TD_3434102;
    events_h2d_wr_Aggregate_TD_3434102.resize(1);
    events_d2h_rd_Aggregate_TD_3434102.resize(1);
    events_Aggregate_TD_3434102.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_3434102;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_3434102;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_5498396;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_5498396;
    std::vector<cl::Event> events_Aggregate_TD_5498396;
    events_h2d_wr_Aggregate_TD_5498396.resize(1);
    events_d2h_rd_Aggregate_TD_5498396.resize(1);
    events_Aggregate_TD_5498396.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_5498396;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_5498396;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_5222086;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_5222086;
    std::vector<cl::Event> events_Aggregate_TD_5222086;
    events_h2d_wr_Aggregate_TD_5222086.resize(1);
    events_d2h_rd_Aggregate_TD_5222086.resize(1);
    events_Aggregate_TD_5222086.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_5222086;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_5222086;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_5427655;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_5427655;
    std::vector<cl::Event> events_Aggregate_TD_5427655;
    events_h2d_wr_Aggregate_TD_5427655.resize(1);
    events_d2h_rd_Aggregate_TD_5427655.resize(1);
    events_Aggregate_TD_5427655.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_5427655;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_5427655;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6886344;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6886344;
    std::vector<cl::Event> events_JOIN_INNER_TD_6886344;
    events_h2d_wr_JOIN_INNER_TD_6886344.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6886344.resize(1);
    events_JOIN_INNER_TD_6886344.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6886344;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6886344;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6459025;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6459025;
    std::vector<cl::Event> events_JOIN_INNER_TD_6459025;
    events_h2d_wr_JOIN_INNER_TD_6459025.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6459025.resize(1);
    events_JOIN_INNER_TD_6459025.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6459025;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6459025;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6176382;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6176382;
    std::vector<cl::Event> events_JOIN_INNER_TD_6176382;
    events_h2d_wr_JOIN_INNER_TD_6176382.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6176382.resize(1);
    events_JOIN_INNER_TD_6176382.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6176382;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6176382;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7275669;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7275669;
    std::vector<cl::Event> events_JOIN_INNER_TD_7275669;
    events_h2d_wr_JOIN_INNER_TD_7275669.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7275669.resize(1);
    events_JOIN_INNER_TD_7275669.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7275669;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7275669;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_7613906;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_7613906;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_7613906;
    events_h2d_wr_JOIN_LEFTSEMI_TD_7613906.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_7613906.resize(1);
    events_JOIN_LEFTSEMI_TD_7613906.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_7613906;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_7613906;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7963040;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7963040;
    std::vector<cl::Event> events_JOIN_INNER_TD_7963040;
    events_h2d_wr_JOIN_INNER_TD_7963040.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7963040.resize(1);
    events_JOIN_INNER_TD_7963040.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7963040;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7963040;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_7824317;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_7824317;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_7824317;
    events_h2d_wr_JOIN_LEFTSEMI_TD_7824317.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_7824317.resize(1);
    events_JOIN_LEFTSEMI_TD_7824317.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_7824317;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_7824317;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7265401;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7265401;
    std::vector<cl::Event> events_JOIN_INNER_TD_7265401;
    events_h2d_wr_JOIN_INNER_TD_7265401.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7265401.resize(1);
    events_JOIN_INNER_TD_7265401.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7265401;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7265401;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_7423409;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_7423409;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_7423409;
    events_h2d_wr_JOIN_LEFTSEMI_TD_7423409.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_7423409.resize(1);
    events_JOIN_LEFTSEMI_TD_7423409.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_7423409;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_7423409;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8318828;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8318828;
    std::vector<cl::Event> events_JOIN_INNER_TD_8318828;
    events_h2d_wr_JOIN_INNER_TD_8318828.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8318828.resize(1);
    events_JOIN_INNER_TD_8318828.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8318828;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8318828;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8319886;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8319886;
    std::vector<cl::Event> events_JOIN_INNER_TD_8319886;
    events_h2d_wr_JOIN_INNER_TD_8319886.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8319886.resize(1);
    events_JOIN_INNER_TD_8319886.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8319886;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8319886;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8501707;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8501707;
    std::vector<cl::Event> events_JOIN_INNER_TD_8501707;
    events_h2d_wr_JOIN_INNER_TD_8501707.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8501707.resize(1);
    events_JOIN_INNER_TD_8501707.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8501707;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8501707;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_997968_s, tv_r_Filter_9_997968_e;
    gettimeofday(&tv_r_Filter_9_997968_s, 0);
    SW_Filter_TD_9183412(tbl_SerializeFromObject_TD_10565563_input, tbl_Filter_TD_9183412_output);
    gettimeofday(&tv_r_Filter_9_997968_e, 0);

    struct timeval tv_r_Filter_9_532798_s, tv_r_Filter_9_532798_e;
    gettimeofday(&tv_r_Filter_9_532798_s, 0);
    SW_Filter_TD_9130594(tbl_SerializeFromObject_TD_10997412_input, tbl_Filter_TD_9130594_output);
    gettimeofday(&tv_r_Filter_9_532798_e, 0);

    struct timeval tv_r_Filter_9_136801_s, tv_r_Filter_9_136801_e;
    gettimeofday(&tv_r_Filter_9_136801_s, 0);
    SW_Filter_TD_9240343(tbl_SerializeFromObject_TD_10911781_input, tbl_Filter_TD_9240343_output);
    gettimeofday(&tv_r_Filter_9_136801_e, 0);

    struct timeval tv_r_Filter_9_115130_s, tv_r_Filter_9_115130_e;
    gettimeofday(&tv_r_Filter_9_115130_s, 0);
    SW_Filter_TD_9372891(tbl_SerializeFromObject_TD_10497619_input, tbl_Filter_TD_9372891_output);
    gettimeofday(&tv_r_Filter_9_115130_e, 0);

    struct timeval tv_r_Filter_9_778566_s, tv_r_Filter_9_778566_e;
    gettimeofday(&tv_r_Filter_9_778566_s, 0);
    SW_Filter_TD_9700540(tbl_SerializeFromObject_TD_10577154_input, tbl_Filter_TD_9700540_output);
    gettimeofday(&tv_r_Filter_9_778566_e, 0);

    struct timeval tv_r_Filter_9_782610_s, tv_r_Filter_9_782610_e;
    gettimeofday(&tv_r_Filter_9_782610_s, 0);
    SW_Filter_TD_9973823(tbl_SerializeFromObject_TD_10268607_input, tbl_Filter_TD_9973823_output);
    gettimeofday(&tv_r_Filter_9_782610_e, 0);

    struct timeval tv_r_Filter_8_542414_s, tv_r_Filter_8_542414_e;
    gettimeofday(&tv_r_Filter_8_542414_s, 0);
    SW_Filter_TD_8374641(tbl_SerializeFromObject_TD_9517456_input, tbl_Filter_TD_8374641_output);
    gettimeofday(&tv_r_Filter_8_542414_e, 0);

    struct timeval tv_r_Filter_8_920506_s, tv_r_Filter_8_920506_e;
    gettimeofday(&tv_r_Filter_8_920506_s, 0);
    SW_Filter_TD_8843891(tbl_SerializeFromObject_TD_9495262_input, tbl_Filter_TD_8843891_output);
    gettimeofday(&tv_r_Filter_8_920506_e, 0);

    struct timeval tv_r_Filter_8_706514_s, tv_r_Filter_8_706514_e;
    gettimeofday(&tv_r_Filter_8_706514_s, 0);
    SW_Filter_TD_8236046(tbl_SerializeFromObject_TD_94482_input, tbl_Filter_TD_8236046_output);
    gettimeofday(&tv_r_Filter_8_706514_e, 0);

    struct timeval tv_r_JOIN_INNER_8_688758_s, tv_r_JOIN_INNER_8_688758_e;
    gettimeofday(&tv_r_JOIN_INNER_8_688758_s, 0);
    trans_JOIN_INNER_TD_8501707.add(&(tbl_Filter_TD_9130594_output));
    trans_JOIN_INNER_TD_8501707.add(&(tbl_Filter_TD_9183412_output));
    trans_JOIN_INNER_TD_8501707.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8501707), &(events_h2d_wr_JOIN_INNER_TD_8501707[0]));
    events_grp_JOIN_INNER_TD_8501707.push_back(events_h2d_wr_JOIN_INNER_TD_8501707[0]);
    krnl_JOIN_INNER_TD_8501707.run(0, &(events_grp_JOIN_INNER_TD_8501707), &(events_JOIN_INNER_TD_8501707[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_688758_e, 0);

    struct timeval tv_r_Filter_8_246503_s, tv_r_Filter_8_246503_e;
    gettimeofday(&tv_r_Filter_8_246503_s, 0);
    SW_Filter_TD_898052(tbl_SerializeFromObject_TD_9482178_input, tbl_Filter_TD_898052_output);
    gettimeofday(&tv_r_Filter_8_246503_e, 0);

    struct timeval tv_r_Filter_8_241524_s, tv_r_Filter_8_241524_e;
    gettimeofday(&tv_r_Filter_8_241524_s, 0);
    SW_Filter_TD_8284973(tbl_SerializeFromObject_TD_9508366_input, tbl_Filter_TD_8284973_output);
    gettimeofday(&tv_r_Filter_8_241524_e, 0);

    struct timeval tv_r_Filter_8_546905_s, tv_r_Filter_8_546905_e;
    gettimeofday(&tv_r_Filter_8_546905_s, 0);
    SW_Filter_TD_8847181(tbl_SerializeFromObject_TD_9924233_input, tbl_Filter_TD_8847181_output);
    gettimeofday(&tv_r_Filter_8_546905_e, 0);

    struct timeval tv_r_JOIN_INNER_8_867676_s, tv_r_JOIN_INNER_8_867676_e;
    gettimeofday(&tv_r_JOIN_INNER_8_867676_s, 0);
    trans_JOIN_INNER_TD_8319886.add(&(tbl_Filter_TD_9372891_output));
    trans_JOIN_INNER_TD_8319886.add(&(tbl_Filter_TD_9240343_output));
    trans_JOIN_INNER_TD_8319886.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8319886), &(events_h2d_wr_JOIN_INNER_TD_8319886[0]));
    events_grp_JOIN_INNER_TD_8319886.push_back(events_h2d_wr_JOIN_INNER_TD_8319886[0]);
    krnl_JOIN_INNER_TD_8319886.run(0, &(events_grp_JOIN_INNER_TD_8319886), &(events_JOIN_INNER_TD_8319886[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_867676_e, 0);

    struct timeval tv_r_Filter_8_756378_s, tv_r_Filter_8_756378_e;
    gettimeofday(&tv_r_Filter_8_756378_s, 0);
    SW_Filter_TD_8794557(tbl_SerializeFromObject_TD_9459724_input, tbl_Filter_TD_8794557_output);
    gettimeofday(&tv_r_Filter_8_756378_e, 0);

    struct timeval tv_r_Filter_8_931577_s, tv_r_Filter_8_931577_e;
    gettimeofday(&tv_r_Filter_8_931577_s, 0);
    SW_Filter_TD_872699(tbl_SerializeFromObject_TD_9305529_input, tbl_Filter_TD_872699_output);
    gettimeofday(&tv_r_Filter_8_931577_e, 0);

    struct timeval tv_r_Filter_8_771702_s, tv_r_Filter_8_771702_e;
    gettimeofday(&tv_r_Filter_8_771702_s, 0);
    SW_Filter_TD_8968724(tbl_SerializeFromObject_TD_9635821_input, tbl_Filter_TD_8968724_output);
    gettimeofday(&tv_r_Filter_8_771702_e, 0);

    struct timeval tv_r_JOIN_INNER_8_296583_s, tv_r_JOIN_INNER_8_296583_e;
    gettimeofday(&tv_r_JOIN_INNER_8_296583_s, 0);
    trans_JOIN_INNER_TD_8318828.add(&(tbl_Filter_TD_9973823_output));
    trans_JOIN_INNER_TD_8318828.add(&(tbl_Filter_TD_9700540_output));
    trans_JOIN_INNER_TD_8318828.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8318828), &(events_h2d_wr_JOIN_INNER_TD_8318828[0]));
    events_grp_JOIN_INNER_TD_8318828.push_back(events_h2d_wr_JOIN_INNER_TD_8318828[0]);
    krnl_JOIN_INNER_TD_8318828.run(0, &(events_grp_JOIN_INNER_TD_8318828), &(events_JOIN_INNER_TD_8318828[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_296583_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_624517_s, tv_r_JOIN_LEFTSEMI_7_624517_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_624517_s, 0);
    trans_JOIN_LEFTSEMI_TD_7423409.add(&(tbl_Filter_TD_8843891_output));
    trans_JOIN_LEFTSEMI_TD_7423409.add(&(tbl_Filter_TD_8374641_output));
    trans_JOIN_LEFTSEMI_TD_7423409.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_7423409), &(events_h2d_wr_JOIN_LEFTSEMI_TD_7423409[0]));
    events_grp_JOIN_LEFTSEMI_TD_7423409.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7423409[0]);
    krnl_JOIN_LEFTSEMI_TD_7423409.run(0, &(events_grp_JOIN_LEFTSEMI_TD_7423409), &(events_JOIN_LEFTSEMI_TD_7423409[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_624517_e, 0);

    struct timeval tv_r_JOIN_INNER_7_755900_s, tv_r_JOIN_INNER_7_755900_e;
    gettimeofday(&tv_r_JOIN_INNER_7_755900_s, 0);
    prev_events_grp_JOIN_INNER_TD_7265401.push_back(events_h2d_wr_JOIN_INNER_TD_8501707[0]);
    trans_JOIN_INNER_TD_7265401.add(&(tbl_Filter_TD_8236046_output));
    trans_JOIN_INNER_TD_7265401.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7265401), &(events_h2d_wr_JOIN_INNER_TD_7265401[0]));
    events_grp_JOIN_INNER_TD_7265401.push_back(events_h2d_wr_JOIN_INNER_TD_7265401[0]);
    events_grp_JOIN_INNER_TD_7265401.push_back(events_JOIN_INNER_TD_8501707[0]);
    krnl_JOIN_INNER_TD_7265401.run(0, &(events_grp_JOIN_INNER_TD_7265401), &(events_JOIN_INNER_TD_7265401[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_755900_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_533295_s, tv_r_JOIN_LEFTSEMI_7_533295_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_533295_s, 0);
    trans_JOIN_LEFTSEMI_TD_7824317.add(&(tbl_Filter_TD_8284973_output));
    trans_JOIN_LEFTSEMI_TD_7824317.add(&(tbl_Filter_TD_898052_output));
    trans_JOIN_LEFTSEMI_TD_7824317.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_7824317), &(events_h2d_wr_JOIN_LEFTSEMI_TD_7824317[0]));
    events_grp_JOIN_LEFTSEMI_TD_7824317.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7824317[0]);
    krnl_JOIN_LEFTSEMI_TD_7824317.run(0, &(events_grp_JOIN_LEFTSEMI_TD_7824317), &(events_JOIN_LEFTSEMI_TD_7824317[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_533295_e, 0);

    struct timeval tv_r_JOIN_INNER_7_770522_s, tv_r_JOIN_INNER_7_770522_e;
    gettimeofday(&tv_r_JOIN_INNER_7_770522_s, 0);
    prev_events_grp_JOIN_INNER_TD_7963040.push_back(events_h2d_wr_JOIN_INNER_TD_8319886[0]);
    trans_JOIN_INNER_TD_7963040.add(&(tbl_Filter_TD_8847181_output));
    trans_JOIN_INNER_TD_7963040.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7963040), &(events_h2d_wr_JOIN_INNER_TD_7963040[0]));
    events_grp_JOIN_INNER_TD_7963040.push_back(events_h2d_wr_JOIN_INNER_TD_7963040[0]);
    events_grp_JOIN_INNER_TD_7963040.push_back(events_JOIN_INNER_TD_8319886[0]);
    krnl_JOIN_INNER_TD_7963040.run(0, &(events_grp_JOIN_INNER_TD_7963040), &(events_JOIN_INNER_TD_7963040[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_770522_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_844724_s, tv_r_JOIN_LEFTSEMI_7_844724_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_844724_s, 0);
    trans_JOIN_LEFTSEMI_TD_7613906.add(&(tbl_Filter_TD_872699_output));
    trans_JOIN_LEFTSEMI_TD_7613906.add(&(tbl_Filter_TD_8794557_output));
    trans_JOIN_LEFTSEMI_TD_7613906.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_7613906), &(events_h2d_wr_JOIN_LEFTSEMI_TD_7613906[0]));
    events_grp_JOIN_LEFTSEMI_TD_7613906.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7613906[0]);
    krnl_JOIN_LEFTSEMI_TD_7613906.run(0, &(events_grp_JOIN_LEFTSEMI_TD_7613906), &(events_JOIN_LEFTSEMI_TD_7613906[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_844724_e, 0);

    struct timeval tv_r_JOIN_INNER_7_38894_s, tv_r_JOIN_INNER_7_38894_e;
    gettimeofday(&tv_r_JOIN_INNER_7_38894_s, 0);
    prev_events_grp_JOIN_INNER_TD_7275669.push_back(events_h2d_wr_JOIN_INNER_TD_8318828[0]);
    trans_JOIN_INNER_TD_7275669.add(&(tbl_Filter_TD_8968724_output));
    trans_JOIN_INNER_TD_7275669.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7275669), &(events_h2d_wr_JOIN_INNER_TD_7275669[0]));
    events_grp_JOIN_INNER_TD_7275669.push_back(events_h2d_wr_JOIN_INNER_TD_7275669[0]);
    events_grp_JOIN_INNER_TD_7275669.push_back(events_JOIN_INNER_TD_8318828[0]);
    krnl_JOIN_INNER_TD_7275669.run(0, &(events_grp_JOIN_INNER_TD_7275669), &(events_JOIN_INNER_TD_7275669[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_38894_e, 0);

    struct timeval tv_r_JOIN_INNER_6_634825_s, tv_r_JOIN_INNER_6_634825_e;
    gettimeofday(&tv_r_JOIN_INNER_6_634825_s, 0);
    prev_events_grp_JOIN_INNER_TD_6176382.push_back(events_h2d_wr_JOIN_INNER_TD_7265401[0]);
    prev_events_grp_JOIN_INNER_TD_6176382.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7423409[0]);
    trans_JOIN_INNER_TD_6176382.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6176382), &(events_h2d_wr_JOIN_INNER_TD_6176382[0]));
    events_grp_JOIN_INNER_TD_6176382.push_back(events_h2d_wr_JOIN_INNER_TD_6176382[0]);
    events_grp_JOIN_INNER_TD_6176382.push_back(events_JOIN_INNER_TD_7265401[0]);
    events_grp_JOIN_INNER_TD_6176382.push_back(events_JOIN_LEFTSEMI_TD_7423409[0]);
    krnl_JOIN_INNER_TD_6176382.run(0, &(events_grp_JOIN_INNER_TD_6176382), &(events_JOIN_INNER_TD_6176382[0]));
    
    trans_JOIN_INNER_TD_6176382_out.add(&(tbl_JOIN_INNER_TD_6176382_output_preprocess));
    trans_JOIN_INNER_TD_6176382_out.dev2host(0, &(events_JOIN_INNER_TD_6176382), &(events_d2h_rd_JOIN_INNER_TD_6176382[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_6176382);
    tbl_JOIN_INNER_TD_6176382_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_6176382_output));
    gettimeofday(&tv_r_JOIN_INNER_6_634825_e, 0);

    struct timeval tv_r_JOIN_INNER_6_997499_s, tv_r_JOIN_INNER_6_997499_e;
    gettimeofday(&tv_r_JOIN_INNER_6_997499_s, 0);
    prev_events_grp_JOIN_INNER_TD_6459025.push_back(events_h2d_wr_JOIN_INNER_TD_7963040[0]);
    prev_events_grp_JOIN_INNER_TD_6459025.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7824317[0]);
    trans_JOIN_INNER_TD_6459025.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6459025), &(events_h2d_wr_JOIN_INNER_TD_6459025[0]));
    events_grp_JOIN_INNER_TD_6459025.push_back(events_h2d_wr_JOIN_INNER_TD_6459025[0]);
    events_grp_JOIN_INNER_TD_6459025.push_back(events_JOIN_INNER_TD_7963040[0]);
    events_grp_JOIN_INNER_TD_6459025.push_back(events_JOIN_LEFTSEMI_TD_7824317[0]);
    krnl_JOIN_INNER_TD_6459025.run(0, &(events_grp_JOIN_INNER_TD_6459025), &(events_JOIN_INNER_TD_6459025[0]));
    
    trans_JOIN_INNER_TD_6459025_out.add(&(tbl_JOIN_INNER_TD_6459025_output_preprocess));
    trans_JOIN_INNER_TD_6459025_out.dev2host(0, &(events_JOIN_INNER_TD_6459025), &(events_d2h_rd_JOIN_INNER_TD_6459025[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_6459025);
    tbl_JOIN_INNER_TD_6459025_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_6459025_output));
    gettimeofday(&tv_r_JOIN_INNER_6_997499_e, 0);

    struct timeval tv_r_JOIN_INNER_6_14984_s, tv_r_JOIN_INNER_6_14984_e;
    gettimeofday(&tv_r_JOIN_INNER_6_14984_s, 0);
    prev_events_grp_JOIN_INNER_TD_6886344.push_back(events_h2d_wr_JOIN_INNER_TD_7275669[0]);
    prev_events_grp_JOIN_INNER_TD_6886344.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7613906[0]);
    trans_JOIN_INNER_TD_6886344.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6886344), &(events_h2d_wr_JOIN_INNER_TD_6886344[0]));
    events_grp_JOIN_INNER_TD_6886344.push_back(events_h2d_wr_JOIN_INNER_TD_6886344[0]);
    events_grp_JOIN_INNER_TD_6886344.push_back(events_JOIN_INNER_TD_7275669[0]);
    events_grp_JOIN_INNER_TD_6886344.push_back(events_JOIN_LEFTSEMI_TD_7613906[0]);
    krnl_JOIN_INNER_TD_6886344.run(0, &(events_grp_JOIN_INNER_TD_6886344), &(events_JOIN_INNER_TD_6886344[0]));
    
    trans_JOIN_INNER_TD_6886344_out.add(&(tbl_JOIN_INNER_TD_6886344_output_preprocess));
    trans_JOIN_INNER_TD_6886344_out.dev2host(0, &(events_JOIN_INNER_TD_6886344), &(events_d2h_rd_JOIN_INNER_TD_6886344[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_6886344);
    tbl_JOIN_INNER_TD_6886344_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_6886344_output));
    gettimeofday(&tv_r_JOIN_INNER_6_14984_e, 0);

    struct timeval tv_r_Aggregate_5_725560_s, tv_r_Aggregate_5_725560_e;
    gettimeofday(&tv_r_Aggregate_5_725560_s, 0);
    trans_Aggregate_TD_5427655.add(&(tbl_JOIN_INNER_TD_6176382_output));
    trans_Aggregate_TD_5427655.host2dev(0, &(prev_events_grp_Aggregate_TD_5427655), &(events_h2d_wr_Aggregate_TD_5427655[0]));
    events_grp_Aggregate_TD_5427655.push_back(events_h2d_wr_Aggregate_TD_5427655[0]);
    krnl_Aggregate_TD_5427655.run(0, &(events_grp_Aggregate_TD_5427655), &(events_Aggregate_TD_5427655[0]));
    
    trans_Aggregate_TD_5427655_out.add(&(tbl_Aggregate_TD_5427655_output_preprocess));
    trans_Aggregate_TD_5427655_out.dev2host(0, &(events_Aggregate_TD_5427655), &(events_d2h_rd_Aggregate_TD_5427655[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_5427655_consolidate(tbl_Aggregate_TD_5427655_output_preprocess, tbl_Aggregate_TD_5427655_output);
    gettimeofday(&tv_r_Aggregate_5_725560_e, 0);

    struct timeval tv_r_Aggregate_5_124216_s, tv_r_Aggregate_5_124216_e;
    gettimeofday(&tv_r_Aggregate_5_124216_s, 0);
    trans_Aggregate_TD_5222086.add(&(tbl_JOIN_INNER_TD_6459025_output));
    trans_Aggregate_TD_5222086.host2dev(0, &(prev_events_grp_Aggregate_TD_5222086), &(events_h2d_wr_Aggregate_TD_5222086[0]));
    events_grp_Aggregate_TD_5222086.push_back(events_h2d_wr_Aggregate_TD_5222086[0]);
    krnl_Aggregate_TD_5222086.run(0, &(events_grp_Aggregate_TD_5222086), &(events_Aggregate_TD_5222086[0]));
    
    trans_Aggregate_TD_5222086_out.add(&(tbl_Aggregate_TD_5222086_output_preprocess));
    trans_Aggregate_TD_5222086_out.dev2host(0, &(events_Aggregate_TD_5222086), &(events_d2h_rd_Aggregate_TD_5222086[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_5222086_consolidate(tbl_Aggregate_TD_5222086_output_preprocess, tbl_Aggregate_TD_5222086_output);
    gettimeofday(&tv_r_Aggregate_5_124216_e, 0);

    struct timeval tv_r_Aggregate_5_636324_s, tv_r_Aggregate_5_636324_e;
    gettimeofday(&tv_r_Aggregate_5_636324_s, 0);
    trans_Aggregate_TD_5498396.add(&(tbl_JOIN_INNER_TD_6886344_output));
    trans_Aggregate_TD_5498396.host2dev(0, &(prev_events_grp_Aggregate_TD_5498396), &(events_h2d_wr_Aggregate_TD_5498396[0]));
    events_grp_Aggregate_TD_5498396.push_back(events_h2d_wr_Aggregate_TD_5498396[0]);
    krnl_Aggregate_TD_5498396.run(0, &(events_grp_Aggregate_TD_5498396), &(events_Aggregate_TD_5498396[0]));
    
    trans_Aggregate_TD_5498396_out.add(&(tbl_Aggregate_TD_5498396_output_preprocess));
    trans_Aggregate_TD_5498396_out.dev2host(0, &(events_Aggregate_TD_5498396), &(events_d2h_rd_Aggregate_TD_5498396[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_5498396_consolidate(tbl_Aggregate_TD_5498396_output_preprocess, tbl_Aggregate_TD_5498396_output);
    gettimeofday(&tv_r_Aggregate_5_636324_e, 0);

    struct timeval tv_r_Union_4_715059_s, tv_r_Union_4_715059_e;
    gettimeofday(&tv_r_Union_4_715059_s, 0);
    SW_Union_TD_4778146(tbl_Aggregate_TD_5498396_output, tbl_Aggregate_TD_5222086_output, tbl_Aggregate_TD_5427655_output, tbl_Union_TD_4778146_output);
    gettimeofday(&tv_r_Union_4_715059_e, 0);

    struct timeval tv_r_Aggregate_3_534612_s, tv_r_Aggregate_3_534612_e;
    gettimeofday(&tv_r_Aggregate_3_534612_s, 0);
    trans_Aggregate_TD_3434102.add(&(tbl_Union_TD_4778146_output));
    trans_Aggregate_TD_3434102.host2dev(0, &(prev_events_grp_Aggregate_TD_3434102), &(events_h2d_wr_Aggregate_TD_3434102[0]));
    events_grp_Aggregate_TD_3434102.push_back(events_h2d_wr_Aggregate_TD_3434102[0]);
    krnl_Aggregate_TD_3434102.run(0, &(events_grp_Aggregate_TD_3434102), &(events_Aggregate_TD_3434102[0]));
    
    trans_Aggregate_TD_3434102_out.add(&(tbl_Aggregate_TD_3434102_output_preprocess));
    trans_Aggregate_TD_3434102_out.dev2host(0, &(events_Aggregate_TD_3434102), &(events_d2h_rd_Aggregate_TD_3434102[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_3434102_consolidate(tbl_Aggregate_TD_3434102_output_preprocess, tbl_Aggregate_TD_3434102_output);
    gettimeofday(&tv_r_Aggregate_3_534612_e, 0);

    struct timeval tv_r_Sort_2_310318_s, tv_r_Sort_2_310318_e;
    gettimeofday(&tv_r_Sort_2_310318_s, 0);
    SW_Sort_TD_2467056(tbl_Aggregate_TD_3434102_output, tbl_Sort_TD_2467056_output);
    gettimeofday(&tv_r_Sort_2_310318_e, 0);

    struct timeval tv_r_LocalLimit_1_29126_s, tv_r_LocalLimit_1_29126_e;
    gettimeofday(&tv_r_LocalLimit_1_29126_s, 0);
    SW_LocalLimit_TD_1371196(tbl_Sort_TD_2467056_output, tbl_LocalLimit_TD_1371196_output);
    gettimeofday(&tv_r_LocalLimit_1_29126_e, 0);

    struct timeval tv_r_GlobalLimit_0_396895_s, tv_r_GlobalLimit_0_396895_e;
    gettimeofday(&tv_r_GlobalLimit_0_396895_s, 0);
    SW_GlobalLimit_TD_0247631(tbl_LocalLimit_TD_1371196_output, tbl_GlobalLimit_TD_0247631_output);
    gettimeofday(&tv_r_GlobalLimit_0_396895_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_997968_s, &tv_r_Filter_9_997968_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10565563_input: " << tbl_SerializeFromObject_TD_10565563_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_532798_s, &tv_r_Filter_9_532798_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10997412_input: " << tbl_SerializeFromObject_TD_10997412_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_136801_s, &tv_r_Filter_9_136801_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10911781_input: " << tbl_SerializeFromObject_TD_10911781_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_115130_s, &tv_r_Filter_9_115130_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10497619_input: " << tbl_SerializeFromObject_TD_10497619_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_778566_s, &tv_r_Filter_9_778566_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10577154_input: " << tbl_SerializeFromObject_TD_10577154_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_782610_s, &tv_r_Filter_9_782610_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10268607_input: " << tbl_SerializeFromObject_TD_10268607_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_542414_s, &tv_r_Filter_8_542414_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9517456_input: " << tbl_SerializeFromObject_TD_9517456_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_920506_s, &tv_r_Filter_8_920506_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9495262_input: " << tbl_SerializeFromObject_TD_9495262_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_706514_s, &tv_r_Filter_8_706514_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_94482_input: " << tbl_SerializeFromObject_TD_94482_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_688758_s, &tv_r_JOIN_INNER_8_688758_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9130594_output: " << tbl_Filter_TD_9130594_output.getNumRow() << " " << "tbl_Filter_TD_9183412_output: " << tbl_Filter_TD_9183412_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_246503_s, &tv_r_Filter_8_246503_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9482178_input: " << tbl_SerializeFromObject_TD_9482178_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_241524_s, &tv_r_Filter_8_241524_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9508366_input: " << tbl_SerializeFromObject_TD_9508366_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_546905_s, &tv_r_Filter_8_546905_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9924233_input: " << tbl_SerializeFromObject_TD_9924233_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_867676_s, &tv_r_JOIN_INNER_8_867676_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9372891_output: " << tbl_Filter_TD_9372891_output.getNumRow() << " " << "tbl_Filter_TD_9240343_output: " << tbl_Filter_TD_9240343_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_756378_s, &tv_r_Filter_8_756378_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9459724_input: " << tbl_SerializeFromObject_TD_9459724_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_931577_s, &tv_r_Filter_8_931577_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9305529_input: " << tbl_SerializeFromObject_TD_9305529_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_771702_s, &tv_r_Filter_8_771702_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9635821_input: " << tbl_SerializeFromObject_TD_9635821_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_296583_s, &tv_r_JOIN_INNER_8_296583_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9973823_output: " << tbl_Filter_TD_9973823_output.getNumRow() << " " << "tbl_Filter_TD_9700540_output: " << tbl_Filter_TD_9700540_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_624517_s, &tv_r_JOIN_LEFTSEMI_7_624517_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8843891_output: " << tbl_Filter_TD_8843891_output.getNumRow() << " " << "tbl_Filter_TD_8374641_output: " << tbl_Filter_TD_8374641_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_755900_s, &tv_r_JOIN_INNER_7_755900_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8501707_output: " << tbl_JOIN_INNER_TD_8501707_output.getNumRow() << " " << "tbl_Filter_TD_8236046_output: " << tbl_Filter_TD_8236046_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_533295_s, &tv_r_JOIN_LEFTSEMI_7_533295_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8284973_output: " << tbl_Filter_TD_8284973_output.getNumRow() << " " << "tbl_Filter_TD_898052_output: " << tbl_Filter_TD_898052_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_770522_s, &tv_r_JOIN_INNER_7_770522_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8319886_output: " << tbl_JOIN_INNER_TD_8319886_output.getNumRow() << " " << "tbl_Filter_TD_8847181_output: " << tbl_Filter_TD_8847181_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_844724_s, &tv_r_JOIN_LEFTSEMI_7_844724_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_872699_output: " << tbl_Filter_TD_872699_output.getNumRow() << " " << "tbl_Filter_TD_8794557_output: " << tbl_Filter_TD_8794557_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_38894_s, &tv_r_JOIN_INNER_7_38894_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8318828_output: " << tbl_JOIN_INNER_TD_8318828_output.getNumRow() << " " << "tbl_Filter_TD_8968724_output: " << tbl_Filter_TD_8968724_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_634825_s, &tv_r_JOIN_INNER_6_634825_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7265401_output: " << tbl_JOIN_INNER_TD_7265401_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7423409_output: " << tbl_JOIN_LEFTSEMI_TD_7423409_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_997499_s, &tv_r_JOIN_INNER_6_997499_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7963040_output: " << tbl_JOIN_INNER_TD_7963040_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7824317_output: " << tbl_JOIN_LEFTSEMI_TD_7824317_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_14984_s, &tv_r_JOIN_INNER_6_14984_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7275669_output: " << tbl_JOIN_INNER_TD_7275669_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7613906_output: " << tbl_JOIN_LEFTSEMI_TD_7613906_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_725560_s, &tv_r_Aggregate_5_725560_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6176382_output: " << tbl_JOIN_INNER_TD_6176382_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_124216_s, &tv_r_Aggregate_5_124216_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6459025_output: " << tbl_JOIN_INNER_TD_6459025_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_636324_s, &tv_r_Aggregate_5_636324_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6886344_output: " << tbl_JOIN_INNER_TD_6886344_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_715059_s, &tv_r_Union_4_715059_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5498396_output: " << tbl_Aggregate_TD_5498396_output.getNumRow() << " " << "tbl_Aggregate_TD_5222086_output: " << tbl_Aggregate_TD_5222086_output.getNumRow() << " " << "tbl_Aggregate_TD_5427655_output: " << tbl_Aggregate_TD_5427655_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_534612_s, &tv_r_Aggregate_3_534612_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4778146_output: " << tbl_Union_TD_4778146_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_310318_s, &tv_r_Sort_2_310318_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3434102_output: " << tbl_Aggregate_TD_3434102_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_29126_s, &tv_r_LocalLimit_1_29126_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2467056_output: " << tbl_Sort_TD_2467056_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_396895_s, &tv_r_GlobalLimit_0_396895_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1371196_output: " << tbl_LocalLimit_TD_1371196_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.3124099 * 1000 << "ms" << std::endl; 
    return 0; 
}
