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

#include "cfgFunc_q71.hpp" 
#include "q71.hpp" 

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
    std::cout << "NOTE:running query #71\n."; 
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
    Table tbl_Sort_TD_0725_output("tbl_Sort_TD_0725_output", 6100000, 5, "");
    tbl_Sort_TD_0725_output.allocateHost();
    Table tbl_Aggregate_TD_115_output("tbl_Aggregate_TD_115_output", 6100000, 5, "");
    tbl_Aggregate_TD_115_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2581_output("tbl_JOIN_INNER_TD_2581_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_2581_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3457_output("tbl_JOIN_INNER_TD_3457_output", 6100000, 4, "");
    tbl_JOIN_INNER_TD_3457_output.allocateHost();
    Table tbl_Filter_TD_3359_output("tbl_Filter_TD_3359_output", 6100000, 3, "");
    tbl_Filter_TD_3359_output.allocateHost();
    Table tbl_Filter_TD_4125_output("tbl_Filter_TD_4125_output", 6100000, 3, "");
    tbl_Filter_TD_4125_output.allocateHost();
    Table tbl_Union_TD_4594_output("tbl_Union_TD_4594_output", 6100000, 3, "");
    tbl_Union_TD_4594_output.allocateHost();
    Table tbl_SerializeFromObject_TD_4799_input;
    tbl_SerializeFromObject_TD_4799_input = Table("time_dim", time_dim_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_4799_input.addCol("t_time_sk", 4);
    tbl_SerializeFromObject_TD_4799_input.addCol("t_hour", 4);
    tbl_SerializeFromObject_TD_4799_input.addCol("t_minute", 4);
    tbl_SerializeFromObject_TD_4799_input.addCol("t_meal_time", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_4799_input.allocateHost();
    tbl_SerializeFromObject_TD_4799_input.loadHost();
    Table tbl_SerializeFromObject_TD_532_input;
    tbl_SerializeFromObject_TD_532_input = Table("item", item_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_532_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_532_input.addCol("i_brand_id", 4);
    tbl_SerializeFromObject_TD_532_input.addCol("i_brand", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_532_input.addCol("i_manager_id", 4);
    tbl_SerializeFromObject_TD_532_input.allocateHost();
    tbl_SerializeFromObject_TD_532_input.loadHost();
    Table tbl_Project_TD_5676_output("tbl_Project_TD_5676_output", 6100000, 3, "");
    tbl_Project_TD_5676_output.allocateHost();
    Table tbl_Project_TD_5972_output("tbl_Project_TD_5972_output", 6100000, 3, "");
    tbl_Project_TD_5972_output.allocateHost();
    Table tbl_Project_TD_557_output("tbl_Project_TD_557_output", 6100000, 3, "");
    tbl_Project_TD_557_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6705_output("tbl_JOIN_INNER_TD_6705_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6705_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6336_output("tbl_JOIN_INNER_TD_6336_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6336_output.allocateHost();
    Table tbl_JOIN_INNER_TD_6757_output("tbl_JOIN_INNER_TD_6757_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_6757_output.allocateHost();
    Table tbl_Filter_TD_7223_output("tbl_Filter_TD_7223_output", 6100000, 4, "");
    tbl_Filter_TD_7223_output.allocateHost();
    Table tbl_Filter_TD_7352_output("tbl_Filter_TD_7352_output", 6100000, 1, "");
    tbl_Filter_TD_7352_output.allocateHost();
    Table tbl_Filter_TD_7827_output("tbl_Filter_TD_7827_output", 6100000, 4, "");
    tbl_Filter_TD_7827_output.allocateHost();
    Table tbl_Filter_TD_7507_output("tbl_Filter_TD_7507_output", 6100000, 1, "");
    tbl_Filter_TD_7507_output.allocateHost();
    Table tbl_Filter_TD_762_output("tbl_Filter_TD_762_output", 6100000, 4, "");
    tbl_Filter_TD_762_output.allocateHost();
    Table tbl_Filter_TD_737_output("tbl_Filter_TD_737_output", 6100000, 1, "");
    tbl_Filter_TD_737_output.allocateHost();
    Table tbl_SerializeFromObject_TD_8594_input;
    tbl_SerializeFromObject_TD_8594_input = Table("web_sales", web_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8594_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8594_input.addCol("ws_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_8594_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_8594_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8594_input.allocateHost();
    tbl_SerializeFromObject_TD_8594_input.loadHost();
    Table tbl_SerializeFromObject_TD_820_input;
    tbl_SerializeFromObject_TD_820_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_820_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_820_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_820_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_820_input.allocateHost();
    tbl_SerializeFromObject_TD_820_input.loadHost();
    Table tbl_SerializeFromObject_TD_8716_input;
    tbl_SerializeFromObject_TD_8716_input = Table("catalog_sales", catalog_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8716_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8716_input.addCol("cs_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_8716_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_8716_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8716_input.allocateHost();
    tbl_SerializeFromObject_TD_8716_input.loadHost();
    Table tbl_SerializeFromObject_TD_8510_input;
    tbl_SerializeFromObject_TD_8510_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8510_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8510_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8510_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8510_input.allocateHost();
    tbl_SerializeFromObject_TD_8510_input.loadHost();
    Table tbl_SerializeFromObject_TD_8103_input;
    tbl_SerializeFromObject_TD_8103_input = Table("store_sales", store_sales_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_8103_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_8103_input.addCol("ss_sold_time_sk", 4);
    tbl_SerializeFromObject_TD_8103_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_8103_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_8103_input.allocateHost();
    tbl_SerializeFromObject_TD_8103_input.loadHost();
    Table tbl_SerializeFromObject_TD_8842_input;
    tbl_SerializeFromObject_TD_8842_input = Table("date_dim", date_dim_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_8842_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_8842_input.addCol("d_moy", 4);
    tbl_SerializeFromObject_TD_8842_input.addCol("d_year", 4);
    tbl_SerializeFromObject_TD_8842_input.allocateHost();
    tbl_SerializeFromObject_TD_8842_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_7_141025_s, tv_r_Filter_7_141025_e;
    gettimeofday(&tv_r_Filter_7_141025_s, 0);
    SW_Filter_TD_737(tbl_SerializeFromObject_TD_8842_input, tbl_Filter_TD_737_output);
    gettimeofday(&tv_r_Filter_7_141025_e, 0);

    struct timeval tv_r_Filter_7_313713_s, tv_r_Filter_7_313713_e;
    gettimeofday(&tv_r_Filter_7_313713_s, 0);
    SW_Filter_TD_762(tbl_SerializeFromObject_TD_8103_input, tbl_Filter_TD_762_output);
    gettimeofday(&tv_r_Filter_7_313713_e, 0);

    struct timeval tv_r_Filter_7_366295_s, tv_r_Filter_7_366295_e;
    gettimeofday(&tv_r_Filter_7_366295_s, 0);
    SW_Filter_TD_7507(tbl_SerializeFromObject_TD_8510_input, tbl_Filter_TD_7507_output);
    gettimeofday(&tv_r_Filter_7_366295_e, 0);

    struct timeval tv_r_Filter_7_446679_s, tv_r_Filter_7_446679_e;
    gettimeofday(&tv_r_Filter_7_446679_s, 0);
    SW_Filter_TD_7827(tbl_SerializeFromObject_TD_8716_input, tbl_Filter_TD_7827_output);
    gettimeofday(&tv_r_Filter_7_446679_e, 0);

    struct timeval tv_r_Filter_7_829257_s, tv_r_Filter_7_829257_e;
    gettimeofday(&tv_r_Filter_7_829257_s, 0);
    SW_Filter_TD_7352(tbl_SerializeFromObject_TD_820_input, tbl_Filter_TD_7352_output);
    gettimeofday(&tv_r_Filter_7_829257_e, 0);

    struct timeval tv_r_Filter_7_820072_s, tv_r_Filter_7_820072_e;
    gettimeofday(&tv_r_Filter_7_820072_s, 0);
    SW_Filter_TD_7223(tbl_SerializeFromObject_TD_8594_input, tbl_Filter_TD_7223_output);
    gettimeofday(&tv_r_Filter_7_820072_e, 0);

    struct timeval tv_r_JOIN_INNER_6_719369_s, tv_r_JOIN_INNER_6_719369_e;
    gettimeofday(&tv_r_JOIN_INNER_6_719369_s, 0);
    SW_JOIN_INNER_TD_6757(tbl_Filter_TD_762_output, tbl_Filter_TD_737_output, tbl_JOIN_INNER_TD_6757_output);
    gettimeofday(&tv_r_JOIN_INNER_6_719369_e, 0);

    struct timeval tv_r_JOIN_INNER_6_981976_s, tv_r_JOIN_INNER_6_981976_e;
    gettimeofday(&tv_r_JOIN_INNER_6_981976_s, 0);
    SW_JOIN_INNER_TD_6336(tbl_Filter_TD_7827_output, tbl_Filter_TD_7507_output, tbl_JOIN_INNER_TD_6336_output);
    gettimeofday(&tv_r_JOIN_INNER_6_981976_e, 0);

    struct timeval tv_r_JOIN_INNER_6_578268_s, tv_r_JOIN_INNER_6_578268_e;
    gettimeofday(&tv_r_JOIN_INNER_6_578268_s, 0);
    SW_JOIN_INNER_TD_6705(tbl_Filter_TD_7223_output, tbl_Filter_TD_7352_output, tbl_JOIN_INNER_TD_6705_output);
    gettimeofday(&tv_r_JOIN_INNER_6_578268_e, 0);

    struct timeval tv_r_Project_5_51662_s, tv_r_Project_5_51662_e;
    gettimeofday(&tv_r_Project_5_51662_s, 0);
    SW_Project_TD_557(tbl_JOIN_INNER_TD_6757_output, tbl_Project_TD_557_output);
    gettimeofday(&tv_r_Project_5_51662_e, 0);

    struct timeval tv_r_Project_5_285229_s, tv_r_Project_5_285229_e;
    gettimeofday(&tv_r_Project_5_285229_s, 0);
    SW_Project_TD_5972(tbl_JOIN_INNER_TD_6336_output, tbl_Project_TD_5972_output);
    gettimeofday(&tv_r_Project_5_285229_e, 0);

    struct timeval tv_r_Project_5_871858_s, tv_r_Project_5_871858_e;
    gettimeofday(&tv_r_Project_5_871858_s, 0);
    SW_Project_TD_5676(tbl_JOIN_INNER_TD_6705_output, tbl_Project_TD_5676_output);
    gettimeofday(&tv_r_Project_5_871858_e, 0);

    struct timeval tv_r_Union_4_614886_s, tv_r_Union_4_614886_e;
    gettimeofday(&tv_r_Union_4_614886_s, 0);
    SW_Union_TD_4594(tbl_Project_TD_5676_output, tbl_Project_TD_5972_output, tbl_Project_TD_557_output, tbl_Union_TD_4594_output);
    gettimeofday(&tv_r_Union_4_614886_e, 0);

    struct timeval tv_r_Filter_4_235088_s, tv_r_Filter_4_235088_e;
    gettimeofday(&tv_r_Filter_4_235088_s, 0);
    SW_Filter_TD_4125(tbl_SerializeFromObject_TD_532_input, tbl_Filter_TD_4125_output);
    gettimeofday(&tv_r_Filter_4_235088_e, 0);

    struct timeval tv_r_Filter_3_636620_s, tv_r_Filter_3_636620_e;
    gettimeofday(&tv_r_Filter_3_636620_s, 0);
    SW_Filter_TD_3359(tbl_SerializeFromObject_TD_4799_input, tbl_Filter_TD_3359_output);
    gettimeofday(&tv_r_Filter_3_636620_e, 0);

    struct timeval tv_r_JOIN_INNER_3_713255_s, tv_r_JOIN_INNER_3_713255_e;
    gettimeofday(&tv_r_JOIN_INNER_3_713255_s, 0);
    SW_JOIN_INNER_TD_3457(tbl_Filter_TD_4125_output, tbl_Union_TD_4594_output, tbl_JOIN_INNER_TD_3457_output);
    gettimeofday(&tv_r_JOIN_INNER_3_713255_e, 0);

    struct timeval tv_r_JOIN_INNER_2_158856_s, tv_r_JOIN_INNER_2_158856_e;
    gettimeofday(&tv_r_JOIN_INNER_2_158856_s, 0);
    SW_JOIN_INNER_TD_2581(tbl_JOIN_INNER_TD_3457_output, tbl_Filter_TD_3359_output, tbl_JOIN_INNER_TD_2581_output);
    gettimeofday(&tv_r_JOIN_INNER_2_158856_e, 0);

    struct timeval tv_r_Aggregate_1_412467_s, tv_r_Aggregate_1_412467_e;
    gettimeofday(&tv_r_Aggregate_1_412467_s, 0);
    SW_Aggregate_TD_115(tbl_JOIN_INNER_TD_2581_output, tbl_Aggregate_TD_115_output);
    gettimeofday(&tv_r_Aggregate_1_412467_e, 0);

    struct timeval tv_r_Sort_0_346350_s, tv_r_Sort_0_346350_e;
    gettimeofday(&tv_r_Sort_0_346350_s, 0);
    SW_Sort_TD_0725(tbl_Aggregate_TD_115_output, tbl_Sort_TD_0725_output);
    gettimeofday(&tv_r_Sort_0_346350_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_141025_s, &tv_r_Filter_7_141025_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8842_input: " << tbl_SerializeFromObject_TD_8842_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_313713_s, &tv_r_Filter_7_313713_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8103_input: " << tbl_SerializeFromObject_TD_8103_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_366295_s, &tv_r_Filter_7_366295_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8510_input: " << tbl_SerializeFromObject_TD_8510_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_446679_s, &tv_r_Filter_7_446679_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8716_input: " << tbl_SerializeFromObject_TD_8716_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_829257_s, &tv_r_Filter_7_829257_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_820_input: " << tbl_SerializeFromObject_TD_820_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_7: " << tvdiff(&tv_r_Filter_7_820072_s, &tv_r_Filter_7_820072_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_8594_input: " << tbl_SerializeFromObject_TD_8594_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_719369_s, &tv_r_JOIN_INNER_6_719369_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_762_output: " << tbl_Filter_TD_762_output.getNumRow() << " " << "tbl_Filter_TD_737_output: " << tbl_Filter_TD_737_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_981976_s, &tv_r_JOIN_INNER_6_981976_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7827_output: " << tbl_Filter_TD_7827_output.getNumRow() << " " << "tbl_Filter_TD_7507_output: " << tbl_Filter_TD_7507_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_6: " << tvdiff(&tv_r_JOIN_INNER_6_578268_s, &tv_r_JOIN_INNER_6_578268_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_7223_output: " << tbl_Filter_TD_7223_output.getNumRow() << " " << "tbl_Filter_TD_7352_output: " << tbl_Filter_TD_7352_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_51662_s, &tv_r_Project_5_51662_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6757_output: " << tbl_JOIN_INNER_TD_6757_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_285229_s, &tv_r_Project_5_285229_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6336_output: " << tbl_JOIN_INNER_TD_6336_output.getNumRow() << " " << std::endl; 

    std::cout << "Project_5: " << tvdiff(&tv_r_Project_5_871858_s, &tv_r_Project_5_871858_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_6705_output: " << tbl_JOIN_INNER_TD_6705_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_4: " << tvdiff(&tv_r_Union_4_614886_s, &tv_r_Union_4_614886_e) / 1000.0 << " ms " 
     << "tbl_Project_TD_5676_output: " << tbl_Project_TD_5676_output.getNumRow() << " " << "tbl_Project_TD_5972_output: " << tbl_Project_TD_5972_output.getNumRow() << " " << "tbl_Project_TD_557_output: " << tbl_Project_TD_557_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_235088_s, &tv_r_Filter_4_235088_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_532_input: " << tbl_SerializeFromObject_TD_532_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_636620_s, &tv_r_Filter_3_636620_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_4799_input: " << tbl_SerializeFromObject_TD_4799_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_713255_s, &tv_r_JOIN_INNER_3_713255_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4125_output: " << tbl_Filter_TD_4125_output.getNumRow() << " " << "tbl_Union_TD_4594_output: " << tbl_Union_TD_4594_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_158856_s, &tv_r_JOIN_INNER_2_158856_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3457_output: " << tbl_JOIN_INNER_TD_3457_output.getNumRow() << " " << "tbl_Filter_TD_3359_output: " << tbl_Filter_TD_3359_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_1: " << tvdiff(&tv_r_Aggregate_1_412467_s, &tv_r_Aggregate_1_412467_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2581_output: " << tbl_JOIN_INNER_TD_2581_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_0: " << tvdiff(&tv_r_Sort_0_346350_s, &tv_r_Sort_0_346350_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_115_output: " << tbl_Aggregate_TD_115_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 1.789251 * 1000 << "ms" << std::endl; 
    return 0; 
}
