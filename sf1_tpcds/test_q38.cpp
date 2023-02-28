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

#include "cfgFunc_q38.hpp" 
#include "q38.hpp" 

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
    std::cout << "NOTE:running query #38\n."; 
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
    Table tbl_Aggregate_TD_0933263_output("tbl_Aggregate_TD_0933263_output", 6100000, 1, "");
    tbl_Aggregate_TD_0933263_output.allocateHost();
    Table tbl_Aggregate_TD_1147604_output("tbl_Aggregate_TD_1147604_output", 6100000, 3, "");
    tbl_Aggregate_TD_1147604_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_2756360_output("tbl_JOIN_LEFTSEMI_TD_2756360_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_2756360_output.allocateHost();
    Table tbl_Aggregate_TD_364082_output("tbl_Aggregate_TD_364082_output", 6100000, 3, "");
    tbl_Aggregate_TD_364082_output.allocateHost();
    Table tbl_Aggregate_TD_3372762_output("tbl_Aggregate_TD_3372762_output", 6100000, 3, "");
    tbl_Aggregate_TD_3372762_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_4707233_output("tbl_JOIN_LEFTSEMI_TD_4707233_output", 6100000, 3, "");
    tbl_JOIN_LEFTSEMI_TD_4707233_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4940860_output("tbl_JOIN_INNER_TD_4940860_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4940860_output.allocateHost();
    Table tbl_Aggregate_TD_5858808_output("tbl_Aggregate_TD_5858808_output", 6100000, 3, "");
    tbl_Aggregate_TD_5858808_output.allocateHost();
    Table tbl_Aggregate_TD_5849639_output("tbl_Aggregate_TD_5849639_output", 6100000, 3, "");
    tbl_Aggregate_TD_5849639_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5299444_output("tbl_JOIN_INNER_TD_5299444_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5299444_output.allocateHost();
    Table tbl_Filter_TD_5713377_output("tbl_Filter_TD_5713377_output", 6100000, 3, "");
    tbl_Filter_TD_5713377_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6237486_output("tbl_JOIN_INNER_TD_6237486_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6237486_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6947388_output("tbl_JOIN_INNER_TD_6947388_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6947388_output.allocateHost();
    Table tbl_Filter_TD_6111688_output("tbl_Filter_TD_6111688_output", 6100000, 2, "");
    tbl_Filter_TD_6111688_output.allocateHost();
    Table tbl_Filter_TD_6502055_output("tbl_Filter_TD_6502055_output", 6100000, 2, "");
    tbl_Filter_TD_6502055_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6587582_input;
    tbl_SerializeFromObject_TD_6587582_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6587582_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_6587582_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6587582_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6587582_input.allocateHost();
    tbl_SerializeFromObject_TD_6587582_input.loadHost();
    Table tbl_JOIN_INNER_TD_7476448_output("tbl_JOIN_INNER_TD_7476448_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7476448_output.allocateHost();
    Table tbl_Filter_TD_7104860_output("tbl_Filter_TD_7104860_output", 6100000, 3, "");
    tbl_Filter_TD_7104860_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7779108_output("tbl_JOIN_INNER_TD_7779108_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7779108_output.allocateHost();
    Table tbl_Filter_TD_7673479_output("tbl_Filter_TD_7673479_output", 6100000, 3, "");
    tbl_Filter_TD_7673479_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7651396_input;
    tbl_SerializeFromObject_TD_7651396_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7651396_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7651396_input.addCol("ws_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_7651396_input.allocateHost();
    tbl_SerializeFromObject_TD_7651396_input.loadHost();
    Table tbl_SerializeFromObject_TD_7413064_input;
    tbl_SerializeFromObject_TD_7413064_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7413064_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7413064_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7413064_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_7413064_input.allocateHost();
    tbl_SerializeFromObject_TD_7413064_input.loadHost();
    Table tbl_Filter_TD_8255171_output("tbl_Filter_TD_8255171_output", 6100000, 2, "");
    tbl_Filter_TD_8255171_output.allocateHost();
    Table tbl_Filter_TD_8995627_output("tbl_Filter_TD_8995627_output", 6100000, 2, "");
    tbl_Filter_TD_8995627_output.allocateHost();
    Table tbl_SerializeFromObject_TD_857492_input;
    tbl_SerializeFromObject_TD_857492_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_857492_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_857492_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_857492_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_857492_input.allocateHost();
    tbl_SerializeFromObject_TD_857492_input.loadHost();
    Table tbl_Filter_TD_879780_output("tbl_Filter_TD_879780_output", 6100000, 2, "");
    tbl_Filter_TD_879780_output.allocateHost();
    Table tbl_Filter_TD_8969833_output("tbl_Filter_TD_8969833_output", 6100000, 2, "");
    tbl_Filter_TD_8969833_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8513625_input;
    tbl_SerializeFromObject_TD_8513625_input = Table("customer", customer_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8513625_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8513625_input.addCol("c_first_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8513625_input.addCol("c_last_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8513625_input.allocateHost();
    tbl_SerializeFromObject_TD_8513625_input.loadHost();
    Table tbl_SerializeFromObject_TD_9154852_input;
    tbl_SerializeFromObject_TD_9154852_input = Table("store_sales", store_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9154852_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9154852_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_9154852_input.allocateHost();
    tbl_SerializeFromObject_TD_9154852_input.loadHost();
    Table tbl_SerializeFromObject_TD_9964270_input;
    tbl_SerializeFromObject_TD_9964270_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9964270_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9964270_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9964270_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9964270_input.allocateHost();
    tbl_SerializeFromObject_TD_9964270_input.loadHost();
    Table tbl_SerializeFromObject_TD_9850710_input;
    tbl_SerializeFromObject_TD_9850710_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9850710_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9850710_input.addCol("cs_bill_customer_sk", 4);
    tbl_SerializeFromObject_TD_9850710_input.allocateHost();
    tbl_SerializeFromObject_TD_9850710_input.loadHost();
    Table tbl_SerializeFromObject_TD_9638228_input;
    tbl_SerializeFromObject_TD_9638228_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9638228_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_9638228_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_9638228_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_9638228_input.allocateHost();
    tbl_SerializeFromObject_TD_9638228_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_5299444_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6111688_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6502055_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7476448_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7779108_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8255171_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8995627_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_879780_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8969833_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_5299444_cmds;
    cfg_JOIN_INNER_TD_5299444_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5299444_gqe_join (cfg_JOIN_INNER_TD_5299444_cmds.cmd);
    cfg_JOIN_INNER_TD_5299444_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7476448_cmds;
    cfg_JOIN_INNER_TD_7476448_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7476448_gqe_join (cfg_JOIN_INNER_TD_7476448_cmds.cmd);
    cfg_JOIN_INNER_TD_7476448_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7779108_cmds;
    cfg_JOIN_INNER_TD_7779108_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7779108_gqe_join (cfg_JOIN_INNER_TD_7779108_cmds.cmd);
    cfg_JOIN_INNER_TD_7779108_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_5299444;
    krnl_JOIN_INNER_TD_5299444 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5299444.setup(tbl_Filter_TD_6111688_output, tbl_Filter_TD_6502055_output, tbl_JOIN_INNER_TD_5299444_output, cfg_JOIN_INNER_TD_5299444_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7476448;
    krnl_JOIN_INNER_TD_7476448 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7476448.setup(tbl_Filter_TD_8255171_output, tbl_Filter_TD_8995627_output, tbl_JOIN_INNER_TD_7476448_output, cfg_JOIN_INNER_TD_7476448_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7779108;
    krnl_JOIN_INNER_TD_7779108 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7779108.setup(tbl_Filter_TD_879780_output, tbl_Filter_TD_8969833_output, tbl_JOIN_INNER_TD_7779108_output, cfg_JOIN_INNER_TD_7779108_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_5299444;
    trans_JOIN_INNER_TD_5299444.setq(q_h);
    trans_JOIN_INNER_TD_5299444.add(&(cfg_JOIN_INNER_TD_5299444_cmds));
    transEngine trans_JOIN_INNER_TD_5299444_out;
    trans_JOIN_INNER_TD_5299444_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7476448;
    trans_JOIN_INNER_TD_7476448.setq(q_h);
    trans_JOIN_INNER_TD_7476448.add(&(cfg_JOIN_INNER_TD_7476448_cmds));
    transEngine trans_JOIN_INNER_TD_7476448_out;
    trans_JOIN_INNER_TD_7476448_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7779108;
    trans_JOIN_INNER_TD_7779108.setq(q_h);
    trans_JOIN_INNER_TD_7779108.add(&(cfg_JOIN_INNER_TD_7779108_cmds));
    transEngine trans_JOIN_INNER_TD_7779108_out;
    trans_JOIN_INNER_TD_7779108_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5299444;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5299444;
    std::vector<cl::Event> events_JOIN_INNER_TD_5299444;
    events_h2d_wr_JOIN_INNER_TD_5299444.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5299444.resize(1);
    events_JOIN_INNER_TD_5299444.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5299444;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5299444;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7476448;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7476448;
    std::vector<cl::Event> events_JOIN_INNER_TD_7476448;
    events_h2d_wr_JOIN_INNER_TD_7476448.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7476448.resize(1);
    events_JOIN_INNER_TD_7476448.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7476448;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7476448;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7779108;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7779108;
    std::vector<cl::Event> events_JOIN_INNER_TD_7779108;
    events_h2d_wr_JOIN_INNER_TD_7779108.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7779108.resize(1);
    events_JOIN_INNER_TD_7779108.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7779108;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7779108;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_611708_s, tv_r_Filter_8_611708_e;
    gettimeofday(&tv_r_Filter_8_611708_s, 0);
    SW_Filter_TD_8969833(tbl_SerializeFromObject_TD_9638228_input, tbl_Filter_TD_8969833_output);
    gettimeofday(&tv_r_Filter_8_611708_e, 0);

    struct timeval tv_r_Filter_8_942007_s, tv_r_Filter_8_942007_e;
    gettimeofday(&tv_r_Filter_8_942007_s, 0);
    SW_Filter_TD_879780(tbl_SerializeFromObject_TD_9850710_input, tbl_Filter_TD_879780_output);
    gettimeofday(&tv_r_Filter_8_942007_e, 0);

    struct timeval tv_r_Filter_8_55689_s, tv_r_Filter_8_55689_e;
    gettimeofday(&tv_r_Filter_8_55689_s, 0);
    SW_Filter_TD_8995627(tbl_SerializeFromObject_TD_9964270_input, tbl_Filter_TD_8995627_output);
    gettimeofday(&tv_r_Filter_8_55689_e, 0);

    struct timeval tv_r_Filter_8_480523_s, tv_r_Filter_8_480523_e;
    gettimeofday(&tv_r_Filter_8_480523_s, 0);
    SW_Filter_TD_8255171(tbl_SerializeFromObject_TD_9154852_input, tbl_Filter_TD_8255171_output);
    gettimeofday(&tv_r_Filter_8_480523_e, 0);

    struct timeval tv_r_Filter_7_342605_s, tv_r_Filter_7_342605_e;
    gettimeofday(&tv_r_Filter_7_342605_s, 0);
    SW_Filter_TD_7673479(tbl_SerializeFromObject_TD_8513625_input, tbl_Filter_TD_7673479_output);
    gettimeofday(&tv_r_Filter_7_342605_e, 0);

    struct timeval tv_r_JOIN_INNER_7_705443_s, tv_r_JOIN_INNER_7_705443_e;
    gettimeofday(&tv_r_JOIN_INNER_7_705443_s, 0);
    trans_JOIN_INNER_TD_7779108.add(&(tbl_Filter_TD_879780_output));
    trans_JOIN_INNER_TD_7779108.add(&(tbl_Filter_TD_8969833_output));
    trans_JOIN_INNER_TD_7779108.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7779108), &(events_h2d_wr_JOIN_INNER_TD_7779108[0]));
    events_grp_JOIN_INNER_TD_7779108.push_back(events_h2d_wr_JOIN_INNER_TD_7779108[0]);
    krnl_JOIN_INNER_TD_7779108.run(0, &(events_grp_JOIN_INNER_TD_7779108), &(events_JOIN_INNER_TD_7779108[0]));
    
    trans_JOIN_INNER_TD_7779108_out.add(&(tbl_JOIN_INNER_TD_7779108_output));
    trans_JOIN_INNER_TD_7779108_out.dev2host(0, &(events_JOIN_INNER_TD_7779108), &(events_d2h_rd_JOIN_INNER_TD_7779108[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_705443_e, 0);

    struct timeval tv_r_Filter_7_496752_s, tv_r_Filter_7_496752_e;
    gettimeofday(&tv_r_Filter_7_496752_s, 0);
    SW_Filter_TD_7104860(tbl_SerializeFromObject_TD_857492_input, tbl_Filter_TD_7104860_output);
    gettimeofday(&tv_r_Filter_7_496752_e, 0);

    struct timeval tv_r_JOIN_INNER_7_53699_s, tv_r_JOIN_INNER_7_53699_e;
    gettimeofday(&tv_r_JOIN_INNER_7_53699_s, 0);
    trans_JOIN_INNER_TD_7476448.add(&(tbl_Filter_TD_8255171_output));
    trans_JOIN_INNER_TD_7476448.add(&(tbl_Filter_TD_8995627_output));
    trans_JOIN_INNER_TD_7476448.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7476448), &(events_h2d_wr_JOIN_INNER_TD_7476448[0]));
    events_grp_JOIN_INNER_TD_7476448.push_back(events_h2d_wr_JOIN_INNER_TD_7476448[0]);
    krnl_JOIN_INNER_TD_7476448.run(0, &(events_grp_JOIN_INNER_TD_7476448), &(events_JOIN_INNER_TD_7476448[0]));
    
    trans_JOIN_INNER_TD_7476448_out.add(&(tbl_JOIN_INNER_TD_7476448_output));
    trans_JOIN_INNER_TD_7476448_out.dev2host(0, &(events_JOIN_INNER_TD_7476448), &(events_d2h_rd_JOIN_INNER_TD_7476448[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_53699_e, 0);

    struct timeval tv_r_Filter_6_640012_s, tv_r_Filter_6_640012_e;
    gettimeofday(&tv_r_Filter_6_640012_s, 0);
    SW_Filter_TD_6502055(tbl_SerializeFromObject_TD_7413064_input, tbl_Filter_TD_6502055_output);
    gettimeofday(&tv_r_Filter_6_640012_e, 0);

    struct timeval tv_r_Filter_6_937342_s, tv_r_Filter_6_937342_e;
    gettimeofday(&tv_r_Filter_6_937342_s, 0);
    SW_Filter_TD_6111688(tbl_SerializeFromObject_TD_7651396_input, tbl_Filter_TD_6111688_output);
    gettimeofday(&tv_r_Filter_6_937342_e, 0);

    struct timeval tv_r_JOIN_INNER_6_937770_s, tv_r_JOIN_INNER_6_937770_e;
    gettimeofday(&tv_r_JOIN_INNER_6_937770_s, 0);
    SW_JOIN_INNER_TD_6947388(tbl_JOIN_INNER_TD_7779108_output, tbl_Filter_TD_7673479_output, tbl_JOIN_INNER_TD_6947388_output);
    gettimeofday(&tv_r_JOIN_INNER_6_937770_e, 0);

    struct timeval tv_r_JOIN_INNER_6_930202_s, tv_r_JOIN_INNER_6_930202_e;
    gettimeofday(&tv_r_JOIN_INNER_6_930202_s, 0);
    SW_JOIN_INNER_TD_6237486(tbl_JOIN_INNER_TD_7476448_output, tbl_Filter_TD_7104860_output, tbl_JOIN_INNER_TD_6237486_output);
    gettimeofday(&tv_r_JOIN_INNER_6_930202_e, 0);

    struct timeval tv_r_Filter_5_80698_s, tv_r_Filter_5_80698_e;
    gettimeofday(&tv_r_Filter_5_80698_s, 0);
    SW_Filter_TD_5713377(tbl_SerializeFromObject_TD_6587582_input, tbl_Filter_TD_5713377_output);
    gettimeofday(&tv_r_Filter_5_80698_e, 0);

    struct timeval tv_r_JOIN_INNER_5_431941_s, tv_r_JOIN_INNER_5_431941_e;
    gettimeofday(&tv_r_JOIN_INNER_5_431941_s, 0);
    trans_JOIN_INNER_TD_5299444.add(&(tbl_Filter_TD_6111688_output));
    trans_JOIN_INNER_TD_5299444.add(&(tbl_Filter_TD_6502055_output));
    trans_JOIN_INNER_TD_5299444.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5299444), &(events_h2d_wr_JOIN_INNER_TD_5299444[0]));
    events_grp_JOIN_INNER_TD_5299444.push_back(events_h2d_wr_JOIN_INNER_TD_5299444[0]);
    krnl_JOIN_INNER_TD_5299444.run(0, &(events_grp_JOIN_INNER_TD_5299444), &(events_JOIN_INNER_TD_5299444[0]));
    
    trans_JOIN_INNER_TD_5299444_out.add(&(tbl_JOIN_INNER_TD_5299444_output));
    trans_JOIN_INNER_TD_5299444_out.dev2host(0, &(events_JOIN_INNER_TD_5299444), &(events_d2h_rd_JOIN_INNER_TD_5299444[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_431941_e, 0);

    struct timeval tv_r_Aggregate_5_469911_s, tv_r_Aggregate_5_469911_e;
    gettimeofday(&tv_r_Aggregate_5_469911_s, 0);
    SW_Aggregate_TD_5849639(tbl_JOIN_INNER_TD_6947388_output, tbl_Aggregate_TD_5849639_output);
    gettimeofday(&tv_r_Aggregate_5_469911_e, 0);

    struct timeval tv_r_Aggregate_5_633797_s, tv_r_Aggregate_5_633797_e;
    gettimeofday(&tv_r_Aggregate_5_633797_s, 0);
    SW_Aggregate_TD_5858808(tbl_JOIN_INNER_TD_6237486_output, tbl_Aggregate_TD_5858808_output);
    gettimeofday(&tv_r_Aggregate_5_633797_e, 0);

    struct timeval tv_r_JOIN_INNER_4_175606_s, tv_r_JOIN_INNER_4_175606_e;
    gettimeofday(&tv_r_JOIN_INNER_4_175606_s, 0);
    SW_JOIN_INNER_TD_4940860(tbl_JOIN_INNER_TD_5299444_output, tbl_Filter_TD_5713377_output, tbl_JOIN_INNER_TD_4940860_output);
    gettimeofday(&tv_r_JOIN_INNER_4_175606_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_4_605650_s, tv_r_JOIN_LEFTSEMI_4_605650_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_605650_s, 0);
    SW_JOIN_LEFTSEMI_TD_4707233(tbl_Aggregate_TD_5858808_output, tbl_Aggregate_TD_5849639_output, tbl_JOIN_LEFTSEMI_TD_4707233_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_4_605650_e, 0);

    struct timeval tv_r_Aggregate_3_991549_s, tv_r_Aggregate_3_991549_e;
    gettimeofday(&tv_r_Aggregate_3_991549_s, 0);
    SW_Aggregate_TD_3372762(tbl_JOIN_INNER_TD_4940860_output, tbl_Aggregate_TD_3372762_output);
    gettimeofday(&tv_r_Aggregate_3_991549_e, 0);

    struct timeval tv_r_Aggregate_3_547817_s, tv_r_Aggregate_3_547817_e;
    gettimeofday(&tv_r_Aggregate_3_547817_s, 0);
    SW_Aggregate_TD_364082(tbl_JOIN_LEFTSEMI_TD_4707233_output, tbl_Aggregate_TD_364082_output);
    gettimeofday(&tv_r_Aggregate_3_547817_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_2_436278_s, tv_r_JOIN_LEFTSEMI_2_436278_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_436278_s, 0);
    SW_JOIN_LEFTSEMI_TD_2756360(tbl_Aggregate_TD_364082_output, tbl_Aggregate_TD_3372762_output, tbl_JOIN_LEFTSEMI_TD_2756360_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_436278_e, 0);

    struct timeval tv_r_Aggregate_1_24207_s, tv_r_Aggregate_1_24207_e;
    gettimeofday(&tv_r_Aggregate_1_24207_s, 0);
    SW_Aggregate_TD_1147604(tbl_JOIN_LEFTSEMI_TD_2756360_output, tbl_Aggregate_TD_1147604_output);
    gettimeofday(&tv_r_Aggregate_1_24207_e, 0);

    struct timeval tv_r_Aggregate_0_613649_s, tv_r_Aggregate_0_613649_e;
    gettimeofday(&tv_r_Aggregate_0_613649_s, 0);
    SW_Aggregate_TD_0933263(tbl_Aggregate_TD_1147604_output, tbl_Aggregate_TD_0933263_output);
    gettimeofday(&tv_r_Aggregate_0_613649_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_611708_s, &tv_r_Filter_8_611708_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9638228_input: " << tbl_SerializeFromObject_TD_9638228_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_942007_s, &tv_r_Filter_8_942007_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9850710_input: " << tbl_SerializeFromObject_TD_9850710_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_55689_s, &tv_r_Filter_8_55689_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9964270_input: " << tbl_SerializeFromObject_TD_9964270_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_480523_s, &tv_r_Filter_8_480523_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9154852_input: " << tbl_SerializeFromObject_TD_9154852_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_342605_s, &tv_r_Filter_7_342605_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8513625_input: " << tbl_SerializeFromObject_TD_8513625_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_705443_s, &tv_r_JOIN_INNER_7_705443_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_879780_output: " << tbl_Filter_TD_879780_output.getNumRow() << " " << "tbl_Filter_TD_8969833_output: " << tbl_Filter_TD_8969833_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_496752_s, &tv_r_Filter_7_496752_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_857492_input: " << tbl_SerializeFromObject_TD_857492_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_53699_s, &tv_r_JOIN_INNER_7_53699_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8255171_output: " << tbl_Filter_TD_8255171_output.getNumRow() << " " << "tbl_Filter_TD_8995627_output: " << tbl_Filter_TD_8995627_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_640012_s, &tv_r_Filter_6_640012_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7413064_input: " << tbl_SerializeFromObject_TD_7413064_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_937342_s, &tv_r_Filter_6_937342_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7651396_input: " << tbl_SerializeFromObject_TD_7651396_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_937770_s, &tv_r_JOIN_INNER_6_937770_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7779108_output: " << tbl_JOIN_INNER_TD_7779108_output.getNumRow() << " " << "tbl_Filter_TD_7673479_output: " << tbl_Filter_TD_7673479_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_930202_s, &tv_r_JOIN_INNER_6_930202_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7476448_output: " << tbl_JOIN_INNER_TD_7476448_output.getNumRow() << " " << "tbl_Filter_TD_7104860_output: " << tbl_Filter_TD_7104860_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_80698_s, &tv_r_Filter_5_80698_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6587582_input: " << tbl_SerializeFromObject_TD_6587582_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_431941_s, &tv_r_JOIN_INNER_5_431941_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6111688_output: " << tbl_Filter_TD_6111688_output.getNumRow() << " " << "tbl_Filter_TD_6502055_output: " << tbl_Filter_TD_6502055_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_469911_s, &tv_r_Aggregate_5_469911_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6947388_output: " << tbl_JOIN_INNER_TD_6947388_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_633797_s, &tv_r_Aggregate_5_633797_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6237486_output: " << tbl_JOIN_INNER_TD_6237486_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_175606_s, &tv_r_JOIN_INNER_4_175606_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5299444_output: " << tbl_JOIN_INNER_TD_5299444_output.getNumRow() << " " << "tbl_Filter_TD_5713377_output: " << tbl_Filter_TD_5713377_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_4: " << tvdiff(&tv_r_JOIN_LEFTSEMI_4_605650_s, &tv_r_JOIN_LEFTSEMI_4_605650_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5858808_output: " << tbl_Aggregate_TD_5858808_output.getNumRow() << " " << "tbl_Aggregate_TD_5849639_output: " << tbl_Aggregate_TD_5849639_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_991549_s, &tv_r_Aggregate_3_991549_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4940860_output: " << tbl_JOIN_INNER_TD_4940860_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_547817_s, &tv_r_Aggregate_3_547817_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_4707233_output: " << tbl_JOIN_LEFTSEMI_TD_4707233_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_2: " << tvdiff(&tv_r_JOIN_LEFTSEMI_2_436278_s, &tv_r_JOIN_LEFTSEMI_2_436278_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_364082_output: " << tbl_Aggregate_TD_364082_output.getNumRow() << " " << "tbl_Aggregate_TD_3372762_output: " << tbl_Aggregate_TD_3372762_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_24207_s, &tv_r_Aggregate_1_24207_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_2756360_output: " << tbl_JOIN_LEFTSEMI_TD_2756360_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_613649_s, &tv_r_Aggregate_0_613649_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1147604_output: " << tbl_Aggregate_TD_1147604_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.192183 * 1000 << "ms" << std::endl; 
    return 0; 
}
