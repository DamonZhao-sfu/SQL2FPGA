#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9123(Table &tbl_SerializeFromObject_TD_10568_input, Table &tbl_Filter_TD_9123_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#6471) AND ((d_month_seq#6471 >= 1176) AND (d_month_seq#6471 <= 1187))) AND isnotnull(d_date_sk#6468)))
    // Input: ListBuffer(d_date_sk#6468, d_month_seq#6471)
    // Output: ListBuffer(d_date_sk#6468)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10568_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq6471 = tbl_SerializeFromObject_TD_10568_input.getInt32(i, 1);
        int32_t _d_date_sk6468 = tbl_SerializeFromObject_TD_10568_input.getInt32(i, 0);
        if (((_d_month_seq6471!= 0) && ((_d_month_seq6471 >= 1176) && (_d_month_seq6471 <= 1187))) && (_d_date_sk6468!= 0)) {
            int32_t _d_date_sk6468_t = tbl_SerializeFromObject_TD_10568_input.getInt32(i, 0);
            tbl_Filter_TD_9123_output.setInt32(r, 0, _d_date_sk6468_t);
            r++;
        }
    }
    tbl_Filter_TD_9123_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9123_output #Row: " << tbl_Filter_TD_9123_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9587(Table &tbl_SerializeFromObject_TD_10154_input, Table &tbl_Filter_TD_9587_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_sold_date_sk#6445) AND isnotnull(ss_store_sk#6452)) AND isnotnull(ss_item_sk#6447)))
    // Input: ListBuffer(ss_sold_date_sk#6445, ss_item_sk#6447, ss_store_sk#6452, ss_sales_price#6458)
    // Output: ListBuffer(ss_sold_date_sk#6445, ss_item_sk#6447, ss_store_sk#6452, ss_sales_price#6458)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10154_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk6445 = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 0);
        int32_t _ss_store_sk6452 = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 2);
        int32_t _ss_item_sk6447 = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 1);
        if (((_ss_sold_date_sk6445!= 0) && (_ss_store_sk6452!= 0)) && (_ss_item_sk6447!= 0)) {
            int32_t _ss_sold_date_sk6445_t = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 0);
            tbl_Filter_TD_9587_output.setInt32(r, 0, _ss_sold_date_sk6445_t);
            int32_t _ss_item_sk6447_t = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 1);
            tbl_Filter_TD_9587_output.setInt32(r, 1, _ss_item_sk6447_t);
            int32_t _ss_store_sk6452_t = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 2);
            tbl_Filter_TD_9587_output.setInt32(r, 2, _ss_store_sk6452_t);
            int32_t _ss_sales_price6458_t = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 3);
            tbl_Filter_TD_9587_output.setInt32(r, 3, _ss_sales_price6458_t);
            r++;
        }
    }
    tbl_Filter_TD_9587_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9587_output #Row: " << tbl_Filter_TD_9587_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8608_key_leftMajor {
    int32_t _ss_sold_date_sk6445;
    bool operator==(const SW_JOIN_INNER_TD_8608_key_leftMajor& other) const {
        return ((_ss_sold_date_sk6445 == other._ss_sold_date_sk6445));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8608_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8608_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk6445));
    }
};
}
struct SW_JOIN_INNER_TD_8608_payload_leftMajor {
    int32_t _ss_sold_date_sk6445;
    int32_t _ss_item_sk6447;
    int32_t _ss_store_sk6452;
    int32_t _ss_sales_price6458;
};
struct SW_JOIN_INNER_TD_8608_key_rightMajor {
    int32_t _d_date_sk6468;
    bool operator==(const SW_JOIN_INNER_TD_8608_key_rightMajor& other) const {
        return ((_d_date_sk6468 == other._d_date_sk6468));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8608_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8608_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6468));
    }
};
}
struct SW_JOIN_INNER_TD_8608_payload_rightMajor {
    int32_t _d_date_sk6468;
};
void SW_JOIN_INNER_TD_8608(Table &tbl_Filter_TD_9587_output, Table &tbl_Filter_TD_9123_output, Table &tbl_JOIN_INNER_TD_8608_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#6445 = d_date_sk#6468))
    // Left Table: ListBuffer(ss_sold_date_sk#6445, ss_item_sk#6447, ss_store_sk#6452, ss_sales_price#6458)
    // Right Table: ListBuffer(d_date_sk#6468)
    // Output Table: ListBuffer(ss_item_sk#6447, ss_store_sk#6452, ss_sales_price#6458)
    int left_nrow = tbl_Filter_TD_9587_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9123_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8608_key_leftMajor, SW_JOIN_INNER_TD_8608_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9587_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk6445_k = tbl_Filter_TD_9587_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8608_key_leftMajor keyA{_ss_sold_date_sk6445_k};
            int32_t _ss_sold_date_sk6445 = tbl_Filter_TD_9587_output.getInt32(i, 0);
            int32_t _ss_item_sk6447 = tbl_Filter_TD_9587_output.getInt32(i, 1);
            int32_t _ss_store_sk6452 = tbl_Filter_TD_9587_output.getInt32(i, 2);
            int32_t _ss_sales_price6458 = tbl_Filter_TD_9587_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8608_payload_leftMajor payloadA{_ss_sold_date_sk6445, _ss_item_sk6447, _ss_store_sk6452, _ss_sales_price6458};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9123_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6468_k = tbl_Filter_TD_9123_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8608_key_leftMajor{_d_date_sk6468_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk6445 = (it->second)._ss_sold_date_sk6445;
                int32_t _ss_item_sk6447 = (it->second)._ss_item_sk6447;
                int32_t _ss_store_sk6452 = (it->second)._ss_store_sk6452;
                int32_t _ss_sales_price6458 = (it->second)._ss_sales_price6458;
                int32_t _d_date_sk6468 = tbl_Filter_TD_9123_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8608_output.setInt32(r, 0, _ss_item_sk6447);
                tbl_JOIN_INNER_TD_8608_output.setInt32(r, 1, _ss_store_sk6452);
                tbl_JOIN_INNER_TD_8608_output.setInt32(r, 2, _ss_sales_price6458);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8608_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8608_key_rightMajor, SW_JOIN_INNER_TD_8608_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9123_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6468_k = tbl_Filter_TD_9123_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8608_key_rightMajor keyA{_d_date_sk6468_k};
            int32_t _d_date_sk6468 = tbl_Filter_TD_9123_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8608_payload_rightMajor payloadA{_d_date_sk6468};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9587_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk6445_k = tbl_Filter_TD_9587_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8608_key_rightMajor{_ss_sold_date_sk6445_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6468 = (it->second)._d_date_sk6468;
                int32_t _ss_sold_date_sk6445 = tbl_Filter_TD_9587_output.getInt32(i, 0);
                int32_t _ss_item_sk6447 = tbl_Filter_TD_9587_output.getInt32(i, 1);
                int32_t _ss_store_sk6452 = tbl_Filter_TD_9587_output.getInt32(i, 2);
                int32_t _ss_sales_price6458 = tbl_Filter_TD_9587_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8608_output.setInt32(r, 0, _ss_item_sk6447);
                tbl_JOIN_INNER_TD_8608_output.setInt32(r, 1, _ss_store_sk6452);
                tbl_JOIN_INNER_TD_8608_output.setInt32(r, 2, _ss_sales_price6458);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8608_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8608_output #Row: " << tbl_JOIN_INNER_TD_8608_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7434(Table &tbl_SerializeFromObject_TD_8241_input, Table &tbl_Filter_TD_7434_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1176) AND (d_month_seq#123 <= 1187))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8241_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_8241_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8241_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && ((_d_month_seq123 >= 1176) && (_d_month_seq123 <= 1187))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8241_input.getInt32(i, 0);
            tbl_Filter_TD_7434_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7434_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7434_output #Row: " << tbl_Filter_TD_7434_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7289(Table &tbl_SerializeFromObject_TD_8387_input, Table &tbl_Filter_TD_7289_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8387_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_8387_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_8387_input.getInt32(i, 2);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_8387_input.getInt32(i, 0);
            tbl_Filter_TD_7289_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_8387_input.getInt32(i, 1);
            tbl_Filter_TD_7289_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_8387_input.getInt32(i, 2);
            tbl_Filter_TD_7289_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_8387_input.getInt32(i, 3);
            tbl_Filter_TD_7289_output.setInt32(r, 3, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_7289_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7289_output #Row: " << tbl_Filter_TD_7289_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7996_key {
    int32_t _ss_store_sk6452;
    int32_t _ss_item_sk6447;
    bool operator==(const SW_Aggregate_TD_7996_key& other) const { return (_ss_store_sk6452 == other._ss_store_sk6452) && (_ss_item_sk6447 == other._ss_item_sk6447); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7996_key> {
    std::size_t operator() (const SW_Aggregate_TD_7996_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk6452)) + (hash<int32_t>()(k._ss_item_sk6447));
    }
};
}
struct SW_Aggregate_TD_7996_payload {
    int32_t _revenue6444_sum_0;
};
void SW_Aggregate_TD_7996(Table &tbl_JOIN_INNER_TD_8608_output, Table &tbl_Aggregate_TD_7996_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_store_sk#6452, ss_item_sk#6447, MakeDecimal(sum(UnscaledValue(ss_sales_price#6458)),17,2) AS revenue#6444)
    // Input: ListBuffer(ss_item_sk#6447, ss_store_sk#6452, ss_sales_price#6458)
    // Output: ListBuffer(ss_store_sk#6452, ss_item_sk#6447, revenue#6444)
    std::unordered_map<SW_Aggregate_TD_7996_key, SW_Aggregate_TD_7996_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8608_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk6447 = tbl_JOIN_INNER_TD_8608_output.getInt32(i, 0);
        int32_t _ss_store_sk6452 = tbl_JOIN_INNER_TD_8608_output.getInt32(i, 1);
        int32_t _ss_sales_price6458 = tbl_JOIN_INNER_TD_8608_output.getInt32(i, 2);
        SW_Aggregate_TD_7996_key k{_ss_store_sk6452, _ss_item_sk6447};
        int64_t _revenue6444_sum_0 = _ss_sales_price6458;
        SW_Aggregate_TD_7996_payload p{_revenue6444_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._revenue6444_sum_0 + _revenue6444_sum_0;
            p._revenue6444_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_7996_output.setInt32(r, 0, (it.first)._ss_store_sk6452);
        tbl_Aggregate_TD_7996_output.setInt32(r, 1, (it.first)._ss_item_sk6447);
        int32_t _revenue6444 = (it.second)._revenue6444_sum_0;
        tbl_Aggregate_TD_7996_output.setInt32(r, 2, _revenue6444);
        ++r;
    }
    tbl_Aggregate_TD_7996_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7996_output #Row: " << tbl_Aggregate_TD_7996_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6130_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_6130_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6130_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6130_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_6130_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_6130_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6130_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6130_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6130_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6130_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_6130(Table &tbl_Filter_TD_7289_output, Table &tbl_Filter_TD_7434_output, Table &tbl_JOIN_INNER_TD_6130_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int left_nrow = tbl_Filter_TD_7289_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7434_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6130_key_leftMajor, SW_JOIN_INNER_TD_6130_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7289_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_7289_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6130_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_7289_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_7289_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_7289_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_7289_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6130_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7434_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7434_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6130_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_7434_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6130_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6130_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6130_output.setInt32(r, 2, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6130_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6130_key_rightMajor, SW_JOIN_INNER_TD_6130_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7434_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7434_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6130_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7434_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6130_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7289_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_7289_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6130_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_7289_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_7289_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_7289_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_7289_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6130_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6130_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6130_output.setInt32(r, 2, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6130_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6130_output #Row: " << tbl_JOIN_INNER_TD_6130_output.getNumRow() << std::endl;
}

void SW_Filter_TD_663(Table &tbl_Aggregate_TD_7996_output, Table &tbl_Filter_TD_663_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(revenue#6444))
    // Input: ListBuffer(ss_store_sk#6452, ss_item_sk#6447, revenue#6444)
    // Output: ListBuffer(ss_store_sk#6452, ss_item_sk#6447, revenue#6444)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7996_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _revenue6444 = tbl_Aggregate_TD_7996_output.getInt32(i, 2);
        if (_revenue6444!= 0) {
            int32_t _ss_store_sk6452_t = tbl_Aggregate_TD_7996_output.getInt32(i, 0);
            tbl_Filter_TD_663_output.setInt32(r, 0, _ss_store_sk6452_t);
            int32_t _ss_item_sk6447_t = tbl_Aggregate_TD_7996_output.getInt32(i, 1);
            tbl_Filter_TD_663_output.setInt32(r, 1, _ss_item_sk6447_t);
            int32_t _revenue6444_t = tbl_Aggregate_TD_7996_output.getInt32(i, 2);
            tbl_Filter_TD_663_output.setInt32(r, 2, _revenue6444_t);
            r++;
        }
    }
    tbl_Filter_TD_663_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_663_output #Row: " << tbl_Filter_TD_663_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6343(Table &tbl_SerializeFromObject_TD_7279_input, Table &tbl_Filter_TD_6343_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383)
    // Output: ListBuffer(s_store_sk#378, s_store_name#383)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7279_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_7279_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_7279_input.getInt32(i, 0);
            tbl_Filter_TD_6343_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_7279_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6343_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_t);
            r++;
        }
    }
    tbl_Filter_TD_6343_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6343_output #Row: " << tbl_Filter_TD_6343_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_538_key {
    int32_t _ss_store_sk1213;
    int32_t _ss_item_sk1208;
    bool operator==(const SW_Aggregate_TD_538_key& other) const { return (_ss_store_sk1213 == other._ss_store_sk1213) && (_ss_item_sk1208 == other._ss_item_sk1208); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_538_key> {
    std::size_t operator() (const SW_Aggregate_TD_538_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213)) + (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_Aggregate_TD_538_payload {
    int32_t _revenue6442_sum_0;
};
void SW_Aggregate_TD_538(Table &tbl_JOIN_INNER_TD_6130_output, Table &tbl_Aggregate_TD_538_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_store_sk#1213, ss_item_sk#1208, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS revenue#6442)
    // Input: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_store_sk#1213, revenue#6442)
    std::unordered_map<SW_Aggregate_TD_538_key, SW_Aggregate_TD_538_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6130_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6130_output.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6130_output.getInt32(i, 1);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6130_output.getInt32(i, 2);
        SW_Aggregate_TD_538_key k{_ss_store_sk1213, _ss_item_sk1208};
        int64_t _revenue6442_sum_0 = _ss_sales_price1219;
        SW_Aggregate_TD_538_payload p{_revenue6442_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._revenue6442_sum_0 + _revenue6442_sum_0;
            p._revenue6442_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_538_output.setInt32(r, 0, (it.first)._ss_store_sk1213);
        // _ss_item_sk1208 not required in the output table
        int32_t _revenue6442 = (it.second)._revenue6442_sum_0;
        tbl_Aggregate_TD_538_output.setInt32(r, 1, _revenue6442);
        ++r;
    }
    tbl_Aggregate_TD_538_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_538_output #Row: " << tbl_Aggregate_TD_538_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5491(Table &tbl_SerializeFromObject_TD_6849_input, Table &tbl_Filter_TD_5491_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_desc#232, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    // Output: ListBuffer(i_item_sk#228, i_item_desc#232, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6849_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_6849_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_6849_input.getInt32(i, 0);
            tbl_Filter_TD_5491_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_6849_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5491_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_t);
            int32_t _i_current_price233_t = tbl_SerializeFromObject_TD_6849_input.getInt32(i, 2);
            tbl_Filter_TD_5491_output.setInt32(r, 2, _i_current_price233_t);
            int32_t _i_wholesale_cost234_t = tbl_SerializeFromObject_TD_6849_input.getInt32(i, 3);
            tbl_Filter_TD_5491_output.setInt32(r, 3, _i_wholesale_cost234_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_6849_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_5491_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_brand236_t);
            r++;
        }
    }
    tbl_Filter_TD_5491_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5491_output #Row: " << tbl_Filter_TD_5491_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5543_key_leftMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_5543_key_leftMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5543_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5543_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_5543_payload_leftMajor {
    int32_t _s_store_sk378;
    std::string _s_store_name383;
};
struct SW_JOIN_INNER_TD_5543_key_rightMajor {
    int32_t _ss_store_sk6452;
    bool operator==(const SW_JOIN_INNER_TD_5543_key_rightMajor& other) const {
        return ((_ss_store_sk6452 == other._ss_store_sk6452));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5543_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5543_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk6452));
    }
};
}
struct SW_JOIN_INNER_TD_5543_payload_rightMajor {
    int32_t _ss_store_sk6452;
    int32_t _ss_item_sk6447;
    int32_t _revenue6444;
};
void SW_JOIN_INNER_TD_5543(Table &tbl_Filter_TD_6343_output, Table &tbl_Filter_TD_663_output, Table &tbl_JOIN_INNER_TD_5543_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_store_sk#378 = ss_store_sk#6452))
    // Left Table: ListBuffer(s_store_sk#378, s_store_name#383)
    // Right Table: ListBuffer(ss_store_sk#6452, ss_item_sk#6447, revenue#6444)
    // Output Table: ListBuffer(s_store_name#383, ss_store_sk#6452, ss_item_sk#6447, revenue#6444)
    int left_nrow = tbl_Filter_TD_6343_output.getNumRow();
    int right_nrow = tbl_Filter_TD_663_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5543_key_leftMajor, SW_JOIN_INNER_TD_5543_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6343_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6343_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5543_key_leftMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_6343_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            SW_JOIN_INNER_TD_5543_payload_leftMajor payloadA{_s_store_sk378, _s_store_name383};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_663_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk6452_k = tbl_Filter_TD_663_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5543_key_leftMajor{_ss_store_sk6452_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                int32_t _ss_store_sk6452 = tbl_Filter_TD_663_output.getInt32(i, 0);
                int32_t _ss_item_sk6447 = tbl_Filter_TD_663_output.getInt32(i, 1);
                int32_t _revenue6444 = tbl_Filter_TD_663_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5543_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5543_output.setInt32(r, 1, _ss_store_sk6452);
                tbl_JOIN_INNER_TD_5543_output.setInt32(r, 2, _ss_item_sk6447);
                tbl_JOIN_INNER_TD_5543_output.setInt32(r, 3, _revenue6444);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5543_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5543_key_rightMajor, SW_JOIN_INNER_TD_5543_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_663_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk6452_k = tbl_Filter_TD_663_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5543_key_rightMajor keyA{_ss_store_sk6452_k};
            int32_t _ss_store_sk6452 = tbl_Filter_TD_663_output.getInt32(i, 0);
            int32_t _ss_item_sk6447 = tbl_Filter_TD_663_output.getInt32(i, 1);
            int32_t _revenue6444 = tbl_Filter_TD_663_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5543_payload_rightMajor payloadA{_ss_store_sk6452, _ss_item_sk6447, _revenue6444};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6343_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6343_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5543_key_rightMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk6452 = (it->second)._ss_store_sk6452;
                int32_t _ss_item_sk6447 = (it->second)._ss_item_sk6447;
                int32_t _revenue6444 = (it->second)._revenue6444;
                int32_t _s_store_sk378 = tbl_Filter_TD_6343_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                tbl_JOIN_INNER_TD_5543_output.setInt32(r, 1, _ss_store_sk6452);
                tbl_JOIN_INNER_TD_5543_output.setInt32(r, 2, _ss_item_sk6447);
                tbl_JOIN_INNER_TD_5543_output.setInt32(r, 3, _revenue6444);
                tbl_JOIN_INNER_TD_5543_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5543_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5543_output #Row: " << tbl_JOIN_INNER_TD_5543_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_438_key;
struct SW_Aggregate_TD_438_payload {
    int32_t _ave6443_avg_0;
};
void SW_Aggregate_TD_438(Table &tbl_Aggregate_TD_538_output, Table &tbl_Aggregate_TD_438_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_store_sk#1213, avg(revenue#6442) AS ave#6443)
    // Input: ListBuffer(ss_store_sk#1213, revenue#6442)
    // Output: ListBuffer(ss_store_sk#1213, ave#6443)
    std::unordered_map<SW_Aggregate_TD_438_key, SW_Aggregate_TD_438_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_538_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_Aggregate_TD_538_output.getInt32(i, 0);
        int32_t _revenue6442 = tbl_Aggregate_TD_538_output.getInt32(i, 1);
        SW_Aggregate_TD_438_key k = _ss_store_sk1213;
        int64_t _ave6443_avg_0 = _revenue6442;
        SW_Aggregate_TD_438_payload p{_ave6443_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._ave6443_avg_0 + _ave6443_avg_0);
            p._ave6443_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_438_output.setInt32(r, 0, (it.first));
        int32_t _ave6443 = (it.second)._ave6443_avg_0 / nrow1;
        tbl_Aggregate_TD_438_output.setInt32(r, 1, _ave6443);
        ++r;
    }
    tbl_Aggregate_TD_438_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_438_output #Row: " << tbl_Aggregate_TD_438_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_418_key_leftMajor {
    int32_t _ss_item_sk6447;
    bool operator==(const SW_JOIN_INNER_TD_418_key_leftMajor& other) const {
        return ((_ss_item_sk6447 == other._ss_item_sk6447));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_418_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_418_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk6447));
    }
};
}
struct SW_JOIN_INNER_TD_418_payload_leftMajor {
    std::string _s_store_name383;
    int32_t _ss_store_sk6452;
    int32_t _ss_item_sk6447;
    int32_t _revenue6444;
};
struct SW_JOIN_INNER_TD_418_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_418_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_418_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_418_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_418_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    int32_t _i_wholesale_cost234;
    std::string _i_brand236;
};
void SW_JOIN_INNER_TD_418(Table &tbl_JOIN_INNER_TD_5543_output, Table &tbl_Filter_TD_5491_output, Table &tbl_JOIN_INNER_TD_418_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = ss_item_sk#6447))
    // Left Table: ListBuffer(s_store_name#383, ss_store_sk#6452, ss_item_sk#6447, revenue#6444)
    // Right Table: ListBuffer(i_item_sk#228, i_item_desc#232, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    // Output Table: ListBuffer(s_store_name#383, ss_store_sk#6452, revenue#6444, i_item_desc#232, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    int left_nrow = tbl_JOIN_INNER_TD_5543_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5491_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_418_key_leftMajor, SW_JOIN_INNER_TD_418_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5543_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk6447_k = tbl_JOIN_INNER_TD_5543_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_418_key_leftMajor keyA{_ss_item_sk6447_k};
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5543_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            int32_t _ss_store_sk6452 = tbl_JOIN_INNER_TD_5543_output.getInt32(i, 1);
            int32_t _ss_item_sk6447 = tbl_JOIN_INNER_TD_5543_output.getInt32(i, 2);
            int32_t _revenue6444 = tbl_JOIN_INNER_TD_5543_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_418_payload_leftMajor payloadA{_s_store_name383, _ss_store_sk6452, _ss_item_sk6447, _revenue6444};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5491_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5491_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_418_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                int32_t _ss_store_sk6452 = (it->second)._ss_store_sk6452;
                int32_t _ss_item_sk6447 = (it->second)._ss_item_sk6447;
                int32_t _revenue6444 = (it->second)._revenue6444;
                int32_t _i_item_sk228 = tbl_Filter_TD_5491_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_5491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_Filter_TD_5491_output.getInt32(i, 2);
                int32_t _i_wholesale_cost234 = tbl_Filter_TD_5491_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_5491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                tbl_JOIN_INNER_TD_418_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
                tbl_JOIN_INNER_TD_418_output.setInt32(r, 1, _ss_store_sk6452);
                tbl_JOIN_INNER_TD_418_output.setInt32(r, 2, _revenue6444);
                tbl_JOIN_INNER_TD_418_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_418_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_418_output.setInt32(r, 5, _i_wholesale_cost234);
                tbl_JOIN_INNER_TD_418_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_brand236_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_418_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_418_key_rightMajor, SW_JOIN_INNER_TD_418_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5491_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5491_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_418_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_5491_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_5491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_Filter_TD_5491_output.getInt32(i, 2);
            int32_t _i_wholesale_cost234 = tbl_Filter_TD_5491_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_5491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            SW_JOIN_INNER_TD_418_payload_rightMajor payloadA{_i_item_sk228, _i_item_desc232, _i_current_price233, _i_wholesale_cost234, _i_brand236};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5543_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk6447_k = tbl_JOIN_INNER_TD_5543_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_418_key_rightMajor{_ss_item_sk6447_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                int32_t _i_wholesale_cost234 = (it->second)._i_wholesale_cost234;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5543_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                int32_t _ss_store_sk6452 = tbl_JOIN_INNER_TD_5543_output.getInt32(i, 1);
                int32_t _ss_item_sk6447 = tbl_JOIN_INNER_TD_5543_output.getInt32(i, 2);
                int32_t _revenue6444 = tbl_JOIN_INNER_TD_5543_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_418_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_418_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_418_output.setInt32(r, 5, _i_wholesale_cost234);
                tbl_JOIN_INNER_TD_418_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_brand236_n);
                tbl_JOIN_INNER_TD_418_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
                tbl_JOIN_INNER_TD_418_output.setInt32(r, 1, _ss_store_sk6452);
                tbl_JOIN_INNER_TD_418_output.setInt32(r, 2, _revenue6444);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_418_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_418_output #Row: " << tbl_JOIN_INNER_TD_418_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3541_key_leftMajor {
    int32_t _ss_store_sk6452;
    bool operator==(const SW_JOIN_INNER_TD_3541_key_leftMajor& other) const {
        return ((_ss_store_sk6452 == other._ss_store_sk6452));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3541_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3541_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk6452));
    }
};
}
struct SW_JOIN_INNER_TD_3541_payload_leftMajor {
    std::string _s_store_name383;
    int32_t _ss_store_sk6452;
    int32_t _revenue6444;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    int32_t _i_wholesale_cost234;
    std::string _i_brand236;
};
struct SW_JOIN_INNER_TD_3541_key_rightMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_3541_key_rightMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3541_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3541_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_3541_payload_rightMajor {
    int32_t _ss_store_sk1213;
    int32_t _ave6443;
};
void SW_JOIN_INNER_TD_3541(Table &tbl_JOIN_INNER_TD_418_output, Table &tbl_Aggregate_TD_438_output, Table &tbl_JOIN_INNER_TD_3541_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ss_store_sk#1213 = ss_store_sk#6452) AND (cast(revenue#6444 as decimal(23,7)) <= CheckOverflow((0.100000 * promote_precision(ave#6443)), DecimalType(23,7), true))))
    // Left Table: ListBuffer(s_store_name#383, ss_store_sk#6452, revenue#6444, i_item_desc#232, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    // Right Table: ListBuffer(ss_store_sk#1213, ave#6443)
    // Output Table: ListBuffer(s_store_name#383, i_item_desc#232, revenue#6444, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    int left_nrow = tbl_JOIN_INNER_TD_418_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_438_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3541_key_leftMajor, SW_JOIN_INNER_TD_3541_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_418_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk6452_k = tbl_JOIN_INNER_TD_418_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3541_key_leftMajor keyA{_ss_store_sk6452_k};
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            int32_t _ss_store_sk6452 = tbl_JOIN_INNER_TD_418_output.getInt32(i, 1);
            int32_t _revenue6444 = tbl_JOIN_INNER_TD_418_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_418_output.getInt32(i, 4);
            int32_t _i_wholesale_cost234 = tbl_JOIN_INNER_TD_418_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            SW_JOIN_INNER_TD_3541_payload_leftMajor payloadA{_s_store_name383, _ss_store_sk6452, _revenue6444, _i_item_desc232, _i_current_price233, _i_wholesale_cost234, _i_brand236};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_438_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_Aggregate_TD_438_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3541_key_leftMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                int32_t _ss_store_sk6452 = (it->second)._ss_store_sk6452;
                int32_t _revenue6444 = (it->second)._revenue6444;
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                int32_t _i_wholesale_cost234 = (it->second)._i_wholesale_cost234;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int32_t _ss_store_sk1213 = tbl_Aggregate_TD_438_output.getInt32(i, 0);
                int32_t _ave6443 = tbl_Aggregate_TD_438_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
                tbl_JOIN_INNER_TD_3541_output.setInt32(r, 2, _revenue6444);
                tbl_JOIN_INNER_TD_3541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_3541_output.setInt32(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_3541_output.setInt32(r, 4, _i_wholesale_cost234);
                tbl_JOIN_INNER_TD_3541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_brand236_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3541_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3541_key_rightMajor, SW_JOIN_INNER_TD_3541_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_438_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_Aggregate_TD_438_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3541_key_rightMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_store_sk1213 = tbl_Aggregate_TD_438_output.getInt32(i, 0);
            int32_t _ave6443 = tbl_Aggregate_TD_438_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3541_payload_rightMajor payloadA{_ss_store_sk1213, _ave6443};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_418_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk6452_k = tbl_JOIN_INNER_TD_418_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3541_key_rightMajor{_ss_store_sk6452_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ave6443 = (it->second)._ave6443;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                int32_t _ss_store_sk6452 = tbl_JOIN_INNER_TD_418_output.getInt32(i, 1);
                int32_t _revenue6444 = tbl_JOIN_INNER_TD_418_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_418_output.getInt32(i, 4);
                int32_t _i_wholesale_cost234 = tbl_JOIN_INNER_TD_418_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                tbl_JOIN_INNER_TD_3541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
                tbl_JOIN_INNER_TD_3541_output.setInt32(r, 2, _revenue6444);
                tbl_JOIN_INNER_TD_3541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_3541_output.setInt32(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_3541_output.setInt32(r, 4, _i_wholesale_cost234);
                tbl_JOIN_INNER_TD_3541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_brand236_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3541_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3541_output #Row: " << tbl_JOIN_INNER_TD_3541_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2968(Table &tbl_JOIN_INNER_TD_3541_output, Table &tbl_Sort_TD_2968_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(s_store_name#383 ASC NULLS FIRST, i_item_desc#232 ASC NULLS FIRST)
    // Input: ListBuffer(s_store_name#383, i_item_desc#232, revenue#6444, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    // Output: ListBuffer(s_store_name#383, i_item_desc#232, revenue#6444, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    struct SW_Sort_TD_2968Row {
        std::string _s_store_name383;
        std::string _i_item_desc232;
        int32_t _revenue6444;
        int32_t _i_current_price233;
        int32_t _i_wholesale_cost234;
        std::string _i_brand236;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2968Row& a, const SW_Sort_TD_2968Row& b) const { return 
 (a._s_store_name383 < b._s_store_name383) || 
 ((a._s_store_name383 == b._s_store_name383) && (a._i_item_desc232 < b._i_item_desc232)); 
}
    }SW_Sort_TD_2968_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3541_output.getNumRow();
    std::vector<SW_Sort_TD_2968Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_3541_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_3541_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _revenue6444 = tbl_JOIN_INNER_TD_3541_output.getInt32(i, 2);
        int32_t _i_current_price233 = tbl_JOIN_INNER_TD_3541_output.getInt32(i, 3);
        int32_t _i_wholesale_cost234 = tbl_JOIN_INNER_TD_3541_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_3541_output.getcharN<char, TPCDS_READ_MAX +1>(i, 5);
        SW_Sort_TD_2968Row t = {std::string(_s_store_name383.data()),std::string(_i_item_desc232.data()),_revenue6444,_i_current_price233,_i_wholesale_cost234,std::string(_i_brand236.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2968_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), (it._s_store_name383).data(), (it._s_store_name383).length());
        tbl_Sort_TD_2968_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_2968_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_desc232);
        tbl_Sort_TD_2968_output.setInt32(r, 2, it._revenue6444);
        tbl_Sort_TD_2968_output.setInt32(r, 3, it._i_current_price233);
        tbl_Sort_TD_2968_output.setInt32(r, 4, it._i_wholesale_cost234);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), (it._i_brand236).data(), (it._i_brand236).length());
        tbl_Sort_TD_2968_output.setcharN<char, TPCDS_READ_MAX +1>(r, 5, _i_brand236);
        ++r;
    }
    tbl_Sort_TD_2968_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2968_output #Row: " << tbl_Sort_TD_2968_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_148(Table &tbl_Sort_TD_2968_output, Table &tbl_LocalLimit_TD_148_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(s_store_name#383, i_item_desc#232, revenue#6444, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    // Output: ListBuffer(s_store_name#383, i_item_desc#232, revenue#6444, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Sort_TD_2968_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_148_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Sort_TD_2968_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_148_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        tbl_LocalLimit_TD_148_output.setInt32(r, 2, tbl_Sort_TD_2968_output.getInt32(i, 2));
        tbl_LocalLimit_TD_148_output.setInt32(r, 3, tbl_Sort_TD_2968_output.getInt32(i, 3));
        tbl_LocalLimit_TD_148_output.setInt32(r, 4, tbl_Sort_TD_2968_output.getInt32(i, 4));
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Sort_TD_2968_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_LocalLimit_TD_148_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_brand236_n);
        r++;
    }
    tbl_LocalLimit_TD_148_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_148_output #Row: " << tbl_LocalLimit_TD_148_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0708(Table &tbl_LocalLimit_TD_148_output, Table &tbl_GlobalLimit_TD_0708_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(s_store_name#383, i_item_desc#232, revenue#6444, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    // Output: ListBuffer(s_store_name#383, i_item_desc#232, revenue#6444, i_current_price#233, i_wholesale_cost#234, i_brand#236)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_LocalLimit_TD_148_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0708_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_LocalLimit_TD_148_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0708_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        tbl_GlobalLimit_TD_0708_output.setInt32(r, 2, tbl_LocalLimit_TD_148_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0708_output.setInt32(r, 3, tbl_LocalLimit_TD_148_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0708_output.setInt32(r, 4, tbl_LocalLimit_TD_148_output.getInt32(i, 4));
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_LocalLimit_TD_148_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_GlobalLimit_TD_0708_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_brand236_n);
        r++;
    }
    tbl_GlobalLimit_TD_0708_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0708_output #Row: " << tbl_GlobalLimit_TD_0708_output.getNumRow() << std::endl;
}

