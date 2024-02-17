#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_12145(Table &tbl_SerializeFromObject_TD_13963_input, Table &tbl_Filter_TD_12145_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_item_sk#833) AND isnotnull(wr_order_number#844L)))
    // Input: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    // Output: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13963_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_13963_input.getInt32(i, 0);
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_13963_input.getInt64(i, 1);
        if ((_wr_item_sk833!= 0) && (_wr_order_number844L!= 0)) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_13963_input.getInt32(i, 0);
            tbl_Filter_TD_12145_output.setInt32(r, 0, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_13963_input.getInt64(i, 1);
            tbl_Filter_TD_12145_output.setInt64(r, 1, _wr_order_number844L_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_13963_input.getInt32(i, 2);
            tbl_Filter_TD_12145_output.setInt32(r, 2, _wr_return_amt846_t);
            int32_t _wr_net_loss854_t = tbl_SerializeFromObject_TD_13963_input.getInt32(i, 3);
            tbl_Filter_TD_12145_output.setInt32(r, 3, _wr_net_loss854_t);
            r++;
        }
    }
    tbl_Filter_TD_12145_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12145_output #Row: " << tbl_Filter_TD_12145_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12549(Table &tbl_SerializeFromObject_TD_13273_input, Table &tbl_Filter_TD_12549_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_web_site_sk#742)) AND isnotnull(ws_item_sk#732)) AND isnotnull(ws_promo_sk#745)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_order_number#746L, ws_ext_sales_price#752, ws_net_profit#762)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_order_number#746L, ws_ext_sales_price#752, ws_net_profit#762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13273_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 0);
        int32_t _ws_web_site_sk742 = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 1);
        int32_t _ws_promo_sk745 = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 3);
        if ((((_ws_sold_date_sk729!= 0) && (_ws_web_site_sk742!= 0)) && (_ws_item_sk732!= 0)) && (_ws_promo_sk745!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 0);
            tbl_Filter_TD_12549_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 1);
            tbl_Filter_TD_12549_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_web_site_sk742_t = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 2);
            tbl_Filter_TD_12549_output.setInt32(r, 2, _ws_web_site_sk742_t);
            int32_t _ws_promo_sk745_t = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 3);
            tbl_Filter_TD_12549_output.setInt32(r, 3, _ws_promo_sk745_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_13273_input.getInt64(i, 4);
            tbl_Filter_TD_12549_output.setInt64(r, 4, _ws_order_number746L_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 5);
            tbl_Filter_TD_12549_output.setInt32(r, 5, _ws_ext_sales_price752_t);
            int32_t _ws_net_profit762_t = tbl_SerializeFromObject_TD_13273_input.getInt32(i, 6);
            tbl_Filter_TD_12549_output.setInt32(r, 6, _ws_net_profit762_t);
            r++;
        }
    }
    tbl_Filter_TD_12549_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12549_output #Row: " << tbl_Filter_TD_12549_output.getNumRow() << std::endl;
}

void SW_Filter_TD_127(Table &tbl_SerializeFromObject_TD_13409_input, Table &tbl_Filter_TD_127_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_item_sk#1025) AND isnotnull(cr_order_number#1039L)))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_amount#1041, cr_net_loss#1049)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13409_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_13409_input.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_13409_input.getInt64(i, 1);
        if ((_cr_item_sk1025!= 0) && (_cr_order_number1039L!= 0)) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_13409_input.getInt32(i, 0);
            tbl_Filter_TD_127_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_13409_input.getInt64(i, 1);
            tbl_Filter_TD_127_output.setInt64(r, 1, _cr_order_number1039L_t);
            int32_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_13409_input.getInt32(i, 2);
            tbl_Filter_TD_127_output.setInt32(r, 2, _cr_return_amount1041_t);
            int32_t _cr_net_loss1049_t = tbl_SerializeFromObject_TD_13409_input.getInt32(i, 3);
            tbl_Filter_TD_127_output.setInt32(r, 3, _cr_net_loss1049_t);
            r++;
        }
    }
    tbl_Filter_TD_127_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_127_output #Row: " << tbl_Filter_TD_127_output.getNumRow() << std::endl;
}

