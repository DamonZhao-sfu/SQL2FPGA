#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11550(Table &tbl_SerializeFromObject_TD_12566_input, Table &tbl_Filter_TD_11550_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2002)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12566_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12566_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12566_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2002)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12566_input.getInt32(i, 0);
            tbl_Filter_TD_11550_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11550_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11550_output #Row: " << tbl_Filter_TD_11550_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11506(Table &tbl_SerializeFromObject_TD_12199_input, Table &tbl_Filter_TD_11506_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_returned_date_sk#831) AND isnotnull(wr_returning_addr_sk#841)))
    // Input: ListBuffer(wr_returned_date_sk#831, wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    // Output: ListBuffer(wr_returned_date_sk#831, wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12199_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_returned_date_sk831 = tbl_SerializeFromObject_TD_12199_input.getInt32(i, 0);
        int32_t _wr_returning_addr_sk841 = tbl_SerializeFromObject_TD_12199_input.getInt32(i, 2);
        if ((_wr_returned_date_sk831!= 0) && (_wr_returning_addr_sk841!= 0)) {
            int32_t _wr_returned_date_sk831_t = tbl_SerializeFromObject_TD_12199_input.getInt32(i, 0);
            tbl_Filter_TD_11506_output.setInt32(r, 0, _wr_returned_date_sk831_t);
            int32_t _wr_returning_customer_sk838_t = tbl_SerializeFromObject_TD_12199_input.getInt32(i, 1);
            tbl_Filter_TD_11506_output.setInt32(r, 1, _wr_returning_customer_sk838_t);
            int32_t _wr_returning_addr_sk841_t = tbl_SerializeFromObject_TD_12199_input.getInt32(i, 2);
            tbl_Filter_TD_11506_output.setInt32(r, 2, _wr_returning_addr_sk841_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_12199_input.getInt32(i, 3);
            tbl_Filter_TD_11506_output.setInt32(r, 3, _wr_return_amt846_t);
            r++;
        }
    }
    tbl_Filter_TD_11506_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11506_output #Row: " << tbl_Filter_TD_11506_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10451(Table &tbl_SerializeFromObject_TD_11371_input, Table &tbl_Filter_TD_10451_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_state#62)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11371_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_11371_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_11371_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && （std::string(_isnotnullca_state62.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_11371_input.getInt32(i, 0);
            tbl_Filter_TD_10451_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_11371_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10451_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_10451_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10451_output #Row: " << tbl_Filter_TD_10451_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10275_key_leftMajor {
    int32_t _wr_returned_date_sk831;
    bool operator==(const SW_JOIN_INNER_TD_10275_key_leftMajor& other) const {
        return ((_wr_returned_date_sk831 == other._wr_returned_date_sk831));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10275_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10275_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returned_date_sk831));
    }
};
}
struct SW_JOIN_INNER_TD_10275_payload_leftMajor {
    int32_t _wr_returned_date_sk831;
    int32_t _wr_returning_customer_sk838;
    int32_t _wr_returning_addr_sk841;
    int32_t _wr_return_amt846;
};
struct SW_JOIN_INNER_TD_10275_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10275_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10275_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10275_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10275_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10275(Table &tbl_Filter_TD_11506_output, Table &tbl_Filter_TD_11550_output, Table &tbl_JOIN_INNER_TD_10275_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_returned_date_sk#831 = d_date_sk#120))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    int left_nrow = tbl_Filter_TD_11506_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11550_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10275_key_leftMajor, SW_JOIN_INNER_TD_10275_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11506_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_Filter_TD_11506_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10275_key_leftMajor keyA{_wr_returned_date_sk831_k};
            int32_t _wr_returned_date_sk831 = tbl_Filter_TD_11506_output.getInt32(i, 0);
            int32_t _wr_returning_customer_sk838 = tbl_Filter_TD_11506_output.getInt32(i, 1);
            int32_t _wr_returning_addr_sk841 = tbl_Filter_TD_11506_output.getInt32(i, 2);
            int32_t _wr_return_amt846 = tbl_Filter_TD_11506_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10275_payload_leftMajor payloadA{_wr_returned_date_sk831, _wr_returning_customer_sk838, _wr_returning_addr_sk841, _wr_return_amt846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11550_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11550_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10275_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returned_date_sk831 = (it->second)._wr_returned_date_sk831;
                int32_t _wr_returning_customer_sk838 = (it->second)._wr_returning_customer_sk838;
                int32_t _wr_returning_addr_sk841 = (it->second)._wr_returning_addr_sk841;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _d_date_sk120 = tbl_Filter_TD_11550_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10275_output.setInt32(r, 0, _wr_returning_customer_sk838);
                tbl_JOIN_INNER_TD_10275_output.setInt32(r, 1, _wr_returning_addr_sk841);
                tbl_JOIN_INNER_TD_10275_output.setInt32(r, 2, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10275_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10275_key_rightMajor, SW_JOIN_INNER_TD_10275_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11550_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11550_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10275_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11550_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10275_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11506_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_Filter_TD_11506_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10275_key_rightMajor{_wr_returned_date_sk831_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _wr_returned_date_sk831 = tbl_Filter_TD_11506_output.getInt32(i, 0);
                int32_t _wr_returning_customer_sk838 = tbl_Filter_TD_11506_output.getInt32(i, 1);
                int32_t _wr_returning_addr_sk841 = tbl_Filter_TD_11506_output.getInt32(i, 2);
                int32_t _wr_return_amt846 = tbl_Filter_TD_11506_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10275_output.setInt32(r, 0, _wr_returning_customer_sk838);
                tbl_JOIN_INNER_TD_10275_output.setInt32(r, 1, _wr_returning_addr_sk841);
                tbl_JOIN_INNER_TD_10275_output.setInt32(r, 2, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10275_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10275_output #Row: " << tbl_JOIN_INNER_TD_10275_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10298(Table &tbl_SerializeFromObject_TD_11641_input, Table &tbl_Filter_TD_10298_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2002)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11641_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_11641_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11641_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2002)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11641_input.getInt32(i, 0);
            tbl_Filter_TD_10298_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_10298_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10298_output #Row: " << tbl_Filter_TD_10298_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1058(Table &tbl_SerializeFromObject_TD_11774_input, Table &tbl_Filter_TD_1058_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(wr_returned_date_sk#831) AND isnotnull(wr_returning_addr_sk#841)) AND isnotnull(wr_returning_customer_sk#838)))
    // Input: ListBuffer(wr_returned_date_sk#831, wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    // Output: ListBuffer(wr_returned_date_sk#831, wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11774_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_returned_date_sk831 = tbl_SerializeFromObject_TD_11774_input.getInt32(i, 0);
        int32_t _wr_returning_addr_sk841 = tbl_SerializeFromObject_TD_11774_input.getInt32(i, 2);
        int32_t _wr_returning_customer_sk838 = tbl_SerializeFromObject_TD_11774_input.getInt32(i, 1);
        if (((_wr_returned_date_sk831!= 0) && (_wr_returning_addr_sk841!= 0)) && (_wr_returning_customer_sk838!= 0)) {
            int32_t _wr_returned_date_sk831_t = tbl_SerializeFromObject_TD_11774_input.getInt32(i, 0);
            tbl_Filter_TD_1058_output.setInt32(r, 0, _wr_returned_date_sk831_t);
            int32_t _wr_returning_customer_sk838_t = tbl_SerializeFromObject_TD_11774_input.getInt32(i, 1);
            tbl_Filter_TD_1058_output.setInt32(r, 1, _wr_returning_customer_sk838_t);
            int32_t _wr_returning_addr_sk841_t = tbl_SerializeFromObject_TD_11774_input.getInt32(i, 2);
            tbl_Filter_TD_1058_output.setInt32(r, 2, _wr_returning_addr_sk841_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_11774_input.getInt32(i, 3);
            tbl_Filter_TD_1058_output.setInt32(r, 3, _wr_return_amt846_t);
            r++;
        }
    }
    tbl_Filter_TD_1058_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1058_output #Row: " << tbl_Filter_TD_1058_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9840_key_leftMajor {
    int32_t _wr_returning_addr_sk841;
    bool operator==(const SW_JOIN_INNER_TD_9840_key_leftMajor& other) const {
        return ((_wr_returning_addr_sk841 == other._wr_returning_addr_sk841));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9840_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9840_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returning_addr_sk841));
    }
};
}
struct SW_JOIN_INNER_TD_9840_payload_leftMajor {
    int32_t _wr_returning_customer_sk838;
    int32_t _wr_returning_addr_sk841;
    int32_t _wr_return_amt846;
};
struct SW_JOIN_INNER_TD_9840_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_9840_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9840_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9840_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_9840_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_9840(Table &tbl_JOIN_INNER_TD_10275_output, Table &tbl_Filter_TD_10451_output, Table &tbl_JOIN_INNER_TD_9840_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_returning_addr_sk#841 = ca_address_sk#54))
    // Left Table: ListBuffer(wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    // Right Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output Table: ListBuffer(wr_returning_customer_sk#838, wr_return_amt#846, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_10275_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10451_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9840_key_leftMajor, SW_JOIN_INNER_TD_9840_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10275_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returning_addr_sk841_k = tbl_JOIN_INNER_TD_10275_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9840_key_leftMajor keyA{_wr_returning_addr_sk841_k};
            int32_t _wr_returning_customer_sk838 = tbl_JOIN_INNER_TD_10275_output.getInt32(i, 0);
            int32_t _wr_returning_addr_sk841 = tbl_JOIN_INNER_TD_10275_output.getInt32(i, 1);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10275_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9840_payload_leftMajor payloadA{_wr_returning_customer_sk838, _wr_returning_addr_sk841, _wr_return_amt846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10451_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_10451_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9840_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returning_customer_sk838 = (it->second)._wr_returning_customer_sk838;
                int32_t _wr_returning_addr_sk841 = (it->second)._wr_returning_addr_sk841;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _ca_address_sk54 = tbl_Filter_TD_10451_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_10451_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_9840_output.setInt32(r, 0, _wr_returning_customer_sk838);
                tbl_JOIN_INNER_TD_9840_output.setInt32(r, 1, _wr_return_amt846);
                tbl_JOIN_INNER_TD_9840_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9840_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9840_key_rightMajor, SW_JOIN_INNER_TD_9840_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10451_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_10451_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9840_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_10451_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_10451_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_9840_payload_rightMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10275_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returning_addr_sk841_k = tbl_JOIN_INNER_TD_10275_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9840_key_rightMajor{_wr_returning_addr_sk841_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _wr_returning_customer_sk838 = tbl_JOIN_INNER_TD_10275_output.getInt32(i, 0);
                int32_t _wr_returning_addr_sk841 = tbl_JOIN_INNER_TD_10275_output.getInt32(i, 1);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10275_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9840_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                tbl_JOIN_INNER_TD_9840_output.setInt32(r, 0, _wr_returning_customer_sk838);
                tbl_JOIN_INNER_TD_9840_output.setInt32(r, 1, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9840_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9840_output #Row: " << tbl_JOIN_INNER_TD_9840_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9301(Table &tbl_SerializeFromObject_TD_10573_input, Table &tbl_Filter_TD_9301_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_state#62)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10573_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_10573_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_10573_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && （std::string(_isnotnullca_state62.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_10573_input.getInt32(i, 0);
            tbl_Filter_TD_9301_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_10573_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9301_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_9301_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9301_output #Row: " << tbl_Filter_TD_9301_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9210_key_leftMajor {
    int32_t _wr_returned_date_sk831;
    bool operator==(const SW_JOIN_INNER_TD_9210_key_leftMajor& other) const {
        return ((_wr_returned_date_sk831 == other._wr_returned_date_sk831));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9210_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9210_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returned_date_sk831));
    }
};
}
struct SW_JOIN_INNER_TD_9210_payload_leftMajor {
    int32_t _wr_returned_date_sk831;
    int32_t _wr_returning_customer_sk838;
    int32_t _wr_returning_addr_sk841;
    int32_t _wr_return_amt846;
};
struct SW_JOIN_INNER_TD_9210_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_9210_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9210_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9210_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_9210_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_9210(Table &tbl_Filter_TD_1058_output, Table &tbl_Filter_TD_10298_output, Table &tbl_JOIN_INNER_TD_9210_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_returned_date_sk#831 = d_date_sk#120))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    int left_nrow = tbl_Filter_TD_1058_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10298_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9210_key_leftMajor, SW_JOIN_INNER_TD_9210_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1058_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_Filter_TD_1058_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9210_key_leftMajor keyA{_wr_returned_date_sk831_k};
            int32_t _wr_returned_date_sk831 = tbl_Filter_TD_1058_output.getInt32(i, 0);
            int32_t _wr_returning_customer_sk838 = tbl_Filter_TD_1058_output.getInt32(i, 1);
            int32_t _wr_returning_addr_sk841 = tbl_Filter_TD_1058_output.getInt32(i, 2);
            int32_t _wr_return_amt846 = tbl_Filter_TD_1058_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9210_payload_leftMajor payloadA{_wr_returned_date_sk831, _wr_returning_customer_sk838, _wr_returning_addr_sk841, _wr_return_amt846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10298_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10298_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9210_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returned_date_sk831 = (it->second)._wr_returned_date_sk831;
                int32_t _wr_returning_customer_sk838 = (it->second)._wr_returning_customer_sk838;
                int32_t _wr_returning_addr_sk841 = (it->second)._wr_returning_addr_sk841;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _d_date_sk120 = tbl_Filter_TD_10298_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9210_output.setInt32(r, 0, _wr_returning_customer_sk838);
                tbl_JOIN_INNER_TD_9210_output.setInt32(r, 1, _wr_returning_addr_sk841);
                tbl_JOIN_INNER_TD_9210_output.setInt32(r, 2, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9210_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9210_key_rightMajor, SW_JOIN_INNER_TD_9210_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10298_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10298_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9210_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_10298_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9210_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1058_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_Filter_TD_1058_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9210_key_rightMajor{_wr_returned_date_sk831_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _wr_returned_date_sk831 = tbl_Filter_TD_1058_output.getInt32(i, 0);
                int32_t _wr_returning_customer_sk838 = tbl_Filter_TD_1058_output.getInt32(i, 1);
                int32_t _wr_returning_addr_sk841 = tbl_Filter_TD_1058_output.getInt32(i, 2);
                int32_t _wr_return_amt846 = tbl_Filter_TD_1058_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9210_output.setInt32(r, 0, _wr_returning_customer_sk838);
                tbl_JOIN_INNER_TD_9210_output.setInt32(r, 1, _wr_returning_addr_sk841);
                tbl_JOIN_INNER_TD_9210_output.setInt32(r, 2, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9210_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9210_output #Row: " << tbl_JOIN_INNER_TD_9210_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8385_key {
    int32_t _wr_returning_customer_sk838;
    std::string _ca_state62;
    bool operator==(const SW_Aggregate_TD_8385_key& other) const { return (_wr_returning_customer_sk838 == other._wr_returning_customer_sk838) && (_ca_state62 == other._ca_state62); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8385_key> {
    std::size_t operator() (const SW_Aggregate_TD_8385_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returning_customer_sk838)) + (hash<string>()(k._ca_state62));
    }
};
}
struct SW_Aggregate_TD_8385_payload {
    std::string _ctr_state5057;
    int32_t _ctr_total_return5058_sum_0;
};
void SW_Aggregate_TD_8385(Table &tbl_JOIN_INNER_TD_9840_output, Table &tbl_Aggregate_TD_8385_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(wr_returning_customer_sk#838, ca_state#62, ca_state#62 AS ctr_state#5057, MakeDecimal(sum(UnscaledValue(wr_return_amt#846)),17,2) AS ctr_total_return#5058)
    // Input: ListBuffer(wr_returning_customer_sk#838, wr_return_amt#846, ca_state#62)
    // Output: ListBuffer(ctr_state#5057, ctr_total_return#5058)
    std::unordered_map<SW_Aggregate_TD_8385_key, SW_Aggregate_TD_8385_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9840_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_returning_customer_sk838 = tbl_JOIN_INNER_TD_9840_output.getInt32(i, 0);
        int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_9840_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_9840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_8385_key k{_wr_returning_customer_sk838, std::string(_ca_state62.data())};
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057 = _ca_state62;
        int64_t _ctr_total_return5058_sum_0 = _wr_return_amt846;
        SW_Aggregate_TD_8385_payload p{std::string(_ctr_state5057.data()), _ctr_total_return5058_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ctr_total_return5058_sum_0 + _ctr_total_return5058_sum_0;
            p._ctr_total_return5058_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _wr_returning_customer_sk838 not required in the output table
        // _ca_state62 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057_n{};
        memcpy(_ctr_state5057_n.data(), (it.second)._ctr_state5057.data(), (it.second)._ctr_state5057.length());
        tbl_Aggregate_TD_8385_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ctr_state5057_n);
        int32_t _ctr_total_return5058 = (it.second)._ctr_total_return5058_sum_0;
        tbl_Aggregate_TD_8385_output.setInt32(r, 1, _ctr_total_return5058);
        ++r;
    }
    tbl_Aggregate_TD_8385_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8385_output #Row: " << tbl_Aggregate_TD_8385_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8255_key_leftMajor {
    int32_t _wr_returning_addr_sk841;
    bool operator==(const SW_JOIN_INNER_TD_8255_key_leftMajor& other) const {
        return ((_wr_returning_addr_sk841 == other._wr_returning_addr_sk841));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8255_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8255_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returning_addr_sk841));
    }
};
}
struct SW_JOIN_INNER_TD_8255_payload_leftMajor {
    int32_t _wr_returning_customer_sk838;
    int32_t _wr_returning_addr_sk841;
    int32_t _wr_return_amt846;
};
struct SW_JOIN_INNER_TD_8255_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_8255_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8255_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8255_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_8255_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_8255(Table &tbl_JOIN_INNER_TD_9210_output, Table &tbl_Filter_TD_9301_output, Table &tbl_JOIN_INNER_TD_8255_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_returning_addr_sk#841 = ca_address_sk#54))
    // Left Table: ListBuffer(wr_returning_customer_sk#838, wr_returning_addr_sk#841, wr_return_amt#846)
    // Right Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output Table: ListBuffer(wr_returning_customer_sk#838, wr_return_amt#846, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_9210_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9301_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8255_key_leftMajor, SW_JOIN_INNER_TD_8255_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9210_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returning_addr_sk841_k = tbl_JOIN_INNER_TD_9210_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8255_key_leftMajor keyA{_wr_returning_addr_sk841_k};
            int32_t _wr_returning_customer_sk838 = tbl_JOIN_INNER_TD_9210_output.getInt32(i, 0);
            int32_t _wr_returning_addr_sk841 = tbl_JOIN_INNER_TD_9210_output.getInt32(i, 1);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_9210_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8255_payload_leftMajor payloadA{_wr_returning_customer_sk838, _wr_returning_addr_sk841, _wr_return_amt846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9301_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9301_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8255_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returning_customer_sk838 = (it->second)._wr_returning_customer_sk838;
                int32_t _wr_returning_addr_sk841 = (it->second)._wr_returning_addr_sk841;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _ca_address_sk54 = tbl_Filter_TD_9301_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_9301_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_8255_output.setInt32(r, 0, _wr_returning_customer_sk838);
                tbl_JOIN_INNER_TD_8255_output.setInt32(r, 1, _wr_return_amt846);
                tbl_JOIN_INNER_TD_8255_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8255_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8255_key_rightMajor, SW_JOIN_INNER_TD_8255_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9301_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9301_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8255_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_9301_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_9301_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_8255_payload_rightMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9210_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returning_addr_sk841_k = tbl_JOIN_INNER_TD_9210_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8255_key_rightMajor{_wr_returning_addr_sk841_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _wr_returning_customer_sk838 = tbl_JOIN_INNER_TD_9210_output.getInt32(i, 0);
                int32_t _wr_returning_addr_sk841 = tbl_JOIN_INNER_TD_9210_output.getInt32(i, 1);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_9210_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8255_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                tbl_JOIN_INNER_TD_8255_output.setInt32(r, 0, _wr_returning_customer_sk838);
                tbl_JOIN_INNER_TD_8255_output.setInt32(r, 1, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8255_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8255_output #Row: " << tbl_JOIN_INNER_TD_8255_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_7213_key;
struct SW_Aggregate_TD_7213_payload {
    int32_t _125074_avg_0;
    std::string _ctr_state50575206;
};
void SW_Aggregate_TD_7213(Table &tbl_Aggregate_TD_8385_output, Table &tbl_Aggregate_TD_7213_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ctr_state#5057, CheckOverflow((promote_precision(avg(ctr_total_return#5058)) * 1.200000), DecimalType(24,7), true) AS (avg(ctr_total_return) * 1.2)#5074, ctr_state#5057 AS ctr_state#5057#5206)
    // Input: ListBuffer(ctr_state#5057, ctr_total_return#5058)
    // Output: ListBuffer((avg(ctr_total_return) * 1.2)#5074, ctr_state#5057#5206)
    std::unordered_map<SW_Aggregate_TD_7213_key, SW_Aggregate_TD_7213_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_8385_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057 = tbl_Aggregate_TD_8385_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _ctr_total_return5058 = tbl_Aggregate_TD_8385_output.getInt32(i, 1);
        SW_Aggregate_TD_7213_key k = std::string(_ctr_state5057.data());
        int64_t _125074_avg_0 = _ctr_total_return5058;
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state50575206 = _ctr_state5057;
        SW_Aggregate_TD_7213_payload p{_125074_avg_0, std::string(_ctr_state50575206.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._125074_avg_0 + _125074_avg_0);
            p._125074_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ctr_state5057 not required in the output table
        int32_t _125074 = ((it.second)._125074_avg_0 / nrow1 * 1.200000);
        tbl_Aggregate_TD_7213_output.setInt32(r, 0, _125074);
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state50575206_n{};
        memcpy(_ctr_state50575206_n.data(), (it.second)._ctr_state50575206.data(), (it.second)._ctr_state50575206.length());
        tbl_Aggregate_TD_7213_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state50575206_n);
        ++r;
    }
    tbl_Aggregate_TD_7213_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7213_output #Row: " << tbl_Aggregate_TD_7213_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_768_key {
    int32_t _wr_returning_customer_sk838;
    std::string _ca_state62;
    bool operator==(const SW_Aggregate_TD_768_key& other) const { return (_wr_returning_customer_sk838 == other._wr_returning_customer_sk838) && (_ca_state62 == other._ca_state62); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_768_key> {
    std::size_t operator() (const SW_Aggregate_TD_768_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returning_customer_sk838)) + (hash<string>()(k._ca_state62));
    }
};
}
struct SW_Aggregate_TD_768_payload {
    int32_t _ctr_customer_sk5056;
    std::string _ctr_state5057;
    int32_t _ctr_total_return5058_sum_0;
};
void SW_Aggregate_TD_768(Table &tbl_JOIN_INNER_TD_8255_output, Table &tbl_Aggregate_TD_768_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(wr_returning_customer_sk#838, ca_state#62, wr_returning_customer_sk#838 AS ctr_customer_sk#5056, ca_state#62 AS ctr_state#5057, MakeDecimal(sum(UnscaledValue(wr_return_amt#846)),17,2) AS ctr_total_return#5058)
    // Input: ListBuffer(wr_returning_customer_sk#838, wr_return_amt#846, ca_state#62)
    // Output: ListBuffer(ctr_customer_sk#5056, ctr_state#5057, ctr_total_return#5058)
    std::unordered_map<SW_Aggregate_TD_768_key, SW_Aggregate_TD_768_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8255_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_returning_customer_sk838 = tbl_JOIN_INNER_TD_8255_output.getInt32(i, 0);
        int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_8255_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_8255_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_768_key k{_wr_returning_customer_sk838, std::string(_ca_state62.data())};
        int32_t _ctr_customer_sk5056 = _wr_returning_customer_sk838;
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057 = _ca_state62;
        int64_t _ctr_total_return5058_sum_0 = _wr_return_amt846;
        SW_Aggregate_TD_768_payload p{_ctr_customer_sk5056, std::string(_ctr_state5057.data()), _ctr_total_return5058_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ctr_total_return5058_sum_0 + _ctr_total_return5058_sum_0;
            p._ctr_total_return5058_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _wr_returning_customer_sk838 not required in the output table
        // _ca_state62 not required in the output table
        tbl_Aggregate_TD_768_output.setInt32(r, 0, (it.second)._ctr_customer_sk5056);
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057_n{};
        memcpy(_ctr_state5057_n.data(), (it.second)._ctr_state5057.data(), (it.second)._ctr_state5057.length());
        tbl_Aggregate_TD_768_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state5057_n);
        int32_t _ctr_total_return5058 = (it.second)._ctr_total_return5058_sum_0;
        tbl_Aggregate_TD_768_output.setInt32(r, 2, _ctr_total_return5058);
        ++r;
    }
    tbl_Aggregate_TD_768_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_768_output #Row: " << tbl_Aggregate_TD_768_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6457(Table &tbl_Aggregate_TD_7213_output, Table &tbl_Filter_TD_6457_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull((avg(ctr_total_return) * 1.2)#5074))
    // Input: ListBuffer((avg(ctr_total_return) * 1.2)#5074, ctr_state#5057#5206)
    // Output: ListBuffer((avg(ctr_total_return) * 1.2)#5074, ctr_state#5057#5206)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7213_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _125074 = tbl_Aggregate_TD_7213_output.getInt32(i, 0);
        if (_125074!= 0) {
            int32_t _125074_t = tbl_Aggregate_TD_7213_output.getInt32(i, 0);
            tbl_Filter_TD_6457_output.setInt32(r, 0, _125074_t);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state50575206_t = tbl_Aggregate_TD_7213_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6457_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state50575206_t);
            r++;
        }
    }
    tbl_Filter_TD_6457_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6457_output #Row: " << tbl_Filter_TD_6457_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6830(Table &tbl_Aggregate_TD_768_output, Table &tbl_Filter_TD_6830_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ctr_total_return#5058))
    // Input: ListBuffer(ctr_customer_sk#5056, ctr_state#5057, ctr_total_return#5058)
    // Output: ListBuffer(ctr_customer_sk#5056, ctr_state#5057, ctr_total_return#5058)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_768_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ctr_total_return5058 = tbl_Aggregate_TD_768_output.getInt32(i, 2);
        if (_ctr_total_return5058!= 0) {
            int32_t _ctr_customer_sk5056_t = tbl_Aggregate_TD_768_output.getInt32(i, 0);
            tbl_Filter_TD_6830_output.setInt32(r, 0, _ctr_customer_sk5056_t);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057_t = tbl_Aggregate_TD_768_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6830_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state5057_t);
            int32_t _ctr_total_return5058_t = tbl_Aggregate_TD_768_output.getInt32(i, 2);
            tbl_Filter_TD_6830_output.setInt32(r, 2, _ctr_total_return5058_t);
            r++;
        }
    }
    tbl_Filter_TD_6830_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6830_output #Row: " << tbl_Filter_TD_6830_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5836(Table &tbl_SerializeFromObject_TD_6733_input, Table &tbl_Filter_TD_5836_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17)
    // Output: ListBuffer(c_customer_sk#0, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6733_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_6733_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_6733_input.getInt32(i, 2);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_6733_input.getInt32(i, 0);
            tbl_Filter_TD_5836_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_t = tbl_SerializeFromObject_TD_6733_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_6733_input.getInt32(i, 2);
            tbl_Filter_TD_5836_output.setInt32(r, 2, _c_current_addr_sk4_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_t = tbl_SerializeFromObject_TD_6733_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_5836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_salutation7_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_6733_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_5836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_6733_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_5836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_last_name9_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_t = tbl_SerializeFromObject_TD_6733_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_5836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_preferred_cust_flag10_t);
            int32_t _c_birth_day11_t = tbl_SerializeFromObject_TD_6733_input.getInt32(i, 7);
            tbl_Filter_TD_5836_output.setInt32(r, 7, _c_birth_day11_t);
            int32_t _c_birth_month12_t = tbl_SerializeFromObject_TD_6733_input.getInt32(i, 8);
            tbl_Filter_TD_5836_output.setInt32(r, 8, _c_birth_month12_t);
            int32_t _c_birth_year13_t = tbl_SerializeFromObject_TD_6733_input.getInt32(i, 9);
            tbl_Filter_TD_5836_output.setInt32(r, 9, _c_birth_year13_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_t = tbl_SerializeFromObject_TD_6733_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            tbl_Filter_TD_5836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_birth_country14_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_t = tbl_SerializeFromObject_TD_6733_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            tbl_Filter_TD_5836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_login15_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_t = tbl_SerializeFromObject_TD_6733_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            tbl_Filter_TD_5836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _c_email_address16_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17_t = tbl_SerializeFromObject_TD_6733_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            tbl_Filter_TD_5836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _c_last_review_date17_t);
            r++;
        }
    }
    tbl_Filter_TD_5836_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5836_output #Row: " << tbl_Filter_TD_5836_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5139_key_leftMajor {
    std::string _ctr_state5057;
    bool operator==(const SW_JOIN_INNER_TD_5139_key_leftMajor& other) const {
        return ((_ctr_state5057 == other._ctr_state5057));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5139_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5139_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ctr_state5057));
    }
};
}
struct SW_JOIN_INNER_TD_5139_payload_leftMajor {
    int32_t _ctr_customer_sk5056;
    std::string _ctr_state5057;
    int32_t _ctr_total_return5058;
};
struct SW_JOIN_INNER_TD_5139_key_rightMajor {
    std::string _ctr_state50575206;
    bool operator==(const SW_JOIN_INNER_TD_5139_key_rightMajor& other) const {
        return ((_ctr_state50575206 == other._ctr_state50575206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5139_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5139_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ctr_state50575206));
    }
};
}
struct SW_JOIN_INNER_TD_5139_payload_rightMajor {
    int32_t _125074;
    std::string _ctr_state50575206;
};
void SW_JOIN_INNER_TD_5139(Table &tbl_Filter_TD_6830_output, Table &tbl_Filter_TD_6457_output, Table &tbl_JOIN_INNER_TD_5139_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cast(ctr_total_return#5058 as decimal(24,7)) > (avg(ctr_total_return) * 1.2)#5074) AND (ctr_state#5057 = ctr_state#5057#5206)))
    // Left Table: ListBuffer(ctr_customer_sk#5056, ctr_state#5057, ctr_total_return#5058)
    // Right Table: ListBuffer((avg(ctr_total_return) * 1.2)#5074, ctr_state#5057#5206)
    // Output Table: ListBuffer(ctr_customer_sk#5056, ctr_total_return#5058)
    int left_nrow = tbl_Filter_TD_6830_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6457_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5139_key_leftMajor, SW_JOIN_INNER_TD_5139_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6830_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057_k_n = tbl_Filter_TD_6830_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state5057_k = std::string(_ctr_state5057_k_n.data());
            SW_JOIN_INNER_TD_5139_key_leftMajor keyA{_ctr_state5057_k};
            int32_t _ctr_customer_sk5056 = tbl_Filter_TD_6830_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057_n = tbl_Filter_TD_6830_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state5057 = std::string(_ctr_state5057_n.data());
            int32_t _ctr_total_return5058 = tbl_Filter_TD_6830_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5139_payload_leftMajor payloadA{_ctr_customer_sk5056, _ctr_state5057, _ctr_total_return5058};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6457_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state50575206_k_n = tbl_Filter_TD_6457_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state50575206_k = std::string(_ctr_state50575206_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5139_key_leftMajor{_ctr_state50575206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ctr_customer_sk5056 = (it->second)._ctr_customer_sk5056;
                std::string _ctr_state5057 = (it->second)._ctr_state5057;
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057_n{};
                memcpy(_ctr_state5057_n.data(), (_ctr_state5057).data(), (_ctr_state5057).length());
                int32_t _ctr_total_return5058 = (it->second)._ctr_total_return5058;
                int32_t _125074 = tbl_Filter_TD_6457_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state50575206_n = tbl_Filter_TD_6457_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ctr_state50575206 = std::string(_ctr_state50575206_n.data());
                tbl_JOIN_INNER_TD_5139_output.setInt32(r, 0, _ctr_customer_sk5056);
                tbl_JOIN_INNER_TD_5139_output.setInt32(r, 1, _ctr_total_return5058);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5139_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5139_key_rightMajor, SW_JOIN_INNER_TD_5139_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6457_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state50575206_k_n = tbl_Filter_TD_6457_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state50575206_k = std::string(_ctr_state50575206_k_n.data());
            SW_JOIN_INNER_TD_5139_key_rightMajor keyA{_ctr_state50575206_k};
            int32_t _125074 = tbl_Filter_TD_6457_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state50575206_n = tbl_Filter_TD_6457_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state50575206 = std::string(_ctr_state50575206_n.data());
            SW_JOIN_INNER_TD_5139_payload_rightMajor payloadA{_125074, _ctr_state50575206};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6830_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057_k_n = tbl_Filter_TD_6830_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state5057_k = std::string(_ctr_state5057_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5139_key_rightMajor{_ctr_state5057_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _125074 = (it->second)._125074;
                std::string _ctr_state50575206 = (it->second)._ctr_state50575206;
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state50575206_n{};
                memcpy(_ctr_state50575206_n.data(), (_ctr_state50575206).data(), (_ctr_state50575206).length());
                int32_t _ctr_customer_sk5056 = tbl_Filter_TD_6830_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state5057_n = tbl_Filter_TD_6830_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ctr_state5057 = std::string(_ctr_state5057_n.data());
                int32_t _ctr_total_return5058 = tbl_Filter_TD_6830_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5139_output.setInt32(r, 0, _ctr_customer_sk5056);
                tbl_JOIN_INNER_TD_5139_output.setInt32(r, 1, _ctr_total_return5058);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5139_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5139_output #Row: " << tbl_JOIN_INNER_TD_5139_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4912(Table &tbl_SerializeFromObject_TD_597_input, Table &tbl_Filter_TD_4912_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_state#5067) AND (ca_state#5067 = GA)) AND isnotnull(ca_address_sk#5059)))
    // Input: ListBuffer(ca_address_sk#5059, ca_state#5067)
    // Output: ListBuffer(ca_address_sk#5059)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_597_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state5067 = tbl_SerializeFromObject_TD_597_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ca_address_sk5059 = tbl_SerializeFromObject_TD_597_input.getInt32(i, 0);
        if ((（std::string(_isnotnullca_state5067.data()) != "NULL") && (std::string(_ca_state5067.data()) == "GA")) && (_ca_address_sk5059!= 0)) {
            int32_t _ca_address_sk5059_t = tbl_SerializeFromObject_TD_597_input.getInt32(i, 0);
            tbl_Filter_TD_4912_output.setInt32(r, 0, _ca_address_sk5059_t);
            r++;
        }
    }
    tbl_Filter_TD_4912_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4912_output #Row: " << tbl_Filter_TD_4912_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4476_key_leftMajor {
    int32_t _ctr_customer_sk5056;
    bool operator==(const SW_JOIN_INNER_TD_4476_key_leftMajor& other) const {
        return ((_ctr_customer_sk5056 == other._ctr_customer_sk5056));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4476_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4476_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ctr_customer_sk5056));
    }
};
}
struct SW_JOIN_INNER_TD_4476_payload_leftMajor {
    int32_t _ctr_customer_sk5056;
    int32_t _ctr_total_return5058;
};
struct SW_JOIN_INNER_TD_4476_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_4476_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4476_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4476_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_4476_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_customer_id1;
    int32_t _c_current_addr_sk4;
    std::string _c_salutation7;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    int32_t _c_birth_day11;
    int32_t _c_birth_month12;
    int32_t _c_birth_year13;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
    std::string _c_last_review_date17;
};
void SW_JOIN_INNER_TD_4476(Table &tbl_JOIN_INNER_TD_5139_output, Table &tbl_Filter_TD_5836_output, Table &tbl_JOIN_INNER_TD_4476_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ctr_customer_sk#5056 = c_customer_sk#0))
    // Left Table: ListBuffer(ctr_customer_sk#5056, ctr_total_return#5058)
    // Right Table: ListBuffer(c_customer_sk#0, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17)
    // Output Table: ListBuffer(ctr_total_return#5058, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17)
    int left_nrow = tbl_JOIN_INNER_TD_5139_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5836_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4476_key_leftMajor, SW_JOIN_INNER_TD_4476_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5139_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ctr_customer_sk5056_k = tbl_JOIN_INNER_TD_5139_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4476_key_leftMajor keyA{_ctr_customer_sk5056_k};
            int32_t _ctr_customer_sk5056 = tbl_JOIN_INNER_TD_5139_output.getInt32(i, 0);
            int32_t _ctr_total_return5058 = tbl_JOIN_INNER_TD_5139_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4476_payload_leftMajor payloadA{_ctr_customer_sk5056, _ctr_total_return5058};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5836_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5836_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4476_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ctr_customer_sk5056 = (it->second)._ctr_customer_sk5056;
                int32_t _ctr_total_return5058 = (it->second)._ctr_total_return5058;
                int32_t _c_customer_sk0 = tbl_Filter_TD_5836_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_5836_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_salutation7 = std::string(_c_salutation7_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
                int32_t _c_birth_day11 = tbl_Filter_TD_5836_output.getInt32(i, 7);
                int32_t _c_birth_month12 = tbl_Filter_TD_5836_output.getInt32(i, 8);
                int32_t _c_birth_year13 = tbl_Filter_TD_5836_output.getInt32(i, 9);
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _c_login15 = std::string(_c_login15_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _c_email_address16 = std::string(_c_email_address16_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _c_last_review_date17 = std::string(_c_last_review_date17_n.data());
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 0, _ctr_total_return5058);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 2, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_salutation7_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_last_name9_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 7, _c_birth_day11);
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 8, _c_birth_month12);
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 9, _c_birth_year13);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_login15_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _c_email_address16_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _c_last_review_date17_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4476_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4476_key_rightMajor, SW_JOIN_INNER_TD_4476_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5836_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5836_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4476_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_5836_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_5836_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_salutation7 = std::string(_c_salutation7_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
            int32_t _c_birth_day11 = tbl_Filter_TD_5836_output.getInt32(i, 7);
            int32_t _c_birth_month12 = tbl_Filter_TD_5836_output.getInt32(i, 8);
            int32_t _c_birth_year13 = tbl_Filter_TD_5836_output.getInt32(i, 9);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _c_login15 = std::string(_c_login15_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _c_email_address16 = std::string(_c_email_address16_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17_n = tbl_Filter_TD_5836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _c_last_review_date17 = std::string(_c_last_review_date17_n.data());
            SW_JOIN_INNER_TD_4476_payload_rightMajor payloadA{_c_customer_sk0, _c_customer_id1, _c_current_addr_sk4, _c_salutation7, _c_first_name8, _c_last_name9, _c_preferred_cust_flag10, _c_birth_day11, _c_birth_month12, _c_birth_year13, _c_birth_country14, _c_login15, _c_email_address16, _c_last_review_date17};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5139_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ctr_customer_sk5056_k = tbl_JOIN_INNER_TD_5139_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4476_key_rightMajor{_ctr_customer_sk5056_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                std::string _c_salutation7 = (it->second)._c_salutation7;
                std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n{};
                memcpy(_c_salutation7_n.data(), (_c_salutation7).data(), (_c_salutation7).length());
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                std::string _c_preferred_cust_flag10 = (it->second)._c_preferred_cust_flag10;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n{};
                memcpy(_c_preferred_cust_flag10_n.data(), (_c_preferred_cust_flag10).data(), (_c_preferred_cust_flag10).length());
                int32_t _c_birth_day11 = (it->second)._c_birth_day11;
                int32_t _c_birth_month12 = (it->second)._c_birth_month12;
                int32_t _c_birth_year13 = (it->second)._c_birth_year13;
                std::string _c_birth_country14 = (it->second)._c_birth_country14;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n{};
                memcpy(_c_birth_country14_n.data(), (_c_birth_country14).data(), (_c_birth_country14).length());
                std::string _c_login15 = (it->second)._c_login15;
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n{};
                memcpy(_c_login15_n.data(), (_c_login15).data(), (_c_login15).length());
                std::string _c_email_address16 = (it->second)._c_email_address16;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n{};
                memcpy(_c_email_address16_n.data(), (_c_email_address16).data(), (_c_email_address16).length());
                std::string _c_last_review_date17 = (it->second)._c_last_review_date17;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17_n{};
                memcpy(_c_last_review_date17_n.data(), (_c_last_review_date17).data(), (_c_last_review_date17).length());
                int32_t _ctr_customer_sk5056 = tbl_JOIN_INNER_TD_5139_output.getInt32(i, 0);
                int32_t _ctr_total_return5058 = tbl_JOIN_INNER_TD_5139_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 2, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_salutation7_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_last_name9_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 7, _c_birth_day11);
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 8, _c_birth_month12);
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 9, _c_birth_year13);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_login15_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _c_email_address16_n);
                tbl_JOIN_INNER_TD_4476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _c_last_review_date17_n);
                tbl_JOIN_INNER_TD_4476_output.setInt32(r, 0, _ctr_total_return5058);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4476_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4476_output #Row: " << tbl_JOIN_INNER_TD_4476_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3408_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_3408_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3408_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3408_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_3408_payload_leftMajor {
    int32_t _ctr_total_return5058;
    std::string _c_customer_id1;
    int32_t _c_current_addr_sk4;
    std::string _c_salutation7;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    int32_t _c_birth_day11;
    int32_t _c_birth_month12;
    int32_t _c_birth_year13;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
    std::string _c_last_review_date17;
};
struct SW_JOIN_INNER_TD_3408_key_rightMajor {
    int32_t _ca_address_sk5059;
    bool operator==(const SW_JOIN_INNER_TD_3408_key_rightMajor& other) const {
        return ((_ca_address_sk5059 == other._ca_address_sk5059));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3408_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3408_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk5059));
    }
};
}
struct SW_JOIN_INNER_TD_3408_payload_rightMajor {
    int32_t _ca_address_sk5059;
};
void SW_JOIN_INNER_TD_3408(Table &tbl_JOIN_INNER_TD_4476_output, Table &tbl_Filter_TD_4912_output, Table &tbl_JOIN_INNER_TD_3408_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_address_sk#5059 = c_current_addr_sk#4))
    // Left Table: ListBuffer(ctr_total_return#5058, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17)
    // Right Table: ListBuffer(ca_address_sk#5059)
    // Output Table: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17, ctr_total_return#5058)
    int left_nrow = tbl_JOIN_INNER_TD_4476_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4912_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3408_key_leftMajor, SW_JOIN_INNER_TD_3408_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4476_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3408_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _ctr_total_return5058 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_salutation7 = std::string(_c_salutation7_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
            int32_t _c_birth_day11 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 7);
            int32_t _c_birth_month12 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 8);
            int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 9);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _c_login15 = std::string(_c_login15_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _c_email_address16 = std::string(_c_email_address16_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _c_last_review_date17 = std::string(_c_last_review_date17_n.data());
            SW_JOIN_INNER_TD_3408_payload_leftMajor payloadA{_ctr_total_return5058, _c_customer_id1, _c_current_addr_sk4, _c_salutation7, _c_first_name8, _c_last_name9, _c_preferred_cust_flag10, _c_birth_day11, _c_birth_month12, _c_birth_year13, _c_birth_country14, _c_login15, _c_email_address16, _c_last_review_date17};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4912_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk5059_k = tbl_Filter_TD_4912_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3408_key_leftMajor{_ca_address_sk5059_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ctr_total_return5058 = (it->second)._ctr_total_return5058;
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                std::string _c_salutation7 = (it->second)._c_salutation7;
                std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n{};
                memcpy(_c_salutation7_n.data(), (_c_salutation7).data(), (_c_salutation7).length());
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                std::string _c_preferred_cust_flag10 = (it->second)._c_preferred_cust_flag10;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n{};
                memcpy(_c_preferred_cust_flag10_n.data(), (_c_preferred_cust_flag10).data(), (_c_preferred_cust_flag10).length());
                int32_t _c_birth_day11 = (it->second)._c_birth_day11;
                int32_t _c_birth_month12 = (it->second)._c_birth_month12;
                int32_t _c_birth_year13 = (it->second)._c_birth_year13;
                std::string _c_birth_country14 = (it->second)._c_birth_country14;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n{};
                memcpy(_c_birth_country14_n.data(), (_c_birth_country14).data(), (_c_birth_country14).length());
                std::string _c_login15 = (it->second)._c_login15;
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n{};
                memcpy(_c_login15_n.data(), (_c_login15).data(), (_c_login15).length());
                std::string _c_email_address16 = (it->second)._c_email_address16;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n{};
                memcpy(_c_email_address16_n.data(), (_c_email_address16).data(), (_c_email_address16).length());
                std::string _c_last_review_date17 = (it->second)._c_last_review_date17;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17_n{};
                memcpy(_c_last_review_date17_n.data(), (_c_last_review_date17).data(), (_c_last_review_date17).length());
                int32_t _ca_address_sk5059 = tbl_Filter_TD_4912_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3408_output.setInt32(r, 12, _ctr_total_return5058);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_3408_output.setInt32(r, 5, _c_birth_day11);
                tbl_JOIN_INNER_TD_3408_output.setInt32(r, 6, _c_birth_month12);
                tbl_JOIN_INNER_TD_3408_output.setInt32(r, 7, _c_birth_year13);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_login15_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_email_address16_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_last_review_date17_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3408_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3408_key_rightMajor, SW_JOIN_INNER_TD_3408_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4912_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk5059_k = tbl_Filter_TD_4912_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3408_key_rightMajor keyA{_ca_address_sk5059_k};
            int32_t _ca_address_sk5059 = tbl_Filter_TD_4912_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3408_payload_rightMajor payloadA{_ca_address_sk5059};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4476_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3408_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk5059 = (it->second)._ca_address_sk5059;
                int32_t _ctr_total_return5058 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_salutation7 = std::string(_c_salutation7_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
                int32_t _c_birth_day11 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 7);
                int32_t _c_birth_month12 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 8);
                int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_4476_output.getInt32(i, 9);
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _c_login15 = std::string(_c_login15_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _c_email_address16 = std::string(_c_email_address16_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17_n = tbl_JOIN_INNER_TD_4476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _c_last_review_date17 = std::string(_c_last_review_date17_n.data());
                tbl_JOIN_INNER_TD_3408_output.setInt32(r, 12, _ctr_total_return5058);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_3408_output.setInt32(r, 5, _c_birth_day11);
                tbl_JOIN_INNER_TD_3408_output.setInt32(r, 6, _c_birth_month12);
                tbl_JOIN_INNER_TD_3408_output.setInt32(r, 7, _c_birth_year13);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_login15_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_email_address16_n);
                tbl_JOIN_INNER_TD_3408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_last_review_date17_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3408_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3408_output #Row: " << tbl_JOIN_INNER_TD_3408_output.getNumRow() << std::endl;
}

void SW_Sort_TD_249(Table &tbl_JOIN_INNER_TD_3408_output, Table &tbl_Sort_TD_249_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(c_customer_id#1 ASC NULLS FIRST, c_salutation#7 ASC NULLS FIRST, c_first_name#8 ASC NULLS FIRST, c_last_name#9 ASC NULLS FIRST, c_preferred_cust_flag#10 ASC NULLS FIRST, c_birth_day#11 ASC NULLS FIRST, c_birth_month#12 ASC NULLS FIRST, c_birth_year#13 ASC NULLS FIRST, c_birth_country#14 ASC NULLS FIRST, c_login#15 ASC NULLS FIRST, c_email_address#16 ASC NULLS FIRST, c_last_review_date#17 ASC NULLS FIRST, ctr_total_return#5058 ASC NULLS FIRST)
    // Input: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17, ctr_total_return#5058)
    // Output: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17, ctr_total_return#5058)
    struct SW_Sort_TD_249Row {
        std::string _c_customer_id1;
        std::string _c_salutation7;
        std::string _c_first_name8;
        std::string _c_last_name9;
        std::string _c_preferred_cust_flag10;
        int32_t _c_birth_day11;
        int32_t _c_birth_month12;
        int32_t _c_birth_year13;
        std::string _c_birth_country14;
        std::string _c_login15;
        std::string _c_email_address16;
        std::string _c_last_review_date17;
        int32_t _ctr_total_return5058;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_249Row& a, const SW_Sort_TD_249Row& b) const { return 
 (a._c_customer_id1 < b._c_customer_id1) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 < b._c_salutation7)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 < b._c_first_name8)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 < b._c_last_name9)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._c_preferred_cust_flag10 < b._c_preferred_cust_flag10)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._c_preferred_cust_flag10 == b._c_preferred_cust_flag10) && (a._c_birth_day11 < b._c_birth_day11)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._c_preferred_cust_flag10 == b._c_preferred_cust_flag10) && (a._c_birth_day11 == b._c_birth_day11) && (a._c_birth_month12 < b._c_birth_month12)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._c_preferred_cust_flag10 == b._c_preferred_cust_flag10) && (a._c_birth_day11 == b._c_birth_day11) && (a._c_birth_month12 == b._c_birth_month12) && (a._c_birth_year13 < b._c_birth_year13)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._c_preferred_cust_flag10 == b._c_preferred_cust_flag10) && (a._c_birth_day11 == b._c_birth_day11) && (a._c_birth_month12 == b._c_birth_month12) && (a._c_birth_year13 == b._c_birth_year13) && (a._c_birth_country14 < b._c_birth_country14)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._c_preferred_cust_flag10 == b._c_preferred_cust_flag10) && (a._c_birth_day11 == b._c_birth_day11) && (a._c_birth_month12 == b._c_birth_month12) && (a._c_birth_year13 == b._c_birth_year13) && (a._c_birth_country14 == b._c_birth_country14) && (a._c_login15 < b._c_login15)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._c_preferred_cust_flag10 == b._c_preferred_cust_flag10) && (a._c_birth_day11 == b._c_birth_day11) && (a._c_birth_month12 == b._c_birth_month12) && (a._c_birth_year13 == b._c_birth_year13) && (a._c_birth_country14 == b._c_birth_country14) && (a._c_login15 == b._c_login15) && (a._c_email_address16 < b._c_email_address16)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._c_preferred_cust_flag10 == b._c_preferred_cust_flag10) && (a._c_birth_day11 == b._c_birth_day11) && (a._c_birth_month12 == b._c_birth_month12) && (a._c_birth_year13 == b._c_birth_year13) && (a._c_birth_country14 == b._c_birth_country14) && (a._c_login15 == b._c_login15) && (a._c_email_address16 == b._c_email_address16) && (a._c_last_review_date17 < b._c_last_review_date17)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._c_preferred_cust_flag10 == b._c_preferred_cust_flag10) && (a._c_birth_day11 == b._c_birth_day11) && (a._c_birth_month12 == b._c_birth_month12) && (a._c_birth_year13 == b._c_birth_year13) && (a._c_birth_country14 == b._c_birth_country14) && (a._c_login15 == b._c_login15) && (a._c_email_address16 == b._c_email_address16) && (a._c_last_review_date17 == b._c_last_review_date17) && (a._ctr_total_return5058 < b._ctr_total_return5058)); 
}
    }SW_Sort_TD_249_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3408_output.getNumRow();
    std::vector<SW_Sort_TD_249Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_JOIN_INNER_TD_3408_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7 = tbl_JOIN_INNER_TD_3408_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_3408_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_3408_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10 = tbl_JOIN_INNER_TD_3408_output.getcharN<char, TPCDS_READ_MAX +1>(i, 4);
        int32_t _c_birth_day11 = tbl_JOIN_INNER_TD_3408_output.getInt32(i, 5);
        int32_t _c_birth_month12 = tbl_JOIN_INNER_TD_3408_output.getInt32(i, 6);
        int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_3408_output.getInt32(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14 = tbl_JOIN_INNER_TD_3408_output.getcharN<char, TPCDS_READ_MAX +1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _c_login15 = tbl_JOIN_INNER_TD_3408_output.getcharN<char, TPCDS_READ_MAX +1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address16 = tbl_JOIN_INNER_TD_3408_output.getcharN<char, TPCDS_READ_MAX +1>(i, 10);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17 = tbl_JOIN_INNER_TD_3408_output.getcharN<char, TPCDS_READ_MAX +1>(i, 11);
        int32_t _ctr_total_return5058 = tbl_JOIN_INNER_TD_3408_output.getInt32(i, 12);
        SW_Sort_TD_249Row t = {std::string(_c_customer_id1.data()),std::string(_c_salutation7.data()),std::string(_c_first_name8.data()),std::string(_c_last_name9.data()),std::string(_c_preferred_cust_flag10.data()),_c_birth_day11,_c_birth_month12,_c_birth_year13,std::string(_c_birth_country14.data()),std::string(_c_login15.data()),std::string(_c_email_address16.data()),std::string(_c_last_review_date17.data()),_ctr_total_return5058};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_249_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1{};
        memcpy(_c_customer_id1.data(), (it._c_customer_id1).data(), (it._c_customer_id1).length());
        tbl_Sort_TD_249_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _c_customer_id1);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7{};
        memcpy(_c_salutation7.data(), (it._c_salutation7).data(), (it._c_salutation7).length());
        tbl_Sort_TD_249_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_salutation7);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), (it._c_first_name8).data(), (it._c_first_name8).length());
        tbl_Sort_TD_249_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _c_first_name8);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), (it._c_last_name9).data(), (it._c_last_name9).length());
        tbl_Sort_TD_249_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10{};
        memcpy(_c_preferred_cust_flag10.data(), (it._c_preferred_cust_flag10).data(), (it._c_preferred_cust_flag10).length());
        tbl_Sort_TD_249_output.setcharN<char, TPCDS_READ_MAX +1>(r, 4, _c_preferred_cust_flag10);
        tbl_Sort_TD_249_output.setInt32(r, 5, it._c_birth_day11);
        tbl_Sort_TD_249_output.setInt32(r, 6, it._c_birth_month12);
        tbl_Sort_TD_249_output.setInt32(r, 7, it._c_birth_year13);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14{};
        memcpy(_c_birth_country14.data(), (it._c_birth_country14).data(), (it._c_birth_country14).length());
        tbl_Sort_TD_249_output.setcharN<char, TPCDS_READ_MAX +1>(r, 8, _c_birth_country14);
        std::array<char, TPCDS_READ_MAX + 1> _c_login15{};
        memcpy(_c_login15.data(), (it._c_login15).data(), (it._c_login15).length());
        tbl_Sort_TD_249_output.setcharN<char, TPCDS_READ_MAX +1>(r, 9, _c_login15);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address16{};
        memcpy(_c_email_address16.data(), (it._c_email_address16).data(), (it._c_email_address16).length());
        tbl_Sort_TD_249_output.setcharN<char, TPCDS_READ_MAX +1>(r, 10, _c_email_address16);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17{};
        memcpy(_c_last_review_date17.data(), (it._c_last_review_date17).data(), (it._c_last_review_date17).length());
        tbl_Sort_TD_249_output.setcharN<char, TPCDS_READ_MAX +1>(r, 11, _c_last_review_date17);
        tbl_Sort_TD_249_output.setInt32(r, 12, it._ctr_total_return5058);
        ++r;
    }
    tbl_Sort_TD_249_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_249_output #Row: " << tbl_Sort_TD_249_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1276(Table &tbl_Sort_TD_249_output, Table &tbl_LocalLimit_TD_1276_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17, ctr_total_return#5058)
    // Output: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17, ctr_total_return#5058)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Sort_TD_249_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Sort_TD_249_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Sort_TD_249_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Sort_TD_249_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Sort_TD_249_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_LocalLimit_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag10_n);
        tbl_LocalLimit_TD_1276_output.setInt32(r, 5, tbl_Sort_TD_249_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1276_output.setInt32(r, 6, tbl_Sort_TD_249_output.getInt32(i, 6));
        tbl_LocalLimit_TD_1276_output.setInt32(r, 7, tbl_Sort_TD_249_output.getInt32(i, 7));
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Sort_TD_249_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        tbl_LocalLimit_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_birth_country14_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_Sort_TD_249_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        tbl_LocalLimit_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_login15_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_Sort_TD_249_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        tbl_LocalLimit_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_email_address16_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17_n = tbl_Sort_TD_249_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
        tbl_LocalLimit_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_last_review_date17_n);
        tbl_LocalLimit_TD_1276_output.setInt32(r, 12, tbl_Sort_TD_249_output.getInt32(i, 12));
        r++;
    }
    tbl_LocalLimit_TD_1276_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1276_output #Row: " << tbl_LocalLimit_TD_1276_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0888(Table &tbl_LocalLimit_TD_1276_output, Table &tbl_GlobalLimit_TD_0888_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17, ctr_total_return#5058)
    // Output: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_day#11, c_birth_month#12, c_birth_year#13, c_birth_country#14, c_login#15, c_email_address#16, c_last_review_date#17, ctr_total_return#5058)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_LocalLimit_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_LocalLimit_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_LocalLimit_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_LocalLimit_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_LocalLimit_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_GlobalLimit_TD_0888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag10_n);
        tbl_GlobalLimit_TD_0888_output.setInt32(r, 5, tbl_LocalLimit_TD_1276_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0888_output.setInt32(r, 6, tbl_LocalLimit_TD_1276_output.getInt32(i, 6));
        tbl_GlobalLimit_TD_0888_output.setInt32(r, 7, tbl_LocalLimit_TD_1276_output.getInt32(i, 7));
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_LocalLimit_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        tbl_GlobalLimit_TD_0888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_birth_country14_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_LocalLimit_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        tbl_GlobalLimit_TD_0888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_login15_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_LocalLimit_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        tbl_GlobalLimit_TD_0888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_email_address16_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_review_date17_n = tbl_LocalLimit_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
        tbl_GlobalLimit_TD_0888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_last_review_date17_n);
        tbl_GlobalLimit_TD_0888_output.setInt32(r, 12, tbl_LocalLimit_TD_1276_output.getInt32(i, 12));
        r++;
    }
    tbl_GlobalLimit_TD_0888_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0888_output #Row: " << tbl_GlobalLimit_TD_0888_output.getNumRow() << std::endl;
}

