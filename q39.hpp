#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9946(Table &tbl_SerializeFromObject_TD_10398_input, Table &tbl_Filter_TD_9946_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#4141))
    // Input: ListBuffer(i_item_sk#4141)
    // Output: ListBuffer(i_item_sk#4141)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10398_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4141 = tbl_SerializeFromObject_TD_10398_input.getInt32(i, 0);
        if (_i_item_sk4141!= 0) {
            int32_t _i_item_sk4141_t = tbl_SerializeFromObject_TD_10398_input.getInt32(i, 0);
            tbl_Filter_TD_9946_output.setInt32(r, 0, _i_item_sk4141_t);
            r++;
        }
    }
    tbl_Filter_TD_9946_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9946_output #Row: " << tbl_Filter_TD_9946_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9829(Table &tbl_SerializeFromObject_TD_10307_input, Table &tbl_Filter_TD_9829_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(inv_item_sk#4138) AND (isnotnull(inv_warehouse_sk#4139) AND isnotnull(inv_date_sk#4137))))
    // Input: ListBuffer(inv_date_sk#4137, inv_item_sk#4138, inv_warehouse_sk#4139, inv_quantity_on_hand#4140)
    // Output: ListBuffer(inv_date_sk#4137, inv_item_sk#4138, inv_warehouse_sk#4139, inv_quantity_on_hand#4140)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10307_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_item_sk4138 = tbl_SerializeFromObject_TD_10307_input.getInt32(i, 1);
        int32_t _inv_warehouse_sk4139 = tbl_SerializeFromObject_TD_10307_input.getInt32(i, 2);
        int32_t _inv_date_sk4137 = tbl_SerializeFromObject_TD_10307_input.getInt32(i, 0);
        if ((_inv_item_sk4138!= 0) && ((_inv_warehouse_sk4139!= 0) && (_inv_date_sk4137!= 0))) {
            int32_t _inv_date_sk4137_t = tbl_SerializeFromObject_TD_10307_input.getInt32(i, 0);
            tbl_Filter_TD_9829_output.setInt32(r, 0, _inv_date_sk4137_t);
            int32_t _inv_item_sk4138_t = tbl_SerializeFromObject_TD_10307_input.getInt32(i, 1);
            tbl_Filter_TD_9829_output.setInt32(r, 1, _inv_item_sk4138_t);
            int32_t _inv_warehouse_sk4139_t = tbl_SerializeFromObject_TD_10307_input.getInt32(i, 2);
            tbl_Filter_TD_9829_output.setInt32(r, 2, _inv_warehouse_sk4139_t);
            int32_t _inv_quantity_on_hand4140_t = tbl_SerializeFromObject_TD_10307_input.getInt32(i, 3);
            tbl_Filter_TD_9829_output.setInt32(r, 3, _inv_quantity_on_hand4140_t);
            r++;
        }
    }
    tbl_Filter_TD_9829_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9829_output #Row: " << tbl_Filter_TD_9829_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9570(Table &tbl_SerializeFromObject_TD_10274_input, Table &tbl_Filter_TD_9570_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10274_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_10274_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_10274_input.getInt32(i, 0);
            tbl_Filter_TD_9570_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_9570_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9570_output #Row: " << tbl_Filter_TD_9570_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9166(Table &tbl_SerializeFromObject_TD_10514_input, Table &tbl_Filter_TD_9166_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(inv_item_sk#658) AND (isnotnull(inv_warehouse_sk#659) AND isnotnull(inv_date_sk#657))))
    // Input: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Output: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10514_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_item_sk658 = tbl_SerializeFromObject_TD_10514_input.getInt32(i, 1);
        int32_t _inv_warehouse_sk659 = tbl_SerializeFromObject_TD_10514_input.getInt32(i, 2);
        int32_t _inv_date_sk657 = tbl_SerializeFromObject_TD_10514_input.getInt32(i, 0);
        if ((_inv_item_sk658!= 0) && ((_inv_warehouse_sk659!= 0) && (_inv_date_sk657!= 0))) {
            int32_t _inv_date_sk657_t = tbl_SerializeFromObject_TD_10514_input.getInt32(i, 0);
            tbl_Filter_TD_9166_output.setInt32(r, 0, _inv_date_sk657_t);
            int32_t _inv_item_sk658_t = tbl_SerializeFromObject_TD_10514_input.getInt32(i, 1);
            tbl_Filter_TD_9166_output.setInt32(r, 1, _inv_item_sk658_t);
            int32_t _inv_warehouse_sk659_t = tbl_SerializeFromObject_TD_10514_input.getInt32(i, 2);
            tbl_Filter_TD_9166_output.setInt32(r, 2, _inv_warehouse_sk659_t);
            int32_t _inv_quantity_on_hand660_t = tbl_SerializeFromObject_TD_10514_input.getInt32(i, 3);
            tbl_Filter_TD_9166_output.setInt32(r, 3, _inv_quantity_on_hand660_t);
            r++;
        }
    }
    tbl_Filter_TD_9166_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9166_output #Row: " << tbl_Filter_TD_9166_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8741(Table &tbl_SerializeFromObject_TD_9792_input, Table &tbl_Filter_TD_8741_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#4163))
    // Input: ListBuffer(w_warehouse_sk#4163, w_warehouse_name#4165)
    // Output: ListBuffer(w_warehouse_sk#4163, w_warehouse_name#4165)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9792_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk4163 = tbl_SerializeFromObject_TD_9792_input.getInt32(i, 0);
        if (_w_warehouse_sk4163!= 0) {
            int32_t _w_warehouse_sk4163_t = tbl_SerializeFromObject_TD_9792_input.getInt32(i, 0);
            tbl_Filter_TD_8741_output.setInt32(r, 0, _w_warehouse_sk4163_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name4165_t = tbl_SerializeFromObject_TD_9792_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8741_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name4165_t);
            r++;
        }
    }
    tbl_Filter_TD_8741_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8741_output #Row: " << tbl_Filter_TD_8741_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_844_key_leftMajor {
    int32_t _inv_item_sk4138;
    bool operator==(const SW_JOIN_INNER_TD_844_key_leftMajor& other) const {
        return ((_inv_item_sk4138 == other._inv_item_sk4138));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_844_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_844_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_item_sk4138));
    }
};
}
struct SW_JOIN_INNER_TD_844_payload_leftMajor {
    int32_t _inv_date_sk4137;
    int32_t _inv_item_sk4138;
    int32_t _inv_warehouse_sk4139;
    int32_t _inv_quantity_on_hand4140;
};
struct SW_JOIN_INNER_TD_844_key_rightMajor {
    int32_t _i_item_sk4141;
    bool operator==(const SW_JOIN_INNER_TD_844_key_rightMajor& other) const {
        return ((_i_item_sk4141 == other._i_item_sk4141));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_844_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_844_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4141));
    }
};
}
struct SW_JOIN_INNER_TD_844_payload_rightMajor {
    int32_t _i_item_sk4141;
};
void SW_JOIN_INNER_TD_844(Table &tbl_Filter_TD_9829_output, Table &tbl_Filter_TD_9946_output, Table &tbl_JOIN_INNER_TD_844_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_item_sk#4138 = i_item_sk#4141))
    // Left Table: ListBuffer(inv_date_sk#4137, inv_item_sk#4138, inv_warehouse_sk#4139, inv_quantity_on_hand#4140)
    // Right Table: ListBuffer(i_item_sk#4141)
    // Output Table: ListBuffer(inv_date_sk#4137, inv_warehouse_sk#4139, inv_quantity_on_hand#4140, i_item_sk#4141)
    int left_nrow = tbl_Filter_TD_9829_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9946_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_844_key_leftMajor, SW_JOIN_INNER_TD_844_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9829_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_item_sk4138_k = tbl_Filter_TD_9829_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_844_key_leftMajor keyA{_inv_item_sk4138_k};
            int32_t _inv_date_sk4137 = tbl_Filter_TD_9829_output.getInt32(i, 0);
            int32_t _inv_item_sk4138 = tbl_Filter_TD_9829_output.getInt32(i, 1);
            int32_t _inv_warehouse_sk4139 = tbl_Filter_TD_9829_output.getInt32(i, 2);
            int32_t _inv_quantity_on_hand4140 = tbl_Filter_TD_9829_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_844_payload_leftMajor payloadA{_inv_date_sk4137, _inv_item_sk4138, _inv_warehouse_sk4139, _inv_quantity_on_hand4140};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9946_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4141_k = tbl_Filter_TD_9946_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_844_key_leftMajor{_i_item_sk4141_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk4137 = (it->second)._inv_date_sk4137;
                int32_t _inv_item_sk4138 = (it->second)._inv_item_sk4138;
                int32_t _inv_warehouse_sk4139 = (it->second)._inv_warehouse_sk4139;
                int32_t _inv_quantity_on_hand4140 = (it->second)._inv_quantity_on_hand4140;
                int32_t _i_item_sk4141 = tbl_Filter_TD_9946_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_844_output.setInt32(r, 0, _inv_date_sk4137);
                tbl_JOIN_INNER_TD_844_output.setInt32(r, 1, _inv_warehouse_sk4139);
                tbl_JOIN_INNER_TD_844_output.setInt32(r, 2, _inv_quantity_on_hand4140);
                tbl_JOIN_INNER_TD_844_output.setInt32(r, 3, _i_item_sk4141);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_844_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_844_key_rightMajor, SW_JOIN_INNER_TD_844_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9946_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4141_k = tbl_Filter_TD_9946_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_844_key_rightMajor keyA{_i_item_sk4141_k};
            int32_t _i_item_sk4141 = tbl_Filter_TD_9946_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_844_payload_rightMajor payloadA{_i_item_sk4141};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9829_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_item_sk4138_k = tbl_Filter_TD_9829_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_844_key_rightMajor{_inv_item_sk4138_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4141 = (it->second)._i_item_sk4141;
                int32_t _inv_date_sk4137 = tbl_Filter_TD_9829_output.getInt32(i, 0);
                int32_t _inv_item_sk4138 = tbl_Filter_TD_9829_output.getInt32(i, 1);
                int32_t _inv_warehouse_sk4139 = tbl_Filter_TD_9829_output.getInt32(i, 2);
                int32_t _inv_quantity_on_hand4140 = tbl_Filter_TD_9829_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_844_output.setInt32(r, 3, _i_item_sk4141);
                tbl_JOIN_INNER_TD_844_output.setInt32(r, 0, _inv_date_sk4137);
                tbl_JOIN_INNER_TD_844_output.setInt32(r, 1, _inv_warehouse_sk4139);
                tbl_JOIN_INNER_TD_844_output.setInt32(r, 2, _inv_quantity_on_hand4140);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_844_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_844_output #Row: " << tbl_JOIN_INNER_TD_844_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8366(Table &tbl_SerializeFromObject_TD_996_input, Table &tbl_Filter_TD_8366_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#495))
    // Input: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    // Output: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_996_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_SerializeFromObject_TD_996_input.getInt32(i, 0);
        if (_w_warehouse_sk495!= 0) {
            int32_t _w_warehouse_sk495_t = tbl_SerializeFromObject_TD_996_input.getInt32(i, 0);
            tbl_Filter_TD_8366_output.setInt32(r, 0, _w_warehouse_sk495_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_t = tbl_SerializeFromObject_TD_996_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8366_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497_t);
            r++;
        }
    }
    tbl_Filter_TD_8366_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8366_output #Row: " << tbl_Filter_TD_8366_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_861_key_leftMajor {
    int32_t _inv_item_sk658;
    bool operator==(const SW_JOIN_INNER_TD_861_key_leftMajor& other) const {
        return ((_inv_item_sk658 == other._inv_item_sk658));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_861_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_861_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_item_sk658));
    }
};
}
struct SW_JOIN_INNER_TD_861_payload_leftMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_item_sk658;
    int32_t _inv_warehouse_sk659;
    int32_t _inv_quantity_on_hand660;
};
struct SW_JOIN_INNER_TD_861_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_861_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_861_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_861_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_861_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_861(Table &tbl_Filter_TD_9166_output, Table &tbl_Filter_TD_9570_output, Table &tbl_JOIN_INNER_TD_861_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_item_sk#658 = i_item_sk#228))
    // Left Table: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(inv_date_sk#657, inv_warehouse_sk#659, inv_quantity_on_hand#660, i_item_sk#228)
    int left_nrow = tbl_Filter_TD_9166_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9570_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_861_key_leftMajor, SW_JOIN_INNER_TD_861_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9166_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_9166_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_861_key_leftMajor keyA{_inv_item_sk658_k};
            int32_t _inv_date_sk657 = tbl_Filter_TD_9166_output.getInt32(i, 0);
            int32_t _inv_item_sk658 = tbl_Filter_TD_9166_output.getInt32(i, 1);
            int32_t _inv_warehouse_sk659 = tbl_Filter_TD_9166_output.getInt32(i, 2);
            int32_t _inv_quantity_on_hand660 = tbl_Filter_TD_9166_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_861_payload_leftMajor payloadA{_inv_date_sk657, _inv_item_sk658, _inv_warehouse_sk659, _inv_quantity_on_hand660};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9570_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9570_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_861_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_item_sk658 = (it->second)._inv_item_sk658;
                int32_t _inv_warehouse_sk659 = (it->second)._inv_warehouse_sk659;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                int32_t _i_item_sk228 = tbl_Filter_TD_9570_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_861_output.setInt32(r, 0, _inv_date_sk657);
                tbl_JOIN_INNER_TD_861_output.setInt32(r, 1, _inv_warehouse_sk659);
                tbl_JOIN_INNER_TD_861_output.setInt32(r, 2, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_861_output.setInt32(r, 3, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_861_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_861_key_rightMajor, SW_JOIN_INNER_TD_861_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9570_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9570_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_861_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_9570_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_861_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9166_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_9166_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_861_key_rightMajor{_inv_item_sk658_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _inv_date_sk657 = tbl_Filter_TD_9166_output.getInt32(i, 0);
                int32_t _inv_item_sk658 = tbl_Filter_TD_9166_output.getInt32(i, 1);
                int32_t _inv_warehouse_sk659 = tbl_Filter_TD_9166_output.getInt32(i, 2);
                int32_t _inv_quantity_on_hand660 = tbl_Filter_TD_9166_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_861_output.setInt32(r, 3, _i_item_sk228);
                tbl_JOIN_INNER_TD_861_output.setInt32(r, 0, _inv_date_sk657);
                tbl_JOIN_INNER_TD_861_output.setInt32(r, 1, _inv_warehouse_sk659);
                tbl_JOIN_INNER_TD_861_output.setInt32(r, 2, _inv_quantity_on_hand660);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_861_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_861_output #Row: " << tbl_JOIN_INNER_TD_861_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7950(Table &tbl_SerializeFromObject_TD_8119_input, Table &tbl_Filter_TD_7950_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#4183) AND isnotnull(d_moy#4185)) AND ((d_year#4183 = 2001) AND (d_moy#4185 = 2))) AND isnotnull(d_date_sk#4177)))
    // Input: ListBuffer(d_date_sk#4177, d_moy#4185, d_year#4183)
    // Output: ListBuffer(d_date_sk#4177, d_moy#4185)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8119_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4183 = tbl_SerializeFromObject_TD_8119_input.getInt32(i, 2);
        int32_t _d_moy4185 = tbl_SerializeFromObject_TD_8119_input.getInt32(i, 1);
        int32_t _d_date_sk4177 = tbl_SerializeFromObject_TD_8119_input.getInt32(i, 0);
        if ((((_d_year4183!= 0) && (_d_moy4185!= 0)) && ((_d_year4183 == 2001) && (_d_moy4185 == 2))) && (_d_date_sk4177!= 0)) {
            int32_t _d_date_sk4177_t = tbl_SerializeFromObject_TD_8119_input.getInt32(i, 0);
            tbl_Filter_TD_7950_output.setInt32(r, 0, _d_date_sk4177_t);
            int32_t _d_moy4185_t = tbl_SerializeFromObject_TD_8119_input.getInt32(i, 1);
            tbl_Filter_TD_7950_output.setInt32(r, 1, _d_moy4185_t);
            r++;
        }
    }
    tbl_Filter_TD_7950_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7950_output #Row: " << tbl_Filter_TD_7950_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7281_key_leftMajor {
    int32_t _inv_warehouse_sk4139;
    bool operator==(const SW_JOIN_INNER_TD_7281_key_leftMajor& other) const {
        return ((_inv_warehouse_sk4139 == other._inv_warehouse_sk4139));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7281_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7281_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_warehouse_sk4139));
    }
};
}
struct SW_JOIN_INNER_TD_7281_payload_leftMajor {
    int32_t _inv_date_sk4137;
    int32_t _inv_warehouse_sk4139;
    int32_t _inv_quantity_on_hand4140;
    int32_t _i_item_sk4141;
};
struct SW_JOIN_INNER_TD_7281_key_rightMajor {
    int32_t _w_warehouse_sk4163;
    bool operator==(const SW_JOIN_INNER_TD_7281_key_rightMajor& other) const {
        return ((_w_warehouse_sk4163 == other._w_warehouse_sk4163));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7281_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7281_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk4163));
    }
};
}
struct SW_JOIN_INNER_TD_7281_payload_rightMajor {
    int32_t _w_warehouse_sk4163;
    std::string _w_warehouse_name4165;
};
void SW_JOIN_INNER_TD_7281(Table &tbl_JOIN_INNER_TD_844_output, Table &tbl_Filter_TD_8741_output, Table &tbl_JOIN_INNER_TD_7281_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_warehouse_sk#4139 = w_warehouse_sk#4163))
    // Left Table: ListBuffer(inv_date_sk#4137, inv_warehouse_sk#4139, inv_quantity_on_hand#4140, i_item_sk#4141)
    // Right Table: ListBuffer(w_warehouse_sk#4163, w_warehouse_name#4165)
    // Output Table: ListBuffer(inv_date_sk#4137, inv_quantity_on_hand#4140, i_item_sk#4141, w_warehouse_sk#4163, w_warehouse_name#4165)
    int left_nrow = tbl_JOIN_INNER_TD_844_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8741_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7281_key_leftMajor, SW_JOIN_INNER_TD_7281_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_844_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_warehouse_sk4139_k = tbl_JOIN_INNER_TD_844_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7281_key_leftMajor keyA{_inv_warehouse_sk4139_k};
            int32_t _inv_date_sk4137 = tbl_JOIN_INNER_TD_844_output.getInt32(i, 0);
            int32_t _inv_warehouse_sk4139 = tbl_JOIN_INNER_TD_844_output.getInt32(i, 1);
            int32_t _inv_quantity_on_hand4140 = tbl_JOIN_INNER_TD_844_output.getInt32(i, 2);
            int32_t _i_item_sk4141 = tbl_JOIN_INNER_TD_844_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7281_payload_leftMajor payloadA{_inv_date_sk4137, _inv_warehouse_sk4139, _inv_quantity_on_hand4140, _i_item_sk4141};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8741_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk4163_k = tbl_Filter_TD_8741_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7281_key_leftMajor{_w_warehouse_sk4163_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk4137 = (it->second)._inv_date_sk4137;
                int32_t _inv_warehouse_sk4139 = (it->second)._inv_warehouse_sk4139;
                int32_t _inv_quantity_on_hand4140 = (it->second)._inv_quantity_on_hand4140;
                int32_t _i_item_sk4141 = (it->second)._i_item_sk4141;
                int32_t _w_warehouse_sk4163 = tbl_Filter_TD_8741_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name4165_n = tbl_Filter_TD_8741_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _w_warehouse_name4165 = std::string(_w_warehouse_name4165_n.data());
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 0, _inv_date_sk4137);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 1, _inv_quantity_on_hand4140);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 2, _i_item_sk4141);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 3, _w_warehouse_sk4163);
                tbl_JOIN_INNER_TD_7281_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name4165_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7281_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7281_key_rightMajor, SW_JOIN_INNER_TD_7281_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8741_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk4163_k = tbl_Filter_TD_8741_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7281_key_rightMajor keyA{_w_warehouse_sk4163_k};
            int32_t _w_warehouse_sk4163 = tbl_Filter_TD_8741_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name4165_n = tbl_Filter_TD_8741_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _w_warehouse_name4165 = std::string(_w_warehouse_name4165_n.data());
            SW_JOIN_INNER_TD_7281_payload_rightMajor payloadA{_w_warehouse_sk4163, _w_warehouse_name4165};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_844_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_warehouse_sk4139_k = tbl_JOIN_INNER_TD_844_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7281_key_rightMajor{_inv_warehouse_sk4139_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk4163 = (it->second)._w_warehouse_sk4163;
                std::string _w_warehouse_name4165 = (it->second)._w_warehouse_name4165;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name4165_n{};
                memcpy(_w_warehouse_name4165_n.data(), (_w_warehouse_name4165).data(), (_w_warehouse_name4165).length());
                int32_t _inv_date_sk4137 = tbl_JOIN_INNER_TD_844_output.getInt32(i, 0);
                int32_t _inv_warehouse_sk4139 = tbl_JOIN_INNER_TD_844_output.getInt32(i, 1);
                int32_t _inv_quantity_on_hand4140 = tbl_JOIN_INNER_TD_844_output.getInt32(i, 2);
                int32_t _i_item_sk4141 = tbl_JOIN_INNER_TD_844_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 3, _w_warehouse_sk4163);
                tbl_JOIN_INNER_TD_7281_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name4165_n);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 0, _inv_date_sk4137);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 1, _inv_quantity_on_hand4140);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 2, _i_item_sk4141);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7281_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7281_output #Row: " << tbl_JOIN_INNER_TD_7281_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7805(Table &tbl_SerializeFromObject_TD_867_input, Table &tbl_Filter_TD_7805_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 2001) AND (d_moy#128 = 1))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_867_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_867_input.getInt32(i, 2);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_867_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_867_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && ((_d_year126 == 2001) && (_d_moy128 == 1))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_867_input.getInt32(i, 0);
            tbl_Filter_TD_7805_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_867_input.getInt32(i, 1);
            tbl_Filter_TD_7805_output.setInt32(r, 1, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_7805_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7805_output #Row: " << tbl_Filter_TD_7805_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7604_key_leftMajor {
    int32_t _inv_warehouse_sk659;
    bool operator==(const SW_JOIN_INNER_TD_7604_key_leftMajor& other) const {
        return ((_inv_warehouse_sk659 == other._inv_warehouse_sk659));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7604_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7604_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_warehouse_sk659));
    }
};
}
struct SW_JOIN_INNER_TD_7604_payload_leftMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_warehouse_sk659;
    int32_t _inv_quantity_on_hand660;
    int32_t _i_item_sk228;
};
struct SW_JOIN_INNER_TD_7604_key_rightMajor {
    int32_t _w_warehouse_sk495;
    bool operator==(const SW_JOIN_INNER_TD_7604_key_rightMajor& other) const {
        return ((_w_warehouse_sk495 == other._w_warehouse_sk495));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7604_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7604_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk495));
    }
};
}
struct SW_JOIN_INNER_TD_7604_payload_rightMajor {
    int32_t _w_warehouse_sk495;
    std::string _w_warehouse_name497;
};
void SW_JOIN_INNER_TD_7604(Table &tbl_JOIN_INNER_TD_861_output, Table &tbl_Filter_TD_8366_output, Table &tbl_JOIN_INNER_TD_7604_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_warehouse_sk#659 = w_warehouse_sk#495))
    // Left Table: ListBuffer(inv_date_sk#657, inv_warehouse_sk#659, inv_quantity_on_hand#660, i_item_sk#228)
    // Right Table: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    // Output Table: ListBuffer(inv_date_sk#657, inv_quantity_on_hand#660, i_item_sk#228, w_warehouse_sk#495, w_warehouse_name#497)
    int left_nrow = tbl_JOIN_INNER_TD_861_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8366_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7604_key_leftMajor, SW_JOIN_INNER_TD_7604_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_861_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_861_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7604_key_leftMajor keyA{_inv_warehouse_sk659_k};
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_861_output.getInt32(i, 0);
            int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_861_output.getInt32(i, 1);
            int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_861_output.getInt32(i, 2);
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_861_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7604_payload_leftMajor payloadA{_inv_date_sk657, _inv_warehouse_sk659, _inv_quantity_on_hand660, _i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8366_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_8366_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7604_key_leftMajor{_w_warehouse_sk495_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_warehouse_sk659 = (it->second)._inv_warehouse_sk659;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _w_warehouse_sk495 = tbl_Filter_TD_8366_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_8366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 0, _inv_date_sk657);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 1, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 2, _i_item_sk228);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 3, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_7604_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7604_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7604_key_rightMajor, SW_JOIN_INNER_TD_7604_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8366_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_8366_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7604_key_rightMajor keyA{_w_warehouse_sk495_k};
            int32_t _w_warehouse_sk495 = tbl_Filter_TD_8366_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_8366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            SW_JOIN_INNER_TD_7604_payload_rightMajor payloadA{_w_warehouse_sk495, _w_warehouse_name497};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_861_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_861_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7604_key_rightMajor{_inv_warehouse_sk659_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_861_output.getInt32(i, 0);
                int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_861_output.getInt32(i, 1);
                int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_861_output.getInt32(i, 2);
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_861_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 3, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_7604_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 0, _inv_date_sk657);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 1, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 2, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7604_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7604_output #Row: " << tbl_JOIN_INNER_TD_7604_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6541_key_leftMajor {
    int32_t _inv_date_sk4137;
    bool operator==(const SW_JOIN_INNER_TD_6541_key_leftMajor& other) const {
        return ((_inv_date_sk4137 == other._inv_date_sk4137));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6541_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6541_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_date_sk4137));
    }
};
}
struct SW_JOIN_INNER_TD_6541_payload_leftMajor {
    int32_t _inv_date_sk4137;
    int32_t _inv_quantity_on_hand4140;
    int32_t _i_item_sk4141;
    int32_t _w_warehouse_sk4163;
    std::string _w_warehouse_name4165;
};
struct SW_JOIN_INNER_TD_6541_key_rightMajor {
    int32_t _d_date_sk4177;
    bool operator==(const SW_JOIN_INNER_TD_6541_key_rightMajor& other) const {
        return ((_d_date_sk4177 == other._d_date_sk4177));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6541_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6541_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4177));
    }
};
}
struct SW_JOIN_INNER_TD_6541_payload_rightMajor {
    int32_t _d_date_sk4177;
    int32_t _d_moy4185;
};
void SW_JOIN_INNER_TD_6541(Table &tbl_JOIN_INNER_TD_7281_output, Table &tbl_Filter_TD_7950_output, Table &tbl_JOIN_INNER_TD_6541_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_date_sk#4137 = d_date_sk#4177))
    // Left Table: ListBuffer(inv_date_sk#4137, inv_quantity_on_hand#4140, i_item_sk#4141, w_warehouse_sk#4163, w_warehouse_name#4165)
    // Right Table: ListBuffer(d_date_sk#4177, d_moy#4185)
    // Output Table: ListBuffer(inv_quantity_on_hand#4140, i_item_sk#4141, w_warehouse_sk#4163, w_warehouse_name#4165, d_moy#4185)
    int left_nrow = tbl_JOIN_INNER_TD_7281_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7950_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6541_key_leftMajor, SW_JOIN_INNER_TD_6541_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7281_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_date_sk4137_k = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6541_key_leftMajor keyA{_inv_date_sk4137_k};
            int32_t _inv_date_sk4137 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
            int32_t _inv_quantity_on_hand4140 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 1);
            int32_t _i_item_sk4141 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 2);
            int32_t _w_warehouse_sk4163 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name4165_n = tbl_JOIN_INNER_TD_7281_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_warehouse_name4165 = std::string(_w_warehouse_name4165_n.data());
            SW_JOIN_INNER_TD_6541_payload_leftMajor payloadA{_inv_date_sk4137, _inv_quantity_on_hand4140, _i_item_sk4141, _w_warehouse_sk4163, _w_warehouse_name4165};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7950_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4177_k = tbl_Filter_TD_7950_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6541_key_leftMajor{_d_date_sk4177_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk4137 = (it->second)._inv_date_sk4137;
                int32_t _inv_quantity_on_hand4140 = (it->second)._inv_quantity_on_hand4140;
                int32_t _i_item_sk4141 = (it->second)._i_item_sk4141;
                int32_t _w_warehouse_sk4163 = (it->second)._w_warehouse_sk4163;
                std::string _w_warehouse_name4165 = (it->second)._w_warehouse_name4165;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name4165_n{};
                memcpy(_w_warehouse_name4165_n.data(), (_w_warehouse_name4165).data(), (_w_warehouse_name4165).length());
                int32_t _d_date_sk4177 = tbl_Filter_TD_7950_output.getInt32(i, 0);
                int32_t _d_moy4185 = tbl_Filter_TD_7950_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6541_output.setInt32(r, 0, _inv_quantity_on_hand4140);
                tbl_JOIN_INNER_TD_6541_output.setInt32(r, 1, _i_item_sk4141);
                tbl_JOIN_INNER_TD_6541_output.setInt32(r, 2, _w_warehouse_sk4163);
                tbl_JOIN_INNER_TD_6541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name4165_n);
                tbl_JOIN_INNER_TD_6541_output.setInt32(r, 4, _d_moy4185);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6541_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6541_key_rightMajor, SW_JOIN_INNER_TD_6541_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7950_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4177_k = tbl_Filter_TD_7950_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6541_key_rightMajor keyA{_d_date_sk4177_k};
            int32_t _d_date_sk4177 = tbl_Filter_TD_7950_output.getInt32(i, 0);
            int32_t _d_moy4185 = tbl_Filter_TD_7950_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6541_payload_rightMajor payloadA{_d_date_sk4177, _d_moy4185};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7281_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_date_sk4137_k = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6541_key_rightMajor{_inv_date_sk4137_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4177 = (it->second)._d_date_sk4177;
                int32_t _d_moy4185 = (it->second)._d_moy4185;
                int32_t _inv_date_sk4137 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
                int32_t _inv_quantity_on_hand4140 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 1);
                int32_t _i_item_sk4141 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 2);
                int32_t _w_warehouse_sk4163 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name4165_n = tbl_JOIN_INNER_TD_7281_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_warehouse_name4165 = std::string(_w_warehouse_name4165_n.data());
                tbl_JOIN_INNER_TD_6541_output.setInt32(r, 4, _d_moy4185);
                tbl_JOIN_INNER_TD_6541_output.setInt32(r, 0, _inv_quantity_on_hand4140);
                tbl_JOIN_INNER_TD_6541_output.setInt32(r, 1, _i_item_sk4141);
                tbl_JOIN_INNER_TD_6541_output.setInt32(r, 2, _w_warehouse_sk4163);
                tbl_JOIN_INNER_TD_6541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name4165_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6541_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6541_output #Row: " << tbl_JOIN_INNER_TD_6541_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6529_key_leftMajor {
    int32_t _inv_date_sk657;
    bool operator==(const SW_JOIN_INNER_TD_6529_key_leftMajor& other) const {
        return ((_inv_date_sk657 == other._inv_date_sk657));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6529_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6529_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_date_sk657));
    }
};
}
struct SW_JOIN_INNER_TD_6529_payload_leftMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_quantity_on_hand660;
    int32_t _i_item_sk228;
    int32_t _w_warehouse_sk495;
    std::string _w_warehouse_name497;
};
struct SW_JOIN_INNER_TD_6529_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6529_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6529_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6529_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6529_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_6529(Table &tbl_JOIN_INNER_TD_7604_output, Table &tbl_Filter_TD_7805_output, Table &tbl_JOIN_INNER_TD_6529_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_date_sk#657 = d_date_sk#120))
    // Left Table: ListBuffer(inv_date_sk#657, inv_quantity_on_hand#660, i_item_sk#228, w_warehouse_sk#495, w_warehouse_name#497)
    // Right Table: ListBuffer(d_date_sk#120, d_moy#128)
    // Output Table: ListBuffer(inv_quantity_on_hand#660, i_item_sk#228, w_warehouse_sk#495, w_warehouse_name#497, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_7604_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7805_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6529_key_leftMajor, SW_JOIN_INNER_TD_6529_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7604_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6529_key_leftMajor keyA{_inv_date_sk657_k};
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 0);
            int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 1);
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 2);
            int32_t _w_warehouse_sk495 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_7604_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            SW_JOIN_INNER_TD_6529_payload_leftMajor payloadA{_inv_date_sk657, _inv_quantity_on_hand660, _i_item_sk228, _w_warehouse_sk495, _w_warehouse_name497};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7805_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7805_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6529_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_7805_output.getInt32(i, 0);
                int32_t _d_moy128 = tbl_Filter_TD_7805_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6529_output.setInt32(r, 0, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_6529_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_6529_output.setInt32(r, 2, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_6529_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_6529_output.setInt32(r, 4, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6529_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6529_key_rightMajor, SW_JOIN_INNER_TD_6529_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7805_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7805_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6529_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7805_output.getInt32(i, 0);
            int32_t _d_moy128 = tbl_Filter_TD_7805_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6529_payload_rightMajor payloadA{_d_date_sk120, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7604_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6529_key_rightMajor{_inv_date_sk657_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 0);
                int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 1);
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 2);
                int32_t _w_warehouse_sk495 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_7604_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                tbl_JOIN_INNER_TD_6529_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_6529_output.setInt32(r, 0, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_6529_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_6529_output.setInt32(r, 2, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_6529_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6529_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6529_output #Row: " << tbl_JOIN_INNER_TD_6529_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5845_key {
    std::string _w_warehouse_name4165;
    int32_t _w_warehouse_sk4163;
    int32_t _i_item_sk4141;
    int32_t _d_moy4185;
    bool operator==(const SW_Aggregate_TD_5845_key& other) const { return (_w_warehouse_name4165 == other._w_warehouse_name4165) && (_w_warehouse_sk4163 == other._w_warehouse_sk4163) && (_i_item_sk4141 == other._i_item_sk4141) && (_d_moy4185 == other._d_moy4185); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5845_key> {
    std::size_t operator() (const SW_Aggregate_TD_5845_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._w_warehouse_name4165)) + (hash<int32_t>()(k._w_warehouse_sk4163)) + (hash<int32_t>()(k._i_item_sk4141)) + (hash<int32_t>()(k._d_moy4185));
    }
};
}
struct SW_Aggregate_TD_5845_payload {
    int64_t _stdev3554_stddev_samp_0;
    int64_t _mean3555_avg_1;
};
void SW_Aggregate_TD_5845(Table &tbl_JOIN_INNER_TD_6541_output, Table &tbl_Aggregate_TD_5845_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(w_warehouse_name#4165, w_warehouse_sk#4163, i_item_sk#4141, d_moy#4185, stddev_samp(cast(inv_quantity_on_hand#4140 as double)) AS stdev#3554, avg(inv_quantity_on_hand#4140) AS mean#3555)
    // Input: ListBuffer(inv_quantity_on_hand#4140, i_item_sk#4141, w_warehouse_sk#4163, w_warehouse_name#4165, d_moy#4185)
    // Output: ListBuffer(w_warehouse_sk#4163, i_item_sk#4141, d_moy#4185, stdev#3554, mean#3555)
    std::unordered_map<SW_Aggregate_TD_5845_key, SW_Aggregate_TD_5845_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6541_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_quantity_on_hand4140 = tbl_JOIN_INNER_TD_6541_output.getInt32(i, 0);
        int32_t _i_item_sk4141 = tbl_JOIN_INNER_TD_6541_output.getInt32(i, 1);
        int32_t _w_warehouse_sk4163 = tbl_JOIN_INNER_TD_6541_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name4165 = tbl_JOIN_INNER_TD_6541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_moy4185 = tbl_JOIN_INNER_TD_6541_output.getInt32(i, 4);
        SW_Aggregate_TD_5845_key k{std::string(_w_warehouse_name4165.data()), _w_warehouse_sk4163, _i_item_sk4141, _d_moy4185};
        int64_t _stdev3554_stddev_samp_0 = _inv_quantity_on_hand4140;
        int64_t _mean3555_avg_1 = _inv_quantity_on_hand4140;
        SW_Aggregate_TD_5845_payload p{_stdev3554_stddev_samp_0, _mean3555_avg_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
        // Unsupported aggregation operation
            // Unsupported payload Type
            p._mean3555_avg_1 = avg_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _w_warehouse_name4165 not required in the output table
        tbl_Aggregate_TD_5845_output.setInt32(r, 0, (it.first)._w_warehouse_sk4163);
        tbl_Aggregate_TD_5845_output.setInt32(r, 1, (it.first)._i_item_sk4141);
        tbl_Aggregate_TD_5845_output.setInt32(r, 2, (it.first)._d_moy4185);
        int64_t _stdev3554 = _inv_quantity_on_hand4140;
        // Unsupported payload type: DoubleType
        int64_t _mean3555 = (it.second)._mean3555_avg_1 / nrow1;
        // Unsupported payload type: DoubleType
        ++r;
    }
    tbl_Aggregate_TD_5845_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5845_output #Row: " << tbl_Aggregate_TD_5845_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5678_key {
    std::string _w_warehouse_name497;
    int32_t _w_warehouse_sk495;
    int32_t _i_item_sk228;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_5678_key& other) const { return (_w_warehouse_name497 == other._w_warehouse_name497) && (_w_warehouse_sk495 == other._w_warehouse_sk495) && (_i_item_sk228 == other._i_item_sk228) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5678_key> {
    std::size_t operator() (const SW_Aggregate_TD_5678_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._w_warehouse_name497)) + (hash<int32_t>()(k._w_warehouse_sk495)) + (hash<int32_t>()(k._i_item_sk228)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_5678_payload {
    int64_t _stdev3554_stddev_samp_0;
    int64_t _mean3555_avg_1;
};
void SW_Aggregate_TD_5678(Table &tbl_JOIN_INNER_TD_6529_output, Table &tbl_Aggregate_TD_5678_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(w_warehouse_name#497, w_warehouse_sk#495, i_item_sk#228, d_moy#128, stddev_samp(cast(inv_quantity_on_hand#660 as double)) AS stdev#3554, avg(inv_quantity_on_hand#660) AS mean#3555)
    // Input: ListBuffer(inv_quantity_on_hand#660, i_item_sk#228, w_warehouse_sk#495, w_warehouse_name#497, d_moy#128)
    // Output: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, stdev#3554, mean#3555)
    std::unordered_map<SW_Aggregate_TD_5678_key, SW_Aggregate_TD_5678_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6529_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_6529_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_6529_output.getInt32(i, 1);
        int32_t _w_warehouse_sk495 = tbl_JOIN_INNER_TD_6529_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_JOIN_INNER_TD_6529_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_6529_output.getInt32(i, 4);
        SW_Aggregate_TD_5678_key k{std::string(_w_warehouse_name497.data()), _w_warehouse_sk495, _i_item_sk228, _d_moy128};
        int64_t _stdev3554_stddev_samp_0 = _inv_quantity_on_hand660;
        int64_t _mean3555_avg_1 = _inv_quantity_on_hand660;
        SW_Aggregate_TD_5678_payload p{_stdev3554_stddev_samp_0, _mean3555_avg_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
        // Unsupported aggregation operation
            // Unsupported payload Type
            p._mean3555_avg_1 = avg_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _w_warehouse_name497 not required in the output table
        tbl_Aggregate_TD_5678_output.setInt32(r, 0, (it.first)._w_warehouse_sk495);
        tbl_Aggregate_TD_5678_output.setInt32(r, 1, (it.first)._i_item_sk228);
        tbl_Aggregate_TD_5678_output.setInt32(r, 2, (it.first)._d_moy128);
        int64_t _stdev3554 = _inv_quantity_on_hand660;
        // Unsupported payload type: DoubleType
        int64_t _mean3555 = (it.second)._mean3555_avg_1 / nrow1;
        // Unsupported payload type: DoubleType
        ++r;
    }
    tbl_Aggregate_TD_5678_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5678_output #Row: " << tbl_Aggregate_TD_5678_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4995(Table &tbl_Aggregate_TD_5845_output, Table &tbl_Filter_TD_4995_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(stdev#3554) AND isnotnull(mean#3555)) AND (NOT coalesce((mean#3555 = 0.0), false) AND ((stdev#3554 / mean#3555) > 1.0))))
    // Input: ListBuffer(w_warehouse_sk#4163, i_item_sk#4141, d_moy#4185, stdev#3554, mean#3555)
    // Output: ListBuffer(w_warehouse_sk#4163, i_item_sk#4141, d_moy#4185, mean#3555, stdev#3554)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_5845_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDoubleType default to IntegerType
        int32_t _stdev3554 = tbl_Aggregate_TD_5845_output.getInt32(i, 3);
        // Unsupported column typeDoubleType default to IntegerType
        int32_t _mean3555 = tbl_Aggregate_TD_5845_output.getInt32(i, 4);
        if (((_stdev3554!= 0) && (_mean3555!= 0)) && (!((_mean3555 == 0.0)) && (_stdev3554 > 1.0))) {
            int32_t _w_warehouse_sk4163_t = tbl_Aggregate_TD_5845_output.getInt32(i, 0);
            tbl_Filter_TD_4995_output.setInt32(r, 0, _w_warehouse_sk4163_t);
            int32_t _i_item_sk4141_t = tbl_Aggregate_TD_5845_output.getInt32(i, 1);
            tbl_Filter_TD_4995_output.setInt32(r, 1, _i_item_sk4141_t);
            int32_t _d_moy4185_t = tbl_Aggregate_TD_5845_output.getInt32(i, 2);
            tbl_Filter_TD_4995_output.setInt32(r, 2, _d_moy4185_t);
            // Unsupported column typeDoubleType default to IntegerType
            int32_t _mean3555_t = tbl_Aggregate_TD_5845_output.getInt32(i, 4);
            tbl_Filter_TD_4995_output.setInt32(r, 3, _mean3555_t);
            // Unsupported column typeDoubleType default to IntegerType
            int32_t _stdev3554_t = tbl_Aggregate_TD_5845_output.getInt32(i, 3);
            tbl_Filter_TD_4995_output.setInt32(r, 4, _stdev3554_t);
            r++;
        }
    }
    tbl_Filter_TD_4995_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4995_output #Row: " << tbl_Filter_TD_4995_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4971(Table &tbl_Aggregate_TD_5678_output, Table &tbl_Filter_TD_4971_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(stdev#3554) AND isnotnull(mean#3555)) AND (NOT coalesce((mean#3555 = 0.0), false) AND ((stdev#3554 / mean#3555) > 1.0))))
    // Input: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, stdev#3554, mean#3555)
    // Output: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, mean#3555, stdev#3554)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_5678_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDoubleType default to IntegerType
        int32_t _stdev3554 = tbl_Aggregate_TD_5678_output.getInt32(i, 3);
        // Unsupported column typeDoubleType default to IntegerType
        int32_t _mean3555 = tbl_Aggregate_TD_5678_output.getInt32(i, 4);
        if (((_stdev3554!= 0) && (_mean3555!= 0)) && (!((_mean3555 == 0.0)) && (_stdev3554 > 1.0))) {
            int32_t _w_warehouse_sk495_t = tbl_Aggregate_TD_5678_output.getInt32(i, 0);
            tbl_Filter_TD_4971_output.setInt32(r, 0, _w_warehouse_sk495_t);
            int32_t _i_item_sk228_t = tbl_Aggregate_TD_5678_output.getInt32(i, 1);
            tbl_Filter_TD_4971_output.setInt32(r, 1, _i_item_sk228_t);
            int32_t _d_moy128_t = tbl_Aggregate_TD_5678_output.getInt32(i, 2);
            tbl_Filter_TD_4971_output.setInt32(r, 2, _d_moy128_t);
            // Unsupported column typeDoubleType default to IntegerType
            int32_t _mean3555_t = tbl_Aggregate_TD_5678_output.getInt32(i, 4);
            tbl_Filter_TD_4971_output.setInt32(r, 3, _mean3555_t);
            // Unsupported column typeDoubleType default to IntegerType
            int32_t _stdev3554_t = tbl_Aggregate_TD_5678_output.getInt32(i, 3);
            tbl_Filter_TD_4971_output.setInt32(r, 4, _stdev3554_t);
            r++;
        }
    }
    tbl_Filter_TD_4971_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4971_output #Row: " << tbl_Filter_TD_4971_output.getNumRow() << std::endl;
}

void SW_Project_TD_3778(Table &tbl_Filter_TD_4995_output, Table &tbl_Project_TD_3778_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(mean#3555 AS mean#3588, CASE WHEN (mean#3555 = 0.0) THEN null ELSE (stdev#3554 / mean#3555) END AS cov#3589)
    // Input: ListBuffer(w_warehouse_sk#4163, i_item_sk#4141, d_moy#4185, mean#3555, stdev#3554)
    // Output: ListBuffer(w_warehouse_sk#4163, i_item_sk#4141, d_moy#4185, mean#3588, cov#3589)
    int nrow1 = tbl_Filter_TD_4995_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk4163 = tbl_Filter_TD_4995_output.getInt32(i, 0);
        int32_t _i_item_sk4141 = tbl_Filter_TD_4995_output.getInt32(i, 1);
        int32_t _d_moy4185 = tbl_Filter_TD_4995_output.getInt32(i, 2);
        // Unsupported input Type
        // Unsupported input Type
        int64_t _mean3588 = _mean3555;
        tbl_Project_TD_3778_output.setInt64(i, 3, _mean3588);
        int64_t _cov3589 = (_mean3555 == 0.0) ? null : (_stdev3554 / _mean3555);
        tbl_Project_TD_3778_output.setInt64(i, 4, _cov3589);
        tbl_Project_TD_3778_output.setInt32(i, 0, _w_warehouse_sk4163);
        tbl_Project_TD_3778_output.setInt32(i, 1, _i_item_sk4141);
        tbl_Project_TD_3778_output.setInt32(i, 2, _d_moy4185);
    }
    tbl_Project_TD_3778_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3778_output #Row: " << tbl_Project_TD_3778_output.getNumRow() << std::endl;
}

void SW_Project_TD_3376(Table &tbl_Filter_TD_4971_output, Table &tbl_Project_TD_3376_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CASE WHEN (mean#3555 = 0.0) THEN null ELSE (stdev#3554 / mean#3555) END AS cov#3556)
    // Input: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, mean#3555, stdev#3554)
    // Output: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, mean#3555, cov#3556)
    int nrow1 = tbl_Filter_TD_4971_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_Filter_TD_4971_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_Filter_TD_4971_output.getInt32(i, 1);
        int32_t _d_moy128 = tbl_Filter_TD_4971_output.getInt32(i, 2);
        // Unsupported input Type
        // Unsupported input Type
        int64_t _cov3556 = (_mean3555 == 0.0) ? null : (_stdev3554 / _mean3555);
        tbl_Project_TD_3376_output.setInt64(i, 4, _cov3556);
        tbl_Project_TD_3376_output.setInt32(i, 0, _w_warehouse_sk495);
        tbl_Project_TD_3376_output.setInt32(i, 1, _i_item_sk228);
        tbl_Project_TD_3376_output.setInt32(i, 2, _d_moy128);
        tbl_Project_TD_3376_output.setInt64(i, 3, _mean3555);
    }
    tbl_Project_TD_3376_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3376_output #Row: " << tbl_Project_TD_3376_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2757_key_leftMajor {
    int32_t _i_item_sk228;
    int32_t _w_warehouse_sk495;
    bool operator==(const SW_JOIN_INNER_TD_2757_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228) && (_w_warehouse_sk495 == other._w_warehouse_sk495));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2757_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2757_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228)) + (hash<int32_t>()(k._w_warehouse_sk495));
    }
};
}
struct SW_JOIN_INNER_TD_2757_payload_leftMajor {
    int32_t _w_warehouse_sk495;
    int32_t _i_item_sk228;
    int32_t _d_moy128;
    int64_t _mean3555;
    int64_t _cov3556;
};
struct SW_JOIN_INNER_TD_2757_key_rightMajor {
    int32_t _i_item_sk4141;
    int32_t _w_warehouse_sk4163;
    bool operator==(const SW_JOIN_INNER_TD_2757_key_rightMajor& other) const {
        return ((_i_item_sk4141 == other._i_item_sk4141) && (_w_warehouse_sk4163 == other._w_warehouse_sk4163));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2757_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2757_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4141)) + (hash<int32_t>()(k._w_warehouse_sk4163));
    }
};
}
struct SW_JOIN_INNER_TD_2757_payload_rightMajor {
    int32_t _w_warehouse_sk4163;
    int32_t _i_item_sk4141;
    int32_t _d_moy4185;
    int64_t _mean3588;
    int64_t _cov3589;
};
void SW_JOIN_INNER_TD_2757(Table &tbl_Project_TD_3376_output, Table &tbl_Project_TD_3778_output, Table &tbl_JOIN_INNER_TD_2757_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((i_item_sk#228 = i_item_sk#4141) AND (w_warehouse_sk#495 = w_warehouse_sk#4163)))
    // Left Table: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, mean#3555, cov#3556)
    // Right Table: ListBuffer(w_warehouse_sk#4163, i_item_sk#4141, d_moy#4185, mean#3588, cov#3589)
    // Output Table: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, mean#3555, cov#3556, w_warehouse_sk#4163, i_item_sk#4141, d_moy#4185, mean#3588, cov#3589)
    int left_nrow = tbl_Project_TD_3376_output.getNumRow();
    int right_nrow = tbl_Project_TD_3778_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2757_key_leftMajor, SW_JOIN_INNER_TD_2757_payload_leftMajor> ht1;
        int nrow1 = tbl_Project_TD_3376_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Project_TD_3376_output.getInt32(i, 1);
            int32_t _w_warehouse_sk495_k = tbl_Project_TD_3376_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2757_key_leftMajor keyA{_i_item_sk228_k, _w_warehouse_sk495_k};
            int32_t _w_warehouse_sk495 = tbl_Project_TD_3376_output.getInt32(i, 0);
            int32_t _i_item_sk228 = tbl_Project_TD_3376_output.getInt32(i, 1);
            int32_t _d_moy128 = tbl_Project_TD_3376_output.getInt32(i, 2);
            int64_t _mean3555 = tbl_Project_TD_3376_output.getInt64(i, 3);
            int64_t _cov3556 = tbl_Project_TD_3376_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_2757_payload_leftMajor payloadA{_w_warehouse_sk495, _i_item_sk228, _d_moy128, _mean3555, _cov3556};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_3778_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4141_k = tbl_Project_TD_3778_output.getInt32(i, 1);
            int32_t _w_warehouse_sk4163_k = tbl_Project_TD_3778_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2757_key_leftMajor{_i_item_sk4141_k, _w_warehouse_sk4163_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int64_t _mean3555 = (it->second)._mean3555;
                int64_t _cov3556 = (it->second)._cov3556;
                int32_t _w_warehouse_sk4163 = tbl_Project_TD_3778_output.getInt32(i, 0);
                int32_t _i_item_sk4141 = tbl_Project_TD_3778_output.getInt32(i, 1);
                int32_t _d_moy4185 = tbl_Project_TD_3778_output.getInt32(i, 2);
                int64_t _mean3588 = tbl_Project_TD_3778_output.getInt64(i, 3);
                int64_t _cov3589 = tbl_Project_TD_3778_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 0, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 2, _d_moy128);
                tbl_JOIN_INNER_TD_2757_output.setInt64(r, 3, _mean3555);
                tbl_JOIN_INNER_TD_2757_output.setInt64(r, 4, _cov3556);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 5, _w_warehouse_sk4163);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 6, _i_item_sk4141);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 7, _d_moy4185);
                tbl_JOIN_INNER_TD_2757_output.setInt64(r, 8, _mean3588);
                tbl_JOIN_INNER_TD_2757_output.setInt64(r, 9, _cov3589);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2757_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2757_key_rightMajor, SW_JOIN_INNER_TD_2757_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_3778_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4141_k = tbl_Project_TD_3778_output.getInt32(i, 1);
            int32_t _w_warehouse_sk4163_k = tbl_Project_TD_3778_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2757_key_rightMajor keyA{_i_item_sk4141_k, _w_warehouse_sk4163_k};
            int32_t _w_warehouse_sk4163 = tbl_Project_TD_3778_output.getInt32(i, 0);
            int32_t _i_item_sk4141 = tbl_Project_TD_3778_output.getInt32(i, 1);
            int32_t _d_moy4185 = tbl_Project_TD_3778_output.getInt32(i, 2);
            int64_t _mean3588 = tbl_Project_TD_3778_output.getInt64(i, 3);
            int64_t _cov3589 = tbl_Project_TD_3778_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_2757_payload_rightMajor payloadA{_w_warehouse_sk4163, _i_item_sk4141, _d_moy4185, _mean3588, _cov3589};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_3376_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Project_TD_3376_output.getInt32(i, 1);
            int32_t _w_warehouse_sk495_k = tbl_Project_TD_3376_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2757_key_rightMajor{_i_item_sk228_k, _w_warehouse_sk495_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk4163 = (it->second)._w_warehouse_sk4163;
                int32_t _i_item_sk4141 = (it->second)._i_item_sk4141;
                int32_t _d_moy4185 = (it->second)._d_moy4185;
                int64_t _mean3588 = (it->second)._mean3588;
                int64_t _cov3589 = (it->second)._cov3589;
                int32_t _w_warehouse_sk495 = tbl_Project_TD_3376_output.getInt32(i, 0);
                int32_t _i_item_sk228 = tbl_Project_TD_3376_output.getInt32(i, 1);
                int32_t _d_moy128 = tbl_Project_TD_3376_output.getInt32(i, 2);
                int64_t _mean3555 = tbl_Project_TD_3376_output.getInt64(i, 3);
                int64_t _cov3556 = tbl_Project_TD_3376_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 5, _w_warehouse_sk4163);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 6, _i_item_sk4141);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 7, _d_moy4185);
                tbl_JOIN_INNER_TD_2757_output.setInt64(r, 8, _mean3588);
                tbl_JOIN_INNER_TD_2757_output.setInt64(r, 9, _cov3589);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 0, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_2757_output.setInt32(r, 2, _d_moy128);
                tbl_JOIN_INNER_TD_2757_output.setInt64(r, 3, _mean3555);
                tbl_JOIN_INNER_TD_2757_output.setInt64(r, 4, _cov3556);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2757_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2757_output #Row: " << tbl_JOIN_INNER_TD_2757_output.getNumRow() << std::endl;
}

