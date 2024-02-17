#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9589(Table &tbl_SerializeFromObject_TD_10290_input, Table &tbl_Filter_TD_9589_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_dow#127) AND ((d_dow#127 = 1) AND d_year#126 IN (1999,2000,2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_dow#127, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10290_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_dow127 = tbl_SerializeFromObject_TD_10290_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10290_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10290_input.getInt32(i, 0);
        auto reuse_col_str_805 = _d_year126;
        if (((_d_dow127!= 0) && ((_d_dow127 == 1) && ((reuse_col_str_805 == 1999) || (reuse_col_str_805 == 2000) || (reuse_col_str_805 == 2001) || (0)))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10290_input.getInt32(i, 0);
            tbl_Filter_TD_9589_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9589_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9589_output #Row: " << tbl_Filter_TD_9589_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9331(Table &tbl_SerializeFromObject_TD_1068_input, Table &tbl_Filter_TD_9331_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)) AND (isnotnull(ss_hdemo_sk#1211) AND isnotnull(ss_customer_sk#1209))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1068_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 4);
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 2);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 1);
        if (((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) && ((_ss_hdemo_sk1211!= 0) && (_ss_customer_sk1209!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 0);
            tbl_Filter_TD_9331_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 1);
            tbl_Filter_TD_9331_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 2);
            tbl_Filter_TD_9331_output.setInt32(r, 2, _ss_hdemo_sk1211_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 3);
            tbl_Filter_TD_9331_output.setInt32(r, 3, _ss_addr_sk1212_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 4);
            tbl_Filter_TD_9331_output.setInt32(r, 4, _ss_store_sk1213_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_1068_input.getInt64(i, 5);
            tbl_Filter_TD_9331_output.setInt64(r, 5, _ss_ticket_number1215L_t);
            int32_t _ss_coupon_amt1225_t = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 6);
            tbl_Filter_TD_9331_output.setInt32(r, 6, _ss_coupon_amt1225_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_1068_input.getInt32(i, 7);
            tbl_Filter_TD_9331_output.setInt32(r, 7, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_9331_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9331_output #Row: " << tbl_Filter_TD_9331_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8255(Table &tbl_SerializeFromObject_TD_9993_input, Table &tbl_Filter_TD_8255_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_number_employees#384) AND ((s_number_employees#384 >= 200) AND (s_number_employees#384 <= 295))) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_city#400, s_number_employees#384)
    // Output: ListBuffer(s_store_sk#378, s_city#400)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9993_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_number_employees384 = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 2);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 0);
        if (((_s_number_employees384!= 0) && ((_s_number_employees384 >= 200) && (_s_number_employees384 <= 295))) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 0);
            tbl_Filter_TD_8255_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_city400_t = tbl_SerializeFromObject_TD_9993_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8255_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_city400_t);
            r++;
        }
    }
    tbl_Filter_TD_8255_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8255_output #Row: " << tbl_Filter_TD_8255_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8931_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8931_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8931_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8931_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8931_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_coupon_amt1225;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_8931_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8931_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8931_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8931_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8931_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_8931(Table &tbl_Filter_TD_9331_output, Table &tbl_Filter_TD_9589_output, Table &tbl_JOIN_INNER_TD_8931_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    int left_nrow = tbl_Filter_TD_9331_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9589_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8931_key_leftMajor, SW_JOIN_INNER_TD_8931_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9331_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9331_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8931_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9331_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_9331_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_9331_output.getInt32(i, 2);
            int32_t _ss_addr_sk1212 = tbl_Filter_TD_9331_output.getInt32(i, 3);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_9331_output.getInt32(i, 4);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_9331_output.getInt64(i, 5);
            int32_t _ss_coupon_amt1225 = tbl_Filter_TD_9331_output.getInt32(i, 6);
            int32_t _ss_net_profit1228 = tbl_Filter_TD_9331_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_8931_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_ticket_number1215L, _ss_coupon_amt1225, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9589_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9589_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8931_key_leftMajor{_d_date_sk120_k});
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
                int32_t _d_date_sk120 = tbl_Filter_TD_9589_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8931_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 5, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 6, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8931_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8931_key_rightMajor, SW_JOIN_INNER_TD_8931_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9589_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9589_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8931_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9589_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8931_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9331_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9331_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8931_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9331_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_9331_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_9331_output.getInt32(i, 2);
                int32_t _ss_addr_sk1212 = tbl_Filter_TD_9331_output.getInt32(i, 3);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_9331_output.getInt32(i, 4);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_9331_output.getInt64(i, 5);
                int32_t _ss_coupon_amt1225 = tbl_Filter_TD_9331_output.getInt32(i, 6);
                int32_t _ss_net_profit1228 = tbl_Filter_TD_9331_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8931_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 5, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_8931_output.setInt32(r, 6, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8931_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8931_output #Row: " << tbl_JOIN_INNER_TD_8931_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7999(Table &tbl_SerializeFromObject_TD_8388_input, Table &tbl_Filter_TD_7999_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((hd_dep_count#207 = 6) OR (hd_vehicle_count#208 > 2)) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_dep_count#207, hd_vehicle_count#208)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8388_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_8388_input.getInt32(i, 1);
        int32_t _hd_vehicle_count208 = tbl_SerializeFromObject_TD_8388_input.getInt32(i, 2);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_8388_input.getInt32(i, 0);
        if (((_hd_dep_count207 == 6) || (_hd_vehicle_count208 > 2)) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_8388_input.getInt32(i, 0);
            tbl_Filter_TD_7999_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_7999_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7999_output #Row: " << tbl_Filter_TD_7999_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7741_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_7741_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7741_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7741_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_7741_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_coupon_amt1225;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_7741_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_7741_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7741_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7741_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_7741_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_city400;
};
void SW_JOIN_INNER_TD_7741(Table &tbl_JOIN_INNER_TD_8931_output, Table &tbl_Filter_TD_8255_output, Table &tbl_JOIN_INNER_TD_7741_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228)
    // Right Table: ListBuffer(s_store_sk#378, s_city#400)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228, s_city#400)
    int left_nrow = tbl_JOIN_INNER_TD_8931_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8255_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7741_key_leftMajor, SW_JOIN_INNER_TD_7741_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8931_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7741_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 3);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_8931_output.getInt64(i, 4);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 5);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_7741_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_ticket_number1215L, _ss_coupon_amt1225, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8255_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_8255_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7741_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _s_store_sk378 = tbl_Filter_TD_8255_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_city400_n = tbl_Filter_TD_8255_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_city400 = std::string(_s_city400_n.data());
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_7741_output.setInt64(r, 3, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 5, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_7741_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_city400_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7741_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7741_key_rightMajor, SW_JOIN_INNER_TD_7741_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8255_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_8255_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7741_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_8255_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_city400_n = tbl_Filter_TD_8255_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_city400 = std::string(_s_city400_n.data());
            SW_JOIN_INNER_TD_7741_payload_rightMajor payloadA{_s_store_sk378, _s_city400};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8931_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7741_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_city400 = (it->second)._s_city400;
                std::array<char, TPCDS_READ_MAX + 1> _s_city400_n{};
                memcpy(_s_city400_n.data(), (_s_city400).data(), (_s_city400).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 3);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_8931_output.getInt64(i, 4);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 5);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8931_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_7741_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_city400_n);
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_7741_output.setInt64(r, 3, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_7741_output.setInt32(r, 5, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7741_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7741_output #Row: " << tbl_JOIN_INNER_TD_7741_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6611_key_leftMajor {
    int32_t _ss_hdemo_sk1211;
    bool operator==(const SW_JOIN_INNER_TD_6611_key_leftMajor& other) const {
        return ((_ss_hdemo_sk1211 == other._ss_hdemo_sk1211));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6611_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6611_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk1211));
    }
};
}
struct SW_JOIN_INNER_TD_6611_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_coupon_amt1225;
    int32_t _ss_net_profit1228;
    std::string _s_city400;
};
struct SW_JOIN_INNER_TD_6611_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_6611_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6611_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6611_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_6611_payload_rightMajor {
    int32_t _hd_demo_sk204;
};
void SW_JOIN_INNER_TD_6611(Table &tbl_JOIN_INNER_TD_7741_output, Table &tbl_Filter_TD_7999_output, Table &tbl_JOIN_INNER_TD_6611_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#1211 = hd_demo_sk#204))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228, s_city#400)
    // Right Table: ListBuffer(hd_demo_sk#204)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228, s_city#400)
    int left_nrow = tbl_JOIN_INNER_TD_7741_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7999_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6611_key_leftMajor, SW_JOIN_INNER_TD_6611_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7741_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6611_key_leftMajor keyA{_ss_hdemo_sk1211_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 2);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_7741_output.getInt64(i, 3);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 4);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _s_city400_n = tbl_JOIN_INNER_TD_7741_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_city400 = std::string(_s_city400_n.data());
            SW_JOIN_INNER_TD_6611_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_ticket_number1215L, _ss_coupon_amt1225, _ss_net_profit1228, _s_city400};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7999_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_7999_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6611_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                std::string _s_city400 = (it->second)._s_city400;
                std::array<char, TPCDS_READ_MAX + 1> _s_city400_n{};
                memcpy(_s_city400_n.data(), (_s_city400).data(), (_s_city400).length());
                int32_t _hd_demo_sk204 = tbl_Filter_TD_7999_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6611_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6611_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_6611_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_6611_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_6611_output.setInt32(r, 4, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_6611_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_city400_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6611_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6611_key_rightMajor, SW_JOIN_INNER_TD_6611_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7999_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_7999_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6611_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_7999_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6611_payload_rightMajor payloadA{_hd_demo_sk204};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7741_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6611_key_rightMajor{_ss_hdemo_sk1211_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 2);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_7741_output.getInt64(i, 3);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 4);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_7741_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _s_city400_n = tbl_JOIN_INNER_TD_7741_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_city400 = std::string(_s_city400_n.data());
                tbl_JOIN_INNER_TD_6611_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6611_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_6611_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_6611_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_6611_output.setInt32(r, 4, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_6611_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_city400_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6611_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6611_output #Row: " << tbl_JOIN_INNER_TD_6611_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5797(Table &tbl_SerializeFromObject_TD_6451_input, Table &tbl_Filter_TD_5797_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6451_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_6451_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_6451_input.getInt32(i, 0);
            tbl_Filter_TD_5797_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_6451_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5797_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_6451_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5797_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_5797_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5797_output #Row: " << tbl_Filter_TD_5797_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5493_key {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_customer_sk1209;
    int32_t _ss_addr_sk1212;
    std::string _s_city400;
    bool operator==(const SW_Aggregate_TD_5493_key& other) const { return (_ss_ticket_number1215L == other._ss_ticket_number1215L) && (_ss_customer_sk1209 == other._ss_customer_sk1209) && (_ss_addr_sk1212 == other._ss_addr_sk1212) && (_s_city400 == other._s_city400); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5493_key> {
    std::size_t operator() (const SW_Aggregate_TD_5493_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ss_ticket_number1215L)) + (hash<int32_t>()(k._ss_customer_sk1209)) + (hash<int32_t>()(k._ss_addr_sk1212)) + (hash<string>()(k._s_city400));
    }
};
}
struct SW_Aggregate_TD_5493_payload {
    int32_t _amt7915_sum_0;
    int32_t _profit7916_sum_1;
};
void SW_Aggregate_TD_5493(Table &tbl_JOIN_INNER_TD_6611_output, Table &tbl_Aggregate_TD_5493_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, ss_addr_sk#1212, s_city#400, MakeDecimal(sum(UnscaledValue(ss_coupon_amt#1225)),17,2) AS amt#7915, MakeDecimal(sum(UnscaledValue(ss_net_profit#1228)),17,2) AS profit#7916)
    // Input: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_coupon_amt#1225, ss_net_profit#1228, s_city#400)
    // Output: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, s_city#400, amt#7915, profit#7916)
    std::unordered_map<SW_Aggregate_TD_5493_key, SW_Aggregate_TD_5493_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6611_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6611_output.getInt32(i, 0);
        int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_6611_output.getInt32(i, 1);
        int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_6611_output.getInt64(i, 2);
        int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_6611_output.getInt32(i, 3);
        int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_6611_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_city400 = tbl_JOIN_INNER_TD_6611_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_5493_key k{_ss_ticket_number1215L, _ss_customer_sk1209, _ss_addr_sk1212, std::string(_s_city400.data())};
        int64_t _amt7915_sum_0 = _ss_coupon_amt1225;
        int64_t _profit7916_sum_1 = _ss_net_profit1228;
        SW_Aggregate_TD_5493_payload p{_amt7915_sum_0, _profit7916_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._amt7915_sum_0 + _amt7915_sum_0;
            p._amt7915_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._profit7916_sum_1 + _profit7916_sum_1;
            p._profit7916_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5493_output.setInt64(r, 0, (it.first)._ss_ticket_number1215L);
        tbl_Aggregate_TD_5493_output.setInt32(r, 1, (it.first)._ss_customer_sk1209);
        // _ss_addr_sk1212 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _s_city400{};
        memcpy(_s_city400.data(), ((it.first)._s_city400).data(), ((it.first)._s_city400).length());
        tbl_Aggregate_TD_5493_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_city400);
        int32_t _amt7915 = (it.second)._amt7915_sum_0;
        tbl_Aggregate_TD_5493_output.setInt32(r, 3, _amt7915);
        int32_t _profit7916 = (it.second)._profit7916_sum_1;
        tbl_Aggregate_TD_5493_output.setInt32(r, 4, _profit7916);
        ++r;
    }
    tbl_Aggregate_TD_5493_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5493_output #Row: " << tbl_Aggregate_TD_5493_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4479_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_4479_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4479_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4479_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_4479_payload_leftMajor {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_customer_sk1209;
    std::string _s_city400;
    int32_t _amt7915;
    int32_t _profit7916;
};
struct SW_JOIN_INNER_TD_4479_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_4479_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4479_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4479_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_4479_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_4479(Table &tbl_Aggregate_TD_5493_output, Table &tbl_Filter_TD_5797_output, Table &tbl_JOIN_INNER_TD_4479_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, s_city#400, amt#7915, profit#7916)
    // Right Table: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, s_city#400, ss_ticket_number#1215L, amt#7915, profit#7916)
    int left_nrow = tbl_Aggregate_TD_5493_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5797_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4479_key_leftMajor, SW_JOIN_INNER_TD_4479_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5493_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Aggregate_TD_5493_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4479_key_leftMajor keyA{_ss_customer_sk1209_k};
            int64_t _ss_ticket_number1215L = tbl_Aggregate_TD_5493_output.getInt64(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Aggregate_TD_5493_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _s_city400_n = tbl_Aggregate_TD_5493_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_city400 = std::string(_s_city400_n.data());
            int32_t _amt7915 = tbl_Aggregate_TD_5493_output.getInt32(i, 3);
            int32_t _profit7916 = tbl_Aggregate_TD_5493_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4479_payload_leftMajor payloadA{_ss_ticket_number1215L, _ss_customer_sk1209, _s_city400, _amt7915, _profit7916};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5797_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5797_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4479_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                std::string _s_city400 = (it->second)._s_city400;
                std::array<char, TPCDS_READ_MAX + 1> _s_city400_n{};
                memcpy(_s_city400_n.data(), (_s_city400).data(), (_s_city400).length());
                int32_t _amt7915 = (it->second)._amt7915;
                int32_t _profit7916 = (it->second)._profit7916;
                int32_t _c_customer_sk0 = tbl_Filter_TD_5797_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5797_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5797_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_4479_output.setInt64(r, 3, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_4479_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_city400_n);
                tbl_JOIN_INNER_TD_4479_output.setInt32(r, 4, _amt7915);
                tbl_JOIN_INNER_TD_4479_output.setInt32(r, 5, _profit7916);
                tbl_JOIN_INNER_TD_4479_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4479_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4479_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4479_key_rightMajor, SW_JOIN_INNER_TD_4479_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5797_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5797_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4479_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_5797_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5797_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5797_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_4479_payload_rightMajor payloadA{_c_customer_sk0, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5493_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Aggregate_TD_5493_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4479_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int64_t _ss_ticket_number1215L = tbl_Aggregate_TD_5493_output.getInt64(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Aggregate_TD_5493_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _s_city400_n = tbl_Aggregate_TD_5493_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_city400 = std::string(_s_city400_n.data());
                int32_t _amt7915 = tbl_Aggregate_TD_5493_output.getInt32(i, 3);
                int32_t _profit7916 = tbl_Aggregate_TD_5493_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_4479_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4479_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_4479_output.setInt64(r, 3, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_4479_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_city400_n);
                tbl_JOIN_INNER_TD_4479_output.setInt32(r, 4, _amt7915);
                tbl_JOIN_INNER_TD_4479_output.setInt32(r, 5, _profit7916);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4479_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4479_output #Row: " << tbl_JOIN_INNER_TD_4479_output.getNumRow() << std::endl;
}

void SW_Project_TD_3486(Table &tbl_JOIN_INNER_TD_4479_output, Table &tbl_Project_TD_3486_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(substr(s_city#400, 1, 30) AS substr(s_city, 1, 30)#7919)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, s_city#400, ss_ticket_number#1215L, amt#7915, profit#7916)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, substr(s_city, 1, 30)#7919, ss_ticket_number#1215L, amt#7915, profit#7916, s_city#400)
    int nrow1 = tbl_JOIN_INNER_TD_4479_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_4479_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_4479_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_city400 = tbl_JOIN_INNER_TD_4479_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_4479_output.getInt64(i, 3);
        int32_t _amt7915 = tbl_JOIN_INNER_TD_4479_output.getInt32(i, 4);
        int32_t _profit7916 = tbl_JOIN_INNER_TD_4479_output.getInt32(i, 5);
        std::string substr_s_city_1_30_str = std::string(_s_city400.data()).substr(0, 30);
        std::array<char, TPCDS_READ_MAX + 1> substr_s_city_1_30{};
        memcpy(substr_s_city_1_30.data(), substr_s_city_1_30_str.data(), (substr_s_city_1_30_str).length());
        tbl_Project_TD_3486_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, substr_s_city_1_30);
        tbl_Project_TD_3486_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _c_last_name9);
        tbl_Project_TD_3486_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _c_first_name8);
        tbl_Project_TD_3486_output.setInt64(i, 3, _ss_ticket_number1215L);
        tbl_Project_TD_3486_output.setInt32(i, 4, _amt7915);
        tbl_Project_TD_3486_output.setInt32(i, 5, _profit7916);
        tbl_Project_TD_3486_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 6, _s_city400);
    }
    tbl_Project_TD_3486_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3486_output #Row: " << tbl_Project_TD_3486_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2371(Table &tbl_Project_TD_3486_output, Table &tbl_Sort_TD_2371_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(c_last_name#9 ASC NULLS FIRST, c_first_name#8 ASC NULLS FIRST, substr(s_city#400, 1, 30) ASC NULLS FIRST, profit#7916 ASC NULLS FIRST)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, substr(s_city, 1, 30)#7919, ss_ticket_number#1215L, amt#7915, profit#7916, s_city#400)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, substr(s_city, 1, 30)#7919, ss_ticket_number#1215L, amt#7915, profit#7916, s_city#400)
    struct SW_Sort_TD_2371Row {
        std::string _c_last_name9;
        std::string _c_first_name8;
        std::string substr_s_city_1_30;
        int64_t _ss_ticket_number1215L;
        int32_t _amt7915;
        int32_t _profit7916;
        std::string _s_city400;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2371Row& a, const SW_Sort_TD_2371Row& b) const { return 
 (a._c_last_name9 < b._c_last_name9) || 
 ((a._c_last_name9 == b._c_last_name9) && (a._c_first_name8 < b._c_first_name8)) || 
 ((a._c_last_name9 == b._c_last_name9) && (a._c_first_name8 == b._c_first_name8) &&  || 
 ((a._c_last_name9 == b._c_last_name9) && (a._c_first_name8 == b._c_first_name8) && (a.substr_s_city_1_30 == b.substr_s_city_1_30) && (a._profit7916 < b._profit7916)); 
}
    }SW_Sort_TD_2371_order; 

    int nrow1 = tbl_Project_TD_3486_output.getNumRow();
    std::vector<SW_Sort_TD_2371Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Project_TD_3486_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Project_TD_3486_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> substr_s_city_1_30 = tbl_Project_TD_3486_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int64_t _ss_ticket_number1215L = tbl_Project_TD_3486_output.getInt64(i, 3);
        int32_t _amt7915 = tbl_Project_TD_3486_output.getInt32(i, 4);
        int32_t _profit7916 = tbl_Project_TD_3486_output.getInt32(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_city400 = tbl_Project_TD_3486_output.getcharN<char, TPCDS_READ_MAX +1>(i, 6);
        SW_Sort_TD_2371Row t = {std::string(_c_last_name9.data()),std::string(_c_first_name8.data()),std::string(substr_s_city_1_30.data()),_ss_ticket_number1215L,_amt7915,_profit7916,std::string(_s_city400.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2371_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), (it._c_last_name9).data(), (it._c_last_name9).length());
        tbl_Sort_TD_2371_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), (it._c_first_name8).data(), (it._c_first_name8).length());
        tbl_Sort_TD_2371_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_first_name8);
        std::array<char, TPCDS_READ_MAX + 1> substr_s_city_1_30{};
        memcpy(substr_s_city_1_30.data(), (it.substr_s_city_1_30).data(), (it.substr_s_city_1_30).length());
        tbl_Sort_TD_2371_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, substr_s_city_1_30);
        tbl_Sort_TD_2371_output.setInt64(r, 3, it._ss_ticket_number1215L);
        tbl_Sort_TD_2371_output.setInt32(r, 4, it._amt7915);
        tbl_Sort_TD_2371_output.setInt32(r, 5, it._profit7916);
        std::array<char, TPCDS_READ_MAX + 1> _s_city400{};
        memcpy(_s_city400.data(), (it._s_city400).data(), (it._s_city400).length());
        tbl_Sort_TD_2371_output.setcharN<char, TPCDS_READ_MAX +1>(r, 6, _s_city400);
        ++r;
    }
    tbl_Sort_TD_2371_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2371_output #Row: " << tbl_Sort_TD_2371_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1555(Table &tbl_Sort_TD_2371_output, Table &tbl_LocalLimit_TD_1555_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, substr(s_city, 1, 30)#7919, ss_ticket_number#1215L, amt#7915, profit#7916, s_city#400)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, substr(s_city, 1, 30)#7919, ss_ticket_number#1215L, amt#7915, profit#7916)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Sort_TD_2371_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1555_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Sort_TD_2371_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1555_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> substr_s_city_1_30_n = tbl_Sort_TD_2371_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1555_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, substr_s_city_1_30_n);
        tbl_LocalLimit_TD_1555_output.setInt32(r, 3, tbl_Sort_TD_2371_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1555_output.setInt32(r, 4, tbl_Sort_TD_2371_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1555_output.setInt32(r, 5, tbl_Sort_TD_2371_output.getInt32(i, 5));
        r++;
    }
    tbl_LocalLimit_TD_1555_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1555_output #Row: " << tbl_LocalLimit_TD_1555_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0465(Table &tbl_LocalLimit_TD_1555_output, Table &tbl_GlobalLimit_TD_0465_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, substr(s_city, 1, 30)#7919, ss_ticket_number#1215L, amt#7915, profit#7916)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, substr(s_city, 1, 30)#7919, ss_ticket_number#1215L, amt#7915, profit#7916)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_LocalLimit_TD_1555_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0465_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_LocalLimit_TD_1555_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0465_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> substr_s_city_1_30_n = tbl_LocalLimit_TD_1555_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0465_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, substr_s_city_1_30_n);
        tbl_GlobalLimit_TD_0465_output.setInt32(r, 3, tbl_LocalLimit_TD_1555_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0465_output.setInt32(r, 4, tbl_LocalLimit_TD_1555_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0465_output.setInt32(r, 5, tbl_LocalLimit_TD_1555_output.getInt32(i, 5));
        r++;
    }
    tbl_GlobalLimit_TD_0465_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0465_output #Row: " << tbl_GlobalLimit_TD_0465_output.getNumRow() << std::endl;
}

