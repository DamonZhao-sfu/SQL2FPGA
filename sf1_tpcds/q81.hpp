#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_11644500(Table &tbl_SerializeFromObject_TD_12996197_input, Table &tbl_Filter_TD_11644500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2000)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12996197_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12996197_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12996197_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2000)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12996197_input.getInt32(i, 0);
            tbl_Filter_TD_11644500_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11644500_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11644500_output #Row: " << tbl_Filter_TD_11644500_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11670144(Table &tbl_SerializeFromObject_TD_12107851_input, Table &tbl_Filter_TD_11670144_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_returned_date_sk#1023) AND isnotnull(cr_returning_addr_sk#1033)))
    // Input: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Output: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12107851_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_12107851_input.getInt32(i, 0);
        int32_t _cr_returning_addr_sk1033 = tbl_SerializeFromObject_TD_12107851_input.getInt32(i, 2);
        if ((_cr_returned_date_sk1023!= 0) && (_cr_returning_addr_sk1033!= 0)) {
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_12107851_input.getInt32(i, 0);
            tbl_Filter_TD_11670144_output.setInt32(r, 0, _cr_returned_date_sk1023_t);
            int32_t _cr_returning_customer_sk1030_t = tbl_SerializeFromObject_TD_12107851_input.getInt32(i, 1);
            tbl_Filter_TD_11670144_output.setInt32(r, 1, _cr_returning_customer_sk1030_t);
            int32_t _cr_returning_addr_sk1033_t = tbl_SerializeFromObject_TD_12107851_input.getInt32(i, 2);
            tbl_Filter_TD_11670144_output.setInt32(r, 2, _cr_returning_addr_sk1033_t);
            int64_t _cr_return_amt_inc_tax1043_t = tbl_SerializeFromObject_TD_12107851_input.getInt64(i, 3);
            tbl_Filter_TD_11670144_output.setInt64(r, 3, _cr_return_amt_inc_tax1043_t);
            r++;
        }
    }
    tbl_Filter_TD_11670144_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11670144_output #Row: " << tbl_Filter_TD_11670144_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10415010(Table &tbl_SerializeFromObject_TD_11534519_input, Table &tbl_Filter_TD_10415010_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_state#62)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11534519_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_11534519_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_11534519_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && (std::string(_ca_state62.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_11534519_input.getInt32(i, 0);
            tbl_Filter_TD_10415010_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_11534519_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10415010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_10415010_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10415010_output #Row: " << tbl_Filter_TD_10415010_output.getNumRow() << std::endl;
}


