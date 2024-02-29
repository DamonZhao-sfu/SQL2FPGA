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

#include "cfgFunc_q2.hpp" 
#include "q2.hpp" 

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
    std::cout << "NOTE:running query #2\n."; 
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
    Table tbl_Sort_TD_0145198_output("tbl_Sort_TD_0145198_output", 6100000, 8, "");
    tbl_Sort_TD_0145198_output.allocateHost();
    Table tbl_Project_TD_1198171_output("tbl_Project_TD_1198171_output", 6100000, 8, "");
    tbl_Project_TD_1198171_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2395599_output("tbl_JOIN_INNER_TD_2395599_output", 6100000, 15, "");
    tbl_JOIN_INNER_TD_2395599_output.allocateHost();
    Table tbl_Project_TD_3108733_output("tbl_Project_TD_3108733_output", 6100000, 8, "");
    tbl_Project_TD_3108733_output.allocateHost();
    Table tbl_Project_TD_3551668_output("tbl_Project_TD_3551668_output", 6100000, 8, "");
    tbl_Project_TD_3551668_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4759674_output("tbl_JOIN_INNER_TD_4759674_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4759674_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4491364_output("tbl_JOIN_INNER_TD_4491364_output", 6100000, 8, "");
    tbl_JOIN_INNER_TD_4491364_output.allocateHost();
    Table tbl_Aggregate_TD_5384456_output("tbl_Aggregate_TD_5384456_output", 6100000, 8, "");
    tbl_Aggregate_TD_5384456_output.allocateHost();
    Table tbl_Filter_TD_5713402_output("tbl_Filter_TD_5713402_output", 6100000, 1, "");
    tbl_Filter_TD_5713402_output.allocateHost();
    Table tbl_Aggregate_TD_5483631_output("tbl_Aggregate_TD_5483631_output", 6100000, 8, "");
    tbl_Aggregate_TD_5483631_output.allocateHost();
    Table tbl_Filter_TD_5592224_output("tbl_Filter_TD_5592224_output", 6100000, 1, "");
    tbl_Filter_TD_5592224_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6894439_output("tbl_JOIN_INNER_TD_6894439_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6894439_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6632795_input;
    tbl_SerializeFromObject_TD_6632795_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6632795_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_6632795_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6632795_input.allocateHost();
    tbl_SerializeFromObject_TD_6632795_input.loadHost();
    Table tbl_JOIN_INNER_TD_6641008_output("tbl_JOIN_INNER_TD_6641008_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6641008_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6857338_input;
    tbl_SerializeFromObject_TD_6857338_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6857338_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_6857338_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_6857338_input.allocateHost();
    tbl_SerializeFromObject_TD_6857338_input.loadHost();
    Table tbl_Union_TD_7657850_output("tbl_Union_TD_7657850_output", 6100000, 2, "");
    tbl_Union_TD_7657850_output.allocateHost();
    Table tbl_Filter_TD_7100826_output("tbl_Filter_TD_7100826_output", 6100000, 3, "");
    tbl_Filter_TD_7100826_output.allocateHost();
    Table tbl_Union_TD_7944491_output("tbl_Union_TD_7944491_output", 6100000, 2, "");
    tbl_Union_TD_7944491_output.allocateHost();
    Table tbl_Filter_TD_7355473_output("tbl_Filter_TD_7355473_output", 6100000, 3, "");
    tbl_Filter_TD_7355473_output.allocateHost();
    Table tbl_Project_TD_8226126_output("tbl_Project_TD_8226126_output", 6100000, 2, "");
    tbl_Project_TD_8226126_output.allocateHost();
    Table tbl_Project_TD_852171_output("tbl_Project_TD_852171_output", 6100000, 2, "");
    tbl_Project_TD_852171_output.allocateHost();
    Table tbl_SerializeFromObject_TD_845148_input;
    tbl_SerializeFromObject_TD_845148_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_845148_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_845148_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_845148_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_845148_input.allocateHost();
    tbl_SerializeFromObject_TD_845148_input.loadHost();
    Table tbl_Project_TD_8686372_output("tbl_Project_TD_8686372_output", 6100000, 2, "");
    tbl_Project_TD_8686372_output.allocateHost();
    Table tbl_Project_TD_8313848_output("tbl_Project_TD_8313848_output", 6100000, 2, "");
    tbl_Project_TD_8313848_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8165906_input;
    tbl_SerializeFromObject_TD_8165906_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8165906_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8165906_input.addCol("d_week_seq", 4);
    tbl_SerializeFromObject_TD_8165906_input.addCol("d_day_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8165906_input.allocateHost();
    tbl_SerializeFromObject_TD_8165906_input.loadHost();
    Table tbl_Filter_TD_9639638_output("tbl_Filter_TD_9639638_output", 6100000, 2, "");
    tbl_Filter_TD_9639638_output.allocateHost();
    Table tbl_Filter_TD_9270700_output("tbl_Filter_TD_9270700_output", 6100000, 2, "");
    tbl_Filter_TD_9270700_output.allocateHost();
    Table tbl_Filter_TD_9218037_output("tbl_Filter_TD_9218037_output", 6100000, 2, "");
    tbl_Filter_TD_9218037_output.allocateHost();
    Table tbl_Filter_TD_9423980_output("tbl_Filter_TD_9423980_output", 6100000, 2, "");
    tbl_Filter_TD_9423980_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10339636_input;
    tbl_SerializeFromObject_TD_10339636_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10339636_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10339636_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10339636_input.allocateHost();
    tbl_SerializeFromObject_TD_10339636_input.loadHost();
    Table tbl_SerializeFromObject_TD_10388161_input;
    tbl_SerializeFromObject_TD_10388161_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10388161_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10388161_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10388161_input.allocateHost();
    tbl_SerializeFromObject_TD_10388161_input.loadHost();
    Table tbl_SerializeFromObject_TD_10826834_input;
    tbl_SerializeFromObject_TD_10826834_input = Table("web_sales", web_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10826834_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10826834_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10826834_input.allocateHost();
    tbl_SerializeFromObject_TD_10826834_input.loadHost();
    Table tbl_SerializeFromObject_TD_10456515_input;
    tbl_SerializeFromObject_TD_10456515_input = Table("catalog_sales", catalog_sales_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10456515_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_10456515_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_10456515_input.allocateHost();
    tbl_SerializeFromObject_TD_10456515_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_4759674_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4491364_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_5384456_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5713402_output.allocateDevBuffer(context_h, 32);
    tbl_Aggregate_TD_5483631_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5592224_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_4759674_cmds;
    cfg_JOIN_INNER_TD_4759674_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4759674_gqe_join (cfg_JOIN_INNER_TD_4759674_cmds.cmd);
    cfg_JOIN_INNER_TD_4759674_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4491364_cmds;
    cfg_JOIN_INNER_TD_4491364_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4491364_gqe_join (cfg_JOIN_INNER_TD_4491364_cmds.cmd);
    cfg_JOIN_INNER_TD_4491364_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_4759674;
    krnl_JOIN_INNER_TD_4759674 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4759674.setup(tbl_Aggregate_TD_5384456_output, tbl_Filter_TD_5713402_output, tbl_JOIN_INNER_TD_4759674_output, cfg_JOIN_INNER_TD_4759674_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4491364;
    krnl_JOIN_INNER_TD_4491364 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4491364.setup(tbl_Aggregate_TD_5483631_output, tbl_Filter_TD_5592224_output, tbl_JOIN_INNER_TD_4491364_output, cfg_JOIN_INNER_TD_4491364_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_4759674;
    trans_JOIN_INNER_TD_4759674.setq(q_h);
    trans_JOIN_INNER_TD_4759674.add(&(cfg_JOIN_INNER_TD_4759674_cmds));
    transEngine trans_JOIN_INNER_TD_4759674_out;
    trans_JOIN_INNER_TD_4759674_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4491364;
    trans_JOIN_INNER_TD_4491364.setq(q_h);
    trans_JOIN_INNER_TD_4491364.add(&(cfg_JOIN_INNER_TD_4491364_cmds));
    transEngine trans_JOIN_INNER_TD_4491364_out;
    trans_JOIN_INNER_TD_4491364_out.setq(q_h);
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4759674;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4759674;
    std::vector<cl::Event> events_JOIN_INNER_TD_4759674;
    events_h2d_wr_JOIN_INNER_TD_4759674.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4759674.resize(1);
    events_JOIN_INNER_TD_4759674.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4759674;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4759674;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4491364;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4491364;
    std::vector<cl::Event> events_JOIN_INNER_TD_4491364;
    events_h2d_wr_JOIN_INNER_TD_4491364.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4491364.resize(1);
    events_JOIN_INNER_TD_4491364.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4491364;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4491364;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_662111_s, tv_r_Filter_9_662111_e;
    gettimeofday(&tv_r_Filter_9_662111_s, 0);
    SW_Filter_TD_9423980(tbl_SerializeFromObject_TD_10456515_input, tbl_Filter_TD_9423980_output);
    gettimeofday(&tv_r_Filter_9_662111_e, 0);

    struct timeval tv_r_Filter_9_378481_s, tv_r_Filter_9_378481_e;
    gettimeofday(&tv_r_Filter_9_378481_s, 0);
    SW_Filter_TD_9218037(tbl_SerializeFromObject_TD_10826834_input, tbl_Filter_TD_9218037_output);
    gettimeofday(&tv_r_Filter_9_378481_e, 0);

    struct timeval tv_r_Filter_9_384738_s, tv_r_Filter_9_384738_e;
    gettimeofday(&tv_r_Filter_9_384738_s, 0);
    SW_Filter_TD_9270700(tbl_SerializeFromObject_TD_10388161_input, tbl_Filter_TD_9270700_output);
    gettimeofday(&tv_r_Filter_9_384738_e, 0);

    struct timeval tv_r_Filter_9_719063_s, tv_r_Filter_9_719063_e;
    gettimeofday(&tv_r_Filter_9_719063_s, 0);
    SW_Filter_TD_9639638(tbl_SerializeFromObject_TD_10339636_input, tbl_Filter_TD_9639638_output);
    gettimeofday(&tv_r_Filter_9_719063_e, 0);

    struct timeval tv_r_Project_8_551484_s, tv_r_Project_8_551484_e;
    gettimeofday(&tv_r_Project_8_551484_s, 0);
    SW_Project_TD_8313848(tbl_Filter_TD_9423980_output, tbl_Project_TD_8313848_output);
    gettimeofday(&tv_r_Project_8_551484_e, 0);

    struct timeval tv_r_Project_8_144822_s, tv_r_Project_8_144822_e;
    gettimeofday(&tv_r_Project_8_144822_s, 0);
    SW_Project_TD_8686372(tbl_Filter_TD_9218037_output, tbl_Project_TD_8686372_output);
    gettimeofday(&tv_r_Project_8_144822_e, 0);

    struct timeval tv_r_Project_8_652568_s, tv_r_Project_8_652568_e;
    gettimeofday(&tv_r_Project_8_652568_s, 0);
    SW_Project_TD_852171(tbl_Filter_TD_9270700_output, tbl_Project_TD_852171_output);
    gettimeofday(&tv_r_Project_8_652568_e, 0);

    struct timeval tv_r_Project_8_941326_s, tv_r_Project_8_941326_e;
    gettimeofday(&tv_r_Project_8_941326_s, 0);
    SW_Project_TD_8226126(tbl_Filter_TD_9639638_output, tbl_Project_TD_8226126_output);
    gettimeofday(&tv_r_Project_8_941326_e, 0);

    struct timeval tv_r_Filter_7_825724_s, tv_r_Filter_7_825724_e;
    gettimeofday(&tv_r_Filter_7_825724_s, 0);
    SW_Filter_TD_7355473(tbl_SerializeFromObject_TD_8165906_input, tbl_Filter_TD_7355473_output);
    gettimeofday(&tv_r_Filter_7_825724_e, 0);

    struct timeval tv_r_Union_7_907575_s, tv_r_Union_7_907575_e;
    gettimeofday(&tv_r_Union_7_907575_s, 0);
    SW_Union_TD_7944491(tbl_Project_TD_8686372_output, tbl_Project_TD_8313848_output, tbl_Union_TD_7944491_output);
    gettimeofday(&tv_r_Union_7_907575_e, 0);

    struct timeval tv_r_Filter_7_311010_s, tv_r_Filter_7_311010_e;
    gettimeofday(&tv_r_Filter_7_311010_s, 0);
    SW_Filter_TD_7100826(tbl_SerializeFromObject_TD_845148_input, tbl_Filter_TD_7100826_output);
    gettimeofday(&tv_r_Filter_7_311010_e, 0);

    struct timeval tv_r_Union_7_341125_s, tv_r_Union_7_341125_e;
    gettimeofday(&tv_r_Union_7_341125_s, 0);
    SW_Union_TD_7657850(tbl_Project_TD_8226126_output, tbl_Project_TD_852171_output, tbl_Union_TD_7657850_output);
    gettimeofday(&tv_r_Union_7_341125_e, 0);

    struct timeval tv_r_JOIN_INNER_6_965692_s, tv_r_JOIN_INNER_6_965692_e;
    gettimeofday(&tv_r_JOIN_INNER_6_965692_s, 0);
    SW_JOIN_INNER_TD_6641008(tbl_Union_TD_7944491_output, tbl_Filter_TD_7355473_output, tbl_JOIN_INNER_TD_6641008_output);
    gettimeofday(&tv_r_JOIN_INNER_6_965692_e, 0);

    struct timeval tv_r_JOIN_INNER_6_356212_s, tv_r_JOIN_INNER_6_356212_e;
    gettimeofday(&tv_r_JOIN_INNER_6_356212_s, 0);
    SW_JOIN_INNER_TD_6894439(tbl_Union_TD_7657850_output, tbl_Filter_TD_7100826_output, tbl_JOIN_INNER_TD_6894439_output);
    gettimeofday(&tv_r_JOIN_INNER_6_356212_e, 0);

    struct timeval tv_r_Filter_5_155086_s, tv_r_Filter_5_155086_e;
    gettimeofday(&tv_r_Filter_5_155086_s, 0);
    SW_Filter_TD_5592224(tbl_SerializeFromObject_TD_6857338_input, tbl_Filter_TD_5592224_output);
    gettimeofday(&tv_r_Filter_5_155086_e, 0);

    struct timeval tv_r_Aggregate_5_558953_s, tv_r_Aggregate_5_558953_e;
    gettimeofday(&tv_r_Aggregate_5_558953_s, 0);
    SW_Aggregate_TD_5483631(tbl_JOIN_INNER_TD_6641008_output, tbl_Aggregate_TD_5483631_output);
    gettimeofday(&tv_r_Aggregate_5_558953_e, 0);

    struct timeval tv_r_Filter_5_232576_s, tv_r_Filter_5_232576_e;
    gettimeofday(&tv_r_Filter_5_232576_s, 0);
    SW_Filter_TD_5713402(tbl_SerializeFromObject_TD_6632795_input, tbl_Filter_TD_5713402_output);
    gettimeofday(&tv_r_Filter_5_232576_e, 0);

    struct timeval tv_r_Aggregate_5_813924_s, tv_r_Aggregate_5_813924_e;
    gettimeofday(&tv_r_Aggregate_5_813924_s, 0);
    SW_Aggregate_TD_5384456(tbl_JOIN_INNER_TD_6894439_output, tbl_Aggregate_TD_5384456_output);
    gettimeofday(&tv_r_Aggregate_5_813924_e, 0);

    struct timeval tv_r_JOIN_INNER_4_126544_s, tv_r_JOIN_INNER_4_126544_e;
    gettimeofday(&tv_r_JOIN_INNER_4_126544_s, 0);
    trans_JOIN_INNER_TD_4491364.add(&(tbl_Aggregate_TD_5483631_output));
    trans_JOIN_INNER_TD_4491364.add(&(tbl_Filter_TD_5592224_output));
    trans_JOIN_INNER_TD_4491364.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4491364), &(events_h2d_wr_JOIN_INNER_TD_4491364[0]));
    events_grp_JOIN_INNER_TD_4491364.push_back(events_h2d_wr_JOIN_INNER_TD_4491364[0]);
    krnl_JOIN_INNER_TD_4491364.run(0, &(events_grp_JOIN_INNER_TD_4491364), &(events_JOIN_INNER_TD_4491364[0]));
    
    trans_JOIN_INNER_TD_4491364_out.add(&(tbl_JOIN_INNER_TD_4491364_output));
    trans_JOIN_INNER_TD_4491364_out.dev2host(0, &(events_JOIN_INNER_TD_4491364), &(events_d2h_rd_JOIN_INNER_TD_4491364[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_126544_e, 0);

    struct timeval tv_r_JOIN_INNER_4_246012_s, tv_r_JOIN_INNER_4_246012_e;
    gettimeofday(&tv_r_JOIN_INNER_4_246012_s, 0);
    trans_JOIN_INNER_TD_4759674.add(&(tbl_Aggregate_TD_5384456_output));
    trans_JOIN_INNER_TD_4759674.add(&(tbl_Filter_TD_5713402_output));
    trans_JOIN_INNER_TD_4759674.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4759674), &(events_h2d_wr_JOIN_INNER_TD_4759674[0]));
    events_grp_JOIN_INNER_TD_4759674.push_back(events_h2d_wr_JOIN_INNER_TD_4759674[0]);
    krnl_JOIN_INNER_TD_4759674.run(0, &(events_grp_JOIN_INNER_TD_4759674), &(events_JOIN_INNER_TD_4759674[0]));
    
    trans_JOIN_INNER_TD_4759674_out.add(&(tbl_JOIN_INNER_TD_4759674_output));
    trans_JOIN_INNER_TD_4759674_out.dev2host(0, &(events_JOIN_INNER_TD_4759674), &(events_d2h_rd_JOIN_INNER_TD_4759674[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_246012_e, 0);

    struct timeval tv_r_Project_3_571582_s, tv_r_Project_3_571582_e;
    gettimeofday(&tv_r_Project_3_571582_s, 0);
    SW_Project_TD_3551668(tbl_JOIN_INNER_TD_4491364_output, tbl_Project_TD_3551668_output);
    gettimeofday(&tv_r_Project_3_571582_e, 0);

    struct timeval tv_r_Project_3_123998_s, tv_r_Project_3_123998_e;
    gettimeofday(&tv_r_Project_3_123998_s, 0);
    SW_Project_TD_3108733(tbl_JOIN_INNER_TD_4759674_output, tbl_Project_TD_3108733_output);
    gettimeofday(&tv_r_Project_3_123998_e, 0);

    struct timeval tv_r_JOIN_INNER_2_55463_s, tv_r_JOIN_INNER_2_55463_e;
    gettimeofday(&tv_r_JOIN_INNER_2_55463_s, 0);
    SW_JOIN_INNER_TD_2395599(tbl_Project_TD_3108733_output, tbl_Project_TD_3551668_output, tbl_JOIN_INNER_TD_2395599_output);
    gettimeofday(&tv_r_JOIN_INNER_2_55463_e, 0);

    struct timeval tv_r_Project_1_125840_s, tv_r_Project_1_125840_e;
    gettimeofday(&tv_r_Project_1_125840_s, 0);
    SW_Project_TD_1198171(tbl_JOIN_INNER_TD_2395599_output, tbl_Project_TD_1198171_output);
    gettimeofday(&tv_r_Project_1_125840_e, 0);

    struct timeval tv_r_Sort_0_614423_s, tv_r_Sort_0_614423_e;
    gettimeofday(&tv_r_Sort_0_614423_s, 0);
    SW_Sort_TD_0145198(tbl_Project_TD_1198171_output, tbl_Sort_TD_0145198_output);
    gettimeofday(&tv_r_Sort_0_614423_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_662111_s, &tv_r_Filter_9_662111_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10456515_input: " << tbl_SerializeFromObject_TD_10456515_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_378481_s, &tv_r_Filter_9_378481_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10826834_input: " << tbl_SerializeFromObject_TD_10826834_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_384738_s, &tv_r_Filter_9_384738_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10388161_input: " << tbl_SerializeFromObject_TD_10388161_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_719063_s, &tv_r_Filter_9_719063_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10339636_input: " << tbl_SerializeFromObject_TD_10339636_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_551484_s, &tv_r_Project_8_551484_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9423980_output: " << tbl_Filter_TD_9423980_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_144822_s, &tv_r_Project_8_144822_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9218037_output: " << tbl_Filter_TD_9218037_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_652568_s, &tv_r_Project_8_652568_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9270700_output: " << tbl_Filter_TD_9270700_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_8: " << tvdiff(&tv_r_Project_8_941326_s, &tv_r_Project_8_941326_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9639638_output: " << tbl_Filter_TD_9639638_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_825724_s, &tv_r_Filter_7_825724_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8165906_input: " << tbl_SerializeFromObject_TD_8165906_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_907575_s, &tv_r_Union_7_907575_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8686372_output: " << tbl_Project_TD_8686372_output.getNumRow() << " " << "tbl_Project_TD_8313848_output: " << tbl_Project_TD_8313848_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_311010_s, &tv_r_Filter_7_311010_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_845148_input: " << tbl_SerializeFromObject_TD_845148_input.getNumRow() << " " << std::endl; 

    std::cout << "Union_7: " << tvdiff(&tv_r_Union_7_341125_s, &tv_r_Union_7_341125_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_8226126_output: " << tbl_Project_TD_8226126_output.getNumRow() << " " << "tbl_Project_TD_852171_output: " << tbl_Project_TD_852171_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_965692_s, &tv_r_JOIN_INNER_6_965692_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7944491_output: " << tbl_Union_TD_7944491_output.getNumRow() << " " << "tbl_Filter_TD_7355473_output: " << tbl_Filter_TD_7355473_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_356212_s, &tv_r_JOIN_INNER_6_356212_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_7657850_output: " << tbl_Union_TD_7657850_output.getNumRow() << " " << "tbl_Filter_TD_7100826_output: " << tbl_Filter_TD_7100826_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_155086_s, &tv_r_Filter_5_155086_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6857338_input: " << tbl_SerializeFromObject_TD_6857338_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_558953_s, &tv_r_Aggregate_5_558953_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6641008_output: " << tbl_JOIN_INNER_TD_6641008_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_232576_s, &tv_r_Filter_5_232576_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6632795_input: " << tbl_SerializeFromObject_TD_6632795_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_813924_s, &tv_r_Aggregate_5_813924_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6894439_output: " << tbl_JOIN_INNER_TD_6894439_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_126544_s, &tv_r_JOIN_INNER_4_126544_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5483631_output: " << tbl_Aggregate_TD_5483631_output.getNumRow() << " " << "tbl_Filter_TD_5592224_output: " << tbl_Filter_TD_5592224_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_246012_s, &tv_r_JOIN_INNER_4_246012_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5384456_output: " << tbl_Aggregate_TD_5384456_output.getNumRow() << " " << "tbl_Filter_TD_5713402_output: " << tbl_Filter_TD_5713402_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_571582_s, &tv_r_Project_3_571582_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4491364_output: " << tbl_JOIN_INNER_TD_4491364_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_123998_s, &tv_r_Project_3_123998_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4759674_output: " << tbl_JOIN_INNER_TD_4759674_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_55463_s, &tv_r_JOIN_INNER_2_55463_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3108733_output: " << tbl_Project_TD_3108733_output.getNumRow() << " " << "tbl_Project_TD_3551668_output: " << tbl_Project_TD_3551668_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_125840_s, &tv_r_Project_1_125840_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2395599_output: " << tbl_JOIN_INNER_TD_2395599_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_614423_s, &tv_r_Sort_0_614423_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1198171_output: " << tbl_Project_TD_1198171_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.5498531 * 1000 << "ms" << std::endl; 
    return 0; 
}
