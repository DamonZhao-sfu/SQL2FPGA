#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11314(Table &tbl_SerializeFromObject_TD_12215_input, Table &tbl_Filter_TD_11314_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2000)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12215_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12215_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12215_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2000)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12215_input.getInt32(i, 0);
            tbl_Filter_TD_11314_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11314_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11314_output #Row: " << tbl_Filter_TD_11314_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11166(Table &tbl_SerializeFromObject_TD_12374_input, Table &tbl_Filter_TD_11166_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_returned_date_sk#1023) AND isnotnull(cr_returning_addr_sk#1033)))
    // Input: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Output: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12374_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_12374_input.getInt32(i, 0);
        int32_t _cr_returning_addr_sk1033 = tbl_SerializeFromObject_TD_12374_input.getInt32(i, 2);
        if ((_cr_returned_date_sk1023!= 0) && (_cr_returning_addr_sk1033!= 0)) {
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_12374_input.getInt32(i, 0);
            tbl_Filter_TD_11166_output.setInt32(r, 0, _cr_returned_date_sk1023_t);
            int32_t _cr_returning_customer_sk1030_t = tbl_SerializeFromObject_TD_12374_input.getInt32(i, 1);
            tbl_Filter_TD_11166_output.setInt32(r, 1, _cr_returning_customer_sk1030_t);
            int32_t _cr_returning_addr_sk1033_t = tbl_SerializeFromObject_TD_12374_input.getInt32(i, 2);
            tbl_Filter_TD_11166_output.setInt32(r, 2, _cr_returning_addr_sk1033_t);
            int32_t _cr_return_amt_inc_tax1043_t = tbl_SerializeFromObject_TD_12374_input.getInt32(i, 3);
            tbl_Filter_TD_11166_output.setInt32(r, 3, _cr_return_amt_inc_tax1043_t);
            r++;
        }
    }
    tbl_Filter_TD_11166_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11166_output #Row: " << tbl_Filter_TD_11166_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10346(Table &tbl_SerializeFromObject_TD_1123_input, Table &tbl_Filter_TD_10346_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_state#62)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1123_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_1123_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_1123_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && （std::string(_isnotnullca_state62.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_1123_input.getInt32(i, 0);
            tbl_Filter_TD_10346_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_1123_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10346_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_10346_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10346_output #Row: " << tbl_Filter_TD_10346_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10298_key_leftMajor {
    int32_t _cr_returned_date_sk1023;
    bool operator==(const SW_JOIN_INNER_TD_10298_key_leftMajor& other) const {
        return ((_cr_returned_date_sk1023 == other._cr_returned_date_sk1023));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10298_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10298_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returned_date_sk1023));
    }
};
}
struct SW_JOIN_INNER_TD_10298_payload_leftMajor {
    int32_t _cr_returned_date_sk1023;
    int32_t _cr_returning_customer_sk1030;
    int32_t _cr_returning_addr_sk1033;
    int32_t _cr_return_amt_inc_tax1043;
};
struct SW_JOIN_INNER_TD_10298_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10298_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10298_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10298_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10298_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10298(Table &tbl_Filter_TD_11166_output, Table &tbl_Filter_TD_11314_output, Table &tbl_JOIN_INNER_TD_10298_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returned_date_sk#1023 = d_date_sk#120))
    // Left Table: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    int left_nrow = tbl_Filter_TD_11166_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11314_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10298_key_leftMajor, SW_JOIN_INNER_TD_10298_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11166_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_Filter_TD_11166_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10298_key_leftMajor keyA{_cr_returned_date_sk1023_k};
            int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_11166_output.getInt32(i, 0);
            int32_t _cr_returning_customer_sk1030 = tbl_Filter_TD_11166_output.getInt32(i, 1);
            int32_t _cr_returning_addr_sk1033 = tbl_Filter_TD_11166_output.getInt32(i, 2);
            int32_t _cr_return_amt_inc_tax1043 = tbl_Filter_TD_11166_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10298_payload_leftMajor payloadA{_cr_returned_date_sk1023, _cr_returning_customer_sk1030, _cr_returning_addr_sk1033, _cr_return_amt_inc_tax1043};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11314_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11314_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10298_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returned_date_sk1023 = (it->second)._cr_returned_date_sk1023;
                int32_t _cr_returning_customer_sk1030 = (it->second)._cr_returning_customer_sk1030;
                int32_t _cr_returning_addr_sk1033 = (it->second)._cr_returning_addr_sk1033;
                int32_t _cr_return_amt_inc_tax1043 = (it->second)._cr_return_amt_inc_tax1043;
                int32_t _d_date_sk120 = tbl_Filter_TD_11314_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10298_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_10298_output.setInt32(r, 1, _cr_returning_addr_sk1033);
                tbl_JOIN_INNER_TD_10298_output.setInt32(r, 2, _cr_return_amt_inc_tax1043);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10298_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10298_key_rightMajor, SW_JOIN_INNER_TD_10298_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11314_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11314_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10298_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11314_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10298_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11166_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_Filter_TD_11166_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10298_key_rightMajor{_cr_returned_date_sk1023_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_11166_output.getInt32(i, 0);
                int32_t _cr_returning_customer_sk1030 = tbl_Filter_TD_11166_output.getInt32(i, 1);
                int32_t _cr_returning_addr_sk1033 = tbl_Filter_TD_11166_output.getInt32(i, 2);
                int32_t _cr_return_amt_inc_tax1043 = tbl_Filter_TD_11166_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10298_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_10298_output.setInt32(r, 1, _cr_returning_addr_sk1033);
                tbl_JOIN_INNER_TD_10298_output.setInt32(r, 2, _cr_return_amt_inc_tax1043);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10298_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10298_output #Row: " << tbl_JOIN_INNER_TD_10298_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10802(Table &tbl_SerializeFromObject_TD_11518_input, Table &tbl_Filter_TD_10802_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2000)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11518_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_11518_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11518_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2000)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11518_input.getInt32(i, 0);
            tbl_Filter_TD_10802_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_10802_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10802_output #Row: " << tbl_Filter_TD_10802_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10660(Table &tbl_SerializeFromObject_TD_11110_input, Table &tbl_Filter_TD_10660_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cr_returned_date_sk#1023) AND isnotnull(cr_returning_addr_sk#1033)) AND isnotnull(cr_returning_customer_sk#1030)))
    // Input: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Output: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11110_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_11110_input.getInt32(i, 0);
        int32_t _cr_returning_addr_sk1033 = tbl_SerializeFromObject_TD_11110_input.getInt32(i, 2);
        int32_t _cr_returning_customer_sk1030 = tbl_SerializeFromObject_TD_11110_input.getInt32(i, 1);
        if (((_cr_returned_date_sk1023!= 0) && (_cr_returning_addr_sk1033!= 0)) && (_cr_returning_customer_sk1030!= 0)) {
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_11110_input.getInt32(i, 0);
            tbl_Filter_TD_10660_output.setInt32(r, 0, _cr_returned_date_sk1023_t);
            int32_t _cr_returning_customer_sk1030_t = tbl_SerializeFromObject_TD_11110_input.getInt32(i, 1);
            tbl_Filter_TD_10660_output.setInt32(r, 1, _cr_returning_customer_sk1030_t);
            int32_t _cr_returning_addr_sk1033_t = tbl_SerializeFromObject_TD_11110_input.getInt32(i, 2);
            tbl_Filter_TD_10660_output.setInt32(r, 2, _cr_returning_addr_sk1033_t);
            int32_t _cr_return_amt_inc_tax1043_t = tbl_SerializeFromObject_TD_11110_input.getInt32(i, 3);
            tbl_Filter_TD_10660_output.setInt32(r, 3, _cr_return_amt_inc_tax1043_t);
            r++;
        }
    }
    tbl_Filter_TD_10660_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10660_output #Row: " << tbl_Filter_TD_10660_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9643_key_leftMajor {
    int32_t _cr_returning_addr_sk1033;
    bool operator==(const SW_JOIN_INNER_TD_9643_key_leftMajor& other) const {
        return ((_cr_returning_addr_sk1033 == other._cr_returning_addr_sk1033));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9643_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9643_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returning_addr_sk1033));
    }
};
}
struct SW_JOIN_INNER_TD_9643_payload_leftMajor {
    int32_t _cr_returning_customer_sk1030;
    int32_t _cr_returning_addr_sk1033;
    int32_t _cr_return_amt_inc_tax1043;
};
struct SW_JOIN_INNER_TD_9643_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_9643_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9643_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9643_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_9643_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_9643(Table &tbl_JOIN_INNER_TD_10298_output, Table &tbl_Filter_TD_10346_output, Table &tbl_JOIN_INNER_TD_9643_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returning_addr_sk#1033 = ca_address_sk#54))
    // Left Table: ListBuffer(cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Right Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output Table: ListBuffer(cr_returning_customer_sk#1030, cr_return_amt_inc_tax#1043, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_10298_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10346_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9643_key_leftMajor, SW_JOIN_INNER_TD_9643_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10298_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returning_addr_sk1033_k = tbl_JOIN_INNER_TD_10298_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9643_key_leftMajor keyA{_cr_returning_addr_sk1033_k};
            int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_10298_output.getInt32(i, 0);
            int32_t _cr_returning_addr_sk1033 = tbl_JOIN_INNER_TD_10298_output.getInt32(i, 1);
            int32_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_10298_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9643_payload_leftMajor payloadA{_cr_returning_customer_sk1030, _cr_returning_addr_sk1033, _cr_return_amt_inc_tax1043};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10346_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_10346_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9643_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returning_customer_sk1030 = (it->second)._cr_returning_customer_sk1030;
                int32_t _cr_returning_addr_sk1033 = (it->second)._cr_returning_addr_sk1033;
                int32_t _cr_return_amt_inc_tax1043 = (it->second)._cr_return_amt_inc_tax1043;
                int32_t _ca_address_sk54 = tbl_Filter_TD_10346_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_10346_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_9643_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_9643_output.setInt32(r, 1, _cr_return_amt_inc_tax1043);
                tbl_JOIN_INNER_TD_9643_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9643_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9643_key_rightMajor, SW_JOIN_INNER_TD_9643_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10346_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_10346_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9643_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_10346_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_10346_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_9643_payload_rightMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10298_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returning_addr_sk1033_k = tbl_JOIN_INNER_TD_10298_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9643_key_rightMajor{_cr_returning_addr_sk1033_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_10298_output.getInt32(i, 0);
                int32_t _cr_returning_addr_sk1033 = tbl_JOIN_INNER_TD_10298_output.getInt32(i, 1);
                int32_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_10298_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9643_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                tbl_JOIN_INNER_TD_9643_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_9643_output.setInt32(r, 1, _cr_return_amt_inc_tax1043);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9643_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9643_output #Row: " << tbl_JOIN_INNER_TD_9643_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9444(Table &tbl_SerializeFromObject_TD_10693_input, Table &tbl_Filter_TD_9444_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_state#62)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10693_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_10693_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_10693_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && （std::string(_isnotnullca_state62.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_10693_input.getInt32(i, 0);
            tbl_Filter_TD_9444_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_10693_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9444_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_9444_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9444_output #Row: " << tbl_Filter_TD_9444_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9477_key_leftMajor {
    int32_t _cr_returned_date_sk1023;
    bool operator==(const SW_JOIN_INNER_TD_9477_key_leftMajor& other) const {
        return ((_cr_returned_date_sk1023 == other._cr_returned_date_sk1023));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9477_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9477_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returned_date_sk1023));
    }
};
}
struct SW_JOIN_INNER_TD_9477_payload_leftMajor {
    int32_t _cr_returned_date_sk1023;
    int32_t _cr_returning_customer_sk1030;
    int32_t _cr_returning_addr_sk1033;
    int32_t _cr_return_amt_inc_tax1043;
};
struct SW_JOIN_INNER_TD_9477_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_9477_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9477_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9477_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_9477_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_9477(Table &tbl_Filter_TD_10660_output, Table &tbl_Filter_TD_10802_output, Table &tbl_JOIN_INNER_TD_9477_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returned_date_sk#1023 = d_date_sk#120))
    // Left Table: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    int left_nrow = tbl_Filter_TD_10660_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10802_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9477_key_leftMajor, SW_JOIN_INNER_TD_9477_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10660_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_Filter_TD_10660_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9477_key_leftMajor keyA{_cr_returned_date_sk1023_k};
            int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_10660_output.getInt32(i, 0);
            int32_t _cr_returning_customer_sk1030 = tbl_Filter_TD_10660_output.getInt32(i, 1);
            int32_t _cr_returning_addr_sk1033 = tbl_Filter_TD_10660_output.getInt32(i, 2);
            int32_t _cr_return_amt_inc_tax1043 = tbl_Filter_TD_10660_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9477_payload_leftMajor payloadA{_cr_returned_date_sk1023, _cr_returning_customer_sk1030, _cr_returning_addr_sk1033, _cr_return_amt_inc_tax1043};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10802_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10802_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9477_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returned_date_sk1023 = (it->second)._cr_returned_date_sk1023;
                int32_t _cr_returning_customer_sk1030 = (it->second)._cr_returning_customer_sk1030;
                int32_t _cr_returning_addr_sk1033 = (it->second)._cr_returning_addr_sk1033;
                int32_t _cr_return_amt_inc_tax1043 = (it->second)._cr_return_amt_inc_tax1043;
                int32_t _d_date_sk120 = tbl_Filter_TD_10802_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9477_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_9477_output.setInt32(r, 1, _cr_returning_addr_sk1033);
                tbl_JOIN_INNER_TD_9477_output.setInt32(r, 2, _cr_return_amt_inc_tax1043);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9477_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9477_key_rightMajor, SW_JOIN_INNER_TD_9477_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10802_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10802_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9477_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_10802_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9477_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10660_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_Filter_TD_10660_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9477_key_rightMajor{_cr_returned_date_sk1023_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_10660_output.getInt32(i, 0);
                int32_t _cr_returning_customer_sk1030 = tbl_Filter_TD_10660_output.getInt32(i, 1);
                int32_t _cr_returning_addr_sk1033 = tbl_Filter_TD_10660_output.getInt32(i, 2);
                int32_t _cr_return_amt_inc_tax1043 = tbl_Filter_TD_10660_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9477_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_9477_output.setInt32(r, 1, _cr_returning_addr_sk1033);
                tbl_JOIN_INNER_TD_9477_output.setInt32(r, 2, _cr_return_amt_inc_tax1043);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9477_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9477_output #Row: " << tbl_JOIN_INNER_TD_9477_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8283_key {
    int32_t _cr_returning_customer_sk1030;
    std::string _ca_state62;
    bool operator==(const SW_Aggregate_TD_8283_key& other) const { return (_cr_returning_customer_sk1030 == other._cr_returning_customer_sk1030) && (_ca_state62 == other._ca_state62); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8283_key> {
    std::size_t operator() (const SW_Aggregate_TD_8283_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returning_customer_sk1030)) + (hash<string>()(k._ca_state62));
    }
};
}
struct SW_Aggregate_TD_8283_payload {
    std::string _ctr_state8649;
    int32_t _ctr_total_return8650_sum_0;
};
void SW_Aggregate_TD_8283(Table &tbl_JOIN_INNER_TD_9643_output, Table &tbl_Aggregate_TD_8283_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cr_returning_customer_sk#1030, ca_state#62, ca_state#62 AS ctr_state#8649, MakeDecimal(sum(UnscaledValue(cr_return_amt_inc_tax#1043)),17,2) AS ctr_total_return#8650)
    // Input: ListBuffer(cr_returning_customer_sk#1030, cr_return_amt_inc_tax#1043, ca_state#62)
    // Output: ListBuffer(ctr_state#8649, ctr_total_return#8650)
    std::unordered_map<SW_Aggregate_TD_8283_key, SW_Aggregate_TD_8283_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9643_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_9643_output.getInt32(i, 0);
        int32_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_9643_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_9643_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_8283_key k{_cr_returning_customer_sk1030, std::string(_ca_state62.data())};
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649 = _ca_state62;
        int64_t _ctr_total_return8650_sum_0 = _cr_return_amt_inc_tax1043;
        SW_Aggregate_TD_8283_payload p{std::string(_ctr_state8649.data()), _ctr_total_return8650_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ctr_total_return8650_sum_0 + _ctr_total_return8650_sum_0;
            p._ctr_total_return8650_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cr_returning_customer_sk1030 not required in the output table
        // _ca_state62 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649_n{};
        memcpy(_ctr_state8649_n.data(), (it.second)._ctr_state8649.data(), (it.second)._ctr_state8649.length());
        tbl_Aggregate_TD_8283_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ctr_state8649_n);
        int32_t _ctr_total_return8650 = (it.second)._ctr_total_return8650_sum_0;
        tbl_Aggregate_TD_8283_output.setInt32(r, 1, _ctr_total_return8650);
        ++r;
    }
    tbl_Aggregate_TD_8283_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8283_output #Row: " << tbl_Aggregate_TD_8283_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8865_key_leftMajor {
    int32_t _cr_returning_addr_sk1033;
    bool operator==(const SW_JOIN_INNER_TD_8865_key_leftMajor& other) const {
        return ((_cr_returning_addr_sk1033 == other._cr_returning_addr_sk1033));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8865_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8865_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returning_addr_sk1033));
    }
};
}
struct SW_JOIN_INNER_TD_8865_payload_leftMajor {
    int32_t _cr_returning_customer_sk1030;
    int32_t _cr_returning_addr_sk1033;
    int32_t _cr_return_amt_inc_tax1043;
};
struct SW_JOIN_INNER_TD_8865_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_8865_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8865_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8865_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_8865_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_8865(Table &tbl_JOIN_INNER_TD_9477_output, Table &tbl_Filter_TD_9444_output, Table &tbl_JOIN_INNER_TD_8865_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returning_addr_sk#1033 = ca_address_sk#54))
    // Left Table: ListBuffer(cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Right Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output Table: ListBuffer(cr_returning_customer_sk#1030, cr_return_amt_inc_tax#1043, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_9477_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9444_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8865_key_leftMajor, SW_JOIN_INNER_TD_8865_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9477_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returning_addr_sk1033_k = tbl_JOIN_INNER_TD_9477_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8865_key_leftMajor keyA{_cr_returning_addr_sk1033_k};
            int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_9477_output.getInt32(i, 0);
            int32_t _cr_returning_addr_sk1033 = tbl_JOIN_INNER_TD_9477_output.getInt32(i, 1);
            int32_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_9477_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8865_payload_leftMajor payloadA{_cr_returning_customer_sk1030, _cr_returning_addr_sk1033, _cr_return_amt_inc_tax1043};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9444_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9444_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8865_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returning_customer_sk1030 = (it->second)._cr_returning_customer_sk1030;
                int32_t _cr_returning_addr_sk1033 = (it->second)._cr_returning_addr_sk1033;
                int32_t _cr_return_amt_inc_tax1043 = (it->second)._cr_return_amt_inc_tax1043;
                int32_t _ca_address_sk54 = tbl_Filter_TD_9444_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_9444_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_8865_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_8865_output.setInt32(r, 1, _cr_return_amt_inc_tax1043);
                tbl_JOIN_INNER_TD_8865_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8865_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8865_key_rightMajor, SW_JOIN_INNER_TD_8865_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9444_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9444_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8865_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_9444_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_9444_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_8865_payload_rightMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9477_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returning_addr_sk1033_k = tbl_JOIN_INNER_TD_9477_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8865_key_rightMajor{_cr_returning_addr_sk1033_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_9477_output.getInt32(i, 0);
                int32_t _cr_returning_addr_sk1033 = tbl_JOIN_INNER_TD_9477_output.getInt32(i, 1);
                int32_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_9477_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8865_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                tbl_JOIN_INNER_TD_8865_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_8865_output.setInt32(r, 1, _cr_return_amt_inc_tax1043);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8865_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8865_output #Row: " << tbl_JOIN_INNER_TD_8865_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_7139_key;
struct SW_Aggregate_TD_7139_payload {
    int32_t _128666_avg_0;
    std::string _ctr_state86498818;
};
void SW_Aggregate_TD_7139(Table &tbl_Aggregate_TD_8283_output, Table &tbl_Aggregate_TD_7139_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ctr_state#8649, CheckOverflow((promote_precision(avg(ctr_total_return#8650)) * 1.200000), DecimalType(24,7), true) AS (avg(ctr_total_return) * 1.2)#8666, ctr_state#8649 AS ctr_state#8649#8818)
    // Input: ListBuffer(ctr_state#8649, ctr_total_return#8650)
    // Output: ListBuffer((avg(ctr_total_return) * 1.2)#8666, ctr_state#8649#8818)
    std::unordered_map<SW_Aggregate_TD_7139_key, SW_Aggregate_TD_7139_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_8283_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649 = tbl_Aggregate_TD_8283_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _ctr_total_return8650 = tbl_Aggregate_TD_8283_output.getInt32(i, 1);
        SW_Aggregate_TD_7139_key k = std::string(_ctr_state8649.data());
        int64_t _128666_avg_0 = _ctr_total_return8650;
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state86498818 = _ctr_state8649;
        SW_Aggregate_TD_7139_payload p{_128666_avg_0, std::string(_ctr_state86498818.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._128666_avg_0 + _128666_avg_0);
            p._128666_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ctr_state8649 not required in the output table
        int32_t _128666 = ((it.second)._128666_avg_0 / nrow1 * 1.200000);
        tbl_Aggregate_TD_7139_output.setInt32(r, 0, _128666);
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state86498818_n{};
        memcpy(_ctr_state86498818_n.data(), (it.second)._ctr_state86498818.data(), (it.second)._ctr_state86498818.length());
        tbl_Aggregate_TD_7139_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state86498818_n);
        ++r;
    }
    tbl_Aggregate_TD_7139_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7139_output #Row: " << tbl_Aggregate_TD_7139_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7861_key {
    int32_t _cr_returning_customer_sk1030;
    std::string _ca_state62;
    bool operator==(const SW_Aggregate_TD_7861_key& other) const { return (_cr_returning_customer_sk1030 == other._cr_returning_customer_sk1030) && (_ca_state62 == other._ca_state62); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7861_key> {
    std::size_t operator() (const SW_Aggregate_TD_7861_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returning_customer_sk1030)) + (hash<string>()(k._ca_state62));
    }
};
}
struct SW_Aggregate_TD_7861_payload {
    int32_t _ctr_customer_sk8648;
    std::string _ctr_state8649;
    int32_t _ctr_total_return8650_sum_0;
};
void SW_Aggregate_TD_7861(Table &tbl_JOIN_INNER_TD_8865_output, Table &tbl_Aggregate_TD_7861_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cr_returning_customer_sk#1030, ca_state#62, cr_returning_customer_sk#1030 AS ctr_customer_sk#8648, ca_state#62 AS ctr_state#8649, MakeDecimal(sum(UnscaledValue(cr_return_amt_inc_tax#1043)),17,2) AS ctr_total_return#8650)
    // Input: ListBuffer(cr_returning_customer_sk#1030, cr_return_amt_inc_tax#1043, ca_state#62)
    // Output: ListBuffer(ctr_customer_sk#8648, ctr_state#8649, ctr_total_return#8650)
    std::unordered_map<SW_Aggregate_TD_7861_key, SW_Aggregate_TD_7861_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8865_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_8865_output.getInt32(i, 0);
        int32_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_8865_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_8865_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_7861_key k{_cr_returning_customer_sk1030, std::string(_ca_state62.data())};
        int32_t _ctr_customer_sk8648 = _cr_returning_customer_sk1030;
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649 = _ca_state62;
        int64_t _ctr_total_return8650_sum_0 = _cr_return_amt_inc_tax1043;
        SW_Aggregate_TD_7861_payload p{_ctr_customer_sk8648, std::string(_ctr_state8649.data()), _ctr_total_return8650_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ctr_total_return8650_sum_0 + _ctr_total_return8650_sum_0;
            p._ctr_total_return8650_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cr_returning_customer_sk1030 not required in the output table
        // _ca_state62 not required in the output table
        tbl_Aggregate_TD_7861_output.setInt32(r, 0, (it.second)._ctr_customer_sk8648);
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649_n{};
        memcpy(_ctr_state8649_n.data(), (it.second)._ctr_state8649.data(), (it.second)._ctr_state8649.length());
        tbl_Aggregate_TD_7861_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state8649_n);
        int32_t _ctr_total_return8650 = (it.second)._ctr_total_return8650_sum_0;
        tbl_Aggregate_TD_7861_output.setInt32(r, 2, _ctr_total_return8650);
        ++r;
    }
    tbl_Aggregate_TD_7861_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7861_output #Row: " << tbl_Aggregate_TD_7861_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6192(Table &tbl_Aggregate_TD_7139_output, Table &tbl_Filter_TD_6192_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull((avg(ctr_total_return) * 1.2)#8666))
    // Input: ListBuffer((avg(ctr_total_return) * 1.2)#8666, ctr_state#8649#8818)
    // Output: ListBuffer((avg(ctr_total_return) * 1.2)#8666, ctr_state#8649#8818)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7139_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _128666 = tbl_Aggregate_TD_7139_output.getInt32(i, 0);
        if (_128666!= 0) {
            int32_t _128666_t = tbl_Aggregate_TD_7139_output.getInt32(i, 0);
            tbl_Filter_TD_6192_output.setInt32(r, 0, _128666_t);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state86498818_t = tbl_Aggregate_TD_7139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6192_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state86498818_t);
            r++;
        }
    }
    tbl_Filter_TD_6192_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6192_output #Row: " << tbl_Filter_TD_6192_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6591(Table &tbl_Aggregate_TD_7861_output, Table &tbl_Filter_TD_6591_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ctr_total_return#8650))
    // Input: ListBuffer(ctr_customer_sk#8648, ctr_state#8649, ctr_total_return#8650)
    // Output: ListBuffer(ctr_customer_sk#8648, ctr_state#8649, ctr_total_return#8650)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7861_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ctr_total_return8650 = tbl_Aggregate_TD_7861_output.getInt32(i, 2);
        if (_ctr_total_return8650!= 0) {
            int32_t _ctr_customer_sk8648_t = tbl_Aggregate_TD_7861_output.getInt32(i, 0);
            tbl_Filter_TD_6591_output.setInt32(r, 0, _ctr_customer_sk8648_t);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649_t = tbl_Aggregate_TD_7861_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6591_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state8649_t);
            int32_t _ctr_total_return8650_t = tbl_Aggregate_TD_7861_output.getInt32(i, 2);
            tbl_Filter_TD_6591_output.setInt32(r, 2, _ctr_total_return8650_t);
            r++;
        }
    }
    tbl_Filter_TD_6591_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6591_output #Row: " << tbl_Filter_TD_6591_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5889(Table &tbl_SerializeFromObject_TD_6844_input, Table &tbl_Filter_TD_5889_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6844_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_6844_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_6844_input.getInt32(i, 2);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_6844_input.getInt32(i, 0);
            tbl_Filter_TD_5889_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_t = tbl_SerializeFromObject_TD_6844_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_6844_input.getInt32(i, 2);
            tbl_Filter_TD_5889_output.setInt32(r, 2, _c_current_addr_sk4_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_t = tbl_SerializeFromObject_TD_6844_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_5889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_salutation7_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_6844_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_5889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_6844_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_5889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_5889_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5889_output #Row: " << tbl_Filter_TD_5889_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5177_key_leftMajor {
    std::string _ctr_state8649;
    bool operator==(const SW_JOIN_INNER_TD_5177_key_leftMajor& other) const {
        return ((_ctr_state8649 == other._ctr_state8649));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5177_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5177_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ctr_state8649));
    }
};
}
struct SW_JOIN_INNER_TD_5177_payload_leftMajor {
    int32_t _ctr_customer_sk8648;
    std::string _ctr_state8649;
    int32_t _ctr_total_return8650;
};
struct SW_JOIN_INNER_TD_5177_key_rightMajor {
    std::string _ctr_state86498818;
    bool operator==(const SW_JOIN_INNER_TD_5177_key_rightMajor& other) const {
        return ((_ctr_state86498818 == other._ctr_state86498818));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5177_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5177_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ctr_state86498818));
    }
};
}
struct SW_JOIN_INNER_TD_5177_payload_rightMajor {
    int32_t _128666;
    std::string _ctr_state86498818;
};
void SW_JOIN_INNER_TD_5177(Table &tbl_Filter_TD_6591_output, Table &tbl_Filter_TD_6192_output, Table &tbl_JOIN_INNER_TD_5177_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cast(ctr_total_return#8650 as decimal(24,7)) > (avg(ctr_total_return) * 1.2)#8666) AND (ctr_state#8649 = ctr_state#8649#8818)))
    // Left Table: ListBuffer(ctr_customer_sk#8648, ctr_state#8649, ctr_total_return#8650)
    // Right Table: ListBuffer((avg(ctr_total_return) * 1.2)#8666, ctr_state#8649#8818)
    // Output Table: ListBuffer(ctr_customer_sk#8648, ctr_total_return#8650)
    int left_nrow = tbl_Filter_TD_6591_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6192_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5177_key_leftMajor, SW_JOIN_INNER_TD_5177_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6591_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649_k_n = tbl_Filter_TD_6591_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state8649_k = std::string(_ctr_state8649_k_n.data());
            SW_JOIN_INNER_TD_5177_key_leftMajor keyA{_ctr_state8649_k};
            int32_t _ctr_customer_sk8648 = tbl_Filter_TD_6591_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649_n = tbl_Filter_TD_6591_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state8649 = std::string(_ctr_state8649_n.data());
            int32_t _ctr_total_return8650 = tbl_Filter_TD_6591_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5177_payload_leftMajor payloadA{_ctr_customer_sk8648, _ctr_state8649, _ctr_total_return8650};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6192_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state86498818_k_n = tbl_Filter_TD_6192_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state86498818_k = std::string(_ctr_state86498818_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5177_key_leftMajor{_ctr_state86498818_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ctr_customer_sk8648 = (it->second)._ctr_customer_sk8648;
                std::string _ctr_state8649 = (it->second)._ctr_state8649;
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649_n{};
                memcpy(_ctr_state8649_n.data(), (_ctr_state8649).data(), (_ctr_state8649).length());
                int32_t _ctr_total_return8650 = (it->second)._ctr_total_return8650;
                int32_t _128666 = tbl_Filter_TD_6192_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state86498818_n = tbl_Filter_TD_6192_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ctr_state86498818 = std::string(_ctr_state86498818_n.data());
                tbl_JOIN_INNER_TD_5177_output.setInt32(r, 0, _ctr_customer_sk8648);
                tbl_JOIN_INNER_TD_5177_output.setInt32(r, 1, _ctr_total_return8650);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5177_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5177_key_rightMajor, SW_JOIN_INNER_TD_5177_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6192_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state86498818_k_n = tbl_Filter_TD_6192_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state86498818_k = std::string(_ctr_state86498818_k_n.data());
            SW_JOIN_INNER_TD_5177_key_rightMajor keyA{_ctr_state86498818_k};
            int32_t _128666 = tbl_Filter_TD_6192_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state86498818_n = tbl_Filter_TD_6192_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state86498818 = std::string(_ctr_state86498818_n.data());
            SW_JOIN_INNER_TD_5177_payload_rightMajor payloadA{_128666, _ctr_state86498818};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6591_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649_k_n = tbl_Filter_TD_6591_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state8649_k = std::string(_ctr_state8649_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5177_key_rightMajor{_ctr_state8649_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _128666 = (it->second)._128666;
                std::string _ctr_state86498818 = (it->second)._ctr_state86498818;
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state86498818_n{};
                memcpy(_ctr_state86498818_n.data(), (_ctr_state86498818).data(), (_ctr_state86498818).length());
                int32_t _ctr_customer_sk8648 = tbl_Filter_TD_6591_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state8649_n = tbl_Filter_TD_6591_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ctr_state8649 = std::string(_ctr_state8649_n.data());
                int32_t _ctr_total_return8650 = tbl_Filter_TD_6591_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5177_output.setInt32(r, 0, _ctr_customer_sk8648);
                tbl_JOIN_INNER_TD_5177_output.setInt32(r, 1, _ctr_total_return8650);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5177_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5177_output #Row: " << tbl_JOIN_INNER_TD_5177_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4120(Table &tbl_SerializeFromObject_TD_5116_input, Table &tbl_Filter_TD_4120_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_state#8659) AND (ca_state#8659 = GA)) AND isnotnull(ca_address_sk#8651)))
    // Input: ListBuffer(ca_address_sk#8651, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663)
    // Output: ListBuffer(ca_address_sk#8651, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5116_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state8659 = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        int32_t _ca_address_sk8651 = tbl_SerializeFromObject_TD_5116_input.getInt32(i, 0);
        if ((（std::string(_isnotnullca_state8659.data()) != "NULL") && (std::string(_ca_state8659.data()) == "GA")) && (_ca_address_sk8651!= 0)) {
            int32_t _ca_address_sk8651_t = tbl_SerializeFromObject_TD_5116_input.getInt32(i, 0);
            tbl_Filter_TD_4120_output.setInt32(r, 0, _ca_address_sk8651_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number8653_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_street_number8653_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name8654_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_street_name8654_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_type8655_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_street_type8655_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number8656_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_suite_number8656_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city8657_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_city8657_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county8658_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_county8658_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state8659_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_state8659_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip8660_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_zip8660_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_country8661_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_country8661_t);
            int32_t _ca_gmt_offset8662_t = tbl_SerializeFromObject_TD_5116_input.getInt32(i, 10);
            tbl_Filter_TD_4120_output.setInt32(r, 10, _ca_gmt_offset8662_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_location_type8663_t = tbl_SerializeFromObject_TD_5116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            tbl_Filter_TD_4120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_location_type8663_t);
            r++;
        }
    }
    tbl_Filter_TD_4120_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4120_output #Row: " << tbl_Filter_TD_4120_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4823_key_leftMajor {
    int32_t _ctr_customer_sk8648;
    bool operator==(const SW_JOIN_INNER_TD_4823_key_leftMajor& other) const {
        return ((_ctr_customer_sk8648 == other._ctr_customer_sk8648));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4823_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4823_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ctr_customer_sk8648));
    }
};
}
struct SW_JOIN_INNER_TD_4823_payload_leftMajor {
    int32_t _ctr_customer_sk8648;
    int32_t _ctr_total_return8650;
};
struct SW_JOIN_INNER_TD_4823_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_4823_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4823_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4823_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_4823_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_customer_id1;
    int32_t _c_current_addr_sk4;
    std::string _c_salutation7;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_4823(Table &tbl_JOIN_INNER_TD_5177_output, Table &tbl_Filter_TD_5889_output, Table &tbl_JOIN_INNER_TD_4823_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ctr_customer_sk#8648 = c_customer_sk#0))
    // Left Table: ListBuffer(ctr_customer_sk#8648, ctr_total_return#8650)
    // Right Table: ListBuffer(c_customer_sk#0, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(ctr_total_return#8650, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    int left_nrow = tbl_JOIN_INNER_TD_5177_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5889_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4823_key_leftMajor, SW_JOIN_INNER_TD_4823_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5177_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ctr_customer_sk8648_k = tbl_JOIN_INNER_TD_5177_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4823_key_leftMajor keyA{_ctr_customer_sk8648_k};
            int32_t _ctr_customer_sk8648 = tbl_JOIN_INNER_TD_5177_output.getInt32(i, 0);
            int32_t _ctr_total_return8650 = tbl_JOIN_INNER_TD_5177_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4823_payload_leftMajor payloadA{_ctr_customer_sk8648, _ctr_total_return8650};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5889_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5889_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4823_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ctr_customer_sk8648 = (it->second)._ctr_customer_sk8648;
                int32_t _ctr_total_return8650 = (it->second)._ctr_total_return8650;
                int32_t _c_customer_sk0 = tbl_Filter_TD_5889_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_5889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_5889_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Filter_TD_5889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_salutation7 = std::string(_c_salutation7_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_4823_output.setInt32(r, 0, _ctr_total_return8650);
                tbl_JOIN_INNER_TD_4823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_4823_output.setInt32(r, 2, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_4823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_salutation7_n);
                tbl_JOIN_INNER_TD_4823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4823_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4823_key_rightMajor, SW_JOIN_INNER_TD_4823_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5889_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5889_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4823_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_5889_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_5889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_5889_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Filter_TD_5889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_salutation7 = std::string(_c_salutation7_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_4823_payload_rightMajor payloadA{_c_customer_sk0, _c_customer_id1, _c_current_addr_sk4, _c_salutation7, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5177_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ctr_customer_sk8648_k = tbl_JOIN_INNER_TD_5177_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4823_key_rightMajor{_ctr_customer_sk8648_k});
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
                int32_t _ctr_customer_sk8648 = tbl_JOIN_INNER_TD_5177_output.getInt32(i, 0);
                int32_t _ctr_total_return8650 = tbl_JOIN_INNER_TD_5177_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_4823_output.setInt32(r, 2, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_4823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_salutation7_n);
                tbl_JOIN_INNER_TD_4823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_last_name9_n);
                tbl_JOIN_INNER_TD_4823_output.setInt32(r, 0, _ctr_total_return8650);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4823_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4823_output #Row: " << tbl_JOIN_INNER_TD_4823_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3557_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_3557_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3557_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3557_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_3557_payload_leftMajor {
    int32_t _ctr_total_return8650;
    std::string _c_customer_id1;
    int32_t _c_current_addr_sk4;
    std::string _c_salutation7;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
struct SW_JOIN_INNER_TD_3557_key_rightMajor {
    int32_t _ca_address_sk8651;
    bool operator==(const SW_JOIN_INNER_TD_3557_key_rightMajor& other) const {
        return ((_ca_address_sk8651 == other._ca_address_sk8651));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3557_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3557_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk8651));
    }
};
}
struct SW_JOIN_INNER_TD_3557_payload_rightMajor {
    int32_t _ca_address_sk8651;
    std::string _ca_street_number8653;
    std::string _ca_street_name8654;
    std::string _ca_street_type8655;
    std::string _ca_suite_number8656;
    std::string _ca_city8657;
    std::string _ca_county8658;
    std::string _ca_state8659;
    std::string _ca_zip8660;
    std::string _ca_country8661;
    int32_t _ca_gmt_offset8662;
    std::string _ca_location_type8663;
};
void SW_JOIN_INNER_TD_3557(Table &tbl_JOIN_INNER_TD_4823_output, Table &tbl_Filter_TD_4120_output, Table &tbl_JOIN_INNER_TD_3557_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_address_sk#8651 = c_current_addr_sk#4))
    // Left Table: ListBuffer(ctr_total_return#8650, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    // Right Table: ListBuffer(ca_address_sk#8651, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663)
    // Output Table: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663, ctr_total_return#8650)
    int left_nrow = tbl_JOIN_INNER_TD_4823_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4120_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3557_key_leftMajor, SW_JOIN_INNER_TD_3557_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4823_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_4823_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3557_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _ctr_total_return8650 = tbl_JOIN_INNER_TD_4823_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_4823_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_4823_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_JOIN_INNER_TD_4823_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_salutation7 = std::string(_c_salutation7_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_4823_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_4823_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_3557_payload_leftMajor payloadA{_ctr_total_return8650, _c_customer_id1, _c_current_addr_sk4, _c_salutation7, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4120_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk8651_k = tbl_Filter_TD_4120_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3557_key_leftMajor{_ca_address_sk8651_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ctr_total_return8650 = (it->second)._ctr_total_return8650;
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
                int32_t _ca_address_sk8651 = tbl_Filter_TD_4120_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number8653_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_street_number8653 = std::string(_ca_street_number8653_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name8654_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_street_name8654 = std::string(_ca_street_name8654_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_type8655_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_street_type8655 = std::string(_ca_street_type8655_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number8656_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _ca_suite_number8656 = std::string(_ca_suite_number8656_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city8657_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _ca_city8657 = std::string(_ca_city8657_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_county8658_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _ca_county8658 = std::string(_ca_county8658_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state8659_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _ca_state8659 = std::string(_ca_state8659_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip8660_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _ca_zip8660 = std::string(_ca_zip8660_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_country8661_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _ca_country8661 = std::string(_ca_country8661_n.data());
                int32_t _ca_gmt_offset8662 = tbl_Filter_TD_4120_output.getInt32(i, 10);
                std::array<char, TPCDS_READ_MAX + 1> _ca_location_type8663_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _ca_location_type8663 = std::string(_ca_location_type8663_n.data());
                tbl_JOIN_INNER_TD_3557_output.setInt32(r, 15, _ctr_total_return8650);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_street_number8653_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_street_name8654_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_street_type8655_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_suite_number8656_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_city8657_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county8658_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state8659_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip8660_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_country8661_n);
                tbl_JOIN_INNER_TD_3557_output.setInt32(r, 13, _ca_gmt_offset8662);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_location_type8663_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3557_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3557_key_rightMajor, SW_JOIN_INNER_TD_3557_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4120_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk8651_k = tbl_Filter_TD_4120_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3557_key_rightMajor keyA{_ca_address_sk8651_k};
            int32_t _ca_address_sk8651 = tbl_Filter_TD_4120_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number8653_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_street_number8653 = std::string(_ca_street_number8653_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name8654_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_street_name8654 = std::string(_ca_street_name8654_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_type8655_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_street_type8655 = std::string(_ca_street_type8655_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number8656_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_suite_number8656 = std::string(_ca_suite_number8656_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city8657_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_city8657 = std::string(_ca_city8657_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_county8658_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _ca_county8658 = std::string(_ca_county8658_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state8659_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _ca_state8659 = std::string(_ca_state8659_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip8660_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _ca_zip8660 = std::string(_ca_zip8660_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_country8661_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _ca_country8661 = std::string(_ca_country8661_n.data());
            int32_t _ca_gmt_offset8662 = tbl_Filter_TD_4120_output.getInt32(i, 10);
            std::array<char, TPCDS_READ_MAX + 1> _ca_location_type8663_n = tbl_Filter_TD_4120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _ca_location_type8663 = std::string(_ca_location_type8663_n.data());
            SW_JOIN_INNER_TD_3557_payload_rightMajor payloadA{_ca_address_sk8651, _ca_street_number8653, _ca_street_name8654, _ca_street_type8655, _ca_suite_number8656, _ca_city8657, _ca_county8658, _ca_state8659, _ca_zip8660, _ca_country8661, _ca_gmt_offset8662, _ca_location_type8663};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4823_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_4823_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3557_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk8651 = (it->second)._ca_address_sk8651;
                std::string _ca_street_number8653 = (it->second)._ca_street_number8653;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number8653_n{};
                memcpy(_ca_street_number8653_n.data(), (_ca_street_number8653).data(), (_ca_street_number8653).length());
                std::string _ca_street_name8654 = (it->second)._ca_street_name8654;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name8654_n{};
                memcpy(_ca_street_name8654_n.data(), (_ca_street_name8654).data(), (_ca_street_name8654).length());
                std::string _ca_street_type8655 = (it->second)._ca_street_type8655;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_type8655_n{};
                memcpy(_ca_street_type8655_n.data(), (_ca_street_type8655).data(), (_ca_street_type8655).length());
                std::string _ca_suite_number8656 = (it->second)._ca_suite_number8656;
                std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number8656_n{};
                memcpy(_ca_suite_number8656_n.data(), (_ca_suite_number8656).data(), (_ca_suite_number8656).length());
                std::string _ca_city8657 = (it->second)._ca_city8657;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city8657_n{};
                memcpy(_ca_city8657_n.data(), (_ca_city8657).data(), (_ca_city8657).length());
                std::string _ca_county8658 = (it->second)._ca_county8658;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county8658_n{};
                memcpy(_ca_county8658_n.data(), (_ca_county8658).data(), (_ca_county8658).length());
                std::string _ca_state8659 = (it->second)._ca_state8659;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state8659_n{};
                memcpy(_ca_state8659_n.data(), (_ca_state8659).data(), (_ca_state8659).length());
                std::string _ca_zip8660 = (it->second)._ca_zip8660;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip8660_n{};
                memcpy(_ca_zip8660_n.data(), (_ca_zip8660).data(), (_ca_zip8660).length());
                std::string _ca_country8661 = (it->second)._ca_country8661;
                std::array<char, TPCDS_READ_MAX + 1> _ca_country8661_n{};
                memcpy(_ca_country8661_n.data(), (_ca_country8661).data(), (_ca_country8661).length());
                int32_t _ca_gmt_offset8662 = (it->second)._ca_gmt_offset8662;
                std::string _ca_location_type8663 = (it->second)._ca_location_type8663;
                std::array<char, TPCDS_READ_MAX + 1> _ca_location_type8663_n{};
                memcpy(_ca_location_type8663_n.data(), (_ca_location_type8663).data(), (_ca_location_type8663).length());
                int32_t _ctr_total_return8650 = tbl_JOIN_INNER_TD_4823_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_4823_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_4823_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_JOIN_INNER_TD_4823_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_salutation7 = std::string(_c_salutation7_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_4823_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_4823_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_street_number8653_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_street_name8654_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_street_type8655_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_suite_number8656_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_city8657_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county8658_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state8659_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip8660_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_country8661_n);
                tbl_JOIN_INNER_TD_3557_output.setInt32(r, 13, _ca_gmt_offset8662);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_location_type8663_n);
                tbl_JOIN_INNER_TD_3557_output.setInt32(r, 15, _ctr_total_return8650);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3557_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3557_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3557_output #Row: " << tbl_JOIN_INNER_TD_3557_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2224(Table &tbl_JOIN_INNER_TD_3557_output, Table &tbl_Sort_TD_2224_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(c_customer_id#1 ASC NULLS FIRST, c_salutation#7 ASC NULLS FIRST, c_first_name#8 ASC NULLS FIRST, c_last_name#9 ASC NULLS FIRST, ca_street_number#8653 ASC NULLS FIRST, ca_street_name#8654 ASC NULLS FIRST, ca_street_type#8655 ASC NULLS FIRST, ca_suite_number#8656 ASC NULLS FIRST, ca_city#8657 ASC NULLS FIRST, ca_county#8658 ASC NULLS FIRST, ca_state#8659 ASC NULLS FIRST, ca_zip#8660 ASC NULLS FIRST, ca_country#8661 ASC NULLS FIRST, ca_gmt_offset#8662 ASC NULLS FIRST, ca_location_type#8663 ASC NULLS FIRST, ctr_total_return#8650 ASC NULLS FIRST)
    // Input: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663, ctr_total_return#8650)
    // Output: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663, ctr_total_return#8650)
    struct SW_Sort_TD_2224Row {
        std::string _c_customer_id1;
        std::string _c_salutation7;
        std::string _c_first_name8;
        std::string _c_last_name9;
        std::string _ca_street_number8653;
        std::string _ca_street_name8654;
        std::string _ca_street_type8655;
        std::string _ca_suite_number8656;
        std::string _ca_city8657;
        std::string _ca_county8658;
        std::string _ca_state8659;
        std::string _ca_zip8660;
        std::string _ca_country8661;
        int32_t _ca_gmt_offset8662;
        std::string _ca_location_type8663;
        int32_t _ctr_total_return8650;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2224Row& a, const SW_Sort_TD_2224Row& b) const { return 
 (a._c_customer_id1 < b._c_customer_id1) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 < b._c_salutation7)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 < b._c_first_name8)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 < b._c_last_name9)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 < b._ca_street_number8653)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 < b._ca_street_name8654)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 < b._ca_street_type8655)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 == b._ca_street_type8655) && (a._ca_suite_number8656 < b._ca_suite_number8656)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 == b._ca_street_type8655) && (a._ca_suite_number8656 == b._ca_suite_number8656) && (a._ca_city8657 < b._ca_city8657)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 == b._ca_street_type8655) && (a._ca_suite_number8656 == b._ca_suite_number8656) && (a._ca_city8657 == b._ca_city8657) && (a._ca_county8658 < b._ca_county8658)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 == b._ca_street_type8655) && (a._ca_suite_number8656 == b._ca_suite_number8656) && (a._ca_city8657 == b._ca_city8657) && (a._ca_county8658 == b._ca_county8658) && (a._ca_state8659 < b._ca_state8659)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 == b._ca_street_type8655) && (a._ca_suite_number8656 == b._ca_suite_number8656) && (a._ca_city8657 == b._ca_city8657) && (a._ca_county8658 == b._ca_county8658) && (a._ca_state8659 == b._ca_state8659) && (a._ca_zip8660 < b._ca_zip8660)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 == b._ca_street_type8655) && (a._ca_suite_number8656 == b._ca_suite_number8656) && (a._ca_city8657 == b._ca_city8657) && (a._ca_county8658 == b._ca_county8658) && (a._ca_state8659 == b._ca_state8659) && (a._ca_zip8660 == b._ca_zip8660) && (a._ca_country8661 < b._ca_country8661)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 == b._ca_street_type8655) && (a._ca_suite_number8656 == b._ca_suite_number8656) && (a._ca_city8657 == b._ca_city8657) && (a._ca_county8658 == b._ca_county8658) && (a._ca_state8659 == b._ca_state8659) && (a._ca_zip8660 == b._ca_zip8660) && (a._ca_country8661 == b._ca_country8661) && (a._ca_gmt_offset8662 < b._ca_gmt_offset8662)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 == b._ca_street_type8655) && (a._ca_suite_number8656 == b._ca_suite_number8656) && (a._ca_city8657 == b._ca_city8657) && (a._ca_county8658 == b._ca_county8658) && (a._ca_state8659 == b._ca_state8659) && (a._ca_zip8660 == b._ca_zip8660) && (a._ca_country8661 == b._ca_country8661) && (a._ca_gmt_offset8662 == b._ca_gmt_offset8662) && (a._ca_location_type8663 < b._ca_location_type8663)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number8653 == b._ca_street_number8653) && (a._ca_street_name8654 == b._ca_street_name8654) && (a._ca_street_type8655 == b._ca_street_type8655) && (a._ca_suite_number8656 == b._ca_suite_number8656) && (a._ca_city8657 == b._ca_city8657) && (a._ca_county8658 == b._ca_county8658) && (a._ca_state8659 == b._ca_state8659) && (a._ca_zip8660 == b._ca_zip8660) && (a._ca_country8661 == b._ca_country8661) && (a._ca_gmt_offset8662 == b._ca_gmt_offset8662) && (a._ca_location_type8663 == b._ca_location_type8663) && (a._ctr_total_return8650 < b._ctr_total_return8650)); 
}
    }SW_Sort_TD_2224_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3557_output.getNumRow();
    std::vector<SW_Sort_TD_2224Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number8653 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name8654 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_type8655 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number8656 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city8657 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county8658 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state8659 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 10);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip8660 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 11);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country8661 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 12);
        int32_t _ca_gmt_offset8662 = tbl_JOIN_INNER_TD_3557_output.getInt32(i, 13);
        std::array<char, TPCDS_READ_MAX + 1> _ca_location_type8663 = tbl_JOIN_INNER_TD_3557_output.getcharN<char, TPCDS_READ_MAX +1>(i, 14);
        int32_t _ctr_total_return8650 = tbl_JOIN_INNER_TD_3557_output.getInt32(i, 15);
        SW_Sort_TD_2224Row t = {std::string(_c_customer_id1.data()),std::string(_c_salutation7.data()),std::string(_c_first_name8.data()),std::string(_c_last_name9.data()),std::string(_ca_street_number8653.data()),std::string(_ca_street_name8654.data()),std::string(_ca_street_type8655.data()),std::string(_ca_suite_number8656.data()),std::string(_ca_city8657.data()),std::string(_ca_county8658.data()),std::string(_ca_state8659.data()),std::string(_ca_zip8660.data()),std::string(_ca_country8661.data()),_ca_gmt_offset8662,std::string(_ca_location_type8663.data()),_ctr_total_return8650};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2224_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1{};
        memcpy(_c_customer_id1.data(), (it._c_customer_id1).data(), (it._c_customer_id1).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _c_customer_id1);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7{};
        memcpy(_c_salutation7.data(), (it._c_salutation7).data(), (it._c_salutation7).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_salutation7);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), (it._c_first_name8).data(), (it._c_first_name8).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _c_first_name8);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), (it._c_last_name9).data(), (it._c_last_name9).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number8653{};
        memcpy(_ca_street_number8653.data(), (it._ca_street_number8653).data(), (it._ca_street_number8653).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 4, _ca_street_number8653);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name8654{};
        memcpy(_ca_street_name8654.data(), (it._ca_street_name8654).data(), (it._ca_street_name8654).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 5, _ca_street_name8654);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_type8655{};
        memcpy(_ca_street_type8655.data(), (it._ca_street_type8655).data(), (it._ca_street_type8655).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 6, _ca_street_type8655);
        std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number8656{};
        memcpy(_ca_suite_number8656.data(), (it._ca_suite_number8656).data(), (it._ca_suite_number8656).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 7, _ca_suite_number8656);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city8657{};
        memcpy(_ca_city8657.data(), (it._ca_city8657).data(), (it._ca_city8657).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 8, _ca_city8657);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county8658{};
        memcpy(_ca_county8658.data(), (it._ca_county8658).data(), (it._ca_county8658).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 9, _ca_county8658);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state8659{};
        memcpy(_ca_state8659.data(), (it._ca_state8659).data(), (it._ca_state8659).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 10, _ca_state8659);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip8660{};
        memcpy(_ca_zip8660.data(), (it._ca_zip8660).data(), (it._ca_zip8660).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 11, _ca_zip8660);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country8661{};
        memcpy(_ca_country8661.data(), (it._ca_country8661).data(), (it._ca_country8661).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 12, _ca_country8661);
        tbl_Sort_TD_2224_output.setInt32(r, 13, it._ca_gmt_offset8662);
        std::array<char, TPCDS_READ_MAX + 1> _ca_location_type8663{};
        memcpy(_ca_location_type8663.data(), (it._ca_location_type8663).data(), (it._ca_location_type8663).length());
        tbl_Sort_TD_2224_output.setcharN<char, TPCDS_READ_MAX +1>(r, 14, _ca_location_type8663);
        tbl_Sort_TD_2224_output.setInt32(r, 15, it._ctr_total_return8650);
        ++r;
    }
    tbl_Sort_TD_2224_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2224_output #Row: " << tbl_Sort_TD_2224_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1349(Table &tbl_Sort_TD_2224_output, Table &tbl_LocalLimit_TD_1349_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663, ctr_total_return#8650)
    // Output: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663, ctr_total_return#8650)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number8653_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_street_number8653_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name8654_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_street_name8654_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_type8655_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_street_type8655_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number8656_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_suite_number8656_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city8657_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_city8657_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county8658_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county8658_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state8659_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state8659_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip8660_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip8660_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country8661_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_country8661_n);
        tbl_LocalLimit_TD_1349_output.setInt32(r, 13, tbl_Sort_TD_2224_output.getInt32(i, 13));
        std::array<char, TPCDS_READ_MAX + 1> _ca_location_type8663_n = tbl_Sort_TD_2224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
        tbl_LocalLimit_TD_1349_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_location_type8663_n);
        tbl_LocalLimit_TD_1349_output.setInt32(r, 15, tbl_Sort_TD_2224_output.getInt32(i, 15));
        r++;
    }
    tbl_LocalLimit_TD_1349_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1349_output #Row: " << tbl_LocalLimit_TD_1349_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0500(Table &tbl_LocalLimit_TD_1349_output, Table &tbl_GlobalLimit_TD_0500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663, ctr_total_return#8650)
    // Output: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#8653, ca_street_name#8654, ca_street_type#8655, ca_suite_number#8656, ca_city#8657, ca_county#8658, ca_state#8659, ca_zip#8660, ca_country#8661, ca_gmt_offset#8662, ca_location_type#8663, ctr_total_return#8650)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number8653_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_street_number8653_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name8654_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_street_name8654_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_type8655_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_street_type8655_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number8656_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_suite_number8656_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city8657_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_city8657_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county8658_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county8658_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state8659_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state8659_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip8660_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip8660_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country8661_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_country8661_n);
        tbl_GlobalLimit_TD_0500_output.setInt32(r, 13, tbl_LocalLimit_TD_1349_output.getInt32(i, 13));
        std::array<char, TPCDS_READ_MAX + 1> _ca_location_type8663_n = tbl_LocalLimit_TD_1349_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
        tbl_GlobalLimit_TD_0500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_location_type8663_n);
        tbl_GlobalLimit_TD_0500_output.setInt32(r, 15, tbl_LocalLimit_TD_1349_output.getInt32(i, 15));
        r++;
    }
    tbl_GlobalLimit_TD_0500_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0500_output #Row: " << tbl_GlobalLimit_TD_0500_output.getNumRow() << std::endl;
}