void SW_Filter_TD_121(Table &tbl_SerializeFromObject_TD_13827_input, Table &tbl_Filter_TD_121_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_catalog_page_sk#1116)) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_promo_sk#1120)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_ext_sales_price#1127, cs_net_profit#1137)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13827_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 0);
        int32_t _cs_catalog_page_sk1116 = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 2);
        int32_t _cs_promo_sk1120 = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 3);
        if ((((_cs_sold_date_sk1104!= 0) && (_cs_catalog_page_sk1116!= 0)) && (_cs_item_sk1119!= 0)) && (_cs_promo_sk1120!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 0);
            tbl_Filter_TD_121_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_catalog_page_sk1116_t = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 1);
            tbl_Filter_TD_121_output.setInt32(r, 1, _cs_catalog_page_sk1116_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 2);
            tbl_Filter_TD_121_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_promo_sk1120_t = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 3);
            tbl_Filter_TD_121_output.setInt32(r, 3, _cs_promo_sk1120_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_13827_input.getInt64(i, 4);
            tbl_Filter_TD_121_output.setInt64(r, 4, _cs_order_number1121L_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 5);
            tbl_Filter_TD_121_output.setInt32(r, 5, _cs_ext_sales_price1127_t);
            int32_t _cs_net_profit1137_t = tbl_SerializeFromObject_TD_13827_input.getInt32(i, 6);
            tbl_Filter_TD_121_output.setInt32(r, 6, _cs_net_profit1137_t);
            r++;
        }
    }
    tbl_Filter_TD_121_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_121_output #Row: " << tbl_Filter_TD_121_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12343(Table &tbl_SerializeFromObject_TD_13452_input, Table &tbl_Filter_TD_12343_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_item_sk#671) AND isnotnull(sr_ticket_number#678L)))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_amt#680, sr_net_loss#688)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_amt#680, sr_net_loss#688)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13452_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_13452_input.getInt32(i, 0);
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_13452_input.getInt64(i, 1);
        if ((_sr_item_sk671!= 0) && (_sr_ticket_number678L!= 0)) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_13452_input.getInt32(i, 0);
            tbl_Filter_TD_12343_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_13452_input.getInt64(i, 1);
            tbl_Filter_TD_12343_output.setInt64(r, 1, _sr_ticket_number678L_t);
            int32_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_13452_input.getInt32(i, 2);
            tbl_Filter_TD_12343_output.setInt32(r, 2, _sr_return_amt680_t);
            int32_t _sr_net_loss688_t = tbl_SerializeFromObject_TD_13452_input.getInt32(i, 3);
            tbl_Filter_TD_12343_output.setInt32(r, 3, _sr_net_loss688_t);
            r++;
        }
    }
    tbl_Filter_TD_12343_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12343_output #Row: " << tbl_Filter_TD_12343_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12619(Table &tbl_SerializeFromObject_TD_13317_input, Table &tbl_Filter_TD_12619_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)) AND isnotnull(ss_item_sk#1208)) AND isnotnull(ss_promo_sk#1214)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13317_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 1);
        int32_t _ss_promo_sk1214 = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 3);
        if ((((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) && (_ss_item_sk1208!= 0)) && (_ss_promo_sk1214!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 0);
            tbl_Filter_TD_12619_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 1);
            tbl_Filter_TD_12619_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 2);
            tbl_Filter_TD_12619_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 3);
            tbl_Filter_TD_12619_output.setInt32(r, 3, _ss_promo_sk1214_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_13317_input.getInt64(i, 4);
            tbl_Filter_TD_12619_output.setInt64(r, 4, _ss_ticket_number1215L_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 5);
            tbl_Filter_TD_12619_output.setInt32(r, 5, _ss_ext_sales_price1221_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_13317_input.getInt32(i, 6);
            tbl_Filter_TD_12619_output.setInt32(r, 6, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_12619_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12619_output #Row: " << tbl_Filter_TD_12619_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11409(Table &tbl_SerializeFromObject_TD_12949_input, Table &tbl_Filter_TD_11409_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#8085) AND ((d_date#8085 >= 2000-08-23) AND (d_date#8085 <= 2000-09-22))) AND isnotnull(d_date_sk#8083)))
    // Input: ListBuffer(d_date_sk#8083, d_date#8085)
    // Output: ListBuffer(d_date_sk#8083)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12949_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date8085 = tbl_SerializeFromObject_TD_12949_input.getInt32(i, 1);
        int32_t _d_date_sk8083 = tbl_SerializeFromObject_TD_12949_input.getInt32(i, 0);
        if (((_d_date8085!= 0) && ((_d_date8085 >= 20000823) && (_d_date8085 <= 20000922))) && (_d_date_sk8083!= 0)) {
            int32_t _d_date_sk8083_t = tbl_SerializeFromObject_TD_12949_input.getInt32(i, 0);
            tbl_Filter_TD_11409_output.setInt32(r, 0, _d_date_sk8083_t);
            r++;
        }
    }
    tbl_Filter_TD_11409_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11409_output #Row: " << tbl_Filter_TD_11409_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_11115_key {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_11115_key& other) const {
        return ((_wr_item_sk833 == other._wr_item_sk833) && (_wr_order_number844L == other._wr_order_number844L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_11115_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_11115_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_item_sk833)) + (hash<int64_t>()(k._wr_order_number844L));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_11115_payload {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
void SW_JOIN_LEFTOUTER_TD_11115(Table &tbl_Filter_TD_12549_output, Table &tbl_Filter_TD_12145_output, Table &tbl_JOIN_LEFTOUTER_TD_11115_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((ws_item_sk#732 = wr_item_sk#833) AND (ws_order_number#746L = wr_order_number#844L)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_order_number#746L, ws_ext_sales_price#752, ws_net_profit#762)
    // Right Table: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_11115_key, SW_JOIN_LEFTOUTER_TD_11115_payload> ht1;
    int nrow1 = tbl_Filter_TD_12145_output.getNumRow();
    int nrow2 = tbl_Filter_TD_12549_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_item_sk833_k = tbl_Filter_TD_12145_output.getInt32(i, 0);
        int64_t _wr_order_number844L_k = tbl_Filter_TD_12145_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_11115_key keyA{_wr_item_sk833_k, _wr_order_number844L_k};
        int32_t _wr_item_sk833 = tbl_Filter_TD_12145_output.getInt32(i, 0);
        int64_t _wr_order_number844L = tbl_Filter_TD_12145_output.getInt64(i, 1);
        int32_t _wr_return_amt846 = tbl_Filter_TD_12145_output.getInt32(i, 2);
        int32_t _wr_net_loss854 = tbl_Filter_TD_12145_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_11115_payload payloadA{_wr_item_sk833, _wr_order_number844L, _wr_return_amt846, _wr_net_loss854};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _ws_item_sk732_k = tbl_Filter_TD_12549_output.getInt32(i, 1);
        int64_t _ws_order_number746L_k = tbl_Filter_TD_12549_output.getInt64(i, 4);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_11115_key{_ws_item_sk732_k, _ws_order_number746L_k});
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_12549_output.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_Filter_TD_12549_output.getInt32(i, 1);
        int32_t _ws_web_site_sk742 = tbl_Filter_TD_12549_output.getInt32(i, 2);
        int32_t _ws_promo_sk745 = tbl_Filter_TD_12549_output.getInt32(i, 3);
        int64_t _ws_order_number746L = tbl_Filter_TD_12549_output.getInt64(i, 4);
        int32_t _ws_ext_sales_price752 = tbl_Filter_TD_12549_output.getInt32(i, 5);
        int32_t _ws_net_profit762 = tbl_Filter_TD_12549_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_11115_key{_ws_item_sk732_k, _ws_order_number746L_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _wr_item_sk833 = (it_it->second)._wr_item_sk833;
                int64_t _wr_order_number844L = (it_it->second)._wr_order_number844L;
                int32_t _wr_return_amt846 = (it_it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it_it->second)._wr_net_loss854;
                tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 6, _wr_return_amt846);
                tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 7, _wr_net_loss854);
                tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 2, _ws_web_site_sk742);
                tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 3, _ws_promo_sk745);
                tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 4, _ws_ext_sales_price752);
                tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 5, _ws_net_profit762);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 0, _ws_sold_date_sk729);
            tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 1, _ws_item_sk732);
            tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 2, _ws_web_site_sk742);
            tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 3, _ws_promo_sk745);
            tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 4, _ws_ext_sales_price752);
            tbl_JOIN_LEFTOUTER_TD_11115_output.setInt32(r, 5, _ws_net_profit762);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_11115_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_11115_output #Row: " << tbl_JOIN_LEFTOUTER_TD_11115_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11718(Table &tbl_SerializeFromObject_TD_12216_input, Table &tbl_Filter_TD_11718_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#8016) AND ((d_date#8016 >= 2000-08-23) AND (d_date#8016 <= 2000-09-22))) AND isnotnull(d_date_sk#8014)))
    // Input: ListBuffer(d_date_sk#8014, d_date#8016)
    // Output: ListBuffer(d_date_sk#8014)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12216_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date8016 = tbl_SerializeFromObject_TD_12216_input.getInt32(i, 1);
        int32_t _d_date_sk8014 = tbl_SerializeFromObject_TD_12216_input.getInt32(i, 0);
        if (((_d_date8016!= 0) && ((_d_date8016 >= 20000823) && (_d_date8016 <= 20000922))) && (_d_date_sk8014!= 0)) {
            int32_t _d_date_sk8014_t = tbl_SerializeFromObject_TD_12216_input.getInt32(i, 0);
            tbl_Filter_TD_11718_output.setInt32(r, 0, _d_date_sk8014_t);
            r++;
        }
    }
    tbl_Filter_TD_11718_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11718_output #Row: " << tbl_Filter_TD_11718_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_11480_key {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_11480_key& other) const {
        return ((_cr_item_sk1025 == other._cr_item_sk1025) && (_cr_order_number1039L == other._cr_order_number1039L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_11480_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_11480_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_item_sk1025)) + (hash<int64_t>()(k._cr_order_number1039L));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_11480_payload {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
};
void SW_JOIN_LEFTOUTER_TD_11480(Table &tbl_Filter_TD_121_output, Table &tbl_Filter_TD_127_output, Table &tbl_JOIN_LEFTOUTER_TD_11480_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((cs_item_sk#1119 = cr_item_sk#1025) AND (cs_order_number#1121L = cr_order_number#1039L)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_amount#1041, cr_net_loss#1049)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_11480_key, SW_JOIN_LEFTOUTER_TD_11480_payload> ht1;
    int nrow1 = tbl_Filter_TD_127_output.getNumRow();
    int nrow2 = tbl_Filter_TD_121_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025_k = tbl_Filter_TD_127_output.getInt32(i, 0);
        int64_t _cr_order_number1039L_k = tbl_Filter_TD_127_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_11480_key keyA{_cr_item_sk1025_k, _cr_order_number1039L_k};
        int32_t _cr_item_sk1025 = tbl_Filter_TD_127_output.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_Filter_TD_127_output.getInt64(i, 1);
        int32_t _cr_return_amount1041 = tbl_Filter_TD_127_output.getInt32(i, 2);
        int32_t _cr_net_loss1049 = tbl_Filter_TD_127_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_11480_payload payloadA{_cr_item_sk1025, _cr_order_number1039L, _cr_return_amount1041, _cr_net_loss1049};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _cs_item_sk1119_k = tbl_Filter_TD_121_output.getInt32(i, 2);
        int64_t _cs_order_number1121L_k = tbl_Filter_TD_121_output.getInt64(i, 4);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_11480_key{_cs_item_sk1119_k, _cs_order_number1121L_k});
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_121_output.getInt32(i, 0);
        int32_t _cs_catalog_page_sk1116 = tbl_Filter_TD_121_output.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_Filter_TD_121_output.getInt32(i, 2);
        int32_t _cs_promo_sk1120 = tbl_Filter_TD_121_output.getInt32(i, 3);
        int64_t _cs_order_number1121L = tbl_Filter_TD_121_output.getInt64(i, 4);
        int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_121_output.getInt32(i, 5);
        int32_t _cs_net_profit1137 = tbl_Filter_TD_121_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_11480_key{_cs_item_sk1119_k, _cs_order_number1121L_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cr_item_sk1025 = (it_it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it_it->second)._cr_order_number1039L;
                int32_t _cr_return_amount1041 = (it_it->second)._cr_return_amount1041;
                int32_t _cr_net_loss1049 = (it_it->second)._cr_net_loss1049;
                tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 6, _cr_return_amount1041);
                tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 7, _cr_net_loss1049);
                tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 1, _cs_catalog_page_sk1116);
                tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 3, _cs_promo_sk1120);
                tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 4, _cs_ext_sales_price1127);
                tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 5, _cs_net_profit1137);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 0, _cs_sold_date_sk1104);
            tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 1, _cs_catalog_page_sk1116);
            tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 2, _cs_item_sk1119);
            tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 3, _cs_promo_sk1120);
            tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 4, _cs_ext_sales_price1127);
            tbl_JOIN_LEFTOUTER_TD_11480_output.setInt32(r, 5, _cs_net_profit1137);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_11480_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_11480_output #Row: " << tbl_JOIN_LEFTOUTER_TD_11480_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11984(Table &tbl_SerializeFromObject_TD_12284_input, Table &tbl_Filter_TD_11984_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-08-23) AND (d_date#122 <= 2000-09-22))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12284_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000823) && (_d_date122 <= 20000922))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 0);
            tbl_Filter_TD_11984_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11984_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11984_output #Row: " << tbl_Filter_TD_11984_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_1165_key {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_1165_key& other) const {
        return ((_sr_item_sk671 == other._sr_item_sk671) && (_sr_ticket_number678L == other._sr_ticket_number678L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_1165_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_1165_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_item_sk671)) + (hash<int64_t>()(k._sr_ticket_number678L));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_1165_payload {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
void SW_JOIN_LEFTOUTER_TD_1165(Table &tbl_Filter_TD_12619_output, Table &tbl_Filter_TD_12343_output, Table &tbl_JOIN_LEFTOUTER_TD_1165_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((ss_item_sk#1208 = sr_item_sk#671) AND (ss_ticket_number#1215L = sr_ticket_number#678L)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_amt#680, sr_net_loss#688)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_1165_key, SW_JOIN_LEFTOUTER_TD_1165_payload> ht1;
    int nrow1 = tbl_Filter_TD_12343_output.getNumRow();
    int nrow2 = tbl_Filter_TD_12619_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_item_sk671_k = tbl_Filter_TD_12343_output.getInt32(i, 0);
        int64_t _sr_ticket_number678L_k = tbl_Filter_TD_12343_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_1165_key keyA{_sr_item_sk671_k, _sr_ticket_number678L_k};
        int32_t _sr_item_sk671 = tbl_Filter_TD_12343_output.getInt32(i, 0);
        int64_t _sr_ticket_number678L = tbl_Filter_TD_12343_output.getInt64(i, 1);
        int32_t _sr_return_amt680 = tbl_Filter_TD_12343_output.getInt32(i, 2);
        int32_t _sr_net_loss688 = tbl_Filter_TD_12343_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_1165_payload payloadA{_sr_item_sk671, _sr_ticket_number678L, _sr_return_amt680, _sr_net_loss688};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _ss_item_sk1208_k = tbl_Filter_TD_12619_output.getInt32(i, 1);
        int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_12619_output.getInt64(i, 4);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_1165_key{_ss_item_sk1208_k, _ss_ticket_number1215L_k});
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12619_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_12619_output.getInt32(i, 1);
        int32_t _ss_store_sk1213 = tbl_Filter_TD_12619_output.getInt32(i, 2);
        int32_t _ss_promo_sk1214 = tbl_Filter_TD_12619_output.getInt32(i, 3);
        int64_t _ss_ticket_number1215L = tbl_Filter_TD_12619_output.getInt64(i, 4);
        int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_12619_output.getInt32(i, 5);
        int32_t _ss_net_profit1228 = tbl_Filter_TD_12619_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_1165_key{_ss_item_sk1208_k, _ss_ticket_number1215L_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _sr_item_sk671 = (it_it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it_it->second)._sr_ticket_number678L;
                int32_t _sr_return_amt680 = (it_it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it_it->second)._sr_net_loss688;
                tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 6, _sr_return_amt680);
                tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 7, _sr_net_loss688);
                tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 3, _ss_promo_sk1214);
                tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 4, _ss_ext_sales_price1221);
                tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 5, _ss_net_profit1228);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 0, _ss_sold_date_sk1206);
            tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 1, _ss_item_sk1208);
            tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 2, _ss_store_sk1213);
            tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 3, _ss_promo_sk1214);
            tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 4, _ss_ext_sales_price1221);
            tbl_JOIN_LEFTOUTER_TD_1165_output.setInt32(r, 5, _ss_net_profit1228);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_1165_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_1165_output #Row: " << tbl_JOIN_LEFTOUTER_TD_1165_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10990(Table &tbl_SerializeFromObject_TD_11788_input, Table &tbl_Filter_TD_10990_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(web_site_sk#537))
    // Input: ListBuffer(web_site_sk#537, web_site_id#538)
    // Output: ListBuffer(web_site_sk#537, web_site_id#538)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11788_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _web_site_sk537 = tbl_SerializeFromObject_TD_11788_input.getInt32(i, 0);
        if (_web_site_sk537!= 0) {
            int32_t _web_site_sk537_t = tbl_SerializeFromObject_TD_11788_input.getInt32(i, 0);
            tbl_Filter_TD_10990_output.setInt32(r, 0, _web_site_sk537_t);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_t = tbl_SerializeFromObject_TD_11788_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10990_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _web_site_id538_t);
            r++;
        }
    }
    tbl_Filter_TD_10990_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10990_output #Row: " << tbl_Filter_TD_10990_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10500_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_10500_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10500_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10500_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_10500_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_web_site_sk742;
    int32_t _ws_promo_sk745;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
