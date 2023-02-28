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

#include "cfgFunc_q64.hpp" 
#include "q64.hpp" 

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
    std::cout << "NOTE:running query #64\n."; 
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
    Table tbl_Sort_TD_0922223_output("tbl_Sort_TD_0922223_output", 6100000, 22, "");
    tbl_Sort_TD_0922223_output.allocateHost();
    Table tbl_Project_TD_1192106_output("tbl_Project_TD_1192106_output", 6100000, 22, "");
    tbl_Project_TD_1192106_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2326277_output("tbl_JOIN_INNER_TD_2326277_output", 6100000, 21, "");
    tbl_JOIN_INNER_TD_2326277_output.allocateHost();
    Table tbl_Aggregate_TD_3268092_output("tbl_Aggregate_TD_3268092_output", 6100000, 17, "");
    tbl_Aggregate_TD_3268092_output.allocateHost();
    Table tbl_Aggregate_TD_3518693_output("tbl_Aggregate_TD_3518693_output", 6100000, 8, "");
    tbl_Aggregate_TD_3518693_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4192077_output("tbl_JOIN_INNER_TD_4192077_output", 6100000, 18, "");
    tbl_JOIN_INNER_TD_4192077_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4873104_output("tbl_JOIN_INNER_TD_4873104_output", 6100000, 18, "");
    tbl_JOIN_INNER_TD_4873104_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5696297_output("tbl_JOIN_INNER_TD_5696297_output", 6100000, 17, "");
    tbl_JOIN_INNER_TD_5696297_output.allocateHost();
    Table tbl_Filter_TD_5832514_output("tbl_Filter_TD_5832514_output", 6100000, 2, "");
    tbl_Filter_TD_5832514_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5768385_output("tbl_JOIN_INNER_TD_5768385_output", 6100000, 17, "");
    tbl_JOIN_INNER_TD_5768385_output.allocateHost();
    Table tbl_Filter_TD_5828316_output("tbl_Filter_TD_5828316_output", 6100000, 2, "");
    tbl_Filter_TD_5828316_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6294531_output("tbl_JOIN_INNER_TD_6294531_output", 6100000, 18, "");
    tbl_JOIN_INNER_TD_6294531_output.allocateHost();
    Table tbl_Filter_TD_6620892_output("tbl_Filter_TD_6620892_output", 6100000, 1, "");
    tbl_Filter_TD_6620892_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6945176_input;
    tbl_SerializeFromObject_TD_6945176_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6945176_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6945176_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6945176_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_6945176_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6945176_input.allocateHost();
    tbl_SerializeFromObject_TD_6945176_input.loadHost();
    Table tbl_JOIN_INNER_TD_6202592_output("tbl_JOIN_INNER_TD_6202592_output", 6100000, 18, "");
    tbl_JOIN_INNER_TD_6202592_output.allocateHost();
    Table tbl_Filter_TD_6302095_output("tbl_Filter_TD_6302095_output", 6100000, 1, "");
    tbl_Filter_TD_6302095_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6742476_input;
    tbl_SerializeFromObject_TD_6742476_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6742476_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6742476_input.addCol("i_product_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6742476_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_6742476_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6742476_input.allocateHost();
    tbl_SerializeFromObject_TD_6742476_input.loadHost();
    Table tbl_JOIN_INNER_TD_718327_output("tbl_JOIN_INNER_TD_718327_output", 6100000, 19, "");
    tbl_JOIN_INNER_TD_718327_output.allocateHost();
    Table tbl_Filter_TD_7621261_output("tbl_Filter_TD_7621261_output", 6100000, 1, "");
    tbl_Filter_TD_7621261_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7733498_input;
    tbl_SerializeFromObject_TD_7733498_input = Table("income_band", income_band_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7733498_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_7733498_input.allocateHost();
    tbl_SerializeFromObject_TD_7733498_input.loadHost();
    Table tbl_JOIN_INNER_TD_7780693_output("tbl_JOIN_INNER_TD_7780693_output", 6100000, 19, "");
    tbl_JOIN_INNER_TD_7780693_output.allocateHost();
    Table tbl_Filter_TD_7899954_output("tbl_Filter_TD_7899954_output", 6100000, 1, "");
    tbl_Filter_TD_7899954_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7701769_input;
    tbl_SerializeFromObject_TD_7701769_input = Table("income_band", income_band_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_7701769_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_7701769_input.allocateHost();
    tbl_SerializeFromObject_TD_7701769_input.loadHost();
    Table tbl_JOIN_INNER_TD_8644660_output("tbl_JOIN_INNER_TD_8644660_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_8644660_output.allocateHost();
    Table tbl_Filter_TD_8294642_output("tbl_Filter_TD_8294642_output", 6100000, 5, "");
    tbl_Filter_TD_8294642_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8583992_input;
    tbl_SerializeFromObject_TD_8583992_input = Table("income_band", income_band_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8583992_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_8583992_input.allocateHost();
    tbl_SerializeFromObject_TD_8583992_input.loadHost();
    Table tbl_JOIN_INNER_TD_847309_output("tbl_JOIN_INNER_TD_847309_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_847309_output.allocateHost();
    Table tbl_Filter_TD_8648691_output("tbl_Filter_TD_8648691_output", 6100000, 5, "");
    tbl_Filter_TD_8648691_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8613139_input;
    tbl_SerializeFromObject_TD_8613139_input = Table("income_band", income_band_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_8613139_input.addCol("ib_income_band_sk", 4);
    tbl_SerializeFromObject_TD_8613139_input.allocateHost();
    tbl_SerializeFromObject_TD_8613139_input.loadHost();
    Table tbl_JOIN_INNER_TD_9211101_output("tbl_JOIN_INNER_TD_9211101_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_9211101_output.allocateHost();
    Table tbl_Filter_TD_9921182_output("tbl_Filter_TD_9921182_output", 6100000, 5, "");
    tbl_Filter_TD_9921182_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9279411_input;
    tbl_SerializeFromObject_TD_9279411_input = Table("customer_address", customer_address_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9279411_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9279411_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9279411_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9279411_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9279411_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9279411_input.allocateHost();
    tbl_SerializeFromObject_TD_9279411_input.loadHost();
    Table tbl_JOIN_INNER_TD_913412_output("tbl_JOIN_INNER_TD_913412_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_913412_output.allocateHost();
    Table tbl_Filter_TD_9147392_output("tbl_Filter_TD_9147392_output", 6100000, 5, "");
    tbl_Filter_TD_9147392_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9102716_input;
    tbl_SerializeFromObject_TD_9102716_input = Table("customer_address", customer_address_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9102716_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9102716_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9102716_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9102716_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9102716_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9102716_input.allocateHost();
    tbl_SerializeFromObject_TD_9102716_input.loadHost();
    Table tbl_JOIN_INNER_TD_10461171_output("tbl_JOIN_INNER_TD_10461171_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_10461171_output.allocateHost();
    Table tbl_Filter_TD_10272996_output("tbl_Filter_TD_10272996_output", 6100000, 2, "");
    tbl_Filter_TD_10272996_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10180184_input;
    tbl_SerializeFromObject_TD_10180184_input = Table("customer_address", customer_address_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10180184_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10180184_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10180184_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10180184_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10180184_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10180184_input.allocateHost();
    tbl_SerializeFromObject_TD_10180184_input.loadHost();
    Table tbl_JOIN_INNER_TD_1040742_output("tbl_JOIN_INNER_TD_1040742_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_1040742_output.allocateHost();
    Table tbl_Filter_TD_10121436_output("tbl_Filter_TD_10121436_output", 6100000, 2, "");
    tbl_Filter_TD_10121436_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10889730_input;
    tbl_SerializeFromObject_TD_10889730_input = Table("customer_address", customer_address_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10889730_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_10889730_input.addCol("ca_street_number", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10889730_input.addCol("ca_street_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10889730_input.addCol("ca_city", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10889730_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10889730_input.allocateHost();
    tbl_SerializeFromObject_TD_10889730_input.loadHost();
    Table tbl_JOIN_INNER_TD_11463805_output("tbl_JOIN_INNER_TD_11463805_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_11463805_output.allocateHost();
    Table tbl_Filter_TD_11904987_output("tbl_Filter_TD_11904987_output", 6100000, 2, "");
    tbl_Filter_TD_11904987_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11996073_input;
    tbl_SerializeFromObject_TD_11996073_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11996073_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_11996073_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_11996073_input.allocateHost();
    tbl_SerializeFromObject_TD_11996073_input.loadHost();
    Table tbl_JOIN_INNER_TD_11678951_output("tbl_JOIN_INNER_TD_11678951_output", 6100000, 13, "");
    tbl_JOIN_INNER_TD_11678951_output.allocateHost();
    Table tbl_Filter_TD_11285955_output("tbl_Filter_TD_11285955_output", 6100000, 2, "");
    tbl_Filter_TD_11285955_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11992342_input;
    tbl_SerializeFromObject_TD_11992342_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11992342_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_11992342_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_11992342_input.allocateHost();
    tbl_SerializeFromObject_TD_11992342_input.loadHost();
    Table tbl_JOIN_INNER_TD_12557983_output("tbl_JOIN_INNER_TD_12557983_output", 6100000, 14, "");
    tbl_JOIN_INNER_TD_12557983_output.allocateHost();
    Table tbl_Filter_TD_12329344_output("tbl_Filter_TD_12329344_output", 6100000, 1, "");
    tbl_Filter_TD_12329344_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12202647_input;
    tbl_SerializeFromObject_TD_12202647_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12202647_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12202647_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_12202647_input.allocateHost();
    tbl_SerializeFromObject_TD_12202647_input.loadHost();
    Table tbl_JOIN_INNER_TD_12753007_output("tbl_JOIN_INNER_TD_12753007_output", 6100000, 14, "");
    tbl_JOIN_INNER_TD_12753007_output.allocateHost();
    Table tbl_Filter_TD_12404899_output("tbl_Filter_TD_12404899_output", 6100000, 1, "");
    tbl_Filter_TD_12404899_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12501375_input;
    tbl_SerializeFromObject_TD_12501375_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12501375_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12501375_input.addCol("hd_income_band_sk", 4);
    tbl_SerializeFromObject_TD_12501375_input.allocateHost();
    tbl_SerializeFromObject_TD_12501375_input.loadHost();
    Table tbl_JOIN_INNER_TD_13135701_output("tbl_JOIN_INNER_TD_13135701_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_13135701_output.allocateHost();
    Table tbl_Filter_TD_13978244_output("tbl_Filter_TD_13978244_output", 6100000, 2, "");
    tbl_Filter_TD_13978244_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13566574_input;
    tbl_SerializeFromObject_TD_13566574_input = Table("promotion", promotion_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_13566574_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_13566574_input.allocateHost();
    tbl_SerializeFromObject_TD_13566574_input.loadHost();
    Table tbl_JOIN_INNER_TD_13152882_output("tbl_JOIN_INNER_TD_13152882_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_13152882_output.allocateHost();
    Table tbl_Filter_TD_13137371_output("tbl_Filter_TD_13137371_output", 6100000, 2, "");
    tbl_Filter_TD_13137371_output.allocateHost();
    Table tbl_SerializeFromObject_TD_13941388_input;
    tbl_SerializeFromObject_TD_13941388_input = Table("promotion", promotion_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_13941388_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_13941388_input.allocateHost();
    tbl_SerializeFromObject_TD_13941388_input.loadHost();
    Table tbl_JOIN_INNER_TD_14327991_output("tbl_JOIN_INNER_TD_14327991_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_14327991_output.allocateHost();
    Table tbl_Filter_TD_1413863_output("tbl_Filter_TD_1413863_output", 6100000, 2, "");
    tbl_Filter_TD_1413863_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14952643_input;
    tbl_SerializeFromObject_TD_14952643_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14952643_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_14952643_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14952643_input.allocateHost();
    tbl_SerializeFromObject_TD_14952643_input.loadHost();
    Table tbl_JOIN_INNER_TD_14199663_output("tbl_JOIN_INNER_TD_14199663_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_14199663_output.allocateHost();
    Table tbl_Filter_TD_14721441_output("tbl_Filter_TD_14721441_output", 6100000, 2, "");
    tbl_Filter_TD_14721441_output.allocateHost();
    Table tbl_SerializeFromObject_TD_14110417_input;
    tbl_SerializeFromObject_TD_14110417_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_14110417_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_14110417_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_14110417_input.allocateHost();
    tbl_SerializeFromObject_TD_14110417_input.loadHost();
    Table tbl_JOIN_INNER_TD_15645729_output("tbl_JOIN_INNER_TD_15645729_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_15645729_output.allocateHost();
    Table tbl_Filter_TD_15784364_output("tbl_Filter_TD_15784364_output", 6100000, 2, "");
    tbl_Filter_TD_15784364_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15918368_input;
    tbl_SerializeFromObject_TD_15918368_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_15918368_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_15918368_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15918368_input.allocateHost();
    tbl_SerializeFromObject_TD_15918368_input.loadHost();
    Table tbl_JOIN_INNER_TD_15523304_output("tbl_JOIN_INNER_TD_15523304_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_15523304_output.allocateHost();
    Table tbl_Filter_TD_15933291_output("tbl_Filter_TD_15933291_output", 6100000, 2, "");
    tbl_Filter_TD_15933291_output.allocateHost();
    Table tbl_SerializeFromObject_TD_15812583_input;
    tbl_SerializeFromObject_TD_15812583_input = Table("customer_demographics", customer_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_15812583_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_15812583_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_15812583_input.allocateHost();
    tbl_SerializeFromObject_TD_15812583_input.loadHost();
    Table tbl_JOIN_INNER_TD_16847179_output("tbl_JOIN_INNER_TD_16847179_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_16847179_output.allocateHost();
    Table tbl_Filter_TD_16137309_output("tbl_Filter_TD_16137309_output", 6100000, 2, "");
    tbl_Filter_TD_16137309_output.allocateHost();
    Table tbl_SerializeFromObject_TD_16908342_input;
    tbl_SerializeFromObject_TD_16908342_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_16908342_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_16908342_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_16908342_input.allocateHost();
    tbl_SerializeFromObject_TD_16908342_input.loadHost();
    Table tbl_JOIN_INNER_TD_16599827_output("tbl_JOIN_INNER_TD_16599827_output", 6100000, 16, "");
    tbl_JOIN_INNER_TD_16599827_output.allocateHost();
    Table tbl_Filter_TD_16643598_output("tbl_Filter_TD_16643598_output", 6100000, 2, "");
    tbl_Filter_TD_16643598_output.allocateHost();
    Table tbl_SerializeFromObject_TD_16702242_input;
    tbl_SerializeFromObject_TD_16702242_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_16702242_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_16702242_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_16702242_input.allocateHost();
    tbl_SerializeFromObject_TD_16702242_input.loadHost();
    Table tbl_JOIN_INNER_TD_17519613_output("tbl_JOIN_INNER_TD_17519613_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_17519613_output.allocateHost();
    Table tbl_Filter_TD_17195741_output("tbl_Filter_TD_17195741_output", 6100000, 6, "");
    tbl_Filter_TD_17195741_output.allocateHost();
    Table tbl_SerializeFromObject_TD_17318261_input;
    tbl_SerializeFromObject_TD_17318261_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_17318261_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_17318261_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_17318261_input.allocateHost();
    tbl_SerializeFromObject_TD_17318261_input.loadHost();
    Table tbl_JOIN_INNER_TD_17505884_output("tbl_JOIN_INNER_TD_17505884_output", 6100000, 12, "");
    tbl_JOIN_INNER_TD_17505884_output.allocateHost();
    Table tbl_Filter_TD_17856723_output("tbl_Filter_TD_17856723_output", 6100000, 6, "");
    tbl_Filter_TD_17856723_output.allocateHost();
    Table tbl_SerializeFromObject_TD_17519581_input;
    tbl_SerializeFromObject_TD_17519581_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_17519581_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_17519581_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_17519581_input.allocateHost();
    tbl_SerializeFromObject_TD_17519581_input.loadHost();
    Table tbl_JOIN_INNER_TD_18621070_output("tbl_JOIN_INNER_TD_18621070_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_18621070_output.allocateHost();
    Table tbl_Filter_TD_18472408_output("tbl_Filter_TD_18472408_output", 6100000, 3, "");
    tbl_Filter_TD_18472408_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18565160_input;
    tbl_SerializeFromObject_TD_18565160_input = Table("customer", customer_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_18565160_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_18565160_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_18565160_input.addCol("c_current_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_18565160_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_18565160_input.addCol("c_first_shipto_date_sk", 4);
    tbl_SerializeFromObject_TD_18565160_input.addCol("c_first_sales_date_sk", 4);
    tbl_SerializeFromObject_TD_18565160_input.allocateHost();
    tbl_SerializeFromObject_TD_18565160_input.loadHost();
    Table tbl_JOIN_INNER_TD_18540076_output("tbl_JOIN_INNER_TD_18540076_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_18540076_output.allocateHost();
    Table tbl_Filter_TD_18182348_output("tbl_Filter_TD_18182348_output", 6100000, 3, "");
    tbl_Filter_TD_18182348_output.allocateHost();
    Table tbl_SerializeFromObject_TD_18594722_input;
    tbl_SerializeFromObject_TD_18594722_input = Table("customer", customer_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_18594722_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_18594722_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_18594722_input.addCol("c_current_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_18594722_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_18594722_input.addCol("c_first_shipto_date_sk", 4);
    tbl_SerializeFromObject_TD_18594722_input.addCol("c_first_sales_date_sk", 4);
    tbl_SerializeFromObject_TD_18594722_input.allocateHost();
    tbl_SerializeFromObject_TD_18594722_input.loadHost();
    Table tbl_JOIN_INNER_TD_19197204_output("tbl_JOIN_INNER_TD_19197204_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_19197204_output.allocateHost();
    Table tbl_Filter_TD_19937443_output("tbl_Filter_TD_19937443_output", 6100000, 2, "");
    tbl_Filter_TD_19937443_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19298211_input;
    tbl_SerializeFromObject_TD_19298211_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_19298211_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_19298211_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_19298211_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_19298211_input.allocateHost();
    tbl_SerializeFromObject_TD_19298211_input.loadHost();
    Table tbl_JOIN_INNER_TD_19646565_output("tbl_JOIN_INNER_TD_19646565_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_19646565_output.allocateHost();
    Table tbl_Filter_TD_19564949_output("tbl_Filter_TD_19564949_output", 6100000, 2, "");
    tbl_Filter_TD_19564949_output.allocateHost();
    Table tbl_SerializeFromObject_TD_19268301_input;
    tbl_SerializeFromObject_TD_19268301_input = Table("store", store_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_19268301_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_19268301_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_19268301_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_19268301_input.allocateHost();
    tbl_SerializeFromObject_TD_19268301_input.loadHost();
    Table tbl_JOIN_INNER_TD_20198573_output("tbl_JOIN_INNER_TD_20198573_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_20198573_output.allocateHost();
    Table tbl_Filter_TD_204017_output("tbl_Filter_TD_204017_output", 6100000, 1, "");
    tbl_Filter_TD_204017_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20734505_input;
    tbl_SerializeFromObject_TD_20734505_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20734505_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20734505_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20734505_input.allocateHost();
    tbl_SerializeFromObject_TD_20734505_input.loadHost();
    Table tbl_JOIN_INNER_TD_20959237_output("tbl_JOIN_INNER_TD_20959237_output", 6100000, 11, "");
    tbl_JOIN_INNER_TD_20959237_output.allocateHost();
    Table tbl_Filter_TD_20344460_output("tbl_Filter_TD_20344460_output", 6100000, 1, "");
    tbl_Filter_TD_20344460_output.allocateHost();
    Table tbl_SerializeFromObject_TD_20192917_input;
    tbl_SerializeFromObject_TD_20192917_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_20192917_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_20192917_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_20192917_input.allocateHost();
    tbl_SerializeFromObject_TD_20192917_input.loadHost();
    Table tbl_Filter_TD_21892384_output("tbl_Filter_TD_21892384_output", 6100000, 12, "");
    tbl_Filter_TD_21892384_output.allocateHost();
    Table tbl_Filter_TD_21292963_output("tbl_Filter_TD_21292963_output", 6100000, 2, "");
    tbl_Filter_TD_21292963_output.allocateHost();
    Table tbl_Aggregate_TD_21354495_output_preprocess("tbl_Aggregate_TD_21354495_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_21354495_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_21354495_output("tbl_Aggregate_TD_21354495_output", 6100000, 3, "");
    tbl_Aggregate_TD_21354495_output.allocateHost();
    Table tbl_Filter_TD_21956140_output("tbl_Filter_TD_21956140_output", 6100000, 12, "");
    tbl_Filter_TD_21956140_output.allocateHost();
    Table tbl_Filter_TD_21107149_output("tbl_Filter_TD_21107149_output", 6100000, 2, "");
    tbl_Filter_TD_21107149_output.allocateHost();
    Table tbl_Aggregate_TD_21476819_output_preprocess("tbl_Aggregate_TD_21476819_output_preprocess", 6100000, 16, "");
    tbl_Aggregate_TD_21476819_output_preprocess.allocateHost();
    Table tbl_Aggregate_TD_21476819_output("tbl_Aggregate_TD_21476819_output", 6100000, 3, "");
    tbl_Aggregate_TD_21476819_output.allocateHost();
    Table tbl_SerializeFromObject_TD_22578352_input;
    tbl_SerializeFromObject_TD_22578352_input = Table("store_sales", store_sales_n, 12, in_dir, "orc");
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_22578352_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_22578352_input.allocateHost();
    tbl_SerializeFromObject_TD_22578352_input.loadHost();
    Table tbl_SerializeFromObject_TD_22347534_input;
    tbl_SerializeFromObject_TD_22347534_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_22347534_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_22347534_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_22347534_input.allocateHost();
    tbl_SerializeFromObject_TD_22347534_input.loadHost();
    Table tbl_JOIN_INNER_TD_22585174_output_preprocess("tbl_JOIN_INNER_TD_22585174_output_preprocess", 6100000, 5, "");
    tbl_JOIN_INNER_TD_22585174_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_22585174_output("tbl_JOIN_INNER_TD_22585174_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_22585174_output.allocateHost();
    Table tbl_SerializeFromObject_TD_2260494_input;
    tbl_SerializeFromObject_TD_2260494_input = Table("store_sales", store_sales_n, 12, in_dir, "orc");
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_ticket_number", 8);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_wholesale_cost", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_list_price", 4);
    tbl_SerializeFromObject_TD_2260494_input.addCol("ss_coupon_amt", 4);
    tbl_SerializeFromObject_TD_2260494_input.allocateHost();
    tbl_SerializeFromObject_TD_2260494_input.loadHost();
    Table tbl_SerializeFromObject_TD_22277407_input;
    tbl_SerializeFromObject_TD_22277407_input = Table("store_returns", store_returns_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_22277407_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_22277407_input.addCol("sr_ticket_number", 8);
    tbl_SerializeFromObject_TD_22277407_input.allocateHost();
    tbl_SerializeFromObject_TD_22277407_input.loadHost();
    Table tbl_JOIN_INNER_TD_22301638_output_preprocess("tbl_JOIN_INNER_TD_22301638_output_preprocess", 6100000, 5, "");
    tbl_JOIN_INNER_TD_22301638_output_preprocess.allocateHost();
    Table tbl_JOIN_INNER_TD_22301638_output("tbl_JOIN_INNER_TD_22301638_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_22301638_output.allocateHost();
    Table tbl_Filter_TD_2383686_output("tbl_Filter_TD_2383686_output", 6100000, 3, "");
    tbl_Filter_TD_2383686_output.allocateHost();
    Table tbl_Filter_TD_23128534_output("tbl_Filter_TD_23128534_output", 6100000, 5, "");
    tbl_Filter_TD_23128534_output.allocateHost();
    Table tbl_Filter_TD_23486372_output("tbl_Filter_TD_23486372_output", 6100000, 3, "");
    tbl_Filter_TD_23486372_output.allocateHost();
    Table tbl_Filter_TD_23740452_output("tbl_Filter_TD_23740452_output", 6100000, 5, "");
    tbl_Filter_TD_23740452_output.allocateHost();
    Table tbl_SerializeFromObject_TD_24603818_input;
    tbl_SerializeFromObject_TD_24603818_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_24603818_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24603818_input.addCol("cs_order_number", 8);
    tbl_SerializeFromObject_TD_24603818_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_24603818_input.allocateHost();
    tbl_SerializeFromObject_TD_24603818_input.loadHost();
    Table tbl_SerializeFromObject_TD_24246772_input;
    tbl_SerializeFromObject_TD_24246772_input = Table("catalog_returns", catalog_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_24246772_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_24246772_input.addCol("cr_order_number", 8);
    tbl_SerializeFromObject_TD_24246772_input.addCol("cr_refunded_cash", 4);
    tbl_SerializeFromObject_TD_24246772_input.addCol("cr_reversed_charge", 4);
    tbl_SerializeFromObject_TD_24246772_input.addCol("cr_store_credit", 4);
    tbl_SerializeFromObject_TD_24246772_input.allocateHost();
    tbl_SerializeFromObject_TD_24246772_input.loadHost();
    Table tbl_SerializeFromObject_TD_24789192_input;
    tbl_SerializeFromObject_TD_24789192_input = Table("catalog_sales", catalog_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_24789192_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_24789192_input.addCol("cs_order_number", 8);
    tbl_SerializeFromObject_TD_24789192_input.addCol("cs_ext_list_price", 4);
    tbl_SerializeFromObject_TD_24789192_input.allocateHost();
    tbl_SerializeFromObject_TD_24789192_input.loadHost();
    Table tbl_SerializeFromObject_TD_24539179_input;
    tbl_SerializeFromObject_TD_24539179_input = Table("catalog_returns", catalog_returns_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_24539179_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_24539179_input.addCol("cr_order_number", 8);
    tbl_SerializeFromObject_TD_24539179_input.addCol("cr_refunded_cash", 4);
    tbl_SerializeFromObject_TD_24539179_input.addCol("cr_reversed_charge", 4);
    tbl_SerializeFromObject_TD_24539179_input.addCol("cr_store_credit", 4);
    tbl_SerializeFromObject_TD_24539179_input.allocateHost();
    tbl_SerializeFromObject_TD_24539179_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_22585174_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_21354495_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_22301638_output.allocateDevBuffer(context_a, 32);
    tbl_Aggregate_TD_21476819_output_preprocess.allocateDevBuffer(context_a, 33);
    tbl_JOIN_INNER_TD_22585174_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_22301638_output_preprocess.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_2383686_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_23128534_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_23486372_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_23740452_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    AggrCfgCmd cfg_Aggregate_TD_21354495_cmds;
    cfg_Aggregate_TD_21354495_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_21354495_gqe_aggr(cfg_Aggregate_TD_21354495_cmds.cmd);
    cfg_Aggregate_TD_21354495_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_21354495_cmds_out;
    cfg_Aggregate_TD_21354495_cmds_out.allocateHost();
    cfg_Aggregate_TD_21354495_cmds_out.allocateDevBuffer(context_a, 33);
    AggrCfgCmd cfg_Aggregate_TD_21476819_cmds;
    cfg_Aggregate_TD_21476819_cmds.allocateHost();
    get_cfg_dat_Aggregate_TD_21476819_gqe_aggr(cfg_Aggregate_TD_21476819_cmds.cmd);
    cfg_Aggregate_TD_21476819_cmds.allocateDevBuffer(context_a, 32);
    AggrCfgCmd cfg_Aggregate_TD_21476819_cmds_out;
    cfg_Aggregate_TD_21476819_cmds_out.allocateHost();
    cfg_Aggregate_TD_21476819_cmds_out.allocateDevBuffer(context_a, 33);
    cfgCmd cfg_JOIN_INNER_TD_22585174_cmds;
    cfg_JOIN_INNER_TD_22585174_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_22585174_gqe_join (cfg_JOIN_INNER_TD_22585174_cmds.cmd);
    cfg_JOIN_INNER_TD_22585174_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_22301638_cmds;
    cfg_JOIN_INNER_TD_22301638_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_22301638_gqe_join (cfg_JOIN_INNER_TD_22301638_cmds.cmd);
    cfg_JOIN_INNER_TD_22301638_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    AggrBufferTmp buftmp_a(context_a); 
    buftmp_a.BufferInitial(q_a); 
    std::cout << std::endl; 
    AggrKrnlEngine krnl_Aggregate_TD_21354495;
    krnl_Aggregate_TD_21354495 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_21354495.setup(tbl_JOIN_INNER_TD_22585174_output, tbl_Aggregate_TD_21354495_output_preprocess, cfg_Aggregate_TD_21354495_cmds, cfg_Aggregate_TD_21354495_cmds_out, buftmp_a);
    AggrKrnlEngine krnl_Aggregate_TD_21476819;
    krnl_Aggregate_TD_21476819 = AggrKrnlEngine(program_a, q_a, "gqeAggr");
    krnl_Aggregate_TD_21476819.setup(tbl_JOIN_INNER_TD_22301638_output, tbl_Aggregate_TD_21476819_output_preprocess, cfg_Aggregate_TD_21476819_cmds, cfg_Aggregate_TD_21476819_cmds_out, buftmp_a);
    krnlEngine krnl_JOIN_INNER_TD_22585174;
    krnl_JOIN_INNER_TD_22585174 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_22585174.setup(tbl_Filter_TD_2383686_output, tbl_Filter_TD_23128534_output, tbl_JOIN_INNER_TD_22585174_output_preprocess, cfg_JOIN_INNER_TD_22585174_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_22301638;
    krnl_JOIN_INNER_TD_22301638 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_22301638.setup(tbl_Filter_TD_23486372_output, tbl_Filter_TD_23740452_output, tbl_JOIN_INNER_TD_22301638_output_preprocess, cfg_JOIN_INNER_TD_22301638_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_Aggregate_TD_21354495;
    trans_Aggregate_TD_21354495.setq(q_a);
    trans_Aggregate_TD_21354495.add(&(cfg_Aggregate_TD_21354495_cmds));
    transEngine trans_Aggregate_TD_21354495_out;
    trans_Aggregate_TD_21354495_out.setq(q_a);
    q_a.finish();
    transEngine trans_Aggregate_TD_21476819;
    trans_Aggregate_TD_21476819.setq(q_a);
    trans_Aggregate_TD_21476819.add(&(cfg_Aggregate_TD_21476819_cmds));
    transEngine trans_Aggregate_TD_21476819_out;
    trans_Aggregate_TD_21476819_out.setq(q_a);
    q_a.finish();
    transEngine trans_JOIN_INNER_TD_22585174;
    trans_JOIN_INNER_TD_22585174.setq(q_h);
    trans_JOIN_INNER_TD_22585174.add(&(cfg_JOIN_INNER_TD_22585174_cmds));
    transEngine trans_JOIN_INNER_TD_22585174_out;
    trans_JOIN_INNER_TD_22585174_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_22301638;
    trans_JOIN_INNER_TD_22301638.setq(q_h);
    trans_JOIN_INNER_TD_22301638.add(&(cfg_JOIN_INNER_TD_22301638_cmds));
    transEngine trans_JOIN_INNER_TD_22301638_out;
    trans_JOIN_INNER_TD_22301638_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_21354495;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_21354495;
    std::vector<cl::Event> events_Aggregate_TD_21354495;
    events_h2d_wr_Aggregate_TD_21354495.resize(1);
    events_d2h_rd_Aggregate_TD_21354495.resize(1);
    events_Aggregate_TD_21354495.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_21354495;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_21354495;
    std::vector<cl::Event> events_h2d_wr_Aggregate_TD_21476819;
    std::vector<cl::Event> events_d2h_rd_Aggregate_TD_21476819;
    std::vector<cl::Event> events_Aggregate_TD_21476819;
    events_h2d_wr_Aggregate_TD_21476819.resize(1);
    events_d2h_rd_Aggregate_TD_21476819.resize(1);
    events_Aggregate_TD_21476819.resize(1);
    std::vector<cl::Event> events_grp_Aggregate_TD_21476819;
    std::vector<cl::Event> prev_events_grp_Aggregate_TD_21476819;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_22585174;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_22585174;
    std::vector<cl::Event> events_JOIN_INNER_TD_22585174;
    events_h2d_wr_JOIN_INNER_TD_22585174.resize(1);
    events_d2h_rd_JOIN_INNER_TD_22585174.resize(1);
    events_JOIN_INNER_TD_22585174.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_22585174;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_22585174;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_22301638;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_22301638;
    std::vector<cl::Event> events_JOIN_INNER_TD_22301638;
    events_h2d_wr_JOIN_INNER_TD_22301638.resize(1);
    events_d2h_rd_JOIN_INNER_TD_22301638.resize(1);
    events_JOIN_INNER_TD_22301638.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_22301638;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_22301638;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_23_949946_s, tv_r_Filter_23_949946_e;
    gettimeofday(&tv_r_Filter_23_949946_s, 0);
    SW_Filter_TD_23740452(tbl_SerializeFromObject_TD_24539179_input, tbl_Filter_TD_23740452_output);
    gettimeofday(&tv_r_Filter_23_949946_e, 0);

    struct timeval tv_r_Filter_23_811258_s, tv_r_Filter_23_811258_e;
    gettimeofday(&tv_r_Filter_23_811258_s, 0);
    SW_Filter_TD_23486372(tbl_SerializeFromObject_TD_24789192_input, tbl_Filter_TD_23486372_output);
    gettimeofday(&tv_r_Filter_23_811258_e, 0);

    struct timeval tv_r_Filter_23_379539_s, tv_r_Filter_23_379539_e;
    gettimeofday(&tv_r_Filter_23_379539_s, 0);
    SW_Filter_TD_23128534(tbl_SerializeFromObject_TD_24246772_input, tbl_Filter_TD_23128534_output);
    gettimeofday(&tv_r_Filter_23_379539_e, 0);

    struct timeval tv_r_Filter_23_177392_s, tv_r_Filter_23_177392_e;
    gettimeofday(&tv_r_Filter_23_177392_s, 0);
    SW_Filter_TD_2383686(tbl_SerializeFromObject_TD_24603818_input, tbl_Filter_TD_2383686_output);
    gettimeofday(&tv_r_Filter_23_177392_e, 0);

    struct timeval tv_r_JOIN_INNER_22_316234_s, tv_r_JOIN_INNER_22_316234_e;
    gettimeofday(&tv_r_JOIN_INNER_22_316234_s, 0);
    trans_JOIN_INNER_TD_22301638.add(&(tbl_Filter_TD_23486372_output));
    trans_JOIN_INNER_TD_22301638.add(&(tbl_Filter_TD_23740452_output));
    trans_JOIN_INNER_TD_22301638.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_22301638), &(events_h2d_wr_JOIN_INNER_TD_22301638[0]));
    events_grp_JOIN_INNER_TD_22301638.push_back(events_h2d_wr_JOIN_INNER_TD_22301638[0]);
    krnl_JOIN_INNER_TD_22301638.run(0, &(events_grp_JOIN_INNER_TD_22301638), &(events_JOIN_INNER_TD_22301638[0]));
    
    trans_JOIN_INNER_TD_22301638_out.add(&(tbl_JOIN_INNER_TD_22301638_output_preprocess));
    trans_JOIN_INNER_TD_22301638_out.dev2host(0, &(events_JOIN_INNER_TD_22301638), &(events_d2h_rd_JOIN_INNER_TD_22301638[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_22301638);
    tbl_JOIN_INNER_TD_22301638_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_22301638_output));
    gettimeofday(&tv_r_JOIN_INNER_22_316234_e, 0);

    struct timeval tv_r_JOIN_INNER_22_387423_s, tv_r_JOIN_INNER_22_387423_e;
    gettimeofday(&tv_r_JOIN_INNER_22_387423_s, 0);
    trans_JOIN_INNER_TD_22585174.add(&(tbl_Filter_TD_2383686_output));
    trans_JOIN_INNER_TD_22585174.add(&(tbl_Filter_TD_23128534_output));
    trans_JOIN_INNER_TD_22585174.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_22585174), &(events_h2d_wr_JOIN_INNER_TD_22585174[0]));
    events_grp_JOIN_INNER_TD_22585174.push_back(events_h2d_wr_JOIN_INNER_TD_22585174[0]);
    krnl_JOIN_INNER_TD_22585174.run(0, &(events_grp_JOIN_INNER_TD_22585174), &(events_JOIN_INNER_TD_22585174[0]));
    
    trans_JOIN_INNER_TD_22585174_out.add(&(tbl_JOIN_INNER_TD_22585174_output_preprocess));
    trans_JOIN_INNER_TD_22585174_out.dev2host(0, &(events_JOIN_INNER_TD_22585174), &(events_d2h_rd_JOIN_INNER_TD_22585174[0]));
    q_h.flush();
    q_h.finish();
    WaitForEvents(events_d2h_rd_JOIN_INNER_TD_22585174);
    tbl_JOIN_INNER_TD_22585174_output_preprocess.copyTableData(&(tbl_JOIN_INNER_TD_22585174_output));
    gettimeofday(&tv_r_JOIN_INNER_22_387423_e, 0);

    struct timeval tv_r_Aggregate_21_235944_s, tv_r_Aggregate_21_235944_e;
    gettimeofday(&tv_r_Aggregate_21_235944_s, 0);
    trans_Aggregate_TD_21476819.add(&(tbl_JOIN_INNER_TD_22301638_output));
    trans_Aggregate_TD_21476819.host2dev(0, &(prev_events_grp_Aggregate_TD_21476819), &(events_h2d_wr_Aggregate_TD_21476819[0]));
    events_grp_Aggregate_TD_21476819.push_back(events_h2d_wr_Aggregate_TD_21476819[0]);
    krnl_Aggregate_TD_21476819.run(0, &(events_grp_Aggregate_TD_21476819), &(events_Aggregate_TD_21476819[0]));
    
    trans_Aggregate_TD_21476819_out.add(&(tbl_Aggregate_TD_21476819_output_preprocess));
    trans_Aggregate_TD_21476819_out.dev2host(0, &(events_Aggregate_TD_21476819), &(events_d2h_rd_Aggregate_TD_21476819[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_21476819_consolidate(tbl_Aggregate_TD_21476819_output_preprocess, tbl_Aggregate_TD_21476819_output);
    gettimeofday(&tv_r_Aggregate_21_235944_e, 0);

    struct timeval tv_r_Filter_21_85088_s, tv_r_Filter_21_85088_e;
    gettimeofday(&tv_r_Filter_21_85088_s, 0);
    SW_Filter_TD_21107149(tbl_SerializeFromObject_TD_22277407_input, tbl_Filter_TD_21107149_output);
    gettimeofday(&tv_r_Filter_21_85088_e, 0);

    struct timeval tv_r_Filter_21_854903_s, tv_r_Filter_21_854903_e;
    gettimeofday(&tv_r_Filter_21_854903_s, 0);
    SW_Filter_TD_21956140(tbl_SerializeFromObject_TD_2260494_input, tbl_Filter_TD_21956140_output);
    gettimeofday(&tv_r_Filter_21_854903_e, 0);

    struct timeval tv_r_Aggregate_21_452680_s, tv_r_Aggregate_21_452680_e;
    gettimeofday(&tv_r_Aggregate_21_452680_s, 0);
    trans_Aggregate_TD_21354495.add(&(tbl_JOIN_INNER_TD_22585174_output));
    trans_Aggregate_TD_21354495.host2dev(0, &(prev_events_grp_Aggregate_TD_21354495), &(events_h2d_wr_Aggregate_TD_21354495[0]));
    events_grp_Aggregate_TD_21354495.push_back(events_h2d_wr_Aggregate_TD_21354495[0]);
    krnl_Aggregate_TD_21354495.run(0, &(events_grp_Aggregate_TD_21354495), &(events_Aggregate_TD_21354495[0]));
    
    trans_Aggregate_TD_21354495_out.add(&(tbl_Aggregate_TD_21354495_output_preprocess));
    trans_Aggregate_TD_21354495_out.dev2host(0, &(events_Aggregate_TD_21354495), &(events_d2h_rd_Aggregate_TD_21354495[0]));
    q_a.flush();
    q_a.finish();
    
    SW_Aggregate_TD_21354495_consolidate(tbl_Aggregate_TD_21354495_output_preprocess, tbl_Aggregate_TD_21354495_output);
    gettimeofday(&tv_r_Aggregate_21_452680_e, 0);

    struct timeval tv_r_Filter_21_42940_s, tv_r_Filter_21_42940_e;
    gettimeofday(&tv_r_Filter_21_42940_s, 0);
    SW_Filter_TD_21292963(tbl_SerializeFromObject_TD_22347534_input, tbl_Filter_TD_21292963_output);
    gettimeofday(&tv_r_Filter_21_42940_e, 0);

    struct timeval tv_r_Filter_21_966241_s, tv_r_Filter_21_966241_e;
    gettimeofday(&tv_r_Filter_21_966241_s, 0);
    SW_Filter_TD_21892384(tbl_SerializeFromObject_TD_22578352_input, tbl_Filter_TD_21892384_output);
    gettimeofday(&tv_r_Filter_21_966241_e, 0);

    struct timeval tv_r_Filter_20_457050_s, tv_r_Filter_20_457050_e;
    gettimeofday(&tv_r_Filter_20_457050_s, 0);
    SW_Filter_TD_20344460(tbl_Aggregate_TD_21476819_output, tbl_Filter_TD_20344460_output);
    gettimeofday(&tv_r_Filter_20_457050_e, 0);

    struct timeval tv_r_JOIN_INNER_20_596269_s, tv_r_JOIN_INNER_20_596269_e;
    gettimeofday(&tv_r_JOIN_INNER_20_596269_s, 0);
    SW_JOIN_INNER_TD_20959237(tbl_Filter_TD_21956140_output, tbl_Filter_TD_21107149_output, tbl_JOIN_INNER_TD_20959237_output);
    gettimeofday(&tv_r_JOIN_INNER_20_596269_e, 0);

    struct timeval tv_r_Filter_20_840240_s, tv_r_Filter_20_840240_e;
    gettimeofday(&tv_r_Filter_20_840240_s, 0);
    SW_Filter_TD_204017(tbl_Aggregate_TD_21354495_output, tbl_Filter_TD_204017_output);
    gettimeofday(&tv_r_Filter_20_840240_e, 0);

    struct timeval tv_r_JOIN_INNER_20_793701_s, tv_r_JOIN_INNER_20_793701_e;
    gettimeofday(&tv_r_JOIN_INNER_20_793701_s, 0);
    SW_JOIN_INNER_TD_20198573(tbl_Filter_TD_21892384_output, tbl_Filter_TD_21292963_output, tbl_JOIN_INNER_TD_20198573_output);
    gettimeofday(&tv_r_JOIN_INNER_20_793701_e, 0);

    struct timeval tv_r_Filter_19_116464_s, tv_r_Filter_19_116464_e;
    gettimeofday(&tv_r_Filter_19_116464_s, 0);
    SW_Filter_TD_19564949(tbl_SerializeFromObject_TD_20192917_input, tbl_Filter_TD_19564949_output);
    gettimeofday(&tv_r_Filter_19_116464_e, 0);

    struct timeval tv_r_JOIN_INNER_19_909737_s, tv_r_JOIN_INNER_19_909737_e;
    gettimeofday(&tv_r_JOIN_INNER_19_909737_s, 0);
    SW_JOIN_INNER_TD_19646565(tbl_JOIN_INNER_TD_20959237_output, tbl_Filter_TD_20344460_output, tbl_JOIN_INNER_TD_19646565_output);
    gettimeofday(&tv_r_JOIN_INNER_19_909737_e, 0);

    struct timeval tv_r_Filter_19_216301_s, tv_r_Filter_19_216301_e;
    gettimeofday(&tv_r_Filter_19_216301_s, 0);
    SW_Filter_TD_19937443(tbl_SerializeFromObject_TD_20734505_input, tbl_Filter_TD_19937443_output);
    gettimeofday(&tv_r_Filter_19_216301_e, 0);

    struct timeval tv_r_JOIN_INNER_19_67337_s, tv_r_JOIN_INNER_19_67337_e;
    gettimeofday(&tv_r_JOIN_INNER_19_67337_s, 0);
    SW_JOIN_INNER_TD_19197204(tbl_JOIN_INNER_TD_20198573_output, tbl_Filter_TD_204017_output, tbl_JOIN_INNER_TD_19197204_output);
    gettimeofday(&tv_r_JOIN_INNER_19_67337_e, 0);

    struct timeval tv_r_Filter_18_195377_s, tv_r_Filter_18_195377_e;
    gettimeofday(&tv_r_Filter_18_195377_s, 0);
    SW_Filter_TD_18182348(tbl_SerializeFromObject_TD_19268301_input, tbl_Filter_TD_18182348_output);
    gettimeofday(&tv_r_Filter_18_195377_e, 0);

    struct timeval tv_r_JOIN_INNER_18_750446_s, tv_r_JOIN_INNER_18_750446_e;
    gettimeofday(&tv_r_JOIN_INNER_18_750446_s, 0);
    SW_JOIN_INNER_TD_18540076(tbl_JOIN_INNER_TD_19646565_output, tbl_Filter_TD_19564949_output, tbl_JOIN_INNER_TD_18540076_output);
    gettimeofday(&tv_r_JOIN_INNER_18_750446_e, 0);

    struct timeval tv_r_Filter_18_805070_s, tv_r_Filter_18_805070_e;
    gettimeofday(&tv_r_Filter_18_805070_s, 0);
    SW_Filter_TD_18472408(tbl_SerializeFromObject_TD_19298211_input, tbl_Filter_TD_18472408_output);
    gettimeofday(&tv_r_Filter_18_805070_e, 0);

    struct timeval tv_r_JOIN_INNER_18_410251_s, tv_r_JOIN_INNER_18_410251_e;
    gettimeofday(&tv_r_JOIN_INNER_18_410251_s, 0);
    SW_JOIN_INNER_TD_18621070(tbl_JOIN_INNER_TD_19197204_output, tbl_Filter_TD_19937443_output, tbl_JOIN_INNER_TD_18621070_output);
    gettimeofday(&tv_r_JOIN_INNER_18_410251_e, 0);

    struct timeval tv_r_Filter_17_258433_s, tv_r_Filter_17_258433_e;
    gettimeofday(&tv_r_Filter_17_258433_s, 0);
    SW_Filter_TD_17856723(tbl_SerializeFromObject_TD_18594722_input, tbl_Filter_TD_17856723_output);
    gettimeofday(&tv_r_Filter_17_258433_e, 0);

    struct timeval tv_r_JOIN_INNER_17_896522_s, tv_r_JOIN_INNER_17_896522_e;
    gettimeofday(&tv_r_JOIN_INNER_17_896522_s, 0);
    SW_JOIN_INNER_TD_17505884(tbl_JOIN_INNER_TD_18540076_output, tbl_Filter_TD_18182348_output, tbl_JOIN_INNER_TD_17505884_output);
    gettimeofday(&tv_r_JOIN_INNER_17_896522_e, 0);

    struct timeval tv_r_Filter_17_348763_s, tv_r_Filter_17_348763_e;
    gettimeofday(&tv_r_Filter_17_348763_s, 0);
    SW_Filter_TD_17195741(tbl_SerializeFromObject_TD_18565160_input, tbl_Filter_TD_17195741_output);
    gettimeofday(&tv_r_Filter_17_348763_e, 0);

    struct timeval tv_r_JOIN_INNER_17_643306_s, tv_r_JOIN_INNER_17_643306_e;
    gettimeofday(&tv_r_JOIN_INNER_17_643306_s, 0);
    SW_JOIN_INNER_TD_17519613(tbl_JOIN_INNER_TD_18621070_output, tbl_Filter_TD_18472408_output, tbl_JOIN_INNER_TD_17519613_output);
    gettimeofday(&tv_r_JOIN_INNER_17_643306_e, 0);

    struct timeval tv_r_Filter_16_588992_s, tv_r_Filter_16_588992_e;
    gettimeofday(&tv_r_Filter_16_588992_s, 0);
    SW_Filter_TD_16643598(tbl_SerializeFromObject_TD_17519581_input, tbl_Filter_TD_16643598_output);
    gettimeofday(&tv_r_Filter_16_588992_e, 0);

    struct timeval tv_r_JOIN_INNER_16_869582_s, tv_r_JOIN_INNER_16_869582_e;
    gettimeofday(&tv_r_JOIN_INNER_16_869582_s, 0);
    SW_JOIN_INNER_TD_16599827(tbl_JOIN_INNER_TD_17505884_output, tbl_Filter_TD_17856723_output, tbl_JOIN_INNER_TD_16599827_output);
    gettimeofday(&tv_r_JOIN_INNER_16_869582_e, 0);

    struct timeval tv_r_Filter_16_313713_s, tv_r_Filter_16_313713_e;
    gettimeofday(&tv_r_Filter_16_313713_s, 0);
    SW_Filter_TD_16137309(tbl_SerializeFromObject_TD_17318261_input, tbl_Filter_TD_16137309_output);
    gettimeofday(&tv_r_Filter_16_313713_e, 0);

    struct timeval tv_r_JOIN_INNER_16_233497_s, tv_r_JOIN_INNER_16_233497_e;
    gettimeofday(&tv_r_JOIN_INNER_16_233497_s, 0);
    SW_JOIN_INNER_TD_16847179(tbl_JOIN_INNER_TD_17519613_output, tbl_Filter_TD_17195741_output, tbl_JOIN_INNER_TD_16847179_output);
    gettimeofday(&tv_r_JOIN_INNER_16_233497_e, 0);

    struct timeval tv_r_Filter_15_940220_s, tv_r_Filter_15_940220_e;
    gettimeofday(&tv_r_Filter_15_940220_s, 0);
    SW_Filter_TD_15933291(tbl_SerializeFromObject_TD_16702242_input, tbl_Filter_TD_15933291_output);
    gettimeofday(&tv_r_Filter_15_940220_e, 0);

    struct timeval tv_r_JOIN_INNER_15_409760_s, tv_r_JOIN_INNER_15_409760_e;
    gettimeofday(&tv_r_JOIN_INNER_15_409760_s, 0);
    SW_JOIN_INNER_TD_15523304(tbl_JOIN_INNER_TD_16599827_output, tbl_Filter_TD_16643598_output, tbl_JOIN_INNER_TD_15523304_output);
    gettimeofday(&tv_r_JOIN_INNER_15_409760_e, 0);

    struct timeval tv_r_Filter_15_201341_s, tv_r_Filter_15_201341_e;
    gettimeofday(&tv_r_Filter_15_201341_s, 0);
    SW_Filter_TD_15784364(tbl_SerializeFromObject_TD_16908342_input, tbl_Filter_TD_15784364_output);
    gettimeofday(&tv_r_Filter_15_201341_e, 0);

    struct timeval tv_r_JOIN_INNER_15_219039_s, tv_r_JOIN_INNER_15_219039_e;
    gettimeofday(&tv_r_JOIN_INNER_15_219039_s, 0);
    SW_JOIN_INNER_TD_15645729(tbl_JOIN_INNER_TD_16847179_output, tbl_Filter_TD_16137309_output, tbl_JOIN_INNER_TD_15645729_output);
    gettimeofday(&tv_r_JOIN_INNER_15_219039_e, 0);

    struct timeval tv_r_Filter_14_879046_s, tv_r_Filter_14_879046_e;
    gettimeofday(&tv_r_Filter_14_879046_s, 0);
    SW_Filter_TD_14721441(tbl_SerializeFromObject_TD_15812583_input, tbl_Filter_TD_14721441_output);
    gettimeofday(&tv_r_Filter_14_879046_e, 0);

    struct timeval tv_r_JOIN_INNER_14_699807_s, tv_r_JOIN_INNER_14_699807_e;
    gettimeofday(&tv_r_JOIN_INNER_14_699807_s, 0);
    SW_JOIN_INNER_TD_14199663(tbl_JOIN_INNER_TD_15523304_output, tbl_Filter_TD_15933291_output, tbl_JOIN_INNER_TD_14199663_output);
    gettimeofday(&tv_r_JOIN_INNER_14_699807_e, 0);

    struct timeval tv_r_Filter_14_198439_s, tv_r_Filter_14_198439_e;
    gettimeofday(&tv_r_Filter_14_198439_s, 0);
    SW_Filter_TD_1413863(tbl_SerializeFromObject_TD_15918368_input, tbl_Filter_TD_1413863_output);
    gettimeofday(&tv_r_Filter_14_198439_e, 0);

    struct timeval tv_r_JOIN_INNER_14_174222_s, tv_r_JOIN_INNER_14_174222_e;
    gettimeofday(&tv_r_JOIN_INNER_14_174222_s, 0);
    SW_JOIN_INNER_TD_14327991(tbl_JOIN_INNER_TD_15645729_output, tbl_Filter_TD_15784364_output, tbl_JOIN_INNER_TD_14327991_output);
    gettimeofday(&tv_r_JOIN_INNER_14_174222_e, 0);

    struct timeval tv_r_Filter_13_65826_s, tv_r_Filter_13_65826_e;
    gettimeofday(&tv_r_Filter_13_65826_s, 0);
    SW_Filter_TD_13137371(tbl_SerializeFromObject_TD_14110417_input, tbl_Filter_TD_13137371_output);
    gettimeofday(&tv_r_Filter_13_65826_e, 0);

    struct timeval tv_r_JOIN_INNER_13_345582_s, tv_r_JOIN_INNER_13_345582_e;
    gettimeofday(&tv_r_JOIN_INNER_13_345582_s, 0);
    SW_JOIN_INNER_TD_13152882(tbl_JOIN_INNER_TD_14199663_output, tbl_Filter_TD_14721441_output, tbl_JOIN_INNER_TD_13152882_output);
    gettimeofday(&tv_r_JOIN_INNER_13_345582_e, 0);

    struct timeval tv_r_Filter_13_189067_s, tv_r_Filter_13_189067_e;
    gettimeofday(&tv_r_Filter_13_189067_s, 0);
    SW_Filter_TD_13978244(tbl_SerializeFromObject_TD_14952643_input, tbl_Filter_TD_13978244_output);
    gettimeofday(&tv_r_Filter_13_189067_e, 0);

    struct timeval tv_r_JOIN_INNER_13_456733_s, tv_r_JOIN_INNER_13_456733_e;
    gettimeofday(&tv_r_JOIN_INNER_13_456733_s, 0);
    SW_JOIN_INNER_TD_13135701(tbl_JOIN_INNER_TD_14327991_output, tbl_Filter_TD_1413863_output, tbl_JOIN_INNER_TD_13135701_output);
    gettimeofday(&tv_r_JOIN_INNER_13_456733_e, 0);

    struct timeval tv_r_Filter_12_122264_s, tv_r_Filter_12_122264_e;
    gettimeofday(&tv_r_Filter_12_122264_s, 0);
    SW_Filter_TD_12404899(tbl_SerializeFromObject_TD_13941388_input, tbl_Filter_TD_12404899_output);
    gettimeofday(&tv_r_Filter_12_122264_e, 0);

    struct timeval tv_r_JOIN_INNER_12_216416_s, tv_r_JOIN_INNER_12_216416_e;
    gettimeofday(&tv_r_JOIN_INNER_12_216416_s, 0);
    SW_JOIN_INNER_TD_12753007(tbl_JOIN_INNER_TD_13152882_output, tbl_Filter_TD_13137371_output, tbl_JOIN_INNER_TD_12753007_output);
    gettimeofday(&tv_r_JOIN_INNER_12_216416_e, 0);

    struct timeval tv_r_Filter_12_240546_s, tv_r_Filter_12_240546_e;
    gettimeofday(&tv_r_Filter_12_240546_s, 0);
    SW_Filter_TD_12329344(tbl_SerializeFromObject_TD_13566574_input, tbl_Filter_TD_12329344_output);
    gettimeofday(&tv_r_Filter_12_240546_e, 0);

    struct timeval tv_r_JOIN_INNER_12_540452_s, tv_r_JOIN_INNER_12_540452_e;
    gettimeofday(&tv_r_JOIN_INNER_12_540452_s, 0);
    SW_JOIN_INNER_TD_12557983(tbl_JOIN_INNER_TD_13135701_output, tbl_Filter_TD_13978244_output, tbl_JOIN_INNER_TD_12557983_output);
    gettimeofday(&tv_r_JOIN_INNER_12_540452_e, 0);

    struct timeval tv_r_Filter_11_11495_s, tv_r_Filter_11_11495_e;
    gettimeofday(&tv_r_Filter_11_11495_s, 0);
    SW_Filter_TD_11285955(tbl_SerializeFromObject_TD_12501375_input, tbl_Filter_TD_11285955_output);
    gettimeofday(&tv_r_Filter_11_11495_e, 0);

    struct timeval tv_r_JOIN_INNER_11_750462_s, tv_r_JOIN_INNER_11_750462_e;
    gettimeofday(&tv_r_JOIN_INNER_11_750462_s, 0);
    SW_JOIN_INNER_TD_11678951(tbl_JOIN_INNER_TD_12753007_output, tbl_Filter_TD_12404899_output, tbl_JOIN_INNER_TD_11678951_output);
    gettimeofday(&tv_r_JOIN_INNER_11_750462_e, 0);

    struct timeval tv_r_Filter_11_4159_s, tv_r_Filter_11_4159_e;
    gettimeofday(&tv_r_Filter_11_4159_s, 0);
    SW_Filter_TD_11904987(tbl_SerializeFromObject_TD_12202647_input, tbl_Filter_TD_11904987_output);
    gettimeofday(&tv_r_Filter_11_4159_e, 0);

    struct timeval tv_r_JOIN_INNER_11_30068_s, tv_r_JOIN_INNER_11_30068_e;
    gettimeofday(&tv_r_JOIN_INNER_11_30068_s, 0);
    SW_JOIN_INNER_TD_11463805(tbl_JOIN_INNER_TD_12557983_output, tbl_Filter_TD_12329344_output, tbl_JOIN_INNER_TD_11463805_output);
    gettimeofday(&tv_r_JOIN_INNER_11_30068_e, 0);

    struct timeval tv_r_Filter_10_570841_s, tv_r_Filter_10_570841_e;
    gettimeofday(&tv_r_Filter_10_570841_s, 0);
    SW_Filter_TD_10121436(tbl_SerializeFromObject_TD_11992342_input, tbl_Filter_TD_10121436_output);
    gettimeofday(&tv_r_Filter_10_570841_e, 0);

    struct timeval tv_r_JOIN_INNER_10_873911_s, tv_r_JOIN_INNER_10_873911_e;
    gettimeofday(&tv_r_JOIN_INNER_10_873911_s, 0);
    SW_JOIN_INNER_TD_1040742(tbl_JOIN_INNER_TD_11678951_output, tbl_Filter_TD_11285955_output, tbl_JOIN_INNER_TD_1040742_output);
    gettimeofday(&tv_r_JOIN_INNER_10_873911_e, 0);

    struct timeval tv_r_Filter_10_641206_s, tv_r_Filter_10_641206_e;
    gettimeofday(&tv_r_Filter_10_641206_s, 0);
    SW_Filter_TD_10272996(tbl_SerializeFromObject_TD_11996073_input, tbl_Filter_TD_10272996_output);
    gettimeofday(&tv_r_Filter_10_641206_e, 0);

    struct timeval tv_r_JOIN_INNER_10_13841_s, tv_r_JOIN_INNER_10_13841_e;
    gettimeofday(&tv_r_JOIN_INNER_10_13841_s, 0);
    SW_JOIN_INNER_TD_10461171(tbl_JOIN_INNER_TD_11463805_output, tbl_Filter_TD_11904987_output, tbl_JOIN_INNER_TD_10461171_output);
    gettimeofday(&tv_r_JOIN_INNER_10_13841_e, 0);

    struct timeval tv_r_Filter_9_877618_s, tv_r_Filter_9_877618_e;
    gettimeofday(&tv_r_Filter_9_877618_s, 0);
    SW_Filter_TD_9147392(tbl_SerializeFromObject_TD_10889730_input, tbl_Filter_TD_9147392_output);
    gettimeofday(&tv_r_Filter_9_877618_e, 0);

    struct timeval tv_r_JOIN_INNER_9_512229_s, tv_r_JOIN_INNER_9_512229_e;
    gettimeofday(&tv_r_JOIN_INNER_9_512229_s, 0);
    SW_JOIN_INNER_TD_913412(tbl_JOIN_INNER_TD_1040742_output, tbl_Filter_TD_10121436_output, tbl_JOIN_INNER_TD_913412_output);
    gettimeofday(&tv_r_JOIN_INNER_9_512229_e, 0);

    struct timeval tv_r_Filter_9_578455_s, tv_r_Filter_9_578455_e;
    gettimeofday(&tv_r_Filter_9_578455_s, 0);
    SW_Filter_TD_9921182(tbl_SerializeFromObject_TD_10180184_input, tbl_Filter_TD_9921182_output);
    gettimeofday(&tv_r_Filter_9_578455_e, 0);

    struct timeval tv_r_JOIN_INNER_9_568654_s, tv_r_JOIN_INNER_9_568654_e;
    gettimeofday(&tv_r_JOIN_INNER_9_568654_s, 0);
    SW_JOIN_INNER_TD_9211101(tbl_JOIN_INNER_TD_10461171_output, tbl_Filter_TD_10272996_output, tbl_JOIN_INNER_TD_9211101_output);
    gettimeofday(&tv_r_JOIN_INNER_9_568654_e, 0);

    struct timeval tv_r_Filter_8_524802_s, tv_r_Filter_8_524802_e;
    gettimeofday(&tv_r_Filter_8_524802_s, 0);
    SW_Filter_TD_8648691(tbl_SerializeFromObject_TD_9102716_input, tbl_Filter_TD_8648691_output);
    gettimeofday(&tv_r_Filter_8_524802_e, 0);

    struct timeval tv_r_JOIN_INNER_8_843448_s, tv_r_JOIN_INNER_8_843448_e;
    gettimeofday(&tv_r_JOIN_INNER_8_843448_s, 0);
    SW_JOIN_INNER_TD_847309(tbl_JOIN_INNER_TD_913412_output, tbl_Filter_TD_9147392_output, tbl_JOIN_INNER_TD_847309_output);
    gettimeofday(&tv_r_JOIN_INNER_8_843448_e, 0);

    struct timeval tv_r_Filter_8_412568_s, tv_r_Filter_8_412568_e;
    gettimeofday(&tv_r_Filter_8_412568_s, 0);
    SW_Filter_TD_8294642(tbl_SerializeFromObject_TD_9279411_input, tbl_Filter_TD_8294642_output);
    gettimeofday(&tv_r_Filter_8_412568_e, 0);

    struct timeval tv_r_JOIN_INNER_8_40899_s, tv_r_JOIN_INNER_8_40899_e;
    gettimeofday(&tv_r_JOIN_INNER_8_40899_s, 0);
    SW_JOIN_INNER_TD_8644660(tbl_JOIN_INNER_TD_9211101_output, tbl_Filter_TD_9921182_output, tbl_JOIN_INNER_TD_8644660_output);
    gettimeofday(&tv_r_JOIN_INNER_8_40899_e, 0);

    struct timeval tv_r_Filter_7_146202_s, tv_r_Filter_7_146202_e;
    gettimeofday(&tv_r_Filter_7_146202_s, 0);
    SW_Filter_TD_7899954(tbl_SerializeFromObject_TD_8613139_input, tbl_Filter_TD_7899954_output);
    gettimeofday(&tv_r_Filter_7_146202_e, 0);

    struct timeval tv_r_JOIN_INNER_7_33217_s, tv_r_JOIN_INNER_7_33217_e;
    gettimeofday(&tv_r_JOIN_INNER_7_33217_s, 0);
    SW_JOIN_INNER_TD_7780693(tbl_JOIN_INNER_TD_847309_output, tbl_Filter_TD_8648691_output, tbl_JOIN_INNER_TD_7780693_output);
    gettimeofday(&tv_r_JOIN_INNER_7_33217_e, 0);

    struct timeval tv_r_Filter_7_552144_s, tv_r_Filter_7_552144_e;
    gettimeofday(&tv_r_Filter_7_552144_s, 0);
    SW_Filter_TD_7621261(tbl_SerializeFromObject_TD_8583992_input, tbl_Filter_TD_7621261_output);
    gettimeofday(&tv_r_Filter_7_552144_e, 0);

    struct timeval tv_r_JOIN_INNER_7_441260_s, tv_r_JOIN_INNER_7_441260_e;
    gettimeofday(&tv_r_JOIN_INNER_7_441260_s, 0);
    SW_JOIN_INNER_TD_718327(tbl_JOIN_INNER_TD_8644660_output, tbl_Filter_TD_8294642_output, tbl_JOIN_INNER_TD_718327_output);
    gettimeofday(&tv_r_JOIN_INNER_7_441260_e, 0);

    struct timeval tv_r_Filter_6_418523_s, tv_r_Filter_6_418523_e;
    gettimeofday(&tv_r_Filter_6_418523_s, 0);
    SW_Filter_TD_6302095(tbl_SerializeFromObject_TD_7701769_input, tbl_Filter_TD_6302095_output);
    gettimeofday(&tv_r_Filter_6_418523_e, 0);

    struct timeval tv_r_JOIN_INNER_6_297501_s, tv_r_JOIN_INNER_6_297501_e;
    gettimeofday(&tv_r_JOIN_INNER_6_297501_s, 0);
    SW_JOIN_INNER_TD_6202592(tbl_JOIN_INNER_TD_7780693_output, tbl_Filter_TD_7899954_output, tbl_JOIN_INNER_TD_6202592_output);
    gettimeofday(&tv_r_JOIN_INNER_6_297501_e, 0);

    struct timeval tv_r_Filter_6_860768_s, tv_r_Filter_6_860768_e;
    gettimeofday(&tv_r_Filter_6_860768_s, 0);
    SW_Filter_TD_6620892(tbl_SerializeFromObject_TD_7733498_input, tbl_Filter_TD_6620892_output);
    gettimeofday(&tv_r_Filter_6_860768_e, 0);

    struct timeval tv_r_JOIN_INNER_6_520097_s, tv_r_JOIN_INNER_6_520097_e;
    gettimeofday(&tv_r_JOIN_INNER_6_520097_s, 0);
    SW_JOIN_INNER_TD_6294531(tbl_JOIN_INNER_TD_718327_output, tbl_Filter_TD_7621261_output, tbl_JOIN_INNER_TD_6294531_output);
    gettimeofday(&tv_r_JOIN_INNER_6_520097_e, 0);

    struct timeval tv_r_Filter_5_993769_s, tv_r_Filter_5_993769_e;
    gettimeofday(&tv_r_Filter_5_993769_s, 0);
    SW_Filter_TD_5828316(tbl_SerializeFromObject_TD_6742476_input, tbl_Filter_TD_5828316_output);
    gettimeofday(&tv_r_Filter_5_993769_e, 0);

    struct timeval tv_r_JOIN_INNER_5_993852_s, tv_r_JOIN_INNER_5_993852_e;
    gettimeofday(&tv_r_JOIN_INNER_5_993852_s, 0);
    SW_JOIN_INNER_TD_5768385(tbl_JOIN_INNER_TD_6202592_output, tbl_Filter_TD_6302095_output, tbl_JOIN_INNER_TD_5768385_output);
    gettimeofday(&tv_r_JOIN_INNER_5_993852_e, 0);

    struct timeval tv_r_Filter_5_304748_s, tv_r_Filter_5_304748_e;
    gettimeofday(&tv_r_Filter_5_304748_s, 0);
    SW_Filter_TD_5832514(tbl_SerializeFromObject_TD_6945176_input, tbl_Filter_TD_5832514_output);
    gettimeofday(&tv_r_Filter_5_304748_e, 0);

    struct timeval tv_r_JOIN_INNER_5_44014_s, tv_r_JOIN_INNER_5_44014_e;
    gettimeofday(&tv_r_JOIN_INNER_5_44014_s, 0);
    SW_JOIN_INNER_TD_5696297(tbl_JOIN_INNER_TD_6294531_output, tbl_Filter_TD_6620892_output, tbl_JOIN_INNER_TD_5696297_output);
    gettimeofday(&tv_r_JOIN_INNER_5_44014_e, 0);

    struct timeval tv_r_JOIN_INNER_4_448383_s, tv_r_JOIN_INNER_4_448383_e;
    gettimeofday(&tv_r_JOIN_INNER_4_448383_s, 0);
    SW_JOIN_INNER_TD_4873104(tbl_JOIN_INNER_TD_5768385_output, tbl_Filter_TD_5828316_output, tbl_JOIN_INNER_TD_4873104_output);
    gettimeofday(&tv_r_JOIN_INNER_4_448383_e, 0);

    struct timeval tv_r_JOIN_INNER_4_90125_s, tv_r_JOIN_INNER_4_90125_e;
    gettimeofday(&tv_r_JOIN_INNER_4_90125_s, 0);
    SW_JOIN_INNER_TD_4192077(tbl_JOIN_INNER_TD_5696297_output, tbl_Filter_TD_5832514_output, tbl_JOIN_INNER_TD_4192077_output);
    gettimeofday(&tv_r_JOIN_INNER_4_90125_e, 0);

    struct timeval tv_r_Aggregate_3_362759_s, tv_r_Aggregate_3_362759_e;
    gettimeofday(&tv_r_Aggregate_3_362759_s, 0);
    SW_Aggregate_TD_3518693(tbl_JOIN_INNER_TD_4873104_output, tbl_Aggregate_TD_3518693_output);
    gettimeofday(&tv_r_Aggregate_3_362759_e, 0);

    struct timeval tv_r_Aggregate_3_543950_s, tv_r_Aggregate_3_543950_e;
    gettimeofday(&tv_r_Aggregate_3_543950_s, 0);
    SW_Aggregate_TD_3268092(tbl_JOIN_INNER_TD_4192077_output, tbl_Aggregate_TD_3268092_output);
    gettimeofday(&tv_r_Aggregate_3_543950_e, 0);

    struct timeval tv_r_JOIN_INNER_2_653917_s, tv_r_JOIN_INNER_2_653917_e;
    gettimeofday(&tv_r_JOIN_INNER_2_653917_s, 0);
    SW_JOIN_INNER_TD_2326277(tbl_Aggregate_TD_3268092_output, tbl_Aggregate_TD_3518693_output, tbl_JOIN_INNER_TD_2326277_output);
    gettimeofday(&tv_r_JOIN_INNER_2_653917_e, 0);

    struct timeval tv_r_Project_1_19336_s, tv_r_Project_1_19336_e;
    gettimeofday(&tv_r_Project_1_19336_s, 0);
    SW_Project_TD_1192106(tbl_JOIN_INNER_TD_2326277_output, tbl_Project_TD_1192106_output);
    gettimeofday(&tv_r_Project_1_19336_e, 0);

    struct timeval tv_r_Sort_0_207853_s, tv_r_Sort_0_207853_e;
    gettimeofday(&tv_r_Sort_0_207853_s, 0);
    SW_Sort_TD_0922223(tbl_Project_TD_1192106_output, tbl_Sort_TD_0922223_output);
    gettimeofday(&tv_r_Sort_0_207853_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_949946_s, &tv_r_Filter_23_949946_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24539179_input: " << tbl_SerializeFromObject_TD_24539179_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_811258_s, &tv_r_Filter_23_811258_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24789192_input: " << tbl_SerializeFromObject_TD_24789192_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_379539_s, &tv_r_Filter_23_379539_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24246772_input: " << tbl_SerializeFromObject_TD_24246772_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_23: " << tvdiff(&tv_r_Filter_23_177392_s, &tv_r_Filter_23_177392_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_24603818_input: " << tbl_SerializeFromObject_TD_24603818_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_316234_s, &tv_r_JOIN_INNER_22_316234_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_23486372_output: " << tbl_Filter_TD_23486372_output.getNumRow() << " " << "tbl_Filter_TD_23740452_output: " << tbl_Filter_TD_23740452_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_22: " << tvdiff(&tv_r_JOIN_INNER_22_387423_s, &tv_r_JOIN_INNER_22_387423_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_2383686_output: " << tbl_Filter_TD_2383686_output.getNumRow() << " " << "tbl_Filter_TD_23128534_output: " << tbl_Filter_TD_23128534_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_21: " << tvdiff(&tv_r_Aggregate_21_235944_s, &tv_r_Aggregate_21_235944_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22301638_output: " << tbl_JOIN_INNER_TD_22301638_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_85088_s, &tv_r_Filter_21_85088_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22277407_input: " << tbl_SerializeFromObject_TD_22277407_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_854903_s, &tv_r_Filter_21_854903_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_2260494_input: " << tbl_SerializeFromObject_TD_2260494_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_21: " << tvdiff(&tv_r_Aggregate_21_452680_s, &tv_r_Aggregate_21_452680_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_22585174_output: " << tbl_JOIN_INNER_TD_22585174_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_42940_s, &tv_r_Filter_21_42940_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22347534_input: " << tbl_SerializeFromObject_TD_22347534_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_21: " << tvdiff(&tv_r_Filter_21_966241_s, &tv_r_Filter_21_966241_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_22578352_input: " << tbl_SerializeFromObject_TD_22578352_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_457050_s, &tv_r_Filter_20_457050_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_21476819_output: " << tbl_Aggregate_TD_21476819_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_20: " << tvdiff(&tv_r_JOIN_INNER_20_596269_s, &tv_r_JOIN_INNER_20_596269_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21956140_output: " << tbl_Filter_TD_21956140_output.getNumRow() << " " << "tbl_Filter_TD_21107149_output: " << tbl_Filter_TD_21107149_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_20: " << tvdiff(&tv_r_Filter_20_840240_s, &tv_r_Filter_20_840240_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_21354495_output: " << tbl_Aggregate_TD_21354495_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_20: " << tvdiff(&tv_r_JOIN_INNER_20_793701_s, &tv_r_JOIN_INNER_20_793701_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_21892384_output: " << tbl_Filter_TD_21892384_output.getNumRow() << " " << "tbl_Filter_TD_21292963_output: " << tbl_Filter_TD_21292963_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_116464_s, &tv_r_Filter_19_116464_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20192917_input: " << tbl_SerializeFromObject_TD_20192917_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_909737_s, &tv_r_JOIN_INNER_19_909737_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_20959237_output: " << tbl_JOIN_INNER_TD_20959237_output.getNumRow() << " " << "tbl_Filter_TD_20344460_output: " << tbl_Filter_TD_20344460_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_19: " << tvdiff(&tv_r_Filter_19_216301_s, &tv_r_Filter_19_216301_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_20734505_input: " << tbl_SerializeFromObject_TD_20734505_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_19: " << tvdiff(&tv_r_JOIN_INNER_19_67337_s, &tv_r_JOIN_INNER_19_67337_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_20198573_output: " << tbl_JOIN_INNER_TD_20198573_output.getNumRow() << " " << "tbl_Filter_TD_204017_output: " << tbl_Filter_TD_204017_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_195377_s, &tv_r_Filter_18_195377_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19268301_input: " << tbl_SerializeFromObject_TD_19268301_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_750446_s, &tv_r_JOIN_INNER_18_750446_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19646565_output: " << tbl_JOIN_INNER_TD_19646565_output.getNumRow() << " " << "tbl_Filter_TD_19564949_output: " << tbl_Filter_TD_19564949_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_18: " << tvdiff(&tv_r_Filter_18_805070_s, &tv_r_Filter_18_805070_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_19298211_input: " << tbl_SerializeFromObject_TD_19298211_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_18: " << tvdiff(&tv_r_JOIN_INNER_18_410251_s, &tv_r_JOIN_INNER_18_410251_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_19197204_output: " << tbl_JOIN_INNER_TD_19197204_output.getNumRow() << " " << "tbl_Filter_TD_19937443_output: " << tbl_Filter_TD_19937443_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_258433_s, &tv_r_Filter_17_258433_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18594722_input: " << tbl_SerializeFromObject_TD_18594722_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_896522_s, &tv_r_JOIN_INNER_17_896522_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18540076_output: " << tbl_JOIN_INNER_TD_18540076_output.getNumRow() << " " << "tbl_Filter_TD_18182348_output: " << tbl_Filter_TD_18182348_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_17: " << tvdiff(&tv_r_Filter_17_348763_s, &tv_r_Filter_17_348763_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_18565160_input: " << tbl_SerializeFromObject_TD_18565160_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_17: " << tvdiff(&tv_r_JOIN_INNER_17_643306_s, &tv_r_JOIN_INNER_17_643306_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_18621070_output: " << tbl_JOIN_INNER_TD_18621070_output.getNumRow() << " " << "tbl_Filter_TD_18472408_output: " << tbl_Filter_TD_18472408_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_16: " << tvdiff(&tv_r_Filter_16_588992_s, &tv_r_Filter_16_588992_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_17519581_input: " << tbl_SerializeFromObject_TD_17519581_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_869582_s, &tv_r_JOIN_INNER_16_869582_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17505884_output: " << tbl_JOIN_INNER_TD_17505884_output.getNumRow() << " " << "tbl_Filter_TD_17856723_output: " << tbl_Filter_TD_17856723_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_16: " << tvdiff(&tv_r_Filter_16_313713_s, &tv_r_Filter_16_313713_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_17318261_input: " << tbl_SerializeFromObject_TD_17318261_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_16: " << tvdiff(&tv_r_JOIN_INNER_16_233497_s, &tv_r_JOIN_INNER_16_233497_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_17519613_output: " << tbl_JOIN_INNER_TD_17519613_output.getNumRow() << " " << "tbl_Filter_TD_17195741_output: " << tbl_Filter_TD_17195741_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_940220_s, &tv_r_Filter_15_940220_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_16702242_input: " << tbl_SerializeFromObject_TD_16702242_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_15: " << tvdiff(&tv_r_JOIN_INNER_15_409760_s, &tv_r_JOIN_INNER_15_409760_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_16599827_output: " << tbl_JOIN_INNER_TD_16599827_output.getNumRow() << " " << "tbl_Filter_TD_16643598_output: " << tbl_Filter_TD_16643598_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_15: " << tvdiff(&tv_r_Filter_15_201341_s, &tv_r_Filter_15_201341_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_16908342_input: " << tbl_SerializeFromObject_TD_16908342_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_15: " << tvdiff(&tv_r_JOIN_INNER_15_219039_s, &tv_r_JOIN_INNER_15_219039_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_16847179_output: " << tbl_JOIN_INNER_TD_16847179_output.getNumRow() << " " << "tbl_Filter_TD_16137309_output: " << tbl_Filter_TD_16137309_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_879046_s, &tv_r_Filter_14_879046_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15812583_input: " << tbl_SerializeFromObject_TD_15812583_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_14: " << tvdiff(&tv_r_JOIN_INNER_14_699807_s, &tv_r_JOIN_INNER_14_699807_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_15523304_output: " << tbl_JOIN_INNER_TD_15523304_output.getNumRow() << " " << "tbl_Filter_TD_15933291_output: " << tbl_Filter_TD_15933291_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_14: " << tvdiff(&tv_r_Filter_14_198439_s, &tv_r_Filter_14_198439_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_15918368_input: " << tbl_SerializeFromObject_TD_15918368_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_14: " << tvdiff(&tv_r_JOIN_INNER_14_174222_s, &tv_r_JOIN_INNER_14_174222_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_15645729_output: " << tbl_JOIN_INNER_TD_15645729_output.getNumRow() << " " << "tbl_Filter_TD_15784364_output: " << tbl_Filter_TD_15784364_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_65826_s, &tv_r_Filter_13_65826_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14110417_input: " << tbl_SerializeFromObject_TD_14110417_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_345582_s, &tv_r_JOIN_INNER_13_345582_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_14199663_output: " << tbl_JOIN_INNER_TD_14199663_output.getNumRow() << " " << "tbl_Filter_TD_14721441_output: " << tbl_Filter_TD_14721441_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_13: " << tvdiff(&tv_r_Filter_13_189067_s, &tv_r_Filter_13_189067_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_14952643_input: " << tbl_SerializeFromObject_TD_14952643_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_13: " << tvdiff(&tv_r_JOIN_INNER_13_456733_s, &tv_r_JOIN_INNER_13_456733_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_14327991_output: " << tbl_JOIN_INNER_TD_14327991_output.getNumRow() << " " << "tbl_Filter_TD_1413863_output: " << tbl_Filter_TD_1413863_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_122264_s, &tv_r_Filter_12_122264_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13941388_input: " << tbl_SerializeFromObject_TD_13941388_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_216416_s, &tv_r_JOIN_INNER_12_216416_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13152882_output: " << tbl_JOIN_INNER_TD_13152882_output.getNumRow() << " " << "tbl_Filter_TD_13137371_output: " << tbl_Filter_TD_13137371_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_240546_s, &tv_r_Filter_12_240546_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13566574_input: " << tbl_SerializeFromObject_TD_13566574_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_12: " << tvdiff(&tv_r_JOIN_INNER_12_540452_s, &tv_r_JOIN_INNER_12_540452_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_13135701_output: " << tbl_JOIN_INNER_TD_13135701_output.getNumRow() << " " << "tbl_Filter_TD_13978244_output: " << tbl_Filter_TD_13978244_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_11495_s, &tv_r_Filter_11_11495_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12501375_input: " << tbl_SerializeFromObject_TD_12501375_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_750462_s, &tv_r_JOIN_INNER_11_750462_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12753007_output: " << tbl_JOIN_INNER_TD_12753007_output.getNumRow() << " " << "tbl_Filter_TD_12404899_output: " << tbl_Filter_TD_12404899_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_4159_s, &tv_r_Filter_11_4159_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12202647_input: " << tbl_SerializeFromObject_TD_12202647_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_11: " << tvdiff(&tv_r_JOIN_INNER_11_30068_s, &tv_r_JOIN_INNER_11_30068_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_12557983_output: " << tbl_JOIN_INNER_TD_12557983_output.getNumRow() << " " << "tbl_Filter_TD_12329344_output: " << tbl_Filter_TD_12329344_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_570841_s, &tv_r_Filter_10_570841_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11992342_input: " << tbl_SerializeFromObject_TD_11992342_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_873911_s, &tv_r_JOIN_INNER_10_873911_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11678951_output: " << tbl_JOIN_INNER_TD_11678951_output.getNumRow() << " " << "tbl_Filter_TD_11285955_output: " << tbl_Filter_TD_11285955_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_641206_s, &tv_r_Filter_10_641206_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11996073_input: " << tbl_SerializeFromObject_TD_11996073_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_13841_s, &tv_r_JOIN_INNER_10_13841_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_11463805_output: " << tbl_JOIN_INNER_TD_11463805_output.getNumRow() << " " << "tbl_Filter_TD_11904987_output: " << tbl_Filter_TD_11904987_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_877618_s, &tv_r_Filter_9_877618_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10889730_input: " << tbl_SerializeFromObject_TD_10889730_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_512229_s, &tv_r_JOIN_INNER_9_512229_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1040742_output: " << tbl_JOIN_INNER_TD_1040742_output.getNumRow() << " " << "tbl_Filter_TD_10121436_output: " << tbl_Filter_TD_10121436_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_578455_s, &tv_r_Filter_9_578455_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10180184_input: " << tbl_SerializeFromObject_TD_10180184_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_568654_s, &tv_r_JOIN_INNER_9_568654_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10461171_output: " << tbl_JOIN_INNER_TD_10461171_output.getNumRow() << " " << "tbl_Filter_TD_10272996_output: " << tbl_Filter_TD_10272996_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_524802_s, &tv_r_Filter_8_524802_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9102716_input: " << tbl_SerializeFromObject_TD_9102716_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_843448_s, &tv_r_JOIN_INNER_8_843448_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_913412_output: " << tbl_JOIN_INNER_TD_913412_output.getNumRow() << " " << "tbl_Filter_TD_9147392_output: " << tbl_Filter_TD_9147392_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_412568_s, &tv_r_Filter_8_412568_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9279411_input: " << tbl_SerializeFromObject_TD_9279411_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_40899_s, &tv_r_JOIN_INNER_8_40899_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9211101_output: " << tbl_JOIN_INNER_TD_9211101_output.getNumRow() << " " << "tbl_Filter_TD_9921182_output: " << tbl_Filter_TD_9921182_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_146202_s, &tv_r_Filter_7_146202_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8613139_input: " << tbl_SerializeFromObject_TD_8613139_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_33217_s, &tv_r_JOIN_INNER_7_33217_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_847309_output: " << tbl_JOIN_INNER_TD_847309_output.getNumRow() << " " << "tbl_Filter_TD_8648691_output: " << tbl_Filter_TD_8648691_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_552144_s, &tv_r_Filter_7_552144_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8583992_input: " << tbl_SerializeFromObject_TD_8583992_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_441260_s, &tv_r_JOIN_INNER_7_441260_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8644660_output: " << tbl_JOIN_INNER_TD_8644660_output.getNumRow() << " " << "tbl_Filter_TD_8294642_output: " << tbl_Filter_TD_8294642_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_418523_s, &tv_r_Filter_6_418523_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7701769_input: " << tbl_SerializeFromObject_TD_7701769_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_297501_s, &tv_r_JOIN_INNER_6_297501_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7780693_output: " << tbl_JOIN_INNER_TD_7780693_output.getNumRow() << " " << "tbl_Filter_TD_7899954_output: " << tbl_Filter_TD_7899954_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_860768_s, &tv_r_Filter_6_860768_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7733498_input: " << tbl_SerializeFromObject_TD_7733498_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_520097_s, &tv_r_JOIN_INNER_6_520097_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_718327_output: " << tbl_JOIN_INNER_TD_718327_output.getNumRow() << " " << "tbl_Filter_TD_7621261_output: " << tbl_Filter_TD_7621261_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_993769_s, &tv_r_Filter_5_993769_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6742476_input: " << tbl_SerializeFromObject_TD_6742476_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_993852_s, &tv_r_JOIN_INNER_5_993852_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6202592_output: " << tbl_JOIN_INNER_TD_6202592_output.getNumRow() << " " << "tbl_Filter_TD_6302095_output: " << tbl_Filter_TD_6302095_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_304748_s, &tv_r_Filter_5_304748_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6945176_input: " << tbl_SerializeFromObject_TD_6945176_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_44014_s, &tv_r_JOIN_INNER_5_44014_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6294531_output: " << tbl_JOIN_INNER_TD_6294531_output.getNumRow() << " " << "tbl_Filter_TD_6620892_output: " << tbl_Filter_TD_6620892_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_448383_s, &tv_r_JOIN_INNER_4_448383_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5768385_output: " << tbl_JOIN_INNER_TD_5768385_output.getNumRow() << " " << "tbl_Filter_TD_5828316_output: " << tbl_Filter_TD_5828316_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_90125_s, &tv_r_JOIN_INNER_4_90125_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5696297_output: " << tbl_JOIN_INNER_TD_5696297_output.getNumRow() << " " << "tbl_Filter_TD_5832514_output: " << tbl_Filter_TD_5832514_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_362759_s, &tv_r_Aggregate_3_362759_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4873104_output: " << tbl_JOIN_INNER_TD_4873104_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_543950_s, &tv_r_Aggregate_3_543950_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4192077_output: " << tbl_JOIN_INNER_TD_4192077_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_653917_s, &tv_r_JOIN_INNER_2_653917_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3268092_output: " << tbl_Aggregate_TD_3268092_output.getNumRow() << " " << "tbl_Aggregate_TD_3518693_output: " << tbl_Aggregate_TD_3518693_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_19336_s, &tv_r_Project_1_19336_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2326277_output: " << tbl_JOIN_INNER_TD_2326277_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_207853_s, &tv_r_Sort_0_207853_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1192106_output: " << tbl_Project_TD_1192106_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 5.5433536 * 1000 << "ms" << std::endl; 
    return 0; 
}
