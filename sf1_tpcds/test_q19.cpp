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

#include "cfgFunc_q19.hpp" 
#include "q19.hpp" 

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
    std::cout << "NOTE:running query #19\n."; 
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
    Table tbl_GlobalLimit_TD_0997257_output("tbl_GlobalLimit_TD_0997257_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0997257_output.allocateHost();
    Table tbl_LocalLimit_TD_1707545_output("tbl_LocalLimit_TD_1707545_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1707545_output.allocateHost();
    Table tbl_Sort_TD_2353693_output("tbl_Sort_TD_2353693_output", 6100000, 5, "");
    tbl_Sort_TD_2353693_output.allocateHost();
    Table tbl_Aggregate_TD_3293923_output("tbl_Aggregate_TD_3293923_output", 6100000, 5, "");
    tbl_Aggregate_TD_3293923_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4717228_output("tbl_JOIN_INNER_TD_4717228_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4717228_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5837957_output("tbl_JOIN_INNER_TD_5837957_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5837957_output.allocateHost();
    Table tbl_Filter_TD_5556615_output("tbl_Filter_TD_5556615_output", 6100000, 2, "");
    tbl_Filter_TD_5556615_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6896050_output("tbl_JOIN_INNER_TD_6896050_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_6896050_output.allocateHost();
    Table tbl_Filter_TD_6893249_output("tbl_Filter_TD_6893249_output", 6100000, 2, "");
    tbl_Filter_TD_6893249_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6864033_input;
    tbl_SerializeFromObject_TD_6864033_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6864033_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_6864033_input.addCol("s_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6864033_input.allocateHost();
    tbl_SerializeFromObject_TD_6864033_input.loadHost();
    Table tbl_JOIN_INNER_TD_7903095_output("tbl_JOIN_INNER_TD_7903095_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7903095_output.allocateHost();
    Table tbl_Filter_TD_7697676_output("tbl_Filter_TD_7697676_output", 6100000, 2, "");
    tbl_Filter_TD_7697676_output.allocateHost();
    Table tbl_SerializeFromObject_TD_738166_input;
    tbl_SerializeFromObject_TD_738166_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_738166_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_738166_input.addCol("ca_zip", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_738166_input.allocateHost();
    tbl_SerializeFromObject_TD_738166_input.loadHost();
    Table tbl_JOIN_INNER_TD_8249972_output("tbl_JOIN_INNER_TD_8249972_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_8249972_output.allocateHost();
    Table tbl_Filter_TD_8695905_output("tbl_Filter_TD_8695905_output", 6100000, 5, "");
    tbl_Filter_TD_8695905_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8753877_input;
    tbl_SerializeFromObject_TD_8753877_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8753877_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8753877_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_8753877_input.allocateHost();
    tbl_SerializeFromObject_TD_8753877_input.loadHost();
    Table tbl_Filter_TD_9183525_output("tbl_Filter_TD_9183525_output", 6100000, 1, "");
    tbl_Filter_TD_9183525_output.allocateHost();
    Table tbl_Filter_TD_9283443_output("tbl_Filter_TD_9283443_output", 6100000, 5, "");
    tbl_Filter_TD_9283443_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9268829_input;
    tbl_SerializeFromObject_TD_9268829_input = Table("item", item_n, 6, in_dir, "orc");
    tbl_SerializeFromObject_TD_9268829_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_9268829_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_9268829_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9268829_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_9268829_input.addCol("i_manufact", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9268829_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_9268829_input.allocateHost();
    tbl_SerializeFromObject_TD_9268829_input.loadHost();
    Table tbl_SerializeFromObject_TD_10124157_input;
    tbl_SerializeFromObject_TD_10124157_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10124157_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_10124157_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_10124157_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_10124157_input.allocateHost();
    tbl_SerializeFromObject_TD_10124157_input.loadHost();
    Table tbl_SerializeFromObject_TD_10571123_input;
    tbl_SerializeFromObject_TD_10571123_input = Table("store_sales", store_sales_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_10571123_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10571123_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_10571123_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_10571123_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10571123_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10571123_input.allocateHost();
    tbl_SerializeFromObject_TD_10571123_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_8249972_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9183525_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9283443_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_8249972_cmds;
    cfg_JOIN_INNER_TD_8249972_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8249972_gqe_join (cfg_JOIN_INNER_TD_8249972_cmds.cmd);
    cfg_JOIN_INNER_TD_8249972_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_8249972;
    krnl_JOIN_INNER_TD_8249972 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8249972.setup(tbl_Filter_TD_9183525_output, tbl_Filter_TD_9283443_output, tbl_JOIN_INNER_TD_8249972_output, cfg_JOIN_INNER_TD_8249972_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_8249972;
    trans_JOIN_INNER_TD_8249972.setq(q_h);
    trans_JOIN_INNER_TD_8249972.add(&(cfg_JOIN_INNER_TD_8249972_cmds));
    transEngine trans_JOIN_INNER_TD_8249972_out;
    trans_JOIN_INNER_TD_8249972_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8249972;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8249972;
    std::vector<cl::Event> events_JOIN_INNER_TD_8249972;
    events_h2d_wr_JOIN_INNER_TD_8249972.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8249972.resize(1);
    events_JOIN_INNER_TD_8249972.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8249972;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8249972;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_861610_s, tv_r_Filter_9_861610_e;
    gettimeofday(&tv_r_Filter_9_861610_s, 0);
    SW_Filter_TD_9283443(tbl_SerializeFromObject_TD_10571123_input, tbl_Filter_TD_9283443_output);
    gettimeofday(&tv_r_Filter_9_861610_e, 0);

    struct timeval tv_r_Filter_9_799624_s, tv_r_Filter_9_799624_e;
    gettimeofday(&tv_r_Filter_9_799624_s, 0);
    SW_Filter_TD_9183525(tbl_SerializeFromObject_TD_10124157_input, tbl_Filter_TD_9183525_output);
    gettimeofday(&tv_r_Filter_9_799624_e, 0);

    struct timeval tv_r_Filter_8_745056_s, tv_r_Filter_8_745056_e;
    gettimeofday(&tv_r_Filter_8_745056_s, 0);
    SW_Filter_TD_8695905(tbl_SerializeFromObject_TD_9268829_input, tbl_Filter_TD_8695905_output);
    gettimeofday(&tv_r_Filter_8_745056_e, 0);

    struct timeval tv_r_JOIN_INNER_8_689493_s, tv_r_JOIN_INNER_8_689493_e;
    gettimeofday(&tv_r_JOIN_INNER_8_689493_s, 0);
    trans_JOIN_INNER_TD_8249972.add(&(tbl_Filter_TD_9183525_output));
    trans_JOIN_INNER_TD_8249972.add(&(tbl_Filter_TD_9283443_output));
    trans_JOIN_INNER_TD_8249972.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8249972), &(events_h2d_wr_JOIN_INNER_TD_8249972[0]));
    events_grp_JOIN_INNER_TD_8249972.push_back(events_h2d_wr_JOIN_INNER_TD_8249972[0]);
    krnl_JOIN_INNER_TD_8249972.run(0, &(events_grp_JOIN_INNER_TD_8249972), &(events_JOIN_INNER_TD_8249972[0]));
    
    trans_JOIN_INNER_TD_8249972_out.add(&(tbl_JOIN_INNER_TD_8249972_output));
    trans_JOIN_INNER_TD_8249972_out.dev2host(0, &(events_JOIN_INNER_TD_8249972), &(events_d2h_rd_JOIN_INNER_TD_8249972[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_689493_e, 0);

    struct timeval tv_r_Filter_7_561419_s, tv_r_Filter_7_561419_e;
    gettimeofday(&tv_r_Filter_7_561419_s, 0);
    SW_Filter_TD_7697676(tbl_SerializeFromObject_TD_8753877_input, tbl_Filter_TD_7697676_output);
    gettimeofday(&tv_r_Filter_7_561419_e, 0);

    struct timeval tv_r_JOIN_INNER_7_520651_s, tv_r_JOIN_INNER_7_520651_e;
    gettimeofday(&tv_r_JOIN_INNER_7_520651_s, 0);
    SW_JOIN_INNER_TD_7903095(tbl_JOIN_INNER_TD_8249972_output, tbl_Filter_TD_8695905_output, tbl_JOIN_INNER_TD_7903095_output);
    gettimeofday(&tv_r_JOIN_INNER_7_520651_e, 0);

    struct timeval tv_r_Filter_6_495881_s, tv_r_Filter_6_495881_e;
    gettimeofday(&tv_r_Filter_6_495881_s, 0);
    SW_Filter_TD_6893249(tbl_SerializeFromObject_TD_738166_input, tbl_Filter_TD_6893249_output);
    gettimeofday(&tv_r_Filter_6_495881_e, 0);

    struct timeval tv_r_JOIN_INNER_6_261885_s, tv_r_JOIN_INNER_6_261885_e;
    gettimeofday(&tv_r_JOIN_INNER_6_261885_s, 0);
    SW_JOIN_INNER_TD_6896050(tbl_JOIN_INNER_TD_7903095_output, tbl_Filter_TD_7697676_output, tbl_JOIN_INNER_TD_6896050_output);
    gettimeofday(&tv_r_JOIN_INNER_6_261885_e, 0);

    struct timeval tv_r_Filter_5_542406_s, tv_r_Filter_5_542406_e;
    gettimeofday(&tv_r_Filter_5_542406_s, 0);
    SW_Filter_TD_5556615(tbl_SerializeFromObject_TD_6864033_input, tbl_Filter_TD_5556615_output);
    gettimeofday(&tv_r_Filter_5_542406_e, 0);

    struct timeval tv_r_JOIN_INNER_5_108052_s, tv_r_JOIN_INNER_5_108052_e;
    gettimeofday(&tv_r_JOIN_INNER_5_108052_s, 0);
    SW_JOIN_INNER_TD_5837957(tbl_JOIN_INNER_TD_6896050_output, tbl_Filter_TD_6893249_output, tbl_JOIN_INNER_TD_5837957_output);
    gettimeofday(&tv_r_JOIN_INNER_5_108052_e, 0);

    struct timeval tv_r_JOIN_INNER_4_916943_s, tv_r_JOIN_INNER_4_916943_e;
    gettimeofday(&tv_r_JOIN_INNER_4_916943_s, 0);
    SW_JOIN_INNER_TD_4717228(tbl_JOIN_INNER_TD_5837957_output, tbl_Filter_TD_5556615_output, tbl_JOIN_INNER_TD_4717228_output);
    gettimeofday(&tv_r_JOIN_INNER_4_916943_e, 0);

    struct timeval tv_r_Aggregate_3_430381_s, tv_r_Aggregate_3_430381_e;
    gettimeofday(&tv_r_Aggregate_3_430381_s, 0);
    SW_Aggregate_TD_3293923(tbl_JOIN_INNER_TD_4717228_output, tbl_Aggregate_TD_3293923_output);
    gettimeofday(&tv_r_Aggregate_3_430381_e, 0);

    struct timeval tv_r_Sort_2_13162_s, tv_r_Sort_2_13162_e;
    gettimeofday(&tv_r_Sort_2_13162_s, 0);
    SW_Sort_TD_2353693(tbl_Aggregate_TD_3293923_output, tbl_Sort_TD_2353693_output);
    gettimeofday(&tv_r_Sort_2_13162_e, 0);

    struct timeval tv_r_LocalLimit_1_779117_s, tv_r_LocalLimit_1_779117_e;
    gettimeofday(&tv_r_LocalLimit_1_779117_s, 0);
    SW_LocalLimit_TD_1707545(tbl_Sort_TD_2353693_output, tbl_LocalLimit_TD_1707545_output);
    gettimeofday(&tv_r_LocalLimit_1_779117_e, 0);

    struct timeval tv_r_GlobalLimit_0_918342_s, tv_r_GlobalLimit_0_918342_e;
    gettimeofday(&tv_r_GlobalLimit_0_918342_s, 0);
    SW_GlobalLimit_TD_0997257(tbl_LocalLimit_TD_1707545_output, tbl_GlobalLimit_TD_0997257_output);
    gettimeofday(&tv_r_GlobalLimit_0_918342_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_861610_s, &tv_r_Filter_9_861610_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10571123_input: " << tbl_SerializeFromObject_TD_10571123_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_799624_s, &tv_r_Filter_9_799624_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10124157_input: " << tbl_SerializeFromObject_TD_10124157_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_745056_s, &tv_r_Filter_8_745056_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9268829_input: " << tbl_SerializeFromObject_TD_9268829_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_689493_s, &tv_r_JOIN_INNER_8_689493_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9183525_output: " << tbl_Filter_TD_9183525_output.getNumRow() << " " << "tbl_Filter_TD_9283443_output: " << tbl_Filter_TD_9283443_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_561419_s, &tv_r_Filter_7_561419_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8753877_input: " << tbl_SerializeFromObject_TD_8753877_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_520651_s, &tv_r_JOIN_INNER_7_520651_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8249972_output: " << tbl_JOIN_INNER_TD_8249972_output.getNumRow() << " " << "tbl_Filter_TD_8695905_output: " << tbl_Filter_TD_8695905_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_495881_s, &tv_r_Filter_6_495881_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_738166_input: " << tbl_SerializeFromObject_TD_738166_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_261885_s, &tv_r_JOIN_INNER_6_261885_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7903095_output: " << tbl_JOIN_INNER_TD_7903095_output.getNumRow() << " " << "tbl_Filter_TD_7697676_output: " << tbl_Filter_TD_7697676_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_542406_s, &tv_r_Filter_5_542406_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6864033_input: " << tbl_SerializeFromObject_TD_6864033_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_108052_s, &tv_r_JOIN_INNER_5_108052_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6896050_output: " << tbl_JOIN_INNER_TD_6896050_output.getNumRow() << " " << "tbl_Filter_TD_6893249_output: " << tbl_Filter_TD_6893249_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_916943_s, &tv_r_JOIN_INNER_4_916943_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5837957_output: " << tbl_JOIN_INNER_TD_5837957_output.getNumRow() << " " << "tbl_Filter_TD_5556615_output: " << tbl_Filter_TD_5556615_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_430381_s, &tv_r_Aggregate_3_430381_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4717228_output: " << tbl_JOIN_INNER_TD_4717228_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_13162_s, &tv_r_Sort_2_13162_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3293923_output: " << tbl_Aggregate_TD_3293923_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_779117_s, &tv_r_LocalLimit_1_779117_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2353693_output: " << tbl_Sort_TD_2353693_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_918342_s, &tv_r_GlobalLimit_0_918342_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1707545_output: " << tbl_LocalLimit_TD_1707545_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.3404051 * 1000 << "ms" << std::endl; 
    return 0; 
}
