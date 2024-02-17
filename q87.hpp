#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8317(Table &tbl_SerializeFromObject_TD_9944_input, Table &tbl_Filter_TD_8317_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#9534) AND ((d_month_seq#9534 >= 1200) AND (d_month_seq#9534 <= 1211))) AND isnotnull(d_date_sk#9531)))
    // Input: ListBuffer(d_date_sk#9531, d_date#9533, d_month_seq#9534)
    // Output: ListBuffer(d_date_sk#9531, d_date#9533)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9944_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq9534 = tbl_SerializeFromObject_TD_9944_input.getInt32(i, 2);
        int32_t _d_date_sk9531 = tbl_SerializeFromObject_TD_9944_input.getInt32(i, 0);
        if (((_d_month_seq9534!= 0) && ((_d_month_seq9534 >= 1200) && (_d_month_seq9534 <= 1211))) && (_d_date_sk9531!= 0)) {
            int32_t _d_date_sk9531_t = tbl_SerializeFromObject_TD_9944_input.getInt32(i, 0);
            tbl_Filter_TD_8317_output.setInt32(r, 0, _d_date_sk9531_t);
            int32_t _d_date9533_t = tbl_SerializeFromObject_TD_9944_input.getInt32(i, 1);
            tbl_Filter_TD_8317_output.setInt32(r, 1, _d_date9533_t);
            r++;
        }
    }
    tbl_Filter_TD_8317_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8317_output #Row: " << tbl_Filter_TD_8317_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8833(Table &tbl_SerializeFromObject_TD_9476_input, Table &tbl_Filter_TD_8833_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_bill_customer_sk#1107)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9476_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9476_input.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_9476_input.getInt32(i, 1);
        if ((_cs_sold_date_sk1104!= 0) && (_cs_bill_customer_sk1107!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9476_input.getInt32(i, 0);
            tbl_Filter_TD_8833_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_9476_input.getInt32(i, 1);
            tbl_Filter_TD_8833_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            r++;
        }
    }
    tbl_Filter_TD_8833_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8833_output #Row: " << tbl_Filter_TD_8833_output.getNumRow() << std::endl;
}

