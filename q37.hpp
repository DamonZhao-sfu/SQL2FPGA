#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7541(Table &tbl_SerializeFromObject_TD_8589_input, Table &tbl_Filter_TD_7541_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(inv_quantity_on_hand#660) AND ((inv_quantity_on_hand#660 >= 100) AND (inv_quantity_on_hand#660 <= 500))) AND (isnotnull(inv_item_sk#658) AND isnotnull(inv_date_sk#657))))
    // Input: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_quantity_on_hand#660)
    // Output: ListBuffer(inv_date_sk#657, inv_item_sk#658)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8589_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_quantity_on_hand660 = tbl_SerializeFromObject_TD_8589_input.getInt32(i, 2);
        int32_t _inv_item_sk658 = tbl_SerializeFromObject_TD_8589_input.getInt32(i, 1);
        int32_t _inv_date_sk657 = tbl_SerializeFromObject_TD_8589_input.getInt32(i, 0);
        if (((_inv_quantity_on_hand660!= 0) && ((_inv_quantity_on_hand660 >= 100) && (_inv_quantity_on_hand660 <= 500))) && ((_inv_item_sk658!= 0) && (_inv_date_sk657!= 0))) {
            int32_t _inv_date_sk657_t = tbl_SerializeFromObject_TD_8589_input.getInt32(i, 0);
            tbl_Filter_TD_7541_output.setInt32(r, 0, _inv_date_sk657_t);
            int32_t _inv_item_sk658_t = tbl_SerializeFromObject_TD_8589_input.getInt32(i, 1);
            tbl_Filter_TD_7541_output.setInt32(r, 1, _inv_item_sk658_t);
            r++;
        }
    }
    tbl_Filter_TD_7541_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7541_output #Row: " << tbl_Filter_TD_7541_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7179(Table &tbl_SerializeFromObject_TD_8699_input, Table &tbl_Filter_TD_7179_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#233) AND (((i_current_price#233 >= 68.00) AND (i_current_price#233 <= 98.00)) AND i_manufact_id#241 IN (677,940,694,808))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_manufact_id#241)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8699_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_SerializeFromObject_TD_8699_input.getInt32(i, 3);
        int32_t _i_manufact_id241 = tbl_SerializeFromObject_TD_8699_input.getInt32(i, 4);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_8699_input.getInt32(i, 0);
        auto reuse_col_str_446 = _i_manufact_id241;
        if (((_i_current_price233!= 0) && (((_i_current_price233 >= 68.00) && (_i_current_price233 <= 98.00)) && ((reuse_col_str_446 == 677) || (reuse_col_str_446 == 940) || (reuse_col_str_446 == 694) || (reuse_col_str_446 == 808) || (0)))) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_8699_input.getInt32(i, 0);
            tbl_Filter_TD_7179_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_8699_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7179_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_8699_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7179_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_t);
            int32_t _i_current_price233_t = tbl_SerializeFromObject_TD_8699_input.getInt32(i, 3);
            tbl_Filter_TD_7179_output.setInt32(r, 3, _i_current_price233_t);
            r++;
        }
    }
    tbl_Filter_TD_7179_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7179_output #Row: " << tbl_Filter_TD_7179_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6966(Table &tbl_SerializeFromObject_TD_7771_input, Table &tbl_Filter_TD_6966_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-02-01) AND (d_date#122 <= 2000-04-01))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7771_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_7771_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_7771_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000201) && (_d_date122 <= 20000401))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_7771_input.getInt32(i, 0);
            tbl_Filter_TD_6966_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_6966_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6966_output #Row: " << tbl_Filter_TD_6966_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6238_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_6238_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6238_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6238_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_6238_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
};
struct SW_JOIN_INNER_TD_6238_key_rightMajor {
    int32_t _inv_item_sk658;
    bool operator==(const SW_JOIN_INNER_TD_6238_key_rightMajor& other) const {
        return ((_inv_item_sk658 == other._inv_item_sk658));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6238_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6238_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_item_sk658));
    }
};
}
struct SW_JOIN_INNER_TD_6238_payload_rightMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_item_sk658;
};
void SW_JOIN_INNER_TD_6238(Table &tbl_Filter_TD_7179_output, Table &tbl_Filter_TD_7541_output, Table &tbl_JOIN_INNER_TD_6238_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_item_sk#658 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233)
    // Right Table: ListBuffer(inv_date_sk#657, inv_item_sk#658)
    // Output Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, inv_date_sk#657)
    int left_nrow = tbl_Filter_TD_7179_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7541_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6238_key_leftMajor, SW_JOIN_INNER_TD_6238_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7179_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_7179_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6238_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_7179_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_7179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_7179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_Filter_TD_7179_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6238_payload_leftMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232, _i_current_price233};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7541_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_7541_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6238_key_leftMajor{_inv_item_sk658_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                int32_t _inv_date_sk657 = tbl_Filter_TD_7541_output.getInt32(i, 0);
                int32_t _inv_item_sk658 = tbl_Filter_TD_7541_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6238_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_INNER_TD_6238_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_6238_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6238_output.setInt32(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_6238_output.setInt32(r, 4, _inv_date_sk657);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6238_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6238_key_rightMajor, SW_JOIN_INNER_TD_6238_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7541_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_7541_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6238_key_rightMajor keyA{_inv_item_sk658_k};
            int32_t _inv_date_sk657 = tbl_Filter_TD_7541_output.getInt32(i, 0);
            int32_t _inv_item_sk658 = tbl_Filter_TD_7541_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6238_payload_rightMajor payloadA{_inv_date_sk657, _inv_item_sk658};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7179_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_7179_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6238_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_item_sk658 = (it->second)._inv_item_sk658;
                int32_t _i_item_sk228 = tbl_Filter_TD_7179_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_7179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_7179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_Filter_TD_7179_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6238_output.setInt32(r, 4, _inv_date_sk657);
                tbl_JOIN_INNER_TD_6238_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_INNER_TD_6238_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_6238_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6238_output.setInt32(r, 3, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6238_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6238_output #Row: " << tbl_JOIN_INNER_TD_6238_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5553(Table &tbl_SerializeFromObject_TD_6108_input, Table &tbl_Filter_TD_5553_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_item_sk#1119))
    // Input: ListBuffer(cs_item_sk#1119)
    // Output: ListBuffer(cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6108_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_6108_input.getInt32(i, 0);
        if (_cs_item_sk1119!= 0) {
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_6108_input.getInt32(i, 0);
            tbl_Filter_TD_5553_output.setInt32(r, 0, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_5553_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5553_output #Row: " << tbl_Filter_TD_5553_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5242_key_leftMajor {
    int32_t _inv_date_sk657;
    bool operator==(const SW_JOIN_INNER_TD_5242_key_leftMajor& other) const {
        return ((_inv_date_sk657 == other._inv_date_sk657));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5242_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5242_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_date_sk657));
    }
};
}
struct SW_JOIN_INNER_TD_5242_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    int32_t _inv_date_sk657;
};
struct SW_JOIN_INNER_TD_5242_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_5242_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5242_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5242_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_5242_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_5242(Table &tbl_JOIN_INNER_TD_6238_output, Table &tbl_Filter_TD_6966_output, Table &tbl_JOIN_INNER_TD_5242_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = inv_date_sk#657))
    // Left Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, inv_date_sk#657)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233)
    int left_nrow = tbl_JOIN_INNER_TD_6238_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6966_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5242_key_leftMajor, SW_JOIN_INNER_TD_5242_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6238_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_6238_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5242_key_leftMajor keyA{_inv_date_sk657_k};
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_6238_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_6238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_6238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_6238_output.getInt32(i, 3);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_6238_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5242_payload_leftMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232, _i_current_price233, _inv_date_sk657};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6966_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6966_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5242_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _d_date_sk120 = tbl_Filter_TD_6966_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5242_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_INNER_TD_5242_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5242_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_5242_output.setInt32(r, 3, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5242_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5242_key_rightMajor, SW_JOIN_INNER_TD_5242_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6966_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6966_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5242_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_6966_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5242_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6238_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_6238_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5242_key_rightMajor{_inv_date_sk657_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_6238_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_6238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_6238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_6238_output.getInt32(i, 3);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_6238_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_5242_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_INNER_TD_5242_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5242_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_5242_output.setInt32(r, 3, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5242_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5242_output #Row: " << tbl_JOIN_INNER_TD_5242_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4969_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_4969_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4969_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4969_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_4969_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
};
struct SW_JOIN_INNER_TD_4969_key_rightMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_4969_key_rightMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4969_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4969_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_4969_payload_rightMajor {
    int32_t _cs_item_sk1119;
};
void SW_JOIN_INNER_TD_4969(Table &tbl_JOIN_INNER_TD_5242_output, Table &tbl_Filter_TD_5553_output, Table &tbl_JOIN_INNER_TD_4969_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233)
    // Right Table: ListBuffer(cs_item_sk#1119)
    // Output Table: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    int left_nrow = tbl_JOIN_INNER_TD_5242_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5553_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4969_key_leftMajor, SW_JOIN_INNER_TD_4969_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5242_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_INNER_TD_5242_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4969_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_5242_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5242_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_5242_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_5242_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_4969_payload_leftMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232, _i_current_price233};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5553_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_5553_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4969_key_leftMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                int32_t _cs_item_sk1119 = tbl_Filter_TD_5553_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4969_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4969_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_4969_output.setInt32(r, 2, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4969_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4969_key_rightMajor, SW_JOIN_INNER_TD_4969_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5553_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_5553_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4969_key_rightMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_Filter_TD_5553_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4969_payload_rightMajor payloadA{_cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5242_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_INNER_TD_5242_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4969_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_5242_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5242_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_5242_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_5242_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_4969_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4969_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_4969_output.setInt32(r, 2, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4969_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4969_output #Row: " << tbl_JOIN_INNER_TD_4969_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3823_key {
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    bool operator==(const SW_Aggregate_TD_3823_key& other) const { return (_i_item_id229 == other._i_item_id229) && (_i_item_desc232 == other._i_item_desc232) && (_i_current_price233 == other._i_current_price233); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3823_key> {
    std::size_t operator() (const SW_Aggregate_TD_3823_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229)) + (hash<string>()(k._i_item_desc232)) + (hash<int32_t>()(k._i_current_price233));
    }
};
}
struct SW_Aggregate_TD_3823_payload {
};
void SW_Aggregate_TD_3823(Table &tbl_JOIN_INNER_TD_4969_output, Table &tbl_Aggregate_TD_3823_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    std::unordered_map<SW_Aggregate_TD_3823_key, SW_Aggregate_TD_3823_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4969_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_4969_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_4969_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _i_current_price233 = tbl_JOIN_INNER_TD_4969_output.getInt32(i, 2);
        SW_Aggregate_TD_3823_key k{std::string(_i_item_id229.data()), std::string(_i_item_desc232.data()), _i_current_price233};
        SW_Aggregate_TD_3823_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), ((it.first)._i_item_id229).data(), ((it.first)._i_item_id229).length());
        tbl_Aggregate_TD_3823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), ((it.first)._i_item_desc232).data(), ((it.first)._i_item_desc232).length());
        tbl_Aggregate_TD_3823_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232);
        tbl_Aggregate_TD_3823_output.setInt32(r, 2, (it.first)._i_current_price233);
        ++r;
    }
    tbl_Aggregate_TD_3823_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3823_output #Row: " << tbl_Aggregate_TD_3823_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2566(Table &tbl_Aggregate_TD_3823_output, Table &tbl_Sort_TD_2566_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_item_id#229 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    struct SW_Sort_TD_2566Row {
        std::string _i_item_id229;
        std::string _i_item_desc232;
        int32_t _i_current_price233;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2566Row& a, const SW_Sort_TD_2566Row& b) const { return 
 (a._i_item_id229 < b._i_item_id229); 
}
    }SW_Sort_TD_2566_order; 

    int nrow1 = tbl_Aggregate_TD_3823_output.getNumRow();
    std::vector<SW_Sort_TD_2566Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3823_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Aggregate_TD_3823_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _i_current_price233 = tbl_Aggregate_TD_3823_output.getInt32(i, 2);
        SW_Sort_TD_2566Row t = {std::string(_i_item_id229.data()),std::string(_i_item_desc232.data()),_i_current_price233};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2566_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2566_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_2566_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_desc232);
        tbl_Sort_TD_2566_output.setInt32(r, 2, it._i_current_price233);
        ++r;
    }
    tbl_Sort_TD_2566_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2566_output #Row: " << tbl_Sort_TD_2566_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1796(Table &tbl_Sort_TD_2566_output, Table &tbl_LocalLimit_TD_1796_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2566_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1796_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Sort_TD_2566_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1796_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        tbl_LocalLimit_TD_1796_output.setInt32(r, 2, tbl_Sort_TD_2566_output.getInt32(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1796_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1796_output #Row: " << tbl_LocalLimit_TD_1796_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0776(Table &tbl_LocalLimit_TD_1796_output, Table &tbl_GlobalLimit_TD_0776_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1796_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0776_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_LocalLimit_TD_1796_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0776_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        tbl_GlobalLimit_TD_0776_output.setInt32(r, 2, tbl_LocalLimit_TD_1796_output.getInt32(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_0776_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0776_output #Row: " << tbl_GlobalLimit_TD_0776_output.getNumRow() << std::endl;
}

