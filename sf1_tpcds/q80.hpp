#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_12441259(Table &tbl_SerializeFromObject_TD_13183340_input, Table &tbl_Filter_TD_12441259_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_item_sk#833) AND isnotnull(wr_order_number#844L)))
    // Input: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    // Output: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13183340_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_13183340_input.getInt32(i, 0);
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_13183340_input.getInt64(i, 1);
        if ((_wr_item_sk833!= 0) && (_wr_order_number844L!= 0)) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_13183340_input.getInt32(i, 0);
            tbl_Filter_TD_12441259_output.setInt32(r, 0, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_13183340_input.getInt64(i, 1);
            tbl_Filter_TD_12441259_output.setInt64(r, 1, _wr_order_number844L_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_13183340_input.getInt32(i, 2);
            tbl_Filter_TD_12441259_output.setInt32(r, 2, _wr_return_amt846_t);
            int32_t _wr_net_loss854_t = tbl_SerializeFromObject_TD_13183340_input.getInt32(i, 3);
            tbl_Filter_TD_12441259_output.setInt32(r, 3, _wr_net_loss854_t);
            r++;
        }
    }
    tbl_Filter_TD_12441259_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12441259_output #Row: " << tbl_Filter_TD_12441259_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12819540(Table &tbl_SerializeFromObject_TD_13364057_input, Table &tbl_Filter_TD_12819540_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_web_site_sk#742)) AND isnotnull(ws_item_sk#732)) AND isnotnull(ws_promo_sk#745)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_order_number#746L, ws_ext_sales_price#752, ws_net_profit#762)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_order_number#746L, ws_ext_sales_price#752, ws_net_profit#762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13364057_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 0);
        int32_t _ws_web_site_sk742 = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 1);
        int32_t _ws_promo_sk745 = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 3);
        if ((((_ws_sold_date_sk729!= 0) && (_ws_web_site_sk742!= 0)) && (_ws_item_sk732!= 0)) && (_ws_promo_sk745!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 0);
            tbl_Filter_TD_12819540_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 1);
            tbl_Filter_TD_12819540_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_web_site_sk742_t = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 2);
            tbl_Filter_TD_12819540_output.setInt32(r, 2, _ws_web_site_sk742_t);
            int32_t _ws_promo_sk745_t = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 3);
            tbl_Filter_TD_12819540_output.setInt32(r, 3, _ws_promo_sk745_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_13364057_input.getInt64(i, 4);
            tbl_Filter_TD_12819540_output.setInt64(r, 4, _ws_order_number746L_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 5);
            tbl_Filter_TD_12819540_output.setInt32(r, 5, _ws_ext_sales_price752_t);
            int32_t _ws_net_profit762_t = tbl_SerializeFromObject_TD_13364057_input.getInt32(i, 6);
            tbl_Filter_TD_12819540_output.setInt32(r, 6, _ws_net_profit762_t);
            r++;
        }
    }
    tbl_Filter_TD_12819540_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12819540_output #Row: " << tbl_Filter_TD_12819540_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12136041(Table &tbl_SerializeFromObject_TD_13197018_input, Table &tbl_Filter_TD_12136041_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_item_sk#1025) AND isnotnull(cr_order_number#1039L)))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_amount#1041, cr_net_loss#1049)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13197018_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_13197018_input.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_13197018_input.getInt64(i, 1);
        if ((_cr_item_sk1025!= 0) && (_cr_order_number1039L!= 0)) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_13197018_input.getInt32(i, 0);
            tbl_Filter_TD_12136041_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_13197018_input.getInt64(i, 1);
            tbl_Filter_TD_12136041_output.setInt64(r, 1, _cr_order_number1039L_t);
            int32_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_13197018_input.getInt32(i, 2);
            tbl_Filter_TD_12136041_output.setInt32(r, 2, _cr_return_amount1041_t);
            int32_t _cr_net_loss1049_t = tbl_SerializeFromObject_TD_13197018_input.getInt32(i, 3);
            tbl_Filter_TD_12136041_output.setInt32(r, 3, _cr_net_loss1049_t);
            r++;
        }
    }
    tbl_Filter_TD_12136041_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12136041_output #Row: " << tbl_Filter_TD_12136041_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12575034(Table &tbl_SerializeFromObject_TD_13973196_input, Table &tbl_Filter_TD_12575034_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_catalog_page_sk#1116)) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_promo_sk#1120)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_ext_sales_price#1127, cs_net_profit#1137)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13973196_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 0);
        int32_t _cs_catalog_page_sk1116 = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 2);
        int32_t _cs_promo_sk1120 = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 3);
        if ((((_cs_sold_date_sk1104!= 0) && (_cs_catalog_page_sk1116!= 0)) && (_cs_item_sk1119!= 0)) && (_cs_promo_sk1120!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 0);
            tbl_Filter_TD_12575034_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_catalog_page_sk1116_t = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 1);
            tbl_Filter_TD_12575034_output.setInt32(r, 1, _cs_catalog_page_sk1116_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 2);
            tbl_Filter_TD_12575034_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_promo_sk1120_t = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 3);
            tbl_Filter_TD_12575034_output.setInt32(r, 3, _cs_promo_sk1120_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_13973196_input.getInt64(i, 4);
            tbl_Filter_TD_12575034_output.setInt64(r, 4, _cs_order_number1121L_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 5);
            tbl_Filter_TD_12575034_output.setInt32(r, 5, _cs_ext_sales_price1127_t);
            int32_t _cs_net_profit1137_t = tbl_SerializeFromObject_TD_13973196_input.getInt32(i, 6);
            tbl_Filter_TD_12575034_output.setInt32(r, 6, _cs_net_profit1137_t);
            r++;
        }
    }
    tbl_Filter_TD_12575034_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12575034_output #Row: " << tbl_Filter_TD_12575034_output.getNumRow() << std::endl;
}