struct SW_JOIN_INNER_TD_10500_key_rightMajor {
    int32_t _d_date_sk8083;
    bool operator==(const SW_JOIN_INNER_TD_10500_key_rightMajor& other) const {
        return ((_d_date_sk8083 == other._d_date_sk8083));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10500_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10500_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8083));
    }
};
}
struct SW_JOIN_INNER_TD_10500_payload_rightMajor {
    int32_t _d_date_sk8083;
};
void SW_JOIN_INNER_TD_10500(Table &tbl_JOIN_LEFTOUTER_TD_11115_output, Table &tbl_Filter_TD_11409_output, Table &tbl_JOIN_INNER_TD_10500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#8083))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(d_date_sk#8083)
    // Output Table: ListBuffer(ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854)
    int left_nrow = tbl_JOIN_LEFTOUTER_TD_11115_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11409_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10500_key_leftMajor, SW_JOIN_INNER_TD_10500_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTOUTER_TD_11115_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10500_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 1);
            int32_t _ws_web_site_sk742 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 2);
            int32_t _ws_promo_sk745 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 3);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 4);
            int32_t _ws_net_profit762 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 5);
            int32_t _wr_return_amt846 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 6);
            int32_t _wr_net_loss854 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10500_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_web_site_sk742, _ws_promo_sk745, _ws_ext_sales_price752, _ws_net_profit762, _wr_return_amt846, _wr_net_loss854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11409_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8083_k = tbl_Filter_TD_11409_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10500_key_leftMajor{_d_date_sk8083_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_web_site_sk742 = (it->second)._ws_web_site_sk742;
                int32_t _ws_promo_sk745 = (it->second)._ws_promo_sk745;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                int32_t _d_date_sk8083 = tbl_Filter_TD_11409_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 1, _ws_web_site_sk742);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 2, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 3, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 4, _ws_net_profit762);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 5, _wr_return_amt846);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 6, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10500_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10500_key_rightMajor, SW_JOIN_INNER_TD_10500_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11409_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8083_k = tbl_Filter_TD_11409_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10500_key_rightMajor keyA{_d_date_sk8083_k};
            int32_t _d_date_sk8083 = tbl_Filter_TD_11409_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10500_payload_rightMajor payloadA{_d_date_sk8083};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTOUTER_TD_11115_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10500_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8083 = (it->second)._d_date_sk8083;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 1);
                int32_t _ws_web_site_sk742 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 2);
                int32_t _ws_promo_sk745 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 3);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 4);
                int32_t _ws_net_profit762 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 5);
                int32_t _wr_return_amt846 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 6);
                int32_t _wr_net_loss854 = tbl_JOIN_LEFTOUTER_TD_11115_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 1, _ws_web_site_sk742);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 2, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 3, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 4, _ws_net_profit762);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 5, _wr_return_amt846);
                tbl_JOIN_INNER_TD_10500_output.setInt32(r, 6, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10500_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10500_output #Row: " << tbl_JOIN_INNER_TD_10500_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10893(Table &tbl_SerializeFromObject_TD_11362_input, Table &tbl_Filter_TD_10893_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cp_catalog_page_sk#996))
    // Input: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    // Output: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11362_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cp_catalog_page_sk996 = tbl_SerializeFromObject_TD_11362_input.getInt32(i, 0);
        if (_cp_catalog_page_sk996!= 0) {
            int32_t _cp_catalog_page_sk996_t = tbl_SerializeFromObject_TD_11362_input.getInt32(i, 0);
            tbl_Filter_TD_10893_output.setInt32(r, 0, _cp_catalog_page_sk996_t);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_t = tbl_SerializeFromObject_TD_11362_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10893_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cp_catalog_page_id997_t);
            r++;
        }
    }
    tbl_Filter_TD_10893_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10893_output #Row: " << tbl_Filter_TD_10893_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10225_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_10225_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10225_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10225_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_10225_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_catalog_page_sk1116;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
};
struct SW_JOIN_INNER_TD_10225_key_rightMajor {
    int32_t _d_date_sk8014;
    bool operator==(const SW_JOIN_INNER_TD_10225_key_rightMajor& other) const {
        return ((_d_date_sk8014 == other._d_date_sk8014));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10225_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10225_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8014));
    }
};
}
struct SW_JOIN_INNER_TD_10225_payload_rightMajor {
    int32_t _d_date_sk8014;
};
void SW_JOIN_INNER_TD_10225(Table &tbl_JOIN_LEFTOUTER_TD_11480_output, Table &tbl_Filter_TD_11718_output, Table &tbl_JOIN_INNER_TD_10225_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#8014))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049)
    // Right Table: ListBuffer(d_date_sk#8014)
    // Output Table: ListBuffer(cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049)
    int left_nrow = tbl_JOIN_LEFTOUTER_TD_11480_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11718_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10225_key_leftMajor, SW_JOIN_INNER_TD_10225_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTOUTER_TD_11480_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10225_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 0);
            int32_t _cs_catalog_page_sk1116 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 2);
            int32_t _cs_promo_sk1120 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 3);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 4);
            int32_t _cs_net_profit1137 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 5);
            int32_t _cr_return_amount1041 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 6);
            int32_t _cr_net_loss1049 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10225_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_catalog_page_sk1116, _cs_item_sk1119, _cs_promo_sk1120, _cs_ext_sales_price1127, _cs_net_profit1137, _cr_return_amount1041, _cr_net_loss1049};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11718_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8014_k = tbl_Filter_TD_11718_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10225_key_leftMajor{_d_date_sk8014_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_catalog_page_sk1116 = (it->second)._cs_catalog_page_sk1116;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _cr_net_loss1049 = (it->second)._cr_net_loss1049;
                int32_t _d_date_sk8014 = tbl_Filter_TD_11718_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 0, _cs_catalog_page_sk1116);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 3, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 4, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 5, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 6, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10225_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10225_key_rightMajor, SW_JOIN_INNER_TD_10225_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11718_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8014_k = tbl_Filter_TD_11718_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10225_key_rightMajor keyA{_d_date_sk8014_k};
            int32_t _d_date_sk8014 = tbl_Filter_TD_11718_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10225_payload_rightMajor payloadA{_d_date_sk8014};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTOUTER_TD_11480_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10225_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8014 = (it->second)._d_date_sk8014;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 0);
                int32_t _cs_catalog_page_sk1116 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 2);
                int32_t _cs_promo_sk1120 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 3);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 4);
                int32_t _cs_net_profit1137 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 5);
                int32_t _cr_return_amount1041 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 6);
                int32_t _cr_net_loss1049 = tbl_JOIN_LEFTOUTER_TD_11480_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 0, _cs_catalog_page_sk1116);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 3, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 4, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 5, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_10225_output.setInt32(r, 6, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10225_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10225_output #Row: " << tbl_JOIN_INNER_TD_10225_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10422(Table &tbl_SerializeFromObject_TD_11212_input, Table &tbl_Filter_TD_10422_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output: ListBuffer(s_store_sk#378, s_store_id#379)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11212_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_11212_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_11212_input.getInt32(i, 0);
            tbl_Filter_TD_10422_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_t = tbl_SerializeFromObject_TD_11212_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10422_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id379_t);
            r++;
        }
    }
    tbl_Filter_TD_10422_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10422_output #Row: " << tbl_Filter_TD_10422_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10283_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10283_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10283_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10283_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10283_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
struct SW_JOIN_INNER_TD_10283_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10283_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10283_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10283_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10283_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10283(Table &tbl_JOIN_LEFTOUTER_TD_1165_output, Table &tbl_Filter_TD_11984_output, Table &tbl_JOIN_INNER_TD_10283_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688)
    int left_nrow = tbl_JOIN_LEFTOUTER_TD_1165_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11984_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10283_key_leftMajor, SW_JOIN_INNER_TD_10283_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTOUTER_TD_1165_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10283_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 2);
            int32_t _ss_promo_sk1214 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 3);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 4);
            int32_t _ss_net_profit1228 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 5);
            int32_t _sr_return_amt680 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 6);
            int32_t _sr_net_loss688 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10283_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_promo_sk1214, _ss_ext_sales_price1221, _ss_net_profit1228, _sr_return_amt680, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11984_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11984_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10283_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _d_date_sk120 = tbl_Filter_TD_11984_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 2, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 4, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 5, _sr_return_amt680);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 6, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10283_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10283_key_rightMajor, SW_JOIN_INNER_TD_10283_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11984_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11984_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10283_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11984_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10283_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTOUTER_TD_1165_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10283_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 2);
                int32_t _ss_promo_sk1214 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 3);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 4);
                int32_t _ss_net_profit1228 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 5);
                int32_t _sr_return_amt680 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 6);
                int32_t _sr_net_loss688 = tbl_JOIN_LEFTOUTER_TD_1165_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 2, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 4, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 5, _sr_return_amt680);
                tbl_JOIN_INNER_TD_10283_output.setInt32(r, 6, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10283_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10283_output #Row: " << tbl_JOIN_INNER_TD_10283_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9279(Table &tbl_SerializeFromObject_TD_10532_input, Table &tbl_Filter_TD_9279_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#8116) AND (i_current_price#8116 > 50.00)) AND isnotnull(i_item_sk#8111)))
    // Input: ListBuffer(i_item_sk#8111, i_current_price#8116)
    // Output: ListBuffer(i_item_sk#8111)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10532_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price8116 = tbl_SerializeFromObject_TD_10532_input.getInt32(i, 1);
        int32_t _i_item_sk8111 = tbl_SerializeFromObject_TD_10532_input.getInt32(i, 0);
        if (((_i_current_price8116!= 0) && (_i_current_price8116 > 50.00)) && (_i_item_sk8111!= 0)) {
            int32_t _i_item_sk8111_t = tbl_SerializeFromObject_TD_10532_input.getInt32(i, 0);
            tbl_Filter_TD_9279_output.setInt32(r, 0, _i_item_sk8111_t);
            r++;
        }
    }
    tbl_Filter_TD_9279_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9279_output #Row: " << tbl_Filter_TD_9279_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_957_key_leftMajor {
    int32_t _ws_web_site_sk742;
    bool operator==(const SW_JOIN_INNER_TD_957_key_leftMajor& other) const {
        return ((_ws_web_site_sk742 == other._ws_web_site_sk742));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_957_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_957_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_site_sk742));
    }
};
}
struct SW_JOIN_INNER_TD_957_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_web_site_sk742;
    int32_t _ws_promo_sk745;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
