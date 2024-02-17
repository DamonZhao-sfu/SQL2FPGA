#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7781(Table &tbl_SerializeFromObject_TD_8328_input, Table &tbl_Filter_TD_7781_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_dom#129) AND (((d_dom#129 >= 1) AND (d_dom#129 <= 2)) AND d_year#126 IN (1999,2000,2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_dom#129, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8328_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_dom129 = tbl_SerializeFromObject_TD_8328_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_8328_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8328_input.getInt32(i, 0);
        auto reuse_col_str_181 = _d_year126;
        if (((_d_dom129!= 0) && (((_d_dom129 >= 1) && (_d_dom129 <= 2)) && ((reuse_col_str_181 == 1999) || (reuse_col_str_181 == 2000) || (reuse_col_str_181 == 2001) || (0)))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8328_input.getInt32(i, 0);
            tbl_Filter_TD_7781_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7781_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7781_output #Row: " << tbl_Filter_TD_7781_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7524(Table &tbl_SerializeFromObject_TD_8912_input, Table &tbl_Filter_TD_7524_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND ((isnotnull(ss_store_sk#1213) AND isnotnull(ss_hdemo_sk#1211)) AND isnotnull(ss_customer_sk#1209))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_store_sk#1213, ss_ticket_number#1215L)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_store_sk#1213, ss_ticket_number#1215L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8912_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 3);
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 2);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (((_ss_store_sk1213!= 0) && (_ss_hdemo_sk1211!= 0)) && (_ss_customer_sk1209!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 0);
            tbl_Filter_TD_7524_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 1);
            tbl_Filter_TD_7524_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 2);
            tbl_Filter_TD_7524_output.setInt32(r, 2, _ss_hdemo_sk1211_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 3);
            tbl_Filter_TD_7524_output.setInt32(r, 3, _ss_store_sk1213_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_8912_input.getInt64(i, 4);
            tbl_Filter_TD_7524_output.setInt64(r, 4, _ss_ticket_number1215L_t);
            r++;
        }
    }
    tbl_Filter_TD_7524_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7524_output #Row: " << tbl_Filter_TD_7524_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6613(Table &tbl_SerializeFromObject_TD_7894_input, Table &tbl_Filter_TD_6613_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((s_county#401 IN (Williamson County,Franklin Parish,Bronx County,Orange County) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_county#401)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7894_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_county401 = tbl_SerializeFromObject_TD_7894_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_7894_input.getInt32(i, 0);
        auto reuse_col_str_163 = std::string(_s_county401.data());
        if (((reuse_col_str_163 == "Williamson County") || (reuse_col_str_163 == "Franklin Parish") || (reuse_col_str_163 == "Bronx County") || (reuse_col_str_163 == "Orange County") || (0)) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_7894_input.getInt32(i, 0);
            tbl_Filter_TD_6613_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_6613_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6613_output #Row: " << tbl_Filter_TD_6613_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6616_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_6616_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6616_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6616_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_6616_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
};
struct SW_JOIN_INNER_TD_6616_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6616_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6616_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6616_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6616_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_6616(Table &tbl_Filter_TD_7524_output, Table &tbl_Filter_TD_7781_output, Table &tbl_JOIN_INNER_TD_6616_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_store_sk#1213, ss_ticket_number#1215L)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_store_sk#1213, ss_ticket_number#1215L)
    int left_nrow = tbl_Filter_TD_7524_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7781_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6616_key_leftMajor, SW_JOIN_INNER_TD_6616_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7524_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_7524_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6616_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_7524_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_7524_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_7524_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_7524_output.getInt32(i, 3);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_7524_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_6616_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_hdemo_sk1211, _ss_store_sk1213, _ss_ticket_number1215L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7781_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7781_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6616_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _d_date_sk120 = tbl_Filter_TD_7781_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6616_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6616_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_6616_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6616_output.setInt64(r, 3, _ss_ticket_number1215L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6616_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6616_key_rightMajor, SW_JOIN_INNER_TD_6616_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7781_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7781_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6616_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7781_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6616_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7524_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_7524_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6616_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_7524_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_7524_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_7524_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_7524_output.getInt32(i, 3);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_7524_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_6616_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6616_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_6616_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6616_output.setInt64(r, 3, _ss_ticket_number1215L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6616_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6616_output #Row: " << tbl_JOIN_INNER_TD_6616_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5843(Table &tbl_SerializeFromObject_TD_6763_input, Table &tbl_Filter_TD_5843_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(hd_vehicle_count#208) AND isnotnull(hd_dep_count#207)) AND ((((hd_buy_potential#206 = >10000) OR (hd_buy_potential#206 = unknown)) AND (hd_vehicle_count#208 > 0)) AND ((cast(hd_dep_count#207 as double) / cast(hd_vehicle_count#208 as double)) > 1.0))) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_vehicle_count#208, hd_dep_count#207, hd_buy_potential#206)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6763_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_vehicle_count208 = tbl_SerializeFromObject_TD_6763_input.getInt32(i, 1);
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_6763_input.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _hd_buy_potential206 = tbl_SerializeFromObject_TD_6763_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_6763_input.getInt32(i, 0);
        if ((((_hd_vehicle_count208!= 0) && (_hd_dep_count207!= 0)) && ((((std::string(_hd_buy_potential206.data()) == ">10000") || (std::string(_hd_buy_potential206.data()) == "unknown")) && (_hd_vehicle_count208 > 0)) && (_hd_dep_count207 > 1.0))) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_6763_input.getInt32(i, 0);
            tbl_Filter_TD_5843_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_5843_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5843_output #Row: " << tbl_Filter_TD_5843_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5190_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_5190_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5190_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5190_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_5190_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
};
struct SW_JOIN_INNER_TD_5190_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_5190_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5190_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5190_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_5190_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_5190(Table &tbl_JOIN_INNER_TD_6616_output, Table &tbl_Filter_TD_6613_output, Table &tbl_JOIN_INNER_TD_5190_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_store_sk#1213, ss_ticket_number#1215L)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_ticket_number#1215L)
    int left_nrow = tbl_JOIN_INNER_TD_6616_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6613_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5190_key_leftMajor, SW_JOIN_INNER_TD_5190_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6616_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_6616_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5190_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6616_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_6616_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6616_output.getInt32(i, 2);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_6616_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_5190_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_hdemo_sk1211, _ss_store_sk1213, _ss_ticket_number1215L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6613_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6613_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5190_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _s_store_sk378 = tbl_Filter_TD_6613_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5190_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_5190_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_5190_output.setInt64(r, 2, _ss_ticket_number1215L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5190_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5190_key_rightMajor, SW_JOIN_INNER_TD_5190_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6613_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6613_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5190_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_6613_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5190_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6616_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_6616_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5190_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6616_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_6616_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6616_output.getInt32(i, 2);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_6616_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_5190_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_5190_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_5190_output.setInt64(r, 2, _ss_ticket_number1215L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5190_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5190_output #Row: " << tbl_JOIN_INNER_TD_5190_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4135_key_leftMajor {
    int32_t _ss_hdemo_sk1211;
    bool operator==(const SW_JOIN_INNER_TD_4135_key_leftMajor& other) const {
        return ((_ss_hdemo_sk1211 == other._ss_hdemo_sk1211));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4135_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4135_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk1211));
    }
};
}
struct SW_JOIN_INNER_TD_4135_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int64_t _ss_ticket_number1215L;
};
struct SW_JOIN_INNER_TD_4135_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_4135_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4135_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4135_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_4135_payload_rightMajor {
    int32_t _hd_demo_sk204;
};
void SW_JOIN_INNER_TD_4135(Table &tbl_JOIN_INNER_TD_5190_output, Table &tbl_Filter_TD_5843_output, Table &tbl_JOIN_INNER_TD_4135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#1211 = hd_demo_sk#204))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_ticket_number#1215L)
    // Right Table: ListBuffer(hd_demo_sk#204)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_ticket_number#1215L)
    int left_nrow = tbl_JOIN_INNER_TD_5190_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5843_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4135_key_leftMajor, SW_JOIN_INNER_TD_4135_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5190_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_5190_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4135_key_leftMajor keyA{_ss_hdemo_sk1211_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_5190_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_5190_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_5190_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_4135_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_hdemo_sk1211, _ss_ticket_number1215L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5843_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_5843_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4135_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _hd_demo_sk204 = tbl_Filter_TD_5843_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4135_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_4135_output.setInt64(r, 1, _ss_ticket_number1215L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4135_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4135_key_rightMajor, SW_JOIN_INNER_TD_4135_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5843_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_5843_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4135_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_5843_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4135_payload_rightMajor payloadA{_hd_demo_sk204};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5190_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_5190_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4135_key_rightMajor{_ss_hdemo_sk1211_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_5190_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_5190_output.getInt32(i, 1);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_5190_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_4135_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_4135_output.setInt64(r, 1, _ss_ticket_number1215L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4135_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4135_output #Row: " << tbl_JOIN_INNER_TD_4135_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3466_key {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_Aggregate_TD_3466_key& other) const { return (_ss_ticket_number1215L == other._ss_ticket_number1215L) && (_ss_customer_sk1209 == other._ss_customer_sk1209); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3466_key> {
    std::size_t operator() (const SW_Aggregate_TD_3466_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ss_ticket_number1215L)) + (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_Aggregate_TD_3466_payload {
    int64_t _cnt3802L_count_0;
};
void SW_Aggregate_TD_3466(Table &tbl_JOIN_INNER_TD_4135_output, Table &tbl_Aggregate_TD_3466_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, count(1) AS cnt#3802L)
    // Input: ListBuffer(ss_customer_sk#1209, ss_ticket_number#1215L)
    // Output: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, cnt#3802L)
    std::unordered_map<SW_Aggregate_TD_3466_key, SW_Aggregate_TD_3466_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4135_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_4135_output.getInt32(i, 0);
        int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_4135_output.getInt64(i, 1);
        SW_Aggregate_TD_3466_key k{_ss_ticket_number1215L, _ss_customer_sk1209};
        int64_t _cnt3802L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_3466_payload p{_cnt3802L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt3802L_count_0 + _cnt3802L_count_0;
            p._cnt3802L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_3466_output.setInt64(r, 0, (it.first)._ss_ticket_number1215L);
        tbl_Aggregate_TD_3466_output.setInt32(r, 1, (it.first)._ss_customer_sk1209);
        int64_t _cnt3802L = (it.second)._cnt3802L_count_0;
        tbl_Aggregate_TD_3466_output.setInt64(r, 2, _cnt3802L);
        ++r;
    }
    tbl_Aggregate_TD_3466_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3466_output #Row: " << tbl_Aggregate_TD_3466_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2868(Table &tbl_SerializeFromObject_TD_3702_input, Table &tbl_Filter_TD_2868_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10)
    // Output: ListBuffer(c_customer_sk#0, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3702_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_3702_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_3702_input.getInt32(i, 0);
            tbl_Filter_TD_2868_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_t = tbl_SerializeFromObject_TD_3702_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_2868_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_salutation7_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_3702_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_2868_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_3702_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_2868_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_t = tbl_SerializeFromObject_TD_3702_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_2868_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag10_t);
            r++;
        }
    }
    tbl_Filter_TD_2868_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2868_output #Row: " << tbl_Filter_TD_2868_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2984(Table &tbl_Aggregate_TD_3466_output, Table &tbl_Filter_TD_2984_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((cnt#3802L >= 1) AND (cnt#3802L <= 5)))
    // Input: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, cnt#3802L)
    // Output: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, cnt#3802L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_3466_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cnt3802L = tbl_Aggregate_TD_3466_output.getInt64(i, 2);
        if ((_cnt3802L >= 1) && (_cnt3802L <= 5)) {
            int64_t _ss_ticket_number1215L_t = tbl_Aggregate_TD_3466_output.getInt64(i, 0);
            tbl_Filter_TD_2984_output.setInt64(r, 0, _ss_ticket_number1215L_t);
            int32_t _ss_customer_sk1209_t = tbl_Aggregate_TD_3466_output.getInt32(i, 1);
            tbl_Filter_TD_2984_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int64_t _cnt3802L_t = tbl_Aggregate_TD_3466_output.getInt64(i, 2);
            tbl_Filter_TD_2984_output.setInt64(r, 2, _cnt3802L_t);
            r++;
        }
    }
    tbl_Filter_TD_2984_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2984_output #Row: " << tbl_Filter_TD_2984_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1282_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_1282_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1282_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1282_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_1282_payload_leftMajor {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_customer_sk1209;
    int64_t _cnt3802L;
};
struct SW_JOIN_INNER_TD_1282_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_1282_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1282_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1282_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_1282_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_salutation7;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
};
void SW_JOIN_INNER_TD_1282(Table &tbl_Filter_TD_2984_output, Table &tbl_Filter_TD_2868_output, Table &tbl_JOIN_INNER_TD_1282_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, cnt#3802L)
    // Right Table: ListBuffer(c_customer_sk#0, c_salutation#7, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, c_salutation#7, c_preferred_cust_flag#10, ss_ticket_number#1215L, cnt#3802L)
    int left_nrow = tbl_Filter_TD_2984_output.getNumRow();
    int right_nrow = tbl_Filter_TD_2868_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1282_key_leftMajor, SW_JOIN_INNER_TD_1282_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_2984_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_2984_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1282_key_leftMajor keyA{_ss_customer_sk1209_k};
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_2984_output.getInt64(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_2984_output.getInt32(i, 1);
            int64_t _cnt3802L = tbl_Filter_TD_2984_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_1282_payload_leftMajor payloadA{_ss_ticket_number1215L, _ss_customer_sk1209, _cnt3802L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2868_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_2868_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1282_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int64_t _cnt3802L = (it->second)._cnt3802L;
                int32_t _c_customer_sk0 = tbl_Filter_TD_2868_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Filter_TD_2868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_salutation7 = std::string(_c_salutation7_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_2868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_2868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_2868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
                tbl_JOIN_INNER_TD_1282_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_1282_output.setInt64(r, 5, _cnt3802L);
                tbl_JOIN_INNER_TD_1282_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_salutation7_n);
                tbl_JOIN_INNER_TD_1282_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_1282_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_1282_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1282_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1282_key_rightMajor, SW_JOIN_INNER_TD_1282_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_2868_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_2868_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1282_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_2868_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_salutation7_n = tbl_Filter_TD_2868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_salutation7 = std::string(_c_salutation7_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_2868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_2868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_2868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
            SW_JOIN_INNER_TD_1282_payload_rightMajor payloadA{_c_customer_sk0, _c_salutation7, _c_first_name8, _c_last_name9, _c_preferred_cust_flag10};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2984_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_2984_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1282_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
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
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_2984_output.getInt64(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_2984_output.getInt32(i, 1);
                int64_t _cnt3802L = tbl_Filter_TD_2984_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_1282_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_salutation7_n);
                tbl_JOIN_INNER_TD_1282_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_1282_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_1282_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_1282_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_1282_output.setInt64(r, 5, _cnt3802L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1282_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1282_output #Row: " << tbl_JOIN_INNER_TD_1282_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0881(Table &tbl_JOIN_INNER_TD_1282_output, Table &tbl_Sort_TD_0881_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cnt#3802L DESC NULLS LAST, c_last_name#9 ASC NULLS FIRST)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, c_salutation#7, c_preferred_cust_flag#10, ss_ticket_number#1215L, cnt#3802L)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, c_salutation#7, c_preferred_cust_flag#10, ss_ticket_number#1215L, cnt#3802L)
    struct SW_Sort_TD_0881Row {
        std::string _c_last_name9;
        std::string _c_first_name8;
        std::string _c_salutation7;
        std::string _c_preferred_cust_flag10;
        int64_t _ss_ticket_number1215L;
        int64_t _cnt3802L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0881Row& a, const SW_Sort_TD_0881Row& b) const { return 
 (a._cnt3802L > b._cnt3802L) || 
 ((a._cnt3802L == b._cnt3802L) && (a._c_last_name9 < b._c_last_name9)); 
}
    }SW_Sort_TD_0881_order; 

    int nrow1 = tbl_JOIN_INNER_TD_1282_output.getNumRow();
    std::vector<SW_Sort_TD_0881Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_1282_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_1282_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7 = tbl_JOIN_INNER_TD_1282_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10 = tbl_JOIN_INNER_TD_1282_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_1282_output.getInt64(i, 4);
        int64_t _cnt3802L = tbl_JOIN_INNER_TD_1282_output.getInt64(i, 5);
        SW_Sort_TD_0881Row t = {std::string(_c_last_name9.data()),std::string(_c_first_name8.data()),std::string(_c_salutation7.data()),std::string(_c_preferred_cust_flag10.data()),_ss_ticket_number1215L,_cnt3802L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0881_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), (it._c_last_name9).data(), (it._c_last_name9).length());
        tbl_Sort_TD_0881_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), (it._c_first_name8).data(), (it._c_first_name8).length());
        tbl_Sort_TD_0881_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_first_name8);
        std::array<char, TPCDS_READ_MAX + 1> _c_salutation7{};
        memcpy(_c_salutation7.data(), (it._c_salutation7).data(), (it._c_salutation7).length());
        tbl_Sort_TD_0881_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _c_salutation7);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10{};
        memcpy(_c_preferred_cust_flag10.data(), (it._c_preferred_cust_flag10).data(), (it._c_preferred_cust_flag10).length());
        tbl_Sort_TD_0881_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _c_preferred_cust_flag10);
        tbl_Sort_TD_0881_output.setInt64(r, 4, it._ss_ticket_number1215L);
        tbl_Sort_TD_0881_output.setInt64(r, 5, it._cnt3802L);
        if (r < 10) {
            std::cout << (it._c_last_name9).data() << " " << (it._c_first_name8).data() << " " << (it._c_salutation7).data() << " " << (it._c_preferred_cust_flag10).data() << " " << it._ss_ticket_number1215L << " " << it._cnt3802L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0881_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0881_output #Row: " << tbl_Sort_TD_0881_output.getNumRow() << std::endl;
}

