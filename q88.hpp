#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11389(Table &tbl_SerializeFromObject_TD_12904_input, Table &tbl_Filter_TD_11389_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#9670 = 4) AND (hd_vehicle_count#9671 <= 6)) OR ((hd_dep_count#9670 = 2) AND (hd_vehicle_count#9671 <= 4))) OR ((hd_dep_count#9670 = 0) AND (hd_vehicle_count#9671 <= 2))) AND isnotnull(hd_demo_sk#9667)))
    // Input: ListBuffer(hd_demo_sk#9667, hd_dep_count#9670, hd_vehicle_count#9671)
    // Output: ListBuffer(hd_demo_sk#9667)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12904_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count9670 = tbl_SerializeFromObject_TD_12904_input.getInt32(i, 1);
        int32_t _hd_vehicle_count9671 = tbl_SerializeFromObject_TD_12904_input.getInt32(i, 2);
        int32_t _hd_demo_sk9667 = tbl_SerializeFromObject_TD_12904_input.getInt32(i, 0);
        if (((((_hd_dep_count9670 == 4) && (_hd_vehicle_count9671 <= 6)) || ((_hd_dep_count9670 == 2) && (_hd_vehicle_count9671 <= 4))) || ((_hd_dep_count9670 == 0) && (_hd_vehicle_count9671 <= 2))) && (_hd_demo_sk9667!= 0)) {
            int32_t _hd_demo_sk9667_t = tbl_SerializeFromObject_TD_12904_input.getInt32(i, 0);
            tbl_Filter_TD_11389_output.setInt32(r, 0, _hd_demo_sk9667_t);
            r++;
        }
    }
    tbl_Filter_TD_11389_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11389_output #Row: " << tbl_Filter_TD_11389_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1145(Table &tbl_SerializeFromObject_TD_12152_input, Table &tbl_Filter_TD_1145_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#9649) AND (isnotnull(ss_sold_time_sk#9645) AND isnotnull(ss_store_sk#9651))))
    // Input: ListBuffer(ss_sold_time_sk#9645, ss_hdemo_sk#9649, ss_store_sk#9651)
    // Output: ListBuffer(ss_sold_time_sk#9645, ss_hdemo_sk#9649, ss_store_sk#9651)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12152_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk9649 = tbl_SerializeFromObject_TD_12152_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk9645 = tbl_SerializeFromObject_TD_12152_input.getInt32(i, 0);
        int32_t _ss_store_sk9651 = tbl_SerializeFromObject_TD_12152_input.getInt32(i, 2);
        if ((_ss_hdemo_sk9649!= 0) && ((_ss_sold_time_sk9645!= 0) && (_ss_store_sk9651!= 0))) {
            int32_t _ss_sold_time_sk9645_t = tbl_SerializeFromObject_TD_12152_input.getInt32(i, 0);
            tbl_Filter_TD_1145_output.setInt32(r, 0, _ss_sold_time_sk9645_t);
            int32_t _ss_hdemo_sk9649_t = tbl_SerializeFromObject_TD_12152_input.getInt32(i, 1);
            tbl_Filter_TD_1145_output.setInt32(r, 1, _ss_hdemo_sk9649_t);
            int32_t _ss_store_sk9651_t = tbl_SerializeFromObject_TD_12152_input.getInt32(i, 2);
            tbl_Filter_TD_1145_output.setInt32(r, 2, _ss_store_sk9651_t);
            r++;
        }
    }
    tbl_Filter_TD_1145_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1145_output #Row: " << tbl_Filter_TD_1145_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11894(Table &tbl_SerializeFromObject_TD_12786_input, Table &tbl_Filter_TD_11894_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#207 = 4) AND (hd_vehicle_count#208 <= 6)) OR ((hd_dep_count#207 = 2) AND (hd_vehicle_count#208 <= 4))) OR ((hd_dep_count#207 = 0) AND (hd_vehicle_count#208 <= 2))) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_dep_count#207, hd_vehicle_count#208)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12786_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_12786_input.getInt32(i, 1);
        int32_t _hd_vehicle_count208 = tbl_SerializeFromObject_TD_12786_input.getInt32(i, 2);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_12786_input.getInt32(i, 0);
        if (((((_hd_dep_count207 == 4) && (_hd_vehicle_count208 <= 6)) || ((_hd_dep_count207 == 2) && (_hd_vehicle_count208 <= 4))) || ((_hd_dep_count207 == 0) && (_hd_vehicle_count208 <= 2))) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_12786_input.getInt32(i, 0);
            tbl_Filter_TD_11894_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_11894_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11894_output #Row: " << tbl_Filter_TD_11894_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11342(Table &tbl_SerializeFromObject_TD_12774_input, Table &tbl_Filter_TD_11342_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#1211) AND (isnotnull(ss_sold_time_sk#1207) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    // Output: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12774_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_12774_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk1207 = tbl_SerializeFromObject_TD_12774_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12774_input.getInt32(i, 2);
        if ((_ss_hdemo_sk1211!= 0) && ((_ss_sold_time_sk1207!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_time_sk1207_t = tbl_SerializeFromObject_TD_12774_input.getInt32(i, 0);
            tbl_Filter_TD_11342_output.setInt32(r, 0, _ss_sold_time_sk1207_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_12774_input.getInt32(i, 1);
            tbl_Filter_TD_11342_output.setInt32(r, 1, _ss_hdemo_sk1211_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_12774_input.getInt32(i, 2);
            tbl_Filter_TD_11342_output.setInt32(r, 2, _ss_store_sk1213_t);
            r++;
        }
    }
    tbl_Filter_TD_11342_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11342_output #Row: " << tbl_Filter_TD_11342_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10357(Table &tbl_SerializeFromObject_TD_11169_input, Table &tbl_Filter_TD_10357_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#9737 = 4) AND (hd_vehicle_count#9738 <= 6)) OR ((hd_dep_count#9737 = 2) AND (hd_vehicle_count#9738 <= 4))) OR ((hd_dep_count#9737 = 0) AND (hd_vehicle_count#9738 <= 2))) AND isnotnull(hd_demo_sk#9734)))
    // Input: ListBuffer(hd_demo_sk#9734, hd_dep_count#9737, hd_vehicle_count#9738)
    // Output: ListBuffer(hd_demo_sk#9734)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11169_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count9737 = tbl_SerializeFromObject_TD_11169_input.getInt32(i, 1);
        int32_t _hd_vehicle_count9738 = tbl_SerializeFromObject_TD_11169_input.getInt32(i, 2);
        int32_t _hd_demo_sk9734 = tbl_SerializeFromObject_TD_11169_input.getInt32(i, 0);
        if (((((_hd_dep_count9737 == 4) && (_hd_vehicle_count9738 <= 6)) || ((_hd_dep_count9737 == 2) && (_hd_vehicle_count9738 <= 4))) || ((_hd_dep_count9737 == 0) && (_hd_vehicle_count9738 <= 2))) && (_hd_demo_sk9734!= 0)) {
            int32_t _hd_demo_sk9734_t = tbl_SerializeFromObject_TD_11169_input.getInt32(i, 0);
            tbl_Filter_TD_10357_output.setInt32(r, 0, _hd_demo_sk9734_t);
            r++;
        }
    }
    tbl_Filter_TD_10357_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10357_output #Row: " << tbl_Filter_TD_10357_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10999(Table &tbl_SerializeFromObject_TD_11754_input, Table &tbl_Filter_TD_10999_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#9716) AND (isnotnull(ss_sold_time_sk#9712) AND isnotnull(ss_store_sk#9718))))
    // Input: ListBuffer(ss_sold_time_sk#9712, ss_hdemo_sk#9716, ss_store_sk#9718)
    // Output: ListBuffer(ss_sold_time_sk#9712, ss_hdemo_sk#9716, ss_store_sk#9718)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11754_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk9716 = tbl_SerializeFromObject_TD_11754_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk9712 = tbl_SerializeFromObject_TD_11754_input.getInt32(i, 0);
        int32_t _ss_store_sk9718 = tbl_SerializeFromObject_TD_11754_input.getInt32(i, 2);
        if ((_ss_hdemo_sk9716!= 0) && ((_ss_sold_time_sk9712!= 0) && (_ss_store_sk9718!= 0))) {
            int32_t _ss_sold_time_sk9712_t = tbl_SerializeFromObject_TD_11754_input.getInt32(i, 0);
            tbl_Filter_TD_10999_output.setInt32(r, 0, _ss_sold_time_sk9712_t);
            int32_t _ss_hdemo_sk9716_t = tbl_SerializeFromObject_TD_11754_input.getInt32(i, 1);
            tbl_Filter_TD_10999_output.setInt32(r, 1, _ss_hdemo_sk9716_t);
            int32_t _ss_store_sk9718_t = tbl_SerializeFromObject_TD_11754_input.getInt32(i, 2);
            tbl_Filter_TD_10999_output.setInt32(r, 2, _ss_store_sk9718_t);
            r++;
        }
    }
    tbl_Filter_TD_10999_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10999_output #Row: " << tbl_Filter_TD_10999_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10399(Table &tbl_SerializeFromObject_TD_11808_input, Table &tbl_Filter_TD_10399_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#9675) AND isnotnull(t_minute#9676)) AND ((t_hour#9675 = 9) AND (t_minute#9676 < 30))) AND isnotnull(t_time_sk#9672)))
    // Input: ListBuffer(t_time_sk#9672, t_hour#9675, t_minute#9676)
    // Output: ListBuffer(t_time_sk#9672)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11808_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour9675 = tbl_SerializeFromObject_TD_11808_input.getInt32(i, 1);
        int32_t _t_minute9676 = tbl_SerializeFromObject_TD_11808_input.getInt32(i, 2);
        int32_t _t_time_sk9672 = tbl_SerializeFromObject_TD_11808_input.getInt32(i, 0);
        if ((((_t_hour9675!= 0) && (_t_minute9676!= 0)) && ((_t_hour9675 == 9) && (_t_minute9676 < 30))) && (_t_time_sk9672!= 0)) {
            int32_t _t_time_sk9672_t = tbl_SerializeFromObject_TD_11808_input.getInt32(i, 0);
            tbl_Filter_TD_10399_output.setInt32(r, 0, _t_time_sk9672_t);
            r++;
        }
    }
    tbl_Filter_TD_10399_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10399_output #Row: " << tbl_Filter_TD_10399_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10510_key_leftMajor {
    int32_t _ss_hdemo_sk9649;
    bool operator==(const SW_JOIN_INNER_TD_10510_key_leftMajor& other) const {
        return ((_ss_hdemo_sk9649 == other._ss_hdemo_sk9649));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10510_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10510_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk9649));
    }
};
}
struct SW_JOIN_INNER_TD_10510_payload_leftMajor {
    int32_t _ss_sold_time_sk9645;
    int32_t _ss_hdemo_sk9649;
    int32_t _ss_store_sk9651;
};
struct SW_JOIN_INNER_TD_10510_key_rightMajor {
    int32_t _hd_demo_sk9667;
    bool operator==(const SW_JOIN_INNER_TD_10510_key_rightMajor& other) const {
        return ((_hd_demo_sk9667 == other._hd_demo_sk9667));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10510_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10510_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk9667));
    }
};
}
struct SW_JOIN_INNER_TD_10510_payload_rightMajor {
    int32_t _hd_demo_sk9667;
};
void SW_JOIN_INNER_TD_10510(Table &tbl_Filter_TD_1145_output, Table &tbl_Filter_TD_11389_output, Table &tbl_JOIN_INNER_TD_10510_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#9649 = hd_demo_sk#9667))
    // Left Table: ListBuffer(ss_sold_time_sk#9645, ss_hdemo_sk#9649, ss_store_sk#9651)
    // Right Table: ListBuffer(hd_demo_sk#9667)
    // Output Table: ListBuffer(ss_sold_time_sk#9645, ss_store_sk#9651)
    int left_nrow = tbl_Filter_TD_1145_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11389_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10510_key_leftMajor, SW_JOIN_INNER_TD_10510_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1145_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk9649_k = tbl_Filter_TD_1145_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10510_key_leftMajor keyA{_ss_hdemo_sk9649_k};
            int32_t _ss_sold_time_sk9645 = tbl_Filter_TD_1145_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk9649 = tbl_Filter_TD_1145_output.getInt32(i, 1);
            int32_t _ss_store_sk9651 = tbl_Filter_TD_1145_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10510_payload_leftMajor payloadA{_ss_sold_time_sk9645, _ss_hdemo_sk9649, _ss_store_sk9651};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11389_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk9667_k = tbl_Filter_TD_11389_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10510_key_leftMajor{_hd_demo_sk9667_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9645 = (it->second)._ss_sold_time_sk9645;
                int32_t _ss_hdemo_sk9649 = (it->second)._ss_hdemo_sk9649;
                int32_t _ss_store_sk9651 = (it->second)._ss_store_sk9651;
                int32_t _hd_demo_sk9667 = tbl_Filter_TD_11389_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10510_output.setInt32(r, 0, _ss_sold_time_sk9645);
                tbl_JOIN_INNER_TD_10510_output.setInt32(r, 1, _ss_store_sk9651);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10510_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10510_key_rightMajor, SW_JOIN_INNER_TD_10510_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11389_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk9667_k = tbl_Filter_TD_11389_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10510_key_rightMajor keyA{_hd_demo_sk9667_k};
            int32_t _hd_demo_sk9667 = tbl_Filter_TD_11389_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10510_payload_rightMajor payloadA{_hd_demo_sk9667};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1145_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk9649_k = tbl_Filter_TD_1145_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10510_key_rightMajor{_ss_hdemo_sk9649_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk9667 = (it->second)._hd_demo_sk9667;
                int32_t _ss_sold_time_sk9645 = tbl_Filter_TD_1145_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk9649 = tbl_Filter_TD_1145_output.getInt32(i, 1);
                int32_t _ss_store_sk9651 = tbl_Filter_TD_1145_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10510_output.setInt32(r, 0, _ss_sold_time_sk9645);
                tbl_JOIN_INNER_TD_10510_output.setInt32(r, 1, _ss_store_sk9651);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10510_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10510_output #Row: " << tbl_JOIN_INNER_TD_10510_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10223(Table &tbl_SerializeFromObject_TD_11830_input, Table &tbl_Filter_TD_10223_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#468) AND isnotnull(t_minute#469)) AND ((t_hour#468 = 8) AND (t_minute#469 >= 30))) AND isnotnull(t_time_sk#465)))
    // Input: ListBuffer(t_time_sk#465, t_hour#468, t_minute#469)
    // Output: ListBuffer(t_time_sk#465)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11830_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour468 = tbl_SerializeFromObject_TD_11830_input.getInt32(i, 1);
        int32_t _t_minute469 = tbl_SerializeFromObject_TD_11830_input.getInt32(i, 2);
        int32_t _t_time_sk465 = tbl_SerializeFromObject_TD_11830_input.getInt32(i, 0);
        if ((((_t_hour468!= 0) && (_t_minute469!= 0)) && ((_t_hour468 == 8) && (_t_minute469 >= 30))) && (_t_time_sk465!= 0)) {
            int32_t _t_time_sk465_t = tbl_SerializeFromObject_TD_11830_input.getInt32(i, 0);
            tbl_Filter_TD_10223_output.setInt32(r, 0, _t_time_sk465_t);
            r++;
        }
    }
    tbl_Filter_TD_10223_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10223_output #Row: " << tbl_Filter_TD_10223_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10886_key_leftMajor {
    int32_t _ss_hdemo_sk1211;
    bool operator==(const SW_JOIN_INNER_TD_10886_key_leftMajor& other) const {
        return ((_ss_hdemo_sk1211 == other._ss_hdemo_sk1211));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10886_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10886_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk1211));
    }
};
}
struct SW_JOIN_INNER_TD_10886_payload_leftMajor {
    int32_t _ss_sold_time_sk1207;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_store_sk1213;
};
struct SW_JOIN_INNER_TD_10886_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_10886_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10886_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10886_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_10886_payload_rightMajor {
    int32_t _hd_demo_sk204;
};
void SW_JOIN_INNER_TD_10886(Table &tbl_Filter_TD_11342_output, Table &tbl_Filter_TD_11894_output, Table &tbl_JOIN_INNER_TD_10886_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#1211 = hd_demo_sk#204))
    // Left Table: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    // Right Table: ListBuffer(hd_demo_sk#204)
    // Output Table: ListBuffer(ss_sold_time_sk#1207, ss_store_sk#1213)
    int left_nrow = tbl_Filter_TD_11342_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11894_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10886_key_leftMajor, SW_JOIN_INNER_TD_10886_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11342_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_Filter_TD_11342_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10886_key_leftMajor keyA{_ss_hdemo_sk1211_k};
            int32_t _ss_sold_time_sk1207 = tbl_Filter_TD_11342_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_11342_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_11342_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10886_payload_leftMajor payloadA{_ss_sold_time_sk1207, _ss_hdemo_sk1211, _ss_store_sk1213};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11894_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_11894_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10886_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk1207 = (it->second)._ss_sold_time_sk1207;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _hd_demo_sk204 = tbl_Filter_TD_11894_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10886_output.setInt32(r, 0, _ss_sold_time_sk1207);
                tbl_JOIN_INNER_TD_10886_output.setInt32(r, 1, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10886_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10886_key_rightMajor, SW_JOIN_INNER_TD_10886_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11894_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_11894_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10886_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_11894_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10886_payload_rightMajor payloadA{_hd_demo_sk204};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11342_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_Filter_TD_11342_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10886_key_rightMajor{_ss_hdemo_sk1211_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _ss_sold_time_sk1207 = tbl_Filter_TD_11342_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_11342_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_11342_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10886_output.setInt32(r, 0, _ss_sold_time_sk1207);
                tbl_JOIN_INNER_TD_10886_output.setInt32(r, 1, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10886_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10886_output #Row: " << tbl_JOIN_INNER_TD_10886_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9968(Table &tbl_SerializeFromObject_TD_10427_input, Table &tbl_Filter_TD_9968_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#9804 = 4) AND (hd_vehicle_count#9805 <= 6)) OR ((hd_dep_count#9804 = 2) AND (hd_vehicle_count#9805 <= 4))) OR ((hd_dep_count#9804 = 0) AND (hd_vehicle_count#9805 <= 2))) AND isnotnull(hd_demo_sk#9801)))
    // Input: ListBuffer(hd_demo_sk#9801, hd_dep_count#9804, hd_vehicle_count#9805)
    // Output: ListBuffer(hd_demo_sk#9801)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10427_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count9804 = tbl_SerializeFromObject_TD_10427_input.getInt32(i, 1);
        int32_t _hd_vehicle_count9805 = tbl_SerializeFromObject_TD_10427_input.getInt32(i, 2);
        int32_t _hd_demo_sk9801 = tbl_SerializeFromObject_TD_10427_input.getInt32(i, 0);
        if (((((_hd_dep_count9804 == 4) && (_hd_vehicle_count9805 <= 6)) || ((_hd_dep_count9804 == 2) && (_hd_vehicle_count9805 <= 4))) || ((_hd_dep_count9804 == 0) && (_hd_vehicle_count9805 <= 2))) && (_hd_demo_sk9801!= 0)) {
            int32_t _hd_demo_sk9801_t = tbl_SerializeFromObject_TD_10427_input.getInt32(i, 0);
            tbl_Filter_TD_9968_output.setInt32(r, 0, _hd_demo_sk9801_t);
            r++;
        }
    }
    tbl_Filter_TD_9968_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9968_output #Row: " << tbl_Filter_TD_9968_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9365(Table &tbl_SerializeFromObject_TD_10855_input, Table &tbl_Filter_TD_9365_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#9783) AND (isnotnull(ss_sold_time_sk#9779) AND isnotnull(ss_store_sk#9785))))
    // Input: ListBuffer(ss_sold_time_sk#9779, ss_hdemo_sk#9783, ss_store_sk#9785)
    // Output: ListBuffer(ss_sold_time_sk#9779, ss_hdemo_sk#9783, ss_store_sk#9785)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10855_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk9783 = tbl_SerializeFromObject_TD_10855_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk9779 = tbl_SerializeFromObject_TD_10855_input.getInt32(i, 0);
        int32_t _ss_store_sk9785 = tbl_SerializeFromObject_TD_10855_input.getInt32(i, 2);
        if ((_ss_hdemo_sk9783!= 0) && ((_ss_sold_time_sk9779!= 0) && (_ss_store_sk9785!= 0))) {
            int32_t _ss_sold_time_sk9779_t = tbl_SerializeFromObject_TD_10855_input.getInt32(i, 0);
            tbl_Filter_TD_9365_output.setInt32(r, 0, _ss_sold_time_sk9779_t);
            int32_t _ss_hdemo_sk9783_t = tbl_SerializeFromObject_TD_10855_input.getInt32(i, 1);
            tbl_Filter_TD_9365_output.setInt32(r, 1, _ss_hdemo_sk9783_t);
            int32_t _ss_store_sk9785_t = tbl_SerializeFromObject_TD_10855_input.getInt32(i, 2);
            tbl_Filter_TD_9365_output.setInt32(r, 2, _ss_store_sk9785_t);
            r++;
        }
    }
    tbl_Filter_TD_9365_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9365_output #Row: " << tbl_Filter_TD_9365_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9706(Table &tbl_SerializeFromObject_TD_10865_input, Table &tbl_Filter_TD_9706_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#9742) AND isnotnull(t_minute#9743)) AND ((t_hour#9742 = 9) AND (t_minute#9743 >= 30))) AND isnotnull(t_time_sk#9739)))
    // Input: ListBuffer(t_time_sk#9739, t_hour#9742, t_minute#9743)
    // Output: ListBuffer(t_time_sk#9739)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10865_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour9742 = tbl_SerializeFromObject_TD_10865_input.getInt32(i, 1);
        int32_t _t_minute9743 = tbl_SerializeFromObject_TD_10865_input.getInt32(i, 2);
        int32_t _t_time_sk9739 = tbl_SerializeFromObject_TD_10865_input.getInt32(i, 0);
        if ((((_t_hour9742!= 0) && (_t_minute9743!= 0)) && ((_t_hour9742 == 9) && (_t_minute9743 >= 30))) && (_t_time_sk9739!= 0)) {
            int32_t _t_time_sk9739_t = tbl_SerializeFromObject_TD_10865_input.getInt32(i, 0);
            tbl_Filter_TD_9706_output.setInt32(r, 0, _t_time_sk9739_t);
            r++;
        }
    }
    tbl_Filter_TD_9706_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9706_output #Row: " << tbl_Filter_TD_9706_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9808_key_leftMajor {
    int32_t _ss_hdemo_sk9716;
    bool operator==(const SW_JOIN_INNER_TD_9808_key_leftMajor& other) const {
        return ((_ss_hdemo_sk9716 == other._ss_hdemo_sk9716));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9808_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9808_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk9716));
    }
};
}
struct SW_JOIN_INNER_TD_9808_payload_leftMajor {
    int32_t _ss_sold_time_sk9712;
    int32_t _ss_hdemo_sk9716;
    int32_t _ss_store_sk9718;
};
struct SW_JOIN_INNER_TD_9808_key_rightMajor {
    int32_t _hd_demo_sk9734;
    bool operator==(const SW_JOIN_INNER_TD_9808_key_rightMajor& other) const {
        return ((_hd_demo_sk9734 == other._hd_demo_sk9734));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9808_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9808_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk9734));
    }
};
}
struct SW_JOIN_INNER_TD_9808_payload_rightMajor {
    int32_t _hd_demo_sk9734;
};
void SW_JOIN_INNER_TD_9808(Table &tbl_Filter_TD_10999_output, Table &tbl_Filter_TD_10357_output, Table &tbl_JOIN_INNER_TD_9808_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#9716 = hd_demo_sk#9734))
    // Left Table: ListBuffer(ss_sold_time_sk#9712, ss_hdemo_sk#9716, ss_store_sk#9718)
    // Right Table: ListBuffer(hd_demo_sk#9734)
    // Output Table: ListBuffer(ss_sold_time_sk#9712, ss_store_sk#9718)
    int left_nrow = tbl_Filter_TD_10999_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10357_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9808_key_leftMajor, SW_JOIN_INNER_TD_9808_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10999_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk9716_k = tbl_Filter_TD_10999_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9808_key_leftMajor keyA{_ss_hdemo_sk9716_k};
            int32_t _ss_sold_time_sk9712 = tbl_Filter_TD_10999_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk9716 = tbl_Filter_TD_10999_output.getInt32(i, 1);
            int32_t _ss_store_sk9718 = tbl_Filter_TD_10999_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9808_payload_leftMajor payloadA{_ss_sold_time_sk9712, _ss_hdemo_sk9716, _ss_store_sk9718};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10357_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk9734_k = tbl_Filter_TD_10357_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9808_key_leftMajor{_hd_demo_sk9734_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9712 = (it->second)._ss_sold_time_sk9712;
                int32_t _ss_hdemo_sk9716 = (it->second)._ss_hdemo_sk9716;
                int32_t _ss_store_sk9718 = (it->second)._ss_store_sk9718;
                int32_t _hd_demo_sk9734 = tbl_Filter_TD_10357_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9808_output.setInt32(r, 0, _ss_sold_time_sk9712);
                tbl_JOIN_INNER_TD_9808_output.setInt32(r, 1, _ss_store_sk9718);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9808_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9808_key_rightMajor, SW_JOIN_INNER_TD_9808_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10357_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk9734_k = tbl_Filter_TD_10357_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9808_key_rightMajor keyA{_hd_demo_sk9734_k};
            int32_t _hd_demo_sk9734 = tbl_Filter_TD_10357_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9808_payload_rightMajor payloadA{_hd_demo_sk9734};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10999_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk9716_k = tbl_Filter_TD_10999_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9808_key_rightMajor{_ss_hdemo_sk9716_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk9734 = (it->second)._hd_demo_sk9734;
                int32_t _ss_sold_time_sk9712 = tbl_Filter_TD_10999_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk9716 = tbl_Filter_TD_10999_output.getInt32(i, 1);
                int32_t _ss_store_sk9718 = tbl_Filter_TD_10999_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9808_output.setInt32(r, 0, _ss_sold_time_sk9712);
                tbl_JOIN_INNER_TD_9808_output.setInt32(r, 1, _ss_store_sk9718);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9808_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9808_output #Row: " << tbl_JOIN_INNER_TD_9808_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9672(Table &tbl_SerializeFromObject_TD_10375_input, Table &tbl_Filter_TD_9672_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#9687) AND (s_store_name#9687 = ese)) AND isnotnull(s_store_sk#9682)))
    // Input: ListBuffer(s_store_sk#9682, s_store_name#9687)
    // Output: ListBuffer(s_store_sk#9682)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10375_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name9687 = tbl_SerializeFromObject_TD_10375_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk9682 = tbl_SerializeFromObject_TD_10375_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_store_name9687.data()) != "NULL") && (std::string(_s_store_name9687.data()) == "ese")) && (_s_store_sk9682!= 0)) {
            int32_t _s_store_sk9682_t = tbl_SerializeFromObject_TD_10375_input.getInt32(i, 0);
            tbl_Filter_TD_9672_output.setInt32(r, 0, _s_store_sk9682_t);
            r++;
        }
    }
    tbl_Filter_TD_9672_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9672_output #Row: " << tbl_Filter_TD_9672_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9835_key_leftMajor {
    int32_t _ss_sold_time_sk9645;
    bool operator==(const SW_JOIN_INNER_TD_9835_key_leftMajor& other) const {
        return ((_ss_sold_time_sk9645 == other._ss_sold_time_sk9645));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9835_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9835_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_time_sk9645));
    }
};
}
struct SW_JOIN_INNER_TD_9835_payload_leftMajor {
    int32_t _ss_sold_time_sk9645;
    int32_t _ss_store_sk9651;
};
struct SW_JOIN_INNER_TD_9835_key_rightMajor {
    int32_t _t_time_sk9672;
    bool operator==(const SW_JOIN_INNER_TD_9835_key_rightMajor& other) const {
        return ((_t_time_sk9672 == other._t_time_sk9672));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9835_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9835_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk9672));
    }
};
}
struct SW_JOIN_INNER_TD_9835_payload_rightMajor {
    int32_t _t_time_sk9672;
};
void SW_JOIN_INNER_TD_9835(Table &tbl_JOIN_INNER_TD_10510_output, Table &tbl_Filter_TD_10399_output, Table &tbl_JOIN_INNER_TD_9835_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_time_sk#9645 = t_time_sk#9672))
    // Left Table: ListBuffer(ss_sold_time_sk#9645, ss_store_sk#9651)
    // Right Table: ListBuffer(t_time_sk#9672)
    // Output Table: ListBuffer(ss_store_sk#9651)
    int left_nrow = tbl_JOIN_INNER_TD_10510_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10399_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9835_key_leftMajor, SW_JOIN_INNER_TD_9835_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10510_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_time_sk9645_k = tbl_JOIN_INNER_TD_10510_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9835_key_leftMajor keyA{_ss_sold_time_sk9645_k};
            int32_t _ss_sold_time_sk9645 = tbl_JOIN_INNER_TD_10510_output.getInt32(i, 0);
            int32_t _ss_store_sk9651 = tbl_JOIN_INNER_TD_10510_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9835_payload_leftMajor payloadA{_ss_sold_time_sk9645, _ss_store_sk9651};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10399_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk9672_k = tbl_Filter_TD_10399_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9835_key_leftMajor{_t_time_sk9672_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9645 = (it->second)._ss_sold_time_sk9645;
                int32_t _ss_store_sk9651 = (it->second)._ss_store_sk9651;
                int32_t _t_time_sk9672 = tbl_Filter_TD_10399_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9835_output.setInt32(r, 0, _ss_store_sk9651);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9835_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9835_key_rightMajor, SW_JOIN_INNER_TD_9835_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10399_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk9672_k = tbl_Filter_TD_10399_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9835_key_rightMajor keyA{_t_time_sk9672_k};
            int32_t _t_time_sk9672 = tbl_Filter_TD_10399_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9835_payload_rightMajor payloadA{_t_time_sk9672};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10510_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_time_sk9645_k = tbl_JOIN_INNER_TD_10510_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9835_key_rightMajor{_ss_sold_time_sk9645_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk9672 = (it->second)._t_time_sk9672;
                int32_t _ss_sold_time_sk9645 = tbl_JOIN_INNER_TD_10510_output.getInt32(i, 0);
                int32_t _ss_store_sk9651 = tbl_JOIN_INNER_TD_10510_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9835_output.setInt32(r, 0, _ss_store_sk9651);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9835_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9835_output #Row: " << tbl_JOIN_INNER_TD_9835_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9172(Table &tbl_SerializeFromObject_TD_10350_input, Table &tbl_Filter_TD_9172_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#383) AND (s_store_name#383 = ese)) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10350_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_SerializeFromObject_TD_10350_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_10350_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_store_name383.data()) != "NULL") && (std::string(_s_store_name383.data()) == "ese")) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_10350_input.getInt32(i, 0);
            tbl_Filter_TD_9172_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_9172_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9172_output #Row: " << tbl_Filter_TD_9172_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9419_key_leftMajor {
    int32_t _ss_sold_time_sk1207;
    bool operator==(const SW_JOIN_INNER_TD_9419_key_leftMajor& other) const {
        return ((_ss_sold_time_sk1207 == other._ss_sold_time_sk1207));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9419_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9419_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_time_sk1207));
    }
};
}
struct SW_JOIN_INNER_TD_9419_payload_leftMajor {
    int32_t _ss_sold_time_sk1207;
    int32_t _ss_store_sk1213;
};
struct SW_JOIN_INNER_TD_9419_key_rightMajor {
    int32_t _t_time_sk465;
    bool operator==(const SW_JOIN_INNER_TD_9419_key_rightMajor& other) const {
        return ((_t_time_sk465 == other._t_time_sk465));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9419_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9419_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk465));
    }
};
}
struct SW_JOIN_INNER_TD_9419_payload_rightMajor {
    int32_t _t_time_sk465;
};
void SW_JOIN_INNER_TD_9419(Table &tbl_JOIN_INNER_TD_10886_output, Table &tbl_Filter_TD_10223_output, Table &tbl_JOIN_INNER_TD_9419_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_time_sk#1207 = t_time_sk#465))
    // Left Table: ListBuffer(ss_sold_time_sk#1207, ss_store_sk#1213)
    // Right Table: ListBuffer(t_time_sk#465)
    // Output Table: ListBuffer(ss_store_sk#1213)
    int left_nrow = tbl_JOIN_INNER_TD_10886_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10223_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9419_key_leftMajor, SW_JOIN_INNER_TD_9419_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10886_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_time_sk1207_k = tbl_JOIN_INNER_TD_10886_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9419_key_leftMajor keyA{_ss_sold_time_sk1207_k};
            int32_t _ss_sold_time_sk1207 = tbl_JOIN_INNER_TD_10886_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10886_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9419_payload_leftMajor payloadA{_ss_sold_time_sk1207, _ss_store_sk1213};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10223_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_10223_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9419_key_leftMajor{_t_time_sk465_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk1207 = (it->second)._ss_sold_time_sk1207;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _t_time_sk465 = tbl_Filter_TD_10223_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9419_output.setInt32(r, 0, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9419_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9419_key_rightMajor, SW_JOIN_INNER_TD_9419_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10223_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_10223_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9419_key_rightMajor keyA{_t_time_sk465_k};
            int32_t _t_time_sk465 = tbl_Filter_TD_10223_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9419_payload_rightMajor payloadA{_t_time_sk465};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10886_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_time_sk1207_k = tbl_JOIN_INNER_TD_10886_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9419_key_rightMajor{_ss_sold_time_sk1207_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk465 = (it->second)._t_time_sk465;
                int32_t _ss_sold_time_sk1207 = tbl_JOIN_INNER_TD_10886_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10886_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9419_output.setInt32(r, 0, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9419_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9419_output #Row: " << tbl_JOIN_INNER_TD_9419_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8517(Table &tbl_SerializeFromObject_TD_9867_input, Table &tbl_Filter_TD_8517_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#9871 = 4) AND (hd_vehicle_count#9872 <= 6)) OR ((hd_dep_count#9871 = 2) AND (hd_vehicle_count#9872 <= 4))) OR ((hd_dep_count#9871 = 0) AND (hd_vehicle_count#9872 <= 2))) AND isnotnull(hd_demo_sk#9868)))
    // Input: ListBuffer(hd_demo_sk#9868, hd_dep_count#9871, hd_vehicle_count#9872)
    // Output: ListBuffer(hd_demo_sk#9868)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9867_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count9871 = tbl_SerializeFromObject_TD_9867_input.getInt32(i, 1);
        int32_t _hd_vehicle_count9872 = tbl_SerializeFromObject_TD_9867_input.getInt32(i, 2);
        int32_t _hd_demo_sk9868 = tbl_SerializeFromObject_TD_9867_input.getInt32(i, 0);
        if (((((_hd_dep_count9871 == 4) && (_hd_vehicle_count9872 <= 6)) || ((_hd_dep_count9871 == 2) && (_hd_vehicle_count9872 <= 4))) || ((_hd_dep_count9871 == 0) && (_hd_vehicle_count9872 <= 2))) && (_hd_demo_sk9868!= 0)) {
            int32_t _hd_demo_sk9868_t = tbl_SerializeFromObject_TD_9867_input.getInt32(i, 0);
            tbl_Filter_TD_8517_output.setInt32(r, 0, _hd_demo_sk9868_t);
            r++;
        }
    }
    tbl_Filter_TD_8517_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8517_output #Row: " << tbl_Filter_TD_8517_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8847(Table &tbl_SerializeFromObject_TD_9986_input, Table &tbl_Filter_TD_8847_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#9850) AND (isnotnull(ss_sold_time_sk#9846) AND isnotnull(ss_store_sk#9852))))
    // Input: ListBuffer(ss_sold_time_sk#9846, ss_hdemo_sk#9850, ss_store_sk#9852)
    // Output: ListBuffer(ss_sold_time_sk#9846, ss_hdemo_sk#9850, ss_store_sk#9852)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9986_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk9850 = tbl_SerializeFromObject_TD_9986_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk9846 = tbl_SerializeFromObject_TD_9986_input.getInt32(i, 0);
        int32_t _ss_store_sk9852 = tbl_SerializeFromObject_TD_9986_input.getInt32(i, 2);
        if ((_ss_hdemo_sk9850!= 0) && ((_ss_sold_time_sk9846!= 0) && (_ss_store_sk9852!= 0))) {
            int32_t _ss_sold_time_sk9846_t = tbl_SerializeFromObject_TD_9986_input.getInt32(i, 0);
            tbl_Filter_TD_8847_output.setInt32(r, 0, _ss_sold_time_sk9846_t);
            int32_t _ss_hdemo_sk9850_t = tbl_SerializeFromObject_TD_9986_input.getInt32(i, 1);
            tbl_Filter_TD_8847_output.setInt32(r, 1, _ss_hdemo_sk9850_t);
            int32_t _ss_store_sk9852_t = tbl_SerializeFromObject_TD_9986_input.getInt32(i, 2);
            tbl_Filter_TD_8847_output.setInt32(r, 2, _ss_store_sk9852_t);
            r++;
        }
    }
    tbl_Filter_TD_8847_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8847_output #Row: " << tbl_Filter_TD_8847_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8388(Table &tbl_SerializeFromObject_TD_9365_input, Table &tbl_Filter_TD_8388_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#9809) AND isnotnull(t_minute#9810)) AND ((t_hour#9809 = 10) AND (t_minute#9810 < 30))) AND isnotnull(t_time_sk#9806)))
    // Input: ListBuffer(t_time_sk#9806, t_hour#9809, t_minute#9810)
    // Output: ListBuffer(t_time_sk#9806)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9365_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour9809 = tbl_SerializeFromObject_TD_9365_input.getInt32(i, 1);
        int32_t _t_minute9810 = tbl_SerializeFromObject_TD_9365_input.getInt32(i, 2);
        int32_t _t_time_sk9806 = tbl_SerializeFromObject_TD_9365_input.getInt32(i, 0);
        if ((((_t_hour9809!= 0) && (_t_minute9810!= 0)) && ((_t_hour9809 == 10) && (_t_minute9810 < 30))) && (_t_time_sk9806!= 0)) {
            int32_t _t_time_sk9806_t = tbl_SerializeFromObject_TD_9365_input.getInt32(i, 0);
            tbl_Filter_TD_8388_output.setInt32(r, 0, _t_time_sk9806_t);
            r++;
        }
    }
    tbl_Filter_TD_8388_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8388_output #Row: " << tbl_Filter_TD_8388_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8791_key_leftMajor {
    int32_t _ss_hdemo_sk9783;
    bool operator==(const SW_JOIN_INNER_TD_8791_key_leftMajor& other) const {
        return ((_ss_hdemo_sk9783 == other._ss_hdemo_sk9783));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8791_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8791_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk9783));
    }
};
}
struct SW_JOIN_INNER_TD_8791_payload_leftMajor {
    int32_t _ss_sold_time_sk9779;
    int32_t _ss_hdemo_sk9783;
    int32_t _ss_store_sk9785;
};
struct SW_JOIN_INNER_TD_8791_key_rightMajor {
    int32_t _hd_demo_sk9801;
    bool operator==(const SW_JOIN_INNER_TD_8791_key_rightMajor& other) const {
        return ((_hd_demo_sk9801 == other._hd_demo_sk9801));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8791_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8791_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk9801));
    }
};
}
struct SW_JOIN_INNER_TD_8791_payload_rightMajor {
    int32_t _hd_demo_sk9801;
};
void SW_JOIN_INNER_TD_8791(Table &tbl_Filter_TD_9365_output, Table &tbl_Filter_TD_9968_output, Table &tbl_JOIN_INNER_TD_8791_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#9783 = hd_demo_sk#9801))
    // Left Table: ListBuffer(ss_sold_time_sk#9779, ss_hdemo_sk#9783, ss_store_sk#9785)
    // Right Table: ListBuffer(hd_demo_sk#9801)
    // Output Table: ListBuffer(ss_sold_time_sk#9779, ss_store_sk#9785)
    int left_nrow = tbl_Filter_TD_9365_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9968_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8791_key_leftMajor, SW_JOIN_INNER_TD_8791_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9365_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk9783_k = tbl_Filter_TD_9365_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8791_key_leftMajor keyA{_ss_hdemo_sk9783_k};
            int32_t _ss_sold_time_sk9779 = tbl_Filter_TD_9365_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk9783 = tbl_Filter_TD_9365_output.getInt32(i, 1);
            int32_t _ss_store_sk9785 = tbl_Filter_TD_9365_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8791_payload_leftMajor payloadA{_ss_sold_time_sk9779, _ss_hdemo_sk9783, _ss_store_sk9785};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9968_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk9801_k = tbl_Filter_TD_9968_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8791_key_leftMajor{_hd_demo_sk9801_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9779 = (it->second)._ss_sold_time_sk9779;
                int32_t _ss_hdemo_sk9783 = (it->second)._ss_hdemo_sk9783;
                int32_t _ss_store_sk9785 = (it->second)._ss_store_sk9785;
                int32_t _hd_demo_sk9801 = tbl_Filter_TD_9968_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8791_output.setInt32(r, 0, _ss_sold_time_sk9779);
                tbl_JOIN_INNER_TD_8791_output.setInt32(r, 1, _ss_store_sk9785);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8791_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8791_key_rightMajor, SW_JOIN_INNER_TD_8791_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9968_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk9801_k = tbl_Filter_TD_9968_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8791_key_rightMajor keyA{_hd_demo_sk9801_k};
            int32_t _hd_demo_sk9801 = tbl_Filter_TD_9968_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8791_payload_rightMajor payloadA{_hd_demo_sk9801};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9365_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk9783_k = tbl_Filter_TD_9365_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8791_key_rightMajor{_ss_hdemo_sk9783_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk9801 = (it->second)._hd_demo_sk9801;
                int32_t _ss_sold_time_sk9779 = tbl_Filter_TD_9365_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk9783 = tbl_Filter_TD_9365_output.getInt32(i, 1);
                int32_t _ss_store_sk9785 = tbl_Filter_TD_9365_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8791_output.setInt32(r, 0, _ss_sold_time_sk9779);
                tbl_JOIN_INNER_TD_8791_output.setInt32(r, 1, _ss_store_sk9785);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8791_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8791_output #Row: " << tbl_JOIN_INNER_TD_8791_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8329(Table &tbl_SerializeFromObject_TD_9840_input, Table &tbl_Filter_TD_8329_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#9754) AND (s_store_name#9754 = ese)) AND isnotnull(s_store_sk#9749)))
    // Input: ListBuffer(s_store_sk#9749, s_store_name#9754)
    // Output: ListBuffer(s_store_sk#9749)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9840_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name9754 = tbl_SerializeFromObject_TD_9840_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk9749 = tbl_SerializeFromObject_TD_9840_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_store_name9754.data()) != "NULL") && (std::string(_s_store_name9754.data()) == "ese")) && (_s_store_sk9749!= 0)) {
            int32_t _s_store_sk9749_t = tbl_SerializeFromObject_TD_9840_input.getInt32(i, 0);
            tbl_Filter_TD_8329_output.setInt32(r, 0, _s_store_sk9749_t);
            r++;
        }
    }
    tbl_Filter_TD_8329_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8329_output #Row: " << tbl_Filter_TD_8329_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8191_key_leftMajor {
    int32_t _ss_sold_time_sk9712;
    bool operator==(const SW_JOIN_INNER_TD_8191_key_leftMajor& other) const {
        return ((_ss_sold_time_sk9712 == other._ss_sold_time_sk9712));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8191_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8191_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_time_sk9712));
    }
};
}
struct SW_JOIN_INNER_TD_8191_payload_leftMajor {
    int32_t _ss_sold_time_sk9712;
    int32_t _ss_store_sk9718;
};
struct SW_JOIN_INNER_TD_8191_key_rightMajor {
    int32_t _t_time_sk9739;
    bool operator==(const SW_JOIN_INNER_TD_8191_key_rightMajor& other) const {
        return ((_t_time_sk9739 == other._t_time_sk9739));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8191_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8191_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk9739));
    }
};
}
struct SW_JOIN_INNER_TD_8191_payload_rightMajor {
    int32_t _t_time_sk9739;
};
void SW_JOIN_INNER_TD_8191(Table &tbl_JOIN_INNER_TD_9808_output, Table &tbl_Filter_TD_9706_output, Table &tbl_JOIN_INNER_TD_8191_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_time_sk#9712 = t_time_sk#9739))
    // Left Table: ListBuffer(ss_sold_time_sk#9712, ss_store_sk#9718)
    // Right Table: ListBuffer(t_time_sk#9739)
    // Output Table: ListBuffer(ss_store_sk#9718)
    int left_nrow = tbl_JOIN_INNER_TD_9808_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9706_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8191_key_leftMajor, SW_JOIN_INNER_TD_8191_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9808_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_time_sk9712_k = tbl_JOIN_INNER_TD_9808_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8191_key_leftMajor keyA{_ss_sold_time_sk9712_k};
            int32_t _ss_sold_time_sk9712 = tbl_JOIN_INNER_TD_9808_output.getInt32(i, 0);
            int32_t _ss_store_sk9718 = tbl_JOIN_INNER_TD_9808_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8191_payload_leftMajor payloadA{_ss_sold_time_sk9712, _ss_store_sk9718};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9706_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk9739_k = tbl_Filter_TD_9706_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8191_key_leftMajor{_t_time_sk9739_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9712 = (it->second)._ss_sold_time_sk9712;
                int32_t _ss_store_sk9718 = (it->second)._ss_store_sk9718;
                int32_t _t_time_sk9739 = tbl_Filter_TD_9706_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8191_output.setInt32(r, 0, _ss_store_sk9718);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8191_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8191_key_rightMajor, SW_JOIN_INNER_TD_8191_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9706_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk9739_k = tbl_Filter_TD_9706_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8191_key_rightMajor keyA{_t_time_sk9739_k};
            int32_t _t_time_sk9739 = tbl_Filter_TD_9706_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8191_payload_rightMajor payloadA{_t_time_sk9739};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9808_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_time_sk9712_k = tbl_JOIN_INNER_TD_9808_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8191_key_rightMajor{_ss_sold_time_sk9712_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk9739 = (it->second)._t_time_sk9739;
                int32_t _ss_sold_time_sk9712 = tbl_JOIN_INNER_TD_9808_output.getInt32(i, 0);
                int32_t _ss_store_sk9718 = tbl_JOIN_INNER_TD_9808_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8191_output.setInt32(r, 0, _ss_store_sk9718);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8191_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8191_output #Row: " << tbl_JOIN_INNER_TD_8191_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8441_key_leftMajor {
    int32_t _ss_store_sk9651;
    bool operator==(const SW_JOIN_INNER_TD_8441_key_leftMajor& other) const {
        return ((_ss_store_sk9651 == other._ss_store_sk9651));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8441_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8441_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk9651));
    }
};
}
struct SW_JOIN_INNER_TD_8441_payload_leftMajor {
    int32_t _ss_store_sk9651;
};
struct SW_JOIN_INNER_TD_8441_key_rightMajor {
    int32_t _s_store_sk9682;
    bool operator==(const SW_JOIN_INNER_TD_8441_key_rightMajor& other) const {
        return ((_s_store_sk9682 == other._s_store_sk9682));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8441_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8441_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk9682));
    }
};
}
struct SW_JOIN_INNER_TD_8441_payload_rightMajor {
    int32_t _s_store_sk9682;
};
void SW_JOIN_INNER_TD_8441(Table &tbl_JOIN_INNER_TD_9835_output, Table &tbl_Filter_TD_9672_output, Table &tbl_JOIN_INNER_TD_8441_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#9651 = s_store_sk#9682))
    // Left Table: ListBuffer(ss_store_sk#9651)
    // Right Table: ListBuffer(s_store_sk#9682)
    // Output Table: ListBuffer(ss_store_sk#9651, s_store_sk#9682)
    int left_nrow = tbl_JOIN_INNER_TD_9835_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9672_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8441_key_leftMajor, SW_JOIN_INNER_TD_8441_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9835_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk9651_k = tbl_JOIN_INNER_TD_9835_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8441_key_leftMajor keyA{_ss_store_sk9651_k};
            int32_t _ss_store_sk9651 = tbl_JOIN_INNER_TD_9835_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8441_payload_leftMajor payloadA{_ss_store_sk9651};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9672_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk9682_k = tbl_Filter_TD_9672_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8441_key_leftMajor{_s_store_sk9682_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk9651 = (it->second)._ss_store_sk9651;
                int32_t _s_store_sk9682 = tbl_Filter_TD_9672_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8441_output.setInt32(r, 0, _ss_store_sk9651);
                tbl_JOIN_INNER_TD_8441_output.setInt32(r, 1, _s_store_sk9682);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8441_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8441_key_rightMajor, SW_JOIN_INNER_TD_8441_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9672_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk9682_k = tbl_Filter_TD_9672_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8441_key_rightMajor keyA{_s_store_sk9682_k};
            int32_t _s_store_sk9682 = tbl_Filter_TD_9672_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8441_payload_rightMajor payloadA{_s_store_sk9682};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9835_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk9651_k = tbl_JOIN_INNER_TD_9835_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8441_key_rightMajor{_ss_store_sk9651_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk9682 = (it->second)._s_store_sk9682;
                int32_t _ss_store_sk9651 = tbl_JOIN_INNER_TD_9835_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8441_output.setInt32(r, 1, _s_store_sk9682);
                tbl_JOIN_INNER_TD_8441_output.setInt32(r, 0, _ss_store_sk9651);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8441_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8441_output #Row: " << tbl_JOIN_INNER_TD_8441_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8594_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_8594_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8594_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8594_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_8594_payload_leftMajor {
    int32_t _ss_store_sk1213;
};
struct SW_JOIN_INNER_TD_8594_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_8594_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8594_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8594_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_8594_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_8594(Table &tbl_JOIN_INNER_TD_9419_output, Table &tbl_Filter_TD_9172_output, Table &tbl_JOIN_INNER_TD_8594_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_store_sk#1213)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(ss_store_sk#1213, s_store_sk#378)
    int left_nrow = tbl_JOIN_INNER_TD_9419_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9172_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8594_key_leftMajor, SW_JOIN_INNER_TD_8594_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9419_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_9419_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8594_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9419_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8594_payload_leftMajor payloadA{_ss_store_sk1213};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9172_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_9172_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8594_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _s_store_sk378 = tbl_Filter_TD_9172_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8594_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8594_output.setInt32(r, 1, _s_store_sk378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8594_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8594_key_rightMajor, SW_JOIN_INNER_TD_8594_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9172_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_9172_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8594_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_9172_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8594_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9419_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_9419_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8594_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9419_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8594_output.setInt32(r, 1, _s_store_sk378);
                tbl_JOIN_INNER_TD_8594_output.setInt32(r, 0, _ss_store_sk1213);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8594_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8594_output #Row: " << tbl_JOIN_INNER_TD_8594_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7808(Table &tbl_SerializeFromObject_TD_8886_input, Table &tbl_Filter_TD_7808_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#9938 = 4) AND (hd_vehicle_count#9939 <= 6)) OR ((hd_dep_count#9938 = 2) AND (hd_vehicle_count#9939 <= 4))) OR ((hd_dep_count#9938 = 0) AND (hd_vehicle_count#9939 <= 2))) AND isnotnull(hd_demo_sk#9935)))
    // Input: ListBuffer(hd_demo_sk#9935, hd_dep_count#9938, hd_vehicle_count#9939)
    // Output: ListBuffer(hd_demo_sk#9935)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8886_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count9938 = tbl_SerializeFromObject_TD_8886_input.getInt32(i, 1);
        int32_t _hd_vehicle_count9939 = tbl_SerializeFromObject_TD_8886_input.getInt32(i, 2);
        int32_t _hd_demo_sk9935 = tbl_SerializeFromObject_TD_8886_input.getInt32(i, 0);
        if (((((_hd_dep_count9938 == 4) && (_hd_vehicle_count9939 <= 6)) || ((_hd_dep_count9938 == 2) && (_hd_vehicle_count9939 <= 4))) || ((_hd_dep_count9938 == 0) && (_hd_vehicle_count9939 <= 2))) && (_hd_demo_sk9935!= 0)) {
            int32_t _hd_demo_sk9935_t = tbl_SerializeFromObject_TD_8886_input.getInt32(i, 0);
            tbl_Filter_TD_7808_output.setInt32(r, 0, _hd_demo_sk9935_t);
            r++;
        }
    }
    tbl_Filter_TD_7808_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7808_output #Row: " << tbl_Filter_TD_7808_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7820(Table &tbl_SerializeFromObject_TD_8116_input, Table &tbl_Filter_TD_7820_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#9917) AND (isnotnull(ss_sold_time_sk#9913) AND isnotnull(ss_store_sk#9919))))
    // Input: ListBuffer(ss_sold_time_sk#9913, ss_hdemo_sk#9917, ss_store_sk#9919)
    // Output: ListBuffer(ss_sold_time_sk#9913, ss_hdemo_sk#9917, ss_store_sk#9919)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8116_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk9917 = tbl_SerializeFromObject_TD_8116_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk9913 = tbl_SerializeFromObject_TD_8116_input.getInt32(i, 0);
        int32_t _ss_store_sk9919 = tbl_SerializeFromObject_TD_8116_input.getInt32(i, 2);
        if ((_ss_hdemo_sk9917!= 0) && ((_ss_sold_time_sk9913!= 0) && (_ss_store_sk9919!= 0))) {
            int32_t _ss_sold_time_sk9913_t = tbl_SerializeFromObject_TD_8116_input.getInt32(i, 0);
            tbl_Filter_TD_7820_output.setInt32(r, 0, _ss_sold_time_sk9913_t);
            int32_t _ss_hdemo_sk9917_t = tbl_SerializeFromObject_TD_8116_input.getInt32(i, 1);
            tbl_Filter_TD_7820_output.setInt32(r, 1, _ss_hdemo_sk9917_t);
            int32_t _ss_store_sk9919_t = tbl_SerializeFromObject_TD_8116_input.getInt32(i, 2);
            tbl_Filter_TD_7820_output.setInt32(r, 2, _ss_store_sk9919_t);
            r++;
        }
    }
    tbl_Filter_TD_7820_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7820_output #Row: " << tbl_Filter_TD_7820_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7978(Table &tbl_SerializeFromObject_TD_8965_input, Table &tbl_Filter_TD_7978_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#9876) AND isnotnull(t_minute#9877)) AND ((t_hour#9876 = 10) AND (t_minute#9877 >= 30))) AND isnotnull(t_time_sk#9873)))
    // Input: ListBuffer(t_time_sk#9873, t_hour#9876, t_minute#9877)
    // Output: ListBuffer(t_time_sk#9873)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8965_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour9876 = tbl_SerializeFromObject_TD_8965_input.getInt32(i, 1);
        int32_t _t_minute9877 = tbl_SerializeFromObject_TD_8965_input.getInt32(i, 2);
        int32_t _t_time_sk9873 = tbl_SerializeFromObject_TD_8965_input.getInt32(i, 0);
        if ((((_t_hour9876!= 0) && (_t_minute9877!= 0)) && ((_t_hour9876 == 10) && (_t_minute9877 >= 30))) && (_t_time_sk9873!= 0)) {
            int32_t _t_time_sk9873_t = tbl_SerializeFromObject_TD_8965_input.getInt32(i, 0);
            tbl_Filter_TD_7978_output.setInt32(r, 0, _t_time_sk9873_t);
            r++;
        }
    }
    tbl_Filter_TD_7978_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7978_output #Row: " << tbl_Filter_TD_7978_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7939_key_leftMajor {
    int32_t _ss_hdemo_sk9850;
    bool operator==(const SW_JOIN_INNER_TD_7939_key_leftMajor& other) const {
        return ((_ss_hdemo_sk9850 == other._ss_hdemo_sk9850));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7939_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7939_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk9850));
    }
};
}
struct SW_JOIN_INNER_TD_7939_payload_leftMajor {
    int32_t _ss_sold_time_sk9846;
    int32_t _ss_hdemo_sk9850;
    int32_t _ss_store_sk9852;
};
struct SW_JOIN_INNER_TD_7939_key_rightMajor {
    int32_t _hd_demo_sk9868;
    bool operator==(const SW_JOIN_INNER_TD_7939_key_rightMajor& other) const {
        return ((_hd_demo_sk9868 == other._hd_demo_sk9868));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7939_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7939_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk9868));
    }
};
}
struct SW_JOIN_INNER_TD_7939_payload_rightMajor {
    int32_t _hd_demo_sk9868;
};
void SW_JOIN_INNER_TD_7939(Table &tbl_Filter_TD_8847_output, Table &tbl_Filter_TD_8517_output, Table &tbl_JOIN_INNER_TD_7939_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#9850 = hd_demo_sk#9868))
    // Left Table: ListBuffer(ss_sold_time_sk#9846, ss_hdemo_sk#9850, ss_store_sk#9852)
    // Right Table: ListBuffer(hd_demo_sk#9868)
    // Output Table: ListBuffer(ss_sold_time_sk#9846, ss_store_sk#9852)
    int left_nrow = tbl_Filter_TD_8847_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8517_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7939_key_leftMajor, SW_JOIN_INNER_TD_7939_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8847_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk9850_k = tbl_Filter_TD_8847_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7939_key_leftMajor keyA{_ss_hdemo_sk9850_k};
            int32_t _ss_sold_time_sk9846 = tbl_Filter_TD_8847_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk9850 = tbl_Filter_TD_8847_output.getInt32(i, 1);
            int32_t _ss_store_sk9852 = tbl_Filter_TD_8847_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7939_payload_leftMajor payloadA{_ss_sold_time_sk9846, _ss_hdemo_sk9850, _ss_store_sk9852};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8517_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk9868_k = tbl_Filter_TD_8517_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7939_key_leftMajor{_hd_demo_sk9868_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9846 = (it->second)._ss_sold_time_sk9846;
                int32_t _ss_hdemo_sk9850 = (it->second)._ss_hdemo_sk9850;
                int32_t _ss_store_sk9852 = (it->second)._ss_store_sk9852;
                int32_t _hd_demo_sk9868 = tbl_Filter_TD_8517_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 0, _ss_sold_time_sk9846);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 1, _ss_store_sk9852);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7939_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7939_key_rightMajor, SW_JOIN_INNER_TD_7939_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8517_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk9868_k = tbl_Filter_TD_8517_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7939_key_rightMajor keyA{_hd_demo_sk9868_k};
            int32_t _hd_demo_sk9868 = tbl_Filter_TD_8517_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7939_payload_rightMajor payloadA{_hd_demo_sk9868};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8847_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk9850_k = tbl_Filter_TD_8847_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7939_key_rightMajor{_ss_hdemo_sk9850_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk9868 = (it->second)._hd_demo_sk9868;
                int32_t _ss_sold_time_sk9846 = tbl_Filter_TD_8847_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk9850 = tbl_Filter_TD_8847_output.getInt32(i, 1);
                int32_t _ss_store_sk9852 = tbl_Filter_TD_8847_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 0, _ss_sold_time_sk9846);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 1, _ss_store_sk9852);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7939_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7939_output #Row: " << tbl_JOIN_INNER_TD_7939_output.getNumRow() << std::endl;
}

