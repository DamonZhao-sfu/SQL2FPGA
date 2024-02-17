#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10752(Table &tbl_SerializeFromObject_TD_11111_input, Table &tbl_Filter_TD_10752_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#7782) AND ((d_month_seq#7782 >= 1200) AND (d_month_seq#7782 <= 1211))) AND isnotnull(d_date_sk#7779)))
    // Input: ListBuffer(d_date_sk#7779, d_date#7781, d_month_seq#7782)
    // Output: ListBuffer(d_date_sk#7779, d_date#7781)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11111_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq7782 = tbl_SerializeFromObject_TD_11111_input.getInt32(i, 2);
        int32_t _d_date_sk7779 = tbl_SerializeFromObject_TD_11111_input.getInt32(i, 0);
        if (((_d_month_seq7782!= 0) && ((_d_month_seq7782 >= 1200) && (_d_month_seq7782 <= 1211))) && (_d_date_sk7779!= 0)) {
            int32_t _d_date_sk7779_t = tbl_SerializeFromObject_TD_11111_input.getInt32(i, 0);
            tbl_Filter_TD_10752_output.setInt32(r, 0, _d_date_sk7779_t);
            int32_t _d_date7781_t = tbl_SerializeFromObject_TD_11111_input.getInt32(i, 1);
            tbl_Filter_TD_10752_output.setInt32(r, 1, _d_date7781_t);
            r++;
        }
    }
    tbl_Filter_TD_10752_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10752_output #Row: " << tbl_Filter_TD_10752_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1068(Table &tbl_SerializeFromObject_TD_11343_input, Table &tbl_Filter_TD_1068_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11343_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_11343_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11343_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11343_input.getInt32(i, 0);
            tbl_Filter_TD_1068_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_11343_input.getInt32(i, 1);
            tbl_Filter_TD_1068_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_11343_input.getInt32(i, 2);
            tbl_Filter_TD_1068_output.setInt32(r, 2, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_1068_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1068_output #Row: " << tbl_Filter_TD_1068_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10833(Table &tbl_SerializeFromObject_TD_11193_input, Table &tbl_Filter_TD_10833_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11193_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_11193_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11193_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11193_input.getInt32(i, 0);
            tbl_Filter_TD_10833_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_11193_input.getInt32(i, 1);
            tbl_Filter_TD_10833_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_10833_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10833_output #Row: " << tbl_Filter_TD_10833_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1058(Table &tbl_SerializeFromObject_TD_11891_input, Table &tbl_Filter_TD_1058_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11891_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_11891_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_11891_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_11891_input.getInt32(i, 0);
            tbl_Filter_TD_1058_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_11891_input.getInt32(i, 1);
            tbl_Filter_TD_1058_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_sales_price750_t = tbl_SerializeFromObject_TD_11891_input.getInt32(i, 2);
            tbl_Filter_TD_1058_output.setInt32(r, 2, _ws_sales_price750_t);
            r++;
        }
    }
    tbl_Filter_TD_1058_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1058_output #Row: " << tbl_Filter_TD_1058_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9649_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_9649_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9649_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9649_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_9649_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_9649_key_rightMajor {
    int32_t _d_date_sk7779;
    bool operator==(const SW_JOIN_INNER_TD_9649_key_rightMajor& other) const {
        return ((_d_date_sk7779 == other._d_date_sk7779));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9649_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9649_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7779));
    }
};
}
struct SW_JOIN_INNER_TD_9649_payload_rightMajor {
    int32_t _d_date_sk7779;
    int32_t _d_date7781;
};
void SW_JOIN_INNER_TD_9649(Table &tbl_Filter_TD_1068_output, Table &tbl_Filter_TD_10752_output, Table &tbl_JOIN_INNER_TD_9649_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#7779))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#7779, d_date#7781)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_sales_price#1219, d_date#7781)
    int left_nrow = tbl_Filter_TD_1068_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10752_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9649_key_leftMajor, SW_JOIN_INNER_TD_9649_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1068_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_1068_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9649_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1068_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_1068_output.getInt32(i, 1);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_1068_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9649_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10752_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7779_k = tbl_Filter_TD_10752_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9649_key_leftMajor{_d_date_sk7779_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk7779 = tbl_Filter_TD_10752_output.getInt32(i, 0);
                int32_t _d_date7781 = tbl_Filter_TD_10752_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9649_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9649_output.setInt32(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_9649_output.setInt32(r, 2, _d_date7781);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9649_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9649_key_rightMajor, SW_JOIN_INNER_TD_9649_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10752_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7779_k = tbl_Filter_TD_10752_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9649_key_rightMajor keyA{_d_date_sk7779_k};
            int32_t _d_date_sk7779 = tbl_Filter_TD_10752_output.getInt32(i, 0);
            int32_t _d_date7781 = tbl_Filter_TD_10752_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9649_payload_rightMajor payloadA{_d_date_sk7779, _d_date7781};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1068_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_1068_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9649_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7779 = (it->second)._d_date_sk7779;
                int32_t _d_date7781 = (it->second)._d_date7781;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1068_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_1068_output.getInt32(i, 1);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_1068_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9649_output.setInt32(r, 2, _d_date7781);
                tbl_JOIN_INNER_TD_9649_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9649_output.setInt32(r, 1, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9649_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9649_output #Row: " << tbl_JOIN_INNER_TD_9649_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9500_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_9500_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9500_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9500_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_9500_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_sales_price750;
};
struct SW_JOIN_INNER_TD_9500_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_9500_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9500_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9500_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_9500_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
};
void SW_JOIN_INNER_TD_9500(Table &tbl_Filter_TD_1058_output, Table &tbl_Filter_TD_10833_output, Table &tbl_JOIN_INNER_TD_9500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122)
    // Output Table: ListBuffer(ws_item_sk#732, ws_sales_price#750, d_date#122)
    int left_nrow = tbl_Filter_TD_1058_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10833_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9500_key_leftMajor, SW_JOIN_INNER_TD_9500_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1058_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_1058_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9500_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_1058_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_1058_output.getInt32(i, 1);
            int32_t _ws_sales_price750 = tbl_Filter_TD_1058_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9500_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_sales_price750};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10833_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10833_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9500_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int32_t _d_date_sk120 = tbl_Filter_TD_10833_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_10833_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9500_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_9500_output.setInt32(r, 1, _ws_sales_price750);
                tbl_JOIN_INNER_TD_9500_output.setInt32(r, 2, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9500_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9500_key_rightMajor, SW_JOIN_INNER_TD_9500_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10833_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10833_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9500_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_10833_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_10833_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9500_payload_rightMajor payloadA{_d_date_sk120, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1058_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_1058_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9500_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_1058_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_1058_output.getInt32(i, 1);
                int32_t _ws_sales_price750 = tbl_Filter_TD_1058_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9500_output.setInt32(r, 2, _d_date122);
                tbl_JOIN_INNER_TD_9500_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_9500_output.setInt32(r, 1, _ws_sales_price750);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9500_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9500_output #Row: " << tbl_JOIN_INNER_TD_9500_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8844_key {
    int32_t _ss_item_sk1208;
    int32_t _d_date7781;
    bool operator==(const SW_Aggregate_TD_8844_key& other) const { return (_ss_item_sk1208 == other._ss_item_sk1208) && (_d_date7781 == other._d_date7781); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8844_key> {
    std::size_t operator() (const SW_Aggregate_TD_8844_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208)) + (hash<int32_t>()(k._d_date7781));
    }
};
}
struct SW_Aggregate_TD_8844_payload {
    int32_t _item_sk7777;
    int32_t __w07812_sum_0;
};
void SW_Aggregate_TD_8844(Table &tbl_JOIN_INNER_TD_9649_output, Table &tbl_Aggregate_TD_8844_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_item_sk#1208, d_date#7781, ss_item_sk#1208 AS item_sk#7777, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS _w0#7812)
    // Input: ListBuffer(ss_item_sk#1208, ss_sales_price#1219, d_date#7781)
    // Output: ListBuffer(item_sk#7777, d_date#7781, _w0#7812, ss_item_sk#1208)
    std::unordered_map<SW_Aggregate_TD_8844_key, SW_Aggregate_TD_8844_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9649_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9649_output.getInt32(i, 0);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_9649_output.getInt32(i, 1);
        int32_t _d_date7781 = tbl_JOIN_INNER_TD_9649_output.getInt32(i, 2);
        SW_Aggregate_TD_8844_key k{_ss_item_sk1208, _d_date7781};
        int32_t _item_sk7777 = _ss_item_sk1208;
        int64_t __w07812_sum_0 = _ss_sales_price1219;
        SW_Aggregate_TD_8844_payload p{_item_sk7777, __w07812_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second).__w07812_sum_0 + __w07812_sum_0;
            p.__w07812_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8844_output.setInt32(r, 3, (it.first)._ss_item_sk1208);
        tbl_Aggregate_TD_8844_output.setInt32(r, 1, (it.first)._d_date7781);
        tbl_Aggregate_TD_8844_output.setInt32(r, 0, (it.second)._item_sk7777);
        int32_t __w07812 = (it.second).__w07812_sum_0;
        tbl_Aggregate_TD_8844_output.setInt32(r, 2, __w07812);
        ++r;
    }
    tbl_Aggregate_TD_8844_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8844_output #Row: " << tbl_Aggregate_TD_8844_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8625_key {
    int32_t _ws_item_sk732;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_8625_key& other) const { return (_ws_item_sk732 == other._ws_item_sk732) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8625_key> {
    std::size_t operator() (const SW_Aggregate_TD_8625_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_8625_payload {
    int32_t _item_sk7775;
    int32_t __w07811_sum_0;
};
void SW_Aggregate_TD_8625(Table &tbl_JOIN_INNER_TD_9500_output, Table &tbl_Aggregate_TD_8625_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ws_item_sk#732, d_date#122, ws_item_sk#732 AS item_sk#7775, MakeDecimal(sum(UnscaledValue(ws_sales_price#750)),17,2) AS _w0#7811)
    // Input: ListBuffer(ws_item_sk#732, ws_sales_price#750, d_date#122)
    // Output: ListBuffer(item_sk#7775, d_date#122, _w0#7811, ws_item_sk#732)
    std::unordered_map<SW_Aggregate_TD_8625_key, SW_Aggregate_TD_8625_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9500_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_9500_output.getInt32(i, 0);
        int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_9500_output.getInt32(i, 1);
        int32_t _d_date122 = tbl_JOIN_INNER_TD_9500_output.getInt32(i, 2);
        SW_Aggregate_TD_8625_key k{_ws_item_sk732, _d_date122};
        int32_t _item_sk7775 = _ws_item_sk732;
        int64_t __w07811_sum_0 = _ws_sales_price750;
        SW_Aggregate_TD_8625_payload p{_item_sk7775, __w07811_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second).__w07811_sum_0 + __w07811_sum_0;
            p.__w07811_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8625_output.setInt32(r, 3, (it.first)._ws_item_sk732);
        tbl_Aggregate_TD_8625_output.setInt32(r, 1, (it.first)._d_date122);
        tbl_Aggregate_TD_8625_output.setInt32(r, 0, (it.second)._item_sk7775);
        int32_t __w07811 = (it.second).__w07811_sum_0;
        tbl_Aggregate_TD_8625_output.setInt32(r, 2, __w07811);
        ++r;
    }
    tbl_Aggregate_TD_8625_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8625_output #Row: " << tbl_Aggregate_TD_8625_output.getNumRow() << std::endl;
}

void SW_Window_TD_7180(Table &tbl_Aggregate_TD_8844_output, Table &tbl_Window_TD_7180_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(sum(_w0#7812) windowspecdefinition(ss_item_sk#1208, d_date#7781 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS cume_sales#7778)
    // Input: ListBuffer(item_sk#7777, d_date#7781, _w0#7812, ss_item_sk#1208)
    // Output: ListBuffer(item_sk#7777, d_date#7781, _w0#7812, ss_item_sk#1208, cume_sales#7778)
    struct SW_Window_TD_7180Row {
        int32_t _item_sk7777;
        int32_t _d_date7781;
        int32_t __w07812;
        int32_t _ss_item_sk1208;
    }; 

    int nrow = tbl_Aggregate_TD_8844_output.getNumRow();
    std::vector<SW_Window_TD_7180Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk7777 = tbl_Aggregate_TD_8844_output.getInt32(i, 0);
        tbl_Window_TD_7180_output.setInt32(r, 0,_item_sk7777);
        int32_t _d_date7781 = tbl_Aggregate_TD_8844_output.getInt32(i, 1);
        tbl_Window_TD_7180_output.setInt32(r, 1,_d_date7781);
        int32_t __w07812 = tbl_Aggregate_TD_8844_output.getInt32(i, 2);
        tbl_Window_TD_7180_output.setInt32(r, 2,__w07812);
        int32_t _ss_item_sk1208 = tbl_Aggregate_TD_8844_output.getInt32(i, 3);
        tbl_Window_TD_7180_output.setInt32(r, 3,_ss_item_sk1208);
        r++;
        SW_Window_TD_7180Row t = {_item_sk7777,_d_date7781,__w07812,_ss_item_sk1208};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7180Row& a, const SW_Window_TD_7180Row& b) const { return 
(a._ss_item_sk1208 < b._ss_item_sk1208) || 
 ((a._ss_item_sk1208 == b._ss_item_sk1208) && (a._d_date7781 < b._d_date7781)); 
}
    }SW_Window_TD_7180_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7180_order0);
    int64_t sum0 = 0;
    int32_t current_ss_item_sk12080 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_ss_item_sk12080 != it._ss_item_sk1208) {
            sum0 = 0;
            current_ss_item_sk12080 = it._ss_item_sk1208;
        }
        sum0 += it.__w07812;
        tbl_Window_TD_7180_output.setInt64(r, 4, sum0 );
    }
    tbl_Window_TD_7180_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7180_output #Row: " << tbl_Window_TD_7180_output.getNumRow() << std::endl;
}

