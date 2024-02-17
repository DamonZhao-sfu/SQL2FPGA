#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_6829(Table &tbl_SerializeFromObject_TD_727_input, Table &tbl_Filter_TD_6829_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#6364) AND ((d_date#6364 >= 2000-01-27) AND (d_date#6364 <= 2000-04-26))) AND isnotnull(d_date_sk#6362)))
    // Input: ListBuffer(d_date_sk#6362, d_date#6364)
    // Output: ListBuffer(d_date_sk#6362)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_727_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date6364 = tbl_SerializeFromObject_TD_727_input.getInt32(i, 1);
        int32_t _d_date_sk6362 = tbl_SerializeFromObject_TD_727_input.getInt32(i, 0);
        if (((_d_date6364!= 0) && ((_d_date6364 >= 20000127) && (_d_date6364 <= 20000426))) && (_d_date_sk6362!= 0)) {
            int32_t _d_date_sk6362_t = tbl_SerializeFromObject_TD_727_input.getInt32(i, 0);
            tbl_Filter_TD_6829_output.setInt32(r, 0, _d_date_sk6362_t);
            r++;
        }
    }
    tbl_Filter_TD_6829_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6829_output #Row: " << tbl_Filter_TD_6829_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6515(Table &tbl_SerializeFromObject_TD_7288_input, Table &tbl_Filter_TD_6515_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#6328) AND isnotnull(cs_item_sk#6343)))
    // Input: ListBuffer(cs_sold_date_sk#6328, cs_item_sk#6343, cs_ext_discount_amt#6350)
    // Output: ListBuffer(cs_sold_date_sk#6328, cs_item_sk#6343, cs_ext_discount_amt#6350)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7288_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk6328 = tbl_SerializeFromObject_TD_7288_input.getInt32(i, 0);
        int32_t _cs_item_sk6343 = tbl_SerializeFromObject_TD_7288_input.getInt32(i, 1);
        if ((_cs_sold_date_sk6328!= 0) && (_cs_item_sk6343!= 0)) {
            int32_t _cs_sold_date_sk6328_t = tbl_SerializeFromObject_TD_7288_input.getInt32(i, 0);
            tbl_Filter_TD_6515_output.setInt32(r, 0, _cs_sold_date_sk6328_t);
            int32_t _cs_item_sk6343_t = tbl_SerializeFromObject_TD_7288_input.getInt32(i, 1);
            tbl_Filter_TD_6515_output.setInt32(r, 1, _cs_item_sk6343_t);
            int32_t _cs_ext_discount_amt6350_t = tbl_SerializeFromObject_TD_7288_input.getInt32(i, 2);
            tbl_Filter_TD_6515_output.setInt32(r, 2, _cs_ext_discount_amt6350_t);
            r++;
        }
    }
    tbl_Filter_TD_6515_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6515_output #Row: " << tbl_Filter_TD_6515_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5915_key_leftMajor {
    int32_t _cs_sold_date_sk6328;
    bool operator==(const SW_JOIN_INNER_TD_5915_key_leftMajor& other) const {
        return ((_cs_sold_date_sk6328 == other._cs_sold_date_sk6328));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5915_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5915_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk6328));
    }
};
}
struct SW_JOIN_INNER_TD_5915_payload_leftMajor {
    int32_t _cs_sold_date_sk6328;
    int32_t _cs_item_sk6343;
    int32_t _cs_ext_discount_amt6350;
};
struct SW_JOIN_INNER_TD_5915_key_rightMajor {
    int32_t _d_date_sk6362;
    bool operator==(const SW_JOIN_INNER_TD_5915_key_rightMajor& other) const {
        return ((_d_date_sk6362 == other._d_date_sk6362));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5915_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5915_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6362));
    }
};
}
struct SW_JOIN_INNER_TD_5915_payload_rightMajor {
    int32_t _d_date_sk6362;
};
void SW_JOIN_INNER_TD_5915(Table &tbl_Filter_TD_6515_output, Table &tbl_Filter_TD_6829_output, Table &tbl_JOIN_INNER_TD_5915_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#6362 = cs_sold_date_sk#6328))
    // Left Table: ListBuffer(cs_sold_date_sk#6328, cs_item_sk#6343, cs_ext_discount_amt#6350)
    // Right Table: ListBuffer(d_date_sk#6362)
    // Output Table: ListBuffer(cs_item_sk#6343, cs_ext_discount_amt#6350)
    int left_nrow = tbl_Filter_TD_6515_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6829_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5915_key_leftMajor, SW_JOIN_INNER_TD_5915_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6515_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk6328_k = tbl_Filter_TD_6515_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5915_key_leftMajor keyA{_cs_sold_date_sk6328_k};
            int32_t _cs_sold_date_sk6328 = tbl_Filter_TD_6515_output.getInt32(i, 0);
            int32_t _cs_item_sk6343 = tbl_Filter_TD_6515_output.getInt32(i, 1);
            int32_t _cs_ext_discount_amt6350 = tbl_Filter_TD_6515_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5915_payload_leftMajor payloadA{_cs_sold_date_sk6328, _cs_item_sk6343, _cs_ext_discount_amt6350};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6829_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6362_k = tbl_Filter_TD_6829_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5915_key_leftMajor{_d_date_sk6362_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk6328 = (it->second)._cs_sold_date_sk6328;
                int32_t _cs_item_sk6343 = (it->second)._cs_item_sk6343;
                int32_t _cs_ext_discount_amt6350 = (it->second)._cs_ext_discount_amt6350;
                int32_t _d_date_sk6362 = tbl_Filter_TD_6829_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5915_output.setInt32(r, 0, _cs_item_sk6343);
                tbl_JOIN_INNER_TD_5915_output.setInt32(r, 1, _cs_ext_discount_amt6350);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5915_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5915_key_rightMajor, SW_JOIN_INNER_TD_5915_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6829_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6362_k = tbl_Filter_TD_6829_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5915_key_rightMajor keyA{_d_date_sk6362_k};
            int32_t _d_date_sk6362 = tbl_Filter_TD_6829_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5915_payload_rightMajor payloadA{_d_date_sk6362};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6515_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk6328_k = tbl_Filter_TD_6515_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5915_key_rightMajor{_cs_sold_date_sk6328_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6362 = (it->second)._d_date_sk6362;
                int32_t _cs_sold_date_sk6328 = tbl_Filter_TD_6515_output.getInt32(i, 0);
                int32_t _cs_item_sk6343 = tbl_Filter_TD_6515_output.getInt32(i, 1);
                int32_t _cs_ext_discount_amt6350 = tbl_Filter_TD_6515_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5915_output.setInt32(r, 0, _cs_item_sk6343);
                tbl_JOIN_INNER_TD_5915_output.setInt32(r, 1, _cs_ext_discount_amt6350);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5915_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5915_output #Row: " << tbl_JOIN_INNER_TD_5915_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_4445_key;
struct SW_Aggregate_TD_4445_payload {
    int32_t _avgcs_ext_discount_amt6327_avg_0;
};
void SW_Aggregate_TD_4445(Table &tbl_JOIN_INNER_TD_5915_output, Table &tbl_Aggregate_TD_4445_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_item_sk#6343, CheckOverflow((1.300000 * promote_precision(cast((avg(UnscaledValue(cs_ext_discount_amt#6350)) / 100.0) as decimal(11,6)))), DecimalType(14,7), true) AS (1.3 * avg(cs_ext_discount_amt))#6327)
    // Input: ListBuffer(cs_item_sk#6343, cs_ext_discount_amt#6350)
    // Output: ListBuffer((1.3 * avg(cs_ext_discount_amt))#6327, cs_item_sk#6343)
    std::unordered_map<SW_Aggregate_TD_4445_key, SW_Aggregate_TD_4445_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5915_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk6343 = tbl_JOIN_INNER_TD_5915_output.getInt32(i, 0);
        int32_t _cs_ext_discount_amt6350 = tbl_JOIN_INNER_TD_5915_output.getInt32(i, 1);
        SW_Aggregate_TD_4445_key k = _cs_item_sk6343;
        int64_t _avgcs_ext_discount_amt6327_avg_0 = _cs_ext_discount_amt6350;
        SW_Aggregate_TD_4445_payload p{_avgcs_ext_discount_amt6327_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._avgcs_ext_discount_amt6327_avg_0 + _avgcs_ext_discount_amt6327_avg_0);
            p._avgcs_ext_discount_amt6327_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_4445_output.setInt32(r, 1, (it.first));
        int32_t _avgcs_ext_discount_amt6327 = (1.300000 * ((it.second)._avgcs_ext_discount_amt6327_avg_0 / nrow1 / 100.0));
        tbl_Aggregate_TD_4445_output.setInt32(r, 0, _avgcs_ext_discount_amt6327);
        ++r;
    }
    tbl_Aggregate_TD_4445_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4445_output #Row: " << tbl_Aggregate_TD_4445_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4443(Table &tbl_SerializeFromObject_TD_577_input, Table &tbl_Filter_TD_4443_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manufact_id#241) AND (i_manufact_id#241 = 977)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_manufact_id#241)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_577_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_SerializeFromObject_TD_577_input.getInt32(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_577_input.getInt32(i, 0);
        if (((_i_manufact_id241!= 0) && (_i_manufact_id241 == 977)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_577_input.getInt32(i, 0);
            tbl_Filter_TD_4443_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_4443_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4443_output #Row: " << tbl_Filter_TD_4443_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4798(Table &tbl_SerializeFromObject_TD_5370_input, Table &tbl_Filter_TD_4798_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND (isnotnull(cs_ext_discount_amt#1126) AND isnotnull(cs_sold_date_sk#1104))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_discount_amt#1126)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_discount_amt#1126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5370_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_5370_input.getInt32(i, 1);
        int32_t _cs_ext_discount_amt1126 = tbl_SerializeFromObject_TD_5370_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_5370_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && ((_cs_ext_discount_amt1126!= 0) && (_cs_sold_date_sk1104!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_5370_input.getInt32(i, 0);
            tbl_Filter_TD_4798_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_5370_input.getInt32(i, 1);
            tbl_Filter_TD_4798_output.setInt32(r, 1, _cs_item_sk1119_t);
            int32_t _cs_ext_discount_amt1126_t = tbl_SerializeFromObject_TD_5370_input.getInt32(i, 2);
            tbl_Filter_TD_4798_output.setInt32(r, 2, _cs_ext_discount_amt1126_t);
            r++;
        }
    }
    tbl_Filter_TD_4798_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4798_output #Row: " << tbl_Filter_TD_4798_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3137(Table &tbl_Aggregate_TD_4445_output, Table &tbl_Filter_TD_3137_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull((1.3 * avg(cs_ext_discount_amt))#6327))
    // Input: ListBuffer((1.3 * avg(cs_ext_discount_amt))#6327, cs_item_sk#6343)
    // Output: ListBuffer((1.3 * avg(cs_ext_discount_amt))#6327, cs_item_sk#6343)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_4445_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _avgcs_ext_discount_amt6327 = tbl_Aggregate_TD_4445_output.getInt32(i, 0);
        if (_avgcs_ext_discount_amt6327!= 0) {
            int32_t _avgcs_ext_discount_amt6327_t = tbl_Aggregate_TD_4445_output.getInt32(i, 0);
            tbl_Filter_TD_3137_output.setInt32(r, 0, _avgcs_ext_discount_amt6327_t);
            int32_t _cs_item_sk6343_t = tbl_Aggregate_TD_4445_output.getInt32(i, 1);
            tbl_Filter_TD_3137_output.setInt32(r, 1, _cs_item_sk6343_t);
            r++;
        }
    }
    tbl_Filter_TD_3137_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3137_output #Row: " << tbl_Filter_TD_3137_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3100_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_3100_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3100_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3100_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_3100_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_discount_amt1126;
};
struct SW_JOIN_INNER_TD_3100_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_3100_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3100_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3100_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_3100_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_3100(Table &tbl_Filter_TD_4798_output, Table &tbl_Filter_TD_4443_output, Table &tbl_JOIN_INNER_TD_3100_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = cs_item_sk#1119))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_discount_amt#1126)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ext_discount_amt#1126, i_item_sk#228)
    int left_nrow = tbl_Filter_TD_4798_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4443_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3100_key_leftMajor, SW_JOIN_INNER_TD_3100_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_4798_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_4798_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3100_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_4798_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_4798_output.getInt32(i, 1);
            int32_t _cs_ext_discount_amt1126 = tbl_Filter_TD_4798_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3100_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_ext_discount_amt1126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4443_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4443_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3100_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_discount_amt1126 = (it->second)._cs_ext_discount_amt1126;
                int32_t _i_item_sk228 = tbl_Filter_TD_4443_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3100_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_3100_output.setInt32(r, 1, _cs_ext_discount_amt1126);
                tbl_JOIN_INNER_TD_3100_output.setInt32(r, 2, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3100_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3100_key_rightMajor, SW_JOIN_INNER_TD_3100_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4443_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4443_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3100_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_4443_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3100_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4798_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_4798_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3100_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_4798_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_4798_output.getInt32(i, 1);
                int32_t _cs_ext_discount_amt1126 = tbl_Filter_TD_4798_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3100_output.setInt32(r, 2, _i_item_sk228);
                tbl_JOIN_INNER_TD_3100_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_3100_output.setInt32(r, 1, _cs_ext_discount_amt1126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3100_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3100_output #Row: " << tbl_JOIN_INNER_TD_3100_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2612(Table &tbl_SerializeFromObject_TD_3312_input, Table &tbl_Filter_TD_2612_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-01-27) AND (d_date#122 <= 2000-04-26))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3312_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_3312_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_3312_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000127) && (_d_date122 <= 20000426))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_3312_input.getInt32(i, 0);
            tbl_Filter_TD_2612_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_2612_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2612_output #Row: " << tbl_Filter_TD_2612_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_23_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_23_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_23_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_23_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_23_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ext_discount_amt1126;
    int32_t _i_item_sk228;
};
struct SW_JOIN_INNER_TD_23_key_rightMajor {
    int32_t _cs_item_sk6343;
    bool operator==(const SW_JOIN_INNER_TD_23_key_rightMajor& other) const {
        return ((_cs_item_sk6343 == other._cs_item_sk6343));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_23_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_23_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk6343));
    }
};
}
struct SW_JOIN_INNER_TD_23_payload_rightMajor {
    int32_t _avgcs_ext_discount_amt6327;
    int32_t _cs_item_sk6343;
};
void SW_JOIN_INNER_TD_23(Table &tbl_JOIN_INNER_TD_3100_output, Table &tbl_Filter_TD_3137_output, Table &tbl_JOIN_INNER_TD_23_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cast(cs_ext_discount_amt#1126 as decimal(14,7)) > (1.3 * avg(cs_ext_discount_amt))#6327) AND (cs_item_sk#6343 = i_item_sk#228)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ext_discount_amt#1126, i_item_sk#228)
    // Right Table: ListBuffer((1.3 * avg(cs_ext_discount_amt))#6327, cs_item_sk#6343)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ext_discount_amt#1126)
    int left_nrow = tbl_JOIN_INNER_TD_3100_output.getNumRow();
    int right_nrow = tbl_Filter_TD_3137_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_23_key_leftMajor, SW_JOIN_INNER_TD_23_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3100_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_INNER_TD_3100_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_23_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_3100_output.getInt32(i, 0);
            int32_t _cs_ext_discount_amt1126 = tbl_JOIN_INNER_TD_3100_output.getInt32(i, 1);
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_3100_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_23_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ext_discount_amt1126, _i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_3137_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk6343_k = tbl_Filter_TD_3137_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_23_key_leftMajor{_cs_item_sk6343_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ext_discount_amt1126 = (it->second)._cs_ext_discount_amt1126;
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _avgcs_ext_discount_amt6327 = tbl_Filter_TD_3137_output.getInt32(i, 0);
                int32_t _cs_item_sk6343 = tbl_Filter_TD_3137_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_23_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_23_output.setInt32(r, 1, _cs_ext_discount_amt1126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_23_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_23_key_rightMajor, SW_JOIN_INNER_TD_23_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_3137_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk6343_k = tbl_Filter_TD_3137_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_23_key_rightMajor keyA{_cs_item_sk6343_k};
            int32_t _avgcs_ext_discount_amt6327 = tbl_Filter_TD_3137_output.getInt32(i, 0);
            int32_t _cs_item_sk6343 = tbl_Filter_TD_3137_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_23_payload_rightMajor payloadA{_avgcs_ext_discount_amt6327, _cs_item_sk6343};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3100_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_INNER_TD_3100_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_23_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _avgcs_ext_discount_amt6327 = (it->second)._avgcs_ext_discount_amt6327;
                int32_t _cs_item_sk6343 = (it->second)._cs_item_sk6343;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_3100_output.getInt32(i, 0);
                int32_t _cs_ext_discount_amt1126 = tbl_JOIN_INNER_TD_3100_output.getInt32(i, 1);
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_3100_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_23_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_23_output.setInt32(r, 1, _cs_ext_discount_amt1126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_23_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_23_output #Row: " << tbl_JOIN_INNER_TD_23_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1733_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_1733_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1733_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1733_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_1733_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ext_discount_amt1126;
};
struct SW_JOIN_INNER_TD_1733_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_1733_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1733_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1733_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_1733_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_1733(Table &tbl_JOIN_INNER_TD_23_output, Table &tbl_Filter_TD_2612_output, Table &tbl_JOIN_INNER_TD_1733_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = cs_sold_date_sk#1104))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ext_discount_amt#1126)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(cs_ext_discount_amt#1126)
    int left_nrow = tbl_JOIN_INNER_TD_23_output.getNumRow();
    int right_nrow = tbl_Filter_TD_2612_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1733_key_leftMajor, SW_JOIN_INNER_TD_1733_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_23_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_23_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1733_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_23_output.getInt32(i, 0);
            int32_t _cs_ext_discount_amt1126 = tbl_JOIN_INNER_TD_23_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1733_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ext_discount_amt1126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2612_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_2612_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1733_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ext_discount_amt1126 = (it->second)._cs_ext_discount_amt1126;
                int32_t _d_date_sk120 = tbl_Filter_TD_2612_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1733_output.setInt32(r, 0, _cs_ext_discount_amt1126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1733_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1733_key_rightMajor, SW_JOIN_INNER_TD_1733_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_2612_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_2612_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1733_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_2612_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1733_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_23_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_23_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1733_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_23_output.getInt32(i, 0);
                int32_t _cs_ext_discount_amt1126 = tbl_JOIN_INNER_TD_23_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_1733_output.setInt32(r, 0, _cs_ext_discount_amt1126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1733_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1733_output #Row: " << tbl_JOIN_INNER_TD_1733_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0875(Table &tbl_JOIN_INNER_TD_1733_output, Table &tbl_Aggregate_TD_0875_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(MakeDecimal(sum(UnscaledValue(cs_ext_discount_amt#1126)),17,2) AS excess discount amount#6324)
    // Input: ListBuffer(cs_ext_discount_amt#1126)
    // Output: ListBuffer(excess discount amount#6324)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_1733_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ext_discount_amt1126 = tbl_JOIN_INNER_TD_1733_output.getInt32(i, 0);
        int64_t _amount6324_sum_0 = _cs_ext_discount_amt1126;
        sum_0 += _amount6324_sum_0;
    }
    int r = 0;
    int32_t _amount6324 = sum_0;
    tbl_Aggregate_TD_0875_output.setInt32(r++, 0, _amount6324);
    tbl_Aggregate_TD_0875_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0875_output #Row: " << tbl_Aggregate_TD_0875_output.getNumRow() << std::endl;
}