struct SW_JOIN_INNER_TD_957_key_rightMajor {
    int32_t _web_site_sk537;
    bool operator==(const SW_JOIN_INNER_TD_957_key_rightMajor& other) const {
        return ((_web_site_sk537 == other._web_site_sk537));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_957_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_957_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._web_site_sk537));
    }
};
}
struct SW_JOIN_INNER_TD_957_payload_rightMajor {
    int32_t _web_site_sk537;
    std::string _web_site_id538;
};
void SW_JOIN_INNER_TD_957(Table &tbl_JOIN_INNER_TD_10500_output, Table &tbl_Filter_TD_10990_output, Table &tbl_JOIN_INNER_TD_957_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_site_sk#742 = web_site_sk#537))
    // Left Table: ListBuffer(ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(web_site_sk#537, web_site_id#538)
    // Output Table: ListBuffer(ws_item_sk#732, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    int left_nrow = tbl_JOIN_INNER_TD_10500_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10990_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_957_key_leftMajor, SW_JOIN_INNER_TD_957_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10500_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_site_sk742_k = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_957_key_leftMajor keyA{_ws_web_site_sk742_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 0);
            int32_t _ws_web_site_sk742 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 1);
            int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 3);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 4);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 5);
            int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_957_payload_leftMajor payloadA{_ws_item_sk732, _ws_web_site_sk742, _ws_promo_sk745, _ws_ext_sales_price752, _ws_net_profit762, _wr_return_amt846, _wr_net_loss854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10990_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_10990_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_957_key_leftMajor{_web_site_sk537_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_web_site_sk742 = (it->second)._ws_web_site_sk742;
                int32_t _ws_promo_sk745 = (it->second)._ws_promo_sk745;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                int32_t _web_site_sk537 = tbl_Filter_TD_10990_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_Filter_TD_10990_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _web_site_id538 = std::string(_web_site_id538_n.data());
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 1, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 2, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 3, _ws_net_profit762);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 4, _wr_return_amt846);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 5, _wr_net_loss854);
                tbl_JOIN_INNER_TD_957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_957_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_957_key_rightMajor, SW_JOIN_INNER_TD_957_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10990_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_10990_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_957_key_rightMajor keyA{_web_site_sk537_k};
            int32_t _web_site_sk537 = tbl_Filter_TD_10990_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_Filter_TD_10990_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _web_site_id538 = std::string(_web_site_id538_n.data());
            SW_JOIN_INNER_TD_957_payload_rightMajor payloadA{_web_site_sk537, _web_site_id538};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10500_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_site_sk742_k = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_957_key_rightMajor{_ws_web_site_sk742_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _web_site_sk537 = (it->second)._web_site_sk537;
                std::string _web_site_id538 = (it->second)._web_site_id538;
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n{};
                memcpy(_web_site_id538_n.data(), (_web_site_id538).data(), (_web_site_id538).length());
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 0);
                int32_t _ws_web_site_sk742 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 1);
                int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 3);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 4);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 5);
                int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_10500_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _web_site_id538_n);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 1, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 2, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 3, _ws_net_profit762);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 4, _wr_return_amt846);
                tbl_JOIN_INNER_TD_957_output.setInt32(r, 5, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_957_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_957_output #Row: " << tbl_JOIN_INNER_TD_957_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9631(Table &tbl_SerializeFromObject_TD_10210_input, Table &tbl_Filter_TD_9631_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#8047) AND (i_current_price#8047 > 50.00)) AND isnotnull(i_item_sk#8042)))
    // Input: ListBuffer(i_item_sk#8042, i_current_price#8047)
    // Output: ListBuffer(i_item_sk#8042)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10210_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price8047 = tbl_SerializeFromObject_TD_10210_input.getInt32(i, 1);
        int32_t _i_item_sk8042 = tbl_SerializeFromObject_TD_10210_input.getInt32(i, 0);
        if (((_i_current_price8047!= 0) && (_i_current_price8047 > 50.00)) && (_i_item_sk8042!= 0)) {
            int32_t _i_item_sk8042_t = tbl_SerializeFromObject_TD_10210_input.getInt32(i, 0);
            tbl_Filter_TD_9631_output.setInt32(r, 0, _i_item_sk8042_t);
            r++;
        }
    }
    tbl_Filter_TD_9631_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9631_output #Row: " << tbl_Filter_TD_9631_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9107_key_leftMajor {
    int32_t _cs_catalog_page_sk1116;
    bool operator==(const SW_JOIN_INNER_TD_9107_key_leftMajor& other) const {
        return ((_cs_catalog_page_sk1116 == other._cs_catalog_page_sk1116));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9107_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9107_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_catalog_page_sk1116));
    }
};
}
struct SW_JOIN_INNER_TD_9107_payload_leftMajor {
    int32_t _cs_catalog_page_sk1116;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
};
struct SW_JOIN_INNER_TD_9107_key_rightMajor {
    int32_t _cp_catalog_page_sk996;
    bool operator==(const SW_JOIN_INNER_TD_9107_key_rightMajor& other) const {
        return ((_cp_catalog_page_sk996 == other._cp_catalog_page_sk996));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9107_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9107_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cp_catalog_page_sk996));
    }
};
}
struct SW_JOIN_INNER_TD_9107_payload_rightMajor {
    int32_t _cp_catalog_page_sk996;
    std::string _cp_catalog_page_id997;
};
void SW_JOIN_INNER_TD_9107(Table &tbl_JOIN_INNER_TD_10225_output, Table &tbl_Filter_TD_10893_output, Table &tbl_JOIN_INNER_TD_9107_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_catalog_page_sk#1116 = cp_catalog_page_sk#996))
    // Left Table: ListBuffer(cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049)
    // Right Table: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    int left_nrow = tbl_JOIN_INNER_TD_10225_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10893_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9107_key_leftMajor, SW_JOIN_INNER_TD_9107_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10225_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_catalog_page_sk1116_k = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9107_key_leftMajor keyA{_cs_catalog_page_sk1116_k};
            int32_t _cs_catalog_page_sk1116 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 1);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 3);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 4);
            int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 5);
            int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_9107_payload_leftMajor payloadA{_cs_catalog_page_sk1116, _cs_item_sk1119, _cs_promo_sk1120, _cs_ext_sales_price1127, _cs_net_profit1137, _cr_return_amount1041, _cr_net_loss1049};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10893_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cp_catalog_page_sk996_k = tbl_Filter_TD_10893_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9107_key_leftMajor{_cp_catalog_page_sk996_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_catalog_page_sk1116 = (it->second)._cs_catalog_page_sk1116;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _cr_net_loss1049 = (it->second)._cr_net_loss1049;
                int32_t _cp_catalog_page_sk996 = tbl_Filter_TD_10893_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_Filter_TD_10893_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 2, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 3, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 4, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 5, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_9107_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9107_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9107_key_rightMajor, SW_JOIN_INNER_TD_9107_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10893_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cp_catalog_page_sk996_k = tbl_Filter_TD_10893_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9107_key_rightMajor keyA{_cp_catalog_page_sk996_k};
            int32_t _cp_catalog_page_sk996 = tbl_Filter_TD_10893_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_Filter_TD_10893_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
            SW_JOIN_INNER_TD_9107_payload_rightMajor payloadA{_cp_catalog_page_sk996, _cp_catalog_page_id997};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10225_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_catalog_page_sk1116_k = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9107_key_rightMajor{_cs_catalog_page_sk1116_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cp_catalog_page_sk996 = (it->second)._cp_catalog_page_sk996;
                std::string _cp_catalog_page_id997 = (it->second)._cp_catalog_page_id997;
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n{};
                memcpy(_cp_catalog_page_id997_n.data(), (_cp_catalog_page_id997).data(), (_cp_catalog_page_id997).length());
                int32_t _cs_catalog_page_sk1116 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 1);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 3);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 4);
                int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 5);
                int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_10225_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_9107_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cp_catalog_page_id997_n);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 2, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 3, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 4, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_9107_output.setInt32(r, 5, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9107_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9107_output #Row: " << tbl_JOIN_INNER_TD_9107_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9146(Table &tbl_SerializeFromObject_TD_10526_input, Table &tbl_Filter_TD_9146_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#233) AND (i_current_price#233 > 50.00)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10526_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_SerializeFromObject_TD_10526_input.getInt32(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_10526_input.getInt32(i, 0);
        if (((_i_current_price233!= 0) && (_i_current_price233 > 50.00)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_10526_input.getInt32(i, 0);
            tbl_Filter_TD_9146_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_9146_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9146_output #Row: " << tbl_Filter_TD_9146_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9288_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_9288_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9288_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9288_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_9288_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
struct SW_JOIN_INNER_TD_9288_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_9288_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9288_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9288_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_9288_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_id379;
};
void SW_JOIN_INNER_TD_9288(Table &tbl_JOIN_INNER_TD_10283_output, Table &tbl_Filter_TD_10422_output, Table &tbl_JOIN_INNER_TD_9288_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688)
    // Right Table: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_10283_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10422_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9288_key_leftMajor, SW_JOIN_INNER_TD_9288_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10283_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9288_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 1);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 3);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 4);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 5);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_9288_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_promo_sk1214, _ss_ext_sales_price1221, _ss_net_profit1228, _sr_return_amt680, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10422_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_10422_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9288_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _s_store_sk378 = tbl_Filter_TD_10422_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_10422_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 1, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 3, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 4, _sr_return_amt680);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 5, _sr_net_loss688);
                tbl_JOIN_INNER_TD_9288_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9288_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9288_key_rightMajor, SW_JOIN_INNER_TD_9288_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10422_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_10422_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9288_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_10422_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_10422_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_9288_payload_rightMajor payloadA{_s_store_sk378, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10283_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9288_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 1);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 3);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 4);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 5);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10283_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_9288_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_id379_n);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 1, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 3, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 4, _sr_return_amt680);
                tbl_JOIN_INNER_TD_9288_output.setInt32(r, 5, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9288_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9288_output #Row: " << tbl_JOIN_INNER_TD_9288_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8383(Table &tbl_SerializeFromObject_TD_9383_input, Table &tbl_Filter_TD_8383_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(p_channel_tv#8144) AND (p_channel_tv#8144 = N)) AND isnotnull(p_promo_sk#8133)))
    // Input: ListBuffer(p_promo_sk#8133, p_channel_tv#8144)
    // Output: ListBuffer(p_promo_sk#8133)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9383_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_tv8144 = tbl_SerializeFromObject_TD_9383_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _p_promo_sk8133 = tbl_SerializeFromObject_TD_9383_input.getInt32(i, 0);
        if ((（std::string(_isnotnullp_channel_tv8144.data()) != "NULL") && (std::string(_p_channel_tv8144.data()) == "N")) && (_p_promo_sk8133!= 0)) {
            int32_t _p_promo_sk8133_t = tbl_SerializeFromObject_TD_9383_input.getInt32(i, 0);
            tbl_Filter_TD_8383_output.setInt32(r, 0, _p_promo_sk8133_t);
            r++;
        }
    }
    tbl_Filter_TD_8383_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8383_output #Row: " << tbl_Filter_TD_8383_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8156_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_8156_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8156_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8156_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_8156_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_promo_sk745;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
    std::string _web_site_id538;
};
struct SW_JOIN_INNER_TD_8156_key_rightMajor {
    int32_t _i_item_sk8111;
    bool operator==(const SW_JOIN_INNER_TD_8156_key_rightMajor& other) const {
        return ((_i_item_sk8111 == other._i_item_sk8111));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8156_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8156_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk8111));
    }
};
}
struct SW_JOIN_INNER_TD_8156_payload_rightMajor {
    int32_t _i_item_sk8111;
};
void SW_JOIN_INNER_TD_8156(Table &tbl_JOIN_INNER_TD_957_output, Table &tbl_Filter_TD_9279_output, Table &tbl_JOIN_INNER_TD_8156_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#8111))
    // Left Table: ListBuffer(ws_item_sk#732, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    // Right Table: ListBuffer(i_item_sk#8111)
    // Output Table: ListBuffer(ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    int left_nrow = tbl_JOIN_INNER_TD_957_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9279_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8156_key_leftMajor, SW_JOIN_INNER_TD_8156_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_957_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_957_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8156_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 0);
            int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 2);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 3);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 4);
            int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_JOIN_INNER_TD_957_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _web_site_id538 = std::string(_web_site_id538_n.data());
            SW_JOIN_INNER_TD_8156_payload_leftMajor payloadA{_ws_item_sk732, _ws_promo_sk745, _ws_ext_sales_price752, _ws_net_profit762, _wr_return_amt846, _wr_net_loss854, _web_site_id538};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9279_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk8111_k = tbl_Filter_TD_9279_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8156_key_leftMajor{_i_item_sk8111_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_promo_sk745 = (it->second)._ws_promo_sk745;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                std::string _web_site_id538 = (it->second)._web_site_id538;
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n{};
                memcpy(_web_site_id538_n.data(), (_web_site_id538).data(), (_web_site_id538).length());
                int32_t _i_item_sk8111 = tbl_Filter_TD_9279_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 0, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 2, _ws_net_profit762);
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 3, _wr_return_amt846);
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 4, _wr_net_loss854);
                tbl_JOIN_INNER_TD_8156_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8156_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8156_key_rightMajor, SW_JOIN_INNER_TD_8156_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9279_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk8111_k = tbl_Filter_TD_9279_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8156_key_rightMajor keyA{_i_item_sk8111_k};
            int32_t _i_item_sk8111 = tbl_Filter_TD_9279_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8156_payload_rightMajor payloadA{_i_item_sk8111};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_957_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_957_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8156_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk8111 = (it->second)._i_item_sk8111;
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 0);
                int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 2);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 3);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 4);
                int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_957_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_JOIN_INNER_TD_957_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _web_site_id538 = std::string(_web_site_id538_n.data());
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 0, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 2, _ws_net_profit762);
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 3, _wr_return_amt846);
                tbl_JOIN_INNER_TD_8156_output.setInt32(r, 4, _wr_net_loss854);
                tbl_JOIN_INNER_TD_8156_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8156_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8156_output #Row: " << tbl_JOIN_INNER_TD_8156_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8916(Table &tbl_SerializeFromObject_TD_9381_input, Table &tbl_Filter_TD_8916_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(p_channel_tv#8075) AND (p_channel_tv#8075 = N)) AND isnotnull(p_promo_sk#8064)))
    // Input: ListBuffer(p_promo_sk#8064, p_channel_tv#8075)
    // Output: ListBuffer(p_promo_sk#8064)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9381_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_tv8075 = tbl_SerializeFromObject_TD_9381_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _p_promo_sk8064 = tbl_SerializeFromObject_TD_9381_input.getInt32(i, 0);
        if ((（std::string(_isnotnullp_channel_tv8075.data()) != "NULL") && (std::string(_p_channel_tv8075.data()) == "N")) && (_p_promo_sk8064!= 0)) {
            int32_t _p_promo_sk8064_t = tbl_SerializeFromObject_TD_9381_input.getInt32(i, 0);
            tbl_Filter_TD_8916_output.setInt32(r, 0, _p_promo_sk8064_t);
            r++;
        }
    }
    tbl_Filter_TD_8916_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8916_output #Row: " << tbl_Filter_TD_8916_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8749_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_8749_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8749_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8749_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_8749_payload_leftMajor {
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
    std::string _cp_catalog_page_id997;
};
struct SW_JOIN_INNER_TD_8749_key_rightMajor {
    int32_t _i_item_sk8042;
    bool operator==(const SW_JOIN_INNER_TD_8749_key_rightMajor& other) const {
        return ((_i_item_sk8042 == other._i_item_sk8042));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8749_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8749_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk8042));
    }
};
}
struct SW_JOIN_INNER_TD_8749_payload_rightMajor {
    int32_t _i_item_sk8042;
};
void SW_JOIN_INNER_TD_8749(Table &tbl_JOIN_INNER_TD_9107_output, Table &tbl_Filter_TD_9631_output, Table &tbl_JOIN_INNER_TD_8749_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#8042))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    // Right Table: ListBuffer(i_item_sk#8042)
    // Output Table: ListBuffer(cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    int left_nrow = tbl_JOIN_INNER_TD_9107_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9631_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8749_key_leftMajor, SW_JOIN_INNER_TD_8749_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9107_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8749_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 0);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 1);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 2);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 3);
            int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 4);
            int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_JOIN_INNER_TD_9107_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
            SW_JOIN_INNER_TD_8749_payload_leftMajor payloadA{_cs_item_sk1119, _cs_promo_sk1120, _cs_ext_sales_price1127, _cs_net_profit1137, _cr_return_amount1041, _cr_net_loss1049, _cp_catalog_page_id997};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9631_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk8042_k = tbl_Filter_TD_9631_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8749_key_leftMajor{_i_item_sk8042_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _cr_net_loss1049 = (it->second)._cr_net_loss1049;
                std::string _cp_catalog_page_id997 = (it->second)._cp_catalog_page_id997;
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n{};
                memcpy(_cp_catalog_page_id997_n.data(), (_cp_catalog_page_id997).data(), (_cp_catalog_page_id997).length());
                int32_t _i_item_sk8042 = tbl_Filter_TD_9631_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 0, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 2, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 3, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 4, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_8749_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8749_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8749_key_rightMajor, SW_JOIN_INNER_TD_8749_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9631_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk8042_k = tbl_Filter_TD_9631_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8749_key_rightMajor keyA{_i_item_sk8042_k};
            int32_t _i_item_sk8042 = tbl_Filter_TD_9631_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8749_payload_rightMajor payloadA{_i_item_sk8042};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9107_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8749_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk8042 = (it->second)._i_item_sk8042;
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 0);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 1);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 2);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 3);
                int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 4);
                int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_9107_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_JOIN_INNER_TD_9107_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 0, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 2, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 3, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_8749_output.setInt32(r, 4, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_8749_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8749_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8749_output #Row: " << tbl_JOIN_INNER_TD_8749_output.getNumRow() << std::endl;
}

