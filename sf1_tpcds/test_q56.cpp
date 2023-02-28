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

#include "cfgFunc_q56.hpp" 
#include "q56.hpp" 

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
    std::cout << "NOTE:running query #56\n."; 
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
    Table tbl_GlobalLimit_TD_0168774_output("tbl_GlobalLimit_TD_0168774_output", 6100000, 2, "");
    tbl_GlobalLimit_TD_0168774_output.allocateHost();
    Table tbl_LocalLimit_TD_158389_output("tbl_LocalLimit_TD_158389_output", 6100000, 2, "");
    tbl_LocalLimit_TD_158389_output.allocateHost();
    Table tbl_Sort_TD_2814271_output("tbl_Sort_TD_2814271_output", 6100000, 2, "");
    tbl_Sort_TD_2814271_output.allocateHost();
    Table tbl_Aggregate_TD_3731718_output("tbl_Aggregate_TD_3731718_output", 6100000, 2, "");
    tbl_Aggregate_TD_3731718_output.allocateHost();
    Table tbl_Union_TD_4590496_output("tbl_Union_TD_4590496_output", 6100000, 2, "");
    tbl_Union_TD_4590496_output.allocateHost();
    Table tbl_Aggregate_TD_5473120_output("tbl_Aggregate_TD_5473120_output", 6100000, 2, "");
    tbl_Aggregate_TD_5473120_output.allocateHost();
    Table tbl_Aggregate_TD_5359042_output("tbl_Aggregate_TD_5359042_output", 6100000, 2, "");
    tbl_Aggregate_TD_5359042_output.allocateHost();
    Table tbl_Aggregate_TD_5196668_output("tbl_Aggregate_TD_5196668_output", 6100000, 2, "");
    tbl_Aggregate_TD_5196668_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6246751_output("tbl_JOIN_INNER_TD_6246751_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6246751_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6683166_output("tbl_JOIN_INNER_TD_6683166_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6683166_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6658654_output("tbl_JOIN_INNER_TD_6658654_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6658654_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7441363_output("tbl_JOIN_INNER_TD_7441363_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7441363_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7703643_output("tbl_JOIN_LEFTSEMI_TD_7703643_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7703643_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7532138_output("tbl_JOIN_INNER_TD_7532138_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7532138_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7899929_output("tbl_JOIN_LEFTSEMI_TD_7899929_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7899929_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7390156_output("tbl_JOIN_INNER_TD_7390156_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7390156_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_7631637_output("tbl_JOIN_LEFTSEMI_TD_7631637_output", 6100000, 2, "");
    tbl_JOIN_LEFTSEMI_TD_7631637_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8893698_output("tbl_JOIN_INNER_TD_8893698_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8893698_output.allocateHost();
    Table tbl_Filter_TD_8315491_output("tbl_Filter_TD_8315491_output", 6100000, 1, "");
    tbl_Filter_TD_8315491_output.allocateHost();
    Table tbl_Filter_TD_830456_output("tbl_Filter_TD_830456_output", 6100000, 2, "");
    tbl_Filter_TD_830456_output.allocateHost();
    Table tbl_Filter_TD_8185340_output("tbl_Filter_TD_8185340_output", 6100000, 1, "");
    tbl_Filter_TD_8185340_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8110836_output("tbl_JOIN_INNER_TD_8110836_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8110836_output.allocateHost();
    Table tbl_Filter_TD_8755172_output("tbl_Filter_TD_8755172_output", 6100000, 1, "");
    tbl_Filter_TD_8755172_output.allocateHost();
    Table tbl_Filter_TD_8125449_output("tbl_Filter_TD_8125449_output", 6100000, 2, "");
    tbl_Filter_TD_8125449_output.allocateHost();
    Table tbl_Filter_TD_8674131_output("tbl_Filter_TD_8674131_output", 6100000, 1, "");
    tbl_Filter_TD_8674131_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8398267_output("tbl_JOIN_INNER_TD_8398267_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_8398267_output.allocateHost();
    Table tbl_Filter_TD_8499793_output("tbl_Filter_TD_8499793_output", 6100000, 1, "");
    tbl_Filter_TD_8499793_output.allocateHost();
    Table tbl_Filter_TD_876277_output("tbl_Filter_TD_876277_output", 6100000, 2, "");
    tbl_Filter_TD_876277_output.allocateHost();
    Table tbl_Filter_TD_8929667_output("tbl_Filter_TD_8929667_output", 6100000, 1, "");
    tbl_Filter_TD_8929667_output.allocateHost();
    Table tbl_Filter_TD_9359128_output("tbl_Filter_TD_9359128_output", 6100000, 4, "");
    tbl_Filter_TD_9359128_output.allocateHost();
    Table tbl_Filter_TD_9351732_output("tbl_Filter_TD_9351732_output", 6100000, 1, "");
    tbl_Filter_TD_9351732_output.allocateHost();
    Table tbl_SerializeFromObject_TD_971806_input;
    tbl_SerializeFromObject_TD_971806_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_971806_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_971806_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_971806_input.allocateHost();
    tbl_SerializeFromObject_TD_971806_input.loadHost();
    Table tbl_SerializeFromObject_TD_9325113_input;
    tbl_SerializeFromObject_TD_9325113_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9325113_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9325113_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9325113_input.allocateHost();
    tbl_SerializeFromObject_TD_9325113_input.loadHost();
    Table tbl_SerializeFromObject_TD_9921196_input;
    tbl_SerializeFromObject_TD_9921196_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9921196_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9921196_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9921196_input.allocateHost();
    tbl_SerializeFromObject_TD_9921196_input.loadHost();
    Table tbl_Filter_TD_9827785_output("tbl_Filter_TD_9827785_output", 6100000, 4, "");
    tbl_Filter_TD_9827785_output.allocateHost();
    Table tbl_Filter_TD_960732_output("tbl_Filter_TD_960732_output", 6100000, 1, "");
    tbl_Filter_TD_960732_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9645623_input;
    tbl_SerializeFromObject_TD_9645623_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9645623_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9645623_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9645623_input.allocateHost();
    tbl_SerializeFromObject_TD_9645623_input.loadHost();
    Table tbl_SerializeFromObject_TD_9386059_input;
    tbl_SerializeFromObject_TD_9386059_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9386059_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9386059_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9386059_input.allocateHost();
    tbl_SerializeFromObject_TD_9386059_input.loadHost();
    Table tbl_SerializeFromObject_TD_9540044_input;
    tbl_SerializeFromObject_TD_9540044_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9540044_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9540044_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9540044_input.allocateHost();
    tbl_SerializeFromObject_TD_9540044_input.loadHost();
    Table tbl_Filter_TD_916919_output("tbl_Filter_TD_916919_output", 6100000, 4, "");
    tbl_Filter_TD_916919_output.allocateHost();
    Table tbl_Filter_TD_9137044_output("tbl_Filter_TD_9137044_output", 6100000, 1, "");
    tbl_Filter_TD_9137044_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9464010_input;
    tbl_SerializeFromObject_TD_9464010_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9464010_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_9464010_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_9464010_input.allocateHost();
    tbl_SerializeFromObject_TD_9464010_input.loadHost();
    Table tbl_SerializeFromObject_TD_974784_input;
    tbl_SerializeFromObject_TD_974784_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_974784_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_974784_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_974784_input.allocateHost();
    tbl_SerializeFromObject_TD_974784_input.loadHost();
    Table tbl_SerializeFromObject_TD_9545318_input;
    tbl_SerializeFromObject_TD_9545318_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9545318_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9545318_input.addCol("i_color", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9545318_input.allocateHost();
    tbl_SerializeFromObject_TD_9545318_input.loadHost();
    Table tbl_SerializeFromObject_TD_10344809_input;
    tbl_SerializeFromObject_TD_10344809_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10344809_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10344809_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10344809_input.addCol("ss_addr_sk", 4);
    tbl_SerializeFromObject_TD_10344809_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10344809_input.allocateHost();
    tbl_SerializeFromObject_TD_10344809_input.loadHost();
    Table tbl_SerializeFromObject_TD_10771846_input;
    tbl_SerializeFromObject_TD_10771846_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10771846_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10771846_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10771846_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10771846_input.allocateHost();
    tbl_SerializeFromObject_TD_10771846_input.loadHost();
    Table tbl_SerializeFromObject_TD_1077041_input;
    tbl_SerializeFromObject_TD_1077041_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_1077041_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_1077041_input.addCol("cs_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_1077041_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_1077041_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_1077041_input.allocateHost();
    tbl_SerializeFromObject_TD_1077041_input.loadHost();
    Table tbl_SerializeFromObject_TD_1069308_input;
    tbl_SerializeFromObject_TD_1069308_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_1069308_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_1069308_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_1069308_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_1069308_input.allocateHost();
    tbl_SerializeFromObject_TD_1069308_input.loadHost();
    Table tbl_SerializeFromObject_TD_10275628_input;
    tbl_SerializeFromObject_TD_10275628_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10275628_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10275628_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_10275628_input.addCol("ws_bill_addr_sk", 4);
    tbl_SerializeFromObject_TD_10275628_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10275628_input.allocateHost();
    tbl_SerializeFromObject_TD_10275628_input.loadHost();
    Table tbl_SerializeFromObject_TD_10735276_input;
    tbl_SerializeFromObject_TD_10735276_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10735276_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10735276_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10735276_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10735276_input.allocateHost();
    tbl_SerializeFromObject_TD_10735276_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_7441363_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7532138_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7390156_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8893698_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8315491_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8110836_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8755172_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8398267_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8499793_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9359128_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9351732_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9827785_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_960732_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_916919_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9137044_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_7441363_cmds;
    cfg_JOIN_INNER_TD_7441363_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7441363_gqe_join (cfg_JOIN_INNER_TD_7441363_cmds.cmd);
    cfg_JOIN_INNER_TD_7441363_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7532138_cmds;
    cfg_JOIN_INNER_TD_7532138_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7532138_gqe_join (cfg_JOIN_INNER_TD_7532138_cmds.cmd);
    cfg_JOIN_INNER_TD_7532138_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7390156_cmds;
    cfg_JOIN_INNER_TD_7390156_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7390156_gqe_join (cfg_JOIN_INNER_TD_7390156_cmds.cmd);
    cfg_JOIN_INNER_TD_7390156_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8893698_cmds;
    cfg_JOIN_INNER_TD_8893698_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8893698_gqe_join (cfg_JOIN_INNER_TD_8893698_cmds.cmd);
    cfg_JOIN_INNER_TD_8893698_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8110836_cmds;
    cfg_JOIN_INNER_TD_8110836_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8110836_gqe_join (cfg_JOIN_INNER_TD_8110836_cmds.cmd);
    cfg_JOIN_INNER_TD_8110836_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8398267_cmds;
    cfg_JOIN_INNER_TD_8398267_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8398267_gqe_join (cfg_JOIN_INNER_TD_8398267_cmds.cmd);
    cfg_JOIN_INNER_TD_8398267_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_7441363;
    krnl_JOIN_INNER_TD_7441363 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7441363.setup(tbl_JOIN_INNER_TD_8893698_output, tbl_Filter_TD_8315491_output, tbl_JOIN_INNER_TD_7441363_output, cfg_JOIN_INNER_TD_7441363_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7532138;
    krnl_JOIN_INNER_TD_7532138 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7532138.setup(tbl_JOIN_INNER_TD_8110836_output, tbl_Filter_TD_8755172_output, tbl_JOIN_INNER_TD_7532138_output, cfg_JOIN_INNER_TD_7532138_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7390156;
    krnl_JOIN_INNER_TD_7390156 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7390156.setup(tbl_JOIN_INNER_TD_8398267_output, tbl_Filter_TD_8499793_output, tbl_JOIN_INNER_TD_7390156_output, cfg_JOIN_INNER_TD_7390156_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8893698;
    krnl_JOIN_INNER_TD_8893698 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8893698.setup(tbl_Filter_TD_9359128_output, tbl_Filter_TD_9351732_output, tbl_JOIN_INNER_TD_8893698_output, cfg_JOIN_INNER_TD_8893698_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8110836;
    krnl_JOIN_INNER_TD_8110836 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8110836.setup(tbl_Filter_TD_9827785_output, tbl_Filter_TD_960732_output, tbl_JOIN_INNER_TD_8110836_output, cfg_JOIN_INNER_TD_8110836_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8398267;
    krnl_JOIN_INNER_TD_8398267 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8398267.setup(tbl_Filter_TD_916919_output, tbl_Filter_TD_9137044_output, tbl_JOIN_INNER_TD_8398267_output, cfg_JOIN_INNER_TD_8398267_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_7441363;
    trans_JOIN_INNER_TD_7441363.setq(q_h);
    trans_JOIN_INNER_TD_7441363.add(&(cfg_JOIN_INNER_TD_7441363_cmds));
    transEngine trans_JOIN_INNER_TD_7441363_out;
    trans_JOIN_INNER_TD_7441363_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7532138;
    trans_JOIN_INNER_TD_7532138.setq(q_h);
    trans_JOIN_INNER_TD_7532138.add(&(cfg_JOIN_INNER_TD_7532138_cmds));
    transEngine trans_JOIN_INNER_TD_7532138_out;
    trans_JOIN_INNER_TD_7532138_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7390156;
    trans_JOIN_INNER_TD_7390156.setq(q_h);
    trans_JOIN_INNER_TD_7390156.add(&(cfg_JOIN_INNER_TD_7390156_cmds));
    transEngine trans_JOIN_INNER_TD_7390156_out;
    trans_JOIN_INNER_TD_7390156_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8893698;
    trans_JOIN_INNER_TD_8893698.setq(q_h);
    trans_JOIN_INNER_TD_8893698.add(&(cfg_JOIN_INNER_TD_8893698_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8110836;
    trans_JOIN_INNER_TD_8110836.setq(q_h);
    trans_JOIN_INNER_TD_8110836.add(&(cfg_JOIN_INNER_TD_8110836_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8398267;
    trans_JOIN_INNER_TD_8398267.setq(q_h);
    trans_JOIN_INNER_TD_8398267.add(&(cfg_JOIN_INNER_TD_8398267_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7441363;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7441363;
    std::vector<cl::Event> events_JOIN_INNER_TD_7441363;
    events_h2d_wr_JOIN_INNER_TD_7441363.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7441363.resize(1);
    events_JOIN_INNER_TD_7441363.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7441363;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7441363;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7532138;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7532138;
    std::vector<cl::Event> events_JOIN_INNER_TD_7532138;
    events_h2d_wr_JOIN_INNER_TD_7532138.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7532138.resize(1);
    events_JOIN_INNER_TD_7532138.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7532138;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7532138;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7390156;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7390156;
    std::vector<cl::Event> events_JOIN_INNER_TD_7390156;
    events_h2d_wr_JOIN_INNER_TD_7390156.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7390156.resize(1);
    events_JOIN_INNER_TD_7390156.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7390156;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7390156;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8893698;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8893698;
    std::vector<cl::Event> events_JOIN_INNER_TD_8893698;
    events_h2d_wr_JOIN_INNER_TD_8893698.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8893698.resize(1);
    events_JOIN_INNER_TD_8893698.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8893698;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8893698;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8110836;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8110836;
    std::vector<cl::Event> events_JOIN_INNER_TD_8110836;
    events_h2d_wr_JOIN_INNER_TD_8110836.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8110836.resize(1);
    events_JOIN_INNER_TD_8110836.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8110836;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8110836;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8398267;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8398267;
    std::vector<cl::Event> events_JOIN_INNER_TD_8398267;
    events_h2d_wr_JOIN_INNER_TD_8398267.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8398267.resize(1);
    events_JOIN_INNER_TD_8398267.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8398267;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8398267;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_401284_s, tv_r_Filter_9_401284_e;
    gettimeofday(&tv_r_Filter_9_401284_s, 0);
    SW_Filter_TD_9137044(tbl_SerializeFromObject_TD_10735276_input, tbl_Filter_TD_9137044_output);
    gettimeofday(&tv_r_Filter_9_401284_e, 0);

    struct timeval tv_r_Filter_9_581309_s, tv_r_Filter_9_581309_e;
    gettimeofday(&tv_r_Filter_9_581309_s, 0);
    SW_Filter_TD_916919(tbl_SerializeFromObject_TD_10275628_input, tbl_Filter_TD_916919_output);
    gettimeofday(&tv_r_Filter_9_581309_e, 0);

    struct timeval tv_r_Filter_9_11802_s, tv_r_Filter_9_11802_e;
    gettimeofday(&tv_r_Filter_9_11802_s, 0);
    SW_Filter_TD_960732(tbl_SerializeFromObject_TD_1069308_input, tbl_Filter_TD_960732_output);
    gettimeofday(&tv_r_Filter_9_11802_e, 0);

    struct timeval tv_r_Filter_9_846029_s, tv_r_Filter_9_846029_e;
    gettimeofday(&tv_r_Filter_9_846029_s, 0);
    SW_Filter_TD_9827785(tbl_SerializeFromObject_TD_1077041_input, tbl_Filter_TD_9827785_output);
    gettimeofday(&tv_r_Filter_9_846029_e, 0);

    struct timeval tv_r_Filter_9_481231_s, tv_r_Filter_9_481231_e;
    gettimeofday(&tv_r_Filter_9_481231_s, 0);
    SW_Filter_TD_9351732(tbl_SerializeFromObject_TD_10771846_input, tbl_Filter_TD_9351732_output);
    gettimeofday(&tv_r_Filter_9_481231_e, 0);

    struct timeval tv_r_Filter_9_913653_s, tv_r_Filter_9_913653_e;
    gettimeofday(&tv_r_Filter_9_913653_s, 0);
    SW_Filter_TD_9359128(tbl_SerializeFromObject_TD_10344809_input, tbl_Filter_TD_9359128_output);
    gettimeofday(&tv_r_Filter_9_913653_e, 0);

    struct timeval tv_r_Filter_8_886132_s, tv_r_Filter_8_886132_e;
    gettimeofday(&tv_r_Filter_8_886132_s, 0);
    SW_Filter_TD_8929667(tbl_SerializeFromObject_TD_9545318_input, tbl_Filter_TD_8929667_output);
    gettimeofday(&tv_r_Filter_8_886132_e, 0);

    struct timeval tv_r_Filter_8_479384_s, tv_r_Filter_8_479384_e;
    gettimeofday(&tv_r_Filter_8_479384_s, 0);
    SW_Filter_TD_876277(tbl_SerializeFromObject_TD_974784_input, tbl_Filter_TD_876277_output);
    gettimeofday(&tv_r_Filter_8_479384_e, 0);

    struct timeval tv_r_Filter_8_601769_s, tv_r_Filter_8_601769_e;
    gettimeofday(&tv_r_Filter_8_601769_s, 0);
    SW_Filter_TD_8499793(tbl_SerializeFromObject_TD_9464010_input, tbl_Filter_TD_8499793_output);
    gettimeofday(&tv_r_Filter_8_601769_e, 0);

    struct timeval tv_r_JOIN_INNER_8_725059_s, tv_r_JOIN_INNER_8_725059_e;
    gettimeofday(&tv_r_JOIN_INNER_8_725059_s, 0);
    trans_JOIN_INNER_TD_8398267.add(&(tbl_Filter_TD_916919_output));
    trans_JOIN_INNER_TD_8398267.add(&(tbl_Filter_TD_9137044_output));
    trans_JOIN_INNER_TD_8398267.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8398267), &(events_h2d_wr_JOIN_INNER_TD_8398267[0]));
    events_grp_JOIN_INNER_TD_8398267.push_back(events_h2d_wr_JOIN_INNER_TD_8398267[0]);
    krnl_JOIN_INNER_TD_8398267.run(0, &(events_grp_JOIN_INNER_TD_8398267), &(events_JOIN_INNER_TD_8398267[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_725059_e, 0);

    struct timeval tv_r_Filter_8_313919_s, tv_r_Filter_8_313919_e;
    gettimeofday(&tv_r_Filter_8_313919_s, 0);
    SW_Filter_TD_8674131(tbl_SerializeFromObject_TD_9540044_input, tbl_Filter_TD_8674131_output);
    gettimeofday(&tv_r_Filter_8_313919_e, 0);

    struct timeval tv_r_Filter_8_649268_s, tv_r_Filter_8_649268_e;
    gettimeofday(&tv_r_Filter_8_649268_s, 0);
    SW_Filter_TD_8125449(tbl_SerializeFromObject_TD_9386059_input, tbl_Filter_TD_8125449_output);
    gettimeofday(&tv_r_Filter_8_649268_e, 0);

    struct timeval tv_r_Filter_8_690681_s, tv_r_Filter_8_690681_e;
    gettimeofday(&tv_r_Filter_8_690681_s, 0);
    SW_Filter_TD_8755172(tbl_SerializeFromObject_TD_9645623_input, tbl_Filter_TD_8755172_output);
    gettimeofday(&tv_r_Filter_8_690681_e, 0);

    struct timeval tv_r_JOIN_INNER_8_463808_s, tv_r_JOIN_INNER_8_463808_e;
    gettimeofday(&tv_r_JOIN_INNER_8_463808_s, 0);
    trans_JOIN_INNER_TD_8110836.add(&(tbl_Filter_TD_9827785_output));
    trans_JOIN_INNER_TD_8110836.add(&(tbl_Filter_TD_960732_output));
    trans_JOIN_INNER_TD_8110836.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8110836), &(events_h2d_wr_JOIN_INNER_TD_8110836[0]));
    events_grp_JOIN_INNER_TD_8110836.push_back(events_h2d_wr_JOIN_INNER_TD_8110836[0]);
    krnl_JOIN_INNER_TD_8110836.run(0, &(events_grp_JOIN_INNER_TD_8110836), &(events_JOIN_INNER_TD_8110836[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_463808_e, 0);

    struct timeval tv_r_Filter_8_570105_s, tv_r_Filter_8_570105_e;
    gettimeofday(&tv_r_Filter_8_570105_s, 0);
    SW_Filter_TD_8185340(tbl_SerializeFromObject_TD_9921196_input, tbl_Filter_TD_8185340_output);
    gettimeofday(&tv_r_Filter_8_570105_e, 0);

    struct timeval tv_r_Filter_8_763172_s, tv_r_Filter_8_763172_e;
    gettimeofday(&tv_r_Filter_8_763172_s, 0);
    SW_Filter_TD_830456(tbl_SerializeFromObject_TD_9325113_input, tbl_Filter_TD_830456_output);
    gettimeofday(&tv_r_Filter_8_763172_e, 0);

    struct timeval tv_r_Filter_8_843218_s, tv_r_Filter_8_843218_e;
    gettimeofday(&tv_r_Filter_8_843218_s, 0);
    SW_Filter_TD_8315491(tbl_SerializeFromObject_TD_971806_input, tbl_Filter_TD_8315491_output);
    gettimeofday(&tv_r_Filter_8_843218_e, 0);

    struct timeval tv_r_JOIN_INNER_8_897051_s, tv_r_JOIN_INNER_8_897051_e;
    gettimeofday(&tv_r_JOIN_INNER_8_897051_s, 0);
    trans_JOIN_INNER_TD_8893698.add(&(tbl_Filter_TD_9359128_output));
    trans_JOIN_INNER_TD_8893698.add(&(tbl_Filter_TD_9351732_output));
    trans_JOIN_INNER_TD_8893698.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8893698), &(events_h2d_wr_JOIN_INNER_TD_8893698[0]));
    events_grp_JOIN_INNER_TD_8893698.push_back(events_h2d_wr_JOIN_INNER_TD_8893698[0]);
    krnl_JOIN_INNER_TD_8893698.run(0, &(events_grp_JOIN_INNER_TD_8893698), &(events_JOIN_INNER_TD_8893698[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_897051_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_470997_s, tv_r_JOIN_LEFTSEMI_7_470997_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_470997_s, 0);
    SW_JOIN_LEFTSEMI_TD_7631637(tbl_Filter_TD_876277_output, tbl_Filter_TD_8929667_output, tbl_JOIN_LEFTSEMI_TD_7631637_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_470997_e, 0);

    struct timeval tv_r_JOIN_INNER_7_851465_s, tv_r_JOIN_INNER_7_851465_e;
    gettimeofday(&tv_r_JOIN_INNER_7_851465_s, 0);
    prev_events_grp_JOIN_INNER_TD_7390156.push_back(events_h2d_wr_JOIN_INNER_TD_8398267[0]);
    trans_JOIN_INNER_TD_7390156.add(&(tbl_Filter_TD_8499793_output));
    trans_JOIN_INNER_TD_7390156.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7390156), &(events_h2d_wr_JOIN_INNER_TD_7390156[0]));
    events_grp_JOIN_INNER_TD_7390156.push_back(events_h2d_wr_JOIN_INNER_TD_7390156[0]);
    events_grp_JOIN_INNER_TD_7390156.push_back(events_JOIN_INNER_TD_8398267[0]);
    krnl_JOIN_INNER_TD_7390156.run(0, &(events_grp_JOIN_INNER_TD_7390156), &(events_JOIN_INNER_TD_7390156[0]));
    
    trans_JOIN_INNER_TD_7390156_out.add(&(tbl_JOIN_INNER_TD_7390156_output));
    trans_JOIN_INNER_TD_7390156_out.dev2host(0, &(events_JOIN_INNER_TD_7390156), &(events_d2h_rd_JOIN_INNER_TD_7390156[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_851465_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_398733_s, tv_r_JOIN_LEFTSEMI_7_398733_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_398733_s, 0);
    SW_JOIN_LEFTSEMI_TD_7899929(tbl_Filter_TD_8125449_output, tbl_Filter_TD_8674131_output, tbl_JOIN_LEFTSEMI_TD_7899929_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_398733_e, 0);

    struct timeval tv_r_JOIN_INNER_7_828051_s, tv_r_JOIN_INNER_7_828051_e;
    gettimeofday(&tv_r_JOIN_INNER_7_828051_s, 0);
    prev_events_grp_JOIN_INNER_TD_7532138.push_back(events_h2d_wr_JOIN_INNER_TD_8110836[0]);
    trans_JOIN_INNER_TD_7532138.add(&(tbl_Filter_TD_8755172_output));
    trans_JOIN_INNER_TD_7532138.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7532138), &(events_h2d_wr_JOIN_INNER_TD_7532138[0]));
    events_grp_JOIN_INNER_TD_7532138.push_back(events_h2d_wr_JOIN_INNER_TD_7532138[0]);
    events_grp_JOIN_INNER_TD_7532138.push_back(events_JOIN_INNER_TD_8110836[0]);
    krnl_JOIN_INNER_TD_7532138.run(0, &(events_grp_JOIN_INNER_TD_7532138), &(events_JOIN_INNER_TD_7532138[0]));
    
    trans_JOIN_INNER_TD_7532138_out.add(&(tbl_JOIN_INNER_TD_7532138_output));
    trans_JOIN_INNER_TD_7532138_out.dev2host(0, &(events_JOIN_INNER_TD_7532138), &(events_d2h_rd_JOIN_INNER_TD_7532138[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_828051_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_7_75760_s, tv_r_JOIN_LEFTSEMI_7_75760_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_75760_s, 0);
    SW_JOIN_LEFTSEMI_TD_7703643(tbl_Filter_TD_830456_output, tbl_Filter_TD_8185340_output, tbl_JOIN_LEFTSEMI_TD_7703643_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_7_75760_e, 0);

    struct timeval tv_r_JOIN_INNER_7_439854_s, tv_r_JOIN_INNER_7_439854_e;
    gettimeofday(&tv_r_JOIN_INNER_7_439854_s, 0);
    prev_events_grp_JOIN_INNER_TD_7441363.push_back(events_h2d_wr_JOIN_INNER_TD_8893698[0]);
    trans_JOIN_INNER_TD_7441363.add(&(tbl_Filter_TD_8315491_output));
    trans_JOIN_INNER_TD_7441363.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7441363), &(events_h2d_wr_JOIN_INNER_TD_7441363[0]));
    events_grp_JOIN_INNER_TD_7441363.push_back(events_h2d_wr_JOIN_INNER_TD_7441363[0]);
    events_grp_JOIN_INNER_TD_7441363.push_back(events_JOIN_INNER_TD_8893698[0]);
    krnl_JOIN_INNER_TD_7441363.run(0, &(events_grp_JOIN_INNER_TD_7441363), &(events_JOIN_INNER_TD_7441363[0]));
    
    trans_JOIN_INNER_TD_7441363_out.add(&(tbl_JOIN_INNER_TD_7441363_output));
    trans_JOIN_INNER_TD_7441363_out.dev2host(0, &(events_JOIN_INNER_TD_7441363), &(events_d2h_rd_JOIN_INNER_TD_7441363[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_439854_e, 0);

    struct timeval tv_r_JOIN_INNER_6_530066_s, tv_r_JOIN_INNER_6_530066_e;
    gettimeofday(&tv_r_JOIN_INNER_6_530066_s, 0);
    SW_JOIN_INNER_TD_6658654(tbl_JOIN_INNER_TD_7390156_output, tbl_JOIN_LEFTSEMI_TD_7631637_output, tbl_JOIN_INNER_TD_6658654_output);
    gettimeofday(&tv_r_JOIN_INNER_6_530066_e, 0);

    struct timeval tv_r_JOIN_INNER_6_642446_s, tv_r_JOIN_INNER_6_642446_e;
    gettimeofday(&tv_r_JOIN_INNER_6_642446_s, 0);
    SW_JOIN_INNER_TD_6683166(tbl_JOIN_INNER_TD_7532138_output, tbl_JOIN_LEFTSEMI_TD_7899929_output, tbl_JOIN_INNER_TD_6683166_output);
    gettimeofday(&tv_r_JOIN_INNER_6_642446_e, 0);

    struct timeval tv_r_JOIN_INNER_6_54299_s, tv_r_JOIN_INNER_6_54299_e;
    gettimeofday(&tv_r_JOIN_INNER_6_54299_s, 0);
    SW_JOIN_INNER_TD_6246751(tbl_JOIN_INNER_TD_7441363_output, tbl_JOIN_LEFTSEMI_TD_7703643_output, tbl_JOIN_INNER_TD_6246751_output);
    gettimeofday(&tv_r_JOIN_INNER_6_54299_e, 0);

    struct timeval tv_r_Aggregate_5_77486_s, tv_r_Aggregate_5_77486_e;
    gettimeofday(&tv_r_Aggregate_5_77486_s, 0);
    SW_Aggregate_TD_5196668(tbl_JOIN_INNER_TD_6658654_output, tbl_Aggregate_TD_5196668_output);
    gettimeofday(&tv_r_Aggregate_5_77486_e, 0);

    struct timeval tv_r_Aggregate_5_277430_s, tv_r_Aggregate_5_277430_e;
    gettimeofday(&tv_r_Aggregate_5_277430_s, 0);
    SW_Aggregate_TD_5359042(tbl_JOIN_INNER_TD_6683166_output, tbl_Aggregate_TD_5359042_output);
    gettimeofday(&tv_r_Aggregate_5_277430_e, 0);

    struct timeval tv_r_Aggregate_5_876121_s, tv_r_Aggregate_5_876121_e;
    gettimeofday(&tv_r_Aggregate_5_876121_s, 0);
    SW_Aggregate_TD_5473120(tbl_JOIN_INNER_TD_6246751_output, tbl_Aggregate_TD_5473120_output);
    gettimeofday(&tv_r_Aggregate_5_876121_e, 0);

    struct timeval tv_r_Union_4_961430_s, tv_r_Union_4_961430_e;
    gettimeofday(&tv_r_Union_4_961430_s, 0);
    SW_Union_TD_4590496(tbl_Aggregate_TD_5473120_output, tbl_Aggregate_TD_5359042_output, tbl_Aggregate_TD_5196668_output, tbl_Union_TD_4590496_output);
    gettimeofday(&tv_r_Union_4_961430_e, 0);

    struct timeval tv_r_Aggregate_3_64258_s, tv_r_Aggregate_3_64258_e;
    gettimeofday(&tv_r_Aggregate_3_64258_s, 0);
    SW_Aggregate_TD_3731718(tbl_Union_TD_4590496_output, tbl_Aggregate_TD_3731718_output);
    gettimeofday(&tv_r_Aggregate_3_64258_e, 0);

    struct timeval tv_r_Sort_2_205310_s, tv_r_Sort_2_205310_e;
    gettimeofday(&tv_r_Sort_2_205310_s, 0);
    SW_Sort_TD_2814271(tbl_Aggregate_TD_3731718_output, tbl_Sort_TD_2814271_output);
    gettimeofday(&tv_r_Sort_2_205310_e, 0);

    struct timeval tv_r_LocalLimit_1_424253_s, tv_r_LocalLimit_1_424253_e;
    gettimeofday(&tv_r_LocalLimit_1_424253_s, 0);
    SW_LocalLimit_TD_158389(tbl_Sort_TD_2814271_output, tbl_LocalLimit_TD_158389_output);
    gettimeofday(&tv_r_LocalLimit_1_424253_e, 0);

    struct timeval tv_r_GlobalLimit_0_710046_s, tv_r_GlobalLimit_0_710046_e;
    gettimeofday(&tv_r_GlobalLimit_0_710046_s, 0);
    SW_GlobalLimit_TD_0168774(tbl_LocalLimit_TD_158389_output, tbl_GlobalLimit_TD_0168774_output);
    gettimeofday(&tv_r_GlobalLimit_0_710046_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_401284_s, &tv_r_Filter_9_401284_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10735276_input: " << tbl_SerializeFromObject_TD_10735276_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_581309_s, &tv_r_Filter_9_581309_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10275628_input: " << tbl_SerializeFromObject_TD_10275628_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_11802_s, &tv_r_Filter_9_11802_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1069308_input: " << tbl_SerializeFromObject_TD_1069308_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_846029_s, &tv_r_Filter_9_846029_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1077041_input: " << tbl_SerializeFromObject_TD_1077041_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_481231_s, &tv_r_Filter_9_481231_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10771846_input: " << tbl_SerializeFromObject_TD_10771846_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_913653_s, &tv_r_Filter_9_913653_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10344809_input: " << tbl_SerializeFromObject_TD_10344809_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_886132_s, &tv_r_Filter_8_886132_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9545318_input: " << tbl_SerializeFromObject_TD_9545318_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_479384_s, &tv_r_Filter_8_479384_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_974784_input: " << tbl_SerializeFromObject_TD_974784_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_601769_s, &tv_r_Filter_8_601769_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9464010_input: " << tbl_SerializeFromObject_TD_9464010_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_725059_s, &tv_r_JOIN_INNER_8_725059_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_916919_output: " << tbl_Filter_TD_916919_output.getNumRow() << " " << "tbl_Filter_TD_9137044_output: " << tbl_Filter_TD_9137044_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_313919_s, &tv_r_Filter_8_313919_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9540044_input: " << tbl_SerializeFromObject_TD_9540044_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_649268_s, &tv_r_Filter_8_649268_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9386059_input: " << tbl_SerializeFromObject_TD_9386059_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_690681_s, &tv_r_Filter_8_690681_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9645623_input: " << tbl_SerializeFromObject_TD_9645623_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_463808_s, &tv_r_JOIN_INNER_8_463808_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9827785_output: " << tbl_Filter_TD_9827785_output.getNumRow() << " " << "tbl_Filter_TD_960732_output: " << tbl_Filter_TD_960732_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_570105_s, &tv_r_Filter_8_570105_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9921196_input: " << tbl_SerializeFromObject_TD_9921196_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_763172_s, &tv_r_Filter_8_763172_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9325113_input: " << tbl_SerializeFromObject_TD_9325113_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_843218_s, &tv_r_Filter_8_843218_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_971806_input: " << tbl_SerializeFromObject_TD_971806_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_897051_s, &tv_r_JOIN_INNER_8_897051_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9359128_output: " << tbl_Filter_TD_9359128_output.getNumRow() << " " << "tbl_Filter_TD_9351732_output: " << tbl_Filter_TD_9351732_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_470997_s, &tv_r_JOIN_LEFTSEMI_7_470997_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_876277_output: " << tbl_Filter_TD_876277_output.getNumRow() << " " << "tbl_Filter_TD_8929667_output: " << tbl_Filter_TD_8929667_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_851465_s, &tv_r_JOIN_INNER_7_851465_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8398267_output: " << tbl_JOIN_INNER_TD_8398267_output.getNumRow() << " " << "tbl_Filter_TD_8499793_output: " << tbl_Filter_TD_8499793_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_398733_s, &tv_r_JOIN_LEFTSEMI_7_398733_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8125449_output: " << tbl_Filter_TD_8125449_output.getNumRow() << " " << "tbl_Filter_TD_8674131_output: " << tbl_Filter_TD_8674131_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_828051_s, &tv_r_JOIN_INNER_7_828051_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8110836_output: " << tbl_JOIN_INNER_TD_8110836_output.getNumRow() << " " << "tbl_Filter_TD_8755172_output: " << tbl_Filter_TD_8755172_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_7: " << tvdiff(&tv_r_JOIN_LEFTSEMI_7_75760_s, &tv_r_JOIN_LEFTSEMI_7_75760_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_830456_output: " << tbl_Filter_TD_830456_output.getNumRow() << " " << "tbl_Filter_TD_8185340_output: " << tbl_Filter_TD_8185340_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_439854_s, &tv_r_JOIN_INNER_7_439854_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8893698_output: " << tbl_JOIN_INNER_TD_8893698_output.getNumRow() << " " << "tbl_Filter_TD_8315491_output: " << tbl_Filter_TD_8315491_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_530066_s, &tv_r_JOIN_INNER_6_530066_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7390156_output: " << tbl_JOIN_INNER_TD_7390156_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7631637_output: " << tbl_JOIN_LEFTSEMI_TD_7631637_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_642446_s, &tv_r_JOIN_INNER_6_642446_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7532138_output: " << tbl_JOIN_INNER_TD_7532138_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7899929_output: " << tbl_JOIN_LEFTSEMI_TD_7899929_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_54299_s, &tv_r_JOIN_INNER_6_54299_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7441363_output: " << tbl_JOIN_INNER_TD_7441363_output.getNumRow() << " " << "tbl_JOIN_LEFTSEMI_TD_7703643_output: " << tbl_JOIN_LEFTSEMI_TD_7703643_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_77486_s, &tv_r_Aggregate_5_77486_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6658654_output: " << tbl_JOIN_INNER_TD_6658654_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_277430_s, &tv_r_Aggregate_5_277430_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6683166_output: " << tbl_JOIN_INNER_TD_6683166_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_876121_s, &tv_r_Aggregate_5_876121_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6246751_output: " << tbl_JOIN_INNER_TD_6246751_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_961430_s, &tv_r_Union_4_961430_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5473120_output: " << tbl_Aggregate_TD_5473120_output.getNumRow() << " " << "tbl_Aggregate_TD_5359042_output: " << tbl_Aggregate_TD_5359042_output.getNumRow() << " " << "tbl_Aggregate_TD_5196668_output: " << tbl_Aggregate_TD_5196668_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_64258_s, &tv_r_Aggregate_3_64258_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_4590496_output: " << tbl_Union_TD_4590496_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_205310_s, &tv_r_Sort_2_205310_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3731718_output: " << tbl_Aggregate_TD_3731718_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_424253_s, &tv_r_LocalLimit_1_424253_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2814271_output: " << tbl_Sort_TD_2814271_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_710046_s, &tv_r_GlobalLimit_0_710046_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_158389_output: " << tbl_LocalLimit_TD_158389_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.1057673 * 1000 << "ms" << std::endl; 
    return 0; 
}