void SW_Project_TD_1615(Table &tbl_JOIN_INNER_TD_2757_output, Table &tbl_Project_TD_1615_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(w_warehouse_sk#495 AS inv1_w_warehouse_sk#3544, i_item_sk#228 AS inv1_i_item_sk#3545, d_moy#128 AS inv1_d_moy#3546, mean#3555 AS inv1_mean#3547, cov#3556 AS inv1_cov#3548, w_warehouse_sk#4163 AS inv2_w_warehouse_sk#3549, i_item_sk#4141 AS inv2_i_item_sk#3550, d_moy#4185 AS inv2_d_moy#3551, mean#3588 AS inv2_mean#3552, cov#3589 AS inv2_cov#3553)
    // Input: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, mean#3555, cov#3556, w_warehouse_sk#4163, i_item_sk#4141, d_moy#4185, mean#3588, cov#3589)
    // Output: ListBuffer(inv1_w_warehouse_sk#3544, inv1_i_item_sk#3545, inv1_d_moy#3546, inv1_mean#3547, inv1_cov#3548, inv2_w_warehouse_sk#3549, inv2_i_item_sk#3550, inv2_d_moy#3551, inv2_mean#3552, inv2_cov#3553)
    int nrow1 = tbl_JOIN_INNER_TD_2757_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_JOIN_INNER_TD_2757_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_2757_output.getInt32(i, 1);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_2757_output.getInt32(i, 2);
        int64_t _mean3555 = tbl_JOIN_INNER_TD_2757_output.getInt64(i, 3);
        int64_t _cov3556 = tbl_JOIN_INNER_TD_2757_output.getInt64(i, 4);
        int32_t _w_warehouse_sk4163 = tbl_JOIN_INNER_TD_2757_output.getInt32(i, 5);
        int32_t _i_item_sk4141 = tbl_JOIN_INNER_TD_2757_output.getInt32(i, 6);
        int32_t _d_moy4185 = tbl_JOIN_INNER_TD_2757_output.getInt32(i, 7);
        int64_t _mean3588 = tbl_JOIN_INNER_TD_2757_output.getInt64(i, 8);
        int64_t _cov3589 = tbl_JOIN_INNER_TD_2757_output.getInt64(i, 9);
        int32_t _inv1_w_warehouse_sk3544 = _w_warehouse_sk495;
        tbl_Project_TD_1615_output.setInt32(i, 0, _inv1_w_warehouse_sk3544);
        int32_t _inv1_i_item_sk3545 = _i_item_sk228;
        tbl_Project_TD_1615_output.setInt32(i, 1, _inv1_i_item_sk3545);
        int32_t _inv1_d_moy3546 = _d_moy128;
        tbl_Project_TD_1615_output.setInt32(i, 2, _inv1_d_moy3546);
        int64_t _inv1_mean3547 = _mean3555;
        tbl_Project_TD_1615_output.setInt64(i, 3, _inv1_mean3547);
        int64_t _inv1_cov3548 = _cov3556;
        tbl_Project_TD_1615_output.setInt64(i, 4, _inv1_cov3548);
        int32_t _inv2_w_warehouse_sk3549 = _w_warehouse_sk4163;
        tbl_Project_TD_1615_output.setInt32(i, 5, _inv2_w_warehouse_sk3549);
        int32_t _inv2_i_item_sk3550 = _i_item_sk4141;
        tbl_Project_TD_1615_output.setInt32(i, 6, _inv2_i_item_sk3550);
        int32_t _inv2_d_moy3551 = _d_moy4185;
        tbl_Project_TD_1615_output.setInt32(i, 7, _inv2_d_moy3551);
        int64_t _inv2_mean3552 = _mean3588;
        tbl_Project_TD_1615_output.setInt64(i, 8, _inv2_mean3552);
        int64_t _inv2_cov3553 = _cov3589;
        tbl_Project_TD_1615_output.setInt64(i, 9, _inv2_cov3553);
    }
    tbl_Project_TD_1615_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1615_output #Row: " << tbl_Project_TD_1615_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0467(Table &tbl_Project_TD_1615_output, Table &tbl_Sort_TD_0467_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(inv1_w_warehouse_sk#3544 ASC NULLS FIRST, inv1_i_item_sk#3545 ASC NULLS FIRST, inv1_d_moy#3546 ASC NULLS FIRST, inv1_mean#3547 ASC NULLS FIRST, inv1_cov#3548 ASC NULLS FIRST, inv2_d_moy#3551 ASC NULLS FIRST, inv2_mean#3552 ASC NULLS FIRST, inv2_cov#3553 ASC NULLS FIRST)
    // Input: ListBuffer(inv1_w_warehouse_sk#3544, inv1_i_item_sk#3545, inv1_d_moy#3546, inv1_mean#3547, inv1_cov#3548, inv2_w_warehouse_sk#3549, inv2_i_item_sk#3550, inv2_d_moy#3551, inv2_mean#3552, inv2_cov#3553)
    // Output: ListBuffer(inv1_w_warehouse_sk#3544, inv1_i_item_sk#3545, inv1_d_moy#3546, inv1_mean#3547, inv1_cov#3548, inv2_w_warehouse_sk#3549, inv2_i_item_sk#3550, inv2_d_moy#3551, inv2_mean#3552, inv2_cov#3553)
    struct SW_Sort_TD_0467Row {
        int32_t _inv1_w_warehouse_sk3544;
        int32_t _inv1_i_item_sk3545;
        int32_t _inv1_d_moy3546;
        int64_t _inv1_mean3547;
        int64_t _inv1_cov3548;
        int32_t _inv2_w_warehouse_sk3549;
        int32_t _inv2_i_item_sk3550;
        int32_t _inv2_d_moy3551;
        int64_t _inv2_mean3552;
        int64_t _inv2_cov3553;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0467Row& a, const SW_Sort_TD_0467Row& b) const { return 
 (a._inv1_w_warehouse_sk3544 < b._inv1_w_warehouse_sk3544) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 < b._inv1_i_item_sk3545)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 < b._inv1_d_moy3546)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 == b._inv1_d_moy3546) && (a._inv1_mean3547 < b._inv1_mean3547)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 == b._inv1_d_moy3546) && (a._inv1_mean3547 == b._inv1_mean3547) && (a._inv1_cov3548 < b._inv1_cov3548)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 == b._inv1_d_moy3546) && (a._inv1_mean3547 == b._inv1_mean3547) && (a._inv1_cov3548 == b._inv1_cov3548) && (a._inv2_d_moy3551 < b._inv2_d_moy3551)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 == b._inv1_d_moy3546) && (a._inv1_mean3547 == b._inv1_mean3547) && (a._inv1_cov3548 == b._inv1_cov3548) && (a._inv2_d_moy3551 == b._inv2_d_moy3551) && (a._inv2_mean3552 < b._inv2_mean3552)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 == b._inv1_d_moy3546) && (a._inv1_mean3547 == b._inv1_mean3547) && (a._inv1_cov3548 == b._inv1_cov3548) && (a._inv2_d_moy3551 == b._inv2_d_moy3551) && (a._inv2_mean3552 == b._inv2_mean3552) && (a._inv2_cov3553 < b._inv2_cov3553)); 
}
    }SW_Sort_TD_0467_order; 

    int nrow1 = tbl_Project_TD_1615_output.getNumRow();
    std::vector<SW_Sort_TD_0467Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv1_w_warehouse_sk3544 = tbl_Project_TD_1615_output.getInt32(i, 0);
        int32_t _inv1_i_item_sk3545 = tbl_Project_TD_1615_output.getInt32(i, 1);
        int32_t _inv1_d_moy3546 = tbl_Project_TD_1615_output.getInt32(i, 2);
        int64_t _inv1_mean3547 = tbl_Project_TD_1615_output.getInt64(i, 3);
        int64_t _inv1_cov3548 = tbl_Project_TD_1615_output.getInt64(i, 4);
        int32_t _inv2_w_warehouse_sk3549 = tbl_Project_TD_1615_output.getInt32(i, 5);
        int32_t _inv2_i_item_sk3550 = tbl_Project_TD_1615_output.getInt32(i, 6);
        int32_t _inv2_d_moy3551 = tbl_Project_TD_1615_output.getInt32(i, 7);
        int64_t _inv2_mean3552 = tbl_Project_TD_1615_output.getInt64(i, 8);
        int64_t _inv2_cov3553 = tbl_Project_TD_1615_output.getInt64(i, 9);
        SW_Sort_TD_0467Row t = {_inv1_w_warehouse_sk3544,_inv1_i_item_sk3545,_inv1_d_moy3546,_inv1_mean3547,_inv1_cov3548,_inv2_w_warehouse_sk3549,_inv2_i_item_sk3550,_inv2_d_moy3551,_inv2_mean3552,_inv2_cov3553};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0467_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0467_output.setInt32(r, 0, it._inv1_w_warehouse_sk3544);
        tbl_Sort_TD_0467_output.setInt32(r, 1, it._inv1_i_item_sk3545);
        tbl_Sort_TD_0467_output.setInt32(r, 2, it._inv1_d_moy3546);
        tbl_Sort_TD_0467_output.setInt64(r, 3, it._inv1_mean3547);
        tbl_Sort_TD_0467_output.setInt64(r, 4, it._inv1_cov3548);
        tbl_Sort_TD_0467_output.setInt32(r, 5, it._inv2_w_warehouse_sk3549);
        tbl_Sort_TD_0467_output.setInt32(r, 6, it._inv2_i_item_sk3550);
        tbl_Sort_TD_0467_output.setInt32(r, 7, it._inv2_d_moy3551);
        tbl_Sort_TD_0467_output.setInt64(r, 8, it._inv2_mean3552);
        tbl_Sort_TD_0467_output.setInt64(r, 9, it._inv2_cov3553);
        if (r < 10) {
            std::cout << it._inv1_w_warehouse_sk3544 << " " << it._inv1_i_item_sk3545 << " " << it._inv1_d_moy3546 << " " << it._inv1_mean3547 << " " << it._inv1_cov3548 << " " << it._inv2_w_warehouse_sk3549 << " " << it._inv2_i_item_sk3550 << " " << it._inv2_d_moy3551 << " " << it._inv2_mean3552 << " " << it._inv2_cov3553 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0467_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0467_output #Row: " << tbl_Sort_TD_0467_output.getNumRow() << std::endl;
}

