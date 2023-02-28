#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_11539873(Table &tbl_SerializeFromObject_TD_12243999_input, Table &tbl_Filter_TD_11539873_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_order_number#844L) AND isnotnull(wr_item_sk#833)))
    // Input: ListBuffer(wr_item_sk#833, wr_order_number#844L)
    // Output: ListBuffer(wr_item_sk#833, wr_order_number#844L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12243999_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_12243999_input.getInt64(i, 1);
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_12243999_input.getInt32(i, 0);
        if ((_wr_order_number844L!= 0) && (_wr_item_sk833!= 0)) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_12243999_input.getInt32(i, 0);
            tbl_Filter_TD_11539873_output.setInt32(r, 0, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_12243999_input.getInt64(i, 1);
            tbl_Filter_TD_11539873_output.setInt64(r, 1, _wr_order_number844L_t);
            r++;
        }
    }
    tbl_Filter_TD_11539873_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11539873_output #Row: " << tbl_Filter_TD_11539873_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11582386(Table &tbl_SerializeFromObject_TD_12168737_input, Table &tbl_Filter_TD_11582386_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_item_sk#732)) AND isnotnull(ws_bill_customer_sk#733)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_order_number#746L, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_order_number#746L, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12168737_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_12168737_input.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_12168737_input.getInt32(i, 1);
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_12168737_input.getInt32(i, 2);
        if (((_ws_sold_date_sk729!= 0) && (_ws_item_sk732!= 0)) && (_ws_bill_customer_sk733!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_12168737_input.getInt32(i, 0);
            tbl_Filter_TD_11582386_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_12168737_input.getInt32(i, 1);
            tbl_Filter_TD_11582386_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_12168737_input.getInt32(i, 2);
            tbl_Filter_TD_11582386_output.setInt32(r, 2, _ws_bill_customer_sk733_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_12168737_input.getInt64(i, 3);
            tbl_Filter_TD_11582386_output.setInt64(r, 3, _ws_order_number746L_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_12168737_input.getInt32(i, 4);
            tbl_Filter_TD_11582386_output.setInt32(r, 4, _ws_quantity747_t);
            int32_t _ws_wholesale_cost748_t = tbl_SerializeFromObject_TD_12168737_input.getInt32(i, 5);
            tbl_Filter_TD_11582386_output.setInt32(r, 5, _ws_wholesale_cost748_t);
            int32_t _ws_sales_price750_t = tbl_SerializeFromObject_TD_12168737_input.getInt32(i, 6);
            tbl_Filter_TD_11582386_output.setInt32(r, 6, _ws_sales_price750_t);
            r++;
        }
    }
    tbl_Filter_TD_11582386_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11582386_output #Row: " << tbl_Filter_TD_11582386_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11384181(Table &tbl_SerializeFromObject_TD_12240311_input, Table &tbl_Filter_TD_11384181_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_ticket_number#678L) AND isnotnull(sr_item_sk#671)))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12240311_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_12240311_input.getInt64(i, 1);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_12240311_input.getInt32(i, 0);
        if ((_sr_ticket_number678L!= 0) && (_sr_item_sk671!= 0)) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_12240311_input.getInt32(i, 0);
            tbl_Filter_TD_11384181_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_12240311_input.getInt64(i, 1);
            tbl_Filter_TD_11384181_output.setInt64(r, 1, _sr_ticket_number678L_t);
            r++;
        }
    }
    tbl_Filter_TD_11384181_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11384181_output #Row: " << tbl_Filter_TD_11384181_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11462890(Table &tbl_SerializeFromObject_TD_12576811_input, Table &tbl_Filter_TD_11462890_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#1206))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12576811_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12576811_input.getInt32(i, 0);
        if (_ss_sold_date_sk1206!= 0) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12576811_input.getInt32(i, 0);
            tbl_Filter_TD_11462890_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_12576811_input.getInt32(i, 1);
            tbl_Filter_TD_11462890_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_12576811_input.getInt32(i, 2);
            tbl_Filter_TD_11462890_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_12576811_input.getInt64(i, 3);
            tbl_Filter_TD_11462890_output.setInt64(r, 3, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_12576811_input.getInt32(i, 4);
            tbl_Filter_TD_11462890_output.setInt32(r, 4, _ss_quantity1216_t);
            int32_t _ss_wholesale_cost1217_t = tbl_SerializeFromObject_TD_12576811_input.getInt32(i, 5);
            tbl_Filter_TD_11462890_output.setInt32(r, 5, _ss_wholesale_cost1217_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_12576811_input.getInt32(i, 6);
            tbl_Filter_TD_11462890_output.setInt32(r, 6, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_11462890_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11462890_output #Row: " << tbl_Filter_TD_11462890_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10577868(Table &tbl_SerializeFromObject_TD_11576532_input, Table &tbl_Filter_TD_10577868_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_order_number#1039L) AND isnotnull(cr_item_sk#1025)))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11576532_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_11576532_input.getInt64(i, 1);
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_11576532_input.getInt32(i, 0);
        if ((_cr_order_number1039L!= 0) && (_cr_item_sk1025!= 0)) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_11576532_input.getInt32(i, 0);
            tbl_Filter_TD_10577868_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_11576532_input.getInt64(i, 1);
            tbl_Filter_TD_10577868_output.setInt64(r, 1, _cr_order_number1039L_t);
            r++;
        }
    }
    tbl_Filter_TD_10577868_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10577868_output #Row: " << tbl_Filter_TD_10577868_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1046103(Table &tbl_SerializeFromObject_TD_11615208_input, Table &tbl_Filter_TD_1046103_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_bill_customer_sk#1107)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11615208_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_11615208_input.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_11615208_input.getInt32(i, 2);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_11615208_input.getInt32(i, 1);
        if (((_cs_sold_date_sk1104!= 0) && (_cs_item_sk1119!= 0)) && (_cs_bill_customer_sk1107!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_11615208_input.getInt32(i, 0);
            tbl_Filter_TD_1046103_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_11615208_input.getInt32(i, 1);
            tbl_Filter_TD_1046103_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_11615208_input.getInt32(i, 2);
            tbl_Filter_TD_1046103_output.setInt32(r, 2, _cs_item_sk1119_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_11615208_input.getInt64(i, 3);
            tbl_Filter_TD_1046103_output.setInt64(r, 3, _cs_order_number1121L_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_11615208_input.getInt32(i, 4);
            tbl_Filter_TD_1046103_output.setInt32(r, 4, _cs_quantity1122_t);
            int32_t _cs_wholesale_cost1123_t = tbl_SerializeFromObject_TD_11615208_input.getInt32(i, 5);
            tbl_Filter_TD_1046103_output.setInt32(r, 5, _cs_wholesale_cost1123_t);
            int32_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_11615208_input.getInt32(i, 6);
            tbl_Filter_TD_1046103_output.setInt32(r, 6, _cs_sales_price1125_t);
            r++;
        }
    }
    tbl_Filter_TD_1046103_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1046103_output #Row: " << tbl_Filter_TD_1046103_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_10713050_key {
    int64_t _wr_order_number844L;
    int32_t _wr_item_sk833;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_10713050_key& other) const {
        return ((_wr_order_number844L == other._wr_order_number844L) && (_wr_item_sk833 == other._wr_item_sk833));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_10713050_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_10713050_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._wr_order_number844L)) + (hash<int32_t>()(k._wr_item_sk833));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_10713050_payload {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
};
void SW_JOIN_LEFTOUTER_TD_10713050(Table &tbl_Filter_TD_11582386_output, Table &tbl_Filter_TD_11539873_output, Table &tbl_JOIN_LEFTOUTER_TD_10713050_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((wr_order_number#844L = ws_order_number#746L) AND (ws_item_sk#732 = wr_item_sk#833)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_order_number#746L, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    // Right Table: ListBuffer(wr_item_sk#833, wr_order_number#844L)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750, wr_order_number#844L)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_10713050_key, SW_JOIN_LEFTOUTER_TD_10713050_payload> ht1;
    int nrow1 = tbl_Filter_TD_11539873_output.getNumRow();
    int nrow2 = tbl_Filter_TD_11582386_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L_k = tbl_Filter_TD_11539873_output.getInt64(i, 1);
        int32_t _wr_item_sk833_k = tbl_Filter_TD_11539873_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_10713050_key keyA{_wr_order_number844L_k, _wr_item_sk833_k};
        int32_t _wr_item_sk833 = tbl_Filter_TD_11539873_output.getInt32(i, 0);
        int64_t _wr_order_number844L = tbl_Filter_TD_11539873_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_10713050_payload payloadA{_wr_item_sk833, _wr_order_number844L};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _ws_order_number746L_k = tbl_Filter_TD_11582386_output.getInt64(i, 3);
        int32_t _ws_item_sk732_k = tbl_Filter_TD_11582386_output.getInt32(i, 1);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_10713050_key{_ws_order_number746L_k, _ws_item_sk732_k});
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11582386_output.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_Filter_TD_11582386_output.getInt32(i, 1);
        int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_11582386_output.getInt32(i, 2);
        int64_t _ws_order_number746L = tbl_Filter_TD_11582386_output.getInt64(i, 3);
        int32_t _ws_quantity747 = tbl_Filter_TD_11582386_output.getInt32(i, 4);
        int32_t _ws_wholesale_cost748 = tbl_Filter_TD_11582386_output.getInt32(i, 5);
        int32_t _ws_sales_price750 = tbl_Filter_TD_11582386_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_10713050_key{_ws_order_number746L_k, _ws_item_sk732_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _wr_item_sk833 = (it_it->second)._wr_item_sk833;
                int64_t _wr_order_number844L = (it_it->second)._wr_order_number844L;
                tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt64(r, 6, _wr_order_number844L);
                tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 2, _ws_bill_customer_sk733);
                tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 3, _ws_quantity747);
                tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 4, _ws_wholesale_cost748);
                tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 5, _ws_sales_price750);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 0, _ws_sold_date_sk729);
            tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 1, _ws_item_sk732);
            tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 2, _ws_bill_customer_sk733);
            tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 3, _ws_quantity747);
            tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 4, _ws_wholesale_cost748);
            tbl_JOIN_LEFTOUTER_TD_10713050_output.setInt32(r, 5, _ws_sales_price750);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_10713050_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_10713050_output #Row: " << tbl_JOIN_LEFTOUTER_TD_10713050_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_10711537_key {
    int64_t _sr_ticket_number678L;
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_10711537_key& other) const {
        return ((_sr_ticket_number678L == other._sr_ticket_number678L) && (_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_10711537_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_10711537_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._sr_ticket_number678L)) + (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_10711537_payload {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
};
void SW_JOIN_LEFTOUTER_TD_10711537(Table &tbl_Filter_TD_11462890_output, Table &tbl_Filter_TD_11384181_output, Table &tbl_JOIN_LEFTOUTER_TD_10711537_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((sr_ticket_number#678L = ss_ticket_number#1215L) AND (ss_item_sk#1208 = sr_item_sk#671)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219, sr_ticket_number#678L)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_10711537_key, SW_JOIN_LEFTOUTER_TD_10711537_payload> ht1;
    int nrow1 = tbl_Filter_TD_11384181_output.getNumRow();
    int nrow2 = tbl_Filter_TD_11462890_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L_k = tbl_Filter_TD_11384181_output.getInt64(i, 1);
        int32_t _sr_item_sk671_k = tbl_Filter_TD_11384181_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_10711537_key keyA{_sr_ticket_number678L_k, _sr_item_sk671_k};
        int32_t _sr_item_sk671 = tbl_Filter_TD_11384181_output.getInt32(i, 0);
        int64_t _sr_ticket_number678L = tbl_Filter_TD_11384181_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_10711537_payload payloadA{_sr_item_sk671, _sr_ticket_number678L};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_11462890_output.getInt64(i, 3);
        int32_t _ss_item_sk1208_k = tbl_Filter_TD_11462890_output.getInt32(i, 1);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_10711537_key{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11462890_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_11462890_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_Filter_TD_11462890_output.getInt32(i, 2);
        int64_t _ss_ticket_number1215L = tbl_Filter_TD_11462890_output.getInt64(i, 3);
        int32_t _ss_quantity1216 = tbl_Filter_TD_11462890_output.getInt32(i, 4);
        int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_11462890_output.getInt32(i, 5);
        int32_t _ss_sales_price1219 = tbl_Filter_TD_11462890_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_10711537_key{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _sr_item_sk671 = (it_it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it_it->second)._sr_ticket_number678L;
                tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt64(r, 6, _sr_ticket_number678L);
                tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 3, _ss_quantity1216);
                tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 4, _ss_wholesale_cost1217);
                tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 5, _ss_sales_price1219);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 0, _ss_sold_date_sk1206);
            tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 1, _ss_item_sk1208);
            tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 2, _ss_customer_sk1209);
            tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 3, _ss_quantity1216);
            tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 4, _ss_wholesale_cost1217);
            tbl_JOIN_LEFTOUTER_TD_10711537_output.setInt32(r, 5, _ss_sales_price1219);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_10711537_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_10711537_output #Row: " << tbl_JOIN_LEFTOUTER_TD_10711537_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_9477366_key {
    int64_t _cr_order_number1039L;
    int32_t _cr_item_sk1025;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_9477366_key& other) const {
        return ((_cr_order_number1039L == other._cr_order_number1039L) && (_cr_item_sk1025 == other._cr_item_sk1025));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_9477366_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_9477366_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._cr_order_number1039L)) + (hash<int32_t>()(k._cr_item_sk1025));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_9477366_payload {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
};
void SW_JOIN_LEFTOUTER_TD_9477366(Table &tbl_Filter_TD_1046103_output, Table &tbl_Filter_TD_10577868_output, Table &tbl_JOIN_LEFTOUTER_TD_9477366_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((cr_order_number#1039L = cs_order_number#1121L) AND (cs_item_sk#1119 = cr_item_sk#1025)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125, cr_order_number#1039L)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_9477366_key, SW_JOIN_LEFTOUTER_TD_9477366_payload> ht1;
    int nrow1 = tbl_Filter_TD_10577868_output.getNumRow();
    int nrow2 = tbl_Filter_TD_1046103_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L_k = tbl_Filter_TD_10577868_output.getInt64(i, 1);
        int32_t _cr_item_sk1025_k = tbl_Filter_TD_10577868_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_9477366_key keyA{_cr_order_number1039L_k, _cr_item_sk1025_k};
        int32_t _cr_item_sk1025 = tbl_Filter_TD_10577868_output.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_Filter_TD_10577868_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_9477366_payload payloadA{_cr_item_sk1025, _cr_order_number1039L};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _cs_order_number1121L_k = tbl_Filter_TD_1046103_output.getInt64(i, 3);
        int32_t _cs_item_sk1119_k = tbl_Filter_TD_1046103_output.getInt32(i, 2);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_9477366_key{_cs_order_number1121L_k, _cs_item_sk1119_k});
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_1046103_output.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_1046103_output.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_Filter_TD_1046103_output.getInt32(i, 2);
        int64_t _cs_order_number1121L = tbl_Filter_TD_1046103_output.getInt64(i, 3);
        int32_t _cs_quantity1122 = tbl_Filter_TD_1046103_output.getInt32(i, 4);
        int32_t _cs_wholesale_cost1123 = tbl_Filter_TD_1046103_output.getInt32(i, 5);
        int32_t _cs_sales_price1125 = tbl_Filter_TD_1046103_output.getInt32(i, 6);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_9477366_key{_cs_order_number1121L_k, _cs_item_sk1119_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cr_item_sk1025 = (it_it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it_it->second)._cr_order_number1039L;
                tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt64(r, 6, _cr_order_number1039L);
                tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 1, _cs_bill_customer_sk1107);
                tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 4, _cs_wholesale_cost1123);
                tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 5, _cs_sales_price1125);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 0, _cs_sold_date_sk1104);
            tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 1, _cs_bill_customer_sk1107);
            tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 2, _cs_item_sk1119);
            tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 3, _cs_quantity1122);
            tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 4, _cs_wholesale_cost1123);
            tbl_JOIN_LEFTOUTER_TD_9477366_output.setInt32(r, 5, _cs_sales_price1125);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_9477366_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_9477366_output #Row: " << tbl_JOIN_LEFTOUTER_TD_9477366_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9978439(Table &tbl_SerializeFromObject_TD_103060_input, Table &tbl_Filter_TD_9978439_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#120) AND ((d_year#126 = 2000) AND isnotnull(d_year#126))))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_103060_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_103060_input.getInt32(i, 0);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_103060_input.getInt32(i, 1);
        if ((_d_date_sk120!= 0) && ((_d_year126 == 2000) && (_d_year126!= 0))) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_103060_input.getInt32(i, 0);
            tbl_Filter_TD_9978439_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_103060_input.getInt32(i, 1);
            tbl_Filter_TD_9978439_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_9978439_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9978439_output #Row: " << tbl_Filter_TD_9978439_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9397482(Table &tbl_JOIN_LEFTOUTER_TD_10713050_output, Table &tbl_Filter_TD_9397482_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnull(wr_order_number#844L))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750, wr_order_number#844L)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_10713050_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L = tbl_JOIN_LEFTOUTER_TD_10713050_output.getInt64(i, 6);
        if (_wr_order_number844L == 0) {
            int32_t _ws_sold_date_sk729_t = tbl_JOIN_LEFTOUTER_TD_10713050_output.getInt32(i, 0);
            tbl_Filter_TD_9397482_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_JOIN_LEFTOUTER_TD_10713050_output.getInt32(i, 1);
            tbl_Filter_TD_9397482_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_customer_sk733_t = tbl_JOIN_LEFTOUTER_TD_10713050_output.getInt32(i, 2);
            tbl_Filter_TD_9397482_output.setInt32(r, 2, _ws_bill_customer_sk733_t);
            int32_t _ws_quantity747_t = tbl_JOIN_LEFTOUTER_TD_10713050_output.getInt32(i, 3);
            tbl_Filter_TD_9397482_output.setInt32(r, 3, _ws_quantity747_t);
            int32_t _ws_wholesale_cost748_t = tbl_JOIN_LEFTOUTER_TD_10713050_output.getInt32(i, 4);
            tbl_Filter_TD_9397482_output.setInt32(r, 4, _ws_wholesale_cost748_t);
            int32_t _ws_sales_price750_t = tbl_JOIN_LEFTOUTER_TD_10713050_output.getInt32(i, 5);
            tbl_Filter_TD_9397482_output.setInt32(r, 5, _ws_sales_price750_t);
            r++;
        }
    }
    tbl_Filter_TD_9397482_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9397482_output #Row: " << tbl_Filter_TD_9397482_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9743359(Table &tbl_SerializeFromObject_TD_10904468_input, Table &tbl_Filter_TD_9743359_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#37643) AND (d_year#37643 = 2000)) AND isnotnull(d_date_sk#37637)))
    // Input: ListBuffer(d_date_sk#37637, d_year#37643)
    // Output: ListBuffer(d_date_sk#37637, d_year#37643)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10904468_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year37643 = tbl_SerializeFromObject_TD_10904468_input.getInt32(i, 1);
        int32_t _d_date_sk37637 = tbl_SerializeFromObject_TD_10904468_input.getInt32(i, 0);
        if (((_d_year37643!= 0) && (_d_year37643 == 2000)) && (_d_date_sk37637!= 0)) {
            int32_t _d_date_sk37637_t = tbl_SerializeFromObject_TD_10904468_input.getInt32(i, 0);
            tbl_Filter_TD_9743359_output.setInt32(r, 0, _d_date_sk37637_t);
            int32_t _d_year37643_t = tbl_SerializeFromObject_TD_10904468_input.getInt32(i, 1);
            tbl_Filter_TD_9743359_output.setInt32(r, 1, _d_year37643_t);
            r++;
        }
    }
    tbl_Filter_TD_9743359_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9743359_output #Row: " << tbl_Filter_TD_9743359_output.getNumRow() << std::endl;
}

