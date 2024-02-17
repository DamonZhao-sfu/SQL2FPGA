#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11308(Table &tbl_SerializeFromObject_TD_12628_input, Table &tbl_Filter_TD_11308_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(sr_customer_sk#672) AND isnotnull(sr_item_sk#671)) AND isnotnull(sr_ticket_number#678L)) AND isnotnull(sr_returned_date_sk#669)))
    // Input: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_ticket_number#678L, sr_return_quantity#679)
    // Output: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_ticket_number#678L, sr_return_quantity#679)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12628_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_customer_sk672 = tbl_SerializeFromObject_TD_12628_input.getInt32(i, 2);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_12628_input.getInt32(i, 1);
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_12628_input.getInt64(i, 3);
        int32_t _sr_returned_date_sk669 = tbl_SerializeFromObject_TD_12628_input.getInt32(i, 0);
        if ((((_sr_customer_sk672!= 0) && (_sr_item_sk671!= 0)) && (_sr_ticket_number678L!= 0)) && (_sr_returned_date_sk669!= 0)) {
            int32_t _sr_returned_date_sk669_t = tbl_SerializeFromObject_TD_12628_input.getInt32(i, 0);
            tbl_Filter_TD_11308_output.setInt32(r, 0, _sr_returned_date_sk669_t);
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_12628_input.getInt32(i, 1);
            tbl_Filter_TD_11308_output.setInt32(r, 1, _sr_item_sk671_t);
            int32_t _sr_customer_sk672_t = tbl_SerializeFromObject_TD_12628_input.getInt32(i, 2);
            tbl_Filter_TD_11308_output.setInt32(r, 2, _sr_customer_sk672_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_12628_input.getInt64(i, 3);
            tbl_Filter_TD_11308_output.setInt64(r, 3, _sr_ticket_number678L_t);
            int32_t _sr_return_quantity679_t = tbl_SerializeFromObject_TD_12628_input.getInt32(i, 4);
            tbl_Filter_TD_11308_output.setInt32(r, 4, _sr_return_quantity679_t);
            r++;
        }
    }
    tbl_Filter_TD_11308_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11308_output #Row: " << tbl_Filter_TD_11308_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11420(Table &tbl_SerializeFromObject_TD_12536_input, Table &tbl_Filter_TD_11420_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ss_customer_sk#1209) AND isnotnull(ss_item_sk#1208)) AND isnotnull(ss_ticket_number#1215L)) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_quantity#1216)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_quantity#1216)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12536_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_12536_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_12536_input.getInt32(i, 1);
        int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_12536_input.getInt64(i, 4);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12536_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12536_input.getInt32(i, 3);
        if ((((_ss_customer_sk1209!= 0) && (_ss_item_sk1208!= 0)) && (_ss_ticket_number1215L!= 0)) && ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12536_input.getInt32(i, 0);
            tbl_Filter_TD_11420_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_12536_input.getInt32(i, 1);
            tbl_Filter_TD_11420_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_12536_input.getInt32(i, 2);
            tbl_Filter_TD_11420_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_12536_input.getInt32(i, 3);
            tbl_Filter_TD_11420_output.setInt32(r, 3, _ss_store_sk1213_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_12536_input.getInt64(i, 4);
            tbl_Filter_TD_11420_output.setInt64(r, 4, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_12536_input.getInt32(i, 5);
            tbl_Filter_TD_11420_output.setInt32(r, 5, _ss_quantity1216_t);
            r++;
        }
    }
    tbl_Filter_TD_11420_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11420_output #Row: " << tbl_Filter_TD_11420_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10679(Table &tbl_SerializeFromObject_TD_11166_input, Table &tbl_Filter_TD_10679_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_bill_customer_sk#1107) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11166_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_11166_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_11166_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_11166_input.getInt32(i, 0);
        if (((_cs_bill_customer_sk1107!= 0) && (_cs_item_sk1119!= 0)) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_11166_input.getInt32(i, 0);
            tbl_Filter_TD_10679_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_11166_input.getInt32(i, 1);
            tbl_Filter_TD_10679_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_11166_input.getInt32(i, 2);
            tbl_Filter_TD_10679_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_11166_input.getInt32(i, 3);
            tbl_Filter_TD_10679_output.setInt32(r, 3, _cs_quantity1122_t);
            r++;
        }
    }
    tbl_Filter_TD_10679_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10679_output #Row: " << tbl_Filter_TD_10679_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10622_key_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_item_sk1208;
    int64_t _ss_ticket_number1215L;
    bool operator==(const SW_JOIN_INNER_TD_10622_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209) && (_ss_item_sk1208 == other._ss_item_sk1208) && (_ss_ticket_number1215L == other._ss_ticket_number1215L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10622_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10622_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209)) + (hash<int32_t>()(k._ss_item_sk1208)) + (hash<int64_t>()(k._ss_ticket_number1215L));
    }
};
}
struct SW_JOIN_INNER_TD_10622_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_quantity1216;
};
struct SW_JOIN_INNER_TD_10622_key_rightMajor {
    int32_t _sr_customer_sk672;
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    bool operator==(const SW_JOIN_INNER_TD_10622_key_rightMajor& other) const {
        return ((_sr_customer_sk672 == other._sr_customer_sk672) && (_sr_item_sk671 == other._sr_item_sk671) && (_sr_ticket_number678L == other._sr_ticket_number678L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10622_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10622_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_customer_sk672)) + (hash<int32_t>()(k._sr_item_sk671)) + (hash<int64_t>()(k._sr_ticket_number678L));
    }
};
}
struct SW_JOIN_INNER_TD_10622_payload_rightMajor {
    int32_t _sr_returned_date_sk669;
    int32_t _sr_item_sk671;
    int32_t _sr_customer_sk672;
    int64_t _sr_ticket_number678L;
    int32_t _sr_return_quantity679;
};
void SW_JOIN_INNER_TD_10622(Table &tbl_Filter_TD_11420_output, Table &tbl_Filter_TD_11308_output, Table &tbl_JOIN_INNER_TD_10622_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((ss_customer_sk#1209 = sr_customer_sk#672) AND (ss_item_sk#1208 = sr_item_sk#671)) AND (ss_ticket_number#1215L = sr_ticket_number#678L)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_quantity#1216)
    // Right Table: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_ticket_number#678L, sr_return_quantity#679)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_return_quantity#679)
    int left_nrow = tbl_Filter_TD_11420_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11308_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10622_key_leftMajor, SW_JOIN_INNER_TD_10622_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11420_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_11420_output.getInt32(i, 2);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_11420_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_11420_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_10622_key_leftMajor keyA{_ss_customer_sk1209_k, _ss_item_sk1208_k, _ss_ticket_number1215L_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11420_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_11420_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_11420_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_11420_output.getInt32(i, 3);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_11420_output.getInt64(i, 4);
            int32_t _ss_quantity1216 = tbl_Filter_TD_11420_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_10622_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_store_sk1213, _ss_ticket_number1215L, _ss_quantity1216};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11308_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_customer_sk672_k = tbl_Filter_TD_11308_output.getInt32(i, 2);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_11308_output.getInt32(i, 1);
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_11308_output.getInt64(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10622_key_leftMajor{_sr_customer_sk672_k, _sr_item_sk671_k, _sr_ticket_number678L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11308_output.getInt32(i, 0);
                int32_t _sr_item_sk671 = tbl_Filter_TD_11308_output.getInt32(i, 1);
                int32_t _sr_customer_sk672 = tbl_Filter_TD_11308_output.getInt32(i, 2);
                int64_t _sr_ticket_number678L = tbl_Filter_TD_11308_output.getInt64(i, 3);
                int32_t _sr_return_quantity679 = tbl_Filter_TD_11308_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 3, _ss_quantity1216);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 4, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 5, _sr_item_sk671);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 6, _sr_customer_sk672);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 7, _sr_return_quantity679);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10622_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10622_key_rightMajor, SW_JOIN_INNER_TD_10622_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11308_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_customer_sk672_k = tbl_Filter_TD_11308_output.getInt32(i, 2);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_11308_output.getInt32(i, 1);
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_11308_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_10622_key_rightMajor keyA{_sr_customer_sk672_k, _sr_item_sk671_k, _sr_ticket_number678L_k};
            int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11308_output.getInt32(i, 0);
            int32_t _sr_item_sk671 = tbl_Filter_TD_11308_output.getInt32(i, 1);
            int32_t _sr_customer_sk672 = tbl_Filter_TD_11308_output.getInt32(i, 2);
            int64_t _sr_ticket_number678L = tbl_Filter_TD_11308_output.getInt64(i, 3);
            int32_t _sr_return_quantity679 = tbl_Filter_TD_11308_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_10622_payload_rightMajor payloadA{_sr_returned_date_sk669, _sr_item_sk671, _sr_customer_sk672, _sr_ticket_number678L, _sr_return_quantity679};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11420_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_11420_output.getInt32(i, 2);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_11420_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_11420_output.getInt64(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10622_key_rightMajor{_ss_customer_sk1209_k, _ss_item_sk1208_k, _ss_ticket_number1215L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int32_t _sr_customer_sk672 = (it->second)._sr_customer_sk672;
                int64_t _sr_ticket_number678L = (it->second)._sr_ticket_number678L;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11420_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_11420_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_11420_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_11420_output.getInt32(i, 3);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_11420_output.getInt64(i, 4);
                int32_t _ss_quantity1216 = tbl_Filter_TD_11420_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 4, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 5, _sr_item_sk671);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 6, _sr_customer_sk672);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 7, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10622_output.setInt32(r, 3, _ss_quantity1216);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10622_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10622_output #Row: " << tbl_JOIN_INNER_TD_10622_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9497(Table &tbl_SerializeFromObject_TD_10923_input, Table &tbl_Filter_TD_9497_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_quarter_name#135) AND (d_quarter_name#135 = 2001Q1)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_quarter_name#135)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10923_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _d_quarter_name135 = tbl_SerializeFromObject_TD_10923_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10923_input.getInt32(i, 0);
        if ((（std::string(_isnotnulld_quarter_name135.data()) != "NULL") && (std::string(_d_quarter_name135.data()) == "2001Q1")) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10923_input.getInt32(i, 0);
            tbl_Filter_TD_9497_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9497_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9497_output #Row: " << tbl_Filter_TD_9497_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_984_key_leftMajor {
    int32_t _sr_customer_sk672;
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_INNER_TD_984_key_leftMajor& other) const {
        return ((_sr_customer_sk672 == other._sr_customer_sk672) && (_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_984_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_984_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_customer_sk672)) + (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_INNER_TD_984_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _sr_returned_date_sk669;
    int32_t _sr_item_sk671;
    int32_t _sr_customer_sk672;
    int32_t _sr_return_quantity679;
};
struct SW_JOIN_INNER_TD_984_key_rightMajor {
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_984_key_rightMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107) && (_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_984_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_984_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107)) + (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_984_payload_rightMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
};
void SW_JOIN_INNER_TD_984(Table &tbl_JOIN_INNER_TD_10622_output, Table &tbl_Filter_TD_10679_output, Table &tbl_JOIN_INNER_TD_984_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((sr_customer_sk#672 = cs_bill_customer_sk#1107) AND (sr_item_sk#671 = cs_item_sk#1119)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_returned_date_sk#669, sr_item_sk#671, sr_customer_sk#672, sr_return_quantity#679)
    // Right Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_returned_date_sk#669, sr_return_quantity#679, cs_sold_date_sk#1104, cs_quantity#1122)
    int left_nrow = tbl_JOIN_INNER_TD_10622_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10679_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_984_key_leftMajor, SW_JOIN_INNER_TD_984_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10622_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_customer_sk672_k = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 6);
            int32_t _sr_item_sk671_k = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_984_key_leftMajor keyA{_sr_customer_sk672_k, _sr_item_sk671_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 2);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 3);
            int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 4);
            int32_t _sr_item_sk671 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 5);
            int32_t _sr_customer_sk672 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 6);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_984_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_quantity1216, _sr_returned_date_sk669, _sr_item_sk671, _sr_customer_sk672, _sr_return_quantity679};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10679_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_Filter_TD_10679_output.getInt32(i, 1);
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_10679_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_984_key_leftMajor{_cs_bill_customer_sk1107_k, _cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int32_t _sr_customer_sk672 = (it->second)._sr_customer_sk672;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10679_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_10679_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_10679_output.getInt32(i, 2);
                int32_t _cs_quantity1122 = tbl_Filter_TD_10679_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 3, _ss_quantity1216);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 4, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 5, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 6, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 7, _cs_quantity1122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_984_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_984_key_rightMajor, SW_JOIN_INNER_TD_984_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10679_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_Filter_TD_10679_output.getInt32(i, 1);
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_10679_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_984_key_rightMajor keyA{_cs_bill_customer_sk1107_k, _cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10679_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_10679_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_10679_output.getInt32(i, 2);
            int32_t _cs_quantity1122 = tbl_Filter_TD_10679_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_984_payload_rightMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_item_sk1119, _cs_quantity1122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10622_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_customer_sk672_k = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 6);
            int32_t _sr_item_sk671_k = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 5);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_984_key_rightMajor{_sr_customer_sk672_k, _sr_item_sk671_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 2);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 3);
                int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 4);
                int32_t _sr_item_sk671 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 5);
                int32_t _sr_customer_sk672 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 6);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_10622_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 6, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 7, _cs_quantity1122);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 3, _ss_quantity1216);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 4, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_984_output.setInt32(r, 5, _sr_return_quantity679);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_984_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_984_output #Row: " << tbl_JOIN_INNER_TD_984_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8635(Table &tbl_SerializeFromObject_TD_9617_input, Table &tbl_Filter_TD_8635_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_quarter_name#13855 IN (2001Q1,2001Q2,2001Q3) AND isnotnull(d_date_sk#13840)))
    // Input: ListBuffer(d_date_sk#13840, d_quarter_name#13855)
    // Output: ListBuffer(d_date_sk#13840)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9617_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _d_quarter_name13855 = tbl_SerializeFromObject_TD_9617_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date_sk13840 = tbl_SerializeFromObject_TD_9617_input.getInt32(i, 0);
        auto reuse_col_str_365 = std::string(_d_quarter_name13855.data());
        if (((reuse_col_str_365 == "2001Q1") || (reuse_col_str_365 == "2001Q2") || (reuse_col_str_365 == "2001Q3") || (0)) && (_d_date_sk13840!= 0)) {
            int32_t _d_date_sk13840_t = tbl_SerializeFromObject_TD_9617_input.getInt32(i, 0);
            tbl_Filter_TD_8635_output.setInt32(r, 0, _d_date_sk13840_t);
            r++;
        }
    }
    tbl_Filter_TD_8635_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8635_output #Row: " << tbl_Filter_TD_8635_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8315_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8315_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8315_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8315_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8315_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _sr_returned_date_sk669;
    int32_t _sr_return_quantity679;
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_quantity1122;
};
struct SW_JOIN_INNER_TD_8315_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8315_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8315_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8315_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8315_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_8315(Table &tbl_JOIN_INNER_TD_984_output, Table &tbl_Filter_TD_9497_output, Table &tbl_JOIN_INNER_TD_8315_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = ss_sold_date_sk#1206))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_returned_date_sk#669, sr_return_quantity#679, cs_sold_date_sk#1104, cs_quantity#1122)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_returned_date_sk#669, sr_return_quantity#679, cs_sold_date_sk#1104, cs_quantity#1122)
    int left_nrow = tbl_JOIN_INNER_TD_984_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9497_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8315_key_leftMajor, SW_JOIN_INNER_TD_8315_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_984_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_984_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8315_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 2);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 3);
            int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 4);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 5);
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 6);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_8315_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_quantity1216, _sr_returned_date_sk669, _sr_return_quantity679, _cs_sold_date_sk1104, _cs_quantity1122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9497_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9497_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8315_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _d_date_sk120 = tbl_Filter_TD_9497_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 3, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 4, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 5, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 6, _cs_quantity1122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8315_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8315_key_rightMajor, SW_JOIN_INNER_TD_8315_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9497_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9497_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8315_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9497_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8315_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_984_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_984_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8315_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 2);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 3);
                int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 4);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 5);
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 6);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_984_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 3, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 4, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 5, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_8315_output.setInt32(r, 6, _cs_quantity1122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8315_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8315_output #Row: " << tbl_JOIN_INNER_TD_8315_output.getNumRow() << std::endl;
}

