#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11121(Table &tbl_SerializeFromObject_TD_12866_input, Table &tbl_Filter_TD_11121_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_order_number#844L) AND isnotnull(wr_item_sk#833)))
    // Input: ListBuffer(wr_item_sk#833, wr_order_number#844L)
    // Output: ListBuffer(wr_item_sk#833, wr_order_number#844L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12866_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_12866_input.getInt64(i, 1);
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_12866_input.getInt32(i, 0);
        if ((_wr_order_number844L!= 0) && (_wr_item_sk833!= 0)) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_12866_input.getInt32(i, 0);
            tbl_Filter_TD_11121_output.setInt32(r, 0, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_12866_input.getInt64(i, 1);
            tbl_Filter_TD_11121_output.setInt64(r, 1, _wr_order_number844L_t);
            r++;
        }
    }
    tbl_Filter_TD_11121_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11121_output #Row: " << tbl_Filter_TD_11121_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11953(Table &tbl_SerializeFromObject_TD_12284_input, Table &tbl_Filter_TD_11953_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_item_sk#732)) AND isnotnull(ws_bill_customer_sk#733)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_order_number#746L, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_order_number#746L, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12284_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 1);
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 2);
        if (((_ws_sold_date_sk729!= 0) && (_ws_item_sk732!= 0)) && (_ws_bill_customer_sk733!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 0);
            tbl_Filter_TD_11953_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 1);
            tbl_Filter_TD_11953_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 2);
            tbl_Filter_TD_11953_output.setInt32(r, 2, _ws_bill_customer_sk733_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_12284_input.getInt64(i, 3);
            tbl_Filter_TD_11953_output.setInt64(r, 3, _ws_order_number746L_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 4);
            tbl_Filter_TD_11953_output.setInt32(r, 4, _ws_quantity747_t);
            int32_t _ws_wholesale_cost748_t = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 5);
            tbl_Filter_TD_11953_output.setInt32(r, 5, _ws_wholesale_cost748_t);
            int32_t _ws_sales_price750_t = tbl_SerializeFromObject_TD_12284_input.getInt32(i, 6);
            tbl_Filter_TD_11953_output.setInt32(r, 6, _ws_sales_price750_t);
            r++;
        }
    }
    tbl_Filter_TD_11953_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11953_output #Row: " << tbl_Filter_TD_11953_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11202(Table &tbl_SerializeFromObject_TD_12730_input, Table &tbl_Filter_TD_11202_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_ticket_number#678L) AND isnotnull(sr_item_sk#671)))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12730_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_12730_input.getInt64(i, 1);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_12730_input.getInt32(i, 0);
        if ((_sr_ticket_number678L!= 0) && (_sr_item_sk671!= 0)) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_12730_input.getInt32(i, 0);
            tbl_Filter_TD_11202_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_12730_input.getInt64(i, 1);
            tbl_Filter_TD_11202_output.setInt64(r, 1, _sr_ticket_number678L_t);
            r++;
        }
    }
    tbl_Filter_TD_11202_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11202_output #Row: " << tbl_Filter_TD_11202_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11866(Table &tbl_SerializeFromObject_TD_12361_input, Table &tbl_Filter_TD_11866_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#1206))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12361_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 0);
        if (_ss_sold_date_sk1206!= 0) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 0);
            tbl_Filter_TD_11866_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 1);
            tbl_Filter_TD_11866_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 2);
            tbl_Filter_TD_11866_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_12361_input.getInt64(i, 3);
            tbl_Filter_TD_11866_output.setInt64(r, 3, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 4);
            tbl_Filter_TD_11866_output.setInt32(r, 4, _ss_quantity1216_t);
            int32_t _ss_wholesale_cost1217_t = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 5);
            tbl_Filter_TD_11866_output.setInt32(r, 5, _ss_wholesale_cost1217_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 6);
            tbl_Filter_TD_11866_output.setInt32(r, 6, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_11866_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11866_output #Row: " << tbl_Filter_TD_11866_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10805(Table &tbl_SerializeFromObject_TD_11987_input, Table &tbl_Filter_TD_10805_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_order_number#1039L) AND isnotnull(cr_item_sk#1025)))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11987_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_11987_input.getInt64(i, 1);
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_11987_input.getInt32(i, 0);
        if ((_cr_order_number1039L!= 0) && (_cr_item_sk1025!= 0)) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_11987_input.getInt32(i, 0);
            tbl_Filter_TD_10805_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_11987_input.getInt64(i, 1);
            tbl_Filter_TD_10805_output.setInt64(r, 1, _cr_order_number1039L_t);
            r++;
        }
    }
    tbl_Filter_TD_10805_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10805_output #Row: " << tbl_Filter_TD_10805_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1052(Table &tbl_SerializeFromObject_TD_11586_input, Table &tbl_Filter_TD_1052_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_bill_customer_sk#1107)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11586_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_11586_input.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_11586_input.getInt32(i, 2);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_11586_input.getInt32(i, 1);
        if (((_cs_sold_date_sk1104!= 0) && (_cs_item_sk1119!= 0)) && (_cs_bill_customer_sk1107!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_11586_input.getInt32(i, 0);
            tbl_Filter_TD_1052_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_11586_input.getInt32(i, 1);
            tbl_Filter_TD_1052_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_11586_input.getInt32(i, 2);
            tbl_Filter_TD_1052_output.setInt32(r, 2, _cs_item_sk1119_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_11586_input.getInt64(i, 3);
            tbl_Filter_TD_1052_output.setInt64(r, 3, _cs_order_number1121L_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_11586_input.getInt32(i, 4);
            tbl_Filter_TD_1052_output.setInt32(r, 4, _cs_quantity1122_t);
            int32_t _cs_wholesale_cost1123_t = tbl_SerializeFromObject_TD_11586_input.getInt32(i, 5);
            tbl_Filter_TD_1052_output.setInt32(r, 5, _cs_wholesale_cost1123_t);
            int32_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_11586_input.getInt32(i, 6);
            tbl_Filter_TD_1052_output.setInt32(r, 6, _cs_sales_price1125_t);
            r++;
        }
    }
    tbl_Filter_TD_1052_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1052_output #Row: " << tbl_Filter_TD_1052_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_10249_key {
    int64_t _wr_order_number844L;
    int32_t _wr_item_sk833;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_10249_key& other) const {
        return ((_wr_order_number844L == other._wr_order_number844L) && (_wr_item_sk833 == other._wr_item_sk833));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_10249_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_10249_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._wr_order_number844L)) + (hash<int32_t>()(k._wr_item_sk833));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_10249_payload {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
};
void SW_JOIN_LEFTOUTER_TD_10249(Table &tbl_Filter_TD_11953_output, Table &tbl_Filter_TD_11121_output, Table &tbl_JOIN_LEFTOUTER_TD_10249_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((wr_order_number#844L = ws_order_number#746L) AND (ws_item_sk#732 = wr_item_sk#833)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_order_number#746L, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    // Right Table: ListBuffer(wr_item_sk#833, wr_order_number#844L)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750, wr_order_number#844L)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_10249_key, SW_JOIN_LEFTOUTER_TD_10249_payload> ht1;
    int nrow1 = tbl_Filter_TD_11121_output.getNumRow();
    int nrow2 = tbl_Filter_TD_11953_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L_k = tbl_Filter_TD_11121_output.getInt64(i, 1);
        int32_t _wr_item_sk833_k = tbl_Filter_TD_11121_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_10249_key keyA{_wr_order_number844L_k, _wr_item_sk833_k};
        int32_t _wr_item_sk833 = tbl_Filter_TD_11121_output.getInt32(i, 0);
        int64_t _wr_order_number844L = tbl_Filter_TD_11121_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_10249_payload payloadA{_wr_item_sk833, _wr_order_number844L};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _ws_order_number746L_k = tbl_Filter_TD_11953_output.getInt64(i, 3);
        int32_t _ws_item_sk732_k = tbl_Filter_TD_11953_output.getInt32(i, 1);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_10249_key{_ws_order_number746L_k, _ws_item_sk732_k});
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11953_output.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_Filter_TD_11953_output.getInt32(i, 1);
        int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_11953_output.getInt32(i, 2);
        int64_t _ws_order_number746L = tbl_Filter_TD_11953_output.getInt64(i, 3);
        int32_t _ws_quantity747 = tbl_Filter_TD_11953_output.getInt32(i, 4);
        int32_t _ws_wholesale_cost748 = tbl_Filter_TD_11953_output.getInt32(i, 5);
        int32_t _ws_sales_price750 = tbl_Filter_TD_11953_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_10249_key{_ws_order_number746L_k, _ws_item_sk732_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _wr_item_sk833 = (it_it->second)._wr_item_sk833;
                int64_t _wr_order_number844L = (it_it->second)._wr_order_number844L;
                tbl_JOIN_LEFTOUTER_TD_10249_output.setInt64(r, 6, _wr_order_number844L);
                tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 2, _ws_bill_customer_sk733);
                tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 3, _ws_quantity747);
                tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 4, _ws_wholesale_cost748);
                tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 5, _ws_sales_price750);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 0, _ws_sold_date_sk729);
            tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 1, _ws_item_sk732);
            tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 2, _ws_bill_customer_sk733);
            tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 3, _ws_quantity747);
            tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 4, _ws_wholesale_cost748);
            tbl_JOIN_LEFTOUTER_TD_10249_output.setInt32(r, 5, _ws_sales_price750);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_10249_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_10249_output #Row: " << tbl_JOIN_LEFTOUTER_TD_10249_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_10476_key {
    int64_t _sr_ticket_number678L;
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_10476_key& other) const {
        return ((_sr_ticket_number678L == other._sr_ticket_number678L) && (_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_10476_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_10476_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._sr_ticket_number678L)) + (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_10476_payload {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
};
void SW_JOIN_LEFTOUTER_TD_10476(Table &tbl_Filter_TD_11866_output, Table &tbl_Filter_TD_11202_output, Table &tbl_JOIN_LEFTOUTER_TD_10476_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((sr_ticket_number#678L = ss_ticket_number#1215L) AND (ss_item_sk#1208 = sr_item_sk#671)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219, sr_ticket_number#678L)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_10476_key, SW_JOIN_LEFTOUTER_TD_10476_payload> ht1;
    int nrow1 = tbl_Filter_TD_11202_output.getNumRow();
    int nrow2 = tbl_Filter_TD_11866_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L_k = tbl_Filter_TD_11202_output.getInt64(i, 1);
        int32_t _sr_item_sk671_k = tbl_Filter_TD_11202_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_10476_key keyA{_sr_ticket_number678L_k, _sr_item_sk671_k};
        int32_t _sr_item_sk671 = tbl_Filter_TD_11202_output.getInt32(i, 0);
        int64_t _sr_ticket_number678L = tbl_Filter_TD_11202_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_10476_payload payloadA{_sr_item_sk671, _sr_ticket_number678L};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_11866_output.getInt64(i, 3);
        int32_t _ss_item_sk1208_k = tbl_Filter_TD_11866_output.getInt32(i, 1);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_10476_key{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11866_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_11866_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_Filter_TD_11866_output.getInt32(i, 2);
        int64_t _ss_ticket_number1215L = tbl_Filter_TD_11866_output.getInt64(i, 3);
        int32_t _ss_quantity1216 = tbl_Filter_TD_11866_output.getInt32(i, 4);
        int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_11866_output.getInt32(i, 5);
        int32_t _ss_sales_price1219 = tbl_Filter_TD_11866_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_10476_key{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _sr_item_sk671 = (it_it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it_it->second)._sr_ticket_number678L;
                tbl_JOIN_LEFTOUTER_TD_10476_output.setInt64(r, 6, _sr_ticket_number678L);
                tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 3, _ss_quantity1216);
                tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 4, _ss_wholesale_cost1217);
                tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 5, _ss_sales_price1219);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 0, _ss_sold_date_sk1206);
            tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 1, _ss_item_sk1208);
            tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 2, _ss_customer_sk1209);
            tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 3, _ss_quantity1216);
            tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 4, _ss_wholesale_cost1217);
            tbl_JOIN_LEFTOUTER_TD_10476_output.setInt32(r, 5, _ss_sales_price1219);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_10476_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_10476_output #Row: " << tbl_JOIN_LEFTOUTER_TD_10476_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_9235_key {
    int64_t _cr_order_number1039L;
    int32_t _cr_item_sk1025;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_9235_key& other) const {
        return ((_cr_order_number1039L == other._cr_order_number1039L) && (_cr_item_sk1025 == other._cr_item_sk1025));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_9235_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_9235_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._cr_order_number1039L)) + (hash<int32_t>()(k._cr_item_sk1025));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_9235_payload {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
};
void SW_JOIN_LEFTOUTER_TD_9235(Table &tbl_Filter_TD_1052_output, Table &tbl_Filter_TD_10805_output, Table &tbl_JOIN_LEFTOUTER_TD_9235_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((cr_order_number#1039L = cs_order_number#1121L) AND (cs_item_sk#1119 = cr_item_sk#1025)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125, cr_order_number#1039L)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_9235_key, SW_JOIN_LEFTOUTER_TD_9235_payload> ht1;
    int nrow1 = tbl_Filter_TD_10805_output.getNumRow();
    int nrow2 = tbl_Filter_TD_1052_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L_k = tbl_Filter_TD_10805_output.getInt64(i, 1);
        int32_t _cr_item_sk1025_k = tbl_Filter_TD_10805_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_9235_key keyA{_cr_order_number1039L_k, _cr_item_sk1025_k};
        int32_t _cr_item_sk1025 = tbl_Filter_TD_10805_output.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_Filter_TD_10805_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_9235_payload payloadA{_cr_item_sk1025, _cr_order_number1039L};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _cs_order_number1121L_k = tbl_Filter_TD_1052_output.getInt64(i, 3);
        int32_t _cs_item_sk1119_k = tbl_Filter_TD_1052_output.getInt32(i, 2);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_9235_key{_cs_order_number1121L_k, _cs_item_sk1119_k});
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_1052_output.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_1052_output.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_Filter_TD_1052_output.getInt32(i, 2);
        int64_t _cs_order_number1121L = tbl_Filter_TD_1052_output.getInt64(i, 3);
        int32_t _cs_quantity1122 = tbl_Filter_TD_1052_output.getInt32(i, 4);
        int32_t _cs_wholesale_cost1123 = tbl_Filter_TD_1052_output.getInt32(i, 5);
        int32_t _cs_sales_price1125 = tbl_Filter_TD_1052_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_9235_key{_cs_order_number1121L_k, _cs_item_sk1119_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cr_item_sk1025 = (it_it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it_it->second)._cr_order_number1039L;
                tbl_JOIN_LEFTOUTER_TD_9235_output.setInt64(r, 6, _cr_order_number1039L);
                tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 1, _cs_bill_customer_sk1107);
                tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 4, _cs_wholesale_cost1123);
                tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 5, _cs_sales_price1125);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 0, _cs_sold_date_sk1104);
            tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 1, _cs_bill_customer_sk1107);
            tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 2, _cs_item_sk1119);
            tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 3, _cs_quantity1122);
            tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 4, _cs_wholesale_cost1123);
            tbl_JOIN_LEFTOUTER_TD_9235_output.setInt32(r, 5, _cs_sales_price1125);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_9235_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_9235_output #Row: " << tbl_JOIN_LEFTOUTER_TD_9235_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9549(Table &tbl_SerializeFromObject_TD_10389_input, Table &tbl_Filter_TD_9549_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#120) AND ((d_year#126 = 2000) AND isnotnull(d_year#126))))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10389_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10389_input.getInt32(i, 0);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10389_input.getInt32(i, 1);
        if ((_d_date_sk120!= 0) && ((_d_year126 == 2000) && (_d_year126!= 0))) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10389_input.getInt32(i, 0);
            tbl_Filter_TD_9549_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_10389_input.getInt32(i, 1);
            tbl_Filter_TD_9549_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_9549_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9549_output #Row: " << tbl_Filter_TD_9549_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9126(Table &tbl_JOIN_LEFTOUTER_TD_10249_output, Table &tbl_Filter_TD_9126_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnull(wr_order_number#844L))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750, wr_order_number#844L)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_10249_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L = tbl_JOIN_LEFTOUTER_TD_10249_output.getInt64(i, 6);
        if _wr_order_number844L {
            int32_t _ws_sold_date_sk729_t = tbl_JOIN_LEFTOUTER_TD_10249_output.getInt32(i, 0);
            tbl_Filter_TD_9126_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_JOIN_LEFTOUTER_TD_10249_output.getInt32(i, 1);
            tbl_Filter_TD_9126_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_customer_sk733_t = tbl_JOIN_LEFTOUTER_TD_10249_output.getInt32(i, 2);
            tbl_Filter_TD_9126_output.setInt32(r, 2, _ws_bill_customer_sk733_t);
            int32_t _ws_quantity747_t = tbl_JOIN_LEFTOUTER_TD_10249_output.getInt32(i, 3);
            tbl_Filter_TD_9126_output.setInt32(r, 3, _ws_quantity747_t);
            int32_t _ws_wholesale_cost748_t = tbl_JOIN_LEFTOUTER_TD_10249_output.getInt32(i, 4);
            tbl_Filter_TD_9126_output.setInt32(r, 4, _ws_wholesale_cost748_t);
            int32_t _ws_sales_price750_t = tbl_JOIN_LEFTOUTER_TD_10249_output.getInt32(i, 5);
            tbl_Filter_TD_9126_output.setInt32(r, 5, _ws_sales_price750_t);
            r++;
        }
    }
    tbl_Filter_TD_9126_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9126_output #Row: " << tbl_Filter_TD_9126_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9780(Table &tbl_SerializeFromObject_TD_10346_input, Table &tbl_Filter_TD_9780_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#7671) AND (d_year#7671 = 2000)) AND isnotnull(d_date_sk#7665)))
    // Input: ListBuffer(d_date_sk#7665, d_year#7671)
    // Output: ListBuffer(d_date_sk#7665, d_year#7671)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10346_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year7671 = tbl_SerializeFromObject_TD_10346_input.getInt32(i, 1);
        int32_t _d_date_sk7665 = tbl_SerializeFromObject_TD_10346_input.getInt32(i, 0);
        if (((_d_year7671!= 0) && (_d_year7671 == 2000)) && (_d_date_sk7665!= 0)) {
            int32_t _d_date_sk7665_t = tbl_SerializeFromObject_TD_10346_input.getInt32(i, 0);
            tbl_Filter_TD_9780_output.setInt32(r, 0, _d_date_sk7665_t);
            int32_t _d_year7671_t = tbl_SerializeFromObject_TD_10346_input.getInt32(i, 1);
            tbl_Filter_TD_9780_output.setInt32(r, 1, _d_year7671_t);
            r++;
        }
    }
    tbl_Filter_TD_9780_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9780_output #Row: " << tbl_Filter_TD_9780_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9858(Table &tbl_JOIN_LEFTOUTER_TD_10476_output, Table &tbl_Filter_TD_9858_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnull(sr_ticket_number#678L))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219, sr_ticket_number#678L)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_10476_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L = tbl_JOIN_LEFTOUTER_TD_10476_output.getInt64(i, 6);
        if _sr_ticket_number678L {
            int32_t _ss_sold_date_sk1206_t = tbl_JOIN_LEFTOUTER_TD_10476_output.getInt32(i, 0);
            tbl_Filter_TD_9858_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_JOIN_LEFTOUTER_TD_10476_output.getInt32(i, 1);
            tbl_Filter_TD_9858_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_JOIN_LEFTOUTER_TD_10476_output.getInt32(i, 2);
            tbl_Filter_TD_9858_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int32_t _ss_quantity1216_t = tbl_JOIN_LEFTOUTER_TD_10476_output.getInt32(i, 3);
            tbl_Filter_TD_9858_output.setInt32(r, 3, _ss_quantity1216_t);
            int32_t _ss_wholesale_cost1217_t = tbl_JOIN_LEFTOUTER_TD_10476_output.getInt32(i, 4);
            tbl_Filter_TD_9858_output.setInt32(r, 4, _ss_wholesale_cost1217_t);
            int32_t _ss_sales_price1219_t = tbl_JOIN_LEFTOUTER_TD_10476_output.getInt32(i, 5);
            tbl_Filter_TD_9858_output.setInt32(r, 5, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_9858_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9858_output #Row: " << tbl_Filter_TD_9858_output.getNumRow() << std::endl;
}

void SW_Filter_TD_834(Table &tbl_SerializeFromObject_TD_92_input, Table &tbl_Filter_TD_834_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#7637) AND ((d_year#7643 = 2000) AND isnotnull(d_year#7643))))
    // Input: ListBuffer(d_date_sk#7637, d_year#7643)
    // Output: ListBuffer(d_date_sk#7637, d_year#7643)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_92_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk7637 = tbl_SerializeFromObject_TD_92_input.getInt32(i, 0);
        int32_t _d_year7643 = tbl_SerializeFromObject_TD_92_input.getInt32(i, 1);
        if ((_d_date_sk7637!= 0) && ((_d_year7643 == 2000) && (_d_year7643!= 0))) {
            int32_t _d_date_sk7637_t = tbl_SerializeFromObject_TD_92_input.getInt32(i, 0);
            tbl_Filter_TD_834_output.setInt32(r, 0, _d_date_sk7637_t);
            int32_t _d_year7643_t = tbl_SerializeFromObject_TD_92_input.getInt32(i, 1);
            tbl_Filter_TD_834_output.setInt32(r, 1, _d_year7643_t);
            r++;
        }
    }
    tbl_Filter_TD_834_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_834_output #Row: " << tbl_Filter_TD_834_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8793(Table &tbl_JOIN_LEFTOUTER_TD_9235_output, Table &tbl_Filter_TD_8793_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnull(cr_order_number#1039L))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125, cr_order_number#1039L)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_9235_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L = tbl_JOIN_LEFTOUTER_TD_9235_output.getInt64(i, 6);
        if _cr_order_number1039L {
            int32_t _cs_sold_date_sk1104_t = tbl_JOIN_LEFTOUTER_TD_9235_output.getInt32(i, 0);
            tbl_Filter_TD_8793_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_JOIN_LEFTOUTER_TD_9235_output.getInt32(i, 1);
            tbl_Filter_TD_8793_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_JOIN_LEFTOUTER_TD_9235_output.getInt32(i, 2);
            tbl_Filter_TD_8793_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_quantity1122_t = tbl_JOIN_LEFTOUTER_TD_9235_output.getInt32(i, 3);
            tbl_Filter_TD_8793_output.setInt32(r, 3, _cs_quantity1122_t);
            int32_t _cs_wholesale_cost1123_t = tbl_JOIN_LEFTOUTER_TD_9235_output.getInt32(i, 4);
            tbl_Filter_TD_8793_output.setInt32(r, 4, _cs_wholesale_cost1123_t);
            int32_t _cs_sales_price1125_t = tbl_JOIN_LEFTOUTER_TD_9235_output.getInt32(i, 5);
            tbl_Filter_TD_8793_output.setInt32(r, 5, _cs_sales_price1125_t);
            r++;
        }
    }
    tbl_Filter_TD_8793_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8793_output #Row: " << tbl_Filter_TD_8793_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8219_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_8219_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8219_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8219_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_8219_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_bill_customer_sk733;
    int32_t _ws_quantity747;
    int32_t _ws_wholesale_cost748;
    int32_t _ws_sales_price750;
};
struct SW_JOIN_INNER_TD_8219_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8219_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8219_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8219_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8219_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
void SW_JOIN_INNER_TD_8219(Table &tbl_Filter_TD_9126_output, Table &tbl_Filter_TD_9549_output, Table &tbl_JOIN_INNER_TD_8219_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126)
    // Output Table: ListBuffer(ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750, d_year#126)
    int left_nrow = tbl_Filter_TD_9126_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9549_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8219_key_leftMajor, SW_JOIN_INNER_TD_8219_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9126_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9126_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8219_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9126_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_9126_output.getInt32(i, 1);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_9126_output.getInt32(i, 2);
            int32_t _ws_quantity747 = tbl_Filter_TD_9126_output.getInt32(i, 3);
            int32_t _ws_wholesale_cost748 = tbl_Filter_TD_9126_output.getInt32(i, 4);
            int32_t _ws_sales_price750 = tbl_Filter_TD_9126_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8219_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_bill_customer_sk733, _ws_quantity747, _ws_wholesale_cost748, _ws_sales_price750};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9549_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9549_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8219_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_wholesale_cost748 = (it->second)._ws_wholesale_cost748;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int32_t _d_date_sk120 = tbl_Filter_TD_9549_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_9549_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 1, _ws_bill_customer_sk733);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 3, _ws_wholesale_cost748);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 4, _ws_sales_price750);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 5, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8219_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8219_key_rightMajor, SW_JOIN_INNER_TD_8219_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9549_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9549_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8219_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9549_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_9549_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8219_payload_rightMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9126_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9126_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8219_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9126_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_9126_output.getInt32(i, 1);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_9126_output.getInt32(i, 2);
                int32_t _ws_quantity747 = tbl_Filter_TD_9126_output.getInt32(i, 3);
                int32_t _ws_wholesale_cost748 = tbl_Filter_TD_9126_output.getInt32(i, 4);
                int32_t _ws_sales_price750 = tbl_Filter_TD_9126_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 5, _d_year126);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 1, _ws_bill_customer_sk733);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 3, _ws_wholesale_cost748);
                tbl_JOIN_INNER_TD_8219_output.setInt32(r, 4, _ws_sales_price750);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8219_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8219_output #Row: " << tbl_JOIN_INNER_TD_8219_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8185_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8185_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8185_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8185_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8185_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_quantity1216;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_8185_key_rightMajor {
    int32_t _d_date_sk7665;
    bool operator==(const SW_JOIN_INNER_TD_8185_key_rightMajor& other) const {
        return ((_d_date_sk7665 == other._d_date_sk7665));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8185_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8185_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7665));
    }
};
}
struct SW_JOIN_INNER_TD_8185_payload_rightMajor {
    int32_t _d_date_sk7665;
    int32_t _d_year7671;
};
void SW_JOIN_INNER_TD_8185(Table &tbl_Filter_TD_9858_output, Table &tbl_Filter_TD_9780_output, Table &tbl_JOIN_INNER_TD_8185_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#7665))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#7665, d_year#7671)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219, d_year#7671)
    int left_nrow = tbl_Filter_TD_9858_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9780_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8185_key_leftMajor, SW_JOIN_INNER_TD_8185_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9858_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9858_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8185_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9858_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9858_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_9858_output.getInt32(i, 2);
            int32_t _ss_quantity1216 = tbl_Filter_TD_9858_output.getInt32(i, 3);
            int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_9858_output.getInt32(i, 4);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_9858_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8185_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_quantity1216, _ss_wholesale_cost1217, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9780_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7665_k = tbl_Filter_TD_9780_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8185_key_leftMajor{_d_date_sk7665_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk7665 = tbl_Filter_TD_9780_output.getInt32(i, 0);
                int32_t _d_year7671 = tbl_Filter_TD_9780_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 3, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 4, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 5, _d_year7671);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8185_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8185_key_rightMajor, SW_JOIN_INNER_TD_8185_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9780_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7665_k = tbl_Filter_TD_9780_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8185_key_rightMajor keyA{_d_date_sk7665_k};
            int32_t _d_date_sk7665 = tbl_Filter_TD_9780_output.getInt32(i, 0);
            int32_t _d_year7671 = tbl_Filter_TD_9780_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8185_payload_rightMajor payloadA{_d_date_sk7665, _d_year7671};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9858_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9858_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8185_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7665 = (it->second)._d_date_sk7665;
                int32_t _d_year7671 = (it->second)._d_year7671;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9858_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9858_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_9858_output.getInt32(i, 2);
                int32_t _ss_quantity1216 = tbl_Filter_TD_9858_output.getInt32(i, 3);
                int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_9858_output.getInt32(i, 4);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_9858_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 5, _d_year7671);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 3, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_8185_output.setInt32(r, 4, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8185_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8185_output #Row: " << tbl_JOIN_INNER_TD_8185_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7771_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_7771_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7771_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7771_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_7771_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_wholesale_cost1123;
    int32_t _cs_sales_price1125;
};
struct SW_JOIN_INNER_TD_7771_key_rightMajor {
    int32_t _d_date_sk7637;
    bool operator==(const SW_JOIN_INNER_TD_7771_key_rightMajor& other) const {
        return ((_d_date_sk7637 == other._d_date_sk7637));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7771_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7771_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7637));
    }
};
}
struct SW_JOIN_INNER_TD_7771_payload_rightMajor {
    int32_t _d_date_sk7637;
    int32_t _d_year7643;
};
void SW_JOIN_INNER_TD_7771(Table &tbl_Filter_TD_8793_output, Table &tbl_Filter_TD_834_output, Table &tbl_JOIN_INNER_TD_7771_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#7637))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    // Right Table: ListBuffer(d_date_sk#7637, d_year#7643)
    // Output Table: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125, d_year#7643)
    int left_nrow = tbl_Filter_TD_8793_output.getNumRow();
    int right_nrow = tbl_Filter_TD_834_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7771_key_leftMajor, SW_JOIN_INNER_TD_7771_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8793_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8793_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7771_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8793_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8793_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_8793_output.getInt32(i, 2);
            int32_t _cs_quantity1122 = tbl_Filter_TD_8793_output.getInt32(i, 3);
            int32_t _cs_wholesale_cost1123 = tbl_Filter_TD_8793_output.getInt32(i, 4);
            int32_t _cs_sales_price1125 = tbl_Filter_TD_8793_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_7771_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_item_sk1119, _cs_quantity1122, _cs_wholesale_cost1123, _cs_sales_price1125};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_834_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7637_k = tbl_Filter_TD_834_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7771_key_leftMajor{_d_date_sk7637_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_wholesale_cost1123 = (it->second)._cs_wholesale_cost1123;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _d_date_sk7637 = tbl_Filter_TD_834_output.getInt32(i, 0);
                int32_t _d_year7643 = tbl_Filter_TD_834_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 3, _cs_wholesale_cost1123);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 5, _d_year7643);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7771_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7771_key_rightMajor, SW_JOIN_INNER_TD_7771_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_834_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7637_k = tbl_Filter_TD_834_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7771_key_rightMajor keyA{_d_date_sk7637_k};
            int32_t _d_date_sk7637 = tbl_Filter_TD_834_output.getInt32(i, 0);
            int32_t _d_year7643 = tbl_Filter_TD_834_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7771_payload_rightMajor payloadA{_d_date_sk7637, _d_year7643};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8793_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8793_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7771_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7637 = (it->second)._d_date_sk7637;
                int32_t _d_year7643 = (it->second)._d_year7643;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8793_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8793_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_8793_output.getInt32(i, 2);
                int32_t _cs_quantity1122 = tbl_Filter_TD_8793_output.getInt32(i, 3);
                int32_t _cs_wholesale_cost1123 = tbl_Filter_TD_8793_output.getInt32(i, 4);
                int32_t _cs_sales_price1125 = tbl_Filter_TD_8793_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 5, _d_year7643);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 3, _cs_wholesale_cost1123);
                tbl_JOIN_INNER_TD_7771_output.setInt32(r, 4, _cs_sales_price1125);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7771_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7771_output #Row: " << tbl_JOIN_INNER_TD_7771_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7321_key {
    int32_t _d_year126;
    int32_t _ws_item_sk732;
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_Aggregate_TD_7321_key& other) const { return (_d_year126 == other._d_year126) && (_ws_item_sk732 == other._ws_item_sk732) && (_ws_bill_customer_sk733 == other._ws_bill_customer_sk733); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7321_key> {
    std::size_t operator() (const SW_Aggregate_TD_7321_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._ws_item_sk732)) + (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_Aggregate_TD_7321_payload {
    int32_t _ws_sold_year7623;
    int32_t _ws_customer_sk7624;
    int64_t _ws_qty7625L_sum_0;
    int32_t _ws_wc7626_sum_1;
    int32_t _ws_sp7627_sum_2;
};
void SW_Aggregate_TD_7321(Table &tbl_JOIN_INNER_TD_8219_output, Table &tbl_Aggregate_TD_7321_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#126, ws_item_sk#732, ws_bill_customer_sk#733, d_year#126 AS ws_sold_year#7623, ws_bill_customer_sk#733 AS ws_customer_sk#7624, sum(ws_quantity#747) AS ws_qty#7625L, MakeDecimal(sum(UnscaledValue(ws_wholesale_cost#748)),17,2) AS ws_wc#7626, MakeDecimal(sum(UnscaledValue(ws_sales_price#750)),17,2) AS ws_sp#7627)
    // Input: ListBuffer(ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750, d_year#126)
    // Output: ListBuffer(ws_sold_year#7623, ws_item_sk#732, ws_customer_sk#7624, ws_qty#7625L, ws_wc#7626, ws_sp#7627)
    std::unordered_map<SW_Aggregate_TD_7321_key, SW_Aggregate_TD_7321_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8219_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_8219_output.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_8219_output.getInt32(i, 1);
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_8219_output.getInt32(i, 2);
        int32_t _ws_wholesale_cost748 = tbl_JOIN_INNER_TD_8219_output.getInt32(i, 3);
        int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_8219_output.getInt32(i, 4);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_8219_output.getInt32(i, 5);
        SW_Aggregate_TD_7321_key k{_d_year126, _ws_item_sk732, _ws_bill_customer_sk733};
        int32_t _ws_sold_year7623 = _d_year126;
        int32_t _ws_customer_sk7624 = _ws_bill_customer_sk733;
        int64_t _ws_qty7625L_sum_0 = _ws_quantity747;
        int64_t _ws_wc7626_sum_1 = _ws_wholesale_cost748;
        int64_t _ws_sp7627_sum_2 = _ws_sales_price750;
        SW_Aggregate_TD_7321_payload p{_ws_sold_year7623, _ws_customer_sk7624, _ws_qty7625L_sum_0, _ws_wc7626_sum_1, _ws_sp7627_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ws_qty7625L_sum_0 + _ws_qty7625L_sum_0;
            p._ws_qty7625L_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._ws_wc7626_sum_1 + _ws_wc7626_sum_1;
            p._ws_wc7626_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._ws_sp7627_sum_2 + _ws_sp7627_sum_2;
            p._ws_sp7627_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _d_year126 not required in the output table
        tbl_Aggregate_TD_7321_output.setInt32(r, 1, (it.first)._ws_item_sk732);
        // _ws_bill_customer_sk733 not required in the output table
        tbl_Aggregate_TD_7321_output.setInt32(r, 0, (it.second)._ws_sold_year7623);
        tbl_Aggregate_TD_7321_output.setInt32(r, 2, (it.second)._ws_customer_sk7624);
        int64_t _ws_qty7625L = (it.second)._ws_qty7625L_sum_0;
        tbl_Aggregate_TD_7321_output.setInt64(r, 3, _ws_qty7625L);
        int32_t _ws_wc7626 = (it.second)._ws_wc7626_sum_1;
        tbl_Aggregate_TD_7321_output.setInt32(r, 4, _ws_wc7626);
        int32_t _ws_sp7627 = (it.second)._ws_sp7627_sum_2;
        tbl_Aggregate_TD_7321_output.setInt32(r, 5, _ws_sp7627);
        ++r;
    }
    tbl_Aggregate_TD_7321_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7321_output #Row: " << tbl_Aggregate_TD_7321_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7725_key {
    int32_t _d_year7671;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_Aggregate_TD_7725_key& other) const { return (_d_year7671 == other._d_year7671) && (_ss_item_sk1208 == other._ss_item_sk1208) && (_ss_customer_sk1209 == other._ss_customer_sk1209); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7725_key> {
    std::size_t operator() (const SW_Aggregate_TD_7725_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year7671)) + (hash<int32_t>()(k._ss_item_sk1208)) + (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_Aggregate_TD_7725_payload {
    int32_t _ss_sold_year7633;
    int64_t _ss_qty7634L_sum_0;
    int32_t _ss_wc7635_sum_1;
    int32_t _ss_sp7636_sum_2;
};
void SW_Aggregate_TD_7725(Table &tbl_JOIN_INNER_TD_8185_output, Table &tbl_Aggregate_TD_7725_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#7671, ss_item_sk#1208, ss_customer_sk#1209, d_year#7671 AS ss_sold_year#7633, sum(ss_quantity#1216) AS ss_qty#7634L, MakeDecimal(sum(UnscaledValue(ss_wholesale_cost#1217)),17,2) AS ss_wc#7635, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS ss_sp#7636)
    // Input: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219, d_year#7671)
    // Output: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#7634L, ss_wc#7635, ss_sp#7636)
    std::unordered_map<SW_Aggregate_TD_7725_key, SW_Aggregate_TD_7725_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8185_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8185_output.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8185_output.getInt32(i, 1);
        int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_8185_output.getInt32(i, 2);
        int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_8185_output.getInt32(i, 3);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8185_output.getInt32(i, 4);
        int32_t _d_year7671 = tbl_JOIN_INNER_TD_8185_output.getInt32(i, 5);
        SW_Aggregate_TD_7725_key k{_d_year7671, _ss_item_sk1208, _ss_customer_sk1209};
        int32_t _ss_sold_year7633 = _d_year7671;
        int64_t _ss_qty7634L_sum_0 = _ss_quantity1216;
        int64_t _ss_wc7635_sum_1 = _ss_wholesale_cost1217;
        int64_t _ss_sp7636_sum_2 = _ss_sales_price1219;
        SW_Aggregate_TD_7725_payload p{_ss_sold_year7633, _ss_qty7634L_sum_0, _ss_wc7635_sum_1, _ss_sp7636_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ss_qty7634L_sum_0 + _ss_qty7634L_sum_0;
            p._ss_qty7634L_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._ss_wc7635_sum_1 + _ss_wc7635_sum_1;
            p._ss_wc7635_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._ss_sp7636_sum_2 + _ss_sp7636_sum_2;
            p._ss_sp7636_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _d_year7671 not required in the output table
        tbl_Aggregate_TD_7725_output.setInt32(r, 1, (it.first)._ss_item_sk1208);
        tbl_Aggregate_TD_7725_output.setInt32(r, 2, (it.first)._ss_customer_sk1209);
        tbl_Aggregate_TD_7725_output.setInt32(r, 0, (it.second)._ss_sold_year7633);
        int64_t _ss_qty7634L = (it.second)._ss_qty7634L_sum_0;
        tbl_Aggregate_TD_7725_output.setInt64(r, 3, _ss_qty7634L);
        int32_t _ss_wc7635 = (it.second)._ss_wc7635_sum_1;
        tbl_Aggregate_TD_7725_output.setInt32(r, 4, _ss_wc7635);
        int32_t _ss_sp7636 = (it.second)._ss_sp7636_sum_2;
        tbl_Aggregate_TD_7725_output.setInt32(r, 5, _ss_sp7636);
        ++r;
    }
    tbl_Aggregate_TD_7725_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7725_output #Row: " << tbl_Aggregate_TD_7725_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6830_key {
    int32_t _d_year7643;
    int32_t _cs_item_sk1119;
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_Aggregate_TD_6830_key& other) const { return (_d_year7643 == other._d_year7643) && (_cs_item_sk1119 == other._cs_item_sk1119) && (_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6830_key> {
    std::size_t operator() (const SW_Aggregate_TD_6830_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year7643)) + (hash<int32_t>()(k._cs_item_sk1119)) + (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_Aggregate_TD_6830_payload {
    int32_t _cs_sold_year7628;
    int32_t _cs_customer_sk7629;
    int64_t _cs_qty7630L_sum_0;
    int32_t _cs_wc7631_sum_1;
    int32_t _cs_sp7632_sum_2;
};
void SW_Aggregate_TD_6830(Table &tbl_JOIN_INNER_TD_7771_output, Table &tbl_Aggregate_TD_6830_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#7643, cs_item_sk#1119, cs_bill_customer_sk#1107, d_year#7643 AS cs_sold_year#7628, cs_bill_customer_sk#1107 AS cs_customer_sk#7629, sum(cs_quantity#1122) AS cs_qty#7630L, MakeDecimal(sum(UnscaledValue(cs_wholesale_cost#1123)),17,2) AS cs_wc#7631, MakeDecimal(sum(UnscaledValue(cs_sales_price#1125)),17,2) AS cs_sp#7632)
    // Input: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125, d_year#7643)
    // Output: ListBuffer(cs_sold_year#7628, cs_item_sk#1119, cs_customer_sk#7629, cs_qty#7630L, cs_wc#7631, cs_sp#7632)
    std::unordered_map<SW_Aggregate_TD_6830_key, SW_Aggregate_TD_6830_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7771_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7771_output.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7771_output.getInt32(i, 1);
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_7771_output.getInt32(i, 2);
        int32_t _cs_wholesale_cost1123 = tbl_JOIN_INNER_TD_7771_output.getInt32(i, 3);
        int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_7771_output.getInt32(i, 4);
        int32_t _d_year7643 = tbl_JOIN_INNER_TD_7771_output.getInt32(i, 5);
        SW_Aggregate_TD_6830_key k{_d_year7643, _cs_item_sk1119, _cs_bill_customer_sk1107};
        int32_t _cs_sold_year7628 = _d_year7643;
        int32_t _cs_customer_sk7629 = _cs_bill_customer_sk1107;
        int64_t _cs_qty7630L_sum_0 = _cs_quantity1122;
        int64_t _cs_wc7631_sum_1 = _cs_wholesale_cost1123;
        int64_t _cs_sp7632_sum_2 = _cs_sales_price1125;
        SW_Aggregate_TD_6830_payload p{_cs_sold_year7628, _cs_customer_sk7629, _cs_qty7630L_sum_0, _cs_wc7631_sum_1, _cs_sp7632_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._cs_qty7630L_sum_0 + _cs_qty7630L_sum_0;
            p._cs_qty7630L_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._cs_wc7631_sum_1 + _cs_wc7631_sum_1;
            p._cs_wc7631_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._cs_sp7632_sum_2 + _cs_sp7632_sum_2;
            p._cs_sp7632_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _d_year7643 not required in the output table
        tbl_Aggregate_TD_6830_output.setInt32(r, 1, (it.first)._cs_item_sk1119);
        // _cs_bill_customer_sk1107 not required in the output table
        tbl_Aggregate_TD_6830_output.setInt32(r, 0, (it.second)._cs_sold_year7628);
        tbl_Aggregate_TD_6830_output.setInt32(r, 2, (it.second)._cs_customer_sk7629);
        int64_t _cs_qty7630L = (it.second)._cs_qty7630L_sum_0;
        tbl_Aggregate_TD_6830_output.setInt64(r, 3, _cs_qty7630L);
        int32_t _cs_wc7631 = (it.second)._cs_wc7631_sum_1;
        tbl_Aggregate_TD_6830_output.setInt32(r, 4, _cs_wc7631);
        int32_t _cs_sp7632 = (it.second)._cs_sp7632_sum_2;
        tbl_Aggregate_TD_6830_output.setInt32(r, 5, _cs_sp7632);
        ++r;
    }
    tbl_Aggregate_TD_6830_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6830_output #Row: " << tbl_Aggregate_TD_6830_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_6900_key {
    int32_t _ws_sold_year7623;
    int32_t _ws_item_sk732;
    int32_t _ws_customer_sk7624;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_6900_key& other) const {
        return ((_ws_sold_year7623 == other._ws_sold_year7623) && (_ws_item_sk732 == other._ws_item_sk732) && (_ws_customer_sk7624 == other._ws_customer_sk7624));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_6900_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_6900_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_year7623)) + (hash<int32_t>()(k._ws_item_sk732)) + (hash<int32_t>()(k._ws_customer_sk7624));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_6900_payload {
    int32_t _ws_sold_year7623;
    int32_t _ws_item_sk732;
    int32_t _ws_customer_sk7624;
    int64_t _ws_qty7625L;
    int32_t _ws_wc7626;
    int32_t _ws_sp7627;
};
void SW_JOIN_LEFTOUTER_TD_6900(Table &tbl_Aggregate_TD_7725_output, Table &tbl_Aggregate_TD_7321_output, Table &tbl_JOIN_LEFTOUTER_TD_6900_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((((ws_sold_year#7623 = ss_sold_year#7633) AND (ws_item_sk#732 = ss_item_sk#1208)) AND (ws_customer_sk#7624 = ss_customer_sk#1209)))
    // Left Table: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#7634L, ss_wc#7635, ss_sp#7636)
    // Right Table: ListBuffer(ws_sold_year#7623, ws_item_sk#732, ws_customer_sk#7624, ws_qty#7625L, ws_wc#7626, ws_sp#7627)
    // Output Table: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#7634L, ss_wc#7635, ss_sp#7636, ws_qty#7625L, ws_wc#7626, ws_sp#7627)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_6900_key, SW_JOIN_LEFTOUTER_TD_6900_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_7321_output.getNumRow();
    int nrow2 = tbl_Aggregate_TD_7725_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_year7623_k = tbl_Aggregate_TD_7321_output.getInt32(i, 0);
        int32_t _ws_item_sk732_k = tbl_Aggregate_TD_7321_output.getInt32(i, 1);
        int32_t _ws_customer_sk7624_k = tbl_Aggregate_TD_7321_output.getInt32(i, 2);
        SW_JOIN_LEFTOUTER_TD_6900_key keyA{_ws_sold_year7623_k, _ws_item_sk732_k, _ws_customer_sk7624_k};
        int32_t _ws_sold_year7623 = tbl_Aggregate_TD_7321_output.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_Aggregate_TD_7321_output.getInt32(i, 1);
        int32_t _ws_customer_sk7624 = tbl_Aggregate_TD_7321_output.getInt32(i, 2);
        int64_t _ws_qty7625L = tbl_Aggregate_TD_7321_output.getInt64(i, 3);
        int32_t _ws_wc7626 = tbl_Aggregate_TD_7321_output.getInt32(i, 4);
        int32_t _ws_sp7627 = tbl_Aggregate_TD_7321_output.getInt32(i, 5);
        SW_JOIN_LEFTOUTER_TD_6900_payload payloadA{_ws_sold_year7623, _ws_item_sk732, _ws_customer_sk7624, _ws_qty7625L, _ws_wc7626, _ws_sp7627};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _ss_sold_year7633_k = tbl_Aggregate_TD_7725_output.getInt32(i, 0);
        int32_t _ss_item_sk1208_k = tbl_Aggregate_TD_7725_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209_k = tbl_Aggregate_TD_7725_output.getInt32(i, 2);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_6900_key{_ss_sold_year7633_k, _ss_item_sk1208_k, _ss_customer_sk1209_k});
        int32_t _ss_sold_year7633 = tbl_Aggregate_TD_7725_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Aggregate_TD_7725_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_Aggregate_TD_7725_output.getInt32(i, 2);
        int64_t _ss_qty7634L = tbl_Aggregate_TD_7725_output.getInt64(i, 3);
        int32_t _ss_wc7635 = tbl_Aggregate_TD_7725_output.getInt32(i, 4);
        int32_t _ss_sp7636 = tbl_Aggregate_TD_7725_output.getInt32(i, 5);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_6900_key{_ss_sold_year7633_k, _ss_item_sk1208_k, _ss_customer_sk1209_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _ws_sold_year7623 = (it_it->second)._ws_sold_year7623;
                int32_t _ws_item_sk732 = (it_it->second)._ws_item_sk732;
                int32_t _ws_customer_sk7624 = (it_it->second)._ws_customer_sk7624;
                int64_t _ws_qty7625L = (it_it->second)._ws_qty7625L;
                int32_t _ws_wc7626 = (it_it->second)._ws_wc7626;
                int32_t _ws_sp7627 = (it_it->second)._ws_sp7627;
                tbl_JOIN_LEFTOUTER_TD_6900_output.setInt64(r, 6, _ws_qty7625L);
                tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 7, _ws_wc7626);
                tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 8, _ws_sp7627);
                tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 0, _ss_sold_year7633);
                tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_LEFTOUTER_TD_6900_output.setInt64(r, 3, _ss_qty7634L);
                tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 4, _ss_wc7635);
                tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 5, _ss_sp7636);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 0, _ss_sold_year7633);
            tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 1, _ss_item_sk1208);
            tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 2, _ss_customer_sk1209);
            tbl_JOIN_LEFTOUTER_TD_6900_output.setInt64(r, 3, _ss_qty7634L);
            tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 4, _ss_wc7635);
            tbl_JOIN_LEFTOUTER_TD_6900_output.setInt32(r, 5, _ss_sp7636);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_6900_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_6900_output #Row: " << tbl_JOIN_LEFTOUTER_TD_6900_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_5298_key {
    int32_t _cs_sold_year7628;
    int32_t _cs_item_sk1119;
    int32_t _cs_customer_sk7629;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_5298_key& other) const {
        return ((_cs_sold_year7628 == other._cs_sold_year7628) && (_cs_item_sk1119 == other._cs_item_sk1119) && (_cs_customer_sk7629 == other._cs_customer_sk7629));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_5298_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_5298_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_year7628)) + (hash<int32_t>()(k._cs_item_sk1119)) + (hash<int32_t>()(k._cs_customer_sk7629));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_5298_payload {
    int32_t _cs_sold_year7628;
    int32_t _cs_item_sk1119;
    int32_t _cs_customer_sk7629;
    int64_t _cs_qty7630L;
    int32_t _cs_wc7631;
    int32_t _cs_sp7632;
};
void SW_JOIN_LEFTOUTER_TD_5298(Table &tbl_JOIN_LEFTOUTER_TD_6900_output, Table &tbl_Aggregate_TD_6830_output, Table &tbl_JOIN_LEFTOUTER_TD_5298_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((((cs_sold_year#7628 = ss_sold_year#7633) AND (cs_item_sk#1119 = ss_item_sk#1208)) AND (cs_customer_sk#7629 = ss_customer_sk#1209)))
    // Left Table: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#7634L, ss_wc#7635, ss_sp#7636, ws_qty#7625L, ws_wc#7626, ws_sp#7627)
    // Right Table: ListBuffer(cs_sold_year#7628, cs_item_sk#1119, cs_customer_sk#7629, cs_qty#7630L, cs_wc#7631, cs_sp#7632)
    // Output Table: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#7634L, ws_qty#7625L, cs_qty#7630L, ss_wc#7635, ss_sp#7636, ws_wc#7626, cs_wc#7631, ws_sp#7627, cs_sp#7632)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_5298_key, SW_JOIN_LEFTOUTER_TD_5298_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_6830_output.getNumRow();
    int nrow2 = tbl_JOIN_LEFTOUTER_TD_6900_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_year7628_k = tbl_Aggregate_TD_6830_output.getInt32(i, 0);
        int32_t _cs_item_sk1119_k = tbl_Aggregate_TD_6830_output.getInt32(i, 1);
        int32_t _cs_customer_sk7629_k = tbl_Aggregate_TD_6830_output.getInt32(i, 2);
        SW_JOIN_LEFTOUTER_TD_5298_key keyA{_cs_sold_year7628_k, _cs_item_sk1119_k, _cs_customer_sk7629_k};
        int32_t _cs_sold_year7628 = tbl_Aggregate_TD_6830_output.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_Aggregate_TD_6830_output.getInt32(i, 1);
        int32_t _cs_customer_sk7629 = tbl_Aggregate_TD_6830_output.getInt32(i, 2);
        int64_t _cs_qty7630L = tbl_Aggregate_TD_6830_output.getInt64(i, 3);
        int32_t _cs_wc7631 = tbl_Aggregate_TD_6830_output.getInt32(i, 4);
        int32_t _cs_sp7632 = tbl_Aggregate_TD_6830_output.getInt32(i, 5);
        SW_JOIN_LEFTOUTER_TD_5298_payload payloadA{_cs_sold_year7628, _cs_item_sk1119, _cs_customer_sk7629, _cs_qty7630L, _cs_wc7631, _cs_sp7632};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _ss_sold_year7633_k = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 0);
        int32_t _ss_item_sk1208_k = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209_k = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 2);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_5298_key{_ss_sold_year7633_k, _ss_item_sk1208_k, _ss_customer_sk1209_k});
        int32_t _ss_sold_year7633 = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 2);
        int64_t _ss_qty7634L = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt64(i, 3);
        int32_t _ss_wc7635 = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 4);
        int32_t _ss_sp7636 = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 5);
        int64_t _ws_qty7625L = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt64(i, 6);
        int32_t _ws_wc7626 = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 7);
        int32_t _ws_sp7627 = tbl_JOIN_LEFTOUTER_TD_6900_output.getInt32(i, 8);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_5298_key{_ss_sold_year7633_k, _ss_item_sk1208_k, _ss_customer_sk1209_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cs_sold_year7628 = (it_it->second)._cs_sold_year7628;
                int32_t _cs_item_sk1119 = (it_it->second)._cs_item_sk1119;
                int32_t _cs_customer_sk7629 = (it_it->second)._cs_customer_sk7629;
                int64_t _cs_qty7630L = (it_it->second)._cs_qty7630L;
                int32_t _cs_wc7631 = (it_it->second)._cs_wc7631;
                int32_t _cs_sp7632 = (it_it->second)._cs_sp7632;
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt64(r, 5, _cs_qty7630L);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 9, _cs_wc7631);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 11, _cs_sp7632);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 0, _ss_sold_year7633);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt64(r, 3, _ss_qty7634L);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 6, _ss_wc7635);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 7, _ss_sp7636);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt64(r, 4, _ws_qty7625L);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 8, _ws_wc7626);
                tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 10, _ws_sp7627);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 0, _ss_sold_year7633);
            tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 1, _ss_item_sk1208);
            tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 2, _ss_customer_sk1209);
            tbl_JOIN_LEFTOUTER_TD_5298_output.setInt64(r, 3, _ss_qty7634L);
            tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 6, _ss_wc7635);
            tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 7, _ss_sp7636);
            tbl_JOIN_LEFTOUTER_TD_5298_output.setInt64(r, 4, _ws_qty7625L);
            tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 8, _ws_wc7626);
            tbl_JOIN_LEFTOUTER_TD_5298_output.setInt32(r, 10, _ws_sp7627);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_5298_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_5298_output #Row: " << tbl_JOIN_LEFTOUTER_TD_5298_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4779(Table &tbl_JOIN_LEFTOUTER_TD_5298_output, Table &tbl_Filter_TD_4779_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((coalesce(ws_qty#7625L, 0) > 0) OR (coalesce(cs_qty#7630L, 0) > 0)))
    // Input: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#7634L, ws_qty#7625L, cs_qty#7630L, ss_wc#7635, ss_sp#7636, ws_wc#7626, cs_wc#7631, ws_sp#7627, cs_sp#7632)
    // Output: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#7634L, ws_qty#7625L, cs_qty#7630L, ss_wc#7635, ss_sp#7636, ws_wc#7626, cs_wc#7631, ws_sp#7627, cs_sp#7632)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_5298_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_qty7625L = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt64(i, 4);
        int64_t _cs_qty7630L = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt64(i, 5);
        if ((_ws_qty7625L > 0) || (_cs_qty7630L > 0)) {
            int32_t _ss_sold_year7633_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt32(i, 0);
            tbl_Filter_TD_4779_output.setInt32(r, 0, _ss_sold_year7633_t);
            int32_t _ss_item_sk1208_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt32(i, 1);
            tbl_Filter_TD_4779_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt32(i, 2);
            tbl_Filter_TD_4779_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int64_t _ss_qty7634L_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt64(i, 3);
            tbl_Filter_TD_4779_output.setInt64(r, 3, _ss_qty7634L_t);
            int64_t _ws_qty7625L_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt64(i, 4);
            tbl_Filter_TD_4779_output.setInt64(r, 4, _ws_qty7625L_t);
            int64_t _cs_qty7630L_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt64(i, 5);
            tbl_Filter_TD_4779_output.setInt64(r, 5, _cs_qty7630L_t);
            int32_t _ss_wc7635_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt32(i, 6);
            tbl_Filter_TD_4779_output.setInt32(r, 6, _ss_wc7635_t);
            int32_t _ss_sp7636_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt32(i, 7);
            tbl_Filter_TD_4779_output.setInt32(r, 7, _ss_sp7636_t);
            int32_t _ws_wc7626_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt32(i, 8);
            tbl_Filter_TD_4779_output.setInt32(r, 8, _ws_wc7626_t);
            int32_t _cs_wc7631_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt32(i, 9);
            tbl_Filter_TD_4779_output.setInt32(r, 9, _cs_wc7631_t);
            int32_t _ws_sp7627_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt32(i, 10);
            tbl_Filter_TD_4779_output.setInt32(r, 10, _ws_sp7627_t);
            int32_t _cs_sp7632_t = tbl_JOIN_LEFTOUTER_TD_5298_output.getInt32(i, 11);
            tbl_Filter_TD_4779_output.setInt32(r, 11, _cs_sp7632_t);
            r++;
        }
    }
    tbl_Filter_TD_4779_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4779_output #Row: " << tbl_Filter_TD_4779_output.getNumRow() << std::endl;
}