void SW_Filter_TD_976570(Table &tbl_JOIN_LEFTOUTER_TD_10711537_output, Table &tbl_Filter_TD_976570_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnull(sr_ticket_number#678L))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219, sr_ticket_number#678L)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_10711537_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L = tbl_JOIN_LEFTOUTER_TD_10711537_output.getInt64(i, 6);
        if (_sr_ticket_number678L == 0) {
            int32_t _ss_sold_date_sk1206_t = tbl_JOIN_LEFTOUTER_TD_10711537_output.getInt32(i, 0);
            tbl_Filter_TD_976570_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_JOIN_LEFTOUTER_TD_10711537_output.getInt32(i, 1);
            tbl_Filter_TD_976570_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_JOIN_LEFTOUTER_TD_10711537_output.getInt32(i, 2);
            tbl_Filter_TD_976570_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int32_t _ss_quantity1216_t = tbl_JOIN_LEFTOUTER_TD_10711537_output.getInt32(i, 3);
            tbl_Filter_TD_976570_output.setInt32(r, 3, _ss_quantity1216_t);
            int32_t _ss_wholesale_cost1217_t = tbl_JOIN_LEFTOUTER_TD_10711537_output.getInt32(i, 4);
            tbl_Filter_TD_976570_output.setInt32(r, 4, _ss_wholesale_cost1217_t);
            int32_t _ss_sales_price1219_t = tbl_JOIN_LEFTOUTER_TD_10711537_output.getInt32(i, 5);
            tbl_Filter_TD_976570_output.setInt32(r, 5, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_976570_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_976570_output #Row: " << tbl_Filter_TD_976570_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8496883(Table &tbl_SerializeFromObject_TD_9179802_input, Table &tbl_Filter_TD_8496883_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#37609) AND ((d_year#37615 = 2000) AND isnotnull(d_year#37615))))
    // Input: ListBuffer(d_date_sk#37609, d_year#37615)
    // Output: ListBuffer(d_date_sk#37609, d_year#37615)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9179802_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk37609 = tbl_SerializeFromObject_TD_9179802_input.getInt32(i, 0);
        int32_t _d_year37615 = tbl_SerializeFromObject_TD_9179802_input.getInt32(i, 1);
        if ((_d_date_sk37609!= 0) && ((_d_year37615 == 2000) && (_d_year37615!= 0))) {
            int32_t _d_date_sk37609_t = tbl_SerializeFromObject_TD_9179802_input.getInt32(i, 0);
            tbl_Filter_TD_8496883_output.setInt32(r, 0, _d_date_sk37609_t);
            int32_t _d_year37615_t = tbl_SerializeFromObject_TD_9179802_input.getInt32(i, 1);
            tbl_Filter_TD_8496883_output.setInt32(r, 1, _d_year37615_t);
            r++;
        }
    }
    tbl_Filter_TD_8496883_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8496883_output #Row: " << tbl_Filter_TD_8496883_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8336378(Table &tbl_JOIN_LEFTOUTER_TD_9477366_output, Table &tbl_Filter_TD_8336378_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnull(cr_order_number#1039L))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125, cr_order_number#1039L)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_9477366_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L = tbl_JOIN_LEFTOUTER_TD_9477366_output.getInt64(i, 6);
        if (_cr_order_number1039L == 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_JOIN_LEFTOUTER_TD_9477366_output.getInt32(i, 0);
            tbl_Filter_TD_8336378_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_JOIN_LEFTOUTER_TD_9477366_output.getInt32(i, 1);
            tbl_Filter_TD_8336378_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_JOIN_LEFTOUTER_TD_9477366_output.getInt32(i, 2);
            tbl_Filter_TD_8336378_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_quantity1122_t = tbl_JOIN_LEFTOUTER_TD_9477366_output.getInt32(i, 3);
            tbl_Filter_TD_8336378_output.setInt32(r, 3, _cs_quantity1122_t);
            int32_t _cs_wholesale_cost1123_t = tbl_JOIN_LEFTOUTER_TD_9477366_output.getInt32(i, 4);
            tbl_Filter_TD_8336378_output.setInt32(r, 4, _cs_wholesale_cost1123_t);
            int32_t _cs_sales_price1125_t = tbl_JOIN_LEFTOUTER_TD_9477366_output.getInt32(i, 5);
            tbl_Filter_TD_8336378_output.setInt32(r, 5, _cs_sales_price1125_t);
            r++;
        }
    }
    tbl_Filter_TD_8336378_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8336378_output #Row: " << tbl_Filter_TD_8336378_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8757232_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_8757232_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8757232_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8757232_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_8757232_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_bill_customer_sk733;
    int32_t _ws_quantity747;
    int32_t _ws_wholesale_cost748;
    int32_t _ws_sales_price750;
};
struct SW_JOIN_INNER_TD_8757232_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8757232_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8757232_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8757232_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8757232_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
void SW_JOIN_INNER_TD_8757232(Table &tbl_Filter_TD_9397482_output, Table &tbl_Filter_TD_9978439_output, Table &tbl_JOIN_INNER_TD_8757232_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126)
    // Output Table: ListBuffer(ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750, d_year#126)
    int left_nrow = tbl_Filter_TD_9397482_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9978439_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8757232_key_leftMajor, SW_JOIN_INNER_TD_8757232_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9397482_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9397482_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8757232_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9397482_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_9397482_output.getInt32(i, 1);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_9397482_output.getInt32(i, 2);
            int32_t _ws_quantity747 = tbl_Filter_TD_9397482_output.getInt32(i, 3);
            int32_t _ws_wholesale_cost748 = tbl_Filter_TD_9397482_output.getInt32(i, 4);
            int32_t _ws_sales_price750 = tbl_Filter_TD_9397482_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8757232_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_bill_customer_sk733, _ws_quantity747, _ws_wholesale_cost748, _ws_sales_price750};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9978439_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9978439_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8757232_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_wholesale_cost748 = (it->second)._ws_wholesale_cost748;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int32_t _d_date_sk120 = tbl_Filter_TD_9978439_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_9978439_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 1, _ws_bill_customer_sk733);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 3, _ws_wholesale_cost748);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 4, _ws_sales_price750);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 5, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8757232_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8757232_key_rightMajor, SW_JOIN_INNER_TD_8757232_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9978439_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9978439_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8757232_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9978439_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_9978439_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8757232_payload_rightMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9397482_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9397482_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8757232_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9397482_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_9397482_output.getInt32(i, 1);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_9397482_output.getInt32(i, 2);
                int32_t _ws_quantity747 = tbl_Filter_TD_9397482_output.getInt32(i, 3);
                int32_t _ws_wholesale_cost748 = tbl_Filter_TD_9397482_output.getInt32(i, 4);
                int32_t _ws_sales_price750 = tbl_Filter_TD_9397482_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 5, _d_year126);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 1, _ws_bill_customer_sk733);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 3, _ws_wholesale_cost748);
                tbl_JOIN_INNER_TD_8757232_output.setInt32(r, 4, _ws_sales_price750);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8757232_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8757232_output #Row: " << tbl_JOIN_INNER_TD_8757232_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8502276_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8502276_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8502276_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8502276_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8502276_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_quantity1216;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_8502276_key_rightMajor {
    int32_t _d_date_sk37637;
    bool operator==(const SW_JOIN_INNER_TD_8502276_key_rightMajor& other) const {
        return ((_d_date_sk37637 == other._d_date_sk37637));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8502276_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8502276_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk37637));
    }
};
}
struct SW_JOIN_INNER_TD_8502276_payload_rightMajor {
    int32_t _d_date_sk37637;
    int32_t _d_year37643;
};
void SW_JOIN_INNER_TD_8502276(Table &tbl_Filter_TD_976570_output, Table &tbl_Filter_TD_9743359_output, Table &tbl_JOIN_INNER_TD_8502276_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#37637))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#37637, d_year#37643)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219, d_year#37643)
    int left_nrow = tbl_Filter_TD_976570_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9743359_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8502276_key_leftMajor, SW_JOIN_INNER_TD_8502276_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_976570_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_976570_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8502276_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_976570_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_976570_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_976570_output.getInt32(i, 2);
            int32_t _ss_quantity1216 = tbl_Filter_TD_976570_output.getInt32(i, 3);
            int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_976570_output.getInt32(i, 4);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_976570_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8502276_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_quantity1216, _ss_wholesale_cost1217, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9743359_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk37637_k = tbl_Filter_TD_9743359_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8502276_key_leftMajor{_d_date_sk37637_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk37637 = tbl_Filter_TD_9743359_output.getInt32(i, 0);
                int32_t _d_year37643 = tbl_Filter_TD_9743359_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 3, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 4, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 5, _d_year37643);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8502276_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8502276_key_rightMajor, SW_JOIN_INNER_TD_8502276_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9743359_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk37637_k = tbl_Filter_TD_9743359_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8502276_key_rightMajor keyA{_d_date_sk37637_k};
            int32_t _d_date_sk37637 = tbl_Filter_TD_9743359_output.getInt32(i, 0);
            int32_t _d_year37643 = tbl_Filter_TD_9743359_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8502276_payload_rightMajor payloadA{_d_date_sk37637, _d_year37643};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_976570_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_976570_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8502276_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk37637 = (it->second)._d_date_sk37637;
                int32_t _d_year37643 = (it->second)._d_year37643;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_976570_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_976570_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_976570_output.getInt32(i, 2);
                int32_t _ss_quantity1216 = tbl_Filter_TD_976570_output.getInt32(i, 3);
                int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_976570_output.getInt32(i, 4);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_976570_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 5, _d_year37643);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 3, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_8502276_output.setInt32(r, 4, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8502276_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8502276_output #Row: " << tbl_JOIN_INNER_TD_8502276_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7400734_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_7400734_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7400734_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7400734_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_7400734_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_wholesale_cost1123;
    int32_t _cs_sales_price1125;
};
struct SW_JOIN_INNER_TD_7400734_key_rightMajor {
    int32_t _d_date_sk37609;
    bool operator==(const SW_JOIN_INNER_TD_7400734_key_rightMajor& other) const {
        return ((_d_date_sk37609 == other._d_date_sk37609));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7400734_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7400734_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk37609));
    }
};
}
struct SW_JOIN_INNER_TD_7400734_payload_rightMajor {
    int32_t _d_date_sk37609;
    int32_t _d_year37615;
};
void SW_JOIN_INNER_TD_7400734(Table &tbl_Filter_TD_8336378_output, Table &tbl_Filter_TD_8496883_output, Table &tbl_JOIN_INNER_TD_7400734_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#37609))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125)
    // Right Table: ListBuffer(d_date_sk#37609, d_year#37615)
    // Output Table: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125, d_year#37615)
    int left_nrow = tbl_Filter_TD_8336378_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8496883_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7400734_key_leftMajor, SW_JOIN_INNER_TD_7400734_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8336378_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8336378_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7400734_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8336378_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8336378_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_8336378_output.getInt32(i, 2);
            int32_t _cs_quantity1122 = tbl_Filter_TD_8336378_output.getInt32(i, 3);
            int32_t _cs_wholesale_cost1123 = tbl_Filter_TD_8336378_output.getInt32(i, 4);
            int32_t _cs_sales_price1125 = tbl_Filter_TD_8336378_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_7400734_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_item_sk1119, _cs_quantity1122, _cs_wholesale_cost1123, _cs_sales_price1125};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8496883_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk37609_k = tbl_Filter_TD_8496883_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7400734_key_leftMajor{_d_date_sk37609_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_wholesale_cost1123 = (it->second)._cs_wholesale_cost1123;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _d_date_sk37609 = tbl_Filter_TD_8496883_output.getInt32(i, 0);
                int32_t _d_year37615 = tbl_Filter_TD_8496883_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 3, _cs_wholesale_cost1123);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 5, _d_year37615);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7400734_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7400734_key_rightMajor, SW_JOIN_INNER_TD_7400734_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8496883_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk37609_k = tbl_Filter_TD_8496883_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7400734_key_rightMajor keyA{_d_date_sk37609_k};
            int32_t _d_date_sk37609 = tbl_Filter_TD_8496883_output.getInt32(i, 0);
            int32_t _d_year37615 = tbl_Filter_TD_8496883_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7400734_payload_rightMajor payloadA{_d_date_sk37609, _d_year37615};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8336378_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8336378_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7400734_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk37609 = (it->second)._d_date_sk37609;
                int32_t _d_year37615 = (it->second)._d_year37615;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8336378_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8336378_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_8336378_output.getInt32(i, 2);
                int32_t _cs_quantity1122 = tbl_Filter_TD_8336378_output.getInt32(i, 3);
                int32_t _cs_wholesale_cost1123 = tbl_Filter_TD_8336378_output.getInt32(i, 4);
                int32_t _cs_sales_price1125 = tbl_Filter_TD_8336378_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 5, _d_year37615);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 3, _cs_wholesale_cost1123);
                tbl_JOIN_INNER_TD_7400734_output.setInt32(r, 4, _cs_sales_price1125);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7400734_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7400734_output #Row: " << tbl_JOIN_INNER_TD_7400734_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7868102_key {
    int32_t _d_year126;
    int32_t _ws_item_sk732;
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_Aggregate_TD_7868102_key& other) const { return (_d_year126 == other._d_year126) && (_ws_item_sk732 == other._ws_item_sk732) && (_ws_bill_customer_sk733 == other._ws_bill_customer_sk733); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7868102_key> {
    std::size_t operator() (const SW_Aggregate_TD_7868102_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._ws_item_sk732)) + (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_Aggregate_TD_7868102_payload {
    int32_t _ws_sold_year37595;
    int32_t _ws_customer_sk37596;
    int64_t _ws_qty37597L_sum_0;
    int32_t _ws_wc37598_sum_1;
    int32_t _ws_sp37599_sum_2;
};
void SW_Aggregate_TD_7868102(Table &tbl_JOIN_INNER_TD_8757232_output, Table &tbl_Aggregate_TD_7868102_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#126, ws_item_sk#732, ws_bill_customer_sk#733, d_year#126 AS ws_sold_year#37595, ws_bill_customer_sk#733 AS ws_customer_sk#37596, sum(ws_quantity#747) AS ws_qty#37597L, MakeDecimal(sum(UnscaledValue(ws_wholesale_cost#748)),17,2) AS ws_wc#37598, MakeDecimal(sum(UnscaledValue(ws_sales_price#750)),17,2) AS ws_sp#37599)
    // Input: ListBuffer(ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_wholesale_cost#748, ws_sales_price#750, d_year#126)
    // Output: ListBuffer(ws_sold_year#37595, ws_item_sk#732, ws_customer_sk#37596, ws_qty#37597L, ws_wc#37598, ws_sp#37599)
    std::unordered_map<SW_Aggregate_TD_7868102_key, SW_Aggregate_TD_7868102_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8757232_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_8757232_output.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_8757232_output.getInt32(i, 1);
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_8757232_output.getInt32(i, 2);
        int32_t _ws_wholesale_cost748 = tbl_JOIN_INNER_TD_8757232_output.getInt32(i, 3);
        int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_8757232_output.getInt32(i, 4);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_8757232_output.getInt32(i, 5);
        SW_Aggregate_TD_7868102_key k{_d_year126, _ws_item_sk732, _ws_bill_customer_sk733};
        int32_t _ws_sold_year37595 = _d_year126;
        int32_t _ws_customer_sk37596 = _ws_bill_customer_sk733;
        int64_t _ws_qty37597L_sum_0 = _ws_quantity747;
        int64_t _ws_wc37598_sum_1 = _ws_wholesale_cost748;
        int64_t _ws_sp37599_sum_2 = _ws_sales_price750;
        SW_Aggregate_TD_7868102_payload p{_ws_sold_year37595, _ws_customer_sk37596, _ws_qty37597L_sum_0, _ws_wc37598_sum_1, _ws_sp37599_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ws_qty37597L_sum_0 + _ws_qty37597L_sum_0;
            p._ws_qty37597L_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._ws_wc37598_sum_1 + _ws_wc37598_sum_1;
            p._ws_wc37598_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._ws_sp37599_sum_2 + _ws_sp37599_sum_2;
            p._ws_sp37599_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _d_year126 not required in the output table
        tbl_Aggregate_TD_7868102_output.setInt32(r, 1, (it.first)._ws_item_sk732);
        // _ws_bill_customer_sk733 not required in the output table
        tbl_Aggregate_TD_7868102_output.setInt32(r, 0, (it.second)._ws_sold_year37595);
        tbl_Aggregate_TD_7868102_output.setInt32(r, 2, (it.second)._ws_customer_sk37596);
        int64_t _ws_qty37597L = (it.second)._ws_qty37597L_sum_0;
        tbl_Aggregate_TD_7868102_output.setInt64(r, 3, _ws_qty37597L);
        int32_t _ws_wc37598 = (it.second)._ws_wc37598_sum_1;
        tbl_Aggregate_TD_7868102_output.setInt32(r, 4, _ws_wc37598);
        int32_t _ws_sp37599 = (it.second)._ws_sp37599_sum_2;
        tbl_Aggregate_TD_7868102_output.setInt32(r, 5, _ws_sp37599);
        ++r;
    }
    tbl_Aggregate_TD_7868102_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7868102_output #Row: " << tbl_Aggregate_TD_7868102_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7837729_key {
    int32_t _d_year37643;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_Aggregate_TD_7837729_key& other) const { return (_d_year37643 == other._d_year37643) && (_ss_item_sk1208 == other._ss_item_sk1208) && (_ss_customer_sk1209 == other._ss_customer_sk1209); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7837729_key> {
    std::size_t operator() (const SW_Aggregate_TD_7837729_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year37643)) + (hash<int32_t>()(k._ss_item_sk1208)) + (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_Aggregate_TD_7837729_payload {
    int32_t _ss_sold_year37605;
    int64_t _ss_qty37606L_sum_0;
    int32_t _ss_wc37607_sum_1;
    int32_t _ss_sp37608_sum_2;
};
void SW_Aggregate_TD_7837729(Table &tbl_JOIN_INNER_TD_8502276_output, Table &tbl_Aggregate_TD_7837729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#37643, ss_item_sk#1208, ss_customer_sk#1209, d_year#37643 AS ss_sold_year#37605, sum(ss_quantity#1216) AS ss_qty#37606L, MakeDecimal(sum(UnscaledValue(ss_wholesale_cost#1217)),17,2) AS ss_wc#37607, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS ss_sp#37608)
    // Input: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_quantity#1216, ss_wholesale_cost#1217, ss_sales_price#1219, d_year#37643)
    // Output: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#37606L, ss_wc#37607, ss_sp#37608)
    std::unordered_map<SW_Aggregate_TD_7837729_key, SW_Aggregate_TD_7837729_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8502276_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8502276_output.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8502276_output.getInt32(i, 1);
        int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_8502276_output.getInt32(i, 2);
        int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_8502276_output.getInt32(i, 3);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8502276_output.getInt32(i, 4);
        int32_t _d_year37643 = tbl_JOIN_INNER_TD_8502276_output.getInt32(i, 5);
        SW_Aggregate_TD_7837729_key k{_d_year37643, _ss_item_sk1208, _ss_customer_sk1209};
        int32_t _ss_sold_year37605 = _d_year37643;
        int64_t _ss_qty37606L_sum_0 = _ss_quantity1216;
        int64_t _ss_wc37607_sum_1 = _ss_wholesale_cost1217;
        int64_t _ss_sp37608_sum_2 = _ss_sales_price1219;
        SW_Aggregate_TD_7837729_payload p{_ss_sold_year37605, _ss_qty37606L_sum_0, _ss_wc37607_sum_1, _ss_sp37608_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ss_qty37606L_sum_0 + _ss_qty37606L_sum_0;
            p._ss_qty37606L_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._ss_wc37607_sum_1 + _ss_wc37607_sum_1;
            p._ss_wc37607_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._ss_sp37608_sum_2 + _ss_sp37608_sum_2;
            p._ss_sp37608_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _d_year37643 not required in the output table
        tbl_Aggregate_TD_7837729_output.setInt32(r, 1, (it.first)._ss_item_sk1208);
        tbl_Aggregate_TD_7837729_output.setInt32(r, 2, (it.first)._ss_customer_sk1209);
        tbl_Aggregate_TD_7837729_output.setInt32(r, 0, (it.second)._ss_sold_year37605);
        int64_t _ss_qty37606L = (it.second)._ss_qty37606L_sum_0;
        tbl_Aggregate_TD_7837729_output.setInt64(r, 3, _ss_qty37606L);
        int32_t _ss_wc37607 = (it.second)._ss_wc37607_sum_1;
        tbl_Aggregate_TD_7837729_output.setInt32(r, 4, _ss_wc37607);
        int32_t _ss_sp37608 = (it.second)._ss_sp37608_sum_2;
        tbl_Aggregate_TD_7837729_output.setInt32(r, 5, _ss_sp37608);
        ++r;
    }
    tbl_Aggregate_TD_7837729_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7837729_output #Row: " << tbl_Aggregate_TD_7837729_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6420558_key {
    int32_t _d_year37615;
    int32_t _cs_item_sk1119;
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_Aggregate_TD_6420558_key& other) const { return (_d_year37615 == other._d_year37615) && (_cs_item_sk1119 == other._cs_item_sk1119) && (_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6420558_key> {
    std::size_t operator() (const SW_Aggregate_TD_6420558_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year37615)) + (hash<int32_t>()(k._cs_item_sk1119)) + (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_Aggregate_TD_6420558_payload {
    int32_t _cs_sold_year37600;
    int32_t _cs_customer_sk37601;
    int64_t _cs_qty37602L_sum_0;
    int32_t _cs_wc37603_sum_1;
    int32_t _cs_sp37604_sum_2;
};
void SW_Aggregate_TD_6420558(Table &tbl_JOIN_INNER_TD_7400734_output, Table &tbl_Aggregate_TD_6420558_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#37615, cs_item_sk#1119, cs_bill_customer_sk#1107, d_year#37615 AS cs_sold_year#37600, cs_bill_customer_sk#1107 AS cs_customer_sk#37601, sum(cs_quantity#1122) AS cs_qty#37602L, MakeDecimal(sum(UnscaledValue(cs_wholesale_cost#1123)),17,2) AS cs_wc#37603, MakeDecimal(sum(UnscaledValue(cs_sales_price#1125)),17,2) AS cs_sp#37604)
    // Input: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_wholesale_cost#1123, cs_sales_price#1125, d_year#37615)
    // Output: ListBuffer(cs_sold_year#37600, cs_item_sk#1119, cs_customer_sk#37601, cs_qty#37602L, cs_wc#37603, cs_sp#37604)
    std::unordered_map<SW_Aggregate_TD_6420558_key, SW_Aggregate_TD_6420558_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7400734_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7400734_output.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7400734_output.getInt32(i, 1);
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_7400734_output.getInt32(i, 2);
        int32_t _cs_wholesale_cost1123 = tbl_JOIN_INNER_TD_7400734_output.getInt32(i, 3);
        int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_7400734_output.getInt32(i, 4);
        int32_t _d_year37615 = tbl_JOIN_INNER_TD_7400734_output.getInt32(i, 5);
        SW_Aggregate_TD_6420558_key k{_d_year37615, _cs_item_sk1119, _cs_bill_customer_sk1107};
        int32_t _cs_sold_year37600 = _d_year37615;
        int32_t _cs_customer_sk37601 = _cs_bill_customer_sk1107;
        int64_t _cs_qty37602L_sum_0 = _cs_quantity1122;
        int64_t _cs_wc37603_sum_1 = _cs_wholesale_cost1123;
        int64_t _cs_sp37604_sum_2 = _cs_sales_price1125;
        SW_Aggregate_TD_6420558_payload p{_cs_sold_year37600, _cs_customer_sk37601, _cs_qty37602L_sum_0, _cs_wc37603_sum_1, _cs_sp37604_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._cs_qty37602L_sum_0 + _cs_qty37602L_sum_0;
            p._cs_qty37602L_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._cs_wc37603_sum_1 + _cs_wc37603_sum_1;
            p._cs_wc37603_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._cs_sp37604_sum_2 + _cs_sp37604_sum_2;
            p._cs_sp37604_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _d_year37615 not required in the output table
        tbl_Aggregate_TD_6420558_output.setInt32(r, 1, (it.first)._cs_item_sk1119);
        // _cs_bill_customer_sk1107 not required in the output table
        tbl_Aggregate_TD_6420558_output.setInt32(r, 0, (it.second)._cs_sold_year37600);
        tbl_Aggregate_TD_6420558_output.setInt32(r, 2, (it.second)._cs_customer_sk37601);
        int64_t _cs_qty37602L = (it.second)._cs_qty37602L_sum_0;
        tbl_Aggregate_TD_6420558_output.setInt64(r, 3, _cs_qty37602L);
        int32_t _cs_wc37603 = (it.second)._cs_wc37603_sum_1;
        tbl_Aggregate_TD_6420558_output.setInt32(r, 4, _cs_wc37603);
        int32_t _cs_sp37604 = (it.second)._cs_sp37604_sum_2;
        tbl_Aggregate_TD_6420558_output.setInt32(r, 5, _cs_sp37604);
        ++r;
    }
    tbl_Aggregate_TD_6420558_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6420558_output #Row: " << tbl_Aggregate_TD_6420558_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_6331756_key {
    int32_t _ws_sold_year37595;
    int32_t _ws_item_sk732;
    int32_t _ws_customer_sk37596;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_6331756_key& other) const {
        return ((_ws_sold_year37595 == other._ws_sold_year37595) && (_ws_item_sk732 == other._ws_item_sk732) && (_ws_customer_sk37596 == other._ws_customer_sk37596));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_6331756_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_6331756_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_year37595)) + (hash<int32_t>()(k._ws_item_sk732)) + (hash<int32_t>()(k._ws_customer_sk37596));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_6331756_payload {
    int32_t _ws_sold_year37595;
    int32_t _ws_item_sk732;
    int32_t _ws_customer_sk37596;
    int64_t _ws_qty37597L;
    int32_t _ws_wc37598;
    int32_t _ws_sp37599;
};
void SW_JOIN_LEFTOUTER_TD_6331756(Table &tbl_Aggregate_TD_7837729_output, Table &tbl_Aggregate_TD_7868102_output, Table &tbl_JOIN_LEFTOUTER_TD_6331756_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((((ws_sold_year#37595 = ss_sold_year#37605) AND (ws_item_sk#732 = ss_item_sk#1208)) AND (ws_customer_sk#37596 = ss_customer_sk#1209)))
    // Left Table: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#37606L, ss_wc#37607, ss_sp#37608)
    // Right Table: ListBuffer(ws_sold_year#37595, ws_item_sk#732, ws_customer_sk#37596, ws_qty#37597L, ws_wc#37598, ws_sp#37599)
    // Output Table: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#37606L, ss_wc#37607, ss_sp#37608, ws_qty#37597L, ws_wc#37598, ws_sp#37599)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_6331756_key, SW_JOIN_LEFTOUTER_TD_6331756_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_7868102_output.getNumRow();
    int nrow2 = tbl_Aggregate_TD_7837729_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_year37595_k = tbl_Aggregate_TD_7868102_output.getInt32(i, 0);
        int32_t _ws_item_sk732_k = tbl_Aggregate_TD_7868102_output.getInt32(i, 1);
        int32_t _ws_customer_sk37596_k = tbl_Aggregate_TD_7868102_output.getInt32(i, 2);
        SW_JOIN_LEFTOUTER_TD_6331756_key keyA{_ws_sold_year37595_k, _ws_item_sk732_k, _ws_customer_sk37596_k};
        int32_t _ws_sold_year37595 = tbl_Aggregate_TD_7868102_output.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_Aggregate_TD_7868102_output.getInt32(i, 1);
        int32_t _ws_customer_sk37596 = tbl_Aggregate_TD_7868102_output.getInt32(i, 2);
        int64_t _ws_qty37597L = tbl_Aggregate_TD_7868102_output.getInt64(i, 3);
        int32_t _ws_wc37598 = tbl_Aggregate_TD_7868102_output.getInt32(i, 4);
        int32_t _ws_sp37599 = tbl_Aggregate_TD_7868102_output.getInt32(i, 5);
        SW_JOIN_LEFTOUTER_TD_6331756_payload payloadA{_ws_sold_year37595, _ws_item_sk732, _ws_customer_sk37596, _ws_qty37597L, _ws_wc37598, _ws_sp37599};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _ss_sold_year37605_k = tbl_Aggregate_TD_7837729_output.getInt32(i, 0);
        int32_t _ss_item_sk1208_k = tbl_Aggregate_TD_7837729_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209_k = tbl_Aggregate_TD_7837729_output.getInt32(i, 2);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_6331756_key{_ss_sold_year37605_k, _ss_item_sk1208_k, _ss_customer_sk1209_k});
        int32_t _ss_sold_year37605 = tbl_Aggregate_TD_7837729_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Aggregate_TD_7837729_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_Aggregate_TD_7837729_output.getInt32(i, 2);
        int64_t _ss_qty37606L = tbl_Aggregate_TD_7837729_output.getInt64(i, 3);
        int32_t _ss_wc37607 = tbl_Aggregate_TD_7837729_output.getInt32(i, 4);
        int32_t _ss_sp37608 = tbl_Aggregate_TD_7837729_output.getInt32(i, 5);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_6331756_key{_ss_sold_year37605_k, _ss_item_sk1208_k, _ss_customer_sk1209_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _ws_sold_year37595 = (it_it->second)._ws_sold_year37595;
                int32_t _ws_item_sk732 = (it_it->second)._ws_item_sk732;
                int32_t _ws_customer_sk37596 = (it_it->second)._ws_customer_sk37596;
                int64_t _ws_qty37597L = (it_it->second)._ws_qty37597L;
                int32_t _ws_wc37598 = (it_it->second)._ws_wc37598;
                int32_t _ws_sp37599 = (it_it->second)._ws_sp37599;
                tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt64(r, 6, _ws_qty37597L);
                tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 7, _ws_wc37598);
                tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 8, _ws_sp37599);
                tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 0, _ss_sold_year37605);
                tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt64(r, 3, _ss_qty37606L);
                tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 4, _ss_wc37607);
                tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 5, _ss_sp37608);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 0, _ss_sold_year37605);
            tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 1, _ss_item_sk1208);
            tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 2, _ss_customer_sk1209);
            tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt64(r, 3, _ss_qty37606L);
            tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 4, _ss_wc37607);
            tbl_JOIN_LEFTOUTER_TD_6331756_output.setInt32(r, 5, _ss_sp37608);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_6331756_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_6331756_output #Row: " << tbl_JOIN_LEFTOUTER_TD_6331756_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_5635267_key {
    int32_t _cs_sold_year37600;
    int32_t _cs_item_sk1119;
    int32_t _cs_customer_sk37601;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_5635267_key& other) const {
        return ((_cs_sold_year37600 == other._cs_sold_year37600) && (_cs_item_sk1119 == other._cs_item_sk1119) && (_cs_customer_sk37601 == other._cs_customer_sk37601));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_5635267_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_5635267_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_year37600)) + (hash<int32_t>()(k._cs_item_sk1119)) + (hash<int32_t>()(k._cs_customer_sk37601));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_5635267_payload {
    int32_t _cs_sold_year37600;
    int32_t _cs_item_sk1119;
    int32_t _cs_customer_sk37601;
    int64_t _cs_qty37602L;
    int32_t _cs_wc37603;
    int32_t _cs_sp37604;
};
void SW_JOIN_LEFTOUTER_TD_5635267(Table &tbl_JOIN_LEFTOUTER_TD_6331756_output, Table &tbl_Aggregate_TD_6420558_output, Table &tbl_JOIN_LEFTOUTER_TD_5635267_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((((cs_sold_year#37600 = ss_sold_year#37605) AND (cs_item_sk#1119 = ss_item_sk#1208)) AND (cs_customer_sk#37601 = ss_customer_sk#1209)))
    // Left Table: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#37606L, ss_wc#37607, ss_sp#37608, ws_qty#37597L, ws_wc#37598, ws_sp#37599)
    // Right Table: ListBuffer(cs_sold_year#37600, cs_item_sk#1119, cs_customer_sk#37601, cs_qty#37602L, cs_wc#37603, cs_sp#37604)
    // Output Table: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#37606L, ws_qty#37597L, cs_qty#37602L, ss_wc#37607, ss_sp#37608, ws_wc#37598, cs_wc#37603, ws_sp#37599, cs_sp#37604)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_5635267_key, SW_JOIN_LEFTOUTER_TD_5635267_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_6420558_output.getNumRow();
    int nrow2 = tbl_JOIN_LEFTOUTER_TD_6331756_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_year37600_k = tbl_Aggregate_TD_6420558_output.getInt32(i, 0);
        int32_t _cs_item_sk1119_k = tbl_Aggregate_TD_6420558_output.getInt32(i, 1);
        int32_t _cs_customer_sk37601_k = tbl_Aggregate_TD_6420558_output.getInt32(i, 2);
        SW_JOIN_LEFTOUTER_TD_5635267_key keyA{_cs_sold_year37600_k, _cs_item_sk1119_k, _cs_customer_sk37601_k};
        int32_t _cs_sold_year37600 = tbl_Aggregate_TD_6420558_output.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_Aggregate_TD_6420558_output.getInt32(i, 1);
        int32_t _cs_customer_sk37601 = tbl_Aggregate_TD_6420558_output.getInt32(i, 2);
        int64_t _cs_qty37602L = tbl_Aggregate_TD_6420558_output.getInt64(i, 3);
        int32_t _cs_wc37603 = tbl_Aggregate_TD_6420558_output.getInt32(i, 4);
        int32_t _cs_sp37604 = tbl_Aggregate_TD_6420558_output.getInt32(i, 5);
        SW_JOIN_LEFTOUTER_TD_5635267_payload payloadA{_cs_sold_year37600, _cs_item_sk1119, _cs_customer_sk37601, _cs_qty37602L, _cs_wc37603, _cs_sp37604};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _ss_sold_year37605_k = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 0);
        int32_t _ss_item_sk1208_k = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209_k = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 2);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_5635267_key{_ss_sold_year37605_k, _ss_item_sk1208_k, _ss_customer_sk1209_k});
        int32_t _ss_sold_year37605 = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 2);
        int64_t _ss_qty37606L = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt64(i, 3);
        int32_t _ss_wc37607 = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 4);
        int32_t _ss_sp37608 = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 5);
        int64_t _ws_qty37597L = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt64(i, 6);
        int32_t _ws_wc37598 = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 7);
        int32_t _ws_sp37599 = tbl_JOIN_LEFTOUTER_TD_6331756_output.getInt32(i, 8);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_5635267_key{_ss_sold_year37605_k, _ss_item_sk1208_k, _ss_customer_sk1209_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cs_sold_year37600 = (it_it->second)._cs_sold_year37600;
                int32_t _cs_item_sk1119 = (it_it->second)._cs_item_sk1119;
                int32_t _cs_customer_sk37601 = (it_it->second)._cs_customer_sk37601;
                int64_t _cs_qty37602L = (it_it->second)._cs_qty37602L;
                int32_t _cs_wc37603 = (it_it->second)._cs_wc37603;
                int32_t _cs_sp37604 = (it_it->second)._cs_sp37604;
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt64(r, 5, _cs_qty37602L);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 9, _cs_wc37603);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 11, _cs_sp37604);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 0, _ss_sold_year37605);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt64(r, 3, _ss_qty37606L);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 6, _ss_wc37607);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 7, _ss_sp37608);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt64(r, 4, _ws_qty37597L);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 8, _ws_wc37598);
                tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 10, _ws_sp37599);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 0, _ss_sold_year37605);
            tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 1, _ss_item_sk1208);
            tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 2, _ss_customer_sk1209);
            tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt64(r, 3, _ss_qty37606L);
            tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 6, _ss_wc37607);
            tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 7, _ss_sp37608);
            tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt64(r, 4, _ws_qty37597L);
            tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 8, _ws_wc37598);
            tbl_JOIN_LEFTOUTER_TD_5635267_output.setInt32(r, 10, _ws_sp37599);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_5635267_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_5635267_output #Row: " << tbl_JOIN_LEFTOUTER_TD_5635267_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4768320(Table &tbl_JOIN_LEFTOUTER_TD_5635267_output, Table &tbl_Filter_TD_4768320_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((coalesce(ws_qty#37597L, 0) > 0) OR (coalesce(cs_qty#37602L, 0) > 0)))
    // Input: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#37606L, ws_qty#37597L, cs_qty#37602L, ss_wc#37607, ss_sp#37608, ws_wc#37598, cs_wc#37603, ws_sp#37599, cs_sp#37604)
    // Output: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#37606L, ws_qty#37597L, cs_qty#37602L, ss_wc#37607, ss_sp#37608, ws_wc#37598, cs_wc#37603, ws_sp#37599, cs_sp#37604)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_5635267_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_qty37597L = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt64(i, 4);
        int64_t _cs_qty37602L = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt64(i, 5);
        if ((_ws_qty37597L > 0) || (_cs_qty37602L > 0)) {
            int32_t _ss_sold_year37605_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt32(i, 0);
            tbl_Filter_TD_4768320_output.setInt32(r, 0, _ss_sold_year37605_t);
            int32_t _ss_item_sk1208_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt32(i, 1);
            tbl_Filter_TD_4768320_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt32(i, 2);
            tbl_Filter_TD_4768320_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int64_t _ss_qty37606L_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt64(i, 3);
            tbl_Filter_TD_4768320_output.setInt64(r, 3, _ss_qty37606L_t);
            int64_t _ws_qty37597L_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt64(i, 4);
            tbl_Filter_TD_4768320_output.setInt64(r, 4, _ws_qty37597L_t);
            int64_t _cs_qty37602L_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt64(i, 5);
            tbl_Filter_TD_4768320_output.setInt64(r, 5, _cs_qty37602L_t);
            int32_t _ss_wc37607_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt32(i, 6);
            tbl_Filter_TD_4768320_output.setInt32(r, 6, _ss_wc37607_t);
            int32_t _ss_sp37608_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt32(i, 7);
            tbl_Filter_TD_4768320_output.setInt32(r, 7, _ss_sp37608_t);
            int32_t _ws_wc37598_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt32(i, 8);
            tbl_Filter_TD_4768320_output.setInt32(r, 8, _ws_wc37598_t);
            int32_t _cs_wc37603_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt32(i, 9);
            tbl_Filter_TD_4768320_output.setInt32(r, 9, _cs_wc37603_t);
            int32_t _ws_sp37599_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt32(i, 10);
            tbl_Filter_TD_4768320_output.setInt32(r, 10, _ws_sp37599_t);
            int32_t _cs_sp37604_t = tbl_JOIN_LEFTOUTER_TD_5635267_output.getInt32(i, 11);
            tbl_Filter_TD_4768320_output.setInt32(r, 11, _cs_sp37604_t);
            r++;
        }
    }
    tbl_Filter_TD_4768320_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4768320_output #Row: " << tbl_Filter_TD_4768320_output.getNumRow() << std::endl;
}

