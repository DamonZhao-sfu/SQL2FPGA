#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11905(Table &tbl_SerializeFromObject_TD_12472_input, Table &tbl_Filter_TD_11905_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_qoy#130)) AND ((d_year#126 = 2002) AND (d_qoy#130 < 4))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12472_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12472_input.getInt32(i, 1);
        int32_t _d_qoy130 = tbl_SerializeFromObject_TD_12472_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12472_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_qoy130!= 0)) && ((_d_year126 == 2002) && (_d_qoy130 < 4))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12472_input.getInt32(i, 0);
            tbl_Filter_TD_11905_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11905_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11905_output #Row: " << tbl_Filter_TD_11905_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1167(Table &tbl_SerializeFromObject_TD_12156_input, Table &tbl_Filter_TD_1167_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#1206))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12156_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12156_input.getInt32(i, 0);
        if (_ss_sold_date_sk1206!= 0) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12156_input.getInt32(i, 0);
            tbl_Filter_TD_1167_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_12156_input.getInt32(i, 1);
            tbl_Filter_TD_1167_output.setInt32(r, 1, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_1167_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1167_output #Row: " << tbl_Filter_TD_1167_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10143(Table &tbl_SerializeFromObject_TD_11220_input, Table &tbl_Filter_TD_10143_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#6856) AND isnotnull(d_qoy#6860)) AND ((d_year#6856 = 2002) AND (d_qoy#6860 < 4))) AND isnotnull(d_date_sk#6850)))
    // Input: ListBuffer(d_date_sk#6850, d_year#6856, d_qoy#6860)
    // Output: ListBuffer(d_date_sk#6850)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11220_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6856 = tbl_SerializeFromObject_TD_11220_input.getInt32(i, 1);
        int32_t _d_qoy6860 = tbl_SerializeFromObject_TD_11220_input.getInt32(i, 2);
        int32_t _d_date_sk6850 = tbl_SerializeFromObject_TD_11220_input.getInt32(i, 0);
        if ((((_d_year6856!= 0) && (_d_qoy6860!= 0)) && ((_d_year6856 == 2002) && (_d_qoy6860 < 4))) && (_d_date_sk6850!= 0)) {
            int32_t _d_date_sk6850_t = tbl_SerializeFromObject_TD_11220_input.getInt32(i, 0);
            tbl_Filter_TD_10143_output.setInt32(r, 0, _d_date_sk6850_t);
            r++;
        }
    }
    tbl_Filter_TD_10143_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10143_output #Row: " << tbl_Filter_TD_10143_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10632(Table &tbl_SerializeFromObject_TD_11635_input, Table &tbl_Filter_TD_10632_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#729))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11635_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_11635_input.getInt32(i, 0);
        if (_ws_sold_date_sk729!= 0) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_11635_input.getInt32(i, 0);
            tbl_Filter_TD_10632_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_11635_input.getInt32(i, 1);
            tbl_Filter_TD_10632_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            r++;
        }
    }
    tbl_Filter_TD_10632_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10632_output #Row: " << tbl_Filter_TD_10632_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10134_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10134_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10134_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10134_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10134_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
};
struct SW_JOIN_INNER_TD_10134_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10134_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10134_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10134_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10134_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10134(Table &tbl_Filter_TD_1167_output, Table &tbl_Filter_TD_11905_output, Table &tbl_JOIN_INNER_TD_10134_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_customer_sk#1209)
    int left_nrow = tbl_Filter_TD_1167_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11905_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10134_key_leftMajor, SW_JOIN_INNER_TD_10134_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1167_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_1167_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10134_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1167_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_1167_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10134_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11905_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11905_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10134_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date_sk120 = tbl_Filter_TD_11905_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10134_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10134_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10134_key_rightMajor, SW_JOIN_INNER_TD_10134_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11905_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11905_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10134_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11905_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10134_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1167_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_1167_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10134_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1167_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_1167_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10134_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10134_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10134_output #Row: " << tbl_JOIN_INNER_TD_10134_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10874(Table &tbl_SerializeFromObject_TD_11847_input, Table &tbl_Filter_TD_10874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_current_addr_sk#4) AND isnotnull(c_current_cdemo_sk#2)))
    // Input: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11847_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_11847_input.getInt32(i, 2);
        int32_t _c_current_cdemo_sk2 = tbl_SerializeFromObject_TD_11847_input.getInt32(i, 1);
        if ((_c_current_addr_sk4!= 0) && (_c_current_cdemo_sk2!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_11847_input.getInt32(i, 0);
            tbl_Filter_TD_10874_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_cdemo_sk2_t = tbl_SerializeFromObject_TD_11847_input.getInt32(i, 1);
            tbl_Filter_TD_10874_output.setInt32(r, 1, _c_current_cdemo_sk2_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_11847_input.getInt32(i, 2);
            tbl_Filter_TD_10874_output.setInt32(r, 2, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_10874_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10874_output #Row: " << tbl_Filter_TD_10874_output.getNumRow() << std::endl;
}

void SW_Filter_TD_967(Table &tbl_SerializeFromObject_TD_10628_input, Table &tbl_Filter_TD_967_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#6884) AND isnotnull(d_qoy#6888)) AND ((d_year#6884 = 2002) AND (d_qoy#6888 < 4))) AND isnotnull(d_date_sk#6878)))
    // Input: ListBuffer(d_date_sk#6878, d_year#6884, d_qoy#6888)
    // Output: ListBuffer(d_date_sk#6878)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10628_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6884 = tbl_SerializeFromObject_TD_10628_input.getInt32(i, 1);
        int32_t _d_qoy6888 = tbl_SerializeFromObject_TD_10628_input.getInt32(i, 2);
        int32_t _d_date_sk6878 = tbl_SerializeFromObject_TD_10628_input.getInt32(i, 0);
        if ((((_d_year6884!= 0) && (_d_qoy6888!= 0)) && ((_d_year6884 == 2002) && (_d_qoy6888 < 4))) && (_d_date_sk6878!= 0)) {
            int32_t _d_date_sk6878_t = tbl_SerializeFromObject_TD_10628_input.getInt32(i, 0);
            tbl_Filter_TD_967_output.setInt32(r, 0, _d_date_sk6878_t);
            r++;
        }
    }
    tbl_Filter_TD_967_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_967_output #Row: " << tbl_Filter_TD_967_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9547(Table &tbl_SerializeFromObject_TD_10677_input, Table &tbl_Filter_TD_9547_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10677_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10677_input.getInt32(i, 0);
        if (_cs_sold_date_sk1104!= 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10677_input.getInt32(i, 0);
            tbl_Filter_TD_9547_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ship_customer_sk1111_t = tbl_SerializeFromObject_TD_10677_input.getInt32(i, 1);
            tbl_Filter_TD_9547_output.setInt32(r, 1, _cs_ship_customer_sk1111_t);
            r++;
        }
    }
    tbl_Filter_TD_9547_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9547_output #Row: " << tbl_Filter_TD_9547_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9410_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_9410_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9410_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9410_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_9410_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
};
struct SW_JOIN_INNER_TD_9410_key_rightMajor {
    int32_t _d_date_sk6850;
    bool operator==(const SW_JOIN_INNER_TD_9410_key_rightMajor& other) const {
        return ((_d_date_sk6850 == other._d_date_sk6850));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9410_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9410_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6850));
    }
};
}
struct SW_JOIN_INNER_TD_9410_payload_rightMajor {
    int32_t _d_date_sk6850;
};
void SW_JOIN_INNER_TD_9410(Table &tbl_Filter_TD_10632_output, Table &tbl_Filter_TD_10143_output, Table &tbl_JOIN_INNER_TD_9410_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#6850))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Right Table: ListBuffer(d_date_sk#6850)
    // Output Table: ListBuffer(ws_bill_customer_sk#733)
    int left_nrow = tbl_Filter_TD_10632_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10143_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9410_key_leftMajor, SW_JOIN_INNER_TD_9410_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10632_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_10632_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9410_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10632_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_10632_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9410_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_customer_sk733};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10143_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6850_k = tbl_Filter_TD_10143_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9410_key_leftMajor{_d_date_sk6850_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date_sk6850 = tbl_Filter_TD_10143_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9410_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9410_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9410_key_rightMajor, SW_JOIN_INNER_TD_9410_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10143_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6850_k = tbl_Filter_TD_10143_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9410_key_rightMajor keyA{_d_date_sk6850_k};
            int32_t _d_date_sk6850 = tbl_Filter_TD_10143_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9410_payload_rightMajor payloadA{_d_date_sk6850};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10632_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_10632_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9410_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6850 = (it->second)._d_date_sk6850;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10632_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_10632_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9410_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9410_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9410_output #Row: " << tbl_JOIN_INNER_TD_9410_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_9571_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_9571_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_9571_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_9571_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_9571_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_LEFTSEMI_TD_9571_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_9571_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_9571_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_9571_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_9571_payload_rightMajor {
    int32_t _ss_customer_sk1209;
};
void SW_JOIN_LEFTSEMI_TD_9571(Table &tbl_Filter_TD_10874_output, Table &tbl_JOIN_INNER_TD_10134_output, Table &tbl_JOIN_LEFTSEMI_TD_9571_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ss_customer_sk#1209)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    int left_nrow = tbl_Filter_TD_10874_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_10134_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_9571_key_rightMajor, SW_JOIN_LEFTSEMI_TD_9571_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10134_output.getNumRow();
        int nrow2 = tbl_Filter_TD_10874_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_10134_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_9571_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_10134_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_9571_payload_rightMajor payloadA{_ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10874_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_9571_key_rightMajor{_c_customer_sk0_k});
            if (it != ht1.end()) {
                int32_t _c_customer_sk0 = tbl_Filter_TD_10874_output.getInt32(i, 0);
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_10874_output.getInt32(i, 1);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_10874_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_9571_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_LEFTSEMI_TD_9571_output.setInt32(r, 1, _c_current_cdemo_sk2);
                tbl_JOIN_LEFTSEMI_TD_9571_output.setInt32(r, 2, _c_current_addr_sk4);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_9571_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_9571_output #Row: " << tbl_JOIN_LEFTSEMI_TD_9571_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8500_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_8500_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8500_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8500_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_8500_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_customer_sk1111;
};
struct SW_JOIN_INNER_TD_8500_key_rightMajor {
    int32_t _d_date_sk6878;
    bool operator==(const SW_JOIN_INNER_TD_8500_key_rightMajor& other) const {
        return ((_d_date_sk6878 == other._d_date_sk6878));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8500_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8500_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6878));
    }
};
}
struct SW_JOIN_INNER_TD_8500_payload_rightMajor {
    int32_t _d_date_sk6878;
};
void SW_JOIN_INNER_TD_8500(Table &tbl_Filter_TD_9547_output, Table &tbl_Filter_TD_967_output, Table &tbl_JOIN_INNER_TD_8500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#6878))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    // Right Table: ListBuffer(d_date_sk#6878)
    // Output Table: ListBuffer(cs_ship_customer_sk#1111)
    int left_nrow = tbl_Filter_TD_9547_output.getNumRow();
    int right_nrow = tbl_Filter_TD_967_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8500_key_leftMajor, SW_JOIN_INNER_TD_8500_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9547_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9547_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8500_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9547_output.getInt32(i, 0);
            int32_t _cs_ship_customer_sk1111 = tbl_Filter_TD_9547_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8500_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_customer_sk1111};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_967_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6878_k = tbl_Filter_TD_967_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8500_key_leftMajor{_d_date_sk6878_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_customer_sk1111 = (it->second)._cs_ship_customer_sk1111;
                int32_t _d_date_sk6878 = tbl_Filter_TD_967_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8500_output.setInt32(r, 0, _cs_ship_customer_sk1111);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8500_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8500_key_rightMajor, SW_JOIN_INNER_TD_8500_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_967_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6878_k = tbl_Filter_TD_967_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8500_key_rightMajor keyA{_d_date_sk6878_k};
            int32_t _d_date_sk6878 = tbl_Filter_TD_967_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8500_payload_rightMajor payloadA{_d_date_sk6878};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9547_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9547_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8500_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6878 = (it->second)._d_date_sk6878;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9547_output.getInt32(i, 0);
                int32_t _cs_ship_customer_sk1111 = tbl_Filter_TD_9547_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8500_output.setInt32(r, 0, _cs_ship_customer_sk1111);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8500_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8500_output #Row: " << tbl_JOIN_INNER_TD_8500_output.getNumRow() << std::endl;
}

