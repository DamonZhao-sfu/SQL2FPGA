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

#include "cfgFunc_q6.hpp" 
#include "q6.hpp" 

int main(int argc, const char* argv[]) { 
    std::cout << "\n------------ TPC-H Query Test -------------\n"; 
    ArgParser parser(argc, argv); 
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
    std::cout << "NOTE:running query #6\n."; 
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
    // ****************************** Tables **************************** // 
    Table tbl_Sort_TD_0119_output("tbl_Sort_TD_0119_output", 6100000, 2, "");
    tbl_Sort_TD_0119_output.allocateHost();
    Table tbl_Filter_TD_1673_output("tbl_Filter_TD_1673_output", 6100000, 2, "");
    tbl_Filter_TD_1673_output.allocateHost();
    Table tbl_Aggregate_TD_2352_output("tbl_Aggregate_TD_2352_output", 6100000, 2, "");
    tbl_Aggregate_TD_2352_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3693_output("tbl_JOIN_INNER_TD_3693_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_3693_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4841_output("tbl_JOIN_INNER_TD_4841_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_4841_output.allocateHost();
    Table tbl_Filter_TD_4946_output("tbl_Filter_TD_4946_output", 6100000, 1, "");
    tbl_Filter_TD_4946_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5285_output("tbl_JOIN_INNER_TD_5285_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_5285_output.allocateHost();
    Table tbl_Filter_TD_5452_output("tbl_Filter_TD_5452_output", 6100000, 1, "");
    tbl_Filter_TD_5452_output.allocateHost();
    Table tbl_JOIN_LEFTOUTER_TD_5256_output("tbl_JOIN_LEFTOUTER_TD_5256_output", 6100000, 3, "");
    tbl_JOIN_LEFTOUTER_TD_5256_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6917_output("tbl_JOIN_INNER_TD_6917_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_6917_output.allocateHost();
    Table tbl_Filter_TD_6923_output("tbl_Filter_TD_6923_output", 6100000, 3, "");
    tbl_Filter_TD_6923_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6650_input;
    tbl_SerializeFromObject_TD_6650_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_6650_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_6650_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_6650_input.allocateHost();
    tbl_SerializeFromObject_TD_6650_input.loadHost();
    Table tbl_Aggregate_TD_6829_output("tbl_Aggregate_TD_6829_output", 6100000, 1, "");
    tbl_Aggregate_TD_6829_output.allocateHost();
    Table tbl_Filter_TD_648_output("tbl_Filter_TD_648_output", 6100000, 3, "");
    tbl_Filter_TD_648_output.allocateHost();
    Table tbl_Aggregate_TD_6178_output("tbl_Aggregate_TD_6178_output", 6100000, 2, "");
    tbl_Aggregate_TD_6178_output.allocateHost();
    Table tbl_Filter_TD_7961_output("tbl_Filter_TD_7961_output", 6100000, 2, "");
    tbl_Filter_TD_7961_output.allocateHost();
    Table tbl_Filter_TD_715_output("tbl_Filter_TD_715_output", 6100000, 2, "");
    tbl_Filter_TD_715_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7337_input;
    tbl_SerializeFromObject_TD_7337_input = Table("store_sales", store_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7337_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_7337_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_7337_input.addCol("ss_customer_sk", 4);
    tbl_SerializeFromObject_TD_7337_input.allocateHost();
    tbl_SerializeFromObject_TD_7337_input.loadHost();
    Table tbl_Filter_TD_7458_output("tbl_Filter_TD_7458_output", 6100000, 1, "");
    tbl_Filter_TD_7458_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7717_input;
    tbl_SerializeFromObject_TD_7717_input = Table("item", item_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_7717_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7717_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_7717_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7717_input.allocateHost();
    tbl_SerializeFromObject_TD_7717_input.loadHost();
    Table tbl_Filter_TD_7836_output("tbl_Filter_TD_7836_output", 6100000, 2, "");
    tbl_Filter_TD_7836_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8956_input;
    tbl_SerializeFromObject_TD_8956_input = Table("customer_address", customer_address_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8956_input.addCol("ca_address_sk", 4);
    tbl_SerializeFromObject_TD_8956_input.addCol("ca_state", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8956_input.allocateHost();
    tbl_SerializeFromObject_TD_8956_input.loadHost();
    Table tbl_SerializeFromObject_TD_8275_input;
    tbl_SerializeFromObject_TD_8275_input = Table("customer", customer_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8275_input.addCol("c_customer_sk", 4);
    tbl_SerializeFromObject_TD_8275_input.addCol("c_current_addr_sk", 4);
    tbl_SerializeFromObject_TD_8275_input.allocateHost();
    tbl_SerializeFromObject_TD_8275_input.loadHost();
    Table tbl_SerializeFromObject_TD_8537_input;
    tbl_SerializeFromObject_TD_8537_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8537_input.addCol("d_month_seq", 4);
    tbl_SerializeFromObject_TD_8537_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8537_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8537_input.allocateHost();
    tbl_SerializeFromObject_TD_8537_input.loadHost();
    Table tbl_SerializeFromObject_TD_8695_input;
    tbl_SerializeFromObject_TD_8695_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8695_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_8695_input.addCol("i_category", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_8695_input.allocateHost();
    tbl_SerializeFromObject_TD_8695_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_668726_s, tv_r_Filter_7_668726_e;
    gettimeofday(&tv_r_Filter_7_668726_s, 0);
    SW_Filter_TD_7836(tbl_SerializeFromObject_TD_8695_input, tbl_Filter_TD_7836_output);
    gettimeofday(&tv_r_Filter_7_668726_e, 0);

    struct timeval tv_r_Filter_7_145044_s, tv_r_Filter_7_145044_e;
    gettimeofday(&tv_r_Filter_7_145044_s, 0);
    SW_Filter_TD_7458(tbl_SerializeFromObject_TD_8537_input, tbl_Filter_TD_7458_output);
    gettimeofday(&tv_r_Filter_7_145044_e, 0);

    struct timeval tv_r_Filter_7_462423_s, tv_r_Filter_7_462423_e;
    gettimeofday(&tv_r_Filter_7_462423_s, 0);
    SW_Filter_TD_715(tbl_SerializeFromObject_TD_8275_input, tbl_Filter_TD_715_output);
    gettimeofday(&tv_r_Filter_7_462423_e, 0);

    struct timeval tv_r_Filter_7_998821_s, tv_r_Filter_7_998821_e;
    gettimeofday(&tv_r_Filter_7_998821_s, 0);
    SW_Filter_TD_7961(tbl_SerializeFromObject_TD_8956_input, tbl_Filter_TD_7961_output);
    gettimeofday(&tv_r_Filter_7_998821_e, 0);

    struct timeval tv_r_Aggregate_6_470788_s, tv_r_Aggregate_6_470788_e;
    gettimeofday(&tv_r_Aggregate_6_470788_s, 0);
    SW_Aggregate_TD_6178(tbl_Filter_TD_7836_output, tbl_Aggregate_TD_6178_output);
    gettimeofday(&tv_r_Aggregate_6_470788_e, 0);

    struct timeval tv_r_Filter_6_73264_s, tv_r_Filter_6_73264_e;
    gettimeofday(&tv_r_Filter_6_73264_s, 0);
    SW_Filter_TD_648(tbl_SerializeFromObject_TD_7717_input, tbl_Filter_TD_648_output);
    gettimeofday(&tv_r_Filter_6_73264_e, 0);

    struct timeval tv_r_Aggregate_6_435397_s, tv_r_Aggregate_6_435397_e;
    gettimeofday(&tv_r_Aggregate_6_435397_s, 0);
    SW_Aggregate_TD_6829(tbl_Filter_TD_7458_output, tbl_Aggregate_TD_6829_output);
    gettimeofday(&tv_r_Aggregate_6_435397_e, 0);

    struct timeval tv_r_Filter_6_318776_s, tv_r_Filter_6_318776_e;
    gettimeofday(&tv_r_Filter_6_318776_s, 0);
    SW_Filter_TD_6923(tbl_SerializeFromObject_TD_7337_input, tbl_Filter_TD_6923_output);
    gettimeofday(&tv_r_Filter_6_318776_e, 0);

    struct timeval tv_r_JOIN_INNER_6_703530_s, tv_r_JOIN_INNER_6_703530_e;
    gettimeofday(&tv_r_JOIN_INNER_6_703530_s, 0);
    SW_JOIN_INNER_TD_6917(tbl_Filter_TD_7961_output, tbl_Filter_TD_715_output, tbl_JOIN_INNER_TD_6917_output);
    gettimeofday(&tv_r_JOIN_INNER_6_703530_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_5_754334_s, tv_r_JOIN_LEFTOUTER_5_754334_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_754334_s, 0);
    SW_JOIN_LEFTOUTER_TD_5256(tbl_Filter_TD_648_output, tbl_Aggregate_TD_6178_output, tbl_JOIN_LEFTOUTER_TD_5256_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_5_754334_e, 0);

    struct timeval tv_r_Filter_5_21869_s, tv_r_Filter_5_21869_e;
    gettimeofday(&tv_r_Filter_5_21869_s, 0);
    SW_Filter_TD_5452(tbl_SerializeFromObject_TD_6650_input, tbl_Aggregate_TD_6829_output, tbl_Filter_TD_5452_output);
    gettimeofday(&tv_r_Filter_5_21869_e, 0);

    struct timeval tv_r_JOIN_INNER_5_477186_s, tv_r_JOIN_INNER_5_477186_e;
    gettimeofday(&tv_r_JOIN_INNER_5_477186_s, 0);
    SW_JOIN_INNER_TD_5285(tbl_JOIN_INNER_TD_6917_output, tbl_Filter_TD_6923_output, tbl_JOIN_INNER_TD_5285_output);
    gettimeofday(&tv_r_JOIN_INNER_5_477186_e, 0);

    struct timeval tv_r_Filter_4_820168_s, tv_r_Filter_4_820168_e;
    gettimeofday(&tv_r_Filter_4_820168_s, 0);
    SW_Filter_TD_4946(tbl_JOIN_LEFTOUTER_TD_5256_output, tbl_Filter_TD_4946_output);
    gettimeofday(&tv_r_Filter_4_820168_e, 0);

    struct timeval tv_r_JOIN_INNER_4_285442_s, tv_r_JOIN_INNER_4_285442_e;
    gettimeofday(&tv_r_JOIN_INNER_4_285442_s, 0);
    SW_JOIN_INNER_TD_4841(tbl_JOIN_INNER_TD_5285_output, tbl_Filter_TD_5452_output, tbl_JOIN_INNER_TD_4841_output);
    gettimeofday(&tv_r_JOIN_INNER_4_285442_e, 0);

    struct timeval tv_r_JOIN_INNER_3_262105_s, tv_r_JOIN_INNER_3_262105_e;
    gettimeofday(&tv_r_JOIN_INNER_3_262105_s, 0);
    SW_JOIN_INNER_TD_3693(tbl_JOIN_INNER_TD_4841_output, tbl_Filter_TD_4946_output, tbl_JOIN_INNER_TD_3693_output);
    gettimeofday(&tv_r_JOIN_INNER_3_262105_e, 0);

    struct timeval tv_r_Aggregate_2_123715_s, tv_r_Aggregate_2_123715_e;
    gettimeofday(&tv_r_Aggregate_2_123715_s, 0);
    SW_Aggregate_TD_2352(tbl_JOIN_INNER_TD_3693_output, tbl_Aggregate_TD_2352_output);
    gettimeofday(&tv_r_Aggregate_2_123715_e, 0);

    struct timeval tv_r_Filter_1_697503_s, tv_r_Filter_1_697503_e;
    gettimeofday(&tv_r_Filter_1_697503_s, 0);
    SW_Filter_TD_1673(tbl_Aggregate_TD_2352_output, tbl_Filter_TD_1673_output);
    gettimeofday(&tv_r_Filter_1_697503_e, 0);

    struct timeval tv_r_Sort_0_837029_s, tv_r_Sort_0_837029_e;
    gettimeofday(&tv_r_Sort_0_837029_s, 0);
    SW_Sort_TD_0119(tbl_Filter_TD_1673_output, tbl_Sort_TD_0119_output);
    gettimeofday(&tv_r_Sort_0_837029_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_668726_s, &tv_r_Filter_7_668726_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8695_input: " << tbl_SerializeFromObject_TD_8695_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_145044_s, &tv_r_Filter_7_145044_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8537_input: " << tbl_SerializeFromObject_TD_8537_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_462423_s, &tv_r_Filter_7_462423_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8275_input: " << tbl_SerializeFromObject_TD_8275_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_998821_s, &tv_r_Filter_7_998821_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8956_input: " << tbl_SerializeFromObject_TD_8956_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_470788_s, &tv_r_Aggregate_6_470788_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7836_output: " << tbl_Filter_TD_7836_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_73264_s, &tv_r_Filter_6_73264_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7717_input: " << tbl_SerializeFromObject_TD_7717_input.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_435397_s, &tv_r_Aggregate_6_435397_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7458_output: " << tbl_Filter_TD_7458_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_318776_s, &tv_r_Filter_6_318776_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7337_input: " << tbl_SerializeFromObject_TD_7337_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_703530_s, &tv_r_JOIN_INNER_6_703530_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7961_output: " << tbl_Filter_TD_7961_output.getNumRow() << " " << "tbl_Filter_TD_715_output: " << tbl_Filter_TD_715_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_5: " << tvdiff(&tv_r_JOIN_LEFTOUTER_5_754334_s, &tv_r_JOIN_LEFTOUTER_5_754334_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_648_output: " << tbl_Filter_TD_648_output.getNumRow() << " " << "tbl_Aggregate_TD_6178_output: " << tbl_Aggregate_TD_6178_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_21869_s, &tv_r_Filter_5_21869_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6650_input: " << tbl_SerializeFromObject_TD_6650_input.getNumRow() << " " << "tbl_Aggregate_TD_6829_output: " << tbl_Aggregate_TD_6829_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_477186_s, &tv_r_JOIN_INNER_5_477186_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6917_output: " << tbl_JOIN_INNER_TD_6917_output.getNumRow() << " " << "tbl_Filter_TD_6923_output: " << tbl_Filter_TD_6923_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_820168_s, &tv_r_Filter_4_820168_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_5256_output: " << tbl_JOIN_LEFTOUTER_TD_5256_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_285442_s, &tv_r_JOIN_INNER_4_285442_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5285_output: " << tbl_JOIN_INNER_TD_5285_output.getNumRow() << " " << "tbl_Filter_TD_5452_output: " << tbl_Filter_TD_5452_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_262105_s, &tv_r_JOIN_INNER_3_262105_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4841_output: " << tbl_JOIN_INNER_TD_4841_output.getNumRow() << " " << "tbl_Filter_TD_4946_output: " << tbl_Filter_TD_4946_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_2: " << tvdiff(&tv_r_Aggregate_2_123715_s, &tv_r_Aggregate_2_123715_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3693_output: " << tbl_JOIN_INNER_TD_3693_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_1: " << tvdiff(&tv_r_Filter_1_697503_s, &tv_r_Filter_1_697503_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_2352_output: " << tbl_Aggregate_TD_2352_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_837029_s, &tv_r_Sort_0_837029_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_1673_output: " << tbl_Filter_TD_1673_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.4290094 * 1000 << "ms" << std::endl; 
    return 0; 
}
