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

#include "cfgFunc_q42.hpp" 
#include "q42.hpp" 

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
    std::cout << "NOTE:running query #42\n."; 
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
    Table tbl_GlobalLimit_TD_0454005_output("tbl_GlobalLimit_TD_0454005_output", 6100000, 4, "");
    tbl_GlobalLimit_TD_0454005_output.allocateHost();
    Table tbl_LocalLimit_TD_1773891_output("tbl_LocalLimit_TD_1773891_output", 6100000, 4, "");
    tbl_LocalLimit_TD_1773891_output.allocateHost();
    Table tbl_Sort_TD_2595355_output("tbl_Sort_TD_2595355_output", 6100000, 4, "");
    tbl_Sort_TD_2595355_output.allocateHost();
    Table tbl_Aggregate_TD_3891450_output("tbl_Aggregate_TD_3891450_output", 6100000, 4, "");
    tbl_Aggregate_TD_3891450_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4543981_output("tbl_JOIN_INNER_TD_4543981_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_4543981_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5581443_output("tbl_JOIN_INNER_TD_5581443_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5581443_output.allocateHost();
    Table tbl_Filter_TD_5690610_output("tbl_Filter_TD_5690610_output", 6100000, 3, "");
    tbl_Filter_TD_5690610_output.allocateHost();
    Table tbl_Filter_TD_6944806_output("tbl_Filter_TD_6944806_output", 6100000, 2, "");
    tbl_Filter_TD_6944806_output.allocateHost();
    Table tbl_Filter_TD_6699739_output("tbl_Filter_TD_6699739_output", 6100000, 3, "");
    tbl_Filter_TD_6699739_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6419602_input;
    tbl_SerializeFromObject_TD_6419602_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_6419602_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_6419602_input.addCol("i_category_id", 4);
    tbl_SerializeFromObject_TD_6419602_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6419602_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_6419602_input.allocateHost();
    tbl_SerializeFromObject_TD_6419602_input.loadHost();
    Table tbl_SerializeFromObject_TD_7821225_input;
    tbl_SerializeFromObject_TD_7821225_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7821225_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7821225_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_7821225_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_7821225_input.allocateHost();
    tbl_SerializeFromObject_TD_7821225_input.loadHost();
    Table tbl_SerializeFromObject_TD_7731462_input;
    tbl_SerializeFromObject_TD_7731462_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7731462_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7731462_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_7731462_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_7731462_input.allocateHost();
    tbl_SerializeFromObject_TD_7731462_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5581443_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6944806_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6699739_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5581443_cmds;
    cfg_JOIN_INNER_TD_5581443_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5581443_gqe_join (cfg_JOIN_INNER_TD_5581443_cmds.cmd);
    cfg_JOIN_INNER_TD_5581443_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5581443;
    krnl_JOIN_INNER_TD_5581443 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5581443.setup(tbl_Filter_TD_6944806_output, tbl_Filter_TD_6699739_output, tbl_JOIN_INNER_TD_5581443_output, cfg_JOIN_INNER_TD_5581443_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5581443;
    trans_JOIN_INNER_TD_5581443.setq(q_h);
    trans_JOIN_INNER_TD_5581443.add(&(cfg_JOIN_INNER_TD_5581443_cmds));
    transEngine trans_JOIN_INNER_TD_5581443_out;
    trans_JOIN_INNER_TD_5581443_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5581443;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5581443;
    std::vector<cl::Event> events_JOIN_INNER_TD_5581443;
    events_h2d_wr_JOIN_INNER_TD_5581443.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5581443.resize(1);
    events_JOIN_INNER_TD_5581443.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5581443;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5581443;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_321316_s, tv_r_Filter_6_321316_e;
    gettimeofday(&tv_r_Filter_6_321316_s, 0);
    SW_Filter_TD_6699739(tbl_SerializeFromObject_TD_7731462_input, tbl_Filter_TD_6699739_output);
    gettimeofday(&tv_r_Filter_6_321316_e, 0);

    struct timeval tv_r_Filter_6_953798_s, tv_r_Filter_6_953798_e;
    gettimeofday(&tv_r_Filter_6_953798_s, 0);
    SW_Filter_TD_6944806(tbl_SerializeFromObject_TD_7821225_input, tbl_Filter_TD_6944806_output);
    gettimeofday(&tv_r_Filter_6_953798_e, 0);

    struct timeval tv_r_Filter_5_148782_s, tv_r_Filter_5_148782_e;
    gettimeofday(&tv_r_Filter_5_148782_s, 0);
    SW_Filter_TD_5690610(tbl_SerializeFromObject_TD_6419602_input, tbl_Filter_TD_5690610_output);
    gettimeofday(&tv_r_Filter_5_148782_e, 0);

    struct timeval tv_r_JOIN_INNER_5_939640_s, tv_r_JOIN_INNER_5_939640_e;
    gettimeofday(&tv_r_JOIN_INNER_5_939640_s, 0);
    trans_JOIN_INNER_TD_5581443.add(&(tbl_Filter_TD_6944806_output));
    trans_JOIN_INNER_TD_5581443.add(&(tbl_Filter_TD_6699739_output));
    trans_JOIN_INNER_TD_5581443.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5581443), &(events_h2d_wr_JOIN_INNER_TD_5581443[0]));
    events_grp_JOIN_INNER_TD_5581443.push_back(events_h2d_wr_JOIN_INNER_TD_5581443[0]);
    krnl_JOIN_INNER_TD_5581443.run(0, &(events_grp_JOIN_INNER_TD_5581443), &(events_JOIN_INNER_TD_5581443[0]));
    
    trans_JOIN_INNER_TD_5581443_out.add(&(tbl_JOIN_INNER_TD_5581443_output));
    trans_JOIN_INNER_TD_5581443_out.dev2host(0, &(events_JOIN_INNER_TD_5581443), &(events_d2h_rd_JOIN_INNER_TD_5581443[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_939640_e, 0);

    struct timeval tv_r_JOIN_INNER_4_924218_s, tv_r_JOIN_INNER_4_924218_e;
    gettimeofday(&tv_r_JOIN_INNER_4_924218_s, 0);
    SW_JOIN_INNER_TD_4543981(tbl_JOIN_INNER_TD_5581443_output, tbl_Filter_TD_5690610_output, tbl_JOIN_INNER_TD_4543981_output);
    gettimeofday(&tv_r_JOIN_INNER_4_924218_e, 0);

    struct timeval tv_r_Aggregate_3_147041_s, tv_r_Aggregate_3_147041_e;
    gettimeofday(&tv_r_Aggregate_3_147041_s, 0);
    SW_Aggregate_TD_3891450(tbl_JOIN_INNER_TD_4543981_output, tbl_Aggregate_TD_3891450_output);
    gettimeofday(&tv_r_Aggregate_3_147041_e, 0);

    struct timeval tv_r_Sort_2_680614_s, tv_r_Sort_2_680614_e;
    gettimeofday(&tv_r_Sort_2_680614_s, 0);
    SW_Sort_TD_2595355(tbl_Aggregate_TD_3891450_output, tbl_Sort_TD_2595355_output);
    gettimeofday(&tv_r_Sort_2_680614_e, 0);

    struct timeval tv_r_LocalLimit_1_440922_s, tv_r_LocalLimit_1_440922_e;
    gettimeofday(&tv_r_LocalLimit_1_440922_s, 0);
    SW_LocalLimit_TD_1773891(tbl_Sort_TD_2595355_output, tbl_LocalLimit_TD_1773891_output);
    gettimeofday(&tv_r_LocalLimit_1_440922_e, 0);

    struct timeval tv_r_GlobalLimit_0_927704_s, tv_r_GlobalLimit_0_927704_e;
    gettimeofday(&tv_r_GlobalLimit_0_927704_s, 0);
    SW_GlobalLimit_TD_0454005(tbl_LocalLimit_TD_1773891_output, tbl_GlobalLimit_TD_0454005_output);
    gettimeofday(&tv_r_GlobalLimit_0_927704_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_321316_s, &tv_r_Filter_6_321316_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7731462_input: " << tbl_SerializeFromObject_TD_7731462_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_953798_s, &tv_r_Filter_6_953798_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7821225_input: " << tbl_SerializeFromObject_TD_7821225_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_148782_s, &tv_r_Filter_5_148782_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6419602_input: " << tbl_SerializeFromObject_TD_6419602_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_939640_s, &tv_r_JOIN_INNER_5_939640_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6944806_output: " << tbl_Filter_TD_6944806_output.getNumRow() << " " << "tbl_Filter_TD_6699739_output: " << tbl_Filter_TD_6699739_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_924218_s, &tv_r_JOIN_INNER_4_924218_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5581443_output: " << tbl_JOIN_INNER_TD_5581443_output.getNumRow() << " " << "tbl_Filter_TD_5690610_output: " << tbl_Filter_TD_5690610_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_147041_s, &tv_r_Aggregate_3_147041_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4543981_output: " << tbl_JOIN_INNER_TD_4543981_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_680614_s, &tv_r_Sort_2_680614_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3891450_output: " << tbl_Aggregate_TD_3891450_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_440922_s, &tv_r_LocalLimit_1_440922_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2595355_output: " << tbl_Sort_TD_2595355_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_927704_s, &tv_r_GlobalLimit_0_927704_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1773891_output: " << tbl_LocalLimit_TD_1773891_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.99259424 * 1000 << "ms" << std::endl; 
    return 0; 
}
