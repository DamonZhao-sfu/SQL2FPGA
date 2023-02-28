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

#include "cfgFunc_q75.hpp" 
#include "q75.hpp" 

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
    std::cout << "NOTE:running query #75\n."; 
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
    Table tbl_GlobalLimit_TD_0855047_output("tbl_GlobalLimit_TD_0855047_output", 6100000, 10, "");
    tbl_GlobalLimit_TD_0855047_output.allocateHost();
    Table tbl_LocalLimit_TD_1246959_output("tbl_LocalLimit_TD_1246959_output", 6100000, 10, "");
    tbl_LocalLimit_TD_1246959_output.allocateHost();
    Table tbl_Sort_TD_2155974_output("tbl_Sort_TD_2155974_output", 6100000, 10, "");
    tbl_Sort_TD_2155974_output.allocateHost();
    Table tbl_Project_TD_3501667_output("tbl_Project_TD_3501667_output", 6100000, 10, "");
    tbl_Project_TD_3501667_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4832147_output("tbl_JOIN_INNER_TD_4832147_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_4832147_output.allocateHost();
    Table tbl_Aggregate_TD_561353_output_preprocess("tbl_Aggregate_TD_561353_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_561353_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_561353_output("tbl_Aggregate_TD_561353_output", 6100000, 7, "");
    tbl_Aggregate_TD_561353_output.allocateHost();
    Table tbl_Aggregate_TD_5334057_output_preprocess("tbl_Aggregate_TD_5334057_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_5334057_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_5334057_output("tbl_Aggregate_TD_5334057_output", 6100000, 7, "");
    tbl_Aggregate_TD_5334057_output.allocateHost();
    Table tbl_Aggregate_TD_6554757_output_preprocess("tbl_Aggregate_TD_6554757_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_6554757_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_6554757_output("tbl_Aggregate_TD_6554757_output", 6100000, 7, "");
    tbl_Aggregate_TD_6554757_output.allocateHost();
    Table tbl_Aggregate_TD_6385216_output_preprocess("tbl_Aggregate_TD_6385216_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_6385216_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_6385216_output("tbl_Aggregate_TD_6385216_output", 6100000, 7, "");
    tbl_Aggregate_TD_6385216_output.allocateHost();
    Table tbl_Union_TD_7216786_output("tbl_Union_TD_7216786_output", 6100000, 7, "");
    tbl_Union_TD_7216786_output.allocateHost();
    Table tbl_Union_TD_7409606_output("tbl_Union_TD_7409606_output", 6100000, 7, "");
    tbl_Union_TD_7409606_output.allocateHost();
    Table tbl_Project_TD_8597772_output("tbl_Project_TD_8597772_output", 6100000, 7, "");
    tbl_Project_TD_8597772_output.allocateHost();
    Table tbl_Project_TD_891514_output("tbl_Project_TD_891514_output", 6100000, 7, "");
    tbl_Project_TD_891514_output.allocateHost();
    Table tbl_Project_TD_8897836_output("tbl_Project_TD_8897836_output", 6100000, 7, "");
    tbl_Project_TD_8897836_output.allocateHost();
    Table tbl_Project_TD_8755301_output("tbl_Project_TD_8755301_output", 6100000, 7, "");
    tbl_Project_TD_8755301_output.allocateHost();
    Table tbl_Project_TD_8169831_output("tbl_Project_TD_8169831_output", 6100000, 7, "");
    tbl_Project_TD_8169831_output.allocateHost();
    Table tbl_Project_TD_8337980_output("tbl_Project_TD_8337980_output", 6100000, 7, "");
    tbl_Project_TD_8337980_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9721659_output("tbl_JOIN_LEFTOUTER_TD_9721659_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_9721659_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9423048_output("tbl_JOIN_LEFTOUTER_TD_9423048_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_9423048_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9445963_output("tbl_JOIN_LEFTOUTER_TD_9445963_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_9445963_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9768479_output("tbl_JOIN_LEFTOUTER_TD_9768479_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_9768479_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9594349_output("tbl_JOIN_LEFTOUTER_TD_9594349_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_9594349_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_9184596_output("tbl_JOIN_LEFTOUTER_TD_9184596_output", 6100000, 9, "");
    tbl_JOIN_LEFTOUTER_TD_9184596_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10374656_output("tbl_JOIN_INNER_TD_10374656_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10374656_output.allocateHost();
    Table tbl_Filter_TD_1075612_output("tbl_Filter_TD_1075612_output", 6100000, 4, "");
    tbl_Filter_TD_1075612_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10989655_output("tbl_JOIN_INNER_TD_10989655_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10989655_output.allocateHost();
    Table tbl_Filter_TD_10239260_output("tbl_Filter_TD_10239260_output", 6100000, 4, "");
    tbl_Filter_TD_10239260_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10472608_output("tbl_JOIN_INNER_TD_10472608_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10472608_output.allocateHost();
    Table tbl_Filter_TD_10435139_output("tbl_Filter_TD_10435139_output", 6100000, 4, "");
    tbl_Filter_TD_10435139_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10231897_output("tbl_JOIN_INNER_TD_10231897_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10231897_output.allocateHost();
    Table tbl_Filter_TD_10191231_output("tbl_Filter_TD_10191231_output", 6100000, 4, "");
    tbl_Filter_TD_10191231_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10737662_output("tbl_JOIN_INNER_TD_10737662_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10737662_output.allocateHost();
    Table tbl_Filter_TD_10628620_output("tbl_Filter_TD_10628620_output", 6100000, 4, "");
    tbl_Filter_TD_10628620_output.allocateHost();
    Table tbl_JOIN_INNER_TD_10360363_output("tbl_JOIN_INNER_TD_10360363_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_10360363_output.allocateHost();
    Table tbl_Filter_TD_10845837_output("tbl_Filter_TD_10845837_output", 6100000, 4, "");
    tbl_Filter_TD_10845837_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1183193_output("tbl_JOIN_INNER_TD_1183193_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_1183193_output.allocateHost();
    Table tbl_Filter_TD_11249743_output("tbl_Filter_TD_11249743_output", 6100000, 2, "");
    tbl_Filter_TD_11249743_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11365717_input;
    tbl_SerializeFromObject_TD_11365717_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11365717_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_11365717_input.addCol("cr_order_number", 8);
    tbl_SerializeFromObject_TD_11365717_input.addCol("cr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11365717_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_11365717_input.allocateHost();
    tbl_SerializeFromObject_TD_11365717_input.loadHost();
    Table tbl_JOIN_INNER_TD_11366416_output("tbl_JOIN_INNER_TD_11366416_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11366416_output.allocateHost();
    Table tbl_Filter_TD_11831921_output("tbl_Filter_TD_11831921_output", 6100000, 2, "");
    tbl_Filter_TD_11831921_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11820129_input;
    tbl_SerializeFromObject_TD_11820129_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11820129_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_11820129_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_11820129_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11820129_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_11820129_input.allocateHost();
    tbl_SerializeFromObject_TD_11820129_input.loadHost();
    Table tbl_JOIN_INNER_TD_11622015_output("tbl_JOIN_INNER_TD_11622015_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11622015_output.allocateHost();
    Table tbl_Filter_TD_11632846_output("tbl_Filter_TD_11632846_output", 6100000, 2, "");
    tbl_Filter_TD_11632846_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11262472_input;
    tbl_SerializeFromObject_TD_11262472_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11262472_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_11262472_input.addCol("wr_order_number", 8);
    tbl_SerializeFromObject_TD_11262472_input.addCol("wr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11262472_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_11262472_input.allocateHost();
    tbl_SerializeFromObject_TD_11262472_input.loadHost();
    Table tbl_JOIN_INNER_TD_11976730_output("tbl_JOIN_INNER_TD_11976730_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11976730_output.allocateHost();
    Table tbl_Filter_TD_11295616_output("tbl_Filter_TD_11295616_output", 6100000, 2, "");
    tbl_Filter_TD_11295616_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11558159_input;
    tbl_SerializeFromObject_TD_11558159_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11558159_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_11558159_input.addCol("cr_order_number", 8);
    tbl_SerializeFromObject_TD_11558159_input.addCol("cr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11558159_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_11558159_input.allocateHost();
    tbl_SerializeFromObject_TD_11558159_input.loadHost();
    Table tbl_JOIN_INNER_TD_11755906_output("tbl_JOIN_INNER_TD_11755906_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11755906_output.allocateHost();
    Table tbl_Filter_TD_11325589_output("tbl_Filter_TD_11325589_output", 6100000, 2, "");
    tbl_Filter_TD_11325589_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11949632_input;
    tbl_SerializeFromObject_TD_11949632_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11949632_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_11949632_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_11949632_input.addCol("sr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11949632_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_11949632_input.allocateHost();
    tbl_SerializeFromObject_TD_11949632_input.loadHost();
    Table tbl_JOIN_INNER_TD_11141128_output("tbl_JOIN_INNER_TD_11141128_output", 6100000, 9, "");
    tbl_JOIN_INNER_TD_11141128_output.allocateHost();
    Table tbl_Filter_TD_11517181_output("tbl_Filter_TD_11517181_output", 6100000, 2, "");
    tbl_Filter_TD_11517181_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11586081_input;
    tbl_SerializeFromObject_TD_11586081_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_11586081_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_11586081_input.addCol("wr_order_number", 8);
    tbl_SerializeFromObject_TD_11586081_input.addCol("wr_return_quantity", 4);
    tbl_SerializeFromObject_TD_11586081_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_11586081_input.allocateHost();
    tbl_SerializeFromObject_TD_11586081_input.loadHost();
    Table tbl_Filter_TD_12372116_output("tbl_Filter_TD_12372116_output", 6100000, 5, "");
    tbl_Filter_TD_12372116_output.allocateHost();
    Table tbl_Filter_TD_12453725_output("tbl_Filter_TD_12453725_output", 6100000, 5, "");
    tbl_Filter_TD_12453725_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12277594_input;
    tbl_SerializeFromObject_TD_12277594_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12277594_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12277594_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12277594_input.allocateHost();
    tbl_SerializeFromObject_TD_12277594_input.loadHost();
    Table tbl_Filter_TD_12152541_output("tbl_Filter_TD_12152541_output", 6100000, 5, "");
    tbl_Filter_TD_12152541_output.allocateHost();
    Table tbl_Filter_TD_12522029_output("tbl_Filter_TD_12522029_output", 6100000, 5, "");
    tbl_Filter_TD_12522029_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12226238_input;
    tbl_SerializeFromObject_TD_12226238_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12226238_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12226238_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12226238_input.allocateHost();
    tbl_SerializeFromObject_TD_12226238_input.loadHost();
    Table tbl_Filter_TD_12302038_output("tbl_Filter_TD_12302038_output", 6100000, 5, "");
    tbl_Filter_TD_12302038_output.allocateHost();
    Table tbl_Filter_TD_12753812_output("tbl_Filter_TD_12753812_output", 6100000, 5, "");
    tbl_Filter_TD_12753812_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12114092_input;
    tbl_SerializeFromObject_TD_12114092_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12114092_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12114092_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12114092_input.allocateHost();
    tbl_SerializeFromObject_TD_12114092_input.loadHost();
    Table tbl_Filter_TD_12784203_output("tbl_Filter_TD_12784203_output", 6100000, 5, "");
    tbl_Filter_TD_12784203_output.allocateHost();
    Table tbl_Filter_TD_12188944_output("tbl_Filter_TD_12188944_output", 6100000, 5, "");
    tbl_Filter_TD_12188944_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12575134_input;
    tbl_SerializeFromObject_TD_12575134_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12575134_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12575134_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12575134_input.allocateHost();
    tbl_SerializeFromObject_TD_12575134_input.loadHost();
    Table tbl_Filter_TD_12304147_output("tbl_Filter_TD_12304147_output", 6100000, 5, "");
    tbl_Filter_TD_12304147_output.allocateHost();
    Table tbl_Filter_TD_12755739_output("tbl_Filter_TD_12755739_output", 6100000, 5, "");
    tbl_Filter_TD_12755739_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12435647_input;
    tbl_SerializeFromObject_TD_12435647_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12435647_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12435647_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12435647_input.allocateHost();
    tbl_SerializeFromObject_TD_12435647_input.loadHost();
    Table tbl_Filter_TD_12228020_output("tbl_Filter_TD_12228020_output", 6100000, 5, "");
    tbl_Filter_TD_12228020_output.allocateHost();
    Table tbl_Filter_TD_12914083_output("tbl_Filter_TD_12914083_output", 6100000, 5, "");
    tbl_Filter_TD_12914083_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12430092_input;
    tbl_SerializeFromObject_TD_12430092_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12430092_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12430092_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_12430092_input.allocateHost();
    tbl_SerializeFromObject_TD_12430092_input.loadHost();
    Table tbl_SerializeFromObject_TD_13520314_input;
    tbl_SerializeFromObject_TD_13520314_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13520314_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13520314_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13520314_input.addCol("cs_order_number", 8);
    tbl_SerializeFromObject_TD_13520314_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13520314_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13520314_input.allocateHost();
    tbl_SerializeFromObject_TD_13520314_input.loadHost();
    Table tbl_SerializeFromObject_TD_1386805_input;
    tbl_SerializeFromObject_TD_1386805_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_1386805_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_1386805_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_1386805_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_1386805_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_1386805_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_1386805_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1386805_input.allocateHost();
    tbl_SerializeFromObject_TD_1386805_input.loadHost();
    Table tbl_SerializeFromObject_TD_13745050_input;
    tbl_SerializeFromObject_TD_13745050_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13745050_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13745050_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13745050_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_13745050_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13745050_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13745050_input.allocateHost();
    tbl_SerializeFromObject_TD_13745050_input.loadHost();
    Table tbl_SerializeFromObject_TD_13125133_input;
    tbl_SerializeFromObject_TD_13125133_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13125133_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13125133_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13125133_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13125133_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13125133_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13125133_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13125133_input.allocateHost();
    tbl_SerializeFromObject_TD_13125133_input.loadHost();
    Table tbl_SerializeFromObject_TD_13565282_input;
    tbl_SerializeFromObject_TD_13565282_input = Table("web_sales", web_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13565282_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13565282_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13565282_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_13565282_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13565282_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13565282_input.allocateHost();
    tbl_SerializeFromObject_TD_13565282_input.loadHost();
    Table tbl_SerializeFromObject_TD_13247360_input;
    tbl_SerializeFromObject_TD_13247360_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13247360_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13247360_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13247360_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13247360_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13247360_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13247360_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13247360_input.allocateHost();
    tbl_SerializeFromObject_TD_13247360_input.loadHost();
    Table tbl_SerializeFromObject_TD_13528200_input;
    tbl_SerializeFromObject_TD_13528200_input = Table("catalog_sales", catalog_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13528200_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13528200_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13528200_input.addCol("cs_order_number", 8);
    tbl_SerializeFromObject_TD_13528200_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_13528200_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13528200_input.allocateHost();
    tbl_SerializeFromObject_TD_13528200_input.loadHost();
    Table tbl_SerializeFromObject_TD_13581541_input;
    tbl_SerializeFromObject_TD_13581541_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13581541_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13581541_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13581541_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13581541_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13581541_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13581541_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13581541_input.allocateHost();
    tbl_SerializeFromObject_TD_13581541_input.loadHost();
    Table tbl_SerializeFromObject_TD_13805228_input;
    tbl_SerializeFromObject_TD_13805228_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13805228_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13805228_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13805228_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_13805228_input.addCol("ss_quantity", 4);
    tbl_SerializeFromObject_TD_13805228_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13805228_input.allocateHost();
    tbl_SerializeFromObject_TD_13805228_input.loadHost();
    Table tbl_SerializeFromObject_TD_13598361_input;
    tbl_SerializeFromObject_TD_13598361_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13598361_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13598361_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13598361_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13598361_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13598361_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13598361_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13598361_input.allocateHost();
    tbl_SerializeFromObject_TD_13598361_input.loadHost();
    Table tbl_SerializeFromObject_TD_13569250_input;
    tbl_SerializeFromObject_TD_13569250_input = Table("web_sales", web_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_13569250_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13569250_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13569250_input.addCol("ws_order_number", 8);
    tbl_SerializeFromObject_TD_13569250_input.addCol("ws_quantity", 4);
    tbl_SerializeFromObject_TD_13569250_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13569250_input.allocateHost();
    tbl_SerializeFromObject_TD_13569250_input.loadHost();
    Table tbl_SerializeFromObject_TD_13591599_input;
    tbl_SerializeFromObject_TD_13591599_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_13591599_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_13591599_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_13591599_input.addCol("i_class_id", 4);
    tbl_SerializeFromObject_TD_13591599_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_13591599_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_13591599_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_13591599_input.allocateHost();
    tbl_SerializeFromObject_TD_13591599_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_Aggregate_TD_561353_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_5334057_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_6554757_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_6554757_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_6385216_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_Aggregate_TD_6385216_output.allocateDevBuffer(context_a, 32);
    tbl_Union_TD_7216786_output.allocateDevBuffer(context_a, 32);
    tbl_Union_TD_7409606_output.allocateDevBuffer(context_a, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_561353_cmds;
    cfg_Aggregate_TD_561353_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_561353_gqe_aggr(cfg_Aggregate_TD_561353_cmds.cmd);
    cfg_Aggregate_TD_561353_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_561353_cmds_out;
    cfg_Aggregate_TD_561353_cmds_out.allocateHost();
    cfg_Aggregate_TD_561353_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_5334057_cmds;
    cfg_Aggregate_TD_5334057_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_5334057_gqe_aggr(cfg_Aggregate_TD_5334057_cmds.cmd);
    cfg_Aggregate_TD_5334057_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_5334057_cmds_out;
    cfg_Aggregate_TD_5334057_cmds_out.allocateHost();
    cfg_Aggregate_TD_5334057_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_6554757_cmds;
    cfg_Aggregate_TD_6554757_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_6554757_gqe_aggr(cfg_Aggregate_TD_6554757_cmds.cmd);
    cfg_Aggregate_TD_6554757_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_6554757_cmds_out;
    cfg_Aggregate_TD_6554757_cmds_out.allocateHost();
    cfg_Aggregate_TD_6554757_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_6385216_cmds;
    cfg_Aggregate_TD_6385216_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_6385216_gqe_aggr(cfg_Aggregate_TD_6385216_cmds.cmd);
    cfg_Aggregate_TD_6385216_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_6385216_cmds_out;
    cfg_Aggregate_TD_6385216_cmds_out.allocateHost();
    cfg_Aggregate_TD_6385216_cmds_out.allocateDevBuffer(context_a, 33);
    // *************************** Kernel Setup ************************* // 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_561353;
    krnl_Aggregate_TD_561353 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_561353.setup(tbl_Aggregate_TD_6554757_output, tbl_Aggregate_TD_561353_output_preprocess, cfg_Aggregate_TD_561353_cmds, cfg_Aggregate_TD_561353_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_5334057;
    krnl_Aggregate_TD_5334057 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_5334057.setup(tbl_Aggregate_TD_6385216_output, tbl_Aggregate_TD_5334057_output_preprocess, cfg_Aggregate_TD_5334057_cmds, cfg_Aggregate_TD_5334057_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_6554757;
    krnl_Aggregate_TD_6554757 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_6554757.setup(tbl_Union_TD_7216786_output, tbl_Aggregate_TD_6554757_output_preprocess, cfg_Aggregate_TD_6554757_cmds, cfg_Aggregate_TD_6554757_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_6385216;
    krnl_Aggregate_TD_6385216 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_6385216.setup(tbl_Union_TD_7409606_output, tbl_Aggregate_TD_6385216_output_preprocess, cfg_Aggregate_TD_6385216_cmds, cfg_Aggregate_TD_6385216_cmds_out, buftmp_a);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_561353;
    trans_Aggregate_TD_561353.setq(q_a);
    trans_Aggregate_TD_561353.add(&(cfg_Aggregate_TD_561353_cmds));
    transEngine trans_Aggregate_TD_561353_out;
    trans_Aggregate_TD_561353_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_5334057;
    trans_Aggregate_TD_5334057.setq(q_a);
    trans_Aggregate_TD_5334057.add(&(cfg_Aggregate_TD_5334057_cmds));
    transEngine trans_Aggregate_TD_5334057_out;
    trans_Aggregate_TD_5334057_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_6554757;
    trans_Aggregate_TD_6554757.setq(q_a);
    trans_Aggregate_TD_6554757.add(&(cfg_Aggregate_TD_6554757_cmds));
    transEngine trans_Aggregate_TD_6554757_out;
    trans_Aggregate_TD_6554757_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_6385216;
    trans_Aggregate_TD_6385216.setq(q_a);
    trans_Aggregate_TD_6385216.add(&(cfg_Aggregate_TD_6385216_cmds));
    transEngine trans_Aggregate_TD_6385216_out;
    trans_Aggregate_TD_6385216_out.setq(q_a);
    q_a.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_561353;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_561353;
    std::vector<cl::Event> events_Aggregate_TD_561353;
    events_h2d_wr_Aggregate_TD_561353.resize(1);
    events_d2h_rd_Aggregate_TD_561353.resize(1);
    events_Aggregate_TD_561353.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_561353;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_561353;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_5334057;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_5334057;
    std::vector<cl::Event> events_Aggregate_TD_5334057;
    events_h2d_wr_Aggregate_TD_5334057.resize(1);
    events_d2h_rd_Aggregate_TD_5334057.resize(1);
    events_Aggregate_TD_5334057.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_5334057;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_5334057;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_6554757;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_6554757;
    std::vector<cl::Event> events_Aggregate_TD_6554757;
    events_h2d_wr_Aggregate_TD_6554757.resize(1);
    events_d2h_rd_Aggregate_TD_6554757.resize(1);
    events_Aggregate_TD_6554757.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_6554757;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_6554757;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_6385216;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_6385216;
    std::vector<cl::Event> events_Aggregate_TD_6385216;
    events_h2d_wr_Aggregate_TD_6385216.resize(1);
    events_d2h_rd_Aggregate_TD_6385216.resize(1);
    events_Aggregate_TD_6385216.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_6385216;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_6385216;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_332560_s, tv_r_Filter_12_332560_e;
    gettimeofday(&tv_r_Filter_12_332560_s, 0);
    SW_Filter_TD_12914083(tbl_SerializeFromObject_TD_13591599_input, tbl_Filter_TD_12914083_output);
    gettimeofday(&tv_r_Filter_12_332560_e, 0);

    struct timeval tv_r_Filter_12_461633_s, tv_r_Filter_12_461633_e;
    gettimeofday(&tv_r_Filter_12_461633_s, 0);
    SW_Filter_TD_12228020(tbl_SerializeFromObject_TD_13569250_input, tbl_Filter_TD_12228020_output);
    gettimeofday(&tv_r_Filter_12_461633_e, 0);

    struct timeval tv_r_Filter_12_301366_s, tv_r_Filter_12_301366_e;
    gettimeofday(&tv_r_Filter_12_301366_s, 0);
    SW_Filter_TD_12755739(tbl_SerializeFromObject_TD_13598361_input, tbl_Filter_TD_12755739_output);
    gettimeofday(&tv_r_Filter_12_301366_e, 0);

    struct timeval tv_r_Filter_12_545794_s, tv_r_Filter_12_545794_e;
    gettimeofday(&tv_r_Filter_12_545794_s, 0);
    SW_Filter_TD_12304147(tbl_SerializeFromObject_TD_13805228_input, tbl_Filter_TD_12304147_output);
    gettimeofday(&tv_r_Filter_12_545794_e, 0);

    struct timeval tv_r_Filter_12_471486_s, tv_r_Filter_12_471486_e;
    gettimeofday(&tv_r_Filter_12_471486_s, 0);
    SW_Filter_TD_12188944(tbl_SerializeFromObject_TD_13581541_input, tbl_Filter_TD_12188944_output);
    gettimeofday(&tv_r_Filter_12_471486_e, 0);

    struct timeval tv_r_Filter_12_112611_s, tv_r_Filter_12_112611_e;
    gettimeofday(&tv_r_Filter_12_112611_s, 0);
    SW_Filter_TD_12784203(tbl_SerializeFromObject_TD_13528200_input, tbl_Filter_TD_12784203_output);
    gettimeofday(&tv_r_Filter_12_112611_e, 0);

    struct timeval tv_r_Filter_12_559597_s, tv_r_Filter_12_559597_e;
    gettimeofday(&tv_r_Filter_12_559597_s, 0);
    SW_Filter_TD_12753812(tbl_SerializeFromObject_TD_13247360_input, tbl_Filter_TD_12753812_output);
    gettimeofday(&tv_r_Filter_12_559597_e, 0);

    struct timeval tv_r_Filter_12_612445_s, tv_r_Filter_12_612445_e;
    gettimeofday(&tv_r_Filter_12_612445_s, 0);
    SW_Filter_TD_12302038(tbl_SerializeFromObject_TD_13565282_input, tbl_Filter_TD_12302038_output);
    gettimeofday(&tv_r_Filter_12_612445_e, 0);

    struct timeval tv_r_Filter_12_439500_s, tv_r_Filter_12_439500_e;
    gettimeofday(&tv_r_Filter_12_439500_s, 0);
    SW_Filter_TD_12522029(tbl_SerializeFromObject_TD_13125133_input, tbl_Filter_TD_12522029_output);
    gettimeofday(&tv_r_Filter_12_439500_e, 0);

    struct timeval tv_r_Filter_12_67601_s, tv_r_Filter_12_67601_e;
    gettimeofday(&tv_r_Filter_12_67601_s, 0);
    SW_Filter_TD_12152541(tbl_SerializeFromObject_TD_13745050_input, tbl_Filter_TD_12152541_output);
    gettimeofday(&tv_r_Filter_12_67601_e, 0);

    struct timeval tv_r_Filter_12_940808_s, tv_r_Filter_12_940808_e;
    gettimeofday(&tv_r_Filter_12_940808_s, 0);
    SW_Filter_TD_12453725(tbl_SerializeFromObject_TD_1386805_input, tbl_Filter_TD_12453725_output);
    gettimeofday(&tv_r_Filter_12_940808_e, 0);

    struct timeval tv_r_Filter_12_486488_s, tv_r_Filter_12_486488_e;
    gettimeofday(&tv_r_Filter_12_486488_s, 0);
    SW_Filter_TD_12372116(tbl_SerializeFromObject_TD_13520314_input, tbl_Filter_TD_12372116_output);
    gettimeofday(&tv_r_Filter_12_486488_e, 0);

    struct timeval tv_r_Filter_11_405497_s, tv_r_Filter_11_405497_e;
    gettimeofday(&tv_r_Filter_11_405497_s, 0);
    SW_Filter_TD_11517181(tbl_SerializeFromObject_TD_12430092_input, tbl_Filter_TD_11517181_output);
    gettimeofday(&tv_r_Filter_11_405497_e, 0);

    struct timeval tv_r_JOIN_INNER_11_446003_s, tv_r_JOIN_INNER_11_446003_e;
    gettimeofday(&tv_r_JOIN_INNER_11_446003_s, 0);
    SW_JOIN_INNER_TD_11141128(tbl_Filter_TD_12228020_output, tbl_Filter_TD_12914083_output, tbl_JOIN_INNER_TD_11141128_output);
    gettimeofday(&tv_r_JOIN_INNER_11_446003_e, 0);

    struct timeval tv_r_Filter_11_291388_s, tv_r_Filter_11_291388_e;
    gettimeofday(&tv_r_Filter_11_291388_s, 0);
    SW_Filter_TD_11325589(tbl_SerializeFromObject_TD_12435647_input, tbl_Filter_TD_11325589_output);
    gettimeofday(&tv_r_Filter_11_291388_e, 0);

    struct timeval tv_r_JOIN_INNER_11_607923_s, tv_r_JOIN_INNER_11_607923_e;
    gettimeofday(&tv_r_JOIN_INNER_11_607923_s, 0);
    SW_JOIN_INNER_TD_11755906(tbl_Filter_TD_12304147_output, tbl_Filter_TD_12755739_output, tbl_JOIN_INNER_TD_11755906_output);
    gettimeofday(&tv_r_JOIN_INNER_11_607923_e, 0);

    struct timeval tv_r_Filter_11_894132_s, tv_r_Filter_11_894132_e;
    gettimeofday(&tv_r_Filter_11_894132_s, 0);
    SW_Filter_TD_11295616(tbl_SerializeFromObject_TD_12575134_input, tbl_Filter_TD_11295616_output);
    gettimeofday(&tv_r_Filter_11_894132_e, 0);

    struct timeval tv_r_JOIN_INNER_11_878555_s, tv_r_JOIN_INNER_11_878555_e;
    gettimeofday(&tv_r_JOIN_INNER_11_878555_s, 0);
    SW_JOIN_INNER_TD_11976730(tbl_Filter_TD_12784203_output, tbl_Filter_TD_12188944_output, tbl_JOIN_INNER_TD_11976730_output);
    gettimeofday(&tv_r_JOIN_INNER_11_878555_e, 0);

    struct timeval tv_r_Filter_11_196263_s, tv_r_Filter_11_196263_e;
    gettimeofday(&tv_r_Filter_11_196263_s, 0);
    SW_Filter_TD_11632846(tbl_SerializeFromObject_TD_12114092_input, tbl_Filter_TD_11632846_output);
    gettimeofday(&tv_r_Filter_11_196263_e, 0);

    struct timeval tv_r_JOIN_INNER_11_620203_s, tv_r_JOIN_INNER_11_620203_e;
    gettimeofday(&tv_r_JOIN_INNER_11_620203_s, 0);
    SW_JOIN_INNER_TD_11622015(tbl_Filter_TD_12302038_output, tbl_Filter_TD_12753812_output, tbl_JOIN_INNER_TD_11622015_output);
    gettimeofday(&tv_r_JOIN_INNER_11_620203_e, 0);

    struct timeval tv_r_Filter_11_273744_s, tv_r_Filter_11_273744_e;
    gettimeofday(&tv_r_Filter_11_273744_s, 0);
    SW_Filter_TD_11831921(tbl_SerializeFromObject_TD_12226238_input, tbl_Filter_TD_11831921_output);
    gettimeofday(&tv_r_Filter_11_273744_e, 0);

    struct timeval tv_r_JOIN_INNER_11_887375_s, tv_r_JOIN_INNER_11_887375_e;
    gettimeofday(&tv_r_JOIN_INNER_11_887375_s, 0);
    SW_JOIN_INNER_TD_11366416(tbl_Filter_TD_12152541_output, tbl_Filter_TD_12522029_output, tbl_JOIN_INNER_TD_11366416_output);
    gettimeofday(&tv_r_JOIN_INNER_11_887375_e, 0);

    struct timeval tv_r_Filter_11_814862_s, tv_r_Filter_11_814862_e;
    gettimeofday(&tv_r_Filter_11_814862_s, 0);
    SW_Filter_TD_11249743(tbl_SerializeFromObject_TD_12277594_input, tbl_Filter_TD_11249743_output);
    gettimeofday(&tv_r_Filter_11_814862_e, 0);

    struct timeval tv_r_JOIN_INNER_11_444500_s, tv_r_JOIN_INNER_11_444500_e;
    gettimeofday(&tv_r_JOIN_INNER_11_444500_s, 0);
    SW_JOIN_INNER_TD_1183193(tbl_Filter_TD_12372116_output, tbl_Filter_TD_12453725_output, tbl_JOIN_INNER_TD_1183193_output);
    gettimeofday(&tv_r_JOIN_INNER_11_444500_e, 0);

    struct timeval tv_r_Filter_10_975379_s, tv_r_Filter_10_975379_e;
    gettimeofday(&tv_r_Filter_10_975379_s, 0);
    SW_Filter_TD_10845837(tbl_SerializeFromObject_TD_11586081_input, tbl_Filter_TD_10845837_output);
    gettimeofday(&tv_r_Filter_10_975379_e, 0);

    struct timeval tv_r_JOIN_INNER_10_290805_s, tv_r_JOIN_INNER_10_290805_e;
    gettimeofday(&tv_r_JOIN_INNER_10_290805_s, 0);
    SW_JOIN_INNER_TD_10360363(tbl_JOIN_INNER_TD_11141128_output, tbl_Filter_TD_11517181_output, tbl_JOIN_INNER_TD_10360363_output);
    gettimeofday(&tv_r_JOIN_INNER_10_290805_e, 0);

    struct timeval tv_r_Filter_10_331198_s, tv_r_Filter_10_331198_e;
    gettimeofday(&tv_r_Filter_10_331198_s, 0);
    SW_Filter_TD_10628620(tbl_SerializeFromObject_TD_11949632_input, tbl_Filter_TD_10628620_output);
    gettimeofday(&tv_r_Filter_10_331198_e, 0);

    struct timeval tv_r_JOIN_INNER_10_351375_s, tv_r_JOIN_INNER_10_351375_e;
    gettimeofday(&tv_r_JOIN_INNER_10_351375_s, 0);
    SW_JOIN_INNER_TD_10737662(tbl_JOIN_INNER_TD_11755906_output, tbl_Filter_TD_11325589_output, tbl_JOIN_INNER_TD_10737662_output);
    gettimeofday(&tv_r_JOIN_INNER_10_351375_e, 0);

    struct timeval tv_r_Filter_10_635821_s, tv_r_Filter_10_635821_e;
    gettimeofday(&tv_r_Filter_10_635821_s, 0);
    SW_Filter_TD_10191231(tbl_SerializeFromObject_TD_11558159_input, tbl_Filter_TD_10191231_output);
    gettimeofday(&tv_r_Filter_10_635821_e, 0);

    struct timeval tv_r_JOIN_INNER_10_840154_s, tv_r_JOIN_INNER_10_840154_e;
    gettimeofday(&tv_r_JOIN_INNER_10_840154_s, 0);
    SW_JOIN_INNER_TD_10231897(tbl_JOIN_INNER_TD_11976730_output, tbl_Filter_TD_11295616_output, tbl_JOIN_INNER_TD_10231897_output);
    gettimeofday(&tv_r_JOIN_INNER_10_840154_e, 0);

    struct timeval tv_r_Filter_10_882643_s, tv_r_Filter_10_882643_e;
    gettimeofday(&tv_r_Filter_10_882643_s, 0);
    SW_Filter_TD_10435139(tbl_SerializeFromObject_TD_11262472_input, tbl_Filter_TD_10435139_output);
    gettimeofday(&tv_r_Filter_10_882643_e, 0);

    struct timeval tv_r_JOIN_INNER_10_674601_s, tv_r_JOIN_INNER_10_674601_e;
    gettimeofday(&tv_r_JOIN_INNER_10_674601_s, 0);
    SW_JOIN_INNER_TD_10472608(tbl_JOIN_INNER_TD_11622015_output, tbl_Filter_TD_11632846_output, tbl_JOIN_INNER_TD_10472608_output);
    gettimeofday(&tv_r_JOIN_INNER_10_674601_e, 0);

    struct timeval tv_r_Filter_10_184774_s, tv_r_Filter_10_184774_e;
    gettimeofday(&tv_r_Filter_10_184774_s, 0);
    SW_Filter_TD_10239260(tbl_SerializeFromObject_TD_11820129_input, tbl_Filter_TD_10239260_output);
    gettimeofday(&tv_r_Filter_10_184774_e, 0);

    struct timeval tv_r_JOIN_INNER_10_271582_s, tv_r_JOIN_INNER_10_271582_e;
    gettimeofday(&tv_r_JOIN_INNER_10_271582_s, 0);
    SW_JOIN_INNER_TD_10989655(tbl_JOIN_INNER_TD_11366416_output, tbl_Filter_TD_11831921_output, tbl_JOIN_INNER_TD_10989655_output);
    gettimeofday(&tv_r_JOIN_INNER_10_271582_e, 0);

    struct timeval tv_r_Filter_10_127831_s, tv_r_Filter_10_127831_e;
    gettimeofday(&tv_r_Filter_10_127831_s, 0);
    SW_Filter_TD_1075612(tbl_SerializeFromObject_TD_11365717_input, tbl_Filter_TD_1075612_output);
    gettimeofday(&tv_r_Filter_10_127831_e, 0);

    struct timeval tv_r_JOIN_INNER_10_889296_s, tv_r_JOIN_INNER_10_889296_e;
    gettimeofday(&tv_r_JOIN_INNER_10_889296_s, 0);
    SW_JOIN_INNER_TD_10374656(tbl_JOIN_INNER_TD_1183193_output, tbl_Filter_TD_11249743_output, tbl_JOIN_INNER_TD_10374656_output);
    gettimeofday(&tv_r_JOIN_INNER_10_889296_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_378096_s, tv_r_JOIN_LEFTOUTER_9_378096_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_378096_s, 0);
    SW_JOIN_LEFTOUTER_TD_9184596(tbl_JOIN_INNER_TD_10360363_output, tbl_Filter_TD_10845837_output, tbl_JOIN_LEFTOUTER_TD_9184596_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_378096_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_947328_s, tv_r_JOIN_LEFTOUTER_9_947328_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_947328_s, 0);
    SW_JOIN_LEFTOUTER_TD_9594349(tbl_JOIN_INNER_TD_10737662_output, tbl_Filter_TD_10628620_output, tbl_JOIN_LEFTOUTER_TD_9594349_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_947328_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_116610_s, tv_r_JOIN_LEFTOUTER_9_116610_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_116610_s, 0);
    SW_JOIN_LEFTOUTER_TD_9768479(tbl_JOIN_INNER_TD_10231897_output, tbl_Filter_TD_10191231_output, tbl_JOIN_LEFTOUTER_TD_9768479_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_116610_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_618419_s, tv_r_JOIN_LEFTOUTER_9_618419_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_618419_s, 0);
    SW_JOIN_LEFTOUTER_TD_9445963(tbl_JOIN_INNER_TD_10472608_output, tbl_Filter_TD_10435139_output, tbl_JOIN_LEFTOUTER_TD_9445963_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_618419_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_71484_s, tv_r_JOIN_LEFTOUTER_9_71484_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_71484_s, 0);
    SW_JOIN_LEFTOUTER_TD_9423048(tbl_JOIN_INNER_TD_10989655_output, tbl_Filter_TD_10239260_output, tbl_JOIN_LEFTOUTER_TD_9423048_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_71484_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_9_779330_s, tv_r_JOIN_LEFTOUTER_9_779330_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_779330_s, 0);
    SW_JOIN_LEFTOUTER_TD_9721659(tbl_JOIN_INNER_TD_10374656_output, tbl_Filter_TD_1075612_output, tbl_JOIN_LEFTOUTER_TD_9721659_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_9_779330_e, 0);

    struct timeval tv_r_Project_8_995871_s, tv_r_Project_8_995871_e;
    gettimeofday(&tv_r_Project_8_995871_s, 0);
    SW_Project_TD_8337980(tbl_JOIN_LEFTOUTER_TD_9184596_output, tbl_Project_TD_8337980_output);
    gettimeofday(&tv_r_Project_8_995871_e, 0);

    struct timeval tv_r_Project_8_542709_s, tv_r_Project_8_542709_e;
    gettimeofday(&tv_r_Project_8_542709_s, 0);
    SW_Project_TD_8169831(tbl_JOIN_LEFTOUTER_TD_9594349_output, tbl_Project_TD_8169831_output);
    gettimeofday(&tv_r_Project_8_542709_e, 0);

    struct timeval tv_r_Project_8_61416_s, tv_r_Project_8_61416_e;
    gettimeofday(&tv_r_Project_8_61416_s, 0);
    SW_Project_TD_8755301(tbl_JOIN_LEFTOUTER_TD_9768479_output, tbl_Project_TD_8755301_output);
    gettimeofday(&tv_r_Project_8_61416_e, 0);

    struct timeval tv_r_Project_8_419000_s, tv_r_Project_8_419000_e;
    gettimeofday(&tv_r_Project_8_419000_s, 0);
    SW_Project_TD_8897836(tbl_JOIN_LEFTOUTER_TD_9445963_output, tbl_Project_TD_8897836_output);
    gettimeofday(&tv_r_Project_8_419000_e, 0);

    struct timeval tv_r_Project_8_2960_s, tv_r_Project_8_2960_e;
    gettimeofday(&tv_r_Project_8_2960_s, 0);
    SW_Project_TD_891514(tbl_JOIN_LEFTOUTER_TD_9423048_output, tbl_Project_TD_891514_output);
    gettimeofday(&tv_r_Project_8_2960_e, 0);

    struct timeval tv_r_Project_8_645069_s, tv_r_Project_8_645069_e;
    gettimeofday(&tv_r_Project_8_645069_s, 0);
    SW_Project_TD_8597772(tbl_JOIN_LEFTOUTER_TD_9721659_output, tbl_Project_TD_8597772_output);
    gettimeofday(&tv_r_Project_8_645069_e, 0);

    struct timeval tv_r_Union_7_932534_s, tv_r_Union_7_932534_e;
    gettimeofday(&tv_r_Union_7_932534_s, 0);
    SW_Union_TD_7409606(tbl_Project_TD_8755301_output, tbl_Project_TD_8169831_output, tbl_Project_TD_8337980_output, tbl_Union_TD_7409606_output);
    gettimeofday(&tv_r_Union_7_932534_e, 0);

    struct timeval tv_r_Union_7_283251_s, tv_r_Union_7_283251_e;
    gettimeofday(&tv_r_Union_7_283251_s, 0);
    SW_Union_TD_7216786(tbl_Project_TD_8597772_output, tbl_Project_TD_891514_output, tbl_Project_TD_8897836_output, tbl_Union_TD_7216786_output);
    gettimeofday(&tv_r_Union_7_283251_e, 0);

    struct timeval tv_r_Aggregate_6_108648_s, tv_r_Aggregate_6_108648_e;
    gettimeofday(&tv_r_Aggregate_6_108648_s, 0);
    trans_Aggregate_TD_6385216.add(&(tbl_Union_TD_7409606_output));
    trans_Aggregate_TD_6385216.host2dev(0, &(prev_events_grp_Aggregate_TD_6385216), &(events_h2d_wr_Aggregate_TD_6385216[0]));
    events_grp_Aggregate_TD_6385216.push_back(events_h2d_wr_Aggregate_TD_6385216[0]);
    krnl_Aggregate_TD_6385216.run(0, &(events_grp_Aggregate_TD_6385216), &(events_Aggregate_TD_6385216[0]));
    
    trans_Aggregate_TD_6385216_out.add(&(tbl_Aggregate_TD_6385216_output_preprocess));
    trans_Aggregate_TD_6385216_out.dev2host(0, &(events_Aggregate_TD_6385216), &(events_d2h_rd_Aggregate_TD_6385216[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_6385216_consolidate(tbl_Aggregate_TD_6385216_output_preprocess, tbl_Aggregate_TD_6385216_output);
    gettimeofday(&tv_r_Aggregate_6_108648_e, 0);

    struct timeval tv_r_Aggregate_6_507517_s, tv_r_Aggregate_6_507517_e;
    gettimeofday(&tv_r_Aggregate_6_507517_s, 0);
    trans_Aggregate_TD_6554757.add(&(tbl_Union_TD_7216786_output));
    trans_Aggregate_TD_6554757.host2dev(0, &(prev_events_grp_Aggregate_TD_6554757), &(events_h2d_wr_Aggregate_TD_6554757[0]));
    events_grp_Aggregate_TD_6554757.push_back(events_h2d_wr_Aggregate_TD_6554757[0]);
    krnl_Aggregate_TD_6554757.run(0, &(events_grp_Aggregate_TD_6554757), &(events_Aggregate_TD_6554757[0]));
    
    trans_Aggregate_TD_6554757_out.add(&(tbl_Aggregate_TD_6554757_output_preprocess));
    trans_Aggregate_TD_6554757_out.dev2host(0, &(events_Aggregate_TD_6554757), &(events_d2h_rd_Aggregate_TD_6554757[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_6554757_consolidate(tbl_Aggregate_TD_6554757_output_preprocess, tbl_Aggregate_TD_6554757_output);
    gettimeofday(&tv_r_Aggregate_6_507517_e, 0);

    struct timeval tv_r_Aggregate_5_951000_s, tv_r_Aggregate_5_951000_e;
    gettimeofday(&tv_r_Aggregate_5_951000_s, 0);
    prev_events_grp_Aggregate_TD_5334057.push_back(events_h2d_wr_Aggregate_TD_6385216[0]);
    trans_Aggregate_TD_5334057.add(&(tbl_Aggregate_TD_6385216_output));
    trans_Aggregate_TD_5334057.host2dev(0, &(prev_events_grp_Aggregate_TD_5334057), &(events_h2d_wr_Aggregate_TD_5334057[0]));
    events_grp_Aggregate_TD_5334057.push_back(events_h2d_wr_Aggregate_TD_5334057[0]);
    events_grp_Aggregate_TD_5334057.push_back(events_Aggregate_TD_6385216[0]);
    krnl_Aggregate_TD_5334057.run(0, &(events_grp_Aggregate_TD_5334057), &(events_Aggregate_TD_5334057[0]));
    
    trans_Aggregate_TD_5334057_out.add(&(tbl_Aggregate_TD_5334057_output_preprocess));
    trans_Aggregate_TD_5334057_out.dev2host(0, &(events_Aggregate_TD_5334057), &(events_d2h_rd_Aggregate_TD_5334057[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_5334057_consolidate(tbl_Aggregate_TD_5334057_output_preprocess, tbl_Aggregate_TD_5334057_output);
    gettimeofday(&tv_r_Aggregate_5_951000_e, 0);

    struct timeval tv_r_Aggregate_5_746692_s, tv_r_Aggregate_5_746692_e;
    gettimeofday(&tv_r_Aggregate_5_746692_s, 0);
    prev_events_grp_Aggregate_TD_561353.push_back(events_h2d_wr_Aggregate_TD_6554757[0]);
    trans_Aggregate_TD_561353.add(&(tbl_Aggregate_TD_6554757_output));
    trans_Aggregate_TD_561353.host2dev(0, &(prev_events_grp_Aggregate_TD_561353), &(events_h2d_wr_Aggregate_TD_561353[0]));
    events_grp_Aggregate_TD_561353.push_back(events_h2d_wr_Aggregate_TD_561353[0]);
    events_grp_Aggregate_TD_561353.push_back(events_Aggregate_TD_6554757[0]);
    krnl_Aggregate_TD_561353.run(0, &(events_grp_Aggregate_TD_561353), &(events_Aggregate_TD_561353[0]));
    
    trans_Aggregate_TD_561353_out.add(&(tbl_Aggregate_TD_561353_output_preprocess));
    trans_Aggregate_TD_561353_out.dev2host(0, &(events_Aggregate_TD_561353), &(events_d2h_rd_Aggregate_TD_561353[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_561353_consolidate(tbl_Aggregate_TD_561353_output_preprocess, tbl_Aggregate_TD_561353_output);
    gettimeofday(&tv_r_Aggregate_5_746692_e, 0);

    struct timeval tv_r_JOIN_INNER_4_112182_s, tv_r_JOIN_INNER_4_112182_e;
    gettimeofday(&tv_r_JOIN_INNER_4_112182_s, 0);
    SW_JOIN_INNER_TD_4832147(tbl_Aggregate_TD_561353_output, tbl_Aggregate_TD_5334057_output, tbl_JOIN_INNER_TD_4832147_output);
    gettimeofday(&tv_r_JOIN_INNER_4_112182_e, 0);

    struct timeval tv_r_Project_3_312236_s, tv_r_Project_3_312236_e;
    gettimeofday(&tv_r_Project_3_312236_s, 0);
    SW_Project_TD_3501667(tbl_JOIN_INNER_TD_4832147_output, tbl_Project_TD_3501667_output);
    gettimeofday(&tv_r_Project_3_312236_e, 0);

    struct timeval tv_r_Sort_2_903367_s, tv_r_Sort_2_903367_e;
    gettimeofday(&tv_r_Sort_2_903367_s, 0);
    SW_Sort_TD_2155974(tbl_Project_TD_3501667_output, tbl_Sort_TD_2155974_output);
    gettimeofday(&tv_r_Sort_2_903367_e, 0);

    struct timeval tv_r_LocalLimit_1_695343_s, tv_r_LocalLimit_1_695343_e;
    gettimeofday(&tv_r_LocalLimit_1_695343_s, 0);
    SW_LocalLimit_TD_1246959(tbl_Sort_TD_2155974_output, tbl_LocalLimit_TD_1246959_output);
    gettimeofday(&tv_r_LocalLimit_1_695343_e, 0);

    struct timeval tv_r_GlobalLimit_0_919521_s, tv_r_GlobalLimit_0_919521_e;
    gettimeofday(&tv_r_GlobalLimit_0_919521_s, 0);
    SW_GlobalLimit_TD_0855047(tbl_LocalLimit_TD_1246959_output, tbl_GlobalLimit_TD_0855047_output);
    gettimeofday(&tv_r_GlobalLimit_0_919521_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_332560_s, &tv_r_Filter_12_332560_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13591599_input: " << tbl_SerializeFromObject_TD_13591599_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_461633_s, &tv_r_Filter_12_461633_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13569250_input: " << tbl_SerializeFromObject_TD_13569250_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_301366_s, &tv_r_Filter_12_301366_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13598361_input: " << tbl_SerializeFromObject_TD_13598361_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_545794_s, &tv_r_Filter_12_545794_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13805228_input: " << tbl_SerializeFromObject_TD_13805228_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_471486_s, &tv_r_Filter_12_471486_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13581541_input: " << tbl_SerializeFromObject_TD_13581541_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_112611_s, &tv_r_Filter_12_112611_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13528200_input: " << tbl_SerializeFromObject_TD_13528200_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_559597_s, &tv_r_Filter_12_559597_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13247360_input: " << tbl_SerializeFromObject_TD_13247360_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_612445_s, &tv_r_Filter_12_612445_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13565282_input: " << tbl_SerializeFromObject_TD_13565282_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_439500_s, &tv_r_Filter_12_439500_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13125133_input: " << tbl_SerializeFromObject_TD_13125133_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_67601_s, &tv_r_Filter_12_67601_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13745050_input: " << tbl_SerializeFromObject_TD_13745050_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_940808_s, &tv_r_Filter_12_940808_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1386805_input: " << tbl_SerializeFromObject_TD_1386805_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_486488_s, &tv_r_Filter_12_486488_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13520314_input: " << tbl_SerializeFromObject_TD_13520314_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_405497_s, &tv_r_Filter_11_405497_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12430092_input: " << tbl_SerializeFromObject_TD_12430092_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_446003_s, &tv_r_JOIN_INNER_11_446003_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12228020_output: " << tbl_Filter_TD_12228020_output.getNumRow() << " " << "tbl_Filter_TD_12914083_output: " << tbl_Filter_TD_12914083_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_291388_s, &tv_r_Filter_11_291388_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12435647_input: " << tbl_SerializeFromObject_TD_12435647_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_607923_s, &tv_r_JOIN_INNER_11_607923_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12304147_output: " << tbl_Filter_TD_12304147_output.getNumRow() << " " << "tbl_Filter_TD_12755739_output: " << tbl_Filter_TD_12755739_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_894132_s, &tv_r_Filter_11_894132_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12575134_input: " << tbl_SerializeFromObject_TD_12575134_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_878555_s, &tv_r_JOIN_INNER_11_878555_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12784203_output: " << tbl_Filter_TD_12784203_output.getNumRow() << " " << "tbl_Filter_TD_12188944_output: " << tbl_Filter_TD_12188944_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_196263_s, &tv_r_Filter_11_196263_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12114092_input: " << tbl_SerializeFromObject_TD_12114092_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_620203_s, &tv_r_JOIN_INNER_11_620203_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12302038_output: " << tbl_Filter_TD_12302038_output.getNumRow() << " " << "tbl_Filter_TD_12753812_output: " << tbl_Filter_TD_12753812_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_273744_s, &tv_r_Filter_11_273744_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12226238_input: " << tbl_SerializeFromObject_TD_12226238_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_887375_s, &tv_r_JOIN_INNER_11_887375_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12152541_output: " << tbl_Filter_TD_12152541_output.getNumRow() << " " << "tbl_Filter_TD_12522029_output: " << tbl_Filter_TD_12522029_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_814862_s, &tv_r_Filter_11_814862_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12277594_input: " << tbl_SerializeFromObject_TD_12277594_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_444500_s, &tv_r_JOIN_INNER_11_444500_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12372116_output: " << tbl_Filter_TD_12372116_output.getNumRow() << " " << "tbl_Filter_TD_12453725_output: " << tbl_Filter_TD_12453725_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_975379_s, &tv_r_Filter_10_975379_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11586081_input: " << tbl_SerializeFromObject_TD_11586081_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_290805_s, &tv_r_JOIN_INNER_10_290805_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11141128_output: " << tbl_JOIN_INNER_TD_11141128_output.getNumRow() << " " << "tbl_Filter_TD_11517181_output: " << tbl_Filter_TD_11517181_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_331198_s, &tv_r_Filter_10_331198_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11949632_input: " << tbl_SerializeFromObject_TD_11949632_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_351375_s, &tv_r_JOIN_INNER_10_351375_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11755906_output: " << tbl_JOIN_INNER_TD_11755906_output.getNumRow() << " " << "tbl_Filter_TD_11325589_output: " << tbl_Filter_TD_11325589_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_635821_s, &tv_r_Filter_10_635821_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11558159_input: " << tbl_SerializeFromObject_TD_11558159_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_840154_s, &tv_r_JOIN_INNER_10_840154_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11976730_output: " << tbl_JOIN_INNER_TD_11976730_output.getNumRow() << " " << "tbl_Filter_TD_11295616_output: " << tbl_Filter_TD_11295616_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_882643_s, &tv_r_Filter_10_882643_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11262472_input: " << tbl_SerializeFromObject_TD_11262472_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_674601_s, &tv_r_JOIN_INNER_10_674601_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11622015_output: " << tbl_JOIN_INNER_TD_11622015_output.getNumRow() << " " << "tbl_Filter_TD_11632846_output: " << tbl_Filter_TD_11632846_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_184774_s, &tv_r_Filter_10_184774_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11820129_input: " << tbl_SerializeFromObject_TD_11820129_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_271582_s, &tv_r_JOIN_INNER_10_271582_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11366416_output: " << tbl_JOIN_INNER_TD_11366416_output.getNumRow() << " " << "tbl_Filter_TD_11831921_output: " << tbl_Filter_TD_11831921_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_127831_s, &tv_r_Filter_10_127831_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11365717_input: " << tbl_SerializeFromObject_TD_11365717_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_889296_s, &tv_r_JOIN_INNER_10_889296_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1183193_output: " << tbl_JOIN_INNER_TD_1183193_output.getNumRow() << " " << "tbl_Filter_TD_11249743_output: " << tbl_Filter_TD_11249743_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_378096_s, &tv_r_JOIN_LEFTOUTER_9_378096_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10360363_output: " << tbl_JOIN_INNER_TD_10360363_output.getNumRow() << " " << "tbl_Filter_TD_10845837_output: " << tbl_Filter_TD_10845837_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_947328_s, &tv_r_JOIN_LEFTOUTER_9_947328_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10737662_output: " << tbl_JOIN_INNER_TD_10737662_output.getNumRow() << " " << "tbl_Filter_TD_10628620_output: " << tbl_Filter_TD_10628620_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_116610_s, &tv_r_JOIN_LEFTOUTER_9_116610_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10231897_output: " << tbl_JOIN_INNER_TD_10231897_output.getNumRow() << " " << "tbl_Filter_TD_10191231_output: " << tbl_Filter_TD_10191231_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_618419_s, &tv_r_JOIN_LEFTOUTER_9_618419_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10472608_output: " << tbl_JOIN_INNER_TD_10472608_output.getNumRow() << " " << "tbl_Filter_TD_10435139_output: " << tbl_Filter_TD_10435139_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_71484_s, &tv_r_JOIN_LEFTOUTER_9_71484_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10989655_output: " << tbl_JOIN_INNER_TD_10989655_output.getNumRow() << " " << "tbl_Filter_TD_10239260_output: " << tbl_Filter_TD_10239260_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_9: " << tvdiff(&tv_r_JOIN_LEFTOUTER_9_779330_s, &tv_r_JOIN_LEFTOUTER_9_779330_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10374656_output: " << tbl_JOIN_INNER_TD_10374656_output.getNumRow() << " " << "tbl_Filter_TD_1075612_output: " << tbl_Filter_TD_1075612_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_995871_s, &tv_r_Project_8_995871_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9184596_output: " << tbl_JOIN_LEFTOUTER_TD_9184596_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_542709_s, &tv_r_Project_8_542709_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9594349_output: " << tbl_JOIN_LEFTOUTER_TD_9594349_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_61416_s, &tv_r_Project_8_61416_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9768479_output: " << tbl_JOIN_LEFTOUTER_TD_9768479_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_419000_s, &tv_r_Project_8_419000_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9445963_output: " << tbl_JOIN_LEFTOUTER_TD_9445963_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_2960_s, &tv_r_Project_8_2960_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9423048_output: " << tbl_JOIN_LEFTOUTER_TD_9423048_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_645069_s, &tv_r_Project_8_645069_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_9721659_output: " << tbl_JOIN_LEFTOUTER_TD_9721659_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_932534_s, &tv_r_Union_7_932534_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8755301_output: " << tbl_Project_TD_8755301_output.getNumRow() << " " << "tbl_Project_TD_8169831_output: " << tbl_Project_TD_8169831_output.getNumRow() << " " << "tbl_Project_TD_8337980_output: " << tbl_Project_TD_8337980_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_283251_s, &tv_r_Union_7_283251_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8597772_output: " << tbl_Project_TD_8597772_output.getNumRow() << " " << "tbl_Project_TD_891514_output: " << tbl_Project_TD_891514_output.getNumRow() << " " << "tbl_Project_TD_8897836_output: " << tbl_Project_TD_8897836_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_108648_s, &tv_r_Aggregate_6_108648_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7409606_output: " << tbl_Union_TD_7409606_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_507517_s, &tv_r_Aggregate_6_507517_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7216786_output: " << tbl_Union_TD_7216786_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_951000_s, &tv_r_Aggregate_5_951000_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6385216_output: " << tbl_Aggregate_TD_6385216_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_746692_s, &tv_r_Aggregate_5_746692_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6554757_output: " << tbl_Aggregate_TD_6554757_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_112182_s, &tv_r_JOIN_INNER_4_112182_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_561353_output: " << tbl_Aggregate_TD_561353_output.getNumRow() << " " << "tbl_Aggregate_TD_5334057_output: " << tbl_Aggregate_TD_5334057_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_312236_s, &tv_r_Project_3_312236_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4832147_output: " << tbl_JOIN_INNER_TD_4832147_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_903367_s, &tv_r_Sort_2_903367_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3501667_output: " << tbl_Project_TD_3501667_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_695343_s, &tv_r_LocalLimit_1_695343_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2155974_output: " << tbl_Sort_TD_2155974_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_919521_s, &tv_r_GlobalLimit_0_919521_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1246959_output: " << tbl_LocalLimit_TD_1246959_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 4.646684 * 1000 << "ms" << std::endl; 
    return 0; 
}
