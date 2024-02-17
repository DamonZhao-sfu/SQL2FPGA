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

#include "cfgFunc_q92.hpp" 
#include "q92.hpp" 

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
    std::cout << "NOTE:running query #92\n."; 
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
    Table tbl_Aggregate_TD_0642_output("tbl_Aggregate_TD_0642_output", 6100000, 1, "");
    tbl_Aggregate_TD_0642_output.allocateHost();
    Table tbl_JOIN_INNER_TD_1190_output("tbl_JOIN_INNER_TD_1190_output", 6100000, 1, "");
    tbl_JOIN_INNER_TD_1190_output.allocateHost();
    Table tbl_JOIN_INNER_TD_2104_output("tbl_JOIN_INNER_TD_2104_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_2104_output.allocateHost();
    Table tbl_Filter_TD_2801_output("tbl_Filter_TD_2801_output", 6100000, 1, "");
    tbl_Filter_TD_2801_output.allocateHost();
    Table tbl_JOIN_INNER_TD_3671_output("tbl_JOIN_INNER_TD_3671_output", 6100000, 3, "");
    tbl_JOIN_INNER_TD_3671_output.allocateHost();
    Table tbl_Filter_TD_3631_output("tbl_Filter_TD_3631_output", 6100000, 2, "");
    tbl_Filter_TD_3631_output.allocateHost();
    Table tbl_SerializeFromObject_TD_3435_input;
    tbl_SerializeFromObject_TD_3435_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_3435_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_3435_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_3435_input.allocateHost();
    tbl_SerializeFromObject_TD_3435_input.loadHost();
    Table tbl_Filter_TD_4498_output("tbl_Filter_TD_4498_output", 6100000, 3, "");
    tbl_Filter_TD_4498_output.allocateHost();
    Table tbl_Filter_TD_4778_output("tbl_Filter_TD_4778_output", 6100000, 1, "");
    tbl_Filter_TD_4778_output.allocateHost();
    Table tbl_Aggregate_TD_4641_output("tbl_Aggregate_TD_4641_output", 6100000, 2, "");
    tbl_Aggregate_TD_4641_output.allocateHost();
    Table tbl_SerializeFromObject_TD_5186_input;
    tbl_SerializeFromObject_TD_5186_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_5186_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_5186_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_5186_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_5186_input.allocateHost();
    tbl_SerializeFromObject_TD_5186_input.loadHost();
    Table tbl_SerializeFromObject_TD_5586_input;
    tbl_SerializeFromObject_TD_5586_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_5586_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_5586_input.addCol("i_manufact_id", 4);
    tbl_SerializeFromObject_TD_5586_input.allocateHost();
    tbl_SerializeFromObject_TD_5586_input.loadHost();
    Table tbl_JOIN_INNER_TD_5214_output("tbl_JOIN_INNER_TD_5214_output", 6100000, 2, "");
    tbl_JOIN_INNER_TD_5214_output.allocateHost();
    Table tbl_Filter_TD_6692_output("tbl_Filter_TD_6692_output", 6100000, 3, "");
    tbl_Filter_TD_6692_output.allocateHost();
    Table tbl_Filter_TD_6417_output("tbl_Filter_TD_6417_output", 6100000, 1, "");
    tbl_Filter_TD_6417_output.allocateHost();
    Table tbl_SerializeFromObject_TD_793_input;
    tbl_SerializeFromObject_TD_793_input = Table("web_sales", web_sales_n, 3, in_dir, "orc");
    tbl_SerializeFromObject_TD_793_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_793_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_793_input.addCol("ws_ext_discount_amt", 4);
    tbl_SerializeFromObject_TD_793_input.allocateHost();
    tbl_SerializeFromObject_TD_793_input.loadHost();
    Table tbl_SerializeFromObject_TD_7196_input;
    tbl_SerializeFromObject_TD_7196_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_7196_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_7196_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_7196_input.allocateHost();
    tbl_SerializeFromObject_TD_7196_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_6_720058_s, tv_r_Filter_6_720058_e;
    gettimeofday(&tv_r_Filter_6_720058_s, 0);
    SW_Filter_TD_6417(tbl_SerializeFromObject_TD_7196_input, tbl_Filter_TD_6417_output);
    gettimeofday(&tv_r_Filter_6_720058_e, 0);

    struct timeval tv_r_Filter_6_309799_s, tv_r_Filter_6_309799_e;
    gettimeofday(&tv_r_Filter_6_309799_s, 0);
    SW_Filter_TD_6692(tbl_SerializeFromObject_TD_793_input, tbl_Filter_TD_6692_output);
    gettimeofday(&tv_r_Filter_6_309799_e, 0);

    struct timeval tv_r_JOIN_INNER_5_614592_s, tv_r_JOIN_INNER_5_614592_e;
    gettimeofday(&tv_r_JOIN_INNER_5_614592_s, 0);
    SW_JOIN_INNER_TD_5214(tbl_Filter_TD_6692_output, tbl_Filter_TD_6417_output, tbl_JOIN_INNER_TD_5214_output);
    gettimeofday(&tv_r_JOIN_INNER_5_614592_e, 0);

    struct timeval tv_r_Aggregate_4_67504_s, tv_r_Aggregate_4_67504_e;
    gettimeofday(&tv_r_Aggregate_4_67504_s, 0);
    SW_Aggregate_TD_4641(tbl_JOIN_INNER_TD_5214_output, tbl_Aggregate_TD_4641_output);
    gettimeofday(&tv_r_Aggregate_4_67504_e, 0);

    struct timeval tv_r_Filter_4_739345_s, tv_r_Filter_4_739345_e;
    gettimeofday(&tv_r_Filter_4_739345_s, 0);
    SW_Filter_TD_4778(tbl_SerializeFromObject_TD_5586_input, tbl_Filter_TD_4778_output);
    gettimeofday(&tv_r_Filter_4_739345_e, 0);

    struct timeval tv_r_Filter_4_591413_s, tv_r_Filter_4_591413_e;
    gettimeofday(&tv_r_Filter_4_591413_s, 0);
    SW_Filter_TD_4498(tbl_SerializeFromObject_TD_5186_input, tbl_Filter_TD_4498_output);
    gettimeofday(&tv_r_Filter_4_591413_e, 0);

    struct timeval tv_r_Filter_3_67962_s, tv_r_Filter_3_67962_e;
    gettimeofday(&tv_r_Filter_3_67962_s, 0);
    SW_Filter_TD_3631(tbl_Aggregate_TD_4641_output, tbl_Filter_TD_3631_output);
    gettimeofday(&tv_r_Filter_3_67962_e, 0);

    struct timeval tv_r_JOIN_INNER_3_411616_s, tv_r_JOIN_INNER_3_411616_e;
    gettimeofday(&tv_r_JOIN_INNER_3_411616_s, 0);
    SW_JOIN_INNER_TD_3671(tbl_Filter_TD_4498_output, tbl_Filter_TD_4778_output, tbl_JOIN_INNER_TD_3671_output);
    gettimeofday(&tv_r_JOIN_INNER_3_411616_e, 0);

    struct timeval tv_r_Filter_2_929430_s, tv_r_Filter_2_929430_e;
    gettimeofday(&tv_r_Filter_2_929430_s, 0);
    SW_Filter_TD_2801(tbl_SerializeFromObject_TD_3435_input, tbl_Filter_TD_2801_output);
    gettimeofday(&tv_r_Filter_2_929430_e, 0);

    struct timeval tv_r_JOIN_INNER_2_884948_s, tv_r_JOIN_INNER_2_884948_e;
    gettimeofday(&tv_r_JOIN_INNER_2_884948_s, 0);
    SW_JOIN_INNER_TD_2104(tbl_JOIN_INNER_TD_3671_output, tbl_Filter_TD_3631_output, tbl_JOIN_INNER_TD_2104_output);
    gettimeofday(&tv_r_JOIN_INNER_2_884948_e, 0);

    struct timeval tv_r_JOIN_INNER_1_351574_s, tv_r_JOIN_INNER_1_351574_e;
    gettimeofday(&tv_r_JOIN_INNER_1_351574_s, 0);
    SW_JOIN_INNER_TD_1190(tbl_JOIN_INNER_TD_2104_output, tbl_Filter_TD_2801_output, tbl_JOIN_INNER_TD_1190_output);
    gettimeofday(&tv_r_JOIN_INNER_1_351574_e, 0);

    struct timeval tv_r_Aggregate_0_922436_s, tv_r_Aggregate_0_922436_e;
    gettimeofday(&tv_r_Aggregate_0_922436_s, 0);
    SW_Aggregate_TD_0642(tbl_JOIN_INNER_TD_1190_output, tbl_Aggregate_TD_0642_output);
    gettimeofday(&tv_r_Aggregate_0_922436_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_720058_s, &tv_r_Filter_6_720058_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_7196_input: " << tbl_SerializeFromObject_TD_7196_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_6: " << tvdiff(&tv_r_Filter_6_309799_s, &tv_r_Filter_6_309799_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_793_input: " << tbl_SerializeFromObject_TD_793_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_5: " << tvdiff(&tv_r_JOIN_INNER_5_614592_s, &tv_r_JOIN_INNER_5_614592_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_6692_output: " << tbl_Filter_TD_6692_output.getNumRow() << " " << "tbl_Filter_TD_6417_output: " << tbl_Filter_TD_6417_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_4: " << tvdiff(&tv_r_Aggregate_4_67504_s, &tv_r_Aggregate_4_67504_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_5214_output: " << tbl_JOIN_INNER_TD_5214_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_739345_s, &tv_r_Filter_4_739345_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5586_input: " << tbl_SerializeFromObject_TD_5586_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_4: " << tvdiff(&tv_r_Filter_4_591413_s, &tv_r_Filter_4_591413_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_5186_input: " << tbl_SerializeFromObject_TD_5186_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_3: " << tvdiff(&tv_r_Filter_3_67962_s, &tv_r_Filter_3_67962_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_4641_output: " << tbl_Aggregate_TD_4641_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_3: " << tvdiff(&tv_r_JOIN_INNER_3_411616_s, &tv_r_JOIN_INNER_3_411616_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_4498_output: " << tbl_Filter_TD_4498_output.getNumRow() << " " << "tbl_Filter_TD_4778_output: " << tbl_Filter_TD_4778_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_2: " << tvdiff(&tv_r_Filter_2_929430_s, &tv_r_Filter_2_929430_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_3435_input: " << tbl_SerializeFromObject_TD_3435_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_2: " << tvdiff(&tv_r_JOIN_INNER_2_884948_s, &tv_r_JOIN_INNER_2_884948_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_3671_output: " << tbl_JOIN_INNER_TD_3671_output.getNumRow() << " " << "tbl_Filter_TD_3631_output: " << tbl_Filter_TD_3631_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_1: " << tvdiff(&tv_r_JOIN_INNER_1_351574_s, &tv_r_JOIN_INNER_1_351574_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_2104_output: " << tbl_JOIN_INNER_TD_2104_output.getNumRow() << " " << "tbl_Filter_TD_2801_output: " << tbl_Filter_TD_2801_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_0: " << tvdiff(&tv_r_Aggregate_0_922436_s, &tv_r_Aggregate_0_922436_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_1190_output: " << tbl_JOIN_INNER_TD_1190_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 0.56059545 * 1000 << "ms" << std::endl; 
    return 0; 
}