void SW_Filter_TD_124153(Table &tbl_SerializeFromObject_TD_13106804_input, Table &tbl_Filter_TD_124153_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_item_sk#671) AND isnotnull(sr_ticket_number#678L)))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_amt#680, sr_net_loss#688)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_amt#680, sr_net_loss#688)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13106804_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_13106804_input.getInt32(i, 0);
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_13106804_input.getInt64(i, 1);
        if ((_sr_item_sk671!= 0) && (_sr_ticket_number678L!= 0)) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_13106804_input.getInt32(i, 0);
            tbl_Filter_TD_124153_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_13106804_input.getInt64(i, 1);
            tbl_Filter_TD_124153_output.setInt64(r, 1, _sr_ticket_number678L_t);
            int32_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_13106804_input.getInt32(i, 2);
            tbl_Filter_TD_124153_output.setInt32(r, 2, _sr_return_amt680_t);
            int32_t _sr_net_loss688_t = tbl_SerializeFromObject_TD_13106804_input.getInt32(i, 3);
            tbl_Filter_TD_124153_output.setInt32(r, 3, _sr_net_loss688_t);
            r++;
        }
    }
    tbl_Filter_TD_124153_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_124153_output #Row: " << tbl_Filter_TD_124153_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12798864(Table &tbl_SerializeFromObject_TD_13706222_input, Table &tbl_Filter_TD_12798864_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)) AND isnotnull(ss_item_sk#1208)) AND isnotnull(ss_promo_sk#1214)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13706222_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 1);
        int32_t _ss_promo_sk1214 = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 3);
        if ((((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) && (_ss_item_sk1208!= 0)) && (_ss_promo_sk1214!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 0);
            tbl_Filter_TD_12798864_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 1);
            tbl_Filter_TD_12798864_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 2);
            tbl_Filter_TD_12798864_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 3);
            tbl_Filter_TD_12798864_output.setInt32(r, 3, _ss_promo_sk1214_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_13706222_input.getInt64(i, 4);
            tbl_Filter_TD_12798864_output.setInt64(r, 4, _ss_ticket_number1215L_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 5);
            tbl_Filter_TD_12798864_output.setInt32(r, 5, _ss_ext_sales_price1221_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_13706222_input.getInt32(i, 6);
            tbl_Filter_TD_12798864_output.setInt32(r, 6, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_12798864_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12798864_output #Row: " << tbl_Filter_TD_12798864_output.getNumRow() << std::endl;
}

void SW_Filter_TD_118936(Table &tbl_SerializeFromObject_TD_12338795_input, Table &tbl_Filter_TD_118936_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#38057) AND ((d_date#38057 >= 2000-08-23) AND (d_date#38057 <= 2000-09-22))) AND isnotnull(d_date_sk#38055)))
    // Input: ListBuffer(d_date_sk#38055, d_date#38057)
    // Output: ListBuffer(d_date_sk#38055)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12338795_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date38057 = tbl_SerializeFromObject_TD_12338795_input.getInt32(i, 1);
        int32_t _d_date_sk38055 = tbl_SerializeFromObject_TD_12338795_input.getInt32(i, 0);
        if (((_d_date38057!= 0) && ((_d_date38057 >= 20000823) && (_d_date38057 <= 20000922))) && (_d_date_sk38055!= 0)) {
            int32_t _d_date_sk38055_t = tbl_SerializeFromObject_TD_12338795_input.getInt32(i, 0);
            tbl_Filter_TD_118936_output.setInt32(r, 0, _d_date_sk38055_t);
            r++;
        }
    }
    tbl_Filter_TD_118936_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_118936_output #Row: " << tbl_Filter_TD_118936_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_11726272_key {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_11726272_key& other) const {
        return ((_wr_item_sk833 == other._wr_item_sk833) && (_wr_order_number844L == other._wr_order_number844L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_11726272_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_11726272_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_item_sk833)) + (hash<int64_t>()(k._wr_order_number844L));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_11726272_payload {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
void SW_JOIN_LEFTOUTER_TD_11726272(Table &tbl_Filter_TD_12819540_output, Table &tbl_Filter_TD_12441259_output, Table &tbl_JOIN_LEFTOUTER_TD_11726272_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((ws_item_sk#732 = wr_item_sk#833) AND (ws_order_number#746L = wr_order_number#844L)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_order_number#746L, ws_ext_sales_price#752, ws_net_profit#762)
    // Right Table: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_11726272_key, SW_JOIN_LEFTOUTER_TD_11726272_payload> ht1;
    int nrow1 = tbl_Filter_TD_12441259_output.getNumRow();
    int nrow2 = tbl_Filter_TD_12819540_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_item_sk833_k = tbl_Filter_TD_12441259_output.getInt32(i, 0);
        int64_t _wr_order_number844L_k = tbl_Filter_TD_12441259_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_11726272_key keyA{_wr_item_sk833_k, _wr_order_number844L_k};
        int32_t _wr_item_sk833 = tbl_Filter_TD_12441259_output.getInt32(i, 0);
        int64_t _wr_order_number844L = tbl_Filter_TD_12441259_output.getInt64(i, 1);
        int32_t _wr_return_amt846 = tbl_Filter_TD_12441259_output.getInt32(i, 2);
        int32_t _wr_net_loss854 = tbl_Filter_TD_12441259_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_11726272_payload payloadA{_wr_item_sk833, _wr_order_number844L, _wr_return_amt846, _wr_net_loss854};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _ws_item_sk732_k = tbl_Filter_TD_12819540_output.getInt32(i, 1);
        int64_t _ws_order_number746L_k = tbl_Filter_TD_12819540_output.getInt64(i, 4);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_11726272_key{_ws_item_sk732_k, _ws_order_number746L_k});
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_12819540_output.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_Filter_TD_12819540_output.getInt32(i, 1);
        int32_t _ws_web_site_sk742 = tbl_Filter_TD_12819540_output.getInt32(i, 2);
        int32_t _ws_promo_sk745 = tbl_Filter_TD_12819540_output.getInt32(i, 3);
        int64_t _ws_order_number746L = tbl_Filter_TD_12819540_output.getInt64(i, 4);
        int32_t _ws_ext_sales_price752 = tbl_Filter_TD_12819540_output.getInt32(i, 5);
        int32_t _ws_net_profit762 = tbl_Filter_TD_12819540_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_11726272_key{_ws_item_sk732_k, _ws_order_number746L_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _wr_item_sk833 = (it_it->second)._wr_item_sk833;
                int64_t _wr_order_number844L = (it_it->second)._wr_order_number844L;
                int32_t _wr_return_amt846 = (it_it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it_it->second)._wr_net_loss854;
                tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 6, _wr_return_amt846);
                tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 7, _wr_net_loss854);
                tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 2, _ws_web_site_sk742);
                tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 3, _ws_promo_sk745);
                tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 4, _ws_ext_sales_price752);
                tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 5, _ws_net_profit762);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 0, _ws_sold_date_sk729);
            tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 1, _ws_item_sk732);
            tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 2, _ws_web_site_sk742);
            tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 3, _ws_promo_sk745);
            tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 4, _ws_ext_sales_price752);
            tbl_JOIN_LEFTOUTER_TD_11726272_output.setInt32(r, 5, _ws_net_profit762);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_11726272_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_11726272_output #Row: " << tbl_JOIN_LEFTOUTER_TD_11726272_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11455696(Table &tbl_SerializeFromObject_TD_12779287_input, Table &tbl_Filter_TD_11455696_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#37988) AND ((d_date#37988 >= 2000-08-23) AND (d_date#37988 <= 2000-09-22))) AND isnotnull(d_date_sk#37986)))
    // Input: ListBuffer(d_date_sk#37986, d_date#37988)
    // Output: ListBuffer(d_date_sk#37986)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12779287_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date37988 = tbl_SerializeFromObject_TD_12779287_input.getInt32(i, 1);
        int32_t _d_date_sk37986 = tbl_SerializeFromObject_TD_12779287_input.getInt32(i, 0);
        if (((_d_date37988!= 0) && ((_d_date37988 >= 20000823) && (_d_date37988 <= 20000922))) && (_d_date_sk37986!= 0)) {
            int32_t _d_date_sk37986_t = tbl_SerializeFromObject_TD_12779287_input.getInt32(i, 0);
            tbl_Filter_TD_11455696_output.setInt32(r, 0, _d_date_sk37986_t);
            r++;
        }
    }
    tbl_Filter_TD_11455696_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11455696_output #Row: " << tbl_Filter_TD_11455696_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_11178500_key {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_11178500_key& other) const {
        return ((_cr_item_sk1025 == other._cr_item_sk1025) && (_cr_order_number1039L == other._cr_order_number1039L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_11178500_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_11178500_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_item_sk1025)) + (hash<int64_t>()(k._cr_order_number1039L));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_11178500_payload {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
};
void SW_JOIN_LEFTOUTER_TD_11178500(Table &tbl_Filter_TD_12575034_output, Table &tbl_Filter_TD_12136041_output, Table &tbl_JOIN_LEFTOUTER_TD_11178500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((cs_item_sk#1119 = cr_item_sk#1025) AND (cs_order_number#1121L = cr_order_number#1039L)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_amount#1041, cr_net_loss#1049)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_11178500_key, SW_JOIN_LEFTOUTER_TD_11178500_payload> ht1;
    int nrow1 = tbl_Filter_TD_12136041_output.getNumRow();
    int nrow2 = tbl_Filter_TD_12575034_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025_k = tbl_Filter_TD_12136041_output.getInt32(i, 0);
        int64_t _cr_order_number1039L_k = tbl_Filter_TD_12136041_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_11178500_key keyA{_cr_item_sk1025_k, _cr_order_number1039L_k};
        int32_t _cr_item_sk1025 = tbl_Filter_TD_12136041_output.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_Filter_TD_12136041_output.getInt64(i, 1);
        int32_t _cr_return_amount1041 = tbl_Filter_TD_12136041_output.getInt32(i, 2);
        int32_t _cr_net_loss1049 = tbl_Filter_TD_12136041_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_11178500_payload payloadA{_cr_item_sk1025, _cr_order_number1039L, _cr_return_amount1041, _cr_net_loss1049};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _cs_item_sk1119_k = tbl_Filter_TD_12575034_output.getInt32(i, 2);
        int64_t _cs_order_number1121L_k = tbl_Filter_TD_12575034_output.getInt64(i, 4);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_11178500_key{_cs_item_sk1119_k, _cs_order_number1121L_k});
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_12575034_output.getInt32(i, 0);
        int32_t _cs_catalog_page_sk1116 = tbl_Filter_TD_12575034_output.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_Filter_TD_12575034_output.getInt32(i, 2);
        int32_t _cs_promo_sk1120 = tbl_Filter_TD_12575034_output.getInt32(i, 3);
        int64_t _cs_order_number1121L = tbl_Filter_TD_12575034_output.getInt64(i, 4);
        int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_12575034_output.getInt32(i, 5);
        int32_t _cs_net_profit1137 = tbl_Filter_TD_12575034_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_11178500_key{_cs_item_sk1119_k, _cs_order_number1121L_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cr_item_sk1025 = (it_it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it_it->second)._cr_order_number1039L;
                int32_t _cr_return_amount1041 = (it_it->second)._cr_return_amount1041;
                int32_t _cr_net_loss1049 = (it_it->second)._cr_net_loss1049;
                tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 6, _cr_return_amount1041);
                tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 7, _cr_net_loss1049);
                tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 1, _cs_catalog_page_sk1116);
                tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 3, _cs_promo_sk1120);
                tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 4, _cs_ext_sales_price1127);
                tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 5, _cs_net_profit1137);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 0, _cs_sold_date_sk1104);
            tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 1, _cs_catalog_page_sk1116);
            tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 2, _cs_item_sk1119);
            tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 3, _cs_promo_sk1120);
            tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 4, _cs_ext_sales_price1127);
            tbl_JOIN_LEFTOUTER_TD_11178500_output.setInt32(r, 5, _cs_net_profit1137);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_11178500_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_11178500_output #Row: " << tbl_JOIN_LEFTOUTER_TD_11178500_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11219722(Table &tbl_SerializeFromObject_TD_123433_input, Table &tbl_Filter_TD_11219722_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-08-23) AND (d_date#122 <= 2000-09-22))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_123433_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_123433_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_123433_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000823) && (_d_date122 <= 20000922))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_123433_input.getInt32(i, 0);
            tbl_Filter_TD_11219722_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11219722_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11219722_output #Row: " << tbl_Filter_TD_11219722_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_11700228_key {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_11700228_key& other) const {
        return ((_sr_item_sk671 == other._sr_item_sk671) && (_sr_ticket_number678L == other._sr_ticket_number678L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_11700228_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_11700228_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_item_sk671)) + (hash<int64_t>()(k._sr_ticket_number678L));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_11700228_payload {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
void SW_JOIN_LEFTOUTER_TD_11700228(Table &tbl_Filter_TD_12798864_output, Table &tbl_Filter_TD_124153_output, Table &tbl_JOIN_LEFTOUTER_TD_11700228_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((ss_item_sk#1208 = sr_item_sk#671) AND (ss_ticket_number#1215L = sr_ticket_number#678L)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_amt#680, sr_net_loss#688)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_11700228_key, SW_JOIN_LEFTOUTER_TD_11700228_payload> ht1;
    int nrow1 = tbl_Filter_TD_124153_output.getNumRow();
    int nrow2 = tbl_Filter_TD_12798864_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_item_sk671_k = tbl_Filter_TD_124153_output.getInt32(i, 0);
        int64_t _sr_ticket_number678L_k = tbl_Filter_TD_124153_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_11700228_key keyA{_sr_item_sk671_k, _sr_ticket_number678L_k};
        int32_t _sr_item_sk671 = tbl_Filter_TD_124153_output.getInt32(i, 0);
        int64_t _sr_ticket_number678L = tbl_Filter_TD_124153_output.getInt64(i, 1);
        int32_t _sr_return_amt680 = tbl_Filter_TD_124153_output.getInt32(i, 2);
        int32_t _sr_net_loss688 = tbl_Filter_TD_124153_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_11700228_payload payloadA{_sr_item_sk671, _sr_ticket_number678L, _sr_return_amt680, _sr_net_loss688};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _ss_item_sk1208_k = tbl_Filter_TD_12798864_output.getInt32(i, 1);
        int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_12798864_output.getInt64(i, 4);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_11700228_key{_ss_item_sk1208_k, _ss_ticket_number1215L_k});
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12798864_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_12798864_output.getInt32(i, 1);
        int32_t _ss_store_sk1213 = tbl_Filter_TD_12798864_output.getInt32(i, 2);
        int32_t _ss_promo_sk1214 = tbl_Filter_TD_12798864_output.getInt32(i, 3);
        int64_t _ss_ticket_number1215L = tbl_Filter_TD_12798864_output.getInt64(i, 4);
        int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_12798864_output.getInt32(i, 5);
        int32_t _ss_net_profit1228 = tbl_Filter_TD_12798864_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_11700228_key{_ss_item_sk1208_k, _ss_ticket_number1215L_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _sr_item_sk671 = (it_it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it_it->second)._sr_ticket_number678L;
                int32_t _sr_return_amt680 = (it_it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it_it->second)._sr_net_loss688;
                tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 6, _sr_return_amt680);
                tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 7, _sr_net_loss688);
                tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 3, _ss_promo_sk1214);
                tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 4, _ss_ext_sales_price1221);
                tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 5, _ss_net_profit1228);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 0, _ss_sold_date_sk1206);
            tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 1, _ss_item_sk1208);
            tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 2, _ss_store_sk1213);
            tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 3, _ss_promo_sk1214);
            tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 4, _ss_ext_sales_price1221);
            tbl_JOIN_LEFTOUTER_TD_11700228_output.setInt32(r, 5, _ss_net_profit1228);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_11700228_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_11700228_output #Row: " << tbl_JOIN_LEFTOUTER_TD_11700228_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10335634(Table &tbl_SerializeFromObject_TD_1157395_input, Table &tbl_Filter_TD_10335634_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(web_site_sk#537))
    // Input: ListBuffer(web_site_sk#537, web_site_id#538)
    // Output: ListBuffer(web_site_sk#537, web_site_id#538)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1157395_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _web_site_sk537 = tbl_SerializeFromObject_TD_1157395_input.getInt32(i, 0);
        if (_web_site_sk537!= 0) {
            int32_t _web_site_sk537_t = tbl_SerializeFromObject_TD_1157395_input.getInt32(i, 0);
            tbl_Filter_TD_10335634_output.setInt32(r, 0, _web_site_sk537_t);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_t = tbl_SerializeFromObject_TD_1157395_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10335634_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _web_site_id538_t);
            r++;
        }
    }
    tbl_Filter_TD_10335634_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10335634_output #Row: " << tbl_Filter_TD_10335634_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10250051_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_10250051_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10250051_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10250051_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_10250051_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_web_site_sk742;
    int32_t _ws_promo_sk745;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
