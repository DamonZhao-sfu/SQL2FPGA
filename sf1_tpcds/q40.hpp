#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_8278181(Table &tbl_SerializeFromObject_TD_9170820_input, Table &tbl_Filter_TD_8278181_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_order_number#1039L) AND isnotnull(cr_item_sk#1025)))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_refunded_cash#1046)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_refunded_cash#1046)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9170820_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_9170820_input.getInt64(i, 1);
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_9170820_input.getInt32(i, 0);
        if ((_cr_order_number1039L!= 0) && (_cr_item_sk1025!= 0)) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_9170820_input.getInt32(i, 0);
            tbl_Filter_TD_8278181_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_9170820_input.getInt64(i, 1);
            tbl_Filter_TD_8278181_output.setInt64(r, 1, _cr_order_number1039L_t);
            int32_t _cr_refunded_cash1046_t = tbl_SerializeFromObject_TD_9170820_input.getInt32(i, 2);
            tbl_Filter_TD_8278181_output.setInt32(r, 2, _cr_refunded_cash1046_t);
            r++;
        }
    }
    tbl_Filter_TD_8278181_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8278181_output #Row: " << tbl_Filter_TD_8278181_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8693890(Table &tbl_SerializeFromObject_TD_9706750_input, Table &tbl_Filter_TD_8693890_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_warehouse_sk#1118) AND (isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_warehouse_sk#1118, cs_item_sk#1119, cs_order_number#1121L, cs_sales_price#1125)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_warehouse_sk#1118, cs_item_sk#1119, cs_order_number#1121L, cs_sales_price#1125)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9706750_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_warehouse_sk1118 = tbl_SerializeFromObject_TD_9706750_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_9706750_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9706750_input.getInt32(i, 0);
        if ((_cs_warehouse_sk1118!= 0) && ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9706750_input.getInt32(i, 0);
            tbl_Filter_TD_8693890_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_warehouse_sk1118_t = tbl_SerializeFromObject_TD_9706750_input.getInt32(i, 1);
            tbl_Filter_TD_8693890_output.setInt32(r, 1, _cs_warehouse_sk1118_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_9706750_input.getInt32(i, 2);
            tbl_Filter_TD_8693890_output.setInt32(r, 2, _cs_item_sk1119_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_9706750_input.getInt64(i, 3);
            tbl_Filter_TD_8693890_output.setInt64(r, 3, _cs_order_number1121L_t);
            int32_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_9706750_input.getInt32(i, 4);
            tbl_Filter_TD_8693890_output.setInt32(r, 4, _cs_sales_price1125_t);
            r++;
        }
    }
    tbl_Filter_TD_8693890_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8693890_output #Row: " << tbl_Filter_TD_8693890_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7165700(Table &tbl_SerializeFromObject_TD_8602090_input, Table &tbl_Filter_TD_7165700_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#495))
    // Input: ListBuffer(w_warehouse_sk#495, w_state#505)
    // Output: ListBuffer(w_warehouse_sk#495, w_state#505)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8602090_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_SerializeFromObject_TD_8602090_input.getInt32(i, 0);
        if (_w_warehouse_sk495!= 0) {
            int32_t _w_warehouse_sk495_t = tbl_SerializeFromObject_TD_8602090_input.getInt32(i, 0);
            tbl_Filter_TD_7165700_output.setInt32(r, 0, _w_warehouse_sk495_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_state505_t = tbl_SerializeFromObject_TD_8602090_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7165700_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_state505_t);
            r++;
        }
    }
    tbl_Filter_TD_7165700_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7165700_output #Row: " << tbl_Filter_TD_7165700_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_7427510_key {
    int64_t _cr_order_number1039L;
    int32_t _cr_item_sk1025;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_7427510_key& other) const {
        return ((_cr_order_number1039L == other._cr_order_number1039L) && (_cr_item_sk1025 == other._cr_item_sk1025));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_7427510_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_7427510_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._cr_order_number1039L)) + (hash<int32_t>()(k._cr_item_sk1025));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_7427510_payload {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    int32_t _cr_refunded_cash1046;
};
void SW_JOIN_LEFTOUTER_TD_7427510(Table &tbl_Filter_TD_8693890_output, Table &tbl_Filter_TD_8278181_output, Table &tbl_JOIN_LEFTOUTER_TD_7427510_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((cs_order_number#1121L = cr_order_number#1039L) AND (cs_item_sk#1119 = cr_item_sk#1025)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_warehouse_sk#1118, cs_item_sk#1119, cs_order_number#1121L, cs_sales_price#1125)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_refunded_cash#1046)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_warehouse_sk#1118, cs_item_sk#1119, cs_sales_price#1125, cr_refunded_cash#1046)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_7427510_key, SW_JOIN_LEFTOUTER_TD_7427510_payload> ht1;
    int nrow1 = tbl_Filter_TD_8278181_output.getNumRow();
    int nrow2 = tbl_Filter_TD_8693890_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L_k = tbl_Filter_TD_8278181_output.getInt64(i, 1);
        int32_t _cr_item_sk1025_k = tbl_Filter_TD_8278181_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_7427510_key keyA{_cr_order_number1039L_k, _cr_item_sk1025_k};
        int32_t _cr_item_sk1025 = tbl_Filter_TD_8278181_output.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_Filter_TD_8278181_output.getInt64(i, 1);
        int32_t _cr_refunded_cash1046 = tbl_Filter_TD_8278181_output.getInt32(i, 2);
        SW_JOIN_LEFTOUTER_TD_7427510_payload payloadA{_cr_item_sk1025, _cr_order_number1039L, _cr_refunded_cash1046};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _cs_order_number1121L_k = tbl_Filter_TD_8693890_output.getInt64(i, 3);
        int32_t _cs_item_sk1119_k = tbl_Filter_TD_8693890_output.getInt32(i, 2);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_7427510_key{_cs_order_number1121L_k, _cs_item_sk1119_k});
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8693890_output.getInt32(i, 0);
        int32_t _cs_warehouse_sk1118 = tbl_Filter_TD_8693890_output.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_Filter_TD_8693890_output.getInt32(i, 2);
        int64_t _cs_order_number1121L = tbl_Filter_TD_8693890_output.getInt64(i, 3);
        int32_t _cs_sales_price1125 = tbl_Filter_TD_8693890_output.getInt32(i, 4);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_7427510_key{_cs_order_number1121L_k, _cs_item_sk1119_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cr_item_sk1025 = (it_it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it_it->second)._cr_order_number1039L;
                int32_t _cr_refunded_cash1046 = (it_it->second)._cr_refunded_cash1046;
                tbl_JOIN_LEFTOUTER_TD_7427510_output.setInt32(r, 4, _cr_refunded_cash1046);
                tbl_JOIN_LEFTOUTER_TD_7427510_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_LEFTOUTER_TD_7427510_output.setInt32(r, 1, _cs_warehouse_sk1118);
                tbl_JOIN_LEFTOUTER_TD_7427510_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_LEFTOUTER_TD_7427510_output.setInt32(r, 3, _cs_sales_price1125);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_7427510_output.setInt32(r, 0, _cs_sold_date_sk1104);
            tbl_JOIN_LEFTOUTER_TD_7427510_output.setInt32(r, 1, _cs_warehouse_sk1118);
            tbl_JOIN_LEFTOUTER_TD_7427510_output.setInt32(r, 2, _cs_item_sk1119);
            tbl_JOIN_LEFTOUTER_TD_7427510_output.setInt32(r, 3, _cs_sales_price1125);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_7427510_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_7427510_output #Row: " << tbl_JOIN_LEFTOUTER_TD_7427510_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6471903(Table &tbl_SerializeFromObject_TD_7239257_input, Table &tbl_Filter_TD_6471903_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#233) AND ((i_current_price#233 >= 0.99) AND (i_current_price#233 <= 1.49))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229, i_current_price#233)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7239257_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_SerializeFromObject_TD_7239257_input.getInt32(i, 2);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7239257_input.getInt32(i, 0);
        if (((_i_current_price233!= 0) && ((_i_current_price233 >= 0.99) && (_i_current_price233 <= 1.49))) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7239257_input.getInt32(i, 0);
            tbl_Filter_TD_6471903_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_7239257_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6471903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_6471903_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6471903_output #Row: " << tbl_Filter_TD_6471903_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6297350_key_leftMajor {
    int32_t _cs_warehouse_sk1118;
    bool operator==(const SW_JOIN_INNER_TD_6297350_key_leftMajor& other) const {
        return ((_cs_warehouse_sk1118 == other._cs_warehouse_sk1118));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6297350_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6297350_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_warehouse_sk1118));
    }
};
}
struct SW_JOIN_INNER_TD_6297350_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_warehouse_sk1118;
    int32_t _cs_item_sk1119;
    int32_t _cs_sales_price1125;
    int32_t _cr_refunded_cash1046;
};
struct SW_JOIN_INNER_TD_6297350_key_rightMajor {
    int32_t _w_warehouse_sk495;
    bool operator==(const SW_JOIN_INNER_TD_6297350_key_rightMajor& other) const {
        return ((_w_warehouse_sk495 == other._w_warehouse_sk495));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6297350_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6297350_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk495));
    }
};
}
struct SW_JOIN_INNER_TD_6297350_payload_rightMajor {
    int32_t _w_warehouse_sk495;
    std::string _w_state505;
};
void SW_JOIN_INNER_TD_6297350(Table &tbl_JOIN_LEFTOUTER_TD_7427510_output, Table &tbl_Filter_TD_7165700_output, Table &tbl_JOIN_INNER_TD_6297350_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_warehouse_sk#1118 = w_warehouse_sk#495))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_warehouse_sk#1118, cs_item_sk#1119, cs_sales_price#1125, cr_refunded_cash#1046)
    // Right Table: ListBuffer(w_warehouse_sk#495, w_state#505)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_sales_price#1125, cr_refunded_cash#1046, w_state#505)
    int left_nrow = tbl_JOIN_LEFTOUTER_TD_7427510_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7165700_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6297350_key_leftMajor, SW_JOIN_INNER_TD_6297350_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_warehouse_sk1118_k = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6297350_key_leftMajor keyA{_cs_warehouse_sk1118_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 0);
            int32_t _cs_warehouse_sk1118 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 2);
            int32_t _cs_sales_price1125 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 3);
            int32_t _cr_refunded_cash1046 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_6297350_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_warehouse_sk1118, _cs_item_sk1119, _cs_sales_price1125, _cr_refunded_cash1046};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7165700_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_7165700_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6297350_key_leftMajor{_w_warehouse_sk495_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_warehouse_sk1118 = (it->second)._cs_warehouse_sk1118;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cr_refunded_cash1046 = (it->second)._cr_refunded_cash1046;
                int32_t _w_warehouse_sk495 = tbl_Filter_TD_7165700_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_Filter_TD_7165700_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _w_state505 = std::string(_w_state505_n.data());
                tbl_JOIN_INNER_TD_6297350_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_6297350_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6297350_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_6297350_output.setInt32(r, 3, _cr_refunded_cash1046);
                tbl_JOIN_INNER_TD_6297350_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_state505_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6297350_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6297350_key_rightMajor, SW_JOIN_INNER_TD_6297350_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7165700_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_7165700_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6297350_key_rightMajor keyA{_w_warehouse_sk495_k};
            int32_t _w_warehouse_sk495 = tbl_Filter_TD_7165700_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_Filter_TD_7165700_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _w_state505 = std::string(_w_state505_n.data());
            SW_JOIN_INNER_TD_6297350_payload_rightMajor payloadA{_w_warehouse_sk495, _w_state505};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_warehouse_sk1118_k = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6297350_key_rightMajor{_cs_warehouse_sk1118_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                std::string _w_state505 = (it->second)._w_state505;
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n{};
                memcpy(_w_state505_n.data(), (_w_state505).data(), (_w_state505).length());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 0);
                int32_t _cs_warehouse_sk1118 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 2);
                int32_t _cs_sales_price1125 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 3);
                int32_t _cr_refunded_cash1046 = tbl_JOIN_LEFTOUTER_TD_7427510_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_6297350_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_state505_n);
                tbl_JOIN_INNER_TD_6297350_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_6297350_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6297350_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_6297350_output.setInt32(r, 3, _cr_refunded_cash1046);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6297350_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6297350_output #Row: " << tbl_JOIN_INNER_TD_6297350_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5297285(Table &tbl_SerializeFromObject_TD_6775888_input, Table &tbl_Filter_TD_5297285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-02-10) AND (d_date#122 <= 2000-04-10))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6775888_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_6775888_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_6775888_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000210) && (_d_date122 <= 20000410))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_6775888_input.getInt32(i, 0);
            tbl_Filter_TD_5297285_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_6775888_input.getInt32(i, 1);
            tbl_Filter_TD_5297285_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_5297285_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5297285_output #Row: " << tbl_Filter_TD_5297285_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5921576_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_5921576_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5921576_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5921576_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_5921576_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int32_t _cs_sales_price1125;
    int32_t _cr_refunded_cash1046;
    std::string _w_state505;
};
struct SW_JOIN_INNER_TD_5921576_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5921576_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5921576_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5921576_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5921576_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_5921576(Table &tbl_JOIN_INNER_TD_6297350_output, Table &tbl_Filter_TD_6471903_output, Table &tbl_JOIN_INNER_TD_5921576_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = cs_item_sk#1119))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_sales_price#1125, cr_refunded_cash#1046, w_state#505)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_sales_price#1125, cr_refunded_cash#1046, w_state#505, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_6297350_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6471903_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5921576_key_leftMajor, SW_JOIN_INNER_TD_5921576_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6297350_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5921576_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 1);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 2);
            int32_t _cr_refunded_cash1046 = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_6297350_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_state505 = std::string(_w_state505_n.data());
            SW_JOIN_INNER_TD_5921576_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_sales_price1125, _cr_refunded_cash1046, _w_state505};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6471903_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6471903_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5921576_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cr_refunded_cash1046 = (it->second)._cr_refunded_cash1046;
                std::string _w_state505 = (it->second)._w_state505;
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n{};
                memcpy(_w_state505_n.data(), (_w_state505).data(), (_w_state505).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_6471903_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6471903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_5921576_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_5921576_output.setInt32(r, 1, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_5921576_output.setInt32(r, 2, _cr_refunded_cash1046);
                tbl_JOIN_INNER_TD_5921576_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_state505_n);
                tbl_JOIN_INNER_TD_5921576_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5921576_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5921576_key_rightMajor, SW_JOIN_INNER_TD_5921576_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6471903_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6471903_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5921576_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6471903_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6471903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_5921576_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6297350_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5921576_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 1);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 2);
                int32_t _cr_refunded_cash1046 = tbl_JOIN_INNER_TD_6297350_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_6297350_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_state505 = std::string(_w_state505_n.data());
                tbl_JOIN_INNER_TD_5921576_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5921576_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_5921576_output.setInt32(r, 1, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_5921576_output.setInt32(r, 2, _cr_refunded_cash1046);
                tbl_JOIN_INNER_TD_5921576_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_state505_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5921576_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5921576_output #Row: " << tbl_JOIN_INNER_TD_5921576_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4459609_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_4459609_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4459609_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4459609_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_4459609_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_sales_price1125;
    int32_t _cr_refunded_cash1046;
    std::string _w_state505;
    std::string _i_item_id229;
};
struct SW_JOIN_INNER_TD_4459609_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_4459609_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4459609_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4459609_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_4459609_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
};
void SW_JOIN_INNER_TD_4459609(Table &tbl_JOIN_INNER_TD_5921576_output, Table &tbl_Filter_TD_5297285_output, Table &tbl_JOIN_INNER_TD_4459609_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#120))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_sales_price#1125, cr_refunded_cash#1046, w_state#505, i_item_id#229)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122)
    // Output Table: ListBuffer(cs_sales_price#1125, cr_refunded_cash#1046, w_state#505, i_item_id#229, d_date#122)
    int left_nrow = tbl_JOIN_INNER_TD_5921576_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5297285_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4459609_key_leftMajor, SW_JOIN_INNER_TD_4459609_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5921576_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_5921576_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4459609_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_5921576_output.getInt32(i, 0);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_5921576_output.getInt32(i, 1);
            int32_t _cr_refunded_cash1046 = tbl_JOIN_INNER_TD_5921576_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_5921576_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _w_state505 = std::string(_w_state505_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5921576_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_4459609_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_sales_price1125, _cr_refunded_cash1046, _w_state505, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5297285_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5297285_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4459609_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cr_refunded_cash1046 = (it->second)._cr_refunded_cash1046;
                std::string _w_state505 = (it->second)._w_state505;
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n{};
                memcpy(_w_state505_n.data(), (_w_state505).data(), (_w_state505).length());
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_5297285_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_5297285_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4459609_output.setInt32(r, 0, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_4459609_output.setInt32(r, 1, _cr_refunded_cash1046);
                tbl_JOIN_INNER_TD_4459609_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_state505_n);
                tbl_JOIN_INNER_TD_4459609_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4459609_output.setInt32(r, 4, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4459609_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4459609_key_rightMajor, SW_JOIN_INNER_TD_4459609_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5297285_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5297285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4459609_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_5297285_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_5297285_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4459609_payload_rightMajor payloadA{_d_date_sk120, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5921576_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_5921576_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4459609_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_5921576_output.getInt32(i, 0);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_5921576_output.getInt32(i, 1);
                int32_t _cr_refunded_cash1046 = tbl_JOIN_INNER_TD_5921576_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_5921576_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _w_state505 = std::string(_w_state505_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5921576_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_4459609_output.setInt32(r, 4, _d_date122);
                tbl_JOIN_INNER_TD_4459609_output.setInt32(r, 0, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_4459609_output.setInt32(r, 1, _cr_refunded_cash1046);
                tbl_JOIN_INNER_TD_4459609_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_state505_n);
                tbl_JOIN_INNER_TD_4459609_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4459609_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4459609_output #Row: " << tbl_JOIN_INNER_TD_4459609_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3318770_key {
    std::string _w_state505;
    std::string _i_item_id229;
    bool operator==(const SW_Aggregate_TD_3318770_key& other) const { return (_w_state505 == other._w_state505) && (_i_item_id229 == other._i_item_id229); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3318770_key> {
    std::size_t operator() (const SW_Aggregate_TD_3318770_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._w_state505)) + (hash<string>()(k._i_item_id229));
    }
};
}
struct SW_Aggregate_TD_3318770_payload {
    int32_t _sales_before20293_sum_0;
    int32_t _sales_after20294_sum_1;
};
void SW_Aggregate_TD_3318770(Table &tbl_JOIN_INNER_TD_4459609_output, Table &tbl_Aggregate_TD_3318770_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(w_state#505, i_item_id#229, sum(CASE WHEN (d_date#122 < 2000-03-11) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(13,2))) - promote_precision(cast(coalesce(cast(cr_refunded_cash#1046 as decimal(12,2)), 0.00) as decimal(13,2)))), DecimalType(13,2), true) ELSE 0.00 END) AS sales_before#20293, sum(CASE WHEN (d_date#122 >= 2000-03-11) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(13,2))) - promote_precision(cast(coalesce(cast(cr_refunded_cash#1046 as decimal(12,2)), 0.00) as decimal(13,2)))), DecimalType(13,2), true) ELSE 0.00 END) AS sales_after#20294)
    // Input: ListBuffer(cs_sales_price#1125, cr_refunded_cash#1046, w_state#505, i_item_id#229, d_date#122)
    // Output: ListBuffer(w_state#505, i_item_id#229, sales_before#20293, sales_after#20294)
    std::unordered_map<SW_Aggregate_TD_3318770_key, SW_Aggregate_TD_3318770_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4459609_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_4459609_output.getInt32(i, 0);
        int32_t _cr_refunded_cash1046 = tbl_JOIN_INNER_TD_4459609_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505 = tbl_JOIN_INNER_TD_4459609_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_4459609_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_date122 = tbl_JOIN_INNER_TD_4459609_output.getInt32(i, 4);
        SW_Aggregate_TD_3318770_key k{std::string(_w_state505.data()), std::string(_i_item_id229.data())};
        int64_t _sales_before20293_sum_0 = (_d_date122 < 2000-03-11) ? (_cs_sales_price1125 - _cr_refunded_cash1046 != 0 ? _cr_refunded_cash1046 : 0.00) : 0.00;
        int64_t _sales_after20294_sum_1 = (_d_date122 >= 2000-03-11) ? (_cs_sales_price1125 - _cr_refunded_cash1046 != 0 ? _cr_refunded_cash1046 : 0.00) : 0.00;
        SW_Aggregate_TD_3318770_payload p{_sales_before20293_sum_0, _sales_after20294_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales_before20293_sum_0 + _sales_before20293_sum_0;
            p._sales_before20293_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._sales_after20294_sum_1 + _sales_after20294_sum_1;
            p._sales_after20294_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _w_state505{};
        memcpy(_w_state505.data(), ((it.first)._w_state505).data(), ((it.first)._w_state505).length());
        tbl_Aggregate_TD_3318770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_state505);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), ((it.first)._i_item_id229).data(), ((it.first)._i_item_id229).length());
        tbl_Aggregate_TD_3318770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229);
        int32_t _sales_before20293 = (it.second)._sales_before20293_sum_0;
        tbl_Aggregate_TD_3318770_output.setInt32(r, 2, _sales_before20293);
        int32_t _sales_after20294 = (it.second)._sales_after20294_sum_1;
        tbl_Aggregate_TD_3318770_output.setInt32(r, 3, _sales_after20294);
        ++r;
    }
    tbl_Aggregate_TD_3318770_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3318770_output #Row: " << tbl_Aggregate_TD_3318770_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2334152(Table &tbl_Aggregate_TD_3318770_output, Table &tbl_Sort_TD_2334152_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(w_state#505 ASC NULLS FIRST, i_item_id#229 ASC NULLS FIRST)
    // Input: ListBuffer(w_state#505, i_item_id#229, sales_before#20293, sales_after#20294)
    // Output: ListBuffer(w_state#505, i_item_id#229, sales_before#20293, sales_after#20294)
    struct SW_Sort_TD_2334152Row {
        std::string _w_state505;
        std::string _i_item_id229;
        int32_t _sales_before20293;
        int32_t _sales_after20294;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2334152Row& a, const SW_Sort_TD_2334152Row& b) const { return 
 (a._w_state505 < b._w_state505) || 
 ((a._w_state505 == b._w_state505) && (a._i_item_id229 < b._i_item_id229)); 
}
    }SW_Sort_TD_2334152_order; 

    int nrow1 = tbl_Aggregate_TD_3318770_output.getNumRow();
    std::vector<SW_Sort_TD_2334152Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_state505 = tbl_Aggregate_TD_3318770_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3318770_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _sales_before20293 = tbl_Aggregate_TD_3318770_output.getInt32(i, 2);
        int32_t _sales_after20294 = tbl_Aggregate_TD_3318770_output.getInt32(i, 3);
        SW_Sort_TD_2334152Row t = {std::string(_w_state505.data()),std::string(_i_item_id229.data()),_sales_before20293,_sales_after20294};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2334152_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _w_state505{};
        memcpy(_w_state505.data(), (it._w_state505).data(), (it._w_state505).length());
        tbl_Sort_TD_2334152_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _w_state505);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2334152_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_id229);
        tbl_Sort_TD_2334152_output.setInt32(r, 2, it._sales_before20293);
        tbl_Sort_TD_2334152_output.setInt32(r, 3, it._sales_after20294);
        ++r;
    }
    tbl_Sort_TD_2334152_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2334152_output #Row: " << tbl_Sort_TD_2334152_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1554759(Table &tbl_Sort_TD_2334152_output, Table &tbl_LocalLimit_TD_1554759_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(w_state#505, i_item_id#229, sales_before#20293, sales_after#20294)
    // Output: ListBuffer(w_state#505, i_item_id#229, sales_before#20293, sales_after#20294)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_Sort_TD_2334152_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1554759_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_state505_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2334152_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1554759_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
        tbl_LocalLimit_TD_1554759_output.setInt32(r, 2, tbl_Sort_TD_2334152_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1554759_output.setInt32(r, 3, tbl_Sort_TD_2334152_output.getInt32(i, 3));
        r++;
    }
    tbl_LocalLimit_TD_1554759_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1554759_output #Row: " << tbl_LocalLimit_TD_1554759_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0935789(Table &tbl_LocalLimit_TD_1554759_output, Table &tbl_GlobalLimit_TD_0935789_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(w_state#505, i_item_id#229, sales_before#20293, sales_after#20294)
    // Output: ListBuffer(w_state#505, i_item_id#229, sales_before#20293, sales_after#20294)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_LocalLimit_TD_1554759_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0935789_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_state505_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1554759_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0935789_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
        tbl_GlobalLimit_TD_0935789_output.setInt32(r, 2, tbl_LocalLimit_TD_1554759_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0935789_output.setInt32(r, 3, tbl_LocalLimit_TD_1554759_output.getInt32(i, 3));
        r++;
    }
    tbl_GlobalLimit_TD_0935789_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0935789_output #Row: " << tbl_GlobalLimit_TD_0935789_output.getNumRow() << std::endl;
}

