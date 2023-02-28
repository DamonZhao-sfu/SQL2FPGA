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

#include "cfgFunc_q82.hpp" 
#include "q82.hpp" 

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
    std::cout << "NOTE:running query #82\n."; 
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
    Table tbl_GlobalLimit_TD_0795977_output("tbl_GlobalLimit_TD_0795977_output", 6100000, 3, "");
    tbl_GlobalLimit_TD_0795977_output.allocateHost();
    Table tbl_LocalLimit_TD_1885743_output("tbl_LocalLimit_TD_1885743_output", 6100000, 3, "");
    tbl_LocalLimit_TD_1885743_output.allocateHost();
    Table tbl_Sort_TD_2183551_output("tbl_Sort_TD_2183551_output", 6100000, 3, "");
    tbl_Sort_TD_2183551_output.allocateHost();
    Table tbl_Aggregate_TD_3890358_output("tbl_Aggregate_TD_3890358_output", 6100000, 3, "");
    tbl_Aggregate_TD_3890358_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4812460_output("tbl_JOIN_INNER_TD_4812460_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_4812460_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5436056_output("tbl_JOIN_INNER_TD_5436056_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_5436056_output.allocateHost();
    Table tbl_Filter_TD_5757625_output("tbl_Filter_TD_5757625_output", 6100000, 1, "");
    tbl_Filter_TD_5757625_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6564584_output("tbl_JOIN_INNER_TD_6564584_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6564584_output.allocateHost();
    Table tbl_Filter_TD_6389103_output("tbl_Filter_TD_6389103_output", 6100000, 1, "");
    tbl_Filter_TD_6389103_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6732429_input;
    tbl_SerializeFromObject_TD_6732429_input = Table("store_sales", store_sales_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_6732429_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_6732429_input.allocateHost();
    tbl_SerializeFromObject_TD_6732429_input.loadHost();
    Table tbl_Filter_TD_7464498_output("tbl_Filter_TD_7464498_output", 6100000, 4, "");
    tbl_Filter_TD_7464498_output.allocateHost();
    Table tbl_Filter_TD_7336968_output("tbl_Filter_TD_7336968_output", 6100000, 2, "");
    tbl_Filter_TD_7336968_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7949662_input;
    tbl_SerializeFromObject_TD_7949662_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7949662_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7949662_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7949662_input.allocateHost();
    tbl_SerializeFromObject_TD_7949662_input.loadHost();
    Table tbl_SerializeFromObject_TD_8495559_input;
    tbl_SerializeFromObject_TD_8495559_input = Table("item", item_n, 5, in_dir, "orc");
    tbl_SerializeFromObject_TD_8495559_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_8495559_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8495559_input.addCol("i_item_desc", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8495559_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_8495559_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_8495559_input.allocateHost();
    tbl_SerializeFromObject_TD_8495559_input.loadHost();
    Table tbl_SerializeFromObject_TD_8859514_input;
    tbl_SerializeFromObject_TD_8859514_input = Table("inventory", inventory_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8859514_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_8859514_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_8859514_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_8859514_input.allocateHost();
    tbl_SerializeFromObject_TD_8859514_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_654676_s, tv_r_Filter_7_654676_e;
    gettimeofday(&tv_r_Filter_7_654676_s, 0);
    SW_Filter_TD_7336968(tbl_SerializeFromObject_TD_8859514_input, tbl_Filter_TD_7336968_output);
    gettimeofday(&tv_r_Filter_7_654676_e, 0);

    struct timeval tv_r_Filter_7_925860_s, tv_r_Filter_7_925860_e;
    gettimeofday(&tv_r_Filter_7_925860_s, 0);
    SW_Filter_TD_7464498(tbl_SerializeFromObject_TD_8495559_input, tbl_Filter_TD_7464498_output);
    gettimeofday(&tv_r_Filter_7_925860_e, 0);

    struct timeval tv_r_Filter_6_557260_s, tv_r_Filter_6_557260_e;
    gettimeofday(&tv_r_Filter_6_557260_s, 0);
    SW_Filter_TD_6389103(tbl_SerializeFromObject_TD_7949662_input, tbl_Filter_TD_6389103_output);
    gettimeofday(&tv_r_Filter_6_557260_e, 0);

    struct timeval tv_r_JOIN_INNER_6_612420_s, tv_r_JOIN_INNER_6_612420_e;
    gettimeofday(&tv_r_JOIN_INNER_6_612420_s, 0);
    SW_JOIN_INNER_TD_6564584(tbl_Filter_TD_7464498_output, tbl_Filter_TD_7336968_output, tbl_JOIN_INNER_TD_6564584_output);
    gettimeofday(&tv_r_JOIN_INNER_6_612420_e, 0);

    struct timeval tv_r_Filter_5_173675_s, tv_r_Filter_5_173675_e;
    gettimeofday(&tv_r_Filter_5_173675_s, 0);
    SW_Filter_TD_5757625(tbl_SerializeFromObject_TD_6732429_input, tbl_Filter_TD_5757625_output);
    gettimeofday(&tv_r_Filter_5_173675_e, 0);

    struct timeval tv_r_JOIN_INNER_5_417593_s, tv_r_JOIN_INNER_5_417593_e;
    gettimeofday(&tv_r_JOIN_INNER_5_417593_s, 0);
    SW_JOIN_INNER_TD_5436056(tbl_JOIN_INNER_TD_6564584_output, tbl_Filter_TD_6389103_output, tbl_JOIN_INNER_TD_5436056_output);
    gettimeofday(&tv_r_JOIN_INNER_5_417593_e, 0);

    struct timeval tv_r_JOIN_INNER_4_309007_s, tv_r_JOIN_INNER_4_309007_e;
    gettimeofday(&tv_r_JOIN_INNER_4_309007_s, 0);
    SW_JOIN_INNER_TD_4812460(tbl_JOIN_INNER_TD_5436056_output, tbl_Filter_TD_5757625_output, tbl_JOIN_INNER_TD_4812460_output);
    gettimeofday(&tv_r_JOIN_INNER_4_309007_e, 0);

    struct timeval tv_r_Aggregate_3_343023_s, tv_r_Aggregate_3_343023_e;
    gettimeofday(&tv_r_Aggregate_3_343023_s, 0);
    SW_Aggregate_TD_3890358(tbl_JOIN_INNER_TD_4812460_output, tbl_Aggregate_TD_3890358_output);
    gettimeofday(&tv_r_Aggregate_3_343023_e, 0);

    struct timeval tv_r_Sort_2_876793_s, tv_r_Sort_2_876793_e;
    gettimeofday(&tv_r_Sort_2_876793_s, 0);
    SW_Sort_TD_2183551(tbl_Aggregate_TD_3890358_output, tbl_Sort_TD_2183551_output);
    gettimeofday(&tv_r_Sort_2_876793_e, 0);

    struct timeval tv_r_LocalLimit_1_213958_s, tv_r_LocalLimit_1_213958_e;
    gettimeofday(&tv_r_LocalLimit_1_213958_s, 0);
    SW_LocalLimit_TD_1885743(tbl_Sort_TD_2183551_output, tbl_LocalLimit_TD_1885743_output);
    gettimeofday(&tv_r_LocalLimit_1_213958_e, 0);

    struct timeval tv_r_GlobalLimit_0_421427_s, tv_r_GlobalLimit_0_421427_e;
    gettimeofday(&tv_r_GlobalLimit_0_421427_s, 0);
    SW_GlobalLimit_TD_0795977(tbl_LocalLimit_TD_1885743_output, tbl_GlobalLimit_TD_0795977_output);
    gettimeofday(&tv_r_GlobalLimit_0_421427_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_654676_s, &tv_r_Filter_7_654676_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8859514_input: " << tbl_SerializeFromObject_TD_8859514_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_925860_s, &tv_r_Filter_7_925860_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8495559_input: " << tbl_SerializeFromObject_TD_8495559_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_557260_s, &tv_r_Filter_6_557260_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7949662_input: " << tbl_SerializeFromObject_TD_7949662_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_612420_s, &tv_r_JOIN_INNER_6_612420_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7464498_output: " << tbl_Filter_TD_7464498_output.getNumRow() << " " << "tbl_Filter_TD_7336968_output: " << tbl_Filter_TD_7336968_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_173675_s, &tv_r_Filter_5_173675_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6732429_input: " << tbl_SerializeFromObject_TD_6732429_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_417593_s, &tv_r_JOIN_INNER_5_417593_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6564584_output: " << tbl_JOIN_INNER_TD_6564584_output.getNumRow() << " " << "tbl_Filter_TD_6389103_output: " << tbl_Filter_TD_6389103_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_309007_s, &tv_r_JOIN_INNER_4_309007_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5436056_output: " << tbl_JOIN_INNER_TD_5436056_output.getNumRow() << " " << "tbl_Filter_TD_5757625_output: " << tbl_Filter_TD_5757625_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_343023_s, &tv_r_Aggregate_3_343023_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4812460_output: " << tbl_JOIN_INNER_TD_4812460_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_876793_s, &tv_r_Sort_2_876793_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3890358_output: " << tbl_Aggregate_TD_3890358_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_213958_s, &tv_r_LocalLimit_1_213958_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2183551_output: " << tbl_Sort_TD_2183551_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_421427_s, &tv_r_GlobalLimit_0_421427_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1885743_output: " << tbl_LocalLimit_TD_1885743_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.3099952 * 1000 << "ms" << std::endl; 
    return 0; 
}
