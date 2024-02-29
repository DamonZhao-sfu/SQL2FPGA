#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_780665(Table &tbl_SerializeFromObject_TD_8993535_input, Table &tbl_Filter_TD_780665_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_category#9118))
    // Input: ListBuffer(i_current_price#9111, i_category#9118)
    // Output: ListBuffer(i_current_price#9111, i_category#9118)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8993535_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9118 = tbl_SerializeFromObject_TD_8993535_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if _i_category9118.data() != "NULL" {
            int64_t _i_current_price9111_t = tbl_SerializeFromObject_TD_8993535_input.getInt64(i, 0);
            tbl_Filter_TD_780665_output.setInt64(r, 0, _i_current_price9111_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category9118_t = tbl_SerializeFromObject_TD_8993535_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_780665_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9118_t);
            r++;
        }
    }
    tbl_Filter_TD_780665_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_780665_output #Row: " << tbl_Filter_TD_780665_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7835507(Table &tbl_SerializeFromObject_TD_8979836_input, Table &tbl_Filter_TD_7835507_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#9084) AND isnotnull(d_moy#9086)) AND ((d_year#9084 = 2001) AND (d_moy#9086 = 1))))
    // Input: ListBuffer(d_month_seq#9081, d_year#9084, d_moy#9086)
    // Output: ListBuffer(d_month_seq#9081)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8979836_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year9084 = tbl_SerializeFromObject_TD_8979836_input.getInt32(i, 1);
        int32_t _d_moy9086 = tbl_SerializeFromObject_TD_8979836_input.getInt32(i, 2);
        if (((_d_year9084!= 0) && (_d_moy9086!= 0)) && ((_d_year9084 == 2001) && (_d_moy9086 == 1))) {
            int32_t _d_month_seq9081_t = tbl_SerializeFromObject_TD_8979836_input.getInt32(i, 0);
            tbl_Filter_TD_7835507_output.setInt32(r, 0, _d_month_seq9081_t);
            r++;
        }
    }
    tbl_Filter_TD_7835507_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7835507_output #Row: " << tbl_Filter_TD_7835507_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7438911(Table &tbl_SerializeFromObject_TD_8540550_input, Table &tbl_Filter_TD_7438911_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_current_addr_sk#4) AND isnotnull(c_customer_sk#0)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8540550_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_8540550_input.getInt32(i, 1);
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_8540550_input.getInt32(i, 0);
        if ((_c_current_addr_sk4!= 0) && (_c_customer_sk0!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_8540550_input.getInt32(i, 0);
            tbl_Filter_TD_7438911_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_8540550_input.getInt32(i, 1);
            tbl_Filter_TD_7438911_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_7438911_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7438911_output #Row: " << tbl_Filter_TD_7438911_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7817519(Table &tbl_SerializeFromObject_TD_8980163_input, Table &tbl_Filter_TD_7817519_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#54))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8980163_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_8980163_input.getInt32(i, 0);
        if (_ca_address_sk54!= 0) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_8980163_input.getInt32(i, 0);
            tbl_Filter_TD_7817519_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_8980163_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7817519_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_7817519_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7817519_output #Row: " << tbl_Filter_TD_7817519_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6540010_key;
struct SW_Aggregate_TD_6540010_payload {
    int64_t _avgi_current_price9077_avg_0;
};
void SW_Aggregate_TD_6540010(Table &tbl_Filter_TD_780665_output, Table &tbl_Aggregate_TD_6540010_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#9118, cast((avg(UnscaledValue(i_current_price#9111)) / 100.0) as decimal(11,6)) AS avg(i_current_price)#9077)
    // Input: ListBuffer(i_current_price#9111, i_category#9118)
    // Output: ListBuffer(avg(i_current_price)#9077, i_category#9118)
    std::unordered_map<SW_Aggregate_TD_6540010_key, SW_Aggregate_TD_6540010_payload> ht1;
    int nrow1 = tbl_Filter_TD_780665_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _i_current_price9111 = tbl_Filter_TD_780665_output.getInt64(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9118 = tbl_Filter_TD_780665_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_6540010_key k = std::string(_i_category9118.data());
        int64_t _avgi_current_price9077_avg_0 = _i_current_price9111;
        SW_Aggregate_TD_6540010_payload p{_avgi_current_price9077_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._avgi_current_price9077_avg_0 + _avgi_current_price9077_avg_0);
            p._avgi_current_price9077_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9118{};
        memcpy(_i_category9118.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_6540010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9118);
        int64_t _avgi_current_price9077 = ((it.second)._avgi_current_price9077_avg_0 / nrow1 / 100.0);
        tbl_Aggregate_TD_6540010_output.setInt64(r, 0, _avgi_current_price9077);
        ++r;
    }
    tbl_Aggregate_TD_6540010_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6540010_output #Row: " << tbl_Aggregate_TD_6540010_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6507229(Table &tbl_SerializeFromObject_TD_7874910_input, Table &tbl_Filter_TD_6507229_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_current_price#233) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_current_price#233, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7874910_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _i_current_price233 = tbl_SerializeFromObject_TD_7874910_input.getInt64(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7874910_input.getInt32(i, 0);
        if ((_i_current_price233!= 0) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7874910_input.getInt32(i, 0);
            tbl_Filter_TD_6507229_output.setInt32(r, 0, _i_item_sk228_t);
            int64_t _i_current_price233_t = tbl_SerializeFromObject_TD_7874910_input.getInt64(i, 1);
            tbl_Filter_TD_6507229_output.setInt64(r, 1, _i_current_price233_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_7874910_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6507229_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_6507229_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6507229_output #Row: " << tbl_Filter_TD_6507229_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_6943873_consolidate(Table &tbl_Aggregate_TD_6943873_output_preprocess, Table &tbl_Aggregate_TD_6943873_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_6943873_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _d_month_seq9081 = tbl_Aggregate_TD_6943873_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_6943873_output.setInt32(r, 0, _d_month_seq9081);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_6943873_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_6943873_output #Row: " << tbl_Aggregate_TD_6943873_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6398187(Table &tbl_SerializeFromObject_TD_77027_input, Table &tbl_Filter_TD_6398187_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_77027_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_77027_input.getInt32(i, 2);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_77027_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_77027_input.getInt32(i, 1);
        if ((_ss_customer_sk1209!= 0) && ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_77027_input.getInt32(i, 0);
            tbl_Filter_TD_6398187_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_77027_input.getInt32(i, 1);
            tbl_Filter_TD_6398187_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_77027_input.getInt32(i, 2);
            tbl_Filter_TD_6398187_output.setInt32(r, 2, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_6398187_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6398187_output #Row: " << tbl_Filter_TD_6398187_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6977083_key_leftMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_6977083_key_leftMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6977083_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6977083_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_6977083_payload_leftMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
struct SW_JOIN_INNER_TD_6977083_key_rightMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_6977083_key_rightMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6977083_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6977083_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_6977083_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
void SW_JOIN_INNER_TD_6977083(Table &tbl_Filter_TD_7817519_output, Table &tbl_Filter_TD_7438911_output, Table &tbl_JOIN_INNER_TD_6977083_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_address_sk#54 = c_current_addr_sk#4))
    // Left Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output Table: ListBuffer(ca_state#62, c_customer_sk#0)
    int left_nrow = tbl_Filter_TD_7817519_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7438911_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6977083_key_leftMajor, SW_JOIN_INNER_TD_6977083_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7817519_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7817519_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6977083_key_leftMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_7817519_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_7817519_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_6977083_payload_leftMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7438911_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_7438911_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6977083_key_leftMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _c_customer_sk0 = tbl_Filter_TD_7438911_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_7438911_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6977083_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_6977083_output.setInt32(r, 1, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6977083_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6977083_key_rightMajor, SW_JOIN_INNER_TD_6977083_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7438911_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_7438911_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6977083_key_rightMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_7438911_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_7438911_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6977083_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7817519_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7817519_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6977083_key_rightMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_7817519_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_7817519_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_6977083_output.setInt32(r, 1, _c_customer_sk0);
                tbl_JOIN_INNER_TD_6977083_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6977083_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6977083_output #Row: " << tbl_JOIN_INNER_TD_6977083_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_5163955_key {
    std::string _i_category9118;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_5163955_key& other) const {
        return ((_i_category9118 == other._i_category9118));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_5163955_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_5163955_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category9118));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_5163955_payload {
    int64_t _avgi_current_price9077;
    std::string _i_category9118;
};
void SW_JOIN_LEFTOUTER_TD_5163955(Table &tbl_Filter_TD_6507229_output, Table &tbl_Aggregate_TD_6540010_output, Table &tbl_JOIN_LEFTOUTER_TD_5163955_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((i_category#9118 = i_category#240))
    // Left Table: ListBuffer(i_item_sk#228, i_current_price#233, i_category#240)
    // Right Table: ListBuffer(avg(i_current_price)#9077, i_category#9118)
    // Output Table: ListBuffer(i_item_sk#228, i_current_price#233, avg(i_current_price)#9077)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_5163955_key, SW_JOIN_LEFTOUTER_TD_5163955_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_6540010_output.getNumRow();
    int nrow2 = tbl_Filter_TD_6507229_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9118_k_n = tbl_Aggregate_TD_6540010_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::string _i_category9118_k = std::string(_i_category9118_k_n.data());
        SW_JOIN_LEFTOUTER_TD_5163955_key keyA{_i_category9118_k};
        int64_t _avgi_current_price9077 = tbl_Aggregate_TD_6540010_output.getInt64(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9118_n = tbl_Aggregate_TD_6540010_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::string _i_category9118 = std::string(_i_category9118_n.data());
        SW_JOIN_LEFTOUTER_TD_5163955_payload payloadA{_avgi_current_price9077, _i_category9118};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6507229_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::string _i_category240_k = std::string(_i_category240_k_n.data());
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_5163955_key{_i_category240_k});
        int32_t _i_item_sk228 = tbl_Filter_TD_6507229_output.getInt32(i, 0);
        int64_t _i_current_price233 = tbl_Filter_TD_6507229_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_6507229_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_5163955_key{_i_category240_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int64_t _avgi_current_price9077 = (it_it->second)._avgi_current_price9077;
                std::string _i_category9118_n = (it_it->second)._i_category9118;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9118{};
                memcpy(_i_category9118.data(), (_i_category9118_n).data(), (_i_category9118_n).length());
                tbl_JOIN_LEFTOUTER_TD_5163955_output.setInt64(r, 2, _avgi_current_price9077);
                tbl_JOIN_LEFTOUTER_TD_5163955_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_LEFTOUTER_TD_5163955_output.setInt64(r, 1, _i_current_price233);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_5163955_output.setInt32(r, 0, _i_item_sk228);
            tbl_JOIN_LEFTOUTER_TD_5163955_output.setInt64(r, 1, _i_current_price233);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_5163955_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_5163955_output #Row: " << tbl_JOIN_LEFTOUTER_TD_5163955_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5686869(Table &tbl_SerializeFromObject_TD_6923675_input, Table &tbl_Aggregate_TD_6943873_output, Table &tbl_Filter_TD_5686869_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND (d_month_seq#123 = scalar-subquery#9073 [])) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6923675_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_6923675_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_6923675_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && isElementExistsInTable(tbl_Aggregate_TD_6943873_output,_d_month_seq123)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_6923675_input.getInt32(i, 0);
            tbl_Filter_TD_5686869_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_5686869_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5686869_output #Row: " << tbl_Filter_TD_5686869_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5608880_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_5608880_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5608880_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5608880_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_5608880_payload_leftMajor {
    std::string _ca_state62;
    int32_t _c_customer_sk0;
};
struct SW_JOIN_INNER_TD_5608880_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_5608880_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5608880_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5608880_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_5608880_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
};
void SW_JOIN_INNER_TD_5608880(Table &tbl_JOIN_INNER_TD_6977083_output, Table &tbl_Filter_TD_6398187_output, Table &tbl_JOIN_INNER_TD_5608880_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(ca_state#62, c_customer_sk#0)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Output Table: ListBuffer(ca_state#62, ss_sold_date_sk#1206, ss_item_sk#1208)
    int left_nrow = tbl_JOIN_INNER_TD_6977083_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6398187_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5608880_key_leftMajor, SW_JOIN_INNER_TD_5608880_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6977083_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_JOIN_INNER_TD_6977083_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5608880_key_leftMajor keyA{_c_customer_sk0_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_6977083_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_6977083_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5608880_payload_leftMajor payloadA{_ca_state62, _c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6398187_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_6398187_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5608880_key_leftMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6398187_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_6398187_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_6398187_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5608880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_5608880_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_5608880_output.setInt32(r, 2, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5608880_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5608880_key_rightMajor, SW_JOIN_INNER_TD_5608880_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6398187_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_6398187_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5608880_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6398187_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_6398187_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_6398187_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5608880_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6977083_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_JOIN_INNER_TD_6977083_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5608880_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_6977083_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_6977083_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5608880_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_5608880_output.setInt32(r, 2, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5608880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5608880_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5608880_output #Row: " << tbl_JOIN_INNER_TD_5608880_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4658420(Table &tbl_JOIN_LEFTOUTER_TD_5163955_output, Table &tbl_Filter_TD_4658420_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cast(i_current_price#233 as decimal(14,7)) > CheckOverflow((1.200000 * promote_precision(avg(i_current_price)#9077)), DecimalType(14,7), true)))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233, avg(i_current_price)#9077)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_5163955_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _i_current_price233 = tbl_JOIN_LEFTOUTER_TD_5163955_output.getInt64(i, 1);
        int64_t _avgi_current_price9077 = tbl_JOIN_LEFTOUTER_TD_5163955_output.getInt64(i, 2);
        if (_i_current_price233 > (1.200000 * _avgi_current_price9077)) {
            int32_t _i_item_sk228_t = tbl_JOIN_LEFTOUTER_TD_5163955_output.getInt32(i, 0);
            tbl_Filter_TD_4658420_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_4658420_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4658420_output #Row: " << tbl_Filter_TD_4658420_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4941537_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_4941537_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4941537_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4941537_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_4941537_payload_leftMajor {
    std::string _ca_state62;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_4941537_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_4941537_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4941537_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4941537_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_4941537_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_4941537(Table &tbl_JOIN_INNER_TD_5608880_output, Table &tbl_Filter_TD_5686869_output, Table &tbl_JOIN_INNER_TD_4941537_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ca_state#62, ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ca_state#62, ss_item_sk#1208)
    int left_nrow = tbl_JOIN_INNER_TD_5608880_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5686869_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4941537_key_leftMajor, SW_JOIN_INNER_TD_4941537_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5608880_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_5608880_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4941537_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_5608880_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_5608880_output.getInt32(i, 1);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5608880_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_4941537_payload_leftMajor payloadA{_ca_state62, _ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5686869_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5686869_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4941537_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _d_date_sk120 = tbl_Filter_TD_5686869_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4941537_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_4941537_output.setInt32(r, 1, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4941537_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4941537_key_rightMajor, SW_JOIN_INNER_TD_4941537_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5686869_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5686869_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4941537_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_5686869_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4941537_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5608880_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_5608880_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4941537_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_5608880_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_5608880_output.getInt32(i, 1);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5608880_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_4941537_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_4941537_output.setInt32(r, 1, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4941537_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4941537_output #Row: " << tbl_JOIN_INNER_TD_4941537_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3672842_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_3672842_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3672842_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3672842_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_3672842_payload_leftMajor {
    std::string _ca_state62;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_3672842_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_3672842_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3672842_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3672842_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_3672842_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_3672842(Table &tbl_JOIN_INNER_TD_4941537_output, Table &tbl_Filter_TD_4658420_output, Table &tbl_JOIN_INNER_TD_3672842_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ca_state#62, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_4941537_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4658420_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3672842_key_leftMajor, SW_JOIN_INNER_TD_3672842_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4941537_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_4941537_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3672842_key_leftMajor keyA{_ss_item_sk1208_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_4941537_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_4941537_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3672842_payload_leftMajor payloadA{_ca_state62, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4658420_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4658420_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3672842_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk228 = tbl_Filter_TD_4658420_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3672842_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3672842_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3672842_key_rightMajor, SW_JOIN_INNER_TD_3672842_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4658420_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4658420_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3672842_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_4658420_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3672842_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4941537_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_4941537_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3672842_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_4941537_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_4941537_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3672842_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3672842_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3672842_output #Row: " << tbl_JOIN_INNER_TD_3672842_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_242625_key;
struct SW_Aggregate_TD_242625_payload {
    std::string _state9071;
    int64_t _cnt9072L_count_0;
};
void SW_Aggregate_TD_242625(Table &tbl_JOIN_INNER_TD_3672842_output, Table &tbl_Aggregate_TD_242625_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_state#62, ca_state#62 AS state#9071, count(1) AS cnt#9072L)
    // Input: ListBuffer(ca_state#62)
    // Output: ListBuffer(state#9071, cnt#9072L)
    std::unordered_map<SW_Aggregate_TD_242625_key, SW_Aggregate_TD_242625_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_3672842_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_3672842_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        SW_Aggregate_TD_242625_key k = std::string(_ca_state62.data());
        std::array<char, TPCDS_READ_MAX + 1> _state9071 = _ca_state62;
        int64_t _cnt9072L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_242625_payload p{std::string(_state9071.data()), _cnt9072L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt9072L_count_0 + _cnt9072L_count_0;
            p._cnt9072L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ca_state62 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _state9071_n{};
        memcpy(_state9071_n.data(), (it.second)._state9071.data(), (it.second)._state9071.length());
        tbl_Aggregate_TD_242625_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _state9071_n);
        int64_t _cnt9072L = (it.second)._cnt9072L_count_0;
        tbl_Aggregate_TD_242625_output.setInt64(r, 1, _cnt9072L);
        ++r;
    }
    tbl_Aggregate_TD_242625_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_242625_output #Row: " << tbl_Aggregate_TD_242625_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1689814(Table &tbl_Aggregate_TD_242625_output, Table &tbl_Filter_TD_1689814_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cnt#9072L >= 10))
    // Input: ListBuffer(state#9071, cnt#9072L)
    // Output: ListBuffer(state#9071, cnt#9072L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_242625_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cnt9072L = tbl_Aggregate_TD_242625_output.getInt64(i, 1);
        if (_cnt9072L >= 10) {
            std::array<char, TPCDS_READ_MAX + 1> _state9071_t = tbl_Aggregate_TD_242625_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_1689814_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _state9071_t);
            int64_t _cnt9072L_t = tbl_Aggregate_TD_242625_output.getInt64(i, 1);
            tbl_Filter_TD_1689814_output.setInt64(r, 1, _cnt9072L_t);
            r++;
        }
    }
    tbl_Filter_TD_1689814_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1689814_output #Row: " << tbl_Filter_TD_1689814_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0284552(Table &tbl_Filter_TD_1689814_output, Table &tbl_Sort_TD_0284552_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cnt#9072L ASC NULLS FIRST)
    // Input: ListBuffer(state#9071, cnt#9072L)
    // Output: ListBuffer(state#9071, cnt#9072L)
    struct SW_Sort_TD_0284552Row {
        std::string _state9071;
        int64_t _cnt9072L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0284552Row& a, const SW_Sort_TD_0284552Row& b) const { return 
 (a._cnt9072L < b._cnt9072L); 
}
    }SW_Sort_TD_0284552_order; 

    int nrow1 = tbl_Filter_TD_1689814_output.getNumRow();
    std::vector<SW_Sort_TD_0284552Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _state9071 = tbl_Filter_TD_1689814_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int64_t _cnt9072L = tbl_Filter_TD_1689814_output.getInt64(i, 1);
        SW_Sort_TD_0284552Row t = {std::string(_state9071.data()),_cnt9072L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0284552_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _state9071{};
        memcpy(_state9071.data(), (it._state9071).data(), (it._state9071).length());
        tbl_Sort_TD_0284552_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _state9071);
        tbl_Sort_TD_0284552_output.setInt64(r, 1, it._cnt9072L);
        if (r < 10) {
            std::cout << (it._state9071).data() << " " << it._cnt9072L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0284552_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0284552_output #Row: " << tbl_Sort_TD_0284552_output.getNumRow() << std::endl;
}