struct SW_JOIN_INNER_TD_10250051_key_rightMajor {
    int32_t _d_date_sk38055;
    bool operator==(const SW_JOIN_INNER_TD_10250051_key_rightMajor& other) const {
        return ((_d_date_sk38055 == other._d_date_sk38055));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10250051_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10250051_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk38055));
    }
};
}
struct SW_JOIN_INNER_TD_10250051_payload_rightMajor {
    int32_t _d_date_sk38055;
};
void SW_JOIN_INNER_TD_10250051(Table &tbl_JOIN_LEFTOUTER_TD_11726272_output, Table &tbl_Filter_TD_118936_output, Table &tbl_JOIN_INNER_TD_10250051_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#38055))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(d_date_sk#38055)
    // Output Table: ListBuffer(ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854)
    int left_nrow = tbl_JOIN_LEFTOUTER_TD_11726272_output.getNumRow();
    int right_nrow = tbl_Filter_TD_118936_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10250051_key_leftMajor, SW_JOIN_INNER_TD_10250051_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10250051_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 1);
            int32_t _ws_web_site_sk742 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 2);
            int32_t _ws_promo_sk745 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 3);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 4);
            int32_t _ws_net_profit762 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 5);
            int32_t _wr_return_amt846 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 6);
            int32_t _wr_net_loss854 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10250051_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_web_site_sk742, _ws_promo_sk745, _ws_ext_sales_price752, _ws_net_profit762, _wr_return_amt846, _wr_net_loss854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_118936_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk38055_k = tbl_Filter_TD_118936_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10250051_key_leftMajor{_d_date_sk38055_k});
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
                int32_t _d_date_sk38055 = tbl_Filter_TD_118936_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 1, _ws_web_site_sk742);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 2, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 3, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 4, _ws_net_profit762);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 5, _wr_return_amt846);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 6, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10250051_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10250051_key_rightMajor, SW_JOIN_INNER_TD_10250051_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_118936_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk38055_k = tbl_Filter_TD_118936_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10250051_key_rightMajor keyA{_d_date_sk38055_k};
            int32_t _d_date_sk38055 = tbl_Filter_TD_118936_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10250051_payload_rightMajor payloadA{_d_date_sk38055};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10250051_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk38055 = (it->second)._d_date_sk38055;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 1);
                int32_t _ws_web_site_sk742 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 2);
                int32_t _ws_promo_sk745 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 3);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 4);
                int32_t _ws_net_profit762 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 5);
                int32_t _wr_return_amt846 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 6);
                int32_t _wr_net_loss854 = tbl_JOIN_LEFTOUTER_TD_11726272_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 1, _ws_web_site_sk742);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 2, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 3, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 4, _ws_net_profit762);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 5, _wr_return_amt846);
                tbl_JOIN_INNER_TD_10250051_output.setInt32(r, 6, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10250051_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10250051_output #Row: " << tbl_JOIN_INNER_TD_10250051_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10670298(Table &tbl_SerializeFromObject_TD_11865186_input, Table &tbl_Filter_TD_10670298_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cp_catalog_page_sk#996))
    // Input: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    // Output: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11865186_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cp_catalog_page_sk996 = tbl_SerializeFromObject_TD_11865186_input.getInt32(i, 0);
        if (_cp_catalog_page_sk996!= 0) {
            int32_t _cp_catalog_page_sk996_t = tbl_SerializeFromObject_TD_11865186_input.getInt32(i, 0);
            tbl_Filter_TD_10670298_output.setInt32(r, 0, _cp_catalog_page_sk996_t);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_t = tbl_SerializeFromObject_TD_11865186_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10670298_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cp_catalog_page_id997_t);
            r++;
        }
    }
    tbl_Filter_TD_10670298_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10670298_output #Row: " << tbl_Filter_TD_10670298_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10430532_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_10430532_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10430532_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10430532_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_10430532_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_catalog_page_sk1116;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
};
struct SW_JOIN_INNER_TD_10430532_key_rightMajor {
    int32_t _d_date_sk37986;
    bool operator==(const SW_JOIN_INNER_TD_10430532_key_rightMajor& other) const {
        return ((_d_date_sk37986 == other._d_date_sk37986));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10430532_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10430532_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk37986));
    }
};
}
struct SW_JOIN_INNER_TD_10430532_payload_rightMajor {
    int32_t _d_date_sk37986;
};
void SW_JOIN_INNER_TD_10430532(Table &tbl_JOIN_LEFTOUTER_TD_11178500_output, Table &tbl_Filter_TD_11455696_output, Table &tbl_JOIN_INNER_TD_10430532_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#37986))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049)
    // Right Table: ListBuffer(d_date_sk#37986)
    // Output Table: ListBuffer(cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049)
    int left_nrow = tbl_JOIN_LEFTOUTER_TD_11178500_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11455696_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10430532_key_leftMajor, SW_JOIN_INNER_TD_10430532_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10430532_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 0);
            int32_t _cs_catalog_page_sk1116 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 2);
            int32_t _cs_promo_sk1120 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 3);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 4);
            int32_t _cs_net_profit1137 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 5);
            int32_t _cr_return_amount1041 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 6);
            int32_t _cr_net_loss1049 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10430532_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_catalog_page_sk1116, _cs_item_sk1119, _cs_promo_sk1120, _cs_ext_sales_price1127, _cs_net_profit1137, _cr_return_amount1041, _cr_net_loss1049};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11455696_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk37986_k = tbl_Filter_TD_11455696_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10430532_key_leftMajor{_d_date_sk37986_k});
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
                int32_t _d_date_sk37986 = tbl_Filter_TD_11455696_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 0, _cs_catalog_page_sk1116);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 3, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 4, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 5, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 6, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10430532_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10430532_key_rightMajor, SW_JOIN_INNER_TD_10430532_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11455696_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk37986_k = tbl_Filter_TD_11455696_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10430532_key_rightMajor keyA{_d_date_sk37986_k};
            int32_t _d_date_sk37986 = tbl_Filter_TD_11455696_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10430532_payload_rightMajor payloadA{_d_date_sk37986};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10430532_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk37986 = (it->second)._d_date_sk37986;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 0);
                int32_t _cs_catalog_page_sk1116 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 2);
                int32_t _cs_promo_sk1120 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 3);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 4);
                int32_t _cs_net_profit1137 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 5);
                int32_t _cr_return_amount1041 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 6);
                int32_t _cr_net_loss1049 = tbl_JOIN_LEFTOUTER_TD_11178500_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 0, _cs_catalog_page_sk1116);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 3, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 4, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 5, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_10430532_output.setInt32(r, 6, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10430532_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10430532_output #Row: " << tbl_JOIN_INNER_TD_10430532_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10872964(Table &tbl_SerializeFromObject_TD_1148983_input, Table &tbl_Filter_TD_10872964_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output: ListBuffer(s_store_sk#378, s_store_id#379)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1148983_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_1148983_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_1148983_input.getInt32(i, 0);
            tbl_Filter_TD_10872964_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_t = tbl_SerializeFromObject_TD_1148983_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10872964_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id379_t);
            r++;
        }
    }
    tbl_Filter_TD_10872964_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10872964_output #Row: " << tbl_Filter_TD_10872964_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10849160_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10849160_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10849160_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10849160_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10849160_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
struct SW_JOIN_INNER_TD_10849160_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10849160_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10849160_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10849160_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10849160_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10849160(Table &tbl_JOIN_LEFTOUTER_TD_11700228_output, Table &tbl_Filter_TD_11219722_output, Table &tbl_JOIN_INNER_TD_10849160_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688)
    int left_nrow = tbl_JOIN_LEFTOUTER_TD_11700228_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11219722_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10849160_key_leftMajor, SW_JOIN_INNER_TD_10849160_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10849160_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 2);
            int32_t _ss_promo_sk1214 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 3);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 4);
            int32_t _ss_net_profit1228 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 5);
            int32_t _sr_return_amt680 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 6);
            int32_t _sr_net_loss688 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10849160_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_promo_sk1214, _ss_ext_sales_price1221, _ss_net_profit1228, _sr_return_amt680, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11219722_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11219722_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10849160_key_leftMajor{_d_date_sk120_k});
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
                int32_t _d_date_sk120 = tbl_Filter_TD_11219722_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 2, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 4, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 5, _sr_return_amt680);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 6, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10849160_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10849160_key_rightMajor, SW_JOIN_INNER_TD_10849160_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11219722_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11219722_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10849160_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11219722_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10849160_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10849160_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 2);
                int32_t _ss_promo_sk1214 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 3);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 4);
                int32_t _ss_net_profit1228 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 5);
                int32_t _sr_return_amt680 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 6);
                int32_t _sr_net_loss688 = tbl_JOIN_LEFTOUTER_TD_11700228_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 2, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 4, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 5, _sr_return_amt680);
                tbl_JOIN_INNER_TD_10849160_output.setInt32(r, 6, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10849160_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10849160_output #Row: " << tbl_JOIN_INNER_TD_10849160_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9914949(Table &tbl_SerializeFromObject_TD_10347608_input, Table &tbl_Filter_TD_9914949_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#38088) AND (i_current_price#38088 > 50.00)) AND isnotnull(i_item_sk#38083)))
    // Input: ListBuffer(i_item_sk#38083, i_current_price#38088)
    // Output: ListBuffer(i_item_sk#38083)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10347608_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price38088 = tbl_SerializeFromObject_TD_10347608_input.getInt32(i, 1);
        int32_t _i_item_sk38083 = tbl_SerializeFromObject_TD_10347608_input.getInt32(i, 0);
        if (((_i_current_price38088!= 0) && (_i_current_price38088 > 50.00)) && (_i_item_sk38083!= 0)) {
            int32_t _i_item_sk38083_t = tbl_SerializeFromObject_TD_10347608_input.getInt32(i, 0);
            tbl_Filter_TD_9914949_output.setInt32(r, 0, _i_item_sk38083_t);
            r++;
        }
    }
    tbl_Filter_TD_9914949_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9914949_output #Row: " << tbl_Filter_TD_9914949_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9219716_key_leftMajor {
    int32_t _ws_web_site_sk742;
    bool operator==(const SW_JOIN_INNER_TD_9219716_key_leftMajor& other) const {
        return ((_ws_web_site_sk742 == other._ws_web_site_sk742));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9219716_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9219716_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_site_sk742));
    }
};
}
struct SW_JOIN_INNER_TD_9219716_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_web_site_sk742;
    int32_t _ws_promo_sk745;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
