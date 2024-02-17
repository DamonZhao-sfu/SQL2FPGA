#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_4922(Table &tbl_SerializeFromObject_TD_5136_input, Table &tbl_Filter_TD_4922_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(hd_dep_count#207) AND (hd_dep_count#207 = 7)) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_dep_count#207)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5136_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_5136_input.getInt32(i, 1);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_5136_input.getInt32(i, 0);
        if (((_hd_dep_count207!= 0) && (_hd_dep_count207 == 7)) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_5136_input.getInt32(i, 0);
            tbl_Filter_TD_4922_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_4922_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4922_output #Row: " << tbl_Filter_TD_4922_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4930(Table &tbl_SerializeFromObject_TD_5766_input, Table &tbl_Filter_TD_4930_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#1211) AND (isnotnull(ss_sold_time_sk#1207) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    // Output: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5766_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_5766_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk1207 = tbl_SerializeFromObject_TD_5766_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_5766_input.getInt32(i, 2);
        if ((_ss_hdemo_sk1211!= 0) && ((_ss_sold_time_sk1207!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_time_sk1207_t = tbl_SerializeFromObject_TD_5766_input.getInt32(i, 0);
            tbl_Filter_TD_4930_output.setInt32(r, 0, _ss_sold_time_sk1207_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_5766_input.getInt32(i, 1);
            tbl_Filter_TD_4930_output.setInt32(r, 1, _ss_hdemo_sk1211_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_5766_input.getInt32(i, 2);
            tbl_Filter_TD_4930_output.setInt32(r, 2, _ss_store_sk1213_t);
            r++;
        }
    }
    tbl_Filter_TD_4930_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4930_output #Row: " << tbl_Filter_TD_4930_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3237(Table &tbl_SerializeFromObject_TD_4736_input, Table &tbl_Filter_TD_3237_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#468) AND isnotnull(t_minute#469)) AND ((t_hour#468 = 20) AND (t_minute#469 >= 30))) AND isnotnull(t_time_sk#465)))
    // Input: ListBuffer(t_time_sk#465, t_hour#468, t_minute#469)
    // Output: ListBuffer(t_time_sk#465)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4736_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour468 = tbl_SerializeFromObject_TD_4736_input.getInt32(i, 1);
        int32_t _t_minute469 = tbl_SerializeFromObject_TD_4736_input.getInt32(i, 2);
        int32_t _t_time_sk465 = tbl_SerializeFromObject_TD_4736_input.getInt32(i, 0);
        if ((((_t_hour468!= 0) && (_t_minute469!= 0)) && ((_t_hour468 == 20) && (_t_minute469 >= 30))) && (_t_time_sk465!= 0)) {
            int32_t _t_time_sk465_t = tbl_SerializeFromObject_TD_4736_input.getInt32(i, 0);
            tbl_Filter_TD_3237_output.setInt32(r, 0, _t_time_sk465_t);
            r++;
        }
    }
    tbl_Filter_TD_3237_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3237_output #Row: " << tbl_Filter_TD_3237_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3224_key_leftMajor {
    int32_t _ss_hdemo_sk1211;
    bool operator==(const SW_JOIN_INNER_TD_3224_key_leftMajor& other) const {
        return ((_ss_hdemo_sk1211 == other._ss_hdemo_sk1211));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3224_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3224_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk1211));
    }
};
}
struct SW_JOIN_INNER_TD_3224_payload_leftMajor {
    int32_t _ss_sold_time_sk1207;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_store_sk1213;
};
struct SW_JOIN_INNER_TD_3224_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_3224_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3224_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3224_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_3224_payload_rightMajor {
    int32_t _hd_demo_sk204;
};
void SW_JOIN_INNER_TD_3224(Table &tbl_Filter_TD_4930_output, Table &tbl_Filter_TD_4922_output, Table &tbl_JOIN_INNER_TD_3224_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#1211 = hd_demo_sk#204))
    // Left Table: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    // Right Table: ListBuffer(hd_demo_sk#204)
    // Output Table: ListBuffer(ss_sold_time_sk#1207, ss_store_sk#1213)
    int left_nrow = tbl_Filter_TD_4930_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4922_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3224_key_leftMajor, SW_JOIN_INNER_TD_3224_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_4930_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_Filter_TD_4930_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3224_key_leftMajor keyA{_ss_hdemo_sk1211_k};
            int32_t _ss_sold_time_sk1207 = tbl_Filter_TD_4930_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_4930_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_4930_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3224_payload_leftMajor payloadA{_ss_sold_time_sk1207, _ss_hdemo_sk1211, _ss_store_sk1213};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4922_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_4922_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3224_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk1207 = (it->second)._ss_sold_time_sk1207;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _hd_demo_sk204 = tbl_Filter_TD_4922_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3224_output.setInt32(r, 0, _ss_sold_time_sk1207);
                tbl_JOIN_INNER_TD_3224_output.setInt32(r, 1, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3224_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3224_key_rightMajor, SW_JOIN_INNER_TD_3224_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4922_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_4922_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3224_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_4922_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3224_payload_rightMajor payloadA{_hd_demo_sk204};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4930_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_Filter_TD_4930_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3224_key_rightMajor{_ss_hdemo_sk1211_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _ss_sold_time_sk1207 = tbl_Filter_TD_4930_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_4930_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_4930_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3224_output.setInt32(r, 0, _ss_sold_time_sk1207);
                tbl_JOIN_INNER_TD_3224_output.setInt32(r, 1, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3224_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3224_output #Row: " << tbl_JOIN_INNER_TD_3224_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2285(Table &tbl_SerializeFromObject_TD_3923_input, Table &tbl_Filter_TD_2285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#383) AND (s_store_name#383 = ese)) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3923_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_SerializeFromObject_TD_3923_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_3923_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_store_name383.data()) != "NULL") && (std::string(_s_store_name383.data()) == "ese")) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_3923_input.getInt32(i, 0);
            tbl_Filter_TD_2285_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_2285_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2285_output #Row: " << tbl_Filter_TD_2285_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2568_key_leftMajor {
    int32_t _ss_sold_time_sk1207;
    bool operator==(const SW_JOIN_INNER_TD_2568_key_leftMajor& other) const {
        return ((_ss_sold_time_sk1207 == other._ss_sold_time_sk1207));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2568_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2568_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_time_sk1207));
    }
};
}
struct SW_JOIN_INNER_TD_2568_payload_leftMajor {
    int32_t _ss_sold_time_sk1207;
    int32_t _ss_store_sk1213;
};
struct SW_JOIN_INNER_TD_2568_key_rightMajor {
    int32_t _t_time_sk465;
    bool operator==(const SW_JOIN_INNER_TD_2568_key_rightMajor& other) const {
        return ((_t_time_sk465 == other._t_time_sk465));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2568_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2568_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk465));
    }
};
}
struct SW_JOIN_INNER_TD_2568_payload_rightMajor {
    int32_t _t_time_sk465;
};
void SW_JOIN_INNER_TD_2568(Table &tbl_JOIN_INNER_TD_3224_output, Table &tbl_Filter_TD_3237_output, Table &tbl_JOIN_INNER_TD_2568_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_time_sk#1207 = t_time_sk#465))
    // Left Table: ListBuffer(ss_sold_time_sk#1207, ss_store_sk#1213)
    // Right Table: ListBuffer(t_time_sk#465)
    // Output Table: ListBuffer(ss_store_sk#1213)
    int left_nrow = tbl_JOIN_INNER_TD_3224_output.getNumRow();
    int right_nrow = tbl_Filter_TD_3237_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2568_key_leftMajor, SW_JOIN_INNER_TD_2568_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3224_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_time_sk1207_k = tbl_JOIN_INNER_TD_3224_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2568_key_leftMajor keyA{_ss_sold_time_sk1207_k};
            int32_t _ss_sold_time_sk1207 = tbl_JOIN_INNER_TD_3224_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_3224_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_2568_payload_leftMajor payloadA{_ss_sold_time_sk1207, _ss_store_sk1213};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_3237_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_3237_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2568_key_leftMajor{_t_time_sk465_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk1207 = (it->second)._ss_sold_time_sk1207;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _t_time_sk465 = tbl_Filter_TD_3237_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_2568_output.setInt32(r, 0, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2568_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2568_key_rightMajor, SW_JOIN_INNER_TD_2568_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_3237_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_3237_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2568_key_rightMajor keyA{_t_time_sk465_k};
            int32_t _t_time_sk465 = tbl_Filter_TD_3237_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2568_payload_rightMajor payloadA{_t_time_sk465};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3224_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_time_sk1207_k = tbl_JOIN_INNER_TD_3224_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2568_key_rightMajor{_ss_sold_time_sk1207_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk465 = (it->second)._t_time_sk465;
                int32_t _ss_sold_time_sk1207 = tbl_JOIN_INNER_TD_3224_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_3224_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_2568_output.setInt32(r, 0, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2568_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2568_output #Row: " << tbl_JOIN_INNER_TD_2568_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1122_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_1122_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1122_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1122_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_1122_payload_leftMajor {
    int32_t _ss_store_sk1213;
};
struct SW_JOIN_INNER_TD_1122_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_1122_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1122_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1122_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_1122_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_1122(Table &tbl_JOIN_INNER_TD_2568_output, Table &tbl_Filter_TD_2285_output, Table &tbl_JOIN_INNER_TD_1122_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_store_sk#1213)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(ss_store_sk#1213, s_store_sk#378)
    int left_nrow = tbl_JOIN_INNER_TD_2568_output.getNumRow();
    int right_nrow = tbl_Filter_TD_2285_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1122_key_leftMajor, SW_JOIN_INNER_TD_1122_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2568_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_2568_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1122_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_2568_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1122_payload_leftMajor payloadA{_ss_store_sk1213};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2285_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_2285_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1122_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _s_store_sk378 = tbl_Filter_TD_2285_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1122_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_1122_output.setInt32(r, 1, _s_store_sk378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1122_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1122_key_rightMajor, SW_JOIN_INNER_TD_1122_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_2285_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_2285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1122_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_2285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1122_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_2568_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_2568_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1122_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_2568_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1122_output.setInt32(r, 1, _s_store_sk378);
                tbl_JOIN_INNER_TD_1122_output.setInt32(r, 0, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1122_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1122_output #Row: " << tbl_JOIN_INNER_TD_1122_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0551(Table &tbl_JOIN_INNER_TD_1122_output, Table &tbl_Aggregate_TD_0551_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#4022L)
    // Input: ListBuffer(ss_store_sk#1213, s_store_sk#378)
    // Output: ListBuffer(count(1)#4022L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_1122_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_1122_output.getInt32(i, 0);
        int32_t _s_store_sk378 = tbl_JOIN_INNER_TD_1122_output.getInt32(i, 1);
        int64_t _count14022L_count_0 = 1;
        count_0 += _count14022L_count_0;
    }
    int r = 0;
    int64_t _count14022L = count_0;
    tbl_Aggregate_TD_0551_output.setInt64(r++, 0, _count14022L);
    tbl_Aggregate_TD_0551_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0551_output #Row: " << tbl_Aggregate_TD_0551_output.getNumRow() << std::endl;
}

