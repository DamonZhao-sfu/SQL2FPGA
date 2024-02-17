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

#include "cfgFunc_q26.hpp" 
#include "q26.hpp" 

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
    std::cout << "NOTE:running query #26\n."; 
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
    Table tbl_GlobalLimit_TD_0793_output("tbl_GlobalLimit_TD_0793_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0793_output.allocateHost();
    Table tbl_LocalLimit_TD_1686_output("tbl_LocalLimit_TD_1686_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1686_output.allocateHost();
    Table tbl_Sort_TD_2748_output("tbl_Sort_TD_2748_output", 6100000, 5, "");
    tbl_Sort_TD_2748_output.allocateHost();
    Table tbl_Aggregate_TD_3797_output("tbl_Aggregate_TD_3797_output", 6100000, 5, "");
    tbl_Aggregate_TD_3797_output.allocateHost();
    Table tbl_JOIN_INNER_TD_4435_output("tbl_JOIN_INNER_TD_4435_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_4435_output.allocateHost();
    Table tbl_JOIN_INNER_TD_5860_output("tbl_JOIN_INNER_TD_5860_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_5860_output.allocateHost();
    Table tbl_Filter_TD_5309_output("tbl_Filter_TD_5309_output", 6100000, 1, "");
    tbl_Filter_TD_5309_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6882_output("tbl_JOIN_INNER_TD_6882_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_6882_output.allocateHost();
    Table tbl_Filter_TD_6251_output("tbl_Filter_TD_6251_output", 6100000, 2, "");
    tbl_Filter_TD_6251_output.allocateHost();
    Table tbl_SerializeFromObject_TD_6710_input;
    tbl_SerializeFromObject_TD_6710_input = Table("promotion", promotion_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_6710_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_6710_input.addCol("p_channel_email", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6710_input.addCol("p_channel_event", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_6710_input.allocateHost();
    tbl_SerializeFromObject_TD_6710_input.loadHost();
    Table tbl_JOIN_INNER_TD_7570_output("tbl_JOIN_INNER_TD_7570_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_7570_output.allocateHost();
    Table tbl_Filter_TD_7802_output("tbl_Filter_TD_7802_output", 6100000, 1, "");
    tbl_Filter_TD_7802_output.allocateHost();
    Table tbl_SerializeFromObject_TD_7910_input;
    tbl_SerializeFromObject_TD_7910_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7910_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_7910_input.addCol("i_item_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_7910_input.allocateHost();
    tbl_SerializeFromObject_TD_7910_input.loadHost();
    Table tbl_Filter_TD_8513_output("tbl_Filter_TD_8513_output", 6100000, 8, "");
    tbl_Filter_TD_8513_output.allocateHost();
    Table tbl_Filter_TD_8694_output("tbl_Filter_TD_8694_output", 6100000, 1, "");
    tbl_Filter_TD_8694_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8674_input;
    tbl_SerializeFromObject_TD_8674_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_8674_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8674_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8674_input.allocateHost();
    tbl_SerializeFromObject_TD_8674_input.loadHost();
    Table tbl_SerializeFromObject_TD_9416_input;
    tbl_SerializeFromObject_TD_9416_input = Table("catalog_sales", catalog_sales_n, 8, in_dir, "orc");
    tbl_SerializeFromObject_TD_9416_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_9416_input.addCol("cs_bill_cdemo_sk", 4);
    tbl_SerializeFromObject_TD_9416_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_9416_input.addCol("cs_promo_sk", 4);
    tbl_SerializeFromObject_TD_9416_input.addCol("cs_quantity", 4);
    tbl_SerializeFromObject_TD_9416_input.addCol("cs_list_price", 4);
    tbl_SerializeFromObject_TD_9416_input.addCol("cs_sales_price", 4);
    tbl_SerializeFromObject_TD_9416_input.addCol("cs_coupon_amt", 4);
    tbl_SerializeFromObject_TD_9416_input.allocateHost();
    tbl_SerializeFromObject_TD_9416_input.loadHost();
    Table tbl_SerializeFromObject_TD_9506_input;
    tbl_SerializeFromObject_TD_9506_input = Table("customer_demographics", customer_demographics_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_9506_input.addCol("cd_demo_sk", 4);
    tbl_SerializeFromObject_TD_9506_input.addCol("cd_gender", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9506_input.addCol("cd_marital_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9506_input.addCol("cd_education_status", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9506_input.allocateHost();
    tbl_SerializeFromObject_TD_9506_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_8_441598_s, tv_r_Filter_8_441598_e;
    gettimeofday(&tv_r_Filter_8_441598_s, 0);
    SW_Filter_TD_8694(tbl_SerializeFromObject_TD_9506_input, tbl_Filter_TD_8694_output);
    gettimeofday(&tv_r_Filter_8_441598_e, 0);

    struct timeval tv_r_Filter_8_180163_s, tv_r_Filter_8_180163_e;
    gettimeofday(&tv_r_Filter_8_180163_s, 0);
    SW_Filter_TD_8513(tbl_SerializeFromObject_TD_9416_input, tbl_Filter_TD_8513_output);
    gettimeofday(&tv_r_Filter_8_180163_e, 0);

    struct timeval tv_r_Filter_7_38267_s, tv_r_Filter_7_38267_e;
    gettimeofday(&tv_r_Filter_7_38267_s, 0);
    SW_Filter_TD_7802(tbl_SerializeFromObject_TD_8674_input, tbl_Filter_TD_7802_output);
    gettimeofday(&tv_r_Filter_7_38267_e, 0);

    struct timeval tv_r_JOIN_INNER_7_921052_s, tv_r_JOIN_INNER_7_921052_e;
    gettimeofday(&tv_r_JOIN_INNER_7_921052_s, 0);
    SW_JOIN_INNER_TD_7570(tbl_Filter_TD_8513_output, tbl_Filter_TD_8694_output, tbl_JOIN_INNER_TD_7570_output);
    gettimeofday(&tv_r_JOIN_INNER_7_921052_e, 0);

    struct timeval tv_r_Filter_6_80175_s, tv_r_Filter_6_80175_e;
    gettimeofday(&tv_r_Filter_6_80175_s, 0);
    SW_Filter_TD_6251(tbl_SerializeFromObject_TD_7910_input, tbl_Filter_TD_6251_output);
    gettimeofday(&tv_r_Filter_6_80175_e, 0);

    struct timeval tv_r_JOIN_INNER_6_230328_s, tv_r_JOIN_INNER_6_230328_e;
    gettimeofday(&tv_r_JOIN_INNER_6_230328_s, 0);
    SW_JOIN_INNER_TD_6882(tbl_JOIN_INNER_TD_7570_output, tbl_Filter_TD_7802_output, tbl_JOIN_INNER_TD_6882_output);
    gettimeofday(&tv_r_JOIN_INNER_6_230328_e, 0);

    struct timeval tv_r_Filter_5_572440_s, tv_r_Filter_5_572440_e;
    gettimeofday(&tv_r_Filter_5_572440_s, 0);
    SW_Filter_TD_5309(tbl_SerializeFromObject_TD_6710_input, tbl_Filter_TD_5309_output);
    gettimeofday(&tv_r_Filter_5_572440_e, 0);

    struct timeval tv_r_JOIN_INNER_5_848695_s, tv_r_JOIN_INNER_5_848695_e;
    gettimeofday(&tv_r_JOIN_INNER_5_848695_s, 0);
    SW_JOIN_INNER_TD_5860(tbl_JOIN_INNER_TD_6882_output, tbl_Filter_TD_6251_output, tbl_JOIN_INNER_TD_5860_output);
    gettimeofday(&tv_r_JOIN_INNER_5_848695_e, 0);

    struct timeval tv_r_JOIN_INNER_4_751823_s, tv_r_JOIN_INNER_4_751823_e;
    gettimeofday(&tv_r_JOIN_INNER_4_751823_s, 0);
    SW_JOIN_INNER_TD_4435(tbl_JOIN_INNER_TD_5860_output, tbl_Filter_TD_5309_output, tbl_JOIN_INNER_TD_4435_output);
    gettimeofday(&tv_r_JOIN_INNER_4_751823_e, 0);

    struct timeval tv_r_Aggregate_3_804174_s, tv_r_Aggregate_3_804174_e;
    gettimeofday(&tv_r_Aggregate_3_804174_s, 0);
    SW_Aggregate_TD_3797(tbl_JOIN_INNER_TD_4435_output, tbl_Aggregate_TD_3797_output);
    gettimeofday(&tv_r_Aggregate_3_804174_e, 0);

    struct timeval tv_r_Sort_2_605312_s, tv_r_Sort_2_605312_e;
    gettimeofday(&tv_r_Sort_2_605312_s, 0);
    SW_Sort_TD_2748(tbl_Aggregate_TD_3797_output, tbl_Sort_TD_2748_output);
    gettimeofday(&tv_r_Sort_2_605312_e, 0);

    struct timeval tv_r_LocalLimit_1_539384_s, tv_r_LocalLimit_1_539384_e;
    gettimeofday(&tv_r_LocalLimit_1_539384_s, 0);
    SW_LocalLimit_TD_1686(tbl_Sort_TD_2748_output, tbl_LocalLimit_TD_1686_output);
    gettimeofday(&tv_r_LocalLimit_1_539384_e, 0);

    struct timeval tv_r_GlobalLimit_0_835316_s, tv_r_GlobalLimit_0_835316_e;
    gettimeofday(&tv_r_GlobalLimit_0_835316_s, 0);
    SW_GlobalLimit_TD_0793(tbl_LocalLimit_TD_1686_output, tbl_GlobalLimit_TD_0793_output);
    gettimeofday(&tv_r_GlobalLimit_0_835316_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_441598_s, &tv_r_Filter_8_441598_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9506_input: " << tbl_SerializeFromObject_TD_9506_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_180163_s, &tv_r_Filter_8_180163_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9416_input: " << tbl_SerializeFromObject_TD_9416_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_38267_s, &tv_r_Filter_7_38267_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8674_input: " << tbl_SerializeFromObject_TD_8674_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_921052_s, &tv_r_JOIN_INNER_7_921052_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_8513_output: " << tbl_Filter_TD_8513_output.getNumRow() << " " << "tbl_Filter_TD_8694_output: " << tbl_Filter_TD_8694_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_80175_s, &tv_r_Filter_6_80175_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7910_input: " << tbl_SerializeFromObject_TD_7910_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_230328_s, &tv_r_JOIN_INNER_6_230328_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7570_output: " << tbl_JOIN_INNER_TD_7570_output.getNumRow() << " " << "tbl_Filter_TD_7802_output: " << tbl_Filter_TD_7802_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_5: " << tvdiff(&tv_r_Filter_5_572440_s, &tv_r_Filter_5_572440_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_6710_input: " << tbl_SerializeFromObject_TD_6710_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_848695_s, &tv_r_JOIN_INNER_5_848695_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6882_output: " << tbl_JOIN_INNER_TD_6882_output.getNumRow() << " " << "tbl_Filter_TD_6251_output: " << tbl_Filter_TD_6251_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_4: " << tvdiff(&tv_r_JOIN_INNER_4_751823_s, &tv_r_JOIN_INNER_4_751823_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5860_output: " << tbl_JOIN_INNER_TD_5860_output.getNumRow() << " " << "tbl_Filter_TD_5309_output: " << tbl_Filter_TD_5309_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_804174_s, &tv_r_Aggregate_3_804174_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_4435_output: " << tbl_JOIN_INNER_TD_4435_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_605312_s, &tv_r_Sort_2_605312_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3797_output: " << tbl_Aggregate_TD_3797_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_539384_s, &tv_r_LocalLimit_1_539384_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2748_output: " << tbl_Sort_TD_2748_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_835316_s, &tv_r_GlobalLimit_0_835316_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1686_output: " << tbl_LocalLimit_TD_1686_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.7373196 * 1000 << "ms" << std::endl; 
    return 0; 
}