struct SW_JOIN_INNER_TD_9219716_key_rightMajor {
    int32_t _web_site_sk537;
    bool operator==(const SW_JOIN_INNER_TD_9219716_key_rightMajor& other) const {
        return ((_web_site_sk537 == other._web_site_sk537));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9219716_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9219716_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._web_site_sk537));
    }
};
}
struct SW_JOIN_INNER_TD_9219716_payload_rightMajor {
    int32_t _web_site_sk537;
    std::string _web_site_id538;
};
void SW_JOIN_INNER_TD_9219716(Table &tbl_JOIN_INNER_TD_10250051_output, Table &tbl_Filter_TD_10335634_output, Table &tbl_JOIN_INNER_TD_9219716_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_site_sk#742 = web_site_sk#537))
    // Left Table: ListBuffer(ws_item_sk#732, ws_web_site_sk#742, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(web_site_sk#537, web_site_id#538)
    // Output Table: ListBuffer(ws_item_sk#732, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    int left_nrow = tbl_JOIN_INNER_TD_10250051_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10335634_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9219716_key_leftMajor, SW_JOIN_INNER_TD_9219716_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10250051_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_site_sk742_k = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9219716_key_leftMajor keyA{_ws_web_site_sk742_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 0);
            int32_t _ws_web_site_sk742 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 1);
            int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 3);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 4);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 5);
            int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_9219716_payload_leftMajor payloadA{_ws_item_sk732, _ws_web_site_sk742, _ws_promo_sk745, _ws_ext_sales_price752, _ws_net_profit762, _wr_return_amt846, _wr_net_loss854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10335634_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_10335634_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9219716_key_leftMajor{_web_site_sk537_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_web_site_sk742 = (it->second)._ws_web_site_sk742;
                int32_t _ws_promo_sk745 = (it->second)._ws_promo_sk745;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                int32_t _web_site_sk537 = tbl_Filter_TD_10335634_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_Filter_TD_10335634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _web_site_id538 = std::string(_web_site_id538_n.data());
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 1, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 2, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 3, _ws_net_profit762);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 4, _wr_return_amt846);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 5, _wr_net_loss854);
                tbl_JOIN_INNER_TD_9219716_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9219716_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9219716_key_rightMajor, SW_JOIN_INNER_TD_9219716_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10335634_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_10335634_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9219716_key_rightMajor keyA{_web_site_sk537_k};
            int32_t _web_site_sk537 = tbl_Filter_TD_10335634_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_Filter_TD_10335634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _web_site_id538 = std::string(_web_site_id538_n.data());
            SW_JOIN_INNER_TD_9219716_payload_rightMajor payloadA{_web_site_sk537, _web_site_id538};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10250051_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_site_sk742_k = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9219716_key_rightMajor{_ws_web_site_sk742_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _web_site_sk537 = (it->second)._web_site_sk537;
                std::string _web_site_id538 = (it->second)._web_site_id538;
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n{};
                memcpy(_web_site_id538_n.data(), (_web_site_id538).data(), (_web_site_id538).length());
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 0);
                int32_t _ws_web_site_sk742 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 1);
                int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 3);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 4);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 5);
                int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_10250051_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_9219716_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _web_site_id538_n);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 1, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 2, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 3, _ws_net_profit762);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 4, _wr_return_amt846);
                tbl_JOIN_INNER_TD_9219716_output.setInt32(r, 5, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9219716_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9219716_output #Row: " << tbl_JOIN_INNER_TD_9219716_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9759510(Table &tbl_SerializeFromObject_TD_10856759_input, Table &tbl_Filter_TD_9759510_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#38019) AND (i_current_price#38019 > 50.00)) AND isnotnull(i_item_sk#38014)))
    // Input: ListBuffer(i_item_sk#38014, i_current_price#38019)
    // Output: ListBuffer(i_item_sk#38014)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10856759_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price38019 = tbl_SerializeFromObject_TD_10856759_input.getInt32(i, 1);
        int32_t _i_item_sk38014 = tbl_SerializeFromObject_TD_10856759_input.getInt32(i, 0);
        if (((_i_current_price38019!= 0) && (_i_current_price38019 > 50.00)) && (_i_item_sk38014!= 0)) {
            int32_t _i_item_sk38014_t = tbl_SerializeFromObject_TD_10856759_input.getInt32(i, 0);
            tbl_Filter_TD_9759510_output.setInt32(r, 0, _i_item_sk38014_t);
            r++;
        }
    }
    tbl_Filter_TD_9759510_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9759510_output #Row: " << tbl_Filter_TD_9759510_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9601901_key_leftMajor {
    int32_t _cs_catalog_page_sk1116;
    bool operator==(const SW_JOIN_INNER_TD_9601901_key_leftMajor& other) const {
        return ((_cs_catalog_page_sk1116 == other._cs_catalog_page_sk1116));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9601901_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9601901_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_catalog_page_sk1116));
    }
};
}
struct SW_JOIN_INNER_TD_9601901_payload_leftMajor {
    int32_t _cs_catalog_page_sk1116;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
};
struct SW_JOIN_INNER_TD_9601901_key_rightMajor {
    int32_t _cp_catalog_page_sk996;
    bool operator==(const SW_JOIN_INNER_TD_9601901_key_rightMajor& other) const {
        return ((_cp_catalog_page_sk996 == other._cp_catalog_page_sk996));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9601901_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9601901_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cp_catalog_page_sk996));
    }
};
}
struct SW_JOIN_INNER_TD_9601901_payload_rightMajor {
    int32_t _cp_catalog_page_sk996;
    std::string _cp_catalog_page_id997;
};
void SW_JOIN_INNER_TD_9601901(Table &tbl_JOIN_INNER_TD_10430532_output, Table &tbl_Filter_TD_10670298_output, Table &tbl_JOIN_INNER_TD_9601901_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_catalog_page_sk#1116 = cp_catalog_page_sk#996))
    // Left Table: ListBuffer(cs_catalog_page_sk#1116, cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049)
    // Right Table: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    int left_nrow = tbl_JOIN_INNER_TD_10430532_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10670298_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9601901_key_leftMajor, SW_JOIN_INNER_TD_9601901_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10430532_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_catalog_page_sk1116_k = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9601901_key_leftMajor keyA{_cs_catalog_page_sk1116_k};
            int32_t _cs_catalog_page_sk1116 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 1);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 3);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 4);
            int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 5);
            int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_9601901_payload_leftMajor payloadA{_cs_catalog_page_sk1116, _cs_item_sk1119, _cs_promo_sk1120, _cs_ext_sales_price1127, _cs_net_profit1137, _cr_return_amount1041, _cr_net_loss1049};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10670298_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cp_catalog_page_sk996_k = tbl_Filter_TD_10670298_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9601901_key_leftMajor{_cp_catalog_page_sk996_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_catalog_page_sk1116 = (it->second)._cs_catalog_page_sk1116;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _cr_net_loss1049 = (it->second)._cr_net_loss1049;
                int32_t _cp_catalog_page_sk996 = tbl_Filter_TD_10670298_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_Filter_TD_10670298_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 2, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 3, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 4, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 5, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_9601901_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9601901_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9601901_key_rightMajor, SW_JOIN_INNER_TD_9601901_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10670298_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cp_catalog_page_sk996_k = tbl_Filter_TD_10670298_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9601901_key_rightMajor keyA{_cp_catalog_page_sk996_k};
            int32_t _cp_catalog_page_sk996 = tbl_Filter_TD_10670298_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_Filter_TD_10670298_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
            SW_JOIN_INNER_TD_9601901_payload_rightMajor payloadA{_cp_catalog_page_sk996, _cp_catalog_page_id997};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10430532_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_catalog_page_sk1116_k = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9601901_key_rightMajor{_cs_catalog_page_sk1116_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cp_catalog_page_sk996 = (it->second)._cp_catalog_page_sk996;
                std::string _cp_catalog_page_id997 = (it->second)._cp_catalog_page_id997;
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n{};
                memcpy(_cp_catalog_page_id997_n.data(), (_cp_catalog_page_id997).data(), (_cp_catalog_page_id997).length());
                int32_t _cs_catalog_page_sk1116 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 1);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 3);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 4);
                int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 5);
                int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_10430532_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_9601901_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cp_catalog_page_id997_n);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 2, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 3, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 4, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_9601901_output.setInt32(r, 5, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9601901_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9601901_output #Row: " << tbl_JOIN_INNER_TD_9601901_output.getNumRow() << std::endl;
}

