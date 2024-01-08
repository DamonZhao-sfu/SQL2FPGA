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

#include "cfgFunc_q4.hpp" 
#include "q4.hpp" 

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
    std::cout << "NOTE:running query #4\n."; 
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
    Table tbl_Sort_TD_0268_output("tbl_Sort_TD_0268_output", 6100000, 2, "");
    tbl_Sort_TD_0268_output.allocateHost();
    Table tbl_Aggregate_TD_1534_output("tbl_Aggregate_TD_1534_output", 6100000, 2, "");
    tbl_Aggregate_TD_1534_output.allocateHost();
    Table tbl_JOIN_LEFTSEMI_TD_2767_output("tbl_JOIN_LEFTSEMI_TD_2767_output", 6100000, 1, "");
    tbl_JOIN_LEFTSEMI_TD_2767_output.allocateHost();
    Table tbl_Filter_TD_3599_output("tbl_Filter_TD_3599_output", 6100000, 2, "");
    tbl_Filter_TD_3599_output.allocateHost();
    Table tbl_Project_TD_3816_output("tbl_Project_TD_3816_output", 6100000, 1, "");
    tbl_Project_TD_3816_output.allocateHost();
    Table tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute;
    tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute.addCol("o_orderpriority", 4, 1, 0);
    tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute.allocateHost();
    tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute.loadHost();
    Table tbl_SerializeFromObject_TD_412_input;
    tbl_SerializeFromObject_TD_412_input = Table("orders", orders_n, 3, in_dir);
    tbl_SerializeFromObject_TD_412_input.addCol("o_orderkey", 4);
    tbl_SerializeFromObject_TD_412_input.addCol("o_orderpriority", TPCH_READ_MAXAGG_LEN+1);
    tbl_SerializeFromObject_TD_412_input.addCol("o_orderdate", 4);
    tbl_SerializeFromObject_TD_412_input.allocateHost();
    tbl_SerializeFromObject_TD_412_input.loadHost();
    Table tbl_Filter_TD_483_output("tbl_Filter_TD_483_output", 6100000, 1, "");
    tbl_Filter_TD_483_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5188_input;
    tbl_SerializeFromObject_TD_5188_input = Table("lineitem", lineitem_n, 3, in_dir);
    tbl_SerializeFromObject_TD_5188_input.addCol("l_orderkey", 4);
    tbl_SerializeFromObject_TD_5188_input.addCol("l_commitdate", 4);
    tbl_SerializeFromObject_TD_5188_input.addCol("l_receiptdate", 4);
    tbl_SerializeFromObject_TD_5188_input.allocateHost();
    tbl_SerializeFromObject_TD_5188_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    std::cout << std::endl; 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_4_652_s, tv_r_Filter_4_652_e;
    gettimeofday(&tv_r_Filter_4_652_s, 0);
    SW_Filter_TD_483(tbl_SerializeFromObject_TD_5188_input, tbl_Filter_TD_483_output);
    gettimeofday(&tv_r_Filter_4_652_e, 0);

    struct timeval tv_r_Project_3_545_s, tv_r_Project_3_545_e;
    gettimeofday(&tv_r_Project_3_545_s, 0);
    SW_Project_TD_3816(tbl_Filter_TD_483_output, tbl_Project_TD_3816_output);
    gettimeofday(&tv_r_Project_3_545_e, 0);

    struct timeval tv_r_Filter_3_857_s, tv_r_Filter_3_857_e;
    gettimeofday(&tv_r_Filter_3_857_s, 0);
    SW_Filter_TD_3599(tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute, tbl_Filter_TD_3599_output);
    gettimeofday(&tv_r_Filter_3_857_e, 0);

    struct timeval tv_r_JOIN_LEFTSEMI_2_161_s, tv_r_JOIN_LEFTSEMI_2_161_e;
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_161_s, 0);
    SW_JOIN_LEFTSEMI_TD_2767(tbl_Filter_TD_3599_output, tbl_Project_TD_3816_output, tbl_JOIN_LEFTSEMI_TD_2767_output);
    gettimeofday(&tv_r_JOIN_LEFTSEMI_2_161_e, 0);

    struct timeval tv_r_Aggregate_1_788_s, tv_r_Aggregate_1_788_e;
    gettimeofday(&tv_r_Aggregate_1_788_s, 0);
    SW_Aggregate_TD_1534(tbl_JOIN_LEFTSEMI_TD_2767_output, tbl_SerializeFromObject_TD_412_input, tbl_Aggregate_TD_1534_output);
    gettimeofday(&tv_r_Aggregate_1_788_e, 0);

    struct timeval tv_r_Sort_0_852_s, tv_r_Sort_0_852_e;
    gettimeofday(&tv_r_Sort_0_852_s, 0);
    SW_Sort_TD_0268(tbl_Aggregate_TD_1534_output, tbl_Sort_TD_0268_output);
    gettimeofday(&tv_r_Sort_0_852_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_652_s, &tv_r_Filter_4_652_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5188_input: " << tbl_SerializeFromObject_TD_5188_input.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_545_s, &tv_r_Project_3_545_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_483_output: " << tbl_Filter_TD_483_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_857_s, &tv_r_Filter_3_857_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute: " << tbl_SerializeFromObject_TD_412_input_stringRowIDSubstitute.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTSEMI_2: " << tvdiff(&tv_r_JOIN_LEFTSEMI_2_161_s, &tv_r_JOIN_LEFTSEMI_2_161_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_3599_output: " << tbl_Filter_TD_3599_output.getNumRow() << " " << "tbl_Project_TD_3816_output: " << tbl_Project_TD_3816_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_788_s, &tv_r_Aggregate_1_788_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTSEMI_TD_2767_output: " << tbl_JOIN_LEFTSEMI_TD_2767_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_852_s, &tv_r_Sort_0_852_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_1534_output: " << tbl_Aggregate_TD_1534_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 32.639534 * 1000 << "ms" << std::endl; 
    return 0; 
}
