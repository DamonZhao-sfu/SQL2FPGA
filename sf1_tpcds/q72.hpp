#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_14141034(Table &tbl_SerializeFromObject_TD_15511874_input, Table &tbl_Filter_TD_14141034_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(inv_quantity_on_hand#660) AND isnotnull(inv_item_sk#658)) AND isnotnull(inv_warehouse_sk#659)) AND isnotnull(inv_date_sk#657)))
    // Input: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Output: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15511874_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_quantity_on_hand660 = tbl_SerializeFromObject_TD_15511874_input.getInt32(i, 3);
        int32_t _inv_item_sk658 = tbl_SerializeFromObject_TD_15511874_input.getInt32(i, 1);
        int32_t _inv_warehouse_sk659 = tbl_SerializeFromObject_TD_15511874_input.getInt32(i, 2);
        int32_t _inv_date_sk657 = tbl_SerializeFromObject_TD_15511874_input.getInt32(i, 0);
        if ((((_inv_quantity_on_hand660!= 0) && (_inv_item_sk658!= 0)) && (_inv_warehouse_sk659!= 0)) && (_inv_date_sk657!= 0)) {
            int32_t _inv_date_sk657_t = tbl_SerializeFromObject_TD_15511874_input.getInt32(i, 0);
            tbl_Filter_TD_14141034_output.setInt32(r, 0, _inv_date_sk657_t);
            int32_t _inv_item_sk658_t = tbl_SerializeFromObject_TD_15511874_input.getInt32(i, 1);
            tbl_Filter_TD_14141034_output.setInt32(r, 1, _inv_item_sk658_t);
            int32_t _inv_warehouse_sk659_t = tbl_SerializeFromObject_TD_15511874_input.getInt32(i, 2);
            tbl_Filter_TD_14141034_output.setInt32(r, 2, _inv_warehouse_sk659_t);
            int32_t _inv_quantity_on_hand660_t = tbl_SerializeFromObject_TD_15511874_input.getInt32(i, 3);
            tbl_Filter_TD_14141034_output.setInt32(r, 3, _inv_quantity_on_hand660_t);
            r++;
        }
    }
    tbl_Filter_TD_14141034_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14141034_output #Row: " << tbl_Filter_TD_14141034_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14610738(Table &tbl_SerializeFromObject_TD_15550944_input, Table &tbl_Filter_TD_14610738_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(cs_quantity#1122) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_bill_cdemo_sk#1108)) AND ((isnotnull(cs_bill_hdemo_sk#1109) AND isnotnull(cs_sold_date_sk#1104)) AND isnotnull(cs_ship_date_sk#1106))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_quantity#1122)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_quantity#1122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15550944_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity1122 = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 7);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 4);
        int32_t _cs_bill_cdemo_sk1108 = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 2);
        int32_t _cs_bill_hdemo_sk1109 = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 3);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 0);
        int32_t _cs_ship_date_sk1106 = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 1);
        if ((((_cs_quantity1122!= 0) && (_cs_item_sk1119!= 0)) && (_cs_bill_cdemo_sk1108!= 0)) && (((_cs_bill_hdemo_sk1109!= 0) && (_cs_sold_date_sk1104!= 0)) && (_cs_ship_date_sk1106!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 0);
            tbl_Filter_TD_14610738_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ship_date_sk1106_t = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 1);
            tbl_Filter_TD_14610738_output.setInt32(r, 1, _cs_ship_date_sk1106_t);
            int32_t _cs_bill_cdemo_sk1108_t = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 2);
            tbl_Filter_TD_14610738_output.setInt32(r, 2, _cs_bill_cdemo_sk1108_t);
            int32_t _cs_bill_hdemo_sk1109_t = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 3);
            tbl_Filter_TD_14610738_output.setInt32(r, 3, _cs_bill_hdemo_sk1109_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 4);
            tbl_Filter_TD_14610738_output.setInt32(r, 4, _cs_item_sk1119_t);
            int32_t _cs_promo_sk1120_t = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 5);
            tbl_Filter_TD_14610738_output.setInt32(r, 5, _cs_promo_sk1120_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_15550944_input.getInt64(i, 6);
            tbl_Filter_TD_14610738_output.setInt64(r, 6, _cs_order_number1121L_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_15550944_input.getInt32(i, 7);
            tbl_Filter_TD_14610738_output.setInt32(r, 7, _cs_quantity1122_t);
            r++;
        }
    }
    tbl_Filter_TD_14610738_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14610738_output #Row: " << tbl_Filter_TD_14610738_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13127165(Table &tbl_SerializeFromObject_TD_14548882_input, Table &tbl_Filter_TD_13127165_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#495))
    // Input: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    // Output: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14548882_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_SerializeFromObject_TD_14548882_input.getInt32(i, 0);
        if (_w_warehouse_sk495!= 0) {
            int32_t _w_warehouse_sk495_t = tbl_SerializeFromObject_TD_14548882_input.getInt32(i, 0);
            tbl_Filter_TD_13127165_output.setInt32(r, 0, _w_warehouse_sk495_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_t = tbl_SerializeFromObject_TD_14548882_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_13127165_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497_t);
            r++;
        }
    }
    tbl_Filter_TD_13127165_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13127165_output #Row: " << tbl_Filter_TD_13127165_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13954203_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_13954203_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13954203_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13954203_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_13954203_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_bill_cdemo_sk1108;
    int32_t _cs_bill_hdemo_sk1109;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    int32_t _cs_quantity1122;
};
struct SW_JOIN_INNER_TD_13954203_key_rightMajor {
    int32_t _inv_item_sk658;
    bool operator==(const SW_JOIN_INNER_TD_13954203_key_rightMajor& other) const {
        return ((_inv_item_sk658 == other._inv_item_sk658));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13954203_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13954203_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_item_sk658));
    }
};
}
struct SW_JOIN_INNER_TD_13954203_payload_rightMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_item_sk658;
    int32_t _inv_warehouse_sk659;
    int32_t _inv_quantity_on_hand660;
};
void SW_JOIN_INNER_TD_13954203(Table &tbl_Filter_TD_14610738_output, Table &tbl_Filter_TD_14141034_output, Table &tbl_JOIN_INNER_TD_13954203_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((inv_quantity_on_hand#660 < cs_quantity#1122) AND (cs_item_sk#1119 = inv_item_sk#658)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_quantity#1122)
    // Right Table: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, inv_warehouse_sk#659)
    int left_nrow = tbl_Filter_TD_14610738_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14141034_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13954203_key_leftMajor, SW_JOIN_INNER_TD_13954203_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14610738_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_14610738_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_13954203_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_14610738_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_Filter_TD_14610738_output.getInt32(i, 1);
            int32_t _cs_bill_cdemo_sk1108 = tbl_Filter_TD_14610738_output.getInt32(i, 2);
            int32_t _cs_bill_hdemo_sk1109 = tbl_Filter_TD_14610738_output.getInt32(i, 3);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_14610738_output.getInt32(i, 4);
            int32_t _cs_promo_sk1120 = tbl_Filter_TD_14610738_output.getInt32(i, 5);
            int64_t _cs_order_number1121L = tbl_Filter_TD_14610738_output.getInt64(i, 6);
            int32_t _cs_quantity1122 = tbl_Filter_TD_14610738_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_13954203_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_cdemo_sk1108, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _cs_quantity1122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14141034_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_14141034_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13954203_key_leftMajor{_inv_item_sk658_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_date_sk1106 = (it->second)._cs_ship_date_sk1106;
                int32_t _cs_bill_cdemo_sk1108 = (it->second)._cs_bill_cdemo_sk1108;
                int32_t _cs_bill_hdemo_sk1109 = (it->second)._cs_bill_hdemo_sk1109;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _inv_date_sk657 = tbl_Filter_TD_14141034_output.getInt32(i, 0);
                int32_t _inv_item_sk658 = tbl_Filter_TD_14141034_output.getInt32(i, 1);
                int32_t _inv_warehouse_sk659 = tbl_Filter_TD_14141034_output.getInt32(i, 2);
                int32_t _inv_quantity_on_hand660 = tbl_Filter_TD_14141034_output.getInt32(i, 3);
                if (_inv_quantity_on_hand660 < _cs_quantity1122) {
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 0, _cs_sold_date_sk1104);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 1, _cs_ship_date_sk1106);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 4, _cs_item_sk1119);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 5, _cs_promo_sk1120);
                    tbl_JOIN_INNER_TD_13954203_output.setInt64(r, 6, _cs_order_number1121L);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 7, _inv_date_sk657);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 8, _inv_warehouse_sk659);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_13954203_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13954203_key_rightMajor, SW_JOIN_INNER_TD_13954203_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14141034_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_14141034_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13954203_key_rightMajor keyA{_inv_item_sk658_k};
            int32_t _inv_date_sk657 = tbl_Filter_TD_14141034_output.getInt32(i, 0);
            int32_t _inv_item_sk658 = tbl_Filter_TD_14141034_output.getInt32(i, 1);
            int32_t _inv_warehouse_sk659 = tbl_Filter_TD_14141034_output.getInt32(i, 2);
            int32_t _inv_quantity_on_hand660 = tbl_Filter_TD_14141034_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13954203_payload_rightMajor payloadA{_inv_date_sk657, _inv_item_sk658, _inv_warehouse_sk659, _inv_quantity_on_hand660};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14610738_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_14610738_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13954203_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_item_sk658 = (it->second)._inv_item_sk658;
                int32_t _inv_warehouse_sk659 = (it->second)._inv_warehouse_sk659;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_14610738_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_Filter_TD_14610738_output.getInt32(i, 1);
                int32_t _cs_bill_cdemo_sk1108 = tbl_Filter_TD_14610738_output.getInt32(i, 2);
                int32_t _cs_bill_hdemo_sk1109 = tbl_Filter_TD_14610738_output.getInt32(i, 3);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_14610738_output.getInt32(i, 4);
                int32_t _cs_promo_sk1120 = tbl_Filter_TD_14610738_output.getInt32(i, 5);
                int64_t _cs_order_number1121L = tbl_Filter_TD_14610738_output.getInt64(i, 6);
                int32_t _cs_quantity1122 = tbl_Filter_TD_14610738_output.getInt32(i, 7);
                if (_inv_quantity_on_hand660 < _cs_quantity1122) {
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 7, _inv_date_sk657);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 8, _inv_warehouse_sk659);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 0, _cs_sold_date_sk1104);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 1, _cs_ship_date_sk1106);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 4, _cs_item_sk1119);
                    tbl_JOIN_INNER_TD_13954203_output.setInt32(r, 5, _cs_promo_sk1120);
                    tbl_JOIN_INNER_TD_13954203_output.setInt64(r, 6, _cs_order_number1121L);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_13954203_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13954203_output #Row: " << tbl_JOIN_INNER_TD_13954203_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12394126(Table &tbl_SerializeFromObject_TD_13903586_input, Table &tbl_Filter_TD_12394126_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(i_item_sk#228, i_item_desc#232)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13903586_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_13903586_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_13903586_input.getInt32(i, 0);
            tbl_Filter_TD_12394126_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_13903586_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12394126_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_t);
            r++;
        }
    }
    tbl_Filter_TD_12394126_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12394126_output #Row: " << tbl_Filter_TD_12394126_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12548352_key_leftMajor {
    int32_t _inv_warehouse_sk659;
    bool operator==(const SW_JOIN_INNER_TD_12548352_key_leftMajor& other) const {
        return ((_inv_warehouse_sk659 == other._inv_warehouse_sk659));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12548352_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12548352_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_warehouse_sk659));
    }
};
}
struct SW_JOIN_INNER_TD_12548352_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_bill_cdemo_sk1108;
    int32_t _cs_bill_hdemo_sk1109;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    int32_t _inv_date_sk657;
    int32_t _inv_warehouse_sk659;
};
struct SW_JOIN_INNER_TD_12548352_key_rightMajor {
    int32_t _w_warehouse_sk495;
    bool operator==(const SW_JOIN_INNER_TD_12548352_key_rightMajor& other) const {
        return ((_w_warehouse_sk495 == other._w_warehouse_sk495));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12548352_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12548352_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk495));
    }
};
}
struct SW_JOIN_INNER_TD_12548352_payload_rightMajor {
    int32_t _w_warehouse_sk495;
    std::string _w_warehouse_name497;
};
void SW_JOIN_INNER_TD_12548352(Table &tbl_JOIN_INNER_TD_13954203_output, Table &tbl_Filter_TD_13127165_output, Table &tbl_JOIN_INNER_TD_12548352_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((w_warehouse_sk#495 = inv_warehouse_sk#659))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, inv_warehouse_sk#659)
    // Right Table: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497)
    int left_nrow = tbl_JOIN_INNER_TD_13954203_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13127165_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12548352_key_leftMajor, SW_JOIN_INNER_TD_12548352_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13954203_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_12548352_key_leftMajor keyA{_inv_warehouse_sk659_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 1);
            int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 2);
            int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 3);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 4);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 5);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_13954203_output.getInt64(i, 6);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 7);
            int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_12548352_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_cdemo_sk1108, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _inv_warehouse_sk659};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13127165_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_13127165_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12548352_key_leftMajor{_w_warehouse_sk495_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_date_sk1106 = (it->second)._cs_ship_date_sk1106;
                int32_t _cs_bill_cdemo_sk1108 = (it->second)._cs_bill_cdemo_sk1108;
                int32_t _cs_bill_hdemo_sk1109 = (it->second)._cs_bill_hdemo_sk1109;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_warehouse_sk659 = (it->second)._inv_warehouse_sk659;
                int32_t _w_warehouse_sk495 = tbl_Filter_TD_13127165_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_13127165_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 4, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 5, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_12548352_output.setInt64(r, 6, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 7, _inv_date_sk657);
                tbl_JOIN_INNER_TD_12548352_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_warehouse_name497_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12548352_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12548352_key_rightMajor, SW_JOIN_INNER_TD_12548352_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13127165_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_13127165_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12548352_key_rightMajor keyA{_w_warehouse_sk495_k};
            int32_t _w_warehouse_sk495 = tbl_Filter_TD_13127165_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_13127165_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            SW_JOIN_INNER_TD_12548352_payload_rightMajor payloadA{_w_warehouse_sk495, _w_warehouse_name497};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13954203_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12548352_key_rightMajor{_inv_warehouse_sk659_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 1);
                int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 2);
                int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 3);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 4);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 5);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_13954203_output.getInt64(i, 6);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 7);
                int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_13954203_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_12548352_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 4, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 5, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_12548352_output.setInt64(r, 6, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_12548352_output.setInt32(r, 7, _inv_date_sk657);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12548352_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12548352_output #Row: " << tbl_JOIN_INNER_TD_12548352_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11629310(Table &tbl_SerializeFromObject_TD_12200729_input, Table &tbl_Filter_TD_11629310_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cd_marital_status#95) AND (cd_marital_status#95 = D)) AND isnotnull(cd_demo_sk#93)))
    // Input: ListBuffer(cd_demo_sk#93, cd_marital_status#95)
    // Output: ListBuffer(cd_demo_sk#93)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12200729_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_SerializeFromObject_TD_12200729_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_12200729_input.getInt32(i, 0);
        if (((std::string(_cd_marital_status95.data()) != "NULL") && (std::string(_cd_marital_status95.data()) == "D")) && (_cd_demo_sk93!= 0)) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_12200729_input.getInt32(i, 0);
            tbl_Filter_TD_11629310_output.setInt32(r, 0, _cd_demo_sk93_t);
            r++;
        }
    }
    tbl_Filter_TD_11629310_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11629310_output #Row: " << tbl_Filter_TD_11629310_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1134526_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_1134526_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1134526_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1134526_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_1134526_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_bill_cdemo_sk1108;
    int32_t _cs_bill_hdemo_sk1109;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    int32_t _inv_date_sk657;
    std::string _w_warehouse_name497;
};
struct SW_JOIN_INNER_TD_1134526_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_1134526_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1134526_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1134526_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_1134526_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_desc232;
};
void SW_JOIN_INNER_TD_1134526(Table &tbl_JOIN_INNER_TD_12548352_output, Table &tbl_Filter_TD_12394126_output, Table &tbl_JOIN_INNER_TD_1134526_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = cs_item_sk#1119))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497)
    // Right Table: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_12548352_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12394126_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1134526_key_leftMajor, SW_JOIN_INNER_TD_1134526_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12548352_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_1134526_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 1);
            int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 2);
            int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 3);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 4);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 5);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_12548352_output.getInt64(i, 6);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_12548352_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            SW_JOIN_INNER_TD_1134526_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_cdemo_sk1108, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12394126_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_12394126_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1134526_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_date_sk1106 = (it->second)._cs_ship_date_sk1106;
                int32_t _cs_bill_cdemo_sk1108 = (it->second)._cs_bill_cdemo_sk1108;
                int32_t _cs_bill_hdemo_sk1109 = (it->second)._cs_bill_hdemo_sk1109;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_12394126_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_12394126_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 4, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 5, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_1134526_output.setInt64(r, 6, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 7, _inv_date_sk657);
                tbl_JOIN_INNER_TD_1134526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_1134526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1134526_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1134526_key_rightMajor, SW_JOIN_INNER_TD_1134526_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12394126_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_12394126_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1134526_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_12394126_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_12394126_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_1134526_payload_rightMajor payloadA{_i_item_sk228, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12548352_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1134526_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 1);
                int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 2);
                int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 3);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 4);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 5);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_12548352_output.getInt64(i, 6);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_12548352_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_12548352_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                tbl_JOIN_INNER_TD_1134526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 4, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 5, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_1134526_output.setInt64(r, 6, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_1134526_output.setInt32(r, 7, _inv_date_sk657);
                tbl_JOIN_INNER_TD_1134526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_warehouse_name497_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1134526_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1134526_output #Row: " << tbl_JOIN_INNER_TD_1134526_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10682466(Table &tbl_SerializeFromObject_TD_11251179_input, Table &tbl_Filter_TD_10682466_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(hd_buy_potential#206) AND (hd_buy_potential#206 = >10000)) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_buy_potential#206)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11251179_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _hd_buy_potential206 = tbl_SerializeFromObject_TD_11251179_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_11251179_input.getInt32(i, 0);
        if (((std::string(_hd_buy_potential206.data()) != "NULL") && (std::string(_hd_buy_potential206.data()) == ">10000")) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_11251179_input.getInt32(i, 0);
            tbl_Filter_TD_10682466_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_10682466_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10682466_output #Row: " << tbl_Filter_TD_10682466_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10512967_key_leftMajor {
    int32_t _cs_bill_cdemo_sk1108;
    bool operator==(const SW_JOIN_INNER_TD_10512967_key_leftMajor& other) const {
        return ((_cs_bill_cdemo_sk1108 == other._cs_bill_cdemo_sk1108));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10512967_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10512967_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_cdemo_sk1108));
    }
};
}
struct SW_JOIN_INNER_TD_10512967_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_bill_cdemo_sk1108;
    int32_t _cs_bill_hdemo_sk1109;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    int32_t _inv_date_sk657;
    std::string _w_warehouse_name497;
    std::string _i_item_desc232;
};
struct SW_JOIN_INNER_TD_10512967_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_10512967_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10512967_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10512967_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_10512967_payload_rightMajor {
    int32_t _cd_demo_sk93;
};
void SW_JOIN_INNER_TD_10512967(Table &tbl_JOIN_INNER_TD_1134526_output, Table &tbl_Filter_TD_11629310_output, Table &tbl_JOIN_INNER_TD_10512967_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_cdemo_sk#1108 = cd_demo_sk#93))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    // Right Table: ListBuffer(cd_demo_sk#93)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_1134526_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11629310_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10512967_key_leftMajor, SW_JOIN_INNER_TD_10512967_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1134526_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_cdemo_sk1108_k = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10512967_key_leftMajor keyA{_cs_bill_cdemo_sk1108_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 1);
            int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 2);
            int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 3);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 4);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 5);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_1134526_output.getInt64(i, 6);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_1134526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_1134526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_10512967_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_cdemo_sk1108, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11629310_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_11629310_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10512967_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_date_sk1106 = (it->second)._cs_ship_date_sk1106;
                int32_t _cs_bill_cdemo_sk1108 = (it->second)._cs_bill_cdemo_sk1108;
                int32_t _cs_bill_hdemo_sk1109 = (it->second)._cs_bill_hdemo_sk1109;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _cd_demo_sk93 = tbl_Filter_TD_11629310_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 2, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 3, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 4, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_10512967_output.setInt64(r, 5, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 6, _inv_date_sk657);
                tbl_JOIN_INNER_TD_10512967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_10512967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10512967_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10512967_key_rightMajor, SW_JOIN_INNER_TD_10512967_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11629310_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_11629310_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10512967_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_11629310_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10512967_payload_rightMajor payloadA{_cd_demo_sk93};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_1134526_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_cdemo_sk1108_k = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10512967_key_rightMajor{_cs_bill_cdemo_sk1108_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 1);
                int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 2);
                int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 3);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 4);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 5);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_1134526_output.getInt64(i, 6);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_1134526_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_1134526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_1134526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 2, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 3, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 4, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_10512967_output.setInt64(r, 5, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_10512967_output.setInt32(r, 6, _inv_date_sk657);
                tbl_JOIN_INNER_TD_10512967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_10512967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10512967_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10512967_output #Row: " << tbl_JOIN_INNER_TD_10512967_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9701751(Table &tbl_SerializeFromObject_TD_10130575_input, Table &tbl_Filter_TD_9701751_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND (d_year#126 = 1999)) AND isnotnull(d_date_sk#120)) AND (isnotnull(d_week_seq#124) AND isnotnull(d_date#122))))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_week_seq#124, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_date#122, d_week_seq#124)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10130575_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10130575_input.getInt32(i, 3);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10130575_input.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_SerializeFromObject_TD_10130575_input.getInt32(i, 2);
        int32_t _d_date122 = tbl_SerializeFromObject_TD_10130575_input.getInt32(i, 1);
        if ((((_d_year126!= 0) && (_d_year126 == 1999)) && (_d_date_sk120!= 0)) && ((_d_week_seq124!= 0) && (_d_date122!= 0))) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10130575_input.getInt32(i, 0);
            tbl_Filter_TD_9701751_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_10130575_input.getInt32(i, 1);
            tbl_Filter_TD_9701751_output.setInt32(r, 1, _d_date122_t);
            int32_t _d_week_seq124_t = tbl_SerializeFromObject_TD_10130575_input.getInt32(i, 2);
            tbl_Filter_TD_9701751_output.setInt32(r, 2, _d_week_seq124_t);
            r++;
        }
    }
    tbl_Filter_TD_9701751_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9701751_output #Row: " << tbl_Filter_TD_9701751_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9217039_key_leftMajor {
    int32_t _cs_bill_hdemo_sk1109;
    bool operator==(const SW_JOIN_INNER_TD_9217039_key_leftMajor& other) const {
        return ((_cs_bill_hdemo_sk1109 == other._cs_bill_hdemo_sk1109));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9217039_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9217039_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_hdemo_sk1109));
    }
};
}
struct SW_JOIN_INNER_TD_9217039_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_bill_hdemo_sk1109;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    int32_t _inv_date_sk657;
    std::string _w_warehouse_name497;
    std::string _i_item_desc232;
};
struct SW_JOIN_INNER_TD_9217039_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_9217039_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9217039_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9217039_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_9217039_payload_rightMajor {
    int32_t _hd_demo_sk204;
};
void SW_JOIN_INNER_TD_9217039(Table &tbl_JOIN_INNER_TD_10512967_output, Table &tbl_Filter_TD_10682466_output, Table &tbl_JOIN_INNER_TD_9217039_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_hdemo_sk#1109 = hd_demo_sk#204))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    // Right Table: ListBuffer(hd_demo_sk#204)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_10512967_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10682466_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9217039_key_leftMajor, SW_JOIN_INNER_TD_9217039_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10512967_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_hdemo_sk1109_k = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9217039_key_leftMajor keyA{_cs_bill_hdemo_sk1109_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 1);
            int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 2);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 3);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 4);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_10512967_output.getInt64(i, 5);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 6);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_10512967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_10512967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_9217039_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10682466_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_10682466_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9217039_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_date_sk1106 = (it->second)._cs_ship_date_sk1106;
                int32_t _cs_bill_hdemo_sk1109 = (it->second)._cs_bill_hdemo_sk1109;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _hd_demo_sk204 = tbl_Filter_TD_10682466_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 3, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_9217039_output.setInt64(r, 4, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 5, _inv_date_sk657);
                tbl_JOIN_INNER_TD_9217039_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_9217039_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9217039_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9217039_key_rightMajor, SW_JOIN_INNER_TD_9217039_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10682466_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_10682466_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9217039_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_10682466_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9217039_payload_rightMajor payloadA{_hd_demo_sk204};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10512967_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_hdemo_sk1109_k = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9217039_key_rightMajor{_cs_bill_hdemo_sk1109_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 1);
                int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 2);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 3);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 4);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_10512967_output.getInt64(i, 5);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_10512967_output.getInt32(i, 6);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_10512967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_10512967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 3, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_9217039_output.setInt64(r, 4, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_9217039_output.setInt32(r, 5, _inv_date_sk657);
                tbl_JOIN_INNER_TD_9217039_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_9217039_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9217039_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9217039_output #Row: " << tbl_JOIN_INNER_TD_9217039_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8869621(Table &tbl_SerializeFromObject_TD_9555523_input, Table &tbl_Filter_TD_8869621_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_week_seq#3551) AND isnotnull(d_date_sk#3547)))
    // Input: ListBuffer(d_date_sk#3547, d_week_seq#3551)
    // Output: ListBuffer(d_date_sk#3547, d_week_seq#3551)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9555523_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq3551 = tbl_SerializeFromObject_TD_9555523_input.getInt32(i, 1);
        int32_t _d_date_sk3547 = tbl_SerializeFromObject_TD_9555523_input.getInt32(i, 0);
        if ((_d_week_seq3551!= 0) && (_d_date_sk3547!= 0)) {
            int32_t _d_date_sk3547_t = tbl_SerializeFromObject_TD_9555523_input.getInt32(i, 0);
            tbl_Filter_TD_8869621_output.setInt32(r, 0, _d_date_sk3547_t);
            int32_t _d_week_seq3551_t = tbl_SerializeFromObject_TD_9555523_input.getInt32(i, 1);
            tbl_Filter_TD_8869621_output.setInt32(r, 1, _d_week_seq3551_t);
            r++;
        }
    }
    tbl_Filter_TD_8869621_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8869621_output #Row: " << tbl_Filter_TD_8869621_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_859021_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_859021_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_859021_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_859021_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_859021_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    int32_t _inv_date_sk657;
    std::string _w_warehouse_name497;
    std::string _i_item_desc232;
};
struct SW_JOIN_INNER_TD_859021_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_859021_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_859021_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_859021_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_859021_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
    int32_t _d_week_seq124;
};
void SW_JOIN_INNER_TD_859021(Table &tbl_JOIN_INNER_TD_9217039_output, Table &tbl_Filter_TD_9701751_output, Table &tbl_JOIN_INNER_TD_859021_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#120))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122, d_week_seq#124)
    // Output Table: ListBuffer(cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232, d_date#122, d_week_seq#124)
    int left_nrow = tbl_JOIN_INNER_TD_9217039_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9701751_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_859021_key_leftMajor, SW_JOIN_INNER_TD_859021_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9217039_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_859021_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 2);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 3);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_9217039_output.getInt64(i, 4);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_9217039_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_9217039_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_859021_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9701751_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9701751_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_859021_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_date_sk1106 = (it->second)._cs_ship_date_sk1106;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_9701751_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_9701751_output.getInt32(i, 1);
                int32_t _d_week_seq124 = tbl_Filter_TD_9701751_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 0, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_859021_output.setInt64(r, 3, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 4, _inv_date_sk657);
                tbl_JOIN_INNER_TD_859021_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_859021_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 7, _d_date122);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 8, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_859021_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_859021_key_rightMajor, SW_JOIN_INNER_TD_859021_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9701751_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9701751_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_859021_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9701751_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_9701751_output.getInt32(i, 1);
            int32_t _d_week_seq124 = tbl_Filter_TD_9701751_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_859021_payload_rightMajor payloadA{_d_date_sk120, _d_date122, _d_week_seq124};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9217039_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_859021_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 2);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 3);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_9217039_output.getInt64(i, 4);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_9217039_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_9217039_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_9217039_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 7, _d_date122);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 8, _d_week_seq124);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 0, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_859021_output.setInt64(r, 3, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_859021_output.setInt32(r, 4, _inv_date_sk657);
                tbl_JOIN_INNER_TD_859021_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_859021_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_859021_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_859021_output #Row: " << tbl_JOIN_INNER_TD_859021_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7271269(Table &tbl_SerializeFromObject_TD_8119017_input, Table &tbl_Filter_TD_7271269_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date#3577) AND isnotnull(d_date_sk#3575)))
    // Input: ListBuffer(d_date_sk#3575, d_date#3577)
    // Output: ListBuffer(d_date_sk#3575, d_date#3577)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8119017_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date3577 = tbl_SerializeFromObject_TD_8119017_input.getInt32(i, 1);
        int32_t _d_date_sk3575 = tbl_SerializeFromObject_TD_8119017_input.getInt32(i, 0);
        if ((_d_date3577!= 0) && (_d_date_sk3575!= 0)) {
            int32_t _d_date_sk3575_t = tbl_SerializeFromObject_TD_8119017_input.getInt32(i, 0);
            tbl_Filter_TD_7271269_output.setInt32(r, 0, _d_date_sk3575_t);
            int32_t _d_date3577_t = tbl_SerializeFromObject_TD_8119017_input.getInt32(i, 1);
            tbl_Filter_TD_7271269_output.setInt32(r, 1, _d_date3577_t);
            r++;
        }
    }
    tbl_Filter_TD_7271269_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7271269_output #Row: " << tbl_Filter_TD_7271269_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7191780_key_leftMajor {
    int32_t _d_week_seq124;
    int32_t _inv_date_sk657;
    bool operator==(const SW_JOIN_INNER_TD_7191780_key_leftMajor& other) const {
        return ((_d_week_seq124 == other._d_week_seq124) && (_inv_date_sk657 == other._inv_date_sk657));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7191780_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7191780_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq124)) + (hash<int32_t>()(k._inv_date_sk657));
    }
};
}
struct SW_JOIN_INNER_TD_7191780_payload_leftMajor {
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    int32_t _inv_date_sk657;
    std::string _w_warehouse_name497;
    std::string _i_item_desc232;
    int32_t _d_date122;
    int32_t _d_week_seq124;
};
struct SW_JOIN_INNER_TD_7191780_key_rightMajor {
    int32_t _d_week_seq3551;
    int32_t _d_date_sk3547;
    bool operator==(const SW_JOIN_INNER_TD_7191780_key_rightMajor& other) const {
        return ((_d_week_seq3551 == other._d_week_seq3551) && (_d_date_sk3547 == other._d_date_sk3547));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7191780_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7191780_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq3551)) + (hash<int32_t>()(k._d_date_sk3547));
    }
};
}
struct SW_JOIN_INNER_TD_7191780_payload_rightMajor {
    int32_t _d_date_sk3547;
    int32_t _d_week_seq3551;
};
void SW_JOIN_INNER_TD_7191780(Table &tbl_JOIN_INNER_TD_859021_output, Table &tbl_Filter_TD_8869621_output, Table &tbl_JOIN_INNER_TD_7191780_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((d_week_seq#124 = d_week_seq#3551) AND (inv_date_sk#657 = d_date_sk#3547)))
    // Left Table: ListBuffer(cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232, d_date#122, d_week_seq#124)
    // Right Table: ListBuffer(d_date_sk#3547, d_week_seq#3551)
    // Output Table: ListBuffer(cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_date#122, d_week_seq#124)
    int left_nrow = tbl_JOIN_INNER_TD_859021_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8869621_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7191780_key_leftMajor, SW_JOIN_INNER_TD_7191780_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_859021_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq124_k = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 8);
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7191780_key_leftMajor keyA{_d_week_seq124_k, _inv_date_sk657_k};
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 1);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 2);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_859021_output.getInt64(i, 3);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_859021_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_859021_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _d_date122 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 7);
            int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_7191780_payload_leftMajor payloadA{_cs_ship_date_sk1106, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497, _i_item_desc232, _d_date122, _d_week_seq124};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8869621_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq3551_k = tbl_Filter_TD_8869621_output.getInt32(i, 1);
            int32_t _d_date_sk3547_k = tbl_Filter_TD_8869621_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7191780_key_leftMajor{_d_week_seq3551_k, _d_date_sk3547_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_ship_date_sk1106 = (it->second)._cs_ship_date_sk1106;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int32_t _d_date_sk3547 = tbl_Filter_TD_8869621_output.getInt32(i, 0);
                int32_t _d_week_seq3551 = tbl_Filter_TD_8869621_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 0, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_7191780_output.setInt64(r, 3, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_7191780_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_7191780_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 6, _d_date122);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 7, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7191780_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7191780_key_rightMajor, SW_JOIN_INNER_TD_7191780_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8869621_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq3551_k = tbl_Filter_TD_8869621_output.getInt32(i, 1);
            int32_t _d_date_sk3547_k = tbl_Filter_TD_8869621_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7191780_key_rightMajor keyA{_d_week_seq3551_k, _d_date_sk3547_k};
            int32_t _d_date_sk3547 = tbl_Filter_TD_8869621_output.getInt32(i, 0);
            int32_t _d_week_seq3551 = tbl_Filter_TD_8869621_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7191780_payload_rightMajor payloadA{_d_date_sk3547, _d_week_seq3551};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_859021_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq124_k = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 8);
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7191780_key_rightMajor{_d_week_seq124_k, _inv_date_sk657_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3547 = (it->second)._d_date_sk3547;
                int32_t _d_week_seq3551 = (it->second)._d_week_seq3551;
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 1);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 2);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_859021_output.getInt64(i, 3);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_859021_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_859021_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _d_date122 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 7);
                int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_859021_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 0, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_7191780_output.setInt64(r, 3, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_7191780_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_7191780_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 6, _d_date122);
                tbl_JOIN_INNER_TD_7191780_output.setInt32(r, 7, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7191780_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7191780_output #Row: " << tbl_JOIN_INNER_TD_7191780_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6800157(Table &tbl_SerializeFromObject_TD_7112138_input, Table &tbl_Filter_TD_6800157_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(p_promo_sk#294))
    // Input: ListBuffer(p_promo_sk#294)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7112138_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_7112138_input.getInt32(i, 0);
        if (_p_promo_sk294!= 0) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_7112138_input.getInt32(i, 0);
            tbl_Filter_TD_6800157_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_6800157_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6800157_output #Row: " << tbl_Filter_TD_6800157_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6683758_key_leftMajor {
    int32_t _cs_ship_date_sk1106;
    bool operator==(const SW_JOIN_INNER_TD_6683758_key_leftMajor& other) const {
        return ((_cs_ship_date_sk1106 == other._cs_ship_date_sk1106));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6683758_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6683758_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_ship_date_sk1106));
    }
};
}
struct SW_JOIN_INNER_TD_6683758_payload_leftMajor {
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    std::string _w_warehouse_name497;
    std::string _i_item_desc232;
    int32_t _d_date122;
    int32_t _d_week_seq124;
};
struct SW_JOIN_INNER_TD_6683758_key_rightMajor {
    int32_t _d_date_sk3575;
    bool operator==(const SW_JOIN_INNER_TD_6683758_key_rightMajor& other) const {
        return ((_d_date_sk3575 == other._d_date_sk3575));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6683758_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6683758_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3575));
    }
};
}
struct SW_JOIN_INNER_TD_6683758_payload_rightMajor {
    int32_t _d_date_sk3575;
    int32_t _d_date3577;
};
void SW_JOIN_INNER_TD_6683758(Table &tbl_JOIN_INNER_TD_7191780_output, Table &tbl_Filter_TD_7271269_output, Table &tbl_JOIN_INNER_TD_6683758_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((d_date#3577 > date_add(d_date#122, 5)) AND (cs_ship_date_sk#1106 = d_date_sk#3575)))
    // Left Table: ListBuffer(cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_date#122, d_week_seq#124)
    // Right Table: ListBuffer(d_date_sk#3575, d_date#3577)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_week_seq#124)
    int left_nrow = tbl_JOIN_INNER_TD_7191780_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7271269_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6683758_key_leftMajor, SW_JOIN_INNER_TD_6683758_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7191780_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_ship_date_sk1106_k = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6683758_key_leftMajor keyA{_cs_ship_date_sk1106_k};
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 1);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 2);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_7191780_output.getInt64(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_7191780_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_7191780_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _d_date122 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 6);
            int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_6683758_payload_leftMajor payloadA{_cs_ship_date_sk1106, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _w_warehouse_name497, _i_item_desc232, _d_date122, _d_week_seq124};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7271269_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3575_k = tbl_Filter_TD_7271269_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6683758_key_leftMajor{_d_date_sk3575_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_ship_date_sk1106 = (it->second)._cs_ship_date_sk1106;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int32_t _d_date_sk3575 = tbl_Filter_TD_7271269_output.getInt32(i, 0);
                int32_t _d_date3577 = tbl_Filter_TD_7271269_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6683758_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6683758_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_6683758_output.setInt64(r, 2, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_6683758_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_6683758_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6683758_output.setInt32(r, 5, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6683758_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6683758_key_rightMajor, SW_JOIN_INNER_TD_6683758_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7271269_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3575_k = tbl_Filter_TD_7271269_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6683758_key_rightMajor keyA{_d_date_sk3575_k};
            int32_t _d_date_sk3575 = tbl_Filter_TD_7271269_output.getInt32(i, 0);
            int32_t _d_date3577 = tbl_Filter_TD_7271269_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6683758_payload_rightMajor payloadA{_d_date_sk3575, _d_date3577};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7191780_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_ship_date_sk1106_k = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6683758_key_rightMajor{_cs_ship_date_sk1106_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3575 = (it->second)._d_date_sk3575;
                int32_t _d_date3577 = (it->second)._d_date3577;
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 1);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 2);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_7191780_output.getInt64(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_7191780_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_7191780_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _d_date122 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 6);
                int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_7191780_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_6683758_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6683758_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_6683758_output.setInt64(r, 2, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_6683758_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_6683758_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6683758_output.setInt32(r, 5, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6683758_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6683758_output #Row: " << tbl_JOIN_INNER_TD_6683758_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5726448(Table &tbl_SerializeFromObject_TD_6691106_input, Table &tbl_Filter_TD_5726448_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_item_sk#1025) AND isnotnull(cr_order_number#1039L)))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6691106_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_6691106_input.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_6691106_input.getInt64(i, 1);
        if ((_cr_item_sk1025!= 0) && (_cr_order_number1039L!= 0)) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_6691106_input.getInt32(i, 0);
            tbl_Filter_TD_5726448_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_6691106_input.getInt64(i, 1);
            tbl_Filter_TD_5726448_output.setInt64(r, 1, _cr_order_number1039L_t);
            r++;
        }
    }
    tbl_Filter_TD_5726448_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5726448_output #Row: " << tbl_Filter_TD_5726448_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_5593677_key {
    int32_t _p_promo_sk294;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_5593677_key& other) const {
        return ((_p_promo_sk294 == other._p_promo_sk294));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_5593677_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_5593677_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk294));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_5593677_payload {
    int32_t _p_promo_sk294;
};
void SW_JOIN_LEFTOUTER_TD_5593677(Table &tbl_JOIN_INNER_TD_6683758_output, Table &tbl_Filter_TD_6800157_output, Table &tbl_JOIN_LEFTOUTER_TD_5593677_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((cs_promo_sk#1120 = p_promo_sk#294))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_week_seq#124)
    // Right Table: ListBuffer(p_promo_sk#294)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_week_seq#124, p_promo_sk#294)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_5593677_key, SW_JOIN_LEFTOUTER_TD_5593677_payload> ht1;
    int nrow1 = tbl_Filter_TD_6800157_output.getNumRow();
    int nrow2 = tbl_JOIN_INNER_TD_6683758_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_promo_sk294_k = tbl_Filter_TD_6800157_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_5593677_key keyA{_p_promo_sk294_k};
        int32_t _p_promo_sk294 = tbl_Filter_TD_6800157_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_5593677_payload payloadA{_p_promo_sk294};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_6683758_output.getInt32(i, 1);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_5593677_key{_cs_promo_sk1120_k});
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6683758_output.getInt32(i, 0);
        int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_6683758_output.getInt32(i, 1);
        int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_6683758_output.getInt64(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_JOIN_INNER_TD_6683758_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_6683758_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_6683758_output.getInt32(i, 5);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_5593677_key{_cs_promo_sk1120_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _p_promo_sk294 = (it_it->second)._p_promo_sk294;
                tbl_JOIN_LEFTOUTER_TD_5593677_output.setInt32(r, 5, _p_promo_sk294);
                tbl_JOIN_LEFTOUTER_TD_5593677_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_LEFTOUTER_TD_5593677_output.setInt64(r, 1, _cs_order_number1121L);
                tbl_JOIN_LEFTOUTER_TD_5593677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_warehouse_name497);
                tbl_JOIN_LEFTOUTER_TD_5593677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232);
                tbl_JOIN_LEFTOUTER_TD_5593677_output.setInt32(r, 4, _d_week_seq124);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_5593677_output.setInt32(r, 0, _cs_item_sk1119);
            tbl_JOIN_LEFTOUTER_TD_5593677_output.setInt64(r, 1, _cs_order_number1121L);
            tbl_JOIN_LEFTOUTER_TD_5593677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_warehouse_name497);
            tbl_JOIN_LEFTOUTER_TD_5593677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232);
            tbl_JOIN_LEFTOUTER_TD_5593677_output.setInt32(r, 4, _d_week_seq124);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_5593677_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_5593677_output #Row: " << tbl_JOIN_LEFTOUTER_TD_5593677_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_4446657_key {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_4446657_key& other) const {
        return ((_cr_item_sk1025 == other._cr_item_sk1025) && (_cr_order_number1039L == other._cr_order_number1039L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_4446657_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_4446657_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_item_sk1025)) + (hash<int64_t>()(k._cr_order_number1039L));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_4446657_payload {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
};
void SW_JOIN_LEFTOUTER_TD_4446657(Table &tbl_JOIN_LEFTOUTER_TD_5593677_output, Table &tbl_Filter_TD_5726448_output, Table &tbl_JOIN_LEFTOUTER_TD_4446657_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((cr_item_sk#1025 = cs_item_sk#1119) AND (cr_order_number#1039L = cs_order_number#1121L)))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_week_seq#124, p_promo_sk#294)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    // Output Table: ListBuffer(w_warehouse_name#497, i_item_desc#232, d_week_seq#124, p_promo_sk#294)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_4446657_key, SW_JOIN_LEFTOUTER_TD_4446657_payload> ht1;
    int nrow1 = tbl_Filter_TD_5726448_output.getNumRow();
    int nrow2 = tbl_JOIN_LEFTOUTER_TD_5593677_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025_k = tbl_Filter_TD_5726448_output.getInt32(i, 0);
        int64_t _cr_order_number1039L_k = tbl_Filter_TD_5726448_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_4446657_key keyA{_cr_item_sk1025_k, _cr_order_number1039L_k};
        int32_t _cr_item_sk1025 = tbl_Filter_TD_5726448_output.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_Filter_TD_5726448_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_4446657_payload payloadA{_cr_item_sk1025, _cr_order_number1039L};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _cs_item_sk1119_k = tbl_JOIN_LEFTOUTER_TD_5593677_output.getInt32(i, 0);
        int64_t _cs_order_number1121L_k = tbl_JOIN_LEFTOUTER_TD_5593677_output.getInt64(i, 1);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_4446657_key{_cs_item_sk1119_k, _cs_order_number1121L_k});
        int32_t _cs_item_sk1119 = tbl_JOIN_LEFTOUTER_TD_5593677_output.getInt32(i, 0);
        int64_t _cs_order_number1121L = tbl_JOIN_LEFTOUTER_TD_5593677_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_JOIN_LEFTOUTER_TD_5593677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_LEFTOUTER_TD_5593677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_week_seq124 = tbl_JOIN_LEFTOUTER_TD_5593677_output.getInt32(i, 4);
        int32_t _p_promo_sk294 = tbl_JOIN_LEFTOUTER_TD_5593677_output.getInt32(i, 5);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_4446657_key{_cs_item_sk1119_k, _cs_order_number1121L_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cr_item_sk1025 = (it_it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it_it->second)._cr_order_number1039L;
                tbl_JOIN_LEFTOUTER_TD_4446657_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name497);
                tbl_JOIN_LEFTOUTER_TD_4446657_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232);
                tbl_JOIN_LEFTOUTER_TD_4446657_output.setInt32(r, 2, _d_week_seq124);
                tbl_JOIN_LEFTOUTER_TD_4446657_output.setInt32(r, 3, _p_promo_sk294);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_4446657_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name497);
            tbl_JOIN_LEFTOUTER_TD_4446657_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232);
            tbl_JOIN_LEFTOUTER_TD_4446657_output.setInt32(r, 2, _d_week_seq124);
            tbl_JOIN_LEFTOUTER_TD_4446657_output.setInt32(r, 3, _p_promo_sk294);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_4446657_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_4446657_output #Row: " << tbl_JOIN_LEFTOUTER_TD_4446657_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3846070_key {
    std::string _i_item_desc232;
    std::string _w_warehouse_name497;
    int32_t _d_week_seq124;
    bool operator==(const SW_Aggregate_TD_3846070_key& other) const { return (_i_item_desc232 == other._i_item_desc232) && (_w_warehouse_name497 == other._w_warehouse_name497) && (_d_week_seq124 == other._d_week_seq124); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3846070_key> {
    std::size_t operator() (const SW_Aggregate_TD_3846070_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_desc232)) + (hash<string>()(k._w_warehouse_name497)) + (hash<int32_t>()(k._d_week_seq124));
    }
};
}
struct SW_Aggregate_TD_3846070_payload {
    int64_t _no_promo3544L_sum_0;
    int64_t _promo3545L_sum_1;
    int64_t _total_cnt3546L_count_2;
};
void SW_Aggregate_TD_3846070(Table &tbl_JOIN_LEFTOUTER_TD_4446657_output, Table &tbl_Aggregate_TD_3846070_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, sum(CASE WHEN isnull(p_promo_sk#294) THEN 1 ELSE 0 END) AS no_promo#3544L, sum(CASE WHEN isnotnull(p_promo_sk#294) THEN 1 ELSE 0 END) AS promo#3545L, count(1) AS total_cnt#3546L)
    // Input: ListBuffer(w_warehouse_name#497, i_item_desc#232, d_week_seq#124, p_promo_sk#294)
    // Output: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3544L, promo#3545L, total_cnt#3546L)
    std::unordered_map<SW_Aggregate_TD_3846070_key, SW_Aggregate_TD_3846070_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_4446657_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_JOIN_LEFTOUTER_TD_4446657_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_LEFTOUTER_TD_4446657_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_week_seq124 = tbl_JOIN_LEFTOUTER_TD_4446657_output.getInt32(i, 2);
        int32_t _p_promo_sk294 = tbl_JOIN_LEFTOUTER_TD_4446657_output.getInt32(i, 3);
        SW_Aggregate_TD_3846070_key k{std::string(_i_item_desc232.data()), std::string(_w_warehouse_name497.data()), _d_week_seq124};
        int64_t _no_promo3544L_sum_0 = _p_promo_sk294 ? 1 : 0;
        int64_t _promo3545L_sum_1 = _p_promo_sk294 ? 1 : 0;
        int64_t _total_cnt3546L_count_2 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_3846070_payload p{_no_promo3544L_sum_0, _promo3545L_sum_1, _total_cnt3546L_count_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._no_promo3544L_sum_0 + _no_promo3544L_sum_0;
            p._no_promo3544L_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._promo3545L_sum_1 + _promo3545L_sum_1;
            p._promo3545L_sum_1 = sum_1;
            int64_t count_2 = (it->second)._total_cnt3546L_count_2 + _total_cnt3546L_count_2;
            p._total_cnt3546L_count_2 = count_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), ((it.first)._i_item_desc232).data(), ((it.first)._i_item_desc232).length());
        tbl_Aggregate_TD_3846070_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497{};
        memcpy(_w_warehouse_name497.data(), ((it.first)._w_warehouse_name497).data(), ((it.first)._w_warehouse_name497).length());
        tbl_Aggregate_TD_3846070_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497);
        tbl_Aggregate_TD_3846070_output.setInt32(r, 2, (it.first)._d_week_seq124);
        int64_t _no_promo3544L = (it.second)._no_promo3544L_sum_0;
        tbl_Aggregate_TD_3846070_output.setInt64(r, 3, _no_promo3544L);
        int64_t _promo3545L = (it.second)._promo3545L_sum_1;
        tbl_Aggregate_TD_3846070_output.setInt64(r, 4, _promo3545L);
        int64_t _total_cnt3546L = (it.second)._total_cnt3546L_count_2;
        tbl_Aggregate_TD_3846070_output.setInt64(r, 5, _total_cnt3546L);
        ++r;
    }
    tbl_Aggregate_TD_3846070_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3846070_output #Row: " << tbl_Aggregate_TD_3846070_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2462288(Table &tbl_Aggregate_TD_3846070_output, Table &tbl_Sort_TD_2462288_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(total_cnt#3546L DESC NULLS LAST, i_item_desc#232 ASC NULLS FIRST, w_warehouse_name#497 ASC NULLS FIRST, d_week_seq#124 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3544L, promo#3545L, total_cnt#3546L)
    // Output: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3544L, promo#3545L, total_cnt#3546L)
    struct SW_Sort_TD_2462288Row {
        std::string _i_item_desc232;
        std::string _w_warehouse_name497;
        int32_t _d_week_seq124;
        int64_t _no_promo3544L;
        int64_t _promo3545L;
        int64_t _total_cnt3546L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2462288Row& a, const SW_Sort_TD_2462288Row& b) const { return 
 (a._total_cnt3546L > b._total_cnt3546L) || 
 ((a._total_cnt3546L == b._total_cnt3546L) && (a._i_item_desc232 < b._i_item_desc232)) || 
 ((a._total_cnt3546L == b._total_cnt3546L) && (a._i_item_desc232 == b._i_item_desc232) && (a._w_warehouse_name497 < b._w_warehouse_name497)) || 
 ((a._total_cnt3546L == b._total_cnt3546L) && (a._i_item_desc232 == b._i_item_desc232) && (a._w_warehouse_name497 == b._w_warehouse_name497) && (a._d_week_seq124 < b._d_week_seq124)); 
}
    }SW_Sort_TD_2462288_order; 

    int nrow1 = tbl_Aggregate_TD_3846070_output.getNumRow();
    std::vector<SW_Sort_TD_2462288Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Aggregate_TD_3846070_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_Aggregate_TD_3846070_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _d_week_seq124 = tbl_Aggregate_TD_3846070_output.getInt32(i, 2);
        int64_t _no_promo3544L = tbl_Aggregate_TD_3846070_output.getInt64(i, 3);
        int64_t _promo3545L = tbl_Aggregate_TD_3846070_output.getInt64(i, 4);
        int64_t _total_cnt3546L = tbl_Aggregate_TD_3846070_output.getInt64(i, 5);
        SW_Sort_TD_2462288Row t = {std::string(_i_item_desc232.data()),std::string(_w_warehouse_name497.data()),_d_week_seq124,_no_promo3544L,_promo3545L,_total_cnt3546L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2462288_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_2462288_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497{};
        memcpy(_w_warehouse_name497.data(), (it._w_warehouse_name497).data(), (it._w_warehouse_name497).length());
        tbl_Sort_TD_2462288_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _w_warehouse_name497);
        tbl_Sort_TD_2462288_output.setInt32(r, 2, it._d_week_seq124);
        tbl_Sort_TD_2462288_output.setInt64(r, 3, it._no_promo3544L);
        tbl_Sort_TD_2462288_output.setInt64(r, 4, it._promo3545L);
        tbl_Sort_TD_2462288_output.setInt64(r, 5, it._total_cnt3546L);
        ++r;
    }
    tbl_Sort_TD_2462288_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2462288_output #Row: " << tbl_Sort_TD_2462288_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1508215(Table &tbl_Sort_TD_2462288_output, Table &tbl_LocalLimit_TD_1508215_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3544L, promo#3545L, total_cnt#3546L)
    // Output: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3544L, promo#3545L, total_cnt#3546L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Sort_TD_2462288_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1508215_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Sort_TD_2462288_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1508215_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497_n);
        tbl_LocalLimit_TD_1508215_output.setInt32(r, 2, tbl_Sort_TD_2462288_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1508215_output.setInt64(r, 3, tbl_Sort_TD_2462288_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1508215_output.setInt64(r, 4, tbl_Sort_TD_2462288_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1508215_output.setInt64(r, 5, tbl_Sort_TD_2462288_output.getInt64(i, 5));
        r++;
    }
    tbl_LocalLimit_TD_1508215_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1508215_output #Row: " << tbl_LocalLimit_TD_1508215_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0453784(Table &tbl_LocalLimit_TD_1508215_output, Table &tbl_GlobalLimit_TD_0453784_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3544L, promo#3545L, total_cnt#3546L)
    // Output: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3544L, promo#3545L, total_cnt#3546L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_LocalLimit_TD_1508215_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0453784_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_LocalLimit_TD_1508215_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0453784_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497_n);
        tbl_GlobalLimit_TD_0453784_output.setInt32(r, 2, tbl_LocalLimit_TD_1508215_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0453784_output.setInt64(r, 3, tbl_LocalLimit_TD_1508215_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0453784_output.setInt64(r, 4, tbl_LocalLimit_TD_1508215_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0453784_output.setInt64(r, 5, tbl_LocalLimit_TD_1508215_output.getInt64(i, 5));
        r++;
    }
    tbl_GlobalLimit_TD_0453784_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0453784_output #Row: " << tbl_GlobalLimit_TD_0453784_output.getNumRow() << std::endl;
}