void SW_Filter_TD_944343(Table &tbl_SerializeFromObject_TD_10541710_input, Table &tbl_Filter_TD_944343_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#233) AND (i_current_price#233 > 50.00)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10541710_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_SerializeFromObject_TD_10541710_input.getInt32(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_10541710_input.getInt32(i, 0);
        if (((_i_current_price233!= 0) && (_i_current_price233 > 50.00)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_10541710_input.getInt32(i, 0);
            tbl_Filter_TD_944343_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_944343_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_944343_output #Row: " << tbl_Filter_TD_944343_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9723850_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_9723850_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9723850_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9723850_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_9723850_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
struct SW_JOIN_INNER_TD_9723850_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_9723850_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9723850_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9723850_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_9723850_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_id379;
};
void SW_JOIN_INNER_TD_9723850(Table &tbl_JOIN_INNER_TD_10849160_output, Table &tbl_Filter_TD_10872964_output, Table &tbl_JOIN_INNER_TD_9723850_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688)
    // Right Table: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_10849160_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10872964_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9723850_key_leftMajor, SW_JOIN_INNER_TD_9723850_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10849160_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9723850_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 1);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 3);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 4);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 5);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_9723850_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_promo_sk1214, _ss_ext_sales_price1221, _ss_net_profit1228, _sr_return_amt680, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10872964_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_10872964_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9723850_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _s_store_sk378 = tbl_Filter_TD_10872964_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_10872964_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 1, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 3, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 4, _sr_return_amt680);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 5, _sr_net_loss688);
                tbl_JOIN_INNER_TD_9723850_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9723850_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9723850_key_rightMajor, SW_JOIN_INNER_TD_9723850_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10872964_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_10872964_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9723850_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_10872964_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_10872964_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_9723850_payload_rightMajor payloadA{_s_store_sk378, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10849160_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9723850_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 1);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 3);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 4);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 5);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10849160_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_9723850_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_id379_n);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 1, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 3, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 4, _sr_return_amt680);
                tbl_JOIN_INNER_TD_9723850_output.setInt32(r, 5, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9723850_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9723850_output #Row: " << tbl_JOIN_INNER_TD_9723850_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8120289(Table &tbl_SerializeFromObject_TD_9672296_input, Table &tbl_Filter_TD_8120289_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(p_channel_tv#38116) AND (p_channel_tv#38116 = N)) AND isnotnull(p_promo_sk#38105)))
    // Input: ListBuffer(p_promo_sk#38105, p_channel_tv#38116)
    // Output: ListBuffer(p_promo_sk#38105)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9672296_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_tv38116 = tbl_SerializeFromObject_TD_9672296_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _p_promo_sk38105 = tbl_SerializeFromObject_TD_9672296_input.getInt32(i, 0);
        if (((std::string(_p_channel_tv38116.data()) != "NULL") && (std::string(_p_channel_tv38116.data()) == "N")) && (_p_promo_sk38105!= 0)) {
            int32_t _p_promo_sk38105_t = tbl_SerializeFromObject_TD_9672296_input.getInt32(i, 0);
            tbl_Filter_TD_8120289_output.setInt32(r, 0, _p_promo_sk38105_t);
            r++;
        }
    }
    tbl_Filter_TD_8120289_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8120289_output #Row: " << tbl_Filter_TD_8120289_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8608214_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_8608214_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8608214_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8608214_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_8608214_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_promo_sk745;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
    std::string _web_site_id538;
};
struct SW_JOIN_INNER_TD_8608214_key_rightMajor {
    int32_t _i_item_sk38083;
    bool operator==(const SW_JOIN_INNER_TD_8608214_key_rightMajor& other) const {
        return ((_i_item_sk38083 == other._i_item_sk38083));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8608214_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8608214_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk38083));
    }
};
}
struct SW_JOIN_INNER_TD_8608214_payload_rightMajor {
    int32_t _i_item_sk38083;
};
void SW_JOIN_INNER_TD_8608214(Table &tbl_JOIN_INNER_TD_9219716_output, Table &tbl_Filter_TD_9914949_output, Table &tbl_JOIN_INNER_TD_8608214_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#38083))
    // Left Table: ListBuffer(ws_item_sk#732, ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    // Right Table: ListBuffer(i_item_sk#38083)
    // Output Table: ListBuffer(ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    int left_nrow = tbl_JOIN_INNER_TD_9219716_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9914949_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8608214_key_leftMajor, SW_JOIN_INNER_TD_8608214_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9219716_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8608214_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 0);
            int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 2);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 3);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 4);
            int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_JOIN_INNER_TD_9219716_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _web_site_id538 = std::string(_web_site_id538_n.data());
            SW_JOIN_INNER_TD_8608214_payload_leftMajor payloadA{_ws_item_sk732, _ws_promo_sk745, _ws_ext_sales_price752, _ws_net_profit762, _wr_return_amt846, _wr_net_loss854, _web_site_id538};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9914949_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk38083_k = tbl_Filter_TD_9914949_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8608214_key_leftMajor{_i_item_sk38083_k});
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
                int32_t _i_item_sk38083 = tbl_Filter_TD_9914949_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 0, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 2, _ws_net_profit762);
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 3, _wr_return_amt846);
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 4, _wr_net_loss854);
                tbl_JOIN_INNER_TD_8608214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8608214_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8608214_key_rightMajor, SW_JOIN_INNER_TD_8608214_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9914949_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk38083_k = tbl_Filter_TD_9914949_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8608214_key_rightMajor keyA{_i_item_sk38083_k};
            int32_t _i_item_sk38083 = tbl_Filter_TD_9914949_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8608214_payload_rightMajor payloadA{_i_item_sk38083};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9219716_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8608214_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk38083 = (it->second)._i_item_sk38083;
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 0);
                int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 2);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 3);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 4);
                int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_9219716_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_JOIN_INNER_TD_9219716_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _web_site_id538 = std::string(_web_site_id538_n.data());
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 0, _ws_promo_sk745);
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 2, _ws_net_profit762);
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 3, _wr_return_amt846);
                tbl_JOIN_INNER_TD_8608214_output.setInt32(r, 4, _wr_net_loss854);
                tbl_JOIN_INNER_TD_8608214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8608214_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8608214_output #Row: " << tbl_JOIN_INNER_TD_8608214_output.getNumRow() << std::endl;
}

