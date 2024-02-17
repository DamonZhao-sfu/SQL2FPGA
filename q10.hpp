#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11158(Table &tbl_SerializeFromObject_TD_12517_input, Table &tbl_Filter_TD_11158_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND (((d_year#126 = 2002) AND (d_moy#128 >= 1)) AND (d_moy#128 <= 4))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12517_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12517_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_12517_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12517_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && (((_d_year126 == 2002) && (_d_moy128 >= 1)) && (_d_moy128 <= 4))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12517_input.getInt32(i, 0);
            tbl_Filter_TD_11158_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11158_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11158_output #Row: " << tbl_Filter_TD_11158_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11411(Table &tbl_SerializeFromObject_TD_12174_input, Table &tbl_Filter_TD_11411_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#1206))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12174_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12174_input.getInt32(i, 0);
        if (_ss_sold_date_sk1206!= 0) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12174_input.getInt32(i, 0);
            tbl_Filter_TD_11411_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_12174_input.getInt32(i, 1);
            tbl_Filter_TD_11411_output.setInt32(r, 1, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_11411_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11411_output #Row: " << tbl_Filter_TD_11411_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10738(Table &tbl_SerializeFromObject_TD_11152_input, Table &tbl_Filter_TD_10738_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#10199) AND isnotnull(d_moy#10201)) AND (((d_year#10199 = 2002) AND (d_moy#10201 >= 1)) AND (d_moy#10201 <= 4))) AND isnotnull(d_date_sk#10193)))
    // Input: ListBuffer(d_date_sk#10193, d_year#10199, d_moy#10201)
    // Output: ListBuffer(d_date_sk#10193)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11152_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year10199 = tbl_SerializeFromObject_TD_11152_input.getInt32(i, 1);
        int32_t _d_moy10201 = tbl_SerializeFromObject_TD_11152_input.getInt32(i, 2);
        int32_t _d_date_sk10193 = tbl_SerializeFromObject_TD_11152_input.getInt32(i, 0);
        if ((((_d_year10199!= 0) && (_d_moy10201!= 0)) && (((_d_year10199 == 2002) && (_d_moy10201 >= 1)) && (_d_moy10201 <= 4))) && (_d_date_sk10193!= 0)) {
            int32_t _d_date_sk10193_t = tbl_SerializeFromObject_TD_11152_input.getInt32(i, 0);
            tbl_Filter_TD_10738_output.setInt32(r, 0, _d_date_sk10193_t);
            r++;
        }
    }
    tbl_Filter_TD_10738_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10738_output #Row: " << tbl_Filter_TD_10738_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1061(Table &tbl_SerializeFromObject_TD_11269_input, Table &tbl_Filter_TD_1061_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#729))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11269_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_11269_input.getInt32(i, 0);
        if (_ws_sold_date_sk729!= 0) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_11269_input.getInt32(i, 0);
            tbl_Filter_TD_1061_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_11269_input.getInt32(i, 1);
            tbl_Filter_TD_1061_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            r++;
        }
    }
    tbl_Filter_TD_1061_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1061_output #Row: " << tbl_Filter_TD_1061_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10866_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10866_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10866_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10866_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10866_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
};
struct SW_JOIN_INNER_TD_10866_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10866_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10866_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10866_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10866_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10866(Table &tbl_Filter_TD_11411_output, Table &tbl_Filter_TD_11158_output, Table &tbl_JOIN_INNER_TD_10866_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_customer_sk#1209)
    int left_nrow = tbl_Filter_TD_11411_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11158_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10866_key_leftMajor, SW_JOIN_INNER_TD_10866_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11411_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_11411_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10866_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11411_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_11411_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10866_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11158_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11158_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10866_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date_sk120 = tbl_Filter_TD_11158_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10866_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10866_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10866_key_rightMajor, SW_JOIN_INNER_TD_10866_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11158_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11158_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10866_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11158_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10866_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11411_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_11411_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10866_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11411_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_11411_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10866_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10866_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10866_output #Row: " << tbl_JOIN_INNER_TD_10866_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10546(Table &tbl_SerializeFromObject_TD_11447_input, Table &tbl_Filter_TD_10546_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_current_addr_sk#4) AND isnotnull(c_current_cdemo_sk#2)))
    // Input: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11447_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_11447_input.getInt32(i, 2);
        int32_t _c_current_cdemo_sk2 = tbl_SerializeFromObject_TD_11447_input.getInt32(i, 1);
        if ((_c_current_addr_sk4!= 0) && (_c_current_cdemo_sk2!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_11447_input.getInt32(i, 0);
            tbl_Filter_TD_10546_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_cdemo_sk2_t = tbl_SerializeFromObject_TD_11447_input.getInt32(i, 1);
            tbl_Filter_TD_10546_output.setInt32(r, 1, _c_current_cdemo_sk2_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_11447_input.getInt32(i, 2);
            tbl_Filter_TD_10546_output.setInt32(r, 2, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_10546_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10546_output #Row: " << tbl_Filter_TD_10546_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9434(Table &tbl_SerializeFromObject_TD_1047_input, Table &tbl_Filter_TD_9434_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#10227) AND isnotnull(d_moy#10229)) AND (((d_year#10227 = 2002) AND (d_moy#10229 >= 1)) AND (d_moy#10229 <= 4))) AND isnotnull(d_date_sk#10221)))
    // Input: ListBuffer(d_date_sk#10221, d_year#10227, d_moy#10229)
    // Output: ListBuffer(d_date_sk#10221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1047_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year10227 = tbl_SerializeFromObject_TD_1047_input.getInt32(i, 1);
        int32_t _d_moy10229 = tbl_SerializeFromObject_TD_1047_input.getInt32(i, 2);
        int32_t _d_date_sk10221 = tbl_SerializeFromObject_TD_1047_input.getInt32(i, 0);
        if ((((_d_year10227!= 0) && (_d_moy10229!= 0)) && (((_d_year10227 == 2002) && (_d_moy10229 >= 1)) && (_d_moy10229 <= 4))) && (_d_date_sk10221!= 0)) {
            int32_t _d_date_sk10221_t = tbl_SerializeFromObject_TD_1047_input.getInt32(i, 0);
            tbl_Filter_TD_9434_output.setInt32(r, 0, _d_date_sk10221_t);
            r++;
        }
    }
    tbl_Filter_TD_9434_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9434_output #Row: " << tbl_Filter_TD_9434_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9285(Table &tbl_SerializeFromObject_TD_10773_input, Table &tbl_Filter_TD_9285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10773_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10773_input.getInt32(i, 0);
        if (_cs_sold_date_sk1104!= 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10773_input.getInt32(i, 0);
            tbl_Filter_TD_9285_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ship_customer_sk1111_t = tbl_SerializeFromObject_TD_10773_input.getInt32(i, 1);
            tbl_Filter_TD_9285_output.setInt32(r, 1, _cs_ship_customer_sk1111_t);
            r++;
        }
    }
    tbl_Filter_TD_9285_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9285_output #Row: " << tbl_Filter_TD_9285_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9899_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_9899_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9899_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9899_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_9899_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
};
struct SW_JOIN_INNER_TD_9899_key_rightMajor {
    int32_t _d_date_sk10193;
    bool operator==(const SW_JOIN_INNER_TD_9899_key_rightMajor& other) const {
        return ((_d_date_sk10193 == other._d_date_sk10193));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9899_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9899_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk10193));
    }
};
}
struct SW_JOIN_INNER_TD_9899_payload_rightMajor {
    int32_t _d_date_sk10193;
};
void SW_JOIN_INNER_TD_9899(Table &tbl_Filter_TD_1061_output, Table &tbl_Filter_TD_10738_output, Table &tbl_JOIN_INNER_TD_9899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#10193))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Right Table: ListBuffer(d_date_sk#10193)
    // Output Table: ListBuffer(ws_bill_customer_sk#733)
    int left_nrow = tbl_Filter_TD_1061_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10738_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9899_key_leftMajor, SW_JOIN_INNER_TD_9899_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1061_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_1061_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9899_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_1061_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_1061_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9899_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_customer_sk733};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10738_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk10193_k = tbl_Filter_TD_10738_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9899_key_leftMajor{_d_date_sk10193_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date_sk10193 = tbl_Filter_TD_10738_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9899_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9899_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9899_key_rightMajor, SW_JOIN_INNER_TD_9899_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10738_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk10193_k = tbl_Filter_TD_10738_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9899_key_rightMajor keyA{_d_date_sk10193_k};
            int32_t _d_date_sk10193 = tbl_Filter_TD_10738_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9899_payload_rightMajor payloadA{_d_date_sk10193};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1061_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_1061_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9899_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk10193 = (it->second)._d_date_sk10193;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_1061_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_1061_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9899_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9899_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9899_output #Row: " << tbl_JOIN_INNER_TD_9899_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_92_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_92_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_92_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_92_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_92_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_LEFTSEMI_TD_92_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_92_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_92_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_92_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_92_payload_rightMajor {
    int32_t _ss_customer_sk1209;
};
void SW_JOIN_LEFTSEMI_TD_92(Table &tbl_Filter_TD_10546_output, Table &tbl_JOIN_INNER_TD_10866_output, Table &tbl_JOIN_LEFTSEMI_TD_92_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ss_customer_sk#1209)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    int left_nrow = tbl_Filter_TD_10546_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_10866_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_92_key_rightMajor, SW_JOIN_LEFTSEMI_TD_92_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10866_output.getNumRow();
        int nrow2 = tbl_Filter_TD_10546_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_10866_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_92_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_10866_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_92_payload_rightMajor payloadA{_ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10546_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_92_key_rightMajor{_c_customer_sk0_k});
            if (it != ht1.end()) {
                int32_t _c_customer_sk0 = tbl_Filter_TD_10546_output.getInt32(i, 0);
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_10546_output.getInt32(i, 1);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_10546_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_92_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_LEFTSEMI_TD_92_output.setInt32(r, 1, _c_current_cdemo_sk2);
                tbl_JOIN_LEFTSEMI_TD_92_output.setInt32(r, 2, _c_current_addr_sk4);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_92_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_92_output #Row: " << tbl_JOIN_LEFTSEMI_TD_92_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8235_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_8235_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8235_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8235_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_8235_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_customer_sk1111;
};
struct SW_JOIN_INNER_TD_8235_key_rightMajor {
    int32_t _d_date_sk10221;
    bool operator==(const SW_JOIN_INNER_TD_8235_key_rightMajor& other) const {
        return ((_d_date_sk10221 == other._d_date_sk10221));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8235_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8235_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk10221));
    }
};
}
struct SW_JOIN_INNER_TD_8235_payload_rightMajor {
    int32_t _d_date_sk10221;
};
void SW_JOIN_INNER_TD_8235(Table &tbl_Filter_TD_9285_output, Table &tbl_Filter_TD_9434_output, Table &tbl_JOIN_INNER_TD_8235_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#10221))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    // Right Table: ListBuffer(d_date_sk#10221)
    // Output Table: ListBuffer(cs_ship_customer_sk#1111)
    int left_nrow = tbl_Filter_TD_9285_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9434_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8235_key_leftMajor, SW_JOIN_INNER_TD_8235_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9285_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8235_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9285_output.getInt32(i, 0);
            int32_t _cs_ship_customer_sk1111 = tbl_Filter_TD_9285_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8235_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_customer_sk1111};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9434_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk10221_k = tbl_Filter_TD_9434_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8235_key_leftMajor{_d_date_sk10221_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_customer_sk1111 = (it->second)._cs_ship_customer_sk1111;
                int32_t _d_date_sk10221 = tbl_Filter_TD_9434_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8235_output.setInt32(r, 0, _cs_ship_customer_sk1111);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8235_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8235_key_rightMajor, SW_JOIN_INNER_TD_8235_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9434_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk10221_k = tbl_Filter_TD_9434_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8235_key_rightMajor keyA{_d_date_sk10221_k};
            int32_t _d_date_sk10221 = tbl_Filter_TD_9434_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8235_payload_rightMajor payloadA{_d_date_sk10221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9285_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9285_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8235_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk10221 = (it->second)._d_date_sk10221;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9285_output.getInt32(i, 0);
                int32_t _cs_ship_customer_sk1111 = tbl_Filter_TD_9285_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8235_output.setInt32(r, 0, _cs_ship_customer_sk1111);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8235_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8235_output #Row: " << tbl_JOIN_INNER_TD_8235_output.getNumRow() << std::endl;
}

struct SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_rightMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_payload_rightMajor {
    int32_t _ws_bill_customer_sk733;
};
void SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873(Table &tbl_JOIN_LEFTSEMI_TD_92_output, Table &tbl_JOIN_INNER_TD_9899_output, Table &tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_EXISTENCEJOIN(EXISTS#10340)
    // Operation: ListBuffer((c_customer_sk#0 = ws_bill_customer_sk#733))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ws_bill_customer_sk#733)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4, exists#10340)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_92_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_9899_output.getNumRow();
    std::unordered_map<SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_rightMajor, SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_payload_rightMajor> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9899_output.getNumRow();
    int nrow2 = tbl_JOIN_LEFTSEMI_TD_92_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_9899_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_rightMajor keyA{_ws_bill_customer_sk733_k};
        int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_9899_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_payload_rightMajor payloadA{_ws_bill_customer_sk733};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _c_customer_sk0_k = tbl_JOIN_LEFTSEMI_TD_92_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_EXISTENCEJOINEXISTS10340_TD_873_key_rightMajor{_c_customer_sk0_k});
        if (it != ht1.end()) {
            int32_t _c_customer_sk0 = tbl_JOIN_LEFTSEMI_TD_92_output.getInt32(i, 0);
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_LEFTSEMI_TD_92_output.getInt32(i, 1);
            int32_t _c_current_addr_sk4 = tbl_JOIN_LEFTSEMI_TD_92_output.getInt32(i, 2);
            tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.setInt32(r, 0, _c_customer_sk0);
            tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.setInt32(r, 1, _c_current_cdemo_sk2);
            tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.setInt32(r, 2, _c_current_addr_sk4);
            tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.setInt32(r, 3, 1);
            r++;
        }
    }
    tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.setNumRow(r);
    std::cout << "tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output #Row: " << tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.getNumRow() << std::endl;
}