void SW_Window_TD_7245(Table &tbl_Aggregate_TD_8625_output, Table &tbl_Window_TD_7245_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(sum(_w0#7811) windowspecdefinition(ws_item_sk#732, d_date#122 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS cume_sales#7776)
    // Input: ListBuffer(item_sk#7775, d_date#122, _w0#7811, ws_item_sk#732)
    // Output: ListBuffer(item_sk#7775, d_date#122, _w0#7811, ws_item_sk#732, cume_sales#7776)
    struct SW_Window_TD_7245Row {
        int32_t _item_sk7775;
        int32_t _d_date122;
        int32_t __w07811;
        int32_t _ws_item_sk732;
    }; 

    int nrow = tbl_Aggregate_TD_8625_output.getNumRow();
    std::vector<SW_Window_TD_7245Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk7775 = tbl_Aggregate_TD_8625_output.getInt32(i, 0);
        tbl_Window_TD_7245_output.setInt32(r, 0,_item_sk7775);
        int32_t _d_date122 = tbl_Aggregate_TD_8625_output.getInt32(i, 1);
        tbl_Window_TD_7245_output.setInt32(r, 1,_d_date122);
        int32_t __w07811 = tbl_Aggregate_TD_8625_output.getInt32(i, 2);
        tbl_Window_TD_7245_output.setInt32(r, 2,__w07811);
        int32_t _ws_item_sk732 = tbl_Aggregate_TD_8625_output.getInt32(i, 3);
        tbl_Window_TD_7245_output.setInt32(r, 3,_ws_item_sk732);
        r++;
        SW_Window_TD_7245Row t = {_item_sk7775,_d_date122,__w07811,_ws_item_sk732};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7245Row& a, const SW_Window_TD_7245Row& b) const { return 
(a._ws_item_sk732 < b._ws_item_sk732) || 
 ((a._ws_item_sk732 == b._ws_item_sk732) && (a._d_date122 < b._d_date122)); 
}
    }SW_Window_TD_7245_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7245_order0);
    int64_t sum0 = 0;
    int32_t current_ws_item_sk7320 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_ws_item_sk7320 != it._ws_item_sk732) {
            sum0 = 0;
            current_ws_item_sk7320 = it._ws_item_sk732;
        }
        sum0 += it.__w07811;
        tbl_Window_TD_7245_output.setInt64(r, 4, sum0 );
    }
    tbl_Window_TD_7245_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7245_output #Row: " << tbl_Window_TD_7245_output.getNumRow() << std::endl;
}

