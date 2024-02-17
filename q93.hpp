#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7217(Table &tbl_SerializeFromObject_TD_8493_input, Table &tbl_Filter_TD_7217_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(sr_item_sk#671) AND isnotnull(sr_ticket_number#678L)) AND isnotnull(sr_reason_sk#677)))
    // Input: ListBuffer(sr_item_sk#671, sr_reason_sk#677, sr_ticket_number#678L, sr_return_quantity#679)
    // Output: ListBuffer(sr_item_sk#671, sr_reason_sk#677, sr_ticket_number#678L, sr_return_quantity#679)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8493_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_8493_input.getInt32(i, 0);
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_8493_input.getInt64(i, 2);
        int32_t _sr_reason_sk677 = tbl_SerializeFromObject_TD_8493_input.getInt32(i, 1);
        if (((_sr_item_sk671!= 0) && (_sr_ticket_number678L!= 0)) && (_sr_reason_sk677!= 0)) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_8493_input.getInt32(i, 0);
            tbl_Filter_TD_7217_output.setInt32(r, 0, _sr_item_sk671_t);
            int32_t _sr_reason_sk677_t = tbl_SerializeFromObject_TD_8493_input.getInt32(i, 1);
            tbl_Filter_TD_7217_output.setInt32(r, 1, _sr_reason_sk677_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_8493_input.getInt64(i, 2);
            tbl_Filter_TD_7217_output.setInt64(r, 2, _sr_ticket_number678L_t);
            int32_t _sr_return_quantity679_t = tbl_SerializeFromObject_TD_8493_input.getInt32(i, 3);
            tbl_Filter_TD_7217_output.setInt32(r, 3, _sr_return_quantity679_t);
            r++;
        }
    }
    tbl_Filter_TD_7217_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7217_output #Row: " << tbl_Filter_TD_7217_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6407(Table &tbl_SerializeFromObject_TD_7136_input, Table &tbl_Filter_TD_6407_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(r_reason_desc#353) AND (r_reason_desc#353 = reason 28)) AND isnotnull(r_reason_sk#351)))
    // Input: ListBuffer(r_reason_sk#351, r_reason_desc#353)
    // Output: ListBuffer(r_reason_sk#351)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7136_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353 = tbl_SerializeFromObject_TD_7136_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _r_reason_sk351 = tbl_SerializeFromObject_TD_7136_input.getInt32(i, 0);
        if ((（std::string(_isnotnullr_reason_desc353.data()) != "NULL") && (std::string(_r_reason_desc353.data()) == "reason 28")) && (_r_reason_sk351!= 0)) {
            int32_t _r_reason_sk351_t = tbl_SerializeFromObject_TD_7136_input.getInt32(i, 0);
            tbl_Filter_TD_6407_output.setInt32(r, 0, _r_reason_sk351_t);
            r++;
        }
    }
    tbl_Filter_TD_6407_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6407_output #Row: " << tbl_Filter_TD_6407_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6615_key_leftMajor {
    int32_t _ss_item_sk1208;
    int64_t _ss_ticket_number1215L;
    bool operator==(const SW_JOIN_INNER_TD_6615_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208) && (_ss_ticket_number1215L == other._ss_ticket_number1215L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6615_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6615_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208)) + (hash<int64_t>()(k._ss_ticket_number1215L));
    }
};
}
struct SW_JOIN_INNER_TD_6615_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_quantity1216;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_6615_key_rightMajor {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    bool operator==(const SW_JOIN_INNER_TD_6615_key_rightMajor& other) const {
        return ((_sr_item_sk671 == other._sr_item_sk671) && (_sr_ticket_number678L == other._sr_ticket_number678L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6615_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6615_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_item_sk671)) + (hash<int64_t>()(k._sr_ticket_number678L));
    }
};
}
struct SW_JOIN_INNER_TD_6615_payload_rightMajor {
    int32_t _sr_item_sk671;
    int32_t _sr_reason_sk677;
    int64_t _sr_ticket_number678L;
    int32_t _sr_return_quantity679;
};
void SW_JOIN_INNER_TD_6615(Table &tbl_SerializeFromObject_TD_7821_input, Table &tbl_Filter_TD_7217_output, Table &tbl_JOIN_INNER_TD_6615_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((sr_item_sk#671 = ss_item_sk#1208) AND (sr_ticket_number#678L = ss_ticket_number#1215L)))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_ticket_number#1215L, ss_quantity#1216, ss_sales_price#1219)
    // Right Table: ListBuffer(sr_item_sk#671, sr_reason_sk#677, sr_ticket_number#678L, sr_return_quantity#679)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_quantity#1216, ss_sales_price#1219, sr_reason_sk#677, sr_return_quantity#679)
    int left_nrow = tbl_SerializeFromObject_TD_7821_input.getNumRow();
    int right_nrow = tbl_Filter_TD_7217_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6615_key_leftMajor, SW_JOIN_INNER_TD_6615_payload_leftMajor> ht1;
        int nrow1 = tbl_SerializeFromObject_TD_7821_input.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 0);
            int64_t _ss_ticket_number1215L_k = tbl_SerializeFromObject_TD_7821_input.getInt64(i, 2);
            SW_JOIN_INNER_TD_6615_key_leftMajor keyA{_ss_item_sk1208_k, _ss_ticket_number1215L_k};
            int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 1);
            int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_7821_input.getInt64(i, 2);
            int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 3);
            int32_t _ss_sales_price1219 = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 4);
            SW_JOIN_INNER_TD_6615_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_ticket_number1215L, _ss_quantity1216, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7217_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_item_sk671_k = tbl_Filter_TD_7217_output.getInt32(i, 0);
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_7217_output.getInt64(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6615_key_leftMajor{_sr_item_sk671_k, _sr_ticket_number678L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _sr_item_sk671 = tbl_Filter_TD_7217_output.getInt32(i, 0);
                int32_t _sr_reason_sk677 = tbl_Filter_TD_7217_output.getInt32(i, 1);
                int64_t _sr_ticket_number678L = tbl_Filter_TD_7217_output.getInt64(i, 2);
                int32_t _sr_return_quantity679 = tbl_Filter_TD_7217_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 3, _sr_reason_sk677);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 4, _sr_return_quantity679);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6615_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6615_key_rightMajor, SW_JOIN_INNER_TD_6615_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7217_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_item_sk671_k = tbl_Filter_TD_7217_output.getInt32(i, 0);
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_7217_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_6615_key_rightMajor keyA{_sr_item_sk671_k, _sr_ticket_number678L_k};
            int32_t _sr_item_sk671 = tbl_Filter_TD_7217_output.getInt32(i, 0);
            int32_t _sr_reason_sk677 = tbl_Filter_TD_7217_output.getInt32(i, 1);
            int64_t _sr_ticket_number678L = tbl_Filter_TD_7217_output.getInt64(i, 2);
            int32_t _sr_return_quantity679 = tbl_Filter_TD_7217_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6615_payload_rightMajor payloadA{_sr_item_sk671, _sr_reason_sk677, _sr_ticket_number678L, _sr_return_quantity679};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_SerializeFromObject_TD_7821_input.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 0);
            int64_t _ss_ticket_number1215L_k = tbl_SerializeFromObject_TD_7821_input.getInt64(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6615_key_rightMajor{_ss_item_sk1208_k, _ss_ticket_number1215L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int32_t _sr_reason_sk677 = (it->second)._sr_reason_sk677;
                int64_t _sr_ticket_number678L = (it->second)._sr_ticket_number678L;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 1);
                int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_7821_input.getInt64(i, 2);
                int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 3);
                int32_t _ss_sales_price1219 = tbl_SerializeFromObject_TD_7821_input.getInt32(i, 4);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 3, _sr_reason_sk677);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 4, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_6615_output.setInt32(r, 2, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6615_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6615_output #Row: " << tbl_JOIN_INNER_TD_6615_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5801_key_leftMajor {
    int32_t _sr_reason_sk677;
    bool operator==(const SW_JOIN_INNER_TD_5801_key_leftMajor& other) const {
        return ((_sr_reason_sk677 == other._sr_reason_sk677));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5801_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5801_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_reason_sk677));
    }
};
}
struct SW_JOIN_INNER_TD_5801_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_quantity1216;
    int32_t _ss_sales_price1219;
    int32_t _sr_reason_sk677;
    int32_t _sr_return_quantity679;
};
struct SW_JOIN_INNER_TD_5801_key_rightMajor {
    int32_t _r_reason_sk351;
    bool operator==(const SW_JOIN_INNER_TD_5801_key_rightMajor& other) const {
        return ((_r_reason_sk351 == other._r_reason_sk351));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5801_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5801_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._r_reason_sk351));
    }
};
}
struct SW_JOIN_INNER_TD_5801_payload_rightMajor {
    int32_t _r_reason_sk351;
};
void SW_JOIN_INNER_TD_5801(Table &tbl_JOIN_INNER_TD_6615_output, Table &tbl_Filter_TD_6407_output, Table &tbl_JOIN_INNER_TD_5801_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_reason_sk#677 = r_reason_sk#351))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_quantity#1216, ss_sales_price#1219, sr_reason_sk#677, sr_return_quantity#679)
    // Right Table: ListBuffer(r_reason_sk#351)
    // Output Table: ListBuffer(ss_customer_sk#1209, sr_return_quantity#679, ss_quantity#1216, ss_sales_price#1219)
    int left_nrow = tbl_JOIN_INNER_TD_6615_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6407_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5801_key_leftMajor, SW_JOIN_INNER_TD_5801_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6615_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_reason_sk677_k = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_5801_key_leftMajor keyA{_sr_reason_sk677_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 0);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 1);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 2);
            int32_t _sr_reason_sk677 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 3);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5801_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_quantity1216, _ss_sales_price1219, _sr_reason_sk677, _sr_return_quantity679};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6407_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _r_reason_sk351_k = tbl_Filter_TD_6407_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5801_key_leftMajor{_r_reason_sk351_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _sr_reason_sk677 = (it->second)._sr_reason_sk677;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _r_reason_sk351 = tbl_Filter_TD_6407_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5801_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_5801_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_5801_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_5801_output.setInt32(r, 1, _sr_return_quantity679);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5801_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5801_key_rightMajor, SW_JOIN_INNER_TD_5801_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6407_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _r_reason_sk351_k = tbl_Filter_TD_6407_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5801_key_rightMajor keyA{_r_reason_sk351_k};
            int32_t _r_reason_sk351 = tbl_Filter_TD_6407_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5801_payload_rightMajor payloadA{_r_reason_sk351};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6615_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_reason_sk677_k = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5801_key_rightMajor{_sr_reason_sk677_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _r_reason_sk351 = (it->second)._r_reason_sk351;
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 0);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 1);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 2);
                int32_t _sr_reason_sk677 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 3);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_6615_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_5801_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_5801_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_5801_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_5801_output.setInt32(r, 1, _sr_return_quantity679);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5801_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5801_output #Row: " << tbl_JOIN_INNER_TD_5801_output.getNumRow() << std::endl;
}

