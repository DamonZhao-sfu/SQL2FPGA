#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8826(Table &tbl_SerializeFromObject_TD_9937_input, Table &tbl_Filter_TD_8826_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3547) AND ((d_month_seq#3547 >= 1200) AND (d_month_seq#3547 <= 1211))) AND isnotnull(d_date_sk#3544)))
    // Input: ListBuffer(d_date_sk#3544, d_date#3546, d_month_seq#3547)
    // Output: ListBuffer(d_date_sk#3544, d_date#3546)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9937_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3547 = tbl_SerializeFromObject_TD_9937_input.getInt32(i, 2);
        int32_t _d_date_sk3544 = tbl_SerializeFromObject_TD_9937_input.getInt32(i, 0);
        if (((1) && ((_d_month_seq3547 >= 1200) && (_d_month_seq3547 <= 1211))) && (1)) {
            int32_t _d_date_sk3544_t = tbl_SerializeFromObject_TD_9937_input.getInt32(i, 0);
            tbl_Filter_TD_8826_output.setInt32(r, 0, _d_date_sk3544_t);
            int32_t _d_date3546_t = tbl_SerializeFromObject_TD_9937_input.getInt32(i, 1);
            tbl_Filter_TD_8826_output.setInt32(r, 1, _d_date3546_t);
            r++;
        }
    }
    tbl_Filter_TD_8826_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8826_output #Row: " << tbl_Filter_TD_8826_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8435(Table &tbl_SerializeFromObject_TD_9318_input, Table &tbl_Filter_TD_8435_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_bill_customer_sk#1107)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9318_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9318_input.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_9318_input.getInt32(i, 1);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9318_input.getInt32(i, 0);
            tbl_Filter_TD_8435_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_9318_input.getInt32(i, 1);
            tbl_Filter_TD_8435_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            r++;
        }
    }
    tbl_Filter_TD_8435_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8435_output #Row: " << tbl_Filter_TD_8435_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8975(Table &tbl_SerializeFromObject_TD_9520_input, Table &tbl_Filter_TD_8975_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9520_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_9520_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_9520_input.getInt32(i, 0);
        if (((1) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_9520_input.getInt32(i, 0);
            tbl_Filter_TD_8975_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_9520_input.getInt32(i, 1);
            tbl_Filter_TD_8975_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_8975_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8975_output #Row: " << tbl_Filter_TD_8975_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8301(Table &tbl_SerializeFromObject_TD_9366_input, Table &tbl_Filter_TD_8301_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_customer_sk#1209)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9366_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_9366_input.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_9366_input.getInt32(i, 1);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_9366_input.getInt32(i, 0);
            tbl_Filter_TD_8301_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_9366_input.getInt32(i, 1);
            tbl_Filter_TD_8301_output.setInt32(r, 1, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_8301_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8301_output #Row: " << tbl_Filter_TD_8301_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7573(Table &tbl_SerializeFromObject_TD_855_input, Table &tbl_Filter_TD_7573_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3572))
    // Input: ListBuffer(c_customer_sk#3572, c_first_name#3580, c_last_name#3581)
    // Output: ListBuffer(c_customer_sk#3572, c_first_name#3580, c_last_name#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_855_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3572 = tbl_SerializeFromObject_TD_855_input.getInt32(i, 0);
        if (1) {
            int32_t _c_customer_sk3572_t = tbl_SerializeFromObject_TD_855_input.getInt32(i, 0);
            tbl_Filter_TD_7573_output.setInt32(r, 0, _c_customer_sk3572_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_t = tbl_SerializeFromObject_TD_855_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7573_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_t = tbl_SerializeFromObject_TD_855_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7573_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3581_t);
            r++;
        }
    }
    tbl_Filter_TD_7573_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7573_output #Row: " << tbl_Filter_TD_7573_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7602_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_7602_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7602_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7602_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_7602_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
};
struct SW_JOIN_INNER_TD_7602_key_rightMajor {
    int32_t _d_date_sk3544;
    bool operator==(const SW_JOIN_INNER_TD_7602_key_rightMajor& other) const {
        return ((_d_date_sk3544 == other._d_date_sk3544));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7602_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7602_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3544));
    }
};
}
struct SW_JOIN_INNER_TD_7602_payload_rightMajor {
    int32_t _d_date_sk3544;
    int32_t _d_date3546;
};
void SW_JOIN_INNER_TD_7602(Table &tbl_Filter_TD_8435_output, Table &tbl_Filter_TD_8826_output, Table &tbl_JOIN_INNER_TD_7602_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3544))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    // Right Table: ListBuffer(d_date_sk#3544, d_date#3546)
    // Output Table: ListBuffer(cs_bill_customer_sk#1107, d_date#3546)
    int left_nrow = tbl_Filter_TD_8435_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8826_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7602_key_leftMajor, SW_JOIN_INNER_TD_7602_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8435_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8435_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7602_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8435_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8435_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7602_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8826_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3544_k = tbl_Filter_TD_8826_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7602_key_leftMajor{_d_date_sk3544_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _d_date_sk3544 = tbl_Filter_TD_8826_output.getInt32(i, 0);
                int32_t _d_date3546 = tbl_Filter_TD_8826_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7602_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_7602_output.setInt32(r, 1, _d_date3546);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7602_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7602_key_rightMajor, SW_JOIN_INNER_TD_7602_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8826_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3544_k = tbl_Filter_TD_8826_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7602_key_rightMajor keyA{_d_date_sk3544_k};
            int32_t _d_date_sk3544 = tbl_Filter_TD_8826_output.getInt32(i, 0);
            int32_t _d_date3546 = tbl_Filter_TD_8826_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7602_payload_rightMajor payloadA{_d_date_sk3544, _d_date3546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8435_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8435_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7602_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3544 = (it->second)._d_date_sk3544;
                int32_t _d_date3546 = (it->second)._d_date3546;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8435_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8435_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7602_output.setInt32(r, 1, _d_date3546);
                tbl_JOIN_INNER_TD_7602_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7602_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7602_output #Row: " << tbl_JOIN_INNER_TD_7602_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7287(Table &tbl_SerializeFromObject_TD_8707_input, Table &tbl_Filter_TD_7287_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8707_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_8707_input.getInt32(i, 0);
        if (1) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_8707_input.getInt32(i, 0);
            tbl_Filter_TD_7287_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_8707_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7287_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_8707_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7287_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_7287_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7287_output #Row: " << tbl_Filter_TD_7287_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7498_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_7498_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7498_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7498_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_7498_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
};
struct SW_JOIN_INNER_TD_7498_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7498_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7498_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7498_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7498_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
};
void SW_JOIN_INNER_TD_7498(Table &tbl_Filter_TD_8301_output, Table &tbl_Filter_TD_8975_output, Table &tbl_JOIN_INNER_TD_7498_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122)
    // Output Table: ListBuffer(ss_customer_sk#1209, d_date#122)
    int left_nrow = tbl_Filter_TD_8301_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8975_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7498_key_leftMajor, SW_JOIN_INNER_TD_7498_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8301_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_8301_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7498_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8301_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_8301_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7498_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8975_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8975_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7498_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date_sk120 = tbl_Filter_TD_8975_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_8975_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7498_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7498_output.setInt32(r, 1, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7498_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7498_key_rightMajor, SW_JOIN_INNER_TD_7498_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8975_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8975_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7498_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_8975_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_8975_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7498_payload_rightMajor payloadA{_d_date_sk120, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8301_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_8301_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7498_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8301_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_8301_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7498_output.setInt32(r, 1, _d_date122);
                tbl_JOIN_INNER_TD_7498_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7498_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7498_output #Row: " << tbl_JOIN_INNER_TD_7498_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6425(Table &tbl_SerializeFromObject_TD_7940_input, Table &tbl_Filter_TD_6425_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3593) AND ((d_month_seq#3593 >= 1200) AND (d_month_seq#3593 <= 1211))) AND isnotnull(d_date_sk#3590)))
    // Input: ListBuffer(d_date_sk#3590, d_date#3592, d_month_seq#3593)
    // Output: ListBuffer(d_date_sk#3590, d_date#3592)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7940_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3593 = tbl_SerializeFromObject_TD_7940_input.getInt32(i, 2);
        int32_t _d_date_sk3590 = tbl_SerializeFromObject_TD_7940_input.getInt32(i, 0);
        if (((1) && ((_d_month_seq3593 >= 1200) && (_d_month_seq3593 <= 1211))) && (1)) {
            int32_t _d_date_sk3590_t = tbl_SerializeFromObject_TD_7940_input.getInt32(i, 0);
            tbl_Filter_TD_6425_output.setInt32(r, 0, _d_date_sk3590_t);
            int32_t _d_date3592_t = tbl_SerializeFromObject_TD_7940_input.getInt32(i, 1);
            tbl_Filter_TD_6425_output.setInt32(r, 1, _d_date3592_t);
            r++;
        }
    }
    tbl_Filter_TD_6425_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6425_output #Row: " << tbl_Filter_TD_6425_output.getNumRow() << std::endl;
}

