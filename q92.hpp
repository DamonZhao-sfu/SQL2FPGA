#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_6417(Table &tbl_SerializeFromObject_TD_7196_input, Table &tbl_Filter_TD_6417_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#10462) AND ((d_date#10462 >= 2000-01-27) AND (d_date#10462 <= 2000-04-26))) AND isnotnull(d_date_sk#10460)))
    // Input: ListBuffer(d_date_sk#10460, d_date#10462)
    // Output: ListBuffer(d_date_sk#10460)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7196_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date10462 = tbl_SerializeFromObject_TD_7196_input.getInt32(i, 1);
        int32_t _d_date_sk10460 = tbl_SerializeFromObject_TD_7196_input.getInt32(i, 0);
        if (((_d_date10462!= 0) && ((_d_date10462 >= 20000127) && (_d_date10462 <= 20000426))) && (_d_date_sk10460!= 0)) {
            int32_t _d_date_sk10460_t = tbl_SerializeFromObject_TD_7196_input.getInt32(i, 0);
            tbl_Filter_TD_6417_output.setInt32(r, 0, _d_date_sk10460_t);
            r++;
        }
    }
    tbl_Filter_TD_6417_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6417_output #Row: " << tbl_Filter_TD_6417_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6692(Table &tbl_SerializeFromObject_TD_793_input, Table &tbl_Filter_TD_6692_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#10426) AND isnotnull(ws_item_sk#10429)))
    // Input: ListBuffer(ws_sold_date_sk#10426, ws_item_sk#10429, ws_ext_discount_amt#10448)
    // Output: ListBuffer(ws_sold_date_sk#10426, ws_item_sk#10429, ws_ext_discount_amt#10448)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_793_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk10426 = tbl_SerializeFromObject_TD_793_input.getInt32(i, 0);
        int32_t _ws_item_sk10429 = tbl_SerializeFromObject_TD_793_input.getInt32(i, 1);
        if ((_ws_sold_date_sk10426!= 0) && (_ws_item_sk10429!= 0)) {
            int32_t _ws_sold_date_sk10426_t = tbl_SerializeFromObject_TD_793_input.getInt32(i, 0);
            tbl_Filter_TD_6692_output.setInt32(r, 0, _ws_sold_date_sk10426_t);
            int32_t _ws_item_sk10429_t = tbl_SerializeFromObject_TD_793_input.getInt32(i, 1);
            tbl_Filter_TD_6692_output.setInt32(r, 1, _ws_item_sk10429_t);
            int32_t _ws_ext_discount_amt10448_t = tbl_SerializeFromObject_TD_793_input.getInt32(i, 2);
            tbl_Filter_TD_6692_output.setInt32(r, 2, _ws_ext_discount_amt10448_t);
            r++;
        }
    }
    tbl_Filter_TD_6692_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6692_output #Row: " << tbl_Filter_TD_6692_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5214_key_leftMajor {
    int32_t _ws_sold_date_sk10426;
    bool operator==(const SW_JOIN_INNER_TD_5214_key_leftMajor& other) const {
        return ((_ws_sold_date_sk10426 == other._ws_sold_date_sk10426));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5214_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5214_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk10426));
    }
};
}
struct SW_JOIN_INNER_TD_5214_payload_leftMajor {
    int32_t _ws_sold_date_sk10426;
    int32_t _ws_item_sk10429;
    int32_t _ws_ext_discount_amt10448;
};
struct SW_JOIN_INNER_TD_5214_key_rightMajor {
    int32_t _d_date_sk10460;
    bool operator==(const SW_JOIN_INNER_TD_5214_key_rightMajor& other) const {
        return ((_d_date_sk10460 == other._d_date_sk10460));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5214_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5214_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk10460));
    }
};
}
struct SW_JOIN_INNER_TD_5214_payload_rightMajor {
    int32_t _d_date_sk10460;
};
void SW_JOIN_INNER_TD_5214(Table &tbl_Filter_TD_6692_output, Table &tbl_Filter_TD_6417_output, Table &tbl_JOIN_INNER_TD_5214_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#10460 = ws_sold_date_sk#10426))
    // Left Table: ListBuffer(ws_sold_date_sk#10426, ws_item_sk#10429, ws_ext_discount_amt#10448)
    // Right Table: ListBuffer(d_date_sk#10460)
    // Output Table: ListBuffer(ws_item_sk#10429, ws_ext_discount_amt#10448)
    int left_nrow = tbl_Filter_TD_6692_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6417_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5214_key_leftMajor, SW_JOIN_INNER_TD_5214_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6692_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk10426_k = tbl_Filter_TD_6692_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5214_key_leftMajor keyA{_ws_sold_date_sk10426_k};
            int32_t _ws_sold_date_sk10426 = tbl_Filter_TD_6692_output.getInt32(i, 0);
            int32_t _ws_item_sk10429 = tbl_Filter_TD_6692_output.getInt32(i, 1);
            int32_t _ws_ext_discount_amt10448 = tbl_Filter_TD_6692_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5214_payload_leftMajor payloadA{_ws_sold_date_sk10426, _ws_item_sk10429, _ws_ext_discount_amt10448};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6417_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk10460_k = tbl_Filter_TD_6417_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5214_key_leftMajor{_d_date_sk10460_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk10426 = (it->second)._ws_sold_date_sk10426;
                int32_t _ws_item_sk10429 = (it->second)._ws_item_sk10429;
                int32_t _ws_ext_discount_amt10448 = (it->second)._ws_ext_discount_amt10448;
                int32_t _d_date_sk10460 = tbl_Filter_TD_6417_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5214_output.setInt32(r, 0, _ws_item_sk10429);
                tbl_JOIN_INNER_TD_5214_output.setInt32(r, 1, _ws_ext_discount_amt10448);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5214_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5214_key_rightMajor, SW_JOIN_INNER_TD_5214_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6417_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk10460_k = tbl_Filter_TD_6417_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5214_key_rightMajor keyA{_d_date_sk10460_k};
            int32_t _d_date_sk10460 = tbl_Filter_TD_6417_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5214_payload_rightMajor payloadA{_d_date_sk10460};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6692_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk10426_k = tbl_Filter_TD_6692_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5214_key_rightMajor{_ws_sold_date_sk10426_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk10460 = (it->second)._d_date_sk10460;
                int32_t _ws_sold_date_sk10426 = tbl_Filter_TD_6692_output.getInt32(i, 0);
                int32_t _ws_item_sk10429 = tbl_Filter_TD_6692_output.getInt32(i, 1);
                int32_t _ws_ext_discount_amt10448 = tbl_Filter_TD_6692_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5214_output.setInt32(r, 0, _ws_item_sk10429);
                tbl_JOIN_INNER_TD_5214_output.setInt32(r, 1, _ws_ext_discount_amt10448);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5214_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5214_output #Row: " << tbl_JOIN_INNER_TD_5214_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_4641_key;
struct SW_Aggregate_TD_4641_payload {
    int32_t _avgws_ext_discount_amt10425_avg_0;
};
void SW_Aggregate_TD_4641(Table &tbl_JOIN_INNER_TD_5214_output, Table &tbl_Aggregate_TD_4641_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ws_item_sk#10429, CheckOverflow((1.300000 * promote_precision(cast((avg(UnscaledValue(ws_ext_discount_amt#10448)) / 100.0) as decimal(11,6)))), DecimalType(14,7), true) AS (1.3 * avg(ws_ext_discount_amt))#10425)
    // Input: ListBuffer(ws_item_sk#10429, ws_ext_discount_amt#10448)
    // Output: ListBuffer((1.3 * avg(ws_ext_discount_amt))#10425, ws_item_sk#10429)
    std::unordered_map<SW_Aggregate_TD_4641_key, SW_Aggregate_TD_4641_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5214_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk10429 = tbl_JOIN_INNER_TD_5214_output.getInt32(i, 0);
        int32_t _ws_ext_discount_amt10448 = tbl_JOIN_INNER_TD_5214_output.getInt32(i, 1);
        SW_Aggregate_TD_4641_key k = _ws_item_sk10429;
        int64_t _avgws_ext_discount_amt10425_avg_0 = _ws_ext_discount_amt10448;
        SW_Aggregate_TD_4641_payload p{_avgws_ext_discount_amt10425_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._avgws_ext_discount_amt10425_avg_0 + _avgws_ext_discount_amt10425_avg_0);
            p._avgws_ext_discount_amt10425_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_4641_output.setInt32(r, 1, (it.first));
        int32_t _avgws_ext_discount_amt10425 = (1.300000 * ((it.second)._avgws_ext_discount_amt10425_avg_0 / nrow1 / 100.0));
        tbl_Aggregate_TD_4641_output.setInt32(r, 0, _avgws_ext_discount_amt10425);
        ++r;
    }
    tbl_Aggregate_TD_4641_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4641_output #Row: " << tbl_Aggregate_TD_4641_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4778(Table &tbl_SerializeFromObject_TD_5586_input, Table &tbl_Filter_TD_4778_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manufact_id#241) AND (i_manufact_id#241 = 350)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_manufact_id#241)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5586_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_SerializeFromObject_TD_5586_input.getInt32(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_5586_input.getInt32(i, 0);
        if (((_i_manufact_id241!= 0) && (_i_manufact_id241 == 350)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_5586_input.getInt32(i, 0);
            tbl_Filter_TD_4778_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_4778_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4778_output #Row: " << tbl_Filter_TD_4778_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4498(Table &tbl_SerializeFromObject_TD_5186_input, Table &tbl_Filter_TD_4498_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND (isnotnull(ws_ext_discount_amt#751) AND isnotnull(ws_sold_date_sk#729))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ext_discount_amt#751)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ext_discount_amt#751)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5186_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_5186_input.getInt32(i, 1);
        int32_t _ws_ext_discount_amt751 = tbl_SerializeFromObject_TD_5186_input.getInt32(i, 2);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_5186_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && ((_ws_ext_discount_amt751!= 0) && (_ws_sold_date_sk729!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_5186_input.getInt32(i, 0);
            tbl_Filter_TD_4498_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_5186_input.getInt32(i, 1);
            tbl_Filter_TD_4498_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_ext_discount_amt751_t = tbl_SerializeFromObject_TD_5186_input.getInt32(i, 2);
            tbl_Filter_TD_4498_output.setInt32(r, 2, _ws_ext_discount_amt751_t);
            r++;
        }
    }
    tbl_Filter_TD_4498_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4498_output #Row: " << tbl_Filter_TD_4498_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3631(Table &tbl_Aggregate_TD_4641_output, Table &tbl_Filter_TD_3631_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull((1.3 * avg(ws_ext_discount_amt))#10425))
    // Input: ListBuffer((1.3 * avg(ws_ext_discount_amt))#10425, ws_item_sk#10429)
    // Output: ListBuffer((1.3 * avg(ws_ext_discount_amt))#10425, ws_item_sk#10429)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_4641_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _avgws_ext_discount_amt10425 = tbl_Aggregate_TD_4641_output.getInt32(i, 0);
        if (_avgws_ext_discount_amt10425!= 0) {
            int32_t _avgws_ext_discount_amt10425_t = tbl_Aggregate_TD_4641_output.getInt32(i, 0);
            tbl_Filter_TD_3631_output.setInt32(r, 0, _avgws_ext_discount_amt10425_t);
            int32_t _ws_item_sk10429_t = tbl_Aggregate_TD_4641_output.getInt32(i, 1);
            tbl_Filter_TD_3631_output.setInt32(r, 1, _ws_item_sk10429_t);
            r++;
        }
    }
    tbl_Filter_TD_3631_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3631_output #Row: " << tbl_Filter_TD_3631_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3671_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_3671_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3671_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3671_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_3671_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_ext_discount_amt751;
};
struct SW_JOIN_INNER_TD_3671_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_3671_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3671_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3671_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_3671_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_3671(Table &tbl_Filter_TD_4498_output, Table &tbl_Filter_TD_4778_output, Table &tbl_JOIN_INNER_TD_3671_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = ws_item_sk#732))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ext_discount_amt#751)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_ext_discount_amt#751, i_item_sk#228)
    int left_nrow = tbl_Filter_TD_4498_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4778_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3671_key_leftMajor, SW_JOIN_INNER_TD_3671_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_4498_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_4498_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3671_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_4498_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_4498_output.getInt32(i, 1);
            int32_t _ws_ext_discount_amt751 = tbl_Filter_TD_4498_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3671_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_ext_discount_amt751};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4778_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4778_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3671_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_ext_discount_amt751 = (it->second)._ws_ext_discount_amt751;
                int32_t _i_item_sk228 = tbl_Filter_TD_4778_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3671_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_3671_output.setInt32(r, 1, _ws_ext_discount_amt751);
                tbl_JOIN_INNER_TD_3671_output.setInt32(r, 2, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3671_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3671_key_rightMajor, SW_JOIN_INNER_TD_3671_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4778_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4778_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3671_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_4778_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3671_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4498_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_4498_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3671_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_4498_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_4498_output.getInt32(i, 1);
                int32_t _ws_ext_discount_amt751 = tbl_Filter_TD_4498_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3671_output.setInt32(r, 2, _i_item_sk228);
                tbl_JOIN_INNER_TD_3671_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_3671_output.setInt32(r, 1, _ws_ext_discount_amt751);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3671_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3671_output #Row: " << tbl_JOIN_INNER_TD_3671_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2801(Table &tbl_SerializeFromObject_TD_3435_input, Table &tbl_Filter_TD_2801_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-01-27) AND (d_date#122 <= 2000-04-26))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3435_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_3435_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_3435_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000127) && (_d_date122 <= 20000426))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_3435_input.getInt32(i, 0);
            tbl_Filter_TD_2801_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_2801_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2801_output #Row: " << tbl_Filter_TD_2801_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2104_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_2104_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2104_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2104_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_2104_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_ext_discount_amt751;
    int32_t _i_item_sk228;
};
struct SW_JOIN_INNER_TD_2104_key_rightMajor {
    int32_t _ws_item_sk10429;
    bool operator==(const SW_JOIN_INNER_TD_2104_key_rightMajor& other) const {
        return ((_ws_item_sk10429 == other._ws_item_sk10429));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2104_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2104_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk10429));
    }
};
}
struct SW_JOIN_INNER_TD_2104_payload_rightMajor {
    int32_t _avgws_ext_discount_amt10425;
    int32_t _ws_item_sk10429;
};
void SW_JOIN_INNER_TD_2104(Table &tbl_JOIN_INNER_TD_3671_output, Table &tbl_Filter_TD_3631_output, Table &tbl_JOIN_INNER_TD_2104_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cast(ws_ext_discount_amt#751 as decimal(14,7)) > (1.3 * avg(ws_ext_discount_amt))#10425) AND (ws_item_sk#10429 = i_item_sk#228)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_ext_discount_amt#751, i_item_sk#228)
    // Right Table: ListBuffer((1.3 * avg(ws_ext_discount_amt))#10425, ws_item_sk#10429)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_ext_discount_amt#751)
    int left_nrow = tbl_JOIN_INNER_TD_3671_output.getNumRow();
    int right_nrow = tbl_Filter_TD_3631_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2104_key_leftMajor, SW_JOIN_INNER_TD_2104_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3671_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_INNER_TD_3671_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_2104_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_3671_output.getInt32(i, 0);
            int32_t _ws_ext_discount_amt751 = tbl_JOIN_INNER_TD_3671_output.getInt32(i, 1);
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_3671_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_2104_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_ext_discount_amt751, _i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_3631_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk10429_k = tbl_Filter_TD_3631_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2104_key_leftMajor{_ws_item_sk10429_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_ext_discount_amt751 = (it->second)._ws_ext_discount_amt751;
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _avgws_ext_discount_amt10425 = tbl_Filter_TD_3631_output.getInt32(i, 0);
                int32_t _ws_item_sk10429 = tbl_Filter_TD_3631_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_2104_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_2104_output.setInt32(r, 1, _ws_ext_discount_amt751);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2104_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2104_key_rightMajor, SW_JOIN_INNER_TD_2104_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_3631_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk10429_k = tbl_Filter_TD_3631_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_2104_key_rightMajor keyA{_ws_item_sk10429_k};
            int32_t _avgws_ext_discount_amt10425 = tbl_Filter_TD_3631_output.getInt32(i, 0);
            int32_t _ws_item_sk10429 = tbl_Filter_TD_3631_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_2104_payload_rightMajor payloadA{_avgws_ext_discount_amt10425, _ws_item_sk10429};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3671_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_INNER_TD_3671_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2104_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _avgws_ext_discount_amt10425 = (it->second)._avgws_ext_discount_amt10425;
                int32_t _ws_item_sk10429 = (it->second)._ws_item_sk10429;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_3671_output.getInt32(i, 0);
                int32_t _ws_ext_discount_amt751 = tbl_JOIN_INNER_TD_3671_output.getInt32(i, 1);
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_3671_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_2104_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_2104_output.setInt32(r, 1, _ws_ext_discount_amt751);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2104_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2104_output #Row: " << tbl_JOIN_INNER_TD_2104_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1190_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_1190_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1190_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1190_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_1190_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_ext_discount_amt751;
};
struct SW_JOIN_INNER_TD_1190_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_1190_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1190_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1190_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_1190_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_1190(Table &tbl_JOIN_INNER_TD_2104_output, Table &tbl_Filter_TD_2801_output, Table &tbl_JOIN_INNER_TD_1190_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = ws_sold_date_sk#729))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_ext_discount_amt#751)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ws_ext_discount_amt#751)
    int left_nrow = tbl_JOIN_INNER_TD_2104_output.getNumRow();
    int right_nrow = tbl_Filter_TD_2801_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1190_key_leftMajor, SW_JOIN_INNER_TD_1190_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2104_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_2104_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1190_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_2104_output.getInt32(i, 0);
            int32_t _ws_ext_discount_amt751 = tbl_JOIN_INNER_TD_2104_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1190_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_ext_discount_amt751};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2801_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_2801_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1190_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_ext_discount_amt751 = (it->second)._ws_ext_discount_amt751;
                int32_t _d_date_sk120 = tbl_Filter_TD_2801_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1190_output.setInt32(r, 0, _ws_ext_discount_amt751);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1190_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1190_key_rightMajor, SW_JOIN_INNER_TD_1190_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_2801_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_2801_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1190_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_2801_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1190_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_2104_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_2104_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1190_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_2104_output.getInt32(i, 0);
                int32_t _ws_ext_discount_amt751 = tbl_JOIN_INNER_TD_2104_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_1190_output.setInt32(r, 0, _ws_ext_discount_amt751);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1190_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1190_output #Row: " << tbl_JOIN_INNER_TD_1190_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0642(Table &tbl_JOIN_INNER_TD_1190_output, Table &tbl_Aggregate_TD_0642_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(MakeDecimal(sum(UnscaledValue(ws_ext_discount_amt#751)),17,2) AS Excess Discount Amount#10422)
    // Input: ListBuffer(ws_ext_discount_amt#751)
    // Output: ListBuffer(Excess Discount Amount#10422)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_1190_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_discount_amt751 = tbl_JOIN_INNER_TD_1190_output.getInt32(i, 0);
        int64_t _Amount10422_sum_0 = _ws_ext_discount_amt751;
        sum_0 += _Amount10422_sum_0;
    }
    int r = 0;
    int32_t _Amount10422 = sum_0;
    tbl_Aggregate_TD_0642_output.setInt32(r++, 0, _Amount10422);
    tbl_Aggregate_TD_0642_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0642_output #Row: " << tbl_Aggregate_TD_0642_output.getNumRow() << std::endl;
}

