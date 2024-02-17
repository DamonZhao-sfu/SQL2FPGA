#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7130(Table &tbl_SerializeFromObject_TD_8381_input, Table &tbl_Filter_TD_7130_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(inv_quantity_on_hand#660) AND ((inv_quantity_on_hand#660 >= 100) AND (inv_quantity_on_hand#660 <= 500))) AND (isnotnull(inv_item_sk#658) AND isnotnull(inv_date_sk#657))))
    // Input: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_quantity_on_hand#660)
    // Output: ListBuffer(inv_date_sk#657, inv_item_sk#658)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8381_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_quantity_on_hand660 = tbl_SerializeFromObject_TD_8381_input.getInt32(i, 2);
        int32_t _inv_item_sk658 = tbl_SerializeFromObject_TD_8381_input.getInt32(i, 1);
        int32_t _inv_date_sk657 = tbl_SerializeFromObject_TD_8381_input.getInt32(i, 0);
        if (((_inv_quantity_on_hand660!= 0) && ((_inv_quantity_on_hand660 >= 100) && (_inv_quantity_on_hand660 <= 500))) && ((_inv_item_sk658!= 0) && (_inv_date_sk657!= 0))) {
            int32_t _inv_date_sk657_t = tbl_SerializeFromObject_TD_8381_input.getInt32(i, 0);
            tbl_Filter_TD_7130_output.setInt32(r, 0, _inv_date_sk657_t);
            int32_t _inv_item_sk658_t = tbl_SerializeFromObject_TD_8381_input.getInt32(i, 1);
            tbl_Filter_TD_7130_output.setInt32(r, 1, _inv_item_sk658_t);
            r++;
        }
    }
    tbl_Filter_TD_7130_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7130_output #Row: " << tbl_Filter_TD_7130_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7819(Table &tbl_SerializeFromObject_TD_8910_input, Table &tbl_Filter_TD_7819_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#233) AND (((i_current_price#233 >= 62.00) AND (i_current_price#233 <= 92.00)) AND i_manufact_id#241 IN (129,270,821,423))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_manufact_id#241)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8910_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_SerializeFromObject_TD_8910_input.getInt32(i, 3);
        int32_t _i_manufact_id241 = tbl_SerializeFromObject_TD_8910_input.getInt32(i, 4);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_8910_input.getInt32(i, 0);
        auto reuse_col_str_531 = _i_manufact_id241;
        if (((_i_current_price233!= 0) && (((_i_current_price233 >= 62.00) && (_i_current_price233 <= 92.00)) && ((reuse_col_str_531 == 129) || (reuse_col_str_531 == 270) || (reuse_col_str_531 == 821) || (reuse_col_str_531 == 423) || (0)))) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_8910_input.getInt32(i, 0);
            tbl_Filter_TD_7819_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_8910_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7819_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_8910_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7819_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_t);
            int32_t _i_current_price233_t = tbl_SerializeFromObject_TD_8910_input.getInt32(i, 3);
            tbl_Filter_TD_7819_output.setInt32(r, 3, _i_current_price233_t);
            r++;
        }
    }
    tbl_Filter_TD_7819_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7819_output #Row: " << tbl_Filter_TD_7819_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6751(Table &tbl_SerializeFromObject_TD_7683_input, Table &tbl_Filter_TD_6751_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-05-25) AND (d_date#122 <= 2000-07-24))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7683_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_7683_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_7683_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000525) && (_d_date122 <= 20000724))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_7683_input.getInt32(i, 0);
            tbl_Filter_TD_6751_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_6751_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6751_output #Row: " << tbl_Filter_TD_6751_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_652_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_652_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_652_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_652_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_652_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
};
struct SW_JOIN_INNER_TD_652_key_rightMajor {
    int32_t _inv_item_sk658;
    bool operator==(const SW_JOIN_INNER_TD_652_key_rightMajor& other) const {
        return ((_inv_item_sk658 == other._inv_item_sk658));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_652_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_652_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_item_sk658));
    }
};
}
struct SW_JOIN_INNER_TD_652_payload_rightMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_item_sk658;
};
void SW_JOIN_INNER_TD_652(Table &tbl_Filter_TD_7819_output, Table &tbl_Filter_TD_7130_output, Table &tbl_JOIN_INNER_TD_652_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_item_sk#658 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233)
    // Right Table: ListBuffer(inv_date_sk#657, inv_item_sk#658)
    // Output Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, inv_date_sk#657)
    int left_nrow = tbl_Filter_TD_7819_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7130_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_652_key_leftMajor, SW_JOIN_INNER_TD_652_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7819_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_7819_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_652_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_7819_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_7819_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_7819_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_Filter_TD_7819_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_652_payload_leftMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232, _i_current_price233};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7130_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_7130_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_652_key_leftMajor{_inv_item_sk658_k});
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
                int32_t _inv_date_sk657 = tbl_Filter_TD_7130_output.getInt32(i, 0);
                int32_t _inv_item_sk658 = tbl_Filter_TD_7130_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_652_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_INNER_TD_652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_652_output.setInt32(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_652_output.setInt32(r, 4, _inv_date_sk657);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_652_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_652_key_rightMajor, SW_JOIN_INNER_TD_652_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7130_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_item_sk658_k = tbl_Filter_TD_7130_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_652_key_rightMajor keyA{_inv_item_sk658_k};
            int32_t _inv_date_sk657 = tbl_Filter_TD_7130_output.getInt32(i, 0);
            int32_t _inv_item_sk658 = tbl_Filter_TD_7130_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_652_payload_rightMajor payloadA{_inv_date_sk657, _inv_item_sk658};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7819_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_7819_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_652_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_item_sk658 = (it->second)._inv_item_sk658;
                int32_t _i_item_sk228 = tbl_Filter_TD_7819_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_7819_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_7819_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_Filter_TD_7819_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_652_output.setInt32(r, 4, _inv_date_sk657);
                tbl_JOIN_INNER_TD_652_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_INNER_TD_652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_652_output.setInt32(r, 3, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_652_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_652_output #Row: " << tbl_JOIN_INNER_TD_652_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5648(Table &tbl_SerializeFromObject_TD_6402_input, Table &tbl_Filter_TD_5648_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_item_sk#1208))
    // Input: ListBuffer(ss_item_sk#1208)
    // Output: ListBuffer(ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6402_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_6402_input.getInt32(i, 0);
        if (_ss_item_sk1208!= 0) {
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_6402_input.getInt32(i, 0);
            tbl_Filter_TD_5648_output.setInt32(r, 0, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_5648_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5648_output #Row: " << tbl_Filter_TD_5648_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5816_key_leftMajor {
    int32_t _inv_date_sk657;
    bool operator==(const SW_JOIN_INNER_TD_5816_key_leftMajor& other) const {
        return ((_inv_date_sk657 == other._inv_date_sk657));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5816_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5816_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_date_sk657));
    }
};
}
struct SW_JOIN_INNER_TD_5816_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    int32_t _inv_date_sk657;
};
struct SW_JOIN_INNER_TD_5816_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_5816_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5816_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5816_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_5816_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_5816(Table &tbl_JOIN_INNER_TD_652_output, Table &tbl_Filter_TD_6751_output, Table &tbl_JOIN_INNER_TD_5816_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = inv_date_sk#657))
    // Left Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, inv_date_sk#657)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233)
    int left_nrow = tbl_JOIN_INNER_TD_652_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6751_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5816_key_leftMajor, SW_JOIN_INNER_TD_5816_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_652_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_652_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5816_key_leftMajor keyA{_inv_date_sk657_k};
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_652_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_652_output.getInt32(i, 3);
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_652_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5816_payload_leftMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232, _i_current_price233, _inv_date_sk657};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6751_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6751_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5816_key_leftMajor{_d_date_sk120_k});
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
                int32_t _d_date_sk120 = tbl_Filter_TD_6751_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5816_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_INNER_TD_5816_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5816_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_5816_output.setInt32(r, 3, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5816_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5816_key_rightMajor, SW_JOIN_INNER_TD_5816_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6751_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6751_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5816_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_6751_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5816_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_652_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_652_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5816_key_rightMajor{_inv_date_sk657_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_652_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_652_output.getInt32(i, 3);
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_652_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_5816_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_INNER_TD_5816_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5816_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_5816_output.setInt32(r, 3, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5816_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5816_output #Row: " << tbl_JOIN_INNER_TD_5816_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4764_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_4764_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4764_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4764_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_4764_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
};
struct SW_JOIN_INNER_TD_4764_key_rightMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_4764_key_rightMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4764_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4764_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_4764_payload_rightMajor {
    int32_t _ss_item_sk1208;
};
void SW_JOIN_INNER_TD_4764(Table &tbl_JOIN_INNER_TD_5816_output, Table &tbl_Filter_TD_5648_output, Table &tbl_JOIN_INNER_TD_4764_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233)
    // Right Table: ListBuffer(ss_item_sk#1208)
    // Output Table: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    int left_nrow = tbl_JOIN_INNER_TD_5816_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5648_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4764_key_leftMajor, SW_JOIN_INNER_TD_4764_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5816_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_INNER_TD_5816_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4764_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_5816_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5816_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_5816_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_5816_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_4764_payload_leftMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232, _i_current_price233};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5648_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_5648_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4764_key_leftMajor{_ss_item_sk1208_k});
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
                int32_t _ss_item_sk1208 = tbl_Filter_TD_5648_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4764_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4764_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_4764_output.setInt32(r, 2, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4764_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4764_key_rightMajor, SW_JOIN_INNER_TD_4764_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5648_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_5648_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4764_key_rightMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_Filter_TD_5648_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4764_payload_rightMajor payloadA{_ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5816_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_INNER_TD_5816_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4764_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_5816_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5816_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_5816_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_5816_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_4764_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4764_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_4764_output.setInt32(r, 2, _i_current_price233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4764_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4764_output #Row: " << tbl_JOIN_INNER_TD_4764_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3944_key {
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    bool operator==(const SW_Aggregate_TD_3944_key& other) const { return (_i_item_id229 == other._i_item_id229) && (_i_item_desc232 == other._i_item_desc232) && (_i_current_price233 == other._i_current_price233); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3944_key> {
    std::size_t operator() (const SW_Aggregate_TD_3944_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229)) + (hash<string>()(k._i_item_desc232)) + (hash<int32_t>()(k._i_current_price233));
    }
};
}
struct SW_Aggregate_TD_3944_payload {
};
void SW_Aggregate_TD_3944(Table &tbl_JOIN_INNER_TD_4764_output, Table &tbl_Aggregate_TD_3944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    std::unordered_map<SW_Aggregate_TD_3944_key, SW_Aggregate_TD_3944_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4764_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_4764_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_4764_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _i_current_price233 = tbl_JOIN_INNER_TD_4764_output.getInt32(i, 2);
        SW_Aggregate_TD_3944_key k{std::string(_i_item_id229.data()), std::string(_i_item_desc232.data()), _i_current_price233};
        SW_Aggregate_TD_3944_payload p{};
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
        tbl_Aggregate_TD_3944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), ((it.first)._i_item_desc232).data(), ((it.first)._i_item_desc232).length());
        tbl_Aggregate_TD_3944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232);
        tbl_Aggregate_TD_3944_output.setInt32(r, 2, (it.first)._i_current_price233);
        ++r;
    }
    tbl_Aggregate_TD_3944_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3944_output #Row: " << tbl_Aggregate_TD_3944_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2665(Table &tbl_Aggregate_TD_3944_output, Table &tbl_Sort_TD_2665_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_item_id#229 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    struct SW_Sort_TD_2665Row {
        std::string _i_item_id229;
        std::string _i_item_desc232;
        int32_t _i_current_price233;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2665Row& a, const SW_Sort_TD_2665Row& b) const { return 
 (a._i_item_id229 < b._i_item_id229); 
}
    }SW_Sort_TD_2665_order; 

    int nrow1 = tbl_Aggregate_TD_3944_output.getNumRow();
    std::vector<SW_Sort_TD_2665Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3944_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Aggregate_TD_3944_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _i_current_price233 = tbl_Aggregate_TD_3944_output.getInt32(i, 2);
        SW_Sort_TD_2665Row t = {std::string(_i_item_id229.data()),std::string(_i_item_desc232.data()),_i_current_price233};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2665_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2665_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_2665_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_desc232);
        tbl_Sort_TD_2665_output.setInt32(r, 2, it._i_current_price233);
        ++r;
    }
    tbl_Sort_TD_2665_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2665_output #Row: " << tbl_Sort_TD_2665_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1304(Table &tbl_Sort_TD_2665_output, Table &tbl_LocalLimit_TD_1304_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2665_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1304_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Sort_TD_2665_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1304_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        tbl_LocalLimit_TD_1304_output.setInt32(r, 2, tbl_Sort_TD_2665_output.getInt32(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1304_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1304_output #Row: " << tbl_LocalLimit_TD_1304_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_036(Table &tbl_LocalLimit_TD_1304_output, Table &tbl_GlobalLimit_TD_036_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_current_price#233)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1304_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_036_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_LocalLimit_TD_1304_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_036_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        tbl_GlobalLimit_TD_036_output.setInt32(r, 2, tbl_LocalLimit_TD_1304_output.getInt32(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_036_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_036_output #Row: " << tbl_GlobalLimit_TD_036_output.getNumRow() << std::endl;
}

