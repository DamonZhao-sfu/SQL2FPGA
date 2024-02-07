#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10512(Table &tbl_SerializeFromObject_TD_11792_input, Table &tbl_Filter_TD_10512_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3557) AND ((d_month_seq#3557 >= 1200) AND (d_month_seq#3557 <= 1211))) AND isnotnull(d_date_sk#3554)))
    // Input: ListBuffer(d_date_sk#3554, d_date#3556, d_month_seq#3557)
    // Output: ListBuffer(d_date_sk#3554, d_date#3556)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11792_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3557 = tbl_SerializeFromObject_TD_11792_input.getInt32(i, 2);
        int32_t _d_date_sk3554 = tbl_SerializeFromObject_TD_11792_input.getInt32(i, 0);
        if (((1) && ((_d_month_seq3557 >= 1200) && (_d_month_seq3557 <= 1211))) && (1)) {
            int32_t _d_date_sk3554_t = tbl_SerializeFromObject_TD_11792_input.getInt32(i, 0);
            tbl_Filter_TD_10512_output.setInt32(r, 0, _d_date_sk3554_t);
            int32_t _d_date3556_t = tbl_SerializeFromObject_TD_11792_input.getInt32(i, 1);
            tbl_Filter_TD_10512_output.setInt32(r, 1, _d_date3556_t);
            r++;
        }
    }
    tbl_Filter_TD_10512_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10512_output #Row: " << tbl_Filter_TD_10512_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10336(Table &tbl_SerializeFromObject_TD_11509_input, Table &tbl_Filter_TD_10336_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11509_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_11509_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11509_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11509_input.getInt32(i, 0);
            tbl_Filter_TD_10336_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_11509_input.getInt32(i, 1);
            tbl_Filter_TD_10336_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_11509_input.getInt32(i, 2);
            tbl_Filter_TD_10336_output.setInt32(r, 2, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_10336_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10336_output #Row: " << tbl_Filter_TD_10336_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10220(Table &tbl_SerializeFromObject_TD_11617_input, Table &tbl_Filter_TD_10220_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11617_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_11617_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11617_input.getInt32(i, 0);
        if (((1) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11617_input.getInt32(i, 0);
            tbl_Filter_TD_10220_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_11617_input.getInt32(i, 1);
            tbl_Filter_TD_10220_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_10220_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10220_output #Row: " << tbl_Filter_TD_10220_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10125(Table &tbl_SerializeFromObject_TD_11547_input, Table &tbl_Filter_TD_10125_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11547_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_11547_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_11547_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_11547_input.getInt32(i, 0);
            tbl_Filter_TD_10125_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_11547_input.getInt32(i, 1);
            tbl_Filter_TD_10125_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_sales_price750_t = tbl_SerializeFromObject_TD_11547_input.getInt32(i, 2);
            tbl_Filter_TD_10125_output.setInt32(r, 2, _ws_sales_price750_t);
            r++;
        }
    }
    tbl_Filter_TD_10125_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10125_output #Row: " << tbl_Filter_TD_10125_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9483_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_9483_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9483_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9483_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_9483_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_9483_key_rightMajor {
    int32_t _d_date_sk3554;
    bool operator==(const SW_JOIN_INNER_TD_9483_key_rightMajor& other) const {
        return ((_d_date_sk3554 == other._d_date_sk3554));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9483_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9483_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3554));
    }
};
}
struct SW_JOIN_INNER_TD_9483_payload_rightMajor {
    int32_t _d_date_sk3554;
    int32_t _d_date3556;
};
void SW_JOIN_INNER_TD_9483(Table &tbl_Filter_TD_10336_output, Table &tbl_Filter_TD_10512_output, Table &tbl_JOIN_INNER_TD_9483_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#3554))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#3554, d_date#3556)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_sales_price#1219, d_date#3556)
    int left_nrow = tbl_Filter_TD_10336_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10512_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9483_key_leftMajor, SW_JOIN_INNER_TD_9483_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10336_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10336_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9483_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10336_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_10336_output.getInt32(i, 1);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_10336_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9483_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10512_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3554_k = tbl_Filter_TD_10512_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9483_key_leftMajor{_d_date_sk3554_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk3554 = tbl_Filter_TD_10512_output.getInt32(i, 0);
                int32_t _d_date3556 = tbl_Filter_TD_10512_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9483_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9483_output.setInt32(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_9483_output.setInt32(r, 2, _d_date3556);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9483_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9483_key_rightMajor, SW_JOIN_INNER_TD_9483_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10512_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3554_k = tbl_Filter_TD_10512_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9483_key_rightMajor keyA{_d_date_sk3554_k};
            int32_t _d_date_sk3554 = tbl_Filter_TD_10512_output.getInt32(i, 0);
            int32_t _d_date3556 = tbl_Filter_TD_10512_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9483_payload_rightMajor payloadA{_d_date_sk3554, _d_date3556};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10336_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10336_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9483_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3554 = (it->second)._d_date_sk3554;
                int32_t _d_date3556 = (it->second)._d_date3556;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10336_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_10336_output.getInt32(i, 1);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_10336_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9483_output.setInt32(r, 2, _d_date3556);
                tbl_JOIN_INNER_TD_9483_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9483_output.setInt32(r, 1, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9483_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9483_output #Row: " << tbl_JOIN_INNER_TD_9483_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9156_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_9156_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9156_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9156_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_9156_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_sales_price750;
};
struct SW_JOIN_INNER_TD_9156_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_9156_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9156_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9156_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_9156_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
};
void SW_JOIN_INNER_TD_9156(Table &tbl_Filter_TD_10125_output, Table &tbl_Filter_TD_10220_output, Table &tbl_JOIN_INNER_TD_9156_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122)
    // Output Table: ListBuffer(ws_item_sk#732, ws_sales_price#750, d_date#122)
    int left_nrow = tbl_Filter_TD_10125_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10220_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9156_key_leftMajor, SW_JOIN_INNER_TD_9156_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10125_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_10125_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9156_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10125_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_10125_output.getInt32(i, 1);
            int32_t _ws_sales_price750 = tbl_Filter_TD_10125_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9156_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_sales_price750};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10220_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10220_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9156_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int32_t _d_date_sk120 = tbl_Filter_TD_10220_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_10220_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9156_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_9156_output.setInt32(r, 1, _ws_sales_price750);
                tbl_JOIN_INNER_TD_9156_output.setInt32(r, 2, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9156_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9156_key_rightMajor, SW_JOIN_INNER_TD_9156_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10220_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10220_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9156_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_10220_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_10220_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9156_payload_rightMajor payloadA{_d_date_sk120, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10125_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_10125_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9156_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10125_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_10125_output.getInt32(i, 1);
                int32_t _ws_sales_price750 = tbl_Filter_TD_10125_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9156_output.setInt32(r, 2, _d_date122);
                tbl_JOIN_INNER_TD_9156_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_9156_output.setInt32(r, 1, _ws_sales_price750);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9156_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9156_output #Row: " << tbl_JOIN_INNER_TD_9156_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8601_key {
    int32_t _ss_item_sk1208;
    int32_t _d_date3556;
    bool operator==(const SW_Aggregate_TD_8601_key& other) const { return (_ss_item_sk1208 == other._ss_item_sk1208) && (_d_date3556 == other._d_date3556); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8601_key> {
    std::size_t operator() (const SW_Aggregate_TD_8601_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208)) + (hash<int32_t>()(k._d_date3556));
    }
};
}
struct SW_Aggregate_TD_8601_payload {
    int32_t _item_sk3552;
    int32_t __w03587_sum_0;
};
void SW_Aggregate_TD_8601(Table &tbl_JOIN_INNER_TD_9483_output, Table &tbl_Aggregate_TD_8601_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_item_sk#1208, d_date#3556, ss_item_sk#1208 AS item_sk#3552, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS _w0#3587)
    // Input: ListBuffer(ss_item_sk#1208, ss_sales_price#1219, d_date#3556)
    // Output: ListBuffer(item_sk#3552, d_date#3556, _w0#3587, ss_item_sk#1208)
    std::unordered_map<SW_Aggregate_TD_8601_key, SW_Aggregate_TD_8601_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9483_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9483_output.getInt32(i, 0);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_9483_output.getInt32(i, 1);
        int32_t _d_date3556 = tbl_JOIN_INNER_TD_9483_output.getInt32(i, 2);
        SW_Aggregate_TD_8601_key k{_ss_item_sk1208, _d_date3556};
        int32_t _item_sk3552 = _ss_item_sk1208;
        int64_t __w03587_sum_0 = _ss_sales_price1219;
        SW_Aggregate_TD_8601_payload p{_item_sk3552, __w03587_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second).__w03587_sum_0 + __w03587_sum_0;
            p.__w03587_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8601_output.setInt32(r, 3, (it.first)._ss_item_sk1208);
        tbl_Aggregate_TD_8601_output.setInt32(r, 1, (it.first)._d_date3556);
        tbl_Aggregate_TD_8601_output.setInt32(r, 0, (it.second)._item_sk3552);
        int32_t __w03587 = (it.second).__w03587_sum_0;
        tbl_Aggregate_TD_8601_output.setInt32(r, 2, __w03587);
        ++r;
    }
    tbl_Aggregate_TD_8601_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8601_output #Row: " << tbl_Aggregate_TD_8601_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_80_key {
    int32_t _ws_item_sk732;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_80_key& other) const { return (_ws_item_sk732 == other._ws_item_sk732) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_80_key> {
    std::size_t operator() (const SW_Aggregate_TD_80_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_80_payload {
    int32_t _item_sk3550;
    int32_t __w03586_sum_0;
};
void SW_Aggregate_TD_80(Table &tbl_JOIN_INNER_TD_9156_output, Table &tbl_Aggregate_TD_80_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ws_item_sk#732, d_date#122, ws_item_sk#732 AS item_sk#3550, MakeDecimal(sum(UnscaledValue(ws_sales_price#750)),17,2) AS _w0#3586)
    // Input: ListBuffer(ws_item_sk#732, ws_sales_price#750, d_date#122)
    // Output: ListBuffer(item_sk#3550, d_date#122, _w0#3586, ws_item_sk#732)
    std::unordered_map<SW_Aggregate_TD_80_key, SW_Aggregate_TD_80_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9156_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_9156_output.getInt32(i, 0);
        int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_9156_output.getInt32(i, 1);
        int32_t _d_date122 = tbl_JOIN_INNER_TD_9156_output.getInt32(i, 2);
        SW_Aggregate_TD_80_key k{_ws_item_sk732, _d_date122};
        int32_t _item_sk3550 = _ws_item_sk732;
        int64_t __w03586_sum_0 = _ws_sales_price750;
        SW_Aggregate_TD_80_payload p{_item_sk3550, __w03586_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second).__w03586_sum_0 + __w03586_sum_0;
            p.__w03586_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_80_output.setInt32(r, 3, (it.first)._ws_item_sk732);
        tbl_Aggregate_TD_80_output.setInt32(r, 1, (it.first)._d_date122);
        tbl_Aggregate_TD_80_output.setInt32(r, 0, (it.second)._item_sk3550);
        int32_t __w03586 = (it.second).__w03586_sum_0;
        tbl_Aggregate_TD_80_output.setInt32(r, 2, __w03586);
        ++r;
    }
    tbl_Aggregate_TD_80_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_80_output #Row: " << tbl_Aggregate_TD_80_output.getNumRow() << std::endl;
}

void SW_Window_TD_74(Table &tbl_Aggregate_TD_8601_output, Table &tbl_Window_TD_74_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(sum(_w0#3587) windowspecdefinition(ss_item_sk#1208, d_date#3556 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS cume_sales#3553)
    // Input: ListBuffer(item_sk#3552, d_date#3556, _w0#3587, ss_item_sk#1208)
    // Output: ListBuffer(item_sk#3552, d_date#3556, _w0#3587, ss_item_sk#1208, cume_sales#3553)
    struct SW_Window_TD_74Row {
        int32_t _item_sk3552;
        int32_t _d_date3556;
        int32_t __w03587;
        int32_t _ss_item_sk1208;
    }; 

    int nrow = tbl_Aggregate_TD_8601_output.getNumRow();
    std::vector<SW_Window_TD_74Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk3552 = tbl_Aggregate_TD_8601_output.getInt32(i, 0);
        tbl_Window_TD_74_output.setInt32(r, 0,_item_sk3552);
        int32_t _d_date3556 = tbl_Aggregate_TD_8601_output.getInt32(i, 1);
        tbl_Window_TD_74_output.setInt32(r, 1,_d_date3556);
        int32_t __w03587 = tbl_Aggregate_TD_8601_output.getInt32(i, 2);
        tbl_Window_TD_74_output.setInt32(r, 2,__w03587);
        int32_t _ss_item_sk1208 = tbl_Aggregate_TD_8601_output.getInt32(i, 3);
        tbl_Window_TD_74_output.setInt32(r, 3,_ss_item_sk1208);
        r++;
        SW_Window_TD_74Row t = {_item_sk3552,_d_date3556,__w03587,_ss_item_sk1208};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_74Row& a, const SW_Window_TD_74Row& b) const { return 
(a._ss_item_sk1208 < b._ss_item_sk1208) || 
 ((a._ss_item_sk1208 == b._ss_item_sk1208) && (a._d_date3556 < b._d_date3556)); 
}
    }SW_Window_TD_74_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_74_order0);
    tbl_Window_TD_74_output.setNumRow(r);
    std::cout << "tbl_Window_TD_74_output #Row: " << tbl_Window_TD_74_output.getNumRow() << std::endl;
}

void SW_Window_TD_7748(Table &tbl_Aggregate_TD_80_output, Table &tbl_Window_TD_7748_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(sum(_w0#3586) windowspecdefinition(ws_item_sk#732, d_date#122 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS cume_sales#3551)
    // Input: ListBuffer(item_sk#3550, d_date#122, _w0#3586, ws_item_sk#732)
    // Output: ListBuffer(item_sk#3550, d_date#122, _w0#3586, ws_item_sk#732, cume_sales#3551)
    struct SW_Window_TD_7748Row {
        int32_t _item_sk3550;
        int32_t _d_date122;
        int32_t __w03586;
        int32_t _ws_item_sk732;
    }; 

    int nrow = tbl_Aggregate_TD_80_output.getNumRow();
    std::vector<SW_Window_TD_7748Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk3550 = tbl_Aggregate_TD_80_output.getInt32(i, 0);
        tbl_Window_TD_7748_output.setInt32(r, 0,_item_sk3550);
        int32_t _d_date122 = tbl_Aggregate_TD_80_output.getInt32(i, 1);
        tbl_Window_TD_7748_output.setInt32(r, 1,_d_date122);
        int32_t __w03586 = tbl_Aggregate_TD_80_output.getInt32(i, 2);
        tbl_Window_TD_7748_output.setInt32(r, 2,__w03586);
        int32_t _ws_item_sk732 = tbl_Aggregate_TD_80_output.getInt32(i, 3);
        tbl_Window_TD_7748_output.setInt32(r, 3,_ws_item_sk732);
        r++;
        SW_Window_TD_7748Row t = {_item_sk3550,_d_date122,__w03586,_ws_item_sk732};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7748Row& a, const SW_Window_TD_7748Row& b) const { return 
(a._ws_item_sk732 < b._ws_item_sk732) || 
 ((a._ws_item_sk732 == b._ws_item_sk732) && (a._d_date122 < b._d_date122)); 
}
    }SW_Window_TD_7748_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7748_order0);
    tbl_Window_TD_7748_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7748_output #Row: " << tbl_Window_TD_7748_output.getNumRow() << std::endl;
}

