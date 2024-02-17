#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10927(Table &tbl_SerializeFromObject_TD_11106_input, Table &tbl_Filter_TD_10927_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND (((d_year#126 = 2001) AND (d_moy#128 >= 4)) AND (d_moy#128 <= 6))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11106_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_11106_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_11106_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11106_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && (((_d_year126 == 2001) && (_d_moy128 >= 4)) && (_d_moy128 <= 6))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11106_input.getInt32(i, 0);
            tbl_Filter_TD_10927_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_10927_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10927_output #Row: " << tbl_Filter_TD_10927_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10680(Table &tbl_SerializeFromObject_TD_11463_input, Table &tbl_Filter_TD_10680_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#1206))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11463_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11463_input.getInt32(i, 0);
        if (_ss_sold_date_sk1206!= 0) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11463_input.getInt32(i, 0);
            tbl_Filter_TD_10680_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_11463_input.getInt32(i, 1);
            tbl_Filter_TD_10680_output.setInt32(r, 1, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_10680_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10680_output #Row: " << tbl_Filter_TD_10680_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9713(Table &tbl_SerializeFromObject_TD_10810_input, Table &tbl_Filter_TD_9713_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#10571) AND isnotnull(d_moy#10573)) AND (((d_year#10571 = 2001) AND (d_moy#10573 >= 4)) AND (d_moy#10573 <= 6))) AND isnotnull(d_date_sk#10565)))
    // Input: ListBuffer(d_date_sk#10565, d_year#10571, d_moy#10573)
    // Output: ListBuffer(d_date_sk#10565)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10810_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year10571 = tbl_SerializeFromObject_TD_10810_input.getInt32(i, 1);
        int32_t _d_moy10573 = tbl_SerializeFromObject_TD_10810_input.getInt32(i, 2);
        int32_t _d_date_sk10565 = tbl_SerializeFromObject_TD_10810_input.getInt32(i, 0);
        if ((((_d_year10571!= 0) && (_d_moy10573!= 0)) && (((_d_year10571 == 2001) && (_d_moy10573 >= 4)) && (_d_moy10573 <= 6))) && (_d_date_sk10565!= 0)) {
            int32_t _d_date_sk10565_t = tbl_SerializeFromObject_TD_10810_input.getInt32(i, 0);
            tbl_Filter_TD_9713_output.setInt32(r, 0, _d_date_sk10565_t);
            r++;
        }
    }
    tbl_Filter_TD_9713_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9713_output #Row: " << tbl_Filter_TD_9713_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9247(Table &tbl_SerializeFromObject_TD_10736_input, Table &tbl_Filter_TD_9247_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#729))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10736_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10736_input.getInt32(i, 0);
        if (_ws_sold_date_sk729!= 0) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10736_input.getInt32(i, 0);
            tbl_Filter_TD_9247_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_10736_input.getInt32(i, 1);
            tbl_Filter_TD_9247_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            r++;
        }
    }
    tbl_Filter_TD_9247_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9247_output #Row: " << tbl_Filter_TD_9247_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9689_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_9689_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9689_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9689_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_9689_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
};
struct SW_JOIN_INNER_TD_9689_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_9689_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9689_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9689_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_9689_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_9689(Table &tbl_Filter_TD_10680_output, Table &tbl_Filter_TD_10927_output, Table &tbl_JOIN_INNER_TD_9689_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_customer_sk#1209)
    int left_nrow = tbl_Filter_TD_10680_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10927_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9689_key_leftMajor, SW_JOIN_INNER_TD_9689_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10680_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10680_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9689_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10680_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_10680_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9689_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10927_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10927_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9689_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date_sk120 = tbl_Filter_TD_10927_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9689_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9689_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9689_key_rightMajor, SW_JOIN_INNER_TD_9689_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10927_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10927_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9689_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_10927_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9689_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10680_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10680_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9689_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10680_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_10680_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9689_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9689_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9689_output #Row: " << tbl_JOIN_INNER_TD_9689_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9289(Table &tbl_SerializeFromObject_TD_10131_input, Table &tbl_Filter_TD_9289_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_current_addr_sk#4) AND isnotnull(c_current_cdemo_sk#2)))
    // Input: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10131_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_10131_input.getInt32(i, 2);
        int32_t _c_current_cdemo_sk2 = tbl_SerializeFromObject_TD_10131_input.getInt32(i, 1);
        if ((_c_current_addr_sk4!= 0) && (_c_current_cdemo_sk2!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_10131_input.getInt32(i, 0);
            tbl_Filter_TD_9289_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_cdemo_sk2_t = tbl_SerializeFromObject_TD_10131_input.getInt32(i, 1);
            tbl_Filter_TD_9289_output.setInt32(r, 1, _c_current_cdemo_sk2_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_10131_input.getInt32(i, 2);
            tbl_Filter_TD_9289_output.setInt32(r, 2, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_9289_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9289_output #Row: " << tbl_Filter_TD_9289_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8414(Table &tbl_SerializeFromObject_TD_9302_input, Table &tbl_Filter_TD_8414_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#10599) AND isnotnull(d_moy#10601)) AND (((d_year#10599 = 2001) AND (d_moy#10601 >= 4)) AND (d_moy#10601 <= 6))) AND isnotnull(d_date_sk#10593)))
    // Input: ListBuffer(d_date_sk#10593, d_year#10599, d_moy#10601)
    // Output: ListBuffer(d_date_sk#10593)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9302_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year10599 = tbl_SerializeFromObject_TD_9302_input.getInt32(i, 1);
        int32_t _d_moy10601 = tbl_SerializeFromObject_TD_9302_input.getInt32(i, 2);
        int32_t _d_date_sk10593 = tbl_SerializeFromObject_TD_9302_input.getInt32(i, 0);
        if ((((_d_year10599!= 0) && (_d_moy10601!= 0)) && (((_d_year10599 == 2001) && (_d_moy10601 >= 4)) && (_d_moy10601 <= 6))) && (_d_date_sk10593!= 0)) {
            int32_t _d_date_sk10593_t = tbl_SerializeFromObject_TD_9302_input.getInt32(i, 0);
            tbl_Filter_TD_8414_output.setInt32(r, 0, _d_date_sk10593_t);
            r++;
        }
    }
    tbl_Filter_TD_8414_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8414_output #Row: " << tbl_Filter_TD_8414_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8702(Table &tbl_SerializeFromObject_TD_924_input, Table &tbl_Filter_TD_8702_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_924_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_924_input.getInt32(i, 0);
        if (_cs_sold_date_sk1104!= 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_924_input.getInt32(i, 0);
            tbl_Filter_TD_8702_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ship_customer_sk1111_t = tbl_SerializeFromObject_TD_924_input.getInt32(i, 1);
            tbl_Filter_TD_8702_output.setInt32(r, 1, _cs_ship_customer_sk1111_t);
            r++;
        }
    }
    tbl_Filter_TD_8702_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8702_output #Row: " << tbl_Filter_TD_8702_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8423_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_8423_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8423_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8423_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_8423_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
};
struct SW_JOIN_INNER_TD_8423_key_rightMajor {
    int32_t _d_date_sk10565;
    bool operator==(const SW_JOIN_INNER_TD_8423_key_rightMajor& other) const {
        return ((_d_date_sk10565 == other._d_date_sk10565));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8423_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8423_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk10565));
    }
};
}
struct SW_JOIN_INNER_TD_8423_payload_rightMajor {
    int32_t _d_date_sk10565;
};
void SW_JOIN_INNER_TD_8423(Table &tbl_Filter_TD_9247_output, Table &tbl_Filter_TD_9713_output, Table &tbl_JOIN_INNER_TD_8423_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#10565))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Right Table: ListBuffer(d_date_sk#10565)
    // Output Table: ListBuffer(ws_bill_customer_sk#733)
    int left_nrow = tbl_Filter_TD_9247_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9713_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8423_key_leftMajor, SW_JOIN_INNER_TD_8423_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9247_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9247_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8423_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9247_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_9247_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8423_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_customer_sk733};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9713_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk10565_k = tbl_Filter_TD_9713_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8423_key_leftMajor{_d_date_sk10565_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date_sk10565 = tbl_Filter_TD_9713_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8423_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8423_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8423_key_rightMajor, SW_JOIN_INNER_TD_8423_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9713_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk10565_k = tbl_Filter_TD_9713_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8423_key_rightMajor keyA{_d_date_sk10565_k};
            int32_t _d_date_sk10565 = tbl_Filter_TD_9713_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8423_payload_rightMajor payloadA{_d_date_sk10565};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9247_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9247_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8423_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk10565 = (it->second)._d_date_sk10565;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9247_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_9247_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8423_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8423_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8423_output #Row: " << tbl_JOIN_INNER_TD_8423_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_8579_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8579_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8579_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8579_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8579_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_LEFTSEMI_TD_8579_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8579_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8579_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8579_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8579_payload_rightMajor {
    int32_t _ss_customer_sk1209;
};
void SW_JOIN_LEFTSEMI_TD_8579(Table &tbl_Filter_TD_9289_output, Table &tbl_JOIN_INNER_TD_9689_output, Table &tbl_JOIN_LEFTSEMI_TD_8579_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ss_customer_sk#1209)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    int left_nrow = tbl_Filter_TD_9289_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_9689_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_8579_key_rightMajor, SW_JOIN_LEFTSEMI_TD_8579_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9689_output.getNumRow();
        int nrow2 = tbl_Filter_TD_9289_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_9689_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8579_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_9689_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8579_payload_rightMajor payloadA{_ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_9289_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_8579_key_rightMajor{_c_customer_sk0_k});
            if (it != ht1.end()) {
                int32_t _c_customer_sk0 = tbl_Filter_TD_9289_output.getInt32(i, 0);
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_9289_output.getInt32(i, 1);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_9289_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_8579_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_LEFTSEMI_TD_8579_output.setInt32(r, 1, _c_current_cdemo_sk2);
                tbl_JOIN_LEFTSEMI_TD_8579_output.setInt32(r, 2, _c_current_addr_sk4);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_8579_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_8579_output #Row: " << tbl_JOIN_LEFTSEMI_TD_8579_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7123_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_7123_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7123_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7123_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_7123_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_customer_sk1111;
};
struct SW_JOIN_INNER_TD_7123_key_rightMajor {
    int32_t _d_date_sk10593;
    bool operator==(const SW_JOIN_INNER_TD_7123_key_rightMajor& other) const {
        return ((_d_date_sk10593 == other._d_date_sk10593));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7123_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7123_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk10593));
    }
};
}
struct SW_JOIN_INNER_TD_7123_payload_rightMajor {
    int32_t _d_date_sk10593;
};
void SW_JOIN_INNER_TD_7123(Table &tbl_Filter_TD_8702_output, Table &tbl_Filter_TD_8414_output, Table &tbl_JOIN_INNER_TD_7123_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#10593))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    // Right Table: ListBuffer(d_date_sk#10593)
    // Output Table: ListBuffer(cs_ship_customer_sk#1111)
    int left_nrow = tbl_Filter_TD_8702_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8414_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7123_key_leftMajor, SW_JOIN_INNER_TD_7123_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8702_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8702_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7123_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8702_output.getInt32(i, 0);
            int32_t _cs_ship_customer_sk1111 = tbl_Filter_TD_8702_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7123_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_customer_sk1111};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8414_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk10593_k = tbl_Filter_TD_8414_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7123_key_leftMajor{_d_date_sk10593_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_customer_sk1111 = (it->second)._cs_ship_customer_sk1111;
                int32_t _d_date_sk10593 = tbl_Filter_TD_8414_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7123_output.setInt32(r, 0, _cs_ship_customer_sk1111);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7123_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7123_key_rightMajor, SW_JOIN_INNER_TD_7123_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8414_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk10593_k = tbl_Filter_TD_8414_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7123_key_rightMajor keyA{_d_date_sk10593_k};
            int32_t _d_date_sk10593 = tbl_Filter_TD_8414_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7123_payload_rightMajor payloadA{_d_date_sk10593};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8702_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8702_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7123_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk10593 = (it->second)._d_date_sk10593;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8702_output.getInt32(i, 0);
                int32_t _cs_ship_customer_sk1111 = tbl_Filter_TD_8702_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7123_output.setInt32(r, 0, _cs_ship_customer_sk1111);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7123_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7123_output #Row: " << tbl_JOIN_INNER_TD_7123_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_7468_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_LEFTANTI_TD_7468_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_7468_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_7468_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_7468_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_LEFTANTI_TD_7468_key_rightMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_LEFTANTI_TD_7468_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_7468_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_7468_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_7468_payload_rightMajor {
    int32_t _ws_bill_customer_sk733;
};
void SW_JOIN_LEFTANTI_TD_7468(Table &tbl_JOIN_LEFTSEMI_TD_8579_output, Table &tbl_JOIN_INNER_TD_8423_output, Table &tbl_JOIN_LEFTANTI_TD_7468_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((c_customer_sk#0 = ws_bill_customer_sk#733))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ws_bill_customer_sk#733)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_8579_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_8423_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_7468_key_rightMajor, SW_JOIN_LEFTANTI_TD_7468_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8423_output.getNumRow();
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_8579_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_8423_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_7468_key_rightMajor keyA{_ws_bill_customer_sk733_k};
            int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_8423_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_7468_payload_rightMajor payloadA{_ws_bill_customer_sk733};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_JOIN_LEFTSEMI_TD_8579_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_7468_key_rightMajor{_c_customer_sk0_k});
            if (it == ht1.end()) {
                int32_t _c_customer_sk0 = tbl_JOIN_LEFTSEMI_TD_8579_output.getInt32(i, 0);
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_LEFTSEMI_TD_8579_output.getInt32(i, 1);
                int32_t _c_current_addr_sk4 = tbl_JOIN_LEFTSEMI_TD_8579_output.getInt32(i, 2);
                tbl_JOIN_LEFTANTI_TD_7468_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_LEFTANTI_TD_7468_output.setInt32(r, 1, _c_current_cdemo_sk2);
                tbl_JOIN_LEFTANTI_TD_7468_output.setInt32(r, 2, _c_current_addr_sk4);
                r++;
            }
        }
        tbl_JOIN_LEFTANTI_TD_7468_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_7468_output #Row: " << tbl_JOIN_LEFTANTI_TD_7468_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6262(Table &tbl_SerializeFromObject_TD_7447_input, Table &tbl_Filter_TD_6262_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((ca_state#62 IN (KY,GA,NM) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7447_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_7447_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_7447_input.getInt32(i, 0);
        auto reuse_col_str_450 = std::string(_ca_state62.data());
        if (((reuse_col_str_450 == "KY") || (reuse_col_str_450 == "GA") || (reuse_col_str_450 == "NM") || (0)) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_7447_input.getInt32(i, 0);
            tbl_Filter_TD_6262_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_6262_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6262_output #Row: " << tbl_Filter_TD_6262_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_6713_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_LEFTANTI_TD_6713_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_6713_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_6713_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_6713_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_LEFTANTI_TD_6713_key_rightMajor {
    int32_t _cs_ship_customer_sk1111;
    bool operator==(const SW_JOIN_LEFTANTI_TD_6713_key_rightMajor& other) const {
        return ((_cs_ship_customer_sk1111 == other._cs_ship_customer_sk1111));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_6713_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_6713_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_ship_customer_sk1111));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_6713_payload_rightMajor {
    int32_t _cs_ship_customer_sk1111;
};
void SW_JOIN_LEFTANTI_TD_6713(Table &tbl_JOIN_LEFTANTI_TD_7468_output, Table &tbl_JOIN_INNER_TD_7123_output, Table &tbl_JOIN_LEFTANTI_TD_6713_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((c_customer_sk#0 = cs_ship_customer_sk#1111))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(cs_ship_customer_sk#1111)
    // Output Table: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4)
    int left_nrow = tbl_JOIN_LEFTANTI_TD_7468_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_7123_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_6713_key_rightMajor, SW_JOIN_LEFTANTI_TD_6713_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7123_output.getNumRow();
        int nrow2 = tbl_JOIN_LEFTANTI_TD_7468_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_ship_customer_sk1111_k = tbl_JOIN_INNER_TD_7123_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_6713_key_rightMajor keyA{_cs_ship_customer_sk1111_k};
            int32_t _cs_ship_customer_sk1111 = tbl_JOIN_INNER_TD_7123_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_6713_payload_rightMajor payloadA{_cs_ship_customer_sk1111};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_JOIN_LEFTANTI_TD_7468_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_6713_key_rightMajor{_c_customer_sk0_k});
            if (it == ht1.end()) {
                int32_t _c_customer_sk0 = tbl_JOIN_LEFTANTI_TD_7468_output.getInt32(i, 0);
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_LEFTANTI_TD_7468_output.getInt32(i, 1);
                int32_t _c_current_addr_sk4 = tbl_JOIN_LEFTANTI_TD_7468_output.getInt32(i, 2);
                tbl_JOIN_LEFTANTI_TD_6713_output.setInt32(r, 0, _c_current_cdemo_sk2);
                tbl_JOIN_LEFTANTI_TD_6713_output.setInt32(r, 1, _c_current_addr_sk4);
                r++;
            }
        }
        tbl_JOIN_LEFTANTI_TD_6713_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_6713_output #Row: " << tbl_JOIN_LEFTANTI_TD_6713_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5966(Table &tbl_SerializeFromObject_TD_675_input, Table &tbl_Filter_TD_5966_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cd_demo_sk#93))
    // Input: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98)
    // Output: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_675_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_675_input.getInt32(i, 0);
        if (_cd_demo_sk93!= 0) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_675_input.getInt32(i, 0);
            tbl_Filter_TD_5966_output.setInt32(r, 0, _cd_demo_sk93_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_t = tbl_SerializeFromObject_TD_675_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5966_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_gender94_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_t = tbl_SerializeFromObject_TD_675_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5966_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_marital_status95_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_t = tbl_SerializeFromObject_TD_675_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_5966_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _cd_education_status96_t);
            int32_t _cd_purchase_estimate97_t = tbl_SerializeFromObject_TD_675_input.getInt32(i, 4);
            tbl_Filter_TD_5966_output.setInt32(r, 4, _cd_purchase_estimate97_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_t = tbl_SerializeFromObject_TD_675_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_5966_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cd_credit_rating98_t);
            r++;
        }
    }
    tbl_Filter_TD_5966_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5966_output #Row: " << tbl_Filter_TD_5966_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5660_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_5660_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5660_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5660_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_5660_payload_leftMajor {
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_5660_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_5660_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5660_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5660_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_5660_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_5660(Table &tbl_JOIN_LEFTANTI_TD_6713_output, Table &tbl_Filter_TD_6262_output, Table &tbl_JOIN_INNER_TD_5660_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(c_current_cdemo_sk#2)
    int left_nrow = tbl_JOIN_LEFTANTI_TD_6713_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6262_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5660_key_leftMajor, SW_JOIN_INNER_TD_5660_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTANTI_TD_6713_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_LEFTANTI_TD_6713_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5660_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_LEFTANTI_TD_6713_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_JOIN_LEFTANTI_TD_6713_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5660_payload_leftMajor payloadA{_c_current_cdemo_sk2, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6262_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6262_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5660_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_6262_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5660_output.setInt32(r, 0, _c_current_cdemo_sk2);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5660_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5660_key_rightMajor, SW_JOIN_INNER_TD_5660_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6262_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6262_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5660_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_6262_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5660_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTANTI_TD_6713_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_LEFTANTI_TD_6713_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5660_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_LEFTANTI_TD_6713_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_JOIN_LEFTANTI_TD_6713_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5660_output.setInt32(r, 0, _c_current_cdemo_sk2);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5660_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5660_output #Row: " << tbl_JOIN_INNER_TD_5660_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4915_key_leftMajor {
    int32_t _c_current_cdemo_sk2;
    bool operator==(const SW_JOIN_INNER_TD_4915_key_leftMajor& other) const {
        return ((_c_current_cdemo_sk2 == other._c_current_cdemo_sk2));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4915_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4915_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_cdemo_sk2));
    }
};
}
struct SW_JOIN_INNER_TD_4915_payload_leftMajor {
    int32_t _c_current_cdemo_sk2;
};
struct SW_JOIN_INNER_TD_4915_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_4915_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4915_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4915_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_4915_payload_rightMajor {
    int32_t _cd_demo_sk93;
    std::string _cd_gender94;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
    int32_t _cd_purchase_estimate97;
    std::string _cd_credit_rating98;
};
void SW_JOIN_INNER_TD_4915(Table &tbl_JOIN_INNER_TD_5660_output, Table &tbl_Filter_TD_5966_output, Table &tbl_JOIN_INNER_TD_4915_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cd_demo_sk#93 = c_current_cdemo_sk#2))
    // Left Table: ListBuffer(c_current_cdemo_sk#2)
    // Right Table: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98)
    // Output Table: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98)
    int left_nrow = tbl_JOIN_INNER_TD_5660_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5966_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4915_key_leftMajor, SW_JOIN_INNER_TD_4915_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5660_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_5660_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4915_key_leftMajor keyA{_c_current_cdemo_sk2_k};
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_5660_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4915_payload_leftMajor payloadA{_c_current_cdemo_sk2};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5966_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_5966_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4915_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_5966_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Filter_TD_5966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_gender94 = std::string(_cd_gender94_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_5966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_5966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
                int32_t _cd_purchase_estimate97 = tbl_Filter_TD_5966_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_Filter_TD_5966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _cd_credit_rating98 = std::string(_cd_credit_rating98_n.data());
                tbl_JOIN_INNER_TD_4915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
                tbl_JOIN_INNER_TD_4915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
                tbl_JOIN_INNER_TD_4915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
                tbl_JOIN_INNER_TD_4915_output.setInt32(r, 3, _cd_purchase_estimate97);
                tbl_JOIN_INNER_TD_4915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cd_credit_rating98_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4915_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4915_key_rightMajor, SW_JOIN_INNER_TD_4915_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5966_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_5966_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4915_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_5966_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Filter_TD_5966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_gender94 = std::string(_cd_gender94_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_5966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_5966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
            int32_t _cd_purchase_estimate97 = tbl_Filter_TD_5966_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_Filter_TD_5966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _cd_credit_rating98 = std::string(_cd_credit_rating98_n.data());
            SW_JOIN_INNER_TD_4915_payload_rightMajor payloadA{_cd_demo_sk93, _cd_gender94, _cd_marital_status95, _cd_education_status96, _cd_purchase_estimate97, _cd_credit_rating98};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5660_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_5660_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4915_key_rightMajor{_c_current_cdemo_sk2_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                std::string _cd_gender94 = (it->second)._cd_gender94;
                std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n{};
                memcpy(_cd_gender94_n.data(), (_cd_gender94).data(), (_cd_gender94).length());
                std::string _cd_marital_status95 = (it->second)._cd_marital_status95;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n{};
                memcpy(_cd_marital_status95_n.data(), (_cd_marital_status95).data(), (_cd_marital_status95).length());
                std::string _cd_education_status96 = (it->second)._cd_education_status96;
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n{};
                memcpy(_cd_education_status96_n.data(), (_cd_education_status96).data(), (_cd_education_status96).length());
                int32_t _cd_purchase_estimate97 = (it->second)._cd_purchase_estimate97;
                std::string _cd_credit_rating98 = (it->second)._cd_credit_rating98;
                std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n{};
                memcpy(_cd_credit_rating98_n.data(), (_cd_credit_rating98).data(), (_cd_credit_rating98).length());
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_5660_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
                tbl_JOIN_INNER_TD_4915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
                tbl_JOIN_INNER_TD_4915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
                tbl_JOIN_INNER_TD_4915_output.setInt32(r, 3, _cd_purchase_estimate97);
                tbl_JOIN_INNER_TD_4915_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cd_credit_rating98_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4915_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4915_output #Row: " << tbl_JOIN_INNER_TD_4915_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3506_key {
    std::string _cd_gender94;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
    int32_t _cd_purchase_estimate97;
    std::string _cd_credit_rating98;
    bool operator==(const SW_Aggregate_TD_3506_key& other) const { return (_cd_gender94 == other._cd_gender94) && (_cd_marital_status95 == other._cd_marital_status95) && (_cd_education_status96 == other._cd_education_status96) && (_cd_purchase_estimate97 == other._cd_purchase_estimate97) && (_cd_credit_rating98 == other._cd_credit_rating98); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3506_key> {
    std::size_t operator() (const SW_Aggregate_TD_3506_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._cd_gender94)) + (hash<string>()(k._cd_marital_status95)) + (hash<string>()(k._cd_education_status96)) + (hash<int32_t>()(k._cd_purchase_estimate97)) + (hash<string>()(k._cd_credit_rating98));
    }
};
}
struct SW_Aggregate_TD_3506_payload {
    int64_t _cnt110556L_count_0;
    int64_t _cnt210557L_count_1;
    int64_t _cnt310558L_count_2;
};
void SW_Aggregate_TD_3506(Table &tbl_JOIN_INNER_TD_4915_output, Table &tbl_Aggregate_TD_3506_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, count(1) AS cnt1#10556L, count(1) AS cnt2#10557L, count(1) AS cnt3#10558L)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10556L, cd_purchase_estimate#97, cnt2#10557L, cd_credit_rating#98, cnt3#10558L)
    std::unordered_map<SW_Aggregate_TD_3506_key, SW_Aggregate_TD_3506_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4915_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_JOIN_INNER_TD_4915_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_JOIN_INNER_TD_4915_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_JOIN_INNER_TD_4915_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _cd_purchase_estimate97 = tbl_JOIN_INNER_TD_4915_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98 = tbl_JOIN_INNER_TD_4915_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_3506_key k{std::string(_cd_gender94.data()), std::string(_cd_marital_status95.data()), std::string(_cd_education_status96.data()), _cd_purchase_estimate97, std::string(_cd_credit_rating98.data())};
        int64_t _cnt110556L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _cnt210557L_count_1 = 1 != 0 ? 1 : 0;
        int64_t _cnt310558L_count_2 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_3506_payload p{_cnt110556L_count_0, _cnt210557L_count_1, _cnt310558L_count_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt110556L_count_0 + _cnt110556L_count_0;
            p._cnt110556L_count_0 = count_0;
            int64_t count_1 = (it->second)._cnt210557L_count_1 + _cnt210557L_count_1;
            p._cnt210557L_count_1 = count_1;
            int64_t count_2 = (it->second)._cnt310558L_count_2 + _cnt310558L_count_2;
            p._cnt310558L_count_2 = count_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94{};
        memcpy(_cd_gender94.data(), ((it.first)._cd_gender94).data(), ((it.first)._cd_gender94).length());
        tbl_Aggregate_TD_3506_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95{};
        memcpy(_cd_marital_status95.data(), ((it.first)._cd_marital_status95).data(), ((it.first)._cd_marital_status95).length());
        tbl_Aggregate_TD_3506_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96{};
        memcpy(_cd_education_status96.data(), ((it.first)._cd_education_status96).data(), ((it.first)._cd_education_status96).length());
        tbl_Aggregate_TD_3506_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96);
        tbl_Aggregate_TD_3506_output.setInt32(r, 4, (it.first)._cd_purchase_estimate97);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98{};
        memcpy(_cd_credit_rating98.data(), ((it.first)._cd_credit_rating98).data(), ((it.first)._cd_credit_rating98).length());
        tbl_Aggregate_TD_3506_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cd_credit_rating98);
        int64_t _cnt110556L = (it.second)._cnt110556L_count_0;
        tbl_Aggregate_TD_3506_output.setInt64(r, 3, _cnt110556L);
        int64_t _cnt210557L = (it.second)._cnt210557L_count_1;
        tbl_Aggregate_TD_3506_output.setInt64(r, 5, _cnt210557L);
        int64_t _cnt310558L = (it.second)._cnt310558L_count_2;
        tbl_Aggregate_TD_3506_output.setInt64(r, 7, _cnt310558L);
        ++r;
    }
    tbl_Aggregate_TD_3506_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3506_output #Row: " << tbl_Aggregate_TD_3506_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2317(Table &tbl_Aggregate_TD_3506_output, Table &tbl_Sort_TD_2317_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cd_gender#94 ASC NULLS FIRST, cd_marital_status#95 ASC NULLS FIRST, cd_education_status#96 ASC NULLS FIRST, cd_purchase_estimate#97 ASC NULLS FIRST, cd_credit_rating#98 ASC NULLS FIRST)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10556L, cd_purchase_estimate#97, cnt2#10557L, cd_credit_rating#98, cnt3#10558L)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10556L, cd_purchase_estimate#97, cnt2#10557L, cd_credit_rating#98, cnt3#10558L)
    struct SW_Sort_TD_2317Row {
        std::string _cd_gender94;
        std::string _cd_marital_status95;
        std::string _cd_education_status96;
        int64_t _cnt110556L;
        int32_t _cd_purchase_estimate97;
        int64_t _cnt210557L;
        std::string _cd_credit_rating98;
        int64_t _cnt310558L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2317Row& a, const SW_Sort_TD_2317Row& b) const { return 
 (a._cd_gender94 < b._cd_gender94) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 < b._cd_marital_status95)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 < b._cd_education_status96)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 < b._cd_purchase_estimate97)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 == b._cd_purchase_estimate97) && (a._cd_credit_rating98 < b._cd_credit_rating98)); 
}
    }SW_Sort_TD_2317_order; 

    int nrow1 = tbl_Aggregate_TD_3506_output.getNumRow();
    std::vector<SW_Sort_TD_2317Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_Aggregate_TD_3506_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_Aggregate_TD_3506_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_Aggregate_TD_3506_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int64_t _cnt110556L = tbl_Aggregate_TD_3506_output.getInt64(i, 3);
        int32_t _cd_purchase_estimate97 = tbl_Aggregate_TD_3506_output.getInt32(i, 4);
        int64_t _cnt210557L = tbl_Aggregate_TD_3506_output.getInt64(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98 = tbl_Aggregate_TD_3506_output.getcharN<char, TPCDS_READ_MAX +1>(i, 6);
        int64_t _cnt310558L = tbl_Aggregate_TD_3506_output.getInt64(i, 7);
        SW_Sort_TD_2317Row t = {std::string(_cd_gender94.data()),std::string(_cd_marital_status95.data()),std::string(_cd_education_status96.data()),_cnt110556L,_cd_purchase_estimate97,_cnt210557L,std::string(_cd_credit_rating98.data()),_cnt310558L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2317_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94{};
        memcpy(_cd_gender94.data(), (it._cd_gender94).data(), (it._cd_gender94).length());
        tbl_Sort_TD_2317_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _cd_gender94);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95{};
        memcpy(_cd_marital_status95.data(), (it._cd_marital_status95).data(), (it._cd_marital_status95).length());
        tbl_Sort_TD_2317_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _cd_marital_status95);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96{};
        memcpy(_cd_education_status96.data(), (it._cd_education_status96).data(), (it._cd_education_status96).length());
        tbl_Sort_TD_2317_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cd_education_status96);
        tbl_Sort_TD_2317_output.setInt64(r, 3, it._cnt110556L);
        tbl_Sort_TD_2317_output.setInt32(r, 4, it._cd_purchase_estimate97);
        tbl_Sort_TD_2317_output.setInt64(r, 5, it._cnt210557L);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98{};
        memcpy(_cd_credit_rating98.data(), (it._cd_credit_rating98).data(), (it._cd_credit_rating98).length());
        tbl_Sort_TD_2317_output.setcharN<char, TPCDS_READ_MAX +1>(r, 6, _cd_credit_rating98);
        tbl_Sort_TD_2317_output.setInt64(r, 7, it._cnt310558L);
        ++r;
    }
    tbl_Sort_TD_2317_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2317_output #Row: " << tbl_Sort_TD_2317_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1983(Table &tbl_Sort_TD_2317_output, Table &tbl_LocalLimit_TD_1983_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10556L, cd_purchase_estimate#97, cnt2#10557L, cd_credit_rating#98, cnt3#10558L)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10556L, cd_purchase_estimate#97, cnt2#10557L, cd_credit_rating#98, cnt3#10558L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Sort_TD_2317_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Sort_TD_2317_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Sort_TD_2317_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
        tbl_LocalLimit_TD_1983_output.setInt32(r, 3, tbl_Sort_TD_2317_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1983_output.setInt32(r, 4, tbl_Sort_TD_2317_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1983_output.setInt32(r, 5, tbl_Sort_TD_2317_output.getInt64(i, 5));
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_Sort_TD_2317_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_LocalLimit_TD_1983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cd_credit_rating98_n);
        tbl_LocalLimit_TD_1983_output.setInt32(r, 7, tbl_Sort_TD_2317_output.getInt64(i, 7));
        r++;
    }
    tbl_LocalLimit_TD_1983_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1983_output #Row: " << tbl_LocalLimit_TD_1983_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0215(Table &tbl_LocalLimit_TD_1983_output, Table &tbl_GlobalLimit_TD_0215_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10556L, cd_purchase_estimate#97, cnt2#10557L, cd_credit_rating#98, cnt3#10558L)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10556L, cd_purchase_estimate#97, cnt2#10557L, cd_credit_rating#98, cnt3#10558L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_LocalLimit_TD_1983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0215_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_LocalLimit_TD_1983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0215_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_LocalLimit_TD_1983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0215_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
        tbl_GlobalLimit_TD_0215_output.setInt32(r, 3, tbl_LocalLimit_TD_1983_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0215_output.setInt32(r, 4, tbl_LocalLimit_TD_1983_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0215_output.setInt32(r, 5, tbl_LocalLimit_TD_1983_output.getInt64(i, 5));
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_LocalLimit_TD_1983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_GlobalLimit_TD_0215_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cd_credit_rating98_n);
        tbl_GlobalLimit_TD_0215_output.setInt32(r, 7, tbl_LocalLimit_TD_1983_output.getInt64(i, 7));
        r++;
    }
    tbl_GlobalLimit_TD_0215_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0215_output #Row: " << tbl_GlobalLimit_TD_0215_output.getNumRow() << std::endl;
}