void SW_Filter_TD_844216(Table &tbl_SerializeFromObject_TD_9770991_input, Table &tbl_Filter_TD_844216_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(p_channel_tv#38047) AND (p_channel_tv#38047 = N)) AND isnotnull(p_promo_sk#38036)))
    // Input: ListBuffer(p_promo_sk#38036, p_channel_tv#38047)
    // Output: ListBuffer(p_promo_sk#38036)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9770991_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_tv38047 = tbl_SerializeFromObject_TD_9770991_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _p_promo_sk38036 = tbl_SerializeFromObject_TD_9770991_input.getInt32(i, 0);
        if (((std::string(_p_channel_tv38047.data()) != "NULL") && (std::string(_p_channel_tv38047.data()) == "N")) && (_p_promo_sk38036!= 0)) {
            int32_t _p_promo_sk38036_t = tbl_SerializeFromObject_TD_9770991_input.getInt32(i, 0);
            tbl_Filter_TD_844216_output.setInt32(r, 0, _p_promo_sk38036_t);
            r++;
        }
    }
    tbl_Filter_TD_844216_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_844216_output #Row: " << tbl_Filter_TD_844216_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8465302_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_8465302_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8465302_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8465302_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_8465302_payload_leftMajor {
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
    std::string _cp_catalog_page_id997;
};
struct SW_JOIN_INNER_TD_8465302_key_rightMajor {
    int32_t _i_item_sk38014;
    bool operator==(const SW_JOIN_INNER_TD_8465302_key_rightMajor& other) const {
        return ((_i_item_sk38014 == other._i_item_sk38014));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8465302_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8465302_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk38014));
    }
};
}
struct SW_JOIN_INNER_TD_8465302_payload_rightMajor {
    int32_t _i_item_sk38014;
};
void SW_JOIN_INNER_TD_8465302(Table &tbl_JOIN_INNER_TD_9601901_output, Table &tbl_Filter_TD_9759510_output, Table &tbl_JOIN_INNER_TD_8465302_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#38014))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    // Right Table: ListBuffer(i_item_sk#38014)
    // Output Table: ListBuffer(cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    int left_nrow = tbl_JOIN_INNER_TD_9601901_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9759510_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8465302_key_leftMajor, SW_JOIN_INNER_TD_8465302_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9601901_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8465302_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 0);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 1);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 2);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 3);
            int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 4);
            int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_JOIN_INNER_TD_9601901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
            SW_JOIN_INNER_TD_8465302_payload_leftMajor payloadA{_cs_item_sk1119, _cs_promo_sk1120, _cs_ext_sales_price1127, _cs_net_profit1137, _cr_return_amount1041, _cr_net_loss1049, _cp_catalog_page_id997};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9759510_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk38014_k = tbl_Filter_TD_9759510_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8465302_key_leftMajor{_i_item_sk38014_k});
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
                int32_t _i_item_sk38014 = tbl_Filter_TD_9759510_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 0, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 2, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 3, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 4, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_8465302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8465302_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8465302_key_rightMajor, SW_JOIN_INNER_TD_8465302_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9759510_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk38014_k = tbl_Filter_TD_9759510_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8465302_key_rightMajor keyA{_i_item_sk38014_k};
            int32_t _i_item_sk38014 = tbl_Filter_TD_9759510_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8465302_payload_rightMajor payloadA{_i_item_sk38014};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9601901_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8465302_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk38014 = (it->second)._i_item_sk38014;
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 0);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 1);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 2);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 3);
                int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 4);
                int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_9601901_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_JOIN_INNER_TD_9601901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 0, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 2, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 3, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_8465302_output.setInt32(r, 4, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_8465302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8465302_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8465302_output #Row: " << tbl_JOIN_INNER_TD_8465302_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8245724(Table &tbl_SerializeFromObject_TD_9658607_input, Table &tbl_Filter_TD_8245724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(p_channel_tv#305) AND (p_channel_tv#305 = N)) AND isnotnull(p_promo_sk#294)))
    // Input: ListBuffer(p_promo_sk#294, p_channel_tv#305)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9658607_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_tv305 = tbl_SerializeFromObject_TD_9658607_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_9658607_input.getInt32(i, 0);
        if (((std::string(_p_channel_tv305.data()) != "NULL") && (std::string(_p_channel_tv305.data()) == "N")) && (_p_promo_sk294!= 0)) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_9658607_input.getInt32(i, 0);
            tbl_Filter_TD_8245724_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_8245724_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8245724_output #Row: " << tbl_Filter_TD_8245724_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8120189_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_8120189_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8120189_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8120189_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_8120189_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
    std::string _s_store_id379;
};
struct SW_JOIN_INNER_TD_8120189_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_8120189_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8120189_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8120189_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_8120189_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_8120189(Table &tbl_JOIN_INNER_TD_9723850_output, Table &tbl_Filter_TD_944343_output, Table &tbl_JOIN_INNER_TD_8120189_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_9723850_output.getNumRow();
    int right_nrow = tbl_Filter_TD_944343_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8120189_key_leftMajor, SW_JOIN_INNER_TD_8120189_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9723850_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8120189_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 0);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 2);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 3);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 4);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_9723850_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_8120189_payload_leftMajor payloadA{_ss_item_sk1208, _ss_promo_sk1214, _ss_ext_sales_price1221, _ss_net_profit1228, _sr_return_amt680, _sr_net_loss688, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_944343_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_944343_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8120189_key_leftMajor{_i_item_sk228_k});
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
                int32_t _i_item_sk228 = tbl_Filter_TD_944343_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 0, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 3, _sr_return_amt680);
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 4, _sr_net_loss688);
                tbl_JOIN_INNER_TD_8120189_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8120189_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8120189_key_rightMajor, SW_JOIN_INNER_TD_8120189_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_944343_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_944343_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8120189_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_944343_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8120189_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9723850_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8120189_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 0);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 2);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 3);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 4);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_9723850_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_9723850_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 0, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 3, _sr_return_amt680);
                tbl_JOIN_INNER_TD_8120189_output.setInt32(r, 4, _sr_net_loss688);
                tbl_JOIN_INNER_TD_8120189_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8120189_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8120189_output #Row: " << tbl_JOIN_INNER_TD_8120189_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7146169_key_leftMajor {
    int32_t _ws_promo_sk745;
    bool operator==(const SW_JOIN_INNER_TD_7146169_key_leftMajor& other) const {
        return ((_ws_promo_sk745 == other._ws_promo_sk745));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7146169_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7146169_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_promo_sk745));
    }
};
}
struct SW_JOIN_INNER_TD_7146169_payload_leftMajor {
    int32_t _ws_promo_sk745;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
    std::string _web_site_id538;
};
struct SW_JOIN_INNER_TD_7146169_key_rightMajor {
    int32_t _p_promo_sk38105;
    bool operator==(const SW_JOIN_INNER_TD_7146169_key_rightMajor& other) const {
        return ((_p_promo_sk38105 == other._p_promo_sk38105));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7146169_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7146169_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk38105));
    }
};
}
struct SW_JOIN_INNER_TD_7146169_payload_rightMajor {
    int32_t _p_promo_sk38105;
};
void SW_JOIN_INNER_TD_7146169(Table &tbl_JOIN_INNER_TD_8608214_output, Table &tbl_Filter_TD_8120289_output, Table &tbl_JOIN_INNER_TD_7146169_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_promo_sk#745 = p_promo_sk#38105))
    // Left Table: ListBuffer(ws_promo_sk#745, ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    // Right Table: ListBuffer(p_promo_sk#38105)
    // Output Table: ListBuffer(ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    int left_nrow = tbl_JOIN_INNER_TD_8608214_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8120289_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7146169_key_leftMajor, SW_JOIN_INNER_TD_7146169_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8608214_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_promo_sk745_k = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7146169_key_leftMajor keyA{_ws_promo_sk745_k};
            int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 1);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 2);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 3);
            int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_JOIN_INNER_TD_8608214_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _web_site_id538 = std::string(_web_site_id538_n.data());
            SW_JOIN_INNER_TD_7146169_payload_leftMajor payloadA{_ws_promo_sk745, _ws_ext_sales_price752, _ws_net_profit762, _wr_return_amt846, _wr_net_loss854, _web_site_id538};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8120289_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk38105_k = tbl_Filter_TD_8120289_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7146169_key_leftMajor{_p_promo_sk38105_k});
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
                int32_t _p_promo_sk38105 = tbl_Filter_TD_8120289_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7146169_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7146169_output.setInt32(r, 1, _ws_net_profit762);
                tbl_JOIN_INNER_TD_7146169_output.setInt32(r, 2, _wr_return_amt846);
                tbl_JOIN_INNER_TD_7146169_output.setInt32(r, 3, _wr_net_loss854);
                tbl_JOIN_INNER_TD_7146169_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7146169_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7146169_key_rightMajor, SW_JOIN_INNER_TD_7146169_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8120289_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk38105_k = tbl_Filter_TD_8120289_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7146169_key_rightMajor keyA{_p_promo_sk38105_k};
            int32_t _p_promo_sk38105 = tbl_Filter_TD_8120289_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7146169_payload_rightMajor payloadA{_p_promo_sk38105};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8608214_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_promo_sk745_k = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7146169_key_rightMajor{_ws_promo_sk745_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk38105 = (it->second)._p_promo_sk38105;
                int32_t _ws_promo_sk745 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 1);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 2);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 3);
                int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_8608214_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_JOIN_INNER_TD_8608214_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _web_site_id538 = std::string(_web_site_id538_n.data());
                tbl_JOIN_INNER_TD_7146169_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7146169_output.setInt32(r, 1, _ws_net_profit762);
                tbl_JOIN_INNER_TD_7146169_output.setInt32(r, 2, _wr_return_amt846);
                tbl_JOIN_INNER_TD_7146169_output.setInt32(r, 3, _wr_net_loss854);
                tbl_JOIN_INNER_TD_7146169_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7146169_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7146169_output #Row: " << tbl_JOIN_INNER_TD_7146169_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7677773_key_leftMajor {
    int32_t _cs_promo_sk1120;
    bool operator==(const SW_JOIN_INNER_TD_7677773_key_leftMajor& other) const {
        return ((_cs_promo_sk1120 == other._cs_promo_sk1120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7677773_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7677773_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_promo_sk1120));
    }
};
}
struct SW_JOIN_INNER_TD_7677773_payload_leftMajor {
    int32_t _cs_promo_sk1120;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
    std::string _cp_catalog_page_id997;
};
struct SW_JOIN_INNER_TD_7677773_key_rightMajor {
    int32_t _p_promo_sk38036;
    bool operator==(const SW_JOIN_INNER_TD_7677773_key_rightMajor& other) const {
        return ((_p_promo_sk38036 == other._p_promo_sk38036));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7677773_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7677773_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk38036));
    }
};
}
struct SW_JOIN_INNER_TD_7677773_payload_rightMajor {
    int32_t _p_promo_sk38036;
};
void SW_JOIN_INNER_TD_7677773(Table &tbl_JOIN_INNER_TD_8465302_output, Table &tbl_Filter_TD_844216_output, Table &tbl_JOIN_INNER_TD_7677773_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_promo_sk#1120 = p_promo_sk#38036))
    // Left Table: ListBuffer(cs_promo_sk#1120, cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    // Right Table: ListBuffer(p_promo_sk#38036)
    // Output Table: ListBuffer(cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    int left_nrow = tbl_JOIN_INNER_TD_8465302_output.getNumRow();
    int right_nrow = tbl_Filter_TD_844216_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7677773_key_leftMajor, SW_JOIN_INNER_TD_7677773_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8465302_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7677773_key_leftMajor keyA{_cs_promo_sk1120_k};
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 0);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 1);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 2);
            int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 3);
            int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_JOIN_INNER_TD_8465302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
            SW_JOIN_INNER_TD_7677773_payload_leftMajor payloadA{_cs_promo_sk1120, _cs_ext_sales_price1127, _cs_net_profit1137, _cr_return_amount1041, _cr_net_loss1049, _cp_catalog_page_id997};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_844216_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk38036_k = tbl_Filter_TD_844216_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7677773_key_leftMajor{_p_promo_sk38036_k});
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
                int32_t _p_promo_sk38036 = tbl_Filter_TD_844216_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7677773_output.setInt32(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_7677773_output.setInt32(r, 1, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_7677773_output.setInt32(r, 2, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_7677773_output.setInt32(r, 3, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_7677773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7677773_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7677773_key_rightMajor, SW_JOIN_INNER_TD_7677773_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_844216_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk38036_k = tbl_Filter_TD_844216_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7677773_key_rightMajor keyA{_p_promo_sk38036_k};
            int32_t _p_promo_sk38036 = tbl_Filter_TD_844216_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7677773_payload_rightMajor payloadA{_p_promo_sk38036};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8465302_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7677773_key_rightMajor{_cs_promo_sk1120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk38036 = (it->second)._p_promo_sk38036;
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 0);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 1);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 2);
                int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 3);
                int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_8465302_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_JOIN_INNER_TD_8465302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
                tbl_JOIN_INNER_TD_7677773_output.setInt32(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_7677773_output.setInt32(r, 1, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_7677773_output.setInt32(r, 2, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_7677773_output.setInt32(r, 3, _cr_net_loss1049);
                tbl_JOIN_INNER_TD_7677773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7677773_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7677773_output #Row: " << tbl_JOIN_INNER_TD_7677773_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7447212_key_leftMajor {
    int32_t _ss_promo_sk1214;
    bool operator==(const SW_JOIN_INNER_TD_7447212_key_leftMajor& other) const {
        return ((_ss_promo_sk1214 == other._ss_promo_sk1214));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7447212_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7447212_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_promo_sk1214));
    }
};
}
struct SW_JOIN_INNER_TD_7447212_payload_leftMajor {
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
    std::string _s_store_id379;
};
struct SW_JOIN_INNER_TD_7447212_key_rightMajor {
    int32_t _p_promo_sk294;
    bool operator==(const SW_JOIN_INNER_TD_7447212_key_rightMajor& other) const {
        return ((_p_promo_sk294 == other._p_promo_sk294));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7447212_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7447212_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk294));
    }
};
}
struct SW_JOIN_INNER_TD_7447212_payload_rightMajor {
    int32_t _p_promo_sk294;
};
void SW_JOIN_INNER_TD_7447212(Table &tbl_JOIN_INNER_TD_8120189_output, Table &tbl_Filter_TD_8245724_output, Table &tbl_JOIN_INNER_TD_7447212_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_promo_sk#1214 = p_promo_sk#294))
    // Left Table: ListBuffer(ss_promo_sk#1214, ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    // Right Table: ListBuffer(p_promo_sk#294)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_8120189_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8245724_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7447212_key_leftMajor, SW_JOIN_INNER_TD_7447212_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8120189_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7447212_key_leftMajor keyA{_ss_promo_sk1214_k};
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 1);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 2);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 3);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_8120189_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_7447212_payload_leftMajor payloadA{_ss_promo_sk1214, _ss_ext_sales_price1221, _ss_net_profit1228, _sr_return_amt680, _sr_net_loss688, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8245724_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_8245724_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7447212_key_leftMajor{_p_promo_sk294_k});
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
                int32_t _p_promo_sk294 = tbl_Filter_TD_8245724_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7447212_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7447212_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_7447212_output.setInt32(r, 2, _sr_return_amt680);
                tbl_JOIN_INNER_TD_7447212_output.setInt32(r, 3, _sr_net_loss688);
                tbl_JOIN_INNER_TD_7447212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7447212_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7447212_key_rightMajor, SW_JOIN_INNER_TD_7447212_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8245724_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_8245724_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7447212_key_rightMajor keyA{_p_promo_sk294_k};
            int32_t _p_promo_sk294 = tbl_Filter_TD_8245724_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7447212_payload_rightMajor payloadA{_p_promo_sk294};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8120189_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7447212_key_rightMajor{_ss_promo_sk1214_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk294 = (it->second)._p_promo_sk294;
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 1);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 2);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 3);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_8120189_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_8120189_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_7447212_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7447212_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_7447212_output.setInt32(r, 2, _sr_return_amt680);
                tbl_JOIN_INNER_TD_7447212_output.setInt32(r, 3, _sr_net_loss688);
                tbl_JOIN_INNER_TD_7447212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7447212_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7447212_output #Row: " << tbl_JOIN_INNER_TD_7447212_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6928096_key;
