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

#include "cfgFunc_q39.hpp" 
#include "q39.hpp" 

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
    std::cout << "NOTE:running query #39\n."; 
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
    Table tbl_Sort_TD_0467_output("tbl_Sort_TD_0467_output", 6100000, 10, "");
    tbl_Sort_TD_0467_output.allocateHost();
    Table tbl_Project_TD_1615_output("tbl_Project_TD_1615_output", 6100000, 10, "");
    tbl_Project_TD_1615_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2757_output("tbl_JOIN_INNER_TD_2757_output", 6100000, 10, "");
    tbl_JOIN_INNER_TD_2757_output.allocateHost();
    Table tbl_Project_TD_3376_output("tbl_Project_TD_3376_output", 6100000, 5, "");
    tbl_Project_TD_3376_output.allocateHost();
    Table tbl_Project_TD_3778_output("tbl_Project_TD_3778_output", 6100000, 5, "");
    tbl_Project_TD_3778_output.allocateHost();
    Table tbl_Filter_TD_4971_output("tbl_Filter_TD_4971_output", 6100000, 5, "");
    tbl_Filter_TD_4971_output.allocateHost();
    Table tbl_Filter_TD_4995_output("tbl_Filter_TD_4995_output", 6100000, 5, "");
    tbl_Filter_TD_4995_output.allocateHost();
    Table tbl_Aggregate_TD_5678_output("tbl_Aggregate_TD_5678_output", 6100000, 5, "");
    tbl_Aggregate_TD_5678_output.allocateHost();
    Table tbl_Aggregate_TD_5845_output("tbl_Aggregate_TD_5845_output", 6100000, 5, "");
    tbl_Aggregate_TD_5845_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6529_output("tbl_JOIN_INNER_TD_6529_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6529_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6541_output("tbl_JOIN_INNER_TD_6541_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_6541_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7604_output("tbl_JOIN_INNER_TD_7604_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7604_output.allocateHost();
    Table tbl_Filter_TD_7805_output("tbl_Filter_TD_7805_output", 6100000, 2, "");
    tbl_Filter_TD_7805_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7281_output("tbl_JOIN_INNER_TD_7281_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7281_output.allocateHost();
    Table tbl_Filter_TD_7950_output("tbl_Filter_TD_7950_output", 6100000, 2, "");
    tbl_Filter_TD_7950_output.allocateHost();
    Table tbl_JOIN_INNER_TD_861_output("tbl_JOIN_INNER_TD_861_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_861_output.allocateHost();
    Table tbl_Filter_TD_8366_output("tbl_Filter_TD_8366_output", 6100000, 2, "");
    tbl_Filter_TD_8366_output.allocateHost();
    Table tbl_SerializeFromObject_TD_867_input;
    tbl_SerializeFromObject_TD_867_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_867_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_867_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_867_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_867_input.allocateHost();
    tbl_SerializeFromObject_TD_867_input.loadHost();
    Table tbl_JOIN_INNER_TD_844_output("tbl_JOIN_INNER_TD_844_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_844_output.allocateHost();
    Table tbl_Filter_TD_8741_output("tbl_Filter_TD_8741_output", 6100000, 2, "");
    tbl_Filter_TD_8741_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8119_input;
    tbl_SerializeFromObject_TD_8119_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8119_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8119_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8119_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8119_input.allocateHost();
    tbl_SerializeFromObject_TD_8119_input.loadHost();
    Table tbl_Filter_TD_9166_output("tbl_Filter_TD_9166_output", 6100000, 4, "");
    tbl_Filter_TD_9166_output.allocateHost();
    Table tbl_Filter_TD_9570_output("tbl_Filter_TD_9570_output", 6100000, 1, "");
    tbl_Filter_TD_9570_output.allocateHost();
    Table tbl_SerializeFromObject_TD_996_input;
    tbl_SerializeFromObject_TD_996_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_996_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_996_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_996_input.allocateHost();
    tbl_SerializeFromObject_TD_996_input.loadHost();
    Table tbl_Filter_TD_9829_output("tbl_Filter_TD_9829_output", 6100000, 4, "");
    tbl_Filter_TD_9829_output.allocateHost();
    Table tbl_Filter_TD_9946_output("tbl_Filter_TD_9946_output", 6100000, 1, "");
    tbl_Filter_TD_9946_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9792_input;
    tbl_SerializeFromObject_TD_9792_input = Table("warehouse", warehouse_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9792_input.addCol("w_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_9792_input.addCol("w_warehouse_name", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9792_input.allocateHost();
    tbl_SerializeFromObject_TD_9792_input.loadHost();
    Table tbl_SerializeFromObject_TD_10514_input;
    tbl_SerializeFromObject_TD_10514_input = Table("inventory", inventory_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10514_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_10514_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_10514_input.addCol("inv_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10514_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_10514_input.allocateHost();
    tbl_SerializeFromObject_TD_10514_input.loadHost();
    Table tbl_SerializeFromObject_TD_10274_input;
    tbl_SerializeFromObject_TD_10274_input = Table("item", item_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_10274_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10274_input.allocateHost();
    tbl_SerializeFromObject_TD_10274_input.loadHost();
    Table tbl_SerializeFromObject_TD_10307_input;
    tbl_SerializeFromObject_TD_10307_input = Table("inventory", inventory_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_10307_input.addCol("inv_date_sk", 4);
    tbl_SerializeFromObject_TD_10307_input.addCol("inv_item_sk", 4);
    tbl_SerializeFromObject_TD_10307_input.addCol("inv_warehouse_sk", 4);
    tbl_SerializeFromObject_TD_10307_input.addCol("inv_quantity_on_hand", 4);
    tbl_SerializeFromObject_TD_10307_input.allocateHost();
    tbl_SerializeFromObject_TD_10307_input.loadHost();
    Table tbl_SerializeFromObject_TD_10398_input;
    tbl_SerializeFromObject_TD_10398_input = Table("item", item_n, 1, in_dir, "orc");
    tbl_SerializeFromObject_TD_10398_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10398_input.allocateHost();
    tbl_SerializeFromObject_TD_10398_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_9_871200_s, tv_r_Filter_9_871200_e;
    gettimeofday(&tv_r_Filter_9_871200_s, 0);
    SW_Filter_TD_9946(tbl_SerializeFromObject_TD_10398_input, tbl_Filter_TD_9946_output);
    gettimeofday(&tv_r_Filter_9_871200_e, 0);

    struct timeval tv_r_Filter_9_309536_s, tv_r_Filter_9_309536_e;
    gettimeofday(&tv_r_Filter_9_309536_s, 0);
    SW_Filter_TD_9829(tbl_SerializeFromObject_TD_10307_input, tbl_Filter_TD_9829_output);
    gettimeofday(&tv_r_Filter_9_309536_e, 0);

    struct timeval tv_r_Filter_9_342318_s, tv_r_Filter_9_342318_e;
    gettimeofday(&tv_r_Filter_9_342318_s, 0);
    SW_Filter_TD_9570(tbl_SerializeFromObject_TD_10274_input, tbl_Filter_TD_9570_output);
    gettimeofday(&tv_r_Filter_9_342318_e, 0);

    struct timeval tv_r_Filter_9_640357_s, tv_r_Filter_9_640357_e;
    gettimeofday(&tv_r_Filter_9_640357_s, 0);
    SW_Filter_TD_9166(tbl_SerializeFromObject_TD_10514_input, tbl_Filter_TD_9166_output);
    gettimeofday(&tv_r_Filter_9_640357_e, 0);

    struct timeval tv_r_Filter_8_920739_s, tv_r_Filter_8_920739_e;
    gettimeofday(&tv_r_Filter_8_920739_s, 0);
    SW_Filter_TD_8741(tbl_SerializeFromObject_TD_9792_input, tbl_Filter_TD_8741_output);
    gettimeofday(&tv_r_Filter_8_920739_e, 0);

    struct timeval tv_r_JOIN_INNER_8_670606_s, tv_r_JOIN_INNER_8_670606_e;
    gettimeofday(&tv_r_JOIN_INNER_8_670606_s, 0);
    SW_JOIN_INNER_TD_844(tbl_Filter_TD_9829_output, tbl_Filter_TD_9946_output, tbl_JOIN_INNER_TD_844_output);
    gettimeofday(&tv_r_JOIN_INNER_8_670606_e, 0);

    struct timeval tv_r_Filter_8_329014_s, tv_r_Filter_8_329014_e;
    gettimeofday(&tv_r_Filter_8_329014_s, 0);
    SW_Filter_TD_8366(tbl_SerializeFromObject_TD_996_input, tbl_Filter_TD_8366_output);
    gettimeofday(&tv_r_Filter_8_329014_e, 0);

    struct timeval tv_r_JOIN_INNER_8_623088_s, tv_r_JOIN_INNER_8_623088_e;
    gettimeofday(&tv_r_JOIN_INNER_8_623088_s, 0);
    SW_JOIN_INNER_TD_861(tbl_Filter_TD_9166_output, tbl_Filter_TD_9570_output, tbl_JOIN_INNER_TD_861_output);
    gettimeofday(&tv_r_JOIN_INNER_8_623088_e, 0);

    struct timeval tv_r_Filter_7_628684_s, tv_r_Filter_7_628684_e;
    gettimeofday(&tv_r_Filter_7_628684_s, 0);
    SW_Filter_TD_7950(tbl_SerializeFromObject_TD_8119_input, tbl_Filter_TD_7950_output);
    gettimeofday(&tv_r_Filter_7_628684_e, 0);

    struct timeval tv_r_JOIN_INNER_7_387725_s, tv_r_JOIN_INNER_7_387725_e;
    gettimeofday(&tv_r_JOIN_INNER_7_387725_s, 0);
    SW_JOIN_INNER_TD_7281(tbl_JOIN_INNER_TD_844_output, tbl_Filter_TD_8741_output, tbl_JOIN_INNER_TD_7281_output);
    gettimeofday(&tv_r_JOIN_INNER_7_387725_e, 0);

    struct timeval tv_r_Filter_7_875239_s, tv_r_Filter_7_875239_e;
    gettimeofday(&tv_r_Filter_7_875239_s, 0);
    SW_Filter_TD_7805(tbl_SerializeFromObject_TD_867_input, tbl_Filter_TD_7805_output);
    gettimeofday(&tv_r_Filter_7_875239_e, 0);

    struct timeval tv_r_JOIN_INNER_7_880286_s, tv_r_JOIN_INNER_7_880286_e;
    gettimeofday(&tv_r_JOIN_INNER_7_880286_s, 0);
    SW_JOIN_INNER_TD_7604(tbl_JOIN_INNER_TD_861_output, tbl_Filter_TD_8366_output, tbl_JOIN_INNER_TD_7604_output);
    gettimeofday(&tv_r_JOIN_INNER_7_880286_e, 0);

    struct timeval tv_r_JOIN_INNER_6_514737_s, tv_r_JOIN_INNER_6_514737_e;
    gettimeofday(&tv_r_JOIN_INNER_6_514737_s, 0);
    SW_JOIN_INNER_TD_6541(tbl_JOIN_INNER_TD_7281_output, tbl_Filter_TD_7950_output, tbl_JOIN_INNER_TD_6541_output);
    gettimeofday(&tv_r_JOIN_INNER_6_514737_e, 0);

    struct timeval tv_r_JOIN_INNER_6_333804_s, tv_r_JOIN_INNER_6_333804_e;
    gettimeofday(&tv_r_JOIN_INNER_6_333804_s, 0);
    SW_JOIN_INNER_TD_6529(tbl_JOIN_INNER_TD_7604_output, tbl_Filter_TD_7805_output, tbl_JOIN_INNER_TD_6529_output);
    gettimeofday(&tv_r_JOIN_INNER_6_333804_e, 0);

    struct timeval tv_r_Aggregate_5_413160_s, tv_r_Aggregate_5_413160_e;
    gettimeofday(&tv_r_Aggregate_5_413160_s, 0);
    SW_Aggregate_TD_5845(tbl_JOIN_INNER_TD_6541_output, tbl_Aggregate_TD_5845_output);
    gettimeofday(&tv_r_Aggregate_5_413160_e, 0);

    struct timeval tv_r_Aggregate_5_265249_s, tv_r_Aggregate_5_265249_e;
    gettimeofday(&tv_r_Aggregate_5_265249_s, 0);
    SW_Aggregate_TD_5678(tbl_JOIN_INNER_TD_6529_output, tbl_Aggregate_TD_5678_output);
    gettimeofday(&tv_r_Aggregate_5_265249_e, 0);

    struct timeval tv_r_Filter_4_874055_s, tv_r_Filter_4_874055_e;
    gettimeofday(&tv_r_Filter_4_874055_s, 0);
    SW_Filter_TD_4995(tbl_Aggregate_TD_5845_output, tbl_Filter_TD_4995_output);
    gettimeofday(&tv_r_Filter_4_874055_e, 0);

    struct timeval tv_r_Filter_4_738664_s, tv_r_Filter_4_738664_e;
    gettimeofday(&tv_r_Filter_4_738664_s, 0);
    SW_Filter_TD_4971(tbl_Aggregate_TD_5678_output, tbl_Filter_TD_4971_output);
    gettimeofday(&tv_r_Filter_4_738664_e, 0);

    struct timeval tv_r_Project_3_122110_s, tv_r_Project_3_122110_e;
    gettimeofday(&tv_r_Project_3_122110_s, 0);
    SW_Project_TD_3778(tbl_Filter_TD_4995_output, tbl_Project_TD_3778_output);
    gettimeofday(&tv_r_Project_3_122110_e, 0);

    struct timeval tv_r_Project_3_321370_s, tv_r_Project_3_321370_e;
    gettimeofday(&tv_r_Project_3_321370_s, 0);
    SW_Project_TD_3376(tbl_Filter_TD_4971_output, tbl_Project_TD_3376_output);
    gettimeofday(&tv_r_Project_3_321370_e, 0);

    struct timeval tv_r_JOIN_INNER_2_299142_s, tv_r_JOIN_INNER_2_299142_e;
    gettimeofday(&tv_r_JOIN_INNER_2_299142_s, 0);
    SW_JOIN_INNER_TD_2757(tbl_Project_TD_3376_output, tbl_Project_TD_3778_output, tbl_JOIN_INNER_TD_2757_output);
    gettimeofday(&tv_r_JOIN_INNER_2_299142_e, 0);

    struct timeval tv_r_Project_1_335288_s, tv_r_Project_1_335288_e;
    gettimeofday(&tv_r_Project_1_335288_s, 0);
    SW_Project_TD_1615(tbl_JOIN_INNER_TD_2757_output, tbl_Project_TD_1615_output);
    gettimeofday(&tv_r_Project_1_335288_e, 0);

    struct timeval tv_r_Sort_0_713909_s, tv_r_Sort_0_713909_e;
    gettimeofday(&tv_r_Sort_0_713909_s, 0);
    SW_Sort_TD_0467(tbl_Project_TD_1615_output, tbl_Sort_TD_0467_output);
    gettimeofday(&tv_r_Sort_0_713909_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_871200_s, &tv_r_Filter_9_871200_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10398_input: " << tbl_SerializeFromObject_TD_10398_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_309536_s, &tv_r_Filter_9_309536_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10307_input: " << tbl_SerializeFromObject_TD_10307_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_342318_s, &tv_r_Filter_9_342318_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10274_input: " << tbl_SerializeFromObject_TD_10274_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_640357_s, &tv_r_Filter_9_640357_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10514_input: " << tbl_SerializeFromObject_TD_10514_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_920739_s, &tv_r_Filter_8_920739_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9792_input: " << tbl_SerializeFromObject_TD_9792_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_670606_s, &tv_r_JOIN_INNER_8_670606_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9829_output: " << tbl_Filter_TD_9829_output.getNumRow() << " " << "tbl_Filter_TD_9946_output: " << tbl_Filter_TD_9946_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_329014_s, &tv_r_Filter_8_329014_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_996_input: " << tbl_SerializeFromObject_TD_996_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_623088_s, &tv_r_JOIN_INNER_8_623088_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_9166_output: " << tbl_Filter_TD_9166_output.getNumRow() << " " << "tbl_Filter_TD_9570_output: " << tbl_Filter_TD_9570_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_628684_s, &tv_r_Filter_7_628684_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8119_input: " << tbl_SerializeFromObject_TD_8119_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_387725_s, &tv_r_JOIN_INNER_7_387725_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_844_output: " << tbl_JOIN_INNER_TD_844_output.getNumRow() << " " << "tbl_Filter_TD_8741_output: " << tbl_Filter_TD_8741_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_875239_s, &tv_r_Filter_7_875239_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_867_input: " << tbl_SerializeFromObject_TD_867_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_880286_s, &tv_r_JOIN_INNER_7_880286_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_861_output: " << tbl_JOIN_INNER_TD_861_output.getNumRow() << " " << "tbl_Filter_TD_8366_output: " << tbl_Filter_TD_8366_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_514737_s, &tv_r_JOIN_INNER_6_514737_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7281_output: " << tbl_JOIN_INNER_TD_7281_output.getNumRow() << " " << "tbl_Filter_TD_7950_output: " << tbl_Filter_TD_7950_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_333804_s, &tv_r_JOIN_INNER_6_333804_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7604_output: " << tbl_JOIN_INNER_TD_7604_output.getNumRow() << " " << "tbl_Filter_TD_7805_output: " << tbl_Filter_TD_7805_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_413160_s, &tv_r_Aggregate_5_413160_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6541_output: " << tbl_JOIN_INNER_TD_6541_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_5: " << tvdiff(&tv_r_Aggregate_5_265249_s, &tv_r_Aggregate_5_265249_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6529_output: " << tbl_JOIN_INNER_TD_6529_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_874055_s, &tv_r_Filter_4_874055_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5845_output: " << tbl_Aggregate_TD_5845_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_738664_s, &tv_r_Filter_4_738664_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_5678_output: " << tbl_Aggregate_TD_5678_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_122110_s, &tv_r_Project_3_122110_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4995_output: " << tbl_Filter_TD_4995_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_3: " << tvdiff(&tv_r_Project_3_321370_s, &tv_r_Project_3_321370_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4971_output: " << tbl_Filter_TD_4971_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_299142_s, &tv_r_JOIN_INNER_2_299142_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_3376_output: " << tbl_Project_TD_3376_output.getNumRow() << " " << "tbl_Project_TD_3778_output: " << tbl_Project_TD_3778_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_1: " << tvdiff(&tv_r_Project_1_335288_s, &tv_r_Project_1_335288_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2757_output: " << tbl_JOIN_INNER_TD_2757_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_713909_s, &tv_r_Sort_0_713909_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_1615_output: " << tbl_Project_TD_1615_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 2.976686 * 1000 << "ms" << std::endl; 
    return 0; 
}