void SW_Filter_TD_83(Table &tbl_SerializeFromObject_TD_9793_input, Table &tbl_Filter_TD_83_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(p_channel_tv#305) AND (p_channel_tv#305 = N)) AND isnotnull(p_promo_sk#294)))
    // Input: ListBuffer(p_promo_sk#294, p_channel_tv#305)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9793_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_tv305 = tbl_SerializeFromObject_TD_9793_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_9793_input.getInt32(i, 0);
        if ((（std::string(_isnotnullp_channel_tv305.data()) != "NULL") && (std::string(_p_channel_tv305.data()) == "N")) && (_p_promo_sk294!= 0)) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_9793_input.getInt32(i, 0);
            tbl_Filter_TD_83_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_83_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_83_output #Row: " << tbl_Filter_TD_83_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8600_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_8600_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8600_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8600_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_8600_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
    std::string _s_store_id379;
};
struct SW_JOIN_INNER_TD_8600_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_8600_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8600_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8600_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_8600_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_8600(Table &tbl_JOIN_INNER_TD_9288_output, Table &tbl_Filter_TD_9146_output, Table &tbl_JOIN_INNER_TD_8600_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_9288_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9146_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8600_key_leftMajor, SW_JOIN_INNER_TD_8600_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9288_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8600_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 0);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 2);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 3);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 4);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_9288_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_8600_payload_leftMajor payloadA{_ss_item_sk1208, _ss_promo_sk1214, _ss_ext_sales_price1221, _ss_net_profit1228, _sr_return_amt680, _sr_net_loss688, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9146_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9146_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8600_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_9146_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 0, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 3, _sr_return_amt680);
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 4, _sr_net_loss688);
                tbl_JOIN_INNER_TD_8600_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8600_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8600_key_rightMajor, SW_JOIN_INNER_TD_8600_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9146_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9146_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8600_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_9146_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8600_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9288_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8600_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 0);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 2);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 3);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 4);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_9288_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_9288_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 0, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 3, _sr_return_amt680);
                tbl_JOIN_INNER_TD_8600_output.setInt32(r, 4, _sr_net_loss688);
                tbl_JOIN_INNER_TD_8600_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8600_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8600_output #Row: " << tbl_JOIN_INNER_TD_8600_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7808_key_leftMajor {
    int32_t _ws_promo_sk745;
    bool operator==(const SW_JOIN_INNER_TD_7808_key_leftMajor& other) const {
        return ((_ws_promo_sk745 == other._ws_promo_sk745));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7808_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7808_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_promo_sk745));
    }
};
}
struct SW_JOIN_INNER_TD_7808_payload_leftMajor {
    int32_t _ws_promo_sk745;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
    std::string _web_site_id538;
};
struct SW_JOIN_INNER_TD_7808_key_rightMajor {
    int32_t _p_promo_sk8133;
    bool operator==(const SW_JOIN_INNER_TD_7808_key_rightMajor& other) const {
        return ((_p_promo_sk8133 == other._p_promo_sk8133));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7808_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7808_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk8133));
    }
};
}
struct SW_JOIN_INNER_TD_7808_payload_rightMajor {
    int32_t _p_promo_sk8133;
};
void SW_JOIN_INNER_TD_7808(Table &tbl_JOIN_INNER_TD_8156_output, Table &tbl_Filter_TD_8383_output, Table &tbl_JOIN_INNER_TD_7808_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_promo_sk#745 = p_promo_sk#8133))
    // Left Table: ListBuffer(ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    // Right Table: ListBuffer(p_promo_sk#8133)
    // Output Table: ListBuffer(ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    int left_nrow = tbl_JOIN_INNER_TD_8156_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8383_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7808_key_leftMajor, SW_JOIN_INNER_TD_7808_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8156_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_promo_sk745_k = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7808_key_leftMajor keyA{_ws_promo_sk745_k};
            int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 1);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 2);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 3);
            int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_JOIN_INNER_TD_8156_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _web_site_id538 = std::string(_web_site_id538_n.data());
            SW_JOIN_INNER_TD_7808_payload_leftMajor payloadA{_ws_promo_sk745, _ws_ext_sales_price752, _ws_net_profit762, _wr_return_amt846, _wr_net_loss854, _web_site_id538};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8383_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk8133_k = tbl_Filter_TD_8383_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7808_key_leftMajor{_p_promo_sk8133_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_promo_sk745 = (it->second)._ws_promo_sk745;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                std::string _web_site_id538 = (it->second)._web_site_id538;
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n{};
                memcpy(_web_site_id538_n.data(), (_web_site_id538).data(), (_web_site_id538).length());
                int32_t _p_promo_sk8133 = tbl_Filter_TD_8383_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7808_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7808_output.setInt32(r, 1, _ws_net_profit762);
                tbl_JOIN_INNER_TD_7808_output.setInt32(r, 2, _wr_return_amt846);
                tbl_JOIN_INNER_TD_7808_output.setInt32(r, 3, _wr_net_loss854);
                tbl_JOIN_INNER_TD_7808_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7808_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7808_key_rightMajor, SW_JOIN_INNER_TD_7808_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8383_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk8133_k = tbl_Filter_TD_8383_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7808_key_rightMajor keyA{_p_promo_sk8133_k};
            int32_t _p_promo_sk8133 = tbl_Filter_TD_8383_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7808_payload_rightMajor payloadA{_p_promo_sk8133};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8156_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_promo_sk745_k = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7808_key_rightMajor{_ws_promo_sk745_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk8133 = (it->second)._p_promo_sk8133;
                int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 1);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 2);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 3);
                int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_8156_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_JOIN_INNER_TD_8156_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _web_site_id538 = std::string(_web_site_id538_n.data());
                tbl_JOIN_INNER_TD_7808_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7808_output.setInt32(r, 1, _ws_net_profit762);
                tbl_JOIN_INNER_TD_7808_output.setInt32(r, 2, _wr_return_amt846);
                tbl_JOIN_INNER_TD_7808_output.setInt32(r, 3, _wr_net_loss854);
                tbl_JOIN_INNER_TD_7808_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7808_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7808_output #Row: " << tbl_JOIN_INNER_TD_7808_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7595_key_leftMajor {
    int32_t _cs_promo_sk1120;
    bool operator==(const SW_JOIN_INNER_TD_7595_key_leftMajor& other) const {
        return ((_cs_promo_sk1120 == other._cs_promo_sk1120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7595_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7595_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_promo_sk1120));
    }
};
}
struct SW_JOIN_INNER_TD_7595_payload_leftMajor {
    int32_t _cs_promo_sk1120;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
    std::string _cp_catalog_page_id997;
};
struct SW_JOIN_INNER_TD_7595_key_rightMajor {
    int32_t _p_promo_sk8064;
    bool operator==(const SW_JOIN_INNER_TD_7595_key_rightMajor& other) const {
        return ((_p_promo_sk8064 == other._p_promo_sk8064));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7595_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7595_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk8064));
    }
};
}
struct SW_JOIN_INNER_TD_7595_payload_rightMajor {
    int32_t _p_promo_sk8064;
};
void SW_JOIN_INNER_TD_7595(Table &tbl_JOIN_INNER_TD_8749_output, Table &tbl_Filter_TD_8916_output, Table &tbl_JOIN_INNER_TD_7595_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_promo_sk#1120 = p_promo_sk#8064))
    // Left Table: ListBuffer(cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    // Right Table: ListBuffer(p_promo_sk#8064)
    // Output Table: ListBuffer(cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    int left_nrow = tbl_JOIN_INNER_TD_8749_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8916_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7595_key_leftMajor, SW_JOIN_INNER_TD_7595_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8749_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7595_key_leftMajor keyA{_cs_promo_sk1120_k};
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 0);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 1);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 2);
            int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 3);
            int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_JOIN_INNER_TD_8749_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
            SW_JOIN_INNER_TD_7595_payload_leftMajor payloadA{_cs_promo_sk1120, _cs_ext_sales_price1127, _cs_net_profit1137, _cr_return_amount1041, _cr_net_loss1049, _cp_catalog_page_id997};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8916_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk8064_k = tbl_Filter_TD_8916_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7595_key_leftMajor{_p_promo_sk8064_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _cr_net_loss1049 = (it->second)._cr_net_loss1049;
                std::string _cp_catalog_page_id997 = (it->second)._cp_catalog_page_id997;
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n{};
                memcpy(_cp_catalog_page_id997_n.data(), (_cp_catalog_page_id997).data(), (_cp_catalog_page_id997).length());
                int32_t _p_promo_sk8064 = tbl_Filter_TD_8916_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7595_output.setInt32(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_7595_output.setInt32(r, 1, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_7595_output.setInt32(r, 2, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_7595_output.setInt32(r, 3, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_7595_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7595_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7595_key_rightMajor, SW_JOIN_INNER_TD_7595_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8916_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk8064_k = tbl_Filter_TD_8916_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7595_key_rightMajor keyA{_p_promo_sk8064_k};
            int32_t _p_promo_sk8064 = tbl_Filter_TD_8916_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7595_payload_rightMajor payloadA{_p_promo_sk8064};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8749_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7595_key_rightMajor{_cs_promo_sk1120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk8064 = (it->second)._p_promo_sk8064;
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 0);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 1);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 2);
                int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 3);
                int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_8749_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_JOIN_INNER_TD_8749_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
                tbl_JOIN_INNER_TD_7595_output.setInt32(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_7595_output.setInt32(r, 1, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_7595_output.setInt32(r, 2, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_7595_output.setInt32(r, 3, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_7595_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7595_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7595_output #Row: " << tbl_JOIN_INNER_TD_7595_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_789_key_leftMajor {
    int32_t _ss_promo_sk1214;
    bool operator==(const SW_JOIN_INNER_TD_789_key_leftMajor& other) const {
        return ((_ss_promo_sk1214 == other._ss_promo_sk1214));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_789_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_789_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_promo_sk1214));
    }
};
}
struct SW_JOIN_INNER_TD_789_payload_leftMajor {
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
    std::string _s_store_id379;
};
struct SW_JOIN_INNER_TD_789_key_rightMajor {
    int32_t _p_promo_sk294;
    bool operator==(const SW_JOIN_INNER_TD_789_key_rightMajor& other) const {
        return ((_p_promo_sk294 == other._p_promo_sk294));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_789_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_789_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk294));
    }
};
}
struct SW_JOIN_INNER_TD_789_payload_rightMajor {
    int32_t _p_promo_sk294;
};
void SW_JOIN_INNER_TD_789(Table &tbl_JOIN_INNER_TD_8600_output, Table &tbl_Filter_TD_83_output, Table &tbl_JOIN_INNER_TD_789_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_promo_sk#1214 = p_promo_sk#294))
    // Left Table: ListBuffer(ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    // Right Table: ListBuffer(p_promo_sk#294)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_8600_output.getNumRow();
    int right_nrow = tbl_Filter_TD_83_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_789_key_leftMajor, SW_JOIN_INNER_TD_789_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8600_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_789_key_leftMajor keyA{_ss_promo_sk1214_k};
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 1);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 2);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 3);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_8600_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_789_payload_leftMajor payloadA{_ss_promo_sk1214, _ss_ext_sales_price1221, _ss_net_profit1228, _sr_return_amt680, _sr_net_loss688, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_83_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_83_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_789_key_leftMajor{_p_promo_sk294_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                int32_t _p_promo_sk294 = tbl_Filter_TD_83_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_789_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_789_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_789_output.setInt32(r, 2, _sr_return_amt680);
                tbl_JOIN_INNER_TD_789_output.setInt32(r, 3, _sr_net_loss688);
                tbl_JOIN_INNER_TD_789_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_789_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_789_key_rightMajor, SW_JOIN_INNER_TD_789_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_83_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_83_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_789_key_rightMajor keyA{_p_promo_sk294_k};
            int32_t _p_promo_sk294 = tbl_Filter_TD_83_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_789_payload_rightMajor payloadA{_p_promo_sk294};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8600_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_789_key_rightMajor{_ss_promo_sk1214_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk294 = (it->second)._p_promo_sk294;
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 1);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 2);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 3);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_8600_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_8600_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_789_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_789_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_789_output.setInt32(r, 2, _sr_return_amt680);
                tbl_JOIN_INNER_TD_789_output.setInt32(r, 3, _sr_net_loss688);
                tbl_JOIN_INNER_TD_789_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_789_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_789_output #Row: " << tbl_JOIN_INNER_TD_789_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6804_key;