void SW_Filter_TD_785(Table &tbl_SerializeFromObject_TD_8759_input, Table &tbl_Filter_TD_785_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#9821) AND (s_store_name#9821 = ese)) AND isnotnull(s_store_sk#9816)))
    // Input: ListBuffer(s_store_sk#9816, s_store_name#9821)
    // Output: ListBuffer(s_store_sk#9816)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8759_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name9821 = tbl_SerializeFromObject_TD_8759_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk9816 = tbl_SerializeFromObject_TD_8759_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_store_name9821.data()) != "NULL") && (std::string(_s_store_name9821.data()) == "ese")) && (_s_store_sk9816!= 0)) {
            int32_t _s_store_sk9816_t = tbl_SerializeFromObject_TD_8759_input.getInt32(i, 0);
            tbl_Filter_TD_785_output.setInt32(r, 0, _s_store_sk9816_t);
            r++;
        }
    }
    tbl_Filter_TD_785_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_785_output #Row: " << tbl_Filter_TD_785_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_72_key_leftMajor {
    int32_t _ss_sold_time_sk9779;
    bool operator==(const SW_JOIN_INNER_TD_72_key_leftMajor& other) const {
        return ((_ss_sold_time_sk9779 == other._ss_sold_time_sk9779));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_72_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_72_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_time_sk9779));
    }
};
}
struct SW_JOIN_INNER_TD_72_payload_leftMajor {
    int32_t _ss_sold_time_sk9779;
    int32_t _ss_store_sk9785;
};
struct SW_JOIN_INNER_TD_72_key_rightMajor {
    int32_t _t_time_sk9806;
    bool operator==(const SW_JOIN_INNER_TD_72_key_rightMajor& other) const {
        return ((_t_time_sk9806 == other._t_time_sk9806));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_72_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_72_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk9806));
    }
};
}
struct SW_JOIN_INNER_TD_72_payload_rightMajor {
    int32_t _t_time_sk9806;
};
void SW_JOIN_INNER_TD_72(Table &tbl_JOIN_INNER_TD_8791_output, Table &tbl_Filter_TD_8388_output, Table &tbl_JOIN_INNER_TD_72_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_time_sk#9779 = t_time_sk#9806))
    // Left Table: ListBuffer(ss_sold_time_sk#9779, ss_store_sk#9785)
    // Right Table: ListBuffer(t_time_sk#9806)
    // Output Table: ListBuffer(ss_store_sk#9785)
    int left_nrow = tbl_JOIN_INNER_TD_8791_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8388_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_72_key_leftMajor, SW_JOIN_INNER_TD_72_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8791_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_time_sk9779_k = tbl_JOIN_INNER_TD_8791_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_72_key_leftMajor keyA{_ss_sold_time_sk9779_k};
            int32_t _ss_sold_time_sk9779 = tbl_JOIN_INNER_TD_8791_output.getInt32(i, 0);
            int32_t _ss_store_sk9785 = tbl_JOIN_INNER_TD_8791_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_72_payload_leftMajor payloadA{_ss_sold_time_sk9779, _ss_store_sk9785};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8388_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk9806_k = tbl_Filter_TD_8388_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_72_key_leftMajor{_t_time_sk9806_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9779 = (it->second)._ss_sold_time_sk9779;
                int32_t _ss_store_sk9785 = (it->second)._ss_store_sk9785;
                int32_t _t_time_sk9806 = tbl_Filter_TD_8388_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_72_output.setInt32(r, 0, _ss_store_sk9785);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_72_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_72_key_rightMajor, SW_JOIN_INNER_TD_72_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8388_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk9806_k = tbl_Filter_TD_8388_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_72_key_rightMajor keyA{_t_time_sk9806_k};
            int32_t _t_time_sk9806 = tbl_Filter_TD_8388_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_72_payload_rightMajor payloadA{_t_time_sk9806};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8791_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_time_sk9779_k = tbl_JOIN_INNER_TD_8791_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_72_key_rightMajor{_ss_sold_time_sk9779_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk9806 = (it->second)._t_time_sk9806;
                int32_t _ss_sold_time_sk9779 = tbl_JOIN_INNER_TD_8791_output.getInt32(i, 0);
                int32_t _ss_store_sk9785 = tbl_JOIN_INNER_TD_8791_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_72_output.setInt32(r, 0, _ss_store_sk9785);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_72_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_72_output #Row: " << tbl_JOIN_INNER_TD_72_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7438_key_leftMajor {
    int32_t _ss_store_sk9718;
    bool operator==(const SW_JOIN_INNER_TD_7438_key_leftMajor& other) const {
        return ((_ss_store_sk9718 == other._ss_store_sk9718));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7438_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7438_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk9718));
    }
};
}
struct SW_JOIN_INNER_TD_7438_payload_leftMajor {
    int32_t _ss_store_sk9718;
};
struct SW_JOIN_INNER_TD_7438_key_rightMajor {
    int32_t _s_store_sk9749;
    bool operator==(const SW_JOIN_INNER_TD_7438_key_rightMajor& other) const {
        return ((_s_store_sk9749 == other._s_store_sk9749));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7438_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7438_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk9749));
    }
};
}
struct SW_JOIN_INNER_TD_7438_payload_rightMajor {
    int32_t _s_store_sk9749;
};
void SW_JOIN_INNER_TD_7438(Table &tbl_JOIN_INNER_TD_8191_output, Table &tbl_Filter_TD_8329_output, Table &tbl_JOIN_INNER_TD_7438_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#9718 = s_store_sk#9749))
    // Left Table: ListBuffer(ss_store_sk#9718)
    // Right Table: ListBuffer(s_store_sk#9749)
    // Output Table: ListBuffer(ss_store_sk#9718, s_store_sk#9749)
    int left_nrow = tbl_JOIN_INNER_TD_8191_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8329_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7438_key_leftMajor, SW_JOIN_INNER_TD_7438_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8191_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk9718_k = tbl_JOIN_INNER_TD_8191_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7438_key_leftMajor keyA{_ss_store_sk9718_k};
            int32_t _ss_store_sk9718 = tbl_JOIN_INNER_TD_8191_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7438_payload_leftMajor payloadA{_ss_store_sk9718};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8329_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk9749_k = tbl_Filter_TD_8329_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7438_key_leftMajor{_s_store_sk9749_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk9718 = (it->second)._ss_store_sk9718;
                int32_t _s_store_sk9749 = tbl_Filter_TD_8329_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7438_output.setInt32(r, 0, _ss_store_sk9718);
                tbl_JOIN_INNER_TD_7438_output.setInt32(r, 1, _s_store_sk9749);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7438_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7438_key_rightMajor, SW_JOIN_INNER_TD_7438_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8329_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk9749_k = tbl_Filter_TD_8329_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7438_key_rightMajor keyA{_s_store_sk9749_k};
            int32_t _s_store_sk9749 = tbl_Filter_TD_8329_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7438_payload_rightMajor payloadA{_s_store_sk9749};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8191_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk9718_k = tbl_JOIN_INNER_TD_8191_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7438_key_rightMajor{_ss_store_sk9718_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk9749 = (it->second)._s_store_sk9749;
                int32_t _ss_store_sk9718 = tbl_JOIN_INNER_TD_8191_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7438_output.setInt32(r, 1, _s_store_sk9749);
                tbl_JOIN_INNER_TD_7438_output.setInt32(r, 0, _ss_store_sk9718);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7438_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7438_output #Row: " << tbl_JOIN_INNER_TD_7438_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_752(Table &tbl_JOIN_INNER_TD_8441_output, Table &tbl_Aggregate_TD_752_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h9_to_9_30#9637L)
    // Input: ListBuffer(ss_store_sk#9651, s_store_sk#9682)
    // Output: ListBuffer(h9_to_9_30#9637L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_8441_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk9651 = tbl_JOIN_INNER_TD_8441_output.getInt32(i, 0);
        int32_t _s_store_sk9682 = tbl_JOIN_INNER_TD_8441_output.getInt32(i, 1);
        int64_t _h9_to_9_309637L_count_0 = 1;
        count_0 += _h9_to_9_309637L_count_0;
    }
    int r = 0;
    int64_t _h9_to_9_309637L = count_0;
    tbl_Aggregate_TD_752_output.setInt64(r++, 0, _h9_to_9_309637L);
    tbl_Aggregate_TD_752_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_752_output #Row: " << tbl_Aggregate_TD_752_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_7877(Table &tbl_JOIN_INNER_TD_8594_output, Table &tbl_Aggregate_TD_7877_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h8_30_to_9#9636L)
    // Input: ListBuffer(ss_store_sk#1213, s_store_sk#378)
    // Output: ListBuffer(h8_30_to_9#9636L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_8594_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8594_output.getInt32(i, 0);
        int32_t _s_store_sk378 = tbl_JOIN_INNER_TD_8594_output.getInt32(i, 1);
        int64_t _h8_30_to_99636L_count_0 = 1;
        count_0 += _h8_30_to_99636L_count_0;
    }
    int r = 0;
    int64_t _h8_30_to_99636L = count_0;
    tbl_Aggregate_TD_7877_output.setInt64(r++, 0, _h8_30_to_99636L);
    tbl_Aggregate_TD_7877_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7877_output #Row: " << tbl_Aggregate_TD_7877_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6153(Table &tbl_SerializeFromObject_TD_7299_input, Table &tbl_Filter_TD_6153_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#10005 = 4) AND (hd_vehicle_count#10006 <= 6)) OR ((hd_dep_count#10005 = 2) AND (hd_vehicle_count#10006 <= 4))) OR ((hd_dep_count#10005 = 0) AND (hd_vehicle_count#10006 <= 2))) AND isnotnull(hd_demo_sk#10002)))
    // Input: ListBuffer(hd_demo_sk#10002, hd_dep_count#10005, hd_vehicle_count#10006)
    // Output: ListBuffer(hd_demo_sk#10002)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7299_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count10005 = tbl_SerializeFromObject_TD_7299_input.getInt32(i, 1);
        int32_t _hd_vehicle_count10006 = tbl_SerializeFromObject_TD_7299_input.getInt32(i, 2);
        int32_t _hd_demo_sk10002 = tbl_SerializeFromObject_TD_7299_input.getInt32(i, 0);
        if (((((_hd_dep_count10005 == 4) && (_hd_vehicle_count10006 <= 6)) || ((_hd_dep_count10005 == 2) && (_hd_vehicle_count10006 <= 4))) || ((_hd_dep_count10005 == 0) && (_hd_vehicle_count10006 <= 2))) && (_hd_demo_sk10002!= 0)) {
            int32_t _hd_demo_sk10002_t = tbl_SerializeFromObject_TD_7299_input.getInt32(i, 0);
            tbl_Filter_TD_6153_output.setInt32(r, 0, _hd_demo_sk10002_t);
            r++;
        }
    }
    tbl_Filter_TD_6153_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6153_output #Row: " << tbl_Filter_TD_6153_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6101(Table &tbl_SerializeFromObject_TD_779_input, Table &tbl_Filter_TD_6101_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#9984) AND (isnotnull(ss_sold_time_sk#9980) AND isnotnull(ss_store_sk#9986))))
    // Input: ListBuffer(ss_sold_time_sk#9980, ss_hdemo_sk#9984, ss_store_sk#9986)
    // Output: ListBuffer(ss_sold_time_sk#9980, ss_hdemo_sk#9984, ss_store_sk#9986)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_779_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk9984 = tbl_SerializeFromObject_TD_779_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk9980 = tbl_SerializeFromObject_TD_779_input.getInt32(i, 0);
        int32_t _ss_store_sk9986 = tbl_SerializeFromObject_TD_779_input.getInt32(i, 2);
        if ((_ss_hdemo_sk9984!= 0) && ((_ss_sold_time_sk9980!= 0) && (_ss_store_sk9986!= 0))) {
            int32_t _ss_sold_time_sk9980_t = tbl_SerializeFromObject_TD_779_input.getInt32(i, 0);
            tbl_Filter_TD_6101_output.setInt32(r, 0, _ss_sold_time_sk9980_t);
            int32_t _ss_hdemo_sk9984_t = tbl_SerializeFromObject_TD_779_input.getInt32(i, 1);
            tbl_Filter_TD_6101_output.setInt32(r, 1, _ss_hdemo_sk9984_t);
            int32_t _ss_store_sk9986_t = tbl_SerializeFromObject_TD_779_input.getInt32(i, 2);
            tbl_Filter_TD_6101_output.setInt32(r, 2, _ss_store_sk9986_t);
            r++;
        }
    }
    tbl_Filter_TD_6101_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6101_output #Row: " << tbl_Filter_TD_6101_output.getNumRow() << std::endl;
}