void SW_Filter_TD_822(Table &tbl_SerializeFromObject_TD_9982_input, Table &tbl_Filter_TD_822_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9982_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_9982_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_9982_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_9982_input.getInt32(i, 0);
            tbl_Filter_TD_822_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_9982_input.getInt32(i, 1);
            tbl_Filter_TD_822_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_822_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_822_output #Row: " << tbl_Filter_TD_822_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8900(Table &tbl_SerializeFromObject_TD_9672_input, Table &tbl_Filter_TD_8900_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_customer_sk#1209)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9672_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_9672_input.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_9672_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_customer_sk1209!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_9672_input.getInt32(i, 0);
            tbl_Filter_TD_8900_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_9672_input.getInt32(i, 1);
            tbl_Filter_TD_8900_output.setInt32(r, 1, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_8900_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8900_output #Row: " << tbl_Filter_TD_8900_output.getNumRow() << std::endl;
}

void SW_Filter_TD_786(Table &tbl_SerializeFromObject_TD_8762_input, Table &tbl_Filter_TD_786_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#9559))
    // Input: ListBuffer(c_customer_sk#9559, c_first_name#9567, c_last_name#9568)
    // Output: ListBuffer(c_customer_sk#9559, c_first_name#9567, c_last_name#9568)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8762_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk9559 = tbl_SerializeFromObject_TD_8762_input.getInt32(i, 0);
        if (_c_customer_sk9559!= 0) {
            int32_t _c_customer_sk9559_t = tbl_SerializeFromObject_TD_8762_input.getInt32(i, 0);
            tbl_Filter_TD_786_output.setInt32(r, 0, _c_customer_sk9559_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name9567_t = tbl_SerializeFromObject_TD_8762_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_786_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name9567_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9568_t = tbl_SerializeFromObject_TD_8762_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_786_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9568_t);
            r++;
        }
    }
    tbl_Filter_TD_786_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_786_output #Row: " << tbl_Filter_TD_786_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7693_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_7693_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7693_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7693_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_7693_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
};
struct SW_JOIN_INNER_TD_7693_key_rightMajor {
    int32_t _d_date_sk9531;
    bool operator==(const SW_JOIN_INNER_TD_7693_key_rightMajor& other) const {
        return ((_d_date_sk9531 == other._d_date_sk9531));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7693_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7693_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk9531));
    }
};
}
struct SW_JOIN_INNER_TD_7693_payload_rightMajor {
    int32_t _d_date_sk9531;
    int32_t _d_date9533;
};
void SW_JOIN_INNER_TD_7693(Table &tbl_Filter_TD_8833_output, Table &tbl_Filter_TD_8317_output, Table &tbl_JOIN_INNER_TD_7693_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#9531))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    // Right Table: ListBuffer(d_date_sk#9531, d_date#9533)
    // Output Table: ListBuffer(cs_bill_customer_sk#1107, d_date#9533)
    int left_nrow = tbl_Filter_TD_8833_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8317_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7693_key_leftMajor, SW_JOIN_INNER_TD_7693_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8833_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8833_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7693_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8833_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8833_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7693_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8317_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk9531_k = tbl_Filter_TD_8317_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7693_key_leftMajor{_d_date_sk9531_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _d_date_sk9531 = tbl_Filter_TD_8317_output.getInt32(i, 0);
                int32_t _d_date9533 = tbl_Filter_TD_8317_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7693_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_7693_output.setInt32(r, 1, _d_date9533);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7693_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7693_key_rightMajor, SW_JOIN_INNER_TD_7693_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8317_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk9531_k = tbl_Filter_TD_8317_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7693_key_rightMajor keyA{_d_date_sk9531_k};
            int32_t _d_date_sk9531 = tbl_Filter_TD_8317_output.getInt32(i, 0);
            int32_t _d_date9533 = tbl_Filter_TD_8317_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7693_payload_rightMajor payloadA{_d_date_sk9531, _d_date9533};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8833_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8833_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7693_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk9531 = (it->second)._d_date_sk9531;
                int32_t _d_date9533 = (it->second)._d_date9533;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8833_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8833_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7693_output.setInt32(r, 1, _d_date9533);
                tbl_JOIN_INNER_TD_7693_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7693_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7693_output #Row: " << tbl_JOIN_INNER_TD_7693_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7915(Table &tbl_SerializeFromObject_TD_8274_input, Table &tbl_Filter_TD_7915_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8274_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_8274_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_8274_input.getInt32(i, 0);
            tbl_Filter_TD_7915_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_8274_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_8274_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_7915_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7915_output #Row: " << tbl_Filter_TD_7915_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_769_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_769_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_769_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_769_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_769_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
};
struct SW_JOIN_INNER_TD_769_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_769_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_769_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_769_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_769_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
};
void SW_JOIN_INNER_TD_769(Table &tbl_Filter_TD_8900_output, Table &tbl_Filter_TD_822_output, Table &tbl_JOIN_INNER_TD_769_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122)
    // Output Table: ListBuffer(ss_customer_sk#1209, d_date#122)
    int left_nrow = tbl_Filter_TD_8900_output.getNumRow();
    int right_nrow = tbl_Filter_TD_822_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_769_key_leftMajor, SW_JOIN_INNER_TD_769_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8900_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_8900_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_769_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8900_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_8900_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_769_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_822_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_822_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_769_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date_sk120 = tbl_Filter_TD_822_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_822_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_769_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_769_output.setInt32(r, 1, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_769_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_769_key_rightMajor, SW_JOIN_INNER_TD_769_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_822_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_822_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_769_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_822_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_822_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_769_payload_rightMajor payloadA{_d_date_sk120, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8900_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_8900_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_769_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8900_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_8900_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_769_output.setInt32(r, 1, _d_date122);
                tbl_JOIN_INNER_TD_769_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_769_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_769_output #Row: " << tbl_JOIN_INNER_TD_769_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6823(Table &tbl_SerializeFromObject_TD_7614_input, Table &tbl_Filter_TD_6823_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#9580) AND ((d_month_seq#9580 >= 1200) AND (d_month_seq#9580 <= 1211))) AND isnotnull(d_date_sk#9577)))
    // Input: ListBuffer(d_date_sk#9577, d_date#9579, d_month_seq#9580)
    // Output: ListBuffer(d_date_sk#9577, d_date#9579)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7614_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq9580 = tbl_SerializeFromObject_TD_7614_input.getInt32(i, 2);
        int32_t _d_date_sk9577 = tbl_SerializeFromObject_TD_7614_input.getInt32(i, 0);
        if (((_d_month_seq9580!= 0) && ((_d_month_seq9580 >= 1200) && (_d_month_seq9580 <= 1211))) && (_d_date_sk9577!= 0)) {
            int32_t _d_date_sk9577_t = tbl_SerializeFromObject_TD_7614_input.getInt32(i, 0);
            tbl_Filter_TD_6823_output.setInt32(r, 0, _d_date_sk9577_t);
            int32_t _d_date9579_t = tbl_SerializeFromObject_TD_7614_input.getInt32(i, 1);
            tbl_Filter_TD_6823_output.setInt32(r, 1, _d_date9579_t);
            r++;
        }
    }
    tbl_Filter_TD_6823_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6823_output #Row: " << tbl_Filter_TD_6823_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6202(Table &tbl_SerializeFromObject_TD_73_input, Table &tbl_Filter_TD_6202_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_bill_customer_sk#733)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_73_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_73_input.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_73_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && (_ws_bill_customer_sk733!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_73_input.getInt32(i, 0);
            tbl_Filter_TD_6202_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_73_input.getInt32(i, 1);
            tbl_Filter_TD_6202_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            r++;
        }
    }
    tbl_Filter_TD_6202_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6202_output #Row: " << tbl_Filter_TD_6202_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6515_key_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_JOIN_INNER_TD_6515_key_leftMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6515_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6515_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_JOIN_INNER_TD_6515_payload_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    int32_t _d_date9533;
};
struct SW_JOIN_INNER_TD_6515_key_rightMajor {
    int32_t _c_customer_sk9559;
    bool operator==(const SW_JOIN_INNER_TD_6515_key_rightMajor& other) const {
        return ((_c_customer_sk9559 == other._c_customer_sk9559));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6515_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6515_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk9559));
    }
};
}
struct SW_JOIN_INNER_TD_6515_payload_rightMajor {
    int32_t _c_customer_sk9559;
    std::string _c_first_name9567;
    std::string _c_last_name9568;
};
void SW_JOIN_INNER_TD_6515(Table &tbl_JOIN_INNER_TD_7693_output, Table &tbl_Filter_TD_786_output, Table &tbl_JOIN_INNER_TD_6515_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_customer_sk#1107 = c_customer_sk#9559))
    // Left Table: ListBuffer(cs_bill_customer_sk#1107, d_date#9533)
    // Right Table: ListBuffer(c_customer_sk#9559, c_first_name#9567, c_last_name#9568)
    // Output Table: ListBuffer(c_last_name#9568, c_first_name#9567, d_date#9533)
    int left_nrow = tbl_JOIN_INNER_TD_7693_output.getNumRow();
    int right_nrow = tbl_Filter_TD_786_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6515_key_leftMajor, SW_JOIN_INNER_TD_6515_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7693_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7693_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6515_key_leftMajor keyA{_cs_bill_customer_sk1107_k};
            int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7693_output.getInt32(i, 0);
            int32_t _d_date9533 = tbl_JOIN_INNER_TD_7693_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6515_payload_leftMajor payloadA{_cs_bill_customer_sk1107, _d_date9533};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_786_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk9559_k = tbl_Filter_TD_786_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6515_key_leftMajor{_c_customer_sk9559_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _d_date9533 = (it->second)._d_date9533;
                int32_t _c_customer_sk9559 = tbl_Filter_TD_786_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name9567_n = tbl_Filter_TD_786_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name9567 = std::string(_c_first_name9567_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9568_n = tbl_Filter_TD_786_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9568 = std::string(_c_last_name9568_n.data());
                tbl_JOIN_INNER_TD_6515_output.setInt32(r, 2, _d_date9533);
                tbl_JOIN_INNER_TD_6515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name9567_n);
                tbl_JOIN_INNER_TD_6515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9568_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6515_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6515_key_rightMajor, SW_JOIN_INNER_TD_6515_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_786_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk9559_k = tbl_Filter_TD_786_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6515_key_rightMajor keyA{_c_customer_sk9559_k};
            int32_t _c_customer_sk9559 = tbl_Filter_TD_786_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name9567_n = tbl_Filter_TD_786_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name9567 = std::string(_c_first_name9567_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9568_n = tbl_Filter_TD_786_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9568 = std::string(_c_last_name9568_n.data());
            SW_JOIN_INNER_TD_6515_payload_rightMajor payloadA{_c_customer_sk9559, _c_first_name9567, _c_last_name9568};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7693_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7693_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6515_key_rightMajor{_cs_bill_customer_sk1107_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk9559 = (it->second)._c_customer_sk9559;
                std::string _c_first_name9567 = (it->second)._c_first_name9567;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name9567_n{};
                memcpy(_c_first_name9567_n.data(), (_c_first_name9567).data(), (_c_first_name9567).length());
                std::string _c_last_name9568 = (it->second)._c_last_name9568;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9568_n{};
                memcpy(_c_last_name9568_n.data(), (_c_last_name9568).data(), (_c_last_name9568).length());
                int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7693_output.getInt32(i, 0);
                int32_t _d_date9533 = tbl_JOIN_INNER_TD_7693_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name9567_n);
                tbl_JOIN_INNER_TD_6515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9568_n);
                tbl_JOIN_INNER_TD_6515_output.setInt32(r, 2, _d_date9533);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6515_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6515_output #Row: " << tbl_JOIN_INNER_TD_6515_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6126_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_6126_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6126_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6126_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_6126_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _d_date122;
};
struct SW_JOIN_INNER_TD_6126_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_6126_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6126_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6126_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_6126_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_6126(Table &tbl_JOIN_INNER_TD_769_output, Table &tbl_Filter_TD_7915_output, Table &tbl_JOIN_INNER_TD_6126_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_customer_sk#1209, d_date#122)
    // Right Table: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_JOIN_INNER_TD_769_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7915_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6126_key_leftMajor, SW_JOIN_INNER_TD_6126_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_769_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_769_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6126_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_769_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_JOIN_INNER_TD_769_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6126_payload_leftMajor payloadA{_ss_customer_sk1209, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7915_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7915_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6126_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _c_customer_sk0 = tbl_Filter_TD_7915_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7915_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7915_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_6126_output.setInt32(r, 2, _d_date122);
                tbl_JOIN_INNER_TD_6126_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6126_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6126_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6126_key_rightMajor, SW_JOIN_INNER_TD_6126_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7915_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7915_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6126_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_7915_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7915_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7915_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_6126_payload_rightMajor payloadA{_c_customer_sk0, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_769_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_769_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6126_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_769_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_JOIN_INNER_TD_769_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6126_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6126_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_6126_output.setInt32(r, 2, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6126_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6126_output #Row: " << tbl_JOIN_INNER_TD_6126_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5716(Table &tbl_SerializeFromObject_TD_6109_input, Table &tbl_Filter_TD_5716_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#9605))
    // Input: ListBuffer(c_customer_sk#9605, c_first_name#9613, c_last_name#9614)
    // Output: ListBuffer(c_customer_sk#9605, c_first_name#9613, c_last_name#9614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6109_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk9605 = tbl_SerializeFromObject_TD_6109_input.getInt32(i, 0);
        if (_c_customer_sk9605!= 0) {
            int32_t _c_customer_sk9605_t = tbl_SerializeFromObject_TD_6109_input.getInt32(i, 0);
            tbl_Filter_TD_5716_output.setInt32(r, 0, _c_customer_sk9605_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name9613_t = tbl_SerializeFromObject_TD_6109_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5716_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name9613_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9614_t = tbl_SerializeFromObject_TD_6109_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5716_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9614_t);
            r++;
        }
    }
    tbl_Filter_TD_5716_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5716_output #Row: " << tbl_Filter_TD_5716_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5178_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_5178_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5178_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5178_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_5178_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
};
struct SW_JOIN_INNER_TD_5178_key_rightMajor {
    int32_t _d_date_sk9577;
    bool operator==(const SW_JOIN_INNER_TD_5178_key_rightMajor& other) const {
        return ((_d_date_sk9577 == other._d_date_sk9577));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5178_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5178_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk9577));
    }
};
}
struct SW_JOIN_INNER_TD_5178_payload_rightMajor {
    int32_t _d_date_sk9577;
    int32_t _d_date9579;
};
void SW_JOIN_INNER_TD_5178(Table &tbl_Filter_TD_6202_output, Table &tbl_Filter_TD_6823_output, Table &tbl_JOIN_INNER_TD_5178_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#9577))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Right Table: ListBuffer(d_date_sk#9577, d_date#9579)
    // Output Table: ListBuffer(ws_bill_customer_sk#733, d_date#9579)
    int left_nrow = tbl_Filter_TD_6202_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6823_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5178_key_leftMajor, SW_JOIN_INNER_TD_5178_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6202_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_6202_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5178_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_6202_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_6202_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5178_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_customer_sk733};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6823_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk9577_k = tbl_Filter_TD_6823_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5178_key_leftMajor{_d_date_sk9577_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date_sk9577 = tbl_Filter_TD_6823_output.getInt32(i, 0);
                int32_t _d_date9579 = tbl_Filter_TD_6823_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5178_output.setInt32(r, 0, _ws_bill_customer_sk733);
                tbl_JOIN_INNER_TD_5178_output.setInt32(r, 1, _d_date9579);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5178_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5178_key_rightMajor, SW_JOIN_INNER_TD_5178_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6823_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk9577_k = tbl_Filter_TD_6823_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5178_key_rightMajor keyA{_d_date_sk9577_k};
            int32_t _d_date_sk9577 = tbl_Filter_TD_6823_output.getInt32(i, 0);
            int32_t _d_date9579 = tbl_Filter_TD_6823_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5178_payload_rightMajor payloadA{_d_date_sk9577, _d_date9579};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6202_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_6202_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5178_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk9577 = (it->second)._d_date_sk9577;
                int32_t _d_date9579 = (it->second)._d_date9579;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_6202_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_6202_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5178_output.setInt32(r, 1, _d_date9579);
                tbl_JOIN_INNER_TD_5178_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5178_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5178_output #Row: " << tbl_JOIN_INNER_TD_5178_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5729_key {
    std::string _c_last_name9568;
    std::string _c_first_name9567;
    int32_t _d_date9533;
    bool operator==(const SW_Aggregate_TD_5729_key& other) const { return (_c_last_name9568 == other._c_last_name9568) && (_c_first_name9567 == other._c_first_name9567) && (_d_date9533 == other._d_date9533); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5729_key> {
    std::size_t operator() (const SW_Aggregate_TD_5729_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9568)) + (hash<string>()(k._c_first_name9567)) + (hash<int32_t>()(k._d_date9533));
    }
};
}
struct SW_Aggregate_TD_5729_payload {
};
void SW_Aggregate_TD_5729(Table &tbl_JOIN_INNER_TD_6515_output, Table &tbl_Aggregate_TD_5729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9568, c_first_name#9567, d_date#9533)
    // Input: ListBuffer(c_last_name#9568, c_first_name#9567, d_date#9533)
    // Output: ListBuffer(c_last_name#9568, c_first_name#9567, d_date#9533)
    std::unordered_map<SW_Aggregate_TD_5729_key, SW_Aggregate_TD_5729_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6515_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9568 = tbl_JOIN_INNER_TD_6515_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name9567 = tbl_JOIN_INNER_TD_6515_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date9533 = tbl_JOIN_INNER_TD_6515_output.getInt32(i, 2);
        SW_Aggregate_TD_5729_key k{std::string(_c_last_name9568.data()), std::string(_c_first_name9567.data()), _d_date9533};
        SW_Aggregate_TD_5729_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9568{};
        memcpy(_c_last_name9568.data(), ((it.first)._c_last_name9568).data(), ((it.first)._c_last_name9568).length());
        tbl_Aggregate_TD_5729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9568);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name9567{};
        memcpy(_c_first_name9567.data(), ((it.first)._c_first_name9567).data(), ((it.first)._c_first_name9567).length());
        tbl_Aggregate_TD_5729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name9567);
        tbl_Aggregate_TD_5729_output.setInt32(r, 2, (it.first)._d_date9533);
        ++r;
    }
    tbl_Aggregate_TD_5729_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5729_output #Row: " << tbl_Aggregate_TD_5729_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5601_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_5601_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5601_key> {
    std::size_t operator() (const SW_Aggregate_TD_5601_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_5601_payload {
};
void SW_Aggregate_TD_5601(Table &tbl_JOIN_INNER_TD_6126_output, Table &tbl_Aggregate_TD_5601_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_5601_key, SW_Aggregate_TD_5601_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6126_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_6126_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_6126_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_INNER_TD_6126_output.getInt32(i, 2);
        SW_Aggregate_TD_5601_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_5601_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), ((it.first)._c_last_name9).data(), ((it.first)._c_last_name9).length());
        tbl_Aggregate_TD_5601_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_5601_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_5601_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_5601_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5601_output #Row: " << tbl_Aggregate_TD_5601_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4663_key_leftMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_INNER_TD_4663_key_leftMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4663_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4663_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_INNER_TD_4663_payload_leftMajor {
    int32_t _ws_bill_customer_sk733;
    int32_t _d_date9579;
};
struct SW_JOIN_INNER_TD_4663_key_rightMajor {
    int32_t _c_customer_sk9605;
    bool operator==(const SW_JOIN_INNER_TD_4663_key_rightMajor& other) const {
        return ((_c_customer_sk9605 == other._c_customer_sk9605));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4663_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4663_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk9605));
    }
};
}
struct SW_JOIN_INNER_TD_4663_payload_rightMajor {
    int32_t _c_customer_sk9605;
    std::string _c_first_name9613;
    std::string _c_last_name9614;
};
void SW_JOIN_INNER_TD_4663(Table &tbl_JOIN_INNER_TD_5178_output, Table &tbl_Filter_TD_5716_output, Table &tbl_JOIN_INNER_TD_4663_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_customer_sk#733 = c_customer_sk#9605))
    // Left Table: ListBuffer(ws_bill_customer_sk#733, d_date#9579)
    // Right Table: ListBuffer(c_customer_sk#9605, c_first_name#9613, c_last_name#9614)
    // Output Table: ListBuffer(c_last_name#9614, c_first_name#9613, d_date#9579)
    int left_nrow = tbl_JOIN_INNER_TD_5178_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5716_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4663_key_leftMajor, SW_JOIN_INNER_TD_4663_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5178_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5178_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4663_key_leftMajor keyA{_ws_bill_customer_sk733_k};
            int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5178_output.getInt32(i, 0);
            int32_t _d_date9579 = tbl_JOIN_INNER_TD_5178_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4663_payload_leftMajor payloadA{_ws_bill_customer_sk733, _d_date9579};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5716_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk9605_k = tbl_Filter_TD_5716_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4663_key_leftMajor{_c_customer_sk9605_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date9579 = (it->second)._d_date9579;
                int32_t _c_customer_sk9605 = tbl_Filter_TD_5716_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name9613_n = tbl_Filter_TD_5716_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name9613 = std::string(_c_first_name9613_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9614_n = tbl_Filter_TD_5716_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9614 = std::string(_c_last_name9614_n.data());
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 2, _d_date9579);
                tbl_JOIN_INNER_TD_4663_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name9613_n);
                tbl_JOIN_INNER_TD_4663_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9614_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4663_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4663_key_rightMajor, SW_JOIN_INNER_TD_4663_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5716_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk9605_k = tbl_Filter_TD_5716_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4663_key_rightMajor keyA{_c_customer_sk9605_k};
            int32_t _c_customer_sk9605 = tbl_Filter_TD_5716_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name9613_n = tbl_Filter_TD_5716_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name9613 = std::string(_c_first_name9613_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9614_n = tbl_Filter_TD_5716_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9614 = std::string(_c_last_name9614_n.data());
            SW_JOIN_INNER_TD_4663_payload_rightMajor payloadA{_c_customer_sk9605, _c_first_name9613, _c_last_name9614};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5178_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5178_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4663_key_rightMajor{_ws_bill_customer_sk733_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk9605 = (it->second)._c_customer_sk9605;
                std::string _c_first_name9613 = (it->second)._c_first_name9613;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name9613_n{};
                memcpy(_c_first_name9613_n.data(), (_c_first_name9613).data(), (_c_first_name9613).length());
                std::string _c_last_name9614 = (it->second)._c_last_name9614;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9614_n{};
                memcpy(_c_last_name9614_n.data(), (_c_last_name9614).data(), (_c_last_name9614).length());
                int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5178_output.getInt32(i, 0);
                int32_t _d_date9579 = tbl_JOIN_INNER_TD_5178_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4663_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name9613_n);
                tbl_JOIN_INNER_TD_4663_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9614_n);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 2, _d_date9579);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4663_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4663_output #Row: " << tbl_JOIN_INNER_TD_4663_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_4648_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTANTI_TD_4648_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_4648_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_4648_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_4648_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTANTI_TD_4648_key_rightMajor {
    std::string _c_last_name9568;
    std::string _c_first_name9567;
    int32_t _d_date9533;
    bool operator==(const SW_JOIN_LEFTANTI_TD_4648_key_rightMajor& other) const {
        return ((_c_last_name9568 == other._c_last_name9568) && (_c_first_name9567 == other._c_first_name9567) && (_d_date9533 == other._d_date9533));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_4648_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_4648_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9568)) + (hash<string>()(k._c_first_name9567)) + (hash<int32_t>()(k._d_date9533));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_4648_payload_rightMajor {
    std::string _c_last_name9568;
    std::string _c_first_name9567;
    int32_t _d_date9533;
};
void SW_JOIN_LEFTANTI_TD_4648(Table &tbl_Aggregate_TD_5601_output, Table &tbl_Aggregate_TD_5729_output, Table &tbl_JOIN_LEFTANTI_TD_4648_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#9568) AND (c_first_name#8 <=> c_first_name#9567)) AND (d_date#122 <=> d_date#9533)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#9568, c_first_name#9567, d_date#9533)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_5601_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5729_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_4648_key_rightMajor, SW_JOIN_LEFTANTI_TD_4648_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5729_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_5601_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9568_k_n = tbl_Aggregate_TD_5729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9568_k = std::string(_c_last_name9568_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name9567_k_n = tbl_Aggregate_TD_5729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name9567_k = std::string(_c_first_name9567_k_n.data());
            int32_t _d_date9533_k = tbl_Aggregate_TD_5729_output.getInt32(i, 2);
            SW_JOIN_LEFTANTI_TD_4648_key_rightMajor keyA{_c_last_name9568_k, _c_first_name9567_k, _d_date9533_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9568_n = tbl_Aggregate_TD_5729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9568 = std::string(_c_last_name9568_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name9567_n = tbl_Aggregate_TD_5729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name9567 = std::string(_c_first_name9567_n.data());
            int32_t _d_date9533 = tbl_Aggregate_TD_5729_output.getInt32(i, 2);
            SW_JOIN_LEFTANTI_TD_4648_payload_rightMajor payloadA{_c_last_name9568, _c_first_name9567, _d_date9533};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_5601_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_5601_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_5601_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_4648_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it == ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_5601_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_5601_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_5601_output.getInt32(i, 2);
                tbl_JOIN_LEFTANTI_TD_4648_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTANTI_TD_4648_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTANTI_TD_4648_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTANTI_TD_4648_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_4648_output #Row: " << tbl_JOIN_LEFTANTI_TD_4648_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3399_key {
    std::string _c_last_name9614;
    std::string _c_first_name9613;
    int32_t _d_date9579;
    bool operator==(const SW_Aggregate_TD_3399_key& other) const { return (_c_last_name9614 == other._c_last_name9614) && (_c_first_name9613 == other._c_first_name9613) && (_d_date9579 == other._d_date9579); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3399_key> {
    std::size_t operator() (const SW_Aggregate_TD_3399_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9614)) + (hash<string>()(k._c_first_name9613)) + (hash<int32_t>()(k._d_date9579));
    }
};
}
struct SW_Aggregate_TD_3399_payload {
};
void SW_Aggregate_TD_3399(Table &tbl_JOIN_INNER_TD_4663_output, Table &tbl_Aggregate_TD_3399_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9614, c_first_name#9613, d_date#9579)
    // Input: ListBuffer(c_last_name#9614, c_first_name#9613, d_date#9579)
    // Output: ListBuffer(c_last_name#9614, c_first_name#9613, d_date#9579)
    std::unordered_map<SW_Aggregate_TD_3399_key, SW_Aggregate_TD_3399_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4663_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9614 = tbl_JOIN_INNER_TD_4663_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name9613 = tbl_JOIN_INNER_TD_4663_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date9579 = tbl_JOIN_INNER_TD_4663_output.getInt32(i, 2);
        SW_Aggregate_TD_3399_key k{std::string(_c_last_name9614.data()), std::string(_c_first_name9613.data()), _d_date9579};
        SW_Aggregate_TD_3399_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9614{};
        memcpy(_c_last_name9614.data(), ((it.first)._c_last_name9614).data(), ((it.first)._c_last_name9614).length());
        tbl_Aggregate_TD_3399_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9614);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name9613{};
        memcpy(_c_first_name9613.data(), ((it.first)._c_first_name9613).data(), ((it.first)._c_first_name9613).length());
        tbl_Aggregate_TD_3399_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name9613);
        tbl_Aggregate_TD_3399_output.setInt32(r, 2, (it.first)._d_date9579);
        ++r;
    }
    tbl_Aggregate_TD_3399_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3399_output #Row: " << tbl_Aggregate_TD_3399_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_38_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_38_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_38_key> {
    std::size_t operator() (const SW_Aggregate_TD_38_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_38_payload {
};
void SW_Aggregate_TD_38(Table &tbl_JOIN_LEFTANTI_TD_4648_output, Table &tbl_Aggregate_TD_38_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_38_key, SW_Aggregate_TD_38_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTANTI_TD_4648_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTANTI_TD_4648_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTANTI_TD_4648_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTANTI_TD_4648_output.getInt32(i, 2);
        SW_Aggregate_TD_38_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_38_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), ((it.first)._c_last_name9).data(), ((it.first)._c_last_name9).length());
        tbl_Aggregate_TD_38_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_38_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_38_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_38_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_38_output #Row: " << tbl_Aggregate_TD_38_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_2345_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTANTI_TD_2345_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_2345_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_2345_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_2345_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTANTI_TD_2345_key_rightMajor {
    std::string _c_last_name9614;
    std::string _c_first_name9613;
    int32_t _d_date9579;
    bool operator==(const SW_JOIN_LEFTANTI_TD_2345_key_rightMajor& other) const {
        return ((_c_last_name9614 == other._c_last_name9614) && (_c_first_name9613 == other._c_first_name9613) && (_d_date9579 == other._d_date9579));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_2345_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_2345_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9614)) + (hash<string>()(k._c_first_name9613)) + (hash<int32_t>()(k._d_date9579));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_2345_payload_rightMajor {
    std::string _c_last_name9614;
    std::string _c_first_name9613;
    int32_t _d_date9579;
};
void SW_JOIN_LEFTANTI_TD_2345(Table &tbl_Aggregate_TD_38_output, Table &tbl_Aggregate_TD_3399_output, Table &tbl_JOIN_LEFTANTI_TD_2345_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#9614) AND (c_first_name#8 <=> c_first_name#9613)) AND (d_date#122 <=> d_date#9579)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#9614, c_first_name#9613, d_date#9579)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_38_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3399_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_2345_key_rightMajor, SW_JOIN_LEFTANTI_TD_2345_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3399_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_38_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9614_k_n = tbl_Aggregate_TD_3399_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9614_k = std::string(_c_last_name9614_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name9613_k_n = tbl_Aggregate_TD_3399_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name9613_k = std::string(_c_first_name9613_k_n.data());
            int32_t _d_date9579_k = tbl_Aggregate_TD_3399_output.getInt32(i, 2);
            SW_JOIN_LEFTANTI_TD_2345_key_rightMajor keyA{_c_last_name9614_k, _c_first_name9613_k, _d_date9579_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9614_n = tbl_Aggregate_TD_3399_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9614 = std::string(_c_last_name9614_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name9613_n = tbl_Aggregate_TD_3399_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name9613 = std::string(_c_first_name9613_n.data());
            int32_t _d_date9579 = tbl_Aggregate_TD_3399_output.getInt32(i, 2);
            SW_JOIN_LEFTANTI_TD_2345_payload_rightMajor payloadA{_c_last_name9614, _c_first_name9613, _d_date9579};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_38_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_38_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_38_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_2345_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it == ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_38_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_38_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_38_output.getInt32(i, 2);
                tbl_JOIN_LEFTANTI_TD_2345_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTANTI_TD_2345_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTANTI_TD_2345_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTANTI_TD_2345_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_2345_output #Row: " << tbl_JOIN_LEFTANTI_TD_2345_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_15_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_15_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_15_key> {
    std::size_t operator() (const SW_Aggregate_TD_15_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_15_payload {
};
void SW_Aggregate_TD_15(Table &tbl_JOIN_LEFTANTI_TD_2345_output, Table &NULL) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer()
    std::unordered_map<SW_Aggregate_TD_15_key, SW_Aggregate_TD_15_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTANTI_TD_2345_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTANTI_TD_2345_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTANTI_TD_2345_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTANTI_TD_2345_output.getInt32(i, 2);
        SW_Aggregate_TD_15_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_15_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_last_name9 not required in the output table
        // _c_first_name8 not required in the output table
        // _d_date122 not required in the output table
        ++r;
    }
    NULL.setNumRow(r);
    std::cout << "NULL #Row: " << NULL.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0563(Table &NULL, Table &tbl_Aggregate_TD_0563_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9624L)
    // Input: ListBuffer()
    // Output: ListBuffer(count(1)#9624L)
    int64_t count_0 = 0;
    int nrow1 = NULL.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _count19624L_count_0 = 1;
        count_0 += _count19624L_count_0;
    }
    int r = 0;
    int64_t _count19624L = count_0;
    tbl_Aggregate_TD_0563_output.setInt64(r++, 0, _count19624L);
    tbl_Aggregate_TD_0563_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0563_output #Row: " << tbl_Aggregate_TD_0563_output.getNumRow() << std::endl;
}

