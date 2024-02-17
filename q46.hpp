#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10931(Table &tbl_SerializeFromObject_TD_11908_input, Table &tbl_Filter_TD_10931_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((d_dow#127 IN (6,0) AND d_year#126 IN (1999,2000,2001)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_dow#127, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11908_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_dow127 = tbl_SerializeFromObject_TD_11908_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_11908_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11908_input.getInt32(i, 0);
        auto reuse_col_str_532 = _d_dow127;
        auto reuse_col_str_162 = _d_year126;
        if ((((reuse_col_str_532 == 6) || (reuse_col_str_532 == 0) || (0)) && ((reuse_col_str_162 == 1999) || (reuse_col_str_162 == 2000) || (reuse_col_str_162 == 2001) || (0))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11908_input.getInt32(i, 0);
            tbl_Filter_TD_10931_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_10931_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10931_output #Row: " << tbl_Filter_TD_10931_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10597(Table &tbl_SerializeFromObject_TD_11154_input, Table &tbl_Filter_TD_10597_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)) AND ((isnotnull(ss_hdemo_sk#1211) AND isnotnull(ss_addr_sk#1212)) AND isnotnull(ss_customer_sk#1209))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11154_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 4);
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 2);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 3);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 1);
        if (((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) && (((_ss_hdemo_sk1211!= 0) && (_ss_addr_sk1212!= 0)) && (_ss_customer_sk1209!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 0);
            tbl_Filter_TD_10597_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 1);
            tbl_Filter_TD_10597_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 2);
            tbl_Filter_TD_10597_output.setInt32(r, 2, _ss_hdemo_sk1211_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 3);
            tbl_Filter_TD_10597_output.setInt32(r, 3, _ss_addr_sk1212_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 4);
            tbl_Filter_TD_10597_output.setInt32(r, 4, _ss_store_sk1213_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_11154_input.getInt64(i, 5);
            tbl_Filter_TD_10597_output.setInt64(r, 5, _ss_ticket_number1215L_t);
            int32_t _ss_coupon_amt1225_t = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 6);
            tbl_Filter_TD_10597_output.setInt32(r, 6, _ss_coupon_amt1225_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_11154_input.getInt32(i, 7);
            tbl_Filter_TD_10597_output.setInt32(r, 7, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_10597_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10597_output #Row: " << tbl_Filter_TD_10597_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9653(Table &tbl_SerializeFromObject_TD_10107_input, Table &tbl_Filter_TD_9653_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((s_city#400 IN (Fairview,Midway) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_city#400)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10107_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_city400 = tbl_SerializeFromObject_TD_10107_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_10107_input.getInt32(i, 0);
        auto reuse_col_str_55 = std::string(_s_city400.data());
        if (((reuse_col_str_55 == "Fairview") || (reuse_col_str_55 == "Midway") || (0)) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_10107_input.getInt32(i, 0);
            tbl_Filter_TD_9653_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_9653_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9653_output #Row: " << tbl_Filter_TD_9653_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9767_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_9767_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9767_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9767_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_9767_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_coupon_amt1225;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_9767_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_9767_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9767_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9767_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_9767_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_9767(Table &tbl_Filter_TD_10597_output, Table &tbl_Filter_TD_10931_output, Table &tbl_JOIN_INNER_TD_9767_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    int left_nrow = tbl_Filter_TD_10597_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10931_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9767_key_leftMajor, SW_JOIN_INNER_TD_9767_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10597_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10597_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9767_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10597_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_10597_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_10597_output.getInt32(i, 2);
            int32_t _ss_addr_sk1212 = tbl_Filter_TD_10597_output.getInt32(i, 3);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_10597_output.getInt32(i, 4);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_10597_output.getInt64(i, 5);
            int32_t _ss_coupon_amt1225 = tbl_Filter_TD_10597_output.getInt32(i, 6);
            int32_t _ss_net_profit1228 = tbl_Filter_TD_10597_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_9767_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_ticket_number1215L, _ss_coupon_amt1225, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10931_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10931_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9767_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _d_date_sk120 = tbl_Filter_TD_10931_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9767_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 5, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 6, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9767_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9767_key_rightMajor, SW_JOIN_INNER_TD_9767_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10931_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10931_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9767_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_10931_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9767_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10597_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10597_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9767_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10597_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_10597_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_10597_output.getInt32(i, 2);
                int32_t _ss_addr_sk1212 = tbl_Filter_TD_10597_output.getInt32(i, 3);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_10597_output.getInt32(i, 4);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_10597_output.getInt64(i, 5);
                int32_t _ss_coupon_amt1225 = tbl_Filter_TD_10597_output.getInt32(i, 6);
                int32_t _ss_net_profit1228 = tbl_Filter_TD_10597_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9767_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 5, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_9767_output.setInt32(r, 6, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9767_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9767_output #Row: " << tbl_JOIN_INNER_TD_9767_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8736(Table &tbl_SerializeFromObject_TD_9142_input, Table &tbl_Filter_TD_8736_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((hd_dep_count#207 = 4) OR (hd_vehicle_count#208 = 3)) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_dep_count#207, hd_vehicle_count#208)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9142_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_9142_input.getInt32(i, 1);
        int32_t _hd_vehicle_count208 = tbl_SerializeFromObject_TD_9142_input.getInt32(i, 2);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_9142_input.getInt32(i, 0);
        if (((_hd_dep_count207 == 4) || (_hd_vehicle_count208 == 3)) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_9142_input.getInt32(i, 0);
            tbl_Filter_TD_8736_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_8736_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8736_output #Row: " << tbl_Filter_TD_8736_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8212_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_8212_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8212_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8212_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_8212_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_coupon_amt1225;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_8212_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_8212_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8212_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8212_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_8212_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_8212(Table &tbl_JOIN_INNER_TD_9767_output, Table &tbl_Filter_TD_9653_output, Table &tbl_JOIN_INNER_TD_8212_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    int left_nrow = tbl_JOIN_INNER_TD_9767_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9653_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8212_key_leftMajor, SW_JOIN_INNER_TD_8212_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9767_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8212_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 3);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_9767_output.getInt64(i, 4);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 5);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_8212_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_ticket_number1215L, _ss_coupon_amt1225, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9653_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_9653_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8212_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _s_store_sk378 = tbl_Filter_TD_9653_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8212_output.setInt64(r, 3, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 5, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8212_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8212_key_rightMajor, SW_JOIN_INNER_TD_8212_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9653_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_9653_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8212_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_9653_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8212_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9767_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8212_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 3);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_9767_output.getInt64(i, 4);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 5);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9767_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8212_output.setInt64(r, 3, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_8212_output.setInt32(r, 5, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8212_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8212_output #Row: " << tbl_JOIN_INNER_TD_8212_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7506(Table &tbl_SerializeFromObject_TD_8199_input, Table &tbl_Filter_TD_7506_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_city#60)))
    // Input: ListBuffer(ca_address_sk#54, ca_city#60)
    // Output: ListBuffer(ca_address_sk#54, ca_city#60)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8199_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_8199_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60 = tbl_SerializeFromObject_TD_8199_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && （std::string(_isnotnullca_city60.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_8199_input.getInt32(i, 0);
            tbl_Filter_TD_7506_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_t = tbl_SerializeFromObject_TD_8199_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7506_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60_t);
            r++;
        }
    }
    tbl_Filter_TD_7506_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7506_output #Row: " << tbl_Filter_TD_7506_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7274_key_leftMajor {
    int32_t _ss_hdemo_sk1211;
    bool operator==(const SW_JOIN_INNER_TD_7274_key_leftMajor& other) const {
        return ((_ss_hdemo_sk1211 == other._ss_hdemo_sk1211));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7274_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7274_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk1211));
    }
};
}
struct SW_JOIN_INNER_TD_7274_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_coupon_amt1225;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_7274_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_7274_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7274_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7274_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_7274_payload_rightMajor {
    int32_t _hd_demo_sk204;
};
void SW_JOIN_INNER_TD_7274(Table &tbl_JOIN_INNER_TD_8212_output, Table &tbl_Filter_TD_8736_output, Table &tbl_JOIN_INNER_TD_7274_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#1211 = hd_demo_sk#204))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    // Right Table: ListBuffer(hd_demo_sk#204)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    int left_nrow = tbl_JOIN_INNER_TD_8212_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8736_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7274_key_leftMajor, SW_JOIN_INNER_TD_7274_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8212_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7274_key_leftMajor keyA{_ss_hdemo_sk1211_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 2);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_8212_output.getInt64(i, 3);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 4);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_7274_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_ticket_number1215L, _ss_coupon_amt1225, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8736_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_8736_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7274_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _hd_demo_sk204 = tbl_Filter_TD_8736_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7274_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7274_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_7274_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_7274_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_7274_output.setInt32(r, 4, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7274_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7274_key_rightMajor, SW_JOIN_INNER_TD_7274_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8736_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_8736_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7274_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_8736_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7274_payload_rightMajor payloadA{_hd_demo_sk204};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8212_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7274_key_rightMajor{_ss_hdemo_sk1211_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 2);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_8212_output.getInt64(i, 3);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 4);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8212_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_7274_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7274_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_7274_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_7274_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_7274_output.setInt32(r, 4, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7274_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7274_output #Row: " << tbl_JOIN_INNER_TD_7274_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6917_key_leftMajor {
    int32_t _ss_addr_sk1212;
    bool operator==(const SW_JOIN_INNER_TD_6917_key_leftMajor& other) const {
        return ((_ss_addr_sk1212 == other._ss_addr_sk1212));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6917_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6917_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk1212));
    }
};
}
struct SW_JOIN_INNER_TD_6917_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_addr_sk1212;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_coupon_amt1225;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_6917_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_6917_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6917_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6917_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_6917_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_city60;
};
void SW_JOIN_INNER_TD_6917(Table &tbl_JOIN_INNER_TD_7274_output, Table &tbl_Filter_TD_7506_output, Table &tbl_JOIN_INNER_TD_6917_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#1212 = ca_address_sk#54))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    // Right Table: ListBuffer(ca_address_sk#54, ca_city#60)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228, ca_city#60)
    int left_nrow = tbl_JOIN_INNER_TD_7274_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7506_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6917_key_leftMajor, SW_JOIN_INNER_TD_6917_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7274_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6917_key_leftMajor keyA{_ss_addr_sk1212_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 0);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_7274_output.getInt64(i, 2);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 3);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_6917_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_addr_sk1212, _ss_ticket_number1215L, _ss_coupon_amt1225, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7506_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7506_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6917_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _ca_address_sk54 = tbl_Filter_TD_7506_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_Filter_TD_7506_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_6917_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 4, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_6917_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_city60_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6917_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6917_key_rightMajor, SW_JOIN_INNER_TD_6917_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7506_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7506_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6917_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_7506_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_Filter_TD_7506_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            SW_JOIN_INNER_TD_6917_payload_rightMajor payloadA{_ca_address_sk54, _ca_city60};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7274_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6917_key_rightMajor{_ss_addr_sk1212_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 0);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 1);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_7274_output.getInt64(i, 2);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 3);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_7274_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_6917_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_city60_n);
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_6917_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 4, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6917_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6917_output #Row: " << tbl_JOIN_INNER_TD_6917_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5833(Table &tbl_SerializeFromObject_TD_6156_input, Table &tbl_Filter_TD_5833_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6156_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_6156_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_6156_input.getInt32(i, 1);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_6156_input.getInt32(i, 0);
            tbl_Filter_TD_5833_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_6156_input.getInt32(i, 1);
            tbl_Filter_TD_5833_output.setInt32(r, 1, _c_current_addr_sk4_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_6156_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5833_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_6156_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_5833_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_5833_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5833_output #Row: " << tbl_Filter_TD_5833_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5253_key {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_customer_sk1209;
    int32_t _ss_addr_sk1212;
    std::string _ca_city60;
    bool operator==(const SW_Aggregate_TD_5253_key& other) const { return (_ss_ticket_number1215L == other._ss_ticket_number1215L) && (_ss_customer_sk1209 == other._ss_customer_sk1209) && (_ss_addr_sk1212 == other._ss_addr_sk1212) && (_ca_city60 == other._ca_city60); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5253_key> {
    std::size_t operator() (const SW_Aggregate_TD_5253_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ss_ticket_number1215L)) + (hash<int32_t>()(k._ss_customer_sk1209)) + (hash<int32_t>()(k._ss_addr_sk1212)) + (hash<string>()(k._ca_city60));
    }
};
}
struct SW_Aggregate_TD_5253_payload {
    std::string _bought_city5167;
    int32_t _amt5168_sum_0;
    int32_t _profit5169_sum_1;
};
void SW_Aggregate_TD_5253(Table &tbl_JOIN_INNER_TD_6917_output, Table &tbl_Aggregate_TD_5253_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, ss_addr_sk#1212, ca_city#60, ca_city#60 AS bought_city#5167, MakeDecimal(sum(UnscaledValue(ss_coupon_amt#1225)),17,2) AS amt#5168, MakeDecimal(sum(UnscaledValue(ss_net_profit#1228)),17,2) AS profit#5169)
    // Input: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228, ca_city#60)
    // Output: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, bought_city#5167, amt#5168, profit#5169)
    std::unordered_map<SW_Aggregate_TD_5253_key, SW_Aggregate_TD_5253_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6917_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6917_output.getInt32(i, 0);
        int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_6917_output.getInt32(i, 1);
        int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_6917_output.getInt64(i, 2);
        int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_6917_output.getInt32(i, 3);
        int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_6917_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60 = tbl_JOIN_INNER_TD_6917_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_5253_key k{_ss_ticket_number1215L, _ss_customer_sk1209, _ss_addr_sk1212, std::string(_ca_city60.data())};
        std::array<char, TPCDS_READ_MAX + 1> _bought_city5167 = _ca_city60;
        int64_t _amt5168_sum_0 = _ss_coupon_amt1225;
        int64_t _profit5169_sum_1 = _ss_net_profit1228;
        SW_Aggregate_TD_5253_payload p{std::string(_bought_city5167.data()), _amt5168_sum_0, _profit5169_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._amt5168_sum_0 + _amt5168_sum_0;
            p._amt5168_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._profit5169_sum_1 + _profit5169_sum_1;
            p._profit5169_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5253_output.setInt64(r, 0, (it.first)._ss_ticket_number1215L);
        tbl_Aggregate_TD_5253_output.setInt32(r, 1, (it.first)._ss_customer_sk1209);
        // _ss_addr_sk1212 not required in the output table
        // _ca_city60 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_n{};
        memcpy(_bought_city5167_n.data(), (it.second)._bought_city5167.data(), (it.second)._bought_city5167.length());
        tbl_Aggregate_TD_5253_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _bought_city5167_n);
        int32_t _amt5168 = (it.second)._amt5168_sum_0;
        tbl_Aggregate_TD_5253_output.setInt32(r, 3, _amt5168);
        int32_t _profit5169 = (it.second)._profit5169_sum_1;
        tbl_Aggregate_TD_5253_output.setInt32(r, 4, _profit5169);
        ++r;
    }
    tbl_Aggregate_TD_5253_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5253_output #Row: " << tbl_Aggregate_TD_5253_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4313(Table &tbl_SerializeFromObject_TD_5893_input, Table &tbl_Filter_TD_4313_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#5170) AND isnotnull(ca_city#5176)))
    // Input: ListBuffer(ca_address_sk#5170, ca_city#5176)
    // Output: ListBuffer(ca_address_sk#5170, ca_city#5176)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5893_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk5170 = tbl_SerializeFromObject_TD_5893_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city5176 = tbl_SerializeFromObject_TD_5893_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk5170!= 0) && （std::string(_isnotnullca_city5176.data()) != "NULL")) {
            int32_t _ca_address_sk5170_t = tbl_SerializeFromObject_TD_5893_input.getInt32(i, 0);
            tbl_Filter_TD_4313_output.setInt32(r, 0, _ca_address_sk5170_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city5176_t = tbl_SerializeFromObject_TD_5893_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_4313_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city5176_t);
            r++;
        }
    }
    tbl_Filter_TD_4313_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4313_output #Row: " << tbl_Filter_TD_4313_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_443_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_443_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_443_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_443_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_443_payload_leftMajor {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_customer_sk1209;
    std::string _bought_city5167;
    int32_t _amt5168;
    int32_t _profit5169;
};
struct SW_JOIN_INNER_TD_443_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_443_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_443_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_443_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_443_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_443(Table &tbl_Aggregate_TD_5253_output, Table &tbl_Filter_TD_5833_output, Table &tbl_JOIN_INNER_TD_443_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, bought_city#5167, amt#5168, profit#5169)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(ss_ticket_number#1215L, bought_city#5167, amt#5168, profit#5169, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    int left_nrow = tbl_Aggregate_TD_5253_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5833_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_443_key_leftMajor, SW_JOIN_INNER_TD_443_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5253_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Aggregate_TD_5253_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_443_key_leftMajor keyA{_ss_customer_sk1209_k};
            int64_t _ss_ticket_number1215L = tbl_Aggregate_TD_5253_output.getInt64(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Aggregate_TD_5253_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_n = tbl_Aggregate_TD_5253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _bought_city5167 = std::string(_bought_city5167_n.data());
            int32_t _amt5168 = tbl_Aggregate_TD_5253_output.getInt32(i, 3);
            int32_t _profit5169 = tbl_Aggregate_TD_5253_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_443_payload_leftMajor payloadA{_ss_ticket_number1215L, _ss_customer_sk1209, _bought_city5167, _amt5168, _profit5169};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5833_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5833_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_443_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                std::string _bought_city5167 = (it->second)._bought_city5167;
                std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_n{};
                memcpy(_bought_city5167_n.data(), (_bought_city5167).data(), (_bought_city5167).length());
                int32_t _amt5168 = (it->second)._amt5168;
                int32_t _profit5169 = (it->second)._profit5169;
                int32_t _c_customer_sk0 = tbl_Filter_TD_5833_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_5833_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5833_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5833_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_443_output.setInt64(r, 0, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_443_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _bought_city5167_n);
                tbl_JOIN_INNER_TD_443_output.setInt32(r, 2, _amt5168);
                tbl_JOIN_INNER_TD_443_output.setInt32(r, 3, _profit5169);
                tbl_JOIN_INNER_TD_443_output.setInt32(r, 4, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_443_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_first_name8_n);
                tbl_JOIN_INNER_TD_443_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_443_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_443_key_rightMajor, SW_JOIN_INNER_TD_443_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5833_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5833_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_443_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_5833_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_5833_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5833_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5833_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_443_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5253_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Aggregate_TD_5253_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_443_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int64_t _ss_ticket_number1215L = tbl_Aggregate_TD_5253_output.getInt64(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Aggregate_TD_5253_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_n = tbl_Aggregate_TD_5253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _bought_city5167 = std::string(_bought_city5167_n.data());
                int32_t _amt5168 = tbl_Aggregate_TD_5253_output.getInt32(i, 3);
                int32_t _profit5169 = tbl_Aggregate_TD_5253_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_443_output.setInt32(r, 4, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_443_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_first_name8_n);
                tbl_JOIN_INNER_TD_443_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_last_name9_n);
                tbl_JOIN_INNER_TD_443_output.setInt64(r, 0, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_443_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _bought_city5167_n);
                tbl_JOIN_INNER_TD_443_output.setInt32(r, 2, _amt5168);
                tbl_JOIN_INNER_TD_443_output.setInt32(r, 3, _profit5169);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_443_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_443_output #Row: " << tbl_JOIN_INNER_TD_443_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3961_key_leftMajor {
    int32_t _c_current_addr_sk4;
    std::string _bought_city5167;
    bool operator==(const SW_JOIN_INNER_TD_3961_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4) && (_bought_city5167 == other._bought_city5167));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3961_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3961_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_3961_payload_leftMajor {
    int64_t _ss_ticket_number1215L;
    std::string _bought_city5167;
    int32_t _amt5168;
    int32_t _profit5169;
    int32_t _c_current_addr_sk4;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
struct SW_JOIN_INNER_TD_3961_key_rightMajor {
    int32_t _ca_address_sk5170;
    std::string _ca_city5176;
    bool operator==(const SW_JOIN_INNER_TD_3961_key_rightMajor& other) const {
        return ((_ca_address_sk5170 == other._ca_address_sk5170) && (_ca_city5176 == other._ca_city5176));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3961_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3961_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk5170));
    }
};
}
struct SW_JOIN_INNER_TD_3961_payload_rightMajor {
    int32_t _ca_address_sk5170;
    std::string _ca_city5176;
};
void SW_JOIN_INNER_TD_3961(Table &tbl_JOIN_INNER_TD_443_output, Table &tbl_Filter_TD_4313_output, Table &tbl_JOIN_INNER_TD_3961_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((c_current_addr_sk#4 = ca_address_sk#5170) AND NOT (ca_city#5176 = bought_city#5167)))
    // Left Table: ListBuffer(ss_ticket_number#1215L, bought_city#5167, amt#5168, profit#5169, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    // Right Table: ListBuffer(ca_address_sk#5170, ca_city#5176)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, ca_city#5176, bought_city#5167, ss_ticket_number#1215L, amt#5168, profit#5169)
    int left_nrow = tbl_JOIN_INNER_TD_443_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4313_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3961_key_leftMajor, SW_JOIN_INNER_TD_3961_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_443_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_443_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_k_n = tbl_JOIN_INNER_TD_443_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _bought_city5167_k = std::string(_bought_city5167_k_n.data());
            SW_JOIN_INNER_TD_3961_key_leftMajor keyA{_c_current_addr_sk4_k, _bought_city5167_k};
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_443_output.getInt64(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_n = tbl_JOIN_INNER_TD_443_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _bought_city5167 = std::string(_bought_city5167_n.data());
            int32_t _amt5168 = tbl_JOIN_INNER_TD_443_output.getInt32(i, 2);
            int32_t _profit5169 = tbl_JOIN_INNER_TD_443_output.getInt32(i, 3);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_443_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_443_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_443_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_3961_payload_leftMajor payloadA{_ss_ticket_number1215L, _bought_city5167, _amt5168, _profit5169, _c_current_addr_sk4, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4313_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk5170_k = tbl_Filter_TD_4313_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city5176_k_n = tbl_Filter_TD_4313_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_city5176_k = std::string(_ca_city5176_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3961_key_leftMajor{_ca_address_sk5170_k, _ca_city5176_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                std::string _bought_city5167 = (it->second)._bought_city5167;
                std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_n{};
                memcpy(_bought_city5167_n.data(), (_bought_city5167).data(), (_bought_city5167).length());
                int32_t _amt5168 = (it->second)._amt5168;
                int32_t _profit5169 = (it->second)._profit5169;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ca_address_sk5170 = tbl_Filter_TD_4313_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_city5176_n = tbl_Filter_TD_4313_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_city5176 = std::string(_ca_city5176_n.data());
                tbl_JOIN_INNER_TD_3961_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_3961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _bought_city5167_n);
                tbl_JOIN_INNER_TD_3961_output.setInt32(r, 5, _amt5168);
                tbl_JOIN_INNER_TD_3961_output.setInt32(r, 6, _profit5169);
                tbl_JOIN_INNER_TD_3961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_3961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city5176_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3961_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3961_key_rightMajor, SW_JOIN_INNER_TD_3961_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4313_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk5170_k = tbl_Filter_TD_4313_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city5176_k_n = tbl_Filter_TD_4313_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_city5176_k = std::string(_ca_city5176_k_n.data());
            SW_JOIN_INNER_TD_3961_key_rightMajor keyA{_ca_address_sk5170_k, _ca_city5176_k};
            int32_t _ca_address_sk5170 = tbl_Filter_TD_4313_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city5176_n = tbl_Filter_TD_4313_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_city5176 = std::string(_ca_city5176_n.data());
            SW_JOIN_INNER_TD_3961_payload_rightMajor payloadA{_ca_address_sk5170, _ca_city5176};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_443_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_443_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_k_n = tbl_JOIN_INNER_TD_443_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _bought_city5167_k = std::string(_bought_city5167_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3961_key_rightMajor{_c_current_addr_sk4_k, _bought_city5167_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk5170 = (it->second)._ca_address_sk5170;
                std::string _ca_city5176 = (it->second)._ca_city5176;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city5176_n{};
                memcpy(_ca_city5176_n.data(), (_ca_city5176).data(), (_ca_city5176).length());
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_443_output.getInt64(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_n = tbl_JOIN_INNER_TD_443_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _bought_city5167 = std::string(_bought_city5167_n.data());
                int32_t _amt5168 = tbl_JOIN_INNER_TD_443_output.getInt32(i, 2);
                int32_t _profit5169 = tbl_JOIN_INNER_TD_443_output.getInt32(i, 3);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_443_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_443_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_443_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_3961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city5176_n);
                tbl_JOIN_INNER_TD_3961_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_3961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _bought_city5167_n);
                tbl_JOIN_INNER_TD_3961_output.setInt32(r, 5, _amt5168);
                tbl_JOIN_INNER_TD_3961_output.setInt32(r, 6, _profit5169);
                tbl_JOIN_INNER_TD_3961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3961_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3961_output #Row: " << tbl_JOIN_INNER_TD_3961_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2157(Table &tbl_JOIN_INNER_TD_3961_output, Table &tbl_Sort_TD_2157_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(c_last_name#9 ASC NULLS FIRST, c_first_name#8 ASC NULLS FIRST, ca_city#5176 ASC NULLS FIRST, bought_city#5167 ASC NULLS FIRST, ss_ticket_number#1215L ASC NULLS FIRST)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, ca_city#5176, bought_city#5167, ss_ticket_number#1215L, amt#5168, profit#5169)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, ca_city#5176, bought_city#5167, ss_ticket_number#1215L, amt#5168, profit#5169)
    struct SW_Sort_TD_2157Row {
        std::string _c_last_name9;
        std::string _c_first_name8;
        std::string _ca_city5176;
        std::string _bought_city5167;
        int64_t _ss_ticket_number1215L;
        int32_t _amt5168;
        int32_t _profit5169;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2157Row& a, const SW_Sort_TD_2157Row& b) const { return 
 (a._c_last_name9 < b._c_last_name9) || 
 ((a._c_last_name9 == b._c_last_name9) && (a._c_first_name8 < b._c_first_name8)) || 
 ((a._c_last_name9 == b._c_last_name9) && (a._c_first_name8 == b._c_first_name8) && (a._ca_city5176 < b._ca_city5176)) || 
 ((a._c_last_name9 == b._c_last_name9) && (a._c_first_name8 == b._c_first_name8) && (a._ca_city5176 == b._ca_city5176) && (a._bought_city5167 < b._bought_city5167)) || 
 ((a._c_last_name9 == b._c_last_name9) && (a._c_first_name8 == b._c_first_name8) && (a._ca_city5176 == b._ca_city5176) && (a._bought_city5167 == b._bought_city5167) && (a._ss_ticket_number1215L < b._ss_ticket_number1215L)); 
}
    }SW_Sort_TD_2157_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3961_output.getNumRow();
    std::vector<SW_Sort_TD_2157Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_3961_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_3961_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city5176 = tbl_JOIN_INNER_TD_3961_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _bought_city5167 = tbl_JOIN_INNER_TD_3961_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_3961_output.getInt64(i, 4);
        int32_t _amt5168 = tbl_JOIN_INNER_TD_3961_output.getInt32(i, 5);
        int32_t _profit5169 = tbl_JOIN_INNER_TD_3961_output.getInt32(i, 6);
        SW_Sort_TD_2157Row t = {std::string(_c_last_name9.data()),std::string(_c_first_name8.data()),std::string(_ca_city5176.data()),std::string(_bought_city5167.data()),_ss_ticket_number1215L,_amt5168,_profit5169};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2157_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), (it._c_last_name9).data(), (it._c_last_name9).length());
        tbl_Sort_TD_2157_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), (it._c_first_name8).data(), (it._c_first_name8).length());
        tbl_Sort_TD_2157_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_first_name8);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city5176{};
        memcpy(_ca_city5176.data(), (it._ca_city5176).data(), (it._ca_city5176).length());
        tbl_Sort_TD_2157_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _ca_city5176);
        std::array<char, TPCDS_READ_MAX + 1> _bought_city5167{};
        memcpy(_bought_city5167.data(), (it._bought_city5167).data(), (it._bought_city5167).length());
        tbl_Sort_TD_2157_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _bought_city5167);
        tbl_Sort_TD_2157_output.setInt64(r, 4, it._ss_ticket_number1215L);
        tbl_Sort_TD_2157_output.setInt32(r, 5, it._amt5168);
        tbl_Sort_TD_2157_output.setInt32(r, 6, it._profit5169);
        ++r;
    }
    tbl_Sort_TD_2157_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2157_output #Row: " << tbl_Sort_TD_2157_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1729(Table &tbl_Sort_TD_2157_output, Table &tbl_LocalLimit_TD_1729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, ca_city#5176, bought_city#5167, ss_ticket_number#1215L, amt#5168, profit#5169)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, ca_city#5176, bought_city#5167, ss_ticket_number#1215L, amt#5168, profit#5169)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Sort_TD_2157_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Sort_TD_2157_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city5176_n = tbl_Sort_TD_2157_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city5176_n);
        std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_n = tbl_Sort_TD_2157_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _bought_city5167_n);
        tbl_LocalLimit_TD_1729_output.setInt32(r, 4, tbl_Sort_TD_2157_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1729_output.setInt32(r, 5, tbl_Sort_TD_2157_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1729_output.setInt32(r, 6, tbl_Sort_TD_2157_output.getInt32(i, 6));
        r++;
    }
    tbl_LocalLimit_TD_1729_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1729_output #Row: " << tbl_LocalLimit_TD_1729_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0783(Table &tbl_LocalLimit_TD_1729_output, Table &tbl_GlobalLimit_TD_0783_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, ca_city#5176, bought_city#5167, ss_ticket_number#1215L, amt#5168, profit#5169)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, ca_city#5176, bought_city#5167, ss_ticket_number#1215L, amt#5168, profit#5169)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_LocalLimit_TD_1729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_LocalLimit_TD_1729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city5176_n = tbl_LocalLimit_TD_1729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city5176_n);
        std::array<char, TPCDS_READ_MAX + 1> _bought_city5167_n = tbl_LocalLimit_TD_1729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _bought_city5167_n);
        tbl_GlobalLimit_TD_0783_output.setInt32(r, 4, tbl_LocalLimit_TD_1729_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0783_output.setInt32(r, 5, tbl_LocalLimit_TD_1729_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0783_output.setInt32(r, 6, tbl_LocalLimit_TD_1729_output.getInt32(i, 6));
        r++;
    }
    tbl_GlobalLimit_TD_0783_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0783_output #Row: " << tbl_GlobalLimit_TD_0783_output.getNumRow() << std::endl;
}