void SW_Project_TD_4799(Table &tbl_JOIN_INNER_TD_5801_output, Table &tbl_Project_TD_4799_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CASE WHEN isnotnull(sr_return_quantity#679) THEN CheckOverflow((promote_precision(cast(cast((ss_quantity#1216 - sr_return_quantity#679) as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#1219 as decimal(12,2)))), DecimalType(18,2), true) ELSE CheckOverflow((promote_precision(cast(cast(ss_quantity#1216 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#1219 as decimal(12,2)))), DecimalType(18,2), true) END AS act_sales#10567)
    // Input: ListBuffer(ss_customer_sk#1209, sr_return_quantity#679, ss_quantity#1216, ss_sales_price#1219)
    // Output: ListBuffer(ss_customer_sk#1209, act_sales#10567)
    int nrow1 = tbl_JOIN_INNER_TD_5801_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_5801_output.getInt32(i, 0);
        int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_5801_output.getInt32(i, 1);
        int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_5801_output.getInt32(i, 2);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_5801_output.getInt32(i, 3);
        int32_t _act_sales10567 = _sr_return_quantity679 ? ((_ss_quantity1216 - _sr_return_quantity679) * _ss_sales_price1219) : (_ss_quantity1216 * _ss_sales_price1219);
        tbl_Project_TD_4799_output.setInt32(i, 1, _act_sales10567);
        tbl_Project_TD_4799_output.setInt32(i, 0, _ss_customer_sk1209);
    }
    tbl_Project_TD_4799_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4799_output #Row: " << tbl_Project_TD_4799_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_348_key;
struct SW_Aggregate_TD_348_payload {
    int32_t _sumsales10568_sum_0;
};
void SW_Aggregate_TD_348(Table &tbl_Project_TD_4799_output, Table &tbl_Aggregate_TD_348_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_customer_sk#1209, sum(act_sales#10567) AS sumsales#10568)
    // Input: ListBuffer(ss_customer_sk#1209, act_sales#10567)
    // Output: ListBuffer(ss_customer_sk#1209, sumsales#10568)
    std::unordered_map<SW_Aggregate_TD_348_key, SW_Aggregate_TD_348_payload> ht1;
    int nrow1 = tbl_Project_TD_4799_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_Project_TD_4799_output.getInt32(i, 0);
        int32_t _act_sales10567 = tbl_Project_TD_4799_output.getInt32(i, 1);
        SW_Aggregate_TD_348_key k = _ss_customer_sk1209;
        int64_t _sumsales10568_sum_0 = _act_sales10567;
        SW_Aggregate_TD_348_payload p{_sumsales10568_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sumsales10568_sum_0 + _sumsales10568_sum_0;
            p._sumsales10568_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_348_output.setInt32(r, 0, (it.first));
        int32_t _sumsales10568 = (it.second)._sumsales10568_sum_0;
        tbl_Aggregate_TD_348_output.setInt32(r, 1, _sumsales10568);
        ++r;
    }
    tbl_Aggregate_TD_348_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_348_output #Row: " << tbl_Aggregate_TD_348_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2981(Table &tbl_Aggregate_TD_348_output, Table &tbl_Sort_TD_2981_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(sumsales#10568 ASC NULLS FIRST, ss_customer_sk#1209 ASC NULLS FIRST)
    // Input: ListBuffer(ss_customer_sk#1209, sumsales#10568)
    // Output: ListBuffer(ss_customer_sk#1209, sumsales#10568)
    struct SW_Sort_TD_2981Row {
        int32_t _ss_customer_sk1209;
        int32_t _sumsales10568;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2981Row& a, const SW_Sort_TD_2981Row& b) const { return 
 (a._sumsales10568 < b._sumsales10568) || 
 ((a._sumsales10568 == b._sumsales10568) && (a._ss_customer_sk1209 < b._ss_customer_sk1209)); 
}
    }SW_Sort_TD_2981_order; 

    int nrow1 = tbl_Aggregate_TD_348_output.getNumRow();
    std::vector<SW_Sort_TD_2981Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_Aggregate_TD_348_output.getInt32(i, 0);
        int32_t _sumsales10568 = tbl_Aggregate_TD_348_output.getInt32(i, 1);
        SW_Sort_TD_2981Row t = {_ss_customer_sk1209,_sumsales10568};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2981_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2981_output.setInt32(r, 0, it._ss_customer_sk1209);
        tbl_Sort_TD_2981_output.setInt32(r, 1, it._sumsales10568);
        ++r;
    }
    tbl_Sort_TD_2981_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2981_output #Row: " << tbl_Sort_TD_2981_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1757(Table &tbl_Sort_TD_2981_output, Table &tbl_LocalLimit_TD_1757_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(ss_customer_sk#1209, sumsales#10568)
    // Output: ListBuffer(ss_customer_sk#1209, sumsales#10568)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1757_output.setInt32(r, 0, tbl_Sort_TD_2981_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1757_output.setInt32(r, 1, tbl_Sort_TD_2981_output.getInt32(i, 1));
        r++;
    }
    tbl_LocalLimit_TD_1757_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1757_output #Row: " << tbl_LocalLimit_TD_1757_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0636(Table &tbl_LocalLimit_TD_1757_output, Table &tbl_GlobalLimit_TD_0636_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(ss_customer_sk#1209, sumsales#10568)
    // Output: ListBuffer(ss_customer_sk#1209, sumsales#10568)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0636_output.setInt32(r, 0, tbl_LocalLimit_TD_1757_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0636_output.setInt32(r, 1, tbl_LocalLimit_TD_1757_output.getInt32(i, 1));
        r++;
    }
    tbl_GlobalLimit_TD_0636_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0636_output #Row: " << tbl_GlobalLimit_TD_0636_output.getNumRow() << std::endl;
}