void SW_Project_TD_344674(Table &tbl_Filter_TD_4768320_output, Table &tbl_Project_TD_344674_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(round((cast(ss_qty#37606L as double) / cast((coalesce(ws_qty#37597L, 0) + coalesce(cs_qty#37602L, 0)) as double)), 2) AS ratio#37588, ss_qty#37606L AS store_qty#37589L, ss_wc#37607 AS store_wholesale_cost#37590, ss_sp#37608 AS store_sales_price#37591, (coalesce(ws_qty#37597L, 0) + coalesce(cs_qty#37602L, 0)) AS other_chan_qty#37592L, CheckOverflow((promote_precision(cast(coalesce(ws_wc#37598, 0.00) as decimal(18,2))) + promote_precision(cast(coalesce(cs_wc#37603, 0.00) as decimal(18,2)))), DecimalType(18,2), true) AS other_chan_wholesale_cost#37593, CheckOverflow((promote_precision(cast(coalesce(ws_sp#37599, 0.00) as decimal(18,2))) + promote_precision(cast(coalesce(cs_sp#37604, 0.00) as decimal(18,2)))), DecimalType(18,2), true) AS other_chan_sales_price#37594)
    // Input: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ss_qty#37606L, ws_qty#37597L, cs_qty#37602L, ss_wc#37607, ss_sp#37608, ws_wc#37598, cs_wc#37603, ws_sp#37599, cs_sp#37604)
    // Output: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ratio#37588, store_qty#37589L, store_wholesale_cost#37590, store_sales_price#37591, other_chan_qty#37592L, other_chan_wholesale_cost#37593, other_chan_sales_price#37594, ss_qty#37606L, ss_wc#37607, ss_sp#37608)
    int nrow1 = tbl_Filter_TD_4768320_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_year37605 = tbl_Filter_TD_4768320_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_4768320_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_Filter_TD_4768320_output.getInt32(i, 2);
        int64_t _ss_qty37606L = tbl_Filter_TD_4768320_output.getInt64(i, 3);
        int64_t _ws_qty37597L = tbl_Filter_TD_4768320_output.getInt64(i, 4);
        int64_t _cs_qty37602L = tbl_Filter_TD_4768320_output.getInt64(i, 5);
        int32_t _ss_wc37607 = tbl_Filter_TD_4768320_output.getInt32(i, 6);
        int32_t _ss_sp37608 = tbl_Filter_TD_4768320_output.getInt32(i, 7);
        int32_t _ws_wc37598 = tbl_Filter_TD_4768320_output.getInt32(i, 8);
        int32_t _cs_wc37603 = tbl_Filter_TD_4768320_output.getInt32(i, 9);
        int32_t _ws_sp37599 = tbl_Filter_TD_4768320_output.getInt32(i, 10);
        int32_t _cs_sp37604 = tbl_Filter_TD_4768320_output.getInt32(i, 11);
        int64_t _ratio37588 = (_ss_qty37606L / (_ws_qty37597L != 0 ? _ws_qty37597L : 0 + _cs_qty37602L != 0 ? _cs_qty37602L : 0));
        tbl_Project_TD_344674_output.setInt64(i, 3, _ratio37588);
        int64_t _store_qty37589L = _ss_qty37606L;
        tbl_Project_TD_344674_output.setInt64(i, 4, _store_qty37589L);
        int32_t _store_wholesale_cost37590 = _ss_wc37607;
        tbl_Project_TD_344674_output.setInt32(i, 5, _store_wholesale_cost37590);
        int32_t _store_sales_price37591 = _ss_sp37608;
        tbl_Project_TD_344674_output.setInt32(i, 6, _store_sales_price37591);
        int64_t _other_chan_qty37592L = (_ws_qty37597L != 0 ? _ws_qty37597L : 0 + _cs_qty37602L != 0 ? _cs_qty37602L : 0);
        tbl_Project_TD_344674_output.setInt64(i, 7, _other_chan_qty37592L);
        int32_t _other_chan_wholesale_cost37593 = (_ws_wc37598 != 0 ? _ws_wc37598 : 0.00 + _cs_wc37603 != 0 ? _cs_wc37603 : 0.00);
        tbl_Project_TD_344674_output.setInt32(i, 8, _other_chan_wholesale_cost37593);
        int32_t _other_chan_sales_price37594 = (_ws_sp37599 != 0 ? _ws_sp37599 : 0.00 + _cs_sp37604 != 0 ? _cs_sp37604 : 0.00);
        tbl_Project_TD_344674_output.setInt32(i, 9, _other_chan_sales_price37594);
        tbl_Project_TD_344674_output.setInt32(i, 0, _ss_sold_year37605);
        tbl_Project_TD_344674_output.setInt32(i, 1, _ss_item_sk1208);
        tbl_Project_TD_344674_output.setInt32(i, 2, _ss_customer_sk1209);
        tbl_Project_TD_344674_output.setInt64(i, 10, _ss_qty37606L);
        tbl_Project_TD_344674_output.setInt32(i, 11, _ss_wc37607);
        tbl_Project_TD_344674_output.setInt32(i, 12, _ss_sp37608);
    }
    tbl_Project_TD_344674_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_344674_output #Row: " << tbl_Project_TD_344674_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2283204(Table &tbl_Project_TD_344674_output, Table &tbl_Sort_TD_2283204_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ss_sold_year#37605 ASC NULLS FIRST, ss_item_sk#1208 ASC NULLS FIRST, ss_customer_sk#1209 ASC NULLS FIRST, ss_qty#37606L DESC NULLS LAST, ss_wc#37607 DESC NULLS LAST, ss_sp#37608 DESC NULLS LAST, other_chan_qty#37592L ASC NULLS FIRST, other_chan_wholesale_cost#37593 ASC NULLS FIRST, other_chan_sales_price#37594 ASC NULLS FIRST)
    // Input: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ratio#37588, store_qty#37589L, store_wholesale_cost#37590, store_sales_price#37591, other_chan_qty#37592L, other_chan_wholesale_cost#37593, other_chan_sales_price#37594, ss_qty#37606L, ss_wc#37607, ss_sp#37608)
    // Output: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ratio#37588, store_qty#37589L, store_wholesale_cost#37590, store_sales_price#37591, other_chan_qty#37592L, other_chan_wholesale_cost#37593, other_chan_sales_price#37594, ss_qty#37606L, ss_wc#37607, ss_sp#37608)
    struct SW_Sort_TD_2283204Row {
        int32_t _ss_sold_year37605;
        int32_t _ss_item_sk1208;
        int32_t _ss_customer_sk1209;
        int64_t _ratio37588;
        int64_t _store_qty37589L;
        int32_t _store_wholesale_cost37590;
        int32_t _store_sales_price37591;
        int64_t _other_chan_qty37592L;
        int32_t _other_chan_wholesale_cost37593;
        int32_t _other_chan_sales_price37594;
        int64_t _ss_qty37606L;
        int32_t _ss_wc37607;
        int32_t _ss_sp37608;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2283204Row& a, const SW_Sort_TD_2283204Row& b) const { return 
 (a._ss_sold_year37605 < b._ss_sold_year37605) || 
 ((a._ss_sold_year37605 == b._ss_sold_year37605) && (a._ss_item_sk1208 < b._ss_item_sk1208)) || 
 ((a._ss_sold_year37605 == b._ss_sold_year37605) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 < b._ss_customer_sk1209)) || 
 ((a._ss_sold_year37605 == b._ss_sold_year37605) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty37606L > b._ss_qty37606L)) || 
 ((a._ss_sold_year37605 == b._ss_sold_year37605) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty37606L == b._ss_qty37606L) && (a._ss_wc37607 > b._ss_wc37607)) || 
 ((a._ss_sold_year37605 == b._ss_sold_year37605) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty37606L == b._ss_qty37606L) && (a._ss_wc37607 == b._ss_wc37607) && (a._ss_sp37608 > b._ss_sp37608)) || 
 ((a._ss_sold_year37605 == b._ss_sold_year37605) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty37606L == b._ss_qty37606L) && (a._ss_wc37607 == b._ss_wc37607) && (a._ss_sp37608 == b._ss_sp37608) && (a._other_chan_qty37592L < b._other_chan_qty37592L)) || 
 ((a._ss_sold_year37605 == b._ss_sold_year37605) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty37606L == b._ss_qty37606L) && (a._ss_wc37607 == b._ss_wc37607) && (a._ss_sp37608 == b._ss_sp37608) && (a._other_chan_qty37592L == b._other_chan_qty37592L) && (a._other_chan_wholesale_cost37593 < b._other_chan_wholesale_cost37593)) || 
 ((a._ss_sold_year37605 == b._ss_sold_year37605) && (a._ss_item_sk1208 == b._ss_item_sk1208) && (a._ss_customer_sk1209 == b._ss_customer_sk1209) && (a._ss_qty37606L == b._ss_qty37606L) && (a._ss_wc37607 == b._ss_wc37607) && (a._ss_sp37608 == b._ss_sp37608) && (a._other_chan_qty37592L == b._other_chan_qty37592L) && (a._other_chan_wholesale_cost37593 == b._other_chan_wholesale_cost37593) && (a._other_chan_sales_price37594 < b._other_chan_sales_price37594)); 
}
    }SW_Sort_TD_2283204_order; 

    int nrow1 = tbl_Project_TD_344674_output.getNumRow();
    std::vector<SW_Sort_TD_2283204Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_year37605 = tbl_Project_TD_344674_output.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_Project_TD_344674_output.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_Project_TD_344674_output.getInt32(i, 2);
        int64_t _ratio37588 = tbl_Project_TD_344674_output.getInt64(i, 3);
        int64_t _store_qty37589L = tbl_Project_TD_344674_output.getInt64(i, 4);
        int32_t _store_wholesale_cost37590 = tbl_Project_TD_344674_output.getInt32(i, 5);
        int32_t _store_sales_price37591 = tbl_Project_TD_344674_output.getInt32(i, 6);
        int64_t _other_chan_qty37592L = tbl_Project_TD_344674_output.getInt64(i, 7);
        int32_t _other_chan_wholesale_cost37593 = tbl_Project_TD_344674_output.getInt32(i, 8);
        int32_t _other_chan_sales_price37594 = tbl_Project_TD_344674_output.getInt32(i, 9);
        int64_t _ss_qty37606L = tbl_Project_TD_344674_output.getInt64(i, 10);
        int32_t _ss_wc37607 = tbl_Project_TD_344674_output.getInt32(i, 11);
        int32_t _ss_sp37608 = tbl_Project_TD_344674_output.getInt32(i, 12);
        SW_Sort_TD_2283204Row t = {_ss_sold_year37605,_ss_item_sk1208,_ss_customer_sk1209,_ratio37588,_store_qty37589L,_store_wholesale_cost37590,_store_sales_price37591,_other_chan_qty37592L,_other_chan_wholesale_cost37593,_other_chan_sales_price37594,_ss_qty37606L,_ss_wc37607,_ss_sp37608};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2283204_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2283204_output.setInt32(r, 0, it._ss_sold_year37605);
        tbl_Sort_TD_2283204_output.setInt32(r, 1, it._ss_item_sk1208);
        tbl_Sort_TD_2283204_output.setInt32(r, 2, it._ss_customer_sk1209);
        tbl_Sort_TD_2283204_output.setInt64(r, 3, it._ratio37588);
        tbl_Sort_TD_2283204_output.setInt64(r, 4, it._store_qty37589L);
        tbl_Sort_TD_2283204_output.setInt32(r, 5, it._store_wholesale_cost37590);
        tbl_Sort_TD_2283204_output.setInt32(r, 6, it._store_sales_price37591);
        tbl_Sort_TD_2283204_output.setInt64(r, 7, it._other_chan_qty37592L);
        tbl_Sort_TD_2283204_output.setInt32(r, 8, it._other_chan_wholesale_cost37593);
        tbl_Sort_TD_2283204_output.setInt32(r, 9, it._other_chan_sales_price37594);
        tbl_Sort_TD_2283204_output.setInt64(r, 10, it._ss_qty37606L);
        tbl_Sort_TD_2283204_output.setInt32(r, 11, it._ss_wc37607);
        tbl_Sort_TD_2283204_output.setInt32(r, 12, it._ss_sp37608);
        ++r;
    }
    tbl_Sort_TD_2283204_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2283204_output #Row: " << tbl_Sort_TD_2283204_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1830181(Table &tbl_Sort_TD_2283204_output, Table &tbl_LocalLimit_TD_1830181_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ratio#37588, store_qty#37589L, store_wholesale_cost#37590, store_sales_price#37591, other_chan_qty#37592L, other_chan_wholesale_cost#37593, other_chan_sales_price#37594, ss_qty#37606L, ss_wc#37607, ss_sp#37608)
    // Output: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ratio#37588, store_qty#37589L, store_wholesale_cost#37590, store_sales_price#37591, other_chan_qty#37592L, other_chan_wholesale_cost#37593, other_chan_sales_price#37594)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1830181_output.setInt32(r, 0, tbl_Sort_TD_2283204_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1830181_output.setInt32(r, 1, tbl_Sort_TD_2283204_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1830181_output.setInt32(r, 2, tbl_Sort_TD_2283204_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1830181_output.setInt64(r, 3, tbl_Sort_TD_2283204_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1830181_output.setInt64(r, 4, tbl_Sort_TD_2283204_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1830181_output.setInt32(r, 5, tbl_Sort_TD_2283204_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1830181_output.setInt32(r, 6, tbl_Sort_TD_2283204_output.getInt32(i, 6));
        tbl_LocalLimit_TD_1830181_output.setInt64(r, 7, tbl_Sort_TD_2283204_output.getInt64(i, 7));
        tbl_LocalLimit_TD_1830181_output.setInt32(r, 8, tbl_Sort_TD_2283204_output.getInt32(i, 8));
        tbl_LocalLimit_TD_1830181_output.setInt32(r, 9, tbl_Sort_TD_2283204_output.getInt32(i, 9));
        r++;
    }
    tbl_LocalLimit_TD_1830181_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1830181_output #Row: " << tbl_LocalLimit_TD_1830181_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0719824(Table &tbl_LocalLimit_TD_1830181_output, Table &tbl_GlobalLimit_TD_0719824_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ratio#37588, store_qty#37589L, store_wholesale_cost#37590, store_sales_price#37591, other_chan_qty#37592L, other_chan_wholesale_cost#37593, other_chan_sales_price#37594)
    // Output: ListBuffer(ss_sold_year#37605, ss_item_sk#1208, ss_customer_sk#1209, ratio#37588, store_qty#37589L, store_wholesale_cost#37590, store_sales_price#37591, other_chan_qty#37592L, other_chan_wholesale_cost#37593, other_chan_sales_price#37594)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0719824_output.setInt32(r, 0, tbl_LocalLimit_TD_1830181_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0719824_output.setInt32(r, 1, tbl_LocalLimit_TD_1830181_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0719824_output.setInt32(r, 2, tbl_LocalLimit_TD_1830181_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0719824_output.setInt64(r, 3, tbl_LocalLimit_TD_1830181_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0719824_output.setInt64(r, 4, tbl_LocalLimit_TD_1830181_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0719824_output.setInt32(r, 5, tbl_LocalLimit_TD_1830181_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0719824_output.setInt32(r, 6, tbl_LocalLimit_TD_1830181_output.getInt32(i, 6));
        tbl_GlobalLimit_TD_0719824_output.setInt64(r, 7, tbl_LocalLimit_TD_1830181_output.getInt64(i, 7));
        tbl_GlobalLimit_TD_0719824_output.setInt32(r, 8, tbl_LocalLimit_TD_1830181_output.getInt32(i, 8));
        tbl_GlobalLimit_TD_0719824_output.setInt32(r, 9, tbl_LocalLimit_TD_1830181_output.getInt32(i, 9));
        r++;
    }
    tbl_GlobalLimit_TD_0719824_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0719824_output #Row: " << tbl_GlobalLimit_TD_0719824_output.getNumRow() << std::endl;
}