struct SW_Aggregate_TD_6928096_payload {
    int32_t _sales37983_sum_0;
    int32_t _returns37984_sum_1;
    int32_t _profit37985_sum_2;
    std::string _channel38464;
    std::string _id38465;
};
void SW_Aggregate_TD_6928096(Table &tbl_JOIN_INNER_TD_7146169_output, Table &tbl_Aggregate_TD_6928096_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(web_site_id#538, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS sales#37983, sum(coalesce(cast(wr_return_amt#846 as decimal(12,2)), 0.00)) AS returns#37984, sum(CheckOverflow((promote_precision(cast(ws_net_profit#762 as decimal(13,2))) - promote_precision(cast(coalesce(cast(wr_net_loss#854 as decimal(12,2)), 0.00) as decimal(13,2)))), DecimalType(13,2), true)) AS profit#37985, web channel AS channel#38464, concat(web_site, web_site_id#538) AS id#38465)
    // Input: ListBuffer(ws_ext_sales_price#752, ws_net_profit#762, wr_return_amt#846, wr_net_loss#854, web_site_id#538)
    // Output: ListBuffer(sales#37983, returns#37984, profit#37985, channel#38464, id#38465)
    std::unordered_map<SW_Aggregate_TD_6928096_key, SW_Aggregate_TD_6928096_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7146169_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7146169_output.getInt32(i, 0);
        int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_7146169_output.getInt32(i, 1);
        int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_7146169_output.getInt32(i, 2);
        int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_7146169_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _web_site_id538 = tbl_JOIN_INNER_TD_7146169_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6928096_key k = std::string(_web_site_id538.data());
        int64_t _sales37983_sum_0 = _ws_ext_sales_price752;
        int64_t _returns37984_sum_1 = _wr_return_amt846 != 0 ? _wr_return_amt846 : 0.00;
        int64_t _profit37985_sum_2 = (_ws_net_profit762 - _wr_net_loss854 != 0 ? _wr_net_loss854 : 0.00);
        std::string _channel38464 = "web channel";
        std::string _id38465 = std::string("web_site").append(std::string(_web_site_id538.data()));
        SW_Aggregate_TD_6928096_payload p{_sales37983_sum_0, _returns37984_sum_1, _profit37985_sum_2, std::string(_channel38464.data()), std::string(_id38465.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales37983_sum_0 + _sales37983_sum_0;
            p._sales37983_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._returns37984_sum_1 + _returns37984_sum_1;
            p._returns37984_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._profit37985_sum_2 + _profit37985_sum_2;
            p._profit37985_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _web_site_id538 not required in the output table
        int32_t _sales37983 = (it.second)._sales37983_sum_0;
        tbl_Aggregate_TD_6928096_output.setInt32(r, 0, _sales37983);
        int32_t _returns37984 = (it.second)._returns37984_sum_1;
        tbl_Aggregate_TD_6928096_output.setInt32(r, 1, _returns37984);
        int32_t _profit37985 = (it.second)._profit37985_sum_2;
        tbl_Aggregate_TD_6928096_output.setInt32(r, 2, _profit37985);
        std::array<char, TPCDS_READ_MAX + 1> _channel38464_n{};
        memcpy(_channel38464_n.data(), (it.second)._channel38464.data(), (it.second)._channel38464.length());
        tbl_Aggregate_TD_6928096_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel38464_n);
        std::array<char, TPCDS_READ_MAX + 1> _id38465_n{};
        memcpy(_id38465_n.data(), (it.second)._id38465.data(), (it.second)._id38465.length());
        tbl_Aggregate_TD_6928096_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id38465_n);
        ++r;
    }
    tbl_Aggregate_TD_6928096_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6928096_output #Row: " << tbl_Aggregate_TD_6928096_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6885213_key;
struct SW_Aggregate_TD_6885213_payload {
    int32_t _sales37980_sum_0;
    int32_t _returns37981_sum_1;
    int32_t _profit37982_sum_2;
    std::string _channel38462;
    std::string _id38463;
};
void SW_Aggregate_TD_6885213(Table &tbl_JOIN_INNER_TD_7677773_output, Table &tbl_Aggregate_TD_6885213_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cp_catalog_page_id#997, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS sales#37980, sum(coalesce(cast(cr_return_amount#1041 as decimal(12,2)), 0.00)) AS returns#37981, sum(CheckOverflow((promote_precision(cast(cs_net_profit#1137 as decimal(13,2))) - promote_precision(cast(coalesce(cast(cr_net_loss#1049 as decimal(12,2)), 0.00) as decimal(13,2)))), DecimalType(13,2), true)) AS profit#37982, catalog channel AS channel#38462, concat(catalog_page, cp_catalog_page_id#997) AS id#38463)
    // Input: ListBuffer(cs_ext_sales_price#1127, cs_net_profit#1137, cr_return_amount#1041, cr_net_loss#1049, cp_catalog_page_id#997)
    // Output: ListBuffer(sales#37980, returns#37981, profit#37982, channel#38462, id#38463)
    std::unordered_map<SW_Aggregate_TD_6885213_key, SW_Aggregate_TD_6885213_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7677773_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7677773_output.getInt32(i, 0);
        int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_7677773_output.getInt32(i, 1);
        int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_7677773_output.getInt32(i, 2);
        int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_7677773_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997 = tbl_JOIN_INNER_TD_7677773_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6885213_key k = std::string(_cp_catalog_page_id997.data());
        int64_t _sales37980_sum_0 = _cs_ext_sales_price1127;
        int64_t _returns37981_sum_1 = _cr_return_amount1041 != 0 ? _cr_return_amount1041 : 0.00;
        int64_t _profit37982_sum_2 = (_cs_net_profit1137 - _cr_net_loss1049 != 0 ? _cr_net_loss1049 : 0.00);
        std::string _channel38462 = "catalog channel";
        std::string _id38463 = std::string("catalog_page").append(std::string(_cp_catalog_page_id997.data()));
        SW_Aggregate_TD_6885213_payload p{_sales37980_sum_0, _returns37981_sum_1, _profit37982_sum_2, std::string(_channel38462.data()), std::string(_id38463.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales37980_sum_0 + _sales37980_sum_0;
            p._sales37980_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._returns37981_sum_1 + _returns37981_sum_1;
            p._returns37981_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._profit37982_sum_2 + _profit37982_sum_2;
            p._profit37982_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cp_catalog_page_id997 not required in the output table
        int32_t _sales37980 = (it.second)._sales37980_sum_0;
        tbl_Aggregate_TD_6885213_output.setInt32(r, 0, _sales37980);
        int32_t _returns37981 = (it.second)._returns37981_sum_1;
        tbl_Aggregate_TD_6885213_output.setInt32(r, 1, _returns37981);
        int32_t _profit37982 = (it.second)._profit37982_sum_2;
        tbl_Aggregate_TD_6885213_output.setInt32(r, 2, _profit37982);
        std::array<char, TPCDS_READ_MAX + 1> _channel38462_n{};
        memcpy(_channel38462_n.data(), (it.second)._channel38462.data(), (it.second)._channel38462.length());
        tbl_Aggregate_TD_6885213_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel38462_n);
        std::array<char, TPCDS_READ_MAX + 1> _id38463_n{};
        memcpy(_id38463_n.data(), (it.second)._id38463.data(), (it.second)._id38463.length());
        tbl_Aggregate_TD_6885213_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id38463_n);
        ++r;
    }
    tbl_Aggregate_TD_6885213_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6885213_output #Row: " << tbl_Aggregate_TD_6885213_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6985818_key;
struct SW_Aggregate_TD_6985818_payload {
    int32_t _sales37976_sum_0;
    int32_t _returns37977_sum_1;
    int32_t _profit37978_sum_2;
    std::string _channel38136;
    std::string _id38137;
};
void SW_Aggregate_TD_6985818(Table &tbl_JOIN_INNER_TD_7447212_output, Table &tbl_Aggregate_TD_6985818_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_store_id#379, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS sales#37976, sum(coalesce(cast(sr_return_amt#680 as decimal(12,2)), 0.00)) AS returns#37977, sum(CheckOverflow((promote_precision(cast(ss_net_profit#1228 as decimal(13,2))) - promote_precision(cast(coalesce(cast(sr_net_loss#688 as decimal(12,2)), 0.00) as decimal(13,2)))), DecimalType(13,2), true)) AS profit#37978, store channel AS channel#38136, concat(store, s_store_id#379) AS id#38137)
    // Input: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, sr_return_amt#680, sr_net_loss#688, s_store_id#379)
    // Output: ListBuffer(sales#37976, returns#37977, profit#37978, channel#38136, id#38137)
    std::unordered_map<SW_Aggregate_TD_6985818_key, SW_Aggregate_TD_6985818_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7447212_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7447212_output.getInt32(i, 0);
        int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_7447212_output.getInt32(i, 1);
        int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_7447212_output.getInt32(i, 2);
        int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_7447212_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379 = tbl_JOIN_INNER_TD_7447212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6985818_key k = std::string(_s_store_id379.data());
        int64_t _sales37976_sum_0 = _ss_ext_sales_price1221;
        int64_t _returns37977_sum_1 = _sr_return_amt680 != 0 ? _sr_return_amt680 : 0.00;
        int64_t _profit37978_sum_2 = (_ss_net_profit1228 - _sr_net_loss688 != 0 ? _sr_net_loss688 : 0.00);
        std::string _channel38136 = "store channel";
        std::string _id38137 = std::string("store").append(std::string(_s_store_id379.data()));
        SW_Aggregate_TD_6985818_payload p{_sales37976_sum_0, _returns37977_sum_1, _profit37978_sum_2, std::string(_channel38136.data()), std::string(_id38137.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales37976_sum_0 + _sales37976_sum_0;
            p._sales37976_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._returns37977_sum_1 + _returns37977_sum_1;
            p._returns37977_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._profit37978_sum_2 + _profit37978_sum_2;
            p._profit37978_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _s_store_id379 not required in the output table
        int32_t _sales37976 = (it.second)._sales37976_sum_0;
        tbl_Aggregate_TD_6985818_output.setInt32(r, 0, _sales37976);
        int32_t _returns37977 = (it.second)._returns37977_sum_1;
        tbl_Aggregate_TD_6985818_output.setInt32(r, 1, _returns37977);
        int32_t _profit37978 = (it.second)._profit37978_sum_2;
        tbl_Aggregate_TD_6985818_output.setInt32(r, 2, _profit37978);
        std::array<char, TPCDS_READ_MAX + 1> _channel38136_n{};
        memcpy(_channel38136_n.data(), (it.second)._channel38136.data(), (it.second)._channel38136.length());
        tbl_Aggregate_TD_6985818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel38136_n);
        std::array<char, TPCDS_READ_MAX + 1> _id38137_n{};
        memcpy(_id38137_n.data(), (it.second)._id38137.data(), (it.second)._id38137.length());
        tbl_Aggregate_TD_6985818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id38137_n);
        ++r;
    }
    tbl_Aggregate_TD_6985818_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6985818_output #Row: " << tbl_Aggregate_TD_6985818_output.getNumRow() << std::endl;
}

