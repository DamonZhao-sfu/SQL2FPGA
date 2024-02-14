#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_4221(Table &tbl_SerializeFromObject_TD_5972_input, Table &tbl_Filter_TD_4221_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3554) AND ((d_month_seq#3554 >= 1200) AND (d_month_seq#3554 <= 1211))) AND isnotnull(d_date_sk#3551)))
    // Input: ListBuffer(d_date_sk#3551, d_month_seq#3554)
    // Output: ListBuffer(d_date_sk#3551)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5972_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3554 = tbl_SerializeFromObject_TD_5972_input.getInt32(i, 1);
        int32_t _d_date_sk3551 = tbl_SerializeFromObject_TD_5972_input.getInt32(i, 0);
        if (((1) && ((_d_month_seq3554 >= 1200) && (_d_month_seq3554 <= 1211))) && (1)) {
            int32_t _d_date_sk3551_t = tbl_SerializeFromObject_TD_5972_input.getInt32(i, 0);
            tbl_Filter_TD_4221_output.setInt32(r, 0, _d_date_sk3551_t);
            r++;
        }
    }
    tbl_Filter_TD_4221_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4221_output #Row: " << tbl_Filter_TD_4221_output.getNumRow() << std::endl;
}

void SW_Filter_TD_499(Table &tbl_SerializeFromObject_TD_5269_input, Table &tbl_Filter_TD_499_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5269_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_5269_input.getInt32(i, 0);
        if (1) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_5269_input.getInt32(i, 0);
            tbl_Filter_TD_499_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_5269_input.getInt32(i, 1);
            tbl_Filter_TD_499_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_5269_input.getInt32(i, 2);
            tbl_Filter_TD_499_output.setInt32(r, 2, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_499_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_499_output #Row: " << tbl_Filter_TD_499_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4554(Table &tbl_SerializeFromObject_TD_5759_input, Table &tbl_Filter_TD_4554_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5759_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_5759_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_5759_input.getInt32(i, 0);
        if (((1) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_5759_input.getInt32(i, 0);
            tbl_Filter_TD_4554_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_4554_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4554_output #Row: " << tbl_Filter_TD_4554_output.getNumRow() << std::endl;
}

void SW_Filter_TD_473(Table &tbl_SerializeFromObject_TD_5880_input, Table &tbl_Filter_TD_473_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#1206))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5880_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_5880_input.getInt32(i, 0);
        if (1) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_5880_input.getInt32(i, 0);
            tbl_Filter_TD_473_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_5880_input.getInt32(i, 1);
            tbl_Filter_TD_473_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_5880_input.getInt32(i, 2);
            tbl_Filter_TD_473_output.setInt32(r, 2, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_473_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_473_output #Row: " << tbl_Filter_TD_473_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_339_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_339_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_339_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_339_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_339_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_339_key_rightMajor {
    int32_t _d_date_sk3551;
    bool operator==(const SW_JOIN_INNER_TD_339_key_rightMajor& other) const {
        return ((_d_date_sk3551 == other._d_date_sk3551));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_339_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_339_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3551));
    }
};
}
struct SW_JOIN_INNER_TD_339_payload_rightMajor {
    int32_t _d_date_sk3551;
};
void SW_JOIN_INNER_TD_339(Table &tbl_Filter_TD_499_output, Table &tbl_Filter_TD_4221_output, Table &tbl_JOIN_INNER_TD_339_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3551))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Right Table: ListBuffer(d_date_sk#3551)
    // Output Table: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119)
    int left_nrow = tbl_Filter_TD_499_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4221_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_339_key_leftMajor, SW_JOIN_INNER_TD_339_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_499_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_499_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_339_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_499_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_499_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_499_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_339_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4221_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3551_k = tbl_Filter_TD_4221_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_339_key_leftMajor{_d_date_sk3551_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _d_date_sk3551 = tbl_Filter_TD_4221_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_339_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_339_output.setInt32(r, 1, _cs_item_sk1119);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_339_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_339_key_rightMajor, SW_JOIN_INNER_TD_339_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4221_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3551_k = tbl_Filter_TD_4221_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_339_key_rightMajor keyA{_d_date_sk3551_k};
            int32_t _d_date_sk3551 = tbl_Filter_TD_4221_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_339_payload_rightMajor payloadA{_d_date_sk3551};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_499_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_499_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_339_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3551 = (it->second)._d_date_sk3551;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_499_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_499_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_499_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_339_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_339_output.setInt32(r, 1, _cs_item_sk1119);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_339_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_339_output #Row: " << tbl_JOIN_INNER_TD_339_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3657_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_3657_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3657_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3657_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_3657_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
};
struct SW_JOIN_INNER_TD_3657_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_3657_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3657_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3657_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_3657_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_3657(Table &tbl_Filter_TD_473_output, Table &tbl_Filter_TD_4554_output, Table &tbl_JOIN_INNER_TD_3657_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209)
    int left_nrow = tbl_Filter_TD_473_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4554_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3657_key_leftMajor, SW_JOIN_INNER_TD_3657_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_473_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_473_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3657_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_473_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_473_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_473_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3657_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4554_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_4554_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3657_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date_sk120 = tbl_Filter_TD_4554_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3657_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_3657_output.setInt32(r, 1, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3657_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3657_key_rightMajor, SW_JOIN_INNER_TD_3657_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4554_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_4554_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3657_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_4554_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3657_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_473_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_473_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3657_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_473_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_473_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_473_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3657_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_3657_output.setInt32(r, 1, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3657_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3657_output #Row: " << tbl_JOIN_INNER_TD_3657_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_2250_key {
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    bool operator==(const SW_Aggregate_TD_2250_key& other) const { return (_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107) && (_cs_item_sk1119 == other._cs_item_sk1119); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_2250_key> {
    std::size_t operator() (const SW_Aggregate_TD_2250_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107)) + (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_Aggregate_TD_2250_payload {
    int32_t _customer_sk3549;
    int32_t _item_sk3550;
};
void SW_Aggregate_TD_2250(Table &tbl_JOIN_INNER_TD_339_output, Table &tbl_Aggregate_TD_2250_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119, cs_bill_customer_sk#1107 AS customer_sk#3549, cs_item_sk#1119 AS item_sk#3550)
    // Input: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Output: ListBuffer(customer_sk#3549, item_sk#3550)
    std::unordered_map<SW_Aggregate_TD_2250_key, SW_Aggregate_TD_2250_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_339_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_339_output.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_339_output.getInt32(i, 1);
        SW_Aggregate_TD_2250_key k{_cs_bill_customer_sk1107, _cs_item_sk1119};
        int32_t _customer_sk3549 = _cs_bill_customer_sk1107;
        int32_t _item_sk3550 = _cs_item_sk1119;
        SW_Aggregate_TD_2250_payload p{_customer_sk3549, _item_sk3550};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cs_bill_customer_sk1107 not required in the output table
        // _cs_item_sk1119 not required in the output table
        tbl_Aggregate_TD_2250_output.setInt32(r, 0, (it.second)._customer_sk3549);
        tbl_Aggregate_TD_2250_output.setInt32(r, 1, (it.second)._item_sk3550);
        ++r;
    }
    tbl_Aggregate_TD_2250_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2250_output #Row: " << tbl_Aggregate_TD_2250_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_2883_key {
    int32_t _ss_customer_sk1209;
    int32_t _ss_item_sk1208;
    bool operator==(const SW_Aggregate_TD_2883_key& other) const { return (_ss_customer_sk1209 == other._ss_customer_sk1209) && (_ss_item_sk1208 == other._ss_item_sk1208); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_2883_key> {
    std::size_t operator() (const SW_Aggregate_TD_2883_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209)) + (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_Aggregate_TD_2883_payload {
    int32_t _customer_sk3547;
    int32_t _item_sk3548;
};
void SW_Aggregate_TD_2883(Table &tbl_JOIN_INNER_TD_3657_output, Table &tbl_Aggregate_TD_2883_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_customer_sk#1209, ss_item_sk#1208, ss_customer_sk#1209 AS customer_sk#3547, ss_item_sk#1208 AS item_sk#3548)
    // Input: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209)
    // Output: ListBuffer(customer_sk#3547, item_sk#3548)
    std::unordered_map<SW_Aggregate_TD_2883_key, SW_Aggregate_TD_2883_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_3657_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_3657_output.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_3657_output.getInt32(i, 1);
        SW_Aggregate_TD_2883_key k{_ss_customer_sk1209, _ss_item_sk1208};
        int32_t _customer_sk3547 = _ss_customer_sk1209;
        int32_t _item_sk3548 = _ss_item_sk1208;
        SW_Aggregate_TD_2883_payload p{_customer_sk3547, _item_sk3548};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_customer_sk1209 not required in the output table
        // _ss_item_sk1208 not required in the output table
        tbl_Aggregate_TD_2883_output.setInt32(r, 0, (it.second)._customer_sk3547);
        tbl_Aggregate_TD_2883_output.setInt32(r, 1, (it.second)._item_sk3548);
        ++r;
    }
    tbl_Aggregate_TD_2883_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2883_output #Row: " << tbl_Aggregate_TD_2883_output.getNumRow() << std::endl;
}

struct SW_JOIN_FULLOUTER_TD_139_key {
    int32_t _customer_sk3549;
    int32_t _item_sk3550;
    bool operator==(const SW_JOIN_FULLOUTER_TD_139_key& other) const {
        return ((_customer_sk3549 == other._customer_sk3549) && (_item_sk3550 == other._item_sk3550));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_FULLOUTER_TD_139_key> {
    std::size_t operator() (const SW_JOIN_FULLOUTER_TD_139_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._customer_sk3549)) + (hash<int32_t>()(k._item_sk3550));
    }
};
}
struct SW_JOIN_FULLOUTER_TD_139_payload {
    int32_t _customer_sk3549;
    int32_t _item_sk3550;
};
void SW_JOIN_FULLOUTER_TD_139(Table &tbl_Aggregate_TD_2883_output, Table &tbl_Aggregate_TD_2250_output, Table &tbl_JOIN_FULLOUTER_TD_139_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_FULLOUTER
    // Operation: ListBuffer(((customer_sk#3547 = customer_sk#3549) AND (item_sk#3548 = item_sk#3550)))
    // Left Table: ListBuffer(customer_sk#3547, item_sk#3548)
    // Right Table: ListBuffer(customer_sk#3549, item_sk#3550)
    // Output Table: ListBuffer(customer_sk#3547, customer_sk#3549)
    std::unordered_multimap<SW_JOIN_FULLOUTER_TD_139_key, SW_JOIN_FULLOUTER_TD_139_payload> ht1;
    std::unordered_map<SW_JOIN_FULLOUTER_TD_139_key, bool> ht1;
    int nrow1 = tbl_Aggregate_TD_2250_output.getNumRow();
    int nrow2 = tbl_Aggregate_TD_2883_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _customer_sk3549_k = tbl_Aggregate_TD_2250_output.getInt32(i, 0);
        int32_t _item_sk3550_k = tbl_Aggregate_TD_2250_output.getInt32(i, 1);
        SW_JOIN_FULLOUTER_TD_139_key keyA{_customer_sk3549_k, _item_sk3550_k};
        int32_t _customer_sk3549 = tbl_Aggregate_TD_2250_output.getInt32(i, 0);
        int32_t _item_sk3550 = tbl_Aggregate_TD_2250_output.getInt32(i, 1);
        SW_JOIN_FULLOUTER_TD_139_payload payloadA{_customer_sk3549, _item_sk3550};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _customer_sk3547_k = tbl_Aggregate_TD_2883_output.getInt32(i, 0);
        int32_t _item_sk3548_k = tbl_Aggregate_TD_2883_output.getInt32(i, 1);
        SW_JOIN_FULLOUTER_TD_139_key key {_customer_sk3547_k, _item_sk3548_k};
        auto it = ht1.find(key);
        int32_t _customer_sk3547 = tbl_Aggregate_TD_2883_output.getInt32(i, 0);
        int32_t _item_sk3548 = tbl_Aggregate_TD_2883_output.getInt32(i, 1);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(key);
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _customer_sk3549 = (it_it->second)._customer_sk3549;
                int32_t _item_sk3550 = (it_it->second)._item_sk3550;
                tbl_JOIN_FULLOUTER_TD_139_output.setInt32(r, 1, _customer_sk3549);
                tbl_JOIN_FULLOUTER_TD_139_output.setInt32(r, 0, _customer_sk3547);
                it_it++;
                r++;
            }
            matched[key] = true;
        } else {
            tbl_JOIN_FULLOUTER_TD_139_output.setInt32(r, 0, _customer_sk3547);
            r++;
        }
    }
    for (const auto& kv : ht1) {
        if (!matched[kv.first]) {
            tbl_JOIN_FULLOUTER_TD_139_output.setInt32(r, 1, _customer_sk3549);
            r++
        }
    }
    tbl_JOIN_FULLOUTER_TD_139_output.setNumRow(r);
    std::cout << "tbl_JOIN_FULLOUTER_TD_139_output #Row: " << tbl_JOIN_FULLOUTER_TD_139_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0238(Table &tbl_JOIN_FULLOUTER_TD_139_output, Table &tbl_Aggregate_TD_0238_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(sum(CASE WHEN (isnotnull(customer_sk#3547) AND isnull(customer_sk#3549)) THEN 1 ELSE 0 END) AS store_only#3544L, sum(CASE WHEN (isnull(customer_sk#3547) AND isnotnull(customer_sk#3549)) THEN 1 ELSE 0 END) AS catalog_only#3545L, sum(CASE WHEN (isnotnull(customer_sk#3547) AND isnotnull(customer_sk#3549)) THEN 1 ELSE 0 END) AS store_and_catalog#3546L)
    // Input: ListBuffer(customer_sk#3547, customer_sk#3549)
    // Output: ListBuffer(store_only#3544L, catalog_only#3545L, store_and_catalog#3546L)
    int64_t sum_0 = 0;
    int64_t sum_1 = 0;
    int64_t sum_2 = 0;
    int nrow1 = tbl_JOIN_FULLOUTER_TD_139_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _customer_sk3547 = tbl_JOIN_FULLOUTER_TD_139_output.getInt32(i, 0);
        int32_t _customer_sk3549 = tbl_JOIN_FULLOUTER_TD_139_output.getInt32(i, 1);
        int64_t _store_only3544L_sum_0 = (_customer_sk3547 && _customer_sk3549) ? 1 : 0;
        int64_t _catalog_only3545L_sum_1 = (_customer_sk3547 && _customer_sk3549) ? 1 : 0;
        int64_t _store_and_catalog3546L_sum_2 = (_customer_sk3547 && _customer_sk3549) ? 1 : 0;
        sum_0 += _store_only3544L_sum_0;
        sum_1 += _catalog_only3545L_sum_1;
        sum_2 += _store_and_catalog3546L_sum_2;
    }
    int r = 0;
    int64_t _store_only3544L = sum_0;
    tbl_Aggregate_TD_0238_output.setInt64(r++, 0, _store_only3544L);
    int64_t _catalog_only3545L = sum_1;
    tbl_Aggregate_TD_0238_output.setInt64(r++, 1, _catalog_only3545L);
    int64_t _store_and_catalog3546L = sum_2;
    tbl_Aggregate_TD_0238_output.setInt64(r++, 2, _store_and_catalog3546L);
    tbl_Aggregate_TD_0238_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0238_output #Row: " << tbl_Aggregate_TD_0238_output.getNumRow() << std::endl;
}

