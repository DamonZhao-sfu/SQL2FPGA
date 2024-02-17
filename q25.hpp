#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11669(Table &tbl_SerializeFromObject_TD_12480_input, Table &tbl_Filter_TD_11669_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(sr_customer_sk#672) AND isnotnull(sr_item_sk#671)) AND isnotnull(sr_ticket_number#678L)) AND isnotnull(sr_returned_date_sk#669)))
    // Input: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_ticket_number#678L, sr_net_loss#688)
    // Output: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_ticket_number#678L, sr_net_loss#688)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12480_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_customer_sk672 = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 2);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 1);
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_12480_input.getInt64(i, 3);
        int32_t _sr_returned_date_sk669 = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 0);
        if ((((_sr_customer_sk672!= 0) && (_sr_item_sk671!= 0)) && (_sr_ticket_number678L!= 0)) && (_sr_returned_date_sk669!= 0)) {
            int32_t _sr_returned_date_sk669_t = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 0);
            tbl_Filter_TD_11669_output.setInt32(r, 0, _sr_returned_date_sk669_t);
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 1);
            tbl_Filter_TD_11669_output.setInt32(r, 1, _sr_item_sk671_t);
            int32_t _sr_customer_sk672_t = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 2);
            tbl_Filter_TD_11669_output.setInt32(r, 2, _sr_customer_sk672_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_12480_input.getInt64(i, 3);
            tbl_Filter_TD_11669_output.setInt64(r, 3, _sr_ticket_number678L_t);
            int32_t _sr_net_loss688_t = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 4);
            tbl_Filter_TD_11669_output.setInt32(r, 4, _sr_net_loss688_t);
            r++;
        }
    }
    tbl_Filter_TD_11669_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11669_output #Row: " << tbl_Filter_TD_11669_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11915(Table &tbl_SerializeFromObject_TD_12431_input, Table &tbl_Filter_TD_11915_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ss_customer_sk#1209) AND isnotnull(ss_item_sk#1208)) AND isnotnull(ss_ticket_number#1215L)) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12431_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_12431_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_12431_input.getInt32(i, 1);
        int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_12431_input.getInt64(i, 4);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12431_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12431_input.getInt32(i, 3);
        if ((((_ss_customer_sk1209!= 0) && (_ss_item_sk1208!= 0)) && (_ss_ticket_number1215L!= 0)) && ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12431_input.getInt32(i, 0);
            tbl_Filter_TD_11915_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_12431_input.getInt32(i, 1);
            tbl_Filter_TD_11915_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_12431_input.getInt32(i, 2);
            tbl_Filter_TD_11915_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_12431_input.getInt32(i, 3);
            tbl_Filter_TD_11915_output.setInt32(r, 3, _ss_store_sk1213_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_12431_input.getInt64(i, 4);
            tbl_Filter_TD_11915_output.setInt64(r, 4, _ss_ticket_number1215L_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_12431_input.getInt32(i, 5);
            tbl_Filter_TD_11915_output.setInt32(r, 5, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_11915_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11915_output #Row: " << tbl_Filter_TD_11915_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10378(Table &tbl_SerializeFromObject_TD_11990_input, Table &tbl_Filter_TD_10378_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_bill_customer_sk#1107) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_net_profit#1137)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_net_profit#1137)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11990_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_11990_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_11990_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_11990_input.getInt32(i, 0);
        if (((_cs_bill_customer_sk1107!= 0) && (_cs_item_sk1119!= 0)) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_11990_input.getInt32(i, 0);
            tbl_Filter_TD_10378_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_11990_input.getInt32(i, 1);
            tbl_Filter_TD_10378_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_11990_input.getInt32(i, 2);
            tbl_Filter_TD_10378_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_net_profit1137_t = tbl_SerializeFromObject_TD_11990_input.getInt32(i, 3);
            tbl_Filter_TD_10378_output.setInt32(r, 3, _cs_net_profit1137_t);
            r++;
        }
    }
    tbl_Filter_TD_10378_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10378_output #Row: " << tbl_Filter_TD_10378_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10467_key_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_item_sk1208;
    int64_t _ss_ticket_number1215L;
    bool operator==(const SW_JOIN_INNER_TD_10467_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209) && (_ss_item_sk1208 == other._ss_item_sk1208) && (_ss_ticket_number1215L == other._ss_ticket_number1215L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10467_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10467_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209)) + (hash<int32_t>()(k._ss_item_sk1208)) + (hash<int64_t>()(k._ss_ticket_number1215L));
    }
};
}
struct SW_JOIN_INNER_TD_10467_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_10467_key_rightMajor {
    int32_t _sr_customer_sk672;
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    bool operator==(const SW_JOIN_INNER_TD_10467_key_rightMajor& other) const {
        return ((_sr_customer_sk672 == other._sr_customer_sk672) && (_sr_item_sk671 == other._sr_item_sk671) && (_sr_ticket_number678L == other._sr_ticket_number678L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10467_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10467_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_customer_sk672)) + (hash<int32_t>()(k._sr_item_sk671)) + (hash<int64_t>()(k._sr_ticket_number678L));
    }
};
}
struct SW_JOIN_INNER_TD_10467_payload_rightMajor {
    int32_t _sr_returned_date_sk669;
    int32_t _sr_item_sk671;
    int32_t _sr_customer_sk672;
    int64_t _sr_ticket_number678L;
    int32_t _sr_net_loss688;
};
void SW_JOIN_INNER_TD_10467(Table &tbl_Filter_TD_11915_output, Table &tbl_Filter_TD_11669_output, Table &tbl_JOIN_INNER_TD_10467_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((ss_customer_sk#1209 = sr_customer_sk#672) AND (ss_item_sk#1208 = sr_item_sk#671)) AND (ss_ticket_number#1215L = sr_ticket_number#678L)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_net_profit#1228)
    // Right Table: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_ticket_number#678L, sr_net_loss#688)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_net_loss#688)
    int left_nrow = tbl_Filter_TD_11915_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11669_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10467_key_leftMajor, SW_JOIN_INNER_TD_10467_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11915_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_11915_output.getInt32(i, 2);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_11915_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_11915_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_10467_key_leftMajor keyA{_ss_customer_sk1209_k, _ss_item_sk1208_k, _ss_ticket_number1215L_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11915_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_11915_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_11915_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_11915_output.getInt32(i, 3);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_11915_output.getInt64(i, 4);
            int32_t _ss_net_profit1228 = tbl_Filter_TD_11915_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_10467_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_store_sk1213, _ss_ticket_number1215L, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11669_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_customer_sk672_k = tbl_Filter_TD_11669_output.getInt32(i, 2);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_11669_output.getInt32(i, 1);
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_11669_output.getInt64(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10467_key_leftMajor{_sr_customer_sk672_k, _sr_item_sk671_k, _sr_ticket_number678L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11669_output.getInt32(i, 0);
                int32_t _sr_item_sk671 = tbl_Filter_TD_11669_output.getInt32(i, 1);
                int32_t _sr_customer_sk672 = tbl_Filter_TD_11669_output.getInt32(i, 2);
                int64_t _sr_ticket_number678L = tbl_Filter_TD_11669_output.getInt64(i, 3);
                int32_t _sr_net_loss688 = tbl_Filter_TD_11669_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 3, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 4, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 5, _sr_item_sk671);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 6, _sr_customer_sk672);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 7, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10467_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10467_key_rightMajor, SW_JOIN_INNER_TD_10467_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11669_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_customer_sk672_k = tbl_Filter_TD_11669_output.getInt32(i, 2);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_11669_output.getInt32(i, 1);
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_11669_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_10467_key_rightMajor keyA{_sr_customer_sk672_k, _sr_item_sk671_k, _sr_ticket_number678L_k};
            int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11669_output.getInt32(i, 0);
            int32_t _sr_item_sk671 = tbl_Filter_TD_11669_output.getInt32(i, 1);
            int32_t _sr_customer_sk672 = tbl_Filter_TD_11669_output.getInt32(i, 2);
            int64_t _sr_ticket_number678L = tbl_Filter_TD_11669_output.getInt64(i, 3);
            int32_t _sr_net_loss688 = tbl_Filter_TD_11669_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_10467_payload_rightMajor payloadA{_sr_returned_date_sk669, _sr_item_sk671, _sr_customer_sk672, _sr_ticket_number678L, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11915_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_11915_output.getInt32(i, 2);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_11915_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_11915_output.getInt64(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10467_key_rightMajor{_ss_customer_sk1209_k, _ss_item_sk1208_k, _ss_ticket_number1215L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int32_t _sr_customer_sk672 = (it->second)._sr_customer_sk672;
                int64_t _sr_ticket_number678L = (it->second)._sr_ticket_number678L;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11915_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_11915_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_11915_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_11915_output.getInt32(i, 3);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_11915_output.getInt64(i, 4);
                int32_t _ss_net_profit1228 = tbl_Filter_TD_11915_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 4, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 5, _sr_item_sk671);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 6, _sr_customer_sk672);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 7, _sr_net_loss688);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10467_output.setInt32(r, 3, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10467_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10467_output #Row: " << tbl_JOIN_INNER_TD_10467_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9263(Table &tbl_SerializeFromObject_TD_10896_input, Table &tbl_Filter_TD_9263_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 4) AND (d_year#126 = 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10896_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_10896_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10896_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10896_input.getInt32(i, 0);
        if ((((_d_moy128!= 0) && (_d_year126!= 0)) && ((_d_moy128 == 4) && (_d_year126 == 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10896_input.getInt32(i, 0);
            tbl_Filter_TD_9263_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9263_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9263_output #Row: " << tbl_Filter_TD_9263_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9336_key_leftMajor {
    int32_t _sr_customer_sk672;
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_INNER_TD_9336_key_leftMajor& other) const {
        return ((_sr_customer_sk672 == other._sr_customer_sk672) && (_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9336_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9336_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_customer_sk672)) + (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_INNER_TD_9336_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_net_profit1228;
    int32_t _sr_returned_date_sk669;
    int32_t _sr_item_sk671;
    int32_t _sr_customer_sk672;
    int32_t _sr_net_loss688;
};
struct SW_JOIN_INNER_TD_9336_key_rightMajor {
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_9336_key_rightMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107) && (_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9336_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9336_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107)) + (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_9336_payload_rightMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    int32_t _cs_net_profit1137;
};
void SW_JOIN_INNER_TD_9336(Table &tbl_JOIN_INNER_TD_10467_output, Table &tbl_Filter_TD_10378_output, Table &tbl_JOIN_INNER_TD_9336_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((sr_customer_sk#672 = cs_bill_customer_sk#1107) AND (sr_item_sk#671 = cs_item_sk#1119)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_net_loss#688)
    // Right Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_net_profit#1137)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_returned_date_sk#669, sr_net_loss#688, cs_sold_date_sk#1104, cs_net_profit#1137)
    int left_nrow = tbl_JOIN_INNER_TD_10467_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10378_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9336_key_leftMajor, SW_JOIN_INNER_TD_9336_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10467_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_customer_sk672_k = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 6);
            int32_t _sr_item_sk671_k = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9336_key_leftMajor keyA{_sr_customer_sk672_k, _sr_item_sk671_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 2);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 3);
            int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 4);
            int32_t _sr_item_sk671 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 5);
            int32_t _sr_customer_sk672 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 6);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_9336_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_net_profit1228, _sr_returned_date_sk669, _sr_item_sk671, _sr_customer_sk672, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10378_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_Filter_TD_10378_output.getInt32(i, 1);
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_10378_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9336_key_leftMajor{_cs_bill_customer_sk1107_k, _cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int32_t _sr_customer_sk672 = (it->second)._sr_customer_sk672;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10378_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_10378_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_10378_output.getInt32(i, 2);
                int32_t _cs_net_profit1137 = tbl_Filter_TD_10378_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 3, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 4, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 5, _sr_net_loss688);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 6, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 7, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9336_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9336_key_rightMajor, SW_JOIN_INNER_TD_9336_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10378_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_Filter_TD_10378_output.getInt32(i, 1);
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_10378_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9336_key_rightMajor keyA{_cs_bill_customer_sk1107_k, _cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10378_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_10378_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_10378_output.getInt32(i, 2);
            int32_t _cs_net_profit1137 = tbl_Filter_TD_10378_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9336_payload_rightMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_item_sk1119, _cs_net_profit1137};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10467_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_customer_sk672_k = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 6);
            int32_t _sr_item_sk671_k = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 5);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9336_key_rightMajor{_sr_customer_sk672_k, _sr_item_sk671_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 2);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 3);
                int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 4);
                int32_t _sr_item_sk671 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 5);
                int32_t _sr_customer_sk672 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 6);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10467_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 6, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 7, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 3, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 4, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_9336_output.setInt32(r, 5, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9336_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9336_output #Row: " << tbl_JOIN_INNER_TD_9336_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8130(Table &tbl_SerializeFromObject_TD_9272_input, Table &tbl_Filter_TD_8130_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#16043) AND isnotnull(d_year#16041)) AND (((d_moy#16043 >= 4) AND (d_moy#16043 <= 10)) AND (d_year#16041 = 2001))) AND isnotnull(d_date_sk#16035)))
    // Input: ListBuffer(d_date_sk#16035, d_moy#16043, d_year#16041)
    // Output: ListBuffer(d_date_sk#16035)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9272_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy16043 = tbl_SerializeFromObject_TD_9272_input.getInt32(i, 1);
        int32_t _d_year16041 = tbl_SerializeFromObject_TD_9272_input.getInt32(i, 2);
        int32_t _d_date_sk16035 = tbl_SerializeFromObject_TD_9272_input.getInt32(i, 0);
        if ((((_d_moy16043!= 0) && (_d_year16041!= 0)) && (((_d_moy16043 >= 4) && (_d_moy16043 <= 10)) && (_d_year16041 == 2001))) && (_d_date_sk16035!= 0)) {
            int32_t _d_date_sk16035_t = tbl_SerializeFromObject_TD_9272_input.getInt32(i, 0);
            tbl_Filter_TD_8130_output.setInt32(r, 0, _d_date_sk16035_t);
            r++;
        }
    }
    tbl_Filter_TD_8130_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8130_output #Row: " << tbl_Filter_TD_8130_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8913_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8913_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8913_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8913_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8913_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_net_profit1228;
    int32_t _sr_returned_date_sk669;
    int32_t _sr_net_loss688;
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_net_profit1137;
};
struct SW_JOIN_INNER_TD_8913_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8913_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8913_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8913_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8913_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_8913(Table &tbl_JOIN_INNER_TD_9336_output, Table &tbl_Filter_TD_9263_output, Table &tbl_JOIN_INNER_TD_8913_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = ss_sold_date_sk#1206))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_returned_date_sk#669, sr_net_loss#688, cs_sold_date_sk#1104, cs_net_profit#1137)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_returned_date_sk#669, sr_net_loss#688, cs_sold_date_sk#1104, cs_net_profit#1137)
    int left_nrow = tbl_JOIN_INNER_TD_9336_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9263_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8913_key_leftMajor, SW_JOIN_INNER_TD_8913_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9336_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8913_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 2);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 3);
            int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 4);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 5);
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 6);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_8913_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_net_profit1228, _sr_returned_date_sk669, _sr_net_loss688, _cs_sold_date_sk1104, _cs_net_profit1137};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9263_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9263_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8913_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _d_date_sk120 = tbl_Filter_TD_9263_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 3, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 4, _sr_net_loss688);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 5, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 6, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8913_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8913_key_rightMajor, SW_JOIN_INNER_TD_8913_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9263_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9263_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8913_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9263_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8913_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9336_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8913_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 2);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 3);
                int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 4);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 5);
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 6);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9336_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 3, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 4, _sr_net_loss688);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 5, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_8913_output.setInt32(r, 6, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8913_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8913_output #Row: " << tbl_JOIN_INNER_TD_8913_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7249(Table &tbl_SerializeFromObject_TD_8525_input, Table &tbl_Filter_TD_7249_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#16071) AND isnotnull(d_year#16069)) AND (((d_moy#16071 >= 4) AND (d_moy#16071 <= 10)) AND (d_year#16069 = 2001))) AND isnotnull(d_date_sk#16063)))
    // Input: ListBuffer(d_date_sk#16063, d_moy#16071, d_year#16069)
    // Output: ListBuffer(d_date_sk#16063)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8525_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy16071 = tbl_SerializeFromObject_TD_8525_input.getInt32(i, 1);
        int32_t _d_year16069 = tbl_SerializeFromObject_TD_8525_input.getInt32(i, 2);
        int32_t _d_date_sk16063 = tbl_SerializeFromObject_TD_8525_input.getInt32(i, 0);
        if ((((_d_moy16071!= 0) && (_d_year16069!= 0)) && (((_d_moy16071 >= 4) && (_d_moy16071 <= 10)) && (_d_year16069 == 2001))) && (_d_date_sk16063!= 0)) {
            int32_t _d_date_sk16063_t = tbl_SerializeFromObject_TD_8525_input.getInt32(i, 0);
            tbl_Filter_TD_7249_output.setInt32(r, 0, _d_date_sk16063_t);
            r++;
        }
    }
    tbl_Filter_TD_7249_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7249_output #Row: " << tbl_Filter_TD_7249_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7985_key_leftMajor {
    int32_t _sr_returned_date_sk669;
    bool operator==(const SW_JOIN_INNER_TD_7985_key_leftMajor& other) const {
        return ((_sr_returned_date_sk669 == other._sr_returned_date_sk669));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7985_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7985_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_returned_date_sk669));
    }
};
}
struct SW_JOIN_INNER_TD_7985_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_net_profit1228;
    int32_t _sr_returned_date_sk669;
    int32_t _sr_net_loss688;
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_net_profit1137;
};
struct SW_JOIN_INNER_TD_7985_key_rightMajor {
    int32_t _d_date_sk16035;
    bool operator==(const SW_JOIN_INNER_TD_7985_key_rightMajor& other) const {
        return ((_d_date_sk16035 == other._d_date_sk16035));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7985_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7985_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk16035));
    }
};
}
struct SW_JOIN_INNER_TD_7985_payload_rightMajor {
    int32_t _d_date_sk16035;
};
void SW_JOIN_INNER_TD_7985(Table &tbl_JOIN_INNER_TD_8913_output, Table &tbl_Filter_TD_8130_output, Table &tbl_JOIN_INNER_TD_7985_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_returned_date_sk#669 = d_date_sk#16035))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_returned_date_sk#669, sr_net_loss#688, cs_sold_date_sk#1104, cs_net_profit#1137)
    // Right Table: ListBuffer(d_date_sk#16035)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_net_loss#688, cs_sold_date_sk#1104, cs_net_profit#1137)
    int left_nrow = tbl_JOIN_INNER_TD_8913_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8130_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7985_key_leftMajor, SW_JOIN_INNER_TD_7985_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8913_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7985_key_leftMajor keyA{_sr_returned_date_sk669_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 1);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 2);
            int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 3);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 4);
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 5);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_7985_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_net_profit1228, _sr_returned_date_sk669, _sr_net_loss688, _cs_sold_date_sk1104, _cs_net_profit1137};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8130_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk16035_k = tbl_Filter_TD_8130_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7985_key_leftMajor{_d_date_sk16035_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _d_date_sk16035 = tbl_Filter_TD_8130_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 3, _sr_net_loss688);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 4, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 5, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7985_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7985_key_rightMajor, SW_JOIN_INNER_TD_7985_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8130_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk16035_k = tbl_Filter_TD_8130_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7985_key_rightMajor keyA{_d_date_sk16035_k};
            int32_t _d_date_sk16035 = tbl_Filter_TD_8130_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7985_payload_rightMajor payloadA{_d_date_sk16035};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8913_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7985_key_rightMajor{_sr_returned_date_sk669_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk16035 = (it->second)._d_date_sk16035;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 1);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 2);
                int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 3);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 4);
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 5);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_8913_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 3, _sr_net_loss688);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 4, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_7985_output.setInt32(r, 5, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7985_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7985_output #Row: " << tbl_JOIN_INNER_TD_7985_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6839(Table &tbl_SerializeFromObject_TD_7318_input, Table &tbl_Filter_TD_6839_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378, s_store_id#379, s_store_name#383)
    // Output: ListBuffer(s_store_sk#378, s_store_id#379, s_store_name#383)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7318_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_7318_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_7318_input.getInt32(i, 0);
            tbl_Filter_TD_6839_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_t = tbl_SerializeFromObject_TD_7318_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6839_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id379_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_7318_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6839_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_t);
            r++;
        }
    }
    tbl_Filter_TD_6839_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6839_output #Row: " << tbl_Filter_TD_6839_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_65_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_65_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_65_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_65_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_65_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_net_profit1228;
    int32_t _sr_net_loss688;
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_net_profit1137;
};
struct SW_JOIN_INNER_TD_65_key_rightMajor {
    int32_t _d_date_sk16063;
    bool operator==(const SW_JOIN_INNER_TD_65_key_rightMajor& other) const {
        return ((_d_date_sk16063 == other._d_date_sk16063));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_65_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_65_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk16063));
    }
};
}
struct SW_JOIN_INNER_TD_65_payload_rightMajor {
    int32_t _d_date_sk16063;
};
void SW_JOIN_INNER_TD_65(Table &tbl_JOIN_INNER_TD_7985_output, Table &tbl_Filter_TD_7249_output, Table &tbl_JOIN_INNER_TD_65_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#16063))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_net_loss#688, cs_sold_date_sk#1104, cs_net_profit#1137)
    // Right Table: ListBuffer(d_date_sk#16063)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_net_loss#688, cs_net_profit#1137)
    int left_nrow = tbl_JOIN_INNER_TD_7985_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7249_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_65_key_leftMajor, SW_JOIN_INNER_TD_65_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7985_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_65_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 1);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 2);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 3);
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 4);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_65_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_net_profit1228, _sr_net_loss688, _cs_sold_date_sk1104, _cs_net_profit1137};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7249_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk16063_k = tbl_Filter_TD_7249_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_65_key_leftMajor{_d_date_sk16063_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _d_date_sk16063 = tbl_Filter_TD_7249_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 3, _sr_net_loss688);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 4, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_65_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_65_key_rightMajor, SW_JOIN_INNER_TD_65_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7249_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk16063_k = tbl_Filter_TD_7249_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_65_key_rightMajor keyA{_d_date_sk16063_k};
            int32_t _d_date_sk16063 = tbl_Filter_TD_7249_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_65_payload_rightMajor payloadA{_d_date_sk16063};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7985_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_65_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk16063 = (it->second)._d_date_sk16063;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 1);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 2);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 3);
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 4);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_7985_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 3, _sr_net_loss688);
                tbl_JOIN_INNER_TD_65_output.setInt32(r, 4, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_65_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_65_output #Row: " << tbl_JOIN_INNER_TD_65_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5718(Table &tbl_SerializeFromObject_TD_6679_input, Table &tbl_Filter_TD_5718_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6679_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_6679_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_6679_input.getInt32(i, 0);
            tbl_Filter_TD_5718_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_6679_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5718_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_6679_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5718_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_t);
            r++;
        }
    }
    tbl_Filter_TD_5718_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5718_output #Row: " << tbl_Filter_TD_5718_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5714_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_5714_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5714_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5714_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_5714_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_net_profit1228;
    int32_t _sr_net_loss688;
    int32_t _cs_net_profit1137;
};
struct SW_JOIN_INNER_TD_5714_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_5714_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5714_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5714_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_5714_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_id379;
    std::string _s_store_name383;
};
void SW_JOIN_INNER_TD_5714(Table &tbl_JOIN_INNER_TD_65_output, Table &tbl_Filter_TD_6839_output, Table &tbl_JOIN_INNER_TD_5714_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_store_sk#378 = ss_store_sk#1213))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_net_profit#1228, sr_net_loss#688, cs_net_profit#1137)
    // Right Table: ListBuffer(s_store_sk#378, s_store_id#379, s_store_name#383)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_net_profit#1228, sr_net_loss#688, cs_net_profit#1137, s_store_id#379, s_store_name#383)
    int left_nrow = tbl_JOIN_INNER_TD_65_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6839_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5714_key_leftMajor, SW_JOIN_INNER_TD_5714_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_65_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_65_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5714_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 1);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 2);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 3);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5714_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_net_profit1228, _sr_net_loss688, _cs_net_profit1137};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6839_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6839_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5714_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _s_store_sk378 = tbl_Filter_TD_6839_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_6839_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6839_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 2, _sr_net_loss688);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 3, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_5714_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                tbl_JOIN_INNER_TD_5714_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5714_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5714_key_rightMajor, SW_JOIN_INNER_TD_5714_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6839_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6839_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5714_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_6839_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_6839_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6839_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            SW_JOIN_INNER_TD_5714_payload_rightMajor payloadA{_s_store_sk378, _s_store_id379, _s_store_name383};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_65_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_65_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5714_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 1);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 2);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 3);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_65_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_5714_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                tbl_JOIN_INNER_TD_5714_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 2, _sr_net_loss688);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 3, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5714_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5714_output #Row: " << tbl_JOIN_INNER_TD_5714_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4134_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_4134_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4134_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4134_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_4134_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_net_profit1228;
    int32_t _sr_net_loss688;
    int32_t _cs_net_profit1137;
    std::string _s_store_id379;
    std::string _s_store_name383;
};
struct SW_JOIN_INNER_TD_4134_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_4134_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4134_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4134_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_4134_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
};
void SW_JOIN_INNER_TD_4134(Table &tbl_JOIN_INNER_TD_5714_output, Table &tbl_Filter_TD_5718_output, Table &tbl_JOIN_INNER_TD_4134_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = ss_item_sk#1208))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_net_profit#1228, sr_net_loss#688, cs_net_profit#1137, s_store_id#379, s_store_name#383)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232)
    // Output Table: ListBuffer(ss_net_profit#1228, sr_net_loss#688, cs_net_profit#1137, s_store_id#379, s_store_name#383, i_item_id#229, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_5714_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5718_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4134_key_leftMajor, SW_JOIN_INNER_TD_4134_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5714_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4134_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 0);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 1);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 2);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_5714_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5714_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            SW_JOIN_INNER_TD_4134_payload_leftMajor payloadA{_ss_item_sk1208, _ss_net_profit1228, _sr_net_loss688, _cs_net_profit1137, _s_store_id379, _s_store_name383};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5718_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5718_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4134_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_5718_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_5718_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_5718_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_4134_output.setInt32(r, 0, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_4134_output.setInt32(r, 1, _sr_net_loss688);
                tbl_JOIN_INNER_TD_4134_output.setInt32(r, 2, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_4134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_id379_n);
                tbl_JOIN_INNER_TD_4134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_name383_n);
                tbl_JOIN_INNER_TD_4134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4134_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4134_key_rightMajor, SW_JOIN_INNER_TD_4134_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5718_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5718_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4134_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_5718_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_5718_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_5718_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_4134_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5714_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4134_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 0);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 1);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 2);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_5714_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5714_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                tbl_JOIN_INNER_TD_4134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_4134_output.setInt32(r, 0, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_4134_output.setInt32(r, 1, _sr_net_loss688);
                tbl_JOIN_INNER_TD_4134_output.setInt32(r, 2, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_4134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_id379_n);
                tbl_JOIN_INNER_TD_4134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_name383_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4134_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4134_output #Row: " << tbl_JOIN_INNER_TD_4134_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3820_key {
    std::string _i_item_id229;
    std::string _i_item_desc232;
    std::string _s_store_id379;
    std::string _s_store_name383;
    bool operator==(const SW_Aggregate_TD_3820_key& other) const { return (_i_item_id229 == other._i_item_id229) && (_i_item_desc232 == other._i_item_desc232) && (_s_store_id379 == other._s_store_id379) && (_s_store_name383 == other._s_store_name383); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3820_key> {
    std::size_t operator() (const SW_Aggregate_TD_3820_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229)) + (hash<string>()(k._i_item_desc232)) + (hash<string>()(k._s_store_id379)) + (hash<string>()(k._s_store_name383));
    }
};
}
struct SW_Aggregate_TD_3820_payload {
    int32_t _store_sales_profit16032_sum_0;
    int32_t _store_returns_loss16033_sum_1;
    int32_t _catalog_sales_profit16034_sum_2;
};
void SW_Aggregate_TD_3820(Table &tbl_JOIN_INNER_TD_4134_output, Table &tbl_Aggregate_TD_3820_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_desc#232, s_store_id#379, s_store_name#383, MakeDecimal(sum(UnscaledValue(ss_net_profit#1228)),17,2) AS store_sales_profit#16032, MakeDecimal(sum(UnscaledValue(sr_net_loss#688)),17,2) AS store_returns_loss#16033, MakeDecimal(sum(UnscaledValue(cs_net_profit#1137)),17,2) AS catalog_sales_profit#16034)
    // Input: ListBuffer(ss_net_profit#1228, sr_net_loss#688, cs_net_profit#1137, s_store_id#379, s_store_name#383, i_item_id#229, i_item_desc#232)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, s_store_id#379, s_store_name#383, store_sales_profit#16032, store_returns_loss#16033, catalog_sales_profit#16034)
    std::unordered_map<SW_Aggregate_TD_3820_key, SW_Aggregate_TD_3820_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4134_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_4134_output.getInt32(i, 0);
        int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_4134_output.getInt32(i, 1);
        int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_4134_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379 = tbl_JOIN_INNER_TD_4134_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_4134_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_4134_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_4134_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_3820_key k{std::string(_i_item_id229.data()), std::string(_i_item_desc232.data()), std::string(_s_store_id379.data()), std::string(_s_store_name383.data())};
        int64_t _store_sales_profit16032_sum_0 = _ss_net_profit1228;
        int64_t _store_returns_loss16033_sum_1 = _sr_net_loss688;
        int64_t _catalog_sales_profit16034_sum_2 = _cs_net_profit1137;
        SW_Aggregate_TD_3820_payload p{_store_sales_profit16032_sum_0, _store_returns_loss16033_sum_1, _catalog_sales_profit16034_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._store_sales_profit16032_sum_0 + _store_sales_profit16032_sum_0;
            p._store_sales_profit16032_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._store_returns_loss16033_sum_1 + _store_returns_loss16033_sum_1;
            p._store_returns_loss16033_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._catalog_sales_profit16034_sum_2 + _catalog_sales_profit16034_sum_2;
            p._catalog_sales_profit16034_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), ((it.first)._i_item_id229).data(), ((it.first)._i_item_id229).length());
        tbl_Aggregate_TD_3820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), ((it.first)._i_item_desc232).data(), ((it.first)._i_item_desc232).length());
        tbl_Aggregate_TD_3820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379{};
        memcpy(_s_store_id379.data(), ((it.first)._s_store_id379).data(), ((it.first)._s_store_id379).length());
        tbl_Aggregate_TD_3820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_id379);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), ((it.first)._s_store_name383).data(), ((it.first)._s_store_name383).length());
        tbl_Aggregate_TD_3820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383);
        int32_t _store_sales_profit16032 = (it.second)._store_sales_profit16032_sum_0;
        tbl_Aggregate_TD_3820_output.setInt32(r, 4, _store_sales_profit16032);
        int32_t _store_returns_loss16033 = (it.second)._store_returns_loss16033_sum_1;
        tbl_Aggregate_TD_3820_output.setInt32(r, 5, _store_returns_loss16033);
        int32_t _catalog_sales_profit16034 = (it.second)._catalog_sales_profit16034_sum_2;
        tbl_Aggregate_TD_3820_output.setInt32(r, 6, _catalog_sales_profit16034);
        ++r;
    }
    tbl_Aggregate_TD_3820_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3820_output #Row: " << tbl_Aggregate_TD_3820_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2867(Table &tbl_Aggregate_TD_3820_output, Table &tbl_Sort_TD_2867_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_item_id#229 ASC NULLS FIRST, i_item_desc#232 ASC NULLS FIRST, s_store_id#379 ASC NULLS FIRST, s_store_name#383 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, s_store_id#379, s_store_name#383, store_sales_profit#16032, store_returns_loss#16033, catalog_sales_profit#16034)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, s_store_id#379, s_store_name#383, store_sales_profit#16032, store_returns_loss#16033, catalog_sales_profit#16034)
    struct SW_Sort_TD_2867Row {
        std::string _i_item_id229;
        std::string _i_item_desc232;
        std::string _s_store_id379;
        std::string _s_store_name383;
        int32_t _store_sales_profit16032;
        int32_t _store_returns_loss16033;
        int32_t _catalog_sales_profit16034;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2867Row& a, const SW_Sort_TD_2867Row& b) const { return 
 (a._i_item_id229 < b._i_item_id229) || 
 ((a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 < b._i_item_desc232)) || 
 ((a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 == b._i_item_desc232) && (a._s_store_id379 < b._s_store_id379)) || 
 ((a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 == b._i_item_desc232) && (a._s_store_id379 == b._s_store_id379) && (a._s_store_name383 < b._s_store_name383)); 
}
    }SW_Sort_TD_2867_order; 

    int nrow1 = tbl_Aggregate_TD_3820_output.getNumRow();
    std::vector<SW_Sort_TD_2867Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3820_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Aggregate_TD_3820_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379 = tbl_Aggregate_TD_3820_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Aggregate_TD_3820_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _store_sales_profit16032 = tbl_Aggregate_TD_3820_output.getInt32(i, 4);
        int32_t _store_returns_loss16033 = tbl_Aggregate_TD_3820_output.getInt32(i, 5);
        int32_t _catalog_sales_profit16034 = tbl_Aggregate_TD_3820_output.getInt32(i, 6);
        SW_Sort_TD_2867Row t = {std::string(_i_item_id229.data()),std::string(_i_item_desc232.data()),std::string(_s_store_id379.data()),std::string(_s_store_name383.data()),_store_sales_profit16032,_store_returns_loss16033,_catalog_sales_profit16034};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2867_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2867_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_2867_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379{};
        memcpy(_s_store_id379.data(), (it._s_store_id379).data(), (it._s_store_id379).length());
        tbl_Sort_TD_2867_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_id379);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), (it._s_store_name383).data(), (it._s_store_name383).length());
        tbl_Sort_TD_2867_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_store_name383);
        tbl_Sort_TD_2867_output.setInt32(r, 4, it._store_sales_profit16032);
        tbl_Sort_TD_2867_output.setInt32(r, 5, it._store_returns_loss16033);
        tbl_Sort_TD_2867_output.setInt32(r, 6, it._catalog_sales_profit16034);
        ++r;
    }
    tbl_Sort_TD_2867_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2867_output #Row: " << tbl_Sort_TD_2867_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_195(Table &tbl_Sort_TD_2867_output, Table &tbl_LocalLimit_TD_195_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, s_store_id#379, s_store_name#383, store_sales_profit#16032, store_returns_loss#16033, catalog_sales_profit#16034)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, s_store_id#379, s_store_name#383, store_sales_profit#16032, store_returns_loss#16033, catalog_sales_profit#16034)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2867_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_195_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Sort_TD_2867_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_195_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Sort_TD_2867_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_195_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_id379_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Sort_TD_2867_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_195_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383_n);
        tbl_LocalLimit_TD_195_output.setInt32(r, 4, tbl_Sort_TD_2867_output.getInt32(i, 4));
        tbl_LocalLimit_TD_195_output.setInt32(r, 5, tbl_Sort_TD_2867_output.getInt32(i, 5));
        tbl_LocalLimit_TD_195_output.setInt32(r, 6, tbl_Sort_TD_2867_output.getInt32(i, 6));
        r++;
    }
    tbl_LocalLimit_TD_195_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_195_output #Row: " << tbl_LocalLimit_TD_195_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0892(Table &tbl_LocalLimit_TD_195_output, Table &tbl_GlobalLimit_TD_0892_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, s_store_id#379, s_store_name#383, store_sales_profit#16032, store_returns_loss#16033, catalog_sales_profit#16034)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, s_store_id#379, s_store_name#383, store_sales_profit#16032, store_returns_loss#16033, catalog_sales_profit#16034)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_195_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0892_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_LocalLimit_TD_195_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0892_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_LocalLimit_TD_195_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0892_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_id379_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_LocalLimit_TD_195_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0892_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383_n);
        tbl_GlobalLimit_TD_0892_output.setInt32(r, 4, tbl_LocalLimit_TD_195_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0892_output.setInt32(r, 5, tbl_LocalLimit_TD_195_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0892_output.setInt32(r, 6, tbl_LocalLimit_TD_195_output.getInt32(i, 6));
        r++;
    }
    tbl_GlobalLimit_TD_0892_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0892_output #Row: " << tbl_GlobalLimit_TD_0892_output.getNumRow() << std::endl;
}

