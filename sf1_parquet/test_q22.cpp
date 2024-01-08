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
#include "gqe_api.hpp" 

#include "cfgFunc_q22.hpp" 
#include "q22.hpp" 

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
    std::cout << "NOTE:running query #22\n."; 
    std::cout << "NOTE:running in sf" << scale << " data\n"; 

    int32_t lineitem_n = SF1_LINEITEM; 
    int32_t supplier_n = SF1_SUPPLIER; 
    int32_t nation_n = SF1_NATION; 
    int32_t orders_n = SF1_ORDERS; 
    int32_t customer_n = SF1_CUSTOMER; 
    int32_t region_n = SF1_REGION; 
    int32_t part_n = SF1_PART; 
    int32_t partsupp_n = SF1_PARTSUPP; 
    if (scale == 30) { 
        lineitem_n = SF30_LINEITEM; 
        supplier_n = SF30_SUPPLIER; 
        nation_n = SF30_NATION; 
        orders_n = SF30_ORDERS; 
        customer_n = SF30_CUSTOMER; 
        region_n = SF30_REGION; 
        part_n = SF30_PART; 
        partsupp_n = SF30_PARTSUPP; 
    } 
    // ********************************************************** // 
    // Get CL devices. 
    std::vector<cl::Device> devices = xcl::get_xil_devices(); 
    // ****************************** Tables **************************** // 
    Table tbl_Sort_TD_0194_output("tbl_Sort_TD_0194_output", 6100000, 3, "");
    tbl_Sort_TD_0194_output.allocateHost();
    Table tbl_Aggregate_TD_1182_output("tbl_Aggregate_TD_1182_output", 6100000, 3, "");
    tbl_Aggregate_TD_1182_output.allocateHost();
    Table tbl_Project_TD_283_output("tbl_Project_TD_283_output", 6100000, 2, "");
    tbl_Project_TD_283_output.allocateHost();
    Table tbl_JOIN_LEFTANTI_TD_3791_output("tbl_JOIN_LEFTANTI_TD_3791_output", 6100000, 2, "");
    tbl_JOIN_LEFTANTI_TD_3791_output.allocateHost();
    Table tbl_Filter_TD_4831_output("tbl_Filter_TD_4831_output", 6100000, 3, "");
    tbl_Filter_TD_4831_output.allocateHost();
    Table tbl_Project_TD_4622_output("tbl_Project_TD_4622_output", 6100000, 1, "");
    tbl_Project_TD_4622_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5815_input;
    tbl_SerializeFromObject_TD_5815_input = Table("customer", customer_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5815_input.addCol("c_custkey", 4);
    tbl_SerializeFromObject_TD_5815_input.addCol("c_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_5815_input.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_5815_input.allocateHost();
    tbl_SerializeFromObject_TD_5815_input.loadHost();
    Table tbl_Aggregate_TD_5187_output("tbl_Aggregate_TD_5187_output", 6100000, 1, "");
    tbl_Aggregate_TD_5187_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5512_input;
    tbl_SerializeFromObject_TD_5512_input = Table("orders", orders_n, 1, in_dir);
    tbl_SerializeFromObject_TD_5512_input.addCol("o_custkey", 4);
    tbl_SerializeFromObject_TD_5512_input.allocateHost();
    tbl_SerializeFromObject_TD_5512_input.loadHost();
    Table tbl_Project_TD_6825_output("tbl_Project_TD_6825_output", 6100000, 1, "");
    tbl_Project_TD_6825_output.allocateHost();
    Table tbl_Filter_TD_7317_output("tbl_Filter_TD_7317_output", 6100000, 1, "");
    tbl_Filter_TD_7317_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8371_input;
    tbl_SerializeFromObject_TD_8371_input = Table("customer", customer_n, 2, in_dir);
    tbl_SerializeFromObject_TD_8371_input.addCol("c_acctbal", 4);
    tbl_SerializeFromObject_TD_8371_input.addCol("c_phone", TPCH_READ_PHONE_LEN+1);
    tbl_SerializeFromObject_TD_8371_input.allocateHost();
    tbl_SerializeFromObject_TD_8371_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_899_s, tv_r_Filter_7_899_e;
    gettimeofday(&tv_r_Filter_7_899_s, 0);
    SW_Filter_TD_7317(tbl_SerializeFromObject_TD_8371_input, tbl_Filter_TD_7317_output);
    gettimeofday(&tv_r_Filter_7_899_e, 0);

    struct timeval tv_r_Project_6_308_s, tv_r_Project_6_308_e;
    gettimeofday(&tv_r_Project_6_308_s, 0);
    SW_Project_TD_6825(tbl_Filter_TD_7317_output, tbl_Project_TD_6825_output);
    gettimeofday(&tv_r_Project_6_308_e, 0);

    struct timeval tv_r_Aggregate_5_24_s, tv_r_Aggregate_5_24_e;
    gettimeofday(&tv_r_Aggregate_5_24_s, 0);
    SW_Aggregate_TD_5187(tbl_Project_TD_6825_output, tbl_Aggregate_TD_5187_output);
    gettimeofday(&tv_r_Aggregate_5_24_e, 0);

    struct timeval tv_r_Project_4_194_s, tv_r_Project_4_194_e;
    gettimeofday(&tv_r_Project_4_194_s, 0);
    SW_Project_TD_4622(tbl_SerializeFromObject_TD_5512_input, tbl_Project_TD_4622_output);
    gettimeofday(&tv_r_Project_4_194_e, 0);

    struct timeval tv_r_Filter_4_952_s, tv_r_Filter_4_952_e;
    gettimeofday(&tv_r_Filter_4_952_s, 0);
    SW_Filter_TD_4831(tbl_SerializeFromObject_TD_5815_input, tbl_Aggregate_TD_5187_output, tbl_Filter_TD_4831_output);
    gettimeofday(&tv_r_Filter_4_952_e, 0);

    struct timeval tv_r_JOIN_LEFTANTI_3_904_s, tv_r_JOIN_LEFTANTI_3_904_e;
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_904_s, 0);
    SW_JOIN_LEFTANTI_TD_3791(tbl_Filter_TD_4831_output, tbl_Project_TD_4622_output, tbl_JOIN_LEFTANTI_TD_3791_output);
    gettimeofday(&tv_r_JOIN_LEFTANTI_3_904_e, 0);

    struct timeval tv_r_Project_2_897_s, tv_r_Project_2_897_e;
    gettimeofday(&tv_r_Project_2_897_s, 0);
    SW_Project_TD_283(tbl_JOIN_LEFTANTI_TD_3791_output, tbl_SerializeFromObject_TD_5815_input, tbl_Project_TD_283_output);
    gettimeofday(&tv_r_Project_2_897_e, 0);

    struct timeval tv_r_Aggregate_1_562_s, tv_r_Aggregate_1_562_e;
    gettimeofday(&tv_r_Aggregate_1_562_s, 0);
    SW_Aggregate_TD_1182(tbl_Project_TD_283_output, tbl_Aggregate_TD_1182_output);
    gettimeofday(&tv_r_Aggregate_1_562_e, 0);

    struct timeval tv_r_Sort_0_546_s, tv_r_Sort_0_546_e;
    gettimeofday(&tv_r_Sort_0_546_s, 0);
    SW_Sort_TD_0194(tbl_Aggregate_TD_1182_output, tbl_Sort_TD_0194_output);
    gettimeofday(&tv_r_Sort_0_546_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_899_s, &tv_r_Filter_7_899_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8371_input: " << tbl_SerializeFromObject_TD_8371_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_6: " << tvdiff(&tv_r_Project_6_308_s, &tv_r_Project_6_308_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7317_output: " << tbl_Filter_TD_7317_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_24_s, &tv_r_Aggregate_5_24_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_6825_output: " << tbl_Project_TD_6825_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_4: " << tvdiff(&tv_r_Project_4_194_s, &tv_r_Project_4_194_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5512_input: " << tbl_SerializeFromObject_TD_5512_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_952_s, &tv_r_Filter_4_952_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5815_input: " << tbl_SerializeFromObject_TD_5815_input.getNumRow() << " " << "tbl_Aggregate_TD_5187_output: " << tbl_Aggregate_TD_5187_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTANTI_3: " << tvdiff(&tv_r_JOIN_LEFTANTI_3_904_s, &tv_r_JOIN_LEFTANTI_3_904_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4831_output: " << tbl_Filter_TD_4831_output.getNumRow() << " " << "tbl_Project_TD_4622_output: " << tbl_Project_TD_4622_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_2: " << tvdiff(&tv_r_Project_2_897_s, &tv_r_Project_2_897_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTANTI_TD_3791_output: " << tbl_JOIN_LEFTANTI_TD_3791_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_562_s, &tv_r_Aggregate_1_562_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_283_output: " << tbl_Project_TD_283_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_546_s, &tv_r_Sort_0_546_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1182_output: " << tbl_Aggregate_TD_1182_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 8.839897 * 1000 << "ms" << std::endl; 
    return 0; 
}