struct SW_Aggregate_TD_6804_payload {
    int32_t _sales8011_sum_0;
    int32_t _returns8012_sum_1;
    int32_t _profit8013_sum_2;
    std::string _channel8498;
    std::string _id8499;
};
void SW_Aggregate_TD_6804(Table &tbl_JOIN_INNER_TD_7808_output, Table &tbl_Aggregate_TD_6804_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(web_site_id#538, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS sales#8011, sum(coalesce(cast(wr_return_amt#846 as decimal(12,2)), 0.00)) AS returns#8012, sum(CheckOverflow((promote_precision(cast(ws_net_profit#762 as decimal(13,2))) - promote_precision(cast(coalesce(cast(wr_net_loss#854 as decimal(12,2)), 0.00) as decimal(13,2)))), DecimalType(13,2), true)) AS profit#8013, web channel AS channel#8498, concat(web_site, web_site_id#538) AS id#8499)
    // Input: ListBuffer(ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    // Output: ListBuffer(sales#8011, returns#8012, profit#8013, channel#8498, id#8499)
    std::unordered_map<SW_Aggregate_TD_6804_key, SW_Aggregate_TD_6804_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7808_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7808_output.getInt32(i, 0);
        int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_7808_output.getInt32(i, 1);
        int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_7808_output.getInt32(i, 2);
        int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_7808_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _web_site_id538 = tbl_JOIN_INNER_TD_7808_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6804_key k = std::string(_web_site_id538.data());
        int64_t _sales8011_sum_0 = _ws_ext_sales_price752;
        int64_t _returns8012_sum_1 = _wr_return_amt846;
        int64_t _profit8013_sum_2 = (_ws_net_profit762 - _wr_net_loss854);
        std::string _channel8498 = "web channel";
        std::string _id8499 = std::string("web_site").append(std::string(_web_site_id538.data()));
        SW_Aggregate_TD_6804_payload p{_sales8011_sum_0, _returns8012_sum_1, _profit8013_sum_2, std::string(_channel8498.data()), std::string(_id8499.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales8011_sum_0 + _sales8011_sum_0;
            p._sales8011_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._returns8012_sum_1 + _returns8012_sum_1;
            p._returns8012_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._profit8013_sum_2 + _profit8013_sum_2;
            p._profit8013_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _web_site_id538 not required in the output table
        int32_t _sales8011 = (it.second)._sales8011_sum_0;
        tbl_Aggregate_TD_6804_output.setInt32(r, 0, _sales8011);
        int32_t _returns8012 = (it.second)._returns8012_sum_1;
        tbl_Aggregate_TD_6804_output.setInt32(r, 1, _returns8012);
        int32_t _profit8013 = (it.second)._profit8013_sum_2;
        tbl_Aggregate_TD_6804_output.setInt32(r, 2, _profit8013);
        std::array<char, TPCDS_READ_MAX + 1> _channel8498_n{};
        memcpy(_channel8498_n.data(), (it.second)._channel8498.data(), (it.second)._channel8498.length());
        tbl_Aggregate_TD_6804_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8498_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8499_n{};
        memcpy(_id8499_n.data(), (it.second)._id8499.data(), (it.second)._id8499.length());
        tbl_Aggregate_TD_6804_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8499_n);
        ++r;
    }
    tbl_Aggregate_TD_6804_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6804_output #Row: " << tbl_Aggregate_TD_6804_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6839_key;
struct SW_Aggregate_TD_6839_payload {
    int32_t _sales8008_sum_0;
    int32_t _returns8009_sum_1;
    int32_t _profit8010_sum_2;
    std::string _channel8496;
    std::string _id8497;
};
void SW_Aggregate_TD_6839(Table &tbl_JOIN_INNER_TD_7595_output, Table &tbl_Aggregate_TD_6839_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cp_catalog_page_id#997, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS sales#8008, sum(coalesce(cast(cr_return_amount#1041 as decimal(12,2)), 0.00)) AS returns#8009, sum(CheckOverflow((promote_precision(cast(cs_net_profit#1137 as decimal(13,2))) - promote_precision(cast(coalesce(cast(cr_net_loss#1049 as decimal(12,2)), 0.00) as decimal(13,2)))), DecimalType(13,2), true)) AS profit#8010, catalog channel AS channel#8496, concat(catalog_page, cp_catalog_page_id#997) AS id#8497)
    // Input: ListBuffer(cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    // Output: ListBuffer(sales#8008, returns#8009, profit#8010, channel#8496, id#8497)
    std::unordered_map<SW_Aggregate_TD_6839_key, SW_Aggregate_TD_6839_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7595_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7595_output.getInt32(i, 0);
        int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_7595_output.getInt32(i, 1);
        int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_7595_output.getInt32(i, 2);
        int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_7595_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997 = tbl_JOIN_INNER_TD_7595_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6839_key k = std::string(_cp_catalog_page_id997.data());
        int64_t _sales8008_sum_0 = _cs_ext_sales_price1127;
        int64_t _returns8009_sum_1 = _cr_return_amount1041;
        int64_t _profit8010_sum_2 = (_cs_net_profit1137 - _cr_net_loss1049);
        std::string _channel8496 = "catalog channel";
        std::string _id8497 = std::string("catalog_page").append(std::string(_cp_catalog_page_id997.data()));
        SW_Aggregate_TD_6839_payload p{_sales8008_sum_0, _returns8009_sum_1, _profit8010_sum_2, std::string(_channel8496.data()), std::string(_id8497.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales8008_sum_0 + _sales8008_sum_0;
            p._sales8008_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._returns8009_sum_1 + _returns8009_sum_1;
            p._returns8009_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._profit8010_sum_2 + _profit8010_sum_2;
            p._profit8010_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cp_catalog_page_id997 not required in the output table
        int32_t _sales8008 = (it.second)._sales8008_sum_0;
        tbl_Aggregate_TD_6839_output.setInt32(r, 0, _sales8008);
        int32_t _returns8009 = (it.second)._returns8009_sum_1;
        tbl_Aggregate_TD_6839_output.setInt32(r, 1, _returns8009);
        int32_t _profit8010 = (it.second)._profit8010_sum_2;
        tbl_Aggregate_TD_6839_output.setInt32(r, 2, _profit8010);
        std::array<char, TPCDS_READ_MAX + 1> _channel8496_n{};
        memcpy(_channel8496_n.data(), (it.second)._channel8496.data(), (it.second)._channel8496.length());
        tbl_Aggregate_TD_6839_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8496_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8497_n{};
        memcpy(_id8497_n.data(), (it.second)._id8497.data(), (it.second)._id8497.length());
        tbl_Aggregate_TD_6839_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8497_n);
        ++r;
    }
    tbl_Aggregate_TD_6839_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6839_output #Row: " << tbl_Aggregate_TD_6839_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6976_key;
struct SW_Aggregate_TD_6976_payload {
    int32_t _sales8004_sum_0;
    int32_t _returns8005_sum_1;
    int32_t _profit8006_sum_2;
    std::string _channel8164;
    std::string _id8165;
};
void SW_Aggregate_TD_6976(Table &tbl_JOIN_INNER_TD_789_output, Table &tbl_Aggregate_TD_6976_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_store_id#379, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS sales#8004, sum(coalesce(cast(sr_return_amt#680 as decimal(12,2)), 0.00)) AS returns#8005, sum(CheckOverflow((promote_precision(cast(ss_net_profit#1228 as decimal(13,2))) - promote_precision(cast(coalesce(cast(sr_net_loss#688 as decimal(12,2)), 0.00) as decimal(13,2)))), DecimalType(13,2), true)) AS profit#8006, store channel AS channel#8164, concat(store, s_store_id#379) AS id#8165)
    // Input: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    // Output: ListBuffer(sales#8004, returns#8005, profit#8006, channel#8164, id#8165)
    std::unordered_map<SW_Aggregate_TD_6976_key, SW_Aggregate_TD_6976_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_789_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_789_output.getInt32(i, 0);
        int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_789_output.getInt32(i, 1);
        int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_789_output.getInt32(i, 2);
        int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_789_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379 = tbl_JOIN_INNER_TD_789_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6976_key k = std::string(_s_store_id379.data());
        int64_t _sales8004_sum_0 = _ss_ext_sales_price1221;
        int64_t _returns8005_sum_1 = _sr_return_amt680;
        int64_t _profit8006_sum_2 = (_ss_net_profit1228 - _sr_net_loss688);
        std::string _channel8164 = "store channel";
        std::string _id8165 = std::string("store").append(std::string(_s_store_id379.data()));
        SW_Aggregate_TD_6976_payload p{_sales8004_sum_0, _returns8005_sum_1, _profit8006_sum_2, std::string(_channel8164.data()), std::string(_id8165.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales8004_sum_0 + _sales8004_sum_0;
            p._sales8004_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._returns8005_sum_1 + _returns8005_sum_1;
            p._returns8005_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._profit8006_sum_2 + _profit8006_sum_2;
            p._profit8006_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _s_store_id379 not required in the output table
        int32_t _sales8004 = (it.second)._sales8004_sum_0;
        tbl_Aggregate_TD_6976_output.setInt32(r, 0, _sales8004);
        int32_t _returns8005 = (it.second)._returns8005_sum_1;
        tbl_Aggregate_TD_6976_output.setInt32(r, 1, _returns8005);
        int32_t _profit8006 = (it.second)._profit8006_sum_2;
        tbl_Aggregate_TD_6976_output.setInt32(r, 2, _profit8006);
        std::array<char, TPCDS_READ_MAX + 1> _channel8164_n{};
        memcpy(_channel8164_n.data(), (it.second)._channel8164.data(), (it.second)._channel8164.length());
        tbl_Aggregate_TD_6976_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8164_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8165_n{};
        memcpy(_id8165_n.data(), (it.second)._id8165.data(), (it.second)._id8165.length());
        tbl_Aggregate_TD_6976_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8165_n);
        ++r;
    }
    tbl_Aggregate_TD_6976_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6976_output #Row: " << tbl_Aggregate_TD_6976_output.getNumRow() << std::endl;
}

void SW_Union_TD_518(Table &tbl_Aggregate_TD_6976_output, Table &tbl_Aggregate_TD_6839_output, Table &tbl_Aggregate_TD_6804_output, Table &tbl_Union_TD_518_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sales#8004, returns#8005, profit#8006, channel#8164, id#8165)
    int r = 0;
    int row0 = tbl_Aggregate_TD_6976_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_518_output.setInt32(r, 0, tbl_Aggregate_TD_6976_output.getInt32(i, 0));
        tbl_Union_TD_518_output.setInt32(r, 1, tbl_Aggregate_TD_6976_output.getInt32(i, 1));
        tbl_Union_TD_518_output.setInt32(r, 2, tbl_Aggregate_TD_6976_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel8164_n = tbl_Union_TD_518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8164_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8165_n = tbl_Union_TD_518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8165_n);
        ++r;
    }
    int row1 = tbl_Aggregate_TD_6839_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_518_output.setInt32(r, 0, tbl_Aggregate_TD_6839_output.getInt32(i, 0));
        tbl_Union_TD_518_output.setInt32(r, 1, tbl_Aggregate_TD_6839_output.getInt32(i, 1));
        tbl_Union_TD_518_output.setInt32(r, 2, tbl_Aggregate_TD_6839_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel8496_n = tbl_Union_TD_518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8496_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8497_n = tbl_Union_TD_518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8497_n);
        ++r;
    }
    int row2 = tbl_Aggregate_TD_6804_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_518_output.setInt32(r, 0, tbl_Aggregate_TD_6804_output.getInt32(i, 0));
        tbl_Union_TD_518_output.setInt32(r, 1, tbl_Aggregate_TD_6804_output.getInt32(i, 1));
        tbl_Union_TD_518_output.setInt32(r, 2, tbl_Aggregate_TD_6804_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel8498_n = tbl_Union_TD_518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8498_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8499_n = tbl_Union_TD_518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8499_n);
        ++r;
    }
    tbl_Union_TD_518_output.setNumRow(r);
    std::cout << "tbl_Union_TD_518_output #Row: " << tbl_Union_TD_518_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4280(Table &tbl_Union_TD_518_output, Table &tbl_Expand_TD_4280_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(sales#8004, returns#8005, profit#8006, channel#8164, id#8165)
    // Output: ListBuffer(sales#8004, returns#8005, profit#8006, channel#8167, id#8168, spark_grouping_id#8166L)
    std::cout << "tbl_Expand_TD_4280_output #Row: " << tbl_Expand_TD_4280_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3337_key {
    std::string _channel8167;
    std::string _id8168;
    int64_t _spark_grouping_id8166L;
    bool operator==(const SW_Aggregate_TD_3337_key& other) const { return (_channel8167 == other._channel8167) && (_id8168 == other._id8168) && (_spark_grouping_id8166L == other._spark_grouping_id8166L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3337_key> {
    std::size_t operator() (const SW_Aggregate_TD_3337_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel8167)) + (hash<string>()(k._id8168)) + (hash<int64_t>()(k._spark_grouping_id8166L));
    }
};
}
struct SW_Aggregate_TD_3337_payload {
    int32_t _sales8000_sum_0;
    int32_t _returns8001_sum_1;
    int32_t _profit8002_sum_2;
};
void SW_Aggregate_TD_3337(Table &tbl_Expand_TD_4280_output, Table &tbl_Aggregate_TD_3337_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#8167, id#8168, spark_grouping_id#8166L, sum(sales#8004) AS sales#8000, sum(returns#8005) AS returns#8001, sum(profit#8006) AS profit#8002)
    // Input: ListBuffer(sales#8004, returns#8005, profit#8006, channel#8167, id#8168, spark_grouping_id#8166L)
    // Output: ListBuffer(channel#8167, id#8168, sales#8000, returns#8001, profit#8002)
    std::unordered_map<SW_Aggregate_TD_3337_key, SW_Aggregate_TD_3337_payload> ht1;
    int nrow1 = tbl_Expand_TD_4280_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales8004 = tbl_Expand_TD_4280_output.getInt32(i, 0);
        int32_t _returns8005 = tbl_Expand_TD_4280_output.getInt32(i, 1);
        int32_t _profit8006 = tbl_Expand_TD_4280_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _channel8167 = tbl_Expand_TD_4280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _id8168 = tbl_Expand_TD_4280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int64_t _spark_grouping_id8166L = tbl_Expand_TD_4280_output.getInt64(i, 5);
        SW_Aggregate_TD_3337_key k{std::string(_channel8167.data()), std::string(_id8168.data()), _spark_grouping_id8166L};
        int64_t _sales8000_sum_0 = _sales8004;
        int64_t _returns8001_sum_1 = _returns8005;
        int64_t _profit8002_sum_2 = _profit8006;
        SW_Aggregate_TD_3337_payload p{_sales8000_sum_0, _returns8001_sum_1, _profit8002_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales8000_sum_0 + _sales8000_sum_0;
            p._sales8000_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._returns8001_sum_1 + _returns8001_sum_1;
            p._returns8001_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._profit8002_sum_2 + _profit8002_sum_2;
            p._profit8002_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8167{};
        memcpy(_channel8167.data(), ((it.first)._channel8167).data(), ((it.first)._channel8167).length());
        tbl_Aggregate_TD_3337_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel8167);
        std::array<char, TPCDS_READ_MAX + 1> _id8168{};
        memcpy(_id8168.data(), ((it.first)._id8168).data(), ((it.first)._id8168).length());
        tbl_Aggregate_TD_3337_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id8168);
        // _spark_grouping_id8166L not required in the output table
        int32_t _sales8000 = (it.second)._sales8000_sum_0;
        tbl_Aggregate_TD_3337_output.setInt32(r, 2, _sales8000);
        int32_t _returns8001 = (it.second)._returns8001_sum_1;
        tbl_Aggregate_TD_3337_output.setInt32(r, 3, _returns8001);
        int32_t _profit8002 = (it.second)._profit8002_sum_2;
        tbl_Aggregate_TD_3337_output.setInt32(r, 4, _profit8002);
        ++r;
    }
    tbl_Aggregate_TD_3337_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3337_output #Row: " << tbl_Aggregate_TD_3337_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2696(Table &tbl_Aggregate_TD_3337_output, Table &tbl_Sort_TD_2696_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#8167 ASC NULLS FIRST, id#8168 ASC NULLS FIRST)
    // Input: ListBuffer(channel#8167, id#8168, sales#8000, returns#8001, profit#8002)
    // Output: ListBuffer(channel#8167, id#8168, sales#8000, returns#8001, profit#8002)
    struct SW_Sort_TD_2696Row {
        std::string _channel8167;
        std::string _id8168;
        int32_t _sales8000;
        int32_t _returns8001;
        int32_t _profit8002;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2696Row& a, const SW_Sort_TD_2696Row& b) const { return 
 (a._channel8167 < b._channel8167) || 
 ((a._channel8167 == b._channel8167) && (a._id8168 < b._id8168)); 
}
    }SW_Sort_TD_2696_order; 

    int nrow1 = tbl_Aggregate_TD_3337_output.getNumRow();
    std::vector<SW_Sort_TD_2696Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8167 = tbl_Aggregate_TD_3337_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _id8168 = tbl_Aggregate_TD_3337_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _sales8000 = tbl_Aggregate_TD_3337_output.getInt32(i, 2);
        int32_t _returns8001 = tbl_Aggregate_TD_3337_output.getInt32(i, 3);
        int32_t _profit8002 = tbl_Aggregate_TD_3337_output.getInt32(i, 4);
        SW_Sort_TD_2696Row t = {std::string(_channel8167.data()),std::string(_id8168.data()),_sales8000,_returns8001,_profit8002};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2696_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8167{};
        memcpy(_channel8167.data(), (it._channel8167).data(), (it._channel8167).length());
        tbl_Sort_TD_2696_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel8167);
        std::array<char, TPCDS_READ_MAX + 1> _id8168{};
        memcpy(_id8168.data(), (it._id8168).data(), (it._id8168).length());
        tbl_Sort_TD_2696_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _id8168);
        tbl_Sort_TD_2696_output.setInt32(r, 2, it._sales8000);
        tbl_Sort_TD_2696_output.setInt32(r, 3, it._returns8001);
        tbl_Sort_TD_2696_output.setInt32(r, 4, it._profit8002);
        ++r;
    }
    tbl_Sort_TD_2696_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2696_output #Row: " << tbl_Sort_TD_2696_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1441(Table &tbl_Sort_TD_2696_output, Table &tbl_LocalLimit_TD_1441_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#8167, id#8168, sales#8000, returns#8001, profit#8002)
    // Output: ListBuffer(channel#8167, id#8168, sales#8000, returns#8001, profit#8002)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8167_n = tbl_Sort_TD_2696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1441_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel8167_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8168_n = tbl_Sort_TD_2696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1441_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id8168_n);
        tbl_LocalLimit_TD_1441_output.setInt32(r, 2, tbl_Sort_TD_2696_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1441_output.setInt32(r, 3, tbl_Sort_TD_2696_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1441_output.setInt32(r, 4, tbl_Sort_TD_2696_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1441_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1441_output #Row: " << tbl_LocalLimit_TD_1441_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0915(Table &tbl_LocalLimit_TD_1441_output, Table &tbl_GlobalLimit_TD_0915_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#8167, id#8168, sales#8000, returns#8001, profit#8002)
    // Output: ListBuffer(channel#8167, id#8168, sales#8000, returns#8001, profit#8002)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8167_n = tbl_LocalLimit_TD_1441_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel8167_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8168_n = tbl_LocalLimit_TD_1441_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id8168_n);
        tbl_GlobalLimit_TD_0915_output.setInt32(r, 2, tbl_LocalLimit_TD_1441_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0915_output.setInt32(r, 3, tbl_LocalLimit_TD_1441_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0915_output.setInt32(r, 4, tbl_LocalLimit_TD_1441_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0915_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0915_output #Row: " << tbl_GlobalLimit_TD_0915_output.getNumRow() << std::endl;
}