void SW_JOIN_FULLOUTER_TD_6251(Table &tbl_Window_TD_7748_output, Table &tbl_Window_TD_74_output, Table &tbl_JOIN_FULLOUTER_TD_6251_output) {
    // Unsupported operation: JOIN_FULLOUTER
    std::cout << "tbl_JOIN_FULLOUTER_TD_6251_output #Row: " << tbl_JOIN_FULLOUTER_TD_6251_output.getNumRow() << std::endl;
}

void SW_Project_TD_5112(Table &tbl_JOIN_FULLOUTER_TD_6251_output, Table &tbl_Project_TD_5112_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CASE WHEN isnotnull(item_sk#3550) THEN item_sk#3550 ELSE item_sk#3552 END AS item_sk#3544, CASE WHEN isnotnull(d_date#122) THEN d_date#122 ELSE d_date#3556 END AS d_date#3545, cume_sales#3551 AS web_sales#3546, cume_sales#3553 AS store_sales#3547)
    // Input: ListBuffer(item_sk#3550, item_sk#3552, d_date#122, d_date#3556, cume_sales#3551, cume_sales#3553)
    // Output: ListBuffer(item_sk#3544, d_date#3545, web_sales#3546, store_sales#3547)
    int nrow1 = tbl_JOIN_FULLOUTER_TD_6251_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item_sk3550 = tbl_JOIN_FULLOUTER_TD_6251_output.getInt32(i, 0);
        int32_t _item_sk3552 = tbl_JOIN_FULLOUTER_TD_6251_output.getInt32(i, 1);
        int32_t _d_date122 = tbl_JOIN_FULLOUTER_TD_6251_output.getInt32(i, 2);
        int32_t _d_date3556 = tbl_JOIN_FULLOUTER_TD_6251_output.getInt32(i, 3);
        int32_t _cume_sales3551 = tbl_JOIN_FULLOUTER_TD_6251_output.getInt32(i, 4);
        int32_t _cume_sales3553 = tbl_JOIN_FULLOUTER_TD_6251_output.getInt32(i, 5);
        int32_t _item_sk3544 = _item_sk3550 ? _item_sk3550 : _item_sk3552;
        tbl_Project_TD_5112_output.setInt32(i, 0, _item_sk3544);
        int32_t _d_date3545 = _d_date122 ? _d_date122 : _d_date3556;
        tbl_Project_TD_5112_output.setInt32(i, 1, _d_date3545);
        int32_t _web_sales3546 = _cume_sales3551;
        tbl_Project_TD_5112_output.setInt32(i, 2, _web_sales3546);
        int32_t _store_sales3547 = _cume_sales3553;
        tbl_Project_TD_5112_output.setInt32(i, 3, _store_sales3547);
    }
    tbl_Project_TD_5112_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5112_output #Row: " << tbl_Project_TD_5112_output.getNumRow() << std::endl;
}