struct SW_JOIN_FULLOUTER_TD_6706_key {
    int32_t _item_sk7777;
    int32_t _d_date7781;
    bool operator==(const SW_JOIN_FULLOUTER_TD_6706_key& other) const {
        return ((_item_sk7777 == other._item_sk7777) && (_d_date7781 == other._d_date7781));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_FULLOUTER_TD_6706_key> {
    std::size_t operator() (const SW_JOIN_FULLOUTER_TD_6706_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk7777)) + (hash<int32_t>()(k._d_date7781));
    }
};
}
struct SW_JOIN_FULLOUTER_TD_6706_payload {
    int32_t _item_sk7777;
    int32_t _d_date7781;
    int32_t __w07812;
    int32_t _ss_item_sk1208;
    int32_t _cume_sales7778;
};
void SW_JOIN_FULLOUTER_TD_6706(Table &tbl_Window_TD_7245_output, Table &tbl_Window_TD_7180_output, Table &tbl_JOIN_FULLOUTER_TD_6706_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_FULLOUTER
    // Operation: ListBuffer(((item_sk#7775 = item_sk#7777) AND (d_date#122 = d_date#7781)))
    // Left Table: ListBuffer(item_sk#7775, d_date#122, _w0#7811, ws_item_sk#732, cume_sales#7776)
    // Right Table: ListBuffer(item_sk#7777, d_date#7781, _w0#7812, ss_item_sk#1208, cume_sales#7778)
    // Output Table: ListBuffer(item_sk#7775, item_sk#7777, d_date#122, d_date#7781, cume_sales#7776, cume_sales#7778)
    std::unordered_multimap<SW_JOIN_FULLOUTER_TD_6706_key, SW_JOIN_FULLOUTER_TD_6706_payload> ht1;
    std::unordered_map<SW_JOIN_FULLOUTER_TD_6706_key, bool> ht1;
    int nrow1 = tbl_Window_TD_7180_output.getNumRow();
    int nrow2 = tbl_Window_TD_7245_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item_sk7777_k = tbl_Window_TD_7180_output.getInt32(i, 0);
        int32_t _d_date7781_k = tbl_Window_TD_7180_output.getInt32(i, 1);
        SW_JOIN_FULLOUTER_TD_6706_key keyA{_item_sk7777_k, _d_date7781_k};
        int32_t _item_sk7777 = tbl_Window_TD_7180_output.getInt32(i, 0);
        int32_t _d_date7781 = tbl_Window_TD_7180_output.getInt32(i, 1);
        int32_t __w07812 = tbl_Window_TD_7180_output.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_Window_TD_7180_output.getInt32(i, 3);
        int32_t _cume_sales7778 = tbl_Window_TD_7180_output.getInt32(i, 4);
        SW_JOIN_FULLOUTER_TD_6706_payload payloadA{_item_sk7777, _d_date7781, __w07812, _ss_item_sk1208, _cume_sales7778};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _item_sk7775_k = tbl_Window_TD_7245_output.getInt32(i, 0);
        int32_t _d_date122_k = tbl_Window_TD_7245_output.getInt32(i, 1);
        SW_JOIN_FULLOUTER_TD_6706_key key {_item_sk7775_k, _d_date122_k};
        auto it = ht1.find(key);
        int32_t _item_sk7775 = tbl_Window_TD_7245_output.getInt32(i, 0);
        int32_t _d_date122 = tbl_Window_TD_7245_output.getInt32(i, 1);
        int32_t __w07811 = tbl_Window_TD_7245_output.getInt32(i, 2);
        int32_t _ws_item_sk732 = tbl_Window_TD_7245_output.getInt32(i, 3);
        int32_t _cume_sales7776 = tbl_Window_TD_7245_output.getInt32(i, 4);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(key);
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _item_sk7777 = (it_it->second)._item_sk7777;
                int32_t _d_date7781 = (it_it->second)._d_date7781;
                int32_t __w07812 = (it_it->second).__w07812;
                int32_t _ss_item_sk1208 = (it_it->second)._ss_item_sk1208;
                int32_t _cume_sales7778 = (it_it->second)._cume_sales7778;
                tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 1, _item_sk7777);
                tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 3, _d_date7781);
                tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 5, _cume_sales7778);
                tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 0, _item_sk7775);
                tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 2, _d_date122);
                tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 4, _cume_sales7776);
                it_it++;
                r++;
            }
            matched[key] = true;
        } else {
            tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 0, _item_sk7775);
            tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 2, _d_date122);
            tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 4, _cume_sales7776);
            r++;
        }
    }
    for (const auto& kv : ht1) {
        if (!matched[kv.first]) {
            tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 1, _item_sk7777);
            tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 3, _d_date7781);
            tbl_JOIN_FULLOUTER_TD_6706_output.setInt32(r, 5, _cume_sales7778);
            r++
        }
    }
    tbl_JOIN_FULLOUTER_TD_6706_output.setNumRow(r);
    std::cout << "tbl_JOIN_FULLOUTER_TD_6706_output #Row: " << tbl_JOIN_FULLOUTER_TD_6706_output.getNumRow() << std::endl;
}

