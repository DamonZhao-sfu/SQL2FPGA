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

#include "cfgFunc_q91.hpp" 
#include "q91.hpp" 

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
    std::cout << "NOTE:running query #91\n."; 
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
    // ****************************** Tables **************************** // 
    Table tbl_Sort_TD_0304487_output("tbl_Sort_TD_0304487_output", 6100000, 4, "");
    tbl_Sort_TD_0304487_output.allocateHost();
    Table tbl_Aggregate_TD_1506136_output("tbl_Aggregate_TD_1506136_output", 6100000, 4, "");
    tbl_Aggregate_TD_1506136_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2347238_output("tbl_JOIN_INNER_TD_2347238_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_2347238_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3940555_output("tbl_JOIN_INNER_TD_3940555_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_3940555_output.allocateHost();
    Table tbl_Filter_TD_3669224_output("tbl_Filter_TD_3669224_output", 6100000, 1, "");
    tbl_Filter_TD_3669224_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4557224_output("tbl_JOIN_INNER_TD_4557224_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_4557224_output.allocateHost();
    Table tbl_Filter_TD_4535823_output("tbl_Filter_TD_4535823_output", 6100000, 3, "");
    tbl_Filter_TD_4535823_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4958134_input;
    tbl_SerializeFromObject_TD_4958134_input = Table("household_demographics", household_demographics_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_4958134_input.addCol("hd_demo_sk", 4);
    tbl_SerializeFromObject_TD_4958134_input.addCol("hd_buy_potential", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4958134_input.allocateHost();
    tbl_SerializeFromObject_TD_4958134_input.loadHost();
    Table tbl_JOIN_INNER_TD_5817404_output("tbl_JOIN_INNER_TD_5817404_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_5817404_output.allocateHost();
    Table tbl_Filter_TD_5669245_output("tbl_Filter_TD_5669245_output", 6100000, 1, "");
    tbl_Filter_TD_5669245_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5427188_input;
    tbl_SerializeFromObject_TD_5427188_input = Table("customer_demographics", customer_demographics_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5427188_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_5427188_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5427188_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_5427188_input.allocateHost();
    tbl_SerializeFromObject_TD_5427188_input.loadHost();
    Table tbl_JOIN_INNER_TD_6240088_output("tbl_JOIN_INNER_TD_6240088_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6240088_output.allocateHost();
    Table tbl_Filter_TD_6232083_output("tbl_Filter_TD_6232083_output", 6100000, 4, "");
    tbl_Filter_TD_6232083_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6977889_input;
    tbl_SerializeFromObject_TD_6977889_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6977889_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_6977889_input.addCol("ca_gmt_offset", 4);
    tbl_SerializeFromObject_TD_6977889_input.allocateHost();
    tbl_SerializeFromObject_TD_6977889_input.loadHost();
    Table tbl_JOIN_INNER_TD_7977088_output("tbl_JOIN_INNER_TD_7977088_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_7977088_output.allocateHost();
    Table tbl_Filter_TD_7573009_output("tbl_Filter_TD_7573009_output", 6100000, 1, "");
    tbl_Filter_TD_7573009_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7167999_input;
    tbl_SerializeFromObject_TD_7167999_input = Table("customer", customer_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_7167999_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_7167999_input.addCol("c_current_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_7167999_input.addCol("c_current_hdemo_sk", 4);
    tbl_SerializeFromObject_TD_7167999_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_7167999_input.allocateHost();
    tbl_SerializeFromObject_TD_7167999_input.loadHost();
    Table tbl_Filter_TD_8783980_output("tbl_Filter_TD_8783980_output", 6100000, 4, "");
    tbl_Filter_TD_8783980_output.allocateHost();
    Table tbl_Filter_TD_8495424_output("tbl_Filter_TD_8495424_output", 6100000, 4, "");
    tbl_Filter_TD_8495424_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8634922_input;
    tbl_SerializeFromObject_TD_8634922_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8634922_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8634922_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8634922_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8634922_input.allocateHost();
    tbl_SerializeFromObject_TD_8634922_input.loadHost();
    Table tbl_SerializeFromObject_TD_9746865_input;
    tbl_SerializeFromObject_TD_9746865_input = Table("call_center", call_center_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9746865_input.addCol("cc_call_center_sk", 4);
    tbl_SerializeFromObject_TD_9746865_input.addCol("cc_call_center_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9746865_input.addCol("cc_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9746865_input.addCol("cc_manager", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9746865_input.allocateHost();
    tbl_SerializeFromObject_TD_9746865_input.loadHost();
    Table tbl_SerializeFromObject_TD_9198657_input;
    tbl_SerializeFromObject_TD_9198657_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9198657_input.addCol("cr_returned_date_sk", 4);
    tbl_SerializeFromObject_TD_9198657_input.addCol("cr_returning_customer_sk", 4);
    tbl_SerializeFromObject_TD_9198657_input.addCol("cr_call_center_sk", 4);
    tbl_SerializeFromObject_TD_9198657_input.addCol("cr_net_loss", 4);
    tbl_SerializeFromObject_TD_9198657_input.allocateHost();
    tbl_SerializeFromObject_TD_9198657_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_625773_s, tv_r_Filter_8_625773_e;
    gettimeofday(&tv_r_Filter_8_625773_s, 0);
    SW_Filter_TD_8495424(tbl_SerializeFromObject_TD_9198657_input, tbl_Filter_TD_8495424_output);
    gettimeofday(&tv_r_Filter_8_625773_e, 0);

    struct timeval tv_r_Filter_8_445338_s, tv_r_Filter_8_445338_e;
    gettimeofday(&tv_r_Filter_8_445338_s, 0);
    SW_Filter_TD_8783980(tbl_SerializeFromObject_TD_9746865_input, tbl_Filter_TD_8783980_output);
    gettimeofday(&tv_r_Filter_8_445338_e, 0);

    struct timeval tv_r_Filter_7_257258_s, tv_r_Filter_7_257258_e;
    gettimeofday(&tv_r_Filter_7_257258_s, 0);
    SW_Filter_TD_7573009(tbl_SerializeFromObject_TD_8634922_input, tbl_Filter_TD_7573009_output);
    gettimeofday(&tv_r_Filter_7_257258_e, 0);

    struct timeval tv_r_JOIN_INNER_7_682740_s, tv_r_JOIN_INNER_7_682740_e;
    gettimeofday(&tv_r_JOIN_INNER_7_682740_s, 0);
    SW_JOIN_INNER_TD_7977088(tbl_Filter_TD_8783980_output, tbl_Filter_TD_8495424_output, tbl_JOIN_INNER_TD_7977088_output);
    gettimeofday(&tv_r_JOIN_INNER_7_682740_e, 0);

    struct timeval tv_r_Filter_6_584650_s, tv_r_Filter_6_584650_e;
    gettimeofday(&tv_r_Filter_6_584650_s, 0);
    SW_Filter_TD_6232083(tbl_SerializeFromObject_TD_7167999_input, tbl_Filter_TD_6232083_output);
    gettimeofday(&tv_r_Filter_6_584650_e, 0);

    struct timeval tv_r_JOIN_INNER_6_919956_s, tv_r_JOIN_INNER_6_919956_e;
    gettimeofday(&tv_r_JOIN_INNER_6_919956_s, 0);
    SW_JOIN_INNER_TD_6240088(tbl_JOIN_INNER_TD_7977088_output, tbl_Filter_TD_7573009_output, tbl_JOIN_INNER_TD_6240088_output);
    gettimeofday(&tv_r_JOIN_INNER_6_919956_e, 0);

    struct timeval tv_r_Filter_5_637691_s, tv_r_Filter_5_637691_e;
    gettimeofday(&tv_r_Filter_5_637691_s, 0);
    SW_Filter_TD_5669245(tbl_SerializeFromObject_TD_6977889_input, tbl_Filter_TD_5669245_output);
    gettimeofday(&tv_r_Filter_5_637691_e, 0);

    struct timeval tv_r_JOIN_INNER_5_583736_s, tv_r_JOIN_INNER_5_583736_e;
    gettimeofday(&tv_r_JOIN_INNER_5_583736_s, 0);
    SW_JOIN_INNER_TD_5817404(tbl_JOIN_INNER_TD_6240088_output, tbl_Filter_TD_6232083_output, tbl_JOIN_INNER_TD_5817404_output);
    gettimeofday(&tv_r_JOIN_INNER_5_583736_e, 0);

    struct timeval tv_r_Filter_4_672_s, tv_r_Filter_4_672_e;
    gettimeofday(&tv_r_Filter_4_672_s, 0);
    SW_Filter_TD_4535823(tbl_SerializeFromObject_TD_5427188_input, tbl_Filter_TD_4535823_output);
    gettimeofday(&tv_r_Filter_4_672_e, 0);

    struct timeval tv_r_JOIN_INNER_4_263766_s, tv_r_JOIN_INNER_4_263766_e;
    gettimeofday(&tv_r_JOIN_INNER_4_263766_s, 0);
    SW_JOIN_INNER_TD_4557224(tbl_JOIN_INNER_TD_5817404_output, tbl_Filter_TD_5669245_output, tbl_JOIN_INNER_TD_4557224_output);
    gettimeofday(&tv_r_JOIN_INNER_4_263766_e, 0);

    struct timeval tv_r_Filter_3_968494_s, tv_r_Filter_3_968494_e;
    gettimeofday(&tv_r_Filter_3_968494_s, 0);
    SW_Filter_TD_3669224(tbl_SerializeFromObject_TD_4958134_input, tbl_Filter_TD_3669224_output);
    gettimeofday(&tv_r_Filter_3_968494_e, 0);

    struct timeval tv_r_JOIN_INNER_3_15136_s, tv_r_JOIN_INNER_3_15136_e;
    gettimeofday(&tv_r_JOIN_INNER_3_15136_s, 0);
    SW_JOIN_INNER_TD_3940555(tbl_JOIN_INNER_TD_4557224_output, tbl_Filter_TD_4535823_output, tbl_JOIN_INNER_TD_3940555_output);
    gettimeofday(&tv_r_JOIN_INNER_3_15136_e, 0);

    struct timeval tv_r_JOIN_INNER_2_248820_s, tv_r_JOIN_INNER_2_248820_e;
    gettimeofday(&tv_r_JOIN_INNER_2_248820_s, 0);
    SW_JOIN_INNER_TD_2347238(tbl_JOIN_INNER_TD_3940555_output, tbl_Filter_TD_3669224_output, tbl_JOIN_INNER_TD_2347238_output);
    gettimeofday(&tv_r_JOIN_INNER_2_248820_e, 0);

    struct timeval tv_r_Aggregate_1_819253_s, tv_r_Aggregate_1_819253_e;
    gettimeofday(&tv_r_Aggregate_1_819253_s, 0);
    SW_Aggregate_TD_1506136(tbl_JOIN_INNER_TD_2347238_output, tbl_Aggregate_TD_1506136_output);
    gettimeofday(&tv_r_Aggregate_1_819253_e, 0);

    struct timeval tv_r_Sort_0_170412_s, tv_r_Sort_0_170412_e;
    gettimeofday(&tv_r_Sort_0_170412_s, 0);
    SW_Sort_TD_0304487(tbl_Aggregate_TD_1506136_output, tbl_Sort_TD_0304487_output);
    gettimeofday(&tv_r_Sort_0_170412_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_625773_s, &tv_r_Filter_8_625773_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9198657_input: " << tbl_SerializeFromObject_TD_9198657_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_445338_s, &tv_r_Filter_8_445338_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9746865_input: " << tbl_SerializeFromObject_TD_9746865_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_257258_s, &tv_r_Filter_7_257258_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8634922_input: " << tbl_SerializeFromObject_TD_8634922_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_682740_s, &tv_r_JOIN_INNER_7_682740_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8783980_output: " << tbl_Filter_TD_8783980_output.getNumRow() << " " << "tbl_Filter_TD_8495424_output: " << tbl_Filter_TD_8495424_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_584650_s, &tv_r_Filter_6_584650_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7167999_input: " << tbl_SerializeFromObject_TD_7167999_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_919956_s, &tv_r_JOIN_INNER_6_919956_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7977088_output: " << tbl_JOIN_INNER_TD_7977088_output.getNumRow() << " " << "tbl_Filter_TD_7573009_output: " << tbl_Filter_TD_7573009_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_637691_s, &tv_r_Filter_5_637691_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6977889_input: " << tbl_SerializeFromObject_TD_6977889_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_583736_s, &tv_r_JOIN_INNER_5_583736_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6240088_output: " << tbl_JOIN_INNER_TD_6240088_output.getNumRow() << " " << "tbl_Filter_TD_6232083_output: " << tbl_Filter_TD_6232083_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_672_s, &tv_r_Filter_4_672_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5427188_input: " << tbl_SerializeFromObject_TD_5427188_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_263766_s, &tv_r_JOIN_INNER_4_263766_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5817404_output: " << tbl_JOIN_INNER_TD_5817404_output.getNumRow() << " " << "tbl_Filter_TD_5669245_output: " << tbl_Filter_TD_5669245_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_968494_s, &tv_r_Filter_3_968494_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4958134_input: " << tbl_SerializeFromObject_TD_4958134_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_15136_s, &tv_r_JOIN_INNER_3_15136_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4557224_output: " << tbl_JOIN_INNER_TD_4557224_output.getNumRow() << " " << "tbl_Filter_TD_4535823_output: " << tbl_Filter_TD_4535823_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_248820_s, &tv_r_JOIN_INNER_2_248820_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3940555_output: " << tbl_JOIN_INNER_TD_3940555_output.getNumRow() << " " << "tbl_Filter_TD_3669224_output: " << tbl_Filter_TD_3669224_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_819253_s, &tv_r_Aggregate_1_819253_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2347238_output: " << tbl_JOIN_INNER_TD_2347238_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_170412_s, &tv_r_Sort_0_170412_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1506136_output: " << tbl_Aggregate_TD_1506136_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.2480606 * 1000 << "ms" << std::endl; 
    return 0; 
}