struct SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
    int32_t _exists10340;
};
struct SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_rightMajor {
    int32_t _cs_ship_customer_sk1111;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_rightMajor& other) const {
        return ((_cs_ship_customer_sk1111 == other._cs_ship_customer_sk1111));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_ship_customer_sk1111));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_payload_rightMajor {
    int32_t _cs_ship_customer_sk1111;
};
void SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197(Table &tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output, Table &tbl_JOIN_INNER_TD_8235_output, Table &tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_EXISTENCEJOIN(EXISTS#10341)
    // Operation: ListBuffer((c_customer_sk#0 = cs_ship_customer_sk#1111))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4, exists#10340)
    // Right Table: ListBuffer(cs_ship_customer_sk#1111)
    // Output Table: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4, exists#10340, exists#10341)
    int left_nrow = tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_8235_output.getNumRow();
    std::unordered_map<SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_rightMajor, SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_payload_rightMajor> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8235_output.getNumRow();
    int nrow2 = tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ship_customer_sk1111_k = tbl_JOIN_INNER_TD_8235_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_rightMajor keyA{_cs_ship_customer_sk1111_k};
        int32_t _cs_ship_customer_sk1111 = tbl_JOIN_INNER_TD_8235_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_payload_rightMajor payloadA{_cs_ship_customer_sk1111};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _c_customer_sk0_k = tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_key_rightMajor{_c_customer_sk0_k});
        if (it != ht1.end()) {
            int32_t _c_customer_sk0 = tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.getInt32(i, 0);
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.getInt32(i, 1);
            int32_t _c_current_addr_sk4 = tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.getInt32(i, 2);
            int32_t _exists10340 = tbl_JOIN_EXISTENCEJOINEXISTS10340_TD_873_output.getInt32(i, 3);
            tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.setInt32(r, 0, _c_current_cdemo_sk2);
            tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.setInt32(r, 1, _c_current_addr_sk4);
             tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.setInt32(r, 2, _exists10340);
            tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.setInt32(r, 3, 1);
            r++;
        }
    }
    tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.setNumRow(r);
    std::cout << "tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output #Row: " << tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6250(Table &tbl_SerializeFromObject_TD_7323_input, Table &tbl_Filter_TD_6250_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((ca_county#61 IN (Rush County,Toole County,Jefferson County,Dona Ana County,La Porte County) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_county#61)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7323_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_SerializeFromObject_TD_7323_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_7323_input.getInt32(i, 0);
        auto reuse_col_str_930 = std::string(_ca_county61.data());
        if (((reuse_col_str_930 == "Rush County") || (reuse_col_str_930 == "Toole County") || (reuse_col_str_930 == "Jefferson County") || (reuse_col_str_930 == "Dona Ana County") || (reuse_col_str_930 == "La Porte County") || (0)) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_7323_input.getInt32(i, 0);
            tbl_Filter_TD_6250_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_6250_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6250_output #Row: " << tbl_Filter_TD_6250_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6351(Table &tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output, Table &tbl_Filter_TD_6351_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((exists#10340 OR exists#10341))
    // Input: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4, exists#10340, exists#10341)
    // Output: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _exists10340 = tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.getInt32(i, 2);
        int32_t _exists10341 = tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.getInt32(i, 3);
        if (_exists10340 || _exists10341) {
            int32_t _c_current_cdemo_sk2_t = tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.getInt32(i, 0);
            tbl_Filter_TD_6351_output.setInt32(r, 0, _c_current_cdemo_sk2_t);
            int32_t _c_current_addr_sk4_t = tbl_JOIN_EXISTENCEJOINEXISTS10341_TD_7197_output.getInt32(i, 1);
            tbl_Filter_TD_6351_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_6351_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6351_output #Row: " << tbl_Filter_TD_6351_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5307(Table &tbl_SerializeFromObject_TD_6653_input, Table &tbl_Filter_TD_5307_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cd_demo_sk#93))
    // Input: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    // Output: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6653_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_6653_input.getInt32(i, 0);
        if (_cd_demo_sk93!= 0) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_6653_input.getInt32(i, 0);
            tbl_Filter_TD_5307_output.setInt32(r, 0, _cd_demo_sk93_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_t = tbl_SerializeFromObject_TD_6653_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5307_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_gender94_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_t = tbl_SerializeFromObject_TD_6653_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5307_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_marital_status95_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_t = tbl_SerializeFromObject_TD_6653_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_5307_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _cd_education_status96_t);
            int32_t _cd_purchase_estimate97_t = tbl_SerializeFromObject_TD_6653_input.getInt32(i, 4);
            tbl_Filter_TD_5307_output.setInt32(r, 4, _cd_purchase_estimate97_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_t = tbl_SerializeFromObject_TD_6653_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_5307_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cd_credit_rating98_t);
            int32_t _cd_dep_count99_t = tbl_SerializeFromObject_TD_6653_input.getInt32(i, 6);
            tbl_Filter_TD_5307_output.setInt32(r, 6, _cd_dep_count99_t);
            int32_t _cd_dep_employed_count100_t = tbl_SerializeFromObject_TD_6653_input.getInt32(i, 7);
            tbl_Filter_TD_5307_output.setInt32(r, 7, _cd_dep_employed_count100_t);
            int32_t _cd_dep_college_count101_t = tbl_SerializeFromObject_TD_6653_input.getInt32(i, 8);
            tbl_Filter_TD_5307_output.setInt32(r, 8, _cd_dep_college_count101_t);
            r++;
        }
    }
    tbl_Filter_TD_5307_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5307_output #Row: " << tbl_Filter_TD_5307_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5821_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_5821_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5821_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5821_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_5821_payload_leftMajor {
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_5821_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_5821_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5821_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5821_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_5821_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_5821(Table &tbl_Filter_TD_6351_output, Table &tbl_Filter_TD_6250_output, Table &tbl_JOIN_INNER_TD_5821_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(c_current_cdemo_sk#2)
    int left_nrow = tbl_Filter_TD_6351_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6250_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5821_key_leftMajor, SW_JOIN_INNER_TD_5821_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6351_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_6351_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5821_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_6351_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_6351_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5821_payload_leftMajor payloadA{_c_current_cdemo_sk2, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6250_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6250_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5821_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_6250_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5821_output.setInt32(r, 0, _c_current_cdemo_sk2);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5821_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5821_key_rightMajor, SW_JOIN_INNER_TD_5821_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6250_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6250_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5821_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_6250_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5821_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6351_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_6351_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5821_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_6351_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_6351_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5821_output.setInt32(r, 0, _c_current_cdemo_sk2);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5821_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5821_output #Row: " << tbl_JOIN_INNER_TD_5821_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4518_key_leftMajor {
    int32_t _c_current_cdemo_sk2;
    bool operator==(const SW_JOIN_INNER_TD_4518_key_leftMajor& other) const {
        return ((_c_current_cdemo_sk2 == other._c_current_cdemo_sk2));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4518_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4518_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_cdemo_sk2));
    }
};
}
struct SW_JOIN_INNER_TD_4518_payload_leftMajor {
    int32_t _c_current_cdemo_sk2;
};
struct SW_JOIN_INNER_TD_4518_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_4518_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4518_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4518_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_4518_payload_rightMajor {
    int32_t _cd_demo_sk93;
    std::string _cd_gender94;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
    int32_t _cd_purchase_estimate97;
    std::string _cd_credit_rating98;
    int32_t _cd_dep_count99;
    int32_t _cd_dep_employed_count100;
    int32_t _cd_dep_college_count101;
};
void SW_JOIN_INNER_TD_4518(Table &tbl_JOIN_INNER_TD_5821_output, Table &tbl_Filter_TD_5307_output, Table &tbl_JOIN_INNER_TD_4518_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cd_demo_sk#93 = c_current_cdemo_sk#2))
    // Left Table: ListBuffer(c_current_cdemo_sk#2)
    // Right Table: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    // Output Table: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    int left_nrow = tbl_JOIN_INNER_TD_5821_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5307_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4518_key_leftMajor, SW_JOIN_INNER_TD_4518_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5821_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_5821_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4518_key_leftMajor keyA{_c_current_cdemo_sk2_k};
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_5821_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4518_payload_leftMajor payloadA{_c_current_cdemo_sk2};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5307_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_5307_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4518_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_5307_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Filter_TD_5307_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_gender94 = std::string(_cd_gender94_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_5307_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_5307_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
                int32_t _cd_purchase_estimate97 = tbl_Filter_TD_5307_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_Filter_TD_5307_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _cd_credit_rating98 = std::string(_cd_credit_rating98_n.data());
                int32_t _cd_dep_count99 = tbl_Filter_TD_5307_output.getInt32(i, 6);
                int32_t _cd_dep_employed_count100 = tbl_Filter_TD_5307_output.getInt32(i, 7);
                int32_t _cd_dep_college_count101 = tbl_Filter_TD_5307_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_4518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
                tbl_JOIN_INNER_TD_4518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
                tbl_JOIN_INNER_TD_4518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
                tbl_JOIN_INNER_TD_4518_output.setInt32(r, 3, _cd_purchase_estimate97);
                tbl_JOIN_INNER_TD_4518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cd_credit_rating98_n);
                tbl_JOIN_INNER_TD_4518_output.setInt32(r, 5, _cd_dep_count99);
                tbl_JOIN_INNER_TD_4518_output.setInt32(r, 6, _cd_dep_employed_count100);
                tbl_JOIN_INNER_TD_4518_output.setInt32(r, 7, _cd_dep_college_count101);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4518_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4518_key_rightMajor, SW_JOIN_INNER_TD_4518_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5307_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_5307_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4518_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_5307_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Filter_TD_5307_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_gender94 = std::string(_cd_gender94_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_5307_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_5307_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
            int32_t _cd_purchase_estimate97 = tbl_Filter_TD_5307_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_Filter_TD_5307_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _cd_credit_rating98 = std::string(_cd_credit_rating98_n.data());
            int32_t _cd_dep_count99 = tbl_Filter_TD_5307_output.getInt32(i, 6);
            int32_t _cd_dep_employed_count100 = tbl_Filter_TD_5307_output.getInt32(i, 7);
            int32_t _cd_dep_college_count101 = tbl_Filter_TD_5307_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_4518_payload_rightMajor payloadA{_cd_demo_sk93, _cd_gender94, _cd_marital_status95, _cd_education_status96, _cd_purchase_estimate97, _cd_credit_rating98, _cd_dep_count99, _cd_dep_employed_count100, _cd_dep_college_count101};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5821_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_5821_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4518_key_rightMajor{_c_current_cdemo_sk2_k});
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
                int32_t _cd_dep_count99 = (it->second)._cd_dep_count99;
                int32_t _cd_dep_employed_count100 = (it->second)._cd_dep_employed_count100;
                int32_t _cd_dep_college_count101 = (it->second)._cd_dep_college_count101;
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_5821_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
                tbl_JOIN_INNER_TD_4518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
                tbl_JOIN_INNER_TD_4518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
                tbl_JOIN_INNER_TD_4518_output.setInt32(r, 3, _cd_purchase_estimate97);
                tbl_JOIN_INNER_TD_4518_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cd_credit_rating98_n);
                tbl_JOIN_INNER_TD_4518_output.setInt32(r, 5, _cd_dep_count99);
                tbl_JOIN_INNER_TD_4518_output.setInt32(r, 6, _cd_dep_employed_count100);
                tbl_JOIN_INNER_TD_4518_output.setInt32(r, 7, _cd_dep_college_count101);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4518_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4518_output #Row: " << tbl_JOIN_INNER_TD_4518_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3288_key {
    std::string _cd_gender94;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
    int32_t _cd_purchase_estimate97;
    std::string _cd_credit_rating98;
    int32_t _cd_dep_count99;
    int32_t _cd_dep_employed_count100;
    int32_t _cd_dep_college_count101;
    bool operator==(const SW_Aggregate_TD_3288_key& other) const { return (_cd_gender94 == other._cd_gender94) && (_cd_marital_status95 == other._cd_marital_status95) && (_cd_education_status96 == other._cd_education_status96) && (_cd_purchase_estimate97 == other._cd_purchase_estimate97) && (_cd_credit_rating98 == other._cd_credit_rating98) && (_cd_dep_count99 == other._cd_dep_count99) && (_cd_dep_employed_count100 == other._cd_dep_employed_count100) && (_cd_dep_college_count101 == other._cd_dep_college_count101); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3288_key> {
    std::size_t operator() (const SW_Aggregate_TD_3288_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._cd_gender94)) + (hash<string>()(k._cd_marital_status95)) + (hash<string>()(k._cd_education_status96)) + (hash<int32_t>()(k._cd_purchase_estimate97)) + (hash<string>()(k._cd_credit_rating98)) + (hash<int32_t>()(k._cd_dep_count99)) + (hash<int32_t>()(k._cd_dep_employed_count100)) + (hash<int32_t>()(k._cd_dep_college_count101));
    }
};
}
struct SW_Aggregate_TD_3288_payload {
    int64_t _cnt110178L_count_0;
    int64_t _cnt210179L_count_1;
    int64_t _cnt310180L_count_2;
    int64_t _cnt410181L_count_3;
    int64_t _cnt510182L_count_4;
    int64_t _cnt610183L_count_5;
};
void SW_Aggregate_TD_3288(Table &tbl_JOIN_INNER_TD_4518_output, Table &tbl_Aggregate_TD_3288_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101, count(1) AS cnt1#10178L, count(1) AS cnt2#10179L, count(1) AS cnt3#10180L, count(1) AS cnt4#10181L, count(1) AS cnt5#10182L, count(1) AS cnt6#10183L)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10178L, cd_purchase_estimate#97, cnt2#10179L, cd_credit_rating#98, cnt3#10180L, cd_dep_count#99, cnt4#10181L, cd_dep_employed_count#100, cnt5#10182L, cd_dep_college_count#101, cnt6#10183L)
    std::unordered_map<SW_Aggregate_TD_3288_key, SW_Aggregate_TD_3288_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4518_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_JOIN_INNER_TD_4518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_JOIN_INNER_TD_4518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_JOIN_INNER_TD_4518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _cd_purchase_estimate97 = tbl_JOIN_INNER_TD_4518_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98 = tbl_JOIN_INNER_TD_4518_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_4518_output.getInt32(i, 5);
        int32_t _cd_dep_employed_count100 = tbl_JOIN_INNER_TD_4518_output.getInt32(i, 6);
        int32_t _cd_dep_college_count101 = tbl_JOIN_INNER_TD_4518_output.getInt32(i, 7);
        SW_Aggregate_TD_3288_key k{std::string(_cd_gender94.data()), std::string(_cd_marital_status95.data()), std::string(_cd_education_status96.data()), _cd_purchase_estimate97, std::string(_cd_credit_rating98.data()), _cd_dep_count99, _cd_dep_employed_count100, _cd_dep_college_count101};
        int64_t _cnt110178L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _cnt210179L_count_1 = 1 != 0 ? 1 : 0;
        int64_t _cnt310180L_count_2 = 1 != 0 ? 1 : 0;
        int64_t _cnt410181L_count_3 = 1 != 0 ? 1 : 0;
        int64_t _cnt510182L_count_4 = 1 != 0 ? 1 : 0;
        int64_t _cnt610183L_count_5 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_3288_payload p{_cnt110178L_count_0, _cnt210179L_count_1, _cnt310180L_count_2, _cnt410181L_count_3, _cnt510182L_count_4, _cnt610183L_count_5};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt110178L_count_0 + _cnt110178L_count_0;
            p._cnt110178L_count_0 = count_0;
            int64_t count_1 = (it->second)._cnt210179L_count_1 + _cnt210179L_count_1;
            p._cnt210179L_count_1 = count_1;
            int64_t count_2 = (it->second)._cnt310180L_count_2 + _cnt310180L_count_2;
            p._cnt310180L_count_2 = count_2;
            int64_t count_3 = (it->second)._cnt410181L_count_3 + _cnt410181L_count_3;
            p._cnt410181L_count_3 = count_3;
            int64_t count_4 = (it->second)._cnt510182L_count_4 + _cnt510182L_count_4;
            p._cnt510182L_count_4 = count_4;
            int64_t count_5 = (it->second)._cnt610183L_count_5 + _cnt610183L_count_5;
            p._cnt610183L_count_5 = count_5;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94{};
        memcpy(_cd_gender94.data(), ((it.first)._cd_gender94).data(), ((it.first)._cd_gender94).length());
        tbl_Aggregate_TD_3288_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95{};
        memcpy(_cd_marital_status95.data(), ((it.first)._cd_marital_status95).data(), ((it.first)._cd_marital_status95).length());
        tbl_Aggregate_TD_3288_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96{};
        memcpy(_cd_education_status96.data(), ((it.first)._cd_education_status96).data(), ((it.first)._cd_education_status96).length());
        tbl_Aggregate_TD_3288_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96);
        tbl_Aggregate_TD_3288_output.setInt32(r, 4, (it.first)._cd_purchase_estimate97);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98{};
        memcpy(_cd_credit_rating98.data(), ((it.first)._cd_credit_rating98).data(), ((it.first)._cd_credit_rating98).length());
        tbl_Aggregate_TD_3288_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cd_credit_rating98);
        tbl_Aggregate_TD_3288_output.setInt32(r, 8, (it.first)._cd_dep_count99);
        tbl_Aggregate_TD_3288_output.setInt32(r, 10, (it.first)._cd_dep_employed_count100);
        tbl_Aggregate_TD_3288_output.setInt32(r, 12, (it.first)._cd_dep_college_count101);
        int64_t _cnt110178L = (it.second)._cnt110178L_count_0;
        tbl_Aggregate_TD_3288_output.setInt64(r, 3, _cnt110178L);
        int64_t _cnt210179L = (it.second)._cnt210179L_count_1;
        tbl_Aggregate_TD_3288_output.setInt64(r, 5, _cnt210179L);
        int64_t _cnt310180L = (it.second)._cnt310180L_count_2;
        tbl_Aggregate_TD_3288_output.setInt64(r, 7, _cnt310180L);
        int64_t _cnt410181L = (it.second)._cnt410181L_count_3;
        tbl_Aggregate_TD_3288_output.setInt64(r, 9, _cnt410181L);
        int64_t _cnt510182L = (it.second)._cnt510182L_count_4;
        tbl_Aggregate_TD_3288_output.setInt64(r, 11, _cnt510182L);
        int64_t _cnt610183L = (it.second)._cnt610183L_count_5;
        tbl_Aggregate_TD_3288_output.setInt64(r, 13, _cnt610183L);
        ++r;
    }
    tbl_Aggregate_TD_3288_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3288_output #Row: " << tbl_Aggregate_TD_3288_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2965(Table &tbl_Aggregate_TD_3288_output, Table &tbl_Sort_TD_2965_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cd_gender#94 ASC NULLS FIRST, cd_marital_status#95 ASC NULLS FIRST, cd_education_status#96 ASC NULLS FIRST, cd_purchase_estimate#97 ASC NULLS FIRST, cd_credit_rating#98 ASC NULLS FIRST, cd_dep_count#99 ASC NULLS FIRST, cd_dep_employed_count#100 ASC NULLS FIRST, cd_dep_college_count#101 ASC NULLS FIRST)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10178L, cd_purchase_estimate#97, cnt2#10179L, cd_credit_rating#98, cnt3#10180L, cd_dep_count#99, cnt4#10181L, cd_dep_employed_count#100, cnt5#10182L, cd_dep_college_count#101, cnt6#10183L)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10178L, cd_purchase_estimate#97, cnt2#10179L, cd_credit_rating#98, cnt3#10180L, cd_dep_count#99, cnt4#10181L, cd_dep_employed_count#100, cnt5#10182L, cd_dep_college_count#101, cnt6#10183L)
    struct SW_Sort_TD_2965Row {
        std::string _cd_gender94;
        std::string _cd_marital_status95;
        std::string _cd_education_status96;
        int64_t _cnt110178L;
        int32_t _cd_purchase_estimate97;
        int64_t _cnt210179L;
        std::string _cd_credit_rating98;
        int64_t _cnt310180L;
        int32_t _cd_dep_count99;
        int64_t _cnt410181L;
        int32_t _cd_dep_employed_count100;
        int64_t _cnt510182L;
        int32_t _cd_dep_college_count101;
        int64_t _cnt610183L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2965Row& a, const SW_Sort_TD_2965Row& b) const { return 
 (a._cd_gender94 < b._cd_gender94) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 < b._cd_marital_status95)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 < b._cd_education_status96)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 < b._cd_purchase_estimate97)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 == b._cd_purchase_estimate97) && (a._cd_credit_rating98 < b._cd_credit_rating98)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 == b._cd_purchase_estimate97) && (a._cd_credit_rating98 == b._cd_credit_rating98) && (a._cd_dep_count99 < b._cd_dep_count99)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 == b._cd_purchase_estimate97) && (a._cd_credit_rating98 == b._cd_credit_rating98) && (a._cd_dep_count99 == b._cd_dep_count99) && (a._cd_dep_employed_count100 < b._cd_dep_employed_count100)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 == b._cd_purchase_estimate97) && (a._cd_credit_rating98 == b._cd_credit_rating98) && (a._cd_dep_count99 == b._cd_dep_count99) && (a._cd_dep_employed_count100 == b._cd_dep_employed_count100) && (a._cd_dep_college_count101 < b._cd_dep_college_count101)); 
}
    }SW_Sort_TD_2965_order; 

    int nrow1 = tbl_Aggregate_TD_3288_output.getNumRow();
    std::vector<SW_Sort_TD_2965Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_Aggregate_TD_3288_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_Aggregate_TD_3288_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_Aggregate_TD_3288_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int64_t _cnt110178L = tbl_Aggregate_TD_3288_output.getInt64(i, 3);
        int32_t _cd_purchase_estimate97 = tbl_Aggregate_TD_3288_output.getInt32(i, 4);
        int64_t _cnt210179L = tbl_Aggregate_TD_3288_output.getInt64(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98 = tbl_Aggregate_TD_3288_output.getcharN<char, TPCDS_READ_MAX +1>(i, 6);
        int64_t _cnt310180L = tbl_Aggregate_TD_3288_output.getInt64(i, 7);
        int32_t _cd_dep_count99 = tbl_Aggregate_TD_3288_output.getInt32(i, 8);
        int64_t _cnt410181L = tbl_Aggregate_TD_3288_output.getInt64(i, 9);
        int32_t _cd_dep_employed_count100 = tbl_Aggregate_TD_3288_output.getInt32(i, 10);
        int64_t _cnt510182L = tbl_Aggregate_TD_3288_output.getInt64(i, 11);
        int32_t _cd_dep_college_count101 = tbl_Aggregate_TD_3288_output.getInt32(i, 12);
        int64_t _cnt610183L = tbl_Aggregate_TD_3288_output.getInt64(i, 13);
        SW_Sort_TD_2965Row t = {std::string(_cd_gender94.data()),std::string(_cd_marital_status95.data()),std::string(_cd_education_status96.data()),_cnt110178L,_cd_purchase_estimate97,_cnt210179L,std::string(_cd_credit_rating98.data()),_cnt310180L,_cd_dep_count99,_cnt410181L,_cd_dep_employed_count100,_cnt510182L,_cd_dep_college_count101,_cnt610183L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2965_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94{};
        memcpy(_cd_gender94.data(), (it._cd_gender94).data(), (it._cd_gender94).length());
        tbl_Sort_TD_2965_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _cd_gender94);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95{};
        memcpy(_cd_marital_status95.data(), (it._cd_marital_status95).data(), (it._cd_marital_status95).length());
        tbl_Sort_TD_2965_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _cd_marital_status95);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96{};
        memcpy(_cd_education_status96.data(), (it._cd_education_status96).data(), (it._cd_education_status96).length());
        tbl_Sort_TD_2965_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cd_education_status96);
        tbl_Sort_TD_2965_output.setInt64(r, 3, it._cnt110178L);
        tbl_Sort_TD_2965_output.setInt32(r, 4, it._cd_purchase_estimate97);
        tbl_Sort_TD_2965_output.setInt64(r, 5, it._cnt210179L);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98{};
        memcpy(_cd_credit_rating98.data(), (it._cd_credit_rating98).data(), (it._cd_credit_rating98).length());
        tbl_Sort_TD_2965_output.setcharN<char, TPCDS_READ_MAX +1>(r, 6, _cd_credit_rating98);
        tbl_Sort_TD_2965_output.setInt64(r, 7, it._cnt310180L);
        tbl_Sort_TD_2965_output.setInt32(r, 8, it._cd_dep_count99);
        tbl_Sort_TD_2965_output.setInt64(r, 9, it._cnt410181L);
        tbl_Sort_TD_2965_output.setInt32(r, 10, it._cd_dep_employed_count100);
        tbl_Sort_TD_2965_output.setInt64(r, 11, it._cnt510182L);
        tbl_Sort_TD_2965_output.setInt32(r, 12, it._cd_dep_college_count101);
        tbl_Sort_TD_2965_output.setInt64(r, 13, it._cnt610183L);
        ++r;
    }
    tbl_Sort_TD_2965_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2965_output #Row: " << tbl_Sort_TD_2965_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1271(Table &tbl_Sort_TD_2965_output, Table &tbl_LocalLimit_TD_1271_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10178L, cd_purchase_estimate#97, cnt2#10179L, cd_credit_rating#98, cnt3#10180L, cd_dep_count#99, cnt4#10181L, cd_dep_employed_count#100, cnt5#10182L, cd_dep_college_count#101, cnt6#10183L)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10178L, cd_purchase_estimate#97, cnt2#10179L, cd_credit_rating#98, cnt3#10180L, cd_dep_count#99, cnt4#10181L, cd_dep_employed_count#100, cnt5#10182L, cd_dep_college_count#101, cnt6#10183L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Sort_TD_2965_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1271_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Sort_TD_2965_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1271_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Sort_TD_2965_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1271_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
        tbl_LocalLimit_TD_1271_output.setInt32(r, 3, tbl_Sort_TD_2965_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1271_output.setInt32(r, 4, tbl_Sort_TD_2965_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1271_output.setInt32(r, 5, tbl_Sort_TD_2965_output.getInt64(i, 5));
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_Sort_TD_2965_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_LocalLimit_TD_1271_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cd_credit_rating98_n);
        tbl_LocalLimit_TD_1271_output.setInt32(r, 7, tbl_Sort_TD_2965_output.getInt64(i, 7));
        tbl_LocalLimit_TD_1271_output.setInt32(r, 8, tbl_Sort_TD_2965_output.getInt32(i, 8));
        tbl_LocalLimit_TD_1271_output.setInt32(r, 9, tbl_Sort_TD_2965_output.getInt64(i, 9));
        tbl_LocalLimit_TD_1271_output.setInt32(r, 10, tbl_Sort_TD_2965_output.getInt32(i, 10));
        tbl_LocalLimit_TD_1271_output.setInt32(r, 11, tbl_Sort_TD_2965_output.getInt64(i, 11));
        tbl_LocalLimit_TD_1271_output.setInt32(r, 12, tbl_Sort_TD_2965_output.getInt32(i, 12));
        tbl_LocalLimit_TD_1271_output.setInt32(r, 13, tbl_Sort_TD_2965_output.getInt64(i, 13));
        r++;
    }
    tbl_LocalLimit_TD_1271_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1271_output #Row: " << tbl_LocalLimit_TD_1271_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0759(Table &tbl_LocalLimit_TD_1271_output, Table &tbl_GlobalLimit_TD_0759_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10178L, cd_purchase_estimate#97, cnt2#10179L, cd_credit_rating#98, cnt3#10180L, cd_dep_count#99, cnt4#10181L, cd_dep_employed_count#100, cnt5#10182L, cd_dep_college_count#101, cnt6#10183L)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10178L, cd_purchase_estimate#97, cnt2#10179L, cd_credit_rating#98, cnt3#10180L, cd_dep_count#99, cnt4#10181L, cd_dep_employed_count#100, cnt5#10182L, cd_dep_college_count#101, cnt6#10183L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_LocalLimit_TD_1271_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0759_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_LocalLimit_TD_1271_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0759_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_LocalLimit_TD_1271_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0759_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 3, tbl_LocalLimit_TD_1271_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 4, tbl_LocalLimit_TD_1271_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 5, tbl_LocalLimit_TD_1271_output.getInt64(i, 5));
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_LocalLimit_TD_1271_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_GlobalLimit_TD_0759_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cd_credit_rating98_n);
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 7, tbl_LocalLimit_TD_1271_output.getInt64(i, 7));
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 8, tbl_LocalLimit_TD_1271_output.getInt32(i, 8));
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 9, tbl_LocalLimit_TD_1271_output.getInt64(i, 9));
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 10, tbl_LocalLimit_TD_1271_output.getInt32(i, 10));
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 11, tbl_LocalLimit_TD_1271_output.getInt64(i, 11));
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 12, tbl_LocalLimit_TD_1271_output.getInt32(i, 12));
        tbl_GlobalLimit_TD_0759_output.setInt32(r, 13, tbl_LocalLimit_TD_1271_output.getInt64(i, 13));
        r++;
    }
    tbl_GlobalLimit_TD_0759_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0759_output #Row: " << tbl_GlobalLimit_TD_0759_output.getNumRow() << std::endl;
}