void SW_Filter_TD_694(Table &tbl_SerializeFromObject_TD_7448_input, Table &tbl_Filter_TD_694_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#9943) AND isnotnull(t_minute#9944)) AND ((t_hour#9943 = 11) AND (t_minute#9944 < 30))) AND isnotnull(t_time_sk#9940)))
    // Input: ListBuffer(t_time_sk#9940, t_hour#9943, t_minute#9944)
    // Output: ListBuffer(t_time_sk#9940)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7448_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour9943 = tbl_SerializeFromObject_TD_7448_input.getInt32(i, 1);
        int32_t _t_minute9944 = tbl_SerializeFromObject_TD_7448_input.getInt32(i, 2);
        int32_t _t_time_sk9940 = tbl_SerializeFromObject_TD_7448_input.getInt32(i, 0);
        if ((((_t_hour9943!= 0) && (_t_minute9944!= 0)) && ((_t_hour9943 == 11) && (_t_minute9944 < 30))) && (_t_time_sk9940!= 0)) {
            int32_t _t_time_sk9940_t = tbl_SerializeFromObject_TD_7448_input.getInt32(i, 0);
            tbl_Filter_TD_694_output.setInt32(r, 0, _t_time_sk9940_t);
            r++;
        }
    }
    tbl_Filter_TD_694_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_694_output #Row: " << tbl_Filter_TD_694_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6456_key_leftMajor {
    int32_t _ss_hdemo_sk9917;
    bool operator==(const SW_JOIN_INNER_TD_6456_key_leftMajor& other) const {
        return ((_ss_hdemo_sk9917 == other._ss_hdemo_sk9917));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6456_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6456_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk9917));
    }
};
}
struct SW_JOIN_INNER_TD_6456_payload_leftMajor {
    int32_t _ss_sold_time_sk9913;
    int32_t _ss_hdemo_sk9917;
    int32_t _ss_store_sk9919;
};
struct SW_JOIN_INNER_TD_6456_key_rightMajor {
    int32_t _hd_demo_sk9935;
    bool operator==(const SW_JOIN_INNER_TD_6456_key_rightMajor& other) const {
        return ((_hd_demo_sk9935 == other._hd_demo_sk9935));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6456_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6456_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk9935));
    }
};
}
struct SW_JOIN_INNER_TD_6456_payload_rightMajor {
    int32_t _hd_demo_sk9935;
};
void SW_JOIN_INNER_TD_6456(Table &tbl_Filter_TD_7820_output, Table &tbl_Filter_TD_7808_output, Table &tbl_JOIN_INNER_TD_6456_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#9917 = hd_demo_sk#9935))
    // Left Table: ListBuffer(ss_sold_time_sk#9913, ss_hdemo_sk#9917, ss_store_sk#9919)
    // Right Table: ListBuffer(hd_demo_sk#9935)
    // Output Table: ListBuffer(ss_sold_time_sk#9913, ss_store_sk#9919)
    int left_nrow = tbl_Filter_TD_7820_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7808_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6456_key_leftMajor, SW_JOIN_INNER_TD_6456_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7820_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk9917_k = tbl_Filter_TD_7820_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6456_key_leftMajor keyA{_ss_hdemo_sk9917_k};
            int32_t _ss_sold_time_sk9913 = tbl_Filter_TD_7820_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk9917 = tbl_Filter_TD_7820_output.getInt32(i, 1);
            int32_t _ss_store_sk9919 = tbl_Filter_TD_7820_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6456_payload_leftMajor payloadA{_ss_sold_time_sk9913, _ss_hdemo_sk9917, _ss_store_sk9919};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7808_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk9935_k = tbl_Filter_TD_7808_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6456_key_leftMajor{_hd_demo_sk9935_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9913 = (it->second)._ss_sold_time_sk9913;
                int32_t _ss_hdemo_sk9917 = (it->second)._ss_hdemo_sk9917;
                int32_t _ss_store_sk9919 = (it->second)._ss_store_sk9919;
                int32_t _hd_demo_sk9935 = tbl_Filter_TD_7808_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 0, _ss_sold_time_sk9913);
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 1, _ss_store_sk9919);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6456_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6456_key_rightMajor, SW_JOIN_INNER_TD_6456_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7808_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk9935_k = tbl_Filter_TD_7808_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6456_key_rightMajor keyA{_hd_demo_sk9935_k};
            int32_t _hd_demo_sk9935 = tbl_Filter_TD_7808_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6456_payload_rightMajor payloadA{_hd_demo_sk9935};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7820_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk9917_k = tbl_Filter_TD_7820_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6456_key_rightMajor{_ss_hdemo_sk9917_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk9935 = (it->second)._hd_demo_sk9935;
                int32_t _ss_sold_time_sk9913 = tbl_Filter_TD_7820_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk9917 = tbl_Filter_TD_7820_output.getInt32(i, 1);
                int32_t _ss_store_sk9919 = tbl_Filter_TD_7820_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 0, _ss_sold_time_sk9913);
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 1, _ss_store_sk9919);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6456_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6456_output #Row: " << tbl_JOIN_INNER_TD_6456_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6997(Table &tbl_SerializeFromObject_TD_7723_input, Table &tbl_Filter_TD_6997_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#9888) AND (s_store_name#9888 = ese)) AND isnotnull(s_store_sk#9883)))
    // Input: ListBuffer(s_store_sk#9883, s_store_name#9888)
    // Output: ListBuffer(s_store_sk#9883)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7723_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name9888 = tbl_SerializeFromObject_TD_7723_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk9883 = tbl_SerializeFromObject_TD_7723_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_store_name9888.data()) != "NULL") && (std::string(_s_store_name9888.data()) == "ese")) && (_s_store_sk9883!= 0)) {
            int32_t _s_store_sk9883_t = tbl_SerializeFromObject_TD_7723_input.getInt32(i, 0);
            tbl_Filter_TD_6997_output.setInt32(r, 0, _s_store_sk9883_t);
            r++;
        }
    }
    tbl_Filter_TD_6997_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6997_output #Row: " << tbl_Filter_TD_6997_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6631_key_leftMajor {
    int32_t _ss_sold_time_sk9846;
    bool operator==(const SW_JOIN_INNER_TD_6631_key_leftMajor& other) const {
        return ((_ss_sold_time_sk9846 == other._ss_sold_time_sk9846));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6631_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6631_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_time_sk9846));
    }
};
}
struct SW_JOIN_INNER_TD_6631_payload_leftMajor {
    int32_t _ss_sold_time_sk9846;
    int32_t _ss_store_sk9852;
};
struct SW_JOIN_INNER_TD_6631_key_rightMajor {
    int32_t _t_time_sk9873;
    bool operator==(const SW_JOIN_INNER_TD_6631_key_rightMajor& other) const {
        return ((_t_time_sk9873 == other._t_time_sk9873));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6631_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6631_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk9873));
    }
};
}
struct SW_JOIN_INNER_TD_6631_payload_rightMajor {
    int32_t _t_time_sk9873;
};
void SW_JOIN_INNER_TD_6631(Table &tbl_JOIN_INNER_TD_7939_output, Table &tbl_Filter_TD_7978_output, Table &tbl_JOIN_INNER_TD_6631_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_time_sk#9846 = t_time_sk#9873))
    // Left Table: ListBuffer(ss_sold_time_sk#9846, ss_store_sk#9852)
    // Right Table: ListBuffer(t_time_sk#9873)
    // Output Table: ListBuffer(ss_store_sk#9852)
    int left_nrow = tbl_JOIN_INNER_TD_7939_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7978_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6631_key_leftMajor, SW_JOIN_INNER_TD_6631_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7939_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_time_sk9846_k = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6631_key_leftMajor keyA{_ss_sold_time_sk9846_k};
            int32_t _ss_sold_time_sk9846 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
            int32_t _ss_store_sk9852 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6631_payload_leftMajor payloadA{_ss_sold_time_sk9846, _ss_store_sk9852};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7978_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk9873_k = tbl_Filter_TD_7978_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6631_key_leftMajor{_t_time_sk9873_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9846 = (it->second)._ss_sold_time_sk9846;
                int32_t _ss_store_sk9852 = (it->second)._ss_store_sk9852;
                int32_t _t_time_sk9873 = tbl_Filter_TD_7978_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6631_output.setInt32(r, 0, _ss_store_sk9852);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6631_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6631_key_rightMajor, SW_JOIN_INNER_TD_6631_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7978_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk9873_k = tbl_Filter_TD_7978_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6631_key_rightMajor keyA{_t_time_sk9873_k};
            int32_t _t_time_sk9873 = tbl_Filter_TD_7978_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6631_payload_rightMajor payloadA{_t_time_sk9873};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7939_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_time_sk9846_k = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6631_key_rightMajor{_ss_sold_time_sk9846_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk9873 = (it->second)._t_time_sk9873;
                int32_t _ss_sold_time_sk9846 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
                int32_t _ss_store_sk9852 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6631_output.setInt32(r, 0, _ss_store_sk9852);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6631_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6631_output #Row: " << tbl_JOIN_INNER_TD_6631_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6456_key_leftMajor {
    int32_t _ss_store_sk9785;
    bool operator==(const SW_JOIN_INNER_TD_6456_key_leftMajor& other) const {
        return ((_ss_store_sk9785 == other._ss_store_sk9785));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6456_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6456_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk9785));
    }
};
}
struct SW_JOIN_INNER_TD_6456_payload_leftMajor {
    int32_t _ss_store_sk9785;
};
struct SW_JOIN_INNER_TD_6456_key_rightMajor {
    int32_t _s_store_sk9816;
    bool operator==(const SW_JOIN_INNER_TD_6456_key_rightMajor& other) const {
        return ((_s_store_sk9816 == other._s_store_sk9816));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6456_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6456_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk9816));
    }
};
}
struct SW_JOIN_INNER_TD_6456_payload_rightMajor {
    int32_t _s_store_sk9816;
};
void SW_JOIN_INNER_TD_6456(Table &tbl_JOIN_INNER_TD_72_output, Table &tbl_Filter_TD_785_output, Table &tbl_JOIN_INNER_TD_6456_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#9785 = s_store_sk#9816))
    // Left Table: ListBuffer(ss_store_sk#9785)
    // Right Table: ListBuffer(s_store_sk#9816)
    // Output Table: ListBuffer(ss_store_sk#9785, s_store_sk#9816)
    int left_nrow = tbl_JOIN_INNER_TD_72_output.getNumRow();
    int right_nrow = tbl_Filter_TD_785_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6456_key_leftMajor, SW_JOIN_INNER_TD_6456_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_72_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk9785_k = tbl_JOIN_INNER_TD_72_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6456_key_leftMajor keyA{_ss_store_sk9785_k};
            int32_t _ss_store_sk9785 = tbl_JOIN_INNER_TD_72_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6456_payload_leftMajor payloadA{_ss_store_sk9785};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_785_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk9816_k = tbl_Filter_TD_785_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6456_key_leftMajor{_s_store_sk9816_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk9785 = (it->second)._ss_store_sk9785;
                int32_t _s_store_sk9816 = tbl_Filter_TD_785_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 0, _ss_store_sk9785);
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 1, _s_store_sk9816);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6456_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6456_key_rightMajor, SW_JOIN_INNER_TD_6456_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_785_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk9816_k = tbl_Filter_TD_785_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6456_key_rightMajor keyA{_s_store_sk9816_k};
            int32_t _s_store_sk9816 = tbl_Filter_TD_785_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6456_payload_rightMajor payloadA{_s_store_sk9816};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_72_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk9785_k = tbl_JOIN_INNER_TD_72_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6456_key_rightMajor{_ss_store_sk9785_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk9816 = (it->second)._s_store_sk9816;
                int32_t _ss_store_sk9785 = tbl_JOIN_INNER_TD_72_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 1, _s_store_sk9816);
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 0, _ss_store_sk9785);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6456_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6456_output #Row: " << tbl_JOIN_INNER_TD_6456_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_682(Table &tbl_JOIN_INNER_TD_7438_output, Table &tbl_Aggregate_TD_682_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h9_30_to_10#9638L)
    // Input: ListBuffer(ss_store_sk#9718, s_store_sk#9749)
    // Output: ListBuffer(h9_30_to_10#9638L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_7438_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk9718 = tbl_JOIN_INNER_TD_7438_output.getInt32(i, 0);
        int32_t _s_store_sk9749 = tbl_JOIN_INNER_TD_7438_output.getInt32(i, 1);
        int64_t _h9_30_to_109638L_count_0 = 1;
        count_0 += _h9_30_to_109638L_count_0;
    }
    int r = 0;
    int64_t _h9_30_to_109638L = count_0;
    tbl_Aggregate_TD_682_output.setInt64(r++, 0, _h9_30_to_109638L);
    tbl_Aggregate_TD_682_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_682_output #Row: " << tbl_Aggregate_TD_682_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_6438(Table &tbl_Aggregate_TD_7877_output, Table &tbl_Aggregate_TD_752_output, Table &tbl_JOIN_CROSS_TD_6438_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#9636L)
    // Right Table: ListBuffer(h9_to_9_30#9637L)
    // Output Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L)
    int left_nrow = tbl_Aggregate_TD_7877_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_752_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_6438_output.setInt32(r, 0, tbl_Aggregate_TD_7877_output.getInt64(i, 0));
        tbl_JOIN_CROSS_TD_6438_output.setInt32(r, 1, tbl_Aggregate_TD_752_output.getInt64(j, 1));
        ++r;
    }
    tbl_JOIN_CROSS_TD_6438_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_6438_output #Row: " << tbl_JOIN_CROSS_TD_6438_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5944(Table &tbl_SerializeFromObject_TD_6946_input, Table &tbl_Filter_TD_5944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#10072 = 4) AND (hd_vehicle_count#10073 <= 6)) OR ((hd_dep_count#10072 = 2) AND (hd_vehicle_count#10073 <= 4))) OR ((hd_dep_count#10072 = 0) AND (hd_vehicle_count#10073 <= 2))) AND isnotnull(hd_demo_sk#10069)))
    // Input: ListBuffer(hd_demo_sk#10069, hd_dep_count#10072, hd_vehicle_count#10073)
    // Output: ListBuffer(hd_demo_sk#10069)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6946_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count10072 = tbl_SerializeFromObject_TD_6946_input.getInt32(i, 1);
        int32_t _hd_vehicle_count10073 = tbl_SerializeFromObject_TD_6946_input.getInt32(i, 2);
        int32_t _hd_demo_sk10069 = tbl_SerializeFromObject_TD_6946_input.getInt32(i, 0);
        if (((((_hd_dep_count10072 == 4) && (_hd_vehicle_count10073 <= 6)) || ((_hd_dep_count10072 == 2) && (_hd_vehicle_count10073 <= 4))) || ((_hd_dep_count10072 == 0) && (_hd_vehicle_count10073 <= 2))) && (_hd_demo_sk10069!= 0)) {
            int32_t _hd_demo_sk10069_t = tbl_SerializeFromObject_TD_6946_input.getInt32(i, 0);
            tbl_Filter_TD_5944_output.setInt32(r, 0, _hd_demo_sk10069_t);
            r++;
        }
    }
    tbl_Filter_TD_5944_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5944_output #Row: " << tbl_Filter_TD_5944_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5972(Table &tbl_SerializeFromObject_TD_6392_input, Table &tbl_Filter_TD_5972_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#10051) AND (isnotnull(ss_sold_time_sk#10047) AND isnotnull(ss_store_sk#10053))))
    // Input: ListBuffer(ss_sold_time_sk#10047, ss_hdemo_sk#10051, ss_store_sk#10053)
    // Output: ListBuffer(ss_sold_time_sk#10047, ss_hdemo_sk#10051, ss_store_sk#10053)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6392_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk10051 = tbl_SerializeFromObject_TD_6392_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk10047 = tbl_SerializeFromObject_TD_6392_input.getInt32(i, 0);
        int32_t _ss_store_sk10053 = tbl_SerializeFromObject_TD_6392_input.getInt32(i, 2);
        if ((_ss_hdemo_sk10051!= 0) && ((_ss_sold_time_sk10047!= 0) && (_ss_store_sk10053!= 0))) {
            int32_t _ss_sold_time_sk10047_t = tbl_SerializeFromObject_TD_6392_input.getInt32(i, 0);
            tbl_Filter_TD_5972_output.setInt32(r, 0, _ss_sold_time_sk10047_t);
            int32_t _ss_hdemo_sk10051_t = tbl_SerializeFromObject_TD_6392_input.getInt32(i, 1);
            tbl_Filter_TD_5972_output.setInt32(r, 1, _ss_hdemo_sk10051_t);
            int32_t _ss_store_sk10053_t = tbl_SerializeFromObject_TD_6392_input.getInt32(i, 2);
            tbl_Filter_TD_5972_output.setInt32(r, 2, _ss_store_sk10053_t);
            r++;
        }
    }
    tbl_Filter_TD_5972_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5972_output #Row: " << tbl_Filter_TD_5972_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5532(Table &tbl_SerializeFromObject_TD_6106_input, Table &tbl_Filter_TD_5532_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#10010) AND isnotnull(t_minute#10011)) AND ((t_hour#10010 = 11) AND (t_minute#10011 >= 30))) AND isnotnull(t_time_sk#10007)))
    // Input: ListBuffer(t_time_sk#10007, t_hour#10010, t_minute#10011)
    // Output: ListBuffer(t_time_sk#10007)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6106_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour10010 = tbl_SerializeFromObject_TD_6106_input.getInt32(i, 1);
        int32_t _t_minute10011 = tbl_SerializeFromObject_TD_6106_input.getInt32(i, 2);
        int32_t _t_time_sk10007 = tbl_SerializeFromObject_TD_6106_input.getInt32(i, 0);
        if ((((_t_hour10010!= 0) && (_t_minute10011!= 0)) && ((_t_hour10010 == 11) && (_t_minute10011 >= 30))) && (_t_time_sk10007!= 0)) {
            int32_t _t_time_sk10007_t = tbl_SerializeFromObject_TD_6106_input.getInt32(i, 0);
            tbl_Filter_TD_5532_output.setInt32(r, 0, _t_time_sk10007_t);
            r++;
        }
    }
    tbl_Filter_TD_5532_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5532_output #Row: " << tbl_Filter_TD_5532_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5155_key_leftMajor {
    int32_t _ss_hdemo_sk9984;
    bool operator==(const SW_JOIN_INNER_TD_5155_key_leftMajor& other) const {
        return ((_ss_hdemo_sk9984 == other._ss_hdemo_sk9984));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5155_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5155_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk9984));
    }
};
}
struct SW_JOIN_INNER_TD_5155_payload_leftMajor {
    int32_t _ss_sold_time_sk9980;
    int32_t _ss_hdemo_sk9984;
    int32_t _ss_store_sk9986;
};
struct SW_JOIN_INNER_TD_5155_key_rightMajor {
    int32_t _hd_demo_sk10002;
    bool operator==(const SW_JOIN_INNER_TD_5155_key_rightMajor& other) const {
        return ((_hd_demo_sk10002 == other._hd_demo_sk10002));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5155_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5155_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk10002));
    }
};
}
struct SW_JOIN_INNER_TD_5155_payload_rightMajor {
    int32_t _hd_demo_sk10002;
};
void SW_JOIN_INNER_TD_5155(Table &tbl_Filter_TD_6101_output, Table &tbl_Filter_TD_6153_output, Table &tbl_JOIN_INNER_TD_5155_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#9984 = hd_demo_sk#10002))
    // Left Table: ListBuffer(ss_sold_time_sk#9980, ss_hdemo_sk#9984, ss_store_sk#9986)
    // Right Table: ListBuffer(hd_demo_sk#10002)
    // Output Table: ListBuffer(ss_sold_time_sk#9980, ss_store_sk#9986)
    int left_nrow = tbl_Filter_TD_6101_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6153_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5155_key_leftMajor, SW_JOIN_INNER_TD_5155_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6101_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk9984_k = tbl_Filter_TD_6101_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5155_key_leftMajor keyA{_ss_hdemo_sk9984_k};
            int32_t _ss_sold_time_sk9980 = tbl_Filter_TD_6101_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk9984 = tbl_Filter_TD_6101_output.getInt32(i, 1);
            int32_t _ss_store_sk9986 = tbl_Filter_TD_6101_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5155_payload_leftMajor payloadA{_ss_sold_time_sk9980, _ss_hdemo_sk9984, _ss_store_sk9986};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6153_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk10002_k = tbl_Filter_TD_6153_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5155_key_leftMajor{_hd_demo_sk10002_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9980 = (it->second)._ss_sold_time_sk9980;
                int32_t _ss_hdemo_sk9984 = (it->second)._ss_hdemo_sk9984;
                int32_t _ss_store_sk9986 = (it->second)._ss_store_sk9986;
                int32_t _hd_demo_sk10002 = tbl_Filter_TD_6153_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5155_output.setInt32(r, 0, _ss_sold_time_sk9980);
                tbl_JOIN_INNER_TD_5155_output.setInt32(r, 1, _ss_store_sk9986);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5155_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5155_key_rightMajor, SW_JOIN_INNER_TD_5155_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6153_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk10002_k = tbl_Filter_TD_6153_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5155_key_rightMajor keyA{_hd_demo_sk10002_k};
            int32_t _hd_demo_sk10002 = tbl_Filter_TD_6153_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5155_payload_rightMajor payloadA{_hd_demo_sk10002};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6101_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk9984_k = tbl_Filter_TD_6101_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5155_key_rightMajor{_ss_hdemo_sk9984_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk10002 = (it->second)._hd_demo_sk10002;
                int32_t _ss_sold_time_sk9980 = tbl_Filter_TD_6101_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk9984 = tbl_Filter_TD_6101_output.getInt32(i, 1);
                int32_t _ss_store_sk9986 = tbl_Filter_TD_6101_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5155_output.setInt32(r, 0, _ss_sold_time_sk9980);
                tbl_JOIN_INNER_TD_5155_output.setInt32(r, 1, _ss_store_sk9986);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5155_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5155_output #Row: " << tbl_JOIN_INNER_TD_5155_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5625(Table &tbl_SerializeFromObject_TD_6142_input, Table &tbl_Filter_TD_5625_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#9955) AND (s_store_name#9955 = ese)) AND isnotnull(s_store_sk#9950)))
    // Input: ListBuffer(s_store_sk#9950, s_store_name#9955)
    // Output: ListBuffer(s_store_sk#9950)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6142_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name9955 = tbl_SerializeFromObject_TD_6142_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk9950 = tbl_SerializeFromObject_TD_6142_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_store_name9955.data()) != "NULL") && (std::string(_s_store_name9955.data()) == "ese")) && (_s_store_sk9950!= 0)) {
            int32_t _s_store_sk9950_t = tbl_SerializeFromObject_TD_6142_input.getInt32(i, 0);
            tbl_Filter_TD_5625_output.setInt32(r, 0, _s_store_sk9950_t);
            r++;
        }
    }
    tbl_Filter_TD_5625_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5625_output #Row: " << tbl_Filter_TD_5625_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5432_key_leftMajor {
    int32_t _ss_sold_time_sk9913;
    bool operator==(const SW_JOIN_INNER_TD_5432_key_leftMajor& other) const {
        return ((_ss_sold_time_sk9913 == other._ss_sold_time_sk9913));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5432_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5432_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_time_sk9913));
    }
};
}
struct SW_JOIN_INNER_TD_5432_payload_leftMajor {
    int32_t _ss_sold_time_sk9913;
    int32_t _ss_store_sk9919;
};
struct SW_JOIN_INNER_TD_5432_key_rightMajor {
    int32_t _t_time_sk9940;
    bool operator==(const SW_JOIN_INNER_TD_5432_key_rightMajor& other) const {
        return ((_t_time_sk9940 == other._t_time_sk9940));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5432_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5432_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk9940));
    }
};
}
struct SW_JOIN_INNER_TD_5432_payload_rightMajor {
    int32_t _t_time_sk9940;
};
void SW_JOIN_INNER_TD_5432(Table &tbl_JOIN_INNER_TD_6456_output, Table &tbl_Filter_TD_694_output, Table &tbl_JOIN_INNER_TD_5432_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_time_sk#9913 = t_time_sk#9940))
    // Left Table: ListBuffer(ss_sold_time_sk#9913, ss_store_sk#9919)
    // Right Table: ListBuffer(t_time_sk#9940)
    // Output Table: ListBuffer(ss_store_sk#9919)
    int left_nrow = tbl_JOIN_INNER_TD_6456_output.getNumRow();
    int right_nrow = tbl_Filter_TD_694_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5432_key_leftMajor, SW_JOIN_INNER_TD_5432_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6456_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_time_sk9913_k = tbl_JOIN_INNER_TD_6456_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5432_key_leftMajor keyA{_ss_sold_time_sk9913_k};
            int32_t _ss_sold_time_sk9913 = tbl_JOIN_INNER_TD_6456_output.getInt32(i, 0);
            int32_t _ss_store_sk9919 = tbl_JOIN_INNER_TD_6456_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5432_payload_leftMajor payloadA{_ss_sold_time_sk9913, _ss_store_sk9919};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_694_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk9940_k = tbl_Filter_TD_694_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5432_key_leftMajor{_t_time_sk9940_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9913 = (it->second)._ss_sold_time_sk9913;
                int32_t _ss_store_sk9919 = (it->second)._ss_store_sk9919;
                int32_t _t_time_sk9940 = tbl_Filter_TD_694_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5432_output.setInt32(r, 0, _ss_store_sk9919);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5432_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5432_key_rightMajor, SW_JOIN_INNER_TD_5432_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_694_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk9940_k = tbl_Filter_TD_694_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5432_key_rightMajor keyA{_t_time_sk9940_k};
            int32_t _t_time_sk9940 = tbl_Filter_TD_694_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5432_payload_rightMajor payloadA{_t_time_sk9940};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6456_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_time_sk9913_k = tbl_JOIN_INNER_TD_6456_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5432_key_rightMajor{_ss_sold_time_sk9913_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk9940 = (it->second)._t_time_sk9940;
                int32_t _ss_sold_time_sk9913 = tbl_JOIN_INNER_TD_6456_output.getInt32(i, 0);
                int32_t _ss_store_sk9919 = tbl_JOIN_INNER_TD_6456_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5432_output.setInt32(r, 0, _ss_store_sk9919);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5432_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5432_output #Row: " << tbl_JOIN_INNER_TD_5432_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5671_key_leftMajor {
    int32_t _ss_store_sk9852;
    bool operator==(const SW_JOIN_INNER_TD_5671_key_leftMajor& other) const {
        return ((_ss_store_sk9852 == other._ss_store_sk9852));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5671_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5671_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk9852));
    }
};
}
struct SW_JOIN_INNER_TD_5671_payload_leftMajor {
    int32_t _ss_store_sk9852;
};
struct SW_JOIN_INNER_TD_5671_key_rightMajor {
    int32_t _s_store_sk9883;
    bool operator==(const SW_JOIN_INNER_TD_5671_key_rightMajor& other) const {
        return ((_s_store_sk9883 == other._s_store_sk9883));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5671_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5671_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk9883));
    }
};
}
struct SW_JOIN_INNER_TD_5671_payload_rightMajor {
    int32_t _s_store_sk9883;
};
void SW_JOIN_INNER_TD_5671(Table &tbl_JOIN_INNER_TD_6631_output, Table &tbl_Filter_TD_6997_output, Table &tbl_JOIN_INNER_TD_5671_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#9852 = s_store_sk#9883))
    // Left Table: ListBuffer(ss_store_sk#9852)
    // Right Table: ListBuffer(s_store_sk#9883)
    // Output Table: ListBuffer(ss_store_sk#9852, s_store_sk#9883)
    int left_nrow = tbl_JOIN_INNER_TD_6631_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6997_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5671_key_leftMajor, SW_JOIN_INNER_TD_5671_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6631_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk9852_k = tbl_JOIN_INNER_TD_6631_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5671_key_leftMajor keyA{_ss_store_sk9852_k};
            int32_t _ss_store_sk9852 = tbl_JOIN_INNER_TD_6631_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5671_payload_leftMajor payloadA{_ss_store_sk9852};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6997_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk9883_k = tbl_Filter_TD_6997_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5671_key_leftMajor{_s_store_sk9883_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk9852 = (it->second)._ss_store_sk9852;
                int32_t _s_store_sk9883 = tbl_Filter_TD_6997_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5671_output.setInt32(r, 0, _ss_store_sk9852);
                tbl_JOIN_INNER_TD_5671_output.setInt32(r, 1, _s_store_sk9883);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5671_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5671_key_rightMajor, SW_JOIN_INNER_TD_5671_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6997_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk9883_k = tbl_Filter_TD_6997_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5671_key_rightMajor keyA{_s_store_sk9883_k};
            int32_t _s_store_sk9883 = tbl_Filter_TD_6997_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5671_payload_rightMajor payloadA{_s_store_sk9883};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6631_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk9852_k = tbl_JOIN_INNER_TD_6631_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5671_key_rightMajor{_ss_store_sk9852_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk9883 = (it->second)._s_store_sk9883;
                int32_t _ss_store_sk9852 = tbl_JOIN_INNER_TD_6631_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5671_output.setInt32(r, 1, _s_store_sk9883);
                tbl_JOIN_INNER_TD_5671_output.setInt32(r, 0, _ss_store_sk9852);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5671_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5671_output #Row: " << tbl_JOIN_INNER_TD_5671_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_5256(Table &tbl_JOIN_INNER_TD_6456_output, Table &tbl_Aggregate_TD_5256_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h10_to_10_30#9639L)
    // Input: ListBuffer(ss_store_sk#9785, s_store_sk#9816)
    // Output: ListBuffer(h10_to_10_30#9639L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_6456_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk9785 = tbl_JOIN_INNER_TD_6456_output.getInt32(i, 0);
        int32_t _s_store_sk9816 = tbl_JOIN_INNER_TD_6456_output.getInt32(i, 1);
        int64_t _h10_to_10_309639L_count_0 = 1;
        count_0 += _h10_to_10_309639L_count_0;
    }
    int r = 0;
    int64_t _h10_to_10_309639L = count_0;
    tbl_Aggregate_TD_5256_output.setInt64(r++, 0, _h10_to_10_309639L);
    tbl_Aggregate_TD_5256_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5256_output #Row: " << tbl_Aggregate_TD_5256_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_5373(Table &tbl_JOIN_CROSS_TD_6438_output, Table &tbl_Aggregate_TD_682_output, Table &tbl_JOIN_CROSS_TD_5373_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L)
    // Right Table: ListBuffer(h9_30_to_10#9638L)
    // Output Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L)
    int left_nrow = tbl_JOIN_CROSS_TD_6438_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_682_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_5373_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_6438_output.getInt64(i, 0));
        tbl_JOIN_CROSS_TD_5373_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_6438_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_5373_output.setInt32(r, 2, tbl_Aggregate_TD_682_output.getInt64(j, 2));
        ++r;
    }
    tbl_JOIN_CROSS_TD_5373_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_5373_output #Row: " << tbl_JOIN_CROSS_TD_5373_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4762(Table &tbl_SerializeFromObject_TD_549_input, Table &tbl_Filter_TD_4762_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#10077) AND isnotnull(t_minute#10078)) AND ((t_hour#10077 = 12) AND (t_minute#10078 < 30))) AND isnotnull(t_time_sk#10074)))
    // Input: ListBuffer(t_time_sk#10074, t_hour#10077, t_minute#10078)
    // Output: ListBuffer(t_time_sk#10074)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_549_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour10077 = tbl_SerializeFromObject_TD_549_input.getInt32(i, 1);
        int32_t _t_minute10078 = tbl_SerializeFromObject_TD_549_input.getInt32(i, 2);
        int32_t _t_time_sk10074 = tbl_SerializeFromObject_TD_549_input.getInt32(i, 0);
        if ((((_t_hour10077!= 0) && (_t_minute10078!= 0)) && ((_t_hour10077 == 12) && (_t_minute10078 < 30))) && (_t_time_sk10074!= 0)) {
            int32_t _t_time_sk10074_t = tbl_SerializeFromObject_TD_549_input.getInt32(i, 0);
            tbl_Filter_TD_4762_output.setInt32(r, 0, _t_time_sk10074_t);
            r++;
        }
    }
    tbl_Filter_TD_4762_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4762_output #Row: " << tbl_Filter_TD_4762_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4390_key_leftMajor {
    int32_t _ss_hdemo_sk10051;
    bool operator==(const SW_JOIN_INNER_TD_4390_key_leftMajor& other) const {
        return ((_ss_hdemo_sk10051 == other._ss_hdemo_sk10051));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4390_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4390_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk10051));
    }
};
}
struct SW_JOIN_INNER_TD_4390_payload_leftMajor {
    int32_t _ss_sold_time_sk10047;
    int32_t _ss_hdemo_sk10051;
    int32_t _ss_store_sk10053;
};
struct SW_JOIN_INNER_TD_4390_key_rightMajor {
    int32_t _hd_demo_sk10069;
    bool operator==(const SW_JOIN_INNER_TD_4390_key_rightMajor& other) const {
        return ((_hd_demo_sk10069 == other._hd_demo_sk10069));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4390_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4390_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk10069));
    }
};
}
struct SW_JOIN_INNER_TD_4390_payload_rightMajor {
    int32_t _hd_demo_sk10069;
};
void SW_JOIN_INNER_TD_4390(Table &tbl_Filter_TD_5972_output, Table &tbl_Filter_TD_5944_output, Table &tbl_JOIN_INNER_TD_4390_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#10051 = hd_demo_sk#10069))
    // Left Table: ListBuffer(ss_sold_time_sk#10047, ss_hdemo_sk#10051, ss_store_sk#10053)
    // Right Table: ListBuffer(hd_demo_sk#10069)
    // Output Table: ListBuffer(ss_sold_time_sk#10047, ss_store_sk#10053)
    int left_nrow = tbl_Filter_TD_5972_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5944_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4390_key_leftMajor, SW_JOIN_INNER_TD_4390_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_5972_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk10051_k = tbl_Filter_TD_5972_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4390_key_leftMajor keyA{_ss_hdemo_sk10051_k};
            int32_t _ss_sold_time_sk10047 = tbl_Filter_TD_5972_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk10051 = tbl_Filter_TD_5972_output.getInt32(i, 1);
            int32_t _ss_store_sk10053 = tbl_Filter_TD_5972_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_4390_payload_leftMajor payloadA{_ss_sold_time_sk10047, _ss_hdemo_sk10051, _ss_store_sk10053};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5944_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk10069_k = tbl_Filter_TD_5944_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4390_key_leftMajor{_hd_demo_sk10069_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk10047 = (it->second)._ss_sold_time_sk10047;
                int32_t _ss_hdemo_sk10051 = (it->second)._ss_hdemo_sk10051;
                int32_t _ss_store_sk10053 = (it->second)._ss_store_sk10053;
                int32_t _hd_demo_sk10069 = tbl_Filter_TD_5944_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4390_output.setInt32(r, 0, _ss_sold_time_sk10047);
                tbl_JOIN_INNER_TD_4390_output.setInt32(r, 1, _ss_store_sk10053);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4390_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4390_key_rightMajor, SW_JOIN_INNER_TD_4390_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5944_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk10069_k = tbl_Filter_TD_5944_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4390_key_rightMajor keyA{_hd_demo_sk10069_k};
            int32_t _hd_demo_sk10069 = tbl_Filter_TD_5944_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4390_payload_rightMajor payloadA{_hd_demo_sk10069};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5972_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk10051_k = tbl_Filter_TD_5972_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4390_key_rightMajor{_ss_hdemo_sk10051_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk10069 = (it->second)._hd_demo_sk10069;
                int32_t _ss_sold_time_sk10047 = tbl_Filter_TD_5972_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk10051 = tbl_Filter_TD_5972_output.getInt32(i, 1);
                int32_t _ss_store_sk10053 = tbl_Filter_TD_5972_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_4390_output.setInt32(r, 0, _ss_sold_time_sk10047);
                tbl_JOIN_INNER_TD_4390_output.setInt32(r, 1, _ss_store_sk10053);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4390_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4390_output #Row: " << tbl_JOIN_INNER_TD_4390_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4648(Table &tbl_SerializeFromObject_TD_5594_input, Table &tbl_Filter_TD_4648_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#10022) AND (s_store_name#10022 = ese)) AND isnotnull(s_store_sk#10017)))
    // Input: ListBuffer(s_store_sk#10017, s_store_name#10022)
    // Output: ListBuffer(s_store_sk#10017)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5594_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name10022 = tbl_SerializeFromObject_TD_5594_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk10017 = tbl_SerializeFromObject_TD_5594_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_store_name10022.data()) != "NULL") && (std::string(_s_store_name10022.data()) == "ese")) && (_s_store_sk10017!= 0)) {
            int32_t _s_store_sk10017_t = tbl_SerializeFromObject_TD_5594_input.getInt32(i, 0);
            tbl_Filter_TD_4648_output.setInt32(r, 0, _s_store_sk10017_t);
            r++;
        }
    }
    tbl_Filter_TD_4648_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4648_output #Row: " << tbl_Filter_TD_4648_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4371_key_leftMajor {
    int32_t _ss_sold_time_sk9980;
    bool operator==(const SW_JOIN_INNER_TD_4371_key_leftMajor& other) const {
        return ((_ss_sold_time_sk9980 == other._ss_sold_time_sk9980));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4371_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4371_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_time_sk9980));
    }
};
}
struct SW_JOIN_INNER_TD_4371_payload_leftMajor {
    int32_t _ss_sold_time_sk9980;
    int32_t _ss_store_sk9986;
};
struct SW_JOIN_INNER_TD_4371_key_rightMajor {
    int32_t _t_time_sk10007;
    bool operator==(const SW_JOIN_INNER_TD_4371_key_rightMajor& other) const {
        return ((_t_time_sk10007 == other._t_time_sk10007));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4371_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4371_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk10007));
    }
};
}
struct SW_JOIN_INNER_TD_4371_payload_rightMajor {
    int32_t _t_time_sk10007;
};
void SW_JOIN_INNER_TD_4371(Table &tbl_JOIN_INNER_TD_5155_output, Table &tbl_Filter_TD_5532_output, Table &tbl_JOIN_INNER_TD_4371_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_time_sk#9980 = t_time_sk#10007))
    // Left Table: ListBuffer(ss_sold_time_sk#9980, ss_store_sk#9986)
    // Right Table: ListBuffer(t_time_sk#10007)
    // Output Table: ListBuffer(ss_store_sk#9986)
    int left_nrow = tbl_JOIN_INNER_TD_5155_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5532_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4371_key_leftMajor, SW_JOIN_INNER_TD_4371_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5155_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_time_sk9980_k = tbl_JOIN_INNER_TD_5155_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4371_key_leftMajor keyA{_ss_sold_time_sk9980_k};
            int32_t _ss_sold_time_sk9980 = tbl_JOIN_INNER_TD_5155_output.getInt32(i, 0);
            int32_t _ss_store_sk9986 = tbl_JOIN_INNER_TD_5155_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4371_payload_leftMajor payloadA{_ss_sold_time_sk9980, _ss_store_sk9986};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5532_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk10007_k = tbl_Filter_TD_5532_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4371_key_leftMajor{_t_time_sk10007_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk9980 = (it->second)._ss_sold_time_sk9980;
                int32_t _ss_store_sk9986 = (it->second)._ss_store_sk9986;
                int32_t _t_time_sk10007 = tbl_Filter_TD_5532_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4371_output.setInt32(r, 0, _ss_store_sk9986);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4371_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4371_key_rightMajor, SW_JOIN_INNER_TD_4371_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5532_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk10007_k = tbl_Filter_TD_5532_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4371_key_rightMajor keyA{_t_time_sk10007_k};
            int32_t _t_time_sk10007 = tbl_Filter_TD_5532_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4371_payload_rightMajor payloadA{_t_time_sk10007};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5155_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_time_sk9980_k = tbl_JOIN_INNER_TD_5155_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4371_key_rightMajor{_ss_sold_time_sk9980_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk10007 = (it->second)._t_time_sk10007;
                int32_t _ss_sold_time_sk9980 = tbl_JOIN_INNER_TD_5155_output.getInt32(i, 0);
                int32_t _ss_store_sk9986 = tbl_JOIN_INNER_TD_5155_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4371_output.setInt32(r, 0, _ss_store_sk9986);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4371_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4371_output #Row: " << tbl_JOIN_INNER_TD_4371_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4555_key_leftMajor {
    int32_t _ss_store_sk9919;
    bool operator==(const SW_JOIN_INNER_TD_4555_key_leftMajor& other) const {
        return ((_ss_store_sk9919 == other._ss_store_sk9919));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4555_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4555_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk9919));
    }
};
}
struct SW_JOIN_INNER_TD_4555_payload_leftMajor {
    int32_t _ss_store_sk9919;
};
struct SW_JOIN_INNER_TD_4555_key_rightMajor {
    int32_t _s_store_sk9950;
    bool operator==(const SW_JOIN_INNER_TD_4555_key_rightMajor& other) const {
        return ((_s_store_sk9950 == other._s_store_sk9950));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4555_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4555_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk9950));
    }
};
}
struct SW_JOIN_INNER_TD_4555_payload_rightMajor {
    int32_t _s_store_sk9950;
};
void SW_JOIN_INNER_TD_4555(Table &tbl_JOIN_INNER_TD_5432_output, Table &tbl_Filter_TD_5625_output, Table &tbl_JOIN_INNER_TD_4555_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#9919 = s_store_sk#9950))
    // Left Table: ListBuffer(ss_store_sk#9919)
    // Right Table: ListBuffer(s_store_sk#9950)
    // Output Table: ListBuffer(ss_store_sk#9919, s_store_sk#9950)
    int left_nrow = tbl_JOIN_INNER_TD_5432_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5625_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4555_key_leftMajor, SW_JOIN_INNER_TD_4555_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5432_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk9919_k = tbl_JOIN_INNER_TD_5432_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4555_key_leftMajor keyA{_ss_store_sk9919_k};
            int32_t _ss_store_sk9919 = tbl_JOIN_INNER_TD_5432_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4555_payload_leftMajor payloadA{_ss_store_sk9919};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5625_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk9950_k = tbl_Filter_TD_5625_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4555_key_leftMajor{_s_store_sk9950_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk9919 = (it->second)._ss_store_sk9919;
                int32_t _s_store_sk9950 = tbl_Filter_TD_5625_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4555_output.setInt32(r, 0, _ss_store_sk9919);
                tbl_JOIN_INNER_TD_4555_output.setInt32(r, 1, _s_store_sk9950);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4555_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4555_key_rightMajor, SW_JOIN_INNER_TD_4555_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5625_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk9950_k = tbl_Filter_TD_5625_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4555_key_rightMajor keyA{_s_store_sk9950_k};
            int32_t _s_store_sk9950 = tbl_Filter_TD_5625_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4555_payload_rightMajor payloadA{_s_store_sk9950};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5432_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk9919_k = tbl_JOIN_INNER_TD_5432_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4555_key_rightMajor{_ss_store_sk9919_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk9950 = (it->second)._s_store_sk9950;
                int32_t _ss_store_sk9919 = tbl_JOIN_INNER_TD_5432_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4555_output.setInt32(r, 1, _s_store_sk9950);
                tbl_JOIN_INNER_TD_4555_output.setInt32(r, 0, _ss_store_sk9919);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4555_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4555_output #Row: " << tbl_JOIN_INNER_TD_4555_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_4495(Table &tbl_JOIN_INNER_TD_5671_output, Table &tbl_Aggregate_TD_4495_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h10_30_to_11#9640L)
    // Input: ListBuffer(ss_store_sk#9852, s_store_sk#9883)
    // Output: ListBuffer(h10_30_to_11#9640L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_5671_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk9852 = tbl_JOIN_INNER_TD_5671_output.getInt32(i, 0);
        int32_t _s_store_sk9883 = tbl_JOIN_INNER_TD_5671_output.getInt32(i, 1);
        int64_t _h10_30_to_119640L_count_0 = 1;
        count_0 += _h10_30_to_119640L_count_0;
    }
    int r = 0;
    int64_t _h10_30_to_119640L = count_0;
    tbl_Aggregate_TD_4495_output.setInt64(r++, 0, _h10_30_to_119640L);
    tbl_Aggregate_TD_4495_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4495_output #Row: " << tbl_Aggregate_TD_4495_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_4276(Table &tbl_JOIN_CROSS_TD_5373_output, Table &tbl_Aggregate_TD_5256_output, Table &tbl_JOIN_CROSS_TD_4276_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L)
    // Right Table: ListBuffer(h10_to_10_30#9639L)
    // Output Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L, h10_to_10_30#9639L)
    int left_nrow = tbl_JOIN_CROSS_TD_5373_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5256_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_4276_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_5373_output.getInt64(i, 0));
        tbl_JOIN_CROSS_TD_4276_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_5373_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_4276_output.setInt32(r, 2, tbl_JOIN_CROSS_TD_5373_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_4276_output.setInt32(r, 3, tbl_Aggregate_TD_5256_output.getInt64(j, 3));
        ++r;
    }
    tbl_JOIN_CROSS_TD_4276_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_4276_output #Row: " << tbl_JOIN_CROSS_TD_4276_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3311(Table &tbl_SerializeFromObject_TD_4381_input, Table &tbl_Filter_TD_3311_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#10089) AND (s_store_name#10089 = ese)) AND isnotnull(s_store_sk#10084)))
    // Input: ListBuffer(s_store_sk#10084, s_store_name#10089)
    // Output: ListBuffer(s_store_sk#10084)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4381_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name10089 = tbl_SerializeFromObject_TD_4381_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk10084 = tbl_SerializeFromObject_TD_4381_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_store_name10089.data()) != "NULL") && (std::string(_s_store_name10089.data()) == "ese")) && (_s_store_sk10084!= 0)) {
            int32_t _s_store_sk10084_t = tbl_SerializeFromObject_TD_4381_input.getInt32(i, 0);
            tbl_Filter_TD_3311_output.setInt32(r, 0, _s_store_sk10084_t);
            r++;
        }
    }
    tbl_Filter_TD_3311_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3311_output #Row: " << tbl_Filter_TD_3311_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3940_key_leftMajor {
    int32_t _ss_sold_time_sk10047;
    bool operator==(const SW_JOIN_INNER_TD_3940_key_leftMajor& other) const {
        return ((_ss_sold_time_sk10047 == other._ss_sold_time_sk10047));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3940_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3940_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_time_sk10047));
    }
};
}
struct SW_JOIN_INNER_TD_3940_payload_leftMajor {
    int32_t _ss_sold_time_sk10047;
    int32_t _ss_store_sk10053;
};
struct SW_JOIN_INNER_TD_3940_key_rightMajor {
    int32_t _t_time_sk10074;
    bool operator==(const SW_JOIN_INNER_TD_3940_key_rightMajor& other) const {
        return ((_t_time_sk10074 == other._t_time_sk10074));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3940_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3940_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk10074));
    }
};
}
struct SW_JOIN_INNER_TD_3940_payload_rightMajor {
    int32_t _t_time_sk10074;
};
void SW_JOIN_INNER_TD_3940(Table &tbl_JOIN_INNER_TD_4390_output, Table &tbl_Filter_TD_4762_output, Table &tbl_JOIN_INNER_TD_3940_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_time_sk#10047 = t_time_sk#10074))
    // Left Table: ListBuffer(ss_sold_time_sk#10047, ss_store_sk#10053)
    // Right Table: ListBuffer(t_time_sk#10074)
    // Output Table: ListBuffer(ss_store_sk#10053)
    int left_nrow = tbl_JOIN_INNER_TD_4390_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4762_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3940_key_leftMajor, SW_JOIN_INNER_TD_3940_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4390_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_time_sk10047_k = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3940_key_leftMajor keyA{_ss_sold_time_sk10047_k};
            int32_t _ss_sold_time_sk10047 = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 0);
            int32_t _ss_store_sk10053 = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3940_payload_leftMajor payloadA{_ss_sold_time_sk10047, _ss_store_sk10053};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4762_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk10074_k = tbl_Filter_TD_4762_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3940_key_leftMajor{_t_time_sk10074_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_time_sk10047 = (it->second)._ss_sold_time_sk10047;
                int32_t _ss_store_sk10053 = (it->second)._ss_store_sk10053;
                int32_t _t_time_sk10074 = tbl_Filter_TD_4762_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3940_output.setInt32(r, 0, _ss_store_sk10053);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3940_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3940_key_rightMajor, SW_JOIN_INNER_TD_3940_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4762_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk10074_k = tbl_Filter_TD_4762_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3940_key_rightMajor keyA{_t_time_sk10074_k};
            int32_t _t_time_sk10074 = tbl_Filter_TD_4762_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3940_payload_rightMajor payloadA{_t_time_sk10074};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4390_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_time_sk10047_k = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3940_key_rightMajor{_ss_sold_time_sk10047_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk10074 = (it->second)._t_time_sk10074;
                int32_t _ss_sold_time_sk10047 = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 0);
                int32_t _ss_store_sk10053 = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3940_output.setInt32(r, 0, _ss_store_sk10053);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3940_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3940_output #Row: " << tbl_JOIN_INNER_TD_3940_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_337_key_leftMajor {
    int32_t _ss_store_sk9986;
    bool operator==(const SW_JOIN_INNER_TD_337_key_leftMajor& other) const {
        return ((_ss_store_sk9986 == other._ss_store_sk9986));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_337_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_337_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk9986));
    }
};
}
struct SW_JOIN_INNER_TD_337_payload_leftMajor {
    int32_t _ss_store_sk9986;
};
struct SW_JOIN_INNER_TD_337_key_rightMajor {
    int32_t _s_store_sk10017;
    bool operator==(const SW_JOIN_INNER_TD_337_key_rightMajor& other) const {
        return ((_s_store_sk10017 == other._s_store_sk10017));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_337_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_337_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk10017));
    }
};
}
struct SW_JOIN_INNER_TD_337_payload_rightMajor {
    int32_t _s_store_sk10017;
};
void SW_JOIN_INNER_TD_337(Table &tbl_JOIN_INNER_TD_4371_output, Table &tbl_Filter_TD_4648_output, Table &tbl_JOIN_INNER_TD_337_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#9986 = s_store_sk#10017))
    // Left Table: ListBuffer(ss_store_sk#9986)
    // Right Table: ListBuffer(s_store_sk#10017)
    // Output Table: ListBuffer(ss_store_sk#9986, s_store_sk#10017)
    int left_nrow = tbl_JOIN_INNER_TD_4371_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4648_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_337_key_leftMajor, SW_JOIN_INNER_TD_337_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4371_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk9986_k = tbl_JOIN_INNER_TD_4371_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_337_key_leftMajor keyA{_ss_store_sk9986_k};
            int32_t _ss_store_sk9986 = tbl_JOIN_INNER_TD_4371_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_337_payload_leftMajor payloadA{_ss_store_sk9986};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4648_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk10017_k = tbl_Filter_TD_4648_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_337_key_leftMajor{_s_store_sk10017_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk9986 = (it->second)._ss_store_sk9986;
                int32_t _s_store_sk10017 = tbl_Filter_TD_4648_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_337_output.setInt32(r, 0, _ss_store_sk9986);
                tbl_JOIN_INNER_TD_337_output.setInt32(r, 1, _s_store_sk10017);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_337_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_337_key_rightMajor, SW_JOIN_INNER_TD_337_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4648_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk10017_k = tbl_Filter_TD_4648_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_337_key_rightMajor keyA{_s_store_sk10017_k};
            int32_t _s_store_sk10017 = tbl_Filter_TD_4648_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_337_payload_rightMajor payloadA{_s_store_sk10017};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4371_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk9986_k = tbl_JOIN_INNER_TD_4371_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_337_key_rightMajor{_ss_store_sk9986_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk10017 = (it->second)._s_store_sk10017;
                int32_t _ss_store_sk9986 = tbl_JOIN_INNER_TD_4371_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_337_output.setInt32(r, 1, _s_store_sk10017);
                tbl_JOIN_INNER_TD_337_output.setInt32(r, 0, _ss_store_sk9986);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_337_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_337_output #Row: " << tbl_JOIN_INNER_TD_337_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_3932(Table &tbl_JOIN_INNER_TD_4555_output, Table &tbl_Aggregate_TD_3932_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h11_to_11_30#9641L)
    // Input: ListBuffer(ss_store_sk#9919, s_store_sk#9950)
    // Output: ListBuffer(h11_to_11_30#9641L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_4555_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk9919 = tbl_JOIN_INNER_TD_4555_output.getInt32(i, 0);
        int32_t _s_store_sk9950 = tbl_JOIN_INNER_TD_4555_output.getInt32(i, 1);
        int64_t _h11_to_11_309641L_count_0 = 1;
        count_0 += _h11_to_11_309641L_count_0;
    }
    int r = 0;
    int64_t _h11_to_11_309641L = count_0;
    tbl_Aggregate_TD_3932_output.setInt64(r++, 0, _h11_to_11_309641L);
    tbl_Aggregate_TD_3932_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3932_output #Row: " << tbl_Aggregate_TD_3932_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_3986(Table &tbl_JOIN_CROSS_TD_4276_output, Table &tbl_Aggregate_TD_4495_output, Table &tbl_JOIN_CROSS_TD_3986_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L, h10_to_10_30#9639L)
    // Right Table: ListBuffer(h10_30_to_11#9640L)
    // Output Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L, h10_to_10_30#9639L, h10_30_to_11#9640L)
    int left_nrow = tbl_JOIN_CROSS_TD_4276_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_4495_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_3986_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_4276_output.getInt64(i, 0));
        tbl_JOIN_CROSS_TD_3986_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_4276_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_3986_output.setInt32(r, 2, tbl_JOIN_CROSS_TD_4276_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_3986_output.setInt32(r, 3, tbl_JOIN_CROSS_TD_4276_output.getInt64(i, 3));
        tbl_JOIN_CROSS_TD_3986_output.setInt32(r, 4, tbl_Aggregate_TD_4495_output.getInt64(j, 4));
        ++r;
    }
    tbl_JOIN_CROSS_TD_3986_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_3986_output #Row: " << tbl_JOIN_CROSS_TD_3986_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2578_key_leftMajor {
    int32_t _ss_store_sk10053;
    bool operator==(const SW_JOIN_INNER_TD_2578_key_leftMajor& other) const {
        return ((_ss_store_sk10053 == other._ss_store_sk10053));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2578_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2578_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk10053));
    }
};
}
struct SW_JOIN_INNER_TD_2578_payload_leftMajor {
    int32_t _ss_store_sk10053;
};
struct SW_JOIN_INNER_TD_2578_key_rightMajor {
    int32_t _s_store_sk10084;
    bool operator==(const SW_JOIN_INNER_TD_2578_key_rightMajor& other) const {
        return ((_s_store_sk10084 == other._s_store_sk10084));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2578_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2578_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk10084));
    }
};
}
struct SW_JOIN_INNER_TD_2578_payload_rightMajor {
    int32_t _s_store_sk10084;
};
void SW_JOIN_INNER_TD_2578(Table &tbl_JOIN_INNER_TD_3940_output, Table &tbl_Filter_TD_3311_output, Table &tbl_JOIN_INNER_TD_2578_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#10053 = s_store_sk#10084))
    // Left Table: ListBuffer(ss_store_sk#10053)
    // Right Table: ListBuffer(s_store_sk#10084)
    // Output Table: ListBuffer(ss_store_sk#10053, s_store_sk#10084)
    int left_nrow = tbl_JOIN_INNER_TD_3940_output.getNumRow();
    int right_nrow = tbl_Filter_TD_3311_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2578_key_leftMajor, SW_JOIN_INNER_TD_2578_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3940_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk10053_k = tbl_JOIN_INNER_TD_3940_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2578_key_leftMajor keyA{_ss_store_sk10053_k};
            int32_t _ss_store_sk10053 = tbl_JOIN_INNER_TD_3940_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2578_payload_leftMajor payloadA{_ss_store_sk10053};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_3311_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk10084_k = tbl_Filter_TD_3311_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2578_key_leftMajor{_s_store_sk10084_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk10053 = (it->second)._ss_store_sk10053;
                int32_t _s_store_sk10084 = tbl_Filter_TD_3311_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_2578_output.setInt32(r, 0, _ss_store_sk10053);
                tbl_JOIN_INNER_TD_2578_output.setInt32(r, 1, _s_store_sk10084);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2578_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2578_key_rightMajor, SW_JOIN_INNER_TD_2578_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_3311_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk10084_k = tbl_Filter_TD_3311_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2578_key_rightMajor keyA{_s_store_sk10084_k};
            int32_t _s_store_sk10084 = tbl_Filter_TD_3311_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2578_payload_rightMajor payloadA{_s_store_sk10084};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3940_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk10053_k = tbl_JOIN_INNER_TD_3940_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2578_key_rightMajor{_ss_store_sk10053_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk10084 = (it->second)._s_store_sk10084;
                int32_t _ss_store_sk10053 = tbl_JOIN_INNER_TD_3940_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_2578_output.setInt32(r, 1, _s_store_sk10084);
                tbl_JOIN_INNER_TD_2578_output.setInt32(r, 0, _ss_store_sk10053);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2578_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2578_output #Row: " << tbl_JOIN_INNER_TD_2578_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2501(Table &tbl_JOIN_INNER_TD_337_output, Table &tbl_Aggregate_TD_2501_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h11_30_to_12#9642L)
    // Input: ListBuffer(ss_store_sk#9986, s_store_sk#10017)
    // Output: ListBuffer(h11_30_to_12#9642L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_337_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk9986 = tbl_JOIN_INNER_TD_337_output.getInt32(i, 0);
        int32_t _s_store_sk10017 = tbl_JOIN_INNER_TD_337_output.getInt32(i, 1);
        int64_t _h11_30_to_129642L_count_0 = 1;
        count_0 += _h11_30_to_129642L_count_0;
    }
    int r = 0;
    int64_t _h11_30_to_129642L = count_0;
    tbl_Aggregate_TD_2501_output.setInt64(r++, 0, _h11_30_to_129642L);
    tbl_Aggregate_TD_2501_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2501_output #Row: " << tbl_Aggregate_TD_2501_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_2346(Table &tbl_JOIN_CROSS_TD_3986_output, Table &tbl_Aggregate_TD_3932_output, Table &tbl_JOIN_CROSS_TD_2346_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L, h10_to_10_30#9639L, h10_30_to_11#9640L)
    // Right Table: ListBuffer(h11_to_11_30#9641L)
    // Output Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L, h10_to_10_30#9639L, h10_30_to_11#9640L, h11_to_11_30#9641L)
    int left_nrow = tbl_JOIN_CROSS_TD_3986_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3932_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_2346_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_3986_output.getInt64(i, 0));
        tbl_JOIN_CROSS_TD_2346_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_3986_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_2346_output.setInt32(r, 2, tbl_JOIN_CROSS_TD_3986_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_2346_output.setInt32(r, 3, tbl_JOIN_CROSS_TD_3986_output.getInt64(i, 3));
        tbl_JOIN_CROSS_TD_2346_output.setInt32(r, 4, tbl_JOIN_CROSS_TD_3986_output.getInt64(i, 4));
        tbl_JOIN_CROSS_TD_2346_output.setInt32(r, 5, tbl_Aggregate_TD_3932_output.getInt64(j, 5));
        ++r;
    }
    tbl_JOIN_CROSS_TD_2346_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_2346_output #Row: " << tbl_JOIN_CROSS_TD_2346_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1346(Table &tbl_JOIN_INNER_TD_2578_output, Table &tbl_Aggregate_TD_1346_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h12_to_12_30#9643L)
    // Input: ListBuffer(ss_store_sk#10053, s_store_sk#10084)
    // Output: ListBuffer(h12_to_12_30#9643L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_2578_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk10053 = tbl_JOIN_INNER_TD_2578_output.getInt32(i, 0);
        int32_t _s_store_sk10084 = tbl_JOIN_INNER_TD_2578_output.getInt32(i, 1);
        int64_t _h12_to_12_309643L_count_0 = 1;
        count_0 += _h12_to_12_309643L_count_0;
    }
    int r = 0;
    int64_t _h12_to_12_309643L = count_0;
    tbl_Aggregate_TD_1346_output.setInt64(r++, 0, _h12_to_12_309643L);
    tbl_Aggregate_TD_1346_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1346_output #Row: " << tbl_Aggregate_TD_1346_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_1195(Table &tbl_JOIN_CROSS_TD_2346_output, Table &tbl_Aggregate_TD_2501_output, Table &tbl_JOIN_CROSS_TD_1195_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L, h10_to_10_30#9639L, h10_30_to_11#9640L, h11_to_11_30#9641L)
    // Right Table: ListBuffer(h11_30_to_12#9642L)
    // Output Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L, h10_to_10_30#9639L, h10_30_to_11#9640L, h11_to_11_30#9641L, h11_30_to_12#9642L)
    int left_nrow = tbl_JOIN_CROSS_TD_2346_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_2501_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_1195_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_2346_output.getInt64(i, 0));
        tbl_JOIN_CROSS_TD_1195_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_2346_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_1195_output.setInt32(r, 2, tbl_JOIN_CROSS_TD_2346_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_1195_output.setInt32(r, 3, tbl_JOIN_CROSS_TD_2346_output.getInt64(i, 3));
        tbl_JOIN_CROSS_TD_1195_output.setInt32(r, 4, tbl_JOIN_CROSS_TD_2346_output.getInt64(i, 4));
        tbl_JOIN_CROSS_TD_1195_output.setInt32(r, 5, tbl_JOIN_CROSS_TD_2346_output.getInt64(i, 5));
        tbl_JOIN_CROSS_TD_1195_output.setInt32(r, 6, tbl_Aggregate_TD_2501_output.getInt64(j, 6));
        ++r;
    }
    tbl_JOIN_CROSS_TD_1195_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_1195_output #Row: " << tbl_JOIN_CROSS_TD_1195_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_0135(Table &tbl_JOIN_CROSS_TD_1195_output, Table &tbl_Aggregate_TD_1346_output, Table &tbl_JOIN_CROSS_TD_0135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L, h10_to_10_30#9639L, h10_30_to_11#9640L, h11_to_11_30#9641L, h11_30_to_12#9642L)
    // Right Table: ListBuffer(h12_to_12_30#9643L)
    // Output Table: ListBuffer(h8_30_to_9#9636L, h9_to_9_30#9637L, h9_30_to_10#9638L, h10_to_10_30#9639L, h10_30_to_11#9640L, h11_to_11_30#9641L, h11_30_to_12#9642L, h12_to_12_30#9643L)
    int left_nrow = tbl_JOIN_CROSS_TD_1195_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_1346_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_0135_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_1195_output.getInt64(i, 0));
        tbl_JOIN_CROSS_TD_0135_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_1195_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_0135_output.setInt32(r, 2, tbl_JOIN_CROSS_TD_1195_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_0135_output.setInt32(r, 3, tbl_JOIN_CROSS_TD_1195_output.getInt64(i, 3));
        tbl_JOIN_CROSS_TD_0135_output.setInt32(r, 4, tbl_JOIN_CROSS_TD_1195_output.getInt64(i, 4));
        tbl_JOIN_CROSS_TD_0135_output.setInt32(r, 5, tbl_JOIN_CROSS_TD_1195_output.getInt64(i, 5));
        tbl_JOIN_CROSS_TD_0135_output.setInt32(r, 6, tbl_JOIN_CROSS_TD_1195_output.getInt64(i, 6));
        tbl_JOIN_CROSS_TD_0135_output.setInt32(r, 7, tbl_Aggregate_TD_1346_output.getInt64(j, 7));
        ++r;
    }
    tbl_JOIN_CROSS_TD_0135_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_0135_output #Row: " << tbl_JOIN_CROSS_TD_0135_output.getNumRow() << std::endl;
}