struct SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_rightMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_payload_rightMajor {
    int32_t _ws_bill_customer_sk733;
};
void SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872(Table &tbl_JOIN_LEFTSEMI_TD_9571_output, Table &tbl_JOIN_INNER_TD_9410_output, Table &tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_EXISTENCEJOIN(EXISTS#7255)
    // Operation: ListBuffer((c_customer_sk#0 = ws_bill_customer_sk#733))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ws_bill_customer_sk#733)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4, exists#7255)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_9571_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_9410_output.getNumRow();
    std::unordered_map<SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_rightMajor, SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_payload_rightMajor> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9410_output.getNumRow();
    int nrow2 = tbl_JOIN_LEFTSEMI_TD_9571_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_9410_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_rightMajor keyA{_ws_bill_customer_sk733_k};
        int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_9410_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_payload_rightMajor payloadA{_ws_bill_customer_sk733};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _c_customer_sk0_k = tbl_JOIN_LEFTSEMI_TD_9571_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_EXISTENCEJOINEXISTS7255_TD_872_key_rightMajor{_c_customer_sk0_k});
        if (it != ht1.end()) {
            int32_t _c_customer_sk0 = tbl_JOIN_LEFTSEMI_TD_9571_output.getInt32(i, 0);
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_LEFTSEMI_TD_9571_output.getInt32(i, 1);
            int32_t _c_current_addr_sk4 = tbl_JOIN_LEFTSEMI_TD_9571_output.getInt32(i, 2);
            tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.setInt32(r, 0, _c_customer_sk0);
            tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.setInt32(r, 1, _c_current_cdemo_sk2);
            tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.setInt32(r, 2, _c_current_addr_sk4);
            tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.setInt32(r, 3, 1);
            r++;
        }
    }
    tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.setNumRow(r);
    std::cout << "tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output #Row: " << tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.getNumRow() << std::endl;
}

