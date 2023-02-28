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

#include "cfgFunc_q88.hpp" 
#include "q88.hpp" 

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
    std::cout << "NOTE:running query #88\n."; 
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
    Table tbl_JOIN_CROSS_TD_0739177_output("tbl_JOIN_CROSS_TD_0739177_output", 6100000, 8, "");
    tbl_JOIN_CROSS_TD_0739177_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_1823139_output("tbl_JOIN_CROSS_TD_1823139_output", 6100000, 7, "");
    tbl_JOIN_CROSS_TD_1823139_output.allocateHost();
    Table tbl_Aggregate_TD_1846351_output("tbl_Aggregate_TD_1846351_output", 6100000, 1, "");
    tbl_Aggregate_TD_1846351_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_2343626_output("tbl_JOIN_CROSS_TD_2343626_output", 6100000, 6, "");
    tbl_JOIN_CROSS_TD_2343626_output.allocateHost();
    Table tbl_Aggregate_TD_2142152_output("tbl_Aggregate_TD_2142152_output", 6100000, 1, "");
    tbl_Aggregate_TD_2142152_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2330074_output("tbl_JOIN_INNER_TD_2330074_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_2330074_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_3727074_output("tbl_JOIN_CROSS_TD_3727074_output", 6100000, 5, "");
    tbl_JOIN_CROSS_TD_3727074_output.allocateHost();
    Table tbl_Aggregate_TD_398017_output("tbl_Aggregate_TD_398017_output", 6100000, 1, "");
    tbl_Aggregate_TD_398017_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3193411_output("tbl_JOIN_INNER_TD_3193411_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_3193411_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3187202_output("tbl_JOIN_INNER_TD_3187202_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_3187202_output.allocateHost();
    Table tbl_Filter_TD_3451200_output("tbl_Filter_TD_3451200_output", 6100000, 1, "");
    tbl_Filter_TD_3451200_output.allocateHost();
    Table tbl_JOIN_CROSS_TD_4793839_output("tbl_JOIN_CROSS_TD_4793839_output", 6100000, 4, "");
    tbl_JOIN_CROSS_TD_4793839_output.allocateHost();
    Table tbl_Aggregate_TD_4827417_output("tbl_Aggregate_TD_4827417_output", 6100000, 1, "");
    tbl_Aggregate_TD_4827417_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4574010_output("tbl_JOIN_INNER_TD_4574010_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4574010_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4598724_output("tbl_JOIN_INNER_TD_4598724_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_4598724_output.allocateHost();
    Table tbl_Filter_TD_448681_output("tbl_Filter_TD_448681_output", 6100000, 1, "");
    tbl_Filter_TD_448681_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4327218_output("tbl_JOIN_INNER_TD_4327218_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4327218_output.allocateHost();
    Table tbl_Filter_TD_4249902_output("tbl_Filter_TD_4249902_output", 6100000, 1, "");
    tbl_Filter_TD_4249902_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4381387_input;
    tbl_SerializeFromObject_TD_4381387_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4381387_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_4381387_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4381387_input.allocateHost();
    tbl_SerializeFromObject_TD_4381387_input.loadHost();
    Table tbl_JOIN_CROSS_TD_5166568_output("tbl_JOIN_CROSS_TD_5166568_output", 6100000, 3, "");
    tbl_JOIN_CROSS_TD_5166568_output.allocateHost();
    Table tbl_Aggregate_TD_5917431_output("tbl_Aggregate_TD_5917431_output", 6100000, 1, "");
    tbl_Aggregate_TD_5917431_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5669785_output("tbl_JOIN_INNER_TD_5669785_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5669785_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5481128_output("tbl_JOIN_INNER_TD_5481128_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_5481128_output.allocateHost();
    Table tbl_Filter_TD_5565333_output("tbl_Filter_TD_5565333_output", 6100000, 1, "");
    tbl_Filter_TD_5565333_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5469408_output("tbl_JOIN_INNER_TD_5469408_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5469408_output.allocateHost();
    Table tbl_Filter_TD_5997564_output("tbl_Filter_TD_5997564_output", 6100000, 1, "");
    tbl_Filter_TD_5997564_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5419162_input;
    tbl_SerializeFromObject_TD_5419162_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5419162_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_5419162_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5419162_input.allocateHost();
    tbl_SerializeFromObject_TD_5419162_input.loadHost();
    Table tbl_Filter_TD_5101797_output("tbl_Filter_TD_5101797_output", 6100000, 3, "");
    tbl_Filter_TD_5101797_output.allocateHost();
    Table tbl_Filter_TD_537235_output("tbl_Filter_TD_537235_output", 6100000, 1, "");
    tbl_Filter_TD_537235_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5149881_input;
    tbl_SerializeFromObject_TD_5149881_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5149881_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_5149881_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_5149881_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_5149881_input.allocateHost();
    tbl_SerializeFromObject_TD_5149881_input.loadHost();
    Table tbl_JOIN_CROSS_TD_6904405_output("tbl_JOIN_CROSS_TD_6904405_output", 6100000, 2, "");
    tbl_JOIN_CROSS_TD_6904405_output.allocateHost();
    Table tbl_Aggregate_TD_6738131_output("tbl_Aggregate_TD_6738131_output", 6100000, 1, "");
    tbl_Aggregate_TD_6738131_output.allocateHost();
    Table tbl_JOIN_INNER_TD_63565_output("tbl_JOIN_INNER_TD_63565_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_63565_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6312317_output("tbl_JOIN_INNER_TD_6312317_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_6312317_output.allocateHost();
    Table tbl_Filter_TD_6223171_output("tbl_Filter_TD_6223171_output", 6100000, 1, "");
    tbl_Filter_TD_6223171_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6786279_output("tbl_JOIN_INNER_TD_6786279_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6786279_output.allocateHost();
    Table tbl_Filter_TD_6871324_output("tbl_Filter_TD_6871324_output", 6100000, 1, "");
    tbl_Filter_TD_6871324_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6741266_input;
    tbl_SerializeFromObject_TD_6741266_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6741266_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_6741266_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6741266_input.allocateHost();
    tbl_SerializeFromObject_TD_6741266_input.loadHost();
    Table tbl_Filter_TD_6790029_output("tbl_Filter_TD_6790029_output", 6100000, 3, "");
    tbl_Filter_TD_6790029_output.allocateHost();
    Table tbl_Filter_TD_6187400_output("tbl_Filter_TD_6187400_output", 6100000, 1, "");
    tbl_Filter_TD_6187400_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6232882_input;
    tbl_SerializeFromObject_TD_6232882_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6232882_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_6232882_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_6232882_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_6232882_input.allocateHost();
    tbl_SerializeFromObject_TD_6232882_input.loadHost();
    Table tbl_SerializeFromObject_TD_6817913_input;
    tbl_SerializeFromObject_TD_6817913_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6817913_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_6817913_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_6817913_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_6817913_input.allocateHost();
    tbl_SerializeFromObject_TD_6817913_input.loadHost();
    Table tbl_SerializeFromObject_TD_6642400_input;
    tbl_SerializeFromObject_TD_6642400_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6642400_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_6642400_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_6642400_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_6642400_input.allocateHost();
    tbl_SerializeFromObject_TD_6642400_input.loadHost();
    Table tbl_Aggregate_TD_7743755_output("tbl_Aggregate_TD_7743755_output", 6100000, 1, "");
    tbl_Aggregate_TD_7743755_output.allocateHost();
    Table tbl_Aggregate_TD_7605546_output("tbl_Aggregate_TD_7605546_output", 6100000, 1, "");
    tbl_Aggregate_TD_7605546_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7368483_output("tbl_JOIN_INNER_TD_7368483_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7368483_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7797498_output("tbl_JOIN_INNER_TD_7797498_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_7797498_output.allocateHost();
    Table tbl_Filter_TD_7965975_output("tbl_Filter_TD_7965975_output", 6100000, 1, "");
    tbl_Filter_TD_7965975_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7335671_output("tbl_JOIN_INNER_TD_7335671_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_7335671_output.allocateHost();
    Table tbl_Filter_TD_7773277_output("tbl_Filter_TD_7773277_output", 6100000, 1, "");
    tbl_Filter_TD_7773277_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7227696_input;
    tbl_SerializeFromObject_TD_7227696_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7227696_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_7227696_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7227696_input.allocateHost();
    tbl_SerializeFromObject_TD_7227696_input.loadHost();
    Table tbl_Filter_TD_7689348_output("tbl_Filter_TD_7689348_output", 6100000, 3, "");
    tbl_Filter_TD_7689348_output.allocateHost();
    Table tbl_Filter_TD_7672300_output("tbl_Filter_TD_7672300_output", 6100000, 1, "");
    tbl_Filter_TD_7672300_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7319985_input;
    tbl_SerializeFromObject_TD_7319985_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7319985_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_7319985_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_7319985_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_7319985_input.allocateHost();
    tbl_SerializeFromObject_TD_7319985_input.loadHost();
    Table tbl_SerializeFromObject_TD_7263634_input;
    tbl_SerializeFromObject_TD_7263634_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7263634_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_7263634_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_7263634_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_7263634_input.allocateHost();
    tbl_SerializeFromObject_TD_7263634_input.loadHost();
    Table tbl_SerializeFromObject_TD_7554865_input;
    tbl_SerializeFromObject_TD_7554865_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7554865_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_7554865_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_7554865_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_7554865_input.allocateHost();
    tbl_SerializeFromObject_TD_7554865_input.loadHost();
    Table tbl_JOIN_INNER_TD_8130572_output("tbl_JOIN_INNER_TD_8130572_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_8130572_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8224750_output("tbl_JOIN_INNER_TD_8224750_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_8224750_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8363670_output("tbl_JOIN_INNER_TD_8363670_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_8363670_output.allocateHost();
    Table tbl_Filter_TD_8553917_output("tbl_Filter_TD_8553917_output", 6100000, 1, "");
    tbl_Filter_TD_8553917_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8880799_output("tbl_JOIN_INNER_TD_8880799_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_8880799_output.allocateHost();
    Table tbl_Filter_TD_840596_output("tbl_Filter_TD_840596_output", 6100000, 1, "");
    tbl_Filter_TD_840596_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8828266_input;
    tbl_SerializeFromObject_TD_8828266_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8828266_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_8828266_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8828266_input.allocateHost();
    tbl_SerializeFromObject_TD_8828266_input.loadHost();
    Table tbl_Filter_TD_8942777_output("tbl_Filter_TD_8942777_output", 6100000, 3, "");
    tbl_Filter_TD_8942777_output.allocateHost();
    Table tbl_Filter_TD_8198727_output("tbl_Filter_TD_8198727_output", 6100000, 1, "");
    tbl_Filter_TD_8198727_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8642610_input;
    tbl_SerializeFromObject_TD_8642610_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8642610_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_8642610_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_8642610_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_8642610_input.allocateHost();
    tbl_SerializeFromObject_TD_8642610_input.loadHost();
    Table tbl_SerializeFromObject_TD_861981_input;
    tbl_SerializeFromObject_TD_861981_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_861981_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_861981_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_861981_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_861981_input.allocateHost();
    tbl_SerializeFromObject_TD_861981_input.loadHost();
    Table tbl_SerializeFromObject_TD_8752314_input;
    tbl_SerializeFromObject_TD_8752314_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8752314_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_8752314_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_8752314_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_8752314_input.allocateHost();
    tbl_SerializeFromObject_TD_8752314_input.loadHost();
    Table tbl_JOIN_INNER_TD_9230185_output("tbl_JOIN_INNER_TD_9230185_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9230185_output.allocateHost();
    Table tbl_Filter_TD_967606_output("tbl_Filter_TD_967606_output", 6100000, 1, "");
    tbl_Filter_TD_967606_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9660563_output("tbl_JOIN_INNER_TD_9660563_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_9660563_output.allocateHost();
    Table tbl_Filter_TD_9275627_output("tbl_Filter_TD_9275627_output", 6100000, 1, "");
    tbl_Filter_TD_9275627_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9193223_output("tbl_JOIN_INNER_TD_9193223_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_9193223_output.allocateHost();
    Table tbl_Filter_TD_9266303_output("tbl_Filter_TD_9266303_output", 6100000, 1, "");
    tbl_Filter_TD_9266303_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9791265_input;
    tbl_SerializeFromObject_TD_9791265_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9791265_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_9791265_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9791265_input.allocateHost();
    tbl_SerializeFromObject_TD_9791265_input.loadHost();
    Table tbl_Filter_TD_9701390_output("tbl_Filter_TD_9701390_output", 6100000, 3, "");
    tbl_Filter_TD_9701390_output.allocateHost();
    Table tbl_Filter_TD_9421652_output("tbl_Filter_TD_9421652_output", 6100000, 1, "");
    tbl_Filter_TD_9421652_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9750472_input;
    tbl_SerializeFromObject_TD_9750472_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9750472_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_9750472_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_9750472_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_9750472_input.allocateHost();
    tbl_SerializeFromObject_TD_9750472_input.loadHost();
    Table tbl_SerializeFromObject_TD_9990647_input;
    tbl_SerializeFromObject_TD_9990647_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9990647_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_9990647_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_9990647_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_9990647_input.allocateHost();
    tbl_SerializeFromObject_TD_9990647_input.loadHost();
    Table tbl_SerializeFromObject_TD_9321461_input;
    tbl_SerializeFromObject_TD_9321461_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_9321461_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9321461_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_9321461_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_9321461_input.allocateHost();
    tbl_SerializeFromObject_TD_9321461_input.loadHost();
    Table tbl_JOIN_INNER_TD_10733464_output("tbl_JOIN_INNER_TD_10733464_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_10733464_output.allocateHost();
    Table tbl_Filter_TD_10371729_output("tbl_Filter_TD_10371729_output", 6100000, 1, "");
    tbl_Filter_TD_10371729_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10441367_input;
    tbl_SerializeFromObject_TD_10441367_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10441367_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10441367_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10441367_input.allocateHost();
    tbl_SerializeFromObject_TD_10441367_input.loadHost();
    Table tbl_JOIN_INNER_TD_10335705_output("tbl_JOIN_INNER_TD_10335705_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_10335705_output.allocateHost();
    Table tbl_Filter_TD_10984430_output("tbl_Filter_TD_10984430_output", 6100000, 1, "");
    tbl_Filter_TD_10984430_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10833322_input;
    tbl_SerializeFromObject_TD_10833322_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10833322_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_10833322_input.addCol("s_store_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_10833322_input.allocateHost();
    tbl_SerializeFromObject_TD_10833322_input.loadHost();
    Table tbl_Filter_TD_10566299_output("tbl_Filter_TD_10566299_output", 6100000, 3, "");
    tbl_Filter_TD_10566299_output.allocateHost();
    Table tbl_Filter_TD_10806884_output("tbl_Filter_TD_10806884_output", 6100000, 1, "");
    tbl_Filter_TD_10806884_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10993011_input;
    tbl_SerializeFromObject_TD_10993011_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10993011_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_10993011_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_10993011_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_10993011_input.allocateHost();
    tbl_SerializeFromObject_TD_10993011_input.loadHost();
    Table tbl_SerializeFromObject_TD_10589643_input;
    tbl_SerializeFromObject_TD_10589643_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10589643_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_10589643_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_10589643_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_10589643_input.allocateHost();
    tbl_SerializeFromObject_TD_10589643_input.loadHost();
    Table tbl_SerializeFromObject_TD_10224953_input;
    tbl_SerializeFromObject_TD_10224953_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_10224953_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_10224953_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_10224953_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_10224953_input.allocateHost();
    tbl_SerializeFromObject_TD_10224953_input.loadHost();
    Table tbl_Filter_TD_11504804_output("tbl_Filter_TD_11504804_output", 6100000, 3, "");
    tbl_Filter_TD_11504804_output.allocateHost();
    Table tbl_Filter_TD_11610447_output("tbl_Filter_TD_11610447_output", 6100000, 1, "");
    tbl_Filter_TD_11610447_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11206655_input;
    tbl_SerializeFromObject_TD_11206655_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11206655_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_11206655_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_11206655_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_11206655_input.allocateHost();
    tbl_SerializeFromObject_TD_11206655_input.loadHost();
    Table tbl_Filter_TD_11603312_output("tbl_Filter_TD_11603312_output", 6100000, 3, "");
    tbl_Filter_TD_11603312_output.allocateHost();
    Table tbl_Filter_TD_11590119_output("tbl_Filter_TD_11590119_output", 6100000, 1, "");
    tbl_Filter_TD_11590119_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11293133_input;
    tbl_SerializeFromObject_TD_11293133_input = Table("time_dim", time_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11293133_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_11293133_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_11293133_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_11293133_input.allocateHost();
    tbl_SerializeFromObject_TD_11293133_input.loadHost();
    Table tbl_SerializeFromObject_TD_11859636_input;
    tbl_SerializeFromObject_TD_11859636_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11859636_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_11859636_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_11859636_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_11859636_input.allocateHost();
    tbl_SerializeFromObject_TD_11859636_input.loadHost();
    Table tbl_SerializeFromObject_TD_11807552_input;
    tbl_SerializeFromObject_TD_11807552_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_11807552_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_11807552_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_11807552_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_11807552_input.allocateHost();
    tbl_SerializeFromObject_TD_11807552_input.loadHost();
    Table tbl_SerializeFromObject_TD_12712853_input;
    tbl_SerializeFromObject_TD_12712853_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12712853_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_12712853_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_12712853_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12712853_input.allocateHost();
    tbl_SerializeFromObject_TD_12712853_input.loadHost();
    Table tbl_SerializeFromObject_TD_12144814_input;
    tbl_SerializeFromObject_TD_12144814_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12144814_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12144814_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_12144814_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_12144814_input.allocateHost();
    tbl_SerializeFromObject_TD_12144814_input.loadHost();
    Table tbl_SerializeFromObject_TD_12790778_input;
    tbl_SerializeFromObject_TD_12790778_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12790778_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_12790778_input.addCol("ss_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_12790778_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_12790778_input.allocateHost();
    tbl_SerializeFromObject_TD_12790778_input.loadHost();
    Table tbl_SerializeFromObject_TD_12935560_input;
    tbl_SerializeFromObject_TD_12935560_input = Table("household_demographics", household_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_12935560_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_12935560_input.addCol("hd_dep_count", 4);
    tbl_SerializeFromObject_TD_12935560_input.addCol("hd_vehicle_count", 4);
    tbl_SerializeFromObject_TD_12935560_input.allocateHost();
    tbl_SerializeFromObject_TD_12935560_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    tbl_JOIN_INNER_TD_2330074_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3193411_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_3187202_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_3451200_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4574010_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4598724_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_448681_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_4327218_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_4249902_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5669785_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5481128_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5565333_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_5469408_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5997564_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_5101797_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_537235_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_63565_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6312317_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6223171_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_6786279_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6871324_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6790029_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_6187400_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7368483_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7797498_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7965975_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_7335671_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7773277_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7689348_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_7672300_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8130572_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8224750_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8363670_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8553917_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_8880799_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_840596_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8942777_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_8198727_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9230185_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_967606_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9660563_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9275627_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_9193223_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9266303_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9701390_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_9421652_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10733464_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10371729_output.allocateDevBuffer(context_h, 32);
    tbl_JOIN_INNER_TD_10335705_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10984430_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10566299_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_10806884_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11504804_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11610447_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11603312_output.allocateDevBuffer(context_h, 32);
    tbl_Filter_TD_11590119_output.allocateDevBuffer(context_h, 32);
    // ****************************** Config **************************** // 
    cfgCmd cfg_JOIN_INNER_TD_2330074_cmds;
    cfg_JOIN_INNER_TD_2330074_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_2330074_gqe_join (cfg_JOIN_INNER_TD_2330074_cmds.cmd);
    cfg_JOIN_INNER_TD_2330074_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3193411_cmds;
    cfg_JOIN_INNER_TD_3193411_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3193411_gqe_join (cfg_JOIN_INNER_TD_3193411_cmds.cmd);
    cfg_JOIN_INNER_TD_3193411_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_3187202_cmds;
    cfg_JOIN_INNER_TD_3187202_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_3187202_gqe_join (cfg_JOIN_INNER_TD_3187202_cmds.cmd);
    cfg_JOIN_INNER_TD_3187202_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4574010_cmds;
    cfg_JOIN_INNER_TD_4574010_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4574010_gqe_join (cfg_JOIN_INNER_TD_4574010_cmds.cmd);
    cfg_JOIN_INNER_TD_4574010_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4598724_cmds;
    cfg_JOIN_INNER_TD_4598724_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4598724_gqe_join (cfg_JOIN_INNER_TD_4598724_cmds.cmd);
    cfg_JOIN_INNER_TD_4598724_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_4327218_cmds;
    cfg_JOIN_INNER_TD_4327218_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_4327218_gqe_join (cfg_JOIN_INNER_TD_4327218_cmds.cmd);
    cfg_JOIN_INNER_TD_4327218_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5669785_cmds;
    cfg_JOIN_INNER_TD_5669785_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5669785_gqe_join (cfg_JOIN_INNER_TD_5669785_cmds.cmd);
    cfg_JOIN_INNER_TD_5669785_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5481128_cmds;
    cfg_JOIN_INNER_TD_5481128_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5481128_gqe_join (cfg_JOIN_INNER_TD_5481128_cmds.cmd);
    cfg_JOIN_INNER_TD_5481128_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_5469408_cmds;
    cfg_JOIN_INNER_TD_5469408_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_5469408_gqe_join (cfg_JOIN_INNER_TD_5469408_cmds.cmd);
    cfg_JOIN_INNER_TD_5469408_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_63565_cmds;
    cfg_JOIN_INNER_TD_63565_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_63565_gqe_join (cfg_JOIN_INNER_TD_63565_cmds.cmd);
    cfg_JOIN_INNER_TD_63565_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6312317_cmds;
    cfg_JOIN_INNER_TD_6312317_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6312317_gqe_join (cfg_JOIN_INNER_TD_6312317_cmds.cmd);
    cfg_JOIN_INNER_TD_6312317_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_6786279_cmds;
    cfg_JOIN_INNER_TD_6786279_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_6786279_gqe_join (cfg_JOIN_INNER_TD_6786279_cmds.cmd);
    cfg_JOIN_INNER_TD_6786279_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7368483_cmds;
    cfg_JOIN_INNER_TD_7368483_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7368483_gqe_join (cfg_JOIN_INNER_TD_7368483_cmds.cmd);
    cfg_JOIN_INNER_TD_7368483_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7797498_cmds;
    cfg_JOIN_INNER_TD_7797498_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7797498_gqe_join (cfg_JOIN_INNER_TD_7797498_cmds.cmd);
    cfg_JOIN_INNER_TD_7797498_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_7335671_cmds;
    cfg_JOIN_INNER_TD_7335671_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_7335671_gqe_join (cfg_JOIN_INNER_TD_7335671_cmds.cmd);
    cfg_JOIN_INNER_TD_7335671_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8130572_cmds;
    cfg_JOIN_INNER_TD_8130572_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8130572_gqe_join (cfg_JOIN_INNER_TD_8130572_cmds.cmd);
    cfg_JOIN_INNER_TD_8130572_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8224750_cmds;
    cfg_JOIN_INNER_TD_8224750_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8224750_gqe_join (cfg_JOIN_INNER_TD_8224750_cmds.cmd);
    cfg_JOIN_INNER_TD_8224750_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8363670_cmds;
    cfg_JOIN_INNER_TD_8363670_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8363670_gqe_join (cfg_JOIN_INNER_TD_8363670_cmds.cmd);
    cfg_JOIN_INNER_TD_8363670_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_8880799_cmds;
    cfg_JOIN_INNER_TD_8880799_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_8880799_gqe_join (cfg_JOIN_INNER_TD_8880799_cmds.cmd);
    cfg_JOIN_INNER_TD_8880799_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9230185_cmds;
    cfg_JOIN_INNER_TD_9230185_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9230185_gqe_join (cfg_JOIN_INNER_TD_9230185_cmds.cmd);
    cfg_JOIN_INNER_TD_9230185_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9660563_cmds;
    cfg_JOIN_INNER_TD_9660563_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9660563_gqe_join (cfg_JOIN_INNER_TD_9660563_cmds.cmd);
    cfg_JOIN_INNER_TD_9660563_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_9193223_cmds;
    cfg_JOIN_INNER_TD_9193223_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_9193223_gqe_join (cfg_JOIN_INNER_TD_9193223_cmds.cmd);
    cfg_JOIN_INNER_TD_9193223_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_10733464_cmds;
    cfg_JOIN_INNER_TD_10733464_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10733464_gqe_join (cfg_JOIN_INNER_TD_10733464_cmds.cmd);
    cfg_JOIN_INNER_TD_10733464_cmds.allocateDevBuffer(context_h, 32);
    cfgCmd cfg_JOIN_INNER_TD_10335705_cmds;
    cfg_JOIN_INNER_TD_10335705_cmds.allocateHost();
    get_cfg_dat_JOIN_INNER_TD_10335705_gqe_join (cfg_JOIN_INNER_TD_10335705_cmds.cmd);
    cfg_JOIN_INNER_TD_10335705_cmds.allocateDevBuffer(context_h, 32);
    // *************************** Kernel Setup ************************* // 
    bufferTmp buftmp_h(context_h); 
    buftmp_h.initBuffer(q_h); 
    std::cout << std::endl; 
    krnlEngine krnl_JOIN_INNER_TD_2330074;
    krnl_JOIN_INNER_TD_2330074 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_2330074.setup(tbl_JOIN_INNER_TD_3187202_output, tbl_Filter_TD_3451200_output, tbl_JOIN_INNER_TD_2330074_output, cfg_JOIN_INNER_TD_2330074_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3193411;
    krnl_JOIN_INNER_TD_3193411 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3193411.setup(tbl_JOIN_INNER_TD_4598724_output, tbl_Filter_TD_448681_output, tbl_JOIN_INNER_TD_3193411_output, cfg_JOIN_INNER_TD_3193411_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_3187202;
    krnl_JOIN_INNER_TD_3187202 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_3187202.setup(tbl_JOIN_INNER_TD_4327218_output, tbl_Filter_TD_4249902_output, tbl_JOIN_INNER_TD_3187202_output, cfg_JOIN_INNER_TD_3187202_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4574010;
    krnl_JOIN_INNER_TD_4574010 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4574010.setup(tbl_JOIN_INNER_TD_5481128_output, tbl_Filter_TD_5565333_output, tbl_JOIN_INNER_TD_4574010_output, cfg_JOIN_INNER_TD_4574010_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4598724;
    krnl_JOIN_INNER_TD_4598724 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4598724.setup(tbl_JOIN_INNER_TD_5469408_output, tbl_Filter_TD_5997564_output, tbl_JOIN_INNER_TD_4598724_output, cfg_JOIN_INNER_TD_4598724_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_4327218;
    krnl_JOIN_INNER_TD_4327218 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_4327218.setup(tbl_Filter_TD_5101797_output, tbl_Filter_TD_537235_output, tbl_JOIN_INNER_TD_4327218_output, cfg_JOIN_INNER_TD_4327218_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5669785;
    krnl_JOIN_INNER_TD_5669785 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5669785.setup(tbl_JOIN_INNER_TD_6312317_output, tbl_Filter_TD_6223171_output, tbl_JOIN_INNER_TD_5669785_output, cfg_JOIN_INNER_TD_5669785_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5481128;
    krnl_JOIN_INNER_TD_5481128 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5481128.setup(tbl_JOIN_INNER_TD_6786279_output, tbl_Filter_TD_6871324_output, tbl_JOIN_INNER_TD_5481128_output, cfg_JOIN_INNER_TD_5481128_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_5469408;
    krnl_JOIN_INNER_TD_5469408 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_5469408.setup(tbl_Filter_TD_6790029_output, tbl_Filter_TD_6187400_output, tbl_JOIN_INNER_TD_5469408_output, cfg_JOIN_INNER_TD_5469408_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_63565;
    krnl_JOIN_INNER_TD_63565 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_63565.setup(tbl_JOIN_INNER_TD_7797498_output, tbl_Filter_TD_7965975_output, tbl_JOIN_INNER_TD_63565_output, cfg_JOIN_INNER_TD_63565_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6312317;
    krnl_JOIN_INNER_TD_6312317 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6312317.setup(tbl_JOIN_INNER_TD_7335671_output, tbl_Filter_TD_7773277_output, tbl_JOIN_INNER_TD_6312317_output, cfg_JOIN_INNER_TD_6312317_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_6786279;
    krnl_JOIN_INNER_TD_6786279 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_6786279.setup(tbl_Filter_TD_7689348_output, tbl_Filter_TD_7672300_output, tbl_JOIN_INNER_TD_6786279_output, cfg_JOIN_INNER_TD_6786279_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7368483;
    krnl_JOIN_INNER_TD_7368483 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7368483.setup(tbl_JOIN_INNER_TD_8363670_output, tbl_Filter_TD_8553917_output, tbl_JOIN_INNER_TD_7368483_output, cfg_JOIN_INNER_TD_7368483_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7797498;
    krnl_JOIN_INNER_TD_7797498 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7797498.setup(tbl_JOIN_INNER_TD_8880799_output, tbl_Filter_TD_840596_output, tbl_JOIN_INNER_TD_7797498_output, cfg_JOIN_INNER_TD_7797498_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_7335671;
    krnl_JOIN_INNER_TD_7335671 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_7335671.setup(tbl_Filter_TD_8942777_output, tbl_Filter_TD_8198727_output, tbl_JOIN_INNER_TD_7335671_output, cfg_JOIN_INNER_TD_7335671_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8130572;
    krnl_JOIN_INNER_TD_8130572 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8130572.setup(tbl_JOIN_INNER_TD_9230185_output, tbl_Filter_TD_967606_output, tbl_JOIN_INNER_TD_8130572_output, cfg_JOIN_INNER_TD_8130572_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8224750;
    krnl_JOIN_INNER_TD_8224750 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8224750.setup(tbl_JOIN_INNER_TD_9660563_output, tbl_Filter_TD_9275627_output, tbl_JOIN_INNER_TD_8224750_output, cfg_JOIN_INNER_TD_8224750_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8363670;
    krnl_JOIN_INNER_TD_8363670 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8363670.setup(tbl_JOIN_INNER_TD_9193223_output, tbl_Filter_TD_9266303_output, tbl_JOIN_INNER_TD_8363670_output, cfg_JOIN_INNER_TD_8363670_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_8880799;
    krnl_JOIN_INNER_TD_8880799 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_8880799.setup(tbl_Filter_TD_9701390_output, tbl_Filter_TD_9421652_output, tbl_JOIN_INNER_TD_8880799_output, cfg_JOIN_INNER_TD_8880799_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9230185;
    krnl_JOIN_INNER_TD_9230185 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9230185.setup(tbl_JOIN_INNER_TD_10733464_output, tbl_Filter_TD_10371729_output, tbl_JOIN_INNER_TD_9230185_output, cfg_JOIN_INNER_TD_9230185_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9660563;
    krnl_JOIN_INNER_TD_9660563 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9660563.setup(tbl_JOIN_INNER_TD_10335705_output, tbl_Filter_TD_10984430_output, tbl_JOIN_INNER_TD_9660563_output, cfg_JOIN_INNER_TD_9660563_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_9193223;
    krnl_JOIN_INNER_TD_9193223 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_9193223.setup(tbl_Filter_TD_10566299_output, tbl_Filter_TD_10806884_output, tbl_JOIN_INNER_TD_9193223_output, cfg_JOIN_INNER_TD_9193223_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_10733464;
    krnl_JOIN_INNER_TD_10733464 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10733464.setup(tbl_Filter_TD_11504804_output, tbl_Filter_TD_11610447_output, tbl_JOIN_INNER_TD_10733464_output, cfg_JOIN_INNER_TD_10733464_cmds, buftmp_h);
    krnlEngine krnl_JOIN_INNER_TD_10335705;
    krnl_JOIN_INNER_TD_10335705 = krnlEngine(program_h, q_h, "gqeJoin");
    krnl_JOIN_INNER_TD_10335705.setup(tbl_Filter_TD_11603312_output, tbl_Filter_TD_11590119_output, tbl_JOIN_INNER_TD_10335705_output, cfg_JOIN_INNER_TD_10335705_cmds, buftmp_h);
    // ************************** Transfer Engine *********************** // 
    transEngine trans_JOIN_INNER_TD_2330074;
    trans_JOIN_INNER_TD_2330074.setq(q_h);
    trans_JOIN_INNER_TD_2330074.add(&(cfg_JOIN_INNER_TD_2330074_cmds));
    transEngine trans_JOIN_INNER_TD_2330074_out;
    trans_JOIN_INNER_TD_2330074_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3193411;
    trans_JOIN_INNER_TD_3193411.setq(q_h);
    trans_JOIN_INNER_TD_3193411.add(&(cfg_JOIN_INNER_TD_3193411_cmds));
    transEngine trans_JOIN_INNER_TD_3193411_out;
    trans_JOIN_INNER_TD_3193411_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_3187202;
    trans_JOIN_INNER_TD_3187202.setq(q_h);
    trans_JOIN_INNER_TD_3187202.add(&(cfg_JOIN_INNER_TD_3187202_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4574010;
    trans_JOIN_INNER_TD_4574010.setq(q_h);
    trans_JOIN_INNER_TD_4574010.add(&(cfg_JOIN_INNER_TD_4574010_cmds));
    transEngine trans_JOIN_INNER_TD_4574010_out;
    trans_JOIN_INNER_TD_4574010_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4598724;
    trans_JOIN_INNER_TD_4598724.setq(q_h);
    trans_JOIN_INNER_TD_4598724.add(&(cfg_JOIN_INNER_TD_4598724_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_4327218;
    trans_JOIN_INNER_TD_4327218.setq(q_h);
    trans_JOIN_INNER_TD_4327218.add(&(cfg_JOIN_INNER_TD_4327218_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5669785;
    trans_JOIN_INNER_TD_5669785.setq(q_h);
    trans_JOIN_INNER_TD_5669785.add(&(cfg_JOIN_INNER_TD_5669785_cmds));
    transEngine trans_JOIN_INNER_TD_5669785_out;
    trans_JOIN_INNER_TD_5669785_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5481128;
    trans_JOIN_INNER_TD_5481128.setq(q_h);
    trans_JOIN_INNER_TD_5481128.add(&(cfg_JOIN_INNER_TD_5481128_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_5469408;
    trans_JOIN_INNER_TD_5469408.setq(q_h);
    trans_JOIN_INNER_TD_5469408.add(&(cfg_JOIN_INNER_TD_5469408_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_63565;
    trans_JOIN_INNER_TD_63565.setq(q_h);
    trans_JOIN_INNER_TD_63565.add(&(cfg_JOIN_INNER_TD_63565_cmds));
    transEngine trans_JOIN_INNER_TD_63565_out;
    trans_JOIN_INNER_TD_63565_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6312317;
    trans_JOIN_INNER_TD_6312317.setq(q_h);
    trans_JOIN_INNER_TD_6312317.add(&(cfg_JOIN_INNER_TD_6312317_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_6786279;
    trans_JOIN_INNER_TD_6786279.setq(q_h);
    trans_JOIN_INNER_TD_6786279.add(&(cfg_JOIN_INNER_TD_6786279_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7368483;
    trans_JOIN_INNER_TD_7368483.setq(q_h);
    trans_JOIN_INNER_TD_7368483.add(&(cfg_JOIN_INNER_TD_7368483_cmds));
    transEngine trans_JOIN_INNER_TD_7368483_out;
    trans_JOIN_INNER_TD_7368483_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7797498;
    trans_JOIN_INNER_TD_7797498.setq(q_h);
    trans_JOIN_INNER_TD_7797498.add(&(cfg_JOIN_INNER_TD_7797498_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_7335671;
    trans_JOIN_INNER_TD_7335671.setq(q_h);
    trans_JOIN_INNER_TD_7335671.add(&(cfg_JOIN_INNER_TD_7335671_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8130572;
    trans_JOIN_INNER_TD_8130572.setq(q_h);
    trans_JOIN_INNER_TD_8130572.add(&(cfg_JOIN_INNER_TD_8130572_cmds));
    transEngine trans_JOIN_INNER_TD_8130572_out;
    trans_JOIN_INNER_TD_8130572_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8224750;
    trans_JOIN_INNER_TD_8224750.setq(q_h);
    trans_JOIN_INNER_TD_8224750.add(&(cfg_JOIN_INNER_TD_8224750_cmds));
    transEngine trans_JOIN_INNER_TD_8224750_out;
    trans_JOIN_INNER_TD_8224750_out.setq(q_h);
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8363670;
    trans_JOIN_INNER_TD_8363670.setq(q_h);
    trans_JOIN_INNER_TD_8363670.add(&(cfg_JOIN_INNER_TD_8363670_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_8880799;
    trans_JOIN_INNER_TD_8880799.setq(q_h);
    trans_JOIN_INNER_TD_8880799.add(&(cfg_JOIN_INNER_TD_8880799_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9230185;
    trans_JOIN_INNER_TD_9230185.setq(q_h);
    trans_JOIN_INNER_TD_9230185.add(&(cfg_JOIN_INNER_TD_9230185_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9660563;
    trans_JOIN_INNER_TD_9660563.setq(q_h);
    trans_JOIN_INNER_TD_9660563.add(&(cfg_JOIN_INNER_TD_9660563_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_9193223;
    trans_JOIN_INNER_TD_9193223.setq(q_h);
    trans_JOIN_INNER_TD_9193223.add(&(cfg_JOIN_INNER_TD_9193223_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_10733464;
    trans_JOIN_INNER_TD_10733464.setq(q_h);
    trans_JOIN_INNER_TD_10733464.add(&(cfg_JOIN_INNER_TD_10733464_cmds));
    q_h.finish();
    transEngine trans_JOIN_INNER_TD_10335705;
    trans_JOIN_INNER_TD_10335705.setq(q_h);
    trans_JOIN_INNER_TD_10335705.add(&(cfg_JOIN_INNER_TD_10335705_cmds));
    q_h.finish();
    // ****************************** Events **************************** // 
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_2330074;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_2330074;
    std::vector<cl::Event> events_JOIN_INNER_TD_2330074;
    events_h2d_wr_JOIN_INNER_TD_2330074.resize(1);
    events_d2h_rd_JOIN_INNER_TD_2330074.resize(1);
    events_JOIN_INNER_TD_2330074.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_2330074;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_2330074;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3193411;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3193411;
    std::vector<cl::Event> events_JOIN_INNER_TD_3193411;
    events_h2d_wr_JOIN_INNER_TD_3193411.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3193411.resize(1);
    events_JOIN_INNER_TD_3193411.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3193411;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3193411;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_3187202;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_3187202;
    std::vector<cl::Event> events_JOIN_INNER_TD_3187202;
    events_h2d_wr_JOIN_INNER_TD_3187202.resize(1);
    events_d2h_rd_JOIN_INNER_TD_3187202.resize(1);
    events_JOIN_INNER_TD_3187202.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_3187202;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_3187202;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4574010;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4574010;
    std::vector<cl::Event> events_JOIN_INNER_TD_4574010;
    events_h2d_wr_JOIN_INNER_TD_4574010.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4574010.resize(1);
    events_JOIN_INNER_TD_4574010.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4574010;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4574010;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4598724;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4598724;
    std::vector<cl::Event> events_JOIN_INNER_TD_4598724;
    events_h2d_wr_JOIN_INNER_TD_4598724.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4598724.resize(1);
    events_JOIN_INNER_TD_4598724.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4598724;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4598724;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_4327218;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_4327218;
    std::vector<cl::Event> events_JOIN_INNER_TD_4327218;
    events_h2d_wr_JOIN_INNER_TD_4327218.resize(1);
    events_d2h_rd_JOIN_INNER_TD_4327218.resize(1);
    events_JOIN_INNER_TD_4327218.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_4327218;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_4327218;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5669785;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5669785;
    std::vector<cl::Event> events_JOIN_INNER_TD_5669785;
    events_h2d_wr_JOIN_INNER_TD_5669785.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5669785.resize(1);
    events_JOIN_INNER_TD_5669785.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5669785;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5669785;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5481128;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5481128;
    std::vector<cl::Event> events_JOIN_INNER_TD_5481128;
    events_h2d_wr_JOIN_INNER_TD_5481128.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5481128.resize(1);
    events_JOIN_INNER_TD_5481128.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5481128;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5481128;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_5469408;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_5469408;
    std::vector<cl::Event> events_JOIN_INNER_TD_5469408;
    events_h2d_wr_JOIN_INNER_TD_5469408.resize(1);
    events_d2h_rd_JOIN_INNER_TD_5469408.resize(1);
    events_JOIN_INNER_TD_5469408.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_5469408;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_5469408;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_63565;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_63565;
    std::vector<cl::Event> events_JOIN_INNER_TD_63565;
    events_h2d_wr_JOIN_INNER_TD_63565.resize(1);
    events_d2h_rd_JOIN_INNER_TD_63565.resize(1);
    events_JOIN_INNER_TD_63565.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_63565;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_63565;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6312317;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6312317;
    std::vector<cl::Event> events_JOIN_INNER_TD_6312317;
    events_h2d_wr_JOIN_INNER_TD_6312317.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6312317.resize(1);
    events_JOIN_INNER_TD_6312317.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6312317;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6312317;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_6786279;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_6786279;
    std::vector<cl::Event> events_JOIN_INNER_TD_6786279;
    events_h2d_wr_JOIN_INNER_TD_6786279.resize(1);
    events_d2h_rd_JOIN_INNER_TD_6786279.resize(1);
    events_JOIN_INNER_TD_6786279.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_6786279;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_6786279;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7368483;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7368483;
    std::vector<cl::Event> events_JOIN_INNER_TD_7368483;
    events_h2d_wr_JOIN_INNER_TD_7368483.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7368483.resize(1);
    events_JOIN_INNER_TD_7368483.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7368483;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7368483;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7797498;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7797498;
    std::vector<cl::Event> events_JOIN_INNER_TD_7797498;
    events_h2d_wr_JOIN_INNER_TD_7797498.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7797498.resize(1);
    events_JOIN_INNER_TD_7797498.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7797498;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7797498;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_7335671;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_7335671;
    std::vector<cl::Event> events_JOIN_INNER_TD_7335671;
    events_h2d_wr_JOIN_INNER_TD_7335671.resize(1);
    events_d2h_rd_JOIN_INNER_TD_7335671.resize(1);
    events_JOIN_INNER_TD_7335671.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_7335671;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_7335671;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8130572;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8130572;
    std::vector<cl::Event> events_JOIN_INNER_TD_8130572;
    events_h2d_wr_JOIN_INNER_TD_8130572.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8130572.resize(1);
    events_JOIN_INNER_TD_8130572.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8130572;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8130572;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8224750;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8224750;
    std::vector<cl::Event> events_JOIN_INNER_TD_8224750;
    events_h2d_wr_JOIN_INNER_TD_8224750.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8224750.resize(1);
    events_JOIN_INNER_TD_8224750.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8224750;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8224750;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8363670;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8363670;
    std::vector<cl::Event> events_JOIN_INNER_TD_8363670;
    events_h2d_wr_JOIN_INNER_TD_8363670.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8363670.resize(1);
    events_JOIN_INNER_TD_8363670.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8363670;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8363670;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_8880799;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_8880799;
    std::vector<cl::Event> events_JOIN_INNER_TD_8880799;
    events_h2d_wr_JOIN_INNER_TD_8880799.resize(1);
    events_d2h_rd_JOIN_INNER_TD_8880799.resize(1);
    events_JOIN_INNER_TD_8880799.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_8880799;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_8880799;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9230185;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9230185;
    std::vector<cl::Event> events_JOIN_INNER_TD_9230185;
    events_h2d_wr_JOIN_INNER_TD_9230185.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9230185.resize(1);
    events_JOIN_INNER_TD_9230185.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9230185;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9230185;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9660563;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9660563;
    std::vector<cl::Event> events_JOIN_INNER_TD_9660563;
    events_h2d_wr_JOIN_INNER_TD_9660563.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9660563.resize(1);
    events_JOIN_INNER_TD_9660563.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9660563;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9660563;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_9193223;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_9193223;
    std::vector<cl::Event> events_JOIN_INNER_TD_9193223;
    events_h2d_wr_JOIN_INNER_TD_9193223.resize(1);
    events_d2h_rd_JOIN_INNER_TD_9193223.resize(1);
    events_JOIN_INNER_TD_9193223.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_9193223;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_9193223;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10733464;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10733464;
    std::vector<cl::Event> events_JOIN_INNER_TD_10733464;
    events_h2d_wr_JOIN_INNER_TD_10733464.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10733464.resize(1);
    events_JOIN_INNER_TD_10733464.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10733464;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10733464;
    std::vector<cl::Event> events_h2d_wr_JOIN_INNER_TD_10335705;
    std::vector<cl::Event> events_d2h_rd_JOIN_INNER_TD_10335705;
    std::vector<cl::Event> events_JOIN_INNER_TD_10335705;
    events_h2d_wr_JOIN_INNER_TD_10335705.resize(1);
    events_d2h_rd_JOIN_INNER_TD_10335705.resize(1);
    events_JOIN_INNER_TD_10335705.resize(1);
    std::vector<cl::Event> events_grp_JOIN_INNER_TD_10335705;
    std::vector<cl::Event> prev_events_grp_JOIN_INNER_TD_10335705;
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_11_86730_s, tv_r_Filter_11_86730_e;
    gettimeofday(&tv_r_Filter_11_86730_s, 0);
    SW_Filter_TD_11590119(tbl_SerializeFromObject_TD_12935560_input, tbl_Filter_TD_11590119_output);
    gettimeofday(&tv_r_Filter_11_86730_e, 0);

    struct timeval tv_r_Filter_11_396710_s, tv_r_Filter_11_396710_e;
    gettimeofday(&tv_r_Filter_11_396710_s, 0);
    SW_Filter_TD_11603312(tbl_SerializeFromObject_TD_12790778_input, tbl_Filter_TD_11603312_output);
    gettimeofday(&tv_r_Filter_11_396710_e, 0);

    struct timeval tv_r_Filter_11_664269_s, tv_r_Filter_11_664269_e;
    gettimeofday(&tv_r_Filter_11_664269_s, 0);
    SW_Filter_TD_11610447(tbl_SerializeFromObject_TD_12144814_input, tbl_Filter_TD_11610447_output);
    gettimeofday(&tv_r_Filter_11_664269_e, 0);

    struct timeval tv_r_Filter_11_547841_s, tv_r_Filter_11_547841_e;
    gettimeofday(&tv_r_Filter_11_547841_s, 0);
    SW_Filter_TD_11504804(tbl_SerializeFromObject_TD_12712853_input, tbl_Filter_TD_11504804_output);
    gettimeofday(&tv_r_Filter_11_547841_e, 0);

    struct timeval tv_r_Filter_10_472040_s, tv_r_Filter_10_472040_e;
    gettimeofday(&tv_r_Filter_10_472040_s, 0);
    SW_Filter_TD_10806884(tbl_SerializeFromObject_TD_11807552_input, tbl_Filter_TD_10806884_output);
    gettimeofday(&tv_r_Filter_10_472040_e, 0);

    struct timeval tv_r_Filter_10_479967_s, tv_r_Filter_10_479967_e;
    gettimeofday(&tv_r_Filter_10_479967_s, 0);
    SW_Filter_TD_10566299(tbl_SerializeFromObject_TD_11859636_input, tbl_Filter_TD_10566299_output);
    gettimeofday(&tv_r_Filter_10_479967_e, 0);

    struct timeval tv_r_Filter_10_972907_s, tv_r_Filter_10_972907_e;
    gettimeofday(&tv_r_Filter_10_972907_s, 0);
    SW_Filter_TD_10984430(tbl_SerializeFromObject_TD_11293133_input, tbl_Filter_TD_10984430_output);
    gettimeofday(&tv_r_Filter_10_972907_e, 0);

    struct timeval tv_r_JOIN_INNER_10_45268_s, tv_r_JOIN_INNER_10_45268_e;
    gettimeofday(&tv_r_JOIN_INNER_10_45268_s, 0);
    trans_JOIN_INNER_TD_10335705.add(&(tbl_Filter_TD_11603312_output));
    trans_JOIN_INNER_TD_10335705.add(&(tbl_Filter_TD_11590119_output));
    trans_JOIN_INNER_TD_10335705.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10335705), &(events_h2d_wr_JOIN_INNER_TD_10335705[0]));
    events_grp_JOIN_INNER_TD_10335705.push_back(events_h2d_wr_JOIN_INNER_TD_10335705[0]);
    krnl_JOIN_INNER_TD_10335705.run(0, &(events_grp_JOIN_INNER_TD_10335705), &(events_JOIN_INNER_TD_10335705[0]));
    gettimeofday(&tv_r_JOIN_INNER_10_45268_e, 0);

    struct timeval tv_r_Filter_10_941898_s, tv_r_Filter_10_941898_e;
    gettimeofday(&tv_r_Filter_10_941898_s, 0);
    SW_Filter_TD_10371729(tbl_SerializeFromObject_TD_11206655_input, tbl_Filter_TD_10371729_output);
    gettimeofday(&tv_r_Filter_10_941898_e, 0);

    struct timeval tv_r_JOIN_INNER_10_229871_s, tv_r_JOIN_INNER_10_229871_e;
    gettimeofday(&tv_r_JOIN_INNER_10_229871_s, 0);
    trans_JOIN_INNER_TD_10733464.add(&(tbl_Filter_TD_11504804_output));
    trans_JOIN_INNER_TD_10733464.add(&(tbl_Filter_TD_11610447_output));
    trans_JOIN_INNER_TD_10733464.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_10733464), &(events_h2d_wr_JOIN_INNER_TD_10733464[0]));
    events_grp_JOIN_INNER_TD_10733464.push_back(events_h2d_wr_JOIN_INNER_TD_10733464[0]);
    krnl_JOIN_INNER_TD_10733464.run(0, &(events_grp_JOIN_INNER_TD_10733464), &(events_JOIN_INNER_TD_10733464[0]));
    gettimeofday(&tv_r_JOIN_INNER_10_229871_e, 0);

    struct timeval tv_r_Filter_9_498366_s, tv_r_Filter_9_498366_e;
    gettimeofday(&tv_r_Filter_9_498366_s, 0);
    SW_Filter_TD_9421652(tbl_SerializeFromObject_TD_10224953_input, tbl_Filter_TD_9421652_output);
    gettimeofday(&tv_r_Filter_9_498366_e, 0);

    struct timeval tv_r_Filter_9_802265_s, tv_r_Filter_9_802265_e;
    gettimeofday(&tv_r_Filter_9_802265_s, 0);
    SW_Filter_TD_9701390(tbl_SerializeFromObject_TD_10589643_input, tbl_Filter_TD_9701390_output);
    gettimeofday(&tv_r_Filter_9_802265_e, 0);

    struct timeval tv_r_Filter_9_730804_s, tv_r_Filter_9_730804_e;
    gettimeofday(&tv_r_Filter_9_730804_s, 0);
    SW_Filter_TD_9266303(tbl_SerializeFromObject_TD_10993011_input, tbl_Filter_TD_9266303_output);
    gettimeofday(&tv_r_Filter_9_730804_e, 0);

    struct timeval tv_r_JOIN_INNER_9_504656_s, tv_r_JOIN_INNER_9_504656_e;
    gettimeofday(&tv_r_JOIN_INNER_9_504656_s, 0);
    trans_JOIN_INNER_TD_9193223.add(&(tbl_Filter_TD_10566299_output));
    trans_JOIN_INNER_TD_9193223.add(&(tbl_Filter_TD_10806884_output));
    trans_JOIN_INNER_TD_9193223.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9193223), &(events_h2d_wr_JOIN_INNER_TD_9193223[0]));
    events_grp_JOIN_INNER_TD_9193223.push_back(events_h2d_wr_JOIN_INNER_TD_9193223[0]);
    krnl_JOIN_INNER_TD_9193223.run(0, &(events_grp_JOIN_INNER_TD_9193223), &(events_JOIN_INNER_TD_9193223[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_504656_e, 0);

    struct timeval tv_r_Filter_9_504206_s, tv_r_Filter_9_504206_e;
    gettimeofday(&tv_r_Filter_9_504206_s, 0);
    SW_Filter_TD_9275627(tbl_SerializeFromObject_TD_10833322_input, tbl_Filter_TD_9275627_output);
    gettimeofday(&tv_r_Filter_9_504206_e, 0);

    struct timeval tv_r_JOIN_INNER_9_776633_s, tv_r_JOIN_INNER_9_776633_e;
    gettimeofday(&tv_r_JOIN_INNER_9_776633_s, 0);
    prev_events_grp_JOIN_INNER_TD_9660563.push_back(events_h2d_wr_JOIN_INNER_TD_10335705[0]);
    trans_JOIN_INNER_TD_9660563.add(&(tbl_Filter_TD_10984430_output));
    trans_JOIN_INNER_TD_9660563.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9660563), &(events_h2d_wr_JOIN_INNER_TD_9660563[0]));
    events_grp_JOIN_INNER_TD_9660563.push_back(events_h2d_wr_JOIN_INNER_TD_9660563[0]);
    events_grp_JOIN_INNER_TD_9660563.push_back(events_JOIN_INNER_TD_10335705[0]);
    krnl_JOIN_INNER_TD_9660563.run(0, &(events_grp_JOIN_INNER_TD_9660563), &(events_JOIN_INNER_TD_9660563[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_776633_e, 0);

    struct timeval tv_r_Filter_9_312097_s, tv_r_Filter_9_312097_e;
    gettimeofday(&tv_r_Filter_9_312097_s, 0);
    SW_Filter_TD_967606(tbl_SerializeFromObject_TD_10441367_input, tbl_Filter_TD_967606_output);
    gettimeofday(&tv_r_Filter_9_312097_e, 0);

    struct timeval tv_r_JOIN_INNER_9_402459_s, tv_r_JOIN_INNER_9_402459_e;
    gettimeofday(&tv_r_JOIN_INNER_9_402459_s, 0);
    prev_events_grp_JOIN_INNER_TD_9230185.push_back(events_h2d_wr_JOIN_INNER_TD_10733464[0]);
    trans_JOIN_INNER_TD_9230185.add(&(tbl_Filter_TD_10371729_output));
    trans_JOIN_INNER_TD_9230185.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_9230185), &(events_h2d_wr_JOIN_INNER_TD_9230185[0]));
    events_grp_JOIN_INNER_TD_9230185.push_back(events_h2d_wr_JOIN_INNER_TD_9230185[0]);
    events_grp_JOIN_INNER_TD_9230185.push_back(events_JOIN_INNER_TD_10733464[0]);
    krnl_JOIN_INNER_TD_9230185.run(0, &(events_grp_JOIN_INNER_TD_9230185), &(events_JOIN_INNER_TD_9230185[0]));
    gettimeofday(&tv_r_JOIN_INNER_9_402459_e, 0);

    struct timeval tv_r_Filter_8_192442_s, tv_r_Filter_8_192442_e;
    gettimeofday(&tv_r_Filter_8_192442_s, 0);
    SW_Filter_TD_8198727(tbl_SerializeFromObject_TD_9321461_input, tbl_Filter_TD_8198727_output);
    gettimeofday(&tv_r_Filter_8_192442_e, 0);

    struct timeval tv_r_Filter_8_637876_s, tv_r_Filter_8_637876_e;
    gettimeofday(&tv_r_Filter_8_637876_s, 0);
    SW_Filter_TD_8942777(tbl_SerializeFromObject_TD_9990647_input, tbl_Filter_TD_8942777_output);
    gettimeofday(&tv_r_Filter_8_637876_e, 0);

    struct timeval tv_r_Filter_8_267572_s, tv_r_Filter_8_267572_e;
    gettimeofday(&tv_r_Filter_8_267572_s, 0);
    SW_Filter_TD_840596(tbl_SerializeFromObject_TD_9750472_input, tbl_Filter_TD_840596_output);
    gettimeofday(&tv_r_Filter_8_267572_e, 0);

    struct timeval tv_r_JOIN_INNER_8_817535_s, tv_r_JOIN_INNER_8_817535_e;
    gettimeofday(&tv_r_JOIN_INNER_8_817535_s, 0);
    trans_JOIN_INNER_TD_8880799.add(&(tbl_Filter_TD_9701390_output));
    trans_JOIN_INNER_TD_8880799.add(&(tbl_Filter_TD_9421652_output));
    trans_JOIN_INNER_TD_8880799.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8880799), &(events_h2d_wr_JOIN_INNER_TD_8880799[0]));
    events_grp_JOIN_INNER_TD_8880799.push_back(events_h2d_wr_JOIN_INNER_TD_8880799[0]);
    krnl_JOIN_INNER_TD_8880799.run(0, &(events_grp_JOIN_INNER_TD_8880799), &(events_JOIN_INNER_TD_8880799[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_817535_e, 0);

    struct timeval tv_r_Filter_8_549128_s, tv_r_Filter_8_549128_e;
    gettimeofday(&tv_r_Filter_8_549128_s, 0);
    SW_Filter_TD_8553917(tbl_SerializeFromObject_TD_9791265_input, tbl_Filter_TD_8553917_output);
    gettimeofday(&tv_r_Filter_8_549128_e, 0);

    struct timeval tv_r_JOIN_INNER_8_245473_s, tv_r_JOIN_INNER_8_245473_e;
    gettimeofday(&tv_r_JOIN_INNER_8_245473_s, 0);
    prev_events_grp_JOIN_INNER_TD_8363670.push_back(events_h2d_wr_JOIN_INNER_TD_9193223[0]);
    trans_JOIN_INNER_TD_8363670.add(&(tbl_Filter_TD_9266303_output));
    trans_JOIN_INNER_TD_8363670.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8363670), &(events_h2d_wr_JOIN_INNER_TD_8363670[0]));
    events_grp_JOIN_INNER_TD_8363670.push_back(events_h2d_wr_JOIN_INNER_TD_8363670[0]);
    events_grp_JOIN_INNER_TD_8363670.push_back(events_JOIN_INNER_TD_9193223[0]);
    krnl_JOIN_INNER_TD_8363670.run(0, &(events_grp_JOIN_INNER_TD_8363670), &(events_JOIN_INNER_TD_8363670[0]));
    gettimeofday(&tv_r_JOIN_INNER_8_245473_e, 0);

    struct timeval tv_r_JOIN_INNER_8_882455_s, tv_r_JOIN_INNER_8_882455_e;
    gettimeofday(&tv_r_JOIN_INNER_8_882455_s, 0);
    prev_events_grp_JOIN_INNER_TD_8224750.push_back(events_h2d_wr_JOIN_INNER_TD_9660563[0]);
    trans_JOIN_INNER_TD_8224750.add(&(tbl_Filter_TD_9275627_output));
    trans_JOIN_INNER_TD_8224750.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8224750), &(events_h2d_wr_JOIN_INNER_TD_8224750[0]));
    events_grp_JOIN_INNER_TD_8224750.push_back(events_h2d_wr_JOIN_INNER_TD_8224750[0]);
    events_grp_JOIN_INNER_TD_8224750.push_back(events_JOIN_INNER_TD_9660563[0]);
    krnl_JOIN_INNER_TD_8224750.run(0, &(events_grp_JOIN_INNER_TD_8224750), &(events_JOIN_INNER_TD_8224750[0]));
    
    trans_JOIN_INNER_TD_8224750_out.add(&(tbl_JOIN_INNER_TD_8224750_output));
    trans_JOIN_INNER_TD_8224750_out.dev2host(0, &(events_JOIN_INNER_TD_8224750), &(events_d2h_rd_JOIN_INNER_TD_8224750[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_882455_e, 0);

    struct timeval tv_r_JOIN_INNER_8_734093_s, tv_r_JOIN_INNER_8_734093_e;
    gettimeofday(&tv_r_JOIN_INNER_8_734093_s, 0);
    prev_events_grp_JOIN_INNER_TD_8130572.push_back(events_h2d_wr_JOIN_INNER_TD_9230185[0]);
    trans_JOIN_INNER_TD_8130572.add(&(tbl_Filter_TD_967606_output));
    trans_JOIN_INNER_TD_8130572.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_8130572), &(events_h2d_wr_JOIN_INNER_TD_8130572[0]));
    events_grp_JOIN_INNER_TD_8130572.push_back(events_h2d_wr_JOIN_INNER_TD_8130572[0]);
    events_grp_JOIN_INNER_TD_8130572.push_back(events_JOIN_INNER_TD_9230185[0]);
    krnl_JOIN_INNER_TD_8130572.run(0, &(events_grp_JOIN_INNER_TD_8130572), &(events_JOIN_INNER_TD_8130572[0]));
    
    trans_JOIN_INNER_TD_8130572_out.add(&(tbl_JOIN_INNER_TD_8130572_output));
    trans_JOIN_INNER_TD_8130572_out.dev2host(0, &(events_JOIN_INNER_TD_8130572), &(events_d2h_rd_JOIN_INNER_TD_8130572[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_8_734093_e, 0);

    struct timeval tv_r_Filter_7_866253_s, tv_r_Filter_7_866253_e;
    gettimeofday(&tv_r_Filter_7_866253_s, 0);
    SW_Filter_TD_7672300(tbl_SerializeFromObject_TD_8752314_input, tbl_Filter_TD_7672300_output);
    gettimeofday(&tv_r_Filter_7_866253_e, 0);

    struct timeval tv_r_Filter_7_705170_s, tv_r_Filter_7_705170_e;
    gettimeofday(&tv_r_Filter_7_705170_s, 0);
    SW_Filter_TD_7689348(tbl_SerializeFromObject_TD_861981_input, tbl_Filter_TD_7689348_output);
    gettimeofday(&tv_r_Filter_7_705170_e, 0);

    struct timeval tv_r_Filter_7_163123_s, tv_r_Filter_7_163123_e;
    gettimeofday(&tv_r_Filter_7_163123_s, 0);
    SW_Filter_TD_7773277(tbl_SerializeFromObject_TD_8642610_input, tbl_Filter_TD_7773277_output);
    gettimeofday(&tv_r_Filter_7_163123_e, 0);

    struct timeval tv_r_JOIN_INNER_7_935599_s, tv_r_JOIN_INNER_7_935599_e;
    gettimeofday(&tv_r_JOIN_INNER_7_935599_s, 0);
    trans_JOIN_INNER_TD_7335671.add(&(tbl_Filter_TD_8942777_output));
    trans_JOIN_INNER_TD_7335671.add(&(tbl_Filter_TD_8198727_output));
    trans_JOIN_INNER_TD_7335671.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7335671), &(events_h2d_wr_JOIN_INNER_TD_7335671[0]));
    events_grp_JOIN_INNER_TD_7335671.push_back(events_h2d_wr_JOIN_INNER_TD_7335671[0]);
    krnl_JOIN_INNER_TD_7335671.run(0, &(events_grp_JOIN_INNER_TD_7335671), &(events_JOIN_INNER_TD_7335671[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_935599_e, 0);

    struct timeval tv_r_Filter_7_741045_s, tv_r_Filter_7_741045_e;
    gettimeofday(&tv_r_Filter_7_741045_s, 0);
    SW_Filter_TD_7965975(tbl_SerializeFromObject_TD_8828266_input, tbl_Filter_TD_7965975_output);
    gettimeofday(&tv_r_Filter_7_741045_e, 0);

    struct timeval tv_r_JOIN_INNER_7_917589_s, tv_r_JOIN_INNER_7_917589_e;
    gettimeofday(&tv_r_JOIN_INNER_7_917589_s, 0);
    prev_events_grp_JOIN_INNER_TD_7797498.push_back(events_h2d_wr_JOIN_INNER_TD_8880799[0]);
    trans_JOIN_INNER_TD_7797498.add(&(tbl_Filter_TD_840596_output));
    trans_JOIN_INNER_TD_7797498.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7797498), &(events_h2d_wr_JOIN_INNER_TD_7797498[0]));
    events_grp_JOIN_INNER_TD_7797498.push_back(events_h2d_wr_JOIN_INNER_TD_7797498[0]);
    events_grp_JOIN_INNER_TD_7797498.push_back(events_JOIN_INNER_TD_8880799[0]);
    krnl_JOIN_INNER_TD_7797498.run(0, &(events_grp_JOIN_INNER_TD_7797498), &(events_JOIN_INNER_TD_7797498[0]));
    gettimeofday(&tv_r_JOIN_INNER_7_917589_e, 0);

    struct timeval tv_r_JOIN_INNER_7_387402_s, tv_r_JOIN_INNER_7_387402_e;
    gettimeofday(&tv_r_JOIN_INNER_7_387402_s, 0);
    prev_events_grp_JOIN_INNER_TD_7368483.push_back(events_h2d_wr_JOIN_INNER_TD_8363670[0]);
    trans_JOIN_INNER_TD_7368483.add(&(tbl_Filter_TD_8553917_output));
    trans_JOIN_INNER_TD_7368483.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_7368483), &(events_h2d_wr_JOIN_INNER_TD_7368483[0]));
    events_grp_JOIN_INNER_TD_7368483.push_back(events_h2d_wr_JOIN_INNER_TD_7368483[0]);
    events_grp_JOIN_INNER_TD_7368483.push_back(events_JOIN_INNER_TD_8363670[0]);
    krnl_JOIN_INNER_TD_7368483.run(0, &(events_grp_JOIN_INNER_TD_7368483), &(events_JOIN_INNER_TD_7368483[0]));
    
    trans_JOIN_INNER_TD_7368483_out.add(&(tbl_JOIN_INNER_TD_7368483_output));
    trans_JOIN_INNER_TD_7368483_out.dev2host(0, &(events_JOIN_INNER_TD_7368483), &(events_d2h_rd_JOIN_INNER_TD_7368483[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_7_387402_e, 0);

    struct timeval tv_r_Aggregate_7_52345_s, tv_r_Aggregate_7_52345_e;
    gettimeofday(&tv_r_Aggregate_7_52345_s, 0);
    SW_Aggregate_TD_7605546(tbl_JOIN_INNER_TD_8224750_output, tbl_Aggregate_TD_7605546_output);
    gettimeofday(&tv_r_Aggregate_7_52345_e, 0);

    struct timeval tv_r_Aggregate_7_665904_s, tv_r_Aggregate_7_665904_e;
    gettimeofday(&tv_r_Aggregate_7_665904_s, 0);
    SW_Aggregate_TD_7743755(tbl_JOIN_INNER_TD_8130572_output, tbl_Aggregate_TD_7743755_output);
    gettimeofday(&tv_r_Aggregate_7_665904_e, 0);

    struct timeval tv_r_Filter_6_811095_s, tv_r_Filter_6_811095_e;
    gettimeofday(&tv_r_Filter_6_811095_s, 0);
    SW_Filter_TD_6187400(tbl_SerializeFromObject_TD_7554865_input, tbl_Filter_TD_6187400_output);
    gettimeofday(&tv_r_Filter_6_811095_e, 0);

    struct timeval tv_r_Filter_6_833524_s, tv_r_Filter_6_833524_e;
    gettimeofday(&tv_r_Filter_6_833524_s, 0);
    SW_Filter_TD_6790029(tbl_SerializeFromObject_TD_7263634_input, tbl_Filter_TD_6790029_output);
    gettimeofday(&tv_r_Filter_6_833524_e, 0);

    struct timeval tv_r_Filter_6_205335_s, tv_r_Filter_6_205335_e;
    gettimeofday(&tv_r_Filter_6_205335_s, 0);
    SW_Filter_TD_6871324(tbl_SerializeFromObject_TD_7319985_input, tbl_Filter_TD_6871324_output);
    gettimeofday(&tv_r_Filter_6_205335_e, 0);

    struct timeval tv_r_JOIN_INNER_6_257466_s, tv_r_JOIN_INNER_6_257466_e;
    gettimeofday(&tv_r_JOIN_INNER_6_257466_s, 0);
    trans_JOIN_INNER_TD_6786279.add(&(tbl_Filter_TD_7689348_output));
    trans_JOIN_INNER_TD_6786279.add(&(tbl_Filter_TD_7672300_output));
    trans_JOIN_INNER_TD_6786279.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6786279), &(events_h2d_wr_JOIN_INNER_TD_6786279[0]));
    events_grp_JOIN_INNER_TD_6786279.push_back(events_h2d_wr_JOIN_INNER_TD_6786279[0]);
    krnl_JOIN_INNER_TD_6786279.run(0, &(events_grp_JOIN_INNER_TD_6786279), &(events_JOIN_INNER_TD_6786279[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_257466_e, 0);

    struct timeval tv_r_Filter_6_774500_s, tv_r_Filter_6_774500_e;
    gettimeofday(&tv_r_Filter_6_774500_s, 0);
    SW_Filter_TD_6223171(tbl_SerializeFromObject_TD_7227696_input, tbl_Filter_TD_6223171_output);
    gettimeofday(&tv_r_Filter_6_774500_e, 0);

    struct timeval tv_r_JOIN_INNER_6_365812_s, tv_r_JOIN_INNER_6_365812_e;
    gettimeofday(&tv_r_JOIN_INNER_6_365812_s, 0);
    prev_events_grp_JOIN_INNER_TD_6312317.push_back(events_h2d_wr_JOIN_INNER_TD_7335671[0]);
    trans_JOIN_INNER_TD_6312317.add(&(tbl_Filter_TD_7773277_output));
    trans_JOIN_INNER_TD_6312317.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_6312317), &(events_h2d_wr_JOIN_INNER_TD_6312317[0]));
    events_grp_JOIN_INNER_TD_6312317.push_back(events_h2d_wr_JOIN_INNER_TD_6312317[0]);
    events_grp_JOIN_INNER_TD_6312317.push_back(events_JOIN_INNER_TD_7335671[0]);
    krnl_JOIN_INNER_TD_6312317.run(0, &(events_grp_JOIN_INNER_TD_6312317), &(events_JOIN_INNER_TD_6312317[0]));
    gettimeofday(&tv_r_JOIN_INNER_6_365812_e, 0);

    struct timeval tv_r_JOIN_INNER_6_376358_s, tv_r_JOIN_INNER_6_376358_e;
    gettimeofday(&tv_r_JOIN_INNER_6_376358_s, 0);
    prev_events_grp_JOIN_INNER_TD_63565.push_back(events_h2d_wr_JOIN_INNER_TD_7797498[0]);
    trans_JOIN_INNER_TD_63565.add(&(tbl_Filter_TD_7965975_output));
    trans_JOIN_INNER_TD_63565.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_63565), &(events_h2d_wr_JOIN_INNER_TD_63565[0]));
    events_grp_JOIN_INNER_TD_63565.push_back(events_h2d_wr_JOIN_INNER_TD_63565[0]);
    events_grp_JOIN_INNER_TD_63565.push_back(events_JOIN_INNER_TD_7797498[0]);
    krnl_JOIN_INNER_TD_63565.run(0, &(events_grp_JOIN_INNER_TD_63565), &(events_JOIN_INNER_TD_63565[0]));
    
    trans_JOIN_INNER_TD_63565_out.add(&(tbl_JOIN_INNER_TD_63565_output));
    trans_JOIN_INNER_TD_63565_out.dev2host(0, &(events_JOIN_INNER_TD_63565), &(events_d2h_rd_JOIN_INNER_TD_63565[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_6_376358_e, 0);

    struct timeval tv_r_Aggregate_6_842052_s, tv_r_Aggregate_6_842052_e;
    gettimeofday(&tv_r_Aggregate_6_842052_s, 0);
    SW_Aggregate_TD_6738131(tbl_JOIN_INNER_TD_7368483_output, tbl_Aggregate_TD_6738131_output);
    gettimeofday(&tv_r_Aggregate_6_842052_e, 0);

    struct timeval tv_r_JOIN_CROSS_6_479562_s, tv_r_JOIN_CROSS_6_479562_e;
    gettimeofday(&tv_r_JOIN_CROSS_6_479562_s, 0);
    SW_JOIN_CROSS_TD_6904405(tbl_Aggregate_TD_7743755_output, tbl_Aggregate_TD_7605546_output, tbl_JOIN_CROSS_TD_6904405_output);
    gettimeofday(&tv_r_JOIN_CROSS_6_479562_e, 0);

    struct timeval tv_r_Filter_5_323318_s, tv_r_Filter_5_323318_e;
    gettimeofday(&tv_r_Filter_5_323318_s, 0);
    SW_Filter_TD_537235(tbl_SerializeFromObject_TD_6642400_input, tbl_Filter_TD_537235_output);
    gettimeofday(&tv_r_Filter_5_323318_e, 0);

    struct timeval tv_r_Filter_5_170400_s, tv_r_Filter_5_170400_e;
    gettimeofday(&tv_r_Filter_5_170400_s, 0);
    SW_Filter_TD_5101797(tbl_SerializeFromObject_TD_6817913_input, tbl_Filter_TD_5101797_output);
    gettimeofday(&tv_r_Filter_5_170400_e, 0);

    struct timeval tv_r_Filter_5_750596_s, tv_r_Filter_5_750596_e;
    gettimeofday(&tv_r_Filter_5_750596_s, 0);
    SW_Filter_TD_5997564(tbl_SerializeFromObject_TD_6232882_input, tbl_Filter_TD_5997564_output);
    gettimeofday(&tv_r_Filter_5_750596_e, 0);

    struct timeval tv_r_JOIN_INNER_5_781915_s, tv_r_JOIN_INNER_5_781915_e;
    gettimeofday(&tv_r_JOIN_INNER_5_781915_s, 0);
    trans_JOIN_INNER_TD_5469408.add(&(tbl_Filter_TD_6790029_output));
    trans_JOIN_INNER_TD_5469408.add(&(tbl_Filter_TD_6187400_output));
    trans_JOIN_INNER_TD_5469408.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5469408), &(events_h2d_wr_JOIN_INNER_TD_5469408[0]));
    events_grp_JOIN_INNER_TD_5469408.push_back(events_h2d_wr_JOIN_INNER_TD_5469408[0]);
    krnl_JOIN_INNER_TD_5469408.run(0, &(events_grp_JOIN_INNER_TD_5469408), &(events_JOIN_INNER_TD_5469408[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_781915_e, 0);

    struct timeval tv_r_Filter_5_805159_s, tv_r_Filter_5_805159_e;
    gettimeofday(&tv_r_Filter_5_805159_s, 0);
    SW_Filter_TD_5565333(tbl_SerializeFromObject_TD_6741266_input, tbl_Filter_TD_5565333_output);
    gettimeofday(&tv_r_Filter_5_805159_e, 0);

    struct timeval tv_r_JOIN_INNER_5_346095_s, tv_r_JOIN_INNER_5_346095_e;
    gettimeofday(&tv_r_JOIN_INNER_5_346095_s, 0);
    prev_events_grp_JOIN_INNER_TD_5481128.push_back(events_h2d_wr_JOIN_INNER_TD_6786279[0]);
    trans_JOIN_INNER_TD_5481128.add(&(tbl_Filter_TD_6871324_output));
    trans_JOIN_INNER_TD_5481128.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5481128), &(events_h2d_wr_JOIN_INNER_TD_5481128[0]));
    events_grp_JOIN_INNER_TD_5481128.push_back(events_h2d_wr_JOIN_INNER_TD_5481128[0]);
    events_grp_JOIN_INNER_TD_5481128.push_back(events_JOIN_INNER_TD_6786279[0]);
    krnl_JOIN_INNER_TD_5481128.run(0, &(events_grp_JOIN_INNER_TD_5481128), &(events_JOIN_INNER_TD_5481128[0]));
    gettimeofday(&tv_r_JOIN_INNER_5_346095_e, 0);

    struct timeval tv_r_JOIN_INNER_5_589462_s, tv_r_JOIN_INNER_5_589462_e;
    gettimeofday(&tv_r_JOIN_INNER_5_589462_s, 0);
    prev_events_grp_JOIN_INNER_TD_5669785.push_back(events_h2d_wr_JOIN_INNER_TD_6312317[0]);
    trans_JOIN_INNER_TD_5669785.add(&(tbl_Filter_TD_6223171_output));
    trans_JOIN_INNER_TD_5669785.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_5669785), &(events_h2d_wr_JOIN_INNER_TD_5669785[0]));
    events_grp_JOIN_INNER_TD_5669785.push_back(events_h2d_wr_JOIN_INNER_TD_5669785[0]);
    events_grp_JOIN_INNER_TD_5669785.push_back(events_JOIN_INNER_TD_6312317[0]);
    krnl_JOIN_INNER_TD_5669785.run(0, &(events_grp_JOIN_INNER_TD_5669785), &(events_JOIN_INNER_TD_5669785[0]));
    
    trans_JOIN_INNER_TD_5669785_out.add(&(tbl_JOIN_INNER_TD_5669785_output));
    trans_JOIN_INNER_TD_5669785_out.dev2host(0, &(events_JOIN_INNER_TD_5669785), &(events_d2h_rd_JOIN_INNER_TD_5669785[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_5_589462_e, 0);

    struct timeval tv_r_Aggregate_5_346192_s, tv_r_Aggregate_5_346192_e;
    gettimeofday(&tv_r_Aggregate_5_346192_s, 0);
    SW_Aggregate_TD_5917431(tbl_JOIN_INNER_TD_63565_output, tbl_Aggregate_TD_5917431_output);
    gettimeofday(&tv_r_Aggregate_5_346192_e, 0);

    struct timeval tv_r_JOIN_CROSS_5_789105_s, tv_r_JOIN_CROSS_5_789105_e;
    gettimeofday(&tv_r_JOIN_CROSS_5_789105_s, 0);
    SW_JOIN_CROSS_TD_5166568(tbl_JOIN_CROSS_TD_6904405_output, tbl_Aggregate_TD_6738131_output, tbl_JOIN_CROSS_TD_5166568_output);
    gettimeofday(&tv_r_JOIN_CROSS_5_789105_e, 0);

    struct timeval tv_r_Filter_4_561250_s, tv_r_Filter_4_561250_e;
    gettimeofday(&tv_r_Filter_4_561250_s, 0);
    SW_Filter_TD_4249902(tbl_SerializeFromObject_TD_5149881_input, tbl_Filter_TD_4249902_output);
    gettimeofday(&tv_r_Filter_4_561250_e, 0);

    struct timeval tv_r_JOIN_INNER_4_693069_s, tv_r_JOIN_INNER_4_693069_e;
    gettimeofday(&tv_r_JOIN_INNER_4_693069_s, 0);
    trans_JOIN_INNER_TD_4327218.add(&(tbl_Filter_TD_5101797_output));
    trans_JOIN_INNER_TD_4327218.add(&(tbl_Filter_TD_537235_output));
    trans_JOIN_INNER_TD_4327218.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4327218), &(events_h2d_wr_JOIN_INNER_TD_4327218[0]));
    events_grp_JOIN_INNER_TD_4327218.push_back(events_h2d_wr_JOIN_INNER_TD_4327218[0]);
    krnl_JOIN_INNER_TD_4327218.run(0, &(events_grp_JOIN_INNER_TD_4327218), &(events_JOIN_INNER_TD_4327218[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_693069_e, 0);

    struct timeval tv_r_Filter_4_112266_s, tv_r_Filter_4_112266_e;
    gettimeofday(&tv_r_Filter_4_112266_s, 0);
    SW_Filter_TD_448681(tbl_SerializeFromObject_TD_5419162_input, tbl_Filter_TD_448681_output);
    gettimeofday(&tv_r_Filter_4_112266_e, 0);

    struct timeval tv_r_JOIN_INNER_4_538066_s, tv_r_JOIN_INNER_4_538066_e;
    gettimeofday(&tv_r_JOIN_INNER_4_538066_s, 0);
    prev_events_grp_JOIN_INNER_TD_4598724.push_back(events_h2d_wr_JOIN_INNER_TD_5469408[0]);
    trans_JOIN_INNER_TD_4598724.add(&(tbl_Filter_TD_5997564_output));
    trans_JOIN_INNER_TD_4598724.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4598724), &(events_h2d_wr_JOIN_INNER_TD_4598724[0]));
    events_grp_JOIN_INNER_TD_4598724.push_back(events_h2d_wr_JOIN_INNER_TD_4598724[0]);
    events_grp_JOIN_INNER_TD_4598724.push_back(events_JOIN_INNER_TD_5469408[0]);
    krnl_JOIN_INNER_TD_4598724.run(0, &(events_grp_JOIN_INNER_TD_4598724), &(events_JOIN_INNER_TD_4598724[0]));
    gettimeofday(&tv_r_JOIN_INNER_4_538066_e, 0);

    struct timeval tv_r_JOIN_INNER_4_79037_s, tv_r_JOIN_INNER_4_79037_e;
    gettimeofday(&tv_r_JOIN_INNER_4_79037_s, 0);
    prev_events_grp_JOIN_INNER_TD_4574010.push_back(events_h2d_wr_JOIN_INNER_TD_5481128[0]);
    trans_JOIN_INNER_TD_4574010.add(&(tbl_Filter_TD_5565333_output));
    trans_JOIN_INNER_TD_4574010.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_4574010), &(events_h2d_wr_JOIN_INNER_TD_4574010[0]));
    events_grp_JOIN_INNER_TD_4574010.push_back(events_h2d_wr_JOIN_INNER_TD_4574010[0]);
    events_grp_JOIN_INNER_TD_4574010.push_back(events_JOIN_INNER_TD_5481128[0]);
    krnl_JOIN_INNER_TD_4574010.run(0, &(events_grp_JOIN_INNER_TD_4574010), &(events_JOIN_INNER_TD_4574010[0]));
    
    trans_JOIN_INNER_TD_4574010_out.add(&(tbl_JOIN_INNER_TD_4574010_output));
    trans_JOIN_INNER_TD_4574010_out.dev2host(0, &(events_JOIN_INNER_TD_4574010), &(events_d2h_rd_JOIN_INNER_TD_4574010[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_4_79037_e, 0);

    struct timeval tv_r_Aggregate_4_16987_s, tv_r_Aggregate_4_16987_e;
    gettimeofday(&tv_r_Aggregate_4_16987_s, 0);
    SW_Aggregate_TD_4827417(tbl_JOIN_INNER_TD_5669785_output, tbl_Aggregate_TD_4827417_output);
    gettimeofday(&tv_r_Aggregate_4_16987_e, 0);

    struct timeval tv_r_JOIN_CROSS_4_390964_s, tv_r_JOIN_CROSS_4_390964_e;
    gettimeofday(&tv_r_JOIN_CROSS_4_390964_s, 0);
    SW_JOIN_CROSS_TD_4793839(tbl_JOIN_CROSS_TD_5166568_output, tbl_Aggregate_TD_5917431_output, tbl_JOIN_CROSS_TD_4793839_output);
    gettimeofday(&tv_r_JOIN_CROSS_4_390964_e, 0);

    struct timeval tv_r_Filter_3_597976_s, tv_r_Filter_3_597976_e;
    gettimeofday(&tv_r_Filter_3_597976_s, 0);
    SW_Filter_TD_3451200(tbl_SerializeFromObject_TD_4381387_input, tbl_Filter_TD_3451200_output);
    gettimeofday(&tv_r_Filter_3_597976_e, 0);

    struct timeval tv_r_JOIN_INNER_3_876394_s, tv_r_JOIN_INNER_3_876394_e;
    gettimeofday(&tv_r_JOIN_INNER_3_876394_s, 0);
    prev_events_grp_JOIN_INNER_TD_3187202.push_back(events_h2d_wr_JOIN_INNER_TD_4327218[0]);
    trans_JOIN_INNER_TD_3187202.add(&(tbl_Filter_TD_4249902_output));
    trans_JOIN_INNER_TD_3187202.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3187202), &(events_h2d_wr_JOIN_INNER_TD_3187202[0]));
    events_grp_JOIN_INNER_TD_3187202.push_back(events_h2d_wr_JOIN_INNER_TD_3187202[0]);
    events_grp_JOIN_INNER_TD_3187202.push_back(events_JOIN_INNER_TD_4327218[0]);
    krnl_JOIN_INNER_TD_3187202.run(0, &(events_grp_JOIN_INNER_TD_3187202), &(events_JOIN_INNER_TD_3187202[0]));
    gettimeofday(&tv_r_JOIN_INNER_3_876394_e, 0);

    struct timeval tv_r_JOIN_INNER_3_996376_s, tv_r_JOIN_INNER_3_996376_e;
    gettimeofday(&tv_r_JOIN_INNER_3_996376_s, 0);
    prev_events_grp_JOIN_INNER_TD_3193411.push_back(events_h2d_wr_JOIN_INNER_TD_4598724[0]);
    trans_JOIN_INNER_TD_3193411.add(&(tbl_Filter_TD_448681_output));
    trans_JOIN_INNER_TD_3193411.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_3193411), &(events_h2d_wr_JOIN_INNER_TD_3193411[0]));
    events_grp_JOIN_INNER_TD_3193411.push_back(events_h2d_wr_JOIN_INNER_TD_3193411[0]);
    events_grp_JOIN_INNER_TD_3193411.push_back(events_JOIN_INNER_TD_4598724[0]);
    krnl_JOIN_INNER_TD_3193411.run(0, &(events_grp_JOIN_INNER_TD_3193411), &(events_JOIN_INNER_TD_3193411[0]));
    
    trans_JOIN_INNER_TD_3193411_out.add(&(tbl_JOIN_INNER_TD_3193411_output));
    trans_JOIN_INNER_TD_3193411_out.dev2host(0, &(events_JOIN_INNER_TD_3193411), &(events_d2h_rd_JOIN_INNER_TD_3193411[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_3_996376_e, 0);

    struct timeval tv_r_Aggregate_3_962949_s, tv_r_Aggregate_3_962949_e;
    gettimeofday(&tv_r_Aggregate_3_962949_s, 0);
    SW_Aggregate_TD_398017(tbl_JOIN_INNER_TD_4574010_output, tbl_Aggregate_TD_398017_output);
    gettimeofday(&tv_r_Aggregate_3_962949_e, 0);

    struct timeval tv_r_JOIN_CROSS_3_214651_s, tv_r_JOIN_CROSS_3_214651_e;
    gettimeofday(&tv_r_JOIN_CROSS_3_214651_s, 0);
    SW_JOIN_CROSS_TD_3727074(tbl_JOIN_CROSS_TD_4793839_output, tbl_Aggregate_TD_4827417_output, tbl_JOIN_CROSS_TD_3727074_output);
    gettimeofday(&tv_r_JOIN_CROSS_3_214651_e, 0);

    struct timeval tv_r_JOIN_INNER_2_448590_s, tv_r_JOIN_INNER_2_448590_e;
    gettimeofday(&tv_r_JOIN_INNER_2_448590_s, 0);
    prev_events_grp_JOIN_INNER_TD_2330074.push_back(events_h2d_wr_JOIN_INNER_TD_3187202[0]);
    trans_JOIN_INNER_TD_2330074.add(&(tbl_Filter_TD_3451200_output));
    trans_JOIN_INNER_TD_2330074.host2dev(0, &(prev_events_grp_JOIN_INNER_TD_2330074), &(events_h2d_wr_JOIN_INNER_TD_2330074[0]));
    events_grp_JOIN_INNER_TD_2330074.push_back(events_h2d_wr_JOIN_INNER_TD_2330074[0]);
    events_grp_JOIN_INNER_TD_2330074.push_back(events_JOIN_INNER_TD_3187202[0]);
    krnl_JOIN_INNER_TD_2330074.run(0, &(events_grp_JOIN_INNER_TD_2330074), &(events_JOIN_INNER_TD_2330074[0]));
    
    trans_JOIN_INNER_TD_2330074_out.add(&(tbl_JOIN_INNER_TD_2330074_output));
    trans_JOIN_INNER_TD_2330074_out.dev2host(0, &(events_JOIN_INNER_TD_2330074), &(events_d2h_rd_JOIN_INNER_TD_2330074[0]));
    q_h.flush();
    q_h.finish();
    gettimeofday(&tv_r_JOIN_INNER_2_448590_e, 0);

    struct timeval tv_r_Aggregate_2_152114_s, tv_r_Aggregate_2_152114_e;
    gettimeofday(&tv_r_Aggregate_2_152114_s, 0);
    SW_Aggregate_TD_2142152(tbl_JOIN_INNER_TD_3193411_output, tbl_Aggregate_TD_2142152_output);
    gettimeofday(&tv_r_Aggregate_2_152114_e, 0);

    struct timeval tv_r_JOIN_CROSS_2_951842_s, tv_r_JOIN_CROSS_2_951842_e;
    gettimeofday(&tv_r_JOIN_CROSS_2_951842_s, 0);
    SW_JOIN_CROSS_TD_2343626(tbl_JOIN_CROSS_TD_3727074_output, tbl_Aggregate_TD_398017_output, tbl_JOIN_CROSS_TD_2343626_output);
    gettimeofday(&tv_r_JOIN_CROSS_2_951842_e, 0);

    struct timeval tv_r_Aggregate_1_140630_s, tv_r_Aggregate_1_140630_e;
    gettimeofday(&tv_r_Aggregate_1_140630_s, 0);
    SW_Aggregate_TD_1846351(tbl_JOIN_INNER_TD_2330074_output, tbl_Aggregate_TD_1846351_output);
    gettimeofday(&tv_r_Aggregate_1_140630_e, 0);

    struct timeval tv_r_JOIN_CROSS_1_220471_s, tv_r_JOIN_CROSS_1_220471_e;
    gettimeofday(&tv_r_JOIN_CROSS_1_220471_s, 0);
    SW_JOIN_CROSS_TD_1823139(tbl_JOIN_CROSS_TD_2343626_output, tbl_Aggregate_TD_2142152_output, tbl_JOIN_CROSS_TD_1823139_output);
    gettimeofday(&tv_r_JOIN_CROSS_1_220471_e, 0);

    struct timeval tv_r_JOIN_CROSS_0_340338_s, tv_r_JOIN_CROSS_0_340338_e;
    gettimeofday(&tv_r_JOIN_CROSS_0_340338_s, 0);
    SW_JOIN_CROSS_TD_0739177(tbl_JOIN_CROSS_TD_1823139_output, tbl_Aggregate_TD_1846351_output, tbl_JOIN_CROSS_TD_0739177_output);
    gettimeofday(&tv_r_JOIN_CROSS_0_340338_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_86730_s, &tv_r_Filter_11_86730_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12935560_input: " << tbl_SerializeFromObject_TD_12935560_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_396710_s, &tv_r_Filter_11_396710_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12790778_input: " << tbl_SerializeFromObject_TD_12790778_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_664269_s, &tv_r_Filter_11_664269_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12144814_input: " << tbl_SerializeFromObject_TD_12144814_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_547841_s, &tv_r_Filter_11_547841_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12712853_input: " << tbl_SerializeFromObject_TD_12712853_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_472040_s, &tv_r_Filter_10_472040_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11807552_input: " << tbl_SerializeFromObject_TD_11807552_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_479967_s, &tv_r_Filter_10_479967_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11859636_input: " << tbl_SerializeFromObject_TD_11859636_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_972907_s, &tv_r_Filter_10_972907_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11293133_input: " << tbl_SerializeFromObject_TD_11293133_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_45268_s, &tv_r_JOIN_INNER_10_45268_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11603312_output: " << tbl_Filter_TD_11603312_output.getNumRow() << " " << "tbl_Filter_TD_11590119_output: " << tbl_Filter_TD_11590119_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_941898_s, &tv_r_Filter_10_941898_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11206655_input: " << tbl_SerializeFromObject_TD_11206655_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_229871_s, &tv_r_JOIN_INNER_10_229871_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_11504804_output: " << tbl_Filter_TD_11504804_output.getNumRow() << " " << "tbl_Filter_TD_11610447_output: " << tbl_Filter_TD_11610447_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_498366_s, &tv_r_Filter_9_498366_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10224953_input: " << tbl_SerializeFromObject_TD_10224953_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_802265_s, &tv_r_Filter_9_802265_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10589643_input: " << tbl_SerializeFromObject_TD_10589643_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_730804_s, &tv_r_Filter_9_730804_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10993011_input: " << tbl_SerializeFromObject_TD_10993011_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_504656_s, &tv_r_JOIN_INNER_9_504656_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_10566299_output: " << tbl_Filter_TD_10566299_output.getNumRow() << " " << "tbl_Filter_TD_10806884_output: " << tbl_Filter_TD_10806884_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_504206_s, &tv_r_Filter_9_504206_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10833322_input: " << tbl_SerializeFromObject_TD_10833322_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_776633_s, &tv_r_JOIN_INNER_9_776633_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10335705_output: " << tbl_JOIN_INNER_TD_10335705_output.getNumRow() << " " << "tbl_Filter_TD_10984430_output: " << tbl_Filter_TD_10984430_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_312097_s, &tv_r_Filter_9_312097_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10441367_input: " << tbl_SerializeFromObject_TD_10441367_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_402459_s, &tv_r_JOIN_INNER_9_402459_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10733464_output: " << tbl_JOIN_INNER_TD_10733464_output.getNumRow() << " " << "tbl_Filter_TD_10371729_output: " << tbl_Filter_TD_10371729_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_192442_s, &tv_r_Filter_8_192442_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9321461_input: " << tbl_SerializeFromObject_TD_9321461_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_637876_s, &tv_r_Filter_8_637876_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9990647_input: " << tbl_SerializeFromObject_TD_9990647_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_267572_s, &tv_r_Filter_8_267572_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9750472_input: " << tbl_SerializeFromObject_TD_9750472_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_817535_s, &tv_r_JOIN_INNER_8_817535_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9701390_output: " << tbl_Filter_TD_9701390_output.getNumRow() << " " << "tbl_Filter_TD_9421652_output: " << tbl_Filter_TD_9421652_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_549128_s, &tv_r_Filter_8_549128_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9791265_input: " << tbl_SerializeFromObject_TD_9791265_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_245473_s, &tv_r_JOIN_INNER_8_245473_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9193223_output: " << tbl_JOIN_INNER_TD_9193223_output.getNumRow() << " " << "tbl_Filter_TD_9266303_output: " << tbl_Filter_TD_9266303_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_882455_s, &tv_r_JOIN_INNER_8_882455_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9660563_output: " << tbl_JOIN_INNER_TD_9660563_output.getNumRow() << " " << "tbl_Filter_TD_9275627_output: " << tbl_Filter_TD_9275627_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_734093_s, &tv_r_JOIN_INNER_8_734093_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9230185_output: " << tbl_JOIN_INNER_TD_9230185_output.getNumRow() << " " << "tbl_Filter_TD_967606_output: " << tbl_Filter_TD_967606_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_866253_s, &tv_r_Filter_7_866253_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8752314_input: " << tbl_SerializeFromObject_TD_8752314_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_705170_s, &tv_r_Filter_7_705170_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_861981_input: " << tbl_SerializeFromObject_TD_861981_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_163123_s, &tv_r_Filter_7_163123_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8642610_input: " << tbl_SerializeFromObject_TD_8642610_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_935599_s, &tv_r_JOIN_INNER_7_935599_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8942777_output: " << tbl_Filter_TD_8942777_output.getNumRow() << " " << "tbl_Filter_TD_8198727_output: " << tbl_Filter_TD_8198727_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_741045_s, &tv_r_Filter_7_741045_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8828266_input: " << tbl_SerializeFromObject_TD_8828266_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_917589_s, &tv_r_JOIN_INNER_7_917589_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8880799_output: " << tbl_JOIN_INNER_TD_8880799_output.getNumRow() << " " << "tbl_Filter_TD_840596_output: " << tbl_Filter_TD_840596_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_387402_s, &tv_r_JOIN_INNER_7_387402_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8363670_output: " << tbl_JOIN_INNER_TD_8363670_output.getNumRow() << " " << "tbl_Filter_TD_8553917_output: " << tbl_Filter_TD_8553917_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_52345_s, &tv_r_Aggregate_7_52345_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8224750_output: " << tbl_JOIN_INNER_TD_8224750_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_7: " << tvdiff(&tv_r_Aggregate_7_665904_s, &tv_r_Aggregate_7_665904_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8130572_output: " << tbl_JOIN_INNER_TD_8130572_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_811095_s, &tv_r_Filter_6_811095_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7554865_input: " << tbl_SerializeFromObject_TD_7554865_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_833524_s, &tv_r_Filter_6_833524_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7263634_input: " << tbl_SerializeFromObject_TD_7263634_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_205335_s, &tv_r_Filter_6_205335_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7319985_input: " << tbl_SerializeFromObject_TD_7319985_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_257466_s, &tv_r_JOIN_INNER_6_257466_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7689348_output: " << tbl_Filter_TD_7689348_output.getNumRow() << " " << "tbl_Filter_TD_7672300_output: " << tbl_Filter_TD_7672300_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_774500_s, &tv_r_Filter_6_774500_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7227696_input: " << tbl_SerializeFromObject_TD_7227696_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_365812_s, &tv_r_JOIN_INNER_6_365812_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7335671_output: " << tbl_JOIN_INNER_TD_7335671_output.getNumRow() << " " << "tbl_Filter_TD_7773277_output: " << tbl_Filter_TD_7773277_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_376358_s, &tv_r_JOIN_INNER_6_376358_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7797498_output: " << tbl_JOIN_INNER_TD_7797498_output.getNumRow() << " " << "tbl_Filter_TD_7965975_output: " << tbl_Filter_TD_7965975_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_842052_s, &tv_r_Aggregate_6_842052_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7368483_output: " << tbl_JOIN_INNER_TD_7368483_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_6: " << tvdiff(&tv_r_JOIN_CROSS_6_479562_s, &tv_r_JOIN_CROSS_6_479562_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_7743755_output: " << tbl_Aggregate_TD_7743755_output.getNumRow() << " " << "tbl_Aggregate_TD_7605546_output: " << tbl_Aggregate_TD_7605546_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_323318_s, &tv_r_Filter_5_323318_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6642400_input: " << tbl_SerializeFromObject_TD_6642400_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_170400_s, &tv_r_Filter_5_170400_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6817913_input: " << tbl_SerializeFromObject_TD_6817913_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_750596_s, &tv_r_Filter_5_750596_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6232882_input: " << tbl_SerializeFromObject_TD_6232882_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_781915_s, &tv_r_JOIN_INNER_5_781915_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6790029_output: " << tbl_Filter_TD_6790029_output.getNumRow() << " " << "tbl_Filter_TD_6187400_output: " << tbl_Filter_TD_6187400_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_805159_s, &tv_r_Filter_5_805159_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6741266_input: " << tbl_SerializeFromObject_TD_6741266_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_346095_s, &tv_r_JOIN_INNER_5_346095_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6786279_output: " << tbl_JOIN_INNER_TD_6786279_output.getNumRow() << " " << "tbl_Filter_TD_6871324_output: " << tbl_Filter_TD_6871324_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_589462_s, &tv_r_JOIN_INNER_5_589462_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6312317_output: " << tbl_JOIN_INNER_TD_6312317_output.getNumRow() << " " << "tbl_Filter_TD_6223171_output: " << tbl_Filter_TD_6223171_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_346192_s, &tv_r_Aggregate_5_346192_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_63565_output: " << tbl_JOIN_INNER_TD_63565_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_5: " << tvdiff(&tv_r_JOIN_CROSS_5_789105_s, &tv_r_JOIN_CROSS_5_789105_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_6904405_output: " << tbl_JOIN_CROSS_TD_6904405_output.getNumRow() << " " << "tbl_Aggregate_TD_6738131_output: " << tbl_Aggregate_TD_6738131_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_561250_s, &tv_r_Filter_4_561250_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5149881_input: " << tbl_SerializeFromObject_TD_5149881_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_693069_s, &tv_r_JOIN_INNER_4_693069_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_5101797_output: " << tbl_Filter_TD_5101797_output.getNumRow() << " " << "tbl_Filter_TD_537235_output: " << tbl_Filter_TD_537235_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_112266_s, &tv_r_Filter_4_112266_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5419162_input: " << tbl_SerializeFromObject_TD_5419162_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_538066_s, &tv_r_JOIN_INNER_4_538066_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5469408_output: " << tbl_JOIN_INNER_TD_5469408_output.getNumRow() << " " << "tbl_Filter_TD_5997564_output: " << tbl_Filter_TD_5997564_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_79037_s, &tv_r_JOIN_INNER_4_79037_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5481128_output: " << tbl_JOIN_INNER_TD_5481128_output.getNumRow() << " " << "tbl_Filter_TD_5565333_output: " << tbl_Filter_TD_5565333_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_16987_s, &tv_r_Aggregate_4_16987_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5669785_output: " << tbl_JOIN_INNER_TD_5669785_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_4: " << tvdiff(&tv_r_JOIN_CROSS_4_390964_s, &tv_r_JOIN_CROSS_4_390964_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_5166568_output: " << tbl_JOIN_CROSS_TD_5166568_output.getNumRow() << " " << "tbl_Aggregate_TD_5917431_output: " << tbl_Aggregate_TD_5917431_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_597976_s, &tv_r_Filter_3_597976_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4381387_input: " << tbl_SerializeFromObject_TD_4381387_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_876394_s, &tv_r_JOIN_INNER_3_876394_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4327218_output: " << tbl_JOIN_INNER_TD_4327218_output.getNumRow() << " " << "tbl_Filter_TD_4249902_output: " << tbl_Filter_TD_4249902_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_996376_s, &tv_r_JOIN_INNER_3_996376_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4598724_output: " << tbl_JOIN_INNER_TD_4598724_output.getNumRow() << " " << "tbl_Filter_TD_448681_output: " << tbl_Filter_TD_448681_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_962949_s, &tv_r_Aggregate_3_962949_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4574010_output: " << tbl_JOIN_INNER_TD_4574010_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_3: " << tvdiff(&tv_r_JOIN_CROSS_3_214651_s, &tv_r_JOIN_CROSS_3_214651_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_4793839_output: " << tbl_JOIN_CROSS_TD_4793839_output.getNumRow() << " " << "tbl_Aggregate_TD_4827417_output: " << tbl_Aggregate_TD_4827417_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_448590_s, &tv_r_JOIN_INNER_2_448590_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3187202_output: " << tbl_JOIN_INNER_TD_3187202_output.getNumRow() << " " << "tbl_Filter_TD_3451200_output: " << tbl_Filter_TD_3451200_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_152114_s, &tv_r_Aggregate_2_152114_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3193411_output: " << tbl_JOIN_INNER_TD_3193411_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_2: " << tvdiff(&tv_r_JOIN_CROSS_2_951842_s, &tv_r_JOIN_CROSS_2_951842_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_3727074_output: " << tbl_JOIN_CROSS_TD_3727074_output.getNumRow() << " " << "tbl_Aggregate_TD_398017_output: " << tbl_Aggregate_TD_398017_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_140630_s, &tv_r_Aggregate_1_140630_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2330074_output: " << tbl_JOIN_INNER_TD_2330074_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_1: " << tvdiff(&tv_r_JOIN_CROSS_1_220471_s, &tv_r_JOIN_CROSS_1_220471_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_2343626_output: " << tbl_JOIN_CROSS_TD_2343626_output.getNumRow() << " " << "tbl_Aggregate_TD_2142152_output: " << tbl_Aggregate_TD_2142152_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_CROSS_0: " << tvdiff(&tv_r_JOIN_CROSS_0_340338_s, &tv_r_JOIN_CROSS_0_340338_e) / 1000.0 << " ms " 
     << "tbl_JOIN_CROSS_TD_1823139_output: " << tbl_JOIN_CROSS_TD_1823139_output.getNumRow() << " " << "tbl_Aggregate_TD_1846351_output: " << tbl_Aggregate_TD_1846351_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.618596 * 1000 << "ms" << std::endl; 
    return 0; 
}
