#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8286(Table &tbl_SerializeFromObject_TD_9796_input, Table &tbl_Filter_TD_8286_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_ticket_number#678L) AND isnotnull(sr_item_sk#671)))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9796_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_9796_input.getInt64(i, 1);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_9796_input.getInt32(i, 0);
        if ((_sr_ticket_number678L!= 0) && (_sr_item_sk671!= 0)) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_9796_input.getInt32(i, 0);
            tbl_Filter_TD_8286_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_9796_input.getInt64(i, 1);
            tbl_Filter_TD_8286_output.setInt64(r, 1, _sr_ticket_number678L_t);
            r++;
        }
    }
    tbl_Filter_TD_8286_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8286_output #Row: " << tbl_Filter_TD_8286_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8836(Table &tbl_SerializeFromObject_TD_9993_input, Table &tbl_Filter_TD_8836_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ss_ticket_number#1215L) AND isnotnull(ss_item_sk#1208)) AND isnotnull(ss_store_sk#1213)) AND isnotnull(ss_customer_sk#1209)))
    // Input: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_net_paid#1226)
    // Output: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_net_paid#1226)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9993_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_9993_input.getInt64(i, 3);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 2);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 1);
        if ((((_ss_ticket_number1215L!= 0) && (_ss_item_sk1208!= 0)) && (_ss_store_sk1213!= 0)) && (_ss_customer_sk1209!= 0)) {
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 0);
            tbl_Filter_TD_8836_output.setInt32(r, 0, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 1);
            tbl_Filter_TD_8836_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 2);
            tbl_Filter_TD_8836_output.setInt32(r, 2, _ss_store_sk1213_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_9993_input.getInt64(i, 3);
            tbl_Filter_TD_8836_output.setInt64(r, 3, _ss_ticket_number1215L_t);
            int32_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_9993_input.getInt32(i, 4);
            tbl_Filter_TD_8836_output.setInt32(r, 4, _ss_net_paid1226_t);
            r++;
        }
    }
    tbl_Filter_TD_8836_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8836_output #Row: " << tbl_Filter_TD_8836_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8848(Table &tbl_SerializeFromObject_TD_984_input, Table &tbl_Filter_TD_8848_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_ticket_number#678L) AND isnotnull(sr_item_sk#671)))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_984_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_984_input.getInt64(i, 1);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_984_input.getInt32(i, 0);
        if ((_sr_ticket_number678L!= 0) && (_sr_item_sk671!= 0)) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_984_input.getInt32(i, 0);
            tbl_Filter_TD_8848_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_984_input.getInt64(i, 1);
            tbl_Filter_TD_8848_output.setInt64(r, 1, _sr_ticket_number678L_t);
            r++;
        }
    }
    tbl_Filter_TD_8848_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8848_output #Row: " << tbl_Filter_TD_8848_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8905(Table &tbl_SerializeFromObject_TD_9303_input, Table &tbl_Filter_TD_8905_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ss_ticket_number#1215L) AND isnotnull(ss_item_sk#1208)) AND isnotnull(ss_store_sk#1213)) AND isnotnull(ss_customer_sk#1209)))
    // Input: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_net_paid#1226)
    // Output: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_net_paid#1226)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9303_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_9303_input.getInt64(i, 3);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_9303_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_9303_input.getInt32(i, 2);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_9303_input.getInt32(i, 1);
        if ((((_ss_ticket_number1215L!= 0) && (_ss_item_sk1208!= 0)) && (_ss_store_sk1213!= 0)) && (_ss_customer_sk1209!= 0)) {
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_9303_input.getInt32(i, 0);
            tbl_Filter_TD_8905_output.setInt32(r, 0, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_9303_input.getInt32(i, 1);
            tbl_Filter_TD_8905_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_9303_input.getInt32(i, 2);
            tbl_Filter_TD_8905_output.setInt32(r, 2, _ss_store_sk1213_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_9303_input.getInt64(i, 3);
            tbl_Filter_TD_8905_output.setInt64(r, 3, _ss_ticket_number1215L_t);
            int32_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_9303_input.getInt32(i, 4);
            tbl_Filter_TD_8905_output.setInt32(r, 4, _ss_net_paid1226_t);
            r++;
        }
    }
    tbl_Filter_TD_8905_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8905_output #Row: " << tbl_Filter_TD_8905_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7340(Table &tbl_SerializeFromObject_TD_8523_input, Table &tbl_Filter_TD_7340_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(s_market_id#388) AND (s_market_id#388 = 8)) AND isnotnull(s_store_sk#378)) AND isnotnull(s_zip#403)))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383, s_state#402, s_zip#403, s_market_id#388)
    // Output: ListBuffer(s_store_sk#378, s_store_name#383, s_state#402, s_zip#403)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8523_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_market_id388 = tbl_SerializeFromObject_TD_8523_input.getInt32(i, 4);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_8523_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_zip403 = tbl_SerializeFromObject_TD_8523_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        if ((((_s_market_id388!= 0) && (_s_market_id388 == 8)) && (_s_store_sk378!= 0)) && （std::string(_isnotnulls_zip403.data()) != "NULL")) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_8523_input.getInt32(i, 0);
            tbl_Filter_TD_7340_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_8523_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_t = tbl_SerializeFromObject_TD_8523_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_t = tbl_SerializeFromObject_TD_8523_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_7340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_zip403_t);
            r++;
        }
    }
    tbl_Filter_TD_7340_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7340_output #Row: " << tbl_Filter_TD_7340_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7977_key_leftMajor {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_7977_key_leftMajor& other) const {
        return ((_ss_ticket_number1215L == other._ss_ticket_number1215L) && (_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7977_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7977_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ss_ticket_number1215L)) + (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_7977_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_net_paid1226;
};
struct SW_JOIN_INNER_TD_7977_key_rightMajor {
    int64_t _sr_ticket_number678L;
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_INNER_TD_7977_key_rightMajor& other) const {
        return ((_sr_ticket_number678L == other._sr_ticket_number678L) && (_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7977_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7977_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._sr_ticket_number678L)) + (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_INNER_TD_7977_payload_rightMajor {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
};
void SW_JOIN_INNER_TD_7977(Table &tbl_Filter_TD_8836_output, Table &tbl_Filter_TD_8286_output, Table &tbl_JOIN_INNER_TD_7977_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ss_ticket_number#1215L = sr_ticket_number#678L) AND (ss_item_sk#1208 = sr_item_sk#671)))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_net_paid#1226)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_net_paid#1226)
    int left_nrow = tbl_Filter_TD_8836_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8286_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7977_key_leftMajor, SW_JOIN_INNER_TD_7977_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8836_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_8836_output.getInt64(i, 3);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_8836_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7977_key_leftMajor keyA{_ss_ticket_number1215L_k, _ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_Filter_TD_8836_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_8836_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_8836_output.getInt32(i, 2);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_8836_output.getInt64(i, 3);
            int32_t _ss_net_paid1226 = tbl_Filter_TD_8836_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7977_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_store_sk1213, _ss_ticket_number1215L, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8286_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_8286_output.getInt64(i, 1);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_8286_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7977_key_leftMajor{_sr_ticket_number678L_k, _sr_item_sk671_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _sr_item_sk671 = tbl_Filter_TD_8286_output.getInt32(i, 0);
                int64_t _sr_ticket_number678L = tbl_Filter_TD_8286_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_7977_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7977_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7977_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7977_output.setInt32(r, 3, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7977_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7977_key_rightMajor, SW_JOIN_INNER_TD_7977_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8286_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_8286_output.getInt64(i, 1);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_8286_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7977_key_rightMajor keyA{_sr_ticket_number678L_k, _sr_item_sk671_k};
            int32_t _sr_item_sk671 = tbl_Filter_TD_8286_output.getInt32(i, 0);
            int64_t _sr_ticket_number678L = tbl_Filter_TD_8286_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_7977_payload_rightMajor payloadA{_sr_item_sk671, _sr_ticket_number678L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8836_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_8836_output.getInt64(i, 3);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_8836_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7977_key_rightMajor{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it->second)._sr_ticket_number678L;
                int32_t _ss_item_sk1208 = tbl_Filter_TD_8836_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_8836_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_8836_output.getInt32(i, 2);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_8836_output.getInt64(i, 3);
                int32_t _ss_net_paid1226 = tbl_Filter_TD_8836_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7977_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7977_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7977_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7977_output.setInt32(r, 3, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7977_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7977_output #Row: " << tbl_JOIN_INNER_TD_7977_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7500(Table &tbl_SerializeFromObject_TD_8872_input, Table &tbl_Filter_TD_7500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(s_market_id#388) AND (s_market_id#388 = 8)) AND isnotnull(s_store_sk#378)) AND isnotnull(s_zip#403)))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383, s_state#402, s_zip#403, s_market_id#388)
    // Output: ListBuffer(s_store_sk#378, s_store_name#383, s_state#402, s_zip#403)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8872_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_market_id388 = tbl_SerializeFromObject_TD_8872_input.getInt32(i, 4);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_8872_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_zip403 = tbl_SerializeFromObject_TD_8872_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        if ((((_s_market_id388!= 0) && (_s_market_id388 == 8)) && (_s_store_sk378!= 0)) && （std::string(_isnotnulls_zip403.data()) != "NULL")) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_8872_input.getInt32(i, 0);
            tbl_Filter_TD_7500_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_8872_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_t = tbl_SerializeFromObject_TD_8872_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_t = tbl_SerializeFromObject_TD_8872_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_7500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_zip403_t);
            r++;
        }
    }
    tbl_Filter_TD_7500_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7500_output #Row: " << tbl_Filter_TD_7500_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7177_key_leftMajor {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_7177_key_leftMajor& other) const {
        return ((_ss_ticket_number1215L == other._ss_ticket_number1215L) && (_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7177_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7177_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ss_ticket_number1215L)) + (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_7177_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_net_paid1226;
};
struct SW_JOIN_INNER_TD_7177_key_rightMajor {
    int64_t _sr_ticket_number678L;
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_INNER_TD_7177_key_rightMajor& other) const {
        return ((_sr_ticket_number678L == other._sr_ticket_number678L) && (_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7177_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7177_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._sr_ticket_number678L)) + (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_INNER_TD_7177_payload_rightMajor {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
};
void SW_JOIN_INNER_TD_7177(Table &tbl_Filter_TD_8905_output, Table &tbl_Filter_TD_8848_output, Table &tbl_JOIN_INNER_TD_7177_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ss_ticket_number#1215L = sr_ticket_number#678L) AND (ss_item_sk#1208 = sr_item_sk#671)))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ticket_number#1215L, ss_net_paid#1226)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_net_paid#1226)
    int left_nrow = tbl_Filter_TD_8905_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8848_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7177_key_leftMajor, SW_JOIN_INNER_TD_7177_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8905_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_8905_output.getInt64(i, 3);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_8905_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7177_key_leftMajor keyA{_ss_ticket_number1215L_k, _ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_Filter_TD_8905_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_8905_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_8905_output.getInt32(i, 2);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_8905_output.getInt64(i, 3);
            int32_t _ss_net_paid1226 = tbl_Filter_TD_8905_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7177_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_store_sk1213, _ss_ticket_number1215L, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8848_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_8848_output.getInt64(i, 1);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_8848_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7177_key_leftMajor{_sr_ticket_number678L_k, _sr_item_sk671_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _sr_item_sk671 = tbl_Filter_TD_8848_output.getInt32(i, 0);
                int64_t _sr_ticket_number678L = tbl_Filter_TD_8848_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_7177_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7177_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7177_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7177_output.setInt32(r, 3, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7177_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7177_key_rightMajor, SW_JOIN_INNER_TD_7177_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8848_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_8848_output.getInt64(i, 1);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_8848_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7177_key_rightMajor keyA{_sr_ticket_number678L_k, _sr_item_sk671_k};
            int32_t _sr_item_sk671 = tbl_Filter_TD_8848_output.getInt32(i, 0);
            int64_t _sr_ticket_number678L = tbl_Filter_TD_8848_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_7177_payload_rightMajor payloadA{_sr_item_sk671, _sr_ticket_number678L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8905_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_8905_output.getInt64(i, 3);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_8905_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7177_key_rightMajor{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it->second)._sr_ticket_number678L;
                int32_t _ss_item_sk1208 = tbl_Filter_TD_8905_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_8905_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_8905_output.getInt32(i, 2);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_8905_output.getInt64(i, 3);
                int32_t _ss_net_paid1226 = tbl_Filter_TD_8905_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7177_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7177_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7177_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7177_output.setInt32(r, 3, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7177_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7177_output #Row: " << tbl_JOIN_INNER_TD_7177_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6691(Table &tbl_SerializeFromObject_TD_7502_input, Table &tbl_Filter_TD_6691_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    // Output: ListBuffer(i_item_sk#228, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7502_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7502_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7502_input.getInt32(i, 0);
            tbl_Filter_TD_6691_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_current_price233_t = tbl_SerializeFromObject_TD_7502_input.getInt32(i, 1);
            tbl_Filter_TD_6691_output.setInt32(r, 1, _i_current_price233_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_size243_t = tbl_SerializeFromObject_TD_7502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_size243_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_color245_t = tbl_SerializeFromObject_TD_7502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_6691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_color245_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_units246_t = tbl_SerializeFromObject_TD_7502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_6691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_units246_t);
            int32_t _i_manager_id248_t = tbl_SerializeFromObject_TD_7502_input.getInt32(i, 5);
            tbl_Filter_TD_6691_output.setInt32(r, 5, _i_manager_id248_t);
            r++;
        }
    }
    tbl_Filter_TD_6691_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6691_output #Row: " << tbl_Filter_TD_6691_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6526_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_6526_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6526_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6526_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_6526_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int32_t _ss_net_paid1226;
};
struct SW_JOIN_INNER_TD_6526_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_6526_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6526_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6526_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_6526_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_name383;
    std::string _s_state402;
    std::string _s_zip403;
};
void SW_JOIN_INNER_TD_6526(Table &tbl_JOIN_INNER_TD_7977_output, Table &tbl_Filter_TD_7340_output, Table &tbl_JOIN_INNER_TD_6526_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_net_paid#1226)
    // Right Table: ListBuffer(s_store_sk#378, s_store_name#383, s_state#402, s_zip#403)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403)
    int left_nrow = tbl_JOIN_INNER_TD_7977_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7340_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6526_key_leftMajor, SW_JOIN_INNER_TD_6526_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7977_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6526_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 2);
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6526_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_store_sk1213, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7340_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7340_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6526_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _s_store_sk378 = tbl_Filter_TD_7340_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_7340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_state402 = std::string(_s_state402_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_7340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                tbl_JOIN_INNER_TD_6526_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6526_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6526_output.setInt32(r, 2, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_6526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383_n);
                tbl_JOIN_INNER_TD_6526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_state402_n);
                tbl_JOIN_INNER_TD_6526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_zip403_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6526_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6526_key_rightMajor, SW_JOIN_INNER_TD_6526_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7340_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7340_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6526_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_7340_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_7340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_state402 = std::string(_s_state402_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_7340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            SW_JOIN_INNER_TD_6526_payload_rightMajor payloadA{_s_store_sk378, _s_store_name383, _s_state402, _s_zip403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7977_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6526_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 2);
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_7977_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383_n);
                tbl_JOIN_INNER_TD_6526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_state402_n);
                tbl_JOIN_INNER_TD_6526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_zip403_n);
                tbl_JOIN_INNER_TD_6526_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6526_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6526_output.setInt32(r, 2, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6526_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6526_output #Row: " << tbl_JOIN_INNER_TD_6526_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6286(Table &tbl_SerializeFromObject_TD_766_input, Table &tbl_Filter_TD_6286_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_color#245) AND (i_color#245 = chiffon)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    // Output: ListBuffer(i_item_sk#228, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_766_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_color245 = tbl_SerializeFromObject_TD_766_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_766_input.getInt32(i, 0);
        if ((（std::string(_isnotnulli_color245.data()) != "NULL") && (std::string(_i_color245.data()) == "chiffon")) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_766_input.getInt32(i, 0);
            tbl_Filter_TD_6286_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_current_price233_t = tbl_SerializeFromObject_TD_766_input.getInt32(i, 1);
            tbl_Filter_TD_6286_output.setInt32(r, 1, _i_current_price233_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_size243_t = tbl_SerializeFromObject_TD_766_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6286_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_size243_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_color245_t = tbl_SerializeFromObject_TD_766_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_6286_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_color245_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_units246_t = tbl_SerializeFromObject_TD_766_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_6286_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_units246_t);
            int32_t _i_manager_id248_t = tbl_SerializeFromObject_TD_766_input.getInt32(i, 5);
            tbl_Filter_TD_6286_output.setInt32(r, 5, _i_manager_id248_t);
            r++;
        }
    }
    tbl_Filter_TD_6286_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6286_output #Row: " << tbl_Filter_TD_6286_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6700_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_6700_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6700_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6700_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_6700_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int32_t _ss_net_paid1226;
};
struct SW_JOIN_INNER_TD_6700_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_6700_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6700_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6700_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_6700_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_name383;
    std::string _s_state402;
    std::string _s_zip403;
};
void SW_JOIN_INNER_TD_6700(Table &tbl_JOIN_INNER_TD_7177_output, Table &tbl_Filter_TD_7500_output, Table &tbl_JOIN_INNER_TD_6700_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_net_paid#1226)
    // Right Table: ListBuffer(s_store_sk#378, s_store_name#383, s_state#402, s_zip#403)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403)
    int left_nrow = tbl_JOIN_INNER_TD_7177_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7500_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6700_key_leftMajor, SW_JOIN_INNER_TD_6700_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7177_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6700_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 2);
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6700_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_store_sk1213, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7500_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7500_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6700_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _s_store_sk378 = tbl_Filter_TD_7500_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_7500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_state402 = std::string(_s_state402_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_7500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                tbl_JOIN_INNER_TD_6700_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6700_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6700_output.setInt32(r, 2, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_6700_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383_n);
                tbl_JOIN_INNER_TD_6700_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_state402_n);
                tbl_JOIN_INNER_TD_6700_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_zip403_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6700_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6700_key_rightMajor, SW_JOIN_INNER_TD_6700_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7500_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7500_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6700_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_7500_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_7500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_state402 = std::string(_s_state402_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_7500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            SW_JOIN_INNER_TD_6700_payload_rightMajor payloadA{_s_store_sk378, _s_store_name383, _s_state402, _s_zip403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7177_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6700_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 2);
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_7177_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6700_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383_n);
                tbl_JOIN_INNER_TD_6700_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_state402_n);
                tbl_JOIN_INNER_TD_6700_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_zip403_n);
                tbl_JOIN_INNER_TD_6700_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6700_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6700_output.setInt32(r, 2, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6700_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6700_output #Row: " << tbl_JOIN_INNER_TD_6700_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5141(Table &tbl_SerializeFromObject_TD_6707_input, Table &tbl_Filter_TD_5141_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_birth_country#14)))
    // Input: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9, c_birth_country#14)
    // Output: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9, c_birth_country#14)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6707_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_6707_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14 = tbl_SerializeFromObject_TD_6707_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        if ((_c_customer_sk0!= 0) && （std::string(_isnotnullc_birth_country14.data()) != "NULL")) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_6707_input.getInt32(i, 0);
            tbl_Filter_TD_5141_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_6707_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5141_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_6707_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5141_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_t = tbl_SerializeFromObject_TD_6707_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_5141_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_birth_country14_t);
            r++;
        }
    }
    tbl_Filter_TD_5141_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5141_output #Row: " << tbl_Filter_TD_5141_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5944_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_5944_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5944_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5944_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_5944_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_net_paid1226;
    std::string _s_store_name383;
    std::string _s_state402;
    std::string _s_zip403;
};
struct SW_JOIN_INNER_TD_5944_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5944_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5944_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5944_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5944_payload_rightMajor {
    int32_t _i_item_sk228;
    int32_t _i_current_price233;
    std::string _i_size243;
    std::string _i_color245;
    std::string _i_units246;
    int32_t _i_manager_id248;
};
void SW_JOIN_INNER_TD_5944(Table &tbl_JOIN_INNER_TD_6526_output, Table &tbl_Filter_TD_6691_output, Table &tbl_JOIN_INNER_TD_5944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403)
    // Right Table: ListBuffer(i_item_sk#228, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    int left_nrow = tbl_JOIN_INNER_TD_6526_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6691_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5944_key_leftMajor, SW_JOIN_INNER_TD_5944_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6526_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6526_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5944_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6526_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6526_output.getInt32(i, 1);
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_6526_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_6526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_6526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _s_state402 = std::string(_s_state402_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_6526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            SW_JOIN_INNER_TD_5944_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_net_paid1226, _s_store_name383, _s_state402, _s_zip403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6691_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6691_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5944_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_6691_output.getInt32(i, 0);
                int32_t _i_current_price233 = tbl_Filter_TD_6691_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_Filter_TD_6691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_size243 = std::string(_i_size243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_Filter_TD_6691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_color245 = std::string(_i_color245_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_Filter_TD_6691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_units246 = std::string(_i_units246_n.data());
                int32_t _i_manager_id248 = tbl_Filter_TD_6691_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_5944_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_5944_output.setInt32(r, 1, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_state402_n);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_zip403_n);
                tbl_JOIN_INNER_TD_5944_output.setInt32(r, 5, _i_current_price233);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_size243_n);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_color245_n);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _i_units246_n);
                tbl_JOIN_INNER_TD_5944_output.setInt32(r, 9, _i_manager_id248);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5944_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5944_key_rightMajor, SW_JOIN_INNER_TD_5944_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6691_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6691_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5944_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6691_output.getInt32(i, 0);
            int32_t _i_current_price233 = tbl_Filter_TD_6691_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_Filter_TD_6691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_size243 = std::string(_i_size243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_Filter_TD_6691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_color245 = std::string(_i_color245_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_Filter_TD_6691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_units246 = std::string(_i_units246_n.data());
            int32_t _i_manager_id248 = tbl_Filter_TD_6691_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_5944_payload_rightMajor payloadA{_i_item_sk228, _i_current_price233, _i_size243, _i_color245, _i_units246, _i_manager_id248};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6526_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6526_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5944_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                std::string _i_size243 = (it->second)._i_size243;
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n{};
                memcpy(_i_size243_n.data(), (_i_size243).data(), (_i_size243).length());
                std::string _i_color245 = (it->second)._i_color245;
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n{};
                memcpy(_i_color245_n.data(), (_i_color245).data(), (_i_color245).length());
                std::string _i_units246 = (it->second)._i_units246;
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n{};
                memcpy(_i_units246_n.data(), (_i_units246).data(), (_i_units246).length());
                int32_t _i_manager_id248 = (it->second)._i_manager_id248;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6526_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6526_output.getInt32(i, 1);
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_6526_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_6526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_6526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _s_state402 = std::string(_s_state402_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_6526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                tbl_JOIN_INNER_TD_5944_output.setInt32(r, 5, _i_current_price233);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_size243_n);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_color245_n);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _i_units246_n);
                tbl_JOIN_INNER_TD_5944_output.setInt32(r, 9, _i_manager_id248);
                tbl_JOIN_INNER_TD_5944_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_5944_output.setInt32(r, 1, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_state402_n);
                tbl_JOIN_INNER_TD_5944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_zip403_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5944_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5944_output #Row: " << tbl_JOIN_INNER_TD_5944_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5513(Table &tbl_SerializeFromObject_TD_6785_input, Table &tbl_Filter_TD_5513_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_birth_country#14)))
    // Input: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9, c_birth_country#14)
    // Output: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9, c_birth_country#14)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6785_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_6785_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14 = tbl_SerializeFromObject_TD_6785_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        if ((_c_customer_sk0!= 0) && （std::string(_isnotnullc_birth_country14.data()) != "NULL")) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_6785_input.getInt32(i, 0);
            tbl_Filter_TD_5513_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_6785_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5513_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_6785_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5513_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_t = tbl_SerializeFromObject_TD_6785_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_5513_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_birth_country14_t);
            r++;
        }
    }
    tbl_Filter_TD_5513_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5513_output #Row: " << tbl_Filter_TD_5513_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5888_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_5888_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5888_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5888_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_5888_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_net_paid1226;
    std::string _s_store_name383;
    std::string _s_state402;
    std::string _s_zip403;
};
struct SW_JOIN_INNER_TD_5888_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5888_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5888_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5888_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5888_payload_rightMajor {
    int32_t _i_item_sk228;
    int32_t _i_current_price233;
    std::string _i_size243;
    std::string _i_color245;
    std::string _i_units246;
    int32_t _i_manager_id248;
};
void SW_JOIN_INNER_TD_5888(Table &tbl_JOIN_INNER_TD_6700_output, Table &tbl_Filter_TD_6286_output, Table &tbl_JOIN_INNER_TD_5888_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403)
    // Right Table: ListBuffer(i_item_sk#228, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    int left_nrow = tbl_JOIN_INNER_TD_6700_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6286_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5888_key_leftMajor, SW_JOIN_INNER_TD_5888_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6700_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6700_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5888_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6700_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6700_output.getInt32(i, 1);
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_6700_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_6700_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_6700_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _s_state402 = std::string(_s_state402_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_6700_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            SW_JOIN_INNER_TD_5888_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_net_paid1226, _s_store_name383, _s_state402, _s_zip403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6286_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6286_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5888_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_6286_output.getInt32(i, 0);
                int32_t _i_current_price233 = tbl_Filter_TD_6286_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_Filter_TD_6286_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_size243 = std::string(_i_size243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_Filter_TD_6286_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_color245 = std::string(_i_color245_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_Filter_TD_6286_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_units246 = std::string(_i_units246_n.data());
                int32_t _i_manager_id248 = tbl_Filter_TD_6286_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_5888_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_5888_output.setInt32(r, 1, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_state402_n);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_zip403_n);
                tbl_JOIN_INNER_TD_5888_output.setInt32(r, 5, _i_current_price233);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_size243_n);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_color245_n);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _i_units246_n);
                tbl_JOIN_INNER_TD_5888_output.setInt32(r, 9, _i_manager_id248);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5888_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5888_key_rightMajor, SW_JOIN_INNER_TD_5888_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6286_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6286_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5888_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6286_output.getInt32(i, 0);
            int32_t _i_current_price233 = tbl_Filter_TD_6286_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_Filter_TD_6286_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_size243 = std::string(_i_size243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_Filter_TD_6286_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_color245 = std::string(_i_color245_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_Filter_TD_6286_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_units246 = std::string(_i_units246_n.data());
            int32_t _i_manager_id248 = tbl_Filter_TD_6286_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_5888_payload_rightMajor payloadA{_i_item_sk228, _i_current_price233, _i_size243, _i_color245, _i_units246, _i_manager_id248};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6700_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6700_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5888_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                std::string _i_size243 = (it->second)._i_size243;
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n{};
                memcpy(_i_size243_n.data(), (_i_size243).data(), (_i_size243).length());
                std::string _i_color245 = (it->second)._i_color245;
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n{};
                memcpy(_i_color245_n.data(), (_i_color245).data(), (_i_color245).length());
                std::string _i_units246 = (it->second)._i_units246;
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n{};
                memcpy(_i_units246_n.data(), (_i_units246).data(), (_i_units246).length());
                int32_t _i_manager_id248 = (it->second)._i_manager_id248;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6700_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6700_output.getInt32(i, 1);
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_6700_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_6700_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_6700_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _s_state402 = std::string(_s_state402_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_6700_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                tbl_JOIN_INNER_TD_5888_output.setInt32(r, 5, _i_current_price233);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_size243_n);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_color245_n);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _i_units246_n);
                tbl_JOIN_INNER_TD_5888_output.setInt32(r, 9, _i_manager_id248);
                tbl_JOIN_INNER_TD_5888_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_5888_output.setInt32(r, 1, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_state402_n);
                tbl_JOIN_INNER_TD_5888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_zip403_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5888_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5888_output #Row: " << tbl_JOIN_INNER_TD_5888_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4900(Table &tbl_SerializeFromObject_TD_5147_input, Table &tbl_Filter_TD_4900_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_country#64) AND isnotnull(ca_zip#63)))
    // Input: ListBuffer(ca_state#62, ca_zip#63, ca_country#64)
    // Output: ListBuffer(ca_state#62, ca_zip#63, ca_country#64)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5147_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_country64 = tbl_SerializeFromObject_TD_5147_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_SerializeFromObject_TD_5147_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (（std::string(_isnotnullca_country64.data()) != "NULL") && （std::string(_isnotnullca_zip63.data()) != "NULL")) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_5147_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_4900_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_t = tbl_SerializeFromObject_TD_5147_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_4900_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_zip63_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_country64_t = tbl_SerializeFromObject_TD_5147_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_4900_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_country64_t);
            r++;
        }
    }
    tbl_Filter_TD_4900_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4900_output #Row: " << tbl_Filter_TD_4900_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4772_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_4772_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4772_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4772_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_4772_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_net_paid1226;
    std::string _s_store_name383;
    std::string _s_state402;
    std::string _s_zip403;
    int32_t _i_current_price233;
    std::string _i_size243;
    std::string _i_color245;
    std::string _i_units246;
    int32_t _i_manager_id248;
};
struct SW_JOIN_INNER_TD_4772_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_4772_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4772_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4772_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_4772_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_birth_country14;
};
void SW_JOIN_INNER_TD_4772(Table &tbl_JOIN_INNER_TD_5944_output, Table &tbl_Filter_TD_5141_output, Table &tbl_JOIN_INNER_TD_4772_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    // Right Table: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9, c_birth_country#14)
    // Output Table: ListBuffer(ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248, c_first_name#8, c_last_name#9, c_birth_country#14)
    int left_nrow = tbl_JOIN_INNER_TD_5944_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5141_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4772_key_leftMajor, SW_JOIN_INNER_TD_4772_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5944_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4772_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 0);
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_state402 = std::string(_s_state402_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_size243 = std::string(_i_size243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _i_color245 = std::string(_i_color245_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _i_units246 = std::string(_i_units246_n.data());
            int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_4772_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_net_paid1226, _s_store_name383, _s_state402, _s_zip403, _i_current_price233, _i_size243, _i_color245, _i_units246, _i_manager_id248};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5141_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5141_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4772_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                std::string _i_size243 = (it->second)._i_size243;
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n{};
                memcpy(_i_size243_n.data(), (_i_size243).data(), (_i_size243).length());
                std::string _i_color245 = (it->second)._i_color245;
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n{};
                memcpy(_i_color245_n.data(), (_i_color245).data(), (_i_color245).length());
                std::string _i_units246 = (it->second)._i_units246;
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n{};
                memcpy(_i_units246_n.data(), (_i_units246).data(), (_i_units246).length());
                int32_t _i_manager_id248 = (it->second)._i_manager_id248;
                int32_t _c_customer_sk0 = tbl_Filter_TD_5141_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5141_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5141_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_5141_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                tbl_JOIN_INNER_TD_4772_output.setInt32(r, 0, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_zip403_n);
                tbl_JOIN_INNER_TD_4772_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_size243_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_color245_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_units246_n);
                tbl_JOIN_INNER_TD_4772_output.setInt32(r, 8, _i_manager_id248);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_last_name9_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_birth_country14_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4772_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4772_key_rightMajor, SW_JOIN_INNER_TD_4772_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5141_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5141_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4772_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_5141_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5141_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5141_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_5141_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            SW_JOIN_INNER_TD_4772_payload_rightMajor payloadA{_c_customer_sk0, _c_first_name8, _c_last_name9, _c_birth_country14};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5944_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4772_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                std::string _c_birth_country14 = (it->second)._c_birth_country14;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n{};
                memcpy(_c_birth_country14_n.data(), (_c_birth_country14).data(), (_c_birth_country14).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 0);
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_state402 = std::string(_s_state402_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_size243 = std::string(_i_size243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _i_color245 = std::string(_i_color245_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_JOIN_INNER_TD_5944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _i_units246 = std::string(_i_units246_n.data());
                int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_5944_output.getInt32(i, 9);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_last_name9_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_4772_output.setInt32(r, 0, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_zip403_n);
                tbl_JOIN_INNER_TD_4772_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_size243_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_color245_n);
                tbl_JOIN_INNER_TD_4772_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_units246_n);
                tbl_JOIN_INNER_TD_4772_output.setInt32(r, 8, _i_manager_id248);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4772_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4772_output #Row: " << tbl_JOIN_INNER_TD_4772_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4800(Table &tbl_SerializeFromObject_TD_5753_input, Table &tbl_Filter_TD_4800_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_country#64) AND isnotnull(ca_zip#63)))
    // Input: ListBuffer(ca_state#62, ca_zip#63, ca_country#64)
    // Output: ListBuffer(ca_state#62, ca_zip#63, ca_country#64)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5753_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_country64 = tbl_SerializeFromObject_TD_5753_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_SerializeFromObject_TD_5753_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (（std::string(_isnotnullca_country64.data()) != "NULL") && （std::string(_isnotnullca_zip63.data()) != "NULL")) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_5753_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_4800_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_t = tbl_SerializeFromObject_TD_5753_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_4800_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_zip63_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_country64_t = tbl_SerializeFromObject_TD_5753_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_4800_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_country64_t);
            r++;
        }
    }
    tbl_Filter_TD_4800_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4800_output #Row: " << tbl_Filter_TD_4800_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_431_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_431_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_431_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_431_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_431_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_net_paid1226;
    std::string _s_store_name383;
    std::string _s_state402;
    std::string _s_zip403;
    int32_t _i_current_price233;
    std::string _i_size243;
    std::string _i_color245;
    std::string _i_units246;
    int32_t _i_manager_id248;
};
struct SW_JOIN_INNER_TD_431_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_431_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_431_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_431_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_431_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_birth_country14;
};
void SW_JOIN_INNER_TD_431(Table &tbl_JOIN_INNER_TD_5888_output, Table &tbl_Filter_TD_5513_output, Table &tbl_JOIN_INNER_TD_431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248)
    // Right Table: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9, c_birth_country#14)
    // Output Table: ListBuffer(ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248, c_first_name#8, c_last_name#9, c_birth_country#14)
    int left_nrow = tbl_JOIN_INNER_TD_5888_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5513_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_431_key_leftMajor, SW_JOIN_INNER_TD_431_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5888_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_431_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 0);
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_state402 = std::string(_s_state402_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_size243 = std::string(_i_size243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _i_color245 = std::string(_i_color245_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _i_units246 = std::string(_i_units246_n.data());
            int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_431_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_net_paid1226, _s_store_name383, _s_state402, _s_zip403, _i_current_price233, _i_size243, _i_color245, _i_units246, _i_manager_id248};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5513_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5513_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_431_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                std::string _i_size243 = (it->second)._i_size243;
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n{};
                memcpy(_i_size243_n.data(), (_i_size243).data(), (_i_size243).length());
                std::string _i_color245 = (it->second)._i_color245;
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n{};
                memcpy(_i_color245_n.data(), (_i_color245).data(), (_i_color245).length());
                std::string _i_units246 = (it->second)._i_units246;
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n{};
                memcpy(_i_units246_n.data(), (_i_units246).data(), (_i_units246).length());
                int32_t _i_manager_id248 = (it->second)._i_manager_id248;
                int32_t _c_customer_sk0 = tbl_Filter_TD_5513_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5513_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5513_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_5513_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                tbl_JOIN_INNER_TD_431_output.setInt32(r, 0, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_zip403_n);
                tbl_JOIN_INNER_TD_431_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_size243_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_color245_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_units246_n);
                tbl_JOIN_INNER_TD_431_output.setInt32(r, 8, _i_manager_id248);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_first_name8_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_last_name9_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_birth_country14_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_431_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_431_key_rightMajor, SW_JOIN_INNER_TD_431_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5513_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5513_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_431_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_5513_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5513_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5513_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_5513_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            SW_JOIN_INNER_TD_431_payload_rightMajor payloadA{_c_customer_sk0, _c_first_name8, _c_last_name9, _c_birth_country14};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5888_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_431_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                std::string _c_birth_country14 = (it->second)._c_birth_country14;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n{};
                memcpy(_c_birth_country14_n.data(), (_c_birth_country14).data(), (_c_birth_country14).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 0);
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_state402 = std::string(_s_state402_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_size243 = std::string(_i_size243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _i_color245 = std::string(_i_color245_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_JOIN_INNER_TD_5888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _i_units246 = std::string(_i_units246_n.data());
                int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_5888_output.getInt32(i, 9);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_first_name8_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_last_name9_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_431_output.setInt32(r, 0, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_zip403_n);
                tbl_JOIN_INNER_TD_431_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_size243_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_color245_n);
                tbl_JOIN_INNER_TD_431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_units246_n);
                tbl_JOIN_INNER_TD_431_output.setInt32(r, 8, _i_manager_id248);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_431_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_431_output #Row: " << tbl_JOIN_INNER_TD_431_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_312_key_leftMajor {
    std::string _s_zip403;
    bool operator==(const SW_JOIN_INNER_TD_312_key_leftMajor& other) const {
        return ((_s_zip403 == other._s_zip403));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_312_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_312_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._s_zip403));
    }
};
}
struct SW_JOIN_INNER_TD_312_payload_leftMajor {
    int32_t _ss_net_paid1226;
    std::string _s_store_name383;
    std::string _s_state402;
    std::string _s_zip403;
    int32_t _i_current_price233;
    std::string _i_size243;
    std::string _i_color245;
    std::string _i_units246;
    int32_t _i_manager_id248;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_birth_country14;
};
struct SW_JOIN_INNER_TD_312_key_rightMajor {
    std::string _ca_zip63;
    bool operator==(const SW_JOIN_INNER_TD_312_key_rightMajor& other) const {
        return ((_ca_zip63 == other._ca_zip63));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_312_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_312_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_zip63));
    }
};
}
struct SW_JOIN_INNER_TD_312_payload_rightMajor {
    std::string _ca_state62;
    std::string _ca_zip63;
    std::string _ca_country64;
};
void SW_JOIN_INNER_TD_312(Table &tbl_JOIN_INNER_TD_4772_output, Table &tbl_Filter_TD_4900_output, Table &tbl_JOIN_INNER_TD_312_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((c_birth_country#14 = upper(ca_country#64)) AND (s_zip#403 = ca_zip#63)))
    // Left Table: ListBuffer(ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248, c_first_name#8, c_last_name#9, c_birth_country#14)
    // Right Table: ListBuffer(ca_state#62, ca_zip#63, ca_country#64)
    // Output Table: ListBuffer(ss_net_paid#1226, s_store_name#383, s_state#402, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248, c_first_name#8, c_last_name#9, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_4772_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4900_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_312_key_leftMajor, SW_JOIN_INNER_TD_312_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4772_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_k_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_zip403_k = std::string(_s_zip403_k_n.data());
            SW_JOIN_INNER_TD_312_key_leftMajor keyA{_s_zip403_k};
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_4772_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_state402 = std::string(_s_state402_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_4772_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_size243 = std::string(_i_size243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_color245 = std::string(_i_color245_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _i_units246 = std::string(_i_units246_n.data());
            int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_4772_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            SW_JOIN_INNER_TD_312_payload_leftMajor payloadA{_ss_net_paid1226, _s_store_name383, _s_state402, _s_zip403, _i_current_price233, _i_size243, _i_color245, _i_units246, _i_manager_id248, _c_first_name8, _c_last_name9, _c_birth_country14};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4900_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_k_n = tbl_Filter_TD_4900_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_zip63_k = std::string(_ca_zip63_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_312_key_leftMajor{_ca_zip63_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                std::string _i_size243 = (it->second)._i_size243;
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n{};
                memcpy(_i_size243_n.data(), (_i_size243).data(), (_i_size243).length());
                std::string _i_color245 = (it->second)._i_color245;
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n{};
                memcpy(_i_color245_n.data(), (_i_color245).data(), (_i_color245).length());
                std::string _i_units246 = (it->second)._i_units246;
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n{};
                memcpy(_i_units246_n.data(), (_i_units246).data(), (_i_units246).length());
                int32_t _i_manager_id248 = (it->second)._i_manager_id248;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                std::string _c_birth_country14 = (it->second)._c_birth_country14;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n{};
                memcpy(_c_birth_country14_n.data(), (_c_birth_country14).data(), (_c_birth_country14).length());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_4900_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_4900_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_Filter_TD_4900_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_country64 = std::string(_ca_country64_n.data());
                if (_c_birth_country14 == NULL) {
                    tbl_JOIN_INNER_TD_312_output.setInt32(r, 0, _ss_net_paid1226);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
                    tbl_JOIN_INNER_TD_312_output.setInt32(r, 3, _i_current_price233);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_size243_n);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_color245_n);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_units246_n);
                    tbl_JOIN_INNER_TD_312_output.setInt32(r, 7, _i_manager_id248);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_first_name8_n);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_last_name9_n);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state62_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_312_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_312_key_rightMajor, SW_JOIN_INNER_TD_312_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4900_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_k_n = tbl_Filter_TD_4900_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_zip63_k = std::string(_ca_zip63_k_n.data());
            SW_JOIN_INNER_TD_312_key_rightMajor keyA{_ca_zip63_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_4900_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_4900_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_Filter_TD_4900_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_country64 = std::string(_ca_country64_n.data());
            SW_JOIN_INNER_TD_312_payload_rightMajor payloadA{_ca_state62, _ca_zip63, _ca_country64};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4772_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_k_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_zip403_k = std::string(_s_zip403_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_312_key_rightMajor{_s_zip403_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                std::string _ca_country64 = (it->second)._ca_country64;
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n{};
                memcpy(_ca_country64_n.data(), (_ca_country64).data(), (_ca_country64).length());
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_4772_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_state402 = std::string(_s_state402_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_4772_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_size243 = std::string(_i_size243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_color245 = std::string(_i_color245_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _i_units246 = std::string(_i_units246_n.data());
                int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_4772_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_4772_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                if (_c_birth_country14 == NULL) {
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state62_n);
                    tbl_JOIN_INNER_TD_312_output.setInt32(r, 0, _ss_net_paid1226);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
                    tbl_JOIN_INNER_TD_312_output.setInt32(r, 3, _i_current_price233);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_size243_n);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_color245_n);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_units246_n);
                    tbl_JOIN_INNER_TD_312_output.setInt32(r, 7, _i_manager_id248);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_first_name8_n);
                    tbl_JOIN_INNER_TD_312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_last_name9_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_312_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_312_output #Row: " << tbl_JOIN_INNER_TD_312_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3445_key_leftMajor {
    std::string _s_zip403;
    bool operator==(const SW_JOIN_INNER_TD_3445_key_leftMajor& other) const {
        return ((_s_zip403 == other._s_zip403));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3445_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3445_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._s_zip403));
    }
};
}
struct SW_JOIN_INNER_TD_3445_payload_leftMajor {
    int32_t _ss_net_paid1226;
    std::string _s_store_name383;
    std::string _s_state402;
    std::string _s_zip403;
    int32_t _i_current_price233;
    std::string _i_size243;
    std::string _i_color245;
    std::string _i_units246;
    int32_t _i_manager_id248;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_birth_country14;
};
struct SW_JOIN_INNER_TD_3445_key_rightMajor {
    std::string _ca_zip63;
    bool operator==(const SW_JOIN_INNER_TD_3445_key_rightMajor& other) const {
        return ((_ca_zip63 == other._ca_zip63));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3445_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3445_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_zip63));
    }
};
}
struct SW_JOIN_INNER_TD_3445_payload_rightMajor {
    std::string _ca_state62;
    std::string _ca_zip63;
    std::string _ca_country64;
};
void SW_JOIN_INNER_TD_3445(Table &tbl_JOIN_INNER_TD_431_output, Table &tbl_Filter_TD_4800_output, Table &tbl_JOIN_INNER_TD_3445_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((c_birth_country#14 = upper(ca_country#64)) AND (s_zip#403 = ca_zip#63)))
    // Left Table: ListBuffer(ss_net_paid#1226, s_store_name#383, s_state#402, s_zip#403, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248, c_first_name#8, c_last_name#9, c_birth_country#14)
    // Right Table: ListBuffer(ca_state#62, ca_zip#63, ca_country#64)
    // Output Table: ListBuffer(ss_net_paid#1226, s_store_name#383, s_state#402, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248, c_first_name#8, c_last_name#9, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_431_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4800_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3445_key_leftMajor, SW_JOIN_INNER_TD_3445_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_431_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_k_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_zip403_k = std::string(_s_zip403_k_n.data());
            SW_JOIN_INNER_TD_3445_key_leftMajor keyA{_s_zip403_k};
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_431_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_state402 = std::string(_s_state402_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_431_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_size243 = std::string(_i_size243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_color245 = std::string(_i_color245_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _i_units246 = std::string(_i_units246_n.data());
            int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_431_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            SW_JOIN_INNER_TD_3445_payload_leftMajor payloadA{_ss_net_paid1226, _s_store_name383, _s_state402, _s_zip403, _i_current_price233, _i_size243, _i_color245, _i_units246, _i_manager_id248, _c_first_name8, _c_last_name9, _c_birth_country14};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4800_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_k_n = tbl_Filter_TD_4800_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_zip63_k = std::string(_ca_zip63_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3445_key_leftMajor{_ca_zip63_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                std::string _i_size243 = (it->second)._i_size243;
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n{};
                memcpy(_i_size243_n.data(), (_i_size243).data(), (_i_size243).length());
                std::string _i_color245 = (it->second)._i_color245;
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n{};
                memcpy(_i_color245_n.data(), (_i_color245).data(), (_i_color245).length());
                std::string _i_units246 = (it->second)._i_units246;
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n{};
                memcpy(_i_units246_n.data(), (_i_units246).data(), (_i_units246).length());
                int32_t _i_manager_id248 = (it->second)._i_manager_id248;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                std::string _c_birth_country14 = (it->second)._c_birth_country14;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n{};
                memcpy(_c_birth_country14_n.data(), (_c_birth_country14).data(), (_c_birth_country14).length());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_4800_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_4800_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_Filter_TD_4800_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_country64 = std::string(_ca_country64_n.data());
                if (_c_birth_country14 == NULL) {
                    tbl_JOIN_INNER_TD_3445_output.setInt32(r, 0, _ss_net_paid1226);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
                    tbl_JOIN_INNER_TD_3445_output.setInt32(r, 3, _i_current_price233);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_size243_n);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_color245_n);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_units246_n);
                    tbl_JOIN_INNER_TD_3445_output.setInt32(r, 7, _i_manager_id248);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_first_name8_n);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_last_name9_n);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state62_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_3445_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3445_key_rightMajor, SW_JOIN_INNER_TD_3445_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4800_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_k_n = tbl_Filter_TD_4800_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_zip63_k = std::string(_ca_zip63_k_n.data());
            SW_JOIN_INNER_TD_3445_key_rightMajor keyA{_ca_zip63_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_4800_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_4800_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_Filter_TD_4800_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_country64 = std::string(_ca_country64_n.data());
            SW_JOIN_INNER_TD_3445_payload_rightMajor payloadA{_ca_state62, _ca_zip63, _ca_country64};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_431_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_k_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_zip403_k = std::string(_s_zip403_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3445_key_rightMajor{_s_zip403_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                std::string _ca_country64 = (it->second)._ca_country64;
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n{};
                memcpy(_ca_country64_n.data(), (_ca_country64).data(), (_ca_country64).length());
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_431_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_state402 = std::string(_s_state402_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_431_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_size243_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_size243 = std::string(_i_size243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_color245_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_color245 = std::string(_i_color245_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_units246_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _i_units246 = std::string(_i_units246_n.data());
                int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_431_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                if (_c_birth_country14 == NULL) {
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state62_n);
                    tbl_JOIN_INNER_TD_3445_output.setInt32(r, 0, _ss_net_paid1226);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_state402_n);
                    tbl_JOIN_INNER_TD_3445_output.setInt32(r, 3, _i_current_price233);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_size243_n);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_color245_n);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_units246_n);
                    tbl_JOIN_INNER_TD_3445_output.setInt32(r, 7, _i_manager_id248);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_first_name8_n);
                    tbl_JOIN_INNER_TD_3445_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_last_name9_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_3445_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3445_output #Row: " << tbl_JOIN_INNER_TD_3445_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_2849_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    std::string _s_store_name383;
    std::string _ca_state62;
    std::string _s_state402;
    std::string _i_color245;
    int32_t _i_current_price233;
    int32_t _i_manager_id248;
    std::string _i_units246;
    std::string _i_size243;
    bool operator==(const SW_Aggregate_TD_2849_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_s_store_name383 == other._s_store_name383) && (_ca_state62 == other._ca_state62) && (_s_state402 == other._s_state402) && (_i_color245 == other._i_color245) && (_i_current_price233 == other._i_current_price233) && (_i_manager_id248 == other._i_manager_id248) && (_i_units246 == other._i_units246) && (_i_size243 == other._i_size243); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_2849_key> {
    std::size_t operator() (const SW_Aggregate_TD_2849_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._ca_state62)) + (hash<string>()(k._s_state402)) + (hash<string>()(k._i_color245)) + (hash<int32_t>()(k._i_current_price233)) + (hash<int32_t>()(k._i_manager_id248)) + (hash<string>()(k._i_units246)) + (hash<string>()(k._i_size243));
    }
};
}
struct SW_Aggregate_TD_2849_payload {
    int32_t _netpaid15845_sum_0;
};
void SW_Aggregate_TD_2849(Table &tbl_JOIN_INNER_TD_312_output, Table &tbl_Aggregate_TD_2849_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, s_store_name#383, ca_state#62, s_state#402, i_color#245, i_current_price#233, i_manager_id#248, i_units#246, i_size#243, MakeDecimal(sum(UnscaledValue(ss_net_paid#1226)),17,2) AS netpaid#15845)
    // Input: ListBuffer(ss_net_paid#1226, s_store_name#383, s_state#402, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248, c_first_name#8, c_last_name#9, ca_state#62)
    // Output: ListBuffer(netpaid#15845)
    std::unordered_map<SW_Aggregate_TD_2849_key, SW_Aggregate_TD_2849_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_312_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_312_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_312_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402 = tbl_JOIN_INNER_TD_312_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_current_price233 = tbl_JOIN_INNER_TD_312_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_size243 = tbl_JOIN_INNER_TD_312_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_color245 = tbl_JOIN_INNER_TD_312_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _i_units246 = tbl_JOIN_INNER_TD_312_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_312_output.getInt32(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_312_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_312_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_312_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        SW_Aggregate_TD_2849_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), std::string(_s_store_name383.data()), std::string(_ca_state62.data()), std::string(_s_state402.data()), std::string(_i_color245.data()), _i_current_price233, _i_manager_id248, std::string(_i_units246.data()), std::string(_i_size243.data())};
        int64_t _netpaid15845_sum_0 = _ss_net_paid1226;
        SW_Aggregate_TD_2849_payload p{_netpaid15845_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._netpaid15845_sum_0 + _netpaid15845_sum_0;
            p._netpaid15845_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_last_name9 not required in the output table
        // _c_first_name8 not required in the output table
        // _s_store_name383 not required in the output table
        // _ca_state62 not required in the output table
        // _s_state402 not required in the output table
        // _i_color245 not required in the output table
        // _i_current_price233 not required in the output table
        // _i_manager_id248 not required in the output table
        // _i_units246 not required in the output table
        // _i_size243 not required in the output table
        int32_t _netpaid15845 = (it.second)._netpaid15845_sum_0;
        tbl_Aggregate_TD_2849_output.setInt32(r, 0, _netpaid15845);
        ++r;
    }
    tbl_Aggregate_TD_2849_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2849_output #Row: " << tbl_Aggregate_TD_2849_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_2765_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    std::string _s_store_name383;
    std::string _ca_state62;
    std::string _s_state402;
    std::string _i_color245;
    int32_t _i_current_price233;
    int32_t _i_manager_id248;
    std::string _i_units246;
    std::string _i_size243;
    bool operator==(const SW_Aggregate_TD_2765_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_s_store_name383 == other._s_store_name383) && (_ca_state62 == other._ca_state62) && (_s_state402 == other._s_state402) && (_i_color245 == other._i_color245) && (_i_current_price233 == other._i_current_price233) && (_i_manager_id248 == other._i_manager_id248) && (_i_units246 == other._i_units246) && (_i_size243 == other._i_size243); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_2765_key> {
    std::size_t operator() (const SW_Aggregate_TD_2765_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._ca_state62)) + (hash<string>()(k._s_state402)) + (hash<string>()(k._i_color245)) + (hash<int32_t>()(k._i_current_price233)) + (hash<int32_t>()(k._i_manager_id248)) + (hash<string>()(k._i_units246)) + (hash<string>()(k._i_size243));
    }
};
}
struct SW_Aggregate_TD_2765_payload {
    int32_t _netpaid15845_sum_0;
};
void SW_Aggregate_TD_2765(Table &tbl_JOIN_INNER_TD_3445_output, Table &tbl_Aggregate_TD_2765_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, s_store_name#383, ca_state#62, s_state#402, i_color#245, i_current_price#233, i_manager_id#248, i_units#246, i_size#243, MakeDecimal(sum(UnscaledValue(ss_net_paid#1226)),17,2) AS netpaid#15845)
    // Input: ListBuffer(ss_net_paid#1226, s_store_name#383, s_state#402, i_current_price#233, i_size#243, i_color#245, i_units#246, i_manager_id#248, c_first_name#8, c_last_name#9, ca_state#62)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, s_store_name#383, netpaid#15845)
    std::unordered_map<SW_Aggregate_TD_2765_key, SW_Aggregate_TD_2765_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_3445_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_3445_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_3445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402 = tbl_JOIN_INNER_TD_3445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_current_price233 = tbl_JOIN_INNER_TD_3445_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_size243 = tbl_JOIN_INNER_TD_3445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_color245 = tbl_JOIN_INNER_TD_3445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _i_units246 = tbl_JOIN_INNER_TD_3445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_3445_output.getInt32(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_3445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_3445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_3445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        SW_Aggregate_TD_2765_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), std::string(_s_store_name383.data()), std::string(_ca_state62.data()), std::string(_s_state402.data()), std::string(_i_color245.data()), _i_current_price233, _i_manager_id248, std::string(_i_units246.data()), std::string(_i_size243.data())};
        int64_t _netpaid15845_sum_0 = _ss_net_paid1226;
        SW_Aggregate_TD_2765_payload p{_netpaid15845_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._netpaid15845_sum_0 + _netpaid15845_sum_0;
            p._netpaid15845_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), ((it.first)._c_last_name9).data(), ((it.first)._c_last_name9).length());
        tbl_Aggregate_TD_2765_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_2765_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), ((it.first)._s_store_name383).data(), ((it.first)._s_store_name383).length());
        tbl_Aggregate_TD_2765_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383);
        // _ca_state62 not required in the output table
        // _s_state402 not required in the output table
        // _i_color245 not required in the output table
        // _i_current_price233 not required in the output table
        // _i_manager_id248 not required in the output table
        // _i_units246 not required in the output table
        // _i_size243 not required in the output table
        int32_t _netpaid15845 = (it.second)._netpaid15845_sum_0;
        tbl_Aggregate_TD_2765_output.setInt32(r, 3, _netpaid15845);
        ++r;
    }
    tbl_Aggregate_TD_2765_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2765_output #Row: " << tbl_Aggregate_TD_2765_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1954(Table &tbl_Aggregate_TD_2849_output, Table &tbl_Aggregate_TD_1954_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(CheckOverflow((0.050000 * promote_precision(avg(netpaid#15845))), DecimalType(24,8), true) AS (0.05 * avg(netpaid))#15849)
    // Input: ListBuffer(netpaid#15845)
    // Output: ListBuffer((0.05 * avg(netpaid))#15849)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Aggregate_TD_2849_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _netpaid15845 = tbl_Aggregate_TD_2849_output.getInt32(i, 0);
        int64_t _avgnetpaid15849_avg_0 = _netpaid15845;
        avg_0 = (avg_0 + _avgnetpaid15849_avg_0);
    }
    int r = 0;
    int32_t _avgnetpaid15849 = (0.050000 * avg_0 / nrow1);
    tbl_Aggregate_TD_1954_output.setInt32(r++, 0, _avgnetpaid15849);
    tbl_Aggregate_TD_1954_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1954_output #Row: " << tbl_Aggregate_TD_1954_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1882_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    std::string _s_store_name383;
    bool operator==(const SW_Aggregate_TD_1882_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_s_store_name383 == other._s_store_name383); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1882_key> {
    std::size_t operator() (const SW_Aggregate_TD_1882_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<string>()(k._s_store_name383));
    }
};
}
struct SW_Aggregate_TD_1882_payload {
    int32_t _paid15843_sum_0;
};
void SW_Aggregate_TD_1882(Table &tbl_Aggregate_TD_2765_output, Table &tbl_Aggregate_TD_1882_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, s_store_name#383, sum(netpaid#15845) AS paid#15843)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, s_store_name#383, netpaid#15845)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, s_store_name#383, paid#15843)
    std::unordered_map<SW_Aggregate_TD_1882_key, SW_Aggregate_TD_1882_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_2765_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_2765_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_2765_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Aggregate_TD_2765_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _netpaid15845 = tbl_Aggregate_TD_2765_output.getInt32(i, 3);
        SW_Aggregate_TD_1882_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), std::string(_s_store_name383.data())};
        int64_t _paid15843_sum_0 = _netpaid15845;
        SW_Aggregate_TD_1882_payload p{_paid15843_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._paid15843_sum_0 + _paid15843_sum_0;
            p._paid15843_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), ((it.first)._c_last_name9).data(), ((it.first)._c_last_name9).length());
        tbl_Aggregate_TD_1882_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_1882_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), ((it.first)._s_store_name383).data(), ((it.first)._s_store_name383).length());
        tbl_Aggregate_TD_1882_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383);
        int32_t _paid15843 = (it.second)._paid15843_sum_0;
        tbl_Aggregate_TD_1882_output.setInt32(r, 3, _paid15843);
        ++r;
    }
    tbl_Aggregate_TD_1882_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1882_output #Row: " << tbl_Aggregate_TD_1882_output.getNumRow() << std::endl;
}

void SW_Filter_TD_0493(Table &tbl_Aggregate_TD_1882_output, Table &tbl_Aggregate_TD_1954_output, Table &tbl_Filter_TD_0493_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(paid#15843) AND (cast(paid#15843 as decimal(33,8)) > cast(scalar-subquery#15844 [] as decimal(33,8)))))
    // Input: ListBuffer(c_last_name#9, c_first_name#8, s_store_name#383, paid#15843)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, s_store_name#383, paid#15843)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_1882_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _paid15843 = tbl_Aggregate_TD_1882_output.getInt32(i, 3);
        if ((_paid15843!= 0) && (_paid15843 > tbl_Aggregate_TD_1954_output.getInt32(0, 0))) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_Aggregate_TD_1882_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_0493_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_Aggregate_TD_1882_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_0493_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_Aggregate_TD_1882_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_0493_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_t);
            int32_t _paid15843_t = tbl_Aggregate_TD_1882_output.getInt32(i, 3);
            tbl_Filter_TD_0493_output.setInt32(r, 3, _paid15843_t);
            r++;
        }
    }
    tbl_Filter_TD_0493_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_0493_output #Row: " << tbl_Filter_TD_0493_output.getNumRow() << std::endl;
}

