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

#include "cfgFunc_q3.hpp" 
#include "q3.hpp" 

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
    std::cout << "NOTE:running query #3\n."; 
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
    Table tbl_Sort_TD_0825920_output("tbl_Sort_TD_0825920_output", 6100000, 4, "");
    tbl_Sort_TD_0825920_output.allocateHost();
    Table tbl_Aggregate_TD_165997_output("tbl_Aggregate_TD_165997_output", 6100000, 4, "");
    tbl_Aggregate_TD_165997_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2990303_output("tbl_JOIN_INNER_TD_2990303_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_2990303_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3163955_output("tbl_JOIN_INNER_TD_3163955_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_3163955_output.allocateHost();
    Table tbl_Filter_TD_3556240_output("tbl_Filter_TD_3556240_output", 6100000, 3, "");
    tbl_Filter_TD_3556240_output.allocateHost();
    Table tbl_Filter_TD_4967902_output("tbl_Filter_TD_4967902_output", 6100000, 2, "");
    tbl_Filter_TD_4967902_output.allocateHost();
    Table tbl_Filter_TD_4721505_output("tbl_Filter_TD_4721505_output", 6100000, 3, "");
    tbl_Filter_TD_4721505_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4455598_input;
    tbl_SerializeFromObject_TD_4455598_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_4455598_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_4455598_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_4455598_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4455598_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_4455598_input.allocateHost();
    tbl_SerializeFromObject_TD_4455598_input.loadHost();
    Table tbl_SerializeFromObject_TD_5372509_input;
    tbl_SerializeFromObject_TD_5372509_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5372509_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_5372509_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_5372509_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_5372509_input.allocateHost();
    tbl_SerializeFromObject_TD_5372509_input.loadHost();
    Table tbl_SerializeFromObject_TD_5721825_input;
    tbl_SerializeFromObject_TD_5721825_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5721825_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5721825_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_5721825_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_5721825_input.allocateHost();
    tbl_SerializeFromObject_TD_5721825_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_3163955_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4967902_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4721505_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_3163955_cmds;
    cfg_JOIN_INNER_TD_3163955_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3163955_gqe_join (cfg_JOIN_INNER_TD_3163955_cmds.cmd);
    cfg_JOIN_INNER_TD_3163955_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_3163955;
    krnl_JOIN_INNER_TD_3163955 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3163955.setup(tbl_Filter_TD_4967902_output, tbl_Filter_TD_4721505_output, tbl_JOIN_INNER_TD_3163955_output, cfg_JOIN_INNER_TD_3163955_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_3163955;
    trans_JOIN_INNER_TD_3163955.setq(q_h);
    trans_JOIN_INNER_TD_3163955.add(&(cfg_JOIN_INNER_TD_3163955_cmds));
    transEngine trans_JOIN_INNER_TD_3163955_out;
    trans_JOIN_INNER_TD_3163955_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3163955;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3163955;
    std::vector<cl::Event> events_JOIN_INNER_TD_3163955;
    events_h2d_wr_JOIN_INNER_TD_3163955.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3163955.resize(1);
    events_JOIN_INNER_TD_3163955.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3163955;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3163955;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_92024_s, tv_r_Filter_4_92024_e;
    gettimeofday(&tv_r_Filter_4_92024_s, 0);
    SW_Filter_TD_4721505(tbl_SerializeFromObject_TD_5721825_input, tbl_Filter_TD_4721505_output);
    gettimeofday(&tv_r_Filter_4_92024_e, 0);

    struct timeval tv_r_Filter_4_418194_s, tv_r_Filter_4_418194_e;
    gettimeofday(&tv_r_Filter_4_418194_s, 0);
    SW_Filter_TD_4967902(tbl_SerializeFromObject_TD_5372509_input, tbl_Filter_TD_4967902_output);
    gettimeofday(&tv_r_Filter_4_418194_e, 0);

    struct timeval tv_r_Filter_3_113887_s, tv_r_Filter_3_113887_e;
    gettimeofday(&tv_r_Filter_3_113887_s, 0);
    SW_Filter_TD_3556240(tbl_SerializeFromObject_TD_4455598_input, tbl_Filter_TD_3556240_output);
    gettimeofday(&tv_r_Filter_3_113887_e, 0);

    struct timeval tv_r_JOIN_INNER_3_373713_s, tv_r_JOIN_INNER_3_373713_e;
    gettimeofday(&tv_r_JOIN_INNER_3_373713_s, 0);
    trans_JOIN_INNER_TD_3163955.add(&(tbl_Filter_TD_4967902_output));
    trans_JOIN_INNER_TD_3163955.add(&(tbl_Filter_TD_4721505_output));
    trans_JOIN_INNER_TD_3163955.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3163955), &(events_h2d_wr_JOIN_INNER_TD_3163955[0]));
    events_grp_JOIN_INNER_TD_3163955.push_back(events_h2d_wr_JOIN_INNER_TD_3163955[0]);
    krnl_JOIN_INNER_TD_3163955.run(0, &(events_grp_JOIN_INNER_TD_3163955), &(events_JOIN_INNER_TD_3163955[0]));
    
    trans_JOIN_INNER_TD_3163955_out.add(&(tbl_JOIN_INNER_TD_3163955_output));
    trans_JOIN_INNER_TD_3163955_out.dev2host(0, &(events_JOIN_INNER_TD_3163955), &(events_d2h_rd_JOIN_INNER_TD_3163955[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_373713_e, 0);

    struct timeval tv_r_JOIN_INNER_2_511791_s, tv_r_JOIN_INNER_2_511791_e;
    gettimeofday(&tv_r_JOIN_INNER_2_511791_s, 0);
    SW_JOIN_INNER_TD_2990303(tbl_JOIN_INNER_TD_3163955_output, tbl_Filter_TD_3556240_output, tbl_JOIN_INNER_TD_2990303_output);
    gettimeofday(&tv_r_JOIN_INNER_2_511791_e, 0);

    struct timeval tv_r_Aggregate_1_566440_s, tv_r_Aggregate_1_566440_e;
    gettimeofday(&tv_r_Aggregate_1_566440_s, 0);
    SW_Aggregate_TD_165997(tbl_JOIN_INNER_TD_2990303_output, tbl_Aggregate_TD_165997_output);
    gettimeofday(&tv_r_Aggregate_1_566440_e, 0);

    struct timeval tv_r_Sort_0_385324_s, tv_r_Sort_0_385324_e;
    gettimeofday(&tv_r_Sort_0_385324_s, 0);
    SW_Sort_TD_0825920(tbl_Aggregate_TD_165997_output, tbl_Sort_TD_0825920_output);
    gettimeofday(&tv_r_Sort_0_385324_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_92024_s, &tv_r_Filter_4_92024_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5721825_input: " << tbl_SerializeFromObject_TD_5721825_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_418194_s, &tv_r_Filter_4_418194_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5372509_input: " << tbl_SerializeFromObject_TD_5372509_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_113887_s, &tv_r_Filter_3_113887_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4455598_input: " << tbl_SerializeFromObject_TD_4455598_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_373713_s, &tv_r_JOIN_INNER_3_373713_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4967902_output: " << tbl_Filter_TD_4967902_output.getNumRow() << " " << "tbl_Filter_TD_4721505_output: " << tbl_Filter_TD_4721505_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_511791_s, &tv_r_JOIN_INNER_2_511791_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3163955_output: " << tbl_JOIN_INNER_TD_3163955_output.getNumRow() << " " << "tbl_Filter_TD_3556240_output: " << tbl_Filter_TD_3556240_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_566440_s, &tv_r_Aggregate_1_566440_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2990303_output: " << tbl_JOIN_INNER_TD_2990303_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_385324_s, &tv_r_Sort_0_385324_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_165997_output: " << tbl_Aggregate_TD_165997_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.64435166 * 1000 << "ms" << std::endl; 
    return 0; 
}