void SW_Union_TD_5492699(Table &tbl_Aggregate_TD_6985818_output, Table &tbl_Aggregate_TD_6885213_output, Table &tbl_Aggregate_TD_6928096_output, Table &tbl_Union_TD_5492699_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sales#37976, returns#37977, profit#37978, channel#38136, id#38137)
    int r = 0;
    int row0 = tbl_Aggregate_TD_6985818_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_5492699_output.setInt32(r, 0, tbl_Aggregate_TD_6985818_output.getInt32(i, 0));
        tbl_Union_TD_5492699_output.setInt32(r, 1, tbl_Aggregate_TD_6985818_output.getInt32(i, 1));
        tbl_Union_TD_5492699_output.setInt32(r, 2, tbl_Aggregate_TD_6985818_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel38136_n = tbl_Union_TD_5492699_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5492699_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel38136_n);
        std::array<char, TPCDS_READ_MAX + 1> _id38137_n = tbl_Union_TD_5492699_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_5492699_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id38137_n);
        ++r;
    }
    int row1 = tbl_Aggregate_TD_6885213_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_5492699_output.setInt32(r, 0, tbl_Aggregate_TD_6885213_output.getInt32(i, 0));
        tbl_Union_TD_5492699_output.setInt32(r, 1, tbl_Aggregate_TD_6885213_output.getInt32(i, 1));
        tbl_Union_TD_5492699_output.setInt32(r, 2, tbl_Aggregate_TD_6885213_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel38462_n = tbl_Union_TD_5492699_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5492699_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel38462_n);
        std::array<char, TPCDS_READ_MAX + 1> _id38463_n = tbl_Union_TD_5492699_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_5492699_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id38463_n);
        ++r;
    }
    int row2 = tbl_Aggregate_TD_6928096_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_5492699_output.setInt32(r, 0, tbl_Aggregate_TD_6928096_output.getInt32(i, 0));
        tbl_Union_TD_5492699_output.setInt32(r, 1, tbl_Aggregate_TD_6928096_output.getInt32(i, 1));
        tbl_Union_TD_5492699_output.setInt32(r, 2, tbl_Aggregate_TD_6928096_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel38464_n = tbl_Union_TD_5492699_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5492699_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel38464_n);
        std::array<char, TPCDS_READ_MAX + 1> _id38465_n = tbl_Union_TD_5492699_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_5492699_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id38465_n);
        ++r;
    }
    tbl_Union_TD_5492699_output.setNumRow(r);
    std::cout << "tbl_Union_TD_5492699_output #Row: " << tbl_Union_TD_5492699_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4196623(Table &tbl_Union_TD_5492699_output, Table &tbl_Expand_TD_4196623_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(sales#37976, returns#37977, profit#37978, channel#38136, id#38137)
    // Output: ListBuffer(sales#37976, returns#37977, profit#37978, channel#38139, id#38140, spark_grouping_id#38138L)
    std::cout << "tbl_Expand_TD_4196623_output #Row: " << tbl_Expand_TD_4196623_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3798920_key {
    std::string _channel38139;
    std::string _id38140;
    int64_t _spark_grouping_id38138L;
    bool operator==(const SW_Aggregate_TD_3798920_key& other) const { return (_channel38139 == other._channel38139) && (_id38140 == other._id38140) && (_spark_grouping_id38138L == other._spark_grouping_id38138L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3798920_key> {
    std::size_t operator() (const SW_Aggregate_TD_3798920_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel38139)) + (hash<string>()(k._id38140)) + (hash<int64_t>()(k._spark_grouping_id38138L));
    }
};
}
struct SW_Aggregate_TD_3798920_payload {
    int32_t _sales37972_sum_0;
    int32_t _returns37973_sum_1;
    int32_t _profit37974_sum_2;
};
void SW_Aggregate_TD_3798920(Table &tbl_Expand_TD_4196623_output, Table &tbl_Aggregate_TD_3798920_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#38139, id#38140, spark_grouping_id#38138L, sum(sales#37976) AS sales#37972, sum(returns#37977) AS returns#37973, sum(profit#37978) AS profit#37974)
    // Input: ListBuffer(sales#37976, returns#37977, profit#37978, channel#38139, id#38140, spark_grouping_id#38138L)
    // Output: ListBuffer(channel#38139, id#38140, sales#37972, returns#37973, profit#37974)
    std::unordered_map<SW_Aggregate_TD_3798920_key, SW_Aggregate_TD_3798920_payload> ht1;
    int nrow1 = tbl_Expand_TD_4196623_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales37976 = tbl_Expand_TD_4196623_output.getInt32(i, 0);
        int32_t _returns37977 = tbl_Expand_TD_4196623_output.getInt32(i, 1);
        int32_t _profit37978 = tbl_Expand_TD_4196623_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _channel38139 = tbl_Expand_TD_4196623_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _id38140 = tbl_Expand_TD_4196623_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int64_t _spark_grouping_id38138L = tbl_Expand_TD_4196623_output.getInt64(i, 5);
        SW_Aggregate_TD_3798920_key k{std::string(_channel38139.data()), std::string(_id38140.data()), _spark_grouping_id38138L};
        int64_t _sales37972_sum_0 = _sales37976;
        int64_t _returns37973_sum_1 = _returns37977;
        int64_t _profit37974_sum_2 = _profit37978;
        SW_Aggregate_TD_3798920_payload p{_sales37972_sum_0, _returns37973_sum_1, _profit37974_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales37972_sum_0 + _sales37972_sum_0;
            p._sales37972_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._returns37973_sum_1 + _returns37973_sum_1;
            p._returns37973_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._profit37974_sum_2 + _profit37974_sum_2;
            p._profit37974_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel38139{};
        memcpy(_channel38139.data(), ((it.first)._channel38139).data(), ((it.first)._channel38139).length());
        tbl_Aggregate_TD_3798920_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel38139);
        std::array<char, TPCDS_READ_MAX + 1> _id38140{};
        memcpy(_id38140.data(), ((it.first)._id38140).data(), ((it.first)._id38140).length());
        tbl_Aggregate_TD_3798920_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id38140);
        // _spark_grouping_id38138L not required in the output table
        int32_t _sales37972 = (it.second)._sales37972_sum_0;
        tbl_Aggregate_TD_3798920_output.setInt32(r, 2, _sales37972);
        int32_t _returns37973 = (it.second)._returns37973_sum_1;
        tbl_Aggregate_TD_3798920_output.setInt32(r, 3, _returns37973);
        int32_t _profit37974 = (it.second)._profit37974_sum_2;
        tbl_Aggregate_TD_3798920_output.setInt32(r, 4, _profit37974);
        ++r;
    }
    tbl_Aggregate_TD_3798920_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3798920_output #Row: " << tbl_Aggregate_TD_3798920_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2255412(Table &tbl_Aggregate_TD_3798920_output, Table &tbl_Sort_TD_2255412_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#38139 ASC NULLS FIRST, id#38140 ASC NULLS FIRST)
    // Input: ListBuffer(channel#38139, id#38140, sales#37972, returns#37973, profit#37974)
    // Output: ListBuffer(channel#38139, id#38140, sales#37972, returns#37973, profit#37974)
    struct SW_Sort_TD_2255412Row {
        std::string _channel38139;
        std::string _id38140;
        int32_t _sales37972;
        int32_t _returns37973;
        int32_t _profit37974;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2255412Row& a, const SW_Sort_TD_2255412Row& b) const { return 
 (a._channel38139 < b._channel38139) || 
 ((a._channel38139 == b._channel38139) && (a._id38140 < b._id38140)); 
}
    }SW_Sort_TD_2255412_order; 

    int nrow1 = tbl_Aggregate_TD_3798920_output.getNumRow();
    std::vector<SW_Sort_TD_2255412Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel38139 = tbl_Aggregate_TD_3798920_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _id38140 = tbl_Aggregate_TD_3798920_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _sales37972 = tbl_Aggregate_TD_3798920_output.getInt32(i, 2);
        int32_t _returns37973 = tbl_Aggregate_TD_3798920_output.getInt32(i, 3);
        int32_t _profit37974 = tbl_Aggregate_TD_3798920_output.getInt32(i, 4);
        SW_Sort_TD_2255412Row t = {std::string(_channel38139.data()),std::string(_id38140.data()),_sales37972,_returns37973,_profit37974};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2255412_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel38139{};
        memcpy(_channel38139.data(), (it._channel38139).data(), (it._channel38139).length());
        tbl_Sort_TD_2255412_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel38139);
        std::array<char, TPCDS_READ_MAX + 1> _id38140{};
        memcpy(_id38140.data(), (it._id38140).data(), (it._id38140).length());
        tbl_Sort_TD_2255412_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _id38140);
        tbl_Sort_TD_2255412_output.setInt32(r, 2, it._sales37972);
        tbl_Sort_TD_2255412_output.setInt32(r, 3, it._returns37973);
        tbl_Sort_TD_2255412_output.setInt32(r, 4, it._profit37974);
        ++r;
    }
    tbl_Sort_TD_2255412_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2255412_output #Row: " << tbl_Sort_TD_2255412_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1929373(Table &tbl_Sort_TD_2255412_output, Table &tbl_LocalLimit_TD_1929373_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#38139, id#38140, sales#37972, returns#37973, profit#37974)
    // Output: ListBuffer(channel#38139, id#38140, sales#37972, returns#37973, profit#37974)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel38139_n = tbl_Sort_TD_2255412_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1929373_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel38139_n);
        std::array<char, TPCDS_READ_MAX + 1> _id38140_n = tbl_Sort_TD_2255412_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1929373_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id38140_n);
        tbl_LocalLimit_TD_1929373_output.setInt32(r, 2, tbl_Sort_TD_2255412_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1929373_output.setInt32(r, 3, tbl_Sort_TD_2255412_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1929373_output.setInt32(r, 4, tbl_Sort_TD_2255412_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1929373_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1929373_output #Row: " << tbl_LocalLimit_TD_1929373_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0909147(Table &tbl_LocalLimit_TD_1929373_output, Table &tbl_GlobalLimit_TD_0909147_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#38139, id#38140, sales#37972, returns#37973, profit#37974)
    // Output: ListBuffer(channel#38139, id#38140, sales#37972, returns#37973, profit#37974)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel38139_n = tbl_LocalLimit_TD_1929373_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0909147_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel38139_n);
        std::array<char, TPCDS_READ_MAX + 1> _id38140_n = tbl_LocalLimit_TD_1929373_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0909147_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id38140_n);
        tbl_GlobalLimit_TD_0909147_output.setInt32(r, 2, tbl_LocalLimit_TD_1929373_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0909147_output.setInt32(r, 3, tbl_LocalLimit_TD_1929373_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0909147_output.setInt32(r, 4, tbl_LocalLimit_TD_1929373_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0909147_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0909147_output #Row: " << tbl_GlobalLimit_TD_0909147_output.getNumRow() << std::endl;
}

