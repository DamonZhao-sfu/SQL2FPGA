#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_14437(Table &tbl_SerializeFromObject_TD_15742_input, Table &tbl_Filter_TD_14437_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(inv_quantity_on_hand#660) AND isnotnull(inv_item_sk#658)) AND isnotnull(inv_warehouse_sk#659)) AND isnotnull(inv_date_sk#657)))
    // Input: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Output: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15742_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_quantity_on_hand660 = tbl_SerializeFromObject_TD_15742_input.getInt32(i, 3);
        int32_t _inv_item_sk658 = tbl_SerializeFromObject_TD_15742_input.getInt32(i, 1);
        int32_t _inv_warehouse_sk659 = tbl_SerializeFromObject_TD_15742_input.getInt32(i, 2);
        int32_t _inv_date_sk657 = tbl_SerializeFromObject_TD_15742_input.getInt32(i, 0);
        if ((((_inv_quantity_on_hand660!= 0) && (_inv_item_sk658!= 0)) && (_inv_warehouse_sk659!= 0)) && (_inv_date_sk657!= 0)) {
            int32_t _inv_date_sk657_t = tbl_SerializeFromObject_TD_15742_input.getInt32(i, 0);
            tbl_Filter_TD_14437_output.setInt32(r, 0, _inv_date_sk657_t);
            int32_t _inv_item_sk658_t = tbl_SerializeFromObject_TD_15742_input.getInt32(i, 1);
            tbl_Filter_TD_14437_output.setInt32(r, 1, _inv_item_sk658_t);
            int32_t _inv_warehouse_sk659_t = tbl_SerializeFromObject_TD_15742_input.getInt32(i, 2);
            tbl_Filter_TD_14437_output.setInt32(r, 2, _inv_warehouse_sk659_t);
            int32_t _inv_quantity_on_hand660_t = tbl_SerializeFromObject_TD_15742_input.getInt32(i, 3);
            tbl_Filter_TD_14437_output.setInt32(r, 3, _inv_quantity_on_hand660_t);
            r++;
        }
    }
    tbl_Filter_TD_14437_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14437_output #Row: " << tbl_Filter_TD_14437_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14916(Table &tbl_SerializeFromObject_TD_15297_input, Table &tbl_Filter_TD_14916_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(cs_quantity#1122) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_bill_cdemo_sk#1108)) AND ((isnotnull(cs_bill_hdemo_sk#1109) AND isnotnull(cs_sold_date_sk#1104)) AND isnotnull(cs_ship_date_sk#1106))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_quantity#1122)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_quantity#1122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15297_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity1122 = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 7);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 4);
        int32_t _cs_bill_cdemo_sk1108 = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 2);
        int32_t _cs_bill_hdemo_sk1109 = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 3);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 0);
        int32_t _cs_ship_date_sk1106 = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 1);
        if ((((_cs_quantity1122!= 0) && (_cs_item_sk1119!= 0)) && (_cs_bill_cdemo_sk1108!= 0)) && (((_cs_bill_hdemo_sk1109!= 0) && (_cs_sold_date_sk1104!= 0)) && (_cs_ship_date_sk1106!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 0);
            tbl_Filter_TD_14916_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ship_date_sk1106_t = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 1);
            tbl_Filter_TD_14916_output.setInt32(r, 1, _cs_ship_date_sk1106_t);
            int32_t _cs_bill_cdemo_sk1108_t = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 2);
            tbl_Filter_TD_14916_output.setInt32(r, 2, _cs_bill_cdemo_sk1108_t);
            int32_t _cs_bill_hdemo_sk1109_t = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 3);
            tbl_Filter_TD_14916_output.setInt32(r, 3, _cs_bill_hdemo_sk1109_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 4);
            tbl_Filter_TD_14916_output.setInt32(r, 4, _cs_item_sk1119_t);
            int32_t _cs_promo_sk1120_t = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 5);
            tbl_Filter_TD_14916_output.setInt32(r, 5, _cs_promo_sk1120_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_15297_input.getInt64(i, 6);
            tbl_Filter_TD_14916_output.setInt64(r, 6, _cs_order_number1121L_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_15297_input.getInt32(i, 7);
            tbl_Filter_TD_14916_output.setInt32(r, 7, _cs_quantity1122_t);
            r++;
        }
    }
    tbl_Filter_TD_14916_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14916_output #Row: " << tbl_Filter_TD_14916_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13686(Table &tbl_SerializeFromObject_TD_14993_input, Table &tbl_Filter_TD_13686_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#495))
    // Input: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    // Output: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14993_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_SerializeFromObject_TD_14993_input.getInt32(i, 0);
        if (_w_warehouse_sk495!= 0) {
            int32_t _w_warehouse_sk495_t = tbl_SerializeFromObject_TD_14993_input.getInt32(i, 0);
            tbl_Filter_TD_13686_output.setInt32(r, 0, _w_warehouse_sk495_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_t = tbl_SerializeFromObject_TD_14993_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_13686_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497_t);
            r++;
        }
    }
    tbl_Filter_TD_13686_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13686_output #Row: " << tbl_Filter_TD_13686_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13575_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_13575_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13575_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13575_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_13575_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_bill_cdemo_sk1108;
    int32_t _cs_bill_hdemo_sk1109;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    int32_t _cs_quantity1122;
};
struct SW_JOIN_INNER_TD_13575_key_rightMajor {
    int32_t _inv_item_sk658;
    bool operator==(const SW_JOIN_INNER_TD_13575_key_rightMajor& other) const {
        return ((_inv_item_sk658 == other._inv_item_sk658));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13575_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13575_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_item_sk658));
    }
};
}
struct SW_JOIN_INNER_TD_13575_payload_rightMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_item_sk658;
    int32_t _inv_warehouse_sk659;
    int32_t _inv_quantity_on_hand660;
};
void SW_JOIN_INNER_TD_13575(Table &tbl_Filter_TD_14916_output, Table &tbl_Filter_TD_14437_output, Table &tbl_JOIN_INNER_TD_13575_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((inv_quantity_on_hand#660 < cs_quantity#1122) AND (cs_item_sk#1119 = inv_item_sk#658)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, cs_quantity#1122)
    // Right Table: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, inv_warehouse_sk#659)
    int left_nrow = tbl_Filter_TD_14916_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14437_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13575_key_leftMajor, SW_JOIN_INNER_TD_13575_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14916_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_14916_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_13575_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_14916_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_Filter_TD_14916_output.getInt32(i, 1);
            int32_t _cs_bill_cdemo_sk1108 = tbl_Filter_TD_14916_output.getInt32(i, 2);
            int32_t _cs_bill_hdemo_sk1109 = tbl_Filter_TD_14916_output.getInt32(i, 3);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_14916_output.getInt32(i, 4);
            int32_t _cs_promo_sk1120 = tbl_Filter_TD_14916_output.getInt32(i, 5);
            int64_t _cs_order_number1121L = tbl_Filter_TD_14916_output.getInt64(i, 6);
            int32_t _cs_quantity1122 = tbl_Filter_TD_14916_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_13575_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_cdemo_sk1108, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _cs_quantity1122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14437_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_14437_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13575_key_leftMajor{_inv_item_sk658_k});
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
                int32_t _inv_date_sk657 = tbl_Filter_TD_14437_output.getInt32(i, 0);
                int32_t _inv_item_sk658 = tbl_Filter_TD_14437_output.getInt32(i, 1);
                int32_t _inv_warehouse_sk659 = tbl_Filter_TD_14437_output.getInt32(i, 2);
                int32_t _inv_quantity_on_hand660 = tbl_Filter_TD_14437_output.getInt32(i, 3);
                if (_inv_quantity_on_hand660 < _cs_quantity1122) {
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 0, _cs_sold_date_sk1104);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 1, _cs_ship_date_sk1106);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 4, _cs_item_sk1119);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 5, _cs_promo_sk1120);
                    tbl_JOIN_INNER_TD_13575_output.setInt64(r, 6, _cs_order_number1121L);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 7, _inv_date_sk657);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 8, _inv_warehouse_sk659);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_13575_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13575_key_rightMajor, SW_JOIN_INNER_TD_13575_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14437_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_14437_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13575_key_rightMajor keyA{_inv_item_sk658_k};
            int32_t _inv_date_sk657 = tbl_Filter_TD_14437_output.getInt32(i, 0);
            int32_t _inv_item_sk658 = tbl_Filter_TD_14437_output.getInt32(i, 1);
            int32_t _inv_warehouse_sk659 = tbl_Filter_TD_14437_output.getInt32(i, 2);
            int32_t _inv_quantity_on_hand660 = tbl_Filter_TD_14437_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13575_payload_rightMajor payloadA{_inv_date_sk657, _inv_item_sk658, _inv_warehouse_sk659, _inv_quantity_on_hand660};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14916_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_14916_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13575_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_item_sk658 = (it->second)._inv_item_sk658;
                int32_t _inv_warehouse_sk659 = (it->second)._inv_warehouse_sk659;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_14916_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_Filter_TD_14916_output.getInt32(i, 1);
                int32_t _cs_bill_cdemo_sk1108 = tbl_Filter_TD_14916_output.getInt32(i, 2);
                int32_t _cs_bill_hdemo_sk1109 = tbl_Filter_TD_14916_output.getInt32(i, 3);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_14916_output.getInt32(i, 4);
                int32_t _cs_promo_sk1120 = tbl_Filter_TD_14916_output.getInt32(i, 5);
                int64_t _cs_order_number1121L = tbl_Filter_TD_14916_output.getInt64(i, 6);
                int32_t _cs_quantity1122 = tbl_Filter_TD_14916_output.getInt32(i, 7);
                if (_inv_quantity_on_hand660 < _cs_quantity1122) {
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 7, _inv_date_sk657);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 8, _inv_warehouse_sk659);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 0, _cs_sold_date_sk1104);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 1, _cs_ship_date_sk1106);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 4, _cs_item_sk1119);
                    tbl_JOIN_INNER_TD_13575_output.setInt32(r, 5, _cs_promo_sk1120);
                    tbl_JOIN_INNER_TD_13575_output.setInt64(r, 6, _cs_order_number1121L);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_13575_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13575_output #Row: " << tbl_JOIN_INNER_TD_13575_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12898(Table &tbl_SerializeFromObject_TD_13860_input, Table &tbl_Filter_TD_12898_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(i_item_sk#228, i_item_desc#232)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13860_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_13860_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_13860_input.getInt32(i, 0);
            tbl_Filter_TD_12898_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_13860_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12898_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_t);
            r++;
        }
    }
    tbl_Filter_TD_12898_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12898_output #Row: " << tbl_Filter_TD_12898_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12935_key_leftMajor {
    int32_t _inv_warehouse_sk659;
    bool operator==(const SW_JOIN_INNER_TD_12935_key_leftMajor& other) const {
        return ((_inv_warehouse_sk659 == other._inv_warehouse_sk659));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12935_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12935_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_warehouse_sk659));
    }
};
}
struct SW_JOIN_INNER_TD_12935_payload_leftMajor {
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
struct SW_JOIN_INNER_TD_12935_key_rightMajor {
    int32_t _w_warehouse_sk495;
    bool operator==(const SW_JOIN_INNER_TD_12935_key_rightMajor& other) const {
        return ((_w_warehouse_sk495 == other._w_warehouse_sk495));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12935_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12935_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk495));
    }
};
}
struct SW_JOIN_INNER_TD_12935_payload_rightMajor {
    int32_t _w_warehouse_sk495;
    std::string _w_warehouse_name497;
};
void SW_JOIN_INNER_TD_12935(Table &tbl_JOIN_INNER_TD_13575_output, Table &tbl_Filter_TD_13686_output, Table &tbl_JOIN_INNER_TD_12935_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((w_warehouse_sk#495 = inv_warehouse_sk#659))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, inv_warehouse_sk#659)
    // Right Table: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497)
    int left_nrow = tbl_JOIN_INNER_TD_13575_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13686_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12935_key_leftMajor, SW_JOIN_INNER_TD_12935_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13575_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_12935_key_leftMajor keyA{_inv_warehouse_sk659_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 1);
            int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 2);
            int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 3);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 4);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 5);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_13575_output.getInt64(i, 6);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 7);
            int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_12935_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_cdemo_sk1108, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _inv_warehouse_sk659};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13686_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_13686_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12935_key_leftMajor{_w_warehouse_sk495_k});
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
                int32_t _w_warehouse_sk495 = tbl_Filter_TD_13686_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_13686_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 4, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 5, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_12935_output.setInt64(r, 6, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 7, _inv_date_sk657);
                tbl_JOIN_INNER_TD_12935_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_warehouse_name497_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12935_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12935_key_rightMajor, SW_JOIN_INNER_TD_12935_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13686_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_13686_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12935_key_rightMajor keyA{_w_warehouse_sk495_k};
            int32_t _w_warehouse_sk495 = tbl_Filter_TD_13686_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_13686_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            SW_JOIN_INNER_TD_12935_payload_rightMajor payloadA{_w_warehouse_sk495, _w_warehouse_name497};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13575_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12935_key_rightMajor{_inv_warehouse_sk659_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 1);
                int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 2);
                int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 3);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 4);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 5);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_13575_output.getInt64(i, 6);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 7);
                int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_13575_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_12935_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 4, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 5, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_12935_output.setInt64(r, 6, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_12935_output.setInt32(r, 7, _inv_date_sk657);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12935_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12935_output #Row: " << tbl_JOIN_INNER_TD_12935_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11405(Table &tbl_SerializeFromObject_TD_1273_input, Table &tbl_Filter_TD_11405_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cd_marital_status#95) AND (cd_marital_status#95 = D)) AND isnotnull(cd_demo_sk#93)))
    // Input: ListBuffer(cd_demo_sk#93, cd_marital_status#95)
    // Output: ListBuffer(cd_demo_sk#93)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1273_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_SerializeFromObject_TD_1273_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_1273_input.getInt32(i, 0);
        if ((（std::string(_isnotnullcd_marital_status95.data()) != "NULL") && (std::string(_cd_marital_status95.data()) == "D")) && (_cd_demo_sk93!= 0)) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_1273_input.getInt32(i, 0);
            tbl_Filter_TD_11405_output.setInt32(r, 0, _cd_demo_sk93_t);
            r++;
        }
    }
    tbl_Filter_TD_11405_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11405_output #Row: " << tbl_Filter_TD_11405_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11196_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_11196_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11196_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11196_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_11196_payload_leftMajor {
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
struct SW_JOIN_INNER_TD_11196_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_11196_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11196_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11196_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_11196_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_desc232;
};
void SW_JOIN_INNER_TD_11196(Table &tbl_JOIN_INNER_TD_12935_output, Table &tbl_Filter_TD_12898_output, Table &tbl_JOIN_INNER_TD_11196_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = cs_item_sk#1119))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497)
    // Right Table: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_12935_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12898_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11196_key_leftMajor, SW_JOIN_INNER_TD_11196_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12935_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11196_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 1);
            int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 2);
            int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 3);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 4);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 5);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_12935_output.getInt64(i, 6);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_12935_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            SW_JOIN_INNER_TD_11196_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_cdemo_sk1108, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12898_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_12898_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11196_key_leftMajor{_i_item_sk228_k});
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
                int32_t _i_item_sk228 = tbl_Filter_TD_12898_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_12898_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 4, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 5, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_11196_output.setInt64(r, 6, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 7, _inv_date_sk657);
                tbl_JOIN_INNER_TD_11196_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_11196_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11196_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11196_key_rightMajor, SW_JOIN_INNER_TD_11196_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12898_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_12898_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11196_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_12898_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_12898_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_11196_payload_rightMajor payloadA{_i_item_sk228, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12935_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11196_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 1);
                int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 2);
                int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 3);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 4);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 5);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_12935_output.getInt64(i, 6);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_12935_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_12935_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                tbl_JOIN_INNER_TD_11196_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 2, _cs_bill_cdemo_sk1108);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 3, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 4, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 5, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_11196_output.setInt64(r, 6, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_11196_output.setInt32(r, 7, _inv_date_sk657);
                tbl_JOIN_INNER_TD_11196_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_warehouse_name497_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11196_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11196_output #Row: " << tbl_JOIN_INNER_TD_11196_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10598(Table &tbl_SerializeFromObject_TD_11948_input, Table &tbl_Filter_TD_10598_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(hd_buy_potential#206) AND (hd_buy_potential#206 = >10000)) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_buy_potential#206)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11948_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _hd_buy_potential206 = tbl_SerializeFromObject_TD_11948_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_11948_input.getInt32(i, 0);
        if ((（std::string(_isnotnullhd_buy_potential206.data()) != "NULL") && (std::string(_hd_buy_potential206.data()) == ">10000")) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_11948_input.getInt32(i, 0);
            tbl_Filter_TD_10598_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_10598_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10598_output #Row: " << tbl_Filter_TD_10598_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10128_key_leftMajor {
    int32_t _cs_bill_cdemo_sk1108;
    bool operator==(const SW_JOIN_INNER_TD_10128_key_leftMajor& other) const {
        return ((_cs_bill_cdemo_sk1108 == other._cs_bill_cdemo_sk1108));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10128_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10128_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_cdemo_sk1108));
    }
};
}
struct SW_JOIN_INNER_TD_10128_payload_leftMajor {
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
struct SW_JOIN_INNER_TD_10128_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_10128_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10128_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10128_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_10128_payload_rightMajor {
    int32_t _cd_demo_sk93;
};
void SW_JOIN_INNER_TD_10128(Table &tbl_JOIN_INNER_TD_11196_output, Table &tbl_Filter_TD_11405_output, Table &tbl_JOIN_INNER_TD_10128_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_cdemo_sk#1108 = cd_demo_sk#93))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_cdemo_sk#1108, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    // Right Table: ListBuffer(cd_demo_sk#93)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_11196_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11405_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10128_key_leftMajor, SW_JOIN_INNER_TD_10128_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11196_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_cdemo_sk1108_k = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10128_key_leftMajor keyA{_cs_bill_cdemo_sk1108_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 1);
            int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 2);
            int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 3);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 4);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 5);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_11196_output.getInt64(i, 6);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_11196_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_11196_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_10128_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_cdemo_sk1108, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11405_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_11405_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10128_key_leftMajor{_cd_demo_sk93_k});
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
                int32_t _cd_demo_sk93 = tbl_Filter_TD_11405_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 2, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 3, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 4, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_10128_output.setInt64(r, 5, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 6, _inv_date_sk657);
                tbl_JOIN_INNER_TD_10128_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_10128_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10128_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10128_key_rightMajor, SW_JOIN_INNER_TD_10128_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11405_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_11405_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10128_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_11405_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10128_payload_rightMajor payloadA{_cd_demo_sk93};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11196_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_cdemo_sk1108_k = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10128_key_rightMajor{_cs_bill_cdemo_sk1108_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 1);
                int32_t _cs_bill_cdemo_sk1108 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 2);
                int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 3);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 4);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 5);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_11196_output.getInt64(i, 6);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_11196_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_11196_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_11196_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 2, _cs_bill_hdemo_sk1109);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 3, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 4, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_10128_output.setInt64(r, 5, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_10128_output.setInt32(r, 6, _inv_date_sk657);
                tbl_JOIN_INNER_TD_10128_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_10128_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10128_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10128_output #Row: " << tbl_JOIN_INNER_TD_10128_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9757(Table &tbl_SerializeFromObject_TD_10832_input, Table &tbl_Filter_TD_9757_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND (d_year#126 = 1999)) AND isnotnull(d_date_sk#120)) AND (isnotnull(d_week_seq#124) AND isnotnull(d_date#122))))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_week_seq#124, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_date#122, d_week_seq#124)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10832_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10832_input.getInt32(i, 3);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10832_input.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_SerializeFromObject_TD_10832_input.getInt32(i, 2);
        int32_t _d_date122 = tbl_SerializeFromObject_TD_10832_input.getInt32(i, 1);
        if ((((_d_year126!= 0) && (_d_year126 == 1999)) && (_d_date_sk120!= 0)) && ((_d_week_seq124!= 0) && (_d_date122!= 0))) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10832_input.getInt32(i, 0);
            tbl_Filter_TD_9757_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_10832_input.getInt32(i, 1);
            tbl_Filter_TD_9757_output.setInt32(r, 1, _d_date122_t);
            int32_t _d_week_seq124_t = tbl_SerializeFromObject_TD_10832_input.getInt32(i, 2);
            tbl_Filter_TD_9757_output.setInt32(r, 2, _d_week_seq124_t);
            r++;
        }
    }
    tbl_Filter_TD_9757_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9757_output #Row: " << tbl_Filter_TD_9757_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9999_key_leftMajor {
    int32_t _cs_bill_hdemo_sk1109;
    bool operator==(const SW_JOIN_INNER_TD_9999_key_leftMajor& other) const {
        return ((_cs_bill_hdemo_sk1109 == other._cs_bill_hdemo_sk1109));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9999_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9999_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_hdemo_sk1109));
    }
};
}
struct SW_JOIN_INNER_TD_9999_payload_leftMajor {
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
struct SW_JOIN_INNER_TD_9999_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_9999_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9999_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9999_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_9999_payload_rightMajor {
    int32_t _hd_demo_sk204;
};
void SW_JOIN_INNER_TD_9999(Table &tbl_JOIN_INNER_TD_10128_output, Table &tbl_Filter_TD_10598_output, Table &tbl_JOIN_INNER_TD_9999_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_hdemo_sk#1109 = hd_demo_sk#204))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_bill_hdemo_sk#1109, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    // Right Table: ListBuffer(hd_demo_sk#204)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_10128_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10598_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9999_key_leftMajor, SW_JOIN_INNER_TD_9999_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10128_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_hdemo_sk1109_k = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9999_key_leftMajor keyA{_cs_bill_hdemo_sk1109_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 1);
            int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 2);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 3);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 4);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_10128_output.getInt64(i, 5);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 6);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_10128_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_10128_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_9999_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_bill_hdemo_sk1109, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10598_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_10598_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9999_key_leftMajor{_hd_demo_sk204_k});
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
                int32_t _hd_demo_sk204 = tbl_Filter_TD_10598_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 3, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_9999_output.setInt64(r, 4, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 5, _inv_date_sk657);
                tbl_JOIN_INNER_TD_9999_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_9999_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9999_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9999_key_rightMajor, SW_JOIN_INNER_TD_9999_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10598_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_10598_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9999_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_10598_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9999_payload_rightMajor payloadA{_hd_demo_sk204};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10128_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_hdemo_sk1109_k = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9999_key_rightMajor{_cs_bill_hdemo_sk1109_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 1);
                int32_t _cs_bill_hdemo_sk1109 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 2);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 3);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 4);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_10128_output.getInt64(i, 5);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_10128_output.getInt32(i, 6);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_10128_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_10128_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 1, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 3, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_9999_output.setInt64(r, 4, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_9999_output.setInt32(r, 5, _inv_date_sk657);
                tbl_JOIN_INNER_TD_9999_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_9999_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9999_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9999_output #Row: " << tbl_JOIN_INNER_TD_9999_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8712(Table &tbl_SerializeFromObject_TD_9187_input, Table &tbl_Filter_TD_8712_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_week_seq#3679) AND isnotnull(d_date_sk#3675)))
    // Input: ListBuffer(d_date_sk#3675, d_week_seq#3679)
    // Output: ListBuffer(d_date_sk#3675, d_week_seq#3679)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9187_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq3679 = tbl_SerializeFromObject_TD_9187_input.getInt32(i, 1);
        int32_t _d_date_sk3675 = tbl_SerializeFromObject_TD_9187_input.getInt32(i, 0);
        if ((_d_week_seq3679!= 0) && (_d_date_sk3675!= 0)) {
            int32_t _d_date_sk3675_t = tbl_SerializeFromObject_TD_9187_input.getInt32(i, 0);
            tbl_Filter_TD_8712_output.setInt32(r, 0, _d_date_sk3675_t);
            int32_t _d_week_seq3679_t = tbl_SerializeFromObject_TD_9187_input.getInt32(i, 1);
            tbl_Filter_TD_8712_output.setInt32(r, 1, _d_week_seq3679_t);
            r++;
        }
    }
    tbl_Filter_TD_8712_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8712_output #Row: " << tbl_Filter_TD_8712_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_831_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_831_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_831_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_831_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_831_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    int32_t _inv_date_sk657;
    std::string _w_warehouse_name497;
    std::string _i_item_desc232;
};
struct SW_JOIN_INNER_TD_831_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_831_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_831_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_831_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_831_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
    int32_t _d_week_seq124;
};
void SW_JOIN_INNER_TD_831(Table &tbl_JOIN_INNER_TD_9999_output, Table &tbl_Filter_TD_9757_output, Table &tbl_JOIN_INNER_TD_831_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#120))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122, d_week_seq#124)
    // Output Table: ListBuffer(cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232, d_date#122, d_week_seq#124)
    int left_nrow = tbl_JOIN_INNER_TD_9999_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9757_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_831_key_leftMajor, SW_JOIN_INNER_TD_831_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9999_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_831_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 0);
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 2);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 3);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_9999_output.getInt64(i, 4);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_9999_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_9999_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_831_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_date_sk1106, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9757_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9757_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_831_key_leftMajor{_d_date_sk120_k});
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
                int32_t _d_date_sk120 = tbl_Filter_TD_9757_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_9757_output.getInt32(i, 1);
                int32_t _d_week_seq124 = tbl_Filter_TD_9757_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 0, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_831_output.setInt64(r, 3, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 4, _inv_date_sk657);
                tbl_JOIN_INNER_TD_831_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_831_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 7, _d_date122);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 8, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_831_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_831_key_rightMajor, SW_JOIN_INNER_TD_831_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9757_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9757_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_831_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9757_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_9757_output.getInt32(i, 1);
            int32_t _d_week_seq124 = tbl_Filter_TD_9757_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_831_payload_rightMajor payloadA{_d_date_sk120, _d_date122, _d_week_seq124};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9999_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_831_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 0);
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 2);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 3);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_9999_output.getInt64(i, 4);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_9999_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_9999_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_9999_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 7, _d_date122);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 8, _d_week_seq124);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 0, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_831_output.setInt64(r, 3, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_831_output.setInt32(r, 4, _inv_date_sk657);
                tbl_JOIN_INNER_TD_831_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_831_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_831_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_831_output #Row: " << tbl_JOIN_INNER_TD_831_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7432(Table &tbl_SerializeFromObject_TD_8716_input, Table &tbl_Filter_TD_7432_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date#3705) AND isnotnull(d_date_sk#3703)))
    // Input: ListBuffer(d_date_sk#3703, d_date#3705)
    // Output: ListBuffer(d_date_sk#3703, d_date#3705)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8716_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date3705 = tbl_SerializeFromObject_TD_8716_input.getInt32(i, 1);
        int32_t _d_date_sk3703 = tbl_SerializeFromObject_TD_8716_input.getInt32(i, 0);
        if ((_d_date3705!= 0) && (_d_date_sk3703!= 0)) {
            int32_t _d_date_sk3703_t = tbl_SerializeFromObject_TD_8716_input.getInt32(i, 0);
            tbl_Filter_TD_7432_output.setInt32(r, 0, _d_date_sk3703_t);
            int32_t _d_date3705_t = tbl_SerializeFromObject_TD_8716_input.getInt32(i, 1);
            tbl_Filter_TD_7432_output.setInt32(r, 1, _d_date3705_t);
            r++;
        }
    }
    tbl_Filter_TD_7432_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7432_output #Row: " << tbl_Filter_TD_7432_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7736_key_leftMajor {
    int32_t _d_week_seq124;
    int32_t _inv_date_sk657;
    bool operator==(const SW_JOIN_INNER_TD_7736_key_leftMajor& other) const {
        return ((_d_week_seq124 == other._d_week_seq124) && (_inv_date_sk657 == other._inv_date_sk657));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7736_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7736_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq124)) + (hash<int32_t>()(k._inv_date_sk657));
    }
};
}
struct SW_JOIN_INNER_TD_7736_payload_leftMajor {
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
struct SW_JOIN_INNER_TD_7736_key_rightMajor {
    int32_t _d_week_seq3679;
    int32_t _d_date_sk3675;
    bool operator==(const SW_JOIN_INNER_TD_7736_key_rightMajor& other) const {
        return ((_d_week_seq3679 == other._d_week_seq3679) && (_d_date_sk3675 == other._d_date_sk3675));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7736_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7736_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq3679)) + (hash<int32_t>()(k._d_date_sk3675));
    }
};
}
struct SW_JOIN_INNER_TD_7736_payload_rightMajor {
    int32_t _d_date_sk3675;
    int32_t _d_week_seq3679;
};
void SW_JOIN_INNER_TD_7736(Table &tbl_JOIN_INNER_TD_831_output, Table &tbl_Filter_TD_8712_output, Table &tbl_JOIN_INNER_TD_7736_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((d_week_seq#124 = d_week_seq#3679) AND (inv_date_sk#657 = d_date_sk#3675)))
    // Left Table: ListBuffer(cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, inv_date_sk#657, w_warehouse_name#497, i_item_desc#232, d_date#122, d_week_seq#124)
    // Right Table: ListBuffer(d_date_sk#3675, d_week_seq#3679)
    // Output Table: ListBuffer(cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_date#122, d_week_seq#124)
    int left_nrow = tbl_JOIN_INNER_TD_831_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8712_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7736_key_leftMajor, SW_JOIN_INNER_TD_7736_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_831_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq124_k = tbl_JOIN_INNER_TD_831_output.getInt32(i, 8);
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_831_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7736_key_leftMajor keyA{_d_week_seq124_k, _inv_date_sk657_k};
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 1);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 2);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_831_output.getInt64(i, 3);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_831_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_831_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _d_date122 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 7);
            int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_7736_payload_leftMajor payloadA{_cs_ship_date_sk1106, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _inv_date_sk657, _w_warehouse_name497, _i_item_desc232, _d_date122, _d_week_seq124};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8712_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq3679_k = tbl_Filter_TD_8712_output.getInt32(i, 1);
            int32_t _d_date_sk3675_k = tbl_Filter_TD_8712_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7736_key_leftMajor{_d_week_seq3679_k, _d_date_sk3675_k});
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
                int32_t _d_date_sk3675 = tbl_Filter_TD_8712_output.getInt32(i, 0);
                int32_t _d_week_seq3679 = tbl_Filter_TD_8712_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 0, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_7736_output.setInt64(r, 3, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_7736_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_7736_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 6, _d_date122);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 7, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7736_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7736_key_rightMajor, SW_JOIN_INNER_TD_7736_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8712_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq3679_k = tbl_Filter_TD_8712_output.getInt32(i, 1);
            int32_t _d_date_sk3675_k = tbl_Filter_TD_8712_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7736_key_rightMajor keyA{_d_week_seq3679_k, _d_date_sk3675_k};
            int32_t _d_date_sk3675 = tbl_Filter_TD_8712_output.getInt32(i, 0);
            int32_t _d_week_seq3679 = tbl_Filter_TD_8712_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7736_payload_rightMajor payloadA{_d_date_sk3675, _d_week_seq3679};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_831_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq124_k = tbl_JOIN_INNER_TD_831_output.getInt32(i, 8);
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_831_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7736_key_rightMajor{_d_week_seq124_k, _inv_date_sk657_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3675 = (it->second)._d_date_sk3675;
                int32_t _d_week_seq3679 = (it->second)._d_week_seq3679;
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 1);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 2);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_831_output.getInt64(i, 3);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_831_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_831_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _d_date122 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 7);
                int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_831_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 0, _cs_ship_date_sk1106);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_7736_output.setInt64(r, 3, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_7736_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_7736_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 6, _d_date122);
                tbl_JOIN_INNER_TD_7736_output.setInt32(r, 7, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7736_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7736_output #Row: " << tbl_JOIN_INNER_TD_7736_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6112(Table &tbl_SerializeFromObject_TD_7463_input, Table &tbl_Filter_TD_6112_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(p_promo_sk#294))
    // Input: ListBuffer(p_promo_sk#294)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7463_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_7463_input.getInt32(i, 0);
        if (_p_promo_sk294!= 0) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_7463_input.getInt32(i, 0);
            tbl_Filter_TD_6112_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_6112_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6112_output #Row: " << tbl_Filter_TD_6112_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6914_key_leftMajor {
    int32_t _cs_ship_date_sk1106;
    bool operator==(const SW_JOIN_INNER_TD_6914_key_leftMajor& other) const {
        return ((_cs_ship_date_sk1106 == other._cs_ship_date_sk1106));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6914_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6914_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_ship_date_sk1106));
    }
};
}
struct SW_JOIN_INNER_TD_6914_payload_leftMajor {
    int32_t _cs_ship_date_sk1106;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int64_t _cs_order_number1121L;
    std::string _w_warehouse_name497;
    std::string _i_item_desc232;
    int32_t _d_date122;
    int32_t _d_week_seq124;
};
struct SW_JOIN_INNER_TD_6914_key_rightMajor {
    int32_t _d_date_sk3703;
    bool operator==(const SW_JOIN_INNER_TD_6914_key_rightMajor& other) const {
        return ((_d_date_sk3703 == other._d_date_sk3703));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6914_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6914_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3703));
    }
};
}
struct SW_JOIN_INNER_TD_6914_payload_rightMajor {
    int32_t _d_date_sk3703;
    int32_t _d_date3705;
};
void SW_JOIN_INNER_TD_6914(Table &tbl_JOIN_INNER_TD_7736_output, Table &tbl_Filter_TD_7432_output, Table &tbl_JOIN_INNER_TD_6914_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((d_date#3705 > date_add(d_date#122, 5)) AND (cs_ship_date_sk#1106 = d_date_sk#3703)))
    // Left Table: ListBuffer(cs_ship_date_sk#1106, cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_date#122, d_week_seq#124)
    // Right Table: ListBuffer(d_date_sk#3703, d_date#3705)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_week_seq#124)
    int left_nrow = tbl_JOIN_INNER_TD_7736_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7432_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6914_key_leftMajor, SW_JOIN_INNER_TD_6914_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7736_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_ship_date_sk1106_k = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6914_key_leftMajor keyA{_cs_ship_date_sk1106_k};
            int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 1);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 2);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_7736_output.getInt64(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_7736_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_7736_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _d_date122 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 6);
            int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_6914_payload_leftMajor payloadA{_cs_ship_date_sk1106, _cs_item_sk1119, _cs_promo_sk1120, _cs_order_number1121L, _w_warehouse_name497, _i_item_desc232, _d_date122, _d_week_seq124};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7432_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3703_k = tbl_Filter_TD_7432_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6914_key_leftMajor{_d_date_sk3703_k});
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
                int32_t _d_date_sk3703 = tbl_Filter_TD_7432_output.getInt32(i, 0);
                int32_t _d_date3705 = tbl_Filter_TD_7432_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6914_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6914_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_6914_output.setInt64(r, 2, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_6914_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_6914_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6914_output.setInt32(r, 5, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6914_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6914_key_rightMajor, SW_JOIN_INNER_TD_6914_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7432_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3703_k = tbl_Filter_TD_7432_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6914_key_rightMajor keyA{_d_date_sk3703_k};
            int32_t _d_date_sk3703 = tbl_Filter_TD_7432_output.getInt32(i, 0);
            int32_t _d_date3705 = tbl_Filter_TD_7432_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6914_payload_rightMajor payloadA{_d_date_sk3703, _d_date3705};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7736_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_ship_date_sk1106_k = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6914_key_rightMajor{_cs_ship_date_sk1106_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3703 = (it->second)._d_date_sk3703;
                int32_t _d_date3705 = (it->second)._d_date3705;
                int32_t _cs_ship_date_sk1106 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 1);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 2);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_7736_output.getInt64(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_7736_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_7736_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _d_date122 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 6);
                int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_7736_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_6914_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6914_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_6914_output.setInt64(r, 2, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_6914_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_6914_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6914_output.setInt32(r, 5, _d_week_seq124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6914_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6914_output #Row: " << tbl_JOIN_INNER_TD_6914_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5163(Table &tbl_SerializeFromObject_TD_6819_input, Table &tbl_Filter_TD_5163_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_item_sk#1025) AND isnotnull(cr_order_number#1039L)))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6819_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_6819_input.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_6819_input.getInt64(i, 1);
        if ((_cr_item_sk1025!= 0) && (_cr_order_number1039L!= 0)) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_6819_input.getInt32(i, 0);
            tbl_Filter_TD_5163_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_6819_input.getInt64(i, 1);
            tbl_Filter_TD_5163_output.setInt64(r, 1, _cr_order_number1039L_t);
            r++;
        }
    }
    tbl_Filter_TD_5163_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5163_output #Row: " << tbl_Filter_TD_5163_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_5291_key {
    int32_t _p_promo_sk294;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_5291_key& other) const {
        return ((_p_promo_sk294 == other._p_promo_sk294));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_5291_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_5291_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk294));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_5291_payload {
    int32_t _p_promo_sk294;
};
void SW_JOIN_LEFTOUTER_TD_5291(Table &tbl_JOIN_INNER_TD_6914_output, Table &tbl_Filter_TD_6112_output, Table &tbl_JOIN_LEFTOUTER_TD_5291_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((cs_promo_sk#1120 = p_promo_sk#294))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_week_seq#124)
    // Right Table: ListBuffer(p_promo_sk#294)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_week_seq#124, p_promo_sk#294)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_5291_key, SW_JOIN_LEFTOUTER_TD_5291_payload> ht1;
    int nrow1 = tbl_Filter_TD_6112_output.getNumRow();
    int nrow2 = tbl_JOIN_INNER_TD_6914_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_promo_sk294_k = tbl_Filter_TD_6112_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_5291_key keyA{_p_promo_sk294_k};
        int32_t _p_promo_sk294 = tbl_Filter_TD_6112_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_5291_payload payloadA{_p_promo_sk294};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_6914_output.getInt32(i, 1);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_5291_key{_cs_promo_sk1120_k});
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6914_output.getInt32(i, 0);
        int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_6914_output.getInt32(i, 1);
        int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_6914_output.getInt64(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_JOIN_INNER_TD_6914_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_6914_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_6914_output.getInt32(i, 5);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_5291_key{_cs_promo_sk1120_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _p_promo_sk294 = (it_it->second)._p_promo_sk294;
                tbl_JOIN_LEFTOUTER_TD_5291_output.setInt32(r, 5, _p_promo_sk294);
                tbl_JOIN_LEFTOUTER_TD_5291_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_LEFTOUTER_TD_5291_output.setInt64(r, 1, _cs_order_number1121L);
                tbl_JOIN_LEFTOUTER_TD_5291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_warehouse_name497);
                tbl_JOIN_LEFTOUTER_TD_5291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232);
                tbl_JOIN_LEFTOUTER_TD_5291_output.setInt32(r, 4, _d_week_seq124);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_5291_output.setInt32(r, 0, _cs_item_sk1119);
            tbl_JOIN_LEFTOUTER_TD_5291_output.setInt64(r, 1, _cs_order_number1121L);
            tbl_JOIN_LEFTOUTER_TD_5291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, "");
            tbl_JOIN_LEFTOUTER_TD_5291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, "");
            tbl_JOIN_LEFTOUTER_TD_5291_output.setInt32(r, 4, _d_week_seq124);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_5291_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_5291_output #Row: " << tbl_JOIN_LEFTOUTER_TD_5291_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_4899_key {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_4899_key& other) const {
        return ((_cr_item_sk1025 == other._cr_item_sk1025) && (_cr_order_number1039L == other._cr_order_number1039L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_4899_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_4899_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_item_sk1025)) + (hash<int64_t>()(k._cr_order_number1039L));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_4899_payload {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
};
void SW_JOIN_LEFTOUTER_TD_4899(Table &tbl_JOIN_LEFTOUTER_TD_5291_output, Table &tbl_Filter_TD_5163_output, Table &tbl_JOIN_LEFTOUTER_TD_4899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((cr_item_sk#1025 = cs_item_sk#1119) AND (cr_order_number#1039L = cs_order_number#1121L)))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_order_number#1121L, w_warehouse_name#497, i_item_desc#232, d_week_seq#124, p_promo_sk#294)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L)
    // Output Table: ListBuffer(w_warehouse_name#497, i_item_desc#232, d_week_seq#124, p_promo_sk#294)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_4899_key, SW_JOIN_LEFTOUTER_TD_4899_payload> ht1;
    int nrow1 = tbl_Filter_TD_5163_output.getNumRow();
    int nrow2 = tbl_JOIN_LEFTOUTER_TD_5291_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025_k = tbl_Filter_TD_5163_output.getInt32(i, 0);
        int64_t _cr_order_number1039L_k = tbl_Filter_TD_5163_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_4899_key keyA{_cr_item_sk1025_k, _cr_order_number1039L_k};
        int32_t _cr_item_sk1025 = tbl_Filter_TD_5163_output.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_Filter_TD_5163_output.getInt64(i, 1);
        SW_JOIN_LEFTOUTER_TD_4899_payload payloadA{_cr_item_sk1025, _cr_order_number1039L};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _cs_item_sk1119_k = tbl_JOIN_LEFTOUTER_TD_5291_output.getInt32(i, 0);
        int64_t _cs_order_number1121L_k = tbl_JOIN_LEFTOUTER_TD_5291_output.getInt64(i, 1);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_4899_key{_cs_item_sk1119_k, _cs_order_number1121L_k});
        int32_t _cs_item_sk1119 = tbl_JOIN_LEFTOUTER_TD_5291_output.getInt32(i, 0);
        int64_t _cs_order_number1121L = tbl_JOIN_LEFTOUTER_TD_5291_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_JOIN_LEFTOUTER_TD_5291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_LEFTOUTER_TD_5291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_week_seq124 = tbl_JOIN_LEFTOUTER_TD_5291_output.getInt32(i, 4);
        int32_t _p_promo_sk294 = tbl_JOIN_LEFTOUTER_TD_5291_output.getInt32(i, 5);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_4899_key{_cs_item_sk1119_k, _cs_order_number1121L_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cr_item_sk1025 = (it_it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it_it->second)._cr_order_number1039L;
                tbl_JOIN_LEFTOUTER_TD_4899_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name497);
                tbl_JOIN_LEFTOUTER_TD_4899_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232);
                tbl_JOIN_LEFTOUTER_TD_4899_output.setInt32(r, 2, _d_week_seq124);
                tbl_JOIN_LEFTOUTER_TD_4899_output.setInt32(r, 3, _p_promo_sk294);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_4899_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, "");
            tbl_JOIN_LEFTOUTER_TD_4899_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, "");
            tbl_JOIN_LEFTOUTER_TD_4899_output.setInt32(r, 2, _d_week_seq124);
            tbl_JOIN_LEFTOUTER_TD_4899_output.setInt32(r, 3, _p_promo_sk294);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_4899_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_4899_output #Row: " << tbl_JOIN_LEFTOUTER_TD_4899_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3300_key {
    std::string _i_item_desc232;
    std::string _w_warehouse_name497;
    int32_t _d_week_seq124;
    bool operator==(const SW_Aggregate_TD_3300_key& other) const { return (_i_item_desc232 == other._i_item_desc232) && (_w_warehouse_name497 == other._w_warehouse_name497) && (_d_week_seq124 == other._d_week_seq124); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3300_key> {
    std::size_t operator() (const SW_Aggregate_TD_3300_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_desc232)) + (hash<string>()(k._w_warehouse_name497)) + (hash<int32_t>()(k._d_week_seq124));
    }
};
}
struct SW_Aggregate_TD_3300_payload {
    int64_t _no_promo3672L_sum_0;
    int64_t _promo3673L_sum_1;
    int64_t _total_cnt3674L_count_2;
};
void SW_Aggregate_TD_3300(Table &tbl_JOIN_LEFTOUTER_TD_4899_output, Table &tbl_Aggregate_TD_3300_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, sum(CASE WHEN isnull(p_promo_sk#294) THEN 1 ELSE 0 END) AS no_promo#3672L, sum(CASE WHEN isnotnull(p_promo_sk#294) THEN 1 ELSE 0 END) AS promo#3673L, count(1) AS total_cnt#3674L)
    // Input: ListBuffer(w_warehouse_name#497, i_item_desc#232, d_week_seq#124, p_promo_sk#294)
    // Output: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3672L, promo#3673L, total_cnt#3674L)
    std::unordered_map<SW_Aggregate_TD_3300_key, SW_Aggregate_TD_3300_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_4899_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_JOIN_LEFTOUTER_TD_4899_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_LEFTOUTER_TD_4899_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_week_seq124 = tbl_JOIN_LEFTOUTER_TD_4899_output.getInt32(i, 2);
        int32_t _p_promo_sk294 = tbl_JOIN_LEFTOUTER_TD_4899_output.getInt32(i, 3);
        SW_Aggregate_TD_3300_key k{std::string(_i_item_desc232.data()), std::string(_w_warehouse_name497.data()), _d_week_seq124};
        int64_t _no_promo3672L_sum_0 = _p_promo_sk294 ? 1 : 0;
        int64_t _promo3673L_sum_1 = _p_promo_sk294 ? 1 : 0;
        int64_t _total_cnt3674L_count_2 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_3300_payload p{_no_promo3672L_sum_0, _promo3673L_sum_1, _total_cnt3674L_count_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._no_promo3672L_sum_0 + _no_promo3672L_sum_0;
            p._no_promo3672L_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._promo3673L_sum_1 + _promo3673L_sum_1;
            p._promo3673L_sum_1 = sum_1;
            int64_t count_2 = (it->second)._total_cnt3674L_count_2 + _total_cnt3674L_count_2;
            p._total_cnt3674L_count_2 = count_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), ((it.first)._i_item_desc232).data(), ((it.first)._i_item_desc232).length());
        tbl_Aggregate_TD_3300_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497{};
        memcpy(_w_warehouse_name497.data(), ((it.first)._w_warehouse_name497).data(), ((it.first)._w_warehouse_name497).length());
        tbl_Aggregate_TD_3300_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497);
        tbl_Aggregate_TD_3300_output.setInt32(r, 2, (it.first)._d_week_seq124);
        int64_t _no_promo3672L = (it.second)._no_promo3672L_sum_0;
        tbl_Aggregate_TD_3300_output.setInt64(r, 3, _no_promo3672L);
        int64_t _promo3673L = (it.second)._promo3673L_sum_1;
        tbl_Aggregate_TD_3300_output.setInt64(r, 4, _promo3673L);
        int64_t _total_cnt3674L = (it.second)._total_cnt3674L_count_2;
        tbl_Aggregate_TD_3300_output.setInt64(r, 5, _total_cnt3674L);
        ++r;
    }
    tbl_Aggregate_TD_3300_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3300_output #Row: " << tbl_Aggregate_TD_3300_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2669(Table &tbl_Aggregate_TD_3300_output, Table &tbl_Sort_TD_2669_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(total_cnt#3674L DESC NULLS LAST, i_item_desc#232 ASC NULLS FIRST, w_warehouse_name#497 ASC NULLS FIRST, d_week_seq#124 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3672L, promo#3673L, total_cnt#3674L)
    // Output: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3672L, promo#3673L, total_cnt#3674L)
    struct SW_Sort_TD_2669Row {
        std::string _i_item_desc232;
        std::string _w_warehouse_name497;
        int32_t _d_week_seq124;
        int64_t _no_promo3672L;
        int64_t _promo3673L;
        int64_t _total_cnt3674L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2669Row& a, const SW_Sort_TD_2669Row& b) const { return 
 (a._total_cnt3674L > b._total_cnt3674L) || 
 ((a._total_cnt3674L == b._total_cnt3674L) && (a._i_item_desc232 < b._i_item_desc232)) || 
 ((a._total_cnt3674L == b._total_cnt3674L) && (a._i_item_desc232 == b._i_item_desc232) && (a._w_warehouse_name497 < b._w_warehouse_name497)) || 
 ((a._total_cnt3674L == b._total_cnt3674L) && (a._i_item_desc232 == b._i_item_desc232) && (a._w_warehouse_name497 == b._w_warehouse_name497) && (a._d_week_seq124 < b._d_week_seq124)); 
}
    }SW_Sort_TD_2669_order; 

    int nrow1 = tbl_Aggregate_TD_3300_output.getNumRow();
    std::vector<SW_Sort_TD_2669Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Aggregate_TD_3300_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_Aggregate_TD_3300_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _d_week_seq124 = tbl_Aggregate_TD_3300_output.getInt32(i, 2);
        int64_t _no_promo3672L = tbl_Aggregate_TD_3300_output.getInt64(i, 3);
        int64_t _promo3673L = tbl_Aggregate_TD_3300_output.getInt64(i, 4);
        int64_t _total_cnt3674L = tbl_Aggregate_TD_3300_output.getInt64(i, 5);
        SW_Sort_TD_2669Row t = {std::string(_i_item_desc232.data()),std::string(_w_warehouse_name497.data()),_d_week_seq124,_no_promo3672L,_promo3673L,_total_cnt3674L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2669_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_2669_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497{};
        memcpy(_w_warehouse_name497.data(), (it._w_warehouse_name497).data(), (it._w_warehouse_name497).length());
        tbl_Sort_TD_2669_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _w_warehouse_name497);
        tbl_Sort_TD_2669_output.setInt32(r, 2, it._d_week_seq124);
        tbl_Sort_TD_2669_output.setInt64(r, 3, it._no_promo3672L);
        tbl_Sort_TD_2669_output.setInt64(r, 4, it._promo3673L);
        tbl_Sort_TD_2669_output.setInt64(r, 5, it._total_cnt3674L);
        ++r;
    }
    tbl_Sort_TD_2669_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2669_output #Row: " << tbl_Sort_TD_2669_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1337(Table &tbl_Sort_TD_2669_output, Table &tbl_LocalLimit_TD_1337_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3672L, promo#3673L, total_cnt#3674L)
    // Output: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3672L, promo#3673L, total_cnt#3674L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Sort_TD_2669_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1337_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Sort_TD_2669_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1337_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497_n);
        tbl_LocalLimit_TD_1337_output.setInt32(r, 2, tbl_Sort_TD_2669_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1337_output.setInt32(r, 3, tbl_Sort_TD_2669_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1337_output.setInt32(r, 4, tbl_Sort_TD_2669_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1337_output.setInt32(r, 5, tbl_Sort_TD_2669_output.getInt64(i, 5));
        r++;
    }
    tbl_LocalLimit_TD_1337_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1337_output #Row: " << tbl_LocalLimit_TD_1337_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0890(Table &tbl_LocalLimit_TD_1337_output, Table &tbl_GlobalLimit_TD_0890_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3672L, promo#3673L, total_cnt#3674L)
    // Output: ListBuffer(i_item_desc#232, w_warehouse_name#497, d_week_seq#124, no_promo#3672L, promo#3673L, total_cnt#3674L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_LocalLimit_TD_1337_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0890_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_LocalLimit_TD_1337_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0890_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497_n);
        tbl_GlobalLimit_TD_0890_output.setInt32(r, 2, tbl_LocalLimit_TD_1337_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0890_output.setInt32(r, 3, tbl_LocalLimit_TD_1337_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0890_output.setInt32(r, 4, tbl_LocalLimit_TD_1337_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0890_output.setInt32(r, 5, tbl_LocalLimit_TD_1337_output.getInt64(i, 5));
        r++;
    }
    tbl_GlobalLimit_TD_0890_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0890_output #Row: " << tbl_GlobalLimit_TD_0890_output.getNumRow() << std::endl;
}

