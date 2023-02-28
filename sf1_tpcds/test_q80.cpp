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

#include "cfgFunc_q80.hpp" 
#include "q80.hpp" 

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
    std::cout << "NOTE:running query #80\n."; 
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
    Table tbl_GlobalLimit_TD_0909147_output("tbl_GlobalLimit_TD_0909147_output", 6100000, 5, "");
    tbl_GlobalLimit_TD_0909147_output.allocateHost();
    Table tbl_LocalLimit_TD_1929373_output("tbl_LocalLimit_TD_1929373_output", 6100000, 5, "");
    tbl_LocalLimit_TD_1929373_output.allocateHost();
    Table tbl_Sort_TD_2255412_output("tbl_Sort_TD_2255412_output", 6100000, 5, "");
    tbl_Sort_TD_2255412_output.allocateHost();
    Table tbl_Aggregate_TD_3798920_output("tbl_Aggregate_TD_3798920_output", 6100000, 5, "");
    tbl_Aggregate_TD_3798920_output.allocateHost();
    Table tbl_Expand_TD_4196623_output("tbl_Expand_TD_4196623_output", 6100000, 6, "");
    tbl_Expand_TD_4196623_output.allocateHost();
    Table tbl_Union_TD_5492699_output("tbl_Union_TD_5492699_output", 6100000, 5, "");
    tbl_Union_TD_5492699_output.allocateHost();
    Table tbl_Aggregate_TD_6985818_output("tbl_Aggregate_TD_6985818_output", 6100000, 5, "");
    tbl_Aggregate_TD_6985818_output.allocateHost();
    Table tbl_Aggregate_TD_6885213_output("tbl_Aggregate_TD_6885213_output", 6100000, 5, "");
    tbl_Aggregate_TD_6885213_output.allocateHost();
    Table tbl_Aggregate_TD_6928096_output("tbl_Aggregate_TD_6928096_output", 6100000, 5, "");
    tbl_Aggregate_TD_6928096_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7447212_output("tbl_JOIN_INNER_TD_7447212_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7447212_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7677773_output("tbl_JOIN_INNER_TD_7677773_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7677773_output.allocateHost();
    Table tbl_JOIN_INNER_TD_7146169_output("tbl_JOIN_INNER_TD_7146169_output", 6100000, 5, "");
    tbl_JOIN_INNER_TD_7146169_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8120189_output("tbl_JOIN_INNER_TD_8120189_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8120189_output.allocateHost();
    Table tbl_Filter_TD_8245724_output("tbl_Filter_TD_8245724_output", 6100000, 1, "");
    tbl_Filter_TD_8245724_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8465302_output("tbl_JOIN_INNER_TD_8465302_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8465302_output.allocateHost();
    Table tbl_Filter_TD_844216_output("tbl_Filter_TD_844216_output", 6100000, 1, "");
    tbl_Filter_TD_844216_output.allocateHost();
    Table tbl_JOIN_INNER_TD_8608214_output("tbl_JOIN_INNER_TD_8608214_output", 6100000, 6, "");
    tbl_JOIN_INNER_TD_8608214_output.allocateHost();
    Table tbl_Filter_TD_8120289_output("tbl_Filter_TD_8120289_output", 6100000, 1, "");
    tbl_Filter_TD_8120289_output.allocateHost();
    Table tbl_JOIN_INNER_TD_9723850_output("tbl_JOIN_INNER_TD_9723850_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9723850_output.allocateHost();
    Table tbl_Filter_TD_944343_output("tbl_Filter_TD_944343_output", 6100000, 1, "");
    tbl_Filter_TD_944343_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9658607_input;
    tbl_SerializeFromObject_TD_9658607_input = Table("promotion", promotion_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9658607_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_9658607_input.addCol("p_channel_tv", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9658607_input.allocateHost();
    tbl_SerializeFromObject_TD_9658607_input.loadHost();
    Table tbl_JOIN_INNER_TD_9601901_output("tbl_JOIN_INNER_TD_9601901_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9601901_output.allocateHost();
    Table tbl_Filter_TD_9759510_output("tbl_Filter_TD_9759510_output", 6100000, 1, "");
    tbl_Filter_TD_9759510_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9770991_input;
    tbl_SerializeFromObject_TD_9770991_input = Table("promotion", promotion_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9770991_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_9770991_input.addCol("p_channel_tv", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9770991_input.allocateHost();
    tbl_SerializeFromObject_TD_9770991_input.loadHost();
    Table tbl_JOIN_INNER_TD_9219716_output("tbl_JOIN_INNER_TD_9219716_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_9219716_output.allocateHost();
    Table tbl_Filter_TD_9914949_output("tbl_Filter_TD_9914949_output", 6100000, 1, "");
    tbl_Filter_TD_9914949_output.allocateHost();
    Table tbl_SerializeFromObject_TD_9672296_input;
    tbl_SerializeFromObject_TD_9672296_input = Table("promotion", promotion_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_9672296_input.addCol("p_promo_sk", 4);
    tbl_SerializeFromObject_TD_9672296_input.addCol("p_channel_tv", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_9672296_input.allocateHost();
    tbl_SerializeFromObject_TD_9672296_input.loadHost();
    Table tbl_JOIN_INNER_TD_10849160_output("tbl_JOIN_INNER_TD_10849160_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_10849160_output.allocateHost();
    Table tbl_Filter_TD_10872964_output("tbl_Filter_TD_10872964_output", 6100000, 2, "");
    tbl_Filter_TD_10872964_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10541710_input;
    tbl_SerializeFromObject_TD_10541710_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10541710_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10541710_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_10541710_input.allocateHost();
    tbl_SerializeFromObject_TD_10541710_input.loadHost();
    Table tbl_JOIN_INNER_TD_10430532_output("tbl_JOIN_INNER_TD_10430532_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_10430532_output.allocateHost();
    Table tbl_Filter_TD_10670298_output("tbl_Filter_TD_10670298_output", 6100000, 2, "");
    tbl_Filter_TD_10670298_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10856759_input;
    tbl_SerializeFromObject_TD_10856759_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10856759_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10856759_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_10856759_input.allocateHost();
    tbl_SerializeFromObject_TD_10856759_input.loadHost();
    Table tbl_JOIN_INNER_TD_10250051_output("tbl_JOIN_INNER_TD_10250051_output", 6100000, 7, "");
    tbl_JOIN_INNER_TD_10250051_output.allocateHost();
    Table tbl_Filter_TD_10335634_output("tbl_Filter_TD_10335634_output", 6100000, 2, "");
    tbl_Filter_TD_10335634_output.allocateHost();
    Table tbl_SerializeFromObject_TD_10347608_input;
    tbl_SerializeFromObject_TD_10347608_input = Table("item", item_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_10347608_input.addCol("i_item_sk", 4);
    tbl_SerializeFromObject_TD_10347608_input.addCol("i_current_price", 4);
    tbl_SerializeFromObject_TD_10347608_input.allocateHost();
    tbl_SerializeFromObject_TD_10347608_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_11700228_output("tbl_JOIN_LEFTOUTER_TD_11700228_output", 6100000, 8, "");
    tbl_JOIN_LEFTOUTER_TD_11700228_output.allocateHost();
    Table tbl_Filter_TD_11219722_output("tbl_Filter_TD_11219722_output", 6100000, 1, "");
    tbl_Filter_TD_11219722_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1148983_input;
    tbl_SerializeFromObject_TD_1148983_input = Table("store", store_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1148983_input.addCol("s_store_sk", 4);
    tbl_SerializeFromObject_TD_1148983_input.addCol("s_store_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1148983_input.allocateHost();
    tbl_SerializeFromObject_TD_1148983_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_11178500_output("tbl_JOIN_LEFTOUTER_TD_11178500_output", 6100000, 8, "");
    tbl_JOIN_LEFTOUTER_TD_11178500_output.allocateHost();
    Table tbl_Filter_TD_11455696_output("tbl_Filter_TD_11455696_output", 6100000, 1, "");
    tbl_Filter_TD_11455696_output.allocateHost();
    Table tbl_SerializeFromObject_TD_11865186_input;
    tbl_SerializeFromObject_TD_11865186_input = Table("catalog_page", catalog_page_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_11865186_input.addCol("cp_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_11865186_input.addCol("cp_catalog_page_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_11865186_input.allocateHost();
    tbl_SerializeFromObject_TD_11865186_input.loadHost();
    Table tbl_JOIN_LEFTOUTER_TD_11726272_output("tbl_JOIN_LEFTOUTER_TD_11726272_output", 6100000, 8, "");
    tbl_JOIN_LEFTOUTER_TD_11726272_output.allocateHost();
    Table tbl_Filter_TD_118936_output("tbl_Filter_TD_118936_output", 6100000, 1, "");
    tbl_Filter_TD_118936_output.allocateHost();
    Table tbl_SerializeFromObject_TD_1157395_input;
    tbl_SerializeFromObject_TD_1157395_input = Table("web_site", web_site_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_1157395_input.addCol("web_site_sk", 4);
    tbl_SerializeFromObject_TD_1157395_input.addCol("web_site_id", TPCDS_READ_MAX+1);
    tbl_SerializeFromObject_TD_1157395_input.allocateHost();
    tbl_SerializeFromObject_TD_1157395_input.loadHost();
    Table tbl_Filter_TD_12798864_output("tbl_Filter_TD_12798864_output", 6100000, 7, "");
    tbl_Filter_TD_12798864_output.allocateHost();
    Table tbl_Filter_TD_124153_output("tbl_Filter_TD_124153_output", 6100000, 4, "");
    tbl_Filter_TD_124153_output.allocateHost();
    Table tbl_SerializeFromObject_TD_123433_input;
    tbl_SerializeFromObject_TD_123433_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_123433_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_123433_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_123433_input.allocateHost();
    tbl_SerializeFromObject_TD_123433_input.loadHost();
    Table tbl_Filter_TD_12575034_output("tbl_Filter_TD_12575034_output", 6100000, 7, "");
    tbl_Filter_TD_12575034_output.allocateHost();
    Table tbl_Filter_TD_12136041_output("tbl_Filter_TD_12136041_output", 6100000, 4, "");
    tbl_Filter_TD_12136041_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12779287_input;
    tbl_SerializeFromObject_TD_12779287_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12779287_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12779287_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12779287_input.allocateHost();
    tbl_SerializeFromObject_TD_12779287_input.loadHost();
    Table tbl_Filter_TD_12819540_output("tbl_Filter_TD_12819540_output", 6100000, 7, "");
    tbl_Filter_TD_12819540_output.allocateHost();
    Table tbl_Filter_TD_12441259_output("tbl_Filter_TD_12441259_output", 6100000, 4, "");
    tbl_Filter_TD_12441259_output.allocateHost();
    Table tbl_SerializeFromObject_TD_12338795_input;
    tbl_SerializeFromObject_TD_12338795_input = Table("date_dim", date_dim_n, 2, in_dir, "orc");
    tbl_SerializeFromObject_TD_12338795_input.addCol("d_date_sk", 4);
    tbl_SerializeFromObject_TD_12338795_input.addCol("d_date", 4);
    tbl_SerializeFromObject_TD_12338795_input.allocateHost();
    tbl_SerializeFromObject_TD_12338795_input.loadHost();
    Table tbl_SerializeFromObject_TD_13706222_input;
    tbl_SerializeFromObject_TD_13706222_input = Table("store_sales", store_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_13706222_input.addCol("ss_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13706222_input.addCol("ss_item_sk", 4);
    tbl_SerializeFromObject_TD_13706222_input.addCol("ss_store_sk", 4);
    tbl_SerializeFromObject_TD_13706222_input.addCol("ss_promo_sk", 4);
    tbl_SerializeFromObject_TD_13706222_input.addCol("ss_ticket_number", 4);
    tbl_SerializeFromObject_TD_13706222_input.addCol("ss_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13706222_input.addCol("ss_net_profit", 4);
    tbl_SerializeFromObject_TD_13706222_input.allocateHost();
    tbl_SerializeFromObject_TD_13706222_input.loadHost();
    Table tbl_SerializeFromObject_TD_13106804_input;
    tbl_SerializeFromObject_TD_13106804_input = Table("store_returns", store_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13106804_input.addCol("sr_item_sk", 4);
    tbl_SerializeFromObject_TD_13106804_input.addCol("sr_ticket_number", 4);
    tbl_SerializeFromObject_TD_13106804_input.addCol("sr_return_amt", 4);
    tbl_SerializeFromObject_TD_13106804_input.addCol("sr_net_loss", 4);
    tbl_SerializeFromObject_TD_13106804_input.allocateHost();
    tbl_SerializeFromObject_TD_13106804_input.loadHost();
    Table tbl_SerializeFromObject_TD_13973196_input;
    tbl_SerializeFromObject_TD_13973196_input = Table("catalog_sales", catalog_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_13973196_input.addCol("cs_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13973196_input.addCol("cs_catalog_page_sk", 4);
    tbl_SerializeFromObject_TD_13973196_input.addCol("cs_item_sk", 4);
    tbl_SerializeFromObject_TD_13973196_input.addCol("cs_promo_sk", 4);
    tbl_SerializeFromObject_TD_13973196_input.addCol("cs_order_number", 4);
    tbl_SerializeFromObject_TD_13973196_input.addCol("cs_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13973196_input.addCol("cs_net_profit", 4);
    tbl_SerializeFromObject_TD_13973196_input.allocateHost();
    tbl_SerializeFromObject_TD_13973196_input.loadHost();
    Table tbl_SerializeFromObject_TD_13197018_input;
    tbl_SerializeFromObject_TD_13197018_input = Table("catalog_returns", catalog_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13197018_input.addCol("cr_item_sk", 4);
    tbl_SerializeFromObject_TD_13197018_input.addCol("cr_order_number", 4);
    tbl_SerializeFromObject_TD_13197018_input.addCol("cr_return_amount", 4);
    tbl_SerializeFromObject_TD_13197018_input.addCol("cr_net_loss", 4);
    tbl_SerializeFromObject_TD_13197018_input.allocateHost();
    tbl_SerializeFromObject_TD_13197018_input.loadHost();
    Table tbl_SerializeFromObject_TD_13364057_input;
    tbl_SerializeFromObject_TD_13364057_input = Table("web_sales", web_sales_n, 7, in_dir, "orc");
    tbl_SerializeFromObject_TD_13364057_input.addCol("ws_sold_date_sk", 4);
    tbl_SerializeFromObject_TD_13364057_input.addCol("ws_item_sk", 4);
    tbl_SerializeFromObject_TD_13364057_input.addCol("ws_web_site_sk", 4);
    tbl_SerializeFromObject_TD_13364057_input.addCol("ws_promo_sk", 4);
    tbl_SerializeFromObject_TD_13364057_input.addCol("ws_order_number", 4);
    tbl_SerializeFromObject_TD_13364057_input.addCol("ws_ext_sales_price", 4);
    tbl_SerializeFromObject_TD_13364057_input.addCol("ws_net_profit", 4);
    tbl_SerializeFromObject_TD_13364057_input.allocateHost();
    tbl_SerializeFromObject_TD_13364057_input.loadHost();
    Table tbl_SerializeFromObject_TD_13183340_input;
    tbl_SerializeFromObject_TD_13183340_input = Table("web_returns", web_returns_n, 4, in_dir, "orc");
    tbl_SerializeFromObject_TD_13183340_input.addCol("wr_item_sk", 4);
    tbl_SerializeFromObject_TD_13183340_input.addCol("wr_order_number", 4);
    tbl_SerializeFromObject_TD_13183340_input.addCol("wr_return_amt", 4);
    tbl_SerializeFromObject_TD_13183340_input.addCol("wr_net_loss", 4);
    tbl_SerializeFromObject_TD_13183340_input.allocateHost();
    tbl_SerializeFromObject_TD_13183340_input.loadHost();
    // ********************** Allocate Device Buffer ******************** // 
    // ****************************** Config **************************** // 
    // *************************** Kernel Setup ************************* // 
    // ************************** Transfer Engine *********************** // 
    // ****************************** Events **************************** // 
    // **************************** Operations ************************** // 
    struct timeval tv_r_s, tv_r_e; 
    gettimeofday(&tv_r_s, 0); 

    struct timeval tv_r_Filter_12_326609_s, tv_r_Filter_12_326609_e;
    gettimeofday(&tv_r_Filter_12_326609_s, 0);
    SW_Filter_TD_12441259(tbl_SerializeFromObject_TD_13183340_input, tbl_Filter_TD_12441259_output);
    gettimeofday(&tv_r_Filter_12_326609_e, 0);

    struct timeval tv_r_Filter_12_369235_s, tv_r_Filter_12_369235_e;
    gettimeofday(&tv_r_Filter_12_369235_s, 0);
    SW_Filter_TD_12819540(tbl_SerializeFromObject_TD_13364057_input, tbl_Filter_TD_12819540_output);
    gettimeofday(&tv_r_Filter_12_369235_e, 0);

    struct timeval tv_r_Filter_12_988644_s, tv_r_Filter_12_988644_e;
    gettimeofday(&tv_r_Filter_12_988644_s, 0);
    SW_Filter_TD_12136041(tbl_SerializeFromObject_TD_13197018_input, tbl_Filter_TD_12136041_output);
    gettimeofday(&tv_r_Filter_12_988644_e, 0);

    struct timeval tv_r_Filter_12_542712_s, tv_r_Filter_12_542712_e;
    gettimeofday(&tv_r_Filter_12_542712_s, 0);
    SW_Filter_TD_12575034(tbl_SerializeFromObject_TD_13973196_input, tbl_Filter_TD_12575034_output);
    gettimeofday(&tv_r_Filter_12_542712_e, 0);

    struct timeval tv_r_Filter_12_591838_s, tv_r_Filter_12_591838_e;
    gettimeofday(&tv_r_Filter_12_591838_s, 0);
    SW_Filter_TD_124153(tbl_SerializeFromObject_TD_13106804_input, tbl_Filter_TD_124153_output);
    gettimeofday(&tv_r_Filter_12_591838_e, 0);

    struct timeval tv_r_Filter_12_86657_s, tv_r_Filter_12_86657_e;
    gettimeofday(&tv_r_Filter_12_86657_s, 0);
    SW_Filter_TD_12798864(tbl_SerializeFromObject_TD_13706222_input, tbl_Filter_TD_12798864_output);
    gettimeofday(&tv_r_Filter_12_86657_e, 0);

    struct timeval tv_r_Filter_11_582961_s, tv_r_Filter_11_582961_e;
    gettimeofday(&tv_r_Filter_11_582961_s, 0);
    SW_Filter_TD_118936(tbl_SerializeFromObject_TD_12338795_input, tbl_Filter_TD_118936_output);
    gettimeofday(&tv_r_Filter_11_582961_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_11_218216_s, tv_r_JOIN_LEFTOUTER_11_218216_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_218216_s, 0);
    SW_JOIN_LEFTOUTER_TD_11726272(tbl_Filter_TD_12819540_output, tbl_Filter_TD_12441259_output, tbl_JOIN_LEFTOUTER_TD_11726272_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_218216_e, 0);

    struct timeval tv_r_Filter_11_69134_s, tv_r_Filter_11_69134_e;
    gettimeofday(&tv_r_Filter_11_69134_s, 0);
    SW_Filter_TD_11455696(tbl_SerializeFromObject_TD_12779287_input, tbl_Filter_TD_11455696_output);
    gettimeofday(&tv_r_Filter_11_69134_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_11_913121_s, tv_r_JOIN_LEFTOUTER_11_913121_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_913121_s, 0);
    SW_JOIN_LEFTOUTER_TD_11178500(tbl_Filter_TD_12575034_output, tbl_Filter_TD_12136041_output, tbl_JOIN_LEFTOUTER_TD_11178500_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_913121_e, 0);

    struct timeval tv_r_Filter_11_368397_s, tv_r_Filter_11_368397_e;
    gettimeofday(&tv_r_Filter_11_368397_s, 0);
    SW_Filter_TD_11219722(tbl_SerializeFromObject_TD_123433_input, tbl_Filter_TD_11219722_output);
    gettimeofday(&tv_r_Filter_11_368397_e, 0);

    struct timeval tv_r_JOIN_LEFTOUTER_11_86763_s, tv_r_JOIN_LEFTOUTER_11_86763_e;
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_86763_s, 0);
    SW_JOIN_LEFTOUTER_TD_11700228(tbl_Filter_TD_12798864_output, tbl_Filter_TD_124153_output, tbl_JOIN_LEFTOUTER_TD_11700228_output);
    gettimeofday(&tv_r_JOIN_LEFTOUTER_11_86763_e, 0);

    struct timeval tv_r_Filter_10_712485_s, tv_r_Filter_10_712485_e;
    gettimeofday(&tv_r_Filter_10_712485_s, 0);
    SW_Filter_TD_10335634(tbl_SerializeFromObject_TD_1157395_input, tbl_Filter_TD_10335634_output);
    gettimeofday(&tv_r_Filter_10_712485_e, 0);

    struct timeval tv_r_JOIN_INNER_10_815164_s, tv_r_JOIN_INNER_10_815164_e;
    gettimeofday(&tv_r_JOIN_INNER_10_815164_s, 0);
    SW_JOIN_INNER_TD_10250051(tbl_JOIN_LEFTOUTER_TD_11726272_output, tbl_Filter_TD_118936_output, tbl_JOIN_INNER_TD_10250051_output);
    gettimeofday(&tv_r_JOIN_INNER_10_815164_e, 0);

    struct timeval tv_r_Filter_10_966053_s, tv_r_Filter_10_966053_e;
    gettimeofday(&tv_r_Filter_10_966053_s, 0);
    SW_Filter_TD_10670298(tbl_SerializeFromObject_TD_11865186_input, tbl_Filter_TD_10670298_output);
    gettimeofday(&tv_r_Filter_10_966053_e, 0);

    struct timeval tv_r_JOIN_INNER_10_911890_s, tv_r_JOIN_INNER_10_911890_e;
    gettimeofday(&tv_r_JOIN_INNER_10_911890_s, 0);
    SW_JOIN_INNER_TD_10430532(tbl_JOIN_LEFTOUTER_TD_11178500_output, tbl_Filter_TD_11455696_output, tbl_JOIN_INNER_TD_10430532_output);
    gettimeofday(&tv_r_JOIN_INNER_10_911890_e, 0);

    struct timeval tv_r_Filter_10_977772_s, tv_r_Filter_10_977772_e;
    gettimeofday(&tv_r_Filter_10_977772_s, 0);
    SW_Filter_TD_10872964(tbl_SerializeFromObject_TD_1148983_input, tbl_Filter_TD_10872964_output);
    gettimeofday(&tv_r_Filter_10_977772_e, 0);

    struct timeval tv_r_JOIN_INNER_10_584160_s, tv_r_JOIN_INNER_10_584160_e;
    gettimeofday(&tv_r_JOIN_INNER_10_584160_s, 0);
    SW_JOIN_INNER_TD_10849160(tbl_JOIN_LEFTOUTER_TD_11700228_output, tbl_Filter_TD_11219722_output, tbl_JOIN_INNER_TD_10849160_output);
    gettimeofday(&tv_r_JOIN_INNER_10_584160_e, 0);

    struct timeval tv_r_Filter_9_172159_s, tv_r_Filter_9_172159_e;
    gettimeofday(&tv_r_Filter_9_172159_s, 0);
    SW_Filter_TD_9914949(tbl_SerializeFromObject_TD_10347608_input, tbl_Filter_TD_9914949_output);
    gettimeofday(&tv_r_Filter_9_172159_e, 0);

    struct timeval tv_r_JOIN_INNER_9_232049_s, tv_r_JOIN_INNER_9_232049_e;
    gettimeofday(&tv_r_JOIN_INNER_9_232049_s, 0);
    SW_JOIN_INNER_TD_9219716(tbl_JOIN_INNER_TD_10250051_output, tbl_Filter_TD_10335634_output, tbl_JOIN_INNER_TD_9219716_output);
    gettimeofday(&tv_r_JOIN_INNER_9_232049_e, 0);

    struct timeval tv_r_Filter_9_120518_s, tv_r_Filter_9_120518_e;
    gettimeofday(&tv_r_Filter_9_120518_s, 0);
    SW_Filter_TD_9759510(tbl_SerializeFromObject_TD_10856759_input, tbl_Filter_TD_9759510_output);
    gettimeofday(&tv_r_Filter_9_120518_e, 0);

    struct timeval tv_r_JOIN_INNER_9_636261_s, tv_r_JOIN_INNER_9_636261_e;
    gettimeofday(&tv_r_JOIN_INNER_9_636261_s, 0);
    SW_JOIN_INNER_TD_9601901(tbl_JOIN_INNER_TD_10430532_output, tbl_Filter_TD_10670298_output, tbl_JOIN_INNER_TD_9601901_output);
    gettimeofday(&tv_r_JOIN_INNER_9_636261_e, 0);

    struct timeval tv_r_Filter_9_503704_s, tv_r_Filter_9_503704_e;
    gettimeofday(&tv_r_Filter_9_503704_s, 0);
    SW_Filter_TD_944343(tbl_SerializeFromObject_TD_10541710_input, tbl_Filter_TD_944343_output);
    gettimeofday(&tv_r_Filter_9_503704_e, 0);

    struct timeval tv_r_JOIN_INNER_9_775602_s, tv_r_JOIN_INNER_9_775602_e;
    gettimeofday(&tv_r_JOIN_INNER_9_775602_s, 0);
    SW_JOIN_INNER_TD_9723850(tbl_JOIN_INNER_TD_10849160_output, tbl_Filter_TD_10872964_output, tbl_JOIN_INNER_TD_9723850_output);
    gettimeofday(&tv_r_JOIN_INNER_9_775602_e, 0);

    struct timeval tv_r_Filter_8_577617_s, tv_r_Filter_8_577617_e;
    gettimeofday(&tv_r_Filter_8_577617_s, 0);
    SW_Filter_TD_8120289(tbl_SerializeFromObject_TD_9672296_input, tbl_Filter_TD_8120289_output);
    gettimeofday(&tv_r_Filter_8_577617_e, 0);

    struct timeval tv_r_JOIN_INNER_8_373387_s, tv_r_JOIN_INNER_8_373387_e;
    gettimeofday(&tv_r_JOIN_INNER_8_373387_s, 0);
    SW_JOIN_INNER_TD_8608214(tbl_JOIN_INNER_TD_9219716_output, tbl_Filter_TD_9914949_output, tbl_JOIN_INNER_TD_8608214_output);
    gettimeofday(&tv_r_JOIN_INNER_8_373387_e, 0);

    struct timeval tv_r_Filter_8_647708_s, tv_r_Filter_8_647708_e;
    gettimeofday(&tv_r_Filter_8_647708_s, 0);
    SW_Filter_TD_844216(tbl_SerializeFromObject_TD_9770991_input, tbl_Filter_TD_844216_output);
    gettimeofday(&tv_r_Filter_8_647708_e, 0);

    struct timeval tv_r_JOIN_INNER_8_377478_s, tv_r_JOIN_INNER_8_377478_e;
    gettimeofday(&tv_r_JOIN_INNER_8_377478_s, 0);
    SW_JOIN_INNER_TD_8465302(tbl_JOIN_INNER_TD_9601901_output, tbl_Filter_TD_9759510_output, tbl_JOIN_INNER_TD_8465302_output);
    gettimeofday(&tv_r_JOIN_INNER_8_377478_e, 0);

    struct timeval tv_r_Filter_8_995253_s, tv_r_Filter_8_995253_e;
    gettimeofday(&tv_r_Filter_8_995253_s, 0);
    SW_Filter_TD_8245724(tbl_SerializeFromObject_TD_9658607_input, tbl_Filter_TD_8245724_output);
    gettimeofday(&tv_r_Filter_8_995253_e, 0);

    struct timeval tv_r_JOIN_INNER_8_959_s, tv_r_JOIN_INNER_8_959_e;
    gettimeofday(&tv_r_JOIN_INNER_8_959_s, 0);
    SW_JOIN_INNER_TD_8120189(tbl_JOIN_INNER_TD_9723850_output, tbl_Filter_TD_944343_output, tbl_JOIN_INNER_TD_8120189_output);
    gettimeofday(&tv_r_JOIN_INNER_8_959_e, 0);

    struct timeval tv_r_JOIN_INNER_7_574721_s, tv_r_JOIN_INNER_7_574721_e;
    gettimeofday(&tv_r_JOIN_INNER_7_574721_s, 0);
    SW_JOIN_INNER_TD_7146169(tbl_JOIN_INNER_TD_8608214_output, tbl_Filter_TD_8120289_output, tbl_JOIN_INNER_TD_7146169_output);
    gettimeofday(&tv_r_JOIN_INNER_7_574721_e, 0);

    struct timeval tv_r_JOIN_INNER_7_619895_s, tv_r_JOIN_INNER_7_619895_e;
    gettimeofday(&tv_r_JOIN_INNER_7_619895_s, 0);
    SW_JOIN_INNER_TD_7677773(tbl_JOIN_INNER_TD_8465302_output, tbl_Filter_TD_844216_output, tbl_JOIN_INNER_TD_7677773_output);
    gettimeofday(&tv_r_JOIN_INNER_7_619895_e, 0);

    struct timeval tv_r_JOIN_INNER_7_576332_s, tv_r_JOIN_INNER_7_576332_e;
    gettimeofday(&tv_r_JOIN_INNER_7_576332_s, 0);
    SW_JOIN_INNER_TD_7447212(tbl_JOIN_INNER_TD_8120189_output, tbl_Filter_TD_8245724_output, tbl_JOIN_INNER_TD_7447212_output);
    gettimeofday(&tv_r_JOIN_INNER_7_576332_e, 0);

    struct timeval tv_r_Aggregate_6_393468_s, tv_r_Aggregate_6_393468_e;
    gettimeofday(&tv_r_Aggregate_6_393468_s, 0);
    SW_Aggregate_TD_6928096(tbl_JOIN_INNER_TD_7146169_output, tbl_Aggregate_TD_6928096_output);
    gettimeofday(&tv_r_Aggregate_6_393468_e, 0);

    struct timeval tv_r_Aggregate_6_456641_s, tv_r_Aggregate_6_456641_e;
    gettimeofday(&tv_r_Aggregate_6_456641_s, 0);
    SW_Aggregate_TD_6885213(tbl_JOIN_INNER_TD_7677773_output, tbl_Aggregate_TD_6885213_output);
    gettimeofday(&tv_r_Aggregate_6_456641_e, 0);

    struct timeval tv_r_Aggregate_6_186906_s, tv_r_Aggregate_6_186906_e;
    gettimeofday(&tv_r_Aggregate_6_186906_s, 0);
    SW_Aggregate_TD_6985818(tbl_JOIN_INNER_TD_7447212_output, tbl_Aggregate_TD_6985818_output);
    gettimeofday(&tv_r_Aggregate_6_186906_e, 0);

    struct timeval tv_r_Union_5_294702_s, tv_r_Union_5_294702_e;
    gettimeofday(&tv_r_Union_5_294702_s, 0);
    SW_Union_TD_5492699(tbl_Aggregate_TD_6985818_output, tbl_Aggregate_TD_6885213_output, tbl_Aggregate_TD_6928096_output, tbl_Union_TD_5492699_output);
    gettimeofday(&tv_r_Union_5_294702_e, 0);

    struct timeval tv_r_Expand_4_7247_s, tv_r_Expand_4_7247_e;
    gettimeofday(&tv_r_Expand_4_7247_s, 0);
    SW_Expand_TD_4196623(tbl_Union_TD_5492699_output, tbl_Expand_TD_4196623_output);
    gettimeofday(&tv_r_Expand_4_7247_e, 0);

    struct timeval tv_r_Aggregate_3_484530_s, tv_r_Aggregate_3_484530_e;
    gettimeofday(&tv_r_Aggregate_3_484530_s, 0);
    SW_Aggregate_TD_3798920(tbl_Expand_TD_4196623_output, tbl_Aggregate_TD_3798920_output);
    gettimeofday(&tv_r_Aggregate_3_484530_e, 0);

    struct timeval tv_r_Sort_2_775392_s, tv_r_Sort_2_775392_e;
    gettimeofday(&tv_r_Sort_2_775392_s, 0);
    SW_Sort_TD_2255412(tbl_Aggregate_TD_3798920_output, tbl_Sort_TD_2255412_output);
    gettimeofday(&tv_r_Sort_2_775392_e, 0);

    struct timeval tv_r_LocalLimit_1_169112_s, tv_r_LocalLimit_1_169112_e;
    gettimeofday(&tv_r_LocalLimit_1_169112_s, 0);
    SW_LocalLimit_TD_1929373(tbl_Sort_TD_2255412_output, tbl_LocalLimit_TD_1929373_output);
    gettimeofday(&tv_r_LocalLimit_1_169112_e, 0);

    struct timeval tv_r_GlobalLimit_0_888627_s, tv_r_GlobalLimit_0_888627_e;
    gettimeofday(&tv_r_GlobalLimit_0_888627_s, 0);
    SW_GlobalLimit_TD_0909147(tbl_LocalLimit_TD_1929373_output, tbl_GlobalLimit_TD_0909147_output);
    gettimeofday(&tv_r_GlobalLimit_0_888627_e, 0);

    gettimeofday(&tv_r_e, 0); 
    // **************************** Print Execution Time ************************** // 
    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_326609_s, &tv_r_Filter_12_326609_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13183340_input: " << tbl_SerializeFromObject_TD_13183340_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_369235_s, &tv_r_Filter_12_369235_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13364057_input: " << tbl_SerializeFromObject_TD_13364057_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_988644_s, &tv_r_Filter_12_988644_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13197018_input: " << tbl_SerializeFromObject_TD_13197018_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_542712_s, &tv_r_Filter_12_542712_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13973196_input: " << tbl_SerializeFromObject_TD_13973196_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_591838_s, &tv_r_Filter_12_591838_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13106804_input: " << tbl_SerializeFromObject_TD_13106804_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_12: " << tvdiff(&tv_r_Filter_12_86657_s, &tv_r_Filter_12_86657_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_13706222_input: " << tbl_SerializeFromObject_TD_13706222_input.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_582961_s, &tv_r_Filter_11_582961_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12338795_input: " << tbl_SerializeFromObject_TD_12338795_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_11: " << tvdiff(&tv_r_JOIN_LEFTOUTER_11_218216_s, &tv_r_JOIN_LEFTOUTER_11_218216_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12819540_output: " << tbl_Filter_TD_12819540_output.getNumRow() << " " << "tbl_Filter_TD_12441259_output: " << tbl_Filter_TD_12441259_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_69134_s, &tv_r_Filter_11_69134_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_12779287_input: " << tbl_SerializeFromObject_TD_12779287_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_11: " << tvdiff(&tv_r_JOIN_LEFTOUTER_11_913121_s, &tv_r_JOIN_LEFTOUTER_11_913121_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12575034_output: " << tbl_Filter_TD_12575034_output.getNumRow() << " " << "tbl_Filter_TD_12136041_output: " << tbl_Filter_TD_12136041_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_11: " << tvdiff(&tv_r_Filter_11_368397_s, &tv_r_Filter_11_368397_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_123433_input: " << tbl_SerializeFromObject_TD_123433_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_LEFTOUTER_11: " << tvdiff(&tv_r_JOIN_LEFTOUTER_11_86763_s, &tv_r_JOIN_LEFTOUTER_11_86763_e) / 1000.0 << " ms " 
     << "tbl_Filter_TD_12798864_output: " << tbl_Filter_TD_12798864_output.getNumRow() << " " << "tbl_Filter_TD_124153_output: " << tbl_Filter_TD_124153_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_712485_s, &tv_r_Filter_10_712485_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1157395_input: " << tbl_SerializeFromObject_TD_1157395_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_815164_s, &tv_r_JOIN_INNER_10_815164_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_11726272_output: " << tbl_JOIN_LEFTOUTER_TD_11726272_output.getNumRow() << " " << "tbl_Filter_TD_118936_output: " << tbl_Filter_TD_118936_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_966053_s, &tv_r_Filter_10_966053_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_11865186_input: " << tbl_SerializeFromObject_TD_11865186_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_911890_s, &tv_r_JOIN_INNER_10_911890_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_11178500_output: " << tbl_JOIN_LEFTOUTER_TD_11178500_output.getNumRow() << " " << "tbl_Filter_TD_11455696_output: " << tbl_Filter_TD_11455696_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_10: " << tvdiff(&tv_r_Filter_10_977772_s, &tv_r_Filter_10_977772_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_1148983_input: " << tbl_SerializeFromObject_TD_1148983_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_10: " << tvdiff(&tv_r_JOIN_INNER_10_584160_s, &tv_r_JOIN_INNER_10_584160_e) / 1000.0 << " ms " 
     << "tbl_JOIN_LEFTOUTER_TD_11700228_output: " << tbl_JOIN_LEFTOUTER_TD_11700228_output.getNumRow() << " " << "tbl_Filter_TD_11219722_output: " << tbl_Filter_TD_11219722_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_172159_s, &tv_r_Filter_9_172159_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10347608_input: " << tbl_SerializeFromObject_TD_10347608_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_232049_s, &tv_r_JOIN_INNER_9_232049_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10250051_output: " << tbl_JOIN_INNER_TD_10250051_output.getNumRow() << " " << "tbl_Filter_TD_10335634_output: " << tbl_Filter_TD_10335634_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_120518_s, &tv_r_Filter_9_120518_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10856759_input: " << tbl_SerializeFromObject_TD_10856759_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_636261_s, &tv_r_JOIN_INNER_9_636261_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10430532_output: " << tbl_JOIN_INNER_TD_10430532_output.getNumRow() << " " << "tbl_Filter_TD_10670298_output: " << tbl_Filter_TD_10670298_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_9: " << tvdiff(&tv_r_Filter_9_503704_s, &tv_r_Filter_9_503704_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_10541710_input: " << tbl_SerializeFromObject_TD_10541710_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_9: " << tvdiff(&tv_r_JOIN_INNER_9_775602_s, &tv_r_JOIN_INNER_9_775602_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_10849160_output: " << tbl_JOIN_INNER_TD_10849160_output.getNumRow() << " " << "tbl_Filter_TD_10872964_output: " << tbl_Filter_TD_10872964_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_577617_s, &tv_r_Filter_8_577617_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9672296_input: " << tbl_SerializeFromObject_TD_9672296_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_373387_s, &tv_r_JOIN_INNER_8_373387_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9219716_output: " << tbl_JOIN_INNER_TD_9219716_output.getNumRow() << " " << "tbl_Filter_TD_9914949_output: " << tbl_Filter_TD_9914949_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_647708_s, &tv_r_Filter_8_647708_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9770991_input: " << tbl_SerializeFromObject_TD_9770991_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_377478_s, &tv_r_JOIN_INNER_8_377478_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9601901_output: " << tbl_JOIN_INNER_TD_9601901_output.getNumRow() << " " << "tbl_Filter_TD_9759510_output: " << tbl_Filter_TD_9759510_output.getNumRow() << " " << std::endl; 

    std::cout << "Filter_8: " << tvdiff(&tv_r_Filter_8_995253_s, &tv_r_Filter_8_995253_e) / 1000.0 << " ms " 
     << "tbl_SerializeFromObject_TD_9658607_input: " << tbl_SerializeFromObject_TD_9658607_input.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_8: " << tvdiff(&tv_r_JOIN_INNER_8_959_s, &tv_r_JOIN_INNER_8_959_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_9723850_output: " << tbl_JOIN_INNER_TD_9723850_output.getNumRow() << " " << "tbl_Filter_TD_944343_output: " << tbl_Filter_TD_944343_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_574721_s, &tv_r_JOIN_INNER_7_574721_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8608214_output: " << tbl_JOIN_INNER_TD_8608214_output.getNumRow() << " " << "tbl_Filter_TD_8120289_output: " << tbl_Filter_TD_8120289_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_619895_s, &tv_r_JOIN_INNER_7_619895_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8465302_output: " << tbl_JOIN_INNER_TD_8465302_output.getNumRow() << " " << "tbl_Filter_TD_844216_output: " << tbl_Filter_TD_844216_output.getNumRow() << " " << std::endl; 

    std::cout << "JOIN_INNER_7: " << tvdiff(&tv_r_JOIN_INNER_7_576332_s, &tv_r_JOIN_INNER_7_576332_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_8120189_output: " << tbl_JOIN_INNER_TD_8120189_output.getNumRow() << " " << "tbl_Filter_TD_8245724_output: " << tbl_Filter_TD_8245724_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_393468_s, &tv_r_Aggregate_6_393468_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7146169_output: " << tbl_JOIN_INNER_TD_7146169_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_456641_s, &tv_r_Aggregate_6_456641_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7677773_output: " << tbl_JOIN_INNER_TD_7677773_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_6: " << tvdiff(&tv_r_Aggregate_6_186906_s, &tv_r_Aggregate_6_186906_e) / 1000.0 << " ms " 
     << "tbl_JOIN_INNER_TD_7447212_output: " << tbl_JOIN_INNER_TD_7447212_output.getNumRow() << " " << std::endl; 

    std::cout << "Union_5: " << tvdiff(&tv_r_Union_5_294702_s, &tv_r_Union_5_294702_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_6985818_output: " << tbl_Aggregate_TD_6985818_output.getNumRow() << " " << "tbl_Aggregate_TD_6885213_output: " << tbl_Aggregate_TD_6885213_output.getNumRow() << " " << "tbl_Aggregate_TD_6928096_output: " << tbl_Aggregate_TD_6928096_output.getNumRow() << " " << std::endl; 

    std::cout << "Expand_4: " << tvdiff(&tv_r_Expand_4_7247_s, &tv_r_Expand_4_7247_e) / 1000.0 << " ms " 
     << "tbl_Union_TD_5492699_output: " << tbl_Union_TD_5492699_output.getNumRow() << " " << std::endl; 

    std::cout << "Aggregate_3: " << tvdiff(&tv_r_Aggregate_3_484530_s, &tv_r_Aggregate_3_484530_e) / 1000.0 << " ms " 
     << "tbl_Expand_TD_4196623_output: " << tbl_Expand_TD_4196623_output.getNumRow() << " " << std::endl; 

    std::cout << "Sort_2: " << tvdiff(&tv_r_Sort_2_775392_s, &tv_r_Sort_2_775392_e) / 1000.0 << " ms " 
     << "tbl_Aggregate_TD_3798920_output: " << tbl_Aggregate_TD_3798920_output.getNumRow() << " " << std::endl; 

    std::cout << "LocalLimit_1: " << tvdiff(&tv_r_LocalLimit_1_169112_s, &tv_r_LocalLimit_1_169112_e) / 1000.0 << " ms " 
     << "tbl_Sort_TD_2255412_output: " << tbl_Sort_TD_2255412_output.getNumRow() << " " << std::endl; 

    std::cout << "GlobalLimit_0: " << tvdiff(&tv_r_GlobalLimit_0_888627_s, &tv_r_GlobalLimit_0_888627_e) / 1000.0 << " ms " 
     << "tbl_LocalLimit_TD_1929373_output: " << tbl_LocalLimit_TD_1929373_output.getNumRow() << " " << std::endl; 

    std::cout << std::endl << " Total execution time: " << tvdiff(&tv_r_s, &tv_r_e) / 1000 << " ms"; 

    std::cout << std::endl << " Spark elapsed time: " << 3.3662546 * 1000 << "ms" << std::endl; 
    return 0; 
}