void SW_Window_TD_4561(Table &tbl_Project_TD_5112_output, Table &tbl_Window_TD_4561_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(max(web_sales#3546) windowspecdefinition(item_sk#3544, d_date#3545 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS web_cumulative#3548, max(store_sales#3547) windowspecdefinition(item_sk#3544, d_date#3545 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS store_cumulative#3549)
    // Input: ListBuffer(item_sk#3544, d_date#3545, web_sales#3546, store_sales#3547)
    // Output: ListBuffer(item_sk#3544, d_date#3545, web_sales#3546, store_sales#3547, web_cumulative#3548, store_cumulative#3549)
    struct SW_Window_TD_4561Row {
        int32_t _item_sk3544;
        int32_t _d_date3545;
        int32_t _web_sales3546;
        int32_t _store_sales3547;
    }; 

    int nrow = tbl_Project_TD_5112_output.getNumRow();
    std::vector<SW_Window_TD_4561Row> rows0;
    std::vector<SW_Window_TD_4561Row> rows1;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk3544 = tbl_Project_TD_5112_output.getInt32(i, 0);
        tbl_Window_TD_4561_output.setInt32(r, 0,_item_sk3544);
        int32_t _d_date3545 = tbl_Project_TD_5112_output.getInt32(i, 1);
        tbl_Window_TD_4561_output.setInt32(r, 1,_d_date3545);
        int32_t _web_sales3546 = tbl_Project_TD_5112_output.getInt32(i, 2);
        tbl_Window_TD_4561_output.setInt32(r, 2,_web_sales3546);
        int32_t _store_sales3547 = tbl_Project_TD_5112_output.getInt32(i, 3);
        tbl_Window_TD_4561_output.setInt32(r, 3,_store_sales3547);
        r++;
        SW_Window_TD_4561Row t = {_item_sk3544,_d_date3545,_web_sales3546,_store_sales3547};
        rows0.push_back(t);
        rows1.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4561Row& a, const SW_Window_TD_4561Row& b) const { return 
(a._item_sk3544 < b._item_sk3544) || 
 ((a._item_sk3544 == b._item_sk3544) && (a._d_date3545 < b._d_date3545)); 
}
    }SW_Window_TD_4561_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4561_order0);
    int64_t max0 = std::numeric_limits<int>::min();
    int32_t current_item_sk35440 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_item_sk35440 != it._item_sk35440) {
            max0 = std::numeric_limits<int>::min();
            current_item_sk35440 = it._item_sk35440;
        }
        tbl_Window_TD_4561_output.setInt64(r, 4, max0 < it._web_sales3546 ? it._web_sales3546 : max0);
    }
    struct {
        bool operator()(const SW_Window_TD_4561Row& a, const SW_Window_TD_4561Row& b) const { return 
(a._item_sk3544 < b._item_sk3544) || 
 ((a._item_sk3544 == b._item_sk3544) && (a._d_date3545 < b._d_date3545)); 
}
    }SW_Window_TD_4561_order1; 

    std::sort(rows1.begin(), rows1.end(), SW_Window_TD_4561_order1);
    int64_t max1 = std::numeric_limits<int>::min();
    int32_t current_item_sk35441 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows1) {
        if (current_item_sk35441 != it._item_sk35441) {
            max1 = std::numeric_limits<int>::min();
            current_item_sk35441 = it._item_sk35441;
        }
        tbl_Window_TD_4561_output.setInt64(r, 4, max1 < it._store_sales3547 ? it._store_sales3547 : max1);
    }
    tbl_Window_TD_4561_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4561_output #Row: " << tbl_Window_TD_4561_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3112(Table &tbl_Window_TD_4561_output, Table &tbl_Filter_TD_3112_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(web_cumulative#3548) AND isnotnull(store_cumulative#3549)) AND (web_cumulative#3548 > store_cumulative#3549)))
    // Input: ListBuffer(item_sk#3544, d_date#3545, web_sales#3546, store_sales#3547, web_cumulative#3548, store_cumulative#3549)
    // Output: ListBuffer(item_sk#3544, d_date#3545, web_sales#3546, store_sales#3547, web_cumulative#3548, store_cumulative#3549)
    int r = 0;
    int nrow1 = tbl_Window_TD_4561_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _web_cumulative3548 = tbl_Window_TD_4561_output.getInt32(i, 4);
        int32_t _store_cumulative3549 = tbl_Window_TD_4561_output.getInt32(i, 5);
        if (((1) && (1)) && (_web_cumulative3548 > _store_cumulative3549)) {
            int32_t _item_sk3544_t = tbl_Window_TD_4561_output.getInt32(i, 0);
            tbl_Filter_TD_3112_output.setInt32(r, 0, _item_sk3544_t);
            int32_t _d_date3545_t = tbl_Window_TD_4561_output.getInt32(i, 1);
            tbl_Filter_TD_3112_output.setInt32(r, 1, _d_date3545_t);
            int32_t _web_sales3546_t = tbl_Window_TD_4561_output.getInt32(i, 2);
            tbl_Filter_TD_3112_output.setInt32(r, 2, _web_sales3546_t);
            int32_t _store_sales3547_t = tbl_Window_TD_4561_output.getInt32(i, 3);
            tbl_Filter_TD_3112_output.setInt32(r, 3, _store_sales3547_t);
            int32_t _web_cumulative3548_t = tbl_Window_TD_4561_output.getInt32(i, 4);
            tbl_Filter_TD_3112_output.setInt32(r, 4, _web_cumulative3548_t);
            int32_t _store_cumulative3549_t = tbl_Window_TD_4561_output.getInt32(i, 5);
            tbl_Filter_TD_3112_output.setInt32(r, 5, _store_cumulative3549_t);
            r++;
        }
    }
    tbl_Filter_TD_3112_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3112_output #Row: " << tbl_Filter_TD_3112_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2603(Table &tbl_Filter_TD_3112_output, Table &tbl_Sort_TD_2603_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(item_sk#3544 ASC NULLS FIRST, d_date#3545 ASC NULLS FIRST)
    // Input: ListBuffer(item_sk#3544, d_date#3545, web_sales#3546, store_sales#3547, web_cumulative#3548, store_cumulative#3549)
    // Output: ListBuffer(item_sk#3544, d_date#3545, web_sales#3546, store_sales#3547, web_cumulative#3548, store_cumulative#3549)
    struct SW_Sort_TD_2603Row {
        int32_t _item_sk3544;
        int32_t _d_date3545;
        int32_t _web_sales3546;
        int32_t _store_sales3547;
        int32_t _web_cumulative3548;
        int32_t _store_cumulative3549;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2603Row& a, const SW_Sort_TD_2603Row& b) const { return 
 (a._item_sk3544 < b._item_sk3544) || 
 ((a._item_sk3544 == b._item_sk3544) && (a._d_date3545 < b._d_date3545)); 
}
    }SW_Sort_TD_2603_order; 

    int nrow1 = tbl_Filter_TD_3112_output.getNumRow();
    std::vector<SW_Sort_TD_2603Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _item_sk3544 = tbl_Filter_TD_3112_output.getInt32(i, 0);
        int32_t _d_date3545 = tbl_Filter_TD_3112_output.getInt32(i, 1);
        int32_t _web_sales3546 = tbl_Filter_TD_3112_output.getInt32(i, 2);
        int32_t _store_sales3547 = tbl_Filter_TD_3112_output.getInt32(i, 3);
        int32_t _web_cumulative3548 = tbl_Filter_TD_3112_output.getInt32(i, 4);
        int32_t _store_cumulative3549 = tbl_Filter_TD_3112_output.getInt32(i, 5);
        SW_Sort_TD_2603Row t = {_item_sk3544,_d_date3545,_web_sales3546,_store_sales3547,_web_cumulative3548,_store_cumulative3549};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2603_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2603_output.setInt32(r, 0, it._item_sk3544);
        tbl_Sort_TD_2603_output.setInt32(r, 1, it._d_date3545);
        tbl_Sort_TD_2603_output.setInt32(r, 2, it._web_sales3546);
        tbl_Sort_TD_2603_output.setInt32(r, 3, it._store_sales3547);
        tbl_Sort_TD_2603_output.setInt32(r, 4, it._web_cumulative3548);
        tbl_Sort_TD_2603_output.setInt32(r, 5, it._store_cumulative3549);
        ++r;
    }
    tbl_Sort_TD_2603_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2603_output #Row: " << tbl_Sort_TD_2603_output.getNumRow() << std::endl;
}

