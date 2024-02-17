#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7837(Table &tbl_SerializeFromObject_TD_8723_input, Table &tbl_Filter_TD_7837_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_order_number#3568L) AND isnotnull(ws_warehouse_sk#3566)))
    // Input: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    // Output: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8723_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number3568L = tbl_SerializeFromObject_TD_8723_input.getInt64(i, 1);
        int32_t _ws_warehouse_sk3566 = tbl_SerializeFromObject_TD_8723_input.getInt32(i, 0);
        if ((_ws_order_number3568L!= 0) && (_ws_warehouse_sk3566!= 0)) {
            int32_t _ws_warehouse_sk3566_t = tbl_SerializeFromObject_TD_8723_input.getInt32(i, 0);
            tbl_Filter_TD_7837_output.setInt32(r, 0, _ws_warehouse_sk3566_t);
            int64_t _ws_order_number3568L_t = tbl_SerializeFromObject_TD_8723_input.getInt64(i, 1);
            tbl_Filter_TD_7837_output.setInt64(r, 1, _ws_order_number3568L_t);
            r++;
        }
    }
    tbl_Filter_TD_7837_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7837_output #Row: " << tbl_Filter_TD_7837_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7133(Table &tbl_SerializeFromObject_TD_8229_input, Table &tbl_Filter_TD_7133_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_order_number#746L) AND isnotnull(ws_warehouse_sk#744)))
    // Input: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    // Output: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8229_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number746L = tbl_SerializeFromObject_TD_8229_input.getInt64(i, 1);
        int32_t _ws_warehouse_sk744 = tbl_SerializeFromObject_TD_8229_input.getInt32(i, 0);
        if ((_ws_order_number746L!= 0) && (_ws_warehouse_sk744!= 0)) {
            int32_t _ws_warehouse_sk744_t = tbl_SerializeFromObject_TD_8229_input.getInt32(i, 0);
            tbl_Filter_TD_7133_output.setInt32(r, 0, _ws_warehouse_sk744_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_8229_input.getInt64(i, 1);
            tbl_Filter_TD_7133_output.setInt64(r, 1, _ws_order_number746L_t);
            r++;
        }
    }
    tbl_Filter_TD_7133_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7133_output #Row: " << tbl_Filter_TD_7133_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7914(Table &tbl_SerializeFromObject_TD_8301_input, Table &tbl_Filter_TD_7914_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_order_number#3568L) AND isnotnull(ws_warehouse_sk#3566)))
    // Input: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    // Output: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8301_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number3568L = tbl_SerializeFromObject_TD_8301_input.getInt64(i, 1);
        int32_t _ws_warehouse_sk3566 = tbl_SerializeFromObject_TD_8301_input.getInt32(i, 0);
        if ((_ws_order_number3568L!= 0) && (_ws_warehouse_sk3566!= 0)) {
            int32_t _ws_warehouse_sk3566_t = tbl_SerializeFromObject_TD_8301_input.getInt32(i, 0);
            tbl_Filter_TD_7914_output.setInt32(r, 0, _ws_warehouse_sk3566_t);
            int64_t _ws_order_number3568L_t = tbl_SerializeFromObject_TD_8301_input.getInt64(i, 1);
            tbl_Filter_TD_7914_output.setInt64(r, 1, _ws_order_number3568L_t);
            r++;
        }
    }
    tbl_Filter_TD_7914_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7914_output #Row: " << tbl_Filter_TD_7914_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7445(Table &tbl_SerializeFromObject_TD_8621_input, Table &tbl_Filter_TD_7445_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_order_number#746L) AND isnotnull(ws_warehouse_sk#744)))
    // Input: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    // Output: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8621_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number746L = tbl_SerializeFromObject_TD_8621_input.getInt64(i, 1);
        int32_t _ws_warehouse_sk744 = tbl_SerializeFromObject_TD_8621_input.getInt32(i, 0);
        if ((_ws_order_number746L!= 0) && (_ws_warehouse_sk744!= 0)) {
            int32_t _ws_warehouse_sk744_t = tbl_SerializeFromObject_TD_8621_input.getInt32(i, 0);
            tbl_Filter_TD_7445_output.setInt32(r, 0, _ws_warehouse_sk744_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_8621_input.getInt64(i, 1);
            tbl_Filter_TD_7445_output.setInt64(r, 1, _ws_order_number746L_t);
            r++;
        }
    }
    tbl_Filter_TD_7445_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7445_output #Row: " << tbl_Filter_TD_7445_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6941_key_leftMajor {
    int64_t _ws_order_number746L;
    int32_t _ws_warehouse_sk744;
    bool operator==(const SW_JOIN_INNER_TD_6941_key_leftMajor& other) const {
        return ((_ws_order_number746L == other._ws_order_number746L) && (_ws_warehouse_sk744 == other._ws_warehouse_sk744));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6941_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6941_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number746L));
    }
};
}
struct SW_JOIN_INNER_TD_6941_payload_leftMajor {
    int32_t _ws_warehouse_sk744;
    int64_t _ws_order_number746L;
};
struct SW_JOIN_INNER_TD_6941_key_rightMajor {
    int64_t _ws_order_number3568L;
    int32_t _ws_warehouse_sk3566;
    bool operator==(const SW_JOIN_INNER_TD_6941_key_rightMajor& other) const {
        return ((_ws_order_number3568L == other._ws_order_number3568L) && (_ws_warehouse_sk3566 == other._ws_warehouse_sk3566));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6941_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6941_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number3568L));
    }
};
}
struct SW_JOIN_INNER_TD_6941_payload_rightMajor {
    int32_t _ws_warehouse_sk3566;
    int64_t _ws_order_number3568L;
};
void SW_JOIN_INNER_TD_6941(Table &tbl_Filter_TD_7133_output, Table &tbl_Filter_TD_7837_output, Table &tbl_JOIN_INNER_TD_6941_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ws_order_number#746L = ws_order_number#3568L) AND NOT (ws_warehouse_sk#744 = ws_warehouse_sk#3566)))
    // Left Table: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    // Right Table: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    // Output Table: ListBuffer(ws_order_number#746L)
    int left_nrow = tbl_Filter_TD_7133_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7837_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6941_key_leftMajor, SW_JOIN_INNER_TD_6941_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7133_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ws_order_number746L_k = tbl_Filter_TD_7133_output.getInt64(i, 1);
            int32_t _ws_warehouse_sk744_k = tbl_Filter_TD_7133_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6941_key_leftMajor keyA{_ws_order_number746L_k, _ws_warehouse_sk744_k};
            int32_t _ws_warehouse_sk744 = tbl_Filter_TD_7133_output.getInt32(i, 0);
            int64_t _ws_order_number746L = tbl_Filter_TD_7133_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_6941_payload_leftMajor payloadA{_ws_warehouse_sk744, _ws_order_number746L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7837_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number3568L_k = tbl_Filter_TD_7837_output.getInt64(i, 1);
            int32_t _ws_warehouse_sk3566_k = tbl_Filter_TD_7837_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6941_key_leftMajor{_ws_order_number3568L_k, _ws_warehouse_sk3566_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_warehouse_sk744 = (it->second)._ws_warehouse_sk744;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_warehouse_sk3566 = tbl_Filter_TD_7837_output.getInt32(i, 0);
                int64_t _ws_order_number3568L = tbl_Filter_TD_7837_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_6941_output.setInt64(r, 0, _ws_order_number746L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6941_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6941_key_rightMajor, SW_JOIN_INNER_TD_6941_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7837_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ws_order_number3568L_k = tbl_Filter_TD_7837_output.getInt64(i, 1);
            int32_t _ws_warehouse_sk3566_k = tbl_Filter_TD_7837_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6941_key_rightMajor keyA{_ws_order_number3568L_k, _ws_warehouse_sk3566_k};
            int32_t _ws_warehouse_sk3566 = tbl_Filter_TD_7837_output.getInt32(i, 0);
            int64_t _ws_order_number3568L = tbl_Filter_TD_7837_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_6941_payload_rightMajor payloadA{_ws_warehouse_sk3566, _ws_order_number3568L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7133_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number746L_k = tbl_Filter_TD_7133_output.getInt64(i, 1);
            int32_t _ws_warehouse_sk744_k = tbl_Filter_TD_7133_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6941_key_rightMajor{_ws_order_number746L_k, _ws_warehouse_sk744_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_warehouse_sk3566 = (it->second)._ws_warehouse_sk3566;
                int64_t _ws_order_number3568L = (it->second)._ws_order_number3568L;
                int32_t _ws_warehouse_sk744 = tbl_Filter_TD_7133_output.getInt32(i, 0);
                int64_t _ws_order_number746L = tbl_Filter_TD_7133_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_6941_output.setInt64(r, 0, _ws_order_number746L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6941_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6941_output #Row: " << tbl_JOIN_INNER_TD_6941_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6499(Table &tbl_SerializeFromObject_TD_7100_input, Table &tbl_Filter_TD_6499_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wr_order_number#844L))
    // Input: ListBuffer(wr_order_number#844L)
    // Output: ListBuffer(wr_order_number#844L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7100_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_7100_input.getInt64(i, 0);
        if (_wr_order_number844L!= 0) {
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_7100_input.getInt64(i, 0);
            tbl_Filter_TD_6499_output.setInt64(r, 0, _wr_order_number844L_t);
            r++;
        }
    }
    tbl_Filter_TD_6499_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6499_output #Row: " << tbl_Filter_TD_6499_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6185_key_leftMajor {
    int64_t _ws_order_number746L;
    int32_t _ws_warehouse_sk744;
    bool operator==(const SW_JOIN_INNER_TD_6185_key_leftMajor& other) const {
        return ((_ws_order_number746L == other._ws_order_number746L) && (_ws_warehouse_sk744 == other._ws_warehouse_sk744));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6185_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6185_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number746L));
    }
};
}
struct SW_JOIN_INNER_TD_6185_payload_leftMajor {
    int32_t _ws_warehouse_sk744;
    int64_t _ws_order_number746L;
};
struct SW_JOIN_INNER_TD_6185_key_rightMajor {
    int64_t _ws_order_number3568L;
    int32_t _ws_warehouse_sk3566;
    bool operator==(const SW_JOIN_INNER_TD_6185_key_rightMajor& other) const {
        return ((_ws_order_number3568L == other._ws_order_number3568L) && (_ws_warehouse_sk3566 == other._ws_warehouse_sk3566));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6185_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6185_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number3568L));
    }
};
}
struct SW_JOIN_INNER_TD_6185_payload_rightMajor {
    int32_t _ws_warehouse_sk3566;
    int64_t _ws_order_number3568L;
};
void SW_JOIN_INNER_TD_6185(Table &tbl_Filter_TD_7445_output, Table &tbl_Filter_TD_7914_output, Table &tbl_JOIN_INNER_TD_6185_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ws_order_number#746L = ws_order_number#3568L) AND NOT (ws_warehouse_sk#744 = ws_warehouse_sk#3566)))
    // Left Table: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    // Right Table: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    // Output Table: ListBuffer(ws_order_number#746L)
    int left_nrow = tbl_Filter_TD_7445_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7914_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6185_key_leftMajor, SW_JOIN_INNER_TD_6185_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7445_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ws_order_number746L_k = tbl_Filter_TD_7445_output.getInt64(i, 1);
            int32_t _ws_warehouse_sk744_k = tbl_Filter_TD_7445_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6185_key_leftMajor keyA{_ws_order_number746L_k, _ws_warehouse_sk744_k};
            int32_t _ws_warehouse_sk744 = tbl_Filter_TD_7445_output.getInt32(i, 0);
            int64_t _ws_order_number746L = tbl_Filter_TD_7445_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_6185_payload_leftMajor payloadA{_ws_warehouse_sk744, _ws_order_number746L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7914_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number3568L_k = tbl_Filter_TD_7914_output.getInt64(i, 1);
            int32_t _ws_warehouse_sk3566_k = tbl_Filter_TD_7914_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6185_key_leftMajor{_ws_order_number3568L_k, _ws_warehouse_sk3566_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_warehouse_sk744 = (it->second)._ws_warehouse_sk744;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_warehouse_sk3566 = tbl_Filter_TD_7914_output.getInt32(i, 0);
                int64_t _ws_order_number3568L = tbl_Filter_TD_7914_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_6185_output.setInt64(r, 0, _ws_order_number746L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6185_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6185_key_rightMajor, SW_JOIN_INNER_TD_6185_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7914_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ws_order_number3568L_k = tbl_Filter_TD_7914_output.getInt64(i, 1);
            int32_t _ws_warehouse_sk3566_k = tbl_Filter_TD_7914_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6185_key_rightMajor keyA{_ws_order_number3568L_k, _ws_warehouse_sk3566_k};
            int32_t _ws_warehouse_sk3566 = tbl_Filter_TD_7914_output.getInt32(i, 0);
            int64_t _ws_order_number3568L = tbl_Filter_TD_7914_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_6185_payload_rightMajor payloadA{_ws_warehouse_sk3566, _ws_order_number3568L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7445_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number746L_k = tbl_Filter_TD_7445_output.getInt64(i, 1);
            int32_t _ws_warehouse_sk744_k = tbl_Filter_TD_7445_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6185_key_rightMajor{_ws_order_number746L_k, _ws_warehouse_sk744_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_warehouse_sk3566 = (it->second)._ws_warehouse_sk3566;
                int64_t _ws_order_number3568L = (it->second)._ws_order_number3568L;
                int32_t _ws_warehouse_sk744 = tbl_Filter_TD_7445_output.getInt32(i, 0);
                int64_t _ws_order_number746L = tbl_Filter_TD_7445_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_6185_output.setInt64(r, 0, _ws_order_number746L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6185_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6185_output #Row: " << tbl_JOIN_INNER_TD_6185_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6585(Table &tbl_SerializeFromObject_TD_7311_input, Table &tbl_Filter_TD_6585_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ws_ship_date_sk#3587) AND isnotnull(ws_ship_addr_sk#3596)) AND isnotnull(ws_web_site_sk#3598)))
    // Input: ListBuffer(ws_ship_date_sk#3587, ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    // Output: ListBuffer(ws_ship_date_sk#3587, ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7311_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_date_sk3587 = tbl_SerializeFromObject_TD_7311_input.getInt32(i, 0);
        int32_t _ws_ship_addr_sk3596 = tbl_SerializeFromObject_TD_7311_input.getInt32(i, 1);
        int32_t _ws_web_site_sk3598 = tbl_SerializeFromObject_TD_7311_input.getInt32(i, 2);
        if (((_ws_ship_date_sk3587!= 0) && (_ws_ship_addr_sk3596!= 0)) && (_ws_web_site_sk3598!= 0)) {
            int32_t _ws_ship_date_sk3587_t = tbl_SerializeFromObject_TD_7311_input.getInt32(i, 0);
            tbl_Filter_TD_6585_output.setInt32(r, 0, _ws_ship_date_sk3587_t);
            int32_t _ws_ship_addr_sk3596_t = tbl_SerializeFromObject_TD_7311_input.getInt32(i, 1);
            tbl_Filter_TD_6585_output.setInt32(r, 1, _ws_ship_addr_sk3596_t);
            int32_t _ws_web_site_sk3598_t = tbl_SerializeFromObject_TD_7311_input.getInt32(i, 2);
            tbl_Filter_TD_6585_output.setInt32(r, 2, _ws_web_site_sk3598_t);
            int64_t _ws_order_number3602L_t = tbl_SerializeFromObject_TD_7311_input.getInt64(i, 3);
            tbl_Filter_TD_6585_output.setInt64(r, 3, _ws_order_number3602L_t);
            int32_t _ws_ext_ship_cost3613_t = tbl_SerializeFromObject_TD_7311_input.getInt32(i, 4);
            tbl_Filter_TD_6585_output.setInt32(r, 4, _ws_ext_ship_cost3613_t);
            int32_t _ws_net_profit3618_t = tbl_SerializeFromObject_TD_7311_input.getInt32(i, 5);
            tbl_Filter_TD_6585_output.setInt32(r, 5, _ws_net_profit3618_t);
            r++;
        }
    }
    tbl_Filter_TD_6585_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6585_output #Row: " << tbl_Filter_TD_6585_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5320_key_leftMajor {
    int64_t _wr_order_number844L;
    bool operator==(const SW_JOIN_INNER_TD_5320_key_leftMajor& other) const {
        return ((_wr_order_number844L == other._wr_order_number844L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5320_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5320_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._wr_order_number844L));
    }
};
}
struct SW_JOIN_INNER_TD_5320_payload_leftMajor {
    int64_t _wr_order_number844L;
};
struct SW_JOIN_INNER_TD_5320_key_rightMajor {
    int64_t _ws_order_number746L;
    bool operator==(const SW_JOIN_INNER_TD_5320_key_rightMajor& other) const {
        return ((_ws_order_number746L == other._ws_order_number746L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5320_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5320_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number746L));
    }
};
}
struct SW_JOIN_INNER_TD_5320_payload_rightMajor {
    int64_t _ws_order_number746L;
};
void SW_JOIN_INNER_TD_5320(Table &tbl_Filter_TD_6499_output, Table &tbl_JOIN_INNER_TD_6941_output, Table &tbl_JOIN_INNER_TD_5320_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_order_number#844L = ws_order_number#746L))
    // Left Table: ListBuffer(wr_order_number#844L)
    // Right Table: ListBuffer(ws_order_number#746L)
    // Output Table: ListBuffer(wr_order_number#844L)
    int left_nrow = tbl_Filter_TD_6499_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_6941_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5320_key_leftMajor, SW_JOIN_INNER_TD_5320_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6499_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _wr_order_number844L_k = tbl_Filter_TD_6499_output.getInt64(i, 0);
            SW_JOIN_INNER_TD_5320_key_leftMajor keyA{_wr_order_number844L_k};
            int64_t _wr_order_number844L = tbl_Filter_TD_6499_output.getInt64(i, 0);
            SW_JOIN_INNER_TD_5320_payload_leftMajor payloadA{_wr_order_number844L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6941_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number746L_k = tbl_JOIN_INNER_TD_6941_output.getInt64(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5320_key_leftMajor{_ws_order_number746L_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _wr_order_number844L = (it->second)._wr_order_number844L;
                int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_6941_output.getInt64(i, 0);
                tbl_JOIN_INNER_TD_5320_output.setInt64(r, 0, _wr_order_number844L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5320_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5320_key_rightMajor, SW_JOIN_INNER_TD_5320_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6941_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ws_order_number746L_k = tbl_JOIN_INNER_TD_6941_output.getInt64(i, 0);
            SW_JOIN_INNER_TD_5320_key_rightMajor keyA{_ws_order_number746L_k};
            int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_6941_output.getInt64(i, 0);
            SW_JOIN_INNER_TD_5320_payload_rightMajor payloadA{_ws_order_number746L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6499_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _wr_order_number844L_k = tbl_Filter_TD_6499_output.getInt64(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5320_key_rightMajor{_wr_order_number844L_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int64_t _wr_order_number844L = tbl_Filter_TD_6499_output.getInt64(i, 0);
                tbl_JOIN_INNER_TD_5320_output.setInt64(r, 0, _wr_order_number844L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5320_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5320_output #Row: " << tbl_JOIN_INNER_TD_5320_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_5349_key_leftMajor {
    int64_t _ws_order_number3602L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_5349_key_leftMajor& other) const {
        return ((_ws_order_number3602L == other._ws_order_number3602L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_5349_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_5349_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number3602L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_5349_payload_leftMajor {
    int32_t _ws_ship_date_sk3587;
    int32_t _ws_ship_addr_sk3596;
    int32_t _ws_web_site_sk3598;
    int64_t _ws_order_number3602L;
    int32_t _ws_ext_ship_cost3613;
    int32_t _ws_net_profit3618;
};
struct SW_JOIN_LEFTSEMI_TD_5349_key_rightMajor {
    int64_t _ws_order_number746L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_5349_key_rightMajor& other) const {
        return ((_ws_order_number746L == other._ws_order_number746L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_5349_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_5349_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number746L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_5349_payload_rightMajor {
    int64_t _ws_order_number746L;
};
void SW_JOIN_LEFTSEMI_TD_5349(Table &tbl_Filter_TD_6585_output, Table &tbl_JOIN_INNER_TD_6185_output, Table &tbl_JOIN_LEFTSEMI_TD_5349_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((ws_order_number#3602L = ws_order_number#746L))
    // Left Table: ListBuffer(ws_ship_date_sk#3587, ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    // Right Table: ListBuffer(ws_order_number#746L)
    // Output Table: ListBuffer(ws_ship_date_sk#3587, ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    int left_nrow = tbl_Filter_TD_6585_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_6185_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_5349_key_rightMajor, SW_JOIN_LEFTSEMI_TD_5349_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6185_output.getNumRow();
        int nrow2 = tbl_Filter_TD_6585_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ws_order_number746L_k = tbl_JOIN_INNER_TD_6185_output.getInt64(i, 0);
            SW_JOIN_LEFTSEMI_TD_5349_key_rightMajor keyA{_ws_order_number746L_k};
            int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_6185_output.getInt64(i, 0);
            SW_JOIN_LEFTSEMI_TD_5349_payload_rightMajor payloadA{_ws_order_number746L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number3602L_k = tbl_Filter_TD_6585_output.getInt64(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_5349_key_rightMajor{_ws_order_number3602L_k});
            if (it != ht1.end()) {
                int32_t _ws_ship_date_sk3587 = tbl_Filter_TD_6585_output.getInt32(i, 0);
                int32_t _ws_ship_addr_sk3596 = tbl_Filter_TD_6585_output.getInt32(i, 1);
                int32_t _ws_web_site_sk3598 = tbl_Filter_TD_6585_output.getInt32(i, 2);
                int64_t _ws_order_number3602L = tbl_Filter_TD_6585_output.getInt64(i, 3);
                int32_t _ws_ext_ship_cost3613 = tbl_Filter_TD_6585_output.getInt32(i, 4);
                int32_t _ws_net_profit3618 = tbl_Filter_TD_6585_output.getInt32(i, 5);
                tbl_JOIN_LEFTSEMI_TD_5349_output.setInt32(r, 0, _ws_ship_date_sk3587);
                tbl_JOIN_LEFTSEMI_TD_5349_output.setInt32(r, 1, _ws_ship_addr_sk3596);
                tbl_JOIN_LEFTSEMI_TD_5349_output.setInt32(r, 2, _ws_web_site_sk3598);
                tbl_JOIN_LEFTSEMI_TD_5349_output.setInt64(r, 3, _ws_order_number3602L);
                tbl_JOIN_LEFTSEMI_TD_5349_output.setInt32(r, 4, _ws_ext_ship_cost3613);
                tbl_JOIN_LEFTSEMI_TD_5349_output.setInt32(r, 5, _ws_net_profit3618);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_5349_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_5349_output #Row: " << tbl_JOIN_LEFTSEMI_TD_5349_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4520(Table &tbl_SerializeFromObject_TD_5410_input, Table &tbl_Filter_TD_4520_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 1999-02-01) AND (d_date#122 <= 1999-04-02))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5410_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_5410_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_5410_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 19990201) && (_d_date122 <= 19990402))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_5410_input.getInt32(i, 0);
            tbl_Filter_TD_4520_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_4520_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4520_output #Row: " << tbl_Filter_TD_4520_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_4592_key_leftMajor {
    int64_t _ws_order_number3602L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_4592_key_leftMajor& other) const {
        return ((_ws_order_number3602L == other._ws_order_number3602L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_4592_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_4592_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number3602L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_4592_payload_leftMajor {
    int32_t _ws_ship_date_sk3587;
    int32_t _ws_ship_addr_sk3596;
    int32_t _ws_web_site_sk3598;
    int64_t _ws_order_number3602L;
    int32_t _ws_ext_ship_cost3613;
    int32_t _ws_net_profit3618;
};
struct SW_JOIN_LEFTSEMI_TD_4592_key_rightMajor {
    int64_t _wr_order_number844L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_4592_key_rightMajor& other) const {
        return ((_wr_order_number844L == other._wr_order_number844L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_4592_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_4592_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._wr_order_number844L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_4592_payload_rightMajor {
    int64_t _wr_order_number844L;
};
void SW_JOIN_LEFTSEMI_TD_4592(Table &tbl_JOIN_LEFTSEMI_TD_5349_output, Table &tbl_JOIN_INNER_TD_5320_output, Table &tbl_JOIN_LEFTSEMI_TD_4592_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((ws_order_number#3602L = wr_order_number#844L))
    // Left Table: ListBuffer(ws_ship_date_sk#3587, ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    // Right Table: ListBuffer(wr_order_number#844L)
    // Output Table: ListBuffer(ws_ship_date_sk#3587, ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_5349_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_5320_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_4592_key_rightMajor, SW_JOIN_LEFTSEMI_TD_4592_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5320_output.getNumRow();
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_5349_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _wr_order_number844L_k = tbl_JOIN_INNER_TD_5320_output.getInt64(i, 0);
            SW_JOIN_LEFTSEMI_TD_4592_key_rightMajor keyA{_wr_order_number844L_k};
            int64_t _wr_order_number844L = tbl_JOIN_INNER_TD_5320_output.getInt64(i, 0);
            SW_JOIN_LEFTSEMI_TD_4592_payload_rightMajor payloadA{_wr_order_number844L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number3602L_k = tbl_JOIN_LEFTSEMI_TD_5349_output.getInt64(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_4592_key_rightMajor{_ws_order_number3602L_k});
            if (it != ht1.end()) {
                int32_t _ws_ship_date_sk3587 = tbl_JOIN_LEFTSEMI_TD_5349_output.getInt32(i, 0);
                int32_t _ws_ship_addr_sk3596 = tbl_JOIN_LEFTSEMI_TD_5349_output.getInt32(i, 1);
                int32_t _ws_web_site_sk3598 = tbl_JOIN_LEFTSEMI_TD_5349_output.getInt32(i, 2);
                int64_t _ws_order_number3602L = tbl_JOIN_LEFTSEMI_TD_5349_output.getInt64(i, 3);
                int32_t _ws_ext_ship_cost3613 = tbl_JOIN_LEFTSEMI_TD_5349_output.getInt32(i, 4);
                int32_t _ws_net_profit3618 = tbl_JOIN_LEFTSEMI_TD_5349_output.getInt32(i, 5);
                tbl_JOIN_LEFTSEMI_TD_4592_output.setInt32(r, 0, _ws_ship_date_sk3587);
                tbl_JOIN_LEFTSEMI_TD_4592_output.setInt32(r, 1, _ws_ship_addr_sk3596);
                tbl_JOIN_LEFTSEMI_TD_4592_output.setInt32(r, 2, _ws_web_site_sk3598);
                tbl_JOIN_LEFTSEMI_TD_4592_output.setInt64(r, 3, _ws_order_number3602L);
                tbl_JOIN_LEFTSEMI_TD_4592_output.setInt32(r, 4, _ws_ext_ship_cost3613);
                tbl_JOIN_LEFTSEMI_TD_4592_output.setInt32(r, 5, _ws_net_profit3618);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_4592_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_4592_output #Row: " << tbl_JOIN_LEFTSEMI_TD_4592_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3525(Table &tbl_SerializeFromObject_TD_4784_input, Table &tbl_Filter_TD_3525_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_state#62) AND (ca_state#62 = IL)) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4784_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_4784_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_4784_input.getInt32(i, 0);
        if ((（std::string(_isnotnullca_state62.data()) != "NULL") && (std::string(_ca_state62.data()) == "IL")) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_4784_input.getInt32(i, 0);
            tbl_Filter_TD_3525_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_3525_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3525_output #Row: " << tbl_Filter_TD_3525_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3617_key_leftMajor {
    int32_t _ws_ship_date_sk3587;
    bool operator==(const SW_JOIN_INNER_TD_3617_key_leftMajor& other) const {
        return ((_ws_ship_date_sk3587 == other._ws_ship_date_sk3587));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3617_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3617_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_ship_date_sk3587));
    }
};
}
struct SW_JOIN_INNER_TD_3617_payload_leftMajor {
    int32_t _ws_ship_date_sk3587;
    int32_t _ws_ship_addr_sk3596;
    int32_t _ws_web_site_sk3598;
    int64_t _ws_order_number3602L;
    int32_t _ws_ext_ship_cost3613;
    int32_t _ws_net_profit3618;
};
struct SW_JOIN_INNER_TD_3617_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_3617_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3617_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3617_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_3617_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_3617(Table &tbl_JOIN_LEFTSEMI_TD_4592_output, Table &tbl_Filter_TD_4520_output, Table &tbl_JOIN_INNER_TD_3617_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_ship_date_sk#3587 = d_date_sk#120))
    // Left Table: ListBuffer(ws_ship_date_sk#3587, ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_4592_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4520_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3617_key_leftMajor, SW_JOIN_INNER_TD_3617_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_4592_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_ship_date_sk3587_k = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3617_key_leftMajor keyA{_ws_ship_date_sk3587_k};
            int32_t _ws_ship_date_sk3587 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 0);
            int32_t _ws_ship_addr_sk3596 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 1);
            int32_t _ws_web_site_sk3598 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 2);
            int64_t _ws_order_number3602L = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt64(i, 3);
            int32_t _ws_ext_ship_cost3613 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 4);
            int32_t _ws_net_profit3618 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_3617_payload_leftMajor payloadA{_ws_ship_date_sk3587, _ws_ship_addr_sk3596, _ws_web_site_sk3598, _ws_order_number3602L, _ws_ext_ship_cost3613, _ws_net_profit3618};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4520_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_4520_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3617_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_ship_date_sk3587 = (it->second)._ws_ship_date_sk3587;
                int32_t _ws_ship_addr_sk3596 = (it->second)._ws_ship_addr_sk3596;
                int32_t _ws_web_site_sk3598 = (it->second)._ws_web_site_sk3598;
                int64_t _ws_order_number3602L = (it->second)._ws_order_number3602L;
                int32_t _ws_ext_ship_cost3613 = (it->second)._ws_ext_ship_cost3613;
                int32_t _ws_net_profit3618 = (it->second)._ws_net_profit3618;
                int32_t _d_date_sk120 = tbl_Filter_TD_4520_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3617_output.setInt32(r, 0, _ws_ship_addr_sk3596);
                tbl_JOIN_INNER_TD_3617_output.setInt32(r, 1, _ws_web_site_sk3598);
                tbl_JOIN_INNER_TD_3617_output.setInt64(r, 2, _ws_order_number3602L);
                tbl_JOIN_INNER_TD_3617_output.setInt32(r, 3, _ws_ext_ship_cost3613);
                tbl_JOIN_INNER_TD_3617_output.setInt32(r, 4, _ws_net_profit3618);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3617_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3617_key_rightMajor, SW_JOIN_INNER_TD_3617_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4520_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_4520_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3617_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_4520_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3617_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_4592_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_ship_date_sk3587_k = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3617_key_rightMajor{_ws_ship_date_sk3587_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ws_ship_date_sk3587 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 0);
                int32_t _ws_ship_addr_sk3596 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 1);
                int32_t _ws_web_site_sk3598 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 2);
                int64_t _ws_order_number3602L = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt64(i, 3);
                int32_t _ws_ext_ship_cost3613 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 4);
                int32_t _ws_net_profit3618 = tbl_JOIN_LEFTSEMI_TD_4592_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_3617_output.setInt32(r, 0, _ws_ship_addr_sk3596);
                tbl_JOIN_INNER_TD_3617_output.setInt32(r, 1, _ws_web_site_sk3598);
                tbl_JOIN_INNER_TD_3617_output.setInt64(r, 2, _ws_order_number3602L);
                tbl_JOIN_INNER_TD_3617_output.setInt32(r, 3, _ws_ext_ship_cost3613);
                tbl_JOIN_INNER_TD_3617_output.setInt32(r, 4, _ws_net_profit3618);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3617_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3617_output #Row: " << tbl_JOIN_INNER_TD_3617_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2226(Table &tbl_SerializeFromObject_TD_3750_input, Table &tbl_Filter_TD_2226_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(web_company_name#551) AND (web_company_name#551 = pri)) AND isnotnull(web_site_sk#537)))
    // Input: ListBuffer(web_site_sk#537, web_company_name#551)
    // Output: ListBuffer(web_site_sk#537)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3750_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _web_company_name551 = tbl_SerializeFromObject_TD_3750_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _web_site_sk537 = tbl_SerializeFromObject_TD_3750_input.getInt32(i, 0);
        if ((（std::string(_isnotnullweb_company_name551.data()) != "NULL") && (std::string(_web_company_name551.data()) == "pri")) && (_web_site_sk537!= 0)) {
            int32_t _web_site_sk537_t = tbl_SerializeFromObject_TD_3750_input.getInt32(i, 0);
            tbl_Filter_TD_2226_output.setInt32(r, 0, _web_site_sk537_t);
            r++;
        }
    }
    tbl_Filter_TD_2226_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2226_output #Row: " << tbl_Filter_TD_2226_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2466_key_leftMajor {
    int32_t _ws_ship_addr_sk3596;
    bool operator==(const SW_JOIN_INNER_TD_2466_key_leftMajor& other) const {
        return ((_ws_ship_addr_sk3596 == other._ws_ship_addr_sk3596));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2466_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2466_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_ship_addr_sk3596));
    }
};
}
struct SW_JOIN_INNER_TD_2466_payload_leftMajor {
    int32_t _ws_ship_addr_sk3596;
    int32_t _ws_web_site_sk3598;
    int64_t _ws_order_number3602L;
    int32_t _ws_ext_ship_cost3613;
    int32_t _ws_net_profit3618;
};
struct SW_JOIN_INNER_TD_2466_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_2466_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2466_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2466_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_2466_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_2466(Table &tbl_JOIN_INNER_TD_3617_output, Table &tbl_Filter_TD_3525_output, Table &tbl_JOIN_INNER_TD_2466_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_ship_addr_sk#3596 = ca_address_sk#54))
    // Left Table: ListBuffer(ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    int left_nrow = tbl_JOIN_INNER_TD_3617_output.getNumRow();
    int right_nrow = tbl_Filter_TD_3525_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2466_key_leftMajor, SW_JOIN_INNER_TD_2466_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3617_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_ship_addr_sk3596_k = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2466_key_leftMajor keyA{_ws_ship_addr_sk3596_k};
            int32_t _ws_ship_addr_sk3596 = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 0);
            int32_t _ws_web_site_sk3598 = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 1);
            int64_t _ws_order_number3602L = tbl_JOIN_INNER_TD_3617_output.getInt64(i, 2);
            int32_t _ws_ext_ship_cost3613 = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 3);
            int32_t _ws_net_profit3618 = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_2466_payload_leftMajor payloadA{_ws_ship_addr_sk3596, _ws_web_site_sk3598, _ws_order_number3602L, _ws_ext_ship_cost3613, _ws_net_profit3618};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_3525_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_3525_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2466_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_ship_addr_sk3596 = (it->second)._ws_ship_addr_sk3596;
                int32_t _ws_web_site_sk3598 = (it->second)._ws_web_site_sk3598;
                int64_t _ws_order_number3602L = (it->second)._ws_order_number3602L;
                int32_t _ws_ext_ship_cost3613 = (it->second)._ws_ext_ship_cost3613;
                int32_t _ws_net_profit3618 = (it->second)._ws_net_profit3618;
                int32_t _ca_address_sk54 = tbl_Filter_TD_3525_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_2466_output.setInt32(r, 0, _ws_web_site_sk3598);
                tbl_JOIN_INNER_TD_2466_output.setInt64(r, 1, _ws_order_number3602L);
                tbl_JOIN_INNER_TD_2466_output.setInt32(r, 2, _ws_ext_ship_cost3613);
                tbl_JOIN_INNER_TD_2466_output.setInt32(r, 3, _ws_net_profit3618);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2466_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2466_key_rightMajor, SW_JOIN_INNER_TD_2466_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_3525_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_3525_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2466_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_3525_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2466_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3617_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_ship_addr_sk3596_k = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2466_key_rightMajor{_ws_ship_addr_sk3596_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                int32_t _ws_ship_addr_sk3596 = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 0);
                int32_t _ws_web_site_sk3598 = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 1);
                int64_t _ws_order_number3602L = tbl_JOIN_INNER_TD_3617_output.getInt64(i, 2);
                int32_t _ws_ext_ship_cost3613 = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 3);
                int32_t _ws_net_profit3618 = tbl_JOIN_INNER_TD_3617_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_2466_output.setInt32(r, 0, _ws_web_site_sk3598);
                tbl_JOIN_INNER_TD_2466_output.setInt64(r, 1, _ws_order_number3602L);
                tbl_JOIN_INNER_TD_2466_output.setInt32(r, 2, _ws_ext_ship_cost3613);
                tbl_JOIN_INNER_TD_2466_output.setInt32(r, 3, _ws_net_profit3618);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2466_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2466_output #Row: " << tbl_JOIN_INNER_TD_2466_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1526_key_leftMajor {
    int32_t _ws_web_site_sk3598;
    bool operator==(const SW_JOIN_INNER_TD_1526_key_leftMajor& other) const {
        return ((_ws_web_site_sk3598 == other._ws_web_site_sk3598));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1526_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1526_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_site_sk3598));
    }
};
}
struct SW_JOIN_INNER_TD_1526_payload_leftMajor {
    int32_t _ws_web_site_sk3598;
    int64_t _ws_order_number3602L;
    int32_t _ws_ext_ship_cost3613;
    int32_t _ws_net_profit3618;
};
struct SW_JOIN_INNER_TD_1526_key_rightMajor {
    int32_t _web_site_sk537;
    bool operator==(const SW_JOIN_INNER_TD_1526_key_rightMajor& other) const {
        return ((_web_site_sk537 == other._web_site_sk537));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1526_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1526_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._web_site_sk537));
    }
};
}
struct SW_JOIN_INNER_TD_1526_payload_rightMajor {
    int32_t _web_site_sk537;
};
void SW_JOIN_INNER_TD_1526(Table &tbl_JOIN_INNER_TD_2466_output, Table &tbl_Filter_TD_2226_output, Table &tbl_JOIN_INNER_TD_1526_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_site_sk#3598 = web_site_sk#537))
    // Left Table: ListBuffer(ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    // Right Table: ListBuffer(web_site_sk#537)
    // Output Table: ListBuffer(ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    int left_nrow = tbl_JOIN_INNER_TD_2466_output.getNumRow();
    int right_nrow = tbl_Filter_TD_2226_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1526_key_leftMajor, SW_JOIN_INNER_TD_1526_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2466_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_site_sk3598_k = tbl_JOIN_INNER_TD_2466_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1526_key_leftMajor keyA{_ws_web_site_sk3598_k};
            int32_t _ws_web_site_sk3598 = tbl_JOIN_INNER_TD_2466_output.getInt32(i, 0);
            int64_t _ws_order_number3602L = tbl_JOIN_INNER_TD_2466_output.getInt64(i, 1);
            int32_t _ws_ext_ship_cost3613 = tbl_JOIN_INNER_TD_2466_output.getInt32(i, 2);
            int32_t _ws_net_profit3618 = tbl_JOIN_INNER_TD_2466_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1526_payload_leftMajor payloadA{_ws_web_site_sk3598, _ws_order_number3602L, _ws_ext_ship_cost3613, _ws_net_profit3618};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2226_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_2226_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1526_key_leftMajor{_web_site_sk537_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_web_site_sk3598 = (it->second)._ws_web_site_sk3598;
                int64_t _ws_order_number3602L = (it->second)._ws_order_number3602L;
                int32_t _ws_ext_ship_cost3613 = (it->second)._ws_ext_ship_cost3613;
                int32_t _ws_net_profit3618 = (it->second)._ws_net_profit3618;
                int32_t _web_site_sk537 = tbl_Filter_TD_2226_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1526_output.setInt64(r, 0, _ws_order_number3602L);
                tbl_JOIN_INNER_TD_1526_output.setInt32(r, 1, _ws_ext_ship_cost3613);
                tbl_JOIN_INNER_TD_1526_output.setInt32(r, 2, _ws_net_profit3618);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1526_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1526_key_rightMajor, SW_JOIN_INNER_TD_1526_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_2226_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_2226_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1526_key_rightMajor keyA{_web_site_sk537_k};
            int32_t _web_site_sk537 = tbl_Filter_TD_2226_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1526_payload_rightMajor payloadA{_web_site_sk537};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_2466_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_site_sk3598_k = tbl_JOIN_INNER_TD_2466_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1526_key_rightMajor{_ws_web_site_sk3598_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _web_site_sk537 = (it->second)._web_site_sk537;
                int32_t _ws_web_site_sk3598 = tbl_JOIN_INNER_TD_2466_output.getInt32(i, 0);
                int64_t _ws_order_number3602L = tbl_JOIN_INNER_TD_2466_output.getInt64(i, 1);
                int32_t _ws_ext_ship_cost3613 = tbl_JOIN_INNER_TD_2466_output.getInt32(i, 2);
                int32_t _ws_net_profit3618 = tbl_JOIN_INNER_TD_2466_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_1526_output.setInt64(r, 0, _ws_order_number3602L);
                tbl_JOIN_INNER_TD_1526_output.setInt32(r, 1, _ws_ext_ship_cost3613);
                tbl_JOIN_INNER_TD_1526_output.setInt32(r, 2, _ws_net_profit3618);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1526_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1526_output #Row: " << tbl_JOIN_INNER_TD_1526_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0117(Table &tbl_JOIN_INNER_TD_1526_output, Table &tbl_Aggregate_TD_0117_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(distinct ws_order_number#3602L) AS order count#3544L, MakeDecimal(sum(UnscaledValue(ws_ext_ship_cost#3613)),17,2) AS total shipping cost#3545, MakeDecimal(sum(UnscaledValue(ws_net_profit#3618)),17,2) AS total net profit#3546)
    // Input: ListBuffer(ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    // Output: ListBuffer(order count#3544L, total shipping cost#3545, total net profit#3546)
    int64_t count_0 = 0;
    int64_t sum_1 = 0;
    int64_t sum_2 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_1526_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number3602L = tbl_JOIN_INNER_TD_1526_output.getInt64(i, 0);
        int32_t _ws_ext_ship_cost3613 = tbl_JOIN_INNER_TD_1526_output.getInt32(i, 1);
        int32_t _ws_net_profit3618 = tbl_JOIN_INNER_TD_1526_output.getInt32(i, 2);
        int64_t _count3544L_count_0 = _ws_order_number3602L;
        int64_t _cost3545_sum_1 = _ws_ext_ship_cost3613;
        int64_t _profit3546_sum_2 = _ws_net_profit3618;
        count_0 += _count3544L_count_0;
        sum_1 += _cost3545_sum_1;
        sum_2 += _profit3546_sum_2;
    }
    int r = 0;
    int64_t _count3544L = count_0;
    tbl_Aggregate_TD_0117_output.setInt64(r++, 0, _count3544L);
    int32_t _cost3545 = sum_1;
    tbl_Aggregate_TD_0117_output.setInt32(r++, 1, _cost3545);
    int32_t _profit3546 = sum_2;
    tbl_Aggregate_TD_0117_output.setInt32(r++, 2, _profit3546);
    tbl_Aggregate_TD_0117_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0117_output #Row: " << tbl_Aggregate_TD_0117_output.getNumRow() << std::endl;
}

