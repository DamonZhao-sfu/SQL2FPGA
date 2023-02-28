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

#include "cfgFunc_q23.hpp" 
#include "q23.hpp" 

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
    std::cout << "NOTE:running query #23\n."; 
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
    Table tbl_GlobalLimit_TD_0597065_output("tbl_GlobalLimit_TD_0597065_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0597065_output.allocateHost();
    Table tbl_LocalLimit_TD_1726255_output("tbl_LocalLimit_TD_1726255_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1726255_output.allocateHost();
    Table tbl_Sort_TD_2805766_output("tbl_Sort_TD_2805766_output", 6100000, 3, "");
    tbl_Sort_TD_2805766_output.allocateHost();
    Table tbl_Union_TD_3306647_output("tbl_Union_TD_3306647_output", 6100000, 3, "");
    tbl_Union_TD_3306647_output.allocateHost();
    Table tbl_Aggregate_TD_4543734_output("tbl_Aggregate_TD_4543734_output", 6100000, 3, "");
    tbl_Aggregate_TD_4543734_output.allocateHost();
    Table tbl_Aggregate_TD_4895784_output("tbl_Aggregate_TD_4895784_output", 6100000, 3, "");
    tbl_Aggregate_TD_4895784_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5575645_output("tbl_JOIN_INNER_TD_5575645_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5575645_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5209561_output("tbl_JOIN_INNER_TD_5209561_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5209561_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6478730_output("tbl_JOIN_INNER_TD_6478730_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6478730_output.allocateHost();
    Table tbl_Filter_TD_6354216_output("tbl_Filter_TD_6354216_output", 6100000, 1, "");
    tbl_Filter_TD_6354216_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6617171_output("tbl_JOIN_INNER_TD_6617171_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6617171_output.allocateHost();
    Table tbl_Filter_TD_6646894_output("tbl_Filter_TD_6646894_output", 6100000, 1, "");
    tbl_Filter_TD_6646894_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7744073_output("tbl_JOIN_LEFTSEMI_TD_7744073_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_7744073_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7223440_output("tbl_JOIN_LEFTSEMI_TD_7223440_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_7223440_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7231476_input;
    tbl_SerializeFromObject_TD_7231476_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7231476_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7231476_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7231476_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_7231476_input.allocateHost();
    tbl_SerializeFromObject_TD_7231476_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_7974833_output("tbl_JOIN_LEFTSEMI_TD_7974833_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_7974833_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7911421_output("tbl_JOIN_LEFTSEMI_TD_7911421_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_7911421_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7192624_input;
    tbl_SerializeFromObject_TD_7192624_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7192624_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7192624_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7192624_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_7192624_input.allocateHost();
    tbl_SerializeFromObject_TD_7192624_input.loadHost();
    Table tbl_JOIN_LEFTSEMI_TD_8979751_output("tbl_JOIN_LEFTSEMI_TD_8979751_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_8979751_output.allocateHost();
    Table tbl_Filter_TD_8827897_output("tbl_Filter_TD_8827897_output", 6100000, 1, "");
    tbl_Filter_TD_8827897_output.allocateHost();
    Table tbl_Filter_TD_8803226_output("tbl_Filter_TD_8803226_output", 6100000, 3, "");
    tbl_Filter_TD_8803226_output.allocateHost();
    Table tbl_Filter_TD_8729823_output("tbl_Filter_TD_8729823_output", 6100000, 1, "");
    tbl_Filter_TD_8729823_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_8558332_output("tbl_JOIN_LEFTSEMI_TD_8558332_output", 6100000, 4, "");
    tbl_JOIN_LEFTSEMI_TD_8558332_output.allocateHost();
    Table tbl_Filter_TD_8911589_output("tbl_Filter_TD_8911589_output", 6100000, 1, "");
    tbl_Filter_TD_8911589_output.allocateHost();
    Table tbl_Filter_TD_8356588_output("tbl_Filter_TD_8356588_output", 6100000, 3, "");
    tbl_Filter_TD_8356588_output.allocateHost();
    Table tbl_Filter_TD_8143206_output("tbl_Filter_TD_8143206_output", 6100000, 1, "");
    tbl_Filter_TD_8143206_output.allocateHost();
    Table tbl_Filter_TD_9571006_output("tbl_Filter_TD_9571006_output", 6100000, 5, "");
    tbl_Filter_TD_9571006_output.allocateHost();
    Table tbl_Filter_TD_9214268_output("tbl_Filter_TD_9214268_output", 6100000, 1, "");
    tbl_Filter_TD_9214268_output.allocateHost();
    Table tbl_Aggregate_TD_9642948_output_preprocess("tbl_Aggregate_TD_9642948_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_9642948_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_9642948_output("tbl_Aggregate_TD_9642948_output", 6100000, 2, "");
    tbl_Aggregate_TD_9642948_output.allocateHost();
    Table tbl_Aggregate_TD_9473599_output("tbl_Aggregate_TD_9473599_output", 6100000, 1, "");
    tbl_Aggregate_TD_9473599_output.allocateHost();
    Table tbl_SerializeFromObject_TD_970876_input;
    tbl_SerializeFromObject_TD_970876_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_970876_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_970876_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_970876_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_970876_input.allocateHost();
    tbl_SerializeFromObject_TD_970876_input.loadHost();
    Table tbl_Aggregate_TD_9662598_output_preprocess("tbl_Aggregate_TD_9662598_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_9662598_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_9662598_output("tbl_Aggregate_TD_9662598_output", 6100000, 2, "");
    tbl_Aggregate_TD_9662598_output.allocateHost();
    Table tbl_Aggregate_TD_9303521_output("tbl_Aggregate_TD_9303521_output", 6100000, 1, "");
    tbl_Aggregate_TD_9303521_output.allocateHost();
    Table tbl_Filter_TD_9116027_output("tbl_Filter_TD_9116027_output", 6100000, 5, "");
    tbl_Filter_TD_9116027_output.allocateHost();
    Table tbl_Filter_TD_9188431_output("tbl_Filter_TD_9188431_output", 6100000, 1, "");
    tbl_Filter_TD_9188431_output.allocateHost();
    Table tbl_Aggregate_TD_997594_output_preprocess("tbl_Aggregate_TD_997594_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_997594_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_997594_output("tbl_Aggregate_TD_997594_output", 6100000, 2, "");
    tbl_Aggregate_TD_997594_output.allocateHost();
    Table tbl_Aggregate_TD_9543664_output("tbl_Aggregate_TD_9543664_output", 6100000, 1, "");
    tbl_Aggregate_TD_9543664_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9526106_input;
    tbl_SerializeFromObject_TD_9526106_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9526106_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_9526106_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9526106_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9526106_input.allocateHost();
    tbl_SerializeFromObject_TD_9526106_input.loadHost();
    Table tbl_Aggregate_TD_9540992_output_preprocess("tbl_Aggregate_TD_9540992_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_9540992_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_9540992_output("tbl_Aggregate_TD_9540992_output", 6100000, 2, "");
    tbl_Aggregate_TD_9540992_output.allocateHost();
    Table tbl_Aggregate_TD_9541362_output("tbl_Aggregate_TD_9541362_output", 6100000, 1, "");
    tbl_Aggregate_TD_9541362_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10274596_input;
    tbl_SerializeFromObject_TD_10274596_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10274596_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10274596_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_10274596_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_10274596_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_10274596_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_10274596_input.allocateHost();
    tbl_SerializeFromObject_TD_10274596_input.loadHost();
    Table tbl_Aggregate_TD_10689047_output("tbl_Aggregate_TD_10689047_output", 6100000, 2, "");
    tbl_Aggregate_TD_10689047_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10729061_output_preprocess("tbl_JOIN_INNER_TD_10729061_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10729061_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_10729061_output("tbl_JOIN_INNER_TD_10729061_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10729061_output.allocateHost();
    Table tbl_Aggregate_TD_10341848_output_preprocess("tbl_Aggregate_TD_10341848_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_10341848_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_10341848_output("tbl_Aggregate_TD_10341848_output", 6100000, 1, "");
    tbl_Aggregate_TD_10341848_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10374469_output_preprocess("tbl_JOIN_INNER_TD_10374469_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10374469_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_10374469_output("tbl_JOIN_INNER_TD_10374469_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10374469_output.allocateHost();
    Table tbl_Aggregate_TD_10249456_output_preprocess("tbl_Aggregate_TD_10249456_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_10249456_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_10249456_output("tbl_Aggregate_TD_10249456_output", 6100000, 1, "");
    tbl_Aggregate_TD_10249456_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10146884_input;
    tbl_SerializeFromObject_TD_10146884_input = Table("web_sales", web_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10146884_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10146884_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_10146884_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_10146884_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_10146884_input.addCol("ws_list_price", 4);
    tbl_SerializeFromObject_TD_10146884_input.allocateHost();
    tbl_SerializeFromObject_TD_10146884_input.loadHost();
    Table tbl_Aggregate_TD_10674991_output("tbl_Aggregate_TD_10674991_output", 6100000, 2, "");
    tbl_Aggregate_TD_10674991_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10204601_output_preprocess("tbl_JOIN_INNER_TD_10204601_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10204601_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_10204601_output("tbl_JOIN_INNER_TD_10204601_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10204601_output.allocateHost();
    Table tbl_Aggregate_TD_1016926_output_preprocess("tbl_Aggregate_TD_1016926_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_1016926_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_1016926_output("tbl_Aggregate_TD_1016926_output", 6100000, 1, "");
    tbl_Aggregate_TD_1016926_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10188262_output_preprocess("tbl_JOIN_INNER_TD_10188262_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10188262_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_10188262_output("tbl_JOIN_INNER_TD_10188262_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_10188262_output.allocateHost();
    Table tbl_Aggregate_TD_10591488_output_preprocess("tbl_Aggregate_TD_10591488_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_10591488_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_10591488_output("tbl_Aggregate_TD_10591488_output", 6100000, 1, "");
    tbl_Aggregate_TD_10591488_output.allocateHost();
    Table tbl_Project_TD_11601950_output("tbl_Project_TD_11601950_output", 6100000, 3, "");
    tbl_Project_TD_11601950_output.allocateHost();
    Table tbl_Filter_TD_11962588_output("tbl_Filter_TD_11962588_output", 6100000, 3, "");
    tbl_Filter_TD_11962588_output.allocateHost();
    Table tbl_Filter_TD_11431283_output("tbl_Filter_TD_11431283_output", 6100000, 1, "");
    tbl_Filter_TD_11431283_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11633428_output_preprocess("tbl_JOIN_INNER_TD_11633428_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_11633428_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_11633428_output("tbl_JOIN_INNER_TD_11633428_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_11633428_output.allocateHost();
    Table tbl_Filter_TD_11360698_output("tbl_Filter_TD_11360698_output", 6100000, 3, "");
    tbl_Filter_TD_11360698_output.allocateHost();
    Table tbl_Filter_TD_11405369_output("tbl_Filter_TD_11405369_output", 6100000, 1, "");
    tbl_Filter_TD_11405369_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1149247_output_preprocess("tbl_JOIN_INNER_TD_1149247_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1149247_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_1149247_output("tbl_JOIN_INNER_TD_1149247_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1149247_output.allocateHost();
    Table tbl_Project_TD_11589783_output("tbl_Project_TD_11589783_output", 6100000, 3, "");
    tbl_Project_TD_11589783_output.allocateHost();
    Table tbl_Filter_TD_11362879_output("tbl_Filter_TD_11362879_output", 6100000, 3, "");
    tbl_Filter_TD_11362879_output.allocateHost();
    Table tbl_Filter_TD_11136802_output("tbl_Filter_TD_11136802_output", 6100000, 1, "");
    tbl_Filter_TD_11136802_output.allocateHost();
    Table tbl_JOIN_INNER_TD_11215925_output_preprocess("tbl_JOIN_INNER_TD_11215925_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_11215925_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_11215925_output("tbl_JOIN_INNER_TD_11215925_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_11215925_output.allocateHost();
    Table tbl_Filter_TD_11820471_output("tbl_Filter_TD_11820471_output", 6100000, 3, "");
    tbl_Filter_TD_11820471_output.allocateHost();
    Table tbl_Filter_TD_11809128_output("tbl_Filter_TD_11809128_output", 6100000, 1, "");
    tbl_Filter_TD_11809128_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1170542_output_preprocess("tbl_JOIN_INNER_TD_1170542_output_preprocess", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1170542_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_1170542_output("tbl_JOIN_INNER_TD_1170542_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_1170542_output.allocateHost();
    Table tbl_JOIN_INNER_TD_12490786_output("tbl_JOIN_INNER_TD_12490786_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_12490786_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12162060_input;
    tbl_SerializeFromObject_TD_12162060_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12162060_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12162060_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12162060_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12162060_input.allocateHost();
    tbl_SerializeFromObject_TD_12162060_input.loadHost();
    Table tbl_SerializeFromObject_TD_12927837_input;
    tbl_SerializeFromObject_TD_12927837_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_12927837_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12927837_input.allocateHost();
    tbl_SerializeFromObject_TD_12927837_input.loadHost();
    Table tbl_JOIN_INNER_TD_12755212_output("tbl_JOIN_INNER_TD_12755212_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_12755212_output.allocateHost();
    Table tbl_Filter_TD_1250278_output("tbl_Filter_TD_1250278_output", 6100000, 1, "");
    tbl_Filter_TD_1250278_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12265106_input;
    tbl_SerializeFromObject_TD_12265106_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12265106_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12265106_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12265106_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12265106_input.allocateHost();
    tbl_SerializeFromObject_TD_12265106_input.loadHost();
    Table tbl_SerializeFromObject_TD_12483785_input;
    tbl_SerializeFromObject_TD_12483785_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_12483785_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12483785_input.allocateHost();
    tbl_SerializeFromObject_TD_12483785_input.loadHost();
    Table tbl_JOIN_INNER_TD_12841345_output("tbl_JOIN_INNER_TD_12841345_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_12841345_output.allocateHost();
    Table tbl_Filter_TD_12982527_output("tbl_Filter_TD_12982527_output", 6100000, 1, "");
    tbl_Filter_TD_12982527_output.allocateHost();
    Table tbl_JOIN_INNER_TD_12219972_output("tbl_JOIN_INNER_TD_12219972_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_12219972_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12869914_input;
    tbl_SerializeFromObject_TD_12869914_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12869914_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12869914_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12869914_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12869914_input.allocateHost();
    tbl_SerializeFromObject_TD_12869914_input.loadHost();
    Table tbl_SerializeFromObject_TD_12613679_input;
    tbl_SerializeFromObject_TD_12613679_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_12613679_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12613679_input.allocateHost();
    tbl_SerializeFromObject_TD_12613679_input.loadHost();
    Table tbl_JOIN_INNER_TD_12643264_output("tbl_JOIN_INNER_TD_12643264_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_12643264_output.allocateHost();
    Table tbl_Filter_TD_12414135_output("tbl_Filter_TD_12414135_output", 6100000, 1, "");
    tbl_Filter_TD_12414135_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12228760_input;
    tbl_SerializeFromObject_TD_12228760_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12228760_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_12228760_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_12228760_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_12228760_input.allocateHost();
    tbl_SerializeFromObject_TD_12228760_input.loadHost();
    Table tbl_SerializeFromObject_TD_12254236_input;
    tbl_SerializeFromObject_TD_12254236_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_12254236_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_12254236_input.allocateHost();
    tbl_SerializeFromObject_TD_12254236_input.loadHost();
    Table tbl_JOIN_INNER_TD_12251980_output("tbl_JOIN_INNER_TD_12251980_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_12251980_output.allocateHost();
    Table tbl_Filter_TD_12980403_output("tbl_Filter_TD_12980403_output", 6100000, 1, "");
    tbl_Filter_TD_12980403_output.allocateHost();
    Table tbl_JOIN_INNER_TD_13351568_output("tbl_JOIN_INNER_TD_13351568_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_13351568_output.allocateHost();
    Table tbl_Filter_TD_13754626_output("tbl_Filter_TD_13754626_output", 6100000, 2, "");
    tbl_Filter_TD_13754626_output.allocateHost();
    Table tbl_Filter_TD_13661488_output("tbl_Filter_TD_13661488_output", 6100000, 4, "");
    tbl_Filter_TD_13661488_output.allocateHost();
    Table tbl_Filter_TD_13959534_output("tbl_Filter_TD_13959534_output", 6100000, 1, "");
    tbl_Filter_TD_13959534_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13158825_input;
    tbl_SerializeFromObject_TD_13158825_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13158825_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13158825_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13158825_input.allocateHost();
    tbl_SerializeFromObject_TD_13158825_input.loadHost();
    Table tbl_Filter_TD_13860804_output("tbl_Filter_TD_13860804_output", 6100000, 4, "");
    tbl_Filter_TD_13860804_output.allocateHost();
    Table tbl_Filter_TD_13199027_output("tbl_Filter_TD_13199027_output", 6100000, 1, "");
    tbl_Filter_TD_13199027_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13870841_input;
    tbl_SerializeFromObject_TD_13870841_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13870841_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13870841_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13870841_input.allocateHost();
    tbl_SerializeFromObject_TD_13870841_input.loadHost();
    Table tbl_JOIN_INNER_TD_13291829_output("tbl_JOIN_INNER_TD_13291829_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_13291829_output.allocateHost();
    Table tbl_Filter_TD_13252891_output("tbl_Filter_TD_13252891_output", 6100000, 2, "");
    tbl_Filter_TD_13252891_output.allocateHost();
    Table tbl_Filter_TD_13259639_output("tbl_Filter_TD_13259639_output", 6100000, 4, "");
    tbl_Filter_TD_13259639_output.allocateHost();
    Table tbl_Filter_TD_13628174_output("tbl_Filter_TD_13628174_output", 6100000, 1, "");
    tbl_Filter_TD_13628174_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13589383_input;
    tbl_SerializeFromObject_TD_13589383_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13589383_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13589383_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13589383_input.allocateHost();
    tbl_SerializeFromObject_TD_13589383_input.loadHost();
    Table tbl_Filter_TD_13767647_output("tbl_Filter_TD_13767647_output", 6100000, 4, "");
    tbl_Filter_TD_13767647_output.allocateHost();
    Table tbl_Filter_TD_13380660_output("tbl_Filter_TD_13380660_output", 6100000, 1, "");
    tbl_Filter_TD_13380660_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13930581_input;
    tbl_SerializeFromObject_TD_13930581_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_13930581_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_13930581_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_13930581_input.allocateHost();
    tbl_SerializeFromObject_TD_13930581_input.loadHost();
    Table tbl_Filter_TD_14164835_output("tbl_Filter_TD_14164835_output", 6100000, 2, "");
    tbl_Filter_TD_14164835_output.allocateHost();
    Table tbl_Filter_TD_14996937_output("tbl_Filter_TD_14996937_output", 6100000, 2, "");
    tbl_Filter_TD_14996937_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14705754_input;
    tbl_SerializeFromObject_TD_14705754_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14705754_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_14705754_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14705754_input.allocateHost();
    tbl_SerializeFromObject_TD_14705754_input.loadHost();
    Table tbl_SerializeFromObject_TD_14990777_input;
    tbl_SerializeFromObject_TD_14990777_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_14990777_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_14990777_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_14990777_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_14990777_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_14990777_input.allocateHost();
    tbl_SerializeFromObject_TD_14990777_input.loadHost();
    Table tbl_SerializeFromObject_TD_14655597_input;
    tbl_SerializeFromObject_TD_14655597_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_14655597_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_14655597_input.allocateHost();
    tbl_SerializeFromObject_TD_14655597_input.loadHost();
    Table tbl_SerializeFromObject_TD_14687258_input;
    tbl_SerializeFromObject_TD_14687258_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_14687258_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_14687258_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_14687258_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_14687258_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_14687258_input.allocateHost();
    tbl_SerializeFromObject_TD_14687258_input.loadHost();
    Table tbl_SerializeFromObject_TD_14785688_input;
    tbl_SerializeFromObject_TD_14785688_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_14785688_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_14785688_input.allocateHost();
    tbl_SerializeFromObject_TD_14785688_input.loadHost();
    Table tbl_Filter_TD_14347231_output("tbl_Filter_TD_14347231_output", 6100000, 2, "");
    tbl_Filter_TD_14347231_output.allocateHost();
    Table tbl_Filter_TD_14202005_output("tbl_Filter_TD_14202005_output", 6100000, 2, "");
    tbl_Filter_TD_14202005_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14954139_input;
    tbl_SerializeFromObject_TD_14954139_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14954139_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_14954139_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14954139_input.allocateHost();
    tbl_SerializeFromObject_TD_14954139_input.loadHost();
    Table tbl_SerializeFromObject_TD_14203114_input;
    tbl_SerializeFromObject_TD_14203114_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_14203114_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_14203114_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_14203114_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_14203114_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_14203114_input.allocateHost();
    tbl_SerializeFromObject_TD_14203114_input.loadHost();
    Table tbl_SerializeFromObject_TD_14470233_input;
    tbl_SerializeFromObject_TD_14470233_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_14470233_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_14470233_input.allocateHost();
    tbl_SerializeFromObject_TD_14470233_input.loadHost();
    Table tbl_SerializeFromObject_TD_14241048_input;
    tbl_SerializeFromObject_TD_14241048_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_14241048_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_14241048_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_14241048_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_14241048_input.addCol("ss_sales_price", 4);
    tbl_SerializeFromObject_TD_14241048_input.allocateHost();
    tbl_SerializeFromObject_TD_14241048_input.loadHost();
    Table tbl_SerializeFromObject_TD_14632060_input;
    tbl_SerializeFromObject_TD_14632060_input = Table("customer", customer_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_14632060_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_14632060_input.allocateHost();
    tbl_SerializeFromObject_TD_14632060_input.loadHost();
    Table tbl_SerializeFromObject_TD_15164172_input;
    tbl_SerializeFromObject_TD_15164172_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_15164172_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15164172_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_15164172_input.allocateHost();
    tbl_SerializeFromObject_TD_15164172_input.loadHost();
    Table tbl_SerializeFromObject_TD_1541384_input;
    tbl_SerializeFromObject_TD_1541384_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1541384_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1541384_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_1541384_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1541384_input.allocateHost();
    tbl_SerializeFromObject_TD_1541384_input.loadHost();
    Table tbl_SerializeFromObject_TD_15417621_input;
    tbl_SerializeFromObject_TD_15417621_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_15417621_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_15417621_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_15417621_input.allocateHost();
    tbl_SerializeFromObject_TD_15417621_input.loadHost();
    Table tbl_SerializeFromObject_TD_15658259_input;
    tbl_SerializeFromObject_TD_15658259_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_15658259_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_15658259_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_15658259_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_15658259_input.allocateHost();
    tbl_SerializeFromObject_TD_15658259_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_LEFTSEMI_TD_7744073_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_7974833_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_8979751_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8827897_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_LEFTSEMI_TD_8558332_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8911589_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9571006_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9214268_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10729061_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_9642948_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_10374469_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_9662598_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Filter_TD_9116027_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9188431_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10204601_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_997594_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_10188262_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_9540992_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_10729061_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_11633428_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_10341848_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_10374469_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_1149247_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_10249456_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_10204601_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_11215925_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_1016926_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_10188262_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_1170542_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_10591488_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Filter_TD_11962588_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11431283_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_11633428_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11360698_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11405369_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_1149247_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11362879_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11136802_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_11215925_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11820471_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11809128_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_1170542_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_12755212_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_1250278_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_12841345_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12982527_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_12643264_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12414135_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_12251980_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_12980403_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_13351568_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_13661488_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_13959534_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_13860804_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_13199027_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_13291829_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_13259639_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_13628174_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_13767647_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_13380660_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_14164835_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_14996937_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_14347231_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_14202005_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_LEFTSEMI_TD_7744073_cmds;
    cfg_JOIN_LEFTSEMI_TD_7744073_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_7744073_gqe_join (cfg_JOIN_LEFTSEMI_TD_7744073_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_7744073_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_7974833_cmds;
    cfg_JOIN_LEFTSEMI_TD_7974833_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_7974833_gqe_join (cfg_JOIN_LEFTSEMI_TD_7974833_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_7974833_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_8979751_cmds;
    cfg_JOIN_LEFTSEMI_TD_8979751_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_8979751_gqe_join (cfg_JOIN_LEFTSEMI_TD_8979751_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_8979751_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_LEFTSEMI_TD_8558332_cmds;
    cfg_JOIN_LEFTSEMI_TD_8558332_cmds.allocateHost();
    get_cfg_dat_JOIN_LEFTSEMI_TD_8558332_gqe_join (cfg_JOIN_LEFTSEMI_TD_8558332_cmds.cmd);
    cfg_JOIN_LEFTSEMI_TD_8558332_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_9642948_cmds;
    cfg_Aggregate_TD_9642948_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_9642948_gqe_aggr(cfg_Aggregate_TD_9642948_cmds.cmd);
    cfg_Aggregate_TD_9642948_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_9642948_cmds_out;
    cfg_Aggregate_TD_9642948_cmds_out.allocateHost();
    cfg_Aggregate_TD_9642948_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_9662598_cmds;
    cfg_Aggregate_TD_9662598_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_9662598_gqe_aggr(cfg_Aggregate_TD_9662598_cmds.cmd);
    cfg_Aggregate_TD_9662598_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_9662598_cmds_out;
    cfg_Aggregate_TD_9662598_cmds_out.allocateHost();
    cfg_Aggregate_TD_9662598_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_997594_cmds;
    cfg_Aggregate_TD_997594_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_997594_gqe_aggr(cfg_Aggregate_TD_997594_cmds.cmd);
    cfg_Aggregate_TD_997594_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_997594_cmds_out;
    cfg_Aggregate_TD_997594_cmds_out.allocateHost();
    cfg_Aggregate_TD_997594_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_9540992_cmds;
    cfg_Aggregate_TD_9540992_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_9540992_gqe_aggr(cfg_Aggregate_TD_9540992_cmds.cmd);
    cfg_Aggregate_TD_9540992_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_9540992_cmds_out;
    cfg_Aggregate_TD_9540992_cmds_out.allocateHost();
    cfg_Aggregate_TD_9540992_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_10729061_cmds;
    cfg_JOIN_INNER_TD_10729061_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10729061_gqe_join (cfg_JOIN_INNER_TD_10729061_cmds.cmd);
    cfg_JOIN_INNER_TD_10729061_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_10341848_cmds;
    cfg_Aggregate_TD_10341848_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_10341848_gqe_aggr(cfg_Aggregate_TD_10341848_cmds.cmd);
    cfg_Aggregate_TD_10341848_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_10341848_cmds_out;
    cfg_Aggregate_TD_10341848_cmds_out.allocateHost();
    cfg_Aggregate_TD_10341848_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_10374469_cmds;
    cfg_JOIN_INNER_TD_10374469_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10374469_gqe_join (cfg_JOIN_INNER_TD_10374469_cmds.cmd);
    cfg_JOIN_INNER_TD_10374469_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_10249456_cmds;
    cfg_Aggregate_TD_10249456_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_10249456_gqe_aggr(cfg_Aggregate_TD_10249456_cmds.cmd);
    cfg_Aggregate_TD_10249456_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_10249456_cmds_out;
    cfg_Aggregate_TD_10249456_cmds_out.allocateHost();
    cfg_Aggregate_TD_10249456_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_10204601_cmds;
    cfg_JOIN_INNER_TD_10204601_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10204601_gqe_join (cfg_JOIN_INNER_TD_10204601_cmds.cmd);
    cfg_JOIN_INNER_TD_10204601_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_1016926_cmds;
    cfg_Aggregate_TD_1016926_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_1016926_gqe_aggr(cfg_Aggregate_TD_1016926_cmds.cmd);
    cfg_Aggregate_TD_1016926_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_1016926_cmds_out;
    cfg_Aggregate_TD_1016926_cmds_out.allocateHost();
    cfg_Aggregate_TD_1016926_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_10188262_cmds;
    cfg_JOIN_INNER_TD_10188262_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10188262_gqe_join (cfg_JOIN_INNER_TD_10188262_cmds.cmd);
    cfg_JOIN_INNER_TD_10188262_cmds.allocateDevBuffer(context_h, 32);
    AggrCfgCmd cfg_Aggregate_TD_10591488_cmds;
    cfg_Aggregate_TD_10591488_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_10591488_gqe_aggr(cfg_Aggregate_TD_10591488_cmds.cmd);
    cfg_Aggregate_TD_10591488_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_10591488_cmds_out;
    cfg_Aggregate_TD_10591488_cmds_out.allocateHost();
    cfg_Aggregate_TD_10591488_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_11633428_cmds;
    cfg_JOIN_INNER_TD_11633428_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_11633428_gqe_join (cfg_JOIN_INNER_TD_11633428_cmds.cmd);
    cfg_JOIN_INNER_TD_11633428_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_1149247_cmds;
    cfg_JOIN_INNER_TD_1149247_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1149247_gqe_join (cfg_JOIN_INNER_TD_1149247_cmds.cmd);
    cfg_JOIN_INNER_TD_1149247_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_11215925_cmds;
    cfg_JOIN_INNER_TD_11215925_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_11215925_gqe_join (cfg_JOIN_INNER_TD_11215925_cmds.cmd);
    cfg_JOIN_INNER_TD_11215925_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_1170542_cmds;
    cfg_JOIN_INNER_TD_1170542_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_1170542_gqe_join (cfg_JOIN_INNER_TD_1170542_cmds.cmd);
    cfg_JOIN_INNER_TD_1170542_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_12755212_cmds;
    cfg_JOIN_INNER_TD_12755212_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_12755212_gqe_join (cfg_JOIN_INNER_TD_12755212_cmds.cmd);
    cfg_JOIN_INNER_TD_12755212_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_12841345_cmds;
    cfg_JOIN_INNER_TD_12841345_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_12841345_gqe_join (cfg_JOIN_INNER_TD_12841345_cmds.cmd);
    cfg_JOIN_INNER_TD_12841345_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_12643264_cmds;
    cfg_JOIN_INNER_TD_12643264_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_12643264_gqe_join (cfg_JOIN_INNER_TD_12643264_cmds.cmd);
    cfg_JOIN_INNER_TD_12643264_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_12251980_cmds;
    cfg_JOIN_INNER_TD_12251980_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_12251980_gqe_join (cfg_JOIN_INNER_TD_12251980_cmds.cmd);
    cfg_JOIN_INNER_TD_12251980_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_13351568_cmds;
    cfg_JOIN_INNER_TD_13351568_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_13351568_gqe_join (cfg_JOIN_INNER_TD_13351568_cmds.cmd);
    cfg_JOIN_INNER_TD_13351568_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_13291829_cmds;
    cfg_JOIN_INNER_TD_13291829_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_13291829_gqe_join (cfg_JOIN_INNER_TD_13291829_cmds.cmd);
    cfg_JOIN_INNER_TD_13291829_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_LEFTSEMI_TD_7744073;
    krnl_JOIN_LEFTSEMI_TD_7744073 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_7744073.setup(tbl_Filter_TD_8827897_output, tbl_JOIN_LEFTSEMI_TD_8979751_output, tbl_JOIN_LEFTSEMI_TD_7744073_output, cfg_JOIN_LEFTSEMI_TD_7744073_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_7974833;
    krnl_JOIN_LEFTSEMI_TD_7974833 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_7974833.setup(tbl_Filter_TD_8911589_output, tbl_JOIN_LEFTSEMI_TD_8558332_output, tbl_JOIN_LEFTSEMI_TD_7974833_output, cfg_JOIN_LEFTSEMI_TD_7974833_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_8979751;
    krnl_JOIN_LEFTSEMI_TD_8979751 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_8979751.setup(tbl_Filter_TD_9214268_output, tbl_Filter_TD_9571006_output, tbl_JOIN_LEFTSEMI_TD_8979751_output, cfg_JOIN_LEFTSEMI_TD_8979751_cmds, buftmp_h);
    krnlEngine krnl_JOIN_LEFTSEMI_TD_8558332;
    krnl_JOIN_LEFTSEMI_TD_8558332 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_LEFTSEMI_TD_8558332.setup(tbl_Filter_TD_9188431_output, tbl_Filter_TD_9116027_output, tbl_JOIN_LEFTSEMI_TD_8558332_output, cfg_JOIN_LEFTSEMI_TD_8558332_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_9642948;
    krnl_Aggregate_TD_9642948 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_9642948.setup(tbl_JOIN_INNER_TD_10729061_output, tbl_Aggregate_TD_9642948_output_preprocess, cfg_Aggregate_TD_9642948_cmds, cfg_Aggregate_TD_9642948_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_9662598;
    krnl_Aggregate_TD_9662598 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_9662598.setup(tbl_JOIN_INNER_TD_10374469_output, tbl_Aggregate_TD_9662598_output_preprocess, cfg_Aggregate_TD_9662598_cmds, cfg_Aggregate_TD_9662598_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_997594;
    krnl_Aggregate_TD_997594 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_997594.setup(tbl_JOIN_INNER_TD_10204601_output, tbl_Aggregate_TD_997594_output_preprocess, cfg_Aggregate_TD_997594_cmds, cfg_Aggregate_TD_997594_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_9540992;
    krnl_Aggregate_TD_9540992 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_9540992.setup(tbl_JOIN_INNER_TD_10188262_output, tbl_Aggregate_TD_9540992_output_preprocess, cfg_Aggregate_TD_9540992_cmds, cfg_Aggregate_TD_9540992_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_10729061;
    krnl_JOIN_INNER_TD_10729061 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10729061.setup(tbl_Filter_TD_11962588_output, tbl_Filter_TD_11431283_output, tbl_JOIN_INNER_TD_10729061_output_preprocess, cfg_JOIN_INNER_TD_10729061_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_10341848;
    krnl_Aggregate_TD_10341848 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_10341848.setup(tbl_JOIN_INNER_TD_11633428_output, tbl_Aggregate_TD_10341848_output_preprocess, cfg_Aggregate_TD_10341848_cmds, cfg_Aggregate_TD_10341848_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_10374469;
    krnl_JOIN_INNER_TD_10374469 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10374469.setup(tbl_Filter_TD_11360698_output, tbl_Filter_TD_11405369_output, tbl_JOIN_INNER_TD_10374469_output_preprocess, cfg_JOIN_INNER_TD_10374469_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_10249456;
    krnl_Aggregate_TD_10249456 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_10249456.setup(tbl_JOIN_INNER_TD_1149247_output, tbl_Aggregate_TD_10249456_output_preprocess, cfg_Aggregate_TD_10249456_cmds, cfg_Aggregate_TD_10249456_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_10204601;
    krnl_JOIN_INNER_TD_10204601 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10204601.setup(tbl_Filter_TD_11362879_output, tbl_Filter_TD_11136802_output, tbl_JOIN_INNER_TD_10204601_output_preprocess, cfg_JOIN_INNER_TD_10204601_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_1016926;
    krnl_Aggregate_TD_1016926 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_1016926.setup(tbl_JOIN_INNER_TD_11215925_output, tbl_Aggregate_TD_1016926_output_preprocess, cfg_Aggregate_TD_1016926_cmds, cfg_Aggregate_TD_1016926_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_10188262;
    krnl_JOIN_INNER_TD_10188262 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10188262.setup(tbl_Filter_TD_11820471_output, tbl_Filter_TD_11809128_output, tbl_JOIN_INNER_TD_10188262_output_preprocess, cfg_JOIN_INNER_TD_10188262_cmds, buftmp_h);
    AggrKrnlEngine krnl_Aggregate_TD_10591488;
    krnl_Aggregate_TD_10591488 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_10591488.setup(tbl_JOIN_INNER_TD_1170542_output, tbl_Aggregate_TD_10591488_output_preprocess, cfg_Aggregate_TD_10591488_cmds, cfg_Aggregate_TD_10591488_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_11633428;
    krnl_JOIN_INNER_TD_11633428 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_11633428.setup(tbl_JOIN_INNER_TD_12755212_output, tbl_Filter_TD_1250278_output, tbl_JOIN_INNER_TD_11633428_output_preprocess, cfg_JOIN_INNER_TD_11633428_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_1149247;
    krnl_JOIN_INNER_TD_1149247 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1149247.setup(tbl_JOIN_INNER_TD_12841345_output, tbl_Filter_TD_12982527_output, tbl_JOIN_INNER_TD_1149247_output_preprocess, cfg_JOIN_INNER_TD_1149247_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_11215925;
    krnl_JOIN_INNER_TD_11215925 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_11215925.setup(tbl_JOIN_INNER_TD_12643264_output, tbl_Filter_TD_12414135_output, tbl_JOIN_INNER_TD_11215925_output_preprocess, cfg_JOIN_INNER_TD_11215925_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_1170542;
    krnl_JOIN_INNER_TD_1170542 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_1170542.setup(tbl_JOIN_INNER_TD_12251980_output, tbl_Filter_TD_12980403_output, tbl_JOIN_INNER_TD_1170542_output_preprocess, cfg_JOIN_INNER_TD_1170542_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_12755212;
    krnl_JOIN_INNER_TD_12755212 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_12755212.setup(tbl_Filter_TD_13661488_output, tbl_Filter_TD_13959534_output, tbl_JOIN_INNER_TD_12755212_output, cfg_JOIN_INNER_TD_12755212_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_12841345;
    krnl_JOIN_INNER_TD_12841345 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_12841345.setup(tbl_Filter_TD_13860804_output, tbl_Filter_TD_13199027_output, tbl_JOIN_INNER_TD_12841345_output, cfg_JOIN_INNER_TD_12841345_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_12643264;
    krnl_JOIN_INNER_TD_12643264 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_12643264.setup(tbl_Filter_TD_13259639_output, tbl_Filter_TD_13628174_output, tbl_JOIN_INNER_TD_12643264_output, cfg_JOIN_INNER_TD_12643264_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_12251980;
    krnl_JOIN_INNER_TD_12251980 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_12251980.setup(tbl_Filter_TD_13767647_output, tbl_Filter_TD_13380660_output, tbl_JOIN_INNER_TD_12251980_output, cfg_JOIN_INNER_TD_12251980_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_13351568;
    krnl_JOIN_INNER_TD_13351568 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_13351568.setup(tbl_Filter_TD_14164835_output, tbl_Filter_TD_14996937_output, tbl_JOIN_INNER_TD_13351568_output, cfg_JOIN_INNER_TD_13351568_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_13291829;
    krnl_JOIN_INNER_TD_13291829 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_13291829.setup(tbl_Filter_TD_14347231_output, tbl_Filter_TD_14202005_output, tbl_JOIN_INNER_TD_13291829_output, cfg_JOIN_INNER_TD_13291829_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_LEFTSEMI_TD_7744073;
    trans_JOIN_LEFTSEMI_TD_7744073.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_7744073.add(&(cfg_JOIN_LEFTSEMI_TD_7744073_cmds));
    transEngine trans_JOIN_LEFTSEMI_TD_7744073_out;
    trans_JOIN_LEFTSEMI_TD_7744073_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_7974833;
    trans_JOIN_LEFTSEMI_TD_7974833.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_7974833.add(&(cfg_JOIN_LEFTSEMI_TD_7974833_cmds));
    transEngine trans_JOIN_LEFTSEMI_TD_7974833_out;
    trans_JOIN_LEFTSEMI_TD_7974833_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_8979751;
    trans_JOIN_LEFTSEMI_TD_8979751.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_8979751.add(&(cfg_JOIN_LEFTSEMI_TD_8979751_cmds));
    q_h.finish();
    transEngine trans_JOIN_LEFTSEMI_TD_8558332;
    trans_JOIN_LEFTSEMI_TD_8558332.setq(q_h);
    trans_JOIN_LEFTSEMI_TD_8558332.add(&(cfg_JOIN_LEFTSEMI_TD_8558332_cmds));
    q_h.finish();
    transEngine trans_Aggregate_TD_9642948;
    trans_Aggregate_TD_9642948.setq(q_a);
    trans_Aggregate_TD_9642948.add(&(cfg_Aggregate_TD_9642948_cmds));
    transEngine trans_Aggregate_TD_9642948_out;
    trans_Aggregate_TD_9642948_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_9662598;
    trans_Aggregate_TD_9662598.setq(q_a);
    trans_Aggregate_TD_9662598.add(&(cfg_Aggregate_TD_9662598_cmds));
    transEngine trans_Aggregate_TD_9662598_out;
    trans_Aggregate_TD_9662598_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_997594;
    trans_Aggregate_TD_997594.setq(q_a);
    trans_Aggregate_TD_997594.add(&(cfg_Aggregate_TD_997594_cmds));
    transEngine trans_Aggregate_TD_997594_out;
    trans_Aggregate_TD_997594_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_9540992;
    trans_Aggregate_TD_9540992.setq(q_a);
    trans_Aggregate_TD_9540992.add(&(cfg_Aggregate_TD_9540992_cmds));
    transEngine trans_Aggregate_TD_9540992_out;
    trans_Aggregate_TD_9540992_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_10729061;
    trans_JOIN_INNER_TD_10729061.setq(q_h);
    trans_JOIN_INNER_TD_10729061.add(&(cfg_JOIN_INNER_TD_10729061_cmds));
    transEngine trans_JOIN_INNER_TD_10729061_out;
    trans_JOIN_INNER_TD_10729061_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_10341848;
    trans_Aggregate_TD_10341848.setq(q_a);
    trans_Aggregate_TD_10341848.add(&(cfg_Aggregate_TD_10341848_cmds));
    transEngine trans_Aggregate_TD_10341848_out;
    trans_Aggregate_TD_10341848_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_10374469;
    trans_JOIN_INNER_TD_10374469.setq(q_h);
    trans_JOIN_INNER_TD_10374469.add(&(cfg_JOIN_INNER_TD_10374469_cmds));
    transEngine trans_JOIN_INNER_TD_10374469_out;
    trans_JOIN_INNER_TD_10374469_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_10249456;
    trans_Aggregate_TD_10249456.setq(q_a);
    trans_Aggregate_TD_10249456.add(&(cfg_Aggregate_TD_10249456_cmds));
    transEngine trans_Aggregate_TD_10249456_out;
    trans_Aggregate_TD_10249456_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_10204601;
    trans_JOIN_INNER_TD_10204601.setq(q_h);
    trans_JOIN_INNER_TD_10204601.add(&(cfg_JOIN_INNER_TD_10204601_cmds));
    transEngine trans_JOIN_INNER_TD_10204601_out;
    trans_JOIN_INNER_TD_10204601_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_1016926;
    trans_Aggregate_TD_1016926.setq(q_a);
    trans_Aggregate_TD_1016926.add(&(cfg_Aggregate_TD_1016926_cmds));
    transEngine trans_Aggregate_TD_1016926_out;
    trans_Aggregate_TD_1016926_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_10188262;
    trans_JOIN_INNER_TD_10188262.setq(q_h);
    trans_JOIN_INNER_TD_10188262.add(&(cfg_JOIN_INNER_TD_10188262_cmds));
    transEngine trans_JOIN_INNER_TD_10188262_out;
    trans_JOIN_INNER_TD_10188262_out.setq(q_h);
    q_h.finish();
    transEngine trans_Aggregate_TD_10591488;
    trans_Aggregate_TD_10591488.setq(q_a);
    trans_Aggregate_TD_10591488.add(&(cfg_Aggregate_TD_10591488_cmds));
    transEngine trans_Aggregate_TD_10591488_out;
    trans_Aggregate_TD_10591488_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_11633428;
    trans_JOIN_INNER_TD_11633428.setq(q_h);
    trans_JOIN_INNER_TD_11633428.add(&(cfg_JOIN_INNER_TD_11633428_cmds));
    transEngine trans_JOIN_INNER_TD_11633428_out;
    trans_JOIN_INNER_TD_11633428_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_1149247;
    trans_JOIN_INNER_TD_1149247.setq(q_h);
    trans_JOIN_INNER_TD_1149247.add(&(cfg_JOIN_INNER_TD_1149247_cmds));
    transEngine trans_JOIN_INNER_TD_1149247_out;
    trans_JOIN_INNER_TD_1149247_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_11215925;
    trans_JOIN_INNER_TD_11215925.setq(q_h);
    trans_JOIN_INNER_TD_11215925.add(&(cfg_JOIN_INNER_TD_11215925_cmds));
    transEngine trans_JOIN_INNER_TD_11215925_out;
    trans_JOIN_INNER_TD_11215925_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_1170542;
    trans_JOIN_INNER_TD_1170542.setq(q_h);
    trans_JOIN_INNER_TD_1170542.add(&(cfg_JOIN_INNER_TD_1170542_cmds));
    transEngine trans_JOIN_INNER_TD_1170542_out;
    trans_JOIN_INNER_TD_1170542_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_12755212;
    trans_JOIN_INNER_TD_12755212.setq(q_h);
    trans_JOIN_INNER_TD_12755212.add(&(cfg_JOIN_INNER_TD_12755212_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_12841345;
    trans_JOIN_INNER_TD_12841345.setq(q_h);
    trans_JOIN_INNER_TD_12841345.add(&(cfg_JOIN_INNER_TD_12841345_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_12643264;
    trans_JOIN_INNER_TD_12643264.setq(q_h);
    trans_JOIN_INNER_TD_12643264.add(&(cfg_JOIN_INNER_TD_12643264_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_12251980;
    trans_JOIN_INNER_TD_12251980.setq(q_h);
    trans_JOIN_INNER_TD_12251980.add(&(cfg_JOIN_INNER_TD_12251980_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_13351568;
    trans_JOIN_INNER_TD_13351568.setq(q_h);
    trans_JOIN_INNER_TD_13351568.add(&(cfg_JOIN_INNER_TD_13351568_cmds));
    transEngine trans_JOIN_INNER_TD_13351568_out;
    trans_JOIN_INNER_TD_13351568_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_13291829;
    trans_JOIN_INNER_TD_13291829.setq(q_h);
    trans_JOIN_INNER_TD_13291829.add(&(cfg_JOIN_INNER_TD_13291829_cmds));
    transEngine trans_JOIN_INNER_TD_13291829_out;
    trans_JOIN_INNER_TD_13291829_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_7744073;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_7744073;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_7744073;
    events_h2d_wr_JOIN_LEFTSEMI_TD_7744073.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_7744073.resize(1);
    events_JOIN_LEFTSEMI_TD_7744073.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_7744073;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_7744073;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_7974833;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_7974833;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_7974833;
    events_h2d_wr_JOIN_LEFTSEMI_TD_7974833.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_7974833.resize(1);
    events_JOIN_LEFTSEMI_TD_7974833.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_7974833;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_7974833;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_8979751;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_8979751;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_8979751;
    events_h2d_wr_JOIN_LEFTSEMI_TD_8979751.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_8979751.resize(1);
    events_JOIN_LEFTSEMI_TD_8979751.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_8979751;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_8979751;
    std::vector<cl::Event> events_h2d_wr_JOIN_LEFTSEMI_TD_8558332;
    std::vector<cl::Event> events_d2h_rd_JOIN_LEFTSEMI_TD_8558332;
    std::vector<cl::Event> events_JOIN_LEFTSEMI_TD_8558332;
    events_h2d_wr_JOIN_LEFTSEMI_TD_8558332.resize(1);
    events_d2h_rd_JOIN_LEFTSEMI_TD_8558332.resize(1);
    events_JOIN_LEFTSEMI_TD_8558332.resize(1);
    std::vector<cl::Event> events_grp_JOIN_LEFTSEMI_TD_8558332;
    std::vector<cl::Event> prev_events_grp_JOIN_LEFTSEMI_TD_8558332;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_9642948;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_9642948;
    std::vector<cl::Event> events_Aggregate_TD_9642948;
    events_h2d_wr_Aggregate_TD_9642948.resize(1);
    events_d2h_rd_Aggregate_TD_9642948.resize(1);
    events_Aggregate_TD_9642948.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_9642948;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_9642948;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_9662598;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_9662598;
    std::vector<cl::Event> events_Aggregate_TD_9662598;
    events_h2d_wr_Aggregate_TD_9662598.resize(1);
    events_d2h_rd_Aggregate_TD_9662598.resize(1);
    events_Aggregate_TD_9662598.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_9662598;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_9662598;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_997594;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_997594;
    std::vector<cl::Event> events_Aggregate_TD_997594;
    events_h2d_wr_Aggregate_TD_997594.resize(1);
    events_d2h_rd_Aggregate_TD_997594.resize(1);
    events_Aggregate_TD_997594.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_997594;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_997594;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_9540992;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_9540992;
    std::vector<cl::Event> events_Aggregate_TD_9540992;
    events_h2d_wr_Aggregate_TD_9540992.resize(1);
    events_d2h_rd_Aggregate_TD_9540992.resize(1);
    events_Aggregate_TD_9540992.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_9540992;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_9540992;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10729061;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10729061;
    std::vector<cl::Event> events_JOIN_INNER_TD_10729061;
    events_h2d_wr_JOIN_INNER_TD_10729061.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10729061.resize(1);
    events_JOIN_INNER_TD_10729061.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10729061;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10729061;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_10341848;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_10341848;
    std::vector<cl::Event> events_Aggregate_TD_10341848;
    events_h2d_wr_Aggregate_TD_10341848.resize(1);
    events_d2h_rd_Aggregate_TD_10341848.resize(1);
    events_Aggregate_TD_10341848.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_10341848;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_10341848;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10374469;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10374469;
    std::vector<cl::Event> events_JOIN_INNER_TD_10374469;
    events_h2d_wr_JOIN_INNER_TD_10374469.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10374469.resize(1);
    events_JOIN_INNER_TD_10374469.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10374469;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10374469;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_10249456;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_10249456;
    std::vector<cl::Event> events_Aggregate_TD_10249456;
    events_h2d_wr_Aggregate_TD_10249456.resize(1);
    events_d2h_rd_Aggregate_TD_10249456.resize(1);
    events_Aggregate_TD_10249456.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_10249456;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_10249456;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10204601;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10204601;
    std::vector<cl::Event> events_JOIN_INNER_TD_10204601;
    events_h2d_wr_JOIN_INNER_TD_10204601.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10204601.resize(1);
    events_JOIN_INNER_TD_10204601.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10204601;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10204601;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_1016926;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_1016926;
    std::vector<cl::Event> events_Aggregate_TD_1016926;
    events_h2d_wr_Aggregate_TD_1016926.resize(1);
    events_d2h_rd_Aggregate_TD_1016926.resize(1);
    events_Aggregate_TD_1016926.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_1016926;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_1016926;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10188262;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10188262;
    std::vector<cl::Event> events_JOIN_INNER_TD_10188262;
    events_h2d_wr_JOIN_INNER_TD_10188262.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10188262.resize(1);
    events_JOIN_INNER_TD_10188262.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10188262;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10188262;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_10591488;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_10591488;
    std::vector<cl::Event> events_Aggregate_TD_10591488;
    events_h2d_wr_Aggregate_TD_10591488.resize(1);
    events_d2h_rd_Aggregate_TD_10591488.resize(1);
    events_Aggregate_TD_10591488.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_10591488;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_10591488;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_11633428;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_11633428;
    std::vector<cl::Event> events_JOIN_INNER_TD_11633428;
    events_h2d_wr_JOIN_INNER_TD_11633428.resize(1);
    events_d2h_rd_JOIN_INNER_TD_11633428.resize(1);
    events_JOIN_INNER_TD_11633428.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_11633428;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_11633428;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1149247;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1149247;
    std::vector<cl::Event> events_JOIN_INNER_TD_1149247;
    events_h2d_wr_JOIN_INNER_TD_1149247.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1149247.resize(1);
    events_JOIN_INNER_TD_1149247.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1149247;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1149247;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_11215925;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_11215925;
    std::vector<cl::Event> events_JOIN_INNER_TD_11215925;
    events_h2d_wr_JOIN_INNER_TD_11215925.resize(1);
    events_d2h_rd_JOIN_INNER_TD_11215925.resize(1);
    events_JOIN_INNER_TD_11215925.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_11215925;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_11215925;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_1170542;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_1170542;
    std::vector<cl::Event> events_JOIN_INNER_TD_1170542;
    events_h2d_wr_JOIN_INNER_TD_1170542.resize(1);
    events_d2h_rd_JOIN_INNER_TD_1170542.resize(1);
    events_JOIN_INNER_TD_1170542.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_1170542;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_1170542;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_12755212;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_12755212;
    std::vector<cl::Event> events_JOIN_INNER_TD_12755212;
    events_h2d_wr_JOIN_INNER_TD_12755212.resize(1);
    events_d2h_rd_JOIN_INNER_TD_12755212.resize(1);
    events_JOIN_INNER_TD_12755212.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_12755212;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_12755212;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_12841345;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_12841345;
    std::vector<cl::Event> events_JOIN_INNER_TD_12841345;
    events_h2d_wr_JOIN_INNER_TD_12841345.resize(1);
    events_d2h_rd_JOIN_INNER_TD_12841345.resize(1);
    events_JOIN_INNER_TD_12841345.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_12841345;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_12841345;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_12643264;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_12643264;
    std::vector<cl::Event> events_JOIN_INNER_TD_12643264;
    events_h2d_wr_JOIN_INNER_TD_12643264.resize(1);
    events_d2h_rd_JOIN_INNER_TD_12643264.resize(1);
    events_JOIN_INNER_TD_12643264.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_12643264;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_12643264;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_12251980;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_12251980;
    std::vector<cl::Event> events_JOIN_INNER_TD_12251980;
    events_h2d_wr_JOIN_INNER_TD_12251980.resize(1);
    events_d2h_rd_JOIN_INNER_TD_12251980.resize(1);
    events_JOIN_INNER_TD_12251980.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_12251980;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_12251980;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_13351568;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_13351568;
    std::vector<cl::Event> events_JOIN_INNER_TD_13351568;
    events_h2d_wr_JOIN_INNER_TD_13351568.resize(1);
    events_d2h_rd_JOIN_INNER_TD_13351568.resize(1);
    events_JOIN_INNER_TD_13351568.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_13351568;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_13351568;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_13291829;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_13291829;
    std::vector<cl::Event> events_JOIN_INNER_TD_13291829;
    events_h2d_wr_JOIN_INNER_TD_13291829.resize(1);
    events_d2h_rd_JOIN_INNER_TD_13291829.resize(1);
    events_JOIN_INNER_TD_13291829.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_13291829;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_13291829;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_14_767172_s, tv_r_Filter_14_767172_e;
    gettimeofday(&tv_r_Filter_14_767172_s, 0);
    SW_Filter_TD_14202005(tbl_SerializeFromObject_TD_15658259_input, tbl_Filter_TD_14202005_output);
    gettimeofday(&tv_r_Filter_14_767172_e, 0);

    struct timeval tv_r_Filter_14_113162_s, tv_r_Filter_14_113162_e;
    gettimeofday(&tv_r_Filter_14_113162_s, 0);
    SW_Filter_TD_14347231(tbl_SerializeFromObject_TD_15417621_input, tbl_Filter_TD_14347231_output);
    gettimeofday(&tv_r_Filter_14_113162_e, 0);

    struct timeval tv_r_Filter_14_293293_s, tv_r_Filter_14_293293_e;
    gettimeofday(&tv_r_Filter_14_293293_s, 0);
    SW_Filter_TD_14996937(tbl_SerializeFromObject_TD_1541384_input, tbl_Filter_TD_14996937_output);
    gettimeofday(&tv_r_Filter_14_293293_e, 0);

    struct timeval tv_r_Filter_14_407514_s, tv_r_Filter_14_407514_e;
    gettimeofday(&tv_r_Filter_14_407514_s, 0);
    SW_Filter_TD_14164835(tbl_SerializeFromObject_TD_15164172_input, tbl_Filter_TD_14164835_output);
    gettimeofday(&tv_r_Filter_14_407514_e, 0);

    struct timeval tv_r_Filter_13_326251_s, tv_r_Filter_13_326251_e;
    gettimeofday(&tv_r_Filter_13_326251_s, 0);
    SW_Filter_TD_13380660(tbl_SerializeFromObject_TD_14632060_input, tbl_Filter_TD_13380660_output);
    gettimeofday(&tv_r_Filter_13_326251_e, 0);

    struct timeval tv_r_Filter_13_534466_s, tv_r_Filter_13_534466_e;
    gettimeofday(&tv_r_Filter_13_534466_s, 0);
    SW_Filter_TD_13767647(tbl_SerializeFromObject_TD_14241048_input, tbl_Filter_TD_13767647_output);
    gettimeofday(&tv_r_Filter_13_534466_e, 0);

    struct timeval tv_r_Filter_13_830612_s, tv_r_Filter_13_830612_e;
    gettimeofday(&tv_r_Filter_13_830612_s, 0);
    SW_Filter_TD_13628174(tbl_SerializeFromObject_TD_14470233_input, tbl_Filter_TD_13628174_output);
    gettimeofday(&tv_r_Filter_13_830612_e, 0);

    struct timeval tv_r_Filter_13_73703_s, tv_r_Filter_13_73703_e;
    gettimeofday(&tv_r_Filter_13_73703_s, 0);
    SW_Filter_TD_13259639(tbl_SerializeFromObject_TD_14203114_input, tbl_Filter_TD_13259639_output);
    gettimeofday(&tv_r_Filter_13_73703_e, 0);

    struct timeval tv_r_Filter_13_328856_s, tv_r_Filter_13_328856_e;
    gettimeofday(&tv_r_Filter_13_328856_s, 0);
    SW_Filter_TD_13252891(tbl_SerializeFromObject_TD_14954139_input, tbl_Filter_TD_13252891_output);
    gettimeofday(&tv_r_Filter_13_328856_e, 0);

    struct timeval tv_r_JOIN_INNER_13_114749_s, tv_r_JOIN_INNER_13_114749_e;
    gettimeofday(&tv_r_JOIN_INNER_13_114749_s, 0);
    trans_JOIN_INNER_TD_13291829.add(&(tbl_Filter_TD_14347231_output));
    trans_JOIN_INNER_TD_13291829.add(&(tbl_Filter_TD_14202005_output));
    trans_JOIN_INNER_TD_13291829.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_13291829), &(events_h2d_wr_JOIN_INNER_TD_13291829[0]));
    events_grp_JOIN_INNER_TD_13291829.push_back(events_h2d_wr_JOIN_INNER_TD_13291829[0]);
    krnl_JOIN_INNER_TD_13291829.run(0, &(events_grp_JOIN_INNER_TD_13291829), &(events_JOIN_INNER_TD_13291829[0]));
    
    trans_JOIN_INNER_TD_13291829_out.add(&(tbl_JOIN_INNER_TD_13291829_output));
    trans_JOIN_INNER_TD_13291829_out.dev2host(0, &(events_JOIN_INNER_TD_13291829), &(events_d2h_rd_JOIN_INNER_TD_13291829[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_13_114749_e, 0);

    struct timeval tv_r_Filter_13_798539_s, tv_r_Filter_13_798539_e;
    gettimeofday(&tv_r_Filter_13_798539_s, 0);
    SW_Filter_TD_13199027(tbl_SerializeFromObject_TD_14785688_input, tbl_Filter_TD_13199027_output);
    gettimeofday(&tv_r_Filter_13_798539_e, 0);

    struct timeval tv_r_Filter_13_147462_s, tv_r_Filter_13_147462_e;
    gettimeofday(&tv_r_Filter_13_147462_s, 0);
    SW_Filter_TD_13860804(tbl_SerializeFromObject_TD_14687258_input, tbl_Filter_TD_13860804_output);
    gettimeofday(&tv_r_Filter_13_147462_e, 0);

    struct timeval tv_r_Filter_13_912144_s, tv_r_Filter_13_912144_e;
    gettimeofday(&tv_r_Filter_13_912144_s, 0);
    SW_Filter_TD_13959534(tbl_SerializeFromObject_TD_14655597_input, tbl_Filter_TD_13959534_output);
    gettimeofday(&tv_r_Filter_13_912144_e, 0);

    struct timeval tv_r_Filter_13_39430_s, tv_r_Filter_13_39430_e;
    gettimeofday(&tv_r_Filter_13_39430_s, 0);
    SW_Filter_TD_13661488(tbl_SerializeFromObject_TD_14990777_input, tbl_Filter_TD_13661488_output);
    gettimeofday(&tv_r_Filter_13_39430_e, 0);

    struct timeval tv_r_Filter_13_576079_s, tv_r_Filter_13_576079_e;
    gettimeofday(&tv_r_Filter_13_576079_s, 0);
    SW_Filter_TD_13754626(tbl_SerializeFromObject_TD_14705754_input, tbl_Filter_TD_13754626_output);
    gettimeofday(&tv_r_Filter_13_576079_e, 0);

    struct timeval tv_r_JOIN_INNER_13_314985_s, tv_r_JOIN_INNER_13_314985_e;
    gettimeofday(&tv_r_JOIN_INNER_13_314985_s, 0);
    trans_JOIN_INNER_TD_13351568.add(&(tbl_Filter_TD_14164835_output));
    trans_JOIN_INNER_TD_13351568.add(&(tbl_Filter_TD_14996937_output));
    trans_JOIN_INNER_TD_13351568.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_13351568), &(events_h2d_wr_JOIN_INNER_TD_13351568[0]));
    events_grp_JOIN_INNER_TD_13351568.push_back(events_h2d_wr_JOIN_INNER_TD_13351568[0]);
    krnl_JOIN_INNER_TD_13351568.run(0, &(events_grp_JOIN_INNER_TD_13351568), &(events_JOIN_INNER_TD_13351568[0]));
    
    trans_JOIN_INNER_TD_13351568_out.add(&(tbl_JOIN_INNER_TD_13351568_output));
    trans_JOIN_INNER_TD_13351568_out.dev2host(0, &(events_JOIN_INNER_TD_13351568), &(events_d2h_rd_JOIN_INNER_TD_13351568[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_13_314985_e, 0);

    struct timeval tv_r_Filter_12_228182_s, tv_r_Filter_12_228182_e;
    gettimeofday(&tv_r_Filter_12_228182_s, 0);
    SW_Filter_TD_12980403(tbl_SerializeFromObject_TD_13930581_input, tbl_Filter_TD_12980403_output);
    gettimeofday(&tv_r_Filter_12_228182_e, 0);

    struct timeval tv_r_JOIN_INNER_12_127942_s, tv_r_JOIN_INNER_12_127942_e;
    gettimeofday(&tv_r_JOIN_INNER_12_127942_s, 0);
    trans_JOIN_INNER_TD_12251980.add(&(tbl_Filter_TD_13767647_output));
    trans_JOIN_INNER_TD_12251980.add(&(tbl_Filter_TD_13380660_output));
    trans_JOIN_INNER_TD_12251980.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_12251980), &(events_h2d_wr_JOIN_INNER_TD_12251980[0]));
    events_grp_JOIN_INNER_TD_12251980.push_back(events_h2d_wr_JOIN_INNER_TD_12251980[0]);
    krnl_JOIN_INNER_TD_12251980.run(0, &(events_grp_JOIN_INNER_TD_12251980), &(events_JOIN_INNER_TD_12251980[0]));
    gettimeofday(&tv_r_JOIN_INNER_12_127942_e, 0);

    struct timeval tv_r_Filter_12_130248_s, tv_r_Filter_12_130248_e;
    gettimeofday(&tv_r_Filter_12_130248_s, 0);
    SW_Filter_TD_12414135(tbl_SerializeFromObject_TD_13589383_input, tbl_Filter_TD_12414135_output);
    gettimeofday(&tv_r_Filter_12_130248_e, 0);

    struct timeval tv_r_JOIN_INNER_12_296834_s, tv_r_JOIN_INNER_12_296834_e;
    gettimeofday(&tv_r_JOIN_INNER_12_296834_s, 0);
    trans_JOIN_INNER_TD_12643264.add(&(tbl_Filter_TD_13259639_output));
    trans_JOIN_INNER_TD_12643264.add(&(tbl_Filter_TD_13628174_output));
    trans_JOIN_INNER_TD_12643264.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_12643264), &(events_h2d_wr_JOIN_INNER_TD_12643264[0]));
    events_grp_JOIN_INNER_TD_12643264.push_back(events_h2d_wr_JOIN_INNER_TD_12643264[0]);
    krnl_JOIN_INNER_TD_12643264.run(0, &(events_grp_JOIN_INNER_TD_12643264), &(events_JOIN_INNER_TD_12643264[0]));
    gettimeofday(&tv_r_JOIN_INNER_12_296834_e, 0);

    struct timeval tv_r_JOIN_INNER_12_398409_s, tv_r_JOIN_INNER_12_398409_e;
    gettimeofday(&tv_r_JOIN_INNER_12_398409_s, 0);
    SW_JOIN_INNER_TD_12219972(tbl_JOIN_INNER_TD_13291829_output, tbl_Filter_TD_13252891_output, tbl_JOIN_INNER_TD_12219972_output);
    gettimeofday(&tv_r_JOIN_INNER_12_398409_e, 0);

    struct timeval tv_r_Filter_12_295158_s, tv_r_Filter_12_295158_e;
    gettimeofday(&tv_r_Filter_12_295158_s, 0);
    SW_Filter_TD_12982527(tbl_SerializeFromObject_TD_13870841_input, tbl_Filter_TD_12982527_output);
    gettimeofday(&tv_r_Filter_12_295158_e, 0);

    struct timeval tv_r_JOIN_INNER_12_386615_s, tv_r_JOIN_INNER_12_386615_e;
    gettimeofday(&tv_r_JOIN_INNER_12_386615_s, 0);
    trans_JOIN_INNER_TD_12841345.add(&(tbl_Filter_TD_13860804_output));
    trans_JOIN_INNER_TD_12841345.add(&(tbl_Filter_TD_13199027_output));
    trans_JOIN_INNER_TD_12841345.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_12841345), &(events_h2d_wr_JOIN_INNER_TD_12841345[0]));
    events_grp_JOIN_INNER_TD_12841345.push_back(events_h2d_wr_JOIN_INNER_TD_12841345[0]);
    krnl_JOIN_INNER_TD_12841345.run(0, &(events_grp_JOIN_INNER_TD_12841345), &(events_JOIN_INNER_TD_12841345[0]));
    gettimeofday(&tv_r_JOIN_INNER_12_386615_e, 0);

    struct timeval tv_r_Filter_12_792595_s, tv_r_Filter_12_792595_e;
    gettimeofday(&tv_r_Filter_12_792595_s, 0);
    SW_Filter_TD_1250278(tbl_SerializeFromObject_TD_13158825_input, tbl_Filter_TD_1250278_output);
    gettimeofday(&tv_r_Filter_12_792595_e, 0);

    struct timeval tv_r_JOIN_INNER_12_638954_s, tv_r_JOIN_INNER_12_638954_e;
    gettimeofday(&tv_r_JOIN_INNER_12_638954_s, 0);
    trans_JOIN_INNER_TD_12755212.add(&(tbl_Filter_TD_13661488_output));
    trans_JOIN_INNER_TD_12755212.add(&(tbl_Filter_TD_13959534_output));
    trans_JOIN_INNER_TD_12755212.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_12755212), &(events_h2d_wr_JOIN_INNER_TD_12755212[0]));
    events_grp_JOIN_INNER_TD_12755212.push_back(events_h2d_wr_JOIN_INNER_TD_12755212[0]);
    krnl_JOIN_INNER_TD_12755212.run(0, &(events_grp_JOIN_INNER_TD_12755212), &(events_JOIN_INNER_TD_12755212[0]));
    gettimeofday(&tv_r_JOIN_INNER_12_638954_e, 0);

    struct timeval tv_r_JOIN_INNER_12_113662_s, tv_r_JOIN_INNER_12_113662_e;
    gettimeofday(&tv_r_JOIN_INNER_12_113662_s, 0);
    SW_JOIN_INNER_TD_12490786(tbl_JOIN_INNER_TD_13351568_output, tbl_Filter_TD_13754626_output, tbl_JOIN_INNER_TD_12490786_output);
    gettimeofday(&tv_r_JOIN_INNER_12_113662_e, 0);

    struct timeval tv_r_JOIN_INNER_11_74764_s, tv_r_JOIN_INNER_11_74764_e;
    gettimeofday(&tv_r_JOIN_INNER_11_74764_s, 0);
    prev_events_grp_JOIN_INNER_TD_1170542.push_back(events_h2d_wr_JOIN_INNER_TD_12251980[0]);
    trans_JOIN_INNER_TD_1170542.add(&(tbl_Filter_TD_12980403_output));
    trans_JOIN_INNER_TD_1170542.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1170542), &(events_h2d_wr_JOIN_INNER_TD_1170542[0]));
    events_grp_JOIN_INNER_TD_1170542.push_back(events_h2d_wr_JOIN_INNER_TD_1170542[0]);
    events_grp_JOIN_INNER_TD_1170542.push_back(events_JOIN_INNER_TD_12251980[0]);
    krnl_JOIN_INNER_TD_1170542.run(0, &(events_grp_JOIN_INNER_TD_1170542), &(events_JOIN_INNER_TD_1170542[0]));
    
    trans_JOIN_INNER_TD_1170542_out.add(&(tbl_JOIN_INNER_TD_1170542_output_preprocess));
    trans_JOIN_INNER_TD_1170542_out.dev2host(0, &(events_JOIN_INNER_TD_1170542), &(events_d2h_rd_JOIN_INNER_TD_1170542[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_1170542);
    tbl_JOIN_INNER_TD_1170542_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_1170542_output));
    gettimeofday(&tv_r_JOIN_INNER_11_74764_e, 0);

    struct timeval tv_r_Filter_11_119761_s, tv_r_Filter_11_119761_e;
    gettimeofday(&tv_r_Filter_11_119761_s, 0);
    SW_Filter_TD_11809128(tbl_SerializeFromObject_TD_12254236_input, tbl_Filter_TD_11809128_output);
    gettimeofday(&tv_r_Filter_11_119761_e, 0);

    struct timeval tv_r_Filter_11_110588_s, tv_r_Filter_11_110588_e;
    gettimeofday(&tv_r_Filter_11_110588_s, 0);
    SW_Filter_TD_11820471(tbl_SerializeFromObject_TD_12228760_input, tbl_Filter_TD_11820471_output);
    gettimeofday(&tv_r_Filter_11_110588_e, 0);

    struct timeval tv_r_JOIN_INNER_11_607407_s, tv_r_JOIN_INNER_11_607407_e;
    gettimeofday(&tv_r_JOIN_INNER_11_607407_s, 0);
    prev_events_grp_JOIN_INNER_TD_11215925.push_back(events_h2d_wr_JOIN_INNER_TD_12643264[0]);
    trans_JOIN_INNER_TD_11215925.add(&(tbl_Filter_TD_12414135_output));
    trans_JOIN_INNER_TD_11215925.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_11215925), &(events_h2d_wr_JOIN_INNER_TD_11215925[0]));
    events_grp_JOIN_INNER_TD_11215925.push_back(events_h2d_wr_JOIN_INNER_TD_11215925[0]);
    events_grp_JOIN_INNER_TD_11215925.push_back(events_JOIN_INNER_TD_12643264[0]);
    krnl_JOIN_INNER_TD_11215925.run(0, &(events_grp_JOIN_INNER_TD_11215925), &(events_JOIN_INNER_TD_11215925[0]));
    
    trans_JOIN_INNER_TD_11215925_out.add(&(tbl_JOIN_INNER_TD_11215925_output_preprocess));
    trans_JOIN_INNER_TD_11215925_out.dev2host(0, &(events_JOIN_INNER_TD_11215925), &(events_d2h_rd_JOIN_INNER_TD_11215925[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_11215925);
    tbl_JOIN_INNER_TD_11215925_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_11215925_output));
    gettimeofday(&tv_r_JOIN_INNER_11_607407_e, 0);

    struct timeval tv_r_Filter_11_950676_s, tv_r_Filter_11_950676_e;
    gettimeofday(&tv_r_Filter_11_950676_s, 0);
    SW_Filter_TD_11136802(tbl_SerializeFromObject_TD_12613679_input, tbl_Filter_TD_11136802_output);
    gettimeofday(&tv_r_Filter_11_950676_e, 0);

    struct timeval tv_r_Filter_11_415604_s, tv_r_Filter_11_415604_e;
    gettimeofday(&tv_r_Filter_11_415604_s, 0);
    SW_Filter_TD_11362879(tbl_SerializeFromObject_TD_12869914_input, tbl_Filter_TD_11362879_output);
    gettimeofday(&tv_r_Filter_11_415604_e, 0);

    struct timeval tv_r_Project_11_375556_s, tv_r_Project_11_375556_e;
    gettimeofday(&tv_r_Project_11_375556_s, 0);
    SW_Project_TD_11589783(tbl_JOIN_INNER_TD_12219972_output, tbl_Project_TD_11589783_output);
    gettimeofday(&tv_r_Project_11_375556_e, 0);

    struct timeval tv_r_JOIN_INNER_11_525658_s, tv_r_JOIN_INNER_11_525658_e;
    gettimeofday(&tv_r_JOIN_INNER_11_525658_s, 0);
    prev_events_grp_JOIN_INNER_TD_1149247.push_back(events_h2d_wr_JOIN_INNER_TD_12841345[0]);
    trans_JOIN_INNER_TD_1149247.add(&(tbl_Filter_TD_12982527_output));
    trans_JOIN_INNER_TD_1149247.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_1149247), &(events_h2d_wr_JOIN_INNER_TD_1149247[0]));
    events_grp_JOIN_INNER_TD_1149247.push_back(events_h2d_wr_JOIN_INNER_TD_1149247[0]);
    events_grp_JOIN_INNER_TD_1149247.push_back(events_JOIN_INNER_TD_12841345[0]);
    krnl_JOIN_INNER_TD_1149247.run(0, &(events_grp_JOIN_INNER_TD_1149247), &(events_JOIN_INNER_TD_1149247[0]));
    
    trans_JOIN_INNER_TD_1149247_out.add(&(tbl_JOIN_INNER_TD_1149247_output_preprocess));
    trans_JOIN_INNER_TD_1149247_out.dev2host(0, &(events_JOIN_INNER_TD_1149247), &(events_d2h_rd_JOIN_INNER_TD_1149247[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_1149247);
    tbl_JOIN_INNER_TD_1149247_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_1149247_output));
    gettimeofday(&tv_r_JOIN_INNER_11_525658_e, 0);

    struct timeval tv_r_Filter_11_343568_s, tv_r_Filter_11_343568_e;
    gettimeofday(&tv_r_Filter_11_343568_s, 0);
    SW_Filter_TD_11405369(tbl_SerializeFromObject_TD_12483785_input, tbl_Filter_TD_11405369_output);
    gettimeofday(&tv_r_Filter_11_343568_e, 0);

    struct timeval tv_r_Filter_11_94814_s, tv_r_Filter_11_94814_e;
    gettimeofday(&tv_r_Filter_11_94814_s, 0);
    SW_Filter_TD_11360698(tbl_SerializeFromObject_TD_12265106_input, tbl_Filter_TD_11360698_output);
    gettimeofday(&tv_r_Filter_11_94814_e, 0);

    struct timeval tv_r_JOIN_INNER_11_855408_s, tv_r_JOIN_INNER_11_855408_e;
    gettimeofday(&tv_r_JOIN_INNER_11_855408_s, 0);
    prev_events_grp_JOIN_INNER_TD_11633428.push_back(events_h2d_wr_JOIN_INNER_TD_12755212[0]);
    trans_JOIN_INNER_TD_11633428.add(&(tbl_Filter_TD_1250278_output));
    trans_JOIN_INNER_TD_11633428.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_11633428), &(events_h2d_wr_JOIN_INNER_TD_11633428[0]));
    events_grp_JOIN_INNER_TD_11633428.push_back(events_h2d_wr_JOIN_INNER_TD_11633428[0]);
    events_grp_JOIN_INNER_TD_11633428.push_back(events_JOIN_INNER_TD_12755212[0]);
    krnl_JOIN_INNER_TD_11633428.run(0, &(events_grp_JOIN_INNER_TD_11633428), &(events_JOIN_INNER_TD_11633428[0]));
    
    trans_JOIN_INNER_TD_11633428_out.add(&(tbl_JOIN_INNER_TD_11633428_output_preprocess));
    trans_JOIN_INNER_TD_11633428_out.dev2host(0, &(events_JOIN_INNER_TD_11633428), &(events_d2h_rd_JOIN_INNER_TD_11633428[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_11633428);
    tbl_JOIN_INNER_TD_11633428_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_11633428_output));
    gettimeofday(&tv_r_JOIN_INNER_11_855408_e, 0);

    struct timeval tv_r_Filter_11_932875_s, tv_r_Filter_11_932875_e;
    gettimeofday(&tv_r_Filter_11_932875_s, 0);
    SW_Filter_TD_11431283(tbl_SerializeFromObject_TD_12927837_input, tbl_Filter_TD_11431283_output);
    gettimeofday(&tv_r_Filter_11_932875_e, 0);

    struct timeval tv_r_Filter_11_625121_s, tv_r_Filter_11_625121_e;
    gettimeofday(&tv_r_Filter_11_625121_s, 0);
    SW_Filter_TD_11962588(tbl_SerializeFromObject_TD_12162060_input, tbl_Filter_TD_11962588_output);
    gettimeofday(&tv_r_Filter_11_625121_e, 0);

    struct timeval tv_r_Project_11_130469_s, tv_r_Project_11_130469_e;
    gettimeofday(&tv_r_Project_11_130469_s, 0);
    SW_Project_TD_11601950(tbl_JOIN_INNER_TD_12490786_output, tbl_Project_TD_11601950_output);
    gettimeofday(&tv_r_Project_11_130469_e, 0);

    struct timeval tv_r_Aggregate_10_171604_s, tv_r_Aggregate_10_171604_e;
    gettimeofday(&tv_r_Aggregate_10_171604_s, 0);
    trans_Aggregate_TD_10591488.add(&(tbl_JOIN_INNER_TD_1170542_output));
    trans_Aggregate_TD_10591488.host2dev(0, &(prev_events_grp_Aggregate_TD_10591488), &(events_h2d_wr_Aggregate_TD_10591488[0]));
    events_grp_Aggregate_TD_10591488.push_back(events_h2d_wr_Aggregate_TD_10591488[0]);
    krnl_Aggregate_TD_10591488.run(0, &(events_grp_Aggregate_TD_10591488), &(events_Aggregate_TD_10591488[0]));
    
    trans_Aggregate_TD_10591488_out.add(&(tbl_Aggregate_TD_10591488_output_preprocess));
    trans_Aggregate_TD_10591488_out.dev2host(0, &(events_Aggregate_TD_10591488), &(events_d2h_rd_Aggregate_TD_10591488[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_10591488_consolidate(tbl_Aggregate_TD_10591488_output_preprocess, tbl_Aggregate_TD_10591488_output);
    gettimeofday(&tv_r_Aggregate_10_171604_e, 0);

    struct timeval tv_r_JOIN_INNER_10_49253_s, tv_r_JOIN_INNER_10_49253_e;
    gettimeofday(&tv_r_JOIN_INNER_10_49253_s, 0);
    trans_JOIN_INNER_TD_10188262.add(&(tbl_Filter_TD_11820471_output));
    trans_JOIN_INNER_TD_10188262.add(&(tbl_Filter_TD_11809128_output));
    trans_JOIN_INNER_TD_10188262.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10188262), &(events_h2d_wr_JOIN_INNER_TD_10188262[0]));
    events_grp_JOIN_INNER_TD_10188262.push_back(events_h2d_wr_JOIN_INNER_TD_10188262[0]);
    krnl_JOIN_INNER_TD_10188262.run(0, &(events_grp_JOIN_INNER_TD_10188262), &(events_JOIN_INNER_TD_10188262[0]));
    
    trans_JOIN_INNER_TD_10188262_out.add(&(tbl_JOIN_INNER_TD_10188262_output_preprocess));
    trans_JOIN_INNER_TD_10188262_out.dev2host(0, &(events_JOIN_INNER_TD_10188262), &(events_d2h_rd_JOIN_INNER_TD_10188262[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_10188262);
    tbl_JOIN_INNER_TD_10188262_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_10188262_output));
    gettimeofday(&tv_r_JOIN_INNER_10_49253_e, 0);

    struct timeval tv_r_Aggregate_10_853407_s, tv_r_Aggregate_10_853407_e;
    gettimeofday(&tv_r_Aggregate_10_853407_s, 0);
    trans_Aggregate_TD_1016926.add(&(tbl_JOIN_INNER_TD_11215925_output));
    trans_Aggregate_TD_1016926.host2dev(0, &(prev_events_grp_Aggregate_TD_1016926), &(events_h2d_wr_Aggregate_TD_1016926[0]));
    events_grp_Aggregate_TD_1016926.push_back(events_h2d_wr_Aggregate_TD_1016926[0]);
    krnl_Aggregate_TD_1016926.run(0, &(events_grp_Aggregate_TD_1016926), &(events_Aggregate_TD_1016926[0]));
    
    trans_Aggregate_TD_1016926_out.add(&(tbl_Aggregate_TD_1016926_output_preprocess));
    trans_Aggregate_TD_1016926_out.dev2host(0, &(events_Aggregate_TD_1016926), &(events_d2h_rd_Aggregate_TD_1016926[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_1016926_consolidate(tbl_Aggregate_TD_1016926_output_preprocess, tbl_Aggregate_TD_1016926_output);
    gettimeofday(&tv_r_Aggregate_10_853407_e, 0);

    struct timeval tv_r_JOIN_INNER_10_452735_s, tv_r_JOIN_INNER_10_452735_e;
    gettimeofday(&tv_r_JOIN_INNER_10_452735_s, 0);
    trans_JOIN_INNER_TD_10204601.add(&(tbl_Filter_TD_11362879_output));
    trans_JOIN_INNER_TD_10204601.add(&(tbl_Filter_TD_11136802_output));
    trans_JOIN_INNER_TD_10204601.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10204601), &(events_h2d_wr_JOIN_INNER_TD_10204601[0]));
    events_grp_JOIN_INNER_TD_10204601.push_back(events_h2d_wr_JOIN_INNER_TD_10204601[0]);
    krnl_JOIN_INNER_TD_10204601.run(0, &(events_grp_JOIN_INNER_TD_10204601), &(events_JOIN_INNER_TD_10204601[0]));
    
    trans_JOIN_INNER_TD_10204601_out.add(&(tbl_JOIN_INNER_TD_10204601_output_preprocess));
    trans_JOIN_INNER_TD_10204601_out.dev2host(0, &(events_JOIN_INNER_TD_10204601), &(events_d2h_rd_JOIN_INNER_TD_10204601[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_10204601);
    tbl_JOIN_INNER_TD_10204601_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_10204601_output));
    gettimeofday(&tv_r_JOIN_INNER_10_452735_e, 0);

    struct timeval tv_r_Aggregate_10_23375_s, tv_r_Aggregate_10_23375_e;
    gettimeofday(&tv_r_Aggregate_10_23375_s, 0);
    SW_Aggregate_TD_10674991(tbl_Project_TD_11589783_output, tbl_Aggregate_TD_10674991_output);
    gettimeofday(&tv_r_Aggregate_10_23375_e, 0);

    struct timeval tv_r_Aggregate_10_299739_s, tv_r_Aggregate_10_299739_e;
    gettimeofday(&tv_r_Aggregate_10_299739_s, 0);
    trans_Aggregate_TD_10249456.add(&(tbl_JOIN_INNER_TD_1149247_output));
    trans_Aggregate_TD_10249456.host2dev(0, &(prev_events_grp_Aggregate_TD_10249456), &(events_h2d_wr_Aggregate_TD_10249456[0]));
    events_grp_Aggregate_TD_10249456.push_back(events_h2d_wr_Aggregate_TD_10249456[0]);
    krnl_Aggregate_TD_10249456.run(0, &(events_grp_Aggregate_TD_10249456), &(events_Aggregate_TD_10249456[0]));
    
    trans_Aggregate_TD_10249456_out.add(&(tbl_Aggregate_TD_10249456_output_preprocess));
    trans_Aggregate_TD_10249456_out.dev2host(0, &(events_Aggregate_TD_10249456), &(events_d2h_rd_Aggregate_TD_10249456[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_10249456_consolidate(tbl_Aggregate_TD_10249456_output_preprocess, tbl_Aggregate_TD_10249456_output);
    gettimeofday(&tv_r_Aggregate_10_299739_e, 0);

    struct timeval tv_r_JOIN_INNER_10_283208_s, tv_r_JOIN_INNER_10_283208_e;
    gettimeofday(&tv_r_JOIN_INNER_10_283208_s, 0);
    trans_JOIN_INNER_TD_10374469.add(&(tbl_Filter_TD_11360698_output));
    trans_JOIN_INNER_TD_10374469.add(&(tbl_Filter_TD_11405369_output));
    trans_JOIN_INNER_TD_10374469.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10374469), &(events_h2d_wr_JOIN_INNER_TD_10374469[0]));
    events_grp_JOIN_INNER_TD_10374469.push_back(events_h2d_wr_JOIN_INNER_TD_10374469[0]);
    krnl_JOIN_INNER_TD_10374469.run(0, &(events_grp_JOIN_INNER_TD_10374469), &(events_JOIN_INNER_TD_10374469[0]));
    
    trans_JOIN_INNER_TD_10374469_out.add(&(tbl_JOIN_INNER_TD_10374469_output_preprocess));
    trans_JOIN_INNER_TD_10374469_out.dev2host(0, &(events_JOIN_INNER_TD_10374469), &(events_d2h_rd_JOIN_INNER_TD_10374469[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_10374469);
    tbl_JOIN_INNER_TD_10374469_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_10374469_output));
    gettimeofday(&tv_r_JOIN_INNER_10_283208_e, 0);

    struct timeval tv_r_Aggregate_10_116937_s, tv_r_Aggregate_10_116937_e;
    gettimeofday(&tv_r_Aggregate_10_116937_s, 0);
    trans_Aggregate_TD_10341848.add(&(tbl_JOIN_INNER_TD_11633428_output));
    trans_Aggregate_TD_10341848.host2dev(0, &(prev_events_grp_Aggregate_TD_10341848), &(events_h2d_wr_Aggregate_TD_10341848[0]));
    events_grp_Aggregate_TD_10341848.push_back(events_h2d_wr_Aggregate_TD_10341848[0]);
    krnl_Aggregate_TD_10341848.run(0, &(events_grp_Aggregate_TD_10341848), &(events_Aggregate_TD_10341848[0]));
    
    trans_Aggregate_TD_10341848_out.add(&(tbl_Aggregate_TD_10341848_output_preprocess));
    trans_Aggregate_TD_10341848_out.dev2host(0, &(events_Aggregate_TD_10341848), &(events_d2h_rd_Aggregate_TD_10341848[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_10341848_consolidate(tbl_Aggregate_TD_10341848_output_preprocess, tbl_Aggregate_TD_10341848_output);
    gettimeofday(&tv_r_Aggregate_10_116937_e, 0);

    struct timeval tv_r_JOIN_INNER_10_483020_s, tv_r_JOIN_INNER_10_483020_e;
    gettimeofday(&tv_r_JOIN_INNER_10_483020_s, 0);
    trans_JOIN_INNER_TD_10729061.add(&(tbl_Filter_TD_11962588_output));
    trans_JOIN_INNER_TD_10729061.add(&(tbl_Filter_TD_11431283_output));
    trans_JOIN_INNER_TD_10729061.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10729061), &(events_h2d_wr_JOIN_INNER_TD_10729061[0]));
    events_grp_JOIN_INNER_TD_10729061.push_back(events_h2d_wr_JOIN_INNER_TD_10729061[0]);
    krnl_JOIN_INNER_TD_10729061.run(0, &(events_grp_JOIN_INNER_TD_10729061), &(events_JOIN_INNER_TD_10729061[0]));
    
    trans_JOIN_INNER_TD_10729061_out.add(&(tbl_JOIN_INNER_TD_10729061_output_preprocess));
    trans_JOIN_INNER_TD_10729061_out.dev2host(0, &(events_JOIN_INNER_TD_10729061), &(events_d2h_rd_JOIN_INNER_TD_10729061[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_10729061);
    tbl_JOIN_INNER_TD_10729061_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_10729061_output));
    gettimeofday(&tv_r_JOIN_INNER_10_483020_e, 0);

    struct timeval tv_r_Aggregate_10_345224_s, tv_r_Aggregate_10_345224_e;
    gettimeofday(&tv_r_Aggregate_10_345224_s, 0);
    SW_Aggregate_TD_10689047(tbl_Project_TD_11601950_output, tbl_Aggregate_TD_10689047_output);
    gettimeofday(&tv_r_Aggregate_10_345224_e, 0);

    struct timeval tv_r_Aggregate_9_942933_s, tv_r_Aggregate_9_942933_e;
    gettimeofday(&tv_r_Aggregate_9_942933_s, 0);
    SW_Aggregate_TD_9541362(tbl_Aggregate_TD_10591488_output, tbl_Aggregate_TD_9541362_output);
    gettimeofday(&tv_r_Aggregate_9_942933_e, 0);

    struct timeval tv_r_Aggregate_9_718324_s, tv_r_Aggregate_9_718324_e;
    gettimeofday(&tv_r_Aggregate_9_718324_s, 0);
    trans_Aggregate_TD_9540992.add(&(tbl_JOIN_INNER_TD_10188262_output));
    trans_Aggregate_TD_9540992.host2dev(0, &(prev_events_grp_Aggregate_TD_9540992), &(events_h2d_wr_Aggregate_TD_9540992[0]));
    events_grp_Aggregate_TD_9540992.push_back(events_h2d_wr_Aggregate_TD_9540992[0]);
    krnl_Aggregate_TD_9540992.run(0, &(events_grp_Aggregate_TD_9540992), &(events_Aggregate_TD_9540992[0]));
    
    trans_Aggregate_TD_9540992_out.add(&(tbl_Aggregate_TD_9540992_output_preprocess));
    trans_Aggregate_TD_9540992_out.dev2host(0, &(events_Aggregate_TD_9540992), &(events_d2h_rd_Aggregate_TD_9540992[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_9540992_consolidate(tbl_Aggregate_TD_9540992_output_preprocess, tbl_Aggregate_TD_9540992_output);
    gettimeofday(&tv_r_Aggregate_9_718324_e, 0);

    struct timeval tv_r_Aggregate_9_608165_s, tv_r_Aggregate_9_608165_e;
    gettimeofday(&tv_r_Aggregate_9_608165_s, 0);
    SW_Aggregate_TD_9543664(tbl_Aggregate_TD_1016926_output, tbl_Aggregate_TD_9543664_output);
    gettimeofday(&tv_r_Aggregate_9_608165_e, 0);

    struct timeval tv_r_Aggregate_9_503148_s, tv_r_Aggregate_9_503148_e;
    gettimeofday(&tv_r_Aggregate_9_503148_s, 0);
    trans_Aggregate_TD_997594.add(&(tbl_JOIN_INNER_TD_10204601_output));
    trans_Aggregate_TD_997594.host2dev(0, &(prev_events_grp_Aggregate_TD_997594), &(events_h2d_wr_Aggregate_TD_997594[0]));
    events_grp_Aggregate_TD_997594.push_back(events_h2d_wr_Aggregate_TD_997594[0]);
    krnl_Aggregate_TD_997594.run(0, &(events_grp_Aggregate_TD_997594), &(events_Aggregate_TD_997594[0]));
    
    trans_Aggregate_TD_997594_out.add(&(tbl_Aggregate_TD_997594_output_preprocess));
    trans_Aggregate_TD_997594_out.dev2host(0, &(events_Aggregate_TD_997594), &(events_d2h_rd_Aggregate_TD_997594[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_997594_consolidate(tbl_Aggregate_TD_997594_output_preprocess, tbl_Aggregate_TD_997594_output);
    gettimeofday(&tv_r_Aggregate_9_503148_e, 0);

    struct timeval tv_r_Filter_9_486440_s, tv_r_Filter_9_486440_e;
    gettimeofday(&tv_r_Filter_9_486440_s, 0);
    SW_Filter_TD_9188431(tbl_Aggregate_TD_10674991_output, tbl_Filter_TD_9188431_output);
    gettimeofday(&tv_r_Filter_9_486440_e, 0);

    struct timeval tv_r_Filter_9_302412_s, tv_r_Filter_9_302412_e;
    gettimeofday(&tv_r_Filter_9_302412_s, 0);
    SW_Filter_TD_9116027(tbl_SerializeFromObject_TD_10146884_input, tbl_Filter_TD_9116027_output);
    gettimeofday(&tv_r_Filter_9_302412_e, 0);

    struct timeval tv_r_Aggregate_9_372449_s, tv_r_Aggregate_9_372449_e;
    gettimeofday(&tv_r_Aggregate_9_372449_s, 0);
    SW_Aggregate_TD_9303521(tbl_Aggregate_TD_10249456_output, tbl_Aggregate_TD_9303521_output);
    gettimeofday(&tv_r_Aggregate_9_372449_e, 0);

    struct timeval tv_r_Aggregate_9_228356_s, tv_r_Aggregate_9_228356_e;
    gettimeofday(&tv_r_Aggregate_9_228356_s, 0);
    trans_Aggregate_TD_9662598.add(&(tbl_JOIN_INNER_TD_10374469_output));
    trans_Aggregate_TD_9662598.host2dev(0, &(prev_events_grp_Aggregate_TD_9662598), &(events_h2d_wr_Aggregate_TD_9662598[0]));
    events_grp_Aggregate_TD_9662598.push_back(events_h2d_wr_Aggregate_TD_9662598[0]);
    krnl_Aggregate_TD_9662598.run(0, &(events_grp_Aggregate_TD_9662598), &(events_Aggregate_TD_9662598[0]));
    
    trans_Aggregate_TD_9662598_out.add(&(tbl_Aggregate_TD_9662598_output_preprocess));
    trans_Aggregate_TD_9662598_out.dev2host(0, &(events_Aggregate_TD_9662598), &(events_d2h_rd_Aggregate_TD_9662598[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_9662598_consolidate(tbl_Aggregate_TD_9662598_output_preprocess, tbl_Aggregate_TD_9662598_output);
    gettimeofday(&tv_r_Aggregate_9_228356_e, 0);

    struct timeval tv_r_Aggregate_9_134370_s, tv_r_Aggregate_9_134370_e;
    gettimeofday(&tv_r_Aggregate_9_134370_s, 0);
    SW_Aggregate_TD_9473599(tbl_Aggregate_TD_10341848_output, tbl_Aggregate_TD_9473599_output);
    gettimeofday(&tv_r_Aggregate_9_134370_e, 0);

    struct timeval tv_r_Aggregate_9_135206_s, tv_r_Aggregate_9_135206_e;
    gettimeofday(&tv_r_Aggregate_9_135206_s, 0);
    trans_Aggregate_TD_9642948.add(&(tbl_JOIN_INNER_TD_10729061_output));
    trans_Aggregate_TD_9642948.host2dev(0, &(prev_events_grp_Aggregate_TD_9642948), &(events_h2d_wr_Aggregate_TD_9642948[0]));
    events_grp_Aggregate_TD_9642948.push_back(events_h2d_wr_Aggregate_TD_9642948[0]);
    krnl_Aggregate_TD_9642948.run(0, &(events_grp_Aggregate_TD_9642948), &(events_Aggregate_TD_9642948[0]));
    
    trans_Aggregate_TD_9642948_out.add(&(tbl_Aggregate_TD_9642948_output_preprocess));
    trans_Aggregate_TD_9642948_out.dev2host(0, &(events_Aggregate_TD_9642948), &(events_d2h_rd_Aggregate_TD_9642948[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_9642948_consolidate(tbl_Aggregate_TD_9642948_output_preprocess, tbl_Aggregate_TD_9642948_output);
    gettimeofday(&tv_r_Aggregate_9_135206_e, 0);

    struct timeval tv_r_Filter_9_217886_s, tv_r_Filter_9_217886_e;
    gettimeofday(&tv_r_Filter_9_217886_s, 0);
    SW_Filter_TD_9214268(tbl_Aggregate_TD_10689047_output, tbl_Filter_TD_9214268_output);
    gettimeofday(&tv_r_Filter_9_217886_e, 0);

    struct timeval tv_r_Filter_9_312837_s, tv_r_Filter_9_312837_e;
    gettimeofday(&tv_r_Filter_9_312837_s, 0);
    SW_Filter_TD_9571006(tbl_SerializeFromObject_TD_10274596_input, tbl_Filter_TD_9571006_output);
    gettimeofday(&tv_r_Filter_9_312837_e, 0);

    struct timeval tv_r_Filter_8_926034_s, tv_r_Filter_8_926034_e;
    gettimeofday(&tv_r_Filter_8_926034_s, 0);
    SW_Filter_TD_8143206(tbl_Aggregate_TD_9540992_output, tbl_Aggregate_TD_9541362_output, tbl_Filter_TD_8143206_output);
    gettimeofday(&tv_r_Filter_8_926034_e, 0);

    struct timeval tv_r_Filter_8_385062_s, tv_r_Filter_8_385062_e;
    gettimeofday(&tv_r_Filter_8_385062_s, 0);
    SW_Filter_TD_8356588(tbl_SerializeFromObject_TD_9526106_input, tbl_Filter_TD_8356588_output);
    gettimeofday(&tv_r_Filter_8_385062_e, 0);

    struct timeval tv_r_Filter_8_142410_s, tv_r_Filter_8_142410_e;
    gettimeofday(&tv_r_Filter_8_142410_s, 0);
    SW_Filter_TD_8911589(tbl_Aggregate_TD_997594_output, tbl_Aggregate_TD_9543664_output, tbl_Filter_TD_8911589_output);
    gettimeofday(&tv_r_Filter_8_142410_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_839796_s, tv_r_JOIN_LEFTSEMI_8_839796_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_839796_s, 0);
    trans_JOIN_LEFTSEMI_TD_8558332.add(&(tbl_Filter_TD_9116027_output));
    trans_JOIN_LEFTSEMI_TD_8558332.add(&(tbl_Filter_TD_9188431_output));
    trans_JOIN_LEFTSEMI_TD_8558332.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_8558332), &(events_h2d_wr_JOIN_LEFTSEMI_TD_8558332[0]));
    events_grp_JOIN_LEFTSEMI_TD_8558332.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8558332[0]);
    krnl_JOIN_LEFTSEMI_TD_8558332.run(0, &(events_grp_JOIN_LEFTSEMI_TD_8558332), &(events_JOIN_LEFTSEMI_TD_8558332[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_839796_e, 0);

    struct timeval tv_r_Filter_8_290504_s, tv_r_Filter_8_290504_e;
    gettimeofday(&tv_r_Filter_8_290504_s, 0);
    SW_Filter_TD_8729823(tbl_Aggregate_TD_9662598_output, tbl_Aggregate_TD_9303521_output, tbl_Filter_TD_8729823_output);
    gettimeofday(&tv_r_Filter_8_290504_e, 0);

    struct timeval tv_r_Filter_8_363946_s, tv_r_Filter_8_363946_e;
    gettimeofday(&tv_r_Filter_8_363946_s, 0);
    SW_Filter_TD_8803226(tbl_SerializeFromObject_TD_970876_input, tbl_Filter_TD_8803226_output);
    gettimeofday(&tv_r_Filter_8_363946_e, 0);

    struct timeval tv_r_Filter_8_422411_s, tv_r_Filter_8_422411_e;
    gettimeofday(&tv_r_Filter_8_422411_s, 0);
    SW_Filter_TD_8827897(tbl_Aggregate_TD_9642948_output, tbl_Aggregate_TD_9473599_output, tbl_Filter_TD_8827897_output);
    gettimeofday(&tv_r_Filter_8_422411_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_8_812005_s, tv_r_JOIN_LEFTSEMI_8_812005_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_812005_s, 0);
    trans_JOIN_LEFTSEMI_TD_8979751.add(&(tbl_Filter_TD_9571006_output));
    trans_JOIN_LEFTSEMI_TD_8979751.add(&(tbl_Filter_TD_9214268_output));
    trans_JOIN_LEFTSEMI_TD_8979751.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_8979751), &(events_h2d_wr_JOIN_LEFTSEMI_TD_8979751[0]));
    events_grp_JOIN_LEFTSEMI_TD_8979751.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8979751[0]);
    krnl_JOIN_LEFTSEMI_TD_8979751.run(0, &(events_grp_JOIN_LEFTSEMI_TD_8979751), &(events_JOIN_LEFTSEMI_TD_8979751[0]));
    gettimeofday(&tv_r_JOIN_LEFTSEMI_8_812005_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_127367_s, tv_r_JOIN_LEFTSEMI_7_127367_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_127367_s, 0);
    SW_JOIN_LEFTSEMI_TD_7911421(tbl_Filter_TD_8356588_output, tbl_Filter_TD_8143206_output, tbl_JOIN_LEFTSEMI_TD_7911421_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_127367_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_297687_s, tv_r_JOIN_LEFTSEMI_7_297687_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_297687_s, 0);
    prev_events_grp_JOIN_LEFTSEMI_TD_7974833.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8558332[0]);
    trans_JOIN_LEFTSEMI_TD_7974833.add(&(tbl_Filter_TD_8911589_output));
    trans_JOIN_LEFTSEMI_TD_7974833.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_7974833), &(events_h2d_wr_JOIN_LEFTSEMI_TD_7974833[0]));
    events_grp_JOIN_LEFTSEMI_TD_7974833.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7974833[0]);
    events_grp_JOIN_LEFTSEMI_TD_7974833.push_back(events_JOIN_LEFTSEMI_TD_8558332[0]);
    krnl_JOIN_LEFTSEMI_TD_7974833.run(0, &(events_grp_JOIN_LEFTSEMI_TD_7974833), &(events_JOIN_LEFTSEMI_TD_7974833[0]));
    
    trans_JOIN_LEFTSEMI_TD_7974833_out.add(&(tbl_JOIN_LEFTSEMI_TD_7974833_output));
    trans_JOIN_LEFTSEMI_TD_7974833_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_7974833), &(events_d2h_rd_JOIN_LEFTSEMI_TD_7974833[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_297687_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_590207_s, tv_r_JOIN_LEFTSEMI_7_590207_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_590207_s, 0);
    SW_JOIN_LEFTSEMI_TD_7223440(tbl_Filter_TD_8803226_output, tbl_Filter_TD_8729823_output, tbl_JOIN_LEFTSEMI_TD_7223440_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_590207_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_295822_s, tv_r_JOIN_LEFTSEMI_7_295822_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_295822_s, 0);
    prev_events_grp_JOIN_LEFTSEMI_TD_7744073.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_8979751[0]);
    trans_JOIN_LEFTSEMI_TD_7744073.add(&(tbl_Filter_TD_8827897_output));
    trans_JOIN_LEFTSEMI_TD_7744073.host2dev(0, &(prev_events_grp_JOIN_LEFTSEMI_TD_7744073), &(events_h2d_wr_JOIN_LEFTSEMI_TD_7744073[0]));
    events_grp_JOIN_LEFTSEMI_TD_7744073.push_back(events_h2d_wr_JOIN_LEFTSEMI_TD_7744073[0]);
    events_grp_JOIN_LEFTSEMI_TD_7744073.push_back(events_JOIN_LEFTSEMI_TD_8979751[0]);
    krnl_JOIN_LEFTSEMI_TD_7744073.run(0, &(events_grp_JOIN_LEFTSEMI_TD_7744073), &(events_JOIN_LEFTSEMI_TD_7744073[0]));
    
    trans_JOIN_LEFTSEMI_TD_7744073_out.add(&(tbl_JOIN_LEFTSEMI_TD_7744073_output));
    trans_JOIN_LEFTSEMI_TD_7744073_out.dev2host(0, &(events_JOIN_LEFTSEMI_TD_7744073), &(events_d2h_rd_JOIN_LEFTSEMI_TD_7744073[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_295822_e, 0);

    struct timeval tv_r_Filter_6_454104_s, tv_r_Filter_6_454104_e;
    gettimeofday(&tv_r_Filter_6_454104_s, 0);
    SW_Filter_TD_6646894(tbl_SerializeFromObject_TD_7192624_input, tbl_Filter_TD_6646894_output);
    gettimeofday(&tv_r_Filter_6_454104_e, 0);

    struct timeval tv_r_JOIN_INNER_6_209918_s, tv_r_JOIN_INNER_6_209918_e;
    gettimeofday(&tv_r_JOIN_INNER_6_209918_s, 0);
    SW_JOIN_INNER_TD_6617171(tbl_JOIN_LEFTSEMI_TD_7974833_output, tbl_JOIN_LEFTSEMI_TD_7911421_output, tbl_JOIN_INNER_TD_6617171_output);
    gettimeofday(&tv_r_JOIN_INNER_6_209918_e, 0);

    struct timeval tv_r_Filter_6_224221_s, tv_r_Filter_6_224221_e;
    gettimeofday(&tv_r_Filter_6_224221_s, 0);
    SW_Filter_TD_6354216(tbl_SerializeFromObject_TD_7231476_input, tbl_Filter_TD_6354216_output);
    gettimeofday(&tv_r_Filter_6_224221_e, 0);

    struct timeval tv_r_JOIN_INNER_6_121991_s, tv_r_JOIN_INNER_6_121991_e;
    gettimeofday(&tv_r_JOIN_INNER_6_121991_s, 0);
    SW_JOIN_INNER_TD_6478730(tbl_JOIN_LEFTSEMI_TD_7744073_output, tbl_JOIN_LEFTSEMI_TD_7223440_output, tbl_JOIN_INNER_TD_6478730_output);
    gettimeofday(&tv_r_JOIN_INNER_6_121991_e, 0);

    struct timeval tv_r_JOIN_INNER_5_995771_s, tv_r_JOIN_INNER_5_995771_e;
    gettimeofday(&tv_r_JOIN_INNER_5_995771_s, 0);
    SW_JOIN_INNER_TD_5209561(tbl_JOIN_INNER_TD_6617171_output, tbl_Filter_TD_6646894_output, tbl_JOIN_INNER_TD_5209561_output);
    gettimeofday(&tv_r_JOIN_INNER_5_995771_e, 0);

    struct timeval tv_r_JOIN_INNER_5_179050_s, tv_r_JOIN_INNER_5_179050_e;
    gettimeofday(&tv_r_JOIN_INNER_5_179050_s, 0);
    SW_JOIN_INNER_TD_5575645(tbl_JOIN_INNER_TD_6478730_output, tbl_Filter_TD_6354216_output, tbl_JOIN_INNER_TD_5575645_output);
    gettimeofday(&tv_r_JOIN_INNER_5_179050_e, 0);

    struct timeval tv_r_Aggregate_4_820730_s, tv_r_Aggregate_4_820730_e;
    gettimeofday(&tv_r_Aggregate_4_820730_s, 0);
    SW_Aggregate_TD_4895784(tbl_JOIN_INNER_TD_5209561_output, tbl_Aggregate_TD_4895784_output);
    gettimeofday(&tv_r_Aggregate_4_820730_e, 0);

    struct timeval tv_r_Aggregate_4_938976_s, tv_r_Aggregate_4_938976_e;
    gettimeofday(&tv_r_Aggregate_4_938976_s, 0);
    SW_Aggregate_TD_4543734(tbl_JOIN_INNER_TD_5575645_output, tbl_Aggregate_TD_4543734_output);
    gettimeofday(&tv_r_Aggregate_4_938976_e, 0);

    struct timeval tv_r_Union_3_156025_s, tv_r_Union_3_156025_e;
    gettimeofday(&tv_r_Union_3_156025_s, 0);
    SW_Union_TD_3306647(tbl_Aggregate_TD_4543734_output, tbl_Aggregate_TD_4895784_output, tbl_Union_TD_3306647_output);
    gettimeofday(&tv_r_Union_3_156025_e, 0);

    struct timeval tv_r_Sort_2_395272_s, tv_r_Sort_2_395272_e;
    gettimeofday(&tv_r_Sort_2_395272_s, 0);
    SW_Sort_TD_2805766(tbl_Union_TD_3306647_output, tbl_Sort_TD_2805766_output);
    gettimeofday(&tv_r_Sort_2_395272_e, 0);

    struct timeval tv_r_LocalLimit_1_341864_s, tv_r_LocalLimit_1_341864_e;
    gettimeofday(&tv_r_LocalLimit_1_341864_s, 0);
    SW_LocalLimit_TD_1726255(tbl_Sort_TD_2805766_output, tbl_LocalLimit_TD_1726255_output);
    gettimeofday(&tv_r_LocalLimit_1_341864_e, 0);

    struct timeval tv_r_GlobalLimit_0_368670_s, tv_r_GlobalLimit_0_368670_e;
    gettimeofday(&tv_r_GlobalLimit_0_368670_s, 0);
    SW_GlobalLimit_TD_0597065(tbl_LocalLimit_TD_1726255_output, tbl_GlobalLimit_TD_0597065_output);
    gettimeofday(&tv_r_GlobalLimit_0_368670_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_767172_s, &tv_r_Filter_14_767172_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15658259_input: " << tbl_SerializeFromObject_TD_15658259_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_113162_s, &tv_r_Filter_14_113162_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15417621_input: " << tbl_SerializeFromObject_TD_15417621_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_293293_s, &tv_r_Filter_14_293293_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1541384_input: " << tbl_SerializeFromObject_TD_1541384_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_407514_s, &tv_r_Filter_14_407514_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15164172_input: " << tbl_SerializeFromObject_TD_15164172_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_326251_s, &tv_r_Filter_13_326251_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14632060_input: " << tbl_SerializeFromObject_TD_14632060_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_534466_s, &tv_r_Filter_13_534466_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14241048_input: " << tbl_SerializeFromObject_TD_14241048_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_830612_s, &tv_r_Filter_13_830612_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14470233_input: " << tbl_SerializeFromObject_TD_14470233_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_73703_s, &tv_r_Filter_13_73703_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14203114_input: " << tbl_SerializeFromObject_TD_14203114_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_328856_s, &tv_r_Filter_13_328856_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14954139_input: " << tbl_SerializeFromObject_TD_14954139_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_114749_s, &tv_r_JOIN_INNER_13_114749_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14347231_output: " << tbl_Filter_TD_14347231_output.getNumRow() << " " << "tbl_Filter_TD_14202005_output: " << tbl_Filter_TD_14202005_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_798539_s, &tv_r_Filter_13_798539_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14785688_input: " << tbl_SerializeFromObject_TD_14785688_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_147462_s, &tv_r_Filter_13_147462_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14687258_input: " << tbl_SerializeFromObject_TD_14687258_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_912144_s, &tv_r_Filter_13_912144_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14655597_input: " << tbl_SerializeFromObject_TD_14655597_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_39430_s, &tv_r_Filter_13_39430_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14990777_input: " << tbl_SerializeFromObject_TD_14990777_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_576079_s, &tv_r_Filter_13_576079_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14705754_input: " << tbl_SerializeFromObject_TD_14705754_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_314985_s, &tv_r_JOIN_INNER_13_314985_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_14164835_output: " << tbl_Filter_TD_14164835_output.getNumRow() << " " << "tbl_Filter_TD_14996937_output: " << tbl_Filter_TD_14996937_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_228182_s, &tv_r_Filter_12_228182_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13930581_input: " << tbl_SerializeFromObject_TD_13930581_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_127942_s, &tv_r_JOIN_INNER_12_127942_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_13767647_output: " << tbl_Filter_TD_13767647_output.getNumRow() << " " << "tbl_Filter_TD_13380660_output: " << tbl_Filter_TD_13380660_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_130248_s, &tv_r_Filter_12_130248_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13589383_input: " << tbl_SerializeFromObject_TD_13589383_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_296834_s, &tv_r_JOIN_INNER_12_296834_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_13259639_output: " << tbl_Filter_TD_13259639_output.getNumRow() << " " << "tbl_Filter_TD_13628174_output: " << tbl_Filter_TD_13628174_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_398409_s, &tv_r_JOIN_INNER_12_398409_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13291829_output: " << tbl_JOIN_INNER_TD_13291829_output.getNumRow() << " " << "tbl_Filter_TD_13252891_output: " << tbl_Filter_TD_13252891_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_295158_s, &tv_r_Filter_12_295158_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13870841_input: " << tbl_SerializeFromObject_TD_13870841_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_386615_s, &tv_r_JOIN_INNER_12_386615_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_13860804_output: " << tbl_Filter_TD_13860804_output.getNumRow() << " " << "tbl_Filter_TD_13199027_output: " << tbl_Filter_TD_13199027_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_792595_s, &tv_r_Filter_12_792595_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13158825_input: " << tbl_SerializeFromObject_TD_13158825_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_638954_s, &tv_r_JOIN_INNER_12_638954_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_13661488_output: " << tbl_Filter_TD_13661488_output.getNumRow() << " " << "tbl_Filter_TD_13959534_output: " << tbl_Filter_TD_13959534_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_113662_s, &tv_r_JOIN_INNER_12_113662_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13351568_output: " << tbl_JOIN_INNER_TD_13351568_output.getNumRow() << " " << "tbl_Filter_TD_13754626_output: " << tbl_Filter_TD_13754626_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_74764_s, &tv_r_JOIN_INNER_11_74764_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12251980_output: " << tbl_JOIN_INNER_TD_12251980_output.getNumRow() << " " << "tbl_Filter_TD_12980403_output: " << tbl_Filter_TD_12980403_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_119761_s, &tv_r_Filter_11_119761_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12254236_input: " << tbl_SerializeFromObject_TD_12254236_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_110588_s, &tv_r_Filter_11_110588_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12228760_input: " << tbl_SerializeFromObject_TD_12228760_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_607407_s, &tv_r_JOIN_INNER_11_607407_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12643264_output: " << tbl_JOIN_INNER_TD_12643264_output.getNumRow() << " " << "tbl_Filter_TD_12414135_output: " << tbl_Filter_TD_12414135_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_950676_s, &tv_r_Filter_11_950676_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12613679_input: " << tbl_SerializeFromObject_TD_12613679_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_415604_s, &tv_r_Filter_11_415604_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12869914_input: " << tbl_SerializeFromObject_TD_12869914_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_11: " << tvdiff(&tv_r_Project_11_375556_s, &tv_r_Project_11_375556_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12219972_output: " << tbl_JOIN_INNER_TD_12219972_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_525658_s, &tv_r_JOIN_INNER_11_525658_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12841345_output: " << tbl_JOIN_INNER_TD_12841345_output.getNumRow() << " " << "tbl_Filter_TD_12982527_output: " << tbl_Filter_TD_12982527_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_343568_s, &tv_r_Filter_11_343568_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12483785_input: " << tbl_SerializeFromObject_TD_12483785_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_94814_s, &tv_r_Filter_11_94814_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12265106_input: " << tbl_SerializeFromObject_TD_12265106_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_855408_s, &tv_r_JOIN_INNER_11_855408_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12755212_output: " << tbl_JOIN_INNER_TD_12755212_output.getNumRow() << " " << "tbl_Filter_TD_1250278_output: " << tbl_Filter_TD_1250278_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_932875_s, &tv_r_Filter_11_932875_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12927837_input: " << tbl_SerializeFromObject_TD_12927837_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_625121_s, &tv_r_Filter_11_625121_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12162060_input: " << tbl_SerializeFromObject_TD_12162060_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_11: " << tvdiff(&tv_r_Project_11_130469_s, &tv_r_Project_11_130469_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12490786_output: " << tbl_JOIN_INNER_TD_12490786_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_171604_s, &tv_r_Aggregate_10_171604_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1170542_output: " << tbl_JOIN_INNER_TD_1170542_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_49253_s, &tv_r_JOIN_INNER_10_49253_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11820471_output: " << tbl_Filter_TD_11820471_output.getNumRow() << " " << "tbl_Filter_TD_11809128_output: " << tbl_Filter_TD_11809128_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_853407_s, &tv_r_Aggregate_10_853407_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11215925_output: " << tbl_JOIN_INNER_TD_11215925_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_452735_s, &tv_r_JOIN_INNER_10_452735_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11362879_output: " << tbl_Filter_TD_11362879_output.getNumRow() << " " << "tbl_Filter_TD_11136802_output: " << tbl_Filter_TD_11136802_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_23375_s, &tv_r_Aggregate_10_23375_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_11589783_output: " << tbl_Project_TD_11589783_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_299739_s, &tv_r_Aggregate_10_299739_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1149247_output: " << tbl_JOIN_INNER_TD_1149247_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_283208_s, &tv_r_JOIN_INNER_10_283208_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11360698_output: " << tbl_Filter_TD_11360698_output.getNumRow() << " " << "tbl_Filter_TD_11405369_output: " << tbl_Filter_TD_11405369_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_116937_s, &tv_r_Aggregate_10_116937_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11633428_output: " << tbl_JOIN_INNER_TD_11633428_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_483020_s, &tv_r_JOIN_INNER_10_483020_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11962588_output: " << tbl_Filter_TD_11962588_output.getNumRow() << " " << "tbl_Filter_TD_11431283_output: " << tbl_Filter_TD_11431283_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_10: " << tvdiff(&tv_r_Aggregate_10_345224_s, &tv_r_Aggregate_10_345224_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_11601950_output: " << tbl_Project_TD_11601950_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_942933_s, &tv_r_Aggregate_9_942933_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10591488_output: " << tbl_Aggregate_TD_10591488_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_718324_s, &tv_r_Aggregate_9_718324_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10188262_output: " << tbl_JOIN_INNER_TD_10188262_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_608165_s, &tv_r_Aggregate_9_608165_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1016926_output: " << tbl_Aggregate_TD_1016926_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_503148_s, &tv_r_Aggregate_9_503148_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10204601_output: " << tbl_JOIN_INNER_TD_10204601_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_486440_s, &tv_r_Filter_9_486440_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10674991_output: " << tbl_Aggregate_TD_10674991_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_302412_s, &tv_r_Filter_9_302412_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10146884_input: " << tbl_SerializeFromObject_TD_10146884_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_372449_s, &tv_r_Aggregate_9_372449_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10249456_output: " << tbl_Aggregate_TD_10249456_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_228356_s, &tv_r_Aggregate_9_228356_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10374469_output: " << tbl_JOIN_INNER_TD_10374469_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_134370_s, &tv_r_Aggregate_9_134370_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10341848_output: " << tbl_Aggregate_TD_10341848_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_9: " << tvdiff(&tv_r_Aggregate_9_135206_s, &tv_r_Aggregate_9_135206_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10729061_output: " << tbl_JOIN_INNER_TD_10729061_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_217886_s, &tv_r_Filter_9_217886_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_10689047_output: " << tbl_Aggregate_TD_10689047_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_312837_s, &tv_r_Filter_9_312837_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10274596_input: " << tbl_SerializeFromObject_TD_10274596_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_926034_s, &tv_r_Filter_8_926034_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9540992_output: " << tbl_Aggregate_TD_9540992_output.getNumRow() << " " << "tbl_Aggregate_TD_9541362_output: " << tbl_Aggregate_TD_9541362_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_385062_s, &tv_r_Filter_8_385062_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9526106_input: " << tbl_SerializeFromObject_TD_9526106_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_142410_s, &tv_r_Filter_8_142410_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_997594_output: " << tbl_Aggregate_TD_997594_output.getNumRow() << " " << "tbl_Aggregate_TD_9543664_output: " << tbl_Aggregate_TD_9543664_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_839796_s, &tv_r_JOIN_LEFTSEMI_8_839796_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9116027_output: " << tbl_Filter_TD_9116027_output.getNumRow() << " " << "tbl_Filter_TD_9188431_output: " << tbl_Filter_TD_9188431_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_290504_s, &tv_r_Filter_8_290504_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9662598_output: " << tbl_Aggregate_TD_9662598_output.getNumRow() << " " << "tbl_Aggregate_TD_9303521_output: " << tbl_Aggregate_TD_9303521_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_363946_s, &tv_r_Filter_8_363946_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_970876_input: " << tbl_SerializeFromObject_TD_970876_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_422411_s, &tv_r_Filter_8_422411_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_9642948_output: " << tbl_Aggregate_TD_9642948_output.getNumRow() << " " << "tbl_Aggregate_TD_9473599_output: " << tbl_Aggregate_TD_9473599_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_8: " << tvdiff(&tv_r_JOIN_LEFTSEMI_8_812005_s, &tv_r_JOIN_LEFTSEMI_8_812005_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9571006_output: " << tbl_Filter_TD_9571006_output.getNumRow() << " " << "tbl_Filter_TD_9214268_output: " << tbl_Filter_TD_9214268_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_127367_s, &tv_r_JOIN_LEFTSEMI_7_127367_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8356588_output: " << tbl_Filter_TD_8356588_output.getNumRow() << " " << "tbl_Filter_TD_8143206_output: " << tbl_Filter_TD_8143206_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_297687_s, &tv_r_JOIN_LEFTSEMI_7_297687_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_8558332_output: " << tbl_JOIN_LEFTSEMI_TD_8558332_output.getNumRow() << " " << "tbl_Filter_TD_8911589_output: " << tbl_Filter_TD_8911589_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_590207_s, &tv_r_JOIN_LEFTSEMI_7_590207_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8803226_output: " << tbl_Filter_TD_8803226_output.getNumRow() << " " << "tbl_Filter_TD_8729823_output: " << tbl_Filter_TD_8729823_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_295822_s, &tv_r_JOIN_LEFTSEMI_7_295822_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_8979751_output: " << tbl_JOIN_LEFTSEMI_TD_8979751_output.getNumRow() << " " << "tbl_Filter_TD_8827897_output: " << tbl_Filter_TD_8827897_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_454104_s, &tv_r_Filter_6_454104_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7192624_input: " << tbl_SerializeFromObject_TD_7192624_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_209918_s, &tv_r_JOIN_INNER_6_209918_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_7974833_output: " << tbl_JOIN_LEFTSEMI_TD_7974833_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7911421_output: " << tbl_JOIN_LEFTSEMI_TD_7911421_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_224221_s, &tv_r_Filter_6_224221_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7231476_input: " << tbl_SerializeFromObject_TD_7231476_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_121991_s, &tv_r_JOIN_INNER_6_121991_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_7744073_output: " << tbl_JOIN_LEFTSEMI_TD_7744073_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7223440_output: " << tbl_JOIN_LEFTSEMI_TD_7223440_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_995771_s, &tv_r_JOIN_INNER_5_995771_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6617171_output: " << tbl_JOIN_INNER_TD_6617171_output.getNumRow() << " " << "tbl_Filter_TD_6646894_output: " << tbl_Filter_TD_6646894_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_179050_s, &tv_r_JOIN_INNER_5_179050_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6478730_output: " << tbl_JOIN_INNER_TD_6478730_output.getNumRow() << " " << "tbl_Filter_TD_6354216_output: " << tbl_Filter_TD_6354216_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_820730_s, &tv_r_Aggregate_4_820730_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5209561_output: " << tbl_JOIN_INNER_TD_5209561_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_938976_s, &tv_r_Aggregate_4_938976_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5575645_output: " << tbl_JOIN_INNER_TD_5575645_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_3: " << tvdiff(&tv_r_Union_3_156025_s, &tv_r_Union_3_156025_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4543734_output: " << tbl_Aggregate_TD_4543734_output.getNumRow() << " " << "tbl_Aggregate_TD_4895784_output: " << tbl_Aggregate_TD_4895784_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_395272_s, &tv_r_Sort_2_395272_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_3306647_output: " << tbl_Union_TD_3306647_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_341864_s, &tv_r_LocalLimit_1_341864_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2805766_output: " << tbl_Sort_TD_2805766_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_368670_s, &tv_r_GlobalLimit_0_368670_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1726255_output: " << tbl_LocalLimit_TD_1726255_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 10.431806 * 1000 << "ms" << std::endl; 
    return 0; 
}