void SW_Project_TD_5709(Table &tbl_JOIN_FULLOUTER_TD_6706_output, Table &tbl_Project_TD_5709_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CASE WHEN isnotnull(item_sk#7775) THEN item_sk#7775 ELSE item_sk#7777 END AS item_sk#7769, CASE WHEN isnotnull(d_date#122) THEN d_date#122 ELSE d_date#7781 END AS d_date#7770, cume_sales#7776 AS web_sales#7771, cume_sales#7778 AS store_sales#7772)
    // Input: ListBuffer(item_sk#7775, item_sk#7777, d_date#122, d_date#7781, cume_sales#7776, cume_sales#7778)
    // Output: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772)
    int nrow1 = tbl_JOIN_FULLOUTER_TD_6706_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item_sk7775 = tbl_JOIN_FULLOUTER_TD_6706_output.getInt32(i, 0);
        int32_t _item_sk7777 = tbl_JOIN_FULLOUTER_TD_6706_output.getInt32(i, 1);
        int32_t _d_date122 = tbl_JOIN_FULLOUTER_TD_6706_output.getInt32(i, 2);
        int32_t _d_date7781 = tbl_JOIN_FULLOUTER_TD_6706_output.getInt32(i, 3);
        int32_t _cume_sales7776 = tbl_JOIN_FULLOUTER_TD_6706_output.getInt32(i, 4);
        int32_t _cume_sales7778 = tbl_JOIN_FULLOUTER_TD_6706_output.getInt32(i, 5);
        int32_t _item_sk7769 = _item_sk7775 ? _item_sk7775 : _item_sk7777;
        tbl_Project_TD_5709_output.setInt32(i, 0, _item_sk7769);
        int32_t _d_date7770 = _d_date122 ? _d_date122 : _d_date7781;
        tbl_Project_TD_5709_output.setInt32(i, 1, _d_date7770);
        int32_t _web_sales7771 = _cume_sales7776;
        tbl_Project_TD_5709_output.setInt32(i, 2, _web_sales7771);
        int32_t _store_sales7772 = _cume_sales7778;
        tbl_Project_TD_5709_output.setInt32(i, 3, _store_sales7772);
    }
    tbl_Project_TD_5709_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5709_output #Row: " << tbl_Project_TD_5709_output.getNumRow() << std::endl;
}