void SW_Filter_TD_654(Table &tbl_SerializeFromObject_TD_7188_input, Table &tbl_Filter_TD_654_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_bill_customer_sk#733)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7188_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_7188_input.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_7188_input.getInt32(i, 1);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_7188_input.getInt32(i, 0);
            tbl_Filter_TD_654_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_7188_input.getInt32(i, 1);
            tbl_Filter_TD_654_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            r++;
        }
    }
    tbl_Filter_TD_654_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_654_output #Row: " << tbl_Filter_TD_654_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6291_key_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_JOIN_INNER_TD_6291_key_leftMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6291_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6291_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_JOIN_INNER_TD_6291_payload_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    int32_t _d_date3546;
};
struct SW_JOIN_INNER_TD_6291_key_rightMajor {
    int32_t _c_customer_sk3572;
    bool operator==(const SW_JOIN_INNER_TD_6291_key_rightMajor& other) const {
        return ((_c_customer_sk3572 == other._c_customer_sk3572));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6291_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6291_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3572));
    }
};
}
struct SW_JOIN_INNER_TD_6291_payload_rightMajor {
    int32_t _c_customer_sk3572;
    std::string _c_first_name3580;
    std::string _c_last_name3581;
};
void SW_JOIN_INNER_TD_6291(Table &tbl_JOIN_INNER_TD_7602_output, Table &tbl_Filter_TD_7573_output, Table &tbl_JOIN_INNER_TD_6291_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_customer_sk#1107 = c_customer_sk#3572))
    // Left Table: ListBuffer(cs_bill_customer_sk#1107, d_date#3546)
    // Right Table: ListBuffer(c_customer_sk#3572, c_first_name#3580, c_last_name#3581)
    // Output Table: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    int left_nrow = tbl_JOIN_INNER_TD_7602_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7573_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6291_key_leftMajor, SW_JOIN_INNER_TD_6291_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7602_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7602_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6291_key_leftMajor keyA{_cs_bill_customer_sk1107_k};
            int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7602_output.getInt32(i, 0);
            int32_t _d_date3546 = tbl_JOIN_INNER_TD_7602_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6291_payload_leftMajor payloadA{_cs_bill_customer_sk1107, _d_date3546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7573_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3572_k = tbl_Filter_TD_7573_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6291_key_leftMajor{_c_customer_sk3572_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _d_date3546 = (it->second)._d_date3546;
                int32_t _c_customer_sk3572 = tbl_Filter_TD_7573_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n = tbl_Filter_TD_7573_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name3580 = std::string(_c_first_name3580_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n = tbl_Filter_TD_7573_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name3581 = std::string(_c_last_name3581_n.data());
                tbl_JOIN_INNER_TD_6291_output.setInt32(r, 2, _d_date3546);
                tbl_JOIN_INNER_TD_6291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580_n);
                tbl_JOIN_INNER_TD_6291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3581_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6291_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6291_key_rightMajor, SW_JOIN_INNER_TD_6291_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7573_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3572_k = tbl_Filter_TD_7573_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6291_key_rightMajor keyA{_c_customer_sk3572_k};
            int32_t _c_customer_sk3572 = tbl_Filter_TD_7573_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n = tbl_Filter_TD_7573_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3580 = std::string(_c_first_name3580_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n = tbl_Filter_TD_7573_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name3581 = std::string(_c_last_name3581_n.data());
            SW_JOIN_INNER_TD_6291_payload_rightMajor payloadA{_c_customer_sk3572, _c_first_name3580, _c_last_name3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7602_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7602_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6291_key_rightMajor{_cs_bill_customer_sk1107_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk3572 = (it->second)._c_customer_sk3572;
                std::string _c_first_name3580 = (it->second)._c_first_name3580;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n{};
                memcpy(_c_first_name3580_n.data(), (_c_first_name3580).data(), (_c_first_name3580).length());
                std::string _c_last_name3581 = (it->second)._c_last_name3581;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n{};
                memcpy(_c_last_name3581_n.data(), (_c_last_name3581).data(), (_c_last_name3581).length());
                int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7602_output.getInt32(i, 0);
                int32_t _d_date3546 = tbl_JOIN_INNER_TD_7602_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580_n);
                tbl_JOIN_INNER_TD_6291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3581_n);
                tbl_JOIN_INNER_TD_6291_output.setInt32(r, 2, _d_date3546);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6291_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6291_output #Row: " << tbl_JOIN_INNER_TD_6291_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6116_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_6116_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6116_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6116_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_6116_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _d_date122;
};
struct SW_JOIN_INNER_TD_6116_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_6116_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6116_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6116_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_6116_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_6116(Table &tbl_JOIN_INNER_TD_7498_output, Table &tbl_Filter_TD_7287_output, Table &tbl_JOIN_INNER_TD_6116_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_customer_sk#1209, d_date#122)
    // Right Table: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_JOIN_INNER_TD_7498_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7287_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6116_key_leftMajor, SW_JOIN_INNER_TD_6116_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7498_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7498_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6116_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7498_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_JOIN_INNER_TD_7498_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6116_payload_leftMajor payloadA{_ss_customer_sk1209, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7287_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7287_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6116_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _c_customer_sk0 = tbl_Filter_TD_7287_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7287_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7287_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_6116_output.setInt32(r, 2, _d_date122);
                tbl_JOIN_INNER_TD_6116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6116_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6116_key_rightMajor, SW_JOIN_INNER_TD_6116_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7287_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7287_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6116_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_7287_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7287_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7287_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_6116_payload_rightMajor payloadA{_c_customer_sk0, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7498_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7498_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6116_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7498_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_JOIN_INNER_TD_7498_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_6116_output.setInt32(r, 2, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6116_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6116_output #Row: " << tbl_JOIN_INNER_TD_6116_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5591(Table &tbl_SerializeFromObject_TD_6985_input, Table &tbl_Filter_TD_5591_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3618))
    // Input: ListBuffer(c_customer_sk#3618, c_first_name#3626, c_last_name#3627)
    // Output: ListBuffer(c_customer_sk#3618, c_first_name#3626, c_last_name#3627)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6985_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3618 = tbl_SerializeFromObject_TD_6985_input.getInt32(i, 0);
        if (1) {
            int32_t _c_customer_sk3618_t = tbl_SerializeFromObject_TD_6985_input.getInt32(i, 0);
            tbl_Filter_TD_5591_output.setInt32(r, 0, _c_customer_sk3618_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_t = tbl_SerializeFromObject_TD_6985_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5591_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_t = tbl_SerializeFromObject_TD_6985_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5591_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3627_t);
            r++;
        }
    }
    tbl_Filter_TD_5591_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5591_output #Row: " << tbl_Filter_TD_5591_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5358_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_5358_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5358_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5358_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_5358_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
};
struct SW_JOIN_INNER_TD_5358_key_rightMajor {
    int32_t _d_date_sk3590;
    bool operator==(const SW_JOIN_INNER_TD_5358_key_rightMajor& other) const {
        return ((_d_date_sk3590 == other._d_date_sk3590));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5358_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5358_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3590));
    }
};
}
struct SW_JOIN_INNER_TD_5358_payload_rightMajor {
    int32_t _d_date_sk3590;
    int32_t _d_date3592;
};
void SW_JOIN_INNER_TD_5358(Table &tbl_Filter_TD_654_output, Table &tbl_Filter_TD_6425_output, Table &tbl_JOIN_INNER_TD_5358_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3590))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Right Table: ListBuffer(d_date_sk#3590, d_date#3592)
    // Output Table: ListBuffer(ws_bill_customer_sk#733, d_date#3592)
    int left_nrow = tbl_Filter_TD_654_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6425_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5358_key_leftMajor, SW_JOIN_INNER_TD_5358_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_654_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_654_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5358_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_654_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_654_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5358_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_customer_sk733};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6425_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3590_k = tbl_Filter_TD_6425_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5358_key_leftMajor{_d_date_sk3590_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date_sk3590 = tbl_Filter_TD_6425_output.getInt32(i, 0);
                int32_t _d_date3592 = tbl_Filter_TD_6425_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5358_output.setInt32(r, 0, _ws_bill_customer_sk733);
                tbl_JOIN_INNER_TD_5358_output.setInt32(r, 1, _d_date3592);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5358_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5358_key_rightMajor, SW_JOIN_INNER_TD_5358_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6425_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3590_k = tbl_Filter_TD_6425_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5358_key_rightMajor keyA{_d_date_sk3590_k};
            int32_t _d_date_sk3590 = tbl_Filter_TD_6425_output.getInt32(i, 0);
            int32_t _d_date3592 = tbl_Filter_TD_6425_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5358_payload_rightMajor payloadA{_d_date_sk3590, _d_date3592};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_654_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_654_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5358_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3590 = (it->second)._d_date_sk3590;
                int32_t _d_date3592 = (it->second)._d_date3592;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_654_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_654_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5358_output.setInt32(r, 1, _d_date3592);
                tbl_JOIN_INNER_TD_5358_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5358_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5358_output #Row: " << tbl_JOIN_INNER_TD_5358_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_545_key {
    std::string _c_last_name3581;
    std::string _c_first_name3580;
    int32_t _d_date3546;
    bool operator==(const SW_Aggregate_TD_545_key& other) const { return (_c_last_name3581 == other._c_last_name3581) && (_c_first_name3580 == other._c_first_name3580) && (_d_date3546 == other._d_date3546); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_545_key> {
    std::size_t operator() (const SW_Aggregate_TD_545_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3581)) + (hash<string>()(k._c_first_name3580)) + (hash<int32_t>()(k._d_date3546));
    }
};
}
struct SW_Aggregate_TD_545_payload {
};
void SW_Aggregate_TD_545(Table &tbl_JOIN_INNER_TD_6291_output, Table &tbl_Aggregate_TD_545_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    // Input: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    // Output: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    std::unordered_map<SW_Aggregate_TD_545_key, SW_Aggregate_TD_545_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6291_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581 = tbl_JOIN_INNER_TD_6291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580 = tbl_JOIN_INNER_TD_6291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date3546 = tbl_JOIN_INNER_TD_6291_output.getInt32(i, 2);
        SW_Aggregate_TD_545_key k{std::string(_c_last_name3581.data()), std::string(_c_first_name3580.data()), _d_date3546};
        SW_Aggregate_TD_545_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581{};
        memcpy(_c_last_name3581.data(), ((it.first)._c_last_name3581).data(), ((it.first)._c_last_name3581).length());
        tbl_Aggregate_TD_545_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3581);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580{};
        memcpy(_c_first_name3580.data(), ((it.first)._c_first_name3580).data(), ((it.first)._c_first_name3580).length());
        tbl_Aggregate_TD_545_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580);
        tbl_Aggregate_TD_545_output.setInt32(r, 2, (it.first)._d_date3546);
        ++r;
    }
    tbl_Aggregate_TD_545_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_545_output #Row: " << tbl_Aggregate_TD_545_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5730_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_5730_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5730_key> {
    std::size_t operator() (const SW_Aggregate_TD_5730_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_5730_payload {
};
void SW_Aggregate_TD_5730(Table &tbl_JOIN_INNER_TD_6116_output, Table &tbl_Aggregate_TD_5730_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_5730_key, SW_Aggregate_TD_5730_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6116_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_6116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_6116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_INNER_TD_6116_output.getInt32(i, 2);
        SW_Aggregate_TD_5730_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_5730_payload p{};
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
        tbl_Aggregate_TD_5730_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_5730_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_5730_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_5730_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5730_output #Row: " << tbl_Aggregate_TD_5730_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4672_key_leftMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_INNER_TD_4672_key_leftMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4672_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4672_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_INNER_TD_4672_payload_leftMajor {
    int32_t _ws_bill_customer_sk733;
    int32_t _d_date3592;
};
struct SW_JOIN_INNER_TD_4672_key_rightMajor {
    int32_t _c_customer_sk3618;
    bool operator==(const SW_JOIN_INNER_TD_4672_key_rightMajor& other) const {
        return ((_c_customer_sk3618 == other._c_customer_sk3618));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4672_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4672_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3618));
    }
};
}
struct SW_JOIN_INNER_TD_4672_payload_rightMajor {
    int32_t _c_customer_sk3618;
    std::string _c_first_name3626;
    std::string _c_last_name3627;
};
void SW_JOIN_INNER_TD_4672(Table &tbl_JOIN_INNER_TD_5358_output, Table &tbl_Filter_TD_5591_output, Table &tbl_JOIN_INNER_TD_4672_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_customer_sk#733 = c_customer_sk#3618))
    // Left Table: ListBuffer(ws_bill_customer_sk#733, d_date#3592)
    // Right Table: ListBuffer(c_customer_sk#3618, c_first_name#3626, c_last_name#3627)
    // Output Table: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    int left_nrow = tbl_JOIN_INNER_TD_5358_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5591_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4672_key_leftMajor, SW_JOIN_INNER_TD_4672_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5358_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5358_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4672_key_leftMajor keyA{_ws_bill_customer_sk733_k};
            int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5358_output.getInt32(i, 0);
            int32_t _d_date3592 = tbl_JOIN_INNER_TD_5358_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4672_payload_leftMajor payloadA{_ws_bill_customer_sk733, _d_date3592};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5591_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3618_k = tbl_Filter_TD_5591_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4672_key_leftMajor{_c_customer_sk3618_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date3592 = (it->second)._d_date3592;
                int32_t _c_customer_sk3618 = tbl_Filter_TD_5591_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n = tbl_Filter_TD_5591_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name3626 = std::string(_c_first_name3626_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n = tbl_Filter_TD_5591_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name3627 = std::string(_c_last_name3627_n.data());
                tbl_JOIN_INNER_TD_4672_output.setInt32(r, 2, _d_date3592);
                tbl_JOIN_INNER_TD_4672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626_n);
                tbl_JOIN_INNER_TD_4672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3627_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4672_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4672_key_rightMajor, SW_JOIN_INNER_TD_4672_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5591_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3618_k = tbl_Filter_TD_5591_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4672_key_rightMajor keyA{_c_customer_sk3618_k};
            int32_t _c_customer_sk3618 = tbl_Filter_TD_5591_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n = tbl_Filter_TD_5591_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3626 = std::string(_c_first_name3626_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n = tbl_Filter_TD_5591_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name3627 = std::string(_c_last_name3627_n.data());
            SW_JOIN_INNER_TD_4672_payload_rightMajor payloadA{_c_customer_sk3618, _c_first_name3626, _c_last_name3627};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5358_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5358_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4672_key_rightMajor{_ws_bill_customer_sk733_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk3618 = (it->second)._c_customer_sk3618;
                std::string _c_first_name3626 = (it->second)._c_first_name3626;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n{};
                memcpy(_c_first_name3626_n.data(), (_c_first_name3626).data(), (_c_first_name3626).length());
                std::string _c_last_name3627 = (it->second)._c_last_name3627;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n{};
                memcpy(_c_last_name3627_n.data(), (_c_last_name3627).data(), (_c_last_name3627).length());
                int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5358_output.getInt32(i, 0);
                int32_t _d_date3592 = tbl_JOIN_INNER_TD_5358_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626_n);
                tbl_JOIN_INNER_TD_4672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3627_n);
                tbl_JOIN_INNER_TD_4672_output.setInt32(r, 2, _d_date3592);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4672_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4672_output #Row: " << tbl_JOIN_INNER_TD_4672_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_4180_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_4180_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_4180_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_4180_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_4180_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTSEMI_TD_4180_key_rightMajor {
    std::string _c_last_name3581;
    std::string _c_first_name3580;
    int32_t _d_date3546;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_4180_key_rightMajor& other) const {
        return ((_c_last_name3581 == other._c_last_name3581) && (_c_first_name3580 == other._c_first_name3580) && (_d_date3546 == other._d_date3546));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_4180_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_4180_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3581)) + (hash<string>()(k._c_first_name3580)) + (hash<int32_t>()(k._d_date3546));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_4180_payload_rightMajor {
    std::string _c_last_name3581;
    std::string _c_first_name3580;
    int32_t _d_date3546;
};
void SW_JOIN_LEFTSEMI_TD_4180(Table &tbl_Aggregate_TD_5730_output, Table &tbl_Aggregate_TD_545_output, Table &tbl_JOIN_LEFTSEMI_TD_4180_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#3581) AND (c_first_name#8 <=> c_first_name#3580)) AND (d_date#122 <=> d_date#3546)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_5730_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_545_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_4180_key_rightMajor, SW_JOIN_LEFTSEMI_TD_4180_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_545_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_5730_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_k_n = tbl_Aggregate_TD_545_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3581_k = std::string(_c_last_name3581_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_k_n = tbl_Aggregate_TD_545_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3580_k = std::string(_c_first_name3580_k_n.data());
            int32_t _d_date3546_k = tbl_Aggregate_TD_545_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_4180_key_rightMajor keyA{_c_last_name3581_k, _c_first_name3580_k, _d_date3546_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n = tbl_Aggregate_TD_545_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3581 = std::string(_c_last_name3581_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n = tbl_Aggregate_TD_545_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3580 = std::string(_c_first_name3580_n.data());
            int32_t _d_date3546 = tbl_Aggregate_TD_545_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_4180_payload_rightMajor payloadA{_c_last_name3581, _c_first_name3580, _d_date3546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_5730_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_5730_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_5730_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_4180_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it != ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_5730_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_5730_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_5730_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_4180_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTSEMI_TD_4180_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTSEMI_TD_4180_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_4180_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_4180_output #Row: " << tbl_JOIN_LEFTSEMI_TD_4180_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3941_key {
    std::string _c_last_name3627;
    std::string _c_first_name3626;
    int32_t _d_date3592;
    bool operator==(const SW_Aggregate_TD_3941_key& other) const { return (_c_last_name3627 == other._c_last_name3627) && (_c_first_name3626 == other._c_first_name3626) && (_d_date3592 == other._d_date3592); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3941_key> {
    std::size_t operator() (const SW_Aggregate_TD_3941_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3627)) + (hash<string>()(k._c_first_name3626)) + (hash<int32_t>()(k._d_date3592));
    }
};
}
struct SW_Aggregate_TD_3941_payload {
};
void SW_Aggregate_TD_3941(Table &tbl_JOIN_INNER_TD_4672_output, Table &tbl_Aggregate_TD_3941_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    // Input: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    // Output: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    std::unordered_map<SW_Aggregate_TD_3941_key, SW_Aggregate_TD_3941_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4672_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627 = tbl_JOIN_INNER_TD_4672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626 = tbl_JOIN_INNER_TD_4672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date3592 = tbl_JOIN_INNER_TD_4672_output.getInt32(i, 2);
        SW_Aggregate_TD_3941_key k{std::string(_c_last_name3627.data()), std::string(_c_first_name3626.data()), _d_date3592};
        SW_Aggregate_TD_3941_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627{};
        memcpy(_c_last_name3627.data(), ((it.first)._c_last_name3627).data(), ((it.first)._c_last_name3627).length());
        tbl_Aggregate_TD_3941_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3627);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626{};
        memcpy(_c_first_name3626.data(), ((it.first)._c_first_name3626).data(), ((it.first)._c_first_name3626).length());
        tbl_Aggregate_TD_3941_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626);
        tbl_Aggregate_TD_3941_output.setInt32(r, 2, (it.first)._d_date3592);
        ++r;
    }
    tbl_Aggregate_TD_3941_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3941_output #Row: " << tbl_Aggregate_TD_3941_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3340_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_3340_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3340_key> {
    std::size_t operator() (const SW_Aggregate_TD_3340_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_3340_payload {
};
void SW_Aggregate_TD_3340(Table &tbl_JOIN_LEFTSEMI_TD_4180_output, Table &tbl_Aggregate_TD_3340_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_3340_key, SW_Aggregate_TD_3340_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_4180_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTSEMI_TD_4180_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTSEMI_TD_4180_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTSEMI_TD_4180_output.getInt32(i, 2);
        SW_Aggregate_TD_3340_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_3340_payload p{};
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
        tbl_Aggregate_TD_3340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_3340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_3340_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_3340_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3340_output #Row: " << tbl_Aggregate_TD_3340_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_2519_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2519_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2519_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2519_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2519_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTSEMI_TD_2519_key_rightMajor {
    std::string _c_last_name3627;
    std::string _c_first_name3626;
    int32_t _d_date3592;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2519_key_rightMajor& other) const {
        return ((_c_last_name3627 == other._c_last_name3627) && (_c_first_name3626 == other._c_first_name3626) && (_d_date3592 == other._d_date3592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2519_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2519_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3627)) + (hash<string>()(k._c_first_name3626)) + (hash<int32_t>()(k._d_date3592));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2519_payload_rightMajor {
    std::string _c_last_name3627;
    std::string _c_first_name3626;
    int32_t _d_date3592;
};
void SW_JOIN_LEFTSEMI_TD_2519(Table &tbl_Aggregate_TD_3340_output, Table &tbl_Aggregate_TD_3941_output, Table &tbl_JOIN_LEFTSEMI_TD_2519_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#3627) AND (c_first_name#8 <=> c_first_name#3626)) AND (d_date#122 <=> d_date#3592)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_3340_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3941_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_2519_key_rightMajor, SW_JOIN_LEFTSEMI_TD_2519_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3941_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_3340_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_k_n = tbl_Aggregate_TD_3941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3627_k = std::string(_c_last_name3627_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_k_n = tbl_Aggregate_TD_3941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3626_k = std::string(_c_first_name3626_k_n.data());
            int32_t _d_date3592_k = tbl_Aggregate_TD_3941_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2519_key_rightMajor keyA{_c_last_name3627_k, _c_first_name3626_k, _d_date3592_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n = tbl_Aggregate_TD_3941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3627 = std::string(_c_last_name3627_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n = tbl_Aggregate_TD_3941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3626 = std::string(_c_first_name3626_n.data());
            int32_t _d_date3592 = tbl_Aggregate_TD_3941_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2519_payload_rightMajor payloadA{_c_last_name3627, _c_first_name3626, _d_date3592};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_3340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_3340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_3340_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_2519_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it != ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_3340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_3340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_3340_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_2519_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTSEMI_TD_2519_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTSEMI_TD_2519_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_2519_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_2519_output #Row: " << tbl_JOIN_LEFTSEMI_TD_2519_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1660_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_1660_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1660_key> {
    std::size_t operator() (const SW_Aggregate_TD_1660_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_1660_payload {
};
void SW_Aggregate_TD_1660(Table &tbl_JOIN_LEFTSEMI_TD_2519_output, Table &NULL) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer()
    std::unordered_map<SW_Aggregate_TD_1660_key, SW_Aggregate_TD_1660_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_2519_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTSEMI_TD_2519_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTSEMI_TD_2519_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTSEMI_TD_2519_output.getInt32(i, 2);
        SW_Aggregate_TD_1660_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_1660_payload p{};
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

void SW_Aggregate_TD_0424(Table &NULL, Table &tbl_Aggregate_TD_0424_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#3637L)
    // Input: ListBuffer()
    // Output: ListBuffer(count(1)#3637L)
    int64_t count_0 = 0;
    int nrow1 = NULL.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _count13637L_count_0 = 1;
        count_0 += _count13637L_count_0;
    }
    int r = 0;
    int64_t _count13637L = count_0;
    tbl_Aggregate_TD_0424_output.setInt64(r++, 0, _count13637L);
    tbl_Aggregate_TD_0424_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0424_output #Row: " << tbl_Aggregate_TD_0424_output.getNumRow() << std::endl;
}

