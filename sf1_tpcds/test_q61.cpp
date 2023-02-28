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

#include "cfgFunc_q61.hpp" 
#include "q61.hpp" 

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
    std::cout << "NOTE:running query #61\n."; 
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
    Table tbl_Project_TD_0211574_output("tbl_Project_TD_0211574_output", 6100000, 3, "");
    tbl_Project_TD_0211574_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_1659217_output("tbl_JOIN_CROSS_TD_1659217_output", 6100000, 2, "");
    tbl_JOIN_CROSS_TD_1659217_output.allocateHost();
    Table tbl_Aggregate_TD_282105_output("tbl_Aggregate_TD_282105_output", 6100000, 1, "");
    tbl_Aggregate_TD_282105_output.allocateHost();
    Table tbl_Aggregate_TD_2614382_output("tbl_Aggregate_TD_2614382_output", 6100000, 1, "");
    tbl_Aggregate_TD_2614382_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3339401_output("tbl_JOIN_INNER_TD_3339401_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_3339401_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3209219_output("tbl_JOIN_INNER_TD_3209219_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_3209219_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4578905_output("tbl_JOIN_INNER_TD_4578905_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4578905_output.allocateHost();
    Table tbl_Filter_TD_4553009_output("tbl_Filter_TD_4553009_output", 6100000, 1, "");
    tbl_Filter_TD_4553009_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4642768_output("tbl_JOIN_INNER_TD_4642768_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4642768_output.allocateHost();
    Table tbl_Filter_TD_464720_output("tbl_Filter_TD_464720_output", 6100000, 1, "");
    tbl_Filter_TD_464720_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5304549_output("tbl_JOIN_INNER_TD_5304549_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5304549_output.allocateHost();
    Table tbl_Filter_TD_5208645_output("tbl_Filter_TD_5208645_output", 6100000, 1, "");
    tbl_Filter_TD_5208645_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5288304_input;
    tbl_SerializeFromObject_TD_5288304_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5288304_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_5288304_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5288304_input.allocateHost();
    tbl_SerializeFromObject_TD_5288304_input.loadHost();
    Table tbl_JOIN_INNER_TD_5123532_output("tbl_JOIN_INNER_TD_5123532_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5123532_output.allocateHost();
    Table tbl_Filter_TD_59492_output("tbl_Filter_TD_59492_output", 6100000, 1, "");
    tbl_Filter_TD_59492_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5999383_input;
    tbl_SerializeFromObject_TD_5999383_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5999383_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_5999383_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5999383_input.allocateHost();
    tbl_SerializeFromObject_TD_5999383_input.loadHost();
    Table tbl_JOIN_INNER_TD_642734_output("tbl_JOIN_INNER_TD_642734_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_642734_output.allocateHost();
    Table tbl_Filter_TD_6956007_output("tbl_Filter_TD_6956007_output", 6100000, 2, "");
    tbl_Filter_TD_6956007_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6321357_input;
    tbl_SerializeFromObject_TD_6321357_input = Table("customer_address", customer_address_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_6321357_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_6321357_input.allocateHost();
    tbl_SerializeFromObject_TD_6321357_input.loadHost();
    Table tbl_JOIN_INNER_TD_6581442_output("tbl_JOIN_INNER_TD_6581442_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6581442_output.allocateHost();
    Table tbl_Filter_TD_6246114_output("tbl_Filter_TD_6246114_output", 6100000, 2, "");
    tbl_Filter_TD_6246114_output.allocateHost();
    Table tbl_SerializeFromObject_TD_619818_input;
    tbl_SerializeFromObject_TD_619818_input = Table("customer_address", customer_address_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_619818_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_619818_input.allocateHost();
    tbl_SerializeFromObject_TD_619818_input.loadHost();
    Table tbl_JOIN_INNER_TD_7235282_output("tbl_JOIN_INNER_TD_7235282_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7235282_output.allocateHost();
    Table tbl_Filter_TD_7220209_output("tbl_Filter_TD_7220209_output", 6100000, 1, "");
    tbl_Filter_TD_7220209_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7157816_input;
    tbl_SerializeFromObject_TD_7157816_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7157816_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_7157816_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_7157816_input.allocateHost();
    tbl_SerializeFromObject_TD_7157816_input.loadHost();
    Table tbl_JOIN_INNER_TD_7847528_output("tbl_JOIN_INNER_TD_7847528_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_7847528_output.allocateHost();
    Table tbl_Filter_TD_734435_output("tbl_Filter_TD_734435_output", 6100000, 1, "");
    tbl_Filter_TD_734435_output.allocateHost();
    Table tbl_SerializeFromObject_TD_738147_input;
    tbl_SerializeFromObject_TD_738147_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_738147_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_738147_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_738147_input.allocateHost();
    tbl_SerializeFromObject_TD_738147_input.loadHost();
    Table tbl_JOIN_INNER_TD_8262552_output("tbl_JOIN_INNER_TD_8262552_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_8262552_output.allocateHost();
    Table tbl_Filter_TD_8477570_output("tbl_Filter_TD_8477570_output", 6100000, 1, "");
    tbl_Filter_TD_8477570_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8711274_input;
    tbl_SerializeFromObject_TD_8711274_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8711274_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8711274_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8711274_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8711274_input.allocateHost();
    tbl_SerializeFromObject_TD_8711274_input.loadHost();
    Table tbl_Filter_TD_886047_output("tbl_Filter_TD_886047_output", 6100000, 5, "");
    tbl_Filter_TD_886047_output.allocateHost();
    Table tbl_Filter_TD_8954598_output("tbl_Filter_TD_8954598_output", 6100000, 1, "");
    tbl_Filter_TD_8954598_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8710814_input;
    tbl_SerializeFromObject_TD_8710814_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8710814_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8710814_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8710814_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8710814_input.allocateHost();
    tbl_SerializeFromObject_TD_8710814_input.loadHost();
    Table tbl_Filter_TD_976386_output("tbl_Filter_TD_976386_output", 6100000, 6, "");
    tbl_Filter_TD_976386_output.allocateHost();
    Table tbl_Filter_TD_9855778_output("tbl_Filter_TD_9855778_output", 6100000, 1, "");
    tbl_Filter_TD_9855778_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9919042_input;
    tbl_SerializeFromObject_TD_9919042_input = Table("promotion", promotion_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9919042_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_9919042_input.addCol("p_channel_dmail", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9919042_input.addCol("p_channel_email", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9919042_input.addCol("p_channel_tv", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9919042_input.allocateHost();
    tbl_SerializeFromObject_TD_9919042_input.loadHost();
    Table tbl_SerializeFromObject_TD_9999442_input;
    tbl_SerializeFromObject_TD_9999442_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_9999442_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9999442_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_9999442_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9999442_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9999442_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_9999442_input.allocateHost();
    tbl_SerializeFromObject_TD_9999442_input.loadHost();
    Table tbl_SerializeFromObject_TD_9660566_input;
    tbl_SerializeFromObject_TD_9660566_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_9660566_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9660566_input.allocateHost();
    tbl_SerializeFromObject_TD_9660566_input.loadHost();
    Table tbl_SerializeFromObject_TD_10229947_input;
    tbl_SerializeFromObject_TD_10229947_input = Table("store_sales", store_sales_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_10229947_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10229947_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10229947_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10229947_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10229947_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_10229947_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10229947_input.allocateHost();
    tbl_SerializeFromObject_TD_10229947_input.loadHost();
    Table tbl_SerializeFromObject_TD_10358855_input;
    tbl_SerializeFromObject_TD_10358855_input = Table("store", store_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_10358855_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10358855_input.allocateHost();
    tbl_SerializeFromObject_TD_10358855_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_3339401_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3209219_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4578905_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4553009_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4642768_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_464720_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5304549_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5208645_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5123532_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_59492_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_642734_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6956007_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6581442_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6246114_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7235282_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7220209_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7847528_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_734435_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8262552_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8477570_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_886047_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8954598_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_976386_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9855778_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_3339401_cmds;
    cfg_JOIN_INNER_TD_3339401_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3339401_gqe_join (cfg_JOIN_INNER_TD_3339401_cmds.cmd);
    cfg_JOIN_INNER_TD_3339401_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3209219_cmds;
    cfg_JOIN_INNER_TD_3209219_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3209219_gqe_join (cfg_JOIN_INNER_TD_3209219_cmds.cmd);
    cfg_JOIN_INNER_TD_3209219_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4578905_cmds;
    cfg_JOIN_INNER_TD_4578905_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4578905_gqe_join (cfg_JOIN_INNER_TD_4578905_cmds.cmd);
    cfg_JOIN_INNER_TD_4578905_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4642768_cmds;
    cfg_JOIN_INNER_TD_4642768_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4642768_gqe_join (cfg_JOIN_INNER_TD_4642768_cmds.cmd);
    cfg_JOIN_INNER_TD_4642768_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5304549_cmds;
    cfg_JOIN_INNER_TD_5304549_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5304549_gqe_join (cfg_JOIN_INNER_TD_5304549_cmds.cmd);
    cfg_JOIN_INNER_TD_5304549_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5123532_cmds;
    cfg_JOIN_INNER_TD_5123532_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5123532_gqe_join (cfg_JOIN_INNER_TD_5123532_cmds.cmd);
    cfg_JOIN_INNER_TD_5123532_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_642734_cmds;
    cfg_JOIN_INNER_TD_642734_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_642734_gqe_join (cfg_JOIN_INNER_TD_642734_cmds.cmd);
    cfg_JOIN_INNER_TD_642734_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6581442_cmds;
    cfg_JOIN_INNER_TD_6581442_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6581442_gqe_join (cfg_JOIN_INNER_TD_6581442_cmds.cmd);
    cfg_JOIN_INNER_TD_6581442_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7235282_cmds;
    cfg_JOIN_INNER_TD_7235282_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7235282_gqe_join (cfg_JOIN_INNER_TD_7235282_cmds.cmd);
    cfg_JOIN_INNER_TD_7235282_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7847528_cmds;
    cfg_JOIN_INNER_TD_7847528_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7847528_gqe_join (cfg_JOIN_INNER_TD_7847528_cmds.cmd);
    cfg_JOIN_INNER_TD_7847528_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8262552_cmds;
    cfg_JOIN_INNER_TD_8262552_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8262552_gqe_join (cfg_JOIN_INNER_TD_8262552_cmds.cmd);
    cfg_JOIN_INNER_TD_8262552_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_3339401;
    krnl_JOIN_INNER_TD_3339401 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3339401.setup(tbl_JOIN_INNER_TD_4578905_output, tbl_Filter_TD_4553009_output, tbl_JOIN_INNER_TD_3339401_output, cfg_JOIN_INNER_TD_3339401_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3209219;
    krnl_JOIN_INNER_TD_3209219 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3209219.setup(tbl_JOIN_INNER_TD_4642768_output, tbl_Filter_TD_464720_output, tbl_JOIN_INNER_TD_3209219_output, cfg_JOIN_INNER_TD_3209219_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4578905;
    krnl_JOIN_INNER_TD_4578905 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4578905.setup(tbl_JOIN_INNER_TD_5304549_output, tbl_Filter_TD_5208645_output, tbl_JOIN_INNER_TD_4578905_output, cfg_JOIN_INNER_TD_4578905_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4642768;
    krnl_JOIN_INNER_TD_4642768 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4642768.setup(tbl_JOIN_INNER_TD_5123532_output, tbl_Filter_TD_59492_output, tbl_JOIN_INNER_TD_4642768_output, cfg_JOIN_INNER_TD_4642768_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5304549;
    krnl_JOIN_INNER_TD_5304549 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5304549.setup(tbl_JOIN_INNER_TD_642734_output, tbl_Filter_TD_6956007_output, tbl_JOIN_INNER_TD_5304549_output, cfg_JOIN_INNER_TD_5304549_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5123532;
    krnl_JOIN_INNER_TD_5123532 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5123532.setup(tbl_JOIN_INNER_TD_6581442_output, tbl_Filter_TD_6246114_output, tbl_JOIN_INNER_TD_5123532_output, cfg_JOIN_INNER_TD_5123532_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_642734;
    krnl_JOIN_INNER_TD_642734 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_642734.setup(tbl_JOIN_INNER_TD_7235282_output, tbl_Filter_TD_7220209_output, tbl_JOIN_INNER_TD_642734_output, cfg_JOIN_INNER_TD_642734_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6581442;
    krnl_JOIN_INNER_TD_6581442 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6581442.setup(tbl_JOIN_INNER_TD_7847528_output, tbl_Filter_TD_734435_output, tbl_JOIN_INNER_TD_6581442_output, cfg_JOIN_INNER_TD_6581442_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7235282;
    krnl_JOIN_INNER_TD_7235282 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7235282.setup(tbl_JOIN_INNER_TD_8262552_output, tbl_Filter_TD_8477570_output, tbl_JOIN_INNER_TD_7235282_output, cfg_JOIN_INNER_TD_7235282_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7847528;
    krnl_JOIN_INNER_TD_7847528 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7847528.setup(tbl_Filter_TD_886047_output, tbl_Filter_TD_8954598_output, tbl_JOIN_INNER_TD_7847528_output, cfg_JOIN_INNER_TD_7847528_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8262552;
    krnl_JOIN_INNER_TD_8262552 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8262552.setup(tbl_Filter_TD_976386_output, tbl_Filter_TD_9855778_output, tbl_JOIN_INNER_TD_8262552_output, cfg_JOIN_INNER_TD_8262552_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_3339401;
    trans_JOIN_INNER_TD_3339401.setq(q_h);
    trans_JOIN_INNER_TD_3339401.add(&(cfg_JOIN_INNER_TD_3339401_cmds));
    transEngine trans_JOIN_INNER_TD_3339401_out;
    trans_JOIN_INNER_TD_3339401_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3209219;
    trans_JOIN_INNER_TD_3209219.setq(q_h);
    trans_JOIN_INNER_TD_3209219.add(&(cfg_JOIN_INNER_TD_3209219_cmds));
    transEngine trans_JOIN_INNER_TD_3209219_out;
    trans_JOIN_INNER_TD_3209219_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4578905;
    trans_JOIN_INNER_TD_4578905.setq(q_h);
    trans_JOIN_INNER_TD_4578905.add(&(cfg_JOIN_INNER_TD_4578905_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4642768;
    trans_JOIN_INNER_TD_4642768.setq(q_h);
    trans_JOIN_INNER_TD_4642768.add(&(cfg_JOIN_INNER_TD_4642768_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5304549;
    trans_JOIN_INNER_TD_5304549.setq(q_h);
    trans_JOIN_INNER_TD_5304549.add(&(cfg_JOIN_INNER_TD_5304549_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5123532;
    trans_JOIN_INNER_TD_5123532.setq(q_h);
    trans_JOIN_INNER_TD_5123532.add(&(cfg_JOIN_INNER_TD_5123532_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_642734;
    trans_JOIN_INNER_TD_642734.setq(q_h);
    trans_JOIN_INNER_TD_642734.add(&(cfg_JOIN_INNER_TD_642734_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6581442;
    trans_JOIN_INNER_TD_6581442.setq(q_h);
    trans_JOIN_INNER_TD_6581442.add(&(cfg_JOIN_INNER_TD_6581442_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7235282;
    trans_JOIN_INNER_TD_7235282.setq(q_h);
    trans_JOIN_INNER_TD_7235282.add(&(cfg_JOIN_INNER_TD_7235282_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7847528;
    trans_JOIN_INNER_TD_7847528.setq(q_h);
    trans_JOIN_INNER_TD_7847528.add(&(cfg_JOIN_INNER_TD_7847528_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8262552;
    trans_JOIN_INNER_TD_8262552.setq(q_h);
    trans_JOIN_INNER_TD_8262552.add(&(cfg_JOIN_INNER_TD_8262552_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3339401;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3339401;
    std::vector<cl::Event> events_JOIN_INNER_TD_3339401;
    events_h2d_wr_JOIN_INNER_TD_3339401.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3339401.resize(1);
    events_JOIN_INNER_TD_3339401.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3339401;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3339401;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3209219;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3209219;
    std::vector<cl::Event> events_JOIN_INNER_TD_3209219;
    events_h2d_wr_JOIN_INNER_TD_3209219.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3209219.resize(1);
    events_JOIN_INNER_TD_3209219.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3209219;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3209219;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4578905;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4578905;
    std::vector<cl::Event> events_JOIN_INNER_TD_4578905;
    events_h2d_wr_JOIN_INNER_TD_4578905.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4578905.resize(1);
    events_JOIN_INNER_TD_4578905.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4578905;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4578905;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4642768;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4642768;
    std::vector<cl::Event> events_JOIN_INNER_TD_4642768;
    events_h2d_wr_JOIN_INNER_TD_4642768.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4642768.resize(1);
    events_JOIN_INNER_TD_4642768.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4642768;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4642768;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5304549;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5304549;
    std::vector<cl::Event> events_JOIN_INNER_TD_5304549;
    events_h2d_wr_JOIN_INNER_TD_5304549.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5304549.resize(1);
    events_JOIN_INNER_TD_5304549.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5304549;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5304549;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5123532;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5123532;
    std::vector<cl::Event> events_JOIN_INNER_TD_5123532;
    events_h2d_wr_JOIN_INNER_TD_5123532.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5123532.resize(1);
    events_JOIN_INNER_TD_5123532.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5123532;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5123532;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_642734;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_642734;
    std::vector<cl::Event> events_JOIN_INNER_TD_642734;
    events_h2d_wr_JOIN_INNER_TD_642734.resize(1);
    events_d2h_rd_JOIN_INNER_TD_642734.resize(1);
    events_JOIN_INNER_TD_642734.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_642734;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_642734;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6581442;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6581442;
    std::vector<cl::Event> events_JOIN_INNER_TD_6581442;
    events_h2d_wr_JOIN_INNER_TD_6581442.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6581442.resize(1);
    events_JOIN_INNER_TD_6581442.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6581442;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6581442;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7235282;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7235282;
    std::vector<cl::Event> events_JOIN_INNER_TD_7235282;
    events_h2d_wr_JOIN_INNER_TD_7235282.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7235282.resize(1);
    events_JOIN_INNER_TD_7235282.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7235282;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7235282;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7847528;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7847528;
    std::vector<cl::Event> events_JOIN_INNER_TD_7847528;
    events_h2d_wr_JOIN_INNER_TD_7847528.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7847528.resize(1);
    events_JOIN_INNER_TD_7847528.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7847528;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7847528;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8262552;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8262552;
    std::vector<cl::Event> events_JOIN_INNER_TD_8262552;
    events_h2d_wr_JOIN_INNER_TD_8262552.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8262552.resize(1);
    events_JOIN_INNER_TD_8262552.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8262552;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8262552;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_229598_s, tv_r_Filter_9_229598_e;
    gettimeofday(&tv_r_Filter_9_229598_s, 0);
    SW_Filter_TD_9855778(tbl_SerializeFromObject_TD_10358855_input, tbl_Filter_TD_9855778_output);
    gettimeofday(&tv_r_Filter_9_229598_e, 0);

    struct timeval tv_r_Filter_9_235497_s, tv_r_Filter_9_235497_e;
    gettimeofday(&tv_r_Filter_9_235497_s, 0);
    SW_Filter_TD_976386(tbl_SerializeFromObject_TD_10229947_input, tbl_Filter_TD_976386_output);
    gettimeofday(&tv_r_Filter_9_235497_e, 0);

    struct timeval tv_r_Filter_8_653943_s, tv_r_Filter_8_653943_e;
    gettimeofday(&tv_r_Filter_8_653943_s, 0);
    SW_Filter_TD_8954598(tbl_SerializeFromObject_TD_9660566_input, tbl_Filter_TD_8954598_output);
    gettimeofday(&tv_r_Filter_8_653943_e, 0);

    struct timeval tv_r_Filter_8_697736_s, tv_r_Filter_8_697736_e;
    gettimeofday(&tv_r_Filter_8_697736_s, 0);
    SW_Filter_TD_886047(tbl_SerializeFromObject_TD_9999442_input, tbl_Filter_TD_886047_output);
    gettimeofday(&tv_r_Filter_8_697736_e, 0);

    struct timeval tv_r_Filter_8_585774_s, tv_r_Filter_8_585774_e;
    gettimeofday(&tv_r_Filter_8_585774_s, 0);
    SW_Filter_TD_8477570(tbl_SerializeFromObject_TD_9919042_input, tbl_Filter_TD_8477570_output);
    gettimeofday(&tv_r_Filter_8_585774_e, 0);

    struct timeval tv_r_JOIN_INNER_8_441345_s, tv_r_JOIN_INNER_8_441345_e;
    gettimeofday(&tv_r_JOIN_INNER_8_441345_s, 0);
    trans_JOIN_INNER_TD_8262552.add(&(tbl_Filter_TD_976386_output));
    trans_JOIN_INNER_TD_8262552.add(&(tbl_Filter_TD_9855778_output));
    trans_JOIN_INNER_TD_8262552.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8262552), &(events_h2d_wr_JOIN_INNER_TD_8262552[0]));
    events_grp_JOIN_INNER_TD_8262552.push_back(events_h2d_wr_JOIN_INNER_TD_8262552[0]);
    krnl_JOIN_INNER_TD_8262552.run(0, &(events_grp_JOIN_INNER_TD_8262552), &(events_JOIN_INNER_TD_8262552[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_441345_e, 0);

    struct timeval tv_r_Filter_7_70833_s, tv_r_Filter_7_70833_e;
    gettimeofday(&tv_r_Filter_7_70833_s, 0);
    SW_Filter_TD_734435(tbl_SerializeFromObject_TD_8710814_input, tbl_Filter_TD_734435_output);
    gettimeofday(&tv_r_Filter_7_70833_e, 0);

    struct timeval tv_r_JOIN_INNER_7_307159_s, tv_r_JOIN_INNER_7_307159_e;
    gettimeofday(&tv_r_JOIN_INNER_7_307159_s, 0);
    trans_JOIN_INNER_TD_7847528.add(&(tbl_Filter_TD_886047_output));
    trans_JOIN_INNER_TD_7847528.add(&(tbl_Filter_TD_8954598_output));
    trans_JOIN_INNER_TD_7847528.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7847528), &(events_h2d_wr_JOIN_INNER_TD_7847528[0]));
    events_grp_JOIN_INNER_TD_7847528.push_back(events_h2d_wr_JOIN_INNER_TD_7847528[0]);
    krnl_JOIN_INNER_TD_7847528.run(0, &(events_grp_JOIN_INNER_TD_7847528), &(events_JOIN_INNER_TD_7847528[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_307159_e, 0);

    struct timeval tv_r_Filter_7_81638_s, tv_r_Filter_7_81638_e;
    gettimeofday(&tv_r_Filter_7_81638_s, 0);
    SW_Filter_TD_7220209(tbl_SerializeFromObject_TD_8711274_input, tbl_Filter_TD_7220209_output);
    gettimeofday(&tv_r_Filter_7_81638_e, 0);

    struct timeval tv_r_JOIN_INNER_7_144149_s, tv_r_JOIN_INNER_7_144149_e;
    gettimeofday(&tv_r_JOIN_INNER_7_144149_s, 0);
    prev_events_grp_JOIN_INNER_TD_7235282.push_back(events_h2d_wr_JOIN_INNER_TD_8262552[0]);
    trans_JOIN_INNER_TD_7235282.add(&(tbl_Filter_TD_8477570_output));
    trans_JOIN_INNER_TD_7235282.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7235282), &(events_h2d_wr_JOIN_INNER_TD_7235282[0]));
    events_grp_JOIN_INNER_TD_7235282.push_back(events_h2d_wr_JOIN_INNER_TD_7235282[0]);
    events_grp_JOIN_INNER_TD_7235282.push_back(events_JOIN_INNER_TD_8262552[0]);
    krnl_JOIN_INNER_TD_7235282.run(0, &(events_grp_JOIN_INNER_TD_7235282), &(events_JOIN_INNER_TD_7235282[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_144149_e, 0);

    struct timeval tv_r_Filter_6_397144_s, tv_r_Filter_6_397144_e;
    gettimeofday(&tv_r_Filter_6_397144_s, 0);
    SW_Filter_TD_6246114(tbl_SerializeFromObject_TD_738147_input, tbl_Filter_TD_6246114_output);
    gettimeofday(&tv_r_Filter_6_397144_e, 0);

    struct timeval tv_r_JOIN_INNER_6_835950_s, tv_r_JOIN_INNER_6_835950_e;
    gettimeofday(&tv_r_JOIN_INNER_6_835950_s, 0);
    prev_events_grp_JOIN_INNER_TD_6581442.push_back(events_h2d_wr_JOIN_INNER_TD_7847528[0]);
    trans_JOIN_INNER_TD_6581442.add(&(tbl_Filter_TD_734435_output));
    trans_JOIN_INNER_TD_6581442.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6581442), &(events_h2d_wr_JOIN_INNER_TD_6581442[0]));
    events_grp_JOIN_INNER_TD_6581442.push_back(events_h2d_wr_JOIN_INNER_TD_6581442[0]);
    events_grp_JOIN_INNER_TD_6581442.push_back(events_JOIN_INNER_TD_7847528[0]);
    krnl_JOIN_INNER_TD_6581442.run(0, &(events_grp_JOIN_INNER_TD_6581442), &(events_JOIN_INNER_TD_6581442[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_835950_e, 0);

    struct timeval tv_r_Filter_6_747061_s, tv_r_Filter_6_747061_e;
    gettimeofday(&tv_r_Filter_6_747061_s, 0);
    SW_Filter_TD_6956007(tbl_SerializeFromObject_TD_7157816_input, tbl_Filter_TD_6956007_output);
    gettimeofday(&tv_r_Filter_6_747061_e, 0);

    struct timeval tv_r_JOIN_INNER_6_459462_s, tv_r_JOIN_INNER_6_459462_e;
    gettimeofday(&tv_r_JOIN_INNER_6_459462_s, 0);
    prev_events_grp_JOIN_INNER_TD_642734.push_back(events_h2d_wr_JOIN_INNER_TD_7235282[0]);
    trans_JOIN_INNER_TD_642734.add(&(tbl_Filter_TD_7220209_output));
    trans_JOIN_INNER_TD_642734.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_642734), &(events_h2d_wr_JOIN_INNER_TD_642734[0]));
    events_grp_JOIN_INNER_TD_642734.push_back(events_h2d_wr_JOIN_INNER_TD_642734[0]);
    events_grp_JOIN_INNER_TD_642734.push_back(events_JOIN_INNER_TD_7235282[0]);
    krnl_JOIN_INNER_TD_642734.run(0, &(events_grp_JOIN_INNER_TD_642734), &(events_JOIN_INNER_TD_642734[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_459462_e, 0);

    struct timeval tv_r_Filter_5_108248_s, tv_r_Filter_5_108248_e;
    gettimeofday(&tv_r_Filter_5_108248_s, 0);
    SW_Filter_TD_59492(tbl_SerializeFromObject_TD_619818_input, tbl_Filter_TD_59492_output);
    gettimeofday(&tv_r_Filter_5_108248_e, 0);

    struct timeval tv_r_JOIN_INNER_5_203795_s, tv_r_JOIN_INNER_5_203795_e;
    gettimeofday(&tv_r_JOIN_INNER_5_203795_s, 0);
    prev_events_grp_JOIN_INNER_TD_5123532.push_back(events_h2d_wr_JOIN_INNER_TD_6581442[0]);
    trans_JOIN_INNER_TD_5123532.add(&(tbl_Filter_TD_6246114_output));
    trans_JOIN_INNER_TD_5123532.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5123532), &(events_h2d_wr_JOIN_INNER_TD_5123532[0]));
    events_grp_JOIN_INNER_TD_5123532.push_back(events_h2d_wr_JOIN_INNER_TD_5123532[0]);
    events_grp_JOIN_INNER_TD_5123532.push_back(events_JOIN_INNER_TD_6581442[0]);
    krnl_JOIN_INNER_TD_5123532.run(0, &(events_grp_JOIN_INNER_TD_5123532), &(events_JOIN_INNER_TD_5123532[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_203795_e, 0);

    struct timeval tv_r_Filter_5_102587_s, tv_r_Filter_5_102587_e;
    gettimeofday(&tv_r_Filter_5_102587_s, 0);
    SW_Filter_TD_5208645(tbl_SerializeFromObject_TD_6321357_input, tbl_Filter_TD_5208645_output);
    gettimeofday(&tv_r_Filter_5_102587_e, 0);

    struct timeval tv_r_JOIN_INNER_5_528779_s, tv_r_JOIN_INNER_5_528779_e;
    gettimeofday(&tv_r_JOIN_INNER_5_528779_s, 0);
    prev_events_grp_JOIN_INNER_TD_5304549.push_back(events_h2d_wr_JOIN_INNER_TD_642734[0]);
    trans_JOIN_INNER_TD_5304549.add(&(tbl_Filter_TD_6956007_output));
    trans_JOIN_INNER_TD_5304549.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5304549), &(events_h2d_wr_JOIN_INNER_TD_5304549[0]));
    events_grp_JOIN_INNER_TD_5304549.push_back(events_h2d_wr_JOIN_INNER_TD_5304549[0]);
    events_grp_JOIN_INNER_TD_5304549.push_back(events_JOIN_INNER_TD_642734[0]);
    krnl_JOIN_INNER_TD_5304549.run(0, &(events_grp_JOIN_INNER_TD_5304549), &(events_JOIN_INNER_TD_5304549[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_528779_e, 0);

    struct timeval tv_r_Filter_4_427377_s, tv_r_Filter_4_427377_e;
    gettimeofday(&tv_r_Filter_4_427377_s, 0);
    SW_Filter_TD_464720(tbl_SerializeFromObject_TD_5999383_input, tbl_Filter_TD_464720_output);
    gettimeofday(&tv_r_Filter_4_427377_e, 0);

    struct timeval tv_r_JOIN_INNER_4_772379_s, tv_r_JOIN_INNER_4_772379_e;
    gettimeofday(&tv_r_JOIN_INNER_4_772379_s, 0);
    prev_events_grp_JOIN_INNER_TD_4642768.push_back(events_h2d_wr_JOIN_INNER_TD_5123532[0]);
    trans_JOIN_INNER_TD_4642768.add(&(tbl_Filter_TD_59492_output));
    trans_JOIN_INNER_TD_4642768.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4642768), &(events_h2d_wr_JOIN_INNER_TD_4642768[0]));
    events_grp_JOIN_INNER_TD_4642768.push_back(events_h2d_wr_JOIN_INNER_TD_4642768[0]);
    events_grp_JOIN_INNER_TD_4642768.push_back(events_JOIN_INNER_TD_5123532[0]);
    krnl_JOIN_INNER_TD_4642768.run(0, &(events_grp_JOIN_INNER_TD_4642768), &(events_JOIN_INNER_TD_4642768[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_772379_e, 0);

    struct timeval tv_r_Filter_4_886551_s, tv_r_Filter_4_886551_e;
    gettimeofday(&tv_r_Filter_4_886551_s, 0);
    SW_Filter_TD_4553009(tbl_SerializeFromObject_TD_5288304_input, tbl_Filter_TD_4553009_output);
    gettimeofday(&tv_r_Filter_4_886551_e, 0);

    struct timeval tv_r_JOIN_INNER_4_227601_s, tv_r_JOIN_INNER_4_227601_e;
    gettimeofday(&tv_r_JOIN_INNER_4_227601_s, 0);
    prev_events_grp_JOIN_INNER_TD_4578905.push_back(events_h2d_wr_JOIN_INNER_TD_5304549[0]);
    trans_JOIN_INNER_TD_4578905.add(&(tbl_Filter_TD_5208645_output));
    trans_JOIN_INNER_TD_4578905.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4578905), &(events_h2d_wr_JOIN_INNER_TD_4578905[0]));
    events_grp_JOIN_INNER_TD_4578905.push_back(events_h2d_wr_JOIN_INNER_TD_4578905[0]);
    events_grp_JOIN_INNER_TD_4578905.push_back(events_JOIN_INNER_TD_5304549[0]);
    krnl_JOIN_INNER_TD_4578905.run(0, &(events_grp_JOIN_INNER_TD_4578905), &(events_JOIN_INNER_TD_4578905[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_227601_e, 0);

    struct timeval tv_r_JOIN_INNER_3_31575_s, tv_r_JOIN_INNER_3_31575_e;
    gettimeofday(&tv_r_JOIN_INNER_3_31575_s, 0);
    prev_events_grp_JOIN_INNER_TD_3209219.push_back(events_h2d_wr_JOIN_INNER_TD_4642768[0]);
    trans_JOIN_INNER_TD_3209219.add(&(tbl_Filter_TD_464720_output));
    trans_JOIN_INNER_TD_3209219.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3209219), &(events_h2d_wr_JOIN_INNER_TD_3209219[0]));
    events_grp_JOIN_INNER_TD_3209219.push_back(events_h2d_wr_JOIN_INNER_TD_3209219[0]);
    events_grp_JOIN_INNER_TD_3209219.push_back(events_JOIN_INNER_TD_4642768[0]);
    krnl_JOIN_INNER_TD_3209219.run(0, &(events_grp_JOIN_INNER_TD_3209219), &(events_JOIN_INNER_TD_3209219[0]));
    
    trans_JOIN_INNER_TD_3209219_out.add(&(tbl_JOIN_INNER_TD_3209219_output));
    trans_JOIN_INNER_TD_3209219_out.dev2host(0, &(events_JOIN_INNER_TD_3209219), &(events_d2h_rd_JOIN_INNER_TD_3209219[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_31575_e, 0);

    struct timeval tv_r_JOIN_INNER_3_235242_s, tv_r_JOIN_INNER_3_235242_e;
    gettimeofday(&tv_r_JOIN_INNER_3_235242_s, 0);
    prev_events_grp_JOIN_INNER_TD_3339401.push_back(events_h2d_wr_JOIN_INNER_TD_4578905[0]);
    trans_JOIN_INNER_TD_3339401.add(&(tbl_Filter_TD_4553009_output));
    trans_JOIN_INNER_TD_3339401.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3339401), &(events_h2d_wr_JOIN_INNER_TD_3339401[0]));
    events_grp_JOIN_INNER_TD_3339401.push_back(events_h2d_wr_JOIN_INNER_TD_3339401[0]);
    events_grp_JOIN_INNER_TD_3339401.push_back(events_JOIN_INNER_TD_4578905[0]);
    krnl_JOIN_INNER_TD_3339401.run(0, &(events_grp_JOIN_INNER_TD_3339401), &(events_JOIN_INNER_TD_3339401[0]));
    
    trans_JOIN_INNER_TD_3339401_out.add(&(tbl_JOIN_INNER_TD_3339401_output));
    trans_JOIN_INNER_TD_3339401_out.dev2host(0, &(events_JOIN_INNER_TD_3339401), &(events_d2h_rd_JOIN_INNER_TD_3339401[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_235242_e, 0);

    struct timeval tv_r_Aggregate_2_20255_s, tv_r_Aggregate_2_20255_e;
    gettimeofday(&tv_r_Aggregate_2_20255_s, 0);
    SW_Aggregate_TD_2614382(tbl_JOIN_INNER_TD_3209219_output, tbl_Aggregate_TD_2614382_output);
    gettimeofday(&tv_r_Aggregate_2_20255_e, 0);

    struct timeval tv_r_Aggregate_2_127949_s, tv_r_Aggregate_2_127949_e;
    gettimeofday(&tv_r_Aggregate_2_127949_s, 0);
    SW_Aggregate_TD_282105(tbl_JOIN_INNER_TD_3339401_output, tbl_Aggregate_TD_282105_output);
    gettimeofday(&tv_r_Aggregate_2_127949_e, 0);

    struct timeval tv_r_JOIN_CROSS_1_862778_s, tv_r_JOIN_CROSS_1_862778_e;
    gettimeofday(&tv_r_JOIN_CROSS_1_862778_s, 0);
    SW_JOIN_CROSS_TD_1659217(tbl_Aggregate_TD_282105_output, tbl_Aggregate_TD_2614382_output, tbl_JOIN_CROSS_TD_1659217_output);
    gettimeofday(&tv_r_JOIN_CROSS_1_862778_e, 0);

    struct timeval tv_r_Project_0_68551_s, tv_r_Project_0_68551_e;
    gettimeofday(&tv_r_Project_0_68551_s, 0);
    SW_Project_TD_0211574(tbl_JOIN_CROSS_TD_1659217_output, tbl_Project_TD_0211574_output);
    gettimeofday(&tv_r_Project_0_68551_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_229598_s, &tv_r_Filter_9_229598_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10358855_input: " << tbl_SerializeFromObject_TD_10358855_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_235497_s, &tv_r_Filter_9_235497_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10229947_input: " << tbl_SerializeFromObject_TD_10229947_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_653943_s, &tv_r_Filter_8_653943_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9660566_input: " << tbl_SerializeFromObject_TD_9660566_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_697736_s, &tv_r_Filter_8_697736_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9999442_input: " << tbl_SerializeFromObject_TD_9999442_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_585774_s, &tv_r_Filter_8_585774_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9919042_input: " << tbl_SerializeFromObject_TD_9919042_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_441345_s, &tv_r_JOIN_INNER_8_441345_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_976386_output: " << tbl_Filter_TD_976386_output.getNumRow() << " " << "tbl_Filter_TD_9855778_output: " << tbl_Filter_TD_9855778_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_70833_s, &tv_r_Filter_7_70833_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8710814_input: " << tbl_SerializeFromObject_TD_8710814_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_307159_s, &tv_r_JOIN_INNER_7_307159_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_886047_output: " << tbl_Filter_TD_886047_output.getNumRow() << " " << "tbl_Filter_TD_8954598_output: " << tbl_Filter_TD_8954598_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_81638_s, &tv_r_Filter_7_81638_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8711274_input: " << tbl_SerializeFromObject_TD_8711274_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_144149_s, &tv_r_JOIN_INNER_7_144149_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8262552_output: " << tbl_JOIN_INNER_TD_8262552_output.getNumRow() << " " << "tbl_Filter_TD_8477570_output: " << tbl_Filter_TD_8477570_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_397144_s, &tv_r_Filter_6_397144_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_738147_input: " << tbl_SerializeFromObject_TD_738147_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_835950_s, &tv_r_JOIN_INNER_6_835950_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7847528_output: " << tbl_JOIN_INNER_TD_7847528_output.getNumRow() << " " << "tbl_Filter_TD_734435_output: " << tbl_Filter_TD_734435_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_747061_s, &tv_r_Filter_6_747061_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7157816_input: " << tbl_SerializeFromObject_TD_7157816_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_459462_s, &tv_r_JOIN_INNER_6_459462_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7235282_output: " << tbl_JOIN_INNER_TD_7235282_output.getNumRow() << " " << "tbl_Filter_TD_7220209_output: " << tbl_Filter_TD_7220209_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_108248_s, &tv_r_Filter_5_108248_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_619818_input: " << tbl_SerializeFromObject_TD_619818_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_203795_s, &tv_r_JOIN_INNER_5_203795_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6581442_output: " << tbl_JOIN_INNER_TD_6581442_output.getNumRow() << " " << "tbl_Filter_TD_6246114_output: " << tbl_Filter_TD_6246114_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_102587_s, &tv_r_Filter_5_102587_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6321357_input: " << tbl_SerializeFromObject_TD_6321357_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_528779_s, &tv_r_JOIN_INNER_5_528779_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_642734_output: " << tbl_JOIN_INNER_TD_642734_output.getNumRow() << " " << "tbl_Filter_TD_6956007_output: " << tbl_Filter_TD_6956007_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_427377_s, &tv_r_Filter_4_427377_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5999383_input: " << tbl_SerializeFromObject_TD_5999383_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_772379_s, &tv_r_JOIN_INNER_4_772379_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5123532_output: " << tbl_JOIN_INNER_TD_5123532_output.getNumRow() << " " << "tbl_Filter_TD_59492_output: " << tbl_Filter_TD_59492_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_886551_s, &tv_r_Filter_4_886551_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5288304_input: " << tbl_SerializeFromObject_TD_5288304_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_227601_s, &tv_r_JOIN_INNER_4_227601_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5304549_output: " << tbl_JOIN_INNER_TD_5304549_output.getNumRow() << " " << "tbl_Filter_TD_5208645_output: " << tbl_Filter_TD_5208645_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_31575_s, &tv_r_JOIN_INNER_3_31575_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4642768_output: " << tbl_JOIN_INNER_TD_4642768_output.getNumRow() << " " << "tbl_Filter_TD_464720_output: " << tbl_Filter_TD_464720_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_235242_s, &tv_r_JOIN_INNER_3_235242_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4578905_output: " << tbl_JOIN_INNER_TD_4578905_output.getNumRow() << " " << "tbl_Filter_TD_4553009_output: " << tbl_Filter_TD_4553009_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_20255_s, &tv_r_Aggregate_2_20255_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3209219_output: " << tbl_JOIN_INNER_TD_3209219_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_127949_s, &tv_r_Aggregate_2_127949_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3339401_output: " << tbl_JOIN_INNER_TD_3339401_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_1: " << tvdiff(&tv_r_JOIN_CROSS_1_862778_s, &tv_r_JOIN_CROSS_1_862778_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_282105_output: " << tbl_Aggregate_TD_282105_output.getNumRow() << " " << "tbl_Aggregate_TD_2614382_output: " << tbl_Aggregate_TD_2614382_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_0: " << tvdiff(&tv_r_Project_0_68551_s, &tv_r_Project_0_68551_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_1659217_output: " << tbl_JOIN_CROSS_TD_1659217_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.9063096 * 1000 << "ms" << std::endl; 
    return 0; 
}