void SW_Window_TD_4743(Table &tbl_Project_TD_5709_output, Table &tbl_Window_TD_4743_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(max(web_sales#7771) windowspecdefinition(item_sk#7769, d_date#7770 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS web_cumulative#7773, max(store_sales#7772) windowspecdefinition(item_sk#7769, d_date#7770 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS store_cumulative#7774)
    // Input: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772)
    // Output: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772, web_cumulative#7773, store_cumulative#7774)
    struct SW_Window_TD_4743Row {
        int32_t _item_sk7769;
        int32_t _d_date7770;
        int32_t _web_sales7771;
        int32_t _store_sales7772;
    }; 

    int nrow = tbl_Project_TD_5709_output.getNumRow();
    std::vector<SW_Window_TD_4743Row> rows0;
    std::vector<SW_Window_TD_4743Row> rows1;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk7769 = tbl_Project_TD_5709_output.getInt32(i, 0);
        tbl_Window_TD_4743_output.setInt32(r, 0,_item_sk7769);
        int32_t _d_date7770 = tbl_Project_TD_5709_output.getInt32(i, 1);
        tbl_Window_TD_4743_output.setInt32(r, 1,_d_date7770);
        int32_t _web_sales7771 = tbl_Project_TD_5709_output.getInt32(i, 2);
        tbl_Window_TD_4743_output.setInt32(r, 2,_web_sales7771);
        int32_t _store_sales7772 = tbl_Project_TD_5709_output.getInt32(i, 3);
        tbl_Window_TD_4743_output.setInt32(r, 3,_store_sales7772);
        r++;
        SW_Window_TD_4743Row t = {_item_sk7769,_d_date7770,_web_sales7771,_store_sales7772};
        rows0.push_back(t);
        rows1.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4743Row& a, const SW_Window_TD_4743Row& b) const { return 
(a._item_sk7769 < b._item_sk7769) || 
 ((a._item_sk7769 == b._item_sk7769) && (a._d_date7770 < b._d_date7770)); 
}
    }SW_Window_TD_4743_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4743_order0);
    int64_t max0 = std::numeric_limits<int>::min();
    int32_t current_item_sk77690 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_item_sk77690 != it._item_sk7769) {
            max0 = std::numeric_limits<int>::min();
            current_item_sk77690 = it._item_sk7769;
        }
        tbl_Window_TD_4743_output.setInt64(r, 4, max0 < it._web_sales7771 ? it._web_sales7771 : max0);
    }
    struct {
        bool operator()(const SW_Window_TD_4743Row& a, const SW_Window_TD_4743Row& b) const { return 
(a._item_sk7769 < b._item_sk7769) || 
 ((a._item_sk7769 == b._item_sk7769) && (a._d_date7770 < b._d_date7770)); 
}
    }SW_Window_TD_4743_order1; 

    std::sort(rows1.begin(), rows1.end(), SW_Window_TD_4743_order1);
    int64_t max1 = std::numeric_limits<int>::min();
    int32_t current_item_sk77691 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows1) {
        if (current_item_sk77691 != it._item_sk7769) {
            max1 = std::numeric_limits<int>::min();
            current_item_sk77691 = it._item_sk7769;
        }
        tbl_Window_TD_4743_output.setInt64(r, 4, max1 < it._store_sales7772 ? it._store_sales7772 : max1);
    }
    tbl_Window_TD_4743_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4743_output #Row: " << tbl_Window_TD_4743_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3426(Table &tbl_Window_TD_4743_output, Table &tbl_Filter_TD_3426_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(web_cumulative#7773) AND isnotnull(store_cumulative#7774)) AND (web_cumulative#7773 > store_cumulative#7774)))
    // Input: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772, web_cumulative#7773, store_cumulative#7774)
    // Output: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772, web_cumulative#7773, store_cumulative#7774)
    int r = 0;
    int nrow1 = tbl_Window_TD_4743_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _web_cumulative7773 = tbl_Window_TD_4743_output.getInt32(i, 4);
        int32_t _store_cumulative7774 = tbl_Window_TD_4743_output.getInt32(i, 5);
        if (((_web_cumulative7773!= 0) && (_store_cumulative7774!= 0)) && (_web_cumulative7773 > _store_cumulative7774)) {
            int32_t _item_sk7769_t = tbl_Window_TD_4743_output.getInt32(i, 0);
            tbl_Filter_TD_3426_output.setInt32(r, 0, _item_sk7769_t);
            int32_t _d_date7770_t = tbl_Window_TD_4743_output.getInt32(i, 1);
            tbl_Filter_TD_3426_output.setInt32(r, 1, _d_date7770_t);
            int32_t _web_sales7771_t = tbl_Window_TD_4743_output.getInt32(i, 2);
            tbl_Filter_TD_3426_output.setInt32(r, 2, _web_sales7771_t);
            int32_t _store_sales7772_t = tbl_Window_TD_4743_output.getInt32(i, 3);
            tbl_Filter_TD_3426_output.setInt32(r, 3, _store_sales7772_t);
            int32_t _web_cumulative7773_t = tbl_Window_TD_4743_output.getInt32(i, 4);
            tbl_Filter_TD_3426_output.setInt32(r, 4, _web_cumulative7773_t);
            int32_t _store_cumulative7774_t = tbl_Window_TD_4743_output.getInt32(i, 5);
            tbl_Filter_TD_3426_output.setInt32(r, 5, _store_cumulative7774_t);
            r++;
        }
    }
    tbl_Filter_TD_3426_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3426_output #Row: " << tbl_Filter_TD_3426_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2741(Table &tbl_Filter_TD_3426_output, Table &tbl_Sort_TD_2741_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(item_sk#7769 ASC NULLS FIRST, d_date#7770 ASC NULLS FIRST)
    // Input: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772, web_cumulative#7773, store_cumulative#7774)
    // Output: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772, web_cumulative#7773, store_cumulative#7774)
    struct SW_Sort_TD_2741Row {
        int32_t _item_sk7769;
        int32_t _d_date7770;
        int32_t _web_sales7771;
        int32_t _store_sales7772;
        int32_t _web_cumulative7773;
        int32_t _store_cumulative7774;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2741Row& a, const SW_Sort_TD_2741Row& b) const { return 
 (a._item_sk7769 < b._item_sk7769) || 
 ((a._item_sk7769 == b._item_sk7769) && (a._d_date7770 < b._d_date7770)); 
}
    }SW_Sort_TD_2741_order; 

    int nrow1 = tbl_Filter_TD_3426_output.getNumRow();
    std::vector<SW_Sort_TD_2741Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _item_sk7769 = tbl_Filter_TD_3426_output.getInt32(i, 0);
        int32_t _d_date7770 = tbl_Filter_TD_3426_output.getInt32(i, 1);
        int32_t _web_sales7771 = tbl_Filter_TD_3426_output.getInt32(i, 2);
        int32_t _store_sales7772 = tbl_Filter_TD_3426_output.getInt32(i, 3);
        int32_t _web_cumulative7773 = tbl_Filter_TD_3426_output.getInt32(i, 4);
        int32_t _store_cumulative7774 = tbl_Filter_TD_3426_output.getInt32(i, 5);
        SW_Sort_TD_2741Row t = {_item_sk7769,_d_date7770,_web_sales7771,_store_sales7772,_web_cumulative7773,_store_cumulative7774};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2741_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2741_output.setInt32(r, 0, it._item_sk7769);
        tbl_Sort_TD_2741_output.setInt32(r, 1, it._d_date7770);
        tbl_Sort_TD_2741_output.setInt32(r, 2, it._web_sales7771);
        tbl_Sort_TD_2741_output.setInt32(r, 3, it._store_sales7772);
        tbl_Sort_TD_2741_output.setInt32(r, 4, it._web_cumulative7773);
        tbl_Sort_TD_2741_output.setInt32(r, 5, it._store_cumulative7774);
        ++r;
    }
    tbl_Sort_TD_2741_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2741_output #Row: " << tbl_Sort_TD_2741_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1871(Table &tbl_Sort_TD_2741_output, Table &tbl_LocalLimit_TD_1871_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772, web_cumulative#7773, store_cumulative#7774)
    // Output: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772, web_cumulative#7773, store_cumulative#7774)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1871_output.setInt32(r, 0, tbl_Sort_TD_2741_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1871_output.setInt32(r, 1, tbl_Sort_TD_2741_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1871_output.setInt32(r, 2, tbl_Sort_TD_2741_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1871_output.setInt32(r, 3, tbl_Sort_TD_2741_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1871_output.setInt32(r, 4, tbl_Sort_TD_2741_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1871_output.setInt32(r, 5, tbl_Sort_TD_2741_output.getInt32(i, 5));
        r++;
    }
    tbl_LocalLimit_TD_1871_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1871_output #Row: " << tbl_LocalLimit_TD_1871_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0326(Table &tbl_LocalLimit_TD_1871_output, Table &tbl_GlobalLimit_TD_0326_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772, web_cumulative#7773, store_cumulative#7774)
    // Output: ListBuffer(item_sk#7769, d_date#7770, web_sales#7771, store_sales#7772, web_cumulative#7773, store_cumulative#7774)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0326_output.setInt32(r, 0, tbl_LocalLimit_TD_1871_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0326_output.setInt32(r, 1, tbl_LocalLimit_TD_1871_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0326_output.setInt32(r, 2, tbl_LocalLimit_TD_1871_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0326_output.setInt32(r, 3, tbl_LocalLimit_TD_1871_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0326_output.setInt32(r, 4, tbl_LocalLimit_TD_1871_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0326_output.setInt32(r, 5, tbl_LocalLimit_TD_1871_output.getInt32(i, 5));
        r++;
    }
    tbl_GlobalLimit_TD_0326_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0326_output #Row: " << tbl_GlobalLimit_TD_0326_output.getNumRow() << std::endl;
}