void SW_Filter_TD_774(Table &tbl_SerializeFromObject_TD_8622_input, Table &tbl_Filter_TD_774_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_quarter_name#13883 IN (2001Q1,2001Q2,2001Q3) AND isnotnull(d_date_sk#13868)))
    // Input: ListBuffer(d_date_sk#13868, d_quarter_name#13883)
    // Output: ListBuffer(d_date_sk#13868)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8622_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _d_quarter_name13883 = tbl_SerializeFromObject_TD_8622_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date_sk13868 = tbl_SerializeFromObject_TD_8622_input.getInt32(i, 0);
        auto reuse_col_str_48 = std::string(_d_quarter_name13883.data());
        if (((reuse_col_str_48 == "2001Q1") || (reuse_col_str_48 == "2001Q2") || (reuse_col_str_48 == "2001Q3") || (0)) && (_d_date_sk13868!= 0)) {
            int32_t _d_date_sk13868_t = tbl_SerializeFromObject_TD_8622_input.getInt32(i, 0);
            tbl_Filter_TD_774_output.setInt32(r, 0, _d_date_sk13868_t);
            r++;
        }
    }
    tbl_Filter_TD_774_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_774_output #Row: " << tbl_Filter_TD_774_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7266_key_leftMajor {
    int32_t _sr_returned_date_sk669;
    bool operator==(const SW_JOIN_INNER_TD_7266_key_leftMajor& other) const {
        return ((_sr_returned_date_sk669 == other._sr_returned_date_sk669));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7266_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7266_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_returned_date_sk669));
    }
};
}
struct SW_JOIN_INNER_TD_7266_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _sr_returned_date_sk669;
    int32_t _sr_return_quantity679;
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_quantity1122;
};
struct SW_JOIN_INNER_TD_7266_key_rightMajor {
    int32_t _d_date_sk13840;
    bool operator==(const SW_JOIN_INNER_TD_7266_key_rightMajor& other) const {
        return ((_d_date_sk13840 == other._d_date_sk13840));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7266_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7266_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk13840));
    }
};
}
struct SW_JOIN_INNER_TD_7266_payload_rightMajor {
    int32_t _d_date_sk13840;
};
void SW_JOIN_INNER_TD_7266(Table &tbl_JOIN_INNER_TD_8315_output, Table &tbl_Filter_TD_8635_output, Table &tbl_JOIN_INNER_TD_7266_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_returned_date_sk#669 = d_date_sk#13840))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_returned_date_sk#669, sr_return_quantity#679, cs_sold_date_sk#1104, cs_quantity#1122)
    // Right Table: ListBuffer(d_date_sk#13840)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_return_quantity#679, cs_sold_date_sk#1104, cs_quantity#1122)
    int left_nrow = tbl_JOIN_INNER_TD_8315_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8635_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7266_key_leftMajor, SW_JOIN_INNER_TD_7266_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8315_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7266_key_leftMajor keyA{_sr_returned_date_sk669_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 1);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 2);
            int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 3);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 4);
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 5);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_7266_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_quantity1216, _sr_returned_date_sk669, _sr_return_quantity679, _cs_sold_date_sk1104, _cs_quantity1122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8635_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk13840_k = tbl_Filter_TD_8635_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7266_key_leftMajor{_d_date_sk13840_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _d_date_sk13840 = tbl_Filter_TD_8635_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 3, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 4, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 5, _cs_quantity1122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7266_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7266_key_rightMajor, SW_JOIN_INNER_TD_7266_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8635_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk13840_k = tbl_Filter_TD_8635_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7266_key_rightMajor keyA{_d_date_sk13840_k};
            int32_t _d_date_sk13840 = tbl_Filter_TD_8635_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7266_payload_rightMajor payloadA{_d_date_sk13840};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8315_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7266_key_rightMajor{_sr_returned_date_sk669_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk13840 = (it->second)._d_date_sk13840;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 1);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 2);
                int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 3);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 4);
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 5);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_8315_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 3, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 4, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_7266_output.setInt32(r, 5, _cs_quantity1122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7266_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7266_output #Row: " << tbl_JOIN_INNER_TD_7266_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6141(Table &tbl_SerializeFromObject_TD_7210_input, Table &tbl_Filter_TD_6141_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378, s_state#402)
    // Output: ListBuffer(s_store_sk#378, s_state#402)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7210_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_7210_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_7210_input.getInt32(i, 0);
            tbl_Filter_TD_6141_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_t = tbl_SerializeFromObject_TD_7210_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6141_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_state402_t);
            r++;
        }
    }
    tbl_Filter_TD_6141_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6141_output #Row: " << tbl_Filter_TD_6141_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6433_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_6433_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6433_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6433_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_6433_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _sr_return_quantity679;
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_quantity1122;
};
struct SW_JOIN_INNER_TD_6433_key_rightMajor {
    int32_t _d_date_sk13868;
    bool operator==(const SW_JOIN_INNER_TD_6433_key_rightMajor& other) const {
        return ((_d_date_sk13868 == other._d_date_sk13868));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6433_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6433_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk13868));
    }
};
}
struct SW_JOIN_INNER_TD_6433_payload_rightMajor {
    int32_t _d_date_sk13868;
};
void SW_JOIN_INNER_TD_6433(Table &tbl_JOIN_INNER_TD_7266_output, Table &tbl_Filter_TD_774_output, Table &tbl_JOIN_INNER_TD_6433_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#13868))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_return_quantity#679, cs_sold_date_sk#1104, cs_quantity#1122)
    // Right Table: ListBuffer(d_date_sk#13868)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_return_quantity#679, cs_quantity#1122)
    int left_nrow = tbl_JOIN_INNER_TD_7266_output.getNumRow();
    int right_nrow = tbl_Filter_TD_774_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6433_key_leftMajor, SW_JOIN_INNER_TD_6433_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7266_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_6433_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 1);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 2);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 3);
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 4);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_6433_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_quantity1216, _sr_return_quantity679, _cs_sold_date_sk1104, _cs_quantity1122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_774_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk13868_k = tbl_Filter_TD_774_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6433_key_leftMajor{_d_date_sk13868_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _d_date_sk13868 = tbl_Filter_TD_774_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 3, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 4, _cs_quantity1122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6433_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6433_key_rightMajor, SW_JOIN_INNER_TD_6433_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_774_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk13868_k = tbl_Filter_TD_774_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6433_key_rightMajor keyA{_d_date_sk13868_k};
            int32_t _d_date_sk13868 = tbl_Filter_TD_774_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6433_payload_rightMajor payloadA{_d_date_sk13868};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7266_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6433_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk13868 = (it->second)._d_date_sk13868;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 1);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 2);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 3);
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 4);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_7266_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 3, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_6433_output.setInt32(r, 4, _cs_quantity1122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6433_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6433_output #Row: " << tbl_JOIN_INNER_TD_6433_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5167(Table &tbl_SerializeFromObject_TD_6359_input, Table &tbl_Filter_TD_5167_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6359_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_6359_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_6359_input.getInt32(i, 0);
            tbl_Filter_TD_5167_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_6359_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5167_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_6359_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5167_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_t);
            r++;
        }
    }
    tbl_Filter_TD_5167_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5167_output #Row: " << tbl_Filter_TD_5167_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_58_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_58_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_58_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_58_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_58_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _sr_return_quantity679;
    int32_t _cs_quantity1122;
};
struct SW_JOIN_INNER_TD_58_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_58_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_58_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_58_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_58_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_state402;
};
void SW_JOIN_INNER_TD_58(Table &tbl_JOIN_INNER_TD_6433_output, Table &tbl_Filter_TD_6141_output, Table &tbl_JOIN_INNER_TD_58_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_store_sk#378 = ss_store_sk#1213))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, sr_return_quantity#679, cs_quantity#1122)
    // Right Table: ListBuffer(s_store_sk#378, s_state#402)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_quantity#1216, sr_return_quantity#679, cs_quantity#1122, s_state#402)
    int left_nrow = tbl_JOIN_INNER_TD_6433_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6141_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_58_key_leftMajor, SW_JOIN_INNER_TD_58_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6433_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_58_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 1);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 2);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 3);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_58_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_quantity1216, _sr_return_quantity679, _cs_quantity1122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6141_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6141_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_58_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _s_store_sk378 = tbl_Filter_TD_6141_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_6141_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_state402 = std::string(_s_state402_n.data());
                tbl_JOIN_INNER_TD_58_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_58_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_58_output.setInt32(r, 2, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_58_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_INNER_TD_58_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_state402_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_58_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_58_key_rightMajor, SW_JOIN_INNER_TD_58_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6141_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6141_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_58_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_6141_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_6141_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_state402 = std::string(_s_state402_n.data());
            SW_JOIN_INNER_TD_58_payload_rightMajor payloadA{_s_store_sk378, _s_state402};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6433_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_58_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 1);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 2);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 3);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6433_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_58_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_state402_n);
                tbl_JOIN_INNER_TD_58_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_58_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_58_output.setInt32(r, 2, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_58_output.setInt32(r, 3, _cs_quantity1122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_58_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_58_output #Row: " << tbl_JOIN_INNER_TD_58_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4799_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_4799_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4799_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4799_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_4799_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_quantity1216;
    int32_t _sr_return_quantity679;
    int32_t _cs_quantity1122;
    std::string _s_state402;
};
struct SW_JOIN_INNER_TD_4799_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_4799_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4799_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4799_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_4799_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
};
void SW_JOIN_INNER_TD_4799(Table &tbl_JOIN_INNER_TD_58_output, Table &tbl_Filter_TD_5167_output, Table &tbl_JOIN_INNER_TD_4799_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = ss_item_sk#1208))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_quantity#1216, sr_return_quantity#679, cs_quantity#1122, s_state#402)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232)
    // Output Table: ListBuffer(ss_quantity#1216, sr_return_quantity#679, cs_quantity#1122, s_state#402, i_item_id#229, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_58_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5167_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4799_key_leftMajor, SW_JOIN_INNER_TD_4799_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_58_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_58_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4799_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_58_output.getInt32(i, 0);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_58_output.getInt32(i, 1);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_58_output.getInt32(i, 2);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_58_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_58_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _s_state402 = std::string(_s_state402_n.data());
            SW_JOIN_INNER_TD_4799_payload_leftMajor payloadA{_ss_item_sk1208, _ss_quantity1216, _sr_return_quantity679, _cs_quantity1122, _s_state402};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5167_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5167_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4799_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_5167_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_5167_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_5167_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_4799_output.setInt32(r, 0, _ss_quantity1216);
                tbl_JOIN_INNER_TD_4799_output.setInt32(r, 1, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_4799_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_4799_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_state402_n);
                tbl_JOIN_INNER_TD_4799_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4799_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4799_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4799_key_rightMajor, SW_JOIN_INNER_TD_4799_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5167_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5167_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4799_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_5167_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_5167_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_5167_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_4799_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_58_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_58_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4799_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_58_output.getInt32(i, 0);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_58_output.getInt32(i, 1);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_58_output.getInt32(i, 2);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_58_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_58_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _s_state402 = std::string(_s_state402_n.data());
                tbl_JOIN_INNER_TD_4799_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4799_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_4799_output.setInt32(r, 0, _ss_quantity1216);
                tbl_JOIN_INNER_TD_4799_output.setInt32(r, 1, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_4799_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_4799_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_state402_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4799_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4799_output #Row: " << tbl_JOIN_INNER_TD_4799_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3506_key {
    std::string _i_item_id229;
    std::string _i_item_desc232;
    std::string _s_state402;
    bool operator==(const SW_Aggregate_TD_3506_key& other) const { return (_i_item_id229 == other._i_item_id229) && (_i_item_desc232 == other._i_item_desc232) && (_s_state402 == other._s_state402); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3506_key> {
    std::size_t operator() (const SW_Aggregate_TD_3506_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229)) + (hash<string>()(k._i_item_desc232)) + (hash<string>()(k._s_state402));
    }
};
}
struct SW_Aggregate_TD_3506_payload {
    int64_t _store_sales_quantitycount13828L_count_0;
    int64_t _store_sales_quantityave13829_avg_1;
    int64_t _store_sales_quantitystdev13830_stddev_samp_2;
    int64_t _store_sales_quantitycov13831_stddev_samp_3;
    int64_t _store_sales_quantitycov13831_avg_4;
    int64_t _as_store_returns_quantitycount13832L_count_5;
    int64_t _as_store_returns_quantityave13833_avg_6;
    int64_t _as_store_returns_quantitystdev13834_stddev_samp_7;
    int64_t _store_returns_quantitycov13835_stddev_samp_8;
    int64_t _store_returns_quantitycov13835_avg_9;
    int64_t _catalog_sales_quantitycount13836L_count_10;
    int64_t _catalog_sales_quantityave13837_avg_11;
    int64_t _catalog_sales_quantitystdev13838_stddev_samp_12;
    int64_t _catalog_sales_quantitystdev13838_avg_13;
    int64_t _catalog_sales_quantitycov13839_stddev_samp_14;
    int64_t _catalog_sales_quantitycov13839_avg_15;
};
void SW_Aggregate_TD_3506(Table &tbl_JOIN_INNER_TD_4799_output, Table &tbl_Aggregate_TD_3506_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_desc#232, s_state#402, count(ss_quantity#1216) AS store_sales_quantitycount#13828L, avg(ss_quantity#1216) AS store_sales_quantityave#13829, stddev_samp(cast(ss_quantity#1216 as double)) AS store_sales_quantitystdev#13830, (stddev_samp(cast(ss_quantity#1216 as double)) / avg(ss_quantity#1216)) AS store_sales_quantitycov#13831, count(sr_return_quantity#679) AS as_store_returns_quantitycount#13832L, avg(sr_return_quantity#679) AS as_store_returns_quantityave#13833, stddev_samp(cast(sr_return_quantity#679 as double)) AS as_store_returns_quantitystdev#13834, (stddev_samp(cast(sr_return_quantity#679 as double)) / avg(sr_return_quantity#679)) AS store_returns_quantitycov#13835, count(cs_quantity#1122) AS catalog_sales_quantitycount#13836L, avg(cs_quantity#1122) AS catalog_sales_quantityave#13837, (stddev_samp(cast(cs_quantity#1122 as double)) / avg(cs_quantity#1122)) AS catalog_sales_quantitystdev#13838, (stddev_samp(cast(cs_quantity#1122 as double)) / avg(cs_quantity#1122)) AS catalog_sales_quantitycov#13839)
    // Input: ListBuffer(ss_quantity#1216, sr_return_quantity#679, cs_quantity#1122, s_state#402, i_item_id#229, i_item_desc#232)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, s_state#402, store_sales_quantitycount#13828L, store_sales_quantityave#13829, store_sales_quantitystdev#13830, store_sales_quantitycov#13831, as_store_returns_quantitycount#13832L, as_store_returns_quantityave#13833, as_store_returns_quantitystdev#13834, store_returns_quantitycov#13835, catalog_sales_quantitycount#13836L, catalog_sales_quantityave#13837, catalog_sales_quantitystdev#13838, catalog_sales_quantitycov#13839)
    std::unordered_map<SW_Aggregate_TD_3506_key, SW_Aggregate_TD_3506_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4799_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_4799_output.getInt32(i, 0);
        int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_4799_output.getInt32(i, 1);
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_4799_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402 = tbl_JOIN_INNER_TD_4799_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_4799_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_4799_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_3506_key k{std::string(_i_item_id229.data()), std::string(_i_item_desc232.data()), std::string(_s_state402.data())};
        int64_t _store_sales_quantitycount13828L_count_0 = _ss_quantity1216 != 0 ? 1 : 0;
        int64_t _store_sales_quantityave13829_avg_1 = _ss_quantity1216;
        int64_t _store_sales_quantitystdev13830_stddev_samp_2 = _ss_quantity1216;
        int64_t _store_sales_quantitycov13831_stddev_samp_3 = _ss_quantity1216;
        int64_t _store_sales_quantitycov13831_avg_4 = _ss_quantity1216;
        int64_t _as_store_returns_quantitycount13832L_count_5 = _sr_return_quantity679 != 0 ? 1 : 0;
        int64_t _as_store_returns_quantityave13833_avg_6 = _sr_return_quantity679;
        int64_t _as_store_returns_quantitystdev13834_stddev_samp_7 = _sr_return_quantity679;
        int64_t _store_returns_quantitycov13835_stddev_samp_8 = _sr_return_quantity679;
        int64_t _store_returns_quantitycov13835_avg_9 = _sr_return_quantity679;
        int64_t _catalog_sales_quantitycount13836L_count_10 = _cs_quantity1122 != 0 ? 1 : 0;
        int64_t _catalog_sales_quantityave13837_avg_11 = _cs_quantity1122;
        int64_t _catalog_sales_quantitystdev13838_stddev_samp_12 = _cs_quantity1122;
        int64_t _catalog_sales_quantitystdev13838_avg_13 = _cs_quantity1122;
        int64_t _catalog_sales_quantitycov13839_stddev_samp_14 = _cs_quantity1122;
        int64_t _catalog_sales_quantitycov13839_avg_15 = _cs_quantity1122;
        SW_Aggregate_TD_3506_payload p{_store_sales_quantitycount13828L_count_0, _store_sales_quantityave13829_avg_1, _store_sales_quantitystdev13830_stddev_samp_2, _store_sales_quantitycov13831_stddev_samp_3, _store_sales_quantitycov13831_avg_4, _as_store_returns_quantitycount13832L_count_5, _as_store_returns_quantityave13833_avg_6, _as_store_returns_quantitystdev13834_stddev_samp_7, _store_returns_quantitycov13835_stddev_samp_8, _store_returns_quantitycov13835_avg_9, _catalog_sales_quantitycount13836L_count_10, _catalog_sales_quantityave13837_avg_11, _catalog_sales_quantitystdev13838_stddev_samp_12, _catalog_sales_quantitystdev13838_avg_13, _catalog_sales_quantitycov13839_stddev_samp_14, _catalog_sales_quantitycov13839_avg_15};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._store_sales_quantitycount13828L_count_0 + _store_sales_quantitycount13828L_count_0;
            p._store_sales_quantitycount13828L_count_0 = count_0;
            // Unsupported payload Type
            p._store_sales_quantityave13829_avg_1 = avg_1;
        // Unsupported aggregation operation
        // Unsupported aggregation operation
            // Unsupported payload Type
            p._store_sales_quantitycov13831_avg_4 = avg_4;
            int64_t count_5 = (it->second)._as_store_returns_quantitycount13832L_count_5 + _as_store_returns_quantitycount13832L_count_5;
            p._as_store_returns_quantitycount13832L_count_5 = count_5;
            // Unsupported payload Type
            p._as_store_returns_quantityave13833_avg_6 = avg_6;
        // Unsupported aggregation operation
        // Unsupported aggregation operation
            // Unsupported payload Type
            p._store_returns_quantitycov13835_avg_9 = avg_9;
            int64_t count_10 = (it->second)._catalog_sales_quantitycount13836L_count_10 + _catalog_sales_quantitycount13836L_count_10;
            p._catalog_sales_quantitycount13836L_count_10 = count_10;
            // Unsupported payload Type
            p._catalog_sales_quantityave13837_avg_11 = avg_11;
        // Unsupported aggregation operation
            // Unsupported payload Type
            p._catalog_sales_quantitystdev13838_avg_13 = avg_13;
        // Unsupported aggregation operation
            // Unsupported payload Type
            p._catalog_sales_quantitycov13839_avg_15 = avg_15;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), ((it.first)._i_item_id229).data(), ((it.first)._i_item_id229).length());
        tbl_Aggregate_TD_3506_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), ((it.first)._i_item_desc232).data(), ((it.first)._i_item_desc232).length());
        tbl_Aggregate_TD_3506_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402{};
        memcpy(_s_state402.data(), ((it.first)._s_state402).data(), ((it.first)._s_state402).length());
        tbl_Aggregate_TD_3506_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402);
        int64_t _store_sales_quantitycount13828L = (it.second)._store_sales_quantitycount13828L_count_0;
        tbl_Aggregate_TD_3506_output.setInt64(r, 3, _store_sales_quantitycount13828L);
        int64_t _store_sales_quantityave13829 = (it.second)._store_sales_quantityave13829_avg_1 / nrow1;
        // Unsupported payload type: DoubleType
        int64_t _store_sales_quantitystdev13830 = _ss_quantity1216;
        // Unsupported payload type: DoubleType
        int64_t _store_sales_quantitycov13831 = (_ss_quantity1216 / (it.second)._store_sales_quantitycov13831_avg_4 / nrow1);
        // Unsupported payload type: DoubleType
        int64_t _as_store_returns_quantitycount13832L = (it.second)._as_store_returns_quantitycount13832L_count_5;
        tbl_Aggregate_TD_3506_output.setInt64(r, 7, _as_store_returns_quantitycount13832L);
        int64_t _as_store_returns_quantityave13833 = (it.second)._as_store_returns_quantityave13833_avg_6 / nrow1;
        // Unsupported payload type: DoubleType
        int64_t _as_store_returns_quantitystdev13834 = _sr_return_quantity679;
        // Unsupported payload type: DoubleType
        int64_t _store_returns_quantitycov13835 = (_sr_return_quantity679 / (it.second)._store_returns_quantitycov13835_avg_9 / nrow1);
        // Unsupported payload type: DoubleType
        int64_t _catalog_sales_quantitycount13836L = (it.second)._catalog_sales_quantitycount13836L_count_10;
        tbl_Aggregate_TD_3506_output.setInt64(r, 11, _catalog_sales_quantitycount13836L);
        int64_t _catalog_sales_quantityave13837 = (it.second)._catalog_sales_quantityave13837_avg_11 / nrow1;
        // Unsupported payload type: DoubleType
        int64_t _catalog_sales_quantitystdev13838 = (_cs_quantity1122 / (it.second)._catalog_sales_quantitystdev13838_avg_13 / nrow1);
        // Unsupported payload type: DoubleType
        int64_t _catalog_sales_quantitycov13839 = (_cs_quantity1122 / (it.second)._catalog_sales_quantitycov13839_avg_15 / nrow1);
        // Unsupported payload type: DoubleType
        ++r;
    }
    tbl_Aggregate_TD_3506_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3506_output #Row: " << tbl_Aggregate_TD_3506_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2371(Table &tbl_Aggregate_TD_3506_output, Table &tbl_Sort_TD_2371_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_item_id#229 ASC NULLS FIRST, i_item_desc#232 ASC NULLS FIRST, s_state#402 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, s_state#402, store_sales_quantitycount#13828L, store_sales_quantityave#13829, store_sales_quantitystdev#13830, store_sales_quantitycov#13831, as_store_returns_quantitycount#13832L, as_store_returns_quantityave#13833, as_store_returns_quantitystdev#13834, store_returns_quantitycov#13835, catalog_sales_quantitycount#13836L, catalog_sales_quantityave#13837, catalog_sales_quantitystdev#13838, catalog_sales_quantitycov#13839)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, s_state#402, store_sales_quantitycount#13828L, store_sales_quantityave#13829, store_sales_quantitystdev#13830, store_sales_quantitycov#13831, as_store_returns_quantitycount#13832L, as_store_returns_quantityave#13833, as_store_returns_quantitystdev#13834, store_returns_quantitycov#13835, catalog_sales_quantitycount#13836L, catalog_sales_quantityave#13837, catalog_sales_quantitystdev#13838, catalog_sales_quantitycov#13839)
    struct SW_Sort_TD_2371Row {
        std::string _i_item_id229;
        std::string _i_item_desc232;
        std::string _s_state402;
        int64_t _store_sales_quantitycount13828L;
        int32_t _store_sales_quantityave13829;
        int32_t _store_sales_quantitystdev13830;
        int32_t _store_sales_quantitycov13831;
        int64_t _as_store_returns_quantitycount13832L;
        int32_t _as_store_returns_quantityave13833;
        int32_t _as_store_returns_quantitystdev13834;
        int32_t _store_returns_quantitycov13835;
        int64_t _catalog_sales_quantitycount13836L;
        int32_t _catalog_sales_quantityave13837;
        int32_t _catalog_sales_quantitystdev13838;
        int32_t _catalog_sales_quantitycov13839;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2371Row& a, const SW_Sort_TD_2371Row& b) const { return 
 (a._i_item_id229 < b._i_item_id229) || 
 ((a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 < b._i_item_desc232)) || 
 ((a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 == b._i_item_desc232) && (a._s_state402 < b._s_state402)); 
}
    }SW_Sort_TD_2371_order; 

    int nrow1 = tbl_Aggregate_TD_3506_output.getNumRow();
    std::vector<SW_Sort_TD_2371Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3506_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Aggregate_TD_3506_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402 = tbl_Aggregate_TD_3506_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int64_t _store_sales_quantitycount13828L = tbl_Aggregate_TD_3506_output.getInt64(i, 3);
        int32_t _store_sales_quantityave13829 = tbl_Aggregate_TD_3506_output.getInt32(i, 4);
        int32_t _store_sales_quantitystdev13830 = tbl_Aggregate_TD_3506_output.getInt32(i, 5);
        int32_t _store_sales_quantitycov13831 = tbl_Aggregate_TD_3506_output.getInt32(i, 6);
        int64_t _as_store_returns_quantitycount13832L = tbl_Aggregate_TD_3506_output.getInt64(i, 7);
        int32_t _as_store_returns_quantityave13833 = tbl_Aggregate_TD_3506_output.getInt32(i, 8);
        int32_t _as_store_returns_quantitystdev13834 = tbl_Aggregate_TD_3506_output.getInt32(i, 9);
        int32_t _store_returns_quantitycov13835 = tbl_Aggregate_TD_3506_output.getInt32(i, 10);
        int64_t _catalog_sales_quantitycount13836L = tbl_Aggregate_TD_3506_output.getInt64(i, 11);
        int32_t _catalog_sales_quantityave13837 = tbl_Aggregate_TD_3506_output.getInt32(i, 12);
        int32_t _catalog_sales_quantitystdev13838 = tbl_Aggregate_TD_3506_output.getInt32(i, 13);
        int32_t _catalog_sales_quantitycov13839 = tbl_Aggregate_TD_3506_output.getInt32(i, 14);
        SW_Sort_TD_2371Row t = {std::string(_i_item_id229.data()),std::string(_i_item_desc232.data()),std::string(_s_state402.data()),_store_sales_quantitycount13828L,_store_sales_quantityave13829,_store_sales_quantitystdev13830,_store_sales_quantitycov13831,_as_store_returns_quantitycount13832L,_as_store_returns_quantityave13833,_as_store_returns_quantitystdev13834,_store_returns_quantitycov13835,_catalog_sales_quantitycount13836L,_catalog_sales_quantityave13837,_catalog_sales_quantitystdev13838,_catalog_sales_quantitycov13839};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2371_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2371_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_2371_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402{};
        memcpy(_s_state402.data(), (it._s_state402).data(), (it._s_state402).length());
        tbl_Sort_TD_2371_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_state402);
        tbl_Sort_TD_2371_output.setInt64(r, 3, it._store_sales_quantitycount13828L);
        tbl_Sort_TD_2371_output.setInt32(r, 4, it._store_sales_quantityave13829);
        tbl_Sort_TD_2371_output.setInt32(r, 5, it._store_sales_quantitystdev13830);
        tbl_Sort_TD_2371_output.setInt32(r, 6, it._store_sales_quantitycov13831);
        tbl_Sort_TD_2371_output.setInt64(r, 7, it._as_store_returns_quantitycount13832L);
        tbl_Sort_TD_2371_output.setInt32(r, 8, it._as_store_returns_quantityave13833);
        tbl_Sort_TD_2371_output.setInt32(r, 9, it._as_store_returns_quantitystdev13834);
        tbl_Sort_TD_2371_output.setInt32(r, 10, it._store_returns_quantitycov13835);
        tbl_Sort_TD_2371_output.setInt64(r, 11, it._catalog_sales_quantitycount13836L);
        tbl_Sort_TD_2371_output.setInt32(r, 12, it._catalog_sales_quantityave13837);
        tbl_Sort_TD_2371_output.setInt32(r, 13, it._catalog_sales_quantitystdev13838);
        tbl_Sort_TD_2371_output.setInt32(r, 14, it._catalog_sales_quantitycov13839);
        ++r;
    }
    tbl_Sort_TD_2371_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2371_output #Row: " << tbl_Sort_TD_2371_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1112(Table &tbl_Sort_TD_2371_output, Table &tbl_LocalLimit_TD_1112_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, s_state#402, store_sales_quantitycount#13828L, store_sales_quantityave#13829, store_sales_quantitystdev#13830, store_sales_quantitycov#13831, as_store_returns_quantitycount#13832L, as_store_returns_quantityave#13833, as_store_returns_quantitystdev#13834, store_returns_quantitycov#13835, catalog_sales_quantitycount#13836L, catalog_sales_quantityave#13837, catalog_sales_quantitystdev#13838, catalog_sales_quantitycov#13839)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, s_state#402, store_sales_quantitycount#13828L, store_sales_quantityave#13829, store_sales_quantitystdev#13830, store_sales_quantitycov#13831, as_store_returns_quantitycount#13832L, as_store_returns_quantityave#13833, as_store_returns_quantitystdev#13834, store_returns_quantitycov#13835, catalog_sales_quantitycount#13836L, catalog_sales_quantityave#13837, catalog_sales_quantitystdev#13838, catalog_sales_quantitycov#13839)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2371_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1112_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Sort_TD_2371_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1112_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Sort_TD_2371_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1112_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
        tbl_LocalLimit_TD_1112_output.setInt32(r, 3, tbl_Sort_TD_2371_output.getInt64(i, 3));
        // Unsupported Union key type
        // Unsupported Union key type
        // Unsupported Union key type
        tbl_LocalLimit_TD_1112_output.setInt32(r, 7, tbl_Sort_TD_2371_output.getInt64(i, 7));
        // Unsupported Union key type
        // Unsupported Union key type
        // Unsupported Union key type
        tbl_LocalLimit_TD_1112_output.setInt32(r, 11, tbl_Sort_TD_2371_output.getInt64(i, 11));
        // Unsupported Union key type
        // Unsupported Union key type
        // Unsupported Union key type
        r++;
    }
    tbl_LocalLimit_TD_1112_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1112_output #Row: " << tbl_LocalLimit_TD_1112_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0120(Table &tbl_LocalLimit_TD_1112_output, Table &tbl_GlobalLimit_TD_0120_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, s_state#402, store_sales_quantitycount#13828L, store_sales_quantityave#13829, store_sales_quantitystdev#13830, store_sales_quantitycov#13831, as_store_returns_quantitycount#13832L, as_store_returns_quantityave#13833, as_store_returns_quantitystdev#13834, store_returns_quantitycov#13835, catalog_sales_quantitycount#13836L, catalog_sales_quantityave#13837, catalog_sales_quantitystdev#13838, catalog_sales_quantitycov#13839)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, s_state#402, store_sales_quantitycount#13828L, store_sales_quantityave#13829, store_sales_quantitystdev#13830, store_sales_quantitycov#13831, as_store_returns_quantitycount#13832L, as_store_returns_quantityave#13833, as_store_returns_quantitystdev#13834, store_returns_quantitycov#13835, catalog_sales_quantitycount#13836L, catalog_sales_quantityave#13837, catalog_sales_quantitystdev#13838, catalog_sales_quantitycov#13839)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1112_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_LocalLimit_TD_1112_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_LocalLimit_TD_1112_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
        tbl_GlobalLimit_TD_0120_output.setInt32(r, 3, tbl_LocalLimit_TD_1112_output.getInt64(i, 3));
        // Unsupported Union key type
        // Unsupported Union key type
        // Unsupported Union key type
        tbl_GlobalLimit_TD_0120_output.setInt32(r, 7, tbl_LocalLimit_TD_1112_output.getInt64(i, 7));
        // Unsupported Union key type
        // Unsupported Union key type
        // Unsupported Union key type
        tbl_GlobalLimit_TD_0120_output.setInt32(r, 11, tbl_LocalLimit_TD_1112_output.getInt64(i, 11));
        // Unsupported Union key type
        // Unsupported Union key type
        // Unsupported Union key type
        r++;
    }
    tbl_GlobalLimit_TD_0120_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0120_output #Row: " << tbl_GlobalLimit_TD_0120_output.getNumRow() << std::endl;
}