struct SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
    int32_t _exists7255;
};
struct SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_rightMajor {
    int32_t _cs_ship_customer_sk1111;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_rightMajor& other) const {
        return ((_cs_ship_customer_sk1111 == other._cs_ship_customer_sk1111));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_ship_customer_sk1111));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_payload_rightMajor {
    int32_t _cs_ship_customer_sk1111;
};
void SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604(Table &tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output, Table &tbl_JOIN_INNER_TD_8500_output, Table &tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_EXISTENCEJOIN(EXISTS#7256)
    // Operation: ListBuffer((c_customer_sk#0 = cs_ship_customer_sk#1111))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4, exists#7255)
    // Right Table: ListBuffer(cs_ship_customer_sk#1111)
    // Output Table: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4, exists#7255, exists#7256)
    int left_nrow = tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_8500_output.getNumRow();
    std::unordered_map<SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_rightMajor, SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_payload_rightMajor> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8500_output.getNumRow();
    int nrow2 = tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ship_customer_sk1111_k = tbl_JOIN_INNER_TD_8500_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_rightMajor keyA{_cs_ship_customer_sk1111_k};
        int32_t _cs_ship_customer_sk1111 = tbl_JOIN_INNER_TD_8500_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_payload_rightMajor payloadA{_cs_ship_customer_sk1111};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _c_customer_sk0_k = tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_key_rightMajor{_c_customer_sk0_k});
        if (it != ht1.end()) {
            int32_t _c_customer_sk0 = tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.getInt32(i, 0);
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.getInt32(i, 1);
            int32_t _c_current_addr_sk4 = tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.getInt32(i, 2);
            int32_t _exists7255 = tbl_JOIN_EXISTENCEJOINEXISTS7255_TD_872_output.getInt32(i, 3);
            tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.setInt32(r, 0, _c_current_cdemo_sk2);
            tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.setInt32(r, 1, _c_current_addr_sk4);
             tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.setInt32(r, 2, _exists7255);
            tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.setInt32(r, 3, 1);
            r++;
        }
    }
    tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.setNumRow(r);
    std::cout << "tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output #Row: " << tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6808(Table &tbl_SerializeFromObject_TD_7348_input, Table &tbl_Filter_TD_6808_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#54))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7348_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_7348_input.getInt32(i, 0);
        if (_ca_address_sk54!= 0) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_7348_input.getInt32(i, 0);
            tbl_Filter_TD_6808_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_7348_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6808_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_6808_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6808_output #Row: " << tbl_Filter_TD_6808_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6211(Table &tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output, Table &tbl_Filter_TD_6211_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((exists#7255 OR exists#7256))
    // Input: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4, exists#7255, exists#7256)
    // Output: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _exists7255 = tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.getInt32(i, 2);
        int32_t _exists7256 = tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.getInt32(i, 3);
        if (_exists7255 || _exists7256) {
            int32_t _c_current_cdemo_sk2_t = tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.getInt32(i, 0);
            tbl_Filter_TD_6211_output.setInt32(r, 0, _c_current_cdemo_sk2_t);
            int32_t _c_current_addr_sk4_t = tbl_JOIN_EXISTENCEJOINEXISTS7256_TD_7604_output.getInt32(i, 1);
            tbl_Filter_TD_6211_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_6211_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6211_output #Row: " << tbl_Filter_TD_6211_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5659(Table &tbl_SerializeFromObject_TD_6352_input, Table &tbl_Filter_TD_5659_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cd_demo_sk#93))
    // Input: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    // Output: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6352_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_6352_input.getInt32(i, 0);
        if (_cd_demo_sk93!= 0) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_6352_input.getInt32(i, 0);
            tbl_Filter_TD_5659_output.setInt32(r, 0, _cd_demo_sk93_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_t = tbl_SerializeFromObject_TD_6352_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5659_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_gender94_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_t = tbl_SerializeFromObject_TD_6352_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5659_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_marital_status95_t);
            int32_t _cd_dep_count99_t = tbl_SerializeFromObject_TD_6352_input.getInt32(i, 3);
            tbl_Filter_TD_5659_output.setInt32(r, 3, _cd_dep_count99_t);
            int32_t _cd_dep_employed_count100_t = tbl_SerializeFromObject_TD_6352_input.getInt32(i, 4);
            tbl_Filter_TD_5659_output.setInt32(r, 4, _cd_dep_employed_count100_t);
            int32_t _cd_dep_college_count101_t = tbl_SerializeFromObject_TD_6352_input.getInt32(i, 5);
            tbl_Filter_TD_5659_output.setInt32(r, 5, _cd_dep_college_count101_t);
            r++;
        }
    }
    tbl_Filter_TD_5659_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5659_output #Row: " << tbl_Filter_TD_5659_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5184_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_5184_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5184_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5184_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_5184_payload_leftMajor {
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_5184_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_5184_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5184_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5184_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_5184_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_5184(Table &tbl_Filter_TD_6211_output, Table &tbl_Filter_TD_6808_output, Table &tbl_JOIN_INNER_TD_5184_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output Table: ListBuffer(c_current_cdemo_sk#2, ca_state#62)
    int left_nrow = tbl_Filter_TD_6211_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6808_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5184_key_leftMajor, SW_JOIN_INNER_TD_5184_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6211_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_6211_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5184_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_6211_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_6211_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5184_payload_leftMajor payloadA{_c_current_cdemo_sk2, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6808_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6808_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5184_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_6808_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_6808_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_5184_output.setInt32(r, 0, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_5184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5184_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5184_key_rightMajor, SW_JOIN_INNER_TD_5184_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6808_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6808_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5184_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_6808_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_6808_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_5184_payload_rightMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6211_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_6211_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5184_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_6211_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_6211_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5184_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_n);
                tbl_JOIN_INNER_TD_5184_output.setInt32(r, 0, _c_current_cdemo_sk2);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5184_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5184_output #Row: " << tbl_JOIN_INNER_TD_5184_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4164_key_leftMajor {
    int32_t _c_current_cdemo_sk2;
    bool operator==(const SW_JOIN_INNER_TD_4164_key_leftMajor& other) const {
        return ((_c_current_cdemo_sk2 == other._c_current_cdemo_sk2));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4164_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4164_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_cdemo_sk2));
    }
};
}
struct SW_JOIN_INNER_TD_4164_payload_leftMajor {
    int32_t _c_current_cdemo_sk2;
    std::string _ca_state62;
};
struct SW_JOIN_INNER_TD_4164_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_4164_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4164_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4164_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_4164_payload_rightMajor {
    int32_t _cd_demo_sk93;
    std::string _cd_gender94;
    std::string _cd_marital_status95;
    int32_t _cd_dep_count99;
    int32_t _cd_dep_employed_count100;
    int32_t _cd_dep_college_count101;
};
void SW_JOIN_INNER_TD_4164(Table &tbl_JOIN_INNER_TD_5184_output, Table &tbl_Filter_TD_5659_output, Table &tbl_JOIN_INNER_TD_4164_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cd_demo_sk#93 = c_current_cdemo_sk#2))
    // Left Table: ListBuffer(c_current_cdemo_sk#2, ca_state#62)
    // Right Table: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    // Output Table: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    int left_nrow = tbl_JOIN_INNER_TD_5184_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5659_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4164_key_leftMajor, SW_JOIN_INNER_TD_4164_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5184_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_5184_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4164_key_leftMajor keyA{_c_current_cdemo_sk2_k};
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_5184_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_5184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_4164_payload_leftMajor payloadA{_c_current_cdemo_sk2, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5659_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_5659_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4164_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _cd_demo_sk93 = tbl_Filter_TD_5659_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Filter_TD_5659_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_gender94 = std::string(_cd_gender94_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_5659_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                int32_t _cd_dep_count99 = tbl_Filter_TD_5659_output.getInt32(i, 3);
                int32_t _cd_dep_employed_count100 = tbl_Filter_TD_5659_output.getInt32(i, 4);
                int32_t _cd_dep_college_count101 = tbl_Filter_TD_5659_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_4164_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_4164_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_gender94_n);
                tbl_JOIN_INNER_TD_4164_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_marital_status95_n);
                tbl_JOIN_INNER_TD_4164_output.setInt32(r, 3, _cd_dep_count99);
                tbl_JOIN_INNER_TD_4164_output.setInt32(r, 4, _cd_dep_employed_count100);
                tbl_JOIN_INNER_TD_4164_output.setInt32(r, 5, _cd_dep_college_count101);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4164_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4164_key_rightMajor, SW_JOIN_INNER_TD_4164_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5659_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_5659_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4164_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_5659_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Filter_TD_5659_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_gender94 = std::string(_cd_gender94_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_5659_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            int32_t _cd_dep_count99 = tbl_Filter_TD_5659_output.getInt32(i, 3);
            int32_t _cd_dep_employed_count100 = tbl_Filter_TD_5659_output.getInt32(i, 4);
            int32_t _cd_dep_college_count101 = tbl_Filter_TD_5659_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_4164_payload_rightMajor payloadA{_cd_demo_sk93, _cd_gender94, _cd_marital_status95, _cd_dep_count99, _cd_dep_employed_count100, _cd_dep_college_count101};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5184_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_5184_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4164_key_rightMajor{_c_current_cdemo_sk2_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                std::string _cd_gender94 = (it->second)._cd_gender94;
                std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n{};
                memcpy(_cd_gender94_n.data(), (_cd_gender94).data(), (_cd_gender94).length());
                std::string _cd_marital_status95 = (it->second)._cd_marital_status95;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n{};
                memcpy(_cd_marital_status95_n.data(), (_cd_marital_status95).data(), (_cd_marital_status95).length());
                int32_t _cd_dep_count99 = (it->second)._cd_dep_count99;
                int32_t _cd_dep_employed_count100 = (it->second)._cd_dep_employed_count100;
                int32_t _cd_dep_college_count101 = (it->second)._cd_dep_college_count101;
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_5184_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_5184_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_4164_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_gender94_n);
                tbl_JOIN_INNER_TD_4164_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_marital_status95_n);
                tbl_JOIN_INNER_TD_4164_output.setInt32(r, 3, _cd_dep_count99);
                tbl_JOIN_INNER_TD_4164_output.setInt32(r, 4, _cd_dep_employed_count100);
                tbl_JOIN_INNER_TD_4164_output.setInt32(r, 5, _cd_dep_college_count101);
                tbl_JOIN_INNER_TD_4164_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4164_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4164_output #Row: " << tbl_JOIN_INNER_TD_4164_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3453_key {
    std::string _ca_state62;
    std::string _cd_gender94;
    std::string _cd_marital_status95;
    int32_t _cd_dep_count99;
    int32_t _cd_dep_employed_count100;
    int32_t _cd_dep_college_count101;
    bool operator==(const SW_Aggregate_TD_3453_key& other) const { return (_ca_state62 == other._ca_state62) && (_cd_gender94 == other._cd_gender94) && (_cd_marital_status95 == other._cd_marital_status95) && (_cd_dep_count99 == other._cd_dep_count99) && (_cd_dep_employed_count100 == other._cd_dep_employed_count100) && (_cd_dep_college_count101 == other._cd_dep_college_count101); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3453_key> {
    std::size_t operator() (const SW_Aggregate_TD_3453_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_state62)) + (hash<string>()(k._cd_gender94)) + (hash<string>()(k._cd_marital_status95)) + (hash<int32_t>()(k._cd_dep_count99)) + (hash<int32_t>()(k._cd_dep_employed_count100)) + (hash<int32_t>()(k._cd_dep_college_count101));
    }
};
}
struct SW_Aggregate_TD_3453_payload {
    int64_t _cnt16841L_count_0;
    int32_t _mincd_dep_count6915_min_1;
    int32_t _maxcd_dep_count6916_max_2;
    int64_t _avgcd_dep_count6917_avg_3;
    int64_t _cnt26842L_count_4;
    int32_t _mincd_dep_employed_count6918_min_5;
    int32_t _maxcd_dep_employed_count6919_max_6;
    int64_t _avgcd_dep_employed_count6920_avg_7;
    int64_t _cnt36843L_count_8;
    int32_t _mincd_dep_college_count6921_min_9;
    int32_t _maxcd_dep_college_count6922_max_10;
    int64_t _avgcd_dep_college_count6923_avg_11;
};
void SW_Aggregate_TD_3453(Table &tbl_JOIN_INNER_TD_4164_output, Table &tbl_Aggregate_TD_3453_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101, count(1) AS cnt1#6841L, min(cd_dep_count#99) AS min(cd_dep_count)#6915, max(cd_dep_count#99) AS max(cd_dep_count)#6916, avg(cd_dep_count#99) AS avg(cd_dep_count)#6917, count(1) AS cnt2#6842L, min(cd_dep_employed_count#100) AS min(cd_dep_employed_count)#6918, max(cd_dep_employed_count#100) AS max(cd_dep_employed_count)#6919, avg(cd_dep_employed_count#100) AS avg(cd_dep_employed_count)#6920, count(1) AS cnt3#6843L, min(cd_dep_college_count#101) AS min(cd_dep_college_count)#6921, max(cd_dep_college_count#101) AS max(cd_dep_college_count)#6922, avg(cd_dep_college_count#101) AS avg(cd_dep_college_count)#6923)
    // Input: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    // Output: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cnt1#6841L, min(cd_dep_count)#6915, max(cd_dep_count)#6916, avg(cd_dep_count)#6917, cd_dep_employed_count#100, cnt2#6842L, min(cd_dep_employed_count)#6918, max(cd_dep_employed_count)#6919, avg(cd_dep_employed_count)#6920, cd_dep_college_count#101, cnt3#6843L, min(cd_dep_college_count)#6921, max(cd_dep_college_count)#6922, avg(cd_dep_college_count)#6923)
    std::unordered_map<SW_Aggregate_TD_3453_key, SW_Aggregate_TD_3453_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4164_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_4164_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_JOIN_INNER_TD_4164_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_JOIN_INNER_TD_4164_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_4164_output.getInt32(i, 3);
        int32_t _cd_dep_employed_count100 = tbl_JOIN_INNER_TD_4164_output.getInt32(i, 4);
        int32_t _cd_dep_college_count101 = tbl_JOIN_INNER_TD_4164_output.getInt32(i, 5);
        SW_Aggregate_TD_3453_key k{std::string(_ca_state62.data()), std::string(_cd_gender94.data()), std::string(_cd_marital_status95.data()), _cd_dep_count99, _cd_dep_employed_count100, _cd_dep_college_count101};
        int64_t _cnt16841L_count_0 = 1 != 0 ? 1 : 0;
        int32_t _mincd_dep_count6915_min_1 = _cd_dep_count99;
        int32_t _maxcd_dep_count6916_max_2 = _cd_dep_count99;
        int64_t _avgcd_dep_count6917_avg_3 = _cd_dep_count99;
        int64_t _cnt26842L_count_4 = 1 != 0 ? 1 : 0;
        int32_t _mincd_dep_employed_count6918_min_5 = _cd_dep_employed_count100;
        int32_t _maxcd_dep_employed_count6919_max_6 = _cd_dep_employed_count100;
        int64_t _avgcd_dep_employed_count6920_avg_7 = _cd_dep_employed_count100;
        int64_t _cnt36843L_count_8 = 1 != 0 ? 1 : 0;
        int32_t _mincd_dep_college_count6921_min_9 = _cd_dep_college_count101;
        int32_t _maxcd_dep_college_count6922_max_10 = _cd_dep_college_count101;
        int64_t _avgcd_dep_college_count6923_avg_11 = _cd_dep_college_count101;
        SW_Aggregate_TD_3453_payload p{_cnt16841L_count_0, _mincd_dep_count6915_min_1, _maxcd_dep_count6916_max_2, _avgcd_dep_count6917_avg_3, _cnt26842L_count_4, _mincd_dep_employed_count6918_min_5, _maxcd_dep_employed_count6919_max_6, _avgcd_dep_employed_count6920_avg_7, _cnt36843L_count_8, _mincd_dep_college_count6921_min_9, _maxcd_dep_college_count6922_max_10, _avgcd_dep_college_count6923_avg_11};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt16841L_count_0 + _cnt16841L_count_0;
            p._cnt16841L_count_0 = count_0;
            int32_t min_1 = (it->second)._mincd_dep_count6915_min_1 > _mincd_dep_count6915_min_1 ? _mincd_dep_count6915_min_1 : (it->second)._mincd_dep_count6915_min_1;
            p._mincd_dep_count6915_min_1 = min_1;
            int32_t max_2 = (it->second)._maxcd_dep_count6916_max_2 < _maxcd_dep_count6916_max_2 ? _maxcd_dep_count6916_max_2 : (it->second)._maxcd_dep_count6916_max_2;
            p._maxcd_dep_count6916_max_2 = max_2;
            // Unsupported payload Type
            p._avgcd_dep_count6917_avg_3 = avg_3;
            int64_t count_4 = (it->second)._cnt26842L_count_4 + _cnt26842L_count_4;
            p._cnt26842L_count_4 = count_4;
            int32_t min_5 = (it->second)._mincd_dep_employed_count6918_min_5 > _mincd_dep_employed_count6918_min_5 ? _mincd_dep_employed_count6918_min_5 : (it->second)._mincd_dep_employed_count6918_min_5;
            p._mincd_dep_employed_count6918_min_5 = min_5;
            int32_t max_6 = (it->second)._maxcd_dep_employed_count6919_max_6 < _maxcd_dep_employed_count6919_max_6 ? _maxcd_dep_employed_count6919_max_6 : (it->second)._maxcd_dep_employed_count6919_max_6;
            p._maxcd_dep_employed_count6919_max_6 = max_6;
            // Unsupported payload Type
            p._avgcd_dep_employed_count6920_avg_7 = avg_7;
            int64_t count_8 = (it->second)._cnt36843L_count_8 + _cnt36843L_count_8;
            p._cnt36843L_count_8 = count_8;
            int32_t min_9 = (it->second)._mincd_dep_college_count6921_min_9 > _mincd_dep_college_count6921_min_9 ? _mincd_dep_college_count6921_min_9 : (it->second)._mincd_dep_college_count6921_min_9;
            p._mincd_dep_college_count6921_min_9 = min_9;
            int32_t max_10 = (it->second)._maxcd_dep_college_count6922_max_10 < _maxcd_dep_college_count6922_max_10 ? _maxcd_dep_college_count6922_max_10 : (it->second)._maxcd_dep_college_count6922_max_10;
            p._maxcd_dep_college_count6922_max_10 = max_10;
            // Unsupported payload Type
            p._avgcd_dep_college_count6923_avg_11 = avg_11;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62{};
        memcpy(_ca_state62.data(), ((it.first)._ca_state62).data(), ((it.first)._ca_state62).length());
        tbl_Aggregate_TD_3453_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62);
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94{};
        memcpy(_cd_gender94.data(), ((it.first)._cd_gender94).data(), ((it.first)._cd_gender94).length());
        tbl_Aggregate_TD_3453_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_gender94);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95{};
        memcpy(_cd_marital_status95.data(), ((it.first)._cd_marital_status95).data(), ((it.first)._cd_marital_status95).length());
        tbl_Aggregate_TD_3453_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_marital_status95);
        tbl_Aggregate_TD_3453_output.setInt32(r, 3, (it.first)._cd_dep_count99);
        tbl_Aggregate_TD_3453_output.setInt32(r, 8, (it.first)._cd_dep_employed_count100);
        tbl_Aggregate_TD_3453_output.setInt32(r, 13, (it.first)._cd_dep_college_count101);
        int64_t _cnt16841L = (it.second)._cnt16841L_count_0;
        tbl_Aggregate_TD_3453_output.setInt64(r, 4, _cnt16841L);
        int32_t _mincd_dep_count6915 = (it.second)._mincd_dep_count6915_min_1;
        tbl_Aggregate_TD_3453_output.setInt32(r, 5, _mincd_dep_count6915);
        int32_t _maxcd_dep_count6916 = (it.second)._maxcd_dep_count6916_max_2;
        tbl_Aggregate_TD_3453_output.setInt32(r, 6, _maxcd_dep_count6916);
        int64_t _avgcd_dep_count6917 = (it.second)._avgcd_dep_count6917_avg_3 / nrow1;
        // Unsupported payload type: DoubleType
        int64_t _cnt26842L = (it.second)._cnt26842L_count_4;
        tbl_Aggregate_TD_3453_output.setInt64(r, 9, _cnt26842L);
        int32_t _mincd_dep_employed_count6918 = (it.second)._mincd_dep_employed_count6918_min_5;
        tbl_Aggregate_TD_3453_output.setInt32(r, 10, _mincd_dep_employed_count6918);
        int32_t _maxcd_dep_employed_count6919 = (it.second)._maxcd_dep_employed_count6919_max_6;
        tbl_Aggregate_TD_3453_output.setInt32(r, 11, _maxcd_dep_employed_count6919);
        int64_t _avgcd_dep_employed_count6920 = (it.second)._avgcd_dep_employed_count6920_avg_7 / nrow1;
        // Unsupported payload type: DoubleType
        int64_t _cnt36843L = (it.second)._cnt36843L_count_8;
        tbl_Aggregate_TD_3453_output.setInt64(r, 14, _cnt36843L);
        int32_t _mincd_dep_college_count6921 = (it.second)._mincd_dep_college_count6921_min_9;
        tbl_Aggregate_TD_3453_output.setInt32(r, 15, _mincd_dep_college_count6921);
        int32_t _maxcd_dep_college_count6922 = (it.second)._maxcd_dep_college_count6922_max_10;
        tbl_Aggregate_TD_3453_output.setInt32(r, 16, _maxcd_dep_college_count6922);
        int64_t _avgcd_dep_college_count6923 = (it.second)._avgcd_dep_college_count6923_avg_11 / nrow1;
        // Unsupported payload type: DoubleType
        ++r;
    }
    tbl_Aggregate_TD_3453_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3453_output #Row: " << tbl_Aggregate_TD_3453_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2320(Table &tbl_Aggregate_TD_3453_output, Table &tbl_Sort_TD_2320_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ca_state#62 ASC NULLS FIRST, cd_gender#94 ASC NULLS FIRST, cd_marital_status#95 ASC NULLS FIRST, cd_dep_count#99 ASC NULLS FIRST, cd_dep_employed_count#100 ASC NULLS FIRST, cd_dep_college_count#101 ASC NULLS FIRST)
    // Input: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cnt1#6841L, min(cd_dep_count)#6915, max(cd_dep_count)#6916, avg(cd_dep_count)#6917, cd_dep_employed_count#100, cnt2#6842L, min(cd_dep_employed_count)#6918, max(cd_dep_employed_count)#6919, avg(cd_dep_employed_count)#6920, cd_dep_college_count#101, cnt3#6843L, min(cd_dep_college_count)#6921, max(cd_dep_college_count)#6922, avg(cd_dep_college_count)#6923)
    // Output: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cnt1#6841L, min(cd_dep_count)#6915, max(cd_dep_count)#6916, avg(cd_dep_count)#6917, cd_dep_employed_count#100, cnt2#6842L, min(cd_dep_employed_count)#6918, max(cd_dep_employed_count)#6919, avg(cd_dep_employed_count)#6920, cd_dep_college_count#101, cnt3#6843L, min(cd_dep_college_count)#6921, max(cd_dep_college_count)#6922, avg(cd_dep_college_count)#6923)
    struct SW_Sort_TD_2320Row {
        std::string _ca_state62;
        std::string _cd_gender94;
        std::string _cd_marital_status95;
        int32_t _cd_dep_count99;
        int64_t _cnt16841L;
        int32_t _mincd_dep_count6915;
        int32_t _maxcd_dep_count6916;
        int32_t _avgcd_dep_count6917;
        int32_t _cd_dep_employed_count100;
        int64_t _cnt26842L;
        int32_t _mincd_dep_employed_count6918;
        int32_t _maxcd_dep_employed_count6919;
        int32_t _avgcd_dep_employed_count6920;
        int32_t _cd_dep_college_count101;
        int64_t _cnt36843L;
        int32_t _mincd_dep_college_count6921;
        int32_t _maxcd_dep_college_count6922;
        int32_t _avgcd_dep_college_count6923;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2320Row& a, const SW_Sort_TD_2320Row& b) const { return 
 (a._ca_state62 < b._ca_state62) || 
 ((a._ca_state62 == b._ca_state62) && (a._cd_gender94 < b._cd_gender94)) || 
 ((a._ca_state62 == b._ca_state62) && (a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 < b._cd_marital_status95)) || 
 ((a._ca_state62 == b._ca_state62) && (a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_dep_count99 < b._cd_dep_count99)) || 
 ((a._ca_state62 == b._ca_state62) && (a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_dep_count99 == b._cd_dep_count99) && (a._cd_dep_employed_count100 < b._cd_dep_employed_count100)) || 
 ((a._ca_state62 == b._ca_state62) && (a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_dep_count99 == b._cd_dep_count99) && (a._cd_dep_employed_count100 == b._cd_dep_employed_count100) && (a._cd_dep_college_count101 < b._cd_dep_college_count101)); 
}
    }SW_Sort_TD_2320_order; 

    int nrow1 = tbl_Aggregate_TD_3453_output.getNumRow();
    std::vector<SW_Sort_TD_2320Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_Aggregate_TD_3453_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_Aggregate_TD_3453_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_Aggregate_TD_3453_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int32_t _cd_dep_count99 = tbl_Aggregate_TD_3453_output.getInt32(i, 3);
        int64_t _cnt16841L = tbl_Aggregate_TD_3453_output.getInt64(i, 4);
        int32_t _mincd_dep_count6915 = tbl_Aggregate_TD_3453_output.getInt32(i, 5);
        int32_t _maxcd_dep_count6916 = tbl_Aggregate_TD_3453_output.getInt32(i, 6);
        int32_t _avgcd_dep_count6917 = tbl_Aggregate_TD_3453_output.getInt32(i, 7);
        int32_t _cd_dep_employed_count100 = tbl_Aggregate_TD_3453_output.getInt32(i, 8);
        int64_t _cnt26842L = tbl_Aggregate_TD_3453_output.getInt64(i, 9);
        int32_t _mincd_dep_employed_count6918 = tbl_Aggregate_TD_3453_output.getInt32(i, 10);
        int32_t _maxcd_dep_employed_count6919 = tbl_Aggregate_TD_3453_output.getInt32(i, 11);
        int32_t _avgcd_dep_employed_count6920 = tbl_Aggregate_TD_3453_output.getInt32(i, 12);
        int32_t _cd_dep_college_count101 = tbl_Aggregate_TD_3453_output.getInt32(i, 13);
        int64_t _cnt36843L = tbl_Aggregate_TD_3453_output.getInt64(i, 14);
        int32_t _mincd_dep_college_count6921 = tbl_Aggregate_TD_3453_output.getInt32(i, 15);
        int32_t _maxcd_dep_college_count6922 = tbl_Aggregate_TD_3453_output.getInt32(i, 16);
        int32_t _avgcd_dep_college_count6923 = tbl_Aggregate_TD_3453_output.getInt32(i, 17);
        SW_Sort_TD_2320Row t = {std::string(_ca_state62.data()),std::string(_cd_gender94.data()),std::string(_cd_marital_status95.data()),_cd_dep_count99,_cnt16841L,_mincd_dep_count6915,_maxcd_dep_count6916,_avgcd_dep_count6917,_cd_dep_employed_count100,_cnt26842L,_mincd_dep_employed_count6918,_maxcd_dep_employed_count6919,_avgcd_dep_employed_count6920,_cd_dep_college_count101,_cnt36843L,_mincd_dep_college_count6921,_maxcd_dep_college_count6922,_avgcd_dep_college_count6923};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2320_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62{};
        memcpy(_ca_state62.data(), (it._ca_state62).data(), (it._ca_state62).length());
        tbl_Sort_TD_2320_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _ca_state62);
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94{};
        memcpy(_cd_gender94.data(), (it._cd_gender94).data(), (it._cd_gender94).length());
        tbl_Sort_TD_2320_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _cd_gender94);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95{};
        memcpy(_cd_marital_status95.data(), (it._cd_marital_status95).data(), (it._cd_marital_status95).length());
        tbl_Sort_TD_2320_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cd_marital_status95);
        tbl_Sort_TD_2320_output.setInt32(r, 3, it._cd_dep_count99);
        tbl_Sort_TD_2320_output.setInt64(r, 4, it._cnt16841L);
        tbl_Sort_TD_2320_output.setInt32(r, 5, it._mincd_dep_count6915);
        tbl_Sort_TD_2320_output.setInt32(r, 6, it._maxcd_dep_count6916);
        tbl_Sort_TD_2320_output.setInt32(r, 7, it._avgcd_dep_count6917);
        tbl_Sort_TD_2320_output.setInt32(r, 8, it._cd_dep_employed_count100);
        tbl_Sort_TD_2320_output.setInt64(r, 9, it._cnt26842L);
        tbl_Sort_TD_2320_output.setInt32(r, 10, it._mincd_dep_employed_count6918);
        tbl_Sort_TD_2320_output.setInt32(r, 11, it._maxcd_dep_employed_count6919);
        tbl_Sort_TD_2320_output.setInt32(r, 12, it._avgcd_dep_employed_count6920);
        tbl_Sort_TD_2320_output.setInt32(r, 13, it._cd_dep_college_count101);
        tbl_Sort_TD_2320_output.setInt64(r, 14, it._cnt36843L);
        tbl_Sort_TD_2320_output.setInt32(r, 15, it._mincd_dep_college_count6921);
        tbl_Sort_TD_2320_output.setInt32(r, 16, it._maxcd_dep_college_count6922);
        tbl_Sort_TD_2320_output.setInt32(r, 17, it._avgcd_dep_college_count6923);
        ++r;
    }
    tbl_Sort_TD_2320_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2320_output #Row: " << tbl_Sort_TD_2320_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1294(Table &tbl_Sort_TD_2320_output, Table &tbl_LocalLimit_TD_1294_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cnt1#6841L, min(cd_dep_count)#6915, max(cd_dep_count)#6916, avg(cd_dep_count)#6917, cd_dep_employed_count#100, cnt2#6842L, min(cd_dep_employed_count)#6918, max(cd_dep_employed_count)#6919, avg(cd_dep_employed_count)#6920, cd_dep_college_count#101, cnt3#6843L, min(cd_dep_college_count)#6921, max(cd_dep_college_count)#6922, avg(cd_dep_college_count)#6923)
    // Output: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cnt1#6841L, min(cd_dep_count)#6915, max(cd_dep_count)#6916, avg(cd_dep_count)#6917, cd_dep_employed_count#100, cnt2#6842L, min(cd_dep_employed_count)#6918, max(cd_dep_employed_count)#6919, avg(cd_dep_employed_count)#6920, cd_dep_college_count#101, cnt3#6843L, min(cd_dep_college_count)#6921, max(cd_dep_college_count)#6922, avg(cd_dep_college_count)#6923)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Sort_TD_2320_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1294_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Sort_TD_2320_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1294_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_gender94_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Sort_TD_2320_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1294_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_marital_status95_n);
        tbl_LocalLimit_TD_1294_output.setInt32(r, 3, tbl_Sort_TD_2320_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1294_output.setInt32(r, 4, tbl_Sort_TD_2320_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1294_output.setInt32(r, 5, tbl_Sort_TD_2320_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1294_output.setInt32(r, 6, tbl_Sort_TD_2320_output.getInt32(i, 6));
        // Unsupported Union key type
        tbl_LocalLimit_TD_1294_output.setInt32(r, 8, tbl_Sort_TD_2320_output.getInt32(i, 8));
        tbl_LocalLimit_TD_1294_output.setInt32(r, 9, tbl_Sort_TD_2320_output.getInt64(i, 9));
        tbl_LocalLimit_TD_1294_output.setInt32(r, 10, tbl_Sort_TD_2320_output.getInt32(i, 10));
        tbl_LocalLimit_TD_1294_output.setInt32(r, 11, tbl_Sort_TD_2320_output.getInt32(i, 11));
        // Unsupported Union key type
        tbl_LocalLimit_TD_1294_output.setInt32(r, 13, tbl_Sort_TD_2320_output.getInt32(i, 13));
        tbl_LocalLimit_TD_1294_output.setInt32(r, 14, tbl_Sort_TD_2320_output.getInt64(i, 14));
        tbl_LocalLimit_TD_1294_output.setInt32(r, 15, tbl_Sort_TD_2320_output.getInt32(i, 15));
        tbl_LocalLimit_TD_1294_output.setInt32(r, 16, tbl_Sort_TD_2320_output.getInt32(i, 16));
        // Unsupported Union key type
        r++;
    }
    tbl_LocalLimit_TD_1294_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1294_output #Row: " << tbl_LocalLimit_TD_1294_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0250(Table &tbl_LocalLimit_TD_1294_output, Table &tbl_GlobalLimit_TD_0250_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cnt1#6841L, min(cd_dep_count)#6915, max(cd_dep_count)#6916, avg(cd_dep_count)#6917, cd_dep_employed_count#100, cnt2#6842L, min(cd_dep_employed_count)#6918, max(cd_dep_employed_count)#6919, avg(cd_dep_employed_count)#6920, cd_dep_college_count#101, cnt3#6843L, min(cd_dep_college_count)#6921, max(cd_dep_college_count)#6922, avg(cd_dep_college_count)#6923)
    // Output: ListBuffer(ca_state#62, cd_gender#94, cd_marital_status#95, cd_dep_count#99, cnt1#6841L, min(cd_dep_count)#6915, max(cd_dep_count)#6916, avg(cd_dep_count)#6917, cd_dep_employed_count#100, cnt2#6842L, min(cd_dep_employed_count)#6918, max(cd_dep_employed_count)#6919, avg(cd_dep_employed_count)#6920, cd_dep_college_count#101, cnt3#6843L, min(cd_dep_college_count)#6921, max(cd_dep_college_count)#6922, avg(cd_dep_college_count)#6923)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_LocalLimit_TD_1294_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0250_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_LocalLimit_TD_1294_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0250_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_gender94_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_LocalLimit_TD_1294_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0250_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_marital_status95_n);
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 3, tbl_LocalLimit_TD_1294_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 4, tbl_LocalLimit_TD_1294_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 5, tbl_LocalLimit_TD_1294_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 6, tbl_LocalLimit_TD_1294_output.getInt32(i, 6));
        // Unsupported Union key type
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 8, tbl_LocalLimit_TD_1294_output.getInt32(i, 8));
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 9, tbl_LocalLimit_TD_1294_output.getInt64(i, 9));
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 10, tbl_LocalLimit_TD_1294_output.getInt32(i, 10));
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 11, tbl_LocalLimit_TD_1294_output.getInt32(i, 11));
        // Unsupported Union key type
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 13, tbl_LocalLimit_TD_1294_output.getInt32(i, 13));
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 14, tbl_LocalLimit_TD_1294_output.getInt64(i, 14));
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 15, tbl_LocalLimit_TD_1294_output.getInt32(i, 15));
        tbl_GlobalLimit_TD_0250_output.setInt32(r, 16, tbl_LocalLimit_TD_1294_output.getInt32(i, 16));
        // Unsupported Union key type
        r++;
    }
    tbl_GlobalLimit_TD_0250_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0250_output #Row: " << tbl_GlobalLimit_TD_0250_output.getNumRow() << std::endl;
}