void SW_Filter_TD_10979076(Table &tbl_SerializeFromObject_TD_11311676_input, Table &tbl_Filter_TD_10979076_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2000)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11311676_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_11311676_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11311676_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2000)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11311676_input.getInt32(i, 0);
            tbl_Filter_TD_10979076_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_10979076_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10979076_output #Row: " << tbl_Filter_TD_10979076_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10810629(Table &tbl_SerializeFromObject_TD_11266406_input, Table &tbl_Filter_TD_10810629_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cr_returned_date_sk#1023) AND isnotnull(cr_returning_addr_sk#1033)) AND isnotnull(cr_returning_customer_sk#1030)))
    // Input: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Output: ListBuffer(cr_returned_date_sk#1023, cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11266406_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_11266406_input.getInt32(i, 0);
        int32_t _cr_returning_addr_sk1033 = tbl_SerializeFromObject_TD_11266406_input.getInt32(i, 2);
        int32_t _cr_returning_customer_sk1030 = tbl_SerializeFromObject_TD_11266406_input.getInt32(i, 1);
        if (((_cr_returned_date_sk1023!= 0) && (_cr_returning_addr_sk1033!= 0)) && (_cr_returning_customer_sk1030!= 0)) {
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_11266406_input.getInt32(i, 0);
            tbl_Filter_TD_10810629_output.setInt32(r, 0, _cr_returned_date_sk1023_t);
            int32_t _cr_returning_customer_sk1030_t = tbl_SerializeFromObject_TD_11266406_input.getInt32(i, 1);
            tbl_Filter_TD_10810629_output.setInt32(r, 1, _cr_returning_customer_sk1030_t);
            int32_t _cr_returning_addr_sk1033_t = tbl_SerializeFromObject_TD_11266406_input.getInt32(i, 2);
            tbl_Filter_TD_10810629_output.setInt32(r, 2, _cr_returning_addr_sk1033_t);
            int64_t _cr_return_amt_inc_tax1043_t = tbl_SerializeFromObject_TD_11266406_input.getInt64(i, 3);
            tbl_Filter_TD_10810629_output.setInt64(r, 3, _cr_return_amt_inc_tax1043_t);
            r++;
        }
    }
    tbl_Filter_TD_10810629_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10810629_output #Row: " << tbl_Filter_TD_10810629_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9732494_key_leftMajor {
    int32_t _cr_returning_addr_sk1033;
    bool operator==(const SW_JOIN_INNER_TD_9732494_key_leftMajor& other) const {
        return ((_cr_returning_addr_sk1033 == other._cr_returning_addr_sk1033));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9732494_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9732494_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returning_addr_sk1033));
    }
};
}
struct SW_JOIN_INNER_TD_9732494_payload_leftMajor {
    int32_t _cr_returning_customer_sk1030;
    int32_t _cr_returning_addr_sk1033;
    int64_t _cr_return_amt_inc_tax1043;
};
struct SW_JOIN_INNER_TD_9732494_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_9732494_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9732494_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9732494_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_9732494_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_9732494(Table &tbl_JOIN_INNER_TD_10451888_output, Table &tbl_Filter_TD_10415010_output, Table &tbl_JOIN_INNER_TD_9732494_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returning_addr_sk#1033 = ca_address_sk#54))
    // Left Table: ListBuffer(cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Right Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output Table: ListBuffer(cr_returning_customer_sk#1030, cr_return_amt_inc_tax#1043, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_10451888_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10415010_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9732494_key_leftMajor, SW_JOIN_INNER_TD_9732494_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10451888_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returning_addr_sk1033_k = tbl_JOIN_INNER_TD_10451888_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9732494_key_leftMajor keyA{_cr_returning_addr_sk1033_k};
            int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_10451888_output.getInt32(i, 0);
            int32_t _cr_returning_addr_sk1033 = tbl_JOIN_INNER_TD_10451888_output.getInt32(i, 1);
            int64_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_10451888_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_9732494_payload_leftMajor payloadA{_cr_returning_customer_sk1030, _cr_returning_addr_sk1033, _cr_return_amt_inc_tax1043};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10415010_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_10415010_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9732494_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returning_customer_sk1030 = (it->second)._cr_returning_customer_sk1030;
                int32_t _cr_returning_addr_sk1033 = (it->second)._cr_returning_addr_sk1033;
                int64_t _cr_return_amt_inc_tax1043 = (it->second)._cr_return_amt_inc_tax1043;
                int32_t _ca_address_sk54 = tbl_Filter_TD_10415010_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_10415010_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_9732494_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_9732494_output.setInt64(r, 1, _cr_return_amt_inc_tax1043);
                tbl_JOIN_INNER_TD_9732494_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9732494_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9732494_key_rightMajor, SW_JOIN_INNER_TD_9732494_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10415010_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_10415010_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9732494_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_10415010_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_10415010_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_9732494_payload_rightMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10451888_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returning_addr_sk1033_k = tbl_JOIN_INNER_TD_10451888_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9732494_key_rightMajor{_cr_returning_addr_sk1033_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_10451888_output.getInt32(i, 0);
                int32_t _cr_returning_addr_sk1033 = tbl_JOIN_INNER_TD_10451888_output.getInt32(i, 1);
                int64_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_10451888_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_9732494_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                tbl_JOIN_INNER_TD_9732494_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_9732494_output.setInt64(r, 1, _cr_return_amt_inc_tax1043);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9732494_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9732494_output #Row: " << tbl_JOIN_INNER_TD_9732494_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9555588(Table &tbl_SerializeFromObject_TD_10162582_input, Table &tbl_Filter_TD_9555588_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_state#62)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10162582_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_10162582_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_10162582_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && (std::string(_ca_state62.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_10162582_input.getInt32(i, 0);
            tbl_Filter_TD_9555588_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_10162582_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9555588_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_9555588_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9555588_output #Row: " << tbl_Filter_TD_9555588_output.getNumRow() << std::endl;
}


struct SW_Aggregate_TD_8544010_key {
    int32_t _cr_returning_customer_sk1030;
    std::string _ca_state62;
    bool operator==(const SW_Aggregate_TD_8544010_key& other) const { return (_cr_returning_customer_sk1030 == other._cr_returning_customer_sk1030) && (_ca_state62 == other._ca_state62); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8544010_key> {
    std::size_t operator() (const SW_Aggregate_TD_8544010_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returning_customer_sk1030)) + (hash<string>()(k._ca_state62));
    }
};
}
struct SW_Aggregate_TD_8544010_payload {
    std::string _ctr_state3546;
    int64_t _ctr_total_return3547_sum_0;
};
void SW_Aggregate_TD_8544010(Table &tbl_JOIN_INNER_TD_9732494_output, Table &tbl_Aggregate_TD_8544010_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cr_returning_customer_sk#1030, ca_state#62, ca_state#62 AS ctr_state#3546, MakeDecimal(sum(UnscaledValue(cr_return_amt_inc_tax#1043)),17,2) AS ctr_total_return#3547)
    // Input: ListBuffer(cr_returning_customer_sk#1030, cr_return_amt_inc_tax#1043, ca_state#62)
    // Output: ListBuffer(ctr_state#3546, ctr_total_return#3547)
    std::unordered_map<SW_Aggregate_TD_8544010_key, SW_Aggregate_TD_8544010_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9732494_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_9732494_output.getInt32(i, 0);
        int64_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_9732494_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_9732494_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_8544010_key k{_cr_returning_customer_sk1030, std::string(_ca_state62.data())};
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546 = _ca_state62;
        int64_t _ctr_total_return3547_sum_0 = _cr_return_amt_inc_tax1043;
        SW_Aggregate_TD_8544010_payload p{std::string(_ctr_state3546.data()), _ctr_total_return3547_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ctr_total_return3547_sum_0 + _ctr_total_return3547_sum_0;
            p._ctr_total_return3547_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cr_returning_customer_sk1030 not required in the output table
        // _ca_state62 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546_n{};
        memcpy(_ctr_state3546_n.data(), (it.second)._ctr_state3546.data(), (it.second)._ctr_state3546.length());
        tbl_Aggregate_TD_8544010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ctr_state3546_n);
        int64_t _ctr_total_return3547 = (it.second)._ctr_total_return3547_sum_0;
        tbl_Aggregate_TD_8544010_output.setInt64(r, 1, _ctr_total_return3547);
        ++r;
    }
    tbl_Aggregate_TD_8544010_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8544010_output #Row: " << tbl_Aggregate_TD_8544010_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8952324_key_leftMajor {
    int32_t _cr_returning_addr_sk1033;
    bool operator==(const SW_JOIN_INNER_TD_8952324_key_leftMajor& other) const {
        return ((_cr_returning_addr_sk1033 == other._cr_returning_addr_sk1033));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8952324_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8952324_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returning_addr_sk1033));
    }
};
}
struct SW_JOIN_INNER_TD_8952324_payload_leftMajor {
    int32_t _cr_returning_customer_sk1030;
    int32_t _cr_returning_addr_sk1033;
    int64_t _cr_return_amt_inc_tax1043;
};
struct SW_JOIN_INNER_TD_8952324_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_8952324_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8952324_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8952324_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_8952324_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_8952324(Table &tbl_JOIN_INNER_TD_9269164_output, Table &tbl_Filter_TD_9555588_output, Table &tbl_JOIN_INNER_TD_8952324_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returning_addr_sk#1033 = ca_address_sk#54))
    // Left Table: ListBuffer(cr_returning_customer_sk#1030, cr_returning_addr_sk#1033, cr_return_amt_inc_tax#1043)
    // Right Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output Table: ListBuffer(cr_returning_customer_sk#1030, cr_return_amt_inc_tax#1043, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_9269164_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9555588_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8952324_key_leftMajor, SW_JOIN_INNER_TD_8952324_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9269164_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returning_addr_sk1033_k = tbl_JOIN_INNER_TD_9269164_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8952324_key_leftMajor keyA{_cr_returning_addr_sk1033_k};
            int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_9269164_output.getInt32(i, 0);
            int32_t _cr_returning_addr_sk1033 = tbl_JOIN_INNER_TD_9269164_output.getInt32(i, 1);
            int64_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_9269164_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_8952324_payload_leftMajor payloadA{_cr_returning_customer_sk1030, _cr_returning_addr_sk1033, _cr_return_amt_inc_tax1043};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9555588_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9555588_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8952324_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returning_customer_sk1030 = (it->second)._cr_returning_customer_sk1030;
                int32_t _cr_returning_addr_sk1033 = (it->second)._cr_returning_addr_sk1033;
                int64_t _cr_return_amt_inc_tax1043 = (it->second)._cr_return_amt_inc_tax1043;
                int32_t _ca_address_sk54 = tbl_Filter_TD_9555588_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_9555588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_8952324_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_8952324_output.setInt64(r, 1, _cr_return_amt_inc_tax1043);
                tbl_JOIN_INNER_TD_8952324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8952324_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8952324_key_rightMajor, SW_JOIN_INNER_TD_8952324_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9555588_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9555588_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8952324_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_9555588_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_9555588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_8952324_payload_rightMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9269164_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returning_addr_sk1033_k = tbl_JOIN_INNER_TD_9269164_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8952324_key_rightMajor{_cr_returning_addr_sk1033_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_9269164_output.getInt32(i, 0);
                int32_t _cr_returning_addr_sk1033 = tbl_JOIN_INNER_TD_9269164_output.getInt32(i, 1);
                int64_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_9269164_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_8952324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_n);
                tbl_JOIN_INNER_TD_8952324_output.setInt32(r, 0, _cr_returning_customer_sk1030);
                tbl_JOIN_INNER_TD_8952324_output.setInt64(r, 1, _cr_return_amt_inc_tax1043);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8952324_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8952324_output #Row: " << tbl_JOIN_INNER_TD_8952324_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_7217144_key;
struct SW_Aggregate_TD_7217144_payload {
    int64_t _123563_avg_0;
    std::string _ctr_state35463715;
};
void SW_Aggregate_TD_7217144(Table &tbl_Aggregate_TD_8544010_output, Table &tbl_Aggregate_TD_7217144_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ctr_state#3546, CheckOverflow((promote_precision(avg(ctr_total_return#3547)) * 1.200000), DecimalType(24,7), true) AS (avg(ctr_total_return) * 1.2)#3563, ctr_state#3546 AS ctr_state#3546#3715)
    // Input: ListBuffer(ctr_state#3546, ctr_total_return#3547)
    // Output: ListBuffer((avg(ctr_total_return) * 1.2)#3563, ctr_state#3546#3715)
    std::unordered_map<SW_Aggregate_TD_7217144_key, SW_Aggregate_TD_7217144_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_8544010_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546 = tbl_Aggregate_TD_8544010_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int64_t _ctr_total_return3547 = tbl_Aggregate_TD_8544010_output.getInt64(i, 1);
        SW_Aggregate_TD_7217144_key k = std::string(_ctr_state3546.data());
        int64_t _123563_avg_0 = _ctr_total_return3547;
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state35463715 = _ctr_state3546;
        SW_Aggregate_TD_7217144_payload p{_123563_avg_0, std::string(_ctr_state35463715.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._123563_avg_0 + _123563_avg_0);
            p._123563_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ctr_state3546 not required in the output table
        int64_t _123563 = ((it.second)._123563_avg_0 / nrow1 * 1.200000);
        tbl_Aggregate_TD_7217144_output.setInt64(r, 0, _123563);
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state35463715_n{};
        memcpy(_ctr_state35463715_n.data(), (it.second)._ctr_state35463715.data(), (it.second)._ctr_state35463715.length());
        tbl_Aggregate_TD_7217144_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state35463715_n);
        ++r;
    }
    tbl_Aggregate_TD_7217144_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7217144_output #Row: " << tbl_Aggregate_TD_7217144_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_770700_key {
    int32_t _cr_returning_customer_sk1030;
    std::string _ca_state62;
    bool operator==(const SW_Aggregate_TD_770700_key& other) const { return (_cr_returning_customer_sk1030 == other._cr_returning_customer_sk1030) && (_ca_state62 == other._ca_state62); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_770700_key> {
    std::size_t operator() (const SW_Aggregate_TD_770700_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returning_customer_sk1030)) + (hash<string>()(k._ca_state62));
    }
};
}
struct SW_Aggregate_TD_770700_payload {
    int32_t _ctr_customer_sk3545;
    std::string _ctr_state3546;
    int64_t _ctr_total_return3547_sum_0;
};
void SW_Aggregate_TD_770700(Table &tbl_JOIN_INNER_TD_8952324_output, Table &tbl_Aggregate_TD_770700_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cr_returning_customer_sk#1030, ca_state#62, cr_returning_customer_sk#1030 AS ctr_customer_sk#3545, ca_state#62 AS ctr_state#3546, MakeDecimal(sum(UnscaledValue(cr_return_amt_inc_tax#1043)),17,2) AS ctr_total_return#3547)
    // Input: ListBuffer(cr_returning_customer_sk#1030, cr_return_amt_inc_tax#1043, ca_state#62)
    // Output: ListBuffer(ctr_customer_sk#3545, ctr_state#3546, ctr_total_return#3547)
    std::unordered_map<SW_Aggregate_TD_770700_key, SW_Aggregate_TD_770700_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8952324_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returning_customer_sk1030 = tbl_JOIN_INNER_TD_8952324_output.getInt32(i, 0);
        int64_t _cr_return_amt_inc_tax1043 = tbl_JOIN_INNER_TD_8952324_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_8952324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_770700_key k{_cr_returning_customer_sk1030, std::string(_ca_state62.data())};
        int32_t _ctr_customer_sk3545 = _cr_returning_customer_sk1030;
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546 = _ca_state62;
        int64_t _ctr_total_return3547_sum_0 = _cr_return_amt_inc_tax1043;
        SW_Aggregate_TD_770700_payload p{_ctr_customer_sk3545, std::string(_ctr_state3546.data()), _ctr_total_return3547_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ctr_total_return3547_sum_0 + _ctr_total_return3547_sum_0;
            p._ctr_total_return3547_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cr_returning_customer_sk1030 not required in the output table
        // _ca_state62 not required in the output table
        tbl_Aggregate_TD_770700_output.setInt32(r, 0, (it.second)._ctr_customer_sk3545);
        std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546_n{};
        memcpy(_ctr_state3546_n.data(), (it.second)._ctr_state3546.data(), (it.second)._ctr_state3546.length());
        tbl_Aggregate_TD_770700_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state3546_n);
        int64_t _ctr_total_return3547 = (it.second)._ctr_total_return3547_sum_0;
        tbl_Aggregate_TD_770700_output.setInt64(r, 2, _ctr_total_return3547);
        ++r;
    }
    tbl_Aggregate_TD_770700_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_770700_output #Row: " << tbl_Aggregate_TD_770700_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6616093(Table &tbl_Aggregate_TD_7217144_output, Table &tbl_Filter_TD_6616093_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull((avg(ctr_total_return) * 1.2)#3563))
    // Input: ListBuffer((avg(ctr_total_return) * 1.2)#3563, ctr_state#3546#3715)
    // Output: ListBuffer((avg(ctr_total_return) * 1.2)#3563, ctr_state#3546#3715)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7217144_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _123563 = tbl_Aggregate_TD_7217144_output.getInt64(i, 0);
        if (_123563!= 0) {
            int64_t _123563_t = tbl_Aggregate_TD_7217144_output.getInt64(i, 0);
            tbl_Filter_TD_6616093_output.setInt64(r, 0, _123563_t);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state35463715_t = tbl_Aggregate_TD_7217144_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6616093_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state35463715_t);
            r++;
        }
    }
    tbl_Filter_TD_6616093_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6616093_output #Row: " << tbl_Filter_TD_6616093_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6289706(Table &tbl_Aggregate_TD_770700_output, Table &tbl_Filter_TD_6289706_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ctr_total_return#3547))
    // Input: ListBuffer(ctr_customer_sk#3545, ctr_state#3546, ctr_total_return#3547)
    // Output: ListBuffer(ctr_customer_sk#3545, ctr_state#3546, ctr_total_return#3547)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_770700_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ctr_total_return3547 = tbl_Aggregate_TD_770700_output.getInt64(i, 2);
        if (_ctr_total_return3547!= 0) {
            int32_t _ctr_customer_sk3545_t = tbl_Aggregate_TD_770700_output.getInt32(i, 0);
            tbl_Filter_TD_6289706_output.setInt32(r, 0, _ctr_customer_sk3545_t);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546_t = tbl_Aggregate_TD_770700_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6289706_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ctr_state3546_t);
            int64_t _ctr_total_return3547_t = tbl_Aggregate_TD_770700_output.getInt64(i, 2);
            tbl_Filter_TD_6289706_output.setInt64(r, 2, _ctr_total_return3547_t);
            r++;
        }
    }
    tbl_Filter_TD_6289706_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6289706_output #Row: " << tbl_Filter_TD_6289706_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5691634(Table &tbl_SerializeFromObject_TD_6848157_input, Table &tbl_Filter_TD_5691634_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6848157_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_6848157_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_6848157_input.getInt32(i, 2);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_6848157_input.getInt32(i, 0);
            tbl_Filter_TD_5691634_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_t = tbl_SerializeFromObject_TD_6848157_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5691634_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_6848157_input.getInt32(i, 2);
            tbl_Filter_TD_5691634_output.setInt32(r, 2, _c_current_addr_sk4_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_t = tbl_SerializeFromObject_TD_6848157_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_5691634_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_salutation7_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_6848157_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_5691634_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_6848157_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_5691634_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_5691634_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5691634_output #Row: " << tbl_Filter_TD_5691634_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5473210_key_leftMajor {
    std::string _ctr_state3546;
    bool operator==(const SW_JOIN_INNER_TD_5473210_key_leftMajor& other) const {
        return ((_ctr_state3546 == other._ctr_state3546));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5473210_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5473210_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ctr_state3546));
    }
};
}
struct SW_JOIN_INNER_TD_5473210_payload_leftMajor {
    int32_t _ctr_customer_sk3545;
    std::string _ctr_state3546;
    int64_t _ctr_total_return3547;
};
struct SW_JOIN_INNER_TD_5473210_key_rightMajor {
    std::string _ctr_state35463715;
    bool operator==(const SW_JOIN_INNER_TD_5473210_key_rightMajor& other) const {
        return ((_ctr_state35463715 == other._ctr_state35463715));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5473210_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5473210_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ctr_state35463715));
    }
};
}
struct SW_JOIN_INNER_TD_5473210_payload_rightMajor {
    int64_t _123563;
    std::string _ctr_state35463715;
};
void SW_JOIN_INNER_TD_5473210(Table &tbl_Filter_TD_6289706_output, Table &tbl_Filter_TD_6616093_output, Table &tbl_JOIN_INNER_TD_5473210_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cast(ctr_total_return#3547 as decimal(24,7)) > (avg(ctr_total_return) * 1.2)#3563) AND (ctr_state#3546 = ctr_state#3546#3715)))
    // Left Table: ListBuffer(ctr_customer_sk#3545, ctr_state#3546, ctr_total_return#3547)
    // Right Table: ListBuffer((avg(ctr_total_return) * 1.2)#3563, ctr_state#3546#3715)
    // Output Table: ListBuffer(ctr_customer_sk#3545, ctr_total_return#3547)
    int left_nrow = tbl_Filter_TD_6289706_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6616093_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5473210_key_leftMajor, SW_JOIN_INNER_TD_5473210_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6289706_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546_k_n = tbl_Filter_TD_6289706_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state3546_k = std::string(_ctr_state3546_k_n.data());
            SW_JOIN_INNER_TD_5473210_key_leftMajor keyA{_ctr_state3546_k};
            int32_t _ctr_customer_sk3545 = tbl_Filter_TD_6289706_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546_n = tbl_Filter_TD_6289706_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state3546 = std::string(_ctr_state3546_n.data());
            int64_t _ctr_total_return3547 = tbl_Filter_TD_6289706_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_5473210_payload_leftMajor payloadA{_ctr_customer_sk3545, _ctr_state3546, _ctr_total_return3547};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6616093_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state35463715_k_n = tbl_Filter_TD_6616093_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state35463715_k = std::string(_ctr_state35463715_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5473210_key_leftMajor{_ctr_state35463715_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ctr_customer_sk3545 = (it->second)._ctr_customer_sk3545;
                std::string _ctr_state3546 = (it->second)._ctr_state3546;
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546_n{};
                memcpy(_ctr_state3546_n.data(), (_ctr_state3546).data(), (_ctr_state3546).length());
                int64_t _ctr_total_return3547 = (it->second)._ctr_total_return3547;
                int64_t _123563 = tbl_Filter_TD_6616093_output.getInt64(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state35463715_n = tbl_Filter_TD_6616093_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ctr_state35463715 = std::string(_ctr_state35463715_n.data());
                tbl_JOIN_INNER_TD_5473210_output.setInt32(r, 0, _ctr_customer_sk3545);
                tbl_JOIN_INNER_TD_5473210_output.setInt64(r, 1, _ctr_total_return3547);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5473210_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5473210_key_rightMajor, SW_JOIN_INNER_TD_5473210_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6616093_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state35463715_k_n = tbl_Filter_TD_6616093_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state35463715_k = std::string(_ctr_state35463715_k_n.data());
            SW_JOIN_INNER_TD_5473210_key_rightMajor keyA{_ctr_state35463715_k};
            int64_t _123563 = tbl_Filter_TD_6616093_output.getInt64(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state35463715_n = tbl_Filter_TD_6616093_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state35463715 = std::string(_ctr_state35463715_n.data());
            SW_JOIN_INNER_TD_5473210_payload_rightMajor payloadA{_123563, _ctr_state35463715};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6289706_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546_k_n = tbl_Filter_TD_6289706_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ctr_state3546_k = std::string(_ctr_state3546_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5473210_key_rightMajor{_ctr_state3546_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _123563 = (it->second)._123563;
                std::string _ctr_state35463715 = (it->second)._ctr_state35463715;
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state35463715_n{};
                memcpy(_ctr_state35463715_n.data(), (_ctr_state35463715).data(), (_ctr_state35463715).length());
                int32_t _ctr_customer_sk3545 = tbl_Filter_TD_6289706_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ctr_state3546_n = tbl_Filter_TD_6289706_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ctr_state3546 = std::string(_ctr_state3546_n.data());
                int64_t _ctr_total_return3547 = tbl_Filter_TD_6289706_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_5473210_output.setInt32(r, 0, _ctr_customer_sk3545);
                tbl_JOIN_INNER_TD_5473210_output.setInt64(r, 1, _ctr_total_return3547);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5473210_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5473210_output #Row: " << tbl_JOIN_INNER_TD_5473210_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4870184(Table &tbl_SerializeFromObject_TD_5938228_input, Table &tbl_Filter_TD_4870184_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_state#3556) AND (ca_state#3556 = GA)) AND isnotnull(ca_address_sk#3548)))
    // Input: ListBuffer(ca_address_sk#3548, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560)
    // Output: ListBuffer(ca_address_sk#3548, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5938228_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state3556 = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        int32_t _ca_address_sk3548 = tbl_SerializeFromObject_TD_5938228_input.getInt32(i, 0);
        if (((std::string(_ca_state3556.data()) != "NULL") && (std::string(_ca_state3556.data()) == "GA")) && (_ca_address_sk3548!= 0)) {
            int32_t _ca_address_sk3548_t = tbl_SerializeFromObject_TD_5938228_input.getInt32(i, 0);
            tbl_Filter_TD_4870184_output.setInt32(r, 0, _ca_address_sk3548_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number3550_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_street_number3550_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name3551_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_street_name3551_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_type3552_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_street_type3552_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number3553_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_suite_number3553_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city3554_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_city3554_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3555_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_county3555_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state3556_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_state3556_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip3557_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_zip3557_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_country3558_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_country3558_t);
            int64_t _ca_gmt_offset3559_t = tbl_SerializeFromObject_TD_5938228_input.getInt64(i, 10);
            tbl_Filter_TD_4870184_output.setInt64(r, 10, _ca_gmt_offset3559_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_location_type3560_t = tbl_SerializeFromObject_TD_5938228_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            tbl_Filter_TD_4870184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_location_type3560_t);
            r++;
        }
    }
    tbl_Filter_TD_4870184_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4870184_output #Row: " << tbl_Filter_TD_4870184_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_41150_key_leftMajor {
    int32_t _ctr_customer_sk3545;
    bool operator==(const SW_JOIN_INNER_TD_41150_key_leftMajor& other) const {
        return ((_ctr_customer_sk3545 == other._ctr_customer_sk3545));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_41150_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_41150_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ctr_customer_sk3545));
    }
};
}
struct SW_JOIN_INNER_TD_41150_payload_leftMajor {
    int32_t _ctr_customer_sk3545;
    int64_t _ctr_total_return3547;
};
struct SW_JOIN_INNER_TD_41150_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_41150_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_41150_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_41150_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_41150_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_customer_id1;
    int32_t _c_current_addr_sk4;
    std::string _c_salutation7;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_41150(Table &tbl_JOIN_INNER_TD_5473210_output, Table &tbl_Filter_TD_5691634_output, Table &tbl_JOIN_INNER_TD_41150_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ctr_customer_sk#3545 = c_customer_sk#0))
    // Left Table: ListBuffer(ctr_customer_sk#3545, ctr_total_return#3547)
    // Right Table: ListBuffer(c_customer_sk#0, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(ctr_total_return#3547, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    int left_nrow = tbl_JOIN_INNER_TD_5473210_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5691634_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_41150_key_leftMajor, SW_JOIN_INNER_TD_41150_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5473210_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ctr_customer_sk3545_k = tbl_JOIN_INNER_TD_5473210_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_41150_key_leftMajor keyA{_ctr_customer_sk3545_k};
            int32_t _ctr_customer_sk3545 = tbl_JOIN_INNER_TD_5473210_output.getInt32(i, 0);
            int64_t _ctr_total_return3547 = tbl_JOIN_INNER_TD_5473210_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_41150_payload_leftMajor payloadA{_ctr_customer_sk3545, _ctr_total_return3547};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5691634_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5691634_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_41150_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ctr_customer_sk3545 = (it->second)._ctr_customer_sk3545;
                int64_t _ctr_total_return3547 = (it->second)._ctr_total_return3547;
                int32_t _c_customer_sk0 = tbl_Filter_TD_5691634_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_5691634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_5691634_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Filter_TD_5691634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_salutation7 = std::string(_c_salutation7_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5691634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5691634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_41150_output.setInt64(r, 0, _ctr_total_return3547);
                tbl_JOIN_INNER_TD_41150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_41150_output.setInt32(r, 2, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_41150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_salutation7_n);
                tbl_JOIN_INNER_TD_41150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_first_name8_n);
                tbl_JOIN_INNER_TD_41150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_41150_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_41150_key_rightMajor, SW_JOIN_INNER_TD_41150_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5691634_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5691634_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_41150_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_5691634_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_5691634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_5691634_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Filter_TD_5691634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_salutation7 = std::string(_c_salutation7_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5691634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5691634_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_41150_payload_rightMajor payloadA{_c_customer_sk0, _c_customer_id1, _c_current_addr_sk4, _c_salutation7, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5473210_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ctr_customer_sk3545_k = tbl_JOIN_INNER_TD_5473210_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_41150_key_rightMajor{_ctr_customer_sk3545_k});
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
                int32_t _ctr_customer_sk3545 = tbl_JOIN_INNER_TD_5473210_output.getInt32(i, 0);
                int64_t _ctr_total_return3547 = tbl_JOIN_INNER_TD_5473210_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_41150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_41150_output.setInt32(r, 2, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_41150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_salutation7_n);
                tbl_JOIN_INNER_TD_41150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_first_name8_n);
                tbl_JOIN_INNER_TD_41150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_last_name9_n);
                tbl_JOIN_INNER_TD_41150_output.setInt64(r, 0, _ctr_total_return3547);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_41150_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_41150_output #Row: " << tbl_JOIN_INNER_TD_41150_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3200214_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_3200214_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3200214_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3200214_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_3200214_payload_leftMajor {
    int64_t _ctr_total_return3547;
    std::string _c_customer_id1;
    int32_t _c_current_addr_sk4;
    std::string _c_salutation7;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
struct SW_JOIN_INNER_TD_3200214_key_rightMajor {
    int32_t _ca_address_sk3548;
    bool operator==(const SW_JOIN_INNER_TD_3200214_key_rightMajor& other) const {
        return ((_ca_address_sk3548 == other._ca_address_sk3548));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3200214_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3200214_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk3548));
    }
};
}
struct SW_JOIN_INNER_TD_3200214_payload_rightMajor {
    int32_t _ca_address_sk3548;
    std::string _ca_street_number3550;
    std::string _ca_street_name3551;
    std::string _ca_street_type3552;
    std::string _ca_suite_number3553;
    std::string _ca_city3554;
    std::string _ca_county3555;
    std::string _ca_state3556;
    std::string _ca_zip3557;
    std::string _ca_country3558;
    int64_t _ca_gmt_offset3559;
    std::string _ca_location_type3560;
};
void SW_JOIN_INNER_TD_3200214(Table &tbl_JOIN_INNER_TD_41150_output, Table &tbl_Filter_TD_4870184_output, Table &tbl_JOIN_INNER_TD_3200214_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_address_sk#3548 = c_current_addr_sk#4))
    // Left Table: ListBuffer(ctr_total_return#3547, c_customer_id#1, c_current_addr_sk#4, c_salutation#7, c_first_name#8, c_last_name#9)
    // Right Table: ListBuffer(ca_address_sk#3548, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560)
    // Output Table: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560, ctr_total_return#3547)
    int left_nrow = tbl_JOIN_INNER_TD_41150_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4870184_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3200214_key_leftMajor, SW_JOIN_INNER_TD_3200214_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_41150_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_41150_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3200214_key_leftMajor keyA{_c_current_addr_sk4_k};
            int64_t _ctr_total_return3547 = tbl_JOIN_INNER_TD_41150_output.getInt64(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_41150_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_41150_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_JOIN_INNER_TD_41150_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_salutation7 = std::string(_c_salutation7_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_41150_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_41150_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_3200214_payload_leftMajor payloadA{_ctr_total_return3547, _c_customer_id1, _c_current_addr_sk4, _c_salutation7, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4870184_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk3548_k = tbl_Filter_TD_4870184_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3200214_key_leftMajor{_ca_address_sk3548_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ctr_total_return3547 = (it->second)._ctr_total_return3547;
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
                int32_t _ca_address_sk3548 = tbl_Filter_TD_4870184_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number3550_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_street_number3550 = std::string(_ca_street_number3550_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name3551_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_street_name3551 = std::string(_ca_street_name3551_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_type3552_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_street_type3552 = std::string(_ca_street_type3552_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number3553_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _ca_suite_number3553 = std::string(_ca_suite_number3553_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city3554_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _ca_city3554 = std::string(_ca_city3554_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3555_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _ca_county3555 = std::string(_ca_county3555_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state3556_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _ca_state3556 = std::string(_ca_state3556_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip3557_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _ca_zip3557 = std::string(_ca_zip3557_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_country3558_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _ca_country3558 = std::string(_ca_country3558_n.data());
                int64_t _ca_gmt_offset3559 = tbl_Filter_TD_4870184_output.getInt64(i, 10);
                std::array<char, TPCDS_READ_MAX + 1> _ca_location_type3560_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _ca_location_type3560 = std::string(_ca_location_type3560_n.data());
                tbl_JOIN_INNER_TD_3200214_output.setInt64(r, 15, _ctr_total_return3547);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_street_number3550_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_street_name3551_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_street_type3552_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_suite_number3553_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_city3554_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county3555_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state3556_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip3557_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_country3558_n);
                tbl_JOIN_INNER_TD_3200214_output.setInt64(r, 13, _ca_gmt_offset3559);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_location_type3560_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3200214_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3200214_key_rightMajor, SW_JOIN_INNER_TD_3200214_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4870184_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk3548_k = tbl_Filter_TD_4870184_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3200214_key_rightMajor keyA{_ca_address_sk3548_k};
            int32_t _ca_address_sk3548 = tbl_Filter_TD_4870184_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number3550_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_street_number3550 = std::string(_ca_street_number3550_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name3551_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_street_name3551 = std::string(_ca_street_name3551_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_type3552_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_street_type3552 = std::string(_ca_street_type3552_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number3553_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_suite_number3553 = std::string(_ca_suite_number3553_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city3554_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_city3554 = std::string(_ca_city3554_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3555_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _ca_county3555 = std::string(_ca_county3555_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state3556_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _ca_state3556 = std::string(_ca_state3556_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip3557_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _ca_zip3557 = std::string(_ca_zip3557_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_country3558_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _ca_country3558 = std::string(_ca_country3558_n.data());
            int64_t _ca_gmt_offset3559 = tbl_Filter_TD_4870184_output.getInt64(i, 10);
            std::array<char, TPCDS_READ_MAX + 1> _ca_location_type3560_n = tbl_Filter_TD_4870184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _ca_location_type3560 = std::string(_ca_location_type3560_n.data());
            SW_JOIN_INNER_TD_3200214_payload_rightMajor payloadA{_ca_address_sk3548, _ca_street_number3550, _ca_street_name3551, _ca_street_type3552, _ca_suite_number3553, _ca_city3554, _ca_county3555, _ca_state3556, _ca_zip3557, _ca_country3558, _ca_gmt_offset3559, _ca_location_type3560};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_41150_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_41150_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3200214_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk3548 = (it->second)._ca_address_sk3548;
                std::string _ca_street_number3550 = (it->second)._ca_street_number3550;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number3550_n{};
                memcpy(_ca_street_number3550_n.data(), (_ca_street_number3550).data(), (_ca_street_number3550).length());
                std::string _ca_street_name3551 = (it->second)._ca_street_name3551;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name3551_n{};
                memcpy(_ca_street_name3551_n.data(), (_ca_street_name3551).data(), (_ca_street_name3551).length());
                std::string _ca_street_type3552 = (it->second)._ca_street_type3552;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_type3552_n{};
                memcpy(_ca_street_type3552_n.data(), (_ca_street_type3552).data(), (_ca_street_type3552).length());
                std::string _ca_suite_number3553 = (it->second)._ca_suite_number3553;
                std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number3553_n{};
                memcpy(_ca_suite_number3553_n.data(), (_ca_suite_number3553).data(), (_ca_suite_number3553).length());
                std::string _ca_city3554 = (it->second)._ca_city3554;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city3554_n{};
                memcpy(_ca_city3554_n.data(), (_ca_city3554).data(), (_ca_city3554).length());
                std::string _ca_county3555 = (it->second)._ca_county3555;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3555_n{};
                memcpy(_ca_county3555_n.data(), (_ca_county3555).data(), (_ca_county3555).length());
                std::string _ca_state3556 = (it->second)._ca_state3556;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state3556_n{};
                memcpy(_ca_state3556_n.data(), (_ca_state3556).data(), (_ca_state3556).length());
                std::string _ca_zip3557 = (it->second)._ca_zip3557;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip3557_n{};
                memcpy(_ca_zip3557_n.data(), (_ca_zip3557).data(), (_ca_zip3557).length());
                std::string _ca_country3558 = (it->second)._ca_country3558;
                std::array<char, TPCDS_READ_MAX + 1> _ca_country3558_n{};
                memcpy(_ca_country3558_n.data(), (_ca_country3558).data(), (_ca_country3558).length());
                int64_t _ca_gmt_offset3559 = (it->second)._ca_gmt_offset3559;
                std::string _ca_location_type3560 = (it->second)._ca_location_type3560;
                std::array<char, TPCDS_READ_MAX + 1> _ca_location_type3560_n{};
                memcpy(_ca_location_type3560_n.data(), (_ca_location_type3560).data(), (_ca_location_type3560).length());
                int64_t _ctr_total_return3547 = tbl_JOIN_INNER_TD_41150_output.getInt64(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_41150_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_41150_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_JOIN_INNER_TD_41150_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_salutation7 = std::string(_c_salutation7_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_41150_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_41150_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_street_number3550_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_street_name3551_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_street_type3552_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_suite_number3553_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_city3554_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county3555_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state3556_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip3557_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_country3558_n);
                tbl_JOIN_INNER_TD_3200214_output.setInt64(r, 13, _ca_gmt_offset3559);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_location_type3560_n);
                tbl_JOIN_INNER_TD_3200214_output.setInt64(r, 15, _ctr_total_return3547);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3200214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3200214_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3200214_output #Row: " << tbl_JOIN_INNER_TD_3200214_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2231489(Table &tbl_JOIN_INNER_TD_3200214_output, Table &tbl_Sort_TD_2231489_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(c_customer_id#1 ASC NULLS FIRST, c_salutation#7 ASC NULLS FIRST, c_first_name#8 ASC NULLS FIRST, c_last_name#9 ASC NULLS FIRST, ca_street_number#3550 ASC NULLS FIRST, ca_street_name#3551 ASC NULLS FIRST, ca_street_type#3552 ASC NULLS FIRST, ca_suite_number#3553 ASC NULLS FIRST, ca_city#3554 ASC NULLS FIRST, ca_county#3555 ASC NULLS FIRST, ca_state#3556 ASC NULLS FIRST, ca_zip#3557 ASC NULLS FIRST, ca_country#3558 ASC NULLS FIRST, ca_gmt_offset#3559 ASC NULLS FIRST, ca_location_type#3560 ASC NULLS FIRST, ctr_total_return#3547 ASC NULLS FIRST)
    // Input: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560, ctr_total_return#3547)
    // Output: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560, ctr_total_return#3547)
    struct SW_Sort_TD_2231489Row {
        std::string _c_customer_id1;
        std::string _c_salutation7;
        std::string _c_first_name8;
        std::string _c_last_name9;
        std::string _ca_street_number3550;
        std::string _ca_street_name3551;
        std::string _ca_street_type3552;
        std::string _ca_suite_number3553;
        std::string _ca_city3554;
        std::string _ca_county3555;
        std::string _ca_state3556;
        std::string _ca_zip3557;
        std::string _ca_country3558;
        int64_t _ca_gmt_offset3559;
        std::string _ca_location_type3560;
        int64_t _ctr_total_return3547;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2231489Row& a, const SW_Sort_TD_2231489Row& b) const { return 
 (a._c_customer_id1 < b._c_customer_id1) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 < b._c_salutation7)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 < b._c_first_name8)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 < b._c_last_name9)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 < b._ca_street_number3550)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 < b._ca_street_name3551)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 < b._ca_street_type3552)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 == b._ca_street_type3552) && (a._ca_suite_number3553 < b._ca_suite_number3553)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 == b._ca_street_type3552) && (a._ca_suite_number3553 == b._ca_suite_number3553) && (a._ca_city3554 < b._ca_city3554)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 == b._ca_street_type3552) && (a._ca_suite_number3553 == b._ca_suite_number3553) && (a._ca_city3554 == b._ca_city3554) && (a._ca_county3555 < b._ca_county3555)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 == b._ca_street_type3552) && (a._ca_suite_number3553 == b._ca_suite_number3553) && (a._ca_city3554 == b._ca_city3554) && (a._ca_county3555 == b._ca_county3555) && (a._ca_state3556 < b._ca_state3556)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 == b._ca_street_type3552) && (a._ca_suite_number3553 == b._ca_suite_number3553) && (a._ca_city3554 == b._ca_city3554) && (a._ca_county3555 == b._ca_county3555) && (a._ca_state3556 == b._ca_state3556) && (a._ca_zip3557 < b._ca_zip3557)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 == b._ca_street_type3552) && (a._ca_suite_number3553 == b._ca_suite_number3553) && (a._ca_city3554 == b._ca_city3554) && (a._ca_county3555 == b._ca_county3555) && (a._ca_state3556 == b._ca_state3556) && (a._ca_zip3557 == b._ca_zip3557) && (a._ca_country3558 < b._ca_country3558)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 == b._ca_street_type3552) && (a._ca_suite_number3553 == b._ca_suite_number3553) && (a._ca_city3554 == b._ca_city3554) && (a._ca_county3555 == b._ca_county3555) && (a._ca_state3556 == b._ca_state3556) && (a._ca_zip3557 == b._ca_zip3557) && (a._ca_country3558 == b._ca_country3558) && (a._ca_gmt_offset3559 < b._ca_gmt_offset3559)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 == b._ca_street_type3552) && (a._ca_suite_number3553 == b._ca_suite_number3553) && (a._ca_city3554 == b._ca_city3554) && (a._ca_county3555 == b._ca_county3555) && (a._ca_state3556 == b._ca_state3556) && (a._ca_zip3557 == b._ca_zip3557) && (a._ca_country3558 == b._ca_country3558) && (a._ca_gmt_offset3559 == b._ca_gmt_offset3559) && (a._ca_location_type3560 < b._ca_location_type3560)) || 
 ((a._c_customer_id1 == b._c_customer_id1) && (a._c_salutation7 == b._c_salutation7) && (a._c_first_name8 == b._c_first_name8) && (a._c_last_name9 == b._c_last_name9) && (a._ca_street_number3550 == b._ca_street_number3550) && (a._ca_street_name3551 == b._ca_street_name3551) && (a._ca_street_type3552 == b._ca_street_type3552) && (a._ca_suite_number3553 == b._ca_suite_number3553) && (a._ca_city3554 == b._ca_city3554) && (a._ca_county3555 == b._ca_county3555) && (a._ca_state3556 == b._ca_state3556) && (a._ca_zip3557 == b._ca_zip3557) && (a._ca_country3558 == b._ca_country3558) && (a._ca_gmt_offset3559 == b._ca_gmt_offset3559) && (a._ca_location_type3560 == b._ca_location_type3560) && (a._ctr_total_return3547 < b._ctr_total_return3547)); 
}
    }SW_Sort_TD_2231489_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3200214_output.getNumRow();
    std::vector<SW_Sort_TD_2231489Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number3550 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name3551 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_type3552 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number3553 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city3554 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county3555 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state3556 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 10);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip3557 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 11);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country3558 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 12);
        int64_t _ca_gmt_offset3559 = tbl_JOIN_INNER_TD_3200214_output.getInt64(i, 13);
        std::array<char, TPCDS_READ_MAX + 1> _ca_location_type3560 = tbl_JOIN_INNER_TD_3200214_output.getcharN<char, TPCDS_READ_MAX +1>(i, 14);
        int64_t _ctr_total_return3547 = tbl_JOIN_INNER_TD_3200214_output.getInt64(i, 15);
        SW_Sort_TD_2231489Row t = {std::string(_c_customer_id1.data()),std::string(_c_salutation7.data()),std::string(_c_first_name8.data()),std::string(_c_last_name9.data()),std::string(_ca_street_number3550.data()),std::string(_ca_street_name3551.data()),std::string(_ca_street_type3552.data()),std::string(_ca_suite_number3553.data()),std::string(_ca_city3554.data()),std::string(_ca_county3555.data()),std::string(_ca_state3556.data()),std::string(_ca_zip3557.data()),std::string(_ca_country3558.data()),_ca_gmt_offset3559,std::string(_ca_location_type3560.data()),_ctr_total_return3547};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2231489_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1{};
        memcpy(_c_customer_id1.data(), (it._c_customer_id1).data(), (it._c_customer_id1).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _c_customer_id1);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7{};
        memcpy(_c_salutation7.data(), (it._c_salutation7).data(), (it._c_salutation7).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_salutation7);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), (it._c_first_name8).data(), (it._c_first_name8).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _c_first_name8);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), (it._c_last_name9).data(), (it._c_last_name9).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number3550{};
        memcpy(_ca_street_number3550.data(), (it._ca_street_number3550).data(), (it._ca_street_number3550).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 4, _ca_street_number3550);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name3551{};
        memcpy(_ca_street_name3551.data(), (it._ca_street_name3551).data(), (it._ca_street_name3551).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 5, _ca_street_name3551);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_type3552{};
        memcpy(_ca_street_type3552.data(), (it._ca_street_type3552).data(), (it._ca_street_type3552).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 6, _ca_street_type3552);
        std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number3553{};
        memcpy(_ca_suite_number3553.data(), (it._ca_suite_number3553).data(), (it._ca_suite_number3553).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 7, _ca_suite_number3553);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city3554{};
        memcpy(_ca_city3554.data(), (it._ca_city3554).data(), (it._ca_city3554).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 8, _ca_city3554);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county3555{};
        memcpy(_ca_county3555.data(), (it._ca_county3555).data(), (it._ca_county3555).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 9, _ca_county3555);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state3556{};
        memcpy(_ca_state3556.data(), (it._ca_state3556).data(), (it._ca_state3556).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 10, _ca_state3556);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip3557{};
        memcpy(_ca_zip3557.data(), (it._ca_zip3557).data(), (it._ca_zip3557).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 11, _ca_zip3557);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country3558{};
        memcpy(_ca_country3558.data(), (it._ca_country3558).data(), (it._ca_country3558).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 12, _ca_country3558);
        tbl_Sort_TD_2231489_output.setInt64(r, 13, it._ca_gmt_offset3559);
        std::array<char, TPCDS_READ_MAX + 1> _ca_location_type3560{};
        memcpy(_ca_location_type3560.data(), (it._ca_location_type3560).data(), (it._ca_location_type3560).length());
        tbl_Sort_TD_2231489_output.setcharN<char, TPCDS_READ_MAX +1>(r, 14, _ca_location_type3560);
        tbl_Sort_TD_2231489_output.setInt64(r, 15, it._ctr_total_return3547);
        ++r;
    }
    tbl_Sort_TD_2231489_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2231489_output #Row: " << tbl_Sort_TD_2231489_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1875280(Table &tbl_Sort_TD_2231489_output, Table &tbl_LocalLimit_TD_1875280_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560, ctr_total_return#3547)
    // Output: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560, ctr_total_return#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number3550_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_street_number3550_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name3551_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_street_name3551_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_type3552_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_street_type3552_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number3553_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_suite_number3553_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city3554_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_city3554_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county3555_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county3555_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state3556_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state3556_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip3557_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip3557_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country3558_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_country3558_n);
        tbl_LocalLimit_TD_1875280_output.setInt64(r, 13, tbl_Sort_TD_2231489_output.getInt64(i, 13));
        std::array<char, TPCDS_READ_MAX + 1> _ca_location_type3560_n = tbl_Sort_TD_2231489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
        tbl_LocalLimit_TD_1875280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_location_type3560_n);
        tbl_LocalLimit_TD_1875280_output.setInt64(r, 15, tbl_Sort_TD_2231489_output.getInt64(i, 15));
        r++;
    }
    tbl_LocalLimit_TD_1875280_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1875280_output #Row: " << tbl_LocalLimit_TD_1875280_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0184923(Table &tbl_LocalLimit_TD_1875280_output, Table &tbl_GlobalLimit_TD_0184923_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560, ctr_total_return#3547)
    // Output: ListBuffer(c_customer_id#1, c_salutation#7, c_first_name#8, c_last_name#9, ca_street_number#3550, ca_street_name#3551, ca_street_type#3552, ca_suite_number#3553, ca_city#3554, ca_county#3555, ca_state#3556, ca_zip#3557, ca_country#3558, ca_gmt_offset#3559, ca_location_type#3560, ctr_total_return#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number3550_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_street_number3550_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name3551_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_street_name3551_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_type3552_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_street_type3552_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_suite_number3553_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _ca_suite_number3553_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city3554_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_city3554_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county3555_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county3555_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state3556_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state3556_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip3557_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip3557_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country3558_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_country3558_n);
        tbl_GlobalLimit_TD_0184923_output.setInt64(r, 13, tbl_LocalLimit_TD_1875280_output.getInt64(i, 13));
        std::array<char, TPCDS_READ_MAX + 1> _ca_location_type3560_n = tbl_LocalLimit_TD_1875280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
        tbl_GlobalLimit_TD_0184923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_location_type3560_n);
        tbl_GlobalLimit_TD_0184923_output.setInt64(r, 15, tbl_LocalLimit_TD_1875280_output.getInt64(i, 15));
        r++;
    }
    tbl_GlobalLimit_TD_0184923_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0184923_output #Row: " << tbl_GlobalLimit_TD_0184923_output.getNumRow() << std::endl;
}