void SW_Project_TD_3298(Table &tbl_Filter_TD_4779_output, Table &tbl_Project_TD_3298_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(round((cast(ss_qty#7634L as double) / cast((coalesce(ws_qty#7625L, 0) + coalesce(cs_qty#7630L, 0)) as double)), 2) AS ratio#7616, ss_qty#7634L AS store_qty#7617L, ss_wc#7635 AS store_wholesale_cost#7618, ss_sp#7636 AS store_sales_price#7619, (coalesce(ws_qty#7625L, 0) + coalesce(cs_qty#7630L, 0)) AS other_chan_qty#7620L, CheckOverflow((promote_precision(cast(coalesce(ws_wc#7626, 0.00) as decimal(18,2))) + promote_precision(cast(coalesce(cs_wc#7631, 0.00) as decimal(18,2)))), DecimalType(18,2), true) AS other_chan_wholesale_cost#7621, CheckOverflow((promote_precision(cast(coalesce(ws_sp#7627, 0.00) as decimal(18,2))) + promote_precision(cast(coalesce(cs_sp#7632, 0.00) as decimal(18,2)))), DecimalType(18,2), true) AS other_chan_sales_price#7622)
    // Input: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#7634L, ws_qty#7625L, cs_qty#7630L, ss_wc#7635, ss_sp#7636, ws_wc#7626, cs_wc#7631, ws_sp#7627, cs_sp#7632)
    // Output: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ratio#7616, store_qty#7617L, store_wholesale_cost#7618, store_sales_price#7619, other_chan_qty#7620L, other_chan_wholesale_cost#7621, other_chan_sales_price#7622, ss_qty#7634L, ss_wc#7635, ss_sp#7636, ws_qty#7625L, cs_qty#7630L)
    int nrow1 = tbl_Filter_TD_4779_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_year7633 = tbl_Filter_TD_4779_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_4779_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_Filter_TD_4779_output.getInt32(i, 2);
        int64_t _ss_qty7634L = tbl_Filter_TD_4779_output.getInt64(i, 3);
        int64_t _ws_qty7625L = tbl_Filter_TD_4779_output.getInt64(i, 4);
        int64_t _cs_qty7630L = tbl_Filter_TD_4779_output.getInt64(i, 5);
        int32_t _ss_wc7635 = tbl_Filter_TD_4779_output.getInt32(i, 6);
        int32_t _ss_sp7636 = tbl_Filter_TD_4779_output.getInt32(i, 7);
        int32_t _ws_wc7626 = tbl_Filter_TD_4779_output.getInt32(i, 8);
        int32_t _cs_wc7631 = tbl_Filter_TD_4779_output.getInt32(i, 9);
        int32_t _ws_sp7627 = tbl_Filter_TD_4779_output.getInt32(i, 10);
        int32_t _cs_sp7632 = tbl_Filter_TD_4779_output.getInt32(i, 11);
        int64_t _ratio7616 = (_ss_qty7634L / (_ws_qty7625L + _cs_qty7630L));
        tbl_Project_TD_3298_output.setInt64(i, 3, _ratio7616);
        int64_t _store_qty7617L = _ss_qty7634L;
        tbl_Project_TD_3298_output.setInt64(i, 4, _store_qty7617L);
        int32_t _store_wholesale_cost7618 = _ss_wc7635;
        tbl_Project_TD_3298_output.setInt32(i, 5, _store_wholesale_cost7618);
        int32_t _store_sales_price7619 = _ss_sp7636;
        tbl_Project_TD_3298_output.setInt32(i, 6, _store_sales_price7619);
        int64_t _other_chan_qty7620L = (_ws_qty7625L + _cs_qty7630L);
        tbl_Project_TD_3298_output.setInt64(i, 7, _other_chan_qty7620L);
        int32_t _other_chan_wholesale_cost7621 = (_ws_wc7626 + _cs_wc7631);
        tbl_Project_TD_3298_output.setInt32(i, 8, _other_chan_wholesale_cost7621);
        int32_t _other_chan_sales_price7622 = (_ws_sp7627 + _cs_sp7632);
        tbl_Project_TD_3298_output.setInt32(i, 9, _other_chan_sales_price7622);
        tbl_Project_TD_3298_output.setInt32(i, 0, _ss_sold_year7633);
        tbl_Project_TD_3298_output.setInt32(i, 1, _ss_item_sk1208);
        tbl_Project_TD_3298_output.setInt32(i, 2, _ss_customer_sk1209);
        tbl_Project_TD_3298_output.setInt64(i, 10, _ss_qty7634L);
        tbl_Project_TD_3298_output.setInt32(i, 11, _ss_wc7635);
        tbl_Project_TD_3298_output.setInt32(i, 12, _ss_sp7636);
        tbl_Project_TD_3298_output.setInt64(i, 13, _ws_qty7625L);
        tbl_Project_TD_3298_output.setInt64(i, 14, _cs_qty7630L);
    }
    tbl_Project_TD_3298_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3298_output #Row: " << tbl_Project_TD_3298_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2372(Table &tbl_Project_TD_3298_output, Table &tbl_Sort_TD_2372_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ss_sold_year#7633 ASC NULLS FIRST, ss_item_sk#1208 ASC NULLS FIRST, ss_customer_sk#1209 ASC NULLS FIRST, ss_qty#7634L DESC NULLS LAST, ss_wc#7635 DESC NULLS LAST, ss_sp#7636 DESC NULLS LAST, other_chan_qty#7620L ASC NULLS FIRST, other_chan_wholesale_cost#7621 ASC NULLS FIRST, other_chan_sales_price#7622 ASC NULLS FIRST, round((cast(ss_qty#7634L as double) / cast(coalesce((ws_qty#7625L + cs_qty#7630L), 1) as double)), 2) ASC NULLS FIRST)
    // Input: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ratio#7616, store_qty#7617L, store_wholesale_cost#7618, store_sales_price#7619, other_chan_qty#7620L, other_chan_wholesale_cost#7621, other_chan_sales_price#7622, ss_qty#7634L, ss_wc#7635, ss_sp#7636, ws_qty#7625L, cs_qty#7630L)
    // Output: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ratio#7616, store_qty#7617L, store_wholesale_cost#7618, store_sales_price#7619, other_chan_qty#7620L, other_chan_wholesale_cost#7621, other_chan_sales_price#7622, ss_qty#7634L, ss_wc#7635, ss_sp#7636, ws_qty#7625L, cs_qty#7630L)
    struct SW_Sort_TD_2372Row {
        int32_t _ss_sold_year7633;
        int32_t _ss_item_sk1208;
        int32_t _ss_customer_sk1209;
        int64_t _ratio7616;
        int64_t _store_qty7617L;
        int32_t _store_wholesale_cost7618;
        int32_t _store_sales_price7619;
        int64_t _other_chan_qty7620L;
        int32_t _other_chan_wholesale_cost7621;
        int32_t _other_chan_sales_price7622;
        int64_t _ss_qty7634L;
        int32_t _ss_wc7635;
        int32_t _ss_sp7636;
        int64_t _ws_qty7625L;
        int64_t _cs_qty7630L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2372Row& a, const SW_Sort_TD_2372Row& b) const { return 
 (a._ss_sold_year7633 < b._ss_sold_year7633) || 
 ((a._ss_sold_year7633 == b._ss_sold_year7633) && (a._ss_item_sk1208 < b._ss_item_sk1208)) || 
 ((a._ss_sold_year7633 == b._ss_sold_year7633) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 < b._ss_customer_sk1209)) || 
 ((a._ss_sold_year7633 == b._ss_sold_year7633) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty7634L > b._ss_qty7634L)) || 
 ((a._ss_sold_year7633 == b._ss_sold_year7633) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty7634L == b._ss_qty7634L) && (a._ss_wc7635 > b._ss_wc7635)) || 
 ((a._ss_sold_year7633 == b._ss_sold_year7633) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty7634L == b._ss_qty7634L) && (a._ss_wc7635 == b._ss_wc7635) && (a._ss_sp7636 > b._ss_sp7636)) || 
 ((a._ss_sold_year7633 == b._ss_sold_year7633) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty7634L == b._ss_qty7634L) && (a._ss_wc7635 == b._ss_wc7635) && (a._ss_sp7636 == b._ss_sp7636) && (a._other_chan_qty7620L < b._other_chan_qty7620L)) || 
 ((a._ss_sold_year7633 == b._ss_sold_year7633) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty7634L == b._ss_qty7634L) && (a._ss_wc7635 == b._ss_wc7635) && (a._ss_sp7636 == b._ss_sp7636) && (a._other_chan_qty7620L == b._other_chan_qty7620L) && (a._other_chan_wholesale_cost7621 < b._other_chan_wholesale_cost7621)) || 
 ((a._ss_sold_year7633 == b._ss_sold_year7633) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty7634L == b._ss_qty7634L) && (a._ss_wc7635 == b._ss_wc7635) && (a._ss_sp7636 == b._ss_sp7636) && (a._other_chan_qty7620L == b._other_chan_qty7620L) && (a._other_chan_wholesale_cost7621 == b._other_chan_wholesale_cost7621) && (a._other_chan_sales_price7622 < b._other_chan_sales_price7622)) || 
 ((a._ss_sold_year7633 == b._ss_sold_year7633) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty7634L == b._ss_qty7634L) && (a._ss_wc7635 == b._ss_wc7635) && (a._ss_sp7636 == b._ss_sp7636) && (a._other_chan_qty7620L == b._other_chan_qty7620L) && (a._other_chan_wholesale_cost7621 == b._other_chan_wholesale_cost7621) && (a._other_chan_sales_price7622 == b._other_chan_sales_price7622) && ; 
}
    }SW_Sort_TD_2372_order; 

    int nrow1 = tbl_Project_TD_3298_output.getNumRow();
    std::vector<SW_Sort_TD_2372Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_year7633 = tbl_Project_TD_3298_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Project_TD_3298_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_Project_TD_3298_output.getInt32(i, 2);
        int64_t _ratio7616 = tbl_Project_TD_3298_output.getInt64(i, 3);
        int64_t _store_qty7617L = tbl_Project_TD_3298_output.getInt64(i, 4);
        int32_t _store_wholesale_cost7618 = tbl_Project_TD_3298_output.getInt32(i, 5);
        int32_t _store_sales_price7619 = tbl_Project_TD_3298_output.getInt32(i, 6);
        int64_t _other_chan_qty7620L = tbl_Project_TD_3298_output.getInt64(i, 7);
        int32_t _other_chan_wholesale_cost7621 = tbl_Project_TD_3298_output.getInt32(i, 8);
        int32_t _other_chan_sales_price7622 = tbl_Project_TD_3298_output.getInt32(i, 9);
        int64_t _ss_qty7634L = tbl_Project_TD_3298_output.getInt64(i, 10);
        int32_t _ss_wc7635 = tbl_Project_TD_3298_output.getInt32(i, 11);
        int32_t _ss_sp7636 = tbl_Project_TD_3298_output.getInt32(i, 12);
        int64_t _ws_qty7625L = tbl_Project_TD_3298_output.getInt64(i, 13);
        int64_t _cs_qty7630L = tbl_Project_TD_3298_output.getInt64(i, 14);
        SW_Sort_TD_2372Row t = {_ss_sold_year7633,_ss_item_sk1208,_ss_customer_sk1209,_ratio7616,_store_qty7617L,_store_wholesale_cost7618,_store_sales_price7619,_other_chan_qty7620L,_other_chan_wholesale_cost7621,_other_chan_sales_price7622,_ss_qty7634L,_ss_wc7635,_ss_sp7636,_ws_qty7625L,_cs_qty7630L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2372_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2372_output.setInt32(r, 0, it._ss_sold_year7633);
        tbl_Sort_TD_2372_output.setInt32(r, 1, it._ss_item_sk1208);
        tbl_Sort_TD_2372_output.setInt32(r, 2, it._ss_customer_sk1209);
        tbl_Sort_TD_2372_output.setInt64(r, 3, it._ratio7616);
        tbl_Sort_TD_2372_output.setInt64(r, 4, it._store_qty7617L);
        tbl_Sort_TD_2372_output.setInt32(r, 5, it._store_wholesale_cost7618);
        tbl_Sort_TD_2372_output.setInt32(r, 6, it._store_sales_price7619);
        tbl_Sort_TD_2372_output.setInt64(r, 7, it._other_chan_qty7620L);
        tbl_Sort_TD_2372_output.setInt32(r, 8, it._other_chan_wholesale_cost7621);
        tbl_Sort_TD_2372_output.setInt32(r, 9, it._other_chan_sales_price7622);
        tbl_Sort_TD_2372_output.setInt64(r, 10, it._ss_qty7634L);
        tbl_Sort_TD_2372_output.setInt32(r, 11, it._ss_wc7635);
        tbl_Sort_TD_2372_output.setInt32(r, 12, it._ss_sp7636);
        tbl_Sort_TD_2372_output.setInt64(r, 13, it._ws_qty7625L);
        tbl_Sort_TD_2372_output.setInt64(r, 14, it._cs_qty7630L);
        ++r;
    }
    tbl_Sort_TD_2372_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2372_output #Row: " << tbl_Sort_TD_2372_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1408(Table &tbl_Sort_TD_2372_output, Table &tbl_LocalLimit_TD_1408_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ratio#7616, store_qty#7617L, store_wholesale_cost#7618, store_sales_price#7619, other_chan_qty#7620L, other_chan_wholesale_cost#7621, other_chan_sales_price#7622, ss_qty#7634L, ss_wc#7635, ss_sp#7636, ws_qty#7625L, cs_qty#7630L)
    // Output: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ratio#7616, store_qty#7617L, store_wholesale_cost#7618, store_sales_price#7619, other_chan_qty#7620L, other_chan_wholesale_cost#7621, other_chan_sales_price#7622)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1408_output.setInt32(r, 0, tbl_Sort_TD_2372_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1408_output.setInt32(r, 1, tbl_Sort_TD_2372_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1408_output.setInt32(r, 2, tbl_Sort_TD_2372_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1408_output.setInt32(r, 3, tbl_Sort_TD_2372_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1408_output.setInt32(r, 4, tbl_Sort_TD_2372_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1408_output.setInt32(r, 5, tbl_Sort_TD_2372_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1408_output.setInt32(r, 6, tbl_Sort_TD_2372_output.getInt32(i, 6));
        tbl_LocalLimit_TD_1408_output.setInt32(r, 7, tbl_Sort_TD_2372_output.getInt64(i, 7));
        tbl_LocalLimit_TD_1408_output.setInt32(r, 8, tbl_Sort_TD_2372_output.getInt32(i, 8));
        tbl_LocalLimit_TD_1408_output.setInt32(r, 9, tbl_Sort_TD_2372_output.getInt32(i, 9));
        r++;
    }
    tbl_LocalLimit_TD_1408_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1408_output #Row: " << tbl_LocalLimit_TD_1408_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0911(Table &tbl_LocalLimit_TD_1408_output, Table &tbl_GlobalLimit_TD_0911_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ratio#7616, store_qty#7617L, store_wholesale_cost#7618, store_sales_price#7619, other_chan_qty#7620L, other_chan_wholesale_cost#7621, other_chan_sales_price#7622)
    // Output: ListBuffer(ss_sold_year#7633, ss_item_sk#1208, ss_customer_sk#1209, ratio#7616, store_qty#7617L, store_wholesale_cost#7618, store_sales_price#7619, other_chan_qty#7620L, other_chan_wholesale_cost#7621, other_chan_sales_price#7622)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 0, tbl_LocalLimit_TD_1408_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 1, tbl_LocalLimit_TD_1408_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 2, tbl_LocalLimit_TD_1408_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 3, tbl_LocalLimit_TD_1408_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 4, tbl_LocalLimit_TD_1408_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 5, tbl_LocalLimit_TD_1408_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 6, tbl_LocalLimit_TD_1408_output.getInt32(i, 6));
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 7, tbl_LocalLimit_TD_1408_output.getInt64(i, 7));
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 8, tbl_LocalLimit_TD_1408_output.getInt32(i, 8));
        tbl_GlobalLimit_TD_0911_output.setInt32(r, 9, tbl_LocalLimit_TD_1408_output.getInt32(i, 9));
        r++;
    }
    tbl_GlobalLimit_TD_0911_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0911_output #Row: " << tbl_GlobalLimit_TD_0911_output.getNumRow() << std::endl;
}

